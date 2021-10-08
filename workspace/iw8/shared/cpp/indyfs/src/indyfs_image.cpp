/*
==============
indyfs_image_parse_header
==============
*/

int __fastcall indyfs_image_parse_header(unsigned int *fileCount, unsigned __int64 *chunkCount, const char *filePath)
{
  return ?indyfs_image_parse_header@@YAHPEAIPEA_KPEBD@Z(fileCount, chunkCount, filePath);
}

/*
==============
indyfs_image_parse
==============
*/

int __fastcall indyfs_image_parse(IndyFsImage *image, IndyFsFile *fileArray, unsigned __int64 fileArrayLength, IndyFsChunk *chunkArray, unsigned __int64 chunkArrayLength, const char *filePath)
{
  return ?indyfs_image_parse@@YAHPEAUIndyFsImage@@PEAUIndyFsFile@@_KPEAUIndyFsChunk@@2PEBD@Z(image, fileArray, fileArrayLength, chunkArray, chunkArrayLength, filePath);
}

/*
==============
indyfs_image_parse
==============
*/
__int64 indyfs_image_parse(IndyFsImage *image, IndyFsFile *fileArray, unsigned __int64 fileArrayLength, IndyFsChunk *chunkArray, unsigned __int64 chunkArrayLength, const char *filePath)
{
  unsigned int v10; 
  bool v11; 
  IndyFsStream stream; 
  IndyFsScopedEvent v14; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v14, "Image", "Parse");
  stream.cursor = (unsigned __int8 *)&stream;
  stream.end = (unsigned __int8 *)&stream;
  stream.fd = CreateFileA(filePath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  if ( stream.fd == (void *)-1i64 )
  {
    indyfs_log_message(Error, "Failed to open \"%s\"", filePath);
    v10 = -1;
  }
  else
  {
    v11 = parse_image(&stream, image, fileArray, fileArrayLength, chunkArray, chunkArrayLength);
    CloseHandle(stream.fd);
    v10 = v11 - 1;
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v14);
  return v10;
}

/*
==============
indyfs_image_parse_header
==============
*/
__int64 indyfs_image_parse_header(unsigned int *fileCount, unsigned __int64 *chunkCount, const char *filePath)
{
  bool v7; 
  IndyFsStream stream; 

  stream.cursor = (unsigned __int8 *)&stream;
  stream.end = (unsigned __int8 *)&stream;
  stream.fd = CreateFileA(filePath, 0x80000000, 7u, NULL, 3u, 0x80u, NULL);
  if ( stream.fd == (void *)-1i64 )
  {
    indyfs_log_message(Error, "Failed to open \"%s\"", filePath);
    return 0xFFFFFFFFi64;
  }
  else
  {
    v7 = parse_header(&stream, fileCount, chunkCount);
    CloseHandle(stream.fd);
    return (unsigned int)v7 - 1;
  }
}

/*
==============
parse_header
==============
*/
bool parse_header(IndyFsStream *stream, unsigned int *fileCount, unsigned __int64 *chunkCount)
{
  unsigned __int64 v6; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int8 dest; 
  unsigned __int8 v12; 
  unsigned __int16 v13; 

  v6 = read_from_stream(stream, &dest, 4ui64);
  if ( v6 != 4 )
    goto LABEL_2;
  v8 = dest | ((v12 | (v13 << 8)) << 8);
  if ( (_DWORD)v8 == 1196247369 )
  {
    v9 = read_from_stream(stream, &dest, 1ui64);
    if ( v9 != 1 )
    {
      indyfs_log_message(Error, "End of file: Tried to read 1 byte, but only got %zu", v9);
      return 0;
    }
    if ( dest != 1 )
      return 0;
    v10 = read_from_stream(stream, &dest, 3ui64);
    if ( v10 == 3 )
    {
      v6 = read_from_stream(stream, &dest, 4ui64);
      if ( v6 != 4 )
      {
LABEL_2:
        indyfs_log_message(Error, "End of file: Tried to read 4 bytes, but only got %zu", v6);
        return 0;
      }
      *fileCount = dest | ((v12 | (v13 << 8)) << 8);
      return read_u64(stream, chunkCount);
    }
    else
    {
      indyfs_log_message(Error, "End of file: Tried to read %u bytes, but only got %zu", 3i64, v10);
      return 0;
    }
  }
  else
  {
    indyfs_log_message(Error, "Magic number did not match. Expected: %u  Actual: %u", 1196247369i64, v8);
    return 0;
  }
}

