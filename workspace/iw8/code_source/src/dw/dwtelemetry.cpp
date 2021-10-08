/*
==============
TelemetrySerializer::TagFromName
==============
*/

unsigned int __fastcall TelemetrySerializer::TagFromName(TelemetrySerializer *this, const char *name, DDLState *outState)
{
  return ?TagFromName@TelemetrySerializer@@QEAAIPEBDPEAUDDLState@@@Z(this, name, outState);
}

/*
==============
TelemetryMessage::GenerateIdentifier
==============
*/

bool __fastcall TelemetryMessage::GenerateIdentifier(const char *name, const DDLDef *definition, char *out, unsigned int len)
{
  return ?GenerateIdentifier@TelemetryMessage@@SA_NPEBDPEBUDDLDef@@PEADI@Z(name, definition, out, len);
}

/*
==============
TelemetrySerializer::Reset
==============
*/

void __fastcall TelemetrySerializer::Reset(TelemetrySerializer *this, const DDLState *schema, unsigned __int8 *data, unsigned __int64 len)
{
  ?Reset@TelemetrySerializer@@AEAAXAEBUDDLState@@PEAE_K@Z(this, schema, data, len);
}

/*
==============
TelemetrySerializer::CloseStruct
==============
*/

bool __fastcall TelemetrySerializer::CloseStruct(TelemetrySerializer *this, TelemetrySerializer *structure)
{
  return ?CloseStruct@TelemetrySerializer@@QEAA_NPEAV1@@Z(this, structure);
}

/*
==============
TelemetrySerializer::TagFromNameByHash
==============
*/

unsigned int __fastcall TelemetrySerializer::TagFromNameByHash(TelemetrySerializer *this, const unsigned int hashName, DDLState *outState)
{
  return ?TagFromNameByHash@TelemetrySerializer@@QEAAIIPEAUDDLState@@@Z(this, hashName, outState);
}

/*
==============
SummarizeStructure
==============
*/

void __fastcall SummarizeStructure(const DDLDef *const schema, const char *message, StructureSummary *outSummary)
{
  ?SummarizeStructure@@YAXQEBUDDLDef@@PEBDPEAUStructureSummary@@@Z(schema, message, outSummary);
}

/*
==============
TelemetrySerializer::OpenStructByTag
==============
*/

TelemetrySerializer *__fastcall TelemetrySerializer::OpenStructByTag(TelemetrySerializer *this, TelemetrySerializer *result, unsigned int tag)
{
  return ?OpenStructByTag@TelemetrySerializer@@QEAA?AV1@I@Z(this, result, tag);
}

/*
==============
TelemetryMessage::Open
==============
*/

TelemetrySerializer *__fastcall TelemetryMessage::Open(TelemetryMessage *this, TelemetrySerializer *result, const char *name, const DDLDef *definition, const char *identifier, const bool exportSchema, unsigned __int8 *out, unsigned __int64 len)
{
  return ?Open@TelemetryMessage@@QEAA?AVTelemetrySerializer@@PEBDPEBUDDLDef@@0_NPEAE_K@Z(this, result, name, definition, identifier, exportSchema, out, len);
}

/*
==============
TelemetrySerializer::TelemetrySerializer
==============
*/

void __fastcall TelemetrySerializer::TelemetrySerializer(TelemetrySerializer *this, const ProtoBufSerializer *base, const DDLState *root)
{
  ??0TelemetrySerializer@@AEAA@AEBVProtoBufSerializer@@AEBUDDLState@@@Z(this, base, root);
}

/*
==============
TelemetrySerializer::WriteState
==============
*/

bool __fastcall TelemetrySerializer::WriteState(TelemetrySerializer *this, const char *memberName, const DDLState *state, const DDLContext *context)
{
  return ?WriteState@TelemetrySerializer@@QEAA_NPEBDAEBUDDLState@@PEBUDDLContext@@@Z(this, memberName, state, context);
}

/*
==============
TelemetryMessage::GenerateProtoSchema
==============
*/

unsigned int __fastcall TelemetryMessage::GenerateProtoSchema(const char *name, const DDLDef *definition, char *out, unsigned int len)
{
  return ?GenerateProtoSchema@TelemetryMessage@@SAIPEBDPEBUDDLDef@@PEADI@Z(name, definition, out, len);
}

/*
==============
TelemetrySerializer::TagFromName
==============
*/

unsigned int __fastcall TelemetrySerializer::TagFromName(TelemetrySerializer *this, const char *name)
{
  return ?TagFromName@TelemetrySerializer@@QEAAIPEBD@Z(this, name);
}

/*
==============
TelemetrySerializer::TagFromNameByHash
==============
*/

unsigned int __fastcall TelemetrySerializer::TagFromNameByHash(TelemetrySerializer *this, const unsigned int hashName)
{
  return ?TagFromNameByHash@TelemetrySerializer@@QEAAII@Z(this, hashName);
}

/*
==============
TelemetrySerializer::WriteStateByHash
==============
*/

bool __fastcall TelemetrySerializer::WriteStateByHash(TelemetrySerializer *this, const unsigned int hashName, const DDLState *state, const DDLContext *context)
{
  return ?WriteStateByHash@TelemetrySerializer@@QEAA_NIAEBUDDLState@@PEBUDDLContext@@@Z(this, hashName, state, context);
}

/*
==============
TextWriter::Write
==============
*/

int TextWriter::Write(TextWriter *this, const char *format, ...)
{
  return ?Write@TextWriter@@QEAAHPEBDZZ(this, format);
}

/*
==============
TelemetryMessage::Close
==============
*/

bool __fastcall TelemetryMessage::Close(TelemetryMessage *this, TelemetrySerializer *structure)
{
  return ?Close@TelemetryMessage@@QEAA_NPEAVTelemetrySerializer@@@Z(this, structure);
}

/*
==============
TelemetrySerializer::OpenStructByHash
==============
*/

TelemetrySerializer *__fastcall TelemetrySerializer::OpenStructByHash(TelemetrySerializer *this, TelemetrySerializer *result, const unsigned int hash)
{
  return ?OpenStructByHash@TelemetrySerializer@@QEAA?AV1@I@Z(this, result, hash);
}

/*
==============
TelemetrySerializer::OpenStruct
==============
*/

