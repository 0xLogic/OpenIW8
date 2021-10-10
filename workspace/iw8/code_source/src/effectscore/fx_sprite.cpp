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
  __int128 v7; 
  __int128 v8; 
  r_double_index_t *indices; 
  unsigned __int16 vertIndexOffset; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  unsigned int packed; 
  unsigned int v23; 
  float v24; 
  GfxSpriteVertex *v25; 
  unsigned int vertIndexBase; 
  r_double_index_t v43; 
  GfxCodeSurfArgs codeSurfArgs; 
  GfxCodeSurfBuffers outBuffers; 
  char v47[16]; 
  __int128 v48; 
  __int128 v49; 

  if ( R_ReserveVertCodeSurfBuffers(&outBuffers, codeSurfGlob, 4u, 6u, 0) )
  {
    indices = outBuffers.indices;
    vertIndexOffset = outBuffers.vertIndexOffset;
    v49 = v7;
    v48 = v8;
    vertIndexBase = outBuffers.vertIndexBase;
    codeSurfArgs.vertIndexBase = outBuffers.vertIndexBase;
    codeSurfArgs.argCount = 0;
    codeSurfArgs.sortOrder = 0;
    codeSurfArgs.flags = 0;
    codeSurfArgs.material = material;
    codeSurfArgs.indices = outBuffers.indices;
    *(_QWORD *)&codeSurfArgs.indexCount = 6i64;
    codeSurfArgs.fxName = (char *)&queryFormat.fmt + 3;
    R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
    v43.value[0] = vertIndexOffset;
    v43.value[1] = vertIndexOffset + 1;
    *indices = v43;
    v43.value[0] = vertIndexOffset + 2;
    v43.value[1] = vertIndexOffset + 2;
    indices[1] = v43;
    v43.value[0] = vertIndexOffset + 3;
    v43.value[1] = vertIndexOffset;
    indices[2] = v43;
    v14 = left->v[1];
    v15 = left->v[2];
    v16 = left->v[0] + up->v[0];
    v17 = v14 + up->v[1];
    v18 = v15 + up->v[2];
    v19 = left->v[0] - up->v[0];
    v20 = v14 - up->v[1];
    v21 = v15 - up->v[2];
    packed = Float4PackNegUnitVec(viewAxis).packed;
    v23 = Float4PackNegUnitVec(left).packed;
    if ( viewAxis == (const vec3_t *)v47 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( left == (const vec3_t *)v47 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    v24 = (float)((float)((float)((float)(viewAxis->v[1] * left->v[2]) - (float)(viewAxis->v[2] * left->v[1])) * up->v[0]) + (float)((float)((float)(viewAxis->v[2] * left->v[0]) - (float)(viewAxis->v[0] * left->v[2])) * up->v[1])) + (float)((float)((float)(viewAxis->v[0] * left->v[1]) - (float)(viewAxis->v[1] * left->v[0])) * up->v[2]);
    if ( v24 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 51, ASSERT_TYPE_ASSERT, "( Vec3Dot( up, testBinormal ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Vec3Dot( up, testBinormal )", "0.0f", v24, 0.0) )
      __debugbreak();
    v25 = R_CodeSurfVertIter_Begin(codeSurfGlob, vertIndexBase + vertIndexOffset);
    v25->xyz.v[0] = v16 + origin->v[0];
    v25->xyz.v[1] = v17 + origin->v[1];
    v25->xyz.v[2] = v18 + origin->v[2];
    v25->extraData = 0;
    v25->normal.packed = packed;
    v25->color = *rgbaColor;
    v25->tangentBinormalSign.packed = v23;
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, [rbp+80h+s0], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t0], 80h+var_70
      vcvtps2ph xmm0, xmm0, 0
    }
    v25->texCoord.packed = _XMM0;
    v25[1].xyz.v[0] = origin->v[0] - v19;
    v25[1].xyz.v[1] = origin->v[1] - v20;
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, [rbp+80h+s1], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t0], 80h+var_70
      vcvtps2ph xmm0, xmm0, 0
    }
    v25[1].xyz.v[2] = origin->v[2] - v21;
    v25[1].extraData = 0;
    v25[1].normal.packed = packed;
    v25[1].color = *rgbaColor;
    v25[1].texCoord.packed = _XMM0;
    v25[1].tangentBinormalSign.packed = v23;
    v25[2].xyz.v[0] = origin->v[0] - v16;
    v25[2].xyz.v[1] = origin->v[1] - v17;
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, [rbp+80h+s1], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t1], 80h+var_70
    }
    v25[2].xyz.v[2] = origin->v[2] - v18;
    v25[2].extraData = 0;
    v25[2].normal.packed = packed;
    v25[2].color = *rgbaColor;
    v25[2].tangentBinormalSign.packed = v23;
    __asm { vcvtps2ph xmm0, xmm0, 0 }
    v25[2].texCoord.packed = _XMM0;
    v25[3].xyz.v[0] = v19 + origin->v[0];
    v25[3].xyz.v[1] = v20 + origin->v[1];
    v25[3].xyz.v[2] = v21 + origin->v[2];
    v25[3].normal.packed = packed;
    v25[3].extraData = 0;
    v25[3].color = *rgbaColor;
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, [rbp+80h+s0], 80h+var_80
      vinsertps xmm0, xmm0, [rbp+80h+t1], 80h+var_70
      vcvtps2ph xmm0, xmm0, 0
    }
    v25[3].texCoord.packed = _XMM0;
    v25[3].tangentBinormalSign.packed = v23;
  }
}

