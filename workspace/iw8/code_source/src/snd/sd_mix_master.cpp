/*
==============
SD_UpdateBusPeakLimiterState
==============
*/

void __fastcall SD_UpdateBusPeakLimiterState(const SndPeakLimiterParams *peakLimitParams, sd_mix_master_dynamics_state *state)
{
  ?SD_UpdateBusPeakLimiterState@@YAXPEBUSndPeakLimiterParams@@PEAUsd_mix_master_dynamics_state@@@Z(peakLimitParams, state);
}

/*
==============
SD_ProcessSubmixBus
==============
*/

void __fastcall SD_ProcessSubmixBus(const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *sequentialSrcBus, SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *interleavedDestBus, SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *scratchBus, sd_mix_master_dynamics_state *dynState, const SndDynamicsParams *dynParams, const SndPeakLimiterParams *peakLimitParams, const SndMasterEqParamBank *eqParams, SndDspBiquad4x8State *eqState, const float busGain, const bool recompute, SndDspDynamicsMeter *meter)
{
  ?SD_ProcessSubmixBus@@YAXAEBU?$ConstSequentialBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@AEAU?$InterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@2@1PEAUsd_mix_master_dynamics_state@@PEBUSndDynamicsParams@@PEBUSndPeakLimiterParams@@PEBUSndMasterEqParamBank@@PEAUSndDspBiquad4x8State@@M_NPEAUSndDspDynamicsMeter@@@Z(sequentialSrcBus, interleavedDestBus, scratchBus, dynState, dynParams, peakLimitParams, eqParams, eqState, busGain, recompute, meter);
}

/*
==============
SD_UpdateBusDynamicsState
==============
*/

void __fastcall SD_UpdateBusDynamicsState(const SndDynamicsParams *dynParam, sd_mix_master_dynamics_state *state, bool recompute)
{
  ?SD_UpdateBusDynamicsState@@YAXPEBUSndDynamicsParams@@PEAUsd_mix_master_dynamics_state@@_N@Z(dynParam, state, recompute);
}

/*
==============
SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>
==============
*/

SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *__fastcall SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>(SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *result, const sd_mix_master_dynamics_state *const state)
{
  return ??$SD_GetBusDynamicsCompressorParams@UAtmosFrame@SD_DSP@@@@YA?AU?$RMSEnvelopeProcessorParams@UAtmosFrame@SD_DSP@@@SD_DSP@@QEBUsd_mix_master_dynamics_state@@@Z(result, state);
}

/*
==============
SD_ProcessMasterBusInPlace
==============
*/

void __fastcall SD_ProcessMasterBusInPlace(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *inOut, const SndMasterEqParamBank *eqParam, SndDspBiquad4x8State *eqState, const SndDynamicsParams *dynParams, const SndPeakLimiterParams *peakLimitParams, sd_mix_master_dynamics_state *dynState, SndDspDynamicsMeter *meter, bool recompute)
{
  ?SD_ProcessMasterBusInPlace@@YAXAEAU?$InterleavedBufferRefType@UAtmosFrame@SD_DSP@@$0BAA@@SD_DSP@@PEBUSndMasterEqParamBank@@PEAUSndDspBiquad4x8State@@PEBUSndDynamicsParams@@PEBUSndPeakLimiterParams@@PEAUsd_mix_master_dynamics_state@@PEAUSndDspDynamicsMeter@@_N@Z(inOut, eqParam, eqState, dynParams, peakLimitParams, dynState, meter, recompute);
}

/*
==============
SD_GetEQProcessorParams<SD_DSP::AtmosFrame>
==============
*/

SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *__fastcall SD_GetEQProcessorParams<SD_DSP::AtmosFrame>(SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *result, const SndMasterEqParamBank *param, SndDspBiquad4x8State *state, const bool setup)
{
  return ??$SD_GetEQProcessorParams@UAtmosFrame@SD_DSP@@@@YA?AU?$EQ4xParams@UAtmosFrame@SD_DSP@@@SD_DSP@@AEBUSndMasterEqParamBank@@AEAUSndDspBiquad4x8State@@_N@Z(result, param, state, setup);
}

/*
==============
SD_SaveCompressorParams<SD_DSP::AtmosFrame>
==============
*/

void __fastcall SD_SaveCompressorParams<SD_DSP::AtmosFrame>(const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *params, sd_mix_master_dynamics_state *const state, SndDspDynamicsMeter *meter)
{
  ??$SD_SaveCompressorParams@UAtmosFrame@SD_DSP@@@@YAXAEBU?$RMSEnvelopeProcessorParams@UAtmosFrame@SD_DSP@@@SD_DSP@@QEAUsd_mix_master_dynamics_state@@PEAUSndDspDynamicsMeter@@@Z(params, state, meter);
}

/*
==============
SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>
==============
*/

void __fastcall SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *params, SndDspBiquad4x8State *state)
{
  ??$SD_SaveEQProcessorParams@UAtmosFrame@SD_DSP@@@@YAXU?$EQ4xParams@UAtmosFrame@SD_DSP@@@SD_DSP@@AEAUSndDspBiquad4x8State@@@Z(params, state);
}

/*
==============
SD_MixMaster
==============
*/

void SD_MixMaster(void)
{
  ?SD_MixMaster@@YAXXZ();
}

/*
==============
SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>
==============
*/
SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>(SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *result, const sd_mix_master_dynamics_state *const state)
{
  __int64 v29; 
  SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *v38; 
  __int64 v47; 
  char v48[608]; 
  char v49; 
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
  }
  _RBP = (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 480) = (unsigned __int64)&v47 ^ _security_cookie;
  __asm
  {
    vmovups ymm12, ymmword ptr [rdx+80h]
    vmovups ymm11, ymmword ptr [rdx+0A0h]
    vmovups ymm10, ymmword ptr [rdx+0C0h]
    vmovups ymm9, ymmword ptr [rdx+0E0h]
    vmovups ymm8, ymmword ptr [rdx+200h]
    vmovups ymm7, ymmword ptr [rdx+220h]
    vmovups ymm1, ymmword ptr [rdx+300h]
    vmovups ymm0, ymmword ptr [rdx+320h]
    vmovss  xmm2, dword ptr [rdx+1E8h]
    vmovss  xmm3, dword ptr [rdx+1E4h]
    vmovss  xmm4, dword ptr [rdx+1E0h]
    vmovups ymm6, cs:__ymm@7f7fffff7f7fffff7f7fffff7f7fffff7f7fffff7f7fffff7f7fffff7f7fffff
    vxorps  xmm5, xmm5, xmm5
  }
  _RAX = result;
  __asm
  {
    vmovss  dword ptr [rbp+100h], xmm2
    vmovss  dword ptr [rbp+104h], xmm3
    vmovss  dword ptr [rbp+108h], xmm4
    vmovups ymmword ptr [rbp+0], ymm1
    vmovups ymmword ptr [rbp+20h], ymm0
    vmovups ymmword ptr [rbp+40h], ymm12
    vmovups ymmword ptr [rbp+60h], ymm11
    vmovups ymmword ptr [rbp+80h], ymm10
    vmovups ymmword ptr [rbp+0A0h], ymm9
    vmovups ymmword ptr [rbp+0C0h], ymm8
    vmovups ymmword ptr [rbp+0E0h], ymm7
    vmovups ymmword ptr [rbp+120h], ymm5
    vmovups ymmword ptr [rbp+140h], ymm5
    vmovups ymmword ptr [rbp+160h], ymm5
    vmovups ymmword ptr [rbp+180h], ymm5
    vmovups ymmword ptr [rbp+1A0h], ymm6
    vmovups ymmword ptr [rbp+1C0h], ymm6
  }
  _RCX = (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFE0ui64;
  v29 = 3i64;
  do
  {
    _RAX = (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups xmm1, xmmword ptr [rcx+70h]
    }
    _RCX += 128i64;
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rcx-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rcx-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v29;
  }
  while ( v29 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rax+20h], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr [rax+40h], ymm0
  }
  v38 = result;
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return v38;
}

