/*
==============
R_TG_GetDynamicSizes
==============
*/

const tg::Size *__fastcall R_TG_GetDynamicSizes(R_TG_Script *pContext, const R_TG_DynamicSizes *pCustomDynamicSizes, const tg::Size *resSize, unsigned int defWidth, unsigned int defHeight)
{
  return ?R_TG_GetDynamicSizes@@YAPEBTSize@tg@@PEAUR_TG_Script@@PEBUR_TG_DynamicSizes@@AEBT12@II@Z(pContext, pCustomDynamicSizes, resSize, defWidth, defHeight);
}

/*
==============
cOrderHintEnd
==============
*/

void __fastcall cOrderHintEnd(R_TG_Script *pScript)
{
  ?cOrderHintEnd@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
cAddDependencyBetweenPreviousAndNextTask
==============
*/

void __fastcall cAddDependencyBetweenPreviousAndNextTask(R_TG_Script *pScript)
{
  ?cAddDependencyBetweenPreviousAndNextTask@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
cAddDependencyInNextTask
==============
*/

void __fastcall cAddDependencyInNextTask(R_TG_Script *pScript, unsigned int srcTask)
{
  ?cAddDependencyInNextTask@@YAXPEAUR_TG_Script@@I@Z(pScript, srcTask);
}

/*
==============
cConditionBegin
==============
*/

void __fastcall cConditionBegin(R_TG_Script *pScript, bool (__fastcall *pCondition)(const GfxViewInfo *))
{
  ?cConditionBegin@@YAXPEAUR_TG_Script@@P6A_NPEBUGfxViewInfo@@@Z@Z(pScript, pCondition);
}

/*
==============
R_TG_ProcessDefinition
==============
*/

void __fastcall R_TG_ProcessDefinition(R_TG_TaskDefinition *pDef)
{
  ?R_TG_ProcessDefinition@@YAXPEAUR_TG_TaskDefinition@@@Z(pDef);
}

/*
==============
cOrderHintBegin
==============
*/

void __fastcall cOrderHintBegin(R_TG_Script *pScript, int hint)
{
  ?cOrderHintBegin@@YAXPEAUR_TG_Script@@H@Z(pScript, hint);
}

/*
==============
cClearColorTargetsInNextTask
==============
*/

void __fastcall cClearColorTargetsInNextTask(R_TG_Script *pScript)
{
  ?cClearColorTargetsInNextTask@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
cGpuTimerEnd
==============
*/

void __fastcall cGpuTimerEnd(R_TG_Script *pScript)
{
  ?cGpuTimerEnd@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
cAsyncBegin
==============
*/

void __fastcall cAsyncBegin(R_TG_Script *pScript)
{
  ?cAsyncBegin@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
cAsyncEnd
==============
*/

void __fastcall cAsyncEnd(R_TG_Script *pScript)
{
  ?cAsyncEnd@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
R_TG_AddTask
==============
*/

unsigned int __fastcall R_TG_AddTask(R_TG_Script *pScript, unsigned int index, R_TG_AddTaskStack *stack)
{
  return ?R_TG_AddTask@@YAIPEAUR_TG_Script@@IPEAUR_TG_AddTaskStack@@@Z(pScript, index, stack);
}

/*
==============
cClearDepthTargetInNextTask
==============
*/

void __fastcall cClearDepthTargetInNextTask(R_TG_Script *pScript)
{
  ?cClearDepthTargetInNextTask@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
cDisplayResource
==============
*/

R_TG_Handle *__fastcall cDisplayResource(R_TG_Handle *result, R_TG_Script *pScript)
{
  return ?cDisplayResource@@YA?AUR_TG_Handle@@PEAUR_TG_Script@@@Z(result, pScript);
}

/*
==============
cAddDependencyBetweenTwoTasks
==============
*/

void __fastcall cAddDependencyBetweenTwoTasks(R_TG_Script *pScript, unsigned int srcTask, unsigned int dstTask)
{
  ?cAddDependencyBetweenTwoTasks@@YAXPEAUR_TG_Script@@II@Z(pScript, srcTask, dstTask);
}

/*
==============
cExternalResource
==============
*/

R_TG_Handle *__fastcall cExternalResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, tg::eResourceType type, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySize, unsigned int levels, unsigned int multisample, unsigned int format)
{
  return ?cExternalResource@@YA?AUR_TG_Handle@@PEAUR_TG_Script@@PEBDW4eResourceType@tg@@IIIIIII@Z(result, pScript, pName, type, width, height, depth, arraySize, levels, multisample, format);
}

/*
==============
cRtGlobalResource
==============
*/

R_TG_Handle *__fastcall cRtGlobalResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, GfxRenderTargetId rtId)
{
  return ?cRtGlobalResource@@YA?AUR_TG_Handle@@PEAUR_TG_Script@@PEBDW4GfxRenderTargetId@@@Z(result, pScript, pName, rtId);
}

/*
==============
cGpuTimerBegin
==============
*/

void __fastcall cGpuTimerBegin(R_TG_Script *pScript, unsigned int gpuTimer)
{
  ?cGpuTimerBegin@@YAXPEAUR_TG_Script@@I@Z(pScript, gpuTimer);
}

/*
==============
cConditionLightBegin
==============
*/

void __fastcall cConditionLightBegin(R_TG_Script *pScript, bool (__fastcall *pCondition)(const GfxViewInfo *))
{
  ?cConditionLightBegin@@YAXPEAUR_TG_Script@@P6A_NPEBUGfxViewInfo@@@Z@Z(pScript, pCondition);
}

/*
==============
cExternalResource
==============
*/

R_TG_Handle *__fastcall cExternalResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, tg::eResourceType type, unsigned int width, unsigned int height, unsigned int depth, unsigned int rtFlags)
{
  return ?cExternalResource@@YA?AUR_TG_Handle@@PEAUR_TG_Script@@PEBDW4eResourceType@tg@@IIII@Z(result, pScript, pName, type, width, height, depth, rtFlags);
}

/*
==============
cNullResource
==============
*/

R_TG_Handle *__fastcall cNullResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, tg::eResourceType type)
{
  return ?cNullResource@@YA?AUR_TG_Handle@@PEAUR_TG_Script@@PEBDW4eResourceType@tg@@@Z(result, pScript, pName, type);
}

/*
==============
cConditionEnd
==============
*/

void __fastcall cConditionEnd(R_TG_Script *pScript)
{
  ?cConditionEnd@@YAXPEAUR_TG_Script@@@Z(pScript);
}

/*
==============
R_TG_AddOutputResource
==============
*/
void R_TG_AddOutputResource(R_TG_Script *pScript, const char *pName)
{
  if ( pScript->outputResourceCount >= 0x24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 130, ASSERT_TYPE_ASSERT, "(pScript->outputResourceCount < pScript->outputResourceLimit)", (const char *)&queryFormat, "pScript->outputResourceCount < pScript->outputResourceLimit") )
    __debugbreak();
  pScript->outputResourceNames[pScript->outputResourceCount++] = pName;
}

/*
==============
R_TG_AddTask
==============
*/
__int64 R_TG_AddTask(R_TG_Script *pScript, unsigned int index, R_TG_AddTaskStack *stack)
{
  R_TG_TaskDefinition *v6; 
  bool v7; 
  __int64 taskCount; 
  tg::TaskDesc *v10; 
  tg::AttachmentDesc *v11; 
  R_TG_TaskType type; 
  int v13; 
  const R_TG_DefElement *pElements; 
  unsigned int count; 
  __int64 createResourceCount; 
  tg::CreateResourceDesc *v17; 
  const R_TG_DynamicSizes *pDynamicSizes; 
  int temporalIndex; 
  unsigned int ParameterValue; 
  const tg::Size *DynamicSizes; 
  bool v22; 
  unsigned int **v23; 
  unsigned int resourceNameCount; 
  unsigned int *v25; 
  unsigned int elementType; 
  unsigned int v27; 
  __int64 v28; 
  __int64 *v29; 
  __int64 v30; 
  _DWORD *v31; 
  int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int conditionIndex; 
  unsigned int systemDataCount; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 attachmentCount; 
  __int64 v40; 
  int resourceType; 
  int state; 
  tg::AttachmentDesc *v43; 
  unsigned int **v44; 
  unsigned int *v45; 
  __int64 v46; 
  unsigned int v47; 
  unsigned int v48; 
  __int64 v49; 
  int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  __int64 v54; 
  int v55; 
  unsigned int v56; 
  tg::CreateResourceDesc *v57; 
  tg::AttachmentDesc *v58; 
  unsigned int *v59; 
  unsigned int *v60; 
  bool v61; 
  __int64 v62; 
  __int64 v63; 
  int v64; 
  tg::AttachmentDesc *v65; 
  int v66; 
  unsigned int v67; 
  __int32 conditionType; 
  bool (__fastcall *pCondition)(const GfxViewInfo *); 
  tg::CreateResourceDesc *v70; 
  unsigned int *v71; 
  unsigned int *v72; 
  unsigned int v73; 
  R_TG_TaskDefinition *v74; 
  __int64 v75[24]; 
  char dest[128]; 

  v6 = &g_R_TG_defs[index];
  v74 = v6;
  if ( stack->paramArgCount != v6->userParamCount + v6->taskDataCount )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 144, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_TG_AddTask: Number of declared user parameters (e.g. MAKE_USER_PARAMETER( 1 )) and task data parms for task %s is different than the number of uints passed to c%s in script", v6->pName, v6->pName);
LABEL_7:
    if ( v7 )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  if ( stack->handleArgCount != v6->handleParamCount )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 150, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_TG_AddTask: Number of declared resources (e.g. TEXTURE_READ) for task %s is different than the number of R_TG_Handles passed to c%s in script", v6->pName, v6->pName);
    goto LABEL_7;
  }
  if ( (stack->pDynamicSizes != NULL) != v6->dynamicSizes )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 156, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_TG_AddTask: Task %s expects a dynamic sizes array, but this wasn't passed to to c%s in script", v6->pName, v6->pName);
    goto LABEL_7;
  }
  if ( pScript->taskCount >= 0x150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 162, ASSERT_TYPE_ASSERT, "(unsigned)( pScript->taskCount ) < (unsigned)( tg::taskLimit )", "pScript->taskCount doesn't index tg::taskLimit\n\t%i not in [0, %i)", pScript->taskCount, 336) )
    __debugbreak();
  taskCount = pScript->taskCount;
  v73 = pScript->taskCount;
  v10 = &pScript->tasks[taskCount];
  pScript->taskCount = taskCount + 1;
  v70 = &pScript->taskResources[pScript->taskResourceCount];
  conditionType = pScript->conditionType;
  v11 = &pScript->attachments[pScript->attachmentCount];
  v65 = v11;
  v72 = &pScript->userData[pScript->userDataUsed];
  v71 = &pScript->systemData[pScript->systemDataUsed];
  pCondition = pScript->pCondition;
  Com_sprintf<128>((char (*)[128])dest, "%s_%d", v6->pName, (unsigned int)taskCount);
  v10->pName = WriteBuffer(dest, pScript->buffer, 0xA000ui64, &pScript->bufferUsed);
  type = v6->type;
  switch ( type )
  {
    case R_TG_TaskType_Compute:
      v10->flags = 256;
      break;
    case R_TG_TaskType_Copy:
      v10->flags = 512;
      break;
    case R_TG_TaskType_Resource:
      v10->flags = 4;
      break;
  }
  if ( pScript->async )
    v10->flags |= 0x400u;
  v13 = 0;
  v10->typeIndex = index;
  pElements = v6->pElements;
  v64 = 0;
  v67 = 0;
  if ( pElements->resourceType )
  {
    while ( 1 )
    {
      count = 1;
      v66 = 1;
      if ( pElements->width )
      {
        if ( v10->createResourceCount + pScript->taskResourceCount >= 0x140 )
        {
          LODWORD(v63) = 320;
          LODWORD(v62) = v10->createResourceCount + pScript->taskResourceCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( pScript->taskResourceCount + taskDesc.createResourceCount ) < (unsigned)( tg::resourceLimit )", "pScript->taskResourceCount + taskDesc.createResourceCount doesn't index tg::resourceLimit\n\t%i not in [0, %i)", v62, v63) )
            __debugbreak();
        }
        createResourceCount = v10->createResourceCount;
        v17 = &v70[createResourceCount];
        v10->createResourceCount = createResourceCount + 1;
        Com_sprintf<128>((char (*)[128])dest, "%s_%d_%s", v6->pName, v73, pElements->pName);
        v17->pName = WriteBuffer(dest, pScript->buffer, 0xA000ui64, &pScript->bufferUsed);
        v17->type = pElements->resourceType;
        pDynamicSizes = stack->pDynamicSizes;
        if ( pDynamicSizes )
        {
          v17->size = pDynamicSizes->sizes[0];
        }
        else
        {
          v17->size.v[0] = R_TG_GetParameterValue(stack->paramArgs, pScript->sceneSize.v[0], pScript->displaySize.v[0], pElements->width);
          v17->size.v[1] = R_TG_GetParameterValue(stack->paramArgs, pScript->sceneSize.v[1], pScript->displaySize.v[1], pElements->height);
        }
        v17->depth = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->depth);
        v17->levels = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->mipsCountOrIndex);
        v17->arraySize = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->arraySizeOrIndex);
        temporalIndex = 1;
        if ( pElements->temporalIndex )
          temporalIndex = pElements->temporalIndex;
        v17->count = temporalIndex;
        ParameterValue = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->format);
        v17->textureFormat = ParameterValue;
        v17->surfaceFormat = ParameterValue;
        v17->multisample = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->multisample);
        v17->resourceFlags = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->flags);
        v17->displayFlags = pElements->rtFlags;
        v17->pClear = pElements->pClear;
        DynamicSizes = R_TG_GetDynamicSizes(pScript, stack->pDynamicSizes, &v17->size, pElements->width, pElements->height);
        v22 = (v17->resourceFlags & 0x1000) == 0;
        v17->pDynamicSizes = DynamicSizes;
        if ( !v22 )
          R_TG_AddOutputResource(pScript, v17->pName);
        if ( v6->type == R_TG_TaskType_Resource && v17->resourceFlags == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 242, ASSERT_TYPE_ASSERT, "(taskDef.type != R_TG_TaskType_Resource || ( resDesc.resourceFlags ^ tg::eResourceFlags_Clear ))", (const char *)&queryFormat, "taskDef.type != R_TG_TaskType_Resource || ( resDesc.resourceFlags ^ tg::eResourceFlags_Clear )") )
          __debugbreak();
        count = v17->count;
        v66 = count;
        if ( pElements->elementType != 3 )
        {
          if ( pScript->resourceNameCount >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 249, ASSERT_TYPE_ASSERT, "(pScript->resourceNameCount < pScript->resourceNameLimit)", (const char *)&queryFormat, "pScript->resourceNameCount < pScript->resourceNameLimit") )
            __debugbreak();
          v23 = &stack->handleArgs[v13];
          if ( **v23 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 250, ASSERT_TYPE_ASSERT, "(*stack->handleArgs[handleIndex] == 0xffffffff)", "%s\n\tAn already valid handle was passed to a _CREATE attachment. If this is intended behavior, clear the handle first.", "*stack->handleArgs[handleIndex] == UINT_MAX") )
            __debugbreak();
          pScript->resourceNames[pScript->resourceNameCount] = v17->pName;
          resourceNameCount = pScript->resourceNameCount;
          pScript->resourceNameCount = resourceNameCount + 1;
          v25 = *v23;
          count = v66;
          *v25 = resourceNameCount;
        }
      }
      elementType = pElements->elementType;
      if ( elementType == 4 )
      {
        v10->orderHint = pElements->flags;
      }
      else
      {
        if ( elementType == 5 )
        {
          if ( v6->taskDataCount + pScript->userDataUsed > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 262, ASSERT_TYPE_ASSERT, "(pScript->userDataUsed + taskDef.taskDataCount <= pScript->dataLimit)", (const char *)&queryFormat, "pScript->userDataUsed + taskDef.taskDataCount <= pScript->dataLimit") )
            __debugbreak();
          v27 = 0;
          if ( !v6->taskDataCount )
            goto LABEL_54;
          do
          {
            v28 = v27 + v6->userParamCount;
            ++v27;
            v72[v10->userDataCount++] = stack->paramArgs[v28];
          }
          while ( v27 < v6->taskDataCount );
        }
        else
        {
          if ( elementType == 6 )
          {
            systemDataCount = pElements->temporalIndex + 1;
            if ( v10->systemDataCount > systemDataCount )
              systemDataCount = v10->systemDataCount;
            v10->systemDataCount = systemDataCount;
            if ( pScript->systemDataUsed + systemDataCount > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 269, ASSERT_TYPE_ASSERT, "(pScript->systemDataUsed + taskDesc.systemDataCount <= pScript->dataLimit)", (const char *)&queryFormat, "pScript->systemDataUsed + taskDesc.systemDataCount <= pScript->dataLimit") )
              __debugbreak();
            v71[pElements->temporalIndex] = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->flags);
            goto LABEL_54;
          }
          if ( elementType - 7 <= 1 )
          {
            if ( pCondition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 274, ASSERT_TYPE_ASSERT, "(pCondition == 0)", "%s\n\tOnly 1 condition allowed per task.", "pCondition == NULL") )
              __debugbreak();
            pCondition = pElements->pCondition;
            conditionType = pElements->elementType == 8;
            goto LABEL_54;
          }
          if ( elementType == 9 )
          {
            v10->flags |= 2u;
            goto LABEL_54;
          }
          if ( elementType == 10 )
          {
            v10->flags |= 0x400u;
            goto LABEL_54;
          }
          if ( elementType - 1 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 288, ASSERT_TYPE_ASSERT, "(pElements->elementType >= R_TG_ElementType_Attachment && pElements->elementType <= R_TG_ElementType_AttachmentInternal)", (const char *)&queryFormat, "pElements->elementType >= R_TG_ElementType_Attachment && pElements->elementType <= R_TG_ElementType_AttachmentInternal") )
            __debugbreak();
          v37 = 0;
          if ( count )
          {
            v38 = v67;
            do
            {
              if ( pScript->attachmentCount + v10->attachmentCount >= 0x640 )
              {
                LODWORD(v63) = 1600;
                LODWORD(v62) = pScript->attachmentCount + v10->attachmentCount;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( pScript->attachmentCount + taskDesc.attachmentCount ) < (unsigned)( pScript->attachmentLimit )", "pScript->attachmentCount + taskDesc.attachmentCount doesn't index pScript->attachmentLimit\n\t%i not in [0, %i)", v62, v63) )
                  __debugbreak();
              }
              attachmentCount = v10->attachmentCount;
              v40 = 6 * attachmentCount;
              v22 = (v10->flags & 0x300) == 0;
              v10->attachmentCount = attachmentCount + 1;
              if ( v22 || (resourceType = 128, (pElements->resourceType & 0x160) == 0) )
                resourceType = pElements->resourceType;
              v65[(unsigned __int64)v40 / 6].type = resourceType;
              if ( pElements->width )
              {
                if ( v37 )
                {
                  if ( (pElements->resourceType & 0x160) != 0 )
                    v65[(unsigned __int64)v40 / 6].type = eResourceType_Texture;
                  state = 16;
                }
                else
                {
                  state = pElements->state;
                }
                v65[(unsigned __int64)v40 / 6].state = state;
                truncate_store<unsigned char,unsigned int>(&v65[(unsigned __int64)v40 / 6].temporalIndex, v37);
                v43 = v65;
                v65[(unsigned __int64)v40 / 6].pNameInput = v70[v10->createResourceCount - 1].pName;
              }
              else
              {
                v44 = &stack->handleArgs[v64];
                if ( **v44 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 315, ASSERT_TYPE_ASSERT, "(*stack->handleArgs[handleIndex] != 0xffffffff)", "%s\n\tInvalid handle, resource has not been initialized.", "*stack->handleArgs[handleIndex] != UINT_MAX") )
                  __debugbreak();
                if ( **v44 >= pScript->resourceNameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 316, ASSERT_TYPE_ASSERT, "(*stack->handleArgs[handleIndex] < pScript->resourceNameCount)", (const char *)&queryFormat, "*stack->handleArgs[handleIndex] < pScript->resourceNameCount") )
                  __debugbreak();
                truncate_store<unsigned char,unsigned int>(&v65[(unsigned __int64)v40 / 6].temporalIndex, pElements->temporalIndex);
                v45 = *v44;
                count = v66;
                v43 = v65;
                v65[(unsigned __int64)v40 / 6].pNameInput = pScript->resourceNames[*v45];
                v65[(unsigned __int64)v40 / 6].state = pElements->state;
              }
              if ( pElements->elementType == 2 )
              {
                Com_sprintf<128>((char (*)[128])dest, "%s_%d", v43[v10->attachmentCount - 1].pNameInput, pScript->taskCount);
                v65[(unsigned __int64)v40 / 6].pNameOutput = WriteBuffer(dest, pScript->buffer, 0xA000ui64, &pScript->bufferUsed);
                if ( pScript->resourceNameCount >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 329, ASSERT_TYPE_ASSERT, "(pScript->resourceNameCount < pScript->resourceNameLimit)", (const char *)&queryFormat, "pScript->resourceNameCount < pScript->resourceNameLimit") )
                  __debugbreak();
                pScript->resourceNames[pScript->resourceNameCount] = v65[(unsigned __int64)v40 / 6].pNameOutput;
                if ( v38 >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 332, ASSERT_TYPE_ASSERT, "(saltedParamCount < saltedParamLimit)", (const char *)&queryFormat, "saltedParamCount < saltedParamLimit") )
                  __debugbreak();
                v46 = 2i64 * v38++;
                v75[v46] = (__int64)stack->handleArgs[v64];
                v47 = pScript->resourceNameCount;
                LODWORD(v75[v46 + 1]) = v47;
                pScript->resourceNameCount = v47 + 1;
              }
              v65[(unsigned __int64)v40 / 6].access = pElements->access;
              v48 = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->flags);
              *(_DWORD *)(v49 + 8 * v40 + 32) = v48;
              v50 = *(_DWORD *)(v49 + 8 * v40 + 16);
              if ( v50 == 32 )
              {
                *(_DWORD *)(v49 + 8 * v40 + 32) = v48 | pScript->colorFlags;
              }
              else if ( v50 == 64 )
              {
                *(_DWORD *)(v49 + 8 * v40 + 32) = v48 | pScript->depthFlags;
              }
              if ( pElements->width )
                v51 = 255;
              else
                v51 = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->arraySizeOrIndex);
              truncate_store<unsigned char,unsigned int>((unsigned __int8 *)(v49 + 8 * v40 + 28), v51);
              if ( pElements->width )
                v52 = 255;
              else
                v52 = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->mipsCountOrIndex);
              truncate_store<unsigned char,unsigned int>(&v65[(unsigned __int64)v40 / 6].levelIndex, v52);
              if ( pElements->width )
                v53 = 255;
              else
                v53 = R_TG_GetParameterValue(stack->paramArgs, 0, 0, pElements->segmentIndex);
              truncate_store<unsigned char,unsigned int>(&v65[(unsigned __int64)v40 / 6].segmentIndex, v53);
              ++v37;
            }
            while ( v37 < count );
            v67 = v38;
            v6 = v74;
          }
          if ( pElements->elementType != 3 )
          {
            v13 = ++v64;
            goto LABEL_54;
          }
        }
        v13 = v64;
      }
