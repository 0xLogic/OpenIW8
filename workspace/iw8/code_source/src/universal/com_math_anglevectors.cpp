/*
==============
QuatToAngles
==============
*/

void __fastcall QuatToAngles(const vec4_t *quat, vec3_t *angles)
{
  ?QuatToAngles@@YAXAEBTvec4_t@@AEATvec3_t@@@Z(quat, angles);
}

/*
==============
RadianToAxis
==============
*/

void __fastcall RadianToAxis(const vec3_t *angles, tmat33_t<vec3_t> *axis)
{
  ?RadianToAxis@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(angles, axis);
}

/*
==============
QuatToAngles
==============
*/
void QuatToAngles(const vec4_t *quat, vec3_t *angles)
{
  tmat33_t<vec3_t> axis; 

  QuatToAxis(quat, &axis);
  AxisToAngles(&axis, angles);
}

/*
==============
RadianToAxis
==============
*/

void __fastcall RadianToAxis(const vec3_t *angles, tmat33_t<vec3_t> *axis, double _XMM2_8)
{
  const float4 *v9; 
  vector3 *v10; 
  __int128 v11; 

  __asm { vmovss  xmm1, dword ptr [rcx] }
  _RBX = axis;
  HIDWORD(v11) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+20h]
    vmovss  xmm0, xmm0, xmm1
    vinsertps xmm0, xmm0, dword ptr [rcx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rcx+8], 20h ; ' '
  }
  Float4RadianToQuat((float4 *)angles, (const float4 *)axis);
  Float4UnitQuatToAxis(v10, v9);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vextractps dword ptr [rbx+4], xmm0, 1
    vextractps dword ptr [rbx+8], xmm0, 2
    vmovss  dword ptr [rbx+0Ch], xmm1
    vextractps dword ptr [rbx+10h], xmm1, 1
    vextractps dword ptr [rbx+14h], xmm1, 2
    vmovss  dword ptr [rbx+18h], xmm2
    vextractps dword ptr [rbx+1Ch], xmm2, 1
    vextractps dword ptr [rbx+20h], xmm2, 2
  }
}

