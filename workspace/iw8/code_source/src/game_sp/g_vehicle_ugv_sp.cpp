/*
==============
G_VehicleUGV_CalcRotAccel
==============
*/

void __fastcall G_VehicleUGV_CalcRotAccel(gentity_s *ent, const vec3_t *targetVelocity, vec3_t *outRotAccel)
{
  ?G_VehicleUGV_CalcRotAccel@@YAXPEAUgentity_s@@AEBTvec3_t@@AEAT2@@Z(ent, targetVelocity, outRotAccel);
}

/*
==============
G_VehicleUGV_ClipVelocity
==============
*/

void __fastcall G_VehicleUGV_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  ?G_VehicleUGV_ClipVelocity@@YAXAEBTvec3_t@@0AEAT1@@Z(in, normal, out);
}

/*
==============
G_VehicleUGV_CorrectAllSolid
==============
*/

int __fastcall G_VehicleUGV_CorrectAllSolid(gentity_s *ent, trace_t *trace)
{
  return ?G_VehicleUGV_CorrectAllSolid@@YAHPEAUgentity_s@@PEAUtrace_t@@@Z(ent, trace);
}

/*
==============
G_VehicleUGV_UpdatePlayerMove
==============
*/

void __fastcall G_VehicleUGV_UpdatePlayerMove(Vehicle *veh)
{
  ?G_VehicleUGV_UpdatePlayerMove@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleUGV_CalcAccel
==============
*/

double __fastcall G_VehicleUGV_CalcAccel(gentity_s *ent, const vec3_t *moveInput, float throttle)
{
  double result; 

  *(float *)&result = ?G_VehicleUGV_CalcAccel@@YAMPEAUgentity_s@@AEBTvec3_t@@M@Z(ent, moveInput, throttle);
  return result;
}

/*
==============
G_VehicleUGV_CalcAccel
==============
*/

double __fastcall G_VehicleUGV_CalcAccel(gentity_s *ent, const vec3_t *moveInput, double throttle)
{
  const VehicleDef *ServerDef; 
  char v13; 

  _RBX = ent->vehicle;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 266, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(_RBX->defIndex);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+6B8h]
  }
  _RCX = ServerDef;
  if ( v13 )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+6C0h]
      vmovss  xmm6, dword ptr [rbx+6C4h]
    }
  }
  else
  {
    _RAX = ent->vehicle;
    __asm
    {
      vmovss  xmm6, dword ptr [rcx+60h]
      vmovss  xmm7, dword ptr [rax+5A4h]
    }
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+144h]
    vmovss  xmm3, dword ptr [rbx+148h]
    vmovss  xmm4, dword ptr [rbx+14Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vmovd   xmm4, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vaddss  xmm3, xmm3, xmm1
    vmovss  xmm1, cs:__real@447a0000
    vsqrtss xmm0, xmm3, xmm3
    vmulss  xmm5, xmm7, xmm8
    vsubss  xmm5, xmm5, xmm0
    vcvtdq2ps xmm4, xmm4
    vdivss  xmm0, xmm1, xmm4
    vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000; min
    vmulss  xmm0, xmm5, xmm0; val
    vmovaps xmm2, xmm6; max
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
G_VehicleUGV_CalcRotAccel
==============
*/
void G_VehicleUGV_CalcRotAccel(gentity_s *ent, const vec3_t *targetVelocity, vec3_t *outRotAccel)
{
  const VehicleDef *ServerDef; 
  bool v11; 
  bool v13; 

  _RBX = ent->vehicle;
  _RSI = outRotAccel;
  __asm { vmovaps [rsp+78h+var_38], xmm7 }
  _RDI = (const vec2_t *)targetVelocity;
  __asm { vmovaps [rsp+78h+var_48], xmm8 }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 224, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(_RBX->defIndex);
  v11 = level.frameDuration == 0;
  _RBP = ServerDef;
  if ( !level.frameDuration )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration");
    v11 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@447a0000
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vdivss  xmm8, xmm0, xmm1
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  if ( v11 )
  {
    __asm
    {
      vmulss  xmm0, xmm8, dword ptr [rbx+16Ch]
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm7; val
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm2, dword ptr [rbp+68h]; max
      vxorps  xmm1, xmm2, xmm7; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_28], xmm6 }
    *(double *)&_XMM0 = vectosignedyaw(_RDI);
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rbx+118h]
      vmulss  xmm6, xmm1, cs:__real@3b360b61
      vaddss  xmm3, xmm6, cs:__real@3f000000
      vmovss  xmm2, dword ptr [rbx+5ACh]; max
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm4, xmm0, xmm3
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm5, xmm3, xmm4, 1
      vsubss  xmm0, xmm6, xmm5
      vmulss  xmm3, xmm0, cs:__real@43b40000
      vmulss  xmm0, xmm3, xmm8; val
      vxorps  xmm1, xmm2, xmm7; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rbx+16Ch]
      vmovaps xmm6, [rsp+78h+var_28]
      vmulss  xmm0, xmm1, xmm8
    }
  }
  __asm
  {
    vmovss  dword ptr [rsi+4], xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+168h]
    vxorps  xmm0, xmm0, xmm7; val
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm2, dword ptr [rbp+68h]; max
    vxorps  xmm1, xmm2, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+170h]
    vxorps  xmm0, xmm1, xmm7; val
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  xmm2, dword ptr [rbp+68h]; max
    vxorps  xmm1, xmm2, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_38]
    vmovaps xmm8, [rsp+78h+var_48]
    vmovss  dword ptr [rsi+8], xmm0
  }
}

/*
==============
G_VehicleUGV_CalcTargetVelocity
==============
*/

void __fastcall G_VehicleUGV_CalcTargetVelocity(Vehicle *veh, const vec3_t *moveInput, double throttle, double topSpeed, vec3_t *outTargetVelocity)
{
  gentity_s *ent; 
  unsigned __int16 number; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  gentity_s *v21; 
  bool v22; 
  bool v23; 
  __int64 v65; 
  __int64 v66; 
  vec3_t angles; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  _RDI = outTargetVelocity;
  __asm
  {
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 176, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  ent = veh->ent;
  number = veh->ent->r.ownerNum.number;
  if ( !number )
    goto LABEL_32;
  v18 = number;
  v19 = number - 1;
  if ( v19 >= 0x800 )
  {
    LODWORD(v65) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v65, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v20 = v18 - 1;
  if ( g_entities[v20].r.isInUse != g_entityIsInUse[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v20] )
  {
    LODWORD(v66) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v66) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 177, ASSERT_TYPE_ASSERT, "(veh->ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "veh->ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v21 = EntHandle::ent(&veh->ent->r.ownerNum);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 180, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  v22 = v21->client == NULL;
  if ( !v21->client )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 181, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
    vxorps  xmm1, xmm1, xmm1; min
  }
  if ( v22 )
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  else
  {
    _RAX = v21->client;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmulss  xmm0, xmm8, xmm7; val
      vmovaps xmm2, xmm8; max
      vmovss  xmm6, dword ptr [rax+1DCh]
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = vectosignedyaw((const vec2_t *)moveInput);
    __asm
    {
      vsubss  xmm3, xmm0, cs:__real@42b40000
      vaddss  xmm2, xmm0, cs:__real@43870000
      vcmpltss xmm1, xmm0, cs:__real@c2b40000
      vblendvps xmm2, xmm3, xmm2, xmm1
      vaddss  xmm3, xmm2, xmm6
      vmulss  xmm4, xmm3, cs:__real@3b360b61
      vaddss  xmm1, xmm4, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rsp+0C8h+angles+4], xmm1
      vmovss  dword ptr [rsp+0C8h+angles], xmm9
      vmovss  dword ptr [rsp+0C8h+angles+8], xmm9
    }
    AngleVectors(&angles, outTargetVelocity, NULL, NULL);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+4]
      vmovss  xmm5, dword ptr [rdi+8]
      vmovss  xmm7, dword ptr [rdi]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm4, xmm1, xmm0
      vmulss  xmm2, xmm6, xmm4
      vmovaps xmm6, [rsp+0C8h+var_38]
      vmulss  xmm0, xmm5, xmm4
      vmovss  dword ptr [rdi+8], xmm0
      vmulss  xmm9, xmm0, xmm8
      vmulss  xmm0, xmm7, xmm4
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm1, xmm2, xmm8
      vmulss  xmm2, xmm0, xmm8
    }
  }
  __asm
  {
    vmovss  dword ptr [rdi], xmm2
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+8], xmm9
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm9, [rsp+0C8h+var_68]
  }
}

