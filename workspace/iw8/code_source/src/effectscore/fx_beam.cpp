/*
==============
FX_Beam_SetPlayerLaser
==============
*/

void FX_Beam_SetPlayerLaser(void)
{
  ?FX_Beam_SetPlayerLaser@@YAXXZ();
}

/*
==============
FX_Beam_Begin
==============
*/

void FX_Beam_Begin(void)
{
  ?FX_Beam_Begin@@YAXXZ();
}

/*
==============
FX_Beam_GenerateVerts
==============
*/

void __fastcall FX_Beam_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxGenerateVertsCmd *cmd)
{
  ?FX_Beam_GenerateVerts@@YAXPEAUGfxCodeSurfGlob@@PEBUFxGenerateVertsCmd@@@Z(codeSurfGlob, cmd);
}

/*
==============
FX_Beam_GetInfo
==============
*/

FxBeamInfo *__fastcall FX_Beam_GetInfo()
{
  return ?FX_Beam_GetInfo@@YAPEAUFxBeamInfo@@XZ();
}

/*
==============
FX_Beam_PlayerLaserExists
==============
*/

int __fastcall FX_Beam_PlayerLaserExists()
{
  return ?FX_Beam_PlayerLaserExists@@YAHXZ();
}

/*
==============
FX_Beam_Add
==============
*/

void __fastcall FX_Beam_Add(FxBeam *beam)
{
  ?FX_Beam_Add@@YAXPEAUFxBeam@@@Z(beam);
}

/*
==============
CreateClipMatrix
==============
*/
void CreateClipMatrix(vector4 *clipMtx, const vec3_t *vieworg, const tmat33_t<vec3_t> *viewaxis, const vec2_t *tanHalfFov)
{
  const vector4 *v22; 
  vector4 M1; 
  vector4 mtx; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RAX = g_activeRefDef;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RDI = clipMtx;
  __asm { vcomiss xmm6, dword ptr [rax+10h] }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef->view.tanHalfFovX > 0.0f)", (const char *)&queryFormat, "g_activeRefDef->view.tanHalfFovX > 0.0f") )
    __debugbreak();
  _RAX = g_activeRefDef;
  __asm { vcomiss xmm6, dword ptr [rax+14h] }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 118, ASSERT_TYPE_ASSERT, "(g_activeRefDef->view.tanHalfFovY > 0.0f)", (const char *)&queryFormat, "g_activeRefDef->view.tanHalfFovY > 0.0f") )
    __debugbreak();
  Float4x4ForViewer(&mtx, vieworg, viewaxis);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm0, xmm1, dword ptr [rbx]
    vmovaps ymm4, cs:__ymm@000000003f80000000000000000000003f800000000000000000000000000000
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm2, xmm2, xmm0, 0
    vdivss  xmm0, xmm1, dword ptr [rbx+4]
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm1, xmm1, xmm0, 10h
    vmovdqa xmmword ptr [rsp+0C8h+M1.baseclass_0.y.v], xmm1
    vmovdqa xmmword ptr [rsp+0C8h+M1.baseclass_0.x.v], xmm2
    vmovups ymmword ptr [rsp+0C8h+M1.baseclass_0.z.v], ymm4
  }
  Float4x4Mul(&mtx, &M1, v22);
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovups xmmword ptr [rsp+0C8h+M1.baseclass_0.x.v], xmm0
    vmovups xmmword ptr [rsp+0C8h+M1.baseclass_0.y.v], xmm1
    vmovups ymm1, ymmword ptr [rsp+0C8h+M1.baseclass_0.x.v]
    vmovups ymmword ptr [rdi], ymm1
    vmovups xmmword ptr [rsp+0C8h+M1.w.v], xmm3
    vmovups xmmword ptr [rsp+0C8h+M1.baseclass_0.z.v], xmm2
    vmovups ymm0, ymmword ptr [rsp+0C8h+M1.baseclass_0.z.v]
    vmovups ymmword ptr [rdi+20h], ymm0
  }
}

/*
==============
FX_Beam_Add
==============
*/
void FX_Beam_Add(FxBeam *beam)
{
  int v2; 

  _RDI = beam;
  if ( ((unsigned __int8)&g_beamInfo.beamCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_beamInfo.beamCount) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd(&g_beamInfo.beamCount, 1u);
  if ( v2 < 96 )
  {
    __asm { vmovups ymm0, ymmword ptr [rdi] }
    _RCX = &g_beamInfo;
    _RAX = (__int64)v2 << 7;
    __asm
    {
      vmovups ymmword ptr [rax+rcx], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rax+rcx+20h], ymm1
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rax+rcx+40h], ymm0
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rax+rcx+60h], ymm1
    }
  }
  else
  {
    if ( ((unsigned __int64)&g_beamInfo.beamCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_beamInfo.beamCount) )
      __debugbreak();
    _InterlockedDecrement(&g_beamInfo.beamCount);
  }
}

/*
==============
FX_Beam_Begin
==============
*/
void FX_Beam_Begin(void)
{
  g_beamInfo.beamCount = 0;
  g_beamInfo.playerLaserExists = 0;
}

/*
==============
FX_Beam_GenerateVerts
==============
*/