LABEL_54:
      ++pElements;
      if ( pElements->resourceType == eResourceType_Unknown )
      {
        if ( v67 )
        {
          v29 = v75;
          v30 = v67;
          do
          {
            v31 = (_DWORD *)*v29;
            v32 = *((_DWORD *)v29 + 2);
            v29 += 2;
            *v31 = v32;
            --v30;
          }
          while ( v30 );
        }
        v11 = v65;
        break;
      }
    }
  }
  v10->conditionIndex = -1;
  if ( pCondition )
  {
    v33 = 0;
    v10->conditionType = conditionType;
    v34 = pScript->conditionFuncCount[conditionType];
    if ( !v34 )
      goto LABEL_163;
    do
    {
      if ( pCondition == pScript->conditionFuncs[conditionType][v33] )
      {
        v10->conditionIndex = v33;
        conditionIndex = v33;
      }
      else
      {
        conditionIndex = v10->conditionIndex;
      }
      v34 = pScript->conditionFuncCount[conditionType];
      ++v33;
    }
    while ( v33 < v34 );
    if ( conditionIndex == -1 )
    {
LABEL_163:
      if ( v34 >= g_R_TG_conditionLimit_0[conditionType] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 369, ASSERT_TYPE_ASSERT, "(pScript->conditionFuncCount[conditionType] < g_R_TG_conditionLimit[conditionType])", (const char *)&queryFormat, "pScript->conditionFuncCount[conditionType] < g_R_TG_conditionLimit[conditionType]") )
        __debugbreak();
      v54 = pScript->conditionFuncCount[conditionType];
      pScript->conditionFuncCount[conditionType] = v54 + 1;
      v10->conditionIndex = v54;
      pScript->conditionFuncs[conditionType][v54] = pCondition;
    }
  }
  if ( pScript->gpuTimer )
  {
    v55 = 1;
    if ( (int)v10->systemDataCount > 1 )
      v55 = v10->systemDataCount;
    v10->systemDataCount = v55;
    if ( pScript->systemDataUsed + v55 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 378, ASSERT_TYPE_ASSERT, "(pScript->systemDataUsed + taskDesc.systemDataCount <= pScript->dataLimit)", (const char *)&queryFormat, "pScript->systemDataUsed + taskDesc.systemDataCount <= pScript->dataLimit") )
      __debugbreak();
    *v71 = pScript->gpuTimer;
  }
  v56 = v10->createResourceCount;
  v10->orderHint += pScript->orderHint;
  v57 = NULL;
  if ( v56 )
    v57 = v70;
  v22 = v10->attachmentCount == 0;
  v10->pCreateResources = v57;
  v58 = NULL;
  if ( !v22 )
    v58 = v11;
  v22 = v10->userDataCount == 0;
  v10->pAttachments = v58;
  v59 = NULL;
  if ( !v22 )
    v59 = v72;
  v22 = v10->systemDataCount == 0;
  v10->pUserData = v59;
  v60 = NULL;
  if ( !v22 )
    v60 = v71;
  v10->pSystemData = v60;
  pScript->taskResourceCount += v56;
  pScript->attachmentCount += v10->attachmentCount;
  pScript->userDataUsed += v10->userDataCount;
  pScript->systemDataUsed += v10->systemDataCount;
  v61 = pScript->taskCount <= 0x150;
  *(_QWORD *)&pScript->colorFlags = 0i64;
  if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 393, ASSERT_TYPE_ASSERT, "(pScript->taskCount <= tg::taskLimit)", (const char *)&queryFormat, "pScript->taskCount <= tg::taskLimit") )
    __debugbreak();
  if ( pScript->taskResourceCount > 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 394, ASSERT_TYPE_ASSERT, "(pScript->taskResourceCount <= tg::resourceLimit)", (const char *)&queryFormat, "pScript->taskResourceCount <= tg::resourceLimit") )
    __debugbreak();
  if ( pScript->attachmentCount > 0x640 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 395, ASSERT_TYPE_ASSERT, "(pScript->attachmentCount <= pScript->attachmentLimit)", (const char *)&queryFormat, "pScript->attachmentCount <= pScript->attachmentLimit") )
    __debugbreak();
  return v73;
}

