/*
==============
R_TG_GetCompileOptions
==============
*/

void __fastcall R_TG_GetCompileOptions(R_TG_CompileOptions *options)
{
  ?R_TG_GetCompileOptions@@YAXAEAUR_TG_CompileOptions@@@Z(options);
}

/*
==============
R_TG_DumpCompileInfo
==============
*/

void __fastcall R_TG_DumpCompileInfo(const tg::Compiler *compiler, const GfxTaskGraph *taskGraph, const R_TG_DebugHeapInfo *heaps, unsigned int heapCount)
{
  ?R_TG_DumpCompileInfo@@YAXAEBVCompiler@tg@@AEBUGfxTaskGraph@@PEBUR_TG_DebugHeapInfo@@I@Z(compiler, taskGraph, heaps, heapCount);
}

/*
==============
R_TG_GpuStatus_Testing
==============
*/

bool __fastcall R_TG_GpuStatus_Testing()
{
  return ?R_TG_GpuStatus_Testing@@YA_NXZ();
}

/*
==============
R_TG_RegisterDvars
==============
*/

void R_TG_RegisterDvars(void)
{
  ?R_TG_RegisterDvars@@YAXXZ();
}

/*
==============
R_TG_GpuStatus_Dump
==============
*/

void R_TG_GpuStatus_Dump(void)
{
  ?R_TG_GpuStatus_Dump@@YAXXZ();
}

/*
==============
TG_Printf
==============
*/

void TG_Printf(const char *fmt, ...)
{
  ?TG_Printf@@YAXPEBDZZ(fmt);
}

/*
==============
R_TG_VendorInit
==============
*/

void R_TG_VendorInit(void)
{
  ?R_TG_VendorInit@@YAXXZ();
}

/*
==============
R_TG_GetStats
==============
*/

bool __fastcall R_TG_GetStats(R_TG_DebugStats *outStats)
{
  return ?R_TG_GetStats@@YA_NPEAUR_TG_DebugStats@@@Z(outStats);
}

/*
==============
R_TG_DumpCompileInfo
==============
*/

void __fastcall R_TG_DumpCompileInfo(const tg::Compiler *compiler, const GfxTaskGraph *taskGraph, const R_TG_DebugHeapInfo *heaps, unsigned int heapCount)
{
  R_TG_DumpJson(compiler, taskGraph, heaps, heapCount);
}

