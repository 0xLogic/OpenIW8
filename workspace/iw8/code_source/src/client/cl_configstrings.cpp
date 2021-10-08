/*
==============
ClConfigStrings::~ClConfigStrings
==============
*/

void __fastcall ClConfigStrings::~ClConfigStrings(ClConfigStrings *this)
{
  ??1ClConfigStrings@@MEAA@XZ(this);
}

/*
==============
ClConfigStrings::AllocateMemory<ClConfigStringsSP>
==============
*/

void __fastcall ClConfigStrings::AllocateMemory<ClConfigStringsSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VClConfigStringsSP@@@ClConfigStrings@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
ClConfigStrings::ClConfigStrings
==============
*/

void __fastcall ClConfigStrings::ClConfigStrings(ClConfigStrings *this)
{
  ??0ClConfigStrings@@IEAA@XZ(this);
}

/*
==============
ClConfigStrings::FreeMemory<ClConfigStringsSP>
==============
*/

__int64 ClConfigStrings::FreeMemory<ClConfigStringsSP>()
{
  return ??$FreeMemory@VClConfigStringsSP@@@ClConfigStrings@@SAXXZ();
}

/*
==============
CL_GetConfigString
==============
*/

const char *__fastcall CL_GetConfigString(int configStringIndex)
{
  return ?CL_GetConfigString@@YAPEBDH@Z(configStringIndex);
}

/*
==============
ClConfigStrings::FreeMemory<ClConfigStringsMP>
==============
*/

__int64 ClConfigStrings::FreeMemory<ClConfigStringsMP>()
{
  return ??$FreeMemory@VClConfigStringsMP@@@ClConfigStrings@@SAXXZ();
}

/*
==============
ClConfigStrings::AllocateMemory<ClConfigStringsMP>
==============
*/

void __fastcall ClConfigStrings::AllocateMemory<ClConfigStringsMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VClConfigStringsMP@@@ClConfigStrings@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
ClConfigStrings::GetClConfigStrings
==============
*/

ClConfigStrings *__fastcall ClConfigStrings::GetClConfigStrings()
{
  return ?GetClConfigStrings@ClConfigStrings@@SAPEAV1@XZ();
}

/*
==============
ClConfigStrings::GetConfigString
==============
*/

const char *__fastcall ClConfigStrings::GetConfigString(ClConfigStrings *this, int configStringIndex)
{
  return ?GetConfigString@ClConfigStrings@@QEBAPEBDH@Z(this, configStringIndex);
}

/*
==============
ClConfigStrings::AllocateMemory<ClConfigStringsMP>
==============
*/
void ClConfigStrings::AllocateMemory<ClConfigStringsMP>(HunkUser *hunkUser)
{
  ClConfigStringsMP *v2; 
  ClConfigStrings *v3; 

  if ( ClConfigStrings::ms_clConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 26, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings == nullptr)", "%s\n\tCreating ClConfigStrings when not null", "ms_clConfigStrings == nullptr") )
    __debugbreak();
  if ( (_BYTE)ClConfigStrings::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 27, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating ClConfigStrings when still marked as allocated", "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v2 = (ClConfigStringsMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x24FE0ui64, 8ui64, "ClConfigStrings::AllocateMemory");
  ClConfigStringsMP::ClConfigStringsMP(v2);
  ClConfigStrings::ms_clConfigStrings = v3;
  LOBYTE(ClConfigStrings::ms_allocatedType) = 2;
}

/*
==============
ClConfigStrings::AllocateMemory<ClConfigStringsSP>
==============
*/
void ClConfigStrings::AllocateMemory<ClConfigStringsSP>(HunkUser *hunkUser)
{
  ClConfigStringsSP *v2; 
  ClConfigStrings *v3; 

  if ( ClConfigStrings::ms_clConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 26, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings == nullptr)", "%s\n\tCreating ClConfigStrings when not null", "ms_clConfigStrings == nullptr") )
    __debugbreak();
  if ( (_BYTE)ClConfigStrings::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 27, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating ClConfigStrings when still marked as allocated", "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v2 = (ClConfigStringsSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x6068ui64, 8ui64, "ClConfigStrings::AllocateMemory");
  ClConfigStringsSP::ClConfigStringsSP(v2);
  ClConfigStrings::ms_clConfigStrings = v3;
  LOBYTE(ClConfigStrings::ms_allocatedType) = 1;
}

/*
==============
ClConfigStrings::FreeMemory<ClConfigStringsMP>
==============
*/
void ClConfigStrings::FreeMemory<ClConfigStringsMP>()
{
  unsigned __int8 v0; 
  ClConfigStrings *v1; 
  __int64 v2; 
  int v3; 
  int v4; 

  v0 = ClConfigStrings::ms_allocatedType;
  if ( (_BYTE)ClConfigStrings::ms_allocatedType )
  {
    if ( (_BYTE)ClConfigStrings::ms_allocatedType == HALF_HALF )
    {
LABEL_7:
      v1 = ClConfigStrings::ms_clConfigStrings;
      if ( !ClConfigStrings::ms_clConfigStrings )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", (_DWORD)ClConfigStrings::ms_clConfigStrings + 53, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings != nullptr)", "%s\n\tAttempting to destroy ClConfigStrings when object is null", "ms_clConfigStrings != nullptr") )
          __debugbreak();
        v1 = ClConfigStrings::ms_clConfigStrings;
      }
      ((void (__fastcall *)(ClConfigStrings *, _QWORD))v1->~ClConfigStrings)(v1, 0i64);
      DebugWipe(ClConfigStrings::ms_clConfigStrings, 0x24FE0ui64);
      LOBYTE(ClConfigStrings::ms_allocatedType) = 0;
      ClConfigStrings::ms_clConfigStrings = NULL;
      return;
    }
    v4 = 2;
    v3 = (unsigned __int8)ClConfigStrings::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 49, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE)", "%s\n\tAttempting to destroy ClConfigStrings with mismatching mode %d != %d", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE", v3, v4) )
      __debugbreak();
    v0 = ClConfigStrings::ms_allocatedType;
  }
  if ( v0 == 2 )
    goto LABEL_7;
  if ( v0 )
  {
    LODWORD(v2) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 63, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tFailed to properly destroy ClConfigStrings : mode remains %d", "ms_allocatedType == GameModeType::NONE", v2) )
      __debugbreak();
  }
  if ( ClConfigStrings::ms_clConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 64, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings == nullptr)", "%s\n\tFailed to properly destroy ClConfigStrings : pointer remains %p", "ms_clConfigStrings == nullptr", ClConfigStrings::ms_clConfigStrings) )
    __debugbreak();
}

