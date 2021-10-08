/*
==============
XAnimBlendSpace_SetAnims
==============
*/

void __fastcall XAnimBlendSpace_SetAnims(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, scr_string_t animArray)
{
  ?XAnimBlendSpace_SetAnims@@YAXPEAUDObj@@IW4XAnimSubTreeID@@IW4scr_string_t@@@Z(obj, graftAnimIndex, subTreeID, animIndex, animArray);
}

/*
==============
XAnimBlendSpace_GetLength
==============
*/

double __fastcall XAnimBlendSpace_GetLength(const XAnim_s *anims, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimBlendSpace_GetLength@@YAMPEBUXAnim_s@@I@Z(anims, animIndex);
  return result;
}

/*
==============
XAnimBlendSpace_IsBlendspaceNode
==============
*/

bool __fastcall XAnimBlendSpace_IsBlendspaceNode(const XAnim_s *anims, const unsigned int animIndex)
{
  return ?XAnimBlendSpace_IsBlendspaceNode@@YA_NPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimBlendSpace1D_CalcWeights
==============
*/

bool __fastcall XAnimBlendSpace1D_CalcWeights(const XAnimFieldArray<float> *coords, float value, vec2_t *weights, bool *outOutsideRange, unsigned int *outChildIndex)
{
  return ?XAnimBlendSpace1D_CalcWeights@@YA_NPEBU?$XAnimFieldArray@M@@MAEATvec2_t@@PEA_NPEAI@Z(coords, value, weights, outOutsideRange, outChildIndex);
}

/*
==============
XAnimBlendSpace_GetNotifyParameters
==============
*/

void __fastcall XAnimBlendSpace_GetNotifyParameters(const XAnimInfo *animInfo, XAnimOwner owner, scr_string_t notifyName, bool allAnimsNotify, unsigned int numAnims, float *weights, unsigned int *outNotifyTypes, scr_string_t *outNotifyNames, unsigned int *outMaxAnimIndex)
{
  ?XAnimBlendSpace_GetNotifyParameters@@YAXPEBUXAnimInfo@@W4XAnimOwner@@W4scr_string_t@@_NIPEAMPEAIPEAW43@5@Z(animInfo, owner, notifyName, allAnimsNotify, numAnims, weights, outNotifyTypes, outNotifyNames, outMaxAnimIndex);
}

/*
==============
XAnimBlendSpace_HandleServerNotifyChild
==============
*/

void __fastcall XAnimBlendSpace_HandleServerNotifyChild(const XAnimTree *tree, XAnimInfo *animInfo, unsigned int graftIndex, bool allAnimsNotify, const unsigned int *childAnimIndex, unsigned int maxWeightAnimIndex)
{
  ?XAnimBlendSpace_HandleServerNotifyChild@@YAXPEBUXAnimTree@@PEAUXAnimInfo@@I_NPEBII@Z(tree, animInfo, graftIndex, allAnimsNotify, childAnimIndex, maxWeightAnimIndex);
}

/*
==============
XAnimBlendSpace_GetLengthMsec
==============
*/

int __fastcall XAnimBlendSpace_GetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  return ?XAnimBlendSpace_GetLengthMsec@@YAHPEBUXAnim_s@@I@Z(anims, anim);
}

/*
==============
XAnimBlendSpace1D_Register
==============
*/

void XAnimBlendSpace1D_Register(void)
{
  ?XAnimBlendSpace1D_Register@@YAXXZ();
}

/*
==============
XAnimBlendSpace_ToggleUpdate
==============
*/

void __fastcall XAnimBlendSpace_ToggleUpdate(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, bool enableUpdate)
{
  ?XAnimBlendSpace_ToggleUpdate@@YAXPEAUDObj@@IW4XAnimSubTreeID@@I_N@Z(obj, graftAnimIndex, subTreeID, animIndex, enableUpdate);
}

