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
  void *v6; 
  __int64 result; 
  unsigned __int8 *end; 
  unsigned __int8 *current; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  unsigned __int8 *v16; 
  unsigned __int8 *v17; 
  unsigned int channelCount; 
  unsigned int v19; 
  unsigned int v20; 
  ExrPixelType pixelType; 
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
  unsigned __int8 *v33; 
  unsigned __int8 *v34; 
  unsigned __int8 compression; 
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
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  unsigned __int8 *v66; 
  unsigned __int8 *v67; 
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
  unsigned __int8 *v80; 
  unsigned __int8 *v81; 
  unsigned __int8 *v83; 
  unsigned __int8 *v84; 
  unsigned __int8 *v86; 
  unsigned __int8 *v87; 
  unsigned __int8 *v89; 
  unsigned __int8 *v90; 
  unsigned __int8 *v92; 
  unsigned __int8 *v93; 
  unsigned __int8 *v95; 
  unsigned __int8 *v96; 
  unsigned __int8 *v98; 
  unsigned __int8 *v99; 
  unsigned __int8 *v101; 
  unsigned __int8 *v102; 
  unsigned __int8 *v104; 
  unsigned __int8 *v105; 
  unsigned __int8 *v107; 
  unsigned __int8 *v108; 
  unsigned __int8 *v110; 
  unsigned __int8 *v111; 
  unsigned __int8 *v113; 
  unsigned __int8 *v114; 
  unsigned __int8 *v116; 
  unsigned __int8 *v117; 
  unsigned __int8 *v119; 
  unsigned __int8 *v120; 
  unsigned __int8 *v121; 
  unsigned int ScanlinesPerBlock; 
  unsigned int v123; 
  __int64 v124; 
  unsigned int v125; 
  __int64 v126; 
  unsigned __int8 *v127; 
  unsigned __int8 *v128; 
  int Box2iWidth; 
  unsigned int v130; 
  unsigned __int8 *m_dataBuffer; 
  int v132; 
  ExrWriteDesc *v133; 
  unsigned int v134; 
  ExrPixelSource *v135; 
  int yMax; 
  unsigned __int64 v137; 
  BufferedStreamWriter **v138; 
  __int64 v139; 
  BufferedStreamWriter *v140; 
  unsigned __int8 *v141; 
  unsigned __int8 *v142; 
  int v143; 
  BufferedStreamWriter stream; 
  unsigned __int8 src[4]; 
  unsigned __int8 v149[8]; 
  unsigned __int8 v150[4]; 
  ExrAttributeWriter v151; 
  ExrWriteDesc *desca; 
  __int64 v153; 
  ExrBox2i exrBox2i; 
  ExrBox2i blockRegion; 
  ExrCompressor buffer; 
  __int64 v157[4096]; 
  char v160; 

  v6 = alloca(v3);
  v153 = -2i64;
  __asm
  {
    vmovaps [rsp+8110h+var_40], xmm6
    vmovaps [rsp+8110h+var_50], xmm7
  }
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
  {
    result = 10i64;
    goto LABEL_241;
  }
  stream.m_stream = bufferedStream;
  *(_DWORD *)src = 20000630;
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
  v13 = stream.m_stream->end;
  v14 = stream.m_stream->current;
  if ( v13 <= v14 || (unsigned __int64)(v13 - v14) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v14 = 2;
    stream.m_stream->current += 4;
  }
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "channels");
  BufferedStreamWriter::WriteString(&stream, "chlist");
  v15 = 0;
  *(_DWORD *)src = 0;
  v16 = stream.m_stream->end;
  v17 = stream.m_stream->current;
  if ( v16 <= v17 || (unsigned __int64)(v16 - v17) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v17 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(_QWORD *)&buffer.m_compressionType = "A";
  buffer.m_dataBuffer = "B";
  *(_QWORD *)&buffer.m_tempBufferSize = "G";
  buffer.m_tempBuffer = "R";
  channelCount = desc->channelCount;
  v19 = 4 - channelCount;
  v20 = 0;
  if ( channelCount )
  {
    do
    {
      pixelType = desc->pixelType;
      BufferedStreamWriter::WriteString(&stream, *((const char **)&buffer.m_compressionType + v20 + v19));
      *(_DWORD *)v150 = pixelType;
      v22 = stream.m_stream->end;
      v23 = stream.m_stream->current;
      if ( v22 <= v23 || (unsigned __int64)(v22 - v23) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
      }
      else
      {
        *(_DWORD *)v23 = pixelType;
        stream.m_stream->current += 4;
      }
      v149[0] = 1;
      v24 = stream.m_stream->current;
      if ( stream.m_stream->end <= v24 )
      {
        BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
      }
      else
      {
        *v24 = 1;
        ++stream.m_stream->current;
      }
      v149[0] = 0;
      v25 = stream.m_stream->current;
      if ( stream.m_stream->end <= v25 )
      {
        BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
      }
      else
      {
        *v25 = 0;
        ++stream.m_stream->current;
      }
      v149[0] = 0;
      v26 = stream.m_stream->current;
      if ( stream.m_stream->end <= v26 )
      {
        BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
      }
      else
      {
        *v26 = 0;
        ++stream.m_stream->current;
      }
      v149[0] = 0;
      v27 = stream.m_stream->current;
      if ( stream.m_stream->end <= v27 )
      {
        BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
      }
      else
      {
        *v27 = 0;
        ++stream.m_stream->current;
      }
      *(_DWORD *)v150 = 1;
      v28 = stream.m_stream->end;
      v29 = stream.m_stream->current;
      if ( v28 <= v29 || (unsigned __int64)(v28 - v29) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
      }
      else
      {
        *(_DWORD *)v29 = 1;
        stream.m_stream->current += 4;
      }
      *(_DWORD *)v150 = 1;
      v30 = stream.m_stream->end;
      v31 = stream.m_stream->current;
      if ( v30 <= v31 || (unsigned __int64)(v30 - v31) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
      }
      else
      {
        *(_DWORD *)v31 = 1;
        stream.m_stream->current += 4;
      }
      ++v20;
    }
    while ( v20 < desc->channelCount );
  }
  v149[0] = 0;
  v32 = stream.m_stream->current;
  if ( stream.m_stream->end <= v32 )
  {
    BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
  }
  else
  {
    *v32 = 0;
    ++stream.m_stream->current;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "compression");
  BufferedStreamWriter::WriteString(&stream, "compression");
  *(_DWORD *)v150 = 0;
  v33 = stream.m_stream->end;
  v34 = stream.m_stream->current;
  if ( v33 <= v34 || (unsigned __int64)(v33 - v34) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v34 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  compression = desc->compression;
  v149[0] = compression;
  v36 = stream.m_stream->current;
  if ( stream.m_stream->end <= v36 )
  {
    BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
  }
  else
  {
    *v36 = compression;
    ++stream.m_stream->current;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  *(_QWORD *)&exrBox2i.xMin = 0i64;
  exrBox2i.xMax = desc->width - 1;
  exrBox2i.yMax = desc->height - 1;
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "dataWindow");
  BufferedStreamWriter::WriteString(&stream, "box2i");
  *(_DWORD *)v150 = 0;
  v37 = stream.m_stream->end;
  v38 = stream.m_stream->current;
  if ( v37 <= v38 || (unsigned __int64)(v37 - v38) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v38 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(_DWORD *)src = exrBox2i.xMin;
  v39 = stream.m_stream->end;
  v40 = stream.m_stream->current;
  if ( v39 <= v40 || (unsigned __int64)(v39 - v40) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v40 = exrBox2i.xMin;
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = exrBox2i.yMin;
  v41 = stream.m_stream->end;
  v42 = stream.m_stream->current;
  if ( v41 <= v42 || (unsigned __int64)(v41 - v42) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v42 = exrBox2i.yMin;
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = exrBox2i.xMax;
  v43 = stream.m_stream->end;
  v44 = stream.m_stream->current;
  if ( v43 <= v44 || (unsigned __int64)(v43 - v44) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v44 = exrBox2i.xMax;
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = exrBox2i.yMax;
  v45 = stream.m_stream->end;
  v46 = stream.m_stream->current;
  if ( v45 <= v46 || (unsigned __int64)(v45 - v46) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v46 = exrBox2i.yMax;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+8110h+exrBox2i.xMin]
    vmovdqa xmmword ptr [rsp+8110h+var_80C0.m_outputStream], xmm0
  }
  *(_QWORD *)&buffer.m_compressionType = &stream;
  BufferedStreamWriter::WriteString(&stream, "displayWindow");
  BufferedStreamWriter::WriteString(&stream, "box2i");
  *(_DWORD *)v150 = 0;
  v48 = stream.m_stream->end;
  v49 = stream.m_stream->current;
  if ( v48 <= v49 || (unsigned __int64)(v48 - v49) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v49 = 0;
    stream.m_stream->current += 4;
  }
  buffer.m_dataBuffer = (unsigned __int8 *)((__int64 (*)(void))stream.m_stream->GetPosition)();
  *(_DWORD *)src = v151.m_outputStream;
  v50 = stream.m_stream->end;
  v51 = stream.m_stream->current;
  if ( v50 <= v51 || (unsigned __int64)(v50 - v51) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v51 = v151.m_outputStream;
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = HIDWORD(v151.m_outputStream);
  v52 = stream.m_stream->end;
  v53 = stream.m_stream->current;
  if ( v52 <= v53 || (unsigned __int64)(v52 - v53) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v53 = HIDWORD(v151.m_outputStream);
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = v151.m_attributeValueOffset;
  v54 = stream.m_stream->end;
  v55 = stream.m_stream->current;
  if ( v54 <= v55 || (unsigned __int64)(v54 - v55) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v55 = v151.m_attributeValueOffset;
    stream.m_stream->current += 4;
  }
  *(_DWORD *)src = HIDWORD(v151.m_attributeValueOffset);
  v56 = stream.m_stream->end;
  v57 = stream.m_stream->current;
  if ( v56 <= v57 || (unsigned __int64)(v56 - v57) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v57 = HIDWORD(v151.m_attributeValueOffset);
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter((ExrAttributeWriter *)&buffer);
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "lineOrder");
  BufferedStreamWriter::WriteString(&stream, "lineOrder");
  *(_DWORD *)v150 = 0;
  v58 = stream.m_stream->end;
  v59 = stream.m_stream->current;
  if ( v58 <= v59 || (unsigned __int64)(v58 - v59) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v59 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  v149[0] = 0;
  v60 = stream.m_stream->current;
  if ( stream.m_stream->end <= v60 )
  {
    BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
  }
  else
  {
    *v60 = 0;
    ++stream.m_stream->current;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "pixelAspectRatio");
  BufferedStreamWriter::WriteString(&stream, "float");
  *(_DWORD *)v150 = 0;
  v61 = stream.m_stream->end;
  v62 = stream.m_stream->current;
  if ( v61 <= v62 || (unsigned __int64)(v61 - v62) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v62 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  dword ptr [rsp+8110h+src], xmm7
  }
  v64 = stream.m_stream->end;
  v65 = stream.m_stream->current;
  if ( v64 <= v65 || (unsigned __int64)(v64 - v65) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v65 = 1065353216;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "screenWindowCenter");
  BufferedStreamWriter::WriteString(&stream, "v2f");
  *(_DWORD *)v150 = 0;
  v66 = stream.m_stream->end;
  v67 = stream.m_stream->current;
  if ( v66 <= v67 || (unsigned __int64)(v66 - v67) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v67 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+8110h+src], xmm6
  }
  v69 = stream.m_stream->end;
  v70 = stream.m_stream->current;
  if ( v69 <= v70 || (unsigned __int64)(v69 - v70) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v70 = 0;
    stream.m_stream->current += 4;
  }
  __asm { vmovss  dword ptr [rsp+8110h+src], xmm6 }
  v71 = stream.m_stream->end;
  v72 = stream.m_stream->current;
  if ( v71 <= v72 || (unsigned __int64)(v71 - v72) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v72 = 0;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  v151.m_outputStream = &stream;
  BufferedStreamWriter::WriteString(&stream, "screenWindowWidth");
  BufferedStreamWriter::WriteString(&stream, "float");
  *(_DWORD *)v150 = 0;
  v73 = stream.m_stream->end;
  v74 = stream.m_stream->current;
  if ( v73 <= v74 || (unsigned __int64)(v73 - v74) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
  }
  else
  {
    *(_DWORD *)v74 = 0;
    stream.m_stream->current += 4;
  }
  v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
  __asm { vmovss  dword ptr [rsp+8110h+src], xmm7 }
  v75 = stream.m_stream->end;
  v76 = stream.m_stream->current;
  if ( v75 <= v76 || (unsigned __int64)(v75 - v76) < 4 )
  {
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
  }
  else
  {
    *(_DWORD *)v76 = 1065353216;
    stream.m_stream->current += 4;
  }
  ExrAttributeWriter::~ExrAttributeWriter(&v151);
  if ( desc->chromaticities )
  {
    v151.m_outputStream = &stream;
    BufferedStreamWriter::WriteString(&stream, "chromaticities");
    BufferedStreamWriter::WriteString(&stream, "chromaticities");
    *(_DWORD *)v150 = 0;
    v77 = stream.m_stream->end;
    v78 = stream.m_stream->current;
    if ( v77 <= v78 || (unsigned __int64)(v77 - v78) < 4 )
    {
      BufferedStreamWriter::WriteData(&stream, v150, 4ui64);
    }
    else
    {
      *(_DWORD *)v78 = 0;
      stream.m_stream->current += 4;
    }
    v151.m_attributeValueOffset = ((__int64 (*)(void))stream.m_stream->GetPosition)();
    if ( desc->chromaticities == sRGB )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f23d70a
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v98 = stream.m_stream->end;
      v99 = stream.m_stream->current;
      if ( v98 <= v99 || (unsigned __int64)(v98 - v99) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v99 = 1059313418;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3ea8f5c3
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v101 = stream.m_stream->end;
      v102 = stream.m_stream->current;
      if ( v101 <= v102 || (unsigned __int64)(v101 - v102) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v102 = 1051260355;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e99999a
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v104 = stream.m_stream->end;
      v105 = stream.m_stream->current;
      if ( v104 <= v105 || (unsigned __int64)(v104 - v105) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v105 = 1050253722;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f19999a
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v107 = stream.m_stream->end;
      v108 = stream.m_stream->current;
      if ( v107 <= v108 || (unsigned __int64)(v107 - v108) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v108 = 1058642330;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e19999a
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v110 = stream.m_stream->end;
      v111 = stream.m_stream->current;
      if ( v110 <= v111 || (unsigned __int64)(v110 - v111) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v111 = 1041865114;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3d75c28f
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v113 = stream.m_stream->end;
      v114 = stream.m_stream->current;
      if ( v113 > v114 && (unsigned __int64)(v113 - v114) >= 4 )
      {
        *(_DWORD *)v114 = 1031127695;
        stream.m_stream->current += 4;
        goto LABEL_198;
      }
    }
    else
    {
      if ( desc->chromaticities != BT2020 )
      {
LABEL_206:
        ExrAttributeWriter::~ExrAttributeWriter(&v151);
        goto LABEL_207;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f353f7d
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v80 = stream.m_stream->end;
      v81 = stream.m_stream->current;
      if ( v80 <= v81 || (unsigned __int64)(v80 - v81) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v81 = 1060454269;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e958106
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v83 = stream.m_stream->end;
      v84 = stream.m_stream->current;
      if ( v83 <= v84 || (unsigned __int64)(v83 - v84) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v84 = 1049985286;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e2e147b
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v86 = stream.m_stream->end;
      v87 = stream.m_stream->current;
      if ( v86 <= v87 || (unsigned __int64)(v86 - v87) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v87 = 1043207291;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f4c0831
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v89 = stream.m_stream->end;
      v90 = stream.m_stream->current;
      if ( v89 <= v90 || (unsigned __int64)(v89 - v90) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v90 = 1061947441;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e0624dd
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v92 = stream.m_stream->end;
      v93 = stream.m_stream->current;
      if ( v92 <= v93 || (unsigned __int64)(v92 - v93) < 4 )
      {
        BufferedStreamWriter::WriteData(&stream, src, 4ui64);
      }
      else
      {
        *(_DWORD *)v93 = 1040590045;
        stream.m_stream->current += 4;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3d3c6a7f
        vmovss  dword ptr [rsp+8110h+src], xmm0
      }
      v95 = stream.m_stream->end;
      v96 = stream.m_stream->current;
      if ( v95 > v96 && (unsigned __int64)(v95 - v96) >= 4 )
      {
        *(_DWORD *)v96 = 1027369599;
        stream.m_stream->current += 4;
        goto LABEL_198;
      }
    }
    BufferedStreamWriter::WriteData(&stream, src, 4ui64);
LABEL_198:
    __asm
    {
      vmovss  xmm0, cs:__real@3ea01a37
      vmovss  dword ptr [rsp+8110h+src], xmm0
    }
    v116 = stream.m_stream->end;
    v117 = stream.m_stream->current;
    if ( v116 <= v117 || (unsigned __int64)(v116 - v117) < 4 )
    {
      BufferedStreamWriter::WriteData(&stream, src, 4ui64);
    }
    else
    {
      *(_DWORD *)v117 = 1050679863;
      stream.m_stream->current += 4;
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3ea872b0
      vmovss  dword ptr [rsp+8110h+src], xmm0
    }
    v119 = stream.m_stream->current;
    v120 = stream.m_stream->end;
    if ( v120 <= v119 || (unsigned __int64)(v120 - v119) < 4 )
    {
      BufferedStreamWriter::WriteData(&stream, src, 4ui64);
    }
    else
    {
      *(_DWORD *)v119 = 1051226800;
      stream.m_stream->current += 4;
    }
    goto LABEL_206;
  }
LABEL_207:
  v149[0] = 0;
  v121 = stream.m_stream->current;
  if ( stream.m_stream->end <= v121 )
  {
    BufferedStreamWriter::WriteData(&stream, v149, 1ui64);
  }
  else
  {
    *v121 = 0;
    ++stream.m_stream->current;
  }
  ScanlinesPerBlock = EXR_GetScanlinesPerBlock((const ExrCompression)desc->compression);
  v123 = exrBox2i.yMin / ScanlinesPerBlock;
  HIDWORD(v124) = 0;
  *(_DWORD *)src = exrBox2i.yMax / ScanlinesPerBlock;
  v125 = exrBox2i.yMax / ScanlinesPerBlock - exrBox2i.yMin / ScanlinesPerBlock + 1;
  *(_DWORD *)v150 = v125;
  if ( v125 < 0x1000 )
  {
    LODWORD(v124) = exrBox2i.yMax % ScanlinesPerBlock;
    v151.m_outputStream = (BufferedStreamWriter *)((__int64 (__fastcall *)(BufferedStream *, __int64))stream.m_stream->GetPosition)(stream.m_stream, v124);
    if ( v125 )
    {
      v126 = v125;
      do
      {
        *(_QWORD *)&buffer.m_compressionType = 0i64;
        v127 = stream.m_stream->end;
        v128 = stream.m_stream->current;
        if ( v127 <= v128 || (unsigned __int64)(v127 - v128) < 8 )
        {
          BufferedStreamWriter::WriteData(&stream, (unsigned __int8 *)&buffer, 8ui64);
        }
        else
        {
          *(_QWORD *)v128 = 0i64;
          stream.m_stream->current += 8;
        }
        --v126;
      }
      while ( v126 );
    }
    Box2iWidth = EXR_GetBox2iWidth(&exrBox2i);
    v130 = ScanlinesPerBlock * Box2iWidth * EXR_GetSizeofPixelType((const ExrPixelType)desc->pixelType) * desc->channelCount;
    buffer.m_compressionType = desc->compression;
    buffer.m_dataBufferSize = 0;
    m_dataBuffer = NULL;
    buffer.m_dataBuffer = NULL;
    buffer.m_tempBufferSize = 0;
    buffer.m_tempBuffer = NULL;
    if ( buffer.m_compressionType == EXR_RLE_COMPRESSION )
    {
      buffer.m_dataBufferSize = (3 * v130) >> 1;
      m_dataBuffer = (unsigned __int8 *)EXR_TempAlloc(buffer.m_dataBufferSize);
      buffer.m_dataBuffer = m_dataBuffer;
      buffer.m_tempBufferSize = v130;
      buffer.m_tempBuffer = (unsigned __int8 *)EXR_TempAlloc(v130);
    }
    if ( v123 <= *(_DWORD *)src )
    {
      v132 = ScanlinesPerBlock * v123;
      v133 = desca;
      v134 = *(_DWORD *)src;
      v135 = *(ExrPixelSource **)&blockRegion.xMin;
      do
      {
        v157[v123] = ((__int64 (*)(void))stream.m_stream->GetPosition)();
        blockRegion.xMin = exrBox2i.xMin;
        blockRegion.xMax = exrBox2i.xMax;
        blockRegion.yMin = v132 + exrBox2i.yMin;
        yMax = v132 + exrBox2i.yMin + ScanlinesPerBlock - 1;
        if ( yMax > exrBox2i.yMax )
          yMax = exrBox2i.yMax;
        blockRegion.yMax = yMax;
        EXR_WriteScanlineBlockData(&blockRegion, v133, v135, &buffer, &stream);
        ++v123;
        v132 += ScanlinesPerBlock;
      }
      while ( v123 <= v134 );
      v15 = 0;
      v125 = *(_DWORD *)v150;
      m_dataBuffer = buffer.m_dataBuffer;
    }
    v137 = ((__int64 (*)(void))stream.m_stream->GetPosition)();
    stream.m_stream->SetPosition(stream.m_stream, (unsigned __int64)v151.m_outputStream);
    if ( v125 )
    {
      v138 = (BufferedStreamWriter **)v157;
      v139 = v125;
      do
      {
        v140 = *v138;
        v151.m_outputStream = *v138;
        v141 = stream.m_stream->end;
        v142 = stream.m_stream->current;
        if ( v141 <= v142 || (unsigned __int64)(v141 - v142) < 8 )
        {
          BufferedStreamWriter::WriteData(&stream, (unsigned __int8 *)&v151, 8ui64);
        }
        else
        {
          *(_QWORD *)v142 = v140;
          stream.m_stream->current += 8;
        }
        ++v138;
        --v139;
      }
      while ( v139 );
    }
    stream.m_stream->SetPosition(stream.m_stream, v137);
    v143 = *(_DWORD *)stream.m_stream->status;
    if ( v143 )
    {
      LOBYTE(v15) = (unsigned int)(v143 - 1) <= 2;
      ++v15;
    }
    if ( buffer.m_tempBuffer )
      EXR_TempFree(buffer.m_tempBuffer);
    if ( m_dataBuffer )
      EXR_TempFree(m_dataBuffer);
    result = v15;
  }
  else
  {
    result = 16i64;
  }
LABEL_241:
  _R11 = &v160;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
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

