/*
==============
Particle_GetSingleParticleSize
==============
*/

unsigned int __fastcall Particle_GetSingleParticleSize(const ParticleDataFlags dataFlags)
{
  return ?Particle_GetSingleParticleSize@@YAIW4ParticleDataFlags@@@Z(dataFlags);
}

/*
==============
Particle_CopyParticleData
==============
*/

void __fastcall Particle_CopyParticleData(const ParticleData *pParticleDataFrom, ParticleData *pParticleDataTo)
{
  ?Particle_CopyParticleData@@YAXPEBUParticleData@@PEAU1@@Z(pParticleDataFrom, pParticleDataTo);
}

/*
==============
Particle_AllocateBlock
==============
*/

unsigned __int8 *__fastcall Particle_AllocateBlock(LocalClientNum_t localClientNum, const unsigned int particleSize, const unsigned int particleCount)
{
  return ?Particle_AllocateBlock@@YAPEAEW4LocalClientNum_t@@II@Z(localClientNum, particleSize, particleCount);
}

/*
==============
Particle_CopyParticle
==============
*/

void __fastcall Particle_CopyParticle(ParticleData *pParticleDataFrom, const unsigned int indexFrom, ParticleData *pParticleDataTo, const unsigned int indexTo)
{
  ?Particle_CopyParticle@@YAXPEAUParticleData@@I0I@Z(pParticleDataFrom, indexFrom, pParticleDataTo, indexTo);
}

/*
==============
ParticleData::DestroyParticleOffsetTable
==============
*/

void __fastcall ParticleData::DestroyParticleOffsetTable(ParticleData *this)
{
  ?DestroyParticleOffsetTable@ParticleData@@AEAAXXZ(this);
}

/*
==============
ParticleData::GetParticleDataArray
==============
*/

unsigned __int8 *__fastcall ParticleData::GetParticleDataArray(ParticleData *this, const ParticleDataId dataField)
{
  return ?GetParticleDataArray@ParticleData@@QEBAPEAEW4ParticleDataId@@@Z(this, dataField);
}

/*
==============
ParticleData::GetParticleDataArrayIndex
==============
*/

unsigned __int8 *__fastcall ParticleData::GetParticleDataArrayIndex(ParticleData *this, const ParticleDataId dataField, const unsigned int index)
{
  return ?GetParticleDataArrayIndex@ParticleData@@QEBAPEAEW4ParticleDataId@@I@Z(this, dataField, index);
}

/*
==============
Particle_DataIsCompatible
==============
*/

bool __fastcall Particle_DataIsCompatible(const ParticleData *particleData0, const ParticleData *particleData1)
{
  return ?Particle_DataIsCompatible@@YA_NPEBUParticleData@@0@Z(particleData0, particleData1);
}

/*
==============
ParticleData::HasParticleDataArray
==============
*/

bool __fastcall ParticleData::HasParticleDataArray(ParticleData *this, const ParticleDataId dataField)
{
  return ?HasParticleDataArray@ParticleData@@QEBA_NW4ParticleDataId@@@Z(this, dataField);
}

/*
==============
ParticleData::ClearNextFreeElems
==============
*/

void __fastcall ParticleData::ClearNextFreeElems(ParticleData *this, const unsigned int newParticlesCount, const ParticleDataFlags preserveMask)
{
  ?ClearNextFreeElems@ParticleData@@QEAAXIW4ParticleDataFlags@@@Z(this, newParticlesCount, preserveMask);
}

/*
==============
Particle_GetOffsetPadding
==============
*/

unsigned int __fastcall Particle_GetOffsetPadding(const unsigned int offset, const unsigned int byteCount)
{
  return ?Particle_GetOffsetPadding@@YAIII@Z(offset, byteCount);
}

/*
==============
Particle_ReleaseBlock
==============
*/

void __fastcall Particle_ReleaseBlock(LocalClientNum_t localClientNum, unsigned __int8 *pParticleData)
{
  ?Particle_ReleaseBlock@@YAXW4LocalClientNum_t@@PEAE@Z(localClientNum, pParticleData);
}

/*
==============
GetParticleDataInfo
==============
*/

ParticleDataInfo *__fastcall GetParticleDataInfo(ParticleDataInfo *result, const ParticleDataId particleDataId)
{
  return ?GetParticleDataInfo@@YA?AUParticleDataInfo@@W4ParticleDataId@@@Z(result, particleDataId);
}

