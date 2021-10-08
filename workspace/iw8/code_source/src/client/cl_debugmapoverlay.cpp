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

void __fastcall CL_DebugMapOverlay::DrawArrow(CL_DebugMapOverlay *this, const vec3_t *pos, const vec3_t *angles, double size, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  Material *material; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  vec2_t startPos; 
  vec2_t s; 
  vec2_t c; 
  vec2_t endPos; 
  char v114; 
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
  }
  _RSI = angles;
  __asm
  {
    vmovss  xmm6, dword ptr [r8+4]
    vmovaps xmm10, xmm3
  }
  _R14 = pos;
  _RDI = this;
  *(float *)&_XMM0 = GetCompassNorthYaw();
  __asm
  {
    vmovss  xmm9, cs:__real@3b360b61
    vmovss  xmm12, cs:__real@3f000000
  }
  material = cgMedia.streamingPlayerIcon;
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, xmm9
    vaddss  xmm1, xmm3, xmm12
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vxorps  xmm11, xmm11, xmm11
    vroundss xmm2, xmm11, xmm1, 1
    vsubss  xmm4, xmm3, xmm2
  }
  if ( cgMedia.streamingPlayerIcon )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r14+4]
      vmovss  xmm2, dword ptr [r14]
      vmulss  xmm1, xmm3, dword ptr [rdi+1Ch]
      vmulss  xmm0, xmm2, dword ptr [rdi+18h]
      vmovss  xmm6, dword ptr [rsi+4]
      vaddss  xmm1, xmm1, xmm0
      vaddss  xmm8, xmm1, dword ptr [rdi+28h]
      vmulss  xmm1, xmm3, dword ptr [rdi+24h]
      vmulss  xmm0, xmm2, dword ptr [rdi+20h]
      vaddss  xmm1, xmm1, xmm0
      vaddss  xmm7, xmm1, dword ptr [rdi+2Ch]
    }
    *(float *)&_XMM0 = GetCompassNorthYaw();
    __asm
    {
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm4, xmm1, xmm9
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm12
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm11, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm5, xmm0, cs:__real@43b40000
    }
    if ( material )
    {
      if ( clipMode == Clipped )
      {
        __asm
        {
          vcomiss xmm8, dword ptr [rdi+8]
          vcomiss xmm8, dword ptr [rdi+10h]
          vcomiss xmm7, dword ptr [rdi+0Ch]
          vcomiss xmm7, dword ptr [rdi+14h]
        }
      }
      __asm
      {
        vmulss  xmm0, xmm10, cs:__real@bf000000
        vmovss  dword ptr [rsp+150h+var_F8], xmm5
        vxorps  xmm4, xmm4, xmm4
        vaddss  xmm1, xmm8, xmm0; x
        vaddss  xmm2, xmm0, xmm7; y
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+150h+var_100], xmm0
        vmovss  [rsp+150h+var_108], xmm0
        vmovss  [rsp+150h+var_110], xmm4
        vmovss  [rsp+150h+var_118], xmm4
        vmovaps xmm3, xmm10; w
        vmovss  [rsp+150h+var_130], xmm10
      }
      CL_DrawRotatedStretchPicWithoutSplitScreenScaling(_RDI->m_scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v102, 1, 1, v103, v104, v105, v106, v107, 0, color, material);
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [r14+4]
      vmovss  xmm3, dword ptr [r14]
      vmulss  xmm1, xmm2, dword ptr [rdi+1Ch]
      vmulss  xmm0, xmm3, dword ptr [rdi+18h]
      vmulss  xmm8, xmm4, cs:__real@40c90fdb
      vmulss  xmm9, xmm10, cs:__real@bf000000
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm3, dword ptr [rdi+20h]
      vmovaps xmmword ptr [rsp+150h+var_A8+8], xmm13
      vaddss  xmm13, xmm1, dword ptr [rdi+28h]
      vmulss  xmm1, xmm2, dword ptr [rdi+24h]
      vaddss  xmm1, xmm1, xmm0
      vaddss  xmm12, xmm1, dword ptr [rdi+2Ch]
      vmovaps xmm0, xmm8; radians
      vmovss  dword ptr [rbp+50h+endPos+4], xmm12
      vmovss  dword ptr [rbp+50h+endPos], xmm13
    }
    FastSinCos(*(const float *)&_XMM0, (float *)&s, (float *)&c);
    __asm
    {
      vmulss  xmm11, xmm10, cs:__real@3e800000
      vmovaps xmm0, xmm8; radians
    }
    FastSinCos(*(const float *)&_XMM0, (float *)&startPos, &v108);
    __asm
    {
      vmulss  xmm7, xmm11, [rbp+50h+var_D0]
      vmulss  xmm6, xmm11, dword ptr [rbp+50h+startPos]
      vmulss  xmm10, xmm10, cs:__real@be800000
      vmovaps xmm0, xmm8; radians
    }
    FastSinCos(*(const float *)&_XMM0, &v108, (float *)&startPos);
    __asm
    {
      vmulss  xmm0, xmm9, [rbp+50h+s]
      vmulss  xmm2, xmm9, [rbp+50h+c]
      vmovss  xmm3, dword ptr [rbp+50h+startPos]
      vsubss  xmm1, xmm13, xmm0
      vaddss  xmm0, xmm2, xmm12
      vmovss  [rbp+50h+s], xmm1
      vmovss  [rbp+50h+var_BC], xmm0
      vsubss  xmm1, xmm7, xmm6
      vaddss  xmm2, xmm1, xmm13
      vmovss  [rbp+50h+c], xmm2
      vmulss  xmm2, xmm10, xmm3
      vaddss  xmm0, xmm6, xmm7
      vaddss  xmm1, xmm0, xmm12
      vmulss  xmm0, xmm11, [rbp+50h+var_D0]
      vmovss  [rbp+50h+var_B4], xmm1
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm10, [rbp+50h+var_D0]
      vaddss  xmm2, xmm1, xmm13
      vmulss  xmm3, xmm11, xmm3
      vaddss  xmm1, xmm3, xmm0
      vmovss  dword ptr [rbp+50h+startPos], xmm2
      vaddss  xmm2, xmm1, xmm12
      vmovss  dword ptr [rbp+50h+startPos+4], xmm2
    }
    CL_DebugMapOverlay::DrawLine2D(_RDI, &s, &c, color, clipMode);
    CL_DebugMapOverlay::DrawLine2D(_RDI, &c, &endPos, color, clipMode);
    CL_DebugMapOverlay::DrawLine2D(_RDI, &endPos, &startPos, color, clipMode);
    CL_DebugMapOverlay::DrawLine2D(_RDI, &startPos, &s, color, clipMode);
    __asm { vmovaps xmm13, xmmword ptr [rsp+150h+var_A8+8] }
  }
  _R11 = &v114;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CL_DebugMapOverlay::DrawBox
==============
*/
void CL_DebugMapOverlay::DrawBox(CL_DebugMapOverlay *this, const Bounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ExtentBounds boundsa; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx]
    vsubss  xmm0, xmm6, dword ptr [rdx+0Ch]
    vmovss  xmm5, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vaddss  xmm1, xmm6, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rsp+68h+bounds.mins], xmm0
    vsubss  xmm0, xmm5, dword ptr [rdx+10h]
    vmovss  dword ptr [rsp+68h+bounds.mins+4], xmm0
    vsubss  xmm0, xmm3, dword ptr [rdx+14h]
    vmovss  dword ptr [rsp+68h+bounds.mins+8], xmm0
    vaddss  xmm0, xmm5, dword ptr [rdx+10h]
    vmovss  dword ptr [rsp+68h+bounds.maxs], xmm1
    vaddss  xmm1, xmm3, dword ptr [rdx+14h]
    vmovss  dword ptr [rsp+68h+bounds.maxs+4], xmm0
    vmovss  dword ptr [rsp+68h+bounds.maxs+8], xmm1
  }
  CL_DebugMapOverlay::DrawExtBox(this, &boundsa, borderPadding, color, clipMode);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
