/*
==============
ClActiveClient_GetCLViewangles
==============
*/

void __fastcall ClActiveClient_GetCLViewangles(const ClActiveClient *activeClient, vec3_t *clViewangles)
{
  ?ClActiveClient_GetCLViewangles@@YAXPEBVClActiveClient@@AEATvec3_t@@@Z(activeClient, clViewangles);
}

/*
==============
ClActiveClient::GetClient
==============
*/

ClActiveClient *__fastcall ClActiveClient::GetClient(const LocalClientNum_t localClientNum)
{
  return ?GetClient@ClActiveClient@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_SetViewAngles
==============
*/

void __fastcall CL_SetViewAngles(LocalClientNum_t localClientNum, const vec3_t *angles)
{
  ?CL_SetViewAngles@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(localClientNum, angles);
}

/*
==============
ClActiveClient_SetCLViewangle
==============
*/

void __fastcall ClActiveClient_SetCLViewangle(ClActiveClient *activeClient, const int inAngle, const float inAngleValue)
{
  ?ClActiveClient_SetCLViewangle@@YAXPEAVClActiveClient@@HM@Z(activeClient, inAngle, inAngleValue);
}

/*
==============
CL_ClampViewAngle
==============
*/

void __fastcall CL_ClampViewAngle(LocalClientNum_t localClientNum, const int angle, const float min, const float max)
{
  ?CL_ClampViewAngle@@YAXW4LocalClientNum_t@@HMM@Z(localClientNum, angle, min, max);
}

/*
==============
ClActiveClient_GetCmdNumber
==============
*/

int __fastcall ClActiveClient_GetCmdNumber(const ClActiveClient *activeClient)
{
  return ?ClActiveClient_GetCmdNumber@@YAHPEBVClActiveClient@@@Z(activeClient);
}

/*
==============
ClActiveClient::~ClActiveClient
==============
*/

void __fastcall ClActiveClient::~ClActiveClient(ClActiveClient *this)
{
  ??1ClActiveClient@@UEAA@XZ(this);
}

/*
==============
ClActiveClient_Init_Obfuscation
==============
*/

void __fastcall ClActiveClient_Init_Obfuscation(ClActiveClient *clientActive)
{
  ?ClActiveClient_Init_Obfuscation@@YAXPEAVClActiveClient@@@Z(clientActive);
}

/*
==============
ClActiveClient_SetCLViewangles
==============
*/

void __fastcall ClActiveClient_SetCLViewangles(ClActiveClient *activeClient, const vec3_t *clViewangles)
{
  ?ClActiveClient_SetCLViewangles@@YAXPEAVClActiveClient@@AEBTvec3_t@@@Z(activeClient, clViewangles);
}

/*
==============
CL_Input_AddCommand
==============
*/

bool __fastcall CL_Input_AddCommand(ClActiveClient *cl, const usercmd_s *const cmd)
{
  return ?CL_Input_AddCommand@@YA_NPEAVClActiveClient@@QEBUusercmd_s@@@Z(cl, cmd);
}

/*
==============
CL_GetUserCmd
==============
*/

int __fastcall CL_GetUserCmd(LocalClientNum_t localClientNum, int cmdNumber, usercmd_s *ucmd)
{
  return ?CL_GetUserCmd@@YAHW4LocalClientNum_t@@HPEAUusercmd_s@@@Z(localClientNum, cmdNumber, ucmd);
}

/*
==============
ClActiveClient_GetCLViewangles
==============
*/
void ClActiveClient_GetCLViewangles(const ClActiveClient *activeClient, vec3_t *clViewangles)
{
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 264, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  LODWORD(clViewangles->v[0]) = LODWORD(activeClient->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)activeClient + 428) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 428) ^ activeClient->clviewangles_aab) + 2));
  LODWORD(clViewangles->v[1]) = LODWORD(activeClient->clViewangles.clViewangles.v[1]) ^ ((((_DWORD)activeClient + 432) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 432) ^ activeClient->clviewangles_aab) + 2));
  LODWORD(clViewangles->v[2]) = LODWORD(activeClient->clViewangles.clViewangles.v[2]) ^ ((((_DWORD)activeClient + 436) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 436) ^ activeClient->clviewangles_aab) + 2));
}

