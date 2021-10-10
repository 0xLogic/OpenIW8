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
double WeaponOffsetCurve::ApplyInterpolationType(double curveFraction, const WeaponOffsetBlendInterpolationType interpType)
{
  double v2; 
  double v3; 
  double v4; 
  double v5; 
  float v6; 
  double v7; 

  if ( *(float *)&curveFraction != 0.0 && *(float *)&curveFraction != 1.0 )
  {
    switch ( interpType )
    {
      case WOBIT_LINEAR:
        return curveFraction;
      case WOBIT_CUBIC_EASE_IN:
        HIDWORD(v2) = HIDWORD(curveFraction);
        *(float *)&v2 = (float)(*(float *)&curveFraction * *(float *)&curveFraction) * *(float *)&curveFraction;
        curveFraction = v2;
        break;
      case WOBIT_CUBIC_EASE_OUT:
        HIDWORD(v3) = HIDWORD(curveFraction);
        *(float *)&v3 = (float)((float)((float)(*(float *)&curveFraction - 1.0) * (float)(*(float *)&curveFraction - 1.0)) * (float)(*(float *)&curveFraction - 1.0)) + 1.0;
        curveFraction = v3;
        break;
      case WOBIT_QUARTIC_EASE_IN:
        HIDWORD(v4) = HIDWORD(curveFraction);
        *(float *)&v4 = (float)((float)(*(float *)&curveFraction * *(float *)&curveFraction) * *(float *)&curveFraction) * *(float *)&curveFraction;
        curveFraction = v4;
        break;
      case WOBIT_QUARTIC_EASE_OUT:
        *(_QWORD *)&v5 = LODWORD(FLOAT_1_0);
        *(float *)&v5 = 1.0 - (float)((float)((float)((float)(*(float *)&curveFraction - 1.0) * (float)(*(float *)&curveFraction - 1.0)) * (float)(*(float *)&curveFraction - 1.0)) * (float)(*(float *)&curveFraction - 1.0));
        curveFraction = v5;
        break;
      case WOBIT_EXPONENTIAL_EASE_IN:
        v6 = (float)(*(float *)&curveFraction - 1.0) * 10.0;
        *(_QWORD *)&curveFraction = LODWORD(FLOAT_2_0);
        *(float *)&curveFraction = powf_0(2.0, v6);
        break;
      case WOBIT_EXPONENTIAL_EASE_OUT:
        *(_QWORD *)&v7 = LODWORD(FLOAT_1_0);
        *(float *)&v7 = 1.0 - powf_0(2.0, *(float *)&curveFraction * -10.0);
        curveFraction = v7;
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend interpolation type! %d", interpType) )
          __debugbreak();
        break;
    }
  }
  return curveFraction;
}

/*
==============
BG_WeaponOffsets_AdsUpdate
==============
*/
void BG_WeaponOffsets_AdsUpdate(playerState_s *ps, const BgHandler *handler)
{
  const BgWeaponMap *v4; 
  const WeaponDef *WeaponDef; 
  float fWeaponPosFrac; 
  WeaponOffsetBlendInterpolationType interpType; 
  float holdTime; 
  float decayTime; 
  float adsFractionBegin; 
  float shotDecayFireTimeFrac; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  float adsFractionEnd; 
  bool v14; 
  bool v15; 
  bool v16; 
  WeaponOffsetCurve v17; 
  int outAdjustedBlendTime; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1377, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1378, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v4 = handler->GetWeaponMap(handler);
  WeaponDef = BG_WeaponOffsets_GetWeaponDef(v4, ps);
  fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  v17.m_type = WOBC_ADS_BLEND;
  interpType = WeaponDef->weaponOffsetCurveAds.interpType;
  holdTime = WeaponDef->weaponOffsetCurveAds.holdTime;
  decayTime = WeaponDef->weaponOffsetCurveAds.decayTime;
  adsFractionBegin = WeaponDef->weaponOffsetCurveAds.adsFractionBegin;
  v17.m_blendTime = WeaponDef->weaponOffsetCurveAds.blendTime;
  shotDecayFireTimeFrac = WeaponDef->weaponOffsetCurveAds.shotDecayFireTimeFrac;
  v17.m_interpType = interpType;
  interpTypeOut = WeaponDef->weaponOffsetCurveAds.interpTypeOut;
  v17.m_shotDecayFireTimeFrac = shotDecayFireTimeFrac;
  adsFractionEnd = WeaponDef->weaponOffsetCurveAds.adsFractionEnd;
  v17.m_interpTypeOut = interpTypeOut;
  v17.m_adsFractionEnd = adsFractionEnd;
  v17.m_holdTime = holdTime;
  v17.m_decayTime = decayTime;
  v17.m_adsFractionBegin = adsFractionBegin;
  v14 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Fu);
  v15 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 9u);
  if ( !v15 )
  {
    if ( fWeaponPosFrac > adsFractionBegin )
      goto LABEL_11;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x30u);
  }
  if ( fWeaponPosFrac < adsFractionBegin )
  {
    if ( !v14 )
      return;
    goto LABEL_19;
  }