CL_DebugMapOverlay::DrawCircle2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawCircle2D(CL_DebugMapOverlay *this, const vec2_t *centre, double radius, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v5; 
  CL_DebugMapOverlay *v14; 
  unsigned int v22; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v32; 
  vec2_t startPos; 
  vec2_t endPos; 

  _RBP = centre;
  v14 = this;
  if ( clipMode == Clipped )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdx]
      vsubss  xmm0, xmm1, xmm2
      vcomiss xmm0, dword ptr [rcx+10h]
      vmovss  xmm3, dword ptr [rdx+4]
      vsubss  xmm0, xmm3, xmm2
      vcomiss xmm0, dword ptr [rcx+14h]
      vaddss  xmm0, xmm1, xmm2
      vcomiss xmm0, dword ptr [rcx+8]
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, dword ptr [rcx+0Ch]
    }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovaps [rsp+0D8h+var_48], xmm6
    vmaxss  xmm6, xmm2, xmm1
    vcomiss xmm6, xmm1
  }
  if ( clipMode == Clipped )
  {
    v22 = 4;
LABEL_10:
    v25 = 0;
    __asm
    {
      vmovaps [rsp+0D8h+var_58], xmm7
      vmovaps [rsp+0D8h+var_68], xmm8
      vmovaps [rsp+0D8h+var_78], xmm9
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovaps [rsp+0D8h+var_88], xmm10
      vmovss  xmm10, cs:__real@40c90fdb
      vdivss  xmm9, xmm1, xmm0
    }
    do
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rbp+0]
        vmovss  xmm8, dword ptr [rbp+4]
      }
      v32 = 0;
      _RDI = (float *)&startPos + 1;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm1, xmm0, xmm9
          vmulss  xmm0, xmm1, xmm10
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v32 + v25, centre, v5, color);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm1, xmm1, xmm6
          vaddss  xmm2, xmm1, xmm7
          vmulss  xmm0, xmm0, xmm6
          vsubss  xmm1, xmm8, xmm0
        }
        ++v32;
        __asm
        {
          vmovss  dword ptr [rdi], xmm1
          vmovss  dword ptr [rdi-4], xmm2
        }
        _RDI += 2;
      }
      while ( v32 < 2 );
      CL_DebugMapOverlay::DrawLine2D(v14, &startPos, &endPos, color, clipMode);
      ++v25;
    }
    while ( v25 < v22 );
    __asm
    {
      vmovaps xmm10, [rsp+0D8h+var_88]
      vmovaps xmm9, [rsp+0D8h+var_78]
      vmovaps xmm8, [rsp+0D8h+var_68]
      vmovaps xmm7, [rsp+0D8h+var_58]
    }
    goto LABEL_15;
  }
  __asm { vmulss  xmm0, xmm6, cs:__real@3e800000 }
  v22 = 32;
  __asm { vcvttss2si rax, xmm0 }
  v24 = _RAX + 8;
  if ( v24 < 0x20 )
    v22 = v24;
  if ( v22 )
    goto LABEL_10;
LABEL_15:
  __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
}

/*
==============
CL_DebugMapOverlay::DrawCircle
==============
*/

void __fastcall CL_DebugMapOverlay::DrawCircle(CL_DebugMapOverlay *this, const vec3_t *centre, double radius, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v5; 
  CL_DebugMapOverlay *v16; 
  unsigned int v29; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v37; 
  vec2_t startPos; 
  vec2_t endPos; 

  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm8
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx]
    vmulss  xmm1, xmm3, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm4, dword ptr [rcx+18h]
  }
  v16 = this;
  __asm
  {
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm8, xmm1, dword ptr [rcx+28h]
    vmulss  xmm1, xmm3, dword ptr [rcx+24h]
    vmulss  xmm0, xmm4, dword ptr [rcx+20h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm7, xmm1, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm2, dword ptr [rcx+30h]
  }
  if ( clipMode == Clipped )
  {
    __asm
    {
      vsubss  xmm0, xmm8, xmm1
      vcomiss xmm0, dword ptr [rcx+10h]
      vsubss  xmm0, xmm7, xmm1
      vcomiss xmm0, dword ptr [rcx+14h]
      vaddss  xmm0, xmm8, xmm1
      vcomiss xmm0, dword ptr [rcx+8]
      vaddss  xmm0, xmm7, xmm1
      vcomiss xmm0, dword ptr [rcx+0Ch]
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmovaps [rsp+0C8h+var_38], xmm6
    vmaxss  xmm6, xmm1, xmm2
    vcomiss xmm6, xmm2
  }
  if ( clipMode == Clipped )
  {
    v29 = 4;
LABEL_10:
    v32 = 0;
    __asm
    {
      vmovaps [rsp+0C8h+var_68], xmm9
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovaps [rsp+0C8h+var_78], xmm10
      vmovss  xmm10, cs:__real@40c90fdb
      vdivss  xmm9, xmm2, xmm0
    }
    do
    {
      v37 = 0;
      _RDI = (float *)&startPos + 1;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm1, xmm0, xmm9
          vmulss  xmm0, xmm1, xmm10
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v37 + v32, centre, v5, color);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm1, xmm1, xmm6
          vaddss  xmm2, xmm1, xmm8
          vmulss  xmm0, xmm0, xmm6
          vsubss  xmm1, xmm7, xmm0
        }
        ++v37;
        __asm
        {
          vmovss  dword ptr [rdi], xmm1
          vmovss  dword ptr [rdi-4], xmm2
        }
        _RDI += 2;
      }
      while ( v37 < 2 );
      CL_DebugMapOverlay::DrawLine2D(v16, &startPos, &endPos, color, clipMode);
      ++v32;
    }
    while ( v32 < v29 );
    __asm
    {
      vmovaps xmm10, [rsp+0C8h+var_78]
      vmovaps xmm9, [rsp+0C8h+var_68]
    }
    goto LABEL_15;
  }
  __asm { vmulss  xmm0, xmm6, cs:__real@3e800000 }
  v29 = 32;
  __asm { vcvttss2si rax, xmm0 }
  v31 = _RAX + 8;
  if ( v31 < 0x20 )
    v29 = v31;
  if ( v29 )
    goto LABEL_10;
LABEL_15:
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_58]
  }
}

