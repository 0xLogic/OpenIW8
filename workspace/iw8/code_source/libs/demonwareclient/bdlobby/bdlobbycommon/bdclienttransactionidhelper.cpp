/*
==============
bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId
==============
*/

void __fastcall bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId(char *buffer, unsigned int bufferSize)
{
  ?generateTrulyRandomClientTransactionId@bdClientTransactionIdHelper@@SAXPEADI@Z(buffer, bufferSize);
}

/*
==============
bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId
==============
*/
void bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId(char *buffer, unsigned int bufferSize)
{
  bdTrulyRandomImpl *v4; 
  bdSingletonRegistryImpl *Instance; 
  unsigned __int8 in[16]; 

  bdHandleAssert(bufferSize >= 0x19, "bufferSize >= 25", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdclienttransactionidhelper.cpp", "bdClientTransactionIdHelper::generateTrulyRandomClientTransactionId", 0xFu, "clientTransactionId buffer must be >= 25.", -2i64);
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v4 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    if ( v4 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v4);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v4;
    if ( !v4 )
      goto LABEL_7;
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
    {
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_7:
      DebugBreak();
    }
  }
  bdTrulyRandomImpl::getRandomUByte8(bdSingleton<bdTrulyRandomImpl>::m_instance, in, 0x10u);
  bdBase64::encodeURLSafe((const char *)in, 0x10u, buffer, bufferSize);
}

