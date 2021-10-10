/*
==============
CG_GetPrevPoseOrigin
==============
*/

void __fastcall CG_GetPrevPoseOrigin(const cpose_t *pose, vec3_t *outOrigin)
{
  ?CG_GetPrevPoseOrigin@@YAXPEBUcpose_t@@AEATvec3_t@@@Z(pose, outOrigin);
}

/*
==============
CG_Reset_PoseOrigin
==============
*/

void __fastcall CG_Reset_PoseOrigin(cpose_t *pose, const int randVal)
{
  ?CG_Reset_PoseOrigin@@YAXPEAUcpose_t@@H@Z(pose, randVal);
}

/*
==============
CompressSignedUnit
==============
*/

unsigned __int16 __fastcall CompressSignedUnit(float unit)
{
  return ?CompressSignedUnit@@YAGM@Z(unit);
}

/*
==============
CG_Pose_ClearPose
==============
*/

void __fastcall CG_Pose_ClearPose(cpose_t *pose)
{
  ?CG_Pose_ClearPose@@YAXPEAUcpose_t@@@Z(pose);
}

/*
==============
cpose_t::cpose_t
==============
*/

void __fastcall cpose_t::cpose_t(cpose_t *this)
{
  ??0cpose_t@@QEAA@XZ(this);
}

/*
==============
CG_SetPoseOrigin
==============
*/

void __fastcall CG_SetPoseOrigin(cpose_t *pose, const vec3_t *inOrigin)
{
  ?CG_SetPoseOrigin@@YAXPEAUcpose_t@@AEBTvec3_t@@@Z(pose, inOrigin);
}

/*
==============
CG_SetPrevPoseOrigin
==============
*/

void __fastcall CG_SetPrevPoseOrigin(cpose_t *pose, const vec3_t *inOrigin)
{
  ?CG_SetPrevPoseOrigin@@YAXPEAUcpose_t@@AEBTvec3_t@@@Z(pose, inOrigin);
}

/*
==============
ObfuscateSetFunctionPointer_prevOrigin
==============
*/

void (__fastcall *__fastcall ObfuscateSetFunctionPointer_prevOrigin(void (__fastcall *const functionPointer)(const vec3_t *, vec4_t *), const cpose_t *pose))(const vec3_t *, vec4_t *)
{
  return ?ObfuscateSetFunctionPointer_prevOrigin@@YAP6AXAEBTvec3_t@@AEATvec4_t@@@ZQ6AX01@ZPEBUcpose_t@@@Z(functionPointer, pose);
}

/*
==============
CG_GetPoseOrigin
==============
*/

void __fastcall CG_GetPoseOrigin(const cpose_t *pose, vec3_t *outOrigin)
{
  ?CG_GetPoseOrigin@@YAXPEBUcpose_t@@AEATvec3_t@@@Z(pose, outOrigin);
}

/*
==============
ObfuscateSetFunctionPointer_origin
==============
*/

void (__fastcall *__fastcall ObfuscateSetFunctionPointer_origin(void (__fastcall *const functionPointer)(const vec3_t *, vec4_t *), const cpose_t *pose))(const vec3_t *, vec4_t *)
{
  return ?ObfuscateSetFunctionPointer_origin@@YAP6AXAEBTvec3_t@@AEATvec4_t@@@ZQ6AX01@ZPEBUcpose_t@@@Z(functionPointer, pose);
}

/*
==============
Copy_CPose
==============
*/

void __fastcall Copy_CPose(cpose_t *out, const cpose_t *in)
{
  ?Copy_CPose@@YAXAEAUcpose_t@@AEBU1@@Z(out, in);
}

/*
==============
ObfuscateGetFunctionPointer_origin
==============
*/

void (__fastcall *__fastcall ObfuscateGetFunctionPointer_origin(void (__fastcall *const functionPointer)(const vec4_t *, vec3_t *), const cpose_t *pose))(const vec4_t *, vec3_t *)
{
  return ?ObfuscateGetFunctionPointer_origin@@YAP6AXAEBTvec4_t@@AEATvec3_t@@@ZQ6AX01@ZPEBUcpose_t@@@Z(functionPointer, pose);
}

/*
==============
CG_ResetPoseRandom
==============
*/

void __fastcall CG_ResetPoseRandom(cpose_t *pose, const int randValOrigin, const int randValPrevOrigin)
{
  ?CG_ResetPoseRandom@@YAXPEAUcpose_t@@HH@Z(pose, randValOrigin, randValPrevOrigin);
}

