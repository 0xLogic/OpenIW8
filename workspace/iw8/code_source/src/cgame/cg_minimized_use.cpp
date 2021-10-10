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
  __int64 v3; 
  unsigned int *v6; 
  OmnvarData *Data; 
  __int64 v8; 
  OmnvarValue current; 
  unsigned int v10; 
  unsigned int v11; 
  bool v12; 
  __int64 usableIndex; 
  CgEntitySystem *v14; 
  OmnvarData *v15; 
  unsigned int v16; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v3 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 44, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::UI_MINIMIZED_CURSOR_HINTS )") )
    __debugbreak();
  if ( !outCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 45, ASSERT_TYPE_ASSERT, "(outCount)", (const char *)&queryFormat, "outCount") )
    __debugbreak();
  if ( !outTargets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 46, ASSERT_TYPE_ASSERT, "(outTargets)", (const char *)&queryFormat, "outTargets") )
    __debugbreak();
  *outCount = 0;
  v6 = &s_omnvarIndices_1[0][1];
  do
  {
    Data = CG_Omnvar_GetData((LocalClientNum_t)v3, *(v6 - 1));
    v8 = *outCount;
    current = Data->current;
    v10 = current.integer & 0x3FFFFF;
    v11 = (unsigned int)current.integer >> 30;
    outTargets[v8].usableData = (unsigned int)current.integer >> 22;
    outTargets[v8].usableIndex = current.integer & 0x3FFFFF;
    outTargets[v8].usableClass = v11;
    if ( (unsigned int)current.integer >> 30 )
    {
      if ( v11 != 1 )
      {
        LODWORD(v19) = (unsigned int)current.integer >> 30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected usable class %i", v19) )
          __debugbreak();
        goto LABEL_36;
      }
      if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, v10) )
        goto LABEL_36;
      v12 = !ScriptableCl_GetPartIsUsable((const LocalClientNum_t)v3, outTargets[v8].usableIndex, outTargets[v8].usableData);
      goto LABEL_34;
    }
    if ( v10 >= 0x800 )
    {
      LODWORD(v22) = 2048;
      LODWORD(v21) = current.integer & 0x3FFFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_minimized_use.cpp", 65, ASSERT_TYPE_ASSERT, "( curTarget.usableIndex ) < ( ( 2048 ) )", "%s < %s\n\t%i, %i", "curTarget.usableIndex", "MAX_GENTITIES", v21, v22) )
        __debugbreak();
    }
    usableIndex = (int)outTargets[v8].usableIndex;
    if ( (_DWORD)usableIndex != 2047 )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v20) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v20) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v20) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v19) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v3] )
      {
        LODWORD(v20) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v20) )
          __debugbreak();
      }
      v14 = CgEntitySystem::ms_entitySystemArray[v3];
      if ( (unsigned int)usableIndex >= 0x800 )
      {
        LODWORD(v20) = 2048;
        LODWORD(v19) = usableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v12 = (v14->m_entities[usableIndex].flags & 1) == 0;
LABEL_34:
      if ( !v12 )
      {
        v15 = CG_Omnvar_GetData((LocalClientNum_t)v3, *v6);
        v16 = v6[1];
        outTargets[v8].boneIndex = v15->current.unsignedInteger;
        _XMM0 = CG_Omnvar_GetData((LocalClientNum_t)v3, v16)->current.unsignedInteger;
        __asm { vmaxss  xmm0, xmm0, xmm6 }
        outTargets[v8].displayDistance = *(float *)&_XMM0;
        ++*outCount;
      }
    }
LABEL_36:
    v6 += 3;
  }
  while ( (__int64)v6 < (__int64)&unk_151156A84 );
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

