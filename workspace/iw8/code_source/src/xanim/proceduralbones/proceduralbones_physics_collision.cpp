/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams
==============
*/

void __fastcall XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams(XAnimProcNodeCalcParams *params, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  ?XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams@@YAXPEAUXAnimProcNodeCalcParams@@PEBUDObjProceduralBones@@PEAUDObjAnimMat@@I@Z(params, procBones, outTransforms, maxTransforms);
}

/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj
==============
*/

void __fastcall XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj(const DObj *dobj, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  ?XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj@@YAXPEBUDObj@@PEBUDObjProceduralBones@@PEAUDObjAnimMat@@I@Z(dobj, procBones, outTransforms, maxTransforms);
}

/*
==============
XAnimBonePhysics_FindCollisions
==============
*/

int __fastcall XAnimBonePhysics_FindCollisions(const DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, const XAnimCollisionShape *collidableBoneCollisionShapes, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionContact *outContacts, const int maxContacts)
{
  return ?XAnimBonePhysics_FindCollisions@@YAHPEBUDObjProceduralBones@@IIPEBUXAnimCollisionShape@@PEBUDObjAnimMat@@PEAUXAnimCollisionContact@@H@Z(procBones, firstPhysicsBoneIndex, endPhysicsBoneIndex, collidableBoneCollisionShapes, collidableBoneTransforms, outContacts, maxContacts);
}

/*
==============
XAnimBonePhysics_TransformCollisionShape
==============
*/

void __fastcall XAnimBonePhysics_TransformCollisionShape(const XAnimCollisionShape *srcShape, const vec4_t *quat, const vec3_t *trans, XAnimCollisionShape *outShape)
{
  ?XAnimBonePhysics_TransformCollisionShape@@YAXPEBUXAnimCollisionShape@@AEBTvec4_t@@AEBTvec3_t@@PEAU1@@Z(srcShape, quat, trans, outShape);
}

/*
==============
XAnimBonePhysics_PreTransformCollidableBoneShapes
==============
*/

void __fastcall XAnimBonePhysics_PreTransformCollidableBoneShapes(const DObjProceduralBones *procBones, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionShape *outShapes, unsigned int maxShapes)
{
  ?XAnimBonePhysics_PreTransformCollidableBoneShapes@@YAXPEBUDObjProceduralBones@@PEBUDObjAnimMat@@PEAUXAnimCollisionShape@@I@Z(procBones, collidableBoneTransforms, outShapes, maxShapes);
}

/*
==============
FindNearestPointOnAlignedBoxFace
==============
*/
float FindNearestPointOnAlignedBoxFace(const vec3_t *p, const vec3_t *extents, vec3_t *outFaceNormal, vec3_t *outContactPoint)
{
  vec3_t v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm5, dword ptr [rdx]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm7, dword ptr [rcx+4]
    vmovss  xmm8, dword ptr [rcx+8]
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rdx+8]
    vxorps  xmm1, xmm5, xmm3
    vxorps  xmm9, xmm9, xmm9
    vcmpltss xmm0, xmm6, xmm9
    vblendvps xmm0, xmm5, xmm1, xmm0
    vmovss  [rsp+98h+var_80], xmm0
    vxorps  xmm1, xmm4, xmm3
    vcmpltss xmm0, xmm7, xmm9
    vblendvps xmm0, xmm4, xmm1, xmm0
    vxorps  xmm1, xmm2, xmm3
    vmovss  [rsp+98h+var_7C], xmm7
    vmovss  dword ptr [r11-78h], xmm8
    vmovss  [rsp+98h+var_70], xmm0
    vcmpltss xmm0, xmm8, xmm9
    vblendvps xmm0, xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  [rsp+98h+var_74], xmm6
    vmovss  dword ptr [r11-6Ch], xmm8
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  [rsp+98h+var_68], xmm6
    vandps  xmm6, xmm6, xmm1
    vsubss  xmm3, xmm5, xmm6
    vandps  xmm3, xmm3, xmm1
    vmovss  [rsp+98h+var_64], xmm7
    vandps  xmm7, xmm7, xmm1
    vandps  xmm8, xmm8, xmm1
    vsubss  xmm5, xmm4, xmm7
    vandps  xmm5, xmm5, xmm1
    vsubss  xmm0, xmm2, xmm8
    vcomiss xmm3, xmm5
    vandps  xmm0, xmm0, xmm1
    vmovss  [rsp+98h+var_90], xmm3
    vmovss  [rsp+98h+var_8C], xmm5
    vmovss  [rsp+98h+var_88], xmm0
    vcomiss xmm5, xmm0
  }
  _RCX = 8i64;
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000
    vmovss  xmm1, cs:__real@3f800000
  }
  *outContactPoint = v48;
  *(_QWORD *)outFaceNormal->v = 0i64;
  outFaceNormal->v[2] = 0.0;
  __asm
  {
    vcmpless xmm3, xmm9, dword ptr [rcx+r9]
    vblendvps xmm4, xmm1, xmm2, xmm3
    vmovss  dword ptr [r8+rcx], xmm4
    vmovss  xmm0, [rsp+rcx+98h+var_90]
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
FindNearestPointSegmentAlignedBoxEdge
==============
*/
float FindNearestPointSegmentAlignedBoxEdge(const vec3_t *segStart, const vec3_t *segEnd, const vec3_t *segMidPoint, const vec3_t *extents, vec3_t *outNormal, vec3_t *outContactPointSeg, vec3_t *outContactPointBox)
{
  char v97; 
  char v98; 
  float v223; 
  float v224; 
  float v225; 
  float v226; 
  float t1; 
  float t0; 
  vec3_t s00; 
  vec3_t s01; 
  vec3_t v238; 
  vec3_t v239; 
  char v240; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, dword ptr [r9]
    vmovss  xmm0, dword ptr [r8]
  }
  _R14 = outContactPointSeg;
  _R15 = outContactPointBox;
  _RDI = segEnd;
  _RSI = outNormal;
  __asm
  {
    vxorps  xmm1, xmm2, xmm6
    vxorps  xmm9, xmm9, xmm9
    vcmpltss xmm0, xmm0, xmm9
    vblendvps xmm5, xmm2, xmm1, xmm0
    vmovss  xmm2, dword ptr [r9+4]
    vmovss  xmm0, dword ptr [r8+4]
    vcmpltss xmm0, xmm0, xmm9
    vxorps  xmm1, xmm2, xmm6
    vblendvps xmm4, xmm2, xmm1, xmm0
    vmovss  xmm2, dword ptr [r9+8]
    vmovss  xmm0, dword ptr [r8+8]
    vcmpltss xmm0, xmm0, xmm9
    vxorps  xmm1, xmm2, xmm6
    vblendvps xmm3, xmm2, xmm1, xmm0
    vxorps  xmm0, xmm5, xmm6
    vmovss  dword ptr [rsp+170h+s01], xmm0
    vxorps  xmm0, xmm4, xmm6
    vmovss  dword ptr [rbp+70h+var_E8+4], xmm0
    vxorps  xmm0, xmm3, xmm6
    vmovss  [rsp+170h+var_140], xmm5
    vmovss  [rsp+170h+var_140], xmm4
    vmovss  dword ptr [rbp+70h+var_D8+8], xmm0
    vmovss  dword ptr [rsp+170h+s00], xmm5
    vmovss  dword ptr [rsp+170h+s00+4], xmm4
    vmovss  dword ptr [rsp+170h+s00+8], xmm3
    vmovss  dword ptr [rsp+170h+s01+4], xmm4
    vmovss  dword ptr [rbp+70h+s01+8], xmm3
    vmovss  dword ptr [rbp+70h+var_E8], xmm5
    vmovss  dword ptr [rbp+70h+var_E8+8], xmm3
    vmovss  dword ptr [rbp+70h+var_D8], xmm5
    vmovss  dword ptr [rbp+70h+var_D8+4], xmm4
    vmovss  [rsp+170h+var_140], xmm3
  }
  ClosestPointsTwoSegs(&s00, &s01, segStart, segEnd, &t0, &t1);
  __asm
  {
    vmovss  xmm5, [rsp+170h+var_12C]
    vmovss  xmm4, [rsp+170h+var_130]
    vmovss  xmm0, dword ptr [rsp+170h+s01]
    vsubss  xmm1, xmm0, dword ptr [rsp+170h+s00]
    vmovss  xmm0, dword ptr [rsp+170h+s01+4]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm12, xmm1, dword ptr [rsp+170h+s00]
    vsubss  xmm1, xmm0, dword ptr [rsp+170h+s00+4]
    vmovss  xmm0, dword ptr [rbp+70h+s01+8]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, dword ptr [rsp+170h+s00+8]
    vaddss  xmm11, xmm2, dword ptr [rsp+170h+s00+4]
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rdi+4]
    vaddss  xmm10, xmm2, dword ptr [rsp+170h+s00+8]
    vmulss  xmm1, xmm1, xmm4
    vaddss  xmm15, xmm1, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, xmm4
    vsubss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm14, xmm2, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm13, xmm2, dword ptr [rbx+8]
  }
  ClosestPointsTwoSegs(&s00, &v238, segStart, _RDI, &v226, &v225);
  __asm
  {
    vmovss  xmm5, [rsp+170h+var_134]
    vmovss  xmm0, dword ptr [rbp+70h+var_E8]
    vsubss  xmm1, xmm0, dword ptr [rsp+170h+s00]
    vmovss  xmm0, dword ptr [rbp+70h+var_E8+4]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm9, xmm1, dword ptr [rsp+170h+s00]
    vsubss  xmm1, xmm0, dword ptr [rsp+170h+s00+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, dword ptr [rsp+170h+s00+4]
    vmovss  [rsp+170h+var_124], xmm0
    vmovss  xmm0, dword ptr [rbp+70h+var_E8+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+170h+s00+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, dword ptr [rsp+170h+s00+8]
    vmovss  xmm5, [rsp+170h+var_138]
    vmovss  [rsp+170h+var_128], xmm0
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rbx]
    vmovss  [rsp+170h+var_118], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  [rsp+170h+var_11C], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  [rsp+170h+var_120], xmm0
    vmovss  [rsp+170h+var_114], xmm9
  }
  ClosestPointsTwoSegs(&s00, &v239, segStart, _RDI, &v224, &v223);
  __asm
  {
    vmovss  xmm3, [rsp+170h+var_13C]
    vmovss  xmm5, [rsp+170h+var_140]
    vmovss  xmm0, dword ptr [rbp+70h+var_D8]
    vmovss  xmm6, dword ptr [rsp+170h+s00]
    vmovss  xmm7, dword ptr [rsp+170h+s00+4]
    vmovss  xmm8, dword ptr [rsp+170h+s00+8]
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm1, xmm1, xmm3
    vaddss  xmm0, xmm1, xmm6
    vmovss  [rsp+170h+var_110], xmm0
    vmovss  xmm0, dword ptr [rbp+70h+var_D8+4]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm3
    vaddss  xmm0, xmm2, xmm7
    vmovss  [rsp+170h+var_138], xmm0
    vmovss  xmm0, dword ptr [rbp+70h+var_D8+8]
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm1, xmm3
    vaddss  xmm0, xmm2, xmm8
    vmovss  [rsp+170h+var_130], xmm0
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rbx]
    vmovss  [rsp+170h+var_13C], xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, dword ptr [rbx+4]
    vmovss  [rsp+170h+var_134], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  [rsp+170h+var_12C], xmm0
    vsubss  xmm0, xmm12, xmm15
    vsubss  xmm1, xmm11, xmm14
    vsubss  xmm4, xmm9, [rsp+170h+var_118]
    vmovss  xmm2, [rsp+170h+var_124]
    vsubss  xmm5, xmm2, [rsp+170h+var_11C]
    vmovss  xmm9, [rsp+170h+var_138]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm4
    vsubss  xmm3, xmm10, xmm13
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, [rsp+170h+var_128]
    vmovss  [rsp+170h+var_140], xmm3
    vmulss  xmm3, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm0, xmm1, [rsp+170h+var_120]
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm0, xmm9, [rsp+170h+var_134]
    vmulss  xmm3, xmm0, xmm0
    vaddss  xmm5, xmm2, xmm1
    vmovss  xmm1, [rsp+170h+var_110]
    vsubss  xmm0, xmm1, [rsp+170h+var_13C]
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, [rsp+170h+var_130]
    vsubss  xmm3, xmm0, [rsp+170h+var_12C]
    vmovss  xmm0, [rsp+170h+var_140]
    vcomiss xmm0, xmm5
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vxorps  xmm9, xmm9, xmm9
  }
  if ( !v97 )
    goto LABEL_6;
  __asm { vcomiss xmm0, xmm4 }
  if ( v97 )
  {
    __asm
    {
      vsqrtss xmm4, xmm0, xmm0
      vcomiss xmm4, xmm9
    }
    if ( v97 | v98 )
    {
      __asm
      {
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm6, xmm1
        vmovss  dword ptr [rsi], xmm0
        vmulss  xmm3, xmm7, xmm1
        vmulss  xmm2, xmm8, xmm1
        vmovss  dword ptr [rsi+4], xmm3
        vmovss  dword ptr [rsi+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm1, xmm0, xmm4
        vsubss  xmm0, xmm12, xmm15
        vsubss  xmm3, xmm11, xmm14
        vmulss  xmm0, xmm1, xmm0
        vmovss  dword ptr [rsi], xmm0
        vsubss  xmm2, xmm10, xmm13
        vmulss  xmm3, xmm1, xmm3
        vmulss  xmm2, xmm1, xmm2
        vmovss  dword ptr [rsi+4], xmm3
        vmovss  dword ptr [rsi+8], xmm2
      }
    }
  }
  else
  {
LABEL_6:
    __asm { vcomiss xmm5, xmm4 }
    if ( v97 )
    {
      __asm
      {
        vmovss  xmm12, [rsp+170h+var_114]
        vsqrtss xmm4, xmm5, xmm5
        vcomiss xmm4, xmm9
      }
      if ( v97 | v98 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm8, xmm1
          vmulss  xmm0, xmm7, xmm1
          vmulss  xmm3, xmm6, xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  xmm3, [rsp+170h+var_124]
          vdivss  xmm1, xmm0, xmm4
          vmovss  xmm0, [rsp+170h+var_128]
          vsubss  xmm2, xmm0, [rsp+170h+var_120]
          vsubss  xmm0, xmm3, [rsp+170h+var_11C]
          vsubss  xmm3, xmm12, [rsp+170h+var_118]
          vmulss  xmm3, xmm1, xmm3
          vmulss  xmm2, xmm1, xmm2
          vmulss  xmm0, xmm1, xmm0
        }
      }
      __asm
      {
        vmovss  xmm10, [rsp+170h+var_128]
        vmovss  xmm11, [rsp+170h+var_124]
        vmovss  xmm13, [rsp+170h+var_120]
        vmovss  xmm14, [rsp+170h+var_11C]
        vmovss  xmm15, [rsp+170h+var_118]
        vmovss  dword ptr [rsi], xmm3
        vmovss  dword ptr [rsi+4], xmm0
        vmovss  dword ptr [rsi+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm5, [rsp+170h+var_110]
        vmovss  xmm6, [rsp+170h+var_138]
        vsubss  xmm1, xmm6, [rsp+170h+var_134]
        vmovss  xmm10, [rsp+170h+var_130]
        vmovss  xmm13, [rsp+170h+var_12C]
        vmovss  xmm14, [rsp+170h+var_134]
        vmovss  xmm15, [rsp+170h+var_13C]
        vsqrtss xmm4, xmm4, xmm4
        vdivss  xmm2, xmm0, xmm4
        vsubss  xmm0, xmm5, [rsp+170h+var_13C]
        vmulss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rsi], xmm0
        vmulss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm1, xmm2
        vmovss  dword ptr [rsi+8], xmm0
        vmovss  dword ptr [rsi+4], xmm1
        vmovaps xmm11, xmm6
        vmovaps xmm12, xmm5
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [r14], xmm15
    vmovss  dword ptr [r14+4], xmm14
    vmovss  dword ptr [r14+8], xmm13
    vmovss  dword ptr [r15], xmm12
    vmovss  dword ptr [r15+4], xmm11
    vmovss  dword ptr [r15+8], xmm10
    vmovaps xmm0, xmm4
  }
  _R11 = &v240;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return *(float *)&_XMM0;
}

/*
==============
TestSegmentAlignedBoxAtOrigin
==============
*/
bool TestSegmentAlignedBoxAtOrigin(const vec3_t *segStart, const vec3_t *segEnd, const vec3_t *boxExtents)
{
  char v57; 
  char v58; 
  bool result; 
  _BYTE v86[32]; 
  vec3_t v1; 
  vec3_t cross; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [rdx+4]
    vmulss  xmm1, xmm1, xmm4
    vaddss  xmm13, xmm1, xmm6
    vsubss  xmm1, xmm0, xmm5
    vmovss  xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm8, xmm2, xmm5
    vsubss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm4, xmm2, xmm3
    vsubss  xmm15, xmm8, xmm5
    vsubss  xmm14, xmm13, xmm6
    vandps  xmm5, xmm14, xmm7
    vaddss  xmm0, xmm5, dword ptr [r8]
    vandps  xmm1, xmm13, xmm7
    vcomiss xmm1, xmm0
    vsubss  xmm9, xmm4, xmm3
  }
  _RBX = boxExtents;
  __asm
  {
    vandps  xmm2, xmm15, xmm7
    vandps  xmm3, xmm9, xmm7
  }
  if ( (unsigned __int64)v86 != _security_cookie )
    goto LABEL_8;
  __asm
  {
    vaddss  xmm0, xmm2, dword ptr [r8+4]
    vandps  xmm1, xmm8, xmm7
    vcomiss xmm1, xmm0
  }
  if ( (unsigned __int64)v86 != _security_cookie )
    goto LABEL_8;
  __asm
  {
    vaddss  xmm0, xmm3, dword ptr [r8+8]
    vandps  xmm1, xmm4, xmm7
    vcomiss xmm1, xmm0
  }
  if ( (unsigned __int64)v86 != _security_cookie )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vaddss  xmm11, xmm2, xmm0
    vaddss  xmm12, xmm3, xmm0
    vmulss  xmm1, xmm9, xmm8
    vaddss  xmm10, xmm5, xmm0
    vmulss  xmm0, xmm15, xmm4
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm13
    vmulss  xmm0, xmm8, xmm14
    vmulss  xmm2, xmm14, xmm4
    vmulss  xmm3, xmm13, xmm15
    vsubss  xmm9, xmm2, xmm1
    vsubss  xmm8, xmm3, xmm0
    vmovss  dword ptr [rsp+0F8h+v1], xmm10
    vmovss  dword ptr [rsp+0F8h+v1+4], xmm11
    vmovss  dword ptr [rsp+0F8h+v1+8], xmm12
  }
  Vec3Cross(boxExtents, &v1, &cross);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm11
    vmulss  xmm0, xmm3, xmm12
    vaddss  xmm1, xmm1, xmm0
    vandps  xmm6, xmm6, xmm7
    vcomiss xmm6, xmm1
  }
  if ( !(v57 | v58) )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]
    vmulss  xmm1, xmm12, xmm2
    vmulss  xmm0, xmm4, xmm10
    vaddss  xmm1, xmm1, xmm0
    vandps  xmm9, xmm9, xmm7
    vcomiss xmm9, xmm1
  }
  if ( !(v57 | v58) )
    goto LABEL_8;
  __asm
  {
    vmulss  xmm1, xmm10, xmm3
    vmulss  xmm0, xmm11, xmm2
    vaddss  xmm1, xmm1, xmm0
    vandps  xmm8, xmm8, xmm7
    vcomiss xmm8, xmm1
  }
  if ( !(v57 | v58) )
