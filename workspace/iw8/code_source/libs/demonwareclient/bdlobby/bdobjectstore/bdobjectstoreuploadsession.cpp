/*
==============
bdObjectStoreUploadSession::getSessionID
==============
*/

const char *__fastcall bdObjectStoreUploadSession::getSessionID(bdObjectStoreUploadSession *this)
{
  return ?getSessionID@bdObjectStoreUploadSession@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadSession::reset
==============
*/

void __fastcall bdObjectStoreUploadSession::reset(bdObjectStoreUploadSession *this)
{
  ?reset@bdObjectStoreUploadSession@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreUploadSession::bdObjectStoreUploadSession
==============
*/

void __fastcall bdObjectStoreUploadSession::bdObjectStoreUploadSession(bdObjectStoreUploadSession *this)
{
  ??0bdObjectStoreUploadSession@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreUploadSession::getUploadURL
==============
*/

const char *__fastcall bdObjectStoreUploadSession::getUploadURL(bdObjectStoreUploadSession *this)
{
  return ?getUploadURL@bdObjectStoreUploadSession@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreUploadSession::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreUploadSession::deserializeFromJSON(bdObjectStoreUploadSession *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdObjectStoreUploadSession@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreUploadSession::bdObjectStoreUploadSession
==============
*/
void bdObjectStoreUploadSession::bdObjectStoreUploadSession(bdObjectStoreUploadSession *this)
{
  memset_0(this, 0, sizeof(bdObjectStoreUploadSession));
}

/*
==============
bdObjectStoreUploadSession::deserializeFromJSON
==============
*/
char bdObjectStoreUploadSession::deserializeFromJSON(bdObjectStoreUploadSession *this, bdJSONDeserializer *json)
{
  bdHandleAssert(json != NULL, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadsession.cpp", "bdObjectStoreUploadSession::deserializeFromJSON", 0x2Bu, "bdJSONDeserializer is NULL.");
  if ( json && json->m_type == BD_JSON_OBJECT && bdJSONDeserializer::getString(json, "sessionID", this->m_sessionID, 0x25u) && bdJSONDeserializer::getString(json, "uploadUrl", this->m_uploadURL, 0x400u) )
    return 1;
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreUploadSession", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoreuploadsession.cpp", "bdObjectStoreUploadSession::deserializeFromJSON", 0x34u, "Unable to deserialize json for upload session.");
  return 0;
}

/*
==============
bdObjectStoreUploadSession::getSessionID
==============
*/
bdObjectStoreUploadSession *bdObjectStoreUploadSession::getSessionID(bdObjectStoreUploadSession *this)
{
  return this;
}

/*
==============
bdObjectStoreUploadSession::getUploadURL
==============
*/
char *bdObjectStoreUploadSession::getUploadURL(bdObjectStoreUploadSession *this)
{
  return this->m_uploadURL;
}

/*
==============
bdObjectStoreUploadSession::reset
==============
*/
void bdObjectStoreUploadSession::reset(bdObjectStoreUploadSession *this)
{
  memset_0(this, 0, sizeof(bdObjectStoreUploadSession));
}

