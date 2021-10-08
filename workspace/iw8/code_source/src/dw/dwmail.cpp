/*
==============
dwMail_ReplyBufferWriteData
==============
*/

int __fastcall dwMail_ReplyBufferWriteData(const void *dataptr_in, int datasize_in)
{
  return ?dwMail_ReplyBufferWriteData@@YAHPEBXH@Z(dataptr_in, datasize_in);
}

/*
==============
dwMail_ReplyBufferGetNumBytesWritten
==============
*/

int __fastcall dwMail_ReplyBufferGetNumBytesWritten()
{
  return ?dwMail_ReplyBufferGetNumBytesWritten@@YAHXZ();
}

/*
==============
dwMail_UserSignedOut
==============
*/

void __fastcall dwMail_UserSignedOut(const int controllerindex_in)
{
  ?dwMail_UserSignedOut@@YAXH@Z(controllerindex_in);
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::RecordUse
==============
*/

bool __fastcall dwMailRateRecorderManager<20,1,60000>::RecordUse(dwMailRateRecorderManager<20,1,60000> *this)
{
  return ?RecordUse@?$dwMailRateRecorderManager@$0BE@$00$0OKGA@@@QEAA_NXZ(this);
}

/*
==============
dwMail_Enable
==============
*/

void __fastcall dwMail_Enable(int enable_in)
{
  ?dwMail_Enable@@YAXH@Z(enable_in);
}

/*
==============
dwMail_Init
==============
*/

void dwMail_Init(void)
{
  ?dwMail_Init@@YAXXZ();
}

/*
==============
dwMail_RegisterHandler
==============
*/

int __fastcall dwMail_RegisterHandler(int id_in, dwMailHandlerReturnCode_t (__fastcall *dwmailhandlerinspect_in)(const int, const char *, const int, bdMailInfo *), dwMailHandlerReturnCode_t (__fastcall *dwmailhandlerpump_in)())
{
  return ?dwMail_RegisterHandler@@YAHHP6A?AW4dwMailHandlerReturnCode_t@@HPEBDHPEAVbdMailInfo@@@ZP6A?AW41@XZ@Z(id_in, dwmailhandlerinspect_in, dwmailhandlerpump_in);
}

/*
==============
dwMail_Shutdown
==============
*/

void dwMail_Shutdown(void)
{
  ?dwMail_Shutdown@@YAXXZ();
}

/*
==============
dwMail_Frame
==============
*/

void dwMail_Frame(void)
{
  ?dwMail_Frame@@YAXXZ();
}

/*
==============
dwMail_EmptyHandlerList
==============
*/

void dwMail_EmptyHandlerList(void)
{
  ?dwMail_EmptyHandlerList@@YAXXZ();
}

/*
==============
dwMail_ReplyBufferReset
==============
*/

void dwMail_ReplyBufferReset(void)
{
  ?dwMail_ReplyBufferReset@@YAXXZ();
}

/*
==============
dwMailThrottle::IsOK
==============
*/

bool __fastcall dwMailThrottle::IsOK(dwMailThrottle *this)
{
  return ?IsOK@dwMailThrottle@@QEAA_NXZ(this);
}

/*
==============
dwMail_IsEnabled
==============
*/

int __fastcall dwMail_IsEnabled()
{
  return ?dwMail_IsEnabled@@YAHXZ();
}

/*
==============
dwMail_SendMail
==============
*/

void __fastcall dwMail_SendMail(const int controllerindex_in, unsigned __int16 category, unsigned int expiration, unsigned __int64 *bdonlineuserid_in, int bdonlineuseridcount_in, const void *bufferptr_in, const int buffersize_in)
{
  ?dwMail_SendMail@@YAXHGIQEA_KHPEBXH@Z(controllerindex_in, category, expiration, bdonlineuserid_in, bdonlineuseridcount_in, bufferptr_in, buffersize_in);
}

/*
==============
dwMail_GetHandlerCount
==============
*/

int __fastcall dwMail_GetHandlerCount()
{
  return ?dwMail_GetHandlerCount@@YAHXZ();
}

/*
==============
dwMail_AbortProcessing
==============
*/

void dwMail_AbortProcessing(void)
{
  ?dwMail_AbortProcessing@@YAXXZ();
}

/*
==============
dwMail_UserSignedInToLive
==============
*/

void __fastcall dwMail_UserSignedInToLive(const int controllerindex_in)
{
  ?dwMail_UserSignedInToLive@@YAXH@Z(controllerindex_in);
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::PrivateAge
==============
*/

void __fastcall dwMailRateRecorderManager<20,1,60000>::PrivateAge(dwMailRateRecorderManager<20,1,60000> *this, unsigned int edgetime_in)
{
  ?PrivateAge@?$dwMailRateRecorderManager@$0BE@$00$0OKGA@@@AEAAXI@Z(this, edgetime_in);
}

/*
==============
dwMail_UnregisterHandler
==============
*/

void __fastcall dwMail_UnregisterHandler(int id_in)
{
  ?dwMail_UnregisterHandler@@YAXH@Z(id_in);
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::PrivateGetTimeNow
==============
*/

unsigned int __fastcall dwMailRateRecorderManager<20,1,60000>::PrivateGetTimeNow(dwMailRateRecorderManager<20,1,60000> *this)
{
  return ?PrivateGetTimeNow@?$dwMailRateRecorderManager@$0BE@$00$0OKGA@@@AEAAIXZ(this);
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::GetRate
==============
*/

int __fastcall dwMailRateRecorderManager<20,1,60000>::GetRate(dwMailRateRecorderManager<20,1,60000> *this)
{
  return ?GetRate@?$dwMailRateRecorderManager@$0BE@$00$0OKGA@@@QEAAHXZ(this);
}

/*
==============
dwMailThrottle::RecordUse
==============
*/

void __fastcall dwMailThrottle::RecordUse(dwMailThrottle *this)
{
  ?RecordUse@dwMailThrottle@@QEAAXXZ(this);
}

/*
==============
dwMailThrottle::ReportError
==============
*/

void __fastcall dwMailThrottle::ReportError(dwMailThrottle *this)
{
  ?ReportError@dwMailThrottle@@QEAAXXZ(this);
}

/*
==============
dwMail_HandleOnNewMailEvent
==============
*/

void __fastcall dwMail_HandleOnNewMailEvent(const int controllerindex_in)
{
  ?dwMail_HandleOnNewMailEvent@@YAXH@Z(controllerindex_in);
}

/*
==============
dwMail_IsBusy
==============
*/

int __fastcall dwMail_IsBusy()
{
  return ?dwMail_IsBusy@@YAHXZ();
}

/*
==============
dwMail_ReplyBufferWriteString
==============
*/

int __fastcall dwMail_ReplyBufferWriteString(const char *string_in)
{
  return ?dwMail_ReplyBufferWriteString@@YAHPEBD@Z(string_in);
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::GetRate
==============
*/
__int64 dwMailRateRecorderManager<20,1,60000>::GetRate(dwMailRateRecorderManager<20,1,60000> *this)
{
  int v2; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  unsigned int v4; 
  __int64 result; 
  int v6; 

  v2 = Sys_MillisecondsRaw();
  m_siwnetdwraterecorderentry_array = this->m_siwnetdwraterecorderentry_array;
  v4 = v2 - 60000;
  result = 0i64;
  v6 = 0;
  if ( this->m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v4 )
    {
      result = (unsigned int)(m_siwnetdwraterecorderentry_array->m_count + result);
      ++v6;
      ++m_siwnetdwraterecorderentry_array;
      if ( v6 >= this->m_numsamples )
        return result;
    }
    this->m_numsamples = v6;
  }
  return result;
}

/*
==============
dwMailThrottle::IsOK
==============
*/
char dwMailThrottle::IsOK(dwMailThrottle *this)
{
  int v2; 
  int m_numsamples; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  int v5; 
  unsigned int v6; 
  int v7; 

  if ( this->m_errorcondition )
  {
    if ( Sys_MillisecondsRaw() <= this->m_errortimestamp + this->m_errortimeamount )
    {
      if ( this->m_errorcondition )
        return 0;
    }
    else
    {
      this->m_errorcondition = 0;
    }
  }
  v2 = Sys_MillisecondsRaw();
  m_numsamples = this->m_dwmailraterecordermanager.m_numsamples;
  m_siwnetdwraterecorderentry_array = this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array;
  v5 = 0;
  v6 = v2 - 60000;
  v7 = 0;
  if ( m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v6 )
    {
      v5 += m_siwnetdwraterecorderentry_array->m_count;
      ++v7;
      ++m_siwnetdwraterecorderentry_array;
      if ( v7 >= m_numsamples )
        goto LABEL_10;
    }
    this->m_dwmailraterecordermanager.m_numsamples = v7;
LABEL_10:
    if ( v5 >= 20 )
      return 0;
  }
  this->m_errortimeamount = 1000;
  return 1;
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::PrivateAge
==============
*/
void dwMailRateRecorderManager<20,1,60000>::PrivateAge(dwMailRateRecorderManager<20,1,60000> *this, unsigned int edgetime_in)
{
  int m_numsamples; 
  int v3; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 

  m_numsamples = this->m_numsamples;
  if ( this->m_numsamples )
  {
    v3 = 0;
    m_siwnetdwraterecorderentry_array = this->m_siwnetdwraterecorderentry_array;
    if ( m_numsamples > 0 )
    {
      while ( m_siwnetdwraterecorderentry_array->m_time >= edgetime_in )
      {
        ++m_siwnetdwraterecorderentry_array;
        if ( ++v3 >= m_numsamples )
          return;
      }
      this->m_numsamples = v3;
    }
  }
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::PrivateGetTimeNow
==============
*/

int __fastcall dwMailRateRecorderManager<20,1,60000>::PrivateGetTimeNow(dwMailRateRecorderManager<20,1,60000> *this)
{
  return Sys_MillisecondsRaw();
}

/*
==============
dwMailRateRecorderManager<20,1,60000>::RecordUse
==============
*/
bool dwMailRateRecorderManager<20,1,60000>::RecordUse(dwMailRateRecorderManager<20,1,60000> *this)
{
  unsigned int v2; 
  int m_numsamples; 
  int v4; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  bool v6; 
  bool result; 

  v2 = Sys_MillisecondsRaw();
  m_numsamples = this->m_numsamples;
  if ( !this->m_numsamples )
    goto LABEL_9;
  v4 = 0;
  m_siwnetdwraterecorderentry_array = this->m_siwnetdwraterecorderentry_array;
  v6 = m_numsamples == 0;
  if ( m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v2 - 60000 )
    {
      ++m_siwnetdwraterecorderentry_array;
      if ( ++v4 >= m_numsamples )
        goto LABEL_7;
    }
    this->m_numsamples = v4;
    m_numsamples = v4;
LABEL_7:
    v6 = m_numsamples == 0;
  }
  if ( !v6 )
  {
    if ( this->m_siwnetdwraterecorderentry_array[0].m_time == v2 )
    {
      ++this->m_siwnetdwraterecorderentry_array[0].m_count;
      return 1;
    }
    else if ( m_numsamples < 20 )
    {
      memmove_0(&this->m_siwnetdwraterecorderentry_array[1], this->m_siwnetdwraterecorderentry_array, 8 * m_numsamples);
      ++this->m_numsamples;
      result = 1;
      this->m_siwnetdwraterecorderentry_array[0].m_time = v2;
      this->m_siwnetdwraterecorderentry_array[0].m_count = 1;
    }
    else
    {
      ++this->m_siwnetdwraterecorderentry_array[0].m_count;
      result = 0;
      this->m_siwnetdwraterecorderentry_array[0].m_time = v2;
    }
  }
  else
  {
LABEL_9:
    this->m_siwnetdwraterecorderentry_array[0].m_count = 1;
    result = 1;
    this->m_siwnetdwraterecorderentry_array[0].m_time = v2;
    ++this->m_numsamples;
  }
  return result;
}

/*
==============
dwMailThrottle::RecordUse
==============
*/
void dwMailThrottle::RecordUse(dwMailThrottle *this)
{
  unsigned int v2; 
  int m_numsamples; 
  int v4; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  bool v6; 

  v2 = Sys_MillisecondsRaw();
  m_numsamples = this->m_dwmailraterecordermanager.m_numsamples;
  if ( !m_numsamples )
    goto LABEL_9;
  v4 = 0;
  m_siwnetdwraterecorderentry_array = this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array;
  v6 = m_numsamples == 0;
  if ( m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v2 - 60000 )
    {
      ++m_siwnetdwraterecorderentry_array;
      if ( ++v4 >= m_numsamples )
        goto LABEL_7;
    }
    this->m_dwmailraterecordermanager.m_numsamples = v4;
    m_numsamples = v4;
LABEL_7:
    v6 = m_numsamples == 0;
  }
  if ( !v6 )
  {
    if ( this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_time == v2 )
    {
      ++this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_count;
    }
    else if ( m_numsamples < 20 )
    {
      memmove_0(&this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[1], this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array, 8 * m_numsamples);
      ++this->m_dwmailraterecordermanager.m_numsamples;
      this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_time = v2;
      this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_count = 1;
    }
    else
    {
      ++this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_count;
      this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_time = v2;
    }
  }
  else
  {
LABEL_9:
    this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_count = 1;
    this->m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array[0].m_time = v2;
    ++this->m_dwmailraterecordermanager.m_numsamples;
  }
}

/*
==============
dwMailThrottle::ReportError
==============
*/
void dwMailThrottle::ReportError(dwMailThrottle *this)
{
  unsigned int m_errortimeamount; 

  this->m_errorcondition = 1;
  this->m_errortimestamp = Sys_MillisecondsRaw();
  m_errortimeamount = this->m_errortimeamount;
  if ( m_errortimeamount >= 0x3E8 )
    this->m_errortimeamount = 2 * m_errortimeamount;
  else
    this->m_errortimeamount = 1000;
}

/*
==============
dwMailBufferWriter_Reset
==============
*/
void dwMailBufferWriter_Reset(dwMailBufferWriter *dwmailbufferwriter_in)
{
  if ( !dwmailbufferwriter_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2200, ASSERT_TYPE_ASSERT, "(dwmailbufferwriter_in)", (const char *)&queryFormat, "dwmailbufferwriter_in") )
    __debugbreak();
  dwmailbufferwriter_in->currentptr = dwmailbufferwriter_in->bufferptr;
  *(_QWORD *)&dwmailbufferwriter_in->numbytesleft = (unsigned int)dwmailbufferwriter_in->buffersize;
}

/*
==============
dwMailBufferWriter_WriteData
==============
*/
__int64 dwMailBufferWriter_WriteData(dwMailBufferWriter *dwmailbufferwriter_in, const void *dataptr_in, int datasize_in)
{
  size_t v3; 
  unsigned __int8 *currentptr; 
  int numbytesleft; 

  v3 = datasize_in;
  if ( !dwmailbufferwriter_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2214, ASSERT_TYPE_ASSERT, "(dwmailbufferwriter_in)", (const char *)&queryFormat, "dwmailbufferwriter_in") )
    __debugbreak();
  if ( (int)v3 > 0 )
  {
    currentptr = dwmailbufferwriter_in->currentptr;
    if ( currentptr )
    {
      numbytesleft = dwmailbufferwriter_in->numbytesleft;
      if ( numbytesleft < (int)v3 )
        return 0i64;
      if ( dataptr_in )
      {
        memcpy_0(dwmailbufferwriter_in->currentptr, dataptr_in, v3);
        currentptr = dwmailbufferwriter_in->currentptr;
        numbytesleft = dwmailbufferwriter_in->numbytesleft;
      }
      dwmailbufferwriter_in->currentptr = &currentptr[v3];
      dwmailbufferwriter_in->numbytesleft = numbytesleft - v3;
    }
    dwmailbufferwriter_in->numbyteswritten += v3;
  }
  return 1i64;
}

/*
==============
dwMail_AbortProcessing
==============
*/
void dwMail_AbortProcessing(void)
{
  s_dwMailManager.dwmailmailhandlerentry = NULL;
}

/*
==============
dwMail_DWMailStatus_f
==============
*/
void dwMail_DWMailStatus_f()
{
  switch ( s_dwMailManager.dwmailmanagerstate )
  {
    case DWMAILMANAGERSTATE_ERROR:
      Com_Printf(25, "dwmailstatus:  State = Error\n");
      break;
    case DWMAILMANAGERSTATE_IDLE:
      Com_Printf(25, "dwmailstatus:  State = Idle\n");
      break;
    case DWMAILMANAGERSTATE_GETHEADERSINIT:
      Com_Printf(25, "dwmailstatus:  State = GetHeadersInit\n");
      break;
    case DWMAILMANAGERSTATE_GETHEADERS:
      Com_Printf(25, "dwmailstatus:  State = GetHeaders\n");
      break;
    case DWMAILMANAGERSTATE_GETDATAINIT:
      Com_Printf(25, "dwmailstatus:  State = GetDataInit (for MailId#%zu)\n", s_dwMailManager.getmailbody_mailid);
      break;
    case DWMAILMANAGERSTATE_GETDATA:
      Com_Printf(25, "dwmailstatus:  State = GetData (for MailId#%zu)\n", s_dwMailManager.getmailbody_mailid);
      break;
    case DWMAILMANAGERSTATE_PROCESSING:
      if ( s_dwMailManager.dwmailmailhandlerentry )
        Com_Printf(25, "dwmailstatus:  State = Processing (for unknown handler)\n");
      else
        Com_Printf(25, "dwmailstatus:  State = Processing (for HandlerID#%d)\n", (unsigned int)s_dwMailManager.dwmailmailhandlerentry->id);
      break;
    case DWMAILMANAGERSTATE_SENDINIT:
      Com_Printf(25, "dwmailstatus:  State = SendInit (%d bytes to UserID#%zu)\n", s_dwMailManager.send_buffersize, s_dwMailManager.send_bdonlineuserid[0].m_userID);
      break;
    case DWMAILMANAGERSTATE_SEND:
      Com_Printf(25, "dwmailstatus:  State = Send (%d bytes to UserID#%zu)\n", s_dwMailManager.send_buffersize, s_dwMailManager.send_bdonlineuserid[0].m_userID);
      break;
    case DWMAILMANAGERSTATE_DELETEINIT:
    case DWMAILMANAGERSTATE_DELETE:
      Com_Printf(25, "dwmailstatus:  State = Delete (MailId#%zu)\n", s_dwMailManager.delete_mailid);
      break;
    default:
      Com_Printf(25, "dwmailstatus:  Unknown manager state %d!\n", (unsigned int)s_dwMailManager.dwmailmanagerstate);
      break;
  }
}

/*
==============
dwMail_DWMailVerbose_f
==============
*/
void dwMail_DWMailVerbose_f()
{
  int v0; 
  int verboseflag; 

  if ( Cmd_Argc() <= 1 || (v0 = Cmd_ArgInt(1), v0 < 0) )
  {
    verboseflag = s_dwMailManager.verboseflag;
    v0 = s_dwMailManager.verboseflag == 0;
  }
  else
  {
    verboseflag = s_dwMailManager.verboseflag;
  }
  if ( v0 )
  {
    if ( verboseflag )
    {
      Com_Printf(25, "dwmailverbose:  Verbose already enabled!\n");
    }
    else
    {
      Com_Printf(25, "dwmailverbose:  Verbose enabled!\n");
      s_dwMailManager.verboseflag = 1;
    }
  }
  else if ( verboseflag )
  {
    Com_Printf(25, "dwmailverbose:  Verbose disabled!\n");
    s_dwMailManager.verboseflag = 0;
  }
  else
  {
    Com_Printf(25, "dwmailverbose:  Verbose already disabled!\n");
  }
}

/*
==============
dwMail_DeleteMailFailure
==============
*/
void dwMail_DeleteMailFailure()
{
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: DeleteMailFailure() for MailID#%zu for controller #%d, going to ERROR state!\n", s_dwMailManager.delete_mailid, (unsigned int)s_dwMailManager.controllerindex);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_ERROR )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_ERROR;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_EmptyHandlerList
==============
*/
void dwMail_EmptyHandlerList(void)
{
  *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[0].id = 0i64;
  s_dwMailManager.dwmailmailhandlerentryarray[0].dwmailhandlerinspect = NULL;
  s_dwMailManager.dwmailmailhandlerentryarray[0].dwmailhandlerpump = NULL;
  *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[1].id = 0i64;
  s_dwMailManager.dwmailmailhandlerentryarray[1].dwmailhandlerinspect = NULL;
  s_dwMailManager.dwmailmailhandlerentryarray[1].dwmailhandlerpump = NULL;
  *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[2].id = 0i64;
  s_dwMailManager.dwmailmailhandlerentryarray[2].dwmailhandlerinspect = NULL;
  s_dwMailManager.dwmailmailhandlerentryarray[2].dwmailhandlerpump = NULL;
  s_dwMailManager.num_handlers = 0;
}

/*
==============
dwMail_Enable
==============
*/
void dwMail_Enable(int enable_in)
{
  s_dwMailManager.enabled = enable_in;
}

/*
==============
dwMail_FillWithDefaultValues
==============
*/
void *dwMail_FillWithDefaultValues()
{
  *(_QWORD *)&s_dwMailManager.fastcriticalsection.readCount = 0i64;
  s_dwMailManager.fastcriticalsection.tempPriority.threadHandle = NULL;
  *(_QWORD *)&s_dwMailManager.fastcriticalsection.tempPriority.oldPriority = 0i64;
  *(_QWORD *)&s_dwMailManager.fastcriticalsection.writeThreadId = 0i64;
  *(_QWORD *)&s_dwMailManager.enabled = 0i64;
  s_dwMailManager.time_entered_state = Sys_Milliseconds();
  s_dwMailManager.time_idle = s_dwMailManager.time_entered_state;
  s_dwMailManager.verboseflag = 0;
  *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[0].id = 0i64;
  s_dwMailManager.dwmailmailhandlerentryarray[0].dwmailhandlerinspect = NULL;
  s_dwMailManager.dwmailmailhandlerentryarray[0].dwmailhandlerpump = NULL;
  *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[1].id = 0i64;
  s_dwMailManager.dwmailmailhandlerentryarray[1].dwmailhandlerinspect = NULL;
  s_dwMailManager.dwmailmailhandlerentryarray[1].dwmailhandlerpump = NULL;
  *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[2].id = 0i64;
  s_dwMailManager.dwmailmailhandlerentryarray[2].dwmailhandlerinspect = NULL;
  s_dwMailManager.dwmailmailhandlerentryarray[2].dwmailhandlerpump = NULL;
  s_dwMailManager.num_handlers = 0;
  s_dwMailManager.dwmailmailhandlerentry = NULL;
  *(_QWORD *)&s_dwMailManager.request_send = 0i64;
  s_dwMailManager.controllerindex = 0;
  if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
  s_dwMailManager.bdremotetaskref.m_ptr = NULL;
  s_dwMailManager.dwmailbufferwriter.bufferptr = NULL;
  *(_QWORD *)&s_dwMailManager.dwmailbufferwriter.buffersize = 0i64;
  s_dwMailManager.dwmailbufferwriter.currentptr = NULL;
  *(_QWORD *)&s_dwMailManager.dwmailbufferwriter.numbytesleft = 0i64;
  s_dwMailManager.dwmailthrottle.m_errorcondition = 0;
  s_dwMailManager.getmailbody_mailid = 0i64;
  s_dwMailManager.send_bdonlineuserid[0].m_userID = 0i64;
  s_dwMailManager.send_bufferptr = NULL;
  s_dwMailManager.send_buffersize = 0;
  s_dwMailManager.delete_mailid = 0i64;
  *(_QWORD *)&s_dwMailManager.user[0].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[1].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[2].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[3].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[4].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[5].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[6].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.user[7].signedin = 0i64;
  *(_QWORD *)&s_dwMailManager.dwmailthrottle.m_errortimestamp = 0i64;
  s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples = 0;
  return memset_0(s_dwMailManager.bufferdata, 0, sizeof(s_dwMailManager.bufferdata));
}

/*
==============
dwMail_Frame
==============
*/
void dwMail_Frame(void)
{
  const dvar_t *v0; 
  bool v1; 
  int v2; 
  bdTask::bdStatus v3; 
  int NumResults; 
  bdTask::bdStatus v5; 
  int v6; 
  unsigned __int8 *bufferptr; 
  int buffersize_in; 
  XUID *Xuid; 
  unsigned __int64 UniversalId; 
  __int64 (*dwmailhandlerpump)(void); 
  int v12; 
  int v13; 
  bdTask::bdStatus v14; 
  bdTask::bdStatus v15; 
  XUID result; 

  v0 = DVARBOOL_online_mail_enabled;
  if ( !DVARBOOL_online_mail_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_mail_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "dwMail_Frame");
    Profile2_UpdateEntry(6);
    if ( ((unsigned __int8)dword_14FDE7FE8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE7FE8) )
      __debugbreak();
    _InterlockedIncrement(dword_14FDE7FE8);
    switch ( s_dwMailManager.dwmailmanagerstate )
    {
      case DWMAILMANAGERSTATE_ERROR:
        if ( Sys_Milliseconds() >= s_dwMailManager.time_entered_state + 2000 )
        {
          v1 = s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_IDLE;
          goto LABEL_103;
        }
        goto LABEL_106;
      case DWMAILMANAGERSTATE_IDLE:
        dwMail_PumpStateIdle();
        goto LABEL_106;
      case DWMAILMANAGERSTATE_GETHEADERSINIT:
        dwMail_PumpStateGetHeaderInit();
        goto LABEL_106;
      case DWMAILMANAGERSTATE_GETHEADERS:
        if ( !s_dwMailManager.bdremotetaskref.m_ptr )
        {
          Com_PrintError(25, "dwMail: bdremotetaskref became NULL (PumpStateGetHeader)!!!\n");
          if ( s_dwMailManager.verboseflag )
            Com_Printf(25, "dwMail: GetMailHeadersFailure() for controller #%d, going to ERROR state!\n", (unsigned int)s_dwMailManager.controllerindex);
          goto LABEL_16;
        }
        v3 = s_dwMailManager.bdremotetaskref.m_ptr->getStatus(s_dwMailManager.bdremotetaskref.m_ptr);
        if ( v3 != BD_PENDING )
        {
          if ( v3 == BD_DONE )
          {
            NumResults = bdRemoteTask::getNumResults(s_dwMailManager.bdremotetaskref.m_ptr);
            if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
            s_dwMailManager.bdremotetaskref.m_ptr = NULL;
            dwMail_GetMailHeadersSuccess(NumResults, s_dwMailManager.bdmailheader);
          }
          else
          {
            Com_PrintError(25, "dwMail: getMailHeaders() returned failure (%d)!!!\n", (unsigned int)v3);
            if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
            s_dwMailManager.bdremotetaskref.m_ptr = NULL;
            dwMail_GetMailHeadersFailure();
          }
        }
        goto LABEL_106;
      case DWMAILMANAGERSTATE_GETDATAINIT:
        dwMail_PumpStateGetDataInit();
        goto LABEL_106;
      case DWMAILMANAGERSTATE_GETDATA:
        if ( s_dwMailManager.bdremotetaskref.m_ptr )
        {
          v5 = s_dwMailManager.bdremotetaskref.m_ptr->getStatus(s_dwMailManager.bdremotetaskref.m_ptr);
          if ( v5 != BD_PENDING )
          {
            if ( v5 == BD_DONE )
            {
              v6 = bdRemoteTask::getNumResults(s_dwMailManager.bdremotetaskref.m_ptr);
              if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
              s_dwMailManager.bdremotetaskref.m_ptr = NULL;
              dwMail_GetMailDataSuccess(v6, &s_dwMailManager.bdmailbody);
            }
            else
            {
              Com_PrintError(25, "dwMail: getMails() returned failure (%d)!!!\n", (unsigned int)v5);
              if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
              s_dwMailManager.bdremotetaskref.m_ptr = NULL;
              dwMail_GetMailDataFailure();
            }
          }
        }
        else
        {
          Com_PrintError(25, "dwMail: bdremotetaskref became NULL! (PumpStateGetData)\n");
          dwMail_GetMailDataFailure();
        }
        goto LABEL_106;
      case DWMAILMANAGERSTATE_PROCESSING:
        if ( s_dwMailManager.request_send )
        {
          bufferptr = s_dwMailManager.dwmailbufferwriter.bufferptr;
          s_dwMailManager.request_send = 0;
          buffersize_in = s_dwMailManager.dwmailbufferwriter.numbyteswritten;
          Xuid = Live_GetXuid(&result, s_dwMailManager.controllerindex);
          UniversalId = XUID::GetUniversalId(Xuid);
          dwMail_SendMailInternal(UniversalId, (const unsigned __int64 *)&s_dwMailManager.bdmailheader[0].m_senderID[32], 1, 0, bufferptr, buffersize_in);
LABEL_106:
          Profile2_UpdateEntry(6);
          if ( ((unsigned __int64)dword_14FDE7FE8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE7FE8) )
            __debugbreak();
          _InterlockedDecrement(dword_14FDE7FE8);
          Sys_ProfEndNamedEvent();
          return;
        }
        if ( !s_dwMailManager.dwmailmailhandlerentry )
        {
          Com_PrintError(LODWORD(s_dwMailManager.dwmailmailhandlerentry) + 25, "dwMail: Mail Handler disappeared while in PROCESSING state!\n");
          s_dwMailManager.done_processing = 1;
          goto LABEL_65;
        }
        dwmailhandlerpump = (__int64 (*)(void))s_dwMailManager.dwmailmailhandlerentry->dwmailhandlerpump;
        if ( !dwmailhandlerpump )
        {
          Com_PrintError(25, "dwMail: Mail Handler pump function is NULL while in PROCESSING state!\n");
          s_dwMailManager.done_processing = 1;
          goto LABEL_65;
        }
        if ( s_dwMailManager.done_processing )
          goto LABEL_66;
        v12 = dwmailhandlerpump();
        v13 = v12;
        if ( (unsigned int)(v12 - 1) > 3 )
        {
          Com_PrintError(25, "dwMail: Mail handler pump returned ERROR, NOT_FOR_US, or something we don't recognize!\n");
          s_dwMailManager.request_send = 0;
          goto LABEL_66;
        }
        if ( !s_dwMailManager.verboseflag )
          goto LABEL_60;
        switch ( v12 )
        {
          case 2:
            Com_Printf(25, "dwMail: Mail handler pump returned PROCESSING_COMPLETE!\n");
            s_dwMailManager.done_processing = 1;
LABEL_65:
            if ( s_dwMailManager.request_send )
              goto LABEL_106;
LABEL_66:
            s_dwMailManager.done_processing = 0;
            dwMail_ProcessingDone();
            goto LABEL_106;
          case 3:
            Com_Printf(25, "dwMail: Mail handler pump returned SEND_THEN_CONTINUE!\n");
            break;
          case 4:
            Com_Printf(25, "dwMail: Mail handler pump returned SEND_THEN_COMPLETE!\n");
            break;
          default:
LABEL_60:
            if ( (unsigned int)(v12 - 3) > 1 )
              goto LABEL_62;
            break;
        }
        s_dwMailManager.request_send = 1;
LABEL_62:
        if ( ((v13 - 2) & 0xFFFFFFFD) != 0 )
        {
          if ( !s_dwMailManager.done_processing )
            goto LABEL_106;
        }
        else
        {
          s_dwMailManager.done_processing = 1;
        }
        goto LABEL_65;
      case DWMAILMANAGERSTATE_SENDINIT:
        dwMail_PumpStateSendInit();
        goto LABEL_106;
      case DWMAILMANAGERSTATE_SEND:
        if ( s_dwMailManager.bdremotetaskref.m_ptr )
        {
          v14 = s_dwMailManager.bdremotetaskref.m_ptr->getStatus(s_dwMailManager.bdremotetaskref.m_ptr);
          if ( v14 != BD_PENDING )
          {
            if ( v14 == BD_DONE )
            {
              if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
              s_dwMailManager.bdremotetaskref.m_ptr = NULL;
              dwMail_SendMailSuccess();
            }
            else
            {
              Com_PrintError(25, "dwMail: sendMail() returned failure (%d)!!!\n", (unsigned int)v14);
              if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
              s_dwMailManager.bdremotetaskref.m_ptr = NULL;
              dwMail_SendMailFailure();
            }
          }
        }
        else
        {
          Com_PrintError(25, "dwMail: bdremotetaskref became NULL! (PumpStateSend)\n");
          dwMail_SendMailFailure();
        }
        goto LABEL_106;
      case DWMAILMANAGERSTATE_DELETEINIT:
        dwMail_PumpStateDeleteInit();
        goto LABEL_106;
      case DWMAILMANAGERSTATE_DELETE:
        if ( s_dwMailManager.bdremotetaskref.m_ptr )
        {
          v15 = s_dwMailManager.bdremotetaskref.m_ptr->getStatus(s_dwMailManager.bdremotetaskref.m_ptr);
          if ( v15 != BD_PENDING )
          {
            if ( v15 == BD_DONE )
            {
              if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
              s_dwMailManager.bdremotetaskref.m_ptr = NULL;
              if ( s_dwMailManager.verboseflag )
                Com_Printf(25, "dwMail: Done deleting mail MailID#%zu for controller #%d, now let's go back to the IDLE state.\n", s_dwMailManager.delete_mailid, (unsigned int)s_dwMailManager.controllerindex);
              if ( s_dwMailManager.dwmailmanagerstate )
                goto LABEL_104;
            }
            else
            {
              Com_PrintError(25, "dwMail: deleteMail() returned failure (%d)!!!\n", (unsigned int)v15);
              if ( s_dwMailManager.bdremotetaskref.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&s_dwMailManager.bdremotetaskref.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && s_dwMailManager.bdremotetaskref.m_ptr )
                ((void (__fastcall *)(bdRemoteTask *, __int64))s_dwMailManager.bdremotetaskref.m_ptr->~bdReferencable)(s_dwMailManager.bdremotetaskref.m_ptr, 1i64);
              s_dwMailManager.bdremotetaskref.m_ptr = NULL;
              dwMail_DeleteMailFailure();
            }
          }
        }
        else
        {
          Com_PrintError(25, "dwMail: bdremotetaskref became NULL! (PumpStateDelete)\n");
LABEL_16:
          if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_ERROR )
          {
            s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_ERROR;
            v2 = Sys_Milliseconds();
            goto LABEL_105;
          }
        }
        goto LABEL_106;
      default:
        v1 = s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_IDLE;
LABEL_103:
        if ( !v1 )
        {
LABEL_104:
          s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_IDLE;
          v2 = Sys_Milliseconds();
          s_dwMailManager.time_idle = v2;
LABEL_105:
          s_dwMailManager.time_entered_state = v2;
        }
        goto LABEL_106;
    }
  }
}

