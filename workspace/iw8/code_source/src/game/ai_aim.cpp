/*
==============
AI_DrawSetAngleCalc
==============
*/

void __fastcall AI_DrawSetAngleCalc(const vec3_t *entPos, const vec3_t *entAngles, const vec3_t *from, const vec3_t *angles, const vec3_t *postClamp)
{
  ?AI_DrawSetAngleCalc@@YAXAEBTvec3_t@@0000@Z(entPos, entAngles, from, angles, postClamp);
}

/*
==============
AIScriptedInterface::HitTarget
==============
*/

void __fastcall AIScriptedInterface::HitTarget(const BgWeaponParms *wp, const vec3_t *target, vec3_t *outForward)
{
  ?HitTarget@AIScriptedInterface@@SAXPEBUBgWeaponParms@@AEBTvec3_t@@AEAT3@@Z(wp, target, outForward);
}

/*
==============
AIScriptedInterface::IsEntZeroG
==============
*/

bool __fastcall AIScriptedInterface::IsEntZeroG(const gentity_s *ent)
{
  return ?IsEntZeroG@AIScriptedInterface@@KA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
AIScriptedInterface::MissTarget
==============
*/

void __fastcall AIScriptedInterface::MissTarget(const BgWeaponParms *wp, const vec3_t *target, vec3_t *outForward)
{
  ?MissTarget@AIScriptedInterface@@SAXPEBUBgWeaponParms@@AEBTvec3_t@@AEAT3@@Z(wp, target, outForward);
}

/*
==============
AI_DrawDebugAccuracy
==============
*/

void __fastcall AI_DrawDebugAccuracy(vec3_t *pos, float scale, float rowHeight)
{
  ?AI_DrawDebugAccuracy@@YAXAEATvec3_t@@MM@Z(pos, scale, rowHeight);
}

/*
==============
AIScriptedInterface::MissTargetSentient
==============
*/

int __fastcall AIScriptedInterface::MissTargetSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracy)
{
  return ?MissTargetSentient@AIScriptedInterface@@IEBAHPEAUsentient_s@@PEAUBgWeaponParms@@M@Z(this, pTargetSentient, wp, accuracy);
}

/*
==============
AICommonInterface::GetPlayerMovementAccuracy
==============
*/

double __fastcall AICommonInterface::GetPlayerMovementAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  double result; 

  *(float *)&result = ?GetPlayerMovementAccuracy@AICommonInterface@@IEBAMPEBUsentient_s@@@Z(this, enemy);
  return result;
}

/*
==============
AICommonInterface::GetPlayerSightAccuracy
==============
*/

double __fastcall AICommonInterface::GetPlayerSightAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  double result; 

  *(float *)&result = ?GetPlayerSightAccuracy@AICommonInterface@@IEBAMPEBUsentient_s@@@Z(this, enemy);
  return result;
}

/*
==============
AIScriptedInterface::GetEntZeroGAngles
==============
*/

void __fastcall AIScriptedInterface::GetEntZeroGAngles(const gentity_s *ent, vec3_t *entAnglesOut)
{
  ?GetEntZeroGAngles@AIScriptedInterface@@KAXPEBUgentity_s@@AEATvec3_t@@@Z(ent, entAnglesOut);
}

/*
==============
AIScriptedInterface::HitTargetSentient
==============
*/

void __fastcall AIScriptedInterface::HitTargetSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracy)
{
  ?HitTargetSentient@AIScriptedInterface@@IEBAXPEAUsentient_s@@PEAUBgWeaponParms@@M@Z(this, pTargetSentient, wp, accuracy);
}

/*
==============
AICommonInterface::GetPlayerStanceAccuracy
==============
*/

double __fastcall AICommonInterface::GetPlayerStanceAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  double result; 

  *(float *)&result = ?GetPlayerStanceAccuracy@AICommonInterface@@IEBAMPEBUsentient_s@@@Z(this, enemy);
  return result;
}

/*
==============
AIScriptedInterface::GetAttackerCountAccuracy
==============
*/

double __fastcall AIScriptedInterface::GetAttackerCountAccuracy(AIScriptedInterface *this, const sentient_s *enemy)
{
  double result; 

  *(float *)&result = ?GetAttackerCountAccuracy@AIScriptedInterface@@IEBAMPEBUsentient_s@@@Z(this, enemy);
  return result;
}

/*
==============
AIScriptedInterface::FillWeaponParms
==============
*/

void __fastcall AIScriptedInterface::FillWeaponParms(AIScriptedInterface *this, BgWeaponParms *wp)
{
  ?FillWeaponParms@AIScriptedInterface@@IEBAXPEAUBgWeaponParms@@@Z(this, wp);
}

/*
==============
AIScriptedInterface::GetFinalAccuracy
==============
*/

double __fastcall AIScriptedInterface::GetFinalAccuracy(AIScriptedInterface *this, sentient_s *enemy, BgWeaponParms *wp, float accuracyMod)
{
  double result; 

  *(float *)&result = ?GetFinalAccuracy@AIScriptedInterface@@IEBAMPEAUsentient_s@@PEAUBgWeaponParms@@M@Z(this, enemy, wp, accuracyMod);
  return result;
}

/*
==============
AIScriptedInterface::MissSentient
==============
*/

int __fastcall AIScriptedInterface::MissSentient(BgWeaponParms *wp, sentient_s *enemy, float accuracy)
{
  return ?MissSentient@AIScriptedInterface@@SAHPEAUBgWeaponParms@@PEAUsentient_s@@M@Z(wp, enemy, accuracy);
}

/*
==============
AICommonInterface::GetAccuracyFraction
==============
*/

double __fastcall AICommonInterface::GetAccuracyFraction(ai_common_t *self, float dist, const Weapon *r_weapon, WeapAccuracyType accuracyType)
{
  double result; 

  *(float *)&result = ?GetAccuracyFraction@AICommonInterface@@SAMPEAUai_common_t@@MAEBUWeapon@@W4WeapAccuracyType@@@Z(self, dist, r_weapon, accuracyType);
  return result;
}

/*
==============
AICommonInterface::GetWeaponAccuracy
==============
*/

double __fastcall AICommonInterface::GetWeaponAccuracy(AICommonInterface *this, const sentient_s *enemy, const Weapon *r_weapon, WeapAccuracyType accuracyType)
{
  double result; 

  *(float *)&result = ?GetWeaponAccuracy@AICommonInterface@@IEBAMPEBUsentient_s@@AEBUWeapon@@W4WeapAccuracyType@@@Z(this, enemy, r_weapon, accuracyType);
  return result;
}

/*
==============
AIScriptedInterface::HitSentient
==============
*/

void __fastcall AIScriptedInterface::HitSentient(AIScriptedInterface *this, BgWeaponParms *wp, sentient_s *enemy, float accuracy)
{
  ?HitSentient@AIScriptedInterface@@QEBAXPEAUBgWeaponParms@@PEAUsentient_s@@M@Z(this, wp, enemy, accuracy);
}

/*
==============
AIScriptedInterface::ShootSentient
==============
*/

int __fastcall AIScriptedInterface::ShootSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracyMod, bool bDontChangeTargetPosOnHit, bool *bCleanMiss)
{
  return ?ShootSentient@AIScriptedInterface@@IEBAHPEAUsentient_s@@PEAUBgWeaponParms@@M_NPEA_N@Z(this, pTargetSentient, wp, accuracyMod, bDontChangeTargetPosOnHit, bCleanMiss);
}

/*
==============
AICommonInterface::GetMaxMountCover
==============
*/

double __fastcall AICommonInterface::GetMaxMountCover(AICommonInterface *this, const playerState_s *const enemyPs)
{
  double result; 

  *(float *)&result = ?GetMaxMountCover@AICommonInterface@@QEBAMQEBUplayerState_s@@@Z(this, enemyPs);
  return result;
}

/*
==============
AIScriptedInterface::GetPlayerMountAccuracy
==============
*/

double __fastcall AIScriptedInterface::GetPlayerMountAccuracy(AIScriptedInterface *this, const sentient_s *const enemy)
{
  double result; 

  *(float *)&result = ?GetPlayerMountAccuracy@AIScriptedInterface@@QEBAMQEBUsentient_s@@@Z(this, enemy);
  return result;
}

/*
==============
AI_DrawDebugAccuracy
==============
*/