/*
==============
SD_GetEQProcessorParams<SD_DSP::AtmosFrame>
==============
*/
SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *SD_GetEQProcessorParams<SD_DSP::AtmosFrame>(SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *result, const SndMasterEqParamBank *param, SndDspBiquad4x8State *state, const bool setup)
{
  int enabled; 
  int v18; 
  int v23; 
  int v28; 
  const void *v86; 
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v87; 
  __int64 v89; 
  float v90; 
  char v91[3600]; 

  __asm { vmovaps [rsp+0E88h+var_28], xmm6 }
  _RBP = (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)((unsigned __int64)v91 & 0xFFFFFFFFFFFFFFE0ui64);
  *(_QWORD *)(((unsigned __int64)v91 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE00) = (unsigned __int64)&v89 ^ _security_cookie;
  _RDI = state;
  _RBX = param;
  if ( setup )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+0Ch]
      vmovss  xmm3, dword ptr [rdx+8]; Fhz
      vmovss  xmm2, dword ptr [rdx+4]; db
      vmovss  xmm6, cs:__real@473b8000
    }
    enabled = param->low.enabled;
    __asm
    {
      vmovss  [rsp+0E88h+var_E68], xmm0
      vmovaps xmm0, xmm6; Fs
    }
    SND_DspBiquadLShelve8(*(float *)&_XMM0, enabled, *(float *)&_XMM2, *(float *)&_XMM3, v90, &state->bq0);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmovss  xmm3, dword ptr [rbx+18h]; Fhz
      vmovss  xmm2, dword ptr [rbx+14h]; db
    }
    v18 = _RBX->peak1.enabled;
    __asm
    {
      vmovss  [rsp+0E88h+var_E68], xmm0
      vmovaps xmm0, xmm6; Fs
    }
    SND_DspBiquadPeak8(*(float *)&_XMM0, v18, *(float *)&_XMM2, *(float *)&_XMM3, v90, &_RDI->bq1);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  xmm3, dword ptr [rbx+28h]; Fhz
      vmovss  xmm2, dword ptr [rbx+24h]; db
    }
    v23 = _RBX->peak2.enabled;
    __asm
    {
      vmovaps xmm0, xmm6; Fs
      vmovss  [rsp+0E88h+var_E68], xmm1
    }
    SND_DspBiquadPeak8(*(float *)&_XMM0, v23, *(float *)&_XMM2, *(float *)&_XMM3, v90, &_RDI->bq2);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+3Ch]
      vmovss  xmm3, dword ptr [rbx+38h]; Fhz
      vmovss  xmm2, dword ptr [rbx+34h]; db
    }
    v28 = _RBX->high.enabled;
    __asm
    {
      vmovaps xmm0, xmm6; Fs
      vmovss  [rsp+0E88h+var_E68], xmm1
    }
    SND_DspBiquadHShelve8(*(float *)&_XMM0, v28, *(float *)&_XMM2, *(float *)&_XMM3, v90, &_RDI->bq3);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rbp+20h], ymm1
    vmovups ymm1, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rbp+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+80h]
    vmovups ymmword ptr [rbp+60h], ymm1
    vmovups ymm1, ymmword ptr [rdi+0A0h]
    vmovups ymmword ptr [rbp+80h], ymm0
    vmovups ymm0, ymmword ptr [rdi+0C0h]
    vmovups ymmword ptr [rbp+0A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+0E0h]
    vmovups ymmword ptr [rbp+0C0h], ymm0
    vmovups ymm0, ymmword ptr [rdi+100h]
    vmovups ymmword ptr [rbp+0E0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+120h]
    vmovups ymmword ptr [rbp+100h], ymm0
    vmovups ymm0, ymmword ptr [rdi+140h]
    vmovups ymmword ptr [rbp+120h], ymm1
    vmovups ymm1, ymmword ptr [rdi+160h]
    vmovups ymmword ptr [rbp+500h], ymm0
    vmovups ymm0, ymmword ptr [rdi+180h]
    vmovups ymmword ptr [rbp+520h], ymm1
    vmovups ymm1, ymmword ptr [rdi+1A0h]
    vmovups ymmword ptr [rbp+540h], ymm0
    vmovups ymm0, ymmword ptr [rdi+1C0h]
    vmovups ymmword ptr [rbp+560h], ymm1
    vmovups ymm1, ymmword ptr [rdi+1E0h]
    vmovups ymmword ptr [rbp+140h], ymm0
    vmovups ymm0, ymmword ptr [rdi+200h]
    vmovups ymmword ptr [rbp+160h], ymm1
    vmovups ymm1, ymmword ptr [rdi+220h]
    vmovups ymmword ptr [rbp+180h], ymm0
    vmovups ymm0, ymmword ptr [rdi+240h]
    vmovups ymmword ptr [rbp+1A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+260h]
    vmovups ymmword ptr [rbp+1C0h], ymm0
    vmovups ymm0, ymmword ptr [rdi+280h]
    vmovups ymmword ptr [rbp+1E0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+2A0h]
    vmovups ymmword ptr [rbp+200h], ymm0
    vmovups ymm0, ymmword ptr [rdi+2C0h]
    vmovups ymmword ptr [rbp+220h], ymm1
    vmovups ymm1, ymmword ptr [rdi+2E0h]
    vmovups ymmword ptr [rbp+240h], ymm0
    vmovups ymm0, ymmword ptr [rdi+300h]
    vmovups ymmword ptr [rbp+260h], ymm1
    vmovups ymm1, ymmword ptr [rdi+320h]
    vmovups ymmword ptr [rbp+580h], ymm0
    vmovups ymm0, ymmword ptr [rdi+340h]
    vmovups ymmword ptr [rbp+5A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+360h]
    vmovups ymmword ptr [rbp+5C0h], ymm0
    vmovups ymm0, ymmword ptr [rdi+380h]
    vmovups ymmword ptr [rbp+5E0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+3A0h]
    vmovups ymmword ptr [rbp+280h], ymm0
    vmovups ymm0, ymmword ptr [rdi+3C0h]
    vmovups ymmword ptr [rbp+2A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+3E0h]
    vmovups ymmword ptr [rbp+2C0h], ymm0
    vmovups ymm0, ymmword ptr [rdi+400h]
    vmovups ymmword ptr [rbp+2E0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+420h]
    vmovups ymmword ptr [rbp+300h], ymm0
    vmovups ymm0, ymmword ptr [rdi+440h]
    vmovups ymmword ptr [rbp+320h], ymm1
    vmovups ymm1, ymmword ptr [rdi+460h]
    vmovups ymmword ptr [rbp+340h], ymm0
    vmovups ymm0, ymmword ptr [rdi+480h]
    vmovups ymmword ptr [rbp+360h], ymm1
    vmovups ymm1, ymmword ptr [rdi+4A0h]
    vmovups ymmword ptr [rbp+380h], ymm0
    vmovups ymm0, ymmword ptr [rdi+4C0h]
    vmovups ymmword ptr [rbp+3A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+4E0h]
    vmovups ymmword ptr [rbp+600h], ymm0
    vmovups ymm0, ymmword ptr [rdi+500h]
    vmovups ymmword ptr [rbp+620h], ymm1
    vmovups ymm1, ymmword ptr [rdi+520h]
    vmovups ymmword ptr [rbp+660h], ymm1
    vmovups ymm1, ymmword ptr [rdi+560h]
    vmovups ymmword ptr [rbp+640h], ymm0
    vmovups ymm0, ymmword ptr [rdi+540h]
    vmovups ymmword ptr [rbp+3E0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+5A0h]
    vmovups ymmword ptr [rbp+3C0h], ymm0
    vmovups ymm0, ymmword ptr [rdi+580h]
    vmovups ymmword ptr [rbp+420h], ymm1
    vmovups ymm1, ymmword ptr [rdi+5E0h]
    vmovups ymmword ptr [rbp+400h], ymm0
    vmovups ymm0, ymmword ptr [rdi+5C0h]
    vmovups ymmword ptr [rbp+460h], ymm1
    vmovups ymm1, ymmword ptr [rdi+620h]
    vmovups ymmword ptr [rbp+440h], ymm0
    vmovups ymm0, ymmword ptr [rdi+600h]
    vmovups ymmword ptr [rbp+4A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+660h]
    vmovups ymmword ptr [rbp+480h], ymm0
    vmovups ymm0, ymmword ptr [rdi+640h]
    vmovups ymmword ptr [rbp+4E0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+6A0h]
    vmovups ymmword ptr [rbp+4C0h], ymm0
    vmovups ymm0, ymmword ptr [rdi+680h]
    vmovups ymmword ptr [rbp+6A0h], ymm1
    vmovups ymm1, ymmword ptr [rdi+6E0h]
    vmovups ymmword ptr [rbp+680h], ymm0
    vmovups ymm0, ymmword ptr [rdi+6C0h]
    vmovups ymmword ptr [rbp+6E0h], ymm1
    vmovups ymmword ptr [rbp+6C0h], ymm0
  }
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>(_RBP + 1, (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)((unsigned __int64)v91 & 0xFFFFFFFFFFFFFFE0ui64));
  memcpy_0(result, v86, sizeof(SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>));
  v87 = result;
  __asm { vmovaps xmm6, [rsp+0E88h+var_28] }
  return v87;
}