TelemetrySerializer *__fastcall TelemetrySerializer::OpenStruct(TelemetrySerializer *this, TelemetrySerializer *result, const char *name)
{
  return ?OpenStruct@TelemetrySerializer@@QEAA?AV1@PEBD@Z(this, result, name);
}

/*
==============
TelemetrySerializer::TelemetrySerializer
==============
*/
void TelemetrySerializer::TelemetrySerializer(TelemetrySerializer *this, const ProtoBufSerializer *base, const DDLState *root)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rdx+20h]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rdx+30h]
    vmovsd  qword ptr [rcx+30h], xmm0
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rcx+38h], ymm0
  }
}

/*
==============
TelemetryMessage::Close
==============
*/

bool __fastcall TelemetryMessage::Close(TelemetryMessage *this, TelemetrySerializer *structure)
{
  return TelemetrySerializer::CloseStruct(&this->m_writer, structure);
}

/*
==============
TelemetrySerializer::CloseStruct
==============
*/
bool TelemetrySerializer::CloseStruct(TelemetrySerializer *this, TelemetrySerializer *structure)
{
  unsigned __int8 *m_buffer; 
  unsigned __int64 v5; 
  bool result; 

  if ( !structure )
    return 0;
  m_buffer = structure->m_buffer;
  if ( this->m_structPtr != m_buffer )
    return 0;
  v5 = structure->m_currentPtr - m_buffer;
  ProtoBufSerializer::EncodeVarInt(this, v5);
  memmove_0(this->m_currentPtr, structure->m_buffer, v5);
  result = 1;
  this->m_currentPtr += v5;
  this->m_structPtr = NULL;
  structure->m_structPtr = NULL;
  structure->m_currentPtr = NULL;
  structure->m_buffer = NULL;
  structure->m_real_len = 0i64;
  return result;
}