/*
==============
dwMail_GetHandlerCount
==============
*/
__int64 dwMail_GetHandlerCount()
{
  return (unsigned int)s_dwMailManager.num_handlers;
}

/*
==============
dwMail_GetMailDataFailure
==============
*/
int dwMail_GetMailDataFailure()
{
  int result; 

  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: GetMailDataFailure() for controller #%d, going to ERROR state!\n", (unsigned int)s_dwMailManager.controllerindex);
  Sys_LockWrite(&s_dwMailManager.fastcriticalsection);
  ++s_dwMailManager.user[s_dwMailManager.controllerindex].newmailcounter;
  Sys_UnlockWrite(&s_dwMailManager.fastcriticalsection);
  result = (unsigned int)memset_0(s_dwMailManager.bufferdata, 0, sizeof(s_dwMailManager.bufferdata));
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_ERROR )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_ERROR;
    result = Sys_Milliseconds();
    s_dwMailManager.time_entered_state = result;
  }
  return result;
}

/*
==============
dwMail_GetMailDataSuccess
==============
*/
void dwMail_GetMailDataSuccess(const int num_mail_bodies_in, const bdMailBody *bdmailbody_in)
{
  unsigned int v4; 
  const char *v5; 
  int v6; 
  int num_handlers; 
  dwMailMailHandlerEntry *dwmailmailhandlerentryarray; 
  int v9; 
  dwMailHandlerReturnCode_t (__fastcall *dwmailhandlerinspect)(const int, const char *, const int, bdMailInfo *); 
  dwMailHandlerReturnCode_t v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( s_dwMailManager.verboseflag )
  {
    Com_Printf(25, "dwMail: Done fetching mail bodies for controller #%d\n", (unsigned int)s_dwMailManager.controllerindex);
    if ( num_mail_bodies_in <= 1 )
    {
      if ( num_mail_bodies_in == 1 )
      {
        Com_Printf(25, "dwMail: Exactly one mail body was found.\n");
        goto LABEL_6;
      }
      Com_Printf(25, "dwMail: No mail bodies were found!!!\n");
    }
    else
    {
      Com_Printf(25, "dwMail: More than one mail body was found!!!!\n");
    }
  }
  if ( num_mail_bodies_in < 1 )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: No mail data waiting for us.\n");
    if ( s_dwMailManager.dwmailmanagerstate )
    {
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_IDLE;
      s_dwMailManager.time_entered_state = Sys_Milliseconds();
      s_dwMailManager.time_idle = s_dwMailManager.time_entered_state;
    }
    return;
  }