/*
==============
parse_image
==============
*/
char parse_image(IndyFsStream *stream, IndyFsImage *image, IndyFsFile *fileArray, unsigned __int64 fileArrayLength, IndyFsChunk *chunkArray, unsigned __int64 chunkArrayLength)
{
  __int64 fileCount; 
  IndyFsFile *v11; 
  __int64 v12; 
  int v13; 
  IndyFsFile *v14; 
  unsigned __int64 v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 *p_chunkCount; 
  IndyFsChunk *v20; 
  IndyFsChunk *v21; 
  __int64 v22; 
  IndyFsChunk *v23; 
  IndyFsChunk *v24; 
  unsigned __int8 *v25; 
  unsigned __int64 v26; 
  unsigned __int64 chunkCount; 
  IndyFsFile *v29; 

  if ( !parse_header(stream, &image->fileCount, &chunkCount) )
    return 0;
  fileCount = image->fileCount;
  if ( fileArrayLength != fileCount )
  {
    indyfs_log_message(Error, "File count does not match. From Image: %u  FileArrayLength: %zu", (unsigned int)fileCount, fileArrayLength);
    return 0;
  }
  if ( chunkArrayLength != chunkCount )
  {
    indyfs_log_message(Error, "Chunk count does not match. From Image: %u  ChunkArrayLength: %zu", chunkCount, chunkArrayLength);
    return 0;
  }
  v11 = fileArray;
  v12 = 0i64;
  v13 = 0;
  if ( !(_DWORD)fileCount )
    v11 = NULL;
  image->files = v11;
  if ( image->fileCount )
  {
    while ( 1 )
    {
      v14 = fileArray;
      v29 = fileArray + 1;
      v15 = read_from_stream(stream, (unsigned __int8 *)&chunkCount, 2ui64);
      if ( v15 != 2 )
      {
        indyfs_log_message(Error, "End of file: Tried to read 2 bytes, but only got %zu", v15);
        return 0;
      }
      v16 = chunkCount;
      v17 = (unsigned __int16)chunkCount;
      if ( (unsigned __int64)(unsigned __int16)chunkCount + 1 > 0x104 )
      {
        indyfs_log_message(Error, "Not enough space in buffer for the null terminator. Buffer size: %zu  Required size: %u", 0x104ui64, (unsigned int)(unsigned __int16)chunkCount + 1);
        return 0;
      }
      v18 = read_from_stream(stream, (unsigned __int8 *)v14, (unsigned __int16)chunkCount);
      v14->path[v17] = 0;
      if ( v18 != v17 )
      {
        indyfs_log_message(Error, "End of file: Tried to read %u bytes, but only got %zu", v16, v18);
        return 0;
      }
      p_chunkCount = &v14->chunkCount;
      if ( !read_u64(stream, &v14->chunkCount) )
        return 0;
      v20 = chunkArray;
      v21 = *p_chunkCount ? &chunkArray[v12] : 0i64;
      v22 = 0i64;
      v14->chunks = v21;
      if ( *p_chunkCount )
        break;
LABEL_22:
      if ( ++v13 >= image->fileCount )
        return 1;
      fileArray = v29;
    }
    v23 = &v20[v12];
    while ( 1 )
    {
      v24 = v23;
      v25 = (unsigned __int8 *)v23;
      ++v12;
      ++v23;
      v26 = read_from_stream(stream, v25, 0x14ui64);
      if ( v26 != 20 )
        break;
      if ( !read_u64(stream, &v24->size) || !v24->size )
        return 0;
      if ( ++v22 >= *p_chunkCount )
        goto LABEL_22;
    }
    indyfs_log_message(Error, "End of file: Tried to read 20 bytes, but only got %zu", v26);
    return 0;
  }
  return 1;
}

/*
==============
read_from_stream
==============
*/
unsigned __int64 read_from_stream(IndyFsStream *stream, unsigned __int8 *dest, unsigned __int64 size)
{
  unsigned __int8 *end; 
  IndyFsStream *cursor; 
  __int64 v8; 
  unsigned __int64 v9; 
  IndyFsStream *v10; 
  size_t v11; 
  unsigned __int64 v12; 
  DWORD LastError; 
  unsigned int NumberOfBytesRead; 

  end = stream->end;
  cursor = (IndyFsStream *)stream->cursor;
  v8 = 0i64;
  v9 = size;
  if ( &cursor->buffer[size] > end )
  {
    v10 = (IndyFsStream *)stream->cursor;
    while ( 2 )
    {
      v11 = end - (unsigned __int8 *)v10;
      memcpy_0(dest, v10, v11);
      v8 += v11;
      v9 = size - v8;
      v12 = 0i64;
      do
      {
        if ( !ReadFile(stream->fd, &stream->buffer[v12], 0x2000 - v12, &NumberOfBytesRead, NULL) )
        {
          LastError = GetLastError();
          indyfs_log_message(Error, "File read failed - Error code: %lu", LastError);
          return 0i64;
        }
        v12 += NumberOfBytesRead;
        if ( v12 >= v9 )
          break;
        if ( !NumberOfBytesRead )
        {
          indyfs_log_message(Error, "End of file: Tried to read %zu bytes, but only got %zu", size, v12 + v8);
          return 0i64;
        }
      }
      while ( v12 != 0x2000 );
      end = &stream->buffer[v12];
      stream->cursor = (unsigned __int8 *)stream;
      stream->end = end;
      v10 = stream;
      cursor = stream;
      if ( &stream->buffer[v9] > end )
        continue;
      break;
    }
  }
  memcpy_0(&dest[v8], cursor, v9);
  stream->cursor += v9;
  return v9 + v8;
}

/*
==============
read_u64
==============
*/
bool read_u64(IndyFsStream *stream, unsigned __int64 *value)
{
  unsigned __int64 v3; 
  bool result; 
  unsigned __int8 dest[6]; 
  unsigned __int16 v6; 

  v3 = read_from_stream(stream, dest, 8ui64);
  if ( v3 == 8 )
  {
    result = 1;
    *value = dest[0] | ((dest[1] | ((dest[2] | ((dest[3] | ((dest[4] | ((dest[5] | ((unsigned __int64)v6 << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  }
  else
  {
    indyfs_log_message(Error, "End of file: Tried to read 8 bytes, but only got %zu", v3);
    return 0;
  }
  return result;
}