void __fastcall AI_DrawDebugAccuracy(vec3_t *pos, double scale, double rowHeight)
{
  char (*v5)[32]; 
  const vec4_t *v6; 
  const char *v8; 
  __int64 v11; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v5 = debugAccuracyStrings;
  __asm { vmovaps [rsp+48h+var_28], xmm7 }
  v6 = debugAccuracyColors;
  __asm { vmovaps xmm7, xmm1 }
  v8 = debugAccuracyStrings[0];
  _RDI = pos;
  __asm { vmovaps xmm6, xmm2 }
  v11 = 11i64;
  do
  {
    if ( *(_BYTE *)v5 )
    {
      __asm { vmovaps xmm2, xmm7; scale }
      G_Main_AddDebugString(_RDI, v6, *(float *)&_XMM2, v8);
    }
    __asm { vmovss  xmm0, dword ptr [rdi+8] }
    v8 += 32;
    ++v6;
    ++v5;
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rdi+8], xmm1
    }
    --v11;
  }
  while ( v11 );
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
AI_DrawSetAngleCalc
==============
*/
void AI_DrawSetAngleCalc(const vec3_t *entPos, const vec3_t *entAngles, const vec3_t *from, const vec3_t *angles, const vec3_t *postClamp)
{
  vec3_t forward; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  char dest[64]; 

  __asm { vmovaps [rsp+110h+var_30], xmm6 }
  _R14 = postClamp;
  _RSI = angles;
  AnglesToAxis(entAngles, &axis);
  __asm { vmovss  xmm2, cs:__real@41f00000; length }
  G_DebugAxis(&axis, entPos, *(float *)&_XMM2, 0, 1);
  AngleVectors(_RSI, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+110h+forward+8]
    vmovss  xmm5, cs:__real@453b8000
    vmovss  xmm0, dword ptr [rbp+4Fh+axis]
    vmulss  xmm2, xmm0, dword ptr [rsp+110h+forward]
    vmovss  xmm1, dword ptr [rbp+4Fh+axis+0Ch]
    vmulss  xmm0, xmm1, dword ptr [rsp+110h+forward+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+4Fh+axis+18h]
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm0, xmm0, xmm5
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rbp+4Fh+axis+4]
    vmulss  xmm3, xmm0, dword ptr [rsp+110h+forward]
    vmovss  dword ptr [rbp+4Fh+end], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+axis+10h]
    vmulss  xmm2, xmm1, dword ptr [rsp+110h+forward+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+4Fh+axis+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+axis+8]
    vmulss  xmm3, xmm2, xmm5
    vaddss  xmm0, xmm3, dword ptr [rdi+4]
    vmulss  xmm3, xmm1, dword ptr [rsp+110h+forward]
    vmovss  dword ptr [rbp+4Fh+end+4], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+axis+14h]
    vmulss  xmm2, xmm0, dword ptr [rsp+110h+forward+4]
    vmulss  xmm0, xmm6, dword ptr [rbp+4Fh+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm3, xmm2, xmm5
    vaddss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+4Fh+end+8], xmm1
  }
  G_DebugLine(from, &end, &colorPurple, 0);
  __asm
  {
    vmovss  xmm3, cs:__real@41200000
    vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+axis+0Ch]
    vaddss  xmm2, xmm1, dword ptr [rdi]
    vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+axis+10h]
    vmovss  dword ptr [rsp+110h+point], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+axis+14h]
    vmovss  xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+4Fh+point+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+4Fh+point+8], xmm2
    vmovss  xmm2, dword ptr [rsi]
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovq   r8, xmm2
    vmovq   r9, xmm3
  }
  Com_sprintf<64>((char (*)[64])dest, "aim angles [%.2f, %.2f]", *(double *)&_XMM2, *(double *)&_XMM3);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  G_DebugString(&point, &colorGreen, *(float *)&_XMM2, dest, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4Fh+point+8]
    vmovss  xmm3, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [r14]
    vaddss  xmm1, xmm0, cs:__real@c1200000
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovss  dword ptr [rbp+4Fh+point+8], xmm1
  }
  Com_sprintf<64>((char (*)[64])dest, "post clamp [%.2f %.2f]", *(double *)&_XMM2, *(double *)&_XMM3);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  G_DebugString(&point, &colorGreen, *(float *)&_XMM2, dest, 1);
  __asm { vmovaps xmm6, [rsp+110h+var_30] }
}

/*
==============
AIScriptedInterface::FillWeaponParms
==============
*/
void AIScriptedInterface::FillWeaponParms(AIScriptedInterface *this, BgWeaponParms *wp)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v17; 
  ai_scripted_t *v18; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 

  _RBX = wp;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 643, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 644, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+15Ch]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+160h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+164h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 646, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pAI->orientation.vLookForward )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pAI->orientation.vLookForward )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[2] )") )
      __debugbreak();
  }
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+168h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+16Ch]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+170h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 647, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pAI->orientation.vLookRight )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pAI->orientation.vLookRight )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[2] )") )
      __debugbreak();
  }
  _RCX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+174h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+178h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+17Ch]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 648, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pAI->orientation.vLookUp )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pAI->orientation.vLookUp )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[2] )") )
      __debugbreak();
  }
  m_pAI = this->m_pAI;
  _RBX->forward.v[0] = m_pAI->orientation.vLookForward.v[0];
  _RBX->forward.v[1] = m_pAI->orientation.vLookForward.v[1];
  _RBX->forward.v[2] = m_pAI->orientation.vLookForward.v[2];
  v17 = this->m_pAI;
  _RBX->right.v[0] = v17->orientation.vLookRight.v[0];
  _RBX->right.v[1] = v17->orientation.vLookRight.v[1];
  _RBX->right.v[2] = v17->orientation.vLookRight.v[2];
  v18 = this->m_pAI;
  _RBX->up.v[0] = v18->orientation.vLookUp.v[0];
  _RBX->up.v[1] = v18->orientation.vLookUp.v[1];
  _RBX->up.v[2] = v18->orientation.vLookUp.v[2];
  if ( !AIScriptedInterface::GetMuzzleInfo(this, &_RBX->muzzleTrace, &_RBX->gunForward) )
  {
    this->GetEyePosition(this, &_RBX->muzzleTrace);
    _RBX->gunForward.v[0] = _RBX->forward.v[0];
    _RBX->gunForward.v[1] = _RBX->forward.v[1];
    _RBX->gunForward.v[2] = _RBX->forward.v[2];
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 664, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 665, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] )") )
      __debugbreak();
  }
}

/*
==============
AICommonInterface::GetAccuracyFraction
==============
*/

float __fastcall AICommonInterface::GetAccuracyFraction(ai_common_t *self, double dist, const Weapon *r_weapon, WeapAccuracyType accuracyType)
{
  unsigned __int16 weaponIdx; 
  __int64 v10; 
  __int64 v14; 
  WeaponCompleteDef *v15; 
  const char *WeaponName; 
  char *v26; 
  char *fmt; 
  double v31; 
  char output[1024]; 

  __asm { vmovaps [rsp+4B8h+var_48], xmm6 }
  weaponIdx = r_weapon->weaponIdx;
  v10 = accuracyType;
  __asm { vmovaps xmm6, xmm1 }
  if ( r_weapon->weaponIdx )
  {
    v14 = weaponIdx;
    __asm { vmovaps [rsp+4B8h+var_68], xmm8 }
    if ( weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weaponIdx, bg_lastParsedWeaponIndex) )
      __debugbreak();
    if ( !bg_weaponCompleteDefs[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    v15 = bg_weaponCompleteDefs[v14];
    __asm { vmulss  xmm8, xmm6, cs:__real@3983126f }
    if ( (unsigned int)v10 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 103, ASSERT_TYPE_ASSERT, "(accuracyType >= WEAP_ACCURACY_AI_VS_AI && accuracyType < WEAP_ACCURACY_COUNT)", (const char *)&queryFormat, "accuracyType >= WEAP_ACCURACY_AI_VS_AI && accuracyType < WEAP_ACCURACY_COUNT") )
      __debugbreak();
    _RCX = v15->accuracyGraphKnots[v10];
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( _RCX )
    {
      LOWORD(_RAX) = v15->accuracyGraphKnotCount[v10];
      if ( (_WORD)_RAX )
      {
        _RAX = (unsigned __int16)_RAX;
        __asm
        {
          vmovaps [rsp+4B8h+var_58], xmm7
          vmovss  xmm7, dword ptr [rcx+rax*8-8]
          vucomiss xmm7, xmm6
        }
        WeaponName = BG_GetWeaponName(r_weapon, output, 0x400u);
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  [rsp+4B8h+var_480], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 104, ASSERT_TYPE_ASSERT, "(weapCompleteDef->accuracyGraphKnots[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnotCount[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnots[accuracyType][weapCompleteDef->accuracyGraphKnotCount[accuracyType] - 1][0] == 1.0f)", "%s\n\tweapon '%s' has invalid graph...max range %f != 1.0.", "weapCompleteDef->accuracyGraphKnots[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnotCount[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnots[accuracyType][weapCompleteDef->accuracyGraphKnotCount[accuracyType] - 1][0] == 1.0f", WeaponName, v31) )
          __debugbreak();
        __asm { vmovaps xmm7, [rsp+4B8h+var_58] }
      }
    }
    __asm
    {
      vminss  xmm6, xmm8, xmm6
      vmovaps xmm8, [rsp+4B8h+var_68]
    }
    if ( !v15->accuracyGraphKnots[v10] || !v15->accuracyGraphKnotCount[v10] )
    {
      v26 = BG_GetWeaponName(r_weapon, output, 0x400u);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 == 1 )
        {
          if ( self )
          {
            LODWORD(fmt) = self->ent->s.number;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E15C30, 432i64, v26, fmt);
          }
          else
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143E15C90, 433i64, v26);
          }
        }
      }
      else if ( self )
      {
        LODWORD(fmt) = self->ent->s.number;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E15B80, 430i64, v26, fmt);
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E15BD8, 431i64, v26);
      }
    }
    __asm { vmovaps xmm2, xmm6; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFraction(v15->accuracyGraphKnotCount[v10], v15->accuracyGraphKnots[v10], *(const float *)&_XMM2);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovaps xmm6, [rsp+4B8h+var_48] }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::GetAttackerCountAccuracy