LABEL_8:
    result = 0;
  else
    result = 1;
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
  return result;
}

/*
==============
XAnimBonePhysics_FindCollisions
==============
*/
__int64 XAnimBonePhysics_FindCollisions(const DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, const XAnimCollisionShape *collidableBoneCollisionShapes, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionContact *outContacts, const int maxContacts)
{
  const DObjProceduralBones *v14; 
  unsigned int numModels; 
  unsigned int v16; 
  int v17; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  XAnimPhysicsBone *v32; 
  const XAnimDynamicBoneProperties *properties; 
  unsigned int v48; 
  XAnimCollisionContact *v54; 
  __int64 v56; 
  unsigned int v94; 
  const DObjProceduralBones *v95; 
  __int64 v96; 
  XAnimCollidableBoneInfo *collidableBoneInfo; 
  unsigned int v98; 
  const DObjAnimMat *v99; 
  unsigned int v100; 
  XAnimCollisionContact *v102; 
  int v103; 
  __int64 v121; 
  char v123; 
  __int64 result; 
  XAnimCollisionContact *v138; 
  vec3_t *outPointB; 
  vec3_t *outNormal; 
  __int64 v141; 
  bool groundPlaneEnabled; 
  unsigned int v143; 
  unsigned int v144; 
  unsigned int v145; 
  unsigned int v146; 
  unsigned int numCollidableBones; 
  unsigned int v149; 
  unsigned int v150; 
  unsigned int v151; 
  vec4_t *boxQuat; 
  XAnimCollidableBoneInfo *v155; 
  XAnimPhysicsBone *v156; 
  __int64 v157; 
  XAnimPhysicsBone *physicsBones; 
  XAnimCollisionShape *collisionShapes; 
  __int64 v161; 
  DObjProceduralBonesModelInfo *v162; 
  XAnimCollisionShapeType type; 
  XAnimCapsuleCollisionShape capsule; 
  vec3_t out; 
  vec4_t outModelGroundPlane; 
  vec4_t quat; 
  vec3_t in; 
  vec3_t v169; 

  v14 = procBones;
  if ( outContacts && maxContacts && endPhysicsBoneIndex >= firstPhysicsBoneIndex )
  {
    if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1067, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
      __debugbreak();
    numModels = v14->numModels;
    physicsBones = v14->physicsBones;
    numCollidableBones = v14->numCollidableBones;
    v145 = numModels;
    groundPlaneEnabled = v14->physicsState.groundPlaneEnabled;
    if ( groundPlaneEnabled )
      XAnimBonePhysics_GetModelSpaceGroundPlane(v14, &outModelGroundPlane);
    if ( firstPhysicsBoneIndex >= v14->numPhysicsBones )
    {
      LODWORD(v138) = firstPhysicsBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1079, ASSERT_TYPE_ASSERT, "(unsigned)( firstPhysicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "firstPhysicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v138, v14->numPhysicsBones) )
        __debugbreak();
    }
    if ( endPhysicsBoneIndex > v14->numPhysicsBones )
    {
      LODWORD(outPointB) = v14->numPhysicsBones;
      LODWORD(v138) = endPhysicsBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1080, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", v138, outPointB) )
        __debugbreak();
    }
    v16 = 0;
    v17 = 0;
    __asm
    {
      vmovaps xmmword ptr [rsp+200h+var_58+8], xmm6
      vmovaps [rsp+200h+var_68+8], xmm7
      vmovaps [rsp+200h+var_78+8], xmm8
      vmovaps [rsp+200h+var_88+8], xmm9
      vmovaps [rsp+200h+var_98+8], xmm10
      vmovaps [rsp+200h+var_A8+8], xmm11
    }
    v144 = 0;
    if ( !numModels )
      goto LABEL_112;
    __asm
    {
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm11, cs:__real@80000000
      vmovss  xmm10, cs:__real@3f800000
    }
    v21 = numCollidableBones;
    v22 = numModels;
    v23 = 0i64;
    v157 = 0i64;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    while ( 1 )
    {
      modelInfo = v14->modelInfo;
      v162 = modelInfo;
      v26 = *(&modelInfo->numPhysicsBones + v23);
      if ( (_BYTE)v26 )
        break;
LABEL_111:
      ++v16;
      v23 += 32i64;
      v144 = v16;
      v157 = v23;
      if ( v16 >= v22 )
      {
LABEL_112:
        __asm { vmovaps xmm10, [rsp+200h+var_98+8] }
        result = (unsigned int)v17;
        __asm
        {
          vmovaps xmm9, [rsp+200h+var_88+8]
          vmovaps xmm8, [rsp+200h+var_78+8]
          vmovaps xmm7, [rsp+200h+var_68+8]
          vmovaps xmm6, xmmword ptr [rsp+200h+var_58+8]
          vmovaps xmm11, [rsp+200h+var_A8+8]
        }
        return result;
      }
    }
    if ( !*(const XAnimDynamicBones **)((char *)&modelInfo->dynamicBonesAsset + v23) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1093, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset != 0)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset != NULL") )
        __debugbreak();
      v16 = v144;
    }
    v27 = *(&modelInfo->firstPhysicsBoneIndex + v23);
    v28 = v27 + *(&modelInfo->numPhysicsBones + v23);
    collisionShapes = (*(const XAnimDynamicBones **)((char *)&modelInfo->dynamicBonesAsset + v23))->collisionShapes;
    if ( v28 <= firstPhysicsBoneIndex )
    {
LABEL_110:
      v22 = v145;
      goto LABEL_111;
    }
    if ( v27 >= endPhysicsBoneIndex )
      goto LABEL_112;
    v29 = endPhysicsBoneIndex - v27;
    if ( endPhysicsBoneIndex >= v28 )
      v29 = v26;
    v30 = firstPhysicsBoneIndex - v27;
    v143 = v29;
    if ( firstPhysicsBoneIndex <= v27 )
      v30 = 0;
    v151 = v30;
    if ( v30 >= v29 )
    {
LABEL_109:
      v16 = v144;
      goto LABEL_110;
    }
    while ( 1 )
    {
      v31 = v30 + *(&modelInfo->firstPhysicsBoneIndex + v23);
      v146 = v31;
      if ( !v31 )
      {
        LODWORD(v141) = 1;
        LODWORD(outNormal) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1120, ASSERT_TYPE_ASSERT, "( physicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "physicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", outNormal, v141) )
          __debugbreak();
        v29 = v143;
      }
      v161 = v31;
      v32 = &physicsBones[v31];
      v156 = v32;
      if ( v32->boneIndex == 255 )
        goto LABEL_107;
      if ( (v32->flags & 4) == 0 )
        break;
      if ( v32->properties->numCollisionShapes )
      {
        LODWORD(v138) = v32->properties->numCollisionShapes;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1131, ASSERT_TYPE_ASSERT, "( ( pb->properties->numCollisionShapes == 0 ) )", "( pb->properties->numCollisionShapes ) = %i", v138) )
          __debugbreak();
        goto LABEL_106;
      }
