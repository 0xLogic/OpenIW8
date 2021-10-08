/*
==============
G_VehicleSubmarine_ClipVelocity
==============
*/

void __fastcall G_VehicleSubmarine_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  ?G_VehicleSubmarine_ClipVelocity@@YAXAEBTvec3_t@@0AEAT1@@Z(in, normal, out);
}

/*
==============
G_VehicleSubmarine_UpdatePlayerMove
==============
*/

void __fastcall G_VehicleSubmarine_UpdatePlayerMove(Vehicle *veh)
{
  ?G_VehicleSubmarine_UpdatePlayerMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleSubmarine_CalcAccel
==============
*/
void G_VehicleSubmarine_CalcAccel(gentity_s *ent, char *move, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  unsigned __int16 number; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  char v21; 
  GVehicles *v29; 
  const dvar_t *v35; 
  const char *v36; 
  const dvar_t *v41; 
  const char *v42; 
  char v53; 
  const dvar_t *v54; 
  const dvar_t *v59; 
  const char *v60; 
  char v64; 
  const dvar_t *v65; 
  const dvar_t *v68; 
  const dvar_t *v78; 
  const dvar_t *v88; 
  const dvar_t *v92; 
  int v93; 
  const dvar_t *v95; 
  ClActiveClient *Client; 
  __int64 v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127[3]; 
  __int64 v128; 
  vec3_t v129; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  char v135; 
  void *retaddr; 

  _RAX = &retaddr;
  v128 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  _R12 = outRotAccel;
  _R13 = outBodyAccel;
  number = ent->r.ownerNum.number;
  if ( !number )
    goto LABEL_114;
  v17 = number;
  v18 = number - 1;
  if ( v18 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v19 = v17 - 1;
  if ( g_entities[v19].r.isInUse != g_entityIsInUse[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v19] )
  {
    LODWORD(v120) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v120) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_114:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 52, ASSERT_TYPE_ASSERT, "(ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  _R15 = ent->vehicle;
  v21 = move[2];
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vmovss  xmm8, cs:__real@3c010204
  }
  if ( v21 < 0 )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm7, xmm0, xmm8
    }
  }
  if ( v21 > 0 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, xmm8
    }
  }
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v29 = GVehicles::ms_gVehiclesSystem;
  __asm { vmovaps xmm3, xmm7; value }
  GVehicles::PhysicsSetInputControl(GVehicles::ms_gVehiclesSystem, _R15->physicsVehicle, 0, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm6; value }
  GVehicles::PhysicsSetInputControl(v29, _R15->physicsVehicle, 1u, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+118h]
    vmovss  dword ptr [rsp+180h+angles+4], xmm0
    vmovss  xmm1, dword ptr [r15+114h]
    vmovss  dword ptr [rsp+180h+angles], xmm1
    vmovss  xmm0, dword ptr [r15+11Ch]
    vmovss  dword ptr [rsp+180h+angles+8], xmm0
  }
  AngleVectors(&angles, &forward, &right, &up);
  if ( move[2] <= 0 )
  {
    v35 = DVARFLT_vehSubmarineMaxReverseAccel;
    if ( DVARFLT_vehSubmarineMaxReverseAccel )
      goto LABEL_33;
    v36 = "vehSubmarineMaxReverseAccel";
  }
  else
  {
    v35 = DVARFLT_vehSubmarineMaxForwardAccel;
    if ( DVARFLT_vehSubmarineMaxForwardAccel )
      goto LABEL_33;
    v36 = "vehSubmarineMaxForwardAccel";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v36) )
    __debugbreak();
LABEL_33:
  Dvar_CheckFrontendServerThread(v35);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm6, xmm1, dword ptr [r14+28h]
  }
  if ( move[3] <= 0 )
  {
    v41 = DVARFLT_vehSubmarineMaxNegativeBuoyancy;
    if ( DVARFLT_vehSubmarineMaxNegativeBuoyancy )
      goto LABEL_40;
    v42 = "vehSubmarineMaxNegativeBuoyancy";
  }
  else
  {
    v41 = DVARFLT_vehSubmarineMaxPositiveBuoyancy;
    if ( DVARFLT_vehSubmarineMaxPositiveBuoyancy )
      goto LABEL_40;
    v42 = "vehSubmarineMaxPositiveBuoyancy";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v42) )
    __debugbreak();
LABEL_40:
  Dvar_CheckFrontendServerThread(v41);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm3, xmm1, dword ptr [r14+28h]
    vmulss  xmm0, xmm3, dword ptr [rbp+80h+forward+8]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r13+0], xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+80h+right+8]
    vmovss  dword ptr [r13+4], xmm2
    vmulss  xmm0, xmm3, dword ptr [rbp+80h+up+8]
    vmovss  dword ptr [r13+8], xmm0
  }
  _R14 = DVARFLT_vehSubmarineStoppedVel;
  if ( !DVARFLT_vehSubmarineStoppedVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineStoppedVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vcomiss xmm0, dword ptr [r15+144h]
  }
  if ( !v53 )
  {
    _R14 = DVARFLT_vehSubmarineStoppedVel;
    if ( !DVARFLT_vehSubmarineStoppedVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineStoppedVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm1, dword ptr [r15+144h]
    }
    if ( v53 | v64 )
    {
      v68 = DVARFLT_vehSubmarineMaxStoppedPitchAccel;
      if ( !DVARFLT_vehSubmarineMaxStoppedPitchAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxStoppedPitchAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v68);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
        vmulss  xmm6, xmm1, dword ptr [r14+28h]
      }
      v59 = DVARFLT_vehSubmarineMaxStoppedYawAccel;
      if ( DVARFLT_vehSubmarineMaxStoppedYawAccel )
        goto LABEL_65;
      v60 = "vehSubmarineMaxStoppedYawAccel";
    }
    else
    {
      v65 = DVARFLT_vehSubmarineMaxReversePitchAccel;
      if ( !DVARFLT_vehSubmarineMaxReversePitchAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxReversePitchAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v65);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8
        vmulss  xmm6, xmm1, dword ptr [r14+28h]
      }
      v59 = DVARFLT_vehSubmarineMaxReverseYawAccel;
      if ( DVARFLT_vehSubmarineMaxReverseYawAccel )
        goto LABEL_65;
      v60 = "vehSubmarineMaxReverseYawAccel";
    }
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v60) )
      __debugbreak();
    goto LABEL_65;
  }
  v54 = DVARFLT_vehSubmarineMaxForwardPitchAccel;
  if ( !DVARFLT_vehSubmarineMaxForwardPitchAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxForwardPitchAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm6, xmm1, dword ptr [r14+28h]
  }
  v59 = DVARFLT_vehSubmarineMaxForwardYawAccel;
  if ( !DVARFLT_vehSubmarineMaxForwardYawAccel )
  {
    v60 = "vehSubmarineMaxForwardYawAccel";
    goto LABEL_63;
  }
LABEL_65:
  Dvar_CheckFrontendServerThread(v59);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@bc010204
    vmulss  xmm7, xmm1, dword ptr [r14+28h]
    vxorps  xmm10, xmm10, xmm10
  }
  _R14 = DVARFLT_vehSubmarineStoppedVel;
  if ( !DVARFLT_vehSubmarineStoppedVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineStoppedVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vcomiss xmm0, dword ptr [r15+144h]
  }
  if ( v53 )
  {
    v78 = DVARFLT_vehSubmarineMaxRollAccel;
    if ( !DVARFLT_vehSubmarineMaxRollAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRollAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v78);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm10, xmm1, dword ptr [r14+28h]
    }
  }
  _RSI = DVARFLT_vehSubmarineRollDrivenYaw;
  if ( !DVARFLT_vehSubmarineRollDrivenYaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollDrivenYaw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vcomiss xmm0, xmm11
  }
  if ( !(v53 | v64) )
  {
    _RSI = DVARFLT_vehSubmarineMaxRoll;
    if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm9, dword ptr [rsi+28h]
      vmovss  xmm8, dword ptr [r15+110h]
      vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    v88 = DVARFLT_vehSubmarineRollDrivenYaw;
    if ( !DVARFLT_vehSubmarineRollDrivenYaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollDrivenYaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v88);
    __asm
    {
      vmulss  xmm1, xmm8, dword ptr [rsi+28h]
      vdivss  xmm2, xmm1, xmm9
      vminss  xmm3, xmm2, cs:__real@3f800000
      vmulss  xmm7, xmm7, xmm3
    }
  }
  v92 = DVARINT_vehSubmarineBodyRelRotation;
  if ( !DVARINT_vehSubmarineBodyRelRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineBodyRelRotation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v92);
  v93 = v92->current.integer & 3;
  if ( v93 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+180h+var_120+4], xmm11
      vmovss  dword ptr [rsp+180h+var_120], xmm11
      vmovss  xmm0, dword ptr [r15+110h]
      vmovss  dword ptr [rsp+180h+var_120+8], xmm0
    }
    v95 = DVARINT_vehSubmarineBodyRelRotation;
    if ( !DVARINT_vehSubmarineBodyRelRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineBodyRelRotation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v95);
    if ( (v95->current.integer & 4) != 0 )
    {
      Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 264, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
        __debugbreak();
      v127[2] = ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) * ((Client->clviewangles_aab ^ ((_DWORD)Client + 436)) + 2)) ^ LODWORD(Client->clViewangles.clViewangles.v[2]);
      __asm
      {
        vmovss  xmm0, [rsp+180h+var_130]
        vmovss  dword ptr [rsp+180h+var_120+8], xmm0
      }
      memset(v127, 0, sizeof(v127));
    }
    AnglesToAxis(&v129, &axis);
    if ( v93 == 1 )
    {
      __asm
      {
        vmulss  xmm3, xmm7, dword ptr [rbp+80h+axis+10h]
        vmulss  xmm2, xmm6, dword ptr [rbp+80h+axis+1Ch]
        vsubss  xmm5, xmm3, xmm2
        vmulss  xmm4, xmm6, dword ptr [rbp+80h+axis+20h]
        vmulss  xmm2, xmm7, dword ptr [rbp+80h+axis+14h]
        vsubss  xmm6, xmm4, xmm2
        vmovaps xmm7, xmm5
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbp+80h+axis+1Ch]
        vmovss  xmm2, dword ptr [rbp+80h+axis+20h]
        vmulss  xmm6, xmm2, xmm6
      }
      if ( v93 == 2 )
      {
        __asm
        {
          vxorps  xmm5, xmm1, cs:__xmm@80000000800000008000000080000000
          vmovaps xmm7, xmm5
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm5, xmm7, xmm1
          vmovaps xmm7, xmm5
        }
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [r12+4], xmm7
    vmovss  dword ptr [r12], xmm6
    vmovss  dword ptr [r12+8], xmm10
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v121 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v122 & 0x7F800000) == 2139095040 )
    goto LABEL_115;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v123 & 0x7F800000) == 2139095040 )
  {
LABEL_115:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 175, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v124 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v125 & 0x7F800000) == 2139095040 )
    goto LABEL_116;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  [rsp+180h+var_140], xmm0
  }
  if ( (v126 & 0x7F800000) == 2139095040 )
  {
LABEL_116:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 176, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] )") )
      __debugbreak();
  }
  _R11 = &v135;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
