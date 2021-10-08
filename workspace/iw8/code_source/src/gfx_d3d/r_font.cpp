/*
==============
R_TextWidth
==============
*/

int __fastcall R_TextWidth(const char *text, int maxChars, GfxFont *font, int textHeight)
{
  return ?R_TextWidth@@YAHPEBDHPEAUGfxFont@@H@Z(text, maxChars, font, textHeight);
}

/*
==============
R_IsBreakableSpace
==============
*/

bool __fastcall R_IsBreakableSpace(unsigned int uiCodepoint)
{
  return ?R_IsBreakableSpace@@YA_NI@Z(uiCodepoint);
}

/*
==============
R_PrepareTextLine
==============
*/

void __fastcall R_PrepareTextLine(const char *input, __int64 inputLen, char *output, int outputLen, bool stripNewline, char *colorEscape)
{
  ?R_PrepareTextLine@@YAXPEBD_JPEADH_N2@Z(input, inputLen, output, outputLen, stripNewline, colorEscape);
}

/*
==============
R_Font_GetLegacyFontStyle
==============
*/

FontGlowStyle *__fastcall R_Font_GetLegacyFontStyle(int stylePacked)
{
  return ?R_Font_GetLegacyFontStyle@@YAPEAUFontGlowStyle@@H@Z(stylePacked);
}

/*
==============
R_Font_WordWrap
==============
*/

void __fastcall R_Font_WordWrap(const char *text, float boxWidth, GfxFont *font, int fontSize, float scale, char tracking, int maxLines, bool leftToRight, TextLine *outLines, int *outLineCount)
{
  ?R_Font_WordWrap@@YAXPEBDMPEAUGfxFont@@HMDH_NPEAUTextLine@@PEAH@Z(text, boxWidth, font, fontSize, scale, tracking, maxLines, leftToRight, outLines, outLineCount);
}

/*
==============
R_Font_UsePost
==============
*/

bool __fastcall R_Font_UsePost(int stylePacked)
{
  return ?R_Font_UsePost@@YA_NH@Z(stylePacked);
}

/*
==============
MakeUTF8NameSafeForAllLanguages
==============
*/

bool __fastcall MakeUTF8NameSafeForAllLanguages(const char *name, int nameLength, bool canGetFont)
{
  return ?MakeUTF8NameSafeForAllLanguages@@YA_NPEBDH_N@Z(name, nameLength, canGetFont);
}

/*
==============
R_NormalizedTextScale
==============
*/

double __fastcall R_NormalizedTextScale(GfxFont *font, float scale)
{
  double result; 

  *(float *)&result = ?R_NormalizedTextScale@@YAMPEAUGfxFont@@M@Z(font, scale);
  return result;
}

/*
==============
R_TextWidth
==============
*/

int __fastcall R_TextWidth(const char *text, int maxChars, GfxFont *font)
{
  return ?R_TextWidth@@YAHPEBDHPEAUGfxFont@@@Z(text, maxChars, font);
}

/*
==============
R_ProcessGPadLetterColor
==============
*/

unsigned int __fastcall R_ProcessGPadLetterColor(unsigned int color, unsigned int letter)
{
  return ?R_ProcessGPadLetterColor@@YAIII@Z(color, letter);
}

/*
==============
R_ResetFontInstances
==============
*/

void R_ResetFontInstances(void)
{
  ?R_ResetFontInstances@@YAXXZ();
}

/*
==============
R_GetCharacterGlyph
==============
*/

void __fastcall R_GetCharacterGlyph(GfxFont *font, int fontHeight, unsigned int letter, CachedGlyph *outGlyph)
{
  ?R_GetCharacterGlyph@@YAXPEAUGfxFont@@HIPEAUCachedGlyph@@@Z(font, fontHeight, letter, outGlyph);
}

/*
==============
InvertArabicUTF8Stream
==============
*/

void __fastcall InvertArabicUTF8Stream(char *utf8Stream)
{
  ?InvertArabicUTF8Stream@@YAXPEAD@Z(utf8Stream);
}

/*
==============
R_Font_MeasureGlyph
==============
*/

double __fastcall R_Font_MeasureGlyph(unsigned int unicodeCodePoint, GfxFont *font, int fontSize, float scale)
{
  double result; 

  *(float *)&result = ?R_Font_MeasureGlyph@@YAMIPEAUGfxFont@@HM@Z(unicodeCodePoint, font, fontSize, scale);
  return result;
}

/*
==============
R_FontGetRandomLetter
==============
*/

unsigned int __fastcall R_FontGetRandomLetter(int seed)
{
  return ?R_FontGetRandomLetter@@YAIH@Z(seed);
}

/*
==============
R_TextLineWrapPosition
==============
*/

const char *__fastcall R_TextLineWrapPosition(const char *text, int bufferSize, int pixelsAvailable, GfxFont *font, float scale)
{
  return ?R_TextLineWrapPosition@@YAPEBDPEBDHHPEAUGfxFont@@M@Z(text, bufferSize, pixelsAvailable, font, scale);
}

/*
==============
R_RegisterTTF
==============
*/

TTFDef *__fastcall R_RegisterTTF(const char *name)
{
  return ?R_RegisterTTF@@YAPEAUTTFDef@@PEBD@Z(name);
}

/*
==============
R_TextLineBreakPosition
==============
*/

const char *__fastcall R_TextLineBreakPosition(const char *text, int pixelsAvailable, GfxFont *font, float scale, int *charCount)
{
  return ?R_TextLineBreakPosition@@YAPEBDPEBDHPEAUGfxFont@@MPEAH@Z(text, pixelsAvailable, font, scale, charCount);
}

/*
==============
R_TryProcessKBMLetterColor
==============
*/

bool __fastcall R_TryProcessKBMLetterColor(unsigned int color, unsigned int letter, unsigned int *outColor)
{
  return ?R_TryProcessKBMLetterColor@@YA_NIIAEAI@Z(color, letter, outColor);
}

/*
==============
R_GetCharacterGlyphWithFlags
==============
*/

void __fastcall R_GetCharacterGlyphWithFlags(GfxFont *font, int fontHeight, unsigned int letter, CachedGlyph *outGlyph, FontCacheFXFlags flags)
{
  ?R_GetCharacterGlyphWithFlags@@YAXPEAUGfxFont@@HIPEAUCachedGlyph@@W4FontCacheFXFlags@@@Z(font, fontHeight, letter, outGlyph, flags);
}

/*
==============
R_ConsoleTextWidth
==============
*/

int __fastcall R_ConsoleTextWidth(const char *textPool, int poolSize, int firstChar, int charCount, GfxFont *font)
{
  return ?R_ConsoleTextWidth@@YAHPEBDHHHPEAUGfxFont@@@Z(textPool, poolSize, firstChar, charCount, font);
}

/*
==============
MakeWideCharNameSafeForAllLanguages
==============
*/

bool __fastcall MakeWideCharNameSafeForAllLanguages(char *safeName, const wchar_t *name, int nameLength)
{
  return ?MakeWideCharNameSafeForAllLanguages@@YA_NPEADPEB_WH@Z(safeName, name, nameLength);
}

/*
==============
R_RegisterFont
==============
*/

GfxFont *__fastcall R_RegisterFont(const char *name, int pixelHeight)
{
  return ?R_RegisterFont@@YAPEAUGfxFont@@PEBDH@Z(name, pixelHeight);
}

/*
==============
R_TextValidatePrintable
==============
*/

void __fastcall R_TextValidatePrintable(const char *text)
{
  ?R_TextValidatePrintable@@YAXPEBD@Z(text);
}

/*
==============
R_TextWidth
==============
*/

