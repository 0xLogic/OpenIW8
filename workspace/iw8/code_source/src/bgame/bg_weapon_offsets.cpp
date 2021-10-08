/*
==============
WeaponOffsetCurve::GetAdsBlendCurveFractionDelta
==============
*/

double __fastcall WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, int *outAdjustedBlendTime)
{
  double result; 

  *(float *)&result = ?GetAdsBlendCurveFractionDelta@WeaponOffsetCurve@@QEBAMPEBVBgWeaponMap@@PEBUplayerState_s@@HPEAH@Z(this, weaponMap, ps, serverTime, outAdjustedBlendTime);
  return result;
}

/*
==============
WeaponOffsetCurve::GetShotDecayFireTimeFrac
==============
*/

double __fastcall WeaponOffsetCurve::GetShotDecayFireTimeFrac(WeaponOffsetCurve *this)
{
  double result; 

  *(float *)&result = ?GetShotDecayFireTimeFrac@WeaponOffsetCurve@@QEBAMXZ(this);
  return result;
}

/*
==============
WeaponOffsetPattern::CalculatePatternWeight
==============
*/

void __fastcall WeaponOffsetPattern::CalculatePatternWeight(WeaponOffsetPattern *this, const int serverTime, const BgWeaponMap *weaponMap, WeaponOffsetPatternCache *cache, float *outPatternStrength, vec3_t *outPatternScale)
{
  ?CalculatePatternWeight@WeaponOffsetPattern@@AEBAXHPEBVBgWeaponMap@@PEAUWeaponOffsetPatternCache@@AEAMAEATvec3_t@@@Z(this, serverTime, weaponMap, cache, outPatternStrength, outPatternScale);
}

/*
==============
WeaponOffsetPattern::GetScales
==============
*/

void __fastcall WeaponOffsetPattern::GetScales(WeaponOffsetPattern *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const scr_string_t patternKey, const float adsFraction, const Weapon *r_currentWeapon, const bool isAlternate, WeaponOffsetPatternCache *cache, vec3_t *outAttachmentScale, vec3_t *outCrouchScale, vec3_t *outProneScale, vec3_t *outMountScale)
{
  ?GetScales@WeaponOffsetPattern@@AEBAXPEBVBgWeaponMap@@PEBUplayerState_s@@W4scr_string_t@@MAEBUWeapon@@_NPEAUWeaponOffsetPatternCache@@AEATvec3_t@@666@Z(this, weaponMap, ps, patternKey, adsFraction, r_currentWeapon, isAlternate, cache, outAttachmentScale, outCrouchScale, outProneScale, outMountScale);
}

/*
==============
WeaponOffsetCurve::ApplyInterpolationType
==============
*/

double __fastcall WeaponOffsetCurve::ApplyInterpolationType(const float curveFraction, const WeaponOffsetBlendInterpolationType interpType)
{
  double result; 

  *(float *)&result = ?ApplyInterpolationType@WeaponOffsetCurve@@KAMMW4WeaponOffsetBlendInterpolationType@@@Z(curveFraction, interpType);
  return result;
}

/*
==============
BG_WeaponOffsets_OnWeaponChange
==============
*/