LABEL_6:
  if ( !bdmailbody_in )
  {
    Com_PrintError(25, "dwMail: bdmailbody_in passed in is NULL!!!\n");
    if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_ERROR )
    {
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_ERROR;
      s_dwMailManager.time_entered_state = Sys_Milliseconds();
    }
    return;
  }
  v4 = *((_DWORD *)&bdmailbody_in->__vftable + 6);
  v5 = (const char *)*((_QWORD *)&bdmailbody_in->__vftable + 2);
  if ( v4 > 0x3FF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 1532, ASSERT_TYPE_ASSERT, "(buffersize <= ( sizeof( s_dwMailManager.bufferdata ) - 1 ))", (const char *)&queryFormat, "buffersize <= ( sizeof( s_dwMailManager.bufferdata ) - 1 )") )
      __debugbreak();
    v4 = 1023;
  }
  v5[v4] = 0;
  if ( s_dwMailManager.verboseflag )
  {
    Com_Printf(25, "dwMail: Discovered mail body MailID#%zu (%d bytes)\n", bdmailbody_in->m_mailID, v4);
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: PAUSING until process message callback handles message.\n");
  }
  v6 = 0;
  s_dwMailManager.dwmailbufferwriter.buffersize = 1024;
  s_dwMailManager.dwmailmailhandlerentry = NULL;
  *(_QWORD *)&s_dwMailManager.request_send = 0i64;
  s_dwMailManager.dwmailbufferwriter.bufferptr = (unsigned __int8 *)s_dwMailManager.bufferdata;
  dwMailBufferWriter_Reset(&s_dwMailManager.dwmailbufferwriter);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_PROCESSING;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
  num_handlers = s_dwMailManager.num_handlers;
  dwmailmailhandlerentryarray = s_dwMailManager.dwmailmailhandlerentryarray;
  v9 = 0;
  if ( s_dwMailManager.num_handlers <= 0 )
  {
LABEL_31:
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: No process message handler accepted this, therefore we're going straight to done!!!\n");
    memset_0(s_dwMailManager.bufferdata, 0, sizeof(s_dwMailManager.bufferdata));
    s_dwMailManager.delete_mailid = s_dwMailManager.bdmailbody.m_mailID;
    if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_DELETEINIT )
    {
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_DELETEINIT;
      s_dwMailManager.time_entered_state = Sys_Milliseconds();
    }
    return;
  }
  while ( 1 )
  {
    dwmailhandlerinspect = dwmailmailhandlerentryarray->dwmailhandlerinspect;
    if ( dwmailhandlerinspect )
      break;
LABEL_30:
    ++v9;
    ++dwmailmailhandlerentryarray;
    if ( v9 >= num_handlers )
      goto LABEL_31;
  }
  if ( s_dwMailManager.verboseflag )
  {
    Com_Printf(25, "dwMail: Calling process message callback (#%d)...\n", (unsigned int)(v9 + 1));
    dwmailhandlerinspect = dwmailmailhandlerentryarray->dwmailhandlerinspect;
  }
  v11 = dwmailhandlerinspect(s_dwMailManager.controllerindex, v5, v4, s_dwMailManager.bdmailheader);
  v14 = (unsigned int)v11;
  if ( v11 == DWMAILHANDLERRETURNCODE_NOT_FOR_US )
  {
    num_handlers = s_dwMailManager.num_handlers;
    goto LABEL_30;
  }
  if ( (unsigned int)(v11 - 1) > 3 )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: Process message callback returned %d, going straight to Continue(DELETE)...\n", (unsigned int)v11);
    dwMail_ProcessingDone(v13, v12, v14);
  }
  else
  {
    s_dwMailManager.dwmailmailhandlerentry = dwmailmailhandlerentryarray;
    s_dwMailManager.request_send = (unsigned int)(v11 - 3) <= 1;
    if ( ((v11 - 2) & 0xFFFFFFFD) == 0 )
      v6 = 1;
    s_dwMailManager.done_processing = v6;
    if ( s_dwMailManager.verboseflag )
    {
      switch ( v11 )
      {
        case DWMAILHANDLERRETURNCODE_PROCESSING_DONE:
          Com_Printf(25, "dwMail: Process message callback returned PROCESSING_COMPLETE, therefore we've got some pumping to do...\n");
          break;
        case DWMAILHANDLERRETURNCODE_PROCESSING_SEND_THEN_CONTINUE:
          Com_Printf(25, "dwMail: Process message callback returned PROCESSING_SEND_THEN_CONTINUE, therefore we've got some pumping to do...\n");
          break;
        case DWMAILHANDLERRETURNCODE_PROCESSING_SEND_THEN_DONE:
          Com_Printf(25, "dwMail: Process message callback returned PROCESSING_SEND_THEN_COMPLETE, therefore we've got some pumping to do...\n");
          break;
        default:
          Com_Printf(25, "dwMail: Process message callback returned PROCESSING, therefore we've got some pumping to do...\n");
          break;
      }
    }
  }
}

