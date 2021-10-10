/*
==============
R_DestroyLightSensor
==============
*/

void R_DestroyLightSensor(void)
{
  ?R_DestroyLightSensor@@YAXXZ();
}

/*
==============
R_LightSensor_ToggleFrame
==============
*/

void R_LightSensor_ToggleFrame(void)
{
  ?R_LightSensor_ToggleFrame@@YAXXZ();
}

/*
==============
RB_LightSensor_Process
==============
*/

void __fastcall RB_LightSensor_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_LightSensor_Process@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_InitLightSensor
==============
*/

void R_InitLightSensor(void)
{
  ?R_InitLightSensor@@YAXXZ();
}

/*
==============
R_LightSensor_GetBestLightGrid
==============
*/

const GfxGpuLightGrid *__fastcall R_LightSensor_GetBestLightGrid(const GfxBackEndData *data)
{
  return ?R_LightSensor_GetBestLightGrid@@YAPEBUGfxGpuLightGrid@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_LightSensor_Query
==============
*/

int __fastcall R_LightSensor_Query(GfxLightSensorResult *lightSensorOut)
{
  return ?R_LightSensor_Query@@YAHPEAUGfxLightSensorResult@@@Z(lightSensorOut);
}

/*
==============
R_LightSensor_Process
==============
*/

void __fastcall R_LightSensor_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage *sunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotshadowsArrayImage)
{
  ?R_LightSensor_Process@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxImage@@333@Z(computeState, viewInfo, data, sunShadowImage, translucentSunShadowImage, translucentSunShadowMaskImage, spotshadowsArrayImage);
}

/*
==============
R_ResetLightSensor
==============
*/

void R_ResetLightSensor(void)
{
  ?R_ResetLightSensor@@YAXXZ();
}

/*
==============
R_AllocLightSensors
==============
*/

int __fastcall R_AllocLightSensors(unsigned int entityID, const vec3_t *samplePos, unsigned int samplePosCount, float pointSize, const vec3_t *sampleNml)
{
  return ?R_AllocLightSensors@@YAHIQEBTvec3_t@@IMPEBT1@@Z(entityID, samplePos, samplePosCount, pointSize, sampleNml);
}

/*
==============
R_LightSensor_QueryEntity
==============
*/

int __fastcall R_LightSensor_QueryEntity(unsigned int entityID, GfxLightSensorEntityResult *lightSensorOut)
{
  return ?R_LightSensor_QueryEntity@@YAHIPEAUGfxLightSensorEntityResult@@@Z(entityID, lightSensorOut);
}

/*
==============
RB_LightSensor_Process
==============
*/
void RB_LightSensor_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int16 v3; 
  __int64 v7; 
  R_RT_Image *p_m_image; 
  R_RT_Image *translucentSunShadowImage; 
  GfxImage *translucentSunShadowMaskImage; 
  const GfxImage *spotshadowsArrayImage; 
  unsigned int v12; 
  R_RT_Handle m_translucentShadowRt; 

  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    v7 = 808i64;
    if ( data->sunShadow.opaqueCascadeCount > 1u )
      v7 = 810i64;
    m_translucentShadowRt = *(R_RT_Handle *)viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[v7].v;
    if ( v3 )
    {
      R_RT_Handle::GetSurface(&m_translucentShadowRt);
      p_m_image = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
      goto LABEL_9;
    }
    if ( m_translucentShadowRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  p_m_image = (R_RT_Image *)rgp.blackShadowImage;
LABEL_9:
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 && rg.useTransSunShadow )
  {
    m_translucentShadowRt = (R_RT_Handle)viewInfo->sceneRtInput.m_translucentShadowRt;
    if ( v3 )
    {
      R_RT_Handle::GetSurface(&m_translucentShadowRt);
      translucentSunShadowImage = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
      goto LABEL_16;
    }
    if ( m_translucentShadowRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  translucentSunShadowImage = (R_RT_Image *)rgp.zeroImage;
LABEL_16:
  translucentSunShadowMaskImage = rgp.blackImage;
  spotshadowsArrayImage = R_GetSpotShadowArrayImageDraw3D();
  v12 = data->frameCount & 1;
  if ( s_lightSensor.context[v12].frameCount != data->frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 600, ASSERT_TYPE_ASSERT, "(context->frameCount == data->frameCount)", (const char *)&queryFormat, "context->frameCount == data->frameCount") )
    __debugbreak();
  R_ReadLightSensors(computeState, data, v12);
  R_BuildLightSensorSamples(data, v12);
  R_SubmitLightSensorSamples(computeState, viewInfo, data, v12, &p_m_image->m_base, &translucentSunShadowImage->m_base, translucentSunShadowMaskImage, spotshadowsArrayImage);
}

