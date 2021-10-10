/*
==============
tg::Task::SetName
==============
*/

void __fastcall tg::Task::SetName(tg::Task *this, const char *pName)
{
  ?SetName@Task@tg@@QEAAXPEBD@Z(this, pName);
}

/*
==============
tg::Task::CreateOutputResource
==============
*/

void __fastcall tg::Task::CreateOutputResource(tg::Task *this, tg::DebugLogs *logs, const char *pName, tg::eResourceType type, tg::eResourceState state, unsigned int access, unsigned int flags, const tg::ResourceDesc *pDesc)
{
  ?CreateOutputResource@Task@tg@@QEAAXAEAUDebugLogs@2@PEBDW4eResourceType@2@W4eResourceState@2@IIPEBUResourceDesc@2@@Z(this, logs, pName, type, state, access, flags, pDesc);
}

/*
==============
tg::Task::ClearResources
==============
*/

void __fastcall tg::Task::ClearResources(tg::Task *this)
{
  ?ClearResources@Task@tg@@QEAAXXZ(this);
}

/*
==============
tg::Task::GetAttachmentIndex
==============
*/

unsigned int __fastcall tg::Task::GetAttachmentIndex(tg::Task *this, const tg::ResourceAttachment *pResource)
{
  return ?GetAttachmentIndex@Task@tg@@QEBAIPEBUResourceAttachment@2@@Z(this, pResource);
}

/*
==============
tg::Task::~Task
==============
*/

void __fastcall tg::Task::~Task(tg::Task *this)
{
  ??1Task@tg@@UEAA@XZ(this);
}

/*
==============
tg::Task::AddInputTexture
==============
*/

void __fastcall tg::Task::AddInputTexture(tg::Task *this, tg::DebugLogs *logs, const char *pName, unsigned int access, unsigned __int8 arrayIndex, unsigned __int8 levelIndex, unsigned __int8 segmentIndex, unsigned __int8 temporalIndex)
{
  ?AddInputTexture@Task@tg@@QEAAXAEAUDebugLogs@2@PEBDIEEEE@Z(this, logs, pName, access, arrayIndex, levelIndex, segmentIndex, temporalIndex);
}

/*
==============
tg::Task::CreateResource
==============
*/

void __fastcall tg::Task::CreateResource(tg::Task *this, const unsigned int index, const tg::ResourceDesc *desc)
{
  ?CreateResource@Task@tg@@QEAAXIAEBUResourceDesc@2@@Z(this, index, desc);
}

/*
==============
tg::Task::ProcessAttachments
==============
*/

void __fastcall tg::Task::ProcessAttachments(tg::Task *this)
{
  ?ProcessAttachments@Task@tg@@QEAAXXZ(this);
}

/*
==============
tg::Task::SetAttachmentResource
==============
*/

tg::ResourceDesc *__fastcall tg::Task::SetAttachmentResource(tg::Task *this, const unsigned int index, const tg::ResourceDesc *desc)
{
  return ?SetAttachmentResource@Task@tg@@QEAAPEAUResourceDesc@2@IAEBU32@@Z(this, index, desc);
}

/*
==============
tg::Task::SetSystemData
==============
*/

void __fastcall tg::Task::SetSystemData(tg::Task *this, const unsigned int *pSystemData, unsigned int systemDataCount)
{
  ?SetSystemData@Task@tg@@QEAAXPEBII@Z(this, pSystemData, systemDataCount);
}

/*
==============
tg::Task::AddPrevious
==============
*/

void __fastcall tg::Task::AddPrevious(tg::Task *this, tg::Task *pTask)
{
  ?AddPrevious@Task@tg@@QEAAXPEAV12@@Z(this, pTask);
}

/*
==============
tg::Task::AllInputDependenciesResolved
==============
*/

bool __fastcall tg::Task::AllInputDependenciesResolved(tg::Task *this)
{
  return ?AllInputDependenciesResolved@Task@tg@@QEBA_NXZ(this);
}

/*
==============
tg::Task::ResolveInputResource
==============
*/

bool __fastcall tg::Task::ResolveInputResource(tg::Task *this, const tg::ResourceAttachment *pResource)
{
  return ?ResolveInputResource@Task@tg@@QEAA_NPEBUResourceAttachment@2@@Z(this, pResource);
}

/*
==============
tg::Task::SetUserData
==============
*/

void __fastcall tg::Task::SetUserData(tg::Task *this, const unsigned int *pUserData, unsigned int userDataCount)
{
  ?SetUserData@Task@tg@@QEAAXPEBII@Z(this, pUserData, userDataCount);
}

/*
==============
tg::Task::HasOutputResource
==============
*/

bool __fastcall tg::Task::HasOutputResource(tg::Task *this, unsigned int nameHash, unsigned int *pOutHashes, unsigned int *outHashCount)
{
  return ?HasOutputResource@Task@tg@@QEBA_NIPEAIAEAI@Z(this, nameHash, pOutHashes, outHashCount);
}

/*
==============
tg::Task::AllInputResourcesSatisfied
==============
*/

bool __fastcall tg::Task::AllInputResourcesSatisfied(tg::Task *this)
{
  return ?AllInputResourcesSatisfied@Task@tg@@QEBA_NXZ(this);
}

/*
==============
tg::Task::Task
==============
*/

void __fastcall tg::Task::Task(tg::Task *this, const char *pName)
{
  ??0Task@tg@@QEAA@PEBD@Z(this, pName);
}

/*
==============
tg::Task::SetAttachments
==============
*/

bool __fastcall tg::Task::SetAttachments(tg::Task *this, tg::DebugLogs *logs, const tg::Task *pTask)
{
  return ?SetAttachments@Task@tg@@QEAA_NAEAUDebugLogs@2@PEBV12@@Z(this, logs, pTask);
}

/*
==============
tg::Task::AddAttachment
==============
*/

unsigned int __fastcall tg::Task::AddAttachment(tg::Task *this, tg::DebugLogs *logs, const char *pInputName, const char *pOutputName, tg::eResourceType type, tg::eResourceState state, unsigned int access, unsigned __int8 arrayIndex, unsigned __int8 levelIndex, unsigned __int8 segmentIndex, unsigned __int8 temporalIndex, unsigned int flags, const void *pData)
{
  return ?AddAttachment@Task@tg@@QEAAIAEAUDebugLogs@2@PEBD1W4eResourceType@2@W4eResourceState@2@IEEEEIPEBX@Z(this, logs, pInputName, pOutputName, type, state, access, arrayIndex, levelIndex, segmentIndex, temporalIndex, flags, pData);
}

/*
==============
tg::Task::AddDepthSurface
==============
*/

void __fastcall tg::Task::AddDepthSurface(tg::Task *this, tg::DebugLogs *logs, const char *pName, bool readOnly, unsigned int flags, const void *pData, const char *pOutputName)
{
  ?AddDepthSurface@Task@tg@@QEAAXAEAUDebugLogs@2@PEBD_NIPEBX1@Z(this, logs, pName, readOnly, flags, pData, pOutputName);
}

/*
==============
tg::Task::SetAttachment
==============
*/

bool __fastcall tg::Task::SetAttachment(tg::Task *this, tg::DebugLogs *logs, const tg::ResourceAttachment *pAttachment)
{
  return ?SetAttachment@Task@tg@@QEAA_NAEAUDebugLogs@2@PEBUResourceAttachment@2@@Z(this, logs, pAttachment);
}

/*
==============
tg::Task::Task
==============
*/

void __fastcall tg::Task::Task(tg::Task *this)
{
  ??0Task@tg@@QEAA@XZ(this);
}

