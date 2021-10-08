/*
==============
tg::ResourceTracker::SetRenderPassDepthSurface
==============
*/

void __fastcall tg::ResourceTracker::SetRenderPassDepthSurface(tg::ResourceTracker *this, const tg::ResourceDesc *pDesc, tg::eResourceState state)
{
  ?SetRenderPassDepthSurface@ResourceTracker@tg@@QEAAXPEBUResourceDesc@2@W4eResourceState@2@@Z(this, pDesc, state);
}

/*
==============
tg::ResourceTracker::SetRenderPassColourSurface
==============
*/

void __fastcall tg::ResourceTracker::SetRenderPassColourSurface(tg::ResourceTracker *this, const tg::ResourceDesc *pDesc, tg::eResourceState state)
{
  ?SetRenderPassColourSurface@ResourceTracker@tg@@QEAAXPEBUResourceDesc@2@W4eResourceState@2@@Z(this, pDesc, state);
}

/*
==============
tg::ResourceTracker::AddLogicalResources
==============
*/

void __fastcall tg::ResourceTracker::AddLogicalResources(tg::ResourceTracker *this, tg::Task *pTask)
{
  ?AddLogicalResources@ResourceTracker@tg@@QEAAXPEAVTask@2@@Z(this, pTask);
}

/*
==============
tg::ResourceTracker::EvaluateTask
==============
*/

void __fastcall tg::ResourceTracker::EvaluateTask(tg::ResourceTracker *this, const tg::Task *pTask, unsigned int queueIndex, bool *renderPassCompatible, bool *renderTextureCompatible, unsigned int *pipelineBarrierCount)
{
  ?EvaluateTask@ResourceTracker@tg@@QEBAXPEBVTask@2@IAEA_N1AEAI@Z(this, pTask, queueIndex, renderPassCompatible, renderTextureCompatible, pipelineBarrierCount);
}

/*
==============
tg::ResourceTracker::GetConditionFlag
==============
*/

unsigned int __fastcall tg::ResourceTracker::GetConditionFlag(tg::ResourceTracker *this, tg::eCondition conditionType, unsigned int conditionIndex)
{
  return ?GetConditionFlag@ResourceTracker@tg@@QEAAIW4eCondition@2@I@Z(this, conditionType, conditionIndex);
}

/*
==============
tg::ResourceTracker::HasPendingReleaseResources
==============
*/

bool __fastcall tg::ResourceTracker::HasPendingReleaseResources(tg::ResourceTracker *this, const tg::Task *pTask)
{
  return ?HasPendingReleaseResources@ResourceTracker@tg@@QEBA_NPEBVTask@2@@Z(this, pTask);
}

/*
==============
tg::ResourceTracker::AddLogicalResource
==============
*/

unsigned int __fastcall tg::ResourceTracker::AddLogicalResource(tg::ResourceTracker *this, const char *pName, unsigned int nameHash, tg::eResourceType type, bool addRef)
{
  return ?AddLogicalResource@ResourceTracker@tg@@QEAAIPEBDIW4eResourceType@2@_N@Z(this, pName, nameHash, type, addRef);
}

/*
==============
tg::ResourceTracker::GetPhysicalResourceInfo
==============
*/

unsigned int __fastcall tg::ResourceTracker::GetPhysicalResourceInfo(tg::ResourceTracker *this, tg::ResourceAttachment *pPhysical, unsigned __int16 cmdIndex)
{
  return ?GetPhysicalResourceInfo@ResourceTracker@tg@@QEAAIPEAUResourceAttachment@2@G@Z(this, pPhysical, cmdIndex);
}

/*
==============
tg::ResourceTracker::ResourceTracker
==============
*/

void __fastcall tg::ResourceTracker::ResourceTracker(tg::ResourceTracker *this)
{
  ??0ResourceTracker@tg@@QEAA@XZ(this);
}

/*
==============
tg::ResourceTracker::UpdateConditions
==============
*/

void __fastcall tg::ResourceTracker::UpdateConditions(tg::ResourceTracker *this, tg::Task *pTask)
{
  ?UpdateConditions@ResourceTracker@tg@@QEAAXPEAVTask@2@@Z(this, pTask);
}

/*
==============
tg::ResourceTracker::RemoveLogicalResources
==============
*/

void __fastcall tg::ResourceTracker::RemoveLogicalResources(tg::ResourceTracker *this, const tg::Task *pTask)
{
  ?RemoveLogicalResources@ResourceTracker@tg@@QEAAXPEBVTask@2@@Z(this, pTask);
}

/*
==============
tg::ResourceTracker::UpdatePhysicalResource
==============
*/

