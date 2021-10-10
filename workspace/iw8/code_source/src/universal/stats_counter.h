/*
==============
StatsCounter<double>::GetAvg
==============
*/

long double __fastcall StatsCounter<double>::GetAvg(StatsCounter<double> *this)
{
  return ?GetAvg@?$StatsCounter@N@@QEBANXZ(this);
}

/*
==============
StatsCounter<double>::Track
==============
*/

void __fastcall StatsCounter<double>::Track(StatsCounter<double> *this, long double value)
{
  ?Track@?$StatsCounter@N@@QEAAXN@Z(this, value);
}

/*
==============
StatsCounter<double>::GetCount
==============
*/

unsigned int __fastcall StatsCounter<double>::GetCount(StatsCounter<double> *this)
{
  return ?GetCount@?$StatsCounter@N@@QEBAIXZ(this);
}

/*
==============
StatsCounter<double>::StatsCounter<double>
==============
*/

void __fastcall StatsCounter<double>::StatsCounter<double>(StatsCounter<double> *this)
{
  ??0?$StatsCounter@N@@QEAA@XZ(this);
}

/*
==============
StatsCounter<double>::GetString
==============
*/

int __fastcall StatsCounter<double>::GetString(StatsCounter<double> *this, const char *tableName, const char *rowTitle, bool titleLine, bool percentages, const char *unitFormat, int colHeaderWidth, int colWidth, char *buffer, int size)
{
  return ?GetString@?$StatsCounter@N@@QEBAHPEBD0_N10HHPEADH@Z(this, tableName, rowTitle, titleLine, percentages, unitFormat, colHeaderWidth, colWidth, buffer, size);
}

/*
==============
StatsCounter<double>::Clear
==============
*/

void __fastcall StatsCounter<double>::Clear(StatsCounter<double> *this)
{
  ?Clear@?$StatsCounter@N@@QEAAXXZ(this);
}

/*
==============
StatsCounter<double>::Clear
==============
*/
void StatsCounter<double>::Clear(StatsCounter<double> *this)
{
  this->m_min = 1.797693134862316e308;
  this->m_max = 2.225073858507201e-308;
  this->m_sum = 0.0;
  this->m_count = 0;
}

/*
==============
StatsCounter<double>::GetAvg
==============
*/
long double StatsCounter<double>::GetAvg(StatsCounter<double> *this)
{
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, rax }
  return this->m_sum / *(double *)&_XMM1;
}

/*
==============
StatsCounter<double>::GetCount
==============
*/
__int64 StatsCounter<double>::GetCount(StatsCounter<double> *this)
{
  return this->m_count;
}

/*
==============
StatsCounter<double>::GetString
==============
*/
__int64 StatsCounter<double>::GetString(StatsCounter<double> *this, const char *tableName, const char *rowTitle, bool titleLine, bool percentages, const char *unitFormat, int colHeaderWidth, int colWidth, char *buffer, int size)
{
  double *v11; 
  int v12; 
  unsigned int v13; 
  long double v17; 
  double v21; 
  char *fmt; 
  __int64 v24; 
  __int64 v25; 
  __int128 v29; 
  double v30; 
  __int64 v31; 
  char v32[64]; 
  char v33[65]; 
  char dest[65]; 
  char v35[65]; 
  char v36[65]; 
  char v37[77]; 

  if ( colWidth > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\stats_counter.h", 104, ASSERT_TYPE_ASSERT, "(colWidth <= MAX_COL_WIDTH)", "%s\n\tMax col width %u -- bump if necessary", "colWidth <= MAX_COL_WIDTH", 64) )
    __debugbreak();
  v11 = (double *)&v29;
  v12 = 0;
  v13 = 0;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  v17 = this->m_sum / *(double *)&_XMM0;
  _XMM2 = *(unsigned __int64 *)&v17;
  v29 = *(_OWORD *)&this->m_min;
  _XMM0 = percentages;
  __asm
  {
    vpcmpeqq xmm1, xmm0, xmm1
    vblendvpd xmm0, xmm2, xmm3, xmm1
  }
  v31 = *(__int64 *)&_XMM0;
  v30 = v17;
  do
  {
    v21 = *v11;
    if ( percentages )
      v21 = v21 * 100.0;
    Com_sprintf_truncate<65>((char (*)[65])&dest[65 * v13++], unitFormat, v21);
    ++v11;
  }
  while ( v13 < 4 );
  Com_sprintf<65>((char (*)[65])v33, "%u", this->m_count);
  LODWORD(v25) = colWidth;
  LODWORD(v24) = colWidth;
  LODWORD(fmt) = colWidth;
  Com_sprintf<64>((char (*)[64])v32, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", (unsigned int)colHeaderWidth, (unsigned int)colWidth, fmt, v24, v25, colWidth);
  if ( titleLine )
    v12 = Com_sprintf(buffer, size, v32, tableName, "min", "max", "avg", "total", "count");
  return (unsigned int)(v12 + Com_sprintf(&buffer[v12], size - v12, v32, rowTitle, dest, v35, v36, v37, v33));
}

/*
==============
StatsCounter<double>::Track
==============
*/

void __fastcall StatsCounter<double>::Track(StatsCounter<double> *this, double value)
{
  long double v2; 

  v2 = value + this->m_sum;
  ++this->m_count;
  this->m_sum = v2;
  _XMM0 = *(unsigned __int64 *)&this->m_min;
  __asm
  {
    vminsd  xmm2, xmm0, xmm1
    vmaxsd  xmm0, xmm1, qword ptr [rcx+10h]
  }
  this->m_max = *(double *)&_XMM0;
  this->m_min = *(double *)&_XMM2;
}

/*
==============
StatsCounter<double>::StatsCounter<double>
==============
*/
void StatsCounter<double>::StatsCounter<double>(StatsCounter<double> *this)
{
  this->m_min = 1.797693134862316e308;
  this->m_max = 2.225073858507201e-308;
  this->m_sum = 0.0;
  this->m_count = 0;
}

