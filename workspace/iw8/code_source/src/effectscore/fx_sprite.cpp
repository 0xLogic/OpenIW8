/*
==============
FX_SpriteAdd
==============
*/

void __fastcall FX_SpriteAdd(const FxSprite *sprite)
{
  ?FX_SpriteAdd@@YAXPEBUFxSprite@@@Z(sprite);
}

/*
==============
FX_SpriteBegin
==============
*/

void FX_SpriteBegin(void)
{
  ?FX_SpriteBegin@@YAXXZ();
}

/*
==============
FX_GetSpriteSet
==============
*/

const FxSpriteSet *__fastcall FX_GetSpriteSet()
{
  return ?FX_GetSpriteSet@@YAPEBUFxSpriteSet@@XZ();
}

/*
==============
FX_SpriteGenerateVerts
==============
*/

void __fastcall FX_SpriteGenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxGenerateVertsCmd *cmd)
{
  ?FX_SpriteGenerateVerts@@YAXPEAUGfxCodeSurfGlob@@PEBUFxGenerateVertsCmd@@@Z(codeSurfGlob, cmd);
}

/*
==============
FX_BuildQuadStampCodeMeshVerts
==============
*/
void FX_BuildQuadStampCodeMeshVerts(GfxCodeSurfGlob *codeSurfGlob, Material *material, const vec3_t *viewAxis, const vec3_t *origin, const vec3_t *left, const vec3_t *up, const vec4_t *rgbaColor)
{
  r_double_index_t *indices; 
  unsigned __int16 vertIndexOffset; 
  unsigned int packed; 
  unsigned int v31; 
  bool v32; 
  bool v33; 
  double v97; 
  double v98; 
  unsigned int vertIndexBase; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  r_double_index_t v104; 
  GfxCodeSurfArgs codeSurfArgs; 
  GfxCodeSurfBuffers outBuffers; 
  vec3_t v108; 

  _RSI = left;
  _R15 = viewAxis;
  if ( R_ReserveVertCodeSurfBuffers(&outBuffers, codeSurfGlob, 4u, 6u, 0) )
  {
    indices = outBuffers.indices;
    vertIndexOffset = outBuffers.vertIndexOffset;
    __asm
    {
      vmovaps [rsp+180h+var_40], xmm7
      vmovaps [rsp+180h+var_50], xmm8
      vmovaps [rsp+180h+var_60], xmm9
      vmovaps [rsp+180h+var_70], xmm10
      vmovaps [rsp+180h+var_80], xmm11
    }
    vertIndexBase = outBuffers.vertIndexBase;
    codeSurfArgs.vertIndexBase = outBuffers.vertIndexBase;
    __asm { vmovaps [rsp+180h+var_90], xmm12 }
    codeSurfArgs.argCount = 0;
    codeSurfArgs.sortOrder = 0;
    codeSurfArgs.flags = 0;
    __asm
    {
      vmovaps [rsp+180h+var_A0], xmm13
      vmovaps [rsp+180h+var_B0], xmm14
    }
    codeSurfArgs.material = material;
    codeSurfArgs.indices = outBuffers.indices;
    *(_QWORD *)&codeSurfArgs.indexCount = 6i64;
    codeSurfArgs.fxName = (char *)&queryFormat.fmt + 3;
    R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
    v104.value[0] = vertIndexOffset;
    v104.value[1] = vertIndexOffset + 1;
    *indices = v104;
    v104.value[0] = vertIndexOffset + 2;
    v104.value[1] = vertIndexOffset + 2;
    indices[1] = v104;
    v104.value[0] = vertIndexOffset + 3;
    v104.value[1] = vertIndexOffset;
    indices[2] = v104;
    __asm
    {
      vmovss  xmm4, dword ptr [rsi]
      vmovss  xmm2, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vaddss  xmm9, xmm4, dword ptr [r14]
      vaddss  xmm10, xmm2, dword ptr [r14+4]
      vaddss  xmm11, xmm0, dword ptr [r14+8]
      vsubss  xmm12, xmm4, dword ptr [r14]
      vsubss  xmm13, xmm2, dword ptr [r14+4]
      vsubss  xmm14, xmm0, dword ptr [r14+8]
    }
    packed = Float4PackNegUnitVec(_R15).packed;
    v31 = Float4PackNegUnitVec(left).packed;
    if ( _R15 == &v108 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    v32 = left <= &v108;
    if ( left == &v108 )
    {
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross");
      v32 = !v33;
      if ( v33 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm8, dword ptr [r15+4]
      vmovss  xmm3, dword ptr [r15+8]
      vmulss  xmm1, xmm8, dword ptr [rsi+8]
      vmulss  xmm0, xmm3, dword ptr [rsi+4]
      vmovss  xmm2, dword ptr [r15]
      vsubss  xmm7, xmm1, xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vmulss  xmm1, xmm3, dword ptr [rsi]
      vmulss  xmm2, xmm2, dword ptr [rsi+4]
      vsubss  xmm5, xmm1, xmm0
      vmulss  xmm0, xmm8, dword ptr [rsi]
      vmulss  xmm1, xmm7, dword ptr [r14]
      vmovaps xmm8, [rsp+180h+var_50]
      vmovaps xmm7, [rsp+180h+var_40]
      vsubss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm5, dword ptr [r14+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [r14+8]
      vaddss  xmm4, xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm4, xmm0
    }
    if ( v32 )
    {
      __asm
      {
        vmovsd  [rsp+180h+var_140], xmm0
        vcvtss2sd xmm1, xmm4, xmm4
        vmovsd  [rsp+180h+var_148], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 51, ASSERT_TYPE_ASSERT, "( Vec3Dot( up, testBinormal ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Vec3Dot( up, testBinormal )", "0.0f", v97, v98) )
        __debugbreak();
    }
    _RDX = R_CodeSurfVertIter_Begin(codeSurfGlob, vertIndexBase + vertIndexOffset);
    _R8 = origin;
    __asm
    {
      vaddss  xmm0, xmm9, dword ptr [r8]
      vmovss  dword ptr [rax], xmm0
      vaddss  xmm0, xmm10, dword ptr [r8+4]
      vmovss  dword ptr [rax+4], xmm0
      vaddss  xmm0, xmm11, dword ptr [r8+8]
      vmovss  dword ptr [rax+8], xmm0
    }
    _RDX->extraData = 0;
    _RDX->normal.packed = packed;
    _RDX->color = *rgbaColor;
    _RDX->tangentBinormalSign.packed = v31;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm0, xmm0, [rbp+80h+s0], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t0], 80h+var_70
      vcvtps2ph xmm0, xmm0, 0
      vmovss  [rsp+180h+var_130], xmm0
    }
    _RDX->texCoord.packed = v100;
    __asm
    {
      vmovss  xmm0, dword ptr [r8]
      vsubss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rdx+30h], xmm1
      vmovss  xmm2, dword ptr [r8+4]
      vsubss  xmm0, xmm2, xmm13
      vmovss  dword ptr [rdx+34h], xmm0
      vmovss  xmm1, dword ptr [r8+8]
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm0, xmm0, [rbp+80h+s1], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t0], 80h+var_70
      vcvtps2ph xmm0, xmm0, 0
      vmovss  [rsp+180h+var_130], xmm0
      vsubss  xmm2, xmm1, xmm14
      vmovss  dword ptr [rdx+38h], xmm2
    }
    _RDX[1].extraData = 0;
    _RDX[1].normal.packed = packed;
    _RDX[1].color = *rgbaColor;
    _RDX[1].texCoord.packed = v101;
    _RDX[1].tangentBinormalSign.packed = v31;
    __asm
    {
      vmovss  xmm0, dword ptr [r8]
      vsubss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rdx+60h], xmm1
      vmovss  xmm2, dword ptr [r8+4]
      vsubss  xmm0, xmm2, xmm10
      vmovss  dword ptr [rdx+64h], xmm0
      vmovss  xmm1, dword ptr [r8+8]
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm0, xmm0, [rbp+80h+s1], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t1], 80h+var_70
      vsubss  xmm2, xmm1, xmm11
      vmovss  dword ptr [rdx+68h], xmm2
    }
    _RDX[2].extraData = 0;
    _RDX[2].normal.packed = packed;
    _RDX[2].color = *rgbaColor;
    __asm
    {
      vmovaps xmm11, [rsp+180h+var_80]
      vmovaps xmm10, [rsp+180h+var_70]
      vmovaps xmm9, [rsp+180h+var_60]
    }
    _RDX[2].tangentBinormalSign.packed = v31;
    __asm
    {
      vcvtps2ph xmm0, xmm0, 0
      vmovss  [rsp+180h+var_130], xmm0
    }
    _RDX[2].texCoord.packed = v102;
    __asm
    {
      vaddss  xmm0, xmm12, dword ptr [r8]
      vmovaps xmm12, [rsp+180h+var_90]
      vmovss  dword ptr [rdx+90h], xmm0
      vaddss  xmm1, xmm13, dword ptr [r8+4]
      vmovaps xmm13, [rsp+180h+var_A0]
      vmovss  dword ptr [rdx+94h], xmm1
      vaddss  xmm0, xmm14, dword ptr [r8+8]
      vmovaps xmm14, [rsp+180h+var_B0]
      vmovss  dword ptr [rdx+98h], xmm0
    }
    _RDX[3].normal.packed = packed;
    _RDX[3].extraData = 0;
    _RDX[3].color = *rgbaColor;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm0, xmm0, [rbp+80h+s0], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t1], 80h+var_70
      vcvtps2ph xmm0, xmm0, 0
      vmovss  [rsp+180h+var_130], xmm0
    }
    _RDX[3].texCoord.packed = v103;
    _RDX[3].tangentBinormalSign.packed = v31;
  }
}

