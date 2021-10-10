/*
==============
Com_CopyAndStripFilename
==============
*/

void __fastcall Com_CopyAndStripFilename(char *outPath, unsigned __int64 bufSize, const char *inPath)
{
  ?Com_CopyAndStripFilename@@YAXPEIAD_KPEIBD@Z(outPath, bufSize, inPath);
}

/*
==============
LittleFloatRead_Util
==============
*/

double __fastcall LittleFloatRead_Util(int l)
{
  double result; 

  *(float *)&result = ?LittleFloatRead_Util@@YAMH@Z(l);
  return result;
}

/*
==============
IsDynClassname
==============
*/

int __fastcall IsDynClassname(const char *classname)
{
  return ?IsDynClassname@@YAHPEBD@Z(classname);
}

/*
==============
Com_IsVAString
==============
*/

bool __fastcall Com_IsVAString(const char *str)
{
  return ?Com_IsVAString@@YA_NPEBD@Z(str);
}

/*
==============
IsScriptableClassname
==============
*/

int __fastcall IsScriptableClassname(const char *classname)
{
  return ?IsScriptableClassname@@YAHPEBD@Z(classname);
}

/*
==============
FloatWriteSwap
==============
*/

int __fastcall FloatWriteSwap(float f)
{
  return ?FloatWriteSwap@@YAHM@Z(f);
}

/*
==============
ShortSwap
==============
*/

__int16 __fastcall ShortSwap(__int16 l)
{
  return ?ShortSwap@@YAFF@Z(l);
}

/*
==============
Com_CleanName
==============
*/

void __fastcall Com_CleanName(const char *in, char *out, int outSize)
{
  ?Com_CleanName@@YAXPEBDPEADH@Z(in, out, outSize);
}

/*
==============
Long64NoSwap
==============
*/

unsigned __int64 __fastcall Long64NoSwap(unsigned __int64 ll)
{
  return ?Long64NoSwap@@YA_K_K@Z(ll);
}

/*
==============
Com_ParseEffect
==============
*/

void __fastcall Com_ParseEffect(FxCombinedDef *fxCombinedDef, const char *assetName)
{
  ?Com_ParseEffect@@YAXPEAUFxCombinedDef@@PEBD@Z(fxCombinedDef, assetName);
}

/*
==============
IsScriptBrushModelClassname
==============
*/

int __fastcall IsScriptBrushModelClassname(const char *classname)
{
  return ?IsScriptBrushModelClassname@@YAHPEBD@Z(classname);
}

/*
==============
ParseGdtBinToStruct
==============
*/

int __fastcall ParseGdtBinToStruct(unsigned __int8 *pStruct, gdtField_t *pFieldList, int iNumFields, const void *gdtData, const int iMaxFieldTypes, int (__fastcall *parseSpecialFieldType)(unsigned __int8 *, unsigned __int8 *, gdtField_t *), void (__fastcall *parseStrcpy)(unsigned __int8 *, const char *))
{
  return ?ParseGdtBinToStruct@@YAHPEAEPEAUgdtField_t@@HPEBXHP6AH001@ZP6AX0PEBD@Z@Z(pStruct, pFieldList, iNumFields, gdtData, iMaxFieldTypes, parseSpecialFieldType, parseStrcpy);
}

/*
==============
LittleFloatWrite_Util
==============
*/

int __fastcall LittleFloatWrite_Util(float l)
{
  return ?LittleFloatWrite_Util@@YAHM@Z(l);
}

/*
==============
IsActorClassname
==============
*/

int __fastcall IsActorClassname(const char *classname)
{
  return ?IsActorClassname@@YAHPEBD@Z(classname);
}

/*
==============
Com_GetWeaponAttachmentSlotSize
==============
*/

unsigned int __fastcall Com_GetWeaponAttachmentSlotSize(const AttachmentSlot *slot)
{
  return ?Com_GetWeaponAttachmentSlotSize@@YAIAEBW4AttachmentSlot@@@Z(slot);
}

/*
==============
BigShort
==============
*/

__int16 __fastcall BigShort(__int16 l)
{
  return ?BigShort@@YAFF@Z(l);
}

/*
==============
Swap_Init
==============
*/

void Swap_Init(void)
{
  ?Swap_Init@@YAXXZ();
}

/*
==============
CalcHeatmapColor
==============
*/

void __fastcall CalcHeatmapColor(float value, vec4_t *outHeatmapColor)
{
  ?CalcHeatmapColor@@YAXMAEATvec4_t@@@Z(value, outHeatmapColor);
}

/*
==============
CanKeepStringPointer
==============
*/

int __fastcall CanKeepStringPointer(const char *string)
{
  return ?CanKeepStringPointer@@YAHPEBD@Z(string);
}

/*
==============
Com_ExtractPlayerNameSuffix
==============
*/

unsigned int __fastcall Com_ExtractPlayerNameSuffix(const char *playerName)
{
  return ?Com_ExtractPlayerNameSuffix@@YAIPEBD@Z(playerName);
}

/*
==============
Info_RemoveKey_Big
==============
*/

void __fastcall Info_RemoveKey_Big(char *s, const char *key)
{
  ?Info_RemoveKey_Big@@YAXPEADPEBD@Z(s, key);
}

/*
==============
FloatReadNoSwap
==============
*/

double __fastcall FloatReadNoSwap(int n)
{
  double result; 

  *(float *)&result = ?FloatReadNoSwap@@YAMH@Z(n);
  return result;
}

/*
==============
UShortNoSwap
==============
*/

unsigned __int16 __fastcall UShortNoSwap(unsigned __int16 l)
{
  return ?UShortNoSwap@@YAGG@Z(l);
}

/*
==============
Info_NextPair
==============
*/

void __fastcall Info_NextPair(const char **head, char *key, char *value)
{
  ?Info_NextPair@@YAXPEAPEBDPEAD1@Z(head, key, value);
}

/*
==============
IsScriptVehicleCollmapClassname
==============
*/

int __fastcall IsScriptVehicleCollmapClassname(const char *classname)
{
  return ?IsScriptVehicleCollmapClassname@@YAHPEBD@Z(classname);
}

/*
==============
Com_ParseNoteTrack
==============
*/

int __fastcall Com_ParseNoteTrack(const char *const noteName, char *const commandBuf, char *const paramBuf, char *const targetBuf, const char **outCommand, const char **outParam, const char **outTarget)
{
  return ?Com_ParseNoteTrack@@YAHQEBDQEAD11PEAPEBD22@Z(noteName, commandBuf, paramBuf, targetBuf, outCommand, outParam, outTarget);
}

/*
==============
Com_DefaultExtension
==============
*/

void __fastcall Com_DefaultExtension(char *path, int maxSize, const char *extension)
{
  ?Com_DefaultExtension@@YAXPEADHPEBD@Z(path, maxSize, extension);
}

/*
==============
IsDynModelClassname
==============
*/

int __fastcall IsDynModelClassname(const char *classname)
{
  return ?IsDynModelClassname@@YAHPEBD@Z(classname);
}

/*
==============
Com_CopyAndStripExtension
==============
*/

void __fastcall Com_CopyAndStripExtension(char *outPath, unsigned __int64 bufSize, const char *inPath)
{
  ?Com_CopyAndStripExtension@@YAXPEIAD_KPEIBD@Z(outPath, bufSize, inPath);
}

/*
==============
BigLongArray
==============
*/

void __fastcall BigLongArray(int *dst, const int *src, unsigned int count)
{
  ?BigLongArray@@YAXPEAHPEBHI@Z(dst, src, count);
}

/*
==============
IsNodeClassname
==============
*/

int __fastcall IsNodeClassname(const char *classname)
{
  return ?IsNodeClassname@@YAHPEBD@Z(classname);
}

/*
==============
ShortNoSwap
==============
*/

__int16 __fastcall ShortNoSwap(__int16 l)
{
  return ?ShortNoSwap@@YAFF@Z(l);
}

/*
==============
IsDynBrushClassname
==============
*/

int __fastcall IsDynBrushClassname(const char *classname)
{
  return ?IsDynBrushClassname@@YAHPEBD@Z(classname);
}

/*
==============
Info_RemoveKey
==============
*/

void __fastcall Info_RemoveKey(char *s, const char *key)
{
  ?Info_RemoveKey@@YAXPEADPEBD@Z(s, key);
}

/*
==============
IsParentClassname
==============
*/

int __fastcall IsParentClassname(const char *classname, const char *parentClassname)
{
  return ?IsParentClassname@@YAHPEBD0@Z(classname, parentClassname);
}

/*
==============
Com_GetExtensionSubString
==============
*/

const char *__fastcall Com_GetExtensionSubString(const char *filename)
{
  return ?Com_GetExtensionSubString@@YAPEBDPEBD@Z(filename);
}

/*
==============
AddLeanToPosition
==============
*/

void __fastcall AddLeanToPosition(vec3_t *position, const vec3_t *forward, const vec3_t *right, const float fLeanFrac, const float fViewRoll, const float fLeanDist)
{
  ?AddLeanToPosition@@YAXAEATvec3_t@@AEBT1@1MMM@Z(position, forward, right, fLeanFrac, fViewRoll, fLeanDist);
}

/*
==============
IsMpSpawnClassname
==============
*/

int __fastcall IsMpSpawnClassname(const char *classname)
{
  return ?IsMpSpawnClassname@@YAHPEBD@Z(classname);
}

/*
==============
IsVehicleClassname
==============
*/

int __fastcall IsVehicleClassname(const char *classname)
{
  return ?IsVehicleClassname@@YAHPEBD@Z(classname);
}

/*
==============
I_CleanChar
==============
*/

char __fastcall I_CleanChar(char character)
{
  return ?I_CleanChar@@YADD@Z(character);
}

