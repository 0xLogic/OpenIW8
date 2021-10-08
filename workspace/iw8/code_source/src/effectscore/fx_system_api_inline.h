/*
==============
FX_GetClientVisibility
==============
*/

double __fastcall FX_GetClientVisibility(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  double result; 

  *(float *)&result = ?FX_GetClientVisibility@@YAMW4LocalClientNum_t@@AEBTvec3_t@@1@Z(localClientNum, start, end);
  return result;
}

/*
==============
FX_GetClientVisibility
==============
*/
float FX_GetClientVisibility(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end)
{
  FxSystem *System; 
  const FxVisState *visStateBufferRead; 
  int v45; 
  volatile unsigned int v46; 
  bool v47; 
  bool v48; 
  volatile unsigned int v89; 
  volatile int blockerCount; 
  int v101; 

  _RDI = start;
  _RSI = end;
  Sys_ProfBeginNamedEvent(0, "fx client vis");
  System = FX_GetSystem(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_FX_VIS);
  visStateBufferRead = System->visStateBufferRead;
  if ( visStateBufferRead && visStateBufferRead->blockerCount )
  {
    __asm
    {
      vmovaps [rsp+108h+var_18], xmm6
      vmovaps [rsp+108h+var_28], xmm7
      vmovaps [rsp+108h+var_A8], xmm15
    }
    Profile_Begin(230);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm6, xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm5, xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm4, xmm0, dword ptr [rdi+8]
      vmovss  xmm7, cs:__real@3f800000
    }
    _RAX = fx_visMinTraceDist;
    __asm
    {
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm3, xmm2, xmm2
      vcomiss xmm3, dword ptr [rax+28h]
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vmulss  xmm2, xmm5, xmm1
      vmulss  xmm5, xmm4, xmm1
      vmovss  [rsp+108h+var_B4], xmm5
      vmovss  [rsp+108h+var_B8], xmm2
      vmulss  xmm15, xmm6, xmm1
    }
    if ( v47 )
    {
      Profile_EndInternal(NULL);
      Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
      Sys_ProfEndNamedEvent();
      __asm { vmovaps xmm0, xmm7 }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+108h+var_88], xmm13
        vmulss  xmm13, xmm3, cs:__real@3f000000
      }
      if ( visStateBufferRead->blockerCount > 256 )
      {
        v101 = 256;
        blockerCount = visStateBufferRead->blockerCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 71, ASSERT_TYPE_ASSERT, "( visState->blockerCount ) <= ( 256 )", "%s <= %s\n\t%i, %i", "visState->blockerCount", "FX_VIS_BLOCKER_LIMIT", blockerCount, v101) )
          __debugbreak();
        __asm
        {
          vmovss  xmm5, [rsp+108h+var_B4]
          vmovss  xmm2, [rsp+108h+var_B8]
        }
      }
      v45 = visStateBufferRead->blockerCount;
      v46 = 0;
      v47 = 0;
      v48 = v45 == 0;
      if ( v45 > 0 )
      {
        __asm { vmovaps [rsp+108h+var_38], xmm8 }
        _RCX = &visStateBufferRead->blocker[0].origin.v[2];
        __asm
        {
          vmovaps [rsp+108h+var_48], xmm9
          vmovaps [rsp+108h+var_58], xmm10
          vmovaps [rsp+108h+var_68], xmm11
          vmovaps [rsp+108h+var_78], xmm12
          vmovaps [rsp+108h+var_98], xmm14
          vmovss  xmm14, cs:__real@37800000
        }
        do
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rcx-8]
            vmovss  xmm8, dword ptr [rdi]
            vmovss  xmm9, dword ptr [rcx-4]
            vmovss  xmm10, dword ptr [rdi+4]
            vmovss  xmm11, dword ptr [rcx]
            vmovss  xmm12, dword ptr [rdi+8]
            vsubss  xmm0, xmm6, xmm8
            vsubss  xmm1, xmm9, xmm10
            vmulss  xmm2, xmm1, xmm2
            vmulss  xmm3, xmm0, xmm15
            vaddss  xmm4, xmm3, xmm2
            vsubss  xmm0, xmm11, xmm12
            vmulss  xmm1, xmm0, xmm5
            vaddss  xmm5, xmm4, xmm1
            vsubss  xmm2, xmm5, xmm13
            vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm2, xmm13
          }
          if ( v48 )
          {
            __asm { vmulss  xmm2, xmm5, [rsp+108h+var_B8] }
            _EAX = *((unsigned __int16 *)_RCX + 2);
            __asm
            {
              vmulss  xmm0, xmm15, xmm5
              vaddss  xmm1, xmm0, xmm8
              vaddss  xmm0, xmm2, xmm10
              vsubss  xmm6, xmm1, xmm6
              vmulss  xmm1, xmm5, [rsp+108h+var_B4]
              vsubss  xmm3, xmm0, xmm9
              vaddss  xmm2, xmm1, xmm12
              vmulss  xmm1, xmm3, xmm3
              vsubss  xmm4, xmm2, xmm11
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmovd   xmm5, eax
              vcvtdq2ps xmm5, xmm5
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm5, xmm5
              vmulss  xmm2, xmm0, cs:__real@3b800000
              vcomiss xmm3, xmm2
            }
            if ( v47 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm14
                vmulss  xmm7, xmm7, xmm1
              }
            }
          }
          v89 = visStateBufferRead->blockerCount;
          ++v46;
          __asm
          {
            vmovss  xmm2, [rsp+108h+var_B8]
            vmovss  xmm5, [rsp+108h+var_B4]
          }
          _RCX += 4;
          v47 = v46 < v89;
          v48 = v46 <= v89;
        }
        while ( (int)v46 < (int)v89 );
        __asm
        {
          vmovaps xmm14, [rsp+108h+var_98]
          vmovaps xmm12, [rsp+108h+var_78]
          vmovaps xmm11, [rsp+108h+var_68]
          vmovaps xmm10, [rsp+108h+var_58]
          vmovaps xmm9, [rsp+108h+var_48]
          vmovaps xmm8, [rsp+108h+var_38]
        }
      }
      Profile_EndInternal(NULL);
      Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
      Sys_ProfEndNamedEvent();
      __asm
      {
        vmovaps xmm13, [rsp+108h+var_88]
        vmovaps xmm0, xmm7
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+108h+var_28]
      vmovaps xmm6, [rsp+108h+var_18]
      vmovaps xmm15, [rsp+108h+var_A8]
    }
  }
  else
  {
    Sys_LeaveCriticalSection(CRITSECT_FX_VIS);
    Sys_ProfEndNamedEvent();
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

