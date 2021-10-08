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
bool Sequence_SuperSprint_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v5; 
  __int64 v6; 
  const dvar_t *v8; 
  ClActiveClient *Client; 
  ClActiveClient *v10; 
  const playerState_s *v11; 
  const dvar_t *v12; 
  unsigned int nextCommand; 
  const ClActiveClient *v14; 
  int CmdNumber; 
  bool v16; 
  int commandTime; 
  char v20; 
  char v21; 
  bool result; 
  __int64 v29; 
  __int64 v30; 
  vec3_t outMove; 
  usercmd_s ucmd; 

  v5 = DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint;
  v6 = seqIndex;
  if ( !DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableGamepadSingleTapSuperSprint") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+1C8h+var_48], xmm6
    vmovaps [rsp+1C8h+var_58], xmm7
  }
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    v8 = DCONST_DVARINT_superSprintControlType;
    if ( !DCONST_DVARINT_superSprintControlType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintControlType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer == 1 )
    {
      Client = ClActiveClient::GetClient(localClientNum);
      v10 = Client;
      if ( Client )
      {
        v11 = Client->GetPlayerState(Client);
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 557, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v12 = DCONST_DVARMPBOOL_superSprintEnable;
        if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.enabled && !BG_IsSuperSprinting(v11) )
        {
          if ( v10->cmdSequenceState[v6].nextCommand >= 0x10u )
          {
            LODWORD(v30) = 16;
            LODWORD(v29) = v10->cmdSequenceState[v6].nextCommand;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          nextCommand = v10->cmdSequenceState[v6].nextCommand;
          if ( nextCommand > 1 )
          {
LABEL_39:
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_superSprintFromWalk, "superSprintFromWalk") || nextCommand != 1 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v11->pm_flags, ACTIVE, 0x14u) || v11->serverTime - v11->sprintState.lastSprintEnd < SUPER_SPRINT_FROM_SPRINT_TIME_THRESHOLD_MS )
            {
              result = 1;
              goto LABEL_38;
            }
          }
          else
          {
            v14 = ClActiveClient::GetClient(localClientNum);
            CmdNumber = ClActiveClient_GetCmdNumber(v14);
            if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
            {
              v16 = CmdNumber == 0;
              if ( CmdNumber < 0 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 584, ASSERT_TYPE_ASSERT, "(current >= 0)", (const char *)&queryFormat, "current >= 0") )
                  __debugbreak();
                v16 = CmdNumber == 0;
              }
              if ( !v16 )
              {
                commandTime = ucmd.commandTime;
                __asm
                {
                  vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
                  vmovss  xmm7, cs:__real@447a0000
                }
                do
                {
                  if ( !CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
                    break;
                  BG_GetNormalizedMovementCmd(&ucmd, &outMove);
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_superSprintControlMaxRightDeflection, "superSprintControlMaxRightDeflection");
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rsp+1C8h+outMove+4]
                    vandps  xmm1, xmm1, xmm6
                    vcomiss xmm1, xmm0
                  }
                  if ( !(v20 | v21) )
                    break;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1C8h+outMove]
                    vcomiss xmm0, cs:?SUPER_SPRINT_FORWARD_THRESHOLD@@3MA; float SUPER_SPRINT_FORWARD_THRESHOLD
                  }
                  if ( !(v20 | v21) )
                    goto LABEL_39;
                  if ( ucmd.commandTime > commandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 611, ASSERT_TYPE_ASSERT, "(cmd.commandTime <= currCmd.commandTime)", (const char *)&queryFormat, "cmd.commandTime <= currCmd.commandTime") )
                    __debugbreak();
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_superSprintControlMaxInputTime, "superSprintControlMaxInputTime");
                  __asm
                  {
                    vmulss  xmm1, xmm0, xmm7
                    vcvttss2si ecx, xmm1
                  }
                  if ( commandTime - ucmd.commandTime > _ECX )
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
  result = 0;