LABEL_11:
  if ( v14 )
  {
    WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(&v17, v4, ps, ps->serverTime, &outAdjustedBlendTime);
    if ( !v15 || ps->serverTime - ps->weapCommon.weaponOffsetAdsBlendTime >= outAdjustedBlendTime - (int)(float)(holdTime * -1000.0) )
    {
LABEL_19:
      v16 = 1;
      goto LABEL_20;
    }
  }
  else if ( v15 && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x30u) )
  {
    v16 = 0;
LABEL_20:
    BG_WeaponOffsets_ResetAdsBlend(ps, handler, v16);
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
  float *v12; 
  __int64 v13; 
  WeaponOffsetPatternDescription *v14; 
  WeaponOffsetPatternCache *v15; 
  WeaponOffsetBlendCurveId curveType; 
  WeaponOffsetPatternCache *cache; 
  float v18; 
  int serverTimea; 
  BgWeaponMap *weaponMap; 
  WeaponOffsetPattern v22; 
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
    v12 = &(*outAnglesCategorized)[18].v[2];
    v13 = 0i64;
    do
    {
      v14 = &WeaponDef->weaponOffsetPatterns[v13];
      if ( v14->transformType == patternType )
      {
        v15 = handler->PlayerWeaponOffsetPatternCache(handler, ps, (unsigned int)v11);
        curveType = v14->curveType;
        cache = v15;
        v22.m_desc = v14;
        v22.m_ps = ps;
        WeaponOffsetCurve::WeaponOffsetCurve(&v22.m_curve, WeaponDef, curveType);
        WeaponOffsetPattern::Update(&v22, serverTimea, weaponMap, &outOffset, outCombinedAngles, cache);
        if ( patternType == WOTT_WEAPON_ANGLES )
        {
          if ( outAnglesCategorized )
          {
            v18 = outOffset.v[1];
            *(v12 - 2) = outOffset.v[0];
            *v12 = outOffset.v[2];
            *(v12 - 1) = v18;
          }
        }
      }
      ++v11;
      v12 += 3;
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
char BG_WeaponOffsets_AreAnyBulletBlendsActive(const BgWeaponMap *weaponMap, const WeaponDef *weapDef, const playerState_s *ps)
{
  float holdTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  int v8; 
  float shotDecayFireTimeFrac; 
  float decayTime; 
  float adsFractionBegin; 
  float adsFractionEnd; 
  float blendTime; 
  float v14; 
  float v15; 
  float v16; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  float v18; 
  float v19; 
  WeaponOffsetBlendInterpolationType v20; 
  float v21; 
  float v22; 
  WeaponOffsetBlendInterpolationType v23; 
  float v24; 
  float v25; 
  WeaponOffsetBlendInterpolationType v26; 
  float v27; 
  float v28; 
  WeaponOffsetBlendInterpolationType v29; 
  __int64 i; 
  WeaponOffsetPatternDescription *weaponOffsetPatterns; 
  WeaponOffsetPatternDescription *v32; 
  double CurrentCurveFraction; 
  double v34; 
  double v35; 
  WeaponOffsetCurve v37; 
  WeaponOffsetCurve v38; 
  WeaponOffsetCurve v39; 

  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 888, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 889, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  holdTime = weapDef->weaponOffsetCurveKick.holdTime;
  interpType = weapDef->weaponOffsetCurveKick.interpType;
  v8 = 0;
  v37.m_blendTime = weapDef->weaponOffsetCurveKick.blendTime;
  shotDecayFireTimeFrac = weapDef->weaponOffsetCurveKick.shotDecayFireTimeFrac;
  v37.m_holdTime = holdTime;
  decayTime = weapDef->weaponOffsetCurveKick.decayTime;
  v37.m_shotDecayFireTimeFrac = shotDecayFireTimeFrac;
  adsFractionBegin = weapDef->weaponOffsetCurveKick.adsFractionBegin;
  v37.m_decayTime = decayTime;
  adsFractionEnd = weapDef->weaponOffsetCurveKick.adsFractionEnd;
  v37.m_adsFractionBegin = adsFractionBegin;
  blendTime = weapDef->weaponOffsetCurveSnapDecay.blendTime;
  v37.m_adsFractionEnd = adsFractionEnd;
  v14 = weapDef->weaponOffsetCurveSnapDecay.holdTime;
  v38.m_blendTime = blendTime;
  v15 = weapDef->weaponOffsetCurveSnapDecay.shotDecayFireTimeFrac;
  v38.m_holdTime = v14;
  v16 = weapDef->weaponOffsetCurveSnapDecay.decayTime;
  v37.m_interpType = interpType;
  interpTypeOut = weapDef->weaponOffsetCurveKick.interpTypeOut;
  v38.m_shotDecayFireTimeFrac = v15;
  v18 = weapDef->weaponOffsetCurveSnapDecay.adsFractionBegin;
  v38.m_decayTime = v16;
  v19 = weapDef->weaponOffsetCurveSnapDecay.adsFractionEnd;
  v37.m_interpTypeOut = interpTypeOut;
  v20 = weapDef->weaponOffsetCurveSnapDecay.interpType;
  v38.m_adsFractionBegin = v18;
  v21 = weapDef->weaponOffsetCurveAds.blendTime;
  v38.m_adsFractionEnd = v19;
  v22 = weapDef->weaponOffsetCurveAds.holdTime;
  v38.m_interpType = v20;
  v23 = weapDef->weaponOffsetCurveSnapDecay.interpTypeOut;
  v39.m_blendTime = v21;
  v24 = weapDef->weaponOffsetCurveAds.shotDecayFireTimeFrac;
  v39.m_holdTime = v22;
  v25 = weapDef->weaponOffsetCurveAds.decayTime;
  v38.m_interpTypeOut = v23;
  v26 = weapDef->weaponOffsetCurveAds.interpType;
  v39.m_shotDecayFireTimeFrac = v24;
  v27 = weapDef->weaponOffsetCurveAds.adsFractionBegin;
  v39.m_decayTime = v25;
  v28 = weapDef->weaponOffsetCurveAds.adsFractionEnd;
  v39.m_interpType = v26;
  v29 = weapDef->weaponOffsetCurveAds.interpTypeOut;
  v39.m_adsFractionBegin = v27;
  v39.m_adsFractionEnd = v28;
  v37.m_type = WOBC_KICK_BLEND;
  v38.m_type = WOBC_SNAP_DECAY_BLEND;
  v39.m_type = WOBC_ADS_BLEND;
  v39.m_interpTypeOut = v29;
  if ( weapDef->numWeaponOffsetPatterns <= 0 )
    return 0;
  for ( i = 0i64; ; ++i )
  {
    weaponOffsetPatterns = weapDef->weaponOffsetPatterns;
    v32 = &weaponOffsetPatterns[i];
    if ( weaponOffsetPatterns[i].curveType == WOBC_KICK_BLEND )
    {
      CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&v37, weaponMap, ps, ps->serverTime, &weaponOffsetPatterns[i]);
      if ( *(float *)&CurrentCurveFraction >= 0.001 )
        break;
    }
    if ( v32->curveType == WOBC_SNAP_DECAY_BLEND )
    {
      v34 = WeaponOffsetCurve::GetCurrentCurveFraction(&v38, weaponMap, ps, ps->serverTime, v32);
      if ( *(float *)&v34 >= 0.001 )
        break;
    }
    if ( v32->curveType == WOBC_ADS_BLEND )
    {
      v35 = WeaponOffsetCurve::GetCurrentCurveFraction(&v39, weaponMap, ps, ps->serverTime, v32);
      if ( *(float *)&v35 >= 0.001 )
        break;
    }
    if ( ++v8 >= weapDef->numWeaponOffsetPatterns )
      return 0;
  }
  return 1;
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
  unsigned int v8; 
  float v9; 
  float v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  float v15; 
  float v16; 
  int v17; 
  int v18; 
  double v19; 
  __int64 v21; 
  __int64 v22; 

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
    LODWORD(v21) = pattern->kickOrSnapDecayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1063, ASSERT_TYPE_ASSERT, "(unsigned)( pattern->kickOrSnapDecayIndex ) < (unsigned)( weapDef->numWeaponOffsetPatternsKickOrSnapDecay )", "pattern->kickOrSnapDecayIndex doesn't index weapDef->numWeaponOffsetPatternsKickOrSnapDecay\n\t%i not in [0, %i)", v21, weapDef->numWeaponOffsetPatternsKickOrSnapDecay) )
      __debugbreak();
  }
  v8 = (ps->weapCommon.weaponOffsetPatternFullAutoScale & (15 << (4 * LOBYTE(pattern->kickOrSnapDecayIndex)))) >> (4 * LOBYTE(pattern->kickOrSnapDecayIndex));
  if ( v8 > 0xF )
  {
    LODWORD(v22) = 15;
    LODWORD(v21) = (ps->weapCommon.weaponOffsetPatternFullAutoScale & (15 << (4 * LOBYTE(pattern->kickOrSnapDecayIndex)))) >> (4 * LOBYTE(pattern->kickOrSnapDecayIndex));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1067, ASSERT_TYPE_ASSERT, "( quantizedScale ) <= ( ((1u << (4u)) - 1u) )", "quantizedScale not in [0, FULL_AUTO_SCALE_BITS_PER_PATTERN_MAX]\n\t%u not in [0, %u]", v21, v22) )
      __debugbreak();
  }
  v9 = (float)v8;
  v10 = v9 * 0.06666667;
  I_fclamp(v10, 0.0, 1.0);
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x31u) )
  {
    v11 = ps->serverTimeInterpolated - ps->weapCommon.weaponOffsetSustainedFireStartTime;
    v12 = (int)(float)((float)((float)fireTime * v10) * (float)pattern->fullAutoBullets);
    if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1116, ASSERT_TYPE_ASSERT, "(currentSustainedFireTime >= 0)", (const char *)&queryFormat, "currentSustainedFireTime >= 0") )
      __debugbreak();
    v13 = v11 + v12;
    v14 = pattern->fullAutoBullets * fireTime;
    v15 = (float)v14;
    if ( v13 < v14 )
      v14 = v13;
    v16 = (float)v14 / v15;
    goto LABEL_37;
  }
  v17 = ps->serverTimeInterpolated - ps->weapCommon.weaponOffsetSustainedFireStopTime;
  if ( v17 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1131, ASSERT_TYPE_ASSERT, "(currentNoFireTime >= 0)", (const char *)&queryFormat, "currentNoFireTime >= 0") )
    __debugbreak();
  v18 = (int)(float)((float)(v10 * pattern->fullAutoDecay) * 1000.0);
  LODWORD(v19) = 0;
  if ( v18 )
  {
    v16 = v10 - (float)((float)((float)v17 * v10) / (float)v18);
LABEL_37:
    v19 = I_fclamp(v16, 0.0, 1.0);
  }
  return *(float *)&v19;
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
void BG_WeaponOffsets_OnWeaponChange(playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1501, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)&ps->weapCommon.weaponStartFireTime_BlendedOut = 0i64;
  *(_QWORD *)&ps->weapCommon.weaponOffsetHoldFireFastBlendTime = 0i64;
  *(_QWORD *)&ps->weapCommon.weaponOffsetPrevHoldFireBlendInDuration = 0i64;
  *(_QWORD *)&ps->weapCommon.weaponOffsetSustainedFireStopTime = 0i64;
  BG_SetHoldBlendFractionStartSlow(ps, 0.0);
  BG_SetHoldBlendFractionStartFast(ps, 0.0);
  BG_SetAdsBlendFractionStart(ps, 0.0);
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
  const WeaponDef *WeaponDef; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  float holdTime; 
  float shotDecayFireTimeFrac; 
  float decayTime; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  float adsFractionBegin; 
  float adsFractionEnd; 
  double CurrentCurveFraction; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  WeaponOffsetCurve v19; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1346, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1347, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v6 = handler->GetWeaponMap(handler);
  v7 = handler->GetWeaponMap(handler);
  WeaponDef = BG_WeaponOffsets_GetWeaponDef(v7, ps);
  serverTime = ps->serverTime;
  v19.m_type = WOBC_ADS_BLEND;
  interpType = WeaponDef->weaponOffsetCurveAds.interpType;
  holdTime = WeaponDef->weaponOffsetCurveAds.holdTime;
  v19.m_blendTime = WeaponDef->weaponOffsetCurveAds.blendTime;
  shotDecayFireTimeFrac = WeaponDef->weaponOffsetCurveAds.shotDecayFireTimeFrac;
  v19.m_holdTime = holdTime;
  decayTime = WeaponDef->weaponOffsetCurveAds.decayTime;
  v19.m_interpType = interpType;
  interpTypeOut = WeaponDef->weaponOffsetCurveAds.interpTypeOut;
  v19.m_shotDecayFireTimeFrac = shotDecayFireTimeFrac;
  adsFractionBegin = WeaponDef->weaponOffsetCurveAds.adsFractionBegin;
  v19.m_decayTime = decayTime;
  adsFractionEnd = WeaponDef->weaponOffsetCurveAds.adsFractionEnd;
  v19.m_interpTypeOut = interpTypeOut;
  v19.m_adsFractionBegin = adsFractionBegin;
  v19.m_adsFractionEnd = adsFractionEnd;
  CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&v19, v6, ps, serverTime, NULL);
  BG_SetAdsBlendFractionStart(ps, *(float *)&CurrentCurveFraction);
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
  const WeaponDef *WeaponDef; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  float holdTime; 
  float shotDecayFireTimeFrac; 
  float decayTime; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  float adsFractionBegin; 
  float adsFractionEnd; 
  double CurrentCurveFraction; 
  WeaponOffsetCurve v16; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1013, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1014, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v4 = handler->GetWeaponMap(handler);
  v5 = handler->GetWeaponMap(handler);
  WeaponDef = BG_WeaponOffsets_GetWeaponDef(v5, ps);
  serverTime = ps->serverTime;
  v16.m_type = WOBC_HOLD_FIRE_BLEND_FAST;
  interpType = WeaponDef->weaponOffsetCurveHoldFireFast.interpType;
  holdTime = WeaponDef->weaponOffsetCurveHoldFireFast.holdTime;
  v16.m_blendTime = WeaponDef->weaponOffsetCurveHoldFireFast.blendTime;
  shotDecayFireTimeFrac = WeaponDef->weaponOffsetCurveHoldFireFast.shotDecayFireTimeFrac;
  v16.m_holdTime = holdTime;
  decayTime = WeaponDef->weaponOffsetCurveHoldFireFast.decayTime;
  v16.m_interpType = interpType;
  interpTypeOut = WeaponDef->weaponOffsetCurveHoldFireFast.interpTypeOut;
  v16.m_shotDecayFireTimeFrac = shotDecayFireTimeFrac;
  adsFractionBegin = WeaponDef->weaponOffsetCurveHoldFireFast.adsFractionBegin;
  v16.m_decayTime = decayTime;
  adsFractionEnd = WeaponDef->weaponOffsetCurveHoldFireFast.adsFractionEnd;
  v16.m_interpTypeOut = interpTypeOut;
  v16.m_adsFractionBegin = adsFractionBegin;
  v16.m_adsFractionEnd = adsFractionEnd;
  CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&v16, v4, ps, serverTime, NULL);
  BG_SetHoldBlendFractionStartFast(ps, *(float *)&CurrentCurveFraction);
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
  const WeaponDef *WeaponDef; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  float holdTime; 
  float shotDecayFireTimeFrac; 
  float decayTime; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  float adsFractionBegin; 
  float adsFractionEnd; 
  double CurrentCurveFraction; 
  WeaponOffsetCurve v16; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 965, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 966, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v4 = handler->GetWeaponMap(handler);
  v5 = handler->GetWeaponMap(handler);
  WeaponDef = BG_WeaponOffsets_GetWeaponDef(v5, ps);
  serverTime = ps->serverTime;
  v16.m_type = WOBC_HOLD_FIRE_BLEND_SLOW;
  interpType = WeaponDef->weaponOffsetCurveHoldFireSlow.interpType;
  holdTime = WeaponDef->weaponOffsetCurveHoldFireSlow.holdTime;
  v16.m_blendTime = WeaponDef->weaponOffsetCurveHoldFireSlow.blendTime;
  shotDecayFireTimeFrac = WeaponDef->weaponOffsetCurveHoldFireSlow.shotDecayFireTimeFrac;
  v16.m_holdTime = holdTime;
  decayTime = WeaponDef->weaponOffsetCurveHoldFireSlow.decayTime;
  v16.m_interpType = interpType;
  interpTypeOut = WeaponDef->weaponOffsetCurveHoldFireSlow.interpTypeOut;
  v16.m_shotDecayFireTimeFrac = shotDecayFireTimeFrac;
  adsFractionBegin = WeaponDef->weaponOffsetCurveHoldFireSlow.adsFractionBegin;
  v16.m_decayTime = decayTime;
  adsFractionEnd = WeaponDef->weaponOffsetCurveHoldFireSlow.adsFractionEnd;
  v16.m_interpTypeOut = interpTypeOut;
  v16.m_adsFractionBegin = adsFractionBegin;
  v16.m_adsFractionEnd = adsFractionEnd;
  CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&v16, v4, ps, serverTime, NULL);
  BG_SetHoldBlendFractionStartSlow(ps, *(float *)&CurrentCurveFraction);
  ps->weapCommon.weaponOffsetHoldFireSlowBlendTime = ps->serverTime;
}