/*
==============
Com_TruncatePlayerName
==============
*/

void __fastcall Com_TruncatePlayerName(const char *playerName, char *outTruncatedPlayerName, const unsigned __int64 maxOutLength)
{
  ?Com_TruncatePlayerName@@YAXPEBDPEAD_K@Z(playerName, outTruncatedPlayerName, maxOutLength);
}

/*
==============
BigLong64
==============
*/

unsigned __int64 __fastcall BigLong64(unsigned __int64 l)
{
  return ?BigLong64@@YA_K_K@Z(l);
}

/*
==============
I_DrawStrlen
==============
*/

int __fastcall I_DrawStrlen(const char *str)
{
  return ?I_DrawStrlen@@YAHPEBD@Z(str);
}

/*
==============
LittleLong64
==============
*/

unsigned __int64 __fastcall LittleLong64(unsigned __int64 l)
{
  return ?LittleLong64@@YA_K_K@Z(l);
}

/*
==============
Com_CleanStringForNetwork
==============
*/

void __fastcall Com_CleanStringForNetwork(const char *inString, char *outString, int outStringSize)
{
  ?Com_CleanStringForNetwork@@YAXPEBDQEADH@Z(inString, outString, outStringSize);
}

/*
==============
UShortSwap
==============
*/

unsigned __int16 __fastcall UShortSwap(unsigned __int16 l)
{
  return ?UShortSwap@@YAGG@Z(l);
}

/*
==============
I_CleanStr
==============
*/

char *__fastcall I_CleanStr(char *string)
{
  return ?I_CleanStr@@YAPEADPEAD@Z(string);
}

/*
==============
IsScriptableCollmapClassname
==============
*/

int __fastcall IsScriptableCollmapClassname(const char *classname)
{
  return ?IsScriptableCollmapClassname@@YAHPEBD@Z(classname);
}

/*
==============
Swap_InitLittleEndian
==============
*/

void Swap_InitLittleEndian(void)
{
  ?Swap_InitLittleEndian@@YAXXZ();
}

/*
==============
Com_ConvertBytesToHex
==============
*/

void __fastcall Com_ConvertBytesToHex(const unsigned __int8 *readBuffer, const int readBufferSize, const int writeBufferSize, char *writeBuffer)
{
  ?Com_ConvertBytesToHex@@YAXPEBEHHPEAD@Z(readBuffer, readBufferSize, writeBufferSize, writeBuffer);
}

/*
==============
IsScriptBundleClassname
==============
*/

int __fastcall IsScriptBundleClassname(const char *classname)
{
  return ?IsScriptBundleClassname@@YAHPEBD@Z(classname);
}

/*
==============
Info_ValueForKeyReentrant
==============
*/

void __fastcall Info_ValueForKeyReentrant(char *outText, unsigned __int64 textBufferSize, const char *s, const char *key)
{
  ?Info_ValueForKeyReentrant@@YAXPEAD_KPEBD2@Z(outText, textBufferSize, s, key);
}

/*
==============
Info_SetValueForKey_Big
==============
*/

void __fastcall Info_SetValueForKey_Big(char *s, const char *key, const char *value)
{
  ?Info_SetValueForKey_Big@@YAXPEADPEBD1@Z(s, key, value);
}

/*
==============
BigUShort
==============
*/

unsigned __int16 __fastcall BigUShort(unsigned __int16 l)
{
  return ?BigUShort@@YAGG@Z(l);
}

/*
==============
IsMayhemClassname
==============
*/

int __fastcall IsMayhemClassname(const char *classname)
{
  return ?IsMayhemClassname@@YAHPEBD@Z(classname);
}

/*
==============
FloatWriteNoSwap
==============
*/

int __fastcall FloatWriteNoSwap(float f)
{
  return ?FloatWriteNoSwap@@YAHM@Z(f);
}

/*
==============
Info_SetValueForKey
==============
*/

void __fastcall Info_SetValueForKey(char *s, const char *key, const char *value)
{
  ?Info_SetValueForKey@@YAXPEADPEBD1@Z(s, key, value);
}

/*
==============
HitLoc_MaskContains
==============
*/

bool __fastcall HitLoc_MaskContains(unsigned int mask, hitLocation_t hitLoc)
{
  return ?HitLoc_MaskContains@@YA_NIW4hitLocation_t@@@Z(mask, hitLoc);
}

/*
==============
Com_InitThreadData
==============
*/

void __fastcall Com_InitThreadData(ThreadContext threadContext)
{
  ?Com_InitThreadData@@YAXW4ThreadContext@@@Z(threadContext);
}

/*
==============
ColorIndex
==============
*/

unsigned __int8 __fastcall ColorIndex(unsigned __int8 c)
{
  return ?ColorIndex@@YAEE@Z(c);
}

/*
==============
IsStaticModelClassname
==============
*/

int __fastcall IsStaticModelClassname(const char *classname)
{
  return ?IsStaticModelClassname@@YAHPEBD@Z(classname);
}

/*
==============
Swap_InitBigEndian
==============
*/

void Swap_InitBigEndian(void)
{
  ?Swap_InitBigEndian@@YAXXZ();
}

/*
==============
Info_CopyValues
==============
*/

void __fastcall Info_CopyValues(char *dest, const char *source, const char **keys, int keyCount)
{
  ?Info_CopyValues@@YAXPEADPEBDPEAPEBDH@Z(dest, source, keys, keyCount);
}

/*
==============
Com_GetWeaponPrimaryAttachmentSlotSize
==============
*/

unsigned int __fastcall Com_GetWeaponPrimaryAttachmentSlotSize(const AttachmentSlot *slot)
{
  return ?Com_GetWeaponPrimaryAttachmentSlotSize@@YAIAEBW4AttachmentSlot@@@Z(slot);
}

/*
==============
FloatReadSwap
==============
*/

double __fastcall FloatReadSwap(int n)
{
  double result; 

  *(float *)&result = ?FloatReadSwap@@YAMH@Z(n);
  return result;
}

/*
==============
Info_Validate
==============
*/

int __fastcall Info_Validate(const char *s)
{
  return ?Info_Validate@@YAHPEBD@Z(s);
}

/*
==============
UnGetLeanFraction
==============
*/

double __fastcall UnGetLeanFraction(const float fFrac)
{
  double result; 

  *(float *)&result = ?UnGetLeanFraction@@YAMM@Z(fFrac);
  return result;
}

/*
==============
LongNoSwap
==============
*/

int __fastcall LongNoSwap(int l)
{
  return ?LongNoSwap@@YAHH@Z(l);
}

/*
==============
IsScriptModelClassname
==============
*/

int __fastcall IsScriptModelClassname(const char *classname)
{
  return ?IsScriptModelClassname@@YAHPEBD@Z(classname);
}

/*
==============
Com_StripExtensionInPlace
==============
*/

void __fastcall Com_StripExtensionInPlace(char *path)
{
  ?Com_StripExtensionInPlace@@YAXPEAD@Z(path);
}

/*
==============
Com_ConvertHexToBytes
==============
*/

void __fastcall Com_ConvertHexToBytes(const char *hexString, const unsigned __int64 writeBufferSize, unsigned __int8 *writeBuffer)
{
  ?Com_ConvertHexToBytes@@YAXPEBD_KPEAE@Z(hexString, writeBufferSize, writeBuffer);
}

/*
==============
BigLong
==============
*/

int __fastcall BigLong(int l)
{
  return ?BigLong@@YAHH@Z(l);
}

/*
==============
Info_ValueForKey
==============
*/

const char *__fastcall Info_ValueForKey(const char *s, const char *key)
{
  return ?Info_ValueForKey@@YAPEBDPEBD0@Z(s, key);
}

/*
==============
Com_GetFilenameSubString
==============
*/

const char *__fastcall Com_GetFilenameSubString(const char *pathname)
{
  return ?Com_GetFilenameSubString@@YAPEBDPEBD@Z(pathname);
}

/*
==============
LongSwap
==============
*/

int __fastcall LongSwap(int l)
{
  return ?LongSwap@@YAHH@Z(l);
}

/*
==============
Long64Swap
==============
*/

unsigned __int64 __fastcall Long64Swap(unsigned __int64 l)
{
  return ?Long64Swap@@YA_K_K@Z(l);
}

/*
==============
GetLeanFraction
==============
*/

double __fastcall GetLeanFraction(const float fFrac)
{
  double result; 

  *(float *)&result = ?GetLeanFraction@@YAMM@Z(fFrac);
  return result;
}

/*
==============
HitLoc_BuildMask
==============
*/

unsigned int HitLoc_BuildMask(int boneCount, ...)
{
  return ?HitLoc_BuildMask@@YAIHZZ(boneCount);
}

/*
==============
vtos
==============
*/

char *__fastcall vtos(const vec3_t *v)
{
  return ?vtos@@YAPEADAEBTvec3_t@@@Z(v);
}

/*
==============
Com_AssembleFilepath
==============
*/

void __fastcall Com_AssembleFilepath(const char *folder, const char *name, const char *extension, char *path, int maxCharCount)
{
  ?Com_AssembleFilepath@@YAXPEBD00PEADH@Z(folder, name, extension, path, maxCharCount);
}

/*
==============
AddLeanToPosition
==============
*/
void AddLeanToPosition(vec3_t *position, const vec3_t *forward, const vec3_t *right, const float fLeanFrac, const float fViewRoll, const float fLeanDist)
{
  float v7; 
  float v8; 
  float v9; 
  vec3_t dst; 

  if ( fLeanFrac != 0.0 )
  {
    v7 = (float)(2.0 - COERCE_FLOAT(LODWORD(fLeanFrac) & _xmm)) * fLeanFrac;
    RotatePointAroundVector(&dst, forward, right, v7 * fViewRoll);
    v8 = (float)(v7 * fLeanDist) * dst.v[1];
    position->v[0] = (float)((float)(v7 * fLeanDist) * dst.v[0]) + position->v[0];
    v9 = (float)(v7 * fLeanDist) * dst.v[2];
    position->v[1] = v8 + position->v[1];
    position->v[2] = v9 + position->v[2];
  }
}