void __fastcall tg::ResourceTracker::UpdatePhysicalResource(tg::ResourceTracker *this, tg::ResourceAttachment *pPhysical, unsigned __int16 cmdIndex)
{
  ?UpdatePhysicalResource@ResourceTracker@tg@@QEAAXPEAUResourceAttachment@2@G@Z(this, pPhysical, cmdIndex);
}

/*
==============
tg::ResourceTracker::UpdatePhysicalResources
==============
*/

bool __fastcall tg::ResourceTracker::UpdatePhysicalResources(tg::ResourceTracker *this, tg::Task *pTask, unsigned __int16 cmdIndex)
{
  return ?UpdatePhysicalResources@ResourceTracker@tg@@QEAA_NPEAVTask@2@G@Z(this, pTask, cmdIndex);
}

/*
==============
tg::ResourceTracker::AssignPhysicalResourceToLogicalResource
==============
*/

void __fastcall tg::ResourceTracker::AssignPhysicalResourceToLogicalResource(tg::ResourceTracker *this, const char *pDebugName, unsigned int nameHash, unsigned int resourceIndex)
{
  ?AssignPhysicalResourceToLogicalResource@ResourceTracker@tg@@QEAAXPEBDII@Z(this, pDebugName, nameHash, resourceIndex);
}

/*
==============
tg::ResourceTracker::UpdateLogicalResource
==============
*/

unsigned int __fastcall tg::ResourceTracker::UpdateLogicalResource(tg::ResourceTracker *this, unsigned int nameHash, unsigned int physicalIndex)
{
  return ?UpdateLogicalResource@ResourceTracker@tg@@QEAAIII@Z(this, nameHash, physicalIndex);
}

/*
==============
tg::ResourceTracker::ResourceTracker
==============
*/
void tg::ResourceTracker::ResourceTracker(tg::ResourceTracker *this)
{
  memset_0(this, 0, sizeof(tg::ResourceTracker));
}

/*
==============
tg::ResourceTracker::AddLogicalResource
==============
*/
__int64 tg::ResourceTracker::AddLogicalResource(tg::ResourceTracker *this, const char *pName, unsigned int nameHash, tg::eResourceType type, bool addRef)
{
  unsigned int v8; 
  unsigned int m_logicalResourceInfoCount; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v8 = 0;
  m_logicalResourceInfoCount = this->m_logicalResourceInfoCount;
  if ( m_logicalResourceInfoCount )
  {
    while ( this->m_logicalResourceInfos[v8].nameHash != nameHash )
    {
      if ( ++v8 >= m_logicalResourceInfoCount )
        goto LABEL_12;
    }
    if ( addRef )
    {
      if ( (type & 0x160) != 0 )
        ++this->m_logicalResourceInfos[v8].surfaceRef;
      if ( (type & 0x180) != 0 )
        ++this->m_logicalResourceInfos[v8].textureRef;
      ++this->m_logicalResourceInfos[v8].ref;
    }
    this->m_logicalResourceInfos[v8].physicalCount = 0;
    v10 = v8;
    *(_QWORD *)this->m_logicalResourceInfos[v10].physicalBits.bits = 0i64;
    *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[2] = 0i64;
    *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[4] = 0i64;
    *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[6] = 0i64;
    *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[8] = 0i64;
  }
LABEL_12:
  v11 = this->m_logicalResourceInfoCount;
  if ( v8 != (_DWORD)v11 )
    return v8;
  v12 = v11;
  this->m_logicalResourceInfos[v11].pName = pName;
  this->m_logicalResourceInfos[this->m_logicalResourceInfoCount].nameHash = nameHash;
  if ( addRef )
  {
    if ( (type & 0x160) != 0 )
      ++this->m_logicalResourceInfos[v12].surfaceRef;
    if ( (type & 0x180) != 0 )
      ++this->m_logicalResourceInfos[v12].textureRef;
    ++this->m_logicalResourceInfos[this->m_logicalResourceInfoCount].ref;
  }
  ++this->m_logicalResourceInfoCount;
  return (unsigned int)v11;
}

