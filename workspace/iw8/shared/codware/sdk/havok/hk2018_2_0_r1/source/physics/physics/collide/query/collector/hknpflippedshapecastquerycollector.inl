/*
==============
hknpFlippedShapeCastQueryCollector::reset
==============
*/

void __fastcall hknpFlippedShapeCastQueryCollector::reset(hknpFlippedShapeCastQueryCollector *this)
{
  ?reset@hknpFlippedShapeCastQueryCollector@@UEAAXXZ(this);
}

/*
==============
hknpFlippedShapeCastQueryCollector::addHit
==============
*/

void __fastcall hknpFlippedShapeCastQueryCollector::addHit(hknpFlippedShapeCastQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  ?addHit@hknpFlippedShapeCastQueryCollector@@UEAAXAEBUhknpCollisionResult@@@Z(this, flippedHit);
}

/*
==============
hknpFlippedShapeCastQueryCollector::addHit
==============
*/
void hknpFlippedShapeCastQueryCollector::addHit(hknpFlippedShapeCastQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  __m256i v2; 
  __m128 v4; 
  int v7; 
  unsigned __int64 m_userData; 
  hknpCollisionQueryCollector *m_childCollector; 
  bool v12; 
  hknpCollisionQueryCollector *v14; 
  bool v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  __int128 v20; 

  v2 = *(__m256i *)&flippedHit->m_fraction;
  v17 = *(__m256i *)flippedHit->m_position.m_quad.m128_f32;
  v19 = *(__m256i *)&flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  __asm { vbroadcastss xmm0, dword ptr [rdx+20h] }
  v4 = _mm128_mul_ps(_XMM0, this->m_castDirectionWS.m_quad);
  v18 = v2;
  v20 = *(_OWORD *)&flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  *(__m128 *)v17.m256i_i8 = _mm128_add_ps(v4, flippedHit->m_position.m_quad);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v7 = *(_DWORD *)flippedHit->m_hitBodyInfo.m_levelOfDetail;
  __asm { vpinsrw xmm0, xmm0, eax, 1 }
  v18.m256i_i64[1] = *(_QWORD *)&flippedHit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
  v18.m256i_i16[12] = flippedHit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
  v18.m256i_i32[7] = flippedHit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
  m_userData = flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  __asm { vpshufd xmm2, xmm0, 40h ; '@' }
  *(_OWORD *)&v17.m256i_u64[2] = _XMM2 ^ *(_OWORD *)&flippedHit->m_normal;
  v19.m256i_i64[0] = m_userData;
  v19.m256i_i64[1] = *(_QWORD *)&flippedHit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
  v19.m256i_i16[12] = flippedHit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
  v19.m256i_i32[7] = flippedHit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
  *(_QWORD *)&v20 = flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  v19.m256i_i32[4] = v7;
  m_childCollector = this->m_childCollector;
  v18.m256i_i32[4] = -1;
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)&v17);
  v12 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  v14 = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  v16 = !v12 || v14->m_earlyOut.m_bool;
  this->m_earlyOut.m_bool = v16;
  this->m_numHits = v14->m_numHits;
}

/*
==============
hknpFlippedShapeCastQueryCollector::reset
==============
*/
void hknpFlippedShapeCastQueryCollector::reset(hknpFlippedShapeCastQueryCollector *this)
{
  bool v2; 
  hknpCollisionQueryCollector *m_childCollector; 

  this->m_childCollector->reset(this->m_childCollector);
  v2 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  m_childCollector = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  if ( !v2 || m_childCollector->m_earlyOut.m_bool )
  {
    this->m_earlyOut.m_bool = 1;
    this->m_numHits = m_childCollector->m_numHits;
  }
  else
  {
    this->m_earlyOut.m_bool = 0;
    this->m_numHits = m_childCollector->m_numHits;
  }
}