/*
==============
dwMail_GetMailHeadersFailure
==============
*/
void dwMail_GetMailHeadersFailure()
{
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: GetMailHeadersFailure() for controller #%d, going to ERROR state!\n", (unsigned int)s_dwMailManager.controllerindex);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_ERROR )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_ERROR;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_GetMailHeadersSuccess
==============
*/
void dwMail_GetMailHeadersSuccess(const int num_mail_headers_in, const bdMailInfo *bdmailheader_in)
{
  const char *v4; 
  int controllerindex; 
  __int64 v6; 
  __int64 v7; 

  if ( s_dwMailManager.verboseflag )
  {
    Com_Printf(25, "dwMail: Done fetching mail headers for controller #%d.\n", (unsigned int)s_dwMailManager.controllerindex);
    if ( num_mail_headers_in <= 1 )
    {
      v4 = "dwMail: Exactly one mail header entry was found.\n";
      if ( num_mail_headers_in != 1 )
        v4 = "dwMail: No mail header entries were found.\n";
      Com_Printf(25, v4);
    }
    else
    {
      Com_Printf(25, "dwMail: More than one mail header entry was found.\n");
    }
  }
  if ( !s_dwMailManager.enabled )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: We were disabled while fetching headers.  Let's just go back to IDLE state\n");
LABEL_10:
    if ( s_dwMailManager.dwmailmanagerstate )
    {
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_IDLE;
      s_dwMailManager.time_idle = Sys_Milliseconds();
      s_dwMailManager.time_entered_state = s_dwMailManager.time_idle;
    }
    return;
  }
  Sys_LockWrite(&s_dwMailManager.fastcriticalsection);
  --s_dwMailManager.user[s_dwMailManager.controllerindex].newmailcounter;
  controllerindex = s_dwMailManager.controllerindex;
  v6 = s_dwMailManager.controllerindex;
  if ( s_dwMailManager.user[v6].newmailcounter < 0 )
  {
    s_dwMailManager.user[v6].newmailcounter = 0;
    controllerindex = s_dwMailManager.controllerindex;
  }
  if ( num_mail_headers_in > 1 )
  {
    v7 = controllerindex;
    if ( s_dwMailManager.user[v7].newmailcounter < 1 )
      s_dwMailManager.user[v7].newmailcounter = 1;
  }
  Sys_UnlockWrite(&s_dwMailManager.fastcriticalsection);
  if ( num_mail_headers_in <= 0 )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: No message headers for controller #%d, therefore nothing to do.\n", (unsigned int)s_dwMailManager.controllerindex);
    goto LABEL_10;
  }
  if ( bdmailheader_in )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: Discovered mail header MailID#%zu (%d bytes) from user %zu '%s' for controller #%d\n", bdmailheader_in->m_mailID, bdmailheader_in->m_size, *(_QWORD *)&bdmailheader_in->m_senderID[32], bdmailheader_in->m_senderName, s_dwMailManager.controllerindex);
    if ( bdmailheader_in->m_size < 0x400 )
    {
      s_dwMailManager.getmailbody_mailid = bdmailheader_in->m_mailID;
      *((_QWORD *)&s_dwMailManager.bdmailbody.__vftable + 2) = s_dwMailManager.bufferdata;
      *((_DWORD *)&s_dwMailManager.bdmailbody.__vftable + 6) = 1023;
      s_dwMailManager.bdmailbody.m_mailID = 0i64;
      if ( s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_GETDATAINIT )
        return;
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_GETDATAINIT;
    }
    else
    {
      Com_PrintError(25, "dwMail: Uh oh, mail body too big to process!!!  We'll just delete it!\n");
      s_dwMailManager.delete_mailid = s_dwMailManager.bdmailbody.m_mailID;
      if ( s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_DELETEINIT )
        return;
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_DELETEINIT;
    }
  }
  else
  {
    Com_PrintError(25, "dwMail: bdmailheader_in passed in is NULL!!!\n");
    if ( s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_ERROR )
      return;
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_ERROR;
  }
  s_dwMailManager.time_entered_state = Sys_Milliseconds();
}