/*
==============
R_TG_GetDynamicSizes
==============
*/
tg::Size *R_TG_GetDynamicSizes(R_TG_Script *pContext, const R_TG_DynamicSizes *pCustomDynamicSizes, const tg::Size *resSize, unsigned int defWidth, unsigned int defHeight)
{
  unsigned int dynamicSceneSizeStepCount; 
  __int64 dynamicSizeCount; 
  unsigned int v10; 
  unsigned int v11; 
  const tg::Size *v12; 
  __int64 v13; 
  unsigned int v14; 
  tg::Size *result; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  const tg::Size *v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 

  dynamicSceneSizeStepCount = pContext->dynamicSceneSizeStepCount;
  if ( !dynamicSceneSizeStepCount )
    return 0i64;
  if ( pCustomDynamicSizes )
  {
    if ( dynamicSceneSizeStepCount + pContext->dynamicSizeCount > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 92, ASSERT_TYPE_ASSERT, "(pContext->dynamicSizeCount + pContext->dynamicSceneSizeStepCount <= pContext->dynamicSizeLimit)", (const char *)&queryFormat, "pContext->dynamicSizeCount + pContext->dynamicSceneSizeStepCount <= pContext->dynamicSizeLimit") )
      __debugbreak();
    dynamicSizeCount = pContext->dynamicSizeCount;
    v10 = 0;
    v11 = pContext->dynamicSceneSizeStepCount;
    v12 = &pContext->dynamicSizes[dynamicSizeCount];
    if ( v11 )
    {
      do
      {
        v13 = v10++;
        v12[v13] = pCustomDynamicSizes->sizes[v10];
        v11 = pContext->dynamicSceneSizeStepCount;
      }
      while ( v10 < v11 );
      LODWORD(dynamicSizeCount) = pContext->dynamicSizeCount;
    }
    v14 = v11 + dynamicSizeCount;
    result = (tg::Size *)v12;
    pContext->dynamicSizeCount = v14;
    return result;
  }
  if ( ((defHeight | defWidth) & 0x2000000) == 0 )
    return 0i64;
  if ( defWidth == 0x2000000 && defHeight == 0x2000000 )
    return pContext->dynamicSceneSizes;
  if ( pContext->dynamicSizeCount + dynamicSceneSizeStepCount > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 109, ASSERT_TYPE_ASSERT, "(pContext->dynamicSizeCount + pContext->dynamicSceneSizeStepCount <= pContext->dynamicSizeLimit)", (const char *)&queryFormat, "pContext->dynamicSizeCount + pContext->dynamicSceneSizeStepCount <= pContext->dynamicSizeLimit") )
    __debugbreak();
  v16 = pContext->dynamicSizeCount;
  v17 = 0i64;
  v18 = pContext->dynamicSceneSizeStepCount;
  v19 = &pContext->dynamicSizes[v16];
  if ( v18 )
  {
    do
    {
      v20 = pContext->dynamicSceneSizes[v17].v[0];
      if ( (defWidth & 0x20000000) != 0 )
      {
        v20 = ((defWidth & 0x1FFFFFF) + v20 - 1) / (defWidth & 0x1FFFFFF);
      }
      else if ( (defWidth & 0x10000000) != 0 )
      {
        v20 /= defWidth & 0x1FFFFFF;
      }
      else if ( (defWidth & 0x40000000) != 0 )
      {
        v20 *= defWidth & 0x1FFFFFF;
      }
      v19[v17].v[0] = v20;
      v21 = pContext->dynamicSceneSizes[v17].v[1];
      if ( (defHeight & 0x20000000) != 0 )
      {
        v21 = ((defHeight & 0x1FFFFFF) + v21 - 1) / (defHeight & 0x1FFFFFF);
      }
      else if ( (defHeight & 0x10000000) != 0 )
      {
        v21 /= defHeight & 0x1FFFFFF;
      }
      else if ( (defHeight & 0x40000000) != 0 )
      {
        v21 *= defHeight & 0x1FFFFFF;
      }
      v19[v17].v[1] = v21;
      v17 = (unsigned int)(v17 + 1);
      v18 = pContext->dynamicSceneSizeStepCount;
    }
    while ( (unsigned int)v17 < v18 );
    LODWORD(v16) = pContext->dynamicSizeCount;
  }
  v22 = v18 + v16;
  result = (tg::Size *)v19;
  pContext->dynamicSizeCount = v22;
  return result;
}

