/*
==============
Sys_GetCriticalSectionName
==============
*/

const char *__fastcall Sys_GetCriticalSectionName(CriticalSection critSect)
{
  return ?Sys_GetCriticalSectionName@@YAPEBDW4CriticalSection@@@Z(critSect);
}

/*
==============
ScopedCriticalSection::~ScopedCriticalSection
==============
*/

void __fastcall ScopedCriticalSection::~ScopedCriticalSection(ScopedCriticalSection *this)
{
  ??1ScopedCriticalSection@@QEAA@XZ(this);
}

/*
==============
ScopedCriticalSection::TryEnterCritSect
==============
*/

bool __fastcall ScopedCriticalSection::TryEnterCritSect(ScopedCriticalSection *this)
{
  return ?TryEnterCritSect@ScopedCriticalSection@@QEAA_NXZ(this);
}

/*
==============
ScopedCriticalSection::ScopedCriticalSection
==============
*/

void __fastcall ScopedCriticalSection::ScopedCriticalSection(ScopedCriticalSection *this, CriticalSection s, ScopedCriticalSectionType type)
{
  ??0ScopedCriticalSection@@QEAA@W4CriticalSection@@W4ScopedCriticalSectionType@@@Z(this, s, type);
}

/*
==============
ScopedCriticalSection::LeaveCritSect
==============
*/

void __fastcall ScopedCriticalSection::LeaveCritSect(ScopedCriticalSection *this)
{
  ?LeaveCritSect@ScopedCriticalSection@@QEAAXXZ(this);
}

/*
==============
ScopedCriticalSection::EnterCritSect
==============
*/

void __fastcall ScopedCriticalSection::EnterCritSect(ScopedCriticalSection *this)
{
  ?EnterCritSect@ScopedCriticalSection@@QEAAXXZ(this);
}

/*
==============
ScopedCriticalSection::LeaveAllScopedCriticalSections
==============
*/

void ScopedCriticalSection::LeaveAllScopedCriticalSections(void)
{
  ?LeaveAllScopedCriticalSections@ScopedCriticalSection@@SAXXZ();
}

/*
==============
ScopedCriticalSection::ScopedCriticalSection
==============
*/
void ScopedCriticalSection::ScopedCriticalSection(ScopedCriticalSection *this, CriticalSection s, ScopedCriticalSectionType type)
{
  bool v4; 
  __int64 v5; 

  this->_s = s;
  this->_isScopedRelease = 0;
  if ( type )
  {
    if ( type == SCOPED_CRITSECT_TRY )
    {
      v4 = Sys_TryEnterCriticalSection(s);
    }
    else
    {
      if ( type == SCOPED_CRITSECT_RELEASE )
      {
        Sys_LeaveCriticalSection(s);
        this->_isScopedRelease = 1;
      }
      v4 = 0;
    }
  }
  else
  {
    Sys_EnterCriticalSection(s);
    v4 = 1;
  }
  this->_hasOwnership = v4;
  v5 = 8i64 * tls_index;
  this->_next = *(ScopedCriticalSection **)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 680i64);
  *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v5) + 680i64) = this;
}

/*
==============
ScopedCriticalSection::~ScopedCriticalSection
==============
*/
void ScopedCriticalSection::~ScopedCriticalSection(ScopedCriticalSection *this)
{
  __int64 v2; 

  v2 = 8i64 * tls_index;
  if ( *(_QWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 680i64) )
  {
    if ( this->_hasOwnership )
    {
      if ( !this->_isScopedRelease )
        Sys_LeaveCriticalSection(this->_s);
    }
    else if ( this->_isScopedRelease )
    {
      Sys_EnterCriticalSection(this->_s);
    }
    if ( *(ScopedCriticalSection **)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 680i64) != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_scopedcriticalsection.cpp", 518, ASSERT_TYPE_ASSERT, "(s_topCritSect == this)", (const char *)&queryFormat, "s_topCritSect == this", -2i64) )
      __debugbreak();
    *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 680i64) = this->_next;
  }
}

/*
==============
ScopedCriticalSection::EnterCritSect
==============
*/
void ScopedCriticalSection::EnterCritSect(ScopedCriticalSection *this)
{
  CriticalSection s; 

  if ( this->_hasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_scopedcriticalsection.cpp", 532, ASSERT_TYPE_ASSERT, "(!_hasOwnership)", (const char *)&queryFormat, "!_hasOwnership") )
    __debugbreak();
  s = this->_s;
  this->_hasOwnership = 1;
  Sys_EnterCriticalSection(s);
}

/*
==============
ScopedCriticalSection::LeaveAllScopedCriticalSections
==============
*/
void ScopedCriticalSection::LeaveAllScopedCriticalSections(void)
{
  __int64 v0; 
  __int64 i; 
  CriticalSection v2; 
  CriticalSection v3; 
  __int64 v4; 

  v0 = tls_index;
  for ( i = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 680i64); i; *(_QWORD *)(v4 + 680) = i )
  {
    if ( *(_BYTE *)(i + 4) )
    {
      if ( !*(_BYTE *)(i + 5) )
      {
        v2 = *(_DWORD *)i;
        *(_BYTE *)(i + 4) = 0;
        Sys_LeaveCriticalSection(v2);
      }
    }
    else if ( *(_BYTE *)(i + 5) )
    {
      v3 = *(_DWORD *)i;
      *(_BYTE *)(i + 4) = 1;
      Sys_EnterCriticalSection(v3);
    }
    v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    i = *(_QWORD *)(*(_QWORD *)(v4 + 680) + 8i64);
  }
}

/*
==============
ScopedCriticalSection::LeaveCritSect
==============
*/
void ScopedCriticalSection::LeaveCritSect(ScopedCriticalSection *this)
{
  CriticalSection s; 

  if ( !this->_hasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_scopedcriticalsection.cpp", 525, ASSERT_TYPE_ASSERT, "(_hasOwnership)", (const char *)&queryFormat, "_hasOwnership") )
    __debugbreak();
  s = this->_s;
  this->_hasOwnership = 0;
  Sys_LeaveCriticalSection(s);
}

/*
==============
Sys_GetCriticalSectionName
==============
*/
const char *Sys_GetCriticalSectionName(CriticalSection critSect)
{
  __int64 v1; 
  int v4; 

  v1 = critSect;
  if ( (unsigned int)critSect >= CRITSECT_COUNT )
  {
    v4 = 116;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_scopedcriticalsection.cpp", 473, ASSERT_TYPE_ASSERT, "(unsigned)( critSect ) < (unsigned)( CRITSECT_COUNT )", "critSect doesn't index CRITSECT_COUNT\n\t%i not in [0, %i)", critSect, v4) )
      __debugbreak();
  }
  return s_criticalSectionNames[v1];
}

/*
==============
ScopedCriticalSection::TryEnterCritSect
==============
*/
bool ScopedCriticalSection::TryEnterCritSect(ScopedCriticalSection *this)
{
  bool result; 

  if ( this->_hasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_scopedcriticalsection.cpp", 539, ASSERT_TYPE_ASSERT, "(!_hasOwnership)", (const char *)&queryFormat, "!_hasOwnership") )
    __debugbreak();
  result = Sys_TryEnterCriticalSection(this->_s);
  this->_hasOwnership = result;
  return result;
}