/*
==============
BG_WeaponOffsets_SetFullAutoScaleMarker
==============
*/
void BG_WeaponOffsets_SetFullAutoScaleMarker(const WeaponDef *weapDef, const WeaponOffsetPatternDescription *pattern, playerState_s *ps, const float fullAutoScale)
{
  unsigned int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1075, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !pattern && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1076, ASSERT_TYPE_ASSERT, "(pattern)", (const char *)&queryFormat, "pattern") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1077, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( fullAutoScale < 0.0 || fullAutoScale > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1078, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fullAutoScale ) && ( fullAutoScale ) <= ( 1.0f )", "fullAutoScale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", fullAutoScale, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( pattern->kickOrSnapDecayIndex >= (unsigned int)weapDef->numWeaponOffsetPatternsKickOrSnapDecay )
  {
    LODWORD(v13) = weapDef->numWeaponOffsetPatternsKickOrSnapDecay;
    LODWORD(v12) = pattern->kickOrSnapDecayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1079, ASSERT_TYPE_ASSERT, "(unsigned)( pattern->kickOrSnapDecayIndex ) < (unsigned)( weapDef->numWeaponOffsetPatternsKickOrSnapDecay )", "pattern->kickOrSnapDecayIndex doesn't index weapDef->numWeaponOffsetPatternsKickOrSnapDecay\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( weapDef->numWeaponOffsetPatternsKickOrSnapDecay > 7u )
  {
    LODWORD(v14) = weapDef->numWeaponOffsetPatternsKickOrSnapDecay;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1082, ASSERT_TYPE_ASSERT, "( static_cast<uint>(weapDef->numWeaponOffsetPatternsKickOrSnapDecay) ) <= ( (7u) )", "%s <= %s\n\t%u, %u", "static_cast<uint>(weapDef->numWeaponOffsetPatternsKickOrSnapDecay)", "FULL_AUTO_SCALE_NUM_MAX_PATTERNS", v14, 7) )
      __debugbreak();
  }
  ps->weapCommon.weaponOffsetPatternFullAutoScale &= 0x1FFFFFFFu;
  v9 = ps->weapCommon.weaponOffsetPatternFullAutoScale | (weapDef->numWeaponOffsetPatternsKickOrSnapDecay << 29);
  ps->weapCommon.weaponOffsetPatternFullAutoScale = v9;
  v10 = v9 & ~(15 << (4 * pattern->kickOrSnapDecayIndex));
  ps->weapCommon.weaponOffsetPatternFullAutoScale = v10;
  v11 = (int)(float)(fullAutoScale * 15.0);
  if ( v11 > 15 )
    v11 = 15;
  if ( v11 < 0 )
    v11 = 0;
  ps->weapCommon.weaponOffsetPatternFullAutoScale = v10 | (v11 << (4 * pattern->kickOrSnapDecayIndex));
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
  float v13; 
  float v14; 
  float v15; 
  double v16; 
  __int64 v18; 

  _XMM9 = *(_OWORD *)&isBlendingIn;
  if ( !outAdjustedBlendTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 226, ASSERT_TYPE_ASSERT, "(outAdjustedBlendTime)", (const char *)&queryFormat, "outAdjustedBlendTime") )
    __debugbreak();
  _XMM2 = *(_OWORD *)&startFraction ^ _xmm;
  __asm
  {
    vcmpneqss xmm0, xmm9, xmm8
    vblendvps xmm0, xmm2, xmm1, xmm0; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -1.0, 1.0);
  v13 = COERCE_FLOAT(_XMM0 & _xmm) * blendTime;
  *outAdjustedBlendTime = (int)(float)(v13 * 1000.0);
  v14 = *(float *)&_XMM0;
  if ( v13 > 0.000001 )
  {
    v16 = I_fclamp((float)((float)(currentTime - startTime) * 0.001) / v13, 0.0, 1.0);
    v15 = *(float *)&v16;
    if ( *(float *)&v16 != 0.0 && *(float *)&v16 != 1.0 )
    {
      switch ( interpType )
      {
        case WOBIT_LINEAR:
          return v15 * v14;
        case WOBIT_CUBIC_EASE_IN:
          v15 = (float)(*(float *)&v16 * *(float *)&v16) * *(float *)&v16;
          break;
        case WOBIT_CUBIC_EASE_OUT:
          v15 = (float)((float)((float)(*(float *)&v16 - 1.0) * (float)(*(float *)&v16 - 1.0)) * (float)(*(float *)&v16 - 1.0)) + 1.0;
          break;
        case WOBIT_QUARTIC_EASE_IN:
          v15 = (float)((float)(*(float *)&v16 * *(float *)&v16) * *(float *)&v16) * *(float *)&v16;
          break;
        case WOBIT_QUARTIC_EASE_OUT:
          v15 = 1.0 - (float)((float)((float)((float)(*(float *)&v16 - 1.0) * (float)(*(float *)&v16 - 1.0)) * (float)(*(float *)&v16 - 1.0)) * (float)(*(float *)&v16 - 1.0));
          break;
        case WOBIT_EXPONENTIAL_EASE_IN:
          v15 = powf_0(2.0, (float)(*(float *)&v16 - 1.0) * 10.0);
          break;
        case WOBIT_EXPONENTIAL_EASE_OUT:
          v15 = 1.0 - powf_0(2.0, *(float *)&v16 * -10.0);
          break;
        default:
          LODWORD(v18) = interpType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend interpolation type! %d", v18) )
            __debugbreak();
          break;
      }
    }
  }
  else
  {
    v15 = FLOAT_1_0;
  }
  return v15 * v14;
}

