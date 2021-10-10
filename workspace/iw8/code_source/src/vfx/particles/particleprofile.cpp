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

  v4 = localClientNum;
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
  CL_DrawText(v10, text, v8, cls.smallDevFont, profilePos->v[0], profilePos->v[1], 1, 1, 0.5, 0.5, color, 0);
}

/*
==============
ParticleProfileGlobalData::CostPerParticle
==============
*/
float ParticleProfileGlobalData::CostPerParticle(ParticleProfileGlobalData *this)
{
  float result; 
  unsigned int v2; 
  float v3; 
  float v4; 

  result = 0.0;
  v2 = this->numParticlesRunning + this->numTrailSegments + this->numBeamSegments;
  if ( v2 )
  {
    v3 = (float)(this->updateTimeMicroSecs + this->renderTimeMicroSecs);
    v4 = (float)v2;
    return v3 / v4;
  }
  return result;
}

/*
==============
ParticleProfileGlobalData::DrawData
==============
*/
void ParticleProfileGlobalData::DrawData(ParticleProfileGlobalData *this, LocalClientNum_t localClientNum, const char *label, vec2_t *inOutProfilePos, bool outputCSVFormat)
{
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
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
  float v28; 
  unsigned int v29; 
  float v30; 
  float v31; 
  const char *v32; 
  const char *v33; 

  if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 579, ASSERT_TYPE_ASSERT, "(label)", (const char *)&queryFormat, "label") )
    __debugbreak();
  if ( outputCSVFormat )
  {
    v9 = j_va((const char *)&queryFormat, label);
    Particle_WriteOutDebugText(localClientNum, v9, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  }
  else
  {
    CL_DrawRect(-20, (int)(float)(inOutProfilePos->v[1] - 9.0) + 1, 635, 8, &colorBlackFaded);
  }
  inOutProfilePos->v[0] = -20.0;
  v10 = j_va("%4i", this->numSystems);
  Particle_WriteOutDebugText(localClientNum, v10, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 10.0;
  v11 = j_va("%2i", this->numParticlesAllocated);
  Particle_WriteOutDebugText(localClientNum, v11, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 35.0;
  v12 = j_va("%2i", this->numParticlesSpawned);
  Particle_WriteOutDebugText(localClientNum, v12, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 60.0;
  v13 = j_va("%2i", this->numParticlesRunning);
  Particle_WriteOutDebugText(localClientNum, v13, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 85.0;
  v14 = j_va("%3i", this->numParticlesRendered);
  Particle_WriteOutDebugText(localClientNum, v14, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 110.0;
  v15 = j_va("%i", this->numLights);
  Particle_WriteOutDebugText(localClientNum, v15, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 130.0;
  v16 = j_va("%i", this->numRayCasts);
  Particle_WriteOutDebugText(localClientNum, v16, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 150.0;
  v17 = j_va("%i", this->numPhysicsFX);
  Particle_WriteOutDebugText(localClientNum, v17, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 170.0;
  v18 = j_va("%i", this->numPhysicsObjects);
  Particle_WriteOutDebugText(localClientNum, v18, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 190.0;
  v19 = j_va("%i", this->numBolts);
  Particle_WriteOutDebugText(localClientNum, v19, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 210.0;
  v20 = j_va("%i", this->numOcclusionQueries);
  Particle_WriteOutDebugText(localClientNum, v20, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 230.0;
  v21 = j_va("%i", this->numTrails);
  Particle_WriteOutDebugText(localClientNum, v21, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 250.0;
  v22 = j_va("%i", this->numTrailSegments);
  Particle_WriteOutDebugText(localClientNum, v22, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 270.0;
  v23 = j_va("%i", this->numBeams);
  Particle_WriteOutDebugText(localClientNum, v23, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 290.0;
  v24 = j_va("%i", this->numBeamSegments);
  Particle_WriteOutDebugText(localClientNum, v24, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 310.0;
  v25 = j_va("%4i", this->updateTimeMicroSecs);
  Particle_WriteOutDebugText(localClientNum, v25, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 335.0;
  v26 = j_va("%3i", this->renderTimeMicroSecs);
  Particle_WriteOutDebugText(localClientNum, v26, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 360.0;
  v27 = j_va("%3i", this->renderTimeMicroSecs + this->updateTimeMicroSecs);
  Particle_WriteOutDebugText(localClientNum, v27, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  inOutProfilePos->v[0] = 385.0;
  v28 = 0.0;
  v29 = this->numBeamSegments + this->numTrailSegments + this->numParticlesRunning;
  if ( v29 )
  {
    v30 = (float)(this->renderTimeMicroSecs + this->updateTimeMicroSecs);
    v31 = (float)v29;
    v28 = v30 / v31;
  }
  v32 = j_va("%.2f", v28);
  Particle_WriteOutDebugText(localClientNum, v32, inOutProfilePos, &colorWhiteFaded, outputCSVFormat);
  if ( !outputCSVFormat && label && *label )
  {
    inOutProfilePos->v[0] = 415.0;
    v33 = j_va((const char *)&queryFormat, label);
    Particle_WriteOutDebugText(localClientNum, v33, inOutProfilePos, &colorWhiteFaded, 0);
  }
  inOutProfilePos->v[1] = inOutProfilePos->v[1] + 9.0;
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
  __int128 v1; 
  __int64 v2; 
  ParticleManager *ParticleManager; 
  FastCriticalSection *p_m_handleManagerLock; 
  unsigned int v5; 
  ParticleSystem **m_pSystems; 
  unsigned int LocalClientTime; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  ParticleProfileGlobalData *p_m_profileDataTotals; 
  __int64 v12; 
  const ParticleSystemDef *Def; 
  ParticleProfileMapData *v14; 
  ParticleProfileMapData *v15; 
  const char *name; 
  unsigned __int64 m_size; 
  __int64 v18; 
  __int64 v19; 
  ParticleProfileMapData *v20; 
  ParticleSystem *v21; 
  __int64 v22; 
  ParticleProfileMapData *v23; 
  __int64 v24; 
  __m256i *v25; 
  char *v26; 
  bool v27; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  __int128 v31; 
  unsigned int MemoryUsageInBytes; 
  unsigned int v33; 
  float v34; 
  float v35; 
  float v36; 
  const char *v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  __int64 v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  __int64 v44; 
  bool v45; 
  unsigned int v46; 
  float v47; 
  float v48; 
  const char *v49; 
  bool (__fastcall *v50)(const ntl::pair<char const *,ParticleProfileGlobalData> *, const ntl::pair<char const *,ParticleProfileGlobalData> *); 
  char *v51; 
  char *v52; 
  const char *v53; 
  __int64 v54; 
  ntl::random_access_iterator_tag v55; 
  unsigned int m_numSystemsRunning; 
  ParticleManager *v58; 
  ParticleProfileGlobalData outProfileData; 
  double v60; 
  __int64 v61; 
  char *SubStr; 
  _BYTE v63[80]; 
  vec2_t profilePos; 
  __int128 v65; 

  v2 = localClientNum;
  if ( particle_profile->current.integer )
  {
    v65 = v1;
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    v58 = ParticleManager;
    p_m_handleManagerLock = &ParticleManager->m_handleManagerLock;
    if ( ParticleManager->m_handleManagerLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
      __debugbreak();
    if ( ((unsigned __int8)p_m_handleManagerLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", p_m_handleManagerLock) )
      __debugbreak();
    _InterlockedIncrement(&p_m_handleManagerLock->readCount);
    while ( ParticleManager->m_handleManagerLock.writeCount )
      Sys_Sleep(0);
    v5 = 0;
    m_numSystemsRunning = ParticleManager->m_numSystemsRunning;
    if ( p_m_handleManagerLock->readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", p_m_handleManagerLock->readCount, 0i64) )
      __debugbreak();
    if ( ((unsigned __int8)p_m_handleManagerLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", p_m_handleManagerLock) )
      __debugbreak();
    _InterlockedDecrement(&p_m_handleManagerLock->readCount);
    m_pSystems = ParticleManager->m_pSystems;
    LocalClientTime = CG_GetLocalClientTime((const LocalClientNum_t)v2);
    SubStr = (char *)particle_profile_filter->current.integer64;
    v61 = v2;
    v8 = I_stricmp(SubStr, (const char *)&queryFormat.fmt + 3) != 0;
    v9 = v2;
    v55.ntl::input_iterator_tag = (ntl::input_iterator_tag)v8;
    v10 = v2;
    if ( LocalClientTime - s_profileMapData[v2].m_lastUpdateTime > particle_profile_update_time->current.integer )
    {
      s_profileMapData[v9].m_lastUpdateTime = LocalClientTime;
      Particle_ClearProfiler((LocalClientNum_t)v2);
      p_m_profileDataTotals = &s_profileMapData[v9].m_profileDataTotals;
      *(_QWORD *)&p_m_profileDataTotals->numSystems = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numParticlesSpawned = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numParticlesDelayed = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numLights = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numPhysicsFX = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numBolts = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numTrails = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->numBeams = 0i64;
      *(_QWORD *)&p_m_profileDataTotals->updateTimeMicroSecs = 0i64;
      ParticleManager::GetProfileData(v58, p_m_profileDataTotals);
      if ( m_numSystemsRunning )
      {
        v12 = m_numSystemsRunning;
        do
        {
          if ( (*m_pSystems)->m_isRunning )
          {
            Def = ParticleSystem::GetDef(*m_pSystems);
            v14 = &s_profileMapData[v9];
            v15 = &s_profileMapData[v9];
            name = Def->name;
            m_size = s_profileMapData[v9].m_profileDataMap.m_size;
            v18 = 80 * m_size;
            v19 = (__int64)(80 * m_size) / 80;
            if ( v19 > 0 )
            {
              do
              {
                if ( *(_QWORD *)&v15->m_profileDataMap.m_data.m_buffer[80 * (v19 >> 1)] >= (unsigned __int64)name )
                {
                  v19 >>= 1;
                }
                else
                {
                  v15 = (ParticleProfileMapData *)((char *)v15 + 80 * (v19 >> 1) + 80);
                  v19 += -1 - (v19 >> 1);
                }
              }
              while ( v19 > 0 );
              m_size = v14->m_profileDataMap.m_size;
            }
            v20 = (ParticleProfileMapData *)((char *)v14 + 80 * m_size);
            if ( v15 != v20 && (unsigned __int64)name < *(_QWORD *)v15->m_profileDataMap.m_data.m_buffer )
              v15 = (ParticleProfileMapData *)((char *)v14 + v18);
            v21 = *m_pSystems;
            if ( v15 == v20 )
            {
              memset(&outProfileData.numParticlesSpawned, 0, 64);
              v60 = 0.0;
              ParticleSystem::GetProfileData(v21, (ParticleProfileGlobalData *)&outProfileData.numParticlesSpawned);
              *(_QWORD *)v63 = name;
              v22 = s_profileMapData[v9].m_profileDataMap.m_size;
              v23 = &s_profileMapData[v9];
              v24 = v22;
              *(__m256i *)&v63[8] = *(__m256i *)&outProfileData.numParticlesSpawned;
              *(double *)&v63[72] = v60;
              *(__m256i *)&v63[40] = *(__m256i *)&outProfileData.numBolts;
              while ( v22 > 0 )
              {
                if ( *(_QWORD *)&v23->m_profileDataMap.m_data.m_buffer[80 * (v22 >> 1)] >= (unsigned __int64)name )
                {
                  v22 >>= 1;
                }
                else
                {
                  v23 = (ParticleProfileMapData *)((char *)v23 + 80 * (v22 >> 1) + 80);
                  v22 += -1 - (v22 >> 1);
                }
              }
              if ( v23 == (ParticleProfileMapData *)((char *)v14 + 80 * v24) || (unsigned __int64)name < *(_QWORD *)v23->m_profileDataMap.m_data.m_buffer )
              {
                if ( v24 == 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
                  __debugbreak();
                if ( (v23 < v14 || v23 > (ParticleProfileMapData *)((char *)v14 + 80 * s_profileMapData[v9].m_profileDataMap.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
                  __debugbreak();
                if ( (char *)v23 - (char *)v14 != 80 * (((char *)v23 - (char *)v14) / 0x50ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
                  __debugbreak();
                if ( v63 >= (_BYTE *)v23 && v63 < &v14->m_profileDataMap.m_data.m_buffer[80 * s_profileMapData[v9].m_profileDataMap.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
                  __debugbreak();
                v25 = (__m256i *)((char *)v14 + 80 * s_profileMapData[v9].m_profileDataMap.m_size);
                if ( v23 != (ParticleProfileMapData *)v25 )
                {
                  v26 = &v25[2].m256i_i8[16];
                  if ( v23 == (ParticleProfileMapData *)&v25[2].m256i_u64[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                    __debugbreak();
                  if ( v25 == (__m256i *)v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                    __debugbreak();
                  v27 = v25 <= (__m256i *)v23;
                  if ( v25 < (__m256i *)v23 )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                      __debugbreak();
                    v27 = v25 <= (__m256i *)v23;
                  }
                  if ( !v27 )
                  {
                    do
                    {
                      v28 = *(__m256i *)((char *)v25 - 80);
                      v25 = (__m256i *)((char *)v25 - 80);
                      v26 -= 80;
                      *(__m256i *)v26 = v28;
                      *((__m256i *)v26 + 1) = v25[1];
                      *((_OWORD *)v26 + 4) = *(_OWORD *)v25[2].m256i_i8;
                    }
                    while ( v25 > (__m256i *)v23 );
                  }
                }
                v29 = *(__m256i *)v63;
                v30 = *(__m256i *)&v63[32];
                ++s_profileMapData[v9].m_profileDataMap.m_size;
                *(__m256i *)v23->m_profileDataMap.m_data.m_buffer = v29;
                v31 = *(_OWORD *)&v63[64];
                *(__m256i *)&v23->m_profileDataMap.m_data.m_buffer[32] = v30;
                *(_OWORD *)&v23->m_profileDataMap.m_data.m_buffer[64] = v31;
              }
            }
            else
            {
              ParticleSystem::GetProfileData(v21, (ParticleProfileGlobalData *)&v15->m_profileDataMap.m_data.m_buffer[8]);
            }
          }
          ++m_pSystems;
          --v12;
        }
        while ( v12 );
        LODWORD(v2) = localClientNum;
        v10 = v61;
        v8 = (bool)v55.ntl::input_iterator_tag;
      }
    }
    MemoryUsageInBytes = ParticleManager::GetMemoryUsageInBytes(v58);
    v33 = s_profileMemoryUsageInBytesMax[v10];
    if ( MemoryUsageInBytes > v33 )
      v33 = MemoryUsageInBytes;
    v34 = (float)MemoryUsageInBytes;
    v35 = v34 * 0.00000095367432;
    s_profileMemoryUsageInBytesMax[v10] = v33;
    v36 = (float)v33;
    profilePos.v[0] = FLOAT_N20_0;
    profilePos.v[1] = FLOAT_9_0;
    CL_DrawRect(-20, 1, 635, 8, &colorBlackFaded);
    v37 = j_va("Memory Used: %.2f MB (Curr)\t %.2f MB (Max)\t %.2f MB (Budget)", v35, (float)(v36 * 0.00000095367432), DOUBLE_12_0);
    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 131, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
      __debugbreak();
    CG_Particle_DrawDebugText((LocalClientNum_t)v2, v37, &profilePos, &colorLtBlue);
    profilePos.v[1] = 9.0 + 9.0;
    CL_DrawRect(-20, (int)(float)((float)(9.0 + 9.0) - 9.0) + 1, 635, 8, &colorBlackFaded);
    v38 = particle_profile_memory_only;
    if ( !particle_profile_memory_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( !v38->current.enabled )
    {
      profilePos.v[0] = FLOAT_N20_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Systems", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_10_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Alloc", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_35_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Spawn", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_60_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Run", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_85_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Rndr", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_110_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "L", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_130_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "RC", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_150_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "LWP", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_170_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "HWP", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_190_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "BLT", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_210_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "OQ", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_230_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "TRL", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_250_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "TSG", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_270_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "BEAM", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_290_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "BSG", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_310_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Update", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_335_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Draw", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_360_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Total", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_385_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "CPP", &profilePos, &colorLtBlue);
      profilePos.v[0] = FLOAT_415_0;
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, "Name", &profilePos, &colorLtBlue);
      profilePos.v[1] = (float)(9.0 + 9.0) + 9.0;
    }
    v39 = particle_profile_memory_only;
    if ( !particle_profile_memory_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    if ( !v39->current.enabled )
    {
      v40 = v10;
      ParticleProfileGlobalData::DrawData(&s_profileMapData[v10].m_profileDataTotals, (LocalClientNum_t)v2, (const char *)&queryFormat.fmt + 3, &profilePos, 0);
      v41 = s_profileMapData[v10].m_profileDataMap.m_size;
      if ( v8 )
      {
        v42 = 0;
      }
      else
      {
        v42 = v41 / 0x14;
        if ( particle_profile->current.integer - 1 < (int)(v41 / 0x14) )
          v42 = particle_profile->current.integer - 1;
      }
      v43 = 0;
      v44 = 20 * v42;
      if ( v41 )
        v43 = v44 + 1;
      v45 = !v8;
      v46 = v41;
      if ( v45 && v41 > (int)v44 + 20 )
        v46 = v44 + 20;
      v47 = profilePos.v[1] + 9.0;
      v48 = (float)(profilePos.v[1] + 9.0) - 9.0;
      profilePos.v[0] = FLOAT_N20_0;
      profilePos.v[1] = profilePos.v[1] + 9.0;
      CL_DrawRect(-20, (int)v48 + 1, 635, 8, &colorBlackFaded);
      if ( v55.ntl::input_iterator_tag )
        v49 = j_va("Showing results for first %i filtered systems", 20i64);
      else
        v49 = j_va("Showing results for %i - %i, out of %i", v43, v46, v41);
      CG_Particle_DrawDebugText((LocalClientNum_t)v2, v49, &profilePos, &colorLtBlue);
      profilePos.v[1] = v47 + 9.0;
      if ( m_numSystemsRunning )
      {
        switch ( particle_profile_sort->current.integer )
        {
          case 0:
            goto LABEL_115;
          case 1:
            v50 = Particle_SortProfileData_Cost_Update;
            break;
          case 2:
            v50 = Particle_SortProfileData_Cost_Render;
            break;
          case 3:
            v50 = Particle_SortProfileData_Name;
            break;
          case 4:
            v50 = Particle_SortProfileData_Particle_Count_Active;
            break;
          case 5:
            v50 = Particle_SortProfileData_Particle_Count_Allocated;
            break;
          case 6:
            v50 = Particle_SortProfileData_Bolts;
            break;
          case 7:
            v50 = Particle_SortProfileData_OcclusionQueries;
            break;
          case 8:
            v50 = Particle_SortProfileData_Trails;
            break;
          case 9:
            v50 = Particle_SortProfileData_TrailSegments;
            break;
          case 0xA:
            v50 = Particle_SortProfileData_Beams;
            break;
          case 0xB:
            v50 = Particle_SortProfileData_BeamSegments;
            break;
          case 0xC:
            v50 = Particle_SortProfileData_RayCasts;
            break;
          case 0xD:
            v50 = Particle_SortProfileData_PhysicsFX;
            break;
          case 0xE:
            v50 = Particle_SortProfileData_PhysicsObjects;
            break;
          case 0xF:
            v50 = Particle_SortProfileData_System_Count;
            break;
          case 0x10:
            v50 = Particle_SortProfileData_Cost_Per_Particle;
            break;
          default:
            LODWORD(v54) = particle_profile_sort->current.integer;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 405, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Impossible particle_profile_sort value %i", v54) )
              __debugbreak();
LABEL_115:
            v50 = Particle_SortProfileData_Cost_Total;
            break;
        }
        ntl::sort<ntl::pair<char const *,ParticleProfileGlobalData> *,bool (*)(ntl::pair<char const *,ParticleProfileGlobalData> const &,ntl::pair<char const *,ParticleProfileGlobalData> const &)>((ntl::pair<char const *,ParticleProfileGlobalData> *)&s_profileMapData[v40], (ntl::pair<char const *,ParticleProfileGlobalData> *)&s_profileMapData[v40] + s_profileMapData[v40].m_profileDataMap.m_size, v50, v55);
        v51 = &s_profileMapData[0].m_profileDataMap.m_data.m_buffer[80 * v44 + v40 * 327776];
        if ( v51 != (char *)&s_profileMapData[v40] + 80 * s_profileMapData[v40].m_profileDataMap.m_size )
        {
          v52 = SubStr;
          do
          {
            v53 = *(const char **)v51;
            if ( !*(_BYTE *)&v55.ntl::input_iterator_tag || strstr_0(*(const char **)v51, v52) )
            {
              ParticleProfileGlobalData::DrawData((ParticleProfileGlobalData *)(v51 + 8), (LocalClientNum_t)v2, v53, &profilePos, 0);
              ++v5;
            }
            v51 += 80;
          }
          while ( v5 < 0x14 && v51 != (char *)&s_profileMapData[(int)v2] + 80 * s_profileMapData[(int)v2].m_profileDataMap.m_size );
        }
        Particle_OutputSystemNames((LocalClientNum_t)v2);
      }
      else
      {
        Particle_ClearProfiler((LocalClientNum_t)v2);
      }
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
  __int128 v1; 
  __int128 v2; 
  const dvar_t *v3; 
  __int64 v4; 
  const char *string; 
  bool v6; 
  ParticleManager *ParticleManager; 
  unsigned int MemoryUsageInBytes; 
  unsigned int v9; 
  float v10; 
  float v11; 
  float v12; 
  const char *v13; 
  const dvar_t *v14; 
  ParticleProfileMapData *v15; 
  const char *v16; 
  vec2_t inOutProfilePos; 
  __int128 v18; 
  __int128 v19; 

  v3 = particle_dump;
  v4 = localClientNum;
  if ( !particle_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v19 = v1;
    v18 = v2;
    Com_Printf(21, "\nPARTICLE DUMP BEGIN\n");
    string = particle_profile_filter->current.string;
    v6 = I_stricmp(string, (const char *)&queryFormat.fmt + 3) != 0;
    ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v4);
    MemoryUsageInBytes = ParticleManager::GetMemoryUsageInBytes(ParticleManager);
    inOutProfilePos.v[0] = FLOAT_N20_0;
    v9 = s_profileMemoryUsageInBytesMax[v4];
    if ( MemoryUsageInBytes > v9 )
      v9 = MemoryUsageInBytes;
    v10 = (float)MemoryUsageInBytes;
    v11 = v10 * 0.00000095367432;
    v12 = (float)v9;
    s_profileMemoryUsageInBytesMax[v4] = v9;
    v13 = j_va("Memory Used: %.2f MB (Curr)\t %.2f MB (Max)\t %.2f MB (Budget)", v11, (float)(v12 * 0.00000095367432), DOUBLE_12_0);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleprofile.cpp", 131, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text", *(_QWORD *)&inOutProfilePos) )
      __debugbreak();
    Com_Printf(21, "%s,", v13);
    inOutProfilePos.v[1] = 9.0 + 9.0;
    Com_Printf(21, "\n");
    Com_Printf(21, "%s,", "Name");
    v14 = particle_profile_memory_only;
    if ( !particle_profile_memory_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.enabled )
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
      inOutProfilePos.v[0] = FLOAT_385_0;
      Com_Printf(21, "%s,", "CPP");
      inOutProfilePos.v[1] = (float)(9.0 + 9.0) + 9.0;
    }
    Com_Printf(21, "\n");
    ParticleProfileGlobalData::DrawData(&s_profileMapData[v4].m_profileDataTotals, (LocalClientNum_t)v4, "Totals", &inOutProfilePos, 1);
    Com_Printf(21, "\n");
    v15 = &s_profileMapData[v4];
    if ( v15 != (ParticleProfileMapData *)((char *)v15 + 80 * v15->m_profileDataMap.m_size) )
    {
      do
      {
        v16 = *(const char **)v15->m_profileDataMap.m_data.m_buffer;
        if ( !v6 || strstr_0(*(const char **)v15->m_profileDataMap.m_data.m_buffer, string) )
        {
          ParticleProfileGlobalData::DrawData((ParticleProfileGlobalData *)&v15->m_profileDataMap.m_data.m_buffer[8], (LocalClientNum_t)v4, v16, &inOutProfilePos, 1);
          Com_Printf(21, "\n");
        }
        v15 = (ParticleProfileMapData *)((char *)v15 + 80);
      }
      while ( v15 != (ParticleProfileMapData *)((char *)&s_profileMapData[v4] + 80 * s_profileMapData[v4].m_profileDataMap.m_size) );
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
bool Particle_SortProfileData_Cost_Per_Particle(const ntl::pair<char const *,ParticleProfileGlobalData> *lhs, const ntl::pair<char const *,ParticleProfileGlobalData> *rhs)
{
  float v2; 
  unsigned int v3; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 
  float v8; 
  float v9; 

  v2 = 0.0;
  v3 = lhs->second.numParticlesRunning + lhs->second.numTrailSegments + lhs->second.numBeamSegments;
  if ( v3 )
  {
    v5 = (float)(lhs->second.updateTimeMicroSecs + lhs->second.renderTimeMicroSecs);
    v6 = (float)v3;
    v4 = v5 / v6;
  }
  else
  {
    v4 = 0.0;
  }
  v7 = rhs->second.numParticlesRunning + rhs->second.numTrailSegments + rhs->second.numBeamSegments;
  if ( v7 )
  {
    v8 = (float)(rhs->second.updateTimeMicroSecs + rhs->second.renderTimeMicroSecs);
    v9 = (float)v7;
    v2 = v8 / v9;
  }
  return v4 > v2;
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