void __fastcall BG_WeaponOffsets_OnWeaponChange(playerState_s *ps)
{
  ?BG_WeaponOffsets_OnWeaponChange@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_WeaponOffsets_GetCurveFraction
==============
*/

double __fastcall BG_WeaponOffsets_GetCurveFraction(const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponDef *weapDef, const WeaponOffsetPatternDescription *patternDesc)
{
  double result; 

  *(float *)&result = ?BG_WeaponOffsets_GetCurveFraction@@YAMPEBVBgWeaponMap@@PEBUplayerState_s@@HPEBUWeaponDef@@PEBUWeaponOffsetPatternDescription@@@Z(weaponMap, ps, serverTime, weapDef, patternDesc);
  return result;
}

/*
==============
WeaponOffsetPattern::Update
==============
*/

void __fastcall WeaponOffsetPattern::Update(WeaponOffsetPattern *this, const int serverTime, const BgWeaponMap *weaponMap, vec3_t *outOffset, vec3_t *outCombinesAngles, WeaponOffsetPatternCache *cache)
{
  ?Update@WeaponOffsetPattern@@QEAAXHPEBVBgWeaponMap@@AEATvec3_t@@1PEAUWeaponOffsetPatternCache@@@Z(this, serverTime, weaponMap, outOffset, outCombinesAngles, cache);
}

/*
==============
WeaponOffsetCurve::GetAdsFractionEnd
==============
*/

double __fastcall WeaponOffsetCurve::GetAdsFractionEnd(WeaponOffsetCurve *this)
{
  double result; 

  *(float *)&result = ?GetAdsFractionEnd@WeaponOffsetCurve@@QEBAMXZ(this);
  return result;
}

/*
==============
PM_WeaponOffsets_Update
==============
*/

void __fastcall PM_WeaponOffsets_Update(pmove_t *pm, pml_t *pml)
{
  ?PM_WeaponOffsets_Update@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
WeaponOffsetCurve::CalculateBlendCurrentFractionDelta
==============
*/

double __fastcall WeaponOffsetCurve::CalculateBlendCurrentFractionDelta(const int currentTime, const int startTime, const float startFraction, const float isBlendingIn, const float blendTime, const WeaponOffsetBlendInterpolationType interpType, int *outAdjustedBlendTime)
{
  double result; 

  *(float *)&result = ?CalculateBlendCurrentFractionDelta@WeaponOffsetCurve@@KAMHHMMMW4WeaponOffsetBlendInterpolationType@@PEAH@Z(currentTime, startTime, startFraction, isBlendingIn, blendTime, interpType, outAdjustedBlendTime);
  return result;
}

/*
==============
WeaponOffsetCurve::WeaponOffsetCurve
==============
*/

void __fastcall WeaponOffsetCurve::WeaponOffsetCurve(WeaponOffsetCurve *this, const WeaponDef *weapDef, WeaponOffsetBlendCurveId type)
{
  ??0WeaponOffsetCurve@@QEAA@PEBUWeaponDef@@W4WeaponOffsetBlendCurveId@@@Z(this, weapDef, type);
}

/*
==============
WeaponOffsetCurve::GetCurveStartFractionFromType
==============
*/

double __fastcall WeaponOffsetCurve::GetCurveStartFractionFromType(WeaponOffsetCurve *this, const playerState_s *ps, WeaponOffsetBlendCurveId type)
{
  double result; 

  *(float *)&result = ?GetCurveStartFractionFromType@WeaponOffsetCurve@@IEBAMPEBUplayerState_s@@W4WeaponOffsetBlendCurveId@@@Z(this, ps, type);
  return result;
}

/*
==============
WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta
==============
*/

double __fastcall WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(WeaponOffsetCurve *this, const playerState_s *ps, const int serverTime)
{
  double result; 

  *(float *)&result = ?GetHoldFireBlendCurveFractionDelta@WeaponOffsetCurve@@IEBAMPEBUplayerState_s@@H@Z(this, ps, serverTime);
  return result;
}

/*
==============
WeaponOffsetCurve::GetCurveTimeFromType
==============
*/

int __fastcall WeaponOffsetCurve::GetCurveTimeFromType(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, WeaponOffsetBlendCurveId type)
{
  return ?GetCurveTimeFromType@WeaponOffsetCurve@@IEBAHPEBVBgWeaponMap@@PEBUplayerState_s@@W4WeaponOffsetBlendCurveId@@@Z(this, weaponMap, ps, type);
}

/*
==============
WeaponOffsetCurve::GetCurrentFullAutoScale
==============
*/

double __fastcall WeaponOffsetCurve::GetCurrentFullAutoScale(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  double result; 

  *(float *)&result = ?GetCurrentFullAutoScale@WeaponOffsetCurve@@IEBAMPEBVBgWeaponMap@@PEBUplayerState_s@@HPEBUWeaponOffsetPatternDescription@@@Z(this, weaponMap, ps, serverTime, patternDesc);
  return result;
}

/*
==============
BG_WeaponOffsets_AdsUpdate
==============
*/

void __fastcall BG_WeaponOffsets_AdsUpdate(playerState_s *ps, const BgHandler *handler)
{
  ?BG_WeaponOffsets_AdsUpdate@@YAXPEAUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
WeaponOffsetCurve::GetCounterInterpolationType
==============
*/

WeaponOffsetBlendInterpolationType __fastcall WeaponOffsetCurve::GetCounterInterpolationType(const WeaponOffsetBlendInterpolationType interpType)
{
  return ?GetCounterInterpolationType@WeaponOffsetCurve@@KA?AW4WeaponOffsetBlendInterpolationType@@W42@@Z(interpType);
}

/*
==============
BG_WeaponOffsets_ApplyViewTranslation
==============
*/

void __fastcall BG_WeaponOffsets_ApplyViewTranslation(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outOrigin)
{
  ?BG_WeaponOffsets_ApplyViewTranslation@@YAXPEBUplayerState_s@@HPEBVBgHandler@@AEATvec3_t@@@Z(ps, serverTime, handler, outOrigin);
}

/*
==============
WeaponOffsetCurve::GetAdsFractionBegin
==============
*/

double __fastcall WeaponOffsetCurve::GetAdsFractionBegin(WeaponOffsetCurve *this)
{
  double result; 

  *(float *)&result = ?GetAdsFractionBegin@WeaponOffsetCurve@@QEBAMXZ(this);
  return result;
}

/*
==============
BG_WeaponOffsets_ApplyWeaponTranslation
==============
*/

void __fastcall BG_WeaponOffsets_ApplyWeaponTranslation(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outOrigin)
{
  ?BG_WeaponOffsets_ApplyWeaponTranslation@@YAXPEBUplayerState_s@@HPEBVBgHandler@@AEATvec3_t@@@Z(ps, serverTime, handler, outOrigin);
}

/*
==============
WeaponOffsetPattern::FindPatternScale
==============
*/

void __fastcall WeaponOffsetPattern::FindPatternScale(const scr_string_t patternKey, const WeaponOffsetPatternScaleInfo *scales, const float adsFraction, const bool applyAtHip, vec3_t *outScales)
{
  ?FindPatternScale@WeaponOffsetPattern@@CAXW4scr_string_t@@PEBUWeaponOffsetPatternScaleInfo@@M_NAEATvec3_t@@@Z(patternKey, scales, adsFraction, applyAtHip, outScales);
}

/*
==============
PM_WeaponOffsets_FireWeapon
==============
*/

void __fastcall PM_WeaponOffsets_FireWeapon(pmove_t *pm)
{
  ?PM_WeaponOffsets_FireWeapon@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
WeaponOffsetCurve::PickInterpolationType
==============
*/

WeaponOffsetBlendInterpolationType __fastcall WeaponOffsetCurve::PickInterpolationType(const bool isBlendingIn, const WeaponOffsetBlendInterpolationType interpTypeIn, const WeaponOffsetBlendInterpolationType interpTypeOut)
{
  return ?PickInterpolationType@WeaponOffsetCurve@@KA?AW4WeaponOffsetBlendInterpolationType@@_NW42@1@Z(isBlendingIn, interpTypeIn, interpTypeOut);
}

/*
==============
WeaponOffsetCurve::GetBlendTimeScale
==============
*/

double __fastcall WeaponOffsetCurve::GetBlendTimeScale(const float fractionToFinishBlend, const WeaponOffsetBlendInterpolationType interpType)
{
  double result; 

  *(float *)&result = ?GetBlendTimeScale@WeaponOffsetCurve@@KAMMW4WeaponOffsetBlendInterpolationType@@@Z(fractionToFinishBlend, interpType);
  return result;
}

/*
==============
WeaponOffsetCurve::GetSnapDecayBlendCurve
==============
*/

double __fastcall WeaponOffsetCurve::GetSnapDecayBlendCurve(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  double result; 

  *(float *)&result = ?GetSnapDecayBlendCurve@WeaponOffsetCurve@@IEBAMPEBVBgWeaponMap@@PEBUplayerState_s@@HPEBUWeaponOffsetPatternDescription@@@Z(this, weaponMap, ps, serverTime, patternDesc);
  return result;
}

/*
==============
WeaponOffsetPattern::UpdateRandomPatternSpline
==============
*/

void __fastcall WeaponOffsetPattern::UpdateRandomPatternSpline(WeaponOffsetPattern *this, WeaponOffsetPatternCache *cache, const int periodIndex)
{
  ?UpdateRandomPatternSpline@WeaponOffsetPattern@@AEBAXPEAUWeaponOffsetPatternCache@@H@Z(this, cache, periodIndex);
}

/*
==============
WeaponOffsetCurve::GetHoldTime
==============
*/

double __fastcall WeaponOffsetCurve::GetHoldTime(WeaponOffsetCurve *this)
{
  double result; 

  *(float *)&result = ?GetHoldTime@WeaponOffsetCurve@@QEBAMXZ(this);
  return result;
}

/*
==============
WeaponOffsetPattern::WeaponOffsetPattern
==============
*/

void __fastcall WeaponOffsetPattern::WeaponOffsetPattern(WeaponOffsetPattern *this, const playerState_s *ps, int weapHand, const WeaponDef *weapDef, const WeaponOffsetPatternDescription *patternDesc)
{
  ??0WeaponOffsetPattern@@QEAA@PEBUplayerState_s@@HPEBUWeaponDef@@PEBUWeaponOffsetPatternDescription@@@Z(this, ps, weapHand, weapDef, patternDesc);
}

/*
==============
WeaponOffsetCurve::GetKickBlendCurve
==============
*/

double __fastcall WeaponOffsetCurve::GetKickBlendCurve(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  double result; 

  *(float *)&result = ?GetKickBlendCurve@WeaponOffsetCurve@@IEBAMPEBVBgWeaponMap@@PEBUplayerState_s@@HPEBUWeaponOffsetPatternDescription@@@Z(this, weaponMap, ps, serverTime, patternDesc);
  return result;
}

/*
==============
BG_WeaponOffsets_ApplyWeaponAngles
==============
*/

void __fastcall BG_WeaponOffsets_ApplyWeaponAngles(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30])
{
  ?BG_WeaponOffsets_ApplyWeaponAngles@@YAXPEBUplayerState_s@@HPEBVBgHandler@@AEATvec3_t@@PEAY0BO@T3@@Z(ps, serverTime, handler, outCombinedAngles, outAnglesCategorized);
}

/*
==============
BG_WeaponOffsets_ApplyViewAngles
==============
*/

void __fastcall BG_WeaponOffsets_ApplyViewAngles(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outAngles)
{
  ?BG_WeaponOffsets_ApplyViewAngles@@YAXPEBUplayerState_s@@HPEBVBgHandler@@AEATvec3_t@@@Z(ps, serverTime, handler, outAngles);
}

/*
==============
WeaponOffsetCurve::GetCurrentCurveFraction
==============
*/

double __fastcall WeaponOffsetCurve::GetCurrentCurveFraction(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  double result; 

  *(float *)&result = ?GetCurrentCurveFraction@WeaponOffsetCurve@@QEBAMPEBVBgWeaponMap@@PEBUplayerState_s@@HPEBUWeaponOffsetPatternDescription@@@Z(this, weaponMap, ps, serverTime, patternDesc);
  return result;
}

/*
==============
WeaponOffsetCurve::WeaponOffsetCurve
==============
*/
void WeaponOffsetCurve::WeaponOffsetCurve(WeaponOffsetCurve *this, const WeaponDef *weapDef, WeaponOffsetBlendCurveId type)
{
  WeaponOffsetCurveDescription *p_weaponOffsetCurveHoldFireSlow; 

  p_weaponOffsetCurveHoldFireSlow = NULL;
  this->m_type = type;
  switch ( type )
  {
    case WOBC_HOLD_FIRE_BLEND_SLOW:
      p_weaponOffsetCurveHoldFireSlow = &weapDef->weaponOffsetCurveHoldFireSlow;
      break;
    case WOBC_HOLD_FIRE_BLEND_FAST:
      p_weaponOffsetCurveHoldFireSlow = &weapDef->weaponOffsetCurveHoldFireFast;
      break;
    case WOBC_KICK_BLEND:
      p_weaponOffsetCurveHoldFireSlow = &weapDef->weaponOffsetCurveKick;
      break;
    case WOBC_SNAP_DECAY_BLEND:
      p_weaponOffsetCurveHoldFireSlow = &weapDef->weaponOffsetCurveSnapDecay;
      break;
    case WOBC_ADS_BLEND:
      p_weaponOffsetCurveHoldFireSlow = &weapDef->weaponOffsetCurveAds;
      break;
    case WOBC_ALWAYS_ON:
      p_weaponOffsetCurveHoldFireSlow = &weapDef->weaponOffsetCurveAlwaysOn;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 133, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled blend curve! %d", type) )
        __debugbreak();
      break;
  }
  this->m_blendTime = p_weaponOffsetCurveHoldFireSlow->blendTime;
  this->m_holdTime = p_weaponOffsetCurveHoldFireSlow->holdTime;
  this->m_shotDecayFireTimeFrac = p_weaponOffsetCurveHoldFireSlow->shotDecayFireTimeFrac;
  this->m_decayTime = p_weaponOffsetCurveHoldFireSlow->decayTime;
  this->m_interpType = p_weaponOffsetCurveHoldFireSlow->interpType;
  this->m_interpTypeOut = p_weaponOffsetCurveHoldFireSlow->interpTypeOut;
  this->m_adsFractionBegin = p_weaponOffsetCurveHoldFireSlow->adsFractionBegin;
  this->m_adsFractionEnd = p_weaponOffsetCurveHoldFireSlow->adsFractionEnd;
}

/*
==============
WeaponOffsetPattern::WeaponOffsetPattern
==============
*/
void WeaponOffsetPattern::WeaponOffsetPattern(WeaponOffsetPattern *this, const playerState_s *ps, int weapHand, const WeaponDef *weapDef, const WeaponOffsetPatternDescription *patternDesc)
{
  this->m_ps = ps;
  this->m_desc = patternDesc;
  WeaponOffsetCurve::WeaponOffsetCurve(&this->m_curve, weapDef, patternDesc->curveType);
}

/*
==============
WeaponOffsetCurve::ApplyInterpolationType
==============
*/

double __fastcall WeaponOffsetCurve::ApplyInterpolationType(double curveFraction, const WeaponOffsetBlendInterpolationType interpType)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm0
    vmovss  xmm7, cs:__real@3f800000
    vucomiss xmm0, xmm7
  }
  switch ( interpType )
  {
    case WOBIT_LINEAR:
      goto $LN8_0;
    case WOBIT_CUBIC_EASE_IN:
      __asm
      {
        vmulss  xmm0, xmm6, xmm6; jumptable 000000014038AF92 case 1
        vmulss  xmm0, xmm0, xmm6
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      break;
    case WOBIT_CUBIC_EASE_OUT:
      __asm
      {
        vsubss  xmm1, xmm6, xmm7; jumptable 000000014038AF92 case 2
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm1
        vaddss  xmm0, xmm1, xmm7
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      break;
    case WOBIT_QUARTIC_EASE_IN:
      __asm
      {
        vmulss  xmm0, xmm6, xmm6; jumptable 000000014038AF92 case 3
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm0, xmm1, xmm6
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      break;
    case WOBIT_QUARTIC_EASE_OUT:
      __asm
      {
        vsubss  xmm2, xmm6, xmm7; jumptable 000000014038AF92 case 4
        vmulss  xmm0, xmm2, xmm2
        vmulss  xmm1, xmm0, xmm2
        vmulss  xmm2, xmm1, xmm2
        vsubss  xmm0, xmm7, xmm2
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      break;
    case WOBIT_EXPONENTIAL_EASE_IN:
      __asm
      {
        vsubss  xmm0, xmm6, xmm7; jumptable 000000014038AF92 case 5
        vmulss  xmm1, xmm0, cs:__real@41200000; Y
        vmovss  xmm0, cs:__real@40000000; X
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      break;
    case WOBIT_EXPONENTIAL_EASE_OUT:
      __asm
      {
        vmulss  xmm1, xmm6, cs:__real@c1200000; jumptable 000000014038AF92 case 6
        vmovss  xmm0, cs:__real@40000000; X
      }
      powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm0, xmm7, xmm0
        vmovaps xmm6, [rsp+58h+var_18]
        vmovaps xmm7, [rsp+58h+var_28]
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend interpolation type! %d", interpType) )
        __debugbreak();
$LN8_0:
      __asm
      {
        vmovaps xmm7, [rsp+58h+var_28]; jumptable 000000014038AF92 case 0
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      break;
  }
  return *(double *)&_XMM0;
}

/*
==============
BG_WeaponOffsets_AdsUpdate
==============
*/
void BG_WeaponOffsets_AdsUpdate(playerState_s *ps, const BgHandler *handler)
{
  const BgWeaponMap *v8; 
  WeaponOffsetBlendInterpolationType interpType; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  bool v19; 
  bool v20; 
  char v21; 
  bool v24; 
  WeaponOffsetCurve v29; 
  char v31; 
  void *retaddr; 
  int outAdjustedBlendTime; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBX = ps;
  __asm { vmovaps xmmword ptr [rax-48h], xmm8 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1377, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1378, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v8 = handler->GetWeaponMap(handler);
  _RAX = BG_WeaponOffsets_GetWeaponDef(v8, _RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+730h] }
  v29.m_type = WOBC_ADS_BLEND;
  interpType = _RAX->weaponOffsetCurveAds.interpType;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B7Ch]
    vmovss  xmm8, dword ptr [rax+0B88h]
    vmovss  xmm1, dword ptr [rax+0B80h]
    vmovss  xmm6, dword ptr [rax+0B8Ch]
    vmovss  [rsp+0A8h+var_78.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [rax+0B84h]
  }
  v29.m_interpType = interpType;
  interpTypeOut = _RAX->weaponOffsetCurveAds.interpTypeOut;
  __asm
  {
    vmovss  [rsp+0A8h+var_78.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [rax+0B90h]
  }
  v29.m_interpTypeOut = interpTypeOut;
  __asm
  {
    vmovss  [rsp+0A8h+var_78.m_adsFractionEnd], xmm0
    vmovss  [rsp+0A8h+var_78.m_holdTime], xmm8
    vmovss  [rsp+0A8h+var_78.m_decayTime], xmm1
    vmovss  [rsp+0A8h+var_78.m_adsFractionBegin], xmm6
  }
  v19 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x2Fu);
  v20 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 9u);
  v21 = 0;
  if ( !v20 )
  {
    __asm { vcomiss xmm7, xmm6 }
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x30u);
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( v21 )
  {
    if ( v19 )
    {
LABEL_19:
      v24 = 1;
      goto LABEL_20;
    }
  }
  else if ( v19 )
  {
    WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(&v29, v8, _RBX, _RBX->serverTime, &outAdjustedBlendTime);
    if ( !v20 )
      goto LABEL_19;
    __asm
    {
      vmulss  xmm0, xmm8, cs:__real@c47a0000
      vcvttss2si eax, xmm0
    }
    if ( _RBX->serverTime - _RBX->weapCommon.weaponOffsetAdsBlendTime >= outAdjustedBlendTime - _EAX )
      goto LABEL_19;
  }
  else if ( v20 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x30u) )
  {
    v24 = 0;
LABEL_20:
    BG_WeaponOffsets_ResetAdsBlend(_RBX, handler, v24);
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
BG_WeaponOffsets_ApplyTransformPattern
==============
*/
void BG_WeaponOffsets_ApplyTransformPattern(const playerState_s *ps, const int serverTime, const BgHandler *handler, WeaponOffsetTransformType patternType, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30])
{
  const BgWeaponMap *v9; 
  const WeaponDef *WeaponDef; 
  int v11; 
  __int64 v13; 
  WeaponOffsetPatternDescription *v14; 
  WeaponOffsetPatternCache *v15; 
  WeaponOffsetBlendCurveId curveType; 
  WeaponOffsetPatternCache *cache; 
  int serverTimea; 
  BgWeaponMap *weaponMap; 
  WeaponOffsetPattern v24; 
  vec3_t outOffset; 

  serverTimea = serverTime;
  Sys_ProfBeginNamedEvent(0xFF00FF00, "BG_WeaponOffsets_ApplyTransformPattern");
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 923, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps", serverTimea) )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 924, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v9 = handler->GetWeaponMap(handler);
  WeaponDef = BG_WeaponOffsets_GetWeaponDef(v9, ps);
  v11 = 0;
  weaponMap = (BgWeaponMap *)handler->GetWeaponMap(handler);
  if ( WeaponDef->numWeaponOffsetPatterns > 0 )
  {
    _RDI = &(*outAnglesCategorized)[18].v[2];
    v13 = 0i64;
    do
    {
      v14 = &WeaponDef->weaponOffsetPatterns[v13];
      if ( v14->transformType == patternType )
      {
        v15 = handler->PlayerWeaponOffsetPatternCache(handler, ps, (unsigned int)v11);
        curveType = v14->curveType;
        cache = v15;
        v24.m_desc = v14;
        v24.m_ps = ps;
        WeaponOffsetCurve::WeaponOffsetCurve(&v24.m_curve, WeaponDef, curveType);
        WeaponOffsetPattern::Update(&v24, serverTimea, weaponMap, &outOffset, outCombinedAngles, cache);
        if ( patternType == WOTT_WEAPON_ANGLES )
        {
          if ( outAnglesCategorized )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0E8h+outOffset]
              vmovss  xmm1, dword ptr [rsp+0E8h+outOffset+4]
              vmovss  dword ptr [rdi-8], xmm0
              vmovss  xmm0, dword ptr [rsp+0E8h+outOffset+8]
              vmovss  dword ptr [rdi], xmm0
              vmovss  dword ptr [rdi-4], xmm1
            }
          }
        }
      }
      ++v11;
      _RDI += 3;
      ++v13;
    }
    while ( v11 < WeaponDef->numWeaponOffsetPatterns );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_WeaponOffsets_ApplyViewAngles
==============
*/
void BG_WeaponOffsets_ApplyViewAngles(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outAngles)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1462, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1463, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !BG_ProceduralGunMotionDisabled(ps) )
    BG_WeaponOffsets_ApplyTransformPattern(ps, serverTime, handler, WOTT_VIEW_ANGLES, outAngles, NULL);
}

/*
==============
BG_WeaponOffsets_ApplyViewTranslation
==============
*/
void BG_WeaponOffsets_ApplyViewTranslation(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outOrigin)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1434, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1435, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !BG_ProceduralGunMotionDisabled(ps) )
    BG_WeaponOffsets_ApplyTransformPattern(ps, serverTime, handler, WOTT_VIEW_ORIGIN, outOrigin, NULL);
}

/*
==============
BG_WeaponOffsets_ApplyWeaponAngles
==============
*/
void BG_WeaponOffsets_ApplyWeaponAngles(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30])
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1476, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1477, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !BG_ProceduralGunMotionDisabled(ps) )
    BG_WeaponOffsets_ApplyTransformPattern(ps, serverTime, handler, WOTT_WEAPON_ANGLES, outCombinedAngles, outAnglesCategorized);
}