/*
==============
WeaponOffsetPattern::CalculatePatternWeight
==============
*/
void WeaponOffsetPattern::CalculatePatternWeight(WeaponOffsetPattern *this, const int serverTime, const BgWeaponMap *weaponMap, WeaponOffsetPatternCache *cache, float *outPatternStrength, vec3_t *outPatternScale)
{
  const dvar_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  double CurrentCurveFraction; 
  float v15; 
  const playerState_s *m_ps; 
  float v17; 
  const Weapon *r_currentWeapon; 
  bool v19; 
  const playerState_s *v20; 
  bool isAlternate; 
  double CrouchProneBlendMap; 
  float v23; 
  const playerState_s *v24; 
  float v25; 
  double v26; 
  float v27; 
  const playerState_s *v28; 
  float mountFraction; 
  scr_string_t patternKey; 
  float v31; 
  float fWeaponPosFrac; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  vec3_t outCrouchScale; 
  vec3_t outAttachmentScale; 
  vec3_t outProneScale; 
  vec3_t outMountScale; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 716, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_weaponOffsetsFullBlend;
  if ( !DCONST_DVARBOOL_weaponOffsetsFullBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "weaponOffsetsFullBlend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v11 = FLOAT_1_0;
    v12 = FLOAT_1_0;
    v13 = FLOAT_1_0;
    *outPatternStrength = 1.0;
  }
  else
  {
    CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&this->m_curve, weaponMap, this->m_ps, serverTime, this->m_desc);
    v15 = *(float *)&CurrentCurveFraction;
    if ( *(float *)&CurrentCurveFraction >= 0.000001 )
    {
      m_ps = this->m_ps;
      if ( this->m_desc->curveType == WOBC_ADS_BLEND )
        v17 = FLOAT_1_0;
      else
        v17 = (float)((float)(1.0 - m_ps->weapCommon.fWeaponPosFrac) * this->m_desc->hipScale) + m_ps->weapCommon.fWeaponPosFrac;
      *outPatternStrength = v17 * v15;
      r_currentWeapon = BG_GetViewmodelWeapon(weaponMap, m_ps);
      v19 = BG_UsingAlternate(this->m_ps);
      v20 = this->m_ps;
      isAlternate = v19;
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1218, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      CrouchProneBlendMap = BG_GetCrouchProneBlendMap(v20);
      v23 = *(float *)&CrouchProneBlendMap * 2.0;
      if ( *(float *)&CrouchProneBlendMap >= 0.5 )
        v23 = 2.0 - v23;
      I_fclamp(v23, 0.0, 1.0);
      v24 = this->m_ps;
      v25 = v23;
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v26 = BG_GetCrouchProneBlendMap(v24);
      v27 = (float)(*(float *)&v26 * 2.0) - 1.0;
      I_fclamp(v27, 0.0, 1.0);
      v28 = this->m_ps;
      mountFraction = v28->mountState.mountFraction;
      patternKey = this->m_desc->patternKey;
      v31 = v27;
      fWeaponPosFrac = v28->weapCommon.fWeaponPosFrac;
      outAttachmentScale.v[0] = FLOAT_1_0;
      outAttachmentScale.v[1] = FLOAT_1_0;
      outAttachmentScale.v[2] = FLOAT_1_0;
      outCrouchScale.v[0] = FLOAT_1_0;
      outCrouchScale.v[1] = FLOAT_1_0;
      outCrouchScale.v[2] = FLOAT_1_0;
      outProneScale.v[0] = FLOAT_1_0;
      outProneScale.v[1] = FLOAT_1_0;
      outProneScale.v[2] = FLOAT_1_0;
      outMountScale.v[0] = FLOAT_1_0;
      outMountScale.v[1] = FLOAT_1_0;
      outMountScale.v[2] = FLOAT_1_0;
      WeaponOffsetPattern::GetScales(this, weaponMap, v28, patternKey, fWeaponPosFrac, r_currentWeapon, isAlternate, cache, &outAttachmentScale, &outCrouchScale, &outProneScale, &outMountScale);
      v33 = (float)((float)((float)((float)(outCrouchScale.v[1] - 1.0) * v23) + 1.0) * outAttachmentScale.v[1]) * (float)((float)((float)(outProneScale.v[1] - 1.0) * v27) + 1.0);
      v34 = (float)((float)((float)((float)(outCrouchScale.v[2] - 1.0) * v23) + 1.0) * outAttachmentScale.v[2]) * (float)((float)((float)(outProneScale.v[2] - 1.0) * v27) + 1.0);
      v11 = (float)((float)((float)(outMountScale.v[2] - 1.0) * mountFraction) + 1.0) * v34;
      v35 = (float)((float)(outMountScale.v[1] - 1.0) * mountFraction) + 1.0;
      v36 = outProneScale.v[0];
      v37 = (float)(outCrouchScale.v[0] - 1.0) * v25;
      outPatternScale->v[1] = v33;
      v12 = v35 * v33;
      v38 = (float)(v37 + 1.0) * outAttachmentScale.v[0];
      outPatternScale->v[2] = v34;
      v13 = (float)(v38 * (float)((float)((float)(v36 - 1.0) * v31) + 1.0)) * (float)((float)((float)(outMountScale.v[0] - 1.0) * mountFraction) + 1.0);
    }
    else
    {
      *outPatternStrength = 0.0;
      v11 = 0.0;
      v12 = 0.0;
      v13 = 0.0;
    }
  }
  outPatternScale->v[0] = v13;
  outPatternScale->v[1] = v12;
  outPatternScale->v[2] = v11;
}

/*
==============
WeaponOffsetPattern::FindPatternScale
==============
*/
void WeaponOffsetPattern::FindPatternScale(const scr_string_t patternKey, const WeaponOffsetPatternScaleInfo *scales, const float adsFraction, const bool applyAtHip, vec3_t *outScales)
{
  int v8; 
  WeaponOffsetPatternScale *v9; 
  WeaponOffsetPatternScale *patternScales; 
  __int64 numPatternScales; 
  WeaponOffsetPatternScale *v12; 
  bool v13; 
  WeaponOffsetPatternScale *v14; 
  vec3_t *v15; 
  bool v16; 
  float v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !scales && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 564, ASSERT_TYPE_ASSERT, "(scales)", (const char *)&queryFormat, "scales") )
    __debugbreak();
  v8 = 0;
  v9 = NULL;
  if ( scales->numPatternScales > 0 )
  {
    patternScales = scales->patternScales;
    numPatternScales = (unsigned int)scales->numPatternScales;
    v12 = patternScales;
    do
    {
      v13 = patternScales->patternKey == patternKey;
      ++patternScales;
      v14 = v12;
      if ( !v13 )
        v14 = v9;
      ++v12;
      v9 = v14;
      --numPatternScales;
    }
    while ( numPatternScales );
  }
  v15 = outScales;
  if ( v9 )
  {
    *outScales = v9->scale;
    if ( !applyAtHip )
    {
      v16 = 1;
      do
      {
        if ( !v16 )
        {
          LODWORD(v19) = 3;
          LODWORD(v18) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v17 = (float)(adsFraction * v15->v[0]) + (float)(1.0 - adsFraction);
        if ( (unsigned int)v8 >= 3 )
        {
          LODWORD(v19) = 3;
          LODWORD(v18) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v15->v[0] = v17;
        v15 = (vec3_t *)((char *)v15 + 4);
        v16 = (unsigned int)++v8 < 3;
      }
      while ( v8 < 3 );
    }
  }
  else
  {
    outScales->v[0] = 1.0;
    outScales->v[1] = 1.0;
    outScales->v[2] = 1.0;
  }
}

/*
==============
WeaponOffsetCurve::GetAdsBlendCurveFractionDelta
==============
*/
float WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, int *outAdjustedBlendTime)
{
  int CurveTimeFromType; 
  double CurveStartFractionFromType; 
  float v11; 
  bool v12; 
  WeaponOffsetBlendInterpolationType v13; 
  const Weapon *ViewmodelWeapon; 
  bool v15; 
  float v16; 
  float m_adsFractionEnd; 
  float m_adsFractionBegin; 
  float m_decayTime; 
  double v20; 
  float outAdsTransInSpeedMs; 
  float outAdsTransOutSpeedMs; 

  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(this, NULL, ps, this->m_type);
  CurveStartFractionFromType = WeaponOffsetCurve::GetCurveStartFractionFromType(this, ps, this->m_type);
  v11 = *(float *)&CurveStartFractionFromType;
  v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Fu);
  v13 = WeaponOffsetCurve::PickInterpolationType(v12, (const WeaponOffsetBlendInterpolationType)this->m_interpType, (const WeaponOffsetBlendInterpolationType)this->m_interpTypeOut);
  if ( v12 )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    v15 = BG_UsingAlternate(ps);
    BG_GetADSTransTimes(weaponMap, ps, ViewmodelWeapon, v15, &outAdsTransInSpeedMs, &outAdsTransOutSpeedMs);
    if ( outAdsTransInSpeedMs <= 0.000001 )
      v16 = 0.0;
    else
      v16 = 1.0 / outAdsTransInSpeedMs;
    m_adsFractionEnd = this->m_adsFractionEnd;
    m_adsFractionBegin = this->m_adsFractionBegin;
    if ( m_adsFractionEnd < m_adsFractionBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 423, ASSERT_TYPE_ASSERT, "( m_adsFractionEnd ) >= ( m_adsFractionBegin )", "%s >= %s\n\t%g, %g", "m_adsFractionEnd", "m_adsFractionBegin", m_adsFractionEnd, m_adsFractionBegin) )
      __debugbreak();
    m_decayTime = (float)((float)(this->m_adsFractionEnd - this->m_adsFractionBegin) * v16) * 0.001;
  }
  else
  {
    m_decayTime = this->m_decayTime;
  }
  v20 = WeaponOffsetCurve::CalculateBlendCurrentFractionDelta(serverTime, CurveTimeFromType, v11, (float)v12, m_decayTime, v13, outAdjustedBlendTime);
  return *(float *)&v20;
}

/*
==============
WeaponOffsetCurve::GetAdsFractionBegin
==============
*/
float WeaponOffsetCurve::GetAdsFractionBegin(WeaponOffsetCurve *this)
{
  return this->m_adsFractionBegin;
}

/*
==============
WeaponOffsetCurve::GetAdsFractionEnd
==============
*/
float WeaponOffsetCurve::GetAdsFractionEnd(WeaponOffsetCurve *this)
{
  return this->m_adsFractionEnd;
}