/*
==============
R_AllocLightSensors
==============
*/
__int64 R_AllocLightSensors(unsigned int entityID, const vec3_t *samplePos, unsigned int samplePosCount, float pointSize, const vec3_t *sampleNml)
{
  __int64 v6; 
  __int64 result; 
  GfxLightSensorContext *v9; 
  volatile signed __int32 *p_entityCount; 
  int v11; 
  __int64 v12; 
  __int64 position; 
  __int64 v14; 
  float *v18; 
  signed __int64 v19; 
  float *v28; 

  v6 = samplePosCount;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 233, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( (unsigned int)v6 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 234, ASSERT_TYPE_ASSERT, "(samplePosCount <= 64)", (const char *)&queryFormat, "samplePosCount <= LIGHT_SENSOR_MAX_ENTITY_SAMPLES") )
    __debugbreak();
  if ( !(_DWORD)v6 )
    return 0i64;
  v9 = &s_lightSensor.context[frontEndDataOut->frameCount & 1];
  if ( v9->frameCount != frontEndDataOut->frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 244, ASSERT_TYPE_ASSERT, "(context->frameCount == frameCount)", (const char *)&queryFormat, "context->frameCount == frameCount") )
    __debugbreak();
  p_entityCount = &v9->entityCount;
  if ( (((_BYTE)v9 + 4) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v9->entityCount) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(p_entityCount, 1u);
  if ( v11 < 16 )
  {
    v12 = v11;
    v9->entityArray[v12].entityID = entityID;
    v9->entityArray[v12].posCount = v6;
    position = (__int64)v9->entityArray[v12].position;
    v14 = v6;
    _XMM0 = 0i64;
    if ( sampleNml )
    {
      _XMM5 = 0i64;
      __asm { vroundss xmm0, xmm5, xmm2, 1 }
      v18 = &sampleNml->v[2];
      v19 = (char *)samplePos - (char *)sampleNml;
      do
      {
        _XMM0 = *(unsigned int *)((char *)v18 + v19 - 8);
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [rdi+rbp-4], 10h
          vinsertps xmm0, xmm0, dword ptr [rdi+rbp], 20h ; ' '
          vroundss xmm2, xmm5, xmm3, 1
        }
        position += 16i64;
        v18 += 3;
        __asm
        {
          vroundss xmm2, xmm5, xmm3, 1
          vroundss xmm2, xmm5, xmm3, 1
          vinsertps xmm0, xmm0, [rsp+68h+arg_10], 30h
        }
        *(_OWORD *)(position - 16) = _XMM0;
        --v14;
      }
      while ( v14 );
    }
    else
    {
      __asm { vroundss xmm1, xmm0, xmm2, 1 }
      v28 = &samplePos->v[1];
      do
      {
        position += 16i64;
        _XMM0 = *((unsigned int *)v28 - 1);
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [rcx], 10h
          vinsertps xmm0, xmm0, dword ptr [rcx+4], 20h ; ' '
        }
        v28 += 3;
        __asm { vinsertps xmm0, xmm0, xmm1, 30h ; '0' }
        *(_OWORD *)(position - 16) = _XMM0;
        --v14;
      }
      while ( v14 );
    }
    return 1i64;
  }
  else
  {
    Com_Printf(8, "Light sensor entity buffer is too small\n");
    result = 0i64;
    *p_entityCount = 16;
  }
  return result;
}