==============
*/
float AIScriptedInterface::GetAttackerCountAccuracy(AIScriptedInterface *this, const sentient_s *enemy)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 393, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 394, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 395, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  if ( this->m_pAI->combat.noAttackerAccuracyMod )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    _RCX = enemy->ent->client;
    __asm { vmovss  xmm0, dword ptr [rcx+0B684h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::GetEntZeroGAngles
==============
*/
void AIScriptedInterface::GetEntZeroGAngles(const gentity_s *ent, vec3_t *entAnglesOut)
{
  gclient_s *client; 
  GHandler *Handler; 
  gclient_s *v6; 
  const BgHandler *v7; 
  __int16 groundRefEnt; 
  const char *v9; 
  int v10; 
  const char *v11; 
  AICommonWrapper v12; 
  WorldUpReferenceFrame v13; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 695, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !AIScriptedInterface::IsEntZeroG(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 696, ASSERT_TYPE_ASSERT, "(IsEntZeroG( ent ))", (const char *)&queryFormat, "IsEntZeroG( ent )") )
    __debugbreak();
  client = ent->client;
  if ( client && BG_IsPlayerZeroG(&client->ps) )
  {
    Handler = GHandler::getHandler();
    v6 = ent->client;
    v7 = Handler;
    if ( !v6 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2587, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v6->ps.pm_flags, ACTIVE, 0x2Au) && ((groundRefEnt = v6->ps.groundRefEnt, groundRefEnt == 2047) || !groundRefEnt) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) )
      {
LABEL_22:
        entAnglesOut->v[0] = v6->ps.viewangles.v[0];
        entAnglesOut->v[1] = v6->ps.viewangles.v[1];
        entAnglesOut->v[2] = v6->ps.viewangles.v[2];
        if ( WorldUpReferenceFrame::HasValidWorldUpInPs(&v6->ps) )
        {
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v13, &v6->ps, v7);
          WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v13, entAnglesOut);
        }
        return;
      }
      v9 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )";
      v10 = 2575;
      v11 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))";
    }
    else
    {
      v9 = "BG_IsPlayerZeroG( ps )";
      v10 = 2588;
      v11 = "(BG_IsPlayerZeroG( ps ))";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", v10, ASSERT_TYPE_ASSERT, v11, (const char *)&queryFormat, v9) )
      __debugbreak();
    goto LABEL_22;
  }
  AIActorInterface::AIActorInterface(&v12.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v12.m_newAgentInterface);
  v12.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v12.m_botInterface);
  v12.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v12.m_botAgentInterface);
  v12.m_pAI = NULL;
  v12.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  AICommonWrapper::Setup(&v12, ent);
  if ( ent->sentient && v12.m_pAI && v12.m_pAI->Is3D(v12.m_pAI) )
  {
    entAnglesOut->v[0] = ent->r.currentAngles.v[0];
    entAnglesOut->v[1] = ent->r.currentAngles.v[1];
    entAnglesOut->v[2] = ent->r.currentAngles.v[2];
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 711, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
  {
    __debugbreak();
  }
}

/*
==============
AIScriptedInterface::GetFinalAccuracy
==============
*/

float __fastcall AIScriptedInterface::GetFinalAccuracy(AIScriptedInterface *this, sentient_s *enemy, BgWeaponParms *wp, double accuracyMod)
{
  bool v16; 
  gentity_s *ent; 
  Weapon *p_weapon; 
  const dvar_t *v38; 
  const dvar_t *v48; 
  bool v86; 
  int v89; 
  char (*v90)[32]; 
  __int64 v109; 
  double v110; 
  __int64 v111; 
  AIWrapper v112; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  v16 = this->m_pAI == NULL;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBX = enemy;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovaps xmm8, xmm3
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 469, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 470, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 471, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 472, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm0, dword ptr [rax+430h]
    vcomiss xmm0, xmm7
    vcomiss xmm8, xmm7
  }
  ent = _RBX->ent;
  p_weapon = &wp->weapon;
  __asm { vmovaps [rsp+148h+var_78], xmm11 }
  if ( ent->client )
  {
    *(double *)&_XMM0 = AICommonInterface::GetWeaponAccuracy(this, _RBX, p_weapon, WEAP_ACCURACY_AI_VS_PLAYER);
    __asm { vmovaps xmm13, xmm0 }
    *(double *)&_XMM0 = AICommonInterface::GetPlayerStanceAccuracy(this, _RBX);
    __asm { vmovaps xmm14, xmm0 }
    *(double *)&_XMM0 = AICommonInterface::GetPlayerMovementAccuracy(this, _RBX);
    _RAX = this->m_pAI;
    __asm
    {
      vmovaps xmm15, xmm0
      vmovss  xmm0, dword ptr [rax+434h]
      vmovss  [rsp+148h+arg_18], xmm0
    }
    if ( !_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 393, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !_RBX->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 395, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
      __debugbreak();
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( this->m_pAI->combat.noAttackerAccuracyMod )
    {
      __asm { vmovaps xmm9, xmm6 }
    }
    else
    {
      _RCX = _RBX->ent->client;
      __asm { vmovss  xmm9, dword ptr [rcx+0B684h] }
    }
    *(double *)&_XMM0 = AIScriptedInterface::GetPlayerMountAccuracy(this, _RBX);
    __asm { vmovaps xmm12, xmm0 }
  }
  else
  {
    *(double *)&_XMM0 = AICommonInterface::GetWeaponAccuracy(this, _RBX, p_weapon, WEAP_ACCURACY_AI_VS_AI);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  [rsp+148h+arg_18], xmm6
      vmovaps xmm14, xmm6
      vmovaps xmm15, xmm6
      vmovaps xmm9, xmm6
      vmovaps xmm12, xmm6
      vmovaps xmm13, xmm0
    }
    AIWrapper::AIWrapper(&v112, _RBX->ent);
    if ( v112.m_pAI && AIScriptedInterface::ShouldIgnorePain(v112.m_pAI) )
    {
      __asm
      {
        vxorpd  xmm11, xmm11, xmm11
        vxorps  xmm2, xmm2, xmm2
      }
      goto LABEL_25;
    }
  }
  __asm
  {
    vmovsd  xmm11, cs:__real@3ff0000000000000
    vmovaps xmm2, xmm8
  }