LABEL_107:
      v23 = v157;
      v30 = v151 + 1;
      modelInfo = v162;
      v151 = v30;
      if ( v30 >= v29 )
      {
        v14 = procBones;
        goto LABEL_109;
      }
    }
    _RDI = &v32->state.rotationQuat;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vxorps  xmm1, xmm0, xmm8
      vmovss  dword ptr [rbp+100h+quat], xmm1
      vmovss  xmm2, dword ptr [rdi+4]
      vxorps  xmm0, xmm2, xmm8
      vmovss  dword ptr [rbp+100h+quat+4], xmm0
      vmovss  xmm1, dword ptr [rdi+8]
      vxorps  xmm2, xmm1, xmm8
      vmovss  dword ptr [rbp+100h+quat+8], xmm2
      vmovss  xmm0, dword ptr [rdi+0Ch]
    }
    boxQuat = &v32->state.rotationQuat;
    __asm { vmovss  dword ptr [rbp+100h+quat+0Ch], xmm0 }
    QuatTransform(&v32->state.rotationQuat, &v32->jointOffset, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+100h+out]
      vaddss  xmm1, xmm0, dword ptr [r13+2Ch]
      vmovss  xmm2, dword ptr [rbp+100h+out+4]
      vmovss  dword ptr [rbp+100h+out], xmm1
      vaddss  xmm0, xmm2, dword ptr [r13+30h]
      vmovss  xmm1, dword ptr [rbp+100h+out+8]
      vmovss  dword ptr [rbp+100h+out+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [r13+34h]
      vmovss  dword ptr [rbp+100h+out+8], xmm2
    }
    properties = v32->properties;
    v48 = 0;
    v150 = 0;
    if ( !properties->numCollisionShapes )
    {
LABEL_106:
      v29 = v143;
      goto LABEL_107;
    }
    while ( 1 )
    {
      _RBX = &collisionShapes[v48 + properties->firstCollisionShapeIndex];
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 852, ASSERT_TYPE_ASSERT, "(srcShape != 0)", (const char *)&queryFormat, "srcShape != NULL") )
        __debugbreak();
      type = _RBX->type;
      if ( _RBX->type )
      {
        if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
        {
          QuatTrans_TransformPoint(_RDI, &out, &_RBX->u.sphere.center, &capsule.start);
          QuatTrans_TransformPoint(_RDI, &out, &_RBX->u.capsule.end, &capsule.end);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+1Ch]
            vmovss  [rbp+100h+capsule.radius], xmm0
          }
        }
        else if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_BOX )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx+4]
            vmovups xmmword ptr [rbp+100h+capsule.start], xmm0
            vmovsd  xmm1, qword ptr [rbx+14h]
            vmovsd  qword ptr [rbp+100h+capsule.end+4], xmm1
          }
        }
      }
      else
      {
        QuatTrans_TransformPoint(_RDI, &out, &_RBX->u.sphere.center, &capsule.start);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vmovss  dword ptr [rbp+100h+capsule.end], xmm0
        }
      }
      v54 = outContacts;
      if ( groundPlaneEnabled )
        break;
LABEL_63:
      v149 = 0;
      v94 = 0;
      if ( v21 )
      {
        v95 = procBones;
        v96 = 0i64;
        do
        {
          collidableBoneInfo = v95->collidableBoneInfo;
          v155 = collidableBoneInfo;
          if ( collidableBoneInfo[v96].boneIndex != 255 )
          {
            v98 = 0;
            v99 = &collidableBoneTransforms[v94];
            if ( collidableBoneInfo[v96].numCollisionShapes )
            {
              while ( 1 )
              {
                v100 = v98 + collidableBoneInfo[v96].firstCollisionShapeIndex;
                _RBX = &collidableBoneCollisionShapes[v100];
                if ( v100 >= v95->numCollidableBoneCollisionShapes )
                {
                  LODWORD(outPointB) = v95->numCollidableBoneCollisionShapes;
                  LODWORD(v138) = v98 + collidableBoneInfo[v96].firstCollisionShapeIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( collidableBoneInfo->firstCollisionShapeIndex + collisionShapeIndex ) < (unsigned)( procBones->numCollidableBoneCollisionShapes )", "collidableBoneInfo->firstCollisionShapeIndex + collisionShapeIndex doesn't index procBones->numCollidableBoneCollisionShapes\n\t%i not in [0, %i)", v138, outPointB) )
                    __debugbreak();
                }
                v102 = &v54[v17];
                if ( type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                {
                  switch ( _RBX->type )
                  {
                    case XANIM_COLLISION_SHAPE_TYPE_SPHERE:
                      v103 = XAnimBonePhysics_TestCapsuleSphere(&capsule, &_RBX->u.sphere, 0, &v102->pointA, &v102->pointB, &v102->normal);
                      goto LABEL_89;
                    case XANIM_COLLISION_SHAPE_TYPE_CAPSULE:
                      v103 = XAnimBonePhysics_TestCapsuleCapsule(&capsule, (const XAnimCapsuleCollisionShape *)&_RBX->u, v102, maxContacts - v17);
                      goto LABEL_89;
                    case XANIM_COLLISION_SHAPE_TYPE_BOX:
                      v103 = XAnimBonePhysics_TestCapsuleOrientedBox(&capsule, (const XAnimBoxCollisionShape *)&_RBX->u, &v99->quat, &v99->trans, 0, v102, maxContacts - v17);
LABEL_89:
                      LODWORD(v121) = v103;
                      if ( v103 > 0 )
                      {
                        v17 += v103;
                        if ( v17 > maxContacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1275, ASSERT_TYPE_ASSERT, "(numShapeContacts + numContacts <= maxContacts)", (const char *)&queryFormat, "numShapeContacts + numContacts <= maxContacts") )
                          __debugbreak();
                        v121 = (int)v121;
                        if ( (int)v121 > 0 )
                        {
                          _RDI = &v102->pointA.v[2];
                          do
                          {
                            v123 = v146;
                            if ( v146 > 0xFF )
                            {
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v146, "unsigned", v161) )
                                __debugbreak();
                              v123 = v146;
                            }
                            *((_BYTE *)_RDI - 12) = v123;
                            _R8 = _RDI - 2;
                            *((_BYTE *)_RDI - 11) = 0;
                            __asm
                            {
                              vmovss  xmm0, dword ptr [r8]
                              vmovss  xmm2, dword ptr [rdi-4]
                              vsubss  xmm1, xmm0, dword ptr [rax+2Ch]
                              vsubss  xmm0, xmm2, dword ptr [rax+30h]
                              vmovss  dword ptr [rbp+100h+var_C0], xmm1
                              vmovss  xmm1, dword ptr [rdi]
                              vsubss  xmm2, xmm1, dword ptr [rax+34h]
                              vmovss  dword ptr [rbp+100h+var_C0+8], xmm2
                              vmovss  dword ptr [rbp+100h+var_C0+4], xmm0
                            }
                            QuatTransform(&quat, &v169, (vec3_t *)(_RDI - 2));
                            _RDI += 10;
                            --v121;
                          }
                          while ( v121 );
                        }
                        if ( v17 >= maxContacts )
                          goto LABEL_112;
                      }
                      break;
                  }
                }
                else if ( type )
                {
                  if ( type == XANIM_COLLISION_SHAPE_TYPE_BOX )
                  {
                    if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_SPHERE )
                    {
                      v103 = XAnimBonePhysics_TestSphereOrientedBox(&_RBX->u.sphere, (const XAnimBoxCollisionShape *)&capsule, boxQuat, &out, 1, &v102->pointA, &v102->pointB, &v102->normal);
                      goto LABEL_89;
                    }
                    if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                    {
                      v103 = XAnimBonePhysics_TestCapsuleOrientedBox((const XAnimCapsuleCollisionShape *)&_RBX->u, (const XAnimBoxCollisionShape *)&capsule, boxQuat, &out, 1, v102, maxContacts - v17);
                      goto LABEL_89;
                    }
                  }
                }
                else if ( _RBX->type )
                {
                  if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                  {
                    v103 = XAnimBonePhysics_TestCapsuleSphere((const XAnimCapsuleCollisionShape *)&_RBX->u, (const XAnimSphereCollisionShape *)&capsule, 1, &v102->pointB, &v102->pointA, &v102->normal);
                    goto LABEL_89;
                  }
                  if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_BOX )
                  {
                    v103 = XAnimBonePhysics_TestSphereOrientedBox((const XAnimSphereCollisionShape *)&capsule, (const XAnimBoxCollisionShape *)&_RBX->u, &v99->quat, &v99->trans, 0, &v102->pointA, &v102->pointB, &v102->normal);
                    goto LABEL_89;
                  }
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+4]
                    vsubss  xmm4, xmm0, dword ptr [rbp+100h+capsule.start]
                    vmovss  xmm0, dword ptr [rbx+8]
                    vsubss  xmm5, xmm0, dword ptr [rbp+100h+capsule.start+4]
                    vmovss  xmm0, dword ptr [rbx+0Ch]
                    vsubss  xmm6, xmm0, dword ptr [rbp+100h+capsule.start+8]
                    vmulss  xmm0, xmm4, xmm4
                    vmulss  xmm1, xmm5, xmm5
                    vaddss  xmm2, xmm1, xmm0
                    vmovss  xmm0, dword ptr [rbx+10h]
                    vmulss  xmm1, xmm6, xmm6
                    vaddss  xmm7, xmm2, xmm1
                    vmovss  xmm1, dword ptr [rbp+100h+capsule.end]
                    vmulss  xmm3, xmm0, xmm0
                    vmulss  xmm2, xmm1, xmm1
                    vaddss  xmm0, xmm3, xmm2
                    vsubss  xmm3, xmm7, xmm0
                    vcomiss xmm3, xmm9
                  }
                }
                ++v98;
                v95 = procBones;
                v54 = outContacts;
                collidableBoneInfo = v155;
                if ( v98 >= v155[v96].numCollisionShapes )
                {
                  v94 = v149;
                  break;
                }
              }
            }
          }
          v54 = outContacts;
          ++v94;
          ++v96;
          v149 = v94;
        }
        while ( v94 < numCollidableBones );
        v31 = v146;
        v32 = v156;
        v21 = numCollidableBones;
      }
      _RDI = &v32->state.rotationQuat;
      properties = v32->properties;
      v48 = v150 + 1;
      v150 = v48;
      if ( v48 >= properties->numCollisionShapes )
        goto LABEL_106;
    }
    _RBX = &outContacts[v17];
    if ( type )
    {
      if ( type != XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
        goto LABEL_63;
      LODWORD(v56) = XAnimBonePhysics_TestCapsulePlane(&capsule, &outModelGroundPlane, &outContacts[v17], maxContacts - v17);
      if ( (int)v56 <= 0 )
        goto LABEL_62;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+100h+outModelGroundPlane+4]
        vmulss  xmm1, xmm0, dword ptr [rbp+100h+capsule.start+4]
        vmovss  xmm4, dword ptr [rbp+100h+outModelGroundPlane]
        vmulss  xmm2, xmm4, dword ptr [rbp+100h+capsule.start]
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm2, dword ptr [rbp+100h+outModelGroundPlane+8]
        vmulss  xmm0, xmm2, dword ptr [rbp+100h+capsule.start+8]
        vaddss  xmm1, xmm3, xmm0
        vsubss  xmm5, xmm1, dword ptr [rbp+100h+outModelGroundPlane+0Ch]
        vcomiss xmm5, dword ptr [rbp+100h+capsule.end]
        vxorps  xmm0, xmm4, xmm8
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  xmm1, dword ptr [rbp+100h+outModelGroundPlane+4]
        vxorps  xmm2, xmm1, xmm8
        vmovss  dword ptr [rbx+20h], xmm2
        vmovss  xmm0, dword ptr [rbp+100h+outModelGroundPlane+8]
        vxorps  xmm1, xmm0, xmm8
        vmovss  dword ptr [rbx+24h], xmm1
        vmovss  xmm2, dword ptr [rbp+100h+capsule.end]
        vxorps  xmm3, xmm2, xmm8
        vmulss  xmm1, xmm3, dword ptr [rbp+100h+outModelGroundPlane]
        vaddss  xmm2, xmm1, dword ptr [rbp+100h+capsule.start]
        vmovss  dword ptr [rbx+4], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+100h+outModelGroundPlane+4]
        vaddss  xmm2, xmm1, dword ptr [rbp+100h+capsule.start+4]
        vmovss  dword ptr [rbx+8], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+100h+outModelGroundPlane+8]
        vaddss  xmm2, xmm1, dword ptr [rbp+100h+capsule.start+8]
        vmovss  dword ptr [rbx+0Ch], xmm2
        vxorps  xmm3, xmm5, xmm8
        vmulss  xmm1, xmm3, dword ptr [rbp+100h+outModelGroundPlane]
        vaddss  xmm2, xmm1, dword ptr [rbp+100h+capsule.start]
        vmovss  dword ptr [rbx+10h], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+100h+outModelGroundPlane+4]
        vaddss  xmm2, xmm1, dword ptr [rbp+100h+capsule.start+4]
        vmovss  dword ptr [rbx+14h], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+100h+outModelGroundPlane+8]
        vaddss  xmm2, xmm1, dword ptr [rbp+100h+capsule.start+8]
        vmovss  dword ptr [rbx+18h], xmm2
      }
      LODWORD(v56) = 1;
    }
    v17 += v56;
    if ( v17 > maxContacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1174, ASSERT_TYPE_ASSERT, "(numShapeContacts + numContacts <= maxContacts)", (const char *)&queryFormat, "numShapeContacts + numContacts <= maxContacts") )
      __debugbreak();
    v56 = (int)v56;
    _RBX = &_RBX->pointA.v[2];
    do
    {
      *((_BYTE *)_RBX - 12) = truncate_cast<unsigned char,unsigned int>(v31);
      _R8 = _RBX - 2;
      *((_BYTE *)_RBX - 11) = 1;
      __asm
      {
        vmovss  xmm0, dword ptr [r8]
        vsubss  xmm1, xmm0, dword ptr [r13+2Ch]
        vmovss  xmm2, dword ptr [rbx-4]
        vsubss  xmm0, xmm2, dword ptr [r13+30h]
        vmovss  dword ptr [rbp+100h+in], xmm1
        vmovss  xmm1, dword ptr [rbx]
        vsubss  xmm2, xmm1, dword ptr [r13+34h]
        vmovss  dword ptr [rbp+100h+in+8], xmm2
        vmovss  dword ptr [rbp+100h+in+4], xmm0
      }
      QuatTransform(&quat, &in, (vec3_t *)(_RBX - 2));
      _RBX += 10;
      --v56;
    }
    while ( v56 );
    if ( v17 >= maxContacts )
      goto LABEL_112;
LABEL_62:
    v54 = outContacts;
    goto LABEL_63;
  }
  return 0i64;
}