/*
==============
R_TG_GetParameterValue
==============
*/
unsigned int R_TG_GetParameterValue(const unsigned int *userParams, unsigned int scene, unsigned int display, unsigned int param)
{
  unsigned int result; 

  result = scene;
  if ( (param & 0x8000000) != 0 )
    return userParams[param & 0x1FFFFFF] + (param & 0x70000000);
  if ( (param & 0x2000000) == 0 )
  {
    if ( (param & 0x4000000) != 0 )
      return R_TG_GetScaledSize(display, param);
    return param;
  }
  if ( (param & 0x20000000) != 0 )
    return ((param & 0x1FFFFFF) + scene - 1) / (param & 0x1FFFFFF);
  if ( (param & 0x10000000) != 0 )
    return scene / (param & 0x1FFFFFF);
  if ( (param & 0x40000000) != 0 )
    return (param & 0x1FFFFFF) * scene;
  return result;
}

/*
==============
R_TG_GetScaledSize
==============
*/
__int64 R_TG_GetScaledSize(unsigned int size, unsigned int param)
{
  if ( (param & 0x20000000) != 0 )
    return ((param & 0x1FFFFFF) + size - 1) / (param & 0x1FFFFFF);
  if ( (param & 0x10000000) != 0 )
    return size / (param & 0x1FFFFFF);
  if ( (param & 0x40000000) != 0 )
    return size * (param & 0x1FFFFFF);
  return size;
}

