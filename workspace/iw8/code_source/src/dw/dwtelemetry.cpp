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
  this->ProtoBufSerializer = *base;
  this->m_rootState = *root;
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
  Hash_state *v8; 
  __int64 v9; 
  TextWriter *p_md; 
  __m256i v11; 
  __int128 v12; 
  char *fmt; 
  __int64 v15; 
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
  int v26; 
  int v27; 
  int v28; 
  TextWriter md; 
  Hash_state v33; 
  unsigned __int8 outa[8]; 
  __int64 v35; 

  *(_QWORD *)outa = 0i64;
  v35 = 0i64;
  if ( out && len >= 0x21 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    md.m_end = NULL;
    *(_OWORD *)&md.m_start = _XMM0;
    if ( j_md5_init(&md.m_state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 177, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result") )
      __debugbreak();
    WriteProtoFromDef(&md, "com.activision.ds.protobuf", definition, name, 0);
    v8 = &v33;
    v9 = 3i64;
    p_md = &md;
    do
    {
      v8 = (Hash_state *)((char *)v8 + 128);
      v11 = *(__m256i *)p_md->m_state.dummy;
      v12 = *((_OWORD *)&p_md->m_state.data + 7);
      p_md = (TextWriter *)((char *)p_md + 128);
      *(__m256i *)(&v8[-1].data + 34) = v11;
      *(__m256i *)(&v8[-1].data + 38) = *(__m256i *)(&p_md[-1].m_state.data + 41);
      *(__m256i *)(&v8[-1].data + 42) = *(__m256i *)(&p_md[-1].m_state.data + 45);
      *((_OWORD *)&v8[-1].data + 23) = *(_OWORD *)(&p_md[-1].m_state.data + 49);
      *((_OWORD *)&v8[-1].data + 24) = v12;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v8->dummy = *(_OWORD *)p_md->m_state.dummy;
    if ( j_md5_done(&v33, outa) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 234, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result") )
        __debugbreak();
    }
    v28 = HIBYTE(v35);
    v27 = BYTE6(v35);
    v26 = BYTE5(v35);
    v25 = BYTE4(v35);
    v24 = BYTE3(v35);
    v23 = BYTE2(v35);
    v22 = BYTE1(v35);
    v21 = (unsigned __int8)v35;
    v20 = outa[7];
    v19 = outa[6];
    v18 = outa[5];
    v17 = outa[4];
    v16 = outa[3];
    LODWORD(v15) = outa[2];
    LODWORD(fmt) = outa[1];
    Com_sprintf(out, len, "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", outa[0], fmt, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28);
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
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 *m_currentPtr; 
  __int64 v15; 
  signed __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  signed __int64 v19; 
  signed __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  signed __int64 v23; 
  signed __int64 v24; 
  unsigned __int8 *m_buffer; 
  int v26; 
  char *m_start; 
  __int64 v28; 
  signed __int64 v29; 
  unsigned __int8 *v31; 
  unsigned __int8 *v32; 
  unsigned __int8 *v33; 
  unsigned __int8 *v34; 
  unsigned __int8 *v35; 
  TelemetrySerializer *v36; 
  DDLDef *schema; 
  _BYTE v39[48]; 
  double resulta[6]; 
  TextWriter md; 
  char Src[16]; 
  char dest[64]; 

  schema = (DDLDef *)definition;
  DDL_GetRootState((DDLState *)&resulta[1], definition);
  Com_sprintf(dest, 0x40ui64, "%s.%s", "iw8", name);
  Com_sprintf(Src, 0x10ui64, "%d", definition->version);
  if ( out && len )
  {
    this->m_writer.m_buffer = out;
    this->m_writer.m_currentPtr = out;
    this->m_writer.m_real_len = len;
    this->m_writer.m_len_minus_buffer = len;
    this->m_writer.m_rollbackPtr = NULL;
    this->m_writer.m_optional_buffer_to_leave = 0;
  }
  v12 = -1i64;
  this->m_writer.m_rootState = *(DDLState *)&resulta[1];
  v13 = -1i64;
  do
    ++v13;
  while ( dest[v13] );
  m_currentPtr = this->m_writer.m_currentPtr;
  v15 = (unsigned int)v13;
  if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0xAui64) )
  {
    v16 = this->m_writer.m_currentPtr - this->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, (unsigned int)v15) )
    {
      if ( v16 + v15 > this->m_writer.m_len_minus_buffer )
      {
        this->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(this->m_writer.m_currentPtr, dest, (unsigned int)v15);
        m_currentPtr = &this->m_writer.m_currentPtr[v15];
      }
    }
  }
  this->m_writer.m_currentPtr = m_currentPtr;
  v17 = -1i64;
  do
    ++v17;
  while ( name[v17] );
  v18 = (unsigned int)v17;
  if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0x22ui64) )
  {
    v19 = this->m_writer.m_currentPtr - this->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, (unsigned int)v18) )
    {
      if ( v19 + v18 > this->m_writer.m_len_minus_buffer )
      {
        this->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(this->m_writer.m_currentPtr, name, (unsigned int)v18);
        m_currentPtr = &this->m_writer.m_currentPtr[v18];
      }
    }
  }
  this->m_writer.m_currentPtr = m_currentPtr;
  if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0x32ui64) )
  {
    v20 = this->m_writer.m_currentPtr - this->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 3ui64) )
    {
      if ( v20 + 3 > this->m_writer.m_len_minus_buffer )
      {
        this->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(this->m_writer.m_currentPtr, "iw8", 3ui64);
        m_currentPtr = this->m_writer.m_currentPtr + 3;
      }
    }
  }
  this->m_writer.m_currentPtr = m_currentPtr;
  v21 = -1i64;
  do
    ++v21;
  while ( identifier[v21] );
  v22 = (unsigned int)v21;
  if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0x3Aui64) )
  {
    v23 = this->m_writer.m_currentPtr - this->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, (unsigned int)v22) )
    {
      if ( v23 + v22 > this->m_writer.m_len_minus_buffer )
      {
        this->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(this->m_writer.m_currentPtr, identifier, (unsigned int)v22);
        m_currentPtr = &this->m_writer.m_currentPtr[v22];
      }
    }
  }
  this->m_writer.m_currentPtr = m_currentPtr;
  do
    ++v12;
  while ( Src[v12] );
  if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0x42ui64) )
  {
    v24 = this->m_writer.m_currentPtr - this->m_writer.m_buffer;
    if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, (unsigned int)v12) )
    {
      if ( v24 + (unsigned __int64)(unsigned int)v12 > this->m_writer.m_len_minus_buffer )
      {
        this->m_writer.m_overflowed = 1;
      }
      else
      {
        memmove_0(this->m_writer.m_currentPtr, Src, (unsigned int)v12);
        m_currentPtr = &this->m_writer.m_currentPtr[(unsigned int)v12];
      }
    }
  }
  this->m_writer.m_currentPtr = m_currentPtr;
  if ( exportSchema )
  {
    m_buffer = this->m_writer.m_buffer;
    v26 = LODWORD(this->m_writer.m_real_len) - LODWORD(this->m_writer.m_currentPtr);
    md.m_start = (char *)&out[m_currentPtr - m_buffer + 10];
    md.m_writer = md.m_start;
    md.m_end = &md.m_start[v26 + (_DWORD)m_buffer - 10];
    if ( j_md5_init(&md.m_state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwtelemetry.cpp", 188, ASSERT_TYPE_ASSERT, "(CRYPT_OK == result)", (const char *)&queryFormat, "CRYPT_OK == result", schema) )
      __debugbreak();
    if ( md.m_writer )
      *md.m_writer = 0;
    WriteProtoFromDef(&md, "com.activision.ds.protobuf", schema, name, 0);
    m_start = md.m_start;
    m_currentPtr = this->m_writer.m_currentPtr;
    v28 = (unsigned int)(LODWORD(md.m_writer) - LODWORD(md.m_start));
    if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0x12ui64) )
    {
      v29 = this->m_writer.m_currentPtr - this->m_writer.m_buffer;
      if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, (unsigned int)v28) )
      {
        if ( v29 + v28 > this->m_writer.m_len_minus_buffer )
        {
          this->m_writer.m_overflowed = 1;
        }
        else
        {
          memmove_0(this->m_writer.m_currentPtr, m_start, (unsigned int)v28);
          m_currentPtr = &this->m_writer.m_currentPtr[v28];
        }
      }
    }
    this->m_writer.m_currentPtr = m_currentPtr;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_QWORD *)v39 = 0i64;
  *(_QWORD *)&v39[8] = 0i64;
  v39[20] = 0;
  *(_OWORD *)&v39[24] = _XMM0;
  *(_QWORD *)&v39[40] = 0i64;
  if ( ProtoBufSerializer::EncodeVarInt(&this->m_writer, 0x2Aui64) && (v31 = this->m_writer.m_currentPtr, v32 = (unsigned __int8 *)(this->m_writer.m_real_len + this->m_writer.m_buffer - v31), (unsigned __int64)v32 > 0xA) )
  {
    v33 = NULL;
    this->m_writer.m_structPtr = v31 + 10;
    v34 = NULL;
    v35 = NULL;
    if ( v31 != (unsigned __int8 *)-10i64 )
    {
      *(_QWORD *)&v39[40] = v31 + 10;
      v33 = v31 + 10;
      *(_QWORD *)&v39[32] = v31 + 10;
      v34 = v31 + 10;
      *(_QWORD *)v39 = v32 - 10;
      v35 = v32 - 10;
      *(_QWORD *)&v39[8] = v32 - 10;
      resulta[0] = 0.0;
      *(_DWORD *)&v39[16] = 0;
    }
    if ( &v35[v33 - v34] >= v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\proto\\online_protobuf_serialization.h", 230, ASSERT_TYPE_ASSERT, "(structure.GetRemainingSize() < GetRemainingSize())", (const char *)&queryFormat, "structure.GetRemainingSize() < GetRemainingSize()") )
      __debugbreak();
  }
  else
  {
    this->m_writer.m_currentPtr = m_currentPtr;
  }
  v36 = result;
  *(__m256i *)&result->m_real_len = *(__m256i *)v39;
  *(_OWORD *)&result->m_currentPtr = *(_OWORD *)&v39[32];
  *(double *)&result->m_rollbackPtr = resulta[0];
  result->m_rootState = this->m_writer.m_rootState;
  return v36;
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
  ProtoBufSerializer *v9; 
  __int128 v10; 
  double v11; 
  DDLState toState; 
  ProtoBufSerializer resulta; 

  v6 = DDL::DDL_HashString(name, 0);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  externalIndex = 0;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  if ( DDL_MoveToNameByHash(&this->m_rootState, &toState, v6, NULL) )
  {
    if ( toState.member )
      externalIndex = toState.member->externalIndex;
    externalIndex = (LODWORD(toState.member) - LODWORD(this->m_rootState.ddlDef->structList[externalIndex].members)) / 48 + 1;
  }
  v9 = ProtoBufSerializer::OpenStruct(this, &resulta, externalIndex);
  v10 = *(_OWORD *)&v9->m_currentPtr;
  *(__m256i *)&result->m_real_len = *(__m256i *)&v9->m_real_len;
  v11 = *(double *)&v9->m_rollbackPtr;
  *(_OWORD *)&result->m_currentPtr = v10;
  result->m_rootState = toState;
  *(double *)&result->m_rollbackPtr = v11;
  return result;
}

