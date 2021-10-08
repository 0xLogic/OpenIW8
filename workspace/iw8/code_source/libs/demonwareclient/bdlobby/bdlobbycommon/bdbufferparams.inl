/*
==============
bdBufferParams::serializedOk
==============
*/

bool __fastcall bdBufferParams::serializedOk(bdBufferParams *this)
{
  return ?serializedOk@bdBufferParams@@QEBA_NXZ(this);
}

/*
==============
bdBufferParams::serializedOk
==============
*/
bool bdBufferParams::serializedOk(bdBufferParams *this)
{
  bdByteBuffer *m_ptr; 
  bool result; 
  int m_arrayWriteCount; 

  result = 0;
  if ( !this->m_isWritingArray && !this->m_arrayWriteCount || (m_arrayWriteCount = this->m_arrayWriteCount, bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", m_arrayWriteCount), !this->m_isWritingArray) )
  {
    if ( !this->m_arrayWriteCount && this->m_serializeOk )
    {
      m_ptr = this->m_buffer.m_ptr;
      if ( m_ptr )
      {
        if ( m_ptr->m_data )
          return 1;
      }
    }
  }
  return result;
}