/*
==============
R_BuildLightSensorSamples
==============
*/
void R_BuildLightSensorSamples(const GfxBackEndData *data, const unsigned int writeSlot)
{
  volatile int v2; 
  GfxLightSensorContext *v3; 
  GfxLightSensorPending *v4; 
  unsigned int *p_posCount; 
  unsigned int *p_sampleCount; 
  unsigned int inputSampleCount; 
  _OWORD dataa[1024]; 

  v2 = 0;
  v3 = &s_lightSensor.context[writeSlot];
  v4 = &s_lightSensor.pending[writeSlot];
  v4->frameCount = v3->frameCount;
  v4->entityCount = v3->entityCount;
  v4->inputSampleCount = 0;
  if ( v3->entityCount > 0 )
  {
    p_posCount = &v3->entityArray[0].posCount;
    p_sampleCount = &v4->entity[0].sampleCount;
    do
    {
      memcpy_0(&dataa[v4->inputSampleCount], p_posCount + 3, 16i64 * *p_posCount);
      *(p_sampleCount - 2) = *(p_posCount - 1);
      *p_sampleCount = *p_posCount;
      *(p_sampleCount - 1) = v4->inputSampleCount;
      v4->inputSampleCount += *p_posCount;
      if ( v4->inputSampleCount >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 471, ASSERT_TYPE_ASSERT, "(pending->inputSampleCount < 64 * 16 * ( 64 / 64 ))", (const char *)&queryFormat, "pending->inputSampleCount < LIGHT_SENSOR_MAP_WIDTH * LIGHT_SENSOR_MAP_HEIGHT") )
        __debugbreak();
      ++v2;
      p_posCount += 260;
      p_sampleCount += 3;
    }
    while ( v2 < v3->entityCount );
  }
  inputSampleCount = v4->inputSampleCount;
  if ( inputSampleCount )
    R_UpdateGfxWrappedBuffer(&v3->lightSensorInputBuffer, dataa, 16 * inputSampleCount);
}

/*
==============
R_DestroyLightSensor
==============
*/
void R_DestroyLightSensor(void)
{
  GfxImage **p_lightSensorOutput; 
  __int64 v1; 

  p_lightSensorOutput = &s_lightSensor.context[0].lightSensorOutput;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)p_lightSensorOutput - 1);
    Image_Release(*p_lightSensorOutput);
    *p_lightSensorOutput = NULL;
    p_lightSensorOutput += 2088;
    --v1;
  }
  while ( v1 );
}

/*
==============
R_InitLightSensor
==============
*/

void __fastcall R_InitLightSensor(double _XMM0_8)
{
  GfxWrappedBuffer *p_lightSensorInputBuffer; 
  unsigned int v2; 
  GfxBufferCreationContext v3; 
  void *initialData; 
  GfxImage *v5; 
  GfxBufferCreationContext v6; 
  __m256i v7; 
  __m256i v8; 
  Image_SetupParams params; 

  memset_0(&s_lightSensor, 0, sizeof(s_lightSensor));
  v6.zoneName = (char *)&queryFormat.fmt + 3;
  p_lightSensorInputBuffer = &s_lightSensor.context[0].lightSensorInputBuffer;
  v2 = 0;
  v6.objectName = "lightSensorInput";
  v3 = v6;
  do
  {
    v6 = v3;
    initialData = R_AllocGfxBufferMemory(0x4000u, &v6);
    p_lightSensorInputBuffer[-1].data = initialData;
    R_CreateGfxWrappedBuffer(p_lightSensorInputBuffer, GfxWrappedBuffer_Raw, 16, 0x400u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "lightSensorInputBuffer");
    v5 = Image_AllocProg((R_ImageProgID)(v2 + 17), IMG_CATEGORY_RAW, TS_FUNCTION);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v8.m256i_u64[1] = *(_OWORD *)&_XMM0_8;
    *(__int64 *)((char *)&v7.m256i_i64[1] + 4) = 1i64;
    v8.m256i_i64[0] = 0i64;
    v8.m256i_i32[6] = -1;
    v7.m256i_i32[0] = 64;
    *(__int64 *)((char *)v7.m256i_i64 + 4) = 0x100000010i64;
    *(__int64 *)((char *)&v7.m256i_i64[2] + 4) = 0x1100800402i64;
    *(__m256i *)&params.width = v7;
    *(__m256i *)&params.customAllocFunc = v8;
    p_lightSensorInputBuffer[1].buffer = (ID3D12Resource *)v5;
    Image_Setup(v5, &params);
    ++v2;
    p_lightSensorInputBuffer += 522;
  }
  while ( v2 < 2 );
}