/*
==============
TelemetrySerializer::OpenStructByHash
==============
*/
TelemetrySerializer *TelemetrySerializer::OpenStructByHash(TelemetrySerializer *this, TelemetrySerializer *result, const unsigned int hash)
{
  int externalIndex; 
  ProtoBufSerializer *v8; 
  __int128 v9; 
  double v10; 
  DDLState v12; 
  ProtoBufSerializer resulta; 

  v12.isValid = 0;
  v12.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  externalIndex = 0;
  v12.offset = 0;
  *(_OWORD *)&v12.member = _XMM0;
  if ( DDL_MoveToNameByHash(&this->m_rootState, &v12, hash, NULL) )
  {
    if ( v12.member )
      externalIndex = v12.member->externalIndex;
    externalIndex = (LODWORD(v12.member) - LODWORD(this->m_rootState.ddlDef->structList[externalIndex].members)) / 48 + 1;
  }
  v8 = ProtoBufSerializer::OpenStruct(this, &resulta, externalIndex);
  v9 = *(_OWORD *)&v8->m_currentPtr;
  *(__m256i *)&result->m_real_len = *(__m256i *)&v8->m_real_len;
  v10 = *(double *)&v8->m_rollbackPtr;
  *(_OWORD *)&result->m_currentPtr = v9;
  result->m_rootState = v12;
  *(double *)&result->m_rollbackPtr = v10;
  return result;
}