int __fastcall R_TextWidth(const char *text, int maxChars, GfxFont *font, int textHeight, char tracking, int allowGpadAnySize)
{
  return ?R_TextWidth@@YAHPEBDHPEAUGfxFont@@HDH@Z(text, maxChars, font, textHeight, tracking, allowGpadAnySize);
}

/*
==============
R_IsArabicCharacter
==============
*/

bool __fastcall R_IsArabicCharacter(int codePoint)
{
  return ?R_IsArabicCharacter@@YA_NH@Z(codePoint);
}

/*
==============
R_GetCharacterGlyph
==============
*/

void __fastcall R_GetCharacterGlyph(GfxFont *font, unsigned int letter, CachedGlyph *outGlyph)
{
  ?R_GetCharacterGlyph@@YAXPEAUGfxFont@@IPEAUCachedGlyph@@@Z(font, letter, outGlyph);
}

/*
==============
R_LetterWidth
==============
*/

int __fastcall R_LetterWidth(unsigned int letter, GfxFont *font)
{
  return ?R_LetterWidth@@YAHIPEAUGfxFont@@@Z(letter, font);
}

/*
==============
R_TextHeight
==============
*/

int __fastcall R_TextHeight(GfxFont *font)
{
  return ?R_TextHeight@@YAHPEAUGfxFont@@@Z(font);
}

/*
==============
R_ProcessGPadLetterColorVec4
==============
*/

void __fastcall R_ProcessGPadLetterColorVec4(vec4_t *color, unsigned int letter)
{
  ?R_ProcessGPadLetterColorVec4@@YAXAEATvec4_t@@I@Z(color, letter);
}

/*
==============
R_IsSpace
==============
*/

bool __fastcall R_IsSpace(unsigned int uiCodepoint)
{
  return ?R_IsSpace@@YA_NI@Z(uiCodepoint);
}

/*
==============
InvertArabicUTF8Stream
==============
*/
void InvertArabicUTF8Stream(char *utf8Stream)
{
  char v1; 
  char *v2; 
  char *v4; 
  char v5; 
  bool v6; 
  int v7; 
  int v8; 
  bool v9; 
  size_t v10; 
  char v11; 

  v1 = 0;
  v2 = &v11;
  v11 = 0;
  v4 = utf8Stream;
  v5 = *utf8Stream;
  v6 = v5 < 0;
  if ( !v5 )
    return;
  do
  {
    if ( v6 )
    {
      if ( (v5 & 0xE0) == 0xC0 )
      {
        v7 = v4[1] & 0x7F | ((v5 & 0x1F) << 6);
        if ( (unsigned int)v7 < 0x80 )
          return;
        v8 = 2;
      }
      else if ( (v5 & 0xF0) == 0xE0 )
      {
        v7 = v4[2] & 0x7F | ((v4[1] & 0x7F | ((v5 & 0xF) << 6)) << 6);
        if ( (unsigned int)(v7 - 2048) > 0xCFFF && (unsigned int)v7 < 0xE000 )
          return;
        v8 = 3;
      }
      else
      {
        if ( (v5 & 0xF8) != 0xF0 )
          return;
        v7 = v4[3] & 0x7F | ((v4[2] & 0x7F | ((v4[1] & 0x7F | ((v5 & 7) << 6)) << 6)) << 6);
        if ( (unsigned int)(v7 - 0x10000) > 0xFFFFE )
          return;
        v8 = 4;
      }
    }
    else
    {
      v7 = (unsigned __int8)v5;
      v8 = 1;
    }
    if ( v7 <= 0xFFFF )
    {
      if ( v7 < 0 )
        return;
    }
    else
    {
      v7 = 32;
    }
    if ( (unsigned int)(v7 - 1536) <= 0xFF )
    {
      v9 = 1;
      goto LABEL_30;
    }
    if ( (unsigned int)(v7 - 1872) <= 0x2F )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 417, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
LABEL_22:
      v9 = 1;
      goto LABEL_30;
    }
    if ( (unsigned int)(v7 - 2208) <= 0x5F )
    {
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 422, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        goto LABEL_22;
LABEL_25:
      __debugbreak();
      v9 = 1;
      goto LABEL_30;
    }
    if ( (unsigned int)(v7 - 64336) <= 0x2AF )
    {
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 427, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        goto LABEL_22;
      goto LABEL_25;
    }
    v9 = (unsigned int)(v7 - 65136) <= 0x8F;
LABEL_30:
    v2 -= v8;
    v1 |= v9;
    memcpy_0(v2, v4, v8);
    v4 += v8;
    v5 = *v4;
    v6 = *v4 < 0;
  }
  while ( *v4 );
  if ( v1 )
  {
    v10 = -1i64;
    do
      ++v10;
    while ( v2[v10] );
    memcpy_0(utf8Stream, v2, v10);
  }
}

/*
==============
MakeUTF8NameSafeForAllLanguages
==============
*/
__int64 MakeUTF8NameSafeForAllLanguages(const char *name, int nameLength, bool canGetFont)
{
  const char *v5; 
  unsigned __int8 v6; 
  GfxFont *v7; 
  unsigned __int8 v8; 
  bool v9; 
  unsigned int v10; 
  int v11; 
  CachedGlyph outGlyph; 

  v5 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 799, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( nameLength > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 800, ASSERT_TYPE_ASSERT, "(nameLength <= 1024)", (const char *)&queryFormat, "nameLength <= MAX_STRING_CHARS") )
    __debugbreak();
  v6 = 0;
  if ( canGetFont )
  {
    v7 = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 807, ASSERT_TYPE_ASSERT, "(font)", "%s\n\tFont %s is not loaded", "font", "fonts/fira_mono_regular.ttf") )
      __debugbreak();
  }
  else
  {
    v7 = NULL;
  }
  v8 = *v5;
  v9 = *v5 < 0;
  if ( *v5 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        if ( (v8 & 0xE0) == 0xC0 )
        {
          v10 = v5[1] & 0x7F | ((v8 & 0x1F) << 6);
          if ( v10 < 0x80 )
            return v6;
          v11 = 2;
        }
        else if ( (v8 & 0xF0) == 0xE0 )
        {
          v10 = v5[2] & 0x7F | ((v5[1] & 0x7F | ((v8 & 0xF) << 6)) << 6);
          if ( v10 - 2048 > 0xCFFF && v10 < 0xE000 )
            return v6;
          v11 = 3;
        }
        else
        {
          if ( (v8 & 0xF8) != 0xF0 )
            return v6;
          v10 = v5[3] & 0x7F | ((v5[2] & 0x7F | ((v5[1] & 0x7F | ((v8 & 7) << 6)) << 6)) << 6);
          if ( v10 - 0x10000 > 0xFFFFE )
            return v6;
          v11 = 4;
        }
      }
      else
      {
        v10 = v8;
        v11 = 1;
      }
      if ( v10 > 0xFFFF )
        v10 = 32;
      if ( !v6 && v10 != 95 )
      {
        if ( v10 > 0x2029 )
        {
          if ( v10 != 8239 && v10 != 8287 && v10 != 12288 && v10 != 65279 && v10 != 65440 )
          {
LABEL_43:
            if ( v10 != 46 )
            {
              if ( !v7 || (R_GetCharacterGlyph(v7, v7->pixelHeight, v10, &outGlyph), outGlyph.letter != 46) )
                v6 = 1;
            }
          }
        }
        else if ( v10 < 0x2028 && v10 != 160 && v10 - 9 > 4 && v10 != 32 && v10 != 133 && v10 != 6158 && v10 - 0x2000 > 0xB )
        {
          goto LABEL_43;
        }
      }
      v5 += v11;
      v8 = *v5;
      v9 = *v5 < 0;
      if ( !*v5 )
        return v6;
    }
  }
  return 0i64;
}

