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

long double __fastcall StatsCounter<double>::GetAvg(StatsCounter<double> *this, double _XMM1_8)
{
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, rax
    vdivsd  xmm0, xmm0, xmm1
  }
  return *(double *)&_XMM0;
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
  unsigned int v18; 
  __int64 result; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  __int128 v37; 
  char v40[64]; 
  char v41[65]; 
  char dest[65]; 
  char v43[65]; 
  char v44[65]; 
  char v45[77]; 

  __asm { vmovaps [rsp+288h+var_48], xmm6 }
  _R13 = this;
  if ( colWidth > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\stats_counter.h", 104, ASSERT_TYPE_ASSERT, "(colWidth <= MAX_COL_WIDTH)", "%s\n\tMax col width %u -- bump if necessary", "colWidth <= MAX_COL_WIDTH", 64) )
    __debugbreak();
  __asm
  {
    vmovsd  xmm3, qword ptr [r13+0]
    vmovups xmm1, xmmword ptr [r13+8]
  }
  _RDI = &v37;
  _RBP = percentages;
  _R14 = 0i64;
  v18 = 0;
  __asm
  {
    vmovsd  xmm6, cs:__real@4059000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vdivsd  xmm2, xmm3, xmm0
    vmovups [rsp+288h+var_220], xmm1
    vmovq   xmm0, rbp
    vmovq   xmm1, r14
    vpcmpeqq xmm1, xmm0, xmm1
    vblendvpd xmm0, xmm2, xmm3, xmm1
    vmovsd  [rsp+288h+var_208], xmm0
    vmovsd  [rsp+288h+var_210], xmm2
  }
  do
  {
    __asm { vmovsd  xmm2, qword ptr [rdi] }
    if ( percentages )
      __asm { vmulsd  xmm2, xmm2, xmm6 }
    __asm { vmovq   r8, xmm2 }
    Com_sprintf_truncate<65>((char (*)[65])&dest[65 * v18++], unitFormat, _R8);
    _RDI = (__int128 *)((char *)_RDI + 8);
  }
  while ( v18 < 4 );
  Com_sprintf<65>((char (*)[65])v41, "%u", _R13->m_count);
  LODWORD(v33) = colWidth;
  LODWORD(v32) = colWidth;
  LODWORD(fmt) = colWidth;
  Com_sprintf<64>((char (*)[64])v40, "%%-%us%%-%us%%-%us%%-%us%%-%us%%-%us\n", (unsigned int)colHeaderWidth, (unsigned int)colWidth, fmt, v32, v33, colWidth);
  if ( titleLine )
    LODWORD(_R14) = Com_sprintf(buffer, size, v40, tableName, "min", "max", "avg", "total", "count");
  result = (unsigned int)(_R14 + Com_sprintf(&buffer[(int)_R14], size - (int)_R14, v40, rowTitle, dest, v43, v44, v45, v41));
  __asm { vmovaps xmm6, [rsp+288h+var_48] }
  return result;
}

/*
==============
StatsCounter<double>::Track
==============
*/

void __fastcall StatsCounter<double>::Track(StatsCounter<double> *this, double value)
{
  __asm { vaddsd  xmm0, xmm1, qword ptr [rcx] }
  ++this->m_count;
  __asm
  {
    vmovsd  qword ptr [rcx], xmm0
    vmovsd  xmm0, qword ptr [rcx+8]
    vminsd  xmm2, xmm0, xmm1
    vmaxsd  xmm0, xmm1, qword ptr [rcx+10h]
    vmovsd  qword ptr [rcx+10h], xmm0
    vmovsd  qword ptr [rcx+8], xmm2
  }
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

