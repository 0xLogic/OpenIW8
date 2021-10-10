/*
==============
XAnimLookAtBoneHelper<0>::setBoneIndex
==============
*/

bool __fastcall XAnimLookAtBoneHelper<0>::setBoneIndex(XAnimLookAtBoneHelper<0> *this, unsigned __int16 index, const XAnimLookAtParams<0> *params)
{
  return ?setBoneIndex@?$XAnimLookAtBoneHelper@$0A@@@QEAA_NGAEBU?$XAnimLookAtParams@$0A@@@@Z(this, index, params);
}

/*
==============
XAnimLookAt_CalcInternal<0>
==============
*/

void __fastcall XAnimLookAt_CalcInternal<0>(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  ??$XAnimLookAt_CalcInternal@$0A@@@YAXPEAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimInfo@@M_NPEAUXAnimCalcBuffer@@@Z(nodeData, animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer);
}

/*
==============
XAnimLookAt_TransformBoneChain<1>
==============
*/

void __fastcall XAnimLookAt_TransformBoneChain<1>(XAnimLookAtParams<1> *params)
{
  ??$XAnimLookAt_TransformBoneChain@$00@@YAXAEAU?$XAnimLookAtParams@$00@@@Z(params);
}

/*
==============
XAnimLookAt_CalcInternal<1>
==============
*/

void __fastcall XAnimLookAt_CalcInternal<1>(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  ??$XAnimLookAt_CalcInternal@$00@@YAXPEAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimInfo@@M_NPEAUXAnimCalcBuffer@@@Z(nodeData, animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer);
}

/*
==============
XAnimLookAtParams<0>::IsValid
==============
*/

bool __fastcall XAnimLookAtParams<0>::IsValid(XAnimLookAtParams<0> *this)
{
  return ?IsValid@?$XAnimLookAtParams@$0A@@@QEBA_NXZ(this);
}

/*
==============
XAnimLookAtParams<1>::IsValid
==============
*/

bool __fastcall XAnimLookAtParams<1>::IsValid(XAnimLookAtParams<1> *this)
{
  return ?IsValid@?$XAnimLookAtParams@$00@@QEBA_NXZ(this);
}

/*
==============
XAnimLookAtBoneHelper<1>::getWSPos
==============
*/

void __fastcall XAnimLookAtBoneHelper<1>::getWSPos(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params, vec3_t *out)
{
  ?getWSPos@?$XAnimLookAtBoneHelper@$00@@QEBAXAEBU?$XAnimLookAtParams@$00@@AEATvec3_t@@@Z(this, params, out);
}

/*
==============
XAnimLookAtBoneHelper<1>::XAnimLookAtBoneHelper<1>
==============
*/

void __fastcall XAnimLookAtBoneHelper<1>::XAnimLookAtBoneHelper<1>(XAnimLookAtBoneHelper<1> *this)
{
  ??0?$XAnimLookAtBoneHelper@$00@@QEAA@XZ(this);
}

/*
==============
XAnimLookAtBoneHelper<1>::refresh
==============
*/

bool __fastcall XAnimLookAtBoneHelper<1>::refresh(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params)
{
  return ?refresh@?$XAnimLookAtBoneHelper@$00@@QEAA_NAEBU?$XAnimLookAtParams@$00@@@Z(this, params);
}

/*
==============
XAnimLookAtBoneHelper<0>::refresh
==============
*/

bool __fastcall XAnimLookAtBoneHelper<0>::refresh(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params)
{
  return ?refresh@?$XAnimLookAtBoneHelper@$0A@@@QEAA_NAEBU?$XAnimLookAtParams@$0A@@@@Z(this, params);
}

/*
==============
XAnimLookAtBoneHelper<0>::storeTransforms
==============
*/

void __fastcall XAnimLookAtBoneHelper<0>::storeTransforms(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params)
{
  ?storeTransforms@?$XAnimLookAtBoneHelper@$0A@@@QEAAXAEBU?$XAnimLookAtParams@$0A@@@@Z(this, params);
}

/*
==============
XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>
==============
*/

void __fastcall XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>(XAnimLookAtBoneHelper<0> *this)
{
  ??1?$XAnimLookAtBoneHelper@$0A@@@QEAA@XZ(this);
}

/*
==============
XAnimLookAt_UpdateCurrentLookAt
==============
*/

void __fastcall XAnimLookAt_UpdateCurrentLookAt(XAnimLookAt *pNode, const float dtime, const bool targetReset, bool isServer)
{
  ?XAnimLookAt_UpdateCurrentLookAt@@YAXAEAUXAnimLookAt@@M_N_N@Z(pNode, dtime, targetReset, isServer);
}

/*
==============
XAnimLookAt_Register
==============
*/

void XAnimLookAt_Register(void)
{
  ?XAnimLookAt_Register@@YAXXZ();
}

/*
==============
XAnimLookAtBoneHelper<1>::setBoneIndex
==============
*/

bool __fastcall XAnimLookAtBoneHelper<1>::setBoneIndex(XAnimLookAtBoneHelper<1> *this, unsigned __int16 index, const XAnimLookAtParams<1> *params)
{
  return ?setBoneIndex@?$XAnimLookAtBoneHelper@$00@@QEAA_NGAEBU?$XAnimLookAtParams@$00@@@Z(this, index, params);
}

/*
==============
XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>
==============
*/

void __fastcall XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>(XAnimLookAtBoneHelper<1> *this)
{
  ??1?$XAnimLookAtBoneHelper@$00@@QEAA@XZ(this);
}

/*
==============
XAnimLookAtBoneHelper<0>::XAnimLookAtBoneHelper<0>
==============
*/

void __fastcall XAnimLookAtBoneHelper<0>::XAnimLookAtBoneHelper<0>(XAnimLookAtBoneHelper<0> *this)
{
  ??0?$XAnimLookAtBoneHelper@$0A@@@QEAA@XZ(this);
}

/*
==============
XAnimLookAt_TransformBoneChain<0>
==============
*/

void __fastcall XAnimLookAt_TransformBoneChain<0>(XAnimLookAtParams<0> *params)
{
  ??$XAnimLookAt_TransformBoneChain@$0A@@@YAXAEAU?$XAnimLookAtParams@$0A@@@@Z(params);
}

/*
==============
XAnimLookAt_UpdateTargetLookAt
==============
*/

bool __fastcall XAnimLookAt_UpdateTargetLookAt(const DObj *obj, XAnimLookAt *pNode)
{
  return ?XAnimLookAt_UpdateTargetLookAt@@YA_NPEBUDObj@@PEAUXAnimLookAt@@@Z(obj, pNode);
}

/*
==============
XAnimLookAt_Debug_text
==============
*/

void __fastcall XAnimLookAt_Debug_text(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  ?XAnimLookAt_Debug_text@@YAXPEAXPEBUXAnimInfo@@PEADHHPEAH@Z(nodeData, animInfo, buffer, size, depth, inoutPos);
}

/*
==============
XAnimLookAtBoneHelper<1>::storeTransforms
==============
*/

void __fastcall XAnimLookAtBoneHelper<1>::storeTransforms(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params)
{
  ?storeTransforms@?$XAnimLookAtBoneHelper@$00@@QEAAXAEBU?$XAnimLookAtParams@$00@@@Z(this, params);
}

/*
==============
XAnimLookAtBoneHelper<0>::getWSPos
==============
*/

void __fastcall XAnimLookAtBoneHelper<0>::getWSPos(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params, vec3_t *out)
{
  ?getWSPos@?$XAnimLookAtBoneHelper@$0A@@@QEBAXAEBU?$XAnimLookAtParams@$0A@@@AEATvec3_t@@@Z(this, params, out);
}

/*
==============
calcUpdatedAngles
==============
*/

void __fastcall calcUpdatedAngles(XAnimLookAtTrackingData *trackData, float targetPitch, float targetYaw, const float dtime, const XAnimLookAtPDParams *pd, const bool applyDiffError, bool isServer)
{
  ?calcUpdatedAngles@@YAXAEAUXAnimLookAtTrackingData@@MMMAEBUXAnimLookAtPDParams@@_N_N@Z(trackData, targetPitch, targetYaw, dtime, pd, applyDiffError, isServer);
}

/*
==============
XAnimLookAt_Init
==============
*/
void XAnimLookAt_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  float v3; 

  v3 = TABLE_CATCH_SPEEDS[0];
  *(_QWORD *)nodeData = 0i64;
  *((_DWORD *)nodeData + 2) = 0;
  *((_QWORD *)nodeData + 13) = 0i64;
  *((_DWORD *)nodeData + 28) = 0;
  *((_DWORD *)nodeData + 42) = 0;
  *((_QWORD *)nodeData + 15) = 0i64;
  *((_QWORD *)nodeData + 16) = 0i64;
  *((_QWORD *)nodeData + 17) = 0i64;
  *((_QWORD *)nodeData + 18) = 0i64;
  *((_QWORD *)nodeData + 19) = 0i64;
  *((_QWORD *)nodeData + 20) = 0i64;
  *((_BYTE *)nodeData + 32) = 0;
  *((_WORD *)nodeData + 116) = 254;
  *((float *)nodeData + 43) = v3;
  *(_DWORD *)((char *)nodeData + 234) = 254;
  *((_DWORD *)nodeData + 56) = -16843010;
  *((_WORD *)nodeData + 114) = -258;
  *((_QWORD *)nodeData + 22) = 0i64;
  *((_QWORD *)nodeData + 23) = 0i64;
  *((_QWORD *)nodeData + 24) = 0i64;
  *((_QWORD *)nodeData + 25) = 0i64;
  *((_QWORD *)nodeData + 26) = 0i64;
  *((_QWORD *)nodeData + 27) = 0i64;
}