/*
==============
BG_WeaponOffsets_ApplyWeaponTranslation
==============
*/
void BG_WeaponOffsets_ApplyWeaponTranslation(const playerState_s *ps, const int serverTime, const BgHandler *handler, vec3_t *outOrigin)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1448, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1449, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !BG_ProceduralGunMotionDisabled(ps) )
    BG_WeaponOffsets_ApplyTransformPattern(ps, serverTime, handler, WOTT_WEAPON_ORIGIN, outOrigin, NULL);
}

/*
==============
BG_WeaponOffsets_AreAnyBulletBlendsActive
==============
*/
bool BG_WeaponOffsets_AreAnyBulletBlendsActive(const BgWeaponMap *weaponMap, const WeaponDef *weapDef, const playerState_s *ps)
{
  WeaponOffsetBlendInterpolationType interpType; 
  int v10; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  WeaponOffsetBlendInterpolationType v22; 
  WeaponOffsetBlendInterpolationType v25; 
  WeaponOffsetBlendInterpolationType v28; 
  WeaponOffsetBlendInterpolationType v31; 
  __int64 v33; 
  WeaponOffsetPatternDescription *weaponOffsetPatterns; 
  WeaponOffsetPatternDescription *v35; 
  char v36; 
  bool result; 
  WeaponOffsetCurve v39; 
  WeaponOffsetCurve v40; 
  WeaponOffsetCurve v41; 

  _R14 = weapDef;
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 888, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 889, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0BBCh]
    vmovss  xmm1, dword ptr [r14+0BC8h]
  }
  interpType = _R14->weaponOffsetCurveKick.interpType;
  v10 = 0;
  __asm
  {
    vmovss  [rbp+57h+var_A0.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [r14+0BC4h]
    vmovss  [rbp+57h+var_A0.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [r14+0BC0h]
    vmovss  [rbp+57h+var_A0.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [r14+0BCCh]
    vmovss  [rbp+57h+var_A0.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [r14+0BD0h]
    vmovss  [rbp+57h+var_A0.m_adsFractionBegin], xmm0
    vmovss  xmm0, dword ptr [r14+0BDCh]
    vmovss  [rbp+57h+var_A0.m_adsFractionEnd], xmm1
    vmovss  xmm1, dword ptr [r14+0BE8h]
    vmovss  [rbp+57h+var_78.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [r14+0BE4h]
    vmovss  [rbp+57h+var_78.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [r14+0BE0h]
  }
  v39.m_interpType = interpType;
  interpTypeOut = _R14->weaponOffsetCurveKick.interpTypeOut;
  __asm
  {
    vmovss  [rbp+57h+var_78.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [r14+0BECh]
    vmovss  [rbp+57h+var_78.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [r14+0BF0h]
  }
  v39.m_interpTypeOut = interpTypeOut;
  v22 = _R14->weaponOffsetCurveSnapDecay.interpType;
  __asm
  {
    vmovss  [rbp+57h+var_78.m_adsFractionBegin], xmm0
    vmovss  xmm0, dword ptr [r14+0B7Ch]
    vmovss  [rbp+57h+var_78.m_adsFractionEnd], xmm1
    vmovss  xmm1, dword ptr [r14+0B88h]
  }
  v40.m_interpType = v22;
  v25 = _R14->weaponOffsetCurveSnapDecay.interpTypeOut;
  __asm
  {
    vmovss  [rbp+57h+var_50.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [r14+0B84h]
    vmovss  [rbp+57h+var_50.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [r14+0B80h]
  }
  v40.m_interpTypeOut = v25;
  v28 = _R14->weaponOffsetCurveAds.interpType;
  __asm
  {
    vmovss  [rbp+57h+var_50.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [r14+0B8Ch]
    vmovss  [rbp+57h+var_50.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [r14+0B90h]
  }
  v41.m_interpType = v28;
  v31 = _R14->weaponOffsetCurveAds.interpTypeOut;
  __asm
  {
    vmovss  [rbp+57h+var_50.m_adsFractionBegin], xmm0
    vmovss  [rbp+57h+var_50.m_adsFractionEnd], xmm1
    vmovaps [rsp+0D0h+var_20], xmm6
  }
  v39.m_type = WOBC_KICK_BLEND;
  v40.m_type = WOBC_SNAP_DECAY_BLEND;
  v41.m_type = WOBC_ADS_BLEND;
  v41.m_interpTypeOut = v31;
  if ( _R14->numWeaponOffsetPatterns <= 0 )
  {
LABEL_16:
    result = 0;
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@3a83126f }
    v33 = 0i64;
    while ( 1 )
    {
      weaponOffsetPatterns = _R14->weaponOffsetPatterns;
      v35 = &weaponOffsetPatterns[v33];
      if ( weaponOffsetPatterns[v33].curveType == WOBC_KICK_BLEND )
      {
        *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v39, weaponMap, ps, ps->serverTime, &weaponOffsetPatterns[v33]);
        __asm { vcomiss xmm0, xmm6 }
        if ( !v36 )
          break;
      }
      if ( v35->curveType == WOBC_SNAP_DECAY_BLEND )
      {
        *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v40, weaponMap, ps, ps->serverTime, v35);
        __asm { vcomiss xmm0, xmm6 }
        if ( !v36 )
          break;
      }
      if ( v35->curveType == WOBC_ADS_BLEND )
      {
        *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v41, weaponMap, ps, ps->serverTime, v35);
        __asm { vcomiss xmm0, xmm6 }
        if ( !v36 )
          break;
      }
      ++v10;
      ++v33;
      if ( v10 >= _R14->numWeaponOffsetPatterns )
        goto LABEL_16;
    }
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+0D0h+var_20] }
  return result;
}

/*
==============
BG_WeaponOffsets_GetCurveFraction
==============
*/
float BG_WeaponOffsets_GetCurveFraction(const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponDef *weapDef, const WeaponOffsetPatternDescription *patternDesc)
{
  double CurrentCurveFraction; 
  WeaponOffsetCurve v11; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1490, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1491, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  WeaponOffsetCurve::WeaponOffsetCurve(&v11, weapDef, patternDesc->curveType);
  CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&v11, weaponMap, ps, serverTime, patternDesc);
  return *(float *)&CurrentCurveFraction;
}

/*
==============
BG_WeaponOffsets_GetFullAutoScale
==============
*/
float BG_WeaponOffsets_GetFullAutoScale(const WeaponDef *weapDef, const WeaponOffsetPatternDescription *pattern, const playerState_s *ps, const int fireTime)
{
  __int64 v41; 
  __int64 v42; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1098, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !pattern && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1099, ASSERT_TYPE_ASSERT, "(pattern)", (const char *)&queryFormat, "pattern") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1100, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( fireTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1101, ASSERT_TYPE_ASSERT, "(fireTime > 0)", (const char *)&queryFormat, "fireTime > 0") )
    __debugbreak();
  if ( pattern->fullAutoBullets < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1102, ASSERT_TYPE_ASSERT, "(pattern->fullAutoBullets >= 1)", (const char *)&queryFormat, "pattern->fullAutoBullets >= 1") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1061, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( pattern->kickOrSnapDecayIndex >= (unsigned int)weapDef->numWeaponOffsetPatternsKickOrSnapDecay )
  {
    LODWORD(v41) = pattern->kickOrSnapDecayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1063, ASSERT_TYPE_ASSERT, "(unsigned)( pattern->kickOrSnapDecayIndex ) < (unsigned)( weapDef->numWeaponOffsetPatternsKickOrSnapDecay )", "pattern->kickOrSnapDecayIndex doesn't index weapDef->numWeaponOffsetPatternsKickOrSnapDecay\n\t%i not in [0, %i)", v41, weapDef->numWeaponOffsetPatternsKickOrSnapDecay) )
      __debugbreak();
  }
  if ( (ps->weapCommon.weaponOffsetPatternFullAutoScale & (15 << (4 * LOBYTE(pattern->kickOrSnapDecayIndex)))) >> (4 * LOBYTE(pattern->kickOrSnapDecayIndex)) > 0xF )
  {
    LODWORD(v42) = 15;
    LODWORD(v41) = (ps->weapCommon.weaponOffsetPatternFullAutoScale & (15 << (4 * LOBYTE(pattern->kickOrSnapDecayIndex)))) >> (4 * LOBYTE(pattern->kickOrSnapDecayIndex));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1067, ASSERT_TYPE_ASSERT, "( quantizedScale ) <= ( ((1u << (4u)) - 1u) )", "quantizedScale not in [0, FULL_AUTO_SCALE_BITS_PER_PATTERN_MAX]\n\t%u not in [0, %u]", v41, v42) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, cs:__real@3d888889; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x31u) )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebp
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+38h]
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm2, xmm2, xmm0
      vcvttss2si ebx, xmm2
    }
    if ( ps->serverTimeInterpolated - ps->weapCommon.weaponOffsetSustainedFireStartTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1116, ASSERT_TYPE_ASSERT, "(currentSustainedFireTime >= 0)", (const char *)&queryFormat, "currentSustainedFireTime >= 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm0, xmm0, ebp
      vcvtsi2ss xmm3, xmm3, eax
      vdivss  xmm0, xmm3, xmm0
    }
    goto LABEL_35;
  }
  if ( ps->serverTimeInterpolated - ps->weapCommon.weaponOffsetSustainedFireStopTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1131, ASSERT_TYPE_ASSERT, "(currentNoFireTime >= 0)", (const char *)&queryFormat, "currentNoFireTime >= 0") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+3Ch]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  if ( _EAX )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm2, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm6, xmm2; val
    }
LABEL_35:
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return *(float *)&_XMM0;
}

/*
==============
BG_WeaponOffsets_GetWeaponDef
==============
*/
const WeaponDef *BG_WeaponOffsets_GetWeaponDef(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *ViewmodelWeapon; 
  bool v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 879, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 880, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  return BG_WeaponDef(ViewmodelWeapon, v5);
}

/*
==============
BG_WeaponOffsets_OnWeaponChange
==============
*/

void __fastcall BG_WeaponOffsets_OnWeaponChange(playerState_s *ps, double _XMM1_8)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1501, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  *(_QWORD *)&ps->weapCommon.weaponStartFireTime_BlendedOut = 0i64;
  *(_QWORD *)&ps->weapCommon.weaponOffsetHoldFireFastBlendTime = 0i64;
  *(_QWORD *)&ps->weapCommon.weaponOffsetPrevHoldFireBlendInDuration = 0i64;
  *(_QWORD *)&ps->weapCommon.weaponOffsetSustainedFireStopTime = 0i64;
  BG_SetHoldBlendFractionStartSlow(ps, *(float *)&_XMM1);
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  BG_SetHoldBlendFractionStartFast(ps, *(float *)&_XMM1);
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  BG_SetAdsBlendFractionStart(ps, *(float *)&_XMM1);
}

/*
==============
BG_WeaponOffsets_ResetAdsBlend
==============
*/
void BG_WeaponOffsets_ResetAdsBlend(playerState_s *ps, const BgHandler *handler, const bool isDecaying)
{
  const BgWeaponMap *v6; 
  const BgWeaponMap *v7; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  WeaponOffsetCurve v20; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1346, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1347, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v6 = handler->GetWeaponMap(handler);
  v7 = handler->GetWeaponMap(handler);
  _RAX = BG_WeaponOffsets_GetWeaponDef(v7, ps);
  serverTime = ps->serverTime;
  v20.m_type = WOBC_ADS_BLEND;
  interpType = _RAX->weaponOffsetCurveAds.interpType;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B7Ch]
    vmovss  xmm1, dword ptr [rax+0B88h]
    vmovss  [rsp+68h+var_38.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [rax+0B84h]
    vmovss  [rsp+68h+var_38.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B80h]
  }
  v20.m_interpType = interpType;
  interpTypeOut = _RAX->weaponOffsetCurveAds.interpTypeOut;
  __asm
  {
    vmovss  [rsp+68h+var_38.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [rax+0B8Ch]
    vmovss  [rsp+68h+var_38.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B90h]
  }
  v20.m_interpTypeOut = interpTypeOut;
  __asm
  {
    vmovss  [rsp+68h+var_38.m_adsFractionBegin], xmm0
    vmovss  [rsp+68h+var_38.m_adsFractionEnd], xmm1
  }
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v20, v6, ps, serverTime, NULL);
  __asm { vmovaps xmm1, xmm0; value }
  BG_SetAdsBlendFractionStart(ps, *(float *)&_XMM1);
  ps->weapCommon.weaponOffsetAdsBlendTime = ps->serverTime;
  p_weapFlags = &ps->weapCommon.weapFlags;
  if ( isDecaying )
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 0x2Fu);
  }
  else
  {
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 0x2Fu);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x30u);
  }
}

/*
==============
BG_WeaponOffsets_ResetHoldFireFastBlend
==============
*/
void BG_WeaponOffsets_ResetHoldFireFastBlend(playerState_s *ps, const BgHandler *handler)
{
  const BgWeaponMap *v4; 
  const BgWeaponMap *v5; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  WeaponOffsetCurve v17; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1013, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1014, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v4 = handler->GetWeaponMap(handler);
  v5 = handler->GetWeaponMap(handler);
  _RAX = BG_WeaponOffsets_GetWeaponDef(v5, ps);
  serverTime = ps->serverTime;
  v17.m_type = WOBC_HOLD_FIRE_BLEND_FAST;
  interpType = _RAX->weaponOffsetCurveHoldFireFast.interpType;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B5Ch]
    vmovss  xmm1, dword ptr [rax+0B68h]
    vmovss  [rsp+68h+var_38.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [rax+0B64h]
    vmovss  [rsp+68h+var_38.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B60h]
  }
  v17.m_interpType = interpType;
  interpTypeOut = _RAX->weaponOffsetCurveHoldFireFast.interpTypeOut;
  __asm
  {
    vmovss  [rsp+68h+var_38.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [rax+0B6Ch]
    vmovss  [rsp+68h+var_38.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B70h]
  }
  v17.m_interpTypeOut = interpTypeOut;
  __asm
  {
    vmovss  [rsp+68h+var_38.m_adsFractionBegin], xmm0
    vmovss  [rsp+68h+var_38.m_adsFractionEnd], xmm1
  }
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v17, v4, ps, serverTime, NULL);
  __asm { vmovaps xmm1, xmm0; value }
  BG_SetHoldBlendFractionStartFast(ps, *(float *)&_XMM1);
  ps->weapCommon.weaponOffsetHoldFireFastBlendTime = ps->serverTime;
}