/*
==============
SD_SaveCompressorParams<SD_DSP::AtmosFrame>
==============
*/
void SD_SaveCompressorParams<SD_DSP::AtmosFrame>(const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *params, sd_mix_master_dynamics_state *const state, SndDspDynamicsMeter *meter)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+0C0h]
    vmovups ymmword ptr [rdx+200h], ymm0
    vmovups ymm1, ymmword ptr [rcx+0E0h]
    vmovups ymmword ptr [rdx+220h], ymm1
  }
  if ( meter )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+120h]
      vmovups ymmword ptr [r8+40h], ymm0
      vmovups ymm1, ymmword ptr [rcx+140h]
      vmovups ymmword ptr [r8+60h], ymm1
      vmovups ymm0, ymmword ptr [rcx+160h]
      vmovups ymmword ptr [r8+80h], ymm0
      vmovups ymm1, ymmword ptr [rcx+180h]
      vmovups ymmword ptr [r8+0A0h], ymm1
      vmovups ymm0, ymmword ptr [rcx+1A0h]
      vmovups ymmword ptr [r8+0C0h], ymm0
      vmovups ymm1, ymmword ptr [rcx+1C0h]
      vmovups ymmword ptr [r8+0E0h], ymm1
      vbroadcastss ymm0, dword ptr [rcx+108h]
      vmovups ymmword ptr [r8], ymm0
      vmovups ymmword ptr [r8+20h], ymm0
    }
  }
}

/*
==============
SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>
==============
*/
void SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *params, SndDspBiquad4x8State *state)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+500h]
    vmovups ymmword ptr [rdx+140h], ymm0
    vmovups ymm1, ymmword ptr [rcx+520h]
    vmovups ymmword ptr [rdx+160h], ymm1
    vmovups ymm0, ymmword ptr [rcx+540h]
    vmovups ymmword ptr [rdx+180h], ymm0
    vmovups ymm1, ymmword ptr [rcx+560h]
    vmovups ymmword ptr [rdx+1A0h], ymm1
    vmovups ymm0, ymmword ptr [rcx+580h]
    vmovups ymmword ptr [rdx+300h], ymm0
    vmovups ymm1, ymmword ptr [rcx+5A0h]
    vmovups ymmword ptr [rdx+320h], ymm1
    vmovups ymm0, ymmword ptr [rcx+5C0h]
    vmovups ymmword ptr [rdx+340h], ymm0
    vmovups ymm1, ymmword ptr [rcx+5E0h]
    vmovups ymmword ptr [rdx+360h], ymm1
    vmovups ymm0, ymmword ptr [rcx+600h]
    vmovups ymmword ptr [rdx+4C0h], ymm0
    vmovups ymm1, ymmword ptr [rcx+620h]
    vmovups ymmword ptr [rdx+4E0h], ymm1
    vmovups ymm0, ymmword ptr [rcx+640h]
    vmovups ymmword ptr [rdx+500h], ymm0
    vmovups ymm1, ymmword ptr [rcx+660h]
    vmovups ymmword ptr [rdx+520h], ymm1
    vmovups ymm0, ymmword ptr [rcx+680h]
    vmovups ymmword ptr [rdx+680h], ymm0
    vmovups ymm1, ymmword ptr [rcx+6A0h]
    vmovups ymmword ptr [rdx+6A0h], ymm1
    vmovups ymm0, ymmword ptr [rcx+6C0h]
    vmovups ymmword ptr [rdx+6C0h], ymm0
    vmovups ymm1, ymmword ptr [rcx+6E0h]
    vmovups ymmword ptr [rdx+6E0h], ymm1
  }
}

/*
==============
SD_MixMaster
==============
*/