/*
==============
XAnimBlendSpace1D_Destroy
==============
*/
void XAnimBlendSpace1D_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimBlendSpace1D_Update
==============
*/
void XAnimBlendSpace1D_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  const DObj *v17; 
  bool v19; 
  unsigned int v20; 
  unsigned int v22; 
  char v24; 
  unsigned __int16 InfoIndex; 
  int v29; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  scr_string_t v32; 
  unsigned int size; 
  __int64 v37; 
  const XAnimTree *tree; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v45; 
  unsigned int *v46; 
  unsigned int ChildAt; 
  bool v49; 
  unsigned int v50; 
  unsigned int v51; 
  XAnimSubTreeID subTreeID; 
  XAnimTree *v53; 
  unsigned int v54; 
  XAnimTree *v55; 
  BOOL notifyType; 
  unsigned int v57; 
  scr_string_t notifyName; 
  unsigned int v59; 
  char v60; 
  bool v61; 
  unsigned int v64; 
  bool v66; 
  unsigned int v67; 
  __int64 v69; 
  unsigned int v73; 
  __int64 v74; 
  XAnimTree *v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  char v80; 
  unsigned int v82; 
  bool v83; 
  bool v84; 
  __int64 v86; 
  bool v87; 
  unsigned int v91; 
  unsigned int v95; 
  XModelNameMap *v97; 
  unsigned int v98; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float curveIDc; 
  float curveIDd; 
  __int64 v110; 
  float v111; 
  float v112; 
  float v113; 
  __int64 rate; 
  float ratea; 
  float rateb; 
  float ratec; 
  bool outOutsideRange[8]; 
  unsigned int outChildIndex[2]; 
  unsigned int graftAnimIndex[2]; 
  __int64 v121; 
  unsigned int childAnimIndex[2]; 
  XModelNameMap *cachedModelNameMap; 
  vec2_t weights; 
  unsigned int v125; 
  unsigned int animIndex[195]; 
  void *retaddr; 

  _R11 = &retaddr;
  v19 = *((_BYTE *)nodeData + 32) == 0;
  _RDI = animInfo;
  cachedModelNameMap = modelNameMap;
  v17 = obj;
  *(_QWORD *)childAnimIndex = obj;
  _R15 = nodeData;
  if ( !v19 )
  {
    __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
    v20 = XAnimGetGraftAnimIndex(animInfoIndex);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [rdi+3Ch]
    }
    v22 = v20;
    graftAnimIndex[0] = v20;
    if ( v19 )
    {
      __asm { vucomiss xmm6, dword ptr [rdi+38h] }
      if ( v19 )
      {
        __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
        XAnimClearTreeGoalWeightsNode(v17->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
LABEL_91:
        __asm { vmovaps xmm6, xmmword ptr [rsp+450h+var_58+8] }
        return;
      }
    }
    else
    {
      __asm { vucomiss xmm6, dword ptr [rdi+38h] }
      if ( v19 )
      {
        v24 = 1;
LABEL_8:
        if ( *((_BYTE *)_R15 + 21) && v24 )
        {
          __asm { vmovss  xmm2, dword ptr [rdi+34h]; blendTime }
          XAnimClearTreeGoalWeightsNode(v17->tree, animInfoIndex, *(float *)&_XMM2, 0, LINEAR);
          goto LABEL_91;
        }
        InfoIndex = XAnimGetInfoIndex(v17->tree, v22, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex);
        __asm { vucomiss xmm6, dword ptr [rdi+38h] }
        if ( v19 && InfoIndex != animInfoIndex || *((_BYTE *)_R15 + 33) )
          goto LABEL_91;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        v29 = *((_DWORD *)_R15 + 3);
        __asm
        {
          vmovaps [rsp+450h+var_88+8], xmm9
          vmovaps [rsp+450h+var_98+8], xmm10
          vmulss  xmm10, xmm0, cs:__real@3a83126f
        }
        if ( (!v29 || v29 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 409, ASSERT_TYPE_ASSERT, "(node->coords != ( static_cast< scr_string_t >( 0 ) ) && node->coords != scr_const._)", (const char *)&queryFormat, "node->coords != NULL_SCR_STRING && node->coords != scr_const._") )
          __debugbreak();
        FloatFieldArray = XAnimNode_GetFloatFieldArray((scr_string_t)*((_DWORD *)_R15 + 3));
        if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 412, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
          __debugbreak();
        v32 = *((_DWORD *)_R15 + 7);
        size = FloatFieldArray->size;
        __asm { vmovss  xmm9, dword ptr [r15+18h] }
        if ( v32 )
        {
          _RBX = XAnimNode_GetUIntFieldArray(v32);
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 421, ASSERT_TYPE_ASSERT, "(childAnimArray)", (const char *)&queryFormat, "childAnimArray") )
            __debugbreak();
          _RCX = (int *)&v125;
          v37 = 6i64;
          do
          {
            _RCX += 32;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbx]
              vmovups xmm1, xmmword ptr [rbx+70h]
            }
            _RBX = (const XAnimFieldArray<unsigned int> *)((char *)_RBX + 128);
            __asm
            {
              vmovups ymmword ptr [rcx-80h], ymm0
              vmovups ymm0, ymmword ptr [rbx-60h]
              vmovups ymmword ptr [rcx-60h], ymm0
              vmovups ymm0, ymmword ptr [rbx-40h]
              vmovups ymmword ptr [rcx-40h], ymm0
              vmovups xmm0, xmmword ptr [rbx-20h]
              vmovups xmmword ptr [rcx-20h], xmm0
              vmovups xmmword ptr [rcx-10h], xmm1
            }
            --v37;
          }
          while ( v37 );
          *_RCX = _RBX->size;
        }
        else
        {
          tree = v17->tree;
          if ( !v17->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 429, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
            __debugbreak();
          SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RDI->subTreeID);
          if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 432, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
            __debugbreak();
          v45 = 0;
          if ( size )
          {
            v46 = animIndex;
            do
            {
              ChildAt = XAnimGetChildAt(SubTreeAnims, _RDI->animIndex, v45++);
              *v46++ = ChildAt;
            }
            while ( v45 < size );
            v22 = graftAnimIndex[0];
          }
          v17 = *(const DObj **)childAnimIndex;
          v125 = size;
        }
        outOutsideRange[0] = 0;
        *(_QWORD *)outChildIndex = 0i64;
        __asm
        {
          vmovaps xmm1, xmm9; value
          vmovss  dword ptr [rbp+350h+weights], xmm6
          vmovss  dword ptr [rbp+350h+weights+4], xmm6
        }
        v49 = XAnimBlendSpace1D_CalcWeights(FloatFieldArray, *(float *)&_XMM1, &weights, outOutsideRange, outChildIndex);
        if ( outOutsideRange[0] )
        {
          v50 = outChildIndex[0];
          if ( outChildIndex[0] >= size )
          {
            LODWORD(v110) = outChildIndex[0];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 450, ASSERT_TYPE_ASSERT, "(unsigned)( childIndex[0] ) < (unsigned)( numPoints )", "childIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v110, size) )
              __debugbreak();
          }
          v51 = _RDI->animIndex;
          subTreeID = _RDI->subTreeID;
          v53 = v17->tree;
          __asm { vmovss  dword ptr [rsp+450h+curveID], xmm10 }
          v54 = animIndex[v50];
          childAnimIndex[0] = v54;
          XAnimClearChildGoalWeights(v53, v22, subTreeID, v51, curveID, LINEAR);
          v55 = v17->tree;
          notifyType = 0;
          v57 = _RDI->notifyName;
          notifyName = 0;
          LODWORD(v121) = 0;
          v59 = -1;
          outChildIndex[0] = 0;
          v60 = v55->owner[0];
          if ( v60 == 1 )
          {
            v61 = _RDI->notifyType == 0;
          }
          else
          {
            if ( v60 )
              goto LABEL_48;
            v61 = v57 == 0;
          }
          if ( v61 )
          {
LABEL_60:
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+40h]
              vmovss  xmm1, cs:__real@3f800000
              vmovss  [rsp+450h+rate], xmm0
              vmovss  dword ptr [rsp+450h+var_428], xmm10
              vmovss  dword ptr [rsp+450h+curveID], xmm1
            }
            XAnimSetGoalWeight(v17, graftAnimIndex[0], _RDI->subTreeID, v54, curveIDa, v111, ratea, notifyName, notifyType, 0, LINEAR, cachedModelNameMap);
            XAnimBlendSpace_HandleServerNotifyChild(v17->tree, _RDI, graftAnimIndex[0], *((_BYTE *)_R15 + 20), childAnimIndex, v59);
