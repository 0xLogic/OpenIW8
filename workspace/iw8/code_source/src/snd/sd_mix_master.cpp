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
  unsigned __int64 v2; 
  __m256i lo; 
  __m256i hi; 
  __m256i v5; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  float ratio; 
  float threshold; 
  __m256i *v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __m256i v17; 
  __int128 v18; 
  __int64 v20; 
  char v21[608]; 

  v2 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v2 + 480) = (unsigned __int64)&v20 ^ _security_cookie;
  lo = (__m256i)state->dynamicsComp8.ga.val.lo;
  hi = (__m256i)state->dynamicsComp8.ga.val.hi;
  v5 = (__m256i)state->dynamicsComp8.gr.val.lo;
  v6 = (__m256i)state->dynamicsComp8.gr.val.hi;
  v7 = (__m256i)state->dynamicsComp8.lastEnvSample.val.lo;
  v8 = (__m256i)state->dynamicsComp8.lastEnvSample.val.hi;
  v9 = (__m256i)state->dynamicsComp8.peak.val.lo;
  v10 = (__m256i)state->dynamicsComp8.peak.val.hi;
  ratio = state->dynamicsComp8.ratio;
  threshold = state->dynamicsComp8.threshold;
  v14 = (__m256i *)result;
  *(float *)(v2 + 256) = state->dynamicsComp8.postGain;
  *(float *)(v2 + 260) = ratio;
  *(float *)(v2 + 264) = threshold;
  *(__m256i *)v2 = v9;
  *(__m256i *)(v2 + 32) = v10;
  *(__m256i *)(v2 + 64) = lo;
  *(__m256i *)(v2 + 96) = hi;
  *(__m256i *)(v2 + 128) = v5;
  *(__m256i *)(v2 + 160) = v6;
  *(__m256i *)(v2 + 192) = v7;
  *(__m256i *)(v2 + 224) = v8;
  *(__m256i *)(v2 + 288) = (__m256i)0i64;
  *(__m256i *)(v2 + 320) = (__m256i)0i64;
  *(__m256i *)(v2 + 352) = (__m256i)0i64;
  *(__m256i *)(v2 + 384) = (__m256i)0i64;
  *(__m256i *)(v2 + 416) = _ymm;
  *(__m256i *)(v2 + 448) = _ymm;
  v15 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0ui64;
  v16 = 3i64;
  do
  {
    v14 += 4;
    v17 = *(__m256i *)v15;
    v18 = *(_OWORD *)(v15 + 112);
    v15 += 128i64;
    v14[-4] = v17;
    v14[-3] = *(__m256i *)(v15 - 96);
    v14[-2] = *(__m256i *)(v15 - 64);
    *(_OWORD *)v14[-1].m256i_i8 = *(_OWORD *)(v15 - 32);
    *(_OWORD *)&v14[-1].m256i_u64[2] = v18;
    --v16;
  }
  while ( v16 );
  *v14 = *(__m256i *)v15;
  v14[1] = *(__m256i *)(v15 + 32);
  v14[2] = *(__m256i *)(v15 + 64);
  return result;
}