/*
==============
ParticleData::BuildParticleOffsetTable
==============
*/

void __fastcall ParticleData::BuildParticleOffsetTable(ParticleData *this)
{
  ?BuildParticleOffsetTable@ParticleData@@AEAAXXZ(this);
}

/*
==============
ParticleData::BuildParticleOffsetTable
==============
*/
void ParticleData::BuildParticleOffsetTable(ParticleData *this)
{
  __int16 v2; 
  ParticleDataId v3; 
  __int16 *v4; 
  __int16 v5; 
  __int16 v6; 
  __int64 v7; 
  __int16 *v8; 
  ParticleDataInfo *ParticleDataInfo; 
  unsigned int m_particleCountMax; 
  __int64 v11; 
  int v12; 
  unsigned __int8 *v13; 
  __int16 *v14; 
  ParticleDataFlags m_dataFlags; 
  __int16 *v16; 
  unsigned int v17; 
  int v18; 
  ParticleDataId i; 
  int v20; 
  int v21; 
  unsigned int v22; 
  ParticleDataId j; 
  unsigned int v24; 
  ParticleDataInfo v25; 
  ParticleDataInfo v26; 
  __int64 v27; 
  ParticleDataInfo result; 
  ParticleDataInfo v29; 
  ParticleDataInfo v30; 
  ParticleDataInfo v31; 
  __int16 *m_particleDataOffsets; 

  if ( this->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 285, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
    __debugbreak();
  v2 = 0;
  m_particleDataOffsets = this->m_particleDataOffsets;
  v3 = PARTICLE_DATA_POSITION;
  v4 = this->m_particleDataOffsets;
  do
  {
    v25 = *GetParticleDataInfo(&result, v3);
    if ( v25.id != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 294, ASSERT_TYPE_ASSERT, "(info.id == particleId)", (const char *)&queryFormat, "info.id == particleId") )
      __debugbreak();
    if ( (v25.flag & this->m_dataFlags) != 0 )
    {
      if ( (v25.byteCount & 0xF) != 0 || (v2 & 0xF) == 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = (v2 | 0xF) - v2 + 1;
        if ( (v2 | 0xFu) - v2 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 142, ASSERT_TYPE_ASSERT, "(( padding >= 1 ) && ( padding < 16 ))", (const char *)&queryFormat, "( padding >= 1 ) && ( padding < PARTICLE_ALIGNMENT )") )
          __debugbreak();
      }
      v6 = v5 + v2;
      v2 += v25.byteCount + v5;
    }
    else
    {
      v6 = -1;
    }
    *v4 = v6;
    ++v3;
    ++v4;
  }
  while ( (unsigned int)v3 < PARTICLE_DATA_FIELD_COUNT );
  LODWORD(v7) = 0;
  do
  {
    v8 = &this->m_particleDataOffsets[(unsigned int)v7];
    if ( *v8 == -1 )
    {
      LODWORD(v7) = v7 + 1;
    }
    else
    {
      ParticleDataInfo = GetParticleDataInfo(&v29, (const ParticleDataId)v7);
      m_particleCountMax = this->m_particleCountMax;
      v11 = *(_QWORD *)&ParticleDataInfo->id;
      LODWORD(ParticleDataInfo) = *(_DWORD *)&ParticleDataInfo->byteCount;
      v12 = (__int16)ParticleDataInfo;
      LODWORD(v27) = (_DWORD)ParticleDataInfo;
      v13 = &this->m_pParticleData[m_particleCountMax * *v8 + (__int16)ParticleDataInfo * m_particleCountMax];
      if ( v13 > &this->m_pParticleData[(unsigned __int64)(m_particleCountMax * this->m_particleSize)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 326, ASSERT_TYPE_ASSERT, "(dataArrayEnd <= ( m_pParticleData + GetAllocSize() ))", (const char *)&queryFormat, "dataArrayEnd <= ( m_pParticleData + GetAllocSize() )", v11, v27) )
        __debugbreak();
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 < 0x1B )
      {
        v14 = &this->m_particleDataOffsets[v7];
        do
        {
          if ( *v14 != -1 )
            break;
          v7 = (unsigned int)(v7 + 1);
          ++v14;
        }
        while ( (unsigned int)v7 < 0x1B );
      }
      if ( &v13[this->m_particleCountMax * (this->m_particleDataOffsets[v7] - *v8 - v12)] != &this->m_pParticleData[this->m_particleDataOffsets[v7] * this->m_particleCountMax] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 338, ASSERT_TYPE_ASSERT, "(( dataArrayEnd + padding * GetParticleCountMax() ) == nextDataArrayStart)", (const char *)&queryFormat, "( dataArrayEnd + padding * GetParticleCountMax() ) == nextDataArrayStart") )
        __debugbreak();
    }
  }
  while ( (unsigned int)v7 < 0x1B );
  m_dataFlags = this->m_dataFlags;
  v16 = m_particleDataOffsets;
  v17 = 0;
  v18 = 0;
  for ( i = PARTICLE_DATA_POSITION; (unsigned int)i < PARTICLE_DATA_FIELD_COUNT; ++i )
  {
    v26 = *GetParticleDataInfo(&v30, i);
    if ( v26.id != i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 161, ASSERT_TYPE_ASSERT, "(info.id == particleId)", (const char *)&queryFormat, "info.id == particleId") )
      __debugbreak();
    if ( (m_dataFlags & v26.flag) != 0 )
    {
      if ( (v26.byteCount & 0xF) != 0 || (v18 & 0xF) == 0 )
      {
        v20 = 0;
      }
      else
      {
        v20 = (v18 | 0xF) - v18 + 1;
        if ( (v18 | 0xFu) - v18 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 142, ASSERT_TYPE_ASSERT, "(( padding >= 1 ) && ( padding < 16 ))", (const char *)&queryFormat, "( padding >= 1 ) && ( padding < PARTICLE_ALIGNMENT )") )
          __debugbreak();
      }
      v18 += v20 + v26.byteCount;
    }
  }
  if ( (v18 & 0xF) != 0 )
  {
    v21 = (v18 | 0xF) - v18 + 1;
    if ( (v18 | 0xFu) - v18 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 142, ASSERT_TYPE_ASSERT, "(( padding >= 1 ) && ( padding < 16 ))", (const char *)&queryFormat, "( padding >= 1 ) && ( padding < PARTICLE_ALIGNMENT )") )
      __debugbreak();
  }
  else
  {
    v21 = 0;
  }
  v22 = v21 + v18;
  if ( (v22 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 171, ASSERT_TYPE_ASSERT, "(( maxOffset & ( 16 - 1 ) ) == 0)", (const char *)&queryFormat, "( maxOffset & ( PARTICLE_ALIGNMENT - 1 ) ) == 0") )
    __debugbreak();
  for ( j = PARTICLE_DATA_POSITION; (unsigned int)j < PARTICLE_DATA_SHADER_PARAMS; ++j )
  {
    if ( *v16 != -1 )
    {
      v24 = (__int16)*(_DWORD *)&GetParticleDataInfo(&v31, j)->byteCount + *v16;
      if ( v24 <= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 353, ASSERT_TYPE_ASSERT, "(offsetBound > lastOffset)", (const char *)&queryFormat, "offsetBound > lastOffset") )
        __debugbreak();
      if ( v24 > v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 354, ASSERT_TYPE_ASSERT, "(offsetBound <= allocSize)", (const char *)&queryFormat, "offsetBound <= allocSize") )
        __debugbreak();
      v17 = v24;
    }
    ++v16;
  }
}

