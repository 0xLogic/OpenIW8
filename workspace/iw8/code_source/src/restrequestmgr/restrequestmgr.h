/*
==============
RESTTask::RESTTask
==============
*/

void __fastcall RESTTask::RESTTask(RESTTask *this)
{
  ??0RESTTask@@QEAA@XZ(this);
}

/*
==============
RESTTask::Reset
==============
*/

void __fastcall RESTTask::Reset(RESTTask *this)
{
  ?Reset@RESTTask@@QEAAXXZ(this);
}

/*
==============
RESTTask::RESTTask
==============
*/
void RESTTask::RESTTask(RESTTask *this)
{
  memset_0(this, 0, sizeof(RESTTask));
}

/*
==============
RESTTask::Reset
==============
*/
void RESTTask::Reset(RESTTask *this)
{
  if ( this->pPlatformTransaction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.h", 85, ASSERT_TYPE_ASSERT, "(pPlatformTransaction == 0)", (const char *)&queryFormat, "pPlatformTransaction == NULL") )
    __debugbreak();
  if ( this->pRequestBodyData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\restrequestmgr\\restrequestmgr.h", 86, ASSERT_TYPE_ASSERT, "(pRequestBodyData == 0)", (const char *)&queryFormat, "pRequestBodyData == NULL") )
    __debugbreak();
  memset_0(this, 0, sizeof(RESTTask));
}

