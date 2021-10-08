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
  __asm { vmovss  xmm0, cs:TABLE_CATCH_SPEEDS }
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
  __asm { vmovss  dword ptr [rcx+0ACh], xmm0 }
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
  const dvar_t *v9; 
  unsigned __int8 v10; 
  const XAnimLookAtLimits *LookAtLimits; 
  const dvar_t *v12; 
  unsigned __int16 *v22; 
  __int64 v24; 
  int v31; 
  int v38; 
  int v45; 
  int v52; 
  int v59; 
  int v66; 
  bool v67; 
  bool v70; 
  bool v71; 
  __int64 v72; 
  unsigned __int8 v79; 
  refdef_t *v81; 
  const dvar_t *v82; 
  __int64 applyDiffError; 
  __int64 isServer; 
  unsigned int v86; 
  int v87; 
  unsigned int v88; 
  int v89; 
  unsigned int v90; 
  int v91; 
  unsigned int v92; 
  int v93; 
  unsigned int v94; 
  int v95; 
  unsigned int v96; 
  int v97; 

  _RSI = (unsigned __int8 *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 583, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 584, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 585, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v9 = DCONST_DVARBOOL_xanim_disableLookAtNodes;
  if ( !DCONST_DVARBOOL_xanim_disableLookAtNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableLookAtNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    v10 = _RSI[32];
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    if ( v10 >= 8u )
    {
      LODWORD(isServer) = 8;
      LODWORD(applyDiffError) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 593, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->m_state ) < (unsigned)( 8 )", "pNode->m_state doesn't index BG_LOOKAT_MAX_STATES\n\t%i not in [0, %i)", applyDiffError, isServer) )
        __debugbreak();
    }
    LookAtLimits = BG_GetLookAtLimits(_RSI[32]);
    if ( !_RSI[237] )
    {
      _RSI[237] = 1;
      *(_QWORD *)(_RSI + 68) = 0i64;
      *((_DWORD *)_RSI + 19) = 0;
    }
    v12 = DCONST_DVARFLT_xanim_lookatSpeedMultiplier;
    if ( !DCONST_DVARFLT_xanim_lookatSpeedMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatSpeedMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+0A8h]
      vmovss  xmm6, [rsp+78h+dtime]
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rsi+74h]
      vmulss  xmm4, xmm0, dword ptr [rsi+0ACh]
      vsubss  xmm2, xmm1, xmm3
      vmulss  xmm0, xmm2, xmm4
      vaddss  xmm3, xmm0, xmm3
      vmovss  dword ptr [rsi+0A8h], xmm3
      vxorps  xmm3, xmm3, xmm3
    }
    v22 = (unsigned __int16 *)(_RSI + 184);
    _R9 = LookAtLimits->m_boneRolls;
    v24 = 4i64;
    do
    {
      __asm { vmovss  xmm0, dword ptr [r9-10h] }
      if ( *(v22 - 4) )
      {
        v86 = ((*(v22 - 4) & 0x8000) << 16) | (((((*(v22 - 4) & 0x3FFF) << 14) - (~(*(v22 - 4) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm2, [rsp+78h+arg_0] }
      }
      else
      {
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm2
        vmovss  [rsp+78h+arg_0], xmm2
      }
      v31 = (int)((2 * v87) ^ 0x80003FFF) >> 14;
      if ( v31 > 0x3FFF )
        v31 = 0x3FFF;
      if ( v31 < -16384 )
        LOWORD(v31) = -16384;
      *(v22 - 4) = HIWORD(v87) ^ (HIWORD(v87) ^ v31) & 0x3FFF;
      __asm { vmovss  xmm0, dword ptr [r9] }
      if ( *v22 )
      {
        v88 = ((*v22 & 0x8000) << 16) | (((((*v22 & 0x3FFF) << 14) - (~(*v22 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm2, [rsp+78h+arg_0] }
      }
      else
      {
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm2
        vmovss  [rsp+78h+arg_0], xmm2
      }
      v38 = (int)((2 * v89) ^ 0x80003FFF) >> 14;
      if ( v38 > 0x3FFF )
        v38 = 0x3FFF;
      if ( v38 < -16384 )
        LOWORD(v38) = -16384;
      *v22 = HIWORD(v89) ^ (HIWORD(v89) ^ v38) & 0x3FFF;
      __asm { vmovss  xmm0, dword ptr [r9+30h] }
      if ( v22[4] )
      {
        v90 = ((v22[4] & 0x8000) << 16) | (((((v22[4] & 0x3FFF) << 14) - (~(v22[4] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm2, [rsp+78h+arg_0] }
      }
      else
      {
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm2
        vmovss  [rsp+78h+arg_0], xmm2
      }
      v45 = (int)((2 * v91) ^ 0x80003FFF) >> 14;
      if ( v45 > 0x3FFF )
        v45 = 0x3FFF;
      if ( v45 < -16384 )
        LOWORD(v45) = -16384;
      v22[4] = HIWORD(v91) ^ (HIWORD(v91) ^ v45) & 0x3FFF;
      __asm { vmovss  xmm0, dword ptr [r9+40h] }
      if ( v22[8] )
      {
        v92 = ((v22[8] & 0x8000) << 16) | (((((v22[8] & 0x3FFF) << 14) - (~(v22[8] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm2, [rsp+78h+arg_0] }
      }
      else
      {
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm2
        vmovss  [rsp+78h+arg_0], xmm2
      }
      v52 = (int)((2 * v93) ^ 0x80003FFF) >> 14;
      if ( v52 > 0x3FFF )
        v52 = 0x3FFF;
      if ( v52 < -16384 )
        LOWORD(v52) = -16384;
      v22[8] = HIWORD(v93) ^ (HIWORD(v93) ^ v52) & 0x3FFF;
      __asm { vmovss  xmm0, dword ptr [r9+10h] }
      if ( v22[12] )
      {
        v94 = ((v22[12] & 0x8000) << 16) | (((((v22[12] & 0x3FFF) << 14) - (~(v22[12] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm2, [rsp+78h+arg_0] }
      }
      else
      {
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm2
        vmovss  [rsp+78h+arg_0], xmm2
      }
      v59 = (int)((2 * v95) ^ 0x80003FFF) >> 14;
      if ( v59 > 0x3FFF )
        v59 = 0x3FFF;
      if ( v59 < -16384 )
        LOWORD(v59) = -16384;
      v22[12] = HIWORD(v95) ^ (HIWORD(v95) ^ v59) & 0x3FFF;
      __asm { vmovss  xmm0, dword ptr [r9+20h] }
      if ( v22[16] )
      {
        v96 = ((v22[16] & 0x8000) << 16) | (((((v22[16] & 0x3FFF) << 14) - (~(v22[16] << 14) & 0x10000000)) ^ 0x80000001) >> 1);
        __asm { vmovss  xmm2, [rsp+78h+arg_0] }
      }
      else
      {
        __asm { vmovaps xmm2, xmm3 }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmulss  xmm1, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm2
        vmovss  [rsp+78h+arg_0], xmm2
      }
      v66 = (int)((2 * v97) ^ 0x80003FFF) >> 14;
      if ( v66 > 0x3FFF )
        v66 = 0x3FFF;
      if ( v66 < -16384 )
        LOWORD(v66) = -16384;
      ++_R9;
      v22[16] = HIWORD(v97) ^ (HIWORD(v97) ^ v66) & 0x3FFF;
      ++v22;
      --v24;
    }
    while ( v24 );
    v67 = !_RSI[236] && _RSI[32];
    _RSI[34] |= v67;
    if ( v67 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+10h]
        vmovss  xmm1, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rsi+84h], xmm0
        vmovss  dword ptr [rsi+9Ch], xmm0
        vmovss  dword ptr [rsi+78h], xmm1
        vmovss  dword ptr [rsi+90h], xmm1
      }
    }
    __asm { vcomiss xmm6, xmm3 }
    _RSI[236] = _RSI[32];
    if ( v67 )
    {
      v70 = !XAnimLookAt_UpdateTargetLookAt(obj, (XAnimLookAt *)_RSI) && !_RSI[34];
      _RSI[34] = 0;
      v71 = obj->tree && !obj->tree->owner[0];
      v72 = _RSI[33];
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+6Ch]; targetYaw
        vmovss  xmm1, dword ptr [rsi+70h]; targetPitch
        vmovaps xmm3, xmm6; dtime
      }
      calcUpdatedAngles((XAnimLookAtTrackingData *)_RSI + 5, *(float *)&_XMM1, *(float *)&_XMM2, *(const float *)&_XMM3, &TABLE_HEAD_PD_PARAMS[v72], v70, v71);
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+84h]; targetYaw
        vmovss  xmm1, dword ptr [rsi+78h]; targetPitch
        vmovaps xmm3, xmm6; dtime
      }
      calcUpdatedAngles((XAnimLookAtTrackingData *)_RSI + 6, *(float *)&_XMM1, *(float *)&_XMM2, *(const float *)&_XMM3, &TABLE_TORSO_PD_PARAMS[v72], v70, v71);
    }
    v79 = _RSI[33];
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
    if ( v79 >= 2u )
    {
      LODWORD(isServer) = 2;
      LODWORD(applyDiffError) = v79;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 663, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->m_lookIntensity ) < (unsigned)( 2 )", "pNode->m_lookIntensity doesn't index LOOKAT_NUM_INTENSITIES\n\t%i not in [0, %i)", applyDiffError, isServer) )
        __debugbreak();
    }
    *((float *)_RSI + 43) = TABLE_CATCH_SPEEDS[_RSI[33]];
    if ( obj->tree->owner[0] )
    {
      v81 = g_activeRefDef;
      if ( g_activeRefDef )
      {
        *((_DWORD *)_RSI + 17) = LODWORD(g_activeRefDef->viewOffset.v[0]);
        *((_DWORD *)_RSI + 18) = LODWORD(v81->viewOffset.v[1]);
        *((_DWORD *)_RSI + 19) = LODWORD(v81->viewOffset.v[2]);
      }
    }
    else
    {
      *(_QWORD *)(_RSI + 68) = 0i64;
      *((_DWORD *)_RSI + 19) = 0;
    }
    v82 = DCONST_DVARBOOL_xanim_debugLookAtPos;
    if ( !DCONST_DVARBOOL_xanim_debugLookAtPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_debugLookAtPos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    if ( v82->current.enabled && obj->tree->owner[0] == 1 )
      XAnimLookAt_Debug_r(_RSI);
  }
}

/*
==============
XAnimLookAt_Calc
==============
*/
void XAnimLookAt_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v13; 
  float v15; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, [rsp+58h+weightScale]
    vcomiss xmm6, cs:__real@3a83126f
  }
  v13 = DCONST_DVARBOOL_xanim_disableLookAtNodes;
  if ( !DCONST_DVARBOOL_xanim_disableLookAtNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableLookAtNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled )
  {
    __asm { vmovss  [rsp+58h+var_38], xmm6 }
    if ( obj->tree->owner[0] )
      XAnimLookAt_CalcInternal<0>(nodeData, animCalcInfo, obj, animInfo, v15, bNormQuat, destBuffer);
    else
      XAnimLookAt_CalcInternal<1>(nodeData, animCalcInfo, obj, animInfo, v15, bNormQuat, destBuffer);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  bool v14; 
  unsigned __int16 m_originBoneIndex; 
  __int16 m_mainRootBoneIndex; 
  unsigned __int16 v17; 
  __int16 v18; 
  unsigned __int16 m_spineLowerBoneIndex; 
  bool v20; 
  unsigned __int16 m_spineBoneIndex; 
  bool v22; 
  unsigned __int16 m_neckBoneIndex; 
  bool v24; 
  unsigned __int16 m_headBoneIndex; 
  bool v26; 
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
  __asm
  {
    vmovss  xmm0, [rbp+180h+weightScale]
    vmovss  [rsp+280h+params.weightScale], xmm0
  }
  params.bNormQuat = bNormQuat;
  params.destBuffer = destBuffer;
  memset_0(&params.entityTransform, 0, 0x54ui64);
  `eh vector constructor iterator'(params.m_boneData, 0x34ui64, 4ui64, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<1>::XAnimLookAtBoneHelper<1>, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<1>::~XAnimLookAtBoneHelper<1>);
  AnglesAndOriginToMatrix43((const vec3_t *)((char *)nodeData + 92), (const vec3_t *)((char *)nodeData + 80), &params.entityTransform);
  MatrixTranspose((const tmat33_t<vec3_t> *)&params.entityTransform, &params.entityAxisInv);
  v14 = !XAnimLookAt_PreCalc_1_(&params, &savedPartBits);
  m_originBoneIndex = params.pNode->m_originBoneIndex;
  params.m_originBoneData.m_boneIndex = m_originBoneIndex;
  if ( m_originBoneIndex == params.pNode->m_headBoneIndex || m_originBoneIndex == params.pNode->m_neckBoneIndex || m_originBoneIndex == params.pNode->m_spineBoneIndex || m_originBoneIndex == params.pNode->m_spineLowerBoneIndex || m_originBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_originBoneIndex == params.pNode->m_eyeBoneRightIndex || (m_mainRootBoneIndex = params.pNode->m_mainRootBoneIndex, params.m_originBoneData.m_requiresAdjustment = 0, m_originBoneIndex == m_mainRootBoneIndex) )
    params.m_originBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_originBoneData, &params);
  v17 = params.pNode->m_mainRootBoneIndex;
  params.m_mainRootBoneData.m_boneIndex = v17;
  if ( v17 == params.pNode->m_headBoneIndex || v17 == params.pNode->m_neckBoneIndex || v17 == params.pNode->m_spineBoneIndex || v17 == params.pNode->m_spineLowerBoneIndex || v17 == params.pNode->m_eyeBoneLeftIndex || v17 == params.pNode->m_eyeBoneRightIndex || (v18 = params.pNode->m_mainRootBoneIndex, params.m_mainRootBoneData.m_requiresAdjustment = 0, v17 == v18) )
    params.m_mainRootBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_mainRootBoneData, &params);
  m_spineLowerBoneIndex = params.pNode->m_spineLowerBoneIndex;
  params.m_boneData[0].m_boneIndex = m_spineLowerBoneIndex;
  v20 = m_spineLowerBoneIndex == params.pNode->m_headBoneIndex || m_spineLowerBoneIndex == params.pNode->m_neckBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineLowerBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[0].m_requiresAdjustment = v20;
  XAnimLookAtBoneHelper<1>::refresh(params.m_boneData, &params);
  m_spineBoneIndex = params.pNode->m_spineBoneIndex;
  params.m_boneData[1].m_boneIndex = m_spineBoneIndex;
  v22 = m_spineBoneIndex == params.pNode->m_headBoneIndex || m_spineBoneIndex == params.pNode->m_neckBoneIndex || m_spineBoneIndex == params.pNode->m_spineBoneIndex || m_spineBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[1].m_requiresAdjustment = v22;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_boneData[1], &params);
  m_neckBoneIndex = params.pNode->m_neckBoneIndex;
  params.m_boneData[2].m_boneIndex = m_neckBoneIndex;
  v24 = m_neckBoneIndex == params.pNode->m_headBoneIndex || m_neckBoneIndex == params.pNode->m_neckBoneIndex || m_neckBoneIndex == params.pNode->m_spineBoneIndex || m_neckBoneIndex == params.pNode->m_spineLowerBoneIndex || m_neckBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_neckBoneIndex == params.pNode->m_eyeBoneRightIndex || m_neckBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[2].m_requiresAdjustment = v24;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_boneData[2], &params);
  m_headBoneIndex = params.pNode->m_headBoneIndex;
  params.m_boneData[3].m_boneIndex = m_headBoneIndex;
  v26 = m_headBoneIndex == params.pNode->m_headBoneIndex || m_headBoneIndex == params.pNode->m_neckBoneIndex || m_headBoneIndex == params.pNode->m_spineBoneIndex || m_headBoneIndex == params.pNode->m_spineLowerBoneIndex || m_headBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_headBoneIndex == params.pNode->m_eyeBoneRightIndex || m_headBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[3].m_requiresAdjustment = v26;
  XAnimLookAtBoneHelper<1>::refresh(&params.m_boneData[3], &params);
  if ( enabled )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
      vmovups xmmword ptr [rbp+180h+color], xmm0
    }
    XAnimLookAt_DebugDrawChain_1_(&params, &color);
  }
  if ( !v14 )
  {
    XAnimLookAt_TransformBoneChain<1>(&params);
    if ( enabled )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
        vmovups xmmword ptr [rbp+180h+color], xmm0
      }
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
  XAnimLookAtParams<0> params; 
  DObjPartBits savedPartBits; 

  _RDI = (XAnimLookAt *)nodeData;
  v11 = DCONST_DVARBOOL_xanim_lookatDrawChain;
  if ( !DCONST_DVARBOOL_xanim_lookatDrawChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatDrawChain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  params.pNode = _RDI;
  params.animCalcInfo = animCalcInfo;
  params.obj = obj;
  params.animInfo = animInfo;
  __asm
  {
    vmovss  xmm0, [rbp+180h+weightScale]
    vmovss  [rsp+280h+params.weightScale], xmm0
  }
  params.bNormQuat = bNormQuat;
  params.destBuffer = destBuffer;
  memset_0(&params.entityTransform, 0, 0x54ui64);
  `eh vector constructor iterator'(params.m_boneData, 0x34ui64, 4ui64, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<0>::XAnimLookAtBoneHelper<0>, (void (__fastcall *)(void *))XAnimLookAtBoneHelper<0>::~XAnimLookAtBoneHelper<0>);
  v13 = !XAnimLookAt_PreCalc_0_(&params, &savedPartBits);
  m_originBoneIndex = params.pNode->m_originBoneIndex;
  params.m_originBoneData.m_boneIndex = m_originBoneIndex;
  if ( m_originBoneIndex == params.pNode->m_headBoneIndex || m_originBoneIndex == params.pNode->m_neckBoneIndex || m_originBoneIndex == params.pNode->m_spineBoneIndex || m_originBoneIndex == params.pNode->m_spineLowerBoneIndex || m_originBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_originBoneIndex == params.pNode->m_eyeBoneRightIndex || (m_mainRootBoneIndex = params.pNode->m_mainRootBoneIndex, params.m_originBoneData.m_requiresAdjustment = 0, m_originBoneIndex == m_mainRootBoneIndex) )
    params.m_originBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_originBoneData, &params);
  v16 = params.pNode->m_mainRootBoneIndex;
  params.m_mainRootBoneData.m_boneIndex = v16;
  if ( v16 == params.pNode->m_headBoneIndex || v16 == params.pNode->m_neckBoneIndex || v16 == params.pNode->m_spineBoneIndex || v16 == params.pNode->m_spineLowerBoneIndex || v16 == params.pNode->m_eyeBoneLeftIndex || v16 == params.pNode->m_eyeBoneRightIndex || (v17 = params.pNode->m_mainRootBoneIndex, params.m_mainRootBoneData.m_requiresAdjustment = 0, v16 == v17) )
    params.m_mainRootBoneData.m_requiresAdjustment = 1;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_mainRootBoneData, &params);
  m_spineLowerBoneIndex = params.pNode->m_spineLowerBoneIndex;
  params.m_boneData[0].m_boneIndex = m_spineLowerBoneIndex;
  v19 = m_spineLowerBoneIndex == params.pNode->m_headBoneIndex || m_spineLowerBoneIndex == params.pNode->m_neckBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineBoneIndex || m_spineLowerBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineLowerBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineLowerBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[0].m_requiresAdjustment = v19;
  XAnimLookAtBoneHelper<0>::refresh(params.m_boneData, &params);
  m_spineBoneIndex = params.pNode->m_spineBoneIndex;
  params.m_boneData[1].m_boneIndex = m_spineBoneIndex;
  v21 = m_spineBoneIndex == params.pNode->m_headBoneIndex || m_spineBoneIndex == params.pNode->m_neckBoneIndex || m_spineBoneIndex == params.pNode->m_spineBoneIndex || m_spineBoneIndex == params.pNode->m_spineLowerBoneIndex || m_spineBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_spineBoneIndex == params.pNode->m_eyeBoneRightIndex || m_spineBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[1].m_requiresAdjustment = v21;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_boneData[1], &params);
  m_neckBoneIndex = params.pNode->m_neckBoneIndex;
  params.m_boneData[2].m_boneIndex = m_neckBoneIndex;
  v23 = m_neckBoneIndex == params.pNode->m_headBoneIndex || m_neckBoneIndex == params.pNode->m_neckBoneIndex || m_neckBoneIndex == params.pNode->m_spineBoneIndex || m_neckBoneIndex == params.pNode->m_spineLowerBoneIndex || m_neckBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_neckBoneIndex == params.pNode->m_eyeBoneRightIndex || m_neckBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[2].m_requiresAdjustment = v23;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_boneData[2], &params);
  m_headBoneIndex = params.pNode->m_headBoneIndex;
  params.m_boneData[3].m_boneIndex = m_headBoneIndex;
  v25 = m_headBoneIndex == params.pNode->m_headBoneIndex || m_headBoneIndex == params.pNode->m_neckBoneIndex || m_headBoneIndex == params.pNode->m_spineBoneIndex || m_headBoneIndex == params.pNode->m_spineLowerBoneIndex || m_headBoneIndex == params.pNode->m_eyeBoneLeftIndex || m_headBoneIndex == params.pNode->m_eyeBoneRightIndex || m_headBoneIndex == params.pNode->m_mainRootBoneIndex;
  params.m_boneData[3].m_requiresAdjustment = v25;
  XAnimLookAtBoneHelper<0>::refresh(&params.m_boneData[3], &params);
  if ( !v13 )
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
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(params.animCalcInfo->partBits, &savedPartBits);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+180h+params.m_boneData.m_lsPos+9Ch]
      vaddss  xmm1, xmm0, dword ptr [rax+44h]
      vmovss  dword ptr [rdi+0F0h], xmm1
      vmovss  xmm2, dword ptr [rbp+180h+params.m_boneData.m_lsPos+0A0h]
      vaddss  xmm0, xmm2, dword ptr [rax+48h]
      vmovss  dword ptr [rdi+0F4h], xmm0
      vmovss  xmm1, dword ptr [rbp+180h+params.m_boneData.m_lsPos+0A4h]
      vaddss  xmm2, xmm1, dword ptr [rax+4Ch]
      vmovss  dword ptr [rdi+0F8h], xmm2
      vmovss  xmm0, dword ptr [rbp+180h+params.m_originBoneData.m_lsPos]
      vaddss  xmm1, xmm0, dword ptr [rax+44h]
      vmovss  dword ptr [rdi+0FCh], xmm1
      vmovss  xmm2, dword ptr [rbp+180h+params.m_originBoneData.m_lsPos+4]
      vaddss  xmm0, xmm2, dword ptr [rax+48h]
      vmovss  dword ptr [rdi+100h], xmm0
      vmovss  xmm1, dword ptr [rbp+180h+params.m_originBoneData.m_lsPos+8]
      vaddss  xmm2, xmm1, dword ptr [rax+4Ch]
      vmovss  dword ptr [rdi+104h], xmm2
    }
    MatrixCopy33(&params.m_originBoneData.m_wsOrientation, &_RDI->m_debug.originAxis);
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
  __int64 *v18; 
  __int64 v20; 
  __int64 v21; 
  XAnimLookAt *pNode; 
  int v48; 
  int v54; 
  bool v55; 
  bool v66; 
  XAnimLookAt *v78; 
  int v90; 
  int m_boneIndex; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  const float4 *fmt; 
  const float4 *v123; 
  double v124; 
  double v125; 
  double v126; 
  double v127; 
  float v128; 
  unsigned int v129; 
  unsigned int v130; 
  unsigned int v131; 
  unsigned int v132; 
  unsigned int v133; 
  unsigned int v134; 
  float v135; 
  vec3_t angles; 
  __int128 v137; 
  tmat33_t<vec3_t> v138; 
  tmat33_t<vec3_t> dst; 
  vec3_t solution; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  vec4_t v144; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v146; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> src; 
  __int64 v152[5]; 
  char v153; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm13, cs:__real@3b360b61
    vmovss  xmm15, cs:__real@3f000000
    vmovss  xmm12, cs:__real@43b40000
    vmovaps xmm11, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm14, xmm14, xmm14
  }
  _R15 = 0i64;
  v152[0] = (__int64)&params->m_mainRootBoneData;
  v18 = v152;
  _RSI = params;
  v152[1] = (__int64)params->m_boneData;
  v20 = 216i64;
  v152[2] = (__int64)&params->m_boneData[1];
  v21 = 4i64;
  v152[3] = (__int64)&params->m_boneData[2];
  v152[4] = (__int64)&params->m_boneData[3];
  __asm
  {
    vmulss  xmm3, xmm13, dword ptr [rax+84h]
    vmulss  xmm4, xmm13, dword ptr [rax+9Ch]
    vaddss  xmm1, xmm3, xmm15
    vroundss xmm2, xmm14, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm13, dword ptr [rax+78h]
    vmulss  xmm6, xmm1, xmm12
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm13, dword ptr [rax+90h]
    vmulss  xmm5, xmm1, xmm12
    vmulss  xmm7, xmm0, xmm12
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm12
    vmovss  [rbp+200h+var_108], xmm6
    vmovss  [rbp+200h+var_104], xmm6
    vmovss  [rbp+200h+var_118], xmm0
    vmovss  [rbp+200h+var_114], xmm0
    vmovss  [rbp+200h+var_100], xmm7
    vmovss  [rbp+200h+var_FC], xmm7
    vmovss  [rbp+200h+var_110], xmm5
    vmovss  [rbp+200h+var_10C], xmm5
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    _RBX = (XAnimLookAtBoneHelper<1> *)v18[1];
    XAnimLookAtBoneHelper<1>::refresh(_RBX, _RSI);
    AxisToQuat(&_RBX->m_wsOrientation, &out);
    __asm
    {
      vmovss  xmm1, [rbp+r15+200h+var_118]
      vmovss  xmm0, [rbp+r15+200h+var_108]
      vunpcklps xmm0, xmm1, xmm0
      vmovss  dword ptr [rsp+300h+var_2B0], xmm6
    }
    angles.v[2] = v135;
    __asm { vmovsd  qword ptr [rsp+300h+angles], xmm0 }
    AnglesToAxis(&angles, &axis);
    MatrixMultiply(&axis, &_RSI->m_originBoneData.m_wsOrientation, &v146);
    MatrixVecMultiply((const tmat33_t<vec3_t> *)*v18, v146.m, &solution);
    vectoangles(&solution, &angles);
    pNode = _RSI->pNode;
    if ( *(_WORD *)((char *)_RSI->pNode + v20 - 8) )
    {
      v48 = *(unsigned __int16 *)((char *)_RSI->pNode + v20 - 8);
      v129 = ((v48 & 0xFFFF8000) << 16) | (((((v48 & 0x3FFF) << 14) - (~(v48 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm1, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm1, xmm6 }
    }
    if ( *(_WORD *)((char *)&pNode->m_lookAtX + v20) )
    {
      v130 = ((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v20) & 0x8000) << 16) | (((((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v20) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)&pNode->m_lookAtX + v20) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm8, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm8, xmm6 }
    }
    if ( *(_WORD *)((char *)pNode + v20 - 24) )
    {
      v131 = ((*(_WORD *)((char *)pNode + v20 - 24) & 0x8000) << 16) | (((((*(_WORD *)((char *)pNode + v20 - 24) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)pNode + v20 - 24) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm0, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    v54 = *(unsigned __int16 *)((char *)pNode + v20 - 16);
    v55 = v54 == 0;
    if ( *(_WORD *)((char *)pNode + v20 - 16) )
    {
      v55 = (((v54 & 0xFFFF8000) << 16) | (((((v54 & 0x3FFF) << 14) - (~(v54 << 14) & 0x10000000)) ^ 0x80000001) >> 1)) == 0;
      v132 = ((v54 & 0xFFFF8000) << 16) | (((((v54 & 0x3FFF) << 14) - (~(v54 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm7, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm7, xmm6 }
    }
    __asm
    {
      vmulss  xmm4, xmm13, dword ptr [rsp+300h+angles+4]
      vminss  xmm9, xmm8, xmm1
      vcomiss xmm9, xmm8
      vaddss  xmm2, xmm4, xmm15
      vroundss xmm3, xmm14, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm12, xmm1, xmm12
      vminss  xmm10, xmm7, xmm0
    }
    if ( !v55 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  [rsp+300h+var_2D0], xmm0
        vcvtss2sd xmm1, xmm9, xmm9
        vmovsd  [rsp+300h+var_2D8], xmm1
      }
      v66 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v124, v126);
      v55 = !v66;
      if ( v66 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm10, xmm7
      vmulss  xmm3, xmm13, dword ptr [rsp+300h+angles]
      vmaxss  xmm0, xmm12, xmm9
      vmovss  xmm12, cs:__real@43b40000
      vminss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rsp+300h+angles+4], xmm1
      vaddss  xmm1, xmm3, xmm15
      vroundss xmm2, xmm14, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm8, xmm0, xmm12
    }
    if ( !v55 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+300h+var_2D0], xmm0
        vcvtss2sd xmm1, xmm10, xmm10
        vmovsd  [rsp+300h+var_2D8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v125, v127) )
        __debugbreak();
    }
    __asm { vmovss  xmm2, dword ptr [rsp+300h+angles+4] }
    v78 = _RSI->pNode;
    __asm
    {
      vmulss  xmm3, xmm2, cs:__real@3c888889
      vmaxss  xmm0, xmm8, xmm10
      vminss  xmm1, xmm0, xmm7
      vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  dword ptr [rsp+300h+angles], xmm1
      vmaxss  xmm0, xmm0, xmm6
      vminss  xmm1, xmm0, cs:__real@3f800000
    }
    if ( *(_WORD *)((char *)v78 + v20 - 32) )
    {
      v133 = ((*(_WORD *)((char *)v78 + v20 - 32) & 0x8000) << 16) | (((((*(_WORD *)((char *)v78 + v20 - 32) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)v78 + v20 - 32) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm0, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm
    {
      vmulss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm2, xmm11
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmovss  dword ptr [rsp+300h+angles+8], xmm0
    }
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)*v18, &mat);
    AxisToQuat(&mat, &to);
    if ( *(_WORD *)((char *)_RSI->pNode + v20 - 40) )
    {
      v90 = *(unsigned __int16 *)((char *)_RSI->pNode + v20 - 40);
      v134 = ((v90 & 0xFFFF8000) << 16) | (((((v90 & 0x3FFF) << 14) - (~(v90 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm2, [rsp+300h+var_2C0]; frac }
    }
    else
    {
      __asm { vmovaps xmm2, xmm6 }
    }
    QuatNlerp(&out, &to, *(float *)&_XMM2, &result);
    QuatToAxis(&result, &src);
    MatrixCopy33(&src, &_RBX->m_wsOrientation);
    MatrixMultiply(&_RBX->m_wsOrientation, &_RSI->entityAxisInv, &v138);
    if ( _RBX->m_requiresAdjustment )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+200h+var_280+18h]
        vxorps  xmm2, xmm11, xmmword ptr [rbp+200h+var_280]
        vmovss  xmm1, dword ptr [rbp+200h+var_280+1Ch]
        vmovss  dword ptr [rbp+200h+dst], xmm0
        vmovss  xmm0, dword ptr [rbp+200h+var_280+20h]
        vmovss  dword ptr [rbp+200h+dst+8], xmm0
        vmovss  xmm0, dword ptr [rbp+200h+var_280+10h]
        vmovups xmmword ptr [rbp+200h+dst+0Ch], xmm2
        vmovss  xmm2, dword ptr [rbp+200h+var_280+14h]
        vmovss  dword ptr [rbp+200h+dst+4], xmm1
        vxorps  xmm1, xmm0, xmm11
        vxorps  xmm0, xmm2, xmm11
        vmovss  dword ptr [rbp+200h+dst+20h], xmm0
        vmovss  dword ptr [rbp+200h+dst+1Ch], xmm1
      }
    }
    else
    {
      MatrixCopy33(&v138, &dst);
    }
    AxisToQuat(&dst, &v144);
    __asm { vmovss  xmm2, dword ptr [rbx+24h] }
    m_boneIndex = _RBX->m_boneIndex;
    __asm { vmovups xmm0, xmmword ptr [rbp+200h+var_1F0] }
    destBuffer = _RSI->destBuffer;
    obj = _RSI->obj;
    animCalcInfo = _RSI->animCalcInfo;
    HIDWORD(v137) = 0;
    __asm
    {
      vmovups xmm1, xmmword ptr [rsp+70h]
      vmovss  xmm1, xmm1, xmm2
      vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
      vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
      vmovss  xmm2, dword ptr [rsi+20h]
      vmovups xmmword ptr [rsp+70h], xmm1
      vmovss  dword ptr [rsp+300h+var_2D0], xmm2
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, m_boneIndex, fmt, v123, v128);
    v20 += 2i64;
    _R15 += 4i64;
    ++v18;
    --v21;
  }
  while ( v21 );
  _R11 = &v153;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
XAnimLookAt_TransformBoneChain<0>
==============
*/
void XAnimLookAt_TransformBoneChain<0>(XAnimLookAtParams<0> *params)
{
  __int64 *v18; 
  __int64 v20; 
  __int64 v21; 
  XAnimLookAt *pNode; 
  int v48; 
  int v54; 
  bool v55; 
  bool v66; 
  XAnimLookAt *v78; 
  int v90; 
  int m_boneIndex; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  const float4 *fmt; 
  const float4 *v123; 
  double v124; 
  double v125; 
  double v126; 
  double v127; 
  float v128; 
  unsigned int v129; 
  unsigned int v130; 
  unsigned int v131; 
  unsigned int v132; 
  unsigned int v133; 
  unsigned int v134; 
  float v135; 
  vec3_t angles; 
  __int128 v137; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> v139; 
  vec3_t solution; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  vec4_t v144; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v146; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> src; 
  __int64 v152[5]; 
  char v153; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm13, cs:__real@3b360b61
    vmovss  xmm15, cs:__real@3f000000
    vmovss  xmm12, cs:__real@43b40000
    vmovaps xmm11, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm14, xmm14, xmm14
  }
  _R15 = 0i64;
  v152[0] = (__int64)&params->m_mainRootBoneData;
  v18 = v152;
  _RSI = params;
  v152[1] = (__int64)params->m_boneData;
  v20 = 216i64;
  v152[2] = (__int64)&params->m_boneData[1];
  v21 = 4i64;
  v152[3] = (__int64)&params->m_boneData[2];
  v152[4] = (__int64)&params->m_boneData[3];
  __asm
  {
    vmulss  xmm3, xmm13, dword ptr [rax+84h]
    vmulss  xmm4, xmm13, dword ptr [rax+9Ch]
    vaddss  xmm1, xmm3, xmm15
    vroundss xmm2, xmm14, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm13, dword ptr [rax+78h]
    vmulss  xmm6, xmm1, xmm12
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm4, xmm13, dword ptr [rax+90h]
    vmulss  xmm5, xmm1, xmm12
    vmulss  xmm7, xmm0, xmm12
    vaddss  xmm2, xmm4, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, xmm12
    vmovss  [rbp+200h+var_108], xmm6
    vmovss  [rbp+200h+var_104], xmm6
    vmovss  [rbp+200h+var_118], xmm0
    vmovss  [rbp+200h+var_114], xmm0
    vmovss  [rbp+200h+var_100], xmm7
    vmovss  [rbp+200h+var_FC], xmm7
    vmovss  [rbp+200h+var_110], xmm5
    vmovss  [rbp+200h+var_10C], xmm5
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    _RBX = (XAnimLookAtBoneHelper<0> *)v18[1];
    XAnimLookAtBoneHelper<0>::refresh(_RBX, _RSI);
    AxisToQuat(&_RBX->m_wsOrientation, &out);
    __asm
    {
      vmovss  xmm1, [rbp+r15+200h+var_118]
      vmovss  xmm0, [rbp+r15+200h+var_108]
      vunpcklps xmm0, xmm1, xmm0
      vmovss  dword ptr [rsp+300h+var_2B0], xmm6
    }
    angles.v[2] = v135;
    __asm { vmovsd  qword ptr [rsp+300h+angles], xmm0 }
    AnglesToAxis(&angles, &axis);
    MatrixMultiply(&axis, &_RSI->m_originBoneData.m_wsOrientation, &v146);
    MatrixVecMultiply((const tmat33_t<vec3_t> *)*v18, v146.m, &solution);
    vectoangles(&solution, &angles);
    pNode = _RSI->pNode;
    if ( *(_WORD *)((char *)_RSI->pNode + v20 - 8) )
    {
      v48 = *(unsigned __int16 *)((char *)_RSI->pNode + v20 - 8);
      v129 = ((v48 & 0xFFFF8000) << 16) | (((((v48 & 0x3FFF) << 14) - (~(v48 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm1, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm1, xmm6 }
    }
    if ( *(_WORD *)((char *)&pNode->m_lookAtX + v20) )
    {
      v130 = ((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v20) & 0x8000) << 16) | (((((*(_WORD *)((_BYTE *)&pNode->m_lookAtX + v20) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)&pNode->m_lookAtX + v20) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm8, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm8, xmm6 }
    }
    if ( *(_WORD *)((char *)pNode + v20 - 24) )
    {
      v131 = ((*(_WORD *)((char *)pNode + v20 - 24) & 0x8000) << 16) | (((((*(_WORD *)((char *)pNode + v20 - 24) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)pNode + v20 - 24) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm0, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    v54 = *(unsigned __int16 *)((char *)pNode + v20 - 16);
    v55 = v54 == 0;
    if ( *(_WORD *)((char *)pNode + v20 - 16) )
    {
      v55 = (((v54 & 0xFFFF8000) << 16) | (((((v54 & 0x3FFF) << 14) - (~(v54 << 14) & 0x10000000)) ^ 0x80000001) >> 1)) == 0;
      v132 = ((v54 & 0xFFFF8000) << 16) | (((((v54 & 0x3FFF) << 14) - (~(v54 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm7, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm7, xmm6 }
    }
    __asm
    {
      vmulss  xmm4, xmm13, dword ptr [rsp+300h+angles+4]
      vminss  xmm9, xmm8, xmm1
      vcomiss xmm9, xmm8
      vaddss  xmm2, xmm4, xmm15
      vroundss xmm3, xmm14, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm12, xmm1, xmm12
      vminss  xmm10, xmm7, xmm0
    }
    if ( !v55 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  [rsp+300h+var_2D0], xmm0
        vcvtss2sd xmm1, xmm9, xmm9
        vmovsd  [rsp+300h+var_2D8], xmm1
      }
      v66 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v124, v126);
      v55 = !v66;
      if ( v66 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm10, xmm7
      vmulss  xmm3, xmm13, dword ptr [rsp+300h+angles]
      vmaxss  xmm0, xmm12, xmm9
      vmovss  xmm12, cs:__real@43b40000
      vminss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rsp+300h+angles+4], xmm1
      vaddss  xmm1, xmm3, xmm15
      vroundss xmm2, xmm14, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm8, xmm0, xmm12
    }
    if ( !v55 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+300h+var_2D0], xmm0
        vcvtss2sd xmm1, xmm10, xmm10
        vmovsd  [rsp+300h+var_2D8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v125, v127) )
        __debugbreak();
    }
    __asm { vmovss  xmm2, dword ptr [rsp+300h+angles+4] }
    v78 = _RSI->pNode;
    __asm
    {
      vmulss  xmm3, xmm2, cs:__real@3c888889
      vmaxss  xmm0, xmm8, xmm10
      vminss  xmm1, xmm0, xmm7
      vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  dword ptr [rsp+300h+angles], xmm1
      vmaxss  xmm0, xmm0, xmm6
      vminss  xmm1, xmm0, cs:__real@3f800000
    }
    if ( *(_WORD *)((char *)v78 + v20 - 32) )
    {
      v133 = ((*(_WORD *)((char *)v78 + v20 - 32) & 0x8000) << 16) | (((((*(_WORD *)((char *)v78 + v20 - 32) & 0x3FFF) << 14) - (~(*(unsigned __int16 *)((char *)v78 + v20 - 32) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm0, [rsp+300h+var_2C0] }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm
    {
      vmulss  xmm2, xmm0, xmm1
      vxorps  xmm1, xmm2, xmm11
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmovss  dword ptr [rsp+300h+angles+8], xmm0
    }
    AnglesToAxis(&angles, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)*v18, &mat);
    AxisToQuat(&mat, &to);
    if ( *(_WORD *)((char *)_RSI->pNode + v20 - 40) )
    {
      v90 = *(unsigned __int16 *)((char *)_RSI->pNode + v20 - 40);
      v134 = ((v90 & 0xFFFF8000) << 16) | (((((v90 & 0x3FFF) << 14) - (~(v90 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
      __asm { vmovss  xmm2, [rsp+300h+var_2C0]; frac }
    }
    else
    {
      __asm { vmovaps xmm2, xmm6 }
    }
    QuatNlerp(&out, &to, *(float *)&_XMM2, &result);
    QuatToAxis(&result, &src);
    MatrixCopy33(&src, &_RBX->m_wsOrientation);
    MatrixCopy33(&_RBX->m_wsOrientation, &dst);
    if ( _RBX->m_requiresAdjustment )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+200h+dst+18h]
        vxorps  xmm2, xmm11, xmmword ptr [rbp+200h+dst]
        vmovss  xmm1, dword ptr [rbp+200h+dst+1Ch]
        vmovss  dword ptr [rbp+200h+var_258], xmm0
        vmovss  xmm0, dword ptr [rbp+200h+dst+20h]
        vmovss  dword ptr [rbp+200h+var_258+8], xmm0
        vmovss  xmm0, dword ptr [rbp+200h+dst+10h]
        vmovups xmmword ptr [rbp+200h+var_258+0Ch], xmm2
        vmovss  xmm2, dword ptr [rbp+200h+dst+14h]
        vmovss  dword ptr [rbp+200h+var_258+4], xmm1
        vxorps  xmm1, xmm0, xmm11
        vxorps  xmm0, xmm2, xmm11
        vmovss  dword ptr [rbp+200h+var_258+20h], xmm0
        vmovss  dword ptr [rbp+200h+var_258+1Ch], xmm1
      }
    }
    else
    {
      MatrixCopy33(&dst, &v139);
    }
    AxisToQuat(&v139, &v144);
    __asm { vmovss  xmm2, dword ptr [rbx+24h] }
    m_boneIndex = _RBX->m_boneIndex;
    __asm { vmovups xmm0, xmmword ptr [rbp+200h+var_1F0] }
    destBuffer = _RSI->destBuffer;
    obj = _RSI->obj;
    animCalcInfo = _RSI->animCalcInfo;
    HIDWORD(v137) = 0;
    __asm
    {
      vmovups xmm1, xmmword ptr [rsp+70h]
      vmovss  xmm1, xmm1, xmm2
      vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
      vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
      vmovss  xmm2, dword ptr [rsi+20h]
      vmovups xmmword ptr [rsp+70h], xmm1
      vmovss  dword ptr [rsp+300h+var_2D0], xmm2
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, m_boneIndex, fmt, v123, v128);
    v20 += 2i64;
    _R15 += 4i64;
    ++v18;
    --v21;
  }
  while ( v21 );
  _R11 = &v153;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
  float v29; 
  __int64 v31; 
  __int64 v43; 
  float v105; 
  vec3_t v106; 
  vec3_t v107; 
  vec3_t v108; 
  vec3_t angles; 
  tmat33_t<vec3_t> out; 
  vec3_t end; 
  vec3_t start; 
  vec3_t center; 
  vec3_t v114; 
  tmat33_t<vec3_t> axis; 
  vec4_t color; 
  char v117; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
  }
  _RSI = (unsigned __int8 *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1251, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  _RAX = BG_GetLookAtLimits(_RSI[32]);
  __asm
  {
    vmovss  xmm4, dword ptr [rsi+104h]
    vmovss  xmm6, dword ptr [rsi+0FCh]
    vaddss  xmm0, xmm6, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rsi+100h]
    vaddss  xmm1, xmm5, dword ptr [rsi+18h]
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm7, cs:__real@41c80000
    vmovss  dword ptr [rbp+0C0h+center], xmm0
    vaddss  xmm0, xmm5, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+0C0h+center+4], xmm0
    vaddss  xmm0, xmm4, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+0C0h+center+8], xmm0
    vaddss  xmm0, xmm6, dword ptr [rsi+14h]
    vmovss  dword ptr [rsp+1C0h+var_180], xmm0
    vaddss  xmm0, xmm4, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rsp+1C0h+var_180+8], xmm0
    vmovss  dword ptr [rsp+1C0h+var_180+4], xmm1
    vmovss  xmm4, dword ptr [rax+4]
    vaddss  xmm0, xmm4, dword ptr [rax+8]
    vmulss  xmm10, xmm0, cs:__real@3dcccccd
    vmovss  xmm0, dword ptr [rax+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rax+10h]
    vmulss  xmm9, xmm1, cs:__real@3dcccccd
    vxorps  xmm12, xmm12, xmm12
    vmovss  dword ptr [rsp+1C0h+var_170+8], xmm12
  }
  v29 = v107.v[2];
  _R12 = _RAX;
  __asm { vmovss  [rsp+1C0h+var_188], xmm12 }
  v31 = 11i64;
  __asm { vxorps  xmm8, xmm4, xmm11 }
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+10h]
      vxorps  xmm6, xmm0, xmm11
      vunpcklps xmm0, xmm8, xmm6
    }
    angles.v[2] = v29;
    __asm { vmovsd  qword ptr [rsp+1C0h+angles], xmm0 }
    AnglesToAxis(&angles, &axis);
    MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)(_RSI + 264), &out);
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out]
      vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180]
      vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out+4]
      vmovss  dword ptr [rbp+0C0h+start], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+4]
      vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out+8]
      vmovss  dword ptr [rbp+0C0h+start+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+8]
      vmovss  dword ptr [rbp+0C0h+start+8], xmm2
      vmovss  [rsp+1C0h+var_190], xmm8
      vaddss  xmm6, xmm6, xmm9
    }
    v43 = 10i64;
    do
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [rsp+1C0h+var_190]
        vinsertps xmm0, xmm0, xmm6, 10h
      }
      v107.v[2] = v105;
      __asm
      {
        vmovsd  qword ptr [rsp+1C0h+var_190], xmm0
        vmovsd  qword ptr [rsp+1C0h+var_170], xmm0
      }
      AnglesToAxis(&v107, &axis);
      MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)(_RSI + 264), &out);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out]
        vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180]
        vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out+4]
        vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
        vmovss  dword ptr [rbp+0C0h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+4]
        vmulss  xmm1, xmm7, dword ptr [rbp+0C0h+out+8]
        vmovss  dword ptr [rbp+0C0h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+8]
        vmovss  dword ptr [rbp+0C0h+end+8], xmm2
        vmovups xmmword ptr [rbp+0C0h+color], xmm0
      }
      CG_DebugLine(&start, &end, &color, 1, 0);
      start.v[2] = end.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+0C0h+end]
        vmovsd  qword ptr [rbp+0C0h+start], xmm0
        vaddss  xmm6, xmm6, xmm9
      }
      --v43;
    }
    while ( v43 );
    __asm { vaddss  xmm8, xmm8, xmm10 }
    --v31;
  }
  while ( v31 );
  __asm { vmovss  xmm1, cs:__real@3f800000; radius }
  CG_DebugSphere(&center, *(float *)&_XMM1, &colorMagenta, 0, 0);
  __asm
  {
    vmovss  xmm7, cs:__real@3fc00000
    vmovaps xmm1, xmm7; radius
  }
  CG_DebugSphere(&center, *(float *)&_XMM1, &colorBlack, 0, 0);
  __asm
  {
    vmovss  xmm8, cs:__real@40200000
    vmovaps xmm1, xmm8; radius
  }
  CG_DebugSphere(&center, *(float *)&_XMM1, &colorWhite, 0, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+70h]
    vmovss  xmm0, dword ptr [rsi+6Ch]
    vmovss  xmm6, dword ptr [rsi+74h]
    vunpcklps xmm0, xmm1, xmm0
    vmovss  dword ptr [rsp+1C0h+angles+8], xmm12
  }
  v107.v[2] = angles.v[2];
  __asm { vmovsd  qword ptr [rsp+1C0h+var_170], xmm0 }
  AnglesToAxis(&v107, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)(_RSI + 264), &out);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+out]
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180]
    vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+out+4]
    vmovss  dword ptr [rbp+0C0h+var_E8], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+out+8]
    vmovss  dword ptr [rbp+0C0h+var_E8+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+8]
    vmovaps xmm1, xmm7; radius
    vmovss  dword ptr [rbp+0C0h+var_E8+8], xmm2
  }
  CG_DebugSphere(&v114, *(float *)&_XMM1, &colorGreen, 0, 0);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSphere(&v114, *(float *)&_XMM1, &colorBlue, 0, 0);
  if ( _RSI[32] )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000
      vmovups xmmword ptr [rbp+0C0h+color], xmm0
    }
    CG_DebugLine(&v106, &v114, &color, 0, 0);
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+78h]
    vmovss  xmm0, dword ptr [rsi+84h]
    vmovss  xmm6, dword ptr [rsi+0A8h]
    vunpcklps xmm0, xmm1, xmm0
    vmovss  dword ptr [rsp+1C0h+angles+8], xmm12
  }
  v107.v[2] = angles.v[2];
  __asm { vmovsd  qword ptr [rsp+1C0h+var_170], xmm0 }
  AnglesToAxis(&v107, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)(_RSI + 264), &out);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+out]
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180]
    vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+out+4]
    vmovss  dword ptr [rsp+1C0h+var_160], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+0C0h+out+8]
    vmovss  dword ptr [rsp+1C0h+var_160+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsp+1C0h+var_180+8]
    vmovaps xmm1, xmm7; radius
    vmovss  dword ptr [rsp+1C0h+var_160+8], xmm2
  }
  CG_DebugSphere(&v108, *(float *)&_XMM1, &colorGreen, 0, 0);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSphere(&v108, *(float *)&_XMM1, &colorRed, 0, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+90h]
    vmovss  xmm0, dword ptr [rsi+9Ch]
    vmovss  xmm6, dword ptr [rsi+0A8h]
    vunpcklps xmm0, xmm1, xmm0
    vmovss  dword ptr [rsp+1C0h+angles+8], xmm12
  }
  v107.v[2] = angles.v[2];
  __asm { vmovsd  qword ptr [rsp+1C0h+var_170], xmm0 }
  AnglesToAxis(&v107, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)(_RSI + 264), &out);
  __asm
  {
    vmulss  xmm2, xmm6, dword ptr [rbp+0C0h+out]
    vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+var_180]
    vmulss  xmm2, xmm6, dword ptr [rbp+0C0h+out+4]
    vmovss  dword ptr [rsp+1C0h+var_160], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+var_180+4]
    vmulss  xmm2, xmm6, dword ptr [rbp+0C0h+out+8]
    vmovss  dword ptr [rsp+1C0h+var_160+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsp+1C0h+var_180+8]
    vmovaps xmm1, xmm7; radius
    vmovss  dword ptr [rsp+1C0h+var_160+8], xmm3
  }
  CG_DebugSphere(&v108, *(float *)&_XMM1, &colorYellow, 0, 0);
  __asm { vmovaps xmm1, xmm8; radius }
  CG_DebugSphere(&v108, *(float *)&_XMM1, &colorRed, 0, 0);
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
XAnimLookAt_Debug_text
==============
*/
void XAnimLookAt_Debug_text(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v7; 
  unsigned __int64 v11; 
  __int64 v13; 
  const char *v14; 
  const dvar_t *v15; 
  __int64 v16; 
  int v17; 
  _WORD *v18; 
  __int64 v19; 
  char *fmt; 
  char *fmta; 
  double v23; 
  unsigned int v24; 
  vec3_t v; 

  v7 = size;
  _R15 = (unsigned __int8 *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 1357, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  if ( _R15[237] )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vmovss  xmm1, dword ptr [r15+4]
    }
    v11 = v7;
    __asm
    {
      vmovss  dword ptr [rsp+98h+v], xmm0
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  dword ptr [rsp+98h+v+8], xmm0
      vmovss  dword ptr [rsp+98h+v+4], xmm1
    }
    if ( depth > 0 )
    {
      v13 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v11, inoutPos, "  ");
        --v13;
      }
      while ( v13 );
    }
    v14 = vtos(&v);
    Com_sprintfPos_truncate(buffer, v11, inoutPos, "  [lookAtPos: %s]\n", v14);
    v15 = DCONST_DVARBOOL_xanim_lookatExtendedAnimInfo;
    if ( !DCONST_DVARBOOL_xanim_lookatExtendedAnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lookatExtendedAnimInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      if ( depth > 0 )
      {
        v16 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v11, inoutPos, "  ");
          --v16;
        }
        while ( v16 );
      }
      LODWORD(fmt) = _R15[32];
      Com_sprintfPos_truncate(buffer, v11, inoutPos, "  [state: %d]\n", fmt);
      v17 = 0;
      v18 = _R15 + 176;
      do
      {
        if ( depth > 0 )
        {
          v19 = (unsigned int)depth;
          do
          {
            Com_sprintfPos_truncate(buffer, v11, inoutPos, " ");
            --v19;
          }
          while ( v19 );
        }
        if ( *v18 )
        {
          v24 = ((*v18 & 0x8000) << 16) | (((((*v18 & 0x3FFF) << 14) - (~((unsigned __int16)*v18 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
          __asm { vmovss  xmm0, [rsp+98h+var_58] }
        }
        else
        {
          __asm { vxorps  xmm0, xmm0, xmm0 }
        }
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+98h+var_70], xmm0
        }
        LODWORD(fmta) = v17;
        Com_sprintfPos_truncate(buffer, v11, inoutPos, "  [percent %d - %f]\n", fmta, v23);
        ++v17;
        ++v18;
      }
      while ( v17 < 4 );
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

void __fastcall XAnimLookAt_UpdateCurrentLookAt(XAnimLookAt *pNode, double dtime, const bool targetReset, bool isServer)
{
  __int64 m_lookIntensity; 
  bool applyDiffError; 

  m_lookIntensity = pNode->m_lookIntensity;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+6Ch]; targetYaw
    vmovaps xmm3, xmm1; dtime
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm1
    vmovss  xmm1, dword ptr [rcx+70h]; targetPitch
  }
  _R14 = pNode;
  applyDiffError = !targetReset;
  calcUpdatedAngles(&pNode->m_curHeadData, *(float *)&_XMM1, *(float *)&_XMM2, *(const float *)&_XMM3, &TABLE_HEAD_PD_PARAMS[m_lookIntensity], !targetReset, isServer);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+84h]; targetYaw
    vmovss  xmm1, dword ptr [r14+78h]; targetPitch
    vmovaps xmm3, xmm6; dtime
  }
  calcUpdatedAngles(&_R14->m_curTorsoData, *(float *)&_XMM1, *(float *)&_XMM2, *(const float *)&_XMM3, &TABLE_TORSO_PD_PARAMS[m_lookIntensity], applyDiffError, isServer);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
