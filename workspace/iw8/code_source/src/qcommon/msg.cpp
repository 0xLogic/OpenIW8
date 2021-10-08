/*
==============
MSG_ReadRiceGolomb
==============
*/

unsigned int __fastcall MSG_ReadRiceGolomb(msg_t *msg, int mbits)
{
  return ?MSG_ReadRiceGolomb@@YAIPEAUmsg_t@@H@Z(msg, mbits);
}

/*
==============
GetMinBitCountForNum
==============
*/

int __fastcall GetMinBitCountForNum(const unsigned int num)
{
  return ?GetMinBitCountForNum@@YAHI@Z(num);
}

/*
==============
MSG_ReadShort
==============
*/

int __fastcall MSG_ReadShort(msg_t *const msg)
{
  return ?MSG_ReadShort@@YAHQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_ReadSignedExpGolomb0
==============
*/

int __fastcall MSG_ReadSignedExpGolomb0(msg_t *msg)
{
  return ?MSG_ReadSignedExpGolomb0@@YAHPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_CopyBits
==============
*/

void __fastcall MSG_CopyBits(msg_t *const destMsg, msg_t *const srcMsg, unsigned int bitCount)
{
  ?MSG_CopyBits@@YAXQEAUmsg_t@@0I@Z(destMsg, srcMsg, bitCount);
}

/*
==============
MSG_ReadDeltaPrimaryWeapon
==============
*/

void __fastcall MSG_ReadDeltaPrimaryWeapon(msg_t *msg, const Weapon *from, const bool fromIsAlternate, Weapon *outWeapon, bool *outIsAlternate)
{
  ?MSG_ReadDeltaPrimaryWeapon@@YAXPEAUmsg_t@@AEBUWeapon@@_NPEAU2@PEA_N@Z(msg, from, fromIsAlternate, outWeapon, outIsAlternate);
}

/*
==============
MSG_ReadSignedNonZeroExpGolomb
==============
*/

int __fastcall MSG_ReadSignedNonZeroExpGolomb(msg_t *msg, int kbits)
{
  return ?MSG_ReadSignedNonZeroExpGolomb@@YAHPEAUmsg_t@@H@Z(msg, kbits);
}

/*
==============
MSG_WriteRiceGolomb
==============
*/

void __fastcall MSG_WriteRiceGolomb(msg_t *sb, unsigned int value, int mbits)
{
  ?MSG_WriteRiceGolomb@@YAXPEAUmsg_t@@IH@Z(sb, value, mbits);
}

/*
==============
MSG_ReadInt64
==============
*/

unsigned __int64 __fastcall MSG_ReadInt64(msg_t *const msg)
{
  return ?MSG_ReadInt64@@YA_KQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_WriteSignedExpGolomb
==============
*/

void __fastcall MSG_WriteSignedExpGolomb(msg_t *sb, int value, int kbits)
{
  ?MSG_WriteSignedExpGolomb@@YAXPEAUmsg_t@@HH@Z(sb, value, kbits);
}

/*
==============
MSG_ReadString
==============
*/

char *__fastcall MSG_ReadString(msg_t *msg, char *string, unsigned int maxChars)
{
  return ?MSG_ReadString@@YAPEADPEAUmsg_t@@PEADI@Z(msg, string, maxChars);
}

/*
==============
MSG_ReadExpGolomb0
==============
*/

unsigned int __fastcall MSG_ReadExpGolomb0(msg_t *msg)
{
  return ?MSG_ReadExpGolomb0@@YAIPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_InitReadOnlySplit
==============
*/

void __fastcall MSG_InitReadOnlySplit(msg_t *buf, unsigned __int8 *data, int length, unsigned __int8 *data2, int length2)
{
  ?MSG_InitReadOnlySplit@@YAXPEAUmsg_t@@PEAEH1H@Z(buf, data, length, data2, length2);
}

/*
==============
MSG_ReadData_Decompress
==============
*/

int __fastcall MSG_ReadData_Decompress(msg_t *const msg, void *buffer, int bufferSize, void *tempBuffer, int tempBufferSize)
{
  return ?MSG_ReadData_Decompress@@YAHQEAUmsg_t@@PEIAXH1H@Z(msg, buffer, bufferSize, tempBuffer, tempBufferSize);
}

/*
==============
MSG_WriteFloat
==============
*/

void __fastcall MSG_WriteFloat(msg_t *sb, float f)
{
  ?MSG_WriteFloat@@YAXPEAUmsg_t@@M@Z(sb, f);
}

/*
==============
MSG_RollbackWrite
==============
*/

void __fastcall MSG_RollbackWrite(msg_t *msg, const MSG_Mark *mark)
{
  ?MSG_RollbackWrite@@YAXPEAUmsg_t@@AEBUMSG_Mark@@@Z(msg, mark);
}

/*
==============
MSG_WriteAngle
==============
*/

void __fastcall MSG_WriteAngle(msg_t *sb, float f)
{
  ?MSG_WriteAngle@@YAXPEAUmsg_t@@M@Z(sb, f);
}

/*
==============
MSG_ReadExpGolomb
==============
*/

unsigned int __fastcall MSG_ReadExpGolomb(msg_t *msg, int kbits)
{
  return ?MSG_ReadExpGolomb@@YAIPEAUmsg_t@@H@Z(msg, kbits);
}

/*
==============
MSG_ReadByte
==============
*/

int __fastcall MSG_ReadByte(msg_t *const msg)
{
  return ?MSG_ReadByte@@YAHQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_SetUsingHighPrecisionPlayerOrigin
==============
*/

void __fastcall MSG_SetUsingHighPrecisionPlayerOrigin(bool enabled)
{
  ?MSG_SetUsingHighPrecisionPlayerOrigin@@YAX_N@Z(enabled);
}

/*
==============
MSG_ReadDeltaWeapon
==============
*/

Weapon *__fastcall MSG_ReadDeltaWeapon(Weapon *result, msg_t *msg, const Weapon *from)
{
  return ?MSG_ReadDeltaWeapon@@YA?AUWeapon@@PEAUmsg_t@@AEBU1@@Z(result, msg, from);
}

/*
==============
MSG_CountExpGolombBits
==============
*/

int __fastcall MSG_CountExpGolombBits(unsigned int c, int kbits)
{
  return ?MSG_CountExpGolombBits@@YAHIH@Z(c, kbits);
}

/*
==============
MSG_ReadData
==============
*/

void __fastcall MSG_ReadData(msg_t *msg, int readLen, void *buffer, int bufferSize)
{
  ?MSG_ReadData@@YAXPEAUmsg_t@@HPEAXH@Z(msg, readLen, buffer, bufferSize);
}

/*
==============
MSG_ReadBit
==============
*/

int __fastcall MSG_ReadBit(msg_t *const msg)
{
  return ?MSG_ReadBit@@YAHQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_Rewind
==============
*/

int __fastcall MSG_Rewind(msg_t *msg, int len)
{
  return ?MSG_Rewind@@YAHPEAUmsg_t@@H@Z(msg, len);
}

/*
==============
MSG_ReadBits
==============
*/

__int64 __fastcall MSG_ReadBits(msg_t *const msg, unsigned int width)
{
  return ?MSG_ReadBits@@YA_JQEAUmsg_t@@I@Z(msg, width);
}

/*
==============
MSG_WriteDeltaWeapon
==============
*/

void __fastcall MSG_WriteDeltaWeapon(msg_t *msg, const Weapon *from, const Weapon *to)
{
  ?MSG_WriteDeltaWeapon@@YAXPEAUmsg_t@@AEBUWeapon@@1@Z(msg, from, to);
}

/*
==============
MSG_WriteShort
==============
*/

void __fastcall MSG_WriteShort(msg_t *const msg, const int value)
{
  ?MSG_WriteShort@@YAXQEAUmsg_t@@H@Z(msg, value);
}

/*
==============
MSG_WriteLong
==============
*/

void __fastcall MSG_WriteLong(msg_t *const msg, const int value)
{
  ?MSG_WriteLong@@YAXQEAUmsg_t@@H@Z(msg, value);
}

/*
==============
MSG_WouldWriteOverflow
==============
*/

bool __fastcall MSG_WouldWriteOverflow(msg_t *msg, const unsigned int bitCount)
{
  return ?MSG_WouldWriteOverflow@@YA_NPEAUmsg_t@@I@Z(msg, bitCount);
}

/*
==============
MSG_ReadSignedNonZeroExpGolomb0
==============
*/

int __fastcall MSG_ReadSignedNonZeroExpGolomb0(msg_t *msg)
{
  return ?MSG_ReadSignedNonZeroExpGolomb0@@YAHPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_ReadAngle16
==============
*/

double __fastcall MSG_ReadAngle16(msg_t *msg)
{
  double result; 

  *(float *)&result = ?MSG_ReadAngle16@@YAMPEAUmsg_t@@@Z(msg);
  return result;
}

/*
==============
MSG_WriteSignedNonZeroExpGolomb0
==============
*/

void __fastcall MSG_WriteSignedNonZeroExpGolomb0(msg_t *sb, int value)
{
  ?MSG_WriteSignedNonZeroExpGolomb0@@YAXPEAUmsg_t@@H@Z(sb, value);
}

/*
==============
MSG_BeginReading
==============
*/

void __fastcall MSG_BeginReading(msg_t *msg)
{
  ?MSG_BeginReading@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_WriteBitsAtOffset
==============
*/

void __fastcall MSG_WriteBitsAtOffset(msg_t *const msg, const unsigned int bitOffset, const __int64 value, const unsigned int bitCount)
{
  ?MSG_WriteBitsAtOffset@@YAXQEAUmsg_t@@I_JI@Z(msg, bitOffset, value, bitCount);
}

/*
==============
MSG_ReadRangedFloatBits
==============
*/

double __fastcall MSG_ReadRangedFloatBits(msg_t *sb, float begin, float end, int bits)
{
  double result; 

  *(float *)&result = ?MSG_ReadRangedFloatBits@@YAMPEAUmsg_t@@MMH@Z(sb, begin, end, bits);
  return result;
}

/*
==============
MSG_UsingHighPrecisionPlayerOrigin
==============
*/

bool __fastcall MSG_UsingHighPrecisionPlayerOrigin()
{
  return ?MSG_UsingHighPrecisionPlayerOrigin@@YA_NXZ();
}

/*
==============
MSG_ReadSignedExpGolomb
==============
*/

int __fastcall MSG_ReadSignedExpGolomb(msg_t *msg, int kbits)
{
  return ?MSG_ReadSignedExpGolomb@@YAHPEAUmsg_t@@H@Z(msg, kbits);
}

/*
==============
MSG_Init
==============
*/

void __fastcall MSG_Init(msg_t *buf, unsigned __int8 *data, int length)
{
  ?MSG_Init@@YAXPEAUmsg_t@@PEAEH@Z(buf, data, length);
}

/*
==============
MSG_WriteVec3
==============
*/

void __fastcall MSG_WriteVec3(msg_t *sb, const vec3_t *v)
{
  ?MSG_WriteVec3@@YAXPEAUmsg_t@@AEBTvec3_t@@@Z(sb, v);
}

/*
==============
MSG_DiscardBits
==============
*/

void __fastcall MSG_DiscardBits(msg_t *const msg, const unsigned int bitCount)
{
  ?MSG_DiscardBits@@YAXQEAUmsg_t@@I@Z(msg, bitCount);
}

/*
==============
MSG_PackAndQuantizePolarToShort
==============
*/

unsigned __int16 __fastcall MSG_PackAndQuantizePolarToShort(float *inOutAnglesInDegrees, float *inOutRadius)
{
  return ?MSG_PackAndQuantizePolarToShort@@YAGPEAM0@Z(inOutAnglesInDegrees, inOutRadius);
}

/*
==============
MSG_WriteBit1
==============
*/

void __fastcall MSG_WriteBit1(msg_t *const msg)
{
  ?MSG_WriteBit1@@YAXQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_UnpackPolarFromShort
==============
*/

void __fastcall MSG_UnpackPolarFromShort(const unsigned __int16 compressedPolarCoord, float *outAnglesInDegrees, float *outRadius)
{
  ?MSG_UnpackPolarFromShort@@YAXGPEAM0@Z(compressedPolarCoord, outAnglesInDegrees, outRadius);
}

/*
==============
MSG_ReadWeapon
==============
*/

Weapon *__fastcall MSG_ReadWeapon(Weapon *result, msg_t *msg)
{
  return ?MSG_ReadWeapon@@YA?AUWeapon@@PEAUmsg_t@@@Z(result, msg);
}

/*
==============
MSG_WriteString
==============
*/

void __fastcall MSG_WriteString(msg_t *const sb, const char *s)
{
  ?MSG_WriteString@@YAXQEAUmsg_t@@PEBD@Z(sb, s);
}

/*
==============
MSG_ReadStringLine
==============
*/

char *__fastcall MSG_ReadStringLine(msg_t *msg, char *string, unsigned int maxChars)
{
  return ?MSG_ReadStringLine@@YAPEADPEAUmsg_t@@PEADI@Z(msg, string, maxChars);
}

/*
==============
MSG_WriteSignedExpGolomb0
==============
*/

void __fastcall MSG_WriteSignedExpGolomb0(msg_t *sb, int value)
{
  ?MSG_WriteSignedExpGolomb0@@YAXPEAUmsg_t@@H@Z(sb, value);
}

/*
==============
MSG_WriteData
==============
*/

void __fastcall MSG_WriteData(msg_t *const msg, const void *data, int length)
{
  ?MSG_WriteData@@YAXQEAUmsg_t@@PEBXH@Z(msg, data, length);
}

/*
==============
MSG_WriteByte
==============
*/

void __fastcall MSG_WriteByte(msg_t *const msg, const __int64 value)
{
  ?MSG_WriteByte@@YAXQEAUmsg_t@@_J@Z(msg, value);
}

/*
==============
MSG_WriteExpGolomb0
==============
*/

void __fastcall MSG_WriteExpGolomb0(msg_t *sb, unsigned int value)
{
  ?MSG_WriteExpGolomb0@@YAXPEAUmsg_t@@I@Z(sb, value);
}

/*
==============
MSG_PackPolarToShort
==============
*/

unsigned __int16 __fastcall MSG_PackPolarToShort(const float anglesInDegrees, const float radius)
{
  return ?MSG_PackPolarToShort@@YAGMM@Z(anglesInDegrees, radius);
}

/*
==============
MSG_WriteWeapon
==============
*/

void __fastcall MSG_WriteWeapon(msg_t *msg, const Weapon *weapon)
{
  ?MSG_WriteWeapon@@YAXPEAUmsg_t@@AEBUWeapon@@@Z(msg, weapon);
}

/*
==============
MSG_ReadBigString
==============
*/

char *__fastcall MSG_ReadBigString(msg_t *msg)
{
  return ?MSG_ReadBigString@@YAPEADPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_WriteBool
==============
*/

void __fastcall MSG_WriteBool(msg_t *const msg, bool b)
{
  ?MSG_WriteBool@@YAXQEAUmsg_t@@_N@Z(msg, b);
}

/*
==============
MSG_WriteBit0
==============
*/

void __fastcall MSG_WriteBit0(msg_t *const msg)
{
  ?MSG_WriteBit0@@YAXQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_WriteBits
==============
*/

void __fastcall MSG_WriteBits(msg_t *const msg, const __int64 value, const unsigned int width)
{
  ?MSG_WriteBits@@YAXQEAUmsg_t@@_JI@Z(msg, value, width);
}

/*
==============
MSG_Truncate
==============
*/

void __fastcall MSG_Truncate(msg_t *msg)
{
  ?MSG_Truncate@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_ReadUnsignedShort
==============
*/

int __fastcall MSG_ReadUnsignedShort(msg_t *const msg)
{
  return ?MSG_ReadUnsignedShort@@YAHQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_GetOriginExtraPrecisionBitsForField
==============
*/

unsigned int __fastcall MSG_GetOriginExtraPrecisionBitsForField(int bits)
{
  return ?MSG_GetOriginExtraPrecisionBitsForField@@YAIH@Z(bits);
}

/*
==============
MSG_ReadVec3
==============
*/

void __fastcall MSG_ReadVec3(msg_t *msg, vec3_t *v)
{
  ?MSG_ReadVec3@@YAXPEAUmsg_t@@AEATvec3_t@@@Z(msg, v);
}

/*
==============
MSG_CountSignedExpGolombBits
==============
*/

int __fastcall MSG_CountSignedExpGolombBits(int c, int kbits)
{
  return ?MSG_CountSignedExpGolombBits@@YAHHH@Z(c, kbits);
}

/*
==============
MSG_InitReadOnly
==============
*/

void __fastcall MSG_InitReadOnly(msg_t *buf, unsigned __int8 *data, int length)
{
  ?MSG_InitReadOnly@@YAXPEAUmsg_t@@PEAEH@Z(buf, data, length);
}

/*
==============
MSG_WriteExpGolomb
==============
*/

void __fastcall MSG_WriteExpGolomb(msg_t *sb, unsigned int value, int kbits)
{
  ?MSG_WriteExpGolomb@@YAXPEAUmsg_t@@IH@Z(sb, value, kbits);
}

/*
==============
MSG_ReadLong
==============
*/

int __fastcall MSG_ReadLong(msg_t *const msg)
{
  return ?MSG_ReadLong@@YAHQEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_PackUnsignedFloat
==============
*/

int __fastcall MSG_PackUnsignedFloat(float value, float maxAbsValueSize, unsigned int bitCount)
{
  return ?MSG_PackUnsignedFloat@@YAHMMI@Z(value, maxAbsValueSize, bitCount);
}

/*
==============
MSG_MarkWrite
==============
*/

MSG_Mark *__fastcall MSG_MarkWrite(MSG_Mark *result, msg_t *msg)
{
  return ?MSG_MarkWrite@@YA?AUMSG_Mark@@PEAUmsg_t@@@Z(result, msg);
}

/*
==============
MSG_PackSignedFloat
==============
*/

int __fastcall MSG_PackSignedFloat(float value, float maxAbsValueSize, unsigned int bitCount)
{
  return ?MSG_PackSignedFloat@@YAHMMI@Z(value, maxAbsValueSize, bitCount);
}

/*
==============
MSG_WriteDeltaPrimaryWeapon
==============
*/

void __fastcall MSG_WriteDeltaPrimaryWeapon(msg_t *msg, const Weapon *from, const bool fromIsAlternate, const Weapon *to, const bool toIsAlternate)
{
  ?MSG_WriteDeltaPrimaryWeapon@@YAXPEAUmsg_t@@AEBUWeapon@@_N12@Z(msg, from, fromIsAlternate, to, toIsAlternate);
}

/*
==============
MSG_ReadFloat
==============
*/

double __fastcall MSG_ReadFloat(msg_t *msg)
{
  double result; 

  *(float *)&result = ?MSG_ReadFloat@@YAMPEAUmsg_t@@@Z(msg);
  return result;
}

/*
==============
MSG_GetEventParamBits
==============
*/

int __fastcall MSG_GetEventParamBits(const int eventType)
{
  return ?MSG_GetEventParamBits@@YAHH@Z(eventType);
}

/*
==============
MSG_WriteInt64
==============
*/

void __fastcall MSG_WriteInt64(msg_t *const msg, const unsigned __int64 value)
{
  ?MSG_WriteInt64@@YAXQEAUmsg_t@@_K@Z(msg, value);
}

/*
==============
MSG_GetUsedBitCount
==============
*/

int __fastcall MSG_GetUsedBitCount(const msg_t *msg)
{
  return ?MSG_GetUsedBitCount@@YAHPEBUmsg_t@@@Z(msg);
}

/*
==============
MSG_UnpackUnsignedFloat
==============
*/

double __fastcall MSG_UnpackUnsignedFloat(int value, float maxAbsValueSize, unsigned int bitCount)
{
  double result; 

  *(float *)&result = ?MSG_UnpackUnsignedFloat@@YAMHMI@Z(value, maxAbsValueSize, bitCount);
  return result;
}

/*
==============
MSG_WriteRangedFloatBits
==============
*/

void __fastcall MSG_WriteRangedFloatBits(msg_t *sb, float f, float begin, float end, int bits)
{
  ?MSG_WriteRangedFloatBits@@YAXPEAUmsg_t@@MMMH@Z(sb, f, begin, end, bits);
}

/*
==============
MSG_SetNextRead
==============
*/

void __fastcall MSG_SetNextRead(msg_t *msg, int byteOffset)
{
  ?MSG_SetNextRead@@YAXPEAUmsg_t@@H@Z(msg, byteOffset);
}

/*
==============
MSG_WriteBigString
==============
*/

void __fastcall MSG_WriteBigString(msg_t *msg, const char *s)
{
  ?MSG_WriteBigString@@YAXPEAUmsg_t@@PEBD@Z(msg, s);
}

/*
==============
MSG_PeekByte
==============
*/

int __fastcall MSG_PeekByte(msg_t *msg)
{
  return ?MSG_PeekByte@@YAHPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_WriteData_Compress
==============
*/

void __fastcall MSG_WriteData_Compress(msg_t *const msg, const void *data, int length)
{
  ?MSG_WriteData_Compress@@YAXQEAUmsg_t@@PEIBXH@Z(msg, data, length);
}

/*
==============
MSG_Discard
==============
*/

void __fastcall MSG_Discard(msg_t *msg)
{
  ?MSG_Discard@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
MSG_UnpackSignedFloat
==============
*/

double __fastcall MSG_UnpackSignedFloat(int value, float maxAbsValueSize, unsigned int bitCount)
{
  double result; 

  *(float *)&result = ?MSG_UnpackSignedFloat@@YAMHMI@Z(value, maxAbsValueSize, bitCount);
  return result;
}

/*
==============
MSG_WriteSignedNonZeroExpGolomb
==============
*/

void __fastcall MSG_WriteSignedNonZeroExpGolomb(msg_t *sb, int value, int kbits)
{
  ?MSG_WriteSignedNonZeroExpGolomb@@YAXPEAUmsg_t@@HH@Z(sb, value, kbits);
}

/*
==============
MSG_WriteAngle16
==============
*/

void __fastcall MSG_WriteAngle16(msg_t *sb, float f)
{
  ?MSG_WriteAngle16@@YAXPEAUmsg_t@@M@Z(sb, f);
}

/*
==============
MSG_RestartWriting
==============
*/

void __fastcall MSG_RestartWriting(msg_t *msg)
{
  ?MSG_RestartWriting@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
GetMinBitCountForNum
==============
*/
__int64 GetMinBitCountForNum(const unsigned int num)
{
  return 32 - __lzcnt(num);
}

/*
==============
MSG_BeginReading
==============
*/
void MSG_BeginReading(msg_t *msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 120, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  msg->overflowed = 0;
  *(_QWORD *)&msg->readcount = 0i64;
  msg->compressionFlags = 0;
}

/*
==============
MSG_CopyBits
==============
*/
void MSG_CopyBits(msg_t *const destMsg, msg_t *const srcMsg, unsigned int bitCount)
{
  int bit; 
  int v7; 
  int maxsize; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 value; 

  if ( !destMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 461, ASSERT_TYPE_ASSERT, "(destMsg != nullptr)", (const char *)&queryFormat, "destMsg != nullptr") )
    __debugbreak();
  if ( !srcMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 462, ASSERT_TYPE_ASSERT, "(srcMsg != nullptr)", (const char *)&queryFormat, "srcMsg != nullptr") )
    __debugbreak();
  bit = srcMsg->bit;
  if ( (int)(bit + bitCount) > 8 * (srcMsg->cursize + srcMsg->splitSize) )
  {
    srcMsg->overflowed = 1;
LABEL_10:
    Com_PrintError(16, "Source message does not have enough bits to copy: %d < %d\n", (unsigned int)(8 * srcMsg->maxsize - bit), bitCount);
    return;
  }
  if ( srcMsg->overflowed )
    goto LABEL_10;
  v7 = destMsg->bit;
  maxsize = destMsg->maxsize;
  if ( (int)(v7 + bitCount) > 8 * maxsize )
  {
    destMsg->overflowed = 1;
LABEL_14:
    Com_PrintError(16, "Destination message does not have enough bits to copy: %d < %d\n", (unsigned int)(8 * maxsize - v7), bitCount);
    return;
  }
  if ( destMsg->overflowed )
    goto LABEL_14;
  for ( ; bitCount; bitCount -= v9 )
  {
    v9 = 32;
    if ( bitCount < 0x20 )
      v9 = bitCount;
    if ( v9 + srcMsg->bit > 8 * srcMsg->maxsize )
    {
      LODWORD(v11) = 8 * srcMsg->maxsize;
      LODWORD(v10) = v9 + srcMsg->bit;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 480, ASSERT_TYPE_ASSERT, "( (srcMsg->bit + copyBitCount) ) <= ( static_cast<uint32_t>(srcMsg->maxsize << 3) )", "%s <= %s\n\t%u, %u", "(srcMsg->bit + copyBitCount)", "static_cast<uint32_t>(srcMsg->maxsize << 3)", v10, v11) )
        __debugbreak();
    }
    MSG_ReadBitsInternal(srcMsg, v9, &value);
    if ( v9 + destMsg->bit > 8 * destMsg->maxsize )
    {
      LODWORD(v11) = 8 * destMsg->maxsize;
      LODWORD(v10) = v9 + destMsg->bit;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 483, ASSERT_TYPE_ASSERT, "( (destMsg->bit + copyBitCount) ) <= ( static_cast<uint32_t>(destMsg->maxsize << 3) )", "%s <= %s\n\t%u, %u", "(destMsg->bit + copyBitCount)", "static_cast<uint32_t>(destMsg->maxsize << 3)", v10, v11) )
        __debugbreak();
    }
    MSG_WriteBitsInternal(destMsg, v9, value);
  }
}

/*
==============
MSG_CountExpGolombBits
==============
*/
__int64 MSG_CountExpGolombBits(unsigned int c, int kbits)
{
  return (unsigned int)(kbits + 2 * Q_log2((c >> kbits) + 1) + 1);
}

/*
==============
MSG_CountSignedExpGolombBits
==============
*/
__int64 MSG_CountSignedExpGolombBits(int c, int kbits)
{
  return (unsigned int)(kbits + 2 * Q_log2((abs32(c) >> kbits) + 1) + 2);
}

/*
==============
MSG_Discard
==============
*/
void MSG_Discard(msg_t *msg)
{
  msg->cursize = msg->readcount;
  msg->overflowed = 1;
  msg->splitSize = 0;
}

/*
==============
MSG_DiscardBits
==============
*/
void MSG_DiscardBits(msg_t *const msg, const unsigned int bitCount)
{
  int v4; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 514, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  v4 = bitCount + msg->bit;
  if ( v4 <= 8 * (msg->cursize + msg->splitSize) )
  {
    if ( !msg->overflowed )
    {
      msg->bit = v4;
      msg->readcount = (v4 + 7) >> 3;
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_GetEventParamBits
==============
*/
__int64 MSG_GetEventParamBits(const int eventType)
{
  __int64 v1; 
  signed int m_clientFireEventParamBits; 
  unsigned int EffectBits; 
  __int64 v6; 
  int v7; 

  v1 = eventType;
  if ( (unsigned int)eventType >= 0xE3 )
  {
    v7 = 227;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2496, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( EV_MAX_EVENTS )", "eventType doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", eventType, v7) )
      __debugbreak();
  }
  m_clientFireEventParamBits = s_paramBits[v1];
  switch ( m_clientFireEventParamBits )
  {
    case -17:
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 235, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      m_clientFireEventParamBits = BgWeaponMap::ms_runtimeIndexBits;
      break;
    case -16:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 112, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      m_clientFireEventParamBits = BgDynamicLimits::ms_data.m_clientFireEventParamBits;
      break;
    case -15:
      if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 105, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
        __debugbreak();
      m_clientFireEventParamBits = BgDynamicLimits::ms_data.m_scriptableInstanceBits;
      break;
    case -13:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 101, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_gameData.m_characterBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 102, ASSERT_TYPE_ASSERT, "(ms_gameData.m_characterBits > 0)", (const char *)&queryFormat, "ms_gameData.m_characterBits > 0") )
        __debugbreak();
      m_clientFireEventParamBits = ComCharacterLimits::ms_gameData.m_characterBits;
      break;
    case -12:
      m_clientFireEventParamBits = ComCharacterLimits::GetClientBits();
      break;
    case -11:
      EffectBits = BgDynamicLimits::GetEffectBits();
      m_clientFireEventParamBits = EffectBits + ComCharacterLimits::GetClientBits() + 10;
      break;
    case -10:
      m_clientFireEventParamBits = BgDynamicLimits::GetEffectBits();
      break;
    default:
      break;
  }
  if ( m_clientFireEventParamBits < 0 )
  {
    LODWORD(v6) = m_clientFireEventParamBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2536, ASSERT_TYPE_ASSERT, "(parmBits >= 0)", "%s\n\tUnhandled special parmBits %i", "parmBits >= 0", v6) )
      __debugbreak();
  }
  return (unsigned int)m_clientFireEventParamBits;
}

/*
==============
MSG_GetOriginExtraPrecisionBitsForField
==============
*/
__int64 MSG_GetOriginExtraPrecisionBitsForField(int bits)
{
  __int64 result; 

  result = 3i64;
  if ( (unsigned int)(bits + 39) > 2 )
    return 0i64;
  return result;
}

/*
==============
MSG_GetUsedBitCount
==============
*/
__int64 MSG_GetUsedBitCount(const msg_t *msg)
{
  return (unsigned int)msg->bit;
}

/*
==============
MSG_Init
==============
*/
void MSG_Init(msg_t *buf, unsigned __int8 *data, int length)
{
  bool v6; 

  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 71, ASSERT_TYPE_ASSERT, "(buf != nullptr)", (const char *)&queryFormat, "buf != nullptr") )
    __debugbreak();
  if ( data )
  {
    if ( (unsigned int)length >= 8 )
      goto LABEL_11;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 74, ASSERT_TYPE_ASSERT, "((data == nullptr) || (length >= sizeof( int64_t )))", "%s\n\tTotal message buffer size must be equal to or greater than %llu  bytes", "(data == nullptr) || (length >= sizeof( int64_t ))", 8i64);
  }
  else
  {
    if ( !length )
      goto LABEL_11;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 72, ASSERT_TYPE_ASSERT, "((data != nullptr) || (length == 0))", (const char *)&queryFormat, "(data != nullptr) || (length == 0)");
  }
  if ( v6 )
    __debugbreak();
LABEL_11:
  *(_QWORD *)&buf->overflowed = 0i64;
  *(_QWORD *)&buf->cursize = 0i64;
  *(_QWORD *)&buf->readcount = 0i64;
  *(_QWORD *)&buf->lastEntityRef = 0i64;
  buf->compressionFlags = 0;
  buf->data = data;
  buf->maxsize = length;
  buf->splitData = NULL;
}

/*
==============
MSG_InitReadOnly
==============
*/
void MSG_InitReadOnly(msg_t *buf, unsigned __int8 *data, int length)
{
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 88, ASSERT_TYPE_ASSERT, "(buf != nullptr)", (const char *)&queryFormat, "buf != nullptr") )
    __debugbreak();
  if ( !data && length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 89, ASSERT_TYPE_ASSERT, "((data != nullptr) || (length == 0))", (const char *)&queryFormat, "(data != nullptr) || (length == 0)") )
    __debugbreak();
  buf->data = data;
  buf->splitData = NULL;
  buf->splitSize = 0;
  buf->compressionFlags = 0;
  buf->maxsize = length;
  buf->cursize = length;
  buf->readOnly = 1;
}

/*
==============
MSG_InitReadOnlySplit
==============
*/
void MSG_InitReadOnlySplit(msg_t *buf, unsigned __int8 *data, int length, unsigned __int8 *data2, int length2)
{
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 104, ASSERT_TYPE_ASSERT, "( buf != nullptr )", (const char *)&queryFormat, "buf != nullptr") )
    __debugbreak();
  if ( !data && length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 105, ASSERT_TYPE_ASSERT, "( (data != nullptr) || (length == 0) )", (const char *)&queryFormat, "(data != nullptr) || (length == 0)") )
    __debugbreak();
  if ( !data2 && length2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 106, ASSERT_TYPE_ASSERT, "( (data2 != nullptr) || (length2 == 0) )", (const char *)&queryFormat, "(data2 != nullptr) || (length2 == 0)") )
    __debugbreak();
  buf->data = data;
  buf->cursize = length;
  buf->maxsize = length + length2;
  buf->readOnly = 1;
  buf->splitData = data2;
  buf->splitSize = length2;
  buf->compressionFlags = 0;
}