/*
==============
tg::ResourceTracker::AddLogicalResources
==============
*/
void tg::ResourceTracker::AddLogicalResources(tg::ResourceTracker *this, tg::Task *pTask)
{
  unsigned int i; 
  unsigned int m_logicalResourceInfoCount; 
  unsigned int v4; 
  tg::ResourceAttachment *v5; 
  tg::eResourceType type; 
  unsigned int nameHashInput; 
  const char *pNameInput; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *pNameOutput; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int nameHashOutput; 
  __int64 v17; 
  __int64 v18; 

  for ( i = 0; i < pTask->m_attachmentCount; v5->globalLogicalIndex[1] = v15 )
  {
    m_logicalResourceInfoCount = this->m_logicalResourceInfoCount;
    v4 = 0;
    v5 = &pTask->m_attachments[i];
    type = v5->type;
    nameHashInput = v5->nameHashInput;
    pNameInput = v5->pNameInput;
    if ( m_logicalResourceInfoCount )
    {
      while ( this->m_logicalResourceInfos[v4].nameHash != nameHashInput )
      {
        if ( ++v4 >= m_logicalResourceInfoCount )
          goto LABEL_11;
      }
      if ( (type & 0x160) != 0 )
        ++this->m_logicalResourceInfos[v4].surfaceRef;
      if ( (type & 0x180) != 0 )
        ++this->m_logicalResourceInfos[v4].textureRef;
      v9 = v4;
      ++this->m_logicalResourceInfos[v9].ref;
      this->m_logicalResourceInfos[v9].physicalCount = 0;
      v10 = v4;
      *(_QWORD *)this->m_logicalResourceInfos[v10].physicalBits.bits = 0i64;
      *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[2] = 0i64;
      *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[4] = 0i64;
      *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[6] = 0i64;
      *(_QWORD *)&this->m_logicalResourceInfos[v10].physicalBits.bits[8] = 0i64;
    }
LABEL_11:
    v11 = this->m_logicalResourceInfoCount;
    if ( v4 == (_DWORD)v11 )
    {
      v4 = this->m_logicalResourceInfoCount;
      v12 = v11;
      this->m_logicalResourceInfos[v11].pName = pNameInput;
      this->m_logicalResourceInfos[this->m_logicalResourceInfoCount].nameHash = nameHashInput;
      if ( (type & 0x160) != 0 )
        ++this->m_logicalResourceInfos[v12].surfaceRef;
      if ( (type & 0x180) != 0 )
        ++this->m_logicalResourceInfos[v12].textureRef;
      ++this->m_logicalResourceInfos[this->m_logicalResourceInfoCount++].ref;
    }
    v5->globalLogicalIndex[0] = v4;
    pNameOutput = v5->pNameOutput;
    if ( pNameOutput )
    {
      v14 = this->m_logicalResourceInfoCount;
      v15 = 0;
      nameHashOutput = v5->nameHashOutput;
      if ( v14 )
      {
        while ( this->m_logicalResourceInfos[v15].nameHash != nameHashOutput )
        {
          if ( ++v15 >= v14 )
            goto LABEL_23;
        }
        this->m_logicalResourceInfos[v15].physicalCount = 0;
        v17 = v15;
        *(_QWORD *)this->m_logicalResourceInfos[v17].physicalBits.bits = 0i64;
        *(_QWORD *)&this->m_logicalResourceInfos[v17].physicalBits.bits[2] = 0i64;
        *(_QWORD *)&this->m_logicalResourceInfos[v17].physicalBits.bits[4] = 0i64;
        *(_QWORD *)&this->m_logicalResourceInfos[v17].physicalBits.bits[6] = 0i64;
        *(_QWORD *)&this->m_logicalResourceInfos[v17].physicalBits.bits[8] = 0i64;
      }
LABEL_23:
      v18 = this->m_logicalResourceInfoCount;
      if ( v15 == (_DWORD)v18 )
      {
        v15 = this->m_logicalResourceInfoCount;
        this->m_logicalResourceInfos[v18].pName = pNameOutput;
        this->m_logicalResourceInfos[this->m_logicalResourceInfoCount++].nameHash = nameHashOutput;
      }
    }
    else
    {
      v15 = -1;
    }
    ++i;
  }
}

/*
==============
tg::ResourceTracker::AssignPhysicalResourceToLogicalResource
==============
*/
void tg::ResourceTracker::AssignPhysicalResourceToLogicalResource(tg::ResourceTracker *this, const char *pDebugName, unsigned int nameHash, unsigned int resourceIndex)
{
  unsigned int m_logicalResourceInfoCount; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned int *p_nameHash; 
  tg::PhysicalResourceInfo *v10; 
  int v11; 
  unsigned __int64 v12; 
  __int64 logicalCount; 
  int v14; 
  char *v15; 

  m_logicalResourceInfoCount = this->m_logicalResourceInfoCount;
  v5 = 0i64;
  v6 = resourceIndex;
  if ( m_logicalResourceInfoCount )
  {
    p_nameHash = &this->m_logicalResourceInfos[0].nameHash;
    while ( *p_nameHash != nameHash )
    {
      v5 = (unsigned int)(v5 + 1);
      p_nameHash += 18;
      if ( (unsigned int)v5 >= m_logicalResourceInfoCount )
        goto LABEL_5;
    }
    v14 = 1 << (resourceIndex & 0x1F);
    if ( (v14 & this->m_logicalResourceInfos[v5].physicalBits.bits[v6 >> 5]) == 0 )
    {
      v15 = (char *)this + 72 * v5;
      *(_DWORD *)&v15[4 * (v6 >> 5) + 79396] |= v14;
      ++*((_DWORD *)v15 + 19848);
    }
  }
  else
  {
LABEL_5:
    LODWORD(v5) = 0;
  }
  v10 = &this->m_physicalResourceInfos[v6];
  v11 = 1 << (v5 & 0x1F);
  v12 = (unsigned __int64)(unsigned int)v5 >> 5;
  if ( (v11 & v10->logicalBits.bits[v12]) == 0 )
  {
    logicalCount = v10->logicalCount;
    if ( (unsigned int)logicalCount < 8 )
      v10->pNames[logicalCount] = pDebugName;
    v10->logicalBits.bits[v12] |= v11;
    ++v10->logicalCount;
  }
}

