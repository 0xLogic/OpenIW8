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

  _RDI = outOrigin;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
  FunctionPointer_origin(&pose->origin.origin.origin, _RDI);
  if ( pose->isPosePrecise )
  {
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, dword ptr [rdi]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovd   xmm0, dword ptr [rdi+4]
      vcvtdq2pd xmm0, xmm0
      vmovss  dword ptr [rdi], xmm1
      vmulsd  xmm1, xmm0, xmm3
      vmovd   xmm0, dword ptr [rdi+8]
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm1, xmm0, xmm3
      vmovss  dword ptr [rdi+4], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rdi+8], xmm2
    }
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
  const vec3_t *v3; 
  void (__fastcall *v7)(const vec3_t *, vec4_t *); 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19[4]; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+58h+var_28], xmm0
  }
  v3 = inOrigin;
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+58h+var_28], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+58h+var_28], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
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
  v7 = ObfuscateSetFunctionPointer_origin(pose->origin.Set_origin, pose);
  if ( pose->isPosePrecise )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@45800000
      vmulss  xmm0, xmm2, dword ptr [rdi]
      vcvttss2si ecx, xmm0
      vmulss  xmm0, xmm2, dword ptr [rdi+4]
    }
    v19[0] = _ECX;
    __asm
    {
      vcvttss2si ecx, xmm0
      vmulss  xmm0, xmm2, dword ptr [rdi+8]
      vcvttss2si eax, xmm0
    }
    v19[1] = _ECX;
    v15 = v19;
    v19[2] = _EAX;
  }
  else
  {
    v15 = (int *)v3;
  }
  v7((const vec3_t *)v15, &pose->origin.origin.origin);
  pose->actualOrigin.v[0] = v3->v[0];
  pose->actualOrigin.v[1] = v3->v[1];
  pose->actualOrigin.v[2] = v3->v[2];
}

/*
==============
CG_SetPrevPoseOrigin
==============
*/
void CG_SetPrevPoseOrigin(cpose_t *pose, const vec3_t *inOrigin)
{
  const vec3_t *v3; 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  int v8; 
  int v9; 
  int v10; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  v3 = inOrigin;
  if ( (v8 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
      __debugbreak();
  }
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 594, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->prevOrigin.Set_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 595, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Set_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Set_prevOrigin") )
    __debugbreak();
  Origin = ObfuscateSetFunctionPointer_prevOrigin(pose->prevOrigin.Set_prevOrigin, pose);
  Origin(v3, &pose->prevOrigin.prevOrigin);
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
  __int64 v10; 
  void (__fastcall *v21)(const vec4_t *, vec3_t *); 
  vec3_t outOrigin; 

  v4 = ObfuscateSetFunctionPointer_origin(out->origin.Set_origin, out);
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(out->origin.Get_origin, out);
  Origin = ObfuscateSetFunctionPointer_prevOrigin(out->prevOrigin.Set_prevOrigin, out);
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(out->prevOrigin.Get_prevOrigin, out);
  _RDX = out;
  _RCX = in;
  v10 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rdx], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rdx+10h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rdx+20h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rdx+30h], xmm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rdx+40h], xmm0
      vmovups xmm1, xmmword ptr [rcx+50h]
      vmovups xmmword ptr [rdx+50h], xmm1
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rdx+60h], xmm0
    }
    _RDX = (cpose_t *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    _RCX = (const cpose_t *)((char *)_RCX + 128);
    --v10;
  }
  while ( v10 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rdx+10h], xmm1
  }
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
  v21 = ObfuscateGetFunctionPointer_prevOrigin(in->prevOrigin.Get_prevOrigin, in);
  v21(&in->prevOrigin.prevOrigin, &outOrigin);
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
  int v10; 
  int v11; 
  int v12; 
  int v13; 

  CG_Reset_PoseOrigin(pose, randValOrigin);
  __asm
  {
    vmovss  xmm0, cs:__real@4f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_2C], xmm0
    vmovss  [rsp+78h+var_28], xmm0
  }
  if ( (unsigned int)randValPrevOrigin >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 628, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randValPrevOrigin, 34) )
    __debugbreak();
  SetObfuscatedFunction(randValPrevOrigin, (unsigned __int64)&pose->prevOrigin.Get_prevOrigin, (unsigned __int64)&pose->prevOrigin, &pose->prevOrigin.Set_prevOrigin, &pose->prevOrigin.Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_30]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_2C]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_28]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
      __debugbreak();
  }
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 594, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->prevOrigin.Set_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 595, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Set_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Set_prevOrigin") )
    __debugbreak();
  Origin = ObfuscateSetFunctionPointer_prevOrigin(pose->prevOrigin.Set_prevOrigin, pose);
  Origin((const vec3_t *)&v13, &pose->prevOrigin.prevOrigin);
}