/*
==============
MSG_MarkWrite
==============
*/
MSG_Mark *MSG_MarkWrite(MSG_Mark *result, msg_t *msg)
{
  MSG_Mark *v4; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 141, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 142, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( msg->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 143, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
    __debugbreak();
  result->bit = msg->bit;
  result->cursize = msg->cursize;
  v4 = result;
  result->msg = msg;
  return v4;
}

/*
==============
MSG_PackAndQuantizePolarToShort
==============
*/
__int64 MSG_PackAndQuantizePolarToShort(float *inOutAnglesInDegrees, float *inOutRadius)
{
  bool v7; 
  bool v8; 
  __int16 v15; 
  __int16 v17; 
  __int16 v19; 
  unsigned __int16 v21; 
  __int64 result; 
  double v27; 
  double v28; 
  char v31; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RSI = inOutRadius;
  __asm { vmovaps [rsp+78h+var_28], xmm8 }
  _RBP = inOutAnglesInDegrees;
  if ( !inOutAnglesInDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2642, ASSERT_TYPE_SANITY, "( inOutAnglesInDegrees )", (const char *)&queryFormat, "inOutAnglesInDegrees") )
    __debugbreak();
  v7 = _RSI == NULL;
  if ( !_RSI )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2643, ASSERT_TYPE_SANITY, "( inOutRadius )", (const char *)&queryFormat, "inOutRadius");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rsi]
    vcomiss xmm6, cs:__real@3f800000
    vmovss  xmm8, dword ptr [rbp+0]
  }
  if ( !v7 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+78h+var_38], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+78h+var_40], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2615, ASSERT_TYPE_ASSERT, "( radius ) <= ( 1.0f )", "%s <= %s\n\t%g, %g", "radius", "1.0f", v27, v28) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize
    vmovaps xmm0, xmm6; value
  }
  v15 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 6u);
  __asm { vmovss  xmm1, cs:__real@43340000; maxAbsValueSize }
  v17 = v15;
  __asm { vmovaps xmm0, xmm8; value }
  v19 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  v21 = v17 | (32 * v19);
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(v17 & 0x1F, *(float *)&_XMM1, 6u);
  __asm
  {
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vmovss  dword ptr [rsi], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat((v21 >> 5) & 0x1FF, *(float *)&_XMM1, 9u);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v31;
  result = v21;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovss  dword ptr [rbp+0], xmm0
  }
  return result;
}

