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
void AI_DrawDebugAccuracy(vec3_t *pos, float scale, float rowHeight)
{
  char (*v3)[32]; 
  const vec4_t *v4; 
  const char *v5; 
  __int64 v7; 

  v3 = debugAccuracyStrings;
  v4 = debugAccuracyColors;
  v5 = debugAccuracyStrings[0];
  v7 = 11i64;
  do
  {
    if ( *(_BYTE *)v3 )
      G_Main_AddDebugString(pos, v4, scale, v5);
    v5 += 32;
    ++v4;
    ++v3;
    pos->v[2] = pos->v[2] - rowHeight;
    --v7;
  }
  while ( v7 );
}

/*
==============
AI_DrawSetAngleCalc
==============
*/
void AI_DrawSetAngleCalc(const vec3_t *entPos, const vec3_t *entAngles, const vec3_t *from, const vec3_t *angles, const vec3_t *postClamp)
{
  float v8; 
  double v9; 
  double v10; 
  vec3_t forward; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  char dest[64]; 

  AnglesToAxis(entAngles, &axis);
  G_DebugAxis(&axis, entPos, 30.0, 0, 1);
  AngleVectors(angles, &forward, NULL, NULL);
  end.v[0] = (float)((float)((float)((float)(axis.m[0].v[0] * forward.v[0]) + (float)(axis.m[1].v[0] * forward.v[1])) + (float)(forward.v[2] * axis.m[2].v[0])) * 3000.0) + from->v[0];
  end.v[1] = (float)((float)((float)((float)(axis.m[0].v[1] * forward.v[0]) + (float)(axis.m[1].v[1] * forward.v[1])) + (float)(forward.v[2] * axis.m[2].v[1])) * 3000.0) + from->v[1];
  end.v[2] = (float)((float)((float)((float)(axis.m[0].v[2] * forward.v[0]) + (float)(axis.m[1].v[2] * forward.v[1])) + (float)(forward.v[2] * axis.m[2].v[2])) * 3000.0) + from->v[2];
  G_DebugLine(from, &end, &colorPurple, 0);
  point.v[0] = (float)(10.0 * axis.m[1].v[0]) + from->v[0];
  v8 = angles->v[1];
  point.v[1] = (float)(10.0 * axis.m[1].v[1]) + from->v[1];
  point.v[2] = (float)(10.0 * axis.m[1].v[2]) + from->v[2];
  Com_sprintf<64>((char (*)[64])dest, "aim angles [%.2f, %.2f]", angles->v[0], v8);
  G_DebugString(&point, &colorGreen, 0.5, dest, 1);
  v9 = postClamp->v[1];
  v10 = postClamp->v[0];
  point.v[2] = point.v[2] + -10.0;
  Com_sprintf<64>((char (*)[64])dest, "post clamp [%.2f %.2f]", v10, v9);
  G_DebugString(&point, &colorGreen, 0.5, dest, 1);
}