/*
==============
ParticleData::ClearNextFreeElems
==============
*/
void ParticleData::ClearNextFreeElems(ParticleData *this, const unsigned int newParticlesCount, const ParticleDataFlags preserveMask)
{
  ParticleDataId i; 
  ParticleDataInfo *ParticleDataInfo; 
  __int64 v8; 
  unsigned __int8 *ParticleDataArrayIndex; 
  __int64 v10; 
  ParticleDataInfo result; 

  if ( !newParticlesCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 247, ASSERT_TYPE_ASSERT, "(newParticlesCount > 0)", (const char *)&queryFormat, "newParticlesCount > 0") )
    __debugbreak();
  if ( newParticlesCount )
  {
    for ( i = PARTICLE_DATA_POSITION; (unsigned int)i < PARTICLE_DATA_FIELD_COUNT; ++i )
    {
      if ( this->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
        __debugbreak();
      if ( this->m_particleDataOffsets[i] != -1 )
      {
        ParticleDataInfo = GetParticleDataInfo(&result, i);
        v8 = *(_QWORD *)&ParticleDataInfo->id;
        LODWORD(v10) = *(_DWORD *)&ParticleDataInfo->byteCount;
        if ( (HIDWORD(*(_QWORD *)&ParticleDataInfo->id) & preserveMask) == 0 )
        {
          ParticleDataArrayIndex = ParticleData::GetParticleDataArrayIndex(this, i, this->m_particleCountRunning);
          if ( newParticlesCount + this->m_particleCountRunning > this->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 263, ASSERT_TYPE_ASSERT, "(( GetParticleCountRunning() + newParticlesCount ) <= GetParticleCountMax())", (const char *)&queryFormat, "( GetParticleCountRunning() + newParticlesCount ) <= GetParticleCountMax()", v8, v10) )
            __debugbreak();
          memset_0(ParticleDataArrayIndex, 0, newParticlesCount * (__int16)v10);
        }
      }
    }
  }
}