G_VehicleSubmarine_CalcCollisionAccel
==============
*/
void G_VehicleSubmarine_CalcCollisionAccel(gentity_s *ent, Bounds *bounds, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  const dvar_t *v15; 
  const dvar_t *v26; 
  EntHandle *p_ownerNum; 
  unsigned __int16 number; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 
  __int16 *v37; 
  int v79; 
  int v80; 
  const Bounds *v83; 
  char *p_y; 
  int v91; 
  int v93; 
  const dvar_t *v101; 
  char v102; 
  char v138; 
  const dvar_t *v147; 
  int v156; 
  char v164; 
  int v167; 
  bool v168; 
  unsigned int v207; 
  bool v210; 
  bool v211; 
  int v216; 
  bool v217; 
  bool v223; 
  const dvar_t *v227; 
  __int64 contentmask; 
  __int64 contentmaska; 
  __int64 contentmaskb; 
  __int64 v351; 
  __int64 v352; 
  int v354; 
  vec3_t *in1; 
  vec3_t v363; 
  vec3_t v364; 
  vec3_t up; 
  vec3_t right; 
  vec3_t forward; 
  vec3_t v368; 
  vec3_t v369; 
  vec3_t v370; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t v374; 
  vec3_t v375; 
  vec3_t v376; 
  int v377[4]; 
  vec3_t out; 
  int v379[4]; 
  vec3_t v380; 
  tmat43_t<vec3_t> v381; 
  int v385[21]; 
  char v386; 
  char v387; 
  char v388; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  v15 = DVARFLT_vehSubmarineSideCollMaxAngAccel;
  *(_QWORD *)v368.v = outRotAccel;
  _R15 = outRotAccel;
  _R14 = outBodyAccel;
  *(_QWORD *)v369.v = ent;
  _RSI = bounds;
  __asm
  {
    vbroadcastss xmm6, dword ptr [rdx+0Ch]
    vmulss  xmm8, xmm6, cs:__real@40000000
  }
  if ( !DVARFLT_vehSubmarineSideCollMaxAngAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideCollMaxAngAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm
  {
    vmovss  xmm7, cs:__real@3e4ccccd
    vmulss  xmm0, xmm7, dword ptr [rbx+28h]
  }
  _RBX = DVARFLT_vehSubmarineSideCollMaxAccel;
  __asm { vmovss  [rsp+4D0h+var_484], xmm0 }
  if ( !DVARFLT_vehSubmarineSideCollMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideCollMaxAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  v26 = DVARFLT_vehSubmarineFwdCollMaxAngAccel;
  __asm { vmovss  [rsp+4D0h+var_480], xmm0 }
  if ( !DVARFLT_vehSubmarineFwdCollMaxAngAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineFwdCollMaxAngAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  __asm { vmulss  xmm1, xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_vehSubmarineFwdCollMaxAccel;
  __asm { vmovss  [rsp+4D0h+var_47C], xmm1 }
  if ( !DVARFLT_vehSubmarineFwdCollMaxAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineFwdCollMaxAccel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm13, xmm0, cs:__real@3dcccccd
  }
  p_ownerNum = &ent->r.ownerNum;
  number = ent->r.ownerNum.number;
  __asm
  {
    vmovss  [rbp+3D0h+var_2F0], xmm8
    vmovups [rbp+3D0h+var_300], xmm6
  }
  if ( !number )
    goto LABEL_117;
  v33 = number;
  v34 = number - 1;
  if ( v34 >= 0x800 )
  {
    LODWORD(v351) = 2048;
    LODWORD(contentmask) = v34;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v351) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v35 = v33 - 1;
  if ( g_entities[v35].r.isInUse != g_entityIsInUse[v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v35] )
  {
    LODWORD(v351) = p_ownerNum->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v351) )
      __debugbreak();
  }
  if ( !p_ownerNum->number )
  {
LABEL_117:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 219, ASSERT_TYPE_ASSERT, "(ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  if ( !EntHandle::ent(p_ownerNum)->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 221, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [r15] }
  v37 = *(__int16 **)v369.v;
  _RAX = &_R14->v[1];
  __asm
  {
    vmovss  xmm1, dword ptr [rax]
    vmovss  [rsp+4D0h+var_474], xmm0
    vmovss  [rbp+3D0h+var_350], xmm0
    vmovss  xmm0, dword ptr [r15+4]
  }
  _RDI = *(const Bounds **)(*(_QWORD *)v369.v + 352i64);
  __asm
  {
    vmovss  [rsp+4D0h+var_478], xmm0
    vmovss  [rbp+3D0h+var_34C], xmm0
    vmovss  xmm0, dword ptr [r15+8]
  }
  _RDI += 10;
  *(_QWORD *)v370.v = &_R14->y;
  __asm
  {
    vmovss  [rbp+3D0h+var_348], xmm0
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rsp+4D0h+var_470+4], xmm0
    vmovss  xmm0, dword ptr [rdi+24h]
    vmovss  dword ptr [rbp+3D0h+angles], xmm0
    vmovss  dword ptr [rsp+4D0h+var_470], xmm1
    vmovss  xmm1, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+3D0h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rdi+2Ch]
  }
  *(_QWORD *)v363.v = _RDI;
  __asm { vmovss  dword ptr [rbp+3D0h+angles+8], xmm0 }
  AngleVectors(&angles, &forward, &right, &up);
  __asm
  {
    vmovss  xmm4, cs:__real@bf800000
    vmovss  xmm7, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+8]
    vmovss  xmm9, dword ptr [rbp+3D0h+up]
    vmovss  xmm10, dword ptr [rbp+3D0h+up+4]
    vmovss  xmm11, dword ptr [rbp+3D0h+up+8]
    vmovss  xmm2, dword ptr [rbp+3D0h+right+4]
    vmovss  xmm3, dword ptr [rbp+3D0h+right+8]
    vmovss  xmm6, dword ptr [rbp+3D0h+forward+4]
    vmovss  xmm8, dword ptr [rbp+3D0h+forward+8]
    vmulss  xmm0, xmm9, xmm4
    vmovss  [rbp+3D0h+var_2DC], xmm0
    vmulss  xmm1, xmm10, xmm4
    vmovss  [rbp+3D0h+var_2D8], xmm1
    vmovss  xmm1, dword ptr [rbp+3D0h+right]
    vmovss  [rbp+3D0h+var_2D0], xmm1
    vmulss  xmm0, xmm11, xmm4
    vmovss  [rbp+3D0h+var_2D4], xmm0
    vmulss  xmm0, xmm1, xmm4
    vmulss  xmm1, xmm2, xmm4
    vmovss  [rbp+3D0h+var_2C4], xmm0
    vmulss  xmm0, xmm3, xmm4
    vmovss  xmm4, dword ptr [rdi+8]
    vmovss  [rbp+3D0h+var_2C0], xmm1
    vmovss  xmm1, dword ptr [rbp+3D0h+forward]
    vmovss  [rbp+3D0h+var_2BC], xmm0
    vmulss  xmm0, xmm1, xmm7
    vmovss  [rbp+3D0h+var_2CC], xmm2
    vaddss  xmm2, xmm0, dword ptr [rdi]
    vmovss  [rbp+3D0h+var_2B8], xmm1
    vmovss  [rbp+3D0h+var_2C8], xmm3
    vmovss  xmm3, dword ptr [rdi+4]
    vmulss  xmm1, xmm9, xmm5
    vaddss  xmm12, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm2, xmm0, xmm3
    vmulss  xmm1, xmm10, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm7
    vaddss  xmm2, xmm0, xmm4
    vmulss  xmm1, xmm11, xmm5
    vaddss  xmm4, xmm2, xmm1
  }
  v79 = 0;
  __asm
  {
    vmovss  dword ptr [rbp+3D0h+start+8], xmm4
    vmovss  [rbp+3D0h+var_2E8], xmm9
    vmovss  [rbp+3D0h+var_2E4], xmm10
    vmovss  [rbp+3D0h+var_2E0], xmm11
    vmovss  [rbp+3D0h+var_2B4], xmm6
    vmovss  [rbp+3D0h+var_2B0], xmm8
    vmovss  dword ptr [rbp+3D0h+start], xmm12
    vmovss  dword ptr [rbp+3D0h+start+4], xmm3
  }
  v80 = 0;
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm15, cs:__real@3c23d70a
  }
  v83 = _RDI + 2;
  v354 = 0;
  p_y = &v386;
  *(_QWORD *)v364.v = _RDI + 2;
  in1 = (vec3_t *)&v386;
  _R13 = v385;
  _R14 = &v387;
  _R12 = 0i64;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+r12+3D0h+var_300]
      vmulss  xmm9, xmm0, cs:__real@3fe00000
    }
    v91 = *v37;
    __asm { vmulss  xmm0, xmm9, dword ptr [rdi] }
    v93 = *((_DWORD *)v37 + 106);
    __asm
    {
      vmovss  xmm7, cs:__real@42100000
      vmovss  xmm6, cs:__real@42700000
      vaddss  xmm1, xmm0, xmm12
      vmulss  xmm0, xmm9, dword ptr [r13+0]
      vmovss  dword ptr [rbp+3D0h+end], xmm1
      vaddss  xmm1, xmm0, xmm3
      vmulss  xmm0, xmm9, dword ptr [r13+4]
      vmovss  dword ptr [rbp+3D0h+end+4], xmm1
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+3D0h+end+8], xmm1
    }
    G_Main_TraceCapsule((trace_t *)(p_y - 16), &start, &end, v83, v91, v93);
    v101 = DCONST_DVARINT_bg_vehicleDebug;
    if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v101);
    v102 = 0;
    if ( v101->current.integer )
    {
      if ( bUseOrigin )
      {
        __asm
        {
          vmovaps xmm5, xmm11
          vmovaps xmm4, xmm11
          vmovaps xmm2, xmm11
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm3, xmm6, dword ptr [rbp+3D0h+forward]
          vmulss  xmm2, xmm7, dword ptr [rbp+3D0h+up]
          vmulss  xmm4, xmm6, dword ptr [rbp+3D0h+forward+4]
          vaddss  xmm5, xmm3, xmm2
          vmulss  xmm2, xmm7, dword ptr [rbp+3D0h+up+4]
          vmulss  xmm3, xmm6, dword ptr [rbp+3D0h+forward+8]
          vaddss  xmm4, xmm4, xmm2
          vmulss  xmm2, xmm7, dword ptr [rbp+3D0h+up+8]
          vaddss  xmm2, xmm3, xmm2
        }
      }
      __asm
      {
        vaddss  xmm6, xmm5, dword ptr [rbp+3D0h+start]
        vaddss  xmm7, xmm4, dword ptr [rbp+3D0h+start+4]
        vmovss  xmm3, dword ptr [r14-18h]
        vcomiss xmm3, xmm14
        vaddss  xmm5, xmm5, dword ptr [rbp+3D0h+end]
        vaddss  xmm4, xmm4, dword ptr [rbp+3D0h+end+4]
        vaddss  xmm8, xmm2, dword ptr [rbp+3D0h+start+8]
        vaddss  xmm10, xmm2, dword ptr [rbp+3D0h+end+8]
        vmovss  dword ptr [rbp+3D0h+var_390], xmm5
        vmovss  dword ptr [rbp+3D0h+var_390+4], xmm4
        vmovss  dword ptr [rbp+3D0h+var_380], xmm6
        vmovss  dword ptr [rbp+3D0h+var_380+4], xmm7
        vmovss  dword ptr [rbp+3D0h+var_380+8], xmm8
        vmovss  dword ptr [rbp+3D0h+var_390+8], xmm10
      }
      G_DebugLine(&v376, &v375, &colorGreen, 1);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14-18h]
      vcomiss xmm0, xmm14
    }
    if ( !v102 )
      goto LABEL_59;
    if ( v80 < 4 )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [r14-4]
        vmovss  xmm3, dword ptr [r14-8]
        vmulss  xmm1, xmm3, dword ptr [rdi]
        vmovss  xmm4, dword ptr [r14]
        vmulss  xmm3, xmm3, dword ptr [rbp+3D0h+forward]
        vsubss  xmm7, xmm14, xmm0
        vmulss  xmm9, xmm9, xmm0
        vmulss  xmm0, xmm5, dword ptr [r13+0]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [r13+4]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, xmm14
        vmulss  xmm2, xmm5, dword ptr [rbp+3D0h+forward+4]
        vmaxss  xmm8, xmm0, xmm11
        vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+forward+8]
        vaddss  xmm3, xmm3, xmm2
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm11
      }
      _RDI = 0x140000000ui64;
      if ( (unsigned int)v80 <= 4 )
      {
        v138 = _R14[41];
        __asm { vmovss  xmm6, dword ptr [r12+rdi+7FB4CF0h] }
        _RAX = vec3_t::operator[](*(vec3_t **)v368.v, traceIdx2RotAxis[_R12]);
        if ( v138 )
        {
          __asm
          {
            vmulss  xmm0, xmm6, xmm15
            vmulss  xmm1, xmm0, [rsp+4D0h+var_484]
            vmovss  dword ptr [rax], xmm1
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm7, xmm8
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, [rsp+4D0h+var_484]
            vmovss  dword ptr [rax], xmm2
          }
        }
      }
      _RBX = DVARFLT_vehSubmarineSideProbeMinDist;
      if ( !DVARFLT_vehSubmarineSideProbeMinDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideProbeMinDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm9, dword ptr [rbx+28h] }
      if ( v102 )
      {
        v147 = DVARFLT_vehSubmarineSideProbeMinDist;
        if ( !DVARFLT_vehSubmarineSideProbeMinDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineSideProbeMinDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v147);
        __asm
        {
          vdivss  xmm0, xmm9, dword ptr [rbx+28h]
          vsubss  xmm1, xmm14, xmm0
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm8, cs:__real@3dcccccd
          vmulss  xmm1, xmm0, xmm7
        }
      }
      _RBX = traceIdx2BodyAxis[_R12];
      __asm
      {
        vmulss  xmm0, xmm1, dword ptr [r12+rdi+7FB4D08h]
        vmulss  xmm6, xmm0, [rsp+4D0h+var_480]
      }
      if ( (unsigned int)_RBX >= 3 )
      {
        LODWORD(v351) = 3;
        LODWORD(contentmaska) = traceIdx2BodyAxis[_R12];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
          __debugbreak();
      }
      _RSI = outBodyAccel;
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rsi+rbx*4]
        vmovss  dword ptr [rsi+rbx*4], xmm0
      }