/*
==============
R_TG_ProcessDefinition
==============
*/
void R_TG_ProcessDefinition(R_TG_TaskDefinition *pDef)
{
  const R_TG_DefElement *pElements; 
  unsigned __int64 p_width; 
  unsigned int v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  int *v7; 
  int v8; 
  unsigned int v9; 
  unsigned int userParamCount; 

  pElements = pDef->pElements;
  *(_QWORD *)&pDef->handleParamCount = 0i64;
  pDef->taskDataCount = 0;
  pDef->dynamicSizes = 0;
  if ( pElements->resourceType )
  {
    p_width = (unsigned __int64)&pElements->width;
    do
    {
      v4 = *(_DWORD *)(p_width - 28);
      if ( v4 > 3 )
      {
        if ( v4 == 5 )
        {
          if ( pDef->taskDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 46, ASSERT_TYPE_ASSERT, "(pDef->taskDataCount == 0)", (const char *)&queryFormat, "pDef->taskDataCount == 0") )
            __debugbreak();
          pDef->taskDataCount = *(_DWORD *)(p_width + 32);
        }
      }
      else
      {
        if ( v4 != 3 )
          ++pDef->handleParamCount;
        v5 = 9i64;
        v6 = 1i64;
        v7 = (int *)p_width;
        if ( p_width > p_width + 32 )
          v5 = 0i64;
        if ( v5 )
        {
          do
          {
            v8 = *v7;
            if ( (*v7 & 0x8000000) != 0 )
            {
              v9 = (v8 & 0x1FFFFFF) + 1;
              userParamCount = pDef->userParamCount;
              if ( userParamCount <= v9 )
                userParamCount = v9;
              pDef->userParamCount = userParamCount;
              v8 = *v7;
            }
            if ( (v8 & 0x1000000) != 0 )
              pDef->dynamicSizes = 1;
            ++v7;
            ++v6;
          }
          while ( v6 <= v5 );
        }
      }
      p_width += 96i64;
    }
    while ( *(_DWORD *)(p_width - 12) );
  }
}