/*
==============
FX_BuildSpriteCodeMeshVerts
==============
*/
void FX_BuildSpriteCodeMeshVerts(GfxCodeSurfGlob *codeSurfGlob, Material *material, const vec3_t *pos, float worldRadius, const vec4_t *rgbaColor, int spriteFlags)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t origin; 
  vec3_t up; 
  vec3_t left; 

  v6 = pos->v[1];
  origin.v[0] = pos->v[0];
  v7 = pos->v[2];
  origin.v[2] = v7;
  origin.v[1] = v6;
  if ( (spriteFlags & 1) != 0 )
    origin.v[2] = v7 + worldRadius;
  v8 = worldRadius * g_activeRefDef->view.axis.m[1].v[1];
  left.v[0] = worldRadius * g_activeRefDef->view.axis.m[1].v[0];
  left.v[2] = worldRadius * g_activeRefDef->view.axis.m[1].v[2];
  v9 = worldRadius * g_activeRefDef->view.axis.m[2].v[0];
  left.v[1] = v8;
  v10 = worldRadius * g_activeRefDef->view.axis.m[2].v[1];
  up.v[0] = v9;
  v11 = worldRadius * g_activeRefDef->view.axis.m[2].v[2];
  up.v[1] = v10;
  up.v[2] = v11;
  FX_BuildQuadStampCodeMeshVerts(codeSurfGlob, material, g_activeRefDef->view.axis.m, &origin, &left, &up, rgbaColor);
}