/*
==============
tg::ResourceTracker::EvaluateTask
==============
*/
void tg::ResourceTracker::EvaluateTask(tg::ResourceTracker *this, const tg::Task *pTask, unsigned int queueIndex, bool *renderPassCompatible, bool *renderTextureCompatible, unsigned int *pipelineBarrierCount)
{
  __int64 v8; 
  bool v9; 
  __int64 m_depthSurfaceIndex; 
  tg::ResourceDesc *pDepthSurface; 
  tg::eResourceState depthState; 
  __int64 i; 
  __int64 v14; 
  __int64 v15; 
  tg::ResourceAttachment *m_attachments; 
  tg::eResourceState v17; 
  const tg::Task **v18; 
  const tg::Task *v19; 
  unsigned int v20; 
  const tg::Task *v21; 
  __int64 v22; 
  tg::ResourceAttachment *v23; 
  unsigned int nameHashOutput; 
  unsigned int v25; 
  unsigned __int64 v26; 
  tg::ResourceAttachment *v27; 
  const tg::Task *v28; 

  v8 = queueIndex;
  *renderTextureCompatible = 0;
  if ( !queueIndex )
  {
    v9 = !this->m_renderPass.colourCount && !this->m_renderPass.pDepthSurface;
    *renderPassCompatible = v9;
    m_depthSurfaceIndex = pTask->m_depthSurfaceIndex;
    if ( (_DWORD)m_depthSurfaceIndex != -1 )
    {
      pDepthSurface = (tg::ResourceDesc *)this->m_renderPass.pDepthSurface;
      if ( pDepthSurface )
      {
        if ( pTask->m_attachments[m_depthSurfaceIndex].pDesc == pDepthSurface )
        {
          *renderPassCompatible = 1;
          depthState = this->m_renderPass.depthState;
          if ( depthState != eResourceState_Initial && pTask->m_attachments[pTask->m_depthSurfaceIndex].state != depthState )
            ++*pipelineBarrierCount;
        }
      }
      else
      {
        *renderPassCompatible = 1;
      }
    }
    for ( i = 0i64; (unsigned int)i < pTask->m_colourSurfaceCount; i = (unsigned int)(i + 1) )
    {
      v14 = 0i64;
      if ( this->m_renderPass.colourCount )
      {
        v15 = pTask->m_colourSurfaceIndices[i];
        do
        {
          m_attachments = pTask->m_attachments;
          if ( m_attachments[v15].pDesc == this->m_renderPass.pColourSurfaces[v14] )
          {
            v17 = this->m_renderPass.colourState[v14];
            if ( v17 != eResourceState_Initial && m_attachments[v15].state != v17 )
              ++*pipelineBarrierCount;
            *renderPassCompatible = 1;
          }
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < this->m_renderPass.colourCount );
      }
    }
  }
  v18 = &this->m_pPrevTask[v8];
  v19 = *v18;
  if ( *v18 )
  {
    v20 = 0;
    if ( v19->m_attachmentCount )
    {
      v21 = *v18;
      do
      {
        v22 = v20;
        v23 = v19->m_attachments;
        v19 = v21;
        if ( v23[v22].state == eResourceState_Write )
        {
          nameHashOutput = v23[v22].nameHashOutput;
          v25 = 0;
          if ( pTask->m_attachmentCount )
          {
            do
            {
              v26 = v25;
              v27 = pTask->m_attachments;
              if ( v27[v26].nameHashInput == nameHashOutput )
              {
                v28 = *v18;
                if ( (*v18)->m_attachments[v22].state != v27[v26].state )
                {
                  ++*pipelineBarrierCount;
                  v28 = *v18;
                }
                if ( v28->m_attachments[v22].type == eResourceType_RenderTexture && pTask->m_attachments[v26].type == eResourceType_RenderTexture )
                  *renderTextureCompatible = 1;
              }
              ++v25;
            }
            while ( v25 < pTask->m_attachmentCount );
            v19 = *v18;
          }
        }
        ++v20;
        v21 = v19;
      }
      while ( v20 < v19->m_attachmentCount );
    }
  }
}