/*
==============
CL_DebugMapOverlay::DrawExtBox
==============
*/
void CL_DebugMapOverlay::DrawExtBox(CL_DebugMapOverlay *this, const ExtentBounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  const ScreenPlacement *m_scrPlace; 
  unsigned int v56; 
  GfxColor *p_colora; 
  GfxColor colora; 
  float h; 
  float w; 
  float y; 
  float x[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+20h]
    vmulss  xmm2, xmm4, dword ptr [rdx+0Ch]
    vmovss  xmm5, dword ptr [rcx+24h]
    vmovaps xmmword ptr [rax-28h], xmm6
  }
  _RSI = color;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm7, dword ptr [rcx+18h]
    vmulss  xmm1, xmm7, dword ptr [rdx]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm9, dword ptr [rdx+4]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vaddss  xmm11, xmm1, dword ptr [rcx+28h]
    vmulss  xmm1, xmm4, dword ptr [rdx]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm10, xmm1, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm7, dword ptr [rdx+0Ch]
    vmulss  xmm0, xmm9, dword ptr [rdx+10h]
    vmovaps xmm9, xmmword ptr [rax-48h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm7, xmm1, dword ptr [rcx+28h]
    vcomiss xmm11, xmm7
    vmulss  xmm0, xmm5, dword ptr [rdx+10h]
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm4, xmm1, dword ptr [rcx+2Ch]
    vmovaps xmm2, xmm11
    vmovaps xmm2, xmm7
    vmovaps xmm7, xmm11
    vmovss  dword ptr [rsp+0C8h+color], xmm11
    vcomiss xmm10, xmm4
    vmovaps xmm11, [rsp+0C8h+var_68]
    vmovaps xmm0, xmm10
    vmovaps xmm10, xmm4
    vmovss  dword ptr [rsp+0C8h+color], xmm0
    vmovaps xmm4, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vsubss  xmm3, xmm2, xmm0
    vsubss  xmm2, xmm10, xmm0
    vmovaps xmm10, [rsp+0C8h+var_58]
    vaddss  xmm5, xmm0, xmm7
    vaddss  xmm4, xmm0, xmm4
  }
  if ( clipMode == Clipped )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+10h]
      vcomiss xmm3, xmm1
      vcomiss xmm2, dword ptr [rcx+14h]
      vmovss  xmm0, dword ptr [rcx+8]
      vcomiss xmm5, xmm0
      vcomiss xmm4, dword ptr [rcx+0Ch]
      vmaxss  xmm3, xmm0, xmm3
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vminss  xmm5, xmm5, xmm1
      vmovss  xmm1, dword ptr [rcx+14h]
      vmaxss  xmm2, xmm0, xmm2
      vminss  xmm4, xmm1, xmm4
    }
  }
  m_scrPlace = this->m_scrPlace;
  __asm
  {
    vsubss  xmm0, xmm5, xmm3
    vsubss  xmm1, xmm4, xmm2
    vmovss  [rsp+0C8h+w], xmm0
    vmovss  [rsp+0C8h+var_84], xmm1
    vmovss  [rsp+0C8h+x], xmm3
    vmovss  [rsp+0C8h+y], xmm2
  }
  ScrPlace_ApplyRect(m_scrPlace, x, &y, &w, &h, 1, 1);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, cs:__real@437f0000
  }
  v56 = 0;
  p_colora = &colora;
  do
  {
    _RAX = (int)v56;
    __asm
    {
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  xmm0, dword ptr [rsi+rax*4]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si eax, xmm1
    }
    p_colora->array[0] = _EAX;
    ++v56;
    p_colora = (GfxColor *)((char *)p_colora + 1);
  }
  while ( v56 < 4 );
  __asm
  {
    vmovss  xmm3, [rsp+0C8h+var_84]; height
    vmovss  xmm2, [rsp+0C8h+w]; width
    vmovss  xmm1, [rsp+0C8h+y]; y
    vmovss  xmm0, [rsp+0C8h+x]; x
  }
  R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &colora, 0);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_28]
    vmovaps xmm7, [rsp+0C8h+var_38]
  }
}

/*
==============
CL_DebugMapOverlay::DrawFilledBox
==============
*/
void CL_DebugMapOverlay::DrawFilledBox(CL_DebugMapOverlay *this, const Bounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  ExtentBounds boundsa; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx]
    vsubss  xmm0, xmm6, dword ptr [rdx+0Ch]
    vmovss  xmm5, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vaddss  xmm1, xmm6, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rsp+68h+bounds.mins], xmm0
    vsubss  xmm0, xmm5, dword ptr [rdx+10h]
    vmovss  dword ptr [rsp+68h+bounds.mins+4], xmm0
    vsubss  xmm0, xmm3, dword ptr [rdx+14h]
    vmovss  dword ptr [rsp+68h+bounds.mins+8], xmm0
    vaddss  xmm0, xmm5, dword ptr [rdx+10h]
    vmovss  dword ptr [rsp+68h+bounds.maxs], xmm1
    vaddss  xmm1, xmm3, dword ptr [rdx+14h]
    vmovss  dword ptr [rsp+68h+bounds.maxs+4], xmm0
    vmovss  dword ptr [rsp+68h+bounds.maxs+8], xmm1
  }
  CL_DebugMapOverlay::DrawFilledExtBox(this, &boundsa, borderPadding, color, clipMode);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
CL_DebugMapOverlay::DrawFilledExtBox
==============
*/
void CL_DebugMapOverlay::DrawFilledExtBox(CL_DebugMapOverlay *this, const ExtentBounds *bounds, int borderPadding, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  char v59; 
  char v60; 
  const ScreenPlacement *m_scrPlace; 
  unsigned int v67; 
  GfxColor *p_colora; 
  GfxColor colora; 
  char v86; 
  void *retaddr; 
  float y; 
  float x; 
  float w; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+20h]
    vmulss  xmm2, xmm4, dword ptr [rdx+0Ch]
    vmovss  xmm5, dword ptr [rcx+24h]
    vmovaps xmmword ptr [rax-28h], xmm6
  }
  _RSI = color;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RBX = this;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+18h]
    vmulss  xmm1, xmm7, dword ptr [rdx]
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovss  xmm9, dword ptr [rcx+1Ch]
    vmulss  xmm0, xmm9, dword ptr [rdx+4]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vaddss  xmm11, xmm1, dword ptr [rcx+28h]
    vmulss  xmm1, xmm4, dword ptr [rdx]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm10, xmm1, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm7, dword ptr [rdx+0Ch]
    vmulss  xmm0, xmm9, dword ptr [rdx+10h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm7, xmm1, dword ptr [rcx+28h]
    vcomiss xmm11, xmm7
    vmulss  xmm0, xmm5, dword ptr [rdx+10h]
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm4, xmm1, dword ptr [rcx+2Ch]
    vmovaps xmm2, xmm11
    vmovaps xmm2, xmm7
    vmovaps xmm7, xmm11
    vmovss  dword ptr [rax+18h], xmm11
    vcomiss xmm10, xmm4
    vmovaps xmm11, [rsp+0C8h+var_78]
    vmovaps xmm0, xmm10
    vmovaps xmm10, xmm4
    vmovss  [rsp+0C8h+w], xmm0
    vmovaps xmm4, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vaddss  xmm9, xmm7, xmm0
    vsubss  xmm6, xmm10, xmm0
    vmovaps xmm10, [rsp+0C8h+var_68]
    vaddss  xmm7, xmm4, xmm0
    vsubss  xmm8, xmm2, xmm0
  }
  if ( clipMode )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+10h]; max
    vmovss  xmm1, dword ptr [rcx+8]; min
    vmovaps xmm0, xmm8; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+14h]; max
    vmovss  xmm1, dword ptr [rbx+0Ch]; min
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+10h]; max
    vmovss  xmm1, dword ptr [rbx+8]; min
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+14h]; max
    vmovss  xmm1, dword ptr [rbx+0Ch]; min
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm7; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm9, xmm8
    vmovaps xmm7, xmm0
  }
  if ( !(v59 | v60) )
  {
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v59 | v60) )
    {
LABEL_4:
      m_scrPlace = _RBX->m_scrPlace;
      __asm
      {
        vsubss  xmm1, xmm9, xmm8
        vsubss  xmm0, xmm7, xmm6
        vmovss  [rsp+0C8h+w], xmm1
        vmovss  [rsp+0C8h+clipMode], xmm0
        vmovss  [rsp+0C8h+x], xmm8
        vmovss  [rsp+0C8h+y], xmm6
      }
      ScrPlace_ApplyRect(m_scrPlace, &x, &y, &w, (float *)&clipMode, 1, 1);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovss  xmm7, cs:__real@437f0000
      }
      v67 = 0;
      p_colora = &colora;
      do
      {
        _RAX = (int)v67;
        __asm
        {
          vmovaps xmm2, xmm6; max
          vxorps  xmm1, xmm1, xmm1; min
          vmovss  xmm0, dword ptr [rsi+rax*4]; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vcvttss2si eax, xmm1
        }
        p_colora->array[0] = _EAX;
        ++v67;
        p_colora = (GfxColor *)((char *)p_colora + 1);
      }
      while ( v67 < 4 );
      __asm
      {
        vmovss  xmm3, [rsp+0C8h+clipMode]; height
        vmovss  xmm2, [rsp+0C8h+w]; width
        vmovss  xmm1, [rsp+0C8h+y]; y
        vmovss  xmm0, [rsp+0C8h+x]; x
      }
      R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &colora, 1);
    }
  }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