/*
==============
TelemetrySerializer::OpenStructByTag
==============
*/
TelemetrySerializer *TelemetrySerializer::OpenStructByTag(TelemetrySerializer *this, TelemetrySerializer *result, unsigned int tag)
{
  ProtoBufSerializer *v5; 
  __int128 v6; 
  double v7; 
  TelemetrySerializer *v8; 
  ProtoBufSerializer resulta; 

  v5 = ProtoBufSerializer::OpenStruct(this, &resulta, tag);
  v6 = *(_OWORD *)&v5->m_currentPtr;
  *(__m256i *)&result->m_real_len = *(__m256i *)&v5->m_real_len;
  v7 = *(double *)&v5->m_rollbackPtr;
  *(_OWORD *)&result->m_currentPtr = v6;
  *(double *)&result->m_rollbackPtr = v7;
  v8 = result;
  result->m_rootState = this->m_rootState;
  return v8;
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
  this->m_rootState = *schema;
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
  unsigned __int8 *v17; 
  double Float; 
  double FixedPoint; 
  const char *String; 
  __int64 v21; 
  ProtoBufSerializer *v22; 
  DDLState m_rootState; 
  size_t v26; 
  TelemetrySerializer writera; 
  ProtoBufSerializer result; 

  switch ( member->type )
  {
    case 0:
      Byte = DDL_GetByte(focus, context);
      ProtoBufSerializer::WriteInt64(writer, tag, Byte);
      return;
    case 1:
      Short = DDL_GetShort(focus, context);
      ProtoBufSerializer::WriteInt64(writer, tag, Short);
      return;
    case 2:
    case 0xA:
      UInt = DDL_GetUInt(focus, context);
      ProtoBufSerializer::WriteUInt32(writer, tag, UInt);
      return;
    case 3:
      Int = DDL_GetInt(focus, context);
      ProtoBufSerializer::WriteInt64(writer, tag, Int);
      return;
    case 4:
      UInt64 = DDL_GetUInt64(focus, context);
      m_currentPtr = writer->m_currentPtr;
      if ( !tag )
        goto LABEL_13;
      if ( !ProtoBufSerializer::EncodeVarInt(writer, (8i64 * (unsigned int)tag) | 1) )
        goto LABEL_13;
      m_buffer = writer->m_buffer;
      if ( !m_buffer )
        goto LABEL_13;
      v17 = writer->m_currentPtr;
      if ( !v17 )
        goto LABEL_13;
      if ( v17 - m_buffer + 8 > writer->m_len_minus_buffer )
      {
        writer->m_overflowed = 1;
LABEL_13:
        writer->m_currentPtr = m_currentPtr;
      }
      else
      {
        *(_QWORD *)v17 = UInt64;
        writer->m_currentPtr += 8;
      }
      return;
    case 6:
      Float = DDL_GetFloat(focus, context);
      ProtoBufSerializer::WriteFloat32(writer, tag, *(float *)&Float);
      return;
    case 7:
      FixedPoint = DDL_GetFixedPoint(focus, context);
      ProtoBufSerializer::WriteFloat32(writer, tag, *(float *)&FixedPoint);
      return;
    case 8:
      String = DDL_GetString(focus, context);
      v21 = -1i64;
      do
        ++v21;
      while ( String[v21] );
      ProtoBufSerializer::WriteString(writer, tag, String, (unsigned int)v21);
      return;
    case 9:
      v22 = ProtoBufSerializer::OpenStruct(writer, &result, tag);
      *(__m256i *)&writera.m_real_len = *(__m256i *)&v22->m_real_len;
      *(_OWORD *)&writera.m_currentPtr = *(_OWORD *)&v22->m_currentPtr;
      m_rootState = writer->m_rootState;
      writera.m_rollbackPtr = v22->m_rollbackPtr;
      __asm
      {
        vextractf128 xmm1, ymm2, 1
        vpextrq rax, xmm1, 1
      }
      writera.m_rootState = m_rootState;
      if ( !_RAX )
      {
        if ( writera.m_currentPtr )
        {
          SerializeStruct(&writera, focus, context, schema, &schema->structList[member->externalIndex]);
          if ( writer->m_structPtr == writera.m_buffer )
          {
            v26 = writera.m_currentPtr - writera.m_buffer;
            ProtoBufSerializer::EncodeVarInt(writer, writera.m_currentPtr - writera.m_buffer);
            memmove_0(writer->m_currentPtr, writera.m_buffer, v26);
            writer->m_currentPtr += v26;
            writer->m_structPtr = NULL;
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
  *(_OWORD *)&toState.member = _XMM0;
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
          *(_OWORD *)&state.member = _XMM0;
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
  DDLState *v5; 
  DDLMember *member; 
  char v10; 
  int v11; 
  int v12; 
  __int128 v13; 

  externalIndex = 0;
  v10 = 0;
  v11 = 0;
  v5 = (DDLState *)&v10;
  v12 = -1;
  if ( outState )
    v5 = outState;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v13 = _XMM0;
  if ( !DDL_MoveToNameByHash(&this->m_rootState, v5, hashName, NULL) )
    return 0i64;
  member = v5->member;
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
  ProtoBufSerializer *v16; 
  const DDLDef *v17; 
  __int128 v18; 
  double v19; 
  DDLStruct *v20; 
  DDLState m_rootState; 
  unsigned __int8 *m_buffer; 
  size_t v23; 
  DDLState toState; 
  TelemetrySerializer writer; 
  ProtoBufSerializer result; 

  v8 = DDL::DDL_HashString(memberName, 0);
  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v10 = v8 == 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  if ( !v8 || (v11 = DDL_MoveToNameByHash(&this->m_rootState, &toState, v8, NULL)) )
  {
    if ( toState.member )
      externalIndex = toState.member->externalIndex;
    else
      externalIndex = 0;
    ddlDef = this->m_rootState.ddlDef;
    v14 = externalIndex;
    structList = ddlDef->structList;
    if ( v10 )
    {
      SerializeStruct(this, state, context, ddlDef, &structList[v14]);
    }
    else
    {
      v16 = ProtoBufSerializer::OpenStruct(this, &result, (LODWORD(toState.member) - LODWORD(structList->members)) / 48 + 1);
      v17 = this->m_rootState.ddlDef;
      v18 = *(_OWORD *)&v16->m_currentPtr;
      *(__m256i *)&writer.m_real_len = *(__m256i *)&v16->m_real_len;
      v19 = *(double *)&v16->m_rollbackPtr;
      v20 = v17->structList;
      *(_OWORD *)&writer.m_currentPtr = v18;
      m_rootState = this->m_rootState;
      *(double *)&writer.m_rollbackPtr = v19;
      writer.m_rootState = m_rootState;
      SerializeStruct(&writer, state, context, v17, &v20[v14]);
      m_buffer = writer.m_buffer;
      if ( this->m_structPtr == writer.m_buffer )
      {
        v23 = writer.m_currentPtr - writer.m_buffer;
        ProtoBufSerializer::EncodeVarInt(this, writer.m_currentPtr - writer.m_buffer);
        memmove_0(this->m_currentPtr, m_buffer, v23);
        this->m_currentPtr += v23;
        this->m_structPtr = NULL;
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
  ProtoBufSerializer *v15; 
  const DDLDef *v16; 
  __int128 v17; 
  double v18; 
  DDLStruct *v19; 
  DDLState m_rootState; 
  unsigned __int8 *m_buffer; 
  size_t v22; 
  DDLState toState; 
  TelemetrySerializer writer; 
  ProtoBufSerializer result; 

  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  if ( !hashName || (v10 = DDL_MoveToNameByHash(&this->m_rootState, &toState, hashName, NULL)) )
  {
    if ( toState.member )
      externalIndex = toState.member->externalIndex;
    else
      externalIndex = 0;
    ddlDef = this->m_rootState.ddlDef;
    v13 = externalIndex;
    structList = ddlDef->structList;
    if ( hashName )
    {
      v15 = ProtoBufSerializer::OpenStruct(this, &result, (LODWORD(toState.member) - LODWORD(structList->members)) / 48 + 1);
      v16 = this->m_rootState.ddlDef;
      v17 = *(_OWORD *)&v15->m_currentPtr;
      *(__m256i *)&writer.m_real_len = *(__m256i *)&v15->m_real_len;
      v18 = *(double *)&v15->m_rollbackPtr;
      v19 = v16->structList;
      *(_OWORD *)&writer.m_currentPtr = v17;
      m_rootState = this->m_rootState;
      *(double *)&writer.m_rollbackPtr = v18;
      writer.m_rootState = m_rootState;
      SerializeStruct(&writer, state, context, v16, &v19[v13]);
      m_buffer = writer.m_buffer;
      if ( this->m_structPtr == writer.m_buffer )
      {
        v22 = writer.m_currentPtr - writer.m_buffer;
        ProtoBufSerializer::EncodeVarInt(this, writer.m_currentPtr - writer.m_buffer);
        memmove_0(this->m_currentPtr, m_buffer, v22);
        this->m_currentPtr += v22;
        this->m_structPtr = NULL;
      }
    }
    else
    {
      SerializeStruct(this, state, context, ddlDef, &structList[v13]);
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