/*
==============
BG_WeaponOffsets_ResetHoldFireSlowBlend
==============
*/
void BG_WeaponOffsets_ResetHoldFireSlowBlend(playerState_s *ps, const BgHandler *handler)
{
  const BgWeaponMap *v4; 
  const BgWeaponMap *v5; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  WeaponOffsetCurve v17; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 965, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 966, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v4 = handler->GetWeaponMap(handler);
  v5 = handler->GetWeaponMap(handler);
  _RAX = BG_WeaponOffsets_GetWeaponDef(v5, ps);
  serverTime = ps->serverTime;
  v17.m_type = WOBC_HOLD_FIRE_BLEND_SLOW;
  interpType = _RAX->weaponOffsetCurveHoldFireSlow.interpType;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B3Ch]
    vmovss  xmm1, dword ptr [rax+0B48h]
    vmovss  [rsp+68h+var_38.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [rax+0B44h]
    vmovss  [rsp+68h+var_38.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B40h]
  }
  v17.m_interpType = interpType;
  interpTypeOut = _RAX->weaponOffsetCurveHoldFireSlow.interpTypeOut;
  __asm
  {
    vmovss  [rsp+68h+var_38.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [rax+0B4Ch]
    vmovss  [rsp+68h+var_38.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B50h]
  }
  v17.m_interpTypeOut = interpTypeOut;
  __asm
  {
    vmovss  [rsp+68h+var_38.m_adsFractionBegin], xmm0
    vmovss  [rsp+68h+var_38.m_adsFractionEnd], xmm1
  }
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v17, v4, ps, serverTime, NULL);
  __asm { vmovaps xmm1, xmm0; value }
  BG_SetHoldBlendFractionStartSlow(ps, *(float *)&_XMM1);
  ps->weapCommon.weaponOffsetHoldFireSlowBlendTime = ps->serverTime;
}

/*
==============
BG_WeaponOffsets_SetFullAutoScaleMarker
==============
*/

void __fastcall BG_WeaponOffsets_SetFullAutoScaleMarker(const WeaponDef *weapDef, const WeaponOffsetPatternDescription *pattern, playerState_s *ps, double fullAutoScale)
{
  bool v11; 
  bool v12; 
  unsigned int v19; 
  int v20; 
  __int64 v22; 
  double v23; 
  __int64 v24; 
  double v25; 
  __int64 v26; 
  double v27; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1075, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !pattern && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1076, ASSERT_TYPE_ASSERT, "(pattern)", (const char *)&queryFormat, "pattern") )
    __debugbreak();
  v11 = ps == NULL;
  if ( !ps )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1077, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v11 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+68h+var_30], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_38], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1078, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fullAutoScale ) && ( fullAutoScale ) <= ( 1.0f )", "fullAutoScale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v23, v25, v27) )
      __debugbreak();
  }
  if ( pattern->kickOrSnapDecayIndex >= (unsigned int)weapDef->numWeaponOffsetPatternsKickOrSnapDecay )
  {
    LODWORD(v24) = weapDef->numWeaponOffsetPatternsKickOrSnapDecay;
    LODWORD(v22) = pattern->kickOrSnapDecayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1079, ASSERT_TYPE_ASSERT, "(unsigned)( pattern->kickOrSnapDecayIndex ) < (unsigned)( weapDef->numWeaponOffsetPatternsKickOrSnapDecay )", "pattern->kickOrSnapDecayIndex doesn't index weapDef->numWeaponOffsetPatternsKickOrSnapDecay\n\t%i not in [0, %i)", v22, v24) )
      __debugbreak();
  }
  if ( weapDef->numWeaponOffsetPatternsKickOrSnapDecay > 7u )
  {
    LODWORD(v26) = weapDef->numWeaponOffsetPatternsKickOrSnapDecay;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1082, ASSERT_TYPE_ASSERT, "( static_cast<uint>(weapDef->numWeaponOffsetPatternsKickOrSnapDecay) ) <= ( (7u) )", "%s <= %s\n\t%u, %u", "static_cast<uint>(weapDef->numWeaponOffsetPatternsKickOrSnapDecay)", "FULL_AUTO_SCALE_NUM_MAX_PATTERNS", v26, 7) )
      __debugbreak();
  }
  ps->weapCommon.weaponOffsetPatternFullAutoScale &= 0x1FFFFFFFu;
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@41700000
    vmovaps xmm6, [rsp+68h+var_18]
  }
  v19 = ps->weapCommon.weaponOffsetPatternFullAutoScale | (weapDef->numWeaponOffsetPatternsKickOrSnapDecay << 29);
  ps->weapCommon.weaponOffsetPatternFullAutoScale = v19;
  v20 = v19 & ~(15 << (4 * pattern->kickOrSnapDecayIndex));
  ps->weapCommon.weaponOffsetPatternFullAutoScale = v20;
  __asm { vcvttss2si rdx, xmm0 }
  if ( (int)_RDX > 15 )
    LODWORD(_RDX) = 15;
  if ( (int)_RDX < 0 )
    LODWORD(_RDX) = 0;
  ps->weapCommon.weaponOffsetPatternFullAutoScale = v20 | ((_DWORD)_RDX << (4 * pattern->kickOrSnapDecayIndex));
}

/*
==============
BG_WeaponOffsets_StopHoldFireFastBlend
==============
*/
void BG_WeaponOffsets_StopHoldFireFastBlend(playerState_s *ps, const BgHandler *handler)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1045, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1046, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Eu) )
  {
    BG_WeaponOffsets_ResetHoldFireFastBlend(ps, handler);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Eu);
  }
}

/*
==============
BG_WeaponOffsets_StopHoldFireSlowBlend
==============
*/
void BG_WeaponOffsets_StopHoldFireSlowBlend(playerState_s *ps, const BgHandler *handler)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 997, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 998, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Du) )
  {
    BG_WeaponOffsets_ResetHoldFireSlowBlend(ps, handler);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Du);
  }
}

/*
==============
WeaponOffsetCurve::CalculateBlendCurrentFractionDelta
==============
*/

float __fastcall WeaponOffsetCurve::CalculateBlendCurrentFractionDelta(const int currentTime, const int startTime, double startFraction, double isBlendingIn, const float blendTime, const WeaponOffsetBlendInterpolationType interpType, int *outAdjustedBlendTime)
{
  char v27; 
  char v28; 
  __int64 v58; 
  __int128 v59; 
  __int128 v60; 
  char v63; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !outAdjustedBlendTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 226, ASSERT_TYPE_ASSERT, "(outAdjustedBlendTime)", (const char *)&queryFormat, "outAdjustedBlendTime", v59, v60) )
    __debugbreak();
  __asm
  {
    vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm7, cs:__real@3f800000
    vsubss  xmm1, xmm7, xmm6
    vxorps  xmm8, xmm8, xmm8
    vcmpneqss xmm0, xmm9, xmm8
    vblendvps xmm0, xmm2, xmm1, xmm0; val
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm3, xmm1, [rsp+78h+blendTime]
    vmulss  xmm1, xmm3, cs:__real@447a0000
    vcvtss2sd xmm2, xmm3, xmm3
    vcomisd xmm2, cs:__real@3eb0c6f7a0b5ed8d
    vcvttss2si eax, xmm1
  }
  *outAdjustedBlendTime = _EAX;
  __asm { vmovaps xmm9, xmm0 }
  if ( v27 | v28 )
  {
    __asm { vmovaps xmm6, xmm7 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vdivss  xmm0, xmm1, xmm3; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vucomiss xmm0, xmm8
      vmovaps xmm6, xmm0
    }
    if ( !v28 )
    {
      __asm { vucomiss xmm0, xmm7 }
      switch ( interpType )
      {
        case WOBIT_LINEAR:
          break;
        case WOBIT_CUBIC_EASE_IN:
          __asm
          {
            vmulss  xmm0, xmm6, xmm6; jumptable 000000014038D587 case 1
            vmulss  xmm6, xmm0, xmm6
          }
          break;
        case WOBIT_CUBIC_EASE_OUT:
          __asm
          {
            vsubss  xmm1, xmm6, xmm7; jumptable 000000014038D587 case 2
            vmulss  xmm0, xmm1, xmm1
            vmulss  xmm1, xmm0, xmm1
            vaddss  xmm6, xmm1, xmm7
          }
          break;
        case WOBIT_QUARTIC_EASE_IN:
          __asm
          {
            vmulss  xmm0, xmm6, xmm6; jumptable 000000014038D587 case 3
            vmulss  xmm1, xmm0, xmm6
            vmulss  xmm6, xmm1, xmm6
          }
          break;
        case WOBIT_QUARTIC_EASE_OUT:
          __asm
          {
            vsubss  xmm2, xmm6, xmm7; jumptable 000000014038D587 case 4
            vmulss  xmm0, xmm2, xmm2
            vmulss  xmm1, xmm0, xmm2
            vmulss  xmm2, xmm1, xmm2
            vsubss  xmm6, xmm7, xmm2
          }
          break;
        case WOBIT_EXPONENTIAL_EASE_IN:
          __asm
          {
            vsubss  xmm0, xmm6, xmm7; jumptable 000000014038D587 case 5
            vmulss  xmm1, xmm0, cs:__real@41200000; Y
            vmovss  xmm0, cs:__real@40000000; X
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmovaps xmm6, xmm0 }
          break;
        case WOBIT_EXPONENTIAL_EASE_OUT:
          __asm
          {
            vmulss  xmm1, xmm6, cs:__real@c1200000; jumptable 000000014038D587 case 6
            vmovss  xmm0, cs:__real@40000000; X
          }
          powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vsubss  xmm6, xmm7, xmm0 }
          break;
        default:
          LODWORD(v58) = interpType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend interpolation type! %d", v58) )
            __debugbreak();
          break;
      }
    }
  }
  __asm { vmovaps xmm7, [rsp+78h+var_28]; jumptable 000000014038D587 case 0 }
  _R11 = &v63;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmulss  xmm0, xmm6, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetPattern::CalculatePatternWeight