/*
==============
TelemetryMessage::GenerateIdentifier
==============
*/
char TelemetryMessage::GenerateIdentifier(const char *name, const DDLDef *definition, char *out, unsigned int len)
{
  __int64 v9; 
  char *fmt; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  TextWriter md; 
  Hash_state v37; 
  unsigned __int8 outa[8]; 
  __int64 v39; 

  *(_QWORD *)outa = 0i64;
  v39 = 0i64;
  if ( out && len >= 0x21 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    md.m_end = NULL;
    __asm { vmovdqu [rbp+340h+var_210], xmm0 }
    if ( j_md5_init(&md.m_state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 177, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result") )
      __debugbreak();
    WriteProtoFromDef(&md, "com.activision.ds.protobuf", definition, name, 0);
    _RCX = &v37;
    v9 = 3i64;
    _RAX = &md;
    do
    {
      _RCX = (Hash_state *)((char *)_RCX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (TextWriter *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v9;
    }
    while ( v9 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
    }
    if ( j_md5_done(&v37, outa) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 234, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result") )
        __debugbreak();
    }
    v32 = HIBYTE(v39);
    v31 = BYTE6(v39);
    v30 = BYTE5(v39);
    v29 = BYTE4(v39);
    v28 = BYTE3(v39);
    v27 = BYTE2(v39);
    v26 = BYTE1(v39);
    v25 = (unsigned __int8)v39;
    v24 = outa[7];
    v23 = outa[6];
    v22 = outa[5];
    v21 = outa[4];
    v20 = outa[3];
    LODWORD(v19) = outa[2];
    LODWORD(fmt) = outa[1];
    Com_sprintf(out, len, "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", outa[0], fmt, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32);
    Com_Printf(16, "Telemetry Id: '%s' = %s\n", name, out);
    return 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 719, ASSERT_TYPE_ASSERT, "(canGenerate)", (const char *)&queryFormat, "canGenerate") )
      __debugbreak();
    return 0;
  }
}

/*
==============
TelemetryMessage::GenerateProtoSchema
==============
*/
__int64 TelemetryMessage::GenerateProtoSchema(const char *name, const DDLDef *definition, char *out, unsigned int len)
{
  TextWriter md; 

  md.m_start = out;
  md.m_end = &out[len];
  md.m_writer = out;
  if ( j_md5_init(&md.m_state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 188, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result") )
    __debugbreak();
  if ( md.m_writer )
    *md.m_writer = 0;
  WriteProtoFromDef(&md, "com.activision.ds.protobuf", definition, name, 0);
  return (unsigned int)(LODWORD(md.m_writer) - LODWORD(md.m_start));
}

/*
==============
TelemetryMessage::Open
==============
*/
TelemetrySerializer *TelemetryMessage::Open(TelemetryMessage *this, TelemetrySerializer *result, const char *name, const DDLDef *definition, const char *identifier, const bool exportSchema, unsigned __int8 *out, unsigned __int64 len)
{
  __int64 v13; 
  __int64 v14; 
  __int64 m_currentPtr; 
  __int64 v16; 
  signed __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  signed __int64 v20; 
  signed __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  signed __int64 v24; 
  signed __int64 v25; 
  unsigned __int8 *m_buffer; 
  int v27; 
  char *m_start; 
  __int64 v29; 
  signed __int64 v30; 
  unsigned __int8 *v32; 
  unsigned __int64 v33; 
  unsigned __int8 *v34; 
  unsigned __int8 *v35; 
  unsigned __int64 v36; 
  DDLDef *schema; 
  _BYTE v44[48]; 
  _QWORD resulta[6]; 
  TextWriter md; 
  char Src[16]; 
  char dest[64]; 

  _RBX = this;
  schema = (DDLDef *)definition;
  DDL_GetRootState((DDLState *)&resulta[1], definition);
  Com_sprintf(dest, 0x40ui64, "%s.%s", "iw8", name);
  Com_sprintf(Src, 0x10ui64, "%d", definition->version);
  if ( out && len )
  {
    _RBX->m_writer.m_buffer = out;
    _RBX->m_writer.m_currentPtr = out;
    _RBX->m_writer.m_real_len = len;
    _RBX->m_writer.m_len_minus_buffer = len;
    _RBX->m_writer.m_rollbackPtr = NULL;
    _RBX->m_writer.m_optional_buffer_to_leave = 0;
  }
  __asm { vmovups ymm0, ymmword ptr [rsp+2F0h+result+8] }
  v13 = -1i64;
  __asm { vmovups ymmword ptr [rbx+38h], ymm0 }
  v14 = -1i64;
  do
    ++v14;
  while ( dest[v14] );
  m_currentPtr = (__int64)_RBX->m_writer.m_currentPtr;
  v16 = (unsigned int)v14;
  if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0xAui64) )
  {
    v17 = _RBX->m_writer.m_currentPtr - _RBX->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, (unsigned int)v16) )
    {
      if ( v17 + v16 > _RBX->m_writer.m_len_minus_buffer )
      {
        _RBX->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(_RBX->m_writer.m_currentPtr, dest, (unsigned int)v16);
        m_currentPtr = (__int64)&_RBX->m_writer.m_currentPtr[v16];
      }
    }
  }
  _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  v18 = -1i64;
  do
    ++v18;
  while ( name[v18] );
  v19 = (unsigned int)v18;
  if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0x22ui64) )
  {
    v20 = _RBX->m_writer.m_currentPtr - _RBX->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, (unsigned int)v19) )
    {
      if ( v20 + v19 > _RBX->m_writer.m_len_minus_buffer )
      {
        _RBX->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(_RBX->m_writer.m_currentPtr, name, (unsigned int)v19);
        m_currentPtr = (__int64)&_RBX->m_writer.m_currentPtr[v19];
      }
    }
  }
  _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0x32ui64) )
  {
    v21 = _RBX->m_writer.m_currentPtr - _RBX->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 3ui64) )
    {
      if ( v21 + 3 > _RBX->m_writer.m_len_minus_buffer )
      {
        _RBX->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(_RBX->m_writer.m_currentPtr, "iw8", 3ui64);
        m_currentPtr = (__int64)(_RBX->m_writer.m_currentPtr + 3);
      }
    }
  }
  _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  v22 = -1i64;
  do
    ++v22;
  while ( identifier[v22] );
  v23 = (unsigned int)v22;
  if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0x3Aui64) )
  {
    v24 = _RBX->m_writer.m_currentPtr - _RBX->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, (unsigned int)v23) )
    {
      if ( v24 + v23 > _RBX->m_writer.m_len_minus_buffer )
      {
        _RBX->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(_RBX->m_writer.m_currentPtr, identifier, (unsigned int)v23);
        m_currentPtr = (__int64)&_RBX->m_writer.m_currentPtr[v23];
      }
    }
  }
  _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  do
    ++v13;
  while ( Src[v13] );
  if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0x42ui64) )
  {
    v25 = _RBX->m_writer.m_currentPtr - _RBX->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, (unsigned int)v13) )
    {
      if ( v25 + (unsigned __int64)(unsigned int)v13 > _RBX->m_writer.m_len_minus_buffer )
      {
        _RBX->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(_RBX->m_writer.m_currentPtr, Src, (unsigned int)v13);
        m_currentPtr = (__int64)&_RBX->m_writer.m_currentPtr[(unsigned int)v13];
      }
    }
  }
  _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  if ( exportSchema )
  {
    m_buffer = _RBX->m_writer.m_buffer;
    v27 = LODWORD(_RBX->m_writer.m_real_len) - LODWORD(_RBX->m_writer.m_currentPtr);
    md.m_start = (char *)&out[m_currentPtr - (_QWORD)m_buffer + 10];
    md.m_writer = md.m_start;
    md.m_end = &md.m_start[v27 + (_DWORD)m_buffer - 10];
    if ( j_md5_init(&md.m_state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 188, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result", schema) )
      __debugbreak();
    if ( md.m_writer )
      *md.m_writer = 0;
    WriteProtoFromDef(&md, "com.activision.ds.protobuf", schema, name, 0);
    m_start = md.m_start;
    m_currentPtr = (__int64)_RBX->m_writer.m_currentPtr;
    v29 = (unsigned int)(LODWORD(md.m_writer) - LODWORD(md.m_start));
    if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0x12ui64) )
    {
      v30 = _RBX->m_writer.m_currentPtr - _RBX->m_writer.m_buffer;
      if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, (unsigned int)v29) )
      {
        if ( v30 + v29 > _RBX->m_writer.m_len_minus_buffer )
        {
          _RBX->m_writer.m_overflowed = 1;
        }
        else
        {
          memmove_0(_RBX->m_writer.m_currentPtr, m_start, (unsigned int)v29);
          m_currentPtr = (__int64)&_RBX->m_writer.m_currentPtr[v29];
        }
      }
    }
    _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_QWORD *)v44 = 0i64;
  *(_QWORD *)&v44[8] = 0i64;
  v44[20] = 0;
  __asm { vmovdqu xmmword ptr [rsp+58h], xmm0 }
  *(_QWORD *)&v44[40] = 0i64;
  if ( ProtoBufSerializer::EncodeVarInt(&_RBX->m_writer, 0x2Aui64) && (v32 = _RBX->m_writer.m_currentPtr, v33 = _RBX->m_writer.m_real_len + _RBX->m_writer.m_buffer - v32, v33 > 0xA) )
  {
    v34 = NULL;
    _RBX->m_writer.m_structPtr = v32 + 10;
    v35 = NULL;
    v36 = 0i64;
    if ( v32 != (unsigned __int8 *)-10i64 )
    {
      *(_QWORD *)&v44[40] = v32 + 10;
      v34 = v32 + 10;
      *(_QWORD *)&v44[32] = v32 + 10;
      v35 = v32 + 10;
      *(_QWORD *)v44 = v33 - 10;
      v36 = v33 - 10;
      *(_QWORD *)&v44[8] = v33 - 10;
      resulta[0] = 0i64;
      *(_DWORD *)&v44[16] = 0;
    }
    if ( v36 + v34 - v35 >= v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\proto\\online_protobuf_serialization.h", 230, ASSERT_TYPE_ASSERT, "(structure.GetRemainingSize() < GetRemainingSize())", (const char *)&queryFormat, "structure.GetRemainingSize() < GetRemainingSize()") )
      __debugbreak();
  }
  else
  {
    _RBX->m_writer.m_currentPtr = (unsigned __int8 *)m_currentPtr;
  }
  _RAX = result;
  __asm
  {
    vmovups ymm0, [rsp+2F0h+var_2B8+8]
    vmovups xmm1, [rsp+2F0h+var_290]
    vmovups ymmword ptr [rax], ymm0
    vmovsd  xmm0, [rsp+2F0h+result]
    vmovups xmmword ptr [rax+20h], xmm1
    vmovsd  qword ptr [rax+30h], xmm0
    vmovups ymm0, ymmword ptr [rbx+38h]
    vmovups ymmword ptr [rax+38h], ymm0
  }
  return _RAX;
}

