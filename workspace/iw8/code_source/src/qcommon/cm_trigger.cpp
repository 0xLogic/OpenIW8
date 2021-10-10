/*
==============
CM_StageTriggerBounds
==============
*/

void __fastcall CM_StageTriggerBounds(unsigned int triggerIndex, Bounds *bounds, bool debugDraw, const vec3_t *origin)
{
  ?CM_StageTriggerBounds@@YAXIPEAUBounds@@_NAEBTvec3_t@@@Z(triggerIndex, bounds, debugDraw, origin);
}

/*
==============
CM_TestStageTriggerContainsPoint
==============
*/

int __fastcall CM_TestStageTriggerContainsPoint(unsigned int triggerIndex, const vec3_t *point)
{
  return ?CM_TestStageTriggerContainsPoint@@YAHIAEBTvec3_t@@@Z(triggerIndex, point);
}

/*
==============
CM_StageTriggerBounds
==============
*/
void CM_StageTriggerBounds(unsigned int triggerIndex, Bounds *bounds, bool debugDraw, const vec3_t *origin)
{
  __int64 v5; 
  TriggerModel *v8; 
  TriggerHull *v9; 
  double v10; 
  float v11; 
  unsigned int v12; 
  float *v13; 
  float v14; 
  __m128 v16; 
  __m128 v20; 
  __m128 v24; 
  __int128 v28; 
  double v37; 
  float v38; 
  unsigned int count; 
  Bounds boundsa; 
  Bounds v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 

  v5 = triggerIndex;
  _R15 = bounds;
  if ( triggerIndex >= cm.stageTrigger.count )
  {
    count = cm.stageTrigger.count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trigger.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( cm.stageTrigger.count )", "triggerIndex doesn't index cm.stageTrigger.count\n\t%i not in [0, %i)", triggerIndex, count) )
      __debugbreak();
  }
  v8 = &cm.stageTrigger.models[v5];
  if ( !v8->hullCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trigger.cpp", 73, ASSERT_TYPE_ASSERT, "(tmodel->hullCount)", (const char *)&queryFormat, "tmodel->hullCount") )
    __debugbreak();
  v9 = &cm.stageTrigger.hulls[v8->firstHull];
  *(_OWORD *)_R15->midPoint.v = *(_OWORD *)v9->bounds.midPoint.v;
  *(double *)&_R15->halfSize.y = *(double *)&v9->bounds.halfSize.y;
  if ( debugDraw )
  {
    v10 = *(double *)&v9->bounds.halfSize.y;
    *(_OWORD *)boundsa.midPoint.v = *(_OWORD *)v9->bounds.midPoint.v;
    *(double *)&boundsa.halfSize.y = v10;
    v11 = boundsa.midPoint.v[1] + origin->v[1];
    boundsa.midPoint.v[0] = boundsa.midPoint.v[0] + origin->v[0];
    boundsa.midPoint.v[2] = boundsa.midPoint.v[2] + origin->v[2];
    boundsa.midPoint.v[1] = v11;
    R_AddDebugBox(&frontEndDataOut->debugGlobals, &boundsa, &colorCyan, 0);
  }
  v12 = 1;
  if ( v8->hullCount > 1u )
  {
    v13 = &v9->bounds.halfSize.v[2];
    do
    {
      v14 = _R15->midPoint.v[0];
      v13 += 8;
      v43.m128_i32[3] = 0;
      v44.m128_i32[3] = 0;
      v45.m128_i32[3] = 0;
      boundsa.halfSize.v[0] = 0.0;
      v16 = v43;
      v16.m128_f32[0] = v14;
      _XMM6 = v16;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [r15+4], 10h
        vinsertps xmm6, xmm6, dword ptr [r15+8], 20h ; ' '
      }
      v20 = v44;
      v20.m128_f32[0] = _R15->halfSize.v[0];
      _XMM3 = v20;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
      }
      v24 = v45;
      v24.m128_f32[0] = *(v13 - 5);
      _XMM5 = v24;
      __asm
      {
        vinsertps xmm5, xmm5, dword ptr [r14-10h], 10h
        vinsertps xmm5, xmm5, dword ptr [r14-0Ch], 20h ; ' '
      }
      v28 = *(_OWORD *)boundsa.midPoint.v;
      *(float *)&v28 = *(v13 - 2);
      _XMM4 = v28;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [r14-4], 10h
        vinsertps xmm4, xmm4, dword ptr [r14], 20h ; ' '
      }
      _mm128_sub_ps(_XMM6, _XMM3);
      _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
      _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
      v44 = _XMM3;
      _mm128_add_ps(_XMM6, _XMM3);
      *(__m128 *)boundsa.midPoint.v = _XMM4;
      __asm
      {
        vminps  xmm4, xmm0, xmm2
        vmaxps  xmm0, xmm1, xmm3
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
      _R15->midPoint.v[0] = _XMM2.m128_f32[0];
      _XMM3 = _mm128_sub_ps(_XMM2, _XMM4);
      __asm
      {
        vextractps dword ptr [r15+4], xmm2, 1
        vextractps dword ptr [r15+8], xmm2, 2
      }
      _R15->halfSize.v[0] = _XMM3.m128_f32[0];
      __asm
      {
        vextractps dword ptr [r15+10h], xmm3, 1
        vextractps dword ptr [r15+14h], xmm3, 2
      }
      v43 = _XMM6;
      v45 = _XMM5;
      if ( debugDraw )
      {
        v37 = *(double *)(v13 - 1);
        *(_OWORD *)v42.midPoint.v = *(_OWORD *)(v13 - 5);
        *(double *)&v42.halfSize.y = v37;
        v38 = v42.midPoint.v[1] + origin->v[1];
        v42.midPoint.v[0] = v42.midPoint.v[0] + origin->v[0];
        v42.midPoint.v[2] = v42.midPoint.v[2] + origin->v[2];
        v42.midPoint.v[1] = v38;
        R_AddDebugBox(&frontEndDataOut->debugGlobals, &v42, &colorCyan, 0);
      }
      ++v12;
    }
    while ( v12 < v8->hullCount );
  }
}