/*
==============
R_TG_DumpJson
==============
*/
void R_TG_DumpJson(const tg::Compiler *compiler, const GfxTaskGraph *taskGraph, const R_TG_DebugHeapInfo *heaps, unsigned int heapCount)
{
  __int64 m_graphHash; 
  const GfxTaskGraph *v6; 
  const char *v8; 
  fileHandle_t *v9; 
  unsigned int BlockSize; 
  const char *v11; 
  const char *v12; 
  unsigned int v13; 
  const char **v14; 
  unsigned int v15; 
  __int64 v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 asyncTaskIndexPrev; 
  __int64 asyncTaskIndexNext; 
  unsigned int i; 
  tg::eResourceState state; 
  __int64 v24; 
  tg::eResourceType type; 
  __int64 j; 
  const char *v27; 
  unsigned int v28; 
  __int64 v29; 
  int v30; 
  GfxPixelFormat v31; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v34; 
  __int64 v35; 
  _DWORD *v36; 
  unsigned int v37; 
  int heapIndex; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  int v45; 
  unsigned int v46; 
  tg::Compiler *v47; 
  unsigned int v48; 
  unsigned int k; 
  tg::eResourceState v50; 
  __int64 v51; 
  tg::eResourceType v52; 
  const char *v53; 
  __int64 __formal; 
  unsigned int *outSize; 
  __int64 v56; 
  unsigned int v57; 
  unsigned int m_cmdCount; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  const GfxTaskGraph *v63; 
  const char *Name; 
  const R_TG_DebugHeapInfo *v65; 
  __int64 v66; 
  tg::Compiler *v67; 
  tg::TaskInfo pOut; 
  tg::AttachmentInfo v69[32]; 
  fileHandle_t dest[32]; 

  v65 = heaps;
  m_graphHash = compiler->m_graphHash;
  v6 = taskGraph;
  v63 = taskGraph;
  v67 = (tg::Compiler *)compiler;
  Com_sprintf((char *)dest, 0xFFui64, "tg_%x_res.json", m_graphHash);
  v9 = FS_FOpenFileWrite(dest, v8);
  if ( v9 != (fileHandle_t *)-1i64 )
  {
    BlockSize = R_TG_GetBlockSize();
    v59 = BlockSize;
    m_cmdCount = compiler->m_cmdCount;
    FS_Printf((fileHandle_t)v9, "{\n");
    if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
    {
      v11 = "XBoxOne Scorpio";
      v12 = "xb3x";
    }
    else
    {
      v11 = "XBoxOne Durango";
      v12 = "xb3";
    }
    FS_Printf((fileHandle_t)v9, "\t\"platformName\": \"%s\",\n", v11);
    FS_Printf((fileHandle_t)v9, "\t\"platformCode\": \"%s\",\n", v12);
    FS_Printf((fileHandle_t)v9, "\t\"attachTypes\": [");
    v13 = 0;
    v14 = g_R_RT_AttachmentTypes;
    do
    {
      if ( v13 )
        FS_Printf((fileHandle_t)v9, ", ");
      FS_Printf((fileHandle_t)v9, "\"%s\"", *v14);
      ++v13;
      ++v14;
    }
    while ( v13 < 0xB );
    FS_Printf((fileHandle_t)v9, "],\n");
    FS_Printf((fileHandle_t)v9, "\t\"heaps\": [\n");
    v15 = 0;
    if ( heapCount )
    {
      v16 = (__int64)v65;
      do
      {
        FS_Printf((fileHandle_t)v9, "\t\t{\n\t\t\t\"name\": \"%s\",\n\t\t\t\"maxUsage\": %u\n", *(const char **)v16, BlockSize * *(_DWORD *)(v16 + 8));
        v17 = "\t\t},\n";
        if ( v15 >= heapCount - 1 )
          v17 = "\t\t}\n";
        FS_Printf((fileHandle_t)v9, v17);
        ++v15;
        v16 += 16i64;
      }
      while ( v15 < heapCount );
      v6 = v63;
    }
    FS_Printf((fileHandle_t)v9, "\t],\n\t\"tasks\": [\n");
    v18 = m_cmdCount;
    v19 = 0;
    if ( m_cmdCount )
    {
      do
      {
        tg::Compiler::GetTaskInfo((tg::Compiler *)compiler, v19, 1, &pOut);
        FS_Printf((fileHandle_t)v9, "\t\t{\n\t\t\t\"name\": \"%s\",\n", pOut.pName);
        FS_Printf((fileHandle_t)v9, "\t\t\t\"queue\": %u,\n", pOut.queueIndex);
        asyncTaskIndexPrev = pOut.asyncTaskIndexPrev;
        if ( pOut.asyncTaskIndexPrev == 0xFFFF )
          asyncTaskIndexPrev = 0xFFFFFFFFi64;
        FS_Printf((fileHandle_t)v9, "\t\t\t\"asyncPrev\": %d,\n", asyncTaskIndexPrev);
        asyncTaskIndexNext = pOut.asyncTaskIndexNext;
        if ( pOut.asyncTaskIndexNext == 0xFFFF )
          asyncTaskIndexNext = 0xFFFFFFFFi64;
        FS_Printf((fileHandle_t)v9, "\t\t\t\"asyncNext\": %d,\n", asyncTaskIndexNext);
        if ( tg::Compiler::GetAttachmentInfoCount((tg::Compiler *)compiler, v19) )
        {
          tg::Compiler::GetAttachmentInfo((tg::Compiler *)compiler, v19, 0, v69, 0x20u, &v57);
          FS_Printf((fileHandle_t)v9, "\t\t\t\"attachments\": [");
          for ( i = 0; i < v57; ++i )
          {
            if ( i )
              FS_Printf((fileHandle_t)v9, ", ");
            state = v69[i].state[0].state;
            if ( g_R_TG_defs[pOut.typeIndex].type == R_TG_TaskType_Copy )
            {
              v24 = state != eResourceState_Write;
            }
            else
            {
              type = v69[i].state[0].type;
              switch ( type )
              {
                case eResourceType_ColorTarget:
                  v24 = 2i64;
                  break;
                case eResourceType_DepthTarget:
                  v24 = (unsigned int)(state != eResourceState_Write) + 3;
                  break;
                case eResourceType_Texture:
                  v24 = (unsigned int)(state != eResourceState_Write) + 5;
                  break;
                case eResourceType_Buffer:
                  if ( state == eResourceState_Write )
                    v24 = 7i64;
                  else
                    v24 = v69[i].state[0].access & 1 | 8u;
                  break;
                default:
                  v24 = (unsigned int)(type != eResourceType_Custom) + 10;
                  break;
              }
            }
            LODWORD(__formal) = v69[i].state[0].subresourceIndex;
            FS_Printf((fileHandle_t)v9, "[%u, %u, %u]", v24, v69[i].resourceIndex, __formal);
          }
          FS_Printf((fileHandle_t)v9, "],\n");
        }
        FS_Printf((fileHandle_t)v9, "\t\t\t\"children\": [");
        for ( j = 0i64; (unsigned int)j < pOut.childCount; j = (unsigned int)(j + 1) )
        {
          if ( (_DWORD)j )
            FS_Printf((fileHandle_t)v9, ", ");
          FS_Printf((fileHandle_t)v9, "%u", pOut.child[j]);
        }
        FS_Printf((fileHandle_t)v9, "],\n");
        FS_Printf((fileHandle_t)v9, "\t\t\t\"condition\": %u,\n", pOut.conditionFlag);
        FS_Printf((fileHandle_t)v9, "\t\t\t\"type\": %u\n", (unsigned int)g_R_TG_defs[pOut.typeIndex].type);
        v27 = "\t\t},\n";
        if ( v19 >= v18 - 1 )
          v27 = "\t\t}\n";
        FS_Printf((fileHandle_t)v9, v27);
        ++v19;
      }
      while ( v19 < v18 );
      v6 = v63;
    }
    FS_Printf((fileHandle_t)v9, "\t],\n\t\"resources\": [\n");
    v28 = 0;
    v62 = 0;
    if ( v6->resourceCount )
    {
      while ( 1 )
      {
        Name = "<Unknown>";
        v29 = (__int64)v6 + 808 * v28;
        v66 = v29;
        v30 = *(_DWORD *)(v29 + 137392);
        if ( v30 == 32 || v30 == 128 )
          break;
        if ( v30 == 64 )
        {
          v31 = g_R_RT_depthStencilFmts[*(unsigned __int8 *)(v29 + 137428)];
LABEL_53:
          Name = PixelFormat_GetName(v31);
        }
        v32 = 0;
        v33 = 0;
        v60 = 0;
        v57 = 0;
        FS_Printf((fileHandle_t)v9, "\t\t{\n");
        FS_Printf((fileHandle_t)v9, "\t\t\t\"name\": \"%s\",\n", (const char *)(v29 + 137264));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"allocs\": [");
        v34 = 0i64;
        if ( *(_DWORD *)(v29 + 137528) )
        {
          do
          {
            v35 = 0i64;
            v36 = (_DWORD *)(v29 + 24 * v34 + 137480);
            v37 = *(_DWORD *)(v29 + 24 * v34 + 137488);
            if ( v37 )
            {
              do
              {
                if ( *(_BYTE *)(v29 + 137543) )
                {
                  if ( v37 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_debug.cpp", 352, ASSERT_TYPE_ASSERT, "(alloc.allocCount == 1)", (const char *)&queryFormat, "alloc.allocCount == 1") )
                    __debugbreak();
                  heapIndex = v63->smallAlloc.heapIndex;
                  v39 = **(unsigned __int16 **)v36 + v59 * v63->smallAlloc.offset;
                  v40 = *(unsigned __int16 *)(*(_QWORD *)v36 + 2i64) + v59 * v63->smallAlloc.size;
                }
                else
                {
                  v41 = *(_QWORD *)v36;
                  if ( *(_QWORD *)v36 )
                  {
                    v39 = v59 * *(unsigned __int16 *)(v41 + 6 * v35);
                    v40 = v59 * *(unsigned __int16 *)(v41 + 6 * v35 + 2);
                    heapIndex = *(unsigned __int16 *)(v41 + 6 * v35 + 4);
                  }
                  else
                  {
                    heapIndex = 0;
                    v40 = 0;
                    v39 = 0;
                  }
                }
                if ( (_DWORD)v35 + (_DWORD)v34 )
                  FS_Printf((fileHandle_t)v9, ", ");
                v42 = v36[5];
                LODWORD(v56) = heapIndex;
                if ( v42 < v36[4] )
                  v42 = m_cmdCount - 1;
                LODWORD(outSize) = v42;
                LODWORD(__formal) = v36[4];
                FS_Printf((fileHandle_t)v9, "[%u, %u, %u, %u, %u]", v39, v40, __formal, outSize, v56);
                v43 = v40 + v57;
                v37 = v36[2];
                if ( v65[heapIndex].flags != 256 )
                  v43 = v57;
                v32 = v40 + v60;
                v29 = v66;
                v35 = (unsigned int)(v35 + 1);
                v57 = v43;
                v33 = v43;
                v60 = v32;
              }
              while ( (unsigned int)v35 < v37 );
              v57 = v43;
            }
            v34 = (unsigned int)(v34 + 1);
          }
          while ( (unsigned int)v34 < *(_DWORD *)(v29 + 137528) );
          v28 = v62;
        }
        FS_Printf((fileHandle_t)v9, "],\n");
        FS_Printf((fileHandle_t)v9, "\t\t\t\"size\": %u,\n", v32);
        if ( v32 )
          v44 = 100 * v33 / v32;
        else
          v44 = 0;
        FS_Printf((fileHandle_t)v9, "\t\t\t\"fastPercent\": %u,\n", v44);
        FS_Printf((fileHandle_t)v9, "\t\t\t\"count\": %u,\n", *(unsigned int *)(v29 + 137420));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"type\": %u,\n", *(unsigned int *)(v29 + 137392));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"width\": %u,\n", *(unsigned int *)(v29 + 137400));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"height\": %u,\n", *(unsigned int *)(v29 + 137404));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"depth\": %u,\n", *(unsigned int *)(v29 + 137408));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"arraySize\": %u,\n", *(unsigned int *)(v29 + 137412));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"levels\": %u,\n", *(unsigned int *)(v29 + 137416));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"format\": \"%s\",\n", Name);
        FS_Printf((fileHandle_t)v9, "\t\t\t\"multisample\": %u,\n", *(unsigned int *)(v29 + 137432));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"levels\": %u,\n", *(unsigned int *)(v29 + 137416));
        FS_Printf((fileHandle_t)v9, "\t\t\t\"access\": [");
        v45 = 0;
        v46 = 0;
        if ( m_cmdCount )
        {
          v47 = v67;
          do
          {
            tg::Compiler::GetAttachmentInfo(v47, v46, 0, v69, 0x20u, &v61);
            v48 = v61;
            for ( k = 0; k < v48; ++k )
            {
              if ( v69[k].resourceIndex == v28 )
              {
                tg::Compiler::GetTaskInfo(v47, v46, 0, &pOut);
                if ( v45 )
                  FS_Printf((fileHandle_t)v9, ", ");
                v50 = v69[k].state[0].state;
                if ( g_R_TG_defs[pOut.typeIndex].type == R_TG_TaskType_Copy )
                {
                  v51 = v50 != eResourceState_Write;
                }
                else
                {
                  v52 = v69[k].state[0].type;
                  switch ( v52 )
                  {
                    case eResourceType_ColorTarget:
                      v51 = 2i64;
                      break;
                    case eResourceType_DepthTarget:
                      v51 = (unsigned int)(v50 != eResourceState_Write) + 3;
                      break;
                    case eResourceType_Texture:
                      v51 = (unsigned int)(v50 != eResourceState_Write) + 5;
                      break;
                    case eResourceType_Buffer:
                      if ( v50 == eResourceState_Write )
                        v51 = 7i64;
                      else
                        v51 = v69[k].state[0].access & 1 | 8u;
                      break;
                    default:
                      v51 = (unsigned int)(v52 != eResourceType_Custom) + 10;
                      break;
                  }
                }
                LODWORD(__formal) = v69[k].state[0].subresourceIndex;
                FS_Printf((fileHandle_t)v9, "[%u, %u, %u]", v51, v46, __formal);
                v48 = v61;
                ++v45;
              }
            }
            ++v46;
          }
          while ( v46 < m_cmdCount );
        }
        v6 = v63;
        v53 = "]\n\t\t},\n";
        if ( v28 >= v63->resourceCount - 1 )
          v53 = "]\n\t\t}\n";
        FS_Printf((fileHandle_t)v9, v53);
        v62 = ++v28;
        if ( v28 >= v6->resourceCount )
          goto LABEL_102;
      }
      v31 = g_R_RT_renderTargetFmts[*(unsigned __int8 *)(v29 + 137428)];
      goto LABEL_53;
    }