/*
==============
WeaponOffsetCurve::GetBlendTimeScale
==============
*/
float WeaponOffsetCurve::GetBlendTimeScale(const float fractionToFinishBlend, const WeaponOffsetBlendInterpolationType interpType)
{
  float result; 

  LODWORD(result) = LODWORD(fractionToFinishBlend) & _xmm;
  return result;
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
  const WeaponOffsetPatternDescription *v10; 
  double HoldFireBlendCurveFractionDelta; 
  float v12; 
  double HoldBlendFractionStartSlow; 
  double v14; 
  double v15; 
  int CurveTimeFromType; 
  float v17; 
  float blendTime; 
  double v19; 
  float v20; 
  float v21; 
  double CurrentFullAutoScale; 
  float v23; 
  float v24; 
  double v25; 
  int v26; 
  float m_blendTime; 
  float v28; 
  int v29; 
  int WeaponHand; 
  int *p_weaponPrevFireTime; 
  __int64 v32; 
  int v33; 
  double v34; 
  double AdsBlendCurveFractionDelta; 
  __int64 v37; 
  int outAdjustedBlendTime; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 437, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_type = this->m_type;
  v10 = patternDesc;
  if ( ((this->m_type & 0xFFFFFFFA) != 0 || m_type == WOBC_ALWAYS_ON) && (((m_type - 2) & 0xFFFFFFFC) != 0 || m_type == WOBC_ADS_BLEND || !patternDesc) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 443, ASSERT_TYPE_ASSERT, "(((m_type == WOBC_HOLD_FIRE_BLEND_SLOW) || (m_type == WOBC_HOLD_FIRE_BLEND_FAST) || (m_type == WOBC_ADS_BLEND)) || (((m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND) || (m_type == WOBC_ALWAYS_ON)) && patternDesc))", (const char *)&queryFormat, "((m_type == WOBC_HOLD_FIRE_BLEND_SLOW) || (m_type == WOBC_HOLD_FIRE_BLEND_FAST) || (m_type == WOBC_ADS_BLEND)) || (((m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND) || (m_type == WOBC_ALWAYS_ON)) && patternDesc)") )
    __debugbreak();
  switch ( this->m_type )
  {
    case WOBC_HOLD_FIRE_BLEND_SLOW:
      HoldFireBlendCurveFractionDelta = WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(this, ps, serverTime);
      v12 = *(float *)&HoldFireBlendCurveFractionDelta;
      HoldBlendFractionStartSlow = BG_GetHoldBlendFractionStartSlow(ps);
      goto LABEL_13;
    case WOBC_HOLD_FIRE_BLEND_FAST:
      v15 = WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(this, ps, serverTime);
      v12 = *(float *)&v15;
      HoldBlendFractionStartSlow = BG_GetHoldBlendFractionStartFast(ps);
      goto LABEL_13;
    case WOBC_KICK_BLEND:
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 365, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 366, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
        __debugbreak();
      CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(this, weaponMap, ps, this->m_type);
      v17 = 0.0;
      if ( !CurveTimeFromType )
        goto LABEL_26;
      blendTime = v10->blendTime;
      if ( blendTime <= 0.0 )
      {
        blendTime = this->m_blendTime;
        if ( blendTime <= 0.0 )
          goto LABEL_26;
      }
      v19 = I_fclamp((float)(0.001 / blendTime) * (float)(serverTime - CurveTimeFromType), 0.0, 1.0);
      v20 = *(float *)&v19 * 3.1415927;
      sinf_0(*(float *)&v19 * 3.1415927);
      v21 = v20;
      CurrentFullAutoScale = WeaponOffsetCurve::GetCurrentFullAutoScale(this, weaponMap, ps, serverTime, v10);
      v23 = FLOAT_1_0;
      goto LABEL_25;
    case WOBC_SNAP_DECAY_BLEND:
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 319, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
        __debugbreak();
      v26 = WeaponOffsetCurve::GetCurveTimeFromType(this, weaponMap, ps, this->m_type);
      v17 = 0.0;
      if ( !v26 )
        goto LABEL_26;
      m_blendTime = v10->blendTime;
      v28 = (float)(serverTime - v26) * 0.001;
      if ( m_blendTime <= 0.0 )
      {
        m_blendTime = this->m_blendTime;
        if ( m_blendTime <= 0.0 )
          goto LABEL_26;
      }
      if ( v26 == serverTime )
      {
        v29 = 0;
        WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
        if ( WeaponHand >= 0 )
        {
          p_weaponPrevFireTime = &ps->weapState[0].weaponPrevFireTime;
          v32 = WeaponHand + 1i64;
          do
          {
            v33 = *p_weaponPrevFireTime;
            p_weaponPrevFireTime += 20;
            if ( v29 > v33 )
              v33 = v29;
            v29 = v33;
            --v32;
          }
          while ( v32 );
        }
        v28 = (float)(serverTime - v29) * 0.001;
      }
      v34 = I_fclamp(v28 / m_blendTime, 0.0, 1.0);
      v21 = sinf_0((float)((float)(*(float *)&v34 * 3.1415927) * 0.5) + 3.1415927) + 1.0;
      CurrentFullAutoScale = WeaponOffsetCurve::GetCurrentFullAutoScale(this, weaponMap, ps, serverTime, v10);
      v23 = FLOAT_1_0;
LABEL_25:
      v24 = *(float *)&CurrentFullAutoScale;
      v25 = I_fclamp(v21, 0.0, v23);
      v17 = v24 * *(float *)&v25;
LABEL_26:
      *(float *)&v14 = v17;
      break;
    case WOBC_ADS_BLEND:
      AdsBlendCurveFractionDelta = WeaponOffsetCurve::GetAdsBlendCurveFractionDelta(this, weaponMap, ps, serverTime, &outAdjustedBlendTime);
      v12 = *(float *)&AdsBlendCurveFractionDelta;
      HoldBlendFractionStartSlow = BG_GetAdsBlendFractionStart(ps);
LABEL_13:
      v14 = I_fclamp(v12 + *(float *)&HoldBlendFractionStartSlow, 0.0, 1.0);
      break;
    case WOBC_ALWAYS_ON:
      *(float *)&v14 = FLOAT_1_0;
      break;
    default:
      LODWORD(v37) = this->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 461, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern blend curve! %d", v37) )
        __debugbreak();
      LODWORD(v14) = 0;
      break;
  }
  return *(float *)&v14;
}

/*
==============
WeaponOffsetCurve::GetCurrentFullAutoScale
==============
*/
float WeaponOffsetCurve::GetCurrentFullAutoScale(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  const WeaponOffsetPatternDescription *v8; 
  const Weapon *ViewmodelWeapon; 
  bool v11; 
  bool v12; 
  const WeaponDef *v13; 
  float FullAutoScale; 
  int fireTime; 
  int fireDelay; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 469, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 470, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = patternDesc;
  if ( !patternDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 471, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
    __debugbreak();
  if ( (unsigned int)(this->m_type - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 472, ASSERT_TYPE_ASSERT, "((m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND))", (const char *)&queryFormat, "(m_type == WOBC_KICK_BLEND) || (m_type == WOBC_SNAP_DECAY_BLEND)") )
    __debugbreak();
  if ( v8->kickOrSnapDecayIndex < 0 )
    return FLOAT_1_0;
  if ( v8->fullAutoBullets < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 479, ASSERT_TYPE_ASSERT, "( patternDesc->fullAutoBullets ) >= ( 1 )", "%s >= %s\n\t%i, %i", "patternDesc->fullAutoBullets", "1", v8->fullAutoBullets, 1) )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v11 = BG_UsingAlternate(ps);
  v12 = BG_PlayerDualWielding(ps) == 1;
  v13 = BG_WeaponDef(ViewmodelWeapon, v11);
  BG_GetFireTime(weaponMap, ps, ViewmodelWeapon, v11, v12, 0, &fireTime, &fireDelay);
  if ( fireTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 490, ASSERT_TYPE_ASSERT, "(fireTime > 0)", (const char *)&queryFormat, "fireTime > 0") )
    __debugbreak();
  FullAutoScale = BG_WeaponOffsets_GetFullAutoScale(v13, v8, ps, fireTime);
  return (float)(FullAutoScale * v8->fullAutoScale) + (float)(1.0 - FullAutoScale);
}

/*
==============
WeaponOffsetCurve::GetCurveStartFractionFromType
==============
*/
double WeaponOffsetCurve::GetCurveStartFractionFromType(WeaponOffsetCurve *this, const playerState_s *ps, WeaponOffsetBlendCurveId type)
{
  double result; 

  switch ( type )
  {
    case WOBC_HOLD_FIRE_BLEND_SLOW:
      return BG_GetHoldBlendFractionStartSlow(ps);
    case WOBC_HOLD_FIRE_BLEND_FAST:
      return BG_GetHoldBlendFractionStartFast(ps);
    case WOBC_ADS_BLEND:
      return BG_GetAdsBlendFractionStart(ps);
    case WOBC_ALWAYS_ON:
      *(_QWORD *)&result = LODWORD(FLOAT_1_0);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 209, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled blend curve! %d", type) )
        __debugbreak();
      return 0.0;
  }
  return result;
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
float WeaponOffsetCurve::GetHoldFireBlendCurveFractionDelta(WeaponOffsetCurve *this, const playerState_s *ps, const int serverTime)
{
  int CurveTimeFromType; 
  double CurveStartFractionFromType; 
  float v8; 
  bool v9; 
  WeaponOffsetBlendInterpolationType interpType; 
  float m_blendTime; 
  double v12; 
  int outAdjustedBlendTime; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 394, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(this, NULL, ps, this->m_type);
  CurveStartFractionFromType = WeaponOffsetCurve::GetCurveStartFractionFromType(this, ps, this->m_type);
  v8 = *(float *)&CurveStartFractionFromType;
  v9 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, (this->m_type != WOBC_HOLD_FIRE_BLEND_SLOW) + 45);
  interpType = WeaponOffsetCurve::PickInterpolationType(v9, (const WeaponOffsetBlendInterpolationType)this->m_interpType, (const WeaponOffsetBlendInterpolationType)this->m_interpTypeOut);
  if ( v9 )
    m_blendTime = this->m_blendTime;
  else
    m_blendTime = this->m_decayTime;
  v12 = WeaponOffsetCurve::CalculateBlendCurrentFractionDelta(serverTime, CurveTimeFromType, v8, (float)v9, m_blendTime, interpType, &outAdjustedBlendTime);
  return *(float *)&v12;
}