/*
==============
CM_TestStageTriggerContainsPoint
==============
*/
__int64 CM_TestStageTriggerContainsPoint(unsigned int triggerIndex, const vec3_t *point)
{
  __int64 v3; 
  TriggerModel *v4; 
  int v5; 
  TriggerHull *v6; 
  float v7; 
  float v8; 
  int v9; 
  int firstSlab; 

  v3 = triggerIndex;
  if ( triggerIndex >= cm.stageTrigger.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trigger.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( cm.stageTrigger.count )", "triggerIndex doesn't index cm.stageTrigger.count\n\t%i not in [0, %i)", triggerIndex, cm.stageTrigger.count) )
    __debugbreak();
  v4 = &cm.stageTrigger.models[v3];
  v5 = 0;
  do
  {
    v6 = &cm.stageTrigger.hulls[v5 + (unsigned int)v4->firstHull];
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 496, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
      __debugbreak();
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(point->v[0] - v6->bounds.midPoint.v[0]) & _xmm) < v6->bounds.halfSize.v[0] )
    {
      v7 = point->v[1];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - v6->bounds.midPoint.v[1]) & _xmm) < v6->bounds.halfSize.v[1] )
      {
        v8 = point->v[2];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - v6->bounds.midPoint.v[2]) & _xmm) < v6->bounds.halfSize.v[2] )
        {
          v9 = 0;
          if ( !v6->slabCount )
            return 1i64;
          while ( 1 )
          {
            firstSlab = v6->firstSlab;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v7 * cm.stageTrigger.slabs[firstSlab + v9].dir.v[1]) + (float)(point->v[0] * cm.stageTrigger.slabs[firstSlab + v9].dir.v[0])) + (float)(v8 * cm.stageTrigger.slabs[firstSlab + v9].dir.v[2])) - cm.stageTrigger.slabs[firstSlab + v9].midPoint) & _xmm) >= cm.stageTrigger.slabs[firstSlab + v9].halfSize )
              break;
            if ( ++v9 >= (unsigned int)v6->slabCount )
              return 1i64;
          }
        }
      }
    }
    ++v5;
  }
  while ( v5 != v4->hullCount );
  return 0i64;
}