/*
==============
ClConfigStrings::FreeMemory<ClConfigStringsSP>
==============
*/
void ClConfigStrings::FreeMemory<ClConfigStringsSP>()
{
  unsigned __int8 v0; 
  ClConfigStrings *v1; 
  __int64 v2; 
  int v3; 
  int v4; 

  v0 = ClConfigStrings::ms_allocatedType;
  if ( (_BYTE)ClConfigStrings::ms_allocatedType )
  {
    if ( (_BYTE)ClConfigStrings::ms_allocatedType == HALF )
    {
LABEL_7:
      v1 = ClConfigStrings::ms_clConfigStrings;
      if ( !ClConfigStrings::ms_clConfigStrings )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", (_DWORD)ClConfigStrings::ms_clConfigStrings + 53, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings != nullptr)", "%s\n\tAttempting to destroy ClConfigStrings when object is null", "ms_clConfigStrings != nullptr") )
          __debugbreak();
        v1 = ClConfigStrings::ms_clConfigStrings;
      }
      ((void (__fastcall *)(ClConfigStrings *, _QWORD))v1->~ClConfigStrings)(v1, 0i64);
      DebugWipe(ClConfigStrings::ms_clConfigStrings, 0x6068ui64);
      LOBYTE(ClConfigStrings::ms_allocatedType) = 0;
      ClConfigStrings::ms_clConfigStrings = NULL;
      return;
    }
    v4 = 1;
    v3 = (unsigned __int8)ClConfigStrings::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 49, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE)", "%s\n\tAttempting to destroy ClConfigStrings with mismatching mode %d != %d", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE", v3, v4) )
      __debugbreak();
    v0 = ClConfigStrings::ms_allocatedType;
  }
  if ( v0 == 1 )
    goto LABEL_7;
  if ( v0 )
  {
    LODWORD(v2) = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 63, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tFailed to properly destroy ClConfigStrings : mode remains %d", "ms_allocatedType == GameModeType::NONE", v2) )
      __debugbreak();
  }
  if ( ClConfigStrings::ms_clConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 64, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings == nullptr)", "%s\n\tFailed to properly destroy ClConfigStrings : pointer remains %p", "ms_clConfigStrings == nullptr", ClConfigStrings::ms_clConfigStrings) )
    __debugbreak();
}

/*
==============
ClConfigStrings::ClConfigStrings
==============
*/
void ClConfigStrings::ClConfigStrings(ClConfigStrings *this)
{
  int v1; 

  this->__vftable = (ClConfigStrings_vtbl *)&ClConfigStrings::`vftable';
  if ( (_BYTE)ClConfigStrings::ms_allocatedType )
  {
    v1 = (unsigned __int8)ClConfigStrings::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 77, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating ClStrings when still marked as allocated by %d", "ms_allocatedType == GameModeType::NONE", v1) )
      __debugbreak();
  }
  if ( ClConfigStrings::ms_clConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 78, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings == nullptr)", "%s\n\tCreating ClStrings when singleton already exists", "ms_clConfigStrings == nullptr") )
      __debugbreak();
  }
}

/*
==============
ClConfigStrings::~ClConfigStrings
==============
*/
void ClConfigStrings::~ClConfigStrings(ClConfigStrings *this)
{
  this->__vftable = (ClConfigStrings_vtbl *)&ClConfigStrings::`vftable';
  if ( ClConfigStrings::ms_clConfigStrings != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 84, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings == this)", "%s\n\tDeleting ClStrings that is not the singleton", "ms_clConfigStrings == this") )
    __debugbreak();
}

/*
==============
CL_GetConfigString
==============
*/
const char *CL_GetConfigString(int configStringIndex)
{
  if ( !ClConfigStrings::ms_clConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 18, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings)", "%s\n\tClConfigStrings accessed when not allocated", "ms_clConfigStrings") )
    __debugbreak();
  return ClConfigStrings::ms_clConfigStrings->GetConfigStringImpl(ClConfigStrings::ms_clConfigStrings, (unsigned int)configStringIndex);
}

/*
==============
ClConfigStrings::GetClConfigStrings
==============
*/
ClConfigStrings *ClConfigStrings::GetClConfigStrings()
{
  ClConfigStrings *result; 

  result = ClConfigStrings::ms_clConfigStrings;
  if ( !ClConfigStrings::ms_clConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_configstrings.cpp", 18, ASSERT_TYPE_ASSERT, "(ms_clConfigStrings)", "%s\n\tClConfigStrings accessed when not allocated", "ms_clConfigStrings") )
      __debugbreak();
    return ClConfigStrings::ms_clConfigStrings;
  }
  return result;
}

/*
==============
ClConfigStrings::GetConfigString
==============
*/
const char *ClConfigStrings::GetConfigString(ClConfigStrings *this, __int64 configStringIndex)
{
  return this->GetConfigStringImpl(this, configStringIndex);
}