/*
==============
G_VehicleUGV_ClipVelocity
==============
*/
void G_VehicleUGV_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+8]
    vcomiss xmm6, cs:__real@3f333333
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vcomiss xmm2, xmm1
    vmulss  xmm0, xmm4, dword ptr [rdx]
    vmulss  xmm1, xmm5, dword ptr [rdx+4]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r8+8], xmm0
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm1, xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [r8], xmm1
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm6, [rsp+68h+var_18]
  }
}

/*
==============
G_VehicleUGV_CorrectAllSolid
==============
*/
__int64 G_VehicleUGV_CorrectAllSolid(gentity_s *ent, trace_t *trace)
{
  unsigned int v7; 
  int passEntityNum; 
  int contentmask; 
  __int64 result; 
  int number; 
  int clipmask; 
  vec3_t start; 

  _RDI = ent->vehicle;
  _RBX = &s_correctSolidDeltas_ugv[0].v[2];
  _R14 = trace;
  v7 = 0;
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx-8]
      vaddss  xmm1, xmm0, dword ptr [rdi+0F0h]
      vmovss  xmm2, dword ptr [rbx-4]
    }
    passEntityNum = ent->s.number;
    contentmask = ent->clipmask;
    __asm
    {
      vmovss  dword ptr [rsp+88h+start], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+0F4h]
      vmovss  dword ptr [rsp+88h+start+4], xmm0
      vmovss  xmm1, dword ptr [rdi+0F8h]
      vaddss  xmm2, xmm1, dword ptr [rbx]
      vmovss  dword ptr [rsp+88h+start+8], xmm2
    }
    G_Main_TraceCapsule(_R14, &start, &start, &_RDI->phys.bounds, passEntityNum, contentmask);
    if ( !_R14->startsolid )
      break;
    ++v7;
    _RBX += 3;
    if ( v7 >= 0x1A )
      return 0i64;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+start]
    vmovss  dword ptr [rdi+0F0h], xmm0
    vmovss  xmm1, dword ptr [rsp+88h+start+4]
    vmovss  dword ptr [rdi+0F4h], xmm1
    vmovss  xmm1, dword ptr [rdi+0F0h]
    vmovss  xmm0, dword ptr [rsp+88h+start+8]
    vmovss  dword ptr [rdi+0F8h], xmm0
  }
  number = ent->s.number;
  clipmask = ent->clipmask;
  __asm
  {
    vmovss  dword ptr [rsp+88h+start], xmm1
    vmovss  xmm0, dword ptr [rdi+0F4h]
    vmovss  dword ptr [rsp+88h+start+4], xmm0
    vmovss  xmm1, dword ptr [rdi+0F8h]
    vsubss  xmm2, xmm1, cs:__real@3f800000
    vmovss  dword ptr [rsp+88h+start+8], xmm2
    vmovaps [rsp+88h+var_38], xmm6
  }
  G_Main_TraceCapsule(_R14, &_RDI->phys.origin, &start, &_RDI->phys.bounds, number, clipmask);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr cs:s_phys_ugv.groundTrace.fraction, ymm0
    vmovups ymm1, ymmword ptr [r14+20h]
    vmovups ymmword ptr cs:s_phys_ugv.groundTrace.contents, ymm1
    vmovups xmm0, xmmword ptr [r14+40h]
    vmovups xmmword ptr cs:s_phys_ugv.groundTrace.allsolid, xmm0
    vmovsd  xmm1, qword ptr [r14+50h]
    vmovss  xmm0, dword ptr [rsp+88h+start]
    vmovsd  cs:s_phys_ugv.groundTrace.debugHitName, xmm1
    vmovss  xmm6, dword ptr [r14]
    vsubss  xmm1, xmm0, dword ptr [rdi+0F0h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdi+0F0h]
    vmovss  dword ptr [rdi+0F0h], xmm3
    vmovss  xmm0, dword ptr [rsp+88h+start+4]
    vsubss  xmm1, xmm0, dword ptr [rdi+0F4h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdi+0F4h]
    vmovss  dword ptr [rdi+0F4h], xmm3
    vmovss  xmm0, dword ptr [rsp+88h+start+8]
    vsubss  xmm1, xmm0, dword ptr [rdi+0F8h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdi+0F8h]
    vmovaps xmm6, [rsp+88h+var_38]
  }
  result = 1i64;
  __asm { vmovss  dword ptr [rdi+0F8h], xmm3 }
  return result;
}

