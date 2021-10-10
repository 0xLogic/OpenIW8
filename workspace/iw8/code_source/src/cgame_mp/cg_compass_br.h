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
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  char v12; 
  int v13; 
  void **v14; 
  int v15; 
  int v16; 

  VarByName = Dvar_FindVarByName("MLSNKQTKQK");
  Dvar_SetFloat_Internal(VarByName, VarByName->reset.value);
  v1 = Dvar_FindVarByName("LOTTTLOMOP");
  Dvar_SetFloat_Internal(v1, v1->reset.value);
  v2 = Dvar_FindVarByName("MQQPKORPML");
  Dvar_SetFloat_Internal(v2, v2->reset.value);
  v3 = Dvar_FindVarByName("MSSOQMMMKO");
  Dvar_SetFloat_Internal(v3, v3->reset.value);
  v4 = Dvar_FindVarByName("NOTLNTRMTL");
  Dvar_SetFloat_Internal(v4, v4->reset.value);
  v5 = Dvar_FindVarByName("NMKNORNKMM");
  Dvar_SetFloat_Internal(v5, v5->reset.value);
  v6 = Dvar_FindVarByName("LQNRMLNKLK");
  Dvar_SetFloat_Internal(v6, v6->reset.value);
  v7 = Dvar_FindVarByName("RMKORNSTL");
  Dvar_SetFloat_Internal(v7, v7->reset.value);
  v8 = Dvar_FindVarByName("MKSQKQRNKT");
  Dvar_SetFloat_Internal(v8, v8->reset.value);
  v9 = Dvar_FindVarByName("MPPKMQPPOT");
  Dvar_SetInt_Internal(v9, v9->reset.integer);
  v10 = Dvar_FindVarByName("MNTSSMTOMR");
  Dvar_SetFloat_Internal(v10, v10->reset.value);
  v11 = Dvar_FindVarByName("MORKQLLMNM");
  Dvar_SetFloat_Internal(v11, v11->reset.value);
  v12 = CgCompassSystem::ms_allocatedType;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v16 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v15 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 624, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to free compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v15, v16) )
      __debugbreak();
    v12 = CgCompassSystem::ms_allocatedType;
  }
  if ( v12 != 2 )
  {
    CgCompassSystem::ms_allocatedCount = 0;
    LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgCompassSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 628, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgCompassSystem::FreeCompassSystemCommon: Trying to free single-player compass system but no compass system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v13 = CgCompassSystem::ms_allocatedCount - 1;
  if ( CgCompassSystem::ms_allocatedCount - 1 < 0 )
  {
    CgCompassSystem::ms_allocatedCount = 0;
    LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
  }
  else
  {
    v14 = (void **)&CgCompassSystem::ms_compassSystemArray[v13];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v14 + 120i64))(*v14, 0i64);
      DebugWipe(*v14, 0xFBC0ui64);
      --v13;
      *v14-- = NULL;
    }
    while ( v13 >= 0 );
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

