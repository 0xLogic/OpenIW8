/*
==============
bdCommonAddrInfo::getInfo
==============
*/

unsigned int __fastcall bdCommonAddrInfo::getInfo(const bdReference<bdCommonAddr> addr, char *buf, const unsigned int length)
{
  return ?getInfo@bdCommonAddrInfo@@SAIV?$bdReference@VbdCommonAddr@@@@PEADI@Z(addr, buf, length);
}

/*
==============
bdCommonAddrInfo::bdCommonAddrInfo
==============
*/

void __fastcall bdCommonAddrInfo::bdCommonAddrInfo(bdCommonAddrInfo *this)
{
  ??0bdCommonAddrInfo@@IEAA@XZ(this);
}

/*
==============
bdCommonAddrInfo::getInfo
==============
*/

unsigned int __fastcall bdCommonAddrInfo::getInfo(const bdCommonAddr *addr, char *buf, const unsigned int length)
{
  return ?getInfo@bdCommonAddrInfo@@SAIAEBVbdCommonAddr@@PEADI@Z(addr, buf, length);
}

/*
==============
bdCommonAddrInfo::getBriefInfo
==============
*/

unsigned int __fastcall bdCommonAddrInfo::getBriefInfo(const bdCommonAddr *addr, char *buf, const unsigned int length)
{
  return ?getBriefInfo@bdCommonAddrInfo@@SAIAEBVbdCommonAddr@@PEADI@Z(addr, buf, length);
}

/*
==============
bdCommonAddrInfo::getBriefInfo
==============
*/

unsigned int __fastcall bdCommonAddrInfo::getBriefInfo(const bdReference<bdCommonAddr> addr, char *buf, const unsigned int length)
{
  return ?getBriefInfo@bdCommonAddrInfo@@SAIV?$bdReference@VbdCommonAddr@@@@PEADI@Z(addr, buf, length);
}

/*
==============
bdCommonAddrInfo::bdCommonAddrInfo
==============
*/
void bdCommonAddrInfo::bdCommonAddrInfo(bdCommonAddrInfo *this)
{
  ;
}

/*
==============
bdCommonAddrInfo::getBriefInfo
==============
*/
__int64 bdCommonAddrInfo::getBriefInfo(const bdCommonAddr *addr, char *buf, const unsigned int length)
{
  char *v3; 
  unsigned __int64 v4; 
  char *v6; 
  bdAddr *PublicAddr; 
  bdAddr *v8; 
  int v9; 
  char *v10; 
  const bdFixedArray<bdAddr,5> *LocalAddrs; 
  unsigned int i; 
  bdAddr *LocalAddrByIndex; 
  char *v14; 
  char str[32]; 
  char v17[120]; 
  char v18[8]; 

  v3 = buf;
  v4 = length;
  v6 = &buf[length];
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)addr);
  if ( bdSockAddr::isValid(&PublicAddr->m_address) )
  {
    v8 = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)addr);
    bdAddr::toString(v8, str, 0x16ui64);
    v9 = bdSnprintf(v3, (unsigned int)v4, "Public Addr: %s\n", str);
  }
  else if ( bdCommonAddr::getLocalAddrs((bdCommonAddr *)addr)->m_size )
  {
    v10 = v17;
    LocalAddrs = bdCommonAddr::getLocalAddrs((bdCommonAddr *)addr);
    bdHandleAssert(LocalAddrs->m_size <= 5, "(addr.getLocalAddrs().getSize() <= BD_MAX_LOCAL_ADDRS)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdcommonaddrinfo.cpp", "bdCommonAddrInfo::getBriefInfo", 0xCCu, "bdCommonAddr invalid.");
    for ( i = 0; i < bdCommonAddr::getLocalAddrs((bdCommonAddr *)addr)->m_size; v10 = &v14[bdSnprintf(v14, v18 - v14, ", ")] )
    {
      LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex((bdCommonAddr *)addr, i);
      v14 = &v10[bdAddr::toString(LocalAddrByIndex, v10, v18 - v10)];
      ++i;
    }
    *(v10 - 2) = 0;
    v9 = bdSnprintf(v3, v4, "Local Addr: %s\n", v17);
  }
  else
  {
    v9 = bdSnprintf(v3, v4, "Empty Common Addr\n");
  }
  if ( v9 <= 0 || v9 > (int)v6 - (int)v3 )
  {
    v3 = v6 - 1;
    if ( (_DWORD)v4 )
      *v3 = 0;
  }
  else
  {
    LODWORD(v3) = v9 + (_DWORD)v3;
  }
  return (unsigned int)(v4 + (_DWORD)v3 - (_DWORD)v6);
}