/*
==============
MakeWideCharNameSafeForAllLanguages
==============
*/
__int64 MakeWideCharNameSafeForAllLanguages(char *safeName, const wchar_t *name, int nameLength)
{
  __int64 cbMultiByte; 
  char *v6; 
  unsigned __int8 v7; 
  GfxFont *v8; 
  const wchar_t *v9; 
  unsigned int v10; 
  CachedGlyph outGlyph; 

  cbMultiByte = nameLength;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 853, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !safeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 854, ASSERT_TYPE_ASSERT, "(safeName)", (const char *)&queryFormat, "safeName") )
    __debugbreak();
  v6 = &safeName[cbMultiByte - 1];
  v7 = 0;
  v8 = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 861, ASSERT_TYPE_ASSERT, "(font)", "%s\n\tFont %s is not loaded", "font", "fonts/fira_mono_regular.ttf") )
    __debugbreak();
  if ( *name )
  {
    v9 = name;
    while ( safeName < v6 )
    {
      v10 = *v9;
      if ( v10 != 95 && !isspace(*v9) && v10 != 46 )
      {
        if ( !v8 || (R_GetCharacterGlyph(v8, v8->pixelHeight, v10, &outGlyph), outGlyph.letter != 46) )
        {
          v7 = 1;
          break;
        }
      }
      if ( !*++v9 )
        break;
    }
  }
  *safeName = 0;
  WideCharToMultiByte(0xFDE9u, 0, name, -1, safeName, cbMultiByte, NULL, NULL);
  *v6 = 0;
  return v7;
}

/*
==============
R_ConsoleTextWidth
==============
*/
__int64 R_ConsoleTextWidth(const char *textPool, int poolSize, int firstChar, int charCount, GfxFont *font)
{
  GfxFont *v5; 
  __int64 v7; 
  const char *v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  const char *v15; 
  __int64 ttfCount; 
  int v17; 
  int pixelHeight; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  TTFDef **ttfDefs; 
  unsigned int v25; 
  int usedCount; 
  int charCode; 
  int v28; 
  int v29; 
  GfxFont *v30; 
  const char *v31; 
  __int64 v32; 
  CachedGlyph glyphOut; 
  char psText[8]; 

  v5 = font;
  v7 = poolSize;
  v9 = textPool;
  v31 = textPool;
  v30 = font;
  v10 = poolSize - 1;
  v29 = poolSize - 1;
  if ( ((poolSize - 1) & poolSize) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1310, ASSERT_TYPE_ASSERT, "(IsPowerOf2( poolSize ))", (const char *)&queryFormat, "IsPowerOf2( poolSize )") )
    __debugbreak();
  v11 = 0;
  v12 = v10 & (firstChar + charCount);
  v25 = 0;
  v28 = v12;
  psText[4] = 0;
  if ( firstChar != v12 )
  {
    v13 = v7 - 1;
    v32 = v7 - 1;
    do
    {
      psText[0] = v9[firstChar];
      psText[1] = v9[v13 & (firstChar + 1i64)];
      psText[2] = v9[v13 & (firstChar + 2i64)];
      psText[3] = v9[v13 & (firstChar + 3i64)];
      v14 = SEH_DecodeLetter(psText, &usedCount);
      firstChar = v10 & (usedCount + firstChar);
      charCode = v14;
      if ( v14 == 94 && (v15 = &v9[firstChar]) != NULL && *v15 != 94 && (unsigned __int8)(*v15 - 39) <= 0x17u )
      {
        firstChar = v10 & (firstChar + 1);
      }
      else
      {
        ttfCount = v5->ttfCount;
        v17 = 0;
        pixelHeight = v5->pixelHeight;
        v19 = 0i64;
        v20 = ttfCount;
        if ( (int)ttfCount > 0 )
        {
          v21 = charCode;
          v22 = ttfCount - 1;
          ttfDefs = v5->ttfDefs;
          do
          {
            if ( FontCache_GetCachedGlyph(*ttfDefs, pixelHeight, v21, FONT_CACHE_FX_NONE, v17 == v22, &glyphOut) )
              break;
            ++v17;
            ++v19;
            ++ttfDefs;
          }
          while ( v19 < v20 );
          v11 = v25;
          v5 = v30;
          v12 = v28;
        }
        v9 = v31;
        v11 += glyphOut.dx;
        v10 = v29;
        v25 = v11;
      }
      v13 = v32;
    }
    while ( firstChar != v12 );
  }
  return v11;
}

/*
==============
R_FontGetRandomLetter
==============
*/
__int64 R_FontGetRandomLetter(int seed)
{
  return (unsigned int)MYRANDOMCHARS[(((1103515245 * seed + 12345) / 0x10000) & 0x7FFFu) % 0x3E];
}

/*
==============
R_Font_GetLegacyFontStyle
==============
*/
FontGlowStyle *R_Font_GetLegacyFontStyle(int stylePacked)
{
  int v1; 
  int v2; 
  int v3; 
  int v4; 

  v1 = (stylePacked & 0xF) - 1;
  if ( !v1 )
    return &s_SPNameplateDropShadow;
  v2 = v1 - 2;
  if ( !v2 )
    return &s_legacyShadow;
  v3 = v2 - 3;
  if ( !v3 )
    return &s_legacyStrongShadow;
  v4 = v3 - 1;
  if ( !v4 )
    return &s_legacyOutline;
  if ( v4 == 1 )
    return &s_legacyStrongOutline;
  return 0i64;
}

/*
==============
R_Font_MeasureGlyph
==============
*/

float __fastcall R_Font_MeasureGlyph(unsigned int unicodeCodePoint, GfxFont *font, int fontSize, double scale)
{
  FontIconRenderInfo outIcon; 
  CachedGlyph outGlyph; 
  char v20; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm2, xmm3; fontScale
    vmovaps xmm6, xmm3
  }
  if ( FontIcons_GetIcon(unicodeCodePoint, fontSize, *(float *)&_XMM2, 0, &outIcon) )
  {
    __asm { vmulss  xmm0, xmm6, [rsp+0A8h+var_70] }
  }
  else
  {
    R_GetCharacterGlyph(font, fontSize, unicodeCodePoint, &outGlyph);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, xmm6
    }
  }
  _R11 = &v20;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return *(float *)&_XMM0;
}

/*
==============
R_Font_UsePost
==============
*/
_BOOL8 R_Font_UsePost(int stylePacked)
{
  return (stylePacked & 0x10) != 0;
}

/*
==============
R_Font_WordWrap
==============
*/