/*
==============
SD_GetEQProcessorParams<SD_DSP::AtmosFrame>
==============
*/
SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *SD_GetEQProcessorParams<SD_DSP::AtmosFrame>(SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *result, const SndMasterEqParamBank *param, SndDspBiquad4x8State *state, const bool setup)
{
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v4; 
  __m256i hi; 
  __m256i lo; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  __m256i v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __m256i v23; 
  __m256i v24; 
  __m256i v25; 
  __m256i v26; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  __m256i v31; 
  __m256i v32; 
  __m256i v33; 
  __m256i v34; 
  __m256i v35; 
  __m256i v36; 
  __m256i v37; 
  __m256i v38; 
  __m256i v39; 
  __m256i v40; 
  __m256i v41; 
  __m256i v42; 
  __m256i v43; 
  __m256i v44; 
  __m256i v45; 
  __m256i v46; 
  __m256i v47; 
  __m256i v48; 
  __m256i v49; 
  __m256i v50; 
  __m256i v51; 
  __m256i v52; 
  __m256i v53; 
  __m256i v54; 
  __m256i v55; 
  __m256i v56; 
  __m256i v57; 
  __m256i v58; 
  __m256i v59; 
  __m256i v60; 
  __m256i v61; 
  const void *v62; 
  __int64 v64; 
  char v65[3600]; 

  v4 = (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64);
  *(_QWORD *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE00) = (unsigned __int64)&v64 ^ _security_cookie;
  if ( setup )
  {
    SND_DspBiquadLShelve8(48000.0, param->low.enabled, param->low.gain, param->low.frequency, param->low.q, &state->bq0);
    SND_DspBiquadPeak8(48000.0, param->peak1.enabled, param->peak1.gain, param->peak1.frequency, param->peak1.q, &state->bq1);
    SND_DspBiquadPeak8(48000.0, param->peak2.enabled, param->peak2.gain, param->peak2.frequency, param->peak2.q, &state->bq2);
    SND_DspBiquadHShelve8(48000.0, param->high.enabled, param->high.gain, param->high.frequency, param->high.q, &state->bq3);
  }
  hi = (__m256i)state->bq0.a1.val.hi;
  v4->a10.val.lo = state->bq0.a1.val.lo;
  lo = (__m256i)state->bq0.a2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = hi;
  v10 = (__m256i)state->bq0.a2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = lo;
  v11 = (__m256i)state->bq0.b0.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v10;
  v12 = (__m256i)state->bq0.b0.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v11;
  v13 = (__m256i)state->bq0.b1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = v12;
  v14 = (__m256i)state->bq0.b1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0) = v13;
  v15 = (__m256i)state->bq0.b2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v14;
  v16 = (__m256i)state->bq0.b2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = v15;
  v17 = (__m256i)state->bq0.z1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = v16;
  v18 = (__m256i)state->bq0.z1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x500) = v17;
  v19 = (__m256i)state->bq0.z2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = v18;
  v20 = (__m256i)state->bq0.z2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = v19;
  v21 = (__m256i)state->bq1.a1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = v20;
  v22 = (__m256i)state->bq1.a1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = v21;
  v23 = (__m256i)state->bq1.a2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) = v22;
  v24 = (__m256i)state->bq1.a2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x180) = v23;
  v25 = (__m256i)state->bq1.b0.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0) = v24;
  v26 = (__m256i)state->bq1.b0.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = v25;
  v27 = (__m256i)state->bq1.b1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E0) = v26;
  v28 = (__m256i)state->bq1.b1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x200) = v27;
  v29 = (__m256i)state->bq1.b2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x220) = v28;
  v30 = (__m256i)state->bq1.b2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x240) = v29;
  v31 = (__m256i)state->bq1.z1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x260) = v30;
  v32 = (__m256i)state->bq1.z1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = v31;
  v33 = (__m256i)state->bq1.z2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = v32;
  v34 = (__m256i)state->bq1.z2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0) = v33;
  v35 = (__m256i)state->bq2.a1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5E0) = v34;
  v36 = (__m256i)state->bq2.a1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x280) = v35;
  v37 = (__m256i)state->bq2.a2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2A0) = v36;
  v38 = (__m256i)state->bq2.a2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C0) = v37;
  v39 = (__m256i)state->bq2.b0.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E0) = v38;
  v40 = (__m256i)state->bq2.b0.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x300) = v39;
  v41 = (__m256i)state->bq2.b1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x320) = v40;
  v42 = (__m256i)state->bq2.b1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x340) = v41;
  v43 = (__m256i)state->bq2.b2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x360) = v42;
  v44 = (__m256i)state->bq2.b2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x380) = v43;
  v45 = (__m256i)state->bq2.z1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3A0) = v44;
  v46 = (__m256i)state->bq2.z1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600) = v45;
  v47 = (__m256i)state->bq2.z2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x620) = v46;
  *(__m256 *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x660) = state->bq2.z2.val.hi;
  v48 = (__m256i)state->bq3.a1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x640) = v47;
  v49 = (__m256i)state->bq3.a1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3E0) = v48;
  v50 = (__m256i)state->bq3.a2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x3C0) = v49;
  v51 = (__m256i)state->bq3.a2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x420) = v50;
  v52 = (__m256i)state->bq3.b0.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x400) = v51;
  v53 = (__m256i)state->bq3.b0.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x460) = v52;
  v54 = (__m256i)state->bq3.b1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x440) = v53;
  v55 = (__m256i)state->bq3.b1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4A0) = v54;
  v56 = (__m256i)state->bq3.b2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x480) = v55;
  v57 = (__m256i)state->bq3.b2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4E0) = v56;
  v58 = (__m256i)state->bq3.z1.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C0) = v57;
  v59 = (__m256i)state->bq3.z1.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6A0) = v58;
  v60 = (__m256i)state->bq3.z2.val.hi;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x680) = v59;
  v61 = (__m256i)state->bq3.z2.val.lo;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6E0) = v60;
  *(__m256i *)(((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C0) = v61;
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>(v4 + 1, (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)((unsigned __int64)v65 & 0xFFFFFFFFFFFFFFE0ui64));
  memcpy_0(result, v62, sizeof(SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>));
  return result;
}

/*
==============
SD_SaveCompressorParams<SD_DSP::AtmosFrame>
==============
*/
void SD_SaveCompressorParams<SD_DSP::AtmosFrame>(const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *params, sd_mix_master_dynamics_state *const state, SndDspDynamicsMeter *meter)
{
  state->dynamicsComp8.lastEnvSample = params->lastEnvSample;
  if ( meter )
  {
    meter->dynamicsInput = params->maxInput;
    meter->dynamicsOutput = params->maxOutput;
    meter->dynamicsGain = params->minGain;
    __asm { vbroadcastss ymm0, dword ptr [rcx+108h] }
    meter->dynamicsThreshold.val.lo = _YMM0;
    meter->dynamicsThreshold.val.hi = _YMM0;
  }
}

/*
==============
SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>
==============
*/
void SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *params, SndDspBiquad4x8State *state)
{
  state->bq0.z1 = params->z10;
  state->bq0.z2 = params->z20;
  state->bq1.z1 = params->z11;
  state->bq1.z2 = params->z21;
  state->bq2.z1 = params->z12;
  state->bq2.z2 = params->z22;
  state->bq3.z1 = params->z13;
  state->bq3.z2 = params->z23;
}

