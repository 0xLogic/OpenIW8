/*
==============
ExrAttributeWriter::~ExrAttributeWriter
==============
*/

void __fastcall ExrAttributeWriter::~ExrAttributeWriter(ExrAttributeWriter *this)
{
  ??1ExrAttributeWriter@@QEAA@XZ(this);
}

/*
==============
EXR_RleCompress
==============
*/

int __fastcall EXR_RleCompress(int inLength, unsigned __int8 *src, unsigned __int8 *dst)
{
  return ?EXR_RleCompress@@YAHHPEAE0@Z(inLength, src, dst);
}

/*
==============
ExrCompressor::~ExrCompressor
==============
*/

void __fastcall ExrCompressor::~ExrCompressor(ExrCompressor *this)
{
  ??1ExrCompressor@@QEAA@XZ(this);
}

/*
==============
EXR_WriteImage_EstimateBufferSize
==============
*/

unsigned __int64 __fastcall EXR_WriteImage_EstimateBufferSize(ExrWriteDesc *desc)
{
  return ?EXR_WriteImage_EstimateBufferSize@@YA_KPEAUExrWriteDesc@@@Z(desc);
}

/*
==============
EXR_WriteImage
==============
*/

ExrStatus __fastcall EXR_WriteImage(BufferedStream *bufferedStream, ExrWriteDesc *desc, ExrPixelSource *source)
{
  return ?EXR_WriteImage@@YA?AW4ExrStatus@@PEAUBufferedStream@@PEAUExrWriteDesc@@PEAUExrPixelSource@@@Z(bufferedStream, desc, source);
}

/*
==============
ExrCompressor::Compress
==============
*/

ExrStatus __fastcall ExrCompressor::Compress(ExrCompressor *this, unsigned int blockDataSize, unsigned __int8 *dest, unsigned int *compressedSize)
{
  return ?Compress@ExrCompressor@@QEAA?AW4ExrStatus@@IPEAEPEAI@Z(this, blockDataSize, dest, compressedSize);
}

/*
==============
EXR_WriteImage_EstimateBlockDataSize
==============
*/

unsigned __int64 __fastcall EXR_WriteImage_EstimateBlockDataSize(ExrWriteDesc *desc)
{
  return ?EXR_WriteImage_EstimateBlockDataSize@@YA_KPEAUExrWriteDesc@@@Z(desc);
}

/*
==============
ExrAttributeWriter::~ExrAttributeWriter
==============
*/
void ExrAttributeWriter::~ExrAttributeWriter(ExrAttributeWriter *this)
{
  unsigned __int64 v2; 
  int v3; 
  BufferedStreamWriter *m_outputStream; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  int src; 

  v2 = this->m_outputStream->m_stream->GetPosition(this->m_outputStream->m_stream);
  v3 = v2 - LODWORD(this->m_attributeValueOffset);
  this->m_outputStream->m_stream->SetPosition(this->m_outputStream->m_stream, this->m_attributeValueOffset - 4);
  m_outputStream = this->m_outputStream;
  src = v3;
  end = m_outputStream->m_stream->end;
  current = m_outputStream->m_stream->current;
  if ( end <= current || (unsigned __int64)(end - current) < 4 )
  {
    BufferedStreamWriter::WriteData(m_outputStream, (unsigned __int8 *)&src, 4ui64);
  }
  else
  {
    *(_DWORD *)current = v3;
    m_outputStream->m_stream->current += 4;
  }
  this->m_outputStream->m_stream->SetPosition(this->m_outputStream->m_stream, v2);
}

/*
==============
ExrCompressor::~ExrCompressor
==============
*/
void ExrCompressor::~ExrCompressor(ExrCompressor *this)
{
  unsigned __int8 *m_tempBuffer; 
  unsigned __int8 *m_dataBuffer; 

  m_tempBuffer = this->m_tempBuffer;
  if ( m_tempBuffer )
    EXR_TempFree(m_tempBuffer);
  m_dataBuffer = this->m_dataBuffer;
  if ( m_dataBuffer )
    EXR_TempFree(m_dataBuffer);
}