LABEL_25:
  _RAX = this->m_pAI;
  v38 = DVARBOOL_ai_debugAccuracy;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+430h]
    vmulss  xmm1, xmm0, dword ptr [rbx+64h]
    vmulss  xmm2, xmm1, xmm2
    vmulss  xmm3, xmm2, xmm13
    vmulss  xmm0, xmm3, xmm14
    vmulss  xmm1, xmm0, xmm15
    vmulss  xmm2, xmm1, [rsp+148h+arg_18]
    vmulss  xmm3, xmm2, xmm9
    vmulss  xmm10, xmm3, xmm12
  }
  if ( !DVARBOOL_ai_debugAccuracy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAccuracy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( !v38->current.enabled )
    goto LABEL_37;
  v48 = DVARINT_ai_debugEntIndex;
  if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  _RDX = this->m_pAI;
  if ( v48->current.integer == _RDX->ent->s.number )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdx+430h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_sprintf_truncate<32>(debugAccuracyStrings, "%s: %1.3f", "m_pAI    ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovaps xmmword ptr cs:debugAccuracyColors, xmm0
      vmovss  xmm3, dword ptr [rbx+64h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[1], "%s: %1.3f", "Target  ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm8, xmm8
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+10h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[2], "%s: %1.3f", "Script  ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm13, xmm13
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+20h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[3], "%s: %1.3f", "Weapon  ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm14, xmm14
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+30h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[4], "%s: %1.3f", "Stance  ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm15, xmm15
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+40h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[5], "%s: %1.3f", "Movement", *(double *)&_XMM3);
    __asm
    {
      vmovss  xmm3, [rsp+148h+arg_18]
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+50h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[6], "%s: %1.3f", "Sight   ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm9, xmm9
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+60h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[7], "%s: %1.3f", "Attacker", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm3, xmm12, xmm12
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+70h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[8], "%s: %1.3f", "Mount   ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovaps xmm3, xmm11
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+80h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[9], "%s: %1.3f", "Pain   ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vcvtss2sd xmm8, xmm10, xmm10
      vmovaps xmm3, xmm8
      vmovq   r9, xmm3
      vmovaps xmmword ptr cs:debugAccuracyColors+90h, xmm0
    }
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[10], "%s: %1.3f", "TOTAL   ", *(double *)&_XMM3);
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
      vmovaps xmmword ptr cs:debugAccuracyColors+0A0h, xmm0
    }
  }
  else
  {
LABEL_37:
    v89 = 0;
    v90 = debugAccuracyStrings;
    v86 = 1;
    _RBX = &debugAccuracyColors[0].v[2];
    do
    {
      if ( !v86 )
      {
        LODWORD(v111) = 11;
        LODWORD(v109) = v89;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( msgIndex ) < (unsigned)( 11 )", "msgIndex doesn't index AI_DEBUG_ACCURACY_MSG_COUNT\n\t%i not in [0, %i)", v109, v111) )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
        vmovups xmmword ptr [rbx-8], xmm0
      }
      *(_BYTE *)v90 = 0;
      _RBX += 4;
      ++v89;
      ++v90;
      v86 = (unsigned int)v89 < 0xB;
    }
    while ( v89 < 11 );
    __asm { vcvtss2sd xmm8, xmm10, xmm10 }
  }
  __asm
  {
    vcomiss xmm10, xmm7
    vmovaps xmm15, [rsp+148h+var_B8]
    vmovaps xmm14, [rsp+148h+var_A8]
    vmovaps xmm13, [rsp+148h+var_98]
    vmovaps xmm12, [rsp+148h+var_88]
    vmovaps xmm11, [rsp+148h+var_78]
    vmovaps xmm9, [rsp+148h+var_58]
  }
  if ( v86 )
  {
    __asm { vmovsd  [rsp+148h+var_120], xmm8 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 560, ASSERT_TYPE_ASSERT, "( ( accuracy >= 0.0f ) )", "( accuracy ) = %g", v110) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm7; min
    vmovaps xmm0, xmm10; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = this->m_pAI;
  _R11 = &v119;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovss  dword ptr [rax+440h], xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
AICommonInterface::GetMaxMountCover
==============
*/
float AICommonInterface::GetMaxMountCover(AICommonInterface *this, const playerState_s *const enemyPs)
{
  AICommonInterface_vtbl *v13; 
  GHandler *Handler; 
  bool v15; 
  bool v16; 
  unsigned int v24; 
  bool v25; 
  vec3_t outNormal; 
  int v66[4]; 
  vec3_t outMountPoint; 
  tmat33_t<vec3_t> axis; 
  vec3_t outBelow; 
  vec3_t outParallel; 
  MountSurfaceProperties mount; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
  }
  _RBX = enemyPs;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 185, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 186, ASSERT_TYPE_ASSERT, "(enemyPs)", (const char *)&queryFormat, "enemyPs") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm7, dword ptr [rbx+4C0h]
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 187, ASSERT_TYPE_ASSERT, "(0.0f < enemyPs->mountState.mountFraction)", (const char *)&queryFormat, "0.0f < enemyPs->mountState.mountFraction") )
    __debugbreak();
  v13 = this->__vftable;
  __asm
  {
    vmovaps [rsp+178h+var_68], xmm10
    vmovaps [rsp+178h+var_78], xmm11
    vmovaps [rsp+178h+var_88], xmm12
  }
  v13->GetEyePosition(this, (vec3_t *)v66);
  Handler = GHandler::getHandler();
  MountSurfaceProperties::Initialize(&mount, Handler, &_RBX->mountState.surface);
  BG_ContextMount_CalcMountPoint(Handler, &mount, &outMountPoint);
  if ( _RBX->mountState.surface.type == MOUNT_TYPE_TOP )
  {
    BG_ContextMount_CalcMountVectors(Handler, &mount, &outNormal, &outParallel, &outBelow);
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+178h+outNormal]
      vmovss  xmm1, dword ptr [rsp+178h+outNormal+4]
      vxorps  xmm10, xmm0, xmm2
      vmovss  xmm0, dword ptr [rsp+178h+outNormal+8]
      vxorps  xmm12, xmm0, xmm2
      vxorps  xmm11, xmm1, xmm2
    }
  }
  else
  {
    AnglesToAxis(&_RBX->viewangles, &axis);
    v24 = _RBX->mountState.surface.type - 2;
    v15 = _RBX->mountState.surface.type == MOUNT_TYPE_LEFT;
    v16 = v24 == 1;
    if ( v24 > 1 )
    {
      v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 214, ASSERT_TYPE_ASSERT, "(enemyPs->mountState.surface.type == MOUNT_TYPE_LEFT || enemyPs->mountState.surface.type == MOUNT_TYPE_RIGHT)", (const char *)&queryFormat, "enemyPs->mountState.surface.type == MOUNT_TYPE_LEFT || enemyPs->mountState.surface.type == MOUNT_TYPE_RIGHT");
      v15 = 0;
      v16 = !v25;
      if ( v25 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm10, dword ptr [rsp+178h+axis]
      vmovss  xmm11, dword ptr [rsp+178h+axis+4]
      vmovss  xmm12, dword ptr [rsp+178h+axis+8]
    }
  }
  __asm
  {
    vmovss  xmm1, [rsp+178h+var_138]
    vsubss  xmm5, xmm1, dword ptr [rsp+178h+outMountPoint]
    vmovss  xmm2, [rsp+178h+var_134]
    vsubss  xmm8, xmm2, dword ptr [rsp+178h+outMountPoint+4]
    vmovss  xmm1, [rsp+178h+var_130]
    vsubss  xmm9, xmm1, dword ptr [rsp+178h+outMountPoint+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm3, xmm8, xmm8
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm0, xmm4, xmm1
    vcvtss2sd xmm2, xmm0, xmm0
    vcomisd xmm2, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v15 || v16 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vsqrtss xmm1, xmm0, xmm0
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmovaps [rsp+178h+var_28], xmm6
      vdivss  xmm6, xmm2, xmm0
      vmulss  xmm1, xmm5, xmm6
      vmulss  xmm3, xmm1, xmm10
      vmulss  xmm0, xmm8, xmm6
      vmulss  xmm4, xmm0, xmm11
      vmulss  xmm0, xmm9, xmm6
      vmulss  xmm1, xmm0, xmm12
      vaddss  xmm5, xmm4, xmm3
      vaddss  xmm3, xmm5, xmm1
      vmulss  xmm0, xmm3, cs:__real@40000000; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, [rsp+178h+var_28] }
  }
  __asm
  {
    vmovaps xmm12, [rsp+178h+var_88]
    vmovaps xmm11, [rsp+178h+var_78]
    vmovaps xmm10, [rsp+178h+var_68]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm9, xmmword ptr [r11-58h]
  }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::GetPlayerMountAccuracy
==============
*/
float AIScriptedInterface::GetPlayerMountAccuracy(AIScriptedInterface *this, const sentient_s *const enemy)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 410, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 411, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 412, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RDI = enemy->ent->client;
  __asm
  {
    vcomiss xmm0, dword ptr [rdi+4C0h]
    vmovss  xmm0, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
}

/*
==============
AICommonInterface::GetPlayerMovementAccuracy
==============
*/
float AICommonInterface::GetPlayerMovementAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  const dvar_t *v37; 
  char v58; 
  bool v59; 
  double v104; 
  double v105; 
  double v106; 
  vec3_t v107; 
  vec3_t vOriginOut; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm11
  }
  v59 = this->m_pAI == NULL;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm13
    vmovaps xmmword ptr [r11-0A8h], xmm14
    vmovaps [rsp+128h+var_B8], xmm15
  }
  if ( v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 280, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 281, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 282, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 283, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  Sentient_GetOrigin(this->m_pAI->sentient, &vOriginOut);
  Sentient_GetOrigin(enemy, &v107);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+var_E8]
    vsubss  xmm4, xmm0, dword ptr [rsp+128h+vOriginOut]
    vmovss  xmm1, dword ptr [rsp+128h+var_E8+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+128h+vOriginOut+4]
    vmovss  xmm0, dword ptr [rsp+128h+var_E8+8]
    vsubss  xmm6, xmm0, dword ptr [rsp+128h+vOriginOut+8]
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm7, cs:__real@80000000
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, xmm7
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm1, xmm11, xmm0
    vmulss  xmm13, xmm4, xmm1
    vmulss  xmm14, xmm5, xmm1
    vmulss  xmm15, xmm6, xmm1
  }
  if ( this->Is3D(this) )
  {
    _RDI = DVARFLT_player_zeroGravSpeed;
    __asm
    {
      vmovaps [rsp+128h+var_48], xmm8
      vmovaps [rsp+128h+var_68], xmm10
      vmovaps [rsp+128h+var_88], xmm12
    }
    if ( !DVARFLT_player_zeroGravSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm12, dword ptr [rdi+28h] }
    v37 = DVARFLT_player_zeroGravBoostScalar;
    if ( !DVARFLT_player_zeroGravBoostScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravBoostScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    __asm { vxorps  xmm9, xmm9, xmm9 }
    _RCX = enemy->ent->client;
    __asm
    {
      vmovss  xmm4, dword ptr [rcx+3Ch]
      vmovss  xmm5, dword ptr [rcx+44h]
      vmovss  xmm10, dword ptr [rcx+40h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm10, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm6, xmm11, xmm0
      vmulss  xmm0, xmm12, dword ptr [rdi+28h]
      vdivss  xmm0, xmm3, xmm0; val
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
      vmulss  xmm7, xmm4, xmm6
      vmulss  xmm8, xmm5, xmm6
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm12, [rsp+128h+var_88]
      vmulss  xmm1, xmm10, xmm6
      vmovaps xmm10, [rsp+128h+var_68]
      vmulss  xmm3, xmm1, xmm14
      vmulss  xmm1, xmm15, xmm8
      vmovaps xmm8, [rsp+128h+var_48]
      vmulss  xmm2, xmm13, xmm7
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm5, xmm4, xmm1
      vandps  xmm5, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vsubss  xmm1, xmm11, xmm5
      vmulss  xmm0, xmm0, xmm1
      vsubss  xmm4, xmm11, xmm0
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vmulss  xmm1, xmm14, dword ptr [rcx+3Ch]
      vmulss  xmm0, xmm13, dword ptr [rcx+40h]
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm15, dword ptr [rcx+44h]
      vaddss  xmm0, xmm2, xmm1
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
      vmovss  xmm2, cs:__real@437a0000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3b83126f
      vsubss  xmm4, xmm11, xmm1
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f333333
    vmovaps xmm15, [rsp+128h+var_B8]
    vmovaps xmm14, [rsp+128h+var_A8]
    vmovaps xmm13, [rsp+128h+var_98]
    vmovaps xmm7, [rsp+128h+var_38]
  }
  _EAX = 2047;
  __asm { vmovd   xmm1, eax }
  _EAX = enemy->ent->client->ps.groundEntityNum;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3e99999a
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmaxss  xmm6, xmm0, xmm4
    vcomiss xmm6, xmm9
    vmovaps xmm9, [rsp+128h+var_58]
  }
  if ( v58 )
    goto LABEL_24;
  __asm { vcomiss xmm6, xmm11 }
  if ( !(v58 | v59) )
  {
LABEL_24:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+128h+var_F0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+128h+var_F8], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+128h+var_100], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 331, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v104, v105, v106) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+128h+var_28]
    vmovaps xmm11, [rsp+128h+var_78]
  }
  return *(float *)&_XMM0;
}

