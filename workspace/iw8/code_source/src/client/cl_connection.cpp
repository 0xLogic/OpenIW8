/*
==============
ClConnection::~ClConnection
==============
*/

void __fastcall ClConnection::~ClConnection(ClConnection *this)
{
  ??1ClConnection@@UEAA@XZ(this);
}

/*
==============
ClConnection::ClConnection
==============
*/

void __fastcall ClConnection::ClConnection(ClConnection *this, const LocalClientNum_t localClientNum)
{
  ??0ClConnection@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClConnection::DumpReliableCommands
==============
*/

void __fastcall ClConnection::DumpReliableCommands(ClConnection *this, const ClConnectionData *clcData)
{
  ?DumpReliableCommands@ClConnection@@QEBAXPEBUClConnectionData@@@Z(this, clcData);
}

/*
==============
ClConnection::ClConnection
==============
*/
void ClConnection::ClConnection(ClConnection *this, const LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->__vftable = (ClConnection_vtbl *)&ClConnection::`vftable';
  this->m_numPacketsReceived = 0;
}

/*
==============
ClConnection::~ClConnection
==============
*/
void ClConnection::~ClConnection(ClConnection *this)
{
  this->__vftable = (ClConnection_vtbl *)&ClConnection::`vftable';
}

/*
==============
ClConnection::DumpReliableCommands
==============
*/
void ClConnection::DumpReliableCommands(ClConnection *this, const ClConnectionData *clcData)
{
  int i; 
  __int64 v4; 
  unsigned int offset; 
  unsigned int size; 
  __int64 v7; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 

  if ( !clcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.cpp", 29, ASSERT_TYPE_ASSERT, "(clcData)", (const char *)&queryFormat, "clcData") )
    __debugbreak();
  Com_PrintError(1, "ClConnectionMP::DumpReliableCommands. Acknowledge %i, Sequence %i\n", (unsigned int)clcData->reliableAcknowledge, (unsigned int)clcData->reliableSequence);
  for ( i = clcData->reliableAcknowledge + 1; i <= clcData->reliableSequence; ++i )
  {
    v4 = i & 0x7F;
    offset = clcData->clientReliableCommands.m_entries[v4].offset;
    size = clcData->clientReliableCommands.m_entries[v4].size;
    if ( clcData->clientReliableCommands.m_bufferNextIndex - offset <= 0x20000 && (_WORD)size )
    {
      v7 = offset & 0x1FFFF;
      if ( size + (unsigned int)v7 > 0x20000 )
      {
        LODWORD(v10) = 0x20000;
        LODWORD(v9) = size + v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 202, ASSERT_TYPE_ASSERT, "( bufferIndex + m_entries[entryIndex].size ) <= ( sizeof( m_buffer ) )", "%s <= %s\n\t%i, %i", "bufferIndex + m_entries[entryIndex].size", "sizeof( m_buffer )", v9, v10) )
          __debugbreak();
      }
      if ( clcData->clientReliableCommands.m_buffer[v7] == 89 )
      {
        LODWORD(fmt) = (char)clcData->clientReliableCommands.m_buffer[v7 + 4];
        Com_PrintError(1, "cmd %5d: (%i) Binary '%c'\n", i & 0x7F, size, fmt);
      }
      else
      {
        Com_PrintError(1, "cmd %5d: (%i) '%s'\n", i & 0x7F, size, (const char *)&clcData->clientReliableCommands.m_buffer[v7]);
      }
    }
    else
    {
      Com_PrintError(1, "cmd %5d: (%i) <overflowed>\n", i & 0x7F, clcData->clientReliableCommands.m_entries[v4].size);
    }
  }
}