/*
==============
SD_MixMaster
==============
*/
void SD_MixMaster()
{
  signed __int64 v0; 
  void *v1; 
  SD_DSP::AtmosFrame *v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  float *v7; 
  float *v8; 
  unsigned int v9; 
  float **v10; 
  float *v11; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  sd_mix_master_param *mixParam; 
  bool v17; 
  __m256i *ConstSequentialBus; 
  __m256i *v19; 
  __m256i *v20; 
  __int64 v21; 
  __m256i *v22; 
  __m256i *v23; 
  __m256i *v24; 
  __m256i *v25; 
  __m128 busReverbGain_low; 
  __m256i *v29; 
  __m128 movieMasterGain_low; 
  const SD_DSP::AtmosFrame *v34; 
  __int64 v35; 
  __int64 v36; 
  __m256i *v37; 
  __int64 v44; 
  const float *v45; 
  __int64 v46; 
  __m256i *v47; 
  __m256i *v48; 
  __m128 v49; 
  unsigned int v52; 
  __int64 v53; 
  __int64 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  int v60; 
  const dvar_t *v61; 
  unsigned int flags; 
  float *v63; 
  const float *v64; 
  __m256 *v65; 
  const __m256 *v66; 
  __m256i *v67; 
  signed __int64 v68; 
  __m256 *v69; 
  char *v70; 
  __int64 v71; 
  SD_DSP::AtmosFrame *ITU1770Window; 
  __int64 v73; 
  __m256 v74; 
  __m256 v75; 
  __m256 lo; 
  __int64 v77; 
  bool recompute; 
  SndDspDynamicsMeter *meter; 
  char v80[18248]; 
  __int64 v81; 

  v1 = alloca(v0);
  v81 = -2i64;
  _RBP = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4740) = (unsigned __int64)&v77 ^ _security_cookie;
  v3 = (SD_DSP::AtmosFrame *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 1856);
  v4 = 256i64;
  do
  {
    SD_DSP::AtmosFrame::AtmosFrame(v3++);
    --v4;
  }
  while ( v4 );
  *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = SD_GetInterleavedBus((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)0xE, v5);
  *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = SD_GetInterleavedBus((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)0xF, v6);
  *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 1856;
  v7 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast((SD_DSP::AtmosFrame *const)(_RBP + 1856));
  v8 = v7;
  if ( ((unsigned __int8)v7 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_buffer.h", 73, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( extData ) ) & ( ( 32 ) - 1 ) ) == 0 ) )", "( ( ( uintptr_t )extData ) ) = 0x%llx", v7) )
    __debugbreak();
  v9 = 0;
  v10 = (float **)(_RBP + 1312);
  do
  {
    v11 = &v8[256 * v9];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 452, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
      __debugbreak();
    if ( ((unsigned __int8)v8 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 453, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
      __debugbreak();
    *v10 = v11;
    ++v9;
    ++v10;
  }
  while ( v9 < 0x10 );
  v12 = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = v12;
  v13 = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540);
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = v13;
  v14 = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560);
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = v14;
  v15 = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580);
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = v15;
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90) = v12;
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0) = v13;
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0) = v14;
  *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0) = v15;
  mixParam = g_sd.mixParam;
  *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = g_sd.mixParam;
  if ( !mixParam->muted )
  {
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd mix master usec");
    v17 = memcmp_0(mixParam, &g_sd.mixLastParam, 0x918ui64) != 0;
    memcpy_0(&g_sd.mixLastParam, mixParam, sizeof(g_sd.mixLastParam));
    if ( mixParam->masterParams.busSfxEnable )
    {
      ConstSequentialBus = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), 8u);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *ConstSequentialBus;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = ConstSequentialBus[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = ConstSequentialBus[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = ConstSequentialBus[3];
      meter = &g_sd.mixMasterState.meters.sfx;
      recompute = v17;
      SD_ProcessSubmixBus((const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), &g_sd.mixMasterState.dynSfx, &mixParam->masterParams.sfxDyn, &mixParam->masterParams.sfxPeakLimit, &mixParam->masterParams.sfxEq, &g_sd.mixMasterState.eqSfx, mixParam->masterParams.busSfxGain, v17, &g_sd.mixMasterState.meters.sfx);
    }
    if ( mixParam->masterParams.busDialogEnable )
    {
      v19 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), 9u);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *v19;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = v19[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = v19[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = v19[3];
      meter = &g_sd.mixMasterState.meters.dialogue;
      recompute = v17;
      SD_ProcessSubmixBus((const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), &g_sd.mixMasterState.dynDialogue, &mixParam->masterParams.dialogDyn, &mixParam->masterParams.dialogPeakLimit, &mixParam->masterParams.dialogEq, &g_sd.mixMasterState.eqDialogue, mixParam->masterParams.busDialogGain, v17, &g_sd.mixMasterState.meters.dialogue);
    }
    if ( mixParam->masterParams.busWeapExpSceneEnable )
    {
      v20 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), 0xAu);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *v20;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = v20[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = v20[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = v20[3];
      v21 = 0i64;
      meter = NULL;
      recompute = v17;
      SD_ProcessSubmixBus((const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), NULL, NULL, NULL, &mixParam->masterParams.weapExpScenesEq, &g_sd.mixMasterState.eqWeapExpScene, mixParam->masterParams.busWeapExpSceneGain, v17, NULL);
    }
    else
    {
      v21 = 0i64;
    }
    if ( mixParam->masterParams.busReverbEnable )
    {
      v22 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1056), 5u);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0) = *v22;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v22[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x260) = v22[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x280) = v22[3];
      v23 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1184), 4u);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2A0) = *v23;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C0) = v23[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E0) = v23[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x300) = v23[3];
      v24 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 928), 7u);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = *v24;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600) = v24[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0) = v24[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = v24[3];
      v25 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1600), 6u);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x320) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x340) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x360) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x260);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x380) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x280);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E0) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2A0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x200) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2C0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x220) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x2E0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x240) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x300);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *v25;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = v25[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = v25[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = v25[3];
      SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::CopySumMultiple<SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>>((SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 144), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1312), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 480), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 800));
      busReverbGain_low = (__m128)LODWORD(mixParam->masterParams.busReverbGain);
      *(float *)_RBP = busReverbGain_low.m128_f32[0];
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x528) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x530) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x538) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x548) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x550) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x558) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x568) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x570) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x578) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x588) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x590) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x598) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(busReverbGain_low, busReverbGain_low, 0);
      __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = _YMM0;
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveSumProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    }
    SD_ProcessMasterBusInPlace((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), &mixParam->masterParams.mainEq, &g_sd.mixMasterState.eqMain, &mixParam->masterParams.mainDyn, &mixParam->masterParams.mainPeakLimit, &g_sd.mixMasterState.dynMain, &g_sd.mixMasterState.meters.main, v17);
    if ( mixParam->masterParams.busReferenceEnable )
    {
      *(float *)_RBP = mixParam->masterParams.busReferenceGain;
      v29 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1600), 0xBu);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = *v29;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = v29[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = v29[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = v29[3];
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      __asm { vbroadcastss ymm0, dword ptr [rbp+0] }
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = _YMM0;
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveSumProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    }
    if ( mixParam->masterParams.busMovieEnable && g_sd.auxCallback && !g_sd.hasCinematicSound && g_sd.auxCallback((SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 144)) )
    {
      movieMasterGain_low = (__m128)LODWORD(mixParam->movieMasterGain);
      movieMasterGain_low.m128_f32[0] = mixParam->movieMasterGain * mixParam->masterParams.busMovieGain;
      *(float *)_RBP = movieMasterGain_low.m128_f32[0];
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x528) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x530) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x538) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x548) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x550) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x558) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x568) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x570) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x578) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x588) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x590) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x598) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(movieMasterGain_low, movieMasterGain_low, 0);
      __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = _YMM0;
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveSumProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 64), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    }
    *(const float *)_RBP = FLOAT_0_98000002;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    v34 = *(const SD_DSP::AtmosFrame **)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 234, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
      __debugbreak();
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((_BYTE)_RBP + 32) & 0x1F;
    v35 = 0i64;
    v36 = 256i64;
    do
    {
      v37 = (__m256i *)SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Registercast(&v34[v21].val);
      _YMM0 = *v37;
      __asm
      {
        vmaxps  ymm1, ymm0, cs:__ymm@bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148
        vminps  ymm0, ymm1, cs:__ymm@3f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae148
      }
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = _YMM0;
      _YMM0 = v37[1];
      __asm
      {
        vmaxps  ymm1, ymm0, cs:__ymm@bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148
        vminps  ymm0, ymm1, cs:__ymm@3f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae1483f7ae148
      }
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0) = _YMM0;
      if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 484, ASSERT_TYPE_ASSERT, "(SD_IsAligned< typename T::TransientType >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< typename T::TransientType >::Value( in )") )
        __debugbreak();
      v34[v35].val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
      v34[v35].val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0);
      ++v21;
      ++v35;
      --v36;
    }
    while ( v36 );
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = 0i64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
    v44 = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
    v45 = *(const float **)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    v46 = 256i64;
    if ( *(_DWORD *)(v44 + 564) )
    {
      v47 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 1600), 0xDu);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *v47;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0) = v47[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600) = v47[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = v47[3];
      v48 = (__m256i *)SD_GetConstSequentialBus((SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 928), 0xCu);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E0) = *v48;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x200) = v48[1];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x220) = v48[2];
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x240) = v48[3];
      SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256>::CopySumMultiple<SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>,SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256>>((SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 144), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 480), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272));
      *(const float *)_RBP = FLOAT_0_98000002;
      v49 = (__m128)*(unsigned int *)(v44 + 536);
      *(float *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v49.m128_f32[0];
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x528) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x98);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x530) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x538) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x548) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xB8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x550) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x558) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x568) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xD8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x570) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x578) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF0);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x588) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0xF8);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x590) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x598) = *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x108);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x110) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x130) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x150) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560);
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x170) = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x580);
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = _ymm_bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148bf7ae148;
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x540) = _ymm;
      _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v49, v49, 0);
      __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
      *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x560) = _YMM0;
      SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveProcessFrom<SD_DSP::Functor_Gain<SD_DSP::Functor_Clip<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 72), (const SD_DSP::ConstSequentialBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 272), (SD_DSP::Functor_Gain<SD_DSP::Functor_Clip<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > *)(_RBP + 1312));
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = (unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 32;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
      v45 = *(const float **)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    }
    if ( *(_BYTE *)(v44 + 2324) )
    {
      *(_DWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = 256;
      v52 = t;
      *(_DWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) = t;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 72;
      if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 234, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
        __debugbreak();
      v53 = 0i64;
      v54 = 256i64;
      do
      {
        v55 = 0i64;
        v55.m128_f32[0] = (float)v52;
        v55.m128_f32[0] = v55.m128_f32[0] * 0.024543693;
        v56 = v55;
        v56.m128_f32[0] = sinf_0(v55.m128_f32[0]);
        v57 = v56;
        v57.m128_f32[0] = v56.m128_f32[0] * 0.15000001;
        v52 = (unsigned __int8)(v52 + 1);
        _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v57, v57, 0);
        __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
        *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = _YMM0;
        if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 484, ASSERT_TYPE_ASSERT, "(SD_IsAligned< typename T::TransientType >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< typename T::TransientType >::Value( in )") )
            __debugbreak();
          _YMM0 = *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
        }
        *(__m256i *)&v45[v53] = _YMM0;
        *(__m256i *)&v45[v53 + 8] = _YMM0;
        v53 += 16i64;
        --v54;
      }
      while ( v54 );
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
      *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = ((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 72;
      t = v52;
      v34 = *(const SD_DSP::AtmosFrame **)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
      v46 = 256i64;
    }
    g_sd.mixMasterUsec = Sys_Microseconds() - *(_DWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0);
    Sys_ProfEndNamedEvent();
    v60 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "meter");
    if ( Com_DevhostSystemActive(3) )
    {
      v61 = DCONST_DVARBOOL_snd_dsp_meters;
      if ( !DCONST_DVARBOOL_snd_dsp_meters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_dsp_meters") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v61->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v61->name) )
          __debugbreak();
      }
      if ( v61->current.enabled )
      {
        if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 46, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = v45;
        if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 46, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = v34;
        if ( !*(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 39, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
          __debugbreak();
        v63 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(*(SD_DSP::AtmosFrame *const *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80));
        *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = v34;
        v64 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(v34);
        v65 = SD_DSP::RegisterTraits<__m256>::Upcast(v63);
        v66 = SD_DSP::RegisterTraits<__m256>::Upcast(v64);
        v67 = (__m256i *)&v65[1];
        v68 = (char *)v66 - (char *)v65;
        do
        {
          v67[-1] = *(__m256i *)((char *)&v67[-1] + v68);
          *v67 = *(__m256i *)((char *)v67 + v68);
          v67 += 2;
          --v46;
        }
        while ( v46 );
        if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 445, ASSERT_TYPE_ASSERT, "(in != nullptr)", (const char *)&queryFormat, "in != nullptr") )
          __debugbreak();
        if ( ((unsigned __int8)v45 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 446, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
          __debugbreak();
        v69 = SD_DSP::RegisterTraits<__m256>::Upcast(v63);
        v70 = (char *)((char *)SD_DSP::RegisterTraits<__m256>::Upcast(v45) - (char *)v69);
        v71 = 512i64;
        do
        {
          *v69 = _mm256_add_ps(*(__m256 *)((char *)v69 + (_QWORD)v70), *v69);
          ++v69;
          --v71;
        }
        while ( v71 );
        *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = (__m256i)0i64;
        *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0) = (__m256i)0i64;
        *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5E0) = (__m256i)0i64;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x640) = g_sd.mixMasterState.meterFilter.hz1.val.lo;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x660) = g_sd.mixMasterState.meterFilter.hz1.val.hi;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x680) = g_sd.mixMasterState.meterFilter.hz2.val.lo;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6A0) = g_sd.mixMasterState.meterFilter.hz2.val.hi;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C0) = g_sd.mixMasterState.meterFilter.wz1.val.lo;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6E0) = g_sd.mixMasterState.meterFilter.wz1.val.hi;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x700) = g_sd.mixMasterState.meterFilter.wz2.val.lo;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x720) = g_sd.mixMasterState.meterFilter.wz2.val.hi;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600) = g_sd.mixMasterState.meters.masterVu.val.lo;
        *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x620) = g_sd.mixMasterState.meters.masterVu.val.hi;
        ITU1770Window = g_sd.ITU1770Window;
        *(_QWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = g_sd.ITU1770Window;
        *(_DWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = g_sd.ITU1770Offset;
        v73 = 19200i64;
        *(_DWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C) = 19200;
        SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_PeakFinder<SD_DSP::Functor_ITU1770<SD_DSP::Functor_VU<SD_DSP::Functor_Lookahead<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>>,SD_DSP::PeakFinderParams<SD_DSP::AtmosFrame> *,SD_DSP::ITU1770Params<SD_DSP::AtmosFrame> *,SD_DSP::VUParams<SD_DSP::AtmosFrame> *,SD_DSP::LookaheadParams<SD_DSP::AtmosFrame> *>((SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *)(_RBP + 128), (SD_DSP::PeakFinderParams<SD_DSP::AtmosFrame> *)(_RBP + 1472), (SD_DSP::ITU1770Params<SD_DSP::AtmosFrame> *)(_RBP + 1600), (SD_DSP::VUParams<SD_DSP::AtmosFrame> *)(_RBP + 1536), (SD_DSP::LookaheadParams<SD_DSP::AtmosFrame> *)(_RBP + 96));
        g_sd.mixMasterState.meters.masterPeak.val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C0);
        g_sd.mixMasterState.meters.masterPeak.val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5E0);
        g_sd.mixMasterState.meterFilter.hz1.val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x640);
        g_sd.mixMasterState.meterFilter.hz1.val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x660);
        g_sd.mixMasterState.meterFilter.hz2.val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x680);
        g_sd.mixMasterState.meterFilter.hz2.val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6A0);
        g_sd.mixMasterState.meterFilter.wz1.val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C0);
        g_sd.mixMasterState.meterFilter.wz1.val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6E0);
        g_sd.mixMasterState.meterFilter.wz2.val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x700);
        g_sd.mixMasterState.meterFilter.wz2.val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x720);
        g_sd.mixMasterState.meters.masterVu.val.lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x600);
        g_sd.mixMasterState.meters.masterVu.val.hi = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x620);
        g_sd.ITU1770Offset = *(_DWORD *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68);
        v74 = (__m256)0i64;
        v75 = (__m256)0i64;
        *(__m256i *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = (__m256i)0i64;
        if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 468, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
            __debugbreak();
          v75 = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0);
          v74 = (__m256)0i64;
        }
        do
        {
          lo = ITU1770Window->val.lo;
          *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0) = ITU1770Window->val.lo;
          *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520) = ITU1770Window->val.hi;
          if ( (((_BYTE)_RBP + 32) & 0x1F) != 0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_core.h", 476, ASSERT_TYPE_ASSERT, "(SD_IsAligned< T >::Value( in ))", (const char *)&queryFormat, "SD_IsAligned< T >::Value( in )") )
              __debugbreak();
            v75 = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0);
            v74 = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
            lo = *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0);
          }
          v74 = _mm256_add_ps(_mm256_mul_ps(lo, lo), v74);
          *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v74;
          v75 = _mm256_add_ps(_mm256_mul_ps(*(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520), *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x520)), v75);
          *(__m256 *)(((unsigned __int64)v80 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5A0) = v75;
          ++ITU1770Window;
          --v73;
        }
        while ( v73 );
        g_sd.mixMasterState.meters.masterITU.val.lo = _mm256_mul_ps(v74, _ymm);
        g_sd.mixMasterState.meters.masterITU.val.hi = _mm256_mul_ps(v75, _ymm);
      }
    }
    g_sd.mixMasterMeterUsec = Sys_Microseconds() - v60;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SD_ProcessMasterBusInPlace