/*
==============
AICommonInterface::GetPlayerSightAccuracy
==============
*/
float AICommonInterface::GetPlayerSightAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  int CanSeeEntityPoint; 
  double v78; 
  double v79; 
  double v80; 
  vec3_t vPoint; 
  vec3_t vEyePosOut; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "AI_GetPlayerSightAccuracy");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 350, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 351, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 352, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 353, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  Sentient_GetEyePosition(enemy, &vEyePosOut);
  _RAX = enemy->ent->client;
  __asm
  {
    vmovss  xmm9, dword ptr [rax+30h]
    vmovss  xmm10, dword ptr [rax+34h]
    vmovss  xmm11, dword ptr [rax+38h]
    vmovss  xmm0, dword ptr [rsp+128h+vEyePosOut]
    vsubss  xmm12, xmm0, xmm9
    vmovss  xmm1, dword ptr [rsp+128h+vEyePosOut+4]
    vsubss  xmm13, xmm1, xmm10
    vmovss  xmm0, dword ptr [rsp+128h+vEyePosOut+8]
    vsubss  xmm14, xmm0, xmm11
    vxorps  xmm15, xmm15, xmm15
  }
  _EAX = AICommonInterface::CanSeeEntityPoint(this, &vEyePosOut, enemy->ent);
  _ECX = 0;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@41200000
    vblendvps xmm0, xmm1, xmm15, xmm2
    vmovss  [rsp+128h+var_E8], xmm0
    vmovss  xmm3, cs:__real@3f400000
    vmulss  xmm0, xmm12, xmm3
    vaddss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rsp+128h+vPoint], xmm1
    vmulss  xmm2, xmm13, xmm3
    vaddss  xmm0, xmm2, xmm10
    vmovss  dword ptr [rsp+128h+vPoint+4], xmm0
    vmulss  xmm1, xmm14, xmm3
    vaddss  xmm2, xmm1, xmm11
    vmovss  dword ptr [rsp+128h+vPoint+8], xmm2
    vmovss  xmm8, cs:__real@41f00000
  }
  if ( AICommonInterface::CanSeeEntityPoint(this, &vPoint, enemy->ent) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+128h+var_E8]
      vaddss  xmm6, xmm0, xmm8
    }
  }
  else
  {
    __asm { vmovss  xmm6, [rsp+128h+var_E8] }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f000000
    vmulss  xmm0, xmm12, xmm7
    vaddss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rsp+128h+vPoint], xmm1
    vmulss  xmm2, xmm13, xmm7
    vaddss  xmm0, xmm2, xmm10
    vmovss  dword ptr [rsp+128h+vPoint+4], xmm0
    vmulss  xmm1, xmm14, xmm7
    vaddss  xmm2, xmm1, xmm11
    vmovss  dword ptr [rsp+128h+vPoint+8], xmm2
  }
  if ( AICommonInterface::CanSeeEntityPoint(this, &vPoint, enemy->ent) )
    __asm { vaddss  xmm6, xmm6, xmm8 }
  __asm
  {
    vmovss  xmm3, cs:__real@3e800000
    vmulss  xmm0, xmm12, xmm3
    vaddss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rsp+128h+vPoint], xmm1
    vmulss  xmm2, xmm13, xmm3
    vaddss  xmm0, xmm2, xmm10
    vmovss  dword ptr [rsp+128h+vPoint+4], xmm0
    vmulss  xmm1, xmm14, xmm3
    vaddss  xmm2, xmm1, xmm11
    vmovss  dword ptr [rsp+128h+vPoint+8], xmm2
  }
  CanSeeEntityPoint = AICommonInterface::CanSeeEntityPoint(this, &vPoint, enemy->ent);
  if ( CanSeeEntityPoint )
    __asm { vaddss  xmm6, xmm6, xmm8 }
  __asm
  {
    vmulss  xmm6, xmm6, cs:__real@3c23d70a
    vmovss  xmm8, cs:__real@3f800000
    vcomiss xmm6, xmm15
    vcomiss xmm6, xmm8
  }
  if ( CanSeeEntityPoint )
  {
    __asm
    {
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+128h+var_F0], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+128h+var_F8], xmm1
      vmovsd  [rsp+128h+var_100], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 380, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v78, v79, v80) )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm0, xmm6, xmm8
    vmulss  xmm6, xmm0, xmm7
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v84;
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
  return *(float *)&_XMM0;
}

/*
==============
AICommonInterface::GetPlayerStanceAccuracy
==============
*/
float AICommonInterface::GetPlayerStanceAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  bool v9; 
  bool v11; 
  bool v25; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  v11 = this->m_pAI == NULL;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 241, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 242, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 243, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 244, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&enemy->ent->client->ps.pm_flags, ACTIVE, 0);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v11 = !v9;
  if ( v9 )
  {
    __asm { vmovss  xmm6, cs:__real@3f000000 }
  }
  else
  {
    _EAX = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&enemy->ent->client->ps.pm_flags, ACTIVE, 1u);
    v11 = 1;
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f400000
      vblendvps xmm6, xmm1, xmm7, xmm2
    }
  }
  __asm
  {
    vmovsd  xmm9, cs:__real@3ff0000000000000
    vxorps  xmm8, xmm8, xmm8
    vxorpd  xmm10, xmm10, xmm10
  }
  _RCX = enemy->ent->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4C0h]
    vcomiss xmm0, xmm8
  }
  if ( !v11 )
  {
    __asm
    {
      vcomiss xmm0, xmm7
      vmovsd  [rsp+98h+var_60], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+98h+var_68], xmm10
      vmovsd  [rsp+98h+var_70], xmm0
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 257, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( enemy->ent->client->ps.mountState.mountFraction ) && ( enemy->ent->client->ps.mountState.mountFraction ) <= ( 1.0f )", "enemy->ent->client->ps.mountState.mountFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v39, v41, v43);
    v11 = !v25;
    if ( v25 )
      __debugbreak();
    _RCX = enemy->ent->client;
    __asm
    {
      vmovss  xmm3, dword ptr [rcx+4C0h]
      vsubss  xmm1, xmm7, xmm3
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm6, xmm2, xmm3
    }
  }
  __asm
  {
    vcomiss xmm6, xmm8
    vcomiss xmm6, xmm7
  }
  if ( !v11 )
  {
    __asm
    {
      vmovsd  [rsp+98h+var_60], xmm9
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+98h+var_68], xmm10
      vmovsd  [rsp+98h+var_70], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 262, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v40, v42, v44) )
      __debugbreak();
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
  return *(float *)&_XMM0;
}