/*
==============
FX_GenerateSpriteCodeMeshVerts
==============
*/
void FX_GenerateSpriteCodeMeshVerts(GfxCodeSurfGlob *codeSurfGlob, const FxSprite *sprite, const FxGenerateVertsCmd *cmd)
{
  int spriteFlags; 
  Material *material; 
  float radius; 
  float v9; 
  float v10; 
  float v11; 
  float minScreenRadius; 
  float v13; 
  float v14; 

  spriteFlags = sprite->flags;
  material = sprite->material;
  if ( (spriteFlags & 2) != 0 )
  {
    radius = sprite->radius;
    if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 125, ASSERT_TYPE_ASSERT, "( ( screenHeight > 0 ) )", "( screenHeight ) = %g", radius) )
      __debugbreak();
    if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 126, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
      __debugbreak();
    v9 = (float)((float)((float)(sprite->pos.v[1] - cmd->camera.origin.v[1]) * cmd->camera.axis.m[0].v[1]) + (float)((float)(sprite->pos.v[0] - cmd->camera.origin.v[0]) * cmd->camera.axis.m[0].v[0])) + (float)((float)(sprite->pos.v[2] - cmd->camera.origin.v[2]) * cmd->camera.axis.m[0].v[2]);
    if ( v9 >= 0.000001 )
    {
      v10 = (float)((float)(v9 * radius) * 2.0) * g_activeRefDef->view.fov.tanHalfFovY;
      if ( v10 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 138, ASSERT_TYPE_SANITY, "( ( *worldHeight > 0.0f ) )", "( *worldHeight ) = %g", v10) )
        __debugbreak();
      FX_BuildSpriteCodeMeshVerts(codeSurfGlob, material, &sprite->pos, v10, &sprite->rgbaColor, spriteFlags);
    }
    return;
  }
  v11 = sprite->radius;
  minScreenRadius = sprite->minScreenRadius;
  if ( minScreenRadius <= 0.0 )
  {
LABEL_29:
    FX_BuildSpriteCodeMeshVerts(codeSurfGlob, material, &sprite->pos, v11, &sprite->rgbaColor, spriteFlags);
    return;
  }
  if ( v11 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 150, ASSERT_TYPE_ASSERT, "( ( worldHeight > 0 ) )", "( worldHeight ) = %g", v11) )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 151, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v13 = (float)((float)((float)(sprite->pos.v[1] - cmd->camera.origin.v[1]) * cmd->camera.axis.m[0].v[1]) + (float)((float)(sprite->pos.v[0] - cmd->camera.origin.v[0]) * cmd->camera.axis.m[0].v[0])) + (float)((float)(sprite->pos.v[2] - cmd->camera.origin.v[2]) * cmd->camera.axis.m[0].v[2]);
  if ( v13 >= 0.000001 )
  {
    v14 = (float)(v11 / g_activeRefDef->view.fov.tanHalfFovY) * (float)(0.5 / v13);
    if ( v14 <= 0.0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 163, ASSERT_TYPE_SANITY, "( ( *screenHeight > 0.0f ) )", "( *screenHeight ) = %g", v14) )
        __debugbreak();
      if ( v14 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 196, ASSERT_TYPE_ASSERT, "( ( screenRadius > 0 ) )", "( screenRadius ) = %g", v14) )
        __debugbreak();
    }
    if ( v14 < minScreenRadius )
      v11 = (float)(minScreenRadius / v14) * v11;
    goto LABEL_29;
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
    g_fxSpriteSet.sprites[g_fxSpriteSet.spriteCount++] = *sprite;
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
  refdef_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  int i; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 222, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  spriteSet = cmd->spriteSet;
  if ( !spriteSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 226, ASSERT_TYPE_ASSERT, "(spriteSet)", (const char *)&queryFormat, "spriteSet") )
    __debugbreak();
  v5 = g_activeRefDef;
  v6 = g_activeRefDef->view.axis.m[0].v[0];
  v7 = g_activeRefDef->view.axis.m[0].v[2];
  v8 = (float)((float)(v6 * v6) + (float)(g_activeRefDef->view.axis.m[0].v[1] * g_activeRefDef->view.axis.m[0].v[1])) + (float)(v7 * v7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 227, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( g_activeRefDef->view.axis[0] ) )", "(%g, %g, %g) len %g", v6, g_activeRefDef->view.axis.m[0].v[1], v7, fsqrt(v8)) )
      __debugbreak();
    v5 = g_activeRefDef;
  }
  v9 = v5->view.axis.m[1].v[0];
  v10 = v5->view.axis.m[1].v[2];
  v11 = (float)((float)(v9 * v9) + (float)(v5->view.axis.m[1].v[1] * v5->view.axis.m[1].v[1])) + (float)(v10 * v10);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.0020000001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 228, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( g_activeRefDef->view.axis[1] ) )", "(%g, %g, %g) len %g", v9, v5->view.axis.m[1].v[1], v10, fsqrt(v11)) )
      __debugbreak();
    v5 = g_activeRefDef;
  }
  v12 = v5->view.axis.m[2].v[0];
  v13 = v5->view.axis.m[2].v[2];
  v14 = (float)((float)(v12 * v12) + (float)(v5->view.axis.m[2].v[1] * v5->view.axis.m[2].v[1])) + (float)(v13 * v13);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_sprite.cpp", 229, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( g_activeRefDef->view.axis[2] ) )", "(%g, %g, %g) len %g", v12, v5->view.axis.m[2].v[1], v13, fsqrt(v14)) )
    __debugbreak();
  for ( i = 0; i < spriteSet->spriteCount; ++i )
    FX_GenerateSpriteCodeMeshVerts(codeSurfGlob, &spriteSet->sprites[i], cmd);
}

