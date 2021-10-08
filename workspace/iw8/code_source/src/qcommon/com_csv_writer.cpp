/*
==============
Com_CSVWriting
==============
*/

bool __fastcall Com_CSVWriting()
{
  return ?Com_CSVWriting@@YA_NXZ();
}

/*
==============
Com_CSVGetRowIndex
==============
*/

int __fastcall Com_CSVGetRowIndex()
{
  return ?Com_CSVGetRowIndex@@YAHXZ();
}

/*
==============
Com_CSVWriteMetricChecked
==============
*/

bool __fastcall Com_CSVWriteMetricChecked(const char *name, long double value)
{
  return ?Com_CSVWriteMetricChecked@@YA_NPEBDN@Z(name, value);
}

/*
==============
Com_CSVGetLastEndFrameDuration
==============
*/

int __fastcall Com_CSVGetLastEndFrameDuration()
{
  return ?Com_CSVGetLastEndFrameDuration@@YAHXZ();
}

/*
==============
Com_CSVInit
==============
*/

void Com_CSVInit(void)
{
  ?Com_CSVInit@@YAXXZ();
}

/*
==============
Com_CSVEndFrame
==============
*/

void Com_CSVEndFrame(void)
{
  ?Com_CSVEndFrame@@YAXXZ();
}

/*
==============
Com_CSVWriteMetric
==============
*/

void __fastcall Com_CSVWriteMetric(const char *name, long double value)
{
  ?Com_CSVWriteMetric@@YAXPEBDN@Z(name, value);
}

/*
==============
Com_CSVEndFrame
==============
*/
void Com_CSVEndFrame(void)
{
  int v0; 
  unsigned __int64 v1; 

  v0 = __rdtsc();
  if ( g_CSVFile.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_csv_writer.cpp", 149, ASSERT_TYPE_ASSERT, "(Com_CSVWriting())", (const char *)&queryFormat, "Com_CSVWriting()") )
    __debugbreak();
  ++s_rowIndex;
  g_writingNames = 0;
  s_columnIndex = 0;
  Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, "\n");
  if ( (unsigned __int64)g_BufferPos > 0x8000 )
  {
    FS_Write(g_Buffer, g_BufferPos, g_CSVFile);
    g_BufferPos = 0;
  }
  v1 = __rdtsc();
  s_lastCSVEndFrameDurationTicks = v1 - v0;
}

/*
==============
Com_CSVGetLastEndFrameDuration
==============
*/
__int64 Com_CSVGetLastEndFrameDuration()
{
  return (unsigned int)s_lastCSVEndFrameDurationTicks;
}

/*
==============
Com_CSVGetRowIndex
==============
*/
__int64 Com_CSVGetRowIndex()
{
  return (unsigned int)s_rowIndex;
}

/*
==============
Com_CSVInit
==============
*/
void Com_CSVInit(void)
{
  Cmd_AddCommandInternal("csv_start", Dvar_CSVStart, &Dvar_CSVStart_VAR);
  Cmd_AddCommandInternal("csv_stop", Dvar_CSVStop, &Dvar_CSVStop_VAR);
}

/*
==============
Com_CSVWriteMetric
==============
*/