/*
==============
MSG_PackPolarToShort
==============
*/

unsigned __int16 __fastcall MSG_PackPolarToShort(double anglesInDegrees, double radius)
{
  __int16 v11; 
  double v17; 
  double v18; 

  __asm
  {
    vcomiss xmm1, cs:__real@3f800000
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm8
    vmovaps xmm8, xmm0
    vmovaps xmm6, xmm1
    vmovsd  xmm2, cs:__real@3ff0000000000000
    vmovsd  [rsp+78h+var_38], xmm2
    vcvtss2sd xmm3, xmm6, xmm1
    vmovsd  [rsp+78h+var_40], xmm3
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2615, ASSERT_TYPE_ASSERT, "( radius ) <= ( 1.0f )", "%s <= %s\n\t%g, %g", "radius", "1.0f", v17, v18) )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize
    vmovaps xmm0, xmm6; value
  }
  v11 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 6u);
  __asm
  {
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vmovaps xmm0, xmm8; value
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm8, [rsp+78h+var_28]
  }
  return v11 | (32 * MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u));
}

/*
==============
MSG_PackSignedFloat
==============
*/

__int64 __fastcall MSG_PackSignedFloat(double value, double maxAbsValueSize, unsigned int bitCount)
{
  char v6; 
  unsigned int v12; 
  int v18; 
  unsigned int v19; 
  __int64 result; 
  __int64 v25; 
  __int64 v26; 
  char v30; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  v6 = bitCount;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
  }
  if ( bitCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2545, ASSERT_TYPE_ASSERT, "(bitCount > 1)", (const char *)&queryFormat, "bitCount > 1") )
    __debugbreak();
  __asm
  {
    vaddss  xmm0, xmm7, cs:__real@3a83126f
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm6, xmm0
  }
  v12 = (1 << (v6 - 1)) - 1;
  __asm
  {
    vcomiss xmm7, xmm8
    vminss  xmm6, xmm6, xmm7
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2563, ASSERT_TYPE_ASSERT, "(maxAbsValueSize > 0.0f)", (const char *)&queryFormat, "maxAbsValueSize > 0.0f") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm6, xmm7
    vmulss  xmm0, xmm1, xmm0; X
  }
  v18 = lroundf(*(float *)&_XMM0);
  v19 = v18;
  if ( v18 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,long>(long)", "unsigned", (unsigned int)v18, "signed", v18) )
    __debugbreak();
  if ( v19 > v12 )
  {
    LODWORD(v26) = v12;
    LODWORD(v25) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2565, ASSERT_TYPE_ASSERT, "( packedAbs ) <= ( bitMask )", "%s <= %s\n\t%u, %u", "packedAbs", "bitMask", v25, v26) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v30;
  result = v19;
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
MSG_PackUnsignedFloat
==============
*/

int __fastcall MSG_PackUnsignedFloat(double value, double maxAbsValueSize, unsigned int bitCount)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
  }
  if ( !bitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2593, ASSERT_TYPE_ASSERT, "(bitCount > 0)", (const char *)&queryFormat, "bitCount > 0") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovaps xmm1, xmm7; maxAbsValueSize
    vmovaps xmm0, xmm6; value
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, bitCount + 1);
}

/*
==============
MSG_PeekByte
==============
*/
__int64 MSG_PeekByte(msg_t *msg)
{
  int bit; 
  __int64 result; 
  int readcount; 
  __int64 value; 

  bit = msg->bit;
  if ( bit + 8 > 8 * (msg->cursize + msg->splitSize) )
  {
    msg->overflowed = 1;
    return 255i64;
  }
  if ( msg->overflowed )
    return 255i64;
  readcount = msg->readcount;
  MSG_ReadBitsInternal(msg, 8u, &value);
  result = (unsigned int)value;
  msg->readcount = readcount;
  msg->bit = bit;
  return result;
}

/*
==============
MSG_ReadAngle16
==============
*/
float MSG_ReadAngle16(msg_t *msg)
{
  __int16 value; 

  MSG_ReadValue_short_(msg, &value);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3bb40000
  }
  return *(float *)&_XMM0;
}

/*
==============
MSG_ReadBigString
==============
*/
char *MSG_ReadBigString(msg_t *msg)
{
  __int64 i; 
  int bit; 
  int v4; 
  unsigned __int8 Word_unsigned_char; 
  char *result; 
  __int64 value; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1870, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  for ( i = 0i64; ; i = (unsigned int)(i + 1) )
  {
    bit = msg->bit;
    if ( bit + 8 > 8 * (msg->splitSize + msg->cursize) )
    {
      msg->overflowed = 1;
LABEL_7:
      v4 = 0;
      goto LABEL_8;
    }
    if ( msg->overflowed )
      goto LABEL_7;
    if ( (bit & 7) != 0 )
    {
      MSG_ReadBitsInternal(msg, 8u, &value);
      Word_unsigned_char = value;
    }
    else
    {
      Word_unsigned_char = MSG_GetWord_unsigned_char_(msg, bit >> 3);
      msg->bit += 8;
      ++msg->readcount;
    }
    v4 = Word_unsigned_char;
    if ( Word_unsigned_char == 37 )
      v4 = 46;
LABEL_8:
    if ( (unsigned int)i < 0x4000 )
      string[i] = v4;
    if ( !v4 )
      break;
  }
  result = string;
  string[0x3FFF] = 0;
  return result;
}

/*
==============
MSG_ReadBit
==============
*/
__int64 MSG_ReadBit(msg_t *const msg)
{
  int bit; 
  __int64 result; 
  unsigned __int8 Word_unsigned_char; 

  bit = msg->bit;
  if ( bit + 1 > 8 * (msg->cursize + msg->splitSize) )
  {
    msg->overflowed = 1;
    return 0xFFFFFFFFi64;
  }
  if ( msg->overflowed )
    return 0xFFFFFFFFi64;
  Word_unsigned_char = MSG_GetWord_unsigned_char_(msg, bit >> 3);
  ++msg->bit;
  result = (Word_unsigned_char >> (bit & 7)) & 1;
  msg->readcount = (msg->bit + 7) >> 3;
  return result;
}

/*
==============
MSG_ReadBits
==============
*/
__int64 MSG_ReadBits(msg_t *const msg, unsigned int width)
{
  int v6; 
  __int64 value; 

  if ( width > 0x40 )
  {
    v6 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1594, ASSERT_TYPE_ASSERT, "( width ) <= ( 64 )", "%s <= %s\n\t%u, %u", "width", "64", width, v6) )
      __debugbreak();
  }
  if ( (int)(width + msg->bit) > 8 * (msg->cursize + msg->splitSize) )
  {
    msg->overflowed = 1;
    return -1i64;
  }
  if ( msg->overflowed )
    return -1i64;
  MSG_ReadBitsInternal(msg, width, &value);
  return value;
}

/*
==============
MSG_ReadBitsInternal
==============
*/
void MSG_ReadBitsInternal(msg_t *const msg, const unsigned int bitCount, __int64 *value)
{
  __int64 v3; 
  int v4; 
  int bit; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 maxsize; 
  unsigned __int8 *splitData; 
  unsigned __int64 cursize; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 *v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  unsigned __int64 v25; 
  __int64 *v26; 

  v26 = value;
  v3 = 0i64;
  v4 = msg->maxsize - 8;
  bit = msg->bit;
  if ( v4 > 0 )
    v3 = (unsigned int)v4;
  if ( bit >> 3 < (int)v3 )
    v3 = (unsigned int)(bit >> 3);
  v8 = bit - 8 * v3;
  if ( v8 > 0x3F )
  {
    v20 = 63;
    v18 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 367, ASSERT_TYPE_ASSERT, "( dataBitOffset ) <= ( 63 )", "dataBitOffset not in [0, 63]\n\t%u not in [0, %u]", v18, v20) )
      __debugbreak();
  }
  v9 = bitCount;
  if ( bitCount > 64 - v8 )
    v9 = 64 - v8;
  if ( v9 - 1 > 0x3F )
  {
    v22 = 64;
    LODWORD(v19) = 1;
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 370, ASSERT_TYPE_ASSERT, "( 1 ) <= ( dataBitCount ) && ( dataBitCount ) <= ( 64 )", "dataBitCount not in [1, 64]\n\t%i not in [%i, %i]", v17, v19, v22) )
      __debugbreak();
  }
  maxsize = msg->maxsize;
  if ( (unsigned int)v3 > (unsigned __int64)(maxsize - 8) )
  {
    LODWORD(v19) = maxsize - 8;
    LODWORD(v17) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 297, ASSERT_TYPE_ASSERT, "( dataByteOffset ) <= ( msg->maxsize - sizeof( WordType ) )", "dataByteOffset not in [0, msg->maxsize - sizeof( WordType )]\n\t%u not in [0, %u]", v17, v19) )
      __debugbreak();
  }
  splitData = msg->splitData;
  if ( splitData && (cursize = (unsigned int)msg->cursize, v3 + 8 > cursize) )
  {
    if ( (unsigned int)v3 < (unsigned int)cursize )
    {
      v14 = (unsigned int)(cursize - v3);
      if ( (unsigned int)v14 >= 8 )
      {
        v24 = 8;
        LODWORD(v21) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 316, ASSERT_TYPE_ASSERT, "( dataLowSize ) < ( sizeof( WordType ) )", "%s < %s\n\t%u, %u", "dataLowSize", "sizeof( WordType )", v21, v24) )
          __debugbreak();
      }
      memcpy_0(&v25, &msg->data[(unsigned int)v3], (unsigned int)v14);
      memcpy_0((char *)&v25 + v14, msg->splitData, (unsigned int)(8 - v14));
      v13 = v25;
    }
    else
    {
      v13 = *(_QWORD *)&splitData[(unsigned int)(v3 - cursize)];
    }
  }
  else
  {
    v13 = *(_QWORD *)&msg->data[v3];
  }
  v15 = v26;
  LODWORD(v16) = v8 << 24;
  HIDWORD(v16) = v9;
  *v26 = __bextr_u64(v13, (unsigned __int8)v8, (unsigned __int8)((unsigned __int16)(v16 >> 24) >> 8));
  if ( v9 < bitCount )
  {
    if ( bitCount - v9 >= 8 )
    {
      LODWORD(v23) = 8;
      LODWORD(v21) = bitCount - v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 376, ASSERT_TYPE_ASSERT, "( bitCount - dataBitCount ) < ( 8 )", "%s < %s\n\t%i, %i", "bitCount - dataBitCount", "8", v21, v23) )
        __debugbreak();
    }
    *v15 |= (MSG_GetWord_unsigned_char_(msg, v3 + 8) & (unsigned __int64)~(-1i64 << ((unsigned __int8)bitCount - (unsigned __int8)v9))) << v9;
  }
  msg->bit += bitCount;
  msg->readcount = (msg->bit + 7) >> 3;
}

/*
==============
MSG_ReadByte
==============
*/
__int64 MSG_ReadByte(msg_t *const msg)
{
  int bit; 
  __int64 result; 
  __int64 value; 

  bit = msg->bit;
  if ( bit + 8 > 8 * (msg->cursize + msg->splitSize) )
  {
    msg->overflowed = 1;
    return 0xFFFFFFFFi64;
  }
  if ( msg->overflowed )
    return 0xFFFFFFFFi64;
  if ( (bit & 7) != 0 )
  {
    MSG_ReadBitsInternal(msg, 8u, &value);
    return (unsigned __int8)value;
  }
  else
  {
    LOBYTE(result) = MSG_GetWord_unsigned_char_(msg, bit >> 3);
    msg->bit += 8;
    ++msg->readcount;
    return (unsigned __int8)result;
  }
}

/*
==============
MSG_ReadData
==============
*/
void MSG_ReadData(msg_t *msg, int readLen, void *buffer, int bufferSize)
{
  size_t v4; 
  size_t v6; 
  int bit; 
  int v9; 
  unsigned int cursize; 
  size_t v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  unsigned __int8 *splitData; 
  unsigned int v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 value; 

  v4 = bufferSize;
  v6 = readLen;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2339, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2340, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( (int)v6 > (int)v4 )
  {
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2344, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_ReadData is attempting to read too many bytes into a buffer (%d > %d)", v19, v4) )
      __debugbreak();
    msg->overflowed = 1;
    memset_0(buffer, -1, v4);
    return;
  }
  bit = msg->bit;
  v9 = 8 * v6;
  cursize = msg->cursize;
  if ( bit + 8 * (int)v6 > (int)(8 * (cursize + msg->splitSize)) )
  {
    msg->overflowed = 1;
    return;
  }
  if ( !msg->overflowed )
  {
    if ( (bit & 7) != 0 )
    {
      v11 = v6 >> 2;
      if ( (int)(v6 >> 2) > 0 )
      {
        v12 = (unsigned int)v11;
        do
        {
          MSG_ReadBitsInternal(msg, 0x20u, &value);
          *(_DWORD *)buffer = value;
          buffer = (char *)buffer + 4;
          --v12;
        }
        while ( v12 );
      }
      v13 = v6 - 4 * v11;
      if ( v13 > 0 )
      {
        v14 = (unsigned int)v13;
        do
        {
          MSG_ReadBitsInternal(msg, 8u, &value);
          *(_BYTE *)buffer = value;
          buffer = (char *)buffer + 1;
          --v14;
        }
        while ( v14 );
      }
      return;
    }
    splitData = msg->splitData;
    v16 = bit >> 3;
    if ( splitData && v16 + (unsigned int)v6 > cursize )
    {
      if ( v16 <= cursize )
      {
        v18 = cursize - v16;
        if ( (unsigned int)v18 >= (unsigned int)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2391, ASSERT_TYPE_ASSERT, "( dataLowSize ) < ( static_cast<uint32_t>(readLen) )", "%s < %s\n\t%u, %u", "dataLowSize", "static_cast<uint32_t>(readLen)", v18, v6) )
          __debugbreak();
        memcpy_0(buffer, &msg->data[v16], (unsigned int)v18);
        memcpy_0((char *)buffer + v18, msg->splitData, (unsigned int)(v6 - v18));
        bit = msg->bit;
        goto LABEL_32;
      }
      v17 = &splitData[v16 - cursize];
    }
    else
    {
      v17 = &msg->data[v16];
    }
    memcpy_0(buffer, v17, v6);
LABEL_32:
    msg->bit = bit + v9;
    msg->readcount = (bit + v9 + 7) >> 3;
  }
}

