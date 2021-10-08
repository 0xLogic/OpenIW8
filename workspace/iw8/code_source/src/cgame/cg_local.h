/*
==============
CG_GetEntityOrigin
==============
*/

void __fastcall CG_GetEntityOrigin(LocalClientNum_t localClientNum, unsigned int entnum, vec3_t *outOrigin)
{
  ?CG_GetEntityOrigin@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, entnum, outOrigin);
}

/*
==============
CG_IsRemoteTurret
==============
*/

bool __fastcall CG_IsRemoteTurret(const centity_t *cent)
{
  return ?CG_IsRemoteTurret@@YA_NPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_IsPlayerEntityNumber
==============
*/

bool __fastcall CG_IsPlayerEntityNumber(const playerState_s *ps, int entityNum)
{
  return ?CG_IsPlayerEntityNumber@@YA_NPEBUplayerState_s@@H@Z(ps, entityNum);
}

/*
==============
CG_IsPlayerEntityNumber
==============
*/
bool CG_IsPlayerEntityNumber(const playerState_s *ps, int entityNum)
{
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
        return 0;
    }
  }
  return entityNum == ps->clientNum;
}

/*
==============
CG_GetEntityOrigin
==============
*/
void CG_GetEntityOrigin(LocalClientNum_t localClientNum, unsigned int entnum, vec3_t *outOrigin)
{
  const cpose_t *PoseExtended; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 

  _RDI = outOrigin;
  PoseExtended = CG_GetPoseExtended(localClientNum, entnum, 0);
  if ( !PoseExtended && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !PoseExtended->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(PoseExtended->origin.Get_origin, PoseExtended);
  FunctionPointer_origin(&PoseExtended->origin.origin.origin, _RDI);
  if ( PoseExtended->isPosePrecise )
  {
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, dword ptr [rdi]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovd   xmm0, dword ptr [rdi+4]
      vcvtdq2pd xmm0, xmm0
      vmovss  dword ptr [rdi], xmm1
      vmulsd  xmm1, xmm0, xmm3
      vmovd   xmm0, dword ptr [rdi+8]
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm1, xmm0, xmm3
      vmovss  dword ptr [rdi+4], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
}

/*
==============
CG_IsRemoteTurret
==============
*/
bool CG_IsRemoteTurret(const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 141, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 142, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  return cent->pose.eType == 11 && cent->pose.turret.remoteTurret;
}