void __fastcall Com_CSVWriteMetric(const char *name, double value)
{
  unsigned __int8 v6; 
  int v7; 
  const char *i; 
  __int64 v9; 
  unsigned int m_bufferInsertOffset; 
  char *v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int j; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm1
  }
  if ( g_CSVFile.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_csv_writer.cpp", 76, ASSERT_TYPE_ASSERT, "(Com_CSVWriting())", (const char *)&queryFormat, "Com_CSVWriting()") )
    __debugbreak();
  v6 = *name;
  v7 = 0;
  for ( i = name; *i; v6 = *i )
  {
    ++i;
    v7 = v6 ^ (16777619 * v7);
  }
  if ( g_writingNames )
  {
    if ( s_numColumns >= 0x200 )
    {
      LODWORD(v18) = s_numColumns;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_csv_writer.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( s_numColumns ) < (unsigned)( CSV_MAX_COLUMNS )", "s_numColumns doesn't index CSV_MAX_COLUMNS\n\t%i not in [0, %i)", v18, 512) )
        __debugbreak();
    }
    v9 = -1i64;
    do
      ++v9;
    while ( name[v9] );
    m_bufferInsertOffset = s_stringStore.m_bufferInsertOffset;
    if ( (signed int)(0x7FFF - s_stringStore.m_bufferInsertOffset) <= (int)v9 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143DC7DF8, 0x8000i64);
      m_bufferInsertOffset = s_stringStore.m_bufferInsertOffset;
    }
    v11 = &s_stringStore.m_buffer[m_bufferInsertOffset];
    Core_strcpy(v11, (int)v9 + 1, name);
    s_stringStore.m_bufferInsertOffset += v9 + 1;
    v12 = s_numColumns;
    s_columnNames[s_numColumns] = v11;
    s_columnHashes[v12] = v7;
    s_numColumns = v12 + 1;
    Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, "%s,", name);
  }
  else
  {
    v13 = s_columnIndex;
    if ( s_columnIndex >= s_numColumns )
    {
LABEL_27:
      Sys_Error((const ObfuscateErrorText)&stru_143FFE860, name);
    }
    else
    {
      do
      {
        if ( s_columnHashes[v13] == v7 )
        {
          for ( j = s_columnIndex; j < v13; s_columnIndex = j )
          {
            Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, ",");
            j = s_columnIndex + 1;
          }
          goto LABEL_29;
        }
        if ( v13 >= 0x200 )
        {
          LODWORD(v19) = 512;
          LODWORD(v18) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v13 & 0x1F)) & s_columnIsOptional.array[(unsigned __int64)v13 >> 5]) == 0 )
          break;
        ++v13;
      }
      while ( v13 < s_numColumns );
      if ( s_columnIndex >= s_numColumns )
        goto LABEL_27;
      Sys_Error((const ObfuscateErrorText)&stru_143FFE800, name, s_columnNames[s_columnIndex]);
    }
    j = s_columnIndex;
LABEL_29:
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vucomisd xmm6, xmm0
    }
    s_columnIndex = j + 1;
    if ( j == -1 )
    {
      Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, ",");
    }
    else
    {
      __asm { vmovsd  [rsp+68h+fmt], xmm6 }
      Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, "%f,", *(double *)&fmt);
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
Com_CSVWriteMetricChecked
==============
*/
bool Com_CSVWriteMetricChecked(const char *name, long double value)
{
  return Com_CSVWriteMetricInternal(name, value, 1);
}

/*
==============
Com_CSVWriteMetricInternal
==============
*/

bool __fastcall Com_CSVWriteMetricInternal(const char *const name, double value, const bool columnIsOptional)
{
  unsigned __int8 v8; 
  int v9; 
  const char *i; 
  __int64 v11; 
  unsigned int m_bufferInsertOffset; 
  char *v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  bool result; 
  unsigned int j; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps xmm6, xmm1
  }
  if ( g_CSVFile.handle.handle == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_csv_writer.cpp", 76, ASSERT_TYPE_ASSERT, "(Com_CSVWriting())", (const char *)&queryFormat, "Com_CSVWriting()") )
    __debugbreak();
  v8 = *name;
  v9 = 0;
  for ( i = name; *i; v8 = *i )
  {
    ++i;
    v9 = v8 ^ (16777619 * v9);
  }
  if ( g_writingNames )
  {
    if ( s_numColumns >= 0x200 )
    {
      LODWORD(v22) = s_numColumns;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_csv_writer.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( s_numColumns ) < (unsigned)( CSV_MAX_COLUMNS )", "s_numColumns doesn't index CSV_MAX_COLUMNS\n\t%i not in [0, %i)", v22, 512) )
        __debugbreak();
    }
    v11 = -1i64;
    do
      ++v11;
    while ( name[v11] );
    m_bufferInsertOffset = s_stringStore.m_bufferInsertOffset;
    if ( (signed int)(0x7FFF - s_stringStore.m_bufferInsertOffset) <= (int)v11 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143DC7DF8, 0x8000i64);
      m_bufferInsertOffset = s_stringStore.m_bufferInsertOffset;
    }
    v13 = &s_stringStore.m_buffer[m_bufferInsertOffset];
    Core_strcpy(v13, (int)v11 + 1, name);
    v14 = s_numColumns;
    s_stringStore.m_bufferInsertOffset += v11 + 1;
    s_columnNames[s_numColumns] = v13;
    s_columnHashes[v14] = v9;
    if ( columnIsOptional )
    {
      v15 = (unsigned int)v14;
      if ( (unsigned int)v14 >= 0x200 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, 512) )
          __debugbreak();
        LODWORD(v14) = s_numColumns;
      }
      s_columnIsOptional.array[v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
    }
    s_numColumns = v14 + 1;
    Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, "%s,", name);
    goto LABEL_41;
  }
  v16 = s_columnIndex;
  if ( s_columnIndex < s_numColumns )
  {
    while ( s_columnHashes[v16] != v9 )
    {
      if ( v16 >= 0x200 )
      {
        LODWORD(v23) = 512;
        LODWORD(v22) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v16 & 0x1F)) & s_columnIsOptional.array[(unsigned __int64)v16 >> 5]) != 0 && ++v16 < s_numColumns )
        continue;
      v16 = s_columnIndex;
      goto LABEL_29;
    }
    for ( j = s_columnIndex; j < v16; s_columnIndex = j )
    {
      Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, ",");
      j = s_columnIndex + 1;
    }
    goto LABEL_38;
  }