/*
==============
MSG_ReadData_Decompress
==============
*/
__int64 MSG_ReadData_Decompress(msg_t *const msg, void *buffer, int bufferSize, void *tempBuffer, int tempBufferSize)
{
  int v5; 
  unsigned int v10; 
  bool v11; 
  int bit; 
  unsigned __int8 *splitData; 
  __int64 readcount; 
  unsigned int cursize; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v5 = tempBufferSize;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2411, ASSERT_TYPE_ASSERT, "(buffer != nullptr)", (const char *)&queryFormat, "buffer != nullptr") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2412, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !tempBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2413, ASSERT_TYPE_ASSERT, "(tempBuffer != nullptr)", (const char *)&queryFormat, "tempBuffer != nullptr") )
    __debugbreak();
  if ( v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2414, ASSERT_TYPE_ASSERT, "(tempBufferSize > 0)", (const char *)&queryFormat, "tempBufferSize > 0") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 245, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  msg->bit = 8 * msg->readcount;
  if ( !MSG_ReadValue_int_(msg, &tempBufferSize) )
    goto LABEL_22;
  v10 = tempBufferSize;
  if ( tempBufferSize <= 0 )
    goto LABEL_22;
  if ( tempBufferSize > v5 )
  {
    LODWORD(v20) = tempBufferSize;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2428, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_ReadData_Decompress required a larger buffer than provided for decompresion %i > %i", v20, v5);
    goto LABEL_20;
  }
  bit = msg->bit;
  if ( bit + 8 * tempBufferSize > 8 * (msg->cursize + msg->splitSize) )
  {
LABEL_22:
    msg->overflowed = 1;
    return 0xFFFFFFFFi64;
  }
  if ( msg->overflowed )
    return 0xFFFFFFFFi64;
  if ( bit != 8 * msg->readcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2439, ASSERT_TYPE_ASSERT, "( msg->bit ) == ( msg->readcount << 3 )", "%s == %s\n\t%i, %i", "msg->bit", "msg->readcount << 3", msg->bit, 8 * msg->readcount) )
    __debugbreak();
  splitData = msg->splitData;
  readcount = (unsigned int)msg->readcount;
  if ( splitData && (cursize = msg->cursize, (unsigned int)readcount + v10 > cursize) )
  {
    if ( (unsigned int)readcount < cursize )
    {
      v17 = cursize - (unsigned int)readcount;
      if ( (unsigned int)v17 >= v10 )
      {
        LODWORD(v22) = v10;
        LODWORD(v21) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2458, ASSERT_TYPE_ASSERT, "( dataLowSize ) < ( static_cast<uint32_t>( compressedSizeBytes ) )", "%s < %s\n\t%u, %u", "dataLowSize", "static_cast<uint32_t>( compressedSizeBytes )", v21, v22) )
          __debugbreak();
      }
      memcpy_0(tempBuffer, &msg->data[readcount], (unsigned int)v17);
      memcpy_0((char *)tempBuffer + v17, msg->splitData, v10 - (unsigned int)v17);
    }
    else
    {
      tempBuffer = &splitData[(unsigned int)readcount - cursize];
    }
  }
  else
  {
    tempBuffer = &msg->data[readcount];
  }
  v18 = j_LZ4_decompress_safe((const char *)tempBuffer, (char *)buffer, v10, bufferSize);
  v19 = v18;
  if ( v18 <= 0 )
  {
    LODWORD(v20) = v18;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2471, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_ReadData_Decompress returned an error code from LZ4 %x", v20);
LABEL_20:
    if ( v11 )
      __debugbreak();
    goto LABEL_22;
  }
  if ( v18 > bufferSize )
  {
    LODWORD(v22) = bufferSize;
    LODWORD(v21) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2476, ASSERT_TYPE_ASSERT, "( decompressedBytes ) <= ( bufferSize )", "%s <= %s\n\t%i, %i", "decompressedBytes", "bufferSize", v21, v22) )
      __debugbreak();
  }
  msg->readcount += v10;
  msg->bit = 8 * msg->readcount;
  return v19;
}

/*
==============
MSG_ReadDeltaPrimaryWeapon
==============
*/
void MSG_ReadDeltaPrimaryWeapon(msg_t *msg, const Weapon *from, const bool fromIsAlternate, Weapon *outWeapon, bool *outIsAlternate)
{
  int v13; 
  Weapon result; 

  _RBX = outWeapon;
  _RDI = from;
  if ( !outWeapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2148, ASSERT_TYPE_ASSERT, "(outWeapon)", (const char *)&queryFormat, "outWeapon") )
    __debugbreak();
  if ( !outIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2149, ASSERT_TYPE_ASSERT, "(outIsAlternate)", (const char *)&queryFormat, "outIsAlternate") )
    __debugbreak();
  if ( MSG_ReadBit(msg) )
  {
    _RAX = MSG_ReadWeapon(&result, msg);
    v13 = *(_DWORD *)&_RAX->weaponCamo;
    __asm
    {
      vmovups ymm1, ymmword ptr [rax]
      vmovups xmm2, xmmword ptr [rax+20h]
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovups ymmword ptr [rbx], ymm1
      vmovups xmmword ptr [rbx+20h], xmm2
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&_RBX->weaponCamo = v13;
    *outIsAlternate = MSG_ReadBit(msg) != 0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&_RBX->weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
    *outIsAlternate = fromIsAlternate;
  }
}

/*
==============
MSG_ReadDeltaWeapon
==============
*/
Weapon *MSG_ReadDeltaWeapon(Weapon *result, msg_t *msg, const Weapon *from)
{
  int v8; 
  Weapon resulta; 

  _RBX = result;
  _RDI = from;
  if ( MSG_ReadBit(msg) )
  {
    _RAX = MSG_ReadWeapon(&resulta, msg);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr [rax+30h]
    }
    v8 = *(_DWORD *)&_RAX->weaponCamo;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups xmm1, xmmword ptr [rdi+20h]
    }
    v8 = *(_DWORD *)&_RDI->weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr [rdi+30h]
    }
  }
  __asm
  {
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weaponCamo = v8;
  return _RBX;
}

/*
==============
MSG_ReadExpGolomb0
==============
*/
__int64 MSG_ReadExpGolomb0(msg_t *msg)
{
  char v2; 
  int bit; 
  int v5; 
  int splitSize; 
  int cursize; 
  int v8; 
  int v9; 
  int v10; 
  unsigned __int8 Word_unsigned_char; 
  char v12; 
  unsigned __int8 v13; 
  char v14; 

  v2 = 0;
  if ( MSG_ReadBit(msg) == 1 )
    return 0i64;
  bit = msg->bit;
  v5 = 0;
  do
  {
    splitSize = msg->splitSize;
    cursize = msg->cursize;
    if ( bit + 1 > 8 * (cursize + splitSize) )
    {
      msg->overflowed = 1;
LABEL_6:
      v8 = -1;
      goto LABEL_7;
    }
    if ( msg->overflowed )
      goto LABEL_6;
    Word_unsigned_char = MSG_GetWord_unsigned_char_(msg, bit >> 3);
    ++msg->bit;
    v12 = bit & 7;
    bit = msg->bit;
    splitSize = msg->splitSize;
    cursize = msg->cursize;
    msg->readcount = (bit + 7) >> 3;
    v8 = (Word_unsigned_char >> v12) & 1;
LABEL_7:
    v9 = v8 << v2++;
    v5 |= v9;
    if ( bit + 1 > 8 * (cursize + splitSize) )
    {
      msg->overflowed = 1;
LABEL_9:
      v10 = -1;
      continue;
    }
    if ( msg->overflowed )
      goto LABEL_9;
    v13 = MSG_GetWord_unsigned_char_(msg, bit >> 3);
    v14 = bit & 7;
    bit = msg->bit + 1;
    msg->bit = bit;
    msg->readcount = (bit + 7) >> 3;
    v10 = (v13 >> v14) & 1;
  }
  while ( !v10 );
  return (v5 | (unsigned int)(1 << v2)) - 1;
}

/*
==============
MSG_ReadExpGolomb
==============
*/
__int64 MSG_ReadExpGolomb(msg_t *msg, int kbits)
{
  unsigned int v4; 

  v4 = MSG_ReadExpGolomb0(msg) << kbits;
  return v4 | (unsigned int)MSG_ReadBits(msg, kbits);
}

/*
==============
MSG_ReadFloat
==============
*/
float MSG_ReadFloat(msg_t *msg)
{
  int value; 

  if ( !MSG_ReadValue_int_(msg, &value) || value == -1 )
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
    msg->overflowed = 1;
  }
  else
  {
    __asm { vmovss  xmm0, [rsp+28h+value] }
  }
  return *(float *)&_XMM0;
}

/*
==============
MSG_ReadInt64
==============
*/
unsigned __int64 MSG_ReadInt64(msg_t *const msg)
{
  bool v1; 
  __int64 v2; 
  unsigned __int64 value; 

  v1 = MSG_ReadValue_unsigned___int64_(msg, &value);
  v2 = 0i64;
  if ( v1 )
    return value;
  return v2;
}

/*
==============
MSG_ReadLong
==============
*/
__int64 MSG_ReadLong(msg_t *const msg)
{
  bool v1; 
  unsigned int v2; 
  int value; 

  v1 = MSG_ReadValue_int_(msg, &value);
  v2 = -1;
  if ( v1 )
    return (unsigned int)value;
  return v2;
}

/*
==============
MSG_ReadRangedFloatBits
==============
*/

float __fastcall MSG_ReadRangedFloatBits(msg_t *sb, double begin, double end, int bits)
{
  char v8; 
  bool v14; 
  bool v21; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  v8 = bits;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
  }
  MSG_ReadBits(sb, bits);
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rax
  }
  v14 = __CFSHL__(1, v8) || 1 << v8 == 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vsubss  xmm3, xmm8, xmm6
    vdivss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm4, xmm1
    vaddss  xmm7, xmm2, xmm6
    vcomiss xmm7, xmm6
  }
  if ( __CFSHL__(1, v8) )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1963, ASSERT_TYPE_ASSERT, "(f >= begin)", (const char *)&queryFormat, "f >= begin");
    v14 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1964, ASSERT_TYPE_ASSERT, "(f <= end)", (const char *)&queryFormat, "f <= end") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
MSG_ReadRiceGolomb
==============
*/
__int64 MSG_ReadRiceGolomb(msg_t *msg, int mbits)
{
  int bit; 
  int v5; 
  unsigned __int8 Word_unsigned_char; 
  char v7; 

  bit = msg->bit;
  v5 = 0;
  while ( bit < 8 * (msg->splitSize + msg->cursize) )
  {
    if ( msg->overflowed )
      return (v5 << mbits) | (unsigned int)MSG_ReadBits(msg, mbits);
    Word_unsigned_char = MSG_GetWord_unsigned_char_(msg, bit >> 3);
    v7 = bit & 7;
    bit = msg->bit + 1;
    msg->bit = bit;
    msg->readcount = (bit + 7) >> 3;
    if ( ((Word_unsigned_char >> v7) & 1) == 0 )
      return (v5 << mbits) | (unsigned int)MSG_ReadBits(msg, mbits);
    ++v5;
  }
  msg->overflowed = 1;
  return (v5 << mbits) | (unsigned int)MSG_ReadBits(msg, mbits);
}

/*
==============
MSG_ReadShort
==============
*/
__int64 MSG_ReadShort(msg_t *const msg)
{
  bool v1; 
  __int64 result; 
  __int16 value; 

  v1 = !MSG_ReadValue_short_(msg, &value);
  result = (unsigned int)value;
  if ( v1 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
MSG_ReadSignedExpGolomb0
==============
*/
__int64 MSG_ReadSignedExpGolomb0(msg_t *msg)
{
  unsigned int ExpGolomb0; 

  ExpGolomb0 = MSG_ReadExpGolomb0(msg);
  if ( ExpGolomb0 && MSG_ReadBit(msg) )
    return -ExpGolomb0;
  return ExpGolomb0;
}

/*
==============
MSG_ReadSignedExpGolomb
==============
*/
__int64 MSG_ReadSignedExpGolomb(msg_t *msg, int kbits)
{
  unsigned int v4; 
  unsigned int v5; 

  v4 = MSG_ReadExpGolomb0(msg) << kbits;
  v5 = v4 | MSG_ReadBits(msg, kbits);
  if ( v5 && MSG_ReadBit(msg) )
    return -v5;
  return v5;
}

/*
==============
MSG_ReadSignedNonZeroExpGolomb0
==============
*/
__int64 MSG_ReadSignedNonZeroExpGolomb0(msg_t *msg)
{
  unsigned int v2; 

  v2 = MSG_ReadExpGolomb0(msg) + 1;
  if ( MSG_ReadBit(msg) )
    return -v2;
  return v2;
}

/*
==============
MSG_ReadSignedNonZeroExpGolomb
==============
*/
__int64 MSG_ReadSignedNonZeroExpGolomb(msg_t *msg, int kbits)
{
  unsigned int v4; 
  unsigned int v5; 

  v4 = MSG_ReadExpGolomb0(msg) << kbits;
  v5 = (v4 | MSG_ReadBits(msg, kbits)) + 1;
  if ( MSG_ReadBit(msg) )
    return -v5;
  return v5;
}

/*
==============
MSG_ReadString
==============
*/
char *MSG_ReadString(msg_t *msg, char *string, unsigned int maxChars)
{
  __int64 i; 
  int bit; 
  int v8; 
  int v9; 
  __int64 value; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1833, ASSERT_TYPE_ASSERT, "( string )", (const char *)&queryFormat, "string") )
    __debugbreak();
  for ( i = 0i64; ; i = (unsigned int)(i + 1) )
  {
    bit = msg->bit;
    if ( bit + 8 > 8 * (msg->splitSize + msg->cursize) )
    {
      msg->overflowed = 1;
LABEL_7:
      v8 = -1;
      goto LABEL_8;
    }
    if ( msg->overflowed )
      goto LABEL_7;
    if ( (bit & 7) != 0 )
    {
      MSG_ReadBitsInternal(msg, 8u, &value);
      v8 = (unsigned __int8)value;
    }
    else
    {
      LOBYTE(v8) = MSG_GetWord_unsigned_char_(msg, bit >> 3);
      msg->bit += 8;
      ++msg->readcount;
      v8 = (unsigned __int8)v8;
    }
LABEL_8:
    v9 = 0;
    if ( v8 != -1 )
      v9 = v8;
    if ( (unsigned int)i < maxChars )
      string[i] = v9;
    if ( !v9 )
      break;
  }
  string[maxChars - 1] = 0;
  return string;
}