/*
==============
CG_GetPoseAngles
==============
*/

void __fastcall CG_GetPoseAngles(const cpose_t *pose, vec3_t *outAngles)
{
  ?CG_GetPoseAngles@@YAXPEBUcpose_t@@AEATvec3_t@@@Z(pose, outAngles);
}

/*
==============
ObfuscateGetFunctionPointer_prevOrigin
==============
*/

void (__fastcall *__fastcall ObfuscateGetFunctionPointer_prevOrigin(void (__fastcall *const functionPointer)(const vec4_t *, vec3_t *), const cpose_t *pose))(const vec4_t *, vec3_t *)
{
  return ?ObfuscateGetFunctionPointer_prevOrigin@@YAP6AXAEBTvec4_t@@AEATvec3_t@@@ZQ6AX01@ZPEBUcpose_t@@@Z(functionPointer, pose);
}

/*
==============
CompressUnit
==============
*/

unsigned __int16 __fastcall CompressUnit(float unit)
{
  return ?CompressUnit@@YAGM@Z(unit);
}

/*
==============
ObfuscateGetFunctionPointer_origin
==============
*/
void (*ObfuscateGetFunctionPointer_origin(void (*const functionPointer)(const vec4_t *, vec3_t *), const cpose_t *pose))(const vec4_t *, vec3_t *)
{
  void (__fastcall *Get_origin)(const vec4_t *, vec3_t *); 
  unsigned __int64 v3; 

  Get_origin = pose->origin.Get_origin;
  v3 = (unsigned __int64)functionPointer ^ s_aab_get_pointer_origin ^ (unsigned __int64)&pose->origin;
  if ( Get_origin && Get_origin != functionPointer && Get_origin != (void (__fastcall *)(const vec4_t *, vec3_t *))v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Get_origin == 0 ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc ))", (const char *)&queryFormat, "( pose->origin.Get_origin == NULL ) || ( pose->origin.Get_origin == functionPointer ) || ( pose->origin.Get_origin == getFunc )") )
    __debugbreak();
  return (void (__fastcall *)(const vec4_t *, vec3_t *))v3;
}