LABEL_90:
            __asm
            {
              vmovaps xmm10, [rsp+450h+var_98+8]
              vmovss  dword ptr [r15+24h], xmm9
              vmovaps xmm9, [rsp+450h+var_88+8]
            }
            goto LABEL_91;
          }
LABEL_48:
          if ( *((_BYTE *)_R15 + 20) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+350h+weights]
              vcomiss xmm0, xmm6
            }
            if ( *((_BYTE *)_R15 + 20) )
            {
              notifyType = v60 == 1;
              notifyName = v57;
            }
          }
          else
          {
            __asm { vmovss  xmm1, cs:__real@ff7fffff }
            v64 = -1;
            _RDX = &weights;
            v66 = 1;
            v67 = 0;
            do
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdx]
                vcomiss xmm0, xmm1
              }
              v69 = v67;
              _RDX = (vec2_t *)((char *)_RDX + 4);
              if ( v66 )
                v69 = v64;
              ++v67;
              v64 = v69;
              __asm
              {
                vmaxss  xmm2, xmm0, xmm1
                vmovaps xmm1, xmm2
              }
              v66 = v67 <= 1;
            }
            while ( !v67 );
            __asm { vcomiss xmm2, xmm6 }
            if ( v67 > 1 )
            {
              if ( v60 )
              {
                childAnimIndex[v69 - 2] = v60 == 1;
                notifyType = v121;
                outChildIndex[v69] = v57;
                notifyName = outChildIndex[0];
              }
              else if ( v57 )
              {
                v59 = v69;
              }
            }
          }
          goto LABEL_60;
        }
        if ( !v49 )
          goto LABEL_90;
        v73 = outChildIndex[0];
        __asm
        {
          vmovaps [rsp+450h+var_68+8], xmm7
          vmovaps [rsp+450h+var_78+8], xmm8
        }
        if ( outChildIndex[0] >= size )
        {
          LODWORD(v110) = outChildIndex[0];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( childIndex[0] ) < (unsigned)( numPoints )", "childIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v110, size) )
            __debugbreak();
        }
        v74 = outChildIndex[1];
        if ( outChildIndex[1] >= size )
        {
          LODWORD(rate) = size;
          LODWORD(v110) = outChildIndex[1];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( childIndex[1] ) < (unsigned)( numPoints )", "childIndex[1] doesn't index numPoints\n\t%i not in [0, %i)", v110, rate) )
            __debugbreak();
        }
        v75 = v17->tree;
        v76 = -1;
        v77 = animIndex[v74];
        v78 = _RDI->notifyName;
        __asm { vmovss  xmm7, dword ptr [rbp+350h+weights+4] }
        v80 = v17->tree->owner[0];
        __asm { vmovss  xmm8, dword ptr [rbp+350h+weights] }
        childAnimIndex[1] = v77;
        v82 = animIndex[v73];
        childAnimIndex[0] = v82;
        v121 = 0i64;
        *(_QWORD *)outChildIndex = 0i64;
        if ( v80 == 1 )
        {
          v83 = _RDI->notifyType == 0;
        }
        else
        {
          if ( v80 )
            goto LABEL_73;
          v83 = v78 == 0;
        }
        if ( v83 )
        {
LABEL_89:
          __asm { vmovss  dword ptr [rsp+450h+curveID], xmm10 }
          XAnimClearChildGoalWeights(v75, graftAnimIndex[0], (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex, curveIDb, LINEAR);
          v95 = v82;
          __asm { vmovss  xmm0, dword ptr [r15+10h] }
          v97 = cachedModelNameMap;
          v98 = graftAnimIndex[0];
          __asm
          {
            vmovss  [rsp+450h+rate], xmm0
            vmovss  dword ptr [rsp+450h+var_428], xmm10
            vmovss  dword ptr [rsp+450h+curveID], xmm8
          }
          XAnimSetGoalWeight(v17, graftAnimIndex[0], _RDI->subTreeID, v95, curveIDc, v112, rateb, (scr_string_t)outChildIndex[0], v121, 0, LINEAR, cachedModelNameMap);
          __asm
          {
            vmovss  xmm0, dword ptr [r15+10h]
            vmovss  [rsp+450h+rate], xmm0
            vmovss  dword ptr [rsp+450h+var_428], xmm10
            vmovss  dword ptr [rsp+450h+curveID], xmm7
          }
          XAnimSetGoalWeight(v17, v98, _RDI->subTreeID, v77, curveIDd, v113, ratec, (scr_string_t)outChildIndex[1], HIDWORD(v121), 0, LINEAR, v97);
          XAnimBlendSpace_HandleServerNotifyChild(v17->tree, _RDI, v98, *((_BYTE *)_R15 + 20), childAnimIndex, v76);
          __asm
          {
            vmovaps xmm8, [rsp+450h+var_78+8]
            vmovaps xmm7, [rsp+450h+var_68+8]
          }
          goto LABEL_90;
        }
LABEL_73:
        v84 = *((_BYTE *)_R15 + 20) == 0;
        if ( *((_BYTE *)_R15 + 20) )
        {
          __asm { vcomiss xmm8, xmm6 }
          if ( *((_BYTE *)_R15 + 20) )
          {
            LODWORD(v121) = v80 == 1;
            outChildIndex[0] = v78;
          }
          __asm { vcomiss xmm7, xmm6 }
          if ( !v84 )
          {
            HIDWORD(v121) = v80 == 1;
            outChildIndex[1] = v78;
          }
        }
        else
        {
          __asm { vmovss  xmm3, cs:__real@ff7fffff }
          LODWORD(v86) = -1;
          v87 = 1;
          _RDX = 0i64;
          do
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+rdx*4+350h+weights]
              vcomiss xmm1, xmm3
            }
            _RCX = (unsigned int)(_RDX + 1);
            v91 = _RDX;
            __asm { vmovss  xmm0, dword ptr [rbp+rcx*4+350h+weights] }
            if ( v87 )
              v91 = v86;
            v86 = (unsigned int)_RCX;
            __asm
            {
              vmaxss  xmm2, xmm3, xmm1
              vcomiss xmm0, xmm2
              vmaxss  xmm4, xmm2, xmm0
            }
            if ( v87 )
              v86 = v91;
            _RDX = (unsigned int)(_RDX + 2);
            __asm { vmovaps xmm3, xmm4 }
            v87 = (unsigned int)_RDX <= 2;
          }
          while ( (unsigned int)_RDX < 2 );
          __asm { vcomiss xmm4, xmm6 }
          if ( (unsigned int)_RDX > 2 )
          {
            if ( v80 )
            {
              childAnimIndex[v86 - 2] = v80 == 1;
              outChildIndex[v86] = v78;
            }
            else if ( v78 )
            {
              v76 = v86;
            }
          }
        }
        goto LABEL_89;
      }
    }
    v24 = 0;
    goto LABEL_8;
  }
}