/*
==============
AIScriptedInterface::FillWeaponParms
==============
*/
void AIScriptedInterface::FillWeaponParms(AIScriptedInterface *this, BgWeaponParms *wp)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v5; 
  ai_scripted_t *v6; 
  ai_scripted_t *v7; 
  ai_scripted_t *v8; 
  ai_scripted_t *v9; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 643, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 644, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( ((LODWORD(m_pAI->orientation.vLookForward.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(m_pAI->orientation.vLookForward.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(m_pAI->orientation.vLookForward.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 646, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pAI->orientation.vLookForward )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pAI->orientation.vLookForward )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookForward )[2] )") )
    __debugbreak();
  v5 = this->m_pAI;
  if ( ((LODWORD(v5->orientation.vLookRight.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v5->orientation.vLookRight.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v5->orientation.vLookRight.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 647, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pAI->orientation.vLookRight )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pAI->orientation.vLookRight )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookRight )[2] )") )
    __debugbreak();
  v6 = this->m_pAI;
  if ( ((LODWORD(v6->orientation.vLookUp.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v6->orientation.vLookUp.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v6->orientation.vLookUp.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 648, ASSERT_TYPE_SANITY, "( !IS_NAN( ( m_pAI->orientation.vLookUp )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( m_pAI->orientation.vLookUp )[0] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[1] ) && !IS_NAN( ( m_pAI->orientation.vLookUp )[2] )") )
    __debugbreak();
  v7 = this->m_pAI;
  wp->forward.v[0] = v7->orientation.vLookForward.v[0];
  wp->forward.v[1] = v7->orientation.vLookForward.v[1];
  wp->forward.v[2] = v7->orientation.vLookForward.v[2];
  v8 = this->m_pAI;
  wp->right.v[0] = v8->orientation.vLookRight.v[0];
  wp->right.v[1] = v8->orientation.vLookRight.v[1];
  wp->right.v[2] = v8->orientation.vLookRight.v[2];
  v9 = this->m_pAI;
  wp->up.v[0] = v9->orientation.vLookUp.v[0];
  wp->up.v[1] = v9->orientation.vLookUp.v[1];
  wp->up.v[2] = v9->orientation.vLookUp.v[2];
  if ( !AIScriptedInterface::GetMuzzleInfo(this, &wp->muzzleTrace, &wp->gunForward) )
  {
    this->GetEyePosition(this, &wp->muzzleTrace);
    wp->gunForward.v[0] = wp->forward.v[0];
    wp->gunForward.v[1] = wp->forward.v[1];
    wp->gunForward.v[2] = wp->forward.v[2];
  }
  if ( ((LODWORD(wp->muzzleTrace.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(wp->muzzleTrace.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(wp->muzzleTrace.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 664, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->muzzleTrace )[0] ) && !IS_NAN( ( wp->muzzleTrace )[1] ) && !IS_NAN( ( wp->muzzleTrace )[2] )") )
    __debugbreak();
  if ( ((LODWORD(wp->gunForward.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(wp->gunForward.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(wp->gunForward.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 665, ASSERT_TYPE_SANITY, "( !IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( wp->gunForward )[0] ) && !IS_NAN( ( wp->gunForward )[1] ) && !IS_NAN( ( wp->gunForward )[2] )") )
    __debugbreak();
}

/*
==============
AICommonInterface::GetAccuracyFraction
==============
*/

float __fastcall AICommonInterface::GetAccuracyFraction(ai_common_t *self, double dist, const Weapon *r_weapon, WeapAccuracyType accuracyType)
{
  __int128 v4; 
  __int128 v5; 
  unsigned __int16 weaponIdx; 
  __int64 v8; 
  double ValueFromFraction; 
  __int64 v11; 
  WeaponCompleteDef *v12; 
  __int128 v14; 
  vec2_t *v15; 
  unsigned __int16 v16; 
  float v17; 
  const char *WeaponName; 
  char *v20; 
  char *fmt; 
  char output[1024]; 
  __int128 v24; 
  __int128 v25; 

  weaponIdx = r_weapon->weaponIdx;
  v8 = accuracyType;
  if ( r_weapon->weaponIdx )
  {
    v11 = weaponIdx;
    v24 = v5;
    if ( weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", weaponIdx, bg_lastParsedWeaponIndex) )
      __debugbreak();
    if ( !bg_weaponCompleteDefs[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    v12 = bg_weaponCompleteDefs[v11];
    v14 = *(_OWORD *)&dist;
    *(float *)&v14 = *(float *)&dist * 0.00025000001;
    _XMM8 = v14;
    if ( (unsigned int)v8 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 103, ASSERT_TYPE_ASSERT, "(accuracyType >= WEAP_ACCURACY_AI_VS_AI && accuracyType < WEAP_ACCURACY_COUNT)", (const char *)&queryFormat, "accuracyType >= WEAP_ACCURACY_AI_VS_AI && accuracyType < WEAP_ACCURACY_COUNT") )
      __debugbreak();
    v15 = v12->accuracyGraphKnots[v8];
    if ( v15 )
    {
      v16 = v12->accuracyGraphKnotCount[v8];
      if ( v16 )
      {
        v25 = v4;
        v17 = v15[v16 - 1].v[0];
        if ( v17 != 1.0 )
        {
          WeaponName = BG_GetWeaponName(r_weapon, output, 0x400u);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 104, ASSERT_TYPE_ASSERT, "(weapCompleteDef->accuracyGraphKnots[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnotCount[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnots[accuracyType][weapCompleteDef->accuracyGraphKnotCount[accuracyType] - 1][0] == 1.0f)", "%s\n\tweapon '%s' has invalid graph...max range %f != 1.0.", "weapCompleteDef->accuracyGraphKnots[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnotCount[accuracyType] == 0 || weapCompleteDef->accuracyGraphKnots[accuracyType][weapCompleteDef->accuracyGraphKnotCount[accuracyType] - 1][0] == 1.0f", WeaponName, v17) )
            __debugbreak();
        }
      }
    }
    __asm { vminss  xmm6, xmm8, xmm6 }
    if ( !v12->accuracyGraphKnots[v8] || !v12->accuracyGraphKnotCount[v8] )
    {
      v20 = BG_GetWeaponName(r_weapon, output, 0x400u);
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 == 1 )
        {
          if ( self )
          {
            LODWORD(fmt) = self->ent->s.number;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E15C30, 432i64, v20, fmt);
          }
          else
          {
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_143E15C90, 433i64, v20);
          }
        }
      }
      else if ( self )
      {
        LODWORD(fmt) = self->ent->s.number;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E15B80, 430i64, v20, fmt);
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E15BD8, 431i64, v20);
      }
    }
    ValueFromFraction = GraphGetValueFromFraction(v12->accuracyGraphKnotCount[v8], v12->accuracyGraphKnots[v8], *(const float *)&_XMM6);
  }
  else
  {
    LODWORD(ValueFromFraction) = 0;
  }
  return *(float *)&ValueFromFraction;
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
    return FLOAT_1_0;
  else
    return enemy->ent->client->attackerAccuracyMultiplier;
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
float AIScriptedInterface::GetFinalAccuracy(AIScriptedInterface *this, sentient_s *enemy, BgWeaponParms *wp, float accuracyMod)
{
  __int128 v4; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  bool v10; 
  float accuracy; 
  gentity_s *ent; 
  Weapon *p_weapon; 
  double WeaponAccuracy; 
  float v18; 
  double PlayerStanceAccuracy; 
  float v20; 
  double PlayerMovementAccuracy; 
  ai_scripted_t *m_pAI; 
  float v23; 
  float v24; 
  float attackerAccuracyMultiplier; 
  double PlayerMountAccuracy; 
  float v27; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  const dvar_t *v32; 
  ai_scripted_t *v33; 
  double v34; 
  double v35; 
  int v36; 
  char (*v37)[32]; 
  bool v38; 
  float *v39; 
  double v40; 
  __int64 v42; 
  __int64 v43; 
  AIWrapper v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  float playerSightAccuracy; 

  v10 = this->m_pAI == NULL;
  v50 = v4;
  v48 = v6;
  v47 = v7;
  v46 = v8;
  v45 = v9;
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 469, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 470, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 471, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 472, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  accuracy = this->m_pAI->shoot.accuracy;
  if ( accuracy < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 474, ASSERT_TYPE_ASSERT, "( ( m_pAI->shoot.accuracy >= 0.0f ) )", "( m_pAI->shoot.accuracy ) = %g", accuracy) )
    __debugbreak();
  if ( accuracyMod < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 475, ASSERT_TYPE_ASSERT, "( ( accuracyMod >= 0.0f ) )", "( accuracyMod ) = %g", accuracyMod) )
    __debugbreak();
  ent = enemy->ent;
  p_weapon = &wp->weapon;
  v49 = _XMM11;
  if ( ent->client )
  {
    WeaponAccuracy = AICommonInterface::GetWeaponAccuracy(this, enemy, p_weapon, WEAP_ACCURACY_AI_VS_PLAYER);
    v18 = *(float *)&WeaponAccuracy;
    PlayerStanceAccuracy = AICommonInterface::GetPlayerStanceAccuracy(this, enemy);
    v20 = *(float *)&PlayerStanceAccuracy;
    PlayerMovementAccuracy = AICommonInterface::GetPlayerMovementAccuracy(this, enemy);
    m_pAI = this->m_pAI;
    v23 = *(float *)&PlayerMovementAccuracy;
    playerSightAccuracy = m_pAI->shoot.playerSightAccuracy;
    if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 393, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 395, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
      __debugbreak();
    v24 = FLOAT_1_0;
    if ( this->m_pAI->combat.noAttackerAccuracyMod )
      attackerAccuracyMultiplier = FLOAT_1_0;
    else
      attackerAccuracyMultiplier = enemy->ent->client->attackerAccuracyMultiplier;
    PlayerMountAccuracy = AIScriptedInterface::GetPlayerMountAccuracy(this, enemy);
    v27 = *(float *)&PlayerMountAccuracy;
  }
  else
  {
    v35 = AICommonInterface::GetWeaponAccuracy(this, enemy, p_weapon, WEAP_ACCURACY_AI_VS_AI);
    v24 = FLOAT_1_0;
    playerSightAccuracy = FLOAT_1_0;
    v20 = FLOAT_1_0;
    v23 = FLOAT_1_0;
    attackerAccuracyMultiplier = FLOAT_1_0;
    v27 = FLOAT_1_0;
    v18 = *(float *)&v35;
    AIWrapper::AIWrapper(&v44, enemy->ent);
    if ( v44.m_pAI && AIScriptedInterface::ShouldIgnorePain(v44.m_pAI) )
    {
      __asm { vxorpd  xmm11, xmm11, xmm11 }
      v29 = 0.0;
      goto LABEL_31;
    }
  }
  *(double *)&_XMM11 = DOUBLE_1_0;
  v29 = accuracyMod;
LABEL_31:
  v30 = DVARBOOL_ai_debugAccuracy;
  v31 = (float)((float)((float)((float)((float)((float)((float)(this->m_pAI->shoot.accuracy * enemy->attackerAccuracy) * v29) * v18) * v20) * v23) * playerSightAccuracy) * attackerAccuracyMultiplier) * v27;
  if ( !DVARBOOL_ai_debugAccuracy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugAccuracy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( !v30->current.enabled )
    goto LABEL_43;
  v32 = DVARINT_ai_debugEntIndex;
  if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v33 = this->m_pAI;
  if ( v32->current.integer == v33->ent->s.number )
  {
    Com_sprintf_truncate<32>(debugAccuracyStrings, "%s: %1.3f", "m_pAI    ", v33->shoot.accuracy);
    debugAccuracyColors[0] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[1], "%s: %1.3f", "Target  ", enemy->attackerAccuracy);
    debugAccuracyColors[1] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[2], "%s: %1.3f", "Script  ", accuracyMod);
    debugAccuracyColors[2] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[3], "%s: %1.3f", "Weapon  ", v18);
    debugAccuracyColors[3] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[4], "%s: %1.3f", "Stance  ", v20);
    debugAccuracyColors[4] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[5], "%s: %1.3f", "Movement", v23);
    debugAccuracyColors[5] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[6], "%s: %1.3f", "Sight   ", playerSightAccuracy);
    debugAccuracyColors[6] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[7], "%s: %1.3f", "Attacker", attackerAccuracyMultiplier);
    debugAccuracyColors[7] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[8], "%s: %1.3f", "Mount   ", v27);
    debugAccuracyColors[8] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[9], "%s: %1.3f", "Pain   ", *(double *)&_XMM11);
    v34 = v31;
    debugAccuracyColors[9] = colorWhite;
    Com_sprintf_truncate<32>((char (*)[32])debugAccuracyStrings[10], "%s: %1.3f", "TOTAL   ", v31);
    debugAccuracyColors[10] = colorRed;
  }
  else
  {
LABEL_43:
    v36 = 0;
    v37 = debugAccuracyStrings;
    v38 = 1;
    v39 = &debugAccuracyColors[0].v[2];
    do
    {
      if ( !v38 )
      {
        LODWORD(v43) = 11;
        LODWORD(v42) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( msgIndex ) < (unsigned)( 11 )", "msgIndex doesn't index AI_DEBUG_ACCURACY_MSG_COUNT\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      *(vec4_t *)(v39 - 2) = colorWhite;
      *(_BYTE *)v37 = 0;
      v39 += 4;
      ++v36;
      ++v37;
      v38 = (unsigned int)v36 < 0xB;
    }
    while ( v36 < 11 );
    v34 = v31;
  }
  if ( v31 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 560, ASSERT_TYPE_ASSERT, "( ( accuracy >= 0.0f ) )", "( accuracy ) = %g", v34) )
    __debugbreak();
  v40 = I_fclamp(v31, 0.0, v24);
  this->m_pAI->shoot.debugLastAccuracy = *(float *)&v40;
  return *(float *)&v40;
}