/*
==============
MSG_ReadStringLine
==============
*/
char *MSG_ReadStringLine(msg_t *msg, char *string, unsigned int maxChars)
{
  __int64 i; 
  int bit; 
  int v8; 
  __int64 value; 

  for ( i = 0i64; ; i = (unsigned int)(i + 1) )
  {
    bit = msg->bit;
    if ( bit + 8 > 8 * (msg->splitSize + msg->cursize) )
    {
      msg->overflowed = 1;
LABEL_11:
      v8 = 0;
      goto LABEL_12;
    }
    if ( msg->overflowed )
      goto LABEL_11;
    if ( (bit & 7) != 0 )
    {
      MSG_ReadBitsInternal(msg, 8u, &value);
      LOBYTE(v8) = value;
    }
    else
    {
      LOBYTE(v8) = MSG_GetWord_unsigned_char_(msg, bit >> 3);
      msg->bit += 8;
      ++msg->readcount;
    }
    v8 = (unsigned __int8)v8;
    if ( (unsigned __int8)v8 == 37 )
    {
      v8 = 46;
      goto LABEL_12;
    }
    if ( (unsigned __int8)v8 == 10 )
      goto LABEL_11;
LABEL_12:
    if ( (unsigned int)i < maxChars )
      string[i] = v8;
    if ( !v8 )
      break;
  }
  string[maxChars - 1] = 0;
  return string;
}

/*
==============
MSG_ReadUnsignedShort
==============
*/
__int64 MSG_ReadUnsignedShort(msg_t *const msg)
{
  bool v1; 
  __int64 result; 
  unsigned __int16 value; 

  v1 = !MSG_ReadValue_unsigned_short_(msg, &value);
  result = value;
  if ( v1 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
MSG_ReadVec3
==============
*/
void MSG_ReadVec3(msg_t *msg, vec3_t *v)
{
  int i; 
  __int64 v11; 
  __int64 v12; 
  int value; 
  int v16; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  _RDI = v;
  __asm { vmovss  xmm7, cs:__real@bf800000 }
  for ( i = 0; i < 3; ++i )
  {
    if ( !MSG_ReadValue_int_(msg, &value) || (v16 = value, value == -1) )
    {
      msg->overflowed = 1;
      __asm { vmovaps xmm6, xmm7 }
    }
    else
    {
      __asm { vmovss  xmm6, [rsp+78h+arg_18] }
    }
    if ( (unsigned int)i >= 3 )
    {
      LODWORD(v12) = 3;
      LODWORD(v11) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
MSG_ReadWeapon
==============
*/
Weapon *MSG_ReadWeapon(Weapon *result, msg_t *msg)
{
  unsigned int BitsNeededForType; 
  __int64 Bits; 
  unsigned __int16 v8; 
  bool v9; 
  __int64 v10; 
  __int64 *v11; 
  unsigned int CamoCount; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  unsigned __int8 *attachmentVariationIndices; 
  unsigned int v18; 
  AttachmentSlot v19; 
  unsigned int *v20; 
  unsigned int v21; 
  signed int v22; 
  __int64 v23; 
  unsigned __int16 v24; 
  __int64 v25; 
  __int64 v26; 
  signed int v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned __int8 OtherAttachmentId; 
  unsigned __int8 v31; 
  unsigned __int8 *v32; 
  __int64 v33; 
  unsigned __int8 v34; 
  unsigned __int16 *stickerIndices; 
  __int64 v36; 
  int bit; 
  unsigned int v38; 
  __int64 v39; 
  unsigned __int16 v40; 
  int v41; 
  unsigned int v42; 
  unsigned int v43; 
  __int64 v44; 
  unsigned __int8 v45; 
  unsigned int AllWeaponAttachments; 
  WeaponAttachment **v47; 
  __int64 v48; 
  WeaponAttachment *v49; 
  unsigned int numReticles; 
  unsigned int v51; 
  msg_t *v52; 
  signed int v53; 
  __int64 v54; 
  unsigned __int8 v55; 
  int v59; 
  unsigned __int8 Word_unsigned_char; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  AttachmentSlot slot; 
  _DWORD *v68; 
  Weapon *v69; 
  msg_t *msga; 
  Weapon __formal; 
  WeaponAttachment *attachments[30]; 

  msga = msg;
  v69 = result;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1977, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rsp+1D0h+__formal.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rbp+0D0h+__formal.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rbp+0D0h+__formal.attachmentVariationIndices+5], xmm1
  }
  *(_DWORD *)&__formal.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  BitsNeededForType = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_WEAPON);
  Bits = MSG_ReadBits(msg, BitsNeededForType);
  v8 = truncate_cast<unsigned short,__int64>(Bits);
  v9 = msg->overflowed == 0;
  __formal.weaponIdx = v8;
  if ( !v9 || v8 >= 0x226u )
    goto LABEL_88;
  v10 = v8;
  if ( v8 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v64) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v64, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v9 = bg_weaponCompleteDefs[v10] == NULL;
  v11 = (__int64 *)&bg_weaponCompleteDefs[v10];
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  v68 = (_DWORD *)*v11;
  if ( !v68 )
    goto LABEL_88;
  CamoCount = BG_Camo_GetCamoCount();
  if ( CamoCount && BG_WeaponCanAcceptCamo(&__formal) )
  {
    v13 = __lzcnt(CamoCount);
    v14 = 32 - v13;
    if ( (int)(32 - v13) < 1 || v14 > 8 )
    {
      LODWORD(v65) = 1;
      LODWORD(v64) = 32 - v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2002, ASSERT_TYPE_ASSERT, "( 1 ) <= ( camoBitCount ) && ( camoBitCount ) <= ( sizeof( weapon.weaponCamo ) * 8 )", "camoBitCount not in [1, sizeof( weapon.weaponCamo ) * 8]\n\t%i not in [%i, %i]", v64, v65, 8) )
        __debugbreak();
    }
    v15 = MSG_ReadBits(msg, v14);
    v16 = truncate_cast<unsigned char,__int64>(v15);
    v9 = msg->overflowed == 0;
    __formal.weaponCamo = v16;
    if ( !v9 || v16 > CamoCount )
      goto LABEL_88;
  }
  attachmentVariationIndices = __formal.attachmentVariationIndices;
  v18 = 0;
  v19 = ATT_SLOT_RECEIVER;
  v20 = v68 + 10;
  do
  {
    v21 = *v20;
    if ( *v20 )
    {
      slot = v19;
      v22 = 32 - __lzcnt(v21);
      if ( v22 < 1 || v22 > (int)Com_GetWeaponPrimaryAttachmentSlotSize(&slot) )
      {
        LODWORD(v66) = Com_GetWeaponPrimaryAttachmentSlotSize(&slot);
        LODWORD(v65) = 1;
        LODWORD(v64) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2019, ASSERT_TYPE_ASSERT, "( 1 ) <= ( attListBitCount ) && ( attListBitCount ) <= ( static_cast<int>( Com_GetWeaponPrimaryAttachmentSlotSize( slot ) ) )", "attListBitCount not in [1, static_cast<int>( Com_GetWeaponPrimaryAttachmentSlotSize( slot ) )]\n\t%i not in [%i, %i]", v64, v65, v66) )
          __debugbreak();
      }
      v23 = MSG_ReadBits(msg, v22);
      v24 = truncate_cast<unsigned short,__int64>(v23);
      BG_Weapon_SetPrimaryAttachmentIndex(&slot, v24, &__formal);
      if ( BG_Weapon_GetPrimaryAttachmentIndex(&__formal, &slot) != v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2023, ASSERT_TYPE_ASSERT, "(BG_Weapon_GetPrimaryAttachmentIndex( weapon, slot ) == receivedAttachmentIndex)", (const char *)&queryFormat, "BG_Weapon_GetPrimaryAttachmentIndex( weapon, slot ) == receivedAttachmentIndex") )
        __debugbreak();
      if ( msg->overflowed || v24 > *v20 )
        goto LABEL_88;
      if ( MSG_ReadBit(msg) )
      {
        v25 = MSG_ReadBits(msg, 32 - __lzcnt(0xFu));
        *attachmentVariationIndices = truncate_cast<unsigned char,__int64>(v25);
      }
      else
      {
        *attachmentVariationIndices = 0;
      }
    }
    ++v19;
    v20 += 4;
    ++attachmentVariationIndices;
  }
  while ( (unsigned int)v19 < ATT_SLOT_OTHER );
  v26 = (__int64)v68;
  v27 = v68[62];
  if ( v27 )
  {
    if ( v27 < 1 || (unsigned int)v27 > 0x10 )
    {
      LODWORD(v66) = 16;
      LODWORD(v65) = 1;
      LODWORD(v64) = v68[62];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2047, ASSERT_TYPE_ASSERT, "( 1 ) <= ( otherBitCount ) && ( otherBitCount ) <= ( sizeof( weapon.weaponOthers ) * 8 )", "otherBitCount not in [1, sizeof( weapon.weaponOthers ) * 8]\n\t%i not in [%i, %i]", v64, v65, v66) )
        __debugbreak();
    }
    v28 = MSG_ReadBits(msg, v27);
    __formal.weaponOthers = truncate_cast<unsigned short,__int64>(v28);
    if ( msg->overflowed )
      goto LABEL_88;
    v29 = 0;
    if ( *(_DWORD *)(v26 + 248) )
    {
      do
      {
        OtherAttachmentId = Com_GetOtherAttachmentId(v29);
        v31 = OtherAttachmentId;
        if ( OtherAttachmentId >= 0x1Du )
        {
          LODWORD(v65) = 29;
          LODWORD(v64) = OtherAttachmentId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2059, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentId ) < (unsigned)( WEAPON_ATTACHMENT_ID_COUNT )", "attachmentId doesn't index WEAPON_ATTACHMENT_ID_COUNT\n\t%i not in [0, %i)", v64, v65) )
            __debugbreak();
        }
        v32 = &__formal.attachmentVariationIndices[v31];
        if ( MSG_ReadBit(msg) )
        {
          v33 = MSG_ReadBits(msg, 32 - __lzcnt(0xFu));
          v34 = truncate_cast<unsigned char,__int64>(v33);
        }
        else
        {
          v34 = 0;
        }
        ++v29;
        *v32 = v34;
      }
      while ( v29 < *(_DWORD *)(v26 + 248) );
      v18 = 0;
    }
  }
  stickerIndices = __formal.stickerIndices;
  v36 = 4i64;
  do
  {
    bit = msg->bit;
    if ( bit + 1 <= 8 * (msg->splitSize + msg->cursize) )
    {
      if ( !msg->overflowed )
      {
        Word_unsigned_char = MSG_GetWord_unsigned_char_(msg, bit >> 3);
        msg->readcount = (++msg->bit + 7) >> 3;
        if ( ((Word_unsigned_char >> (bit & 7)) & 1) == 0 )
        {
          v40 = 0;
          goto LABEL_58;
        }
      }
    }
    else
    {
      msg->overflowed = 1;
    }
    v38 = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_STICKER);
    v39 = MSG_ReadBits(msg, v38);
    v40 = v39;
    if ( (v39 < 0 || (unsigned __int64)v39 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v39, "signed", v39) )
      __debugbreak();
LABEL_58:
    *stickerIndices++ = v40;
    --v36;
  }
  while ( v36 );
  v41 = v68[66];
  if ( v41 )
  {
    v42 = __lzcnt(v41 + 1);
    v43 = 32 - v42;
    if ( (int)(32 - v42) < 1 || v43 > 8 )
    {
      LODWORD(v66) = 8;
      LODWORD(v65) = 1;
      LODWORD(v64) = 32 - v42;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2090, ASSERT_TYPE_ASSERT, "( 1 ) <= ( lootVariantBitCount ) && ( lootVariantBitCount ) <= ( sizeof( weapon.weaponLootId ) * 8 )", "lootVariantBitCount not in [1, sizeof( weapon.weaponLootId ) * 8]\n\t%i not in [%i, %i]", v64, v65, v66) )
        __debugbreak();
    }
    v44 = MSG_ReadBits(msg, v43);
    v45 = truncate_cast<unsigned char,__int64>(v44);
    v9 = msg->overflowed == 0;
    __formal.weaponLootId = v45;
    if ( !v9 )
      goto LABEL_88;
  }
  AllWeaponAttachments = BG_GetAllWeaponAttachments(&__formal, (const WeaponAttachment **)attachments);
  if ( AllWeaponAttachments )
  {
    v47 = attachments;
    v48 = AllWeaponAttachments;
    do
    {
      v49 = *v47;
      if ( !*v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2103, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
        __debugbreak();
      numReticles = v49->numReticles;
      if ( numReticles )
      {
        if ( __formal.scopeVariation >= numReticles )
        {
          LODWORD(v65) = v49->numReticles;
          LODWORD(v64) = __formal.scopeVariation;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2108, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.scopeVariation ) < (unsigned)( attachment->numReticles )", "weapon.scopeVariation doesn't index attachment->numReticles\n\t%i not in [0, %i)", v64, v65) )
            __debugbreak();
        }
        v51 = v49->numReticles;
        if ( v18 > v51 )
          v51 = v18;
        v18 = v51;
      }
      ++v47;
      --v48;
    }
    while ( v48 );
    v52 = msga;
    if ( v18 > 1 )
    {
      v53 = 32 - __lzcnt(v18 - 1);
      if ( v53 < 1 || (unsigned int)v53 > 8 )
      {
        LODWORD(v66) = 8;
        LODWORD(v65) = 1;
        LODWORD(v64) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2116, ASSERT_TYPE_ASSERT, "( 1 ) <= ( reticleBitCount ) && ( reticleBitCount ) <= ( sizeof( weapon.scopeVariation ) * 8 )", "reticleBitCount not in [1, sizeof( weapon.scopeVariation ) * 8]\n\t%i not in [%i, %i]", v64, v65, v66) )
          __debugbreak();
      }
      v54 = MSG_ReadBits(v52, v53);
      v55 = truncate_cast<unsigned char,__int64>(v54);
      v9 = v52->overflowed == 0;
      __formal.scopeVariation = v55;
      if ( !v9 )
      {
LABEL_88:
        __asm { vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON }
        _RCX = (__int64)v69;
        __asm { vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON }
        v59 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
        __asm
        {
          vmovups ymmword ptr [rcx], ymm0
          vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        }
        goto LABEL_89;
      }
    }
  }
  __asm { vmovups ymm0, ymmword ptr [rsp+1D0h+__formal.weaponIdx] }
  _RCX = (__int64)v69;
  __asm { vmovups xmm1, xmmword ptr [rbp+0D0h+__formal.attachmentVariationIndices+5] }
  v59 = *(_DWORD *)&__formal.weaponCamo;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovsd  xmm0, qword ptr [rbp+0D0h+__formal.attachmentVariationIndices+15h]
  }
LABEL_89:
  __asm
  {
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)(_RCX + 56) = v59;
  return (Weapon *)_RCX;
}

/*
==============
MSG_RestartWriting
==============
*/
void MSG_RestartWriting(msg_t *msg)
{
  if ( msg )
  {
    msg->overflowed = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 131, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
      __debugbreak();
    MEMORY[0] = 0;
  }
}

/*
==============
MSG_Rewind
==============
*/
__int64 MSG_Rewind(msg_t *msg, int len)
{
  int readcount; 
  __int64 result; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2261, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  readcount = msg->readcount;
  if ( readcount < len )
    len = msg->readcount;
  result = (unsigned int)len;
  msg->readcount = readcount - len;
  return result;
}

/*
==============
MSG_RollbackWrite
==============
*/
void MSG_RollbackWrite(msg_t *msg, const MSG_Mark *mark)
{
  msg_t *v4; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 158, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 159, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  v4 = mark->msg;
  if ( v4 != msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 160, ASSERT_TYPE_ASSERT, "( mark.msg ) == ( msg )", "%s == %s\n\t%p, %p", "mark.msg", "msg", v4, msg) )
    __debugbreak();
  msg->overflowed = 0;
  msg->bit = mark->bit;
  msg->cursize = mark->cursize;
}