LABEL_102:
    FS_Printf((fileHandle_t)v9, "\t]\n}\n");
    FS_FCloseFile((fileHandle_t)v9);
  }
}

/*
==============
R_TG_GetCompileOptions
==============
*/
void R_TG_GetCompileOptions(R_TG_CompileOptions *options)
{
  int v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  __int16 v12; 
  bool v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  int v17; 

  v2 = 0;
  options->raw = 0;
  v3 = 16 * r_tgCompileAliasedAllocs->current.enabled;
  options->raw = v3;
  v4 = v3 | (r_tgCompileMergedBarriers->current.enabled << 7);
  options->raw = v4;
  v5 = v4 | (8 * r_tgCompileExtendResourceLifetimes->current.enabled);
  options->raw = v5;
  v6 = v5 | (r_tgCompileBatchCompute->current.enabled << 8);
  options->raw = v6;
  if ( !r_tgCompileSplitBarriers->current.enabled || (v7 = 64, (v6 & 0x80u) != 0) )
    v7 = 0;
  v8 = v7 | v6;
  options->raw = v8;
  v9 = v8 | (32 * r_tgCompileTiledAllocs->current.enabled);
  options->raw = v9;
  if ( !r_tgCompileAsyncCompute->current.enabled || (v10 = 1024, !r_asyncCompute->current.enabled) )
    v10 = 0;
  v11 = v10 | v9;
  v12 = 0;
  options->raw = v11;
  if ( !r_deviceDebug->current.enabled )
    v12 = 1024;
  options->raw = v11 & (*(_DWORD *)&v12 | 0xFFFFFBFF);
  v13 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
  if ( r_tgCompileDccRts->current.enabled && v13 )
    v2 = 2048;
  v14 = v2 | options->raw & 0xFFFFF7FF;
  options->raw = v14;
  v15 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(r_tgCompileFastClearRts->current.color[0] << 12)) & 0x1000;
  options->raw = v15;
  v16 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(r_tgCompileLimitDecompressRts->current.color[0] << 13)) & 0x2000;
  options->raw = v16;
  v17 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int16)r_tgCompileDumpInfo->current.integer << 14)) & 0x4000;
  options->raw = v17;
  options->raw = v17 ^ (v17 ^ (r_tgCompileFastMemoryLimitSize->current.integer << 15)) & 0xF8000;
}