/*
==============
WeaponOffsetCurve::GetHoldTime
==============
*/
float WeaponOffsetCurve::GetHoldTime(WeaponOffsetCurve *this)
{
  return this->m_holdTime;
}

/*
==============
WeaponOffsetCurve::GetKickBlendCurve
==============
*/
float WeaponOffsetCurve::GetKickBlendCurve(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  int CurveTimeFromType; 
  float blendTime; 
  double v11; 
  float v12; 
  double CurrentFullAutoScale; 
  float v14; 
  double v15; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 365, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !patternDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 366, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
    __debugbreak();
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(this, weaponMap, ps, this->m_type);
  if ( !CurveTimeFromType )
    return 0.0;
  blendTime = patternDesc->blendTime;
  if ( blendTime <= 0.0 )
  {
    blendTime = this->m_blendTime;
    if ( blendTime <= 0.0 )
      return 0.0;
  }
  v11 = I_fclamp((float)((float)(serverTime - CurveTimeFromType) * 0.001) / blendTime, 0.0, 1.0);
  v12 = *(float *)&v11 * 3.1415927;
  sinf_0(*(float *)&v11 * 3.1415927);
  CurrentFullAutoScale = WeaponOffsetCurve::GetCurrentFullAutoScale(this, weaponMap, ps, serverTime, patternDesc);
  v14 = *(float *)&CurrentFullAutoScale;
  v15 = I_fclamp(v12, 0.0, 1.0);
  return v14 * *(float *)&v15;
}

/*
==============
WeaponOffsetPattern::GetScales
==============
*/
void WeaponOffsetPattern::GetScales(WeaponOffsetPattern *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const scr_string_t patternKey, const float adsFraction, const Weapon *r_currentWeapon, const bool isAlternate, WeaponOffsetPatternCache *cache, vec3_t *outAttachmentScale, vec3_t *outCrouchScale, vec3_t *outProneScale, vec3_t *outMountScale)
{
  const WeaponDef *v14; 
  __int64 v15; 
  BgWeaponScalarAccumulator *v16; 
  __int64 v17; 
  BgWeaponScalarAccumulator *v18; 
  __int64 v19; 
  BgWeaponScalarAccumulator *v20; 
  const BgWeaponMap *v21; 
  unsigned int WeaponAttachments; 
  bool usingHybridScope; 
  WeaponAttachment **v24; 
  __int64 v25; 
  const WeaponAttachment *OverrideAttachmentWhenApplicable; 
  const WeaponOffsetPatternScaleInfo *weaponOffsetPatternScaleInfo; 
  bool v28; 
  AttADSStanceScales *adsStanceScales; 
  double FinalValue; 
  double v31; 
  double v32; 
  float v33; 
  double v34; 
  float v35; 
  double v36; 
  float v37; 
  double v38; 
  float v39; 
  double v40; 
  float v41; 
  double v42; 
  float v43; 
  double v44; 
  float v45; 
  bool v46; 
  vec3_t v49; 
  vec3_t v50; 
  vec3_t outScales; 
  vec3_t v52; 
  vec3_t v53; 
  vec3_t v54; 
  BgWeaponScalarAccumulator v55; 
  BgWeaponScalarAccumulator v56; 
  BgWeaponScalarAccumulator v57; 
  BgWeaponScalarAccumulator v58; 
  BgWeaponScalarAccumulator v59; 
  BgWeaponScalarAccumulator v60; 
  BgWeaponScalarAccumulator v61; 
  BgWeaponScalarAccumulator v62; 
  BgWeaponScalarAccumulator v63; 
  WeaponAttachment *attachments[30]; 

  if ( !cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 601, ASSERT_TYPE_ASSERT, "(cache)", (const char *)&queryFormat, "cache") )
    __debugbreak();
  v49.v[0] = FLOAT_1_0;
  v49.v[1] = FLOAT_1_0;
  v49.v[2] = FLOAT_1_0;
  v50.v[0] = FLOAT_1_0;
  v50.v[1] = FLOAT_1_0;
  v50.v[2] = FLOAT_1_0;
  outScales.v[0] = FLOAT_1_0;
  outScales.v[1] = FLOAT_1_0;
  outScales.v[2] = FLOAT_1_0;
  v14 = BG_WeaponDef(r_currentWeapon, isAlternate);
  WeaponOffsetPattern::FindPatternScale(patternKey, &v14->mountWeaponOffsetPatternScaleInfo, adsFraction, 1, &outScales);
  WeaponOffsetPattern::FindPatternScale(patternKey, &v14->crouchedWeaponOffsetPatternScaleInfo, adsFraction, 1, &v49);
  WeaponOffsetPattern::FindPatternScale(patternKey, &v14->proneWeaponOffsetPatternScaleInfo, adsFraction, 1, &v50);
  v15 = 3i64;
  v16 = &v58;
  v17 = 3i64;
  do
  {
    BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(v16++);
    --v17;
  }
  while ( v17 );
  v18 = &v55;
  v19 = 3i64;
  do
  {
    BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(v18++);
    --v19;
  }
  while ( v19 );
  v20 = &v61;
  do
  {
    BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(v20++);
    --v15;
  }
  while ( v15 );
  v21 = weaponMap;
  WeaponAttachments = BG_GetWeaponAttachments(r_currentWeapon, isAlternate, (const WeaponAttachment **)attachments);
  usingHybridScope = BG_IsUsingHybridScope(weaponMap, ps, r_currentWeapon);
  v46 = usingHybridScope;
  if ( WeaponAttachments )
  {
    v24 = attachments;
    v25 = WeaponAttachments;
    do
    {
      OverrideAttachmentWhenApplicable = BG_GetOverrideAttachmentWhenApplicable(v21, ps, r_currentWeapon, isAlternate, *v24, usingHybridScope);
      if ( !OverrideAttachmentWhenApplicable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 653, ASSERT_TYPE_ASSERT, "(attachment)", (const char *)&queryFormat, "attachment") )
        __debugbreak();
      weaponOffsetPatternScaleInfo = OverrideAttachmentWhenApplicable->weaponOffsetPatternScaleInfo;
      v28 = OverrideAttachmentWhenApplicable->type != ATTACHMENT_SCOPE;
      if ( weaponOffsetPatternScaleInfo )
      {
        WeaponOffsetPattern::FindPatternScale(patternKey, weaponOffsetPatternScaleInfo, adsFraction, v28, &v52);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v58, v52.v[0]);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v59, v52.v[1]);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v60, v52.v[2]);
      }
      adsStanceScales = OverrideAttachmentWhenApplicable->adsStanceScales;
      if ( adsStanceScales )
      {
        WeaponOffsetPattern::FindPatternScale(patternKey, &adsStanceScales->crouchedWeaponOffsetPatternScales, adsFraction, v28, &v53);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v55, v53.v[0]);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v56, v53.v[1]);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v57, v53.v[2]);
        WeaponOffsetPattern::FindPatternScale(patternKey, &OverrideAttachmentWhenApplicable->adsStanceScales->proneWeaponOffsetPatternScales, adsFraction, v28, &v54);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v61, v54.v[0]);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v62, v54.v[1]);
        BgWeaponScalarAccumulator::ApplyAdditiveScale(&v63, v54.v[2]);
      }
      usingHybridScope = v46;
      ++v24;
      v21 = weaponMap;
      --v25;
    }
    while ( v25 );
  }
  FinalValue = BgWeaponScalarAccumulator::GetFinalValue(&v58, 1.0);
  outAttachmentScale->v[0] = *(float *)&FinalValue;
  v31 = BgWeaponScalarAccumulator::GetFinalValue(&v59, 1.0);
  outAttachmentScale->v[1] = *(float *)&v31;
  v32 = BgWeaponScalarAccumulator::GetFinalValue(&v60, 1.0);
  v33 = v49.v[0];
  outAttachmentScale->v[2] = *(float *)&v32;
  v34 = BgWeaponScalarAccumulator::GetFinalValue(&v55, v33);
  v35 = v49.v[1];
  outCrouchScale->v[0] = *(float *)&v34;
  v36 = BgWeaponScalarAccumulator::GetFinalValue(&v56, v35);
  v37 = v49.v[2];
  outCrouchScale->v[1] = *(float *)&v36;
  v38 = BgWeaponScalarAccumulator::GetFinalValue(&v57, v37);
  v39 = v50.v[0];
  outCrouchScale->v[2] = *(float *)&v38;
  v40 = BgWeaponScalarAccumulator::GetFinalValue(&v55, v39);
  v41 = v50.v[1];
  outProneScale->v[0] = *(float *)&v40;
  v42 = BgWeaponScalarAccumulator::GetFinalValue(&v56, v41);
  v43 = v50.v[2];
  outProneScale->v[1] = *(float *)&v42;
  v44 = BgWeaponScalarAccumulator::GetFinalValue(&v57, v43);
  v45 = outScales.v[0];
  outProneScale->v[2] = *(float *)&v44;
  *(float *)&v44 = outScales.v[1];
  outMountScale->v[0] = v45;
  outMountScale->v[2] = outScales.v[2];
  outMountScale->v[1] = *(float *)&v44;
}

