/*
==============
Particle_ClearProfiler
==============
*/

void __fastcall Particle_ClearProfiler(LocalClientNum_t localClientNum)
{
  ?Particle_ClearProfiler@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ParticleProfileGlobalData::CostPerParticle
==============
*/

double __fastcall ParticleProfileGlobalData::CostPerParticle(ParticleProfileGlobalData *this)
{
  double result; 

  *(float *)&result = ?CostPerParticle@ParticleProfileGlobalData@@QEBAMXZ(this);
  return result;
}

/*
==============
Particle_OutputSystemNamesToBuffer
==============
*/

void __fastcall Particle_OutputSystemNamesToBuffer(char *buffer, unsigned int bufferSize, unsigned int commandType)
{
  ?Particle_OutputSystemNamesToBuffer@@YAXPEADII@Z(buffer, bufferSize, commandType);
}

/*
==============
ParticleProfileGlobalData::DrawData
==============
*/

void __fastcall ParticleProfileGlobalData::DrawData(ParticleProfileGlobalData *this, LocalClientNum_t localClientNum, const char *label, vec2_t *inOutProfilePos, bool outputCSVFormat)
{
  ?DrawData@ParticleProfileGlobalData@@QEBAXW4LocalClientNum_t@@PEBDAEATvec2_t@@_N@Z(this, localClientNum, label, inOutProfilePos, outputCSVFormat);
}

/*
==============
Particle_DrawProfiler
==============
*/

void __fastcall Particle_DrawProfiler(LocalClientNum_t localClientNum)
{
  ?Particle_DrawProfiler@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Particle_DrawDebugText
==============
*/
void CG_Particle_DrawDebugText(LocalClientNum_t localClientNum, const char *text, const vec2_t *profilePos, const vec4_t *color)
{
  __int64 v4; 
  __int64 v8; 
  bool v9; 
  const ScreenPlacement *v10; 
  float fmt; 
  float y; 
  float v16; 
  float v17; 

  v4 = localClientNum;
  _RBP = profilePos;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 112, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  v8 = -1i64;
  do
    ++v8;
  while ( text[v8] );
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v10 = &scrPlaceViewDisplay[v4];
      goto LABEL_13;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v9 )
      __debugbreak();
  }
  v10 = &scrPlaceFull;
LABEL_13:
  __asm
  {
    vmovss  xmm0, cs:__real@3f000000
    vmovss  xmm1, dword ptr [rbp+0]
    vmovss  [rsp+68h+var_20], xmm0
    vmovss  [rsp+68h+var_28], xmm0
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+68h+y], xmm0
    vmovss  dword ptr [rsp+68h+fmt], xmm1
  }
  CL_DrawText(v10, text, v8, cls.smallDevFont, fmt, y, 1, 1, v16, v17, color, 0);
}

/*
==============
ParticleProfileGlobalData::CostPerParticle
==============
*/