LABEL_59:
      __asm { vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000 }
      goto LABEL_60;
    }
    AngleVectors(&angles, v381.m, &v381.m[1], &v381.m[2]);
    __asm
    {
      vmovss  [rbp+3D0h+var_30C], xmm11
      vmovss  [rbp+3D0h+var_308], xmm11
      vmovss  [rbp+3D0h+var_304], xmm11
    }
    MatrixTransposeTransformVector43(in1, &v381, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+3D0h+out]
      vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm10, xmm0, xmm12
      vcomiss xmm10, cs:__real@3f7d70a4
    }
    if ( v102 | v164 )
    {
      if ( !_R14[41] )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f8ccccd
          vsubss  xmm0, xmm0, dword ptr [r14-18h]
          vminss  xmm9, xmm0, xmm14
        }
        if ( _R14 - 8 == (char *)&v374 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
          __debugbreak();
        if ( _R13 - 1 == (int *)&v374 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
          __debugbreak();
        __asm
        {
          vmovss  xmm5, dword ptr [r13+4]
          vmovss  xmm4, dword ptr [r14]
          vmovss  xmm7, dword ptr [r14-4]
          vmovss  xmm6, dword ptr [r13+0]
          vmulss  xmm2, xmm6, dword ptr [rbx]
          vmulss  xmm1, xmm7, xmm5
          vmulss  xmm0, xmm6, xmm4
          vsubss  xmm8, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [rdi]
          vmulss  xmm0, xmm5, dword ptr [rbx]
          vsubss  xmm5, xmm1, xmm0
          vmulss  xmm1, xmm7, dword ptr [rdi]
          vsubss  xmm4, xmm2, xmm1
          vmulss  xmm0, xmm8, xmm8
          vmulss  xmm3, xmm5, xmm5
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm14, xmm0
          vdivss  xmm2, xmm14, xmm0
          vmulss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rbp+3D0h+var_3B0], xmm0
          vmulss  xmm0, xmm2, xmm4
          vmulss  xmm1, xmm2, xmm5
          vmovss  dword ptr [rbp+3D0h+var_3B0+8], xmm0
          vmovss  dword ptr [rbp+3D0h+var_3B0+4], xmm1
        }
        MatrixTransposeTransformVector43(&v374, &v381, &v380);
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rbp+3D0h+var_340+4]
          vmulss  xmm2, xmm1, xmm10
          vmulss  xmm3, xmm2, [rsp+4D0h+var_47C]
          vmulss  xmm1, xmm9, dword ptr [rbp+3D0h+var_340+8]
          vmulss  xmm2, xmm1, xmm10
          vmovss  [rbp+3D0h+var_370], xmm3
          vmulss  xmm3, xmm2, [rsp+4D0h+var_47C]
          vxorps  xmm0, xmm3, xmm12
        }
        v207 = 0;
        _RDI = v377;
        __asm { vmovss  [rbp+3D0h+var_36C], xmm0 }
        _RSI = *(_QWORD *)v368.v - (_QWORD)v377;
        do
        {
          v210 = v207 <= 3;
          if ( v207 >= 3 )
          {
            LODWORD(v351) = 3;
            LODWORD(contentmaska) = v207;
            v211 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351);
            v210 = !v211;
            if ( v211 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm6, dword ptr [rdi]
            vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm0, xmm15
          }
          if ( !v210 )
          {
            if ( v207 >= 3 )
            {
              LODWORD(v351) = 3;
              LODWORD(contentmaska) = v207;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
                __debugbreak();
              LODWORD(v352) = 3;
              LODWORD(contentmaskb) = v207;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaskb, v352) )
                __debugbreak();
            }
            __asm { vmovss  dword ptr [rsi+rdi], xmm6 }
          }
          ++v207;
          ++_RDI;
        }
        while ( (int)v207 < 2 );
      }
      __asm { vaddss  xmm7, xmm10, cs:__real@3dcccccd }
      _RDI = *(_QWORD *)v370.v;
      v216 = 1;
      v217 = 1;
      do
      {
        if ( !v217 )
        {
          LODWORD(v351) = 3;
          LODWORD(contentmaska) = v216;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rdi+rsi]
          vmulss  xmm6, xmm0, xmm13
        }
        if ( (unsigned int)v216 >= 3 )
        {
          LODWORD(v351) = 3;
          LODWORD(contentmaska) = v216;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
            __debugbreak();
        }
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
        }
        _RDI += 4i64;
        v217 = (unsigned int)++v216 < 3;
      }
      while ( v216 < 3 );
      v79 = 0;
    }
    else
    {
      _RDI = outBodyAccel;
      __asm { vaddss  xmm7, xmm10, cs:__real@3dcccccd }
      v167 = 0;
      v168 = 1;
      do
      {
        if ( !v168 )
        {
          LODWORD(v351) = 3;
          LODWORD(contentmaska) = v167;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rsi+rdi]
          vmulss  xmm6, xmm0, xmm13
        }
        if ( (unsigned int)v167 >= 3 )
        {
          LODWORD(v351) = 3;
          LODWORD(contentmaska) = v167;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
            __debugbreak();
        }
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
        }
        _RDI = (vec3_t *)((char *)_RDI + 4);
        v168 = (unsigned int)++v167 < 3;
      }
      while ( v167 < 3 );
      v79 = 0;
    }
