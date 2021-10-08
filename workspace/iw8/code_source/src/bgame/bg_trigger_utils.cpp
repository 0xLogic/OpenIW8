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
char BG_TriggerDisk_Contacts_Capsule(const vec3_t *triggerOrigin, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  _RBX = capsuleBounds;
  _RDI = triggerBounds;
  if ( !triggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 120, ASSERT_TYPE_ASSERT, "(triggerBounds)", (const char *)&queryFormat, "triggerBounds") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 121, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]
    vsubss  xmm4, xmm2, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm0, dword ptr [rbx+4]
    vsubss  xmm5, xmm1, cs:__real@42800000
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm3, xmm1, xmm1
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm5, xmm5
    vcomiss xmm4, xmm0
  }
  return 1;
}

/*
==============
BG_TriggerRadiusRotate_Contacts_Capsule
==============
*/
bool BG_TriggerRadiusRotate_Contacts_Capsule(const vec3_t *triggerOrigin, const vec3_t *triggerAngles, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  char v28; 
  char v29; 
  bool result; 
  vec3_t vec; 
  vec3_t v79; 
  vec3_t v80; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  _RBX = capsuleBounds;
  _RDI = triggerBounds;
  if ( !triggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 24, ASSERT_TYPE_ASSERT, "(triggerBounds)", (const char *)&queryFormat, "triggerBounds") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 25, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
    __debugbreak();
  AnglesToAxis(triggerAngles, &axis);
  MatrixInverse(&axis, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  xmm10, dword ptr [rbx+0Ch]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, dword ptr [rbx+4]
    vsubss  xmm1, xmm7, dword ptr [rsi+4]
    vmovss  xmm8, dword ptr [rbx+8]
    vsubss  xmm9, xmm0, xmm10
    vsubss  xmm0, xmm6, dword ptr [rsi]
    vmovss  dword ptr [rsp+138h+vec], xmm0
    vsubss  xmm0, xmm8, xmm9
    vmovss  dword ptr [rsp+138h+vec+4], xmm1
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+138h+vec+8], xmm1
  }
  AxisTransformVec3(&out, &vec, &v80);
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [rsi]
    vsubss  xmm1, xmm7, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+138h+vec], xmm0
    vaddss  xmm0, xmm8, xmm9
    vsubss  xmm2, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+138h+vec+8], xmm2
    vmovss  dword ptr [rsp+138h+vec+4], xmm1
  }
  AxisTransformVec3(&out, &vec, &v79);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+138h+var_E8]
    vmovss  xmm5, dword ptr [rsp+138h+var_E8+4]
    vmovss  xmm0, dword ptr [rdi+14h]
    vmulss  xmm0, xmm0, cs:__real@40000000
    vmovss  xmm1, dword ptr [rsp+138h+var_F8]
    vaddss  xmm8, xmm10, dword ptr [rdi+0Ch]
    vxorps  xmm11, xmm10, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm2, xmm1, xmm6
    vaddss  xmm9, xmm0, xmm10
    vmovss  xmm0, dword ptr [rsp+138h+var_F8+4]
    vsubss  xmm3, xmm0, xmm5
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm2, xmm2, xmm6
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm10, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm3
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm7, xmm4, cs:__real@40000000
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm3, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm8, xmm8
    vsubss  xmm6, xmm2, xmm1
    vmulss  xmm2, xmm0, cs:__real@40800000
    vmulss  xmm0, xmm10, cs:__real@40800000
    vxorps  xmm5, xmm5, xmm5
    vucomiss xmm10, xmm5
    vmulss  xmm1, xmm0, xmm6
    vsubss  xmm4, xmm2, xmm1
  }
  if ( v29 )
  {
    __asm { vcomiss xmm6, xmm5 }
    if ( !v28 )
      goto LABEL_9;
  }
  else
  {
    __asm { vcomiss xmm4, xmm5 }
    if ( v28 | v29 )
      goto LABEL_9;
    __asm
    {
      vmovss  xmm0, cs:__real@3f000000
      vxorps  xmm1, xmm7, cs:__xmm@80000000800000008000000080000000
      vdivss  xmm3, xmm0, xmm10
      vsqrtss xmm4, xmm4, xmm4
      vsubss  xmm2, xmm1, xmm4
      vmulss  xmm2, xmm2, xmm3
      vcomiss xmm2, xmm5
      vsubss  xmm0, xmm4, xmm7
      vmulss  xmm1, xmm0, xmm3
    }
    if ( v28 )
    {
      __asm { vcomiss xmm1, xmm5 }
      if ( v28 )
        goto LABEL_9;
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vcomiss xmm2, xmm0
    }
    if ( !(v28 | v29) )
    {
      __asm { vcomiss xmm1, xmm0 }
      if ( !(v28 | v29) )
        goto LABEL_9;
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+138h+var_E8+8]
    vcomiss xmm1, xmm11
    vmovss  xmm0, dword ptr [rsp+138h+var_F8+8]
  }
  if ( !(v28 | v29) )
    goto LABEL_23;
  __asm { vcomiss xmm0, xmm11 }
  if ( !(v28 | v29) )
  {
LABEL_23:
    __asm { vcomiss xmm1, xmm9 }
    if ( v28 )
      goto LABEL_20;
    __asm { vcomiss xmm0, xmm9 }
    if ( v28 )
    {
LABEL_20:
      result = 1;
      goto LABEL_10;
    }
  }
LABEL_9:
  result = 0;
LABEL_10:
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
BG_TriggerRadius_Contacts_Capsule
==============
*/
bool BG_TriggerRadius_Contacts_Capsule(const vec3_t *triggerOrigin, const Bounds *triggerBounds, const Bounds *capsuleBounds)
{
  _RDI = triggerBounds;
  _RSI = triggerOrigin;
  if ( !triggerBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 7, ASSERT_TYPE_ASSERT, "(triggerBounds)", (const char *)&queryFormat, "triggerBounds") )
    __debugbreak();
  if ( !capsuleBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trigger_utils.cpp", 8, ASSERT_TYPE_ASSERT, "(capsuleBounds)", (const char *)&queryFormat, "capsuleBounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vsubss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  xmm0, dword ptr [rdi+14h]
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm0, dword ptr [rbx+14h]
    vcomiss xmm2, xmm1
  }
  return 0;
}