/*
==============
ParticleData::DestroyParticleOffsetTable
==============
*/
void ParticleData::DestroyParticleOffsetTable(ParticleData *this)
{
  this->m_dataFlags = USE_NONE;
  *(_QWORD *)this->m_particleDataOffsets = -1i64;
  *(_QWORD *)&this->m_particleDataOffsets[4] = -1i64;
  *(_QWORD *)&this->m_particleDataOffsets[8] = -1i64;
  *(_QWORD *)&this->m_particleDataOffsets[12] = -1i64;
  *(_QWORD *)&this->m_particleDataOffsets[16] = -1i64;
  *(_QWORD *)&this->m_particleDataOffsets[20] = -1i64;
  *(_QWORD *)&this->m_particleDataOffsets[24] = -1i64;
}

/*
==============
ParticleData::GetParticleDataArray
==============
*/
unsigned __int8 *ParticleData::GetParticleDataArray(ParticleData *this, const ParticleDataId dataField)
{
  __int64 v2; 
  __int64 m_particleCountMax; 
  unsigned __int8 *v5; 

  v2 = dataField;
  if ( !this->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 215, ASSERT_TYPE_ASSERT, "(m_pParticleData)", (const char *)&queryFormat, "m_pParticleData") )
    __debugbreak();
  if ( !this->m_particleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 216, ASSERT_TYPE_ASSERT, "(GetParticleCountMax() > 0)", (const char *)&queryFormat, "GetParticleCountMax() > 0") )
    __debugbreak();
  if ( this->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 217, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
    __debugbreak();
  if ( ((_DWORD)v2 == -1 || (int)v2 > 28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 218, ASSERT_TYPE_ASSERT, "(( dataField != PARTICLE_DATA_INVALID ) && ( dataField <= PARTICLE_DATA_FIELD_COUNT ))", (const char *)&queryFormat, "( dataField != PARTICLE_DATA_INVALID ) && ( dataField <= PARTICLE_DATA_FIELD_COUNT )") )
    __debugbreak();
  if ( this->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
    __debugbreak();
  if ( this->m_particleDataOffsets[v2] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 219, ASSERT_TYPE_ASSERT, "(HasParticleDataArray( dataField ))", (const char *)&queryFormat, "HasParticleDataArray( dataField )") )
    __debugbreak();
  if ( this->m_particleDataOffsets[v2] < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 220, ASSERT_TYPE_ASSERT, "(m_particleDataOffsets[dataField] >= 0)", (const char *)&queryFormat, "m_particleDataOffsets[dataField] >= 0") )
    __debugbreak();
  m_particleCountMax = this->m_particleCountMax;
  v5 = &this->m_pParticleData[(unsigned int)(m_particleCountMax * this->m_particleDataOffsets[v2])];
  if ( &v5[m_particleCountMax] > &this->m_pParticleData[(unsigned __int64)((unsigned int)m_particleCountMax * this->m_particleSize)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 224, ASSERT_TYPE_ASSERT, "(( dataArray + GetParticleCountMax() ) <= ( m_pParticleData + GetAllocSize() ))", (const char *)&queryFormat, "( dataArray + GetParticleCountMax() ) <= ( m_pParticleData + GetAllocSize() )") )
    __debugbreak();
  return v5;
}

