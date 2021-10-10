/*
==============
ReactiveMotionInplaceBuffer::GetQWOffset
==============
*/

unsigned int __fastcall ReactiveMotionInplaceBuffer::GetQWOffset(ReactiveMotionInplaceBuffer *this, unsigned __int64 addr, unsigned __int64 size)
{
  return ?GetQWOffset@ReactiveMotionInplaceBuffer@@QEBAI_K0@Z(this, addr, size);
}

/*
==============
RB_Reactive_GetSModelIndirectionBuffer
==============
*/

void __fastcall RB_Reactive_GetSModelIndirectionBuffer(const GfxBackEndData *data, unsigned __int16 **indirectionDataBuffer, unsigned int *first, unsigned int *last)
{
  ?RB_Reactive_GetSModelIndirectionBuffer@@YAXPEBUGfxBackEndData@@AEAPEAGAEAI2@Z(data, indirectionDataBuffer, first, last);
}

/*
==============
R_ReactiveMotion_GetClutterSModelInstanceDataBuffer
==============
*/

GfxWrappedRWBuffer *__fastcall R_ReactiveMotion_GetClutterSModelInstanceDataBuffer()
{
  return ?R_ReactiveMotion_GetClutterSModelInstanceDataBuffer@@YAPEAUGfxWrappedRWBuffer@@XZ();
}

/*
==============
R_ReactiveMotion_SetupParts
==============
*/

void __fastcall R_ReactiveMotion_SetupParts(const unsigned int frame, const unsigned int smodelInstanceIndex, const XModel *model)
{
  ?R_ReactiveMotion_SetupParts@@YAXIIPEBUXModel@@@Z(frame, smodelInstanceIndex, model);
}

/*
==============
R_AddReactiveMotionCalcComputeCmd
==============
*/

bool __fastcall R_AddReactiveMotionCalcComputeCmd(ComputeCmdList *list)
{
  return ?R_AddReactiveMotionCalcComputeCmd@@YA_NPEAUComputeCmdList@@@Z(list);
}

/*
==============
ReactiveMotionSphere::ReactiveMotionSphere
==============
*/

void __fastcall ReactiveMotionSphere::ReactiveMotionSphere(ReactiveMotionSphere *this)
{
  ??0ReactiveMotionSphere@@QEAA@XZ(this);
}

/*
==============
R_ReactiveMotion_Update
==============
*/

void __fastcall R_ReactiveMotion_Update(LocalClientNum_t localClientNum, const float gameTimeSec, const float deltaGameTimeSec, const vec3_t *clientPos, const vec3_t *clientVel)
{
  ?R_ReactiveMotion_Update@@YAXW4LocalClientNum_t@@MMAEBTvec3_t@@1@Z(localClientNum, gameTimeSec, deltaGameTimeSec, clientPos, clientVel);
}

/*
==============
R_ReactiveMotion_GetBackendParams
==============
*/

ReactiveMotionParams *__fastcall R_ReactiveMotion_GetBackendParams()
{
  return ?R_ReactiveMotion_GetBackendParams@@YAPEAUReactiveMotionParams@@XZ();
}

/*
==============
R_ReactiveMotion_GetReactiveMotionClutterLayerCount
==============
*/

unsigned int __fastcall R_ReactiveMotion_GetReactiveMotionClutterLayerCount(const unsigned int frame)
{
  return ?R_ReactiveMotion_GetReactiveMotionClutterLayerCount@@YAII@Z(frame);
}

/*
==============
ReactiveMotionSphere_SetPos
==============
*/

void __fastcall ReactiveMotionSphere_SetPos(ReactiveMotionSphere *reactiveMotionSphere, const vec3_t *origin)
{
  ?ReactiveMotionSphere_SetPos@@YAXPEAUReactiveMotionSphere@@AEBTvec3_t@@@Z(reactiveMotionSphere, origin);
}

/*
==============
R_ReactiveMotion_GetClutterCollectionGPUDataBuffer
==============
*/

GfxWrappedRWBuffer *__fastcall R_ReactiveMotion_GetClutterCollectionGPUDataBuffer(const unsigned int frame)
{
  return ?R_ReactiveMotion_GetClutterCollectionGPUDataBuffer@@YAPEAUGfxWrappedRWBuffer@@I@Z(frame);
}

/*
==============
R_ReactiveMotion_AnyActiveModels
==============
*/

bool __fastcall R_ReactiveMotion_AnyActiveModels(unsigned int frame)
{
  return ?R_ReactiveMotion_AnyActiveModels@@YA_NI@Z(frame);
}

/*
==============
ReactiveMotionSphere_GetPos
==============
*/

void __fastcall ReactiveMotionSphere_GetPos(const ReactiveMotionSphere *reactiveMotionSphere, vec3_t *outOrigin)
{
  ?ReactiveMotionSphere_GetPos@@YAXPEBUReactiveMotionSphere@@AEATvec3_t@@@Z(reactiveMotionSphere, outOrigin);
}

/*
==============
R_AddReactiveMotionSimComputeCmd
==============
*/

bool __fastcall R_AddReactiveMotionSimComputeCmd(ComputeCmdList *list)
{
  return ?R_AddReactiveMotionSimComputeCmd@@YA_NPEAUComputeCmdList@@@Z(list);
}

/*
==============
ReactiveMotionEffector_SetPos
==============
*/

void __fastcall ReactiveMotionEffector_SetPos(ReactiveMotionEffector *reactiveMotionEffector, const vec3_t *origin)
{
  ?ReactiveMotionEffector_SetPos@@YAXPEAUReactiveMotionEffector@@AEBTvec3_t@@@Z(reactiveMotionEffector, origin);
}

/*
==============
R_ReactiveMotion_ShutdownWorld
==============
*/

void R_ReactiveMotion_ShutdownWorld(void)
{
  ?R_ReactiveMotion_ShutdownWorld@@YAXXZ();
}

/*
==============
R_ReactiveMotion_UsingCpuCalc
==============
*/

bool __fastcall R_ReactiveMotion_UsingCpuCalc()
{
  return ?R_ReactiveMotion_UsingCpuCalc@@YA_NXZ();
}

/*
==============
R_ReactiveMotion_SetClutterActive
==============
*/

void __fastcall R_ReactiveMotion_SetClutterActive(const unsigned int frame)
{
  ?R_ReactiveMotion_SetClutterActive@@YAXI@Z(frame);
}

/*
==============
R_ReactiveMotion_CalcModelPartsGpu
==============
*/

unsigned int __fastcall R_ReactiveMotion_CalcModelPartsGpu(const XModel *model, const unsigned int smodelInstanceIndex, unsigned int reactiveIndex, GfxReactiveMotionFrameData *frameData, const vector4 *modelTransform, float modelTransformScale)
{
  return ?R_ReactiveMotion_CalcModelPartsGpu@@YAIPEBUXModel@@IIPEAUGfxReactiveMotionFrameData@@PEIBUvector4@@M@Z(model, smodelInstanceIndex, reactiveIndex, frameData, modelTransform, modelTransformScale);
}

/*
==============
R_ReactiveMotionSimCompute
==============
*/

void __fastcall R_ReactiveMotionSimCompute(ComputeCmdBufState *state, unsigned int frame)
{
  ?R_ReactiveMotionSimCompute@@YAXPEAUComputeCmdBufState@@I@Z(state, frame);
}

/*
==============
ReactiveMotionSphere_GetPosRAW
==============
*/

void __fastcall ReactiveMotionSphere_GetPosRAW(const ReactiveMotionSphere *reactiveMotionSphere, vec3_t *outOrigin)
{
  ?ReactiveMotionSphere_GetPosRAW@@YAXPEBUReactiveMotionSphere@@AEATvec3_t@@@Z(reactiveMotionSphere, outOrigin);
}

/*
==============
R_ExecuteReactiveMotionCalcComputeCmds
==============
*/

void __fastcall R_ExecuteReactiveMotionCalcComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ExecuteReactiveMotionCalcComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(state, list, type, header);
}

/*
==============
R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU
==============
*/

void __fastcall R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU(const unsigned int frame, const XModel *model, GPClutterReactiveMotionModelInfoGpu *clutterModelInfo)
{
  ?R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU@@YAXIPEBUXModel@@PEAUGPClutterReactiveMotionModelInfoGpu@@@Z(frame, model, clutterModelInfo);
}

/*
==============
R_ReactiveMotion_UsesClutterPass
==============
*/

bool __fastcall R_ReactiveMotion_UsesClutterPass(const unsigned int frame)
{
  return ?R_ReactiveMotion_UsesClutterPass@@YA_NI@Z(frame);
}

/*
==============
R_ReactiveMotion_GetDebugClutterInstanceCount
==============
*/

unsigned int __fastcall R_ReactiveMotion_GetDebugClutterInstanceCount(const unsigned int frame)
{
  return ?R_ReactiveMotion_GetDebugClutterInstanceCount@@YAII@Z(frame);
}

/*
==============
R_ToggleReactiveMotionFrame
==============
*/

unsigned int __fastcall R_ToggleReactiveMotionFrame()
{
  return ?R_ToggleReactiveMotionFrame@@YAIXZ();
}

/*
==============
R_GetReactiveMotionPivotsBuffer
==============
*/

GfxWrappedBuffer *__fastcall R_GetReactiveMotionPivotsBuffer(unsigned int frame)
{
  return ?R_GetReactiveMotionPivotsBuffer@@YAPEAUGfxWrappedBuffer@@I@Z(frame);
}

/*
==============
R_ReactiveMotion_AddEffector_MT
==============
*/

void __fastcall R_ReactiveMotion_AddEffector_MT(const vec3_t *pos, const vec3_t *vel, const int entIndex)
{
  ?R_ReactiveMotion_AddEffector_MT@@YAXAEBTvec3_t@@0H@Z(pos, vel, entIndex);
}

/*
==============
R_ReactiveMotionGenModelPartIndicesCompute
==============
*/

void __fastcall R_ReactiveMotionGenModelPartIndicesCompute(ComputeCmdBufState *state, unsigned int frame)
{
  ?R_ReactiveMotionGenModelPartIndicesCompute@@YAXPEAUComputeCmdBufState@@I@Z(state, frame);
}

/*
==============
R_ExecuteReactiveMotionSimComputeCmds
==============
*/

void __fastcall R_ExecuteReactiveMotionSimComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ExecuteReactiveMotionSimComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(state, list, type, header);
}

/*
==============
R_ReactiveMotion_InitClutterFrame
==============
*/

void __fastcall R_ReactiveMotion_InitClutterFrame(ComputeCmdBufState *state, bool endOfFrameReset)
{
  ?R_ReactiveMotion_InitClutterFrame@@YAXPEIAUComputeCmdBufState@@_N@Z(state, endOfFrameReset);
}

/*
==============
R_ReactiveMotion_AllocCB
==============
*/

unsigned int __fastcall R_ReactiveMotion_AllocCB(unsigned int *numCBsUsed)
{
  return ?R_ReactiveMotion_AllocCB@@YAIPEAI@Z(numCBsUsed);
}

/*
==============
R_ReactiveMotion_InitWorld
==============
*/

void R_ReactiveMotion_InitWorld(void)
{
  ?R_ReactiveMotion_InitWorld@@YAXXZ();
}

/*
==============
R_ReactiveMotion_GetClutterInstanceOffsetsBuffer
==============
*/

GfxWrappedRWBuffer *__fastcall R_ReactiveMotion_GetClutterInstanceOffsetsBuffer(const unsigned int frame)
{
  return ?R_ReactiveMotion_GetClutterInstanceOffsetsBuffer@@YAPEAUGfxWrappedRWBuffer@@I@Z(frame);
}

/*
==============
R_ReactiveMotionCalcCompute
==============
*/

void __fastcall R_ReactiveMotionCalcCompute(ComputeCmdBufState *state, unsigned int frame)
{
  ?R_ReactiveMotionCalcCompute@@YAXPEAUComputeCmdBufState@@I@Z(state, frame);
}

/*
==============
R_ReactiveMotion_DisableParts
==============
*/

void __fastcall R_ReactiveMotion_DisableParts(const unsigned int frame, const unsigned int smodelInstanceIndex)
{
  ?R_ReactiveMotion_DisableParts@@YAXII@Z(frame, smodelInstanceIndex);
}

/*
==============
R_InitReactiveMotion
==============
*/

void R_InitReactiveMotion(void)
{
  ?R_InitReactiveMotion@@YAXXZ();
}

/*
==============
ReactiveMotionSphere_SetPosRAW
==============
*/

void __fastcall ReactiveMotionSphere_SetPosRAW(ReactiveMotionSphere *reactiveMotionSphere, const vec3_t *origin)
{
  ?ReactiveMotionSphere_SetPosRAW@@YAXPEAUReactiveMotionSphere@@AEBTvec3_t@@@Z(reactiveMotionSphere, origin);
}

