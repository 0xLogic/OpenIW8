/*
==============
CG_RumbleSP_ArchiveActiveRumbles
==============
*/

void __fastcall CG_RumbleSP_ArchiveActiveRumbles(MemoryFile *memFile)
{
  ?CG_RumbleSP_ArchiveActiveRumbles@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_RumbleSP_Update
==============
*/

void __fastcall CG_RumbleSP_Update(const LocalClientNum_t localClientNum)
{
  ?CG_RumbleSP_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_RumbleSP_ArchiveActiveRumbles
==============
*/
void CG_RumbleSP_ArchiveActiveRumbles(MemoryFile *memFile)
{
  bool IsWriting; 
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  int *p_loopType; 
  const RumbleInfo *Info; 
  LocalClientNum_t v8; 
  cg_t *v9; 
  int v10; 
  int index[17]; 
  int p; 
  char v13; 
  int v14; 
  int v15; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_rumble_sp.cpp", 166, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  IsWriting = MemFile_IsWriting(memFile);
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  v5 = 32i64;
  p_loopType = (int *)&LocalClientGlobals->crData.activeRumbles[0].loopType;
  do
  {
    if ( IsWriting )
    {
      if ( *(_QWORD *)(p_loopType - 3) )
      {
        LOBYTE(p) = 1;
        MemFile_WriteData(memFile, 1ui64, &p);
        v14 = Rumble_GetIndex(*(const RumbleInfo **)(p_loopType - 3));
        MemFile_WriteData(memFile, 4ui64, &v14);
        p = *(p_loopType - 1);
        MemFile_WriteData(memFile, 4ui64, &p);
        p = *p_loopType;
        MemFile_WriteData(memFile, 4ui64, &p);
        MemFile_WriteData(memFile, 4ui64, p_loopType + 1);
        MemFile_WriteData(memFile, 0xCui64, p_loopType + 3);
      }
      else
      {
        LOBYTE(p) = 0;
        MemFile_WriteData(memFile, 1ui64, &p);
      }
    }
    else
    {
      MemFile_ReadData(memFile, 1ui64, &v13);
      if ( !v13 )
        goto LABEL_11;
      MemFile_ReadData(memFile, 4ui64, index);
      MemFile_ReadData(memFile, 4ui64, &v15);
      *(p_loopType - 1) = v15;
      MemFile_ReadData(memFile, 4ui64, &v10);
      *p_loopType = v10;
      MemFile_ReadData(memFile, 4ui64, p_loopType + 1);
      MemFile_ReadData(memFile, 0xCui64, p_loopType + 3);
      Info = Rumble_GetInfo(index[0]);
      *(_QWORD *)(p_loopType - 3) = Info;
      if ( !Info )
LABEL_11:
        CG_Rumble_InvalidateActiveRumble((ActiveRumble *)(p_loopType - 3));
    }
    p_loopType += 14;
    --v5;
  }
  while ( v5 );
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->crData.receiverPos);
  MemFile_ArchiveData(memFile, 16, &LocalClientGlobals->crData.receiverOrientation);
  MemFile_ArchiveData(memFile, 4, &LocalClientGlobals->crData.receiverEntNum);
  v8 = CL_GetOnlyLocalClientNum();
  v9 = CG_GetLocalClientGlobals(v8);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_rumble_sp.cpp", 143, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( MemFile_IsWriting(memFile) )
  {
    LOBYTE(p) = v9->doubleJumpClientData.wasUsingDoubleJumpBoost;
    MemFile_WriteData(memFile, 1ui64, &p);
  }
  else
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    v9->doubleJumpClientData.wasUsingDoubleJumpBoost = p;
  }
}

/*
==============
CG_RumbleSP_RemoveInactiveRumbles
==============
*/
void CG_RumbleSP_RemoveInactiveRumbles(LocalClientNum_t localClientNum, ActiveRumble *activeRumbleArray)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int *p_startTime; 
  __int64 v6; 
  __int64 v7; 
  CgEntitySystem *v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  _DWORD *v13; 
  int time; 
  __int64 v15; 
  __int64 v16; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_startTime = &activeRumbleArray->startTime;
  v6 = 32i64;
  do
  {
    if ( !*((_QWORD *)p_startTime - 1) )
      goto LABEL_37;
    if ( !p_startTime[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_rumble_sp.cpp", 89, ASSERT_TYPE_ASSERT, "(ar->sourceType != RUMBLESOURCE_INVALID)", (const char *)&queryFormat, "ar->sourceType != RUMBLESOURCE_INVALID") )
      __debugbreak();
    if ( p_startTime[2] != 1 )
      goto LABEL_33;
    v7 = p_startTime[4];
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v16) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v16) )
        __debugbreak();
    }
    if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v16) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v15) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v2] )
    {
      LODWORD(v16) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v16) )
        __debugbreak();
    }
    v8 = CgEntitySystem::ms_entitySystemArray[v2];
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v16) = 2048;
      LODWORD(v15) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    v9 = (__int64)&v8->m_entities[v7];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_rumble_sp.cpp", 49, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
      __debugbreak();
    v10 = (p_startTime[11] + 1) % 4;
    p_startTime[11] = v10;
    if ( (*(_BYTE *)(v9 + 648) & 1) != 0 )
      v11 = *(_DWORD *)(v9 + 736);
    else
      v11 = -1;
    p_startTime[v10 + 7] = v11;
    if ( (*(_BYTE *)(v9 + 648) & 1) != 0 )
    {
      v12 = 0i64;
      v13 = p_startTime + 7;
      while ( p_startTime[p_startTime[11] + 7] == *v13 )
      {
        ++v12;
        ++v13;
        if ( v12 >= 4 )
        {
          if ( *(_DWORD *)(v9 + 740) != p_startTime[(p_startTime[11] + 3) % 4 + 7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_rumble_sp.cpp", 68, ASSERT_TYPE_ASSERT, "(static_cast<int>( cent->prevUseCount ) == ar->useCountBuffer[(ar->useCountPointer + 4 - 1) % 4])", (const char *)&queryFormat, "static_cast<int>( cent->prevUseCount ) == ar->useCountBuffer[(ar->useCountPointer + RUMBLE_USECOUNT_BUFFER_SIZE - 1) % RUMBLE_USECOUNT_BUFFER_SIZE]") )
            __debugbreak();
          goto LABEL_33;
        }
      }
    }
    if ( !p_startTime[1] )
    {
LABEL_33:
      time = LocalClientGlobals->time;
      if ( *p_startTime + *(_DWORD *)(*((_QWORD *)p_startTime - 1) + 8i64) > time )
        goto LABEL_37;
      if ( p_startTime[1] )
      {
        *p_startTime = time;
        goto LABEL_37;
      }
    }
    CG_Rumble_InvalidateActiveRumble((ActiveRumble *)(p_startTime - 2));
LABEL_37:
    p_startTime += 14;
    --v6;
  }
  while ( v6 );
}