CL_DebugMapOverlay::DrawFilledRect2D
==============
*/
void CL_DebugMapOverlay::DrawFilledRect2D(CL_DebugMapOverlay *this, const vec2_t *minPos2D, const vec2_t *maxPos2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  char v25; 
  bool v26; 
  const ScreenPlacement *m_scrPlace; 
  unsigned int v34; 
  GfxColor *p_colora; 
  float x; 
  GfxColor colora; 
  vec2_t v50; 
  vec2_t v51; 
  void *retaddr; 
  float w; 
  float y; 

  _RAX = &retaddr;
  v26 = clipMode == Clipped;
  _RSI = color;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  v50 = *minPos2D;
  v51 = *maxPos2D;
  if ( !v26 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+4Fh+var_58+4]
      vmovss  xmm7, dword ptr [rbp+4Fh+var_58]
      vmovss  xmm1, dword ptr [rbp+4Fh+var_50+4]
      vmovss  xmm8, dword ptr [rbp+4Fh+var_50]
    }
LABEL_6:
    m_scrPlace = _RBX->m_scrPlace;
    __asm
    {
      vsubss  xmm0, xmm8, xmm7
      vsubss  xmm1, xmm1, xmm6
      vmovss  [rbp+4Fh+w], xmm0
      vmovss  [rbp+4Fh+clipMode], xmm1
      vmovss  [rbp+4Fh+x], xmm7
      vmovss  [rbp+4Fh+y], xmm6
    }
    ScrPlace_ApplyRect(m_scrPlace, &x, &y, &w, (float *)&clipMode, 1, 1);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm7, cs:__real@437f0000
    }
    v34 = 0;
    p_colora = &colora;
    do
    {
      _RAX = (int)v34;
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovss  xmm0, dword ptr [rsi+rax*4]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vcvttss2si eax, xmm1
      }
      p_colora->array[0] = _EAX;
      ++v34;
      p_colora = (GfxColor *)((char *)p_colora + 1);
    }
    while ( v34 < 4 );
    __asm
    {
      vmovss  xmm3, [rbp+4Fh+clipMode]; height
      vmovss  xmm2, [rbp+4Fh+w]; width
      vmovss  xmm1, [rbp+4Fh+y]; y
      vmovss  xmm0, [rbp+4Fh+x]; x
    }
    R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &colora, 1);
    goto LABEL_9;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+10h]; max
    vmovss  xmm1, dword ptr [rcx+8]; min
    vmovss  xmm0, dword ptr [rbp+4Fh+var_58]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+14h]; max
    vmovss  xmm1, dword ptr [rbx+0Ch]; min
    vmovaps xmm7, xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+var_58+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+10h]; max
    vmovss  xmm1, dword ptr [rbx+8]; min
    vmovaps xmm6, xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+var_50]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+14h]; max
    vmovss  xmm1, dword ptr [rbx+0Ch]; min
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+var_50+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm8, xmm7
    vmovaps xmm1, xmm0
  }
  if ( !(v25 | v26) )
  {
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v25 | v26) )
      goto LABEL_6;
  }
LABEL_9:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+0A0h+var_28+8]
    vmovaps xmm7, [rsp+0A0h+var_38+8]
    vmovaps xmm8, [rsp+0A0h+var_48+8]
  }
}

/*
==============
CL_DebugMapOverlay::DrawImage2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawImage2D(CL_DebugMapOverlay *this, const vec2_t *pos2D, double facingAngle, double size2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, Material *icon)
{
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  __asm { vmovaps xmm4, xmm2 }
  if ( icon )
  {
    if ( clipMode == Clipped )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx]
        vcomiss xmm0, dword ptr [rcx+8]
        vcomiss xmm0, dword ptr [rcx+10h]
        vmovss  xmm0, dword ptr [rdx+4]
        vcomiss xmm0, dword ptr [rcx+0Ch]
        vcomiss xmm0, dword ptr [rcx+14h]
      }
    }
    __asm
    {
      vmulss  xmm0, xmm3, cs:__real@bf000000
      vaddss  xmm1, xmm0, dword ptr [rdx]; x
      vaddss  xmm2, xmm0, dword ptr [rdx+4]; y
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+88h+var_30], xmm4
      vmovss  [rsp+88h+var_38], xmm0
      vmovss  [rsp+88h+var_40], xmm0
      vxorps  xmm4, xmm4, xmm4
      vmovss  [rsp+88h+var_48], xmm4
      vmovss  [rsp+88h+var_50], xmm4
      vmovss  [rsp+88h+var_68], xmm3
    }
    CL_DrawRotatedStretchPicWithoutSplitScreenScaling(this->m_scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&size2D, v15, 1, 1, v16, v17, v18, v19, v20, 0, color, icon);
  }
}

/*
==============
CL_DebugMapOverlay::DrawImage
==============
*/

void __fastcall CL_DebugMapOverlay::DrawImage(CL_DebugMapOverlay *this, const vec3_t *pos, const vec3_t *angles, double size2D, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, Material *icon)
{
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, dword ptr [rdx+4]
    vmulss  xmm1, xmm2, dword ptr [rcx+1Ch]
  }
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovss  xmm6, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm9, xmm3
    vmovss  xmm3, dword ptr [rdx]
    vmulss  xmm0, xmm3, dword ptr [rcx+18h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm8, xmm1, dword ptr [rcx+28h]
    vmulss  xmm1, xmm2, dword ptr [rcx+24h]
    vmulss  xmm0, xmm3, dword ptr [rcx+20h]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm7, xmm1, dword ptr [rcx+2Ch]
  }
  *(float *)&_XMM0 = GetCompassNorthYaw();
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm3, xmm0, cs:__real@43b40000
  }
  if ( icon )
  {
    if ( clipMode == Clipped )
    {
      __asm
      {
        vcomiss xmm8, dword ptr [rbx+8]
        vcomiss xmm8, dword ptr [rbx+10h]
        vcomiss xmm7, dword ptr [rbx+0Ch]
        vcomiss xmm7, dword ptr [rbx+14h]
      }
    }
    __asm
    {
      vmulss  xmm0, xmm9, cs:__real@bf000000
      vmovss  [rsp+0D8h+var_80], xmm3
      vxorps  xmm4, xmm4, xmm4
      vaddss  xmm1, xmm0, xmm8; x
      vaddss  xmm2, xmm0, xmm7; y
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0D8h+var_88], xmm0
      vmovss  [rsp+0D8h+var_90], xmm0
      vmovss  [rsp+0D8h+var_98], xmm4
      vmovss  [rsp+0D8h+var_A0], xmm4
      vmovaps xmm3, xmm9; w
      vmovss  [rsp+0D8h+var_B8], xmm9
    }
    CL_DrawRotatedStretchPicWithoutSplitScreenScaling(_RBX->m_scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v45, 1, 1, v46, v47, v48, v49, v50, 0, color, icon);
  }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CL_DebugMapOverlay::DrawLine2D