LABEL_29:
  if ( !columnIsOptional )
  {
    if ( v16 >= s_numColumns )
      Sys_Error((const ObfuscateErrorText)&stru_143FFE860, name);
    else
      Sys_Error((const ObfuscateErrorText)&stru_143FFE800, name, s_columnNames[v16]);
    j = s_columnIndex;
LABEL_38:
    __asm
    {
      vxorpd  xmm0, xmm0, xmm0
      vucomisd xmm6, xmm0
    }
    s_columnIndex = j + 1;
    if ( j == -1 )
    {
      Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, ",");
    }
    else
    {
      __asm { vmovsd  [rsp+88h+fmt], xmm6 }
      Com_sprintfPos(g_Buffer, 0x10000ui64, &g_BufferPos, "%f,", *(double *)&fmt);
    }
LABEL_41:
    result = 1;
    goto LABEL_42;
  }
  result = 0;
LABEL_42:
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return result;
}

/*
==============
Com_CSVWriting
==============
*/
bool Com_CSVWriting()
{
  return g_CSVFile.handle.handle != -1;
}

/*
==============
Dvar_CSVStart
==============
*/
void Dvar_CSVStart()
{
  fileHandle_t *v0; 
  const char *v1; 

  if ( Cmd_Argc() == 2 )
  {
    if ( g_CSVFile.handle.handle == -1 )
    {
      v0 = (fileHandle_t *)Cmd_Argv(1);
      g_CSVFile.handle.handle = (__int64)FS_FOpenFileWrite(v0, v1);
      if ( g_CSVFile.handle.handle == -1 )
      {
        Com_Printf(0, "Metrics not started: Failed to open file for writing. Is it in use?");
      }
      else
      {
        g_writingNames = 1;
        g_BufferPos = 0;
        s_numColumns = 0;
        s_columnIndex = 0;
        *(_QWORD *)s_columnIsOptional.array = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[2] = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[4] = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[6] = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[8] = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[10] = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[12] = 0i64;
        *(_QWORD *)&s_columnIsOptional.array[14] = 0i64;
        s_stringStore.m_bufferInsertOffset = 0;
        s_rowIndex = 1;
      }
    }
    else
    {
      Com_Printf(0, "Metrics are already being captured\n");
    }
  }
  else
  {
    Com_Printf(0, "Usage: csv_start <filename>\n");
  }
}

/*
==============
Dvar_CSVStop
==============
*/
void Dvar_CSVStop()
{
  __int64 handle; 

  handle = g_CSVFile.handle.handle;
  if ( g_CSVFile.handle.handle == -1 )
  {
    Com_Printf(0, "Metrics are not currently being captured. Start capture using: csv_start <filename>\n");
  }
  else
  {
    if ( g_BufferPos > 0 )
    {
      FS_Write(g_Buffer, g_BufferPos, g_CSVFile);
      handle = g_CSVFile.handle.handle;
    }
    FS_FCloseFile((fileHandle_t)handle);
    g_CSVFile.handle.handle = -1i64;
    s_rowIndex = 0;
    s_lastCSVEndFrameDurationTicks = 0;
  }
}