/*
==============
tg::Task::CreateResource
==============
*/

void __fastcall tg::Task::CreateResource(tg::Task *this, const char *pName, const tg::ResourceDesc *desc)
{
  ?CreateResource@Task@tg@@QEAAXPEBDAEBUResourceDesc@2@@Z(this, pName, desc);
}

/*
==============
tg::Task::FindNext
==============
*/

unsigned int __fastcall tg::Task::FindNext(tg::Task *this, tg::Task *pTask)
{
  return ?FindNext@Task@tg@@QEBAIPEAV12@@Z(this, pTask);
}

/*
==============
tg::Task::ClearNext
==============
*/

bool __fastcall tg::Task::ClearNext(tg::Task *this, tg::Task *pTask)
{
  return ?ClearNext@Task@tg@@QEAA_NPEAV12@@Z(this, pTask);
}

/*
==============
tg::Task::SetCondition
==============
*/

void __fastcall tg::Task::SetCondition(tg::Task *this, tg::eCondition conditionType, unsigned int conditionIndex)
{
  ?SetCondition@Task@tg@@QEAAXW4eCondition@2@I@Z(this, conditionType, conditionIndex);
}

/*
==============
tg::Task::ClearPrevious
==============
*/

bool __fastcall tg::Task::ClearPrevious(tg::Task *this, tg::Task *pTask)
{
  return ?ClearPrevious@Task@tg@@QEAA_NPEAV12@@Z(this, pTask);
}

/*
==============
tg::Task::ClearDepth
==============
*/

void __fastcall tg::Task::ClearDepth(tg::Task *this, const float *pData)
{
  ?ClearDepth@Task@tg@@QEAAXPEBM@Z(this, pData);
}

/*
==============
tg::Task::UpdateAttachmentsAndDescs
==============
*/

void __fastcall tg::Task::UpdateAttachmentsAndDescs(tg::Task *this, tg::Task **ppTasks, unsigned int queueIndex, tg::DebugLogs *logs, tg::DynamicSizeData *dynamicSize)
{
  ?UpdateAttachmentsAndDescs@Task@tg@@QEAAXPEAPEAV12@IAEAUDebugLogs@2@AEAUDynamicSizeData@2@@Z(this, ppTasks, queueIndex, logs, dynamicSize);
}

/*
==============
tg::Task::AddNext
==============
*/

void __fastcall tg::Task::AddNext(tg::Task *this, tg::Task *pTask)
{
  ?AddNext@Task@tg@@QEAAXPEAV12@@Z(this, pTask);
}

/*
==============
tg::Task::SetOrderHint
==============
*/

void __fastcall tg::Task::SetOrderHint(tg::Task *this, int hint)
{
  ?SetOrderHint@Task@tg@@QEAAXH@Z(this, hint);
}

/*
==============
tg::Task::AddColourSurface
==============
*/

void __fastcall tg::Task::AddColourSurface(tg::Task *this, tg::DebugLogs *logs, const char *pName, unsigned __int8 arrayIndex, unsigned __int8 levelIndex, unsigned __int8 segmentIndex, unsigned __int8 temporalIndex, unsigned int flags, const void *pData, const char *pOutputName)
{
  ?AddColourSurface@Task@tg@@QEAAXAEAUDebugLogs@2@PEBDEEEEIPEBX1@Z(this, logs, pName, arrayIndex, levelIndex, segmentIndex, temporalIndex, flags, pData, pOutputName);
}

/*
==============
tg::Task::ResolveInputResources
==============
*/

bool __fastcall tg::Task::ResolveInputResources(tg::Task *this, const tg::Task *pTask)
{
  return ?ResolveInputResources@Task@tg@@QEAA_NPEBV12@@Z(this, pTask);
}

/*
==============
tg::Task::ClearColour
==============
*/

void __fastcall tg::Task::ClearColour(tg::Task *this, const float *pData)
{
  ?ClearColour@Task@tg@@QEAAXPEBM@Z(this, pData);
}

/*
==============
tg::Task::Task
==============
*/
void tg::Task::Task(tg::Task *this, const char *pName)
{
  this->__vftable = (tg::Task_vtbl *)tg::Task::`vftable';
  memset_0(&this->m_nameHash, 0, 0x158ui64);
  memset_0(&this->m_conditionType, 0, 0xACui64);
  this->m_pName = pName;
  this->m_conditionIndex = -1;
}

/*
==============
tg::Task::Task
==============
*/
void tg::Task::Task(tg::Task *this)
{
  this->__vftable = (tg::Task_vtbl *)tg::Task::`vftable';
}