/*
==============
cAddDependencyBetweenPreviousAndNextTask
==============
*/
void cAddDependencyBetweenPreviousAndNextTask(R_TG_Script *pScript)
{
  cAddDependencyBetweenTwoTasks(pScript, pScript->taskCount - 1, pScript->taskCount);
}

/*
==============
cAddDependencyBetweenTwoTasks
==============
*/
void cAddDependencyBetweenTwoTasks(R_TG_Script *pScript, unsigned int srcTask, unsigned int dstTask)
{
  if ( pScript->taskDependencyCount >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 426, ASSERT_TYPE_ASSERT, "(pScript->taskDependencyCount < pScript->taskDependencyLimit)", (const char *)&queryFormat, "pScript->taskDependencyCount < pScript->taskDependencyLimit") )
    __debugbreak();
  truncate_store<unsigned short,unsigned int>(&pScript->taskDependencies[pScript->taskDependencyCount].srcTask, srcTask);
  truncate_store<unsigned short,unsigned int>(&pScript->taskDependencies[pScript->taskDependencyCount].dstTask, dstTask);
  ++pScript->taskDependencyCount;
}

/*
==============
cAddDependencyInNextTask
==============
*/
void cAddDependencyInNextTask(R_TG_Script *pScript, unsigned int srcTask)
{
  if ( srcTask != -1 )
    cAddDependencyBetweenTwoTasks(pScript, srcTask, pScript->taskCount);
}