/*
==============
AICommonInterface::GetWeaponAccuracy
==============
*/
float AICommonInterface::GetWeaponAccuracy(AICommonInterface *this, const sentient_s *enemy, const Weapon *r_weapon, WeapAccuracyType accuracyType)
{
  const dvar_t *v21; 
  char v23; 
  char v24; 
  __int64 v31; 
  double v32; 
  double v33; 
  double v34; 
  vec3_t vOriginOut; 
  vec3_t v36; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 160, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 161, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 162, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( (unsigned int)accuracyType >= WEAP_ACCURACY_COUNT )
  {
    LODWORD(v31) = accuracyType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( accuracyType ) < (unsigned)( WEAP_ACCURACY_COUNT )", "accuracyType doesn't index WEAP_ACCURACY_COUNT\n\t%i not in [0, %i)", v31, 2) )
      __debugbreak();
  }
  Sentient_GetOrigin(this->m_pAI->sentient, &vOriginOut);
  Sentient_GetOrigin(enemy, &v36);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+vOriginOut]
    vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+var_58]
    vmovss  xmm1, dword ptr [rsp+0A8h+vOriginOut+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+var_58+4]
    vmovss  xmm0, dword ptr [rsp+0A8h+vOriginOut+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+var_58+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( accuracyType == WEAP_ACCURACY_AI_VS_PLAYER )
  {
    v21 = DVARFLT_ai_accuracyDistScale;
    if ( !DVARFLT_ai_accuracyDistScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracyDistScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
  }
  __asm { vmovaps xmm1, xmm6; dist }
  *(double *)&_XMM0 = AICommonInterface::GetAccuracyFraction(this->m_pAI, *(float *)&_XMM1, r_weapon, accuracyType);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v23 )
    goto LABEL_20;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !(v23 | v24) )
  {
LABEL_20:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0A8h+var_70], xmm0
      vmovsd  [rsp+0A8h+var_78], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_80], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 176, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v32, v33, v34) )
      __debugbreak();
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::HitSentient
==============
*/

void __fastcall AIScriptedInterface::HitSentient(AIScriptedInterface *this, BgWeaponParms *wp, sentient_s *enemy, double accuracy)
{
  int v53; 
  AIWrapper v134; 
  vec3_t vEyePosOut; 
  vec3_t up; 
  vec3_t entAnglesOut; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
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
    vmovaps xmm10, xmm3
  }
  _R14 = wp;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 734, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 735, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 736, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  Sentient_GetEyePosition(enemy, &vEyePosOut);
  *(double *)&_XMM0 = Sentient_GetHeadHeight(enemy);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+70h+vEyePosOut]
    vsubss  xmm5, xmm1, dword ptr [r14+24h]
    vmovss  xmm2, dword ptr [rbp+70h+vEyePosOut+4]
    vsubss  xmm7, xmm2, dword ptr [r14+28h]
    vmovss  xmm1, dword ptr [rbp+70h+vEyePosOut+8]
    vsubss  xmm6, xmm1, dword ptr [r14+2Ch]
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm3, xmm7, xmm7
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm4, xmm1
    vsqrtss xmm2, xmm3, xmm3
    vmovaps xmm9, xmm0
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm13, xmm5, xmm1
    vmulss  xmm14, xmm7, xmm1
    vmulss  xmm12, xmm6, xmm1
    vxorps  xmm6, xmm6, xmm6
  }
  if ( AIScriptedInterface::IsEntZeroG(enemy->ent) )
  {
    AIScriptedInterface::GetEntZeroGAngles(enemy->ent, &entAnglesOut);
    AngleVectors(&entAnglesOut, NULL, NULL, &up);
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+70h+up+4]
      vmovss  xmm7, dword ptr [rbp+70h+up+8]
      vmovss  xmm5, dword ptr [rbp+70h+up]
      vmulss  xmm0, xmm4, xmm12
      vmulss  xmm1, xmm7, xmm14
      vsubss  xmm11, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm12
      vmulss  xmm0, xmm7, xmm13
      vsubss  xmm12, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm14
      vmulss  xmm2, xmm4, xmm13
      vsubss  xmm13, xmm2, xmm1
    }
    v53 = 1;
  }
  else
  {
    __asm
    {
      vxorps  xmm12, xmm13, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm13, xmm13, xmm13
      vmovss  dword ptr [rbp+70h+up], xmm6
      vmovss  dword ptr [rbp+70h+up+4], xmm6
      vmovss  dword ptr [rbp+70h+up+8], xmm8
      vmovaps xmm11, xmm14
    }
    v53 = 0;
    __asm
    {
      vxorps  xmm5, xmm5, xmm5
      vxorps  xmm4, xmm4, xmm4
      vmovaps xmm7, xmm8
    }
  }
  __asm { vmovss  xmm14, cs:__real@80000000 }
  _RAX = enemy->ent;
  __asm
  {
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
  }
  _RDI = enemy->ent->client;
  __asm
  {
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm11, xmm11, xmm1
    vmulss  xmm12, xmm12, xmm1
    vmulss  xmm13, xmm13, xmm1
  }
  if ( _RDI )
  {
    if ( v53 )
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm1, xmm0, dword ptr [rbp+70h+vEyePosOut+4]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmulss  xmm0, xmm5, xmm9
        vaddss  xmm1, xmm0, dword ptr [rbp+70h+vEyePosOut]
        vmulss  xmm4, xmm2, xmm4
        vsubss  xmm2, xmm1, dword ptr [rax+130h]
        vmulss  xmm3, xmm2, xmm5
        vmulss  xmm0, xmm7, xmm9
        vaddss  xmm1, xmm0, dword ptr [rbp+70h+vEyePosOut+8]
        vsubss  xmm2, xmm1, dword ptr [rax+138h]
        vaddss  xmm5, xmm4, xmm3
        vmulss  xmm3, xmm2, xmm7
        vaddss  xmm7, xmm5, xmm3
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm10, dword ptr [rdi+4C0h]
        vcomiss xmm10, xmm6
        vaddss  xmm1, xmm9, dword ptr [rbp+70h+vEyePosOut+8]
        vsubss  xmm7, xmm1, dword ptr [rax+138h]
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rax+10Ch]
      vmulss  xmm1, xmm0, cs:__real@3f400000
      vxorps  xmm2, xmm7, cs:__xmm@80000000800000008000000080000000
      vminss  xmm10, xmm1, cs:__real@41000000
      vmaxss  xmm7, xmm2, cs:__real@c2300000
    }
  }
  else
  {
    __asm
    {
      vcomiss xmm10, xmm6
      vcomiss xmm10, xmm8
      vsubss  xmm6, xmm8, xmm10
      vmulss  xmm10, xmm6, dword ptr [rdx+10Ch]
    }
    AIWrapper::AIWrapper(&v134, enemy->ent);
    if ( v134.m_pAI )
    {
      __asm { vmovss  xmm0, cs:__real@c2300000 }
    }
    else
    {
      _RAX = enemy->ent;
      __asm { vmovss  xmm0, dword ptr [rax+114h] }
    }
    __asm
    {
      vmulss  xmm7, xmm0, xmm6
      vmulss  xmm9, xmm9, xmm6
    }
  }
  G_crandom();
  __asm { vmulss  xmm6, xmm10, xmm0 }
  *(double *)&_XMM0 = G_random();
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm4, xmm1, xmm9
    vmulss  xmm2, xmm4, dword ptr [rbp+70h+up]
    vmulss  xmm0, xmm11, xmm6
    vaddss  xmm3, xmm0, dword ptr [rbp+70h+vEyePosOut]
    vaddss  xmm0, xmm3, xmm2
    vsubss  xmm7, xmm0, dword ptr [r14+24h]
    vmulss  xmm2, xmm4, dword ptr [rbp+70h+up+4]
    vmovss  dword ptr [r14], xmm7
    vmulss  xmm0, xmm12, xmm6
    vaddss  xmm3, xmm0, dword ptr [rbp+70h+vEyePosOut+4]
    vaddss  xmm0, xmm3, xmm2
    vsubss  xmm5, xmm0, dword ptr [r14+28h]
    vmulss  xmm2, xmm4, dword ptr [rbp+70h+up+8]
    vmulss  xmm0, xmm13, xmm6
    vaddss  xmm3, xmm0, dword ptr [rbp+70h+vEyePosOut+8]
    vaddss  xmm0, xmm3, xmm2
    vmovss  dword ptr [r14+4], xmm5
    vsubss  xmm4, xmm0, dword ptr [r14+2Ch]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm2, xmm2, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, xmm14
    vblendvps xmm0, xmm1, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [r14], xmm0
    vmulss  xmm0, xmm2, xmm4
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [r14+8], xmm0
    vmovss  dword ptr [r14+4], xmm1
  }
  _R11 = &v138;
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
  }
}