==============
*/
void CL_DebugMapOverlay::DrawLine2D(CL_DebugMapOverlay *this, const vec2_t *startPos, const vec2_t *endPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v14; 
  const ScreenPlacement *m_scrPlace; 
  vec2_t v57; 
  vec2_t v58; 
  GfxPointVertex verts; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _RSI = color;
  v57 = *startPos;
  _R12 = this;
  v58 = *endPos;
  v14 = 2i64;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( clipMode )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm7, cs:__real@437f0000
    }
    _RBX = &verts.xyz.v[1];
    _RDI = (float *)&v57 + 1;
    do
    {
      __asm { vmovss  xmm1, dword ptr [rdi-4]; x }
      *(double *)&_XMM0 = ScrPlace_ApplyX(_R12->m_scrPlace, *(float *)&_XMM1, 1);
      __asm { vmovss  xmm1, dword ptr [rdi]; y }
      m_scrPlace = _R12->m_scrPlace;
      __asm { vmovss  dword ptr [rbx-4], xmm0 }
      *(double *)&_XMM0 = ScrPlace_ApplyY(m_scrPlace, *(float *)&_XMM1, 1);
      __asm
      {
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rsi]; val
        vmovaps xmm2, xmm6; max
        vmovaps xmm1, xmm9; min
      }
      _RBX[1] = 0.0;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsi+4]; val
        vcvttss2si eax, xmm1
        vmovaps xmm1, xmm9; min
        vmovaps xmm2, xmm6; max
      }
      *((_BYTE *)_RBX + 8) = _EAX;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsi+8]; val
        vcvttss2si eax, xmm1
        vmovaps xmm1, xmm9; min
        vmovaps xmm2, xmm6; max
      }
      *((_BYTE *)_RBX + 9) = _EAX;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsi+0Ch]; val
        vcvttss2si eax, xmm1
        vmovaps xmm1, xmm9; min
        vmovaps xmm2, xmm6; max
      }
      *((_BYTE *)_RBX + 10) = _EAX;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RBX += 4;
      _RDI += 2;
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vcvttss2si eax, xmm1
      }
      *((_BYTE *)_RBX - 5) = _EAX;
      --v14;
    }
    while ( v14 );
    R_AddCmdDrawLines2D(1u, 1u, &verts);
  }
  else
  {
    _R13 = &this->m_screenBoundsMin;
    __asm { vmovss  xmm10, cs:__real@3c23d70a }
    _RSI = 0i64;
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+rsi*4+128h+var_C8]
      vmovss  xmm8, dword ptr [rsp+rsi*4+128h+var_C0]
      vcomiss xmm8, xmm7
    }
    _R14 = &v57;
    __asm
    {
      vmovss  xmm0, dword ptr [r13+rsi*4+0]
      vcomiss xmm0, dword ptr [r14+rsi*4]
      vcomiss xmm8, xmm7
    }
    _R15 = &v58;
    __asm
    {
      vmovss  xmm0, dword ptr [r12+rsi*4+10h]
      vcomiss xmm0, dword ptr [r15+rsi*4]
    }
  }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CL_DebugMapOverlay::DrawLine
==============
*/
void CL_DebugMapOverlay::DrawLine(CL_DebugMapOverlay *this, const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  vec2_t endPosa; 
  vec2_t startPosa; 

  __asm
  {
    vmovss  xmm4, dword ptr [rdx+4]
    vmulss  xmm0, xmm4, dword ptr [rcx+1Ch]
    vmovss  xmm5, dword ptr [rcx+20h]
    vmulss  xmm3, xmm5, dword ptr [r8]
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm8
    vmovss  xmm8, dword ptr [rcx+18h]
    vmulss  xmm1, xmm8, dword ptr [rdx]
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rcx+28h]
    vmulss  xmm1, xmm5, dword ptr [rdx]
    vmulss  xmm0, xmm4, dword ptr [rcx+24h]
    vmovss  xmm4, dword ptr [r8+4]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rcx+1Ch]
    vmovss  dword ptr [rsp+58h+startPos], xmm2
    vaddss  xmm2, xmm1, dword ptr [rcx+2Ch]
    vmulss  xmm1, xmm8, dword ptr [r8]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm4, dword ptr [rcx+24h]
    vmovss  dword ptr [rsp+58h+startPos+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rcx+28h]
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rsp+58h+endPos], xmm2
    vaddss  xmm2, xmm1, dword ptr [rcx+2Ch]
    vmovss  dword ptr [rsp+58h+endPos+4], xmm2
  }
  CL_DebugMapOverlay::DrawLine2D(this, &startPosa, &endPosa, color, clipMode);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm8, [rsp+58h+var_28]
  }
}

/*
==============
CL_DebugMapOverlay::DrawPlayerArrow
==============
*/
void CL_DebugMapOverlay::DrawPlayerArrow(CL_DebugMapOverlay *this, LocalClientNum_t localClientNum, CL_DebugMapOverlay::ClipMode clipMode)
{
  __int64 v3; 
  int v10; 
  vec3_t pos; 
  vec3_t angles; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 272, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( localClientNum ) ) < (unsigned)( ( sizeof( *array_counter( PLAYER_ARROW_COLOR ) ) + 0 ) )", "static_cast<uint>( localClientNum ) doesn't index ARRAY_COUNT( PLAYER_ARROW_COLOR )\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  __asm { vmovsd  xmm0, qword ptr [rax+699Ch] }
  pos.v[2] = _RAX->refdef.viewOffset.v[2];
  __asm { vmovsd  qword ptr [rsp+78h+pos], xmm0 }
  AxisToAngles(&_RAX->refdef.view.axis, &angles);
  __asm { vmovss  xmm3, cs:__real@41200000; size }
  CL_DebugMapOverlay::DrawArrow(this, &pos, &angles, *(float *)&_XMM3, &PLAYER_ARROW_COLOR[v3], clipMode);
}

/*
==============
CL_DebugMapOverlay::DrawRect2D
==============
*/
void CL_DebugMapOverlay::DrawRect2D(CL_DebugMapOverlay *this, const vec2_t *minPos, const vec2_t *maxPos, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode)
{
  const ScreenPlacement *m_scrPlace; 
  unsigned int v25; 
  GfxColor *v26; 
  float h; 
  float w; 
  float y; 
  float x[2]; 
  GfxColor colora[2]; 

  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  _RSI = color;
  if ( clipMode )
  {
    *(vec2_t *)colora[0].array = *minPos;
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+0A8h+color+4]
      vmovss  xmm5, dword ptr [rsp+0A8h+color]
    }
    *(vec2_t *)x = *maxPos;
    __asm
    {
      vmovss  xmm2, [rsp+0A8h+x+4]
      vmovss  xmm0, [rsp+0A8h+x]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovss  xmm2, dword ptr [rcx+10h]
      vcomiss xmm0, xmm2
      vmovss  xmm1, dword ptr [rdx+4]
      vcomiss xmm1, dword ptr [rcx+14h]
      vmovss  xmm4, dword ptr [r8]
      vmovss  xmm5, dword ptr [rcx+8]
      vcomiss xmm4, xmm5
      vmovss  xmm3, dword ptr [r8+4]
      vcomiss xmm3, dword ptr [rcx+0Ch]
      vmaxss  xmm5, xmm0, xmm5
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vmaxss  xmm6, xmm0, xmm1
      vmovss  xmm1, dword ptr [rcx+14h]
      vminss  xmm0, xmm4, xmm2
      vminss  xmm2, xmm1, xmm3
    }
  }
  m_scrPlace = this->m_scrPlace;
  __asm
  {
    vsubss  xmm0, xmm0, xmm5
    vsubss  xmm1, xmm2, xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
    vmovss  [rsp+0A8h+x], xmm5
    vmovss  [rsp+0A8h+y], xmm6
    vmovss  [rsp+0A8h+w], xmm0
    vmovss  [rsp+0A8h+var_68], xmm1
  }
  ScrPlace_ApplyRect(m_scrPlace, x, &y, &w, &h, 1, 1);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, cs:__real@437f0000
  }
  v25 = 0;
  v26 = colora;
  do
  {
    _RAX = (int)v25;
    __asm
    {
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  xmm0, dword ptr [rsi+rax*4]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vcvttss2si eax, xmm1
    }
    v26->array[0] = _EAX;
    ++v25;
    v26 = (GfxColor *)((char *)v26 + 1);
  }
  while ( v25 < 4 );
  __asm
  {
    vmovss  xmm3, [rsp+0A8h+var_68]; height
    vmovss  xmm2, [rsp+0A8h+w]; width
    vmovss  xmm1, [rsp+0A8h+y]; y
    vmovss  xmm0, [rsp+0A8h+x]; x
  }
  R_AddCmdDrawRect2D(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, colora, 0);
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm6, [rsp+0A8h+var_28]
  }
}