==============
*/
void WeaponOffsetPattern::CalculatePatternWeight(WeaponOffsetPattern *this, const int serverTime, const BgWeaponMap *weaponMap, WeaponOffsetPatternCache *cache, float *outPatternStrength, vec3_t *outPatternScale)
{
  const dvar_t *v21; 
  char v27; 
  const WeaponOffsetPatternDescription *m_desc; 
  bool v30; 
  const Weapon *r_currentWeapon; 
  bool v37; 
  const playerState_s *m_ps; 
  bool isAlternate; 
  const playerState_s *v45; 
  scr_string_t patternKey; 
  float fmt; 
  vec3_t outCrouchScale; 
  vec3_t outAttachmentScale; 
  vec3_t outProneScale; 
  vec3_t outMountScale; 
  __int64 v114; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v114;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RSI = outPatternScale;
  _R14 = outPatternStrength;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 716, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v21 = DCONST_DVARBOOL_weaponOffsetsFullBlend;
  if ( !DCONST_DVARBOOL_weaponOffsetsFullBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "weaponOffsetsFullBlend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovaps xmm6, xmm9
      vmovaps xmm0, xmm9
    }
    *outPatternStrength = 1.0;
  }
  else
  {
    *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&this->m_curve, weaponMap, this->m_ps, serverTime, this->m_desc);
    __asm
    {
      vmovaps xmm2, xmm0
      vcvtss2sd xmm1, xmm2, xmm0
      vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v27 )
    {
      *outPatternStrength = 0.0;
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm0, xmm0, xmm0
      }
    }
    else
    {
      m_desc = this->m_desc;
      _RDX = this->m_ps;
      __asm
      {
        vmovaps xmmword ptr [rsp+140h+var_58+8], xmm7
        vmovaps [rsp+140h+var_68+8], xmm8
      }
      v30 = m_desc->curveType == WOBC_ADS_BLEND;
      __asm
      {
        vmovaps xmmword ptr [rsp+140h+var_88+8], xmm10
        vmovss  xmm10, cs:__real@3f800000
        vmovaps [rsp+140h+var_98+8], xmm11
      }
      if ( v30 )
      {
        __asm { vmovaps xmm0, xmm10 }
      }
      else
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rdx+730h]
          vsubss  xmm0, xmm10, xmm1
          vmulss  xmm0, xmm0, dword ptr [rax+28h]
          vaddss  xmm0, xmm0, xmm1
        }
      }
      __asm
      {
        vmulss  xmm0, xmm0, xmm2
        vmovss  dword ptr [r14], xmm0
      }
      r_currentWeapon = BG_GetViewmodelWeapon(weaponMap, _RDX);
      v37 = BG_UsingAlternate(this->m_ps);
      m_ps = this->m_ps;
      isAlternate = v37;
      if ( !m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1218, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      *(double *)&_XMM0 = BG_GetCrouchProneBlendMap(m_ps);
      __asm
      {
        vcomiss xmm0, cs:__real@3f000000
        vmovss  xmm6, cs:__real@40000000
        vmulss  xmm3, xmm0, xmm6
      }
      if ( !v27 )
        __asm { vsubss  xmm3, xmm6, xmm3 }
      __asm
      {
        vmovaps xmm2, xmm10; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm0, xmm3; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v45 = this->m_ps;
      __asm { vmovaps xmm11, xmm0 }
      if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      *(double *)&_XMM0 = BG_GetCrouchProneBlendMap(v45);
      __asm
      {
        vmulss  xmm2, xmm0, xmm6
        vsubss  xmm0, xmm2, xmm10; val
        vmovaps xmm2, xmm10; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _R8 = this->m_ps;
      __asm { vmovss  xmm8, dword ptr [r8+4C0h] }
      patternKey = this->m_desc->patternKey;
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  xmm0, dword ptr [r8+730h]
        vmovss  dword ptr [rsp+140h+fmt], xmm0
        vmovss  dword ptr [rsp+140h+var_D0], xmm10
        vmovss  dword ptr [rsp+140h+var_D0+4], xmm10
        vmovss  dword ptr [rsp+140h+var_D0+8], xmm10
        vmovss  dword ptr [rsp+140h+var_E0], xmm10
        vmovss  dword ptr [rsp+140h+var_E0+4], xmm10
        vmovss  dword ptr [rsp+140h+var_E0+8], xmm10
        vmovss  dword ptr [rbp+40h+var_C0], xmm10
        vmovss  dword ptr [rbp+40h+var_C0+4], xmm10
        vmovss  dword ptr [rbp+40h+var_C0+8], xmm10
        vmovss  dword ptr [rbp+40h+var_B0], xmm10
        vmovss  dword ptr [rbp+40h+var_B0+4], xmm10
        vmovss  dword ptr [rbp+40h+var_B0+8], xmm10
      }
      WeaponOffsetPattern::GetScales(this, weaponMap, _R8, patternKey, fmt, r_currentWeapon, isAlternate, cache, &outAttachmentScale, &outCrouchScale, &outProneScale, &outMountScale);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+var_E0+4]
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+40h+var_C0+4]
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm10
        vmulss  xmm4, xmm3, dword ptr [rsp+140h+var_D0+4]
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rsp+140h+var_E0+8]
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm10
        vmulss  xmm6, xmm4, xmm3
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+40h+var_C0+8]
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm10
        vmulss  xmm4, xmm3, dword ptr [rsp+140h+var_D0+8]
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+40h+var_B0+8]
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm10
        vmulss  xmm5, xmm4, xmm3
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+40h+var_B0+4]
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm10
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rsp+140h+var_E0]
        vmulss  xmm2, xmm1, xmm8
        vmulss  xmm9, xmm3, xmm5
        vaddss  xmm3, xmm2, xmm10
        vsubss  xmm1, xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+40h+var_C0]
        vmulss  xmm2, xmm1, xmm11
        vmovss  dword ptr [rsi+4], xmm6
        vmulss  xmm6, xmm3, xmm6
        vaddss  xmm3, xmm2, xmm10
        vmulss  xmm4, xmm3, dword ptr [rsp+140h+var_D0]
        vsubss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm10
        vmovss  dword ptr [rsi+8], xmm5
        vmovss  xmm0, dword ptr [rbp+40h+var_B0]
        vmovaps xmm11, [rsp+140h+var_98+8]
        vmovaps xmm7, xmmword ptr [rsp+140h+var_58+8]
        vsubss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm1, xmm8
        vmovaps xmm8, [rsp+140h+var_68+8]
        vmulss  xmm5, xmm4, xmm3
        vaddss  xmm3, xmm2, xmm10
        vmovaps xmm10, xmmword ptr [rsp+140h+var_88+8]
        vmulss  xmm0, xmm5, xmm3
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsi+4], xmm6
    vmovss  dword ptr [rsi+8], xmm9
  }
  _R11 = &v115;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
WeaponOffsetPattern::FindPatternScale
==============
*/

void __fastcall WeaponOffsetPattern::FindPatternScale(const scr_string_t patternKey, const WeaponOffsetPatternScaleInfo *scales, double adsFraction, const bool applyAtHip, vec3_t *outScales)
{
  int v12; 
  WeaponOffsetPatternScale *v13; 
  WeaponOffsetPatternScale *patternScales; 
  __int64 numPatternScales; 
  WeaponOffsetPatternScale *v16; 
  bool v17; 
  WeaponOffsetPatternScale *v18; 
  bool v21; 
  __int64 v29; 
  __int64 v30; 
  char v34; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm2
  }
  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 564, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  v12 = 0;
  v13 = NULL;
  if ( scales->numPatternScales > 0 )
  {
    patternScales = scales->patternScales;
    numPatternScales = (unsigned int)scales->numPatternScales;
    v16 = patternScales;
    do
    {
      v17 = patternScales->patternKey == patternKey;
      ++patternScales;
      v18 = v16;
      if ( !v17 )
        v18 = v13;
      ++v16;
      v13 = v18;
      --numPatternScales;
    }
    while ( numPatternScales );
  }
  _RDI = outScales;
  if ( v13 )
  {
    *outScales = v13->scale;
    if ( !applyAtHip )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovaps [rsp+78h+var_18], xmm6
        vmovaps [rsp+78h+var_28], xmm7
      }
      v21 = 1;
      __asm { vsubss  xmm7, xmm0, xmm8 }
      do
      {
        if ( !v21 )
        {
          LODWORD(v30) = 3;
          LODWORD(v29) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm8, dword ptr [rdi]
          vaddss  xmm6, xmm0, xmm7
        }
        if ( (unsigned int)v12 >= 3 )
        {
          LODWORD(v30) = 3;
          LODWORD(v29) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
        _RDI = (vec3_t *)((char *)_RDI + 4);
        v21 = (unsigned int)++v12 < 3;
      }
      while ( v12 < 3 );
      __asm
      {
        vmovaps xmm7, [rsp+78h+var_28]
        vmovaps xmm6, [rsp+78h+var_18]
      }
    }
  }
  else
  {
    outScales->v[0] = 1.0;
    outScales->v[1] = 1.0;
    outScales->v[2] = 1.0;
  }
  _R11 = &v34;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
}

/*
==============
WeaponOffsetCurve::GetAdsBlendCurveFractionDelta
==============
*/
float WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, int *outAdjustedBlendTime)
{
  int CurveTimeFromType; 
  bool v15; 
  WeaponOffsetBlendInterpolationType v16; 
  const Weapon *ViewmodelWeapon; 
  bool v18; 
  char v19; 
  char v22; 
  double v38; 
  float outAdsTransInSpeedMs; 
  double v42; 
  double v43; 
  float v46; 
  float outAdsTransOutSpeedMs; 

  __asm { vmovaps [rsp+0A8h+var_58], xmm7 }
  _RDI = this;
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(this, NULL, ps, this->m_type);
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurveStartFractionFromType(_RDI, ps, _RDI->m_type);
  __asm { vmovaps xmm7, xmm0 }
  v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Fu);
  v16 = WeaponOffsetCurve::PickInterpolationType(v15, (const WeaponOffsetBlendInterpolationType)_RDI->m_interpType, (const WeaponOffsetBlendInterpolationType)_RDI->m_interpTypeOut);
  if ( v15 )
  {
    __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    v18 = BG_UsingAlternate(ps);
    BG_GetADSTransTimes(weaponMap, ps, ViewmodelWeapon, v18, &v46, &outAdsTransOutSpeedMs);
    __asm
    {
      vmovss  xmm1, [rsp+0A8h+arg_0]
      vcvtss2sd xmm0, xmm1, xmm1
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v19 | v22 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm6, xmm0, xmm1
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+18h]
      vmovss  xmm0, dword ptr [rdi+14h]
      vcomiss xmm1, xmm0
    }
    if ( v19 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_68], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0A8h+var_70], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 423, ASSERT_TYPE_ASSERT, "( m_adsFractionEnd ) >= ( m_adsFractionBegin )", "%s >= %s\n\t%g, %g", "m_adsFractionEnd", "m_adsFractionBegin", v42, v43) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vsubss  xmm1, xmm0, dword ptr [rdi+14h]
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm4, xmm2, cs:__real@3a83126f
      vmovaps xmm6, [rsp+0A8h+var_48]
    }
  }
  else
  {
    __asm { vmovss  xmm4, dword ptr [rdi+10h] }
  }
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax; isBlendingIn
    vmovaps xmm2, xmm7; startFraction
    vmovss  dword ptr [rsp+0A8h+outAdsTransInSpeedMs], xmm4
  }
  v38 = WeaponOffsetCurve::CalculateBlendCurrentFractionDelta(serverTime, CurveTimeFromType, *(const float *)&_XMM2, *(const float *)&_XMM3, outAdsTransInSpeedMs, v16, outAdjustedBlendTime);
  __asm { vmovaps xmm7, [rsp+0A8h+var_58] }
  return *(float *)&v38;
}

/*
==============
WeaponOffsetCurve::GetAdsFractionBegin
==============
*/
float WeaponOffsetCurve::GetAdsFractionBegin(WeaponOffsetCurve *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+14h] }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetAdsFractionEnd
==============
*/
float WeaponOffsetCurve::GetAdsFractionEnd(WeaponOffsetCurve *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+18h] }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetBlendTimeScale
==============
*/