/*
==============
XAnimBlendSpace1D_Read
==============
*/
void XAnimBlendSpace1D_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  *((_DWORD *)nodeData + 7) = 0;
  _RDI = nodeData;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[2] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+18h], xmm0 }
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 32) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 33) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 20) = p;
  MemFile_ReadData(memFile, 8ui64, _RDI);
  _RDI[3] = XAnimReadConstStringOfSize(memFile);
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( (_BYTE)p )
    _RDI[7] = XAnimReadConstStringOfSize(memFile);
}

/*
==============
XAnimBlendSpace1D_Write
==============
*/
void XAnimBlendSpace1D_Write(void *nodeData, MemoryFile *memFile)
{
  int v2; 
  int p; 

  v2 = *((_DWORD *)nodeData + 7);
  _RSI = nodeData;
  p = *((_DWORD *)nodeData + 2);
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rsi+18h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = *((_BYTE *)_RSI + 32);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)_RSI + 33);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)_RSI + 20);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 8ui64, _RSI);
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RSI + 3));
  LOBYTE(p) = v2 != 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v2 )
    XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RSI + 7));
}

/*
==============
XAnimBlendSpace1D_Init
==============
*/
void XAnimBlendSpace1D_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const XAnimTypeFields *TypeFieldsForNodeType; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 158, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 159, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( anims->subTreeID > 0x80u || XAnimBlendSpace1D_ValidateConstParameters(anims, v3, *((const scr_string_t *)nodeData + 3), (const vec2_t *)nodeData) )
  {
    *((_DWORD *)nodeData + 7) = 0;
    *((_WORD *)nodeData + 16) = 1;
    TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v3].nodeType);
    if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 180, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
      __debugbreak();
    if ( !XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v3, scr_const.xanimBlendSpaceRate, TypeFieldsForNodeType) )
      *((_DWORD *)nodeData + 4) = 1065353216;
  }
  else
  {
    *((_BYTE *)nodeData + 32) = 0;
  }
}