/*
==============
G_VehicleUGV_GroundPlant
==============
*/
void G_VehicleUGV_GroundPlant(gentity_s *ent, vehicle_physic_t *phys, int gravity)
{
  Vehicle *vehicle; 
  int v18; 
  scr_string_t **v19; 
  int v20; 
  int v22; 
  __int64 v27; 
  char *v38; 
  int v40; 
  const char *v41; 
  const char *v42; 
  const dvar_t *v47; 
  const dvar_t *v54; 
  int v69; 
  const dvar_t *v80; 
  __int64 v172; 
  int *v174; 
  bool v175; 
  unsigned __int64 v176; 
  bool v202; 
  __int64 v203; 
  int *v204; 
  bool v269; 
  __int64 duration; 
  __int64 durationa; 
  __int64 v293; 
  __int64 v294; 
  int v295; 
  int contentmaska; 
  int contentmask_4; 
  __int64 v300; 
  __int64 v301; 
  const VehicleDef *v303; 
  Vehicle *v304; 
  vec3_t end; 
  vec3_t cross; 
  vec3_t start; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  vec3_t v1; 
  vec3_t v0; 
  vec3_t v313; 
  vec3_t v314; 
  vec3_t v315; 
  vec3_t v316; 
  vec3_t angles; 
  Bounds box; 
  Bounds v319; 
  vec4_t v320; 
  vec4_t v321; 
  vec4_t v322; 
  vec4_t v323; 
  vec4_t v324; 
  vec4_t color; 
  vec4_t v326; 
  trace_t results; 
  int v328[5]; 
  int v329[4]; 
  vec3_t out[12]; 
  vec3_t origin[12]; 
  char v332; 
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
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 470, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !phys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 471, ASSERT_TYPE_ASSERT, "(phys)", (const char *)&queryFormat, "phys") )
    __debugbreak();
  vehicle = ent->vehicle;
  v304 = vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 474, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _R14 = G_Vehicle_GetServerDef(vehicle->defIndex);
  v303 = _R14;
  if ( _R14->type != VEH_UGV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 477, ASSERT_TYPE_ASSERT, "(vehDef->type == VEH_UGV)", (const char *)&queryFormat, "vehDef->type == VEH_UGV") )
    __debugbreak();
  v18 = 0;
  v19 = s_wheelTags_ugv;
  v20 = 0;
  do
  {
    if ( SV_Game_DObjGetBoneIndex(ent, **v19) < 0 )
      break;
    ++v20;
    ++v19;
  }
  while ( (__int64)v19 < (__int64)&unk_147FB4DA0 );
  _R15 = phys;
  v22 = 66065;
  if ( vehicle->drivingState != VEH_DRIVE_PLAYER )
    v22 = 529;
  contentmask_4 = v22;
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  [rbp+3F0h+var_414], xmm0
    vmovss  xmm0, dword ptr [r15+14h]
  }
  _RBX = &phys->angles;
  __asm
  {
    vmovss  [rbp+3F0h+var_40C], xmm0
    vmovss  [rbp+3F0h+var_410], xmm1
  }
  AnglesToAxis(&phys->angles, (tmat33_t<vec3_t> *)&axis);
  v295 = 0;
  v27 = v20;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm15, cs:__real@3a83126f
    vmovss  [rsp+4F0h+var_4AC], xmm6
  }
  if ( v20 > 0 )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@40000000
      vmovss  xmm12, cs:__real@42800000
      vmovss  xmm13, cs:__real@43800000
      vmovss  xmm14, cs:__real@3f4ccccd
    }
    v300 = 0i64;
    _R14 = phys->wheelZVel;
    v301 = 1648i64 - (_QWORD)phys;
    _RSI = 0i64;
    __asm { vxorps  xmm11, xmm11, xmm11 }
    do
    {
      _RBX = DVARFLT_vehUGVWheelInfluence;
      if ( !DVARFLT_vehUGVWheelInfluence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehUGVWheelInfluence") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      v38 = (char *)_R14 + (unsigned __int64)ent->vehicle;
      __asm { vmovss  xmm10, dword ptr [rbx+28h] }
      v40 = *(_DWORD *)&v38[v301];
      if ( v40 < 0 )
      {
        v41 = SL_ConvertToString(*s_wheelTags_ugv[v300]);
        v42 = SL_ConvertToString(ent->targetname);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E34918, 306i64, v42, v41);
        v40 = *(_DWORD *)&v38[v301];
      }
      _RBX = G_Utils_DObjGetLocalBoneIndexMatrix(ent, v40);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(mtx)", (const char *)&queryFormat, "mtx") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10h]
        vmovss  dword ptr [rbp+3F0h+in1], xmm0
        vmovss  xmm1, dword ptr [rbx+14h]
        vmovss  dword ptr [rbp+3F0h+in1+4], xmm1
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  dword ptr [rbp+3F0h+in1+8], xmm0
      }
      MatrixTransformVector43(&in1, &axis, &out[v295]);
      v47 = DCONST_DVARINT_bg_vehicleDebug;
      if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      if ( v47->current.integer )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
          vmovups xmm1, cs:__xmm@40000000000000000000000000000000
          vmovaps xmm2, xmm11; yaw
          vmovups xmmword ptr [rbp+3F0h+color], xmm0
          vmovups xmmword ptr [rbp+3F0h+box.midPoint], xmm1
          vmovss  dword ptr [rbp+3F0h+box.halfSize+4], xmm9
          vmovss  dword ptr [rbp+3F0h+box.halfSize+8], xmm9
        }
        G_DebugBox(&out[v295], &box, *(float *)&_XMM2, &color, 1, 0);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rsi+3F0h+out+4]
        vmovss  xmm1, dword ptr [rbp+rsi+3F0h+out+8]
        vmovss  xmm2, dword ptr [rbp+rsi+3F0h+out]
      }
      v54 = DCONST_DVARINT_bg_vehicleDebug;
      __asm
      {
        vmovss  dword ptr [rbp+3F0h+start+4], xmm0
        vmovss  dword ptr [rbp+3F0h+end+4], xmm0
        vaddss  xmm0, xmm1, xmm12
        vsubss  xmm1, xmm1, xmm13
        vmovss  dword ptr [rbp+3F0h+end+8], xmm1
        vmovss  dword ptr [rbp+3F0h+start], xmm2
        vmovss  dword ptr [rbp+3F0h+end], xmm2
        vmovss  dword ptr [rbp+3F0h+start+8], xmm0
      }
      if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v54);
      if ( v54->current.integer )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
          vmovups xmmword ptr [rbp+3F0h+var_308], xmm0
        }
        G_DebugLine(&start, &end, &v326, 1);
      }
      G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, ent->s.number, contentmask_4);
      __asm
      {
        vmovss  xmm5, [rbp+3F0h+results.fraction]
        vcomiss xmm5, xmm6
      }
      if ( v269 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+3F0h+end]
          vsubss  xmm1, xmm0, dword ptr [rbp+3F0h+start]
          vmovss  xmm0, dword ptr [rbp+3F0h+end+4]
          vmulss  xmm2, xmm1, xmm5
          vsubss  xmm1, xmm0, dword ptr [rbp+3F0h+start+4]
          vaddss  xmm7, xmm2, dword ptr [rbp+3F0h+start]
          vmovss  xmm0, dword ptr [rbp+3F0h+end+8]
          vmulss  xmm2, xmm1, xmm5
          vsubss  xmm1, xmm0, dword ptr [rbp+3F0h+start+8]
          vaddss  xmm8, xmm2, dword ptr [rbp+3F0h+start+4]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm6, xmm2, dword ptr [rbp+3F0h+start+8]
        }
        v69 = (results.surfaceFlags >> 19) & 0x3F;
      }
      else
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rbp+3F0h+end]
          vmovss  xmm8, dword ptr [rbp+3F0h+end+4]
          vmovss  xmm6, dword ptr [rbp+3F0h+end+8]
        }
        v69 = 0;
      }
      *((_DWORD *)_R14 + 24) = v69;
      if ( gravity )
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        __asm
        {
          vmovss  xmm1, dword ptr [r14]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
          vmulss  xmm2, xmm0, xmm14
          vsubss  xmm2, xmm1, xmm2
          vmovss  dword ptr [r14], xmm2
        }
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
          vmulss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm2, xmm1, xmm15
          vaddss  xmm3, xmm2, dword ptr [r14+30h]
          vcomiss xmm3, xmm6
          vmovss  dword ptr [r14+30h], xmm3
        }
      }
      else
      {
        __asm { vmovss  dword ptr [r14+30h], xmm6 }
        *_R14 = 0.0;
        __asm { vmovaps xmm3, xmm6 }
      }
      v80 = DCONST_DVARINT_bg_vehicleDebug;
      __asm
      {
        vmovss  dword ptr [rbp+rsi+3F0h+origin], xmm7
        vmovss  dword ptr [rbp+rsi+3F0h+origin+4], xmm8
        vmovss  dword ptr [rbp+rsi+3F0h+origin+8], xmm3
      }
      if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v80);
      if ( v80->current.integer )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000
          vmovups xmm1, cs:__xmm@40000000000000000000000000000000
          vmovaps xmm2, xmm11; yaw
          vmovss  dword ptr [rbp+3F0h+var_380.halfSize+4], xmm9
          vmovss  dword ptr [rbp+3F0h+var_380.halfSize+8], xmm9
          vmovups xmmword ptr [rbp+3F0h+var_368], xmm0
          vmovups xmmword ptr [rbp+3F0h+var_380.midPoint], xmm1
        }
        G_DebugBox(&origin[v295], &v319, *(float *)&_XMM2, &v320, 1, 0);
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+rsi+3F0h+out]
        vmovss  xmm0, dword ptr [rbp+rsi+3F0h+origin]
        vmovss  xmm4, dword ptr [rbp+rsi+3F0h+out+4]
        vmovss  xmm5, dword ptr [rbp+rsi+3F0h+out+8]
      }
      ++v295;
      __asm
      {
        vmovss  xmm6, [rsp+4F0h+var_4AC]
        vsubss  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [rbp+rsi+3F0h+origin+4]
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm3
        vsubss  xmm1, xmm0, xmm4
        vmovss  xmm0, dword ptr [rbp+rsi+3F0h+origin+8]
        vmulss  xmm2, xmm1, xmm10
        vmovss  [rbp+rsi+3F0h+var_290], xmm3
        vaddss  xmm3, xmm2, xmm4
        vmovss  [rbp+rsi+3F0h+var_28C], xmm3
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm5
        vmovss  [rbp+rsi+3F0h+var_288], xmm3
      }
      _RSI += 12i64;
      ++v300;
      ++_R14;
    }
    while ( v300 < v27 );
    _R15 = phys;
    _R14 = v303;
    _RBX = &phys->angles;
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm15, [rbp+3F0h+var_284]
    vaddss  xmm0, xmm15, [rbp+3F0h+var_26C]
    vmovss  xmm13, [rbp+3F0h+var_278]
    vmovss  xmm12, [rbp+3F0h+var_280]
    vmovss  xmm10, [rbp+3F0h+var_274]
    vmovss  xmm9, [rbp+3F0h+var_27C]
    vmovss  xmm8, [rbp+3F0h+var_270]
    vmovss  xmm14, [rsp+4F0h+var_4AC]
    vmulss  xmm2, xmm0, xmm3
    vaddss  xmm0, xmm13, [rbp+3F0h+var_290]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm12, [rbp+3F0h+var_268]
    vsubss  xmm7, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm3
    vaddss  xmm0, xmm10, [rbp+3F0h+var_28C]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm9, [rbp+3F0h+var_264]
    vsubss  xmm6, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm3
    vaddss  xmm0, xmm8, [rbp+3F0h+var_288]
    vmulss  xmm1, xmm0, xmm3
    vsubss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, [rsp+4F0h+var_4AC]
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm7
    vmovss  xmm7, cs:__real@3f000000
    vmovss  dword ptr [rbp+3F0h+v0], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rbp+3F0h+v0+8], xmm0
    vaddss  xmm0, xmm13, [rbp+3F0h+var_26C]
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm0, xmm10, [rbp+3F0h+var_268]
    vmovss  dword ptr [rbp+3F0h+v0+4], xmm1
    vaddss  xmm1, xmm15, [rbp+3F0h+var_290]
    vmulss  xmm3, xmm1, xmm7
    vaddss  xmm1, xmm12, [rbp+3F0h+var_28C]
    vsubss  xmm6, xmm3, xmm2
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm0, xmm8, [rbp+3F0h+var_264]
    vmulss  xmm4, xmm1, xmm7
    vaddss  xmm1, xmm9, [rbp+3F0h+var_288]
    vsubss  xmm5, xmm4, xmm2
    vmulss  xmm2, xmm0, xmm7
    vmulss  xmm3, xmm1, xmm7
    vmovss  xmm7, cs:__real@80000000
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm2, xmm14, xmm0
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rbp+3F0h+v1], xmm0
    vmulss  xmm0, xmm2, xmm4
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rbp+3F0h+v1+8], xmm0
    vmovss  dword ptr [rbp+3F0h+v1+4], xmm1
  }
  Vec3Cross(&v0, &v1, &cross);
  __asm
  {
    vmovss  xmm11, dword ptr [rbp+3F0h+cross+4]
    vmovss  xmm12, dword ptr [rbp+3F0h+cross]
    vmulss  xmm1, xmm11, [rbp+3F0h+var_28C]
    vmulss  xmm0, xmm12, [rbp+3F0h+var_290]
    vmovss  xmm9, dword ptr [rbp+3F0h+cross+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rbp+3F0h+var_288]
    vaddss  xmm8, xmm2, xmm1
    vmovss  [rbp+3F0h+var_44C], xmm8
  }
  if ( v27 > 1 )
  {
    v172 = 1i64;
    if ( v27 >= 5 )
    {
      __asm { vmovss  xmm3, dword ptr [r14+2E4h] }
      v174 = v329;
      v176 = ((unsigned __int64)(v27 - 5) >> 2) + 1;
      v175 = __CFSHR__(v27 - 5, 2) || v176 == 0;
      v172 = 4 * v176 + 1;
      do
      {
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rax-8]
          vmulss  xmm0, xmm11, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v175 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+3F0h+var_44C], xmm8
          }
        }
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rax+4]
          vmulss  xmm0, xmm11, dword ptr [rax+8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax+0Ch]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v175 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+3F0h+var_44C], xmm8
          }
        }
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rax+10h]
          vmulss  xmm0, xmm11, dword ptr [rax+14h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax+18h]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v175 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+3F0h+var_44C], xmm8
          }
        }
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rax+1Ch]
          vmulss  xmm0, xmm11, dword ptr [rax+20h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax+24h]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v175 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+3F0h+var_44C], xmm8
          }
        }
        v174 += 12;
        v269 = v176-- == 0;
        v175 = v269 || v176 == 0;
      }
      while ( v176 );
    }
    if ( v172 < v27 )
    {
      __asm { vmovss  xmm4, dword ptr [r14+2E4h] }
      v269 = v27 < (unsigned __int64)v172;
      v203 = v27 - v172;
      v202 = v269 || v203 == 0;
      v204 = &v328[3 * v172 + 2];
      do
      {
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rcx-8]
          vmulss  xmm0, xmm11, dword ptr [rcx-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rcx]
          vaddss  xmm3, xmm2, xmm1
          vsubss  xmm0, xmm3, xmm8
          vcomiss xmm0, xmm4
        }
        if ( !v202 )
          __asm { vsubss  xmm8, xmm3, xmm4 }
        v204 += 3;
        v269 = v203-- == 0;
        v202 = v269 || v203 == 0;
      }
      while ( v203 );
      __asm { vmovss  [rbp+3F0h+var_44C], xmm8 }
    }
  }
  Vec3Cross(&cross, axis.m, &axis.m[1]);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+3F0h+axis+0Ch]
    vmovss  xmm6, dword ptr [rbp+3F0h+axis+10h]
    vmovss  xmm4, dword ptr [rbp+3F0h+axis+14h]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm2, xmm14, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+3F0h+axis+0Ch], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+3F0h+axis+14h], xmm0
    vmovss  dword ptr [rbp+3F0h+axis+10h], xmm1
  }
  Vec3Cross(&axis.m[1], &cross, axis.m);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+3F0h+axis]
    vmovss  xmm6, dword ptr [rbp+3F0h+axis+4]
    vmovss  xmm4, dword ptr [rbp+3F0h+axis+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm2, xmm14, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+3F0h+axis], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+3F0h+axis+8], xmm0
    vmovss  dword ptr [rbp+3F0h+axis+4], xmm1
  }
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm
  {
    vmovaps xmm6, xmm0
    vdivss  xmm10, xmm14, xmm0
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&axis, &angles);
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehUGVPitchTrack, "vehUGVPitchTrack");
  __asm
  {
    vmovss  xmm1, dword ptr [r15+24h]; cur
    vmovaps xmm2, xmm0; rate
    vmovss  xmm0, dword ptr [rbp+3F0h+angles]; tgt
    vmovaps xmm3, xmm6; deltaTime
  }
  *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovss  dword ptr [rbx], xmm0 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehUGVRollTrack, "vehUGVRollTrack");
  __asm
  {
    vmovss  xmm1, dword ptr [r15+2Ch]; cur
    vmovaps xmm2, xmm0; rate
    vmovss  xmm0, dword ptr [rbp+3F0h+angles+8]; tgt
    vmovaps xmm3, xmm6; deltaTime
  }
  *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@c2700000; min
    vmovss  dword ptr [r15+20h], xmm0
    vmovss  xmm0, dword ptr [rbx]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@c2700000; min
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [r15+20h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm7, cs:__real@bf800000
    vmovss  dword ptr [r15+20h], xmm0
  }
  if ( v304->drivingState != VEH_DRIVE_PLAYER )
  {
    __asm
    {
      vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( v304->drivingState <= (unsigned int)VEH_DRIVE_PLAYER )
    {
      __asm { vmovss  xmm1, dword ptr [r15+8] }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm12, dword ptr [r15]
        vmulss  xmm0, xmm11, dword ptr [r15+4]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm8
        vdivss  xmm0, xmm7, xmm9
        vmulss  xmm1, xmm2, xmm0
        vmovss  dword ptr [r15+8], xmm1
      }
    }
    __asm { vmovss  [rsp+4F0h+contentmask], xmm1 }
    if ( (contentmaska & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 612, ASSERT_TYPE_SANITY, "( !IS_NAN( phys->origin[2] ) )", (const char *)&queryFormat, "!IS_NAN( phys->origin[2] )") )
      __debugbreak();
  }
  AnglesSubtract(&_R15->angles, &_R15->prevAngles, &_R15->rotVel);
  __asm
  {
    vmulss  xmm0, xmm10, dword ptr [r15+78h]
    vmovss  dword ptr [r15+78h], xmm0
    vmulss  xmm1, xmm10, dword ptr [r15+7Ch]
    vmovss  dword ptr [r15+7Ch], xmm1
    vmulss  xmm0, xmm10, dword ptr [r15+80h]
    vmovss  dword ptr [r15+80h], xmm0
  }
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    _RBX = 0i64;
    v269 = 1;
    do
    {
      if ( !v269 )
      {
        LODWORD(v293) = 4;
        LODWORD(duration) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v293) )
          __debugbreak();
      }
      LODWORD(v313.v[_RBX]) = v328[_RBX];
      LODWORD(v313.v[_RBX + 1]) = v328[_RBX + 1];
      LODWORD(v313.v[_RBX + 2]) = v328[_RBX + 2];
      if ( (unsigned int)v18 >= 4 )
      {
        LODWORD(v293) = 4;
        LODWORD(duration) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v293) )
          __debugbreak();
        LODWORD(v294) = 4;
        LODWORD(durationa) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", durationa, v294) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm11, dword ptr [rbp+rbx+3F0h+var_3D8+4]
        vmulss  xmm1, xmm12, dword ptr [rbp+rbx+3F0h+var_3D8]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm8
        vdivss  xmm0, xmm7, xmm9
        vmulss  xmm6, xmm2, xmm0
      }
      if ( (unsigned int)v18 >= 4 )
      {
        LODWORD(v293) = 4;
        LODWORD(duration) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v293) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rbp+rbx+3F0h+var_3D8+8], xmm6 }
      _RBX += 3i64;
      v269 = (unsigned int)++v18 < 4;
    }
    while ( v18 < 4 );
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+3F0h+var_358], xmm0
    }
    G_DebugLine(&v313, &v314, &v321, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+3F0h+var_348], xmm0
    }
    G_DebugLine(&v314, &v316, &v322, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+3F0h+var_338], xmm0
    }
    G_DebugLine(&v316, &v315, &v323, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+3F0h+var_328], xmm0
    }
    G_DebugLine(&v315, &v313, &v324, 1);
  }
  _R11 = &v332;
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
G_VehicleUGV_GroundTrace
==============
*/
void G_VehicleUGV_GroundTrace(gentity_s *ent)
{
  int passEntityNum; 
  int contentmask; 
  const dvar_t *v16; 
  int v17; 
  char v21; 
  bool v22; 
  int number; 
  int clipmask; 
  int v37; 
  int v38; 
  vec4_t color; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  _R15 = ent->vehicle;
  passEntityNum = ent->s.number;
  __asm { vmovss  xmm0, dword ptr [r15+0F0h] }
  contentmask = ent->clipmask;
  __asm
  {
    vmovss  dword ptr [rbp+57h+start], xmm0
    vmovss  xmm1, dword ptr [r15+0F4h]
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vmovss  xmm0, dword ptr [r15+0F8h]
    vaddss  xmm0, xmm0, cs:__real@41400000
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vmovss  xmm1, dword ptr [r15+0F0h]
    vmovss  dword ptr [rbp+57h+end], xmm1
    vmovss  xmm0, dword ptr [r15+0F4h]
    vmovss  dword ptr [rbp+57h+end+4], xmm0
    vmovss  xmm1, dword ptr [r15+0F8h]
    vsubss  xmm2, xmm1, cs:__real@41400000
    vmovss  dword ptr [rbp+57h+end+8], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &end, &_R15->phys.bounds, passEntityNum, contentmask);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+results.fraction]
    vmovups ymm1, ymmword ptr [rbp+57h+results.contents]
  }
  v16 = DCONST_DVARINT_bg_vehicleDebug;
  v17 = 0;
  *(_QWORD *)&s_phys_ugv.hasGround = 0i64;
  __asm
  {
    vmovups ymmword ptr cs:s_phys_ugv.groundTrace.fraction, ymm0
    vmovups xmm0, xmmword ptr [rbp+57h+results.allsolid]
    vmovups ymmword ptr cs:s_phys_ugv.groundTrace.contents, ymm1
    vmovsd  xmm1, [rbp+57h+results.debugHitName]
    vmovups xmmword ptr cs:s_phys_ugv.groundTrace.allsolid, xmm0
    vmovsd  cs:s_phys_ugv.groundTrace.debugHitName, xmm1
  }
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f800000000000003f800000
      vmovups xmmword ptr [rbp+57h+color], xmm0
    }
    G_DebugLine(&start, &end, &color, 1);
  }
  v21 = 0;
  v22 = !results.allsolid;
  if ( results.allsolid )
  {
    _RDI = ent->vehicle;
    for ( _RBX = &s_correctSolidDeltas_ugv[0].v[2]; ; _RBX += 3 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vaddss  xmm1, xmm0, dword ptr [rdi+0F0h]
        vmovss  xmm2, dword ptr [rbx-4]
      }
      number = ent->s.number;
      clipmask = ent->clipmask;
      __asm
      {
        vmovss  dword ptr [rbp+57h+color], xmm1
        vaddss  xmm0, xmm2, dword ptr [rdi+0F4h]
        vmovss  dword ptr [rbp+57h+color+4], xmm0
        vmovss  xmm1, dword ptr [rdi+0F8h]
        vaddss  xmm2, xmm1, dword ptr [rbx]
        vmovss  dword ptr [rbp+57h+color+8], xmm2
      }
      G_Main_TraceCapsule(&results, (const vec3_t *)&color, (const vec3_t *)&color, &_RDI->phys.bounds, number, clipmask);
      if ( !results.startsolid )
        break;
      if ( (unsigned int)++v17 >= 0x1A )
        return;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+color]
      vmovss  dword ptr [rdi+0F0h], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+color+4]
      vmovss  dword ptr [rdi+0F4h], xmm1
      vmovss  xmm1, dword ptr [rdi+0F0h]
      vmovss  xmm0, dword ptr [rbp+57h+color+8]
      vmovss  dword ptr [rdi+0F8h], xmm0
    }
    v37 = ent->s.number;
    v38 = ent->clipmask;
    __asm
    {
      vmovss  dword ptr [rbp+57h+color], xmm1
      vmovss  xmm0, dword ptr [rdi+0F4h]
      vmovss  dword ptr [rbp+57h+color+4], xmm0
      vmovss  xmm1, dword ptr [rdi+0F8h]
      vsubss  xmm2, xmm1, cs:__real@3f800000
      vmovss  dword ptr [rbp+57h+color+8], xmm2
      vmovaps [rsp+110h+var_30], xmm6
    }
    G_Main_TraceCapsule(&results, &_RDI->phys.origin, (const vec3_t *)&color, &_RDI->phys.bounds, v37, v38);
    __asm
    {
      vmovups ymm6, ymmword ptr [rbp+57h+results.fraction]
      vmovups ymm0, ymmword ptr [rbp+57h+results.contents]
      vmovups xmm1, xmmword ptr [rbp+57h+results.allsolid]
      vmovups ymmword ptr cs:s_phys_ugv.groundTrace.contents, ymm0
      vmovsd  xmm0, [rbp+57h+results.debugHitName]
      vmovsd  cs:s_phys_ugv.groundTrace.debugHitName, xmm0
      vmovss  xmm0, dword ptr [rbp+57h+color]
      vmovups ymmword ptr cs:s_phys_ugv.groundTrace.fraction, ymm6
      vmovups xmmword ptr cs:s_phys_ugv.groundTrace.allsolid, xmm1
      vsubss  xmm1, xmm0, dword ptr [rdi+0F0h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi+0F0h]
      vmovss  dword ptr [rdi+0F0h], xmm3
      vmovss  xmm0, dword ptr [rbp+57h+color+4]
      vsubss  xmm1, xmm0, dword ptr [rdi+0F4h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi+0F4h]
      vmovss  dword ptr [rdi+0F4h], xmm3
      vmovss  xmm0, dword ptr [rbp+57h+color+8]
      vsubss  xmm1, xmm0, dword ptr [rdi+0F8h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi+0F8h]
      vmovaps xmm6, [rsp+110h+var_30]
      vmovss  dword ptr [rdi+0F8h], xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, [rbp+57h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( !v22 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+57h+results.normal+8]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [r15+140h]
    }
    if ( !v21 )
      goto LABEL_15;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+results.normal+4]
      vmovss  xmm1, dword ptr [rbp+57h+results.normal]
      vmulss  xmm3, xmm0, dword ptr [r15+13Ch]
      vmulss  xmm2, xmm1, dword ptr [r15+138h]
      vmulss  xmm0, xmm5, dword ptr [r15+140h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm1, xmm4, xmm0
      vcomiss xmm1, cs:__real@41200000
    }
    if ( v21 | v22 )
    {
LABEL_15:
      __asm { vcomiss xmm5, cs:__real@3f333333 }
      s_phys_ugv.hasGround = 1;
      if ( !v21 )
        s_phys_ugv.onGround = 1;
    }
  }
}

