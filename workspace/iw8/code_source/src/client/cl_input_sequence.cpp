/*
==============
Sequence_OffhandPrimaryDetonate_EndTime
==============
*/

int __fastcall Sequence_OffhandPrimaryDetonate_EndTime()
{
  return ?Sequence_OffhandPrimaryDetonate_EndTime@@YAHXZ();
}

/*
==============
Sequence_SuperSprint_IsValid
==============
*/

bool __fastcall Sequence_SuperSprint_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  return ?Sequence_SuperSprint_IsValid@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, seqIndex);
}

/*
==============
Sequence_OffhandSecondaryDetonate_IsValid_DoubleClick
==============
*/

bool __fastcall Sequence_OffhandSecondaryDetonate_IsValid_DoubleClick(const LocalClientNum_t localClientNum, int seqIndex)
{
  return ?Sequence_OffhandSecondaryDetonate_IsValid_DoubleClick@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, seqIndex);
}

/*
==============
CL_Input_SequenceUpdate
==============
*/

void __fastcall CL_Input_SequenceUpdate(const LocalClientNum_t localClientNum)
{
  ?CL_Input_SequenceUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_AutoForward_EndTime
==============
*/

int __fastcall Sequence_AutoForward_EndTime()
{
  return ?Sequence_AutoForward_EndTime@@YAHXZ();
}

/*
==============
Sequence_SuperSprint_IsValid_DoubleClick
==============
*/

bool __fastcall Sequence_SuperSprint_IsValid_DoubleClick(const LocalClientNum_t localClientNum, int seqIndex)
{
  return ?Sequence_SuperSprint_IsValid_DoubleClick@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, seqIndex);
}

/*
==============
Sequence_OffhandSecondaryDetonate_EndTime
==============
*/

int __fastcall Sequence_OffhandSecondaryDetonate_EndTime()
{
  return ?Sequence_OffhandSecondaryDetonate_EndTime@@YAHXZ();
}

/*
==============
Sequence_DoubleAds_IsValid
==============
*/

bool __fastcall Sequence_DoubleAds_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  return ?Sequence_DoubleAds_IsValid@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, seqIndex);
}

/*
==============
CL_Input_SequenceGetEndTime
==============
*/

int __fastcall CL_Input_SequenceGetEndTime(const ClInputSequenceDef *def)
{
  return ?CL_Input_SequenceGetEndTime@@YAHPEBUClInputSequenceDef@@@Z(def);
}

/*
==============
Sequence_SuperSprint_EndTime
==============
*/

int __fastcall Sequence_SuperSprint_EndTime()
{
  return ?Sequence_SuperSprint_EndTime@@YAHXZ();
}

/*
==============
Sequence_OffhandPrimaryDetonate_Activate
==============
*/