/*
==============
tg::Task::~Task
==============
*/
void tg::Task::~Task(tg::Task *this)
{
  this->__vftable = (tg::Task_vtbl *)tg::Task::`vftable';
}

/*
==============
tg::Task::AddAttachment
==============
*/
__int64 tg::Task::AddAttachment(tg::Task *this, tg::DebugLogs *logs, const char *pInputName, const char *pOutputName, tg::eResourceType type, tg::eResourceState state, unsigned int access, unsigned __int8 arrayIndex, unsigned __int8 levelIndex, unsigned __int8 segmentIndex, unsigned __int8 temporalIndex, unsigned int flags, const void *pData)
{
  unsigned int m_inputTypeFlags; 
  const char *v15; 
  const char *m_pName; 
  __int64 v19; 
  __int64 v20; 
  __int64 m_attachmentCount; 
  __int64 v22; 
  unsigned int v23; 
  unsigned int nameHashInput; 
  tg::ResourceAttachment *m_attachments; 
  unsigned int v26; 
  __int64 v27; 
  tg::ResourceAttachment *v28; 
  const float *m_pClearColour; 
  unsigned int m_flags; 
  unsigned __int32 v31; 

  m_inputTypeFlags = this->m_inputTypeFlags;
  v15 = pInputName;
  m_pName = this->m_pName;
  if ( type == eResourceType_RenderTexture && (m_inputTypeFlags & 0x60) != 0 )
  {
    tg::DebugLog::Print(&logs->error, "ERROR: Cannot add input RenderTexture '%s' to task '%s'. RenderTexture is mutually exclusive with color/depth targets!\n", pInputName, m_pName);
    return 0xFFFFFFFFi64;
  }
  if ( (type & 0x160) != 0 && (m_inputTypeFlags & 0x100) != 0 )
  {
    tg::DebugLog::Print(&logs->error, "ERROR: Cannot add input resource '%s' to task '%s'. Task already has a RenderTexture input!\n", pInputName, m_pName);
    return 0xFFFFFFFFi64;
  }
  if ( type == eResourceType_DepthTarget && (m_inputTypeFlags & 0x40) != 0 )
  {
    tg::DebugLog::Print(&logs->error, "ERROR: Cannot add depth target '%s' to task '%s'. Task already has a depth target!\n", pInputName, m_pName);
    return 0xFFFFFFFFi64;
  }
  v19 = -1i64;
  v20 = -1i64;
  m_attachmentCount = this->m_attachmentCount;
  v22 = m_attachmentCount;
  this->m_attachmentCount = m_attachmentCount + 1;
  this->m_attachments[v22].pDesc = NULL;
  this->m_attachments[v22].pNameInput = pInputName;
  do
    ++v20;
  while ( pInputName[v20] );
  v23 = tg::HashRaw((const unsigned __int8 *)pInputName, v20, 0);
  if ( pOutputName )
    v15 = pOutputName;
  this->m_attachments[v22].nameHashInput = v23;
  this->m_attachments[v22].pNameOutput = v15;
  if ( pOutputName )
  {
    do
      ++v19;
    while ( pOutputName[v19] );
    nameHashInput = tg::HashRaw((const unsigned __int8 *)pOutputName, v19, 0);
    m_attachments = this->m_attachments;
  }
  else
  {
    m_attachments = this->m_attachments;
    nameHashInput = m_attachments[v22].nameHashInput;
  }
  m_attachments[v22].nameHashOutput = nameHashInput;
  v26 = access;
  this->m_attachments[v22].type = type;
  this->m_attachments[v22].state = state;
  if ( (access & 0x1FF) == 0 )
  {
    if ( ((type - 32) & 0xFFFFFFDF) == 0 )
    {
LABEL_25:
      v26 = access | 0x40;
      goto LABEL_26;
    }
    if ( type == eResourceType_RenderTexture )
    {
      if ( state == eResourceState_ReadOnly )
      {
        v26 = access | 0x20;
        goto LABEL_26;
      }
      if ( state == eResourceState_Write )
        goto LABEL_25;
    }
    else if ( type == eResourceType_Texture || type == eResourceType_Buffer )
    {
      m_flags = this->m_flags;
      if ( (m_flags & 0x100) != 0 )
      {
        v26 = access | 0x100;
      }
      else if ( (m_flags & 0x200) != 0 )
      {
        v26 = access | 0x80;
      }
      else if ( state == eResourceState_ReadOnly )
      {
        v26 = access | 0x20;
      }
      else if ( state == eResourceState_Write )
      {
        v26 = access | 0x100;
      }
    }
  }
LABEL_26:
  this->m_attachments[v22].access = v26;
  this->m_attachments[v22].arrayIndex = arrayIndex;
  this->m_attachments[v22].levelIndex = levelIndex;
  this->m_attachments[v22].segmentIndex = segmentIndex;
  this->m_attachments[v22].temporalIndex = temporalIndex;
  this->m_attachments[v22].flags = flags;
  this->m_attachments[v22].pData = pData;
  v27 = (unsigned int)m_attachmentCount;
  this->m_attachments[v27].globalLogicalIndex[0] = -1;
  this->m_attachments[v27].globalLogicalIndex[1] = -1;
  v28 = &this->m_attachments[v22];
  if ( !v28->pData )
  {
    if ( type == eResourceType_ColorTarget )
    {
      if ( this->m_pClearColour )
      {
        v28->flags |= 2u;
        m_pClearColour = this->m_pClearColour;
LABEL_43:
        this->m_attachments[v22].pData = m_pClearColour;
      }
    }
    else if ( type == eResourceType_DepthTarget && this->m_pClearDepth )
    {
      v28->flags |= 2u;
      m_pClearColour = this->m_pClearDepth;
      goto LABEL_43;
    }
  }
  v31 = this->m_attachments[v22].nameHashInput + (temporalIndex << 24) + (segmentIndex << 16) + (levelIndex << 8) + state + 32 * type + arrayIndex;
  if ( state == eResourceState_ReadOnly )
    this->m_readHash += v31;
  else
    this->m_writeHash += v31;
  this->m_inputTypeFlags |= type;
  if ( state == eResourceState_Write )
    this->m_outputTypeFlags |= type;
  return (unsigned int)m_attachmentCount;
}

/*
==============
tg::Task::AddColourSurface
==============
*/
void tg::Task::AddColourSurface(tg::Task *this, tg::DebugLogs *logs, const char *pName, unsigned __int8 arrayIndex, unsigned __int8 levelIndex, unsigned __int8 segmentIndex, unsigned __int8 temporalIndex, unsigned int flags, const void *pData, const char *pOutputName)
{
  const char *v11; 
  __int64 m_attachmentCount; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int nameHashInput; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v20; 
  tg::ResourceAttachment *v21; 
  int v22; 

  v11 = pName;
  if ( (this->m_inputTypeFlags & 0x100) != 0 )
  {
    tg::DebugLog::Print(&logs->error, "ERROR: Cannot add input resource '%s' to task '%s'. Task already has a RenderTexture input!\n", pName, this->m_pName);
  }
  else
  {
    m_attachmentCount = this->m_attachmentCount;
    v14 = -1i64;
    v15 = -1i64;
    v16 = m_attachmentCount;
    this->m_attachmentCount = m_attachmentCount + 1;
    v17 = (unsigned int)m_attachmentCount;
    this->m_attachments[v16].pDesc = NULL;
    this->m_attachments[v16].pNameInput = pName;
    do
      ++v15;
    while ( pName[v15] );
    this->m_attachments[v16].nameHashInput = tg::HashRaw((const unsigned __int8 *)pName, v15, 0);
    if ( pOutputName )
      v11 = pOutputName;
    this->m_attachments[v16].pNameOutput = v11;
    if ( pOutputName )
    {
      do
        ++v14;
      while ( pOutputName[v14] );
      nameHashInput = tg::HashRaw((const unsigned __int8 *)pOutputName, v14, 0);
      m_attachments = this->m_attachments;
    }
    else
    {
      m_attachments = this->m_attachments;
      nameHashInput = m_attachments[v16].nameHashInput;
    }
    m_attachments[v16].nameHashOutput = nameHashInput;
    this->m_attachments[v16].type = eResourceType_ColorTarget;
    this->m_attachments[v16].state = eResourceState_Write;
    this->m_attachments[v16].access = 64;
    this->m_attachments[v16].arrayIndex = arrayIndex;
    this->m_attachments[v16].levelIndex = levelIndex;
    this->m_attachments[v16].segmentIndex = segmentIndex;
    this->m_attachments[v16].temporalIndex = temporalIndex;
    this->m_attachments[v16].flags = flags;
    this->m_attachments[v16].pData = pData;
    v20 = v17;
    this->m_attachments[v20].globalLogicalIndex[0] = -1;
    this->m_attachments[v20].globalLogicalIndex[1] = -1;
    v21 = this->m_attachments;
    if ( !v21[v16].pData )
    {
      if ( this->m_pClearColour )
      {
        v21[v16].flags |= 2u;
        this->m_attachments[v16].pData = this->m_pClearColour;
        v21 = this->m_attachments;
      }
    }
    v22 = v21[v16].nameHashInput + (temporalIndex << 24) + (segmentIndex << 16) + (levelIndex << 8);
    this->m_inputTypeFlags |= 0x20u;
    this->m_writeHash += v22 + arrayIndex + 1032;
    this->m_outputTypeFlags |= 0x20u;
  }
}

/*
==============
tg::Task::AddDepthSurface
==============
*/
void tg::Task::AddDepthSurface(tg::Task *this, tg::DebugLogs *logs, const char *pName, bool readOnly, unsigned int flags, const void *pData, const char *pOutputName)
{
  tg::Task::AddAttachment(this, logs, pName, pOutputName, eResourceType_DepthTarget, (tg::eResourceState)(8 * readOnly + 8), 0, 0xFFu, 0xFFu, 0xFFu, 0xFFu, flags, pData);
}

/*
==============
tg::Task::AddInputTexture
==============
*/
void tg::Task::AddInputTexture(tg::Task *this, tg::DebugLogs *logs, const char *pName, unsigned int access, unsigned __int8 arrayIndex, unsigned __int8 levelIndex, unsigned __int8 segmentIndex, unsigned __int8 temporalIndex)
{
  __int64 m_attachmentCount; 
  __int64 v10; 
  __int64 v13; 
  unsigned int m_flags; 
  __int64 v15; 

  m_attachmentCount = this->m_attachmentCount;
  v10 = this->m_attachmentCount++;
  v13 = -1i64;
  this->m_attachments[m_attachmentCount].pDesc = NULL;
  this->m_attachments[m_attachmentCount].pNameInput = pName;
  do
    ++v13;
  while ( pName[v13] );
  this->m_attachments[m_attachmentCount].nameHashInput = tg::HashRaw((const unsigned __int8 *)pName, v13, 0);
  this->m_attachments[m_attachmentCount].pNameOutput = pName;
  this->m_attachments[m_attachmentCount].nameHashOutput = this->m_attachments[m_attachmentCount].nameHashInput;
  this->m_attachments[m_attachmentCount].type = eResourceType_Texture;
  this->m_attachments[m_attachmentCount].state = eResourceState_ReadOnly;
  if ( (access & 0x1FF) == 0 )
  {
    m_flags = this->m_flags;
    if ( (m_flags & 0x100) != 0 )
    {
      access |= 0x100u;
    }
    else if ( (m_flags & 0x200) != 0 )
    {
      access |= 0x80u;
    }
    else
    {
      access |= 0x20u;
    }
  }
  this->m_attachments[m_attachmentCount].access = access;
  v15 = v10;
  this->m_attachments[m_attachmentCount].arrayIndex = arrayIndex;
  this->m_attachments[m_attachmentCount].levelIndex = levelIndex;
  this->m_attachments[m_attachmentCount].segmentIndex = segmentIndex;
  this->m_attachments[m_attachmentCount].temporalIndex = temporalIndex;
  this->m_attachments[m_attachmentCount].flags = 0;
  this->m_attachments[m_attachmentCount].pData = NULL;
  this->m_attachments[v15].globalLogicalIndex[0] = -1;
  this->m_attachments[v15].globalLogicalIndex[1] = -1;
  this->m_readHash += this->m_attachments[m_attachmentCount].nameHashInput + (temporalIndex << 24) + (segmentIndex << 16) + (levelIndex << 8) + arrayIndex + 4112;
  this->m_inputTypeFlags |= 0x80u;
}

/*
==============
tg::Task::AddNext
==============
*/
void tg::Task::AddNext(tg::Task *this, tg::Task *pTask)
{
  this->m_next[this->m_nextCount++] = pTask->m_taskIndex;
}

/*
==============
tg::Task::AddPrevious
==============
*/
void tg::Task::AddPrevious(tg::Task *this, tg::Task *pTask)
{
  this->m_previous[this->m_previousCount++] = pTask->m_taskIndex;
}

/*
==============
tg::Task::AllInputDependenciesResolved
==============
*/
char tg::Task::AllInputDependenciesResolved(tg::Task *this)
{
  unsigned int m_attachmentCount; 
  int v2; 
  int v4; 
  tg::ResourceAttachment *m_attachments; 
  unsigned int m_dependencyCount; 
  unsigned __int16 *i; 

  m_attachmentCount = this->m_attachmentCount;
  v2 = 0;
  v4 = 0;
  if ( m_attachmentCount )
  {
    m_attachments = this->m_attachments;
    while ( !m_attachments[v4].ref )
    {
      if ( ++v4 >= m_attachmentCount )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    m_dependencyCount = this->m_dependencyCount;
    if ( !m_dependencyCount )
      return 1;
    for ( i = this->m_dependencies; *i == 0xFFFF; ++i )
    {
      if ( ++v2 >= m_dependencyCount )
        return 1;
    }
  }
  return 0;
}

/*
==============
tg::Task::AllInputResourcesSatisfied
==============
*/
char tg::Task::AllInputResourcesSatisfied(tg::Task *this)
{
  unsigned int m_attachmentCount; 
  int v2; 

  m_attachmentCount = this->m_attachmentCount;
  v2 = 0;
  if ( !m_attachmentCount )
    return 1;
  while ( this->m_attachments[v2].ref )
  {
    if ( ++v2 >= m_attachmentCount )
      return 1;
  }
  return 0;
}

/*
==============
tg::Task::ClearColour
==============
*/
void tg::Task::ClearColour(tg::Task *this, const float *pData)
{
  this->m_pClearColour = pData;
}

/*
==============
tg::Task::ClearDepth
==============
*/
void tg::Task::ClearDepth(tg::Task *this, const float *pData)
{
  this->m_pClearDepth = pData;
}

/*
==============
tg::Task::ClearNext
==============
*/
char tg::Task::ClearNext(tg::Task *this, tg::Task *pTask)
{
  __int64 v3; 
  unsigned int m_nextCount; 
  unsigned __int16 m_taskIndex; 
  __int64 v6; 
  __int64 v8; 

  v3 = 0i64;
  m_nextCount = this->m_nextCount;
  if ( !m_nextCount )
    return 0;
  m_taskIndex = pTask->m_taskIndex;
  while ( 1 )
  {
    v6 = (unsigned int)v3;
    if ( this->m_next[v3] == m_taskIndex )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= m_nextCount )
      return 0;
  }
  v8 = m_nextCount - 1;
  this->m_nextCount = v8;
  this->m_next[v6] = this->m_next[v8];
  this->m_next[this->m_nextCount] = -1;
  return 1;
}

/*
==============
tg::Task::ClearPrevious
==============
*/
char tg::Task::ClearPrevious(tg::Task *this, tg::Task *pTask)
{
  __int64 v3; 
  unsigned int m_previousCount; 
  unsigned __int16 m_taskIndex; 
  __int64 v6; 
  __int64 v8; 

  v3 = 0i64;
  m_previousCount = this->m_previousCount;
  if ( !m_previousCount )
    return 0;
  m_taskIndex = pTask->m_taskIndex;
  while ( 1 )
  {
    v6 = (unsigned int)v3;
    if ( this->m_previous[v3] == m_taskIndex )
      break;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= m_previousCount )
      return 0;
  }
  v8 = m_previousCount - 1;
  this->m_previousCount = v8;
  this->m_previous[v6] = this->m_previous[v8];
  this->m_previous[this->m_previousCount] = -1;
  return 1;
}

/*
==============
tg::Task::ClearResources
==============
*/
void tg::Task::ClearResources(tg::Task *this)
{
  unsigned int v1; 
  __int64 v2; 
  tg::ResourceAttachment *m_attachments; 

  v1 = 0;
  this->m_renderOrder = 0;
  this->m_nextCount = 0;
  this->m_previousCount = 0;
  for ( this->m_unresolvedDependencyCount = 0; v1 < this->m_attachmentCount; m_attachments[v2].ref = 0 )
  {
    v2 = v1;
    m_attachments = this->m_attachments;
    if ( (m_attachments[v2].flags & 8) == 0 )
    {
      m_attachments[v2].pDesc = NULL;
      m_attachments = this->m_attachments;
    }
    ++v1;
  }
  this->m_flags &= ~0x10u;
}

/*
==============
tg::Task::CreateOutputResource
==============
*/
void tg::Task::CreateOutputResource(tg::Task *this, tg::DebugLogs *logs, const char *pName, tg::eResourceType type, tg::eResourceState state, unsigned int access, unsigned int flags, const tg::ResourceDesc *pDesc)
{
  __int64 v10; 
  __m256i v11; 
  __int128 v12; 
  __int64 v13; 
  tg::ResourceDesc *m_descs; 
  __int64 m_descCount; 
  _BYTE v16[64]; 
  __int128 v17; 

  v10 = tg::Task::AddAttachment(this, logs, pName, NULL, type, state, access, 0xFFu, 0xFFu, 0xFFu, 0xFFu, flags, NULL);
  memset_0(v16, 0, 0x50ui64);
  if ( pDesc )
  {
    v11 = *(__m256i *)&pDesc->surfaceFormat;
    v12 = *(_OWORD *)&pDesc->pResource;
    *(__m256i *)v16 = *(__m256i *)&pDesc->type;
  }
  else
  {
    v12 = v17;
    v11 = *(__m256i *)&v16[32];
  }
  v13 = v10;
  m_descs = this->m_descs;
  m_descCount = this->m_descCount;
  *(_DWORD *)v16 = type;
  *(__m256i *)&m_descs[m_descCount].type = *(__m256i *)v16;
  *(__m256i *)&m_descs[m_descCount].surfaceFormat = v11;
  *(_OWORD *)&m_descs[m_descCount].pResource = v12;
  this->m_attachments[v13].pDesc = &this->m_descs[this->m_descCount];
  this->m_attachments[v13].flags |= 8u;
  this->m_descs[this->m_descCount++].pResource = NULL;
}

/*
==============
tg::Task::CreateResource
==============
*/
void tg::Task::CreateResource(tg::Task *this, const unsigned int index, const tg::ResourceDesc *desc)
{
  __int64 v3; 

  this->m_descs[this->m_descCount] = *desc;
  v3 = index;
  this->m_attachments[v3].pDesc = &this->m_descs[this->m_descCount];
  this->m_attachments[v3].flags |= 8u;
  this->m_descs[this->m_descCount++].pResource = NULL;
}

/*
==============
tg::Task::CreateResource
==============
*/
void tg::Task::CreateResource(tg::Task *this, const char *pName, const tg::ResourceDesc *desc)
{
  __int64 v5; 
  char v7; 
  unsigned int v8; 
  unsigned int i; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v11; 
  __int64 m_descCount; 
  tg::ResourceDesc *m_descs; 
  __int64 v14; 

  v5 = -1i64;
  v7 = 0;
  do
    ++v5;
  while ( pName[v5] );
  v8 = tg::HashRaw((const unsigned __int8 *)pName, v5, 0);
  for ( i = 0; i < this->m_attachmentCount; ++i )
  {
    m_attachments = this->m_attachments;
    v11 = i;
    if ( m_attachments[v11].nameHashOutput == v8 )
    {
      m_descCount = this->m_descCount;
      m_descs = this->m_descs;
      if ( v7 )
      {
        m_attachments[i].pDesc = &m_descs[(unsigned int)(m_descCount - 1)];
        this->m_attachments[v11].flags |= 8u;
      }
      else
      {
        v7 = 1;
        v14 = m_descCount;
        *(__m256i *)&m_descs[v14].type = *(__m256i *)&desc->type;
        *(__m256i *)&m_descs[v14].surfaceFormat = *(__m256i *)&desc->surfaceFormat;
        *(_OWORD *)&m_descs[v14].pResource = *(_OWORD *)&desc->pResource;
        this->m_attachments[v11].pDesc = &this->m_descs[this->m_descCount];
        this->m_attachments[v11].flags |= 8u;
        this->m_descs[this->m_descCount++].pResource = NULL;
      }
      ++this->m_writeHash;
    }
  }
}

/*
==============
tg::Task::FindNext
==============
*/
__int64 tg::Task::FindNext(tg::Task *this, tg::Task *pTask)
{
  unsigned int m_nextCount; 
  __int64 result; 

  m_nextCount = this->m_nextCount;
  result = 0i64;
  if ( !m_nextCount )
    return 0xFFFFFFFFi64;
  while ( this->m_next[result] != pTask->m_taskIndex )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= m_nextCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
tg::Task::GetAttachmentIndex
==============
*/
__int64 tg::Task::GetAttachmentIndex(tg::Task *this, const tg::ResourceAttachment *pResource)
{
  unsigned int m_attachmentCount; 
  __int64 result; 

  m_attachmentCount = this->m_attachmentCount;
  result = 0i64;
  if ( !m_attachmentCount )
    return 0xFFFFFFFFi64;
  while ( this->m_attachments[(unsigned int)result].nameHashInput != pResource->nameHashOutput )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= m_attachmentCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
tg::Task::HasOutputResource
==============
*/
char tg::Task::HasOutputResource(tg::Task *this, unsigned int nameHash, unsigned int *pOutHashes, unsigned int *outHashCount)
{
  unsigned int m_attachmentCount; 
  unsigned int v5; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v8; 
  unsigned int nameHashOutput; 

  m_attachmentCount = this->m_attachmentCount;
  v5 = 0;
  if ( !m_attachmentCount )
    return 0;
  m_attachments = this->m_attachments;
  while ( 1 )
  {
    v8 = v5;
    nameHashOutput = m_attachments[v8].nameHashOutput;
    if ( nameHashOutput == nameHash && m_attachments[v8].state == eResourceState_Write )
      break;
    if ( m_attachments[v8].nameHashInput == nameHash && m_attachments[v8].state == eResourceState_Write )
    {
      pOutHashes[(*outHashCount)++] = nameHashOutput;
      return 1;
    }
    if ( ++v5 >= m_attachmentCount )
      return 0;
  }
  return 1;
}

/*
==============
tg::Task::ProcessAttachments
==============
*/
void tg::Task::ProcessAttachments(tg::Task *this)
{
  unsigned int v1; 
  tg::eResourceType type; 

  v1 = 0;
  this->m_depthSurfaceIndex = -1;
  for ( this->m_colourSurfaceCount = 0; v1 < this->m_attachmentCount; ++v1 )
  {
    type = this->m_attachments[v1].type;
    if ( type == eResourceType_ColorTarget )
    {
      this->m_colourSurfaceIndices[this->m_colourSurfaceCount++] = v1;
    }
    else if ( type == eResourceType_DepthTarget )
    {
      this->m_depthSurfaceIndex = v1;
    }
  }
}

/*
==============
tg::Task::ResolveInputResource
==============
*/
__int64 tg::Task::ResolveInputResource(tg::Task *this, const tg::ResourceAttachment *pResource)
{
  unsigned __int8 v2; 
  unsigned int i; 
  tg::ResourceAttachment *v5; 

  v2 = 0;
  for ( i = 0; i < this->m_attachmentCount; ++i )
  {
    v5 = &this->m_attachments[i];
    if ( v5->nameHashInput == pResource->nameHashOutput )
    {
      ++v5->ref;
      v2 = 1;
    }
  }
  return v2;
}

/*
==============
tg::Task::ResolveInputResources
==============
*/
__int64 tg::Task::ResolveInputResources(tg::Task *this, const tg::Task *pTask)
{
  unsigned __int8 v2; 
  unsigned int i; 
  char v4; 
  unsigned int v5; 
  tg::ResourceAttachment *j; 
  tg::ResourceAttachment *v7; 
  __int64 m_dependencyCount; 
  unsigned __int16 m_taskIndex; 
  unsigned __int16 *m_dependencies; 
  bool v11; 
  __int64 result; 

  v2 = 0;
  for ( i = 0; i < pTask->m_attachmentCount; ++i )
  {
    v4 = 0;
    v5 = 0;
    for ( j = &pTask->m_attachments[i]; v5 < this->m_attachmentCount; ++v5 )
    {
      v7 = &this->m_attachments[v5];
      if ( v7->nameHashInput == j->nameHashOutput )
      {
        ++v7->ref;
        v4 = 1;
      }
    }
    v2 |= v4;
  }
  m_dependencyCount = this->m_dependencyCount;
  if ( (_DWORD)m_dependencyCount )
  {
    m_taskIndex = pTask->m_taskIndex;
    m_dependencies = this->m_dependencies;
    do
    {
      v11 = m_taskIndex == *m_dependencies++;
      v2 |= v11;
      --m_dependencyCount;
    }
    while ( m_dependencyCount );
  }
  result = v2;
  if ( v2 )
    ++this->m_unresolvedDependencyCount;
  return result;
}

/*
==============
tg::Task::SetAttachment
==============
*/
__int64 tg::Task::SetAttachment(tg::Task *this, tg::DebugLogs *logs, const tg::ResourceAttachment *pAttachment)
{
  unsigned __int8 v3; 
  unsigned int i; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v9; 
  tg::ResourceAttachment *v10; 
  tg::eResourceType type; 
  __int64 m_depthSurfaceIndex; 
  tg::ResourceAttachment *v13; 
  tg::ResourceAttachment *v14; 
  tg::ResourceDesc *v15; 
  tg::ResourceDesc *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int8 levelIndex; 
  const char *m_pName; 
  tg::ResourceDesc *pDesc; 
  unsigned __int8 arrayIndex; 
  tg::ResourceDesc *v23; 
  unsigned int v24; 
  unsigned int v25; 
  tg::ResourceAttachment *v26; 
  __int64 v28; 
  __int64 v29; 

  v3 = 0;
  for ( i = 0; i < this->m_attachmentCount; ++i )
  {
    m_attachments = this->m_attachments;
    v9 = i;
    v10 = &m_attachments[v9];
    if ( m_attachments[v9].nameHashInput == pAttachment->nameHashOutput )
    {
      type = v10->type;
      if ( type != eResourceType_Buffer || pAttachment->pDesc->type == eResourceType_Buffer )
      {
        if ( type != eResourceType_ColorTarget || ((m_depthSurfaceIndex = this->m_depthSurfaceIndex, (_DWORD)m_depthSurfaceIndex == -1) ? (v13 = NULL) : (v13 = &m_attachments[m_depthSurfaceIndex]), !this->m_colourSurfaceCount ? (v14 = NULL) : (v14 = &m_attachments[this->m_colourSurfaceIndices[0]]), v15 = pAttachment->pDesc, ((pAttachment->type - 32) & 0xFFFFFFDF) != 0) )
        {
LABEL_20:
          levelIndex = v10->levelIndex;
          m_pName = this->m_pName;
          pDesc = pAttachment->pDesc;
          arrayIndex = v10->arrayIndex;
          if ( (unsigned __int8)(levelIndex - 1) > 0xFDu || levelIndex < pDesc->levels )
          {
            if ( (unsigned __int8)(arrayIndex - 1) > 0xFDu || arrayIndex < pDesc->arraySize )
            {
              --v10->ref;
              v3 = 1;
              v26 = this->m_attachments;
              if ( !v26[v9].ref )
                v26[i].pDesc = pAttachment->pDesc;
            }
            else
            {
              LODWORD(v29) = pDesc->levels;
              LODWORD(v28) = arrayIndex;
              tg::DebugLog::Print(&logs->error, "ERROR: Adding resource '%s' to task '%s' but attachment array index '%d' is greater than resource maximum of '%d'!\n", pAttachment->pNameOutput, m_pName, v28, v29);
            }
          }
          else
          {
            LODWORD(v29) = pDesc->levels;
            LODWORD(v28) = levelIndex;
            tg::DebugLog::Print(&logs->error, "ERROR: Adding resource '%s' to task '%s' but attachment mip index '%d' is greater than resource maximum of '%d'!\n", pAttachment->pNameOutput, m_pName, v28, v29);
          }
          continue;
        }
        if ( v14 && (v16 = v14->pDesc) != NULL && (v17 = v16->size.v[0], v17 < 0x2000000) && (v18 = v16->size.v[1], v18 < 0x2000000) )
        {
          if ( v15->size.v[0] == v17 && v15->size.v[1] == v18 )
            goto LABEL_20;
        }
        else
        {
          if ( !v13 )
            goto LABEL_20;
          v23 = v13->pDesc;
          if ( !v13->pDesc )
            goto LABEL_20;
          v24 = v23->size.v[0];
          if ( v24 >= 0x2000000 )
            goto LABEL_20;
          v25 = v23->size.v[1];
          if ( v25 >= 0x2000000 || v15->size.v[0] == v24 && v15->size.v[1] == v25 )
            goto LABEL_20;
          v14 = v13;
        }
        tg::DebugLog::Print(&logs->error, "ERROR: Adding surface '%s' to task '%s' but dimensions don't match existing surface '%s'!\n", pAttachment->pNameOutput, this->m_pName, v14->pNameInput);
      }
      else
      {
        tg::DebugLog::Print(&logs->error, "ERROR: Adding resource '%s' to task '%s', expected buffer but resource is not a buffer!\n", pAttachment->pNameOutput, this->m_pName);
      }
    }
  }
  return v3;
}

/*
==============
tg::Task::SetAttachmentResource
==============
*/
tg::ResourceDesc *tg::Task::SetAttachmentResource(tg::Task *this, const unsigned int index, const tg::ResourceDesc *desc)
{
  __int64 v4; 
  __int64 m_descCount; 
  tg::ResourceDesc *v6; 

  if ( index >= this->m_attachmentCount )
    return 0i64;
  this->m_descs[this->m_descCount] = *desc;
  v4 = index;
  this->m_attachments[v4].pDesc = &this->m_descs[this->m_descCount];
  this->m_attachments[v4].flags = 8;
  m_descCount = this->m_descCount;
  v6 = &this->m_descs[m_descCount];
  this->m_descCount = m_descCount + 1;
  return v6;
}

/*
==============
tg::Task::SetAttachments
==============
*/
__int64 tg::Task::SetAttachments(tg::Task *this, tg::DebugLogs *logs, const tg::Task *pTask)
{
  unsigned __int8 v3; 
  unsigned int v4; 
  __int64 v6; 
  char v8; 
  unsigned int v9; 
  tg::ResourceAttachment *v10; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v12; 
  tg::ResourceAttachment *v13; 
  tg::eResourceType type; 
  __int64 m_depthSurfaceIndex; 
  tg::ResourceAttachment *v16; 
  __int64 v17; 
  tg::ResourceDesc *pDesc; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int8 levelIndex; 
  const char *m_pName; 
  tg::ResourceDesc *v24; 
  unsigned __int8 arrayIndex; 
  tg::ResourceDesc *v26; 
  unsigned int v27; 
  unsigned int v28; 
  tg::ResourceAttachment *v29; 
  unsigned __int16 *v30; 
  __int64 result; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  const tg::Task *v35; 

  v35 = pTask;
  v3 = 0;
  v4 = 0;
  v6 = 0i64;
  v34 = 0;
  if ( !pTask->m_attachmentCount )
    goto LABEL_40;
  do
  {
    v8 = 0;
    v9 = 0;
    v10 = &pTask->m_attachments[v6];
    if ( !this->m_attachmentCount )
      goto LABEL_39;
    do
    {
      m_attachments = this->m_attachments;
      v12 = v9;
      v13 = &m_attachments[v12];
      if ( m_attachments[v12].nameHashInput != v10->nameHashOutput )
        goto LABEL_37;
      type = v13->type;
      if ( type == eResourceType_Buffer && v10->pDesc->type != eResourceType_Buffer )
      {
        tg::DebugLog::Print(&logs->error, "ERROR: Adding resource '%s' to task '%s', expected buffer but resource is not a buffer!\n", v10->pNameOutput, this->m_pName);
        goto LABEL_37;
      }
      if ( type == eResourceType_ColorTarget )
      {
        m_depthSurfaceIndex = this->m_depthSurfaceIndex;
        v16 = (_DWORD)m_depthSurfaceIndex == -1 ? 0i64 : &m_attachments[m_depthSurfaceIndex];
        v17 = this->m_colourSurfaceCount ? (__int64)&m_attachments[this->m_colourSurfaceIndices[0]] : 0i64;
        pDesc = v10->pDesc;
        if ( ((v10->type - 32) & 0xFFFFFFDF) == 0 )
        {
          if ( v17 && (v19 = *(_QWORD *)v17) != 0 && (v20 = *(_DWORD *)(v19 + 8), v20 < 0x2000000) && (v21 = *(_DWORD *)(v19 + 12), v21 < 0x2000000) )
          {
            if ( pDesc->size.v[0] != v20 || pDesc->size.v[1] != v21 )
              goto LABEL_31;
          }
          else if ( v16 )
          {
            v26 = v16->pDesc;
            if ( v16->pDesc )
            {
              v27 = v26->size.v[0];
              if ( v27 < 0x2000000 )
              {
                v28 = v26->size.v[1];
                if ( v28 < 0x2000000 && (pDesc->size.v[0] != v27 || pDesc->size.v[1] != v28) )
                {
                  v17 = (__int64)v16;
LABEL_31:
                  tg::DebugLog::Print(&logs->error, "ERROR: Adding surface '%s' to task '%s' but dimensions don't match existing surface '%s'!\n", v10->pNameOutput, this->m_pName, *(const char **)(v17 + 16));
                  goto LABEL_37;
                }
              }
            }
          }
        }
      }
      levelIndex = v13->levelIndex;
      m_pName = this->m_pName;
      v24 = v10->pDesc;
      arrayIndex = v13->arrayIndex;
      if ( (unsigned __int8)(levelIndex - 1) > 0xFDu || levelIndex < v24->levels )
      {
        if ( (unsigned __int8)(arrayIndex - 1) > 0xFDu || arrayIndex < v24->arraySize )
        {
          --v13->ref;
          v8 = 1;
          v29 = this->m_attachments;
          if ( !v29[v12].ref )
            v29[v9].pDesc = v10->pDesc;
        }
        else
        {
          LODWORD(v33) = v24->levels;
          LODWORD(v32) = arrayIndex;
          tg::DebugLog::Print(&logs->error, "ERROR: Adding resource '%s' to task '%s' but attachment array index '%d' is greater than resource maximum of '%d'!\n", v10->pNameOutput, m_pName, v32, v33);
        }
      }
      else
      {
        LODWORD(v33) = v24->levels;
        LODWORD(v32) = levelIndex;
        tg::DebugLog::Print(&logs->error, "ERROR: Adding resource '%s' to task '%s' but attachment mip index '%d' is greater than resource maximum of '%d'!\n", v10->pNameOutput, m_pName, v32, v33);
      }
LABEL_37:
      ++v9;
    }
    while ( v9 < this->m_attachmentCount );
    pTask = v35;
LABEL_39:
    v3 |= v8;
    v6 = (unsigned int)(v34 + 1);
    v34 = v6;
  }
  while ( (unsigned int)v6 < pTask->m_attachmentCount );
LABEL_40:
  if ( this->m_dependencyCount )
  {
    do
    {
      v30 = &this->m_dependencies[v4];
      if ( *v30 == pTask->m_taskIndex )
      {
        *v30 = -1;
        v3 = 1;
      }
      ++v4;
    }
    while ( v4 < this->m_dependencyCount );
  }
  result = v3;
  if ( v3 )
    --this->m_unresolvedDependencyCount;
  return result;
}

/*
==============
tg::Task::SetCondition
==============
*/
void tg::Task::SetCondition(tg::Task *this, tg::eCondition conditionType, unsigned int conditionIndex)
{
  this->m_conditionIndex = conditionIndex;
  this->m_conditionType = conditionType;
}

/*
==============
tg::Task::SetName
==============
*/
void tg::Task::SetName(tg::Task *this, const char *pName)
{
  __int64 v3; 

  this->m_pName = pName;
  v3 = -1i64;
  do
    ++v3;
  while ( pName[v3] );
  this->m_nameHash = tg::HashRaw((const unsigned __int8 *)pName, v3, 0);
}

/*
==============
tg::Task::SetOrderHint
==============
*/
void tg::Task::SetOrderHint(tg::Task *this, int hint)
{
  this->m_orderHint = hint;
}

/*
==============
tg::Task::SetSystemData
==============
*/
void tg::Task::SetSystemData(tg::Task *this, const unsigned int *pSystemData, unsigned int systemDataCount)
{
  this->m_pSystemData = pSystemData;
  this->m_systemDataCount = systemDataCount;
}

/*
==============
tg::Task::SetUserData
==============
*/
void tg::Task::SetUserData(tg::Task *this, const unsigned int *pUserData, unsigned int userDataCount)
{
  this->m_pUserData = pUserData;
  this->m_userDataCount = userDataCount;
}

/*
==============
tg::Task::UpdateAttachmentsAndDescs
==============
*/
void tg::Task::UpdateAttachmentsAndDescs(tg::Task *this, tg::Task **ppTasks, unsigned int queueIndex, tg::DebugLogs *logs, tg::DynamicSizeData *dynamicSize)
{
  tg::Size *v5; 
  tg::DebugLogs *v6; 
  unsigned int m_attachmentCount; 
  unsigned __int8 v8; 
  unsigned __int8 *v11; 
  int v12; 
  tg::ResourceAttachment *m_attachments; 
  __int64 v14; 
  tg::ResourceDesc *v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  __int64 i; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  unsigned int v27; 
  int v28; 
  __int64 j; 
  unsigned int v30; 
  int v31; 
  unsigned int depth; 
  unsigned int levels; 
  unsigned int v34; 
  int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int k; 
  tg::ResourceAttachment *v39; 
  unsigned int v40; 
  unsigned __int8 v41; 
  unsigned __int8 levelIndex; 
  unsigned __int8 arrayIndex; 
  char v44; 
  char v45; 
  tg::eResourceState state; 
  int v47; 
  tg::ResourceDesc *pDesc; 
  __int64 v49; 
  unsigned int resourceFlags; 
  __int64 v51; 
  unsigned int m; 
  tg::Task *v53; 
  unsigned int m_nextCount; 
  unsigned int v55; 
  __int64 v56; 
  __int64 v57; 
  unsigned __int8 v58; 
  int v59; 
  int v61[32]; 

  v5 = NULL;
  v6 = logs;
  m_attachmentCount = this->m_attachmentCount;
  v8 = queueIndex;
  v58 = queueIndex;
  this->m_queueIndex = queueIndex;
  v11 = NULL;
  v12 = 0;
  if ( m_attachmentCount )
  {
    while ( 1 )
    {
      m_attachments = this->m_attachments;
      if ( (m_attachments[v12].flags & 8) == 0 )
        break;
      if ( ++v12 >= m_attachmentCount )
        goto LABEL_6;
    }
    v11 = (unsigned __int8 *)&m_attachments[v12];
  }
LABEL_6:
  v14 = 0i64;
  v59 = 0;
  if ( this->m_descCount )
  {
    do
    {
      v15 = &this->m_descs[v14];
      v16 = v15->size.v[0];
      if ( ((v16 & 0xFE000000) != 0 || (v15->size.v[1] & 0xFE000000) != 0) && *(_QWORD *)(*(_QWORD *)v11 + 72i64) && (v15->resourceFlags & 0x4000) == 0 )
      {
        v5 = &dynamicSize->pSizes[dynamicSize->count];
        v15->pDynamicSizes = v5;
        dynamicSize->count += dynamicSize->stepCount;
        v16 = v15->size.v[0];
      }
      if ( (v16 & 0xFE000000) != 0 )
      {
        v17 = v11[53];
        v18 = v16 & 0x1FFFFFF;
        v19 = *(_DWORD *)(*(_QWORD *)v11 + 8i64) >> v17;
        if ( v17 == 255 )
          v19 = *(_DWORD *)(*(_QWORD *)v11 + 8i64);
        if ( (v16 & 0x20000000) != 0 )
        {
          v19 = (v19 + v18 - 1) / v18;
        }
        else if ( (v16 & 0x10000000) != 0 )
        {
          v19 /= v18;
        }
        else if ( (v16 & 0x40000000) != 0 )
        {
          v19 *= v18;
        }
        v20 = 1;
        if ( v19 > 1 )
          v20 = v19;
        v15->size.v[0] = v20;
        if ( v5 )
        {
          for ( i = 0i64; (unsigned int)i < dynamicSize->stepCount; i = (unsigned int)(i + 1) )
          {
            v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 72i64) + 8 * i) >> v11[53];
            if ( v11[53] == 255 )
              v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 72i64) + 8 * i);
            if ( (v16 & 0x20000000) != 0 )
            {
              v22 = (v22 + v18 - 1) / v18;
            }
            else if ( (v16 & 0x10000000) != 0 )
            {
              v22 /= v18;
            }
            else if ( (v16 & 0x40000000) != 0 )
            {
              v22 *= v18;
            }
            v23 = 1;
            if ( v22 > 1 )
              v23 = v22;
            v5[i].v[0] = v23;
          }
        }
      }
      v24 = v15->size.v[1];
      if ( (v24 & 0xFE000000) != 0 )
      {
        v25 = v11[53];
        v26 = v24 & 0x1FFFFFF;
        v27 = *(_DWORD *)(*(_QWORD *)v11 + 12i64) >> v25;
        if ( v25 == 255 )
          v27 = *(_DWORD *)(*(_QWORD *)v11 + 12i64);
        if ( (v24 & 0x20000000) != 0 )
        {
          v27 = (v27 + v26 - 1) / v26;
        }
        else if ( (v24 & 0x10000000) != 0 )
        {
          v27 /= v26;
        }
        else if ( (v24 & 0x40000000) != 0 )
        {
          v27 *= v26;
        }
        v28 = 1;
        if ( v27 > 1 )
          v28 = v27;
        v15->size.v[1] = v28;
        if ( v5 )
        {
          for ( j = 0i64; (unsigned int)j < dynamicSize->stepCount; j = (unsigned int)(j + 1) )
          {
            v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 72i64) + 8 * j + 4) >> v11[53];
            if ( v11[53] == 255 )
              v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 72i64) + 8 * j + 4);
            if ( (v24 & 0x20000000) != 0 )
            {
              v30 = (v30 + v26 - 1) / v26;
            }
            else if ( (v24 & 0x10000000) != 0 )
            {
              v30 /= v26;
            }
            else if ( (v24 & 0x40000000) != 0 )
            {
              v30 *= v26;
            }
            v31 = 1;
            if ( v30 > 1 )
              v31 = v30;
            v5[j].v[1] = v31;
          }
        }
      }
      depth = v15->depth;
      if ( depth == 0x80000000 )
      {
        depth = *(_DWORD *)(*(_QWORD *)v11 + 16i64);
        v15->depth = depth;
      }
      if ( v15->surfaceFormat == 0x80000000 )
        v15->surfaceFormat = *(_DWORD *)(*(_QWORD *)v11 + 32i64);
      if ( v15->textureFormat == 0x80000000 )
        v15->textureFormat = *(_DWORD *)(*(_QWORD *)v11 + 36i64);
      if ( v15->arraySize == 0x80000000 )
        v15->arraySize = *(_DWORD *)(*(_QWORD *)v11 + 20i64);
      levels = v15->levels;
      if ( levels == 0x80000000 )
      {
        levels = *(_DWORD *)(*(_QWORD *)v11 + 24i64);
        v15->levels = levels;
      }
      if ( v15->multisample == 0x80000000 )
        v15->multisample = *(_DWORD *)(*(_QWORD *)v11 + 40i64);
      if ( levels <= 1 )
      {
        v5 = NULL;
      }
      else
      {
        v34 = v15->size.v[1];
        if ( v15->size.v[0] > v34 )
          v34 = v15->size.v[0];
        if ( v34 > depth )
          depth = v34;
        v5 = NULL;
        v35 = 0;
        if ( depth > 1 )
        {
          do
          {
            depth >>= 1;
            ++v35;
          }
          while ( depth > 1 );
          levels = v15->levels;
        }
        v36 = v35 + 1;
        if ( levels < v36 )
          v36 = levels;
        v15->levels = v36;
      }
      v14 = (unsigned int)(v59 + 1);
      v59 = v14;
    }
    while ( (unsigned int)v14 < this->m_descCount );
    v8 = v58;
    v6 = logs;
  }
  v37 = 0;
  for ( k = 0; k < this->m_attachmentCount; ++k )
  {
    v39 = &this->m_attachments[k];
    v40 = v39->pDesc->levels;
    if ( v40 * v39->pDesc->arraySize <= 1 || (v41 = v39->arrayIndex, v41 == 0xFF) && v39->levelIndex == 0xFF )
    {
      v45 = -1;
    }
    else
    {
      levelIndex = v39->levelIndex;
      arrayIndex = v39->arrayIndex;
      if ( v41 == 0xFF )
        arrayIndex = 0;
      v44 = v40 * arrayIndex;
      if ( levelIndex == 0xFF )
        levelIndex = 0;
      v45 = levelIndex + v44;
    }
    v39->subresourceIndex = v45;
    state = v39->state;
    v39->queueIndex = v8;
    if ( state == eResourceState_ReadOnly )
    {
      v47 = 0;
      if ( v37 )
      {
        pDesc = v39->pDesc;
        while ( 1 )
        {
          v49 = (unsigned int)v61[v47];
          if ( this->m_attachments[v49].pDesc == pDesc && !v39->temporalIndex )
            break;
          if ( ++v47 >= v37 )
          {
            v8 = v58;
            goto LABEL_111;
          }
        }
        resourceFlags = pDesc->resourceFlags;
        if ( (resourceFlags & 0x2000) == 0 )
        {
          pDesc->resourceFlags = resourceFlags | 0x2000;
          v39->pDesc->count = 2;
        }
        v39->flags |= 0x20u;
        v8 = v58;
        this->m_attachments[v49].flags |= 0x10u;
      }
    }
    else if ( state == eResourceState_Write && !v39->temporalIndex && v39->pDesc->levels == 1 && v39->pDesc->arraySize == 1 )
    {
      v51 = v37++;
      v61[v51] = k;
    }
LABEL_111:
    ;
  }
  for ( m = 0; m < this->m_nextCount; ++m )
  {
    v53 = ppTasks[this->m_next[m]];
    tg::Task::SetAttachments(v53, v6, this);
    m_nextCount = v53->m_nextCount;
    v55 = 0;
    if ( m_nextCount )
    {
      while ( 1 )
      {
        v56 = v55;
        if ( v53->m_next[v55] == this->m_taskIndex )
          break;
        if ( ++v55 >= m_nextCount )
          goto LABEL_118;
      }
      v57 = m_nextCount - 1;
      v53->m_nextCount = v57;
      v53->m_next[v56] = v53->m_next[v57];
      v53->m_next[v53->m_nextCount] = -1;
    }
LABEL_118:
    ;
  }
}