/*
==============
TelemetrySerializer::OpenStruct
==============
*/
TelemetrySerializer *TelemetrySerializer::OpenStruct(TelemetrySerializer *this, TelemetrySerializer *result, const char *name)
{
  unsigned int v6; 
  int externalIndex; 
  DDLState toState; 
  ProtoBufSerializer resulta; 

  _RDI = result;
  v6 = DDL::DDL_HashString(name, 0);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  externalIndex = 0;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+88h+toState.member], xmm0 }
  if ( DDL_MoveToNameByHash(&this->m_rootState, &toState, v6, NULL) )
  {
    if ( toState.member )
      externalIndex = toState.member->externalIndex;
    externalIndex = (LODWORD(toState.member) - LODWORD(this->m_rootState.ddlDef->structList[externalIndex].members)) / 48 + 1;
  }
  _RAX = ProtoBufSerializer::OpenStruct(this, &resulta, externalIndex);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups ymmword ptr [rdi], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovups ymm1, ymmword ptr [rsp+88h+toState.isValid]
    vmovups ymmword ptr [rdi+38h], ymm1
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  return _RDI;
}

/*
==============
TelemetrySerializer::OpenStructByHash
==============
*/
TelemetrySerializer *TelemetrySerializer::OpenStructByHash(TelemetrySerializer *this, TelemetrySerializer *result, const unsigned int hash)
{
  int externalIndex; 
  DDLState v15; 
  ProtoBufSerializer resulta; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = result;
  v15.isValid = 0;
  v15.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  externalIndex = 0;
  v15.offset = 0;
  __asm { vmovdqu xmmword ptr [rax-58h], xmm0 }
  if ( DDL_MoveToNameByHash(&this->m_rootState, &v15, hash, NULL) )
  {
    if ( v15.member )
      externalIndex = v15.member->externalIndex;
    externalIndex = (LODWORD(v15.member) - LODWORD(this->m_rootState.ddlDef->structList[externalIndex].members)) / 48 + 1;
  }
  _RAX = ProtoBufSerializer::OpenStruct(this, &resulta, externalIndex);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups ymmword ptr [rdi], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovups ymm1, ymmword ptr [rsp+20h]
    vmovups ymmword ptr [rdi+38h], ymm1
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  return _RDI;
}

/*
==============
TelemetrySerializer::OpenStructByTag
==============
*/
TelemetrySerializer *TelemetrySerializer::OpenStructByTag(TelemetrySerializer *this, TelemetrySerializer *result, unsigned int tag)
{
  TelemetrySerializer *v10; 
  ProtoBufSerializer resulta; 

  _RDI = result;
  _RBX = this;
  _RAX = ProtoBufSerializer::OpenStruct(this, &resulta, tag);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups ymmword ptr [rdi], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  qword ptr [rdi+30h], xmm0
    vmovups ymm0, ymmword ptr [rbx+38h]
  }
  v10 = _RDI;
  __asm { vmovups ymmword ptr [rdi+38h], ymm0 }
  return v10;
}

/*
==============
TelemetrySerializer::Reset
==============
*/
void TelemetrySerializer::Reset(TelemetrySerializer *this, const DDLState *schema, unsigned __int8 *data, unsigned __int64 len)
{
  if ( data && len )
  {
    this->m_buffer = data;
    this->m_rollbackPtr = NULL;
    this->m_optional_buffer_to_leave = 0;
    this->m_currentPtr = data;
    this->m_real_len = len;
    this->m_len_minus_buffer = len;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx+38h], ymm0
  }
}

/*
==============
SerializeMember
==============
*/
void SerializeMember(TelemetrySerializer *writer, const DDLState *const focus, const DDLContext *const context, const DDLDef *const schema, const DDLMember *member, const int tag)
{
  signed __int8 Byte; 
  signed __int16 Short; 
  int Int; 
  unsigned int UInt; 
  unsigned __int64 UInt64; 
  unsigned __int8 *m_currentPtr; 
  unsigned __int8 *m_buffer; 
  char *v18; 
  const char *String; 
  __int64 v22; 
  size_t v30; 
  TelemetrySerializer writera; 
  ProtoBufSerializer result; 

  _RDI = writer;
  switch ( member->type )
  {
    case 0:
      Byte = DDL_GetByte(focus, context);
      ProtoBufSerializer::WriteInt64(_RDI, tag, Byte);
      return;
    case 1:
      Short = DDL_GetShort(focus, context);
      ProtoBufSerializer::WriteInt64(_RDI, tag, Short);
      return;
    case 2:
    case 0xA:
      UInt = DDL_GetUInt(focus, context);
      ProtoBufSerializer::WriteUInt32(_RDI, tag, UInt);
      return;
    case 3:
      Int = DDL_GetInt(focus, context);
      ProtoBufSerializer::WriteInt64(_RDI, tag, Int);
      return;
    case 4:
      UInt64 = DDL_GetUInt64(focus, context);
      m_currentPtr = _RDI->m_currentPtr;
      if ( !tag )
        goto LABEL_13;
      if ( !ProtoBufSerializer::EncodeVarInt(_RDI, (8i64 * (unsigned int)tag) | 1) )
        goto LABEL_13;
      m_buffer = _RDI->m_buffer;
      if ( !m_buffer )
        goto LABEL_13;
      v18 = (char *)_RDI->m_currentPtr;
      if ( !v18 )
        goto LABEL_13;
      if ( v18 - (char *)m_buffer + 8 > _RDI->m_len_minus_buffer )
      {
        _RDI->m_overflowed = 1;
LABEL_13:
        _RDI->m_currentPtr = m_currentPtr;
      }
      else
      {
        *(_QWORD *)v18 = UInt64;
        _RDI->m_currentPtr += 8;
      }
      return;
    case 6:
      *(double *)&_XMM0 = DDL_GetFloat(focus, context);
      __asm { vmovaps xmm2, xmm0; value }
      ProtoBufSerializer::WriteFloat32(_RDI, tag, *(float *)&_XMM2);
      return;
    case 7:
      *(double *)&_XMM0 = DDL_GetFixedPoint(focus, context);
      __asm { vmovaps xmm2, xmm0; value }
      ProtoBufSerializer::WriteFloat32(_RDI, tag, *(float *)&_XMM2);
      return;
    case 8:
      String = DDL_GetString(focus, context);
      v22 = -1i64;
      do
        ++v22;
      while ( String[v22] );
      ProtoBufSerializer::WriteString(_RDI, tag, String, (unsigned int)v22);
      return;
    case 9:
      _RAX = ProtoBufSerializer::OpenStruct(writer, &result, tag);
      __asm
      {
        vmovups ymm2, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0D8h+writer.baseclass_0.m_real_len], ymm2
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+0D8h+writer.baseclass_0.m_currentPtr], xmm0
        vmovsd  xmm1, qword ptr [rax+30h]
        vmovups ymm0, ymmword ptr [rdi+38h]
        vmovsd  [rsp+0D8h+writer.baseclass_0.m_rollbackPtr], xmm1
        vextractf128 xmm1, ymm2, 1
        vpextrq rax, xmm1, 1
        vmovups ymmword ptr [rsp+0D8h+writer.m_rootState.isValid], ymm0
      }
      if ( !_RAX )
      {
        if ( writera.m_currentPtr )
        {
          SerializeStruct(&writera, focus, context, schema, &schema->structList[member->externalIndex]);
          if ( _RDI->m_structPtr == writera.m_buffer )
          {
            v30 = writera.m_currentPtr - writera.m_buffer;
            ProtoBufSerializer::EncodeVarInt(_RDI, writera.m_currentPtr - writera.m_buffer);
            memmove_0(_RDI->m_currentPtr, writera.m_buffer, v30);
            _RDI->m_currentPtr += v30;
            _RDI->m_structPtr = NULL;
          }
        }
      }
      return;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 486, ASSERT_TYPE_ASSERT, "(!\"Unsupported DDL_TYPE\")", (const char *)&queryFormat, "!\"Unsupported DDL_TYPE\"") )
        __debugbreak();
      return;
  }
}