/*
==============
dwMail_HandleOnNewMailEvent
==============
*/
void dwMail_HandleOnNewMailEvent(const int controllerindex_in)
{
  __int64 v1; 

  v1 = controllerindex_in;
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: dwMail_HandleOnNewMailEvent( %d )\n", (unsigned int)controllerindex_in);
  if ( (unsigned int)v1 <= 7 )
    goto LABEL_7;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2618, ASSERT_TYPE_ASSERT, "(( controllerindex_in >= 0 ) && ( controllerindex_in < 8 ))", (const char *)&queryFormat, "( controllerindex_in >= 0 ) && ( controllerindex_in < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( (unsigned int)v1 <= 7 )
  {
LABEL_7:
    Sys_LockWrite(&s_dwMailManager.fastcriticalsection);
    ++s_dwMailManager.user[v1].newmailcounter;
    Sys_UnlockWrite(&s_dwMailManager.fastcriticalsection);
  }
}

/*
==============
dwMail_Init
==============
*/
void dwMail_Init(void)
{
  dwMail_FillWithDefaultValues();
  Cmd_AddCommandInternal("dwmailstatus", dwMail_DWMailStatus_f, &stru_1500E3ED0);
  Cmd_AddCommandInternal("dwmailverbose", dwMail_DWMailVerbose_f, &stru_1500E3F00);
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: dwMail_UserSignedInToLive( %d )\n", 0i64);
  s_dwMailManager.user[0].signedin = 1;
  Sys_LockWrite(&s_dwMailManager.fastcriticalsection);
  ++s_dwMailManager.user[0].newmailcounter;
  Sys_UnlockWrite(&s_dwMailManager.fastcriticalsection);
}

/*
==============
dwMail_IsBusy
==============
*/
_BOOL8 dwMail_IsBusy()
{
  return (unsigned int)(s_dwMailManager.dwmailmanagerstate + 1) > 1 && s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING;
}

/*
==============
dwMail_IsEnabled
==============
*/
__int64 dwMail_IsEnabled()
{
  return (unsigned int)s_dwMailManager.enabled;
}

/*
==============
dwMail_ProcessingDone
==============
*/
int dwMail_ProcessingDone()
{
  int result; 

  memset_0(s_dwMailManager.bufferdata, 0, sizeof(s_dwMailManager.bufferdata));
  result = s_dwMailManager.bdmailbody.m_mailID;
  s_dwMailManager.delete_mailid = s_dwMailManager.bdmailbody.m_mailID;
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_DELETEINIT )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_DELETEINIT;
    result = Sys_Milliseconds();
    s_dwMailManager.time_entered_state = result;
  }
  return result;
}