/*
==============
R_TG_GetStats
==============
*/
char R_TG_GetStats(R_TG_DebugStats *outStats)
{
  __int64 permutationIndex; 

  if ( !g_R_TG_taskGraph.taskCount || !r_tgShowStats->current.enabled )
    return 0;
  permutationIndex = g_R_TG_taskGraph.renderHistory[0].permutationIndex;
  outStats->taskCount = g_R_TG_taskGraph.taskSharedCount;
  outStats->queueCount = g_R_TG_taskGraph.asyncCompute + 1;
  outStats->taskQueueCount[0] = g_R_TG_taskGraph.taskQueueCount[0];
  outStats->permutationTaskQueueCount[0] = g_R_TG_taskGraph.permutations[permutationIndex].taskQueueCount[0];
  outStats->taskQueueCount[1] = g_R_TG_taskGraph.taskQueueCount[1];
  outStats->permutationTaskQueueCount[1] = g_R_TG_taskGraph.permutations[permutationIndex].taskQueueCount[1];
  outStats->resourceCount = g_R_TG_taskGraph.resourceCount;
  outStats->heapCount = g_R_TG_taskGraph.heapCount;
  outStats->memoryUsage = g_R_TG_taskGraph.heapMemoryUsage;
  outStats->permutationCount = g_R_TG_taskGraph.permutationCount;
  outStats->permutationIndex = permutationIndex;
  outStats->permutationTaskCount = g_R_TG_taskGraph.permutations[permutationIndex].taskCount;
  outStats->permutationBarrierCount = g_R_TG_taskGraph.permutations[permutationIndex].barrierBatchCount;
  outStats->permutationBarrierAliasingCount = g_R_TG_taskGraph.permutations[permutationIndex].barrierAliasingCount;
  outStats->permutationBarrierDecompressCount = g_R_TG_taskGraph.permutations[permutationIndex].barrierDecompressCount;
  outStats->permutationBarrierElementCount = g_R_TG_taskGraph.permutations[permutationIndex].barrierCount;
  outStats->renderCpuTimeUs = g_R_TG_taskGraph.renderCpuTimeUs;
  outStats->compileTimeMs = g_R_TG_taskGraph.compileTimeMs;
  return 1;
}

