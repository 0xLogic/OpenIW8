/*
==============
GExampleSystemClass::GetInstance
==============
*/

GExampleSystemClass *__fastcall GExampleSystemClass::GetInstance()
{
  return ?GetInstance@GExampleSystemClass@@SAPEAV1@XZ();
}

/*
==============
GExampleSystemClass::FreeMemory
==============
*/

void GExampleSystemClass::FreeMemory(void)
{
  ?FreeMemory@GExampleSystemClass@@SAXXZ();
}

/*
==============
GExampleSystemClass::GExampleSystemClass
==============
*/

void __fastcall GExampleSystemClass::GExampleSystemClass(GExampleSystemClass *this)
{
  ??0GExampleSystemClass@@QEAA@XZ(this);
}

/*
==============
GExampleSystemClass::ExampleVirtualMethod
==============
*/

void __fastcall GExampleSystemClass::ExampleVirtualMethod(GExampleSystemClass *this)
{
  ?ExampleVirtualMethod@GExampleSystemClass@@UEAAXXZ(this);
}

/*
==============
GExampleSystemClass::AllocateMemory
==============
*/

void __fastcall GExampleSystemClass::AllocateMemory(HunkUser *hunkUser)
{
  ?AllocateMemory@GExampleSystemClass@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GExampleSystemClass::Save
==============
*/

void __fastcall GExampleSystemClass::Save(GExampleSystemClass *this, MemoryFile *memFile)
{
  ?Save@GExampleSystemClass@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GExampleSystemClass::~GExampleSystemClass
==============
*/

void __fastcall GExampleSystemClass::~GExampleSystemClass(GExampleSystemClass *this)
{
  ??1GExampleSystemClass@@UEAA@XZ(this);
}

/*
==============
GExampleSystemClass::GetMemorySize
==============
*/

unsigned int __fastcall GExampleSystemClass::GetMemorySize()
{
  return ?GetMemorySize@GExampleSystemClass@@SAIXZ();
}

/*
==============
GExampleSystemClass::Load
==============
*/

void __fastcall GExampleSystemClass::Load(GExampleSystemClass *this, MemoryFile *memFile)
{
  ?Load@GExampleSystemClass@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GExampleSystemClass::GExampleSystemClass
==============
*/
void GExampleSystemClass::GExampleSystemClass(GExampleSystemClass *this)
{
  this->m_localDataExample = 0;
  this->__vftable = (GExampleSystemClass_vtbl *)&GExampleSystemClass::`vftable';
}

/*
==============
GExampleSystemClass::~GExampleSystemClass
==============
*/
void GExampleSystemClass::~GExampleSystemClass(GExampleSystemClass *this)
{
  this->__vftable = (GExampleSystemClass_vtbl *)&BgExampleSystemClass::`vftable';
}

/*
==============
GExampleSystemClass::AllocateMemory
==============
*/
void GExampleSystemClass::AllocateMemory(HunkUser *hunkUser)
{
  GExampleSystemClass *v1; 

  v1 = (GExampleSystemClass *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GExampleSystemClass::AllocateMemory");
  *(_QWORD *)&v1->m_localDataExample = 0i64;
  v1->__vftable = (GExampleSystemClass_vtbl *)&GExampleSystemClass::`vftable';
  GExampleSystemClass::ms_instance = v1;
}

/*
==============
GExampleSystemClass::ExampleVirtualMethod
==============
*/
void GExampleSystemClass::ExampleVirtualMethod(GExampleSystemClass *this)
{
  ;
}

/*
==============
GExampleSystemClass::FreeMemory
==============
*/
void GExampleSystemClass::FreeMemory(void)
{
  if ( GExampleSystemClass::ms_instance )
  {
    GExampleSystemClass::ms_instance->__vftable = (GExampleSystemClass_vtbl *)&BgExampleSystemClass::`vftable';
    DebugWipe(GExampleSystemClass::ms_instance, 0x10ui64);
    GExampleSystemClass::ms_instance = NULL;
  }
}

/*
==============
GExampleSystemClass::GetInstance
==============
*/
GExampleSystemClass *GExampleSystemClass::GetInstance()
{
  GExampleSystemClass *result; 

  result = GExampleSystemClass::ms_instance;
  if ( !GExampleSystemClass::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\igame_iw8\\game\\g_example_system_class.cpp", 68, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    return GExampleSystemClass::ms_instance;
  }
  return result;
}

/*
==============
GExampleSystemClass::GetMemorySize
==============
*/
__int64 GExampleSystemClass::GetMemorySize()
{
  return 16i64;
}

/*
==============
GExampleSystemClass::Load
==============
*/
void GExampleSystemClass::Load(GExampleSystemClass *this, MemoryFile *memFile)
{
  ;
}

/*
==============
GExampleSystemClass::Save
==============
*/
void GExampleSystemClass::Save(GExampleSystemClass *this, MemoryFile *memFile)
{
  ;
}