/*
==============
RB_UploadReactiveMotionData
==============
*/

void __fastcall RB_UploadReactiveMotionData(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_UploadReactiveMotionData@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_ReactiveMotion_SetReactiveMotionClutterLayerCount
==============
*/

void __fastcall R_ReactiveMotion_SetReactiveMotionClutterLayerCount(const unsigned int frame, unsigned int count)
{
  ?R_ReactiveMotion_SetReactiveMotionClutterLayerCount@@YAXII@Z(frame, count);
}

/*
==============
ReactiveMotionEffector_GetPos
==============
*/

void __fastcall ReactiveMotionEffector_GetPos(const ReactiveMotionEffector *reactiveMotionEffector, vec3_t *outOrigin)
{
  ?ReactiveMotionEffector_GetPos@@YAXPEBUReactiveMotionEffector@@AEATvec3_t@@@Z(reactiveMotionEffector, outOrigin);
}

/*
==============
ReactiveMotionSphere::ReactiveMotionSphere
==============
*/
void ReactiveMotionSphere::ReactiveMotionSphere(ReactiveMotionSphere *this)
{
  ;
}

/*
==============
CompareReactiveMotionSpheres
==============
*/
__int64 CompareReactiveMotionSpheres(const void *p0, const void *p1)
{
  float v2; 
  float v3; 

  v2 = *((float *)p0 + 8);
  v3 = *((float *)p1 + 8);
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
Copy_ReactiveMotionEffector
==============
*/
void Copy_ReactiveMotionEffector(ReactiveMotionEffector *out, const ReactiveMotionEffector *in)
{
  vec3_t to; 

  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3482, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
    __debugbreak();
  GetSecureVec3(&in->pos, &to, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
  *out = *in;
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3501, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
    __debugbreak();
  SetSecureVec3(&to, &out->pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
}

/*
==============
GetModelPartRanges
==============
*/
void GetModelPartRanges(XAssetHeader header, void *data)
{
  char *havokData; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  char *v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  if ( header.physicsLibrary )
  {
    havokData = header.physicsLibrary[8].havokData;
    if ( havokData )
    {
      if ( *((_QWORD *)havokData + 3) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)havokData + 4) + 88i64))(*((_QWORD *)havokData + 4));
        v6 = v5 + 32i64 * *((unsigned __int8 *)header.physicsLibrary[8].havokData + 56);
        if ( v5 < *((_QWORD *)data + 2) )
          *((_QWORD *)data + 2) = v5;
        if ( v6 > *((_QWORD *)data + 3) )
          *((_QWORD *)data + 3) = v6;
      }
      v7 = header.physicsLibrary[8].havokData;
      v8 = *((_QWORD *)v7 + 2);
      if ( v8 )
      {
        v9 = v8 + 32i64 * (unsigned __int8)v7[56];
        if ( v8 < *((_QWORD *)data + 4) )
          *((_QWORD *)data + 4) = v8;
        if ( v9 > *((_QWORD *)data + 5) )
          *((_QWORD *)data + 5) = v9;
      }
    }
  }
}

/*
==============
ReactiveMotionInplaceBuffer::GetQWOffset
==============
*/
unsigned int ReactiveMotionInplaceBuffer::GetQWOffset(ReactiveMotionInplaceBuffer *this, unsigned __int64 addr, unsigned __int64 size)
{
  unsigned __int64 v5; 

  if ( (addr & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 142, ASSERT_TYPE_ASSERT, "((addr & 15) == 0)", (const char *)&queryFormat, "(addr & 15) == 0") )
    __debugbreak();
  if ( addr < this->bufferBaseAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 143, ASSERT_TYPE_ASSERT, "(addr >= bufferBaseAddr)", (const char *)&queryFormat, "addr >= bufferBaseAddr") )
    __debugbreak();
  v5 = addr - this->bufferBaseAddr;
  if ( (v5 > this->bufferSize || (v5 & 0xF) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 145, ASSERT_TYPE_ASSERT, "((offset <= bufferSize) && ((offset & 15) == 0))", (const char *)&queryFormat, "(offset <= bufferSize) && ((offset & 15) == 0)") )
    __debugbreak();
  return truncate_cast<unsigned int,unsigned __int64>(v5 >> 4);
}

/*
==============
RB_Reactive_GetSModelIndirectionBuffer
==============
*/
void RB_Reactive_GetSModelIndirectionBuffer(const GfxBackEndData *data, unsigned __int16 **indirectionDataBuffer, unsigned int *first, unsigned int *last)
{
  __int64 reactiveMotionIndex; 

  reactiveMotionIndex = data->reactiveMotionIndex;
  *first = s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].firstStaticObjectsIndirectionIndex;
  *last = s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].lastStaticObjectsIndirectionIndex;
  *indirectionDataBuffer = s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].reactiveMotionDataIndices;
}

/*
==============
RB_UploadReactiveMotionData
==============
*/
void RB_UploadReactiveMotionData(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ;
}

/*
==============
RB_UploadReactiveMotionVectorFieldData
==============
*/
void RB_UploadReactiveMotionVectorFieldData(GfxReactiveMotionFrameData *frameData)
{
  const VectorFieldInstance *InstancePool; 
  unsigned __int64 bufferBaseAddr; 
  const VectorFieldInstance *v3; 
  const dvar_t *v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  bool enabled; 
  float *v9; 
  char v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  char *v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  float v28; 
  unsigned int v29; 
  unsigned int v30; 
  int v31; 
  unsigned int v32; 
  bool v33; 
  __int64 v34; 
  char *v35; 
  __int64 *v36; 
  unsigned __int64 v37; 
  GfxReactiveMotionFrameData *v38; 
  char v39; 
  unsigned int v40; 
  float *v41; 
  __int64 v42; 
  unsigned __int64 v44; 
  __int64 data[2678]; 
  __int64 v46[510]; 
  char v47[24]; 
  char v48; 

  InstancePool = CG_VectorField_GetInstancePool();
  bufferBaseAddr = s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferBaseAddr;
  v3 = InstancePool;
  v4 = DVARBOOL_cg_vectorFieldsForceUniform;
  v5 = 0;
  v40 = 0;
  v6 = 0;
  v44 = s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferBaseAddr + s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferSize;
  if ( !DVARBOOL_cg_vectorFieldsForceUniform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsForceUniform") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  v9 = &v3->orient.axis.m[0].v[2];
  v10 = 0;
  v41 = &v3->orient.axis.m[0].v[2];
  v39 = 0;
  v42 = 255i64;
  do
  {
    v11 = *(_QWORD *)(v9 - 7);
    v12 = 84i64 * v5;
    if ( *((_DWORD *)v9 + 9) && v11 && (v13 = *(_DWORD *)(v11 + 52), v13 + v6 <= 0x1FE) )
    {
      v7 = *(_QWORD *)(v11 + 8);
      v14 = 0;
      v15 = 0;
      v16 = &v47[32 * v6];
      if ( v13 )
      {
        do
        {
          if ( (unsigned int)(*(_DWORD *)(v7 + 60) - 1) <= 1 )
          {
            v17 = 16i64 * (unsigned int)(*(_DWORD *)(v7 + 48) * *(_DWORD *)(v7 + 44) * *(_DWORD *)(v7 + 52));
            if ( v17 )
            {
              v18 = *(_QWORD *)v7;
              if ( *(_QWORD *)v7 < bufferBaseAddr || v17 + v18 > v44 )
              {
                v10 = 1;
              }
              else
              {
                v46[v6] = v18;
                *((_DWORD *)v16 + 6) = 0;
                v19 = *(_DWORD *)(v7 + 44) - 1;
                if ( v19 > 1023 )
                  v19 = 1023;
                if ( v19 < 0 )
                  v19 = 0;
                v20 = *((_DWORD *)v16 + 7) & 0xFFFFFC00 | v19;
                *((_DWORD *)v16 + 7) = v20;
                v21 = *(_DWORD *)(v7 + 48) - 1;
                if ( v21 > 1023 )
                  v21 = 1023;
                if ( v21 < 0 )
                  v21 = 0;
                v22 = v20 & 0xFFF003FF | (v21 << 10);
                v23 = 0;
                *((_DWORD *)v16 + 7) = v22;
                v24 = *(_DWORD *)(v7 + 52) - 1;
                if ( v24 > 1023 )
                  v24 = 1023;
                if ( v24 < 0 )
                  v24 = 0;
                v25 = v22 & 0xC00FFFFF | (v24 << 20);
                *((_DWORD *)v16 + 7) = v25;
                if ( *(_DWORD *)(v7 + 60) == 2 )
                  v23 = 0x40000000;
                v26 = v25 & 0xBFFFFFFF | v23;
                *((_DWORD *)v16 + 7) = v26;
                if ( (*(_BYTE *)(v7 + 56) & 1) != 0 || (v27 = 0, enabled) )
                  v27 = 0x80000000;
                *((_DWORD *)v16 + 7) = v27 | v26 & 0x7FFFFFFF;
                *(float *)v16 = *(float *)(v7 + 20) - *(float *)(v7 + 8);
                *((float *)v16 + 1) = *(float *)(v7 + 24) - *(float *)(v7 + 12);
                *((float *)v16 + 2) = *(float *)(v7 + 28) - *(float *)(v7 + 16);
                *((_DWORD *)v16 + 3) = *(_DWORD *)(v7 + 32);
                *((_DWORD *)v16 + 4) = *(_DWORD *)(v7 + 36);
                *((_DWORD *)v16 + 5) = *(_DWORD *)(v7 + 40);
                v16 += 32;
                ++v14;
              }
            }
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)(v11 + 52) );
        v12 = 84i64 * v5;
        v9 = v41;
        v5 = v40;
        v39 = v10;
      }
      *(_DWORD *)((char *)&data[7] + v12) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)((char *)&data[7] + v12 + 4) = *(_DWORD *)(v11 + 20);
      *(_DWORD *)((char *)&data[8] + v12) = *(_DWORD *)(v11 + 24);
      *(_DWORD *)((char *)&data[8] + v12 + 4) = *(_DWORD *)(v11 + 28);
      *(_DWORD *)((char *)&data[9] + v12) = *(_DWORD *)(v11 + 32);
      *(_DWORD *)((char *)&data[9] + v12 + 4) = *(_DWORD *)(v11 + 36);
      if ( *((_DWORD *)v9 + 10) )
      {
        *(float *)((char *)data + v12) = *(v9 - 2);
        *(float *)((char *)data + v12 + 4) = *(v9 - 1);
        *(float *)((char *)&data[1] + v12) = *v9;
        *(float *)((char *)&data[1] + v12 + 4) = v9[1];
        *(float *)((char *)&data[2] + v12) = v9[2];
        *(float *)((char *)&data[2] + v12 + 4) = v9[3];
        *(float *)((char *)&data[3] + v12) = v9[4];
        *(float *)((char *)&data[3] + v12 + 4) = v9[5];
        v28 = v9[6];
      }
      else
      {
        *(__int64 *)((char *)data + v12) = 1065353216i64;
        *(__int64 *)((char *)&data[1] + v12) = 0i64;
        *(__int64 *)((char *)&data[2] + v12) = 1065353216i64;
        *(__int64 *)((char *)&data[3] + v12) = 0i64;
        v28 = FLOAT_1_0;
      }
      *(float *)((char *)&data[4] + v12) = v28;
      *(float *)((char *)&data[4] + v12 + 4) = *(v9 - 5);
      *(float *)((char *)&data[5] + v12) = *(v9 - 4);
      *(float *)((char *)&data[5] + v12 + 4) = *(v9 - 3);
      *(_DWORD *)((char *)&data[10] + v12) |= 0x1000000u;
      v29 = *(_DWORD *)((_BYTE *)&data[10] + v12) & 0xFDFFFFFF | (*((_DWORD *)v9 + 10) != 0 ? 0x2000000 : 0);
      *(_DWORD *)((char *)&data[10] + v12) = v29;
      *(float *)((char *)&data[6] + v12 + 4) = v9[8];
      *(float *)((char *)&data[6] + v12) = v9[7];
      v30 = v6 << 12;
      v6 += v14;
      v31 = v29 ^ (v29 ^ v30) & 0xFFF000;
      *(_DWORD *)((char *)&data[10] + v12) = v31;
      v32 = v31 ^ ((unsigned __int16)v14 ^ (unsigned __int16)v31) & 0xFFF;
    }
    else
    {
      *((_DWORD *)&data[10] + 21 * v5) &= ~0x1000000u;
      v32 = *((_DWORD *)&data[10] + 21 * v5) & 0xFFFFF000;
    }
    ++v5;
    *(_DWORD *)((char *)&data[10] + v12) = v32;
    v9 += 20;
    v40 = v5;
    v33 = v42-- == 1;
    v41 = v9;
  }
  while ( !v33 );
  if ( v6 )
  {
    v34 = v6;
    v35 = &v48;
    v36 = v46;
    do
    {
      v37 = (*v36 - bufferBaseAddr) >> 4;
      if ( v37 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v37, "unsigned", (*v36 - bufferBaseAddr) >> 4) )
        __debugbreak();
      *(_DWORD *)v35 = v37;
      ++v36;
      v35 += 32;
      --v34;
    }
    while ( v34 );
    v10 = v39;
  }
  v38 = frameData;
  frameData->numVectorFields = v5;
  frameData->numVectorSubFields = v6;
  if ( v5 )
  {
    R_UpdateGfxWrappedBuffer(&frameData->reactiveMotionVectorFieldBuffer, data, 84 * v5);
    v38 = frameData;
  }
  if ( v6 )
    R_UpdateGfxWrappedBuffer(&v38->reactiveMotionVectorSubFieldBuffer, v47, 32 * v6);
  if ( v10 )
    Com_PrintWarning(8, "At least one VectorSubField is out of buffer range\n", v7);
}

