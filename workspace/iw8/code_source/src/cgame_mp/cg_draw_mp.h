/*
==============
CgDrawSystemMP::GetDrawSystemMP
==============
*/

CgDrawSystemMP *__fastcall CgDrawSystemMP::GetDrawSystemMP(const LocalClientNum_t localClientNum)
{
  return ?GetDrawSystemMP@CgDrawSystemMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystemMP::ClearDrawSystem
==============
*/

void __fastcall CgDrawSystemMP::ClearDrawSystem(const LocalClientNum_t localClientNum)
{
  ?ClearDrawSystem@CgDrawSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystemMP::AllocateDrawSystem
==============
*/

void __fastcall CgDrawSystemMP::AllocateDrawSystem(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  ?AllocateDrawSystem@CgDrawSystemMP@@SAXPEAUHunkUser@@HH@Z(hunkUser, maxLocalClients, maxCharacters);
}

/*
==============
CgDrawSystemMP::AllocateDrawSystem
==============
*/
void CgDrawSystemMP::AllocateDrawSystem(HunkUser *hunkUser, const int maxLocalClients, const int maxCharacters)
{
  int v3; 
  __int64 v4; 
  int v6; 
  CgDrawSystem *v7; 
  CgDrawSystem **v8; 
  int v9; 
  CgDrawSystem **v10; 
  unsigned __int64 v11; 
  CgDrawSystem_vtbl *v12; 
  CgDrawSystem *v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 

  v3 = maxCharacters;
  v4 = maxLocalClients;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType )
  {
    v16 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 200, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the draw system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v16) )
      __debugbreak();
  }
  v6 = 0;
  if ( (unsigned int)v4 > 2 )
  {
    v18 = 2;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 201, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v14, 0i64, v18) )
      __debugbreak();
  }
  v7 = (CgDrawSystem *)Mem_HunkUser_AllocInternal(hunkUser, 1056 * v4, 8ui64, "CgDrawSystem::AllocateDrawSystemCommon");
  memset_0(v7, 0, 1056 * v4);
  v8 = CgDrawSystem::ms_drawSystemArray;
  v9 = 0;
  if ( (int)v4 > 0 )
  {
    v10 = CgDrawSystem::ms_drawSystemArray;
    do
    {
      if ( *v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 211, ASSERT_TYPE_ASSERT, "(!ms_drawSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_drawSystemArray[localClientIndex]") )
        __debugbreak();
      v7->m_localClientNum = v9++;
      v7->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystemMP::`vftable';
      *v10 = v7;
      v7 += 66;
      ++v10;
    }
    while ( v9 < (int)v4 );
    v3 = maxCharacters;
    v8 = CgDrawSystem::ms_drawSystemArray;
  }
  CgDrawSystem::ms_allocatedCount = v4;
  LOBYTE(CgDrawSystem::ms_allocatedType) = 2;
  v11 = 10768 * v3 * (int)v4;
  v12 = (CgDrawSystem_vtbl *)Mem_HunkUser_AllocInternal(hunkUser, v11, 4ui64, "CgDrawSystemMP::AllocateDrawSystem");
  memset_0(v12, 0, v11);
  if ( (int)v4 > 0 )
  {
    do
    {
      if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
      {
        LODWORD(v19) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
        LODWORD(v17) = 2;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v15, v17, v19) )
          __debugbreak();
      }
      if ( v6 >= (unsigned int)CgDrawSystem::ms_allocatedCount )
      {
        LODWORD(v15) = CgDrawSystem::ms_allocatedCount;
        LODWORD(v14) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !*v8 )
      {
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v15) )
          __debugbreak();
      }
      v13 = *v8;
      ++v6;
      ++v8;
      v13[1].__vftable = v12;
      v12 = (CgDrawSystem_vtbl *)((char *)v12 + 10768 * v3);
      v13[1].m_localClientNum = v3;
    }
    while ( v6 < (int)v4 );
  }
}

/*
==============
CgDrawSystemMP::ClearDrawSystem
==============
*/
void CgDrawSystemMP::ClearDrawSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgDrawSystemMP *DrawSystemMP; 
  AntilagDebugCharacterInfo *m_antilagDebugCharacters; 
  __int64 m_antilagDebugCharacterCount; 
  void **v5; 
  _DWORD *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v1 = localClientNum;
  DrawSystemMP = CgDrawSystemMP::GetDrawSystemMP(localClientNum);
  m_antilagDebugCharacters = DrawSystemMP->m_antilagDebugCharacters;
  m_antilagDebugCharacterCount = DrawSystemMP->m_antilagDebugCharacterCount;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
  {
    v10 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 252, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tCgDrawSystem::ClearDrawSystemCommon: Trying to clear draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v9, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v8) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = (void **)&CgDrawSystem::ms_drawSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v5 + 80i64))(*v5, 0i64);
  memset_0(*v5, 0, 0x420ui64);
  v6 = *v5;
  v6[2] = v1;
  *(_QWORD *)v6 = &CgDrawSystemMP::`vftable';
  if ( DrawSystemMP->m_antilagDebugCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.h", 112, ASSERT_TYPE_ASSERT, "(drawSystem->m_antilagDebugCharacters == nullptr)", (const char *)&queryFormat, "drawSystem->m_antilagDebugCharacters == nullptr") )
    __debugbreak();
  memset_0(m_antilagDebugCharacters, 0, 10768 * m_antilagDebugCharacterCount);
  DrawSystemMP->m_antilagDebugCharacters = m_antilagDebugCharacters;
  DrawSystemMP->m_antilagDebugCharacterCount = m_antilagDebugCharacterCount;
  CgDrawSystemMP::SetLastSRETime(DrawSystemMP, 0, NULL);
}

/*
==============
CgDrawSystemMP::GetDrawSystemMP
==============
*/
CgDrawSystem *CgDrawSystemMP::GetDrawSystemMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgDrawSystem::ms_drawSystemArray[v1];
}