/*
==============
FX_BuildSpriteCodeMeshVerts
==============
*/

void __fastcall FX_BuildSpriteCodeMeshVerts(GfxCodeSurfGlob *codeSurfGlob, Material *material, const vec3_t *pos, double worldRadius, const vec4_t *rgbaColor, int spriteFlags)
{
  vec3_t origin; 
  vec3_t up; 
  vec3_t left; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+4]
    vmovss  dword ptr [rsp+0A8h+origin], xmm0
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
    vmovss  dword ptr [rsp+0A8h+origin+4], xmm1
  }
  if ( (spriteFlags & 1) != 0 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [r8+30h]
    vmulss  xmm1, xmm3, dword ptr [r8+34h]
    vmovss  dword ptr [rsp+0A8h+var_28], xmm0
    vmulss  xmm0, xmm3, dword ptr [r8+38h]
    vmovss  dword ptr [rsp+0A8h+var_28+8], xmm0
    vmulss  xmm0, xmm3, dword ptr [r8+3Ch]
    vmovss  dword ptr [rsp+0A8h+var_28+4], xmm1
    vmulss  xmm1, xmm3, dword ptr [r8+40h]
    vmovss  dword ptr [rsp+0A8h+var_38], xmm0
    vmulss  xmm0, xmm3, dword ptr [r8+44h]
    vmovss  dword ptr [rsp+0A8h+var_38+4], xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+0A8h+var_58], xmm1
    vmovss  [rsp+0A8h+var_60], xmm1
    vmovss  dword ptr [rsp+0A8h+var_38+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0A8h+var_68], xmm0
    vmovss  [rsp+0A8h+var_70], xmm0
  }
  FX_BuildQuadStampCodeMeshVerts(codeSurfGlob, material, g_activeRefDef->view.axis.m, &origin, &left, &up, rgbaColor);
}