LABEL_60:
    ++_R12;
    v156 = v354 + 1;
    p_y = (char *)&in1[7].y;
    v354 = v156;
    _R13 += 3;
    in1 = (vec3_t *)((char *)in1 + 88);
    _R14 += 88;
    if ( v156 >= 5 )
      break;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+3D0h+start+8]
      vmovss  xmm3, dword ptr [rbp+3D0h+start+4]
      vmovss  xmm12, dword ptr [rbp+3D0h+start]
    }
    v37 = *(__int16 **)v369.v;
    v80 = v156;
    v83 = *(const Bounds **)v364.v;
  }
  _R14 = *(_QWORD *)v368.v;
  _RDI = (char *)v379 - *(_QWORD *)v368.v;
  v223 = 1;
  _RBX = *(_QWORD *)v368.v;
  do
  {
    if ( !v223 )
    {
      LODWORD(v351) = 3;
      LODWORD(contentmaska) = v79;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rdi+rbx] }
    if ( (unsigned int)v79 >= 3 )
    {
      LODWORD(v351) = 3;
      LODWORD(contentmaska) = v79;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", contentmaska, v351) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    _RBX += 4i64;
    v223 = (unsigned int)++v79 < 3;
  }
  while ( v79 < 3 );
  v227 = DCONST_DVARINT_bg_vehicleDebug;
  _RSI = outBodyAccel;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v227);
  if ( v227->current.integer )
  {
    _RBX = *(_QWORD *)v363.v;
    __asm
    {
      vmovss  dword ptr [rbp+3D0h+angles], xmm11
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rbp+3D0h+angles+4], xmm0
      vmovss  dword ptr [rbp+3D0h+angles+8], xmm11
    }
    AngleVectors(&angles, &v380, &v369, &v368);
    __asm
    {
      vmovss  xmm5, cs:__real@41400000
      vmovss  xmm6, cs:__real@42f00000
      vmulss  xmm1, xmm6, dword ptr [rbp+3D0h+forward]
      vaddss  xmm3, xmm1, dword ptr [rbx]
      vmulss  xmm2, xmm5, dword ptr [rbp+3D0h+right+4]
      vmovss  xmm9, cs:__real@42100000
      vmulss  xmm0, xmm9, dword ptr [rbp+3D0h+up]
      vmulss  xmm1, xmm9, dword ptr [rbp+3D0h+up+4]
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm0, xmm5, dword ptr [rbp+3D0h+right]
      vsubss  xmm8, xmm4, xmm0
      vmulss  xmm0, xmm6, dword ptr [rbp+3D0h+forward+4]
      vaddss  xmm3, xmm0, dword ptr [rbx+4]
      vmulss  xmm0, xmm9, dword ptr [rbp+3D0h+up+8]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm6, dword ptr [rbp+3D0h+forward+8]
      vaddss  xmm3, xmm1, dword ptr [rbx+8]
      vmovss  xmm1, dword ptr [r14]
      vsubss  xmm7, xmm4, xmm2
      vmulss  xmm2, xmm5, dword ptr [rbp+3D0h+right+8]
      vaddss  xmm4, xmm3, xmm0
      vmovss  xmm0, dword ptr [r14+4]
      vsubss  xmm6, xmm4, xmm2
      vxorps  xmm4, xmm0, xmm12
      vmulss  xmm2, xmm4, dword ptr [rbp+3D0h+var_400]
      vxorps  xmm5, xmm1, xmm12
      vmulss  xmm0, xmm5, dword ptr [rbp+3D0h+var_410]
      vmulss  xmm1, xmm5, dword ptr [rbp+3D0h+var_410+4]
      vaddss  xmm3, xmm2, xmm8
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+var_400+4]
      vaddss  xmm3, xmm0, xmm7
      vaddss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm4, dword ptr [rbp+3D0h+var_400+8]
      vmovss  dword ptr [rsp+4D0h+var_460], xmm2
      vmulss  xmm2, xmm5, dword ptr [rbp+3D0h+var_410+8]
      vaddss  xmm3, xmm1, xmm6
      vaddss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rsp+4D0h+var_460+8], xmm1
      vmovss  dword ptr [rbp+3D0h+var_450], xmm8
      vmovss  dword ptr [rbp+3D0h+var_450+4], xmm7
      vmovss  dword ptr [rbp+3D0h+var_450+8], xmm6
      vmovss  dword ptr [rsp+4D0h+var_460+4], xmm0
    }
    G_DebugLine(&v364, &v363, &colorCyan, 1);
    __asm
    {
      vmovss  xmm0, [rsp+4D0h+var_478]
      vxorps  xmm4, xmm0, xmm12
      vmovss  xmm0, [rsp+4D0h+var_474]
      vmulss  xmm1, xmm4, dword ptr [rbp+3D0h+var_400]
      vaddss  xmm3, xmm1, dword ptr [rbp+3D0h+var_450]
      vxorps  xmm5, xmm0, xmm12
      vmulss  xmm0, xmm5, dword ptr [rbp+3D0h+var_410]
      vmulss  xmm2, xmm5, dword ptr [rbp+3D0h+var_410+4]
      vaddss  xmm1, xmm3, xmm0
      vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+var_400+4]
      vaddss  xmm3, xmm0, dword ptr [rbp+3D0h+var_450+4]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rbp+3D0h+var_400+8]
      vaddss  xmm3, xmm2, dword ptr [rbp+3D0h+var_450+8]
      vmovss  dword ptr [rsp+4D0h+var_460], xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+3D0h+var_410+8]
      vaddss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rsp+4D0h+var_460+8], xmm2
      vmovss  dword ptr [rsp+4D0h+var_460+4], xmm0
    }
    G_DebugLine(&v364, &v363, &colorBlue, 1);
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+4]
      vmovss  xmm5, dword ptr [rsi+8]
      vmulss  xmm1, xmm4, dword ptr [rbp+3D0h+right]
      vaddss  xmm3, xmm1, dword ptr [rbp+3D0h+var_450]
      vmulss  xmm0, xmm5, dword ptr [rbp+3D0h+up]
      vmulss  xmm2, xmm5, dword ptr [rbp+3D0h+up+4]
      vaddss  xmm1, xmm3, xmm0
      vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+right+4]
      vaddss  xmm3, xmm0, dword ptr [rbp+3D0h+var_450+4]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rbp+3D0h+right+8]
      vaddss  xmm3, xmm2, dword ptr [rbp+3D0h+var_450+8]
      vmovss  dword ptr [rsp+4D0h+var_460], xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+3D0h+up+8]
      vaddss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rsp+4D0h+var_460+8], xmm2
      vmovss  dword ptr [rsp+4D0h+var_460+4], xmm0
    }
    G_DebugLine(&v364, &v363, &colorMagenta, 1);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+4D0h+var_470]
      vmovss  xmm5, dword ptr [rsp+4D0h+var_470+4]
      vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+right]
      vaddss  xmm2, xmm0, dword ptr [rbp+3D0h+var_450]
      vmulss  xmm1, xmm5, dword ptr [rbp+3D0h+up]
      vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+right+4]
      vaddss  xmm3, xmm0, dword ptr [rbp+3D0h+var_450+4]
      vmulss  xmm0, xmm4, dword ptr [rbp+3D0h+right+8]
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+3D0h+up+4]
      vmovss  dword ptr [rsp+4D0h+var_460], xmm2
      vaddss  xmm2, xmm3, xmm1
      vaddss  xmm3, xmm0, dword ptr [rbp+3D0h+var_450+8]
      vmulss  xmm1, xmm5, dword ptr [rbp+3D0h+up+8]
      vmovss  dword ptr [rsp+4D0h+var_460+4], xmm2
      vaddss  xmm2, xmm3, xmm1
      vmovss  dword ptr [rsp+4D0h+var_460+8], xmm2
    }
    G_DebugLine(&v364, &v363, &colorLtGreen, 1);
    __asm
    {
      vmovss  xmm8, cs:__real@40800000
      vmulss  xmm7, xmm8, dword ptr [rbp+3D0h+up]
      vmovss  xmm6, dword ptr [rbp+3D0h+var_450]
      vmulss  xmm5, xmm8, dword ptr [rbp+3D0h+up+4]
      vmovss  xmm4, dword ptr [rbp+3D0h+var_450+4]
      vmulss  xmm3, xmm8, dword ptr [rbp+3D0h+up+8]
      vmovss  xmm2, dword ptr [rbp+3D0h+var_450+8]
      vaddss  xmm1, xmm7, xmm6
      vmovss  dword ptr [rsp+4D0h+var_460], xmm1
      vaddss  xmm1, xmm5, xmm4
      vmovss  dword ptr [rsp+4D0h+var_460+4], xmm1
      vaddss  xmm1, xmm3, xmm2
      vsubss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rsp+4D0h+var_460+8], xmm1
      vmovss  dword ptr [rbp+3D0h+var_3F0], xmm0
      vsubss  xmm1, xmm4, xmm5
      vsubss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rbp+3D0h+var_3F0+4], xmm1
      vmovss  dword ptr [rbp+3D0h+var_3F0+8], xmm0
    }
    G_DebugLine(&v370, &v363, &colorBlack, 1);
    __asm
    {
      vmulss  xmm7, xmm8, dword ptr [rbp+3D0h+right]
      vmovss  xmm6, dword ptr [rbp+3D0h+var_450]
      vmulss  xmm5, xmm8, dword ptr [rbp+3D0h+right+4]
      vmovss  xmm4, dword ptr [rbp+3D0h+var_450+4]
      vmulss  xmm3, xmm8, dword ptr [rbp+3D0h+right+8]
      vmovss  xmm2, dword ptr [rbp+3D0h+var_450+8]
      vaddss  xmm1, xmm7, xmm6
      vmovss  dword ptr [rsp+4D0h+var_460], xmm1
      vaddss  xmm1, xmm5, xmm4
      vmovss  dword ptr [rsp+4D0h+var_460+4], xmm1
      vaddss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rsp+4D0h+var_460+8], xmm1
      vsubss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rbp+3D0h+var_3F0], xmm0
      vsubss  xmm0, xmm2, xmm3
      vsubss  xmm1, xmm4, xmm5
      vmovss  dword ptr [rbp+3D0h+var_3F0+8], xmm0
      vmovss  dword ptr [rbp+3D0h+var_3F0+4], xmm1
    }
    G_DebugLine(&v370, &v363, &colorBlack, 1);
  }
  _R11 = &v388;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