/*
==============
CL_DebugMapOverlay::DrawText2D
==============
*/

void __fastcall CL_DebugMapOverlay::DrawText2D(CL_DebugMapOverlay *this, const vec2_t *pos, const vec2_t *anchor, double fontScale, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, const char *label)
{
  CL_DebugMapOverlay *v10; 
  GfxFont *FontHandle; 
  __int64 v15; 
  __int64 v16; 
  float fmt; 
  float y; 
  float v33; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RBP = pos;
  __asm { vmovaps xmm6, xmm3 }
  v10 = this;
  if ( clipMode == Clipped )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vcomiss xmm0, dword ptr [rcx+8]
      vcomiss xmm0, dword ptr [rcx+10h]
      vmovss  xmm0, dword ptr [rdx+4]
      vcomiss xmm0, dword ptr [rcx+0Ch]
      vcomiss xmm0, dword ptr [rcx+14h]
    }
  }
  __asm { vmovaps xmm2, xmm6; scale }
  FontHandle = UI_GetFontHandle(this->m_scrPlace, 5, *(float *)&_XMM2);
  if ( !FontHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 514, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  v15 = -1i64;
  v16 = -1i64;
  do
    ++v16;
  while ( label[v16] );
  __asm { vmovaps xmm3, xmm6; scale }
  UI_TextWidth(label, v16, FontHandle, *(float *)&_XMM3);
  __asm { vmovaps xmm1, xmm6; scale }
  UI_TextHeight(FontHandle, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm2, xmm0, dword ptr [r12+4]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbp+0]
    vaddss  xmm4, xmm2, dword ptr [rbp+4]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm3, xmm0, dword ptr [r12]
    vsubss  xmm2, xmm1, xmm3
  }
  do
    ++v15;
  while ( label[v15] );
  __asm
  {
    vmovss  [rsp+88h+var_48], xmm6
    vmovss  [rsp+88h+y], xmm4
    vmovss  dword ptr [rsp+88h+fmt], xmm2
  }
  UI_DrawText(v10->m_scrPlace, label, v15, FontHandle, fmt, y, 1, 1, v33, color, 3);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
CL_DebugMapOverlay::DrawTextf2D
==============
*/

void CL_DebugMapOverlay::DrawTextf2D(CL_DebugMapOverlay *this, const vec2_t *pos2D, const vec2_t *anchor, double fontScale, const vec4_t *color, CL_DebugMapOverlay::ClipMode clipMode, const char *fmt, ...)
{
  GfxFont *FontHandle; 
  __int64 v16; 
  __int64 v17; 
  float ap; 
  float y; 
  float v34; 
  char dest[512]; 
  void *retaddr; 
  va_list va; 

  va_start(va, fmt);
  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  _RBP = pos2D;
  _RSI = this;
  __asm { vmovaps xmm6, xmm3 }
  Com_vsprintf_truncate(dest, 0x200ui64, 0x200ui64, fmt, va);
  if ( clipMode == Clipped )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vcomiss xmm0, dword ptr [rsi+8]
      vcomiss xmm0, dword ptr [rsi+10h]
      vmovss  xmm0, dword ptr [rbp+4]
      vcomiss xmm0, dword ptr [rsi+0Ch]
      vcomiss xmm0, dword ptr [rsi+14h]
    }
  }
  __asm { vmovaps xmm2, xmm6; scale }
  FontHandle = UI_GetFontHandle(_RSI->m_scrPlace, 5, *(float *)&_XMM2);
  if ( !FontHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 514, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  v16 = -1i64;
  v17 = -1i64;
  do
    ++v17;
  while ( dest[v17] );
  __asm { vmovaps xmm3, xmm6; scale }
  UI_TextWidth(dest, v17, FontHandle, *(float *)&_XMM3);
  __asm { vmovaps xmm1, xmm6; scale }
  UI_TextHeight(FontHandle, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm2, xmm0, dword ptr [r12+4]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbp+0]
    vaddss  xmm4, xmm2, dword ptr [rbp+4]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm3, xmm0, dword ptr [r12]
    vsubss  xmm2, xmm1, xmm3
  }
  do
    ++v16;
  while ( dest[v16] );
  __asm
  {
    vmovss  [rsp+2C8h+var_288], xmm6
    vmovss  [rsp+2C8h+y], xmm4
    vmovss  dword ptr [rsp+2C8h+ap], xmm2
  }
  UI_DrawText(_RSI->m_scrPlace, dest, v16, FontHandle, ap, y, 1, 1, v34, color, 3);
  __asm { vmovaps xmm6, [rsp+2C8h+var_48] }
}

/*
==============
GetCompassNorthYaw
==============
*/

float __fastcall GetCompassNorthYaw(double _XMM0_8)
{
  if ( cg_t::ms_allocatedCount <= 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovaps [rsp+48h+var_18], xmm6 }
    _RBX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 81, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+49FFCh]
      vmovss  xmm1, cs:__real@c2340000
      vmovss  xmm2, cs:__real@42340000
      vxorps  xmm0, xmm0, xmm0
      vcmpless xmm3, xmm0, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  xmm1, cs:__real@42b40000; Y
      vaddss  xmm6, xmm0, xmm4
      vmovaps xmm0, xmm6; X
    }
    fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm0, xmm6, xmm0
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_DebugMapOverlay::GetDefaultScreenBounds
==============
*/
void CL_DebugMapOverlay::GetDefaultScreenBounds(CL_DebugMapOverlay *this, LocalClientNum_t localClientNum, bool fullOverlay, vec2_t *screenBoundsMin, vec2_t *screenBoundsMax)
{
  _RBX = screenBoundsMin;
  if ( fullOverlay )
    goto LABEL_8;
  if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount == 1 )
  {
LABEL_8:
    *_RBX = FULL_SCREEN_MIN;
    *screenBoundsMax = FULL_SCREEN_MAX;
  }
  else
  {
    _RCX = screenBoundsMax;
    *_RBX = ZOOM_SCREEN_MIN;
    *screenBoundsMax = ZOOM_SCREEN_MAX;
    if ( localClientNum )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@43660000
        vaddss  xmm0, xmm2, dword ptr [rbx+4]
        vmovss  dword ptr [rbx+4], xmm0
        vaddss  xmm0, xmm2, dword ptr [rcx+4]
        vmovss  dword ptr [rcx+4], xmm0
      }
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
  _RBX = viewPos;
  _RAX = CG_GetLocalClientGlobals(localClient);
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+699Ch]
    vmovsd  qword ptr [rbx], xmm0
  }
  _RBX->v[2] = _RAX->refdef.viewOffset.v[2];
  AxisToAngles(&_RAX->refdef.view.axis, viewAngles);
}