/*
==============
R_AddReactiveMotionCalcComputeCmd
==============
*/
bool R_AddReactiveMotionCalcComputeCmd(ComputeCmdList *list)
{
  unsigned int *v2; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2603, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v2 = (unsigned int *)R_AllocComputeCmdData(frontEndDataOut->compute.cmdList, 8);
  if ( v2 )
  {
    *v2 = frontEndDataOut->reactiveMotionIndex;
    LOBYTE(v2) = R_AddComputeCmd(list, COMPUTECMD_REACTIVEMOTION_CALC, v2);
  }
  return (char)v2;
}

/*
==============
R_AddReactiveMotionSimComputeCmd
==============
*/
bool R_AddReactiveMotionSimComputeCmd(ComputeCmdList *list)
{
  unsigned int *v2; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2582, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v2 = (unsigned int *)R_AllocComputeCmdData(frontEndDataOut->compute.cmdList, 8);
  if ( v2 )
  {
    *v2 = frontEndDataOut->reactiveMotionIndex;
    LOBYTE(v2) = R_AddComputeCmd(list, COMPUTECMD_REACTIVEMOTION_SIM, v2);
  }
  return (char)v2;
}

/*
==============
R_DebugCircle
==============
*/
void R_DebugCircle(const vec3_t *center, float radius, const vec3_t *dir, const vec4_t *color)
{
  float v4; 
  __int128 v5; 
  float v6; 
  __int128 v7; 
  float v13; 
  float v14; 
  float v15; 
  unsigned int v16; 
  float *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  char v22; 
  const vec3_t *v23; 
  __int64 v24; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t end[16]; 

  v4 = dir->v[1];
  v5 = LODWORD(dir->v[0]);
  v6 = dir->v[2];
  v7 = v5;
  *(float *)&v7 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)(v4 * v4)) + (float)(v6 * v6));
  _XMM4 = v7;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  src.v[0] = *(float *)&v5 * (float)(1.0 / *(float *)&_XMM0);
  src.v[2] = v6 * (float)(1.0 / *(float *)&_XMM0);
  src.v[1] = v4 * (float)(1.0 / *(float *)&_XMM0);
  PerpendicularVector(&src, &dst);
  v13 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
  v14 = (float)(src.v[2] * dst.v[0]) - (float)(dst.v[2] * src.v[0]);
  v15 = (float)(dst.v[1] * src.v[0]) - (float)(src.v[1] * dst.v[0]);
  v16 = 0;
  v17 = &end[0].v[2];
  do
  {
    v18 = (float)v16;
    FastSinCos(v18 * 0.39269909, &s, &c);
    v19 = radius * s;
    v20 = radius * c;
    *(v17 - 2) = (float)((float)(v13 * (float)(radius * s)) + center->v[0]) + (float)((float)(radius * c) * dst.v[0]);
    v21 = (float)((float)(v14 * v19) + center->v[1]) + (float)(v20 * dst.v[1]);
    ++v16;
    *v17 = (float)((float)(v15 * v19) + center->v[2]) + (float)(v20 * dst.v[2]);
    *(v17 - 1) = v21;
    v17 += 3;
    s = v19;
    c = v20;
  }
  while ( v16 < 0x10 );
  v22 = 1;
  v23 = end;
  v24 = 16i64;
  do
  {
    CG_DebugLine(v23++, &end[v22++ & 0xF], color, 0, 1);
    --v24;
  }
  while ( v24 );
}

/*
==============
R_ExecuteReactiveMotionCalcComputeCmds
==============
*/
void R_ExecuteReactiveMotionCalcComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  unsigned int *ComputeCmdData; 

  do
  {
    ComputeCmdData = (unsigned int *)R_GetComputeCmdData(list, header);
    R_ReactiveMotionCalcCompute(state, *ComputeCmdData);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteReactiveMotionSimComputeCmds
==============
*/
void R_ExecuteReactiveMotionSimComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  __int64 v7; 
  __int64 v8; 
  bool bUsesClutterPass; 
  bool bUsesCpuCalc; 
  const GfxBackEndData *v11; 
  ComputeShader *reactiveMotionSimComputeShader; 
  unsigned int reactiveMotionDataCurrentIndex; 
  signed int reactiveMotionDataCurrentPartIndex; 
  int v15; 
  GfxShaderBufferView *views[2]; 
  int data[4]; 

  do
  {
    v7 = *(unsigned int *)R_GetComputeCmdData(list, header);
    v8 = v7;
    if ( !s_reactiveMotionGlobFrameData.frameData[v7].reactiveMotionDataCurrentIndex && !s_reactiveMotionGlobFrameData.frameData[v8].bUsesClutterPass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3013, ASSERT_TYPE_ASSERT, "(frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass)", (const char *)&queryFormat, "frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass") )
      __debugbreak();
    bUsesClutterPass = s_reactiveMotionGlobFrameData.frameData[v8].bUsesClutterPass;
    if ( bUsesClutterPass || s_reactiveMotionGlobFrameData.frameData[v8].reactiveMotionDataCurrentIndex )
    {
      bUsesCpuCalc = s_reactiveMotionGlobFrameData.frameData[v8].bUsesCpuCalc;
      if ( !s_reactiveMotionGlobFrameData.frameData[v8].frameUploaded )
      {
        v11 = state->data;
        Sys_ProfBeginNamedEvent(0xFF800000, " RB_UploadReactiveMotionData");
        RB_UploadReactiveMotionVectorFieldData(&s_reactiveMotionGlobFrameData.frameData[v11->reactiveMotionIndex]);
        Sys_ProfEndNamedEvent();
        Sys_ProfBeginNamedEvent(0xFF800000, " RB_UploadReactiveMotionData");
        Sys_ProfEndNamedEvent();
        s_reactiveMotionGlobFrameData.frameData[v8].frameUploaded = 1;
      }
      if ( bUsesCpuCalc )
        R_ReactiveMotionGenModelPartIndicesCompute(state, v7);
      views[0] = &s_reactiveMotionGlobFrameData.reactiveMotionOffsetsRWBuffer.view;
      R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)views);
      views[0] = &s_reactiveMotionGlobFrameData.frameData[v8].reactiveMotionModelInfoBufferPtr->view;
      R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
      views[0] = &s_reactiveMotionGlobFrameData.inplaceBuffers[1].buffer.view;
      R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)views);
      views[0] = &s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer.view;
      R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)views);
      views[0] = (GfxShaderBufferView *)&s_reactiveMotionGlobFrameData.frameData[v8].reactiveMotionSimPivotsBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
      reactiveMotionSimComputeShader = rgp.reactiveMotionSimComputeShader;
      if ( bUsesClutterPass )
        reactiveMotionSimComputeShader = rgp.reactiveMotionSimIndirectComputeShader;
      R_SetComputeShader(state, reactiveMotionSimComputeShader);
      reactiveMotionDataCurrentIndex = 3472;
      if ( (int)s_reactiveMotionGlobFrameData.frameData[v8].reactiveMotionDataCurrentIndex < 3472 )
        reactiveMotionDataCurrentIndex = s_reactiveMotionGlobFrameData.frameData[v8].reactiveMotionDataCurrentIndex;
      reactiveMotionDataCurrentPartIndex = s_reactiveMotionGlobFrameData.frameData[v8].reactiveMotionDataCurrentPartIndex;
      data[0] = reactiveMotionDataCurrentIndex;
      v15 = 55552;
      if ( reactiveMotionDataCurrentPartIndex < 55552 )
        v15 = reactiveMotionDataCurrentPartIndex;
      data[1] = v15;
      R_UploadAndSetComputeConstants(state, 1, data, 0x10u, NULL);
      if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
        Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
      if ( bUsesClutterPass )
        R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0);
      else
        R_Dispatch(state, (unsigned int)(data[0] + 63) >> 6, 1u, 1u);
    }
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_GetReactiveMotionPivotsBuffer
==============
*/
GfxReactiveMotionFrameData *R_GetReactiveMotionPivotsBuffer(unsigned int frame)
{
  return &s_reactiveMotionGlobFrameData.frameData[frame];
}