/*
==============
dwMail_PumpStateDeleteInit
==============
*/
void dwMail_PumpStateDeleteInit()
{
  int v0; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  unsigned int v2; 
  int v3; 
  int v4; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWMail *Mail; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> result; 

  if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
  {
    if ( Sys_MillisecondsRaw() <= s_dwMailManager.dwmailthrottle.m_errortimeamount + s_dwMailManager.dwmailthrottle.m_errortimestamp )
    {
      if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
      {
LABEL_11:
        if ( s_dwMailManager.verboseflag )
          Com_Printf(25, "dwMail: Throttle keeping us in DeleteInit state for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
        return;
      }
    }
    else
    {
      s_dwMailManager.dwmailthrottle.m_errorcondition = 0;
    }
  }
  v0 = Sys_MillisecondsRaw();
  m_siwnetdwraterecorderentry_array = s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array;
  v2 = v0 - 60000;
  v3 = 0;
  v4 = 0;
  if ( s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v2 )
    {
      v3 += m_siwnetdwraterecorderentry_array->m_count;
      ++v4;
      ++m_siwnetdwraterecorderentry_array;
      if ( v4 >= s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples )
        goto LABEL_10;
    }
    s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples = v4;
LABEL_10:
    if ( v3 >= 20 )
      goto LABEL_11;
  }
  s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, s_dwMailManager.controllerindex) )
  {
    Com_PrintError(25, "dwMail: Attempting to delete MailID#%zu for controller #%d, but bdmail object disappeared!\n", s_dwMailManager.delete_mailid, (unsigned int)s_dwMailManager.controllerindex);
LABEL_15:
    dwMail_DeleteMailFailure();
    return;
  }
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Calling deleteMail() for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
  v6 = DWServicesAccess::GetInstance();
  Mail = DWServicesAccess::GetMail(v6, s_dwMailManager.controllerindex);
  v8 = DWMail::deleteMail(Mail, &result, &s_dwMailManager.delete_mailid, 1u, NULL);
  bdReference<bdRemoteTask>::operator=(&s_dwMailManager.bdremotetaskref, v8);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( !s_dwMailManager.bdremotetaskref.m_ptr )
  {
    s_dwMailManager.dwmailthrottle.m_errorcondition = 1;
    s_dwMailManager.dwmailthrottle.m_errortimestamp = Sys_MillisecondsRaw();
    if ( s_dwMailManager.dwmailthrottle.m_errortimeamount >= 0x3E8 )
      s_dwMailManager.dwmailthrottle.m_errortimeamount *= 2;
    else
      s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
    Com_PrintError(25, "dwMail: Unable to start remote task for deleteMail()!!!\n");
    goto LABEL_15;
  }
  dwMailThrottle::RecordUse(&s_dwMailManager.dwmailthrottle);
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Deleting MailID#%zu for controller #%d...\n", s_dwMailManager.delete_mailid, (unsigned int)s_dwMailManager.controllerindex);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_DELETE )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_DELETE;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_PumpStateGetDataInit
==============
*/
void dwMail_PumpStateGetDataInit()
{
  int v0; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  unsigned int v2; 
  int v3; 
  int v4; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWMail *Mail; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> result; 

  if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
  {
    if ( Sys_MillisecondsRaw() <= s_dwMailManager.dwmailthrottle.m_errortimeamount + s_dwMailManager.dwmailthrottle.m_errortimestamp )
    {
      if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
      {
LABEL_11:
        if ( s_dwMailManager.verboseflag )
          Com_Printf(25, "dwMail: Throttle keeping us in GetDataInit state for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
        return;
      }
    }
    else
    {
      s_dwMailManager.dwmailthrottle.m_errorcondition = 0;
    }
  }
  v0 = Sys_MillisecondsRaw();
  m_siwnetdwraterecorderentry_array = s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array;
  v2 = v0 - 60000;
  v3 = 0;
  v4 = 0;
  if ( s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v2 )
    {
      v3 += m_siwnetdwraterecorderentry_array->m_count;
      ++v4;
      ++m_siwnetdwraterecorderentry_array;
      if ( v4 >= s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples )
        goto LABEL_10;
    }
    s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples = v4;
LABEL_10:
    if ( v3 >= 20 )
      goto LABEL_11;
  }
  s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, s_dwMailManager.controllerindex) )
  {
    Com_PrintError(25, "dwMail: Requesting mail body for MailID#%zu for controller #%d, but bdmail object disappeared!\n", s_dwMailManager.getmailbody_mailid, (unsigned int)s_dwMailManager.controllerindex);
LABEL_15:
    dwMail_GetMailDataFailure();
    return;
  }
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Requesting mail body for MailID#%zu for controller #%d\n", s_dwMailManager.getmailbody_mailid, (unsigned int)s_dwMailManager.controllerindex);
  v6 = DWServicesAccess::GetInstance();
  Mail = DWServicesAccess::GetMail(v6, s_dwMailManager.controllerindex);
  v8 = DWMail::getMail(Mail, &result, &s_dwMailManager.getmailbody_mailid, 1u, &s_dwMailManager.bdmailbody, 0, NULL);
  bdReference<bdRemoteTask>::operator=(&s_dwMailManager.bdremotetaskref, v8);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( !s_dwMailManager.bdremotetaskref.m_ptr )
  {
    s_dwMailManager.dwmailthrottle.m_errorcondition = 1;
    s_dwMailManager.dwmailthrottle.m_errortimestamp = Sys_MillisecondsRaw();
    if ( s_dwMailManager.dwmailthrottle.m_errortimeamount >= 0x3E8 )
      s_dwMailManager.dwmailthrottle.m_errortimeamount *= 2;
    else
      s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
    Com_PrintError(25, "dwMail: Unable to start remote task for getMails()!!!\n");
    goto LABEL_15;
  }
  dwMailThrottle::RecordUse(&s_dwMailManager.dwmailthrottle);
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Fetching mail data for MailID#%zu for controller #%d...\n", s_dwMailManager.getmailbody_mailid, (unsigned int)s_dwMailManager.controllerindex);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_GETDATA )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_GETDATA;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_PumpStateGetHeaderInit
==============
*/
void dwMail_PumpStateGetHeaderInit()
{
  int v0; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  unsigned int v2; 
  int v3; 
  int v4; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWMail *Mail; 
  const bdReference<bdRemoteTask> *MailInfo; 
  bdReference<bdRemoteTask> result; 

  if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
  {
    if ( Sys_MillisecondsRaw() <= s_dwMailManager.dwmailthrottle.m_errortimeamount + s_dwMailManager.dwmailthrottle.m_errortimestamp )
    {
      if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
      {
LABEL_11:
        if ( s_dwMailManager.verboseflag )
          Com_Printf(25, "dwMail: Throttle keeping us in GetHeaderInit state for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
        return;
      }
    }
    else
    {
      s_dwMailManager.dwmailthrottle.m_errorcondition = 0;
    }
  }
  v0 = Sys_MillisecondsRaw();
  m_siwnetdwraterecorderentry_array = s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array;
  v2 = v0 - 60000;
  v3 = 0;
  v4 = 0;
  if ( s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v2 )
    {
      v3 += m_siwnetdwraterecorderentry_array->m_count;
      ++v4;
      ++m_siwnetdwraterecorderentry_array;
      if ( v4 >= s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples )
        goto LABEL_10;
    }
    s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples = v4;
LABEL_10:
    if ( v3 >= 20 )
      goto LABEL_11;
  }
  s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
  if ( Sys_Milliseconds() < s_dwMailManager.time_entered_state + 1000 )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: Still waiting for our GETHEADER wait time to be up for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
    return;
  }
  if ( !LiveStorage_IsTimeSynced() )
  {
    if ( s_dwMailManager.verboseflag )
      Com_Printf(25, "dwMail: Still waiting for time synced\n");
    return;
  }
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, s_dwMailManager.controllerindex) )
  {
    Com_PrintError(25, "dwMail: Attempting to get mail header for controller #%d, however bdmail object is NULL.\n", (unsigned int)s_dwMailManager.controllerindex);
LABEL_21:
    dwMail_GetMailHeadersFailure();
    return;
  }
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Calling getMailHeaders() for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
  if ( !Live_IsSignedIn(s_dwMailManager.controllerindex) )
  {
    Com_PrintError(25, "dwMail: Attempting to get mail header for controller #%d, controller is no longer signed in.\n", (unsigned int)s_dwMailManager.controllerindex);
    goto LABEL_21;
  }
  v6 = DWServicesAccess::GetInstance();
  Mail = DWServicesAccess::GetMail(v6, s_dwMailManager.controllerindex);
  MailInfo = DWMail::getMailInfo(Mail, &result, s_dwMailManager.bdmailheader, 0, 2u, 0, NULL);
  bdReference<bdRemoteTask>::operator=(&s_dwMailManager.bdremotetaskref, MailInfo);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( !s_dwMailManager.bdremotetaskref.m_ptr )
  {
    s_dwMailManager.dwmailthrottle.m_errorcondition = 1;
    s_dwMailManager.dwmailthrottle.m_errortimestamp = Sys_MillisecondsRaw();
    if ( s_dwMailManager.dwmailthrottle.m_errortimeamount >= 0x3E8 )
      s_dwMailManager.dwmailthrottle.m_errortimeamount *= 2;
    else
      s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
    Com_PrintError(25, "dwMail: Unable to start remote task for getMailHeaders()!!!\n");
    goto LABEL_21;
  }
  dwMailThrottle::RecordUse(&s_dwMailManager.dwmailthrottle);
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Fetching mail headers for controller #%d\n", (unsigned int)s_dwMailManager.controllerindex);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_GETHEADERS )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_GETHEADERS;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_PumpStateIdle
==============
*/
void dwMail_PumpStateIdle()
{
  int *p_newmailcounter; 
  int *v1; 
  int v2; 
  DWServicesAccess *Instance; 
  int v4; 
  int v5; 
  DWServicesAccess *v6; 
  dwOutgoingMail *p_outgoingmail; 
  __int64 messagesize; 
  __int64 v11; 
  __int64 v12; 
  TempThreadPriority tempPriority; 
  TempThreadPriority v14; 
  int v15; 
  int *v16; 

  if ( !s_dwMailManager.enabled )
    return;
  p_newmailcounter = &s_dwMailManager.user[0].newmailcounter;
  v1 = &s_dwMailManager.user[0].newmailcounter;
  v2 = 0;
  v16 = &s_dwMailManager.user[0].newmailcounter;
  do
  {
    if ( !*(v1 - 1) )
      goto LABEL_7;
    Instance = DWServicesAccess::GetInstance();
    if ( !DWServicesAccess::isReady(Instance, v2) )
      goto LABEL_7;
    if ( v1[665] > 0 )
    {
      s_dwMailManager.controllerindex = v2;
      s_dwMailManager.dwmailbufferwriter.buffersize = 1024;
      p_outgoingmail = &s_dwMailManager.user[v2].outgoingmail;
      s_dwMailManager.dwmailbufferwriter.bufferptr = (unsigned __int8 *)s_dwMailManager.bufferdata;
      dwMailBufferWriter_Reset(&s_dwMailManager.dwmailbufferwriter);
      messagesize = p_outgoingmail->messagesize;
      if ( (int)messagesize > 0 )
      {
        if ( !s_dwMailManager.dwmailbufferwriter.currentptr )
        {
LABEL_40:
          s_dwMailManager.dwmailbufferwriter.numbyteswritten += messagesize;
          goto LABEL_41;
        }
        if ( s_dwMailManager.dwmailbufferwriter.numbytesleft >= (int)messagesize )
        {
          memcpy_0(s_dwMailManager.dwmailbufferwriter.currentptr, p_outgoingmail, p_outgoingmail->messagesize);
          s_dwMailManager.dwmailbufferwriter.currentptr += messagesize;
          s_dwMailManager.dwmailbufferwriter.numbytesleft -= messagesize;
          goto LABEL_40;
        }
      }
LABEL_41:
      dwMail_SendMailInternal(p_outgoingmail->sender, p_outgoingmail->userids, p_outgoingmail->useridcount, p_outgoingmail->category, p_outgoingmail, p_outgoingmail->messagesize);
      return;
    }
    if ( *v1 > 0 )
    {
      s_dwMailManager.controllerindex = v2;
      if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_GETHEADERSINIT )
      {
        s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_GETHEADERSINIT;
        s_dwMailManager.time_entered_state = Sys_Milliseconds();
      }
      return;
    }
LABEL_7:
    ++v2;
    v1 += 668;
  }
  while ( v2 < 8 );
  v4 = Sys_Milliseconds();
  if ( v4 < s_dwMailManager.time_idle + 1200000 )
    return;
  v5 = 0;
  s_dwMailManager.time_idle = v4;
  v15 = 0;
  while ( 2 )
  {
    if ( !*(p_newmailcounter - 1) )
      goto LABEL_57;
    v6 = DWServicesAccess::GetInstance();
    if ( !DWServicesAccess::isReady(v6, v5) )
      goto LABEL_57;
    Sys_TempThreadPriorityAtLeastNormalBegin(&tempPriority);
    if ( s_dwMailManager.fastcriticalsection.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 147, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't try to call this again on a thread that already holds the lock.") )
      __debugbreak();
    while ( 2 )
    {
      if ( s_dwMailManager.fastcriticalsection.readCount )
        goto LABEL_33;
      if ( ((unsigned __int8)&s_dwMailManager.fastcriticalsection.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", s_dwMailManager.fastcriticalsection.readCount + 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_dwMailManager.fastcriticalsection.writeCount) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&s_dwMailManager.fastcriticalsection.writeCount, 1, 0) )
      {
LABEL_33:
        Sys_Sleep(0);
        continue;
      }
      break;
    }
    if ( s_dwMailManager.fastcriticalsection.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 103, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == INVALID_THREAD_ID)", (const char *)&queryFormat, "critSect->writeThreadId == INVALID_THREAD_ID") )
      __debugbreak();
    s_dwMailManager.fastcriticalsection.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_dwMailManager.fastcriticalsection.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 105, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId != INVALID_THREAD_ID)", (const char *)&queryFormat, "critSect->writeThreadId != INVALID_THREAD_ID") )
      __debugbreak();
    if ( s_dwMailManager.fastcriticalsection.readCount )
    {
      s_dwMailManager.fastcriticalsection.writeThreadId = 0;
      if ( ((unsigned __int8)&s_dwMailManager.fastcriticalsection.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_dwMailManager.fastcriticalsection.writeCount) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&s_dwMailManager.fastcriticalsection.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 113, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
        __debugbreak();
      goto LABEL_33;
    }
    p_newmailcounter = v16;
    __asm { vmovups xmm0, xmmword ptr [rsp+0A8h+tempPriority.threadHandle] }
    v5 = v15;
    __asm { vmovups xmmword ptr cs:?s_dwMailManager@@3UdwMailManager@@A.fastcriticalsection.tempPriority.threadHandle, xmm0; dwMailManager s_dwMailManager }
    if ( !*v16 )
      *v16 = 1;
    if ( s_dwMailManager.fastcriticalsection.writeCount != 1 )
    {
      LODWORD(v12) = 1;
      LODWORD(v11) = s_dwMailManager.fastcriticalsection.writeCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", v11, v12) )
        __debugbreak();
    }
    if ( s_dwMailManager.fastcriticalsection.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
    s_dwMailManager.fastcriticalsection.writeThreadId = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?s_dwMailManager@@3UdwMailManager@@A.fastcriticalsection.tempPriority.threadHandle; dwMailManager s_dwMailManager
      vmovups xmmword ptr [rsp+0A8h+var_48.threadHandle], xmm0
    }
    if ( ((unsigned __int8)&s_dwMailManager.fastcriticalsection.writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_dwMailManager.fastcriticalsection.writeCount) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&s_dwMailManager.fastcriticalsection.writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
      __debugbreak();
    Sys_TempThreadPriorityEnd(&v14);
LABEL_57:
    ++v5;
    p_newmailcounter += 668;
    v15 = v5;
    v16 = p_newmailcounter;
    if ( v5 < 8 )
      continue;
    break;
  }
}

/*
==============
dwMail_PumpStateSendInit
==============
*/
void dwMail_PumpStateSendInit()
{
  int v0; 
  dwMailRateRecorderEntry *m_siwnetdwraterecorderentry_array; 
  unsigned int v2; 
  int v3; 
  int v4; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v6; 
  DWMail *Mail; 
  const bdReference<bdRemoteTask> *v8; 
  int mailCategory; 
  bdReference<bdRemoteTask> result; 

  if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
  {
    if ( Sys_MillisecondsRaw() <= s_dwMailManager.dwmailthrottle.m_errortimeamount + s_dwMailManager.dwmailthrottle.m_errortimestamp )
    {
      if ( s_dwMailManager.dwmailthrottle.m_errorcondition )
      {
LABEL_11:
        if ( s_dwMailManager.verboseflag )
          Com_Printf(25, "dwMail: Throttle keeping us in SendInit state for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
        return;
      }
    }
    else
    {
      s_dwMailManager.dwmailthrottle.m_errorcondition = 0;
    }
  }
  v0 = Sys_MillisecondsRaw();
  m_siwnetdwraterecorderentry_array = s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_siwnetdwraterecorderentry_array;
  v2 = v0 - 60000;
  v3 = 0;
  v4 = 0;
  if ( s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples > 0 )
  {
    while ( m_siwnetdwraterecorderentry_array->m_time >= v2 )
    {
      v3 += m_siwnetdwraterecorderentry_array->m_count;
      ++v4;
      ++m_siwnetdwraterecorderentry_array;
      if ( v4 >= s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples )
        goto LABEL_10;
    }
    s_dwMailManager.dwmailthrottle.m_dwmailraterecordermanager.m_numsamples = v4;
LABEL_10:
    if ( v3 >= 20 )
      goto LABEL_11;
  }
  s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, s_dwMailManager.controllerindex) )
  {
    mailCategory = s_dwMailManager.controllerindex;
    Com_PrintError(25, "dwMail: Attempting to send mail to user %zu (size=%d) for controller #%d, but bdmail object disappeared!\n", s_dwMailManager.send_bdonlineuserid[0].m_userID, s_dwMailManager.send_buffersize, mailCategory);
LABEL_15:
    dwMail_SendMailFailure();
    return;
  }
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Calling sendMail() for controller #%d...\n", (unsigned int)s_dwMailManager.controllerindex);
  v6 = DWServicesAccess::GetInstance();
  Mail = DWServicesAccess::GetMail(v6, s_dwMailManager.controllerindex);
  v8 = DWMail::sendMail(Mail, &result, s_dwMailManager.send_bufferptr, s_dwMailManager.send_buffersize, 0, s_dwMailManager.send_bdonlineuserid, 1u, NULL);
  bdReference<bdRemoteTask>::operator=(&s_dwMailManager.bdremotetaskref, v8);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( !s_dwMailManager.bdremotetaskref.m_ptr )
  {
    s_dwMailManager.dwmailthrottle.m_errorcondition = 1;
    s_dwMailManager.dwmailthrottle.m_errortimestamp = Sys_MillisecondsRaw();
    if ( s_dwMailManager.dwmailthrottle.m_errortimeamount >= 0x3E8 )
      s_dwMailManager.dwmailthrottle.m_errortimeamount *= 2;
    else
      s_dwMailManager.dwmailthrottle.m_errortimeamount = 1000;
    Com_PrintError(25, "dwMail: Unable to start remote task for sendMail()!!!\n");
    goto LABEL_15;
  }
  dwMailThrottle::RecordUse(&s_dwMailManager.dwmailthrottle);
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Sending mail to User %zu of size %d bytes...\n", s_dwMailManager.send_bdonlineuserid[0].m_userID, s_dwMailManager.send_buffersize);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_SEND )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_SEND;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_RegisterHandler
==============
*/
__int64 dwMail_RegisterHandler(int id_in, dwMailHandlerReturnCode_t (*dwmailhandlerinspect_in)(const int, const char *, const int, bdMailInfo *), dwMailHandlerReturnCode_t (*dwmailhandlerpump_in)())
{
  bool v6; 
  int num_handlers; 
  int v8; 
  int v9; 
  dwMailHandlerReturnCode_t (__fastcall **p_dwmailhandlerinspect)(const int, const char *, const int, bdMailInfo *); 

  if ( dwmailhandlerinspect_in )
  {
    num_handlers = s_dwMailManager.num_handlers;
    v8 = 0;
    v9 = 0;
    if ( s_dwMailManager.num_handlers <= 0 )
      goto LABEL_9;
    p_dwmailhandlerinspect = &s_dwMailManager.dwmailmailhandlerentryarray[0].dwmailhandlerinspect;
    do
    {
      if ( *((_DWORD *)p_dwmailhandlerinspect - 2) == id_in )
      {
        *p_dwmailhandlerinspect = dwmailhandlerinspect_in;
        v8 = 1;
        p_dwmailhandlerinspect[1] = (dwMailHandlerReturnCode_t (__fastcall *)(const int, const char *, const int, bdMailInfo *))dwmailhandlerpump_in;
        num_handlers = s_dwMailManager.num_handlers;
      }
      ++v9;
      p_dwmailhandlerinspect += 3;
    }
    while ( v9 < num_handlers );
    if ( !v8 )
    {
LABEL_9:
      if ( num_handlers >= 3 )
      {
        v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2367, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "dwMail: mail handler queue is full!");
        goto LABEL_11;
      }
      s_dwMailManager.dwmailmailhandlerentryarray[num_handlers].id = id_in;
      s_dwMailManager.dwmailmailhandlerentryarray[s_dwMailManager.num_handlers].dwmailhandlerinspect = dwmailhandlerinspect_in;
      s_dwMailManager.dwmailmailhandlerentryarray[s_dwMailManager.num_handlers++].dwmailhandlerpump = dwmailhandlerpump_in;
    }
    return 1i64;
  }
  v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2341, ASSERT_TYPE_ASSERT, "(dwmailhandlerinspect_in != 0)", (const char *)&queryFormat, "dwmailhandlerinspect_in != NULL");
LABEL_11:
  if ( v6 )
    __debugbreak();
  return 0i64;
}

/*
==============
dwMail_ReplyBufferGetNumBytesWritten
==============
*/
__int64 dwMail_ReplyBufferGetNumBytesWritten()
{
  return (unsigned int)s_dwMailManager.dwmailbufferwriter.numbyteswritten;
}

/*
==============
dwMail_ReplyBufferReset
==============
*/
void dwMail_ReplyBufferReset(void)
{
  if ( s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2443, ASSERT_TYPE_ASSERT, "(s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING)", (const char *)&queryFormat, "s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING") )
    __debugbreak();
  if ( s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING )
  {
LABEL_5:
    s_dwMailManager.dwmailbufferwriter.currentptr = s_dwMailManager.dwmailbufferwriter.bufferptr;
    s_dwMailManager.dwmailbufferwriter.numbytesleft = s_dwMailManager.dwmailbufferwriter.buffersize;
    s_dwMailManager.dwmailbufferwriter.numbyteswritten = 0;
  }
}