/*
==============
MSG_SetNextRead
==============
*/
void MSG_SetNextRead(msg_t *msg, int byteOffset)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2271, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( byteOffset >= msg->maxsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2272, ASSERT_TYPE_ASSERT, "( byteOffset < msg->maxsize )", (const char *)&queryFormat, "byteOffset < msg->maxsize") )
    __debugbreak();
  if ( !msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2273, ASSERT_TYPE_ASSERT, "( msg->readOnly )", (const char *)&queryFormat, "msg->readOnly") )
    __debugbreak();
  if ( byteOffset <= msg->maxsize )
  {
    msg->bit = 8 * byteOffset;
    msg->readcount = byteOffset;
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_SetUsingHighPrecisionPlayerOrigin
==============
*/
void MSG_SetUsingHighPrecisionPlayerOrigin(bool enabled)
{
  g_usingHighPrecisionPlayerOrigin = enabled;
}

/*
==============
MSG_Truncate
==============
*/
void MSG_Truncate(msg_t *msg)
{
  int bit; 
  char i; 
  __int64 v3; 

  bit = msg->bit;
  msg->cursize = msg->readcount;
  for ( i = bit & 7; (bit & 7) != 0; i = bit & 7 )
  {
    v3 = bit++;
    msg->data[v3 >> 3] &= ~(1 << i);
  }
}

/*
==============
MSG_UnpackPolarFromShort
==============
*/
void MSG_UnpackPolarFromShort(const unsigned __int16 compressedPolarCoord, float *outAnglesInDegrees, float *outRadius)
{
  _RDI = outRadius;
  _RSI = outAnglesInDegrees;
  if ( !outAnglesInDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2629, ASSERT_TYPE_SANITY, "( outAnglesInDegrees )", (const char *)&queryFormat, "outAnglesInDegrees") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2630, ASSERT_TYPE_SANITY, "( outRadius )", (const char *)&queryFormat, "outRadius") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(compressedPolarCoord & 0x1F, *(float *)&_XMM1, 6u);
  __asm
  {
    vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
    vmovss  dword ptr [rdi], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat((compressedPolarCoord >> 5) & 0x1FF, *(float *)&_XMM1, 9u);
  __asm { vmovss  dword ptr [rsi], xmm0 }
}

/*
==============
MSG_UnpackSignedFloat
==============
*/

float __fastcall MSG_UnpackSignedFloat(int value, double maxAbsValueSize, unsigned int bitCount)
{
  char v6; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v6 = bitCount;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( bitCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2575, ASSERT_TYPE_ASSERT, "(bitCount > 1)", (const char *)&queryFormat, "bitCount > 1") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( (__CFSHL__(1, v6 - 1) || 1 << (v6 - 1) == 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2580, ASSERT_TYPE_ASSERT, "(bitMask > 0.0f)", (const char *)&queryFormat, "bitMask > 0.0f") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmulss  xmm4, xmm1, xmm7
    vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm7, [rsp+58h+var_28]
  }
  _EDI = value >> (v6 - 1);
  __asm { vmovd   xmm0, edi }
  _EAX = 0;
  __asm
  {
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
MSG_UnpackUnsignedFloat
==============
*/

double __fastcall MSG_UnpackUnsignedFloat(int value, double maxAbsValueSize, unsigned int bitCount)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !bitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 2603, ASSERT_TYPE_ASSERT, "(bitCount > 0)", (const char *)&queryFormat, "bitCount > 0") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm6; maxAbsValueSize
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return MSG_UnpackSignedFloat(value, *(float *)&_XMM1, bitCount + 1);
}

/*
==============
MSG_UsingHighPrecisionPlayerOrigin
==============
*/
_BOOL8 MSG_UsingHighPrecisionPlayerOrigin()
{
  return g_usingHighPrecisionPlayerOrigin;
}

/*
==============
MSG_WouldWriteOverflow
==============
*/
bool MSG_WouldWriteOverflow(msg_t *msg, const unsigned int bitCount)
{
  return (int)(msg->bit + bitCount) > 8 * msg->maxsize;
}

/*
==============
MSG_WriteAngle16
==============
*/

void __fastcall MSG_WriteAngle16(msg_t *sb, double f)
{
  int bit; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( sb->readOnly )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1154, ASSERT_TYPE_ASSERT, "( !sb->readOnly )", (const char *)&queryFormat, "!sb->readOnly") )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@43360b61
    vaddss  xmm2, xmm0, cs:__real@3f000000
  }
  bit = sb->bit;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si r8d, xmm4
  }
  if ( bit + 16 > 8 * sb->maxsize )
  {
    sb->overflowed = 1;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    return;
  }
  if ( !sb->overflowed )
  {
    if ( (bit & 7) != 0 )
    {
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
      MSG_WriteBitsInternal(sb, 0x10u, (__int16)_ER8);
      return;
    }
    *(_WORD *)&sb->data[bit >> 3] = _ER8;
    sb->bit += 16;
    sb->cursize += 2;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
MSG_WriteAngle
==============
*/

void __fastcall MSG_WriteAngle(msg_t *sb, double f)
{
  int bit; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( sb->readOnly )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1146, ASSERT_TYPE_ASSERT, "( !sb->readOnly )", (const char *)&queryFormat, "!sb->readOnly") )
      __debugbreak();
  }
  bit = sb->bit;
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@3f360b61
    vcvttss2si r8d, xmm0
  }
  if ( bit + 8 > 8 * sb->maxsize )
  {
    sb->overflowed = 1;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    return;
  }
  if ( !sb->overflowed )
  {
    if ( (bit & 7) != 0 )
    {
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
      MSG_WriteBitsInternal(sb, 8u, (unsigned __int8)_ER8);
      return;
    }
    sb->data[bit >> 3] = _ER8;
    sb->bit += 8;
    ++sb->cursize;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
MSG_WriteBigString
==============
*/
void MSG_WriteBigString(msg_t *msg, const char *s)
{
  const char *v2; 
  int overflowed; 
  int bit; 
  unsigned __int8 v6; 
  int v7; 
  int v8; 

  v2 = s;
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1119, ASSERT_TYPE_ASSERT, "( s )", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1120, ASSERT_TYPE_ASSERT, "( !msg->readOnly )", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  if ( !msg->overflowed )
  {
    overflowed = 0;
    while ( 1 )
    {
      bit = msg->bit;
      v6 = *v2;
      v7 = 8 * msg->maxsize;
      v8 = bit + 8;
      if ( *v2 == -110 )
      {
        if ( v8 > v7 )
        {
          msg->overflowed = 1;
          goto LABEL_23;
        }
        if ( !overflowed )
        {
          if ( (bit & 7) != 0 )
          {
            MSG_WriteBitsInternal(msg, 8u, 39i64);
            goto LABEL_23;
          }
          msg->data[bit >> 3] = 39;
LABEL_22:
          msg->bit += 8;
          ++msg->cursize;
        }
      }
      else
      {
        if ( v8 > v7 )
        {
          msg->overflowed = 1;
          goto LABEL_23;
        }
        if ( !overflowed )
        {
          if ( (bit & 7) != 0 )
          {
            MSG_WriteBitsInternal(msg, 8u, v6);
            goto LABEL_23;
          }
          msg->data[bit >> 3] = v6;
          goto LABEL_22;
        }
      }
LABEL_23:
      if ( *v2 )
      {
        overflowed = msg->overflowed;
        ++v2;
        if ( !msg->overflowed )
          continue;
      }
      return;
    }
  }
}

/*
==============
MSG_WriteBit0
==============
*/
void MSG_WriteBit0(msg_t *const msg)
{
  int bit; 
  unsigned __int8 *v2; 

  bit = msg->bit;
  if ( bit + 1 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      v2 = &msg->data[bit >> 3];
      *v2 &= ~(1 << (bit & 7));
      msg->cursize = (++msg->bit + 7) >> 3;
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteBit1
==============
*/
void MSG_WriteBit1(msg_t *const msg)
{
  int bit; 
  unsigned __int8 *v2; 

  bit = msg->bit;
  if ( bit + 1 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      v2 = &msg->data[bit >> 3];
      *v2 |= 1 << (bit & 7);
      msg->cursize = (++msg->bit + 7) >> 3;
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteBits
==============
*/
void MSG_WriteBits(msg_t *const msg, const __int64 value, const unsigned int width)
{
  int v7; 

  if ( width > 0x40 )
  {
    v7 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 767, ASSERT_TYPE_ASSERT, "( width ) <= ( 64 )", "%s <= %s\n\t%u, %u", "width", "64", width, v7) )
      __debugbreak();
  }
  if ( (int)(width + msg->bit) <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
      MSG_WriteBitsInternal(msg, width, value & ~(-1i64 << width));
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteBitsAtOffset
==============
*/
void MSG_WriteBitsAtOffset(msg_t *const msg, const unsigned int bitOffset, const __int64 value, const unsigned int bitCount)
{
  unsigned int maxsize; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 529, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( bitOffset > msg->bit )
  {
    LODWORD(v18) = bitOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 530, ASSERT_TYPE_ASSERT, "( bitOffset ) <= ( static_cast<uint32_t>(msg->bit) )", "bitOffset not in [0, static_cast<uint32_t>(msg->bit)]\n\t%u not in [0, %u]", v18, msg->bit) )
      __debugbreak();
  }
  if ( bitOffset + bitCount > msg->bit )
  {
    LODWORD(v19) = msg->bit;
    LODWORD(v18) = bitOffset + bitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 531, ASSERT_TYPE_ASSERT, "( bitOffset + bitCount ) <= ( static_cast<uint32_t>(msg->bit) )", "bitOffset + bitCount not in [0, static_cast<uint32_t>(msg->bit)]\n\t%u not in [0, %u]", v18, v19) )
      __debugbreak();
  }
  maxsize = msg->maxsize;
  v9 = maxsize - 8;
  if ( (int)(bitOffset >> 3) < (int)(maxsize - 8) )
    v9 = bitOffset >> 3;
  if ( v9 >= maxsize )
  {
    LODWORD(v19) = msg->maxsize;
    LODWORD(v18) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 534, ASSERT_TYPE_ASSERT, "(unsigned)( dataByteOffset ) < (unsigned)( msg->maxsize )", "dataByteOffset doesn't index msg->maxsize\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v10 = bitOffset - 8 * v9;
  if ( v10 > 0x3F )
  {
    LODWORD(v19) = 63;
    LODWORD(v18) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 537, ASSERT_TYPE_ASSERT, "( dataBitOffset ) <= ( 63 )", "dataBitOffset not in [0, 63]\n\t%u not in [0, %u]", v18, v19) )
      __debugbreak();
  }
  v11 = bitCount;
  if ( bitCount > 64 - v10 )
    v11 = 64 - v10;
  if ( v11 - 1 > 0x3F )
  {
    LODWORD(v19) = 1;
    LODWORD(v18) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 540, ASSERT_TYPE_ASSERT, "( 1 ) <= ( dataBitCount ) && ( dataBitCount ) <= ( 64 )", "dataBitCount not in [1, 64]\n\t%i not in [%i, %i]", v18, v19, 64) )
      __debugbreak();
  }
  if ( v11 >= 0x40 )
    v12 = -1i64;
  else
    v12 = (1i64 << v11) - 1;
  v13 = v12 << v10;
  v14 = value & ~(-1i64 << bitCount);
  v15 = v14 << v10;
  if ( (v15 & ~v13) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 545, ASSERT_TYPE_ASSERT, "(MSG_AndNot( writeValue << dataBitOffset, writeMask ) == 0)", (const char *)&queryFormat, "MSG_AndNot( writeValue << dataBitOffset, writeMask ) == 0") )
    __debugbreak();
  *(_QWORD *)&msg->data[v9] = v15 | *(_QWORD *)&msg->data[v9] & ~v13;
  if ( v11 < bitCount )
  {
    v16 = bitCount - v11;
    if ( v16 >= 8 )
    {
      LODWORD(v20) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 553, ASSERT_TYPE_ASSERT, "( highBitsCount ) < ( 8 )", "%s < %s\n\t%i, %i", "highBitsCount", "8", v20, 8) )
        __debugbreak();
    }
    v17 = v9 + 8;
    if ( v17 >= msg->maxsize )
    {
      LODWORD(v19) = msg->maxsize;
      LODWORD(v18) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 556, ASSERT_TYPE_ASSERT, "(unsigned)( dataByteOffset ) < (unsigned)( msg->maxsize )", "dataByteOffset doesn't index msg->maxsize\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    msg->data[v17] = (v14 >> v11) | msg->data[v17] & (-1 << v16);
  }
}

/*
==============
MSG_WriteBitsInternal
==============
*/
void MSG_WriteBitsInternal(msg_t *const msg, const unsigned int bitCount, const __int64 value)
{
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int maxsize; 
  __int64 v13; 
  int v14; 

  if ( msg->maxsize < 8u )
  {
    v14 = 8;
    maxsize = msg->maxsize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 334, ASSERT_TYPE_ASSERT, "( msg->maxsize ) >= ( sizeof( int64_t ) )", "%s >= %s\n\t%i, %i", "msg->maxsize", "sizeof( int64_t )", maxsize, v14) )
      __debugbreak();
  }
  v6 = msg->maxsize - 8;
  if ( msg->bit >> 3 < v6 )
    v6 = msg->bit >> 3;
  v7 = msg->bit - 8 * v6;
  if ( v7 > 0x3F )
  {
    LODWORD(v10) = 63;
    LODWORD(v9) = msg->bit - 8 * v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 338, ASSERT_TYPE_ASSERT, "( dataBitOffset ) <= ( 63 )", "dataBitOffset not in [0, 63]\n\t%u not in [0, %u]", v9, v10) )
      __debugbreak();
  }
  v8 = bitCount;
  if ( bitCount > 64 - v7 )
    v8 = 64 - v7;
  if ( v8 - 1 > 0x3F )
  {
    LODWORD(v11) = 64;
    LODWORD(v10) = 1;
    LODWORD(v9) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 341, ASSERT_TYPE_ASSERT, "( 1 ) <= ( dataBitCount ) && ( dataBitCount ) <= ( 64 )", "dataBitCount not in [1, 64]\n\t%i not in [%i, %i]", v9, v10, v11) )
      __debugbreak();
  }
  *(_QWORD *)&msg->data[v6] = (value << v7) | *(_QWORD *)&msg->data[v6] & ~(-1i64 << v7);
  if ( v8 < bitCount )
  {
    if ( bitCount - v8 >= 8 )
    {
      LODWORD(v13) = 8;
      LODWORD(v11) = bitCount - v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 348, ASSERT_TYPE_ASSERT, "( bitCount - dataBitCount ) < ( 8 )", "%s < %s\n\t%i, %i", "bitCount - dataBitCount", "8", v11, v13) )
        __debugbreak();
    }
    msg->data[v6 + 8] = value >> v8;
  }
  msg->bit += bitCount;
  msg->cursize = (msg->bit + 7) >> 3;
}

/*
==============
MSG_WriteBool
==============
*/
void MSG_WriteBool(msg_t *const msg, bool b)
{
  int bit; 
  int maxsize; 
  int v5; 
  int v6; 
  unsigned __int8 *v7; 
  int v8; 

  bit = msg->bit;
  maxsize = msg->maxsize;
  v5 = bit + 1;
  v6 = 8 * maxsize;
  if ( b )
  {
    if ( v5 <= v6 )
    {
      if ( msg->overflowed )
        return;
      v7 = &msg->data[bit >> 3];
      v8 = *v7 | (1 << (bit & 7));
      goto LABEL_9;
    }
LABEL_6:
    msg->overflowed = 1;
    return;
  }
  if ( v5 > v6 )
    goto LABEL_6;
  if ( msg->overflowed )
    return;
  v7 = &msg->data[bit >> 3];
  v8 = *v7 & ~(1 << (bit & 7));
LABEL_9:
  *v7 = v8;
  msg->cursize = (++msg->bit + 7) >> 3;
}