/*
==============
BigLong64
==============
*/

unsigned __int64 __fastcall BigLong64(unsigned __int64 l)
{
  return _BigLong64(l);
}

/*
==============
BigLong
==============
*/

int __fastcall BigLong(int l)
{
  return _BigLong(l);
}

/*
==============
BigLongArray
==============
*/
void BigLongArray(int *dst, const int *src, unsigned int count)
{
  __int64 v3; 
  int *v5; 
  char *v6; 

  v3 = count;
  v5 = dst;
  if ( (!dst || !src) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 554, ASSERT_TYPE_ASSERT, "(dst && src)", (const char *)&queryFormat, "dst && src") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    v6 = (char *)((char *)src - (char *)v5);
    do
    {
      *v5 = BigLong(*(int *)((char *)v5 + (_QWORD)v6));
      ++v5;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
BigShort
==============
*/

__int16 __fastcall BigShort(__int16 l)
{
  return _BigShort(l);
}

/*
==============
BigUShort
==============
*/

unsigned __int16 __fastcall BigUShort(unsigned __int16 l)
{
  return _BigUShort(l);
}

/*
==============
CalcHeatmapColor
==============
*/
void CalcHeatmapColor(float value, vec4_t *outHeatmapColor)
{
  float v3; 
  double v4; 
  double v5; 
  double v6; 

  v3 = value * 4.0;
  v4 = I_fclamp(2.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(value * 4.0) - 4.0) & _xmm), 0.0, 1.0);
  outHeatmapColor->v[0] = *(float *)&v4;
  v5 = I_fclamp(2.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 - 2.0) & _xmm), 0.0, 1.0);
  outHeatmapColor->v[1] = *(float *)&v5;
  v6 = I_fclamp(2.0 - v3, 0.0, 1.0);
  outHeatmapColor->v[2] = *(float *)&v6;
  outHeatmapColor->v[3] = 1.0;
}

/*
==============
CanKeepStringPointer
==============
*/
_BOOL8 CanKeepStringPointer(const char *string)
{
  const char *Value; 
  _BOOL8 result; 
  char v4; 

  result = 0;
  if ( string < &v4 || string >= (const char *)&STACK[0x2020] )
  {
    Value = (const char *)Sys_GetValue(1);
    if ( string < Value || string > Value + 4095 )
      return 1;
  }
  return result;
}

/*
==============
ColorIndex
==============
*/
__int64 ColorIndex(unsigned __int8 c)
{
  unsigned __int8 v1; 
  __int64 result; 

  v1 = c - 39;
  result = 16i64;
  if ( v1 < 0x18u )
    return v1;
  return result;
}

/*
==============
Com_AssembleFilepath
==============
*/
void Com_AssembleFilepath(const char *folder, const char *name, const char *extension, char *path, int maxCharCount)
{
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  char *v13; 

  if ( !folder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 342, ASSERT_TYPE_ASSERT, "(folder)", (const char *)&queryFormat, "folder") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 343, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !extension && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 344, ASSERT_TYPE_ASSERT, "(extension)", (const char *)&queryFormat, "extension") )
    __debugbreak();
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 345, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  if ( maxCharCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 346, ASSERT_TYPE_ASSERT, "(maxCharCount > 0)", (const char *)&queryFormat, "maxCharCount > 0") )
    __debugbreak();
  v9 = -1i64;
  v10 = -1i64;
  do
    ++v10;
  while ( folder[v10] );
  v11 = -1i64;
  do
    ++v11;
  while ( name[v11] );
  while ( extension[++v9] != 0 )
    ;
  if ( (int)v10 + (int)v9 + (int)v11 >= maxCharCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441870C8, 7i64, folder, name, extension, maxCharCount - 1);
  memcpy_0(path, folder, (int)v10);
  v13 = &path[(int)v10];
  memcpy_0(v13, name, (int)v11);
  memcpy_0(&v13[(int)v11], extension, (int)v9 + 1);
}

/*
==============
Com_CleanName
==============
*/
void Com_CleanName(const char *in, char *out, int outSize)
{
  int v3; 
  int v4; 
  int v5; 
  char v6; 
  char *v7; 
  const char *v8; 

  v3 = 0;
  v4 = outSize - 1;
  *out = 0;
  v5 = 0;
  v6 = *in;
  v7 = out;
  v8 = in + 1;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( !*v7 && v6 == 32 )
        goto LABEL_9;
      if ( v6 == 91 )
        break;
      switch ( v6 )
      {
        case '}':
          if ( *v8 != 93 )
            goto LABEL_6;
          goto LABEL_16;
        case '^':
          if ( v8 && *v8 != 94 && (unsigned __int8)(*v8 - 39) <= 0x17u )
            ++v8;
          break;
        case ' ':
          if ( ++v5 <= 3 )
            goto LABEL_7;
          break;
        default:
LABEL_6:
          v5 = 0;
LABEL_7:
          if ( v3 > v4 - 1 )
            goto LABEL_10;
          *out++ = v6;
          ++v3;
          break;
      }
LABEL_9:
      v6 = *v8++;
      if ( !v6 )
        goto LABEL_10;
    }
    if ( *v8 != 123 )
      goto LABEL_6;
LABEL_16:
    ++v8;
    goto LABEL_9;
  }
LABEL_10:
  *out = 0;
  if ( !*v7 || !v3 )
    Core_strcpy(v7, v4, "UnnamedPlayer");
}

/*
==============
Com_CleanStringForNetwork
==============
*/
void Com_CleanStringForNetwork(const char *inString, char *outString, int outStringSize)
{
  size_t v3; 
  __int64 v6; 
  char v7; 

  v3 = outStringSize;
  if ( !inString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 861, ASSERT_TYPE_ASSERT, "(inString)", (const char *)&queryFormat, "inString") )
    __debugbreak();
  memset_0(outString, 0, v3);
  if ( (int)v3 - 1 > 0 )
  {
    v6 = -(__int64)outString;
    do
    {
      v7 = outString[v6 + (_QWORD)inString];
      if ( !v7 )
        break;
      if ( v7 != -110 )
      {
        *outString = v7;
        if ( v7 != 34 )
          continue;
      }
      *outString++ = 39;
    }
    while ( (__int64)&outString[v6] < (int)v3 - 1 );
  }
  *outString = 0;
}

/*
==============
Com_ConvertBytesToHex
==============
*/
void Com_ConvertBytesToHex(const unsigned __int8 *readBuffer, const int readBufferSize, const int writeBufferSize, char *writeBuffer)
{
  __int64 v4; 
  __int64 v6; 
  char *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  unsigned __int8 v13; 
  char *v14; 
  __int64 v15; 
  char *v16; 

  v4 = writeBufferSize;
  v6 = readBufferSize;
  if ( !readBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2060, ASSERT_TYPE_ASSERT, "(readBuffer)", (const char *)&queryFormat, "readBuffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2061, ASSERT_TYPE_ASSERT, "(readBufferSize > 0)", (const char *)&queryFormat, "readBufferSize > 0") )
    __debugbreak();
  if ( (int)v4 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2062, ASSERT_TYPE_ASSERT, "(writeBufferSize >= 3)", (const char *)&queryFormat, "writeBufferSize >= 3") )
    __debugbreak();
  if ( !writeBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2063, ASSERT_TYPE_ASSERT, "(writeBuffer)", (const char *)&queryFormat, "writeBuffer") )
    __debugbreak();
  v16 = writeBuffer;
  v8 = writeBuffer;
  v15 = v4;
  v9 = v6;
  v10 = v4;
  if ( (int)v6 > 0 )
  {
    v11 = 0i64;
    v12 = &writeBuffer[v4];
    do
    {
      v13 = readBuffer[v11];
      if ( writeBuffer >= v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2077, ASSERT_TYPE_ASSERT, "(writeBuffer < (writeBufferStart + writeBufferSize))", (const char *)&queryFormat, "writeBuffer < (writeBufferStart + writeBufferSize)") )
        __debugbreak();
      *writeBuffer = HEX_STR_MAP[(unsigned __int64)v13 >> 4];
      v14 = writeBuffer + 1;
      if ( v14 >= v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2082, ASSERT_TYPE_ASSERT, "(writeBuffer < (writeBufferStart + writeBufferSize))", (const char *)&queryFormat, "writeBuffer < (writeBufferStart + writeBufferSize)") )
        __debugbreak();
      ++v11;
      *v14 = HEX_STR_MAP[v13 & 0xF];
      writeBuffer = v14 + 1;
    }
    while ( v11 < v9 );
    v10 = v15;
    v8 = v16;
  }
  if ( writeBuffer >= &v8[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2088, ASSERT_TYPE_ASSERT, "(writeBuffer < (writeBufferStart + writeBufferSize))", (const char *)&queryFormat, "writeBuffer < (writeBufferStart + writeBufferSize)") )
    __debugbreak();
  *writeBuffer = 0;
}

