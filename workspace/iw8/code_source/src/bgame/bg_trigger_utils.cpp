/*
==============
BG_TriggerRadiusRotate_Contacts_Capsule
==============
*/

bool __fastcall BG_TriggerRadiusRotate_Contacts_Capsule(const vec3_t *triggerOrigin, const vec3_t *triggerAngles, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  return ?BG_TriggerRadiusRotate_Contacts_Capsule@@YA_NAEBTvec3_t@@0PEBUBounds@@1@Z(triggerOrigin, triggerAngles, triggerBounds, capsuleBounds);
}

/*
==============
BG_TriggerRadius_Contacts_Capsule
==============
*/

bool __fastcall BG_TriggerRadius_Contacts_Capsule(const vec3_t *triggerOrigin, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  return ?BG_TriggerRadius_Contacts_Capsule@@YA_NAEBTvec3_t@@PEBUBounds@@1@Z(triggerOrigin, triggerBounds, capsuleBounds);
}

/*
==============
BG_TriggerDisk_Contacts_Capsule
==============
*/

bool __fastcall BG_TriggerDisk_Contacts_Capsule(const vec3_t *triggerOrigin, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  return ?BG_TriggerDisk_Contacts_Capsule@@YA_NAEBTvec3_t@@PEBUBounds@@1@Z(triggerOrigin, triggerBounds, capsuleBounds);
}

/*
==============
BG_TriggerDisk_Contacts_Capsule
==============
*/
bool BG_TriggerDisk_Contacts_Capsule(const vec3_t *triggerOrigin, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  float v6; 
  float v7; 

  if ( !triggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 120, ASSERT_TYPE_ASSERT, "(triggerBounds)", (const char *)&queryFormat, "triggerBounds") )
    __debugbreak();
  if ( !capsuleBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 121, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
    __debugbreak();
  v6 = (float)(triggerBounds->halfSize.v[0] + capsuleBounds->halfSize.v[0]) - 64.0;
  v7 = capsuleBounds->midPoint.v[1] - triggerOrigin->v[1];
  return (float)((float)(v7 * v7) + (float)((float)(capsuleBounds->midPoint.v[0] - triggerOrigin->v[0]) * (float)(capsuleBounds->midPoint.v[0] - triggerOrigin->v[0]))) >= (float)(v6 * v6);
}

/*
==============
BG_TriggerRadiusRotate_Contacts_Capsule
==============
*/
bool BG_TriggerRadiusRotate_Contacts_Capsule(const vec3_t *triggerOrigin, const vec3_t *triggerAngles, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  float v8; 
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
  float v24; 
  float v25; 
  float v26; 
  vec3_t vec; 
  vec3_t v28; 
  vec3_t v29; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  if ( !triggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 24, ASSERT_TYPE_ASSERT, "(triggerBounds)", (const char *)&queryFormat, "triggerBounds") )
    __debugbreak();
  if ( !capsuleBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 25, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
    __debugbreak();
  AnglesToAxis(triggerAngles, &axis);
  MatrixInverse(&axis, &out);
  v8 = capsuleBounds->halfSize.v[0];
  v9 = capsuleBounds->midPoint.v[0];
  v10 = capsuleBounds->midPoint.v[1];
  v11 = v10 - triggerOrigin->v[1];
  v12 = capsuleBounds->midPoint.v[2];
  v13 = capsuleBounds->halfSize.v[2] - v8;
  vec.v[0] = capsuleBounds->midPoint.v[0] - triggerOrigin->v[0];
  vec.v[1] = v11;
  vec.v[2] = (float)(v12 - v13) - triggerOrigin->v[2];
  AxisTransformVec3(&out, &vec, &v29);
  v14 = v10 - triggerOrigin->v[1];
  vec.v[0] = v9 - triggerOrigin->v[0];
  vec.v[2] = (float)(v12 + v13) - triggerOrigin->v[2];
  vec.v[1] = v14;
  AxisTransformVec3(&out, &vec, &v28);
  v15 = v8 + triggerBounds->halfSize.v[0];
  LODWORD(v16) = LODWORD(v8) ^ _xmm;
  v17 = (float)(triggerBounds->halfSize.v[2] * 2.0) + v8;
  v18 = (float)((float)(v28.v[1] - v29.v[1]) * (float)(v28.v[1] - v29.v[1])) + (float)((float)(v28.v[0] - v29.v[0]) * (float)(v28.v[0] - v29.v[0]));
  v19 = (float)((float)(v28.v[0] - v29.v[0]) * v29.v[0]) + (float)(v29.v[1] * (float)(v28.v[1] - v29.v[1]));
  v20 = v19 * 2.0;
  v21 = (float)((float)(v29.v[0] * v29.v[0]) + (float)(v29.v[1] * v29.v[1])) - (float)(v15 * v15);
  v22 = (float)((float)(v19 * v19) * 4.0) - (float)((float)(v18 * 4.0) * v21);
  if ( v18 == 0.0 )
  {
    if ( v21 >= 0.0 )
      return 0;
  }
  else
  {
    if ( v22 <= 0.0 )
      return 0;
    v24 = fsqrt(v22);
    v25 = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) - v24) * (float)(0.5 / v18);
    v26 = (float)(v24 - v20) * (float)(0.5 / v18);
    if ( v25 < 0.0 && v26 < 0.0 )
      return 0;
    if ( v25 > 1.0 && v26 > 1.0 )
      return 0;
  }
  return (v29.v[2] > v16 || v28.v[2] > v16) && (v29.v[2] < v17 || v28.v[2] < v17);
}

/*
==============
BG_TriggerRadius_Contacts_Capsule
==============
*/
bool BG_TriggerRadius_Contacts_Capsule(const vec3_t *triggerOrigin, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  float v7; 
  float v8; 

  if ( !triggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 7, ASSERT_TYPE_ASSERT, "(triggerBounds)", (const char *)&queryFormat, "triggerBounds") )
    __debugbreak();
  if ( !capsuleBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 8, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(triggerOrigin->v[2] + triggerBounds->midPoint.v[2]) - capsuleBounds->midPoint.v[2]) & _xmm) >= (float)(triggerBounds->halfSize.v[2] + capsuleBounds->halfSize.v[2]) )
    return 0;
  v7 = triggerBounds->halfSize.v[0] + capsuleBounds->halfSize.v[0];
  v8 = capsuleBounds->midPoint.v[1] - triggerOrigin->v[1];
  return (float)(v7 * v7) > (float)((float)(v8 * v8) + (float)((float)(capsuleBounds->midPoint.v[0] - triggerOrigin->v[0]) * (float)(capsuleBounds->midPoint.v[0] - triggerOrigin->v[0])));
}