==============
*/
void SD_ProcessMasterBusInPlace(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> *inOut, const SndMasterEqParamBank *eqParam, SndDspBiquad4x8State *eqState, const SndDynamicsParams *dynParams, const SndPeakLimiterParams *peakLimitParams, sd_mix_master_dynamics_state *dynState, SndDspDynamicsMeter *meter, bool recompute)
{
  unsigned __int64 v8; 
  char v13; 
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  SD_DSP::AtmosFrame *data; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v19; 
  SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v23; 
  SD_DSP::AtmosFrame *v24; 
  char v25[4]; 
  __int64 v26; 

  v26 = -2i64;
  v8 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v8 + 16) = meter;
  v13 = recompute;
  *(_BYTE *)v8 = recompute;
  Sys_ProfBeginNamedEvent(0xFFFFD700, "SD_ProcessMasterBusInPlace");
  v14 = SD_GetEQProcessorParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 32), eqParam, eqState, recompute);
  memcpy_0((void *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 2592), v14, 0x700ui64);
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 4480), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 2592));
  if ( dynParams && dynParams->enable )
  {
    if ( !dynState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 244, ASSERT_TYPE_ASSERT, "(dynState != nullptr)", (const char *)&queryFormat, "dynState != nullptr") )
      __debugbreak();
    SD_UpdateBusDynamicsState(dynParams, dynState, recompute);
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "sd_Compressor");
    *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = dynState->dynamicsComp8.preGain;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x720) = (__m256i)0i64;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x740) = (__m256i)0i64;
    *(const float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA00) = FLOAT_256_0;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x720) = (__m256i)0i64;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x740) = (__m256i)0i64;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x760) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA00);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x780) = (__m256i)0i64;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7A0) = (__m256i)0i64;
    *(const float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C0) = FLOAT_256_0;
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(v8 + 2592), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 4480), (SD_DSP::GainParams<SD_DSP::AtmosFrame> *)(v8 + 4), (SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *)(v8 + 1920), 0);
    if ( !inOut->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 234, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
      __debugbreak();
    v15 = 0i64;
    v16 = 0i64;
    v17 = 256i64;
    do
    {
      data = inOut->data;
      data[v15++] = *(SD_DSP::AtmosFrame *)SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::Eval((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(v8 + 2592), (SD_DSP::AtmosFrame::TransientType *)(v8 + 1824), &inOut->data[v16++].val);
      --v17;
    }
    while ( v17 );
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x720) = 0i64;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x728) = ((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 1920;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x730) = ((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 4;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x738) = ((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 4480;
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::ExtractState<std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(v8 + 2592), (const std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t> *)(v8 + 1824));
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 2592), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 4480));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v19, eqState);
    dynState->dynamicsComp8.peak.val.lo = *(__m256 *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x780);
    dynState->dynamicsComp8.peak.val.hi = *(__m256 *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7A0);
    v20 = SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>((SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(v8 + 2592), dynState);
    v21 = v8 + 32;
    v22 = 3i64;
    do
    {
      *(__m256 *)v21 = v20->peak.val.lo;
      *(__m256 *)(v21 + 32) = v20->peak.val.hi;
      *(__m256 *)(v21 + 64) = v20->ga.val.lo;
      *(_OWORD *)(v21 + 96) = *(_OWORD *)v20->ga.val.hi.m256_f32;
      v21 += 128i64;
      *(_OWORD *)(v21 - 16) = *(_OWORD *)&v20->ga.val.hi.m256_f32[4];
      v20 = (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)((char *)v20 + 128);
      --v22;
    }
    while ( v22 );
    *(__m256 *)v21 = v20->peak.val.lo;
    *(__m256 *)(v21 + 32) = v20->peak.val.hi;
    *(__m256 *)(v21 + 64) = v20->ga.val.lo;
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7E0) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x800) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x820) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x840) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x860) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x880) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8A0) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8C0) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
    *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8E0) = *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120);
    *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8E4) = *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x124);
    *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8E8) = *(float *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x128);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x900) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x920) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x940) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x180);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x960) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x980) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0);
    *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x9A0) = *(__m256i *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E0);
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>,SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *>(inOut, (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(v8 + 2016));
    SD_SaveCompressorParams<SD_DSP::AtmosFrame>((const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(v8 + 2016), dynState, *(SndDspDynamicsMeter **)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10));
    Sys_ProfEndNamedEvent();
    v13 = *(_BYTE *)v8;
  }
  else
  {
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_EQ4x<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>,SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *>(inOut, (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 4480));
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 2592), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v8 + 4480));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v23, eqState);
    if ( meter )
      memset_0(meter, 0, sizeof(SndDspDynamicsMeter));
  }
  if ( !peakLimitParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 270, ASSERT_TYPE_ASSERT, "(peakLimitParams != nullptr)", (const char *)&queryFormat, "peakLimitParams != nullptr") )
    __debugbreak();
  if ( v13 )
    SD_UpdateBusPeakLimiterState(peakLimitParams, dynState);
  if ( peakLimitParams->enable )
  {
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd_PeakLimiter");
    v24 = SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(inOut);
    SD_DSP::PeakLimiter<16,64>::Process(&dynState->peakLimiter, v24->val.lo.m256_f32, 0x100u);
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
  unsigned __int64 v11; 
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v15; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v16; 
  SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *v20; 
  SD_DSP::AtmosFrame *Data; 
  SD_DSP::AtmosFrame *v22; 
  SD_DSP::AtmosFrame *v23; 
  float *v24; 
  const float *v25; 
  __m256 *v26; 
  char *v27; 
  __int64 v28; 
  SD_DSP::GainParams<SD_DSP::AtmosFrame> v29; 
  __int64 v30; 

  v30 = -2i64;
  v11 = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = interleavedDestBus;
  Sys_ProfBeginNamedEvent(0xFFDAA520, "SD_ProcessSubmixBus");
  v15 = SD_GetEQProcessorParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 160), eqParams, eqState, recompute);
  memcpy_0((void *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 2624), v15, 0x700ui64);
  SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 4512), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 2624));
  if ( dynParams && dynParams->enable )
  {
    if ( !dynState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 321, ASSERT_TYPE_ASSERT, "(dynState != nullptr)", (const char *)&queryFormat, "dynState != nullptr") )
      __debugbreak();
    SD_UpdateBusDynamicsState(dynParams, dynState, recompute);
    *(float *)v11 = busGain * dynState->dynamicsComp8.preGain;
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7A0) = (__m256i)0i64;
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C0) = (__m256i)0i64;
    *(const float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7E0) = FLOAT_256_0;
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(v11 + 2624), (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 4512), (SD_DSP::GainParams<SD_DSP::AtmosFrame> *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64), (SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *)(v11 + 1952), 0);
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveProcessFrom<SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>>(scratchBus, sequentialSrcBus, (SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(v11 + 2624));
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0i64;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 1952;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64;
    *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = ((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 4512;
    SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>>::ExtractState<std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t>>((SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_RMSFinder<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame> > > > *)(v11 + 2624), (const std::tuple<SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *,SD_DSP::RMSFinderParams<SD_DSP::AtmosFrame> *,std::nullptr_t> *)(v11 + 24));
    dynState->dynamicsComp8.peak.val.lo = *(__m256 *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7A0);
    dynState->dynamicsComp8.peak.val.hi = *(__m256 *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C0);
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 2624), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 4512));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v16, eqState);
    v17 = SD_GetBusDynamicsCompressorParams<SD_DSP::AtmosFrame>((SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(v11 + 2624), dynState);
    v18 = v11 + 160;
    v19 = 3i64;
    do
    {
      *(__m256 *)v18 = v17->peak.val.lo;
      *(__m256 *)(v18 + 32) = v17->peak.val.hi;
      *(__m256 *)(v18 + 64) = v17->ga.val.lo;
      *(_OWORD *)(v18 + 96) = *(_OWORD *)v17->ga.val.hi.m256_f32;
      v18 += 128i64;
      *(_OWORD *)(v18 - 16) = *(_OWORD *)&v17->ga.val.hi.m256_f32[4];
      v17 = (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)((char *)v17 + 128);
      --v19;
    }
    while ( v19 );
    *(__m256 *)v18 = v17->peak.val.lo;
    *(__m256 *)(v18 + 32) = v17->peak.val.hi;
    *(__m256 *)(v18 + 64) = v17->ga.val.lo;
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x800) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x820) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x840) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x860) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x880) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8A0) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8C0) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8E0) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x180);
    *(float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x900) = *(float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A0);
    *(float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x904) = *(float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A4);
    *(float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x908) = *(float *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1A8);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x920) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x940) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1E0);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x960) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x200);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x980) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x220);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x9A0) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x240);
    *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x9C0) = *(__m256i *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x260);
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::Process<SD_DSP::Functor_RMSEnvelopeProcessor<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>,SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *>(scratchBus, (SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(v11 + 2048));
    SD_SaveCompressorParams<SD_DSP::AtmosFrame>((const SD_DSP::RMSEnvelopeProcessorParams<SD_DSP::AtmosFrame> *)(v11 + 2048), dynState, meter);
  }
  else
  {
    *(const float *)v11 = busGain;
    SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::InterleaveProcessFrom<SD_DSP::Functor_EQ4x<SD_DSP::Functor_Gain<SD_DSP::Functor_Terminal<SD_DSP::AtmosFrame>>>,SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *,SD_DSP::GainParams<SD_DSP::AtmosFrame> *>(scratchBus, sequentialSrcBus, (SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 4512), (SD_DSP::GainParams<SD_DSP::AtmosFrame> *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64));
    SD_DSP::EQ4xParams<SD_DSP::AtmosFrame>::EQ4xParams<SD_DSP::AtmosFrame>((SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 2624), (const SD_DSP::EQ4xParams<SD_DSP::AtmosFrame> *)(v11 + 4512));
    SD_SaveEQProcessorParams<SD_DSP::AtmosFrame>(v20, eqState);
    if ( meter )
      memset_0(meter, 0, sizeof(SndDspDynamicsMeter));
  }
  if ( peakLimitParams )
  {
    if ( recompute )
      SD_UpdateBusPeakLimiterState(peakLimitParams, dynState);
    if ( peakLimitParams->enable )
    {
      Sys_ProfBeginNamedEvent(0xFFD8BFD8, "sd_PeakLimiter");
      Data = SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(scratchBus);
      SD_DSP::PeakLimiter<16,64>::Process(&dynState->peakLimiter, Data->val.lo.m256_f32, 0x100u);
      Sys_ProfEndNamedEvent();
    }
  }
  if ( !scratchBus->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_dsp_interleavedbuffer.h", 46, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  v22 = scratchBus->data;
  v23 = SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256>::GetData(*(SD_DSP::InterleavedBufferRefType<SD_DSP::AtmosFrame,256> **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10));
  v24 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(v23);
  v25 = SD_DSP::FrameTraits<SD_DSP::AtmosFrame>::Downcast(v22);
  v26 = SD_DSP::RegisterTraits<__m256>::Upcast(v24);
  v27 = (char *)((char *)SD_DSP::RegisterTraits<__m256>::Upcast(v25) - (char *)v26);
  v28 = 512i64;
  do
  {
    *v26 = _mm256_add_ps(*(__m256 *)((char *)v26 + (_QWORD)v27), *v26);
    ++v26;
    --v28;
  }
  while ( v28 );
  Sys_ProfEndNamedEvent();
}