/*
==============
XAnimBonePhysics_PreTransformCollidableBoneShapes
==============
*/
void XAnimBonePhysics_PreTransformCollidableBoneShapes(const DObjProceduralBones *procBones, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionShape *outShapes, unsigned int maxShapes)
{
  const DObjProceduralBones *v4; 
  __int64 v5; 
  unsigned int numModels; 
  const DObjAnimMat *v7; 
  unsigned int v8; 
  XAnimCollisionShape *v9; 
  __int64 v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  const vec4_t *p_quat; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 i; 
  __int64 v27; 
  char *v28; 
  XAnimCollisionShape *v31; 

  v31 = outShapes;
  v4 = procBones;
  v5 = maxShapes;
  numModels = procBones->numModels;
  v7 = collidableBoneTransforms;
  v22 = numModels;
  if ( v4->numCollidableBoneCollisionShapes >= maxShapes )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1000, ASSERT_TYPE_ASSERT, "(unsigned)( procBones->numCollidableBoneCollisionShapes ) < (unsigned)( maxShapes )", "procBones->numCollidableBoneCollisionShapes doesn't index maxShapes\n\t%i not in [0, %i)", v4->numCollidableBoneCollisionShapes, maxShapes) )
      __debugbreak();
    numModels = v22;
    v7 = collidableBoneTransforms;
    outShapes = v31;
  }
  if ( !v4->numCollidableBones )
    return;
  v8 = 0;
  v23 = 0;
  v9 = outShapes;
  if ( !numModels )
    return;
  v10 = 0i64;
  for ( i = 0i64; ; i += 32i64 )
  {
    v11 = (char *)v4->modelInfo + v10;
    v28 = v11;
    v12 = *((_QWORD *)v11 + 1);
    v27 = v12;
    if ( v12 )
    {
      v24 = *(_DWORD *)(v12 + 24);
      if ( v24 )
        break;
    }
LABEL_24:
    ++v8;
    v7 = collidableBoneTransforms;
    v10 = i + 32;
    v23 = v8;
    if ( v8 >= v22 )
      return;
  }
  v13 = *(_QWORD *)(v12 + 48);
  v14 = 0;
  v25 = v13;
  v15 = 0i64;
  while ( 1 )
  {
    v16 = v14 + (unsigned __int8)v11[22];
    if ( v4->collidableBoneInfo[v16].boneIndex != 255 )
      break;
LABEL_22:
    v13 = v25;
    ++v14;
    v12 = v27;
    v15 += 12i64;
    v11 = v28;
    v7 = collidableBoneTransforms;
    if ( v14 >= v24 )
    {
      v8 = v23;
      goto LABEL_24;
    }
  }
  v17 = *(_QWORD *)(v12 + 32);
  p_quat = &v7[(unsigned int)v16].quat;
  if ( (unsigned int)v16 >= v4->numCollidableBones )
  {
    LODWORD(v21) = v4->numCollidableBones;
    LODWORD(v20) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1033, ASSERT_TYPE_ASSERT, "(unsigned)( modelInfo->firstCollidableBoneIndex + modelCollidableBoneIndex ) < (unsigned)( procBones->numCollidableBones )", "modelInfo->firstCollidableBoneIndex + modelCollidableBoneIndex doesn't index procBones->numCollidableBones\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
    v13 = v25;
  }
  v19 = 0;
  if ( !*(_DWORD *)(v17 + v15 + 8) )
  {
LABEL_21:
    v4 = procBones;
    goto LABEL_22;
  }
  while ( 1 )
  {
    XAnimBonePhysics_TransformCollisionShape((const XAnimCollisionShape *)(v13 + 32i64 * (unsigned int)(v19 + *(_DWORD *)(v17 + v15 + 4))), p_quat, (const vec3_t *)&p_quat[1], v9++);
    if ( v9 - v31 >= v5 )
      break;
    v13 = v25;
    if ( (unsigned int)++v19 >= *(_DWORD *)(v17 + v15 + 8) )
    {
      v5 = maxShapes;
      goto LABEL_21;
    }
  }
}

/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj
==============
*/
void XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj(const DObj *dobj, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  unsigned int v12; 
  unsigned int numCollidableBones; 
  const DObjProceduralBones *v15; 
  bool v18; 
  __int64 v48; 
  unsigned __int16 boneIndex; 
  int v50; 
  DObjAnimMat *SkelBoneMatrix; 
  DObjAnimMat *v53; 
  bool v54; 
  bool v55; 
  __int64 v115; 
  vec3_t out; 
  vec4_t quat; 
  vec3_t in; 
  char v121; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  v12 = 0;
  numCollidableBones = maxTransforms;
  v15 = procBones;
  if ( procBones->numCollidableBones > maxTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 945, ASSERT_TYPE_ASSERT, "( 0 ) <= ( procBones->numCollidableBones ) && ( procBones->numCollidableBones ) <= ( maxTransforms )", "procBones->numCollidableBones not in [0, maxTransforms]\n\t%i not in [%i, %i]", procBones->numCollidableBones, 0i64, maxTransforms) )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 946, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !outTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 948, ASSERT_TYPE_ASSERT, "(outTransforms != 0)", (const char *)&queryFormat, "outTransforms != NULL") )
    __debugbreak();
  _RAX = DObjGetRotTransArray(dobj);
  v18 = v15->numCollidableBones == numCollidableBones;
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  if ( v15->numCollidableBones <= numCollidableBones )
    numCollidableBones = v15->numCollidableBones;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+10h]
    vmovss  xmm5, dword ptr [rax]
    vmovss  xmm7, dword ptr [rax+4]
    vmovss  xmm8, dword ptr [rax+8]
    vmovss  xmm9, dword ptr [rax+0Ch]
    vmovss  dword ptr [rsp+130h+in], xmm0
    vmovss  xmm1, dword ptr [rax+14h]
    vmovss  dword ptr [rsp+130h+in+4], xmm1
    vmovss  xmm0, dword ptr [rax+18h]
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  dword ptr [rsp+130h+in+8], xmm0
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vxorps  xmm12, xmm12, xmm12
    vucomiss xmm0, xmm12
  }
  if ( !v18 )
  {
    __asm
    {
      vdivss  xmm0, xmm11, xmm0
      vmulss  xmm5, xmm0, xmm5
      vmulss  xmm7, xmm0, xmm7
      vmulss  xmm8, xmm0, xmm8
      vmulss  xmm9, xmm9, xmm0
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm5, xmm6
    vmovss  dword ptr [rsp+130h+quat], xmm0
    vxorps  xmm0, xmm8, xmm6
    vxorps  xmm1, xmm7, xmm6
    vmovss  dword ptr [rsp+130h+quat+8], xmm0
    vmovss  dword ptr [rsp+130h+quat+4], xmm1
    vmovss  dword ptr [rsp+130h+quat+0Ch], xmm9
  }
  QuatTransform(&quat, &in, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+out]
    vmovss  xmm2, dword ptr [rsp+130h+out+4]
    vxorps  xmm1, xmm0, xmm6
    vxorps  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsp+130h+out], xmm1
    vmovss  xmm1, dword ptr [rsp+130h+out+8]
    vxorps  xmm2, xmm1, xmm6
    vmovss  dword ptr [rsp+130h+out+8], xmm2
    vmovss  dword ptr [rsp+130h+out+4], xmm0
  }
  if ( numCollidableBones )
  {
    _RDI = (vec3_t *)&outTransforms->quat.xyz.v[1];
    v48 = 0i64;
    __asm { vmovaps xmmword ptr [rsp+130h+var_98+8], xmm10 }
    do
    {
      boneIndex = v15->collidableBoneInfo[v48].boneIndex;
      if ( boneIndex != 255 )
      {
        v50 = boneIndex;
        if ( !DObjIsValidBoneIndex(dobj, boneIndex) )
        {
          LODWORD(v115) = v50;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 979, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, boneIndex ) ) )", "( boneIndex ) = %i", v115) )
            __debugbreak();
        }
        SkelBoneMatrix = DObjGetSkelBoneMatrix(dobj, v50);
        _RBX = (vec4_t *)&_RDI[-1].z;
        v53 = SkelBoneMatrix;
        if ( SkelBoneMatrix == (DObjAnimMat *)&_RDI[-1].z && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        v54 = &quat == _RBX;
        if ( &quat == _RBX )
        {
          v55 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out");
          v54 = !v55;
          if ( v55 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm5, dword ptr [rsp+130h+quat+4]
          vmovss  xmm7, dword ptr [rsp+130h+quat+0Ch]
          vmulss  xmm1, xmm7, dword ptr [rsi]
          vmovss  xmm6, dword ptr [rsp+130h+quat]
          vmulss  xmm0, xmm6, dword ptr [rsi+0Ch]
          vmovss  xmm4, dword ptr [rsp+130h+quat+8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm5, dword ptr [rsi+8]
          vmulss  xmm1, xmm4, dword ptr [rsi+4]
          vaddss  xmm2, xmm2, xmm0
          vsubss  xmm8, xmm2, xmm1
          vmovss  dword ptr [rbx], xmm8
          vmulss  xmm1, xmm7, dword ptr [rsi+4]
          vmulss  xmm0, xmm6, dword ptr [rsi+8]
          vsubss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rsi+0Ch]
          vmulss  xmm0, xmm4, dword ptr [rsi]
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm9, xmm3, xmm0
          vmovss  dword ptr [rdi], xmm9
          vmulss  xmm1, xmm6, dword ptr [rsi+4]
          vmulss  xmm0, xmm7, dword ptr [rsi+8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rsi]
          vmulss  xmm0, xmm4, dword ptr [rsi+0Ch]
          vsubss  xmm3, xmm2, xmm1
          vaddss  xmm10, xmm3, xmm0
          vmovss  dword ptr [rdi+4], xmm10
          vmulss  xmm1, xmm7, dword ptr [rsi+0Ch]
          vmulss  xmm0, xmm6, dword ptr [rsi]
          vsubss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rsi+4]
          vmulss  xmm0, xmm4, dword ptr [rsi+8]
          vsubss  xmm3, xmm2, xmm1
          vsubss  xmm5, xmm3, xmm0
          vmulss  xmm0, xmm8, xmm8
          vmulss  xmm1, xmm9, xmm9
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm10, xmm10
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vucomiss xmm1, xmm12
          vmovss  dword ptr [rdi+8], xmm5
        }
        if ( !v54 )
        {
          __asm
          {
            vdivss  xmm2, xmm11, xmm1
            vmulss  xmm0, xmm8, xmm2
            vmulss  xmm1, xmm9, xmm2
            vmovss  dword ptr [rbx], xmm0
            vmovss  dword ptr [rdi], xmm1
            vmulss  xmm0, xmm10, xmm2
            vmulss  xmm1, xmm5, xmm2
            vmovss  dword ptr [rdi+4], xmm0
            vmovss  dword ptr [rdi+8], xmm1
          }
        }
        QuatTransform(&quat, &v53->trans, _RDI + 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+130h+out]
          vaddss  xmm1, xmm0, dword ptr [rdi+0Ch]
          vmovss  xmm0, dword ptr [rsp+130h+out+4]
          vmovss  xmm2, dword ptr [rsp+130h+out+8]
        }
        v15 = procBones;
        __asm
        {
          vmovss  dword ptr [rdi+0Ch], xmm1
          vaddss  xmm1, xmm0, dword ptr [rdi+10h]
          vmovss  dword ptr [rdi+10h], xmm1
          vaddss  xmm0, xmm2, dword ptr [rdi+14h]
          vmovss  dword ptr [rdi+14h], xmm0
        }
      }
      ++v12;
      ++v48;
      _RDI = (vec3_t *)((char *)_RDI + 32);
    }
    while ( v12 < numCollidableBones );
    __asm { vmovaps xmm10, xmmword ptr [rsp+130h+var_98+8] }
  }
  _R11 = &v121;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-48h]
    vmovaps xmm9, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm12, xmmword ptr [r11-88h]
  }
}

