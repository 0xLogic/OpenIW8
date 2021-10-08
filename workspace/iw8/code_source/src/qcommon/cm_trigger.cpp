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
  unsigned int v19; 
  unsigned int count; 
  Bounds boundsa; 
  Bounds v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 

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
  _R14 = &cm.stageTrigger.hulls[v8->firstHull];
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [r15], xmm0
    vmovsd  xmm1, qword ptr [r14+10h]
    vmovsd  qword ptr [r15+10h], xmm1
  }
  if ( debugDraw )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [r14]
      vmovsd  xmm0, qword ptr [r14+10h]
      vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm1
      vmovsd  qword ptr [rbp+57h+bounds.halfSize+4], xmm0
      vaddss  xmm0, xmm1, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rbp+57h+bounds.midPoint+4]
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+bounds.midPoint+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm2
    }
    R_AddDebugBox(&frontEndDataOut->debugGlobals, &boundsa, &colorCyan, 0);
  }
  v19 = 1;
  if ( v8->hullCount > 1u )
  {
    __asm { vmovaps [rsp+0F0h+var_30], xmm6 }
    _R14 = &_R14->bounds.halfSize.v[2];
    do
    {
      __asm { vmovss  xmm0, dword ptr [r15] }
      _R14 += 8;
      HIDWORD(v62) = 0;
      HIDWORD(v63) = 0;
      HIDWORD(v64) = 0;
      boundsa.halfSize.v[0] = 0.0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rbp-19h]
        vmovups xmm3, xmmword ptr [rbp-9]
        vmovups xmm5, xmmword ptr [rbp+7]
        vmovups xmm4, xmmword ptr [rbp+57h+bounds.midPoint]
        vmovss  xmm6, xmm6, xmm0
        vmovss  xmm0, dword ptr [r15+0Ch]
        vinsertps xmm6, xmm6, dword ptr [r15+4], 10h
        vinsertps xmm6, xmm6, dword ptr [r15+8], 20h ; ' '
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r15+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [r15+14h], 20h ; ' '
        vmovss  xmm0, dword ptr [r14-14h]
        vmovss  xmm5, xmm5, xmm0
        vmovss  xmm0, dword ptr [r14-8]
        vinsertps xmm5, xmm5, dword ptr [r14-10h], 10h
        vinsertps xmm5, xmm5, dword ptr [r14-0Ch], 20h ; ' '
        vmovss  xmm4, xmm4, xmm0
        vinsertps xmm4, xmm4, dword ptr [r14-4], 10h
        vinsertps xmm4, xmm4, dword ptr [r14], 20h ; ' '
        vsubps  xmm2, xmm6, xmm3
        vaddps  xmm1, xmm5, xmm4
        vsubps  xmm0, xmm5, xmm4
        vmovups xmmword ptr [rbp-9], xmm3
        vaddps  xmm3, xmm6, xmm3
        vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm4
        vminps  xmm4, xmm0, xmm2
        vmaxps  xmm0, xmm1, xmm3
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovss  dword ptr [r15], xmm2
        vsubps  xmm3, xmm2, xmm4
        vextractps dword ptr [r15+4], xmm2, 1
        vextractps dword ptr [r15+8], xmm2, 2
        vmovss  dword ptr [r15+0Ch], xmm3
        vextractps dword ptr [r15+10h], xmm3, 1
        vextractps dword ptr [r15+14h], xmm3, 2
        vmovups xmmword ptr [rbp-19h], xmm6
        vmovups xmmword ptr [rbp+7], xmm5
      }
      if ( debugDraw )
      {
        __asm
        {
          vmovups xmm1, xmmword ptr [r14-14h]
          vmovsd  xmm0, qword ptr [r14-4]
          vmovups xmmword ptr [rbp+57h+var_90.midPoint], xmm1
          vmovsd  qword ptr [rbp+57h+var_90.halfSize+4], xmm0
          vaddss  xmm0, xmm1, dword ptr [rdi]
          vmovss  xmm1, dword ptr [rbp+57h+var_90.midPoint+4]
          vaddss  xmm2, xmm1, dword ptr [rdi+4]
          vmovss  dword ptr [rbp+57h+var_90.midPoint], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+var_90.midPoint+8]
          vaddss  xmm1, xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rbp+57h+var_90.midPoint+8], xmm1
          vmovss  dword ptr [rbp+57h+var_90.midPoint+4], xmm2
        }
        R_AddDebugBox(&frontEndDataOut->debugGlobals, &v61, &colorCyan, 0);
      }
      ++v19;
    }
    while ( v19 < v8->hullCount );
    __asm { vmovaps xmm6, [rsp+0F0h+var_30] }
  }
}

/*
==============
CM_TestStageTriggerContainsPoint
==============
*/
__int64 CM_TestStageTriggerContainsPoint(unsigned int triggerIndex, const vec3_t *point)
{
  __int64 v4; 
  TriggerModel *v6; 
  int v7; 
  __int64 v8; 
  bool v9; 
  bool v11; 
  unsigned int slabCount; 
  unsigned int v22; 
  bool v23; 
  __int64 result; 

  _RSI = point;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  v4 = triggerIndex;
  if ( triggerIndex >= cm.stageTrigger.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trigger.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( cm.stageTrigger.count )", "triggerIndex doesn't index cm.stageTrigger.count\n\t%i not in [0, %i)", triggerIndex, cm.stageTrigger.count) )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  v6 = &cm.stageTrigger.models[v4];
  v7 = 0;
  do
  {
    v8 = v7 + (unsigned int)v6->firstHull;
    v9 = __CFADD__(cm.stageTrigger.hulls, v8 * 32);
    _RBX = &cm.stageTrigger.hulls[v8];
    if ( !_RBX )
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 496, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds");
      v9 = 0;
      if ( v11 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm5, dword ptr [rsi]
      vsubss  xmm0, xmm5, dword ptr [rbx]
      vandps  xmm0, xmm0, xmm6
      vcomiss xmm0, dword ptr [rbx+0Ch]
    }
    if ( v9 )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+4]
        vsubss  xmm0, xmm4, dword ptr [rbx+4]
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, dword ptr [rbx+10h]
      }
      if ( v9 )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+8]
          vsubss  xmm0, xmm3, dword ptr [rbx+8]
          vandps  xmm0, xmm0, xmm6
          vcomiss xmm0, dword ptr [rbx+14h]
        }
        if ( v9 )
        {
          slabCount = _RBX->slabCount;
          v22 = 0;
          v23 = 0;
          if ( !_RBX->slabCount )
          {
LABEL_15:
            result = 1i64;
            goto LABEL_18;
          }
          _R8 = cm.stageTrigger.slabs;
          while ( 1 )
          {
            _RAX = 5i64 * (_RBX->firstSlab + v22);
            __asm
            {
              vmulss  xmm1, xmm4, dword ptr [r8+rax*4+4]
              vmulss  xmm0, xmm5, dword ptr [r8+rax*4]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, dword ptr [r8+rax*4+8]
              vaddss  xmm0, xmm2, xmm1
              vsubss  xmm2, xmm0, dword ptr [r8+rax*4+0Ch]
              vandps  xmm2, xmm2, xmm6
              vcomiss xmm2, dword ptr [r8+rax*4+10h]
            }
            if ( !v23 )
              break;
            v23 = ++v22 < slabCount;
            if ( v22 >= slabCount )
              goto LABEL_15;
          }
        }
      }
    }
    ++v7;
  }
  while ( v7 != v6->hullCount );
  result = 0i64;
LABEL_18:
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

