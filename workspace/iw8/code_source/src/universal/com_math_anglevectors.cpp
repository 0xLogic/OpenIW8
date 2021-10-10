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
  __int128 v6; 
  const float4 *v9; 
  vector3 *v10; 
  __int128 v11; 

  _XMM1 = LODWORD(angles->v[0]);
  _RBX = axis;
  HIDWORD(v11) = 0;
  v6 = v11;
  *(float *)&v6 = *(float *)&_XMM1;
  _XMM0 = v6;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rcx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rcx+8], 20h ; ' '
  }
  Float4RadianToQuat((float4 *)angles, (const float4 *)axis);
  Float4UnitQuatToAxis(v10, v9);
  _RBX->m[0].v[0] = *(float *)&_XMM0;
  __asm
  {
    vextractps dword ptr [rbx+4], xmm0, 1
    vextractps dword ptr [rbx+8], xmm0, 2
  }
  _RBX->m[1].v[0] = *(float *)&_XMM1;
  __asm
  {
    vextractps dword ptr [rbx+10h], xmm1, 1
    vextractps dword ptr [rbx+14h], xmm1, 2
  }
  _RBX->m[2].v[0] = *(float *)&_XMM2_8;
  __asm
  {
    vextractps dword ptr [rbx+1Ch], xmm2, 1
    vextractps dword ptr [rbx+20h], xmm2, 2
  }
}