/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams
==============
*/
void XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams(XAnimProcNodeCalcParams *params, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  unsigned int v14; 
  unsigned int numCollidableBones; 
  __int64 v22; 
  unsigned __int16 boneIndex; 
  int v25; 
  bool v29; 
  bool v30; 
  float4 *outModelTranslation; 
  vec4_t outInvQuat; 
  __int128 v99; 
  vec3_t trans; 
  vec3_t in; 
  vec3_t outInvTrans; 
  float4 outModelQuat; 
  float4 v104; 
  vec4_t quat; 
  float4 v106; 
  float4 v107; 

  v14 = 0;
  numCollidableBones = maxTransforms;
  if ( procBones->numCollidableBones > maxTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 885, ASSERT_TYPE_ASSERT, "( 0 ) <= ( procBones->numCollidableBones ) && ( procBones->numCollidableBones ) <= ( maxTransforms )", "procBones->numCollidableBones not in [0, maxTransforms]\n\t%i not in [%i, %i]", procBones->numCollidableBones, 0i64, maxTransforms) )
    __debugbreak();
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 886, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !outTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 888, ASSERT_TYPE_ASSERT, "(outTransforms != 0)", (const char *)&queryFormat, "outTransforms != NULL") )
    __debugbreak();
  if ( procBones->numCollidableBones <= numCollidableBones )
    numCollidableBones = procBones->numCollidableBones;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, 0, &outModelQuat, &v104);
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp+0D0h+var_130.v]
    vmovups xmm0, xmmword ptr [rbp+0D0h+outModelQuat.v]
    vmovss  dword ptr [rsp+1D0h+trans], xmm1
    vextractps dword ptr [rsp+1D0h+trans+4], xmm1, 1
    vextractps dword ptr [rsp+1D0h+trans+8], xmm1, 2
    vmovups xmmword ptr [rbp+0D0h+quat], xmm0
  }
  QuatTrans_Inverse(&quat, &trans, &outInvQuat, &outInvTrans);
  if ( numCollidableBones )
  {
    _RDI = &outTransforms->trans.v[2];
    __asm { vmovaps [rsp+1D0h+var_E0], xmm15 }
    v22 = 0i64;
    __asm
    {
      vmovss  xmm15, cs:__real@3f800000
      vmovaps [rsp+1D0h+var_50], xmm6
      vmovaps [rsp+1D0h+var_60], xmm7
      vmovaps [rsp+1D0h+var_70], xmm8
      vmovaps [rsp+1D0h+var_80], xmm9
      vmovaps [rsp+1D0h+var_90], xmm10
      vmovaps [rsp+1D0h+var_A0], xmm11
      vmovaps [rsp+1D0h+var_B0], xmm12
      vmovaps [rsp+1D0h+var_C0], xmm13
      vmovaps [rsp+1D0h+var_D0], xmm14
    }
    do
    {
      boneIndex = procBones->collidableBoneInfo[v22].boneIndex;
      if ( boneIndex != 255 )
      {
        v25 = boneIndex;
        if ( !DObjIsValidBoneIndex(params->obj, boneIndex) )
        {
          LODWORD(outModelTranslation) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 923, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( params->obj, boneIndex ) ) )", "( boneIndex ) = %i", outModelTranslation) )
            __debugbreak();
        }
        XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v25, &v106, &v107);
        __asm
        {
          vmovups xmm1, xmmword ptr [rbp+0D0h+var_100.v]
          vmovups xmm0, xmmword ptr [rbp+0D0h+var_110.v]
        }
        _RBX = (vec4_t *)(_RDI - 6);
        __asm
        {
          vmovss  dword ptr [rsp+1D0h+in], xmm1
          vextractps dword ptr [rsp+1D0h+in+4], xmm1, 1
          vextractps dword ptr [rsp+1D0h+in+8], xmm1, 2
          vmovups [rsp+1D0h+var_180], xmm0
        }
        if ( &v99 == (__int128 *)(_RDI - 6) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        v29 = &outInvQuat == _RBX;
        if ( &outInvQuat == _RBX )
        {
          v30 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out");
          v29 = !v30;
          if ( v30 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+1D0h+var_180+4]
          vmovss  xmm11, dword ptr [rsp+1D0h+outInvQuat]
          vmovss  xmm10, dword ptr [rsp+1D0h+var_180+0Ch]
          vmovss  xmm7, dword ptr [rsp+1D0h+outInvQuat+0Ch]
          vmovss  xmm8, dword ptr [rsp+1D0h+var_180]
          vmovss  xmm6, dword ptr [rsp+1D0h+outInvQuat+4]
          vmovss  xmm9, dword ptr [rsp+1D0h+var_180+8]
          vmovss  xmm5, dword ptr [rsp+1D0h+outInvQuat+8]
          vmulss  xmm1, xmm11, xmm10
          vmulss  xmm0, xmm7, xmm8
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm6, xmm9
          vaddss  xmm1, xmm2, xmm0
          vmulss  xmm0, xmm5, xmm4
          vsubss  xmm12, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm7
          vmulss  xmm0, xmm9, xmm11
          vsubss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm10
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm1, xmm4, xmm11
          vmulss  xmm0, xmm5, xmm8
          vaddss  xmm13, xmm3, xmm0
          vmulss  xmm0, xmm9, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm8
          vsubss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm10
          vaddss  xmm14, xmm3, xmm0
          vmulss  xmm0, xmm11, xmm8
          vmulss  xmm1, xmm10, xmm7
          vsubss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm6
          vsubss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm5, xmm9
          vsubss  xmm4, xmm3, xmm0
          vmulss  xmm0, xmm12, xmm12
          vmulss  xmm1, xmm13, xmm13
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm14, xmm14
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm1, xmm0
          vmovss  dword ptr [rbx], xmm12
          vmovss  dword ptr [rdi-14h], xmm13
          vmovss  dword ptr [rdi-10h], xmm14
          vmovss  dword ptr [rdi-0Ch], xmm4
        }
        if ( !v29 )
        {
          __asm
          {
            vdivss  xmm2, xmm15, xmm1
            vmulss  xmm0, xmm2, xmm12
            vmulss  xmm1, xmm2, xmm13
            vmovss  dword ptr [rbx], xmm0
            vmovss  dword ptr [rdi-14h], xmm1
            vmulss  xmm0, xmm2, xmm14
            vmulss  xmm1, xmm2, xmm4
            vmovss  dword ptr [rdi-10h], xmm0
            vmovss  dword ptr [rdi-0Ch], xmm1
          }
        }
        QuatTransform(&outInvQuat, &in, (vec3_t *)(_RDI - 2));
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+outInvTrans]
          vaddss  xmm1, xmm0, dword ptr [rdi-8]
          vmovss  xmm0, dword ptr [rbp+0D0h+outInvTrans+4]
          vmovss  xmm2, dword ptr [rbp+0D0h+outInvTrans+8]
          vmovss  dword ptr [rdi-8], xmm1
          vaddss  xmm1, xmm0, dword ptr [rdi-4]
          vmovss  dword ptr [rdi-4], xmm1
          vaddss  xmm0, xmm2, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
        }
      }
      ++v14;
      ++v22;
      _RDI += 8;
    }
    while ( v14 < numCollidableBones );
    __asm
    {
      vmovaps xmm15, [rsp+1D0h+var_E0]
      vmovaps xmm14, [rsp+1D0h+var_D0]
      vmovaps xmm13, [rsp+1D0h+var_C0]
      vmovaps xmm12, [rsp+1D0h+var_B0]
      vmovaps xmm11, [rsp+1D0h+var_A0]
      vmovaps xmm10, [rsp+1D0h+var_90]
      vmovaps xmm9, [rsp+1D0h+var_80]
      vmovaps xmm8, [rsp+1D0h+var_70]
      vmovaps xmm7, [rsp+1D0h+var_60]
      vmovaps xmm6, [rsp+1D0h+var_50]
    }
  }
}