/*
==============
AICommonInterface::GetMaxMountCover
==============
*/
float AICommonInterface::GetMaxMountCover(AICommonInterface *this, const playerState_s *const enemyPs)
{
  GHandler *Handler; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  double v12; 
  vec3_t outNormal; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t outMountPoint; 
  tmat33_t<vec3_t> axis; 
  vec3_t outBelow; 
  vec3_t outParallel; 
  MountSurfaceProperties mount; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 185, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemyPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 186, ASSERT_TYPE_ASSERT, "(enemyPs)", (const char *)&queryFormat, "enemyPs") )
    __debugbreak();
  if ( enemyPs->mountState.mountFraction <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 187, ASSERT_TYPE_ASSERT, "(0.0f < enemyPs->mountState.mountFraction)", (const char *)&queryFormat, "0.0f < enemyPs->mountState.mountFraction") )
    __debugbreak();
  this->GetEyePosition(this, (vec3_t *)&v18);
  Handler = GHandler::getHandler();
  MountSurfaceProperties::Initialize(&mount, Handler, &enemyPs->mountState.surface);
  BG_ContextMount_CalcMountPoint(Handler, &mount, &outMountPoint);
  if ( enemyPs->mountState.surface.type == MOUNT_TYPE_TOP )
  {
    BG_ContextMount_CalcMountVectors(Handler, &mount, &outNormal, &outParallel, &outBelow);
    LODWORD(v5) = LODWORD(outNormal.v[0]) ^ _xmm;
    LODWORD(v6) = LODWORD(outNormal.v[2]) ^ _xmm;
    LODWORD(v7) = LODWORD(outNormal.v[1]) ^ _xmm;
  }
  else
  {
    AnglesToAxis(&enemyPs->viewangles, &axis);
    if ( (unsigned int)(enemyPs->mountState.surface.type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 214, ASSERT_TYPE_ASSERT, "(enemyPs->mountState.surface.type == MOUNT_TYPE_LEFT || enemyPs->mountState.surface.type == MOUNT_TYPE_RIGHT)", (const char *)&queryFormat, "enemyPs->mountState.surface.type == MOUNT_TYPE_LEFT || enemyPs->mountState.surface.type == MOUNT_TYPE_RIGHT") )
      __debugbreak();
    v5 = axis.m[0].v[0];
    v7 = axis.m[0].v[1];
    v6 = axis.m[0].v[2];
  }
  v8 = v18 - outMountPoint.v[0];
  v11 = LODWORD(v19);
  v9 = v19 - outMountPoint.v[1];
  v10 = v20 - outMountPoint.v[2];
  *(float *)&v11 = (float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10);
  if ( *(float *)&v11 > 0.000001 )
  {
    *(float *)&v11 = fsqrt(*(float *)&v11);
    _XMM1 = v11;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    v12 = I_fclamp((float)((float)((float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * v7) + (float)((float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * v5)) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * v6)) * 2.0, 0.0, 1.0);
  }
  else
  {
    LODWORD(v12) = 0;
  }
  return *(float *)&v12;
}