void __fastcall R_Font_WordWrap(const char *text, double boxWidth, GfxFont *font, int fontSize, float scale, char tracking, int maxLines, bool leftToRight, TextLine *outLines, int *outLineCount)
{
  int v12; 
  TextLine *v17; 
  int v18; 
  char *v19; 
  bool v20; 
  char *v21; 
  __int64 v24; 
  __int64 v25; 
  __int64 v27; 
  int *v28; 
  __int64 v29; 
  float v32; 
  float v33; 

  v12 = maxLines;
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps xmm6, xmm1
  }
  memset_0(outLines, 0, 24i64 * maxLines);
  v17 = outLines;
  v18 = 0;
  v19 = strchr_0(text, 10);
  v20 = leftToRight;
  v21 = v19;
  __asm { vmovss  xmm7, [rsp+0A8h+scale] }
  if ( v19 )
  {
    while ( v18 < v12 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+0A8h+var_80], xmm7
        vmovaps xmm2, xmm6; boxWidth
      }
      R_Font_WordWrap_Internal(text, v21 - 1, *(const float *)&_XMM2, font, fontSize, v32, tracking, v12 - v18, v20, v17, &maxLines);
      text = v21 + 1;
      v18 += maxLines;
      v17 += maxLines;
      v21 = strchr_0(v21 + 1, 10);
      if ( !v21 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v18 < v12 )
    {
      v24 = -1i64;
      v25 = -1i64;
      do
        ++v25;
      while ( text[v25] );
      if ( (_DWORD)v25 )
        v24 = (unsigned int)(v25 - 1);
      __asm
      {
        vmovss  dword ptr [rsp+0A8h+var_80], xmm7
        vmovaps xmm2, xmm6; boxWidth
      }
      R_Font_WordWrap_Internal(text, &text[v24], *(const float *)&_XMM2, font, fontSize, v33, tracking, v12 - v18, v20, v17, &maxLines);
      v18 += maxLines;
      v17 += maxLines;
    }
  }
  v27 = (unsigned __int128)(((char *)v17 - (char *)outLines) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
  v28 = outLineCount;
  v29 = ((unsigned __int64)v27 >> 63) + (v27 >> 2);
  *outLineCount = v29;
  if ( (_DWORD)v29 != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 780, ASSERT_TYPE_ASSERT, "(*outLineCount == linesUsed)", (const char *)&queryFormat, "*outLineCount == linesUsed") )
    __debugbreak();
  if ( *v28 > v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 781, ASSERT_TYPE_ASSERT, "(*outLineCount <= maxLines)", (const char *)&queryFormat, "*outLineCount <= maxLines") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
R_Font_WordWrap_Internal
==============
*/

void __fastcall R_Font_WordWrap_Internal(const char *const textStart, const char *const textEnd, double boxWidth, GfxFont *const font, const int fontSize, const float scale, const char tracking, const int maxLines, const bool leftToRight, TextLine *outLines, int *outLineCount)
{
  const char *v18; 
  const char *v19; 
  TextLine *v21; 
  __int64 v22; 
  size_t v23; 
  int *v24; 
  const char *v26; 
  bool v27; 
  char *v28; 
  char *v33; 
  char v34; 
  char v35; 
  int v36; 
  unsigned int v37; 
  const unsigned __int8 *v38; 
  char v39; 
  int GlyphFromUTF8; 
  char *v41; 
  char v42; 
  char v43; 
  char v44; 
  int v45; 
  bool v52; 
  char v53; 
  bool v54; 
  char v55; 
  int v56; 
  bool v57; 
  TextLine *v64; 
  int v65; 
  char *v66; 
  char *v67; 
  size_t v68; 
  FontIconRenderInfo outIcon; 
  CachedGlyph outGlyph; 

  __asm { vmovaps [rsp+148h+var_98], xmm11 }
  v18 = textEnd;
  v19 = textStart;
  __asm { vmovaps xmm11, xmm2 }
  if ( !textStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 507, ASSERT_TYPE_ASSERT, "(textStart)", (const char *)&queryFormat, "textStart") )
    __debugbreak();
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 508, ASSERT_TYPE_ASSERT, "(textEnd)", (const char *)&queryFormat, "textEnd") )
    __debugbreak();
  v21 = outLines;
  if ( !outLines && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 509, ASSERT_TYPE_ASSERT, "(outLines)", (const char *)&queryFormat, "outLines") )
    __debugbreak();
  v22 = maxLines;
  if ( maxLines <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 510, ASSERT_TYPE_ASSERT, "(maxLines > 0)", (const char *)&queryFormat, "maxLines > 0") )
    __debugbreak();
  v23 = 24 * v22;
  v68 = v23;
  memset_0(v21, 0, v23);
  v24 = outLineCount;
  if ( outLineCount )
    *outLineCount = 0;
  _RCX = v21;
  v64 = v21;
  if ( v18 < v19 )
  {
    if ( *v19 == 10 )
    {
      v21->textLeft = v19;
      v21->textRight = v19;
      if ( v24 )
        *v24 = 1;
    }
    goto LABEL_154;
  }
  v26 = v18;
  v27 = leftToRight;
  __asm { vmovaps [rsp+148h+var_58], xmm7 }
  if ( leftToRight )
    v26 = v19;
  __asm
  {
    vmovaps [rsp+148h+var_68], xmm8
    vmovaps [rsp+148h+var_78], xmm9
  }
  v28 = NULL;
  v67 = (char *)v26;
  v66 = NULL;
  v65 = 0;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  if ( v26 >= v19 )
  {
    __asm
    {
      vmovaps [rsp+148h+var_88], xmm10
      vmovss  xmm10, [rsp+148h+scale]
      vmovaps [rsp+148h+var_48], xmm6
    }
    v33 = (char *)v26;
    while ( 1 )
    {
      if ( v33 > v18 || _RCX >= (TextLine *)((char *)v21 + v23) )
      {
LABEL_151:
        __asm
        {
          vmovaps xmm6, [rsp+148h+var_48]
          vmovaps xmm10, [rsp+148h+var_88]
        }
        break;
      }
      v34 = 0;
      if ( v27 )
      {
        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 134, ASSERT_TYPE_ASSERT, "(utf8Stream)", (const char *)&queryFormat, "utf8Stream") )
          __debugbreak();
        v35 = *v33;
        v36 = 0;
        maxLines = 0;
        v37 = -1;
        if ( v35 >= 0 )
        {
          v37 = (unsigned __int8)v35;
          v36 = 1;
          maxLines = 1;
          goto LABEL_52;
        }
        if ( (v35 & 0xE0) == 0xC0 )
        {
          v37 = v33[1] & 0x7F | ((v35 & 0x1F) << 6);
          if ( v37 < 0x80 )
            goto LABEL_33;
          v36 = 2;
          maxLines = 2;
          if ( v37 > 0xFFFF )
            v37 = 32;
        }
        else if ( (v35 & 0xF0) == 0xE0 )
        {
          v37 = v33[2] & 0x7F | ((v33[1] & 0x7F | ((v35 & 0xF) << 6)) << 6);
          if ( v37 - 2048 <= 0xCFFF || v37 >= 0xE000 )
          {
            v36 = 3;
            maxLines = 3;
            if ( v37 > 0xFFFF )
              v37 = 32;
          }
          else
          {
            v37 = -1;
          }
        }
        else if ( (v35 & 0xF8) == 0xF0 )
        {
          v37 = v33[3] & 0x7F | ((v33[2] & 0x7F | ((v33[1] & 0x7F | ((v35 & 7) << 6)) << 6)) << 6);
          if ( v37 - 0x10000 > 0xFFFFE )
          {
LABEL_33:
            v37 = -1;
            goto LABEL_52;
          }
          v36 = 4;
          maxLines = 4;
          if ( v37 > 0xFFFF )
            v37 = 32;
        }
      }
      else
      {
        v38 = (const unsigned __int8 *)v33;
        if ( (*v33 & 0xC0) == 0x80 )
        {
          do
            v39 = *--v38;
          while ( (v39 & 0xC0) == 0x80 );
        }
        GlyphFromUTF8 = GetGlyphFromUTF8(v38, (int *)&maxLines);
        v36 = maxLines;
        v37 = GlyphFromUTF8;
      }