/*
==============
CL_DebugMapOverlay::Init
==============
*/
void CL_DebugMapOverlay::Init(CL_DebugMapOverlay *this, const ScreenPlacement *scrPlace, const vec2_t *screenBoundsMin, const vec2_t *screenBoundsMax, const Bounds *worldBounds)
{
  bool v16; 
  bool v22; 
  unsigned int v51; 
  unsigned int v52; 
  char v68; 
  bool v102; 
  unsigned int v111; 
  unsigned int v118; 
  unsigned int v124; 
  _BYTE v160[32]; 
  float c; 
  float s; 
  char v167; 
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
  }
  v16 = (unsigned __int64)v160 == _security_cookie;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vcomiss xmm0, dword ptr [r8]
  }
  _R14 = screenBoundsMax;
  _RSI = screenBoundsMin;
  _RDI = this;
  if ( (unsigned __int64)v160 == _security_cookie )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 117, ASSERT_TYPE_ASSERT, "(screenBoundsMin.x < screenBoundsMax.x)", (const char *)&queryFormat, "screenBoundsMin.x < screenBoundsMax.x");
    v16 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vcomiss xmm0, dword ptr [rsi+4]
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 118, ASSERT_TYPE_ASSERT, "(screenBoundsMin.y < screenBoundsMax.y)", (const char *)&queryFormat, "screenBoundsMin.y < screenBoundsMax.y") )
    __debugbreak();
  _RBX = worldBounds;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+0Ch]
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 119, ASSERT_TYPE_ASSERT, "(worldBounds.halfSize.x > 0.0f)", (const char *)&queryFormat, "worldBounds.halfSize.x > 0.0f") )
    __debugbreak();
  __asm { vcomiss xmm6, dword ptr [rbx+10h] }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debugmapoverlay.cpp", 120, ASSERT_TYPE_ASSERT, "(worldBounds.halfSize.y > 0.0f)", (const char *)&queryFormat, "worldBounds.halfSize.y > 0.0f") )
    __debugbreak();
  *(float *)&_XMM0 = GetCompassNorthYaw(*(double *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm12, [rsp+108h+c]
    vmovss  xmm11, [rsp+108h+s]
  }
  *(float *)&_XMM0 = GetCompassNorthYaw(*(double *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  FastSinCos(*(const float *)&_XMM0, &c, &s);
  __asm
  {
    vmovss  xmm9, [rsp+108h+s]
    vandps  xmm9, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm9, dword ptr [rbx+10h]
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm10, [rsp+108h+c]
    vandps  xmm10, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm10, dword ptr [rbx+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmulss  xmm0, xmm10, dword ptr [rbx+10h]
    vsubss  xmm1, xmm1, cs:__real@40000000
    vdivss  xmm3, xmm7, xmm2
    vmulss  xmm2, xmm9, dword ptr [rbx+0Ch]
    vmovss  xmm9, cs:__real@7f7fffff
    vmulss  xmm5, xmm3, xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovss  xmm0, dword ptr [r14+4]
    vdivss  xmm3, xmm7, xmm1
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, cs:__real@40000000
  }
  _RDI->m_scrPlace = scrPlace;
  v51 = 0;
  v52 = 0;
  _RDI->m_screenBoundsMin = *_RSI;
  _RDI->m_screenBoundsMax = *_R14;
  __asm
  {
    vmulss  xmm3, xmm3, xmm2
    vminss  xmm4, xmm5, xmm3
    vmulss  xmm0, xmm4, xmm12
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmovss  dword ptr [rdi+20h], xmm1
    vmulss  xmm3, xmm4, xmm11
    vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+24h], xmm0
    vmovss  dword ptr [rdi+18h], xmm3
    vmovss  dword ptr [rdi+30h], xmm4
  }
  _RDI->m_transformOffset = 0i64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovss  xmm14, dword ptr [rbx+0Ch]
    vmovss  xmm15, dword ptr [rbx+10h]
    vmovss  xmm12, dword ptr [rdi+1Ch]
    vmovss  xmm13, dword ptr [rdi+24h]
    vmovsd  [rsp+108h+var_D0], xmm0
    vmovss  xmm0, dword ptr [rdi+18h]
    vaddss  xmm5, xmm0, dword ptr [rdi+20h]
    vmovss  xmm7, dword ptr [rsp+108h+var_D0+4]
    vmovss  xmm8, dword ptr [rsp+108h+var_D0]
    vmovss  [rsp+108h+s], xmm5
    vmovss  [rsp+108h+c], xmm9
  }
  do
  {
    v68 = v52 - 1;
    _EAX = -1;
    if ( (v52 & 2) != 0 )
      _EAX = 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm15
      vaddss  xmm4, xmm1, xmm7
    }
    _EAX = 2 * (v52 & 1) - 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm6, xmm2, xmm5
      vmulss  xmm0, xmm12, xmm4
      vaddss  xmm3, xmm0, xmm6
      vmulss  xmm1, xmm13, xmm4
      vaddss  xmm10, xmm3, xmm1
    }
    _EAX = -1;
    __asm { vminss  xmm11, xmm10, xmm9 }
    if ( (((_BYTE)v52 + 1) & 2) != 0 )
      _EAX = 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm15
      vaddss  xmm4, xmm1, xmm7
    }
    _EAX = 2 * (v68 & 1) - 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm5, xmm2, xmm5
      vmulss  xmm0, xmm12, xmm4
      vaddss  xmm3, xmm0, xmm5
      vmulss  xmm1, xmm13, xmm4
      vaddss  xmm8, xmm3, xmm1
    }
    _EAX = -1;
    __asm { vminss  xmm9, xmm8, xmm11 }
    if ( (((_BYTE)v52 - 2) & 2) != 0 )
      _EAX = 1;
    v102 = (v68 & 2) == 0;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm15
      vaddss  xmm4, xmm1, xmm7
      vmulss  xmm2, xmm12, xmm4
      vaddss  xmm3, xmm2, xmm6
      vmulss  xmm0, xmm13, xmm4
      vaddss  xmm6, xmm3, xmm0
    }
    v111 = v52;
    _EAX = -1;
    if ( !v102 )
      _EAX = 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm15
      vaddss  xmm4, xmm1, dword ptr [rsp+108h+var_D0+4]
      vmulss  xmm0, xmm13, xmm4
    }
    v118 = v52 + 1;
    __asm
    {
      vminss  xmm7, xmm9, xmm6
      vmulss  xmm2, xmm12, xmm4
      vaddss  xmm3, xmm2, xmm5
      vaddss  xmm1, xmm3, xmm0
      vmovss  xmm0, [rsp+108h+c]
      vcomiss xmm0, xmm10
    }
    if ( v102 )
      v111 = v51;
    v51 = v52 + 3;
    __asm { vcomiss xmm11, xmm8 }
    if ( v102 )
      v118 = v111;
    v124 = v52 + 2;
    __asm
    {
      vcomiss xmm9, xmm6
      vminss  xmm9, xmm7, xmm1
    }
    if ( v102 )
      v124 = v118;
    __asm { vcomiss xmm7, xmm1 }
    if ( v102 )
      v51 = v124;
    v52 += 4;
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+108h+var_D0+4]
      vmovss  xmm5, [rsp+108h+s]
      vmovss  xmm8, dword ptr [rsp+108h+var_D0]
      vmovss  [rsp+108h+c], xmm9
    }
  }
  while ( v52 < 4 );
  __asm
  {
    vmovsd  xmm3, qword ptr [rbx]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm14
    vaddss  xmm5, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm2, xmm0, xmm15
    vmulss  xmm0, xmm5, dword ptr [rdi+18h]
    vshufps xmm1, xmm3, xmm3, 55h ; 'U'
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm3, xmm12
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi]
    vsubss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rdi+28h], xmm2
    vmulss  xmm0, xmm5, dword ptr [rdi+20h]
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm3, xmm3, xmm13
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rdi+2Ch], xmm2
  }
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
    vmovaps xmm14, [rsp+108h+var_A8]
    vmovaps xmm15, [rsp+108h+var_B8]
  }
}

/*
==============
CL_DebugMapOverlay::InitFromScale
==============
*/

