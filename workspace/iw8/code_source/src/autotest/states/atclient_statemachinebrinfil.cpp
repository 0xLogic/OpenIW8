/*
==============
ATClient_StateMachineBRInfilEnter
==============
*/

void __fastcall ATClient_StateMachineBRInfilEnter(LocalClientNum_t localClientNum)
{
  ?ATClient_StateMachineBRInfilEnter@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ATClient_StateMachineBRInfilTransition
==============
*/

bool __fastcall ATClient_StateMachineBRInfilTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  return ?ATClient_StateMachineBRInfilTransition@@YA_NW4LocalClientNum_t@@AEAI@Z(localClientNum, outNewState);
}

/*
==============
ATClient_StateMachineBRInfilEnter
==============
*/
void ATClient_StateMachineBRInfilEnter(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const char *v2; 
  __int64 v3; 
  const char *v4; 
  const char *Gametype; 
  signed __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  const char *v11; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  int v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  __int64 unsignedInt; 
  const clientState_t *LocalClientState; 
  unsigned int TimeAsSeconds; 
  int clientIndex; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int pHoldrand; 
  AutomatedInput_Record records; 

  v1 = 0x7FFFFFFFi64;
  v2 = "br";
  v3 = 0x7FFFFFFFi64;
  v4 = "br";
  Gametype = Party_GetGametype();
  if ( !Gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v7 = Gametype - "br";
  do
  {
    v8 = v4[v7];
    v9 = v3;
    v10 = *v4++;
    --v3;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = Party_GetGametype();
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v12 = v11 - "br";
      while ( 1 )
      {
        v13 = v2[v12];
        v14 = v1;
        v15 = *v2++;
        --v1;
        if ( !v14 )
        {
LABEL_16:
          v16 = 0;
          goto LABEL_17;
        }
        if ( v13 != v15 )
          break;
        if ( !v13 )
          goto LABEL_16;
      }
      v16 = 1;
      if ( v13 < v15 )
        v16 = -1;
LABEL_17:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrinfil.cpp", 27, ASSERT_TYPE_ASSERT, "( I_strcmp( Party_GetGametype(), \"br\" ) ) == ( 0 )", "%s == %s\n\t%i, %i", "I_strcmp( Party_GetGametype(), \"br\" )", "0", v16, 0i64) )
        __debugbreak();
      break;
    }
  }
  while ( v8 );
  v17 = DVARINT_ATClient_BRInfil;
  if ( !DVARINT_ATClient_BRInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer >= 4u )
  {
    v18 = DVARINT_ATClient_BRInfil;
    if ( !DVARINT_ATClient_BRInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfil") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    LODWORD(v26) = 4;
    LODWORD(v25) = v18->current.integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrinfil.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( Dvar_GetInt_Internal_DebugName( DVARINT_ATClient_BRInfil, \"ATClient_BRInfil\" ) ) < (unsigned)( INFIL_OPTION_COUNT + 1 )", "Dvar_GetInt( ATClient_BRInfil ) doesn't index INFIL_OPTION_COUNT + 1\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  v19 = DVARINT_ATClient_BRInfil;
  if ( !DVARINT_ATClient_BRInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  unsignedInt = v19->current.unsignedInt;
  if ( (_DWORD)unsignedInt == 3 )
  {
    LocalClientState = ATClient_GetLocalClientState(localClientNum);
    TimeAsSeconds = Sys_GetTimeAsSeconds();
    pHoldrand = TimeAsSeconds;
    if ( LocalClientState )
      clientIndex = LocalClientState->clientIndex;
    else
      clientIndex = 0;
    pHoldrand = clientIndex + TimeAsSeconds;
    BG_srand(&pHoldrand);
    v24 = BG_irand(0, 3, &pHoldrand);
  }
  else
  {
    v24 = INFIL_BUTTONS[unsignedInt];
  }
  memset(&records.keys, 0, sizeof(records.keys));
  records.deferTimeSeconds = 0.0;
  records.holdTimeSeconds = FLOAT_0_25;
  if ( v24 )
  {
    if ( v24 >= 0xE0 )
    {
      LODWORD(v28) = 224;
      LODWORD(v27) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v28) )
        __debugbreak();
    }
    records.keys.keyBits.array[(unsigned __int64)v24 >> 5] |= 0x80000000 >> (v24 & 0x1F);
  }
  *(_OWORD *)records.moveStick.v = 0i64;
  CL_Input_AddAutomatedSequence(localClientNum, &records, 1);
}

/*
==============
ATClient_StateMachineBRInfilTransition
==============
*/
char ATClient_StateMachineBRInfilTransition(LocalClientNum_t localClientNum, unsigned int *outNewState)
{
  *outNewState = 4;
  return 1;
}