/*
==============
SerializeStruct
==============
*/
void SerializeStruct(TelemetrySerializer *writer, const DDLState *const focus, const DDLContext *const context, const DDLDef *const schema, const DDLStruct *message)
{
  const DDLStruct *v6; 
  const DDLState *v10; 
  bool v11; 
  __int64 v13; 
  int tag; 
  const DDLMember *member; 
  unsigned int v16; 
  int ArraySize; 
  unsigned __int64 v18; 
  unsigned __int8 *m_currentPtr; 
  unsigned __int8 *v20; 
  unsigned __int8 *v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  DDLState toState; 
  DDLState state; 

  v6 = message;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.isValid = 0;
  v10 = focus;
  toState.offset = 0;
  v11 = message->memberCount <= 0;
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0A8h+toState.member], xmm0 }
  if ( !v11 )
  {
    v13 = 0i64;
    tag = 1;
    v24 = 0i64;
    do
    {
      member = (DDLMember *)((char *)v6->members + v13);
      v16 = DDL::DDL_HashString(member->name, 0);
      if ( member->type != 11 && DDL_MoveToNameByHash(v10, &toState, v16, NULL) )
      {
        if ( toState.member->arraySize <= 1 )
        {
          SerializeMember(writer, &toState, context, schema, member, tag);
        }
        else
        {
          ArraySize = DDL_StateGetArraySize(&toState);
          __asm { vpxor   xmm0, xmm0, xmm0 }
          state.isValid = 0;
          state.offset = 0;
          state.arrayIndex = -1;
          __asm { vmovdqu xmmword ptr [rsp+0A8h+state.member], xmm0 }
          v18 = ArraySize;
          if ( toState.member->type )
          {
            v23 = 0;
            do
            {
              if ( v23 >= (int)v18 )
                break;
              if ( DDL_MoveToIndex(&toState, &state, v23) )
                SerializeMember(writer, &state, context, schema, member, tag);
              ++v23;
            }
            while ( toState.member );
          }
          else
          {
            m_currentPtr = writer->m_currentPtr;
            v20 = NULL;
            if ( tag )
            {
              if ( ProtoBufSerializer::EncodeVarInt(writer, (8i64 * (unsigned int)tag) | 2) && ProtoBufSerializer::EncodeVarInt(writer, v18) )
              {
                v21 = writer->m_currentPtr;
                if ( v18 < writer->m_real_len + writer->m_buffer - v21 )
                {
                  v20 = writer->m_currentPtr;
                  m_currentPtr = &v21[v18];
                }
              }
            }
            v22 = 0;
            writer->m_currentPtr = m_currentPtr;
            if ( v20 )
            {
              while ( toState.member && v22 < (int)v18 )
              {
                if ( DDL_MoveToIndex(&toState, &state, v22) )
                  *v20 = DDL_GetByte(&state, context);
                ++v22;
                ++v20;
              }
            }
          }
          v10 = focus;
        }
      }
      ++tag;
      v6 = message;
      v13 = v24 + 48;
      v24 += 48i64;
    }
    while ( tag <= message->memberCount );
  }
}