/*
==============
R_InitReactiveMotion
==============
*/
void R_InitReactiveMotion(void)
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned int *p_reactiveMotionDataCurrentPartIndex; 
  __int64 v4; 
  void *v5; 
  void *v6; 
  void *v7; 
  void *v8; 
  const void *initialData; 
  const void *v10; 
  ReactiveMotionEffector *effectors; 
  __int64 v12; 
  ReactiveMotionSphere *v13; 
  __int64 v14; 

  *(_QWORD *)&s_reactiveMotionGlobFrameData.frame = 0i64;
  s_reactiveMotionGlobFrameData.reactiveMotionOffsets = (float4 *)PMem_Alloc(0xD9000ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "reactive motion offsets");
  R_CreateGfxWrappedBuffer(&s_reactiveMotionGlobFrameData.reactiveMotionOffsetsRWBuffer, GfxWrappedBuffer_Structured, 16, 0xD900u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, s_reactiveMotionGlobFrameData.reactiveMotionOffsets, "reactive motion offsets buffer");
  v0 = truncate_cast<unsigned int,unsigned __int64>(0x28B0ui64);
  R_CreateGfxWrappedBuffer(&s_reactiveMotionGlobFrameData.reactiveMotionModelWindBuffer, GfxWrappedBuffer_Raw, 4, v0, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion calc models out");
  v1 = truncate_cast<unsigned int,unsigned __int64>(0xD900ui64);
  R_CreateGfxWrappedBuffer(&s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer, GfxWrappedBuffer_Structured, 4, v1, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion modelpart indices");
  R_CreateGfxWrappedBuffer(&s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs, GfxWrappedBuffer_Raw, 32, 2u, GFX_DATA_FORMAT_R32_UINT, 0x209u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "reactive motion indirect args");
  R_CreateGfxWrappedBuffer(&s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData, GfxWrappedBuffer_Structured, 24, 0xD90u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion clutter GfxSModelInstanceData");
  v2 = 1236096i64;
  p_reactiveMotionDataCurrentPartIndex = &s_reactiveMotionGlobFrameData.frameData[0].reactiveMotionDataCurrentPartIndex;
  v4 = 3i64;
  do
  {
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex - 1) = 0i64;
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex + 1) = 0i64;
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex + 3) = 0x200000i64;
    *((_WORD *)p_reactiveMotionDataCurrentPartIndex + 10) = 256;
    *((_QWORD *)p_reactiveMotionDataCurrentPartIndex + 3) = 0i64;
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex - 3) = PMem_Alloc(0x400000ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "reactive motion data indices");
    v5 = PMem_Alloc(0x36400ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "reactive motion calc model info");
    v6 = *(void **)(p_reactiveMotionDataCurrentPartIndex - 3);
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex - 5) = v5;
    memset_0(v6, -1, 0x400000ui64);
    v7 = PMem_Alloc(0x5400ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "reactive motion calc vectorFields");
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex - 113) = v7;
    memset_0(v7, 0, 0x5400ui64);
    v8 = PMem_Alloc(0x3FC0ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "reactive motion calc vectorSubFields");
    initialData = *(const void **)(p_reactiveMotionDataCurrentPartIndex - 5);
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex - 111) = v8;
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 127), GfxWrappedBuffer_Structured, 48, 0xD900u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, NULL, NULL, "reactive motion sim pivots buffer");
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 21), GfxWrappedBuffer_Structured, 64, 0xD90u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, initialData, "reactive motion calc parts model info");
    *(_QWORD *)(p_reactiveMotionDataCurrentPartIndex - 7) = p_reactiveMotionDataCurrentPartIndex - 21;
    v10 = *(const void **)(p_reactiveMotionDataCurrentPartIndex - 111);
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_reactiveMotionDataCurrentPartIndex - 109), GfxWrappedBuffer_Structured, 84, 0x100u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, *(const void **)(p_reactiveMotionDataCurrentPartIndex - 113), "reactive motion calc vectorFields");
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_reactiveMotionDataCurrentPartIndex - 101), GfxWrappedBuffer_Structured, 32, 0x1FEu, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v10, "reactive motion calc vectorSubFields");
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 93), GfxWrappedBuffer_Structured, 4, 5u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion counts");
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 79), GfxWrappedBuffer_Raw, 32, 2u, GFX_DATA_FORMAT_R32_UINT, 0x209u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "reactive motion clutter indirect args");
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 51), GfxWrappedBuffer_Structured, 8, 0x28u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion clutter GfxClutterCollectionGPUData");
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 37), GfxWrappedBuffer_Structured, 4, 0xD90u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion clutter smodel instance index");
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)(p_reactiveMotionDataCurrentPartIndex - 65), GfxWrappedBuffer_Structured, 4, 0xF00u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "reactive motion clutter index offets");
    --v4;
    v2 += 7150484i64;
    p_reactiveMotionDataCurrentPartIndex += 136;
  }
  while ( v4 );
  Com_Printf(8, "%ld KiB allocated for reactive motion\n", (unsigned __int64)(v2 + 1023) >> 10);
  RScene_InitObfuscationReactiveMotion();
  effectors = g_reactiveMotionParams.effectors;
  v12 = 15i64;
  do
  {
    if ( !effectors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3501, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
      __debugbreak();
    SetSecureVec3(&vec3_origin, &effectors->pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
    ++effectors;
    --v12;
  }
  while ( v12 );
  v13 = &s_reactiveMotionSpheres;
  v14 = 128i64;
  do
  {
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3538, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere") )
      __debugbreak();
    SetSecureVec3(&vec3_origin, &v13->pos, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
    ++v13;
    --v14;
  }
  while ( v14 );
}

/*
==============
R_ReactiveMotionCalcCompute
==============
*/
void R_ReactiveMotionCalcCompute(ComputeCmdBufState *state, unsigned int frame)
{
  __int64 v2; 
  char frameUploaded; 
  const GfxBackEndData *v5; 
  bool bUsesClutterPass; 
  int v7; 
  int v8; 
  unsigned int reactiveMotionDataCurrentIndex; 
  signed int reactiveMotionDataCurrentPartIndex; 
  int v11; 
  signed int v12; 
  int v13; 
  signed int v14; 
  int v15; 
  unsigned int numEffectors; 
  int v17; 
  signed int v18; 
  signed int v19; 
  signed int reactiveMotionDataCurrentPartTweakIndex; 
  unsigned int v21; 
  ComputeShader *reactiveMotionCalcModelsComputeShader; 
  ComputeShader *reactiveMotionCalcModelPartsComputeShader; 
  GfxShaderBufferRWView *views; 
  int v25; 
  unsigned int framea; 
  unsigned int data; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int reactiveMotionClutterLayerCount; 
  unsigned int start; 
  __int64 v33[2]; 
  float v34; 
  __int128 v35; 
  float velocityTailScale; 
  float effectorStrengthScale; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  int v43; 
  int v44; 
  int v45; 
  unsigned int numVectorFields; 
  unsigned int numVectorSubFields; 
  ReactiveMotionEffector out[15]; 

  v2 = frame;
  framea = frame;
  if ( !s_reactiveMotionGlobFrameData.frameData[v2].bUsesCpuCalc )
  {
    if ( !s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex && !s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterPass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3147, ASSERT_TYPE_ASSERT, "(frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass)", (const char *)&queryFormat, "frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass") )
      __debugbreak();
    frameUploaded = s_reactiveMotionGlobFrameData.frameData[v2].frameUploaded;
    LOBYTE(v25) = frameUploaded;
    if ( !frameUploaded )
    {
      v5 = state->data;
      Sys_ProfBeginNamedEvent(0xFF800000, " RB_UploadReactiveMotionData");
      RB_UploadReactiveMotionVectorFieldData(&s_reactiveMotionGlobFrameData.frameData[v5->reactiveMotionIndex]);
      Sys_ProfEndNamedEvent();
      s_reactiveMotionGlobFrameData.frameData[v2].frameUploaded = 1;
    }
    bUsesClutterPass = s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterPass;
    v7 = 3472;
    v8 = 55552;
    if ( bUsesClutterPass )
    {
      if ( rgp.world->smodels.clutterCollectionCount )
      {
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_FlushResourceTransitions(state);
        R_GP_ClearBufferToZero(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0x14u, 1);
        R_GP_ClearBufferToZero(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterCollectionGPUDataBuffer, 0x140u, 1);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterInstanceOffsetsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferRW, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_FlushResourceTransitions(state);
        views = &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts.rwView;
        R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
        views = &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferRW.rwView;
        R_SetComputeRWViewsWithCounters(state, 5, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
        views = &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterSModelInstanceIndexBuffer.rwView;
        R_SetComputeRWViewsWithCounters(state, 6, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
        v30 = 55552;
        reactiveMotionDataCurrentIndex = 3472;
        v29 = 3472;
        if ( (int)s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex < 3472 )
          reactiveMotionDataCurrentIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
        reactiveMotionDataCurrentPartIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
        data = reactiveMotionDataCurrentIndex;
        v11 = 55552;
        if ( reactiveMotionDataCurrentPartIndex < 55552 )
          v11 = reactiveMotionDataCurrentPartIndex;
        v28 = v11;
        R_UploadAndSetComputeConstants(state, 4, &data, 0x10u, NULL);
        R_GPU_GenerateClutter(state, state->data, 0, 1);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterInstanceOffsetsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferRW, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        frameUploaded = v25;
        v7 = 3472;
      }
      else
      {
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterIndirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      v29 = 3472;
      v12 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
      v30 = 55552;
      v13 = 3472;
      if ( v12 < 3472 )
        v13 = v12;
      v14 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
      data = v13;
      v15 = 55552;
      if ( v14 < 55552 )
        v15 = v14;
      reactiveMotionClutterLayerCount = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterLayerCount;
      v28 = v15;
      start = rgp.world->smodels.clutterInstancePool.start;
      R_UploadAndSetComputeConstants(state, 1, &data, 0x20u, NULL);
      views = &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = &s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.rwView;
      R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterIndirectArgs.rwView;
      R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      R_SetComputeShader(state, rgp.reactiveMotionIndirectComputeShader);
      R_Dispatch(state, 1u, 1u, 1u);
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterIndirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
    }
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts.view;
    R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
    if ( !frameUploaded )
    {
      Sys_ProfBeginNamedEvent(0xFF800000, " RB_UploadReactiveMotionData");
      Sys_ProfEndNamedEvent();
    }
    R_ReactiveMotionGenModelPartIndicesCompute(state, framea);
    numEffectors = g_backendReactiveMotionParams.numEffectors;
    v17 = 55552;
    v34 = g_backendReactiveMotionParams.windDir.v[2];
    v18 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
    v33[1] = *(__int64 *)g_backendReactiveMotionParams.windDir.v;
    if ( v18 < 3472 )
      v7 = v18;
    v42 = g_backendReactiveMotionParams.numEffectors;
    v19 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
    *((float *)v33 + 1) = g_backendReactiveMotionParams.windStrength;
    if ( v19 < 55552 )
      v17 = v19;
    v43 = v7;
    reactiveMotionDataCurrentPartTweakIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartTweakIndex;
    v35 = *(_OWORD *)&g_backendReactiveMotionParams.windAreaScale;
    if ( reactiveMotionDataCurrentPartTweakIndex < 55552 )
      v8 = reactiveMotionDataCurrentPartTweakIndex;
    v44 = v17;
    numVectorFields = s_reactiveMotionGlobFrameData.frameData[v2].numVectorFields;
    v21 = 0;
    numVectorSubFields = s_reactiveMotionGlobFrameData.frameData[v2].numVectorSubFields;
    v38 = s_reactivemotion_aab_X;
    v39 = s_reactivemotion_aab_Y;
    v40 = s_reactivemotion_aab_Z;
    v45 = v8;
    v41 = (unsigned int)out;
    velocityTailScale = g_backendReactiveMotionParams.velocityTailScale;
    effectorStrengthScale = g_backendReactiveMotionParams.effectorStrengthScale;
    while ( v21 < numEffectors )
    {
      Copy_ReactiveMotionEffector(&out[v21], &g_backendReactiveMotionParams.effectors[v21]);
      if ( ++v21 >= 0xF )
        break;
      numEffectors = g_backendReactiveMotionParams.numEffectors;
    }
    R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionModelWindBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferPtr->view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&rgp.world->smodels.smodelInstanceDataBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData.view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionVectorFieldBuffer.view;
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionVectorSubFieldBuffer.view;
    R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.inplaceBuffers[0].buffer.view;
    R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&RB_CG_Wind_GetWindGridCountBuffer()->view;
    R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&RB_CG_Wind_GetWindGridFieldBuffer()->view;
    R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)&views);
    views = &s_reactiveMotionGlobFrameData.reactiveMotionModelWindBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    reactiveMotionCalcModelsComputeShader = rgp.reactiveMotionCalcModelsComputeShader;
    if ( bUsesClutterPass )
      reactiveMotionCalcModelsComputeShader = rgp.reactiveMotionCalcModelsIndirectComputeShader;
    R_SetComputeShader(state, reactiveMotionCalcModelsComputeShader);
    R_UploadAndSetComputeConstants(state, 1, (char *)v33 + 4, 0x240u, NULL);
    if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
      Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
    if ( bUsesClutterPass )
      R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0);
    else
      R_Dispatch(state, (unsigned int)(v43 + 63) >> 6, 1u, 1u);
    R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionModelWindBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionOffsetsRWBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferPtr->view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&rgp.world->smodels.smodelInstanceDataBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData.view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer.view;
    R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.inplaceBuffers[1].buffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.inplaceBuffers[2].buffer.view;
    R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.reactiveMotionModelWindBuffer.view;
    R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&views);
    views = &s_reactiveMotionGlobFrameData.reactiveMotionOffsetsRWBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    reactiveMotionCalcModelPartsComputeShader = rgp.reactiveMotionCalcModelPartsComputeShader;
    if ( bUsesClutterPass )
      reactiveMotionCalcModelPartsComputeShader = rgp.reactiveMotionCalcModelPartsIndirectComputeShader;
    R_SetComputeShader(state, reactiveMotionCalcModelPartsComputeShader);
    R_UploadAndSetComputeConstants(state, 1, (char *)v33 + 4, 0x240u, NULL);
    if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
      Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
    if ( bUsesClutterPass )
      R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0x20u);
    else
      R_Dispatch(state, (unsigned int)(v44 + 63) >> 6, 1u, 1u);
    R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionOffsetsRWBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
  }
}

/*
==============
R_ReactiveMotionGenModelPartIndicesCompute
==============
*/
void R_ReactiveMotionGenModelPartIndicesCompute(ComputeCmdBufState *state, unsigned int frame)
{
  __int64 v2; 
  unsigned int reactiveMotionDataCurrentIndex; 
  signed int reactiveMotionDataCurrentPartIndex; 
  int v6; 
  bool bUsesClutterPass; 
  ComputeShader *reactiveMotionGenModelPartIndicesComputeShader; 
  GfxShaderBufferView *views[2]; 
  int data[4]; 

  v2 = frame;
  if ( !s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex && !s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterPass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2968, ASSERT_TYPE_ASSERT, "(frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass)", (const char *)&queryFormat, "frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass") )
    __debugbreak();
  reactiveMotionDataCurrentIndex = 3472;
  if ( (int)s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex < 3472 )
    reactiveMotionDataCurrentIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
  reactiveMotionDataCurrentPartIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
  data[0] = reactiveMotionDataCurrentIndex;
  v6 = 55552;
  if ( reactiveMotionDataCurrentPartIndex < 55552 )
    v6 = reactiveMotionDataCurrentPartIndex;
  data[1] = v6;
  R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  views[0] = &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferPtr->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  bUsesClutterPass = s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterPass;
  reactiveMotionGenModelPartIndicesComputeShader = rgp.reactiveMotionGenModelPartIndicesComputeShader;
  if ( bUsesClutterPass )
    reactiveMotionGenModelPartIndicesComputeShader = rgp.reactiveMotionGenModelPartIndicesIndirectComputeShader;
  R_SetComputeShader(state, reactiveMotionGenModelPartIndicesComputeShader);
  R_UploadAndSetComputeConstants(state, 1, data, 0x10u, NULL);
  if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
    Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
  if ( bUsesClutterPass )
    R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0);
  else
    R_Dispatch(state, (unsigned int)(data[0] + 63) >> 6, 1u, 1u);
  R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
}

