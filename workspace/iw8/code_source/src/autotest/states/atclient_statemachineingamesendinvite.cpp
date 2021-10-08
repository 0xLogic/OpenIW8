/*
==============
ATClient_StateMachineInGameSendInviteUpdate
==============
*/

void __fastcall ATClient_StateMachineInGameSendInviteUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  ?ATClient_StateMachineInGameSendInviteUpdate@@YAXW4LocalClientNum_t@@H@Z(localClientNum, msec);
}

/*
==============
ATClient_StateMachineInGameSendInviteTransition
==============
*/

bool __fastcall ATClient_StateMachineInGameSendInviteTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineInGameSendInviteTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineInGameSendInviteEnter
==============
*/

void __fastcall ATClient_StateMachineInGameSendInviteEnter(const LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineInGameSendInviteEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StartInputSequence
==============
*/
void ATClient_StartInputSequence(const LocalClientNum_t localClientNum, AutomatedInput_Record *records, int recordCount)
{
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  float *p_holdTimeSeconds; 

  v5 = localClientNum;
  if ( recordCount < 128 )
  {
    v6 = recordCount;
    bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records[v6].keys, 1u);
    v7 = recordCount + 1;
    records[v6].holdTimeSeconds = 0.1;
    v8 = v7;
    v9 = 2i64;
    records[v6].deferTimeSeconds = 1.0;
    p_holdTimeSeconds = &records[v7].holdTimeSeconds;
    do
    {
      if ( v8 < 128 )
      {
        bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)p_holdTimeSeconds + 4, 2u);
        ++v7;
        *p_holdTimeSeconds = 0.1;
        ++v8;
        *(p_holdTimeSeconds - 1) = 1.0;
        p_holdTimeSeconds += 13;
      }
      --v9;
    }
    while ( v9 );
    CL_Input_AddAutomatedSequence((LocalClientNum_t)v5, records, v7);
  }
  if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamesendinvite.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_completed ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_completed )\n\t%i not in [0, %i)", v5, 2) )
    __debugbreak();
  s_completed[v5] = 1;
}

/*
==============
ATClient_StateMachineInGameSendInviteEnter
==============
*/
void ATClient_StateMachineInGameSendInviteEnter(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v3; 
  __int64 v4; 
  AutomatedInput_Record records; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm0, cs:__real@3dcccccd
    vmovss  [rsp+0C8h+records.deferTimeSeconds], xmm1
    vmovss  [rsp+0C8h+records.holdTimeSeconds], xmm0
  }
  v3 = localClientNum;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.keys.keyBits.array[0] = 0x20000;
  __asm
  {
    vmovss  [rsp+0C8h+var_54], xmm1
    vmovss  [rsp+0C8h+var_50], xmm0
  }
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  v8 = 0x8000000;
  v12 = 0i64;
  v13 = 0i64;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 2);
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamesendinvite.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_completed ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_completed )\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  if ( v3 >= 2 )
  {
    j___report_rangecheckfailure(v4);
    JUMPOUT(0x14023581Fi64);
  }
  s_completed[v3] = 0;
}

/*
==============
ATClient_StateMachineInGameSendInviteTransition
==============
*/
char ATClient_StateMachineInGameSendInviteTransition(const LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  *outNewState = -2;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamesendinvite.cpp", 140, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_completed ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_completed )\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( CL_Input_AutomatedSequenceRunning((LocalClientNum_t)v2) || !s_completed[v2] )
    return 0;
  *outNewState = 0;
  return 1;
}

/*
==============
ATClient_StateMachineInGameSendInviteUpdate
==============
*/
void ATClient_StateMachineInGameSendInviteUpdate(const LocalClientNum_t localClientNum, const int msec)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const char *string; 
  __int64 v7; 
  const char *v8; 
  int PathToElement; 
  int v10; 
  __int64 v11; 
  AutomatedInput_Record *v13; 
  __int64 v14; 
  bitarray_base<bitarray<224> > *p_keys; 
  signed int v16; 
  AutomatedInput_Record *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  float *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  float *v26; 
  AutomatedInput_Record records; 
  AutomatedInput_Record v28; 
  int pathKeys[128]; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamesendinvite.cpp", 61, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_completed ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_completed )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_completed[v3] && !CL_Input_AutomatedSequenceRunning((LocalClientNum_t)v3) )
  {
    v4 = DVARSTR_ATClient_FriendToInvite;
    if ( !DVARSTR_ATClient_FriendToInvite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_FriendToInvite") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v4->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
        __debugbreak();
    }
    string = v4->current.string;
    v7 = 0i64;
    v8 = NULL;
    if ( *string )
      v8 = string;
    PathToElement = LUI_GetPathToElement((LocalClientNum_t)v3, "Friends", v8, pathKeys, 128);
    v10 = PathToElement;
    v11 = PathToElement;
    if ( PathToElement <= 0 )
    {
      if ( PathToElement || *string )
      {
        s_completed[v3] = 1;
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
        memset(&records.holdTimeSeconds, 0, 32);
        __asm { vmovss  [rsp+1C70h+records.deferTimeSeconds], xmm0 }
        memset_0(&records.moveStick, 0, 0x19DCui64);
        v18 = &v28;
        v19 = 127i64;
        do
        {
          AutomatedInput_Record::AutomatedInput_Record(v18++);
          --v19;
        }
        while ( v19 );
        v20 = I_irand(0, 5);
        v21 = v20;
        if ( v11 < v20 )
        {
          v10 = v20;
          v22 = &records.holdTimeSeconds + 13 * v11;
          do
          {
            bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)v22 + 4, 0x17u);
            *v22 = 0.1;
            *(v22 - 1) = 1.0;
            v22 += 13;
            --v21;
          }
          while ( v21 );
        }
        v23 = v10;
        v24 = v20 + I_irand(0, 5);
        if ( v10 < v24 )
        {
          v25 = v24 - v10;
          v10 += v25;
          v26 = &records.holdTimeSeconds + 13 * v23;
          do
          {
            bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)v26 + 4, 0x15u);
            *v26 = 0.1;
            *(v26 - 1) = 1.0;
            v26 += 13;
            --v25;
          }
          while ( v25 );
        }
        if ( v10 < 128 )
        {
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records.keys + 52 * v10, 1u);
          *((_DWORD *)&records.holdTimeSeconds + 13 * v10) = 1036831949;
          *((_DWORD *)&records.deferTimeSeconds + 13 * v10) = 1065353216;
          ATClient_StartInputSequence((const LocalClientNum_t)v3, &records, v10 + 1);
        }
      }
    }
    else
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      memset(&records.holdTimeSeconds, 0, 32);
      __asm { vmovss  [rsp+1C70h+records.deferTimeSeconds], xmm0 }
      memset_0(&records.moveStick, 0, 0x19DCui64);
      v13 = &v28;
      v14 = 127i64;
      do
      {
        AutomatedInput_Record::AutomatedInput_Record(v13++);
        --v14;
      }
      while ( v14 );
      if ( v10 > 0 )
      {
        p_keys = (bitarray_base<bitarray<224> > *)&records.keys;
        do
        {
          v16 = pathKeys[v7];
          *(_DWORD *)&p_keys[-4] = 1036831949;
          *(_DWORD *)&p_keys[-8] = 1065353216;
          if ( v16 > 0 )
            bitarray_base<bitarray<224>>::setBit(p_keys, v16);
          ++v7;
          p_keys += 52;
        }
        while ( v7 < v11 );
      }
      ATClient_StartInputSequence((const LocalClientNum_t)v3, &records, v10);
    }
  }
}