/*
==============
SummarizeStructure
==============
*/
void SummarizeStructure(const DDLDef *const schema, const char *message, StructureSummary *outSummary)
{
  int *discovered; 
  char *name; 
  char *v8; 
  char *v9; 
  char *v10; 
  char *v11; 
  char v12; 
  char *v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  DDLStruct *v19; 
  __int64 v20; 
  int *v21; 
  DDLMember *v22; 
  int type; 

  memset_0(&outSummary->sourceName, 0, 0xC8ui64);
  discovered = outSummary->discovered;
  outSummary->discovered[0] = -1;
  name = outSummary->name;
  *(_QWORD *)&outSummary->discovered[1] = -1i64;
  *(_QWORD *)&outSummary->discovered[3] = -1i64;
  *(_QWORD *)&outSummary->discovered[5] = -1i64;
  *(_QWORD *)&outSummary->discovered[7] = -1i64;
  *(_QWORD *)&outSummary->discovered[9] = -1i64;
  *(_QWORD *)&outSummary->discovered[11] = -1i64;
  *(_QWORD *)&outSummary->discovered[13] = -1i64;
  *(_QWORD *)&outSummary->discovered[15] = -1i64;
  *(_QWORD *)&outSummary->discovered[17] = -1i64;
  *(_QWORD *)&outSummary->discovered[19] = -1i64;
  *(_QWORD *)&outSummary->discovered[21] = -1i64;
  *(_QWORD *)&outSummary->discovered[23] = -1i64;
  *(_QWORD *)&outSummary->discovered[25] = -1i64;
  *(_QWORD *)&outSummary->discovered[27] = -1i64;
  *(_QWORD *)&outSummary->discovered[29] = -1i64;
  *(_QWORD *)&outSummary->discovered[31] = -1i64;
  *(_QWORD *)&outSummary->discovered[33] = -1i64;
  *(_QWORD *)&outSummary->discovered[35] = -1i64;
  *(_QWORD *)&outSummary->discovered[37] = -1i64;
  *(_QWORD *)&outSummary->discovered[39] = -1i64;
  *(_QWORD *)&outSummary->discovered[41] = -1i64;
  *(_QWORD *)&outSummary->discovered[43] = -1i64;
  *(_QWORD *)&outSummary->discovered[45] = -1i64;
  *(_QWORD *)&outSummary->discovered[47] = -1i64;
  *(_QWORD *)&outSummary->discovered[49] = -1i64;
  *(_QWORD *)&outSummary->discovered[51] = -1i64;
  *(_QWORD *)&outSummary->discovered[53] = -1i64;
  *(_QWORD *)&outSummary->discovered[55] = -1i64;
  *(_QWORD *)&outSummary->discovered[57] = -1i64;
  *(_QWORD *)&outSummary->discovered[59] = -1i64;
  *(_QWORD *)&outSummary->discovered[61] = -1i64;
  outSummary->discovered[63] = -1;
  outSummary->messageName = message;
  if ( schema )
  {
    outSummary->sourceName = schema->name;
    v8 = schema->name;
    v9 = strchr_0(schema->name, 0);
    v10 = strchr_0(v8, 46);
    if ( v9 != v10 )
      v9 = v10;
    v11 = v9;
    if ( v9 != v8 )
    {
      do
      {
        v12 = *(v11 - 1);
        v13 = v11 - 1;
        if ( v12 == 92 )
          break;
        if ( v12 == 47 )
          break;
        --v11;
      }
      while ( v13 != v8 );
    }
    v14 = (_DWORD)v9 - (_DWORD)v11;
    if ( outSummary != (StructureSummary *)-16i64 && v14 < 64 )
    {
      memcpy_0(outSummary->name, v11, v14);
      name[v14] = 0;
    }
  }
  else
  {
    outSummary->sourceName = name;
    strncpy(outSummary->name, message, 0x40ui64);
  }
  v15 = 0;
  *discovered = 0;
  v16 = 1i64;
  do
  {
    v17 = *discovered;
    if ( (int)v17 < 0 )
      break;
    v18 = 0;
    v19 = &schema->structList[v17];
    if ( v19->memberCount > 0 )
    {
      v20 = 0i64;
      v21 = &outSummary->discovered[v16];
      do
      {
        v22 = &v19->members[v20];
        type = v22->type;
        if ( type == 9 )
        {
          ++v16;
          *v21++ = v22->externalIndex;
          outSummary->structures[v22->externalIndex] = 1;
        }
        else if ( type == 10 )
        {
          outSummary->enumerations[v22->externalIndex] = 1;
        }
        ++v18;
        ++v20;
      }
      while ( v18 < v19->memberCount );
    }
    ++v15;
    ++discovered;
  }
  while ( v15 < 64 );
}

/*
==============
TelemetrySerializer::TagFromName
==============
*/
unsigned int TelemetrySerializer::TagFromName(TelemetrySerializer *this, const char *name)
{
  unsigned int v3; 

  v3 = DDL::DDL_HashString(name, 0);
  return TelemetrySerializer::TagFromNameByHash(this, v3, NULL);
}

/*
==============
TelemetrySerializer::TagFromName
==============
*/
unsigned int TelemetrySerializer::TagFromName(TelemetrySerializer *this, const char *name, DDLState *outState)
{
  unsigned int v5; 

  v5 = DDL::DDL_HashString(name, 0);
  return TelemetrySerializer::TagFromNameByHash(this, v5, outState);
}

/*
==============
TelemetrySerializer::TagFromNameByHash
==============
*/
unsigned int TelemetrySerializer::TagFromNameByHash(TelemetrySerializer *this, const unsigned int hashName)
{
  return TelemetrySerializer::TagFromNameByHash(this, hashName, NULL);
}

/*
==============
TelemetrySerializer::TagFromNameByHash
==============
*/
__int64 TelemetrySerializer::TagFromNameByHash(TelemetrySerializer *this, const unsigned int hashName, DDLState *outState)
{
  int externalIndex; 
  DDLState *v6; 
  DDLMember *member; 
  char v11; 
  int v12; 
  int v13; 
  void *retaddr; 

  _RAX = &retaddr;
  externalIndex = 0;
  v11 = 0;
  v12 = 0;
  v6 = (DDLState *)&v11;
  v13 = -1;
  if ( outState )
    v6 = outState;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rax-18h], xmm0
  }
  if ( !DDL_MoveToNameByHash(&this->m_rootState, v6, hashName, NULL) )
    return 0i64;
  member = v6->member;
  if ( member )
    externalIndex = member->externalIndex;
  return (unsigned int)(((int)member - LODWORD(this->m_rootState.ddlDef->structList[externalIndex].members)) / 48 + 1);
}

