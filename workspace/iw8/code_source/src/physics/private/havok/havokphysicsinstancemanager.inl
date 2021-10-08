/*
==============
HavokPhysicsInstanceManager_GetConstraintCount
==============
*/

unsigned int __fastcall HavokPhysicsInstanceManager_GetConstraintCount(const HavokPhysicsInstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokPhysicsInstanceManager_GetConstraintCount@@YAIPEBUHavokPhysicsInstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokPhysicsInstanceManager_GetBodyCount
==============
*/

unsigned int __fastcall HavokPhysicsInstanceManager_GetBodyCount(const HavokPhysicsInstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokPhysicsInstanceManager_GetBodyCount@@YAIPEBUHavokPhysicsInstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokPhysicsInstanceManager_GetBodyId
==============
*/

hknpBodyId *__fastcall HavokPhysicsInstanceManager_GetBodyId(hknpBodyId *result, const HavokPhysicsInstanceManager *manager, const unsigned int instanceId, const unsigned int index)
{
  return ?HavokPhysicsInstanceManager_GetBodyId@@YA?AUhknpBodyId@@PEBUHavokPhysicsInstanceManager@@II@Z(result, manager, instanceId, index);
}

/*
==============
HavokPhysicsInstanceManager_GetConstraintId
==============
*/

hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *__fastcall HavokPhysicsInstanceManager_GetConstraintId(hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *result, const HavokPhysicsInstanceManager *manager, const unsigned int instanceId, const unsigned int index)
{
  return ?HavokPhysicsInstanceManager_GetConstraintId@@YA?AU?$hkHandle@I$0HPPPPPPP@UhknpConstraintIdDiscriminant@@@@PEBUHavokPhysicsInstanceManager@@II@Z(result, manager, instanceId, index);
}

/*
==============
HavokPhysicsInstanceManager_GetBodyCount
==============
*/
__int64 HavokPhysicsInstanceManager_GetBodyCount(const HavokPhysicsInstanceManager *manager, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 21, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 22, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  return (unsigned int)manager->buffer[v2].bodies.m_size;
}

/*
==============
HavokPhysicsInstanceManager_GetConstraintCount
==============
*/
__int64 HavokPhysicsInstanceManager_GetConstraintCount(const HavokPhysicsInstanceManager *manager, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 64, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 65, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  return (unsigned int)manager->buffer[v2].constraints.m_size;
}

/*
==============
HavokPhysicsInstanceManager_GetBodyId
==============
*/
hknpBodyId *HavokPhysicsInstanceManager_GetBodyId(hknpBodyId *result, const HavokPhysicsInstanceManager *manager, const unsigned int instanceId, const unsigned int index)
{
  __int64 v4; 
  __int64 v6; 
  hknpBodyId *v8; 

  v4 = (int)index;
  v6 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 49, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 50, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v8 = result;
  result->m_serialAndIndex = (unsigned int)manager->buffer[v6].bodies.m_data[v4];
  return v8;
}

/*
==============
HavokPhysicsInstanceManager_GetConstraintId
==============
*/
hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *HavokPhysicsInstanceManager_GetConstraintId(hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *result, const HavokPhysicsInstanceManager *manager, const unsigned int instanceId, const unsigned int index)
{
  __int64 v4; 
  __int64 v6; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *v8; 

  v4 = (int)index;
  v6 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 92, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 93, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v8 = result;
  result->m_value = (unsigned int)manager->buffer[v6].constraints.m_data[v4];
  return v8;
}