/*
==============
cAsyncBegin
==============
*/
void cAsyncBegin(R_TG_Script *pScript)
{
  pScript->async = 1;
}

/*
==============
cAsyncEnd
==============
*/
void cAsyncEnd(R_TG_Script *pScript)
{
  pScript->async = 0;
}

/*
==============
cClearColorTargetsInNextTask
==============
*/
void cClearColorTargetsInNextTask(R_TG_Script *pScript)
{
  pScript->colorFlags = 2;
}

/*
==============
cClearDepthTargetInNextTask
==============
*/
void cClearDepthTargetInNextTask(R_TG_Script *pScript)
{
  pScript->depthFlags = 2;
}

/*
==============
cConditionBegin
==============
*/
void cConditionBegin(R_TG_Script *pScript, bool (*pCondition)(const GfxViewInfo *))
{
  pScript->pCondition = pCondition;
  pScript->conditionType = eCondition_CompileTime;
}

/*
==============
cConditionEnd
==============
*/
void cConditionEnd(R_TG_Script *pScript)
{
  pScript->pCondition = NULL;
  pScript->conditionType = eCondition_CompileTime;
}

/*
==============
cConditionLightBegin
==============
*/
void cConditionLightBegin(R_TG_Script *pScript, bool (*pCondition)(const GfxViewInfo *))
{
  pScript->pCondition = pCondition;
  pScript->conditionType = eCondition_RenderTime;
}

/*
==============
cDisplayResource
==============
*/
R_TG_Handle *cDisplayResource(R_TG_Handle *result, R_TG_Script *pScript)
{
  __int64 v6; 
  unsigned int m_allocHeight; 
  int levelCount; 
  bool v9; 
  int v10; 
  __int64 v11; 
  GfxPixelFormat format; 
  unsigned int resourceNameCount; 
  bool v14; 
  R_TG_Handle *v15; 
  R_RT_Handle resulta; 

  _RBX = pScript;
  R_RT_GetGlobal(&resulta, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm { vmovups ymm0, ymmword ptr [rsp+58h+result.m_surfaceID] }
  _RBX->externalResourceNames[_RBX->externalResourceCount] = "backbuffer";
  _RBX->resourceNames[_RBX->resourceNameCount] = "backbuffer";
  _RAX = 32 * (_RBX->externalResourceCount + 1577i64);
  __asm { vmovups ymmword ptr [rax+rbx], ymm0 }
  v6 = (__int64)&_RBX->externalResources[_RBX->externalResourceCount];
  if ( (R_RT_Handle::GetSurface(&resulta)->m_rtFlagsInternal & 8) != 0 )
  {
    *(_DWORD *)v6 = 512;
    *(_DWORD *)(v6 + 8) = R_RT_Handle::GetSurface(&resulta)->m_allocWidth;
    m_allocHeight = R_RT_Handle::GetSurface(&resulta)->m_allocHeight;
    levelCount = 1;
    *(_DWORD *)(v6 + 12) = m_allocHeight;
    *(_DWORD *)(v6 + 16) = 1;
    *(_DWORD *)(v6 + 20) = 1;
  }
  else
  {
    v9 = (R_RT_Handle::GetSurface(&resulta)->m_rtFlagsInternal & 0x18) == 0;
    v10 = 64;
    if ( v9 )
      v10 = 32;
    *(_DWORD *)v6 = v10;
    *(_DWORD *)(v6 + 8) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.width;
    *(_DWORD *)(v6 + 12) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.height;
    *(_DWORD *)(v6 + 16) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.depth;
    *(_DWORD *)(v6 + 20) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.numElements;
    levelCount = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.levelCount;
  }
  *(_DWORD *)(v6 + 24) = levelCount;
  *(_DWORD *)(v6 + 28) = 1;
  v11 = _RBX->externalResourceCount + 1577i64;
  *(_DWORD *)(v6 + 40) = 1;
  *(_QWORD *)(v6 + 64) = (char *)_RBX + 32 * v11;
  format = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.format;
  *(_DWORD *)(v6 + 36) = format;
  *(_DWORD *)(v6 + 32) = format;
  resourceNameCount = _RBX->resourceNameCount;
  ++_RBX->externalResourceCount;
  v14 = _RBX->outputResourceCount < 0x24;
  result->index = resourceNameCount;
  _RBX->resourceNameCount = resourceNameCount + 1;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.cpp", 130, ASSERT_TYPE_ASSERT, "(pScript->outputResourceCount < pScript->outputResourceLimit)", (const char *)&queryFormat, "pScript->outputResourceCount < pScript->outputResourceLimit") )
    __debugbreak();
  _RBX->outputResourceNames[_RBX->outputResourceCount] = "backbuffer";
  v15 = result;
  ++_RBX->outputResourceCount;
  return v15;
}

/*
==============
cExternalResource
==============
*/
R_TG_Handle *cExternalResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, tg::eResourceType type, unsigned int width, unsigned int height, unsigned int depth, unsigned int rtFlags)
{
  __int64 externalResourceCount; 
  tg::ResourceDesc *v10; 
  unsigned int resourceNameCount; 

  pScript->externalResourceNames[pScript->externalResourceCount] = pName;
  pScript->resourceNames[pScript->resourceNameCount] = pName;
  externalResourceCount = pScript->externalResourceCount;
  v10 = &pScript->externalResources[externalResourceCount];
  pScript->externalResourceCount = externalResourceCount + 1;
  v10->size.v[0] = width;
  v10->size.v[1] = height;
  v10->depth = depth;
  v10->pResource = &g_R_TG_CreateHandle;
  *(_QWORD *)&v10->surfaceFormat = 0i64;
  v10->displayFlags = rtFlags;
  v10->type = type;
  v10->arraySize = 1;
  v10->count = 1;
  v10->levels = 1;
  v10->multisample = 1;
  resourceNameCount = pScript->resourceNameCount;
  result->index = resourceNameCount;
  pScript->resourceNameCount = resourceNameCount + 1;
  R_TG_AddOutputResource(pScript, pName);
  return result;
}