G_VehicleSubmarine_CheckForPredictedCrash
==============
*/
void G_VehicleSubmarine_CheckForPredictedCrash(gentity_s *ent)
{
  char v5; 
  int number; 
  int contentmask; 
  char v19; 
  scrContext_t *v20; 
  vec3_t end; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 468, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 469, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _RSI = DVARFLT_vehHelicopterLookaheadTime;
  _RBX = ent->vehicle;
  if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rsi+28h]
  }
  if ( !v5 )
  {
    _RSI = _RBX->phys.vel.v;
    __asm { vucomiss xmm0, dword ptr [rsi] }
    if ( v5 )
    {
      __asm { vucomiss xmm0, dword ptr [rbx+13Ch] }
      if ( v5 )
        __asm { vucomiss xmm0, dword ptr [rbx+140h] }
    }
    _RBP = DVARFLT_vehHelicopterLookaheadTime;
    if ( !DVARFLT_vehHelicopterLookaheadTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehHelicopterLookaheadTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+28h]
      vmulss  xmm0, xmm2, dword ptr [rsi]
      vaddss  xmm1, xmm0, dword ptr [rbx+0F0h]
    }
    number = ent->s.number;
    contentmask = ent->clipmask;
    __asm
    {
      vmovss  dword ptr [rsp+0E8h+end], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+4]
      vaddss  xmm1, xmm0, dword ptr [rbx+0F4h]
      vmovss  dword ptr [rsp+0E8h+end+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vaddss  xmm1, xmm0, dword ptr [rbx+0F8h]
      vmovss  dword ptr [rsp+0E8h+end+8], xmm1
    }
    G_Main_TraceCapsule(&results, &_RBX->phys.origin, &end, &_RBX->phys.bounds, number, contentmask);
    __asm
    {
      vmovss  xmm0, [rsp+0E8h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    if ( v19 )
    {
      v20 = ScriptContext_Server();
      Scr_AddVector(v20, results.normal.v);
      Scr_AddVector(v20, _RSI);
      GScr_Notify(ent, scr_const.veh_predictedcollision, 2u);
    }
  }
}

/*
==============
G_VehicleSubmarine_ClipVelocity
==============
*/
void G_VehicleSubmarine_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmulss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rdx]
    vmulss  xmm2, xmm5, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rdx+8]
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vaddss  xmm1, xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v3 )
  {
    __asm
    {
      vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm5, xmm2
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [r8], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdx+4]
      vaddss  xmm1, xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [r8+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdx+8]
      vaddss  xmm1, xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [r8+8], xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [r8], xmm4 }
    out->v[1] = in->v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [r8+8], xmm0
    }
  }
}

/*
==============
G_VehicleSubmarine_GammaMap
==============
*/

__int64 __fastcall G_VehicleSubmarine_GammaMap(double gamma, char in_val)
{
  __int64 result; 

  __asm
  {
    vucomiss xmm0, cs:__real@3f800000
    vmovaps xmm1, xmm0; Y
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3c010204; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42fe0000
    vcvttss2si ecx, xmm1
  }
  if ( _ECX > 127 )
    LOBYTE(_ECX) = 127;
  result = (unsigned __int8)-(char)_ECX;
  if ( in_val >= 0 )
    return (unsigned __int8)_ECX;
  return result;
}