XAnimLookAt_UpdateTargetLookAt
==============
*/
bool XAnimLookAt_UpdateTargetLookAt(const DObj *obj, XAnimLookAt *pNode)
{
  char v42; 
  bool v43; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 
  vec3_t angles; 
  tmat43_t<vec3_t> result; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = pNode;
  AnglesAndOriginToMatrix43(&pNode->m_angles, &pNode->m_origin, &result);
  MatrixTranspose((const tmat33_t<vec3_t> *)&result, &out);
  _RAX = BG_GetLookAtLimits(_RBX->m_state);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+result+24h]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vaddss  xmm0, xmm0, dword ptr [rbx+14h]
    vmovss  xmm2, dword ptr [rsp+108h+result+28h]
    vmovss  xmm3, dword ptr [rsp+108h+result+2Ch]
    vsubss  xmm7, xmm1, xmm0
    vaddss  xmm1, xmm2, dword ptr [rbx+4]
    vaddss  xmm0, xmm2, dword ptr [rbx+18h]
    vmulss  xmm2, xmm7, dword ptr [rsp+108h+out]
    vsubss  xmm5, xmm1, xmm0
    vaddss  xmm1, xmm3, dword ptr [rbx+8]
    vaddss  xmm0, xmm3, dword ptr [rbx+1Ch]
    vmulss  xmm3, xmm5, dword ptr [rsp+108h+out+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm5, dword ptr [rsp+108h+out+10h]
    vmulss  xmm2, xmm7, dword ptr [rsp+108h+out+8]
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+108h+out+18h]
    vmulss  xmm1, xmm7, dword ptr [rsp+108h+out+4]
    vaddss  xmm8, xmm4, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+108h+out+1Ch]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm3, xmm5, dword ptr [rsp+108h+out+14h]
    vaddss  xmm9, xmm4, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+108h+out+20h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm9, xmm9
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm4, xmm0
    vaddss  xmm4, xmm2, xmm1
    vcomiss xmm4, dword ptr [rax+14h]
  }
  _RDI = _RAX;
  if ( v42 )
  {
    v43 = 0;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm0, xmm4
      vmovaps [rsp+108h+var_58], xmm10
      vsqrtss xmm10, xmm1, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vcmpless xmm0, xmm10, cs:__real@80000000
      vblendvps xmm0, xmm10, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm8, xmm2
      vmovss  dword ptr [rsp+108h+vec], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm9, xmm2
      vmovss  dword ptr [rsp+108h+vec+8], xmm0
      vmovss  dword ptr [rsp+108h+vec+4], xmm1
      vmovaps [rsp+108h+var_68], xmm11
    }
    vectoangles(&vec, &angles);
    __asm
    {
      vmovss  xmm4, cs:__real@3b360b61
      vmulss  xmm3, xmm4, dword ptr [rsp+108h+angles+4]
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vmulss  xmm4, xmm4, dword ptr [rsp+108h+angles]
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm8, xmm0, cs:__real@43b40000
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm7, xmm2, 1
      vmovss  xmm2, dword ptr [rbx+68h]
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vsubss  xmm0, xmm8, xmm2
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, cs:__real@41a00000
      vmovss  xmm0, dword ptr [rdi+18h]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm11, xmm1, cs:__real@43b40000
      vxorps  xmm1, xmm0, xmm7
      vcomiss xmm8, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
      vmovss  xmm6, dword ptr [rdi+0Ch]
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  xmm2, dword ptr [rdi+8]; max
      vxorps  xmm1, xmm1, xmm7; min
      vmovaps xmm0, xmm11; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmaxss  xmm4, xmm10, cs:__real@41200000
      vmovaps xmm11, [rsp+108h+var_68]
      vmovaps xmm10, [rsp+108h+var_58]
      vmovaps xmm3, xmm0
      vmovss  xmm0, dword ptr [rbx+6Ch]
      vmovss  dword ptr [rbx+68h], xmm0
      vmovss  xmm2, cs:__real@3dcccccd
      vsubss  xmm1, xmm6, xmm0
      vandps  xmm1, xmm1, xmm9
      vcomiss xmm1, xmm2
      vsubss  xmm0, xmm3, dword ptr [rbx+70h]
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm2
    }
    v43 = 0;
    __asm
    {
      vmovss  dword ptr [rbx+6Ch], xmm6
      vmovss  dword ptr [rbx+70h], xmm3
      vmovss  dword ptr [rbx+74h], xmm4
    }
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return v43;
}