/*
==============
ParticleData::GetParticleDataArrayIndex
==============
*/
unsigned __int8 *ParticleData::GetParticleDataArrayIndex(ParticleData *this, const ParticleDataId dataField, const unsigned int index)
{
  unsigned __int8 *ParticleDataArray; 
  int v7; 
  unsigned __int8 *v8; 
  __int64 v10; 
  ParticleDataInfo result; 

  ParticleDataArray = ParticleData::GetParticleDataArray(this, dataField);
  v7 = (__int16)*(_DWORD *)&GetParticleDataInfo(&result, dataField)->byteCount;
  if ( !ParticleDataArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 234, ASSERT_TYPE_ASSERT, "(baseArray)", (const char *)&queryFormat, "baseArray") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 235, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
    __debugbreak();
  if ( index >= this->m_particleCountMax )
  {
    LODWORD(v10) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetParticleCountMax() )", "index doesn't index GetParticleCountMax()\n\t%i not in [0, %i)", v10, this->m_particleCountMax) )
      __debugbreak();
  }
  v8 = &ParticleDataArray[index * v7];
  if ( v8 >= &this->m_pParticleData[(unsigned __int64)(this->m_particleCountMax * this->m_particleSize)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 240, ASSERT_TYPE_ASSERT, "(dataArray < ( m_pParticleData + GetAllocSize() ))", (const char *)&queryFormat, "dataArray < ( m_pParticleData + GetAllocSize() )") )
    __debugbreak();
  return v8;
}

/*
==============
GetParticleDataInfo
==============
*/
ParticleDataInfo *GetParticleDataInfo(ParticleDataInfo *result, const ParticleDataId particleDataId)
{
  __int16 v3; 
  __int64 v5; 
  int v6; 

  switch ( particleDataId )
  {
    case PARTICLE_DATA_POSITION:
      v5 = 0x100000000i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_VELOCITY:
      v5 = 0x200000001i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_COLOR:
      v5 = 0x400000002i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_ROTATION_ANGLE:
      v5 = 0x800000003i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_ROTATION_RATE:
      v5 = 0x1000000004i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_SPAWN_POS:
      v5 = 0x2000000005i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_SPAWN_QUAT:
      v5 = 0x4000000006i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_SIZE:
      v5 = 0x8000000007i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_EMISSIVE:
      v5 = 0x10000000008i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_PARENT_VELOCITY:
      v5 = 0x20000000009i64;
      v3 = truncate_cast<short,unsigned __int64>(0x10ui64);
      break;
    case PARTICLE_DATA_CHILD_SYSTEM:
      v5 = 0x4000000000Ai64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_SPAWN_TIME:
      v5 = 0x8000000000Bi64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_LIFE:
      v5 = 0x10000000000Ci64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_STATE:
      v5 = 0x20000000000Di64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_RANDOM_SEED:
      v5 = 0x40000000000Ei64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_FLAGS:
      v5 = 0x80000000000Fi64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_MODULE_TESTS:
      v5 = 0x1000000000010i64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_HANDLE:
      v5 = 0x2000000000011i64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_INTENSITY:
      v5 = 0x4000000000012i64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_TEMPERATURE:
      v5 = 0x8000000000013i64;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_CAMERA_DISTANCE:
      *(double *)&v5 = 2.225073858507211e-308;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_INHERIT_PERCENTAGE:
      *(double *)&v5 = 4.450147717014424e-308;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_RAY_CAST_HANDLE:
      *(double *)&v5 = 1.78005908680577e-307;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_ATLAS_INDEX:
      *(double *)&v5 = 2.848094538889232e-306;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_VECTOR_FIELD_SCALE:
      *(double *)&v5 = 7.291122019556436e-304;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_LIGHTING_FRAC:
      *(double *)&v5 = 4.778309726736507e-299;
      v3 = truncate_cast<short,unsigned __int64>(4ui64);
      break;
    case PARTICLE_DATA_PREV_PLACEMENT:
      *(double *)&v5 = 2.0522684006492e-289;
      v3 = truncate_cast<short,unsigned __int64>(0x20ui64);
      break;
    case PARTICLE_DATA_SHADER_PARAMS:
      *(double *)&v5 = 3.785766995733702e-270;
      v3 = truncate_cast<short,unsigned __int64>(0x30ui64);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 52, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "GetParticleDataInfo: Unreachable, check cases.") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "GetParticleDataInfo: Unreachable, check returns.") )
        __debugbreak();
      v3 = -1;
      v5 = 0xFFFFFFFFi64;
      break;
  }
  LOWORD(v6) = v3;
  *(double *)&result->id = *(double *)&v5;
  *(_DWORD *)&result->byteCount = v6;
  return result;
}