LABEL_52:
      v41 = v33;
      if ( (v37 & 0x80000000) == 0 )
      {
        if ( v27 )
          v33 += v36;
        else
          v33 -= v36;
      }
      else
      {
        v34 = 1;
      }
      v42 = v34;
      v43 = v34;
      v44 = 0;
      if ( v33 >= v19 && v33 <= textEnd )
      {
        if ( leftToRight )
        {
          if ( v37 == 94 && v33 && *v33 != 94 && (unsigned __int8)(*v33 - 39) <= 0x17u )
          {
            v44 = 1;
            ++v33;
            goto LABEL_71;
          }
        }
        else if ( *v33 == 94 && v37 != 94 && v37 - 39 <= 0x17 )
        {
          v44 = 1;
          --v33;
          goto LABEL_70;
        }
        v44 = 0;
      }
LABEL_70:
      if ( (v37 & 0x80000000) != 0 )
        goto LABEL_125;
LABEL_71:
      if ( v37 - 30 <= 1 || v44 )
        goto LABEL_125;
      v45 = ++v65;
      __asm { vmovaps xmm2, xmm10; fontScale }
      if ( FontIcons_GetIcon(v37, fontSize, *(float *)&_XMM2, 0, &outIcon) )
      {
        __asm { vmovss  xmm0, [rsp+148h+outIcon.advance] }
      }
      else
      {
        R_GetCharacterGlyph(font, fontSize, v37, &outGlyph);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
        }
      }
      __asm
      {
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm6, xmm1, xmm7
      }
      if ( v45 > 1 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm6, xmm6, xmm1
        }
      }
      v52 = v37 != 160 && v37 != 8239 && v37 != 65279 && R_IsSpace(v37);
      if ( v37 == 10 )
        goto LABEL_108;
      __asm { vcomiss xmm6, xmm11 }
      if ( v37 > 0xA )
      {
LABEL_108:
        v53 = 1;
        v54 = v28 == NULL;
        if ( !v28 )
        {
          v55 = 1;
          goto LABEL_87;
        }
      }
      else
      {
        v53 = 0;
      }
      v55 = 0;
      v54 = 1;
LABEL_87:
      __asm { vucomiss xmm7, xmm9 }
      v57 = 0;
      if ( !v54 )
      {
        if ( v55 || !Language_UsesSpace() && (v37 == 160 || v37 == 8239 || v37 == 65279 || !R_IsSpace(v37)) && (v37 - 65281 > 0x1E || (v56 = 1174415361, !_bittest(&v56, v37 - 65281))) && v37 - 12289 > 1 && (v37 - 13312 <= 0x19BF || v37 - 19968 <= 0x51FF || v37 - 12352 <= 0x5F || v37 - 12448 <= 0x5F || v37 - 11904 <= 0x15F || v37 - 12272 <= 0x4F || v37 - 12736 <= 0x2F || v37 - 12800 <= 0x1FF || v37 - 63744 <= 0x1FF || v37 - 65072 <= 0x1F) )
          v57 = 1;
      }
      if ( v52 || v37 == 10 )
      {
        v66 = v33;
      }
      else
      {
        if ( !v57 )
          goto LABEL_117;
        v66 = v41;
      }
      __asm { vmovaps xmm8, xmm7 }
      v28 = v41;
LABEL_117:
      if ( v28 )
      {
        __asm { vcomiss xmm11, xmm9 }
        if ( v53 )
        {
          v34 = 1;
LABEL_120:
          v43 = v42;
          if ( v28 )
          {
            v33 = v28;
          }
          else if ( v42 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 670, ASSERT_TYPE_ASSERT, "(endText)", (const char *)&queryFormat, "endText") )
          {
LABEL_129:
            __asm { vmovaps xmm8, xmm7 }
          }
          else
          {
            __debugbreak();
            __asm { vmovaps xmm8, xmm7 }
          }
          _RCX = v64;
          __asm { vmovss  dword ptr [rcx+10h], xmm8 }
          if ( v33 == v67 )
          {
            if ( v28 )
            {
              v64->textLeft = v28;
              v64->textRight = v28;
              goto LABEL_137;
            }
          }
          else
          {
            if ( leftToRight )
            {
              v64->textLeft = v67;
              v64->textRight = v33 - 1;
            }
            else
            {
              v64->textLeft = v33 + 1;
              v64->textRight = v67;
            }
LABEL_137:
            _RCX = ++v64;
          }
          v28 = NULL;
          v19 = textStart;
          v33 = v66;
          v18 = textEnd;
          v67 = v66;
          v66 = NULL;
          __asm
          {
            vmovaps xmm7, xmm9
            vmovaps xmm8, xmm9
          }
          goto LABEL_140;
        }
      }
      v19 = textStart;
      v34 = 0;
      __asm { vmovaps xmm7, xmm6 }
LABEL_125:
      if ( v34 )
        goto LABEL_120;
      v18 = textEnd;
      if ( v33 > textEnd || v33 < v19 )
      {
        v28 = NULL;
        v43 = 1;
        v34 = 1;
        v66 = NULL;
        goto LABEL_129;
      }
      _RCX = v64;
LABEL_140:
      if ( v43 )
      {
        if ( !v34 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 728, ASSERT_TYPE_ASSERT, "(endLine)", (const char *)&queryFormat, "endLine") )
            __debugbreak();
          _RCX = v64;
        }
        v21 = outLines;
        goto LABEL_151;
      }
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 722, ASSERT_TYPE_ASSERT, "(endText)", (const char *)&queryFormat, "endText") )
        __debugbreak();
      _RCX = v64;
      v21 = outLines;
      v27 = leftToRight;
      v23 = v68;
      if ( v33 < v19 )
        goto LABEL_151;
    }
  }
  __asm
  {
    vmovaps xmm9, [rsp+148h+var_78]
    vmovaps xmm8, [rsp+148h+var_68]
    vmovaps xmm7, [rsp+148h+var_58]
  }
  if ( outLineCount )
    *outLineCount = _RCX - v21;
LABEL_154:
  __asm { vmovaps xmm11, [rsp+148h+var_98] }
}

/*
==============
R_GetCharacterGlyph
==============
*/
void R_GetCharacterGlyph(GfxFont *font, int fontHeight, unsigned int letter, CachedGlyph *outGlyph)
{
  __int64 ttfCount; 
  int v9; 
  __int64 v10; 
  TTFDef **ttfDefs; 
  __int64 v12; 
  int v13; 

  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 190, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  ttfCount = font->ttfCount;
  v9 = 0;
  v10 = ttfCount;
  if ( (int)ttfCount > 0 )
  {
    ttfDefs = font->ttfDefs;
    v12 = 0i64;
    v13 = ttfCount - 1;
    do
    {
      if ( FontCache_GetCachedGlyph(*ttfDefs, fontHeight, letter, FONT_CACHE_FX_NONE, v9 == v13, outGlyph) )
        break;
      ++v9;
      ++v12;
      ++ttfDefs;
    }
    while ( v12 < v10 );
  }
}

/*
==============
R_GetCharacterGlyph
==============
*/
void R_GetCharacterGlyph(GfxFont *font, unsigned int letter, CachedGlyph *outGlyph)
{
  R_GetCharacterGlyph(font, font->pixelHeight, letter, outGlyph);
}

/*
==============
R_GetCharacterGlyphWithFlags
==============
*/
void R_GetCharacterGlyphWithFlags(GfxFont *font, int fontHeight, unsigned int letter, CachedGlyph *outGlyph, FontCacheFXFlags flags)
{
  __int64 ttfCount; 
  int v9; 
  __int64 v10; 
  TTFDef **ttfDefs; 
  __int64 v12; 
  int v13; 
  int height; 

  height = fontHeight;
  if ( !font )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 190, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
      __debugbreak();
    fontHeight = height;
  }
  ttfCount = font->ttfCount;
  v9 = 0;
  v10 = ttfCount;
  if ( (int)ttfCount > 0 )
  {
    ttfDefs = font->ttfDefs;
    v12 = 0i64;
    v13 = ttfCount - 1;
    do
    {
      if ( FontCache_GetCachedGlyph(*ttfDefs, fontHeight, letter, flags, v9 == v13, outGlyph) )
        break;
      fontHeight = height;
      ++v9;
      ++v12;
      ++ttfDefs;
    }
    while ( v12 < v10 );
  }
}