void __fastcall Sequence_OffhandPrimaryDetonate_Activate(const LocalClientNum_t localClientNum)
{
  ?Sequence_OffhandPrimaryDetonate_Activate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_OffhandSecondaryDetonate_Activate
==============
*/

void __fastcall Sequence_OffhandSecondaryDetonate_Activate(const LocalClientNum_t localClientNum)
{
  ?Sequence_OffhandSecondaryDetonate_Activate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_SuperSprint_Activate
==============
*/

void __fastcall Sequence_SuperSprint_Activate(const LocalClientNum_t localClientNum)
{
  ?Sequence_SuperSprint_Activate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_KCode_Activate
==============
*/

void __fastcall Sequence_KCode_Activate(const LocalClientNum_t localClientNum)
{
  ?Sequence_KCode_Activate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_AutoForward_Activate
==============
*/

void __fastcall Sequence_AutoForward_Activate(const LocalClientNum_t localClientNum)
{
  ?Sequence_AutoForward_Activate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_AutoForward_IsValid
==============
*/

bool __fastcall Sequence_AutoForward_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  return ?Sequence_AutoForward_IsValid@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, seqIndex);
}

/*
==============
CL_Input_SequenceValidate
==============
*/

void CL_Input_SequenceValidate(void)
{
  ?CL_Input_SequenceValidate@@YAXXZ();
}

/*
==============
Sequence_OffhandPrimaryDetonate_IsValid_DoubleClick
==============
*/

bool __fastcall Sequence_OffhandPrimaryDetonate_IsValid_DoubleClick(const LocalClientNum_t localClientNum, int seqIndex)
{
  return ?Sequence_OffhandPrimaryDetonate_IsValid_DoubleClick@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, seqIndex);
}

/*
==============
Sequence_DoubleAds_Activate
==============
*/

void __fastcall Sequence_DoubleAds_Activate(const LocalClientNum_t localClientNum)
{
  ?Sequence_DoubleAds_Activate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Sequence_DoubleAds_IsValid
==============
*/
bool Sequence_DoubleAds_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  if ( CL_Input_IsGamepadEnabled(localClientNum) )
    return GamerProfile_GetMountButton(localClientNum) == 2;
  else
    return GamerProfile_GetMountButtonKBM(localClientNum) == 2;
}

/*
==============
Sequence_DoubleAds_Activate
==============
*/
void Sequence_DoubleAds_Activate(const LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
    Client->isDoubleAdsMountHeld = 1;
}

/*
==============
Sequence_SuperSprint_IsValid
==============
*/
char Sequence_SuperSprint_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v2; 
  __int64 v3; 
  const dvar_t *v5; 
  ClActiveClient *Client; 
  ClActiveClient *v7; 
  const playerState_s *v8; 
  const dvar_t *v9; 
  unsigned int nextCommand; 
  const ClActiveClient *v11; 
  int CmdNumber; 
  bool v13; 
  int commandTime; 
  double Float_Internal_DebugName; 
  double v16; 
  __int64 v18; 
  __int64 v19; 
  vec3_t outMove; 
  usercmd_s ucmd; 

  v2 = DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint;
  v3 = seqIndex;
  if ( !DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableGamepadSingleTapSuperSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
  {
    v5 = DCONST_DVARINT_superSprintControlType;
    if ( !DCONST_DVARINT_superSprintControlType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintControlType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer == 1 )
    {
      Client = ClActiveClient::GetClient(localClientNum);
      v7 = Client;
      if ( Client )
      {
        v8 = Client->GetPlayerState(Client);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 557, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v9 = DCONST_DVARMPBOOL_superSprintEnable;
        if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        if ( v9->current.enabled && !BG_IsSuperSprinting(v8) )
        {
          if ( v7->cmdSequenceState[v3].nextCommand >= 0x10u )
          {
            LODWORD(v19) = 16;
            LODWORD(v18) = v7->cmdSequenceState[v3].nextCommand;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          nextCommand = v7->cmdSequenceState[v3].nextCommand;
          if ( nextCommand > 1 )
          {
LABEL_39:
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_superSprintFromWalk, "superSprintFromWalk") || nextCommand != 1 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v8->pm_flags, ACTIVE, 0x14u) || v8->serverTime - v8->sprintState.lastSprintEnd < SUPER_SPRINT_FROM_SPRINT_TIME_THRESHOLD_MS )
              return 1;
          }
          else
          {
            v11 = ClActiveClient::GetClient(localClientNum);
            CmdNumber = ClActiveClient_GetCmdNumber(v11);
            if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
            {
              v13 = CmdNumber == 0;
              if ( CmdNumber < 0 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 584, ASSERT_TYPE_ASSERT, "(current >= 0)", (const char *)&queryFormat, "current >= 0") )
                  __debugbreak();
                v13 = CmdNumber == 0;
              }
              if ( !v13 )
              {
                commandTime = ucmd.commandTime;
                do
                {
                  if ( !CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
                    break;
                  BG_GetNormalizedMovementCmd(&ucmd, &outMove);
                  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_superSprintControlMaxRightDeflection, "superSprintControlMaxRightDeflection");
                  if ( COERCE_FLOAT(LODWORD(outMove.v[1]) & _xmm) > *(float *)&Float_Internal_DebugName )
                    break;
                  if ( outMove.v[0] > SUPER_SPRINT_FORWARD_THRESHOLD )
                    goto LABEL_39;
                  if ( ucmd.commandTime > commandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 611, ASSERT_TYPE_ASSERT, "(cmd.commandTime <= currCmd.commandTime)", (const char *)&queryFormat, "cmd.commandTime <= currCmd.commandTime") )
                    __debugbreak();
                  v16 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_superSprintControlMaxInputTime, "superSprintControlMaxInputTime");
                  if ( commandTime - ucmd.commandTime > (int)(float)(*(float *)&v16 * 1000.0) )
                    break;
                  --CmdNumber;
                }
                while ( CmdNumber );
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
Sequence_SuperSprint_Activate
==============
*/
void Sequence_SuperSprint_Activate(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  ClActiveClient *Client; 

  v1 = DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint;
  if ( !DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableGamepadSingleTapSuperSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    if ( Client )
      Client->triggerSuperSprint = 1;
  }
}

/*
==============
Sequence_SuperSprint_IsValid_DoubleClick
==============
*/
bool Sequence_SuperSprint_IsValid_DoubleClick(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v2; 
  const dvar_t *v4; 
  ClActiveClient *Client; 
  const playerState_s *v6; 

  v2 = DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint;
  if ( !DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableGamepadSingleTapSuperSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled || !CL_Input_IsGamepadEnabled(localClientNum) )
    return 0;
  v4 = DCONST_DVARINT_superSprintControlType;
  if ( !DCONST_DVARINT_superSprintControlType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintControlType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
    return 0;
  Client = ClActiveClient::GetClient(localClientNum);
  if ( !Client )
    return 0;
  v6 = Client->GetPlayerState(Client);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_superSprintEnable, "superSprintEnable") && !BG_IsSuperSprinting(v6);
}

/*
==============
Sequence_SuperSprint_EndTime
==============
*/
__int64 Sequence_SuperSprint_EndTime()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_superSprintDoubleClickInputTime;
  if ( !DCONST_DVARFLT_superSprintDoubleClickInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintDoubleClickInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return (unsigned int)(int)(float)(v0->current.value * 1000.0);
}

/*
==============
Sequence_OffhandPrimaryDetonate_Activate
==============
*/
void Sequence_OffhandPrimaryDetonate_Activate(const LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
    Client->detonateOffhandPrimary = 1;
}

/*
==============
Sequence_OffhandPrimaryDetonate_IsValid_DoubleClick
==============
*/
__int64 Sequence_OffhandPrimaryDetonate_IsValid_DoubleClick(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_offhandDetonateDoubleClickEnable;
  if ( !DVARBOOL_offhandDetonateDoubleClickEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "offhandDetonateDoubleClickEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.color[0];
}

/*
==============
Sequence_OffhandPrimaryDetonate_EndTime
==============
*/
__int64 Sequence_OffhandPrimaryDetonate_EndTime()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_offhandDetonateDoubleClickInputTime;
  if ( !DCONST_DVARFLT_offhandDetonateDoubleClickInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "offhandDetonateDoubleClickInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return (unsigned int)(int)(float)(v0->current.value * 1000.0);
}

/*
==============
Sequence_OffhandSecondaryDetonate_Activate
==============
*/
void Sequence_OffhandSecondaryDetonate_Activate(const LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
    Client->detonateOffhandSecondary = 1;
}

/*
==============
Sequence_OffhandSecondaryDetonate_IsValid_DoubleClick
==============
*/
__int64 Sequence_OffhandSecondaryDetonate_IsValid_DoubleClick(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_offhandDetonateDoubleClickEnable;
  if ( !DVARBOOL_offhandDetonateDoubleClickEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "offhandDetonateDoubleClickEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.color[0];
}

/*
==============
Sequence_OffhandSecondaryDetonate_EndTime
==============
*/
__int64 Sequence_OffhandSecondaryDetonate_EndTime()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_offhandDetonateDoubleClickInputTime;
  if ( !DCONST_DVARFLT_offhandDetonateDoubleClickInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "offhandDetonateDoubleClickInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return (unsigned int)(int)(float)(v0->current.value * 1000.0);
}

/*
==============
Sequence_AutoForward_IsValid
==============
*/
char Sequence_AutoForward_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v2; 
  __int64 v3; 
  int ControllerFromClient; 
  ClActiveClient *Client; 
  const ClActiveClient *v7; 
  int CmdNumber; 
  bool v9; 
  int commandTime; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int Int_Internal_DebugName; 
  __int64 v15; 
  __int64 v16; 
  vec3_t outMove; 
  usercmd_s ucmd; 

  v2 = DVARBOOL_autoForwardEnable;
  v3 = seqIndex;
  if ( !DVARBOOL_autoForwardEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "autoForwardEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( GamerProfile_GetAutoForwardInputSequenceEnable(ControllerFromClient) )
    {
      Client = ClActiveClient::GetClient(localClientNum);
      if ( Client->cmdSequenceState[v3].nextCommand >= 0x10u )
      {
        LODWORD(v16) = 16;
        LODWORD(v15) = Client->cmdSequenceState[v3].nextCommand;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 690, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( Client->cmdSequenceState[v3].nextCommand > 1u )
        return 1;
      v7 = ClActiveClient::GetClient(localClientNum);
      CmdNumber = ClActiveClient_GetCmdNumber(v7);
      if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
      {
        v9 = CmdNumber == 0;
        if ( CmdNumber < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 703, ASSERT_TYPE_ASSERT, "(current >= 0)", (const char *)&queryFormat, "current >= 0") )
            __debugbreak();
          v9 = CmdNumber == 0;
        }
        if ( !v9 )
        {
          commandTime = ucmd.commandTime;
          while ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
          {
            BG_GetNormalizedMovementCmd(&ucmd, &outMove);
            v11 = DCONST_DVARFLT_cl_autoForwardControlMaxRightDeflection;
            if ( !DCONST_DVARFLT_cl_autoForwardControlMaxRightDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardControlMaxRightDeflection") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v11);
            if ( COERCE_FLOAT(LODWORD(outMove.v[1]) & _xmm) > v11->current.value )
              break;
            v12 = DCONST_DVARFLT_cl_autoForwardControlMinForwardDeflection;
            if ( !DCONST_DVARFLT_cl_autoForwardControlMinForwardDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardControlMinForwardDeflection") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v12);
            if ( outMove.v[0] > v12->current.value )
              return 1;
            if ( ucmd.commandTime > commandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 730, ASSERT_TYPE_ASSERT, "(cmd.commandTime <= currCmd.commandTime)", (const char *)&queryFormat, "cmd.commandTime <= currCmd.commandTime") )
              __debugbreak();
            Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_autoForwardDoubleForwardInputTime, "cl_autoForwardDoubleForwardInputTime");
            if ( commandTime - ucmd.commandTime <= Int_Internal_DebugName )
            {
              if ( --CmdNumber )
                continue;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
Sequence_AutoForward_Activate
==============
*/
void Sequence_AutoForward_Activate(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  ClActiveClient *Client; 

  v1 = DVARBOOL_autoForwardEnable;
  if ( !DVARBOOL_autoForwardEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "autoForwardEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    if ( Client )
      Client->autoForward = !Client->autoForward;
  }
}

/*
==============
Sequence_AutoForward_EndTime
==============
*/
__int64 Sequence_AutoForward_EndTime()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARINT_cl_autoForwardDoubleForwardInputTime;
  if ( !DCONST_DVARINT_cl_autoForwardDoubleForwardInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardDoubleForwardInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
Sequence_KCode_Activate
==============
*/
void Sequence_KCode_Activate(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CL_Input_SequenceGetEndTime
==============
*/
__int64 CL_Input_SequenceGetEndTime(const ClInputSequenceDef *def)
{
  __int64 (*endTimeOverride)(void); 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 203, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  endTimeOverride = (__int64 (*)(void))def->endTimeOverride;
  if ( endTimeOverride )
    return endTimeOverride();
  else
    return (unsigned int)def->timeWindowEndMs;
}

/*
==============
CL_Input_SequenceUpdate
==============
*/
void CL_Input_SequenceUpdate(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  LocalClientNum_t v3; 
  ClActiveClient *Client; 
  ClActiveClient *v5; 
  ClInputSequenceVirtualAxisKeyState *cmdSequenceAxisKeys; 
  double v8; 
  float v9; 
  int v10; 
  float v13; 
  const dvar_t *v14; 
  float v17; 
  double v18; 
  __int64 v19; 
  unsigned int *cmdSequenceState; 
  void (__fastcall **p_activate)(const LocalClientNum_t); 
  __int64 v22; 
  signed int v23; 
  void (__fastcall *v24)(const LocalClientNum_t); 
  int v25; 
  signed int v26; 
  __int64 v27; 
  signed int v28; 
  ClActiveClient *v29; 
  unsigned __int64 i; 
  __int64 v31; 
  signed int downtime; 
  unsigned __int8 (__fastcall *v33)(_QWORD, _QWORD); 
  unsigned int v34; 
  bool v35; 
  bool v36; 
  bool v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int *v40; 
  void (__fastcall **v41)(const LocalClientNum_t); 
  __int64 v42; 
  signed int v44; 
  signed int v45; 
  __int64 v46; 

  v3 = localClientNum;
  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
  {
    v5 = ClActiveClient::GetClient(v3);
    if ( !v5 )
      goto LABEL_28;
    cmdSequenceAxisKeys = v5->cmdSequenceAxisKeys;
    *(double *)&v1 = CL_GamepadAxisValue(v3, 1);
    _XMM10 = v1;
    v8 = CL_GamepadAxisValue(v3, 0);
    v9 = *(float *)&v8;
    v10 = 68;
    _XMM8 = 0i64;
    __asm { vxorpd  xmm15, xmm15, xmm15 }
    while ( 1 )
    {
      v13 = 0.0;
      if ( v10 == 68 )
        break;
      switch ( v10 )
      {
        case 'E':
          LODWORD(v17) = _XMM10 ^ _xmm;
          goto LABEL_19;
        case 'F':
          LODWORD(v17) = LODWORD(v9) ^ _xmm;
          goto LABEL_19;
        case 'G':
          v17 = v9;
          goto LABEL_19;
        case 'H':
          v14 = DCONST_DVARFLT_superSprintControlForwardDeflection;
          if ( !DCONST_DVARFLT_superSprintControlForwardDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintControlForwardDeflection") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v14);
          __asm
          {
            vcmpltss xmm1, xmm10, xmm0
            vblendvps xmm0, xmm8, xmm9, xmm1
          }
          v13 = *(float *)&_XMM0;
          goto LABEL_23;
      }
      LODWORD(v38) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 291, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected virtAxisKb: %i", v38) )
        goto LABEL_22;
LABEL_23:
      if ( cmdSequenceAxisKeys->value < 0.80000001 && v13 >= 0.80000001 )
        cmdSequenceAxisKeys->downtime = com_frameTime;
      cmdSequenceAxisKeys->value = v13;
      ++cmdSequenceAxisKeys;
      if ( ++v10 >= 73 )
      {
        v3 = localClientNum;
LABEL_28:
        v19 = 0i64;
        v42 = 7i64;
        cmdSequenceState = (unsigned int *)Client->cmdSequenceState;
        v46 = 0i64;
        p_activate = &g_inputSequences[0].activate;
        v40 = cmdSequenceState;
        v41 = &g_inputSequences[0].activate;
        while ( 2 )
        {
          v22 = cmdSequenceState[1];
          v23 = v22 + *((_DWORD *)p_activate - 4);
          v24 = p_activate[1];
          v45 = v23;
          if ( v24 )
          {
            v25 = ((__int64 (__fastcall *)(__int64, const char *))v24)(v22, "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)");
            LODWORD(v22) = cmdSequenceState[1];
          }
          else
          {
            v25 = *((_DWORD *)p_activate - 3);
          }
          v26 = v22 + v25;
          v44 = v22 + v25;
          if ( *cmdSequenceState >= 0x10 )
          {
            LODWORD(v39) = 16;
            LODWORD(v38) = *cmdSequenceState;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v38, v39) )
              __debugbreak();
          }
          v27 = (__int64)&p_activate[2 * (int)*cmdSequenceState + 2];
          v28 = 0;
          v29 = ClActiveClient::GetClient(v3);
          if ( v29 )
          {
            for ( i = 0i64; i < 4; ++i )
            {
              v31 = *(int *)(v27 + 4 * i);
              if ( (int)v31 < 0 )
                break;
              if ( (unsigned int)v31 >= 0x49 )
              {
                LODWORD(v39) = 73;
                LODWORD(v38) = *(_DWORD *)(v27 + 4 * i);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 321, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( NUM_EXTENDED_BUTTONS )", "key doesn't index NUM_EXTENDED_BUTTONS\n\t%i not in [0, %i)", v38, v39) )
                  __debugbreak();
              }
              if ( (int)v31 < 68 )
              {
                if ( (unsigned int)v31 >= 0x44 )
                {
                  LODWORD(v39) = 68;
                  LODWORD(v38) = v31;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( NUM_BUTTONS )", "key doesn't index NUM_BUTTONS\n\t%i not in [0, %i)", v38, v39) )
                    __debugbreak();
                }
                downtime = g_playersKb[localClientNum][v31].downtime;
              }
              else
              {
                if ( (unsigned int)(v31 - 68) >= 5 )
                {
                  LODWORD(v39) = 5;
                  LODWORD(v38) = v31 - 68;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( axisKey ) < (unsigned)( (5) )", "axisKey doesn't index INPUT_SEQUENCE_VIRTUAL_AXIS_KEYS\n\t%i not in [0, %i)", v38, v39) )
                    __debugbreak();
                }
                downtime = *((_DWORD *)v29 + 2 * v31 - 39);
              }
              if ( v28 >= downtime )
                downtime = v28;
              v28 = downtime;
            }
            cmdSequenceState = v40;
            p_activate = v41;
            v26 = v44;
            v23 = v45;
            v19 = v46;
          }
          v33 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))*(p_activate - 1);
          v3 = localClientNum;
          if ( !v33 || v33((unsigned int)localClientNum, (unsigned int)v19) )
          {
            v34 = *cmdSequenceState;
            v35 = *cmdSequenceState && v26 < (int)com_frameTime;
          }
          else
          {
            v34 = *cmdSequenceState;
            v35 = 1;
          }
          v36 = v23 < v28 && (!v34 || v28 <= v26);
          if ( v35 )
          {
            *cmdSequenceState = 0;
            goto LABEL_75;
          }
          if ( v36 )
          {
            *cmdSequenceState = v34 + 1;
            cmdSequenceState[1] = com_frameTime;
            if ( (int)(v34 + 1) < 16 && SLODWORD(p_activate[2 * (int)v34 + 4]) >= 0 )
            {
              ++v34;
              goto LABEL_72;
            }
            (*p_activate)(localClientNum);
            *cmdSequenceState = 0;
          }
          else
          {
LABEL_72:
            if ( v34 >= 0x10 )
            {
              LODWORD(v39) = 16;
              LODWORD(v38) = v34;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 386, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v38, v39) )
                __debugbreak();
            }
          }
LABEL_75:
          ++v19;
          cmdSequenceState += 2;
          v46 = v19;
          p_activate += 37;
          v40 = cmdSequenceState;
          v37 = v42-- == 1;
          v41 = p_activate;
          if ( v37 )
            return;
          continue;
        }
      }
    }
    v17 = *(float *)&_XMM10;
LABEL_19:
    v18 = I_fclamp(v17, 0.0, 1.0);
    if ( *(float *)&v18 >= 0.0 )
    {
      v13 = *(float *)&v18;
      if ( *(float *)&v18 <= 1.0 )
        goto LABEL_23;
    }
    v13 = *(float *)&v18;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 236, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( value ) && ( value ) <= ( 1.0f )", "value not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v18, *(double *)&_XMM15, DOUBLE_1_0) )
      goto LABEL_23;
LABEL_22:
    __debugbreak();
    goto LABEL_23;
  }
}

/*
==============
CL_Input_SequenceValidate
==============
*/
void CL_Input_SequenceValidate(void)
{
  int *p_timeWindowEndMs; 
  __int64 v1; 
  const char *v2; 
  const char *v3; 
  __int64 (__fastcall *v4)(const char *, const char *); 
  int v5; 
  int v6; 
  __int64 (*v7)(void); 
  int v8; 
  int *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  p_timeWindowEndMs = &g_inputSequences[0].timeWindowEndMs;
  v1 = 7i64;
  v2 = "def->debugName";
  v3 = "%s != %s\n\t%p, %p";
  do
  {
    if ( !*(_QWORD *)(p_timeWindowEndMs - 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 219, ASSERT_TYPE_ASSERT, "( def->debugName ) != ( nullptr )", "%s != %s\n\t%p, %p", "def->debugName", "nullptr", NULL, NULL) )
      __debugbreak();
    v4 = *(__int64 (__fastcall **)(const char *, const char *))(p_timeWindowEndMs + 5);
    if ( v4 )
      v5 = v4(v2, v3);
    else
      v5 = *p_timeWindowEndMs;
    v6 = *(p_timeWindowEndMs - 1);
    if ( v6 >= v5 )
    {
      v7 = *(__int64 (**)(void))(p_timeWindowEndMs + 5);
      if ( v7 )
      {
        v8 = v7();
        v6 = *(p_timeWindowEndMs - 1);
      }
      else
      {
        v8 = *p_timeWindowEndMs;
      }
      LODWORD(v12) = v8;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 220, ASSERT_TYPE_ASSERT, "( def->timeWindowStartMs ) < ( CL_Input_SequenceGetEndTime( def ) )", "%s < %s\n\t%i, %i", "def->timeWindowStartMs", "CL_Input_SequenceGetEndTime( def )", v11, v12) )
        __debugbreak();
    }
    if ( !*(_QWORD *)(p_timeWindowEndMs + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 221, ASSERT_TYPE_ASSERT, "(def->activate != nullptr)", (const char *)&queryFormat, "def->activate != nullptr") )
      __debugbreak();
    v9 = p_timeWindowEndMs + 7;
    v10 = 2i64;
    do
    {
      if ( *v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 227, ASSERT_TYPE_ASSERT, "(isValidCommand)", "%s\n\tInput sequence must be composed of at least two commands.", "isValidCommand") )
        __debugbreak();
      v9 += 4;
      --v10;
    }
    while ( v10 );
    p_timeWindowEndMs += 74;
    v2 = "def->debugName";
    v3 = "%s != %s\n\t%p, %p";
    --v1;
  }
  while ( v1 );
}