/*
==============
Com_ConvertHexToBytes
==============
*/
void Com_ConvertHexToBytes(const char *hexString, const unsigned __int64 writeBufferSize, unsigned __int8 *writeBuffer)
{
  const char *v5; 
  char v6; 
  unsigned __int64 v7; 
  char i; 
  char v9; 
  char v10; 
  unsigned __int64 v11; 

  v5 = hexString;
  if ( !hexString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2095, ASSERT_TYPE_ASSERT, "(hexString)", (const char *)&queryFormat, "hexString") )
    __debugbreak();
  if ( !writeBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2096, ASSERT_TYPE_ASSERT, "(writeBuffer)", (const char *)&queryFormat, "writeBuffer") )
    __debugbreak();
  if ( !writeBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2097, ASSERT_TYPE_ASSERT, "(writeBufferSize > 0)", (const char *)&queryFormat, "writeBufferSize > 0") )
    __debugbreak();
  v6 = *v5;
  v7 = 0i64;
  for ( i = 0; v6; v7 = v11 )
  {
    if ( (unsigned __int8)(v6 - 48) > 9u && (unsigned __int8)(v6 - 65) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2107, ASSERT_TYPE_ASSERT, "((currentDigit >= '0' && currentDigit <= '9') || (currentDigit >= 'A' && currentDigit <= 'F'))", (const char *)&queryFormat, "(currentDigit >= '0' && currentDigit <= '9') || (currentDigit >= 'A' && currentDigit <= 'F')") )
      __debugbreak();
    v9 = 55;
    if ( v6 < 65 )
      v9 = 48;
    v10 = v6 - v9;
    if ( writeBufferSize <= v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2118, ASSERT_TYPE_ASSERT, "(writeBufferSize > byteIndex)", (const char *)&queryFormat, "writeBufferSize > byteIndex") )
      __debugbreak();
    if ( i )
      writeBuffer[v7] |= v10;
    else
      writeBuffer[v7] = 16 * v10;
    v6 = v5[1];
    v11 = v7 + 1;
    if ( !i )
      v11 = v7;
    ++v5;
    i ^= 1u;
  }
}

/*
==============
Com_CopyAndStripExtension
==============
*/
void Com_CopyAndStripExtension(char *outPath, unsigned __int64 bufSize, const char *inPath)
{
  const char *ExtensionSubString; 
  const char *v7; 

  ExtensionSubString = Com_GetExtensionSubString(inPath);
  v7 = ExtensionSubString;
  if ( ExtensionSubString )
  {
    if ( ExtensionSubString < inPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 421, ASSERT_TYPE_ASSERT, "(extension >= inPath)", (const char *)&queryFormat, "extension >= inPath") )
      __debugbreak();
    Core_strncpy(outPath, bufSize, inPath, v7 - inPath);
  }
  else
  {
    Core_strcpy(outPath, bufSize, inPath);
  }
}

/*
==============
Com_CopyAndStripFilename
==============
*/
void Com_CopyAndStripFilename(char *outPath, unsigned __int64 bufSize, const char *inPath)
{
  char v3; 
  const char *v7; 
  const char *i; 

  v3 = *inPath;
  v7 = inPath;
  for ( i = inPath; v3; ++v7 )
  {
    if ( v3 == 47 || v3 == 92 )
      i = v7 + 1;
    v3 = v7[1];
  }
  if ( i )
  {
    if ( i < inPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 443, ASSERT_TYPE_ASSERT, "(filename >= inPath)", (const char *)&queryFormat, "filename >= inPath") )
      __debugbreak();
    Core_strncpy(outPath, bufSize, inPath, i - inPath);
  }
  else
  {
    Core_strcpy(outPath, bufSize, inPath);
  }
}

/*
==============
Com_DefaultExtension
==============
*/
void Com_DefaultExtension(char *path, int maxSize, const char *extension)
{
  unsigned __int64 v3; 
  __int64 v6; 
  char v7; 
  char *i; 
  char dest[64]; 

  v3 = maxSize;
  if ( maxSize > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 464, ASSERT_TYPE_ASSERT, "( maxSize ) <= ( ( 64 ) )", "%s <= %s\n\t%i, %i", "maxSize", "MAX_QPATH", maxSize, 64) )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( path[v6] );
  v7 = path[(unsigned int)v6 - 1];
  for ( i = &path[(unsigned int)v6 - 1]; v7 != 47; v7 = *--i )
  {
    if ( i == path )
      break;
    if ( v7 == 46 )
      return;
  }
  Core_strcpy(dest, 0x40ui64, path);
  Com_sprintf(path, v3, "%s%s", dest, extension);
}

/*
==============
Com_ExtractPlayerNameSuffix
==============
*/
int Com_ExtractPlayerNameSuffix(const char *playerName)
{
  char *v2; 

  if ( !playerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 280, ASSERT_TYPE_SANITY, "( playerName )", (const char *)&queryFormat, "playerName") )
    __debugbreak();
  v2 = strchr_0(playerName, 35);
  if ( v2 && v2[1] )
    return atoi(v2 + 1);
  else
    return 0;
}

/*
==============
Com_GetExtensionSubString
==============
*/
const char *Com_GetExtensionSubString(const char *filename)
{
  const char *v1; 
  char v2; 
  const char *i; 

  v1 = filename;
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 375, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  v2 = *v1;
  for ( i = NULL; v2; ++v1 )
  {
    if ( v2 == 46 )
    {
      i = v1;
    }
    else if ( v2 == 47 || v2 == 92 )
    {
      i = NULL;
    }
    v2 = v1[1];
  }
  if ( i )
    return i;
  return v1;
}

/*
==============
Com_GetFilenameSubString
==============
*/
const char *Com_GetFilenameSubString(const char *pathname)
{
  char v1; 
  const char *i; 

  v1 = *pathname;
  for ( i = pathname; v1; ++pathname )
  {
    if ( v1 == 47 || v1 == 92 )
      i = pathname + 1;
    v1 = pathname[1];
  }
  return i;
}

/*
==============
Com_GetWeaponAttachmentSlotSize
==============
*/
__int64 Com_GetWeaponAttachmentSlotSize(const AttachmentSlot *slot)
{
  __int64 result; 

  if ( *(int *)slot >= 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2181, ASSERT_TYPE_ASSERT, "(slot < ATT_SLOT_COUNT)", (const char *)&queryFormat, "slot < ATT_SLOT_COUNT") )
    __debugbreak();
  if ( *(int *)slot >= 13 )
    return 16i64;
  result = 255i64;
  if ( *slot == ATT_SLOT_VISUAL )
    return 510i64;
  return result;
}

/*
==============
Com_GetWeaponPrimaryAttachmentSlotSize
==============
*/
__int64 Com_GetWeaponPrimaryAttachmentSlotSize(const AttachmentSlot *slot)
{
  __int64 result; 

  if ( *(int *)slot >= 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2173, ASSERT_TYPE_ASSERT, "(slot < ATT_SLOT_PRIMARY_COUNT)", (const char *)&queryFormat, "slot < ATT_SLOT_PRIMARY_COUNT") )
    __debugbreak();
  result = 255i64;
  if ( *slot == ATT_SLOT_VISUAL )
    return 510i64;
  return result;
}

/*
==============
Com_InitThreadData
==============
*/
void Com_InitThreadData(ThreadContext threadContext)
{
  __int64 v1; 

  v1 = threadContext;
  Sys_SetValue(1, &va_info[threadContext]);
  Sys_SetValue(2, g_com_error[v1]);
}

/*
==============
Com_IsVAString
==============
*/
bool Com_IsVAString(const char *str)
{
  return str >= (const char *)va_info && str < end;
}

/*
==============
Com_ParseEffect
==============
*/
void Com_ParseEffect(FxCombinedDef *fxCombinedDef, const char *assetName)
{
  fxCombinedDef->particleSystemDef = ParticleSystem_Register(assetName);
}

/*
==============
Com_ParseNoteTrack
==============
*/
__int64 Com_ParseNoteTrack(const char *const noteName, char *const commandBuf, char *const paramBuf, char *const targetBuf, const char **outCommand, const char **outParam, const char **outTarget)
{
  unsigned int v11; 
  char v12; 
  char v13; 
  char v14; 
  __int64 result; 

  if ( !noteName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 493, ASSERT_TYPE_ASSERT, "(noteName)", (const char *)&queryFormat, "noteName") )
    __debugbreak();
  if ( !commandBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 494, ASSERT_TYPE_ASSERT, "(commandBuf)", (const char *)&queryFormat, "commandBuf") )
    __debugbreak();
  if ( !paramBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 495, ASSERT_TYPE_ASSERT, "(paramBuf)", (const char *)&queryFormat, "paramBuf") )
    __debugbreak();
  if ( !targetBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 496, ASSERT_TYPE_ASSERT, "(targetBuf)", (const char *)&queryFormat, "targetBuf") )
    __debugbreak();
  if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 497, ASSERT_TYPE_ASSERT, "(outCommand)", (const char *)&queryFormat, "outCommand") )
    __debugbreak();
  if ( !outParam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 498, ASSERT_TYPE_ASSERT, "(outParam)", (const char *)&queryFormat, "outParam") )
    __debugbreak();
  if ( !outTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 499, ASSERT_TYPE_ASSERT, "(outTarget)", (const char *)&queryFormat, "outTarget") )
    __debugbreak();
  v11 = j_sscanf(noteName, "%[^','],%[^','],%s", commandBuf, paramBuf, targetBuf);
  while ( 1 )
  {
    v12 = *commandBuf;
    if ( (unsigned __int8)*commandBuf < 9u || (unsigned __int8)v12 > 0x20u || !v12 )
      break;
    ++commandBuf;
  }
  *outCommand = commandBuf;
  while ( 1 )
  {
    v13 = *paramBuf;
    if ( (unsigned __int8)*paramBuf < 9u || (unsigned __int8)v13 > 0x20u || !v13 )
      break;
    ++paramBuf;
  }
  *outParam = paramBuf;
  while ( 1 )
  {
    v14 = *targetBuf;
    if ( (unsigned __int8)*targetBuf < 9u || (unsigned __int8)v14 > 0x20u || !v14 )
      break;
    ++targetBuf;
  }
  result = v11;
  *outTarget = targetBuf;
  return result;
}