/*
==============
SD_UpdateBusDynamicsState
==============
*/
void SD_UpdateBusDynamicsState(const SndDynamicsParams *dynParam, sd_mix_master_dynamics_state *state, bool recompute)
{
  float timeAttack; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  float timeRelease; 
  __m128 v12; 
  __m128 v13; 
  float preGain; 
  float postGain; 

  if ( recompute )
  {
    timeAttack = dynParam->timeAttack;
    v6 = 0i64;
    if ( timeAttack == 0.0 )
    {
      v7 = 0i64;
    }
    else
    {
      v8 = (__m128)LODWORD(FLOAT_N0_000020833333);
      v8.m128_f32[0] = -0.000020833333 / timeAttack;
      v7 = v8;
      v7.m128_f32[0] = expf_0(v8.m128_f32[0]);
    }
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v7, v7, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    state->dynamicsComp8.ga.val.lo = _YMM0;
    state->dynamicsComp8.ga.val.hi = _YMM0;
    timeRelease = dynParam->timeRelease;
    if ( timeRelease != 0.0 )
    {
      v13 = (__m128)LODWORD(FLOAT_N0_000020833333);
      v13.m128_f32[0] = -0.000020833333 / timeRelease;
      v12 = v13;
      v12.m128_f32[0] = expf_0(-0.000020833333 / timeRelease);
      v6 = v12;
    }
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v6, v6, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    state->dynamicsComp8.gr.val.lo = _YMM0;
    state->dynamicsComp8.gr.val.hi = _YMM0;
    state->dynamicsComp8.threshold = dynParam->threshold;
    preGain = dynParam->preGain;
    state->dynamicsComp8.preGain = preGain;
    if ( (LODWORD(preGain) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 40, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->dynamicsComp8.preGain ))", (const char *)&queryFormat, "!IS_NAN( state->dynamicsComp8.preGain )") )
      __debugbreak();
    postGain = dynParam->postGain;
    state->dynamicsComp8.postGain = postGain;
    if ( (LODWORD(postGain) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 42, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->dynamicsComp8.postGain ))", (const char *)&queryFormat, "!IS_NAN( state->dynamicsComp8.postGain )") )
      __debugbreak();
    state->dynamicsComp8.ituPrefilter = dynParam->ITU1770;
    state->dynamicsComp8.ratio = dynParam->ratio;
    state->dynamicsComp8.envMode = 1;
    state->dynamicsComp8.enable = dynParam->enable;
  }
}