/*
==============
R_TG_GpuStatus_Dump
==============
*/
void R_TG_GpuStatus_Dump(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 

  if ( g_R_TG_taskGraph.taskCount )
  {
    v0 = *((_DWORD *)g_R_TG_taskGraph.taskLabels + 676);
    TG_Printf("*\n* Task Graph GPU Status:\n");
    if ( v0 == -1 )
    {
      TG_Printf("* Did not run\n*\n");
    }
    else
    {
      TG_Printf("*    Frame Index: %u\n*    Permutation: %u\n", v0, g_R_TG_taskGraph.renderHistory[v0 & 3].permutationIndex);
      v1 = *((_DWORD *)g_R_TG_taskGraph.taskLabels + 672);
      if ( g_R_TG_taskGraph.asyncCompute )
        v2 = *((_DWORD *)g_R_TG_taskGraph.taskLabels + 674);
      else
        v2 = -1;
      if ( v1 == -1 && v2 == -1 )
      {
        TG_Printf("* Frame completed successfully\n");
      }
      else
      {
        TG_Printf("* Frame in progress\n");
        R_TG_GpuStatus_DumpForQueue("GFX", v1);
        R_TG_GpuStatus_DumpForQueue("Compute", v2);
        if ( g_R_TG_taskGraph.gpuStatusTesting )
        {
          g_R_TG_taskGraph.gpuStatusTesting = 0;
          g_R_TG_taskGraph.taskLabels[338] = 0i64;
        }
      }
    }
    TG_Printf("*\n");
  }
}