void __fastcall FX_Beam_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxGenerateVertsCmd *cmd, double _XMM2_8, double _XMM3_8)
{
  __int64 beamInfo; 
  unsigned __int8 v18; 
  char v27; 
  int v32; 
  __int64 v34; 
  __int64 v36; 
  bool v37; 
  unsigned __int8 v39; 
  unsigned int v42; 
  int v43; 
  unsigned __int8 v45; 
  __int64 v55; 
  const vector4 *v56; 
  unsigned __int16 vertIndexOffset; 
  int v120; 
  r_double_index_t *indices; 
  unsigned int vertIndexBase; 
  unsigned int argOffset; 
  r_double_index_t *v124; 
  __int16 v125; 
  __int16 v126; 
  __int16 v127; 
  Material *v128; 
  unsigned int v163; 
  unsigned __int64 v178; 
  unsigned __int64 v180; 
  bool v181; 
  bool v191; 
  bool v192; 
  bool v193; 
  __int64 v194; 
  bool v195; 
  bool v196; 
  bool v200; 
  int v208; 
  bool v209; 
  __int64 v251; 
  double v252; 
  double v253; 
  double v254; 
  __int64 v255; 
  __int64 v256; 
  __int64 v257; 
  double v258; 
  double v259; 
  double v260; 
  __int64 v261; 
  __int64 v262; 
  double v263; 
  double v264; 
  double v265; 
  unsigned __int16 v266; 
  r_double_index_t v267; 
  r_double_index_t v268; 
  r_double_index_t v269; 
  unsigned __int8 v270; 
  int v271; 
  int v273; 
  int v274; 
  unsigned int v275; 
  int v276; 
  int v277; 
  int v279; 
  unsigned int v281; 
  unsigned int v283; 
  float4 pt0; 
  __int64 v286; 
  float4 pt1; 
  unsigned __int8 *v288; 
  const FxGenerateVertsCmd *v289; 
  __int64 v290; 
  GfxCodeSurfBuffers outBuffers; 
  GfxCodeSurfArgs codeSurfArgs; 
  vector4 clipMtx; 
  __int128 v301; 
  __int128 v302; 
  __int128 v303; 
  __int128 v304; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v289 = cmd;
  _RDI = cmd;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 242, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !_RDI->beamInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 243, ASSERT_TYPE_ASSERT, "(cmd->beamInfo)", (const char *)&queryFormat, "cmd->beamInfo") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rdi+0A0h] }
  beamInfo = (__int64)_RDI->beamInfo;
  HIDWORD(v302) = 0;
  v18 = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+210h]
    vmovss  xmm7, xmm7, xmm0
    vmovups xmm0, cs:__xmm@00000000000000003f8000003f800000
    vinsertps xmm7, xmm7, dword ptr [rdi+0A4h], 10h
    vinsertps xmm7, xmm7, dword ptr [rdi+0A8h], 20h ; ' '
    vcvtps2ph xmm6, xmm0, 0
    vxorps  xmm0, xmm0, xmm0
    vcvtps2ph xmm1, xmm0, 0
    vmovss  [rsp+318h+var_2CC], xmm1
  }
  v27 = 1;
  __asm { vmovss  [rsp+318h+var_2C8], xmm6 }
  v290 = beamInfo;
  __asm
  {
    vmovups [rsp+318h+var_1E8], xmm7
    vmovups xmmword ptr [rsp+210h], xmm7
  }
  v281 = v275;
  if ( v273 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 255, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_0_0 == Float4PackFloat16_2( 0.0f, 0.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_0_0 == Float4PackFloat16_2( 0.0f, 0.0f )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, cs:__xmm@0000000000000000000000003f800000
    vcvtps2ph xmm1, xmm0, 0
    vmovss  [rsp+318h+var_2D0], xmm1
  }
  if ( v271 != 15360 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 256, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_1_0 == Float4PackFloat16_2( 1.0f, 0.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_1_0 == Float4PackFloat16_2( 1.0f, 0.0f )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000000000003f80000000000000
    vcvtps2ph xmm1, xmm0, 0
    vmovss  [rsp+318h+var_2C4], xmm1
  }
  if ( v277 != 1006632960 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 257, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_0_1 == Float4PackFloat16_2( 0.0f, 1.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_0_1 == Float4PackFloat16_2( 0.0f, 1.0f )") )
    __debugbreak();
  __asm { vmovss  [rsp+318h+var_2C0], xmm6 }
  if ( v279 != 1006648320 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 258, ASSERT_TYPE_ASSERT, "(VEC_PACK16_2_CONST_1_1 == Float4PackFloat16_2( 1.0f, 1.0f ))", (const char *)&queryFormat, "VEC_PACK16_2_CONST_1_1 == Float4PackFloat16_2( 1.0f, 1.0f )") )
    __debugbreak();
  v32 = 96;
  if ( *(int *)(beamInfo + 12288) < 96 )
    v32 = *(_DWORD *)(beamInfo + 12288);
  if ( v32 )
  {
    __asm
    {
      vmovaps [rsp+318h+var_58], xmm8
      vmovaps [rsp+318h+var_68], xmm9
      vmovaps [rsp+318h+var_78], xmm10
      vmovaps [rsp+318h+var_88], xmm11
      vmovss  xmm11, cs:__real@3f800000
      vmovaps [rsp+318h+var_98], xmm12
      vmovaps [rsp+318h+var_A8], xmm13
    }
    *(_QWORD *)&v302 = v32;
    v34 = 0i64;
    __asm
    {
      vmovaps [rsp+318h+var_B8], xmm14
      vmovaps [rsp+318h+var_C8], xmm15
    }
    v286 = 0i64;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      v36 = v34 << 7;
      v37 = *(_QWORD *)(v36 + beamInfo + 112) == 0i64;
      _R12 = (unsigned __int8 *)(v36 + beamInfo);
      v288 = (unsigned __int8 *)(v36 + beamInfo);
      if ( !v37 )
        goto LABEL_110;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 298, ASSERT_TYPE_ASSERT, "(beam->material)", (const char *)&queryFormat, "beam->material") )
        __debugbreak();
      if ( *((_QWORD *)_R12 + 14) )
      {
LABEL_110:
        v39 = *_R12;
        __asm
        {
          vmovss  xmm15, dword ptr [r12+1Ch]
          vmovss  [rsp+318h+var_2C4], xmm15
        }
        if ( *_R12 == 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r12+78h]
            vmovss  [rsp+318h+var_2D0], xmm0
          }
        }
        else
        {
          __asm { vmovss  [rsp+318h+var_2D0], xmm15 }
          if ( v39 >= 2u )
          {
            LODWORD(v257) = 2;
            LODWORD(v251) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( beam->type ) < (unsigned)( BEAMTYPE_COUNT )", "beam->type doesn't index BEAMTYPE_COUNT\n\t%i not in [0, %i)", v251, v257) )
              __debugbreak();
          }
        }
        v42 = FX_BEAMS_COLOR_COUNT_TYPES[*_R12];
        v283 = v42;
        v43 = v42 - 1;
        if ( _R12[2] > (int)(v42 - 1) )
          v43 = _R12[2];
        v276 = v43;
        if ( v43 < 0 )
        {
          LODWORD(v251) = v43;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 313, ASSERT_TYPE_ASSERT, "( ( segCount >= 0 ) )", "( segCount ) = %i", v251) )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [r12+4] }
        HIDWORD(v303) = 0;
        HIDWORD(v304) = 0;
        v45 = _R12[1];
        __asm
        {
          vmovups xmm12, xmmword ptr [rsp+220h]
          vmovups xmm13, xmmword ptr [rsp+230h]
          vmovss  xmm12, xmm12, xmm0
          vmovss  xmm0, dword ptr [r12+10h]
          vinsertps xmm12, xmm12, dword ptr [r12+8], 10h
          vinsertps xmm12, xmm12, dword ptr [r12+0Ch], 20h ; ' '
          vmovss  xmm13, xmm13, xmm0
          vinsertps xmm13, xmm13, dword ptr [r12+14h], 10h
          vinsertps xmm13, xmm13, dword ptr [r12+18h], 20h ; ' '
          vmovups xmmword ptr [rsp+230h], xmm13
          vxorps  xmm8, xmm8, xmm8
          vmovups xmmword ptr [rsp+220h], xmm12
        }
        if ( v27 || v45 != v18 )
        {
          v270 = v45;
          v18 = v45;
          v55 = 220i64;
          if ( !v45 )
            v55 = 212i64;
          CreateClipMatrix(&clipMtx, &_RDI->camera.origin, &_RDI->camera.axis, (const vec2_t *)((char *)_RDI + v55));
          Float4x4Inverse(&clipMtx, v56);
          __asm
          {
            vmovups xmmword ptr [rsp+318h+var_178], xmm2
            vmovups xmmword ptr [rsp+318h+var_198], xmm0
            vmovups xmmword ptr [rsp+318h+var_178+10h], xmm3
            vmovups ymm0, [rsp+318h+var_178]
            vmovups xmmword ptr [rsp+318h+var_198+10h], xmm1
            vmovups ymm2, [rsp+318h+var_198]
            vmovups [rsp+318h+var_158], ymm2
            vmovups [rsp+318h+var_138], ymm0
          }
        }
        else
        {
          v18 = v45;
          v270 = v45;
        }
        __asm
        {
          vaddps  xmm3, xmm12, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vaddps  xmm5, xmm13, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovups xmm14, xmmword ptr [rsp+318h+clipMtx.baseclass_0.y.v]
          vshufps xmm2, xmm3, xmm3, 0AAh ; 'ª'
          vshufps xmm4, xmm3, xmm3, 0FFh
          vshufps xmm0, xmm3, xmm3, 55h ; 'U'
          vshufps xmm1, xmm3, xmm3, 0
          vmulps  xmm1, xmm1, xmmword ptr [rsp+318h+clipMtx.baseclass_0.x.v]
          vmulps  xmm3, xmm14, xmm0
          vmulps  xmm0, xmm2, xmmword ptr [rsp+318h+clipMtx.baseclass_0.z.v]
          vaddps  xmm2, xmm0, xmm1
          vmulps  xmm1, xmm4, xmmword ptr [rsp+318h+clipMtx.w.v]
          vaddps  xmm0, xmm1, xmm3
          vaddps  xmm2, xmm0, xmm2
          vmovups xmmword ptr [rsp+318h+pt0.v], xmm2
          vshufps xmm0, xmm5, xmm5, 55h ; 'U'
          vshufps xmm2, xmm5, xmm5, 0AAh ; 'ª'
          vmulps  xmm3, xmm14, xmm0
          vmulps  xmm0, xmm2, xmmword ptr [rsp+318h+clipMtx.baseclass_0.z.v]
          vshufps xmm1, xmm5, xmm5, 0
          vmulps  xmm1, xmm1, xmmword ptr [rsp+318h+clipMtx.baseclass_0.x.v]
          vaddps  xmm2, xmm0, xmm1
          vshufps xmm4, xmm5, xmm5, 0FFh
          vmulps  xmm1, xmm4, xmmword ptr [rsp+318h+clipMtx.w.v]
          vaddps  xmm0, xmm1, xmm3
          vaddps  xmm2, xmm0, xmm2
        }
        v27 = 0;
        __asm { vmovups xmmword ptr [rsp+318h+pt1.v], xmm2 }
        if ( Vec4HomogenousClipBothZ(&pt0, &pt1) )
        {
          __asm
          {
            vmovups xmm2, xmmword ptr [rsp+318h+pt0.v]
            vmovups xmm3, xmmword ptr [rsp+318h+pt1.v]
            vshufps xmm0, xmm2, xmm2, 0FFh
            vrcpps  xmm1, xmm0
            vmulps  xmm4, xmm1, xmm2
            vshufps xmm0, xmm3, xmm3, 0FFh
            vrcpps  xmm1, xmm0
            vmulps  xmm2, xmm1, xmm3
            vsubps  xmm4, xmm2, xmm4
            vandps  xmm1, xmm4, xmmword ptr cs:?g_keepXYW@@3Ufloat4@@B.v; float4 const g_keepXYW
            vshufps xmm3, xmm1, xmm1, 55h ; 'U'
            vmulps  xmm4, xmm3, xmmword ptr [rsp+318h+var_158+10h]
            vshufps xmm2, xmm1, xmm1, 0
            vmulps  xmm2, xmm2, xmmword ptr [rsp+318h+var_158]
            vshufps xmm5, xmm1, xmm1, 0AAh ; 'ª'
            vshufps xmm6, xmm1, xmm1, 0FFh
            vmulps  xmm1, xmm5, xmmword ptr [rsp+318h+var_138]
            vaddps  xmm3, xmm1, xmm2
            vmulps  xmm1, xmm6, xmmword ptr [rsp+318h+var_138+10h]
            vaddps  xmm2, xmm1, xmm4
            vaddps  xmm3, xmm2, xmm3
            vandps  xmm4, xmm3, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
            vshufps xmm0, xmm4, xmm4, 55h ; 'U'
            vmulss  xmm0, xmm0, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
            vmulss  xmm0, xmm1, xmm1
            vaddss  xmm3, xmm2, xmm0
            vshufps xmm2, xmm4, xmm4, 0FFh
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm1, xmm3, xmm0
            vcvtss2sd xmm2, xmm1, xmm1
            vcomisd xmm2, cs:__real@3ec0c6f7a0b5ed8d
            vmulps  xmm0, xmm4, xmm4
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
            vrsqrtps xmm1, xmm0
            vmulps  xmm10, xmm1, xmm4
            vmovups xmmword ptr [rsp+318h+pt1.v], xmm10
          }
          if ( !R_ReserveVertCodeSurfBuffers(&outBuffers, codeSurfGlob, 2 * v43 + 4, 2 * (3 * v43 + 3), 2u) )
            break;
          vertIndexOffset = outBuffers.vertIndexOffset;
          v120 = 0;
          indices = outBuffers.indices;
          vertIndexBase = outBuffers.vertIndexBase;
          argOffset = outBuffers.argOffset;
          v266 = outBuffers.vertIndexOffset;
          v267.value[1] = outBuffers.vertIndexOffset + 2;
          v124 = outBuffers.indices + 1;
          *outBuffers.indices = v267;
          v267.value[0] = vertIndexOffset + 1;
          if ( v43 )
          {
            do
            {
              v125 = v120++;
              v126 = vertIndexOffset + 2 * v125;
              v267.value[1] = v126 + 2;
              *v124 = v267;
              v268.value[0] = v126 + 4;
              v268.value[1] = v126 + 1;
              v124[1] = v268;
              v268.value[0] = v126 + 1;
              v267.value[1] = v126 + 4;
              v124[2] = v267;
              v124 += 3;
              v267.value[0] = v126 + 3;
            }
            while ( v120 != v43 );
          }
          v127 = vertIndexOffset + 2 * v43;
          v267.value[1] = v127 + 1;
          *v124 = v267;
          v269.value[0] = v127 + 2;
          v269.value[1] = v127 + 3;
          v124[1] = v269;
          v128 = (Material *)*((_QWORD *)_R12 + 14);
          LOBYTE(v127) = _R12[1] != 0;
          codeSurfArgs.indexCount = 2 * (3 * v43 + 3);
          codeSurfArgs.material = v128;
          codeSurfArgs.flags = v127;
          codeSurfArgs.vertIndexBase = vertIndexBase;
          codeSurfArgs.indices = indices;
          codeSurfArgs.argOffset = argOffset;
          codeSurfArgs.argCount = 2;
          codeSurfArgs.fxName = "Beam";
          codeSurfArgs.sortOrder = 0;
          R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
          __asm
          {
            vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
            vshufps xmm2, xmm7, xmm7, 0D2h ; 'Ò'
            vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
            vmulps  xmm3, xmm1, xmm0
            vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
            vmulps  xmm0, xmm2, xmm1
            vsubps  xmm4, xmm0, xmm3
            vmulps  xmm1, xmm4, xmm4
            vinsertps xmm0, xmm1, xmm1, 8
            vhaddps xmm2, xmm0, xmm0
            vhaddps xmm0, xmm2, xmm2
            vrsqrtps xmm1, xmm0
            vmulps  xmm3, xmm1, xmm4
            vmovups [rsp+318h+var_208], xmm3
            vsubps  xmm3, xmm13, xmm12
            vmulps  xmm0, xmm3, xmm3
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vrsqrtps xmm1, xmm0
            vmulps  xmm7, xmm1, xmm3
            vmulps  xmm0, xmm12, xmm7
            vinsertps xmm1, xmm0, xmm0, 8
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vsubps  xmm6, xmm8, xmm0
          }
          _RAX = R_CodeSurfArgsIter_Begin(codeSurfGlob, argOffset);
          __asm
          {
            vblendps xmm0, xmm7, xmm6, 8
            vmovups xmmword ptr [rax], xmm0
            vxorps  xmm0, xmm15, cs:__xmm@80000000800000008000000080000000
            vaddps  xmm1, xmm12, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
            vshufps xmm0, xmm0, xmm0, 0
            vmulps  xmm0, xmm0, xmm10
            vaddps  xmm6, xmm0, xmm12
            vmovups xmmword ptr [rax+10h], xmm1
          }
          _R15 = R_CodeSurfVertIter_Begin(codeSurfGlob, vertIndexBase + vertIndexOffset);
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vextractps dword ptr [rax+4], xmm6, 1
            vextractps dword ptr [rax+8], xmm6, 2
          }
          _R15->color = (vec4_t)*((_OWORD *)_R12 + 2);
          _ER14 = 0;
          v163 = v281;
          _R15->extraData = v281;
          _R15->normal.packed = 1073643391;
          _R15->tangentBinormalSign.packed = 1065320446;
          _R15->texCoord.packed = 0;
          if ( *_R12 )
            __asm { vmovaps xmm6, xmm9 }
          else
            __asm { vmovss  xmm6, dword ptr [r12+78h] }
          if ( v42 < 2 )
          {
            LODWORD(v251) = v42;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 426, ASSERT_TYPE_ASSERT, "( ( colorCount >= 2 ) )", "( colorCount ) = %i", v251) )
              __debugbreak();
          }
          if ( v42 > 5 )
          {
            LODWORD(v251) = v42;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 427, ASSERT_TYPE_ASSERT, "( ( colorCount <= 5 ) )", "( colorCount ) = %i", v251) )
              __debugbreak();
          }
          _EBX = v42 - 2;
          if ( v42 - 2 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 431, ASSERT_TYPE_SANITY, "( colorSegmentCount <= sizeof(FX_BEAMS_COLOR_SEGMENTS) )", (const char *)&queryFormat, "colorSegmentCount <= sizeof(FX_BEAMS_COLOR_SEGMENTS)") )
            __debugbreak();
          v274 = 0;
          LODWORD(_RSI) = 0;
          __asm
          {
            vmovd   xmm1, r14d
            vmovd   xmm0, ebx
            vpcmpgtq xmm2, xmm0, xmm1
            vmovss  xmm0, cs:__real@3dcccccd
            vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
            vblendvps xmm0, xmm11, xmm0, xmm2
            vmovss  [rsp+318h+var_2C0], xmm0
            vmovaps xmm10, xmm9
            vmovups [rsp+318h+var_118], xmm1
          }
          if ( v276 < 0 )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rsp+318h+var_118+0Ch]
              vmovss  xmm5, dword ptr [rsp+318h+var_118+8]
              vmovss  xmm3, dword ptr [rsp+318h+var_118+4]
              vmovss  xmm2, dword ptr [rsp+318h+var_118]
            }
          }
          else
          {
            __asm
            {
              vmovaps xmm14, xmm6
              vmovss  xmm6, [rsp+318h+var_2C0]
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vdivss  xmm1, xmm11, xmm0
            }
            LOBYTE(v178) = 0;
            __asm
            {
              vmovss  [rsp+318h+var_2B8], xmm1
              vshufps xmm14, xmm14, xmm14, 0
            }
            pt0.v.m128_u64[0] = 0i64;
            do
            {
              v180 = v178 & 7;
              v181 = __CFADD__(v180, v180) || 2 * v180 == 0;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, ecx
                vmulss  xmm8, xmm0, xmm1
                vcomiss xmm8, xmm9
              }
              _RCX = 0x140000000ui64;
              __asm
              {
                vmulps  xmm1, xmm14, xmmword ptr rva FX_BEAMS_wiggle.v[rcx+rax*8]
                vshufps xmm0, xmm1, xmm1, 55h ; 'U'
                vmovups [rsp+318h+var_1F8], xmm0
                vshufps xmm15, xmm1, xmm1, 0
              }
              if ( __CFADD__(v180, v180) )
                goto LABEL_63;
              __asm { vcomiss xmm8, xmm11 }
              if ( __CFADD__(v180, v180) || 2 * v180 == 0 )
              {
                __asm { vmovsd  xmm7, cs:__real@3ff0000000000000 }
              }
              else
              {
LABEL_63:
                __asm
                {
                  vmovsd  xmm7, cs:__real@3ff0000000000000
                  vmovsd  [rsp+318h+var_2E0], xmm7
                  vxorpd  xmm1, xmm1, xmm1
                  vmovsd  [rsp+318h+var_2E8], xmm1
                  vcvtss2sd xmm0, xmm8, xmm8
                  vmovsd  [rsp+318h+var_2F0], xmm0
                }
                v191 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 458, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( alpha ) && ( alpha ) <= ( 1.0f )", "alpha not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v252, v258, v263);
                v181 = !v191;
                if ( v191 )
                  __debugbreak();
                _RCX = 0x140000000ui64;
              }
              __asm { vcomiss xmm8, xmm6 }
              if ( !v181 )
              {
                do
                {
                  _RSI = (unsigned int)(_RSI + 1);
                  __asm { vmovaps xmm10, xmm6 }
                  if ( _EBX <= (unsigned int)_RSI )
                    __asm { vmovaps xmm6, xmm11 }
                  else
                    __asm { vmovss  xmm6, ds:rva FX_BEAMS_COLOR_SEGMENTS[rcx+rsi*4] }
                  __asm { vcomiss xmm8, xmm6 }
                }
                while ( _EBX > (unsigned int)_RSI );
              }
              if ( (unsigned int)_RSI >= v42 )
              {
                LODWORD(v257) = v42;
                LODWORD(v251) = _RSI;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 466, ASSERT_TYPE_SANITY, "(unsigned)( colorIndex ) < (unsigned)( colorCount )", "colorIndex doesn't index colorCount\n\t%i not in [0, %i)", v251, v257) )
                  __debugbreak();
              }
              v192 = (int)_RSI + 1 <= v42;
              if ( (int)_RSI + 1 >= v42 )
              {
                LODWORD(v257) = v42;
                LODWORD(v251) = _RSI + 1;
                v193 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 467, ASSERT_TYPE_SANITY, "(unsigned)( colorIndex + 1 ) < (unsigned)( colorCount )", "colorIndex + 1 doesn't index colorCount\n\t%i not in [0, %i)", v251, v257);
                v192 = !v193;
                if ( v193 )
                  __debugbreak();
              }
              __asm { vcomiss xmm6, xmm10 }
              if ( v192 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 468, ASSERT_TYPE_SANITY, "( lerpMaxAlpha > lerpMinAlpha )", (const char *)&queryFormat, "lerpMaxAlpha > lerpMinAlpha") )
                __debugbreak();
              v194 = 16 * ((unsigned int)(_RSI + 1) + 2i64);
              v195 = __CFADD__(_R12, v194);
              v196 = __CFADD__(_R12, v194) || &_R12[v194] == NULL;
              _RDI = &_R12[v194];
              __asm { vcomiss xmm10, xmm8 }
              if ( !v196 )
                goto LABEL_111;
              __asm { vcomiss xmm8, xmm6 }
              if ( !v196 )
              {
LABEL_111:
                __asm
                {
                  vcvtss2sd xmm0, xmm6, xmm6
                  vmovsd  [rsp+318h+var_2E0], xmm0
                  vcvtss2sd xmm1, xmm10, xmm10
                  vmovsd  [rsp+318h+var_2E8], xmm1
                  vcvtss2sd xmm2, xmm8, xmm8
                  vmovsd  [rsp+318h+var_2F0], xmm2
                }
                v200 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 473, ASSERT_TYPE_SANITY, "( lerpMinAlpha ) <= ( alpha ) && ( alpha ) <= ( lerpMaxAlpha )", "alpha not in [lerpMinAlpha, lerpMaxAlpha]\n\t%g not in [%g, %g]", v253, v259, v264);
                v195 = 0;
                v196 = !v200;
                if ( v200 )
                  __debugbreak();
              }
              __asm
              {
                vsubss  xmm1, xmm8, xmm10
                vsubss  xmm0, xmm6, xmm10
                vdivss  xmm9, xmm1, xmm0
                vxorps  xmm2, xmm2, xmm2
                vcomiss xmm9, xmm2
              }
              if ( v195 )
                goto LABEL_112;
              __asm { vcomiss xmm9, xmm11 }
              if ( !v196 )
              {
LABEL_112:
                __asm
                {
                  vmovsd  [rsp+318h+var_2E0], xmm7
                  vxorpd  xmm1, xmm1, xmm1
                  vmovsd  [rsp+318h+var_2E8], xmm1
                  vcvtss2sd xmm0, xmm9, xmm9
                  vmovsd  [rsp+318h+var_2F0], xmm0
                }
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_beam.cpp", 478, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerpBlendFact ) && ( lerpBlendFact ) <= ( 1.0f )", "lerpBlendFact not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v254, v260, v265) )
                  __debugbreak();
              }
              _R12 = (char *)((char *)&v301 - (char *)_RDI);
              v208 = 0;
              v209 = 1;
              do
              {
                if ( !v209 )
                {
                  LODWORD(v257) = 4;
                  LODWORD(v251) = v208;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v251, v257) )
                    __debugbreak();
                  LODWORD(v261) = 4;
                  LODWORD(v255) = v208;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v255, v261) )
                    __debugbreak();
                  LODWORD(v262) = 4;
                  LODWORD(v256) = v208;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v256, v262) )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi]
                  vsubss  xmm1, xmm0, dword ptr [r14+rdi]
                  vmulss  xmm2, xmm1, xmm9
                  vaddss  xmm7, xmm2, dword ptr [r14+rdi]
                }
                if ( (unsigned int)v208 >= 4 )
                {
                  LODWORD(v257) = 4;
                  LODWORD(v251) = v208;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v251, v257) )
                    __debugbreak();
                }
                __asm { vmovss  dword ptr [r12+rdi], xmm7 }
                _RDI += 4;
                v209 = (unsigned int)++v208 < 4;
              }
              while ( v208 < 4 );
              __asm
              {
                vmovss  xmm5, dword ptr [rsp+318h+var_118+8]
                vmovss  xmm7, dword ptr [rsp+318h+var_118+0Ch]
              }
              v163 = v281;
              v42 = v283;
              v178 = pt0.v.m128_u64[0] + 1;
              _R12 = v288;
              __asm
              {
                vsubps  xmm1, xmm13, xmm12
                vmovaps xmm0, xmm8
                vshufps xmm0, xmm0, xmm0, 0
                vmulps  xmm0, xmm1, xmm0
                vmovss  xmm1, [rsp+318h+var_2D0]
                vaddps  xmm2, xmm0, xmm12
                vsubss  xmm0, xmm1, [rsp+318h+var_2C4]
                vmulss  xmm1, xmm0, xmm9
                vaddss  xmm4, xmm1, [rsp+318h+var_2C4]
                vmovups xmm9, [rsp+318h+var_208]
                vmovups xmm1, [rsp+318h+var_1F8]
                vmulps  xmm1, xmm1, xmmword ptr [rsp+318h+pt1.v]
                vmulps  xmm0, xmm9, xmm15
                vaddps  xmm2, xmm0, xmm2
                vxorps  xmm0, xmm4, cs:__xmm@80000000800000008000000080000000
                vaddps  xmm3, xmm1, xmm2
                vshufps xmm0, xmm0, xmm0, 0
                vmulps  xmm0, xmm0, xmm9
                vaddps  xmm2, xmm0, xmm3
                vmovss  dword ptr [r15+30h], xmm2
                vextractps dword ptr [r15+34h], xmm2, 1
                vextractps dword ptr [r15+38h], xmm2, 2
                vmovss  xmm2, dword ptr [rsp+318h+var_118]
                vmovss  dword ptr [r15+40h], xmm2
                vmovaps xmm1, xmm4
                vshufps xmm1, xmm1, xmm1, 0
                vmulps  xmm0, xmm1, xmm9
                vmovss  xmm1, [rsp+318h+var_2B8]
                vaddps  xmm4, xmm0, xmm3
                vmovss  xmm3, dword ptr [rsp+318h+var_118+4]
                vmovss  dword ptr [r15+44h], xmm3
                vmovss  dword ptr [r15+48h], xmm5
                vmovss  dword ptr [r15+4Ch], xmm7
              }
              _R15[1].extraData = v281;
              _EBX = v283 - 2;
              _R15[1].normal.packed = 1073643391;
              _R15[1].tangentBinormalSign.packed = 1065320446;
              _R15[1].texCoord.packed = 1006632960;
              _R15 += 2;
              ++v274;
              pt0.v.m128_u64[0] = v178;
              __asm
              {
                vxorps  xmm9, xmm9, xmm9
                vmovss  dword ptr [r15], xmm4
                vextractps dword ptr [r15+4], xmm4, 1
                vextractps dword ptr [r15+8], xmm4, 2
                vmovss  dword ptr [r15+10h], xmm2
                vmovss  dword ptr [r15+14h], xmm3
                vmovss  dword ptr [r15+18h], xmm5
                vmovss  dword ptr [r15+1Ch], xmm7
              }
              _R15->extraData = v281;
              _R15->normal.packed = 1073643391;
              _R15->tangentBinormalSign.packed = 1065320446;
              _R15->texCoord.packed = 15360;
            }
            while ( v274 <= v276 );
          }
          __asm
          {
            vbroadcastss xmm0, [rsp+318h+var_2D0]
            vmulps  xmm0, xmm0, xmmword ptr [rsp+318h+pt1.v]
          }
          v18 = v270;
          beamInfo = v290;
          __asm
          {
            vaddps  xmm1, xmm0, xmm13
            vmovss  dword ptr [r15+30h], xmm1
            vextractps dword ptr [r15+34h], xmm1, 1
            vextractps dword ptr [r15+38h], xmm1, 2
            vmovss  dword ptr [r15+40h], xmm2
            vmovss  dword ptr [r15+44h], xmm3
            vmovss  dword ptr [r15+48h], xmm5
            vmovss  dword ptr [r15+4Ch], xmm7
            vmovups xmm7, [rsp+318h+var_1E8]
          }
          _R15[1].extraData = v163;
          _RDI = v289;
          _R15[1].normal.packed = 1073643391;
          _R15[1].tangentBinormalSign.packed = 1065320446;
          _R15[1].texCoord.packed = 1006648320;
          v27 = 0;
        }
      }
      v34 = v286 + 1;
      v286 = v34;
    }
    while ( v34 != (_QWORD)v302 );
    __asm
    {
      vmovaps xmm14, [rsp+318h+var_B8]
      vmovaps xmm13, [rsp+318h+var_A8]
      vmovaps xmm12, [rsp+318h+var_98]
      vmovaps xmm11, [rsp+318h+var_88]
      vmovaps xmm10, [rsp+318h+var_78]
      vmovaps xmm9, [rsp+318h+var_68]
      vmovaps xmm8, [rsp+318h+var_58]
      vmovaps xmm15, [rsp+318h+var_C8]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+318h+var_38]
    vmovaps xmm7, [rsp+318h+var_48]
  }
}

