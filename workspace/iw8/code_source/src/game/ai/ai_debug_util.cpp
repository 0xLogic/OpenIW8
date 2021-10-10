/*
==============
DebugDrawEntVec
==============
*/

void __fastcall DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, gentity_s *ent, float scale, float zOffset)
{
  ?DebugDrawEntVec@@YAXAEBTvec3_t@@AEBTvec4_t@@PEAUgentity_s@@MM@Z(vec, color, ent, scale, zOffset);
}

/*
==============
DebugDrawEntVec
==============
*/

void __fastcall DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, int entnum, float scale, float zOffset)
{
  ?DebugDrawEntVec@@YAXAEBTvec3_t@@AEBTvec4_t@@HMM@Z(vec, color, entnum, scale, zOffset);
}

/*
==============
DebugDrawEntVec
==============
*/
void DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, int entnum, float scale, float zOffset)
{
  __int64 v5; 
  __m128 v9; 
  float v10; 
  vec3_t end; 
  vec3_t start; 

  v5 = entnum;
  if ( G_IsEntityInUse(entnum) )
  {
    *(_QWORD *)end.v = *(_QWORD *)vec->v;
    start.v[2] = zOffset;
    v9 = (__m128)*(unsigned __int64 *)g_entities[v5].r.currentOrigin.v;
    v10 = vec->v[2];
    end.v[0] = (float)(end.v[0] * scale) + v9.m128_f32[0];
    end.v[2] = zOffset + v10;
    end.v[1] = (float)(scale * end.v[1]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
    *(double *)start.v = *(double *)v9.m128_u64;
    G_DebugLineWithDuration(&start, &end, color, 1, 1);
  }
}

/*
==============
DebugDrawEntVec
==============
*/
void DebugDrawEntVec(const vec3_t *vec, const vec4_t *color, gentity_s *ent, float scale, float zOffset)
{
  __m128 v5; 
  float v6; 
  vec3_t end; 
  vec3_t start; 

  v5 = (__m128)*(unsigned __int64 *)ent->r.currentOrigin.v;
  v6 = vec->v[2];
  *(_QWORD *)end.v = *(_QWORD *)vec->v;
  end.v[0] = (float)(end.v[0] * scale) + v5.m128_f32[0];
  end.v[2] = zOffset + v6;
  start.v[2] = zOffset;
  end.v[1] = (float)(scale * end.v[1]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  *(double *)start.v = *(double *)v5.m128_u64;
  G_DebugLineWithDuration(&start, &end, color, 1, 1);
}