/*
==============
Com_StripExtensionInPlace
==============
*/
void Com_StripExtensionInPlace(char *path)
{
  const char *ExtensionSubString; 
  const char *v3; 

  ExtensionSubString = Com_GetExtensionSubString(path);
  v3 = ExtensionSubString;
  if ( ExtensionSubString )
  {
    if ( ExtensionSubString < path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 403, ASSERT_TYPE_ASSERT, "(extension >= path)", (const char *)&queryFormat, "extension >= path") )
      __debugbreak();
    *v3 = 0;
  }
}

/*
==============
Com_TruncatePlayerName
==============
*/
void Com_TruncatePlayerName(const char *playerName, char *outTruncatedPlayerName, const unsigned __int64 maxOutLength)
{
  __int64 v6; 
  int v7; 
  const char *v8; 
  __int64 v9; 
  bool v10; 

  if ( !playerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 229, ASSERT_TYPE_SANITY, "( playerName )", (const char *)&queryFormat, "playerName") )
    __debugbreak();
  if ( !outTruncatedPlayerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 230, ASSERT_TYPE_SANITY, "( outTruncatedPlayerName )", (const char *)&queryFormat, "outTruncatedPlayerName") )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( playerName[v6] );
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    v8 = playerName;
    while ( *v8 != 35 && *v8 )
    {
      if ( (unsigned int)v7 >= maxOutLength - 1 )
      {
        v9 = v7;
        v10 = v7 <= 0;
        if ( v7 >= 0 )
        {
          do
          {
            if ( (playerName[v9] & 0xC0) != 0x80 )
              break;
            --v7;
            --v9;
          }
          while ( v9 >= 0 );
          v10 = v7 <= 0;
        }
        if ( v10 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 264, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Invalid name(%s) passed to %s.  No valid ASCII or UTF8 start bytes present.", playerName, "Com_TruncatePlayerName") )
            __debugbreak();
          v7 = 0;
        }
        break;
      }
      ++v7;
      ++v8;
      if ( v7 >= (unsigned int)v6 )
        break;
    }
  }
  Core_strcpy_truncate(outTruncatedPlayerName, (unsigned int)(v7 + 1), playerName);
}

/*
==============
FloatReadNoSwap
==============
*/
float FloatReadNoSwap(int n)
{
  return *(float *)&n;
}

/*
==============
FloatReadSwap
==============
*/
float FloatReadSwap(int n)
{
  float v2; 

  HIBYTE(v2) = n;
  LOBYTE(v2) = HIBYTE(n);
  BYTE1(v2) = BYTE2(n);
  BYTE2(v2) = BYTE1(n);
  return v2;
}

/*
==============
FloatWriteNoSwap
==============
*/
__int64 FloatWriteNoSwap(float f)
{
  return LODWORD(f);
}

/*
==============
FloatWriteSwap
==============
*/
__int64 FloatWriteSwap(float f)
{
  unsigned int v2; 

  LOBYTE(v2) = HIBYTE(f);
  BYTE1(v2) = BYTE2(f);
  BYTE2(v2) = BYTE1(f);
  HIBYTE(v2) = LOBYTE(f);
  return v2;
}

/*
==============
GetLeanFraction
==============
*/
float GetLeanFraction(const float fFrac)
{
  return (float)(2.0 - COERCE_FLOAT(LODWORD(fFrac) & _xmm)) * fFrac;
}

/*
==============
HitLoc_BuildMask
==============
*/
unsigned int HitLoc_BuildMask(int boneCount, ...)
{
  unsigned int result; 
  int *v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  v5 = boneCount;
  if ( boneCount <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 2033, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
      __debugbreak();
    boneCount = v5;
  }
  result = 0;
  if ( boneCount > 0 )
  {
    v2 = &v5;
    v3 = (unsigned int)boneCount;
    do
    {
      v4 = v2[2];
      v2 += 2;
      result |= 1 << v4;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

/*
==============
HitLoc_MaskContains
==============
*/
unsigned __int8 HitLoc_MaskContains(unsigned int mask, hitLocation_t hitLoc)
{
  return _bittest((const int *)&mask, hitLoc);
}

/*
==============
I_CleanChar
==============
*/
__int64 I_CleanChar(char character)
{
  __int64 result; 

  result = (unsigned __int8)character;
  if ( character == -110 )
    return 39i64;
  return result;
}

/*
==============
I_CleanStr
==============
*/
char *I_CleanStr(char *string)
{
  char v2; 
  char *result; 
  char *v4; 
  char v5; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 821, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  v2 = *string;
  result = string;
  v4 = string;
  if ( *string )
  {
    v5 = *string;
    do
    {
      if ( v5 == 94 && (unsigned __int8)(result[1] - 39) <= 0x17u )
        ++result;
      else
        *v4++ = v2;
      v2 = *++result;
      v5 = v2;
    }
    while ( v2 );
    *v4 = 0;
    return string;
  }
  else
  {
    *string = 0;
  }
  return result;
}

/*
==============
I_DrawStrlen
==============
*/
__int64 I_DrawStrlen(const char *str)
{
  unsigned int i; 
  char v2; 
  __int64 v3; 

  for ( i = 0; *str; str += v3 )
  {
    if ( str && *str == 94 && (v2 = str[1]) != 0 && v2 != 94 && (unsigned __int8)(v2 - 39) <= 0x17u )
    {
      v3 = 2i64;
    }
    else
    {
      ++i;
      v3 = 1i64;
    }
  }
  return i;
}

/*
==============
Info_CopyValues
==============
*/
void Info_CopyValues(char *dest, const char *source, const char **keys, int keyCount)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  char (*v11)[8192]; 
  char *v12; 
  char *v13; 
  char v14; 
  char value[1024]; 

  v4 = keyCount;
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1506, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1507, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( !keys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1508, ASSERT_TYPE_ASSERT, "(keys)", (const char *)&queryFormat, "keys") )
    __debugbreak();
  v8 = v4;
  if ( (int)v4 > 0 )
  {
    v9 = 0i64;
    do
    {
      v10 = keys[v9];
      if ( source && v10 )
      {
        valueindex ^= 1u;
        if ( Sys_IsMainThread() )
        {
          v11 = value1[0];
        }
        else if ( Sys_IsServerThread() )
        {
          v11 = value1[2];
        }
        else
        {
          if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1122, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
            __debugbreak();
          v11 = value1[1];
        }
        v12 = v11[(__int64)valueindex];
        Info_ValueForKeyReentrant(v12, 0x2000ui64, source, v10);
      }
      else
      {
        v12 = (char *)&queryFormat.fmt + 3;
      }
      v13 = (char *)(value - v12);
      do
      {
        v14 = *v12;
        v12[(_QWORD)v13] = *v12;
        ++v12;
      }
      while ( v14 );
      Info_SetValueForKey(dest, keys[v9++], value);
    }
    while ( v9 < v8 );
  }
}

/*
==============
Info_NextPair
==============
*/
void Info_NextPair(const char **head, char *key, char *value)
{
  const char *v3; 
  char *v4; 
  bool v6; 
  const char *v7; 
  char v8; 
  const char *v9; 
  char i; 

  v3 = *head;
  v4 = value;
  v6 = **head == 92;
  v7 = *head + 1;
  *key = 0;
  if ( !v6 )
    v7 = v3;
  *value = 0;
  v8 = *v7;
  if ( *v7 == 92 )
  {
LABEL_6:
    v9 = v7 + 1;
    *key = 0;
    for ( i = *v9; *v9 != 92; i = *v9 )
    {
      if ( !i )
        break;
      ++v9;
      *v4++ = i;
    }
    *v4 = 0;
    *head = v9;
  }
  else
  {
    while ( v8 )
    {
      ++v7;
      *key++ = v8;
      v8 = *v7;
      if ( *v7 == 92 )
        goto LABEL_6;
    }
    *key = 0;
    *head = v7;
  }
}

/*
==============
Info_RemoveKey
==============
*/
void Info_RemoveKey(char *s, const char *key)
{
  char *v3; 
  __int64 v4; 
  char v5; 
  char *v6; 
  char *v7; 
  char v8; 
  char *v9; 
  bool v10; 
  char *v11; 
  char v12; 
  char *i; 
  const char *v14; 
  int v15; 
  int v16; 
  char j; 
  char v18[1024]; 
  char v19; 

  v3 = s;
  v4 = -1i64;
  do
    ++v4;
  while ( s[v4] );
  if ( (unsigned int)v4 >= 0x400 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441873C8);
  if ( !strchr_0(key, 92) )
  {
    v5 = *v3;
    while ( 1 )
    {
      v6 = v3;
      v7 = v3;
      v8 = v5;
      if ( v5 == 92 )
        v8 = v3[1];
      v9 = v3 + 1;
      v10 = v5 == 92;
      v11 = v18;
      if ( !v10 )
        v9 = v6;
      if ( v8 != 92 )
        break;
LABEL_14:
      v12 = v9[1];
      v3 = v9 + 1;
      *v11 = 0;
      for ( i = &v19; v12 != 92; ++i )
      {
        if ( !v12 )
          break;
        v12 = *++v3;
      }
      *i = 0;
      v14 = key;
      do
      {
        v15 = (unsigned __int8)v14[v18 - key];
        v16 = *(unsigned __int8 *)v14 - v15;
        if ( v16 )
          break;
        ++v14;
      }
      while ( v15 );
      if ( !v16 )
      {
        if ( v7 >= v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1227, ASSERT_TYPE_ASSERT, "(start < s)", (const char *)&queryFormat, "start < s") )
          __debugbreak();
        for ( j = *v3; *v3; ++v7 )
        {
          *v7 = j;
          j = *++v3;
        }
        *v7 = 0;
        return;
      }
      v5 = *v3;
      if ( !*v3 )
        return;
    }
    while ( v8 )
    {
      ++v9;
      *v11++ = v8;
      v8 = *v9;
      if ( *v9 == 92 )
        goto LABEL_14;
    }
  }
}