/*
==============
FX_Beam_GetInfo
==============
*/
FxBeamInfo *FX_Beam_GetInfo()
{
  return &g_beamInfo;
}

/*
==============
FX_Beam_PlayerLaserExists
==============
*/
__int64 FX_Beam_PlayerLaserExists()
{
  return (unsigned int)g_beamInfo.playerLaserExists;
}

/*
==============
FX_Beam_SetPlayerLaser
==============
*/
void FX_Beam_SetPlayerLaser(void)
{
  g_beamInfo.playerLaserExists = 1;
}

/*
==============
Float4x4ForViewer
==============
*/
void Float4x4ForViewer(vector4 *mtx, const vec3_t *origin3, const tmat33_t<vec3_t> *axis3)
{
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovss  xmm0, dword ptr [rdx]
    vxorps  xmm8, xmm8, xmm8
  }
  HIDWORD(v58) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp]
    vmovss  xmm9, xmm9, xmm0
    vmovss  xmm0, dword ptr [r8]
    vinsertps xmm9, xmm9, dword ptr [rdx+4], 10h
    vinsertps xmm9, xmm9, dword ptr [rdx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm9
  }
  HIDWORD(v59) = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp]
    vmovss  xmm7, xmm7, xmm0
    vmovss  xmm0, dword ptr [r8+0Ch]
    vinsertps xmm7, xmm7, dword ptr [r8+4], 10h
    vinsertps xmm7, xmm7, dword ptr [r8+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm7
  }
  HIDWORD(v60) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r8+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [r8+14h], 20h ; ' '
    vmovss  xmm0, dword ptr [r8+18h]
    vmovups xmmword ptr [rsp], xmm3
  }
  HIDWORD(v61) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp]
    vmovss  xmm6, xmm6, xmm0
    vxorps  xmm0, xmm8, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vinsertps xmm6, xmm6, dword ptr [r8+1Ch], 10h
    vinsertps xmm6, xmm6, dword ptr [r8+20h], 20h ; ' '
    vxorps  xmm4, xmm1, xmm8
    vsubps  xmm0, xmm8, xmm3
    vshufps xmm5, xmm7, xmm0, 44h ; 'D'
    vshufps xmm3, xmm7, xmm0, 0EEh ; 'î'
    vshufps xmm2, xmm6, xmm4, 44h ; 'D'
    vshufps xmm0, xmm5, xmm2, 88h ; 'ˆ'
    vshufps xmm0, xmm0, xmm0, 0C9h ; 'É'
    vmovups xmmword ptr [rcx], xmm0
    vshufps xmm2, xmm5, xmm2, 0DDh ; 'Ý'
    vshufps xmm5, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm1, xmm6, xmm4, 0EEh ; 'î'
    vshufps xmm4, xmm3, xmm1, 88h ; 'ˆ'
    vshufps xmm3, xmm4, xmm4, 0C9h ; 'É'
    vmovups xmmword ptr [rcx+20h], xmm3
    vmovups xmmword ptr [rcx+10h], xmm5
    vmovups xmm2, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmovups xmmword ptr [rcx+30h], xmm2
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vmulps  xmm0, xmm0, xmm3
    vaddps  xmm2, xmm0, xmm2
    vshufps xmm1, xmm9, xmm9, 55h ; 'U'
    vmulps  xmm1, xmm1, xmm5
    vaddps  xmm3, xmm1, xmm2
    vshufps xmm4, xmm9, xmm9, 0
    vmulps  xmm0, xmm4, xmmword ptr [rcx]
    vaddps  xmm1, xmm0, xmm3
    vsubps  xmm2, xmm8, xmm1
    vaddps  xmm0, xmm2, xmmword ptr cs:?g_2xunit@@3Ufloat4@@B.v; float4 const g_2xunit
    vmovups xmmword ptr [rcx+30h], xmm0
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
  }
}