/*
==============
XAnimBlendSpace1D_PostParse
==============
*/
bool XAnimBlendSpace1D_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  bool v7; 
  __int64 int32Value; 
  __int64 v12; 
  vec2_t range; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 119, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v12) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v12, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 125, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpaceCoords, TypeFieldsForNodeType);
  if ( !XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpace1DRange, TypeFieldsForNodeType) )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 132, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace. Range not specified.");
LABEL_14:
    if ( v7 )
      __debugbreak();
    return 0;
  }
  if ( !ConstantBindParameterByFieldNameAllBindings )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 138, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace. Coords is not specified.");
    goto LABEL_14;
  }
  int32Value = ConstantBindParameterByFieldNameAllBindings->constant.int32Value;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  xmm1, dword ptr [rax+0Ch]
    vmovss  dword ptr [rsp+78h+range], xmm0
    vmovss  dword ptr [rsp+78h+range+4], xmm1
  }
  if ( (unsigned int)int32Value > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum scr_string_t __cdecl truncate_cast_impl<enum scr_string_t,unsigned int>(unsigned int)", "signed", int32Value, "unsigned", (unsigned int)int32Value) )
    __debugbreak();
  return XAnimBlendSpace1D_ValidateConstParameters(anims, v2, (const scr_string_t)int32Value, &range);
}

/*
==============
XAnimBlendSpace1D_PrintDebug
==============
*/
void XAnimBlendSpace1D_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  const dvar_t *v10; 
  unsigned int flags; 
  char v12; 
  __int64 v13; 
  const char *v18; 
  char *fmt; 
  double v20; 

  v6 = size;
  _RBP = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 627, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 628, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 629, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 630, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 631, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_xanim_display_blendspaces_info;
  if ( !DCONST_DVARBOOL_xanim_display_blendspaces_info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_display_blendspaces_info") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  if ( v10->current.enabled )
  {
    if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 639, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    v12 = _RBP[32];
    if ( v12 )
    {
      if ( depth > 0 )
      {
        v13 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
          --v13;
        }
        while ( v13 );
        v12 = _RBP[32];
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+18h]
        vmovss  xmm1, dword ptr [rbp+24h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm1, xmm1
      }
      v18 = "false";
      if ( v12 )
        v18 = "true";
      __asm
      {
        vmovsd  [rsp+58h+var_30], xmm0
        vmovsd  [rsp+58h+fmt], xmm1
      }
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "  [oldValue: %.2f - curValue: %.2f - init: %s]\n", *(double *)&fmt, v20, v18);
    }
  }
}

/*
==============
XAnimBlendSpace1D_CalcWeights
==============
*/

__int64 __fastcall XAnimBlendSpace1D_CalcWeights(const XAnimFieldArray<float> *coords, double value, vec2_t *weights, bool *outOutsideRange, unsigned int *outChildIndex)
{
  __int64 result; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RDI = coords;
  __asm { vmovaps xmm6, xmm1 }
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 299, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !outOutsideRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 300, ASSERT_TYPE_ASSERT, "(outOutsideRange)", (const char *)&queryFormat, "outOutsideRange") )
    __debugbreak();
  if ( !outChildIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 301, ASSERT_TYPE_ASSERT, "(outChildIndex)", (const char *)&queryFormat, "outChildIndex") )
    __debugbreak();
  result = 0i64;
  *weights = 0i64;
  *(_QWORD *)outChildIndex = 0i64;
  __asm { vcomiss xmm6, dword ptr [rdi+4] }
  *outOutsideRange = 1;
  weights->v[0] = 1.0;
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
XAnimBlendSpace1D_Register
==============
*/
void XAnimBlendSpace1D_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimBlendSpace1D>::ms_typeInfo);
}

