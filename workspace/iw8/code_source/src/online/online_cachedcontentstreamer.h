/*
==============
ccsStreamRequestInfo_t::ccsStreamRequestInfo_t
==============
*/

void __fastcall ccsStreamRequestInfo_t::ccsStreamRequestInfo_t(ccsStreamRequestInfo_t *this)
{
  ??0ccsStreamRequestInfo_t@@QEAA@XZ(this);
}

/*
==============
Online_CachedContentStreamer::~Online_CachedContentStreamer
==============
*/

void __fastcall Online_CachedContentStreamer::~Online_CachedContentStreamer(Online_CachedContentStreamer *this)
{
  ??1Online_CachedContentStreamer@@UEAA@XZ(this);
}

/*
==============
Online_CachedContentStreamer::ShowLogOutput
==============
*/

bool __fastcall Online_CachedContentStreamer::ShowLogOutput(Online_CachedContentStreamer *this)
{
  return ?ShowLogOutput@Online_CachedContentStreamer@@EEAA_NXZ(this);
}

/*
==============
Online_CachedContentStreamer::ShowLogOutput
==============
*/
bool Online_CachedContentStreamer::ShowLogOutput(Online_CachedContentStreamer *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_cachedContentDebug;
  if ( !DVARINT_cachedContentDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cachedContentDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.integer != 0;
}

/*
==============
ccsStreamRequestInfo_t::ccsStreamRequestInfo_t
==============
*/
void ccsStreamRequestInfo_t::ccsStreamRequestInfo_t(ccsStreamRequestInfo_t *this)
{
  this->controllerIndex = -1;
  this->state = CCS_STATE_INACTIVE;
  this->streamFileID = 0i64;
  *(_QWORD *)&this->streamFileSize = 0i64;
  this->lastAccessTime = 0;
  this->OnSuccess = NULL;
  this->OnFailure = NULL;
  this->OnProgress = NULL;
  this->cacheType = DCACHE_TYPE_PERSISTENT;
  this->locationType = DCACHE_LOC_CCS_DEFAULT;
  this->patchType = COUNT;
  memset_0(this->streamFileName, 0, sizeof(this->streamFileName));
}

/*
==============
Online_CachedContentStreamer::~Online_CachedContentStreamer
==============
*/
void Online_CachedContentStreamer::~Online_CachedContentStreamer(Online_CachedContentStreamer *this)
{
  bdReferencable *v1; 

  v1 = (bdReferencable *)(&this->m_cachedContentFileMetaData.m_originID + 1);
  this->__vftable = (Online_CachedContentStreamer_vtbl *)&Online_CachedContentStreamer::`vftable';
  bdFileMetaData::~bdFileMetaData((bdFileMetaData *)(&this->m_cachedContentFileMetaData.m_originID + 1));
  bdReferencable::~bdReferencable(v1);
}