/*
==============
dwMail_ReplyBufferWriteData
==============
*/
__int64 dwMail_ReplyBufferWriteData(const void *dataptr_in, int datasize_in)
{
  size_t v3; 
  unsigned __int8 *currentptr; 
  int numbytesleft; 

  v3 = datasize_in;
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2460, ASSERT_TYPE_ASSERT, "(s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING)", (const char *)&queryFormat, "s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING") )
      __debugbreak();
    if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
      return 0i64;
  }
  if ( (int)v3 > 0 )
  {
    currentptr = s_dwMailManager.dwmailbufferwriter.currentptr;
    if ( s_dwMailManager.dwmailbufferwriter.currentptr )
    {
      numbytesleft = s_dwMailManager.dwmailbufferwriter.numbytesleft;
      if ( s_dwMailManager.dwmailbufferwriter.numbytesleft < (int)v3 )
        return 0i64;
      if ( dataptr_in )
      {
        memcpy_0(s_dwMailManager.dwmailbufferwriter.currentptr, dataptr_in, v3);
        numbytesleft = s_dwMailManager.dwmailbufferwriter.numbytesleft;
        currentptr = s_dwMailManager.dwmailbufferwriter.currentptr;
      }
      s_dwMailManager.dwmailbufferwriter.currentptr = &currentptr[v3];
      s_dwMailManager.dwmailbufferwriter.numbytesleft = numbytesleft - v3;
    }
    s_dwMailManager.dwmailbufferwriter.numbyteswritten += v3;
  }
  return 1i64;
}

