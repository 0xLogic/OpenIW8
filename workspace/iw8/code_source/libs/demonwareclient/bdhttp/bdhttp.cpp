/*
==============
bdHTTP::bdHTTP
==============
*/

void __fastcall bdHTTP::bdHTTP(bdHTTP *this)
{
  ??0bdHTTP@@QEAA@XZ(this);
}

/*
==============
bdHTTP::isState
==============
*/

bool __fastcall bdHTTP::isState(bdHTTP *this, bdHTTP::bdRequestState state)
{
  return ?isState@bdHTTP@@MEBA_NW4bdRequestState@1@@Z(this, state);
}

/*
==============
bdHTTP::setUploadData
==============
*/

bool __fastcall bdHTTP::setUploadData(bdHTTP *this, const char *buffer, unsigned int size)
{
  return ?setUploadData@bdHTTP@@QEAA_NPEBDI@Z(this, buffer, size);
}

/*
==============
bdHTTP::setHeader
==============
*/

bool __fastcall bdHTTP::setHeader(bdHTTP *this, const char *key, const unsigned __int64 value)
{
  return ?setHeader@bdHTTP@@UEAA_NPEBD_K@Z(this, key, value);
}

/*
==============
bdHTTP::setUploadData
==============
*/

bool __fastcall bdHTTP::setUploadData(bdHTTP *this, const unsigned __int8 *buffer, unsigned int size)
{
  return ?setUploadData@bdHTTP@@QEAA_NPEBEI@Z(this, buffer, size);
}

/*
==============
bdHTTP::setDownloadBuffer
==============
*/

bool __fastcall bdHTTP::setDownloadBuffer(bdHTTP *this, unsigned __int8 *buffer, unsigned int size)
{
  return ?setDownloadBuffer@bdHTTP@@QEAA_NPEAEI@Z(this, buffer, size);
}

/*
==============
bdHTTP::setDownloadBuffer
==============
*/

bool __fastcall bdHTTP::setDownloadBuffer(bdHTTP *this, char *buffer, unsigned int size)
{
  return ?setDownloadBuffer@bdHTTP@@QEAA_NPEADI@Z(this, buffer, size);
}

/*
==============
bdHTTP::bdHTTP
==============
*/
void bdHTTP::bdHTTP(bdHTTP *this)
{
  this->__vftable = (bdHTTP_vtbl *)&bdHTTP::`vftable';
  *(_QWORD *)&this->m_status = 0i64;
}

/*
==============
bdHTTP::isState
==============
*/
__int64 bdHTTP::isState(bdHTTP *this, bdHTTP::bdRequestState state)
{
  unsigned __int8 v2; 
  __int64 result; 

  v2 = 0;
  switch ( state )
  {
    case BD_IDLE:
      result = this->m_status == BD_PENDING;
      break;
    case BD_CREATING:
      result = this->m_status == BD_DONE;
      break;
    case BD_RUNNING:
      result = this->m_status == BD_FAILED;
      break;
    case BD_STOPPING:
      result = this->m_status == BD_TIMED_OUT;
      break;
    case BD_FINISHED:
      result = (unsigned int)(this->m_status - 4) <= 3;
      break;
    case BD_DESTROYED:
      v2 = 1;
      goto LABEL_8;
    default:
LABEL_8:
      result = v2;
      break;
  }
  return result;
}

/*
==============
bdHTTP::setDownloadBuffer
==============
*/
__int64 bdHTTP::setDownloadBuffer(bdHTTP *this, char *buffer, __int64 size)
{
  return ((__int64 (__fastcall *)(bdHTTP *, char *, __int64))this->setDownloadBuffer)(this, buffer, size);
}

/*
==============
bdHTTP::setDownloadBuffer
==============
*/
__int64 bdHTTP::setDownloadBuffer(bdHTTP *this, unsigned __int8 *buffer, __int64 size)
{
  return ((__int64 (__fastcall *)(bdHTTP *, unsigned __int8 *, __int64))this->setDownloadBuffer)(this, buffer, size);
}

/*
==============
bdHTTP::setHeader
==============
*/
__int64 bdHTTP::setHeader(bdHTTP *this, const char *key, const unsigned __int64 value)
{
  char buf[24]; 

  bdSnprintf(buf, 0x18ui64, "%I64u", value);
  return ((__int64 (__fastcall *)(bdHTTP *, const char *, char *))this->setHeader)(this, key, buf);
}

/*
==============
bdHTTP::setUploadData
==============
*/
__int64 bdHTTP::setUploadData(bdHTTP *this, const char *buffer, __int64 size)
{
  return ((__int64 (__fastcall *)(bdHTTP *, const char *, __int64))this->setUploadData)(this, buffer, size);
}

/*
==============
bdHTTP::setUploadData
==============
*/
__int64 bdHTTP::setUploadData(bdHTTP *this, const unsigned __int8 *buffer, __int64 size)
{
  return ((__int64 (__fastcall *)(bdHTTP *, const unsigned __int8 *, __int64))this->setUploadData)(this, buffer, size);
}