/*
==============
AIScriptedInterface::GetPlayerMountAccuracy
==============
*/
float AIScriptedInterface::GetPlayerMountAccuracy(AIScriptedInterface *this, const sentient_s *const enemy)
{
  gclient_s *client; 
  double MaxMountCover; 
  ContextMountType type; 
  const dvar_t *v7; 
  const char *v8; 
  vec3_t vOriginOut; 
  vec3_t v11; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 410, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 411, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 412, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  client = enemy->ent->client;
  if ( client->ps.mountState.mountFraction > 0.0 )
  {
    Sentient_GetOrigin(this->m_pAI->sentient, &vOriginOut);
    Sentient_GetOrigin(enemy, &v11);
    if ( (float)((float)((float)((float)(vOriginOut.v[1] - v11.v[1]) * (float)(vOriginOut.v[1] - v11.v[1])) + (float)((float)(vOriginOut.v[0] - v11.v[0]) * (float)(vOriginOut.v[0] - v11.v[0]))) + (float)((float)(vOriginOut.v[2] - v11.v[2]) * (float)(vOriginOut.v[2] - v11.v[2]))) >= 62500.0 )
    {
      MaxMountCover = AICommonInterface::GetMaxMountCover(this, &client->ps);
      type = client->ps.mountState.surface.type;
      if ( type == MOUNT_TYPE_TOP )
      {
        v7 = DCONST_DVARMPFLT_mount_ai_top_victim_accuracy;
        if ( DCONST_DVARMPFLT_mount_ai_top_victim_accuracy )
        {
LABEL_22:
          Dvar_CheckFrontendServerThread(v7);
          return (float)((float)(*(float *)&MaxMountCover * client->ps.mountState.mountFraction) * v7->current.value) + (float)(1.0 - (float)(*(float *)&MaxMountCover * client->ps.mountState.mountFraction));
        }
        v8 = "mount_ai_top_victim_accuracy";
      }
      else
      {
        if ( (unsigned int)(type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 446, ASSERT_TYPE_ASSERT, "(enemyPs->mountState.surface.type == MOUNT_TYPE_LEFT || enemyPs->mountState.surface.type == MOUNT_TYPE_RIGHT)", (const char *)&queryFormat, "enemyPs->mountState.surface.type == MOUNT_TYPE_LEFT || enemyPs->mountState.surface.type == MOUNT_TYPE_RIGHT") )
          __debugbreak();
        v7 = DCONST_DVARMPFLT_mount_ai_side_victim_accuracy;
        if ( DCONST_DVARMPFLT_mount_ai_side_victim_accuracy )
          goto LABEL_22;
        v8 = "mount_ai_side_victim_accuracy";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
        __debugbreak();
      goto LABEL_22;
    }
  }
  return FLOAT_1_0;
}

/*
==============
AICommonInterface::GetPlayerMovementAccuracy
==============
*/
float AICommonInterface::GetPlayerMovementAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  bool v10; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float value; 
  const dvar_t *v22; 
  gclient_s *client; 
  __int128 v24; 
  vec3_t v35; 
  vec3_t vOriginOut; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 

  v10 = this->m_pAI == NULL;
  v44 = v2;
  v42 = v4;
  v39 = v7;
  v38 = v8;
  v37 = v9;
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 280, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 281, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 282, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 283, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  Sentient_GetOrigin(this->m_pAI->sentient, &vOriginOut);
  Sentient_GetOrigin(enemy, &v35);
  v13 = LODWORD(v35.v[1]);
  *(float *)&v13 = fsqrt((float)((float)((float)(v35.v[1] - vOriginOut.v[1]) * (float)(v35.v[1] - vOriginOut.v[1])) + (float)((float)(v35.v[0] - vOriginOut.v[0]) * (float)(v35.v[0] - vOriginOut.v[0]))) + (float)((float)(v35.v[2] - vOriginOut.v[2]) * (float)(v35.v[2] - vOriginOut.v[2])));
  _XMM1 = v13;
  __asm
  {
    vcmpless xmm0, xmm1, xmm7
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  v17 = (float)(v35.v[0] - vOriginOut.v[0]) * (float)(1.0 / *(float *)&_XMM0);
  v18 = (float)(v35.v[1] - vOriginOut.v[1]) * (float)(1.0 / *(float *)&_XMM0);
  v19 = (float)(v35.v[2] - vOriginOut.v[2]) * (float)(1.0 / *(float *)&_XMM0);
  if ( this->Is3D(this) )
  {
    v20 = DVARFLT_player_zeroGravSpeed;
    v43 = v3;
    v41 = v5;
    v40 = v6;
    if ( !DVARFLT_player_zeroGravSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    v22 = DVARFLT_player_zeroGravBoostScalar;
    if ( !DVARFLT_player_zeroGravBoostScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_zeroGravBoostScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    client = enemy->ent->client;
    v24 = LODWORD(client->ps.velocity.v[0]);
    *(float *)&v24 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(client->ps.velocity.v[1] * client->ps.velocity.v[1])) + (float)(client->ps.velocity.v[2] * client->ps.velocity.v[2]));
    _XMM3 = v24;
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    I_fclamp(*(float *)&v24 / (float)(value * v22->current.value), 0.0, 1.0);
  }
  else
  {
    I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v18 * enemy->ent->client->ps.velocity.v[0]) - (float)(v17 * enemy->ent->client->ps.velocity.v[1])) + (float)(v19 * enemy->ent->client->ps.velocity.v[2])) & _xmm), 0.0, 250.0);
  }
  _XMM0 = (unsigned int)enemy->ent->client->ps.groundEntityNum;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_30000001);
  __asm
  {
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmaxss  xmm6, xmm0, xmm4
  }
  if ( *(float *)&_XMM6 < 0.0 || *(float *)&_XMM6 > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 331, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM6, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  return *(float *)&_XMM6;
}

/*
==============
AICommonInterface::GetPlayerSightAccuracy
==============
*/
float AICommonInterface::GetPlayerSightAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  gclient_s *client; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v16; 
  float v18; 
  vec3_t vPoint; 
  vec3_t vEyePosOut; 

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
  client = enemy->ent->client;
  v5 = client->ps.origin.v[0];
  v6 = client->ps.origin.v[1];
  v7 = client->ps.origin.v[2];
  v8 = vEyePosOut.v[0] - v5;
  v9 = vEyePosOut.v[1] - v6;
  v11 = LODWORD(vEyePosOut.v[2]);
  *(float *)&v11 = vEyePosOut.v[2] - v7;
  v10 = *(float *)&v11;
  _XMM0 = (unsigned int)AICommonInterface::CanSeeEntityPoint(this, &vEyePosOut, enemy->ent);
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_10_0);
  __asm { vblendvps xmm0, xmm1, xmm15, xmm2 }
  vPoint.v[0] = (float)(v8 * 0.75) + v5;
  vPoint.v[1] = (float)(v9 * 0.75) + v6;
  vPoint.v[2] = (float)(*(float *)&v11 * 0.75) + v7;
  if ( AICommonInterface::CanSeeEntityPoint(this, &vPoint, enemy->ent) )
    v16 = *(float *)&_XMM0 + 30.0;
  else
    v16 = *(float *)&_XMM0;
  vPoint.v[0] = (float)(v8 * 0.5) + v5;
  vPoint.v[1] = (float)(v9 * 0.5) + v6;
  vPoint.v[2] = (float)(*(float *)&v11 * 0.5) + v7;
  if ( AICommonInterface::CanSeeEntityPoint(this, &vPoint, enemy->ent) )
    v16 = v16 + 30.0;
  vPoint.v[0] = (float)(v8 * 0.25) + v5;
  vPoint.v[1] = (float)(v9 * 0.25) + v6;
  *(float *)&v11 = *(float *)&v11 * 0.25;
  _XMM1 = v11;
  vPoint.v[2] = (float)(v10 * 0.25) + v7;
  if ( AICommonInterface::CanSeeEntityPoint(this, &vPoint, enemy->ent) )
    v16 = v16 + 30.0;
  v18 = v16 * 0.0099999998;
  if ( (float)(v16 * 0.0099999998) < 0.0 || v18 > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 380, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v18, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  return (float)(v18 + 1.0) * 0.5;
}