/*
==============
R_ReactiveMotionSimCompute
==============
*/
void R_ReactiveMotionSimCompute(ComputeCmdBufState *state, unsigned int frame)
{
  __int64 v3; 
  bool bUsesClutterPass; 
  bool bUsesCpuCalc; 
  const GfxBackEndData *v7; 
  ComputeShader *reactiveMotionSimComputeShader; 
  unsigned int reactiveMotionDataCurrentIndex; 
  signed int reactiveMotionDataCurrentPartIndex; 
  int v11; 
  GfxShaderBufferView *views[2]; 
  int data[4]; 

  v3 = frame;
  if ( !s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionDataCurrentIndex && !s_reactiveMotionGlobFrameData.frameData[v3].bUsesClutterPass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3013, ASSERT_TYPE_ASSERT, "(frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass)", (const char *)&queryFormat, "frameData->reactiveMotionDataCurrentIndex || frameData->bUsesClutterPass") )
    __debugbreak();
  bUsesClutterPass = s_reactiveMotionGlobFrameData.frameData[v3].bUsesClutterPass;
  if ( bUsesClutterPass || s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionDataCurrentIndex )
  {
    bUsesCpuCalc = s_reactiveMotionGlobFrameData.frameData[v3].bUsesCpuCalc;
    if ( !s_reactiveMotionGlobFrameData.frameData[v3].frameUploaded )
    {
      v7 = state->data;
      Sys_ProfBeginNamedEvent(0xFF800000, " RB_UploadReactiveMotionData");
      RB_UploadReactiveMotionVectorFieldData(&s_reactiveMotionGlobFrameData.frameData[v7->reactiveMotionIndex]);
      Sys_ProfEndNamedEvent();
      Sys_ProfBeginNamedEvent(0xFF800000, " RB_UploadReactiveMotionData");
      Sys_ProfEndNamedEvent();
      s_reactiveMotionGlobFrameData.frameData[v3].frameUploaded = 1;
    }
    if ( bUsesCpuCalc )
      R_ReactiveMotionGenModelPartIndicesCompute(state, frame);
    views[0] = &s_reactiveMotionGlobFrameData.reactiveMotionOffsetsRWBuffer.view;
    R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)views);
    views[0] = &s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionModelInfoBufferPtr->view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
    views[0] = &s_reactiveMotionGlobFrameData.inplaceBuffers[1].buffer.view;
    R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)views);
    views[0] = &s_reactiveMotionGlobFrameData.reactiveMotionModelPartIndicesBuffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)views);
    views[0] = (GfxShaderBufferView *)&s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionSimPivotsBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
    reactiveMotionSimComputeShader = rgp.reactiveMotionSimComputeShader;
    if ( bUsesClutterPass )
      reactiveMotionSimComputeShader = rgp.reactiveMotionSimIndirectComputeShader;
    R_SetComputeShader(state, reactiveMotionSimComputeShader);
    reactiveMotionDataCurrentIndex = 3472;
    if ( (int)s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionDataCurrentIndex < 3472 )
      reactiveMotionDataCurrentIndex = s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionDataCurrentIndex;
    reactiveMotionDataCurrentPartIndex = s_reactiveMotionGlobFrameData.frameData[v3].reactiveMotionDataCurrentPartIndex;
    data[0] = reactiveMotionDataCurrentIndex;
    v11 = 55552;
    if ( reactiveMotionDataCurrentPartIndex < 55552 )
      v11 = reactiveMotionDataCurrentPartIndex;
    data[1] = v11;
    R_UploadAndSetComputeConstants(state, 1, data, 0x10u, NULL);
    if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
      Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
    if ( bUsesClutterPass )
      R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0);
    else
      R_Dispatch(state, (unsigned int)(data[0] + 63) >> 6, 1u, 1u);
  }
}

/*
==============
R_ReactiveMotion_AddEffector_MT
==============
*/
void R_ReactiveMotion_AddEffector_MT(const vec3_t *pos, const vec3_t *vel, const int entIndex)
{
  signed __int32 v6; 
  ReactiveMotionSphere *v7; 
  float v8; 
  float defaultActorRadius; 
  __int128 v10; 
  __int128 v11; 
  vec3_t origin; 

  if ( ((unsigned __int8)s_numReactiveMotionSpheres & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", s_numReactiveMotionSpheres) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(s_numReactiveMotionSpheres, 1u);
  if ( (unsigned __int64)v6 >= 0x80 )
  {
    if ( ((unsigned __int64)s_numReactiveMotionSpheres & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", s_numReactiveMotionSpheres) )
      __debugbreak();
    _InterlockedExchangeAdd(s_numReactiveMotionSpheres, 0xFFFFFFFF);
  }
  else
  {
    v7 = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v6;
    *(_QWORD *)origin.v = *(_QWORD *)pos->v;
    v8 = pos->v[2];
    defaultActorRadius = s_reactiveMotionGlobFrameData.defaultActorRadius;
    v7->radius = s_reactiveMotionGlobFrameData.defaultActorRadius;
    origin.v[2] = defaultActorRadius + v8;
    ReactiveMotionSphere_SetPos(v7, &origin);
    v10 = LODWORD(vel->v[1]);
    v11 = v10;
    *(float *)&v11 = fsqrt((float)(*(float *)&v10 * *(float *)&v10) + (float)(vel->v[0] * vel->v[0]));
    _XMM4 = v11;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm2, xmm0
    }
    *(float *)&_XMM1 = 1.0 / *(float *)&_XMM1;
    v7->velDir.v[0] = *(float *)&_XMM1 * vel->v[0];
    v7->velDir.v[1] = *(float *)&_XMM1 * *(float *)&v10;
    v7->velDir.v[2] = 0.0;
    _XMM2 = LODWORD(s_reactiveMotionGlobFrameData.defaultActorVelocityMax);
    __asm { vminss  xmm0, xmm2, xmm4 }
    v7->velMag = *(float *)&_XMM0 / s_reactiveMotionGlobFrameData.defaultActorVelocityMax;
    v7->entIndex = entIndex;
    memset(&origin, 0, sizeof(origin));
  }
}

/*
==============
R_ReactiveMotion_AllocCB
==============
*/
__int64 R_ReactiveMotion_AllocCB(unsigned int *numCBsUsed)
{
  unsigned int v1; 

  v1 = (*numCBsUsed)++;
  if ( v1 >= 0xD90 )
    R_WarnOncePerFrame(R_WARN_REACTIVEMOTION_CBS, 3472i64);
  return v1;
}

/*
==============
R_ReactiveMotion_AnyActiveModels
==============
*/
bool R_ReactiveMotion_AnyActiveModels(unsigned int frame)
{
  __int64 v1; 
  int v4; 

  v1 = frame;
  if ( frame >= 3 )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 495, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_reactiveMotionGlobFrameData.frameData ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_reactiveMotionGlobFrameData.frameData )\n\t%i not in [0, %i)", frame, v4) )
      __debugbreak();
  }
  return s_reactiveMotionGlobFrameData.frameData[v1].reactiveMotionDataCurrentIndex || s_reactiveMotionGlobFrameData.frameData[v1].bUsesClutterPass;
}

/*
==============
R_ReactiveMotion_CalcModelPartsGpu
==============
*/
__int64 R_ReactiveMotion_CalcModelPartsGpu(const XModel *model, const unsigned int smodelInstanceIndex, unsigned int reactiveIndex, GfxReactiveMotionFrameData *frameData, const vector4 *modelTransform, float modelTransformScale)
{
  __int64 v6; 
  unsigned int reactiveMotionDataCurrentPartIndex; 
  unsigned int v11; 
  __m256i v12; 
  __int64 result; 
  __m256i *v14; 
  ReactiveMotionModelInfoGpu modelInfo; 

  v6 = reactiveIndex;
  if ( (int)reactiveIndex < 3472 )
  {
    reactiveMotionDataCurrentPartIndex = frameData->reactiveMotionDataCurrentPartIndex;
    v11 = reactiveMotionDataCurrentPartIndex + model->reactiveMotionInfo->numParts;
    if ( v11 > 0xD900 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 1815, ASSERT_TYPE_ASSERT, "(endPart <= (( 3 * 1024 + 400 ) * 16))", (const char *)&queryFormat, "endPart <= MAX_REACTIVEMOTION_PARTS") )
      __debugbreak();
    frameData->reactiveMotionDataCurrentPartIndex = v11;
  }
  else
  {
    reactiveMotionDataCurrentPartIndex = 0;
  }
  R_ReactiveMotion_GetReactiveMotionModelInfoGPU(frameData, smodelInstanceIndex, reactiveMotionDataCurrentPartIndex, reactiveMotionDataCurrentPartIndex, v6, 0, model, modelTransform, modelTransformScale, &modelInfo);
  v12 = *(__m256i *)modelInfo.modelBoundsMidPoint.v;
  result = reactiveMotionDataCurrentPartIndex;
  v14 = (__m256i *)&frameData->reactiveMotionModelInfo[v6];
  *v14 = *(__m256i *)modelInfo.windParams.v;
  v14[1] = v12;
  return result;
}

/*
==============
R_ReactiveMotion_DisableParts
==============
*/
void R_ReactiveMotion_DisableParts(const unsigned int frame, const unsigned int smodelInstanceIndex)
{
  s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionDataIndices[smodelInstanceIndex] = -1;
}

/*
==============
R_ReactiveMotion_GetBackendParams
==============
*/
ReactiveMotionParams *R_ReactiveMotion_GetBackendParams()
{
  return &g_backendReactiveMotionParams;
}

/*
==============
R_ReactiveMotion_GetClutterCollectionGPUDataBuffer
==============
*/
GfxWrappedRWBuffer *R_ReactiveMotion_GetClutterCollectionGPUDataBuffer(const unsigned int frame)
{
  return &s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionClutterCollectionGPUDataBuffer;
}

/*
==============
R_ReactiveMotion_GetClutterInstanceOffsetsBuffer
==============
*/
GfxWrappedRWBuffer *R_ReactiveMotion_GetClutterInstanceOffsetsBuffer(const unsigned int frame)
{
  return &s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionClutterInstanceOffsetsBuffer;
}

/*
==============
R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU
==============
*/
void R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU(const unsigned int frame, const XModel *model, GPClutterReactiveMotionModelInfoGpu *clutterModelInfo)
{
  float v4; 
  unsigned int basePartIdx_tweakOffset; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  unsigned int smodelInstanceIndex_numParts_flags; 
  ReactiveMotionModelInfoGpu modelInfo; 

  R_ReactiveMotion_GetReactiveMotionModelInfoGPU(&s_reactiveMotionGlobFrameData.frameData[frame], 0, 0, s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionDataCurrentPartIndex + s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionDataCurrentModelPartOffset, 0, 4u, model, NULL, 1.0, &modelInfo);
  v4 = modelInfo.windParams.v[1];
  basePartIdx_tweakOffset = modelInfo.basePartIdx_tweakOffset;
  clutterModelInfo->windParams.v[0] = modelInfo.windParams.v[0];
  clutterModelInfo->windParams.v[2] = modelInfo.windParams.v[2];
  v6 = modelInfo.modelBoundsHalfSize.v[0];
  clutterModelInfo->windParams.v[1] = v4;
  clutterModelInfo->modelRadius = modelInfo.modelRadius;
  v7 = modelInfo.modelBoundsHalfSize.v[1];
  clutterModelInfo->modelBoundsHalfSize.v[0] = v6;
  clutterModelInfo->modelBoundsHalfSize.v[2] = modelInfo.modelBoundsHalfSize.v[2];
  v8 = modelInfo.modelBoundsMidPoint.v[0];
  clutterModelInfo->modelBoundsHalfSize.v[1] = v7;
  v9 = modelInfo.modelBoundsMidPoint.v[1];
  clutterModelInfo->basePartIdx_tweakOffset = basePartIdx_tweakOffset;
  smodelInstanceIndex_numParts_flags = modelInfo.smodelInstanceIndex_numParts_flags;
  clutterModelInfo->modelBoundsMidPoint.v[0] = v8;
  clutterModelInfo->modelBoundsMidPoint.v[2] = modelInfo.modelBoundsMidPoint.v[2];
  clutterModelInfo->modelBoundsMidPoint.v[1] = v9;
  clutterModelInfo->smodelInstanceIndex_numParts_flags = smodelInstanceIndex_numParts_flags;
  clutterModelInfo->modelPartOffsetQW = modelInfo.modelPartOffsetQW;
  clutterModelInfo->modelPartTweakOffsetQW = modelInfo.modelPartTweakOffsetQW;
}

/*
==============
R_ReactiveMotion_GetClutterSModelInstanceDataBuffer
==============
*/
GfxWrappedRWBuffer *R_ReactiveMotion_GetClutterSModelInstanceDataBuffer()
{
  return &s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData;
}

