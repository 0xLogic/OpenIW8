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
  float v2; 
  float v3; 

  v2 = (float)(this->point[1].v[0] + this->point[0].v[0]) * 0.5;
  v3 = (float)(other->point[1].v[0] + other->point[0].v[0]) * 0.5;
  if ( v2 == v3 )
    return (float)((float)(other->point[1].v[1] + other->point[0].v[1]) * 0.5) > (float)((float)(this->point[1].v[1] + this->point[0].v[1]) * 0.5);
  else
    return v3 > v2;
}

/*
==============
Triangle::operator<
==============
*/
bool Triangle::operator<(Triangle *this, const Triangle *other)
{
  float v2; 
  float v3; 

  v2 = this->m_vert[2].v[0];
  v3 = other->m_vert[2].v[0];
  if ( v2 == v3 && (v2 = this->m_vert[2].v[1], v3 = other->m_vert[2].v[1], v2 == v3) )
    return SLODWORD(this[2].m_vert[2].v[2]) < SLODWORD(other[2].m_vert[2].v[2]);
  else
    return v3 > v2;
}

/*
==============
Triangle::SetPoints
==============
*/
void Triangle::SetPoints(Triangle *this, const vec2_t *pointA, const vec2_t *pointB, const vec2_t *pointC, const unsigned int coordIndexA, const unsigned int coordIndexB, const unsigned int coordIndexC)
{
  float v7; 
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

  *(vec2_t *)this->m_vert[0].v = *pointA;
  *(vec2_t *)&this->m_vert[0].z = *pointB;
  *(vec2_t *)&this->m_vert[1].y = *pointC;
  *(vec2_t *)&this->m_vert[2].z = *pointA;
  this[1].m_vert[0].v[0] = pointB->v[0];
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
  this[2].m_vert[2].v[0] = 0.0;
  LODWORD(this[2].m_vert[2].v[2]) = coordIndexA + 100 * (coordIndexB + 100 * coordIndexC);
  *(_QWORD *)this->m_vert[2].v = 0i64;
  v7 = this->m_vert[0].v[0];
  v8 = this->m_vert[0].v[1];
  v9 = this->m_vert[0].v[2] - this->m_vert[0].v[0];
  v10 = this->m_vert[1].v[0] - v8;
  v11 = this->m_vert[1].v[2] - v8;
  v12 = this->m_vert[1].v[1] - this->m_vert[0].v[0];
  v13 = (float)((float)(v11 * v9) - (float)(v12 * v10)) * 2.0;
  if ( v13 != 0.0 )
  {
    v14 = v10 * v10;
    v15 = 1.0 / v13;
    v16 = (float)(v11 * v11) + (float)(v12 * v12);
    v17 = (float)((float)(v11 * (float)((float)(v10 * v10) + (float)(v9 * v9))) - (float)(v10 * v16)) * v15;
    v18 = (float)((float)(v9 * v16) - (float)(v12 * (float)(v14 + (float)(v9 * v9)))) * v15;
    this[2].m_vert[2].v[0] = (float)(v18 * v18) + (float)(v17 * v17);
    this->m_vert[2].v[0] = v7 + v17;
    this->m_vert[2].v[1] = v8 + v18;
    LOBYTE(this[2].m_vert[2].y) = 1;
  }
}