/*
==============
ParticleData::HasParticleDataArray
==============
*/
bool ParticleData::HasParticleDataArray(ParticleData *this, const ParticleDataId dataField)
{
  __int64 v3; 

  v3 = dataField;
  if ( this->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
    __debugbreak();
  return this->m_particleDataOffsets[v3] != -1;
}

/*
==============
Particle_AllocateBlock
==============
*/
unsigned __int8 *Particle_AllocateBlock(LocalClientNum_t localClientNum, const unsigned int particleSize, const unsigned int particleCount)
{
  unsigned __int8 *result; 

  if ( !particleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 179, ASSERT_TYPE_ASSERT, "(particleCount > 0)", (const char *)&queryFormat, "particleCount > 0") )
    __debugbreak();
  result = (unsigned __int8 *)ParticleManager::ParticleSystemAllocAndClear(localClientNum, particleSize * ((particleCount + 3) & 0xFFFFFFFC));
  if ( !result )
  {
    Com_PrintError(21, "Could not allocate %d Particles. Please increase PARTICLE_SYSTEM_POOL_SIZE.\n", particleCount);
    return 0i64;
  }
  return result;
}

/*
==============
Particle_CopyParticle
==============
*/
void Particle_CopyParticle(ParticleData *pParticleDataFrom, const unsigned int indexFrom, ParticleData *pParticleDataTo, const unsigned int indexTo)
{
  ParticleDataId i; 
  __int64 v9; 
  bool v10; 
  unsigned __int16 v11; 
  unsigned __int8 *ParticleDataArrayIndex; 
  unsigned __int8 *v13; 
  __int64 v14; 
  __int64 v15; 
  ParticleDataInfo result; 

  if ( !pParticleDataFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 78, ASSERT_TYPE_ASSERT, "(pParticleDataFrom)", (const char *)&queryFormat, "pParticleDataFrom") )
    __debugbreak();
  if ( !pParticleDataFrom->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 79, ASSERT_TYPE_ASSERT, "(pParticleDataFrom->GetParticleData())", (const char *)&queryFormat, "pParticleDataFrom->GetParticleData()") )
    __debugbreak();
  if ( !pParticleDataTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 80, ASSERT_TYPE_ASSERT, "(pParticleDataTo)", (const char *)&queryFormat, "pParticleDataTo") )
    __debugbreak();
  if ( !pParticleDataTo->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 81, ASSERT_TYPE_ASSERT, "(pParticleDataTo->GetParticleData())", (const char *)&queryFormat, "pParticleDataTo->GetParticleData()") )
    __debugbreak();
  if ( indexFrom >= pParticleDataFrom->m_particleCountMax )
  {
    LODWORD(v14) = indexFrom;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( indexFrom ) < (unsigned)( pParticleDataFrom->GetParticleCountMax() )", "indexFrom doesn't index pParticleDataFrom->GetParticleCountMax()\n\t%i not in [0, %i)", v14, pParticleDataFrom->m_particleCountMax) )
      __debugbreak();
  }
  if ( indexTo >= pParticleDataTo->m_particleCountMax )
  {
    LODWORD(v15) = pParticleDataTo->m_particleCountMax;
    LODWORD(v14) = indexTo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( indexTo ) < (unsigned)( pParticleDataTo->GetParticleCountMax() )", "indexTo doesn't index pParticleDataTo->GetParticleCountMax()\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !Particle_DataIsCompatible(pParticleDataFrom, pParticleDataTo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 85, ASSERT_TYPE_ASSERT, "(Particle_DataIsCompatible( pParticleDataFrom, pParticleDataTo ))", (const char *)&queryFormat, "Particle_DataIsCompatible( pParticleDataFrom, pParticleDataTo )") )
    __debugbreak();
  for ( i = PARTICLE_DATA_POSITION; (unsigned int)i < PARTICLE_DATA_FIELD_COUNT; ++i )
  {
    if ( pParticleDataFrom->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
      __debugbreak();
    v9 = 2i64 * (int)i + 40;
    v10 = *(_WORD *)((char *)&pParticleDataFrom->m_pParticleData + v9) != 0xFFFF;
    if ( pParticleDataTo->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
      __debugbreak();
    if ( v10 != (*(_WORD *)((char *)&pParticleDataTo->m_pParticleData + v9) != 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 91, ASSERT_TYPE_ASSERT, "(pParticleDataFrom->HasParticleDataArray( particleId ) == pParticleDataTo->HasParticleDataArray( particleId ))", (const char *)&queryFormat, "pParticleDataFrom->HasParticleDataArray( particleId ) == pParticleDataTo->HasParticleDataArray( particleId )") )
      __debugbreak();
    if ( pParticleDataFrom->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
      __debugbreak();
    if ( *(_WORD *)((char *)&pParticleDataFrom->m_pParticleData + v9) != 0xFFFF )
    {
      if ( pParticleDataTo->m_dataFlags == USE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 207, ASSERT_TYPE_ASSERT, "(m_dataFlags != ParticleDataFlags::USE_NONE)", (const char *)&queryFormat, "m_dataFlags != ParticleDataFlags::USE_NONE") )
        __debugbreak();
      if ( *(_WORD *)((char *)&pParticleDataTo->m_pParticleData + v9) != 0xFFFF )
      {
        v11 = *(_DWORD *)&GetParticleDataInfo(&result, i)->byteCount;
        ParticleDataArrayIndex = ParticleData::GetParticleDataArrayIndex(pParticleDataFrom, i, indexFrom);
        v13 = ParticleData::GetParticleDataArrayIndex(pParticleDataTo, i, indexTo);
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 99, ASSERT_TYPE_ASSERT, "(dataSize > 0)", (const char *)&queryFormat, "dataSize > 0") )
          __debugbreak();
        if ( (!ParticleDataArrayIndex || !v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 100, ASSERT_TYPE_ASSERT, "(srcArray && destArray)", (const char *)&queryFormat, "srcArray && destArray") )
          __debugbreak();
        if ( v13 < &ParticleDataArrayIndex[v11] && ParticleDataArrayIndex < &v13[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 101, ASSERT_TYPE_ASSERT, "(( destArray >= ( srcArray + dataSize ) ) || ( srcArray >= ( destArray + dataSize ) ))", (const char *)&queryFormat, "( destArray >= ( srcArray + dataSize ) ) || ( srcArray >= ( destArray + dataSize ) )") )
          __debugbreak();
        memcpy_0(v13, ParticleDataArrayIndex, v11);
      }
    }
  }
}