float __fastcall WeaponOffsetCurve::GetBlendTimeScale(double fractionToFinishBlend, const WeaponOffsetBlendInterpolationType interpType)
{
  __asm { vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetCounterInterpolationType
==============
*/
__int64 WeaponOffsetCurve::GetCounterInterpolationType(const WeaponOffsetBlendInterpolationType interpType)
{
  __int64 result; 

  switch ( interpType )
  {
    case WOBIT_LINEAR:
      goto $LN4_0;
    case WOBIT_CUBIC_EASE_IN:
      result = 2i64;
      break;
    case WOBIT_CUBIC_EASE_OUT:
      result = 1i64;
      break;
    case WOBIT_QUARTIC_EASE_IN:
      result = 4i64;
      break;
    case WOBIT_QUARTIC_EASE_OUT:
      result = 3i64;
      break;
    case WOBIT_EXPONENTIAL_EASE_IN:
      result = 6i64;
      break;
    case WOBIT_EXPONENTIAL_EASE_OUT:
      result = 5i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 310, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend interpolation type! %d", interpType) )
        __debugbreak();
$LN4_0:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
WeaponOffsetCurve::GetCurrentCurveFraction
==============
*/
float WeaponOffsetCurve::GetCurrentCurveFraction(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  WeaponOffsetBlendCurveId m_type; 
  unsigned int CurveTimeFromType; 
  unsigned int v39; 
  int v46; 
  int WeaponHand; 
  int *p_weaponPrevFireTime; 
  __int64 v49; 
  int v50; 
  __int64 v64; 
  int outAdjustedBlendTime; 

  _RSI = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 437, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_type = _RSI->m_type;
  _R14 = patternDesc;
  if ( ((_RSI->m_type & 0xFFFFFFFA) != 0 || m_type == WOBC_ALWAYS_ON) && (((m_type - 2) & 0xFFFFFFFC) != 0 || m_type == WOBC_ADS_BLEND || !patternDesc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 443, ASSERT_TYPE_ASSERT, "(((m_type == WOBC_HOLD_FIRE_BLEND_SLOW) || (m_type == WOBC_HOLD_FIRE_BLEND_FAST) || (m_type == WOBC_ADS_BLEND)) || (((m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND) || (m_type == WOBC_ALWAYS_ON)) && patternDesc))", (const char *)&queryFormat, "((m_type == WOBC_HOLD_FIRE_BLEND_SLOW) || (m_type == WOBC_HOLD_FIRE_BLEND_FAST) || (m_type == WOBC_ADS_BLEND)) || (((m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND) || (m_type == WOBC_ALWAYS_ON)) && patternDesc)") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps [rsp+98h+var_58], xmm8
    vmovaps [rsp+98h+var_68], xmm9
  }
  switch ( _RSI->m_type )
  {
    case WOBC_HOLD_FIRE_BLEND_SLOW:
      *(double *)&_XMM0 = WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(_RSI, ps, serverTime);
      __asm { vmovaps xmm6, xmm0 }
      BG_GetHoldBlendFractionStartSlow(ps);
      goto LABEL_13;
    case WOBC_HOLD_FIRE_BLEND_FAST:
      *(double *)&_XMM0 = WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(_RSI, ps, serverTime);
      __asm { vmovaps xmm6, xmm0 }
      BG_GetHoldBlendFractionStartFast(ps);
      goto LABEL_13;
    case WOBC_KICK_BLEND:
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 365, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 366, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
        __debugbreak();
      CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(_RSI, weaponMap, ps, _RSI->m_type);
      __asm { vxorps  xmm9, xmm9, xmm9 }
      if ( !CurveTimeFromType )
        goto LABEL_26;
      __asm
      {
        vmovss  xmm1, dword ptr [r14+18h]
        vcomiss xmm1, xmm9
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
      }
      if ( serverTime <= CurveTimeFromType )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+4]
          vcomiss xmm1, xmm9
        }
        if ( serverTime <= CurveTimeFromType )
          goto LABEL_26;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3a83126f
        vdivss  xmm1, xmm0, xmm1
        vmulss  xmm0, xmm1, xmm2; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmulss  xmm0, xmm0, cs:__real@40490fdb; X }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentFullAutoScale(_RSI, weaponMap, ps, serverTime, _R14);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      goto LABEL_25;
    case WOBC_SNAP_DECAY_BLEND:
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 319, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
        __debugbreak();
      v39 = WeaponOffsetCurve::GetCurveTimeFromType(_RSI, weaponMap, ps, _RSI->m_type);
      __asm { vxorps  xmm9, xmm9, xmm9 }
      if ( !v39 )
        goto LABEL_26;
      __asm
      {
        vmovss  xmm6, dword ptr [r14+18h]
        vmovss  xmm7, cs:__real@3a83126f
        vcomiss xmm6, xmm9
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
      }
      if ( serverTime <= v39 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+4]
          vcomiss xmm6, xmm9
        }
        if ( serverTime <= v39 )
          goto LABEL_26;
      }
      if ( v39 == serverTime )
      {
        v46 = 0;
        WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
        if ( WeaponHand >= 0 )
        {
          p_weaponPrevFireTime = &ps->weapState[0].weaponPrevFireTime;
          v49 = WeaponHand + 1i64;
          do
          {
            v50 = *p_weaponPrevFireTime;
            p_weaponPrevFireTime += 20;
            if ( v46 > v50 )
              v50 = v46;
            v46 = v50;
            --v49;
          }
          while ( v49 );
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm7
        }
      }
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vdivss  xmm0, xmm1, xmm6; val
        vmovaps xmm2, xmm8; max
        vmovaps xmm1, xmm9; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@40490fdb
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vaddss  xmm0, xmm1, cs:__real@40490fdb; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm { vaddss  xmm7, xmm0, xmm8 }
      *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentFullAutoScale(_RSI, weaponMap, ps, serverTime, _R14);
      __asm
      {
        vmovaps xmm2, xmm8
        vmovaps xmm1, xmm9
      }
LABEL_25:
      __asm
      {
        vmovaps xmm6, xmm0
        vmovaps xmm0, xmm7; val
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmulss  xmm9, xmm6, xmm0 }
LABEL_26:
      __asm { vmovaps xmm0, xmm9 }
      break;
    case WOBC_ADS_BLEND:
      *(double *)&_XMM0 = WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(_RSI, weaponMap, ps, serverTime, &outAdjustedBlendTime);
      __asm { vmovaps xmm6, xmm0 }
      BG_GetAdsBlendFractionStart(ps);
LABEL_13:
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vaddss  xmm0, xmm6, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      break;
    case WOBC_ALWAYS_ON:
      __asm { vmovss  xmm0, cs:__real@3f800000; jumptable 000000014038E34E case 5 }
      break;
    default:
      LODWORD(v64) = _RSI->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 461, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend curve! %d", v64) )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
      break;
  }
  __asm
  {
    vmovaps xmm9, [rsp+98h+var_68]
    vmovaps xmm8, [rsp+98h+var_58]
    vmovaps xmm7, [rsp+98h+var_48]
    vmovaps xmm6, [rsp+98h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetCurrentFullAutoScale
==============
*/
float WeaponOffsetCurve::GetCurrentFullAutoScale(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  const WeaponOffsetPatternDescription *v9; 
  const Weapon *ViewmodelWeapon; 
  bool v12; 
  bool v13; 
  const WeaponDef *v14; 
  int fireTime; 
  int fireDelay; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 469, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 470, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = patternDesc;
  if ( !patternDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 471, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
    __debugbreak();
  if ( (unsigned int)(this->m_type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 472, ASSERT_TYPE_ASSERT, "((m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND))", (const char *)&queryFormat, "(m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND)") )
    __debugbreak();
  if ( v9->kickOrSnapDecayIndex >= 0 )
  {
    if ( v9->fullAutoBullets < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 479, ASSERT_TYPE_ASSERT, "( patternDesc->fullAutoBullets ) >= ( 1 )", "%s >= %s\n\t%i, %i", "patternDesc->fullAutoBullets", "1", v9->fullAutoBullets, 1) )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    v12 = BG_UsingAlternate(ps);
    v13 = BG_PlayerDualWielding(ps) == 1;
    v14 = BG_WeaponDef(ViewmodelWeapon, v12);
    BG_GetFireTime(weaponMap, ps, ViewmodelWeapon, v12, v13, 0, &fireTime, &fireDelay);
    if ( fireTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 490, ASSERT_TYPE_ASSERT, "(fireTime > 0)", (const char *)&queryFormat, "fireTime > 0") )
      __debugbreak();
    *(float *)&_XMM0 = BG_WeaponOffsets_GetFullAutoScale(v14, v9, ps, fireTime);
    __asm
    {
      vmulss  xmm2, xmm0, dword ptr [rbp+34h]
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm0
      vaddss  xmm0, xmm2, xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetCurveStartFractionFromType
==============
*/
double WeaponOffsetCurve::GetCurveStartFractionFromType(WeaponOffsetCurve *this, const playerState_s *ps, WeaponOffsetBlendCurveId type)
{
  switch ( type )
  {
    case WOBC_HOLD_FIRE_BLEND_SLOW:
      return BG_GetHoldBlendFractionStartSlow(ps);
    case WOBC_HOLD_FIRE_BLEND_FAST:
      return BG_GetHoldBlendFractionStartFast(ps);
    case WOBC_ADS_BLEND:
      return BG_GetAdsBlendFractionStart(ps);
    case WOBC_ALWAYS_ON:
      __asm { vmovss  xmm0, cs:__real@3f800000 }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 209, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled blend curve! %d", type) )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
      break;
  }
  return *(double *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetCurveTimeFromType
==============
*/
__int64 WeaponOffsetCurve::GetCurveTimeFromType(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, WeaponOffsetBlendCurveId type)
{
  __int64 result; 
  int v8; 
  int WeaponHand; 
  __int64 v10; 
  int *p_weaponFireTime; 
  __int64 v12; 
  int v13; 
  __int64 v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 150, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  switch ( type )
  {
    case WOBC_HOLD_FIRE_BLEND_SLOW:
      result = (unsigned int)ps->weapCommon.weaponOffsetHoldFireSlowBlendTime;
      break;
    case WOBC_HOLD_FIRE_BLEND_FAST:
      result = (unsigned int)ps->weapCommon.weaponOffsetHoldFireFastBlendTime;
      break;
    case WOBC_KICK_BLEND:
    case WOBC_SNAP_DECAY_BLEND:
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 169, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      v8 = 0;
      WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
      v10 = WeaponHand;
      if ( WeaponHand >= 0 )
      {
        p_weaponFireTime = &ps->weapState[0].weaponFireTime;
        v12 = v10 + 1;
        do
        {
          v13 = *p_weaponFireTime;
          p_weaponFireTime += 20;
          if ( v8 > v13 )
            v13 = v8;
          v8 = v13;
          --v12;
        }
        while ( v12 );
      }
      result = (unsigned int)v8;
      break;
    case WOBC_ADS_BLEND:
      result = (unsigned int)ps->weapCommon.weaponOffsetAdsBlendTime;
      break;
    case WOBC_ALWAYS_ON:
      goto $LN13_8;
    default:
      LODWORD(v14) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled blend curve! %d", v14) )
        __debugbreak();
$LN13_8:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta
==============
*/

float __fastcall WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(WeaponOffsetCurve *this, const playerState_s *ps, const int serverTime, double _XMM3_8)
{
  int CurveTimeFromType; 
  bool v11; 
  WeaponOffsetBlendInterpolationType interpType; 
  double v17; 
  float fmt; 
  int outAdjustedBlendTime; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 394, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(_RBX, NULL, ps, _RBX->m_type);
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurveStartFractionFromType(_RBX, ps, _RBX->m_type);
  __asm { vmovaps xmm6, xmm0 }
  v11 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, (_RBX->m_type != WOBC_HOLD_FIRE_BLEND_SLOW) + 45);
  interpType = WeaponOffsetCurve::PickInterpolationType(v11, (const WeaponOffsetBlendInterpolationType)_RBX->m_interpType, (const WeaponOffsetBlendInterpolationType)_RBX->m_interpTypeOut);
  if ( v11 )
    __asm { vmovss  xmm0, dword ptr [rbx+4] }
  else
    __asm { vmovss  xmm0, dword ptr [rbx+10h] }
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax; isBlendingIn
    vmovaps xmm2, xmm6; startFraction
    vmovss  dword ptr [rsp+58h+fmt], xmm0
  }
  v17 = WeaponOffsetCurve::CalculateBlendCurrentFractionDelta(serverTime, CurveTimeFromType, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, interpType, &outAdjustedBlendTime);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&v17;
}

/*
==============
WeaponOffsetCurve::GetHoldTime
==============
*/
float WeaponOffsetCurve::GetHoldTime(WeaponOffsetCurve *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+8] }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetKickBlendCurve
==============
*/
float WeaponOffsetCurve::GetKickBlendCurve(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  unsigned int CurveTimeFromType; 
  char v37; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm9 }
  _RBX = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 365, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = patternDesc;
  if ( !patternDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 366, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
    __debugbreak();
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(_RBX, weaponMap, ps, _RBX->m_type);
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( !CurveTimeFromType )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+18h]
    vcomiss xmm1, xmm9
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm2, xmm0, cs:__real@3a83126f
  }
  if ( serverTime > CurveTimeFromType )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4]
    vcomiss xmm1, xmm9
  }
  if ( serverTime > CurveTimeFromType )
  {
LABEL_10:
    __asm
    {
      vdivss  xmm0, xmm2, xmm1; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps [rsp+78h+var_28], xmm6
      vmovaps [rsp+78h+var_38], xmm7
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm0, xmm0, cs:__real@40490fdb; X }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentFullAutoScale(_RBX, weaponMap, ps, serverTime, patternDesc);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm7; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_38]
      vmulss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+78h+var_28]
    }
  }
  else
  {
LABEL_11:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  _R11 = &v37;
  __asm { vmovaps xmm9, xmmword ptr [r11-30h] }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetPattern::GetScales
==============
*/
void WeaponOffsetPattern::GetScales(WeaponOffsetPattern *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const scr_string_t patternKey, const float adsFraction, const Weapon *r_currentWeapon, const bool isAlternate, WeaponOffsetPatternCache *cache, vec3_t *outAttachmentScale, vec3_t *outCrouchScale, vec3_t *outProneScale, vec3_t *outMountScale)
{
  const WeaponDef *v20; 
  __int64 v24; 
  BgWeaponScalarAccumulator *v25; 
  __int64 v26; 
  BgWeaponScalarAccumulator *v27; 
  __int64 v28; 
  BgWeaponScalarAccumulator *v29; 
  const BgWeaponMap *v30; 
  unsigned int WeaponAttachments; 
  bool usingHybridScope; 
  WeaponAttachment **v33; 
  __int64 v34; 
  const WeaponAttachment *OverrideAttachmentWhenApplicable; 
  const WeaponOffsetPatternScaleInfo *weaponOffsetPatternScaleInfo; 
  bool v37; 
  AttADSStanceScales *adsStanceScales; 
  bool v70; 
  vec3_t v73; 
  vec3_t v74; 
  vec3_t outScales; 
  vec3_t v76; 
  vec3_t v77; 
  vec3_t v78; 
  BgWeaponScalarAccumulator v79; 
  BgWeaponScalarAccumulator v80; 
  BgWeaponScalarAccumulator v81; 
  BgWeaponScalarAccumulator v82; 
  BgWeaponScalarAccumulator v83; 
  BgWeaponScalarAccumulator v84; 
  BgWeaponScalarAccumulator v85; 
  BgWeaponScalarAccumulator v86; 
  BgWeaponScalarAccumulator v87; 
  WeaponAttachment *attachments[30]; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  if ( !cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 601, ASSERT_TYPE_ASSERT, "(cache)", (const char *)&queryFormat, "cache") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  dword ptr [rsp+260h+var_1F8], xmm7
    vmovss  dword ptr [rsp+260h+var_1F8+4], xmm7
    vmovss  dword ptr [rsp+260h+var_1F8+8], xmm7
    vmovss  dword ptr [rsp+260h+var_1E8], xmm7
    vmovss  dword ptr [rsp+260h+var_1E8+4], xmm7
    vmovss  dword ptr [rbp+160h+var_1E8+8], xmm7
    vmovss  dword ptr [rbp+160h+outScales], xmm7
    vmovss  dword ptr [rbp+160h+outScales+4], xmm7
    vmovss  dword ptr [rbp+160h+outScales+8], xmm7
    vmovss  xmm6, [rbp+160h+adsFraction]
  }
  v20 = BG_WeaponDef(r_currentWeapon, isAlternate);
  __asm { vmovaps xmm2, xmm6; adsFraction }
  WeaponOffsetPattern::FindPatternScale(patternKey, &v20->mountWeaponOffsetPatternScaleInfo, *(const float *)&_XMM2, 1, &outScales);
  __asm { vmovaps xmm2, xmm6; adsFraction }
  WeaponOffsetPattern::FindPatternScale(patternKey, &v20->crouchedWeaponOffsetPatternScaleInfo, *(const float *)&_XMM2, 1, &v73);
  __asm { vmovaps xmm2, xmm6; adsFraction }
  WeaponOffsetPattern::FindPatternScale(patternKey, &v20->proneWeaponOffsetPatternScaleInfo, *(const float *)&_XMM2, 1, &v74);
  v24 = 3i64;
  v25 = &v82;
  v26 = 3i64;
  do
  {
    BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(v25++);
    --v26;
  }
  while ( v26 );
  v27 = &v79;
  v28 = 3i64;
  do
  {
    BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(v27++);
    --v28;
  }
  while ( v28 );
  v29 = &v85;
  do
  {
    BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(v29++);
    --v24;
  }
  while ( v24 );
  v30 = weaponMap;
  WeaponAttachments = BG_GetWeaponAttachments(r_currentWeapon, isAlternate, (const WeaponAttachment **)attachments);
  usingHybridScope = BG_IsUsingHybridScope(weaponMap, ps, r_currentWeapon);
  v70 = usingHybridScope;
  if ( WeaponAttachments )
  {
    v33 = attachments;
    v34 = WeaponAttachments;
    do
    {
      OverrideAttachmentWhenApplicable = BG_GetOverrideAttachmentWhenApplicable(v30, ps, r_currentWeapon, isAlternate, *v33, usingHybridScope);
      if ( !OverrideAttachmentWhenApplicable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 653, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
        __debugbreak();
      weaponOffsetPatternScaleInfo = OverrideAttachmentWhenApplicable->weaponOffsetPatternScaleInfo;
      v37 = OverrideAttachmentWhenApplicable->type != ATTACHMENT_SCOPE;
      if ( weaponOffsetPatternScaleInfo )
      {
        __asm { vmovaps xmm2, xmm6; adsFraction }
        WeaponOffsetPattern::FindPatternScale(patternKey, weaponOffsetPatternScaleInfo, *(const float *)&_XMM2, v37, &v76);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1C8]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v82, *(const float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1C8+4]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v83, *(const float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1C8+8]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v84, *(const float *)&_XMM1);
      }
      adsStanceScales = OverrideAttachmentWhenApplicable->adsStanceScales;
      if ( adsStanceScales )
      {
        __asm { vmovaps xmm2, xmm6; adsFraction }
        WeaponOffsetPattern::FindPatternScale(patternKey, &adsStanceScales->crouchedWeaponOffsetPatternScales, *(const float *)&_XMM2, v37, &v77);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1B8]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v79, *(const float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1B8+4]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v80, *(const float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1B8+8]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v81, *(const float *)&_XMM1);
        __asm { vmovaps xmm2, xmm6; adsFraction }
        WeaponOffsetPattern::FindPatternScale(patternKey, &OverrideAttachmentWhenApplicable->adsStanceScales->proneWeaponOffsetPatternScales, *(const float *)&_XMM2, v37, &v78);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1A8]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v85, *(const float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1A8+4]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v86, *(const float *)&_XMM1);
        __asm { vmovss  xmm1, dword ptr [rbp+160h+var_1A8+8]; scale }
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v87, *(const float *)&_XMM1);
      }
      usingHybridScope = v70;
      ++v33;
      v30 = weaponMap;
      --v34;
    }
    while ( v34 );
  }
  __asm { vmovaps xmm1, xmm7; baseValue }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v82, *(const float *)&_XMM1);
  _RBX = outAttachmentScale;
  __asm
  {
    vmovaps xmm1, xmm7; baseValue
    vmovss  dword ptr [rbx], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v83, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm7; baseValue
    vmovss  dword ptr [rbx+4], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v84, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+260h+var_1F8]; baseValue
    vmovss  dword ptr [rbx+8], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v79, *(const float *)&_XMM1);
  _RBX = outCrouchScale;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+260h+var_1F8+4]; baseValue
    vmovss  dword ptr [rbx], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v80, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+260h+var_1F8+8]; baseValue
    vmovss  dword ptr [rbx+4], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v81, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+260h+var_1E8]; baseValue
    vmovss  dword ptr [rbx+8], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v79, *(const float *)&_XMM1);
  _RBX = outProneScale;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+260h+var_1E8+4]; baseValue
    vmovss  dword ptr [rbx], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v80, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+160h+var_1E8+8]; baseValue
    vmovss  dword ptr [rbx+4], xmm0
  }
  *(double *)&_XMM0 = BgWeaponScalarAccumulator::GetFinalValue(&v81, *(const float *)&_XMM1);
  _RAX = outMountScale;
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+160h+outScales]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm0, dword ptr [rbp+160h+outScales+4]
    vmovss  dword ptr [rax], xmm1
    vmovss  xmm1, dword ptr [rbp+160h+outScales+8]
    vmovss  dword ptr [rax+8], xmm1
    vmovss  dword ptr [rax+4], xmm0
  }
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
WeaponOffsetCurve::GetShotDecayFireTimeFrac
==============
*/
float WeaponOffsetCurve::GetShotDecayFireTimeFrac(WeaponOffsetCurve *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+0Ch] }
  return *(float *)&_XMM0;
}

