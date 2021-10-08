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
  __int64 v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  const char *Gametype; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  const char *v12; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  int v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  __int64 unsignedInt; 
  const clientState_t *LocalClientState; 
  unsigned int TimeAsSeconds; 
  int clientIndex; 
  unsigned int v25; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned int pHoldrand; 
  AutomatedInput_Record records; 

  v2 = 0x7FFFFFFFi64;
  v3 = "br";
  v4 = 0x7FFFFFFFi64;
  v5 = "br";
  Gametype = Party_GetGametype();
  if ( !Gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v8 = Gametype - "br";
  do
  {
    v9 = v5[v8];
    v10 = v4;
    v11 = *v5++;
    --v4;
    if ( !v10 )
      break;
    if ( v9 != v11 )
    {
      v12 = Party_GetGametype();
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v13 = v12 - "br";
      while ( 1 )
      {
        v14 = v3[v13];
        v15 = v2;
        v16 = *v3++;
        --v2;
        if ( !v15 )
        {
LABEL_16:
          v17 = 0;
          goto LABEL_17;
        }
        if ( v14 != v16 )
          break;
        if ( !v14 )
          goto LABEL_16;
      }
      v17 = 1;
      if ( v14 < v16 )
        v17 = -1;
LABEL_17:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrinfil.cpp", 27, ASSERT_TYPE_ASSERT, "( I_strcmp( Party_GetGametype(), \"br\" ) ) == ( 0 )", "%s == %s\n\t%i, %i", "I_strcmp( Party_GetGametype(), \"br\" )", "0", v17, 0i64) )
        __debugbreak();
      break;
    }
  }
  while ( v9 );
  v18 = DVARINT_ATClient_BRInfil;
  if ( !DVARINT_ATClient_BRInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer >= 4u )
  {
    v19 = DVARINT_ATClient_BRInfil;
    if ( !DVARINT_ATClient_BRInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfil") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    LODWORD(v30) = 4;
    LODWORD(v29) = v19->current.integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\states\\atclient_statemachinebrinfil.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( Dvar_GetInt_Internal_DebugName( DVARINT_ATClient_BRInfil, \"ATClient_BRInfil\" ) ) < (unsigned)( INFIL_OPTION_COUNT + 1 )", "Dvar_GetInt( ATClient_BRInfil ) doesn't index INFIL_OPTION_COUNT + 1\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  v20 = DVARINT_ATClient_BRInfil;
  if ( !DVARINT_ATClient_BRInfil && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_BRInfil") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  unsignedInt = v20->current.unsignedInt;
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
    v25 = BG_irand(0, 3, &pHoldrand);
  }
  else
  {
    v25 = INFIL_BUTTONS[unsignedInt];
  }
  memset(&records.keys, 0, sizeof(records.keys));
  __asm
  {
    vmovss  xmm1, cs:__real@3e800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0C8h+records.deferTimeSeconds], xmm0
    vmovss  [rsp+0C8h+records.holdTimeSeconds], xmm1
  }
  if ( v25 )
  {
    if ( v25 >= 0xE0 )
    {
      LODWORD(v32) = 224;
      LODWORD(v31) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v31, v32) )
        __debugbreak();
    }
    records.keys.keyBits.array[(unsigned __int64)v25 >> 5] |= 0x80000000 >> (v25 & 0x1F);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rsp+0C8h+records.moveStick], xmm0
  }
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