/*
==============
calcUpdatedAngles
==============
*/

void __fastcall calcUpdatedAngles(XAnimLookAtTrackingData *trackData, double targetPitch, double targetYaw, double dtime, const XAnimLookAtPDParams *pd, const bool applyDiffError)
{
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovaps xmmword ptr [rax-18h], xmm7
  }
  _RBX = trackData;
  __asm
  {
    vsubss  xmm7, xmm2, dword ptr [rcx+0Ch]
    vsubss  xmm4, xmm7, dword ptr [rcx+10h]
    vmovss  xmm2, cs:s_VelMax_0; max
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
  }
  LODWORD(_RAX) = applyDiffError;
  __asm
  {
    vdivss  xmm9, xmm0, xmm3
    vmovd   xmm11, eax
  }
  _RAX = pd;
  __asm
  {
    vmovss  dword ptr [rcx+10h], xmm7
    vmovaps [rsp+0B8h+var_88], xmm14
    vsubss  xmm14, xmm1, dword ptr [rcx]
    vsubss  xmm13, xmm14, dword ptr [rcx+4]
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovss  dword ptr [rcx+4], xmm14
    vmovss  xmm12, dword ptr [rax]
    vmovss  xmm10, dword ptr [rax+4]
    vmovaps [rsp+0B8h+var_98], xmm15
    vmovaps xmm15, xmm3
    vcvtdq2ps xmm11, xmm11
    vmulss  xmm0, xmm11, xmm4
    vmulss  xmm3, xmm0, xmm9
    vmulss  xmm5, xmm3, xmm10
    vmulss  xmm4, xmm7, xmm12
    vaddss  xmm0, xmm5, xmm4
    vmulss  xmm3, xmm0, xmm15
    vaddss  xmm0, xmm3, dword ptr [rcx+14h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:s_VelMax_0; max
    vmulss  xmm1, xmm0, xmm15
    vaddss  xmm7, xmm1, dword ptr [rbx+0Ch]
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmulss  xmm3, xmm11, xmm13
    vmulss  xmm4, xmm3, xmm9
    vmulss  xmm3, xmm4, xmm10
    vmulss  xmm5, xmm14, xmm12
    vaddss  xmm3, xmm3, xmm5
    vmulss  xmm4, xmm3, xmm15
    vmovaps xmm8, xmm0
    vaddss  xmm0, xmm4, dword ptr [rbx+8]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _R11 = &v64;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmulss  xmm1, xmm0, xmm15
    vaddss  xmm2, xmm1, dword ptr [rbx]
    vmovaps xmm15, [rsp+0B8h+var_98]
    vmovss  dword ptr [rbx+0Ch], xmm7
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovss  dword ptr [rbx+14h], xmm8
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+8], xmm0
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+24h]
    vaddss  xmm1, xmm0, dword ptr [rax+44h]
    vmovss  dword ptr [r8], xmm1
    vmovss  xmm2, dword ptr [rcx+28h]
    vaddss  xmm0, xmm2, dword ptr [rax+48h]
    vmovss  dword ptr [r8+4], xmm0
    vmovss  xmm1, dword ptr [rcx+2Ch]
    vaddss  xmm2, xmm1, dword ptr [rax+4Ch]
    vmovss  dword ptr [r8+8], xmm2
  }
}