/*
==============
Vec4HomogenousClipBothZ
==============
*/
bool Vec4HomogenousClipBothZ(float4 *pt0, float4 *pt1)
{
  bool result; 
  int v72; 
  int v73; 

  __asm
  {
    vmovups xmm3, cs:__xmm@000000003f8000000000000000000000
    vmulps  xmm1, xmm3, xmmword ptr [rcx]
    vhaddps xmm2, xmm1, xmm1
    vmulps  xmm1, xmm3, xmmword ptr [rdx]
    vhaddps xmm4, xmm2, xmm2
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsubps  xmm2, xmm4, xmm0
    vrcpps  xmm1, xmm2
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcmpltps xmm5, xmm0, xmm7
    vmulps  xmm0, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm2
    vmovups xmm0, xmmword ptr [rdx]
    vsubps  xmm0, xmm0, xmmword ptr [rcx]
    vaddps  xmm1, xmm1, xmm1
    vsubps  xmm2, xmm1, xmm2
    vmulps  xmm3, xmm2, xmm4
    vmulps  xmm1, xmm0, xmm3
    vcmpltps xmm6, xmm4, xmm7
    vaddps  xmm4, xmm1, xmmword ptr [rcx]
    vmovups xmm1, xmmword ptr [rcx]
    vmovaps [rsp+48h+var_38], xmm8
    vmovups xmm8, cs:__xmm@3f800000bf8000000000000000000000
    vmovups xmm0, xmm5
    vblendvps xmm2, xmm4, xmm1, xmm0
    vmovups xmm1, xmmword ptr [rdx]
    vblendvps xmm3, xmm1, xmm4, xmm0
    vmovups xmm1, xmmword ptr [rcx]
    vmovups xmm0, xmm6
    vblendvps xmm1, xmm1, xmm2, xmm0
    vmovups xmmword ptr [rcx], xmm1
    vmovups xmm2, xmmword ptr [rdx]
    vblendvps xmm1, xmm3, xmm2, xmm0
    vandps  xmm2, xmm6, xmm5
    vmovss  [rsp+48h+var_48], xmm2
    vmovups xmmword ptr [rdx], xmm1
  }
  if ( v72 )
    goto LABEL_4;
  __asm
  {
    vmulps  xmm1, xmm8, xmmword ptr [rcx]
    vhaddps xmm2, xmm1, xmm1
    vmulps  xmm1, xmm8, xmmword ptr [rdx]
    vhaddps xmm3, xmm2, xmm2
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsubps  xmm2, xmm3, xmm0
    vrcpps  xmm1, xmm2
    vcmpltps xmm5, xmm0, xmm7
    vmulps  xmm0, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm2
    vmovups xmm0, xmmword ptr [rdx]
    vsubps  xmm0, xmm0, xmmword ptr [rcx]
    vaddps  xmm1, xmm1, xmm1
    vsubps  xmm2, xmm1, xmm2
    vcmpltps xmm6, xmm3, xmm7
    vmulps  xmm3, xmm2, xmm3
    vmulps  xmm1, xmm0, xmm3
    vaddps  xmm4, xmm1, xmmword ptr [rcx]
    vmovups xmm1, xmmword ptr [rcx]
    vmovups xmm0, xmm5
    vblendvps xmm2, xmm4, xmm1, xmm0
    vmovups xmm1, xmmword ptr [rdx]
    vblendvps xmm3, xmm1, xmm4, xmm0
    vmovups xmm1, xmmword ptr [rcx]
    vmovups xmm0, xmm6
    vblendvps xmm1, xmm1, xmm2, xmm0
    vmovups xmmword ptr [rcx], xmm1
    vmovups xmm2, xmmword ptr [rdx]
    vblendvps xmm1, xmm3, xmm2, xmm0
    vandps  xmm2, xmm6, xmm5
    vmovss  [rsp+48h+var_48], xmm2
    vmovups xmmword ptr [rdx], xmm1
  }
  if ( v73 )
LABEL_4:
    result = 0;
  else
    result = 1;
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm8, [rsp+48h+var_38]
  }
  return result;
}