/*
==============
Particle_CopyParticleData
==============
*/
void Particle_CopyParticleData(const ParticleData *pParticleDataFrom, ParticleData *pParticleDataTo)
{
  if ( !pParticleDataTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 63, ASSERT_TYPE_ASSERT, "(pParticleDataTo)", (const char *)&queryFormat, "pParticleDataTo") )
    __debugbreak();
  if ( !pParticleDataFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 64, ASSERT_TYPE_ASSERT, "(pParticleDataFrom)", (const char *)&queryFormat, "pParticleDataFrom") )
    __debugbreak();
  if ( pParticleDataTo == pParticleDataFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 65, ASSERT_TYPE_ASSERT, "(pParticleDataTo != pParticleDataFrom)", (const char *)&queryFormat, "pParticleDataTo != pParticleDataFrom") )
    __debugbreak();
  if ( !pParticleDataTo->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 66, ASSERT_TYPE_ASSERT, "(pParticleDataTo->GetParticleData())", (const char *)&queryFormat, "pParticleDataTo->GetParticleData()") )
    __debugbreak();
  if ( !pParticleDataFrom->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 67, ASSERT_TYPE_ASSERT, "(pParticleDataFrom->GetParticleData())", (const char *)&queryFormat, "pParticleDataFrom->GetParticleData()") )
    __debugbreak();
  if ( !Particle_DataIsCompatible(pParticleDataFrom, pParticleDataTo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 68, ASSERT_TYPE_ASSERT, "(Particle_DataIsCompatible( pParticleDataFrom, pParticleDataTo ))", (const char *)&queryFormat, "Particle_DataIsCompatible( pParticleDataFrom, pParticleDataTo )") )
    __debugbreak();
  memcpy_0(pParticleDataTo->m_pParticleData, pParticleDataFrom->m_pParticleData, pParticleDataTo->m_particleCountMax * pParticleDataTo->m_particleSize);
}