/*
==============
AICommonInterface::GetPlayerStanceAccuracy
==============
*/
float AICommonInterface::GetPlayerStanceAccuracy(AICommonInterface *this, const sentient_s *enemy)
{
  float mountFraction; 
  float v10; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 241, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 242, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 243, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( !enemy->ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 244, ASSERT_TYPE_ASSERT, "(enemy->ent->client)", (const char *)&queryFormat, "enemy->ent->client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&enemy->ent->client->ps.pm_flags, ACTIVE, 0) )
  {
    *(float *)&_XMM6 = FLOAT_0_5;
  }
  else
  {
    _XMM0 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&enemy->ent->client->ps.pm_flags, ACTIVE, 1u);
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_75);
    __asm { vblendvps xmm6, xmm1, xmm7, xmm2 }
  }
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  mountFraction = enemy->ent->client->ps.mountState.mountFraction;
  if ( mountFraction > 0.0 )
  {
    if ( mountFraction > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 257, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( enemy->ent->client->ps.mountState.mountFraction ) && ( enemy->ent->client->ps.mountState.mountFraction ) <= ( 1.0f )", "enemy->ent->client->ps.mountState.mountFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", mountFraction, *(double *)&_XMM10, DOUBLE_1_0) )
      __debugbreak();
    v10 = enemy->ent->client->ps.mountState.mountFraction;
    *(float *)&_XMM6 = (float)((float)(1.0 - v10) * *(float *)&_XMM6) + v10;
  }
  if ( (*(float *)&_XMM6 < 0.0 || *(float *)&_XMM6 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 262, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM6, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  return *(float *)&_XMM6;
}

/*
==============
AICommonInterface::GetWeaponAccuracy
==============
*/
float AICommonInterface::GetWeaponAccuracy(AICommonInterface *this, const sentient_s *enemy, const Weapon *r_weapon, WeapAccuracyType accuracyType)
{
  float v8; 
  float v9; 
  const dvar_t *v10; 
  double AccuracyFraction; 
  __int64 v13; 
  vec3_t vOriginOut; 
  vec3_t v15; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 160, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 161, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 162, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  if ( (unsigned int)accuracyType >= WEAP_ACCURACY_COUNT )
  {
    LODWORD(v13) = accuracyType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( accuracyType ) < (unsigned)( WEAP_ACCURACY_COUNT )", "accuracyType doesn't index WEAP_ACCURACY_COUNT\n\t%i not in [0, %i)", v13, 2) )
      __debugbreak();
  }
  Sentient_GetOrigin(this->m_pAI->sentient, &vOriginOut);
  Sentient_GetOrigin(enemy, &v15);
  v9 = fsqrt((float)((float)((float)(vOriginOut.v[1] - v15.v[1]) * (float)(vOriginOut.v[1] - v15.v[1])) + (float)((float)(vOriginOut.v[0] - v15.v[0]) * (float)(vOriginOut.v[0] - v15.v[0]))) + (float)((float)(vOriginOut.v[2] - v15.v[2]) * (float)(vOriginOut.v[2] - v15.v[2])));
  v8 = v9;
  if ( accuracyType == WEAP_ACCURACY_AI_VS_PLAYER )
  {
    v10 = DVARFLT_ai_accuracyDistScale;
    if ( !DVARFLT_ai_accuracyDistScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_accuracyDistScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v8 = v9 * v10->current.value;
  }
  AccuracyFraction = AICommonInterface::GetAccuracyFraction(this->m_pAI, v8, r_weapon, accuracyType);
  if ( (*(float *)&AccuracyFraction < 0.0 || *(float *)&AccuracyFraction > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 176, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( accuracy ) && ( accuracy ) <= ( 1.0f )", "accuracy not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&AccuracyFraction, 0.0, DOUBLE_1_0) )
    __debugbreak();
  return *(float *)&AccuracyFraction;
}

/*
==============
AIScriptedInterface::HitSentient
==============
*/
void AIScriptedInterface::HitSentient(AIScriptedInterface *this, BgWeaponParms *wp, sentient_s *enemy, float accuracy)
{
  __int128 v4; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  __int128 v15; 
  __int128 v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  int v31; 
  gentity_s *ent; 
  __int128 v33; 
  gclient_s *client; 
  float v38; 
  __int128 v39; 
  __int128 v40; 
  float v41; 
  __int128 v42; 
  __int128 v43; 
  float mountFraction; 
  __int128 v45; 
  double Float_Internal_DebugName; 
  float v47; 
  double MaxMountCover; 
  __int128 v49; 
  __int128 v51; 
  float v55; 
  float v56; 
  double v57; 
  float v58; 
  float v59; 
  double v60; 
  float v61; 
  float v62; 
  float v63; 
  __int128 v64; 
  __int128 v65; 
  float v66; 
  __int128 v67; 
  AIWrapper v71; 
  vec3_t vEyePosOut; 
  vec3_t up; 
  vec3_t entAnglesOut; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 734, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 735, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 736, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  Sentient_GetEyePosition(enemy, &vEyePosOut);
  *(double *)&v4 = Sentient_GetHeadHeight(enemy);
  v10 = LODWORD(vEyePosOut.v[0]);
  *(float *)&v10 = vEyePosOut.v[0] - wp->muzzleTrace.v[0];
  v9 = v10;
  v12 = LODWORD(vEyePosOut.v[1]);
  *(float *)&v12 = vEyePosOut.v[1] - wp->muzzleTrace.v[1];
  v11 = v12;
  v13 = vEyePosOut.v[2] - wp->muzzleTrace.v[2];
  *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(*(float *)&v9 * *(float *)&v9)) + (float)(v13 * v13));
  _XMM2 = v12;
  v15 = v4;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm8, xmm0
  }
  v19 = v9;
  *(float *)&v19 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  v18 = v19;
  v21 = v11;
  v20 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
  v22 = v13 * (float)(1.0 / *(float *)&_XMM0);
  if ( AIScriptedInterface::IsEntZeroG(enemy->ent) )
  {
    AIScriptedInterface::GetEntZeroGAngles(enemy->ent, &entAnglesOut);
    AngleVectors(&entAnglesOut, NULL, NULL, &up);
    v23 = LODWORD(up.v[1]);
    v24 = up.v[2];
    v25 = up.v[0];
    v26 = LODWORD(up.v[2]);
    *(float *)&v26 = (float)(up.v[2] * v20) - (float)(up.v[1] * v22);
    v27 = v26;
    v28 = LODWORD(up.v[0]);
    *(float *)&v28 = (float)(up.v[0] * v22) - (float)(up.v[2] * *(float *)&v18);
    v29 = v28;
    v30 = (float)(up.v[1] * *(float *)&v18) - (float)(up.v[0] * v20);
    v31 = 1;
  }
  else
  {
    v29 = v18 ^ _xmm;
    v30 = 0.0;
    up.v[0] = 0.0;
    up.v[1] = 0.0;
    up.v[2] = FLOAT_1_0;
    *(float *)&v21 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
    v27 = v21;
    v31 = 0;
    v25 = 0.0;
    v23 = 0i64;
    v24 = FLOAT_1_0;
  }
  ent = enemy->ent;
  v33 = v27;
  client = enemy->ent->client;
  *(float *)&v33 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(*(float *)&v29 * *(float *)&v29)) + (float)(v30 * v30));
  _XMM3 = v33;
  __asm
  {
    vcmpless xmm0, xmm3, xmm14
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v38 = *(float *)&v27 * (float)(1.0 / *(float *)&_XMM0);
  v40 = v29;
  *(float *)&v40 = *(float *)&v29 * (float)(1.0 / *(float *)&_XMM0);
  v39 = v40;
  v41 = v30 * (float)(1.0 / *(float *)&_XMM0);
  if ( client )
  {
    if ( v31 )
    {
      v42 = v23;
      *(float *)&v42 = (float)((float)((float)((float)((float)(*(float *)&v23 * *(float *)&v15) + vEyePosOut.v[1]) - ent->r.currentOrigin.v[1]) * *(float *)&v23) + (float)((float)((float)((float)(v25 * *(float *)&v15) + vEyePosOut.v[0]) - ent->r.currentOrigin.v[0]) * v25)) + (float)((float)((float)((float)(v24 * *(float *)&v15) + vEyePosOut.v[2]) - ent->r.currentOrigin.v[2]) * v24);
      v43 = v42;
    }
    else
    {
      mountFraction = client->ps.mountState.mountFraction;
      v45 = v15;
      *(float *)&v45 = (float)(*(float *)&v15 + vEyePosOut.v[2]) - ent->r.currentOrigin.v[2];
      v43 = v45;
      if ( mountFraction > 0.0 && client->ps.mountState.surface.type == MOUNT_TYPE_TOP )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_ai_top_victim_eye_height, "mount_tuning_ai_top_victim_eye_height");
        v47 = *(float *)&Float_Internal_DebugName + *(float *)&v15;
        MaxMountCover = AICommonInterface::GetMaxMountCover(this, &client->ps);
        ent = enemy->ent;
        v49 = LODWORD(FLOAT_1_0);
        *(float *)&v49 = (float)((float)(1.0 - (float)(*(float *)&MaxMountCover * mountFraction)) * *(float *)&v43) + (float)((float)(*(float *)&MaxMountCover * mountFraction) * v47);
        v43 = v49;
      }
    }
    v51 = LODWORD(ent->r.box.halfSize.v[0]);
    *(float *)&v51 = ent->r.box.halfSize.v[0] * 0.75;
    _XMM1 = v51;
    _XMM2 = v43 ^ _xmm;
    __asm
    {
      vminss  xmm10, xmm1, cs:__real@41000000
      vmaxss  xmm7, xmm2, cs:__real@c2300000
    }
  }
  else
  {
    if ( (accuracy < 0.0 || accuracy > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 801, ASSERT_TYPE_ASSERT, "( ( accuracy >= 0 && accuracy <= 1.0f ) )", "( accuracy ) = %g", accuracy) )
      __debugbreak();
    v55 = 1.0 - accuracy;
    *(float *)&_XMM10 = (float)(1.0 - accuracy) * enemy->ent->r.box.halfSize.v[0];
    AIWrapper::AIWrapper(&v71, enemy->ent);
    if ( v71.m_pAI )
      v56 = FLOAT_N44_0;
    else
      v56 = enemy->ent->r.box.halfSize.v[2];
    *(float *)&_XMM7 = v56 * v55;
    *(float *)&v15 = *(float *)&v15 * v55;
  }
  v57 = G_crandom();
  v59 = *(float *)&_XMM10 * *(float *)&v57;
  v58 = *(float *)&_XMM10 * *(float *)&v57;
  v60 = G_random();
  v61 = (float)(*(float *)&v60 * *(float *)&_XMM7) + *(float *)&v15;
  v62 = (float)((float)((float)(v38 * v59) + vEyePosOut.v[0]) + (float)(v61 * up.v[0])) - wp->muzzleTrace.v[0];
  v63 = v61 * up.v[1];
  wp->forward.v[0] = v62;
  v64 = v39;
  *(float *)&v64 = (float)((float)((float)(*(float *)&v39 * v58) + vEyePosOut.v[1]) + v63) - wp->muzzleTrace.v[1];
  v65 = v64;
  *(float *)&v64 = (float)((float)(v41 * v58) + vEyePosOut.v[2]) + (float)(v61 * up.v[2]);
  wp->forward.v[1] = *(float *)&v65;
  v66 = *(float *)&v64 - wp->muzzleTrace.v[2];
  v67 = v65;
  *(float *)&v67 = fsqrt((float)((float)(*(float *)&v65 * *(float *)&v65) + (float)(v62 * v62)) + (float)(v66 * v66));
  _XMM1 = v67;
  __asm
  {
    vcmpless xmm0, xmm1, xmm14
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  wp->forward.v[0] = v62 * (float)(1.0 / *(float *)&_XMM0);
  wp->forward.v[2] = (float)(1.0 / *(float *)&_XMM0) * v66;
  wp->forward.v[1] = *(float *)&v65 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
AIScriptedInterface::HitTarget
==============
*/
void AIScriptedInterface::HitTarget(const BgWeaponParms *wp, const vec3_t *target, vec3_t *outForward)
{
  float v3; 
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  float v28; 
  vec3_t v0; 
  vec3_t cross; 

  v3 = target->v[0] - wp->muzzleTrace.v[0];
  v5 = LODWORD(target->v[1]);
  v4 = target->v[1] - wp->muzzleTrace.v[1];
  v6 = target->v[2] - wp->muzzleTrace.v[2];
  *(float *)&v5 = fsqrt((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v6 * v6));
  _XMM1 = v5;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
  }
  v0.v[0] = v3 * (float)(1.0 / *(float *)&_XMM0);
  v0.v[2] = v6 * (float)(1.0 / *(float *)&_XMM0);
  v0.v[1] = v4 * (float)(1.0 / *(float *)&_XMM0);
  Vec3Cross(&v0, &wp->up, &cross);
  v13 = LODWORD(cross.v[0]);
  v14 = LODWORD(cross.v[1]);
  v15 = cross.v[2];
  v16 = v13;
  *(float *)&v16 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(*(float *)&v14 * *(float *)&v14)) + (float)(v15 * v15));
  _XMM3 = v16;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v20 = 1.0 / *(float *)&_XMM0;
  *(double *)&_XMM0 = G_crandom();
  *(float *)&v16 = *(float *)&_XMM0 * 8.0;
  v21 = *(float *)&_XMM0 * 8.0;
  v22 = target->v[0];
  v23 = target->v[1];
  v24 = target->v[2];
  *(double *)&_XMM0 = G_crandom();
  *(float *)&v13 = (float)((float)((float)((float)(*(float *)&v13 * v20) * *(float *)&v16) + v22) + (float)((float)(*(float *)&_XMM0 * 8.0) * wp->up.v[0])) - wp->muzzleTrace.v[0];
  v25 = v14;
  *(float *)&v25 = (float)((float)((float)(*(float *)&v14 * v20) * v21) + v23) + (float)((float)(*(float *)&_XMM0 * 8.0) * wp->up.v[1]);
  v26 = (float)(*(float *)&_XMM0 * 8.0) * wp->up.v[2];
  outForward->v[0] = *(float *)&v13;
  v27 = *(float *)&v25 - wp->muzzleTrace.v[1];
  outForward->v[1] = v27;
  v28 = (float)((float)((float)((float)(v15 * v20) * v21) + v24) + v26) - wp->muzzleTrace.v[2];
  *(float *)&v25 = fsqrt((float)((float)(v27 * v27) + (float)(*(float *)&v13 * *(float *)&v13)) + (float)(v28 * v28));
  _XMM1 = v25;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  outForward->v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  outForward->v[1] = v27 * (float)(1.0 / *(float *)&_XMM0);
  outForward->v[2] = v28 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
