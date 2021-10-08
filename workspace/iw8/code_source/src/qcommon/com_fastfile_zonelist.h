/*
==============
ComFastFileZoneList::GetCount
==============
*/

unsigned int __fastcall ComFastFileZoneList::GetCount(ComFastFileZoneList *this)
{
  return ?GetCount@ComFastFileZoneList@@QEBAIXZ(this);
}

/*
==============
ComFastFileZoneList::GetDebugText
==============
*/

const char *__fastcall ComFastFileZoneList::GetDebugText(ComFastFileZoneList *this)
{
  return ?GetDebugText@ComFastFileZoneList@@QEBAPEBDXZ(this);
}

/*
==============
ComFastFileZoneList::Add
==============
*/

void __fastcall ComFastFileZoneList::Add(ComFastFileZoneList *this, const char *zoneName, const unsigned __int64 estimate)
{
  ?Add@ComFastFileZoneList@@QEAAXPEBD_K@Z(this, zoneName, estimate);
}

/*
==============
ComFastFileZoneList::Add
==============
*/
void ComFastFileZoneList::Add(ComFastFileZoneList *this, const char *zoneName, const unsigned __int64 estimate)
{
  unsigned int v6; 
  ComFastFileZoneList *v7; 
  ComFastFileZoneEntry *v8; 
  int v9; 
  int v10; 

  v6 = 0;
  v7 = this;
  while ( v7->m_zones[0].name[0] )
  {
    ++v6;
    v7 = (ComFastFileZoneList *)((char *)v7 + 72);
    if ( v6 >= 3 )
    {
      v6 = 3;
      v10 = 3;
      v9 = 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 152, ASSERT_TYPE_ASSERT, "(unsigned)( usedCount ) < (unsigned)( ( sizeof( *array_counter( m_zones ) ) + 0 ) )", "usedCount doesn't index ARRAY_COUNT( m_zones )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
      break;
    }
  }
  v8 = &this->m_zones[v6];
  Core_strcpy(v8->name, 0x40ui64, zoneName);
  v8->sizeEstimate = estimate;
}

/*
==============
ComFastFileZoneList::GetCount
==============
*/
__int64 ComFastFileZoneList::GetCount(ComFastFileZoneList *this)
{
  __int64 result; 

  result = 0i64;
  while ( this->m_zones[0].name[0] )
  {
    result = (unsigned int)(result + 1);
    this = (ComFastFileZoneList *)((char *)this + 72);
    if ( (unsigned int)result >= 3 )
      return 3i64;
  }
  return result;
}

/*
==============
ComFastFileZoneList::GetDebugText
==============
*/
ComFastFileZoneList *ComFastFileZoneList::GetDebugText(ComFastFileZoneList *this)
{
  unsigned int v1; 
  ComFastFileZoneList *v2; 
  unsigned int v3; 
  ComFastFileZoneEntry *v4; 

  v1 = 0;
  v2 = this;
  while ( v2->m_zones[0].name[0] )
  {
    ++v1;
    v2 = (ComFastFileZoneList *)((char *)v2 + 72);
    if ( v1 >= 3 )
    {
      v1 = 3;
      break;
    }
  }
  if ( !v1 )
    return (ComFastFileZoneList *)"<empty>";
  v3 = v1 - 1;
  if ( !v3 )
    return this;
  v4 = &this->m_zones[1];
  if ( v3 == 1 )
    return (ComFastFileZoneList *)j_va("%s,%s", (const char *)this, v4->name);
  else
    return (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)this, v4->name, this->m_zones[2].name);
}