/*
==============
XAnimBlendSpace1D_ValidateConstParameters
==============
*/
bool XAnimBlendSpace1D_ValidateConstParameters(const XAnim_s *anims, unsigned int animIndex, const scr_string_t coordsSrt, const vec2_t *range)
{
  __int64 v6; 
  bool v10; 
  bool v11; 
  bool v14; 
  unsigned int size; 
  const char *v17; 
  unsigned int numAnims; 
  unsigned int ChildAt; 
  const char *v21; 
  const char *v22; 
  bool v23; 
  bool v24; 
  unsigned int v27; 
  bool v28; 
  bool result; 
  const char *v33; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *AnimDebugName; 
  double v40; 
  int destPos[4]; 
  char dest[2048]; 

  v6 = animIndex;
  _RBP = range;
  v10 = anims == NULL;
  if ( !anims )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 44, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
    vmovaps [rsp+8B8h+var_48], xmm6
  }
  if ( !v10 )
    __asm { vucomiss xmm1, dword ptr [rbp+4] }
  __asm { vcomiss xmm0, dword ptr [rbp+4] }
  if ( v10 )
  {
    if ( !coordsSrt || coordsSrt == scr_const._ )
    {
      AnimDebugName = XAnimGetAnimDebugName(anims, v6);
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 54, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Coords property is required.", AnimDebugName);
    }
    else
    {
      _RSI = XAnimNode_GetFloatFieldArray(coordsSrt);
      size = _RSI->size;
      if ( _RSI->size >= 2 )
      {
        if ( size < 0x10 )
        {
          _RBX = 0i64;
          numAnims = anims->entries[v6].numAnims;
          if ( numAnims >= size )
          {
            v23 = 0;
            v24 = size == 0;
            __asm { vmovss  xmm0, dword ptr [rbp+0] }
            do
            {
              __asm
              {
                vmovss  xmm6, dword ptr [rsi+rbx*4+4]
                vcomiss xmm6, xmm0
              }
              if ( v23 )
                goto LABEL_29;
              __asm { vcomiss xmm6, dword ptr [rbp+4] }
              if ( !v24 )
              {
LABEL_29:
                v33 = XAnimGetAnimDebugName(anims, v6);
                __asm
                {
                  vcvtss2sd xmm0, xmm6, xmm6
                  vmovsd  [rsp+8B8h+var_888], xmm0
                }
                v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 96, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Out of range coordinate value '%f'. ", v33, v40);
                goto LABEL_32;
              }
              _RBX = (unsigned int)(_RBX + 1);
              v23 = (unsigned int)_RBX < size;
              v24 = (unsigned int)_RBX <= size;
            }
            while ( (unsigned int)_RBX < size );
            v27 = 1;
            v28 = size <= 1;
            _R8 = &_RSI->values[1];
            while ( 1 )
            {
              __asm { vmovss  xmm0, dword ptr [r8] }
              _RAX = v27 - 1;
              __asm { vcomiss xmm0, dword ptr [rsi+rax*4+4] }
              if ( v28 )
                break;
              ++v27;
              ++_R8;
              v28 = v27 <= size;
              if ( v27 >= size )
              {
                result = 1;
                goto LABEL_35;
              }
            }
            v38 = XAnimGetAnimDebugName(anims, v6);
            v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 106, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Repeated coordinate values or not sorted. ", v38);
          }
          else
          {
            destPos[0] = 0;
            if ( numAnims )
            {
              do
              {
                ChildAt = XAnimGetChildAt(anims, v6, _RBX);
                v21 = XAnimGetAnimDebugName(anims, ChildAt);
                Com_sprintfPos_truncate(dest, 0x800ui64, destPos, "'%s', ", v21);
                numAnims = anims->entries[v6].numAnims;
                LODWORD(_RBX) = _RBX + 1;
              }
              while ( (unsigned int)_RBX < numAnims );
              size = _RSI->size;
            }
            v22 = XAnimGetAnimDebugName(anims, v6);
            v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 87, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. 1D Blendspace node requires at least %d child anim nodes. Found %d child anims: [%s]\n", v22, size, (unsigned __int16)numAnims, dest);
          }
        }
        else
        {
          v17 = XAnimGetAnimDebugName(anims, v6);
          v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 70, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Max number of node coordinates supported by the blendspace node is '%d'.", v17, 16);
        }
      }
      else
      {
        v37 = XAnimGetAnimDebugName(anims, v6);
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 63, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Blendspace requires at least two coordinates.", v37);
      }
    }
  }
  else
  {
    v36 = XAnimGetAnimDebugName(anims, v6);
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 48, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Range is invalid.", v36);
  }
LABEL_32:
  if ( v14 )
    __debugbreak();
  result = 0;
LABEL_35:
  __asm { vmovaps xmm6, [rsp+8B8h+var_48] }
  return result;
}

/*
==============
XAnimBlendSpace_GetLength
==============
*/
double XAnimBlendSpace_GetLength(const XAnim_s *anims, unsigned int animIndex)
{
  unsigned int ChildAt; 
  __int64 v6; 
  __int64 v7; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 737, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 738, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", animIndex, anims->size) )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(v7) = anims->size;
    LODWORD(v6) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace2D) && !XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace1D) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 740, ASSERT_TYPE_ASSERT, "(XAnimBlendSpace_IsBlendspaceNode( anims, animIndex ))", (const char *)&queryFormat, "XAnimBlendSpace_IsBlendspaceNode( anims, animIndex )") )
    __debugbreak();
  ChildAt = XAnimGetChildAt(anims, animIndex, 0);
  return XAnimGetLength(anims, ChildAt);
}

/*
==============
XAnimBlendSpace_GetLengthMsec
==============
*/
int XAnimBlendSpace_GetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  unsigned int ChildAt; 
  int result; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 737, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( anim >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 738, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", anim, anims->size) )
    __debugbreak();
  if ( !XAnimBlendSpace_IsBlendspaceNode(anims, anim) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 740, ASSERT_TYPE_ASSERT, "(XAnimBlendSpace_IsBlendspaceNode( anims, animIndex ))", (const char *)&queryFormat, "XAnimBlendSpace_IsBlendspaceNode( anims, animIndex )") )
    __debugbreak();
  ChildAt = XAnimGetChildAt(anims, anim, 0);
  *(double *)&_XMM0 = XAnimGetLength(anims, ChildAt);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