/*
==============
Particle_DataIsCompatible
==============
*/
char Particle_DataIsCompatible(const ParticleData *particleData0, const ParticleData *particleData1)
{
  int v2; 
  __int16 *i; 

  if ( particleData0->m_particleSize == particleData1->m_particleSize && particleData0->m_particleCountMax == particleData1->m_particleCountMax )
  {
    v2 = 0;
    for ( i = particleData1->m_particleDataOffsets; *(__int16 *)((char *)i + (char *)particleData0 - (char *)particleData1) == *i; ++i )
    {
      if ( (unsigned int)++v2 >= 0x1C )
        return 1;
    }
  }
  return 0;
}

/*
==============
Particle_GetOffsetPadding
==============
*/
__int64 Particle_GetOffsetPadding(const unsigned int offset, const unsigned int byteCount)
{
  unsigned int v2; 

  if ( (byteCount & 0xF) != 0 || (offset & 0xF) == 0 )
    return 0i64;
  v2 = (offset | 0xF) - offset;
  if ( v2 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 142, ASSERT_TYPE_ASSERT, "(( padding >= 1 ) && ( padding < 16 ))", (const char *)&queryFormat, "( padding >= 1 ) && ( padding < PARTICLE_ALIGNMENT )") )
    __debugbreak();
  return v2 + 1;
}

/*
==============
Particle_GetSingleParticleSize
==============
*/
__int64 Particle_GetSingleParticleSize(const ParticleDataFlags dataFlags)
{
  int v1; 
  int v2; 
  ParticleDataId i; 
  int v5; 
  unsigned int v6; 
  ParticleDataInfo v8; 
  ParticleDataInfo result; 

  v1 = 0;
  v2 = 0;
  for ( i = PARTICLE_DATA_POSITION; (unsigned int)i < PARTICLE_DATA_FIELD_COUNT; ++i )
  {
    v8 = *GetParticleDataInfo(&result, i);
    if ( v8.id != i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 161, ASSERT_TYPE_ASSERT, "(info.id == particleId)", (const char *)&queryFormat, "info.id == particleId") )
      __debugbreak();
    if ( (dataFlags & v8.flag) != 0 )
    {
      if ( (v8.byteCount & 0xF) != 0 || (v2 & 0xF) == 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = (v2 | 0xF) - v2 + 1;
        if ( (v2 | 0xFu) - v2 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 142, ASSERT_TYPE_ASSERT, "(( padding >= 1 ) && ( padding < 16 ))", (const char *)&queryFormat, "( padding >= 1 ) && ( padding < PARTICLE_ALIGNMENT )") )
          __debugbreak();
      }
      v2 += v5 + v8.byteCount;
    }
  }
  if ( (v2 & 0xF) != 0 )
  {
    v1 = (v2 | 0xF) - v2 + 1;
    if ( (v2 | 0xFu) - v2 > 0xE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 142, ASSERT_TYPE_ASSERT, "(( padding >= 1 ) && ( padding < 16 ))", (const char *)&queryFormat, "( padding >= 1 ) && ( padding < PARTICLE_ALIGNMENT )") )
      __debugbreak();
  }
  v6 = v1 + v2;
  if ( (v6 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.cpp", 171, ASSERT_TYPE_ASSERT, "(( maxOffset & ( 16 - 1 ) ) == 0)", (const char *)&queryFormat, "( maxOffset & ( PARTICLE_ALIGNMENT - 1 ) ) == 0") )
    __debugbreak();
  return v6;
}

/*
==============
Particle_ReleaseBlock
==============
*/
void Particle_ReleaseBlock(LocalClientNum_t localClientNum, unsigned __int8 *pParticleData)
{
  if ( pParticleData )
    ParticleManager::ParticleSystemFree(localClientNum, pParticleData);
}