/*
==============
dwMail_ReplyBufferWriteString
==============
*/
__int64 dwMail_ReplyBufferWriteString(const char *string_in)
{
  __int64 v3; 

  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2477, ASSERT_TYPE_ASSERT, "(s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING)", (const char *)&queryFormat, "s_dwMailManager.dwmailmanagerstate == DWMAILMANAGERSTATE_PROCESSING") )
      __debugbreak();
    if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
      return 0i64;
  }
  if ( !string_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2246, ASSERT_TYPE_ASSERT, "(string_in)", (const char *)&queryFormat, "string_in") )
    __debugbreak();
  v3 = -1i64;
  do
    ++v3;
  while ( string_in[v3] );
  return dwMailBufferWriter_WriteData(&s_dwMailManager.dwmailbufferwriter, string_in, v3);
}

/*
==============
dwMail_SendMail
==============
*/
void dwMail_SendMail(const int controllerindex_in, unsigned __int16 category, unsigned int expiration, unsigned __int64 *bdonlineuserid_in, int bdonlineuseridcount_in, const void *bufferptr_in, const int buffersize_in)
{
  __int64 v8; 
  XUID *Xuid; 
  __int64 v11; 
  signed __int64 v12; 
  XUID result; 

  v8 = controllerindex_in;
  s_dwMailManager.user[v8].outgoingmail.category = category;
  if ( (unsigned __int64)buffersize_in > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 1853, ASSERT_TYPE_ASSERT, "(buffersize_in <= sizeof( mail->message ))", (const char *)&queryFormat, "buffersize_in <= sizeof( mail->message )") )
    __debugbreak();
  memcpy_0(&s_dwMailManager.user[v8].outgoingmail, bufferptr_in, buffersize_in);
  s_dwMailManager.user[v8].outgoingmail.messagesize = buffersize_in;
  Xuid = Live_GetXuid(&result, s_dwMailManager.controllerindex);
  s_dwMailManager.user[v8].outgoingmail.sender = XUID::GetUniversalId(Xuid);
  v11 = bdonlineuseridcount_in;
  if ( bdonlineuseridcount_in > 0 )
  {
    v12 = (char *)&s_dwMailManager.user[v8].outgoingmail - (char *)bdonlineuserid_in;
    do
    {
      *(unsigned __int64 *)((char *)bdonlineuserid_in + v12 + 1040) = *bdonlineuserid_in;
      ++bdonlineuserid_in;
      --v11;
    }
    while ( v11 );
  }
  s_dwMailManager.user[v8].outgoingmail.useridcount = bdonlineuseridcount_in;
  s_dwMailManager.user[v8].outgoingmail.expiration = expiration;
  ++s_dwMailManager.user[v8].outgoingmailcounter;
}

/*
==============
dwMail_SendMailFailure
==============
*/
void dwMail_SendMailFailure()
{
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: SendMailFailure() for controller #%d, continuing on to delete our original mail message...\n", (unsigned int)s_dwMailManager.controllerindex);
  memset_0(s_dwMailManager.bufferdata, 0, sizeof(s_dwMailManager.bufferdata));
  s_dwMailManager.dwmailbufferwriter.bufferptr = (unsigned __int8 *)s_dwMailManager.bufferdata;
  s_dwMailManager.dwmailbufferwriter.buffersize = 1024;
  dwMailBufferWriter_Reset(&s_dwMailManager.dwmailbufferwriter);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_PROCESSING;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_SendMailInternal
==============
*/
void dwMail_SendMailInternal(const unsigned __int64 sender_in, const unsigned __int64 *bdonlineuserid_in, int bdonlineuseridcount_in, unsigned __int16 category_in, void *bufferptr_in, const int buffersize_in)
{
  __int64 v7; 
  __int64 v9; 
  unsigned __int64 *p_m_userID; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 userID[2]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  v7 = bdonlineuseridcount_in;
  userID[0] = sender_in;
  if ( bufferptr_in && buffersize_in >= 1 )
  {
    bdUserAccountID::bdUserAccountID(&other, userID);
    bdUserAccountID::operator=(&s_dwMailManager.send_sender, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( (int)v7 > 0 )
    {
      v9 = 0i64;
      p_m_userID = &s_dwMailManager.send_bdonlineuserid[0].m_userID;
      do
      {
        *p_m_userID = bdonlineuserid_in[v9++];
        p_m_userID += 9;
      }
      while ( v9 < v7 );
    }
    s_dwMailManager.send_bdonlineuseridcount = v7;
    s_dwMailManager.send_category = category_in;
    s_dwMailManager.send_bufferptr = bufferptr_in;
    s_dwMailManager.send_buffersize = buffersize_in;
    s_dwMailManager.send_expiration = 0;
    if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_SENDINIT )
    {
      s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_SENDINIT;
      s_dwMailManager.time_entered_state = Sys_Milliseconds();
    }
  }
  else
  {
    Com_PrintError(25, "dwMail: Nothing to send! Let's pretend we just sent it.\n");
    dwMail_SendMailSuccess(v12, v11);
  }
}

/*
==============
dwMail_SendMailSuccess
==============
*/
void dwMail_SendMailSuccess()
{
  __int64 controllerindex; 
  int outgoingmailcounter; 

  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: Mail sent for controller #%d!\n", (unsigned int)s_dwMailManager.controllerindex);
  controllerindex = s_dwMailManager.controllerindex;
  outgoingmailcounter = s_dwMailManager.user[controllerindex].outgoingmailcounter;
  if ( outgoingmailcounter > 0 )
    s_dwMailManager.user[controllerindex].outgoingmailcounter = outgoingmailcounter - 1;
  memset_0(s_dwMailManager.bufferdata, 0, sizeof(s_dwMailManager.bufferdata));
  s_dwMailManager.dwmailbufferwriter.bufferptr = (unsigned __int8 *)s_dwMailManager.bufferdata;
  s_dwMailManager.dwmailbufferwriter.buffersize = 1024;
  dwMailBufferWriter_Reset(&s_dwMailManager.dwmailbufferwriter);
  if ( s_dwMailManager.dwmailmanagerstate != DWMAILMANAGERSTATE_PROCESSING )
  {
    s_dwMailManager.dwmailmanagerstate = DWMAILMANAGERSTATE_PROCESSING;
    s_dwMailManager.time_entered_state = Sys_Milliseconds();
  }
}

/*
==============
dwMail_Shutdown
==============
*/
void dwMail_Shutdown(void)
{
  dwMail_FillWithDefaultValues();
  Cmd_RemoveCommand("dwmailstatus");
  Cmd_RemoveCommand("dwmailverbose");
}

/*
==============
dwMail_UnregisterHandler
==============
*/
void dwMail_UnregisterHandler(int id_in)
{
  int num_handlers; 
  int v2; 
  int v4; 
  dwMailMailHandlerEntry *dwmailmailhandlerentryarray; 
  __int64 v6; 

  num_handlers = s_dwMailManager.num_handlers;
  v2 = 0;
  if ( s_dwMailManager.num_handlers > 0 )
  {
    v4 = 1;
    dwmailmailhandlerentryarray = s_dwMailManager.dwmailmailhandlerentryarray;
    do
    {
      if ( dwmailmailhandlerentryarray->id == id_in )
      {
        if ( num_handlers - v2 - 1 > 0 )
        {
          memmove_0(&s_dwMailManager.dwmailmailhandlerentryarray[v2], &s_dwMailManager.dwmailmailhandlerentryarray[v4], 24i64 * (num_handlers - v2 - 1));
          num_handlers = s_dwMailManager.num_handlers;
        }
        --v2;
        --v4;
        v6 = num_handlers - 1;
        *(_QWORD *)&s_dwMailManager.dwmailmailhandlerentryarray[v6].id = 0i64;
        s_dwMailManager.dwmailmailhandlerentryarray[v6].dwmailhandlerinspect = NULL;
        s_dwMailManager.dwmailmailhandlerentryarray[v6].dwmailhandlerpump = NULL;
        num_handlers = --s_dwMailManager.num_handlers;
        --dwmailmailhandlerentryarray;
      }
      ++v2;
      ++v4;
      ++dwmailmailhandlerentryarray;
    }
    while ( v2 < num_handlers );
  }
}

/*
==============
dwMail_UserSignedInToLive
==============
*/
void dwMail_UserSignedInToLive(const int controllerindex_in)
{
  __int64 v1; 
  dwMailUser *v2; 

  v1 = controllerindex_in;
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: dwMail_UserSignedInToLive( %d )\n", (unsigned int)controllerindex_in);
  if ( (unsigned int)v1 <= 7 )
    goto LABEL_7;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2647, ASSERT_TYPE_ASSERT, "(( controllerindex_in >= 0 ) && ( controllerindex_in < 8 ))", (const char *)&queryFormat, "( controllerindex_in >= 0 ) && ( controllerindex_in < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( (unsigned int)v1 <= 7 )
  {
LABEL_7:
    v2 = &s_dwMailManager.user[v1];
    v2->signedin = 1;
    Sys_LockWrite(&s_dwMailManager.fastcriticalsection);
    ++v2->newmailcounter;
    Sys_UnlockWrite(&s_dwMailManager.fastcriticalsection);
  }
}

/*
==============
dwMail_UserSignedOut
==============
*/
void dwMail_UserSignedOut(const int controllerindex_in)
{
  __int64 v1; 
  dwMailUser *v2; 

  v1 = controllerindex_in;
  if ( s_dwMailManager.verboseflag )
    Com_Printf(25, "dwMail: dwMail_UserSignedOut( %d )\n", (unsigned int)controllerindex_in);
  if ( (unsigned int)v1 <= 7 )
    goto LABEL_7;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwmail.cpp", 2678, ASSERT_TYPE_ASSERT, "(( controllerindex_in >= 0 ) && ( controllerindex_in < 8 ))", (const char *)&queryFormat, "( controllerindex_in >= 0 ) && ( controllerindex_in < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( (unsigned int)v1 <= 7 )
  {
LABEL_7:
    v2 = &s_dwMailManager.user[v1];
    v2->signedin = 0;
    Sys_LockWrite(&s_dwMailManager.fastcriticalsection);
    v2->newmailcounter = 0;
    Sys_UnlockWrite(&s_dwMailManager.fastcriticalsection);
  }
}