/*
==============
XAnimLookAt_Destroy
==============
*/
void XAnimLookAt_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimLookAt_Update
==============
*/
void XAnimLookAt_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime)
{
  const dvar_t *v8; 
  unsigned __int8 v9; 
  const XAnimLookAtLimits *LookAtLimits; 
  const dvar_t *v11; 
  float v12; 
  unsigned __int16 *v13; 
  float *m_boneRolls; 
  __int64 v15; 
  float v16; 
  float v17; 
  int v18; 
  float v19; 
  float v20; 
  int v21; 
  float v22; 
  float v23; 
  int v24; 
  float v25; 
  float v26; 
  int v27; 
  float v28; 
  float v29; 
  int v30; 
  float v31; 
  float v32; 
  int v33; 
  bool v34; 
  float v35; 
  float v36; 
  bool v37; 
  bool v38; 
  __int64 v39; 
  unsigned __int8 v40; 
  refdef_t *v41; 
  const dvar_t *v42; 
  __int64 applyDiffError; 
  __int64 isServer; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 583, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 584, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 585, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_xanim_disableLookAtNodes;
  if ( !DCONST_DVARBOOL_xanim_disableLookAtNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableLookAtNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    v9 = *((_BYTE *)nodeData + 32);
    if ( v9 >= 8u )
    {
      LODWORD(isServer) = 8;
      LODWORD(applyDiffError) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 593, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->m_state ) < (unsigned)( 8 )", "pNode->m_state doesn't index BG_LOOKAT_MAX_STATES\n\t%i not in [0, %i)", applyDiffError, isServer) )
        __debugbreak();
    }
    LookAtLimits = BG_GetLookAtLimits(*((unsigned __int8 *)nodeData + 32));
    if ( !*((_BYTE *)nodeData + 237) )
    {
      *((_BYTE *)nodeData + 237) = 1;
      *(_QWORD *)((char *)nodeData + 68) = 0i64;
      *((_DWORD *)nodeData + 19) = 0;
    }
    v11 = DCONST_DVARFLT_xanim_lookatSpeedMultiplier;
    if ( !DCONST_DVARFLT_xanim_lookatSpeedMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatSpeedMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = (float)(dtime * v11->current.value) * *((float *)nodeData + 43);
    *((float *)nodeData + 42) = (float)((float)(*((float *)nodeData + 29) - *((float *)nodeData + 42)) * v12) + *((float *)nodeData + 42);
    v13 = (unsigned __int16 *)((char *)nodeData + 184);
    m_boneRolls = LookAtLimits->m_boneRolls;
    v15 = 4i64;
    do
    {
      if ( *(v13 - 4) )
        LODWORD(v16) = ((*(v13 - 4) & 0x8000) << 16) | (((((*(v13 - 4) & 0x3FFF) << 14) - (~(*(v13 - 4) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      else
        v16 = 0.0;
      v17 = (float)((float)(*(m_boneRolls - 4) - v16) * v12) + v16;
      v18 = (int)((2 * LODWORD(v17)) ^ 0x80003FFF) >> 14;
      if ( v18 > 0x3FFF )
        v18 = 0x3FFF;
      if ( v18 < -16384 )
        LOWORD(v18) = -16384;
      *(v13 - 4) = HIWORD(v17) ^ (HIWORD(v17) ^ v18) & 0x3FFF;
      if ( *v13 )
        LODWORD(v19) = ((*v13 & 0x8000) << 16) | (((((*v13 & 0x3FFF) << 14) - (~(*v13 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      else
        v19 = 0.0;
      v20 = (float)((float)(*m_boneRolls - v19) * v12) + v19;
      v21 = (int)((2 * LODWORD(v20)) ^ 0x80003FFF) >> 14;
      if ( v21 > 0x3FFF )
        v21 = 0x3FFF;
      if ( v21 < -16384 )
        LOWORD(v21) = -16384;
      *v13 = HIWORD(v20) ^ (HIWORD(v20) ^ v21) & 0x3FFF;
      if ( v13[4] )
        LODWORD(v22) = ((v13[4] & 0x8000) << 16) | (((((v13[4] & 0x3FFF) << 14) - (~(v13[4] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      else
        v22 = 0.0;
      v23 = (float)((float)(m_boneRolls[12] - v22) * v12) + v22;
      v24 = (int)((2 * LODWORD(v23)) ^ 0x80003FFF) >> 14;
      if ( v24 > 0x3FFF )
        v24 = 0x3FFF;
      if ( v24 < -16384 )
        LOWORD(v24) = -16384;
      v13[4] = HIWORD(v23) ^ (HIWORD(v23) ^ v24) & 0x3FFF;
      if ( v13[8] )
        LODWORD(v25) = ((v13[8] & 0x8000) << 16) | (((((v13[8] & 0x3FFF) << 14) - (~(v13[8] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      else
        v25 = 0.0;
      v26 = (float)((float)(m_boneRolls[16] - v25) * v12) + v25;
      v27 = (int)((2 * LODWORD(v26)) ^ 0x80003FFF) >> 14;
      if ( v27 > 0x3FFF )
        v27 = 0x3FFF;
      if ( v27 < -16384 )
        LOWORD(v27) = -16384;
      v13[8] = HIWORD(v26) ^ (HIWORD(v26) ^ v27) & 0x3FFF;
      if ( v13[12] )
        LODWORD(v28) = ((v13[12] & 0x8000) << 16) | (((((v13[12] & 0x3FFF) << 14) - (~(v13[12] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      else
        v28 = 0.0;
      v29 = (float)((float)(m_boneRolls[4] - v28) * v12) + v28;
      v30 = (int)((2 * LODWORD(v29)) ^ 0x80003FFF) >> 14;
      if ( v30 > 0x3FFF )
        v30 = 0x3FFF;
      if ( v30 < -16384 )
        LOWORD(v30) = -16384;
      v13[12] = HIWORD(v29) ^ (HIWORD(v29) ^ v30) & 0x3FFF;
      if ( v13[16] )
        LODWORD(v31) = ((v13[16] & 0x8000) << 16) | (((((v13[16] & 0x3FFF) << 14) - (~(v13[16] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      else
        v31 = 0.0;
      v32 = (float)((float)(m_boneRolls[8] - v31) * v12) + v31;
      v33 = (int)((2 * LODWORD(v32)) ^ 0x80003FFF) >> 14;
      if ( v33 > 0x3FFF )
        v33 = 0x3FFF;
      if ( v33 < -16384 )
        LOWORD(v33) = -16384;
      ++m_boneRolls;
      v13[16] = HIWORD(v32) ^ (HIWORD(v32) ^ v33) & 0x3FFF;
      ++v13;
      --v15;
    }
    while ( v15 );
    v34 = !*((_BYTE *)nodeData + 236) && *((_BYTE *)nodeData + 32);
    *((_BYTE *)nodeData + 34) |= v34;
    if ( v34 )
    {
      v35 = *((float *)nodeData + 4);
      v36 = *((float *)nodeData + 3);
      *((float *)nodeData + 33) = v35;
      *((float *)nodeData + 39) = v35;
      *((float *)nodeData + 30) = v36;
      *((float *)nodeData + 36) = v36;
    }
    *((_BYTE *)nodeData + 236) = *((_BYTE *)nodeData + 32);
    if ( dtime > 0.0 )
    {
      v37 = !XAnimLookAt_UpdateTargetLookAt(obj, (XAnimLookAt *)nodeData) && !*((_BYTE *)nodeData + 34);
      *((_BYTE *)nodeData + 34) = 0;
      v38 = obj->tree && !obj->tree->owner[0];
      v39 = *((unsigned __int8 *)nodeData + 33);
      calcUpdatedAngles((XAnimLookAtTrackingData *)nodeData + 5, *((float *)nodeData + 28), *((float *)nodeData + 27), dtime, &TABLE_HEAD_PD_PARAMS[v39], v37, v38);
      calcUpdatedAngles((XAnimLookAtTrackingData *)nodeData + 6, *((float *)nodeData + 30), *((float *)nodeData + 33), dtime, &TABLE_TORSO_PD_PARAMS[v39], v37, v38);
    }
    v40 = *((_BYTE *)nodeData + 33);
    if ( v40 >= 2u )
    {
      LODWORD(isServer) = 2;
      LODWORD(applyDiffError) = v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 663, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->m_lookIntensity ) < (unsigned)( 2 )", "pNode->m_lookIntensity doesn't index LOOKAT_NUM_INTENSITIES\n\t%i not in [0, %i)", applyDiffError, isServer) )
        __debugbreak();
    }
    *((float *)nodeData + 43) = TABLE_CATCH_SPEEDS[*((unsigned __int8 *)nodeData + 33)];
    if ( obj->tree->owner[0] )
    {
      v41 = g_activeRefDef;
      if ( g_activeRefDef )
      {
        *((_DWORD *)nodeData + 17) = LODWORD(g_activeRefDef->viewOffset.v[0]);
        *((_DWORD *)nodeData + 18) = LODWORD(v41->viewOffset.v[1]);
        *((_DWORD *)nodeData + 19) = LODWORD(v41->viewOffset.v[2]);
      }
    }
    else
    {
      *(_QWORD *)((char *)nodeData + 68) = 0i64;
      *((_DWORD *)nodeData + 19) = 0;
    }
    v42 = DCONST_DVARBOOL_xanim_debugLookAtPos;
    if ( !DCONST_DVARBOOL_xanim_debugLookAtPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugLookAtPos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( v42->current.enabled && obj->tree->owner[0] == 1 )
      XAnimLookAt_Debug_r(nodeData);
  }
}

/*
==============
XAnimLookAt_Calc
==============
*/
void XAnimLookAt_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v11; 

  if ( weightScale >= 0.001 )
  {
    v11 = DCONST_DVARBOOL_xanim_disableLookAtNodes;
    if ( !DCONST_DVARBOOL_xanim_disableLookAtNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableLookAtNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
    {
      if ( obj->tree->owner[0] )
        XAnimLookAt_CalcInternal<0>(nodeData, animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer);
      else
        XAnimLookAt_CalcInternal<1>(nodeData, animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer);
    }
  }
}

/*
==============
XAnimLookAt_Read
==============
*/
void XAnimLookAt_Read(void *nodeData, MemoryFile *memFile)
{
  MemFile_ReadData(memFile, 0x12Cui64, nodeData);
  *((_BYTE *)nodeData + 224) = -2;
  *(_WORD *)((char *)nodeData + 227) = -258;
  *((_BYTE *)nodeData + 229) = -2;
}

/*
==============
XAnimLookAt_Write
==============
*/
void XAnimLookAt_Write(void *nodeData, MemoryFile *memFile)
{
  MemFile_WriteData(memFile, 0x12Cui64, nodeData);
}

/*
==============
XAnimLookAt_PostParse
==============
*/
char XAnimLookAt_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimLookAt_PrintDebug
==============
*/
void XAnimLookAt_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1398, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1399, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1400, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1401, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1402, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  XAnimLookAt_Debug_text(nodeData, animInfo, buffer, size, depth, inoutPos);
}

/*
==============
XAnimLookAt_CalcInternal<1>
==============
*/
void XAnimLookAt_CalcInternal<1>(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v11; 
  bool enabled; 
  bool v13; 
  unsigned __int16 m_originBoneIndex; 
  __int16 m_mainRootBoneIndex; 
  unsigned __int16 v16; 
  __int16 v17; 
  unsigned __int16 m_spineLowerBoneIndex; 
  bool v19; 
  unsigned __int16 m_spineBoneIndex; 
  bool v21; 
  unsigned __int16 m_neckBoneIndex; 
  bool v23; 
  unsigned __int16 m_headBoneIndex; 
  bool v25; 
  XAnimLookAt *pNode; 
  XAnimLookAtParams<1> params; 
  vec4_t color; 
  DObjPartBits savedPartBits; 

  v11 = DCONST_DVARBOOL_xanim_lookatDrawChain;
  if ( !DCONST_DVARBOOL_xanim_lookatDrawChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatDrawChain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  params.pNode = (XAnimLookAt *)nodeData;
  params.animCalcInfo = animCalcInfo;
  params.obj = obj;
  params.animInfo = animInfo;
  params.weightScale = weightScale;
  params.bNormQuat = bNormQuat;
  params.destBuffer = destBuffer;
  memset_0(&params.entityTransform, 0, 0x54ui64);
  `eh vector constructor iterator'(params.m_boneData, 0x34ui64, 4ui64, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<1>::XAnimLookAtBoneHelper<1>, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>);
  AnglesAndOriginToMatrix43((const vec3_t *)((char *)nodeData + 92), (const vec3_t *)((char *)nodeData + 80), &params.entityTransform);
  MatrixTranspose((const tmat33_t<vec3_t> *)&params.entityTransform, &params.entityAxisInv);
  v13 = !XAnimLookAt_PreCalc_1_(&params, &savedPartBits);
  m_originBoneIndex = params.pNode->m_originBoneIndex;
  params.m_originBoneData.m_boneIndex = m_originBoneIndex;
  if ( m_originBoneIndex == params.pNode->m_headBoneIndex || m_originBoneIndex == params.pNode->m_neckBoneIndex || m_originBoneIndex == params.pNode->m_spineBoneIndex || m_originBoneIndex == params.pNode->m_spineLowerBoneIndex || m_originBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_originBoneIndex == params.pNode->m_eyeBoneRightIndex || (m_mainRootBoneIndex = params.pNode->m_mainRootBoneIndex, params.m_originBoneData.m_requiresAdjustment = 0, m_originBoneIndex == m_mainRootBoneIndex) )
    params.m_originBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_originBoneData, &params);
  v16 = params.pNode->m_mainRootBoneIndex;
  params.m_mainRootBoneData.m_boneIndex = v16;
  if ( v16 == params.pNode->m_headBoneIndex || v16 == params.pNode->m_neckBoneIndex || v16 == params.pNode->m_spineBoneIndex || v16 == params.pNode->m_spineLowerBoneIndex || v16 == params.pNode->m_eyeBoneLeftIndex || v16 == params.pNode->m_eyeBoneRightIndex || (v17 = params.pNode->m_mainRootBoneIndex, params.m_mainRootBoneData.m_requiresAdjustment = 0, v16 == v17) )
    params.m_mainRootBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_mainRootBoneData, &params);
  m_spineLowerBoneIndex = params.pNode->m_spineLowerBoneIndex;
  params.m_boneData[0].m_boneIndex = m_spineLowerBoneIndex;
  v19 = m_spineLowerBoneIndex == params.pNode->m_headBoneIndex || m_spineLowerBoneIndex == params.pNode->m_neckBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineLowerBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[0].m_requiresAdjustment = v19;
  XAnimLookAtBoneHelper<1>::refresh(params.m_boneData, &params);
  m_spineBoneIndex = params.pNode->m_spineBoneIndex;
  params.m_boneData[1].m_boneIndex = m_spineBoneIndex;
  v21 = m_spineBoneIndex == params.pNode->m_headBoneIndex || m_spineBoneIndex == params.pNode->m_neckBoneIndex || m_spineBoneIndex == params.pNode->m_spineBoneIndex || m_spineBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[1].m_requiresAdjustment = v21;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_boneData[1], &params);
  m_neckBoneIndex = params.pNode->m_neckBoneIndex;
  params.m_boneData[2].m_boneIndex = m_neckBoneIndex;
  v23 = m_neckBoneIndex == params.pNode->m_headBoneIndex || m_neckBoneIndex == params.pNode->m_neckBoneIndex || m_neckBoneIndex == params.pNode->m_spineBoneIndex || m_neckBoneIndex == params.pNode->m_spineLowerBoneIndex || m_neckBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_neckBoneIndex == params.pNode->m_eyeBoneRightIndex || m_neckBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[2].m_requiresAdjustment = v23;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_boneData[2], &params);
  m_headBoneIndex = params.pNode->m_headBoneIndex;
  params.m_boneData[3].m_boneIndex = m_headBoneIndex;
  v25 = m_headBoneIndex == params.pNode->m_headBoneIndex || m_headBoneIndex == params.pNode->m_neckBoneIndex || m_headBoneIndex == params.pNode->m_spineBoneIndex || m_headBoneIndex == params.pNode->m_spineLowerBoneIndex || m_headBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_headBoneIndex == params.pNode->m_eyeBoneRightIndex || m_headBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[3].m_requiresAdjustment = v25;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_boneData[3], &params);
  if ( enabled )
  {
    color = (vec4_t)_xmm;
    XAnimLookAt_DebugDrawChain_1_(&params, &color);
  }
  if ( !v13 )
  {
    XAnimLookAt_TransformBoneChain<1>(&params);
    if ( enabled )
    {
      color = (vec4_t)_xmm;
      XAnimLookAt_DebugDrawChain_1_(&params, &color);
    }
    pNode = params.pNode;
    if ( !params.pNode || !params.animCalcInfo || !params.obj || !params.destBuffer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 797, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      pNode = params.pNode;
    }
    if ( pNode->m_originBoneIndex < 0xFEu && pNode->m_mainRootBoneIndex < 0xFEu && pNode->m_spineLowerBoneIndex < 0xFEu && pNode->m_spineBoneIndex < 0xFEu && pNode->m_neckBoneIndex < 0xFEu && pNode->m_headBoneIndex < 0xFEu )
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(params.animCalcInfo->partBits, &savedPartBits);
  }
  `eh vector destructor iterator'(params.m_boneData, 0x34ui64, 4ui64, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>);
}

/*
==============
XAnimLookAt_CalcInternal<0>
==============
*/
void XAnimLookAt_CalcInternal<0>(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v11; 
  bool v12; 
  unsigned __int16 m_originBoneIndex; 
  __int16 m_mainRootBoneIndex; 
  unsigned __int16 v15; 
  __int16 v16; 
  unsigned __int16 m_spineLowerBoneIndex; 
  bool v18; 
  unsigned __int16 m_spineBoneIndex; 
  bool v20; 
  unsigned __int16 m_neckBoneIndex; 
  bool v22; 
  unsigned __int16 m_headBoneIndex; 
  bool v24; 
  XAnimLookAt *pNode; 
  XAnimLookAtParams<0> params; 
  DObjPartBits savedPartBits; 

  v11 = DCONST_DVARBOOL_xanim_lookatDrawChain;
  if ( !DCONST_DVARBOOL_xanim_lookatDrawChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatDrawChain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  params.pNode = (XAnimLookAt *)nodeData;
  params.animCalcInfo = animCalcInfo;
  params.obj = obj;
  params.animInfo = animInfo;
  params.weightScale = weightScale;
  params.bNormQuat = bNormQuat;
  params.destBuffer = destBuffer;
  memset_0(&params.entityTransform, 0, 0x54ui64);
  `eh vector constructor iterator'(params.m_boneData, 0x34ui64, 4ui64, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<0>::XAnimLookAtBoneHelper<0>, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>);
  v12 = !XAnimLookAt_PreCalc_0_(&params, &savedPartBits);
  m_originBoneIndex = params.pNode->m_originBoneIndex;
  params.m_originBoneData.m_boneIndex = m_originBoneIndex;
  if ( m_originBoneIndex == params.pNode->m_headBoneIndex || m_originBoneIndex == params.pNode->m_neckBoneIndex || m_originBoneIndex == params.pNode->m_spineBoneIndex || m_originBoneIndex == params.pNode->m_spineLowerBoneIndex || m_originBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_originBoneIndex == params.pNode->m_eyeBoneRightIndex || (m_mainRootBoneIndex = params.pNode->m_mainRootBoneIndex, params.m_originBoneData.m_requiresAdjustment = 0, m_originBoneIndex == m_mainRootBoneIndex) )
    params.m_originBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_originBoneData, &params);
  v15 = params.pNode->m_mainRootBoneIndex;
  params.m_mainRootBoneData.m_boneIndex = v15;
  if ( v15 == params.pNode->m_headBoneIndex || v15 == params.pNode->m_neckBoneIndex || v15 == params.pNode->m_spineBoneIndex || v15 == params.pNode->m_spineLowerBoneIndex || v15 == params.pNode->m_eyeBoneLeftIndex || v15 == params.pNode->m_eyeBoneRightIndex || (v16 = params.pNode->m_mainRootBoneIndex, params.m_mainRootBoneData.m_requiresAdjustment = 0, v15 == v16) )
    params.m_mainRootBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_mainRootBoneData, &params);
  m_spineLowerBoneIndex = params.pNode->m_spineLowerBoneIndex;
  params.m_boneData[0].m_boneIndex = m_spineLowerBoneIndex;
  v18 = m_spineLowerBoneIndex == params.pNode->m_headBoneIndex || m_spineLowerBoneIndex == params.pNode->m_neckBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineLowerBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[0].m_requiresAdjustment = v18;
  XAnimLookAtBoneHelper<0>::refresh(params.m_boneData, &params);
  m_spineBoneIndex = params.pNode->m_spineBoneIndex;
  params.m_boneData[1].m_boneIndex = m_spineBoneIndex;
  v20 = m_spineBoneIndex == params.pNode->m_headBoneIndex || m_spineBoneIndex == params.pNode->m_neckBoneIndex || m_spineBoneIndex == params.pNode->m_spineBoneIndex || m_spineBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[1].m_requiresAdjustment = v20;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_boneData[1], &params);
  m_neckBoneIndex = params.pNode->m_neckBoneIndex;
  params.m_boneData[2].m_boneIndex = m_neckBoneIndex;
  v22 = m_neckBoneIndex == params.pNode->m_headBoneIndex || m_neckBoneIndex == params.pNode->m_neckBoneIndex || m_neckBoneIndex == params.pNode->m_spineBoneIndex || m_neckBoneIndex == params.pNode->m_spineLowerBoneIndex || m_neckBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_neckBoneIndex == params.pNode->m_eyeBoneRightIndex || m_neckBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[2].m_requiresAdjustment = v22;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_boneData[2], &params);
  m_headBoneIndex = params.pNode->m_headBoneIndex;
  params.m_boneData[3].m_boneIndex = m_headBoneIndex;
  v24 = m_headBoneIndex == params.pNode->m_headBoneIndex || m_headBoneIndex == params.pNode->m_neckBoneIndex || m_headBoneIndex == params.pNode->m_spineBoneIndex || m_headBoneIndex == params.pNode->m_spineLowerBoneIndex || m_headBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_headBoneIndex == params.pNode->m_eyeBoneRightIndex || m_headBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[3].m_requiresAdjustment = v24;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_boneData[3], &params);
  if ( !v12 )
  {
    XAnimLookAt_TransformBoneChain<0>(&params);
    pNode = params.pNode;
    if ( !params.pNode || !params.animCalcInfo || !params.obj || !params.destBuffer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 797, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      pNode = params.pNode;
    }
    if ( pNode->m_originBoneIndex < 0xFEu && pNode->m_mainRootBoneIndex < 0xFEu && pNode->m_spineLowerBoneIndex < 0xFEu && pNode->m_spineBoneIndex < 0xFEu && pNode->m_neckBoneIndex < 0xFEu && pNode->m_headBoneIndex < 0xFEu )
    {
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(params.animCalcInfo->partBits, &savedPartBits);
      pNode = params.pNode;
    }
    *((float *)nodeData + 60) = params.m_boneData[3].m_lsPos.v[0] + pNode->m_entityViewOffset.v[0];
    *((float *)nodeData + 61) = params.m_boneData[3].m_lsPos.v[1] + pNode->m_entityViewOffset.v[1];
    *((float *)nodeData + 62) = params.m_boneData[3].m_lsPos.v[2] + pNode->m_entityViewOffset.v[2];
    *((float *)nodeData + 63) = params.m_originBoneData.m_lsPos.v[0] + pNode->m_entityViewOffset.v[0];
    *((float *)nodeData + 64) = params.m_originBoneData.m_lsPos.v[1] + pNode->m_entityViewOffset.v[1];
    *((float *)nodeData + 65) = params.m_originBoneData.m_lsPos.v[2] + pNode->m_entityViewOffset.v[2];
    MatrixCopy33(&params.m_originBoneData.m_wsOrientation, (tmat33_t<vec3_t> *)((char *)nodeData + 264));
  }
  `eh vector destructor iterator'(params.m_boneData, 0x34ui64, 4ui64, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>);
}

/*
==============
XAnimLookAt_TransformBoneChain<1>
==============
*/
void XAnimLookAt_TransformBoneChain<1>(XAnimLookAtParams<1> *params)
{
  float v1; 
  __int64 v3; 
  __int64 *v4; 
  __int64 v6; 
  __int64 v7; 
  float v9; 
  int v11; 
  float v13; 
  int v14; 
  XAnimLookAtBoneHelper<1> *v17; 
  XAnimLookAt *pNode; 
  __int128 v23; 
  __int128 v28; 
  XAnimLookAt *v33; 
  __int128 v34; 
  __int128 v40; 
  __int128 v41; 
  int v45; 
  float v46; 
  float v47; 
  int m_boneIndex; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  __int128 v53; 
  float weightScale; 
  const float4 *fmt; 
  const float4 *v58; 
  vec3_t angles; 
  __int128 v60; 
  tmat33_t<vec3_t> v61; 
  tmat33_t<vec3_t> dst; 
  vec3_t solution; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  vec4_t v67; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v69; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> src; 
  int v73[8]; 
  __int64 v74[5]; 

  v1 = FLOAT_360_0;
  _XMM14 = 0i64;
  v3 = 0i64;
  v74[0] = (__int64)&params->m_mainRootBoneData;
  v4 = v74;
  v74[1] = (__int64)params->m_boneData;
  v6 = 216i64;
  v74[2] = (__int64)&params->m_boneData[1];
  v7 = 4i64;
  v74[3] = (__int64)&params->m_boneData[2];
  v74[4] = (__int64)&params->m_boneData[3];
  __asm { vroundss xmm2, xmm14, xmm1, 1 }
  v9 = (float)(0.0027777778 * params->pNode->m_curHeadData.yaw) - *(float *)&_XMM2;
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  *(float *)&v11 = (float)((float)(0.0027777778 * params->pNode->m_curTorsoData.yaw) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  v13 = 0.0027777778 * params->pNode->m_curTorsoData.pitch;
  *(float *)&v14 = (float)((float)(0.0027777778 * params->pNode->m_curHeadData.pitch) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  v73[4] = v11;
  v73[5] = v11;
  *(float *)v73 = (float)(v13 - *(float *)&_XMM3) * 360.0;
  v73[1] = v73[0];
  *(float *)&v73[6] = v9 * 360.0;
  *(float *)&v73[7] = v9 * 360.0;
  v73[2] = v14;
  v73[3] = v14;
  _XMM6 = 0i64;
  do
  {
    v17 = (XAnimLookAtBoneHelper<1> *)v4[1];
    XAnimLookAtBoneHelper<1>::refresh(v17, params);
    AxisToQuat(&v17->m_wsOrientation, &out);
    _XMM1 = (unsigned int)v73[v3];
    __asm { vunpcklps xmm0, xmm1, xmm0 }
    angles.v[2] = 0.0;
    *(double *)angles.v = *(double *)&_XMM0;
    AnglesToAxis(&angles, &axis);
    MatrixMultiply(&axis, &params->m_originBoneData.m_wsOrientation, &v69);
    MatrixVecMultiply((const tmat33_t<vec3_t> *)*v4, v69.m, &solution);
    vectoangles(&solution, &angles);
    pNode = params->pNode;
    if ( *(_WORD *)((char *)&params->pNode->m_lookAtX + v6) )
      _XMM8 = ((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v6) & 0x8000) << 16) | (((((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v6) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)&pNode->m_lookAtX + v6) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    else
      _XMM8 = 0i64;
    if ( *(_WORD *)((char *)pNode + v6 - 16) )
      _XMM7 = ((*(_WORD *)((char *)pNode + v6 - 16) & 0x8000) << 16) | (((((*(_WORD *)((char *)pNode + v6 - 16) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)pNode + v6 - 16) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    else
      _XMM7 = 0i64;
    v23 = LODWORD(FLOAT_0_0027777778);
    __asm
    {
      vminss  xmm9, xmm8, xmm1
      vroundss xmm3, xmm14, xmm2, 1
    }
    *(float *)&v23 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * v1;
    _XMM12 = v23;
    __asm { vminss  xmm10, xmm7, xmm0 }
    if ( *(float *)&_XMM9 > *(float *)&_XMM8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM9, *(float *)&_XMM8) )
      __debugbreak();
    v28 = LODWORD(FLOAT_0_0027777778);
    __asm { vmaxss  xmm0, xmm12, xmm9 }
    v1 = FLOAT_360_0;
    __asm { vminss  xmm1, xmm0, xmm8 }
    angles.v[1] = *(float *)&_XMM1;
    __asm { vroundss xmm2, xmm14, xmm1, 1 }
    *(float *)&v28 = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
    _XMM8 = v28;
    if ( *(float *)&_XMM10 > *(float *)&_XMM7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM10, *(float *)&_XMM7) )
      __debugbreak();
    v33 = params->pNode;
    v34 = LODWORD(angles.v[1]);
    *(float *)&v34 = angles.v[1] * 0.016666668;
    __asm
    {
      vmaxss  xmm0, xmm8, xmm10
      vminss  xmm1, xmm0, xmm7
    }
    _XMM0 = v34 & _xmm;
    angles.v[0] = *(float *)&_XMM1;
    __asm
    {
      vmaxss  xmm0, xmm0, xmm6
      vminss  xmm1, xmm0, cs:__real@3f800000
    }
    if ( *(_WORD *)((char *)v33 + v6 - 32) )
      v40 = ((*(_WORD *)((char *)v33 + v6 - 32) & 0x8000) << 16) | (((((*(_WORD *)((char *)v33 + v6 - 32) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)v33 + v6 - 32) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    else
      v40 = 0i64;
    v41 = v40;
    *(float *)&v41 = *(float *)&v40 * *(float *)&_XMM1;
    _XMM1 = v41 ^ _xmm;
    __asm
    {
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    angles.v[2] = *(float *)&_XMM0;
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)*v4, &mat);
    AxisToQuat(&mat, &to);
    if ( *(_WORD *)((char *)params->pNode + v6 - 40) )
    {
      v45 = *(unsigned __int16 *)((char *)params->pNode + v6 - 40);
      LODWORD(v46) = ((v45 & 0xFFFF8000) << 16) | (((((v45 & 0x3FFF) << 14) - (~(v45 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    }
    else
    {
      v46 = 0.0;
    }
    QuatNlerp(&out, &to, v46, &result);
    QuatToAxis(&result, &src);
    MatrixCopy33(&src, &v17->m_wsOrientation);
    MatrixMultiply(&v17->m_wsOrientation, &params->entityAxisInv, &v61);
    if ( v17->m_requiresAdjustment )
    {
      dst.m[0] = v61.m[2];
      *(_OWORD *)dst.row1.v = _xmm ^ *(_OWORD *)v61.m[0].v;
      LODWORD(dst.m[2].v[2]) = LODWORD(v61.m[1].v[2]) ^ _xmm;
      LODWORD(dst.m[2].v[1]) = LODWORD(v61.m[1].v[1]) ^ _xmm;
    }
    else
    {
      MatrixCopy33(&v61, &dst);
    }
    AxisToQuat(&dst, &v67);
    v47 = v17->m_lsPos.v[0];
    m_boneIndex = v17->m_boneIndex;
    destBuffer = params->destBuffer;
    obj = params->obj;
    animCalcInfo = params->animCalcInfo;
    HIDWORD(v60) = 0;
    v53 = v60;
    *(float *)&v53 = v47;
    _XMM1 = v53;
    __asm
    {
      vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
      vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
    }
    weightScale = params->weightScale;
    v60 = _XMM1;
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, m_boneIndex, fmt, v58, weightScale);
    v6 += 2i64;
    ++v3;
    ++v4;
    --v7;
  }
  while ( v7 );
}

/*
==============
XAnimLookAt_TransformBoneChain<0>
==============
*/
void XAnimLookAt_TransformBoneChain<0>(XAnimLookAtParams<0> *params)
{
  float v1; 
  __int64 v3; 
  __int64 *v4; 
  __int64 v6; 
  __int64 v7; 
  float v9; 
  int v11; 
  float v13; 
  int v14; 
  XAnimLookAtBoneHelper<0> *v17; 
  XAnimLookAt *pNode; 
  __int128 v23; 
  __int128 v28; 
  XAnimLookAt *v33; 
  __int128 v34; 
  __int128 v40; 
  __int128 v41; 
  int v45; 
  float v46; 
  float v47; 
  int m_boneIndex; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  __int128 v53; 
  float weightScale; 
  const float4 *fmt; 
  const float4 *v58; 
  vec3_t angles; 
  __int128 v60; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> v62; 
  vec3_t solution; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  vec4_t v67; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v69; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> src; 
  int v73[8]; 
  __int64 v74[5]; 

  v1 = FLOAT_360_0;
  _XMM14 = 0i64;
  v3 = 0i64;
  v74[0] = (__int64)&params->m_mainRootBoneData;
  v4 = v74;
  v74[1] = (__int64)params->m_boneData;
  v6 = 216i64;
  v74[2] = (__int64)&params->m_boneData[1];
  v7 = 4i64;
  v74[3] = (__int64)&params->m_boneData[2];
  v74[4] = (__int64)&params->m_boneData[3];
  __asm { vroundss xmm2, xmm14, xmm1, 1 }
  v9 = (float)(0.0027777778 * params->pNode->m_curHeadData.yaw) - *(float *)&_XMM2;
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  *(float *)&v11 = (float)((float)(0.0027777778 * params->pNode->m_curTorsoData.yaw) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  v13 = 0.0027777778 * params->pNode->m_curTorsoData.pitch;
  *(float *)&v14 = (float)((float)(0.0027777778 * params->pNode->m_curHeadData.pitch) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  v73[4] = v11;
  v73[5] = v11;
  *(float *)v73 = (float)(v13 - *(float *)&_XMM3) * 360.0;
  v73[1] = v73[0];
  *(float *)&v73[6] = v9 * 360.0;
  *(float *)&v73[7] = v9 * 360.0;
  v73[2] = v14;
  v73[3] = v14;
  _XMM6 = 0i64;
  do
  {
    v17 = (XAnimLookAtBoneHelper<0> *)v4[1];
    XAnimLookAtBoneHelper<0>::refresh(v17, params);
    AxisToQuat(&v17->m_wsOrientation, &out);
    _XMM1 = (unsigned int)v73[v3];
    __asm { vunpcklps xmm0, xmm1, xmm0 }
    angles.v[2] = 0.0;
    *(double *)angles.v = *(double *)&_XMM0;
    AnglesToAxis(&angles, &axis);
    MatrixMultiply(&axis, &params->m_originBoneData.m_wsOrientation, &v69);
    MatrixVecMultiply((const tmat33_t<vec3_t> *)*v4, v69.m, &solution);
    vectoangles(&solution, &angles);
    pNode = params->pNode;
    if ( *(_WORD *)((char *)&params->pNode->m_lookAtX + v6) )
      _XMM8 = ((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v6) & 0x8000) << 16) | (((((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v6) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)&pNode->m_lookAtX + v6) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    else
      _XMM8 = 0i64;
    if ( *(_WORD *)((char *)pNode + v6 - 16) )
      _XMM7 = ((*(_WORD *)((char *)pNode + v6 - 16) & 0x8000) << 16) | (((((*(_WORD *)((char *)pNode + v6 - 16) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)pNode + v6 - 16) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    else
      _XMM7 = 0i64;
    v23 = LODWORD(FLOAT_0_0027777778);
    __asm
    {
      vminss  xmm9, xmm8, xmm1
      vroundss xmm3, xmm14, xmm2, 1
    }
    *(float *)&v23 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * v1;
    _XMM12 = v23;
    __asm { vminss  xmm10, xmm7, xmm0 }
    if ( *(float *)&_XMM9 > *(float *)&_XMM8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM9, *(float *)&_XMM8) )
      __debugbreak();
    v28 = LODWORD(FLOAT_0_0027777778);
    __asm { vmaxss  xmm0, xmm12, xmm9 }
    v1 = FLOAT_360_0;
    __asm { vminss  xmm1, xmm0, xmm8 }
    angles.v[1] = *(float *)&_XMM1;
    __asm { vroundss xmm2, xmm14, xmm1, 1 }
    *(float *)&v28 = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
    _XMM8 = v28;
    if ( *(float *)&_XMM10 > *(float *)&_XMM7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&_XMM10, *(float *)&_XMM7) )
      __debugbreak();
    v33 = params->pNode;
    v34 = LODWORD(angles.v[1]);
    *(float *)&v34 = angles.v[1] * 0.016666668;
    __asm
    {
      vmaxss  xmm0, xmm8, xmm10
      vminss  xmm1, xmm0, xmm7
    }
    _XMM0 = v34 & _xmm;
    angles.v[0] = *(float *)&_XMM1;
    __asm
    {
      vmaxss  xmm0, xmm0, xmm6
      vminss  xmm1, xmm0, cs:__real@3f800000
    }
    if ( *(_WORD *)((char *)v33 + v6 - 32) )
      v40 = ((*(_WORD *)((char *)v33 + v6 - 32) & 0x8000) << 16) | (((((*(_WORD *)((char *)v33 + v6 - 32) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)v33 + v6 - 32) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    else
      v40 = 0i64;
    v41 = v40;
    *(float *)&v41 = *(float *)&v40 * *(float *)&_XMM1;
    _XMM1 = v41 ^ _xmm;
    __asm
    {
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    angles.v[2] = *(float *)&_XMM0;
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)*v4, &mat);
    AxisToQuat(&mat, &to);
    if ( *(_WORD *)((char *)params->pNode + v6 - 40) )
    {
      v45 = *(unsigned __int16 *)((char *)params->pNode + v6 - 40);
      LODWORD(v46) = ((v45 & 0xFFFF8000) << 16) | (((((v45 & 0x3FFF) << 14) - (~(v45 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    }
    else
    {
      v46 = 0.0;
    }
    QuatNlerp(&out, &to, v46, &result);
    QuatToAxis(&result, &src);
    MatrixCopy33(&src, &v17->m_wsOrientation);
    MatrixCopy33(&v17->m_wsOrientation, &dst);
    if ( v17->m_requiresAdjustment )
    {
      v62.m[0] = dst.m[2];
      *(_OWORD *)v62.row1.v = _xmm ^ *(_OWORD *)dst.m[0].v;
      LODWORD(v62.m[2].v[2]) = LODWORD(dst.m[1].v[2]) ^ _xmm;
      LODWORD(v62.m[2].v[1]) = LODWORD(dst.m[1].v[1]) ^ _xmm;
    }
    else
    {
      MatrixCopy33(&dst, &v62);
    }
    AxisToQuat(&v62, &v67);
    v47 = v17->m_lsPos.v[0];
    m_boneIndex = v17->m_boneIndex;
    destBuffer = params->destBuffer;
    obj = params->obj;
    animCalcInfo = params->animCalcInfo;
    HIDWORD(v60) = 0;
    v53 = v60;
    *(float *)&v53 = v47;
    _XMM1 = v53;
    __asm
    {
      vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
      vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
    }
    weightScale = params->weightScale;
    v60 = _XMM1;
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, m_boneIndex, fmt, v58, weightScale);
    v6 += 2i64;
    ++v3;
    ++v4;
    --v7;
  }
  while ( v7 );
}

/*
==============
XAnimLookAtBoneHelper<1>::XAnimLookAtBoneHelper<1>
==============
*/
void XAnimLookAtBoneHelper<1>::XAnimLookAtBoneHelper<1>(XAnimLookAtBoneHelper<1> *this)
{
  ;
}

/*
==============
XAnimLookAtBoneHelper<0>::XAnimLookAtBoneHelper<0>
==============
*/
void XAnimLookAtBoneHelper<0>::XAnimLookAtBoneHelper<0>(XAnimLookAtBoneHelper<0> *this)
{
  ;
}

/*
==============
XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>
==============
*/
void XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>(XAnimLookAtBoneHelper<1> *this)
{
  ;
}

/*
==============
XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>
==============
*/
void XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>(XAnimLookAtBoneHelper<0> *this)
{
  ;
}

/*
==============
XAnimLookAtParams<1>::IsValid
==============
*/
bool XAnimLookAtParams<1>::IsValid(XAnimLookAtParams<1> *this)
{
  return this->pNode && this->animCalcInfo && this->obj && this->destBuffer;
}

/*
==============
XAnimLookAtParams<0>::IsValid
==============
*/
bool XAnimLookAtParams<0>::IsValid(XAnimLookAtParams<0> *this)
{
  return this->pNode && this->animCalcInfo && this->obj && this->destBuffer;
}

/*
==============
XAnimLookAt_Debug_r
==============
*/
void XAnimLookAt_Debug_r(void *nodeData)
{
  const XAnimLookAtLimits *LookAtLimits; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  __int128 m_maxUpPitch_low; 
  float v8; 
  float v9; 
  const XAnimLookAtLimits *v10; 
  __int64 v11; 
  unsigned __int128 v13; 
  unsigned __int128 v15; 
  unsigned __int128 v16; 
  __int64 v17; 
  unsigned __int128 v20; 
  __int128 v21; 
  float v23; 
  float v26; 
  float v29; 
  double v31; 
  vec3_t v32; 
  vec3_t v33; 
  vec3_t v34; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  vec3_t end; 
  vec3_t start; 
  vec3_t center; 
  vec3_t v40; 
  tmat33_t<vec3_t> axis; 
  vec4_t color; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1251, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  LookAtLimits = BG_GetLookAtLimits(*((unsigned __int8 *)nodeData + 32));
  v3 = *((float *)nodeData + 65);
  v4 = *((float *)nodeData + 63);
  v5 = *((float *)nodeData + 64);
  v6 = v5 + *((float *)nodeData + 6);
  center.v[0] = v4 + *(float *)nodeData;
  center.v[1] = v5 + *((float *)nodeData + 1);
  center.v[2] = v3 + *((float *)nodeData + 2);
  v32.v[0] = v4 + *((float *)nodeData + 5);
  v32.v[2] = v3 + *((float *)nodeData + 7);
  v32.v[1] = v6;
  m_maxUpPitch_low = LODWORD(LookAtLimits->m_maxUpPitch);
  v8 = (float)(*(float *)&m_maxUpPitch_low + LookAtLimits->m_maxDownPitch) * 0.1;
  v9 = (float)(LookAtLimits->m_maxLeftYaw + LookAtLimits->m_maxRightYaw) * 0.1;
  v33.v[2] = 0.0;
  v10 = LookAtLimits;
  v11 = 11i64;
  _XMM8 = m_maxUpPitch_low ^ (unsigned int)_xmm;
  do
  {
    v13 = LODWORD(v10->m_maxRightYaw) ^ (unsigned __int128)(unsigned int)_xmm;
    __asm { vunpcklps xmm0, xmm8, xmm6 }
    angles.v[2] = 0.0;
    *(double *)angles.v = *(double *)&_XMM0;
    AnglesToAxis(&angles, &axis);
    MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)((char *)nodeData + 264), &out);
    start.v[0] = (float)(25.0 * out.m[0].v[0]) + v32.v[0];
    start.v[1] = (float)(25.0 * out.m[0].v[1]) + v32.v[1];
    start.v[2] = (float)(25.0 * out.m[0].v[2]) + v32.v[2];
    *(float *)&v31 = *(float *)&_XMM8;
    v16 = v13;
    *(float *)&v16 = *(float *)&v13 + v9;
    v15 = v16;
    v17 = 10i64;
    do
    {
      _XMM0 = *(unsigned __int64 *)&v31;
      __asm { vinsertps xmm0, xmm0, xmm6, 10h }
      v33.v[2] = 0.0;
      v31 = *(double *)&_XMM0;
      *(double *)v33.v = *(double *)&_XMM0;
      AnglesToAxis(&v33, &axis);
      MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)((char *)nodeData + 264), &out);
      end.v[0] = (float)(25.0 * out.m[0].v[0]) + v32.v[0];
      end.v[1] = (float)(25.0 * out.m[0].v[1]) + v32.v[1];
      end.v[2] = (float)(25.0 * out.m[0].v[2]) + v32.v[2];
      color = (vec4_t)_xmm;
      CG_DebugLine(&start, &end, &color, 1, 0);
      start = end;
      v20 = v15;
      *(float *)&v20 = *(float *)&v15 + v9;
      v15 = v20;
      --v17;
    }
    while ( v17 );
    v21 = _XMM8;
    *(float *)&v21 = *(float *)&_XMM8 + v8;
    _XMM8 = v21;
    --v11;
  }
  while ( v11 );
  CG_DebugSphere(&center, 1.0, &colorMagenta, 0, 0);
  CG_DebugSphere(&center, 1.5, &colorBlack, 0, 0);
  CG_DebugSphere(&center, 2.5, &colorWhite, 0, 0);
  _XMM1 = *((unsigned int *)nodeData + 28);
  v23 = *((float *)nodeData + 29);
  __asm { vunpcklps xmm0, xmm1, xmm0 }
  angles.v[2] = 0.0;
  v33.v[2] = 0.0;
  *(double *)v33.v = *(double *)&_XMM0;
  AnglesToAxis(&v33, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)((char *)nodeData + 264), &out);
  v40.v[0] = (float)(v23 * out.m[0].v[0]) + v32.v[0];
  v40.v[1] = (float)(v23 * out.m[0].v[1]) + v32.v[1];
  v40.v[2] = (float)(v23 * out.m[0].v[2]) + v32.v[2];
  CG_DebugSphere(&v40, 1.5, &colorGreen, 0, 0);
  CG_DebugSphere(&v40, 2.5, &colorBlue, 0, 0);
  if ( *((_BYTE *)nodeData + 32) )
  {
    color = (vec4_t)_xmm;
    CG_DebugLine(&v32, &v40, &color, 0, 0);
  }
  _XMM1 = *((unsigned int *)nodeData + 30);
  v26 = *((float *)nodeData + 42);
  __asm { vunpcklps xmm0, xmm1, xmm0 }
  angles.v[2] = 0.0;
  v33.v[2] = 0.0;
  *(double *)v33.v = *(double *)&_XMM0;
  AnglesToAxis(&v33, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)((char *)nodeData + 264), &out);
  v34.v[0] = (float)(v26 * out.m[0].v[0]) + v32.v[0];
  v34.v[1] = (float)(v26 * out.m[0].v[1]) + v32.v[1];
  v34.v[2] = (float)(v26 * out.m[0].v[2]) + v32.v[2];
  CG_DebugSphere(&v34, 1.5, &colorGreen, 0, 0);
  CG_DebugSphere(&v34, 2.5, &colorRed, 0, 0);
  _XMM1 = *((unsigned int *)nodeData + 36);
  v29 = *((float *)nodeData + 42);
  __asm { vunpcklps xmm0, xmm1, xmm0 }
  angles.v[2] = 0.0;
  v33.v[2] = 0.0;
  *(double *)v33.v = *(double *)&_XMM0;
  AnglesToAxis(&v33, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)((char *)nodeData + 264), &out);
  v34.v[0] = (float)(v29 * out.m[0].v[0]) + v32.v[0];
  v34.v[1] = (float)(v29 * out.m[0].v[1]) + v32.v[1];
  v34.v[2] = (float)(v29 * out.m[0].v[2]) + v32.v[2];
  CG_DebugSphere(&v34, 1.5, &colorYellow, 0, 0);
  CG_DebugSphere(&v34, 2.5, &colorRed, 0, 0);
}

/*
==============
XAnimLookAt_Debug_text
==============
*/
void XAnimLookAt_Debug_text(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v7; 
  float v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  const char *v12; 
  const dvar_t *v13; 
  __int64 v14; 
  int v15; 
  _WORD *v16; 
  __int64 v17; 
  float v18; 
  char *fmt; 
  char *fmta; 
  vec3_t v; 

  v7 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1357, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  if ( *((_BYTE *)nodeData + 237) )
  {
    v9 = *((float *)nodeData + 1);
    v10 = v7;
    v.v[0] = *(float *)nodeData;
    v.v[2] = *((float *)nodeData + 2);
    v.v[1] = v9;
    if ( depth > 0 )
    {
      v11 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v10, inoutPos, "  ");
        --v11;
      }
      while ( v11 );
    }
    v12 = vtos(&v);
    Com_sprintfPos_truncate(buffer, v10, inoutPos, "  [lookAtPos: %s]\n", v12);
    v13 = DCONST_DVARBOOL_xanim_lookatExtendedAnimInfo;
    if ( !DCONST_DVARBOOL_xanim_lookatExtendedAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatExtendedAnimInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      if ( depth > 0 )
      {
        v14 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v10, inoutPos, "  ");
          --v14;
        }
        while ( v14 );
      }
      LODWORD(fmt) = *((unsigned __int8 *)nodeData + 32);
      Com_sprintfPos_truncate(buffer, v10, inoutPos, "  [state: %d]\n", fmt);
      v15 = 0;
      v16 = (char *)nodeData + 176;
      do
      {
        if ( depth > 0 )
        {
          v17 = (unsigned int)depth;
          do
          {
            Com_sprintfPos_truncate(buffer, v10, inoutPos, " ");
            --v17;
          }
          while ( v17 );
        }
        if ( *v16 )
          LODWORD(v18) = ((*v16 & 0x8000) << 16) | (((((*v16 & 0x3FFF) << 14) - (~((unsigned __int16)*v16 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        else
          v18 = 0.0;
        LODWORD(fmta) = v15;
        Com_sprintfPos_truncate(buffer, v10, inoutPos, "  [percent %d - %f]\n", fmta, v18);
        ++v15;
        ++v16;
      }
      while ( v15 < 4 );
    }
  }
}

/*
==============
XAnimLookAt_Register
==============
*/
void XAnimLookAt_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimLookAt>::ms_typeInfo);
}

/*
==============
XAnimLookAt_UpdateCurrentLookAt
==============
*/
void XAnimLookAt_UpdateCurrentLookAt(XAnimLookAt *pNode, const float dtime, const bool targetReset, bool isServer)
{
  __int64 m_lookIntensity; 
  bool applyDiffError; 

  m_lookIntensity = pNode->m_lookIntensity;
  applyDiffError = !targetReset;
  calcUpdatedAngles(&pNode->m_curHeadData, pNode->m_tgtPitch, pNode->m_tgtYaw, dtime, &TABLE_HEAD_PD_PARAMS[m_lookIntensity], !targetReset, isServer);
  calcUpdatedAngles(&pNode->m_curTorsoData, pNode->m_curHeadData.pitch, pNode->m_curHeadData.yaw, dtime, &TABLE_TORSO_PD_PARAMS[m_lookIntensity], applyDiffError, isServer);
}

/*
==============
XAnimLookAt_UpdateTargetLookAt
==============
*/
bool XAnimLookAt_UpdateTargetLookAt(const DObj *obj, XAnimLookAt *pNode)
{
  const XAnimLookAtLimits *LookAtLimits; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  const XAnimLookAtLimits *v11; 
  bool v12; 
  float v18; 
  float m_prevTgtYaw; 
  float m_fullTurnThreshold; 
  float v22; 
  double v23; 
  float m_maxLeftYaw; 
  double v25; 
  float v27; 
  float m_tgtYaw; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 
  vec3_t angles; 
  tmat43_t<vec3_t> result; 

  AnglesAndOriginToMatrix43(&pNode->m_angles, &pNode->m_origin, &result);
  MatrixTranspose((const tmat33_t<vec3_t> *)&result, &out);
  LookAtLimits = BG_GetLookAtLimits(pNode->m_state);
  v4 = (float)(result.m[3].v[0] + pNode->m_lookAtX) - (float)(result.m[3].v[0] + pNode->m_lookAtHeadX);
  v9 = LODWORD(result.m[3].v[1]);
  *(float *)&v9 = (float)(result.m[3].v[1] + pNode->m_lookAtY) - (float)(result.m[3].v[1] + pNode->m_lookAtHeadY);
  v5 = (float)(result.m[3].v[2] + pNode->m_lookAtZ) - (float)(result.m[3].v[2] + pNode->m_lookAtHeadZ);
  v6 = (float)((float)(*(float *)&v9 * out.m[1].v[0]) + (float)(v4 * out.m[0].v[0])) + (float)(v5 * out.m[2].v[0]);
  v7 = (float)((float)(*(float *)&v9 * out.m[1].v[1]) + (float)(v4 * out.m[0].v[1])) + (float)(v5 * out.m[2].v[1]);
  *(float *)&v9 = (float)((float)(*(float *)&v9 * out.m[1].v[2]) + (float)(v4 * out.m[0].v[2])) + (float)(v5 * out.m[2].v[2]);
  v8 = *(float *)&v9;
  v10 = (float)(v7 * v7) + (float)(v6 * v6);
  v11 = LookAtLimits;
  if ( v10 < LookAtLimits->m_deadRadiusSq )
    return 0;
  *(float *)&v9 = fsqrt((float)(*(float *)&v9 * *(float *)&v9) + v10);
  _XMM10 = v9;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
  }
  vec.v[0] = v6 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = v8 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = v7 * (float)(1.0 / *(float *)&_XMM0);
  vectoangles(&vec, &angles);
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm1, 1 }
  v18 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  m_prevTgtYaw = pNode->m_prevTgtYaw;
  m_fullTurnThreshold = v11->m_fullTurnThreshold;
  v22 = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM3) * 360.0;
  if ( (v18 <= COERCE_FLOAT(LODWORD(m_fullTurnThreshold) ^ _xmm) || v18 >= m_fullTurnThreshold) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - m_prevTgtYaw) & _xmm) <= 20.0 )
  {
    if ( m_prevTgtYaw >= 0.0 )
      m_maxLeftYaw = v11->m_maxLeftYaw;
    else
      LODWORD(m_maxLeftYaw) = LODWORD(v11->m_maxRightYaw) ^ _xmm;
  }
  else
  {
    v23 = I_fclamp(v18, COERCE_FLOAT(LODWORD(v11->m_maxRightYaw) ^ _xmm), v11->m_maxLeftYaw);
    m_maxLeftYaw = *(float *)&v23;
  }
  v25 = I_fclamp(v22, COERCE_FLOAT(LODWORD(v11->m_maxUpPitch) ^ _xmm), v11->m_maxDownPitch);
  __asm { vmaxss  xmm4, xmm10, cs:__real@41200000 }
  v27 = *(float *)&v25;
  m_tgtYaw = pNode->m_tgtYaw;
  pNode->m_prevTgtYaw = m_tgtYaw;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - m_prevTgtYaw) & _xmm) > 20.0 )
    pNode->m_prevTgtYaw = m_maxLeftYaw;
  v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT(m_maxLeftYaw - m_tgtYaw) & _xmm) > 0.1 || COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - pNode->m_tgtPitch) & _xmm) > 0.1;
  pNode->m_tgtYaw = m_maxLeftYaw;
  pNode->m_tgtPitch = v27;
  pNode->m_tgtDist = *(float *)&_XMM4;
  return v12;
}

/*
==============
calcUpdatedAngles
==============
*/
void calcUpdatedAngles(XAnimLookAtTrackingData *trackData, float targetPitch, float targetYaw, const float dtime, const XAnimLookAtPDParams *pd, const bool applyDiffError)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float kp; 
  float kd; 
  float v14; 
  double v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 

  v7 = targetYaw - trackData->yaw;
  v8 = v7 - trackData->dYaw;
  v9 = s_VelMax_0;
  trackData->dYaw = v7;
  v10 = targetPitch - trackData->pitch;
  v11 = v10 - trackData->dPitch;
  trackData->dPitch = v10;
  kp = pd->kp;
  kd = pd->kd;
  v14 = _mm_cvtepi32_ps((__m128i)applyDiffError).m128_f32[0];
  v15 = I_fclamp((float)((float)((float)((float)((float)(v14 * v8) * (float)(1.0 / dtime)) * kd) + (float)(v7 * pd->kp)) * dtime) + trackData->yawVel, COERCE_FLOAT(LODWORD(v9) ^ _xmm), v9);
  v16 = (float)(*(float *)&v15 * dtime) + trackData->yaw;
  v17 = *(float *)&v15;
  v18 = I_fclamp((float)((float)((float)((float)((float)(v14 * v11) * (float)(1.0 / dtime)) * kd) + (float)(v10 * kp)) * dtime) + trackData->pitchVel, COERCE_FLOAT(LODWORD(s_VelMax_0) ^ _xmm), s_VelMax_0);
  v19 = (float)(*(float *)&v18 * dtime) + trackData->pitch;
  trackData->yaw = v16;
  trackData->yawVel = v17;
  trackData->pitch = v19;
  trackData->pitchVel = *(float *)&v18;
}

/*
==============
XAnimLookAtBoneHelper<1>::getWSPos
==============
*/
void XAnimLookAtBoneHelper<1>::getWSPos(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params, vec3_t *out)
{
  MatrixTransformVector43(&this->m_lsPos, &params->entityTransform, out);
}

/*
==============
XAnimLookAtBoneHelper<0>::getWSPos
==============
*/
void XAnimLookAtBoneHelper<0>::getWSPos(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params, vec3_t *out)
{
  XAnimLookAt *pNode; 

  pNode = params->pNode;
  out->v[0] = this->m_lsPos.v[0] + params->pNode->m_entityViewOffset.v[0];
  out->v[1] = this->m_lsPos.v[1] + pNode->m_entityViewOffset.v[1];
  out->v[2] = this->m_lsPos.v[2] + pNode->m_entityViewOffset.v[2];
}

/*
==============
XAnimLookAtBoneHelper<1>::refresh
==============
*/
char XAnimLookAtBoneHelper<1>::refresh(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params)
{
  vec4_t v; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  tmat33_t<vec3_t> axis; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  vec4_t quat; 
  tmat33_t<vec3_t> dst; 

  _RBX = this;
  if ( !XAnimLookAtParams<1>::IsValid((XAnimLookAtParams<1> *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 209, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, _RBX->m_boneIndex, &outModelQuat, &outModelTranslation);
  _XMM1 = outModelTranslation.v;
  v = (vec4_t)outModelQuat.v;
  _RBX->m_lsPos.v[0] = outModelTranslation.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+28h], xmm1, 1
    vextractps dword ptr [rbx+2Ch], xmm1, 2
  }
  quat = v;
  QuatToAxis(&quat, &axis);
  MatrixCopy33(&axis, &dst);
  MatrixMultiply(&dst, (const tmat33_t<vec3_t> *)&params->entityTransform, &axis);
  if ( _RBX->m_requiresAdjustment )
  {
    v6 = axis.m[0].v[1];
    v7 = axis.m[2].v[1];
    _RBX->m_wsOrientation.m[2].v[0] = axis.m[0].v[0];
    _RBX->m_wsOrientation.m[2].v[2] = axis.m[0].v[2];
    v8 = _xmm ^ *(_OWORD *)axis.row1.v;
    _RBX->m_wsOrientation.m[2].v[1] = v6;
    v9 = axis.m[2].v[2];
    *(_OWORD *)_RBX->m_wsOrientation.m[0].v = v8;
    _RBX->m_wsOrientation.m[1].v[2] = COERCE_FLOAT(LODWORD(v9) ^ _xmm);
    _RBX->m_wsOrientation.m[1].v[1] = COERCE_FLOAT(LODWORD(v7) ^ _xmm);
  }
  else
  {
    MatrixCopy33(&axis, &_RBX->m_wsOrientation);
  }
  return 1;
}

/*
==============
XAnimLookAtBoneHelper<0>::refresh
==============
*/
char XAnimLookAtBoneHelper<0>::refresh(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params)
{
  vec4_t v; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  tmat33_t<vec3_t> axis; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  vec4_t quat; 

  _RBX = this;
  if ( !XAnimLookAtParams<0>::IsValid((XAnimLookAtParams<0> *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 209, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, _RBX->m_boneIndex, &outModelQuat, &outModelTranslation);
  _XMM1 = outModelTranslation.v;
  v = (vec4_t)outModelQuat.v;
  _RBX->m_lsPos.v[0] = outModelTranslation.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+28h], xmm1, 1
    vextractps dword ptr [rbx+2Ch], xmm1, 2
  }
  quat = v;
  QuatToAxis(&quat, &axis);
  if ( _RBX->m_requiresAdjustment )
  {
    v6 = axis.m[0].v[1];
    v7 = axis.m[2].v[1];
    _RBX->m_wsOrientation.m[2].v[0] = axis.m[0].v[0];
    _RBX->m_wsOrientation.m[2].v[2] = axis.m[0].v[2];
    v8 = _xmm ^ *(_OWORD *)axis.row1.v;
    _RBX->m_wsOrientation.m[2].v[1] = v6;
    v9 = axis.m[2].v[2];
    *(_OWORD *)_RBX->m_wsOrientation.m[0].v = v8;
    _RBX->m_wsOrientation.m[1].v[2] = COERCE_FLOAT(LODWORD(v9) ^ _xmm);
    _RBX->m_wsOrientation.m[1].v[1] = COERCE_FLOAT(LODWORD(v7) ^ _xmm);
  }
  else
  {
    MatrixCopy33(&axis, &_RBX->m_wsOrientation);
  }
  return 1;
}

/*
==============
XAnimLookAtBoneHelper<1>::setBoneIndex
==============
*/
bool XAnimLookAtBoneHelper<1>::setBoneIndex(XAnimLookAtBoneHelper<1> *this, unsigned __int16 index, const XAnimLookAtParams<1> *params)
{
  XAnimLookAt *pNode; 

  this->m_boneIndex = index;
  pNode = params->pNode;
  if ( index == params->pNode->m_headBoneIndex || index == pNode->m_neckBoneIndex || index == pNode->m_spineBoneIndex || index == pNode->m_spineLowerBoneIndex || index == pNode->m_eyeBoneLeftIndex || index == pNode->m_eyeBoneRightIndex || index == pNode->m_mainRootBoneIndex )
  {
    this->m_requiresAdjustment = 1;
    return XAnimLookAtBoneHelper<1>::refresh(this, params);
  }
  else
  {
    this->m_requiresAdjustment = 0;
    return XAnimLookAtBoneHelper<1>::refresh(this, params);
  }
}

/*
==============
XAnimLookAtBoneHelper<0>::setBoneIndex
==============
*/
bool XAnimLookAtBoneHelper<0>::setBoneIndex(XAnimLookAtBoneHelper<0> *this, unsigned __int16 index, const XAnimLookAtParams<0> *params)
{
  XAnimLookAt *pNode; 

  this->m_boneIndex = index;
  pNode = params->pNode;
  if ( index == params->pNode->m_headBoneIndex || index == pNode->m_neckBoneIndex || index == pNode->m_spineBoneIndex || index == pNode->m_spineLowerBoneIndex || index == pNode->m_eyeBoneLeftIndex || index == pNode->m_eyeBoneRightIndex || index == pNode->m_mainRootBoneIndex )
  {
    this->m_requiresAdjustment = 1;
    return XAnimLookAtBoneHelper<0>::refresh(this, params);
  }
  else
  {
    this->m_requiresAdjustment = 0;
    return XAnimLookAtBoneHelper<0>::refresh(this, params);
  }
}

/*
==============
XAnimLookAtBoneHelper<1>::storeTransforms
==============
*/
void XAnimLookAtBoneHelper<1>::storeTransforms(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params)
{
  __int128 v5; 
  const float4 *v8; 
  const float4 *v9; 
  __int128 v10; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> dst; 
  vec4_t v13; 

  MatrixMultiply(&this->m_wsOrientation, &params->entityAxisInv, &out);
  if ( this->m_requiresAdjustment )
  {
    dst.m[0] = out.m[2];
    *(_OWORD *)dst.row1.v = _xmm ^ *(_OWORD *)out.m[0].v;
    LODWORD(dst.m[2].v[2]) = LODWORD(out.m[1].v[2]) ^ _xmm;
    LODWORD(dst.m[2].v[1]) = LODWORD(out.m[1].v[1]) ^ _xmm;
  }
  else
  {
    MatrixCopy33(&out, &dst);
  }
  AxisToQuat(&dst, &v13);
  HIDWORD(v10) = 0;
  v5 = v10;
  *(float *)&v5 = this->m_lsPos.v[0];
  _XMM1 = v5;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
    vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
  }
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, this->m_boneIndex, v8, v9, params->weightScale);
}

/*
==============
XAnimLookAtBoneHelper<0>::storeTransforms
==============
*/
void XAnimLookAtBoneHelper<0>::storeTransforms(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params)
{
  __int128 v5; 
  const float4 *v8; 
  const float4 *v9; 
  __int128 v10; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> mat; 
  vec4_t out; 

  MatrixCopy33(&this->m_wsOrientation, &dst);
  if ( this->m_requiresAdjustment )
  {
    mat.m[0] = dst.m[2];
    *(_OWORD *)mat.row1.v = _xmm ^ *(_OWORD *)dst.m[0].v;
    LODWORD(mat.m[2].v[2]) = LODWORD(dst.m[1].v[2]) ^ _xmm;
    LODWORD(mat.m[2].v[1]) = LODWORD(dst.m[1].v[1]) ^ _xmm;
  }
  else
  {
    MatrixCopy33(&dst, &mat);
  }
  AxisToQuat(&mat, &out);
  HIDWORD(v10) = 0;
  v5 = v10;
  *(float *)&v5 = this->m_lsPos.v[0];
  _XMM1 = v5;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
    vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
  }
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, this->m_boneIndex, v8, v9, params->weightScale);
}