/*
==============
R_ReactiveMotion_GetDebugClutterInstanceCount
==============
*/
__int64 R_ReactiveMotion_GetDebugClutterInstanceCount(const unsigned int frame)
{
  GfxReactiveMotionFrameData *v1; 
  _DWORD *data; 

  v1 = &s_reactiveMotionGlobFrameData.frameData[frame];
  if ( v1 && v1->bUsesClutterPass && (data = v1->reactiveMotionCounts.data) != NULL )
    return *data - v1->reactiveMotionDataCurrentIndex;
  else
    return 0i64;
}

/*
==============
R_ReactiveMotion_GetReactiveMotionClutterLayerCount
==============
*/
__int64 R_ReactiveMotion_GetReactiveMotionClutterLayerCount(const unsigned int frame)
{
  return s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionClutterLayerCount;
}

/*
==============
R_ReactiveMotion_GetReactiveMotionModelInfoGPU
==============
*/
void R_ReactiveMotion_GetReactiveMotionModelInfoGPU(GfxReactiveMotionFrameData *frameData, const unsigned int smodelInstanceIndex, const unsigned int basePartIndex, const unsigned int baseModelPartOffset, unsigned int reactiveIndex, unsigned int flags, const XModel *model, const vector4 *modelTransform, float modelTransformScale, ReactiveMotionModelInfoGpu *modelInfo)
{
  ReactiveMotionModelInfo *reactiveMotionInfo; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 

  if ( (model->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 1871, ASSERT_TYPE_ASSERT, "(model->flags & XMODEL_FLAG_REACTIVE_MOTION)", (const char *)&queryFormat, "model->flags & XMODEL_FLAG_REACTIVE_MOTION") )
    __debugbreak();
  if ( !model->reactiveMotionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 1872, ASSERT_TYPE_ASSERT, "(model->reactiveMotionInfo)", (const char *)&queryFormat, "model->reactiveMotionInfo") )
    __debugbreak();
  reactiveMotionInfo = model->reactiveMotionInfo;
  *(_QWORD *)modelInfo->windParams.v = *(_QWORD *)&reactiveMotionInfo->windParams.windAreaScale;
  modelInfo->windParams.v[2] = reactiveMotionInfo->windParams.windFrequencyScale;
  modelInfo->modelBoundsHalfSize = model->bounds.halfSize;
  modelInfo->modelBoundsMidPoint = model->bounds.midPoint;
  modelInfo->modelRadius = model->radius;
  modelInfo->smodelInstanceIndex_numParts_flags ^= (smodelInstanceIndex ^ modelInfo->smodelInstanceIndex_numParts_flags) & 0xFFFFFF;
  v13 = reactiveMotionInfo->numParts - 1;
  if ( v13 > 15 )
    v13 = 15;
  if ( v13 < 0 )
    v13 = 0;
  v14 = flags | 1;
  v15 = modelInfo->smodelInstanceIndex_numParts_flags ^ (modelInfo->smodelInstanceIndex_numParts_flags ^ (v13 << 24)) & 0xF000000;
  modelInfo->smodelInstanceIndex_numParts_flags = v15;
  if ( (reactiveMotionInfo->flags & 1) == 0 )
    v14 = flags;
  v16 = v14 | 2;
  if ( model->radius <= 300.0 )
    v16 = v14;
  modelInfo->smodelInstanceIndex_numParts_flags = v15 & 0xFFFFFFF | (v16 << 28);
  modelInfo->modelPartOffsetQW = ReactiveMotionInplaceBuffer::GetQWOffset(&s_reactiveMotionGlobFrameData.inplaceBuffers[1], (unsigned __int64)reactiveMotionInfo->modelParts, 32i64 * reactiveMotionInfo->numParts);
  modelInfo->basePartIdx_tweakOffset = basePartIndex;
  if ( (v16 & 1) != 0 )
    modelInfo->modelPartTweakOffsetQW = ReactiveMotionInplaceBuffer::GetQWOffset(&s_reactiveMotionGlobFrameData.inplaceBuffers[2], (unsigned __int64)reactiveMotionInfo->modelPartTweaks, 32i64 * reactiveMotionInfo->numParts);
  else
    modelInfo->modelPartTweakOffsetQW = 0;
}

/*
==============
R_ReactiveMotion_GetVectorFieldAddressRange
==============
*/
void R_ReactiveMotion_GetVectorFieldAddressRange(XAssetHeader header, void *data)
{
  __int64 i; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 

  if ( header.physicsLibrary )
  {
    for ( i = 0i64; (unsigned int)i < HIDWORD(header.physicsLibrary[2].name); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)&header.physicsLibrary->isMaterialList + 80 * i;
      v6 = *(_QWORD *)v5;
      v7 = 16i64 * (unsigned int)(*(_DWORD *)(v5 + 44) * *(_DWORD *)(v5 + 48) * *(_DWORD *)(v5 + 52));
      if ( (*(_QWORD *)v5 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2402, ASSERT_TYPE_ASSERT, "((linearDataAddr % sizeof(vec4_t)) == 0)", (const char *)&queryFormat, "(linearDataAddr % sizeof(vec4_t)) == 0") )
        __debugbreak();
      if ( v7 )
      {
        if ( v6 < *(_QWORD *)data )
          *(_QWORD *)data = v6;
        if ( v7 + v6 > *((_QWORD *)data + 1) )
          *((_QWORD *)data + 1) = v7 + v6;
      }
    }
  }
}

/*
==============
R_ReactiveMotion_InitClutterFrame
==============
*/
void R_ReactiveMotion_InitClutterFrame(ComputeCmdBufState *state, bool endOfFrameReset)
{
  const GfxBackEndData *data; 
  __int64 reactiveMotionIndex; 
  ComputeShader *gpReactiveMotionClutterCopyFrameData; 
  GfxShaderBufferRWView *views; 

  data = state->data;
  reactiveMotionIndex = data->reactiveMotionIndex;
  views = &R_ModelData_GetModelDynamicIndirectionBuffer(data->smpFrame)->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].reactiveMotionCounts.view;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].reactiveMotionClutterSModelInstanceIndexBuffer.view;
  R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&views);
  gpReactiveMotionClutterCopyFrameData = rgp.gpReactiveMotionClutterCopyFrameData;
  if ( endOfFrameReset )
    gpReactiveMotionClutterCopyFrameData = rgp.gpReactiveMotionClutterResetFrameData;
  R_SetComputeShader(state, gpReactiveMotionClutterCopyFrameData);
  R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].reactiveMotionClutterIndirectArgs.buffer, 0);
  if ( !endOfFrameReset )
  {
    views = &rgp.world->smodels.clutterCollectionGPUDataBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    views = (GfxShaderBufferRWView *)&s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].reactiveMotionClutterCollectionGPUDataBuffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&views);
    R_SetComputeShader(state, rgp.gpReactiveMotionClutterCopyCollectionData);
    R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.frameData[reactiveMotionIndex].reactiveMotionClutterIndirectArgs.buffer, 0x20u);
  }
}

/*
==============
R_ReactiveMotion_InitWorld
==============
*/
void R_ReactiveMotion_InitWorld(void)
{
  __int64 v0; 
  std::pair<unsigned __int64,unsigned __int64> *p_inData; 
  __int64 v2; 
  unsigned __int64 *p_bufferSize; 
  std::pair<unsigned __int64,unsigned __int64> *v4; 
  GfxWrappedBuffer *p_buffer; 
  unsigned __int64 second; 
  const void *initialData; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  std::pair<unsigned __int64,unsigned __int64> inData; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v0 = 3i64;
  p_inData = &inData;
  v2 = 3i64;
  do
  {
    std::pair<unsigned __int64,unsigned __int64>::pair<unsigned __int64,unsigned __int64>(p_inData++);
    --v2;
  }
  while ( v2 );
  inData.second = 0i64;
  v12 = 0i64;
  v14 = 0i64;
  inData.first = -1i64;
  v11 = -1i64;
  v13 = -1i64;
  DB_EnumSafeXAssets(ASSET_TYPE_VECTORFIELD, R_ReactiveMotion_GetVectorFieldAddressRange, &inData);
  DB_EnumSafeXAssets(ASSET_TYPE_XMODEL, GetModelPartRanges, &inData);
  p_bufferSize = &s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferSize;
  v4 = &inData;
  p_buffer = &s_reactiveMotionGlobFrameData.inplaceBuffers[0].buffer;
  do
  {
    second = v4->second;
    initialData = (const void *)v4->first;
    if ( second <= v4->first )
    {
      *(p_bufferSize - 1) = 0i64;
      *p_bufferSize = 0i64;
    }
    else
    {
      v8 = second - (_QWORD)initialData;
      *(p_bufferSize - 1) = (unsigned __int64)initialData;
      *p_bufferSize = v8;
      v9 = v8 >> 4;
      if ( v9 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v9, "unsigned", v9) )
        __debugbreak();
      R_CreateGfxWrappedBuffer(p_buffer, GfxWrappedBuffer_Structured, 16, v9, GFX_DATA_FORMAT_R32_UINT, 6u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "reactive motion calc inplace buffer");
    }
    p_buffer = (GfxWrappedBuffer *)((char *)p_buffer + 48);
    ++v4;
    p_bufferSize += 6;
    --v0;
  }
  while ( v0 );
}

/*
==============
R_ReactiveMotion_SetClutterActive
==============
*/
void R_ReactiveMotion_SetClutterActive(const unsigned int frame)
{
  s_reactiveMotionGlobFrameData.frameData[frame].bUsesClutterPass = s_reactiveMotionGlobFrameData.frameData[frame].bUsesClutterSupport;
}

/*
==============
R_ReactiveMotion_SetReactiveMotionClutterLayerCount
==============
*/
void R_ReactiveMotion_SetReactiveMotionClutterLayerCount(const unsigned int frame, unsigned int count)
{
  s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionClutterLayerCount = count;
}

