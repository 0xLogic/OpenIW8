/*
==============
CgExampleSystemClass::Allocate
==============
*/

void __fastcall CgExampleSystemClass::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  ?Allocate@CgExampleSystemClass@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgExampleSystemClass::GetInstance
==============
*/

CgExampleSystemClass *__fastcall CgExampleSystemClass::GetInstance(const LocalClientNum_t localClientNum)
{
  return ?GetInstance@CgExampleSystemClass@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgExampleSystemClass::Free
==============
*/

void CgExampleSystemClass::Free(void)
{
  ?Free@CgExampleSystemClass@@SAXXZ();
}

/*
==============
CgExampleSystemClass::CgExampleSystemClass
==============
*/

void __fastcall CgExampleSystemClass::CgExampleSystemClass(CgExampleSystemClass *this)
{
  ??0CgExampleSystemClass@@QEAA@XZ(this);
}

/*
==============
CgExampleSystemClass::CgExampleSystemClass
==============
*/
void CgExampleSystemClass::CgExampleSystemClass(CgExampleSystemClass *this)
{
  this->m_localDataExample = 0;
  this->__vftable = (CgExampleSystemClass_vtbl *)&CgExampleSystemClass::`vftable';
}

/*
==============
CgExampleSystemClass::Allocate
==============
*/
void CgExampleSystemClass::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  unsigned __int64 v3; 
  CgExampleSystemClass *v4; 
  __int64 i; 

  v2 = maxLocalClients;
  v3 = 16 * maxLocalClients;
  v4 = (CgExampleSystemClass *)Mem_HunkUser_AllocInternal(hunkUser, v3, 8ui64, "CgExampleSystemClass::Allocate");
  memset_0(v4, 0, v3);
  if ( (int)v2 > 0 )
  {
    for ( i = 0i64; i < v2; ++i )
    {
      if ( CgExampleSystemClass::ms_instance[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\cgame\\cg_example_system_class.cpp", 42, ASSERT_TYPE_ASSERT, "(!ms_instance[index])", (const char *)&queryFormat, "!ms_instance[index]") )
        __debugbreak();
      v4->m_localDataExample = 0;
      v4->__vftable = (CgExampleSystemClass_vtbl *)&CgExampleSystemClass::`vftable';
      CgExampleSystemClass::ms_instance[i] = v4++;
    }
    LODWORD(v2) = maxLocalClients;
  }
  CgExampleSystemClass::ms_allocatedCount = v2;
}

/*
==============
CgExampleSystemClass::Free
==============
*/
void CgExampleSystemClass::Free(void)
{
  int v0; 
  int v1; 
  void **v2; 

  v0 = CgExampleSystemClass::ms_allocatedCount;
  v1 = 0;
  if ( CgExampleSystemClass::ms_allocatedCount > 0 )
  {
    v2 = (void **)CgExampleSystemClass::ms_instance;
    do
    {
      if ( *v2 )
      {
        *(_QWORD *)*v2 = &BgExampleSystemClass::`vftable';
        DebugWipe(*v2, 0x10ui64);
        v0 = CgExampleSystemClass::ms_allocatedCount;
        *v2 = NULL;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  CgExampleSystemClass::ms_allocatedCount = 0;
}

/*
==============
CgExampleSystemClass::GetInstance
==============
*/
CgExampleSystemClass *CgExampleSystemClass::GetInstance(const LocalClientNum_t localClientNum)
{
  CgExampleSystemClass **v1; 

  v1 = &CgExampleSystemClass::ms_instance[localClientNum];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\cgame\\cg_example_system_class.cpp", 71, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return *v1;
}