XAnimBlendSpace_GetNotifyParameters
==============
*/
void XAnimBlendSpace_GetNotifyParameters(const XAnimInfo *animInfo, XAnimOwner owner, scr_string_t notifyName, bool allAnimsNotify, unsigned int numAnims, float *weights, unsigned int *outNotifyTypes, scr_string_t *outNotifyNames, unsigned int *outMaxAnimIndex)
{
  char v14; 
  __int64 v16; 
  unsigned int *v17; 
  int v18; 
  bool v19; 
  __int64 v20; 
  BOOL v21; 
  bool v23; 
  bool v26; 
  unsigned int v27; 
  int v33; 
  int v34; 
  int v36; 
  bool v41; 
  int v43; 

  v14 = owner;
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 197, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !weights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 198, ASSERT_TYPE_ASSERT, "(weights)", (const char *)&queryFormat, "weights") )
    __debugbreak();
  _RDI = outNotifyTypes;
  if ( !outNotifyTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 199, ASSERT_TYPE_ASSERT, "(outNotifyTypes)", (const char *)&queryFormat, "outNotifyTypes") )
    __debugbreak();
  if ( !outNotifyNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 200, ASSERT_TYPE_ASSERT, "(outNotifyNames)", (const char *)&queryFormat, "outNotifyNames") )
    __debugbreak();
  if ( !outMaxAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 201, ASSERT_TYPE_ASSERT, "(outMaxAnimIndex)", (const char *)&queryFormat, "outMaxAnimIndex") )
    __debugbreak();
  v16 = numAnims;
  memset_0(outNotifyTypes, 0, 4i64 * numAnims);
  memset_0(outNotifyNames, 0, 4i64 * numAnims);
  v17 = outMaxAnimIndex;
  v18 = -1;
  *outMaxAnimIndex = -1;
  if ( v14 == 1 )
  {
    v19 = animInfo->notifyType == 0;
    goto LABEL_20;
  }
  if ( !v14 )
  {
    v19 = notifyName == 0;
LABEL_20:
    if ( v19 )
      return;
  }
  v20 = 0i64;
  v21 = v14 == 1;
  if ( allAnimsNotify )
  {
    if ( numAnims )
    {
      _R14 = (char *)weights - (char *)outNotifyTypes;
      v23 = outNotifyNames < (scr_string_t *)outNotifyTypes;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      do
      {
        __asm { vcomiss xmm0, dword ptr [r14+rdi] }
        if ( v23 )
        {
          *_RDI = v21;
          *(unsigned int *)((char *)_RDI + (char *)outNotifyNames - (char *)outNotifyTypes) = notifyName;
        }
        ++_RDI;
        v23 = v16-- == 0;
      }
      while ( v16 );
    }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+98h+var_58], xmm7
      vmovss  xmm7, cs:__real@ff7fffff
    }
    v26 = numAnims <= 4;
    if ( numAnims >= 4 )
    {
      __asm { vmovaps [rsp+98h+var_48], xmm6 }
      v27 = numAnims - 3;
      __asm { vmovaps [rsp+98h+var_68], xmm8 }
      _R10 = weights + 2;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r10-8]
          vmovss  xmm1, dword ptr [r10-4]
          vmovss  xmm2, dword ptr [r10]
          vmovss  xmm4, dword ptr [r10+4]
          vcomiss xmm0, xmm7
          vmaxss  xmm3, xmm0, xmm7
        }
        v33 = v20;
        v34 = v20 + 1;
        if ( v26 )
          v33 = v18;
        _R10 += 4;
        __asm
        {
          vcomiss xmm1, xmm3
          vmaxss  xmm5, xmm3, xmm1
        }
        if ( v26 )
          v34 = v33;
        v18 = v20 + 3;
        __asm { vcomiss xmm2, xmm5 }
        v36 = v20 + 2;
        if ( v26 )
          v36 = v34;
        __asm
        {
          vmaxss  xmm6, xmm2, xmm5
          vcomiss xmm4, xmm6
          vmaxss  xmm8, xmm4, xmm6
        }
        if ( v26 )
          v18 = v36;
        v20 = (unsigned int)(v20 + 4);
        __asm { vmovaps xmm7, xmm8 }
        v26 = (unsigned int)v20 <= v27;
      }
      while ( (unsigned int)v20 < v27 );
      v17 = outMaxAnimIndex;
      __asm
      {
        vmovaps xmm8, [rsp+98h+var_68]
        vmovaps xmm6, [rsp+98h+var_48]
      }
    }
    v41 = (unsigned int)v20 <= numAnims;
    if ( (unsigned int)v20 < numAnims )
    {
      _RCX = &weights[v20];
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx]
          vcomiss xmm0, xmm7
        }
        v43 = v20;
        ++_RCX;
        if ( v41 )
          v43 = v18;
        LODWORD(v20) = v20 + 1;
        v18 = v43;
        __asm
        {
          vmaxss  xmm1, xmm0, xmm7
          vmovaps xmm7, xmm1
        }
        v41 = (unsigned int)v20 <= numAnims;
      }
      while ( (unsigned int)v20 < numAnims );
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm7, xmm0
      vmovaps xmm7, [rsp+98h+var_58]
    }
    if ( !v41 )
    {
      if ( v14 )
      {
        outNotifyTypes[v18] = v21;
        outNotifyNames[v18] = notifyName;
      }
      else if ( notifyName )
      {
        *v17 = v18;
      }
    }
  }
}