/*
==============
Info_RemoveKey_Big
==============
*/
void Info_RemoveKey_Big(char *s, const char *key)
{
  char *v3; 
  __int64 v4; 
  char v5; 
  char *v6; 
  char *v7; 
  char v8; 
  char *v9; 
  bool v10; 
  char *v11; 
  char v12; 
  char *i; 
  const char *v14; 
  int v15; 
  int v16; 
  char j; 
  char v18[8192]; 
  char v19; 

  v3 = s;
  v4 = -1i64;
  do
    ++v4;
  while ( s[v4] );
  if ( (unsigned int)v4 >= 0x4000 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144187428);
  if ( !strchr_0(key, 92) )
  {
    v5 = *v3;
    while ( 1 )
    {
      v6 = v3;
      v7 = v3;
      v8 = v5;
      if ( v5 == 92 )
        v8 = v3[1];
      v9 = v3 + 1;
      v10 = v5 == 92;
      v11 = v18;
      if ( !v10 )
        v9 = v6;
      if ( v8 != 92 )
        break;
LABEL_14:
      v12 = v9[1];
      v3 = v9 + 1;
      *v11 = 0;
      for ( i = &v19; v12 != 92; ++i )
      {
        if ( !v12 )
          break;
        v12 = *++v3;
      }
      *i = 0;
      v14 = key;
      do
      {
        v15 = (unsigned __int8)v14[v18 - key];
        v16 = *(unsigned __int8 *)v14 - v15;
        if ( v16 )
          break;
        ++v14;
      }
      while ( v15 );
      if ( !v16 )
      {
        if ( v7 >= v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1294, ASSERT_TYPE_ASSERT, "(start < s)", (const char *)&queryFormat, "start < s") )
          __debugbreak();
        for ( j = *v3; *v3; ++v7 )
        {
          *v7 = j;
          j = *++v3;
        }
        *v7 = 0;
        return;
      }
      v5 = *v3;
      if ( !*v3 )
        return;
    }
    while ( v8 )
    {
      ++v9;
      *v11++ = v8;
      v8 = *v9;
      if ( *v9 == 92 )
        goto LABEL_14;
    }
  }
}

/*
==============
Info_SetValueForKey
==============
*/
void Info_SetValueForKey(char *s, const char *key, const char *value)
{
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 i; 
  char v11; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  char v17[1024]; 
  char dest[1024]; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1350, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( s[v6] );
  if ( (unsigned int)v6 < 0x400 )
  {
    v7 = 0x400000002000001i64;
    v8 = 0;
    v9 = 0i64;
    for ( i = 0i64; i < 1023; ++i )
    {
      v11 = value[i];
      if ( !v11 )
        break;
      if ( (unsigned __int8)(v11 - 34) > 0x3Au || !_bittest64(&v7, (char)(v11 - 34)) )
      {
        if ( v9 >= 1024 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1366, ASSERT_TYPE_ASSERT, "(j < 1024)", (const char *)&queryFormat, "j < MAX_INFO_STRING") )
            __debugbreak();
          v7 = 0x400000002000001i64;
        }
        ++v8;
        v17[v9++] = v11;
      }
    }
    v12 = -1i64;
    if ( v8 >= 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1371, ASSERT_TYPE_ASSERT, "(j < 1024)", (const char *)&queryFormat, "j < MAX_INFO_STRING") )
      __debugbreak();
    if ( (unsigned __int64)v8 >= 0x400 )
    {
      j___report_rangecheckfailure(v7);
      JUMPOUT(0x141897539i64);
    }
    v17[v8] = 0;
    if ( strchr_0(key, 92) )
    {
      Com_Printf(16, "Can't use keys with a \\\nkey: '%s'\nvalue: '%s'", key, value);
    }
    else if ( strchr_0(key, 59) )
    {
      Com_Printf(16, "Can't use keys with a semicolon\nkey: '%s'\nvalue: '%s'", key, value);
    }
    else if ( strchr_0(key, 34) )
    {
      Com_Printf(16, "Can't use keys with a \"\nkey: '%s'\nvalue: '%s'", key, value);
    }
    else
    {
      Info_RemoveKey(s, key);
      if ( v17[0] )
      {
        if ( Com_sprintf_truncate(dest, 0x400ui64, "\\%s\\%s", key, v17) > 0 )
        {
          v13 = -1i64;
          do
            ++v13;
          while ( s[v13] );
          do
            ++v12;
          while ( dest[v12] );
          if ( (unsigned int)(v12 + v13) <= 0x400 )
          {
            v14 = s - 1;
            while ( *++v14 != 0 )
              ;
            strcpy(v14, dest);
          }
          else
          {
            Com_Printf(16, "Info string length exceeded\nkey: '%s'\nvalue: '%s'\nInfo string:\n%s\n", key, value, s);
          }
        }
        else
        {
          Com_Printf(16, "Info buffer length exceeded, not including key/value pair in response\n");
        }
      }
    }
  }
  else
  {
    Com_Printf(16, "Info_SetValueForKey: oversize infostring");
  }
}

/*
==============
Info_SetValueForKey_Big
==============
*/
void Info_SetValueForKey_Big(char *s, const char *key, const char *value)
{
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 i; 
  char v11; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  char v17[16384]; 
  char dest[16384]; 

  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1430, ASSERT_TYPE_ASSERT, (const char *)&stru_143CE7590.m_end, (const char *)&queryFormat, &stru_143CE7590) )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( s[v6] );
  if ( (unsigned int)v6 < 0x4000 )
  {
    v7 = 0x400000002000001i64;
    v8 = 0;
    v9 = 0i64;
    for ( i = 0i64; i < 0x3FFF; ++i )
    {
      v11 = value[i];
      if ( !v11 )
        break;
      if ( (unsigned __int8)(v11 - 34) > 0x3Au || !_bittest64(&v7, (char)(v11 - 34)) )
      {
        if ( v9 >= 0x4000 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1446, ASSERT_TYPE_ASSERT, "(j < 16384)", (const char *)&queryFormat, "j < BIG_INFO_STRING") )
            __debugbreak();
          v7 = 0x400000002000001i64;
        }
        ++v8;
        v17[v9++] = v11;
      }
    }
    v12 = -1i64;
    if ( v8 >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1451, ASSERT_TYPE_ASSERT, "(j < 16384)", (const char *)&queryFormat, "j < BIG_INFO_STRING") )
      __debugbreak();
    if ( (unsigned __int64)v8 >= 0x4000 )
    {
      j___report_rangecheckfailure(v7);
      JUMPOUT(0x141897959i64);
    }
    v17[v8] = 0;
    if ( strchr_0(key, 92) )
    {
      Com_Printf(16, "Can't use keys with a \\\nkey: '%s'\nvalue: '%s'", key, value);
    }
    else if ( strchr_0(key, 59) )
    {
      Com_Printf(16, "Can't use keys with a semicolon\nkey: '%s'\nvalue: '%s'", key, value);
    }
    else if ( strchr_0(key, 34) )
    {
      Com_Printf(16, "Can't use keys with a \"\nkey: '%s'\nvalue: '%s'", key, value);
    }
    else
    {
      Info_RemoveKey_Big(s, key);
      if ( v17[0] )
      {
        if ( Com_sprintf_truncate(dest, 0x4000ui64, "\\%s\\%s", key, v17) > 0 )
        {
          v13 = -1i64;
          do
            ++v13;
          while ( s[v13] );
          do
            ++v12;
          while ( dest[v12] );
          if ( (unsigned int)(v12 + v13) <= 0x4000 )
          {
            v14 = s - 1;
            while ( *++v14 != 0 )
              ;
            strcpy(v14, dest);
          }
          else
          {
            Com_Printf(16, "Big info string length exceeded\nkey: '%s'\nvalue: '%s'\nInfo string:\n%s\n", key, value, s);
          }
        }
        else
        {
          Com_Printf(16, "Info buffer length exceeded, not including key/value pair in response\n");
        }
      }
    }
  }
  else
  {
    Com_Printf(16, "Info_SetValueForKey: oversize infostring");
  }
}

/*
==============
Info_Validate
==============
*/
_BOOL8 Info_Validate(const char *s)
{
  return !strchr_0(s, 34) && !strchr_0(s, 59);
}

/*
==============
Info_ValueForKey
==============
*/
char *Info_ValueForKey(const char *s, const char *key)
{
  char (*v4)[8192]; 
  char *v5; 

  if ( !s || !key )
    return (char *)&queryFormat.fmt + 3;
  valueindex ^= 1u;
  if ( Sys_IsMainThread() )
  {
    v4 = value1[0];
  }
  else if ( Sys_IsServerThread() )
  {
    v4 = value1[2];
  }
  else
  {
    if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1122, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
      __debugbreak();
    v4 = value1[1];
  }
  v5 = v4[(__int64)valueindex];
  Info_ValueForKeyReentrant(v5, 0x2000ui64, s, key);
  return v5;
}