/*
==============
R_LightSensor_GetBestLightGrid
==============
*/
const GfxGpuLightGrid *R_LightSensor_GetBestLightGrid(const GfxBackEndData *data)
{
  if ( R_GetNumActiveLightGrids(data) <= 0 )
    return 0i64;
  else
    return *R_GetActiveLightGridsList(data);
}

/*
==============
R_LightSensor_Process
==============
*/
void R_LightSensor_Process(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage *sunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotshadowsArrayImage)
{
  unsigned int v9; 

  v9 = data->frameCount & 1;
  if ( s_lightSensor.context[v9].frameCount != data->frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 600, ASSERT_TYPE_ASSERT, "(context->frameCount == data->frameCount)", (const char *)&queryFormat, "context->frameCount == data->frameCount") )
    __debugbreak();
  R_ReadLightSensors(computeState, data, v9);
  R_BuildLightSensorSamples(data, v9);
  R_SubmitLightSensorSamples(computeState, viewInfo, data, v9, sunShadowImage, translucentSunShadowImage, translucentSunShadowMaskImage, spotshadowsArrayImage);
}

/*
==============
R_LightSensor_Query
==============
*/
__int64 R_LightSensor_Query(GfxLightSensorResult *lightSensorOut)
{
  __int64 v2; 
  GfxLightSensorResult *v3; 
  unsigned int v4; 
  bool v5; 
  bool v6; 
  unsigned int entityCount; 
  unsigned int v8; 
  unsigned int inputSampleCount; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 300, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v2 = s_lightSensor.feedbackSlot & 0x80000001;
  if ( s_lightSensor.feedbackSlot < 0 )
    v2 = ((unsigned __int8)((s_lightSensor.feedbackSlot & 1) - 1) | 0xFFFFFFFE) + 1;
  v3 = &s_lightSensor.result[v2];
  v4 = frontEndDataOut->frameCount - v3->frameCount - 1;
  lightSensorOut->frameCount = v3->frameCount;
  v5 = v4 < 3;
  v6 = v4 == 3;
  entityCount = v3->entityCount;
  lightSensorOut->entityCount = entityCount;
  v8 = v5 || v6;
  if ( entityCount )
    memcpy_0(lightSensorOut->entity, v3->entity, 12i64 * v3->entityCount);
  inputSampleCount = v3->inputSampleCount;
  lightSensorOut->inputSampleCount = inputSampleCount;
  if ( inputSampleCount )
    memcpy_0(lightSensorOut->sampleLuminance, v3->sampleLuminance, 4i64 * v3->inputSampleCount);
  return v8;
}

/*
==============
R_LightSensor_QueryEntity
==============
*/
__int64 R_LightSensor_QueryEntity(unsigned int entityID, GfxLightSensorEntityResult *lightSensorOut)
{
  __int64 v4; 
  GfxLightSensorResult *v5; 
  unsigned int v6; 
  __int64 v7; 
  bool v8; 
  bool v9; 
  unsigned int entityCount; 
  unsigned int v11; 
  GfxLightSensorResultEntityMapping *entity; 
  unsigned int sampleCount; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 327, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v4 = s_lightSensor.feedbackSlot & 0x80000001;
  if ( s_lightSensor.feedbackSlot < 0 )
    v4 = ((unsigned __int8)((s_lightSensor.feedbackSlot & 1) - 1) | 0xFFFFFFFE) + 1;
  v5 = &s_lightSensor.result[v4];
  v6 = frontEndDataOut->frameCount - v5->frameCount - 1;
  v7 = 0i64;
  v8 = v6 < 3;
  v9 = v6 == 3;
  entityCount = v5->entityCount;
  v11 = v8 || v9;
  if ( entityCount )
  {
    entity = v5->entity;
    while ( entity->entityID != entityID )
    {
      v7 = (unsigned int)(v7 + 1);
      ++entity;
      if ( (unsigned int)v7 >= entityCount )
        goto LABEL_10;
    }
    lightSensorOut->frameCount = v5->frameCount;
    sampleCount = v5->entity[v7].sampleCount;
    lightSensorOut->sampleCount = sampleCount;
    if ( !sampleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 342, ASSERT_TYPE_ASSERT, "(lightSensorOut->sampleCount)", (const char *)&queryFormat, "lightSensorOut->sampleCount") )
      __debugbreak();
    memcpy_0(lightSensorOut->sampleLuminance, &v5->sampleLuminance[entity->firstSample], 4i64 * entity->sampleCount);
    return v11;
  }
  else
  {
LABEL_10:
    *(_QWORD *)&lightSensorOut->frameCount = 0i64;
    return 0i64;
  }
}

