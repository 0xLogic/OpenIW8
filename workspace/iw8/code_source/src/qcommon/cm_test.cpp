/*
==============
CM_TransformPoint
==============
*/

void __fastcall CM_TransformPoint(const vec3_t *in, const vec3_t *origin, const vec3_t *angles, vec3_t *out)
{
  ?CM_TransformPoint@@YAXAEBTvec3_t@@00AEAT1@@Z(in, origin, angles, out);
}

/*
==============
CM_TransformPoint
==============
*/
void CM_TransformPoint(const vec3_t *in, const vec3_t *origin, const vec3_t *angles, vec3_t *out)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  tmat33_t<vec3_t> axis; 

  if ( angles->v[0] == 0.0 && angles->v[1] == 0.0 && angles->v[2] == 0.0 )
  {
    out->v[0] = in->v[0] - origin->v[0];
    out->v[1] = in->v[1] - origin->v[1];
    out->v[2] = in->v[2] - origin->v[2];
  }
  else
  {
    AnglesToAxis(angles, &axis);
    if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    v6 = axis.m[1].v[0];
    v7 = axis.m[1].v[1];
    out->v[0] = (float)((float)(axis.m[0].v[0] * in->v[0]) + (float)(axis.m[0].v[1] * in->v[1])) + (float)(axis.m[0].v[2] * in->v[2]);
    v8 = v6 * in->v[0];
    v9 = axis.m[2].v[0];
    v10 = (float)(v8 + (float)(v7 * in->v[1])) + (float)(axis.m[1].v[2] * in->v[2]);
    v11 = axis.m[2].v[1];
    out->v[1] = v10;
    out->v[2] = (float)((float)(v9 * in->v[0]) + (float)(v11 * in->v[1])) + (float)(axis.m[2].v[2] * in->v[2]);
  }
}