/*
==============
WeaponOffsetCurve::GetSnapDecayBlendCurve
==============
*/
float WeaponOffsetCurve::GetSnapDecayBlendCurve(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  WeaponOffsetBlendCurveId m_type; 
  unsigned int CurveTimeFromType; 
  int v22; 
  int WeaponHand; 
  int *p_weaponPrevFireTime; 
  __int64 v25; 
  int v26; 
  __int128 v46; 
  char v49; 

  __asm { vmovaps [rsp+78h+var_48], xmm9 }
  _R14 = this;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps", v46) )
    __debugbreak();
  _RBP = patternDesc;
  if ( !patternDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 319, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
    __debugbreak();
  m_type = _R14->m_type;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(_R14, weaponMap, ps, m_type);
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( !CurveTimeFromType )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+18h]
    vmovss  xmm7, cs:__real@3a83126f
    vcomiss xmm6, xmm9
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, xmm7
  }
  if ( serverTime > CurveTimeFromType )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm6, dword ptr [r14+4]
    vcomiss xmm6, xmm9
  }
  if ( serverTime > CurveTimeFromType )
  {
LABEL_10:
    if ( CurveTimeFromType == serverTime )
    {
      v22 = 0;
      WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
      if ( WeaponHand >= 0 )
      {
        p_weaponPrevFireTime = &ps->weapState[0].weaponPrevFireTime;
        v25 = WeaponHand + 1i64;
        do
        {
          v26 = *p_weaponPrevFireTime;
          p_weaponPrevFireTime += 20;
          if ( v22 > v26 )
            v26 = v22;
          v22 = v26;
          --v25;
        }
        while ( v25 );
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vdivss  xmm0, xmm1, xmm6; val
      vmovaps xmm1, xmm9; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@40490fdb
      vmulss  xmm3, xmm0, cs:__real@3f000000
      vaddss  xmm0, xmm3, cs:__real@40490fdb; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm { vaddss  xmm7, xmm0, cs:__real@3f800000 }
    *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentFullAutoScale(_R14, weaponMap, ps, serverTime, patternDesc);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm7; val
      vmovaps xmm1, xmm9; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm0, xmm6, xmm0 }
  }
  else
  {
LABEL_18:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovaps xmm7, [rsp+78h+var_38] }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm6, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_WeaponOffsets_FireWeapon
==============
*/
void PM_WeaponOffsets_FireWeapon(pmove_t *pm)
{
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  WeaponOffsetBlendInterpolationType v19; 
  int v20; 
  WeaponOffsetBlendInterpolationType v26; 
  const BgHandler *m_bgHandler; 
  const BgHandler *v30; 
  playerState_s *v31; 
  WeaponOffsetCurve v34; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1214, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  _RAX = BG_WeaponOffsets_GetWeaponDef(weaponMap, ps);
  serverTime = ps->serverTime;
  v34.m_type = WOBC_HOLD_FIRE_BLEND_SLOW;
  interpType = _RAX->weaponOffsetCurveHoldFireSlow.interpType;
  _RBX = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0B3Ch]
    vmovss  xmm1, dword ptr [rax+0B48h]
    vmovss  [rsp+98h+var_68.m_blendTime], xmm0
    vmovss  xmm0, dword ptr [rax+0B44h]
    vmovss  [rsp+98h+var_68.m_holdTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B40h]
  }
  v34.m_interpType = interpType;
  interpTypeOut = _RAX->weaponOffsetCurveHoldFireSlow.interpTypeOut;
  __asm
  {
    vmovss  [rsp+98h+var_68.m_shotDecayFireTimeFrac], xmm0
    vmovss  xmm0, dword ptr [rax+0B4Ch]
    vmovss  [rsp+98h+var_68.m_decayTime], xmm1
    vmovss  xmm1, dword ptr [rax+0B50h]
  }
  v34.m_interpTypeOut = interpTypeOut;
  __asm
  {
    vmovss  [rsp+98h+var_68.m_adsFractionBegin], xmm0
    vmovss  [rsp+98h+var_68.m_adsFractionEnd], xmm1
  }
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v34, weaponMap, ps, serverTime, NULL);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0B5Ch]
    vmovss  xmm2, dword ptr [rbx+0B68h]
  }
  v19 = _RBX->weaponOffsetCurveHoldFireFast.interpType;
  v20 = ps->serverTime;
  __asm
  {
    vmovss  [rsp+98h+var_68.m_blendTime], xmm1
    vmovss  xmm1, dword ptr [rbx+0B64h]
    vmovss  [rsp+98h+var_68.m_shotDecayFireTimeFrac], xmm1
    vmovss  xmm1, dword ptr [rbx+0B70h]
    vmovss  [rsp+98h+var_68.m_holdTime], xmm2
    vmovss  xmm2, dword ptr [rbx+0B60h]
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rbx+0B6Ch]
  }
  v34.m_interpType = v19;
  v26 = _RBX->weaponOffsetCurveHoldFireFast.interpTypeOut;
  __asm
  {
    vmovss  [rsp+98h+var_68.m_adsFractionEnd], xmm1
    vmovss  [rsp+98h+var_68.m_decayTime], xmm2
    vmovss  [rsp+98h+var_68.m_adsFractionBegin], xmm0
  }
  v34.m_type = WOBC_HOLD_FIRE_BLEND_FAST;
  v34.m_interpTypeOut = v26;
  *(double *)&_XMM0 = WeaponOffsetCurve::GetCurrentCurveFraction(&v34, weaponMap, ps, v20, NULL);
  __asm { vmovaps xmm7, xmm0 }
  if ( !BG_WeaponOffsets_AreAnyBulletBlendsActive(weaponMap, _RBX, ps) )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3a83126f
      vcomiss xmm6, xmm1
    }
  }
  m_bgHandler = pm->m_bgHandler;
  if ( !m_bgHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 982, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Du) )
  {
    BG_WeaponOffsets_ResetHoldFireSlowBlend(ps, m_bgHandler);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Du);
  }
  v30 = pm->m_bgHandler;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1030, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Eu) )
  {
    BG_WeaponOffsets_ResetHoldFireFastBlend(ps, v30);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Eu);
  }
  v31 = pm->ps;
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v31->weapCommon.weapFlags, ACTIVE, 0x31u) )
  {
    PM_WeaponOffsets_StoreFullAutoScales(pm);
    v31->weapCommon.weaponOffsetSustainedFireStartTime = pm->cmd.serverTime;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v31->weapCommon.weapFlags, ACTIVE, 0x31u);
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
PM_WeaponOffsets_StoreFullAutoScales
==============
*/
void PM_WeaponOffsets_StoreFullAutoScales(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v5; 
  bool v6; 
  const WeaponDef *v7; 
  int v8; 
  __int64 v9; 
  const WeaponOffsetPatternDescription *v10; 
  int fireTime; 
  int fireDelay; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1150, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1150, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  v6 = BG_PlayerDualWielding(ps) == 1;
  v7 = BG_WeaponDef(ViewmodelWeapon, v5);
  v8 = 0;
  BG_GetFireTime(pm->weaponMap, ps, ViewmodelWeapon, v5, v6, 0, &fireTime, &fireDelay);
  if ( v7->numWeaponOffsetPatternsKickOrSnapDecay > 0 )
  {
    v9 = 0i64;
    do
    {
      v10 = v7->weaponOffsetPatternsKickOrSnapDecay[v9];
      *(float *)&_XMM0 = BG_WeaponOffsets_GetFullAutoScale(v7, v10, ps, fireTime);
      __asm { vmovaps xmm3, xmm0; fullAutoScale }
      BG_WeaponOffsets_SetFullAutoScaleMarker(v7, v10, ps, *(double *)&_XMM3);
      ++v8;
      ++v9;
    }
    while ( v8 < v7->numWeaponOffsetPatternsKickOrSnapDecay );
  }
}

/*
==============
PM_WeaponOffsets_Update
==============
*/
void PM_WeaponOffsets_Update(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v9; 
  int WeaponHand; 
  __int64 v11; 
  __int64 v12; 
  int *p_weaponState; 
  playerState_s *v14; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1330, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1330, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_ProceduralGunMotionDisabled(ps) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1501, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm { vxorps  xmm1, xmm1, xmm1; value }
    *(_QWORD *)&ps->weapCommon.weaponStartFireTime_BlendedOut = 0i64;
    *(_QWORD *)&ps->weapCommon.weaponOffsetHoldFireFastBlendTime = 0i64;
    *(_QWORD *)&ps->weapCommon.weaponOffsetPrevHoldFireBlendInDuration = 0i64;
    *(_QWORD *)&ps->weapCommon.weaponOffsetSustainedFireStopTime = 0i64;
    BG_SetHoldBlendFractionStartSlow(ps, *(float *)&_XMM1);
    __asm { vxorps  xmm1, xmm1, xmm1; value }
    BG_SetHoldBlendFractionStartFast(ps, *(float *)&_XMM1);
    __asm { vxorps  xmm1, xmm1, xmm1; value }
    BG_SetAdsBlendFractionStart(ps, *(float *)&_XMM1);
  }
  else
  {
    PM_WeaponOffsets_UpdateShotDecay(pm, pml);
    v9 = pm->ps;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1307, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, v9);
    v11 = WeaponHand;
    if ( WeaponHand < 0 )
    {
LABEL_19:
      BG_WeaponOffsets_StopHoldFireSlowBlend(v9, pm->m_bgHandler);
      BG_WeaponOffsets_StopHoldFireFastBlend(v9, pm->m_bgHandler);
      v14 = pm->ps;
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1193, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v14->weapCommon.weapFlags, ACTIVE, 0x31u) )
      {
        PM_WeaponOffsets_StoreFullAutoScales(pm);
        v14->weapCommon.weaponOffsetSustainedFireStopTime = pm->cmd.serverTime;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v14->weapCommon.weapFlags, ACTIVE, 0x31u);
      }
    }
    else
    {
      v12 = 0i64;
      p_weaponState = &v9->weapState[0].weaponState;
      while ( *p_weaponState != 16 )
      {
        ++v12;
        p_weaponState += 20;
        if ( v12 > v11 )
          goto LABEL_19;
      }
    }
  }
}