/*
==============
FX_GenerateSpriteCodeMeshVerts
==============
*/
void FX_GenerateSpriteCodeMeshVerts(GfxCodeSurfGlob *codeSurfGlob, const FxSprite *sprite, const FxGenerateVertsCmd *cmd)
{
  int flags; 
  Material *material; 
  bool v15; 
  bool v16; 
  bool v38; 
  bool v39; 
  bool v57; 
  double spriteFlags; 
  double spriteFlagsa; 
  double spriteFlagsb; 
  double spriteFlagsc; 
  double spriteFlagsd; 

  flags = sprite->flags;
  material = sprite->material;
  _RBX = sprite;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  if ( (flags & 2) != 0 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rdx+24h]
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm6, xmm7
    }
    if ( (flags & 2) == 0 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  qword ptr [rsp+98h+spriteFlags], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 125, ASSERT_TYPE_ASSERT, "( ( screenHeight > 0 ) )", "( screenHeight ) = %g", spriteFlags) )
        __debugbreak();
    }
    v15 = cmd == NULL;
    if ( !cmd )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 126, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd");
      v15 = !v16;
      if ( v16 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vsubss  xmm1, xmm0, dword ptr [rdi+34h]
      vmulss  xmm3, xmm1, dword ptr [rdi+0A4h]
      vmovss  xmm2, dword ptr [rbx+18h]
      vsubss  xmm0, xmm2, dword ptr [rdi+30h]
      vmulss  xmm1, xmm0, dword ptr [rdi+0A0h]
      vmovss  xmm2, dword ptr [rbx+20h]
      vsubss  xmm0, xmm2, dword ptr [rdi+38h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, dword ptr [rdi+0A8h]
      vaddss  xmm3, xmm4, xmm1
      vcvtss2sd xmm2, xmm3, xmm3
      vcomisd xmm2, cs:__real@3eb0c6f7a0b5ed8d
      vmulss  xmm0, xmm3, xmm6
      vmulss  xmm1, xmm0, cs:__real@40000000
      vmulss  xmm6, xmm1, dword ptr [rax+14h]
      vcomiss xmm6, xmm7
    }
    if ( v15 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  qword ptr [rsp+98h+spriteFlags], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 138, ASSERT_TYPE_SANITY, "( ( *worldHeight > 0.0f ) )", "( *worldHeight ) = %g", spriteFlagsa) )
        __debugbreak();
    }
    __asm { vmovaps xmm3, xmm6; worldRadius }
    FX_BuildSpriteCodeMeshVerts(codeSurfGlob, material, &_RBX->pos, *(double *)&_XMM3, &_RBX->rgbaColor, flags);
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rdx+24h]
      vmovaps [rsp+98h+var_58], xmm8
      vmovaps [rsp+98h+var_68], xmm9
      vmovss  xmm9, dword ptr [rdx+28h]
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm9, xmm8
    }
    if ( (flags & 2) != 0 )
    {
      __asm { vcomiss xmm7, xmm8 }
      if ( (flags & 2) == 0 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm7, xmm7
          vmovsd  qword ptr [rsp+98h+spriteFlags], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 150, ASSERT_TYPE_ASSERT, "( ( worldHeight > 0 ) )", "( worldHeight ) = %g", spriteFlagsb) )
          __debugbreak();
      }
      v38 = cmd == NULL;
      if ( !cmd )
      {
        v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 151, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd");
        v38 = !v39;
        if ( v39 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vsubss  xmm1, xmm0, dword ptr [rdi+34h]
        vmulss  xmm3, xmm1, dword ptr [rdi+0A4h]
        vmovss  xmm2, dword ptr [rbx+18h]
        vsubss  xmm0, xmm2, dword ptr [rdi+30h]
        vmulss  xmm1, xmm0, dword ptr [rdi+0A0h]
        vmovss  xmm2, dword ptr [rbx+20h]
        vsubss  xmm0, xmm2, dword ptr [rdi+38h]
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm1, xmm0, dword ptr [rdi+0A8h]
        vaddss  xmm3, xmm4, xmm1
        vcvtss2sd xmm2, xmm3, xmm3
        vcomisd xmm2, cs:__real@3eb0c6f7a0b5ed8d
        vmovss  xmm0, cs:__real@3f000000
        vdivss  xmm1, xmm0, xmm3
        vdivss  xmm2, xmm7, dword ptr [rax+14h]
        vmulss  xmm6, xmm2, xmm1
        vcomiss xmm6, xmm8
      }
      if ( v38 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  qword ptr [rsp+98h+spriteFlags], xmm0
        }
        v57 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 163, ASSERT_TYPE_SANITY, "( ( *screenHeight > 0.0f ) )", "( *screenHeight ) = %g", spriteFlagsc);
        if ( v57 )
          __debugbreak();
        __asm { vcomiss xmm6, xmm8 }
        if ( !v57 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  qword ptr [rsp+98h+spriteFlags], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 196, ASSERT_TYPE_ASSERT, "( ( screenRadius > 0 ) )", "( screenRadius ) = %g", spriteFlagsd) )
            __debugbreak();
        }
      }
      __asm { vcomiss xmm6, xmm9 }
    }
    __asm { vmovaps xmm3, xmm7; worldRadius }
    FX_BuildSpriteCodeMeshVerts(codeSurfGlob, material, &_RBX->pos, *(double *)&_XMM3, &_RBX->rgbaColor, flags);
    __asm
    {
      vmovaps xmm8, [rsp+98h+var_58]
      vmovaps xmm9, [rsp+98h+var_68]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
}

