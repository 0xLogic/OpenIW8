/*
==============
R_DecalVolume_GetHighlightColor
==============
*/
vec4_t *R_DecalVolume_GetHighlightColor(vec4_t *result, unsigned int idx)
{
  vec4_t *v2; 

  switch ( idx & 7 )
  {
    case 0u:
      *result = colorRed;
      v2 = result;
      break;
    case 1u:
      *result = colorGreen;
      v2 = result;
      break;
    case 2u:
      *result = colorBlue;
      v2 = result;
      break;
    case 3u:
      *result = colorYellow;
      v2 = result;
      break;
    case 4u:
      *result = colorMagenta;
      v2 = result;
      break;
    case 5u:
      *result = colorCyan;
      v2 = result;
      break;
    case 6u:
      *result = colorOrange;
      v2 = result;
      break;
    case 7u:
      *result = colorTeal;
      v2 = result;
      break;
  }
  return v2;
}

/*
==============
MatrixForViewerOrthogonalTransposed
==============
*/
void MatrixForViewerOrthogonalTransposed(const vec3_t *origin, const tmat33_t<vec3_t> *axis, tmat44_t<vec4_t> *mtx)
{
  float v3; 
  float v5; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  v3 = axis->m[1].v[0];
  v5 = axis->m[0].v[1];
  v7 = axis->m[0].v[2];
  v8 = (float)((float)(v5 * axis->m[1].v[1]) + (float)(axis->m[0].v[0] * v3)) + (float)(v7 * axis->m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_shared.h", 127, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v5, v7, v3, axis->m[1].v[1], axis->m[1].v[2], v8) )
    __debugbreak();
  v10 = axis->m[0].v[1];
  v11 = axis->m[2].v[0];
  v12 = axis->m[0].v[2];
  v13 = (float)((float)(v10 * axis->m[2].v[1]) + (float)(axis->m[0].v[0] * v11)) + (float)(v12 * axis->m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_shared.h", 128, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v10, v12, v11, axis->m[2].v[1], axis->m[2].v[2], v13) )
    __debugbreak();
  mtx->m[0].v[0] = COERCE_FLOAT(LODWORD(axis->m[1].v[0]) ^ _xmm);
  mtx->m[0].v[1] = COERCE_FLOAT(LODWORD(axis->m[1].v[1]) ^ _xmm);
  LODWORD(v14) = LODWORD(axis->m[1].v[2]) ^ _xmm;
  mtx->m[0].v[2] = v14;
  mtx->m[0].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(origin->v[0] * mtx->m[0].v[0]) + (float)(origin->v[1] * mtx->m[0].v[1])) + (float)(v14 * origin->v[2])) ^ _xmm);
  mtx->m[1].v[0] = axis->m[2].v[0];
  mtx->m[1].v[1] = axis->m[2].v[1];
  v15 = axis->m[2].v[2];
  mtx->m[1].v[2] = v15;
  mtx->m[1].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(mtx->m[1].v[1] * origin->v[1]) + (float)(mtx->m[1].v[0] * origin->v[0])) + (float)(v15 * origin->v[2])) ^ _xmm);
  mtx->m[2].v[0] = axis->m[0].v[0];
  mtx->m[2].v[1] = axis->m[0].v[1];
  v16 = axis->m[0].v[2];
  mtx->m[2].v[2] = v16;
  mtx->m[2].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(origin->v[0] * mtx->m[2].v[0]) + (float)(origin->v[1] * mtx->m[2].v[1])) + (float)(v16 * origin->v[2])) ^ _xmm);
  *(_QWORD *)mtx->row3.v = 0i64;
  mtx->m[3].v[2] = 0.0;
  mtx->m[3].v[3] = 1.0;
}

