/*
==============
bdSingleton<bdSingletonRegistryImpl>::destroyInstance
==============
*/

void __fastcall bdSingleton<bdSingletonRegistryImpl>::destroyInstance()
{
  ?destroyInstance@?$bdSingleton@VbdSingletonRegistryImpl@@@@SAXXZ();
}

/*
==============
bdSingleton<bdDataChannelManagerStandardImpl>::getInstance
==============
*/

bdDataChannelManagerStandardImpl *__fastcall bdSingleton<bdDataChannelManagerStandardImpl>::getInstance()
{
  return ?getInstance@?$bdSingleton@VbdDataChannelManagerStandardImpl@@@@SAPEAVbdDataChannelManagerStandardImpl@@XZ();
}

/*
==============
bdSingleton<bdNetImpl>::destroyInstance
==============
*/

void __fastcall bdSingleton<bdNetImpl>::destroyInstance()
{
  ?destroyInstance@?$bdSingleton@VbdNetImpl@@@@SAXXZ();
}

/*
==============
bdSingleton<bdTrulyRandomImpl>::destroyInstance
==============
*/

void __fastcall bdSingleton<bdTrulyRandomImpl>::destroyInstance()
{
  ?destroyInstance@?$bdSingleton@VbdTrulyRandomImpl@@@@SAXXZ();
}

/*
==============
bdSingleton<bdSingletonRegistryImpl>::getInstance
==============
*/

bdSingletonRegistryImpl *__fastcall bdSingleton<bdSingletonRegistryImpl>::getInstance()
{
  return ?getInstance@?$bdSingleton@VbdSingletonRegistryImpl@@@@SAPEAVbdSingletonRegistryImpl@@XZ();
}

/*
==============
bdSingleton<bdTrulyRandomImpl>::getInstance
==============
*/

bdTrulyRandomImpl *__fastcall bdSingleton<bdTrulyRandomImpl>::getInstance()
{
  return ?getInstance@?$bdSingleton@VbdTrulyRandomImpl@@@@SAPEAVbdTrulyRandomImpl@@XZ();
}

/*
==============
bdSingleton<bdNetImpl>::getInstance
==============
*/

bdNetImpl *__fastcall bdSingleton<bdNetImpl>::getInstance()
{
  return ?getInstance@?$bdSingleton@VbdNetImpl@@@@SAPEAVbdNetImpl@@XZ();
}

/*
==============
bdSingleton<bdDataChannelManagerStandardImpl>::destroyInstance
==============
*/

void __fastcall bdSingleton<bdDataChannelManagerStandardImpl>::destroyInstance()
{
  ?destroyInstance@?$bdSingleton@VbdDataChannelManagerStandardImpl@@@@SAXXZ();
}

/*
==============
bdSingleton<bdSingletonRegistryImpl>::destroyInstance
==============
*/
__int64 bdSingleton<bdSingletonRegistryImpl>::destroyInstance()
{
  __int64 result; 

  if ( bdSingleton<bdSingletonRegistryImpl>::m_instance )
  {
    result = ((__int64 (__fastcall *)(bdSingletonRegistryImpl *, __int64))bdSingleton<bdSingletonRegistryImpl>::m_instance->~bdSingletonRegistryImpl)(bdSingleton<bdSingletonRegistryImpl>::m_instance, 1i64);
    bdSingleton<bdSingletonRegistryImpl>::m_instance = NULL;
  }
  return result;
}

/*
==============
bdSingleton<bdTrulyRandomImpl>::destroyInstance
==============
*/
void bdSingleton<bdTrulyRandomImpl>::destroyInstance()
{
  if ( bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
    bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
  }
}