/*
==============
R_IsArabicCharacter
==============
*/
bool R_IsArabicCharacter(int codePoint)
{
  bool v1; 

  if ( (unsigned int)(codePoint - 1536) <= 0xFF )
    return 1;
  if ( (unsigned int)(codePoint - 1872) <= 0x2F )
  {
    v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 417, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0");
    goto LABEL_4;
  }
  if ( (unsigned int)(codePoint - 2208) <= 0x5F )
  {
    v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 422, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0");
    goto LABEL_4;
  }
  if ( (unsigned int)(codePoint - 64336) <= 0x2AF )
  {
    v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 427, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0");
LABEL_4:
    if ( v1 )
      __debugbreak();
    return 1;
  }
  return (unsigned int)(codePoint - 65136) <= 0x8F;
}

/*
==============
R_IsBreakableSpace
==============
*/
bool R_IsBreakableSpace(unsigned int uiCodepoint)
{
  return uiCodepoint != 160 && uiCodepoint != 8239 && uiCodepoint != 65279 && R_IsSpace(uiCodepoint);
}

/*
==============
R_IsSpace
==============
*/
char R_IsSpace(unsigned int uiCodepoint)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( uiCodepoint > 0x2029 )
  {
    v2 = uiCodepoint - 8239;
    if ( !v2 )
      return 1;
    v3 = v2 - 48;
    if ( !v3 )
      return 1;
    v4 = v3 - 4001;
    if ( !v4 )
      return 1;
    v5 = v4 - 52991;
    if ( !v5 || v5 == 161 )
      return 1;
  }
  else if ( uiCodepoint >= 0x2028 || uiCodepoint == 160 || uiCodepoint - 9 <= 4 || uiCodepoint == 32 || uiCodepoint == 133 || uiCodepoint == 6158 || uiCodepoint - 0x2000 <= 0xB )
  {
    return 1;
  }
  return 0;
}

/*
==============
R_LetterWidth
==============
*/
__int64 R_LetterWidth(unsigned int letter, GfxFont *font)
{
  CachedGlyph outGlyph; 

  R_GetCharacterGlyph(font, font->pixelHeight, letter, &outGlyph);
  return (unsigned int)outGlyph.dx;
}

/*
==============
R_NormalizedTextScale
==============
*/

float __fastcall R_NormalizedTextScale(GfxFont *font, double scale)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1097, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( font->pixelHeight <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1098, ASSERT_TYPE_ASSERT, "(font->pixelHeight > 0)", (const char *)&queryFormat, "font->pixelHeight > 0") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm6, cs:__real@42400000
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+8]
    vdivss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
R_PrepareTextLine
==============
*/
void R_PrepareTextLine(const char *input, __int64 inputLen, char *output, int outputLen, bool stripNewline, char *colorEscape)
{
  int v6; 
  int v7; 
  char *v9; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  char v15; 
  char *v16; 
  int v17; 
  int i; 
  int v20; 

  v20 = outputLen;
  v6 = 0;
  v7 = 0;
  v9 = colorEscape;
  v10 = inputLen;
  if ( colorEscape && *colorEscape )
  {
    *output = *colorEscape;
    v6 = 2;
    output[1] = v9[1];
  }
  v12 = outputLen;
  if ( inputLen > 0 )
  {
    v13 = (unsigned int)v6;
    do
    {
      if ( v9 )
      {
        if ( input[v7] == 94 )
        {
          v14 = v7 + 1i64;
          if ( v14 < v10 )
          {
            if ( &input[v7 + 1] )
            {
              v15 = input[v14];
              if ( v15 != 94 && (unsigned __int8)(v15 - 39) <= 0x17u )
              {
                if ( v15 == 55 )
                {
                  *v9 = 0;
                }
                else
                {
                  *v9 = 94;
                  v9[1] = input[v14];
                }
              }
            }
          }
        }
      }
      v16 = (char *)&input[v7];
      if ( (unsigned __int8)(*v16 - 30) <= 1u || stripNewline && *v16 == 10 )
      {
        ++v7;
      }
      else
      {
        SEH_DecodeLetter(&input[v7], (int *)&colorEscape);
        v17 = (int)colorEscape;
        for ( i = 0; i < v17; ++v16 )
        {
          if ( v13 >= v12 )
            break;
          ++v6;
          output[v13] = *v16;
          ++i;
          ++v13;
        }
        v10 = inputLen;
        v7 += v17;
      }
    }
    while ( v7 < v10 );
    outputLen = v20;
  }
  if ( v6 >= outputLen )
    output[v12 - 1] = 0;
  else
    output[v6] = 0;
}

/*
==============
R_ProcessGPadLetterColor
==============
*/
__int64 R_ProcessGPadLetterColor(unsigned int color, unsigned int letter)
{
  unsigned int v5; 

  if ( !Com_Keys_IsValidGamePadChar(letter) && letter != ICON_LEFT_STICK_FORWARD && letter != ICON_LEFT_STICK_CENTERED && letter != ICON_RIGHT_STICK_CENTERED )
    return color;
  v5 = -1;
  HIBYTE(v5) = HIBYTE(color);
  return v5;
}

/*
==============
R_ProcessGPadLetterColorVec4
==============
*/
void R_ProcessGPadLetterColorVec4(vec4_t *color, unsigned int letter)
{
  if ( Com_Keys_IsValidGamePadChar(letter) || letter == ICON_LEFT_STICK_FORWARD || letter == ICON_LEFT_STICK_CENTERED || letter == ICON_RIGHT_STICK_CENTERED )
  {
    color->v[0] = 1.0;
    color->v[1] = 1.0;
    color->v[2] = 1.0;
  }
}

