/*
==============
CgStaticMP::ClearGameStatics
==============
*/

void __fastcall CgStaticMP::ClearGameStatics(const LocalClientNum_t localClientNum)
{
  ?ClearGameStatics@CgStaticMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgStaticMP::~CgStaticMP
==============
*/

void __fastcall CgStaticMP::~CgStaticMP(CgStaticMP *this)
{
  ??1CgStaticMP@@UEAA@XZ(this);
}

/*
==============
CgStaticMP::ClearGameStatics
==============
*/
void CgStaticMP::ClearGameStatics(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgStatic **v2; 
  CgStatic *v3; 
  __int64 v4; 
  __int64 v5; 

  v1 = localClientNum;
  if ( (_BYTE)CgStatic::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 121, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::GAME_STATICS_TYPE)", "%s\n\tTrying to access the game statics for localClientNum %d but the game statics type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::GAME_STATICS_TYPE", localClientNum, 2, (unsigned __int8)CgStatic::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v5 = CgStatic::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 122, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = &CgStatic::ms_cgameStaticsArray[v1];
  if ( !*v2 )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 123, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v5) )
      __debugbreak();
  }
  v3 = *v2;
  memset_0(&(*v2)[1], 0, 0xEEE0ui64);
  v3[1222].m_localClientNum = LOCAL_CLIENT_0;
}

/*
==============
CgStaticMP::~CgStaticMP
==============
*/
void CgStaticMP::~CgStaticMP(CgStaticMP *this)
{
  this->__vftable = (CgStaticMP_vtbl *)&CgStaticMP::`vftable';
  DebugWipe(&this->m_animData, 0x4C60ui64);
  DebugWipe(this->m_clientInfo, 0xA280ui64);
  this->__vftable = (CgStaticMP_vtbl *)&CgStatic::`vftable';
  this->m_localClientNum = LOCAL_CLIENT_INVALID;
  BgStatic::~BgStatic(this);
}