/*
==============
bdCommonAddrInfo::getBriefInfo
==============
*/
__int64 bdCommonAddrInfo::getBriefInfo(const bdReference<bdCommonAddr> addr, char *buf, __int64 length)
{
  unsigned int BriefInfo; 
  bdCommonAddr_vtbl *v5; 

  BriefInfo = 0;
  v5 = addr.m_ptr->__vftable;
  if ( v5 )
    BriefInfo = bdCommonAddrInfo::getBriefInfo((const bdCommonAddr *)v5, buf, length);
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64, length);
    addr.m_ptr->__vftable = NULL;
  }
  return BriefInfo;
}

/*
==============
bdCommonAddrInfo::getInfo
==============
*/
__int64 bdCommonAddrInfo::getInfo(const bdCommonAddr *addr, char *buf, const unsigned int length)
{
  char *v6; 
  __int32 v7; 
  __int32 v8; 
  const char *v9; 
  int v10; 
  int v11; 
  char *v12; 
  int v13; 
  unsigned int v14; 
  bdAddr *LocalAddrByIndex; 
  int v16; 
  int v17; 
  bdAddr *PublicAddr; 
  int v19; 
  char *v20; 
  int v21; 
  const char *v22; 
  int v23; 
  char *v24; 
  __int64 v26; 
  char str[24]; 
  char v28[24]; 

  v6 = &buf[length];
  v7 = bdCommonAddr::getNATType((bdCommonAddr *)addr) - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        v9 = "BD_NAT_STRICT";
      else
        v9 = "**UNKNOWN**";
    }
    else
    {
      v9 = "BD_NAT_MODERATE";
    }
  }
  else
  {
    v9 = "BD_NAT_OPEN";
  }
  v10 = bdSnprintf(buf, (unsigned int)((_DWORD)v6 - (_DWORD)buf), "NAT Type: %s\n", v9);
  if ( v10 <= 0 || v10 > (int)v6 - (int)buf )
  {
    v12 = v6 - 1;
    v11 = (int)v6;
    v13 = (_DWORD)v6 - 1;
    if ( length )
    {
      *v12 = 0;
      v13 = (_DWORD)v6 - 1;
    }
  }
  else
  {
    v11 = (int)v6;
    v12 = &buf[v10];
    v13 = (int)v12;
  }
  v14 = 0;
  if ( bdCommonAddr::getLocalAddrs((bdCommonAddr *)addr)->m_size )
  {
    do
    {
      LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex((bdCommonAddr *)addr, v14);
      bdAddr::toString(LocalAddrByIndex, str, 0x16ui64);
      v16 = bdSnprintf(v12, (unsigned int)((_DWORD)v6 - v13), "Local Addr %u :  %s \n", v14, str);
      if ( v16 <= 0 || v16 > (int)v6 - v13 )
      {
        v12 = v6 - 1;
        v13 = (_DWORD)v6 - 1;
        if ( length )
          *v12 = 0;
      }
      else
      {
        v12 += v16;
        v13 = (int)v12;
      }
      ++v14;
    }
    while ( v14 < bdCommonAddr::getLocalAddrs((bdCommonAddr *)addr)->m_size );
  }
  else
  {
    v11 = (int)v6;
  }
  v17 = (int)v6;
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)addr);
  bdAddr::toString(PublicAddr, v28, 0x16ui64);
  v19 = bdSnprintf(v12, (unsigned int)((_DWORD)v6 - v13), "Public Addr :  %s \n", v28);
  if ( v19 <= 0 || v19 > v11 - v13 )
  {
    v20 = v6 - 1;
    v21 = (_DWORD)v6 - 1;
    if ( length )
      *v20 = 0;
  }
  else
  {
    v20 = &v12[v19];
    v21 = (int)v20;
  }
  v22 = "TRUE";
  if ( !addr->m_isLoopback )
    v22 = "FALSE";
  LODWORD(v26) = addr->m_hash;
  v23 = bdSnprintf(v20, (unsigned int)((_DWORD)v6 - v21), "Addr is loopback : %s  -- Addr Hash : %u \n", v22, v26);
  if ( v23 <= 0 || v23 > v11 - v21 )
  {
    v24 = v6 - 1;
    if ( length )
      *v24 = 0;
  }
  else
  {
    LODWORD(v24) = (_DWORD)v20 + v23;
  }
  return length + (_DWORD)v24 - v17;
}

/*
==============
bdCommonAddrInfo::getInfo
==============
*/
__int64 bdCommonAddrInfo::getInfo(const bdReference<bdCommonAddr> addr, char *buf, __int64 length)
{
  unsigned int Info; 
  bdCommonAddr_vtbl *v5; 

  Info = 0;
  v5 = addr.m_ptr->__vftable;
  if ( v5 )
    Info = bdCommonAddrInfo::getInfo((const bdCommonAddr *)v5, buf, length);
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64, length);
    addr.m_ptr->__vftable = NULL;
  }
  return Info;
}