/*
==============
ClActiveClient::GetClient
==============
*/
ClActiveClient *ClActiveClient::GetClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClActiveClient **v3; 
  float v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v6 = cl_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( !(_BYTE)ClActiveClient::ms_activeClientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 323, ASSERT_TYPE_ASSERT, "(ms_activeClientType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeClientType != GameModeType::NONE") )
    __debugbreak();
  v2 = ClActiveClient::ms_activeClients[v1] == NULL;
  v3 = &ClActiveClient::ms_activeClients[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 324, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  return *v3;
}

/*
==============
CL_GetUserCmd
==============
*/
__int64 CL_GetUserCmd(LocalClientNum_t localClientNum, int cmdNumber, usercmd_s *ucmd)
{
  const ClActiveClient *Client; 
  int v6; 
  int v7; 
  __int64 result; 
  __int64 v10; 
  int v19; 

  _RSI = ucmd;
  Client = ClActiveClient::GetClient(localClientNum);
  v6 = ClActiveClient_GetCmdNumber(Client);
  v7 = v6;
  v19 = v6;
  if ( cmdNumber > v6 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)cmdNumber, v6);
  if ( cmdNumber > v7 - 128 && cmdNumber > 0 )
  {
    _RBX = &Client->cmds[cmdNumber & 0x7F];
    memset(&v19, 0, sizeof(v19));
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd", -2i64) )
      __debugbreak();
    v10 = 2i64;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rsi], xmm0
        vmovups xmm1, xmmword ptr [rbx+10h]
        vmovups xmmword ptr [rsi+10h], xmm1
        vmovups xmm0, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rsi+20h], xmm0
        vmovups xmm1, xmmword ptr [rbx+30h]
        vmovups xmmword ptr [rsi+30h], xmm1
        vmovups xmm0, xmmword ptr [rbx+40h]
        vmovups xmmword ptr [rsi+40h], xmm0
        vmovups xmm1, xmmword ptr [rbx+50h]
        vmovups xmmword ptr [rsi+50h], xmm1
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rsi+60h], xmm0
      }
      _RSI = (usercmd_s *)((char *)_RSI + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rsi-10h], xmm1
      }
      _RBX = (usercmd_s *)((char *)_RBX + 128);
      --v10;
    }
    while ( v10 );
    _RSI->buttons = _RBX->buttons;
    return 1i64;
  }
  else
  {
    result = 0i64;
    memset(&v19, 0, sizeof(v19));
  }
  return result;
}

/*
==============
ClActiveClient_GetCmdNumber
==============
*/
__int64 ClActiveClient_GetCmdNumber(const ClActiveClient *activeClient)
{
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 197, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  return activeClient->cmdNumber.cmdNumber ^ ((((_DWORD)activeClient + 34264) ^ activeClient->cmd_number_aab) * ((((_DWORD)activeClient + 34264) ^ activeClient->cmd_number_aab) + 2));
}

/*
==============
ClActiveClient_SetCLViewangles
==============
*/
void ClActiveClient_SetCLViewangles(ClActiveClient *activeClient, const vec3_t *clViewangles)
{
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  activeClient->clviewangles_aab += activeClient->clviewangles_set_aab;
  LODWORD(activeClient->clViewangles.clViewangles.v[0]) = LODWORD(clViewangles->v[0]) ^ ((((_DWORD)activeClient + 428) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 428) ^ activeClient->clviewangles_aab) + 2));
  LODWORD(activeClient->clViewangles.clViewangles.v[1]) = LODWORD(clViewangles->v[1]) ^ ((((_DWORD)activeClient + 432) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 432) ^ activeClient->clviewangles_aab) + 2));
  LODWORD(activeClient->clViewangles.clViewangles.v[2]) = LODWORD(clViewangles->v[2]) ^ ((((_DWORD)activeClient + 436) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 436) ^ activeClient->clviewangles_aab) + 2));
}