/*
==============
Info_ValueForKeyReentrant
==============
*/
void Info_ValueForKeyReentrant(char *outText, unsigned __int64 textBufferSize, const char *s, const char *key)
{
  const char *v8; 
  __int64 v9; 
  char v10; 
  char *v11; 
  __int64 v12; 
  char *v13; 
  char *v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  bool v21; 
  int v22; 
  char v23; 
  char v24[8192]; 

  if ( !textBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1018, ASSERT_TYPE_ASSERT, "(textBufferSize > 0)", (const char *)&queryFormat, "textBufferSize > 0") )
    __debugbreak();
  if ( s && key )
  {
    v8 = s + 1;
    if ( *s != 92 )
      v8 = s;
    v9 = 0i64;
    while ( 1 )
    {
      v10 = *v8;
      v11 = v24;
      if ( *v8 != 92 )
        break;
LABEL_15:
      v13 = (char *)(v8 + 1);
      *v11 = 0;
      v14 = v24;
      v15 = 0x7FFFFFFFi64;
      while ( 1 )
      {
        v16 = (unsigned __int8)v14[key - v24];
        v17 = v15;
        v18 = (unsigned __int8)*v14++;
        --v15;
        if ( !v17 )
        {
LABEL_24:
          v22 = 0;
          goto LABEL_25;
        }
        if ( v16 != v18 )
        {
          v19 = v16 + 32;
          if ( v16 - 65 > 0x19 )
            v19 = v16;
          v20 = v18 + 32;
          v16 = v19;
          if ( v18 - 65 > 0x19 )
            v20 = v18;
          v21 = v19 < v20;
          if ( v19 != v20 )
            break;
        }
        if ( !v16 )
          goto LABEL_24;
      }
      v22 = 1;
      if ( v21 )
        v22 = -1;
LABEL_25:
      v23 = *v13;
      if ( !v22 )
      {
        if ( v23 != 92 )
        {
          do
          {
            if ( !v23 )
              break;
            *outText = v23;
            ++v13;
            ++outText;
            if ( ++v9 >= textBufferSize )
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144187388, 10i64, v9);
            v23 = *v13;
          }
          while ( *v13 != 92 );
        }
        goto LABEL_38;
      }
      if ( v23 != 92 )
      {
        while ( v23 )
        {
          v23 = *++v13;
          if ( v23 == 92 )
            goto LABEL_29;
        }
        goto LABEL_38;
      }
LABEL_29:
      v8 = v13 + 1;
    }
    v12 = 0i64;
    while ( v10 )
    {
      *v11 = v10;
      ++v8;
      ++v11;
      if ( ++v12 >= 0x2000 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144187348, 9i64, v12);
      v10 = *v8;
      if ( *v8 == 92 )
        goto LABEL_15;
    }
  }
LABEL_38:
  *outText = 0;
}

/*
==============
IsActorClassname
==============
*/
__int64 IsActorClassname(const char *classname)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "actor_";
  v2 = 6i64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "actor_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsDynBrushClassname
==============
*/
__int64 IsDynBrushClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "dyn_brushmodel";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "dyn_brushmodel";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsDynClassname
==============
*/
__int64 IsDynClassname(const char *classname)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "dyn_";
  v2 = 4i64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "dyn_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsDynModelClassname
==============
*/
__int64 IsDynModelClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "dyn_model";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "dyn_model";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsMayhemClassname
==============
*/
__int64 IsMayhemClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "client_mayhem";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "client_mayhem";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsMpSpawnClassname
==============
*/
__int64 IsMpSpawnClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  char v7; 
  const char *v8; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 

  v1 = "mp_";
  v3 = 3i64;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v4 = v1[classname - "mp_"];
    v5 = v3;
    v6 = *v1++;
    --v3;
    if ( !v5 )
      break;
    if ( v4 != v6 )
      return 0i64;
  }
  while ( v4 );
  v7 = classname[3];
  v8 = classname + 3;
  if ( v7 != 95 )
  {
    while ( v7 )
    {
      v7 = *++v8;
      if ( v7 == 95 )
        goto LABEL_10;
    }
    return 0i64;
  }
LABEL_10:
  v9 = 5i64;
  v10 = "spawn";
  if ( v8 == (const char *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v11 = v8 - "spawn";
  do
  {
    v12 = v10[v11 + 1];
    v13 = v9;
    v14 = *v10++;
    --v9;
    if ( !v13 )
      break;
    if ( v12 != v14 )
      return 0i64;
  }
  while ( v12 );
  return 1i64;
}

/*
==============
IsNodeClassname
==============
*/
__int64 IsNodeClassname(const char *classname)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "node_";
  v2 = 5i64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "node_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsParentClassname
==============
*/
_BOOL8 IsParentClassname(const char *classname, const char *parentClassname)
{
  __int64 v3; 
  __int64 v4; 
  char v5; 
  _BOOL8 result; 

  v3 = -1i64;
  do
    ++v3;
  while ( parentClassname[v3] );
  v4 = (int)v3;
  result = 0;
  if ( !I_strnicmp(classname, parentClassname, (int)v3) )
  {
    v5 = classname[v4];
    if ( !v5 || v5 == 95 )
      return 1;
  }
  return result;
}

/*
==============
IsScriptBrushModelClassname
==============
*/
__int64 IsScriptBrushModelClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "script_brushmodel";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "script_brushmodel";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsScriptBundleClassname
==============
*/
__int64 IsScriptBundleClassname(const char *classname)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "scriptbundle_";
  v2 = 13i64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "scriptbundle_";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsScriptModelClassname
==============
*/
__int64 IsScriptModelClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "script_model";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "script_model";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsScriptVehicleCollmapClassname
==============
*/
__int64 IsScriptVehicleCollmapClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "script_vehicle_collmap";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "script_vehicle_collmap";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsScriptableClassname
==============
*/
__int64 IsScriptableClassname(const char *classname)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "scriptable";
  v2 = 10i64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "scriptable";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsScriptableCollmapClassname
==============
*/
__int64 IsScriptableCollmapClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "collmap_scriptable";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "collmap_scriptable";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsStaticModelClassname
==============
*/
__int64 IsStaticModelClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "misc_model";
  v3 = 0x7FFFFFFFi64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "misc_model";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v3;
    v8 = *(unsigned __int8 *)v1++;
    --v3;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
IsVehicleClassname
==============
*/
__int64 IsVehicleClassname(const char *classname)
{
  const char *v1; 
  __int64 v2; 
  int v4; 
  signed __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  v1 = "script_veh";
  v2 = 10i64;
  v4 = 1;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = classname - "script_veh";
  while ( 1 )
  {
    v6 = (unsigned __int8)v1[v5];
    v7 = v2;
    v8 = *(unsigned __int8 *)v1++;
    --v2;
    v9 = 0;
    if ( !v7 )
    {
LABEL_13:
      v4 = 0;
      goto LABEL_14;
    }
    if ( v6 != v8 )
    {
      v10 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v10 = v6;
      v6 = v10;
      v11 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v11 = v8;
      if ( v6 != v11 )
        break;
    }
    if ( !v6 )
      goto LABEL_13;
  }
  if ( v6 < v11 )
    v4 = -1;
LABEL_14:
  LOBYTE(v9) = v4 == 0;
  return v9;
}

/*
==============
LittleFloatRead_Util
==============
*/

double __fastcall LittleFloatRead_Util(int l)
{
  double result; 

  *(float *)&result = LittleFloatRead(l);
  return result;
}

/*
==============
LittleFloatWrite_Util
==============
*/

int __fastcall LittleFloatWrite_Util(float l)
{
  return LittleFloatWrite(l);
}

/*
==============
LittleLong64
==============
*/

unsigned __int64 __fastcall LittleLong64(unsigned __int64 l)
{
  return _LittleLong64(l);
}

/*
==============
Long64NoSwap
==============
*/
unsigned __int64 Long64NoSwap(unsigned __int64 ll)
{
  return ll;
}

/*
==============
Long64Swap
==============
*/
unsigned __int64 Long64Swap(unsigned __int64 l)
{
  return HIBYTE(l) + ((BYTE6(l) + ((((BYTE4(l) + ((BYTE3(l) + ((BYTE2(l) + ((((unsigned __int64)(unsigned __int8)l << 8) + BYTE1(l)) << 8)) << 8)) << 8)) << 8) + BYTE5(l)) << 8)) << 8);
}

/*
==============
LongNoSwap
==============
*/
__int64 LongNoSwap(int l)
{
  return (unsigned int)l;
}

/*
==============
LongSwap
==============
*/
__int64 LongSwap(int l)
{
  return HIBYTE(l) + ((BYTE2(l) + ((BYTE1(l) + ((unsigned __int8)l << 8)) << 8)) << 8);
}

/*
==============
ParseGdtBinToStruct
==============
*/
__int64 ParseGdtBinToStruct(unsigned __int8 *pStruct, gdtField_t *pFieldList, int iNumFields, const void *gdtData, const int iMaxFieldTypes, int (*parseSpecialFieldType)(unsigned __int8 *, unsigned __int8 *, gdtField_t *), void (*parseStrcpy)(unsigned __int8 *, const char *))
{
  int v7; 
  int (__fastcall *v12)(unsigned __int8 *, unsigned __int8 *, gdtField_t *); 
  int *p_iFieldType; 
  int v14; 
  bool error; 

  v7 = 0;
  error = 0;
  if ( iNumFields > 0 )
  {
    v12 = parseSpecialFieldType;
    p_iFieldType = &pFieldList->iFieldType;
    v14 = iMaxFieldTypes;
    do
    {
      if ( *p_iFieldType >= 36 )
      {
        if ( v14 <= 0 || *p_iFieldType >= v14 )
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144187800);
        }
        else
        {
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1819, ASSERT_TYPE_ASSERT, "(parseSpecialFieldType != 0)", (const char *)&queryFormat, "parseSpecialFieldType != NULL") )
            __debugbreak();
          if ( !v12(pStruct, (unsigned __int8 *)gdtData, &pFieldList[v7]) )
            return 0i64;
        }
      }
      else
      {
        UpdateStandardFieldValue(pStruct, (const unsigned __int8 *)gdtData, &pFieldList[v7], &error, parseStrcpy);
        if ( error )
          return 0i64;
      }
      ++v7;
      p_iFieldType += 6;
    }
    while ( v7 < iNumFields );
  }
  return 1i64;
}