/*
==============
tg::ResourceTracker::GetConditionFlag
==============
*/
__int64 tg::ResourceTracker::GetConditionFlag(tg::ResourceTracker *this, tg::eCondition conditionType, unsigned int conditionIndex)
{
  unsigned int *v5; 
  int v6; 

  if ( conditionIndex == -1 )
    return 0i64;
  ++this->m_conditionalTaskCount[conditionType];
  v5 = &this->m_conditionCount[conditionType];
  v6 = 0;
  if ( *v5 )
  {
    while ( this->m_conditions[conditionType][v6] != conditionIndex )
    {
      if ( ++v6 >= *v5 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    this->m_conditions[conditionType][v6] = conditionIndex;
    ++*v5;
  }
  return (unsigned int)(1 << v6);
}

/*
==============
tg::ResourceTracker::GetPhysicalResourceInfo
==============
*/
__int64 tg::ResourceTracker::GetPhysicalResourceInfo(tg::ResourceTracker *this, tg::ResourceAttachment *pPhysical, unsigned __int16 cmdIndex)
{
  __int64 m_physicalResourceInfoCount; 
  __int64 result; 
  tg::PhysicalResourceInfo *v7; 
  __int64 v8; 
  tg::eResourceState state; 

  m_physicalResourceInfoCount = this->m_physicalResourceInfoCount;
  for ( result = 0i64; (unsigned int)result < (unsigned int)m_physicalResourceInfoCount; result = (unsigned int)(result + 1) )
  {
    if ( this->m_physicalResourceInfos[(unsigned int)result].pDesc == pPhysical->pDesc )
      break;
  }
  if ( (_DWORD)result == (_DWORD)m_physicalResourceInfoCount )
  {
    v7 = &this->m_physicalResourceInfos[m_physicalResourceInfoCount];
    v7->pDesc = pPhysical->pDesc;
    v7->access = 0;
    v7->type = pPhysical->type;
    *(_QWORD *)&v7->transitions = 0i64;
    *(_QWORD *)&v7->seenCmdBits.bits[1] = 0i64;
    *(_QWORD *)&v7->seenCmdBits.bits[3] = 0i64;
    *(_QWORD *)&v7->seenCmdBits.bits[5] = 0i64;
    *(_QWORD *)&v7->seenCmdBits.bits[7] = 0i64;
    *(_QWORD *)&v7->seenCmdBits.bits[9] = 0i64;
    *(_QWORD *)v7->seenCmdTypeFlags = 0i64;
    *(_QWORD *)v7->seenCmdIndexTypeFirst = -1i64;
    v7->seenCmdIndexFirst[0] = cmdIndex;
    v7->seenCmdIndexLast = cmdIndex;
    v7->seenCmdIndexFirst[1] = -1;
    v7->seenCmdBufFlags = 0;
    v7->logicalCount = 0;
    v7->pFirstInfo = pPhysical;
    v7->pLastInfo = NULL;
    pPhysical->transitions = 0;
    pPhysical->flags |= v7->pDesc->resourceFlags & 2 | 4;
    ++this->m_physicalResourceInfoCount;
    pPhysical->cmdIndex = cmdIndex;
    pPhysical->resourceIndex = result;
  }
  else
  {
    v8 = (unsigned int)result;
    if ( (pPhysical->flags & 0x10) != 0 && this->m_physicalResourceInfos[v8].seenCmdIndexFirst[1] == 0xFFFF )
      this->m_physicalResourceInfos[v8].seenCmdIndexFirst[1] = cmdIndex;
    state = pPhysical->state;
    if ( state == eResourceState_Unknown )
    {
      state = this->m_physicalResourceInfos[v8].state;
      pPhysical->state = state;
      pPhysical->access = this->m_physicalResourceInfos[v8].access;
    }
    if ( this->m_physicalResourceInfos[v8].state != state )
      pPhysical->transitions = ++this->m_physicalResourceInfos[v8].transitions;
    pPhysical->cmdIndex = cmdIndex;
    pPhysical->resourceIndex = result;
  }
  return result;
}

/*
==============
tg::ResourceTracker::HasPendingReleaseResources
==============
*/
char tg::ResourceTracker::HasPendingReleaseResources(tg::ResourceTracker *this, const tg::Task *pTask)
{
  unsigned int m_attachmentCount; 
  unsigned int v3; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v6; 
  __int64 v7; 

  m_attachmentCount = pTask->m_attachmentCount;
  v3 = 0;
  if ( !m_attachmentCount )
    return 0;
  m_attachments = pTask->m_attachments;
  while ( 1 )
  {
    v6 = v3;
    v7 = m_attachments[v6].globalLogicalIndex[1];
    if ( ((_DWORD)v7 == -1 || !this->m_logicalResourceInfos[v7].ref) && this->m_logicalResourceInfos[m_attachments[v6].globalLogicalIndex[0]].ref <= 1 )
      break;
    if ( ++v3 >= m_attachmentCount )
      return 0;
  }
  return 1;
}

/*
==============
tg::ResourceTracker::RemoveLogicalResources
==============
*/
void tg::ResourceTracker::RemoveLogicalResources(tg::ResourceTracker *this, const tg::Task *pTask)
{
  unsigned int i; 
  unsigned __int64 v3; 
  __int64 v4; 
  tg::ResourceAttachment *m_attachments; 

  for ( i = 0; i < pTask->m_attachmentCount; ++i )
  {
    v3 = i;
    v4 = pTask->m_attachments[v3].globalLogicalIndex[0];
    --this->m_logicalResourceInfos[v4].ref;
    m_attachments = pTask->m_attachments;
    if ( (m_attachments[v3].type & 0x160) != 0 )
    {
      --this->m_logicalResourceInfos[v4].surfaceRef;
      m_attachments = pTask->m_attachments;
    }
    if ( (m_attachments[v3].type & 0x180) != 0 )
      --this->m_logicalResourceInfos[v4].textureRef;
  }
}

/*
==============
tg::ResourceTracker::SetRenderPassColourSurface
==============
*/
void tg::ResourceTracker::SetRenderPassColourSurface(tg::ResourceTracker *this, const tg::ResourceDesc *pDesc, tg::eResourceState state)
{
  __int64 colourCount; 
  __int64 v4; 

  colourCount = this->m_renderPass.colourCount;
  v4 = 0i64;
  if ( (_DWORD)colourCount )
  {
    while ( this->m_renderPass.pColourSurfaces[v4] != pDesc )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= (unsigned int)colourCount )
        goto LABEL_4;
    }
    this->m_renderPass.colourState[v4] = state;
  }
  else
  {
LABEL_4:
    this->m_renderPass.colourState[colourCount] = state;
    this->m_renderPass.pColourSurfaces[this->m_renderPass.colourCount++] = pDesc;
    this->m_renderPass.active = 1;
  }
}