/*
==============
MSG_WriteByte
==============
*/
void MSG_WriteByte(msg_t *const msg, const __int64 value)
{
  int bit; 

  bit = msg->bit;
  if ( bit + 8 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      if ( (bit & 7) != 0 )
      {
        MSG_WriteBitsInternal(msg, 8u, (unsigned __int8)value);
      }
      else
      {
        msg->data[bit >> 3] = value;
        msg->bit += 8;
        ++msg->cursize;
      }
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteData
==============
*/
void MSG_WriteData(msg_t *const msg, const void *data, int length)
{
  size_t v3; 
  int bit; 
  size_t v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 

  v3 = length;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 836, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 837, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 838, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  bit = msg->bit;
  if ( bit + 8 * (int)v3 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      if ( (bit & 7) != 0 )
      {
        v7 = v3 >> 2;
        if ( (int)(v3 >> 2) > 0 )
        {
          v8 = (unsigned int)v7;
          do
          {
            MSG_WriteBitsInternal(msg, 0x20u, *(int *)data);
            data = (char *)data + 4;
            --v8;
          }
          while ( v8 );
        }
        v9 = v3 - 4 * v7;
        if ( v9 > 0 )
        {
          v10 = (unsigned int)v9;
          do
          {
            MSG_WriteBitsInternal(msg, 8u, *(unsigned __int8 *)data);
            data = (char *)data + 1;
            --v10;
          }
          while ( v10 );
        }
      }
      else
      {
        memcpy_0(&msg->data[bit >> 3], data, v3);
        msg->bit += 8 * v3;
        msg->cursize = (msg->bit + 7) >> 3;
      }
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteData_Compress
==============
*/
void MSG_WriteData_Compress(msg_t *const msg, const void *data, int length)
{
  int v6; 
  int v7; 
  int bit; 
  __int64 cursize; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 876, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 877, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  if ( msg->splitData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 878, ASSERT_TYPE_ASSERT, "(msg->splitData == nullptr)", (const char *)&queryFormat, "msg->splitData == nullptr") )
    __debugbreak();
  if ( msg->readOnly )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 879, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
      __debugbreak();
    if ( msg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 239, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
      __debugbreak();
  }
  msg->bit = 8 * msg->cursize;
  v6 = j_LZ4_compressBound(length);
  v7 = v6;
  if ( v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 887, ASSERT_TYPE_ASSERT, "( compressBound ) > ( 0 )", "%s > %s\n\t%i, %i", "compressBound", "0", v6, 0i64) )
    __debugbreak();
  bit = msg->bit;
  if ( bit + 8 * v7 + 32 > 8 * msg->maxsize )
    goto LABEL_27;
  if ( msg->overflowed )
    return;
  if ( bit != 8 * msg->cursize )
  {
    LODWORD(v13) = 8 * msg->cursize;
    LODWORD(v12) = msg->bit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 896, ASSERT_TYPE_ASSERT, "( msg->bit ) == ( msg->cursize << 3 )", "%s == %s\n\t%i, %i", "msg->bit", "msg->cursize << 3", v12, v13) )
      __debugbreak();
  }
  cursize = (unsigned int)msg->cursize;
  v10 = j_LZ4_compress_default((const char *)data, (char *)&msg->data[(unsigned int)(cursize + 4)], length, v7);
  v11 = v10;
  if ( v10 <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 904, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MSG_WriteData_Compress: Compression failed") )
      __debugbreak();
LABEL_27:
    msg->overflowed = 1;
    return;
  }
  if ( v10 > v7 )
  {
    LODWORD(v13) = v7;
    LODWORD(v12) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 909, ASSERT_TYPE_ASSERT, "( writtenBytes ) <= ( compressBound )", "%s <= %s\n\t%i, %i", "writtenBytes", "compressBound", v12, v13) )
      __debugbreak();
  }
  *(_DWORD *)&msg->data[cursize] = v11;
  msg->cursize += v11 + 4;
  msg->bit = 8 * msg->cursize;
}

/*
==============
MSG_WriteDeltaPrimaryWeapon
==============
*/
void MSG_WriteDeltaPrimaryWeapon(msg_t *msg, const Weapon *from, const bool fromIsAlternate, const Weapon *to, const bool toIsAlternate)
{
  bool v8; 
  int bit; 
  int v10; 
  int v11; 
  unsigned __int8 *v12; 
  int v13; 
  int v14; 
  unsigned __int8 *v15; 
  int v16; 
  bool v17; 

  v8 = memcmp_0(from, to, 0x3Cui64) || fromIsAlternate != toIsAlternate;
  bit = msg->bit;
  v10 = 8 * msg->maxsize;
  v11 = bit + 1;
  if ( v8 )
  {
    if ( v11 <= v10 )
    {
      if ( !msg->overflowed )
      {
        v12 = &msg->data[bit >> 3];
        *v12 |= 1 << (bit & 7);
        msg->cursize = (++msg->bit + 7) >> 3;
      }
    }
    else
    {
      msg->overflowed = 1;
    }
    MSG_WriteWeapon(msg, to);
    bit = msg->bit;
    v13 = 8 * msg->maxsize;
    v14 = bit + 1;
    if ( toIsAlternate )
    {
      if ( v14 <= v13 )
      {
        if ( msg->overflowed )
          return;
        v15 = &msg->data[bit >> 3];
        v16 = *v15 | (1 << (bit & 7));
        goto LABEL_20;
      }
LABEL_17:
      msg->overflowed = 1;
      return;
    }
    v17 = v14 <= v13;
  }
  else
  {
    v17 = v11 <= v10;
  }
  if ( !v17 )
    goto LABEL_17;
  if ( msg->overflowed )
    return;
  v15 = &msg->data[bit >> 3];
  v16 = *v15 & ~(1 << (bit & 7));
LABEL_20:
  *v15 = v16;
  msg->cursize = (++msg->bit + 7) >> 3;
}

/*
==============
MSG_WriteDeltaWeapon
==============
*/
void MSG_WriteDeltaWeapon(msg_t *msg, const Weapon *from, const Weapon *to)
{
  int bit; 
  int v6; 
  int v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 

  bit = msg->bit;
  v6 = 8 * msg->maxsize;
  v7 = bit + 1;
  if ( !memcmp_0(from, to, 0x3Cui64) )
  {
    if ( v7 <= v6 )
    {
      if ( !msg->overflowed )
      {
        v8 = &msg->data[bit >> 3];
        *v8 &= ~(1 << (bit & 7));
        msg->cursize = (++msg->bit + 7) >> 3;
      }
    }
    else
    {
      msg->overflowed = 1;
    }
  }
  else
  {
    if ( v7 <= v6 )
    {
      if ( !msg->overflowed )
      {
        v9 = &msg->data[bit >> 3];
        *v9 |= 1 << (bit & 7);
        msg->cursize = (++msg->bit + 7) >> 3;
      }
    }
    else
    {
      msg->overflowed = 1;
    }
    MSG_WriteWeapon(msg, to);
  }
}

/*
==============
MSG_WriteExpGolomb0
==============
*/
void MSG_WriteExpGolomb0(msg_t *sb, unsigned int value)
{
  unsigned int v3; 
  signed int v4; 
  __int64 v5; 
  int bit; 
  int maxsize; 
  unsigned __int8 *v8; 
  int v9; 
  unsigned __int8 *v10; 

  v3 = value + 1;
  v4 = 32 - __lzcnt(value + 1);
  if ( v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1386, ASSERT_TYPE_ASSERT, "(bits > 0)", (const char *)&queryFormat, "bits > 0") )
    __debugbreak();
  v5 = (unsigned int)(v4 - 1);
  if ( (int)v5 > 0 )
  {
    do
    {
      bit = sb->bit;
      maxsize = sb->maxsize;
      if ( bit + 1 <= 8 * maxsize )
      {
        if ( !sb->overflowed )
        {
          v8 = &sb->data[bit >> 3];
          *v8 &= ~(1 << (bit & 7));
          bit = ++sb->bit;
          maxsize = sb->maxsize;
          sb->cursize = (bit + 7) >> 3;
        }
      }
      else
      {
        sb->overflowed = 1;
      }
      if ( bit + 1 <= 8 * maxsize )
      {
        if ( !sb->overflowed )
          MSG_WriteBitsInternal(sb, 1u, v3 & 1);
      }
      else
      {
        sb->overflowed = 1;
      }
      v3 >>= 1;
      --v5;
    }
    while ( v5 );
  }
  v9 = sb->bit;
  if ( v9 + 1 <= 8 * sb->maxsize )
  {
    if ( !sb->overflowed )
    {
      v10 = &sb->data[v9 >> 3];
      *v10 |= 1 << (v9 & 7);
      sb->cursize = (++sb->bit + 7) >> 3;
    }
  }
  else
  {
    sb->overflowed = 1;
  }
}

/*
==============
MSG_WriteExpGolomb
==============
*/
void MSG_WriteExpGolomb(msg_t *sb, unsigned int value, int kbits)
{
  MSG_WriteExpGolomb0(sb, value >> kbits);
  MSG_WriteBits(sb, value & ((1 << kbits) - 1), kbits);
}

/*
==============
MSG_WriteFloat
==============
*/

void __fastcall MSG_WriteFloat(msg_t *sb, double f)
{
  int bit; 
  int v4; 

  __asm { vmovss  [rsp+38h+arg_8], xmm1 }
  if ( v4 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1003, ASSERT_TYPE_ASSERT, "( dat.l != -1 )", (const char *)&queryFormat, "dat.l != -1") )
    __debugbreak();
  bit = sb->bit;
  if ( bit + 32 <= 8 * sb->maxsize )
  {
    if ( !sb->overflowed )
    {
      if ( (bit & 7) != 0 )
      {
        MSG_WriteBitsInternal(sb, 0x20u, v4);
      }
      else
      {
        *(_DWORD *)&sb->data[bit >> 3] = v4;
        sb->bit += 32;
        sb->cursize += 4;
      }
    }
  }
  else
  {
    sb->overflowed = 1;
  }
}

/*
==============
MSG_WriteInt64
==============
*/
void MSG_WriteInt64(msg_t *const msg, const unsigned __int64 value)
{
  int bit; 

  bit = msg->bit;
  if ( bit + 64 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      if ( (bit & 7) != 0 )
      {
        MSG_WriteBitsInternal(msg, 0x40u, value);
      }
      else
      {
        *(_QWORD *)&msg->data[bit >> 3] = value;
        msg->bit += 64;
        msg->cursize += 8;
      }
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteLong
==============
*/
void MSG_WriteLong(msg_t *const msg, const int value)
{
  int bit; 

  bit = msg->bit;
  if ( bit + 32 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      if ( (bit & 7) != 0 )
      {
        MSG_WriteBitsInternal(msg, 0x20u, value);
      }
      else
      {
        *(_DWORD *)&msg->data[bit >> 3] = value;
        msg->bit += 32;
        msg->cursize += 4;
      }
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteRangedFloatBits
==============
*/

void __fastcall MSG_WriteRangedFloatBits(msg_t *sb, double f, float begin, double end, int bits)
{
  int v16; 
  int v17; 

  __asm
  {
    vsubss  xmm0, xmm3, xmm2
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, eax
    vdivss  xmm3, xmm4, xmm0
    vsubss  xmm1, xmm1, xmm2
    vmulss  xmm2, xmm3, xmm1
    vaddss  xmm0, xmm2, cs:__real@3f000000
    vcvttss2si edi, xmm4
    vcvttss2si ebx, xmm0
  }
  if ( _EDI < 0 )
  {
    v17 = _EDI;
    v16 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v16, v17) )
      __debugbreak();
  }
  if ( _EDI < _EBX )
    _EBX = _EDI;
  if ( _EBX < 0 )
    _EBX = 0;
  MSG_WriteBits(sb, (unsigned int)_EBX, bits);
}

/*
==============
MSG_WriteRiceGolomb
==============
*/
void MSG_WriteRiceGolomb(msg_t *sb, unsigned int value, int mbits)
{
  unsigned int v4; 
  unsigned int v5; 
  int bit; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 

  v4 = value >> mbits;
  v5 = value & ((1 << mbits) - 1);
  if ( value >> mbits )
  {
    do
    {
      bit = sb->bit;
      if ( bit + 1 <= 8 * sb->maxsize )
      {
        if ( !sb->overflowed )
        {
          v7 = &sb->data[bit >> 3];
          *v7 |= 1 << (bit & 7);
          bit = sb->bit + 1;
          sb->bit = bit;
          sb->cursize = (bit + 7) >> 3;
        }
      }
      else
      {
        sb->overflowed = 1;
      }
      --v4;
    }
    while ( v4 );
  }
  else
  {
    bit = sb->bit;
  }
  if ( bit + 1 <= 8 * sb->maxsize )
  {
    if ( !sb->overflowed )
    {
      v8 = &sb->data[bit >> 3];
      *v8 &= ~(1 << (bit & 7));
      sb->cursize = (++sb->bit + 7) >> 3;
    }
  }
  else
  {
    sb->overflowed = 1;
  }
  MSG_WriteBits(sb, v5, mbits);
}

/*
==============
MSG_WriteShort
==============
*/
void MSG_WriteShort(msg_t *const msg, const int value)
{
  int bit; 

  bit = msg->bit;
  if ( bit + 16 <= 8 * msg->maxsize )
  {
    if ( !msg->overflowed )
    {
      if ( (bit & 7) != 0 )
      {
        MSG_WriteBitsInternal(msg, 0x10u, (__int16)value);
      }
      else
      {
        *(_WORD *)&msg->data[bit >> 3] = value;
        msg->bit += 16;
        msg->cursize += 2;
      }
    }
  }
  else
  {
    msg->overflowed = 1;
  }
}

/*
==============
MSG_WriteSignedExpGolomb0
==============
*/
void MSG_WriteSignedExpGolomb0(msg_t *sb, int value)
{
  int bit; 
  int v5; 
  int v6; 
  unsigned __int8 *v7; 
  int v8; 

  MSG_WriteExpGolomb0(sb, abs32(value));
  if ( value )
  {
    bit = sb->bit;
    v5 = 8 * sb->maxsize;
    v6 = bit + 1;
    if ( value >= 0 )
    {
      if ( v6 <= v5 )
      {
        if ( sb->overflowed )
          return;
        v7 = &sb->data[bit >> 3];
        v8 = *v7 & ~(1 << (bit & 7));
        goto LABEL_10;
      }
    }
    else if ( v6 <= v5 )
    {
      if ( sb->overflowed )
        return;
      v7 = &sb->data[bit >> 3];
      v8 = *v7 | (1 << (bit & 7));
LABEL_10:
      *v7 = v8;
      sb->cursize = (++sb->bit + 7) >> 3;
      return;
    }
    sb->overflowed = 1;
  }
}

/*
==============
MSG_WriteSignedExpGolomb
==============
*/
void MSG_WriteSignedExpGolomb(msg_t *sb, int value, int kbits)
{
  unsigned int v6; 
  int bit; 
  int v8; 
  int v9; 
  unsigned __int8 *v10; 
  int v11; 

  v6 = abs32(value);
  MSG_WriteExpGolomb0(sb, v6 >> kbits);
  MSG_WriteBits(sb, v6 & ((1 << kbits) - 1), kbits);
  if ( value )
  {
    bit = sb->bit;
    v8 = 8 * sb->maxsize;
    v9 = bit + 1;
    if ( value >= 0 )
    {
      if ( v9 <= v8 )
      {
        if ( sb->overflowed )
          return;
        v10 = &sb->data[bit >> 3];
        v11 = *v10 & ~(1 << (bit & 7));
        goto LABEL_10;
      }
    }
    else if ( v9 <= v8 )
    {
      if ( sb->overflowed )
        return;
      v10 = &sb->data[bit >> 3];
      v11 = *v10 | (1 << (bit & 7));
LABEL_10:
      *v10 = v11;
      sb->cursize = (++sb->bit + 7) >> 3;
      return;
    }
    sb->overflowed = 1;
  }
}

/*
==============
MSG_WriteSignedNonZeroExpGolomb0
==============
*/
void MSG_WriteSignedNonZeroExpGolomb0(msg_t *sb, int value)
{
  unsigned int v4; 
  int bit; 
  int v6; 
  int v7; 
  unsigned __int8 *v8; 
  int v9; 

  v4 = abs32(value);
  if ( ((value >> 31) ^ value) == value >> 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1440, ASSERT_TYPE_ASSERT, "(absValue > 0)", (const char *)&queryFormat, "absValue > 0") )
    __debugbreak();
  MSG_WriteExpGolomb0(sb, v4 - 1);
  bit = sb->bit;
  v6 = 8 * sb->maxsize;
  v7 = bit + 1;
  if ( value < 0 )
  {
    if ( v7 <= v6 )
    {
      if ( sb->overflowed )
        return;
      v8 = &sb->data[bit >> 3];
      v9 = *v8 | (1 << (bit & 7));
      goto LABEL_12;
    }
LABEL_9:
    sb->overflowed = 1;
    return;
  }
  if ( v7 > v6 )
    goto LABEL_9;
  if ( sb->overflowed )
    return;
  v8 = &sb->data[bit >> 3];
  v9 = *v8 & ~(1 << (bit & 7));
LABEL_12:
  *v8 = v9;
  sb->cursize = (++sb->bit + 7) >> 3;
}

/*
==============
MSG_WriteSignedNonZeroExpGolomb
==============
*/
void MSG_WriteSignedNonZeroExpGolomb(msg_t *sb, int value, int kbits)
{
  unsigned int v6; 
  unsigned int v7; 
  int bit; 
  int v9; 
  int v10; 
  unsigned __int8 *v11; 
  int v12; 

  v6 = abs32(value);
  if ( ((value >> 31) ^ value) == value >> 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1453, ASSERT_TYPE_ASSERT, "(absValue > 0)", (const char *)&queryFormat, "absValue > 0") )
    __debugbreak();
  v7 = v6 - 1;
  MSG_WriteExpGolomb0(sb, v7 >> kbits);
  MSG_WriteBits(sb, v7 & ((1 << kbits) - 1), kbits);
  bit = sb->bit;
  v9 = 8 * sb->maxsize;
  v10 = bit + 1;
  if ( value < 0 )
  {
    if ( v10 <= v9 )
    {
      if ( sb->overflowed )
        return;
      v11 = &sb->data[bit >> 3];
      v12 = *v11 | (1 << (bit & 7));
      goto LABEL_12;
    }
LABEL_9:
    sb->overflowed = 1;
    return;
  }
  if ( v10 > v9 )
    goto LABEL_9;
  if ( sb->overflowed )
    return;
  v11 = &sb->data[bit >> 3];
  v12 = *v11 & ~(1 << (bit & 7));
LABEL_12:
  *v11 = v12;
  sb->cursize = (++sb->bit + 7) >> 3;
}

