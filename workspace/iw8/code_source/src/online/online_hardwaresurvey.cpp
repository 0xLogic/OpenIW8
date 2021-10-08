/*
==============
Online_HardwareSurvey::ControllerFrame
==============
*/

void __fastcall Online_HardwareSurvey::ControllerFrame(Online_HardwareSurvey *this, const int controllerIndex)
{
  ?ControllerFrame@Online_HardwareSurvey@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_HardwareSurvey::Uninit
==============
*/

void __fastcall Online_HardwareSurvey::Uninit(Online_HardwareSurvey *this)
{
  ?Uninit@Online_HardwareSurvey@@UEAAXXZ(this);
}

/*
==============
Online_HardwareSurvey::RegisterLuaFunctions
==============
*/

void __fastcall Online_HardwareSurvey::RegisterLuaFunctions(Online_HardwareSurvey *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_HardwareSurvey@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_HardwareSurvey::IsReportGenerated
==============
*/

bool __fastcall Online_HardwareSurvey::IsReportGenerated(Online_HardwareSurvey *this)
{
  return ?IsReportGenerated@Online_HardwareSurvey@@QEAA_NXZ(this);
}

/*
==============
Online_HardwareSurvey::Capture
==============
*/

bool __fastcall Online_HardwareSurvey::Capture(Online_HardwareSurvey *this)
{
  return ?Capture@Online_HardwareSurvey@@QEAA_NXZ(this);
}

/*
==============
Online_HardwareSurvey::GetInstancePtr
==============
*/

Online_HardwareSurvey *__fastcall Online_HardwareSurvey::GetInstancePtr()
{
  return ?GetInstancePtr@Online_HardwareSurvey@@SAPEAV1@XZ();
}

/*
==============
Online_HardwareSurvey::Init
==============
*/

bool __fastcall Online_HardwareSurvey::Init(Online_HardwareSurvey *this)
{
  return ?Init@Online_HardwareSurvey@@UEAA_NXZ(this);
}

/*
==============
Online_HardwareSurvey::OnUnregistered
==============
*/

void __fastcall Online_HardwareSurvey::OnUnregistered(Online_HardwareSurvey *this)
{
  ?OnUnregistered@Online_HardwareSurvey@@UEAAXXZ(this);
}

/*
==============
Online_HardwareSurvey::Frame
==============
*/

void __fastcall Online_HardwareSurvey::Frame(Online_HardwareSurvey *this)
{
  ?Frame@Online_HardwareSurvey@@UEAAXXZ(this);
}

/*
==============
Online_HardwareSurvey::GenerateReport
==============
*/

void __fastcall Online_HardwareSurvey::GenerateReport(Online_HardwareSurvey *this, bool isFromFirstBoot)
{
  ?GenerateReport@Online_HardwareSurvey@@QEAAX_N@Z(this, isFromFirstBoot);
}

/*
==============
Online_HardwareSurvey::OnSignedOut
==============
*/

void __fastcall Online_HardwareSurvey::OnSignedOut(Online_HardwareSurvey *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_HardwareSurvey@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_HardwareSurvey::OnSignedIn
==============
*/

void __fastcall Online_HardwareSurvey::OnSignedIn(Online_HardwareSurvey *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_HardwareSurvey@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_HardwareSurvey::OutputCurrentState
==============
*/

void __fastcall Online_HardwareSurvey::OutputCurrentState(Online_HardwareSurvey *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_HardwareSurvey@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_HardwareSurvey::CompressReport
==============
*/

void __fastcall Online_HardwareSurvey::CompressReport(Online_HardwareSurvey *this)
{
  ?CompressReport@Online_HardwareSurvey@@AEAAXXZ(this);
}

/*
==============
Online_HardwareSurvey::GenerateReportInternal
==============
*/

void __fastcall Online_HardwareSurvey::GenerateReportInternal(Online_HardwareSurvey *this)
{
  ?GenerateReportInternal@Online_HardwareSurvey@@AEAAXXZ(this);
}

/*
==============
Online_HardwareSurvey::OnDisconnect
==============
*/

void __fastcall Online_HardwareSurvey::OnDisconnect(Online_HardwareSurvey *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_HardwareSurvey@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_HardwareSurvey::GetInstance
==============
*/

Online_HardwareSurvey *__fastcall Online_HardwareSurvey::GetInstance()
{
  return ?GetInstance@Online_HardwareSurvey@@SAAEAV1@XZ();
}

/*
==============
Online_HardwareSurvey::OnRegistered
==============
*/

void __fastcall Online_HardwareSurvey::OnRegistered(Online_HardwareSurvey *this)
{
  ?OnRegistered@Online_HardwareSurvey@@UEAAXXZ(this);
}

/*
==============
Online_HardwareSurvey::OnRegistered
==============
*/
void Online_HardwareSurvey::OnRegistered(Online_HardwareSurvey *this)
{
  ;
}

/*
==============
Online_HardwareSurvey::OnUnregistered
==============
*/
void Online_HardwareSurvey::OnUnregistered(Online_HardwareSurvey *this)
{
  ;
}

/*
==============
Online_HardwareSurvey::Init
==============
*/
char Online_HardwareSurvey::Init(Online_HardwareSurvey *this)
{
  this->m_initialized = 1;
  return 1;
}

/*
==============
Online_HardwareSurvey::Uninit
==============
*/
void Online_HardwareSurvey::Uninit(Online_HardwareSurvey *this)
{
  ;
}

/*
==============
Online_HardwareSurvey::Frame
==============
*/
void Online_HardwareSurvey::Frame(Online_HardwareSurvey *this)
{
  ;
}

/*
==============
Online_HardwareSurvey::ControllerFrame
==============
*/
void Online_HardwareSurvey::ControllerFrame(Online_HardwareSurvey *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_HardwareSurvey::OnSignedIn
==============
*/
void Online_HardwareSurvey::OnSignedIn(Online_HardwareSurvey *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_HardwareSurvey::OnSignedOut
==============
*/
void Online_HardwareSurvey::OnSignedOut(Online_HardwareSurvey *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_HardwareSurvey::OnDisconnect
==============
*/
void Online_HardwareSurvey::OnDisconnect(Online_HardwareSurvey *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_HardwareSurvey::RegisterLuaFunctions
==============
*/
void Online_HardwareSurvey::RegisterLuaFunctions(Online_HardwareSurvey *this, lua_State *luaVM)
{
  ;
}

/*
==============
Online_HardwareSurvey::OutputCurrentState
==============
*/
void Online_HardwareSurvey::OutputCurrentState(Online_HardwareSurvey *this, const int controllerIndex)
{
  ;
}

/*
==============
Online_HardwareSurvey::Capture
==============
*/
bool Online_HardwareSurvey::Capture(Online_HardwareSurvey *this)
{
  bool result; 
  bool m_isCaptureFromFirstBoot; 
  bool v4; 
  DLogContext context; 
  char buffer[4096]; 

  result = 0;
  if ( this->m_generatedReport )
  {
    if ( this->m_bHasCaptureAvailable )
    {
      m_isCaptureFromFirstBoot = this->m_isCaptureFromFirstBoot;
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v4 = DLog_BeginEvent(&context, "online_hardware_survey");
        context.autoEndEvent = 1;
        if ( v4 && DLog_String(&context, "report", this->m_report, 0) && DLog_Bool(&context, "isfromfirstboot", m_isCaptureFromFirstBoot) )
          DLog_RecordContext(&context);
      }
      Online_HardwareSurvey::CompressReport(this);
      result = 1;
    }
    this->m_generatedReport = 0;
  }
  return result;
}

/*
==============
Online_HardwareSurvey::CompressReport
==============
*/
void Online_HardwareSurvey::CompressReport(Online_HardwareSurvey *this)
{
  void *v2; 
  unsigned __int8 *m_report; 
  unsigned __int64 v4; 
  z_stream_s stream; 
  StreamerMemLoan result; 
  unsigned __int8 src[16384]; 

  memset_0(&stream, 0, sizeof(stream));
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey.cpp", 220, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  PMem_BeginAlloc("online_hardware_survey", PMEM_STACK_GAME);
  v2 = PMem_Alloc(0x60000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "online_hw_survey_zip_buffer");
  PMem_EndAlloc("online_hardware_survey", PMEM_STACK_GAME);
  j_Zip_InitThreadMemory(&stream, v2, 393216);
  if ( !j_deflateInit_(&stream, 9, "1.2.8", 88) )
  {
    m_report = (unsigned __int8 *)this->m_report;
    stream.data_type = 1;
    stream.next_in = m_report;
    v4 = -1i64;
    do
      ++v4;
    while ( m_report[v4] );
    if ( v4 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v4, "unsigned", v4) )
      __debugbreak();
    stream.avail_in = v4;
    stream.next_out = src;
    stream.avail_out = 0x3FFF;
    if ( j_deflate(&stream, 4) == 1 )
    {
      memset_0(m_report, 0, 0xFFFFui64);
      bdBase64::encode(src, stream.total_out, (char *)m_report, 0xFFFFu);
    }
  }
  PMem_Free(&result, "online_hardware_survey", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
Online_HardwareSurvey::GenerateReport
==============
*/
void Online_HardwareSurvey::GenerateReport(Online_HardwareSurvey *this, bool isFromFirstBoot)
{
  bdJSONValue *v2; 
  bdJSONValue *v3; 
  bdJSONValue *v4; 
  const char *Buffer; 
  unsigned __int64 Length; 
  bdString result; 
  bdJSONValue *v8; 

  this->m_isCaptureFromFirstBoot = isFromFirstBoot;
  if ( !Online_HardwareSurvey::s_instance.m_generatedReport )
  {
    v2 = (bdJSONValue *)bdMemory::allocate(0x10ui64);
    v8 = v2;
    if ( v2 )
    {
      bdJSONValue::bdJSONValue(v2, BD_JSON_OBJECT);
      v4 = v3;
    }
    else
    {
      v4 = NULL;
    }
    Com_PrintWarning(16, "Hardware Survey: generating report...\n");
    Online_HardwareSurvey::Plat_GenerateReport(&Online_HardwareSurvey::s_instance, v4);
    bdJSONValue::serialize(v4, &result);
    if ( bdString::getLength(&result) >= 0xFFFF )
    {
      Length = bdString::getLength(&result);
      Com_PrintError(16, "Hardware Survey size %zu too large for buffer %d\n", Length, 0xFFFFi64);
    }
    else
    {
      Buffer = bdString::getBuffer(&result);
      Core_strcpy(Online_HardwareSurvey::s_instance.m_report, 0xFFFFui64, Buffer);
      Com_PrintWarning(16, "Hardware Survey:\n %s\n", Online_HardwareSurvey::s_instance.m_report);
      Online_HardwareSurvey::s_instance.m_bHasCaptureAvailable = 1;
    }
    if ( v4 )
    {
      bdJSONValue::~bdJSONValue(v4);
      bdMemory::deallocate(v4);
    }
    Online_HardwareSurvey::s_instance.m_generatedReport = 1;
    bdString::~bdString(&result);
  }
}

/*
==============
Online_HardwareSurvey::GenerateReportInternal
==============
*/
void Online_HardwareSurvey::GenerateReportInternal(Online_HardwareSurvey *this)
{
  bdJSONValue *v2; 
  bdJSONValue *v3; 
  bdJSONValue *v4; 
  const char *Buffer; 
  unsigned __int64 Length; 
  bdString result; 
  bdJSONValue *v8; 

  if ( !this->m_generatedReport )
  {
    v2 = (bdJSONValue *)bdMemory::allocate(0x10ui64);
    v8 = v2;
    if ( v2 )
    {
      bdJSONValue::bdJSONValue(v2, BD_JSON_OBJECT);
      v4 = v3;
    }
    else
    {
      v4 = NULL;
    }
    Com_PrintWarning(16, "Hardware Survey: generating report...\n");
    Online_HardwareSurvey::Plat_GenerateReport(this, v4);
    bdJSONValue::serialize(v4, &result);
    if ( bdString::getLength(&result) >= 0xFFFF )
    {
      Length = bdString::getLength(&result);
      Com_PrintError(16, "Hardware Survey size %zu too large for buffer %d\n", Length, 0xFFFFi64);
    }
    else
    {
      Buffer = bdString::getBuffer(&result);
      Core_strcpy(this->m_report, 0xFFFFui64, Buffer);
      Com_PrintWarning(16, "Hardware Survey:\n %s\n", this->m_report);
      this->m_bHasCaptureAvailable = 1;
    }
    if ( v4 )
    {
      bdJSONValue::~bdJSONValue(v4);
      bdMemory::deallocate(v4);
    }
    this->m_generatedReport = 1;
    bdString::~bdString(&result);
  }
}

/*
==============
Online_HardwareSurvey::GetInstance
==============
*/
Online_HardwareSurvey *Online_HardwareSurvey::GetInstance()
{
  return &Online_HardwareSurvey::s_instance;
}

/*
==============
Online_HardwareSurvey::GetInstancePtr
==============
*/
Online_HardwareSurvey *Online_HardwareSurvey::GetInstancePtr()
{
  return &Online_HardwareSurvey::s_instance;
}

/*
==============
Online_HardwareSurvey::IsReportGenerated
==============
*/
_BOOL8 Online_HardwareSurvey::IsReportGenerated(Online_HardwareSurvey *this)
{
  return this->m_generatedReport;
}