/*
==============
WeaponOffsetCurve::GetShotDecayFireTimeFrac
==============
*/
float WeaponOffsetCurve::GetShotDecayFireTimeFrac(WeaponOffsetCurve *this)
{
  return this->m_shotDecayFireTimeFrac;
}

/*
==============
WeaponOffsetCurve::GetSnapDecayBlendCurve
==============
*/
float WeaponOffsetCurve::GetSnapDecayBlendCurve(WeaponOffsetCurve *this, const BgWeaponMap *weaponMap, const playerState_s *ps, const int serverTime, const WeaponOffsetPatternDescription *patternDesc)
{
  int CurveTimeFromType; 
  float blendTime; 
  float v11; 
  int v12; 
  int WeaponHand; 
  int *p_weaponPrevFireTime; 
  __int64 v15; 
  int v16; 
  double v17; 
  float v18; 
  double CurrentFullAutoScale; 
  float v20; 
  double v21; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !patternDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 319, ASSERT_TYPE_ASSERT, "(patternDesc)", (const char *)&queryFormat, "patternDesc") )
    __debugbreak();
  CurveTimeFromType = WeaponOffsetCurve::GetCurveTimeFromType(this, weaponMap, ps, this->m_type);
  if ( !CurveTimeFromType )
    return 0.0;
  blendTime = patternDesc->blendTime;
  v11 = (float)(serverTime - CurveTimeFromType) * 0.001;
  if ( blendTime <= 0.0 )
  {
    blendTime = this->m_blendTime;
    if ( blendTime <= 0.0 )
      return 0.0;
  }
  if ( CurveTimeFromType == serverTime )
  {
    v12 = 0;
    WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
    if ( WeaponHand >= 0 )
    {
      p_weaponPrevFireTime = &ps->weapState[0].weaponPrevFireTime;
      v15 = WeaponHand + 1i64;
      do
      {
        v16 = *p_weaponPrevFireTime;
        p_weaponPrevFireTime += 20;
        if ( v12 > v16 )
          v16 = v12;
        v12 = v16;
        --v15;
      }
      while ( v15 );
    }
    v11 = (float)(serverTime - v12) * 0.001;
  }
  v17 = I_fclamp(v11 / blendTime, 0.0, 1.0);
  v18 = sinf_0((float)((float)(*(float *)&v17 * 3.1415927) * 0.5) + 3.1415927) + 1.0;
  CurrentFullAutoScale = WeaponOffsetCurve::GetCurrentFullAutoScale(this, weaponMap, ps, serverTime, patternDesc);
  v20 = *(float *)&CurrentFullAutoScale;
  v21 = I_fclamp(v18, 0.0, 1.0);
  return v20 * *(float *)&v21;
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
  const WeaponDef *WeaponDef; 
  int serverTime; 
  WeaponOffsetBlendInterpolationType interpType; 
  const WeaponDef *v7; 
  float holdTime; 
  float shotDecayFireTimeFrac; 
  float decayTime; 
  WeaponOffsetBlendInterpolationType interpTypeOut; 
  float adsFractionBegin; 
  float adsFractionEnd; 
  double CurrentCurveFraction; 
  float v15; 
  WeaponOffsetBlendInterpolationType v16; 
  int v17; 
  float v18; 
  float v19; 
  float v20; 
  WeaponOffsetBlendInterpolationType v21; 
  double v22; 
  const BgHandler *m_bgHandler; 
  const BgHandler *v24; 
  playerState_s *v25; 
  WeaponOffsetCurve v26; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1214, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  WeaponDef = BG_WeaponOffsets_GetWeaponDef(weaponMap, ps);
  serverTime = ps->serverTime;
  v26.m_type = WOBC_HOLD_FIRE_BLEND_SLOW;
  interpType = WeaponDef->weaponOffsetCurveHoldFireSlow.interpType;
  v7 = WeaponDef;
  holdTime = WeaponDef->weaponOffsetCurveHoldFireSlow.holdTime;
  v26.m_blendTime = WeaponDef->weaponOffsetCurveHoldFireSlow.blendTime;
  shotDecayFireTimeFrac = WeaponDef->weaponOffsetCurveHoldFireSlow.shotDecayFireTimeFrac;
  v26.m_holdTime = holdTime;
  decayTime = WeaponDef->weaponOffsetCurveHoldFireSlow.decayTime;
  v26.m_interpType = interpType;
  interpTypeOut = WeaponDef->weaponOffsetCurveHoldFireSlow.interpTypeOut;
  v26.m_shotDecayFireTimeFrac = shotDecayFireTimeFrac;
  adsFractionBegin = WeaponDef->weaponOffsetCurveHoldFireSlow.adsFractionBegin;
  v26.m_decayTime = decayTime;
  adsFractionEnd = WeaponDef->weaponOffsetCurveHoldFireSlow.adsFractionEnd;
  v26.m_interpTypeOut = interpTypeOut;
  v26.m_adsFractionBegin = adsFractionBegin;
  v26.m_adsFractionEnd = adsFractionEnd;
  CurrentCurveFraction = WeaponOffsetCurve::GetCurrentCurveFraction(&v26, weaponMap, ps, serverTime, NULL);
  v15 = v7->weaponOffsetCurveHoldFireFast.holdTime;
  v16 = v7->weaponOffsetCurveHoldFireFast.interpType;
  v17 = ps->serverTime;
  v26.m_blendTime = v7->weaponOffsetCurveHoldFireFast.blendTime;
  v26.m_shotDecayFireTimeFrac = v7->weaponOffsetCurveHoldFireFast.shotDecayFireTimeFrac;
  v18 = v7->weaponOffsetCurveHoldFireFast.adsFractionEnd;
  v26.m_holdTime = v15;
  v19 = v7->weaponOffsetCurveHoldFireFast.decayTime;
  v20 = *(float *)&CurrentCurveFraction;
  *(float *)&CurrentCurveFraction = v7->weaponOffsetCurveHoldFireFast.adsFractionBegin;
  v26.m_interpType = v16;
  v21 = v7->weaponOffsetCurveHoldFireFast.interpTypeOut;
  v26.m_adsFractionEnd = v18;
  v26.m_decayTime = v19;
  v26.m_adsFractionBegin = *(float *)&CurrentCurveFraction;
  v26.m_type = WOBC_HOLD_FIRE_BLEND_FAST;
  v26.m_interpTypeOut = v21;
  v22 = WeaponOffsetCurve::GetCurrentCurveFraction(&v26, weaponMap, ps, v17, NULL);
  if ( !BG_WeaponOffsets_AreAnyBulletBlendsActive(weaponMap, v7, ps) && v20 < 0.001 && *(float *)&v22 < 0.001 )
    ps->weapCommon.weaponStartFireTime_BlendedOut = ps->serverTime;
  m_bgHandler = pm->m_bgHandler;
  if ( !m_bgHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 982, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Du) )
  {
    BG_WeaponOffsets_ResetHoldFireSlowBlend(ps, m_bgHandler);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Du);
  }
  v24 = pm->m_bgHandler;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1030, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Eu) )
  {
    BG_WeaponOffsets_ResetHoldFireFastBlend(ps, v24);
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x2Eu);
  }
  v25 = pm->ps;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v25->weapCommon.weapFlags, ACTIVE, 0x31u) )
  {
    PM_WeaponOffsets_StoreFullAutoScales(pm);
    v25->weapCommon.weaponOffsetSustainedFireStartTime = pm->cmd.serverTime;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&v25->weapCommon.weapFlags, ACTIVE, 0x31u);
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
  bool v4; 
  bool v5; 
  const WeaponDef *v6; 
  int v7; 
  __int64 v8; 
  const WeaponOffsetPatternDescription *v9; 
  float FullAutoScale; 
  int fireTime; 
  int fireDelay; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1150, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1150, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v4 = BG_UsingAlternate(ps);
  v5 = BG_PlayerDualWielding(ps) == 1;
  v6 = BG_WeaponDef(ViewmodelWeapon, v4);
  v7 = 0;
  BG_GetFireTime(pm->weaponMap, ps, ViewmodelWeapon, v4, v5, 0, &fireTime, &fireDelay);
  if ( v6->numWeaponOffsetPatternsKickOrSnapDecay > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = v6->weaponOffsetPatternsKickOrSnapDecay[v8];
      FullAutoScale = BG_WeaponOffsets_GetFullAutoScale(v6, v9, ps, fireTime);
      BG_WeaponOffsets_SetFullAutoScaleMarker(v6, v9, ps, FullAutoScale);
      ++v7;
      ++v8;
    }
    while ( v7 < v6->numWeaponOffsetPatternsKickOrSnapDecay );
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
  playerState_s *v5; 
  int WeaponHand; 
  __int64 v7; 
  __int64 v8; 
  int *p_weaponState; 
  playerState_s *v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1330, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1330, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_ProceduralGunMotionDisabled(ps) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1501, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    *(_QWORD *)&ps->weapCommon.weaponStartFireTime_BlendedOut = 0i64;
    *(_QWORD *)&ps->weapCommon.weaponOffsetHoldFireFastBlendTime = 0i64;
    *(_QWORD *)&ps->weapCommon.weaponOffsetPrevHoldFireBlendInDuration = 0i64;
    *(_QWORD *)&ps->weapCommon.weaponOffsetSustainedFireStopTime = 0i64;
    BG_SetHoldBlendFractionStartSlow(ps, 0.0);
    BG_SetHoldBlendFractionStartFast(ps, 0.0);
    BG_SetAdsBlendFractionStart(ps, 0.0);
  }
  else
  {
    PM_WeaponOffsets_UpdateShotDecay(pm, pml);
    v5 = pm->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1307, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, v5);
    v7 = WeaponHand;
    if ( WeaponHand < 0 )
    {
LABEL_19:
      BG_WeaponOffsets_StopHoldFireSlowBlend(v5, pm->m_bgHandler);
      BG_WeaponOffsets_StopHoldFireFastBlend(v5, pm->m_bgHandler);
      v10 = pm->ps;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1193, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v10->weapCommon.weapFlags, ACTIVE, 0x31u) )
      {
        PM_WeaponOffsets_StoreFullAutoScales(pm);
        v10->weapCommon.weaponOffsetSustainedFireStopTime = pm->cmd.serverTime;
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&v10->weapCommon.weapFlags, ACTIVE, 0x31u);
      }
    }
    else
    {
      v8 = 0i64;
      p_weaponState = &v5->weapState[0].weaponState;
      while ( *p_weaponState != 16 )
      {
        ++v8;
        p_weaponState += 20;
        if ( v8 > v7 )
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
  bool v6; 
  bool v7; 
  const WeaponDef *v8; 
  playerState_s *v9; 
  int v10; 
  float shotDecayFireTimeFrac; 
  bool v13; 
  playerState_s *v14; 
  int v15; 
  float v16; 
  bool v17; 
  int fireTime; 
  int fireDelay; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1286, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1286, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, ps);
  v6 = BG_UsingAlternate(ps);
  v7 = BG_PlayerDualWielding(ps) == 1;
  v8 = BG_WeaponDef(ViewmodelWeapon, v6);
  BG_GetFireTime(pm->weaponMap, ps, ViewmodelWeapon, v6, v7, 0, &fireTime, &fireDelay);
  v9 = pm->ps;
  v10 = fireTime;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1244, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1245, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  shotDecayFireTimeFrac = v8->weaponOffsetCurveHoldFireSlow.shotDecayFireTimeFrac;
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( shotDecayFireTimeFrac < 0.0 || (v13 = shotDecayFireTimeFrac < 1.0, shotDecayFireTimeFrac > 1.0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1249, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( slowBlendShotDecayFireTimeFrac ) && ( slowBlendShotDecayFireTimeFrac ) <= ( 1.0f )", "slowBlendShotDecayFireTimeFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", shotDecayFireTimeFrac, *(double *)&_XMM10, DOUBLE_1_0) )
      __debugbreak();
    v13 = shotDecayFireTimeFrac < 1.0;
  }
  if ( v13 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v9->weapCommon.weapFlags, ACTIVE, 0x2Du) && pm->cmd.serverTime - v9->weapState[0].weaponFireTime >= (int)(float)((float)v10 * shotDecayFireTimeFrac) )
    BG_WeaponOffsets_StopHoldFireSlowBlend(v9, pm->m_bgHandler);
  v14 = pm->ps;
  v15 = fireTime;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1265, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1266, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v16 = v8->weaponOffsetCurveHoldFireFast.shotDecayFireTimeFrac;
  if ( v16 < 0.0 || (v17 = v16 < 1.0, v16 > 1.0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 1270, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fastBlendShotDecayFireTimeFrac ) && ( fastBlendShotDecayFireTimeFrac ) <= ( 1.0f )", "fastBlendShotDecayFireTimeFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v16, *(double *)&_XMM10, DOUBLE_1_0) )
      __debugbreak();
    v17 = v16 < 1.0;
  }
  if ( v17 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v14->weapCommon.weapFlags, ACTIVE, 0x2Eu) && pm->cmd.serverTime - v14->weapState[0].weaponFireTime >= (int)(float)((float)v15 * v16) )
    BG_WeaponOffsets_StopHoldFireFastBlend(v14, pm->m_bgHandler);
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
  const WeaponOffsetPatternDescription *m_desc; 
  WeaponOffsetPatternId patternType; 
  float v12; 
  int v15; 
  float v16; 
  int adsStartTime; 
  WeaponOffsetTransformType transformType; 
  double v19; 
  float v20; 
  double v21; 
  float v22; 
  float v23; 
  const WeaponOffsetPatternDescription *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int64 v31; 
  unsigned int pHoldrand; 
  float outPatternStrength; 
  vec3_t outPos; 
  vec3_t outPatternScale; 
  vec3_t start; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 775, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 776, ASSERT_TYPE_ASSERT, "(cache)", (const char *)&queryFormat, "cache") )
    __debugbreak();
  WeaponOffsetPattern::CalculatePatternWeight(this, serverTime, weaponMap, cache, &outPatternStrength, &outPatternScale);
  m_desc = this->m_desc;
  outPos.v[0] = 0.0;
  outPos.v[1] = 0.0;
  outPos.v[2] = 0.0;
  patternType = m_desc->patternType;
  if ( patternType == WOP_KEYFRAME )
  {
    v12 = FLOAT_1_0;
LABEL_39:
    outPos.v[1] = v12;
    outPos.v[0] = v12;
LABEL_40:
    outPos.v[2] = v12;
    goto LABEL_41;
  }
  if ( patternType == WOP_NOISY_SINE )
  {
    pHoldrand = this->m_ps->weapCommon.weaponStartFireTime_BlendedOut;
    v19 = BG_flrand(1.05, 1.15, &pHoldrand);
    v20 = *(float *)&v19;
    v21 = BG_flrand(1.2, 1.25, &pHoldrand);
    v22 = *(float *)&v21;
    if ( this->m_desc->frequency <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 806, ASSERT_TYPE_ASSERT, "(m_desc->frequency > 0.0f)", (const char *)&queryFormat, "m_desc->frequency > 0.0f") )
      __debugbreak();
    v23 = (float)((float)serverTime * 0.001) / this->m_desc->frequency;
    outPos.v[0] = sinf_0(v23);
    outPos.v[1] = sinf_0(v23 * v20);
    v12 = sinf_0(v23 * v22);
    goto LABEL_40;
  }
  if ( patternType != WOP_RANDOM_SQUARE )
  {
    if ( patternType != WOP_SINE )
    {
      LODWORD(v31) = m_desc->patternType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 845, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled pattern. %d", v31) )
        __debugbreak();
      goto LABEL_41;
    }
    if ( m_desc->frequency <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 836, ASSERT_TYPE_ASSERT, "(m_desc->frequency > 0.0f)", (const char *)&queryFormat, "m_desc->frequency > 0.0f") )
      __debugbreak();
    v12 = sinf_0((float)((float)serverTime * 0.001) / this->m_desc->frequency);
    goto LABEL_39;
  }
  if ( m_desc->frequency <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 817, ASSERT_TYPE_ASSERT, "(m_desc->frequency > 0.0f)", (const char *)&queryFormat, "m_desc->frequency > 0.0f") )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm4, 1 }
  v15 = (int)*(float *)&_XMM1;
  v16 = (float)((float)serverTime / (float)(int)(float)(this->m_desc->frequency * 1000.0)) - (float)(int)*(float *)&_XMM1;
  I_fclamp(v16, 0.0, 1.0);
  if ( cache->periodIndexUsedForRandomPatternSpline != (int)*(float *)&_XMM1 || !cache->randomPatternSpline.ncurves )
  {
    adsStartTime = this->m_ps->weapCommon.adsStartTime;
    transformType = this->m_desc->transformType;
    if ( transformType )
    {
      switch ( transformType )
      {
        case WOTT_VIEW_ANGLES:
          adsStartTime += 4057 * v15 + 4057;
          break;
        case WOTT_WEAPON_ORIGIN:
          adsStartTime += 5857 * v15 + 5857;
          break;
        case WOTT_WEAPON_ANGLES:
          adsStartTime += 5443 * v15 + 5443;
          break;
        default:
          LODWORD(v31) = this->m_desc->transformType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_offsets.cpp", 552, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled transform type %d in UpdateRandomPatternSpline", v31) )
            __debugbreak();
          break;
      }
    }
    else
    {
      adsStartTime += 3907 * v15 + 3907;
    }
    BG_BuildRandomPatternSpline(adsStartTime, &cache->randomPatternSpline);
    cache->periodIndexUsedForRandomPatternSpline = v15;
  }
  BG_BSpline_RelaxedCBezier_Evaluate(&cache->randomPatternSpline, v16, &outPos);