/*
==============
AIScriptedInterface::HitTarget
==============
*/
void AIScriptedInterface::HitTarget(const BgWeaponParms *wp, const vec3_t *target, vec3_t *outForward)
{
  vec3_t v0; 
  vec3_t cross; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0F8h+var_88], xmm12
    vmovaps [rsp+0F8h+var_98], xmm13
    vmovaps [rsp+0F8h+var_A8], xmm14
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm6, xmm0, dword ptr [rcx+24h]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm5, xmm1, dword ptr [rcx+28h]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+2Ch]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+0F8h+v0], xmm0
  }
  _RDI = target;
  _RBP = outForward;
  __asm { vmulss  xmm0, xmm4, xmm2 }
  _RSI = wp;
  __asm
  {
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0F8h+v0+8], xmm0
    vmovss  dword ptr [rsp+0F8h+v0+4], xmm1
  }
  Vec3Cross(&v0, &wp->up, &cross);
  __asm
  {
    vmovss  xmm11, dword ptr [rsp+0F8h+cross]
    vmovss  xmm13, dword ptr [rsp+0F8h+cross+4]
    vmovss  xmm14, dword ptr [rsp+0F8h+cross+8]
    vmulss  xmm1, xmm11, xmm11
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm14
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm12, xmm7, xmm0
  }
  *(double *)&_XMM0 = G_crandom();
  __asm
  {
    vmulss  xmm10, xmm0, cs:__real@41000000
    vmovss  xmm7, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rdi+4]
    vmovss  xmm9, dword ptr [rdi+8]
  }
  *(double *)&_XMM0 = G_crandom();
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@41000000
    vmovss  xmm4, dword ptr [rsi+1Ch]
    vmovss  xmm5, dword ptr [rsi+20h]
    vmulss  xmm0, xmm11, xmm12
    vmulss  xmm1, xmm0, xmm10
    vmulss  xmm0, xmm6, dword ptr [rsi+18h]
    vaddss  xmm2, xmm1, xmm7
    vaddss  xmm1, xmm2, xmm0
    vsubss  xmm11, xmm1, dword ptr [rsi+24h]
    vmulss  xmm2, xmm6, xmm4
    vmulss  xmm0, xmm13, xmm12
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm3, xmm1, xmm8
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm6, xmm5
    vmovss  dword ptr [rbp+0], xmm11
    vsubss  xmm7, xmm0, dword ptr [rsi+28h]
    vmulss  xmm0, xmm14, xmm12
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm3, xmm1, xmm9
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm11, xmm11
    vmovss  dword ptr [rbp+4], xmm7
    vsubss  xmm5, xmm0, dword ptr [rsi+2Ch]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm4, xmm7, xmm7
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm2, xmm2, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm0, xmm1, xmm2, xmm0
    vdivss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm11, xmm2
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm7, xmm2
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+4], xmm1
    vmovss  dword ptr [rbp+8], xmm0
  }
  _R11 = &v100;
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
    vmovaps xmm14, [rsp+0F8h+var_A8]
  }
}

/*
==============
AIScriptedInterface::HitTargetSentient
==============
*/

void __fastcall AIScriptedInterface::HitTargetSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, double accuracy)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  this->m_pAI->shoot.missCount = 0;
  ++this->m_pAI->shoot.hitCount;
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 866, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 867, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; accuracy
    vmovaps xmm6, [rsp+48h+var_18]
  }
  AIScriptedInterface::HitSentient(this, wp, pTargetSentient, *(float *)&_XMM3);
}

/*
==============
AIScriptedInterface::IsEntZeroG
==============
*/
bool AIScriptedInterface::IsEntZeroG(const gentity_s *ent)
{
  gclient_s *client; 
  sentient_s *sentient; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 674, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( client && BG_IsPlayerZeroG(&client->ps) )
    return 1;
  sentient = ent->sentient;
  if ( !sentient )
    return 0;
  p_ent = (const gentity_s **)&sentient->ai->ent;
  if ( !p_ent )
    return 0;
  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v7.m_botInterface);
  v7.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v7.m_botAgentInterface);
  v7.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v7.m_pAI = NULL;
  AICommonWrapper::Setup(&v7, *p_ent);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 682, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  return m_pAI->Is3D(m_pAI);
}

/*
==============
AIScriptedInterface::MissSentient
==============
*/

__int64 __fastcall AIScriptedInterface::MissSentient(BgWeaponParms *wp, sentient_s *enemy, double accuracy)
{
  gclient_s *client; 
  const WeaponDef *weapDef; 
  __int64 result; 
  vec3_t vEyePosOut; 
  vec3_t up; 
  vec3_t entAnglesOut; 
  char v167; 
  void *retaddr; 

  _RAX = &retaddr;
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
  _RDI = wp;
  __asm { vmovaps xmm9, xmm2 }
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 899, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 900, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  Sentient_GetEyePosition(enemy, &vEyePosOut);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+vEyePosOut]
    vsubss  xmm4, xmm0, dword ptr [rdi+24h]
    vmovss  xmm1, dword ptr [rsp+150h+vEyePosOut+4]
    vsubss  xmm5, xmm1, dword ptr [rdi+28h]
    vmovss  xmm0, dword ptr [rsp+150h+vEyePosOut+8]
    vsubss  xmm6, xmm0, dword ptr [rdi+2Ch]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm11, cs:__real@80000000
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, xmm11
    vblendvps xmm0, xmm10, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm12, xmm4, xmm1
    vmulss  xmm13, xmm5, xmm1
    vmulss  xmm14, xmm6, xmm1
    vxorps  xmm8, xmm8, xmm8
  }
  if ( AIScriptedInterface::IsEntZeroG(enemy->ent) )
  {
    AIScriptedInterface::GetEntZeroGAngles(enemy->ent, &entAnglesOut);
    AngleVectors(&entAnglesOut, NULL, NULL, &up);
    __asm
    {
      vmulss  xmm1, xmm13, dword ptr [rsp+150h+up+8]
      vmulss  xmm0, xmm14, dword ptr [rsp+150h+up+4]
      vmulss  xmm2, xmm12, dword ptr [rsp+150h+up+4]
      vsubss  xmm5, xmm1, xmm0
      vmulss  xmm1, xmm14, dword ptr [rsp+150h+up]
      vmulss  xmm0, xmm12, dword ptr [rsp+150h+up+8]
      vsubss  xmm6, xmm1, xmm0
      vmulss  xmm1, xmm13, dword ptr [rsp+150h+up]
      vsubss  xmm4, xmm2, xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm12, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rsp+150h+up], xmm8
      vmovss  dword ptr [rsp+150h+up+4], xmm8
      vmovss  dword ptr [rsp+150h+up+8], xmm7
      vmovaps xmm5, xmm13
      vxorps  xmm4, xmm4, xmm4
    }
  }
  __asm
  {
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm1
    vmovss  xmm4, dword ptr [rdi+34h]
    vmulss  xmm11, xmm6, xmm1
    vmovss  xmm6, dword ptr [rdi+38h]
    vmulss  xmm15, xmm5, xmm1
    vmovss  xmm5, dword ptr [rdi+30h]
    vmulss  xmm1, xmm12, xmm5
    vmovss  [rsp+150h+var_10C], xmm0
    vmulss  xmm0, xmm4, xmm13
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm6
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@3f7c1c61
    vmovss  [rsp+150h+var_108], xmm11
  }
  G_random();
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vcmpltss xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@bf800000
    vblendvps xmm1, xmm0, xmm7, xmm2
    vmovss  [rsp+150h+var_110], xmm1
  }
  *(_QWORD *)entAnglesOut.v = 0i64;
  if ( !_RDI->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 936, ASSERT_TYPE_ASSERT, "(wp->weapDef)", (const char *)&queryFormat, "wp->weapDef") )
    __debugbreak();
  if ( BG_GetWeaponType(&_RDI->weapon, _RDI->isAlternate) == WEAPTYPE_BULLET && BG_WeaponBulletFire_ShouldSpread(*(const bitarray<64> *)entAnglesOut.v, &_RDI->weapon, _RDI->isAlternate) )
  {
    *(double *)&_XMM0 = BG_ADSSpread(&_RDI->weapon, _RDI->isAlternate, 0, 0);
    __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm2, xmm0, xmm10
      vsubss  xmm1, xmm7, xmm9
      vmulss  xmm8, xmm2, xmm1
    }
  }
  if ( !_RDI->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 948, ASSERT_TYPE_ASSERT, "(wp && wp->weapDef)", (const char *)&queryFormat, "wp && wp->weapDef") )
    __debugbreak();
  client = enemy->ent->client;
  *(double *)&_XMM0 = G_random();
  if ( client )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@41000000
      vmovss  xmm11, [rsp+150h+var_110]
      vaddss  xmm0, xmm0, xmm7
      vmulss  xmm0, xmm0, xmm10
      vaddss  xmm1, xmm0, xmm8
      vmulss  xmm8, xmm1, xmm11
    }
    *(double *)&_XMM0 = Sentient_GetHeadHeight(enemy);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = G_random();
    weapDef = _RDI->weapDef;
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42300000
      vsubss  xmm9, xmm6, xmm1
    }
    if ( weapDef->weapClass == WEAPCLASS_SNIPER )
    {
      *(double *)&_XMM0 = G_crandom();
      __asm { vmulss  xmm9, xmm0, cs:__real@40400000 }
      weapDef = _RDI->weapDef;
      __asm { vmulss  xmm8, xmm11, xmm10 }
    }
    if ( weapDef->weapClass == WEAPCLASS_SPREAD )
    {
      _RBX = DCONST_DVARFLT_ai_shotgunMissMax;
      if ( !DCONST_DVARFLT_ai_shotgunMissMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_shotgunMissMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_ai_shotgunMissMin;
      if ( !DCONST_DVARFLT_ai_shotgunMissMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_shotgunMissMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]; min
        vmovaps xmm1, xmm6; max
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vminss  xmm1, xmm0, xmm7
        vmulss  xmm8, xmm8, xmm1
      }
    }
    __asm
    {
      vmovss  xmm4, cs:__real@41800000
      vmovss  xmm0, dword ptr [rsp+150h+vEyePosOut]
      vmulss  xmm1, xmm12, xmm4
      vsubss  xmm2, xmm0, xmm1
      vmovss  xmm0, dword ptr [rsp+150h+vEyePosOut+4]
      vmulss  xmm1, xmm15, xmm8
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm1, xmm8, [rsp+150h+var_108]
      vmulss  xmm3, xmm13, xmm4
      vsubss  xmm2, xmm0, xmm3
      vmovss  xmm0, dword ptr [rsp+150h+vEyePosOut+8]
      vmulss  xmm3, xmm14, xmm4
      vaddss  xmm10, xmm2, xmm1
      vsubss  xmm2, xmm0, xmm3
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@41200000
      vmovss  xmm10, [rsp+150h+var_110]
      vsubss  xmm6, xmm7, xmm9
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm0, xmm10, cs:__real@4212f0a3
      vaddss  xmm2, xmm1, xmm8
      vaddss  xmm8, xmm2, xmm0
    }
    *(double *)&_XMM0 = G_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@c1b00000
      vmulss  xmm9, xmm1, xmm6
    }
    if ( _RDI->weapDef->weapClass == WEAPCLASS_SNIPER )
    {
      __asm { vmulss  xmm8, xmm10, cs:__real@41000000 }
      *(double *)&_XMM0 = Sentient_GetHeadHeight(enemy);
      __asm { vmovaps xmm9, xmm0 }
    }
    __asm
    {
      vmovss  xmm5, cs:__real@41800000
      vmovss  xmm1, dword ptr [rsp+150h+vEyePosOut]
      vmovss  xmm0, dword ptr [rsp+150h+vEyePosOut+8]
      vmulss  xmm2, xmm12, xmm5
      vsubss  xmm3, xmm1, xmm2
      vmovss  xmm1, dword ptr [rsp+150h+vEyePosOut+4]
      vmulss  xmm2, xmm15, xmm8
      vaddss  xmm6, xmm3, xmm2
      vmulss  xmm2, xmm11, xmm8
      vmulss  xmm4, xmm13, xmm5
      vsubss  xmm3, xmm1, xmm4
      vmulss  xmm1, xmm14, xmm5
      vaddss  xmm10, xmm3, xmm2
      vsubss  xmm2, xmm0, xmm1
    }
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+150h+var_10C]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+150h+up]
    vaddss  xmm2, xmm1, xmm6
    vsubss  xmm6, xmm2, dword ptr [rdi+24h]
    vmulss  xmm1, xmm9, dword ptr [rsp+150h+up+4]
    vaddss  xmm2, xmm1, xmm10
    vmulss  xmm1, xmm9, dword ptr [rsp+150h+up+8]
    vmovss  dword ptr [rdi], xmm6
    vsubss  xmm5, xmm2, dword ptr [rdi+28h]
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm0, xmm6, xmm6
    vmovss  dword ptr [rdi+4], xmm5
    vsubss  xmm4, xmm2, dword ptr [rdi+2Ch]
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
  result = 0i64;
  _R11 = &v167;
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
  return result;
}