/*
==============
XAnimBonePhysics_TestCapsuleAxisAlignedBoxAtOrigin
==============
*/
__int64 XAnimBonePhysics_TestCapsuleAxisAlignedBoxAtOrigin(const XAnimCapsuleCollisionShape *capsule, const vec3_t *boxExtents, XAnimCollisionContact *outContacts, const int maxContacts)
{
  int v74; 
  char v76; 
  unsigned int v78; 
  bool v80; 
  bool v81; 
  bool v82; 
  bool v84; 
  bool v85; 
  bool v87; 
  bool v88; 
  bool v90; 
  bool v91; 
  int v93; 
  bool v95; 
  bool v96; 
  __int64 result; 
  bool v121; 
  vec3_t *outContactPointSeg; 
  vec3_t *outContactPointSega; 
  vec3_t *outContactPointSegb; 
  vec3_t *outContactPointSegc; 
  vec3_t *outContactPointSegd; 
  vec3_t *outContactPointBox; 
  vec3_t *outContactPointBoxa; 
  vec3_t *outContactPointBoxb; 
  vec3_t *outContactPointBoxc; 
  vec3_t *outContactPointBoxd; 
  int v218; 
  vec3_t p; 
  vec3_t v228; 
  vec3_t segStart; 
  vec3_t v230; 
  vec3_t v231; 
  vec3_t v232; 
  vec3_t outNormal; 
  vec3_t v234; 
  vec3_t v235; 
  vec3_t segMidPoint; 
  vec3_t outFaceNormal; 
  vec3_t outContactPoint; 
  char v241; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  *(_QWORD *)v228.v = outContacts;
  _R15 = boxExtents;
  *(_QWORD *)segStart.v = capsule;
  if ( maxContacts <= 0 )
    goto LABEL_48;
  __asm
  {
    vmovss  xmm2, dword ptr [rdx]
    vminss  xmm0, xmm2, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm5, dword ptr [rdx+8]
    vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovss  xmm9, dword ptr [rcx+14h]
    vxorps  xmm1, xmm2, xmm13
    vmaxss  xmm8, xmm0, xmm1
    vminss  xmm0, xmm3, dword ptr [rcx+4]
    vxorps  xmm4, xmm3, xmm13
    vmaxss  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+220h+p+4], xmm0
    vminss  xmm0, xmm5, dword ptr [rcx+8]
    vxorps  xmm6, xmm5, xmm13
    vmaxss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsp+220h+p+8], xmm0
    vmovss  xmm11, dword ptr [rsp+220h+p+8]
    vminss  xmm0, xmm7, xmm2
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmaxss  xmm14, xmm0, xmm1
    vmovss  xmm1, dword ptr [rsp+220h+p+8]
    vandps  xmm1, xmm1, xmm2
    vmovss  [rbp+120h+var_120], xmm1
    vmovss  dword ptr [rsp+220h+p], xmm8
    vmovss  xmm8, dword ptr [rcx+10h]
    vminss  xmm0, xmm8, xmm3
    vmovss  xmm3, cs:__real@3f000000
    vmaxss  xmm15, xmm0, xmm4
    vandps  xmm1, xmm15, xmm2
    vmovss  [rbp+120h+var_104], xmm1
    vminss  xmm0, xmm9, xmm5
    vmovss  xmm5, dword ptr [rsp+220h+p]
    vmaxss  xmm4, xmm0, xmm6
    vmovss  xmm6, dword ptr [rsp+220h+p+4]
    vandps  xmm0, xmm5, xmm2
    vmovss  [rbp+120h+var_128], xmm0
    vandps  xmm0, xmm6, xmm2
    vmovss  [rbp+120h+var_124], xmm0
    vandps  xmm0, xmm14, xmm2
    vmovss  [rbp+120h+var_108], xmm0
    vandps  xmm0, xmm4, xmm2
    vmovss  [rbp+120h+var_100], xmm0
    vsubss  xmm2, xmm15, xmm6
    vsubss  xmm1, xmm14, xmm5
    vmulss  xmm0, xmm1, xmm3
    vaddss  xmm1, xmm0, xmm5
    vmulss  xmm0, xmm2, xmm3
    vsubss  xmm2, xmm4, dword ptr [rsp+220h+p+8]
    vmovss  dword ptr [rbp+120h+segMidPoint], xmm1
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm2, xmm3
    vsubss  xmm3, xmm11, dword ptr [rcx+8]
    vmovss  dword ptr [rbp+120h+segMidPoint+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rsp+220h+p+8]
    vsubss  xmm0, xmm5, dword ptr [rcx]
    vmovss  [rsp+220h+var_1D0], xmm0
    vmulss  xmm0, xmm0, xmm0
    vmovaps xmm10, xmm6
    vsubss  xmm2, xmm10, dword ptr [rcx+4]
    vmovss  [rsp+220h+var_1CC], xmm2
    vmulss  xmm2, xmm2, xmm2
    vmovss  [rsp+220h+var_1DC], xmm0
    vaddss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rbp+120h+segMidPoint+8], xmm1
    vsubss  xmm1, xmm15, xmm8
    vmovss  [rsp+220h+var_1C8], xmm3
    vmulss  xmm3, xmm3, xmm3
    vaddss  xmm6, xmm0, xmm3
    vmulss  xmm0, xmm1, xmm1
    vsubss  xmm12, xmm14, xmm7
    vsubss  xmm9, xmm4, xmm9
    vmovss  [rsp+220h+var_1C0], xmm1
    vmovss  [rsp+220h+var_1D8], xmm2
    vmovss  [rsp+220h+var_1C4], xmm0
    vmovss  dword ptr [rbp+120h+var_168], xmm14
    vmovss  dword ptr [rbp+120h+var_168+4], xmm15
    vmovss  dword ptr [rbp+120h+var_168+8], xmm4
    vmovss  [rsp+220h+var_1D4], xmm3
    vmulss  xmm1, xmm12, xmm12
    vmulss  xmm2, xmm9, xmm9
  }
  v74 = 0;
  __asm { vaddss  xmm0, xmm1, xmm0 }
  v76 = 0;
  v218 = 0;
  __asm { vaddss  xmm7, xmm0, xmm2 }
  v78 = 0;
  _RSI = 0i64;
  v80 = 1;
  v81 = 0;
  do
  {
    if ( !v80 )
    {
      LODWORD(outContactPointBox) = 3;
      LODWORD(outContactPointSeg) = v78;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
        __debugbreak();
      LODWORD(outContactPointBoxa) = 3;
      LODWORD(outContactPointSega) = v78;
      v82 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSega, outContactPointBoxa);
      v81 = !v82;
      if ( v82 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rsi+120h+var_168]
      vucomiss xmm0, dword ptr [rsp+rsi+220h+p]
    }
    if ( v81 )
    {
      v84 = v78 == 3;
      if ( v78 >= 3 )
      {
        LODWORD(outContactPointBox) = 3;
        LODWORD(outContactPointSeg) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
          __debugbreak();
        LODWORD(outContactPointBoxb) = 3;
        LODWORD(outContactPointSegb) = v78;
        v85 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSegb, outContactPointBoxb);
        v84 = !v85;
        if ( v85 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rsi]
        vucomiss xmm0, [rbp+rsi+120h+var_128]
      }
      if ( v84 )
        v76 = 1;
    }
    v87 = v78 == 3;
    if ( v78 >= 3 )
    {
      LODWORD(outContactPointBox) = 3;
      LODWORD(outContactPointSeg) = v78;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
        __debugbreak();
      LODWORD(outContactPointBoxc) = 3;
      LODWORD(outContactPointSegc) = v78;
      v88 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSegc, outContactPointBoxc);
      v87 = !v88;
      if ( v88 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rsi]
      vucomiss xmm0, [rbp+rsi+120h+var_128]
    }
    if ( v87 )
      ++v74;
    v90 = v78 == 3;
    if ( v78 >= 3 )
    {
      LODWORD(outContactPointBox) = 3;
      LODWORD(outContactPointSeg) = v78;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
        __debugbreak();
      LODWORD(outContactPointBoxd) = 3;
      LODWORD(outContactPointSegd) = v78;
      v91 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSegd, outContactPointBoxd);
      v90 = !v91;
      if ( v91 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rsi]
      vucomiss xmm0, [rbp+rsi+120h+var_108]
    }
    v93 = v218;
    if ( v90 )
      v93 = ++v218;
    ++v78;
    _RSI += 4i64;
    v80 = v78 < 3;
    v81 = v78 == 3;
  }
  while ( (int)v78 < 3 );
  _R13 = *(const vec3_t **)segStart.v;
  v95 = 0;
  v96 = v76 == 0;
  _RBX = *(_QWORD *)v228.v;
  if ( !v96 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+18h]
      vmulss  xmm2, xmm0, xmm0
      vminss  xmm1, xmm7, xmm6
      vcomiss xmm1, xmm2
    }
    if ( v96 )
    {
      __asm
      {
        vcomiss xmm6, xmm2
        vcomiss xmm6, xmm7
        vmovss  xmm8, dword ptr [rbp+120h+var_168+8]
        vmovss  dword ptr [rbx+10h], xmm14
        vmovss  dword ptr [rbx+14h], xmm15
        vmovss  dword ptr [rbx+18h], xmm8
        vmulss  xmm0, xmm12, xmm12
        vaddss  xmm0, xmm0, [rsp+220h+var_1C4]
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm1, xmm0, xmm1
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm2, [rsp+220h+var_1C0]
        vmovss  dword ptr [rbx+20h], xmm0
        vmulss  xmm3, xmm12, xmm2
        vmovss  dword ptr [rbx+1Ch], xmm3
        vmulss  xmm1, xmm2, xmm9
        vmovss  dword ptr [rbx+24h], xmm1
        vmovss  xmm2, dword ptr [r13+18h]
        vmulss  xmm0, xmm2, xmm3
        vaddss  xmm1, xmm0, dword ptr [r13+0Ch]
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+20h]
        vaddss  xmm1, xmm0, dword ptr [r13+10h]
        vmovss  dword ptr [rbx+8], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+24h]
        vaddss  xmm1, xmm0, dword ptr [r13+14h]
        vmovss  dword ptr [rbx+0Ch], xmm1
      }
      result = 1i64;
      goto LABEL_49;
    }
    v95 = v93 == 0;
    if ( v93 == 1 )
    {
      v95 = v74 == 0;
      if ( v74 == 1 )
      {
LABEL_48:
        result = 0i64;
        goto LABEL_49;
      }
    }
  }
  __asm { vcomiss xmm6, cs:__real@3a83126f }
  v121 = v95;
  __asm { vcomiss xmm7, cs:__real@3a83126f }
  if ( v95 )
  {
    *(float *)&_XMM0 = FindNearestPointOnAlignedBoxFace(&p, _R15, &v228, &segStart);
    __asm { vmovaps xmm6, xmm0 }
    *(float *)&_XMM0 = FindNearestPointOnAlignedBoxFace(&v232, _R15, &v230, &v231);
    __asm { vmovaps xmm4, xmm0 }
    if ( v121 )
    {
      __asm
      {
        vcomiss xmm6, xmm0
        vmovss  xmm0, dword ptr [rsp+220h+var_1A8]
        vmovss  xmm1, dword ptr [rsp+220h+var_1A8+4]
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  xmm0, dword ptr [rbp+120h+var_1A8+8]
        vmovss  dword ptr [rbx+20h], xmm1
        vmovss  xmm1, dword ptr [rbp+120h+segStart]
        vmovss  dword ptr [rbx+24h], xmm0
        vmovss  xmm0, dword ptr [rbp+120h+segStart+4]
        vmovss  dword ptr [rbx+10h], xmm1
        vmovss  xmm1, [rbp+120h+var_190]
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm15, dword ptr [rbp+120h+segStart+4]
        vsubss  xmm1, xmm14, dword ptr [rbp+120h+segStart]
        vmovss  xmm5, dword ptr [rsp+220h+var_1A8+4]
        vmovss  xmm7, dword ptr [rsp+220h+var_1A8]
        vmovss  xmm8, dword ptr [rbp+120h+var_168+8]
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm0, xmm1, xmm7
        vmovss  xmm1, dword ptr [rbp+120h+var_1A8+8]
        vaddss  xmm3, xmm2, xmm0
        vsubss  xmm2, xmm8, [rbp+120h+var_190]
        vmulss  xmm0, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
        vcomiss xmm6, xmm4
        vmovss  xmm0, dword ptr [rbp+120h+var_188]
        vmovss  xmm1, dword ptr [rbp+120h+var_188+4]
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  xmm0, dword ptr [rbp+120h+var_188+8]
        vmovss  dword ptr [rbx+20h], xmm1
        vmovss  xmm1, dword ptr [rbp+120h+var_178]
        vmovss  dword ptr [rbx+24h], xmm0
        vmovss  xmm0, dword ptr [rbp+120h+var_178+4]
        vmovss  dword ptr [rbx+10h], xmm1
        vmovss  xmm1, dword ptr [rbp+120h+var_178+8]
        vmovaps xmm6, xmm4
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+18h], xmm1
      vmovss  dword ptr [rbx+14h], xmm0
      vaddss  xmm2, xmm6, dword ptr [r13+18h]
      vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+10h]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+20h]
      vaddss  xmm1, xmm0, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+8], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+24h]
      vaddss  xmm1, xmm0, dword ptr [rbx+18h]
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
    result = 1i64;
  }
  else
  {
    *(float *)&_XMM0 = FindNearestPointSegmentAlignedBoxEdge(*(const vec3_t **)segStart.v, (const vec3_t *)(*(_QWORD *)segStart.v + 12i64), &segMidPoint, _R15, &outNormal, &v234, &v235);
    __asm { vmovaps xmm6, xmm0 }
    if ( TestSegmentAlignedBoxAtOrigin(_R13, _R13 + 1, _R15) )
    {
      *(float *)&_XMM0 = FindNearestPointOnAlignedBoxFace(&segMidPoint, _R15, &outFaceNormal, &outContactPoint);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm3, xmm0
      }
      if ( v80 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+120h+outFaceNormal]
          vmovss  xmm2, dword ptr [rbp+120h+outFaceNormal+4]
          vmovss  xmm0, dword ptr [rbp+120h+outContactPoint]
          vmovss  dword ptr [rbx+1Ch], xmm1
          vmovss  xmm1, dword ptr [rbp+120h+outFaceNormal+8]
          vmovss  dword ptr [rbx+24h], xmm1
          vmovss  xmm1, dword ptr [rbp+120h+outContactPoint+4]
          vmovss  dword ptr [rbx+20h], xmm2
          vmovss  dword ptr [rbx+10h], xmm0
          vmovss  xmm0, dword ptr [rbp+120h+outContactPoint+8]
          vmovss  dword ptr [rbx+18h], xmm0
          vmovss  dword ptr [rbx+14h], xmm1
          vaddss  xmm2, xmm3, dword ptr [r13+18h]
          vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+10h]
          vmovss  dword ptr [rbx+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+20h]
          vaddss  xmm1, xmm0, dword ptr [rbx+14h]
          vmovss  dword ptr [rbx+8], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+24h]
          vaddss  xmm1, xmm0, dword ptr [rbx+18h]
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+120h+outNormal]
          vmovss  xmm2, dword ptr [rbp+120h+outNormal+4]
          vxorps  xmm1, xmm0, xmm13
          vmovss  dword ptr [rbx+1Ch], xmm1
          vmovss  xmm1, dword ptr [rbp+120h+outNormal+8]
          vxorps  xmm0, xmm2, xmm13
          vmovss  dword ptr [rbx+20h], xmm0
          vmovss  xmm0, dword ptr [rbp+120h+var_138]
          vxorps  xmm2, xmm1, xmm13
          vmovss  xmm1, dword ptr [rbp+120h+var_138+4]
          vmovss  dword ptr [rbx+24h], xmm2
          vmovss  dword ptr [rbx+14h], xmm1
          vmovss  dword ptr [rbx+10h], xmm0
          vmovss  xmm0, dword ptr [rbp+120h+var_138+8]
          vmovss  dword ptr [rbx+18h], xmm0
          vmovss  xmm2, dword ptr [r13+18h]
          vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
          vaddss  xmm1, xmm0, dword ptr [rbp+120h+var_148]
          vmovss  dword ptr [rbx+4], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+20h]
          vaddss  xmm1, xmm0, dword ptr [rbp+120h+var_148+4]
          vmovss  dword ptr [rbx+8], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+24h]
          vaddss  xmm1, xmm0, dword ptr [rbp+120h+var_148+8]
          vmovss  dword ptr [rbx+0Ch], xmm1
        }
      }
      result = 1i64;
    }
    else
    {
      __asm
      {
        vcomiss xmm6, dword ptr [r13+18h]
        vmovss  xmm0, dword ptr [rbp+120h+outNormal]
        vmovss  xmm2, dword ptr [rbp+120h+outNormal+4]
        vmovss  xmm4, dword ptr [rbp+120h+outNormal+8]
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  dword ptr [rbx+20h], xmm2
        vmovss  dword ptr [rbx+24h], xmm4
        vmovss  xmm3, dword ptr [r13+18h]
        vmulss  xmm0, xmm0, xmm3
        vaddss  xmm1, xmm0, dword ptr [rbp+120h+var_148]
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm2, xmm2, xmm3
        vaddss  xmm0, xmm2, dword ptr [rbp+120h+var_148+4]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm0, dword ptr [rbp+120h+var_138]
        vmulss  xmm1, xmm4, xmm3
        vaddss  xmm2, xmm1, dword ptr [rbp+120h+var_148+8]
        vmovss  xmm1, dword ptr [rbp+120h+var_138+4]
        vmovss  dword ptr [rbx+0Ch], xmm2
        vmovss  dword ptr [rbx+10h], xmm0
        vmovss  xmm0, dword ptr [rbp+120h+var_138+8]
        vmovss  dword ptr [rbx+18h], xmm0
        vmovss  dword ptr [rbx+14h], xmm1
      }
      result = 1i64;
    }
  }
LABEL_49:
  _R11 = &v241;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
