/*
==============
Triangle::operator<
==============
*/

bool __fastcall Triangle::operator<(Triangle *this, const Triangle *other)
{
  return ??MTriangle@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
Edge::operator<
==============
*/

bool __fastcall Edge::operator<(Edge *this, const Edge *other)
{
  return ??MEdge@@QEBA_NAEBU0@@Z(this, other);
}

/*
==============
Triangle::SetPoints
==============
*/

void __fastcall Triangle::SetPoints(Triangle *this, const vec2_t *pointA, const vec2_t *pointB, const vec2_t *pointC, const unsigned int coordIndexA, const unsigned int coordIndexB, const unsigned int coordIndexC)
{
  ?SetPoints@Triangle@@QEAAXAEBTvec2_t@@00III@Z(this, pointA, pointB, pointC, coordIndexA, coordIndexB, coordIndexC);
}

/*
==============
Edge::operator<
==============
*/
bool Edge::operator<(Edge *this, const Edge *other)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmulss  xmm3, xmm1, xmm4
    vucomiss xmm2, xmm3
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx+4]
      vmovss  xmm2, dword ptr [rdx+0Ch]
      vaddss  xmm0, xmm2, dword ptr [rdx+4]
      vmulss  xmm3, xmm1, xmm4
      vmulss  xmm1, xmm0, xmm4
      vcomiss xmm1, xmm3
    }
  }
  else
  {
    __asm { vcomiss xmm3, xmm2 }
  }
  return !(v2 | v3);
}

/*
==============
Triangle::operator<
==============
*/
bool Triangle::operator<(Triangle *this, const Triangle *other)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+18h]
    vmovss  xmm1, dword ptr [rdx+18h]
    vucomiss xmm0, xmm1
  }
  if ( v3 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+1Ch]
      vmovss  xmm1, dword ptr [rdx+1Ch]
      vucomiss xmm0, xmm1
    }
    if ( v3 )
      return SLODWORD(this[2].m_vert[2].v[2]) < SLODWORD(other[2].m_vert[2].v[2]);
  }
  __asm { vcomiss xmm1, xmm0 }
  return !(v2 | v3);
}

/*
==============
Triangle::SetPoints
==============
*/
void Triangle::SetPoints(Triangle *this, const vec2_t *pointA, const vec2_t *pointB, const vec2_t *pointC, const unsigned int coordIndexA, const unsigned int coordIndexB, const unsigned int coordIndexC)
{
  unsigned int v14; 

  _R10 = this;
  *(vec2_t *)this->m_vert[0].v = *pointA;
  *(vec2_t *)&this->m_vert[0].z = *pointB;
  *(vec2_t *)&this->m_vert[1].y = *pointC;
  *(vec2_t *)&this->m_vert[2].z = *pointA;
  this[1].m_vert[0].v[0] = pointB->v[0];
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps [rsp+68h+var_58], xmm10
    vmovaps [rsp+68h+var_68], xmm11
  }
  this[1].m_vert[0].v[1] = pointB->v[1];
  *(vec2_t *)&this[1].m_vert[1].y = *pointB;
  this[1].m_vert[2].v[0] = pointC->v[0];
  this[1].m_vert[2].v[1] = pointC->v[1];
  this[2].m_vert[0].v[0] = pointC->v[0];
  this[2].m_vert[0].v[1] = pointC->v[1];
  *(vec2_t *)&this[2].m_vert[0].z = *pointA;
  LODWORD(this[1].m_area) = coordIndexC;
  LODWORD(this[2].m_vert[1].v[1]) = coordIndexC;
  LODWORD(this[1].m_vert[0].v[2]) = coordIndexA;
  LODWORD(this[1].m_vert[1].v[0]) = coordIndexB;
  LODWORD(this[1].m_vert[2].v[2]) = coordIndexB;
  LODWORD(this[2].m_vert[1].v[2]) = coordIndexA;
  v14 = 100 * (coordIndexB + 100 * coordIndexC);
  _R10[2].m_vert[2].v[0] = 0.0;
  LODWORD(_R10[2].m_vert[2].v[2]) = coordIndexA + v14;
  *(_QWORD *)_R10->m_vert[2].v = 0i64;
  __asm
  {
    vmovss  xmm10, dword ptr [r10]
    vmovss  xmm11, dword ptr [r10+4]
    vmovss  xmm0, dword ptr [r10+8]
    vmovss  xmm1, dword ptr [r10+0Ch]
    vsubss  xmm7, xmm0, xmm10
    vmovss  xmm0, dword ptr [r10+10h]
    vsubss  xmm5, xmm1, xmm11
    vmovss  xmm1, dword ptr [r10+14h]
    vsubss  xmm9, xmm1, xmm11
    vmulss  xmm2, xmm9, xmm7
    vsubss  xmm8, xmm0, xmm10
    vmulss  xmm0, xmm8, xmm5
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm4, xmm1, cs:__real@40000000
    vxorps  xmm2, xmm2, xmm2
    vucomiss xmm4, xmm2
  }
  if ( coordIndexA + v14 )
  {
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm7, xmm7
      vmovaps [rsp+68h+var_18], xmm6
      vaddss  xmm6, xmm1, xmm0
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm4, xmm0, xmm4
      vmulss  xmm1, xmm8, xmm8
      vmulss  xmm2, xmm9, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm5, xmm3
      vmulss  xmm2, xmm9, xmm6
      vsubss  xmm0, xmm2, xmm1
      vmulss  xmm5, xmm0, xmm4
      vmulss  xmm1, xmm8, xmm6
      vmovaps xmm6, [rsp+68h+var_18]
      vmulss  xmm3, xmm7, xmm3
      vsubss  xmm0, xmm3, xmm1
      vmulss  xmm4, xmm0, xmm4
      vmulss  xmm2, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [r10+68h], xmm0
      vaddss  xmm2, xmm10, xmm5
      vmovss  dword ptr [r10+18h], xmm2
      vaddss  xmm0, xmm11, xmm4
      vmovss  dword ptr [r10+1Ch], xmm0
    }
    LOBYTE(_R10[2].m_vert[2].y) = 1;
  }
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
    vmovaps xmm11, [rsp+68h+var_68]
  }
}