/*
==============
R_RegisterFont
==============
*/
GfxFont *R_RegisterFont(const char *name, int pixelHeight)
{
  unsigned int v2; 
  int v3; 
  _DWORD *i; 
  char v6; 
  int v7; 
  int v8; 
  int v9; 
  int *p_ttfCount; 
  int *v11; 
  unsigned int v12; 
  __int64 **v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int8 *v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  GfxFont *result; 
  GfxFont *v24; 
  XAssetHeader *ttfDefs; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  int v33; 
  _DWORD givenName[260]; 

  v2 = 0;
  v3 = 0;
  for ( i = givenName; ; i = &givenName[65 * v3] )
  {
    while ( 1 )
    {
      v6 = *name++;
      if ( !v6 || v6 == 59 )
        break;
      if ( i < (_DWORD *)((char *)&givenName[65 * v3 + 64] + 3) )
      {
        *(_BYTE *)i = v6;
        i = (_DWORD *)((char *)i + 1);
      }
    }
    ++v3;
    *(_BYTE *)i = 0;
    if ( !v6 || v3 == 4 )
      break;
    if ( (unsigned int)v3 >= 4 )
    {
      LODWORD(v29) = 4;
      LODWORD(v26) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 995, ASSERT_TYPE_ASSERT, "(unsigned)( ttfCount ) < (unsigned)( ( sizeof( *array_counter( ttfNames ) ) + 0 ) )", "ttfCount doesn't index ARRAY_COUNT( ttfNames )\n\t%i not in [0, %i)", v26, v29) )
        __debugbreak();
    }
  }
  v7 = s_fontInstanceCount;
  v8 = pixelHeight;
  v9 = 0;
  v33 = 0;
  if ( s_fontInstanceCount <= 0 )
  {
LABEL_42:
    if ( v7 < 128 )
    {
      s_fontInstanceCount = v7 + 1;
      v24 = &s_fontInstances[v7];
      v24->pixelHeight = v8;
      v24->ttfCount = v3;
      if ( v3 > 0 )
      {
        ttfDefs = (XAssetHeader *)v24->ttfDefs;
        do
        {
          if ( v2 >= 4 )
          {
            LODWORD(v29) = 4;
            LODWORD(v26) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1053, ASSERT_TYPE_ASSERT, "(unsigned)( ttfIndex ) < (unsigned)( ( sizeof( *array_counter( ttfNames ) ) + 0 ) )", "ttfIndex doesn't index ARRAY_COUNT( ttfNames )\n\t%i not in [0, %i)", v26, v29) )
              __debugbreak();
            LODWORD(v31) = 4;
            LODWORD(v28) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1054, ASSERT_TYPE_ASSERT, "(unsigned)( ttfIndex ) < (unsigned)( ( sizeof( *array_counter( currentFont->ttfDefs ) ) + 0 ) )", "ttfIndex doesn't index ARRAY_COUNT( currentFont->ttfDefs )\n\t%i not in [0, %i)", v28, v31) )
              __debugbreak();
          }
          ttfDefs->physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_TTF, (const char *)&givenName[65 * v2], 1).physicsLibrary;
          ++ttfDefs;
          ++v2;
        }
        while ( (int)v2 < v3 );
      }
      result = v24;
      v24->fontName = v24->ttfDefs[0]->name;
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443FBBA0, 155i64);
      return 0i64;
    }
  }
  else
  {
    p_ttfCount = &s_fontInstances[0].ttfCount;
    while ( 1 )
    {
      v11 = p_ttfCount - 3;
      if ( *(p_ttfCount - 1) == v8 && *p_ttfCount == v3 )
        break;
LABEL_41:
      ++v9;
      p_ttfCount += 12;
      v33 = v9;
      if ( v9 >= v7 )
        goto LABEL_42;
    }
    v12 = 0;
    if ( v3 > 0 )
    {
      v13 = (__int64 **)(p_ttfCount + 1);
      while ( 2 )
      {
        if ( v12 >= 4 )
        {
          LODWORD(v29) = 4;
          LODWORD(v26) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( ttfIndex ) < (unsigned)( ( sizeof( *array_counter( ttfNames ) ) + 0 ) )", "ttfIndex doesn't index ARRAY_COUNT( ttfNames )\n\t%i not in [0, %i)", v26, v29) )
            __debugbreak();
          LODWORD(v30) = 4;
          LODWORD(v27) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1024, ASSERT_TYPE_ASSERT, "(unsigned)( ttfIndex ) < (unsigned)( ( sizeof( *array_counter( font->ttfDefs ) ) + 0 ) )", "ttfIndex doesn't index ARRAY_COUNT( font->ttfDefs )\n\t%i not in [0, %i)", v27, v30) )
            __debugbreak();
        }
        v14 = 0x7FFFFFFFi64;
        v15 = **v13;
        v16 = (unsigned __int8 *)&givenName[65 * v12];
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v17 = v15 - (_QWORD)v16;
        do
        {
          v18 = v16[v17];
          v19 = v14;
          v20 = *v16++;
          --v14;
          if ( !v19 )
            break;
          if ( v18 != v20 )
          {
            v21 = v18 + 32;
            if ( (unsigned int)(v18 - 65) > 0x19 )
              v21 = v18;
            v18 = v21;
            v22 = v20 + 32;
            if ( (unsigned int)(v20 - 65) > 0x19 )
              v22 = v20;
            if ( v18 != v22 )
            {
              v7 = s_fontInstanceCount;
              v9 = v33;
              v8 = pixelHeight;
              goto LABEL_41;
            }
          }
        }
        while ( v18 );
        ++v12;
        ++v13;
        if ( (int)v12 < v3 )
          continue;
        return (GfxFont *)(p_ttfCount - 3);
      }
    }
    return (GfxFont *)v11;
  }
  return result;
}

/*
==============
R_RegisterTTF
==============
*/
TTFDef *R_RegisterTTF(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_TTF, name, 1).ttfDef;
}

/*
==============
R_ResetFontInstances
==============
*/
void R_ResetFontInstances(void)
{
  s_fontInstanceCount = 0;
  memset_0(s_fontInstances, 0, sizeof(s_fontInstances));
}

/*
==============
R_TextHeight
==============
*/
__int64 R_TextHeight(GfxFont *font)
{
  if ( font )
    return (unsigned int)font->pixelHeight;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1189, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
R_TextLineBreakPosition
==============
*/

const char *__fastcall R_TextLineBreakPosition(const char *text, int pixelsAvailable, GfxFont *font, double scale, int *charCount)
{
  GfxFont *v8; 
  char *v9; 
  int *v11; 
  bool v12; 
  const char *v13; 
  unsigned int CharFromString; 
  int v15; 
  __int64 ttfCount; 
  int v17; 
  int pixelHeight; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  TTFDef **ttfDefs; 
  bool v23; 
  const char *result; 
  char *v29; 
  CachedGlyph glyphOut; 
  char *texta; 
  int v33; 
  GfxFont *v34; 

  v34 = font;
  v33 = pixelsAvailable;
  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  v8 = font;
  v9 = (char *)text;
  __asm { vmovaps xmm6, xmm3 }
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1264, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1265, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  v11 = charCount;
  if ( !charCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1266, ASSERT_TYPE_ASSERT, "(charCount)", (const char *)&queryFormat, "charCount") )
    __debugbreak();
  *v11 = 0;
  texta = v9;
  v12 = *v9 == 0;
  LODWORD(charCount) = 0;
  if ( !v12 )
  {
    while ( 1 )
    {
      v29 = v9;
      v13 = v9;
      CharFromString = SEH_ReadCharFromString((const char **)&texta);
      v15 = CharFromString;
      if ( CharFromString == 10 || CharFromString == 13 )
        break;
      v9 = texta;
      if ( CharFromString == 94 && texta && (unsigned __int8)(*texta - 39) <= 0x17u )
      {
        v9 = ++texta;
      }
      else
      {
        ttfCount = v8->ttfCount;
        v17 = 0;
        pixelHeight = v8->pixelHeight;
        v19 = 0i64;
        v20 = ttfCount;
        if ( (int)ttfCount > 0 )
        {
          v21 = ttfCount - 1;
          ttfDefs = v34->ttfDefs;
          do
          {
            if ( FontCache_GetCachedGlyph(*ttfDefs, pixelHeight, v15, FONT_CACHE_FX_NONE, v17 == v21, &glyphOut) )
              break;
            ++v17;
            ++v19;
            ++ttfDefs;
          }
          while ( v19 < v20 );
          v9 = texta;
          v13 = v29;
        }
        v23 = __CFADD__(glyphOut.dx, (_DWORD)charCount) || glyphOut.dx + (_DWORD)charCount == 0;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, [rsp+0B8h+arg_8]
          vmulss  xmm2, xmm0, xmm6
          vcomiss xmm2, xmm1
        }
        LODWORD(charCount) = glyphOut.dx + (_DWORD)charCount;
        if ( !v23 )
        {
          result = v13;
          goto LABEL_29;
        }
        ++*v11;
        v8 = v34;
      }
      if ( !*v9 )
        goto LABEL_28;
    }
    v9 = texta;
  }
LABEL_28:
  result = v9;
LABEL_29:
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  return result;
}

