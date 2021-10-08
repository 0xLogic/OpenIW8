/*
==============
bdRESTErrorMap::errorNameToCode
==============
*/

bool __fastcall bdRESTErrorMap::errorNameToCode(const bdRESTErrorMap *maps, unsigned int mapsCount, const char *errName, unsigned int *code)
{
  return ?errorNameToCode@bdRESTErrorMap@@SA_NPEBV1@IPEBDAEAI@Z(maps, mapsCount, errName, code);
}

/*
==============
bdRESTErrorMap::end
==============
*/

const bdRESTErrorMap::bdEntry *__fastcall bdRESTErrorMap::end(bdRESTErrorMap *this)
{
  return ?end@bdRESTErrorMap@@QEBAPEBUbdEntry@1@XZ(this);
}

/*
==============
bdRESTErrorMap::bdRESTErrorMap
==============
*/

void __fastcall bdRESTErrorMap::bdRESTErrorMap(bdRESTErrorMap *this, const bdRESTErrorMap::bdEntry *entries, unsigned int length)
{
  ??0bdRESTErrorMap@@QEAA@PEBUbdEntry@0@I@Z(this, entries, length);
}

/*
==============
bdRESTErrorMap::begin
==============
*/

const bdRESTErrorMap::bdEntry *__fastcall bdRESTErrorMap::begin(bdRESTErrorMap *this)
{
  return ?begin@bdRESTErrorMap@@QEBAPEBUbdEntry@1@XZ(this);
}

/*
==============
bdRESTErrorMap::bdRESTErrorMap
==============
*/
void bdRESTErrorMap::bdRESTErrorMap(bdRESTErrorMap *this, const bdRESTErrorMap::bdEntry *entries, unsigned int length)
{
  bool v3; 

  this->m_entries = entries;
  this->m_length = length;
  v3 = entries || !length;
  bdHandleAssert(v3, "BD_NULL != entries || length == 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdresterrormap.cpp", "bdRESTErrorMap::bdRESTErrorMap", 0x12u, "NULL entries must have a length of 0");
}

/*
==============
bdRESTErrorMap::begin
==============
*/
const bdRESTErrorMap::bdEntry *bdRESTErrorMap::begin(bdRESTErrorMap *this)
{
  return this->m_entries;
}

/*
==============
bdRESTErrorMap::end
==============
*/
const bdRESTErrorMap::bdEntry *bdRESTErrorMap::end(bdRESTErrorMap *this)
{
  return &this->m_entries[this->m_length];
}

/*
==============
bdRESTErrorMap::errorNameToCode
==============
*/
__int64 bdRESTErrorMap::errorNameToCode(const bdRESTErrorMap *maps, unsigned int mapsCount, const char *errName, unsigned int *code)
{
  unsigned __int8 v4; 
  unsigned __int64 v5; 
  const bdRESTErrorMap *v6; 
  unsigned int v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  const bdRESTErrorMap *v11; 
  const bdRESTErrorMap::bdEntry *m_entries; 
  const char *m_errName; 
  unsigned __int64 v14; 
  unsigned int v16; 
  char v19; 

  v4 = 0;
  v5 = 0i64;
  v19 = 0;
  v6 = maps;
  v8 = mapsCount;
  if ( errName )
  {
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v9 = -1i64;
    do
      ++v9;
    while ( errName[v9] );
    v8 = mapsCount;
  }
  else
  {
    v9 = 0i64;
  }
  v16 = 0;
  v10 = 0;
  if ( v6 )
  {
    while ( v10 < v8 )
    {
      v11 = &v6[v10];
      m_entries = v11->m_entries;
      if ( v11->m_entries != &v11->m_entries[v11->m_length] )
      {
        do
        {
          m_errName = m_entries->m_errName;
          bdHandleAssert(m_entries->m_errName != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
          v14 = -1i64;
          do
            ++v14;
          while ( m_errName[v14] );
          if ( v14 <= v9 && v14 > v5 && !strncmp(m_errName, errName, (int)v14) && (v14 >= v9 || errName[v14] == 58) )
          {
            v5 = v14;
            v4 = 1;
            *code = m_entries->m_errCode;
            v19 = 1;
          }
          else
          {
            v4 = v19;
          }
          ++m_entries;
        }
        while ( m_entries != &v11->m_entries[v11->m_length] );
        v10 = v16;
        v6 = maps;
      }
      v8 = mapsCount;
      v16 = ++v10;
    }
  }
  return v4;
}

