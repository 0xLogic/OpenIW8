/*
==============
CM_RayTriangleIntersect
==============
*/

bool __fastcall CM_RayTriangleIntersect(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv)
{
  return ?CM_RayTriangleIntersect@@YA_NAEBTvec3_t@@0000PEAM11@Z(orig, dir, vert1, vert2, vert3, pt, pu, pv);
}

/*
==============
CM_RayTriangleIntersect
==============
*/
char CM_RayTriangleIntersect(const vec3_t *orig, const vec3_t *dir, const vec3_t *vert1, const vec3_t *vert2, const vec3_t *vert3, float *pt, float *pu, float *pv)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  vec3_t v1; 
  vec3_t cross; 

  v9 = vert2->v[0] - vert1->v[0];
  v10 = vert2->v[1] - vert1->v[1];
  v11 = vert2->v[2] - vert1->v[2];
  v12 = vert3->v[0] - vert1->v[0];
  v13 = vert3->v[1] - vert1->v[1];
  v14 = vert3->v[2] - vert1->v[2];
  v1.v[2] = v14;
  v1.v[0] = v12;
  v1.v[1] = v13;
  Vec3Cross(dir, &v1, &cross);
  v17 = (float)((float)(cross.v[1] * v10) + (float)(cross.v[0] * v9)) + (float)(cross.v[2] * v11);
  if ( v17 < 0.001 )
    return 0;
  v18 = orig->v[0] - vert1->v[0];
  v19 = orig->v[1] - vert1->v[1];
  v20 = orig->v[2] - vert1->v[2];
  v22 = (float)((float)(cross.v[1] * v19) + (float)(cross.v[0] * v18)) + (float)(cross.v[2] * v20);
  v21 = v22;
  if ( v22 < 0.0 )
    return 0;
  if ( v22 > v17 )
    return 0;
  v23 = (float)(v19 * v11) - (float)(v20 * v10);
  v24 = (float)(v20 * v9) - (float)(v11 * v18);
  v25 = (float)(v10 * v18) - (float)(v19 * v9);
  v26 = (float)((float)(v24 * dir->v[1]) + (float)(v23 * dir->v[0])) + (float)(v25 * dir->v[2]);
  if ( v26 < 0.0 || (float)(v26 + v22) > v17 )
    return 0;
  v27 = 1.0 / v17;
  *pt = (float)((float)((float)(v13 * v24) + (float)(v12 * v23)) + (float)(v25 * v14)) * (float)(1.0 / v17);
  if ( pu )
    *pu = v27 * v21;
  if ( pv )
    *pv = v27 * v26;
  return 1;
}