/*
==============
SD_UpdateBusPeakLimiterState
==============
*/
void SD_UpdateBusPeakLimiterState(const SndPeakLimiterParams *peakLimitParams, sd_mix_master_dynamics_state *state)
{
  float inputGain; 
  char v9; 
  float v11; 
  float m_rmsRiseFilterCutoff; 
  float m_rmsFallFilterCutoff; 
  double v15; 

  if ( !peakLimitParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 55, ASSERT_TYPE_ASSERT, "(peakLimitParams)", (const char *)&queryFormat, "peakLimitParams") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_mix_master.cpp", 56, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  _XMM0 = LODWORD(peakLimitParams->threshold);
  __asm { vmaxss  xmm2, xmm0, cs:__real@3727c5ac }
  inputGain = peakLimitParams->inputGain;
  _XMM4 = LODWORD(peakLimitParams->releaseMin);
  _XMM5 = LODWORD(peakLimitParams->releaseMax);
  v9 = 0;
  state->peakLimiter.m_outputGain = peakLimitParams->outputGain;
  __asm { vmaxss  xmm0, xmm4, cs:__real@3dcccccd }
  v11 = inputGain / *(float *)&_XMM2;
  __asm { vmaxss  xmm1, xmm5, cs:__real@3dcccccd }
  state->peakLimiter.m_releaseRateMin = 1000.0 / *(float *)&_XMM0;
  *(float *)&_XMM0 = 1000.0 / *(float *)&_XMM1;
  m_rmsRiseFilterCutoff = state->peakLimiter.m_rmsRiseFilterCutoff;
  state->peakLimiter.m_releaseRateMax = *(float *)&_XMM0;
  state->peakLimiter.m_inputGain = v11;
  if ( m_rmsRiseFilterCutoff != 20.0 )
  {
    v9 = 1;
    state->peakLimiter.m_rmsRiseFilterCutoff = 20.0;
    m_rmsRiseFilterCutoff = FLOAT_20_0;
  }
  m_rmsFallFilterCutoff = state->peakLimiter.m_rmsFallFilterCutoff;
  if ( m_rmsFallFilterCutoff == 2.0 )
  {
    if ( !v9 )
      return;
  }
  else
  {
    state->peakLimiter.m_rmsFallFilterCutoff = 2.0;
    m_rmsFallFilterCutoff = FLOAT_2_0;
  }
  v15 = 1.0 / state->peakLimiter.m_sampleRate;
  _XMM0 = COERCE_UNSIGNED_INT64(1.0 - exp_0(m_rmsRiseFilterCutoff * -6.283185307179586 * v15));
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  state->peakLimiter.m_rmsRiseCoeff = *(float *)&_XMM1;
  _XMM0 = COERCE_UNSIGNED_INT64(1.0 - exp_0(m_rmsFallFilterCutoff * -6.283185307179586 * v15));
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  state->peakLimiter.m_rmsFallCoeff = *(float *)&_XMM1;
}

