/*
==============
bdCore::quit
==============
*/

void bdCore::quit(void)
{
  ?quit@bdCore@@SAXXZ();
}

/*
==============
bdCore::init
==============
*/

void __fastcall bdCore::init(const bool defaultMemoryFunctions)
{
  ?init@bdCore@@SAX_N@Z(defaultMemoryFunctions);
}

/*
==============
bdCore::bdCore
==============
*/

void __fastcall bdCore::bdCore(bdCore *this)
{
  ??0bdCore@@IEAA@XZ(this);
}

/*
==============
bdCore::bdCore
==============
*/
void bdCore::bdCore(bdCore *this)
{
  ;
}

/*
==============
bdCore::init
==============
*/
void bdCore::init(const bool defaultMemoryFunctions)
{
  if ( bdCore::m_initialized )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "core", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcore.cpp", "bdCore::init", 0x39u, "init() has been called twice without an intermediate quit()");
  }
  else
  {
    if ( defaultMemoryFunctions )
    {
      bdMemory::setAllocateFunc(bdMallocMemory::allocate);
      bdMemory::setAlignedAllocateFunc(bdMallocMemory::alignedAllocate);
      bdMemory::setDeallocateFunc(bdMallocMemory::deallocate);
      bdMemory::setAlignedDeallocateFunc(bdMallocMemory::alignedDeallocate);
      bdMemory::setReallocateFunc(bdMallocMemory::reallocate);
      bdMemory::setAlignedReallocateFunc(bdMallocMemory::alignedReallocate);
    }
    bdCryptoConfig::init();
    bdCore::m_initialized = 1;
  }
}

/*
==============
bdCore::quit
==============
*/
void bdCore::quit(void)
{
  bdSingletonRegistryImpl *Instance; 
  void (**m_data)(void); 
  __int64 m_size; 
  void (**i)(void); 

  if ( bdCore::m_initialized )
  {
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    m_data = Instance->m_destroyFunctions.m_data;
    m_size = Instance->m_destroyFunctions.m_size;
    Instance->m_cleaningUp = 1;
    for ( i = &m_data[m_size]; i != m_data; (*i)() )
      --i;
    bdMallocMemory::leakCheck();
    bdMemory::setAllocateFunc(NULL);
    bdMemory::setAlignedAllocateFunc(NULL);
    bdMemory::setDeallocateFunc(NULL);
    bdMemory::setAlignedDeallocateFunc(NULL);
    bdMemory::setReallocateFunc(NULL);
    bdMemory::setAlignedReallocateFunc(NULL);
    bdCryptoConfig::quit();
    bdCore::m_initialized = 0;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "core", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcore.cpp", "bdCore::quit", 0x5Bu, "quit() has been called twice without an intermediate init()");
  }
}