void __fastcall SD_MixMaster(double _XMM0_8, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  signed __int64 v4; 
  void *v7; 
  SD_DSP::AtmosFrame *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  float *v13; 
  float *v14; 
  unsigned int v15; 
  float **v16; 
  float *v17; 
  bool v23; 
  __int64 v39; 
  __int64 v94; 
  __int64 v106; 
  unsigned int v128; 
  __int64 v130; 
  int v137; 
  const dvar_t *v138; 
  unsigned int flags; 
  float *v140; 
  const float *v141; 
  __m256 *v142; 
  const __m256 *v143; 
  __int64 v150; 
  __int64 v165; 
  __int64 v196; 
  float v197; 
  bool recompute; 
  SndDspDynamicsMeter *meter; 
  char v200[18248]; 
  __int64 v201; 
  char v204; 

  v7 = alloca(v4);
  v201 = -2i64;
  __asm
  {
    vmovaps [rsp+4818h+var_38], xmm6
    vmovaps [rsp+4818h+var_48], xmm7
  }
  _RBP = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4740) = (unsigned __int64)&v196 ^ _security_cookie;
  v9 = (SD_DSP::AtmosFrame *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 1856);
  v10 = 256i64;
  do
  {
    SD_DSP::AtmosFrame::AtmosFrame(v9++);
    --v10;
  }
  while ( v10 );
  *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = SD_GetInterleavedBus((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)0xE, v11);
  *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = SD_GetInterleavedBus((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)0xF, v12);
  *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 1856;
  v13 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast((SD_DSP::AtmosFrame *const)(_RBP + 1856));
  v14 = v13;
  if ( ((unsigned __int8)v13 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v13) )
    __debugbreak();
  v15 = 0;
  v16 = (float **)(_RBP + 1312);
  do
  {
    v17 = &v14[256 * v15];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( ((unsigned __int8)v14 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v16 = v17;
    ++v15;
    ++v16;
  }
  while ( v15 < 0x10 );
  __asm
  {
    vmovups ymm3, ymmword ptr [rbp+520h]
    vmovups ymmword ptr [rbp+110h], ymm3
    vmovups ymm2, ymmword ptr [rbp+540h]
    vmovups ymmword ptr [rbp+130h], ymm2
    vmovups ymm1, ymmword ptr [rbp+560h]
    vmovups ymmword ptr [rbp+150h], ymm1
    vmovups ymm0, ymmword ptr [rbp+580h]
    vmovups ymmword ptr [rbp+170h], ymm0
    vmovups ymmword ptr [rbp+90h], ymm3
    vmovups ymmword ptr [rbp+0B0h], ymm2
    vmovups ymmword ptr [rbp+0D0h], ymm1
    vmovups ymmword ptr [rbp+0F0h], ymm0
  }
  _RDI = g_sd.mixParam;
  *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = g_sd.mixParam;
  if ( !_RDI->muted )
  {
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd mix master usec");
    v23 = memcmp_0(_RDI, &g_sd.mixLastParam, 0x918ui64) != 0;
    memcpy_0(&g_sd.mixLastParam, _RDI, sizeof(g_sd.mixLastParam));
    if ( _RDI->masterParams.busSfxEnable )
    {
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), 8u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+540h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+560h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+580h], ymm1
      }
      meter = &g_sd.mixMasterState.meters.sfx;
      recompute = v23;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+210h]
        vmovss  [rsp+4818h+var_47D8], xmm0
      }
      SD_ProcessSubmixBus((const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), &g_sd.mixMasterState.dynSfx, &_RDI->masterParams.sfxDyn, &_RDI->masterParams.sfxPeakLimit, &_RDI->masterParams.sfxEq, &g_sd.mixMasterState.eqSfx, v197, v23, &g_sd.mixMasterState.meters.sfx);
    }
    if ( _RDI->masterParams.busDialogEnable )
    {
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), 9u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+540h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+560h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+580h], ymm1
      }
      meter = &g_sd.mixMasterState.meters.dialogue;
      recompute = v23;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+208h]
        vmovss  [rsp+4818h+var_47D8], xmm0
      }
      SD_ProcessSubmixBus((const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), &g_sd.mixMasterState.dynDialogue, &_RDI->masterParams.dialogDyn, &_RDI->masterParams.dialogPeakLimit, &_RDI->masterParams.dialogEq, &g_sd.mixMasterState.eqDialogue, v197, v23, &g_sd.mixMasterState.meters.dialogue);
    }
    if ( _RDI->masterParams.busWeapExpSceneEnable )
    {
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), 0xAu);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+540h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+560h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+580h], ymm1
      }
      v39 = 0i64;
      meter = NULL;
      recompute = v23;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+20Ch]
        vmovss  [rsp+4818h+var_47D8], xmm0
      }
      SD_ProcessSubmixBus((const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), NULL, NULL, NULL, &_RDI->masterParams.weapExpScenesEq, &g_sd.mixMasterState.eqWeapExpScene, v197, v23, NULL);
    }
    else
    {
      v39 = 0i64;
    }
    if ( _RDI->masterParams.busReverbEnable )
    {
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1056), 5u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+1A0h], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+260h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+280h], ymm0
      }
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1184), 4u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+2A0h], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+2C0h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+2E0h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+300h], ymm0
      }
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 928), 7u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+1C0h], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+600h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+5C0h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+520h], ymm0
      }
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1600), 6u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+1A0h]
        vmovups ymmword ptr [rbp+320h], ymm0
        vmovups ymm1, ymmword ptr [rbp+20h]
        vmovups ymmword ptr [rbp+340h], ymm1
        vmovups ymm0, ymmword ptr [rbp+260h]
        vmovups ymmword ptr [rbp+360h], ymm0
        vmovups ymm1, ymmword ptr [rbp+280h]
        vmovups ymmword ptr [rbp+380h], ymm1
        vmovups ymm0, ymmword ptr [rbp+2A0h]
        vmovups ymmword ptr [rbp+1E0h], ymm0
        vmovups ymm1, ymmword ptr [rbp+2C0h]
        vmovups ymmword ptr [rbp+200h], ymm1
        vmovups ymm0, ymmword ptr [rbp+2E0h]
        vmovups ymmword ptr [rbp+220h], ymm0
        vmovups ymm1, ymmword ptr [rbp+300h]
        vmovups ymmword ptr [rbp+240h], ymm1
        vmovups ymm0, ymmword ptr [rbp+1C0h]
        vmovups ymmword ptr [rbp+110h], ymm0
        vmovups ymm1, ymmword ptr [rbp+600h]
        vmovups ymmword ptr [rbp+130h], ymm1
        vmovups ymm0, ymmword ptr [rbp+5C0h]
        vmovups ymmword ptr [rbp+150h], ymm0
        vmovups ymm1, ymmword ptr [rbp+520h]
        vmovups ymmword ptr [rbp+170h], ymm1
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+540h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+560h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+580h], ymm1
      }
      SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::CopySumMultiple<SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>>((SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 144), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 480), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 800));
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+214h]
        vmovss  dword ptr [rbp+0], xmm2
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x528) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x530) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x538) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x548) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x550) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x558) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x568) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x570) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x578) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x588) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x590) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x598) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+520h]
        vmovups ymmword ptr [rbp+110h], ymm0
        vmovups ymm1, ymmword ptr [rbp+540h]
        vmovups ymmword ptr [rbp+130h], ymm1
        vmovups ymm0, ymmword ptr [rbp+560h]
        vmovups ymmword ptr [rbp+150h], ymm0
        vmovups ymm1, ymmword ptr [rbp+580h]
        vmovups ymmword ptr [rbp+170h], ymm1
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      __asm
      {
        vmovaps xmm0, xmm2
        vshufps xmm0, xmm0, xmm0, 0
        vinsertf128 ymm0, ymm0, xmm0, 1
        vmovups ymmword ptr [rbp+520h], ymm0
      }
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveSumProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    }
    SD_ProcessMasterBusInPlace((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), &_RDI->masterParams.mainEq, &g_sd.mixMasterState.eqMain, &_RDI->masterParams.mainDyn, &_RDI->masterParams.mainPeakLimit, &g_sd.mixMasterState.dynMain, &g_sd.mixMasterState.meters.main, v23);
    if ( _RDI->masterParams.busReferenceEnable )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+220h]
        vmovss  dword ptr [rbp+0], xmm0
      }
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1600), 0xBu);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+110h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+130h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+150h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+170h], ymm1
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      __asm
      {
        vbroadcastss ymm0, dword ptr [rbp+0]
        vmovups ymmword ptr [rbp+520h], ymm0
      }
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveSumProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    }
    if ( _RDI->masterParams.busMovieEnable && g_sd.auxCallback && !g_sd.hasCinematicSound && g_sd.auxCallback((SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 144)) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+910h]
        vmulss  xmm2, xmm0, dword ptr [rdi+21Ch]
        vmovss  dword ptr [rbp+0], xmm2
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x528) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x530) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x538) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x548) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x550) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x558) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x568) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x570) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x578) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x588) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x590) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x598) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+520h]
        vmovups ymmword ptr [rbp+110h], ymm0
        vmovups ymm1, ymmword ptr [rbp+540h]
        vmovups ymmword ptr [rbp+130h], ymm1
        vmovups ymm0, ymmword ptr [rbp+560h]
        vmovups ymmword ptr [rbp+150h], ymm0
        vmovups ymm1, ymmword ptr [rbp+580h]
        vmovups ymmword ptr [rbp+170h], ymm1
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      __asm
      {
        vmovaps xmm0, xmm2
        vshufps xmm0, xmm0, xmm0, 0
        vinsertf128 ymm0, ymm0, xmm0, 1
        vmovups ymmword ptr [rbp+520h], ymm0
      }
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveSumProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f7ae148
      vmovss  dword ptr [rbp+0], xmm6
    }
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    _RBX = *(const SD_DSP::AtmosFrame **)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 234, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
      __debugbreak();
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((_BYTE)_RBP + 32) & 0x1F;
    _RSI = 0i64;
    v94 = 256i64;
    do
    {
      _RAX = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast(&_RBX[v39].val);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmaxps  ymm1, ymm0, cs:__ymm@bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148
        vminps  ymm0, ymm1, cs:__ymm@3f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae148
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmaxps  ymm1, ymm0, cs:__ymm@bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148
        vminps  ymm0, ymm1, cs:__ymm@3f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae148
        vmovups ymmword ptr [rbp+5C0h], ymm0
      }
      if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 484, ASSERT_TYPE_ASSERT, "(SD_IsAligned< typename T::TransientType >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< typename T::TransientType >::Value( in )") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+520h]
        vmovups ymmword ptr [rsi+rbx], ymm0
        vmovups ymm1, ymmword ptr [rbp+5C0h]
        vmovups ymmword ptr [rsi+rbx+20h], ymm1
      }
      ++v39;
      _RSI += 64i64;
      --v94;
    }
    while ( v94 );
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    _RDI = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
    _R14 = *(const float **)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    v106 = 256i64;
    if ( *(_DWORD *)(_RDI + 564) )
    {
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1600), 0xDu);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+5C0h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+600h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+1C0h], ymm0
      }
      _RAX = SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 928), 0xCu);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+520h]
        vmovups ymmword ptr [rbp+110h], ymm0
        vmovups ymm1, ymmword ptr [rbp+5C0h]
        vmovups ymmword ptr [rbp+130h], ymm1
        vmovups ymm0, ymmword ptr [rbp+600h]
        vmovups ymmword ptr [rbp+150h], ymm0
        vmovups ymm1, ymmword ptr [rbp+1C0h]
        vmovups ymmword ptr [rbp+170h], ymm1
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+1E0h], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+200h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+220h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+240h], ymm1
      }
      SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::CopySumMultiple<SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>>((SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 144), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 480), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272));
      __asm
      {
        vmovss  dword ptr [rbp+0], xmm6
        vmovss  xmm2, dword ptr [rdi+218h]
        vmovss  dword ptr [rbp+20h], xmm2
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x528) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x530) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x538) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x548) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x550) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x558) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x568) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x570) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x578) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x588) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x590) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x598) = *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+520h]
        vmovups ymmword ptr [rbp+110h], ymm0
        vmovups ymm1, ymmword ptr [rbp+540h]
        vmovups ymmword ptr [rbp+130h], ymm1
        vmovups ymm0, ymmword ptr [rbp+560h]
        vmovups ymmword ptr [rbp+150h], ymm0
        vmovups ymm1, ymmword ptr [rbp+580h]
        vmovups ymmword ptr [rbp+170h], ymm1
      }
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
      __asm
      {
        vmovups ymm0, cs:__ymm@bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148
        vmovups ymmword ptr [rbp+520h], ymm0
        vmovups ymm1, cs:__ymm@3f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae148
        vmovups ymmword ptr [rbp+540h], ymm1
        vmovaps xmm0, xmm2
        vshufps xmm0, xmm0, xmm0, 0
        vinsertf128 ymm0, ymm0, xmm0, 1
        vmovups ymmword ptr [rbp+560h], ymm0
      }
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Clip<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 72), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Clip<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = (unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
      _R14 = *(const float **)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    }
    if ( *(_BYTE *)(_RDI + 2324) )
    {
      *(_DWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = 256;
      LOBYTE(v128) = t;
      *(_DWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) = t;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 72;
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 234, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
        __debugbreak();
      _RDI = 0i64;
      v130 = 256i64;
      __asm
      {
        vmovss  xmm6, cs:__real@3cc90fdb
        vmovss  xmm7, cs:__real@3e19999a
      }
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm0, xmm0, xmm6; X
        }
        *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
        __asm { vmulss  xmm0, xmm0, xmm7 }
        v128 = (unsigned __int8)(v128 + 1);
        __asm
        {
          vshufps xmm0, xmm0, xmm0, 0
          vinsertf128 ymm0, ymm0, xmm0, 1
          vmovups ymmword ptr [rbp+60h], ymm0
        }
        if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 484, ASSERT_TYPE_ASSERT, "(SD_IsAligned< typename T::TransientType >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< typename T::TransientType >::Value( in )") )
            __debugbreak();
          __asm { vmovups ymm0, ymmword ptr [rbp+60h] }
        }
        __asm
        {
          vmovups ymmword ptr [rdi+r14], ymm0
          vmovups ymmword ptr [rdi+r14+20h], ymm0
        }
        _RDI += 64i64;
        --v130;
      }
      while ( v130 );
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 72;
      t = v128;
      _RBX = *(const SD_DSP::AtmosFrame **)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
      v106 = 256i64;
    }
    g_sd.mixMasterUsec = Sys_Microseconds() - *(_DWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0);
    Sys_ProfEndNamedEvent();
    v137 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "meter");
    if ( Com_DevhostSystemActive(3) )
    {
      v138 = DCONST_DVARBOOL_snd_dsp_meters;
      if ( !DCONST_DVARBOOL_snd_dsp_meters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_dsp_meters") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v138->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v138->name) )
          __debugbreak();
      }
      if ( v138->current.enabled )
      {
        if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 46, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = _R14;
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 46, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = _RBX;
        if ( !*(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 39, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        v140 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(*(SD_DSP::AtmosFrame *const *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80));
        *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = _RBX;
        v141 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(_RBX);
        v142 = SD_DSP::RegisterTraits<__m256>::Upcast(v140);
        v143 = SD_DSP::RegisterTraits<__m256>::Upcast(v141);
        _RCX = v142 + 1;
        _RAX = (char *)v143 - (char *)v142;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax+rcx-20h]
            vmovups ymmword ptr [rcx-20h], ymm0
            vmovups ymm1, ymmword ptr [rax+rcx]
            vmovups ymmword ptr [rcx], ymm1
          }
          _RCX += 2;
          --v106;
        }
        while ( v106 );
        if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 445, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
          __debugbreak();
        if ( ((unsigned __int8)_R14 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 446, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        _RBX = SD_DSP::RegisterTraits<__m256>::Upcast(v140);
        _RAX = (char *)((char *)SD_DSP::RegisterTraits<__m256>::Upcast(_R14) - (char *)_RBX);
        v150 = 512i64;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax+rbx]
            vaddps  ymm1, ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rbx], ymm1
          }
          ++_RBX;
          --v150;
        }
        while ( v150 );
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups ymmword ptr [rbp+20h], ymm0
          vmovups ymmword ptr [rbp+5C0h], ymm0
          vmovups ymmword ptr [rbp+5E0h], ymm0
          vmovups ymm0, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz1.val.lo; sd_globals g_sd
          vmovups ymmword ptr [rbp+640h], ymm0
          vmovups ymm1, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz1.val.hi; sd_globals g_sd
          vmovups ymmword ptr [rbp+660h], ymm1
          vmovups ymm0, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz2.val.lo; sd_globals g_sd
          vmovups ymmword ptr [rbp+680h], ymm0
          vmovups ymm1, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz2.val.hi; sd_globals g_sd
          vmovups ymmword ptr [rbp+6A0h], ymm1
          vmovups ymm0, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz1.val.lo; sd_globals g_sd
          vmovups ymmword ptr [rbp+6C0h], ymm0
          vmovups ymm1, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz1.val.hi; sd_globals g_sd
          vmovups ymmword ptr [rbp+6E0h], ymm1
          vmovups ymm0, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz2.val.lo; sd_globals g_sd
          vmovups ymmword ptr [rbp+700h], ymm0
          vmovups ymm1, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz2.val.hi; sd_globals g_sd
          vmovups ymmword ptr [rbp+720h], ymm1
          vmovups ymm0, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterVu.val.lo; sd_globals g_sd
          vmovups ymmword ptr [rbp+600h], ymm0
          vmovups ymm1, ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterVu.val.hi; sd_globals g_sd
          vmovups ymmword ptr [rbp+620h], ymm1
        }
        _RBX = g_sd.ITU1770Window;
        *(_QWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = g_sd.ITU1770Window;
        *(_DWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = g_sd.ITU1770Offset;
        v165 = 19200i64;
        *(_DWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C) = 19200;
        SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_PeakFinder<SD_DSP::Functor_ITU1770<SD_DSP::Functor_VU<SD_DSP::Functor_Lookahead<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>>,SD_DSP::PeakFinderParams<SD_DSP::AtmosFrame> *,SD_DSP::ITU1770Params<SD_DSP::AtmosFrame> *,SD_DSP::VUParams<SD_DSP::AtmosFrame> *,SD_DSP::LookaheadParams<SD_DSP::AtmosFrame> *>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), (SD_DSP::PeakFinderParams<SD_DSP::AtmosFrame> *)(_RBP + 1472), (SD_DSP::ITU1770Params<SD_DSP::AtmosFrame> *)(_RBP + 1600), (SD_DSP::VUParams<SD_DSP::AtmosFrame> *)(_RBP + 1536), (SD_DSP::LookaheadParams<SD_DSP::AtmosFrame> *)(_RBP + 96));
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5C0h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterPeak.val.lo, ymm0; sd_globals g_sd
          vmovups ymm1, ymmword ptr [rbp+5E0h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterPeak.val.hi, ymm1; sd_globals g_sd
          vmovups ymm0, ymmword ptr [rbp+640h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz1.val.lo, ymm0; sd_globals g_sd
          vmovups ymm1, ymmword ptr [rbp+660h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz1.val.hi, ymm1; sd_globals g_sd
          vmovups ymm0, ymmword ptr [rbp+680h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz2.val.lo, ymm0; sd_globals g_sd
          vmovups ymm1, ymmword ptr [rbp+6A0h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.hz2.val.hi, ymm1; sd_globals g_sd
          vmovups ymm0, ymmword ptr [rbp+6C0h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz1.val.lo, ymm0; sd_globals g_sd
          vmovups ymm1, ymmword ptr [rbp+6E0h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz1.val.hi, ymm1; sd_globals g_sd
          vmovups ymm0, ymmword ptr [rbp+700h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz2.val.lo, ymm0; sd_globals g_sd
          vmovups ymm1, ymmword ptr [rbp+720h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meterFilter.wz2.val.hi, ymm1; sd_globals g_sd
          vmovups ymm0, ymmword ptr [rbp+600h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterVu.val.lo, ymm0; sd_globals g_sd
          vmovups ymm1, ymmword ptr [rbp+620h]
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterVu.val.hi, ymm1; sd_globals g_sd
        }
        g_sd.ITU1770Offset = *(_DWORD *)(((unsigned __int64)v200 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vxorps  xmm3, xmm3, xmm3
          vmovups ymmword ptr [rbp+5A0h], ymm3
        }
        if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 468, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
            __debugbreak();
          __asm
          {
            vmovups ymm3, ymmword ptr [rbp+5A0h]
            vxorps  xmm2, xmm2, xmm2
          }
        }
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rbp+1A0h], ymm0
            vmovups ymm1, ymmword ptr [rbx+20h]
            vmovups ymmword ptr [rbp+520h], ymm1
          }
          if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 476, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
              __debugbreak();
            __asm
            {
              vmovups ymm3, ymmword ptr [rbp+5A0h]
              vmovups ymm2, ymmword ptr [rbp+20h]
              vmovups ymm0, ymmword ptr [rbp+1A0h]
            }
          }
          __asm
          {
            vmulps  ymm0, ymm0, ymm0
            vaddps  ymm2, ymm0, ymm2
            vmovups ymmword ptr [rbp+20h], ymm2
            vmovups ymm0, ymmword ptr [rbp+520h]
            vmulps  ymm1, ymm0, ymm0
            vaddps  ymm3, ymm1, ymm3
            vmovups ymmword ptr [rbp+5A0h], ymm3
          }
          ++_RBX;
          --v165;
        }
        while ( v165 );
        __asm
        {
          vmulps  ymm1, ymm2, cs:__ymm@385a740e385a740e385a740e385a740e385a740e385a740e385a740e385a740e
          vmulps  ymm2, ymm3, cs:__ymm@385a740e385a740e385a740e385a740e385a740e385a740e385a740e385a740e
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterITU.val.lo, ymm1; sd_globals g_sd
          vmovups ymmword ptr cs:?g_sd@@3Usd_globals@@A.mixMasterState.meters.masterITU.val.hi, ymm2; sd_globals g_sd
        }
      }
    }
    g_sd.mixMasterMeterUsec = Sys_Microseconds() - v137;
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v204;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
SD_ProcessMasterBusInPlace
==============
*/
void SD_ProcessMasterBusInPlace(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *inOut, const SndMasterEqParamBank *eqParam, SndDspBiquad4x8State *eqState, const SndDynamicsParams *dynParams, const SndPeakLimiterParams *peakLimitParams, sd_mix_master_dynamics_state *dynState, SndDspDynamicsMeter *meter, bool recompute)
{
  char v16; 
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v17; 
  __int64 v23; 
  __int64 v24; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v29; 
  __int64 v34; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v60; 
  SD_DSP::AtmosFrame *Data; 
  char v62[4]; 
  __int64 v63; 

  v63 = -2i64;
  _RBP = (unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64;
  _R13 = dynState;
  *(_QWORD *)(_RBP + 16) = meter;
  v16 = recompute;
  *(_BYTE *)_RBP = recompute;
  Sys_ProfBeginNamedEvent(0xFFFFD700, "SD_ProcessMasterBusInPlace");
  v17 = SD_GetEQProcessorParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 32), eqParam, eqState, recompute);
  memcpy_0((void *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 2592), v17, 0x700ui64);
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4480), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 2592));
  if ( dynParams && dynParams->enable )
  {
    if ( !dynState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 244, ASSERT_TYPE_ASSERT, "(dynState != nullptr)", (const char *)&queryFormat, "dynState != nullptr") )
      __debugbreak();
    SD_UpdateBusDynamicsState(dynParams, dynState, recompute);
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "sd_Compressor");
    __asm
    {
      vmovss  xmm0, dword ptr [r13+140h]
      vmovss  [rbp+18D0h+var_18CC.gain], xmm0
      vxorps  xmm2, xmm2, xmm2
      vmovups ymmword ptr [rbp+18D0h+var_11B0.lo], ymm2
      vmovups ymmword ptr [rbp+18D0h+var_11B0.hi], ymm2
      vmovss  xmm1, cs:__real@43800000
      vmovss  dword ptr [rbp+18D0h+var_ED0], xmm1
      vmovups ymmword ptr [rbp+18D0h+var_11B0.lo], ymm2
      vmovups ymmword ptr [rbp+18D0h+var_11B0.hi], ymm2
      vmovups ymm0, [rbp+18D0h+var_ED0]
      vmovups [rbp+18D0h+var_1170], ymm0
      vmovups ymmword ptr [rbp+18D0h+var_1150.peak.val.lo], ymm2
      vmovups ymmword ptr [rbp+18D0h+var_1150.peak.val.hi], ymm2
      vmovss  [rbp+18D0h+var_1150.frameCount], xmm1
    }
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(_RBP + 2592), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4480), (SD_DSP::GainParams<SD_DSP::AtmosFrame> *)(_RBP + 4), (SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *)(_RBP + 1920), 0);
    if ( !inOut->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 234, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
      __debugbreak();
    _RDI = 0i64;
    v23 = 0i64;
    v24 = 256i64;
    do
    {
      _RBX = inOut->data;
      _RAX = SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::Eval((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(_RBP + 2592), (SD_DSP::AtmosFrame::TransientType *)(_RBP + 1824), &inOut->data[v23].val);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi+rbx], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rdi+rbx+20h], ymm1
      }
      ++v23;
      _RDI += 64i64;
      --v24;
    }
    while ( v24 );
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 0x720) = 0i64;
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 0x728) = ((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 1920;
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 0x730) = ((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 4;
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 0x738) = ((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 4480;
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::ExtractState<std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(_RBP + 2592), (const std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t> *)(_RBP + 1824));
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 2592), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4480));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v29, eqState);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+18D0h+var_1150.peak.val.lo]
      vmovups ymmword ptr [r13+300h], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+var_1150.peak.val.hi]
      vmovups ymmword ptr [r13+320h], ymm1
    }
    _RAX = SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>((SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(_RBP + 2592), dynState);
    _RCX = _RBP + 32;
    v34 = 3i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 128i64;
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RAX = (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)((char *)_RAX + 128);
      --v34;
    }
    while ( v34 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.a10.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.peak.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.a10.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.peak.val.hi], ymm1
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.a20.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.ga.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.a20.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.ga.val.hi], ymm1
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.b00.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.gr.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.b00.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.gr.val.hi], ymm1
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.b10.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.lastEnvSample.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.b10.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.lastEnvSample.val.hi], ymm1
      vmovss  xmm0, dword ptr [rbp+18D0h+result.b20.val.lo]
      vmovss  [rbp+18D0h+params.postGain], xmm0
      vmovss  xmm1, dword ptr [rbp+18D0h+result.b20.val.lo+4]
      vmovss  [rbp+18D0h+params.ratio], xmm1
      vmovss  xmm0, dword ptr [rbp+18D0h+result.b20.val.lo+8]
      vmovss  [rbp+18D0h+params.threshold], xmm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.b20.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.maxInput.val.lo], ymm1
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.a11.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.maxInput.val.hi], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.a11.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.maxOutput.val.lo], ymm1
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.a21.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.maxOutput.val.hi], ymm0
      vmovups ymm1, ymmword ptr [rbp+18D0h+result.a21.val.hi]
      vmovups ymmword ptr [rbp+18D0h+params.minGain.val.lo], ymm1
      vmovups ymm0, ymmword ptr [rbp+18D0h+result.b01.val.lo]
      vmovups ymmword ptr [rbp+18D0h+params.minGain.val.hi], ymm0
    }
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>,SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *>(inOut, (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(_RBP + 2016));
    SD_SaveCompressorParams<SD_DSP::AtmosFrame>((const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(_RBP + 2016), dynState, *(SndDspDynamicsMeter **)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10));
    Sys_ProfEndNamedEvent();
    v16 = *(_BYTE *)_RBP;
  }
  else
  {
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_EQ4x<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>,SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *>(inOut, (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4480));
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 2592), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4480));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v60, eqState);
    if ( meter )
      memset_0(meter, 0, sizeof(SndDspDynamicsMeter));
  }
  if ( !peakLimitParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 270, ASSERT_TYPE_ASSERT, "(peakLimitParams != nullptr)", (const char *)&queryFormat, "peakLimitParams != nullptr") )
    __debugbreak();
  if ( v16 )
    SD_UpdateBusPeakLimiterState(peakLimitParams, dynState);
  if ( peakLimitParams->enable )
  {
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd_PeakLimiter");
    Data = SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(inOut);
    SD_DSP::PeakLimiter<16,64>::Process(&dynState->peakLimiter, Data->val.lo.m256_f32, 0x100u);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_ProcessSubmixBus
==============
*/
void SD_ProcessSubmixBus(const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *sequentialSrcBus, SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *interleavedDestBus, SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *scratchBus, sd_mix_master_dynamics_state *dynState, const SndDynamicsParams *dynParams, const SndPeakLimiterParams *peakLimitParams, const SndMasterEqParamBank *eqParams, SndDspBiquad4x8State *eqState, const float busGain, const bool recompute, SndDspDynamicsMeter *meter)
{
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v17; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v24; 
  __int64 v27; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v54; 
  SD_DSP::AtmosFrame *Data; 
  SD_DSP::AtmosFrame *v56; 
  SD_DSP::AtmosFrame *v57; 
  float *v58; 
  const float *v59; 
  __int64 v62; 
  SD_DSP::GainParams<SD_DSP::AtmosFrame> v65; 
  __int64 v66; 

  v66 = -2i64;
  _RBP = (unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64;
  _RSI = dynState;
  *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = interleavedDestBus;
  Sys_ProfBeginNamedEvent(0xFFDAA520, "SD_ProcessSubmixBus");
  v17 = SD_GetEQProcessorParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 160), eqParams, eqState, recompute);
  memcpy_0((void *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 2624), v17, 0x700ui64);
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4512), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 2624));
  if ( dynParams && dynParams->enable )
  {
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 321, ASSERT_TYPE_ASSERT, "(dynState != nullptr)", (const char *)&queryFormat, "dynState != nullptr") )
      __debugbreak();
    SD_UpdateBusDynamicsState(dynParams, _RSI, recompute);
    __asm
    {
      vmovss  xmm0, [rsp+1950h+arg_40]
      vmulss  xmm1, xmm0, dword ptr [rsi+140h]
      vmovss  [rbp+1900h+var_1900.gain], xmm1
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm1, cs:__real@43800000
      vmovups ymmword ptr [rbp+1900h+var_1160.peak.val.lo], ymm2
      vmovups ymmword ptr [rbp+1900h+var_1160.peak.val.hi], ymm2
      vmovss  [rbp+1900h+var_1160.frameCount], xmm1
    }
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(_RBP + 2624), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4512), (SD_DSP::GainParams<SD_DSP::AtmosFrame> *)((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64), (SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *)(_RBP + 1952), 0);
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveProcessFrom<SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>>(scratchBus, sequentialSrcBus, (SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(_RBP + 2624));
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0i64;
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 1952;
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = ((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 4512;
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::ExtractState<std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(_RBP + 2624), (const std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t> *)(_RBP + 24));
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1900h+var_1160.peak.val.lo]
      vmovups ymmword ptr [rsi+300h], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+var_1160.peak.val.hi]
      vmovups ymmword ptr [rsi+320h], ymm1
    }
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 2624), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4512));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v24, eqState);
    _RAX = SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>((SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(_RBP + 2624), _RSI);
    _RCX = _RBP + 160;
    v27 = 3i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 128i64;
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RAX = (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)((char *)_RAX + 128);
      --v27;
    }
    while ( v27 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rbp+1900h+result.a10.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.peak.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.a10.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.peak.val.hi], ymm1
      vmovups ymm0, ymmword ptr [rbp+1900h+result.a20.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.ga.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.a20.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.ga.val.hi], ymm1
      vmovups ymm0, ymmword ptr [rbp+1900h+result.b00.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.gr.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.b00.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.gr.val.hi], ymm1
      vmovups ymm0, ymmword ptr [rbp+1900h+result.b10.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.lastEnvSample.val.lo], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.b10.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.lastEnvSample.val.hi], ymm1
      vmovss  xmm0, dword ptr [rbp+1900h+result.b20.val.lo]
      vmovss  [rbp+1900h+params.postGain], xmm0
      vmovss  xmm1, dword ptr [rbp+1900h+result.b20.val.lo+4]
      vmovss  [rbp+1900h+params.ratio], xmm1
      vmovss  xmm0, dword ptr [rbp+1900h+result.b20.val.lo+8]
      vmovss  [rbp+1900h+params.threshold], xmm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.b20.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.maxInput.val.lo], ymm1
      vmovups ymm0, ymmword ptr [rbp+1900h+result.a11.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.maxInput.val.hi], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.a11.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.maxOutput.val.lo], ymm1
      vmovups ymm0, ymmword ptr [rbp+1900h+result.a21.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.maxOutput.val.hi], ymm0
      vmovups ymm1, ymmword ptr [rbp+1900h+result.a21.val.hi]
      vmovups ymmword ptr [rbp+1900h+params.minGain.val.lo], ymm1
      vmovups ymm0, ymmword ptr [rbp+1900h+result.b01.val.lo]
      vmovups ymmword ptr [rbp+1900h+params.minGain.val.hi], ymm0
    }
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>,SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *>(scratchBus, (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(_RBP + 2048));
    SD_SaveCompressorParams<SD_DSP::AtmosFrame>((const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(_RBP + 2048), _RSI, meter);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+1950h+arg_40]
      vmovss  [rbp+1900h+var_1900.gain], xmm0
    }
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveProcessFrom<SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>,SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *>(scratchBus, sequentialSrcBus, (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4512), (SD_DSP::GainParams<SD_DSP::AtmosFrame> *)((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64));
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 2624), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(_RBP + 4512));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v54, eqState);
    if ( meter )
      memset_0(meter, 0, sizeof(SndDspDynamicsMeter));
  }
  if ( peakLimitParams )
  {
    if ( recompute )
      SD_UpdateBusPeakLimiterState(peakLimitParams, _RSI);
    if ( peakLimitParams->enable )
    {
      Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd_PeakLimiter");
      Data = SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(scratchBus);
      SD_DSP::PeakLimiter<16,64>::Process(&_RSI->peakLimiter, Data->val.lo.m256_f32, 0x100u);
      Sys_ProfEndNamedEvent();
    }
  }
  if ( !scratchBus->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 46, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  v56 = scratchBus->data;
  v57 = SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(*(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> **)(((unsigned __int64)&v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10));
  v58 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(v57);
  v59 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(v56);
  _RBX = SD_DSP::RegisterTraits<__m256>::Upcast(v58);
  _RAX = (char *)((char *)SD_DSP::RegisterTraits<__m256>::Upcast(v59) - (char *)_RBX);
  v62 = 512i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rbx]
      vaddps  ymm1, ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rbx], ymm1
    }
    ++_RBX;
    --v62;
  }
  while ( v62 );
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_UpdateBusDynamicsState
==============
*/
void SD_UpdateBusDynamicsState(const SndDynamicsParams *dynParam, sd_mix_master_dynamics_state *state, bool recompute)
{
  char v15; 
  int v26; 
  int v27; 

  if ( recompute )
  {
    __asm { vmovss  xmm0, dword ptr [rcx+14h] }
    _RBX = state;
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    _RDI = dynParam;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm0, xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovss  xmm7, cs:__real@b7aec33e
      vdivss  xmm0, xmm7, xmm0; X
    }
    *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
    __asm
    {
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rbx+80h], ymm0
      vmovups ymmword ptr [rbx+0A0h], ymm0
      vmovss  xmm1, dword ptr [rdi+18h]
      vucomiss xmm1, xmm6
    }
    if ( !v15 )
    {
      __asm { vdivss  xmm0, xmm7, xmm1; X }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm
    {
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rbx+0C0h], ymm0
      vmovups ymmword ptr [rbx+0E0h], ymm0
    }
    _RBX->dynamicsComp8.threshold = _RDI->threshold;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  [rsp+58h+arg_10], xmm0
      vmovss  dword ptr [rbx+140h], xmm0
    }
    if ( (v26 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 40, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->dynamicsComp8.preGain ))", (const char *)&queryFormat, "!IS_NAN( state->dynamicsComp8.preGain )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+58h+arg_10], xmm0
      vmovss  dword ptr [rbx+1E8h], xmm0
    }
    if ( (v27 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 42, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->dynamicsComp8.postGain ))", (const char *)&queryFormat, "!IS_NAN( state->dynamicsComp8.postGain )") )
      __debugbreak();
    _RBX->dynamicsComp8.ituPrefilter = _RDI->ITU1770;
    _RBX->dynamicsComp8.ratio = _RDI->ratio;
    _RBX->dynamicsComp8.envMode = 1;
    _RBX->dynamicsComp8.enable = _RDI->enable;
  }
}