XAnimBonePhysics_TestCapsuleCapsule
==============
*/
__int64 XAnimBonePhysics_TestCapsuleCapsule(const XAnimCapsuleCollisionShape *capsuleA, const XAnimCapsuleCollisionShape *capsuleB, XAnimCollisionContact *outContacts, const int maxContacts)
{
  char v70; 
  char v71; 
  __int64 result; 
  float t0; 
  float t1[9]; 
  vec3_t v188; 
  vec3_t pointOut; 
  vec3_t segHalfDir; 
  vec3_t segMidPoint; 
  char v192; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBX = outContacts;
  _R14 = capsuleB;
  _RDI = capsuleA;
  if ( maxContacts <= 0 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm9, dword ptr [rcx+10h]
    vmovss  xmm8, dword ptr [rcx+4]
    vmovss  xmm11, dword ptr [rcx+14h]
    vmovss  xmm10, dword ptr [rcx+8]
  }
  _R9 = &capsuleB->end;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vsubss  xmm12, xmm0, dword ptr [rdx]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm14, xmm0, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [r9+4]
    vsubss  xmm13, xmm1, dword ptr [rdx+4]
    vmovss  [rsp+160h+var_124], xmm14
    vmovss  [rsp+160h+var_128], xmm13
  }
  ClosestPointsTwoSegs(&capsuleA->start, &capsuleA->end, &capsuleB->start, &capsuleB->end, &t0, t1);
  __asm
  {
    vmovss  xmm2, [rsp+160h+var_130]
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm5, dword ptr [r14+4]
    vsubss  xmm1, xmm9, xmm8
    vsubss  xmm0, xmm7, xmm6
    vmovss  xmm6, dword ptr [r14+8]
    vmulss  xmm0, xmm0, xmm2
    vaddss  xmm3, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm1, xmm2
    vaddss  xmm7, xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm11, xmm10
    vmulss  xmm0, xmm1, xmm2
    vaddss  xmm2, xmm0, dword ptr [rdi+8]
    vmovss  xmm1, [rsp+160h+var_12C]
    vmulss  xmm0, xmm12, xmm1
    vaddss  xmm8, xmm0, xmm4
    vmulss  xmm0, xmm13, xmm1
    vaddss  xmm9, xmm0, xmm5
    vmulss  xmm0, xmm14, xmm1
    vaddss  xmm0, xmm0, xmm6
    vsubss  xmm15, xmm0, xmm2
    vsubss  xmm13, xmm8, xmm3
    vmovss  [rsp+160h+var_10C], xmm0
    vmovss  xmm0, dword ptr [rdi+18h]
    vaddss  xmm1, xmm0, dword ptr [r14+18h]
    vsubss  xmm14, xmm9, xmm7
    vmovss  [rsp+160h+var_118], xmm2
    vmulss  xmm0, xmm13, xmm13
    vmovss  [rsp+160h+var_110], xmm9
    vmulss  xmm9, xmm1, xmm1
    vmulss  xmm2, xmm14, xmm14
    vmovss  [rsp+160h+var_120], xmm3
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm15, xmm15
    vmovss  [rsp+160h+var_114], xmm8
    vaddss  xmm8, xmm3, xmm1
    vcomiss xmm8, xmm9
    vmovss  [rsp+160h+var_11C], xmm7
  }
  if ( v70 | v71 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f000000
      vmulss  xmm2, xmm0, [rsp+160h+var_128]
      vmulss  xmm3, xmm0, [rsp+160h+var_124]
      vmulss  xmm1, xmm12, xmm0
      vaddss  xmm0, xmm1, xmm4
      vmovss  dword ptr [rbp+60h+segMidPoint], xmm0
      vmovss  dword ptr [rsp+160h+segHalfDir], xmm1
      vaddss  xmm0, xmm3, xmm6
      vaddss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rbp+60h+segMidPoint+8], xmm0
      vmovss  dword ptr [rsp+160h+segHalfDir+4], xmm2
      vmovss  dword ptr [rbp+60h+segHalfDir+8], xmm3
      vmovss  dword ptr [rbp+60h+segMidPoint+4], xmm1
    }
    SegmentPointClosestToPoint(&_RDI->start, &segMidPoint, &segHalfDir, &pointOut);
    SegmentPointClosestToPoint(&_RDI->end, &segMidPoint, &segHalfDir, &v188);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+pointOut]
      vsubss  xmm10, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rsp+160h+pointOut+4]
      vsubss  xmm11, xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rsp+160h+pointOut+8]
      vsubss  xmm12, xmm0, dword ptr [rdi+8]
      vmovss  xmm1, dword ptr [rsp+160h+var_108]
      vmovss  xmm0, dword ptr [rsp+160h+var_108+4]
      vsubss  xmm4, xmm1, dword ptr [rdi+0Ch]
      vmovss  xmm1, dword ptr [rsp+160h+var_108+8]
      vsubss  xmm6, xmm0, dword ptr [rdi+10h]
      vsubss  xmm7, xmm1, dword ptr [rdi+14h]
      vmulss  xmm0, xmm10, xmm10
      vmulss  xmm2, xmm11, xmm11
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm12, xmm12
      vaddss  xmm5, xmm3, xmm1
      vcomiss xmm5, xmm9
    }
    if ( !(v70 | v71) )
      goto LABEL_10;
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm9
    }
    if ( v70 | v71 )
    {
      __asm
      {
        vmovss  xmm8, cs:__real@3a83126f
        vcomiss xmm5, xmm8
        vmovss  xmm9, cs:__real@80000000
        vmovss  xmm3, cs:__real@3f800000
        vxorps  xmm4, xmm4, xmm4
      }
      if ( v70 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm2, xmm2, xmm2
          vmovaps xmm1, xmm3
        }
      }
      else
      {
        __asm
        {
          vsqrtss xmm1, xmm5, xmm5
          vcmpless xmm0, xmm1, xmm9
          vblendvps xmm0, xmm1, xmm3, xmm0
          vdivss  xmm1, xmm3, xmm0
          vmulss  xmm0, xmm12, xmm1
          vmulss  xmm2, xmm1, xmm11
          vmulss  xmm1, xmm1, xmm10
        }
      }
      __asm
      {
        vmovss  dword ptr [rbx+1Ch], xmm1
        vmovss  dword ptr [rbx+20h], xmm2
        vmovss  dword ptr [rbx+24h], xmm0
        vmovss  xmm2, dword ptr [rdi+18h]
        vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+20h]
        vaddss  xmm1, xmm0, dword ptr [rdi+4]
        vmovss  dword ptr [rbx+8], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+24h]
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rbx+0Ch], xmm1
        vmovss  xmm0, dword ptr [r14+18h]
        vxorps  xmm2, xmm0, xmm10
        vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
        vaddss  xmm1, xmm0, dword ptr [rsp+160h+pointOut]
        vmovss  dword ptr [rbx+10h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+20h]
        vaddss  xmm1, xmm0, dword ptr [rsp+160h+pointOut+4]
        vmovss  dword ptr [rbx+14h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+24h]
        vaddss  xmm1, xmm0, dword ptr [rsp+160h+pointOut+8]
      }
      result = 1i64;
      __asm { vmovss  dword ptr [rbx+18h], xmm1 }
      if ( maxContacts > 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+160h+var_108]
          vsubss  xmm5, xmm0, dword ptr [rdi+0Ch]
          vmovss  xmm1, dword ptr [rsp+160h+var_108+4]
          vmovss  xmm0, dword ptr [rsp+160h+var_108+8]
          vsubss  xmm7, xmm0, dword ptr [rdi+14h]
          vsubss  xmm6, xmm1, dword ptr [rdi+10h]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, xmm8
          vsqrtss xmm1, xmm0, xmm0
          vcmpless xmm0, xmm1, xmm9
          vblendvps xmm0, xmm1, xmm3, xmm0
          vdivss  xmm1, xmm3, xmm0
          vmulss  xmm4, xmm1, xmm7
          vmulss  xmm0, xmm6, xmm1
          vmulss  xmm3, xmm5, xmm1
          vmovss  dword ptr [rbx+44h], xmm3
          vmovss  dword ptr [rbx+48h], xmm0
          vmovss  dword ptr [rbx+4Ch], xmm4
          vmovss  xmm2, dword ptr [rdi+18h]
          vmulss  xmm0, xmm2, dword ptr [rbx+44h]
          vaddss  xmm1, xmm0, dword ptr [rdi+0Ch]
          vmovss  dword ptr [rbx+2Ch], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+48h]
          vaddss  xmm1, xmm0, dword ptr [rdi+10h]
          vmovss  dword ptr [rbx+30h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbx+4Ch]
          vaddss  xmm1, xmm0, dword ptr [rdi+14h]
          vmovss  dword ptr [rbx+34h], xmm1
          vmovss  xmm0, dword ptr [r14+18h]
          vxorps  xmm2, xmm0, xmm10
          vmulss  xmm1, xmm2, dword ptr [rbx+44h]
          vaddss  xmm0, xmm1, dword ptr [rsp+160h+var_108]
          vmovss  dword ptr [rbx+38h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbx+48h]
          vaddss  xmm0, xmm1, dword ptr [rsp+160h+var_108+4]
          vmovss  dword ptr [rbx+3Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbx+4Ch]
          vaddss  xmm0, xmm1, dword ptr [rsp+160h+var_108+8]
          vmovss  dword ptr [rbx+40h], xmm0
        }
        result = 2i64;
      }
    }
    else
    {
LABEL_10:
      __asm
      {
        vcomiss xmm8, cs:__real@3a83126f
        vmovss  xmm1, cs:__real@3f800000
      }
      if ( v70 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm2, xmm2, xmm2
        }
      }
      else
      {
        __asm
        {
          vsqrtss xmm2, xmm8, xmm8
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm1, xmm0
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm0, xmm1, xmm15
          vmulss  xmm2, xmm1, xmm14
          vmulss  xmm1, xmm1, xmm13
        }
      }
      __asm
      {
        vmovss  dword ptr [rbx+1Ch], xmm1
        vmovss  dword ptr [rbx+20h], xmm2
        vmovss  dword ptr [rbx+24h], xmm0
        vmovss  xmm2, dword ptr [rdi+18h]
        vmulss  xmm0, xmm2, dword ptr [rbx+1Ch]
        vaddss  xmm1, xmm0, [rsp+160h+var_120]
        vmovss  dword ptr [rbx+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+20h]
        vaddss  xmm1, xmm0, [rsp+160h+var_11C]
        vmovss  dword ptr [rbx+8], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+24h]
        vaddss  xmm1, xmm0, [rsp+160h+var_118]
        vmovss  dword ptr [rbx+0Ch], xmm1
        vmovss  xmm0, dword ptr [r14+18h]
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm3, dword ptr [rbx+1Ch]
        vaddss  xmm2, xmm1, [rsp+160h+var_114]
        vmovss  dword ptr [rbx+10h], xmm2
        vmulss  xmm0, xmm3, dword ptr [rbx+20h]
        vaddss  xmm1, xmm0, [rsp+160h+var_110]
        vmovss  dword ptr [rbx+14h], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbx+24h]
        vaddss  xmm1, xmm0, [rsp+160h+var_10C]
        vmovss  dword ptr [rbx+18h], xmm1
      }
      result = 1i64;
    }
  }
  else
  {
LABEL_14:
    result = 0i64;
  }
  _R11 = &v192;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
XAnimBonePhysics_TestCapsuleOrientedBox
==============
*/
__int64 XAnimBonePhysics_TestCapsuleOrientedBox(const XAnimCapsuleCollisionShape *capsule, const XAnimBoxCollisionShape *box, const vec4_t *boxQuat, const vec3_t *boxTrans, bool flipNormalSign, XAnimCollisionContact *outContacts, const int maxContacts)
{
  const XAnimCapsuleCollisionShape *v10; 
  int v13; 
  vec3_t *p_extents; 
  int v15; 
  int v16; 
  __int64 v17; 
  vec3_t outTransformedPoint; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  XAnimCapsuleCollisionShape v30; 
  XAnimCollisionContact v31[2]; 

  v10 = capsule;
  if ( maxContacts <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+18h]
    vmovss  [rsp+128h+var_C0], xmm0
  }
  QuatTrans_TransformPoint(boxQuat, boxTrans, &box->center, &outTransformedPoint);
  QuatTrans_Inverse(boxQuat, &outTransformedPoint, &outInvQuat, &outInvTrans);
  QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, &v10->start, &v30.start);
  QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, &v10->end, &v30.end);
  v13 = 2;
  p_extents = &box->extents;
  if ( maxContacts < 2 )
    v13 = maxContacts;
  v15 = 0;
  v16 = XAnimBonePhysics_TestCapsuleAxisAlignedBoxAtOrigin(&v30, p_extents, v31, v13);
  v17 = v16;
  if ( v16 > 0 )
  {
    _RDI = &outContacts->normal.v[2];
    __asm
    {
      vmovaps [rsp+128h+var_58], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
    {
      QuatTrans_TransformPoint(boxQuat, &outTransformedPoint, &v31[v15].pointA, &outContacts[v15].pointA);
      QuatTrans_TransformPoint(boxQuat, &outTransformedPoint, &v31[v15].pointB, &outContacts[v15].pointB);
      QuatTransform(boxQuat, &v31[v15].normal, &outContacts[v15].normal);
      if ( flipNormalSign )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi-8]
          vxorps  xmm1, xmm0, xmm6
          vmovss  dword ptr [rdi-8], xmm1
          vmovss  xmm0, dword ptr [rdi-4]
          vxorps  xmm1, xmm0, xmm6
          vmovss  dword ptr [rdi-4], xmm1
          vmovss  xmm2, dword ptr [rdi]
          vxorps  xmm0, xmm2, xmm6
          vmovss  dword ptr [rdi], xmm0
        }
      }
      ++v15;
      _RDI += 10;
      --v17;
    }
    while ( v17 );
    __asm { vmovaps xmm6, [rsp+128h+var_58] }
  }
  return (unsigned int)v16;
}

/*
==============
XAnimBonePhysics_TestCapsulePlane
==============
*/
__int64 XAnimBonePhysics_TestCapsulePlane(const XAnimCapsuleCollisionShape *capsule, const vec4_t *planeNormalDistance, XAnimCollisionContact *outContacts, int maxContacts)
{
  __int64 result; 

  _R10 = capsule;
  if ( maxContacts <= 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+4]
    vmulss  xmm0, xmm3, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rdx+8]
    vmovaps [rsp+28h+var_18], xmm6
    vmovaps [rsp+28h+var_28], xmm7
    vmovss  xmm7, dword ptr [rdx]
    vmulss  xmm1, xmm7, dword ptr [rcx]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rcx+8]
    vmulss  xmm0, xmm7, dword ptr [rcx+0Ch]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [rcx+10h]
    vsubss  xmm6, xmm2, dword ptr [rdx+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rcx+14h]
    vaddss  xmm0, xmm2, xmm1
    vsubss  xmm5, xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm0, dword ptr [rcx+18h]
    vcomiss xmm0, xmm6
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm5
    vcomiss xmm5, xmm1
    vcomiss xmm6, xmm1
    vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm7, xmm4
    vmovss  dword ptr [r8+1Ch], xmm0
    vmovss  xmm1, dword ptr [rdx+4]
    vxorps  xmm2, xmm1, xmm4
    vmovss  dword ptr [r8+20h], xmm2
    vmovss  xmm0, dword ptr [rdx+8]
    vxorps  xmm1, xmm0, xmm4
    vmovss  dword ptr [r8+24h], xmm1
    vmovss  xmm0, dword ptr [rdx]
    vxorps  xmm1, xmm0, xmm4
    vmovss  dword ptr [r8+1Ch], xmm1
    vmovss  xmm2, dword ptr [rdx+4]
    vxorps  xmm0, xmm2, xmm4
    vmovss  dword ptr [r8+20h], xmm0
    vmovss  xmm1, dword ptr [rdx+8]
    vxorps  xmm2, xmm1, xmm4
    vmovss  dword ptr [r8+24h], xmm2
    vmovss  xmm0, dword ptr [r10+18h]
    vxorps  xmm3, xmm0, xmm4
    vmulss  xmm1, xmm3, dword ptr [rdx]
    vaddss  xmm0, xmm1, dword ptr [r10]
    vmovss  dword ptr [r8+4], xmm0
    vmulss  xmm2, xmm3, dword ptr [rdx+4]
    vaddss  xmm1, xmm2, dword ptr [r10+4]
    vmovss  dword ptr [r8+8], xmm1
    vmulss  xmm0, xmm3, dword ptr [rdx+8]
    vaddss  xmm1, xmm0, dword ptr [r10+8]
    vmovss  dword ptr [r8+0Ch], xmm1
    vxorps  xmm3, xmm6, xmm4
    vmulss  xmm0, xmm3, dword ptr [rdx]
    vaddss  xmm1, xmm0, dword ptr [r10]
    vmovss  dword ptr [r8+10h], xmm1
    vmulss  xmm2, xmm3, dword ptr [rdx+4]
    vaddss  xmm0, xmm2, dword ptr [r10+4]
    vmovss  dword ptr [r8+14h], xmm0
    vmulss  xmm1, xmm3, dword ptr [rdx+8]
    vaddss  xmm0, xmm1, dword ptr [r10+8]
    vmovss  dword ptr [r8+18h], xmm0
  }
  if ( maxContacts == 1 )
  {
    __asm { vmovaps xmm6, [rsp+28h+var_18] }
    result = 1i64;
    __asm { vmovaps xmm7, [rsp+28h+var_28] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovaps xmm6, [rsp+28h+var_18]
    }
    result = 2i64;
    __asm
    {
      vmovaps xmm7, [rsp+28h+var_28]
      vxorps  xmm1, xmm0, xmm4
      vmovss  dword ptr [r8+44h], xmm1
      vmovss  xmm2, dword ptr [rdx+4]
      vxorps  xmm0, xmm2, xmm4
      vmovss  dword ptr [r8+48h], xmm0
      vmovss  xmm1, dword ptr [rdx+8]
      vxorps  xmm2, xmm1, xmm4
      vmovss  dword ptr [r8+4Ch], xmm2
      vmovss  xmm0, dword ptr [r10+18h]
      vxorps  xmm3, xmm0, xmm4
      vmulss  xmm1, xmm3, dword ptr [rdx]
      vaddss  xmm0, xmm1, dword ptr [r10+0Ch]
      vmovss  dword ptr [r8+2Ch], xmm0
      vmulss  xmm2, xmm3, dword ptr [rdx+4]
      vaddss  xmm1, xmm2, dword ptr [r10+10h]
      vmovss  dword ptr [r8+30h], xmm1
      vmulss  xmm0, xmm3, dword ptr [rdx+8]
      vaddss  xmm1, xmm0, dword ptr [r10+14h]
      vmovss  dword ptr [r8+34h], xmm1
      vxorps  xmm3, xmm5, xmm4
      vmulss  xmm0, xmm3, dword ptr [rdx]
      vaddss  xmm1, xmm0, dword ptr [r10+0Ch]
      vmovss  dword ptr [r8+38h], xmm1
      vmulss  xmm2, xmm3, dword ptr [rdx+4]
      vaddss  xmm0, xmm2, dword ptr [r10+10h]
      vmovss  dword ptr [r8+3Ch], xmm0
      vmulss  xmm1, xmm3, dword ptr [rdx+8]
      vaddss  xmm0, xmm1, dword ptr [r10+14h]
      vmovss  dword ptr [r8+40h], xmm0
    }
  }
  return result;
}