/*
==============
XAnimLookAtBoneHelper<1>::refresh
==============
*/
char XAnimLookAtBoneHelper<1>::refresh(XAnimLookAtBoneHelper<1> *this, const XAnimLookAtParams<1> *params)
{
  tmat33_t<vec3_t> axis; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  vec4_t quat; 
  tmat33_t<vec3_t> dst; 

  _RBX = this;
  if ( !XAnimLookAtParams<1>::IsValid((XAnimLookAtParams<1> *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 209, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, _RBX->m_boneIndex, &outModelQuat, &outModelTranslation);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+0C8h+var_58.v]
    vmovups xmm0, xmmword ptr [rsp+0C8h+outModelQuat.v]
    vmovss  dword ptr [rbx+24h], xmm1
    vextractps dword ptr [rbx+28h], xmm1, 1
    vextractps dword ptr [rbx+2Ch], xmm1, 2
    vmovups xmmword ptr [rsp+0C8h+quat], xmm0
  }
  QuatToAxis(&quat, &axis);
  MatrixCopy33(&axis, &dst);
  MatrixMultiply(&dst, (const tmat33_t<vec3_t> *)&params->entityTransform, &axis);
  if ( _RBX->m_requiresAdjustment )
  {
    __asm
    {
      vmovaps xmm3, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+0C8h+axis]
      vmovss  xmm1, dword ptr [rsp+0C8h+axis+4]
      vmovss  xmm2, dword ptr [rsp+0C8h+axis+1Ch]
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  xmm0, dword ptr [rsp+0C8h+axis+8]
      vmovss  dword ptr [rbx+20h], xmm0
      vxorps  xmm0, xmm3, xmmword ptr [rsp+0C8h+axis+0Ch]
      vmovss  dword ptr [rbx+1Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+0C8h+axis+20h]
      vmovups xmmword ptr [rbx], xmm0
      vxorps  xmm0, xmm2, xmm3
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbx+14h], xmm2
      vmovss  dword ptr [rbx+10h], xmm0
    }
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
  tmat33_t<vec3_t> axis; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  vec4_t quat; 

  _RBX = this;
  if ( !XAnimLookAtParams<0>::IsValid((XAnimLookAtParams<0> *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat.cpp", 209, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, _RBX->m_boneIndex, &outModelQuat, &outModelTranslation);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+0A8h+var_38.v]
    vmovups xmm0, xmmword ptr [rsp+0A8h+outModelQuat.v]
    vmovss  dword ptr [rbx+24h], xmm1
    vextractps dword ptr [rbx+28h], xmm1, 1
    vextractps dword ptr [rbx+2Ch], xmm1, 2
    vmovups xmmword ptr [rsp+0A8h+quat], xmm0
  }
  QuatToAxis(&quat, &axis);
  if ( _RBX->m_requiresAdjustment )
  {
    __asm
    {
      vmovaps xmm3, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+0A8h+axis]
      vmovss  xmm1, dword ptr [rsp+0A8h+axis+4]
      vmovss  xmm2, dword ptr [rsp+0A8h+axis+1Ch]
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  xmm0, dword ptr [rsp+0A8h+axis+8]
      vmovss  dword ptr [rbx+20h], xmm0
      vxorps  xmm0, xmm3, xmmword ptr [rsp+0A8h+axis+0Ch]
      vmovss  dword ptr [rbx+1Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+0A8h+axis+20h]
      vmovups xmmword ptr [rbx], xmm0
      vxorps  xmm0, xmm2, xmm3
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbx+14h], xmm2
      vmovss  dword ptr [rbx+10h], xmm0
    }
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
  const float4 *v20; 
  const float4 *v21; 
  float v22; 
  __int128 v23; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> dst; 
  vec4_t v26; 

  _RDI = params;
  _RBX = this;
  MatrixMultiply(&this->m_wsOrientation, &params->entityAxisInv, &out);
  if ( _RBX->m_requiresAdjustment )
  {
    __asm
    {
      vmovaps xmm3, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+57h+out+18h]
      vmovss  xmm1, dword ptr [rbp+57h+out+1Ch]
      vmovss  xmm2, dword ptr [rbp+57h+out+10h]
      vmovss  dword ptr [rbp+57h+dst], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+out+20h]
      vmovss  dword ptr [rbp+57h+dst+8], xmm0
      vxorps  xmm0, xmm3, xmmword ptr [rbp+57h+out]
      vmovups xmmword ptr [rbp+57h+dst+0Ch], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+out+14h]
      vmovss  dword ptr [rbp+57h+dst+4], xmm1
      vxorps  xmm1, xmm2, xmm3
      vxorps  xmm2, xmm0, xmm3
      vmovss  dword ptr [rbp+57h+dst+20h], xmm2
      vmovss  dword ptr [rbp+57h+dst+1Ch], xmm1
    }
  }
  else
  {
    MatrixCopy33(&out, &dst);
  }
  AxisToQuat(&dst, &v26);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+24h]
    vmovups xmm0, xmmword ptr [rbp+57h+var_20]
  }
  HIDWORD(v23) = 0;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp-29h]
    vmovss  xmm1, xmm1, xmm2
    vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
    vmovss  xmm2, dword ptr [rdi+20h]
    vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
    vmovss  [rsp+0C0h+var_90], xmm2
  }
  XAnimSetLocalBoneTransform(_RDI->animCalcInfo, _RDI->obj, _RDI->destBuffer, _RBX->m_boneIndex, v20, v21, v22);
}

