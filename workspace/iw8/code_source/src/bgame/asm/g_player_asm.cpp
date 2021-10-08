/*
==============
GPlayer_Asm::~GPlayer_Asm
==============
*/

void __fastcall GPlayer_Asm::~GPlayer_Asm(GPlayer_Asm *this)
{
  ??1GPlayer_Asm@@UEAA@XZ(this);
}

/*
==============
GPlayer_Asm::GetEphemeralEventTables
==============
*/

ASM_EphemeralTable *__fastcall GPlayer_Asm::GetEphemeralEventTables(GPlayer_Asm *this, ASM_Instance *pInst)
{
  return ?GetEphemeralEventTables@GPlayer_Asm@@UEBAPEAUASM_EphemeralTable@@PEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
GPlayer_Asm::GPlayer_Asm
==============
*/

void __fastcall GPlayer_Asm::GPlayer_Asm(GPlayer_Asm *this)
{
  ??0GPlayer_Asm@@QEAA@XZ(this);
}

/*
==============
GPlayer_Asm::GetMemorySize
==============
*/

unsigned int __fastcall GPlayer_Asm::GetMemorySize()
{
  return ?GetMemorySize@GPlayer_Asm@@SAIXZ();
}

/*
==============
GPlayer_Asm::Singleton
==============
*/

GPlayer_Asm *__fastcall GPlayer_Asm::Singleton()
{
  return ?Singleton@GPlayer_Asm@@SAPEAV1@XZ();
}

/*
==============
GPlayer_Asm::FreeMemory
==============
*/

void GPlayer_Asm::FreeMemory(void)
{
  ?FreeMemory@GPlayer_Asm@@SAXXZ();
}

/*
==============
GPlayer_Asm::AllocateMemory
==============
*/

void __fastcall GPlayer_Asm::AllocateMemory(HunkUser *hunkUser, int maxCharacters)
{
  ?AllocateMemory@GPlayer_Asm@@SAXPEAUHunkUser@@H@Z(hunkUser, maxCharacters);
}

/*
==============
GPlayer_Asm::GetGameTime
==============
*/

int __fastcall GPlayer_Asm::GetGameTime(GPlayer_Asm *this)
{
  return ?GetGameTime@GPlayer_Asm@@UEBAHXZ(this);
}

/*
==============
GPlayer_Asm::GPlayer_Asm
==============
*/
void GPlayer_Asm::GPlayer_Asm(GPlayer_Asm *this)
{
  BgPlayer_Asm::BgPlayer_Asm(this);
  this->__vftable = (GPlayer_Asm_vtbl *)&GPlayer_Asm::`vftable';
}

/*
==============
GPlayer_Asm::~GPlayer_Asm
==============
*/
void GPlayer_Asm::~GPlayer_Asm(GPlayer_Asm *this)
{
  this->__vftable = (GPlayer_Asm_vtbl *)&GPlayer_Asm::`vftable';
  BgPlayer_Asm::~BgPlayer_Asm(this);
}

/*
==============
GPlayer_Asm::AllocateMemory
==============
*/
void GPlayer_Asm::AllocateMemory(HunkUser *hunkUser, int maxCharacters)
{
  GPlayer_Asm *v3; 

  v3 = (GPlayer_Asm *)Mem_HunkUser_AllocInternal(hunkUser, 0x20ui64, 8ui64, "GPlayer_Asm::AllocateMemory");
  v3->__vftable = NULL;
  *(_QWORD *)&v3->m_MaxPrimaryInstances = 0i64;
  *(_QWORD *)&v3->m_MaxEphemeralTables = 0i64;
  *(_QWORD *)&v3->m_Mode = 0i64;
  BgPlayer_Asm::BgPlayer_Asm(v3);
  v3->__vftable = (GPlayer_Asm_vtbl *)&GPlayer_Asm::`vftable';
  GPlayer_Asm::ms_instance = v3;
  v3->m_MaxInstances = 2 * maxCharacters;
  BgPlayer_Asm::RegisterBgInstance(GPlayer_Asm::ms_instance);
}

/*
==============
GPlayer_Asm::FreeMemory
==============
*/
void GPlayer_Asm::FreeMemory(void)
{
  GPlayer_Asm *v0; 

  v0 = GPlayer_Asm::ms_instance;
  if ( GPlayer_Asm::ms_instance )
  {
    GPlayer_Asm::ms_instance->__vftable = (GPlayer_Asm_vtbl *)&GPlayer_Asm::`vftable';
    BgPlayer_Asm::~BgPlayer_Asm(v0);
    BgPlayer_Asm::RemoveBgInstance(GPlayer_Asm::ms_instance);
    DebugWipe(GPlayer_Asm::ms_instance, 0x20ui64);
    GPlayer_Asm::ms_instance = NULL;
  }
}

/*
==============
GPlayer_Asm::GetEphemeralEventTables
==============
*/
ASM_EphemeralTable *GPlayer_Asm::GetEphemeralEventTables(GPlayer_Asm *this, ASM_Instance *pInst)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\g_player_asm.cpp", 85, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PlayerASM: Ephemeral events not enabled.") )
    __debugbreak();
  return 0i64;
}

/*
==============
GPlayer_Asm::GetGameTime
==============
*/

int __fastcall GPlayer_Asm::GetGameTime(GPlayer_Asm *this)
{
  return G_Main_GetTime();
}

/*
==============
GPlayer_Asm::GetMemorySize
==============
*/
__int64 GPlayer_Asm::GetMemorySize()
{
  return 32i64;
}

/*
==============
GPlayer_Asm::Singleton
==============
*/
GPlayer_Asm *GPlayer_Asm::Singleton()
{
  GPlayer_Asm *result; 

  result = GPlayer_Asm::ms_instance;
  if ( !GPlayer_Asm::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\g_player_asm.cpp", 27, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    return GPlayer_Asm::ms_instance;
  }
  return result;
}