/*
==============
ExrCompressor::Compress
==============
*/
__int64 ExrCompressor::Compress(ExrCompressor *this, unsigned int blockDataSize, unsigned __int8 *dest, unsigned int *compressedSize)
{
  __int64 v4; 
  unsigned __int8 *m_dataBuffer; 
  unsigned __int8 *m_tempBuffer; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *i; 
  unsigned __int8 v13; 
  unsigned __int8 *v14; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  unsigned __int8 *j; 
  char v18; 
  unsigned __int8 *v19; 
  unsigned __int8 *v20; 
  unsigned __int64 v21; 
  unsigned __int8 *v22; 
  unsigned __int8 v23; 
  _BYTE *v24; 
  char v25; 
  unsigned __int8 v26; 

  v4 = (int)blockDataSize;
  if ( !compressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 255, ASSERT_TYPE_ASSERT, "(compressedSize)", (const char *)&queryFormat, "compressedSize") )
    __debugbreak();
  *compressedSize = 0;
  if ( this->m_compressionType != EXR_RLE_COMPRESSION )
    return 0i64;
  m_dataBuffer = this->m_dataBuffer;
  if ( m_dataBuffer )
  {
    m_tempBuffer = this->m_tempBuffer;
    if ( m_tempBuffer )
    {
      v10 = this->m_tempBuffer;
      v11 = &m_tempBuffer[(unsigned __int64)(unsigned int)(v4 + 1) >> 1];
      for ( i = &m_dataBuffer[(unsigned int)v4]; m_dataBuffer < i; *v11++ = v15 )
      {
        v13 = *m_dataBuffer;
        v14 = m_dataBuffer + 1;
        *v10++ = v13;
        if ( v14 >= i )
          break;
        v15 = *v14;
        m_dataBuffer = v14 + 1;
      }
      v16 = *m_tempBuffer;
      for ( j = m_tempBuffer + 1; j < &m_tempBuffer[(unsigned int)v4]; ++j )
      {
        v18 = *j - v16;
        v16 = *j;
        *j = v18 + 0x80;
      }
      v19 = this->m_tempBuffer;
      v20 = dest;
      v21 = (unsigned __int64)&v19[v4];
      v22 = v19 + 1;
      if ( v19 < &v19[v4] )
      {
        do
        {
          for ( ; (unsigned __int64)v22 < v21; ++v22 )
          {
            if ( *v19 != *v22 )
              break;
            if ( (__int64)&v22[~(unsigned __int64)v19] >= 127 )
              break;
          }
          if ( v22 - v19 < 3 )
          {
            if ( (unsigned __int64)v22 < v21 )
            {
              v24 = v22 + 2;
              do
              {
                if ( (unsigned __int64)(v24 - 1) < v21 )
                {
                  v25 = *(v24 - 1);
                  if ( *v22 == v25 && (unsigned __int64)v24 < v21 && v25 == *v24 )
                    break;
                }
                if ( (__int64)&v24[-2i64 - (_QWORD)v19] >= 127 )
                  break;
                ++v22;
                ++v24;
              }
              while ( (unsigned __int64)v22 < v21 );
            }
            for ( *v20++ = (_BYTE)v19 - (_BYTE)v22; v19 < v22; ++v20 )
            {
              v26 = *v19++;
              *v20 = v26;
            }
          }
          else
          {
            *v20 = (_BYTE)v22 - (_BYTE)v19 - 1;
            v23 = *v19;
            v19 = v22;
            v20[1] = v23;
            v20 += 2;
          }
          ++v22;
        }
        while ( (unsigned __int64)v19 < v21 );
      }
      *compressedSize = (_DWORD)v20 - (_DWORD)dest;
      return 0i64;
    }
  }
  return 19i64;
}

/*
==============
EXR_RleCompress
==============
*/
__int64 EXR_RleCompress(int inLength, unsigned __int8 *src, unsigned __int8 *dst)
{
  unsigned __int8 *v3; 
  unsigned __int8 *v4; 
  int v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *i; 
  unsigned __int8 v8; 
  unsigned __int8 *v9; 
  char v10; 
  unsigned __int8 v11; 

  v3 = src + 1;
  v4 = &src[inLength];
  v5 = (int)dst;
  v6 = src;
  for ( i = dst; v6 < v4; ++v3 )
  {
    for ( ; v3 < v4; ++v3 )
    {
      if ( *v6 != *v3 )
        break;
      if ( (__int64)&v3[~(unsigned __int64)v6] >= 127 )
        break;
    }
    if ( v3 - v6 < 3 )
    {
      if ( v3 < v4 )
      {
        v9 = v3 + 2;
        do
        {
          if ( v9 - 1 < v4 )
          {
            v10 = *(v9 - 1);
            if ( *v3 == v10 && v9 < v4 && v10 == *v9 )
              break;
          }
          if ( (__int64)&v9[-2i64 - (_QWORD)v6] >= 127 )
            break;
          ++v3;
          ++v9;
        }
        while ( v3 < v4 );
      }
      for ( *i++ = (_BYTE)v6 - (_BYTE)v3; v6 < v3; ++i )
      {
        v11 = *v6++;
        *i = v11;
      }
    }
    else
    {
      *i = (_BYTE)v3 - (_BYTE)v6 - 1;
      v8 = *v6;
      v6 = v3;
      i[1] = v8;
      i += 2;
    }
  }
  return (unsigned int)((_DWORD)i - v5);
}