/*
==============
XAnimLookAtBoneHelper<0>::storeTransforms
==============
*/
void XAnimLookAtBoneHelper<0>::storeTransforms(XAnimLookAtBoneHelper<0> *this, const XAnimLookAtParams<0> *params)
{
  const float4 *v20; 
  const float4 *v21; 
  float v22; 
  __int128 v23; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> mat; 
  vec4_t out; 

  _RDI = params;
  _RBX = this;
  MatrixCopy33(&this->m_wsOrientation, &dst);
  if ( _RBX->m_requiresAdjustment )
  {
    __asm
    {
      vmovaps xmm3, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rbp+57h+dst+18h]
      vmovss  xmm1, dword ptr [rbp+57h+dst+1Ch]
      vmovss  xmm2, dword ptr [rbp+57h+dst+10h]
      vmovss  dword ptr [rbp+57h+mat], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+dst+20h]
      vmovss  dword ptr [rbp+57h+mat+8], xmm0
      vxorps  xmm0, xmm3, xmmword ptr [rbp+57h+dst]
      vmovups xmmword ptr [rbp+57h+mat+0Ch], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+dst+14h]
      vmovss  dword ptr [rbp+57h+mat+4], xmm1
      vxorps  xmm1, xmm2, xmm3
      vxorps  xmm2, xmm0, xmm3
      vmovss  dword ptr [rbp+57h+mat+20h], xmm2
      vmovss  dword ptr [rbp+57h+mat+1Ch], xmm1
    }
  }
  else
  {
    MatrixCopy33(&dst, &mat);
  }
  AxisToQuat(&mat, &out);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+24h]
    vmovups xmm0, xmmword ptr [rbp+57h+out]
  }
  HIDWORD(v23) = 0;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp-29h]
    vmovss  xmm1, xmm1, xmm2
    vinsertps xmm1, xmm1, dword ptr [rbx+28h], 10h
    vmovss  xmm2, dword ptr [rdi+20h]
    vinsertps xmm1, xmm1, dword ptr [rbx+2Ch], 20h ; ' '
    vmovss  [rsp+0C0h+var_90], xmm2
  }
  XAnimSetLocalBoneTransform(_RDI->animCalcInfo, _RDI->obj, _RDI->destBuffer, _RBX->m_boneIndex, v20, v21, v22);
}