/*
==============
XAnimBlendSpace_HandleServerNotifyChild
==============
*/
void XAnimBlendSpace_HandleServerNotifyChild(const XAnimTree *tree, XAnimInfo *animInfo, unsigned int graftIndex, bool allAnimsNotify, const unsigned int *childAnimIndex, unsigned int maxWeightAnimIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 273, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 274, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !childAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 275, ASSERT_TYPE_ASSERT, "(childAnimIndex)", (const char *)&queryFormat, "childAnimIndex") )
    __debugbreak();
  if ( !allAnimsNotify && maxWeightAnimIndex != -1 )
  {
    if ( tree->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 285, ASSERT_TYPE_ASSERT, "(tree->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "tree->owner == XAnimOwner::SERVER") )
      __debugbreak();
    InfoIndex = XAnimGetInfoIndex(tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, childAnimIndex[maxWeightAnimIndex]);
    if ( InfoIndex )
      animInfo->notifyChild = XAnimGetDescendantWithGreatestWeight<1>(InfoIndex);
  }
}

/*
==============
XAnimBlendSpace_IsBlendspaceNode
==============
*/
bool XAnimBlendSpace_IsBlendspaceNode(const XAnim_s *anims, const unsigned int animIndex)
{
  bool result; 
  __int64 v5; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 656, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(v5) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, anims->size) )
      __debugbreak();
  }
  if ( XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace2D) )
    return 1;
  result = XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace1D);
  if ( result )
    return 1;
  return result;
}

/*
==============
XAnimBlendSpace_SetAnims
==============
*/
void XAnimBlendSpace_SetAnims(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, scr_string_t animArray)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  _BYTE *CustomNodeData; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  scr_string_t *v18; 
  scr_string_t *v19; 
  const char *AnimDebugName; 
  const XAnimFieldArray<unsigned int> *UIntFieldArray; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  const char *v23; 
  __int64 v24; 

  if ( !animArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 536, ASSERT_TYPE_ASSERT, "(animArray != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "animArray != NULL_SCR_STRING") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 541, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 544, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    AnimInfo = GetAnimInfo(InfoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 559, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 562, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    CustomNodeData = XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, AnimInfo->animIndex);
    if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 565, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
      __debugbreak();
    CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, AnimInfo);
    if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 568, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
      __debugbreak();
    if ( *CustomNodeTypeInfo->name == scr_const.xanimBlendSpace2D )
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 578, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v15 = 52i64;
      v16 = 24i64;
      v17 = 48i64;
    }
    else
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 586, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v15 = 32i64;
      v16 = 12i64;
      v17 = 28i64;
    }
    v18 = (scr_string_t *)&CustomNodeData[v17];
    v19 = (scr_string_t *)&CustomNodeData[v16];
    if ( !CustomNodeData[v15] )
    {
      AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, AnimInfo->animIndex);
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 596, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Blendspace node '%s' not initialized.", AnimDebugName) )
        return;
      goto LABEL_34;
    }
    UIntFieldArray = XAnimNode_GetUIntFieldArray(animArray);
    if ( !UIntFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 601, ASSERT_TYPE_ASSERT, "(childAnims)", (const char *)&queryFormat, "childAnims") )
      __debugbreak();
    if ( XAnimBlendSpace_ValidateChildAnims(SubTreeAnims, AnimInfo->animIndex, UIntFieldArray) )
    {
      if ( (!*v19 || *v19 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 608, ASSERT_TYPE_ASSERT, "(( *nodeCoords ) != ( static_cast< scr_string_t >( 0 ) ) && ( *nodeCoords ) != scr_const._)", (const char *)&queryFormat, "( *nodeCoords ) != NULL_SCR_STRING && ( *nodeCoords ) != scr_const._") )
        __debugbreak();
      FloatFieldArray = XAnimNode_GetFloatFieldArray(*v19);
      if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 611, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      if ( FloatFieldArray->size == UIntFieldArray->size )
      {
        *v18 = animArray;
      }
      else
      {
        v23 = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
        LODWORD(v24) = FloatFieldArray->size;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 615, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Num anims must be '%d' for blendspace node '%s'.", v24, v23) )
LABEL_34:
          __debugbreak();
      }
    }
  }
}

/*
==============
XAnimBlendSpace_ToggleUpdate
==============
*/
void XAnimBlendSpace_ToggleUpdate(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, bool enableUpdate)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  _BYTE *CustomNodeData; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 678, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 681, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    AnimInfo = GetAnimInfo(InfoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 696, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 699, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( XAnimBlendSpace_IsBlendspaceNode(SubTreeAnims, animIndex) )
    {
      CustomNodeData = XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, AnimInfo->animIndex);
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 707, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
        __debugbreak();
      CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, AnimInfo);
      if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 710, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
        __debugbreak();
      if ( *CustomNodeTypeInfo->name == scr_const.xanimBlendSpace2D )
      {
        if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 717, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CustomNodeData[52] )
          CustomNodeData[53] = !enableUpdate;
      }
      else
      {
        if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 726, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CustomNodeData[32] )
          CustomNodeData[33] = !enableUpdate;
      }
    }
  }
}