/*
==============
ClActiveClient::~ClActiveClient
==============
*/
void ClActiveClient::~ClActiveClient(ClActiveClient *this)
{
  this->__vftable = (ClActiveClient_vtbl *)&ClActiveClient::`vftable';
}

/*
==============
ClActiveClient_Init_Obfuscation
==============
*/
void ClActiveClient_Init_Obfuscation(ClActiveClient *clientActive)
{
  unsigned int v2; 
  bdRandom v3; 
  __int64 v4; 
  unsigned __int8 pbBuffer[16]; 

  v4 = -2i64;
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, pbBuffer, 0x10u, 0) || (v2 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
  {
    bdRandom::bdRandom(&v3);
    bdRandom::nextUBytes(&v3, pbBuffer, 16);
    bdRandom::~bdRandom(&v3);
    v2 = *(_DWORD *)pbBuffer;
  }
  clientActive->cmd_number_aab = v2;
  clientActive->cmd_number_set_aab = *(_DWORD *)&pbBuffer[4];
  clientActive->clviewangles_aab = *(_DWORD *)&pbBuffer[8];
  clientActive->clviewangles_set_aab = *(_DWORD *)&pbBuffer[12];
  memset(pbBuffer, 0, sizeof(pbBuffer));
  clientActive->cmd_number_aab -= clientActive->cmd_number_set_aab;
  clientActive->cmdNumber.cmdNumber = (((_DWORD)clientActive + 34264) ^ clientActive->cmd_number_aab) * ((((_DWORD)clientActive + 34264) ^ clientActive->cmd_number_aab) + 2);
  clientActive->clviewangles_aab += clientActive->clviewangles_set_aab;
  LODWORD(clientActive->clViewangles.clViewangles.v[0]) = LODWORD(vec3_origin.v[0]) ^ ((((_DWORD)clientActive + 428) ^ clientActive->clviewangles_aab) * ((((_DWORD)clientActive + 428) ^ clientActive->clviewangles_aab) + 2));
  LODWORD(clientActive->clViewangles.clViewangles.v[1]) = LODWORD(vec3_origin.v[1]) ^ ((((_DWORD)clientActive + 432) ^ clientActive->clviewangles_aab) * ((((_DWORD)clientActive + 432) ^ clientActive->clviewangles_aab) + 2));
  LODWORD(clientActive->clViewangles.clViewangles.v[2]) = LODWORD(vec3_origin.v[2]) ^ ((((_DWORD)clientActive + 436) ^ clientActive->clviewangles_aab) * ((((_DWORD)clientActive + 436) ^ clientActive->clviewangles_aab) + 2));
}

/*
==============
ClActiveClient_SetCLViewangle
==============
*/

void __fastcall ClActiveClient_SetCLViewangle(ClActiveClient *activeClient, const int inAngle, double inAngleValue)
{
  __int64 v3; 
  __int64 v5; 
  int v6; 

  __asm { vmovss  [rsp+arg_10], xmm2 }
  v3 = inAngle;
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 245, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( (unsigned int)v3 >= 3 )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v5, 3) )
      __debugbreak();
  }
  LODWORD(activeClient->clViewangles.clViewangles.v[v3]) = v6 ^ ((((_DWORD)activeClient + 4 * v3 + 428) ^ activeClient->clviewangles_aab) * ((((_DWORD)activeClient + 4 * v3 + 428) ^ activeClient->clviewangles_aab) + 2));
}

/*
==============
CL_Input_AddCommand
==============
*/
bool CL_Input_AddCommand(ClActiveClient *cl, const usercmd_s *const cmd)
{
  int v4; 
  bool result; 
  int v6; 
  __int64 v7; 
  __int64 v9; 
  int cmdTimeMsec; 
  int v19; 

  _RBX = cmd;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 401, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl", -2i64) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 402, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( Com_UseConstantUserCommandTime() )
  {
    v4 = truncate_cast<int,unsigned __int64>(cl->cmdTimeUsec / 0x3E8);
    if ( v4 <= cl->cmdTimeMsec )
    {
      result = CL_Input_IsPausedFreeMove(cl);
      if ( !result )
        return result;
    }
    cl->cmdTimeMsec = v4;
  }
  v6 = ClActiveClient_GetCmdNumber(cl) + 1;
  v19 = v6;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 177, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  cl->cmd_number_aab -= cl->cmd_number_set_aab;
  cl->cmdNumber.cmdNumber = ((((_DWORD)cl + 34264) ^ cl->cmd_number_aab) * ((((_DWORD)cl + 34264) ^ cl->cmd_number_aab) + 2)) ^ v6;
  v7 = v6 & 0x7F;
  _RCX = &cl->cmds[v7];
  v9 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RBX = (const usercmd_s *)((char *)_RBX + 128);
    --v9;
  }
  while ( v9 );
  _RCX->buttons = _RBX->buttons;
  if ( Com_UseConstantUserCommandTime() )
    cmdTimeMsec = cl->cmdTimeMsec;
  else
    cmdTimeMsec = cl->GetServerTime(cl);
  cl->cmds[v7].commandTime = cmdTimeMsec;
  result = 1;
  cl->cgameExtraButtons = 0i64;
  cl->cgameUserCmdStateFlags = NONE;
  memset(&v19, 0, sizeof(v19));
  return result;
}

/*
==============
CL_SetViewAngles
==============
*/
void CL_SetViewAngles(LocalClientNum_t localClientNum, const vec3_t *angles)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  Client->clviewangles_aab += Client->clviewangles_set_aab;
  LODWORD(Client->clViewangles.clViewangles.v[0]) = LODWORD(angles->v[0]) ^ ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[1]) = LODWORD(angles->v[1]) ^ ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[2]) = LODWORD(angles->v[2]) ^ ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) + 2));
}

/*
==============
CL_ClampViewAngle
==============
*/

void __fastcall CL_ClampViewAngle(LocalClientNum_t localClientNum, const int angle, double min, double max)
{
  __int64 v9; 
  ClActiveClient *Client; 
  __int64 v11; 
  __int64 v17; 
  __int64 v18; 
  int v21; 
  int v22; 

  __asm
  {
    vcomiss xmm2, xmm3
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  v9 = angle;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 461, ASSERT_TYPE_ASSERT, "(min <= max)", (const char *)&queryFormat, "min <= max") )
    __debugbreak();
  if ( (unsigned int)v9 >= 3 )
  {
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 462, ASSERT_TYPE_ASSERT, "(unsigned)( angle ) < (unsigned)( 3 )", "angle doesn't index 3\n\t%i not in [0, %i)", v17, 3) )
      __debugbreak();
  }
  Client = ClActiveClient::GetClient(localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 283, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( (unsigned int)v9 >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v11 = (__int64)&Client->clViewangles + 4 * v9;
  __asm
  {
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm7; min
  }
  v21 = *(_DWORD *)v11 ^ ((v11 ^ Client->clviewangles_aab) * ((v11 ^ Client->clviewangles_aab) + 2));
  __asm { vmovss  xmm0, [rsp+68h+arg_8]; val }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  [rsp+68h+arg_8], xmm0 }
  if ( (unsigned int)v9 >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  *(_DWORD *)v11 = v22 ^ ((v11 ^ Client->clviewangles_aab) * ((v11 ^ Client->clviewangles_aab) + 2));
}