/*
==============
EXR_WriteImage
==============
*/
__int64 EXR_WriteImage(BufferedStream *bufferedStream, ExrWriteDesc *desc, ExrPixelSource *source)
{
  signed __int64 v3; 
  void *v4; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 
  unsigned int channelCount; 
  unsigned int v17; 
  unsigned int v18; 
  ExrPixelType pixelType; 
  unsigned __int8 *v20; 
  unsigned __int8 *v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  unsigned __int8 *v28; 
  unsigned __int8 *v29; 
  unsigned __int8 *v30; 
  unsigned __int8 *v31; 
  unsigned __int8 *v32; 
  unsigned __int8 compression; 
  unsigned __int8 *v34; 
  unsigned __int8 *v35; 
  unsigned __int8 *v36; 
  unsigned __int8 *v37; 
  unsigned __int8 *v38; 
  unsigned __int8 *v39; 
  unsigned __int8 *v40; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  unsigned __int8 *v43; 
  unsigned __int8 *v44; 
  unsigned __int8 *v45; 
  unsigned __int8 *v46; 
  unsigned __int8 *v47; 
  unsigned __int8 *v48; 
  unsigned __int8 *v49; 
  unsigned __int8 *v50; 
  unsigned __int8 *v51; 
  unsigned __int8 *v52; 
  unsigned __int8 *v53; 
  unsigned __int8 *v54; 
  unsigned __int8 *v55; 
  unsigned __int8 *v56; 
  unsigned __int8 *v57; 
  unsigned __int8 *v58; 
  unsigned __int8 *v59; 
  unsigned __int8 *v60; 
  unsigned __int8 *v61; 
  unsigned __int8 *v62; 
  unsigned __int8 *v63; 
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  unsigned __int8 *v66; 
  unsigned __int8 *v67; 
  unsigned __int8 *v68; 
  unsigned __int8 *v69; 
  unsigned __int8 *v70; 
  unsigned __int8 *v71; 
  unsigned __int8 *v72; 
  unsigned __int8 *v73; 
  unsigned __int8 *v74; 
  unsigned __int8 *v75; 
  unsigned __int8 *v76; 
  unsigned __int8 *v77; 
  unsigned __int8 *v78; 
  unsigned __int8 *v79; 
  unsigned __int8 *v80; 
  unsigned __int8 *v81; 
  unsigned __int8 *v82; 
  unsigned __int8 *v83; 
  unsigned __int8 *v84; 
  unsigned __int8 *v85; 
  unsigned __int8 *v86; 
  unsigned __int8 *v87; 
  unsigned __int8 *v88; 
  unsigned __int8 *v89; 
  unsigned __int8 *v90; 
  unsigned __int8 *v91; 
  unsigned __int8 *v92; 
  unsigned __int8 *v93; 
  unsigned __int8 *v94; 
  unsigned __int8 *v95; 
  unsigned __int8 *v96; 
  unsigned __int8 *v97; 
  unsigned __int8 *v98; 
  unsigned __int8 *v99; 
  unsigned __int8 *v100; 
  unsigned __int8 *v101; 
  unsigned __int8 *v102; 
  unsigned int ScanlinesPerBlock; 
  unsigned int v104; 
  __int64 v105; 
  unsigned int v106; 
  __int64 v107; 
  unsigned __int8 *v108; 
  unsigned __int8 *v109; 
  int Box2iWidth; 
  unsigned int v111; 
  unsigned __int8 *m_dataBuffer; 
  int v113; 
  ExrWriteDesc *v114; 
  unsigned int v115; 
  ExrPixelSource *v116; 
  int yMax; 
  unsigned __int64 v118; 
  BufferedStreamWriter **v119; 
  __int64 v120; 
  BufferedStreamWriter *v121; 
  unsigned __int8 *v122; 
  unsigned __int8 *v123; 
  int v124; 
  BufferedStreamWriter stream; 
  unsigned __int8 src[4]; 
  unsigned __int8 v127[8]; 
  unsigned __int8 v128[4]; 
  ExrAttributeWriter v129; 
  ExrWriteDesc *desca; 
  __int64 v131; 
  ExrBox2i exrBox2i; 
  ExrBox2i blockRegion; 
  ExrCompressor buffer; 
  __int64 v135[4096]; 

  v4 = alloca(v3);
  v131 = -2i64;
  *(_QWORD *)&blockRegion.xMin = source;
  desca = desc;
  if ( !bufferedStream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 444, ASSERT_TYPE_ASSERT, "(bufferedStream)", (const char *)&queryFormat, "bufferedStream") )
    __debugbreak();
  if ( !desc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 445, ASSERT_TYPE_ASSERT, "(desc)", (const char *)&queryFormat, "desc") )
    __debugbreak();
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 446, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( !desc->channelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 448, ASSERT_TYPE_ASSERT, "(desc->channelCount > 0)", (const char *)&queryFormat, "desc->channelCount > 0") )
    __debugbreak();
  if ( desc->width <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 449, ASSERT_TYPE_ASSERT, "(desc->width > 0)", (const char *)&queryFormat, "desc->width > 0") )
    __debugbreak();
  if ( desc->height <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_format_exr_write.cpp", 450, ASSERT_TYPE_ASSERT, "(desc->height > 0)", (const char *)&queryFormat, "desc->height > 0") )
    __debugbreak();
  if ( desc->compression > EXR_RLE_COMPRESSION )
    return 10i64;
  stream.m_stream = bufferedStream;
  *(float *)src = 3.2543817e-38;
  end = bufferedStream->end;
  current = bufferedStream->current;
  if ( end <= current || (unsigned __int64)(end - current) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)current = 20000630;
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = 2;
  v11 = stream.m_stream->end;
  v12 = stream.m_stream->current;
  if ( v11 <= v12 || (unsigned __int64)(v11 - v12) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v12 = 2;
    stream.m_stream->current += 4;
  }
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "channels");
  BufferedStreamWriter::WriteString(&stream, "chlist");
  v13 = 0;
  *(float *)src = 0.0;
  v14 = stream.m_stream->end;
  v15 = stream.m_stream->current;
  if ( v14 <= v15 || (unsigned __int64)(v14 - v15) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v15 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(_QWORD *)&buffer.m_compressionType = "A";
  buffer.m_dataBuffer = "B";
  *(_QWORD *)&buffer.m_tempBufferSize = "G";
  buffer.m_tempBuffer = "R";
  channelCount = desc->channelCount;
  v17 = 4 - channelCount;
  v18 = 0;
  if ( channelCount )
  {
    do
    {
      pixelType = desc->pixelType;
      BufferedStreamWriter::WriteString(&stream, *((const char **)&buffer.m_compressionType + v18 + v17));
      *(_DWORD *)v128 = pixelType;
      v20 = stream.m_stream->end;
      v21 = stream.m_stream->current;
      if ( v20 <= v21 || (unsigned __int64)(v20 - v21) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
      }
      else
      {
        *(_DWORD *)v21 = pixelType;
        stream.m_stream->current += 4;
      }
      v127[0] = 1;
      v22 = stream.m_stream->current;
      if ( stream.m_stream->end <= v22 )
      {
        BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
      }
      else
      {
        *v22 = 1;
        ++stream.m_stream->current;
      }
      v127[0] = 0;
      v23 = stream.m_stream->current;
      if ( stream.m_stream->end <= v23 )
      {
        BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
      }
      else
      {
        *v23 = 0;
        ++stream.m_stream->current;
      }
      v127[0] = 0;
      v24 = stream.m_stream->current;
      if ( stream.m_stream->end <= v24 )
      {
        BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
      }
      else
      {
        *v24 = 0;
        ++stream.m_stream->current;
      }
      v127[0] = 0;
      v25 = stream.m_stream->current;
      if ( stream.m_stream->end <= v25 )
      {
        BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
      }
      else
      {
        *v25 = 0;
        ++stream.m_stream->current;
      }
      *(_DWORD *)v128 = 1;
      v26 = stream.m_stream->end;
      v27 = stream.m_stream->current;
      if ( v26 <= v27 || (unsigned __int64)(v26 - v27) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
      }
      else
      {
        *(_DWORD *)v27 = 1;
        stream.m_stream->current += 4;
      }
      *(_DWORD *)v128 = 1;
      v28 = stream.m_stream->end;
      v29 = stream.m_stream->current;
      if ( v28 <= v29 || (unsigned __int64)(v28 - v29) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
      }
      else
      {
        *(_DWORD *)v29 = 1;
        stream.m_stream->current += 4;
      }
      ++v18;
    }
    while ( v18 < desc->channelCount );
  }
  v127[0] = 0;
  v30 = stream.m_stream->current;
  if ( stream.m_stream->end <= v30 )
  {
    BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
  }
  else
  {
    *v30 = 0;
    ++stream.m_stream->current;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "compression");
  BufferedStreamWriter::WriteString(&stream, "compression");
  *(_DWORD *)v128 = 0;
  v31 = stream.m_stream->end;
  v32 = stream.m_stream->current;
  if ( v31 <= v32 || (unsigned __int64)(v31 - v32) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v32 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  compression = desc->compression;
  v127[0] = compression;
  v34 = stream.m_stream->current;
  if ( stream.m_stream->end <= v34 )
  {
    BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
  }
  else
  {
    *v34 = compression;
    ++stream.m_stream->current;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  *(_QWORD *)&exrBox2i.xMin = 0i64;
  exrBox2i.xMax = desc->width - 1;
  exrBox2i.yMax = desc->height - 1;
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "dataWindow");
  BufferedStreamWriter::WriteString(&stream, "box2i");
  *(_DWORD *)v128 = 0;
  v35 = stream.m_stream->end;
  v36 = stream.m_stream->current;
  if ( v35 <= v36 || (unsigned __int64)(v35 - v36) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v36 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(float *)src = *(float *)&exrBox2i.xMin;
  v37 = stream.m_stream->end;
  v38 = stream.m_stream->current;
  if ( v37 <= v38 || (unsigned __int64)(v37 - v38) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v38 = exrBox2i.xMin;
    stream.m_stream->current += 4;
  }
  *(float *)src = *(float *)&exrBox2i.yMin;
  v39 = stream.m_stream->end;
  v40 = stream.m_stream->current;
  if ( v39 <= v40 || (unsigned __int64)(v39 - v40) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v40 = exrBox2i.yMin;
    stream.m_stream->current += 4;
  }
  *(float *)src = *(float *)&exrBox2i.xMax;
  v41 = stream.m_stream->end;
  v42 = stream.m_stream->current;
  if ( v41 <= v42 || (unsigned __int64)(v41 - v42) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v42 = exrBox2i.xMax;
    stream.m_stream->current += 4;
  }
  *(float *)src = *(float *)&exrBox2i.yMax;
  v43 = stream.m_stream->end;
  v44 = stream.m_stream->current;
  if ( v43 <= v44 || (unsigned __int64)(v43 - v44) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v44 = exrBox2i.yMax;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  v129 = (ExrAttributeWriter)exrBox2i;
  *(_QWORD *)&buffer.m_compressionType = &stream;
  BufferedStreamWriter::WriteString(&stream, "displayWindow");
  BufferedStreamWriter::WriteString(&stream, "box2i");
  *(_DWORD *)v128 = 0;
  v45 = stream.m_stream->end;
  v46 = stream.m_stream->current;
  if ( v45 <= v46 || (unsigned __int64)(v45 - v46) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v46 = 0;
    stream.m_stream->current += 4;
  }
  buffer.m_dataBuffer = (unsigned __int8 *)((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(float *)src = *(float *)&v129.m_outputStream;
  v47 = stream.m_stream->end;
  v48 = stream.m_stream->current;
  if ( v47 <= v48 || (unsigned __int64)(v47 - v48) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v48 = v129.m_outputStream;
    stream.m_stream->current += 4;
  }
  *(float *)src = *((float *)&v129.m_outputStream + 1);
  v49 = stream.m_stream->end;
  v50 = stream.m_stream->current;
  if ( v49 <= v50 || (unsigned __int64)(v49 - v50) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v50 = HIDWORD(v129.m_outputStream);
    stream.m_stream->current += 4;
  }
  *(float *)src = *(float *)&v129.m_attributeValueOffset;
  v51 = stream.m_stream->end;
  v52 = stream.m_stream->current;
  if ( v51 <= v52 || (unsigned __int64)(v51 - v52) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v52 = v129.m_attributeValueOffset;
    stream.m_stream->current += 4;
  }
  *(float *)src = *((float *)&v129.m_attributeValueOffset + 1);
  v53 = stream.m_stream->end;
  v54 = stream.m_stream->current;
  if ( v53 <= v54 || (unsigned __int64)(v53 - v54) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v54 = HIDWORD(v129.m_attributeValueOffset);
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter((ExrAttributeWriter *)&buffer);
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "lineOrder");
  BufferedStreamWriter::WriteString(&stream, "lineOrder");
  *(_DWORD *)v128 = 0;
  v55 = stream.m_stream->end;
  v56 = stream.m_stream->current;
  if ( v55 <= v56 || (unsigned __int64)(v55 - v56) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v56 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  v127[0] = 0;
  v57 = stream.m_stream->current;
  if ( stream.m_stream->end <= v57 )
  {
    BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
  }
  else
  {
    *v57 = 0;
    ++stream.m_stream->current;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "pixelAspectRatio");
  BufferedStreamWriter::WriteString(&stream, "float");
  *(_DWORD *)v128 = 0;
  v58 = stream.m_stream->end;
  v59 = stream.m_stream->current;
  if ( v58 <= v59 || (unsigned __int64)(v58 - v59) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v59 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(float *)src = FLOAT_1_0;
  v60 = stream.m_stream->end;
  v61 = stream.m_stream->current;
  if ( v60 <= v61 || (unsigned __int64)(v60 - v61) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v61 = 1065353216;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "screenWindowCenter");
  BufferedStreamWriter::WriteString(&stream, "v2f");
  *(_DWORD *)v128 = 0;
  v62 = stream.m_stream->end;
  v63 = stream.m_stream->current;
  if ( v62 <= v63 || (unsigned __int64)(v62 - v63) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v63 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(float *)src = 0.0;
  v64 = stream.m_stream->end;
  v65 = stream.m_stream->current;
  if ( v64 <= v65 || (unsigned __int64)(v64 - v65) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v65 = 0;
    stream.m_stream->current += 4;
  }
  *(float *)src = 0.0;
  v66 = stream.m_stream->end;
  v67 = stream.m_stream->current;
  if ( v66 <= v67 || (unsigned __int64)(v66 - v67) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v67 = 0;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  v129.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "screenWindowWidth");
  BufferedStreamWriter::WriteString(&stream, "float");
  *(_DWORD *)v128 = 0;
  v68 = stream.m_stream->end;
  v69 = stream.m_stream->current;
  if ( v68 <= v69 || (unsigned __int64)(v68 - v69) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
  }
  else
  {
    *(_DWORD *)v69 = 0;
    stream.m_stream->current += 4;
  }
  v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(float *)src = FLOAT_1_0;
  v70 = stream.m_stream->end;
  v71 = stream.m_stream->current;
  if ( v70 <= v71 || (unsigned __int64)(v70 - v71) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v71 = 1065353216;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v129);
  if ( desc->chromaticities )
  {
    v129.m_outputStream = &stream;
    BufferedStreamWriter::WriteString(&stream, "chromaticities");
    BufferedStreamWriter::WriteString(&stream, "chromaticities");
    *(_DWORD *)v128 = 0;
    v72 = stream.m_stream->end;
    v73 = stream.m_stream->current;
    if ( v72 <= v73 || (unsigned __int64)(v72 - v73) < 4 )
    {
      BufferedStreamWriter::WriteData(&stream, v128, 4ui64);
    }
    else
    {
      *(_DWORD *)v73 = 0;
      stream.m_stream->current += 4;
    }
    v129.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
    if ( desc->chromaticities == sRGB )
    {
      *(float *)src = FLOAT_0_63999999;
      v86 = stream.m_stream->end;
      v87 = stream.m_stream->current;
      if ( v86 <= v87 || (unsigned __int64)(v86 - v87) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v87 = 1059313418;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_33000001;
      v88 = stream.m_stream->end;
      v89 = stream.m_stream->current;
      if ( v88 <= v89 || (unsigned __int64)(v88 - v89) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v89 = 1051260355;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_30000001;
      v90 = stream.m_stream->end;
      v91 = stream.m_stream->current;
      if ( v90 <= v91 || (unsigned __int64)(v90 - v91) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v91 = 1050253722;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_60000002;
      v92 = stream.m_stream->end;
      v93 = stream.m_stream->current;
      if ( v92 <= v93 || (unsigned __int64)(v92 - v93) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v93 = 1058642330;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_15000001;
      v94 = stream.m_stream->end;
      v95 = stream.m_stream->current;
      if ( v94 <= v95 || (unsigned __int64)(v94 - v95) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v95 = 1041865114;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_059999999;
      v96 = stream.m_stream->end;
      v97 = stream.m_stream->current;
      if ( v96 > v97 && (unsigned __int64)(v96 - v97) >= 4 )
      {
        *(_DWORD *)v97 = 1031127695;
        stream.m_stream->current += 4;
        goto LABEL_198;
      }
    }
    else
    {
      if ( desc->chromaticities != BT2020 )
      {
LABEL_206:
        ExrAttributeWriter::~ExrAttributeWriter(&v129);
        goto LABEL_207;
      }
      *(float *)src = FLOAT_0_708;
      v74 = stream.m_stream->end;
      v75 = stream.m_stream->current;
      if ( v74 <= v75 || (unsigned __int64)(v74 - v75) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v75 = 1060454269;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_292;
      v76 = stream.m_stream->end;
      v77 = stream.m_stream->current;
      if ( v76 <= v77 || (unsigned __int64)(v76 - v77) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v77 = 1049985286;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_17;
      v78 = stream.m_stream->end;
      v79 = stream.m_stream->current;
      if ( v78 <= v79 || (unsigned __int64)(v78 - v79) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v79 = 1043207291;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_79699999;
      v80 = stream.m_stream->end;
      v81 = stream.m_stream->current;
      if ( v80 <= v81 || (unsigned __int64)(v80 - v81) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v81 = 1061947441;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_131;
      v82 = stream.m_stream->end;
      v83 = stream.m_stream->current;
      if ( v82 <= v83 || (unsigned __int64)(v82 - v83) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v83 = 1040590045;
        stream.m_stream->current += 4;
      }
      *(float *)src = FLOAT_0_046;
      v84 = stream.m_stream->end;
      v85 = stream.m_stream->current;
      if ( v84 > v85 && (unsigned __int64)(v84 - v85) >= 4 )
      {
        *(_DWORD *)v85 = 1027369599;
        stream.m_stream->current += 4;
        goto LABEL_198;
      }
    }
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
LABEL_198:
    *(float *)src = FLOAT_0_3127;
    v98 = stream.m_stream->end;
    v99 = stream.m_stream->current;
    if ( v98 <= v99 || (unsigned __int64)(v98 - v99) < 4 )
    {
      BufferedStreamWriter::WriteData(&stream, src, 4ui64);
    }
    else
    {
      *(_DWORD *)v99 = 1050679863;
      stream.m_stream->current += 4;
    }
    *(float *)src = FLOAT_0_329;
    v100 = stream.m_stream->current;
    v101 = stream.m_stream->end;
    if ( v101 <= v100 || (unsigned __int64)(v101 - v100) < 4 )
    {
      BufferedStreamWriter::WriteData(&stream, src, 4ui64);
    }
    else
    {
      *(_DWORD *)v100 = 1051226800;
      stream.m_stream->current += 4;
    }
    goto LABEL_206;
  }
LABEL_207:
  v127[0] = 0;
  v102 = stream.m_stream->current;
  if ( stream.m_stream->end <= v102 )
  {
    BufferedStreamWriter::WriteData(&stream, v127, 1ui64);
  }
  else
  {
    *v102 = 0;
    ++stream.m_stream->current;
  }
  ScanlinesPerBlock = EXR_GetScanlinesPerBlock((const ExrCompression)desc->compression);
  v104 = exrBox2i.yMin / ScanlinesPerBlock;
  HIDWORD(v105) = 0;
  *(_DWORD *)src = exrBox2i.yMax / ScanlinesPerBlock;
  v106 = exrBox2i.yMax / ScanlinesPerBlock - exrBox2i.yMin / ScanlinesPerBlock + 1;
  *(_DWORD *)v128 = v106;
  if ( v106 >= 0x1000 )
    return 16i64;
  LODWORD(v105) = exrBox2i.yMax % ScanlinesPerBlock;
  v129.m_outputStream = (BufferedStreamWriter *)((__int64 (__fastcall *)(BufferedStream *, __int64))stream.m_stream->GetPosition)(stream.m_stream, v105);
  if ( v106 )
  {
    v107 = v106;
    do
    {
      *(_QWORD *)&buffer.m_compressionType = 0i64;
      v108 = stream.m_stream->end;
      v109 = stream.m_stream->current;
      if ( v108 <= v109 || (unsigned __int64)(v108 - v109) < 8 )
      {
        BufferedStreamWriter::WriteData(&stream, (unsigned __int8 *)&buffer, 8ui64);
      }
      else
      {
        *(_QWORD *)v109 = 0i64;
        stream.m_stream->current += 8;
      }
      --v107;
    }
    while ( v107 );
  }
  Box2iWidth = EXR_GetBox2iWidth(&exrBox2i);
  v111 = ScanlinesPerBlock * Box2iWidth * EXR_GetSizeofPixelType((const ExrPixelType)desc->pixelType) * desc->channelCount;
  buffer.m_compressionType = desc->compression;
  buffer.m_dataBufferSize = 0;
  m_dataBuffer = NULL;
  buffer.m_dataBuffer = NULL;
  buffer.m_tempBufferSize = 0;
  buffer.m_tempBuffer = NULL;
  if ( buffer.m_compressionType == EXR_RLE_COMPRESSION )
  {
    buffer.m_dataBufferSize = (3 * v111) >> 1;
    m_dataBuffer = (unsigned __int8 *)EXR_TempAlloc(buffer.m_dataBufferSize);
    buffer.m_dataBuffer = m_dataBuffer;
    buffer.m_tempBufferSize = v111;
    buffer.m_tempBuffer = (unsigned __int8 *)EXR_TempAlloc(v111);
  }
  if ( v104 <= *(_DWORD *)src )
  {
    v113 = ScanlinesPerBlock * v104;
    v114 = desca;
    v115 = *(_DWORD *)src;
    v116 = *(ExrPixelSource **)&blockRegion.xMin;
    do
    {
      v135[v104] = ((__int64 (*)(void))stream.m_stream->GetPosition)();
      blockRegion.xMin = exrBox2i.xMin;
      blockRegion.xMax = exrBox2i.xMax;
      blockRegion.yMin = v113 + exrBox2i.yMin;
      yMax = v113 + exrBox2i.yMin + ScanlinesPerBlock - 1;
      if ( yMax > exrBox2i.yMax )
        yMax = exrBox2i.yMax;
      blockRegion.yMax = yMax;
      EXR_WriteScanlineBlockData(&blockRegion, v114, v116, &buffer, &stream);
      ++v104;
      v113 += ScanlinesPerBlock;
    }
    while ( v104 <= v115 );
    v13 = 0;
    v106 = *(_DWORD *)v128;
    m_dataBuffer = buffer.m_dataBuffer;
  }
  v118 = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  stream.m_stream->SetPosition(stream.m_stream, (unsigned __int64)v129.m_outputStream);
  if ( v106 )
  {
    v119 = (BufferedStreamWriter **)v135;
    v120 = v106;
    do
    {
      v121 = *v119;
      v129.m_outputStream = *v119;
      v122 = stream.m_stream->end;
      v123 = stream.m_stream->current;
      if ( v122 <= v123 || (unsigned __int64)(v122 - v123) < 8 )
      {
        BufferedStreamWriter::WriteData(&stream, (unsigned __int8 *)&v129, 8ui64);
      }
      else
      {
        *(_QWORD *)v123 = v121;
        stream.m_stream->current += 8;
      }
      ++v119;
      --v120;
    }
    while ( v120 );
  }
  stream.m_stream->SetPosition(stream.m_stream, v118);
  v124 = *(_DWORD *)stream.m_stream->status;
  if ( v124 )
  {
    LOBYTE(v13) = (unsigned int)(v124 - 1) <= 2;
    ++v13;
  }
  if ( buffer.m_tempBuffer )
    EXR_TempFree(buffer.m_tempBuffer);
  if ( m_dataBuffer )
    EXR_TempFree(m_dataBuffer);
  return v13;
}

/*
==============
EXR_WriteImage_EstimateBlockDataSize
==============
*/
__int64 EXR_WriteImage_EstimateBlockDataSize(ExrWriteDesc *desc)
{
  int height; 
  unsigned int ScanlinesPerBlock; 

  height = desc->height;
  ScanlinesPerBlock = EXR_GetScanlinesPerBlock((const ExrCompression)desc->compression);
  return (desc->channelCount * EXR_GetSizeofPixelType((const ExrPixelType)desc->pixelType) * desc->width + 8i64) * desc->height + 8i64 * ((ScanlinesPerBlock + height - 1) / ScanlinesPerBlock);
}

/*
==============
EXR_WriteImage_EstimateBufferSize
==============
*/
__int64 EXR_WriteImage_EstimateBufferSize(ExrWriteDesc *desc)
{
  int height; 
  unsigned int ScanlinesPerBlock; 

  height = desc->height;
  ScanlinesPerBlock = EXR_GetScanlinesPerBlock((const ExrCompression)desc->compression);
  return (desc->channelCount * EXR_GetSizeofPixelType((const ExrPixelType)desc->pixelType) * desc->width + 8i64) * desc->height + 8i64 * ((ScanlinesPerBlock + height - 1) / ScanlinesPerBlock) + 1024;
}

/*
==============
EXR_WriteScanlineBlockData
==============
*/
ExrStatus EXR_WriteScanlineBlockData(ExrBox2i *blockRegion, ExrWriteDesc *desc, ExrPixelSource *source, ExrCompressor *compressor, BufferedStreamWriter *stream)
{
  int Box2iHeight; 
  int Box2iWidth; 
  unsigned int SizeofPixelType; 
  int yMin; 
  unsigned int v13; 
  int v14; 
  BufferedStreamWriter *v15; 
  unsigned int v16; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  BufferedStream *m_stream; 
  unsigned __int64 v20; 
  unsigned int *v21; 
  __int64 v22; 
  BufferedStreamWriter v23; 
  __int64 v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned __int64 m_dataBufferSize; 
  unsigned __int8 *m_dataBuffer; 
  unsigned __int8 *v29; 
  unsigned __int64 v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  BufferedStreamWriter v34; 
  unsigned __int8 *v35; 
  unsigned __int8 *v36; 
  BufferedStream v38; 
  int src; 

  Box2iHeight = EXR_GetBox2iHeight(blockRegion);
  Box2iWidth = EXR_GetBox2iWidth(blockRegion);
  SizeofPixelType = EXR_GetSizeofPixelType((const ExrPixelType)desc->pixelType);
  yMin = blockRegion->yMin;
  v13 = SizeofPixelType * desc->channelCount;
  src = yMin;
  v14 = Box2iWidth * v13;
  v15 = stream;
  v16 = Box2iHeight * v14;
  end = stream->m_stream->end;
  current = stream->m_stream->current;
  if ( end <= current || (unsigned __int64)(end - current) < 4 )
  {
    BufferedStreamWriter::WriteData(stream, (unsigned __int8 *)&src, 4ui64);
  }
  else
  {
    *(_DWORD *)current = yMin;
    v15->m_stream->current += 4;
  }
  m_stream = v15->m_stream;
  if ( desc->compression == EXR_NO_COMPRESSION )
  {
    LODWORD(stream) = v16;
    v20 = (unsigned __int64)m_stream->end;
    v21 = (unsigned int *)m_stream->current;
    if ( v20 <= (unsigned __int64)v21 || v20 - (unsigned __int64)v21 < 4 )
    {
      BufferedStreamWriter::WriteData(v15, (unsigned __int8 *)&stream, 4ui64);
    }
    else
    {
      *v21 = v16;
      v15->m_stream->current += 4;
    }
    source->GetScanlineBlockData(source, desc, blockRegion, v15->m_stream);
LABEL_27:
    LOBYTE(v31) = 0;
    return (char)v31;
  }
  v22 = ((__int64 (*)(void))m_stream->GetPosition)();
  v23.m_stream = v15->m_stream;
  v24 = v22;
  LODWORD(stream) = v16;
  v25 = v23.m_stream->end;
  v26 = v23.m_stream->current;
  if ( v25 <= v26 || (unsigned __int64)(v25 - v26) < 4 )
  {
    BufferedStreamWriter::WriteData(v15, (unsigned __int8 *)&stream, 4ui64);
  }
  else
  {
    *(_DWORD *)v26 = v16;
    v15->m_stream->current += 4;
  }
  m_dataBufferSize = compressor->m_dataBufferSize;
  m_dataBuffer = compressor->m_dataBuffer;
  LODWORD(stream) = v16;
  BufferedStream_MemoryStreamInit(&v38, m_dataBuffer, m_dataBufferSize);
  source->GetScanlineBlockData(source, desc, blockRegion, &v38);
  v29 = v15->m_stream->current;
  v30 = v15->m_stream->end - v29;
  if ( v15->m_stream->end <= v29 )
    v30 = 0i64;
  if ( v30 < (unsigned __int64)(3 * v16) >> 1 )
  {
    LOBYTE(v31) = ExrCompressor::Compress(compressor, v16, compressor->m_dataBuffer, (unsigned int *)&stream);
    if ( !v31 )
    {
      v32 = (int)stream;
      BufferedStreamWriter::WriteData(v15, compressor->m_dataBuffer, (unsigned int)stream);
LABEL_22:
      v33 = ((__int64 (*)(void))v15->m_stream->GetPosition)();
      v15->m_stream->SetPosition(v15->m_stream, v24);
      v34.m_stream = v15->m_stream;
      LODWORD(stream) = v32;
      v35 = v34.m_stream->end;
      v36 = v34.m_stream->current;
      if ( v35 <= v36 || (unsigned __int64)(v35 - v36) < 4 )
      {
        BufferedStreamWriter::WriteData(v15, (unsigned __int8 *)&stream, 4ui64);
      }
      else
      {
        *(_DWORD *)v36 = v32;
        v15->m_stream->current += 4;
      }
      v15->m_stream->SetPosition(v15->m_stream, v33);
      goto LABEL_27;
    }
  }
  else
  {
    LOBYTE(v31) = ExrCompressor::Compress(compressor, v16, v29, (unsigned int *)&stream);
    if ( !v31 )
    {
      v32 = (int)stream;
      v15->m_stream->current += (unsigned int)stream;
      goto LABEL_22;
    }
  }
  return (char)v31;
}