/*
==============
R_ReactiveMotion_SetupParts
==============
*/
void R_ReactiveMotion_SetupParts(const unsigned int frame, const unsigned int smodelInstanceIndex, const XModel *model)
{
  const dvar_t *v3; 
  __int64 v5; 
  __int64 v6; 
  bool enabled; 
  GfxReactiveMotionFrameData *v8; 
  __int64 reactiveMotionDataCurrentIndex; 
  unsigned __int16 v10; 
  unsigned int firstStaticObjectsIndirectionIndex; 
  unsigned int lastStaticObjectsIndirectionIndex; 
  bool bUsesCpuCalc; 
  __m128 v14; 
  __m128 v16; 
  __m128 v20; 
  __m128 v24; 
  __m128 v28; 
  __int64 v31; 
  unsigned int reactiveMotionDataCurrentPartIndex; 
  unsigned int v33; 
  __m256i v34; 
  __m256i *v35; 
  ReactiveMotionModelInfo *reactiveMotionInfo; 
  __m128 v37; 
  __int64 v38; 
  PackedQuatDec3n v39; 
  float v40; 
  vec3_t *v41; 
  __int64 v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  bool v47; 
  float outScale; 
  float binormalSign; 
  vec3_t out; 
  __m128 v51; 
  vector4 axis; 
  vec3_t in; 
  vec3_t v54; 
  vector4 modelTransform; 
  GfxPlacement outPlacement; 
  vec4_t outQuat; 
  vec4_t v58; 
  vec3_t start[16]; 
  vec4_t in2[16]; 

  v3 = DVARBOOL_r_reactiveMotionPivotDebugDraw;
  v5 = smodelInstanceIndex;
  v6 = frame;
  if ( !DVARBOOL_r_reactiveMotionPivotDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPivotDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  v47 = enabled;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2666, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !model->reactiveMotionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2667, ASSERT_TYPE_ASSERT, "(model->reactiveMotionInfo)", (const char *)&queryFormat, "model->reactiveMotionInfo") )
    __debugbreak();
  if ( (model->flags & 0x28000) == 0 )
  {
    v8 = &s_reactiveMotionGlobFrameData.frameData[v6];
    reactiveMotionDataCurrentIndex = v8->reactiveMotionDataCurrentIndex;
    v8->reactiveMotionDataCurrentIndex = reactiveMotionDataCurrentIndex + 1;
    if ( (unsigned int)reactiveMotionDataCurrentIndex >= 0xD90 )
      R_WarnOncePerFrame(R_WARN_REACTIVEMOTION_CBS, 3472i64);
    if ( (_DWORD)v5 != -1 )
    {
      if ( (unsigned int)reactiveMotionDataCurrentIndex < 0xD90 )
        v10 = truncate_cast<unsigned short,unsigned int>(reactiveMotionDataCurrentIndex);
      else
        v10 = -1;
      v8->reactiveMotionDataIndices[v5] = v10;
      firstStaticObjectsIndirectionIndex = v8->firstStaticObjectsIndirectionIndex;
      if ( firstStaticObjectsIndirectionIndex > (unsigned int)v5 )
        firstStaticObjectsIndirectionIndex = v5;
      v8->firstStaticObjectsIndirectionIndex = firstStaticObjectsIndirectionIndex;
      lastStaticObjectsIndirectionIndex = v8->lastStaticObjectsIndirectionIndex;
      if ( (unsigned int)v5 > lastStaticObjectsIndirectionIndex )
        lastStaticObjectsIndirectionIndex = v5;
      v8->lastStaticObjectsIndirectionIndex = lastStaticObjectsIndirectionIndex;
    }
    if ( (unsigned int)reactiveMotionDataCurrentIndex < 0xD90 )
    {
      bUsesCpuCalc = v8->bUsesCpuCalc;
      if ( (enabled || bUsesCpuCalc) && (_DWORD)v5 != -1 )
      {
        R_StaticModelInstance_GetPlacement(v5, &outPlacement, &outScale);
        QuatToAxis(&outPlacement.quat, (tmat33_t<vec3_t> *)&axis);
        v14 = (__m128)LODWORD(outScale);
        v51.m128_i32[3] = 0;
        v16 = v51;
        v16.m128_f32[0] = axis.x.v.m128_f32[0];
        _XMM9 = v16;
        __asm
        {
          vinsertps xmm9, xmm9, dword ptr [rsp+3B8h+axis+4], 10h
          vinsertps xmm9, xmm9, dword ptr [rsp+3B8h+axis+8], 20h
        }
        v51 = _XMM9;
        v51.m128_i32[3] = 0;
        v20 = v51;
        v20.m128_f32[0] = axis.x.v.m128_f32[3];
        _XMM10 = v20;
        __asm
        {
          vinsertps xmm10, xmm10, dword ptr [rsp+3B8h+axis+10h], 10h
          vinsertps xmm10, xmm10, dword ptr [rsp+3B8h+axis+14h], 20h
        }
        v51 = _XMM10;
        v51.m128_i32[3] = 0;
        v24 = v51;
        v24.m128_f32[0] = axis.y.v.m128_f32[2];
        _XMM7 = v24;
        __asm
        {
          vinsertps xmm7, xmm7, dword ptr [rsp+3B8h+axis+1Ch], 10h
          vinsertps xmm7, xmm7, dword ptr [rsp+3B8h+axis+20h], 20h
        }
        v51 = _XMM7;
        v51.m128_i32[3] = 0;
        v28 = v51;
        v28.m128_f32[0] = outPlacement.origin.v[0];
        _XMM8 = v28;
        __asm
        {
          vinsertps xmm8, xmm8, dword ptr [rsp+3B8h+outPlacement.origin+4], 10h
          vinsertps xmm8, xmm8, dword ptr [rsp+3B8h+outPlacement.origin+8], 20h
        }
        v51 = _XMM8;
      }
      else
      {
        v14 = (__m128)LODWORD(FLOAT_1_0);
        axis.y = (float4)g_0100.v;
        axis.x = (float4)g_1000.v;
        axis.z = (float4)g_0010.v;
        _XMM10 = g_0100.v;
        _XMM9 = g_1000.v;
        axis.w = (float4)g_0001.v;
        modelTransform = axis;
        _XMM8 = g_0001.v;
        _XMM7 = g_0010.v;
        outScale = FLOAT_1_0;
      }
      v31 = 0i64;
      if ( !bUsesCpuCalc )
      {
        reactiveMotionDataCurrentPartIndex = v8->reactiveMotionDataCurrentPartIndex;
        v33 = reactiveMotionDataCurrentPartIndex + model->reactiveMotionInfo->numParts;
        if ( v33 > 0xD900 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 1815, ASSERT_TYPE_ASSERT, "(endPart <= (( 3 * 1024 + 400 ) * 16))", (const char *)&queryFormat, "endPart <= MAX_REACTIVEMOTION_PARTS") )
          __debugbreak();
        v8->reactiveMotionDataCurrentPartIndex = v33;
        R_ReactiveMotion_GetReactiveMotionModelInfoGPU(v8, v5, reactiveMotionDataCurrentPartIndex, reactiveMotionDataCurrentPartIndex, reactiveMotionDataCurrentIndex, 0, model, &modelTransform, v14.m128_f32[0], (ReactiveMotionModelInfoGpu *)&modelTransform);
        v34 = *(__m256i *)modelTransform.z.v.m128_f32;
        v35 = (__m256i *)&v8->reactiveMotionModelInfo[reactiveMotionDataCurrentIndex];
        *v35 = *(__m256i *)modelTransform.x.v.m128_f32;
        v35[1] = v34;
        v14 = (__m128)LODWORD(outScale);
      }
      if ( v47 )
      {
        reactiveMotionInfo = model->reactiveMotionInfo;
        in.v[0] = FLOAT_5_0;
        v54.v[1] = FLOAT_5_0;
        v51.m128_f32[2] = FLOAT_5_0;
        in.v[1] = 0.0;
        in.v[2] = 0.0;
        v54.v[0] = 0.0;
        v54.v[2] = 0.0;
        v51.m128_f32[0] = 0.0;
        v51.m128_f32[1] = 0.0;
        v37 = _mm_shuffle_ps(v14, v14, 0);
        axis.x.v = _mm128_mul_ps(v37, _XMM9);
        axis.z.v.m128_f32[0] = _XMM7.m128_f32[0] * v14.m128_f32[0];
        axis.y.v = _mm128_mul_ps(v37, _XMM10);
        modelTransform.x.v = _XMM9;
        modelTransform.y.v = _XMM10;
        modelTransform.z.v = _XMM7;
        modelTransform.w.v = _XMM8;
        axis.z.v.m128_f32[3] = v14.m128_f32[0] * _XMM7.m128_f32[3];
        axis.z.v.m128_f32[1] = v14.m128_f32[0] * _XMM7.m128_f32[1];
        axis.z.v.m128_f32[2] = v14.m128_f32[0] * _XMM7.m128_f32[2];
        axis.w.v = _XMM8;
        if ( reactiveMotionInfo->numParts )
        {
          do
          {
            v38 = (__int64)&reactiveMotionInfo->modelParts[(unsigned int)v31];
            v39.packed = *(unsigned int *)(v38 + 28);
            if ( *(_WORD *)(v38 + 14) == 0xFFFF )
            {
              QuatDec3nToUnitQuat(v39, &outPlacement.quat, &binormalSign);
              AxisComponentsToQuat((const vec3_t *)&modelTransform, (const vec3_t *)&modelTransform.y, (const vec3_t *)&modelTransform.z, &v58);
              QuatMultiply(&outPlacement.quat, &v58, &in2[(unsigned int)v31]);
              v41 = &start[v31];
              MatrixTransformPosition44((const vec3_t *)(v38 + 16), (const tmat44_t<vec4_t> *)&modelTransform, v41);
            }
            else
            {
              QuatDec3nToUnitQuat(v39, &outQuat, &binormalSign);
              QuatMultiply(&outQuat, &in2[*(unsigned __int16 *)(v38 + 14)], &in2[(unsigned int)v31]);
              QuatTransform(&in2[*(unsigned __int16 *)(v38 + 14)], (const vec3_t *)(v38 + 16), &out);
              v40 = outScale * out.v[2];
              v41 = &start[v31];
              v42 = *(unsigned __int16 *)(v38 + 14);
              v43 = outScale * out.v[1];
              v41->v[0] = (float)(outScale * out.v[0]) + start[v42].v[0];
              v41->v[1] = v43 + start[v42].v[1];
              v41->v[2] = v40 + start[v42].v[2];
            }
            QuatTransform(&in2[(unsigned int)v31], &in, &out);
            v44 = out.v[1] + v41->v[1];
            out.v[0] = out.v[0] + v41->v[0];
            out.v[2] = out.v[2] + v41->v[2];
            out.v[1] = v44;
            R_AddDebugLine(&frontEndDataOut->debugGlobals, v41, &out, &colorRed);
            QuatTransform(&in2[(unsigned int)v31], &v54, &out);
            v45 = out.v[1] + v41->v[1];
            out.v[0] = out.v[0] + v41->v[0];
            out.v[2] = out.v[2] + v41->v[2];
            out.v[1] = v45;
            R_AddDebugLine(&frontEndDataOut->debugGlobals, v41, &out, &colorGreen);
            QuatTransform(&in2[(unsigned int)v31], (const vec3_t *)&v51, &out);
            v46 = out.v[1] + v41->v[1];
            out.v[0] = out.v[0] + v41->v[0];
            out.v[2] = out.v[2] + v41->v[2];
            out.v[1] = v46;
            R_AddDebugLine(&frontEndDataOut->debugGlobals, v41, &out, &colorBlue);
            MatrixTransformPosition44((const vec3_t *)v38, (const tmat44_t<vec4_t> *)&axis, &out);
            R_AddDebugStar(&frontEndDataOut->debugGlobals, &out, 3.0, &colorCyan);
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < reactiveMotionInfo->numParts );
        }
      }
    }
  }
}

/*
==============
R_ReactiveMotion_ShutdownWorld
==============
*/
void R_ReactiveMotion_ShutdownWorld(void)
{
  unsigned __int64 *p_bufferSize; 
  __int64 v1; 
  GfxWrappedBuffer *p_buffer; 

  p_bufferSize = &s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferSize;
  v1 = 3i64;
  p_buffer = &s_reactiveMotionGlobFrameData.inplaceBuffers[0].buffer;
  do
  {
    if ( *p_bufferSize )
    {
      R_ShutdownGfxWrappedBuffer(p_buffer);
      *(p_bufferSize - 1) = 0i64;
      *p_bufferSize = 0i64;
    }
    p_buffer = (GfxWrappedBuffer *)((char *)p_buffer + 48);
    p_bufferSize += 6;
    --v1;
  }
  while ( v1 );
}

