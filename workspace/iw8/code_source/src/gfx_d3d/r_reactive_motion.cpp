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
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+20h]
    vmovss  xmm1, dword ptr [rdx+20h]
    vcomiss xmm0, xmm1
  }
  if ( v2 )
    return 0xFFFFFFFFi64;
  __asm { vcomiss xmm0, xmm1 }
  return 0i64;
}

/*
==============
Copy_ReactiveMotionEffector
==============
*/
void Copy_ReactiveMotionEffector(ReactiveMotionEffector *out, const ReactiveMotionEffector *in)
{
  vec3_t to; 

  _RDI = in;
  _RBX = out;
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3482, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
    __debugbreak();
  GetSecureVec3(&_RDI->pos, &to, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx], ymm0
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3501, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
    __debugbreak();
  SetSecureVec3(&to, &_RBX->pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
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
  bool enabled; 
  char v11; 
  __int64 v12; 
  int v14; 
  int v15; 
  unsigned int v16; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  int v24; 
  int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v36; 
  unsigned int v37; 
  int v38; 
  unsigned int v39; 
  bool v40; 
  __int64 v41; 
  char *v42; 
  __int64 *v43; 
  unsigned __int64 v44; 
  GfxReactiveMotionFrameData *v45; 
  char v46; 
  unsigned int v47; 
  _DWORD *v48; 
  __int64 v49; 
  unsigned __int64 v51; 
  __int64 data[2678]; 
  __int64 v53[510]; 
  char v54[24]; 
  char v55; 

  InstancePool = CG_VectorField_GetInstancePool();
  bufferBaseAddr = s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferBaseAddr;
  v3 = InstancePool;
  v4 = DVARBOOL_cg_vectorFieldsForceUniform;
  v5 = 0;
  v47 = 0;
  v6 = 0;
  v51 = s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferBaseAddr + s_reactiveMotionGlobFrameData.inplaceBuffers[0].bufferSize;
  if ( !DVARBOOL_cg_vectorFieldsForceUniform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsForceUniform") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  enabled = v4->current.enabled;
  _R11 = (_DWORD *)&v3->orient.axis.m[0].v[2];
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  v11 = 0;
  v48 = (_DWORD *)&v3->orient.axis.m[0].v[2];
  v46 = 0;
  v49 = 255i64;
  do
  {
    v12 = *(_QWORD *)(_R11 - 7);
    _R9 = 84i64 * v5;
    if ( _R11[9] && v12 && (v14 = *(_DWORD *)(v12 + 52), v14 + v6 <= 0x1FE) )
    {
      _R8 = *(_QWORD *)(v12 + 8);
      v15 = 0;
      v16 = 0;
      _R10 = &v54[32 * v6];
      if ( v14 )
      {
        do
        {
          if ( (unsigned int)(*(_DWORD *)(_R8 + 60) - 1) <= 1 )
          {
            v18 = 16i64 * (unsigned int)(*(_DWORD *)(_R8 + 48) * *(_DWORD *)(_R8 + 44) * *(_DWORD *)(_R8 + 52));
            if ( v18 )
            {
              v19 = *(_QWORD *)_R8;
              if ( *(_QWORD *)_R8 < bufferBaseAddr || v18 + v19 > v51 )
              {
                v11 = 1;
              }
              else
              {
                v53[v6] = v19;
                *((_DWORD *)_R10 + 6) = 0;
                v20 = *(_DWORD *)(_R8 + 44) - 1;
                if ( v20 > 1023 )
                  v20 = 1023;
                if ( v20 < 0 )
                  v20 = 0;
                v21 = *((_DWORD *)_R10 + 7) & 0xFFFFFC00 | v20;
                *((_DWORD *)_R10 + 7) = v21;
                v22 = *(_DWORD *)(_R8 + 48) - 1;
                if ( v22 > 1023 )
                  v22 = 1023;
                if ( v22 < 0 )
                  v22 = 0;
                v23 = v21 & 0xFFF003FF | (v22 << 10);
                v24 = 0;
                *((_DWORD *)_R10 + 7) = v23;
                v25 = *(_DWORD *)(_R8 + 52) - 1;
                if ( v25 > 1023 )
                  v25 = 1023;
                if ( v25 < 0 )
                  v25 = 0;
                v26 = v23 & 0xC00FFFFF | (v25 << 20);
                *((_DWORD *)_R10 + 7) = v26;
                if ( *(_DWORD *)(_R8 + 60) == 2 )
                  v24 = 0x40000000;
                v27 = v26 & 0xBFFFFFFF | v24;
                *((_DWORD *)_R10 + 7) = v27;
                if ( (*(_BYTE *)(_R8 + 56) & 1) != 0 || (v28 = 0, enabled) )
                  v28 = 0x80000000;
                *((_DWORD *)_R10 + 7) = v28 | v27 & 0x7FFFFFFF;
                __asm
                {
                  vmovss  xmm0, dword ptr [r8+14h]
                  vsubss  xmm1, xmm0, dword ptr [r8+8]
                  vmovss  dword ptr [r10], xmm1
                  vmovss  xmm2, dword ptr [r8+18h]
                  vsubss  xmm0, xmm2, dword ptr [r8+0Ch]
                  vmovss  dword ptr [r10+4], xmm0
                  vmovss  xmm1, dword ptr [r8+1Ch]
                  vsubss  xmm2, xmm1, dword ptr [r8+10h]
                  vmovss  dword ptr [r10+8], xmm2
                }
                *((_DWORD *)_R10 + 3) = *(_DWORD *)(_R8 + 32);
                *((_DWORD *)_R10 + 4) = *(_DWORD *)(_R8 + 36);
                *((_DWORD *)_R10 + 5) = *(_DWORD *)(_R8 + 40);
                _R10 += 32;
                ++v15;
              }
            }
          }
          ++v16;
        }
        while ( v16 < *(_DWORD *)(v12 + 52) );
        _R9 = 84i64 * v5;
        _R11 = v48;
        v5 = v47;
        v46 = v11;
      }
      *(_DWORD *)((char *)&data[7] + _R9) = *(_DWORD *)(v12 + 16);
      *(_DWORD *)((char *)&data[7] + _R9 + 4) = *(_DWORD *)(v12 + 20);
      *(_DWORD *)((char *)&data[8] + _R9) = *(_DWORD *)(v12 + 24);
      *(_DWORD *)((char *)&data[8] + _R9 + 4) = *(_DWORD *)(v12 + 28);
      *(_DWORD *)((char *)&data[9] + _R9) = *(_DWORD *)(v12 + 32);
      *(_DWORD *)((char *)&data[9] + _R9 + 4) = *(_DWORD *)(v12 + 36);
      if ( _R11[10] )
      {
        *(_DWORD *)((char *)data + _R9) = *(_R11 - 2);
        *(_DWORD *)((char *)data + _R9 + 4) = *(_R11 - 1);
        *(_DWORD *)((char *)&data[1] + _R9) = *_R11;
        *(_DWORD *)((char *)&data[1] + _R9 + 4) = _R11[1];
        *(_DWORD *)((char *)&data[2] + _R9) = _R11[2];
        *(_DWORD *)((char *)&data[2] + _R9 + 4) = _R11[3];
        *(_DWORD *)((char *)&data[3] + _R9) = _R11[4];
        *(_DWORD *)((char *)&data[3] + _R9 + 4) = _R11[5];
        __asm { vmovss  xmm0, dword ptr [r11+18h] }
      }
      else
      {
        *(__int64 *)((char *)data + _R9) = 1065353216i64;
        *(__int64 *)((char *)&data[1] + _R9) = 0i64;
        *(__int64 *)((char *)&data[2] + _R9) = 1065353216i64;
        *(__int64 *)((char *)&data[3] + _R9) = 0i64;
        __asm { vmovaps xmm0, xmm3 }
      }
      __asm { vmovss  [rsp+r9+0A428h+var_A378], xmm0 }
      *(_DWORD *)((char *)&data[4] + _R9 + 4) = *(_R11 - 5);
      *(_DWORD *)((char *)&data[5] + _R9) = *(_R11 - 4);
      *(_DWORD *)((char *)&data[5] + _R9 + 4) = *(_R11 - 3);
      *(_DWORD *)((char *)&data[10] + _R9) |= 0x1000000u;
      v36 = *(_DWORD *)((_BYTE *)&data[10] + _R9) & 0xFDFFFFFF | (_R11[10] != 0 ? 0x2000000 : 0);
      *(_DWORD *)((char *)&data[10] + _R9) = v36;
      *(_DWORD *)((char *)&data[6] + _R9 + 4) = _R11[8];
      *(_DWORD *)((char *)&data[6] + _R9) = _R11[7];
      v37 = v6 << 12;
      v6 += v15;
      v38 = v36 ^ (v36 ^ v37) & 0xFFF000;
      *(_DWORD *)((char *)&data[10] + _R9) = v38;
      v39 = v38 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v38) & 0xFFF;
    }
    else
    {
      *((_DWORD *)&data[10] + 21 * v5) &= ~0x1000000u;
      v39 = *((_DWORD *)&data[10] + 21 * v5) & 0xFFFFF000;
    }
    ++v5;
    *(_DWORD *)((char *)&data[10] + _R9) = v39;
    _R11 += 20;
    v47 = v5;
    v40 = v49-- == 1;
    v48 = _R11;
  }
  while ( !v40 );
  if ( v6 )
  {
    v41 = v6;
    v42 = &v55;
    v43 = v53;
    do
    {
      v44 = (*v43 - bufferBaseAddr) >> 4;
      if ( v44 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v44, "unsigned", (*v43 - bufferBaseAddr) >> 4) )
        __debugbreak();
      *(_DWORD *)v42 = v44;
      ++v43;
      v42 += 32;
      --v41;
    }
    while ( v41 );
    v11 = v46;
  }
  v45 = frameData;
  frameData->numVectorFields = v5;
  frameData->numVectorSubFields = v6;
  if ( v5 )
  {
    R_UpdateGfxWrappedBuffer(&frameData->reactiveMotionVectorFieldBuffer, data, 84 * v5);
    v45 = frameData;
  }
  if ( v6 )
    R_UpdateGfxWrappedBuffer(&v45->reactiveMotionVectorSubFieldBuffer, v54, 32 * v6);
  if ( v11 )
    Com_PrintWarning(8, "At least one VectorSubField is out of buffer range\n", _R8);
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

void __fastcall R_DebugCircle(const vec3_t *center, double radius, const vec3_t *dir, const vec4_t *color)
{
  unsigned int v42; 
  char v60; 
  const vec3_t *v61; 
  __int64 v62; 
  float s; 
  float c; 
  vec3_t src; 
  vec3_t dst; 
  vec3_t end[16]; 
  char v74; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm6, dword ptr [r8+4]
    vmovss  xmm5, dword ptr [r8]
    vmovss  xmm7, dword ptr [r8+8]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm3, xmm3, xmm2
    vsqrtss xmm4, xmm3, xmm3
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovaps xmm8, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+188h+src], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+188h+src+8], xmm0
    vmovss  dword ptr [rsp+188h+src+4], xmm1
  }
  PerpendicularVector(&src, &dst);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+188h+src+8]
    vmovss  xmm6, dword ptr [rsp+188h+src+4]
    vmovss  xmm5, dword ptr [rsp+188h+dst+8]
    vmovss  xmm4, dword ptr [rsp+188h+dst+4]
    vmovss  xmm10, cs:__real@3ec90fdb
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm0, xmm2, xmm4
    vsubss  xmm7, xmm1, xmm0
    vmulss  xmm1, xmm2, dword ptr [rsp+188h+dst]
    vmulss  xmm0, xmm5, dword ptr [rsp+188h+src]
    vmulss  xmm2, xmm4, dword ptr [rsp+188h+src]
    vsubss  xmm9, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+188h+dst]
    vsubss  xmm6, xmm2, xmm1
  }
  v42 = 0;
  _RBX = &end[0].v[2];
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm0, xmm0, xmm10; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmulss  xmm5, xmm8, [rsp+188h+s]
      vmulss  xmm4, xmm8, [rsp+188h+c]
      vmulss  xmm1, xmm4, dword ptr [rsp+188h+dst]
      vmulss  xmm0, xmm7, xmm5
      vaddss  xmm2, xmm0, dword ptr [rsi]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx-8], xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+188h+dst+4]
      vmulss  xmm0, xmm9, xmm5
      vaddss  xmm3, xmm0, dword ptr [rsi+4]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm2, xmm4, dword ptr [rsp+188h+dst+8]
      vmulss  xmm1, xmm6, xmm5
      vaddss  xmm3, xmm1, dword ptr [rsi+8]
      vaddss  xmm1, xmm3, xmm2
    }
    ++v42;
    __asm
    {
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rbx-4], xmm0
    }
    _RBX += 3;
    __asm
    {
      vmovss  [rsp+188h+s], xmm5
      vmovss  [rsp+188h+c], xmm4
    }
  }
  while ( v42 < 0x10 );
  v60 = 1;
  v61 = end;
  v62 = 16i64;
  do
  {
    CG_DebugLine(v61++, &end[v60++ & 0xF], color, 0, 1);
    --v62;
  }
  while ( v62 );
  _R11 = &v74;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
  int v19; 
  signed int v20; 
  signed int v22; 
  signed int reactiveMotionDataCurrentPartTweakIndex; 
  unsigned int v26; 
  ComputeShader *reactiveMotionCalcModelsComputeShader; 
  ComputeShader *reactiveMotionCalcModelPartsComputeShader; 
  GfxShaderBufferRWView *views; 
  int v30; 
  unsigned int framea; 
  unsigned int data; 
  int v33; 
  int v34; 
  int v35; 
  unsigned int reactiveMotionClutterLayerCount; 
  unsigned int start; 
  __int64 v38[2]; 
  float v39; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  int v48; 
  int v49; 
  int v50; 
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
    LOBYTE(v30) = frameUploaded;
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
        v35 = 55552;
        reactiveMotionDataCurrentIndex = 3472;
        v34 = 3472;
        if ( (int)s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex < 3472 )
          reactiveMotionDataCurrentIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
        reactiveMotionDataCurrentPartIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
        data = reactiveMotionDataCurrentIndex;
        v11 = 55552;
        if ( reactiveMotionDataCurrentPartIndex < 55552 )
          v11 = reactiveMotionDataCurrentPartIndex;
        v33 = v11;
        R_UploadAndSetComputeConstants(state, 4, &data, 0x10u, NULL);
        R_GPU_GenerateClutter(state, state->data, 0, 1);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionClutterSModelInstanceData, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterInstanceOffsetsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionModelInfoBufferRW, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        frameUploaded = v30;
        v7 = 3472;
      }
      else
      {
        R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterIndirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      v34 = 3472;
      v12 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
      v35 = 55552;
      v13 = 3472;
      if ( v12 < 3472 )
        v13 = v12;
      v14 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
      data = v13;
      v15 = 55552;
      if ( v14 < 55552 )
        v15 = v14;
      reactiveMotionClutterLayerCount = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionClutterLayerCount;
      v33 = v15;
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
    __asm
    {
      vmovsd  xmm0, qword ptr cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.windDir; ReactiveMotionParams g_backendReactiveMotionParams
      vmovaps xmm1, xmmword ptr cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.windAreaScale; ReactiveMotionParams g_backendReactiveMotionParams
    }
    numEffectors = g_backendReactiveMotionParams.numEffectors;
    v19 = 55552;
    v39 = g_backendReactiveMotionParams.windDir.v[2];
    v20 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentIndex;
    __asm
    {
      vmovsd  qword ptr [rsp+2E0h+var_27C], xmm0
      vmovss  xmm0, cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.windStrength; ReactiveMotionParams g_backendReactiveMotionParams
    }
    if ( v20 < 3472 )
      v7 = v20;
    v47 = g_backendReactiveMotionParams.numEffectors;
    v22 = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartIndex;
    __asm
    {
      vmovss  dword ptr [rsp+2E0h+var_284+4], xmm0
      vmovss  xmm0, cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.effectorStrengthScale; ReactiveMotionParams g_backendReactiveMotionParams
    }
    if ( v22 < 55552 )
      v19 = v22;
    v48 = v7;
    reactiveMotionDataCurrentPartTweakIndex = s_reactiveMotionGlobFrameData.frameData[v2].reactiveMotionDataCurrentPartTweakIndex;
    __asm
    {
      vmovaps xmmword ptr [rsp+2E0h+var_278+8], xmm1
      vmovss  xmm1, cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.velocityTailScale; ReactiveMotionParams g_backendReactiveMotionParams
    }
    if ( reactiveMotionDataCurrentPartTweakIndex < 55552 )
      v8 = reactiveMotionDataCurrentPartTweakIndex;
    v49 = v19;
    numVectorFields = s_reactiveMotionGlobFrameData.frameData[v2].numVectorFields;
    v26 = 0;
    numVectorSubFields = s_reactiveMotionGlobFrameData.frameData[v2].numVectorSubFields;
    v43 = s_reactivemotion_aab_X;
    v44 = s_reactivemotion_aab_Y;
    v45 = s_reactivemotion_aab_Z;
    v50 = v8;
    v46 = (unsigned int)out;
    __asm
    {
      vmovss  [rbp+1E0h+var_260], xmm1
      vmovss  [rbp+1E0h+var_25C], xmm0
    }
    while ( v26 < numEffectors )
    {
      Copy_ReactiveMotionEffector(&out[v26], &g_backendReactiveMotionParams.effectors[v26]);
      if ( ++v26 >= 0xF )
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
    R_UploadAndSetComputeConstants(state, 1, (char *)v38 + 4, 0x240u, NULL);
    if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
      Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
    if ( bUsesClutterPass )
      R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0);
    else
      R_Dispatch(state, (unsigned int)(v48 + 63) >> 6, 1u, 1u);
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
    R_UploadAndSetComputeConstants(state, 1, (char *)v38 + 4, 0x240u, NULL);
    if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
      Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
    if ( bUsesClutterPass )
      R_DispatchIndirect(state, s_reactiveMotionGlobFrameData.reactiveMotionIndirectArgs.buffer, 0x20u);
    else
      R_Dispatch(state, (unsigned int)(v49 + 63) >> 6, 1u, 1u);
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
  vec3_t origin; 

  _RSI = vel;
  _RBX = pos;
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
    _RDI = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v6;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  dword ptr [rsp+68h+origin], xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+68h+origin+4], xmm1
      vmovss  xmm2, dword ptr [rbx+8]
      vmovss  xmm0, cs:s_reactiveMotionGlobFrameData.defaultActorRadius
      vmovss  dword ptr [rdi+0Ch], xmm0
      vaddss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rsp+68h+origin+8], xmm0
    }
    ReactiveMotionSphere_SetPos(_RDI, &origin);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi]
      vmovss  xmm5, dword ptr [rsi+4]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm4, xmm1, xmm1
      vcmpless xmm0, xmm4, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm4, xmm2, xmm0
      vdivss  xmm1, xmm2, xmm1
      vmulss  xmm0, xmm1, xmm3
      vmovss  dword ptr [rdi+10h], xmm0
      vmulss  xmm1, xmm1, xmm5
      vmovss  dword ptr [rdi+14h], xmm1
    }
    _RDI->velDir.v[2] = 0.0;
    __asm
    {
      vmovss  xmm2, cs:s_reactiveMotionGlobFrameData.defaultActorVelocityMax
      vminss  xmm0, xmm2, xmm4
      vdivss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rdi+1Ch], xmm1
    }
    _RDI->entIndex = entIndex;
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
  __int64 result; 
  float v17; 
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
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+modelTransformScale]
    vmovss  [rsp+0C8h+var_88], xmm0
  }
  R_ReactiveMotion_GetReactiveMotionModelInfoGPU(frameData, smodelInstanceIndex, reactiveMotionDataCurrentPartIndex, reactiveMotionDataCurrentPartIndex, v6, 0, model, modelTransform, v17, &modelInfo);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+var_78.windParams]
    vmovups ymm1, ymmword ptr [rsp+0C8h+var_78.modelBoundsMidPoint]
  }
  result = reactiveMotionDataCurrentPartIndex;
  _RCX = &frameData->reactiveMotionModelInfo[v6];
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymmword ptr [rcx+20h], ymm1
  }
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
  unsigned int basePartIdx_tweakOffset; 
  unsigned int smodelInstanceIndex_numParts_flags; 
  float v17; 
  ReactiveMotionModelInfoGpu modelInfo; 

  __asm { vmovss  xmm0, cs:__real@3f800000 }
  _RBX = clutterModelInfo;
  __asm { vmovss  [rsp+0A8h+var_68], xmm0 }
  R_ReactiveMotion_GetReactiveMotionModelInfoGPU(&s_reactiveMotionGlobFrameData.frameData[frame], 0, 0, s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionDataCurrentPartIndex + s_reactiveMotionGlobFrameData.frameData[frame].reactiveMotionDataCurrentModelPartOffset, 0, 4u, model, NULL, v17, &modelInfo);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+var_58.windParams]
    vmovss  xmm1, dword ptr [rsp+0A8h+var_58.windParams+4]
  }
  basePartIdx_tweakOffset = modelInfo.basePartIdx_tweakOffset;
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+var_58.windParams+8]
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+var_58.modelBoundsHalfSize]
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  xmm1, [rsp+0A8h+var_58.modelRadius]
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm1, dword ptr [rsp+0A8h+var_58.modelBoundsHalfSize+4]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+var_58.modelBoundsHalfSize+8]
    vmovss  dword ptr [rbx+18h], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+var_58.modelBoundsMidPoint]
    vmovss  dword ptr [rbx+14h], xmm1
    vmovss  xmm1, dword ptr [rsp+0A8h+var_58.modelBoundsMidPoint+4]
  }
  _RBX->basePartIdx_tweakOffset = basePartIdx_tweakOffset;
  smodelInstanceIndex_numParts_flags = modelInfo.smodelInstanceIndex_numParts_flags;
  __asm
  {
    vmovss  dword ptr [rbx+20h], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+var_58.modelBoundsMidPoint+8]
    vmovss  dword ptr [rbx+28h], xmm0
    vmovss  dword ptr [rbx+24h], xmm1
  }
  _RBX->smodelInstanceIndex_numParts_flags = smodelInstanceIndex_numParts_flags;
  _RBX->modelPartOffsetQW = modelInfo.modelPartOffsetQW;
  _RBX->modelPartTweakOffsetQW = modelInfo.modelPartTweakOffsetQW;
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
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  char v18; 

  _RBX = model;
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
  v14 = reactiveMotionInfo->numParts - 1;
  if ( v14 > 15 )
    v14 = 15;
  if ( v14 < 0 )
    v14 = 0;
  v15 = flags | 1;
  v16 = modelInfo->smodelInstanceIndex_numParts_flags ^ (modelInfo->smodelInstanceIndex_numParts_flags ^ (v14 << 24)) & 0xF000000;
  modelInfo->smodelInstanceIndex_numParts_flags = v16;
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  if ( (reactiveMotionInfo->flags & 1) == 0 )
    v15 = flags;
  v18 = v15 | 2;
  __asm { vcomiss xmm0, cs:__real@43960000 }
  modelInfo->smodelInstanceIndex_numParts_flags = v16 & 0xFFFFFFF | ((v15 | 2) << 28);
  modelInfo->modelPartOffsetQW = ReactiveMotionInplaceBuffer::GetQWOffset(&s_reactiveMotionGlobFrameData.inplaceBuffers[1], (unsigned __int64)reactiveMotionInfo->modelParts, 32i64 * reactiveMotionInfo->numParts);
  modelInfo->basePartIdx_tweakOffset = basePartIndex;
  if ( (v18 & 1) != 0 )
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
  const dvar_t *v8; 
  __int64 v10; 
  __int64 v11; 
  bool enabled; 
  GfxReactiveMotionFrameData *v13; 
  __int64 reactiveMotionDataCurrentIndex; 
  unsigned __int16 v15; 
  unsigned int firstStaticObjectsIndirectionIndex; 
  unsigned int lastStaticObjectsIndirectionIndex; 
  bool bUsesCpuCalc; 
  __int64 v45; 
  unsigned int reactiveMotionDataCurrentPartIndex; 
  unsigned int v47; 
  ReactiveMotionModelInfo *reactiveMotionInfo; 
  __int64 v64; 
  PackedQuatDec3n v65; 
  float v98; 
  bool v99; 
  float outScale; 
  float binormalSign; 
  vec3_t out; 
  __int128 v103; 
  tmat44_t<vec4_t> axis; 
  vec3_t in; 
  vec3_t v106; 
  vector4 modelTransform; 
  GfxPlacement outPlacement; 
  vec4_t outQuat; 
  vec4_t v110; 
  vec3_t start[16]; 
  vec4_t in2[16]; 

  v8 = DVARBOOL_r_reactiveMotionPivotDebugDraw;
  v10 = smodelInstanceIndex;
  v11 = frame;
  if ( !DVARBOOL_r_reactiveMotionPivotDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPivotDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  enabled = v8->current.enabled;
  v99 = enabled;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2666, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !model->reactiveMotionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 2667, ASSERT_TYPE_ASSERT, "(model->reactiveMotionInfo)", (const char *)&queryFormat, "model->reactiveMotionInfo") )
    __debugbreak();
  if ( (model->flags & 0x28000) == 0 )
  {
    v13 = &s_reactiveMotionGlobFrameData.frameData[v11];
    reactiveMotionDataCurrentIndex = v13->reactiveMotionDataCurrentIndex;
    v13->reactiveMotionDataCurrentIndex = reactiveMotionDataCurrentIndex + 1;
    if ( (unsigned int)reactiveMotionDataCurrentIndex >= 0xD90 )
      R_WarnOncePerFrame(R_WARN_REACTIVEMOTION_CBS, 3472i64);
    if ( (_DWORD)v10 != -1 )
    {
      if ( (unsigned int)reactiveMotionDataCurrentIndex < 0xD90 )
        v15 = truncate_cast<unsigned short,unsigned int>(reactiveMotionDataCurrentIndex);
      else
        v15 = -1;
      v13->reactiveMotionDataIndices[v10] = v15;
      firstStaticObjectsIndirectionIndex = v13->firstStaticObjectsIndirectionIndex;
      if ( firstStaticObjectsIndirectionIndex > (unsigned int)v10 )
        firstStaticObjectsIndirectionIndex = v10;
      v13->firstStaticObjectsIndirectionIndex = firstStaticObjectsIndirectionIndex;
      lastStaticObjectsIndirectionIndex = v13->lastStaticObjectsIndirectionIndex;
      if ( (unsigned int)v10 > lastStaticObjectsIndirectionIndex )
        lastStaticObjectsIndirectionIndex = v10;
      v13->lastStaticObjectsIndirectionIndex = lastStaticObjectsIndirectionIndex;
    }
    if ( (unsigned int)reactiveMotionDataCurrentIndex < 0xD90 )
    {
      bUsesCpuCalc = v13->bUsesCpuCalc;
      __asm
      {
        vmovaps [rsp+3B8h+var_48], xmm6
        vmovaps [rsp+3B8h+var_58], xmm7
        vmovaps [rsp+3B8h+var_68], xmm8
        vmovaps [rsp+3B8h+var_78], xmm9
        vmovaps [rsp+3B8h+var_88], xmm10
      }
      if ( (enabled || bUsesCpuCalc) && (_DWORD)v10 != -1 )
      {
        R_StaticModelInstance_GetPlacement(v10, &outPlacement, &outScale);
        QuatToAxis(&outPlacement.quat, (tmat33_t<vec3_t> *)&axis);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+3B8h+axis]
          vmovss  xmm6, [rsp+3B8h+outScale]
        }
        HIDWORD(v103) = 0;
        __asm
        {
          vmovups xmm9, xmmword ptr [rsp+70h]
          vmovss  xmm9, xmm9, xmm0
          vmovss  xmm0, dword ptr [rsp+3B8h+axis+0Ch]
          vinsertps xmm9, xmm9, dword ptr [rsp+3B8h+axis+4], 10h
          vinsertps xmm9, xmm9, dword ptr [rsp+3B8h+axis+8], 20h
          vmovups xmmword ptr [rsp+70h], xmm9
        }
        HIDWORD(v103) = 0;
        __asm
        {
          vmovups xmm10, xmmword ptr [rsp+70h]
          vmovss  xmm10, xmm10, xmm0
          vmovss  xmm0, dword ptr [rsp+3B8h+axis+18h]
          vinsertps xmm10, xmm10, dword ptr [rsp+3B8h+axis+10h], 10h
          vinsertps xmm10, xmm10, dword ptr [rsp+3B8h+axis+14h], 20h
          vmovups xmmword ptr [rsp+70h], xmm10
        }
        HIDWORD(v103) = 0;
        __asm
        {
          vmovups xmm7, xmmword ptr [rsp+70h]
          vmovss  xmm7, xmm7, xmm0
          vinsertps xmm7, xmm7, dword ptr [rsp+3B8h+axis+1Ch], 10h
          vinsertps xmm7, xmm7, dword ptr [rsp+3B8h+axis+20h], 20h
          vmovss  xmm0, dword ptr [rsp+3B8h+outPlacement.origin]
          vmovups xmmword ptr [rsp+70h], xmm7
        }
        HIDWORD(v103) = 0;
        __asm
        {
          vmovups xmm8, xmmword ptr [rsp+70h]
          vmovss  xmm8, xmm8, xmm0
          vinsertps xmm8, xmm8, dword ptr [rsp+3B8h+outPlacement.origin+4], 10h
          vinsertps xmm8, xmm8, dword ptr [rsp+3B8h+outPlacement.origin+8], 20h
          vmovups xmmword ptr [rsp+70h], xmm8
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; float4 const g_1000
          vmovups xmm1, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100
          vmovss  xmm6, cs:__real@3f800000
          vmovdqa xmmword ptr [rsp+3B8h+axis+10h], xmm1
          vmovups xmm1, xmmword ptr cs:?g_0001@@3Ufloat4@@B.v; float4 const g_0001
          vmovdqa xmmword ptr [rsp+3B8h+axis], xmm0
          vmovups xmm0, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010
          vmovdqa xmmword ptr [rsp+3B8h+axis+20h], xmm0
          vmovups ymm0, ymmword ptr [rsp+3B8h+axis]
          vmovups ymmword ptr [rsp+3B8h+var_2D8.baseclass_0.x.v], ymm0
          vmovups xmm10, xmmword ptr [rsp+3B8h+var_2D8.baseclass_0.y.v]
          vmovups xmm9, xmmword ptr [rsp+3B8h+var_2D8.baseclass_0.x.v]
          vmovdqa xmmword ptr [rsp+3B8h+axis+30h], xmm1
          vmovups ymm1, ymmword ptr [rsp+3B8h+axis+20h]
          vmovups ymmword ptr [rsp+3B8h+var_2D8.baseclass_0.z.v], ymm1
          vmovups xmm8, xmmword ptr [rsp+3B8h+var_2D8.w.v]
          vmovups xmm7, xmmword ptr [rsp+3B8h+var_2D8.baseclass_0.z.v]
          vmovss  [rsp+3B8h+outScale], xmm6
        }
      }
      v45 = 0i64;
      if ( !bUsesCpuCalc )
      {
        reactiveMotionDataCurrentPartIndex = v13->reactiveMotionDataCurrentPartIndex;
        v47 = reactiveMotionDataCurrentPartIndex + model->reactiveMotionInfo->numParts;
        if ( v47 > 0xD900 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 1815, ASSERT_TYPE_ASSERT, "(endPart <= (( 3 * 1024 + 400 ) * 16))", (const char *)&queryFormat, "endPart <= MAX_REACTIVEMOTION_PARTS") )
          __debugbreak();
        v13->reactiveMotionDataCurrentPartIndex = v47;
        __asm { vmovss  [rsp+3B8h+var_378], xmm6 }
        R_ReactiveMotion_GetReactiveMotionModelInfoGPU(v13, v10, reactiveMotionDataCurrentPartIndex, reactiveMotionDataCurrentPartIndex, reactiveMotionDataCurrentIndex, 0, model, &modelTransform, v98, (ReactiveMotionModelInfoGpu *)&modelTransform);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+3B8h+var_2D8.baseclass_0.x.v]
          vmovups ymm1, ymmword ptr [rsp+3B8h+var_2D8.baseclass_0.z.v]
        }
        _RAX = &v13->reactiveMotionModelInfo[reactiveMotionDataCurrentIndex];
        __asm
        {
          vmovups ymmword ptr [rax], ymm0
          vmovups ymmword ptr [rax+20h], ymm1
          vmovss  xmm6, [rsp+3B8h+outScale]
        }
      }
      if ( v99 )
      {
        __asm { vmovss  xmm1, cs:__real@40a00000 }
        reactiveMotionInfo = model->reactiveMotionInfo;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr [rsp+3B8h+axis+20h], xmm7
          vmulss  xmm2, xmm6, dword ptr [rsp+3B8h+axis+24h]
          vmovss  dword ptr [rsp+3B8h+in], xmm1
          vmovss  dword ptr [rsp+3B8h+var_2E8+4], xmm1
          vmovss  dword ptr [rsp+3B8h+var_348+8], xmm1
          vmovss  dword ptr [rsp+3B8h+in+4], xmm0
          vmovss  dword ptr [rsp+3B8h+in+8], xmm0
          vmovss  dword ptr [rsp+3B8h+var_2E8], xmm0
          vmovss  dword ptr [rsp+3B8h+var_2E8+8], xmm0
          vmovss  dword ptr [rsp+3B8h+var_348], xmm0
          vmovss  dword ptr [rsp+3B8h+var_348+4], xmm0
          vmovaps xmm1, xmm6
          vshufps xmm1, xmm1, xmm1, 0
          vmulps  xmm0, xmm1, xmm9
          vmovups xmmword ptr [rsp+3B8h+axis], xmm0
          vmulss  xmm0, xmm7, xmm6
          vmulps  xmm1, xmm1, xmm10
          vmovss  dword ptr [rsp+3B8h+axis+20h], xmm0
          vmulss  xmm0, xmm6, dword ptr [rsp+3B8h+axis+2Ch]
          vmovups xmmword ptr [rsp+3B8h+axis+10h], xmm1
          vmulss  xmm1, xmm6, dword ptr [rsp+3B8h+axis+28h]
          vmovaps xmmword ptr [rsp+3B8h+var_2D8.baseclass_0.x.v], xmm9
          vmovaps xmmword ptr [rsp+3B8h+var_2D8.baseclass_0.y.v], xmm10
          vmovaps xmmword ptr [rsp+3B8h+var_2D8.baseclass_0.z.v], xmm7
          vmovaps xmmword ptr [rsp+3B8h+var_2D8.w.v], xmm8
          vmovss  dword ptr [rsp+3B8h+axis+2Ch], xmm0
          vmovss  dword ptr [rsp+3B8h+axis+24h], xmm2
          vmovss  dword ptr [rsp+3B8h+axis+28h], xmm1
          vmovaps xmmword ptr [rsp+3B8h+axis+30h], xmm8
        }
        if ( reactiveMotionInfo->numParts )
        {
          __asm { vmovss  xmm6, cs:__real@40400000 }
          do
          {
            v64 = (__int64)&reactiveMotionInfo->modelParts[(unsigned int)v45];
            v65.packed = *(unsigned int *)(v64 + 28);
            if ( *(_WORD *)(v64 + 14) == 0xFFFF )
            {
              QuatDec3nToUnitQuat(v65, &outPlacement.quat, &binormalSign);
              AxisComponentsToQuat((const vec3_t *)&modelTransform, (const vec3_t *)&modelTransform.y, (const vec3_t *)&modelTransform.z, &v110);
              QuatMultiply(&outPlacement.quat, &v110, &in2[(unsigned int)v45]);
              _RDI = &start[v45];
              MatrixTransformPosition44((const vec3_t *)(v64 + 16), (const tmat44_t<vec4_t> *)&modelTransform, _RDI);
            }
            else
            {
              QuatDec3nToUnitQuat(v65, &outQuat, &binormalSign);
              QuatMultiply(&outQuat, &in2[*(unsigned __int16 *)(v64 + 14)], &in2[(unsigned int)v45]);
              QuatTransform(&in2[*(unsigned __int16 *)(v64 + 14)], (const vec3_t *)(v64 + 16), &out);
              __asm
              {
                vmovss  xmm3, [rsp+3B8h+outScale]
                vmulss  xmm1, xmm3, dword ptr [rsp+3B8h+out]
                vmulss  xmm0, xmm3, dword ptr [rsp+3B8h+out+8]
              }
              _RDI = &start[v45];
              __asm
              {
                vaddss  xmm2, xmm1, dword ptr [rsp+rcx*4+3B8h+start]
                vmulss  xmm1, xmm3, dword ptr [rsp+3B8h+out+4]
                vmovss  dword ptr [rdi], xmm2
                vaddss  xmm2, xmm1, dword ptr [rsp+rcx*4+3B8h+start+4]
                vmovss  dword ptr [rdi+4], xmm2
                vaddss  xmm1, xmm0, dword ptr [rsp+rcx*4+3B8h+start+8]
                vmovss  dword ptr [rdi+8], xmm1
              }
            }
            QuatTransform(&in2[(unsigned int)v45], &in, &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+3B8h+out]
              vaddss  xmm1, xmm0, dword ptr [rdi]
              vmovss  xmm2, dword ptr [rsp+3B8h+out+4]
              vaddss  xmm0, xmm2, dword ptr [rdi+4]
              vmovss  dword ptr [rsp+3B8h+out], xmm1
              vmovss  xmm1, dword ptr [rsp+3B8h+out+8]
              vaddss  xmm2, xmm1, dword ptr [rdi+8]
              vmovss  dword ptr [rsp+3B8h+out+8], xmm2
              vmovss  dword ptr [rsp+3B8h+out+4], xmm0
            }
            R_AddDebugLine(&frontEndDataOut->debugGlobals, _RDI, &out, &colorRed);
            QuatTransform(&in2[(unsigned int)v45], &v106, &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+3B8h+out]
              vaddss  xmm1, xmm0, dword ptr [rdi]
              vmovss  xmm2, dword ptr [rsp+3B8h+out+4]
              vaddss  xmm0, xmm2, dword ptr [rdi+4]
              vmovss  dword ptr [rsp+3B8h+out], xmm1
              vmovss  xmm1, dword ptr [rsp+3B8h+out+8]
              vaddss  xmm2, xmm1, dword ptr [rdi+8]
              vmovss  dword ptr [rsp+3B8h+out+8], xmm2
              vmovss  dword ptr [rsp+3B8h+out+4], xmm0
            }
            R_AddDebugLine(&frontEndDataOut->debugGlobals, _RDI, &out, &colorGreen);
            QuatTransform(&in2[(unsigned int)v45], (const vec3_t *)&v103, &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+3B8h+out]
              vaddss  xmm1, xmm0, dword ptr [rdi]
              vmovss  xmm2, dword ptr [rsp+3B8h+out+4]
              vaddss  xmm0, xmm2, dword ptr [rdi+4]
              vmovss  dword ptr [rsp+3B8h+out], xmm1
              vmovss  xmm1, dword ptr [rsp+3B8h+out+8]
              vaddss  xmm2, xmm1, dword ptr [rdi+8]
              vmovss  dword ptr [rsp+3B8h+out+8], xmm2
              vmovss  dword ptr [rsp+3B8h+out+4], xmm0
            }
            R_AddDebugLine(&frontEndDataOut->debugGlobals, _RDI, &out, &colorBlue);
            MatrixTransformPosition44((const vec3_t *)v64, &axis, &out);
            __asm { vmovaps xmm2, xmm6; size }
            R_AddDebugStar(&frontEndDataOut->debugGlobals, &out, *(const float *)&_XMM2, &colorCyan);
            v45 = (unsigned int)(v45 + 1);
          }
          while ( (unsigned int)v45 < reactiveMotionInfo->numParts );
        }
      }
      __asm
      {
        vmovaps xmm9, [rsp+3B8h+var_78]
        vmovaps xmm8, [rsp+3B8h+var_68]
        vmovaps xmm7, [rsp+3B8h+var_58]
        vmovaps xmm6, [rsp+3B8h+var_48]
        vmovaps xmm10, [rsp+3B8h+var_88]
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
  bool v5; 
  signed __int64 v6; 
  signed __int64 v7; 
  signed __int64 v8; 
  __int64 v30; 
  vec3_t to; 
  vec3_t from; 
  void *retaddr; 

  _RAX = &retaddr;
  v30 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R15 = cameraPos;
  v5 = s_numReactiveMotionSpheres[0] > 1;
  v6 = s_numReactiveMotionSpheres[0];
  v7 = 0i64;
  if ( s_numReactiveMotionSpheres[0] > 0 )
  {
    v8 = 0i64;
    do
    {
      _RDI = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v8;
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3519, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere", v30) )
        __debugbreak();
      GetSecureVec3(&_RDI->pos, &to, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vmovss  xmm5, dword ptr [rsp+0A8h+to]
        vsubss  xmm4, xmm0, xmm5
        vmovss  xmm1, dword ptr [r15+4]
        vmovss  xmm6, dword ptr [rsp+0A8h+to+4]
        vsubss  xmm2, xmm1, xmm6
        vmovss  xmm0, dword ptr [r15+8]
        vmovss  xmm7, dword ptr [rsp+0A8h+to+8]
        vsubss  xmm3, xmm0, xmm7
        vmulss  xmm1, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rdi+20h], xmm2
      }
      if ( v5 )
      {
        __asm
        {
          vmovss  dword ptr [rdi], xmm5
          vmovss  dword ptr [rdi+4], xmm6
          vmovss  dword ptr [rdi+8], xmm7
        }
      }
      memset(&to, 0, sizeof(to));
      ++v8;
    }
    while ( v8 < v6 );
    v7 = 0i64;
  }
  if ( v5 )
  {
    qsort(&s_reactiveMotionSpheres + 128 * s_curReactiveMotionSphereFrame, v6, 0x30ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareReactiveMotionSpheres);
    if ( v6 > 0 )
    {
      do
      {
        _RDX = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v7;
        __asm
        {
          vmovss  xmm0, dword ptr [rdx]
          vmovss  dword ptr [rsp+0A8h+from], xmm0
          vmovss  xmm1, dword ptr [rdx+4]
          vmovss  dword ptr [rsp+0A8h+from+4], xmm1
          vmovss  xmm0, dword ptr [rdx+8]
          vmovss  dword ptr [rsp+0A8h+from+8], xmm0
        }
        SetSecureVec3(&from, &_RDX->pos, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
        memset(&from, 0, sizeof(from));
        ++v7;
      }
      while ( v7 < v6 );
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
R_ReactiveMotion_Update
==============
*/

void __fastcall R_ReactiveMotion_Update(LocalClientNum_t localClientNum, const float gameTimeSec, double deltaGameTimeSec, const vec3_t *clientPos, const vec3_t *clientVel)
{
  char v29; 
  const dvar_t *v40; 
  unsigned int v59; 
  char v88; 
  unsigned int v102; 
  __int64 v103; 
  __int64 v104; 
  const dvar_t *v113; 
  vec3_t outOrigin; 
  vec3_t center; 
  vec3_t to; 
  __int64 v133; 
  vec3_t from; 
  vec3_t dir; 
  vec3_t v136; 
  vec3_t v137; 
  WindParams outParams; 
  vec4_t color; 
  char v140; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RBX = clientPos;
  __asm { vmovaps xmm6, xmm2 }
  _R14 = localClientNum;
  CG_Wind_GetDefaultParams(&outParams);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+0B0h+outParams.defaultDir]
    vmovss  dword ptr cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windDir, xmm4; ReactiveMotionParams g_reactiveMotionParams
    vmovss  xmm0, dword ptr [rbp+0B0h+outParams.defaultDir+4]
    vmovss  dword ptr cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windDir+4, xmm0; ReactiveMotionParams g_reactiveMotionParams
    vmovss  xmm3, dword ptr [rbp+0B0h+outParams.defaultDir+8]
    vmovss  dword ptr cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windDir+8, xmm3; ReactiveMotionParams g_reactiveMotionParams
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm14, cs:__real@3f800000
    vsubss  xmm0, xmm3, xmm14
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 927, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( g_reactiveMotionParams.windDir ))", (const char *)&queryFormat, "Vec3IsNormalized( g_reactiveMotionParams.windDir )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+0B0h+outParams.defaultStrength]
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windStrength, xmm0; ReactiveMotionParams g_reactiveMotionParams
    vmovss  xmm1, [rbp+0B0h+outParams.defaultAreaScale]
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windAreaScale, xmm1; ReactiveMotionParams g_reactiveMotionParams
    vmovss  xmm0, [rbp+0B0h+outParams.defaultAmplitudeScale]
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windAmplitudeScale, xmm0; ReactiveMotionParams g_reactiveMotionParams
    vmovss  xmm1, [rbp+0B0h+outParams.defaultNoiseStrength]
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windNoiseScale, xmm1; ReactiveMotionParams g_reactiveMotionParams
    vmulss  xmm0, xmm6, [rbp+0B0h+outParams.defaultFrequencyScale]
    vaddss  xmm0, xmm0, cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windTimeSec; X
    vmovss  xmm1, cs:__real@4728c000; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windTimeSec, xmm0; ReactiveMotionParams g_reactiveMotionParams }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 937, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tAccessing networked dvars must be done from the main thread", "Sys_IsMainThread()") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  dword ptr [rsp+1B0h+from], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+1B0h+from+4], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+0B0h+from+8], xmm0
  }
  v40 = DVARFLT_r_reactiveMotionPlayerHeightAdjust;
  if ( !DVARFLT_r_reactiveMotionPlayerHeightAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerHeightAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0B0h+from+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+0B0h+from+8], xmm1
  }
  _RDI = DVARFLT_r_reactiveMotionVelocityTailScale;
  if ( !DVARFLT_r_reactiveMotionVelocityTailScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionVelocityTailScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.velocityTailScale, xmm0; ReactiveMotionParams g_reactiveMotionParams
  }
  _RDI = DVARFLT_r_reactiveMotionEffectorStrengthScale;
  if ( !DVARFLT_r_reactiveMotionEffectorStrengthScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionEffectorStrengthScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.effectorStrengthScale, xmm0; ReactiveMotionParams g_reactiveMotionParams
  }
  R_ReactiveMotion_SortEffectors(_RBX);
  ReactiveMotionEffector_GetPos(g_reactiveMotionParams.effectors, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1B0h+from]
    vsubss  xmm3, xmm0, dword ptr [rsp+1B0h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+1B0h+from+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+1B0h+outOrigin+4]
    vmovss  xmm0, dword ptr [rbp+0B0h+from+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+1B0h+outOrigin+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
  }
  _R12 = &s_reactiveMotionGlobFrameData;
  v59 = 0;
  __asm { vcomiss xmm4, cs:__real@45610000 }
  SetSecureVec3(&from, &g_reactiveMotionParams.effectors[0].pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
  _RAX = clientVel;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm3, dword ptr [rax+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
  }
  _RDI = DVARFLT_r_reactiveMotionPlayerRadius;
  if ( !DVARFLT_r_reactiveMotionPlayerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm13, dword ptr [rdi+28h] }
  _RBX = &s_reactiveMotionGlobFrameData.clientData[0].avgVelPeak;
  _RDI = DVARFLT_r_reactiveMotionPlayerPushFrequency;
  if ( !DVARFLT_r_reactiveMotionPlayerPushFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerPushFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm12, dword ptr [rdi+28h] }
  _RDI = DVARFLT_r_reactiveMotionPlayerPushAmplitude;
  if ( !DVARFLT_r_reactiveMotionPlayerPushAmplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerPushAmplitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm11, dword ptr [rdi+28h] }
  _RDI = DVARFLT_r_reactiveMotionPlayerPushDecay;
  if ( !DVARFLT_r_reactiveMotionPlayerPushDecay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionPlayerPushDecay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm10, dword ptr [rdi+28h]
    vmovss  xmm6, dword ptr [r12+r14*8]
    vmovss  xmm9, dword ptr [rbx+r14*8]
    vmovss  xmm1, cs:__real@3dcccccd; min
    vcomiss xmm7, xmm1
  }
  if ( v29 )
    __asm { vmovaps xmm0, xmm1 }
  else
    __asm { vminss  xmm0, xmm7, xmm14 }
  __asm
  {
    vsubss  xmm0, xmm0, xmm6
    vmulss  xmm2, xmm0, cs:__real@3c23d70a
    vaddss  xmm0, xmm2, xmm6; val
    vmovaps xmm2, xmm14; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm8, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v29 | v88 )
  {
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm9, xmm0
    }
  }
  __asm
  {
    vmulss  xmm1, xmm6, xmm10
    vminss  xmm3, xmm1, xmm9
    vsubss  xmm2, xmm9, xmm3
    vdivss  xmm7, xmm2, xmm9
    vmovss  dword ptr [rbx+r14*8], xmm9
    vmovss  dword ptr [r12+r14*8], xmm3
    vmulss  xmm1, xmm7, cs:__real@40c90fdb
    vmulss  xmm0, xmm1, xmm12; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm7, cs:__real@c0400000; X
  }
  expf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm2, xmm6, xmm0
    vmulss  xmm1, xmm8, xmm11
    vmulss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm13, xmm2
    vmovss  cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.effectors.radius, xmm0; ReactiveMotionParams g_reactiveMotionParams
    vxorps  xmm1, xmm1, xmm1
    vmovups xmmword ptr cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.effectors.velDir, xmm1; ReactiveMotionParams g_reactiveMotionParams
  }
  v102 = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
  v103 = s_numReactiveMotionSpheres[0];
  if ( s_numReactiveMotionSpheres[0] > 0 )
  {
    v104 = 0i64;
    do
    {
      if ( v102 >= 0xF )
        break;
      _RBX = &g_reactiveMotionParams.effectors[v102++];
      _RDI = &s_reactiveMotionSpheres + 128 * (__int64)s_curReactiveMotionSphereFrame + v104;
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3519, ASSERT_TYPE_ASSERT, "(reactiveMotionSphere)", (const char *)&queryFormat, "reactiveMotionSphere") )
        __debugbreak();
      GetSecureVec3(&_RDI->pos, &to, s_reactivemotionsphere_aab_X, s_reactivemotionsphere_aab_Y, s_reactivemotionsphere_aab_Z);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3501, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
        __debugbreak();
      SetSecureVec3(&to, &_RBX->pos, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
      _RBX->radius = _RDI->radius;
      _RBX->velDir.v[0] = _RDI->velDir.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+14h]
        vmovss  dword ptr [rbx+14h], xmm0
        vmovss  xmm1, dword ptr [rdi+18h]
        vmovss  dword ptr [rbx+18h], xmm1
      }
      _RBX->velMag = _RDI->velMag;
      memset(&to, 0, sizeof(to));
      ++v104;
    }
    while ( v104 < v103 );
    v59 = 0;
  }
  g_reactiveMotionParams.numEffectors = v102;
  s_numReactiveMotionSpheres[0] = 0;
  s_curReactiveMotionSphereFrame = 0;
  _RDI = DVARFLT_r_reactiveMotionActorRadius;
  if ( !DVARFLT_r_reactiveMotionActorRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionActorRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  cs:s_reactiveMotionGlobFrameData.defaultActorRadius, xmm0
  }
  _RDI = DVARFLT_r_reactiveMotionActorVelocityMax;
  if ( !DVARFLT_r_reactiveMotionActorVelocityMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionActorVelocityMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  cs:s_reactiveMotionGlobFrameData.defaultActorVelocityMax, xmm0
  }
  v113 = DVARBOOL_r_reactiveMotionEffectorDebugDraw;
  if ( !DVARBOOL_r_reactiveMotionEffectorDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_reactiveMotionEffectorDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v113);
  if ( v113->current.enabled )
  {
    __asm
    {
      vmovss  dword ptr [rbp+0B0h+dir], xmm14
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbp+0B0h+dir+4], xmm0
      vmovss  dword ptr [rbp+0B0h+dir+8], xmm0
      vmovss  dword ptr [rbp+0B0h+var_118], xmm0
      vmovss  dword ptr [rbp+0B0h+var_118+4], xmm14
      vmovss  dword ptr [rbp+0B0h+var_118+8], xmm0
      vmovss  dword ptr [rbp+0B0h+var_108], xmm0
      vmovss  dword ptr [rbp+0B0h+var_108+4], xmm0
      vmovss  dword ptr [rbp+0B0h+var_108+8], xmm14
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+0B0h+color], xmm0
    }
    if ( g_reactiveMotionParams.numEffectors )
    {
      do
      {
        _RDI = &g_reactiveMotionParams.effectors[v59];
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reactive_motion.cpp", 3482, ASSERT_TYPE_ASSERT, "(reactiveMotionEffector)", (const char *)&queryFormat, "reactiveMotionEffector") )
          __debugbreak();
        GetSecureVec3(&_RDI->pos, &center, s_reactivemotion_aab_X, s_reactivemotion_aab_Y, s_reactivemotion_aab_Z);
        __asm { vmovss  xmm1, dword ptr [rdi+0Ch]; radius }
        R_DebugCircle(&center, *(double *)&_XMM1, &dir, &color);
        __asm { vmovss  xmm1, dword ptr [rdi+0Ch]; radius }
        R_DebugCircle(&center, *(double *)&_XMM1, &v136, &color);
        __asm { vmovss  xmm1, dword ptr [rdi+0Ch]; radius }
        R_DebugCircle(&center, *(double *)&_XMM1, &v137, &color);
        ++v59;
      }
      while ( v59 < g_reactiveMotionParams.numEffectors );
    }
    memset(&center, 0, sizeof(center));
  }
  _R11 = &v140;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
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
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.windDir; ReactiveMotionParams g_reactiveMotionParams
    vmovups ymm1, ymmword ptr cs:?g_reactiveMotionParams@@3UReactiveMotionParams@@A.velocityTailScale; ReactiveMotionParams g_reactiveMotionParams
  }
  s_reactiveMotionGlobFrameData.frameData[v2].bUsesClutterSupport = enabled;
  __asm
  {
    vmovups ymmword ptr cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.windDir, ymm0; ReactiveMotionParams g_backendReactiveMotionParams
    vmovups ymmword ptr cs:?g_backendReactiveMotionParams@@3UReactiveMotionParams@@A.velocityTailScale, ymm1; ReactiveMotionParams g_backendReactiveMotionParams
  }
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