/*
==============
SD_UpdateBusPeakLimiterState
==============
*/
void SD_UpdateBusPeakLimiterState(const SndPeakLimiterParams *peakLimitParams, sd_mix_master_dynamics_state *state)
{
  __asm { vmovaps [rsp+68h+var_38], xmm9 }
  _RBX = state;
  _RDI = peakLimitParams;
  if ( !peakLimitParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 55, ASSERT_TYPE_ASSERT, "(peakLimitParams)", (const char *)&queryFormat, "peakLimitParams") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 56, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmaxss  xmm2, xmm0, cs:__real@3727c5ac
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  xmm4, dword ptr [rdi+10h]
    vmovss  xmm5, dword ptr [rdi+14h]
    vmovss  dword ptr [rbx+1169Ch], xmm0
    vmaxss  xmm0, xmm4, cs:__real@3dcccccd
    vdivss  xmm3, xmm1, xmm2
    vmovss  xmm2, cs:__real@447a0000
    vmaxss  xmm1, xmm5, cs:__real@3dcccccd
    vdivss  xmm0, xmm2, xmm0
    vmovss  dword ptr [rbx+116A8h], xmm0
    vdivss  xmm0, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbx+116B0h]
    vmovss  dword ptr [rbx+116ACh], xmm0
    vmovss  xmm0, cs:__real@41a00000
    vucomiss xmm1, xmm0
    vmovss  dword ptr [rbx+11698h], xmm3
    vmovss  xmm9, dword ptr [rbx+116B4h]
    vmovss  xmm0, cs:__real@40000000
    vucomiss xmm9, xmm0
    vmovaps xmm9, [rsp+68h+var_38]
  }
}