/*
==============
G_VehicleUGV_StepSlideMove
==============
*/

void __fastcall G_VehicleUGV_StepSlideMove(gentity_s *ent, Bounds *bounds, int gravity, double frameTime)
{
  vehicle_physic_t *p_phys; 
  GStepSlideMove stepSlide; 

  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  p_phys = &ent->vehicle->phys;
  __asm { vmovss  [rsp+0C8h+stepSlide.baseclass_0.deltaTime], xmm3 }
  stepSlide.origin = &p_phys->origin;
  stepSlide.velocity = &p_phys->vel;
  stepSlide.bounds = bounds;
  stepSlide.gravity = gravity != 0;
  stepSlide.hasGround = s_phys_ugv.hasGround != 0;
  stepSlide.zerog = 0;
  stepSlide.inSolid = NULL;
  stepSlide.groundNormal = &s_phys_ugv.groundTrace.normal;
  stepSlide.passEntities[0] = ent->s.number;
  stepSlide.passEntityCount = 1;
  stepSlide.clipMask = ent->clipmask;
  stepSlide.velocityClipType = VELOCITY_CLIP_VEHICLE_UGV;
  G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
  BgStepSlideMove::StepSlideMove(&stepSlide);
  BgStepSlideMove::~BgStepSlideMove(&stepSlide);
}