/*
==============
bdSingleton<bdSingletonRegistryImpl>::getInstance
==============
*/
bdSingletonRegistryImpl *bdSingleton<bdSingletonRegistryImpl>::getInstance()
{
  bdSingletonRegistryImpl *result; 
  bdSingletonRegistryImpl *v1; 
  bdSingletonRegistryImpl *Instance; 

  result = bdSingleton<bdSingletonRegistryImpl>::m_instance;
  if ( !bdSingleton<bdSingletonRegistryImpl>::m_instance )
  {
    v1 = (bdSingletonRegistryImpl *)bdMemory::allocate((unsigned int)((_DWORD)bdSingleton<bdSingletonRegistryImpl>::m_instance + 32));
    if ( v1 )
    {
      v1->__vftable = (bdSingletonRegistryImpl_vtbl *)&bdSingletonRegistryImpl::`vftable';
      v1->m_destroyFunctions.m_data = NULL;
      *(_QWORD *)&v1->m_destroyFunctions.m_capacity = 0i64;
      v1->m_cleaningUp = 0;
    }
    bdSingleton<bdSingletonRegistryImpl>::m_instance = v1;
    if ( v1 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdSingletonRegistryImpl>::destroyInstance) )
        return bdSingleton<bdSingletonRegistryImpl>::m_instance;
      if ( bdSingleton<bdSingletonRegistryImpl>::m_instance )
        ((void (__fastcall *)(bdSingletonRegistryImpl *, __int64))bdSingleton<bdSingletonRegistryImpl>::m_instance->~bdSingletonRegistryImpl)(bdSingleton<bdSingletonRegistryImpl>::m_instance, 1i64);
      bdSingleton<bdSingletonRegistryImpl>::m_instance = NULL;
    }
    DebugBreak();
    return bdSingleton<bdSingletonRegistryImpl>::m_instance;
  }
  return result;
}

/*
==============
bdSingleton<bdDataChannelManagerStandardImpl>::destroyInstance
==============
*/
__int64 bdSingleton<bdDataChannelManagerStandardImpl>::destroyInstance()
{
  __int64 result; 

  if ( bdSingleton<bdDataChannelManagerStandardImpl>::m_instance )
  {
    result = ((__int64 (__fastcall *)(bdDataChannelManagerStandardImpl *, __int64))bdSingleton<bdDataChannelManagerStandardImpl>::m_instance->~bdDataChannelManagerBase)(bdSingleton<bdDataChannelManagerStandardImpl>::m_instance, 1i64);
    bdSingleton<bdDataChannelManagerStandardImpl>::m_instance = NULL;
  }
  return result;
}

/*
==============
bdSingleton<bdDataChannelManagerStandardImpl>::getInstance
==============
*/
bdDataChannelManagerStandardImpl *bdSingleton<bdDataChannelManagerStandardImpl>::getInstance()
{
  bdDataChannelManagerStandardImpl *result; 
  bdDataChannelManagerStandardImpl *v1; 
  bdSingletonRegistryImpl *Instance; 

  result = bdSingleton<bdDataChannelManagerStandardImpl>::m_instance;
  if ( !bdSingleton<bdDataChannelManagerStandardImpl>::m_instance )
  {
    v1 = (bdDataChannelManagerStandardImpl *)bdMemory::allocate(0x1908ui64);
    if ( v1 )
      bdDataChannelManagerStandardImpl::bdDataChannelManagerStandardImpl(v1);
    bdSingleton<bdDataChannelManagerStandardImpl>::m_instance = v1;
    if ( v1 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdDataChannelManagerStandardImpl>::destroyInstance) )
        return bdSingleton<bdDataChannelManagerStandardImpl>::m_instance;
      if ( bdSingleton<bdDataChannelManagerStandardImpl>::m_instance )
        ((void (__fastcall *)(bdDataChannelManagerStandardImpl *, __int64))bdSingleton<bdDataChannelManagerStandardImpl>::m_instance->~bdDataChannelManagerBase)(bdSingleton<bdDataChannelManagerStandardImpl>::m_instance, 1i64);
      bdSingleton<bdDataChannelManagerStandardImpl>::m_instance = NULL;
    }
    DebugBreak();
    return bdSingleton<bdDataChannelManagerStandardImpl>::m_instance;
  }
  return result;
}

/*
==============
bdSingleton<bdTrulyRandomImpl>::getInstance
==============
*/
bdTrulyRandomImpl *bdSingleton<bdTrulyRandomImpl>::getInstance()
{
  bdTrulyRandomImpl *result; 
  bdTrulyRandomImpl *v1; 
  bdSingletonRegistryImpl *Instance; 

  result = bdSingleton<bdTrulyRandomImpl>::m_instance;
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v1 = (bdTrulyRandomImpl *)bdMemory::allocate((unsigned int)((_DWORD)bdSingleton<bdTrulyRandomImpl>::m_instance + 1));
    if ( v1 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v1);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v1;
    if ( v1 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
        return bdSingleton<bdTrulyRandomImpl>::m_instance;
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
    }
    DebugBreak();
    return bdSingleton<bdTrulyRandomImpl>::m_instance;
  }
  return result;
}

/*
==============
bdSingleton<bdNetImpl>::destroyInstance
==============
*/
__int64 bdSingleton<bdNetImpl>::destroyInstance()
{
  __int64 result; 

  if ( bdSingleton<bdNetImpl>::m_instance )
  {
    result = ((__int64 (__fastcall *)(bdNetImpl *, __int64))bdSingleton<bdNetImpl>::m_instance->~bdNetImpl)(bdSingleton<bdNetImpl>::m_instance, 1i64);
    bdSingleton<bdNetImpl>::m_instance = NULL;
  }
  return result;
}

/*
==============
bdSingleton<bdNetImpl>::getInstance
==============
*/
bdNetImpl *bdSingleton<bdNetImpl>::getInstance()
{
  bdNetImpl *result; 
  bdNetImpl *v1; 
  bdSingletonRegistryImpl *Instance; 

  result = bdSingleton<bdNetImpl>::m_instance;
  if ( !bdSingleton<bdNetImpl>::m_instance )
  {
    v1 = (bdNetImpl *)bdMemory::allocate(0x6020ui64);
    if ( v1 )
    {
      v1->__vftable = (bdNetImpl_vtbl *)&bdNetImpl::`vftable';
      bdNetStartParams::bdNetStartParams(&v1->m_params);
      bdConnectionStore::bdConnectionStore(&v1->m_connectionStore);
      v1->m_socketRouter = NULL;
      v1->m_status = BD_NET_STOPPED;
      v1->m_ipDiscClient = NULL;
      v1->m_natTypeDiscClient = NULL;
      v1->m_getHostByName = NULL;
      bdUPnP::bdUPnP(&v1->m_UPnP);
      v1->m_natTravAddrs.m_data = NULL;
      *(_QWORD *)&v1->m_natTravAddrs.m_capacity = 0i64;
      *(_QWORD *)&v1->m_currentNatTravAddrIndex = 0i64;
      v1->m_upnpCollisionRetryCount = 0;
      bdNetTelemetry::bdNetTelemetry(&v1->m_telemetry);
      v1->m_telemetryCurrentGetHostIndex = 0;
      v1->m_telemetryPending = 0;
      v1->m_lastPumpTime = 0;
    }
    else
    {
      v1 = NULL;
    }
    bdSingleton<bdNetImpl>::m_instance = v1;
    if ( v1 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdNetImpl>::destroyInstance) )
        return bdSingleton<bdNetImpl>::m_instance;
      if ( bdSingleton<bdNetImpl>::m_instance )
        ((void (__fastcall *)(bdNetImpl *, __int64))bdSingleton<bdNetImpl>::m_instance->~bdNetImpl)(bdSingleton<bdNetImpl>::m_instance, 1i64);
      bdSingleton<bdNetImpl>::m_instance = NULL;
    }
    DebugBreak();
    return bdSingleton<bdNetImpl>::m_instance;
  }
  return result;
}