LABEL_38:
  __asm
  {
    vmovaps xmm7, [rsp+1C8h+var_58]
    vmovaps xmm6, [rsp+1C8h+var_48]
  }
  return result;
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
int Sequence_SuperSprint_EndTime()
{
  int result; 

  _RBX = DCONST_DVARFLT_superSprintDoubleClickInputTime;
  if ( !DCONST_DVARFLT_superSprintDoubleClickInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintDoubleClickInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  return result;
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
int Sequence_OffhandPrimaryDetonate_EndTime()
{
  int result; 

  _RBX = DCONST_DVARFLT_offhandDetonateDoubleClickInputTime;
  if ( !DCONST_DVARFLT_offhandDetonateDoubleClickInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "offhandDetonateDoubleClickInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  return result;
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
int Sequence_OffhandSecondaryDetonate_EndTime()
{
  int result; 

  _RBX = DCONST_DVARFLT_offhandDetonateDoubleClickInputTime;
  if ( !DCONST_DVARFLT_offhandDetonateDoubleClickInputTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "offhandDetonateDoubleClickInputTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Sequence_AutoForward_IsValid
==============
*/
bool Sequence_AutoForward_IsValid(const LocalClientNum_t localClientNum, int seqIndex)
{
  const dvar_t *v3; 
  __int64 v4; 
  int ControllerFromClient; 
  ClActiveClient *Client; 
  const ClActiveClient *v8; 
  int CmdNumber; 
  bool v10; 
  int commandTime; 
  char v16; 
  int Int_Internal_DebugName; 
  bool result; 
  __int64 v22; 
  __int64 v23; 
  vec3_t outMove; 
  usercmd_s ucmd; 

  v3 = DVARBOOL_autoForwardEnable;
  v4 = seqIndex;
  if ( !DVARBOOL_autoForwardEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "autoForwardEnable") )
    __debugbreak();
  __asm { vmovaps [rsp+1B8h+var_48], xmm6 }
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( GamerProfile_GetAutoForwardInputSequenceEnable(ControllerFromClient) )
    {
      Client = ClActiveClient::GetClient(localClientNum);
      if ( Client->cmdSequenceState[v4].nextCommand >= 0x10u )
      {
        LODWORD(v23) = 16;
        LODWORD(v22) = Client->cmdSequenceState[v4].nextCommand;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 690, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      if ( Client->cmdSequenceState[v4].nextCommand > 1u )
      {
LABEL_33:
        result = 1;
        goto LABEL_32;
      }
      v8 = ClActiveClient::GetClient(localClientNum);
      CmdNumber = ClActiveClient_GetCmdNumber(v8);
      if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
      {
        v10 = CmdNumber == 0;
        if ( CmdNumber < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 703, ASSERT_TYPE_ASSERT, "(current >= 0)", (const char *)&queryFormat, "current >= 0") )
            __debugbreak();
          v10 = CmdNumber == 0;
        }
        if ( !v10 )
        {
          commandTime = ucmd.commandTime;
          __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
          while ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
          {
            BG_GetNormalizedMovementCmd(&ucmd, &outMove);
            _RBX = DCONST_DVARFLT_cl_autoForwardControlMaxRightDeflection;
            if ( !DCONST_DVARFLT_cl_autoForwardControlMaxRightDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardControlMaxRightDeflection") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RBX);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1B8h+outMove+4]
              vandps  xmm0, xmm0, xmm6
              vcomiss xmm0, dword ptr [rbx+28h]
            }
            if ( !(v16 | v10) )
              break;
            _RBX = DCONST_DVARFLT_cl_autoForwardControlMinForwardDeflection;
            if ( !DCONST_DVARFLT_cl_autoForwardControlMinForwardDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_autoForwardControlMinForwardDeflection") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RBX);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1B8h+outMove]
              vcomiss xmm0, dword ptr [rbx+28h]
            }
            if ( !(v16 | v10) )
              goto LABEL_33;
            if ( ucmd.commandTime > commandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 730, ASSERT_TYPE_ASSERT, "(cmd.commandTime <= currCmd.commandTime)", (const char *)&queryFormat, "cmd.commandTime <= currCmd.commandTime") )
              __debugbreak();
            Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_autoForwardDoubleForwardInputTime, "cl_autoForwardDoubleForwardInputTime");
            if ( commandTime - ucmd.commandTime <= Int_Internal_DebugName )
            {
              if ( --CmdNumber )
                continue;
            }
            break;
          }
        }
      }
    }
  }
  result = 0;
LABEL_32:
  __asm { vmovaps xmm6, [rsp+1B8h+var_48] }
  return result;
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
  LocalClientNum_t v12; 
  ClActiveClient *Client; 
  ClActiveClient *v14; 
  int v22; 
  bool v26; 
  char v27; 
  bool v28; 
  const dvar_t *v29; 
  bool v38; 
  __int64 v49; 
  unsigned int *cmdSequenceState; 
  void (__fastcall **p_activate)(const LocalClientNum_t); 
  __int64 v52; 
  signed int v53; 
  void (__fastcall *v54)(const LocalClientNum_t); 
  int v55; 
  signed int v56; 
  __int64 v57; 
  signed int v58; 
  ClActiveClient *v59; 
  unsigned __int64 i; 
  __int64 v61; 
  signed int downtime; 
  unsigned __int8 (__fastcall *v63)(_QWORD, _QWORD); 
  unsigned int v64; 
  bool v65; 
  bool v66; 
  __int64 v67; 
  double v68; 
  __int64 v69; 
  double v70; 
  double v71; 
  unsigned int *v72; 
  void (__fastcall **v73)(const LocalClientNum_t); 
  __int64 v74; 
  signed int v87; 
  signed int v88; 
  __int64 v89; 

  v12 = localClientNum;
  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
  {
    v14 = ClActiveClient::GetClient(v12);
    if ( !v14 )
      goto LABEL_28;
    __asm { vmovaps [rsp+148h+var_68], xmm7 }
    _RSI = v14->cmdSequenceAxisKeys;
    __asm
    {
      vmovaps [rsp+148h+var_78], xmm8
      vmovaps [rsp+148h+var_88], xmm9
      vmovaps [rsp+148h+var_98], xmm10
      vmovaps [rsp+148h+var_A8], xmm11
      vmovaps [rsp+148h+var_B8], xmm12
      vmovaps [rsp+148h+var_C8], xmm13
      vmovaps [rsp+148h+var_D8], xmm14
      vmovaps [rsp+148h+var_E8], xmm15
    }
    *(double *)&_XMM0 = CL_GamepadAxisValue(v12, 1);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = CL_GamepadAxisValue(v12, 0);
    __asm
    {
      vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm9, cs:__real@3f800000
      vmovsd  xmm14, cs:__real@3ff0000000000000
      vmovss  xmm13, cs:__real@3f4ccccd
      vmovaps xmm11, xmm0
    }
    v22 = 68;
    __asm
    {
      vmovaps [rsp+148h+var_58], xmm6
      vxorps  xmm8, xmm8, xmm8
      vxorpd  xmm15, xmm15, xmm15
    }
    while ( 1 )
    {
      __asm { vmovaps xmm7, xmm8 }
      if ( v22 == 68 )
        break;
      switch ( v22 )
      {
        case 'E':
          __asm { vxorps  xmm0, xmm10, xmm12 }
          goto LABEL_19;
        case 'F':
          __asm { vxorps  xmm0, xmm11, xmm12 }
          goto LABEL_19;
        case 'G':
          __asm { vmovaps xmm0, xmm11 }
          goto LABEL_19;
        case 'H':
          v29 = DCONST_DVARFLT_superSprintControlForwardDeflection;
          if ( !DCONST_DVARFLT_superSprintControlForwardDeflection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintControlForwardDeflection") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v29);
          __asm
          {
            vsubss  xmm0, xmm9, dword ptr [rbx+28h]
            vcmpltss xmm1, xmm10, xmm0
            vblendvps xmm0, xmm8, xmm9, xmm1
            vmovaps xmm7, xmm0
            vmovss  [rsp+148h+arg_8], xmm0
          }
          goto LABEL_23;
      }
      LODWORD(v67) = v22;
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 291, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encountered unexpected virtAxisKb: %i", v67);
      v27 = 0;
      v28 = !v26;
      if ( v26 )
        goto LABEL_22;
LABEL_23:
      __asm { vcomiss xmm13, dword ptr [rsi] }
      if ( !(v27 | v28) )
      {
        __asm { vcomiss xmm7, xmm13 }
        if ( !v27 )
          _RSI->downtime = com_frameTime;
      }
      __asm { vmovss  dword ptr [rsi], xmm7 }
      ++_RSI;
      if ( ++v22 >= 73 )
      {
        v12 = localClientNum;
        __asm
        {
          vmovaps xmm15, [rsp+148h+var_E8]
          vmovaps xmm14, [rsp+148h+var_D8]
          vmovaps xmm13, [rsp+148h+var_C8]
          vmovaps xmm12, [rsp+148h+var_B8]
          vmovaps xmm11, [rsp+148h+var_A8]
          vmovaps xmm10, [rsp+148h+var_98]
          vmovaps xmm9, [rsp+148h+var_88]
          vmovaps xmm8, [rsp+148h+var_78]
          vmovaps xmm7, [rsp+148h+var_68]
          vmovaps xmm6, [rsp+148h+var_58]
        }
LABEL_28:
        v49 = 0i64;
        v74 = 7i64;
        cmdSequenceState = (unsigned int *)Client->cmdSequenceState;
        v89 = 0i64;
        p_activate = &g_inputSequences[0].activate;
        v72 = cmdSequenceState;
        v73 = &g_inputSequences[0].activate;
        while ( 2 )
        {
          v52 = cmdSequenceState[1];
          v53 = v52 + *((_DWORD *)p_activate - 4);
          v54 = p_activate[1];
          v88 = v53;
          if ( v54 )
          {
            v55 = ((__int64 (__fastcall *)(__int64, const char *))v54)(v52, "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)");
            LODWORD(v52) = cmdSequenceState[1];
          }
          else
          {
            v55 = *((_DWORD *)p_activate - 3);
          }
          v56 = v52 + v55;
          v87 = v52 + v55;
          if ( *cmdSequenceState >= 0x10 )
          {
            LODWORD(v69) = 16;
            LODWORD(v67) = *cmdSequenceState;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v67, v69) )
              __debugbreak();
          }
          v57 = (__int64)&p_activate[2 * (int)*cmdSequenceState + 2];
          v58 = 0;
          v59 = ClActiveClient::GetClient(v12);
          if ( v59 )
          {
            for ( i = 0i64; i < 4; ++i )
            {
              v61 = *(int *)(v57 + 4 * i);
              if ( (int)v61 < 0 )
                break;
              if ( (unsigned int)v61 >= 0x49 )
              {
                LODWORD(v69) = 73;
                LODWORD(v67) = *(_DWORD *)(v57 + 4 * i);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 321, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( NUM_EXTENDED_BUTTONS )", "key doesn't index NUM_EXTENDED_BUTTONS\n\t%i not in [0, %i)", v67, v69) )
                  __debugbreak();
              }
              if ( (int)v61 < 68 )
              {
                if ( (unsigned int)v61 >= 0x44 )
                {
                  LODWORD(v69) = 68;
                  LODWORD(v67) = v61;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( key ) < (unsigned)( NUM_BUTTONS )", "key doesn't index NUM_BUTTONS\n\t%i not in [0, %i)", v67, v69) )
                    __debugbreak();
                }
                downtime = g_playersKb[localClientNum][v61].downtime;
              }
              else
              {
                if ( (unsigned int)(v61 - 68) >= 5 )
                {
                  LODWORD(v69) = 5;
                  LODWORD(v67) = v61 - 68;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( axisKey ) < (unsigned)( (5) )", "axisKey doesn't index INPUT_SEQUENCE_VIRTUAL_AXIS_KEYS\n\t%i not in [0, %i)", v67, v69) )
                    __debugbreak();
                }
                downtime = *((_DWORD *)v59 + 2 * v61 - 39);
              }
              if ( v58 >= downtime )
                downtime = v58;
              v58 = downtime;
            }
            cmdSequenceState = v72;
            p_activate = v73;
            v56 = v87;
            v53 = v88;
            v49 = v89;
          }
          v63 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))*(p_activate - 1);
          v12 = localClientNum;
          if ( !v63 || v63((unsigned int)localClientNum, (unsigned int)v49) )
          {
            v64 = *cmdSequenceState;
            v65 = *cmdSequenceState && v56 < (int)com_frameTime;
          }
          else
          {
            v64 = *cmdSequenceState;
            v65 = 1;
          }
          v66 = v53 < v58 && (!v64 || v58 <= v56);
          if ( v65 )
          {
            *cmdSequenceState = 0;
            goto LABEL_75;
          }
          if ( v66 )
          {
            *cmdSequenceState = v64 + 1;
            cmdSequenceState[1] = com_frameTime;
            if ( (int)(v64 + 1) < 16 && SLODWORD(p_activate[2 * (int)v64 + 4]) >= 0 )
            {
              ++v64;
              goto LABEL_72;
            }
            (*p_activate)(localClientNum);
            *cmdSequenceState = 0;
          }
          else
          {
LABEL_72:
            if ( v64 >= 0x10 )
            {
              LODWORD(v69) = 16;
              LODWORD(v67) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 386, ASSERT_TYPE_ASSERT, "(unsigned)( state->nextCommand ) < (unsigned)( (16) )", "state->nextCommand doesn't index INPUT_SEQUENCE_MAX_COMMANDS_PER_SEQUENCE\n\t%i not in [0, %i)", v67, v69) )
                __debugbreak();
            }
          }
LABEL_75:
          ++v49;
          cmdSequenceState += 2;
          v89 = v49;
          p_activate += 37;
          v72 = cmdSequenceState;
          v28 = v74-- == 1;
          v73 = p_activate;
          if ( v28 )
            return;
          continue;
        }
      }
    }
    __asm { vmovaps xmm0, xmm10; val }
LABEL_19:
    __asm
    {
      vmovaps xmm2, xmm9; max
      vmovaps xmm1, xmm8; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm0, xmm8
      vmovaps xmm6, xmm0
    }
    if ( !v27 )
    {
      __asm
      {
        vcomiss xmm0, xmm9
        vmovaps xmm7, xmm0
      }
      if ( v27 | v28 )
        goto LABEL_23;
    }
    __asm
    {
      vmovsd  [rsp+148h+var_110], xmm14
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+148h+var_118], xmm15
      vmovsd  [rsp+148h+var_120], xmm1
      vmovaps xmm7, xmm6
    }
    v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_sequence.cpp", 236, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( value ) && ( value ) <= ( 1.0f )", "value not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v68, v70, v71);
    v27 = 0;
    v28 = !v38;
    if ( !v38 )
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