/*
==============
G_VehicleSubmarine_UpdatePlayerMove
==============
*/
void G_VehicleSubmarine_UpdatePlayerMove(Vehicle *veh)
{
  gentity_s *ent; 
  gentity_s *v21; 
  gclient_s *client; 
  const dvar_t *v23; 
  char v24; 
  char v27; 
  char v81; 
  const dvar_t *v82; 
  bool v95; 
  const dvar_t *v157; 
  const dvar_t *v160; 
  char v183; 
  __int64 EntityHitId; 
  bool v220; 
  __int64 bumpEntityNum; 
  scrContext_t *v277; 
  scrContext_t *v278; 
  const vec4_t *v306; 
  float fmt; 
  int contentmask; 
  int v320; 
  char move[4]; 
  __int64 v322; 
  __int64 v323; 
  GStepSlideMove stepSlide; 
  vec3_t outBodyAccel; 
  int v326; 
  vec3_t start; 
  vec3_t outRotAccel; 
  vec3_t out; 
  float v332[4]; 
  vec3_t in1; 
  tmat43_t<vec3_t> forward; 
  Bounds bounds; 
  vec3_t angles; 
  vec3_t end; 
  float value[6]; 
  trace_t results; 
  char v340; 
  void *retaddr; 

  _RAX = &retaddr;
  v323 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _R12 = veh;
  *(_DWORD *)move = 0;
  __asm
  {
    vmovss  xmm0, cs:__real@41f00000
    vmovss  dword ptr [rbp+200h+in1], xmm0
    vxorps  xmm15, xmm15, xmm15
    vmovss  dword ptr [rbp+200h+in1+4], xmm15
    vmovss  xmm0, cs:__real@41000000
    vmovss  dword ptr [rbp+200h+in1+8], xmm0
    vmovups xmm1, cs:__xmm@41400000000000000000000000000000
    vmovups xmmword ptr [rbp+200h+bounds.midPoint], xmm1
    vmovss  xmm0, cs:__real@41400000
    vmovss  dword ptr [rbp+200h+bounds.halfSize+4], xmm0
    vmovss  dword ptr [rbp+200h+bounds.halfSize+8], xmm0
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 578, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RSI = G_Vehicle_GetServerDef(_R12->defIndex);
  ent = _R12->ent;
  if ( !_R12->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 583, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  LOWORD(v320) = 0;
  __asm { vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000 }
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v21 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v21->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 591, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v21->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    v21->client->linkAnglesFrac = 0.0;
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v21->client->ps.pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v21->client->ps.pm_flags, ACTIVE, 0xFu) )
    {
      client = v21->client;
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      GVehicles::ms_gVehiclesSystem->GetVehicleSubPlayerMove(GVehicles::ms_gVehiclesSystem, &client->sess.cmd, move);
      v23 = DVARBOOL_vehSubmarineInvertUpDown;
      if ( !DVARBOOL_vehSubmarineInvertUpDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineInvertUpDown") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      v95 = !v23->current.enabled;
      v24 = move[0];
      if ( !v95 )
      {
        v24 = -move[0];
        move[0] = -move[0];
      }
      _R15 = DVARFLT_vehSubmarineVertControlGamma;
      if ( !DVARFLT_vehSubmarineVertControlGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineVertControlGamma") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R15);
      __asm { vmovss  xmm0, dword ptr [r15+28h]; gamma }
      move[0] = G_VehicleSubmarine_GammaMap(*(double *)&_XMM0, v24);
      v27 = move[1];
      _R14 = DVARFLT_vehSubmarineHorizControlGamma;
      if ( !DVARFLT_vehSubmarineHorizControlGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineHorizControlGamma") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm { vmovss  xmm0, dword ptr [r14+28h]; gamma }
      move[1] = G_VehicleSubmarine_GammaMap(*(double *)&_XMM0, v27);
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v21->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0C84h]
        vxorps  xmm1, xmm0, xmm8
      }
      _RAX = v21->client;
      __asm
      {
        vmovss  dword ptr [rax+5ED0h], xmm1
        vmovss  xmm0, dword ptr [rsi+0C80h]
      }
      _RAX = v21->client;
      __asm
      {
        vmovss  dword ptr [rax+5EE8h], xmm0
        vmovss  xmm0, dword ptr [rsi+0C88h]
        vxorps  xmm1, xmm0, xmm8
      }
      _RAX = v21->client;
      __asm
      {
        vmovss  dword ptr [rax+5ECCh], xmm1
        vmovss  xmm0, dword ptr [rsi+0C8Ch]
      }
      _RAX = v21->client;
      __asm { vmovss  dword ptr [rax+5EE4h], xmm0 }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
      {
        __asm { vmovss  xmm0, dword ptr [rsi+0C90h] }
        _RAX = v21->client;
        __asm
        {
          vmovss  dword ptr [rax+5F18h], xmm0
          vmovss  xmm1, dword ptr [rsi+0C94h]
        }
        _RAX = v21->client;
        __asm
        {
          vmovss  dword ptr [rax+5F00h], xmm1
          vmovss  xmm0, dword ptr [rsi+0C9Ch]
        }
        _RAX = v21->client;
        __asm
        {
          vmovss  dword ptr [rax+5F14h], xmm0
          vmovss  xmm1, dword ptr [rsi+0C98h]
        }
        _RAX = v21->client;
        __asm { vmovss  dword ptr [rax+5EFCh], xmm1 }
      }
      G_SnapToViewAngleClampGoal(&v21->client->link_viewClamp);
    }
  }
  G_VehicleSubmarine_CalcAccel(ent, move, &outBodyAccel, &outRotAccel);
  G_VehicleSubmarine_CalcCollisionAccel(ent, &bounds, &outBodyAccel, &outRotAccel);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmovss  xmm10, cs:__real@3a83126f
    vmulss  xmm6, xmm11, xmm10
  }
  _RDI = DVARFLT_vehSubmarineYawDampening;
  if ( !DVARFLT_vehSubmarineYawDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineYawDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vmulss  xmm2, xmm6, dword ptr [rbp+200h+outRotAccel+4]
    vmulss  xmm1, xmm1, dword ptr [r12+16Ch]
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r12+16Ch], xmm2
  }
  _RDI = DVARFLT_vehSubmarinePitchDampening;
  if ( !DVARFLT_vehSubmarinePitchDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarinePitchDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vmulss  xmm2, xmm6, dword ptr [rbp+200h+outRotAccel]
    vmulss  xmm1, xmm1, dword ptr [r12+168h]
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r12+168h], xmm2
  }
  _RDI = DVARFLT_vehSubmarineRollDampening;
  if ( !DVARFLT_vehSubmarineRollDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vmulss  xmm2, xmm6, dword ptr [rbp+200h+outRotAccel+8]
    vmulss  xmm1, xmm1, dword ptr [r12+170h]
    vaddss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r12+170h], xmm2
    vmulss  xmm0, xmm11, dword ptr [r12+16Ch]
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, dword ptr [r12+118h]
    vmulss  xmm4, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm4, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm0, xmm1, xmm3, 1
    vsubss  xmm0, xmm4, xmm0
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [r12+10Ch], xmm1
    vmulss  xmm0, xmm11, dword ptr [r12+168h]
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, dword ptr [r12+114h]
    vmovss  dword ptr [r12+108h], xmm2
  }
  _RDI = DVARFLT_vehSubmarineMaxUpPitch;
  if ( !DVARFLT_vehSubmarineMaxUpPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxUpPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vcomiss xmm0, dword ptr [r12+108h]
  }
  if ( v81 )
  {
    v82 = DVARFLT_vehSubmarineMaxUpPitch;
    if ( !DVARFLT_vehSubmarineMaxUpPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxUpPitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    LODWORD(_R12->phys.angles.v[0]) = v82->current.integer;
LABEL_58:
    _R12->phys.rotVel.v[0] = 0.0;
    goto LABEL_59;
  }
  _RDI = DVARFLT_vehSubmarineMaxDownPitch;
  if ( !DVARFLT_vehSubmarineMaxDownPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxDownPitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, xmm8
    vcomiss xmm1, dword ptr [r12+108h]
  }
  if ( !(v81 | v95) )
  {
    _RDI = DVARFLT_vehSubmarineMaxDownPitch;
    if ( !DVARFLT_vehSubmarineMaxDownPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxDownPitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vxorps  xmm1, xmm0, xmm8
      vmovss  dword ptr [r12+108h], xmm1
    }
    goto LABEL_58;
  }
LABEL_59:
  __asm
  {
    vmulss  xmm0, xmm11, dword ptr [r12+170h]
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, dword ptr [r12+11Ch]
    vmovss  dword ptr [r12+110h], xmm2
  }
  _RDI = DVARFLT_vehSubmarineMaxRoll;
  if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  _RDI = DVARFLT_vehSubmarineMaxRoll;
  __asm { vcomiss xmm0, dword ptr [r12+110h] }
  if ( v81 )
  {
    if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    LODWORD(_R12->phys.angles.v[2]) = _RDI->current.integer;
LABEL_75:
    _R12->phys.rotVel.v[2] = 0.0;
    goto LABEL_76;
  }
  if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vxorps  xmm1, xmm0, xmm8
    vcomiss xmm1, dword ptr [r12+110h]
  }
  if ( !(v81 | v95) )
  {
    _RDI = DVARFLT_vehSubmarineMaxRoll;
    if ( !DVARFLT_vehSubmarineMaxRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vxorps  xmm1, xmm0, xmm8
      vmovss  dword ptr [r12+110h], xmm1
    }
    goto LABEL_75;
  }
