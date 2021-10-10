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
  unsigned __int64 v1; 
  __int64 v2; 
  AutomatedInput_Record records; 
  float v4; 
  float v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  records.deferTimeSeconds = FLOAT_0_5;
  records.holdTimeSeconds = FLOAT_0_1;
  v1 = localClientNum;
  memset(&records.keys.keyBits.array[1], 0, 40);
  records.keys.keyBits.array[0] = 0x20000;
  v4 = FLOAT_0_5;
  v5 = FLOAT_0_1;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  v6 = 0x8000000;
  v10 = 0i64;
  v11 = 0i64;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 2);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamesendinvite.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_completed ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_completed )\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  if ( v1 >= 2 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x14023581Fi64);
  }
  s_completed[v1] = 0;
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
  __int64 v2; 
  const dvar_t *v3; 
  unsigned int flags; 
  const char *string; 
  __int64 v6; 
  const char *v7; 
  int PathToElement; 
  int v9; 
  __int64 v10; 
  AutomatedInput_Record *v11; 
  __int64 v12; 
  bitarray_base<bitarray<224> > *p_keys; 
  signed int v14; 
  AutomatedInput_Record *v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  float *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  float *v23; 
  AutomatedInput_Record records; 
  AutomatedInput_Record v25; 
  int pathKeys[128]; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachineingamesendinvite.cpp", 61, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_completed ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_completed )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_completed[v2] && !CL_Input_AutomatedSequenceRunning((LocalClientNum_t)v2) )
  {
    v3 = DVARSTR_ATClient_FriendToInvite;
    if ( !DVARSTR_ATClient_FriendToInvite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_FriendToInvite") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v3->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v3->name) )
        __debugbreak();
    }
    string = v3->current.string;
    v6 = 0i64;
    v7 = NULL;
    if ( *string )
      v7 = string;
    PathToElement = LUI_GetPathToElement((LocalClientNum_t)v2, "Friends", v7, pathKeys, 128);
    v9 = PathToElement;
    v10 = PathToElement;
    if ( PathToElement <= 0 )
    {
      if ( PathToElement || *string )
      {
        s_completed[v2] = 1;
      }
      else
      {
        memset(&records.holdTimeSeconds, 0, 32);
        records.deferTimeSeconds = 0.0;
        memset_0(&records.moveStick, 0, 0x19DCui64);
        v15 = &v25;
        v16 = 127i64;
        do
        {
          AutomatedInput_Record::AutomatedInput_Record(v15++);
          --v16;
        }
        while ( v16 );
        v17 = I_irand(0, 5);
        v18 = v17;
        if ( v10 < v17 )
        {
          v9 = v17;
          v19 = &records.holdTimeSeconds + 13 * v10;
          do
          {
            bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)v19 + 4, 0x17u);
            *v19 = 0.1;
            *(v19 - 1) = 1.0;
            v19 += 13;
            --v18;
          }
          while ( v18 );
        }
        v20 = v9;
        v21 = v17 + I_irand(0, 5);
        if ( v9 < v21 )
        {
          v22 = v21 - v9;
          v9 += v22;
          v23 = &records.holdTimeSeconds + 13 * v20;
          do
          {
            bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)v23 + 4, 0x15u);
            *v23 = 0.1;
            *(v23 - 1) = 1.0;
            v23 += 13;
            --v22;
          }
          while ( v22 );
        }
        if ( v9 < 128 )
        {
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&records.keys + 52 * v9, 1u);
          *((_DWORD *)&records.holdTimeSeconds + 13 * v9) = 1036831949;
          *((_DWORD *)&records.deferTimeSeconds + 13 * v9) = 1065353216;
          ATClient_StartInputSequence((const LocalClientNum_t)v2, &records, v9 + 1);
        }
      }
    }
    else
    {
      memset(&records.holdTimeSeconds, 0, 32);
      records.deferTimeSeconds = 0.0;
      memset_0(&records.moveStick, 0, 0x19DCui64);
      v11 = &v25;
      v12 = 127i64;
      do
      {
        AutomatedInput_Record::AutomatedInput_Record(v11++);
        --v12;
      }
      while ( v12 );
      if ( v9 > 0 )
      {
        p_keys = (bitarray_base<bitarray<224> > *)&records.keys;
        do
        {
          v14 = pathKeys[v6];
          *(_DWORD *)&p_keys[-4] = 1036831949;
          *(_DWORD *)&p_keys[-8] = 1065353216;
          if ( v14 > 0 )
            bitarray_base<bitarray<224>>::setBit(p_keys, v14);
          ++v6;
          p_keys += 52;
        }
        while ( v6 < v10 );
      }
      ATClient_StartInputSequence((const LocalClientNum_t)v2, &records, v9);
    }
  }
}

