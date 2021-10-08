/*
==============
CG_GetMinimizedUseTargets
==============
*/

void __fastcall CG_GetMinimizedUseTargets(LocalClientNum_t localClientNum, int *outCount, MinimizedUseTarget *outTargets)
{
  ?CG_GetMinimizedUseTargets@@YAXW4LocalClientNum_t@@PEAHQEAUMinimizedUseTarget@@@Z(localClientNum, outCount, outTargets);
}

/*
==============
CG_InitMinimizedUse
==============
*/

void CG_InitMinimizedUse(void)
{
  ?CG_InitMinimizedUse@@YAXXZ();
}

/*
==============
CG_GetMinimizedUseTargets
==============
*/
void CG_GetMinimizedUseTargets(LocalClientNum_t localClientNum, int *outCount, MinimizedUseTarget *outTargets)
{
  __int64 v4; 
  unsigned int *v7; 
  OmnvarData *Data; 
  OmnvarValue current; 
  unsigned int v12; 
  unsigned int v13; 
  bool v14; 
  __int64 usableIndex; 
  CgEntitySystem *v16; 
  OmnvarData *v17; 
  unsigned int v18; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  v4 = localClientNum;
  _R14 = outTargets;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 44, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  if ( !outCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 45, ASSERT_TYPE_ASSERT, "(outCount)", (const char *)&queryFormat, "outCount") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 46, ASSERT_TYPE_ASSERT, "(outTargets)", (const char *)&queryFormat, "outTargets") )
    __debugbreak();
  *outCount = 0;
  v7 = &s_omnvarIndices_1[0][1];
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    Data = CG_Omnvar_GetData((LocalClientNum_t)v4, *(v7 - 1));
    _RBP = *outCount;
    current = Data->current;
    v12 = current.integer & 0x3FFFFF;
    v13 = (unsigned int)current.integer >> 30;
    _R14[_RBP].usableData = (unsigned int)current.integer >> 22;
    _R14[_RBP].usableIndex = current.integer & 0x3FFFFF;
    _R14[_RBP].usableClass = v13;
    if ( (unsigned int)current.integer >> 30 )
    {
      if ( v13 != 1 )
      {
        LODWORD(v23) = (unsigned int)current.integer >> 30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected usable class %i", v23) )
          __debugbreak();
        goto LABEL_36;
      }
      if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v4, v12) )
        goto LABEL_36;
      v14 = !ScriptableCl_GetPartIsUsable((const LocalClientNum_t)v4, _R14[_RBP].usableIndex, _R14[_RBP].usableData);
      goto LABEL_34;
    }
    if ( v12 >= 0x800 )
    {
      LODWORD(v26) = 2048;
      LODWORD(v25) = current.integer & 0x3FFFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 65, ASSERT_TYPE_ASSERT, "( curTarget.usableIndex ) < ( ( 2048 ) )", "%s < %s\n\t%i, %i", "curTarget.usableIndex", "MAX_GENTITIES", v25, v26) )
        __debugbreak();
    }
    usableIndex = (int)_R14[_RBP].usableIndex;
    if ( (_DWORD)usableIndex != 2047 )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v24) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v24) )
          __debugbreak();
      }
      if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v24) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v23) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v4] )
      {
        LODWORD(v24) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v24) )
          __debugbreak();
      }
      v16 = CgEntitySystem::ms_entitySystemArray[v4];
      if ( (unsigned int)usableIndex >= 0x800 )
      {
        LODWORD(v24) = 2048;
        LODWORD(v23) = usableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v14 = (v16->m_entities[usableIndex].flags & 1) == 0;
LABEL_34:
      if ( !v14 )
      {
        v17 = CG_Omnvar_GetData((LocalClientNum_t)v4, *v7);
        v18 = v7[1];
        _R14[_RBP].boneIndex = v17->current.unsignedInteger;
        _RAX = CG_Omnvar_GetData((LocalClientNum_t)v4, v18);
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vmaxss  xmm0, xmm0, xmm6
          vmovss  dword ptr [r14+rbp*4+10h], xmm0
        }
        ++*outCount;
      }
    }
LABEL_36:
    v7 += 3;
  }
  while ( (__int64)v7 < (__int64)&unk_151156A84 );
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
CG_InitMinimizedUse
==============
*/
void CG_InitMinimizedUse(void)
{
  int v0; 
  unsigned int (*v1)[3]; 
  const char **v2; 
  unsigned int IndexByName; 
  char *fmt; 
  char dest[256]; 

  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 21, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  v0 = 0;
  v1 = s_omnvarIndices_1;
  do
  {
    v2 = s_minimizedUseOmnvarName;
    do
    {
      LODWORD(fmt) = v0;
      Com_sprintf(dest, 0x100ui64, "%s%02d", *v2, fmt);
      IndexByName = BG_Omnvar_GetIndexByName(dest);
      if ( IndexByName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 30, ASSERT_TYPE_ASSERT, "(index != ((uint)-1))", "%s\n\tFailed to find omnvar: %s", "index != OMNVAR_NONE", dest) )
        __debugbreak();
      *(_DWORD *)v1 = IndexByName;
      ++v2;
      v1 = (unsigned int (*)[3])((char *)v1 + 4);
    }
    while ( (__int64)v2 < (__int64)&MAX_TRANSIENT_WORLD_FASTFILES_300 );
    ++v0;
  }
  while ( v0 < 8 );
}