/*
==============
R_ReactiveMotion_SortEffectors
==============
*/
void R_ReactiveMotion_SortEffectors(const vec3_t *cameraPos)
{
  bool v2; 
  signed __int64 v3; 
  signed __int64 v4; 
  signed __int64 v5; 
  ReactiveMotionSphere *v6; 
  float v7; 
  float v8; 
  float v9; 
  ReactiveMotionSphere *v10; 
  __int64 v11; 
  vec3_t to; 
  vec3_t from; 

  v11 = -2i64;
  v2 = s_numReactiveMotionSpheres[0] > 1;
  v3 = s_numReactiveMotionSpheres[0];
  v4 = 0i64;
  if ( s_numReactiveMotionSpheres[0] > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v5;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3519, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere", v11) )
        __debugbreak();
      GetSecureVec3(&v6->pos, &to, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
      v7 = to.v[0];
      v8 = to.v[1];
      v9 = to.v[2];
      v6->distFromCamera = (float)((float)((float)(cameraPos->v[1] - to.v[1]) * (float)(cameraPos->v[1] - to.v[1])) + (float)((float)(cameraPos->v[0] - to.v[0]) * (float)(cameraPos->v[0] - to.v[0]))) + (float)((float)(cameraPos->v[2] - to.v[2]) * (float)(cameraPos->v[2] - to.v[2]));
      if ( v2 )
      {
        v6->pos.v[0] = v7;
        v6->pos.v[1] = v8;
        v6->pos.v[2] = v9;
      }
      memset(&to, 0, sizeof(to));
      ++v5;
    }
    while ( v5 < v3 );
    v4 = 0i64;
  }
  if ( v2 )
  {
    qsort(&s_reactiveMotionSpheres + 128 * s_curReactiveMotionSphereFrame, v3, 0x30ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareReactiveMotionSpheres);
    if ( v3 > 0 )
    {
      do
      {
        v10 = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v4;
        from = v10->pos;
        SetSecureVec3(&from, &v10->pos, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
        memset(&from, 0, sizeof(from));
        ++v4;
      }
      while ( v4 < v3 );
    }
  }
}

/*
==============
R_ReactiveMotion_Update
==============
*/
void R_ReactiveMotion_Update(LocalClientNum_t localClientNum, const float gameTimeSec, const float deltaGameTimeSec, const vec3_t *clientPos, const vec3_t *clientVel)
{
  __int64 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  unsigned int v10; 
  __int128 v12; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  __int128 avgVel_low; 
  float avgVelPeak; 
  float v24; 
  __int128 v26; 
  float v28; 
  float v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  ReactiveMotionEffector *v33; 
  ReactiveMotionSphere *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  ReactiveMotionEffector *v38; 
  vec3_t outOrigin; 
  vec3_t center; 
  vec3_t to; 
  __int64 v42; 
  vec3_t from; 
  vec3_t dir; 
  vec3_t v45; 
  vec3_t v46; 
  WindParams outParams; 
  vec4_t color; 

  v42 = -2i64;
  v6 = localClientNum;
  CG_Wind_GetDefaultParams(&outParams);
  g_reactiveMotionParams.windDir.v[0] = outParams.defaultDir.v[0];
  g_reactiveMotionParams.windDir.v[1] = outParams.defaultDir.v[1];
  g_reactiveMotionParams.windDir.v[2] = outParams.defaultDir.v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(outParams.defaultDir.v[1] * outParams.defaultDir.v[1]) + (float)(g_reactiveMotionParams.windDir.v[0] * g_reactiveMotionParams.windDir.v[0])) + (float)(outParams.defaultDir.v[2] * outParams.defaultDir.v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 927, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( g_reactiveMotionParams.windDir ))", (const char *)&queryFormat, "Vec3IsNormalized( g_reactiveMotionParams.windDir )") )
    __debugbreak();
  g_reactiveMotionParams.windStrength = outParams.defaultStrength;
  g_reactiveMotionParams.windAreaScale = outParams.defaultAreaScale;
  g_reactiveMotionParams.windAmplitudeScale = outParams.defaultAmplitudeScale;
  g_reactiveMotionParams.windNoiseScale = outParams.defaultNoiseStrength;
  g_reactiveMotionParams.windTimeSec = fmodf_0((float)(deltaGameTimeSec * outParams.defaultFrequencyScale) + g_reactiveMotionParams.windTimeSec, 43200.0);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 937, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tAccessing networked dvars must be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  from = *clientPos;
  v7 = DVARFLT_r_reactiveMotionPlayerHeightAdjust;
  if ( !DVARFLT_r_reactiveMotionPlayerHeightAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerHeightAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  from.v[2] = from.v[2] + v7->current.value;
  v8 = DVARFLT_r_reactiveMotionVelocityTailScale;
  if ( !DVARFLT_r_reactiveMotionVelocityTailScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionVelocityTailScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  LODWORD(g_reactiveMotionParams.velocityTailScale) = v8->current.integer;
  v9 = DVARFLT_r_reactiveMotionEffectorStrengthScale;
  if ( !DVARFLT_r_reactiveMotionEffectorStrengthScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionEffectorStrengthScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  LODWORD(g_reactiveMotionParams.effectorStrengthScale) = v9->current.integer;
  R_ReactiveMotion_SortEffectors(clientPos);
  ReactiveMotionEffector_GetPos(g_reactiveMotionParams.effectors, &outOrigin);
  v10 = 0;
  if ( (float)((float)((float)((float)(from.v[1] - outOrigin.v[1]) * (float)(from.v[1] - outOrigin.v[1])) + (float)((float)(from.v[0] - outOrigin.v[0]) * (float)(from.v[0] - outOrigin.v[0]))) + (float)((float)(from.v[2] - outOrigin.v[2]) * (float)(from.v[2] - outOrigin.v[2]))) > 3600.0 )
  {
    s_reactiveMotionGlobFrameData.clientData[v6].avgVel = 0.0;
    s_reactiveMotionGlobFrameData.clientData[v6].avgVelPeak = 1.0;
  }
  SetSecureVec3(&from, &g_reactiveMotionParams.effectors[0].pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
  v12 = LODWORD(clientVel->v[0]);
  *(float *)&v12 = fsqrt((float)((float)(clientVel->v[0] * clientVel->v[0]) + (float)(clientVel->v[1] * clientVel->v[1])) + (float)(clientVel->v[2] * clientVel->v[2]));
  _XMM7 = v12;
  v13 = DVARFLT_r_reactiveMotionPlayerRadius;
  if ( !DVARFLT_r_reactiveMotionPlayerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  v15 = DVARFLT_r_reactiveMotionPlayerPushFrequency;
  if ( !DVARFLT_r_reactiveMotionPlayerPushFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerPushFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value;
  v17 = DVARFLT_r_reactiveMotionPlayerPushAmplitude;
  if ( !DVARFLT_r_reactiveMotionPlayerPushAmplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerPushAmplitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value;
  v19 = DVARFLT_r_reactiveMotionPlayerPushDecay;
  if ( !DVARFLT_r_reactiveMotionPlayerPushDecay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerPushDecay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v19->current.value;
  avgVel_low = LODWORD(s_reactiveMotionGlobFrameData.clientData[v6].avgVel);
  avgVelPeak = s_reactiveMotionGlobFrameData.clientData[v6].avgVelPeak;
  if ( *(float *)&v12 >= 0.1 )
    __asm { vminss  xmm0, xmm7, xmm14 }
  else
    _XMM0 = LODWORD(FLOAT_0_1);
  *(double *)&_XMM0 = I_fclamp((float)((float)(*(float *)&_XMM0 - *(float *)&avgVel_low) * 0.0099999998) + *(float *)&avgVel_low, 0.1, 1.0);
  v24 = *(float *)&_XMM0;
  if ( *(float *)&avgVel_low <= *(float *)&_XMM0 )
  {
    avgVel_low = _XMM0;
    avgVelPeak = *(float *)&_XMM0;
  }
  v26 = avgVel_low;
  *(float *)&v26 = *(float *)&avgVel_low * v20;
  _XMM1 = v26;
  __asm { vminss  xmm3, xmm1, xmm9 }
  v28 = (float)(avgVelPeak - *(float *)&_XMM3) / avgVelPeak;
  s_reactiveMotionGlobFrameData.clientData[v6].avgVelPeak = avgVelPeak;
  s_reactiveMotionGlobFrameData.clientData[v6].avgVel = *(float *)&_XMM3;
  v29 = sinf_0((float)(v28 * 6.2831855) * v16);
  g_reactiveMotionParams.effectors[0].radius = value - (float)((float)(v29 * expf_0(v28 * -3.0)) * (float)(v24 * v18));
  *(_OWORD *)g_reactiveMotionParams.effectors[0].velDir.v = 0i64;
  v30 = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
  v31 = s_numReactiveMotionSpheres[0];
  if ( s_numReactiveMotionSpheres[0] > 0 )
  {
    v32 = 0i64;
    do
    {
      if ( v30 >= 0xF )
        break;
      v33 = &g_reactiveMotionParams.effectors[v30++];
      v34 = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v32;
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3519, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere") )
        __debugbreak();
      GetSecureVec3(&v34->pos, &to, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3501, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
        __debugbreak();
      SetSecureVec3(&to, &v33->pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
      v33->radius = v34->radius;
      v33->velDir.v[0] = v34->velDir.v[0];
      v33->velDir.v[1] = v34->velDir.v[1];
      v33->velDir.v[2] = v34->velDir.v[2];
      v33->velMag = v34->velMag;
      memset(&to, 0, sizeof(to));
      ++v32;
    }
    while ( v32 < v31 );
    v10 = 0;
  }
  g_reactiveMotionParams.numEffectors = v30;
  s_numReactiveMotionSpheres[0] = 0;
  s_curReactiveMotionSphereFrame = 0;
  v35 = DVARFLT_r_reactiveMotionActorRadius;
  if ( !DVARFLT_r_reactiveMotionActorRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionActorRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  LODWORD(s_reactiveMotionGlobFrameData.defaultActorRadius) = v35->current.integer;
  v36 = DVARFLT_r_reactiveMotionActorVelocityMax;
  if ( !DVARFLT_r_reactiveMotionActorVelocityMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionActorVelocityMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  LODWORD(s_reactiveMotionGlobFrameData.defaultActorVelocityMax) = v36->current.integer;
  v37 = DVARBOOL_r_reactiveMotionEffectorDebugDraw;
  if ( !DVARBOOL_r_reactiveMotionEffectorDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionEffectorDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    dir.v[0] = FLOAT_1_0;
    dir.v[1] = 0.0;
    dir.v[2] = 0.0;
    v45.v[0] = 0.0;
    v45.v[1] = FLOAT_1_0;
    v45.v[2] = 0.0;
    v46.v[0] = 0.0;
    v46.v[1] = 0.0;
    v46.v[2] = FLOAT_1_0;
    color = (vec4_t)_xmm;
    if ( g_reactiveMotionParams.numEffectors )
    {
      do
      {
        v38 = &g_reactiveMotionParams.effectors[v10];
        if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3482, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
          __debugbreak();
        GetSecureVec3(&v38->pos, &center, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
        R_DebugCircle(&center, v38->radius, &dir, &color);
        R_DebugCircle(&center, v38->radius, &v45, &color);
        R_DebugCircle(&center, v38->radius, &v46, &color);
        ++v10;
      }
      while ( v10 < g_reactiveMotionParams.numEffectors );
    }
    memset(&center, 0, sizeof(center));
  }
}

/*
==============
R_ReactiveMotion_UsesClutterPass
==============
*/
_BOOL8 R_ReactiveMotion_UsesClutterPass(const unsigned int frame)
{
  return s_reactiveMotionGlobFrameData.frameData[frame].bUsesClutterPass;
}

/*
==============
R_ReactiveMotion_UsingCpuCalc
==============
*/
bool R_ReactiveMotion_UsingCpuCalc()
{
  return 0;
}

/*
==============
R_ToggleReactiveMotionFrame
==============
*/
__int64 R_ToggleReactiveMotionFrame()
{
  unsigned int frame; 
  const dvar_t *v1; 
  __int64 v2; 
  bool enabled; 
  unsigned int v4; 
  __m256i v5; 
  __m256i v6; 
  __int64 result; 

  frame = s_reactiveMotionGlobFrameData.frame;
  v1 = DVARBOOL_r_reactiveMotionClutter;
  v2 = s_reactiveMotionGlobFrameData.frame;
  s_reactiveMotionGlobFrameData.frame = ++s_reactiveMotionGlobFrameData.frameCount % 3;
  *(_WORD *)&s_reactiveMotionGlobFrameData.frameData[v2].frameUploaded = 0;
  *(_QWORD *)&s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex = 0i64;
  s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartTweakIndex = 0;
  *(_QWORD *)&s_reactiveMotionGlobFrameData.frameData[v2].numVectorFields = 0i64;
  s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterPass = 0;
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionClutter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  enabled = v1->current.enabled;
  v4 = 0;
  v5 = *(__m256i *)g_reactiveMotionParams.windDir.v;
  v6 = *(__m256i *)&g_reactiveMotionParams.velocityTailScale;
  s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterSupport = enabled;
  *(__m256i *)g_backendReactiveMotionParams.windDir.v = v5;
  *(__m256i *)&g_backendReactiveMotionParams.velocityTailScale = v6;
  s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterLayerCount = 0;
  s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentModelPartOffset = 0;
  do
  {
    if ( v4 >= g_reactiveMotionParams.numEffectors )
      break;
    Copy_ReactiveMotionEffector(&g_backendReactiveMotionParams.effectors[v4], &g_reactiveMotionParams.effectors[v4]);
    ++v4;
  }
  while ( v4 < 0xF );
  result = frame;
  *(_QWORD *)&s_reactiveMotionGlobFrameData.frameData[v2].firstStaticObjectsIndirectionIndex = 0x200000i64;
  return result;
}

/*
==============
ReactiveMotionEffector_GetPos
==============
*/
void ReactiveMotionEffector_GetPos(const ReactiveMotionEffector *reactiveMotionEffector, vec3_t *outOrigin)
{
  if ( !reactiveMotionEffector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3482, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
    __debugbreak();
  GetSecureVec3(&reactiveMotionEffector->pos, outOrigin, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
}

/*
==============
ReactiveMotionEffector_SetPos
==============
*/
void ReactiveMotionEffector_SetPos(ReactiveMotionEffector *reactiveMotionEffector, const vec3_t *origin)
{
  if ( !reactiveMotionEffector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3501, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
    __debugbreak();
  SetSecureVec3(origin, &reactiveMotionEffector->pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
}

/*
==============
ReactiveMotionSphere_GetPos
==============
*/
void ReactiveMotionSphere_GetPos(const ReactiveMotionSphere *reactiveMotionSphere, vec3_t *outOrigin)
{
  if ( !reactiveMotionSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3519, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere") )
    __debugbreak();
  GetSecureVec3(&reactiveMotionSphere->pos, outOrigin, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
}

/*
==============
ReactiveMotionSphere_GetPosRAW
==============
*/
void ReactiveMotionSphere_GetPosRAW(const ReactiveMotionSphere *reactiveMotionSphere, vec3_t *outOrigin)
{
  *outOrigin = reactiveMotionSphere->pos;
}

/*
==============
ReactiveMotionSphere_SetPos
==============
*/
void ReactiveMotionSphere_SetPos(ReactiveMotionSphere *reactiveMotionSphere, const vec3_t *origin)
{
  if ( !reactiveMotionSphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3538, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere") )
    __debugbreak();
  SetSecureVec3(origin, &reactiveMotionSphere->pos, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
}

/*
==============
ReactiveMotionSphere_SetPosRAW
==============
*/
void ReactiveMotionSphere_SetPosRAW(ReactiveMotionSphere *reactiveMotionSphere, const vec3_t *origin)
{
  reactiveMotionSphere->pos = *origin;
}