/*
==============
AIScriptedInterface::MissTarget
==============
*/
void AIScriptedInterface::MissTarget(const BgWeaponParms *wp, const vec3_t *target, vec3_t *outForward)
{
  vec3_t v0; 
  vec3_t cross; 
  char v117; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps [rsp+108h+var_98], xmm13
    vmovaps [rsp+108h+var_A8], xmm14
    vmovaps [rsp+108h+var_B8], xmm15
    vmovss  xmm2, cs:outerRadius
    vcmpeqss xmm1, xmm2, cs:__real@45d9c800
    vmovss  xmm0, cs:__real@4212f82a
    vmovss  xmm8, cs:__real@3f800000
    vblendvps xmm0, xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm5, xmm1, dword ptr [rcx+28h]
    vmovss  cs:outerRadius, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm6, xmm0, dword ptr [rcx+24h]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+2Ch]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm0, xmm5, xmm1
    vmovss  dword ptr [rsp+108h+v0+4], xmm0
  }
  _RDI = target;
  _RBP = outForward;
  __asm { vmulss  xmm0, xmm4, xmm1 }
  _RSI = wp;
  __asm
  {
    vmulss  xmm15, xmm6, xmm1
    vmovss  dword ptr [rsp+108h+v0+8], xmm0
    vmovss  dword ptr [rsp+108h+v0], xmm15
  }
  Vec3Cross(&v0, &wp->up, &cross);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+cross+4]
    vmovss  xmm12, dword ptr [rsp+108h+cross]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm12, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rsp+108h+cross+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm14, xmm8, xmm0
  }
  G_random();
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm6, dword ptr [rdi]
    vmovss  xmm7, dword ptr [rdi+4]
    vmovss  xmm10, dword ptr [rdi+8]
    vcmpltss xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@bf800000
    vblendvps xmm1, xmm0, xmm8, xmm2
    vmulss  xmm13, xmm1, cs:outerRadius
  }
  *(double *)&_XMM0 = G_crandom();
  __asm
  {
    vmulss  xmm11, xmm0, cs:__real@41400000
    vmovss  xmm8, cs:__real@41800000
    vmovss  xmm5, dword ptr [rsi+1Ch]
    vmovss  xmm9, dword ptr [rsi+20h]
    vmulss  xmm1, xmm12, xmm14
    vmulss  xmm2, xmm1, xmm13
    vmulss  xmm0, xmm15, xmm8
    vsubss  xmm3, xmm6, xmm0
    vmulss  xmm0, xmm11, dword ptr [rsi+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm1, xmm4, xmm0
    vsubss  xmm12, xmm1, dword ptr [rsi+24h]
    vmulss  xmm1, xmm14, dword ptr [rsp+108h+cross+4]
    vmulss  xmm0, xmm8, dword ptr [rsp+108h+v0+4]
    vsubss  xmm3, xmm7, xmm0
    vmulss  xmm2, xmm1, xmm13
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm11, xmm5
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm0, xmm8, dword ptr [rsp+108h+v0+8]
    vmovss  dword ptr [rbp+0], xmm12
    vsubss  xmm6, xmm1, dword ptr [rsi+28h]
    vmulss  xmm1, xmm14, dword ptr [rsp+108h+cross+8]
    vmovss  dword ptr [rbp+4], xmm6
    vsubss  xmm3, xmm10, xmm0
    vmulss  xmm2, xmm1, xmm13
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm11, xmm9
    vaddss  xmm1, xmm3, xmm0
    vsubss  xmm5, xmm1, dword ptr [rsi+2Ch]
    vmulss  xmm0, xmm12, xmm12
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm12, xmm2
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+4], xmm1
    vmovss  dword ptr [rbp+8], xmm0
  }
  _R11 = &v117;
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
    vmovaps xmm14, [rsp+108h+var_A8]
    vmovaps xmm15, [rsp+108h+var_B8]
  }
}

/*
==============
AIScriptedInterface::MissTargetSentient
==============
*/

int __fastcall AIScriptedInterface::MissTargetSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, double accuracy)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  ++this->m_pAI->shoot.missCount;
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1042, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1043, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6; accuracy
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return AIScriptedInterface::MissSentient(wp, pTargetSentient, *(float *)&_XMM2);
}

/*
==============
AIScriptedInterface::ShootSentient
==============
*/
_BOOL8 AIScriptedInterface::ShootSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracyMod, bool bDontChangeTargetPosOnHit, bool *bCleanMiss)
{
  char v12; 
  char v13; 
  _BOOL8 result; 
  int v17; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  *(double *)&_XMM0 = AIScriptedInterface::GetFinalAccuracy(this, pTargetSentient, wp, accuracyMod);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = G_random();
  __asm { vcomiss xmm6, xmm0 }
  if ( v12 | v13 )
  {
    ++this->m_pAI->shoot.missCount;
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1042, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1043, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm6; accuracy }
    v17 = AIScriptedInterface::MissSentient(wp, pTargetSentient, *(float *)&_XMM2);
    *bCleanMiss = v17 != 0;
    result = v17 != 0;
  }
  else
  {
    if ( !bDontChangeTargetPosOnHit )
    {
      this->m_pAI->shoot.missCount = 0;
      ++this->m_pAI->shoot.hitCount;
      if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 866, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
        __debugbreak();
      if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 867, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
        __debugbreak();
      __asm { vmovaps xmm3, xmm6; accuracy }
      AIScriptedInterface::HitSentient(this, wp, pTargetSentient, *(float *)&_XMM3);
    }
    result = 1i64;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