/*
==============
CG_Reset_PoseOrigin
==============
*/
void CG_Reset_PoseOrigin(cpose_t *pose, const int randVal)
{
  void (__fastcall *v8)(const vec3_t *, vec4_t *); 
  int *v16; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v26[4]; 

  _RBX = pose;
  __asm
  {
    vmovss  xmm0, cs:__real@4f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_2C], xmm0
    vmovss  [rsp+78h+var_28], xmm0
  }
  if ( (unsigned int)randVal >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 544, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randVal, 34) )
    __debugbreak();
  SetObfuscatedFunction(randVal, (unsigned __int64)&_RBX->origin.Get_origin, (unsigned __int64)&_RBX->origin, &_RBX->origin.Set_origin, &_RBX->origin.Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_30]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_2C]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_28]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
      __debugbreak();
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 412, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !_RBX->origin.Set_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 413, ASSERT_TYPE_ASSERT, "(pose->origin.Set_origin)", (const char *)&queryFormat, "pose->origin.Set_origin") )
    __debugbreak();
  if ( _RBX->isEntityPose )
  {
    CG_Pose_ValidateSetEntityPoseOrigin(_RBX);
    _RBX->entOriginSet = 1;
    _RBX->hasStaleEntityPose = 1;
  }
  v8 = ObfuscateSetFunctionPointer_origin(_RBX->origin.Set_origin, _RBX);
  if ( _RBX->isPosePrecise )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@45800000
      vmulss  xmm1, xmm2, [rsp+78h+var_30]
      vcvttss2si ecx, xmm1
      vmulss  xmm1, xmm2, [rsp+78h+var_2C]
    }
    v26[0] = _ECX;
    __asm
    {
      vcvttss2si ecx, xmm1
      vmulss  xmm1, xmm2, [rsp+78h+var_28]
      vcvttss2si eax, xmm1
    }
    v26[1] = _ECX;
    v16 = v26;
    v26[2] = _EAX;
  }
  else
  {
    v16 = &v23;
  }
  v8((const vec3_t *)v16, &_RBX->origin.origin.origin);
  __asm
  {
    vmovss  xmm0, [rsp+78h+var_30]
    vmovss  xmm1, [rsp+78h+var_2C]
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovss  xmm0, [rsp+78h+var_28]
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  dword ptr [rbx+20h], xmm1
  }
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

int __fastcall CompressSignedUnit(double unit)
{
  int result; 
  double v8; 

  __asm
  {
    vcomiss xmm0, cs:__real@bf800000
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@3f800000
    vcvtss2sd xmm1, xmm6, xmm6
    vmovsd  [rsp+48h+var_20], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 874, ASSERT_TYPE_ASSERT, "( ( unit >= -1.0f && unit <= 1.0f ) )", "( unit ) = %g", v8) )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@46ffff00
    vaddss  xmm1, xmm0, cs:__real@47000000
    vmovaps xmm6, [rsp+48h+var_18]
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
CompressUnit
==============
*/

int __fastcall CompressUnit(double unit, double _XMM1_8)
{
  int result; 
  double v10; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@3f800000
    vcvtss2sd xmm1, xmm6, xmm6
    vmovsd  [rsp+48h+var_20], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 867, ASSERT_TYPE_ASSERT, "( ( unit >= 0.0f && unit <= 1.0f ) )", "( unit ) = %g", v10) )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@477fff00
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vmovaps xmm6, [rsp+48h+var_18]
    vcvttss2si eax, xmm1
  }
  return result;
}