/*
==============
ShortNoSwap
==============
*/
__int64 ShortNoSwap(__int16 l)
{
  return (unsigned __int16)l;
}

/*
==============
ShortSwap
==============
*/
__int16 ShortSwap(__int16 l)
{
  return ((unsigned __int8)l << 8) + HIBYTE(l);
}

/*
==============
Swap_Init
==============
*/
void Swap_Init(void)
{
  BigShort = ShortSwap;
  BigUShort = UShortSwap;
  BigLong = LongSwap;
  LittleLong64 = Long64NoSwap;
  BigLong64 = Long64Swap;
  LittleFloatRead = (float (__fastcall *)(int))FloatReadNoSwap;
  LittleFloatWrite = FloatWriteNoSwap;
}

/*
==============
Swap_InitBigEndian
==============
*/
void Swap_InitBigEndian(void)
{
  BigShort = ShortNoSwap;
  BigUShort = UShortNoSwap;
  BigLong = LongNoSwap;
  LittleLong64 = Long64Swap;
  BigLong64 = Long64NoSwap;
  LittleFloatRead = (float (__fastcall *)(int))FloatReadSwap;
  LittleFloatWrite = FloatWriteSwap;
}

/*
==============
Swap_InitLittleEndian
==============
*/
void Swap_InitLittleEndian(void)
{
  BigShort = ShortSwap;
  BigUShort = UShortSwap;
  BigLong = LongSwap;
  LittleLong64 = Long64NoSwap;
  BigLong64 = Long64Swap;
  LittleFloatRead = (float (__fastcall *)(int))FloatReadNoSwap;
  LittleFloatWrite = FloatWriteNoSwap;
}

/*
==============
UShortNoSwap
==============
*/
__int64 UShortNoSwap(unsigned __int16 l)
{
  return l;
}

/*
==============
UShortSwap
==============
*/
unsigned __int16 UShortSwap(unsigned __int16 l)
{
  return HIBYTE(l) + ((unsigned __int8)l << 8);
}

/*
==============
UnGetLeanFraction
==============
*/
float UnGetLeanFraction(const float fFrac)
{
  if ( fFrac < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1867, ASSERT_TYPE_ASSERT, "(fFrac >= 0)", (const char *)&queryFormat, "fFrac >= 0") )
    __debugbreak();
  if ( fFrac > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1868, ASSERT_TYPE_ASSERT, "(fFrac <= 1.f)", (const char *)&queryFormat, "fFrac <= 1.f") )
    __debugbreak();
  return 1.0 - fsqrt(1.0 - fFrac);
}

/*
==============
UpdateStandardFieldValue
==============
*/
void UpdateStandardFieldValue(unsigned __int8 *pStruct, const unsigned __int8 *gdtData, const gdtField_t *pField, bool *error, void (*parseStrcpy)(unsigned __int8 *, const char *))
{
  __int64 gdtOffset; 
  int iFieldType; 
  const char *v10; 
  unsigned __int8 *v11; 
  __int64 iOffset; 
  XModel *v13; 
  __int64 v14; 
  char v15; 
  int v16; 
  char v17; 
  float v18; 
  double v19; 
  bool v20; 
  char dest[64]; 

  gdtOffset = pField->gdtOffset;
  iFieldType = pField->iFieldType;
  v10 = *(const char **)&gdtData[gdtOffset];
  switch ( iFieldType )
  {
    case 0:
      if ( v10 )
        parseStrcpy(&pStruct[pField->iOffset], *(const char **)&gdtData[gdtOffset]);
      break;
    case 1:
      if ( v10 )
        Core_strcpy_and_fill_zero((char *)&pStruct[pField->iOffset], 0x400ui64, *(const char **)&gdtData[gdtOffset]);
      break;
    case 2:
      if ( v10 )
        Core_strcpy_and_fill_zero((char *)&pStruct[pField->iOffset], 0x40ui64, *(const char **)&gdtData[gdtOffset]);
      break;
    case 3:
      if ( v10 )
        Core_strcpy_and_fill_zero((char *)&pStruct[pField->iOffset], 0x100ui64, *(const char **)&gdtData[gdtOffset]);
      break;
    case 4:
      *(_DWORD *)&pStruct[pField->iOffset] = (_DWORD)v10;
      break;
    case 5:
      *(_DWORD *)&pStruct[pField->iOffset] = (_BYTE)v10 != 0;
      break;
    case 6:
      pStruct[pField->iOffset] = (unsigned __int8)v10;
      break;
    case 7:
      *(_DWORD *)&pStruct[pField->iOffset] = (_DWORD)v10;
      break;
    case 8:
      if ( v10 )
      {
        v11 = &pStruct[pField->iOffset];
        *(_DWORD *)v11 = 0;
        *((_DWORD *)v11 + 1) = 0;
        *((_DWORD *)v11 + 2) = 0;
        *((_DWORD *)v11 + 3) = 0;
        if ( j_sscanf(v10, "%f %f %f %f", v11, v11 + 4, v11 + 8, v11 + 12) != 4 )
          Com_PrintError(1, "Expected 4 floats instead of '%s'\n", v10);
      }
      break;
    case 9:
      *(float *)&pStruct[pField->iOffset] = *(float *)&gdtData[gdtOffset] * 17.6;
      break;
    case 10:
      *(_DWORD *)&pStruct[pField->iOffset] = (int)(float)(*(float *)&gdtData[gdtOffset] * 1000.0);
      break;
    case 11:
      if ( v10 )
        *(_DWORD *)&pStruct[pField->iOffset] = SL_GetLowercaseString(v10, 0);
      break;
    case 12:
      if ( v10 )
      {
        iOffset = pField->iOffset;
        *(_QWORD *)&pStruct[iOffset] = ParticleSystem_Register(*(const char **)&gdtData[gdtOffset]);
      }
      break;
    case 13:
      if ( v10 )
      {
        v13 = R_RegisterModel(*(const char **)&gdtData[gdtOffset]);
        *(_QWORD *)&pStruct[pField->iOffset] = v13;
        if ( !v13 )
          *error = 1;
      }
      break;
    case 15:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = Image_Register(v10, IMAGE_TRACK_MISC);
      break;
    case 16:
      if ( v10 )
      {
        v14 = pField->iOffset;
        *(_QWORD *)&pStruct[v14] = Material_RegisterHandle(v10, IMAGE_TRACK_MISC);
      }
      break;
    case 17:
      if ( v10 )
        pStruct[pField->iOffset] = 1;
      break;
    case 18:
      if ( v10 )
        *(SndAliasLookup *)&pStruct[pField->iOffset] = SND_FindAliasLookup(*(const char **)&gdtData[gdtOffset]);
      break;
    case 19:
      if ( v10 )
      {
        v15 = *v10;
        if ( *v10 )
        {
          v16 = 5381;
          do
          {
            ++v10;
            v17 = v15 | 0x20;
            if ( (unsigned int)(v15 - 65) >= 0x1A )
              v17 = v15;
            v16 = 65599 * v16 + v17;
            v15 = *v10;
          }
          while ( *v10 );
          if ( !v16 )
            v16 = 1;
          *(_DWORD *)&pStruct[pField->iOffset] = v16;
        }
        else
        {
          *(_DWORD *)&pStruct[pField->iOffset] = 0;
        }
      }
      break;
    case 20:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = Tracer_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 21:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = Laser_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 22:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = Suit_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 23:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = Gesture_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 24:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = RumbleInfo_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 25:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = WeaponAnimPackage_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 26:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = WeaponSFXPackage_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 27:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = WeaponVFXPackage_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 28:
      v18 = powf_0(10.0, *(float *)&gdtData[gdtOffset] * 0.050000001);
      v19 = I_fclamp(v18, 0.0, 256.0);
      *(float *)&pStruct[pField->iOffset] = *(float *)&v19;
      break;
    case 29:
      *(float *)&pStruct[pField->iOffset] = (float)(int)v10;
      break;
    case 30:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = CinematicMotion_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 31:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = XCam_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 32:
      if ( v10 )
      {
        Com_sprintf(dest, 0x40ui64, "vision/%s.vision", *(const char **)&gdtData[gdtOffset]);
        parseStrcpy(&pStruct[pField->iOffset], dest);
      }
      break;
    case 33:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = Camera_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    case 34:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = BG_RegisterAttachment(*(const char **)&gdtData[gdtOffset]);
      break;
    case 35:
      if ( v10 )
        *(_QWORD *)&pStruct[pField->iOffset] = FootstepVFX_Register(*(const char **)&gdtData[gdtOffset]);
      break;
    default:
      if ( iFieldType >= 0 )
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1785, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "UpdateStandardFieldValue is out of sync with the csParseFieldType_t enum list\n");
      else
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.cpp", 1783, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Negative field type %i given to UpdateStandardFieldValue\n", pField->iFieldType);
      if ( v20 )
        __debugbreak();
      break;
  }
}

/*
==============
vtos
==============
*/
char *vtos(const vec3_t *v)
{
  return j_va("(%i %i %i)", (unsigned int)(int)v->v[0], (unsigned int)(int)v->v[1], (unsigned int)(int)v->v[2]);
}

/*
==============
va
==============
*/
char *va(const char *format, ...)
{
  int *Value; 
  __int64 v2; 
  char *v3; 
  va_list ap; 

  va_start(ap, format);
  Value = (int *)Sys_GetValue(1);
  v2 = Value[1024];
  Value[1024] = ((int)v2 + 1) % 2;
  v3 = (char *)&Value[512 * v2];
  Com_vsprintf(v3, 0x800ui64, format, ap);
  return v3;
}