/*
==============
TextWriter::Write
==============
*/
int TextWriter::Write(TextWriter *this, const char *format, ...)
{
  int v2; 
  int result; 
  int v5; 
  char dest[2048]; 
  va_list va; 

  va_start(va, format);
  v2 = LODWORD(this->m_end) - LODWORD(this->m_writer);
  result = Com_vsprintf(dest, 0x800ui64, format, va);
  v5 = result;
  if ( result > 0 )
  {
    if ( j_md5_process(&this->m_state, (const unsigned __int8 *)dest, result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 212, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result", 0i64) )
      __debugbreak();
    if ( this->m_start )
    {
      if ( v5 < v2 )
        v2 = v5;
      memcpy_0(this->m_writer, dest, v2);
      this->m_writer += v2;
    }
    return v5;
  }
  return result;
}

/*
==============
WriteProtoFromDef
==============
*/
void WriteProtoFromDef(TextWriter *writer, const char *nameSpace, const DDLDef *schema, const char *message, bool includeHeader)
{
  const char *v7; 
  bool v9; 
  __int64 v10; 
  bool v11; 
  __int64 v12; 
  int v13; 
  bool *i; 
  DDLEnum *v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  DDLStruct *v21; 
  const char *name; 
  const char *typeName; 
  char *m_start; 
  char *fmt; 
  int version; 
  int v27; 
  bool v28; 
  bool *v29; 
  StructureSummary outSummary; 

  v7 = ".";
  if ( !*nameSpace )
    v7 = (char *)&queryFormat.fmt + 3;
  if ( schema && !message )
    message = schema->structList->name;
  SummarizeStructure(schema, message, &outSummary);
  v9 = includeHeader;
  if ( includeHeader )
    TextWriter::Write(writer, "
  version = schema->version;
  TextWriter::Write(writer, "syntax = \"proto2\";\npackage %s%sgenerated.%s.%s.v%d;\noption java_outer_classname = \"Record\";\n", nameSpace, v7, "iw8", outSummary.name, version);
  v10 = 0i64;
  v27 = outSummary.discovered[0];
  v11 = outSummary.discovered[0] >= 0;
  v28 = outSummary.discovered[0] >= 0;
  if ( outSummary.discovered[0] >= 0 )
  {
    v12 = 0i64;
    v13 = 0;
    for ( i = outSummary.enumerations; ; ++i )
    {
      v29 = i;
      if ( v13 >= schema->enumCount )
        break;
      if ( *i )
      {
        v15 = &schema->enumList[v12];
        if ( v15 )
        {
          TextWriter::Write(writer, "\nenum %s\n{\n", v15->name);
          v16 = 0;
          if ( v15->memberCount > 0 )
          {
            v17 = 0i64;
            do
            {
              LODWORD(fmt) = v16;
              TextWriter::Write(writer, "\t%s_%s = %d;\n", v15->name, v15->members[v17], fmt);
              ++v16;
              ++v17;
            }
            while ( v16 < v15->memberCount );
            v9 = includeHeader;
          }
          TextWriter::Write(writer, "}");
          i = v29;
        }
        if ( v9 )
          TextWriter::Write(writer, "\t
      }
      ++v13;
      ++v12;
    }
    v18 = 1;
    v19 = 1i64;
    v20 = 1i64;
    while ( v18 < schema->structCount )
    {
      if ( outSummary.structures[v19] && v19 != v27 )
      {
        WriteStructure(writer, &schema->structList[v18], schema);
        if ( includeHeader )
          TextWriter::Write(writer, "\t
      }
      ++v18;
      ++v19;
      ++v20;
    }
    v21 = &schema->structList[v27];
    name = v21->name;
    v21->name = outSummary.messageName;
    WriteStructure(writer, v21, schema);
    v9 = includeHeader;
    if ( includeHeader )
      TextWriter::Write(writer, "\t
    v21->name = name;
    v11 = v28;
  }
  TextWriter::Write(writer, "\nmessage record\n{");
  do
  {
    typeName = FieldDescriptor::s_recordFields[v10].typeName;
    if ( v11 && FieldDescriptor::s_recordFields[v10].number == 5 )
      typeName = outSummary.messageName;
    LODWORD(fmt) = FieldDescriptor::s_recordFields[v10].number;
    TextWriter::Write(writer, "\n\toptional %s %s = %d;", typeName, FieldDescriptor::s_recordFields[v10++].name, fmt);
  }
  while ( v10 < 8 );
  TextWriter::Write(writer, "\n}");
  if ( v9 )
    TextWriter::Write(writer, "\t
  m_start = writer->m_start;
  if ( m_start && LODWORD(writer->m_writer) - (int)m_start >= (unsigned int)(LODWORD(writer->m_end) - (_DWORD)m_start) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 402, ASSERT_TYPE_ASSERT, "(0 == writer.Begin() || writer.Size() < writer.Capacity())", "%s\n\tError: Out of memory, generated schema is larger than the given output buffer.", "NULL == writer.Begin() || writer.Size() < writer.Capacity()") )
    __debugbreak();
}

/*
==============
TelemetrySerializer::WriteState
==============
*/
bool TelemetrySerializer::WriteState(TelemetrySerializer *this, const char *memberName, const DDLState *state, const DDLContext *context)
{
  unsigned int v8; 
  bool v10; 
  bool v11; 
  int externalIndex; 
  const DDLDef *ddlDef; 
  __int64 v14; 
  DDLStruct *structList; 
  const DDLDef *v17; 
  DDLStruct *v21; 
  unsigned __int8 *m_buffer; 
  size_t v24; 
  DDLState toState; 
  TelemetrySerializer writer; 
  ProtoBufSerializer result; 

  _RDI = this;
  v8 = DDL::DDL_HashString(memberName, 0);
  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v10 = v8 == 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vmovdqu xmmword ptr [rsp+0F8h+toState.member], xmm0 }
  if ( !v8 || (v11 = DDL_MoveToNameByHash(&_RDI->m_rootState, &toState, v8, NULL)) )
  {
    if ( toState.member )
      externalIndex = toState.member->externalIndex;
    else
      externalIndex = 0;
    ddlDef = _RDI->m_rootState.ddlDef;
    v14 = externalIndex;
    structList = ddlDef->structList;
    if ( v10 )
    {
      SerializeStruct(_RDI, state, context, ddlDef, &structList[v14]);
    }
    else
    {
      _RAX = ProtoBufSerializer::OpenStruct(_RDI, &result, (LODWORD(toState.member) - LODWORD(structList->members)) / 48 + 1);
      v17 = _RDI->m_rootState.ddlDef;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+0F8h+writer.baseclass_0.m_real_len], ymm0
        vmovsd  xmm0, qword ptr [rax+30h]
      }
      v21 = v17->structList;
      __asm
      {
        vmovups xmmword ptr [rsp+0F8h+writer.baseclass_0.m_currentPtr], xmm1
        vmovups ymm1, ymmword ptr [rdi+38h]
        vmovsd  [rsp+0F8h+writer.baseclass_0.m_rollbackPtr], xmm0
        vmovups ymmword ptr [rsp+0F8h+writer.m_rootState.isValid], ymm1
      }
      SerializeStruct(&writer, state, context, v17, &v21[v14]);
      m_buffer = writer.m_buffer;
      if ( _RDI->m_structPtr == writer.m_buffer )
      {
        v24 = writer.m_currentPtr - writer.m_buffer;
        ProtoBufSerializer::EncodeVarInt(_RDI, writer.m_currentPtr - writer.m_buffer);
        memmove_0(_RDI->m_currentPtr, m_buffer, v24);
        _RDI->m_currentPtr += v24;
        _RDI->m_structPtr = NULL;
      }
    }
    return 1;
  }
  return v11;
}

/*
==============
TelemetrySerializer::WriteStateByHash
==============
*/
bool TelemetrySerializer::WriteStateByHash(TelemetrySerializer *this, const unsigned int hashName, const DDLState *state, const DDLContext *context)
{
  bool v10; 
  int externalIndex; 
  const DDLDef *ddlDef; 
  __int64 v13; 
  DDLStruct *structList; 
  const DDLDef *v16; 
  DDLStruct *v20; 
  unsigned __int8 *m_buffer; 
  size_t v23; 
  DDLState toState; 
  TelemetrySerializer writer; 
  ProtoBufSerializer result; 

  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  _RDI = this;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0F8h+toState.member], xmm0
  }
  if ( !hashName || (v10 = DDL_MoveToNameByHash(&this->m_rootState, &toState, hashName, NULL)) )
  {
    if ( toState.member )
      externalIndex = toState.member->externalIndex;
    else
      externalIndex = 0;
    ddlDef = _RDI->m_rootState.ddlDef;
    v13 = externalIndex;
    structList = ddlDef->structList;
    if ( hashName )
    {
      _RAX = ProtoBufSerializer::OpenStruct(_RDI, &result, (LODWORD(toState.member) - LODWORD(structList->members)) / 48 + 1);
      v16 = _RDI->m_rootState.ddlDef;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+0F8h+writer.baseclass_0.m_real_len], ymm0
        vmovsd  xmm0, qword ptr [rax+30h]
      }
      v20 = v16->structList;
      __asm
      {
        vmovups xmmword ptr [rsp+0F8h+writer.baseclass_0.m_currentPtr], xmm1
        vmovups ymm1, ymmword ptr [rdi+38h]
        vmovsd  [rsp+0F8h+writer.baseclass_0.m_rollbackPtr], xmm0
        vmovups ymmword ptr [rsp+0F8h+writer.m_rootState.isValid], ymm1
      }
      SerializeStruct(&writer, state, context, v16, &v20[v13]);
      m_buffer = writer.m_buffer;
      if ( _RDI->m_structPtr == writer.m_buffer )
      {
        v23 = writer.m_currentPtr - writer.m_buffer;
        ProtoBufSerializer::EncodeVarInt(_RDI, writer.m_currentPtr - writer.m_buffer);
        memmove_0(_RDI->m_currentPtr, m_buffer, v23);
        _RDI->m_currentPtr += v23;
        _RDI->m_structPtr = NULL;
      }
    }
    else
    {
      SerializeStruct(_RDI, state, context, ddlDef, &structList[v13]);
    }
    return 1;
  }
  return v10;
}