/*
==============
R_TextLineWrapPosition
==============
*/
const char *R_TextLineWrapPosition(const char *text, int bufferSize, int pixelsAvailable, GfxFont *font, float scale)
{
  int v11; 
  int v12; 
  char *v13; 
  const char *v14; 
  const char *v15; 
  unsigned int CharFromString; 
  unsigned int v18; 
  const char *result; 
  CachedGlyph outGlyph; 
  char *texta; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1208, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  v11 = 0;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v12 = 0x7FFFFFFF;
  v13 = (char *)text;
  if ( bufferSize > 0 )
    v12 = bufferSize;
  texta = (char *)text;
  v14 = NULL;
  v15 = NULL;
  if ( *text )
  {
    __asm { vmovss  xmm6, [rsp+0A8h+scale] }
    do
    {
      v15 = v13;
      CharFromString = SEH_ReadCharFromString((const char **)&texta);
      v13 = texta;
      v18 = CharFromString;
      if ( CharFromString == 13 )
      {
        v11 = 0;
      }
      else
      {
        if ( CharFromString == 10 )
          goto LABEL_26;
        if ( CharFromString == 94 && texta && (unsigned __int8)(*texta - 39) <= 0x17u )
        {
          v13 = ++texta;
        }
        else
        {
          if ( font )
          {
            R_GetCharacterGlyph(font, font->pixelHeight, CharFromString, &outGlyph);
            v13 = texta;
            v11 += outGlyph.dx;
          }
          if ( v15 != text && v18 < 0x100 && v18 - 9 <= 0x17 )
            v14 = v15;
        }
        if ( v14 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r14d
            vxorps  xmm1, xmm1, xmm1
            vmulss  xmm2, xmm0, xmm6
            vcvtsi2ss xmm1, xmm1, r13d
            vcomiss xmm2, xmm1
          }
          result = v14;
          goto LABEL_27;
        }
        if ( v13 - text > v12 )
          goto LABEL_28;
      }
    }
    while ( *v13 );
  }
  if ( v13 - text == v12 )
LABEL_28:
    result = v15;
  else
LABEL_26:
    result = v13;
LABEL_27:
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
R_TextValidatePrintable
==============
*/
void R_TextValidatePrintable(const char *text)
{
  char v1; 
  const char *i; 
  int v3; 
  unsigned int v4; 
  __int64 v5; 

  v1 = *text;
  for ( i = text; *i; v1 = *i )
  {
    v3 = 0;
    v4 = -1;
    if ( v1 < 0 )
    {
      if ( (v1 & 0xE0) == 0xC0 )
      {
        v4 = i[1] & 0x7F | ((v1 & 0x1F) << 6);
        if ( v4 < 0x80 )
          goto LABEL_17;
        v3 = 2;
      }
      else if ( (v1 & 0xF0) == 0xE0 )
      {
        v4 = i[2] & 0x7F | ((i[1] & 0x7F | ((v1 & 0xF) << 6)) << 6);
        if ( v4 - 2048 > 0xCFFF && v4 < 0xE000 )
          goto LABEL_17;
        v3 = 3;
      }
      else
      {
        if ( (v1 & 0xF8) != 0xF0 )
          goto LABEL_18;
        v4 = i[3] & 0x7F | ((i[2] & 0x7F | ((i[1] & 0x7F | ((v1 & 7) << 6)) << 6)) << 6);
        if ( v4 - 0x10000 > 0xFFFFE )
        {
LABEL_17:
          v4 = -1;
LABEL_18:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1413, ASSERT_TYPE_ASSERT, "(numBytes != 0)", "%s\n\tInvalid UTF-8 glyph. Check the text: %s", "numBytes != 0", i) )
            __debugbreak();
          goto LABEL_20;
        }
        v3 = 4;
      }
    }
    else
    {
      v4 = (unsigned __int8)v1;
      v3 = 1;
    }
    if ( v4 > 0xFFFF )
      v4 = 32;
LABEL_20:
    if ( (unsigned __int16)v4 != v4 )
    {
      LODWORD(v5) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1414, ASSERT_TYPE_ASSERT, "(static_cast<unsigned short>( codePoint ) == codePoint)", "%s\n\tAttempting to print invalid character (Unicode %d), most likely from uninitialized memory or non-string data.", "static_cast<unsigned short>( codePoint ) == codePoint", v5) )
        __debugbreak();
    }
    i += v3;
  }
}

/*
==============
R_TextWidth
==============
*/
int R_TextWidth(const char *text, int maxChars, GfxFont *font)
{
  return R_TextWidth(text, maxChars, font, font->pixelHeight, 0, 0);
}

/*
==============
R_TextWidth
==============
*/
int R_TextWidth(const char *text, int maxChars, GfxFont *font, int textHeight)
{
  return R_TextWidth(text, maxChars, font, textHeight, 0, 0);
}

/*
==============
R_TextWidth
==============
*/
__int64 R_TextWidth(const char *text, int maxChars, GfxFont *font, int textHeight, char tracking, int allowGpadAnySize)
{
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  char v14; 
  unsigned int CharFromString; 
  unsigned int v17; 
  char *v18; 
  int v21; 
  __int64 result; 
  FontIconRenderInfo outIcon; 
  CachedGlyph outGlyph; 
  char *texta; 

  texta = (char *)text;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1113, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1114, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  if ( textHeight < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_font.cpp", 1115, ASSERT_TYPE_ASSERT, "(textHeight >= 0)", (const char *)&queryFormat, "textHeight >= 0") )
    __debugbreak();
  v10 = 0;
  v11 = 0;
  v12 = 0x7FFFFFFF;
  if ( maxChars > 0 )
    v12 = maxChars;
  v13 = 0;
  if ( *texta )
  {
    v14 = tracking;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    while ( 1 )
    {
      if ( v13 >= v12 )
      {
LABEL_33:
        result = v11;
        __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
        return result;
      }
      CharFromString = SEH_ReadCharFromString((const char **)&texta);
      v17 = CharFromString;
      if ( CharFromString == 13 || CharFromString == 10 )
        break;
      if ( CharFromString != 94 )
      {
        if ( CharFromString - 30 > 1 )
        {
LABEL_22:
          __asm { vmovaps xmm2, xmm6; fontScale }
          if ( FontIcons_GetIcon(CharFromString, textHeight, *(float *)&_XMM2, allowGpadAnySize, &outIcon) )
          {
            __asm { vcvttss2si eax, [rsp+0C8h+outIcon.advance] }
          }
          else
          {
            R_GetCharacterGlyph(font, textHeight, v17, &outGlyph);
            _EAX = outGlyph.dx;
          }
          v10 += _EAX;
          if ( v13 > 0 )
            v10 += v14;
          ++v13;
          v21 = v10;
          if ( (int)v11 >= v10 )
            v21 = v11;
          v11 = v21;
        }
LABEL_31:
        v18 = texta;
        goto LABEL_32;
      }
      if ( !texta || (unsigned __int8)(*texta - 39) > 0x17u )
        goto LABEL_22;
      v18 = ++texta;
LABEL_32:
      if ( !*v18 )
        goto LABEL_33;
    }
    v10 = 0;
    goto LABEL_31;
  }
  return 0i64;
}

/*
==============
R_TryProcessKBMLetterColor
==============
*/
char R_TryProcessKBMLetterColor(unsigned int color, unsigned int letter, unsigned int *outColor)
{
  char v3; 
  unsigned int v6; 

  v3 = HIBYTE(color);
  if ( !FontIcons_IsButtonCodePoint(letter) )
    return 0;
  v6 = -1;
  HIBYTE(v6) = v3;
  *outColor = v6;
  return 1;
}