/*
==============
CG_GetPoseOrigin
==============
*/
void CG_GetPoseOrigin(const cpose_t *pose, vec3_t *outOrigin)
{
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v8; 

  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
  FunctionPointer_origin(&pose->origin.origin.origin, outOrigin);
  if ( pose->isPosePrecise )
  {
    _XMM0 = LODWORD(outOrigin->v[0]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v8 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v8;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = LODWORD(outOrigin->v[1]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    outOrigin->v[0] = *(float *)&_XMM1;
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v8 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v8;
    _XMM0 = LODWORD(outOrigin->v[2]);
    __asm
    {
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
    }
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v8 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v8;
    outOrigin->v[1] = *(float *)&_XMM2;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    outOrigin->v[2] = *(float *)&_XMM2;
  }
}

/*
==============
CG_GetPoseAngles
==============
*/
void CG_GetPoseAngles(const cpose_t *pose, vec3_t *outAngles)
{
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  outAngles->v[0] = pose->angles.v[0];
  outAngles->v[1] = pose->angles.v[1];
  outAngles->v[2] = pose->angles.v[2];
}

/*
==============
CG_SetPoseOrigin
==============
*/
void CG_SetPoseOrigin(cpose_t *pose, const vec3_t *inOrigin)
{
  void (__fastcall *v4)(const vec3_t *, vec4_t *); 
  float v5; 
  float v6; 
  const vec3_t *v7; 
  float v8; 
  int v9[4]; 

  v8 = inOrigin->v[0];
  if ( (LODWORD(inOrigin->v[0]) & 0x7F800000) == 2139095040 || (v8 = inOrigin->v[1], (LODWORD(v8) & 0x7F800000) == 2139095040) || (v8 = inOrigin->v[2], (LODWORD(v8) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )", v8) )
      __debugbreak();
  }
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 412, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->origin.Set_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 413, ASSERT_TYPE_ASSERT, "(pose->origin.Set_origin)", (const char *)&queryFormat, "pose->origin.Set_origin") )
    __debugbreak();
  if ( pose->isEntityPose )
  {
    CG_Pose_ValidateSetEntityPoseOrigin(pose);
    pose->entOriginSet = 1;
    pose->hasStaleEntityPose = 1;
  }
  v4 = ObfuscateSetFunctionPointer_origin(pose->origin.Set_origin, pose);
  if ( pose->isPosePrecise )
  {
    v5 = 4096.0 * inOrigin->v[1];
    v9[0] = (int)(float)(4096.0 * inOrigin->v[0]);
    v6 = 4096.0 * inOrigin->v[2];
    v9[1] = (int)v5;
    v7 = (const vec3_t *)v9;
    v9[2] = (int)v6;
  }
  else
  {
    v7 = inOrigin;
  }
  v4(v7, &pose->origin.origin.origin);
  pose->actualOrigin.v[0] = inOrigin->v[0];
  pose->actualOrigin.v[1] = inOrigin->v[1];
  pose->actualOrigin.v[2] = inOrigin->v[2];
}

/*
==============
CG_SetPrevPoseOrigin
==============
*/
void CG_SetPrevPoseOrigin(cpose_t *pose, const vec3_t *inOrigin)
{
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 

  if ( ((LODWORD(inOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(inOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(inOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 594, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->prevOrigin.Set_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 595, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Set_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Set_prevOrigin") )
    __debugbreak();
  Origin = ObfuscateSetFunctionPointer_prevOrigin(pose->prevOrigin.Set_prevOrigin, pose);
  Origin(inOrigin, &pose->prevOrigin.prevOrigin);
}

/*
==============
ObfuscateGetFunctionPointer_prevOrigin
==============
*/
void (*ObfuscateGetFunctionPointer_prevOrigin(void (*const functionPointer)(const vec4_t *, vec3_t *), const cpose_t *pose))(const vec4_t *, vec3_t *)
{
  void (__fastcall *Get_prevOrigin)(const vec4_t *, vec3_t *); 
  unsigned __int64 v3; 

  Get_prevOrigin = pose->prevOrigin.Get_prevOrigin;
  v3 = (unsigned __int64)functionPointer ^ s_aab_get_pointer_prevorigin ^ (unsigned __int64)&pose->prevOrigin;
  if ( Get_prevOrigin && Get_prevOrigin != functionPointer && Get_prevOrigin != (void (__fastcall *)(const vec4_t *, vec3_t *))v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Get_prevOrigin == 0 ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Get_prevOrigin == NULL ) || ( pose->prevOrigin.Get_prevOrigin == functionPointer ) || ( pose->prevOrigin.Get_prevOrigin == getFunc )") )
    __debugbreak();
  return (void (__fastcall *)(const vec4_t *, vec3_t *))v3;
}

/*
==============
ObfuscateSetFunctionPointer_origin
==============
*/
void (*ObfuscateSetFunctionPointer_origin(void (*const functionPointer)(const vec3_t *, vec4_t *), const cpose_t *pose))(const vec3_t *, vec4_t *)
{
  void (__fastcall *Set_origin)(const vec3_t *, vec4_t *); 
  unsigned __int64 v3; 

  Set_origin = pose->origin.Set_origin;
  v3 = (unsigned __int64)functionPointer ^ s_aab_set_pointer_origin ^ (unsigned __int64)&pose->origin.Get_origin;
  if ( Set_origin && Set_origin != functionPointer && Set_origin != (void (__fastcall *)(const vec3_t *, vec4_t *))v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 371, ASSERT_TYPE_ASSERT, "(( pose->origin.Set_origin == 0 ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc ))", (const char *)&queryFormat, "( pose->origin.Set_origin == NULL ) || ( pose->origin.Set_origin == functionPointer ) || ( pose->origin.Set_origin == setFunc )") )
    __debugbreak();
  return (void (__fastcall *)(const vec3_t *, vec4_t *))v3;
}

/*
==============
ObfuscateSetFunctionPointer_prevOrigin
==============
*/
void (*ObfuscateSetFunctionPointer_prevOrigin(void (*const functionPointer)(const vec3_t *, vec4_t *), const cpose_t *pose))(const vec3_t *, vec4_t *)
{
  void (__fastcall *Set_prevOrigin)(const vec3_t *, vec4_t *); 
  unsigned __int64 v3; 

  Set_prevOrigin = pose->prevOrigin.Set_prevOrigin;
  v3 = (unsigned __int64)functionPointer ^ s_aab_set_pointer_prevorigin ^ (unsigned __int64)&pose->prevOrigin.Get_prevOrigin;
  if ( Set_prevOrigin && Set_prevOrigin != functionPointer && Set_prevOrigin != (void (__fastcall *)(const vec3_t *, vec4_t *))v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 374, ASSERT_TYPE_ASSERT, "(( pose->prevOrigin.Set_prevOrigin == 0 ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc ))", (const char *)&queryFormat, "( pose->prevOrigin.Set_prevOrigin == NULL ) || ( pose->prevOrigin.Set_prevOrigin == functionPointer ) || ( pose->prevOrigin.Set_prevOrigin == setFunc )") )
    __debugbreak();
  return (void (__fastcall *)(const vec3_t *, vec4_t *))v3;
}

/*
==============
cpose_t::cpose_t
==============
*/
void cpose_t::cpose_t(cpose_t *this)
{
  ;
}

/*
==============
Copy_CPose
==============
*/
void Copy_CPose(cpose_t *out, const cpose_t *in)
{
  void (__fastcall *v4)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  cpose_t *v8; 
  const cpose_t *v9; 
  __int64 v10; 
  void (__fastcall *v11)(const vec4_t *, vec3_t *); 
  vec3_t outOrigin; 

  v4 = ObfuscateSetFunctionPointer_origin(out->origin.Set_origin, out);
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(out->origin.Get_origin, out);
  Origin = ObfuscateSetFunctionPointer_prevOrigin(out->prevOrigin.Set_prevOrigin, out);
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(out->prevOrigin.Get_prevOrigin, out);
  v8 = out;
  v9 = in;
  v10 = 2i64;
  do
  {
    *(_OWORD *)&v8->eType = *(_OWORD *)&v9->eType;
    *(_OWORD *)&v8->ragdollHandle = *(_OWORD *)&v9->ragdollHandle;
    *(_OWORD *)&v8->actualOrigin.y = *(_OWORD *)&v9->actualOrigin.y;
    *(_OWORD *)&v8->origin.Get_origin = *(_OWORD *)&v9->origin.Get_origin;
    *(SecureOrigin::secureUnion *)((char *)&v8->origin.origin + 8) = *(SecureOrigin::secureUnion *)((char *)&v9->origin.origin + 8);
    *(_OWORD *)&v8->angles.z = *(_OWORD *)&v9->angles.z;
    *(_OWORD *)&v8->prevOrigin.Get_prevOrigin = *(_OWORD *)&v9->prevOrigin.Get_prevOrigin;
    v8 = (cpose_t *)((char *)v8 + 128);
    *((_OWORD *)&v8[-1].moverFx + 7) = *(vec4_t *)((char *)&v9->prevOrigin.prevOrigin + 8);
    v9 = (const cpose_t *)((char *)v9 + 128);
    --v10;
  }
  while ( v10 );
  *(_OWORD *)&v8->eType = *(_OWORD *)&v9->eType;
  *(_OWORD *)&v8->ragdollHandle = *(_OWORD *)&v9->ragdollHandle;
  out->origin.Set_origin = NULL;
  out->origin.Get_origin = NULL;
  out->prevOrigin.Set_prevOrigin = NULL;
  out->prevOrigin.Get_prevOrigin = NULL;
  out->origin.Set_origin = ObfuscateSetFunctionPointer_origin(v4, out);
  out->origin.Get_origin = ObfuscateGetFunctionPointer_origin(FunctionPointer_origin, out);
  out->prevOrigin.Set_prevOrigin = ObfuscateSetFunctionPointer_prevOrigin(Origin, out);
  out->prevOrigin.Get_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(FunctionPointer_prevOrigin, out);
  CG_GetPoseOrigin(in, &outOrigin);
  CG_SetPoseOrigin(out, &outOrigin);
  if ( !in->prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin", -2i64) )
    __debugbreak();
  v11 = ObfuscateGetFunctionPointer_prevOrigin(in->prevOrigin.Get_prevOrigin, in);
  v11(&in->prevOrigin.prevOrigin, &outOrigin);
  CG_SetPrevPoseOrigin(out, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_ResetPoseRandom
==============
*/
void CG_ResetPoseRandom(cpose_t *pose, const int randValOrigin, const int randValPrevOrigin)
{
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  float v6; 
  float v7; 
  float v8; 

  CG_Reset_PoseOrigin(pose, randValOrigin);
  v6 = FLOAT_4_2949673e9;
  v7 = FLOAT_4_2949673e9;
  v8 = FLOAT_4_2949673e9;
  if ( (unsigned int)randValPrevOrigin >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 628, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randValPrevOrigin, 34) )
    __debugbreak();
  SetObfuscatedFunction(randValPrevOrigin, (unsigned __int64)&pose->prevOrigin.Get_prevOrigin, (unsigned __int64)&pose->prevOrigin, &pose->prevOrigin.Set_prevOrigin, &pose->prevOrigin.Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
  if ( ((LODWORD(v6) & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040 || (LODWORD(v8) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 594, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->prevOrigin.Set_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 595, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Set_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Set_prevOrigin") )
    __debugbreak();
  Origin = ObfuscateSetFunctionPointer_prevOrigin(pose->prevOrigin.Set_prevOrigin, pose);
  Origin((const vec3_t *)&v6, &pose->prevOrigin.prevOrigin);
}

/*
==============
CG_Reset_PoseOrigin
==============
*/
void CG_Reset_PoseOrigin(cpose_t *pose, const int randVal)
{
  void (__fastcall *v4)(const vec3_t *, vec4_t *); 
  float *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  int v10[4]; 

  v7 = FLOAT_4_2949673e9;
  v8 = FLOAT_4_2949673e9;
  v9 = FLOAT_4_2949673e9;
  if ( (unsigned int)randVal >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 544, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randVal, 34) )
    __debugbreak();
  SetObfuscatedFunction(randVal, (unsigned __int64)&pose->origin.Get_origin, (unsigned __int64)&pose->origin, &pose->origin.Set_origin, &pose->origin.Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
  if ( ((LODWORD(v7) & 0x7F800000) == 2139095040 || (LODWORD(v8) & 0x7F800000) == 2139095040 || (LODWORD(v9) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 412, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->origin.Set_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 413, ASSERT_TYPE_ASSERT, "(pose->origin.Set_origin)", (const char *)&queryFormat, "pose->origin.Set_origin") )
    __debugbreak();
  if ( pose->isEntityPose )
  {
    CG_Pose_ValidateSetEntityPoseOrigin(pose);
    pose->entOriginSet = 1;
    pose->hasStaleEntityPose = 1;
  }
  v4 = ObfuscateSetFunctionPointer_origin(pose->origin.Set_origin, pose);
  if ( pose->isPosePrecise )
  {
    v10[0] = (int)(float)(4096.0 * v7);
    v10[1] = (int)(float)(4096.0 * v8);
    v5 = (float *)v10;
    v10[2] = (int)(float)(4096.0 * v9);
  }
  else
  {
    v5 = &v7;
  }
  v4((const vec3_t *)v5, &pose->origin.origin.origin);
  v6 = v8;
  pose->actualOrigin.v[0] = v7;
  pose->actualOrigin.v[2] = v9;
  pose->actualOrigin.v[1] = v6;
}

/*
==============
CG_Pose_ClearPose
==============
*/
void CG_Pose_ClearPose(cpose_t *pose)
{
  unsigned int v2; 
  unsigned int v3; 
  bdRandom v4; 

  memset_0(pose, 0, sizeof(cpose_t));
  bdRandom::bdRandom(&v4);
  v2 = bdRandom::nextUInt(&v4) % 0x22;
  bdRandom::~bdRandom(&v4);
  bdRandom::bdRandom(&v4);
  v3 = bdRandom::nextUInt(&v4) % 0x22;
  bdRandom::~bdRandom(&v4);
  CG_ResetPoseZero(pose, v3, v2);
}

/*
==============
CG_GetPrevPoseOrigin
==============
*/
void CG_GetPrevPoseOrigin(const cpose_t *pose, vec3_t *outOrigin)
{
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 

  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 567, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
    __debugbreak();
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(pose->prevOrigin.Get_prevOrigin, pose);
  FunctionPointer_prevOrigin(&pose->prevOrigin.prevOrigin, outOrigin);
}

/*
==============
CompressSignedUnit
==============
*/
__int64 CompressSignedUnit(float unit)
{
  if ( (unit < -1.0 || unit > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 874, ASSERT_TYPE_ASSERT, "( ( unit >= -1.0f && unit <= 1.0f ) )", "( unit ) = %g", unit) )
    __debugbreak();
  return (unsigned int)(int)(float)((float)(unit * 32767.5) + 32768.0);
}

/*
==============
CompressUnit
==============
*/
__int64 CompressUnit(float unit)
{
  if ( (unit < 0.0 || unit > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 867, ASSERT_TYPE_ASSERT, "( ( unit >= 0.0f && unit <= 1.0f ) )", "( unit ) = %g", unit) )
    __debugbreak();
  return (unsigned int)(int)(float)((float)(unit * 65535.0) + 0.5);
}