/*
==============
WriteStructure
==============
*/
void WriteStructure(TextWriter *writer, const DDLStruct *structure, const DDLDef *def)
{
  const DDLDef *v3; 
  int v6; 
  __int64 v7; 
  DDLMember *v8; 
  __int64 type; 
  int arraySize; 
  const char *v11; 
  const char *v12; 
  const char *name; 
  const char *v14; 
  __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 

  if ( structure )
  {
    v3 = def;
    TextWriter::Write(writer, "\nmessage %s\n{\n", structure->name);
    v6 = 0;
    if ( structure->memberCount > 0 )
    {
      v7 = 0i64;
      while ( 1 )
      {
        v8 = &structure->members[v7];
        type = v8->type;
        if ( (_DWORD)type != 11 )
          break;
LABEL_24:
        ++v6;
        ++v7;
        if ( v6 >= structure->memberCount )
          goto LABEL_25;
      }
      arraySize = v8->arraySize;
      v11 = "optional ";
      v12 = "'unknown type!'";
      if ( arraySize > 1 )
        v11 = "repeated ";
      if ( (_DWORD)type )
      {
        if ( (_DWORD)type == 9 )
        {
          name = v3->structList[v8->externalIndex].name;
        }
        else
        {
          if ( (_DWORD)type != 10 )
          {
            if ( (int)type >= 9 )
              goto LABEL_12;
            goto LABEL_11;
          }
          name = v3->enumList[v8->externalIndex].name;
        }
LABEL_14:
        v14 = name;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
LABEL_17:
        v15 = 0x7FFFFFFFi64;
        do
        {
          v16 = v14["'unknown type!'" - name];
          v17 = v15;
          v18 = *v14++;
          --v15;
          if ( !v17 )
            break;
          if ( v16 != v18 )
            goto LABEL_23;
        }
        while ( v16 );
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 312, ASSERT_TYPE_ASSERT, "(0 != I_strcmp(unknown, typeName))", (const char *)&queryFormat, "0 != I_strcmp(unknown, typeName)") )
          __debugbreak();
LABEL_23:
        LODWORD(v19) = v6 + 1;
        TextWriter::Write(writer, "\t%s%s %s = %d;\n", v11, name, v8->name, v19);
        v3 = def;
        goto LABEL_24;
      }
      if ( arraySize > 1 )
      {
        name = "bytes";
        v14 = "bytes";
        goto LABEL_17;
      }
LABEL_11:
      v12 = DdlTypeMap::TYPE_NAMES[type];
LABEL_12:
      name = "bool";
      if ( v8->bitSize != 1 )
        name = v12;
      goto LABEL_14;
    }
LABEL_25:
    TextWriter::Write(writer, "}");
  }
}

