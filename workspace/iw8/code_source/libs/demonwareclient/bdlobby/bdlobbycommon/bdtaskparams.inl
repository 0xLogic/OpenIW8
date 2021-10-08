/*
==============
bdTaskParams::ensureCapacity
==============
*/

bool __fastcall bdTaskParams::ensureCapacity(bdTaskParams *this, unsigned int paramSize, bool typeChecked)
{
  return ?ensureCapacity@bdTaskParams@@MEAA_NI_N@Z(this, paramSize, typeChecked);
}

/*
==============
bdTaskParams::bindResults
==============
*/

void __fastcall bdTaskParams::bindResults(bdTaskParams *this, bdTaskResult *results, unsigned int maxResults)
{
  ?bindResults@bdTaskParams@@QEAAXPEAVbdTaskResult@@I@Z(this, results, maxResults);
}

/*
==============
bdTaskParams::ensureCapacity
==============
*/
bool bdTaskParams::ensureCapacity(bdTaskParams *this, unsigned int paramSize, bool typeChecked)
{
  return bdBufferParams::ensureCapacity(this, paramSize + 73, typeChecked);
}

/*
==============
bdTaskParams::bindResults
==============
*/
void bdTaskParams::bindResults(bdTaskParams *this, bdTaskResult *results, unsigned int maxResults)
{
  if ( this->m_taskResults || this->m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    this->m_serializeOk = 0;
  }
  else
  {
    this->m_taskResults = results;
    this->m_maxResults = maxResults;
  }
}