/*
==============
CG_RumbleSP_Update
==============
*/
void CG_RumbleSP_Update(const LocalClientNum_t localClientNum)
{
  ClientRumbleGlobals *p_crData; 
  const dvar_t *v10; 
  __int64 v11; 
  const char *v20; 
  const char *v31; 
  const char *v41; 
  vec3_t outDebugStrPos; 

  p_crData = &CG_GetLocalClientGlobals(localClientNum)->crData;
  CG_RumbleSP_RemoveInactiveRumbles(localClientNum, p_crData->activeRumbles);
  CG_Rumble_CalcActiveRumbles(localClientNum, p_crData->activeRumbles, &p_crData->receiverPos, &p_crData->receiverOrientation);
  v10 = DVARBOOL_cg_drawrumbledebug;
  if ( !DVARBOOL_cg_drawrumbledebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawrumbledebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v11 = 32i64;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm8
      vmovss  xmm8, cs:__real@3f000000
      vmovaps [rsp+0C8h+var_48], xmm9
      vmovss  xmm9, cs:__real@c0c00000
      vmovaps [rsp+0C8h+var_58], xmm10
      vmovss  xmm10, cs:__real@3a83126f
      vmovaps [rsp+0C8h+var_68], xmm11
      vmovss  xmm11, cs:__real@3f800000
      vmovaps [rsp+0C8h+var_18], xmm6
      vmovaps [rsp+0C8h+var_28], xmm7
    }
    do
    {
      if ( p_crData->activeRumbles[0].rumbleInfo )
      {
        CG_Rumble_DrawActiveRumble(localClientNum, p_crData->activeRumbles, &outDebugStrPos);
        CG_GetLocalClientGlobals(localClientNum);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm0, xmm0, dword ptr [rdx+8]
          vcvtsi2ss xmm6, xmm6, ecx
          vdivss  xmm7, xmm6, xmm0
        }
        v20 = j_va("Rumble: %s", p_crData->activeRumbles[0].rumbleInfo->name);
        __asm { vmovaps xmm2, xmm8; scale }
        CL_AddDebugString(&outDebugStrPos, &colorRed, *(float *)&_XMM2, v20, 0, 3);
        __asm
        {
          vaddss  xmm1, xmm9, dword ptr [rsp+0C8h+outDebugStrPos+8]
          vmovss  dword ptr [rsp+0C8h+outDebugStrPos+8], xmm1
          vxorps  xmm0, xmm0, xmm0
          vmulss  xmm3, xmm6, xmm10
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+8]
          vmulss  xmm1, xmm0, xmm10
          vcvtss2sd xmm2, xmm1, xmm1
          vcvtss2sd xmm1, xmm3, xmm3
          vmovq   rdx, xmm1
          vmovq   r8, xmm2
        }
        v31 = j_va("  Time: %.2f sec/%.2f sec", _RDX, _R8);
        __asm { vmovaps xmm2, xmm8; scale }
        CL_AddDebugString(&outDebugStrPos, &colorRed, *(float *)&_XMM2, v31, 0, 3);
        __asm { vaddss  xmm1, xmm9, dword ptr [rsp+0C8h+outDebugStrPos+8] }
        _RAX = p_crData->activeRumbles[0].rumbleInfo;
        __asm
        {
          vmovss  dword ptr [rsp+0C8h+outDebugStrPos+8], xmm1
          vsubss  xmm0, xmm11, xmm7
          vmovss  xmm3, dword ptr [rax+0Ch]
          vmulss  xmm1, xmm0, xmm3
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm3, xmm3
          vmovq   rdx, xmm1
          vmovq   r8, xmm2
        }
        v41 = j_va("  Dist: %.2f/%.2f", _RDX, _R8);
        __asm { vmovaps xmm2, xmm8; scale }
        CL_AddDebugString(&outDebugStrPos, &colorRed, *(float *)&_XMM2, v41, 0, 3);
      }
      p_crData = (ClientRumbleGlobals *)((char *)p_crData + 56);
      --v11;
    }
    while ( v11 );
    __asm
    {
      vmovaps xmm11, [rsp+0C8h+var_68]
      vmovaps xmm10, [rsp+0C8h+var_58]
      vmovaps xmm9, [rsp+0C8h+var_48]
      vmovaps xmm8, [rsp+0C8h+var_38]
      vmovaps xmm7, [rsp+0C8h+var_28]
      vmovaps xmm6, [rsp+0C8h+var_18]
    }
  }
}