/*
==============
R_TG_GpuStatus_DumpForQueue
==============
*/
void R_TG_GpuStatus_DumpForQueue(const char *type, unsigned int queueFlags)
{
  unsigned int v3; 
  GfxTaskInfoPacked *v4; 
  const char *v5; 

  if ( queueFlags != -1 )
  {
    v3 = queueFlags & 0x7FFFFFF;
    v4 = &g_R_TG_taskGraph.tasksPacked[queueFlags & 0x7FFFFFF];
    if ( type && *type )
      TG_Printf("*    %s queue:\n", type);
    TG_Printf("*    %s (%d)", g_R_TG_taskGraph.taskShared[v4->taskIndex].pName, v3);
    if ( (queueFlags & 0x20000000) != 0 )
    {
      TG_Printf(" - stuck in barriers\n");
    }
    else if ( (queueFlags & 0x10000000) != 0 )
    {
      TG_Printf(" - stuck in decompression\n");
    }
    else if ( (queueFlags & 0x40000000) != 0 )
    {
      TG_Printf(" - waiting for task %s\n", g_R_TG_taskGraph.taskShared[v4->taskDependencyAsyncPrevIndex].pName);
    }
    else if ( (queueFlags & 0x80000000) == 0 )
    {
      v5 = " - finished\n";
      if ( (queueFlags & 0x8000000) == 0 )
        v5 = " - executing\n";
      TG_Printf(v5);
    }
    else
    {
      TG_Printf(" - waiting for frame start\n");
    }
  }
}

/*
==============
R_TG_GpuStatus_Testing
==============
*/
_BOOL8 R_TG_GpuStatus_Testing()
{
  return g_R_TG_taskGraph.gpuStatusTesting;
}