/*
==============
MSG_WriteString
==============
*/
void MSG_WriteString(msg_t *const sb, const char *s)
{
  unsigned __int64 v4; 
  int v5; 
  const char *v6; 
  unsigned __int64 v7; 
  char dest[1024]; 

  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1061, ASSERT_TYPE_ASSERT, "( s )", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( sb->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1062, ASSERT_TYPE_ASSERT, "( !sb->readOnly )", (const char *)&queryFormat, "!sb->readOnly") )
    __debugbreak();
  v4 = -1i64;
  do
    ++v4;
  while ( s[v4] );
  if ( v4 < 0x400 )
  {
    v7 = v4 + 1;
    if ( (v4 + 1 > 0x7FFFFFFFFFFFFFFFi64 || v4 + 2147483649u > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v7, "unsigned", v7) )
      __debugbreak();
    v5 = v7;
    v6 = s;
  }
  else
  {
    Core_strncpy_truncate(dest, 0x400ui64, s, 0x380ui64);
    Com_PrintError(25, "MSG_WriteString: MAX_STRING_CHARS for \"%s...\"\n", dest);
    v5 = 1;
    v6 = "/0";
  }
  MSG_WriteData(sb, v6, v5);
}

/*
==============
MSG_WriteVec3
==============
*/
void MSG_WriteVec3(msg_t *sb, const vec3_t *v)
{
  int v2; 
  bool v3; 
  int bit; 
  __int64 v8; 
  __int64 v9; 
  int v10; 

  v2 = 0;
  v3 = 1;
  _RBP = v;
  do
  {
    if ( !v3 )
    {
      LODWORD(v9) = 3;
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vmovss  [rsp+68h+arg_10], xmm0
    }
    if ( v10 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1003, ASSERT_TYPE_ASSERT, "( dat.l != -1 )", (const char *)&queryFormat, "dat.l != -1") )
      __debugbreak();
    bit = sb->bit;
    if ( bit + 32 <= 8 * sb->maxsize )
    {
      if ( !sb->overflowed )
      {
        if ( (bit & 7) != 0 )
        {
          MSG_WriteBitsInternal(sb, 0x20u, v10);
        }
        else
        {
          *(_DWORD *)&sb->data[bit >> 3] = v10;
          sb->bit += 32;
          sb->cursize += 4;
        }
      }
    }
    else
    {
      sb->overflowed = 1;
    }
    ++v2;
    _RBP = (const vec3_t *)((char *)_RBP + 4);
    v3 = (unsigned int)v2 < 3;
  }
  while ( v2 < 3 );
}

/*
==============
MSG_WriteWeapon
==============
*/
void MSG_WriteWeapon(msg_t *msg, const Weapon *weapon)
{
  unsigned int BitsNeededForType; 
  const WeaponCompleteDef *v5; 
  __int64 weaponIdx; 
  const WeaponCompleteDef *v7; 
  unsigned int CamoCount; 
  signed int v9; 
  AttachmentSlot v10; 
  __int64 v11; 
  unsigned int *p_attachmentCount; 
  unsigned int v13; 
  signed int v14; 
  unsigned __int16 PrimaryAttachmentIndex; 
  int bit; 
  int v17; 
  int v18; 
  unsigned __int8 *v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  unsigned int v22; 
  signed int attachmentCount; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 
  unsigned __int8 *v27; 
  int v28; 
  int v29; 
  unsigned __int8 *v30; 
  unsigned __int8 *v31; 
  unsigned __int16 *stickerIndices; 
  __int64 v33; 
  int v34; 
  unsigned __int16 v35; 
  int v36; 
  int v37; 
  unsigned __int8 *v38; 
  unsigned __int8 *v39; 
  unsigned int v40; 
  int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int AllWeaponAttachments; 
  WeaponAttachment **v45; 
  __int64 v46; 
  WeaponAttachment *v47; 
  unsigned int numReticles; 
  unsigned int v49; 
  msg_t *v50; 
  signed int v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  AttachmentSlot slot; 
  const WeaponCompleteDef *v56; 
  msg_t *msga; 
  WeaponAttachment *attachments[30]; 

  msga = msg;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1184, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  BitsNeededForType = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_WEAPON);
  if ( weapon->weaponIdx < BG_GetNumWeapons() )
  {
    v5 = BG_WeaponCompleteDef(weapon, 0);
    weaponIdx = weapon->weaponIdx;
    v56 = v5;
    v7 = v5;
    MSG_WriteBits(msg, weaponIdx, BitsNeededForType);
    CamoCount = BG_Camo_GetCamoCount();
    if ( CamoCount && BG_WeaponCanAcceptCamo(weapon) )
    {
      v9 = 32 - __lzcnt(CamoCount);
      if ( v9 < 1 || (unsigned int)v9 > 8 )
      {
        LODWORD(v52) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1204, ASSERT_TYPE_ASSERT, "( 1 ) <= ( camoBitCount ) && ( camoBitCount ) <= ( sizeof( weapon.weaponCamo ) * 8 )", "camoBitCount not in [1, sizeof( weapon.weaponCamo ) * 8]\n\t%i not in [%i, %i]", v52, 1, 8) )
          __debugbreak();
      }
      MSG_WriteBits(msg, weapon->weaponCamo, v9);
    }
    else if ( weapon->weaponCamo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1213, ASSERT_TYPE_ASSERT, "(weapon.weaponCamo == 0)", (const char *)&queryFormat, "weapon.weaponCamo == 0") )
    {
      __debugbreak();
    }
    v10 = ATT_SLOT_RECEIVER;
    v11 = 0i64;
    p_attachmentCount = &v7->attachments[0].attachmentCount;
    do
    {
      v13 = *p_attachmentCount;
      if ( *p_attachmentCount )
      {
        slot = v10;
        v14 = 32 - __lzcnt(v13);
        if ( v14 < 1 || v14 > (int)Com_GetWeaponPrimaryAttachmentSlotSize(&slot) )
        {
          LODWORD(v54) = Com_GetWeaponPrimaryAttachmentSlotSize(&slot);
          LODWORD(v53) = 1;
          LODWORD(v52) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1223, ASSERT_TYPE_ASSERT, "( 1 ) <= ( attListBitCount ) && ( attListBitCount ) <= ( static_cast<int>( Com_GetWeaponPrimaryAttachmentSlotSize( slot ) ) )", "attListBitCount not in [1, static_cast<int>( Com_GetWeaponPrimaryAttachmentSlotSize( slot ) )]\n\t%i not in [%i, %i]", v52, v53, v54) )
            __debugbreak();
        }
        PrimaryAttachmentIndex = BG_Weapon_GetPrimaryAttachmentIndex(weapon, &slot);
        MSG_WriteBits(msg, PrimaryAttachmentIndex, v14);
        bit = msg->bit;
        v17 = 8 * msg->maxsize;
        v18 = bit + 1;
        if ( weapon->attachmentVariationIndices[v11] )
        {
          if ( v18 <= v17 )
          {
            if ( !msg->overflowed )
            {
              v20 = &msg->data[bit >> 3];
              *v20 |= 1 << (bit & 7);
              msg->cursize = (++msg->bit + 7) >> 3;
            }
          }
          else
          {
            msg->overflowed = 1;
          }
          MSG_WriteBits(msg, weapon->attachmentVariationIndices[v11], 32 - __lzcnt(0xFu));
        }
        else if ( v18 <= v17 )
        {
          if ( !msg->overflowed )
          {
            v19 = &msg->data[bit >> 3];
            *v19 &= ~(1 << (bit & 7));
            msg->cursize = (++msg->bit + 7) >> 3;
          }
        }
        else
        {
          msg->overflowed = 1;
        }
      }
      ++v10;
      ++v11;
      p_attachmentCount += 4;
    }
    while ( (unsigned int)v10 < ATT_SLOT_OTHER );
    v21 = (__int64)v56;
    v22 = 0;
    attachmentCount = v56->attachments[13].attachmentCount;
    if ( attachmentCount )
    {
      if ( attachmentCount < 1 || (unsigned int)attachmentCount > 0x10 )
      {
        LODWORD(v54) = 16;
        LODWORD(v53) = 1;
        LODWORD(v52) = v56->attachments[13].attachmentCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1245, ASSERT_TYPE_ASSERT, "( 1 ) <= ( otherBitCount ) && ( otherBitCount ) <= ( sizeof( weapon.weaponOthers ) * 8 )", "otherBitCount not in [1, sizeof( weapon.weaponOthers ) * 8]\n\t%i not in [%i, %i]", v52, v53, v54) )
          __debugbreak();
      }
      MSG_WriteBits(msg, weapon->weaponOthers, attachmentCount);
      v24 = 0;
      if ( *(_DWORD *)(v21 + 248) )
      {
        do
        {
          if ( v24 >= 0x10 )
          {
            LODWORD(v53) = 16;
            LODWORD(v52) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v52, v53) )
              __debugbreak();
          }
          v25 = v24 + 13;
          if ( v24 + 13 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(v24 + 13), "unsigned", v25) )
            __debugbreak();
          if ( (unsigned __int8)v25 >= 0x1Du )
          {
            LODWORD(v53) = 29;
            LODWORD(v52) = (unsigned __int8)(v24 + 13);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1252, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentId ) < (unsigned)( WEAPON_ATTACHMENT_ID_COUNT )", "attachmentId doesn't index WEAPON_ATTACHMENT_ID_COUNT\n\t%i not in [0, %i)", v52, v53) )
              __debugbreak();
          }
          v26 = msg->bit;
          v27 = &weapon->attachmentVariationIndices[(unsigned __int8)v25];
          v28 = 8 * msg->maxsize;
          v29 = v26 + 1;
          if ( *v27 )
          {
            if ( v29 <= v28 )
            {
              if ( !msg->overflowed )
              {
                v31 = &msg->data[v26 >> 3];
                *v31 |= 1 << (v26 & 7);
                msg->cursize = (++msg->bit + 7) >> 3;
              }
            }
            else
            {
              msg->overflowed = 1;
            }
            MSG_WriteBits(msg, *v27, 32 - __lzcnt(0xFu));
          }
          else if ( v29 <= v28 )
          {
            if ( !msg->overflowed )
            {
              v30 = &msg->data[v26 >> 3];
              *v30 &= ~(1 << (v26 & 7));
              msg->cursize = (++msg->bit + 7) >> 3;
            }
          }
          else
          {
            msg->overflowed = 1;
          }
          ++v24;
        }
        while ( v24 < *(_DWORD *)(v21 + 248) );
        v22 = 0;
      }
    }
    stickerIndices = weapon->stickerIndices;
    v33 = 4i64;
    do
    {
      v34 = msg->bit;
      v35 = *stickerIndices;
      v36 = 8 * msg->maxsize;
      v37 = v34 + 1;
      if ( *stickerIndices )
      {
        if ( v37 <= v36 )
        {
          if ( !msg->overflowed )
          {
            v39 = &msg->data[v34 >> 3];
            *v39 |= 1 << (v34 & 7);
            msg->cursize = (++msg->bit + 7) >> 3;
          }
        }
        else
        {
          msg->overflowed = 1;
        }
        v40 = NetConstStrings_GetBitsNeededForType(NETCONSTSTRINGTYPE_STICKER);
        MSG_WriteBits(msg, v35, v40);
      }
      else if ( v37 <= v36 )
      {
        if ( !msg->overflowed )
        {
          v38 = &msg->data[v34 >> 3];
          *v38 &= ~(1 << (v34 & 7));
          msg->cursize = (++msg->bit + 7) >> 3;
        }
      }
      else
      {
        msg->overflowed = 1;
      }
      ++stickerIndices;
      --v33;
    }
    while ( v33 );
    v41 = *(_DWORD *)(v21 + 264);
    if ( v41 )
    {
      v42 = __lzcnt(v41 + 1);
      v43 = 32 - v42;
      if ( (int)(32 - v42) < 1 || v43 > 8 )
      {
        LODWORD(v54) = 8;
        LODWORD(v53) = 1;
        LODWORD(v52) = 32 - v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1288, ASSERT_TYPE_ASSERT, "( 1 ) <= ( lootVariantBitCount ) && ( lootVariantBitCount ) <= ( sizeof( weapon.weaponLootId ) * 8 )", "lootVariantBitCount not in [1, sizeof( weapon.weaponLootId ) * 8]\n\t%i not in [%i, %i]", v52, v53, v54) )
          __debugbreak();
      }
      MSG_WriteBits(msg, weapon->weaponLootId, v43);
    }
    AllWeaponAttachments = BG_GetAllWeaponAttachments(weapon, (const WeaponAttachment **)attachments);
    if ( AllWeaponAttachments )
    {
      v45 = attachments;
      v46 = AllWeaponAttachments;
      do
      {
        v47 = *v45;
        if ( !*v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1298, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
          __debugbreak();
        numReticles = v47->numReticles;
        if ( numReticles )
        {
          if ( weapon->scopeVariation >= numReticles )
          {
            LODWORD(v53) = v47->numReticles;
            LODWORD(v52) = weapon->scopeVariation;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1303, ASSERT_TYPE_ASSERT, "(unsigned)( weapon.scopeVariation ) < (unsigned)( attachment->numReticles )", "weapon.scopeVariation doesn't index attachment->numReticles\n\t%i not in [0, %i)", v52, v53) )
              __debugbreak();
          }
          v49 = v47->numReticles;
          if ( v22 > v49 )
            v49 = v22;
          v22 = v49;
        }
        ++v45;
        --v46;
      }
      while ( v46 );
      v50 = msga;
      if ( v22 > 1 )
      {
        v51 = 32 - __lzcnt(v22 - 1);
        if ( v51 < 1 || (unsigned int)v51 > 8 )
        {
          LODWORD(v54) = 8;
          LODWORD(v53) = 1;
          LODWORD(v52) = v51;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1311, ASSERT_TYPE_ASSERT, "( 1 ) <= ( reticleBitCount ) && ( reticleBitCount ) <= ( sizeof( weapon.scopeVariation ) * 8 )", "reticleBitCount not in [1, sizeof( weapon.scopeVariation ) * 8]\n\t%i not in [%i, %i]", v52, v53, v54) )
            __debugbreak();
        }
        MSG_WriteBits(v50, weapon->scopeVariation, v51);
      }
    }
    if ( weapon->weaponClientLoadout )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.cpp", 1320, ASSERT_TYPE_ASSERT, "(weapon.weaponClientLoadout == 0)", (const char *)&queryFormat, "weapon.weaponClientLoadout == 0") )
        __debugbreak();
    }
  }
  else
  {
    MSG_WriteBits(msg, 0i64, BitsNeededForType);
  }
}