AIScriptedInterface::HitTargetSentient
==============
*/
void AIScriptedInterface::HitTargetSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracy)
{
  this->m_pAI->shoot.missCount = 0;
  ++this->m_pAI->shoot.hitCount;
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 866, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 867, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
    __debugbreak();
  AIScriptedInterface::HitSentient(this, wp, pTargetSentient, accuracy);
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
_BOOL8 AIScriptedInterface::MissSentient(BgWeaponParms *wp, sentient_s *enemy, float accuracy)
{
  __int128 v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v21; 
  __int128 v22; 
  float v23; 
  __int128 v24; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  BOOL v32; 
  double v38; 
  gclient_s *client; 
  float v40; 
  __int128 v41; 
  double v42; 
  const WeaponDef *weapDef; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  const dvar_t *v47; 
  float value; 
  const dvar_t *v49; 
  float v52; 
  float v53; 
  float v54; 
  __int128 v55; 
  __int128 v56; 
  float v57; 
  __int128 v58; 
  float v59; 
  float v60; 
  float v61; 
  float v66; 
  vec3_t vEyePosOut; 
  vec3_t up; 
  vec3_t entAnglesOut; 

  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 899, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( !enemy->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 900, ASSERT_TYPE_ASSERT, "(enemy->ent)", (const char *)&queryFormat, "enemy->ent") )
    __debugbreak();
  Sentient_GetEyePosition(enemy, &vEyePosOut);
  v7 = LODWORD(vEyePosOut.v[0]);
  *(float *)&v7 = vEyePosOut.v[0] - wp->muzzleTrace.v[0];
  v6 = v7;
  v8 = vEyePosOut.v[1] - wp->muzzleTrace.v[1];
  v10 = LODWORD(vEyePosOut.v[2]);
  *(float *)&v10 = vEyePosOut.v[2] - wp->muzzleTrace.v[2];
  v9 = v10;
  v11 = v6;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(v8 * v8)) + (float)(*(float *)&v9 * *(float *)&v9));
  _XMM10 = v11;
  __asm
  {
    vcmpless xmm0, xmm10, xmm11
    vblendvps xmm0, xmm10, xmm7, xmm0
  }
  v16 = v6;
  *(float *)&v16 = *(float *)&v6 * (float)(1.0 / *(float *)&_XMM0);
  v15 = v16;
  v17 = v8 * (float)(1.0 / *(float *)&_XMM0);
  v19 = v9;
  *(float *)&v19 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  v18 = *(float *)&v19;
  _XMM8 = 0i64;
  if ( AIScriptedInterface::IsEntZeroG(enemy->ent) )
  {
    AIScriptedInterface::GetEntZeroGAngles(enemy->ent, &entAnglesOut);
    AngleVectors(&entAnglesOut, NULL, NULL, &up);
    v21 = (float)(v17 * up.v[2]) - (float)(*(float *)&v19 * up.v[1]);
    *(float *)&v19 = (float)(*(float *)&v19 * up.v[0]) - (float)(*(float *)&v15 * up.v[2]);
    v22 = v19;
    v23 = (float)(*(float *)&v15 * up.v[1]) - (float)(v17 * up.v[0]);
  }
  else
  {
    v22 = v15 ^ _xmm;
    up.v[0] = 0.0;
    up.v[1] = 0.0;
    up.v[2] = FLOAT_1_0;
    v21 = v17;
    v23 = 0.0;
  }
  v24 = v22;
  *(float *)&v24 = fsqrt((float)((float)(*(float *)&v22 * *(float *)&v22) + (float)(v21 * v21)) + (float)(v23 * v23));
  _XMM3 = v24;
  __asm
  {
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v28 = *(float *)&v22 * (float)(1.0 / *(float *)&_XMM0);
  v29 = wp->gunForward.v[2];
  v30 = v21 * (float)(1.0 / *(float *)&_XMM0);
  v66 = v23 * (float)(1.0 / *(float *)&_XMM0);
  v31 = (float)(*(float *)&v15 * wp->gunForward.v[0]) + (float)(wp->gunForward.v[1] * v17);
  v32 = (float)(v31 + (float)(v18 * v29)) < 0.98480803;
  if ( (float)(v31 + (float)(v18 * v29)) >= 0.98480803 )
  {
    G_random();
    _XMM1 = LODWORD(FLOAT_0_5);
    __asm { vcmpltss xmm2, xmm1, xmm0 }
    _XMM0 = LODWORD(FLOAT_N1_0);
    __asm { vblendvps xmm1, xmm0, xmm7, xmm2 }
  }
  else
  {
    _XMM0 = LODWORD(FLOAT_N1_0);
    __asm
    {
      vcmpltss xmm4, xmm8, xmm3
      vblendvps xmm1, xmm0, xmm7, xmm4
    }
  }
  *(_QWORD *)entAnglesOut.v = 0i64;
  if ( !wp->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 936, ASSERT_TYPE_ASSERT, "(wp->weapDef)", (const char *)&queryFormat, "wp->weapDef") )
    __debugbreak();
  if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_BULLET && BG_WeaponBulletFire_ShouldSpread(*(const bitarray<64> *)entAnglesOut.v, &wp->weapon, wp->isAlternate) )
  {
    v38 = BG_ADSSpread(&wp->weapon, wp->isAlternate, 0, 0);
    *(float *)&_XMM8 = (float)(tanf_0(*(float *)&v38 * 0.017453292) * *(float *)&_XMM10) * (float)(1.0 - accuracy);
  }
  if ( !wp->weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 948, ASSERT_TYPE_ASSERT, "(wp && wp->weapDef)", (const char *)&queryFormat, "wp && wp->weapDef") )
    __debugbreak();
  client = enemy->ent->client;
  *(double *)&_XMM0 = G_random();
  if ( client )
  {
    v40 = (float)((float)((float)(*(float *)&_XMM0 + 1.0) * 8.0) + *(float *)&_XMM8) * *(float *)&_XMM1;
    *(double *)&_XMM0 = Sentient_GetHeadHeight(enemy);
    v41 = _XMM0;
    v42 = G_random();
    weapDef = wp->weapDef;
    v45 = v41;
    *(float *)&v45 = *(float *)&v41 - (float)(*(float *)&v42 * 44.0);
    v44 = v45;
    if ( weapDef->weapClass == WEAPCLASS_SNIPER )
    {
      *(double *)&_XMM0 = G_crandom();
      v46 = _XMM0;
      *(float *)&v46 = *(float *)&_XMM0 * 3.0;
      v44 = v46;
      weapDef = wp->weapDef;
      v40 = *(float *)&_XMM1 * 8.0;
    }
    if ( weapDef->weapClass == WEAPCLASS_SPREAD )
    {
      v47 = DCONST_DVARFLT_ai_shotgunMissMax;
      if ( !DCONST_DVARFLT_ai_shotgunMissMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_shotgunMissMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      value = v47->current.value;
      v49 = DCONST_DVARFLT_ai_shotgunMissMin;
      if ( !DCONST_DVARFLT_ai_shotgunMissMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_shotgunMissMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      _XMM0 = v49->current.unsignedInt;
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, value);
      __asm { vminss  xmm1, xmm0, xmm7 }
      v40 = v40 * *(float *)&_XMM1;
    }
    v52 = (float)(vEyePosOut.v[0] - (float)(*(float *)&v15 * 16.0)) + (float)(v30 * v40);
    v53 = (float)(vEyePosOut.v[1] - (float)(v17 * 16.0)) + (float)(v40 * v28);
    v54 = vEyePosOut.v[2] - (float)(v18 * 16.0);
  }
  else
  {
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    v40 = (float)((float)((float)(*(float *)&_XMM0 * 10.0) * (float)(1.0 - accuracy)) + *(float *)&_XMM8) + (float)(*(float *)&_XMM1 * 36.734997);
    *(double *)&v55 = G_crandom();
    v56 = (unsigned __int64)v55;
    *(float *)&v56 = (float)(*(float *)&v55 * -22.0) * (float)(1.0 - accuracy);
    v44 = v56;
    if ( wp->weapDef->weapClass == WEAPCLASS_SNIPER )
    {
      v40 = *(float *)&_XMM1 * 8.0;
      *(double *)&v55 = Sentient_GetHeadHeight(enemy);
      v44 = v55;
    }
    v52 = (float)(vEyePosOut.v[0] - (float)(*(float *)&v15 * 16.0)) + (float)(v30 * v40);
    v53 = (float)(vEyePosOut.v[1] - (float)(v17 * 16.0)) + (float)(v28 * v40);
    v54 = vEyePosOut.v[2] - (float)(v18 * 16.0);
  }
  v57 = (float)((float)(*(float *)&v44 * up.v[0]) + v52) - wp->muzzleTrace.v[0];
  v58 = v44;
  *(float *)&v58 = (float)(*(float *)&v44 * up.v[1]) + v53;
  v59 = *(float *)&v44 * up.v[2];
  wp->forward.v[0] = v57;
  v60 = *(float *)&v58 - wp->muzzleTrace.v[1];
  wp->forward.v[1] = v60;
  v61 = (float)(v59 + (float)(v54 + (float)(v40 * v66))) - wp->muzzleTrace.v[2];
  *(float *)&v58 = fsqrt((float)((float)(v60 * v60) + (float)(v57 * v57)) + (float)(v61 * v61));
  _XMM3 = v58;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  wp->forward.v[0] = (float)(1.0 / *(float *)&_XMM0) * v57;
  wp->forward.v[2] = v61 * (float)(1.0 / *(float *)&_XMM0);
  wp->forward.v[1] = (float)(1.0 / *(float *)&_XMM0) * v60;
  return v32;
}