/*
==============
tg::ResourceTracker::SetRenderPassDepthSurface
==============
*/
void tg::ResourceTracker::SetRenderPassDepthSurface(tg::ResourceTracker *this, const tg::ResourceDesc *pDesc, tg::eResourceState state)
{
  this->m_renderPass.pDepthSurface = pDesc;
  this->m_renderPass.depthState = state;
  this->m_renderPass.active = 1;
}

/*
==============
tg::ResourceTracker::UpdateConditions
==============
*/
void tg::ResourceTracker::UpdateConditions(tg::ResourceTracker *this, tg::Task *pTask)
{
  unsigned int m_conditionIndex; 
  __int64 v3; 
  unsigned int v5; 
  __int64 m_conditionType; 
  unsigned int *v7; 
  int v8; 
  bool v9; 
  unsigned int i; 
  __int64 v11; 
  __int64 v12; 

  m_conditionIndex = pTask->m_conditionIndex;
  v3 = 0i64;
  if ( m_conditionIndex == -1 )
  {
    v5 = 0;
  }
  else
  {
    m_conditionType = pTask->m_conditionType;
    ++this->m_conditionalTaskCount[m_conditionType];
    v7 = &this->m_conditionCount[m_conditionType];
    v8 = 0;
    if ( *v7 )
    {
      while ( this->m_conditions[m_conditionType][v8] != m_conditionIndex )
      {
        if ( ++v8 >= *v7 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      this->m_conditions[m_conditionType][v8] = m_conditionIndex;
      ++*v7;
    }
    v5 = 1 << v8;
  }
  v9 = pTask->m_conditionType == eCondition_CompileTime;
  pTask->m_conditionFlag = v5;
  if ( v9 )
  {
    for ( i = 0; i < pTask->m_attachmentCount; pTask->m_attachments[v11].conditionFlag = pTask->m_conditionFlag )
      v11 = i++;
  }
  if ( pTask->m_descCount )
  {
    do
    {
      v12 = v3;
      v3 = (unsigned int)(v3 + 1);
      pTask->m_descs[v12].conditionType = pTask->m_conditionType;
      pTask->m_descs[v12].conditionFlag = pTask->m_conditionFlag;
    }
    while ( (unsigned int)v3 < pTask->m_descCount );
  }
}

/*
==============
tg::ResourceTracker::UpdateLogicalResource
==============
*/
__int64 tg::ResourceTracker::UpdateLogicalResource(tg::ResourceTracker *this, unsigned int nameHash, unsigned int physicalIndex)
{
  unsigned int m_logicalResourceInfoCount; 
  __int64 result; 
  unsigned int *i; 
  unsigned __int64 v6; 
  int v7; 
  char *v8; 

  m_logicalResourceInfoCount = this->m_logicalResourceInfoCount;
  result = 0i64;
  if ( !m_logicalResourceInfoCount )
    return 0i64;
  for ( i = &this->m_logicalResourceInfos[0].nameHash; *i != nameHash; i += 18 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= m_logicalResourceInfoCount )
      return 0i64;
  }
  v6 = (unsigned __int64)physicalIndex >> 5;
  v7 = 1 << (physicalIndex & 0x1F);
  if ( (v7 & this->m_logicalResourceInfos[result].physicalBits.bits[v6]) == 0 )
  {
    v8 = (char *)this + 72 * result;
    *(_DWORD *)&v8[4 * v6 + 79396] |= v7;
    ++*((_DWORD *)v8 + 19848);
  }
  return result;
}

/*
==============
tg::ResourceTracker::UpdatePhysicalResource
==============
*/
void tg::ResourceTracker::UpdatePhysicalResource(tg::ResourceTracker *this, tg::ResourceAttachment *pPhysical, unsigned __int16 cmdIndex)
{
  __int64 m_physicalResourceInfoCount; 
  unsigned int i; 
  tg::PhysicalResourceInfo *v8; 
  tg::PhysicalResourceInfo *v9; 
  tg::eResourceState state; 
  const char *pNameInput; 
  unsigned int nameHashInput; 
  tg::PhysicalResourceInfo *v13; 
  unsigned int nameHashOutput; 
  tg::ResourceAttachment *pLastInfo; 
  tg::eResourceType type; 
  char *v17; 

  if ( pPhysical->state != eResourceState_Reference )
  {
    m_physicalResourceInfoCount = this->m_physicalResourceInfoCount;
    for ( i = 0; i < (unsigned int)m_physicalResourceInfoCount; ++i )
    {
      if ( this->m_physicalResourceInfos[i].pDesc == pPhysical->pDesc )
        break;
    }
    if ( i == (_DWORD)m_physicalResourceInfoCount )
    {
      v8 = &this->m_physicalResourceInfos[m_physicalResourceInfoCount];
      v8->pDesc = pPhysical->pDesc;
      v8->access = 0;
      v8->type = pPhysical->type;
      *(_QWORD *)&v8->transitions = 0i64;
      *(_QWORD *)&v8->seenCmdBits.bits[1] = 0i64;
      *(_QWORD *)&v8->seenCmdBits.bits[3] = 0i64;
      *(_QWORD *)&v8->seenCmdBits.bits[5] = 0i64;
      *(_QWORD *)&v8->seenCmdBits.bits[7] = 0i64;
      *(_QWORD *)&v8->seenCmdBits.bits[9] = 0i64;
      *(_QWORD *)v8->seenCmdTypeFlags = 0i64;
      *(_QWORD *)v8->seenCmdIndexTypeFirst = -1i64;
      v8->seenCmdIndexFirst[0] = cmdIndex;
      v8->seenCmdIndexLast = cmdIndex;
      v8->seenCmdIndexFirst[1] = -1;
      v8->seenCmdBufFlags = 0;
      v8->logicalCount = 0;
      v8->pFirstInfo = pPhysical;
      v8->pLastInfo = NULL;
      pPhysical->transitions = 0;
      pPhysical->flags |= v8->pDesc->resourceFlags & 2 | 4;
      ++this->m_physicalResourceInfoCount;
    }
    else
    {
      v9 = &this->m_physicalResourceInfos[i];
      if ( (pPhysical->flags & 0x10) != 0 && v9->seenCmdIndexFirst[1] == 0xFFFF )
        v9->seenCmdIndexFirst[1] = cmdIndex;
      state = pPhysical->state;
      if ( state == eResourceState_Unknown )
      {
        state = v9->state;
        pPhysical->state = state;
        pPhysical->access = v9->access;
      }
      if ( v9->state != state )
        pPhysical->transitions = ++v9->transitions;
    }
    pNameInput = pPhysical->pNameInput;
    nameHashInput = pPhysical->nameHashInput;
    v13 = &this->m_physicalResourceInfos[i];
    pPhysical->cmdIndex = cmdIndex;
    pPhysical->resourceIndex = i;
    tg::ResourceTracker::AssignPhysicalResourceToLogicalResource(this, pNameInput, nameHashInput, i);
    nameHashOutput = pPhysical->nameHashOutput;
    if ( nameHashOutput != pPhysical->nameHashInput )
      tg::ResourceTracker::AssignPhysicalResourceToLogicalResource(this, pPhysical->pNameOutput, nameHashOutput, i);
    pLastInfo = v13->pLastInfo;
    if ( pLastInfo )
    {
      pLastInfo->pNext = pPhysical;
      pPhysical->pPrev = v13->pLastInfo;
    }
    type = pPhysical->type;
    if ( ((type - 32) & 0xFFFFFFDF) == 0 || type == eResourceType_RenderTexture )
    {
      v13->seenRopReadWrite = 1;
      v13->seenCmdTypeFlags[0] |= pPhysical->type;
      if ( v13->seenCmdIndexTypeFirst[0] == 0xFFFF )
        v13->seenCmdIndexTypeFirst[0] = cmdIndex;
      v13->seenCmdIndexTypeLast[0] = cmdIndex;
      type = pPhysical->type;
    }
    if ( ((type - 128) & 0xFFFFFF7F) == 0 || type == eResourceType_Buffer )
    {
      v13->seenCmdTypeFlags[1] |= type;
      if ( v13->seenCmdIndexTypeFirst[1] == 0xFFFF )
        v13->seenCmdIndexTypeFirst[1] = cmdIndex;
      v13->seenCmdIndexTypeLast[1] = cmdIndex;
      type = pPhysical->type;
    }
    if ( (type == eResourceType_Texture || type == eResourceType_Buffer) && pPhysical->state == eResourceState_Write )
      v13->seenShaderWrite = 1;
    v17 = (char *)&v13->seenCmdBits.bits[(unsigned __int64)cmdIndex >> 5];
    *(_DWORD *)v17 |= 1 << (cmdIndex & 0x1F);
    v13->seenCmdIndexLast = cmdIndex;
    v13->state = pPhysical->state;
    v13->access = pPhysical->access;
    v13->type = pPhysical->type;
    v13->pLastInfo = pPhysical;
  }
}

/*
==============
tg::ResourceTracker::UpdatePhysicalResources
==============
*/
char tg::ResourceTracker::UpdatePhysicalResources(tg::ResourceTracker *this, tg::Task *pTask, unsigned __int16 cmdIndex)
{
  unsigned int m_queueIndex; 
  __int64 v7; 
  unsigned int v8; 
  tg::ResourceAttachment *v9; 
  tg::ResourceAttachment *pPrev; 
  tg::eResourceState state; 
  tg::eResourceType type; 
  const tg::ResourceDesc *pDesc; 
  __int64 v14; 
  __int64 colourCount; 
  bool renderPassCompatible; 
  bool renderTextureCompatible; 
  unsigned int pipelineBarrierCount; 

  m_queueIndex = pTask->m_queueIndex;
  renderPassCompatible = 0;
  pipelineBarrierCount = 0;
  tg::ResourceTracker::EvaluateTask(this, pTask, m_queueIndex, &renderPassCompatible, &renderTextureCompatible, &pipelineBarrierCount);
  if ( !renderPassCompatible )
  {
    memset_0(&this->m_renderPass, 0, sizeof(this->m_renderPass));
    m_queueIndex = pTask->m_queueIndex;
  }
  v7 = m_queueIndex;
  v8 = 0;
  this->m_pPrevTask[v7] = pTask;
  while ( v8 < pTask->m_attachmentCount )
  {
    if ( !pTask->m_queueIndex )
    {
      v9 = &pTask->m_attachments[v8];
      pPrev = v9->pPrev;
      if ( pPrev )
        state = pPrev->state;
      else
        state = eResourceState_Initial;
      type = v9->type;
      if ( type == eResourceType_ColorTarget )
      {
        pDesc = v9->pDesc;
        v14 = 0i64;
        colourCount = this->m_renderPass.colourCount;
        if ( (_DWORD)colourCount )
        {
          while ( this->m_renderPass.pColourSurfaces[v14] != pDesc )
          {
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= (unsigned int)colourCount )
              goto LABEL_12;
          }
          this->m_renderPass.colourState[v14] = state;
          goto LABEL_17;
        }
LABEL_12:
        this->m_renderPass.colourState[colourCount] = state;
        this->m_renderPass.pColourSurfaces[this->m_renderPass.colourCount++] = pDesc;
        goto LABEL_16;
      }
      if ( type == eResourceType_DepthTarget )
      {
        this->m_renderPass.pDepthSurface = v9->pDesc;
        this->m_renderPass.depthState = state;
LABEL_16:
        this->m_renderPass.active = 1;
      }
    }
LABEL_17:
    tg::ResourceTracker::UpdatePhysicalResource(this, &pTask->m_attachments[v8++], cmdIndex);
  }
  return 1;
}