float __fastcall ParticleProfileGlobalData::CostPerParticle(ParticleProfileGlobalData *this, double _XMM1_8)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( this->numParticlesRunning + this->numTrailSegments + this->numBeamSegments )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm1, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
ParticleProfileGlobalData::DrawData
==============
*/
void ParticleProfileGlobalData::DrawData(ParticleProfileGlobalData *this, LocalClientNum_t localClientNum, const char *label, vec2_t *inOutProfilePos, bool outputCSVFormat)
{
  const char *v11; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v37; 
  const char *v38; 

  _RBX = inOutProfilePos;
  if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 579, ASSERT_TYPE_ASSERT, "(label)", (const char *)&queryFormat, "label") )
    __debugbreak();
  if ( outputCSVFormat )
  {
    v11 = j_va((const char *)&queryFormat, label);
    Particle_WriteOutDebugText(localClientNum, v11, _RBX, &colorWhiteFaded, outputCSVFormat);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm1, xmm0, cs:__real@41100000
      vcvttss2si edx, xmm1
    }
    CL_DrawRect(-20, _EDX + 1, 635, 8, &colorBlackFaded);
  }
  _RBX->v[0] = -20.0;
  v13 = j_va("%4i", this->numSystems);
  Particle_WriteOutDebugText(localClientNum, v13, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 10.0;
  v14 = j_va("%2i", this->numParticlesAllocated);
  Particle_WriteOutDebugText(localClientNum, v14, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 35.0;
  v15 = j_va("%2i", this->numParticlesSpawned);
  Particle_WriteOutDebugText(localClientNum, v15, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 60.0;
  v16 = j_va("%2i", this->numParticlesRunning);
  Particle_WriteOutDebugText(localClientNum, v16, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 85.0;
  v17 = j_va("%3i", this->numParticlesRendered);
  Particle_WriteOutDebugText(localClientNum, v17, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 110.0;
  v18 = j_va("%i", this->numLights);
  Particle_WriteOutDebugText(localClientNum, v18, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 130.0;
  v19 = j_va("%i", this->numRayCasts);
  Particle_WriteOutDebugText(localClientNum, v19, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 150.0;
  v20 = j_va("%i", this->numPhysicsFX);
  Particle_WriteOutDebugText(localClientNum, v20, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 170.0;
  v21 = j_va("%i", this->numPhysicsObjects);
  Particle_WriteOutDebugText(localClientNum, v21, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 190.0;
  v22 = j_va("%i", this->numBolts);
  Particle_WriteOutDebugText(localClientNum, v22, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 210.0;
  v23 = j_va("%i", this->numOcclusionQueries);
  Particle_WriteOutDebugText(localClientNum, v23, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 230.0;
  v24 = j_va("%i", this->numTrails);
  Particle_WriteOutDebugText(localClientNum, v24, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 250.0;
  v25 = j_va("%i", this->numTrailSegments);
  Particle_WriteOutDebugText(localClientNum, v25, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 270.0;
  v26 = j_va("%i", this->numBeams);
  Particle_WriteOutDebugText(localClientNum, v26, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 290.0;
  v27 = j_va("%i", this->numBeamSegments);
  Particle_WriteOutDebugText(localClientNum, v27, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 310.0;
  v28 = j_va("%4i", this->updateTimeMicroSecs);
  Particle_WriteOutDebugText(localClientNum, v28, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 335.0;
  v29 = j_va("%3i", this->renderTimeMicroSecs);
  Particle_WriteOutDebugText(localClientNum, v29, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 360.0;
  v30 = j_va("%3i", this->renderTimeMicroSecs + this->updateTimeMicroSecs);
  Particle_WriteOutDebugText(localClientNum, v30, _RBX, &colorWhiteFaded, outputCSVFormat);
  _RBX->v[0] = 385.0;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( this->numBeamSegments + this->numTrailSegments + this->numParticlesRunning )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm1, xmm0
    }
  }
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovq   rdx, xmm1
  }
  v37 = j_va("%.2f", _RDX);
  Particle_WriteOutDebugText(localClientNum, v37, _RBX, &colorWhiteFaded, outputCSVFormat);
  if ( !outputCSVFormat && label && *label )
  {
    _RBX->v[0] = 415.0;
    v38 = j_va((const char *)&queryFormat, label);
    Particle_WriteOutDebugText(localClientNum, v38, _RBX, &colorWhiteFaded, 0);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vaddss  xmm1, xmm0, cs:__real@41100000
    vmovss  dword ptr [rbx+4], xmm1
  }
}

/*
==============
Particle_ClearProfiler
==============
*/
void Particle_ClearProfiler(LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  unsigned __int64 *v2; 

  v1 = 0i64;
  v2 = &s_profileMapData[0].m_profileDataMap.m_size + 40972 * localClientNum;
  if ( *v2 )
  {
    do
    {
      if ( v1 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v1;
    }
    while ( v1 < *v2 );
    *v2 = 0i64;
  }
  else
  {
    *v2 = 0i64;
  }
}

/*
==============
Particle_DrawProfiler
==============
*/
void Particle_DrawProfiler(LocalClientNum_t localClientNum)
{
  __int64 v7; 
  ParticleManager *ParticleManager; 
  FastCriticalSection *p_m_handleManagerLock; 
  unsigned int v10; 
  ParticleSystem **m_pSystems; 
  unsigned int LocalClientTime; 
  bool v13; 
  __int64 v14; 
  __int64 v15; 
  ParticleProfileGlobalData *p_m_profileDataTotals; 
  __int64 v17; 
  const ParticleSystemDef *Def; 
  ParticleProfileMapData *v19; 
  ParticleProfileMapData *v20; 
  const char *name; 
  unsigned __int64 m_size; 
  __int64 v23; 
  __int64 v24; 
  ParticleProfileMapData *v25; 
  ParticleSystem *v26; 
  __int64 v29; 
  __int64 v31; 
  bool v34; 
  unsigned int MemoryUsageInBytes; 
  unsigned int v43; 
  char *v56; 
  const char *v58; 
  const dvar_t *v62; 
  const dvar_t *v83; 
  __int64 v84; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  __int64 v88; 
  bool v89; 
  unsigned int v90; 
  const char *v94; 
  bool (__fastcall *v96)(const ntl::pair<char const *,ParticleProfileGlobalData> *, const ntl::pair<char const *,ParticleProfileGlobalData> *); 
  char *v97; 
  char *v98; 
  const char *v99; 
  __int64 v103; 
  ntl::random_access_iterator_tag v104; 
  unsigned int m_numSystemsRunning; 
  ParticleManager *v107; 
  ParticleProfileGlobalData outProfileData; 
  __int64 v109; 
  __int64 v110; 
  char *SubStr; 
  _BYTE v112[80]; 
  vec2_t profilePos; 
  void *retaddr; 

  _R11 = &retaddr;
  v7 = localClientNum;
  if ( particle_profile->current.integer )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
    }
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    v107 = ParticleManager;
    p_m_handleManagerLock = &ParticleManager->m_handleManagerLock;
    if ( ParticleManager->m_handleManagerLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
      __debugbreak();
    if ( ((unsigned __int8)p_m_handleManagerLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", p_m_handleManagerLock) )
      __debugbreak();
    _InterlockedIncrement(&p_m_handleManagerLock->readCount);
    while ( ParticleManager->m_handleManagerLock.writeCount )
      Sys_Sleep(0);
    v10 = 0;
    m_numSystemsRunning = ParticleManager->m_numSystemsRunning;
    if ( p_m_handleManagerLock->readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", p_m_handleManagerLock->readCount, 0i64) )
      __debugbreak();
    if ( ((unsigned __int8)p_m_handleManagerLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", p_m_handleManagerLock) )
      __debugbreak();
    _InterlockedDecrement(&p_m_handleManagerLock->readCount);
    m_pSystems = ParticleManager->m_pSystems;
    LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)v7);
    SubStr = (char *)particle_profile_filter->current.integer64;
    v110 = v7;
    v13 = I_stricmp(SubStr, (const char *)&queryFormat.fmt + 3) != 0;
    v14 = v7;
    v104.ntl::input_iterator_tag = (ntl::input_iterator_tag)v13;
    v15 = v7;
    if ( LocalClientTime - s_profileMapData[v7].m_lastUpdateTime > particle_profile_update_time->current.integer )
    {
      s_profileMapData[v14].m_lastUpdateTime = LocalClientTime;
      Particle_ClearProfiler((LocalClientNum_t)v7);
      p_m_profileDataTotals = &s_profileMapData[v14].m_profileDataTotals;
      *(_QWORD *)&p_m_profileDataTotals->numSystems = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numParticlesSpawned = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numParticlesDelayed = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numLights = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numPhysicsFX = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numBolts = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numTrails = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numBeams = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->updateTimeMicroSecs = 0i64;
      ParticleManager::GetProfileData(v107, p_m_profileDataTotals);
      if ( m_numSystemsRunning )
      {
        v17 = m_numSystemsRunning;
        do
        {
          if ( (*m_pSystems)->m_isRunning )
          {
            Def = ParticleSystem::GetDef(*m_pSystems);
            v19 = &s_profileMapData[v14];
            v20 = &s_profileMapData[v14];
            name = Def->name;
            m_size = s_profileMapData[v14].m_profileDataMap.m_size;
            v23 = 80 * m_size;
            v24 = (__int64)(80 * m_size) / 80;
            if ( v24 > 0 )
            {
              do
              {
                if ( *(_QWORD *)&v20->m_profileDataMap.m_data.m_buffer[80 * (v24 >> 1)] >= (unsigned __int64)name )
                {
                  v24 >>= 1;
                }
                else
                {
                  v20 = (ParticleProfileMapData *)((char *)v20 + 80 * (v24 >> 1) + 80);
                  v24 += -1 - (v24 >> 1);
                }
              }
              while ( v24 > 0 );
              m_size = v19->m_profileDataMap.m_size;
            }
            v25 = (ParticleProfileMapData *)((char *)v19 + 80 * m_size);
            if ( v20 != v25 && (unsigned __int64)name < *(_QWORD *)v20->m_profileDataMap.m_data.m_buffer )
              v20 = (ParticleProfileMapData *)((char *)v19 + v23);
            v26 = *m_pSystems;
            if ( v20 == v25 )
            {
              memset(&outProfileData.numParticlesSpawned, 0, 64);
              v109 = 0i64;
              ParticleSystem::GetProfileData(v26, (ParticleProfileGlobalData *)&outProfileData.numParticlesSpawned);
              __asm
              {
                vmovups ymm0, ymmword ptr [rsp+190h+outProfileData.numParticlesSpawned]
                vmovups ymm1, ymmword ptr [rbp+90h+outProfileData.numBolts]
              }
              *(_QWORD *)v112 = name;
              v29 = s_profileMapData[v14].m_profileDataMap.m_size;
              _RDI = &s_profileMapData[v14];
              v31 = v29;
              __asm
              {
                vmovups [rbp+90h+var_C0+8], ymm0
                vmovsd  xmm0, [rbp+90h+var_E0]
                vmovsd  [rbp+90h+var_78], xmm0
                vmovups [rbp+90h+var_98], ymm1
              }
              while ( v29 > 0 )
              {
                if ( *(_QWORD *)&_RDI->m_profileDataMap.m_data.m_buffer[80 * (v29 >> 1)] >= (unsigned __int64)name )
                {
                  v29 >>= 1;
                }
                else
                {
                  _RDI = (ParticleProfileMapData *)((char *)_RDI + 80 * (v29 >> 1) + 80);
                  v29 += -1 - (v29 >> 1);
                }
              }
              if ( _RDI == (ParticleProfileMapData *)((char *)v19 + 80 * v31) || (unsigned __int64)name < *(_QWORD *)_RDI->m_profileDataMap.m_data.m_buffer )
              {
                if ( v31 == 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
                  __debugbreak();
                if ( (_RDI < v19 || _RDI > (ParticleProfileMapData *)((char *)v19 + 80 * s_profileMapData[v14].m_profileDataMap.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
                  __debugbreak();
                if ( (char *)_RDI - (char *)v19 != 80 * (((char *)_RDI - (char *)v19) / 0x50ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
                  __debugbreak();
                if ( v112 >= (_BYTE *)_RDI && v112 < &v19->m_profileDataMap.m_data.m_buffer[80 * s_profileMapData[v14].m_profileDataMap.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
                  __debugbreak();
                _RBX = (ParticleProfileMapData *)((char *)v19 + 80 * s_profileMapData[v14].m_profileDataMap.m_size);
                if ( _RDI != _RBX )
                {
                  _RSI = &_RBX->m_profileDataMap.m_data.m_buffer[80];
                  if ( _RDI == (ParticleProfileMapData *)&_RBX->m_profileDataMap.m_data.m_buffer[80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                    __debugbreak();
                  if ( _RBX == (ParticleProfileMapData *)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                    __debugbreak();
                  v34 = _RBX <= _RDI;
                  if ( _RBX < _RDI )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                      __debugbreak();
                    v34 = _RBX <= _RDI;
                  }
                  if ( !v34 )
                  {
                    do
                    {
                      __asm { vmovups ymm0, ymmword ptr [rbx-50h] }
                      _RBX = (ParticleProfileMapData *)((char *)_RBX - 80);
                      _RSI -= 80;
                      __asm
                      {
                        vmovups ymmword ptr [rsi], ymm0
                        vmovups ymm1, ymmword ptr [rbx+20h]
                        vmovups ymmword ptr [rsi+20h], ymm1
                        vmovups xmm0, xmmword ptr [rbx+40h]
                        vmovups xmmword ptr [rsi+40h], xmm0
                      }
                    }
                    while ( _RBX > _RDI );
                  }
                }
                __asm
                {
                  vmovups ymm0, [rbp+90h+var_C0]
                  vmovups ymm1, ymmword ptr [rbp-10h]
                }
                ++s_profileMapData[v14].m_profileDataMap.m_size;
                __asm
                {
                  vmovups ymmword ptr [rdi], ymm0
                  vmovups xmm0, xmmword ptr [rbp+90h+var_98+18h]
                  vmovups ymmword ptr [rdi+20h], ymm1
                  vmovups xmmword ptr [rdi+40h], xmm0
                }
              }
            }
            else
            {
              ParticleSystem::GetProfileData(v26, (ParticleProfileGlobalData *)&v20->m_profileDataMap.m_data.m_buffer[8]);
            }
          }
          ++m_pSystems;
          --v17;
        }
        while ( v17 );
        LODWORD(v7) = localClientNum;
        v15 = v110;
        v13 = (bool)v104.ntl::input_iterator_tag;
      }
    }
    MemoryUsageInBytes = ParticleManager::GetMemoryUsageInBytes(v107);
    __asm
    {
      vmovss  xmm9, cs:__real@c1a00000
      vmovss  xmm8, cs:__real@41100000
    }
    v43 = s_profileMemoryUsageInBytesMax[v15];
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( MemoryUsageInBytes > v43 )
      v43 = MemoryUsageInBytes;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm7, xmm0, cs:__real@35800000
    }
    s_profileMemoryUsageInBytesMax[v15] = v43;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
      vmulss  xmm6, xmm0, cs:__real@35800000
      vmovss  dword ptr [rbp+90h+profilePos], xmm9
      vmovss  dword ptr [rbp+90h+profilePos+4], xmm8
    }
    CL_DrawRect(-20, 1, 635, 8, &colorBlackFaded);
    __asm
    {
      vmovsd  xmm3, cs:__real@4028000000000000
      vcvtss2sd xmm2, xmm6, xmm6
      vcvtss2sd xmm1, xmm7, xmm7
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v56 = j_va("Memory Used: %.2f MB (Curr)\t %.2f MB (Max)\t %.2f MB (Budget)", _RDX, _R8, _R9);
    __asm { vmovaps xmm7, [rsp+190h+var_48+8] }
    v58 = v56;
    if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 131, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    CG_Particle_DrawDebugText((LocalClientNum_t)v7, v58, &profilePos, &colorLtBlue);
    __asm
    {
      vaddss  xmm6, xmm8, xmm8
      vsubss  xmm0, xmm6, xmm8
      vcvttss2si edx, xmm0
      vmovss  dword ptr [rbp+90h+profilePos+4], xmm6
    }
    CL_DrawRect(-20, _EDX + 1, 635, 8, &colorBlackFaded);
    v62 = particle_profile_memory_only;
    if ( !particle_profile_memory_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v62);
    if ( !v62->current.enabled )
    {
      __asm { vmovss  dword ptr [rbp+90h+profilePos], xmm9 }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Systems", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@41200000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Alloc", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@420c0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Spawn", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@42700000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Run", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@42aa0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Rndr", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@42dc0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "L", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43020000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "RC", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43160000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "LWP", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@432a0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "HWP", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@433e0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "BLT", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43520000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "OQ", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43660000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "TRL", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@437a0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "TSG", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43870000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "BEAM", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43910000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "BSG", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@439b0000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Update", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43a78000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Draw", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43b40000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Total", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43c08000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "CPP", &profilePos, &colorLtBlue);
      __asm
      {
        vmovss  xmm0, cs:__real@43cf8000
        vmovss  dword ptr [rbp+90h+profilePos], xmm0
      }
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, "Name", &profilePos, &colorLtBlue);
      __asm
      {
        vaddss  xmm0, xmm6, xmm8
        vmovss  dword ptr [rbp+90h+profilePos+4], xmm0
      }
    }
    v83 = particle_profile_memory_only;
    if ( !particle_profile_memory_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v83);
    if ( !v83->current.enabled )
    {
      v84 = v15;
      ParticleProfileGlobalData::DrawData(&s_profileMapData[v15].m_profileDataTotals, (LocalClientNum_t)v7, (const char *)&queryFormat.fmt + 3, &profilePos, 0);
      v85 = s_profileMapData[v15].m_profileDataMap.m_size;
      if ( v13 )
      {
        v86 = 0;
      }
      else
      {
        v86 = v85 / 0x14;
        if ( particle_profile->current.integer - 1 < (int)(v85 / 0x14) )
          v86 = particle_profile->current.integer - 1;
      }
      v87 = 0;
      v88 = 20 * v86;
      if ( v85 )
        v87 = v88 + 1;
      v89 = !v13;
      v90 = v85;
      if ( v89 && v85 > (int)v88 + 20 )
        v90 = v88 + 20;
      __asm
      {
        vaddss  xmm6, xmm8, dword ptr [rbp+90h+profilePos+4]
        vsubss  xmm0, xmm6, xmm8
        vcvttss2si edx, xmm0
        vmovss  dword ptr [rbp+90h+profilePos], xmm9
        vmovss  dword ptr [rbp+90h+profilePos+4], xmm6
      }
      CL_DrawRect(-20, _EDX + 1, 635, 8, &colorBlackFaded);
      if ( v104.ntl::input_iterator_tag )
        v94 = j_va("Showing results for first %i filtered systems", 20i64);
      else
        v94 = j_va("Showing results for %i - %i, out of %i", v87, v90, v85);
      CG_Particle_DrawDebugText((LocalClientNum_t)v7, v94, &profilePos, &colorLtBlue);
      __asm
      {
        vaddss  xmm0, xmm6, xmm8
        vmovss  dword ptr [rbp+90h+profilePos+4], xmm0
      }
      if ( m_numSystemsRunning )
      {
        switch ( particle_profile_sort->current.integer )
        {
          case 0:
            goto LABEL_115;
          case 1:
            v96 = Particle_SortProfileData_Cost_Update;
            break;
          case 2:
            v96 = Particle_SortProfileData_Cost_Render;
            break;
          case 3:
            v96 = Particle_SortProfileData_Name;
            break;
          case 4:
            v96 = Particle_SortProfileData_Particle_Count_Active;
            break;
          case 5:
            v96 = Particle_SortProfileData_Particle_Count_Allocated;
            break;
          case 6:
            v96 = Particle_SortProfileData_Bolts;
            break;
          case 7:
            v96 = Particle_SortProfileData_OcclusionQueries;
            break;
          case 8:
            v96 = Particle_SortProfileData_Trails;
            break;
          case 9:
            v96 = Particle_SortProfileData_TrailSegments;
            break;
          case 0xA:
            v96 = Particle_SortProfileData_Beams;
            break;
          case 0xB:
            v96 = Particle_SortProfileData_BeamSegments;
            break;
          case 0xC:
            v96 = Particle_SortProfileData_RayCasts;
            break;
          case 0xD:
            v96 = Particle_SortProfileData_PhysicsFX;
            break;
          case 0xE:
            v96 = Particle_SortProfileData_PhysicsObjects;
            break;
          case 0xF:
            v96 = Particle_SortProfileData_System_Count;
            break;
          case 0x10:
            v96 = Particle_SortProfileData_Cost_Per_Particle;
            break;
          default:
            LODWORD(v103) = particle_profile_sort->current.integer;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 405, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Impossible particle_profile_sort value %i", v103) )
              __debugbreak();
LABEL_115:
            v96 = Particle_SortProfileData_Cost_Total;
            break;
        }
        ntl::sort<ntl::pair<char const *,ParticleProfileGlobalData> *,bool (*)(ntl::pair<char const *,ParticleProfileGlobalData> const &,ntl::pair<char const *,ParticleProfileGlobalData> const &)>((ntl::pair<char const *,ParticleProfileGlobalData> *)&s_profileMapData[v84], (ntl::pair<char const *,ParticleProfileGlobalData> *)&s_profileMapData[v84] + s_profileMapData[v84].m_profileDataMap.m_size, v96, v104);
        v97 = &s_profileMapData[0].m_profileDataMap.m_data.m_buffer[80 * v88 + v84 * 327776];
        if ( v97 != (char *)&s_profileMapData[v84] + 80 * s_profileMapData[v84].m_profileDataMap.m_size )
        {
          v98 = SubStr;
          do
          {
            v99 = *(const char **)v97;
            if ( !*(_BYTE *)&v104.ntl::input_iterator_tag || strstr_0(*(const char **)v97, v98) )
            {
              ParticleProfileGlobalData::DrawData((ParticleProfileGlobalData *)(v97 + 8), (LocalClientNum_t)v7, v99, &profilePos, 0);
              ++v10;
            }
            v97 += 80;
          }
          while ( v10 < 0x14 && v97 != (char *)&s_profileMapData[(int)v7] + 80 * s_profileMapData[(int)v7].m_profileDataMap.m_size );
        }
        Particle_OutputSystemNames((LocalClientNum_t)v7);
      }
      else
      {
        Particle_ClearProfiler((LocalClientNum_t)v7);
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+190h+var_58+8]
      vmovaps xmm6, [rsp+190h+var_38+8]
      vmovaps xmm9, [rsp+190h+var_68+8]
    }
  }
}

/*
==============
Particle_OutputSystemNames
==============
*/
void Particle_OutputSystemNames(LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  __int64 v4; 
  const char *string; 
  bool v6; 
  ParticleManager *ParticleManager; 
  unsigned int MemoryUsageInBytes; 
  unsigned int v12; 
  const char *v24; 
  const dvar_t *v26; 
  ParticleProfileMapData *v30; 
  const char *v32; 
  vec2_t inOutProfilePos; 

  v3 = particle_dump;
  v4 = localClientNum;
  if ( !particle_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovaps [rsp+88h+var_48], xmm7
    }
    Com_Printf(21, "\nPARTICLE DUMP BEGIN\n");
    string = particle_profile_filter->current.string;
    v6 = I_stricmp(string, (const char *)&queryFormat.fmt + 3) != 0;
    ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v4);
    MemoryUsageInBytes = ParticleManager::GetMemoryUsageInBytes(ParticleManager);
    __asm
    {
      vmovss  xmm0, cs:__real@c1a00000
      vmovss  xmm6, cs:__real@41100000
      vmovss  dword ptr [rsp+88h+inOutProfilePos], xmm0
      vxorps  xmm0, xmm0, xmm0
    }
    v12 = s_profileMemoryUsageInBytesMax[v4];
    if ( MemoryUsageInBytes > v12 )
      v12 = MemoryUsageInBytes;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm3, xmm0, cs:__real@35800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
      vmulss  xmm1, xmm0, cs:__real@35800000
      vcvtss2sd xmm2, xmm1, xmm1
      vcvtss2sd xmm1, xmm3, xmm3
      vmovsd  xmm3, cs:__real@4028000000000000
    }
    s_profileMemoryUsageInBytesMax[v4] = v12;
    __asm
    {
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v24 = j_va("Memory Used: %.2f MB (Curr)\t %.2f MB (Max)\t %.2f MB (Budget)", _RDX, _R8, _R9);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 131, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text", *(_QWORD *)&inOutProfilePos) )
      __debugbreak();
    Com_Printf(21, "%s,", v24);
    __asm
    {
      vaddss  xmm7, xmm6, xmm6
      vmovss  dword ptr [rsp+88h+inOutProfilePos+4], xmm7
    }
    Com_Printf(21, "\n");
    Com_Printf(21, "%s,", "Name");
    v26 = particle_profile_memory_only;
    if ( !particle_profile_memory_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( !v26->current.enabled )
    {
      Com_Printf(21, "%s,", "Systems");
      Com_Printf(21, "%s,", "Alloc");
      Com_Printf(21, "%s,", "Spawn");
      Com_Printf(21, "%s,", "Run");
      Com_Printf(21, "%s,", "Rndr");
      Com_Printf(21, "%s,", "L");
      Com_Printf(21, "%s,", "RC");
      Com_Printf(21, "%s,", "LWP");
      Com_Printf(21, "%s,", "HWP");
      Com_Printf(21, "%s,", "BLT");
      Com_Printf(21, "%s,", "OQ");
      Com_Printf(21, "%s,", "TRL");
      Com_Printf(21, "%s,", "TSG");
      Com_Printf(21, "%s,", "BEAM");
      Com_Printf(21, "%s,", "BSG");
      Com_Printf(21, "%s,", "Update");
      Com_Printf(21, "%s,", "Draw");
      Com_Printf(21, "%s,", "Total");
      __asm
      {
        vmovss  xmm0, cs:__real@43c08000
        vmovss  dword ptr [rsp+88h+inOutProfilePos], xmm0
      }
      Com_Printf(21, "%s,", "CPP");
      __asm
      {
        vaddss  xmm0, xmm7, xmm6
        vmovss  dword ptr [rsp+88h+inOutProfilePos+4], xmm0
      }
    }
    Com_Printf(21, "\n");
    ParticleProfileGlobalData::DrawData(&s_profileMapData[v4].m_profileDataTotals, (LocalClientNum_t)v4, "Totals", &inOutProfilePos, 1);
    Com_Printf(21, "\n");
    __asm { vmovaps xmm7, [rsp+88h+var_48] }
    v30 = &s_profileMapData[v4];
    __asm { vmovaps xmm6, [rsp+88h+var_38] }
    if ( v30 != (ParticleProfileMapData *)((char *)v30 + 80 * v30->m_profileDataMap.m_size) )
    {
      do
      {
        v32 = *(const char **)v30->m_profileDataMap.m_data.m_buffer;
        if ( !v6 || strstr_0(*(const char **)v30->m_profileDataMap.m_data.m_buffer, string) )
        {
          ParticleProfileGlobalData::DrawData((ParticleProfileGlobalData *)&v30->m_profileDataMap.m_data.m_buffer[8], (LocalClientNum_t)v4, v32, &inOutProfilePos, 1);
          Com_Printf(21, "\n");
        }
        v30 = (ParticleProfileMapData *)((char *)v30 + 80);
      }
      while ( v30 != (ParticleProfileMapData *)((char *)&s_profileMapData[v4] + 80 * s_profileMapData[v4].m_profileDataMap.m_size) );
    }
    Com_Printf(21, "PARTICLE DUMP END\n");
  }
}

/*
==============
Particle_OutputSystemNamesToBuffer
==============
*/
void Particle_OutputSystemNamesToBuffer(char *buffer, unsigned int bufferSize, unsigned int commandType)
{
  char *v3; 
  const char *string; 
  bool v7; 
  unsigned int v8; 
  unsigned int v9; 
  char *v10; 
  const char **v11; 
  const char *v12; 
  __int64 v13; 
  unsigned int v14; 
  char *v15; 
  const char *v17; 

  v3 = buffer;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 667, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( bufferSize <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 668, ASSERT_TYPE_ASSERT, "(bufferSize > 2)", (const char *)&queryFormat, "bufferSize > 2") )
    __debugbreak();
  string = particle_profile_filter->current.string;
  v17 = string;
  v7 = I_stricmp(string, (const char *)&queryFormat.fmt + 3) != 0;
  v8 = Com_sprintf_truncate(v3, bufferSize - 2, "%d,", commandType);
  v9 = bufferSize - 2 - v8;
  v10 = &v3[v8];
  v11 = (const char **)s_profileMapData;
  if ( s_profileMapData != (ParticleProfileMapData *)((char *)s_profileMapData + 80 * s_profileMapData[0].m_profileDataMap.m_size) )
  {
    do
    {
      v12 = *v11;
      if ( !v7 || strstr_0(*v11, string) )
      {
        v13 = -1i64;
        do
          ++v13;
        while ( v12[v13] );
        v14 = v13 + 1;
        if ( (unsigned int)(v13 + 1) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 693, ASSERT_TYPE_ASSERT, "(nameLength > 1)", (const char *)&queryFormat, "nameLength > 1") )
          __debugbreak();
        if ( v14 > v9 )
        {
          Com_PrintWarning(21, "WARNING: FX command buffer is full. Cannot output all system names.\n");
        }
        else
        {
          Core_strcpy_truncate(v10, v9, v12);
          v15 = &v10[(unsigned int)v13];
          if ( *v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 701, ASSERT_TYPE_ASSERT, "(*pCurrentPos == '\\0')", (const char *)&queryFormat, "*pCurrentPos == '\\0'") )
            __debugbreak();
          *v15 = 44;
          v10 = v15 + 1;
          v9 -= v14;
        }
        string = v17;
      }
      v11 += 10;
    }
    while ( v11 != (const char **)((char *)s_profileMapData + 80 * s_profileMapData[0].m_profileDataMap.m_size) );
    v3 = buffer;
  }
  if ( v10 > v3 )
  {
    if ( *(v10 - 1) != 44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 719, ASSERT_TYPE_ASSERT, "(*pLastComma == ',')", (const char *)&queryFormat, "*pLastComma == ','") )
      __debugbreak();
    *(v10 - 1) = 0;
  }
}

/*
==============
Particle_SortProfileData_BeamSegments
==============
*/
bool Particle_SortProfileData_BeamSegments(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numBeamSegments > rhs->second.numBeamSegments;
}

/*
==============
Particle_SortProfileData_Beams
==============
*/
bool Particle_SortProfileData_Beams(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numBeams > rhs->second.numBeams;
}

/*
==============
Particle_SortProfileData_Bolts
==============
*/
bool Particle_SortProfileData_Bolts(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numBolts > rhs->second.numBolts;
}

/*
==============
Particle_SortProfileData_Cost_Per_Particle
==============
*/

bool __fastcall Particle_SortProfileData_Cost_Per_Particle(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs, double _XMM2_8, double _XMM3_8)
{
  unsigned int v10; 
  bool v11; 
  bool v12; 
  unsigned int renderTimeMicroSecs; 

  __asm { vxorps  xmm2, xmm2, xmm2 }
  if ( lhs->second.numParticlesRunning + lhs->second.numTrailSegments + lhs->second.numBeamSegments )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm3, xmm1, xmm0
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  v10 = rhs->second.numTrailSegments + rhs->second.numBeamSegments;
  v11 = __CFADD__(rhs->second.numParticlesRunning, v10);
  v12 = rhs->second.numParticlesRunning + v10 == 0;
  if ( rhs->second.numParticlesRunning + v10 )
  {
    renderTimeMicroSecs = rhs->second.renderTimeMicroSecs;
    v11 = __CFADD__(rhs->second.updateTimeMicroSecs, renderTimeMicroSecs);
    v12 = rhs->second.updateTimeMicroSecs + renderTimeMicroSecs == 0;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm2, xmm1, xmm0
    }
  }
  __asm { vcomiss xmm3, xmm2 }
  return !v11 && !v12;
}

/*
==============
Particle_SortProfileData_Cost_Render
==============
*/
bool Particle_SortProfileData_Cost_Render(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.renderTimeMicroSecs > rhs->second.renderTimeMicroSecs;
}

/*
==============
Particle_SortProfileData_Cost_Total
==============
*/
bool Particle_SortProfileData_Cost_Total(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.updateTimeMicroSecs + lhs->second.renderTimeMicroSecs > rhs->second.updateTimeMicroSecs + rhs->second.renderTimeMicroSecs;
}

/*
==============
Particle_SortProfileData_Cost_Update
==============
*/
bool Particle_SortProfileData_Cost_Update(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.updateTimeMicroSecs > rhs->second.updateTimeMicroSecs;
}

/*
==============
Particle_SortProfileData_Name
==============
*/
bool Particle_SortProfileData_Name(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return I_stricmp(lhs->first, rhs->first) < 0;
}

/*
==============
Particle_SortProfileData_OcclusionQueries
==============
*/
bool Particle_SortProfileData_OcclusionQueries(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numOcclusionQueries > rhs->second.numOcclusionQueries;
}

/*
==============
Particle_SortProfileData_Particle_Count_Active
==============
*/
bool Particle_SortProfileData_Particle_Count_Active(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numParticlesRunning > rhs->second.numParticlesRunning;
}

/*
==============
Particle_SortProfileData_Particle_Count_Allocated
==============
*/
bool Particle_SortProfileData_Particle_Count_Allocated(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numParticlesAllocated > rhs->second.numParticlesAllocated;
}

/*
==============
Particle_SortProfileData_PhysicsFX
==============
*/
bool Particle_SortProfileData_PhysicsFX(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numPhysicsFX > rhs->second.numPhysicsFX;
}

/*
==============
Particle_SortProfileData_PhysicsObjects
==============
*/
bool Particle_SortProfileData_PhysicsObjects(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numPhysicsObjects > rhs->second.numPhysicsObjects;
}

/*
==============
Particle_SortProfileData_RayCasts
==============
*/
bool Particle_SortProfileData_RayCasts(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numRayCasts > rhs->second.numRayCasts;
}

/*
==============
Particle_SortProfileData_System_Count
==============
*/
bool Particle_SortProfileData_System_Count(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numSystems > rhs->second.numSystems;
}

/*
==============
Particle_SortProfileData_TrailSegments
==============
*/
bool Particle_SortProfileData_TrailSegments(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numTrailSegments > rhs->second.numTrailSegments;
}

/*
==============
Particle_SortProfileData_Trails
==============
*/
bool Particle_SortProfileData_Trails(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  return lhs->second.numTrails > rhs->second.numTrails;
}

/*
==============
Particle_WriteOutDebugText
==============
*/
void Particle_WriteOutDebugText(LocalClientNum_t localClientNum, const char *text, const vec2_t *profilePos, const vec4_t *color, bool outputCSVFormat)
{
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 131, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( outputCSVFormat )
    Com_Printf(21, "%s,", text);
  else
    CG_Particle_DrawDebugText(localClientNum, text, profilePos, color);
}