/*
==============
R_TG_RegisterDvars
==============
*/
void R_TG_RegisterDvars(void)
{
  r_tgScript = Dvar_RegisterEnum("MOOKSPSMMO", g_R_TG_scriptNames, 1, 0, "Current task graph script, 0 = disabled.");
  r_tgShowStats = Dvar_RegisterBool("LTOQRMMOOT", 0, 0, "Show render stats. Needs cg_drawFPS 3.");
  r_tgPermutationIndex = Dvar_RegisterInt("MTLQRTRORP", -1, -1, 0x7FFFFFFF, 0, "Permutation index override. -1 = disabled, 0 = everything enabled, 1+ = various conditions disabled.");
  r_tgCompileDumpInfo = Dvar_RegisterBool("NRMLMQMPQK", 0, 0, "Dump task and resource data to json during compile.");
  r_tgCompileMergedBarriers = Dvar_RegisterBool("MKPLKOSKQS", 1, 0, "Merged barriers for runs of non-dependent tasks. ");
  r_tgCompileExtendResourceLifetimes = Dvar_RegisterBool("OMMMKOTRPK", 1, 0, "Extend resource lifetimes to avoid aliasing barriers.");
  r_tgCompileBatchCompute = Dvar_RegisterBool("NKRRTTLSNL", 0, 0, "Batch compute work together (Switch/NV). ");
  r_tgCompileAliasedAllocs = Dvar_RegisterBool("OKTMMPNRMN", 1, 0, "Allow task graph to use overlapping placed allocs.");
  r_tgCompileSplitBarriers = Dvar_RegisterBool("LPMLRKTKPO", 0, 0, "Compile task graph with synchronous (FLAG_NONE) or split (FLAG_BEGIN/FLAG_END) barriers.");
  r_tgCompileTiledAllocs = Dvar_RegisterBool("MMSOKLTNOS", 1, 0, "Compile task graph with tiled (multiple va mappings) or placed (virtual memory aliasing) allocs.");
  r_tgCompileAsyncCompute = Dvar_RegisterBool("MPLSLLRSNN", 1, 0, "Compile task graph with async compute task scheduling.");
  r_tgRenderAsyncWorkerCmd = Dvar_RegisterBool("LPONPTPQMN", 0, 0, "Offload async compute tasks to a worker thread.");
  r_tgRenderAsyncBatchSubmit = Dvar_RegisterBool("TPSSKSPKN", 0, 0, "Batch async tasks into a single cmd buf submit.");
  r_tgCompileDccRts = Dvar_RegisterBool("OTKSLKMSR", 1, 0, "Compile task graph with dcc rts.");
  r_tgCompileFastClearRts = Dvar_RegisterBool("NPMSLOTSQQ", 1, 0, "Compile task graph with fast clear rts.");
  r_tgCompileLimitDecompressRts = Dvar_RegisterBool("NOMSMTKOST", 1, 0, "Compile task graph with limiting decompression to once per clear cycle.");
  r_tgCompileFastMemoryLimitSize = Dvar_RegisterInt("OSSLOQRKN", 4, 0, 32, 0, "Limit size of ESRAM alloc for appropriately flagged resources.");
  r_tgRenderClearTemporal = Dvar_RegisterBool("NSNLKRLSPM", 0, 0, "Clear temporal resource history.");
  r_tgRenderBarrierSafeModeBeginIndex = Dvar_RegisterInt("LOOKQMNSOR", -1, -1, 336, 0, "Begin task index for barrier safe mode.");
  r_tgRenderBarrierSafeModeEndIndex = Dvar_RegisterInt("MRLLKLPSNL", -1, -1, 336, 0, "End task index for barrier safe mode.");
  r_tgRenderForceWaitPhase = Dvar_RegisterInt("OKSQMMOQLQ", -1, -1, 7, 0, "Force wait phase for debugging frontend->backend thread issues.");
  r_tgRenderHangTask = Dvar_RegisterInt("OLNQMSTKPM", -1, -1, 336, 0, "Cause the specified task to hang by waiting on a label which will never be written.");
  r_tgRenderFinishGpu = Dvar_RegisterBool("MQTMOKRKQO", 0, 0, "Flush gpu after each task to help narrow down device debug errors.");
}

/*
==============
R_TG_VendorInit
==============
*/
void R_TG_VendorInit(void)
{
  ;
}

/*
==============
TG_Printf
==============
*/
void TG_Printf(const char *fmt, ...)
{
  char dest[256]; 
  va_list va; 

  va_start(va, fmt);
  Com_vsprintf(dest, 0x100ui64, fmt, va);
  Com_Printf(8, (const char *)&queryFormat, dest);
}