/*
==============
G_VehicleUGV_UpdatePlayerMove
==============
*/
void G_VehicleUGV_UpdatePlayerMove(Vehicle *veh)
{
  unsigned int physicsVehicle; 
  gentity_s *ent; 
  unsigned __int16 number; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  gentity_s *v15; 
  gclient_s *client; 
  bool v38; 
  bool v40; 
  GVehicles *v41; 
  unsigned int defIndex; 
  const VehicleDef *ServerDef; 
  unsigned __int16 v53; 
  __int64 v54; 
  unsigned int v55; 
  __int64 v56; 
  gentity_s *v57; 
  bool v69; 
  char v71; 
  bool v72; 
  bool v73; 
  gclient_s *v74; 
  char v139; 
  char v199; 
  int v223; 
  int Int_Internal_DebugName; 
  float fmt; 
  __int64 b; 
  float ba; 
  __int64 v243; 
  vec3_t moveInput; 
  Bounds bounds; 
  vec3_t targetVelocity; 
  vec3_t outTargetVelocity; 
  tmat43_t<vec3_t> axis; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 642, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  physicsVehicle = _RBX->physicsVehicle;
  __asm
  {
    vmovaps [rsp+160h+var_30], xmm6
    vmovaps [rsp+160h+var_40], xmm7
  }
  if ( BGVehicles::PhysicsIsValid(physicsVehicle) )
  {
    if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 657, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
      __debugbreak();
    ent = _RBX->ent;
    number = _RBX->ent->r.ownerNum.number;
    if ( !number )
      goto LABEL_88;
    v12 = number;
    v13 = number - 1;
    if ( v13 >= 0x800 )
    {
      LODWORD(b) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", b, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v14 = v12 - 1;
    if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v14] )
    {
      LODWORD(v243) = ent->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v243) )
        __debugbreak();
    }
    if ( !ent->r.ownerNum.number )
    {
LABEL_88:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 658, ASSERT_TYPE_ASSERT, "(veh->ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "veh->ent->r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v15 = EntHandle::ent(&_RBX->ent->r.ownerNum);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 661, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
      __debugbreak();
    if ( !v15->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 662, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    client = v15->client;
    _EAX = client->sess.cmd.forwardmove;
    __asm { vmovd   xmm6, eax }
    _EAX = client->sess.cmd.rightmove;
    __asm
    {
      vcvtdq2ps xmm6, xmm6
      vmulss  xmm4, xmm6, cs:__real@3c010204
      vmulss  xmm0, xmm6, xmm6
      vmovd   xmm3, eax
      vcvtdq2ps xmm3, xmm3
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, cs:__real@38820610
      vsqrtss xmm0, xmm2, xmm2; val
      vcmpless xmm1, xmm0, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000; max
      vblendvps xmm1, xmm0, xmm2, xmm1
      vdivss  xmm5, xmm2, xmm1
      vmulss  xmm1, xmm3, cs:__real@3c010204
      vmulss  xmm3, xmm1, xmm5
      vmulss  xmm1, xmm4, xmm5
      vmovss  dword ptr [rsp+160h+moveInput+4], xmm1
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  dword ptr [rsp+160h+moveInput], xmm3
      vmovss  dword ptr [rsp+160h+moveInput+8], xmm6
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v38 = GVehicles::ms_gVehiclesSystem == NULL;
    __asm { vmovaps xmm7, xmm0 }
    if ( !GVehicles::ms_gVehiclesSystem )
    {
      v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem");
      v38 = !v40;
      if ( v40 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    v41 = GVehicles::ms_gVehiclesSystem;
    if ( !v38 )
    {
      __asm { vmovaps xmm2, xmm7; throttle }
      _RCX = _RBX->ent->vehicle;
      __asm { vmovss  xmm3, dword ptr [rcx+5A4h]; topSpeed }
      G_VehicleUGV_CalcTargetVelocity(_RBX, &moveInput, *(double *)&_XMM2, *(double *)&_XMM3, &outTargetVelocity);
      GVehicles::PhysicsSetLinearVelocity(v41, _RBX->physicsVehicle, &outTargetVelocity);
    }
    __asm { vxorps  xmm3, xmm3, xmm3; value }
    GVehicles::PhysicsSetInputControl(v41, _RBX->physicsVehicle, 2u, *(float *)&_XMM3);
    __asm { vxorps  xmm3, xmm3, xmm3; value }
    GVehicles::PhysicsSetInputControl(v41, _RBX->physicsVehicle, 1u, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm7; value }
    GVehicles::PhysicsSetInputControl(v41, _RBX->physicsVehicle, 0, *(float *)&_XMM3);
    goto LABEL_85;
  }
  defIndex = _RBX->defIndex;
  __asm
  {
    vmovaps [rsp+160h+var_50], xmm8
    vmovaps [rsp+160h+var_60], xmm9
    vmovaps [rsp+160h+var_70], xmm10
    vmovaps [rsp+160h+var_80], xmm13
    vmovaps [rsp+160h+var_90], xmm14
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm6, xmm6, xmm6
  }
  ServerDef = G_Vehicle_GetServerDef(defIndex);
  _RSI = _RBX->ent;
  _R12 = ServerDef;
  if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 711, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v53 = _RSI->r.ownerNum.number;
  if ( !v53 )
    goto LABEL_89;
  v54 = v53;
  v55 = v53 - 1;
  if ( v55 >= 0x800 )
  {
    LODWORD(b) = v55;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", b, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v56 = v54 - 1;
  if ( g_entities[v56].r.isInUse != g_entityIsInUse[v56] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v56] )
  {
    LODWORD(v243) = _RSI->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v243) )
      __debugbreak();
  }
  if ( !_RSI->r.ownerNum.number )
  {
LABEL_89:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 712, ASSERT_TYPE_ASSERT, "(ent->r.ownerNum.isDefined())", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v57 = EntHandle::ent(&_RSI->r.ownerNum);
  if ( !v57->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_ugv_sp.cpp", 715, ASSERT_TYPE_ASSERT, "(player->client)", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  __asm
  {
    vmovups xmm1, xmmword ptr [rsi+100h]
    vmovups xmmword ptr [rsp+160h+bounds.midPoint], xmm1
    vmovsd  xmm0, qword ptr [rsi+110h]
    vshufps xmm1, xmm1, xmm1, 0FFh
    vcomiss xmm1, xmm13
    vmovss  dword ptr [rsp+160h+bounds.halfSize], xmm1
    vmovsd  qword ptr [rsp+160h+bounds.halfSize+4], xmm0
    vmovss  xmm0, dword ptr [rsp+160h+bounds.halfSize+4]
    vcomiss xmm0, xmm13
    vmovss  xmm4, dword ptr [rsp+160h+bounds.halfSize+8]
    vcomiss xmm4, xmm13
    vmovss  xmm0, dword ptr [rsp+160h+bounds.halfSize+4]
    vmaxss  xmm3, xmm0, dword ptr [rsp+160h+bounds.halfSize]
    vsubss  xmm1, xmm3, xmm4
    vmaxss  xmm2, xmm1, xmm13
    vaddss  xmm1, xmm2, dword ptr [rsp+160h+bounds.midPoint+8]
    vaddss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+160h+bounds.midPoint+8], xmm1
    vmovss  dword ptr [rsp+160h+bounds.halfSize+8], xmm0
    vmovss  dword ptr [rsp+160h+bounds.halfSize], xmm3
    vmovss  dword ptr [rsp+160h+bounds.halfSize+4], xmm3
  }
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v57->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
  v69 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v57->client->ps.pm_flags, ACTIVE, 0x10u);
  __asm { vmovss  xmm14, cs:__real@3f800000 }
  v71 = 0;
  v72 = !v69;
  if ( !v69 )
  {
    v73 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v57->client->ps.pm_flags, ACTIVE, 0xFu);
    v71 = 0;
    v72 = !v73;
    if ( !v73 )
    {
      v74 = v57->client;
      _EAX = v74->sess.cmd.forwardmove;
      __asm { vmovd   xmm6, eax }
      _EAX = v74->sess.cmd.rightmove;
      __asm
      {
        vmovd   xmm5, eax
        vcvtdq2ps xmm5, xmm5
        vmulss  xmm1, xmm5, xmm5
        vcvtdq2ps xmm6, xmm6
        vmulss  xmm3, xmm6, cs:__real@3c010204
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, cs:__real@38820610
        vsqrtss xmm0, xmm2, xmm2; val
        vcmpless xmm1, xmm0, cs:__real@80000000
        vblendvps xmm1, xmm0, xmm14, xmm1
        vdivss  xmm4, xmm14, xmm1
        vmulss  xmm1, xmm5, cs:__real@3c010204
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm1, xmm3, xmm4
        vmovss  dword ptr [rsp+160h+moveInput+4], xmm1
        vmovss  dword ptr [rsp+160h+moveInput], xmm2
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm14; max
        vmovss  dword ptr [rsp+160h+moveInput+8], xmm13
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
  }
  __asm
  {
    vcomiss xmm13, dword ptr [rbx+6B8h]
    vmovss  dword ptr [rsp+160h+targetVelocity], xmm13
    vmovss  dword ptr [rsp+160h+targetVelocity+4], xmm13
    vmovss  dword ptr [rsp+160h+targetVelocity+8], xmm13
  }
  if ( v71 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+6C0h]
      vmovss  xmm7, dword ptr [rbx+6C4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+moveInput+4]
      vcomiss xmm0, xmm13
    }
    _RAX = _RSI->vehicle;
    if ( v71 )
      __asm { vmovss  xmm3, dword ptr [rax+5A8h]; topSpeed }
    else
      __asm { vmovss  xmm3, dword ptr [rax+5A4h] }
    __asm { vmovss  xmm7, dword ptr [r12+60h] }
  }
  __asm { vcomiss xmm6, xmm13 }
  if ( !(v71 | v72) )
  {
    __asm { vmovaps xmm2, xmm6; throttle }
    G_VehicleUGV_CalcTargetVelocity(_RBX, &moveInput, *(double *)&_XMM2, *(double *)&_XMM3, &targetVelocity);
  }
  G_VehicleUGV_CalcRotAccel(_RSI, &targetVelocity, &outTargetVelocity);
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr [rbp+60h+outTargetVelocity]
    vaddss  xmm3, xmm2, dword ptr [rbx+168h]
    vmulss  xmm2, xmm0, dword ptr [rbp+60h+outTargetVelocity+4]
    vmovss  dword ptr [rbx+168h], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbx+16Ch]
    vmovss  dword ptr [rbx+16Ch], xmm3
    vmovaps xmm4, xmm0
    vmovss  [rsp+160h+var_120], xmm0
    vdivss  xmm6, xmm14, xmm0
    vmulss  xmm0, xmm0, dword ptr [rbp+60h+outTargetVelocity+8]
    vaddss  xmm2, xmm0, dword ptr [rbx+170h]
    vmovss  dword ptr [rbx+170h], xmm2
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm1, xmm0, dword ptr [rbx+118h]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rbx+10Ch], xmm1
  }
  _RBX->phys.angles.v[0] = 0.0;
  _RBX->phys.angles.v[2] = 0.0;
  AnglesToAxis(&_RBX->phys.angles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+targetVelocity]
    vsubss  xmm3, xmm0, dword ptr [rbx+138h]
    vmovss  xmm1, dword ptr [rsp+160h+targetVelocity+4]
    vmovss  xmm2, dword ptr [rsp+160h+targetVelocity+8]
    vmovss  dword ptr [rbx+150h], xmm3
    vsubss  xmm0, xmm1, dword ptr [rbx+13Ch]
    vmovss  dword ptr [rbx+154h], xmm0
    vsubss  xmm1, xmm2, dword ptr [rbx+140h]
    vmovss  dword ptr [rbx+158h], xmm1
    vmulss  xmm5, xmm3, xmm6
    vmovss  dword ptr [rbx+150h], xmm5
    vmulss  xmm0, xmm6, dword ptr [rbx+154h]
    vmovss  dword ptr [rbx+154h], xmm0
    vmulss  xmm3, xmm6, dword ptr [rbx+158h]
    vmovss  dword ptr [rbx+158h], xmm3
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2; val
    vcmpless xmm1, xmm0, cs:__real@80000000
    vblendvps xmm1, xmm0, xmm14, xmm1
    vdivss  xmm4, xmm14, xmm1
    vmulss  xmm1, xmm4, xmm5
    vmovss  dword ptr [rbx+150h], xmm1
    vmulss  xmm3, xmm4, dword ptr [rbx+154h]
    vmovss  dword ptr [rbx+154h], xmm3
    vmulss  xmm1, xmm4, dword ptr [rbx+158h]
    vmovss  dword ptr [rbx+158h], xmm1
    vxorps  xmm1, xmm7, cs:__xmm@80000000800000008000000080000000; min
    vmovaps xmm2, xmm7; max
    vmovss  [rbp+60h+var_AC], xmm13
    vmovss  [rbp+60h+var_A8], xmm13
    vmovss  [rbp+60h+var_A4], xmm13
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr [rbx+150h]
    vmovss  dword ptr [rbx+150h], xmm2
    vmulss  xmm1, xmm0, dword ptr [rbx+154h]
    vmovss  dword ptr [rbx+154h], xmm1
    vmulss  xmm3, xmm0, dword ptr [rbx+158h]
    vmulss  xmm0, xmm2, dword ptr [rbp+60h+axis]
    vmulss  xmm1, xmm1, dword ptr [rbp+60h+axis+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+axis+8]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbx+158h], xmm3
    vmovss  xmm3, [rsp+160h+var_120]
    vmovss  xmm10, dword ptr [rbp+60h+axis+10h]
    vmovss  xmm8, dword ptr [rbp+60h+axis+0Ch]
    vmovss  xmm7, dword ptr [rbp+60h+axis+14h]
    vmovss  xmm6, dword ptr [rbp+60h+axis+1Ch]
    vmovss  xmm5, dword ptr [rbp+60h+axis+18h]
    vmovss  xmm4, dword ptr [rbp+60h+axis+20h]
    vmovss  dword ptr [rbx+15Ch], xmm0
    vmulss  xmm1, xmm10, dword ptr [rbx+154h]
    vmulss  xmm0, xmm8, dword ptr [rbx+150h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbx+158h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbx+160h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+154h]
    vmulss  xmm0, xmm5, dword ptr [rbx+150h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rbx+158h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rbx+164h], xmm1
    vmulss  xmm0, xmm3, dword ptr [rbx+150h]
    vaddss  xmm2, xmm0, dword ptr [rbx+138h]
    vmovss  dword ptr [rbx+138h], xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+154h]
    vaddss  xmm1, xmm0, dword ptr [rbx+13Ch]
    vmovss  dword ptr [rbx+13Ch], xmm1
    vmulss  xmm1, xmm1, dword ptr [rbp+60h+axis+4]
    vmulss  xmm0, xmm3, dword ptr [rbx+158h]
    vaddss  xmm3, xmm0, dword ptr [rbx+140h]
    vmulss  xmm0, xmm2, dword ptr [rbp+60h+axis]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rbp+60h+axis+8]
    vmovss  dword ptr [rbx+140h], xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+144h], xmm2
    vmulss  xmm1, xmm10, dword ptr [rbx+13Ch]
    vmulss  xmm0, xmm8, dword ptr [rbx+138h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rbx+140h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbx+148h], xmm0
    vmulss  xmm1, xmm6, dword ptr [rbx+13Ch]
    vmulss  xmm0, xmm5, dword ptr [rbx+138h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+140h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbx+14Ch], xmm0
    vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vucomiss xmm1, dword ptr [rbx+138h]
  }
  if ( !v139 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+13Ch]
  }
  if ( !v139 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+140h]
  }
  if ( !v139 )
  {
LABEL_72:
    G_VehicleUGV_GroundTrace(_RSI);
    _R14 = (vec3_t *)_RSI->vehicle;
    if ( s_phys_ugv.onGround )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [r14+13Ch]
        vmovss  xmm6, dword ptr [r14+138h]
        vmovss  xmm8, dword ptr [r14+140h]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm9, xmm2, xmm2
      }
      G_VehicleUGV_ClipVelocity(_R14 + 26, &s_phys_ugv.groundTrace.normal, _R14 + 26);
      __asm
      {
        vmovss  xmm5, dword ptr [r14+13Ch]
        vmovss  xmm4, dword ptr [r14+138h]
        vmovss  xmm10, dword ptr [r14+140h]
        vmulss  xmm1, xmm4, xmm6
        vmulss  xmm0, xmm5, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, xmm8
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm13
      }
      if ( !(v71 | v199) )
      {
        __asm
        {
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm10, xmm10
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm14, xmm0
          vdivss  xmm2, xmm14, xmm0
          vmulss  xmm0, xmm2, xmm4
          vmovss  dword ptr [r14+138h], xmm0
          vmulss  xmm1, xmm2, xmm5
          vmovss  dword ptr [r14+13Ch], xmm1
          vmulss  xmm0, xmm2, xmm10
          vmovss  dword ptr [r14+140h], xmm0
          vmulss  xmm1, xmm9, dword ptr [r14+138h]
          vmovss  dword ptr [r14+138h], xmm1
          vmulss  xmm0, xmm9, dword ptr [r14+13Ch]
          vmovss  dword ptr [r14+13Ch], xmm0
          vmulss  xmm1, xmm9, dword ptr [r14+140h]
          vmovss  dword ptr [r14+140h], xmm1
          vmovss  xmm4, dword ptr [r14+138h]
        }
      }
      __asm { vucomiss xmm4, xmm13 }
      if ( v199 )
      {
        __asm { vucomiss xmm13, dword ptr [r14+13Ch] }
        if ( v199 )
          goto LABEL_82;
      }
      v223 = 0;
    }
    else
    {
      if ( s_phys_ugv.hasGround )
        G_VehicleUGV_ClipVelocity(_R14 + 26, &s_phys_ugv.groundTrace.normal, _R14 + 26);
      v223 = 1;
    }
    __asm { vmovss  xmm3, [rsp+160h+var_120]; frameTime }
    G_VehicleUGV_StepSlideMove(_RSI, &bounds, v223, *(double *)&_XMM3);
  }