/*
==============
PM_WeaponOffsets_UpdateShotDecay
==============
*/
void PM_WeaponOffsets_UpdateShotDecay(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *ViewmodelWeapon; 
  bool v11; 
  bool v12; 
  bool v14; 
  bool v15; 
  bool v22; 
  bool v23; 
  double shotCount; 
  double shotCounta; 
  int *fireTime; 
  int *fireTimea; 
  int *fireDelay; 
  int *fireDelaya; 
  char v40; 
  void *retaddr; 
  int v42; 
  int v43; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0C8h+var_88], xmm10
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1286, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1286, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v11 = BG_UsingAlternate(ps);
  v12 = BG_PlayerDualWielding(ps) == 1;
  _R15 = BG_WeaponDef(ViewmodelWeapon, v11);
  BG_GetFireTime(pm->weaponMap, ps, ViewmodelWeapon, v11, v12, 0, &v42, &v43);
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1244, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = _R15 == NULL;
  if ( !_R15 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1245, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [r15+0B44h]
    vmovsd  xmm9, cs:__real@3ff0000000000000
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vxorpd  xmm10, xmm10, xmm10
    vcomiss xmm6, xmm7
  }
  if ( !v14 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+fireDelay], xmm9
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+fireTime], xmm10
      vmovsd  qword ptr [rsp+0C8h+shotCount], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1249, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( slowBlendShotDecayFireTimeFrac ) && ( slowBlendShotDecayFireTimeFrac ) <= ( 1.0f )", "slowBlendShotDecayFireTimeFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", shotCount, *(double *)&fireTime, *(double *)&fireDelay) )
      __debugbreak();
    __asm { vcomiss xmm6, xmm7 }
  }
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1265, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v22 = _R15 == NULL;
  if ( !_R15 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1266, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [r15+0B64h]
    vcomiss xmm6, xmm8
    vcomiss xmm6, xmm7
  }
  if ( !v22 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+fireDelay], xmm9
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+fireTime], xmm10
      vmovsd  qword ptr [rsp+0C8h+shotCount], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1270, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fastBlendShotDecayFireTimeFrac ) && ( fastBlendShotDecayFireTimeFrac ) <= ( 1.0f )", "fastBlendShotDecayFireTimeFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", shotCounta, *(double *)&fireTimea, *(double *)&fireDelaya) )
      __debugbreak();
    __asm { vcomiss xmm6, xmm7 }
  }
  __asm { vmovaps xmm7, [rsp+0C8h+var_58] }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
WeaponOffsetCurve::PickInterpolationType
==============
*/
__int64 WeaponOffsetCurve::PickInterpolationType(const bool isBlendingIn, const WeaponOffsetBlendInterpolationType interpTypeIn, const WeaponOffsetBlendInterpolationType interpTypeOut)
{
  __int64 result; 

  if ( isBlendingIn )
    return (unsigned int)interpTypeIn;
  if ( interpTypeOut != NUM_WEAPON_OFFSET_BLEND_INTERPOLATION_TYPES )
    return (unsigned int)interpTypeOut;
  switch ( interpTypeIn )
  {
    case WOBIT_LINEAR:
      goto LABEL_13;
    case WOBIT_CUBIC_EASE_IN:
      result = 2i64;
      break;
    case WOBIT_CUBIC_EASE_OUT:
      result = 1i64;
      break;
    case WOBIT_QUARTIC_EASE_IN:
      result = 4i64;
      break;
    case WOBIT_QUARTIC_EASE_OUT:
      result = 3i64;
      break;
    case WOBIT_EXPONENTIAL_EASE_IN:
      result = 6i64;
      break;
    case WOBIT_EXPONENTIAL_EASE_OUT:
      result = 5i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 310, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend interpolation type! %d", interpTypeIn) )
        __debugbreak();
LABEL_13:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
WeaponOffsetPattern::Update
==============
*/
void WeaponOffsetPattern::Update(WeaponOffsetPattern *this, const int serverTime, const BgWeaponMap *weaponMap, vec3_t *outOffset, vec3_t *outCombinesAngles, WeaponOffsetPatternCache *cache)
{
  WeaponOffsetPatternId patternType; 
  int adsStartTime; 
  WeaponOffsetTransformType transformType; 
  const playerState_s *m_ps; 
  char v57; 
  __int64 v86; 
  __int64 v87; 
  unsigned int pHoldrand; 
  float outPatternStrength; 
  vec3_t outPos; 
  vec3_t outPatternScale; 
  vec3_t start; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-68h], xmm7 }
  _R12 = outCombinesAngles;
  _R13 = outOffset;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 775, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 776, ASSERT_TYPE_ASSERT, "(cache)", (const char *)&queryFormat, "cache") )
    __debugbreak();
  __asm { vmovaps xmmword ptr [rsp+0F0h+var_58+8], xmm6 }
  WeaponOffsetPattern::CalculatePatternWeight(this, serverTime, weaponMap, cache, &outPatternStrength, &outPatternScale);
  _R8 = this->m_desc;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rbp+47h+outPos], xmm7
    vmovss  dword ptr [rbp+47h+outPos+4], xmm7
    vmovss  dword ptr [rbp+47h+outPos+8], xmm7
  }
  patternType = _R8->patternType;
  if ( patternType == WOP_KEYFRAME )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
LABEL_39:
    __asm
    {
      vmovss  dword ptr [rbp+47h+outPos+4], xmm0
      vmovss  dword ptr [rbp+47h+outPos], xmm0
    }
LABEL_40:
    __asm { vmovss  dword ptr [rbp+47h+outPos+8], xmm0 }
    goto LABEL_41;
  }
  if ( patternType == WOP_NOISY_SINE )
  {
    m_ps = this->m_ps;
    __asm
    {
      vmovss  xmm1, cs:__real@3f933333; max
      vmovss  xmm0, cs:__real@3f866666; min
      vmovaps [rsp+0F0h+var_78+8], xmm8
    }
    pHoldrand = m_ps->weapCommon.weaponStartFireTime_BlendedOut;
    __asm { vmovaps [rsp+0F0h+var_88+8], xmm9 }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
    __asm
    {
      vmovss  xmm1, cs:__real@3fa00000; max
      vmovaps xmm8, xmm0
      vmovss  xmm0, cs:__real@3f99999a; min
    }
    *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
    _RAX = this->m_desc;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm6, xmm1, cs:__real@3a83126f
      vcomiss xmm7, dword ptr [rax+14h]
      vmovaps xmm9, xmm0
    }
    if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 806, ASSERT_TYPE_ASSERT, "(m_desc->frequency > 0.0f)", (const char *)&queryFormat, "m_desc->frequency > 0.0f") )
      __debugbreak();
    __asm
    {
      vdivss  xmm6, xmm6, dword ptr [rax+14h]
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rbp+47h+outPos], xmm0
      vmulss  xmm0, xmm6, xmm8; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rbp+47h+outPos+4], xmm0
      vmulss  xmm0, xmm6, xmm9; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm9, [rsp+0F0h+var_88+8]
      vmovaps xmm8, [rsp+0F0h+var_78+8]
    }
    goto LABEL_40;
  }
  if ( patternType != WOP_RANDOM_SQUARE )
  {
    if ( patternType != WOP_SINE )
    {
      LODWORD(v86) = _R8->patternType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 845, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern. %d", v86) )
        __debugbreak();
      goto LABEL_41;
    }
    __asm
    {
      vcomiss xmm7, dword ptr [r8+14h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm6, xmm0, cs:__real@3a83126f
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 836, ASSERT_TYPE_ASSERT, "(m_desc->frequency > 0.0f)", (const char *)&queryFormat, "m_desc->frequency > 0.0f") )
      __debugbreak();
    __asm { vdivss  xmm0, xmm6, dword ptr [rax+14h]; X }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    goto LABEL_39;
  }
  __asm { vcomiss xmm7, dword ptr [r8+14h] }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 817, ASSERT_TYPE_ASSERT, "(m_desc->frequency > 0.0f)", (const char *)&queryFormat, "m_desc->frequency > 0.0f") )
    __debugbreak();
  _RAX = this->m_desc;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, ebx
    vmovss  xmm0, dword ptr [rax+14h]
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
    vcvtsi2ss xmm2, xmm2, eax
    vdivss  xmm4, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm4, 1
    vcvttss2si edi, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vsubss  xmm0, xmm4, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( cache->periodIndexUsedForRandomPatternSpline != _EDI || !cache->randomPatternSpline.ncurves )
  {
    adsStartTime = this->m_ps->weapCommon.adsStartTime;
    transformType = this->m_desc->transformType;
    if ( transformType )
    {
      switch ( transformType )
      {
        case WOTT_VIEW_ANGLES:
          adsStartTime += 4057 * _EDI + 4057;
          break;
        case WOTT_WEAPON_ORIGIN:
          adsStartTime += 5857 * _EDI + 5857;
          break;
        case WOTT_WEAPON_ANGLES:
          adsStartTime += 5443 * _EDI + 5443;
          break;
        default:
          LODWORD(v87) = this->m_desc->transformType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 552, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled transform type %d in UpdateRandomPatternSpline", v87) )
            __debugbreak();
          break;
      }
    }
    else
    {
      adsStartTime += 3907 * _EDI + 3907;
    }
    BG_BuildRandomPatternSpline(adsStartTime, &cache->randomPatternSpline);
    cache->periodIndexUsedForRandomPatternSpline = _EDI;
  }
  __asm { vmovaps xmm1, xmm6; t }
  BG_BSpline_RelaxedCBezier_Evaluate(&cache->randomPatternSpline, *(float *)&_XMM1, &outPos);
LABEL_41:
  _RAX = this->m_desc;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+47h+outPos]
    vmovaps xmm6, xmmword ptr [rsp+0F0h+var_58+8]
    vmulss  xmm2, xmm0, dword ptr [rax+1Ch]
    vmovss  xmm0, dword ptr [rbp+47h+outPos+4]
    vmulss  xmm4, xmm2, dword ptr [rbp+47h+outPatternScale]
    vmovss  dword ptr [rbp+47h+outPos], xmm2
    vmulss  xmm1, xmm0, dword ptr [rax+20h]
    vmulss  xmm2, xmm1, dword ptr [rbp+47h+outPatternScale+4]
    vmovss  dword ptr [rbp+47h+outPos+4], xmm1
    vmovss  xmm3, dword ptr [rax+24h]
    vmulss  xmm1, xmm3, dword ptr [rbp+47h+outPos+8]
    vmulss  xmm5, xmm1, dword ptr [rbp+47h+outPatternScale+8]
    vmovss  dword ptr [rbp+47h+outPos+8], xmm5
    vmovss  dword ptr [rbp+47h+outPos], xmm4
    vmovss  dword ptr [rbp+47h+outPos+4], xmm2
  }
  if ( ((_RAX->transformType - 1) & 0xFFFFFFFD) != 0 )
  {
    __asm
    {
      vmovss  xmm0, [rbp+47h+outPatternStrength]
      vmulss  xmm1, xmm4, xmm0
      vmulss  xmm2, xmm2, xmm0
      vmulss  xmm3, xmm5, xmm0
    }
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+47h+outPos]
      vmovss  xmm2, [rbp+47h+outPatternStrength]; fraction
    }
    *(_QWORD *)&start.y = 0i64;
    outPatternScale.v[2] = outPos.v[2];
    __asm
    {
      vmovss  dword ptr [rbp+47h+start], xmm7
      vmovsd  qword ptr [rbp+47h+outPatternScale], xmm0
    }
    SlerpAngles(&start, &outPatternScale, *(const float *)&_XMM2, &outPos);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+47h+outPos+8]
      vmovss  xmm2, dword ptr [rbp+47h+outPos+4]
      vmovss  xmm1, dword ptr [rbp+47h+outPos]
    }
  }
  __asm
  {
    vmovss  dword ptr [r13+0], xmm1
    vmovss  dword ptr [r13+4], xmm2
    vmovss  dword ptr [r13+8], xmm3
    vaddss  xmm0, xmm1, dword ptr [r12]
    vmovss  dword ptr [r12], xmm0
    vmovss  xmm1, dword ptr [r13+4]
    vaddss  xmm0, xmm1, dword ptr [r12+4]
    vmovss  dword ptr [r12+4], xmm0
    vmovss  xmm1, dword ptr [r13+8]
    vaddss  xmm0, xmm1, dword ptr [r12+8]
    vmovss  dword ptr [r12+8], xmm0
    vmovaps xmm7, [rsp+0F0h+var_68+8]
  }
}

/*
==============
WeaponOffsetPattern::UpdateRandomPatternSpline
==============
*/
void WeaponOffsetPattern::UpdateRandomPatternSpline(WeaponOffsetPattern *this, WeaponOffsetPatternCache *cache, const int periodIndex)
{
  int adsStartTime; 
  WeaponOffsetTransformType transformType; 

  if ( cache->periodIndexUsedForRandomPatternSpline != periodIndex || !cache->randomPatternSpline.ncurves )
  {
    adsStartTime = this->m_ps->weapCommon.adsStartTime;
    transformType = this->m_desc->transformType;
    if ( transformType )
    {
      switch ( transformType )
      {
        case WOTT_VIEW_ANGLES:
          adsStartTime += 4057 * periodIndex + 4057;
          break;
        case WOTT_WEAPON_ORIGIN:
          adsStartTime += 5857 * periodIndex + 5857;
          break;
        case WOTT_WEAPON_ANGLES:
          adsStartTime += 5443 * periodIndex + 5443;
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 552, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled transform type %d in UpdateRandomPatternSpline", this->m_desc->transformType) )
            __debugbreak();
          break;
      }
    }
    else
    {
      adsStartTime += 3907 * periodIndex + 3907;
    }
    BG_BuildRandomPatternSpline(adsStartTime, &cache->randomPatternSpline);
    cache->periodIndexUsedForRandomPatternSpline = periodIndex;
  }
}