/*
==============
cExternalResource
==============
*/
R_TG_Handle *cExternalResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, tg::eResourceType type, unsigned int width, unsigned int height, unsigned int depth, unsigned int arraySize, unsigned int levels, unsigned int multisample, unsigned int format)
{
  __int64 externalResourceCount; 
  tg::ResourceDesc *v13; 
  unsigned int resourceNameCount; 

  pScript->externalResourceNames[pScript->externalResourceCount] = pName;
  pScript->resourceNames[pScript->resourceNameCount] = pName;
  externalResourceCount = pScript->externalResourceCount;
  v13 = &pScript->externalResources[externalResourceCount];
  pScript->externalResourceCount = externalResourceCount + 1;
  v13->size.v[0] = width;
  v13->size.v[1] = height;
  v13->depth = depth;
  v13->arraySize = arraySize;
  v13->pResource = &g_R_TG_CreateHandle;
  v13->levels = levels;
  v13->multisample = multisample;
  v13->textureFormat = format;
  v13->surfaceFormat = format;
  v13->type = type;
  v13->count = 1;
  resourceNameCount = pScript->resourceNameCount;
  result->index = resourceNameCount;
  pScript->resourceNameCount = resourceNameCount + 1;
  R_TG_AddOutputResource(pScript, pName);
  return result;
}

/*
==============
cGpuTimerBegin
==============
*/
void cGpuTimerBegin(R_TG_Script *pScript, unsigned int gpuTimer)
{
  pScript->gpuTimer = gpuTimer;
}

/*
==============
cGpuTimerEnd
==============
*/
void cGpuTimerEnd(R_TG_Script *pScript)
{
  pScript->gpuTimer = 0;
}

/*
==============
cNullResource
==============
*/
R_TG_Handle *cNullResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, tg::eResourceType type)
{
  __int64 externalResourceCount; 
  tg::ResourceDesc *v7; 
  unsigned int resourceNameCount; 

  pScript->externalResourceNames[pScript->externalResourceCount] = pName;
  pScript->resourceNames[pScript->resourceNameCount] = pName;
  externalResourceCount = pScript->externalResourceCount;
  v7 = &pScript->externalResources[externalResourceCount];
  pScript->externalResourceCount = externalResourceCount + 1;
  v7->pResource = &g_R_TG_NullHandle;
  *(_QWORD *)&v7->surfaceFormat = 0i64;
  v7->type = type;
  v7->size.v[0] = 1;
  v7->size.v[1] = 1;
  v7->depth = 1;
  v7->arraySize = 1;
  v7->count = 1;
  v7->levels = 1;
  *(_QWORD *)&v7->multisample = 1i64;
  resourceNameCount = pScript->resourceNameCount;
  result->index = resourceNameCount;
  pScript->resourceNameCount = resourceNameCount + 1;
  return result;
}

/*
==============
cOrderHintBegin
==============
*/
void cOrderHintBegin(R_TG_Script *pScript, int hint)
{
  pScript->orderHint = hint;
}

/*
==============
cOrderHintEnd
==============
*/
void cOrderHintEnd(R_TG_Script *pScript)
{
  pScript->orderHint = 0;
}

/*
==============
cRtGlobalResource
==============
*/
R_TG_Handle *cRtGlobalResource(R_TG_Handle *result, R_TG_Script *pScript, const char *pName, GfxRenderTargetId rtId)
{
  __int64 v9; 
  unsigned int m_allocHeight; 
  int levelCount; 
  bool v12; 
  int v13; 
  __int64 v14; 
  GfxPixelFormat format; 
  unsigned int resourceNameCount; 
  R_RT_Handle resulta; 

  _RDI = pScript;
  R_RT_GetGlobal(&resulta, rtId);
  __asm { vmovups ymm0, ymmword ptr [rsp+48h+result.m_surfaceID] }
  _RDI->externalResourceNames[_RDI->externalResourceCount] = pName;
  _RDI->resourceNames[_RDI->resourceNameCount] = pName;
  _RAX = 32 * (_RDI->externalResourceCount + 1577i64);
  __asm { vmovups ymmword ptr [rax+rdi], ymm0 }
  v9 = (__int64)&_RDI->externalResources[_RDI->externalResourceCount];
  if ( (R_RT_Handle::GetSurface(&resulta)->m_rtFlagsInternal & 8) != 0 )
  {
    *(_DWORD *)v9 = 512;
    *(_DWORD *)(v9 + 8) = R_RT_Handle::GetSurface(&resulta)->m_allocWidth;
    m_allocHeight = R_RT_Handle::GetSurface(&resulta)->m_allocHeight;
    levelCount = 1;
    *(_DWORD *)(v9 + 12) = m_allocHeight;
    *(_DWORD *)(v9 + 16) = 1;
    *(_DWORD *)(v9 + 20) = 1;
  }
  else
  {
    v12 = (R_RT_Handle::GetSurface(&resulta)->m_rtFlagsInternal & 0x18) == 0;
    v13 = 64;
    if ( v12 )
      v13 = 32;
    *(_DWORD *)v9 = v13;
    *(_DWORD *)(v9 + 8) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.width;
    *(_DWORD *)(v9 + 12) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.height;
    *(_DWORD *)(v9 + 16) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.depth;
    *(_DWORD *)(v9 + 20) = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.numElements;
    levelCount = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.levelCount;
  }
  *(_DWORD *)(v9 + 24) = levelCount;
  *(_DWORD *)(v9 + 28) = 1;
  v14 = _RDI->externalResourceCount + 1577i64;
  *(_DWORD *)(v9 + 40) = 1;
  *(_QWORD *)(v9 + 64) = (char *)_RDI + 32 * v14;
  format = R_RT_Handle::GetSurface(&resulta)->m_image.m_base.format;
  *(_DWORD *)(v9 + 36) = format;
  *(_DWORD *)(v9 + 32) = format;
  resourceNameCount = _RDI->resourceNameCount;
  ++_RDI->externalResourceCount;
  result->index = resourceNameCount;
  _RDI->resourceNameCount = resourceNameCount + 1;
  R_TG_AddOutputResource(_RDI, pName);
  return result;
}