LABEL_82:
  G_VehicleUGV_GroundPlant(_RSI, &_RBX->phys, 1);
  MatrixTransposeTransformVector43(&_RBX->phys.vel, &axis, &_RBX->phys.bodyVel);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+144h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [rbx+588h], xmm0
  }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug");
  __asm
  {
    vmovaps xmm10, [rsp+160h+var_70]
    vmovaps xmm9, [rsp+160h+var_60]
    vmovaps xmm8, [rsp+160h+var_50]
  }
  if ( Int_Internal_DebugName )
  {
    _RAX = vec3_t::operator[](&bounds.halfSize, 2);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+160h+bounds.halfSize]; rad
      vmovss  [rsp+160h+b], xmm13
      vmovaps xmm3, xmm14; r
      vmovss  xmm0, dword ptr [rax]
      vmulss  xmm2, xmm0, cs:__real@40000000; height
      vmovss  dword ptr [rsp+160h+fmt], xmm14
    }
    G_Vehicle_DebugCapsule(&_RBX->phys.origin, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, ba);
  }
  __asm
  {
    vmovaps xmm13, [rsp+160h+var_80]
    vmovaps xmm14, [rsp+160h+var_90]
  }
LABEL_85:
  __asm
  {
    vmovaps xmm7, [rsp+160h+var_40]
    vmovaps xmm6, [rsp+160h+var_30]
  }
}

