/*
==============
CL_DebugMapOverlay::DrawFilledExtBox
==============
*/

void __fastcall CL_DebugMapOverlay::DrawFilledExtBox(CL_DebugMapOverlay *this, const ExtentBounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawFilledExtBox@CL_DebugMapOverlay@@QEAAXAEBUExtentBounds@@HAEBTvec4_t@@W4ClipMode@1@@Z(this, bounds, borderPadding, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawFilledRect2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawFilledRect2D(CL_DebugMapOverlay *this, const vec2_t *minPos2D, const vec2_t *maxPos2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawFilledRect2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@0AEBTvec4_t@@W4ClipMode@1@@Z(this, minPos2D, maxPos2D, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::GetPlayerViewAngles
==============
*/

void __fastcall CL_DebugMapOverlay::GetPlayerViewAngles(CL_DebugMapOverlay *this, LocalClientNum_t localClient, vec3_t *viewPos, vec3_t *viewAngles)
{
  ?GetPlayerViewAngles@CL_DebugMapOverlay@@QEAAXW4LocalClientNum_t@@AEATvec3_t@@1@Z(this, localClient, viewPos, viewAngles);
}

/*
==============
CL_DebugMapOverlay::DrawCircle
==============
*/

void __fastcall CL_DebugMapOverlay::DrawCircle(CL_DebugMapOverlay *this, const vec3_t *centre, float radius, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawCircle@CL_DebugMapOverlay@@QEAAXAEBTvec3_t@@MAEBTvec4_t@@W4ClipMode@1@@Z(this, centre, radius, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::InitFromScale
==============
*/

void __fastcall CL_DebugMapOverlay::InitFromScale(CL_DebugMapOverlay *this, const ScreenPlacement *scrPlace, const vec2_t *screenBoundsMin, float desiredWorldToScreenScale, const Bounds *worldBounds)
{
  ?InitFromScale@CL_DebugMapOverlay@@QEAAXPEBUScreenPlacement@@AEBTvec2_t@@MAEBUBounds@@@Z(this, scrPlace, screenBoundsMin, desiredWorldToScreenScale, worldBounds);
}

/*
==============
CL_DebugMapOverlay::DrawPlayerArrow
==============
*/

void __fastcall CL_DebugMapOverlay::DrawPlayerArrow(CL_DebugMapOverlay *this, LocalClientNum_t localClientNum, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawPlayerArrow@CL_DebugMapOverlay@@QEAAXW4LocalClientNum_t@@W4ClipMode@1@@Z(this, localClientNum, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawCircle2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawCircle2D(CL_DebugMapOverlay *this, const vec2_t *centre, float radius, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawCircle2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@MAEBTvec4_t@@W4ClipMode@1@@Z(this, centre, radius, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::GetDefaultScreenBounds
==============
*/

void __fastcall CL_DebugMapOverlay::GetDefaultScreenBounds(CL_DebugMapOverlay *this, LocalClientNum_t localClientNum, bool fullOverlay, vec2_t *screenBoundsMin, vec2_t *screenBoundsMax)
{
  ?GetDefaultScreenBounds@CL_DebugMapOverlay@@QEAAXW4LocalClientNum_t@@_NAEATvec2_t@@2@Z(this, localClientNum, fullOverlay, screenBoundsMin, screenBoundsMax);
}

/*
==============
CL_DebugMapOverlay::DrawRect2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawRect2D(CL_DebugMapOverlay *this, const vec2_t *minPos, const vec2_t *maxPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawRect2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@0AEBTvec4_t@@W4ClipMode@1@@Z(this, minPos, maxPos, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::~CL_DebugMapOverlay
==============
*/

void __fastcall CL_DebugMapOverlay::~CL_DebugMapOverlay(CL_DebugMapOverlay *this)
{
  ??1CL_DebugMapOverlay@@QEAA@XZ(this);
}

/*
==============
CL_DebugMapOverlay::TransformPos
==============
*/

void __fastcall CL_DebugMapOverlay::TransformPos(CL_DebugMapOverlay *this, const vec3_t *inPos3D, vec2_t *outPos2D)
{
  ?TransformPos@CL_DebugMapOverlay@@QEAAXAEBTvec3_t@@AEATvec2_t@@@Z(this, inPos3D, outPos2D);
}

/*
==============
CL_DebugMapOverlay::TransformBox
==============
*/

void __fastcall CL_DebugMapOverlay::TransformBox(CL_DebugMapOverlay *this, const vec3_t *inMin3D, const vec3_t *inMax3D, vec2_t *outMin2D, vec2_t *outMax2D)
{
  ?TransformBox@CL_DebugMapOverlay@@QEAAXAEBTvec3_t@@0AEATvec2_t@@1@Z(this, inMin3D, inMax3D, outMin2D, outMax2D);
}

/*
==============
CL_DebugMapOverlay::DrawBox
==============
*/

void __fastcall CL_DebugMapOverlay::DrawBox(CL_DebugMapOverlay *this, const Bounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawBox@CL_DebugMapOverlay@@QEAAXAEBUBounds@@HAEBTvec4_t@@W4ClipMode@1@@Z(this, bounds, borderPadding, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawExtBox
==============
*/

void __fastcall CL_DebugMapOverlay::DrawExtBox(CL_DebugMapOverlay *this, const ExtentBounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawExtBox@CL_DebugMapOverlay@@QEAAXAEBUExtentBounds@@HAEBTvec4_t@@W4ClipMode@1@@Z(this, bounds, borderPadding, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawLine
==============
*/

void __fastcall CL_DebugMapOverlay::DrawLine(CL_DebugMapOverlay *this, const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawLine@CL_DebugMapOverlay@@QEAAXAEBTvec3_t@@0AEBTvec4_t@@W4ClipMode@1@@Z(this, startPos, endPos, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawArrow
==============
*/

void __fastcall CL_DebugMapOverlay::DrawArrow(CL_DebugMapOverlay *this, const vec3_t *pos, const vec3_t *angles, float size, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawArrow@CL_DebugMapOverlay@@QEAAXAEBTvec3_t@@0MAEBTvec4_t@@W4ClipMode@1@@Z(this, pos, angles, size, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawText2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawText2D(CL_DebugMapOverlay *this, const vec2_t *pos, const vec2_t *anchor, float fontScale, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, const char *label)
{
  ?DrawText2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@0MAEBTvec4_t@@W4ClipMode@1@PEBD@Z(this, pos, anchor, fontScale, color, clipMode, label);
}

/*
==============
CL_DebugMapOverlay::DrawLine2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawLine2D(CL_DebugMapOverlay *this, const vec2_t *startPos, const vec2_t *endPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawLine2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@0AEBTvec4_t@@W4ClipMode@1@@Z(this, startPos, endPos, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::Init
==============
*/

void __fastcall CL_DebugMapOverlay::Init(CL_DebugMapOverlay *this, const ScreenPlacement *scrPlace, const vec2_t *screenBoundsMin, const vec2_t *screenBoundsMax, const Bounds *worldBounds)
{
  ?Init@CL_DebugMapOverlay@@QEAAXPEBUScreenPlacement@@AEBTvec2_t@@1AEBUBounds@@@Z(this, scrPlace, screenBoundsMin, screenBoundsMax, worldBounds);
}

/*
==============
CL_DebugMapOverlay::DrawTextf2D
==============
*/

void CL_DebugMapOverlay::DrawTextf2D(CL_DebugMapOverlay *this, const vec2_t *pos2D, const vec2_t *anchor, float fontScale, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, const char *fmt, ...)
{
  ?DrawTextf2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@0MAEBTvec4_t@@W4ClipMode@1@PEBDZZ(this, pos2D, anchor, fontScale, color, clipMode, fmt);
}

/*
==============
CL_DebugMapOverlay::DrawFilledBox
==============
*/

void __fastcall CL_DebugMapOverlay::DrawFilledBox(CL_DebugMapOverlay *this, const Bounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ?DrawFilledBox@CL_DebugMapOverlay@@QEAAXAEBUBounds@@HAEBTvec4_t@@W4ClipMode@1@@Z(this, bounds, borderPadding, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawImage2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawImage2D(CL_DebugMapOverlay *this, const vec2_t *pos2D, float facingAngle, float size2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, Material *icon)
{
  ?DrawImage2D@CL_DebugMapOverlay@@QEAAXAEBTvec2_t@@MMAEBTvec4_t@@W4ClipMode@1@PEAUMaterial@@@Z(this, pos2D, facingAngle, size2D, color, clipMode, icon);
}

/*
==============
CL_DebugMapOverlay::DrawImage
==============
*/

void __fastcall CL_DebugMapOverlay::DrawImage(CL_DebugMapOverlay *this, const vec3_t *pos, const vec3_t *angles, float size2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, Material *icon)
{
  ?DrawImage@CL_DebugMapOverlay@@QEAAXAEBTvec3_t@@0MAEBTvec4_t@@W4ClipMode@1@PEAUMaterial@@@Z(this, pos, angles, size2D, color, clipMode, icon);
}

/*
==============
CL_DebugMapOverlay::~CL_DebugMapOverlay
==============
*/
void CL_DebugMapOverlay::~CL_DebugMapOverlay(CL_DebugMapOverlay *this)
{
  ;
}

/*
==============
CL_DebugMapOverlay::DrawArrow
==============
*/
void CL_DebugMapOverlay::DrawArrow(CL_DebugMapOverlay *this, const vec3_t *pos, const vec3_t *angles, float size, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  float v7; 
  float CompassNorthYaw; 
  Material *material; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  vec2_t startPos; 
  vec2_t s; 
  vec2_t c; 
  vec2_t endPos; 

  v7 = angles->v[1];
  CompassNorthYaw = GetCompassNorthYaw();
  material = cgMedia.streamingPlayerIcon;
  _XMM11 = 0i64;
  __asm { vroundss xmm2, xmm11, xmm1, 1 }
  v15 = (float)((float)(CompassNorthYaw - v7) * 0.0027777778) - *(float *)&_XMM2;
  if ( cgMedia.streamingPlayerIcon )
  {
    v16 = pos->v[1];
    v17 = angles->v[1];
    v18 = (float)((float)(v16 * this->m_transformScale[0].v[1]) + (float)(pos->v[0] * this->m_transformScale[0].v[0])) + this->m_transformOffset.v[0];
    v19 = (float)((float)(v16 * this->m_transformScale[1].v[1]) + (float)(pos->v[0] * this->m_transformScale[1].v[0])) + this->m_transformOffset.v[1];
    __asm { vroundss xmm3, xmm11, xmm1, 1 }
    v21 = (float)((float)((float)(GetCompassNorthYaw() - v17) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    if ( material && (clipMode || v18 >= this->m_screenBoundsMin.v[0] && v18 <= this->m_screenBoundsMax.v[0] && v19 >= this->m_screenBoundsMin.v[1] && v19 <= this->m_screenBoundsMax.v[1]) )
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(this->m_scrPlace, v18 + (float)(size * -0.5), (float)(size * -0.5) + v19, size, size, 1, 1, 0.0, 0.0, 1.0, 1.0, v21, 0, color, material);
  }
  else
  {
    v22 = pos->v[1];
    v23 = (float)((float)(v22 * this->m_transformScale[0].v[1]) + (float)(pos->v[0] * this->m_transformScale[0].v[0])) + this->m_transformOffset.v[0];
    endPos.v[1] = (float)((float)(v22 * this->m_transformScale[1].v[1]) + (float)(pos->v[0] * this->m_transformScale[1].v[0])) + this->m_transformOffset.v[1];
    v24 = endPos.v[1];
    endPos.v[0] = v23;
    FastSinCos(v15 * 6.2831855, (float *)&s, (float *)&c);
    FastSinCos(v15 * 6.2831855, (float *)&startPos, &v28);
    v25 = (float)(size * 0.25) * v28;
    v26 = (float)(size * 0.25) * startPos.v[0];
    FastSinCos(v15 * 6.2831855, &v28, (float *)&startPos);
    s.v[0] = v23 - (float)((float)(size * -0.5) * s.v[0]);
    s.v[1] = (float)((float)(size * -0.5) * c.v[0]) + v24;
    c.v[0] = (float)(v25 - v26) + v23;
    c.v[1] = (float)(v26 + v25) + v24;
    v27 = (float)((float)(size * 0.25) * startPos.v[0]) + (float)((float)(size * -0.25) * v28);
    startPos.v[0] = (float)((float)((float)(size * -0.25) * startPos.v[0]) - (float)((float)(size * 0.25) * v28)) + v23;
    startPos.v[1] = v27 + v24;
    CL_DebugMapOverlay::DrawLine2D(this, &s, &c, color, clipMode);
    CL_DebugMapOverlay::DrawLine2D(this, &c, &endPos, color, clipMode);
    CL_DebugMapOverlay::DrawLine2D(this, &endPos, &startPos, color, clipMode);
    CL_DebugMapOverlay::DrawLine2D(this, &startPos, &s, color, clipMode);
  }
}

/*
==============
CL_DebugMapOverlay::DrawBox
==============
*/
void CL_DebugMapOverlay::DrawBox(CL_DebugMapOverlay *this, const Bounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  ExtentBounds boundsa; 

  v5 = bounds->midPoint.v[1];
  v6 = bounds->midPoint.v[2];
  v7 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  boundsa.mins.v[0] = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  boundsa.mins.v[1] = v5 - bounds->halfSize.v[1];
  boundsa.mins.v[2] = v6 - bounds->halfSize.v[2];
  v8 = v5 + bounds->halfSize.v[1];
  boundsa.maxs.v[0] = v7;
  v9 = v6 + bounds->halfSize.v[2];
  boundsa.maxs.v[1] = v8;
  boundsa.maxs.v[2] = v9;
  CL_DebugMapOverlay::DrawExtBox(this, &boundsa, borderPadding, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawCircle2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawCircle2D(CL_DebugMapOverlay *this, const vec2_t *centre, double radius, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v5; 
  float v9; 
  unsigned int v11; 
  unsigned int i; 
  float v13; 
  float v14; 
  unsigned int v15; 
  float *v16; 
  double v17; 
  vec2_t startPos; 
  vec2_t endPos; 

  if ( clipMode == Clipped )
  {
    if ( (float)(centre->v[0] - *(float *)&radius) > this->m_screenBoundsMax.v[0] )
      return;
    v9 = centre->v[1];
    if ( (float)(v9 - *(float *)&radius) > this->m_screenBoundsMax.v[1] || (float)(centre->v[0] + *(float *)&radius) < this->m_screenBoundsMin.v[0] || (float)(v9 + *(float *)&radius) < this->m_screenBoundsMin.v[1] )
      return;
  }
  __asm { vmaxss  xmm6, xmm2, xmm1 }
  if ( *(float *)&_XMM6 <= 1.0 )
  {
    v11 = 4;
LABEL_11:
    for ( i = 0; i < v11; ++i )
    {
      v13 = centre->v[0];
      v14 = centre->v[1];
      v15 = 0;
      v16 = (float *)&startPos + 1;
      do
      {
        v17 = j___libm_sse2_sincosf_(v15 + i, centre, v5, color);
        ++v15;
        *v16 = v14 - (float)(*(float *)&v17 * *(float *)&_XMM6);
        *(v16 - 1) = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v17, (__m128)*(unsigned __int64 *)&v17, 1).m128_f32[0] * *(float *)&_XMM6) + v13;
        v16 += 2;
      }
      while ( v15 < 2 );
      CL_DebugMapOverlay::DrawLine2D(this, &startPos, &endPos, color, clipMode);
    }
    return;
  }
  v11 = 32;
  if ( (unsigned int)((int)(float)(*(float *)&_XMM6 * 0.25) + 8) < 0x20 )
    v11 = (int)(float)(*(float *)&_XMM6 * 0.25) + 8;
  if ( v11 )
    goto LABEL_11;
}

/*
==============
CL_DebugMapOverlay::DrawCircle
==============
*/

void __fastcall CL_DebugMapOverlay::DrawCircle(CL_DebugMapOverlay *this, const vec3_t *centre, double radius, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v5; 
  float v6; 
  float v9; 
  float v10; 
  __int128 v12; 
  unsigned int v14; 
  unsigned int i; 
  unsigned int v16; 
  float *v17; 
  double v18; 
  vec2_t startPos; 
  vec2_t endPos; 

  v6 = centre->v[1];
  v9 = (float)((float)(v6 * this->m_transformScale[0].v[1]) + (float)(centre->v[0] * this->m_transformScale[0].v[0])) + this->m_transformOffset.v[0];
  v10 = (float)((float)(v6 * this->m_transformScale[1].v[1]) + (float)(centre->v[0] * this->m_transformScale[1].v[0])) + this->m_transformOffset.v[1];
  v12 = *(_OWORD *)&radius;
  *(float *)&v12 = *(float *)&radius * this->m_uniformScale;
  _XMM1 = v12;
  if ( clipMode == Clipped && ((float)(v9 - *(float *)&v12) > this->m_screenBoundsMax.v[0] || (float)(v10 - *(float *)&v12) > this->m_screenBoundsMax.v[1] || (float)(v9 + *(float *)&v12) < this->m_screenBoundsMin.v[0] || (float)(v10 + *(float *)&v12) < this->m_screenBoundsMin.v[1]) )
    return;
  __asm { vmaxss  xmm6, xmm1, xmm2 }
  if ( *(float *)&_XMM6 <= 1.0 )
  {
    v14 = 4;
LABEL_11:
    for ( i = 0; i < v14; ++i )
    {
      v16 = 0;
      v17 = (float *)&startPos + 1;
      do
      {
        v18 = j___libm_sse2_sincosf_(v16 + i, centre, v5, color);
        ++v16;
        *v17 = v10 - (float)(*(float *)&v18 * *(float *)&_XMM6);
        *(v17 - 1) = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v18, (__m128)*(unsigned __int64 *)&v18, 1).m128_f32[0] * *(float *)&_XMM6) + v9;
        v17 += 2;
      }
      while ( v16 < 2 );
      CL_DebugMapOverlay::DrawLine2D(this, &startPos, &endPos, color, clipMode);
    }
    return;
  }
  v14 = 32;
  if ( (unsigned int)((int)(float)(*(float *)&_XMM6 * 0.25) + 8) < 0x20 )
    v14 = (int)(float)(*(float *)&_XMM6 * 0.25) + 8;
  if ( v14 )
    goto LABEL_11;
}

/*
==============
CL_DebugMapOverlay::DrawExtBox
==============
*/
void CL_DebugMapOverlay::DrawExtBox(CL_DebugMapOverlay *this, const ExtentBounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  float v5; 
  float v6; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  GfxColor v16; 
  __int128 v17; 
  float v22; 
  const ScreenPlacement *m_scrPlace; 
  unsigned int v27; 
  GfxColor *p_colora; 
  double v29; 
  GfxColor colora; 
  float h; 
  float w; 
  float y; 
  float x[4]; 

  v5 = this->m_transformScale[1].v[0];
  v6 = this->m_transformScale[1].v[1];
  v8 = this->m_transformScale[0].v[0];
  v9 = this->m_transformScale[0].v[1];
  v10 = (float)((float)(v8 * bounds->mins.v[0]) + (float)(v9 * bounds->mins.v[1])) + this->m_transformOffset.v[0];
  v11 = (float)((float)(v5 * bounds->mins.v[0]) + (float)(v6 * bounds->mins.v[1])) + this->m_transformOffset.v[1];
  v12 = (float)((float)(v8 * bounds->maxs.v[0]) + (float)(v9 * bounds->maxs.v[1])) + this->m_transformOffset.v[0];
  v14 = (float)((float)(v5 * bounds->maxs.v[0]) + (float)(v6 * bounds->maxs.v[1])) + this->m_transformOffset.v[1];
  v13 = v14;
  v15 = v10;
  if ( v10 > v12 )
  {
    v15 = v12;
    v12 = v10;
    *(float *)&colora.packed = v10;
  }
  if ( v11 > v14 )
  {
    *(float *)&v16.packed = v11;
    v11 = v14;
    colora = v16;
    v13 = *(float *)&v16.packed;
  }
  v17 = 0i64;
  *(float *)&_XMM3 = v15 - (float)borderPadding;
  *(float *)&_XMM2 = v11 - (float)borderPadding;
  *(float *)&v17 = (float)borderPadding + v12;
  _XMM5 = v17;
  v22 = (float)borderPadding + v13;
  *(float *)&_XMM4 = v22;
  if ( clipMode )
    goto LABEL_11;
  if ( *(float *)&_XMM3 <= this->m_screenBoundsMax.v[0] && *(float *)&_XMM2 <= this->m_screenBoundsMax.v[1] )
  {
    _XMM0 = LODWORD(this->m_screenBoundsMin.v[0]);
    if ( *(float *)&_XMM5 >= *(float *)&_XMM0 && v22 >= this->m_screenBoundsMin.v[1] )
    {
      __asm { vmaxss  xmm3, xmm0, xmm3 }
      _XMM0 = LODWORD(this->m_screenBoundsMin.v[1]);
      __asm { vminss  xmm5, xmm5, xmm1 }
      _XMM1 = LODWORD(this->m_screenBoundsMax.v[1]);
      __asm
      {
        vmaxss  xmm2, xmm0, xmm2
        vminss  xmm4, xmm1, xmm4
      }
LABEL_11:
      m_scrPlace = this->m_scrPlace;
      w = *(float *)&_XMM5 - *(float *)&_XMM3;
      h = *(float *)&_XMM4 - *(float *)&_XMM2;
      x[0] = *(float *)&_XMM3;
      y = *(float *)&_XMM2;
      ScrPlace_ApplyRect(m_scrPlace, x, &y, &w, &h, 1, 1);
      v27 = 0;
      p_colora = &colora;
      do
      {
        v29 = I_fclamp(color->v[v27], 0.0, 1.0);
        p_colora->array[0] = (int)(float)(*(float *)&v29 * 255.0);
        ++v27;
        p_colora = (GfxColor *)((char *)p_colora + 1);
      }
      while ( v27 < 4 );
      R_AddCmdDrawRect2D(x[0], y, w, h, &colora, 0);
    }
  }
}

/*
==============
CL_DebugMapOverlay::DrawFilledBox
==============
*/
void CL_DebugMapOverlay::DrawFilledBox(CL_DebugMapOverlay *this, const Bounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  ExtentBounds boundsa; 

  v5 = bounds->midPoint.v[1];
  v6 = bounds->midPoint.v[2];
  v7 = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  boundsa.mins.v[0] = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  boundsa.mins.v[1] = v5 - bounds->halfSize.v[1];
  boundsa.mins.v[2] = v6 - bounds->halfSize.v[2];
  v8 = v5 + bounds->halfSize.v[1];
  boundsa.maxs.v[0] = v7;
  v9 = v6 + bounds->halfSize.v[2];
  boundsa.maxs.v[1] = v8;
  boundsa.maxs.v[2] = v9;
  CL_DebugMapOverlay::DrawFilledExtBox(this, &boundsa, borderPadding, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawFilledExtBox
==============
*/
void CL_DebugMapOverlay::DrawFilledExtBox(CL_DebugMapOverlay *this, const ExtentBounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  const ScreenPlacement *m_scrPlace; 
  unsigned int v28; 
  GfxColor *p_colora; 
  double v30; 
  GfxColor colora; 
  float y; 
  float x; 
  float w; 

  v5 = this->m_transformScale[1].v[0];
  v6 = this->m_transformScale[1].v[1];
  v9 = this->m_transformScale[0].v[0];
  v10 = this->m_transformScale[0].v[1];
  v11 = (float)((float)(v9 * bounds->mins.v[0]) + (float)(v10 * bounds->mins.v[1])) + this->m_transformOffset.v[0];
  v12 = (float)((float)(v5 * bounds->mins.v[0]) + (float)(v6 * bounds->mins.v[1])) + this->m_transformOffset.v[1];
  v13 = (float)((float)(v9 * bounds->maxs.v[0]) + (float)(v10 * bounds->maxs.v[1])) + this->m_transformOffset.v[0];
  v15 = (float)((float)(v5 * bounds->maxs.v[0]) + (float)(v6 * bounds->maxs.v[1])) + this->m_transformOffset.v[1];
  v14 = v15;
  v16 = v11;
  if ( v11 > v13 )
  {
    v16 = v13;
    v13 = v11;
    w = v11;
  }
  if ( v12 > v15 )
  {
    v17 = v12;
    v12 = v15;
    w = v17;
    v14 = v17;
  }
  v18 = v13 + (float)borderPadding;
  v19 = v12 - (float)borderPadding;
  v21 = v14 + (float)borderPadding;
  v20 = v21;
  v22 = v16 - (float)borderPadding;
  if ( *(float *)&clipMode != 0.0 )
    goto LABEL_8;
  v23 = I_fclamp(v16 - (float)borderPadding, this->m_screenBoundsMin.v[0], this->m_screenBoundsMax.v[0]);
  v22 = *(float *)&v23;
  v24 = I_fclamp(v19, this->m_screenBoundsMin.v[1], this->m_screenBoundsMax.v[1]);
  v19 = *(float *)&v24;
  v25 = I_fclamp(v18, this->m_screenBoundsMin.v[0], this->m_screenBoundsMax.v[0]);
  v18 = *(float *)&v25;
  v26 = I_fclamp(v21, this->m_screenBoundsMin.v[1], this->m_screenBoundsMax.v[1]);
  v20 = *(float *)&v26;
  if ( v18 > v22 && *(float *)&v26 > v19 )
  {
LABEL_8:
    m_scrPlace = this->m_scrPlace;
    w = v18 - v22;
    *(float *)&clipMode = v20 - v19;
    x = v22;
    y = v19;
    ScrPlace_ApplyRect(m_scrPlace, &x, &y, &w, (float *)&clipMode, 1, 1);
    v28 = 0;
    p_colora = &colora;
    do
    {
      v30 = I_fclamp(color->v[v28], 0.0, 1.0);
      p_colora->array[0] = (int)(float)(*(float *)&v30 * 255.0);
      ++v28;
      p_colora = (GfxColor *)((char *)p_colora + 1);
    }
    while ( v28 < 4 );
    R_AddCmdDrawRect2D(x, y, w, *(float *)&clipMode, &colora, 1);
  }
}

/*
==============
CL_DebugMapOverlay::DrawFilledRect2D
==============
*/
void CL_DebugMapOverlay::DrawFilledRect2D(CL_DebugMapOverlay *this, const vec2_t *minPos2D, const vec2_t *maxPos2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  float v14; 
  const ScreenPlacement *m_scrPlace; 
  unsigned int v16; 
  GfxColor *p_colora; 
  double v18; 
  float x; 
  GfxColor colora; 
  vec2_t v21; 
  vec2_t v22; 
  float w; 
  float y; 

  v21 = *minPos2D;
  v22 = *maxPos2D;
  if ( *(float *)&clipMode != 0.0 )
  {
    v10 = v21.v[1];
    v8 = v21.v[0];
    v14 = v22.v[1];
    v12 = v22.v[0];
LABEL_6:
    m_scrPlace = this->m_scrPlace;
    w = v12 - v8;
    *(float *)&clipMode = v14 - v10;
    x = v8;
    y = v10;
    ScrPlace_ApplyRect(m_scrPlace, &x, &y, &w, (float *)&clipMode, 1, 1);
    v16 = 0;
    p_colora = &colora;
    do
    {
      v18 = I_fclamp(color->v[v16], 0.0, 1.0);
      p_colora->array[0] = (int)(float)(*(float *)&v18 * 255.0);
      ++v16;
      p_colora = (GfxColor *)((char *)p_colora + 1);
    }
    while ( v16 < 4 );
    R_AddCmdDrawRect2D(x, y, w, *(float *)&clipMode, &colora, 1);
    return;
  }
  v7 = I_fclamp(v21.v[0], this->m_screenBoundsMin.v[0], this->m_screenBoundsMax.v[0]);
  v8 = *(float *)&v7;
  v9 = I_fclamp(v21.v[1], this->m_screenBoundsMin.v[1], this->m_screenBoundsMax.v[1]);
  v10 = *(float *)&v9;
  v11 = I_fclamp(v22.v[0], this->m_screenBoundsMin.v[0], this->m_screenBoundsMax.v[0]);
  v12 = *(float *)&v11;
  v13 = I_fclamp(v22.v[1], this->m_screenBoundsMin.v[1], this->m_screenBoundsMax.v[1]);
  v14 = *(float *)&v13;
  if ( v12 > v8 && *(float *)&v13 > v10 )
    goto LABEL_6;
}

/*
==============
CL_DebugMapOverlay::DrawImage2D
==============
*/
void CL_DebugMapOverlay::DrawImage2D(CL_DebugMapOverlay *this, const vec2_t *pos2D, float facingAngle, float size2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, Material *icon)
{
  float v7; 

  if ( icon )
  {
    if ( clipMode || pos2D->v[0] >= this->m_screenBoundsMin.v[0] && pos2D->v[0] <= this->m_screenBoundsMax.v[0] && (v7 = pos2D->v[1], v7 >= this->m_screenBoundsMin.v[1]) && v7 <= this->m_screenBoundsMax.v[1] )
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(this->m_scrPlace, (float)(size2D * -0.5) + pos2D->v[0], (float)(size2D * -0.5) + pos2D->v[1], size2D, size2D, 1, 1, 0.0, 0.0, 1.0, 1.0, facingAngle, 0, color, icon);
  }
}

/*
==============
CL_DebugMapOverlay::DrawImage
==============
*/
void CL_DebugMapOverlay::DrawImage(CL_DebugMapOverlay *this, const vec3_t *pos, const vec3_t *angles, float size2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, Material *icon)
{
  float v7; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  v7 = pos->v[1];
  v9 = angles->v[1];
  v10 = (float)((float)(v7 * this->m_transformScale[0].v[1]) + (float)(pos->v[0] * this->m_transformScale[0].v[0])) + this->m_transformOffset.v[0];
  v11 = (float)((float)(v7 * this->m_transformScale[1].v[1]) + (float)(pos->v[0] * this->m_transformScale[1].v[0])) + this->m_transformOffset.v[1];
  v12 = (float)(GetCompassNorthYaw() - v9) * 0.0027777778;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  if ( icon && (clipMode || v10 >= this->m_screenBoundsMin.v[0] && v10 <= this->m_screenBoundsMax.v[0] && v11 >= this->m_screenBoundsMin.v[1] && v11 <= this->m_screenBoundsMax.v[1]) )
    CL_DrawRotatedStretchPicWithoutSplitScreenScaling(this->m_scrPlace, (float)(size2D * -0.5) + v10, (float)(size2D * -0.5) + v11, size2D, size2D, 1, 1, 0.0, 0.0, 1.0, 1.0, (float)(v12 - *(float *)&_XMM4) * 360.0, 0, color, icon);
}

/*
==============
CL_DebugMapOverlay::DrawLine2D
==============
*/
void CL_DebugMapOverlay::DrawLine2D(CL_DebugMapOverlay *this, const vec2_t *startPos, const vec2_t *endPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  const vec4_t *v5; 
  CL_DebugMapOverlay *v6; 
  __int64 v7; 
  vec2_t *p_m_screenBoundsMin; 
  int v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float *v13; 
  __int64 v14; 
  vec2_t *v15; 
  float v16; 
  float *v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  float *v21; 
  float v22; 
  float *v23; 
  float v24; 
  float v25; 
  float *v26; 
  float *v27; 
  double v28; 
  float v29; 
  const ScreenPlacement *m_scrPlace; 
  double v31; 
  double v32; 
  float v33; 
  double v34; 
  float v35; 
  double v36; 
  float v37; 
  double v38; 
  int v41[2]; 
  int v42[2]; 
  vec2_t v43; 
  vec2_t v44; 
  GfxPointVertex verts; 

  v5 = color;
  v43 = *startPos;
  v6 = this;
  v44 = *endPos;
  v7 = 2i64;
  if ( clipMode )
  {
LABEL_41:
    v26 = &verts.xyz.v[1];
    v27 = (float *)&v43 + 1;
    do
    {
      v28 = ScrPlace_ApplyX(v6->m_scrPlace, *(v27 - 1), 1);
      v29 = *v27;
      m_scrPlace = v6->m_scrPlace;
      *(v26 - 1) = *(float *)&v28;
      v31 = ScrPlace_ApplyY(m_scrPlace, v29, 1);
      *v26 = *(float *)&v31;
      *(float *)&v31 = v5->v[0];
      v26[1] = 0.0;
      v32 = I_fclamp(*(float *)&v31, 0.0, 1.0);
      v33 = *(float *)&v32 * 255.0;
      *(float *)&v32 = v5->v[1];
      *((_BYTE *)v26 + 8) = (int)v33;
      v34 = I_fclamp(*(float *)&v32, 0.0, 1.0);
      v35 = *(float *)&v34 * 255.0;
      *(float *)&v34 = v5->v[2];
      *((_BYTE *)v26 + 9) = (int)v35;
      v36 = I_fclamp(*(float *)&v34, 0.0, 1.0);
      v37 = *(float *)&v36 * 255.0;
      *(float *)&v36 = v5->v[3];
      *((_BYTE *)v26 + 10) = (int)v37;
      v38 = I_fclamp(*(float *)&v36, 0.0, 1.0);
      v26 += 4;
      v27 += 2;
      *((_BYTE *)v26 - 5) = (int)(float)(*(float *)&v38 * 255.0);
      --v7;
    }
    while ( v7 );
    R_AddCmdDrawLines2D(1u, 1u, &verts);
  }
  else
  {
    p_m_screenBoundsMin = &this->m_screenBoundsMin;
    v9 = 0;
    while ( 1 )
    {
      v10 = 0i64;
      v11 = v43.v[v9];
      v12 = v44.v[v9];
      if ( v12 >= v11 )
        v10 = 2i64;
      v13 = (float *)((char *)&v43 + v10 * 4);
      if ( p_m_screenBoundsMin->v[v9] > v43.v[v9 + v10] )
        break;
      v14 = 2i64;
      if ( v12 >= v11 )
        v14 = 0i64;
      v15 = (vec2_t *)((char *)&v43 + v14 * 4);
      if ( v6->m_screenBoundsMax.v[v9] < v43.v[v9 + v14] )
        break;
      if ( p_m_screenBoundsMin->v[v9] > v15->v[v9] )
      {
        v16 = *v13 - v15->v[0];
        *(float *)&v41[1] = v13[1] - v15->v[1];
        *(float *)v41 = v16;
        v17 = vec2_t::operator[](p_m_screenBoundsMin, v9);
        v18 = *v17 - *vec2_t::operator[](v15, v9);
        if ( *(float *)&v41[v9] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 343, ASSERT_TYPE_ASSERT, "(along[dim] != 0.0f)", (const char *)&queryFormat, "along[dim] != 0.0f") )
          __debugbreak();
        if ( (v18 < 0.0 || v18 > *(float *)&v41[v9]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 344, ASSERT_TYPE_ASSERT, "(amount >= 0.0f && amount <= along[dim])", (const char *)&queryFormat, "amount >= 0.0f && amount <= along[dim]") )
          __debugbreak();
        v19 = v18 / *(float *)&v41[v9];
        v15->v[0] = (float)((float)(*v13 - v15->v[0]) * v19) + v15->v[0];
        v15->v[1] = (float)((float)(v13[1] - v15->v[1]) * v19) + v15->v[1];
      }
      v20 = 0i64;
      if ( v12 >= v11 )
        v20 = 2i64;
      v21 = (float *)((char *)&v43 + v20 * 4);
      if ( v6->m_screenBoundsMax.v[v9] < v43.v[v9 + v20] )
      {
        v22 = *v21 - v15->v[0];
        *(float *)&v42[1] = v21[1] - v15->v[1];
        *(float *)v42 = v22;
        v23 = vec2_t::operator[](&v6->m_screenBoundsMax, v9);
        v24 = *v23 - *vec2_t::operator[](v15, v9);
        if ( *(float *)&v42[v9] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 352, ASSERT_TYPE_ASSERT, "(along[dim] != 0.0f)", (const char *)&queryFormat, "along[dim] != 0.0f") )
          __debugbreak();
        if ( (v24 < 0.0 || v24 > *(float *)&v42[v9]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 353, ASSERT_TYPE_ASSERT, "(amount >= 0.0f && amount <= along[dim])", (const char *)&queryFormat, "amount >= 0.0f && amount <= along[dim]") )
          __debugbreak();
        v25 = v24 / *(float *)&v42[v9];
        *v21 = (float)((float)(*v21 - v15->v[0]) * v25) + v15->v[0];
        v21[1] = (float)((float)(v21[1] - v15->v[1]) * v25) + v15->v[1];
      }
      if ( v21[v9] < v15->v[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 356, ASSERT_TYPE_ASSERT, "(points[minIdx][dim] <= points[maxIdx][dim])", (const char *)&queryFormat, "points[minIdx][dim] <= points[maxIdx][dim]") )
        __debugbreak();
      if ( (float)(p_m_screenBoundsMin->v[v9] - 0.0099999998) > v15->v[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 357, ASSERT_TYPE_ASSERT, "(points[minIdx][dim] >= m_screenBoundsMin[dim] - TOLERANCE)", (const char *)&queryFormat, "points[minIdx][dim] >= m_screenBoundsMin[dim] - TOLERANCE") )
        __debugbreak();
      if ( (float)(v6->m_screenBoundsMax.v[v9] + 0.0099999998) < v21[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 358, ASSERT_TYPE_ASSERT, "(points[maxIdx][dim] <= m_screenBoundsMax[dim] + TOLERANCE)", (const char *)&queryFormat, "points[maxIdx][dim] <= m_screenBoundsMax[dim] + TOLERANCE") )
        __debugbreak();
      v6 = this;
      if ( (unsigned int)++v9 >= 2 )
      {
        if ( (float)((float)((float)(v44.v[1] - v43.v[1]) * (float)(v44.v[1] - v43.v[1])) + (float)((float)(v44.v[0] - v43.v[0]) * (float)(v44.v[0] - v43.v[0]))) < 0.0099999998 )
          return;
        v5 = color;
        goto LABEL_41;
      }
    }
  }
}

/*
==============
CL_DebugMapOverlay::DrawLine
==============
*/
void CL_DebugMapOverlay::DrawLine(CL_DebugMapOverlay *this, const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  vec2_t endPosa; 
  vec2_t startPosa; 

  v5 = startPos->v[1];
  v6 = this->m_transformScale[1].v[0];
  v7 = v6 * endPos->v[0];
  v8 = this->m_transformScale[0].v[0];
  v9 = (float)((float)(v8 * startPos->v[0]) + (float)(v5 * this->m_transformScale[0].v[1])) + this->m_transformOffset.v[0];
  v10 = v5 * this->m_transformScale[1].v[1];
  v11 = endPos->v[1];
  v12 = (float)(v6 * startPos->v[0]) + v10;
  v13 = v11 * this->m_transformScale[0].v[1];
  startPosa.v[0] = v9;
  v14 = v12 + this->m_transformOffset.v[1];
  v15 = (float)(v8 * endPos->v[0]) + v13;
  v16 = v11 * this->m_transformScale[1].v[1];
  startPosa.v[1] = v14;
  endPosa.v[0] = v15 + this->m_transformOffset.v[0];
  endPosa.v[1] = (float)(v7 + v16) + this->m_transformOffset.v[1];
  CL_DebugMapOverlay::DrawLine2D(this, &startPosa, &endPosa, color, clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawPlayerArrow
==============
*/
void CL_DebugMapOverlay::DrawPlayerArrow(CL_DebugMapOverlay *this, LocalClientNum_t localClientNum, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  double v7; 
  int v9; 
  vec3_t pos; 
  vec3_t angles; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 272, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( localClientNum ) ) < (unsigned)( ( sizeof( *array_counter( PLAYER_ARROW_COLOR ) ) + 0 ) )", "static_cast<uint>( localClientNum ) doesn't index ARRAY_COUNT( PLAYER_ARROW_COLOR )\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  v7 = *(double *)LocalClientGlobals->refdef.viewOffset.v;
  pos.v[2] = LocalClientGlobals->refdef.viewOffset.v[2];
  *(double *)pos.v = v7;
  AxisToAngles(&LocalClientGlobals->refdef.view.axis, &angles);
  CL_DebugMapOverlay::DrawArrow(this, &pos, &angles, 10.0, &PLAYER_ARROW_COLOR[v3], clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawRect2D
==============
*/
void CL_DebugMapOverlay::DrawRect2D(CL_DebugMapOverlay *this, const vec2_t *minPos, const vec2_t *maxPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  const ScreenPlacement *m_scrPlace; 
  unsigned int v15; 
  GfxColor *v16; 
  double v17; 
  float h; 
  float w; 
  float y; 
  float x[2]; 
  GfxColor colora[2]; 

  if ( clipMode )
  {
    *(vec2_t *)colora[0].array = *minPos;
    LODWORD(_XMM6) = colora[1];
    LODWORD(_XMM5) = colora[0];
    *(vec2_t *)x = *maxPos;
    *(float *)&_XMM2 = x[1];
    *(float *)&_XMM0 = x[0];
LABEL_8:
    m_scrPlace = this->m_scrPlace;
    x[0] = *(float *)&_XMM5;
    y = *(float *)&_XMM6;
    w = *(float *)&_XMM0 - *(float *)&_XMM5;
    h = *(float *)&_XMM2 - *(float *)&_XMM6;
    ScrPlace_ApplyRect(m_scrPlace, x, &y, &w, &h, 1, 1);
    v15 = 0;
    v16 = colora;
    do
    {
      v17 = I_fclamp(color->v[v15], 0.0, 1.0);
      v16->array[0] = (int)(float)(*(float *)&v17 * 255.0);
      ++v15;
      v16 = (GfxColor *)((char *)v16 + 1);
    }
    while ( v15 < 4 );
    R_AddCmdDrawRect2D(x[0], y, w, h, colora, 0);
    return;
  }
  _XMM0 = LODWORD(minPos->v[0]);
  if ( *(float *)&_XMM0 <= this->m_screenBoundsMax.v[0] && minPos->v[1] <= this->m_screenBoundsMax.v[1] )
  {
    _XMM4 = LODWORD(maxPos->v[0]);
    if ( *(float *)&_XMM4 >= this->m_screenBoundsMin.v[0] && maxPos->v[1] >= this->m_screenBoundsMin.v[1] )
    {
      __asm { vmaxss  xmm5, xmm0, xmm5 }
      _XMM0 = LODWORD(this->m_screenBoundsMin.v[1]);
      __asm { vmaxss  xmm6, xmm0, xmm1 }
      _XMM1 = LODWORD(this->m_screenBoundsMax.v[1]);
      __asm
      {
        vminss  xmm0, xmm4, xmm2
        vminss  xmm2, xmm1, xmm3
      }
      goto LABEL_8;
    }
  }
}

/*
==============
CL_DebugMapOverlay::DrawText2D
==============
*/
void CL_DebugMapOverlay::DrawText2D(CL_DebugMapOverlay *this, const vec2_t *pos, const vec2_t *anchor, float fontScale, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, const char *label)
{
  float v10; 
  GfxFont *FontHandle; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  float y; 

  if ( clipMode || pos->v[0] >= this->m_screenBoundsMin.v[0] && pos->v[0] <= this->m_screenBoundsMax.v[0] && (v10 = pos->v[1], v10 >= this->m_screenBoundsMin.v[1]) && v10 <= this->m_screenBoundsMax.v[1] )
  {
    FontHandle = UI_GetFontHandle(this->m_scrPlace, 5, fontScale);
    if ( !FontHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 514, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
      __debugbreak();
    v12 = -1i64;
    v13 = -1i64;
    do
      ++v13;
    while ( label[v13] );
    v14 = UI_TextWidth(label, v13, FontHandle, fontScale);
    y = (float)((float)(1.0 - anchor->v[1]) * (float)UI_TextHeight(FontHandle, fontScale)) + pos->v[1];
    do
      ++v12;
    while ( label[v12] );
    UI_DrawText(this->m_scrPlace, label, v12, FontHandle, pos->v[0] - (float)((float)v14 * anchor->v[0]), y, 1, 1, fontScale, color, 3);
  }
}

/*
==============
CL_DebugMapOverlay::DrawTextf2D
==============
*/
void CL_DebugMapOverlay::DrawTextf2D(CL_DebugMapOverlay *this, const vec2_t *pos2D, const vec2_t *anchor, float fontScale, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, const char *fmt, ...)
{
  float v10; 
  GfxFont *FontHandle; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  float y; 
  char dest[512]; 
  va_list va; 

  va_start(va, fmt);
  Com_vsprintf_truncate(dest, 0x200ui64, 0x200ui64, fmt, va);
  if ( clipMode || pos2D->v[0] >= this->m_screenBoundsMin.v[0] && pos2D->v[0] <= this->m_screenBoundsMax.v[0] && (v10 = pos2D->v[1], v10 >= this->m_screenBoundsMin.v[1]) && v10 <= this->m_screenBoundsMax.v[1] )
  {
    FontHandle = UI_GetFontHandle(this->m_scrPlace, 5, fontScale);
    if ( !FontHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 514, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
      __debugbreak();
    v12 = -1i64;
    v13 = -1i64;
    do
      ++v13;
    while ( dest[v13] );
    v14 = UI_TextWidth(dest, v13, FontHandle, fontScale);
    y = (float)((float)(1.0 - anchor->v[1]) * (float)UI_TextHeight(FontHandle, fontScale)) + pos2D->v[1];
    do
      ++v12;
    while ( dest[v12] );
    UI_DrawText(this->m_scrPlace, dest, v12, FontHandle, pos2D->v[0] - (float)((float)v14 * anchor->v[0]), y, 1, 1, fontScale, color, 3);
  }
}

/*
==============
GetCompassNorthYaw
==============
*/
float GetCompassNorthYaw()
{
  cg_t *LocalClientGlobals; 
  float v5; 

  if ( cg_t::ms_allocatedCount <= 0 )
    return 0.0;
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 81, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _XMM1 = LODWORD(FLOAT_N45_0);
  _XMM0 = 0i64;
  __asm
  {
    vcmpless xmm3, xmm0, xmm4
    vblendvps xmm0, xmm1, xmm2, xmm3
  }
  v5 = *(float *)&_XMM0 + LocalClientGlobals->compassNorthYaw;
  return v5 - fmodf_0(v5, 90.0);
}

/*
==============
CL_DebugMapOverlay::GetDefaultScreenBounds
==============
*/
void CL_DebugMapOverlay::GetDefaultScreenBounds(CL_DebugMapOverlay *this, LocalClientNum_t localClientNum, bool fullOverlay, vec2_t *screenBoundsMin, vec2_t *screenBoundsMax)
{
  if ( fullOverlay )
    goto LABEL_8;
  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount == 1 )
  {
LABEL_8:
    *screenBoundsMin = FULL_SCREEN_MIN;
    *screenBoundsMax = FULL_SCREEN_MAX;
  }
  else
  {
    *screenBoundsMin = ZOOM_SCREEN_MIN;
    *screenBoundsMax = ZOOM_SCREEN_MAX;
    if ( localClientNum )
    {
      screenBoundsMin->v[1] = screenBoundsMin->v[1] + 230.0;
      screenBoundsMax->v[1] = screenBoundsMax->v[1] + 230.0;
    }
  }
}

/*
==============
CL_DebugMapOverlay::GetPlayerViewAngles
==============
*/
void CL_DebugMapOverlay::GetPlayerViewAngles(CL_DebugMapOverlay *this, LocalClientNum_t localClient, vec3_t *viewPos, vec3_t *viewAngles)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClient);
  *viewPos = LocalClientGlobals->refdef.viewOffset;
  AxisToAngles(&LocalClientGlobals->refdef.view.axis, viewAngles);
}

/*
==============
CL_DebugMapOverlay::Init
==============
*/
void CL_DebugMapOverlay::Init(CL_DebugMapOverlay *this, const ScreenPlacement *scrPlace, const vec2_t *screenBoundsMin, const vec2_t *screenBoundsMax, const Bounds *worldBounds)
{
  float v9; 
  float v10; 
  float v11; 
  float CompassNorthYaw; 
  __int128 v13; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  char v26; 
  unsigned int v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  unsigned int v32; 
  float v34; 
  float v35; 
  __int128 v37; 
  unsigned int v38; 
  bool v40; 
  float v41; 
  float v42; 
  unsigned int v43; 
  unsigned int v44; 
  float v45; 
  unsigned int v46; 
  unsigned int v48; 
  bool v49; 
  __m128 v51; 
  float v52; 
  float v53; 
  float c; 
  float s; 
  __int64 v56; 

  if ( screenBoundsMax->v[0] <= screenBoundsMin->v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 117, ASSERT_TYPE_ASSERT, "(screenBoundsMin.x < screenBoundsMax.x)", (const char *)&queryFormat, "screenBoundsMin.x < screenBoundsMax.x") )
    __debugbreak();
  if ( screenBoundsMax->v[1] <= screenBoundsMin->v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 118, ASSERT_TYPE_ASSERT, "(screenBoundsMin.y < screenBoundsMax.y)", (const char *)&queryFormat, "screenBoundsMin.y < screenBoundsMax.y") )
    __debugbreak();
  if ( worldBounds->halfSize.v[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 119, ASSERT_TYPE_ASSERT, "(worldBounds.halfSize.x > 0.0f)", (const char *)&queryFormat, "worldBounds.halfSize.x > 0.0f") )
    __debugbreak();
  if ( worldBounds->halfSize.v[1] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 120, ASSERT_TYPE_ASSERT, "(worldBounds.halfSize.y > 0.0f)", (const char *)&queryFormat, "worldBounds.halfSize.y > 0.0f") )
    __debugbreak();
  v9 = GetCompassNorthYaw() * 0.017453292;
  FastSinCos(v9, &s, &c);
  v10 = c;
  v11 = s;
  CompassNorthYaw = GetCompassNorthYaw();
  FastSinCos(CompassNorthYaw * 0.017453292, &c, &s);
  v13 = LODWORD(FLOAT_0_5);
  *(float *)&v13 = (float)(0.5 / (float)((float)(COERCE_FLOAT(LODWORD(c) & _xmm) * worldBounds->halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(s) & _xmm) * worldBounds->halfSize.v[1]))) * (float)((float)(screenBoundsMax->v[0] - screenBoundsMin->v[0]) - 2.0);
  _XMM5 = v13;
  this->m_scrPlace = scrPlace;
  v15 = 0;
  v16 = 0;
  this->m_screenBoundsMin = *screenBoundsMin;
  this->m_screenBoundsMax = *screenBoundsMax;
  v17 = -1;
  __asm { vminss  xmm4, xmm5, xmm3 }
  this->m_transformScale[0].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM4 * v10) ^ _xmm);
  this->m_transformScale[1].v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM4 * v10) ^ _xmm);
  this->m_transformScale[1].v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM4 * v11) ^ _xmm);
  this->m_transformScale[0].v[0] = *(float *)&_XMM4 * v11;
  this->m_uniformScale = *(float *)&_XMM4;
  this->m_transformOffset = 0i64;
  v19 = worldBounds->halfSize.v[0];
  v20 = worldBounds->halfSize.v[1];
  v21 = LODWORD(this->m_transformScale[0].v[1]);
  v22 = this->m_transformScale[1].v[1];
  v56 = *(_QWORD *)worldBounds->midPoint.v;
  v23 = this->m_transformScale[0].v[0] + this->m_transformScale[1].v[0];
  v24 = *((float *)&v56 + 1);
  v25 = *(float *)&v56;
  s = v23;
  c = FLOAT_3_4028235e38;
  do
  {
    v26 = v16 - 1;
    v27 = -1;
    if ( (v16 & 2) != 0 )
      v27 = 1;
    v28 = (float)(_mm_cvtepi32_ps((__m128i)v27).m128_f32[0] * v20) + v24;
    v29 = (float)((float)(_mm_cvtepi32_ps((__m128i)(2 * (v16 & 1) - 1)).m128_f32[0] * v19) + v25) * v23;
    v30 = v21;
    *(float *)&v30 = (float)((float)(*(float *)&v21 * v28) + v29) + (float)(v22 * v28);
    _XMM10 = v30;
    v32 = -1;
    __asm { vminss  xmm11, xmm10, xmm9 }
    if ( (((_BYTE)v16 + 1) & 2) != 0 )
      v32 = 1;
    v34 = (float)(_mm_cvtepi32_ps((__m128i)v32).m128_f32[0] * v20) + v24;
    v35 = (float)((float)(_mm_cvtepi32_ps((__m128i)(2 * (v26 & 1u) - 1)).m128_f32[0] * v19) + v25) * v23;
    v37 = v21;
    *(float *)&v37 = (float)((float)(*(float *)&v21 * v34) + v35) + (float)(v22 * v34);
    _XMM8 = v37;
    v38 = -1;
    __asm { vminss  xmm9, xmm8, xmm11 }
    if ( (((_BYTE)v16 - 2) & 2) != 0 )
      v38 = 1;
    v40 = (v26 & 2) == 0;
    v41 = (float)(_mm_cvtepi32_ps((__m128i)v38).m128_f32[0] * v20) + v24;
    v42 = (float)((float)(*(float *)&v21 * v41) + v29) + (float)(v22 * v41);
    v43 = v16;
    v44 = -1;
    if ( !v40 )
      v44 = 1;
    v45 = (float)(_mm_cvtepi32_ps((__m128i)v44).m128_f32[0] * v20) + *((float *)&v56 + 1);
    v46 = v16 + 1;
    __asm { vminss  xmm7, xmm9, xmm6 }
    if ( c <= *(float *)&_XMM10 )
      v43 = v15;
    v15 = v16 + 3;
    if ( *(float *)&_XMM11 <= *(float *)&v37 )
      v46 = v43;
    v48 = v16 + 2;
    v49 = *(float *)&_XMM9 <= v42;
    __asm { vminss  xmm9, xmm7, xmm1 }
    if ( v49 )
      v48 = v46;
    if ( *(float *)&_XMM7 <= (float)((float)((float)(*(float *)&v21 * v45) + v35) + (float)(v22 * v45)) )
      v15 = v48;
    v16 += 4;
    v24 = *((float *)&v56 + 1);
    v23 = s;
    v25 = *(float *)&v56;
    c = *(float *)&_XMM9;
  }
  while ( v16 < 4 );
  v51 = (__m128)*(unsigned __int64 *)worldBounds->midPoint.v;
  if ( (v15 & 2) != 0 )
    v17 = 1;
  v52 = (float)((float)(int)(2 * (v15 & 1) - 1) * v19) + v51.m128_f32[0];
  v53 = (float)((float)v17 * v20) + _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
  this->m_transformOffset.v[0] = screenBoundsMin->v[0] - (float)((float)(v53 * *(float *)&v21) + (float)(v52 * this->m_transformScale[0].v[0]));
  this->m_transformOffset.v[1] = screenBoundsMin->v[1] - (float)((float)(v53 * v22) + (float)(v52 * this->m_transformScale[1].v[0]));
}

/*
==============
CL_DebugMapOverlay::InitFromScale
==============
*/
void CL_DebugMapOverlay::InitFromScale(CL_DebugMapOverlay *this, const ScreenPlacement *scrPlace, const vec2_t *screenBoundsMin, float desiredWorldToScreenScale, const Bounds *worldBounds)
{
  float CompassNorthYaw; 
  float v10; 
  vec2_t s; 
  float c; 

  CompassNorthYaw = GetCompassNorthYaw();
  FastSinCos(CompassNorthYaw * 0.017453292, (float *)&s, &c);
  v10 = (float)(COERCE_FLOAT(LODWORD(c) & _xmm) * worldBounds->halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(s.v[0]) & _xmm) * worldBounds->halfSize.v[1]);
  s.v[0] = (float)((float)((float)((float)(COERCE_FLOAT(LODWORD(c) & _xmm) * worldBounds->halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(s.v[0]) & _xmm) * worldBounds->halfSize.v[0])) * 2.0) * desiredWorldToScreenScale) + screenBoundsMin->v[0];
  s.v[1] = (float)((float)(v10 * 2.0) * desiredWorldToScreenScale) + screenBoundsMin->v[1];
  CL_DebugMapOverlay::Init(this, scrPlace, screenBoundsMin, &s, worldBounds);
}

/*
==============
CL_DebugMapOverlay::TransformBox
==============
*/
void CL_DebugMapOverlay::TransformBox(CL_DebugMapOverlay *this, const vec3_t *inMin3D, const vec3_t *inMax3D, vec2_t *outMin2D, vec2_t *outMax2D)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  outMin2D->v[0] = (float)((float)(this->m_transformScale[0].v[1] * inMin3D->v[1]) + (float)(inMin3D->v[0] * this->m_transformScale[0].v[0])) + this->m_transformOffset.v[0];
  outMin2D->v[1] = (float)((float)(this->m_transformScale[1].v[1] * inMin3D->v[1]) + (float)(inMin3D->v[0] * this->m_transformScale[1].v[0])) + this->m_transformOffset.v[1];
  v5 = (float)((float)(this->m_transformScale[0].v[1] * inMax3D->v[1]) + (float)(inMax3D->v[0] * this->m_transformScale[0].v[0])) + this->m_transformOffset.v[0];
  outMax2D->v[0] = v5;
  v6 = (float)((float)(this->m_transformScale[1].v[1] * inMax3D->v[1]) + (float)(this->m_transformScale[1].v[0] * inMax3D->v[0])) + this->m_transformOffset.v[1];
  outMax2D->v[1] = v6;
  v7 = outMin2D->v[0];
  if ( outMin2D->v[0] > v5 )
  {
    outMin2D->v[0] = v5;
    outMax2D->v[0] = v7;
    v6 = outMax2D->v[1];
  }
  v8 = outMin2D->v[1];
  if ( v8 > v6 )
  {
    outMin2D->v[1] = v6;
    outMax2D->v[1] = v8;
  }
}

/*
==============
CL_DebugMapOverlay::TransformPos
==============
*/
void CL_DebugMapOverlay::TransformPos(CL_DebugMapOverlay *this, const vec3_t *inPos3D, vec2_t *outPos2D)
{
  outPos2D->v[0] = (float)((float)(this->m_transformScale[0].v[1] * inPos3D->v[1]) + (float)(this->m_transformScale[0].v[0] * inPos3D->v[0])) + this->m_transformOffset.v[0];
  outPos2D->v[1] = (float)((float)(this->m_transformScale[1].v[1] * inPos3D->v[1]) + (float)(this->m_transformScale[1].v[0] * inPos3D->v[0])) + this->m_transformOffset.v[1];
}

/*
==============
DrawArrow
==============
*/
void DrawArrow(const vec3_t *base, const vec3_t *direction)
{
  float v2; 
  float v3; 
  float v4; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  vec3_t v13; 
  vec3_t end; 
  vec3_t v15; 
  vec3_t v16; 
  vec3_t v17; 

  v2 = direction->v[0];
  v3 = direction->v[1];
  v4 = direction->v[2];
  v13.v[0] = direction->v[0] * 45.0;
  v13.v[1] = v3 * 45.0;
  v13.v[2] = v4 * 45.0;
  end.v[0] = (float)(v2 * 50.0) + base->v[0];
  end.v[1] = (float)(v3 * 50.0) + base->v[1];
  end.v[2] = (float)(v4 * 50.0) + base->v[2];
  if ( direction == &v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  v7 = (float)(v3 * direction->v[1]) - (float)(v2 * direction->v[2]);
  v8 = (float)(v4 * direction->v[2]) - (float)(v3 * direction->v[0]);
  v9 = v13.v[0] + base->v[0];
  v10 = v13.v[2] + base->v[2];
  v11 = (float)(v2 * direction->v[0]) - (float)(v4 * direction->v[1]);
  v12 = v13.v[1] + base->v[1];
  v13.v[0] = (float)(v4 * 5.0) + v9;
  v13.v[1] = (float)(v2 * 5.0) + v12;
  v13.v[2] = (float)(v3 * 5.0) + v10;
  v16.v[0] = (float)(v4 * -5.0) + v9;
  v16.v[1] = (float)(v2 * -5.0) + v12;
  v16.v[2] = (float)(v3 * -5.0) + v10;
  v17.v[0] = (float)(v7 * 5.0) + v9;
  v17.v[1] = (float)(v8 * 5.0) + v12;
  v17.v[2] = (float)(v11 * 5.0) + v10;
  v15.v[0] = (float)(v7 * -5.0) + v9;
  v15.v[2] = (float)(v11 * -5.0) + v10;
  v15.v[1] = (float)(v8 * -5.0) + v12;
  CL_AddDebugLine(base, &end, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v13, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v16, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v17, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v15, &colorYellow, 1, 1, 0);
}