/*
==============
XAnimBonePhysics_TestCapsuleSphere
==============
*/
__int64 XAnimBonePhysics_TestCapsuleSphere(const XAnimCapsuleCollisionShape *capsule, const XAnimSphereCollisionShape *sphere, bool flipNormalSign, vec3_t *outPointA, vec3_t *outPointB, vec3_t *outNormal)
{
  char v29; 
  char v44; 
  __int64 result; 
  vec3_t pointOut; 
  vec3_t segHalfDir; 
  vec3_t segMidPoint; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm2, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rcx+10h]
  }
  _RBP = outPointB;
  _RDI = sphere;
  _RBX = outNormal;
  __asm
  {
    vmulss  xmm4, xmm1, xmm2
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm3, xmm1, xmm2
    vsubss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm0, xmm4, dword ptr [rcx]
    vmulss  xmm2, xmm1, xmm2
    vaddss  xmm1, xmm3, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+0B8h+segMidPoint], xmm0
    vaddss  xmm0, xmm2, dword ptr [rcx+8]
  }
  _RSI = outPointA;
  _R14 = capsule;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+segMidPoint+8], xmm0
    vmovss  dword ptr [rsp+0B8h+segHalfDir], xmm4
    vmovss  dword ptr [rsp+0B8h+segHalfDir+4], xmm3
    vmovss  dword ptr [rsp+0B8h+segHalfDir+8], xmm2
    vmovss  dword ptr [rsp+0B8h+segMidPoint+4], xmm1
  }
  SegmentPointClosestToPoint(&sphere->center, &segMidPoint, &segHalfDir, &pointOut);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm6, xmm0, dword ptr [rsp+0B8h+pointOut]
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm7, xmm1, dword ptr [rsp+0B8h+pointOut+4]
    vsubss  xmm8, xmm0, dword ptr [rsp+0B8h+pointOut+8]
    vmovss  xmm0, dword ptr [r14+18h]
    vaddss  xmm4, xmm0, dword ptr [rdi+0Ch]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm5, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vcomiss xmm5, xmm1
  }
  if ( v29 | v44 )
  {
    __asm { vcomiss xmm5, cs:__real@3a83126f }
    _RAX = outNormal;
    if ( v29 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vxorps  xmm2, xmm2, xmm2
        vxorps  xmm1, xmm1, xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm2, xmm5, xmm5
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm1, xmm6
        vmulss  xmm2, xmm8, xmm1
        vmulss  xmm1, xmm7, xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  dword ptr [rbx+8], xmm2
      vmovss  xmm2, dword ptr [r14+18h]
      vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps xmm3, xmm0
      vmulss  xmm0, xmm0, xmm2
      vaddss  xmm1, xmm0, dword ptr [rsp+0B8h+pointOut]
      vmovss  dword ptr [rsi], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+4]
      vaddss  xmm1, xmm0, dword ptr [rsp+0B8h+pointOut+4]
      vmovss  dword ptr [rsi+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vaddss  xmm1, xmm0, dword ptr [rsp+0B8h+pointOut+8]
      vmovss  dword ptr [rsi+8], xmm1
      vmovss  xmm2, dword ptr [rdi+0Ch]
      vxorps  xmm3, xmm2, xmm4
      vmulss  xmm0, xmm3, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbp+0], xmm1
      vmulss  xmm0, xmm3, dword ptr [rbx+4]
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+4], xmm1
      vmulss  xmm0, xmm3, dword ptr [rbx+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+8], xmm1
    }
    if ( flipNormalSign )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm2, dword ptr [rbx+4]
        vxorps  xmm1, xmm0, xmm4
        vxorps  xmm0, xmm2, xmm4
        vmovss  dword ptr [rbx], xmm1
        vmovss  xmm1, dword ptr [rbx+8]
        vxorps  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbx+8], xmm2
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
    result = 1i64;
  }
  else
  {
    result = 0i64;
  }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
XAnimBonePhysics_TestSphereAxisAlignedBox
==============
*/
bool XAnimBonePhysics_TestSphereAxisAlignedBox(const XAnimSphereCollisionShape *sphere, const XAnimBoxCollisionShape *box, bool flipNormalSign, vec3_t *outPointA, vec3_t *outPointB, vec3_t *outNormal)
{
  int v16; 
  unsigned int v19; 
  unsigned int v20; 
  bool v26; 
  char v27; 
  bool v28; 
  int v32; 
  int v39; 
  bool result; 
  int v50; 
  __int64 v81; 
  __int64 v82; 
  signed __int64 v85; 
  vec3_t *v86; 
  const XAnimSphereCollisionShape *v87; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RDI = &box->extents;
  __asm
  {
    vmovss  xmm10, cs:__real@7f7fffff
    vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v16 = 0;
  v86 = outPointA;
  _R15 = (char *)sphere - (char *)&box->extents;
  v87 = sphere;
  _R13 = -12i64;
  v19 = 0;
  v20 = 0;
  v85 = (char *)outPointB - (char *)&box->extents;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm7, xmm7, xmm7
  }
  do
  {
    if ( v20 >= 3 )
    {
      LODWORD(v82) = 3;
      LODWORD(v81) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v82) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rdi+r13] }
    if ( v20 >= 3 )
    {
      LODWORD(v82) = 3;
      LODWORD(v81) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v82) )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm8, xmm6, dword ptr [rdi]
      vaddss  xmm6, xmm6, dword ptr [rdi]
    }
    v26 = v20 < 3;
    v27 = v20 <= 3;
    if ( v20 >= 3 )
    {
      LODWORD(v82) = 3;
      LODWORD(v81) = v20;
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v82);
      v26 = 0;
      v27 = !v28;
      if ( v28 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, dword ptr [r15+rdi]
      vsubss  xmm1, xmm2, xmm8
      vandps  xmm0, xmm1, xmm11
      vcomiss xmm10, xmm0
    }
    v32 = ~v20;
    if ( v27 )
      v32 = v16;
    __asm
    {
      vcomiss xmm1, xmm9
      vminss  xmm3, xmm0, xmm10
    }
    if ( v26 )
    {
      __asm
      {
        vmulss  xmm0, xmm1, xmm1
        vaddss  xmm7, xmm7, xmm0
      }
    }
    else
    {
      v27 = v26 | (++v19 == 0);
    }
    __asm
    {
      vcmpltss xmm0, xmm1, xmm9
      vblendvps xmm2, xmm2, xmm8, xmm0
      vsubss  xmm1, xmm6, xmm2
      vandps  xmm0, xmm1, xmm11
      vcomiss xmm3, xmm0
    }
    v39 = v20 + 1;
    v16 = v20 + 1;
    if ( v27 )
      v16 = v32;
    __asm
    {
      vcomiss xmm1, xmm9
      vmovss  [rsp+108h+var_C8], xmm2
      vminss  xmm10, xmm3, xmm0
    }
    if ( v26 )
    {
      __asm
      {
        vmulss  xmm0, xmm1, xmm1
        vaddss  xmm7, xmm7, xmm0
      }
    }
    else
    {
      ++v19;
    }
    __asm
    {
      vcmpltss xmm0, xmm1, xmm9
      vblendvps xmm0, xmm2, xmm6, xmm0
      vmovss  [rsp+108h+var_C8], xmm0
    }
    if ( v20 >= 3 )
    {
      LODWORD(v82) = 3;
      LODWORD(v81) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v82) )
        __debugbreak();
    }
    _RAX = v85;
    ++v20;
    __asm
    {
      vmovss  xmm0, [rsp+108h+var_C8]
      vmovss  dword ptr [rax+rdi], xmm0
    }
    _RDI = (vec3_t *)((char *)_RDI + 4);
  }
  while ( v39 < 3 );
  _R15 = outNormal;
  _R12 = v87;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 677, ASSERT_TYPE_ASSERT, "(normalAxis != 0)", (const char *)&queryFormat, "normalAxis != 0") )
    __debugbreak();
  if ( v19 == 6 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm7, xmm1
  }
  if ( v19 <= 6 )
  {
LABEL_31:
    __asm
    {
      vmovss  dword ptr [rsp+108h+var_A0], xmm9
      vmovss  dword ptr [rsp+108h+var_A0+4], xmm9
      vmovss  [rsp+108h+var_98], xmm9
    }
    if ( v16 <= 0 )
    {
      v50 = ~v16;
      if ( (unsigned int)v50 >= 3 )
      {
        LODWORD(v82) = 3;
        LODWORD(v81) = v50;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v82) )
          __debugbreak();
      }
      *((_DWORD *)&v87 + v50) = 1065353216;
    }
    else
    {
      if ( (unsigned int)(v16 - 1) >= 3 )
      {
        LODWORD(v82) = 3;
        LODWORD(v81) = v16 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v82) )
          __debugbreak();
      }
      *((_DWORD *)&v86 + v16 + 1) = -1082130432;
    }
    if ( v19 != 6 )
    {
      _RAX = outPointB;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vsubss  xmm3, xmm0, dword ptr [r12]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rax+8]
        vsubss  xmm5, xmm0, dword ptr [r12+8]
        vsubss  xmm4, xmm1, dword ptr [r12+4]
        vmulss  xmm0, xmm3, xmm3
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, cs:__real@3a83126f
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+108h+var_A0]
      vmovss  xmm1, dword ptr [rsp+108h+var_A0+4]
      vmovss  dword ptr [r15], xmm0
      vmovss  xmm0, [rsp+108h+var_98]
    }
    _RAX = v86;
    __asm
    {
      vmovss  dword ptr [r15+8], xmm0
      vmovss  dword ptr [r15+4], xmm1
      vmovss  xmm2, dword ptr [r12+0Ch]
      vmulss  xmm0, xmm2, dword ptr [r15]
      vaddss  xmm1, xmm0, dword ptr [r12]
      vmovss  dword ptr [rax], xmm1
      vmulss  xmm0, xmm2, dword ptr [r15+4]
      vaddss  xmm1, xmm0, dword ptr [r12+4]
      vmovss  dword ptr [rax+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [r15+8]
      vaddss  xmm1, xmm0, dword ptr [r12+8]
      vmovss  dword ptr [rax+8], xmm1
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  _R11 = &v89;
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
XAnimBonePhysics_TestSphereOrientedBox
==============
*/
__int64 XAnimBonePhysics_TestSphereOrientedBox(const XAnimSphereCollisionShape *sphere, const XAnimBoxCollisionShape *box, const vec4_t *boxQuat, const vec3_t *boxTrans, bool flipNormalSign, vec3_t *outPointA, vec3_t *outPointB, vec3_t *outNormal)
{
  const XAnimSphereCollisionShape *v12; 
  XAnimSphereCollisionShape outTransformedPoint; 
  vec3_t outInvTrans; 
  vec3_t point; 
  vec3_t v17; 
  vec3_t in; 
  vec4_t outInvQuat; 

  __asm { vmovss  xmm0, dword ptr [rcx+0Ch] }
  v12 = sphere;
  __asm { vmovss  [rsp+0D8h+var_9C], xmm0 }
  QuatTrans_Inverse(boxQuat, boxTrans, &outInvQuat, &outInvTrans);
  QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, &v12->center, &outTransformedPoint.center);
  if ( !XAnimBonePhysics_TestSphereAxisAlignedBox(&outTransformedPoint, box, flipNormalSign, &point, &v17, &in) )
    return 0i64;
  QuatTrans_TransformPoint(boxQuat, boxTrans, &point, outPointA);
  QuatTrans_TransformPoint(boxQuat, boxTrans, &v17, outPointB);
  QuatTransform(boxQuat, &in, outNormal);
  return 1i64;
}

/*
==============
XAnimBonePhysics_TransformCollisionShape
==============
*/
void XAnimBonePhysics_TransformCollisionShape(const XAnimCollisionShape *srcShape, const vec4_t *quat, const vec3_t *trans, XAnimCollisionShape *outShape)
{
  _RDI = outShape;
  _RBX = srcShape;
  if ( !srcShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 852, ASSERT_TYPE_ASSERT, "(srcShape != 0)", (const char *)&queryFormat, "srcShape != NULL") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 853, ASSERT_TYPE_ASSERT, "(outShape != 0)", (const char *)&queryFormat, "outShape != NULL") )
    __debugbreak();
  _RDI->type = _RBX->type;
  if ( _RBX->type )
  {
    if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
    {
      QuatTrans_TransformPoint(quat, trans, &_RBX->u.sphere.center, &_RDI->u.sphere.center);
      QuatTrans_TransformPoint(quat, trans, &_RBX->u.capsule.end, &_RDI->u.capsule.end);
      _RDI->u.capsule.radius = _RBX->u.capsule.radius;
    }
    else if ( _RBX->type == XANIM_COLLISION_SHAPE_TYPE_BOX )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+4]
        vmovups xmmword ptr [rdi+4], xmm0
        vmovsd  xmm1, qword ptr [rbx+14h]
        vmovsd  qword ptr [rdi+14h], xmm1
      }
    }
  }
  else
  {
    QuatTrans_TransformPoint(quat, trans, &_RBX->u.sphere.center, &_RDI->u.sphere.center);
    _RDI->u.sphere.radius = _RBX->u.sphere.radius;
  }
}