/*
==============
AIScriptedInterface::MissTarget
==============
*/
void AIScriptedInterface::MissTarget(const BgWeaponParms *wp, const vec3_t *target, vec3_t *outForward)
{
  float v6; 
  __int128 v7; 
  float v8; 
  float v9; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  float v22; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  float v35; 
  vec3_t v0; 
  vec3_t cross; 

  _XMM2 = LODWORD(outerRadius);
  __asm
  {
    vcmpeqss xmm1, xmm2, cs:__real@45d9c800
    vblendvps xmm0, xmm2, xmm0, xmm1
  }
  v7 = LODWORD(target->v[1]);
  v6 = target->v[1] - wp->muzzleTrace.v[1];
  outerRadius = *(float *)&_XMM0;
  v8 = target->v[0] - wp->muzzleTrace.v[0];
  v9 = target->v[2] - wp->muzzleTrace.v[2];
  *(float *)&v7 = fsqrt((float)((float)(v6 * v6) + (float)(v8 * v8)) + (float)(v9 * v9));
  _XMM1 = v7;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  v0.v[1] = v6 * (float)(1.0 / *(float *)&_XMM0);
  v16 = v8 * (float)(1.0 / *(float *)&_XMM0);
  v0.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  v0.v[0] = v16;
  Vec3Cross(&v0, &wp->up, &cross);
  v17 = LODWORD(cross.v[0]);
  v18 = v17;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
  _XMM3 = v18;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v22 = 1.0 / *(float *)&_XMM0;
  G_random();
  _XMM1 = LODWORD(FLOAT_0_5);
  v24 = target->v[0];
  v25 = LODWORD(target->v[1]);
  v26 = target->v[2];
  __asm { vcmpltss xmm2, xmm1, xmm0 }
  _XMM0 = LODWORD(FLOAT_N1_0);
  __asm { vblendvps xmm1, xmm0, xmm8, xmm2 }
  *(float *)&v18 = *(float *)&_XMM1 * outerRadius;
  v30 = *(float *)&_XMM1 * outerRadius;
  *(double *)&_XMM0 = G_crandom();
  v31 = *(float *)&_XMM0 * 12.0;
  v32 = wp->up.v[2];
  *(float *)&v17 = (float)((float)((float)(v24 - (float)(v16 * 16.0)) + (float)((float)(*(float *)&v17 * v22) * *(float *)&v18)) + (float)((float)(*(float *)&_XMM0 * 12.0) * wp->up.v[0])) - wp->muzzleTrace.v[0];
  v33 = v25;
  *(float *)&v33 = (float)((float)(*(float *)&v25 - (float)(16.0 * v0.v[1])) + (float)((float)(v22 * cross.v[1]) * v30)) + (float)((float)(*(float *)&_XMM0 * 12.0) * wp->up.v[1]);
  *(float *)&_XMM0 = 16.0 * v0.v[2];
  outForward->v[0] = *(float *)&v17;
  v34 = *(float *)&v33 - wp->muzzleTrace.v[1];
  *(float *)&_XMM1 = v22 * cross.v[2];
  outForward->v[1] = v34;
  v35 = (float)((float)((float)(v26 - *(float *)&_XMM0) + (float)(*(float *)&_XMM1 * v30)) + (float)(v31 * v32)) - wp->muzzleTrace.v[2];
  *(float *)&v33 = fsqrt((float)((float)(v34 * v34) + (float)(*(float *)&v17 * *(float *)&v17)) + (float)(v35 * v35));
  _XMM4 = v33;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  outForward->v[0] = *(float *)&v17 * (float)(1.0 / *(float *)&_XMM0);
  outForward->v[1] = v34 * (float)(1.0 / *(float *)&_XMM0);
  outForward->v[2] = v35 * (float)(1.0 / *(float *)&_XMM0);
}