LABEL_76:
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+200h+outRotAccel]
    vucomiss xmm0, xmm15
  }
  if ( v95 )
  {
    _RDI = DVARFLT_vehSubmarineMinVelNoRestore;
    if ( !DVARFLT_vehSubmarineMinVelNoRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinVelNoRestore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, dword ptr [r12+144h]
    }
    if ( !(v81 | v95) )
    {
      _RDI = DVARFLT_vehSubmarinePitchRestore;
      if ( !DVARFLT_vehSubmarinePitchRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarinePitchRestore") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm0, xmm0, dword ptr [r12+108h]
        vmovss  dword ptr [r12+108h], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+200h+outRotAccel+8]
    vucomiss xmm0, xmm15
  }
  if ( v95 )
  {
    _RDI = DVARFLT_vehSubmarineRollRestore;
    if ( !DVARFLT_vehSubmarineRollRestore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineRollRestore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm0, xmm0, dword ptr [r12+110h]
      vmovss  dword ptr [r12+110h], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12+108h]
    vmovss  dword ptr [rsp+300h+var_2B8], xmm0
  }
  if ( (v322 & 0x7F800000) == 2139095040 )
    goto LABEL_195;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+10Ch]
    vmovss  dword ptr [rsp+300h+var_2B8], xmm0
  }
  if ( (v322 & 0x7F800000) == 2139095040 )
    goto LABEL_195;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+110h]
    vmovss  dword ptr [rsp+300h+var_2B8], xmm0
  }
  if ( (v322 & 0x7F800000) == 2139095040 )
  {
LABEL_195:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 654, ASSERT_TYPE_SANITY, "( !IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( phys->angles )[0] ) && !IS_NAN( ( phys->angles )[1] ) && !IS_NAN( ( phys->angles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12+108h]
    vmovss  dword ptr [rbp+200h+angles], xmm0
    vmovss  xmm1, dword ptr [r12+10Ch]
    vmovss  dword ptr [rbp+200h+angles+4], xmm1
    vmovss  xmm0, dword ptr [r12+110h]
    vmovss  dword ptr [rbp+200h+angles+8], xmm0
  }
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  __asm
  {
    vmovss  [rbp+200h+var_18C], xmm15
    vmovss  [rbp+200h+var_188], xmm15
    vmovss  [rbp+200h+var_184], xmm15
    vmovss  xmm7, dword ptr [rbp+200h+outBodyAccel]
    vmulss  xmm2, xmm7, dword ptr [rbp+200h+forward]
    vmovss  xmm6, dword ptr [rbp+200h+outBodyAccel+4]
    vmulss  xmm0, xmm6, dword ptr [rbp+200h+right]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm5, dword ptr [rbp+200h+outBodyAccel+8]
    vmulss  xmm0, xmm5, dword ptr [rbp+200h+up]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm2, xmm11
    vmulss  xmm1, xmm3, xmm10
    vaddss  xmm0, xmm1, dword ptr [r12+138h]
    vmovss  dword ptr [r12+138h], xmm0
    vmulss  xmm3, xmm7, dword ptr [rbp+200h+forward+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+200h+right+4]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm5, dword ptr [rbp+200h+up+4]
    vaddss  xmm1, xmm4, xmm0
    vmulss  xmm3, xmm1, xmm11
    vmulss  xmm2, xmm3, xmm10
    vaddss  xmm0, xmm2, dword ptr [r12+13Ch]
    vmovss  dword ptr [r12+13Ch], xmm0
    vmulss  xmm3, xmm7, dword ptr [rbp+200h+forward+8]
    vmulss  xmm2, xmm6, dword ptr [rbp+200h+right+8]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm5, dword ptr [rbp+200h+up+8]
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, xmm11
    vmulss  xmm1, xmm3, xmm10
    vaddss  xmm0, xmm1, dword ptr [r12+140h]
    vmovss  dword ptr [r12+140h], xmm0
  }
  MatrixTransposeTransformVector43(&_R12->phys.vel, &forward, &_R12->phys.bodyVel);
  _R14 = DVARFLT_vehSubmarineForwardDampening;
  if ( !DVARFLT_vehSubmarineForwardDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineForwardDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vmulss  xmm0, xmm0, dword ptr [r12+144h]
    vmovss  dword ptr [r12+144h], xmm0
  }
  _R14 = DVARFLT_vehSubmarineLateralDampening;
  if ( !DVARFLT_vehSubmarineLateralDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineLateralDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vmulss  xmm0, xmm0, dword ptr [r12+148h]
    vmovss  dword ptr [r12+148h], xmm0
  }
  _R14 = DVARFLT_vehSubmarineLateralDampening;
  if ( !DVARFLT_vehSubmarineLateralDampening && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineLateralDampening") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vmulss  xmm0, xmm0, dword ptr [r12+14Ch]
    vmovss  dword ptr [r12+14Ch], xmm0
  }
  _R14 = DVARFLT_vehSubmarineMinForwardVel;
  if ( !DVARFLT_vehSubmarineMinForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinForwardVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vcomiss xmm0, xmm15
  }
  if ( !(v81 | v95) )
  {
    _R14 = DVARFLT_vehSubmarineMinForwardVel;
    if ( !DVARFLT_vehSubmarineMinForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinForwardVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vcomiss xmm0, dword ptr [r12+144h]
    }
    if ( !(v81 | v95) )
    {
      v157 = DVARFLT_vehSubmarineMinForwardVel;
      if ( !DVARFLT_vehSubmarineMinForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMinForwardVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v157);
      LODWORD(_R12->phys.bodyVel.v[0]) = v157->current.integer;
    }
  }
  _R14 = DVARFLT_vehSubmarineMaxForwardVel;
  if ( !DVARFLT_vehSubmarineMaxForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxForwardVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vcomiss xmm0, dword ptr [r12+144h]
  }
  if ( v81 )
  {
    v160 = DVARFLT_vehSubmarineMaxForwardVel;
    if ( !DVARFLT_vehSubmarineMaxForwardVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxForwardVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v160);
    LODWORD(_R12->phys.bodyVel.v[0]) = v160->current.integer;
  }
  else
  {
    _R14 = DVARFLT_vehSubmarineMaxReverseVel;
    if ( !DVARFLT_vehSubmarineMaxReverseVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxReverseVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vxorps  xmm1, xmm0, xmm8
      vcomiss xmm1, dword ptr [r12+144h]
    }
    if ( !(v81 | v95) )
    {
      _R14 = DVARFLT_vehSubmarineMaxReverseVel;
      if ( !DVARFLT_vehSubmarineMaxReverseVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxReverseVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]
        vxorps  xmm1, xmm0, xmm8
        vmovss  dword ptr [r12+144h], xmm1
      }
    }
  }
  _R14 = DVARFLT_vehSubmarineMaxLateralVel;
  if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm { vmovss  xmm0, dword ptr [r14+28h] }
  _R14 = DVARFLT_vehSubmarineMaxLateralVel;
  __asm { vcomiss xmm0, dword ptr [r12+148h] }
  if ( v81 )
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    LODWORD(_R12->phys.bodyVel.v[1]) = _R14->current.integer;
  }
  else
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vxorps  xmm1, xmm0, xmm8
      vcomiss xmm1, dword ptr [r12+148h]
    }
    if ( !(v81 | v95) )
    {
      _R14 = DVARFLT_vehSubmarineMaxLateralVel;
      if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]
        vxorps  xmm1, xmm0, xmm8
        vmovss  dword ptr [r12+148h], xmm1
      }
    }
  }
  _R14 = DVARFLT_vehSubmarineMaxLateralVel;
  if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm { vmovss  xmm0, dword ptr [r14+28h] }
  _R14 = DVARFLT_vehSubmarineMaxLateralVel;
  __asm { vcomiss xmm0, dword ptr [r12+14Ch] }
  if ( v81 )
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    LODWORD(_R12->phys.bodyVel.v[2]) = _R14->current.integer;
  }
  else
  {
    if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vxorps  xmm1, xmm0, xmm8
      vcomiss xmm1, dword ptr [r12+14Ch]
    }
    if ( !(v81 | v95) )
    {
      _R14 = DVARFLT_vehSubmarineMaxLateralVel;
      if ( !DVARFLT_vehSubmarineMaxLateralVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehSubmarineMaxLateralVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]
        vxorps  xmm1, xmm0, xmm8
        vmovss  dword ptr [r12+14Ch], xmm1
      }
    }
  }
  MatrixTransformVector(&_R12->phys.bodyVel, (const tmat33_t<vec3_t> *)&forward, &_R12->phys.vel);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [r12+138h]
  }
  if ( !v183 )
    goto LABEL_167;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [r12+13Ch]
  }
  if ( !v183 )
    goto LABEL_167;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [r12+140h]
  }
  if ( !v183 )
  {
LABEL_167:
    MatrixTransformVector43(&in1, &forward, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [r12+138h]
      vmovss  [rbp+200h+var_1D0], xmm0
      vmovss  xmm5, dword ptr [r12+13Ch]
      vmovss  [rbp+200h+var_1CC], xmm5
      vmovss  xmm6, dword ptr [r12+140h]
      vmovss  [rbp+200h+var_1C8], xmm6
      vmovss  [rbp+200h+var_210], xmm0
      vmovss  [rbp+200h+var_20C], xmm5
      vmovss  [rbp+200h+var_208], xmm6
      vmovss  xmm12, dword ptr [r12+0F0h]
      vmovss  xmm13, dword ptr [r12+0F4h]
      vmovss  xmm14, dword ptr [r12+0F8h]
      vaddss  xmm2, xmm12, dword ptr [rbp+200h+out]
      vmovss  dword ptr [rbp+200h+start], xmm2
      vaddss  xmm3, xmm13, dword ptr [rbp+200h+out+4]
      vmovss  dword ptr [rbp+200h+start+4], xmm3
      vaddss  xmm4, xmm14, dword ptr [rbp+200h+out+8]
      vmovss  dword ptr [rbp+200h+start+8], xmm4
      vmulss  xmm0, xmm11, xmm0
      vmulss  xmm1, xmm0, xmm10
      vaddss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbp+200h+end], xmm2
      vmulss  xmm0, xmm11, xmm5
      vmulss  xmm1, xmm0, xmm10
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbp+200h+end+4], xmm2
      vmulss  xmm0, xmm11, xmm6
      vmulss  xmm1, xmm0, xmm10
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+200h+end+8], xmm2
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds, ent->s.number, ent->clipmask);
    __asm
    {
      vmovss  xmm0, [rbp+200h+results.fraction]
      vcomiss xmm0, xmm9
    }
    if ( v81 && (EntityHitId = Trace_GetEntityHitId(&results), (unsigned int)(EntityHitId - 2046) > 1) && (_RAX = g_entities[EntityHitId].vehicle) != NULL )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rax+138h]
        vmovss  xmm7, dword ptr [rax+13Ch]
        vmovss  xmm8, dword ptr [rax+140h]
      }
      BYTE1(v320) = 1;
      __asm
      {
        vmovss  xmm0, [rbp+200h+var_210]
        vsubss  xmm1, xmm0, xmm6
        vmovss  [rbp+200h+var_210], xmm1
        vmovss  xmm2, [rbp+200h+var_20C]
        vsubss  xmm0, xmm2, xmm7
        vmovss  [rbp+200h+var_20C], xmm0
        vmovss  xmm1, [rbp+200h+var_208]
        vsubss  xmm2, xmm1, xmm8
        vmovss  [rbp+200h+var_208], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rsp+300h+var_2B8]
        vmovss  xmm6, dword ptr [rsp+300h+var_2B8]
        vmovss  xmm8, dword ptr [rsp+300h+var_2B8]
      }
    }
    G_Vehicle_ClearGround(ent);
    stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
    __asm
    {
      vmovss  dword ptr [rbp+200h+outBodyAccel], xmm15
      vmovss  dword ptr [rbp+200h+outBodyAccel+4], xmm15
      vmovss  dword ptr [rbp+200h+outBodyAccel+8], xmm9
      vmulss  xmm0, xmm11, xmm10
      vmovss  [rsp+300h+stepSlide.baseclass_0.deltaTime], xmm0
    }
    stepSlide.origin = &start;
    stepSlide.velocity = (vec3_t *)&v326;
    stepSlide.bounds = &bounds;
    *(_WORD *)&stepSlide.gravity = 0;
    stepSlide.zerog = 1;
    stepSlide.inSolid = (bool *)&v320;
    stepSlide.groundNormal = &outBodyAccel;
    stepSlide.passEntities[0] = ent->s.number;
    stepSlide.passEntityCount = 1;
    stepSlide.clipMask = ent->clipmask;
    stepSlide.velocityClipType = VELOCITY_CLIP_VEHICLE_SUB;
    G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
    v220 = BgStepSlideMove::SlideMove(&stepSlide);
    bumpEntityNum = (unsigned int)stepSlide.bumpEntityNum;
    BgStepSlideMove::~BgStepSlideMove(&stepSlide);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+200h+start]
      vsubss  xmm2, xmm0, dword ptr [rbp+200h+out]
      vmovss  dword ptr [r12+0F0h], xmm2
      vmovss  xmm1, dword ptr [rbp+200h+start+4]
      vsubss  xmm3, xmm1, dword ptr [rbp+200h+out+4]
      vmovss  dword ptr [r12+0F4h], xmm3
      vmovss  xmm0, dword ptr [rbp+200h+start+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+200h+out+8]
      vmovss  dword ptr [r12+0F8h], xmm4
    }
    if ( !BYTE1(v320) || (_BYTE)v320 )
    {
      __asm
      {
        vmovss  xmm1, [rbp+200h+var_208]
        vmovss  xmm2, [rbp+200h+var_20C]
        vmovss  xmm3, [rbp+200h+var_210]
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm11, xmm6
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm2
        vmovss  dword ptr [r12+0F0h], xmm2
        vmulss  xmm0, xmm7, xmm11
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm3
        vmovss  dword ptr [r12+0F4h], xmm2
        vmulss  xmm0, xmm8, xmm11
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [r12+0F8h], xmm2
        vmovss  xmm0, [rbp+200h+var_210]
        vaddss  xmm3, xmm0, xmm6
        vmovss  [rbp+200h+var_210], xmm3
        vmovss  xmm1, [rbp+200h+var_20C]
        vaddss  xmm2, xmm1, xmm7
        vmovss  [rbp+200h+var_20C], xmm2
        vmovss  xmm0, [rbp+200h+var_208]
        vaddss  xmm1, xmm0, xmm8
        vmovss  [rbp+200h+var_208], xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [r12+138h], xmm3
      vmovss  dword ptr [r12+13Ch], xmm2
      vmovss  dword ptr [r12+140h], xmm1
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_vehSubmarineAllowInSolid, "vehSubmarineAllowInSolid") && (_BYTE)v320 )
    {
      __asm
      {
        vmulss  xmm0, xmm11, dword ptr [r12+138h]
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, dword ptr [r12+0F0h]
        vmovss  dword ptr [r12+0F0h], xmm2
        vmulss  xmm0, xmm11, dword ptr [r12+13Ch]
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, dword ptr [r12+0F4h]
        vmovss  dword ptr [r12+0F4h], xmm2
        vmulss  xmm0, xmm11, dword ptr [r12+140h]
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, dword ptr [r12+0F8h]
        vmovss  dword ptr [r12+0F8h], xmm2
      }
    }
    if ( v220 )
    {
      __asm
      {
        vmulss  xmm4, xmm11, xmm10
        vmulss  xmm1, xmm4, [rbp+200h+var_1D0]
        vaddss  xmm3, xmm1, xmm12
        vmovss  xmm2, dword ptr [r12+0F0h]
        vsubss  xmm6, xmm2, xmm3
        vmulss  xmm1, xmm4, [rbp+200h+var_1CC]
        vaddss  xmm3, xmm1, xmm13
        vmovss  xmm2, dword ptr [r12+0F4h]
        vsubss  xmm5, xmm2, xmm3
        vmulss  xmm1, xmm4, [rbp+200h+var_1C8]
        vaddss  xmm3, xmm1, xmm14
        vmovss  xmm2, dword ptr [r12+0F8h]
        vsubss  xmm4, xmm2, xmm3
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm0, xmm6, xmm2
        vmovss  [rbp+200h+value], xmm0
        vmulss  xmm1, xmm5, xmm2
        vmovss  [rbp+200h+var_144], xmm1
        vmulss  xmm0, xmm4, xmm2
        vmovss  [rbp+200h+var_140], xmm0
        vcomiss xmm3, xmm15
      }
      v277 = ScriptContext_Server();
      v278 = v277;
      if ( (unsigned int)(bumpEntityNum - 2046) <= 1 )
        Scr_AddUndefined(v277);
      else
        GScr_AddEntity(&g_entities[bumpEntityNum]);
      Scr_AddVector(v278, value);
      Scr_AddVector(v278, v332);
      GScr_Notify(ent, scr_const.veh_collision, 3u);
    }
  }
  G_VehicleSubmarine_CheckForPredictedCrash(ent);
  MatrixTransposeTransformVector43(&_R12->phys.vel, &forward, &_R12->phys.bodyVel);
  __asm
  {
    vmovss  xmm2, dword ptr [r12+13Ch]
    vmovss  xmm0, dword ptr [r12+138h]
    vmovss  xmm3, dword ptr [r12+140h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [r12+588h], xmm0
    vcomiss xmm0, xmm15
  }
  if ( v81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_submarine_sp.cpp", 767, ASSERT_TYPE_ASSERT, "(veh->speed >= 0.0f)", (const char *)&queryFormat, "veh->speed >= 0.0f") )
    __debugbreak();
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    MatrixTransformVector(&in1, (const tmat33_t<vec3_t> *)&forward, &outBodyAccel);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+200h+outBodyAccel]
      vaddss  xmm1, xmm0, dword ptr [r12+0F0h]
      vmovss  dword ptr [rbp+200h+outBodyAccel], xmm1
      vmovss  xmm0, dword ptr [rbp+200h+outBodyAccel+4]
      vaddss  xmm1, xmm0, dword ptr [r12+0F4h]
      vmovss  dword ptr [rbp+200h+outBodyAccel+4], xmm1
      vmovss  xmm0, dword ptr [rbp+200h+outBodyAccel+8]
      vaddss  xmm1, xmm0, dword ptr [r12+0F8h]
      vsubss  xmm2, xmm1, dword ptr [rbp+200h+bounds.halfSize+8]
      vmovss  dword ptr [rbp+200h+outBodyAccel+8], xmm2
    }
    _RAX = vec3_t::operator[](&bounds.halfSize, 2);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmulss  xmm2, xmm0, cs:__real@40000000; height
      vmovss  [rsp+300h+contentmask], xmm15
      vmovss  dword ptr [rsp+300h+fmt], xmm9
      vmovaps xmm3, xmm9; r
      vmovss  xmm1, dword ptr [rbp+200h+bounds.halfSize]; rad
    }
    G_Vehicle_DebugCapsule(&outBodyAccel, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&contentmask);
    __asm
    {
      vmovss  xmm0, dword ptr [r12+0F0h]
      vaddss  xmm1, xmm0, dword ptr [r12+138h]
      vmovss  dword ptr [rbp+200h+outBodyAccel], xmm1
      vmovss  xmm2, dword ptr [r12+13Ch]
      vaddss  xmm0, xmm2, dword ptr [r12+0F4h]
      vmovss  dword ptr [rbp+200h+outBodyAccel+4], xmm0
      vmovss  xmm1, dword ptr [r12+140h]
      vaddss  xmm2, xmm1, dword ptr [r12+0F8h]
      vmovss  dword ptr [rbp+200h+outBodyAccel+8], xmm2
    }
    v306 = &colorYellow;
    if ( (_BYTE)v320 )
      v306 = &colorBlue;
    G_DebugLine(&_R12->phys.origin, &outBodyAccel, v306, 1);
  }
  _R11 = &v340;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

