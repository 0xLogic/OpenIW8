/*
==============
CgCompassSystemBR::GetCompassSystemBR
==============
*/

CgCompassSystemBR *__fastcall CgCompassSystemBR::GetCompassSystemBR(const LocalClientNum_t localClientNum)
{
  return ?GetCompassSystemBR@CgCompassSystemBR@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgCompassSystemBR::FreeCompassSystem
==============
*/

void CgCompassSystemBR::FreeCompassSystem(void)
{
  ?FreeCompassSystem@CgCompassSystemBR@@SAXXZ();
}

/*
==============
CgCompassSystemBR::FreeCompassSystem
==============
*/
void CgCompassSystemBR::FreeCompassSystem(void)
{
  const dvar_t *VarByName; 
  char v23; 
  int v24; 
  void **v25; 
  int v26; 
  int v27; 

  _RAX = Dvar_FindVarByName("MLSNKQTKQK");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("LOTTTLOMOP");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("MQQPKORPML");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("MSSOQMMMKO");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("NOTLNTRMTL");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("NMKNORNKMM");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("LQNRMLNKLK");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("RMKORNSTL");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("MKSQKQRNKT");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  VarByName = Dvar_FindVarByName("MPPKMQPPOT");
  Dvar_SetInt_Internal(VarByName, VarByName->reset.integer);
  _RAX = Dvar_FindVarByName("MNTSSMTOMR");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  _RAX = Dvar_FindVarByName("MORKQLLMNM");
  __asm { vmovss  xmm1, dword ptr [rax+48h]; value }
  Dvar_SetFloat_Internal(_RAX, *(float *)&_XMM1);
  v23 = CgCompassSystem::ms_allocatedType;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v27 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v26 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 624, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to free compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v26, v27) )
      __debugbreak();
    v23 = CgCompassSystem::ms_allocatedType;
  }
  if ( v23 != 2 )
  {
    CgCompassSystem::ms_allocatedCount = 0;
    LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgCompassSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 628, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgCompassSystem::FreeCompassSystemCommon: Trying to free single-player compass system but no compass system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v24 = CgCompassSystem::ms_allocatedCount - 1;
  if ( CgCompassSystem::ms_allocatedCount - 1 < 0 )
  {
    CgCompassSystem::ms_allocatedCount = 0;
    LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
  }
  else
  {
    v25 = (void **)&CgCompassSystem::ms_compassSystemArray[v24];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v25 + 120i64))(*v25, 0i64);
      DebugWipe(*v25, 0xFBC0ui64);
      --v24;
      *v25-- = NULL;
    }
    while ( v24 >= 0 );
    CgCompassSystem::ms_allocatedCount = 0;
    LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgCompassSystemBR::GetCompassSystemBR
==============
*/
CgCompassSystem *CgCompassSystemBR::GetCompassSystemBR(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgCompassSystem::ms_compassSystemArray[v1];
}