/*
==============
FX_GetSpriteSet
==============
*/
FxSpriteSet *FX_GetSpriteSet()
{
  return &g_fxSpriteSet;
}

/*
==============
FX_SpriteAdd
==============
*/
void FX_SpriteAdd(const FxSprite *sprite)
{
  if ( g_fxSpriteSet.spriteCount != 232 )
  {
    __asm { vmovups ymm0, ymmword ptr [rcx] }
    _RDX = 6i64 * g_fxSpriteSet.spriteCount;
    _RAX = g_fxSpriteSet.sprites;
    __asm
    {
      vmovups ymmword ptr [rax+rdx*8], ymm0
      vmovups xmm1, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rax+rdx*8+20h], xmm1
    }
    ++g_fxSpriteSet.spriteCount;
  }
}

/*
==============
FX_SpriteBegin
==============
*/
void FX_SpriteBegin(void)
{
  g_fxSpriteSet.spriteCount = 0;
}

/*
==============
FX_SpriteGenerateVerts
==============
*/
void FX_SpriteGenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxGenerateVertsCmd *cmd)
{
  const FxSpriteSet *spriteSet; 
  int i; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 222, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  spriteSet = cmd->spriteSet;
  if ( !spriteSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 226, ASSERT_TYPE_ASSERT, "(spriteSet)", (const char *)&queryFormat, "spriteSet") )
    __debugbreak();
  _RAX = g_activeRefDef;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  xmm5, dword ptr [rax+24h]
    vmovss  xmm3, dword ptr [rax+2Ch]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovss  xmm4, dword ptr [rax+28h]
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+58h+var_18], xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+58h+var_20], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+58h+var_28], xmm4
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+58h+var_30], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 227, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( g_activeRefDef->view.axis[0] ) )", "(%g, %g, %g) len %g", v57, v60, v63, v66) )
    __debugbreak();
  _RAX = g_activeRefDef;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+34h]
    vmovss  xmm5, dword ptr [rax+30h]
    vmovss  xmm3, dword ptr [rax+38h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovss  xmm4, dword ptr [rax+34h]
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+58h+var_18], xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+58h+var_20], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+58h+var_28], xmm4
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+58h+var_30], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 228, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( g_activeRefDef->view.axis[1] ) )", "(%g, %g, %g) len %g", v58, v61, v64, v67) )
    __debugbreak();
  _RAX = g_activeRefDef;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+40h]
    vmovss  xmm5, dword ptr [rax+3Ch]
    vmovss  xmm3, dword ptr [rax+44h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
    vmovss  xmm4, dword ptr [rax+40h]
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+58h+var_18], xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+58h+var_20], xmm3
    vcvtss2sd xmm4, xmm4, xmm4
    vmovsd  [rsp+58h+var_28], xmm4
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+58h+var_30], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 229, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( g_activeRefDef->view.axis[2] ) )", "(%g, %g, %g) len %g", v59, v62, v65, v68) )
    __debugbreak();
  for ( i = 0; i < spriteSet->spriteCount; ++i )
    FX_GenerateSpriteCodeMeshVerts(codeSurfGlob, &spriteSet->sprites[i], cmd);
}