void __fastcall CL_DebugMapOverlay::InitFromScale(CL_DebugMapOverlay *this, const ScreenPlacement *scrPlace, const vec2_t *screenBoundsMin, double desiredWorldToScreenScale, const Bounds *worldBounds)
{
  vec2_t s; 
  float c; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps [rsp+88h+var_48], xmm8
    vmovaps xmm8, xmm3
  }
  *(float *)&_XMM0 = GetCompassNorthYaw(*(double *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  FastSinCos(*(const float *)&_XMM0, (float *)&s, &c);
  __asm
  {
    vmovss  xmm7, [rsp+88h+s]
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm7, dword ptr [rbx+0Ch]
    vmovss  xmm6, [rsp+88h+c]
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm6, dword ptr [rbx+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm2, cs:__real@40000000
    vmulss  xmm0, xmm1, xmm8
    vaddss  xmm2, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm7, dword ptr [rbx+10h]
    vmulss  xmm1, xmm6, dword ptr [rbx+0Ch]
    vaddss  xmm1, xmm1, xmm0
    vmovss  [rsp+88h+s], xmm2
    vmulss  xmm2, xmm1, cs:__real@40000000
    vmulss  xmm3, xmm2, xmm8
    vaddss  xmm0, xmm3, dword ptr [rbp+4]
    vmovss  [rsp+88h+var_54], xmm0
  }
  CL_DebugMapOverlay::Init(this, scrPlace, screenBoundsMin, &s, worldBounds);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
    vmovaps xmm8, [rsp+88h+var_48]
  }
}

/*
==============
CL_DebugMapOverlay::TransformBox
==============
*/
void CL_DebugMapOverlay::TransformBox(CL_DebugMapOverlay *this, const vec3_t *inMin3D, const vec3_t *inMax3D, vec2_t *outMin2D, vec2_t *outMax2D)
{
  char v5; 
  char v6; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
  }
  _RAX = outMax2D;
  __asm
  {
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rcx+28h]
    vmovss  dword ptr [r9], xmm3
    vmovss  xmm0, dword ptr [rcx+24h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rdx]
    vmulss  xmm2, xmm1, dword ptr [rcx+20h]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rcx+2Ch]
    vmovss  dword ptr [r9+4], xmm3
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm0, dword ptr [r8+4]
    vmovss  xmm1, dword ptr [r8]
    vmulss  xmm2, xmm1, dword ptr [rcx+18h]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm5, xmm0, dword ptr [rcx+28h]
    vmovss  dword ptr [rax], xmm5
    vmovss  xmm0, dword ptr [rcx+24h]
    vmulss  xmm3, xmm0, dword ptr [r8+4]
    vmovss  xmm1, dword ptr [rcx+20h]
    vmulss  xmm2, xmm1, dword ptr [r8]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm4, xmm0, dword ptr [rcx+2Ch]
    vmovss  dword ptr [rax+4], xmm4
    vmovss  xmm0, dword ptr [r9]
    vcomiss xmm0, xmm5
  }
  if ( !(v5 | v6) )
  {
    __asm
    {
      vmovss  dword ptr [r9], xmm5
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm4, dword ptr [rax+4]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r9+4]
    vcomiss xmm0, xmm4
  }
  if ( !(v5 | v6) )
  {
    __asm
    {
      vmovss  dword ptr [r9+4], xmm4
      vmovss  dword ptr [rax+4], xmm0
    }
  }
}

/*
==============
CL_DebugMapOverlay::TransformPos
==============
*/
void CL_DebugMapOverlay::TransformPos(CL_DebugMapOverlay *this, const vec3_t *inPos3D, vec2_t *outPos2D)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx+18h]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rcx+28h]
    vmovss  dword ptr [r8], xmm3
    vmovss  xmm0, dword ptr [rcx+24h]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx+20h]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rcx+2Ch]
    vmovss  dword ptr [r8+4], xmm3
  }
}

/*
==============
DrawArrow
==============
*/
void DrawArrow(const vec3_t *base, const vec3_t *direction)
{
  vec3_t v77; 
  vec3_t end; 
  vec3_t v79; 
  vec3_t v80; 
  vec3_t v81; 
  __int64 v82; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v82;
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
    vmovss  xmm2, cs:__real@42340000
    vmovss  xmm3, cs:__real@42480000
    vmovss  xmm12, dword ptr [rdx]
    vmovss  xmm13, dword ptr [rdx+4]
    vmovss  xmm11, dword ptr [rdx+8]
    vmulss  xmm0, xmm12, xmm2
    vmovss  dword ptr [rsp+110h+var_E0], xmm0
    vmulss  xmm1, xmm13, xmm2
    vmovss  dword ptr [rsp+110h+var_E0+4], xmm1
    vmulss  xmm0, xmm11, xmm2
    vmovss  dword ptr [rsp+110h+var_E0+8], xmm0
    vmulss  xmm1, xmm12, xmm3
    vaddss  xmm0, xmm1, dword ptr [rcx]
    vmulss  xmm1, xmm13, xmm3
    vmovss  dword ptr [rsp+110h+end], xmm0
    vaddss  xmm0, xmm1, dword ptr [rcx+4]
    vmulss  xmm1, xmm11, xmm3
    vmovss  dword ptr [rsp+110h+end+4], xmm0
    vaddss  xmm0, xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+110h+end+8], xmm0
  }
  if ( direction == &v79 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, cs:__real@40a00000
    vmulss  xmm1, xmm13, dword ptr [rbx+4]
    vmulss  xmm0, xmm12, dword ptr [rbx+8]
    vmulss  xmm2, xmm11, dword ptr [rbx+8]
    vmulss  xmm3, xmm12, dword ptr [rbx]
    vsubss  xmm10, xmm1, xmm0
    vmulss  xmm0, xmm13, dword ptr [rbx]
    vmulss  xmm1, xmm11, dword ptr [rbx+4]
    vsubss  xmm8, xmm2, xmm0
    vmovss  xmm0, dword ptr [rsp+110h+var_E0]
    vaddss  xmm5, xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rsp+110h+var_E0+8]
    vaddss  xmm7, xmm0, dword ptr [rdi+8]
    vsubss  xmm9, xmm3, xmm1
    vmovss  xmm3, cs:__real@c0a00000
    vmovss  xmm1, dword ptr [rsp+110h+var_E0+4]
    vaddss  xmm6, xmm1, dword ptr [rdi+4]
    vmulss  xmm0, xmm11, xmm4
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rsp+110h+var_E0], xmm1
    vmulss  xmm2, xmm12, xmm4
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+110h+var_E0+4], xmm0
    vmulss  xmm1, xmm13, xmm4
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rsp+110h+var_E0+8], xmm2
    vmulss  xmm0, xmm11, xmm3
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rsp+110h+var_B0], xmm1
    vmulss  xmm2, xmm12, xmm3
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+110h+var_B0+4], xmm0
    vmulss  xmm1, xmm13, xmm3
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rsp+110h+var_B0+8], xmm2
    vmulss  xmm0, xmm10, xmm4
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rsp+110h+var_A0], xmm1
    vmulss  xmm2, xmm8, xmm4
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+110h+var_A0+4], xmm0
    vmulss  xmm1, xmm9, xmm4
    vaddss  xmm2, xmm1, xmm7
    vmulss  xmm0, xmm10, xmm3
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rsp+110h+var_A0+8], xmm2
    vmulss  xmm2, xmm8, xmm3
    vaddss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+110h+var_C0], xmm1
    vmulss  xmm1, xmm9, xmm3
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rsp+110h+var_C0+8], xmm2
    vmovss  dword ptr [rsp+110h+var_C0+4], xmm0
  }
  CL_AddDebugLine(base, &end, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v77, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v80, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v81, &colorYellow, 1, 1, 0);
  CL_AddDebugLine(&end, &v79, &colorYellow, 1, 1, 0);
  _R11 = &vars0;
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
  }
}