LABEL_41:
  v24 = this->m_desc;
  v25 = (float)(outPos.v[0] * this->m_desc->magnitude.v[0]) * outPatternScale.v[0];
  outPos.v[0] = outPos.v[0] * this->m_desc->magnitude.v[0];
  v26 = (float)(outPos.v[1] * v24->magnitude.v[1]) * outPatternScale.v[1];
  outPos.v[1] = outPos.v[1] * v24->magnitude.v[1];
  v27 = (float)(v24->magnitude.v[2] * outPos.v[2]) * outPatternScale.v[2];
  outPos.v[2] = v27;
  outPos.v[0] = v25;
  outPos.v[1] = v26;
  if ( ((v24->transformType - 1) & 0xFFFFFFFD) != 0 )
  {
    v28 = v25 * outPatternStrength;
    v29 = v26 * outPatternStrength;
    v30 = v27 * outPatternStrength;
  }
  else
  {
    *(_QWORD *)&start.y = 0i64;
    outPatternScale = outPos;
    start.v[0] = 0.0;
    SlerpAngles(&start, &outPatternScale, outPatternStrength, &outPos);
    v30 = outPos.v[2];
    v29 = outPos.v[1];
    v28 = outPos.v[0];
  }
  outOffset->v[0] = v28;
  outOffset->v[1] = v29;
  outOffset->v[2] = v30;
  outCombinesAngles->v[0] = v28 + outCombinesAngles->v[0];
  outCombinesAngles->v[1] = outOffset->v[1] + outCombinesAngles->v[1];
  outCombinesAngles->v[2] = outOffset->v[2] + outCombinesAngles->v[2];
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