/*
==============
R_LightSensor_ToggleFrame
==============
*/
void R_LightSensor_ToggleFrame(void)
{
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 221, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  *(_QWORD *)&s_lightSensor.context[frontEndDataOut->frameCount & 1].frameCount = frontEndDataOut->frameCount;
}

/*
==============
R_ReadLightSensors
==============
*/
void R_ReadLightSensors(ComputeCmdBufState *computeState, const GfxBackEndData *data, const unsigned int readSlot)
{
  __int64 v3; 
  GfxLightSensorContext *v4; 
  GfxLightSensorPending *v5; 
  GfxImage *lightSensorOutput; 
  GfxLightSensorResult *v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned int inputSampleCount; 
  __int64 v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 

  v3 = readSlot;
  v4 = &s_lightSensor.context[readSlot];
  v5 = &s_lightSensor.pending[v3];
  if ( s_lightSensor.pending[v3].inputSampleCount && v4->frameCount - v5->frameCount == 2 )
  {
    lightSensorOutput = v4->lightSensorOutput;
    v7 = &s_lightSensor.result[(LOBYTE(s_lightSensor.feedbackSlot) + 1) & 1];
    if ( !lightSensorOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( (lightSensorOutput->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
      __debugbreak();
    v8 = lightSensorOutput->pixels.streamedDataHandle.data;
    v16 = v4->lightSensorOutput->totalSize / v4->lightSensorOutput->height;
    v9 = v16;
    if ( !v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 410, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
        __debugbreak();
      v9 = v16;
    }
    inputSampleCount = v5->inputSampleCount;
    v11 = 0i64;
    v12 = 0;
    v13 = inputSampleCount & 0x3F;
    v14 = (inputSampleCount + 63) >> 6;
    if ( v14 )
    {
      do
      {
        v15 = 64;
        if ( v12 == v14 - 1 )
          v15 = v13;
        memcpy_0(&v7->sampleLuminance[v11], (const void *)(v8 + v9 * v12), 4i64 * v15);
        v9 = v16;
        v11 = v15 + (unsigned int)v11;
        ++v12;
      }
      while ( v12 < v14 );
      inputSampleCount = v5->inputSampleCount;
    }
    if ( (_DWORD)v11 != inputSampleCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 426, ASSERT_TYPE_ASSERT, "(samplesRead == pending->inputSampleCount)", (const char *)&queryFormat, "samplesRead == pending->inputSampleCount") )
      __debugbreak();
    v7->frameCount = v5->frameCount;
    v7->inputSampleCount = v5->inputSampleCount;
    v7->entityCount = v5->entityCount;
    memcpy_0(v7->entity, v5->entity, 12i64 * v5->entityCount);
    if ( ((unsigned __int8)&s_lightSensor.feedbackSlot & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_lightSensor.feedbackSlot) )
      __debugbreak();
    _InterlockedIncrement(&s_lightSensor.feedbackSlot);
  }
}

/*
==============
R_ResetLightSensor
==============
*/
void R_ResetLightSensor(void)
{
  unsigned int *p_entityCount; 
  __int64 v1; 
  unsigned int *v2; 
  GfxLightSensor *v3; 
  volatile int *v4; 

  p_entityCount = &s_lightSensor.result[0].entityCount;
  v1 = 2i64;
  v2 = &s_lightSensor.pending[0].entityCount;
  v3 = &s_lightSensor;
  v4 = &s_lightSensor.context[0].entityCount;
  do
  {
    v3->context[0].frameCount = 0;
    p_entityCount += 1075;
    *v4 = 0;
    v4 += 4176;
    *(_QWORD *)(v2 - 1) = 0i64;
    v3 = (GfxLightSensor *)((char *)v3 + 16704);
    v2[49] = 0;
    v2 += 51;
    *((_QWORD *)p_entityCount - 538) = 0i64;
    *(p_entityCount - 1026) = 0;
    --v1;
  }
  while ( v1 );
  s_lightSensor.feedbackSlot = 0;
}

/*
==============
R_SubmitLightSensorSamples
==============
*/
void R_SubmitLightSensorSamples(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const unsigned int slot, const GfxImage *sunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotshadowsArrayImage)
{
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  const GfxWrappedBuffer *FallbackProbe; 
  __m256i v15; 
  unsigned int inputSampleCount; 
  const GfxBackEndData *v17; 
  const GfxGpuLightGrid *v18; 
  __int64 v19; 
  __int64 lightSensorMode; 
  const GfxWrappedBuffer *v21; 
  GfxImage *dataa[2]; 
  int v23[8]; 
  __int64 v24; 
  int v25; 
  __m256i v26; 
  __m256i v27; 

  v11 = slot;
  v12 = slot;
  dataa[0] = (GfxImage *)translucentSunShadowMaskImage;
  if ( s_lightSensor.pending[v12].inputSampleCount && R_DeferredLighting_SetupSharedInputCustom(computeState, viewInfo, spotshadowsArrayImage) )
  {
    v13 = v11;
    R_DeferredLighting_SetupOverlappingInputCustom(computeState, viewInfo, EFFECT_LIGHTING_LIGHTMAP_GENERATE_OUT_OF_FRUSTUM, sunShadowImage, translucentSunShadowImage, dataa[0], NULL);
    dataa[0] = (GfxImage *)data->globalSceneConstantBuffer->buffer;
    R_SetComputeConstantBuffers(computeState, 7, 1, (ID3D12Resource *const *const)dataa);
    FallbackProbe = R_GetFallbackProbe();
    R_HW_AddResourceTransition(computeState, FallbackProbe, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(computeState);
    dataa[0] = (GfxImage *)((char *)&s_lightSensor.context[0].lightSensorInputBuffer.view + v13 * 16704);
    R_SetComputeViews(computeState, 28, 1, (const GfxShaderBufferView *const *)dataa);
    dataa[0] = (GfxImage *)&R_GetFallbackProbe()->view;
    R_SetComputeViews(computeState, 30, 1, (const GfxShaderBufferView *const *)dataa);
    dataa[0] = (GfxImage *)R_Texture_GetResident(s_lightSensor.context[v13].lightSensorOutput->textureId);
    R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)dataa);
    *(_OWORD *)dataa = _xmm;
    R_UploadAndSetComputeConstants(computeState, 0, dataa, 0x10u, NULL);
    v15 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
    inputSampleCount = s_lightSensor.pending[v12].inputSampleCount;
    *(float *)&v23[1] = 0.0;
    *(float *)&v23[2] = 0.0;
    v26 = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
    v23[0] = inputSampleCount;
    v27 = v15;
    v24 = 0i64;
    v25 = 0;
    if ( RB_GpuLightGrid_DataAvailable(viewInfo) )
    {
      v17 = viewInfo->input.data;
      if ( R_GetNumActiveLightGrids(v17) > 0 )
      {
        v18 = *R_GetActiveLightGridsList(v17);
        if ( v18 )
        {
          v19 = (__int64)&v18->zones[viewInfo->input.voxelTreeZoneIndex];
          if ( v19 )
          {
            v24 = *(_QWORD *)(v19 + 12);
            v25 = *(_DWORD *)(v19 + 20);
          }
          RB_GpuLightGrid_SetResouces(computeState, &viewInfo->input, v18);
        }
      }
    }
    R_UploadAndSetComputeConstants(computeState, 1, v23, 0x70u, NULL);
    lightSensorMode = rg.lightSensorMode;
    if ( !rgp.lightSensorShader[rg.lightSensorMode] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light_sensor.cpp", 562, ASSERT_TYPE_ASSERT, "(rgp.lightSensorShader[mode])", (const char *)&queryFormat, "rgp.lightSensorShader[mode]") )
      __debugbreak();
    R_SetComputeShader(computeState, rgp.lightSensorShader[lightSensorMode]);
    R_Dispatch(computeState, 1u, (s_lightSensor.pending[v12].inputSampleCount + 63) >> 6, 1u);
    v21 = R_GetFallbackProbe();
    R_HW_AddResourceTransition(computeState, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
}