/*
==============
AIScriptedInterface::MissTargetSentient
==============
*/
int AIScriptedInterface::MissTargetSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracy)
{
  ++this->m_pAI->shoot.missCount;
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1042, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1043, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
    __debugbreak();
  return AIScriptedInterface::MissSentient(wp, pTargetSentient, accuracy);
}

/*
==============
AIScriptedInterface::ShootSentient
==============
*/
_BOOL8 AIScriptedInterface::ShootSentient(AIScriptedInterface *this, sentient_s *pTargetSentient, BgWeaponParms *wp, float accuracyMod, bool bDontChangeTargetPosOnHit, bool *bCleanMiss)
{
  double FinalAccuracy; 
  float v10; 
  double v11; 
  int v13; 

  FinalAccuracy = AIScriptedInterface::GetFinalAccuracy(this, pTargetSentient, wp, accuracyMod);
  v10 = *(float *)&FinalAccuracy;
  v11 = G_random();
  if ( v10 <= *(float *)&v11 )
  {
    ++this->m_pAI->shoot.missCount;
    if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1042, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
      __debugbreak();
    if ( !pTargetSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_aim.cpp", 1043, ASSERT_TYPE_ASSERT, "(pTargetSentient)", (const char *)&queryFormat, "pTargetSentient") )
      __debugbreak();
    v13 = AIScriptedInterface::MissSentient(wp, pTargetSentient, v10);
    *bCleanMiss = v13 != 0;
    return v13 != 0;
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
      AIScriptedInterface::HitSentient(this, wp, pTargetSentient, v10);
    }
    return 1i64;
  }
}

