/*
==============
R_InitSkinningConstantBuffers
==============
*/

void R_InitSkinningConstantBuffers(void)
{
  ?R_InitSkinningConstantBuffers@@YAXXZ();
}

/*
==============
R_ShutdownSkinningConstantBuffers
==============
*/

void R_ShutdownSkinningConstantBuffers(void)
{
  ?R_ShutdownSkinningConstantBuffers@@YAXXZ();
}

/*
==============
R_AddSkinningComputeCmds
==============
*/

bool __fastcall R_AddSkinningComputeCmds(ComputeCmdList *list, const vec3_t *viewOffset, const vec3_t *viewOffsetPrevFrame, void *modelSurfs, unsigned int surfBufSize, const DObjAnimMat *skelMatArray, const DObjAnimMat *skelMatArrayPrevFrame, const DObjPartBits *surfacePartBits, int partBitCount, unsigned __int16 surfCount, int objBufIndex, unsigned __int8 dismembermentPointCount, vec3_t *dismembermentPointsBuffer, unsigned __int8 *dismembermentIndicesBuffer, const float *dobjBlendShapeWeights, const unsigned __int16 dobjBlendShapeTargetCount, const int entnum, const XModel *const *models, unsigned int numModels, const unsigned __int8 *surfModelIndex)
{
  return ?R_AddSkinningComputeCmds@@YA_NPEAUComputeCmdList@@AEBTvec3_t@@1PEIAXIPEBUDObjAnimMat@@3PEBUDObjPartBits@@HGHEPEAT2@PEAEPEBMGHPEBQEBUXModel@@IPEBE@Z(list, viewOffset, viewOffsetPrevFrame, modelSurfs, surfBufSize, skelMatArray, skelMatArrayPrevFrame, surfacePartBits, partBitCount, surfCount, objBufIndex, dismembermentPointCount, dismembermentPointsBuffer, dismembermentIndicesBuffer, dobjBlendShapeWeights, dobjBlendShapeTargetCount, entnum, models, numModels, surfModelIndex);
}

/*
==============
R_SkinXModelCmd
==============
*/

void __fastcall R_SkinXModelCmd(const void *const data)
{
  ?R_SkinXModelCmd@@YAXQEBX@Z(data);
}

/*
==============
Float4QuatRotateInv
==============
*/

void __fastcall Float4QuatRotateInv(const float4 *outResult, const float4 *a2, float4 *a3)
{
  ?Float4QuatRotateInv@@YQXUfloat4@@0AEAU1@@Z(outResult, a2, a3);
}

/*
==============
R_ExecuteSkinningComputeCmds
==============
*/

void __fastcall R_ExecuteSkinningComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ExecuteSkinningComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(state, list, type, header);
}

/*
==============
Float4QuatRotateInv
==============
*/
void Float4QuatRotateInv(const float4 *outResult, const float4 *a2, float4 *_R8)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps [rsp+48h+var_38], xmm8
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm1, xmm1, 0D2h ; 'Ò'
    vshufps xmm2, xmm1, xmm1, 0C9h ; 'É'
    vmulps  xmm4, xmm0, xmm6
    vmulps  xmm3, xmm2, xmm7
    vsubps  xmm0, xmm4, xmm3
    vaddps  xmm2, xmm0, xmm0
    vmovups xmm8, xmm1
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm1, xmm0, xmm5
    vmulps  xmm1, xmm2, xmm1
    vshufps xmm0, xmm2, xmm2, 0D2h ; 'Ò'
    vaddps  xmm4, xmm1, xmm8
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm3, xmm0, xmm4
    vmovups xmmword ptr [r8], xmm3
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm8, [rsp+48h+var_38]
  }
}

/*
==============
R_AddSkinningComputeCmds
==============
*/
bool R_AddSkinningComputeCmds(ComputeCmdList *list, const vec3_t *viewOffset, const vec3_t *viewOffsetPrevFrame, void *modelSurfs, unsigned int surfBufSize, const DObjAnimMat *skelMatArray, const DObjAnimMat *skelMatArrayPrevFrame, const DObjPartBits *surfacePartBits, int partBitCount, unsigned __int16 surfCount, int objBufIndex, unsigned __int8 dismembermentPointCount, vec3_t *dismembermentPointsBuffer, unsigned __int8 *dismembermentIndicesBuffer, const float *dobjBlendShapeWeights, const unsigned __int16 dobjBlendShapeTargetCount, const int entnum, const XModel *const *models, unsigned int numModels, const unsigned __int8 *surfModelIndex)
{
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  char *v39; 
  int v40; 
  unsigned int v41; 
  int *v49; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  bool v57; 
  __int64 v58; 
  __int64 v59; 
  int v60; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  __int64 v65; 
  vector3 *v200; 
  signed int v204; 
  unsigned int v205; 
  bool v213; 
  bool v214; 
  bool v215; 
  bool v216; 
  bool v222; 
  bool v224; 
  const XModel *v227; 
  unsigned int v228; 
  const XModel *v250; 
  unsigned int v251; 
  __int64 v256; 
  unsigned int v275; 
  int v283; 
  char *v285; 
  int v293; 
  int v294; 
  __int64 v295; 
  unsigned int v296; 
  bool v297; 
  char v301; 
  const float4 *v302; 
  __int64 v304; 
  const Bounds *v307; 
  int v327; 
  __int64 v339; 
  __int64 v340; 
  __int64 v341; 
  __int64 v342; 
  __int64 v343; 
  __int64 v344; 
  __int64 v345; 
  double v346; 
  double v347; 
  __int64 v348; 
  __int64 v349; 
  double v350; 
  double v351; 
  bool v352; 
  int v353; 
  int v354; 
  int v355; 
  int v356; 
  int v357; 
  int v358; 
  unsigned int v359; 
  unsigned int v360; 
  unsigned int v361; 
  bool v362; 
  int v363; 
  int v364; 
  int v365; 
  int v366; 
  void *v367; 
  char *v369; 
  unsigned __int8 *v370; 
  unsigned __int8 *v371; 
  __int64 v373; 
  tmat33_t<vec3_t> bounds; 
  vec3_t origin; 
  vec3_t pos; 
  vec3_t v380; 
  __int128 v381; 
  char axis[48]; 

  _R12 = skelMatArray;
  _RSI = (unsigned int *)modelSurfs;
  v370 = NULL;
  v371 = NULL;
  Profile_Begin(67);
  if ( !surfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 3859, ASSERT_TYPE_ASSERT, "(surfCount)", (const char *)&queryFormat, "surfCount") )
    __debugbreak();
  v358 = 0;
  v35 = -1;
  v357 = -1;
  v36 = 0;
  v361 = -1;
  v37 = -1;
  v364 = 0;
  v38 = 0;
  v363 = 0;
  v367 = NULL;
  v369 = NULL;
  if ( dobjBlendShapeTargetCount )
  {
    if ( r_blendshape_enable->current.enabled )
    {
      v39 = (char *)R_AllocComputeCmdData(list, 4 * (unsigned int)dobjBlendShapeTargetCount);
      v369 = v39;
      if ( !v39 )
        return (char)v39;
      memcpy_0(v39, dobjBlendShapeWeights, 4i64 * dobjBlendShapeTargetCount);
      v38 = 0;
      v35 = -1;
      v36 = 0;
      v37 = -1;
    }
    else
    {
      v35 = -1;
    }
  }
  __asm { vmovaps [rsp+2B8h+var_38], xmm6 }
  v40 = -1;
  __asm { vmovaps [rsp+2B8h+var_48], xmm7 }
  v41 = 0;
  __asm
  {
    vmovaps [rsp+2B8h+var_58], xmm8
    vmovaps [rsp+2B8h+var_68], xmm9
    vmovaps [rsp+2B8h+var_78], xmm10
    vmovaps [rsp+2B8h+var_88], xmm11
    vmovaps [rsp+2B8h+var_98], xmm12
    vmovaps [rsp+2B8h+var_A8], xmm13
    vmovaps [rsp+2B8h+var_B8], xmm14
    vmovaps [rsp+2B8h+var_C8], xmm15
  }
  v352 = 0;
  v359 = -1;
  v360 = 0;
  __asm
  {
    vxorps  xmm15, xmm15, xmm15
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm11, xmm11, xmm11
  }
  if ( surfCount )
  {
    __asm
    {
      vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm14, cs:__real@40000000
      vmovss  xmm13, cs:__real@3a83126f
    }
    while ( 1 )
    {
      __asm { vmovsd  xmm8, cs:__real@3f30000000000000 }
      v49 = (int *)_RSI;
      if ( *_RSI == -3 )
      {
        ++_RSI;
      }
      else
      {
        if ( v35 != *((unsigned __int16 *)_RSI + 20) || v38 != *((unsigned __int16 *)_RSI + 22) || v37 != *((unsigned __int16 *)_RSI + 23) || v36 != *((unsigned __int16 *)_RSI + 24) )
        {
          v50 = *((unsigned __int16 *)_RSI + 20);
          v51 = v50;
          v357 = *((unsigned __int16 *)_RSI + 20);
          v358 = *((unsigned __int16 *)_RSI + 22);
          v52 = *((unsigned __int16 *)_RSI + 24) + v358;
          v361 = *((unsigned __int16 *)_RSI + 23);
          v363 = v52;
          v364 = *((unsigned __int16 *)_RSI + 24);
          if ( dismembermentPointCount )
          {
            v370 = &dismembermentIndicesBuffer[v50];
            v371 = &dismembermentIndicesBuffer[*((unsigned __int16 *)_RSI + 23)];
          }
          v367 = R_AllocComputeCmdDataAligned(list, 32 * v52, 0x10u);
          if ( !v367 )
          {
LABEL_116:
            Profile_EndInternal(NULL);
            LOBYTE(v39) = 0;
            goto LABEL_118;
          }
          __asm { vmovups xmm10, cs:__xmm@7f7fffff7f7fffff7f7fffff7f7fffff }
          v53 = v361;
          __asm { vmovups xmm11, cs:__xmm@ff7fffffff7fffffff7fffffff7fffff }
          v359 = surfModelIndex[v360];
          v352 = v359 != v40;
          if ( v358 )
            v53 = (unsigned int)v50;
          v54 = 0;
          _RCX = 32 * v53;
          __asm
          {
            vmovups xmm0, xmmword ptr [rcx+r12+10h]
            vmovups xmmword ptr [rsp+2B8h+bounds.midPoint], xmm0
          }
          v57 = (surfacePartBits->array[7] & 2) != 0;
          v362 = v57;
          if ( v52 )
          {
            v58 = (unsigned __int16)v361;
            v59 = v358;
            v60 = v361 - v358 - v50;
            v365 = v60;
            v61 = v50;
            v62 = (unsigned __int16)v361 - (__int64)v358 - v50;
            do
            {
              v63 = v54 + v50;
              v64 = v61 + v62;
              v65 = v61;
              if ( v61 - v51 >= v59 )
                v65 = v64;
              if ( v61 - v51 >= v59 )
                v63 += v60;
              if ( v63 >= partBitCount )
                goto LABEL_35;
              if ( (unsigned int)v63 >= 0x100 )
              {
                LODWORD(v342) = 256;
                LODWORD(v339) = v63;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v339, v342) )
                  __debugbreak();
                v58 = (unsigned __int16)v361;
                v57 = v362;
              }
              if ( ((0x80000000 >> (v63 & 0x1F)) & surfacePartBits->array[(unsigned __int64)(unsigned int)v63 >> 5]) != 0 )
              {
LABEL_35:
                if ( v57 || v65 < v58 )
                {
                  _R9 = *((_QWORD *)_RSI + 4);
                  _RBX = 32 * v65;
                  v373 = _R9;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r12]
                    vmovss  [rsp+2B8h+var_264], xmm0
                  }
                  if ( (v353 & 0x7F800000) == 2139095040 )
                    goto LABEL_40;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r12+4]
                    vmovss  [rsp+2B8h+var_264], xmm0
                  }
                  if ( (v354 & 0x7F800000) == 2139095040 )
                    goto LABEL_40;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r12+8]
                    vmovss  [rsp+2B8h+var_264], xmm0
                  }
                  if ( (v355 & 0x7F800000) == 2139095040 )
                    goto LABEL_40;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r12+0Ch]
                    vmovss  [rsp+2B8h+var_264], xmm0
                  }
                  if ( (v356 & 0x7F800000) == 2139095040 )
                  {
LABEL_40:
                    CrashReport_TriggerNow();
                    _R9 = v373;
                  }
                  _RDX = 32i64 * v63;
                  _R8 = 32i64 * v54;
                  __asm
                  {
                    vmovups xmm9, xmmword ptr [rdx+r12]
                    vmovups xmm7, xmmword ptr [r9+r8+10h]
                    vmovups xmm0, xmmword ptr [r9+r8]
                    vxorps  xmm8, xmm0, xmmword ptr cs:vNegateXYZ
                    vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm8
                    vshufps xmm4, xmm8, xmm8, 0C9h ; 'É'
                    vmulps  xmm1, xmm4, xmm7
                    vsubps  xmm3, xmm2, xmm1
                    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
                  }
                  _RCX = &models[v359]->boneInfo[v54];
                  __asm
                  {
                    vaddps  xmm5, xmm0, xmm0
                    vmulps  xmm1, xmm5, xmm4
                    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm8
                    vsubps  xmm4, xmm2, xmm1
                    vshufps xmm2, xmm4, xmm4, 0C9h ; 'É'
                    vshufps xmm6, xmm9, xmm9, 0FFh
                    vshufps xmm0, xmm8, xmm8, 0FFh
                    vmulps  xmm1, xmm0, xmm5
                    vaddps  xmm3, xmm1, xmm7
                    vaddps  xmm0, xmm3, xmm2
                    vxorps  xmm7, xmm0, xmmword ptr cs:vNegateXYZ
                    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
                    vshufps xmm2, xmm8, xmm8, 4Eh ; 'N'
                    vshufps xmm1, xmm8, xmm8, 0B1h ; '±'
                    vmulps  xmm1, xmm1, xmm0
                    vxorps  xmm3, xmm1, xmmword ptr cs:vNPPN
                    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
                    vmulps  xmm1, xmm2, xmm0
                    vxorps  xmm2, xmm1, xmmword ptr cs:vPPNN
                    vaddps  xmm5, xmm3, xmm2
                    vshufps xmm0, xmm9, xmm9, 0
                    vmulps  xmm2, xmm8, xmm6
                    vshufps xmm3, xmm8, xmm8, 1Bh
                    vmulps  xmm1, xmm3, xmm0
                    vxorps  xmm4, xmm1, xmmword ptr cs:vPNPN
                    vaddps  xmm0, xmm4, xmm2
                    vaddps  xmm1, xmm5, xmm0
                    vmovups [rsp+2B8h+var_1E8], xmm1
                    vshufps xmm5, xmm9, xmm9, 0C9h ; 'É'
                    vmulps  xmm1, xmm7, xmm5
                    vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm9
                    vsubps  xmm3, xmm2, xmm1
                    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
                    vaddps  xmm4, xmm0, xmm0
                    vmulps  xmm1, xmm4, xmm5
                    vmovups xmm5, xmmword ptr [rdx+r12]
                    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm9
                    vmovups xmm9, xmmword ptr [rcx+0Ch]
                    vsubps  xmm3, xmm2, xmm1
                    vmulps  xmm0, xmm4, xmm6
                    vaddps  xmm2, xmm0, xmm7
                    vmovups xmm7, xmmword ptr [rcx]
                    vshufps xmm1, xmm3, xmm3, 0C9h ; 'É'
                    vaddps  xmm3, xmm2, xmm1
                    vaddps  xmm15, xmm3, xmmword ptr [rdx+r12+10h]
                    vaddps  xmm4, xmm5, xmm5
                    vmulps  xmm0, xmm4, xmm5
                    vshufps xmm1, xmm0, xmm0, 1Ah
                    vshufps xmm0, xmm0, xmm0, 1
                    vaddps  xmm2, xmm1, xmm0
                    vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
                    vsubps  xmm6, xmm1, xmm2
                    vshufps xmm3, xmm5, xmm5, 0DAh ; 'Ú'
                    vshufps xmm0, xmm4, xmm4, 1
                    vmulps  xmm2, xmm3, xmm0
                    vshufps xmm1, xmm5, xmm5, 0FFh
                    vmulps  xmm0, xmm1, xmm4
                    vaddps  xmm3, xmm0, xmm2
                  }
                  _RAX = v367;
                  __asm
                  {
                    vsubps  xmm1, xmm2, xmm0
                    vshufps xmm0, xmm6, xmm3, 0A0h ; ' '
                    vshufps xmm14, xmm0, xmm1, 58h ; 'X'
                    vshufps xmm0, xmm1, xmm6, 5Ah ; 'Z'
                    vshufps xmm13, xmm0, xmm3, 8
                    vshufps xmm0, xmm3, xmm1, 5
                    vshufps xmm12, xmm0, xmm6, 0A8h ; '¨'
                    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
                    vandnps xmm5, xmm0, xmm13
                    vandnps xmm6, xmm0, xmm12
                    vshufps xmm4, xmm7, xmm7, 55h ; 'U'
                    vshufps xmm10, xmm7, xmm7, 0AAh ; 'ª'
                    vshufps xmm11, xmm9, xmm9, 0
                    vshufps xmm1, xmm7, xmm7, 0
                    vandnps xmm7, xmm0, xmm14
                    vmovups xmm0, xmmword ptr [rdx+r12+10h]
                    vsubps  xmm2, xmm0, xmmword ptr [rsp+2B8h+bounds.midPoint]
                    vmulps  xmm0, xmm4, xmm13
                    vshufps xmm8, xmm9, xmm9, 55h ; 'U'
                    vshufps xmm9, xmm9, xmm9, 0AAh ; 'ª'
                    vmovdqa xmmword ptr [rsp+2B8h+axis], xmm14
                    vmovdqa xmmword ptr [rsp+2B8h+axis], xmm1
                    vmulps  xmm1, xmm1, xmm14
                    vaddps  xmm3, xmm2, xmm1
                    vaddps  xmm2, xmm0, xmm3
                    vmulps  xmm1, xmm10, xmm12
                    vmulps  xmm3, xmm11, xmm7
                    vmulps  xmm0, xmm8, xmm5
                    vmovdqa xmmword ptr [rsp+2B8h+axis], xmm11
                    vmovdqa xmmword ptr [rsp+2B8h+axis+10h], xmm13
                    vmovdqa xmmword ptr [rsp+2B8h+axis+10h], xmm4
                    vaddps  xmm4, xmm1, xmm2
                    vaddps  xmm2, xmm0, xmm3
                    vmulps  xmm1, xmm9, xmm6
                    vaddps  xmm0, xmm1, xmm2
                    vaddps  xmm11, xmm4, xmm0
                    vmovdqa xmmword ptr [rsp+2B8h+axis+10h], xmm8
                    vmovdqa xmmword ptr [rsp+2B8h+axis+20h], xmm12
                    vmovdqa xmmword ptr [rsp+2B8h+axis+20h], xmm10
                    vsubps  xmm10, xmm4, xmm0
                    vshufps xmm0, xmm15, xmm15, 55h ; 'U'
                    vmovdqa xmmword ptr [rsp+2B8h+axis+10h], xmm5
                    vmovups xmm5, [rsp+2B8h+var_1E8]
                    vshufps xmm2, xmm5, xmm5, 1Bh
                    vshufps xmm1, xmm5, xmm5, 4Eh ; 'N'
                    vmulps  xmm1, xmm1, xmm0
                    vxorps  xmm3, xmm1, xmmword ptr cs:vPPNP
                    vshufps xmm0, xmm15, xmm15, 0
                    vmulps  xmm1, xmm2, xmm0
                    vxorps  xmm2, xmm1, xmmword ptr cs:vPNPP
                    vaddps  xmm4, xmm3, xmm2
                    vshufps xmm3, xmm5, xmm5, 0B1h ; '±'
                    vshufps xmm0, xmm15, xmm15, 0AAh ; 'ª'
                    vmulps  xmm1, xmm3, xmm0
                    vxorps  xmm2, xmm1, xmmword ptr cs:vNPPP
                    vaddps  xmm3, xmm4, xmm2
                    vmulps  xmm0, xmm3, xmmword ptr cs:vHalfXYZw
                    vmovdqa xmmword ptr [rsp+2B8h+axis+20h], xmm9
                    vmovntps xmmword ptr [r8+rax], xmm5
                    vmovntps xmmword ptr [r8+rax+10h], xmm0
                    vmovdqa xmmword ptr [rsp+2B8h+axis], xmm7
                    vmovdqa xmmword ptr [rsp+2B8h+axis+20h], xmm6
                  }
                }
              }
              v59 = v358;
              ++v54;
              v57 = v362;
              ++v61;
              LODWORD(v50) = v51;
              v60 = v365;
              v62 = (unsigned __int16)v361 - (__int64)v358 - v51;
              v58 = (unsigned __int16)v361;
            }
            while ( v54 < v363 );
            __asm
            {
              vmovsd  xmm8, cs:__real@3f30000000000000
              vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vmovss  xmm13, cs:__real@3a83126f
              vmovss  xmm14, cs:__real@40000000
              vxorps  xmm15, xmm15, xmm15
            }
            v49 = (int *)_RSI;
          }
          v41 = v360;
        }
        v200 = (vector3 *)*_RSI;
        if ( (int)v200 <= -4 )
        {
          if ( r_xdebugPack->current.integer >= 1 )
          {
            v302 = (const float4 *)*(unsigned __int8 *)(*((_QWORD *)_RSI + 7) + 8i64);
            if ( (_BYTE)v302 )
            {
              _RBX = _RSI + 25;
              v304 = (unsigned __int8)v302;
              do
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbx-18h]
                  vbroadcastss xmm6, dword ptr [rsi+48h]
                }
                Float4UnitQuatToAxis(v200, v302);
                v307 = (const Bounds *)*((_QWORD *)_RSI + 7);
                __asm
                {
                  vmulps  xmm5, xmm0, xmm6
                  vmovups xmmword ptr [rsp+2B8h+var_1B8], xmm0
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2sd xmm0, xmm0, dword ptr [rbx-8]
                  vmovups xmmword ptr [rsp+2B8h+var_1B8+10h], xmm1
                  vmovups ymm1, [rsp+2B8h+var_1B8]
                  vmovups ymmword ptr [rsp+2B8h+axis], ymm1
                  vmulps  xmm7, xmm6, xmmword ptr [rsp+2B8h+axis+10h]
                  vmulsd  xmm1, xmm0, xmm8
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2sd xmm0, xmm0, dword ptr [rbx-4]
                  vcvtsd2ss xmm4, xmm1, xmm1
                  vmulsd  xmm1, xmm0, xmm8
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2sd xmm0, xmm0, dword ptr [rbx]
                  vmulps  xmm6, xmm2, xmm6
                  vcvtsd2ss xmm3, xmm1, xmm1
                  vmulsd  xmm1, xmm0, xmm8
                  vcvtsd2ss xmm2, xmm1, xmm1
                }
                HIDWORD(v381) = 0;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsp+190h]
                  vmovss  xmm0, xmm0, xmm4
                  vinsertps xmm0, xmm0, xmm3, 10h
                  vinsertps xmm0, xmm0, xmm2, 20h ; ' '
                  vaddps  xmm1, xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
                  vmovss  dword ptr [rsp+2B8h+var_138], xmm1
                  vextractps dword ptr [rsp+2B8h+var_138+4], xmm1, 1
                  vextractps dword ptr [rsp+2B8h+var_138+8], xmm1, 2
                  vmovss  dword ptr [rsp+2B8h+bounds.midPoint], xmm5
                  vextractps dword ptr [rsp+2B8h+bounds.midPoint+4], xmm5, 1
                  vextractps dword ptr [rsp+2B8h+bounds.midPoint+8], xmm5, 2
                  vmovss  dword ptr [rsp+2B8h+bounds.halfSize], xmm7
                  vextractps dword ptr [rsp+2B8h+bounds.halfSize+4], xmm7, 1
                  vextractps dword ptr [rsp+2B8h+bounds.halfSize+8], xmm7, 2
                  vmovss  [rsp+2B8h+var_170], xmm6
                  vextractps [rsp+2B8h+var_16C], xmm6, 1
                  vextractps [rsp+2B8h+var_168], xmm6, 2
                  vmovups xmmword ptr [rsp+190h], xmm0
                }
                R_AddDebugBoxOriented(&frontEndDataOut->debugGlobals, &v380, v307 + 6, &bounds, &colorCyan);
                _RBX += 8;
                --v304;
              }
              while ( v304 );
              LODWORD(v200) = *_RSI;
            }
          }
          if ( (int)v200 > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
            __debugbreak();
          v327 = -3 - *_RSI;
          if ( v327 > 128 )
          {
            LODWORD(v349) = 128;
            LODWORD(v345) = -3 - *_RSI;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v345, v349) )
              __debugbreak();
          }
          _RSI += 8 * (unsigned int)v327 + 19;
        }
        else
        {
          _R15 = _RSI;
          _RDI = _RSI;
          _RSI += 34;
          _R14 = *((_QWORD *)_R15 + 7);
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4069, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
            __debugbreak();
          if ( (*(_BYTE *)_R14 & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4070, ASSERT_TYPE_ASSERT, "(XSurfaceIsSkinned( xsurf ))", (const char *)&queryFormat, "XSurfaceIsSkinned( xsurf )") )
            __debugbreak();
          if ( *v49 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4072, ASSERT_TYPE_ASSERT, "(baseSurf->skinnedCachedOffset >= 0)", (const char *)&queryFormat, "baseSurf->skinnedCachedOffset >= 0") )
            __debugbreak();
          v204 = v361;
          if ( v358 )
            v204 = v357;
          v366 = v49[1];
          if ( v352 && r_modelRadiusPackWarn->current.enabled )
          {
            v205 = v359;
            __asm
            {
              vmulps  xmm0, xmm10, xmm10
              vhaddps xmm3, xmm0, xmm0
              vmulps  xmm1, xmm11, xmm11
              vhaddps xmm0, xmm1, xmm1
              vhaddps xmm2, xmm0, xmm0
              vhaddps xmm0, xmm3, xmm3
              vmaxps  xmm8, xmm2, xmm0
            }
            v213 = v359 < numModels;
            v214 = v359 == numModels;
            v215 = v359 <= numModels;
            if ( v359 >= numModels )
            {
              LODWORD(v342) = numModels;
              LODWORD(v339) = v359;
              v216 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4091, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( numModels )", "modelIndex doesn't index numModels\n\t%i not in [0, %i)", v339, v342);
              v213 = 0;
              v214 = !v216;
              v215 = !v216;
              if ( v216 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm6, dword ptr [r14+9Ch]
              vmovss  xmm0, dword ptr [r14+0A0h]
              vucomiss xmm6, xmm0
              vmulss  xmm9, xmm6, xmm6
              vmovaps xmm7, xmm6
            }
            if ( !v214 )
            {
              __asm
              {
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+2B8h+var_278], xmm0
                vcvtss2sd xmm1, xmm6, xmm6
                vmovsd  [rsp+2B8h+var_280], xmm1
              }
              v222 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4094, ASSERT_TYPE_ASSERT, "( xsurf->surfBounds.halfSize.x ) == ( xsurf->surfBounds.halfSize.y )", "%s == %s\n\t%g, %g", "xsurf->surfBounds.halfSize.x", "xsurf->surfBounds.halfSize.y", v346, v350);
              v213 = 0;
              v214 = !v222;
              v215 = !v222;
              if ( v222 )
              {
                __debugbreak();
                __asm { vmovaps xmm7, xmm6 }
              }
            }
            __asm
            {
              vmovss  xmm0, dword ptr [r14+0A4h]
              vucomiss xmm7, xmm0
            }
            if ( !v214 )
            {
              __asm
              {
                vcvtss2sd xmm0, xmm0, xmm0
                vmovsd  [rsp+2B8h+var_278], xmm0
                vcvtss2sd xmm1, xmm7, xmm7
                vmovsd  [rsp+2B8h+var_280], xmm1
              }
              v224 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4095, ASSERT_TYPE_ASSERT, "( xsurf->surfBounds.halfSize.x ) == ( xsurf->surfBounds.halfSize.z )", "%s == %s\n\t%g, %g", "xsurf->surfBounds.halfSize.x", "xsurf->surfBounds.halfSize.z", v347, v351);
              v213 = 0;
              v214 = !v224;
              v215 = !v224;
              if ( v224 )
                __debugbreak();
            }
            __asm { vcomiss xmm8, xmm9 }
            if ( !v215 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vucomiss xmm6, xmm0
                vsqrtps xmm7, xmm8
              }
              if ( v214 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
                __debugbreak();
              v227 = models[v359];
              v228 = R_MessageStringHash(v227->name);
              __asm
              {
                vdivss  xmm0, xmm7, xmm6
                vmulss  xmm2, xmm0, cs:__real@41200000
                vxorps  xmm1, xmm1, xmm1
                vmovss  xmm2, xmm1, xmm2
                vroundss xmm0, xmm15, xmm2, 2
                vmulss  xmm0, xmm0, cs:__real@3dcccccd
              }
              LODWORD(v349) = entnum;
              __asm
              {
                vcvtss2sd xmm1, xmm0, xmm0
                vmovsd  [rsp+2B8h+var_280], xmm1
                vcvtss2sd xmm2, xmm6, xmm6
                vmovsd  [rsp+2B8h+var_288], xmm2
                vcvtss2sd xmm3, xmm7, xmm7
                vmovsd  [rsp+2B8h+var_290], xmm3
              }
              R_WarnOncePerFrameUnique(R_WARN_RADIUS_FOR_PACKING_TOO_SMALL0, 3u, s_packedRadiusTooSmallWarnHashes, v228, v227->name, v340, v343, v348, v349);
              v213 = r_xdebugPack->current.integer < 2u;
              v214 = r_xdebugPack->current.integer == 2;
              if ( r_xdebugPack->current.integer >= 2 )
              {
                _RBX = &skelMatArray[v204];
                QuatToAxis(&_RBX->quat, (tmat33_t<vec3_t> *)axis);
                _RAX = viewOffset;
                __asm
                {
                  vmovss  xmm2, dword ptr [rbx+14h]
                  vmovss  xmm0, dword ptr [rax]
                  vaddss  xmm1, xmm0, dword ptr [rbx+10h]
                  vaddss  xmm0, xmm2, dword ptr [rax+4]
                  vmovss  dword ptr [rsp+2B8h+origin+4], xmm0
                  vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
                  vmovss  dword ptr [rsp+2B8h+origin], xmm1
                  vmovss  xmm1, dword ptr [rbx+18h]
                  vaddss  xmm2, xmm1, dword ptr [rax+8]
                  vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
                  vmovss  dword ptr [rsp+2B8h+bounds.midPoint], xmm0
                  vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
                  vmovss  dword ptr [rsp+2B8h+bounds.midPoint+8], xmm0
                  vmovss  dword ptr [rsp+2B8h+origin+8], xmm2
                  vmovss  dword ptr [rsp+2B8h+bounds.midPoint+4], xmm1
                  vmovss  dword ptr [rsp+2B8h+bounds.halfSize], xmm7
                  vmovss  dword ptr [rsp+2B8h+bounds.halfSize+4], xmm7
                  vmovss  dword ptr [rsp+2B8h+bounds.halfSize+8], xmm7
                }
                R_AddDebugBoxOriented(&frontEndDataOut->debugGlobals, &origin, (const Bounds *)&bounds, (const tmat33_t<vec3_t> *)axis, &colorOrangeHeat);
                __asm { vmovaps xmm2, xmm14; size }
                R_AddDebugPoint(&frontEndDataOut->debugGlobals, &origin, *(const float *)&_XMM2, &colorOrangeHeat);
              }
              v205 = v359;
            }
            __asm { vcomiss xmm8, cs:__real@49742400 }
            if ( !v213 && !v214 )
              goto LABEL_77;
            __asm { vcomiss xmm6, cs:__real@447a0000 }
            if ( !v213 && !v214 )
            {
LABEL_77:
              v250 = models[v205];
              v251 = R_MessageStringHash(v250->name);
              LODWORD(v345) = entnum;
              __asm
              {
                vsqrtps xmm0, xmm8
                vcvtss2sd xmm1, xmm6, xmm6
                vmovsd  [rsp+2B8h+var_288], xmm1
                vcvtss2sd xmm2, xmm0, xmm0
                vmovsd  [rsp+2B8h+var_290], xmm2
              }
              R_WarnOncePerFrameUnique(R_WARN_RADIUS_FOR_PACKING_TOO_BIG0, 3u, s_packedRadiusTooBigWarnHashes, v251, v250->name, v341, v344, v345);
            }
          }
          _RDX = skelMatArrayPrevFrame;
          v256 = v204;
          _R13 = viewOffset;
          _RCX = v256;
          _RBX = &skelMatArray[_RCX];
          _RDI[19] = LODWORD(skelMatArray[_RCX].quat.v[0]);
          _RDI[20] = LODWORD(skelMatArray[_RCX].quat.v[1]);
          _RDI[21] = LODWORD(skelMatArray[_RCX].quat.v[2]);
          _RDI[22] = LODWORD(skelMatArray[_RCX].quat.v[3]);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+10h]
            vaddss  xmm1, xmm0, dword ptr [r13+0]
            vmovss  dword ptr [rdi+5Ch], xmm1
            vmovss  xmm0, dword ptr [rbx+14h]
            vaddss  xmm1, xmm0, dword ptr [r13+4]
            vmovss  dword ptr [rdi+60h], xmm1
            vmovss  xmm0, dword ptr [rbx+18h]
            vaddss  xmm1, xmm0, dword ptr [r13+8]
            vmovss  dword ptr [rdi+64h], xmm1
          }
          if ( skelMatArrayPrevFrame )
          {
            _R15[26] = LODWORD(skelMatArrayPrevFrame[_RCX].quat.v[0]);
            _R15[27] = LODWORD(skelMatArrayPrevFrame[_RCX].quat.v[1]);
            _R15[28] = LODWORD(skelMatArrayPrevFrame[_RCX].quat.v[2]);
            _R15[29] = LODWORD(skelMatArrayPrevFrame[_RCX].quat.v[3]);
            _RAX = viewOffsetPrevFrame;
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vaddss  xmm1, xmm0, dword ptr [rdx+rcx+10h]
              vmovss  dword ptr [rdi+78h], xmm1
              vmovss  xmm2, dword ptr [rdx+rcx+14h]
              vaddss  xmm0, xmm2, dword ptr [rax+4]
              vmovss  dword ptr [rdi+7Ch], xmm0
              vmovss  xmm1, dword ptr [rdx+rcx+18h]
              vaddss  xmm2, xmm1, dword ptr [rax+8]
              vmovss  dword ptr [rdi+80h], xmm2
            }
          }
          else
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi+4Ch]
              vmovsd  xmm1, qword ptr [rdi+5Ch]
            }
            v275 = _RDI[25];
            __asm
            {
              vmovups xmmword ptr [r15+68h], xmm0
              vmovsd  qword ptr [r15+78h], xmm1
            }
            _R15[32] = v275;
          }
          if ( r_xdebugPack->current.integer >= 1 )
          {
            QuatToAxis(&skelMatArray[_RCX].quat, (tmat33_t<vec3_t> *)axis);
            __asm
            {
              vmovss  xmm2, dword ptr [rbx+14h]
              vmovss  xmm0, dword ptr [r13+0]
              vaddss  xmm1, xmm0, dword ptr [rbx+10h]
              vaddss  xmm0, xmm2, dword ptr [r13+4]
              vmovss  dword ptr [rsp+2B8h+pos], xmm1
              vmovss  xmm1, dword ptr [rbx+18h]
              vaddss  xmm2, xmm1, dword ptr [r13+8]
              vmovss  dword ptr [rsp+2B8h+pos+8], xmm2
              vmovaps xmm2, xmm14; size
              vmovss  dword ptr [rsp+2B8h+pos+4], xmm0
            }
            R_AddDebugCross(&frontEndDataOut->debugGlobals, &pos, *(const float *)&_XMM2, &colorPurple);
            R_AddDebugBoxOriented(&frontEndDataOut->debugGlobals, &pos, (const Bounds *)(*((_QWORD *)_RDI + 7) + 144i64), (const tmat33_t<vec3_t> *)axis, &colorPurple);
          }
          v283 = *_RDI;
          _RBX = &v369[4 * *((unsigned __int16 *)_RDI + 21)];
          v285 = (char *)R_AllocComputeCmdDataAligned(frontEndDataOut->compute.cmdList, 112, 8u);
          _R8 = v285;
          if ( !v285 )
            goto LABEL_116;
          *(_QWORD *)v285 = _R14;
          *((_QWORD *)v285 + 1) = v367;
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi+4Ch]
            vmovups xmmword ptr [r8+10h], xmm0
            vmovsd  xmm1, qword ptr [rdi+5Ch]
            vmovsd  qword ptr [r8+20h], xmm1
          }
          *((_DWORD *)v285 + 10) = _RDI[25];
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+5Ch]
            vsubss  xmm1, xmm0, dword ptr [r13+0]
            vmovss  dword ptr [r8+20h], xmm1
            vmovss  xmm2, dword ptr [rdi+60h]
            vsubss  xmm0, xmm2, dword ptr [r13+4]
            vmovss  dword ptr [r8+24h], xmm0
            vmovss  xmm1, dword ptr [rdi+64h]
            vsubss  xmm2, xmm1, dword ptr [r13+8]
            vmovss  dword ptr [r8+28h], xmm2
          }
          *((_DWORD *)v285 + 11) = v363;
          *((_DWORD *)v285 + 14) = v366;
          *((_DWORD *)v285 + 15) = objBufIndex;
          *((_DWORD *)v285 + 20) = v358;
          v285[84] = dismembermentPointCount;
          *((_QWORD *)v285 + 11) = dismembermentPointsBuffer;
          *((_QWORD *)v285 + 12) = v370;
          *((_QWORD *)v285 + 13) = v371;
          *((_DWORD *)v285 + 12) = v283;
          *((_DWORD *)v285 + 13) = -1;
          *((_QWORD *)v285 + 8) = _RBX;
          v285[72] = 0;
          if ( _RBX )
          {
            v293 = *(unsigned __int16 *)(_R14 + 6);
            v294 = 0;
            v295 = *(_QWORD *)(_R14 + 176);
            *(_WORD *)(v285 + 73) = 0;
            if ( v293 )
            {
              do
              {
                v296 = *(unsigned __int16 *)(*(_QWORD *)(v295 + 8) + 2i64 * v294);
                if ( v296 >> 14 == 2 )
                  v297 = _R8[74] == 0;
                else
                  v297 = _R8[73] == 0;
                if ( v297 )
                {
                  _RAX = v296 & 0x3FF;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+rax*4]
                    vandps  xmm0, xmm0, xmm12
                    vcomiss xmm0, xmm13
                  }
                  if ( v296 >> 14 == 2 )
                  {
                    v301 = _R8[73];
                    _R8[74] = 1;
                  }
                  else
                  {
                    _R8[73] = 1;
                    if ( *(unsigned __int16 *)(v295 + 30) - 1 > v294 )
                      v294 = *(unsigned __int16 *)(v295 + 30) - 1;
                    v301 = 1;
                  }
                  _R8[72] = 1;
                  if ( v301 )
                  {
                    if ( _R8[74] )
                      break;
                  }
                }
                ++v294;
              }
              while ( v294 < v293 );
            }
          }
          *((_DWORD *)_R8 + 19) = entnum;
          if ( !r_blendshape_enable->current.enabled )
            _R8[72] = 0;
          if ( !R_AddComputeCmd(list, COMPUTECMD_SKINNING, _R8) )
            goto LABEL_116;
          v41 = v360;
        }
      }
      v360 = ++v41;
      if ( v41 >= surfCount )
        break;
      v35 = v357;
      v38 = v358;
      v37 = v361;
      v40 = v359;
      v36 = v364;
    }
  }
  Profile_EndInternal(NULL);
  LOBYTE(v39) = 1;
LABEL_118:
  __asm
  {
    vmovaps xmm14, [rsp+2B8h+var_B8]
    vmovaps xmm13, [rsp+2B8h+var_A8]
    vmovaps xmm12, [rsp+2B8h+var_98]
    vmovaps xmm11, [rsp+2B8h+var_88]
    vmovaps xmm10, [rsp+2B8h+var_78]
    vmovaps xmm9, [rsp+2B8h+var_68]
    vmovaps xmm8, [rsp+2B8h+var_58]
    vmovaps xmm7, [rsp+2B8h+var_48]
    vmovaps xmm6, [rsp+2B8h+var_38]
    vmovaps xmm15, [rsp+2B8h+var_C8]
  }
  return (char)v39;
}

/*
==============
R_ExecuteBlendshapePreSkinningComputeCmds
==============
*/
void R_ExecuteBlendshapePreSkinningComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const ComputeCmdHeader *ComputeCmdOfSameType; 
  const ComputeCmdHeader *v7; 
  const SkinningComputeCmd *ComputeCmdData; 
  char v9; 
  const ComputeCmdHeader *v10; 
  BlendShapesPerVertInfo *v11; 
  unsigned int v12; 
  unsigned int noTangentVerts; 
  unsigned int blendMaps; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int surfs; 
  int v18; 
  unsigned int weights; 
  unsigned int v20; 
  unsigned int v21; 
  const SkinningComputeCmd *v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int tangentVerts; 
  const SkinningComputeCmd *v27; 
  unsigned int v28; 
  __int64 v29; 
  BlendShapesPerVertInfo blendShapesPerVertOffsets; 
  BlendShapesPerVertConstsData perVertConstsData; 
  GfxShaderBufferView *views; 

  memset(&blendShapesPerVertOffsets, 0, sizeof(blendShapesPerVertOffsets));
  ComputeCmdOfSameType = header;
  v7 = header;
  R_ProfBeginNamedEvent(state, "blendshapes");
  R_ProfBeginNamedEvent(state, "blendshapes init");
  do
  {
    ComputeCmdData = (const SkinningComputeCmd *)R_GetComputeCmdData(list, ComputeCmdOfSameType);
    if ( ComputeCmdData->xsurf->blendShapeTargetCount )
    {
      if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
        Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
      R_SkinXSurfaceSkinningBlendshapeInit(state, ComputeCmdData, &blendShapesPerVertOffsets);
    }
    ComputeCmdOfSameType = R_NextComputeCmdOfSameType(list, ComputeCmdOfSameType);
  }
  while ( ComputeCmdOfSameType );
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_ProfEndNamedEvent(state);
  R_ProfBeginNamedEvent(state, "blendshapes compute");
  v9 = 0;
  v10 = v7;
  v11 = (BlendShapesPerVertInfo *)R_BeginWrappedBufferDataWrite(&gfxBuf.blendShapesPerVertConstsBuffer[state->data->smpFrame & 1]);
  perVertConstsData.offsets = v11;
  memset(&perVertConstsData, 0, 32);
  v12 = 4 * blendShapesPerVertOffsets.tangentVerts + 32;
  noTangentVerts = blendShapesPerVertOffsets.noTangentVerts;
  blendMaps = blendShapesPerVertOffsets.blendMaps;
  v11->tangentVerts = 32;
  v11->noTangentVerts = v12;
  v15 = v12 + 4 * noTangentVerts;
  v11->blendMaps = v15;
  v16 = v15 + 4 * blendMaps;
  surfs = blendShapesPerVertOffsets.surfs;
  v11->surfs = v16;
  v18 = 3 * surfs;
  weights = blendShapesPerVertOffsets.weights;
  v20 = 16 * v18 + v16;
  v11->weights = v20;
  v21 = v20 + 4 * weights;
  v11->total = v21;
  perVertConstsData.workGroupConsts = (BlendShapeWorkGroupConsts *)((char *)v11 + v11->tangentVerts);
  perVertConstsData.surfConsts = (BlendShapesPerVertSurfConsts *)((char *)v11 + v11->surfs);
  perVertConstsData.surfWeights = (float *)((char *)&v11->surfs + v11->weights);
  if ( v21 >= 0x18000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 2418, ASSERT_TYPE_ASSERT, "(perVertConstsData->offsets->total < ( 96*1024 ))", (const char *)&queryFormat, "perVertConstsData->offsets->total < BLENDSHAPES_PER_VERT_CONSTS_BUFFER_SIZE") )
    __debugbreak();
  if ( v11->total < 0x18000 )
  {
    do
    {
      v22 = (const SkinningComputeCmd *)R_GetComputeCmdData(list, v10);
      if ( v22->hasActiveBlendShapes )
      {
        if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
          Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
        R_SkinXSurfaceBlendShapeCompute(state, v22, &perVertConstsData);
        if ( v9 || v22->xsurf->blendShapesRecalcTangentFrameData )
          v9 = 1;
      }
      v10 = R_NextComputeCmdOfSameType(list, v10);
    }
    while ( v10 );
    v23 = state->data->smpFrame & 1;
    R_EndWrappedBufferDataWrite(&gfxBuf.blendShapesPerVertConstsBuffer[v23]);
    v24 = perVertConstsData.runningCounts.blendMaps;
    v25 = perVertConstsData.runningCounts.noTangentVerts;
    if ( perVertConstsData.runningCounts.tangentVerts || perVertConstsData.runningCounts.noTangentVerts || perVertConstsData.runningCounts.blendMaps )
    {
      views = &gfxBuf.blendShapesPerVertConstsBuffer[v23].view;
      R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&views);
      views = &gfxBuf.unifiedOptBuffer.view;
      R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
      views = &gfxBuf.uobVirtPageTableBuffer.view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&views);
      views = (GfxShaderBufferView *)&state->data->skinnedCacheVb->wrappedBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      tangentVerts = perVertConstsData.runningCounts.tangentVerts;
      if ( perVertConstsData.runningCounts.tangentVerts )
      {
        R_SetComputeShader(state, rgp.skinningBlendShapeVertsWithTangentsComputeShader);
        R_Dispatch(state, tangentVerts, 1u, 1u);
        if ( !v25 )
        {
LABEL_26:
          if ( v24 )
          {
            views = (GfxShaderBufferView *)&state->data->mayhemChannelsVb->wrappedBuffer.rwView;
            R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
            R_SetComputeShader(state, rgp.skinningBlendShapeBlendMapWeightVertsComputeShader);
            R_Dispatch(state, v24, 1u, 1u);
          }
          R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
          goto LABEL_29;
        }
        R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
      }
      if ( v25 )
      {
        R_SetComputeShader(state, rgp.skinningBlendShapeVertsWithNoTangentsComputeShader);
        R_Dispatch(state, v25, 1u, 1u);
      }
      goto LABEL_26;
    }
  }
LABEL_29:
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_ProfEndNamedEvent(state);
  if ( v9 )
  {
    R_ProfBeginNamedEvent(state, "blendshapes recalc tangent frame");
    *(_QWORD *)&blendShapesPerVertOffsets.tangentVerts = R_BeginWrappedBufferDataWrite(&gfxBuf.blendShapesRecalcTangentFrameConstsBuffer[state->data->smpFrame & 1]);
    *(_QWORD *)&blendShapesPerVertOffsets.blendMaps = *(_QWORD *)&blendShapesPerVertOffsets.tangentVerts + 0x4000i64;
    *(_QWORD *)&blendShapesPerVertOffsets.surfs = 0i64;
    do
    {
      v27 = (const SkinningComputeCmd *)R_GetComputeCmdData(list, v7);
      if ( v27->hasActiveBlendShapes )
      {
        if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
          Sys_Error((const ObfuscateErrorText)&stru_1443CC330);
        R_SkinXSurfaceCalcTangentFrameCompute(state, v27, (RecalcTangentFrameConsts *)&blendShapesPerVertOffsets);
      }
      v7 = R_NextComputeCmdOfSameType(list, v7);
    }
    while ( v7 );
    v28 = blendShapesPerVertOffsets.surfs;
    if ( blendShapesPerVertOffsets.surfs )
    {
      v29 = state->data->smpFrame & 1;
      R_EndWrappedBufferDataWrite(&gfxBuf.blendShapesRecalcTangentFrameConstsBuffer[v29]);
      views = &gfxBuf.blendShapesRecalcTangentFrameConstsBuffer[v29].view;
      R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
      views = &gfxBuf.unifiedOptBuffer.view;
      R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
      views = &gfxBuf.uobVirtPageTableBuffer.view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&views);
      views = (GfxShaderBufferView *)&state->data->skinnedCacheVb->wrappedBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      R_SetComputeShader(state, rgp.skinningBlendShapesRecalcTangentFrameComputeShader);
      R_Dispatch(state, v28, 1u, 1u);
    }
    R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
    R_ProfEndNamedEvent(state);
  }
  R_ProfEndNamedEvent(state);
}

/*
==============
R_ExecuteSkinningComputeCmds
==============
*/
void R_ExecuteSkinningComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const ComputeCmdList *v5; 
  unsigned int v6; 
  unsigned int v7; 
  ComputeCmdHeader *v8; 
  __int64 v9; 
  SkinningSurfConsts *surfConsts; 
  SkinningDismembermentBaseConsts *v11; 
  SkinningDismembermentConsts *v12; 
  __int64 v13; 
  const SkinningComputeCmd *ComputeCmdData; 
  const SkinningComputeCmd *v15; 
  const XSurface *xsurf; 
  int skinnedCachedOffset; 
  bool v18; 
  ComputeCmdHeader *v19; 
  unsigned __int16 *blendVertCounts; 
  unsigned __int64 v21; 
  unsigned int v22; 
  const DObjSkelDQ *dqArray; 
  __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  intmax_t v27; 
  int v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int v31; 
  float v32; 
  unsigned int v33; 
  __int64 v34; 
  int v35; 
  unsigned int v36; 
  unsigned int v37; 
  __int64 v38; 
  __int64 v39; 
  intmax_t v40; 
  unsigned __int16 *p_boneCount; 
  SkinningWorkgroupConsts *workgroupConsts; 
  __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  SkinningDismembermentBaseConsts *dismembermentBaseConsts; 
  __int64 v47; 
  unsigned int v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  int modelBoneCount; 
  unsigned int v56; 
  int v57; 
  unsigned int xCount[2]; 
  intmax_t v59; 
  __int64 v60; 
  unsigned int v61; 
  int v62; 
  const DObjSkelDQ *v63; 
  unsigned __int16 *v64; 
  __int64 v65; 
  __int64 v66; 
  ComputeCmdHeader *v67; 
  SkinningConstsGPU consts; 
  __int64 v69; 
  const GfxBackEndData *data; 
  DismembermentPass dismemberPass; 
  ComputeCmdHeader *headera; 

  headera = (ComputeCmdHeader *)header;
  v5 = list;
  data = state->data;
  v6 = 0;
  v63 = NULL;
  modelBoneCount = 0;
  v7 = 0;
  v53 = 0;
  v54 = 0;
  v8 = (ComputeCmdHeader *)header;
  v52 = 0;
  memset(&dismemberPass, 0, sizeof(dismemberPass));
  v67 = (ComputeCmdHeader *)header;
  R_ExecuteBlendshapePreSkinningComputeCmds(state, list, type, header);
  v9 = state->data->smpFrame & 1;
  consts.dqArray = (DObjSkelDQ *)R_BeginWrappedBufferDataWrite(&gfxBuf.skinningDQBuffer[v9]);
  consts.surfConsts = (SkinningSurfConsts *)R_BeginWrappedBufferDataWrite(&gfxBuf.skinningSurfBuffer[v9]);
  surfConsts = consts.surfConsts;
  consts.workgroupConsts = (SkinningWorkgroupConsts *)R_BeginWrappedBufferDataWrite(&gfxBuf.skinningWorkgroupBuffer[v9]);
  v11 = (SkinningDismembermentBaseConsts *)R_BeginWrappedBufferDataWrite(&gfxBuf.skinningDismembermentConstsBuffer[v9]);
  consts.dismembermentIndicesBuffer = (unsigned __int8 *)R_BeginWrappedBufferDataWrite(&gfxBuf.skinningDismembermentIndicesBuffer[v9]);
  consts.dismembermentPointsBuffer = (unsigned __int8 *)R_BeginWrappedBufferDataWrite(&gfxBuf.skinningDismembermentPointsBuffer[v9]);
  v12 = (SkinningDismembermentConsts *)&v11[1];
  consts.dismembermentBaseConsts = v11;
  v13 = 0i64;
  v60 = 0i64;
  consts.dismembermentConsts = v12;
  v57 = 0;
  do
  {
    xCount[v13] = 0;
    while ( 1 )
    {
      ComputeCmdData = (const SkinningComputeCmd *)R_GetComputeCmdData(v5, v8);
      v15 = ComputeCmdData;
      if ( v13 )
        break;
      if ( !ComputeCmdData->dismembermentPointCount )
        goto LABEL_5;
LABEL_14:
      v19 = v8;
LABEL_48:
      headera = (ComputeCmdHeader *)R_NextComputeCmdOfSameType(v5, v19);
      v8 = headera;
      if ( !headera )
      {
        v8 = v67;
        headera = v67;
        goto LABEL_50;
      }
    }
    if ( v13 == 1 && !ComputeCmdData->dismembermentPointCount )
      goto LABEL_14;
LABEL_5:
    xsurf = ComputeCmdData->xsurf;
    skinnedCachedOffset = ComputeCmdData->skinnedCachedOffset;
    if ( ComputeCmdData->xsurf->blendShapeTargetCount && ComputeCmdData->hasActiveBlendShapes )
      skinnedCachedOffset |= 0x80000000;
    if ( v13 != 1 || (v18 = R_ProcessSkinningComputeCmdForDismemberPassExtras(ComputeCmdData, modelBoneCount, &dismemberPass, &consts), surfConsts = consts.surfConsts, v18) )
    {
      if ( v6 <= 0x800 )
      {
        blendVertCounts = xsurf->blendVertCounts;
        v21 = xsurf->blendVertCounts[0] + 63i64;
        v64 = xsurf->blendVertCounts;
        v22 = v7 + (((unsigned int)xsurf->blendVertCounts[2] + 63) >> 6) + (((unsigned int)xsurf->blendVertCounts[3] + 63) >> 6) + (((unsigned int)xsurf->blendVertCounts[4] + 63) >> 6) + (((unsigned int)xsurf->blendVertCounts[5] + 63) >> 6) + (((unsigned int)xsurf->blendVertCounts[6] + 63) >> 6) + (((unsigned int)xsurf->blendVertCounts[7] + 63) >> 6) + (unsigned __int16)(v21 >> 6) + (((unsigned int)xsurf->blendVertCounts[1] + 63) >> 6);
        if ( v22 <= 0x10000 )
        {
          dqArray = v15->dqArray;
          if ( dqArray != v63 )
          {
            v24 = v15->modelBoneCount;
            v25 = v24 + v53;
            modelBoneCount = v15->modelBoneCount;
            if ( (unsigned int)v24 + v53 <= 0x10000 )
            {
              v63 = v15->dqArray;
              v26 = 32 * v24;
              memcpy_0(consts.dqArray, dqArray, 32 * v24);
              consts.dqArray = (DObjSkelDQ *)((char *)consts.dqArray + v26);
              blendVertCounts = v64;
              v54 = v53;
            }
            else
            {
              v63 = NULL;
              v54 = -1;
            }
            v53 = v25;
          }
          surfConsts->dqOffset = v54;
          surfConsts->vtxVPageStart = R_UVB_GetSurfVirtPageStart(xsurf->ugbID);
          surfConsts->blendVPageStart = R_UOB_GetBlendInfoVPageStart(xsurf->ugbID);
          surfConsts->skinnedCacheOffset = skinnedCachedOffset;
          R_SetBoundingBoxData(&xsurf->surfBounds, &surfConsts->skinning_boundingBoxData);
          v27 = 1i64;
          surfConsts->skinning_rootOffset.v[0] = v15->placement.origin.v[0];
          v28 = 0;
          v29 = 0;
          surfConsts->skinning_rootOffset.v[1] = v15->placement.origin.v[1];
          v30 = 8i64;
          v31 = 1;
          surfConsts->skinning_rootOffset.v[2] = v15->placement.origin.v[2];
          surfConsts->skinning_rootOffset.v[3] = 1.0;
          surfConsts->skinning_rootQuat.v[0] = v15->placement.quat.v[0];
          surfConsts->skinning_rootQuat.v[1] = v15->placement.quat.v[1];
          surfConsts->skinning_rootQuat.v[2] = v15->placement.quat.v[2];
          v32 = v15->placement.quat.v[3];
          v33 = 0;
          v34 = 0i64;
          surfConsts->skinning_rootQuat.v[3] = v32;
          v65 = 0i64;
          v59 = 1i64;
          v66 = 8i64;
          do
          {
            *(unsigned int *)((char *)&surfConsts->blendConsts[0].blendVertCount + v34) = *blendVertCounts;
            *(unsigned int *)((char *)&surfConsts->blendConsts[0].weightOffset + v34) = v28 - v29;
            v35 = *blendVertCounts;
            v29 += v35;
            v56 = v29;
            v28 += v31 * v35;
            v36 = (unsigned int)(v35 + 63) >> 6;
            v61 = v36;
            v62 = v28;
            if ( v36 )
            {
              v37 = 0;
              v38 = v36 - 1;
              if ( v36 != 1 )
              {
                v39 = (unsigned int)v38;
                v40 = v59;
                p_boneCount = &consts.workgroupConsts->boneCount;
                v69 = v38;
                do
                {
                  *(p_boneCount - 2) = v6;
                  *(p_boneCount - 1) = 64;
                  if ( v31 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v31, "unsigned", v40) )
                    __debugbreak();
                  *p_boneCount = v31;
                  if ( v33 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v33, "unsigned", v33) )
                    __debugbreak();
                  p_boneCount[1] = v33;
                  v33 += 64;
                  p_boneCount += 4;
                  --v39;
                }
                while ( v39 );
                v36 = v61;
                v37 = v69;
              }
              workgroupConsts = consts.workgroupConsts;
              v43 = v37;
              v44 = v56 - v33;
              consts.workgroupConsts[v43].surfIndex = v6;
              if ( v56 - v33 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v44, "unsigned", v44) )
                __debugbreak();
              workgroupConsts[v43].workGroupSize = v44;
              if ( v31 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v31, "unsigned", v59) )
                __debugbreak();
              workgroupConsts[v43].boneCount = v31;
              if ( v33 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v33, "unsigned", v33) )
                __debugbreak();
              v45 = v60;
              v29 = v56;
              v27 = v59;
              v34 = v65;
              blendVertCounts = v64;
              v28 = v62;
              v30 = v66;
              workgroupConsts[v43].vertexOffset = v33;
              v33 = v56;
              xCount[v45] += v36;
              v52 += v36;
              consts.workgroupConsts = &workgroupConsts[v36];
            }
            surfConsts = consts.surfConsts;
            ++v27;
            ++blendVertCounts;
            v59 = v27;
            v34 += 8i64;
            v64 = blendVertCounts;
            ++v31;
            v65 = v34;
            v66 = --v30;
          }
          while ( v30 );
          v7 = v52;
          ++v6;
          surfConsts = ++consts.surfConsts;
        }
        else
        {
          v7 = v22;
          v52 = v22;
        }
        v13 = v60;
      }
      else
      {
        ++v6;
      }
      v19 = headera;
      v5 = list;
      goto LABEL_48;
    }
    v8 = headera;
    v5 = list;
LABEL_50:
    if ( !v57 )
    {
      dismembermentBaseConsts = consts.dismembermentBaseConsts;
      consts.dismembermentBaseConsts->workgroupOffset = xCount[v13];
      dismembermentBaseConsts->surfIndexOffset = v6;
    }
    ++v13;
    ++v57;
    v60 = v13;
  }
  while ( v13 < 2 );
  v47 = state->data->smpFrame & 1;
  R_EndWrappedBufferDataWrite(&gfxBuf.skinningDQBuffer[v47]);
  R_EndWrappedBufferDataWrite(&gfxBuf.skinningSurfBuffer[v47]);
  R_EndWrappedBufferDataWrite(&gfxBuf.skinningWorkgroupBuffer[v47]);
  R_EndWrappedBufferDataWrite(&gfxBuf.skinningDismembermentConstsBuffer[v47]);
  R_EndWrappedBufferDataWrite(&gfxBuf.skinningDismembermentIndicesBuffer[v47]);
  R_EndWrappedBufferDataWrite(&gfxBuf.skinningDismembermentPointsBuffer[v47]);
  if ( v6 > 0x800 )
    R_WarnOncePerFrame(R_WARN_MAX_SKINNED_SURFS, v6);
  if ( v52 > 0x10000 )
    R_WarnOncePerFrame(R_WARN_MAX_SKINNED_WORKGROUPS, v52);
  if ( v53 > 0x10000 )
    R_WarnOncePerFrame(R_WARN_MAX_SKINNING_DQS, v53);
  v48 = xCount[0];
  v49 = xCount[1];
  if ( xCount[0] || xCount[1] )
  {
    v50 = state->data->smpFrame & 1;
    headera = (ComputeCmdHeader *)&data->skinnedCacheVb->wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&headera, NULL);
    headera = (ComputeCmdHeader *)&gfxBuf.unifiedVertexBuffer.view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&headera);
    headera = (ComputeCmdHeader *)&gfxBuf.uvbVirtPageTableBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&headera);
    headera = (ComputeCmdHeader *)&gfxBuf.unifiedOptBuffer.view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&headera);
    headera = (ComputeCmdHeader *)&gfxBuf.uobVirtPageTableBuffer.view;
    R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&headera);
    v51 = v50;
    headera = (ComputeCmdHeader *)&gfxBuf.skinningDQBuffer[v51].view;
    R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&headera);
    headera = (ComputeCmdHeader *)&gfxBuf.skinningWorkgroupBuffer[v51].view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&headera);
    headera = (ComputeCmdHeader *)&gfxBuf.skinningSurfBuffer[v51].view;
    R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&headera);
    if ( v48 )
    {
      R_SetComputeShader(state, rgp.skinningUnifiedComputeShader);
      R_Dispatch(state, v48, 1u, 1u);
    }
    if ( v49 )
    {
      headera = (ComputeCmdHeader *)&gfxBuf.skinningDismembermentConstsBuffer[v51].view;
      R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&headera);
      headera = (ComputeCmdHeader *)&gfxBuf.skinningDismembermentIndicesBuffer[v51].view;
      R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&headera);
      headera = (ComputeCmdHeader *)&gfxBuf.skinningDismembermentPointsBuffer[v51].view;
      R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&headera);
      R_SetComputeShader(state, rgp.skinningDismemberUnifiedComputeShader);
      R_Dispatch(state, v49, 1u, 1u);
    }
  }
}

/*
==============
R_InitSkinningConstantBuffers
==============
*/
void R_InitSkinningConstantBuffers(void)
{
  __int64 v0; 
  GfxWrappedBuffer *skinningWorkgroupBuffer; 

  v0 = 2i64;
  skinningWorkgroupBuffer = gfxBuf.skinningWorkgroupBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer - 2, GfxWrappedBuffer_Structured, 32, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "skinningDQBufferPool");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer, GfxWrappedBuffer_Raw, 8, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "skinningWorkgroupBufferPool");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer + 2, GfxWrappedBuffer_Raw, 128, 0x800u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "skinningSurfBufferPool");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer + 4, GfxWrappedBuffer_Raw, 8, 0x201u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "skinningDismembermentConstsBufferPool");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer + 6, GfxWrappedBuffer_Raw, 1, 0x6000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "skinningDismembermentIndicesBufferPool");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer + 8, GfxWrappedBuffer_Raw, 12, 0x300u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "skinningDismembermentPointsBufferPool");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer - 4, GfxWrappedBuffer_Raw, 1, 0x4800u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "blendShapesRecalcTangentFrameConstsBuffer");
    R_CreateGfxWrappedBuffer(skinningWorkgroupBuffer - 6, GfxWrappedBuffer_Raw, 1, 0x18000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "blendShapesPerVertConstsBuffer");
    ++skinningWorkgroupBuffer;
    --v0;
  }
  while ( v0 );
}

/*
==============
R_ProcessSkinningComputeCmdForDismemberPassExtras
==============
*/
bool R_ProcessSkinningComputeCmdForDismemberPassExtras(const SkinningComputeCmd *cmd, int modelBoneCount, DismembermentPass *dismemberPass, SkinningConstsGPU *consts)
{
  bool result; 
  int baseBoneCount; 
  bool v10; 
  unsigned int indicesBufferSize; 
  unsigned int v12; 
  size_t v13; 
  unsigned __int8 *dismembermentIndicesBaseBuffer; 
  __int64 v15; 
  int v16; 
  int dismembermentPointCount; 
  unsigned int pointsBufferSize; 
  unsigned int v19; 
  vec3_t *dismembermentPointsBuffer; 

  if ( dismemberPass->surfCount > 0x200 )
  {
    R_WarnOncePerFrame(R_WARN_MAX_SKINNING_DISMEMBERMENT_SURFS);
    return 0;
  }
  baseBoneCount = cmd->baseBoneCount;
  v10 = baseBoneCount != dismemberPass->baseBoneCount || cmd->modelBoneCount != modelBoneCount;
  if ( cmd->dismembermentIndicesClientBuffer != dismemberPass->indicesClientBuffer || cmd->dismembermentIndicesBaseBuffer != dismemberPass->indicesBaseBuffer || v10 )
  {
    if ( !baseBoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 3062, ASSERT_TYPE_ASSERT, "(cmd->baseBoneCount)", (const char *)&queryFormat, "cmd->baseBoneCount") )
      __debugbreak();
    indicesBufferSize = dismemberPass->indicesBufferSize;
    v12 = (cmd->modelBoneCount + 3) & 0xFFFFFFFC;
    dismemberPass->indicesBufferOffset = indicesBufferSize;
    if ( indicesBufferSize + v12 > 0x6000 )
    {
      R_WarnOncePerFrame(R_WARN_MAX_SKINNING_DISMEMBERMENT_INDICES);
      return 0;
    }
    dismemberPass->indicesBufferSize = indicesBufferSize + v12;
    v13 = cmd->baseBoneCount;
    dismemberPass->baseBoneCount = v13;
    dismembermentIndicesBaseBuffer = cmd->dismembermentIndicesBaseBuffer;
    dismemberPass->indicesBaseBuffer = dismembermentIndicesBaseBuffer;
    dismemberPass->indicesClientBuffer = cmd->dismembermentIndicesClientBuffer;
    memcpy_0(consts->dismembermentIndicesBuffer, dismembermentIndicesBaseBuffer, v13);
    v15 = dismemberPass->baseBoneCount;
    v16 = cmd->modelBoneCount - v15;
    if ( v16 )
      memcpy_0(&consts->dismembermentIndicesBuffer[v15], dismemberPass->indicesClientBuffer, v16);
    consts->dismembermentIndicesBuffer += v12;
  }
  if ( cmd->dismembermentPointsBuffer != dismemberPass->pointsBuffer )
  {
    dismembermentPointCount = cmd->dismembermentPointCount;
    pointsBufferSize = dismemberPass->pointsBufferSize;
    dismemberPass->pointsBufferOffset = pointsBufferSize;
    v19 = pointsBufferSize + 12 * dismembermentPointCount;
    if ( v19 > 0x2400 )
    {
      R_WarnOncePerFrame(R_WARN_MAX_SKINNING_DISMEMBERMENT_POINTS);
      return 0;
    }
    dismemberPass->pointsBufferSize = v19;
    dismembermentPointsBuffer = cmd->dismembermentPointsBuffer;
    dismemberPass->pointsBuffer = dismembermentPointsBuffer;
    memcpy_0(consts->dismembermentPointsBuffer, dismembermentPointsBuffer, 12i64 * cmd->dismembermentPointCount);
    consts->dismembermentPointsBuffer += 12 * (unsigned __int8)dismembermentPointCount;
  }
  consts->dismembermentConsts->indicesBufferOffset = dismemberPass->indicesBufferOffset;
  consts->dismembermentConsts->pointsBufferOffset = dismemberPass->pointsBufferOffset;
  result = 1;
  ++consts->dismembermentConsts;
  ++dismemberPass->surfCount;
  return result;
}

/*
==============
R_ShutdownSkinningConstantBuffers
==============
*/
void R_ShutdownSkinningConstantBuffers(void)
{
  ;
}

/*
==============
R_SkinXModelCmd
==============
*/
void R_SkinXModelCmd(const void *const data)
{
  __int64 v9; 
  int v10; 
  int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  int *v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  char v22; 
  bool v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  const XSurface *v171; 
  unsigned __int8 *v172; 
  int v189; 
  unsigned int sharedVertDataOffset; 
  XSurfaceShared *shared; 
  unsigned __int8 *v192; 
  unsigned int v193; 
  float *outTension; 
  __int64 v201; 
  __int64 v202; 
  __int64 v203; 
  char v204; 
  int v205; 
  int v206; 
  int v207; 
  int v208; 
  int v209; 
  int v210; 
  int v211; 
  int v212; 
  bool v213; 
  int v214; 
  int v215; 
  int v216; 
  unsigned int v217; 
  int v218; 
  int v219; 
  int v220; 
  __int64 v221; 
  __int64 v222; 
  __int64 v223; 
  GfxPackedVertex *outVerts; 
  __int64 v225; 
  __int64 v226; 
  __int64 v227; 
  __int64 v228; 
  __int64 v229; 
  __m256i v234; 
  DObjSkelDQ boneDQ; 

  _R12 = data;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented code") )
    __debugbreak();
  Profile_Begin(67);
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4285, ASSERT_TYPE_ASSERT, "(skinCmd)", (const char *)&queryFormat, "skinCmd") )
    __debugbreak();
  if ( !_R12[26] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4286, ASSERT_TYPE_ASSERT, "(skinCmd->surfCount)", (const char *)&queryFormat, "skinCmd->surfCount") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [r12+10h] }
  v9 = *(_QWORD *)_R12;
  v10 = -1;
  _R13 = *((_QWORD *)_R12 + 1);
  v12 = 0;
  v214 = -1;
  v13 = -1;
  v218 = 0;
  v14 = 0;
  v215 = -1;
  v15 = 0;
  v216 = 0;
  __asm { vmovups [rsp+20178h+var_20078], ymm0 }
  v217 = 0;
  if ( _R12[26] )
  {
    __asm
    {
      vmovaps [rsp+20178h+var_38], xmm6
      vmovaps [rsp+20178h+var_48], xmm7
      vmovaps [rsp+20178h+var_58], xmm8
      vmovaps [rsp+20178h+var_68], xmm9
      vmovaps [rsp+20178h+var_78], xmm10
      vmovaps [rsp+20178h+var_88], xmm11
    }
    do
    {
      v16 = *(_DWORD *)v9;
      v17 = (int *)v9;
      if ( *(_DWORD *)v9 == -3 )
      {
        v9 += 4i64;
      }
      else
      {
        v219 = *(unsigned __int16 *)(v9 + 40);
        if ( v10 != v219 || v12 != *(unsigned __int16 *)(v9 + 44) || v13 != *(unsigned __int16 *)(v9 + 46) || (v18 = *(_DWORD *)v9, v14 != *(unsigned __int16 *)(v9 + 48)) )
        {
          v19 = *(unsigned __int16 *)(v9 + 44);
          v20 = *(unsigned __int16 *)(v9 + 40);
          v21 = *(unsigned __int16 *)(v9 + 48);
          v22 = 0;
          v18 = *(_DWORD *)v9;
          v23 = (v234.m256i_i8[28] & 2) != 0;
          v214 = *(unsigned __int16 *)(v9 + 40);
          v218 = *(unsigned __int16 *)(v9 + 44);
          v215 = *(unsigned __int16 *)(v9 + 46);
          v216 = v21;
          v213 = v23;
          v204 = 0;
          v227 = (unsigned int)(v21 + v19);
          if ( v21 + (_DWORD)v19 )
          {
            v24 = *(unsigned __int16 *)(v9 + 46);
            v221 = v24;
            v25 = 0i64;
            v26 = *(unsigned __int16 *)(v9 + 46) - (_DWORD)v19 - v20;
            v27 = *(unsigned __int16 *)(v9 + 40);
            v28 = v19 + v20;
            v220 = v26;
            v29 = *(unsigned __int16 *)(v9 + 44);
            v229 = v28;
            v228 = v29;
            do
            {
              v30 = v27;
              v31 = v25 - v29 + v28;
              if ( v25 >= v29 )
                v31 = v25 - v29 + v24;
              if ( v25 >= v29 )
                v30 = v27 + v26;
              if ( (signed int)v30 >= *((_DWORD *)_R12 + 12) )
                goto LABEL_30;
              if ( v30 >= 0x100 )
              {
                LODWORD(v201) = 256;
                LODWORD(outTension) = v30;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outTension, v201) )
                  __debugbreak();
                v22 = v204;
                v24 = v221;
                v23 = v213;
              }
              if ( ((0x80000000 >> (v30 & 0x1F)) & v234.m256i_i32[(unsigned __int64)v30 >> 5]) != 0 )
              {
LABEL_30:
                if ( v23 || v31 < v24 )
                {
                  _RCX = *(_QWORD *)(v9 + 32);
                  _RBX = 32 * v31;
                  v222 = _RCX;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r13]
                    vmovss  [rsp+20178h+var_20124], xmm0
                  }
                  if ( (v205 & 0x7F800000) == 2139095040 )
                    goto LABEL_35;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r13+4]
                    vmovss  [rsp+20178h+var_20124], xmm0
                  }
                  if ( (v206 & 0x7F800000) == 2139095040 )
                    goto LABEL_35;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r13+8]
                    vmovss  [rsp+20178h+var_20124], xmm0
                  }
                  if ( (v207 & 0x7F800000) == 2139095040 )
                    goto LABEL_35;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+r13+0Ch]
                    vmovss  [rsp+20178h+var_20124], xmm0
                  }
                  if ( (v208 & 0x7F800000) == 2139095040 )
                  {
LABEL_35:
                    CrashReport_TriggerNow();
                    _RCX = v222;
                    v22 = v204;
                  }
                  _R8 = 32i64 * (int)v30;
                  _RDX = 32i64 * (int)(v27 - v219);
                  v225 = _RDX;
                  v226 = _R8;
                  __asm
                  {
                    vmovups xmm9, xmmword ptr [r8+r13]
                    vmovups xmm6, xmmword ptr [rdx+rcx+10h]
                    vmovups xmm0, xmmword ptr [rdx+rcx]
                    vxorps  xmm8, xmm0, xmmword ptr cs:vNegateXYZ
                    vshufps xmm4, xmm8, xmm8, 0C9h ; 'É'
                    vmulps  xmm1, xmm4, xmm6
                    vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm8
                    vsubps  xmm3, xmm2, xmm1
                    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
                    vaddps  xmm5, xmm0, xmm0
                    vmulps  xmm1, xmm5, xmm4
                    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm8
                    vsubps  xmm4, xmm2, xmm1
                    vshufps xmm2, xmm4, xmm4, 0C9h ; 'É'
                    vshufps xmm0, xmm8, xmm8, 0FFh
                    vmulps  xmm1, xmm0, xmm5
                    vaddps  xmm3, xmm1, xmm6
                    vaddps  xmm0, xmm3, xmm2
                    vxorps  xmm7, xmm0, xmmword ptr cs:vNegateXYZ
                    vshufps xmm2, xmm8, xmm8, 4Eh ; 'N'
                    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
                    vshufps xmm1, xmm8, xmm8, 0B1h ; '±'
                    vmulps  xmm1, xmm1, xmm0
                    vxorps  xmm3, xmm1, xmmword ptr cs:vNPPN
                    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
                    vmulps  xmm1, xmm2, xmm0
                    vxorps  xmm2, xmm1, xmmword ptr cs:vPPNN
                    vaddps  xmm5, xmm3, xmm2
                    vshufps xmm3, xmm8, xmm8, 1Bh
                    vshufps xmm0, xmm9, xmm9, 0
                    vmulps  xmm1, xmm3, xmm0
                    vxorps  xmm4, xmm1, xmmword ptr cs:vPNPN
                    vshufps xmm6, xmm9, xmm9, 0FFh
                    vmulps  xmm2, xmm6, xmm8
                    vaddps  xmm0, xmm4, xmm2
                    vaddps  xmm8, xmm5, xmm0
                    vshufps xmm5, xmm9, xmm9, 0C9h ; 'É'
                    vmulps  xmm1, xmm7, xmm5
                    vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm9
                    vsubps  xmm3, xmm2, xmm1
                    vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
                    vaddps  xmm4, xmm0, xmm0
                    vmulps  xmm1, xmm4, xmm5
                    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                    vmulps  xmm2, xmm0, xmm9
                    vsubps  xmm3, xmm2, xmm1
                    vshufps xmm1, xmm3, xmm3, 0C9h ; 'É'
                    vmulps  xmm0, xmm6, xmm4
                    vaddps  xmm2, xmm0, xmm7
                    vaddps  xmm3, xmm2, xmm1
                    vaddps  xmm5, xmm3, xmmword ptr [r8+r13+10h]
                    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
                    vshufps xmm2, xmm8, xmm8, 1Bh
                    vshufps xmm1, xmm8, xmm8, 4Eh ; 'N'
                    vmulps  xmm1, xmm1, xmm0
                    vxorps  xmm3, xmm1, xmmword ptr cs:vPPNP
                    vshufps xmm0, xmm5, xmm5, 0
                    vmulps  xmm1, xmm2, xmm0
                    vxorps  xmm2, xmm1, xmmword ptr cs:vPNPP
                    vaddps  xmm4, xmm3, xmm2
                    vshufps xmm3, xmm8, xmm8, 0B1h ; '±'
                    vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
                    vmulps  xmm1, xmm3, xmm0
                    vxorps  xmm2, xmm1, xmmword ptr cs:vNPPP
                    vaddps  xmm3, xmm4, xmm2
                    vmulps  xmm0, xmm3, xmmword ptr cs:vHalfXYZw
                    vmovntps xmmword ptr [rsp+rdx+20178h+boneDQ.dq], xmm8
                    vmovntps xmmword ptr [rsp+rdx+20178h+boneDQ.dq+10h], xmm0
                  }
                  if ( !v22 )
                  {
                    _RDI = *((_QWORD *)_R12 + 10);
                    v22 = 1;
                    v204 = 1;
                    __asm
                    {
                      vmovaps [rsp+20178h+var_200B8], xmm8
                      vmovaps [rsp+20178h+var_20098], xmm5
                    }
                    if ( _RDI )
                    {
                      __asm { vmovss  xmm0, dword ptr [rdi+rbx] }
                      _RCX = *(_QWORD *)(v9 + 32);
                      __asm { vmovss  [rsp+20178h+var_20124], xmm0 }
                      v223 = _RCX;
                      if ( (v209 & 0x7F800000) == 2139095040 )
                        goto LABEL_42;
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rdi+rbx+4]
                        vmovss  [rsp+20178h+var_20124], xmm0
                      }
                      if ( (v210 & 0x7F800000) == 2139095040 )
                        goto LABEL_42;
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rdi+rbx+8]
                        vmovss  [rsp+20178h+var_20124], xmm0
                      }
                      if ( (v211 & 0x7F800000) == 2139095040 )
                        goto LABEL_42;
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rdi+rbx+0Ch]
                        vmovss  [rsp+20178h+var_20124], xmm0
                      }
                      if ( (v212 & 0x7F800000) == 2139095040 )
                      {
LABEL_42:
                        CrashReport_TriggerNow();
                        _RCX = v223;
                        _RDX = v225;
                        _R8 = v226;
                        v22 = 1;
                      }
                      __asm
                      {
                        vmovups xmm11, xmmword ptr [rdi+r8]
                        vmovups xmm6, xmmword ptr [rcx+rdx+10h]
                        vmovups xmm0, xmmword ptr [rcx+rdx]
                        vxorps  xmm10, xmm0, xmmword ptr cs:vNegateXYZ
                        vshufps xmm4, xmm10, xmm10, 0C9h ; 'É'
                        vmulps  xmm1, xmm4, xmm6
                        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
                        vmulps  xmm2, xmm0, xmm10
                        vsubps  xmm3, xmm2, xmm1
                        vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
                        vaddps  xmm5, xmm0, xmm0
                        vmulps  xmm1, xmm5, xmm4
                        vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
                        vmulps  xmm2, xmm0, xmm10
                        vsubps  xmm4, xmm2, xmm1
                        vshufps xmm2, xmm4, xmm4, 0C9h ; 'É'
                        vshufps xmm4, xmm11, xmm11, 0C9h ; 'É'
                        vshufps xmm0, xmm10, xmm10, 0FFh
                        vmulps  xmm1, xmm0, xmm5
                        vaddps  xmm3, xmm1, xmm6
                        vaddps  xmm0, xmm3, xmm2
                        vxorps  xmm9, xmm0, xmmword ptr cs:vNegateXYZ
                        vmulps  xmm1, xmm9, xmm4
                        vshufps xmm0, xmm9, xmm9, 0C9h ; 'É'
                        vmulps  xmm2, xmm0, xmm11
                        vsubps  xmm3, xmm2, xmm1
                        vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
                        vaddps  xmm7, xmm0, xmm0
                        vmulps  xmm1, xmm7, xmm4
                        vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
                        vmulps  xmm2, xmm0, xmm11
                        vsubps  xmm6, xmm2, xmm1
                        vshufps xmm0, xmm11, xmm11, 0AAh ; 'ª'
                        vshufps xmm3, xmm10, xmm10, 0B1h ; '±'
                        vmulps  xmm1, xmm3, xmm0
                        vxorps  xmm4, xmm1, xmmword ptr cs:vNPPN
                        vshufps xmm0, xmm11, xmm11, 55h ; 'U'
                        vshufps xmm2, xmm10, xmm10, 4Eh ; 'N'
                        vmulps  xmm1, xmm2, xmm0
                        vxorps  xmm2, xmm1, xmmword ptr cs:vPPNN
                        vaddps  xmm5, xmm4, xmm2
                        vshufps xmm0, xmm11, xmm11, 0
                        vshufps xmm3, xmm10, xmm10, 1Bh
                        vmulps  xmm1, xmm3, xmm0
                        vxorps  xmm4, xmm1, xmmword ptr cs:vPNPN
                        vshufps xmm8, xmm11, xmm11, 0FFh
                        vmulps  xmm2, xmm8, xmm10
                        vaddps  xmm0, xmm4, xmm2
                        vaddps  xmm1, xmm5, xmm0
                        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
                        vmulps  xmm2, xmm7, xmm8
                        vaddps  xmm3, xmm2, xmm9
                        vmovaps [rsp+20178h+var_200A8], xmm1
                        vaddps  xmm1, xmm3, xmm0
                        vaddps  xmm0, xmm1, xmmword ptr [rdi+r8+10h]
                        vmovaps [rsp+20178h+var_20088], xmm0
                      }
                    }
                  }
                }
              }
              v29 = v228;
              ++v27;
              v23 = v213;
              ++v25;
              v24 = v221;
              v26 = v220;
              v28 = v229;
            }
            while ( v25 < v227 );
            v16 = *(_DWORD *)v9;
            v17 = (int *)v9;
            v15 = v217;
            v18 = *(_DWORD *)v9;
          }
        }
        if ( v18 <= -4 )
        {
          v193 = -3 - v16;
          if ( -3 - v16 > 128 )
          {
            LODWORD(v203) = 128;
            LODWORD(v202) = -3 - v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v202, v203) )
              __debugbreak();
          }
          v9 += 32i64 * v193 + 76;
        }
        else
        {
          _RBX = v9;
          _RDI = v9;
          v9 += 136i64;
          v171 = *(const XSurface **)(_RBX + 56);
          if ( !v171 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4430, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
            __debugbreak();
          if ( *v17 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4432, ASSERT_TYPE_ASSERT, "(baseSurf->skinnedCachedOffset >= 0)", (const char *)&queryFormat, "baseSurf->skinnedCachedOffset >= 0") )
            __debugbreak();
          if ( !gfxBuf.skinnedCacheLockAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4433, ASSERT_TYPE_ASSERT, "(gfxBuf.skinnedCacheLockAddr)", (const char *)&queryFormat, "gfxBuf.skinnedCacheLockAddr") )
            __debugbreak();
          v172 = &gfxBuf.skinnedCacheLockAddr[*v17];
          __asm
          {
            vmovaps xmm0, [rsp+20178h+var_200B8]
            vmovss  xmm2, dword ptr [rsp+20178h+var_20098+4]
            vmovups xmmword ptr [rbx+4Ch], xmm0
            vmovss  xmm0, dword ptr [rsp+20178h+var_20098]
            vaddss  xmm1, xmm0, dword ptr [r12+38h]
            vmovss  dword ptr [rbx+5Ch], xmm1
            vaddss  xmm0, xmm2, dword ptr [r12+3Ch]
            vmovss  xmm1, dword ptr [rsp+20178h+var_20098+8]
            vmovss  dword ptr [rbx+60h], xmm0
            vaddss  xmm2, xmm1, dword ptr [r12+40h]
            vmovss  dword ptr [rbx+64h], xmm2
          }
          outVerts = (GfxPackedVertex *)v172;
          if ( *((_QWORD *)_R12 + 10) )
          {
            __asm
            {
              vmovaps xmm0, [rsp+20178h+var_200A8]
              vmovss  xmm2, dword ptr [rsp+20178h+var_20088+4]
              vmovups xmmword ptr [rdi+68h], xmm0
              vmovss  xmm0, dword ptr [rsp+20178h+var_20088]
              vaddss  xmm1, xmm0, dword ptr [r12+44h]
              vmovss  dword ptr [rbx+78h], xmm1
              vaddss  xmm0, xmm2, dword ptr [r12+48h]
              vmovss  xmm1, dword ptr [rsp+20178h+var_20088+8]
              vmovss  dword ptr [rbx+7Ch], xmm0
              vaddss  xmm2, xmm1, dword ptr [r12+4Ch]
              vmovss  dword ptr [rbx+80h], xmm2
            }
          }
          else
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rbx+4Ch]
              vmovsd  xmm1, qword ptr [rbx+5Ch]
            }
            v189 = *(_DWORD *)(_RBX + 100);
            __asm
            {
              vmovups xmmword ptr [rdi+68h], xmm0
              vmovsd  qword ptr [rdi+78h], xmm1
            }
            *(_DWORD *)(_RDI + 128) = v189;
          }
          if ( (v171->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1931, ASSERT_TYPE_ASSERT, "(XSurfaceIsSkinned( xsurf ))", (const char *)&queryFormat, "XSurfaceIsSkinned( xsurf )") )
            __debugbreak();
          sharedVertDataOffset = v171->sharedVertDataOffset;
          shared = v171->shared;
          if ( sharedVertDataOffset >= shared->dataSize )
          {
            LODWORD(v201) = shared->dataSize;
            LODWORD(outTension) = v171->sharedVertDataOffset;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 33, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedVertDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedVertDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", outTension, v201) )
              __debugbreak();
          }
          if ( (shared->flags & 1) != 0 )
            v192 = Stream_AddressSpace_ResolveHandle(&shared->data.streamedDataHandle);
          else
            v192 = (unsigned __int8 *)shared->data.streamedDataHandle.data;
          R_SkinXSurfaceWeightDQB((const GfxPackedVertex *)&v192[sharedVertDataOffset], v171, (const GfxModelSkinnedSurface *)_RBX, &boneDQ, outVerts, NULL);
          v15 = v217;
        }
        v14 = v216;
        v13 = v215;
        v10 = v214;
      }
      ++v15;
      v12 = v218;
      v217 = v15;
    }
    while ( v15 < (unsigned __int16)_R12[26] );
    __asm
    {
      vmovaps xmm11, [rsp+20178h+var_88]
      vmovaps xmm10, [rsp+20178h+var_78]
      vmovaps xmm9, [rsp+20178h+var_68]
      vmovaps xmm8, [rsp+20178h+var_58]
      vmovaps xmm7, [rsp+20178h+var_48]
      vmovaps xmm6, [rsp+20178h+var_38]
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_SkinXSurfaceBlendShapeCompute
==============
*/
void R_SkinXSurfaceBlendShapeCompute(ComputeCmdBufState *state, const SkinningComputeCmd *cmd, BlendShapesPerVertConstsData *perVertConstsData)
{
  BlendShapesPerVert *blendShapesPerVert; 
  unsigned int v6; 
  unsigned __int16 noTangentVertCount; 
  bool hasActiveBlendShapesBlendMaps; 
  int blendMapVertCount; 
  BlendShapesPerVertSurfConsts *v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  unsigned int tangentVerts; 
  BlendShapesPerVertInfo *offsets; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int surfs; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v25; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 
  int v31; 
  unsigned int v32; 
  unsigned int v33; 
  const XSurface *xsurf; 
  unsigned int v35; 
  unsigned __int16 tangentVertCount; 
  int v37; 

  xsurf = cmd->xsurf;
  blendShapesPerVert = cmd->xsurf->blendShapesPerVert;
  if ( blendShapesPerVert )
  {
    v6 = 0;
    tangentVertCount = blendShapesPerVert->tangentVertCount;
    noTangentVertCount = blendShapesPerVert->noTangentVertCount;
    if ( cmd->hasActiveBlendShapesVerts )
    {
      v37 = blendShapesPerVert->tangentVertCount;
      v31 = blendShapesPerVert->noTangentVertCount;
    }
    else
    {
      v37 = 0;
      v31 = 0;
    }
    hasActiveBlendShapesBlendMaps = cmd->hasActiveBlendShapesBlendMaps;
    blendMapVertCount = blendShapesPerVert->blendMapVertCount;
    v10 = &perVertConstsData->surfConsts[perVertConstsData->runningCounts.surfs];
    v10->VPageStart = R_UOB_GetBlendShapesPerVertDataVPageStart(cmd->xsurf->ugbID);
    v10->skinnedCacheOffset = cmd->skinnedCachedOffset;
    v11 = truncate_cast<unsigned short,unsigned int>((8 * (noTangentVertCount + blendMapVertCount + (unsigned int)tangentVertCount) + 15) >> 4) << 16;
    v10->surfWeightsOffset = v11 | truncate_cast<unsigned short,unsigned int>(perVertConstsData->runningCounts.weights);
    v10->tangentVertHeaderEnd = blendShapesPerVert->tangentVertCount;
    v10->noTangentVertHeaderEnd = blendShapesPerVert->noTangentVertCount + blendShapesPerVert->tangentVertCount;
    v10->blendMapVertHeaderEnd = blendShapesPerVert->noTangentVertCount + blendShapesPerVert->tangentVertCount + blendShapesPerVert->blendMapVertCount;
    v10->blendMapDataOffset = cmd->blendMapChannelsOffset;
    v10->unused = 0;
    R_SetBoundingBoxData(&xsurf->surfBounds, &v10->preSkinningBoundingBoxData);
    memcpy_0(&perVertConstsData->surfWeights[perVertConstsData->runningCounts.weights], cmd->modelBlendShapeTargetWeights, 4i64 * blendShapesPerVert->modelWeightsCount);
    v12 = blendMapVertCount;
    perVertConstsData->runningCounts.weights += blendShapesPerVert->modelWeightsCount;
    v13 = 0;
    tangentVerts = perVertConstsData->runningCounts.tangentVerts;
    v32 = (unsigned int)(v31 + 63) >> 6;
    offsets = perVertConstsData->offsets;
    v16 = (unsigned int)(v37 + 63) >> 6;
    if ( !hasActiveBlendShapesBlendMaps )
      v12 = 0;
    v17 = offsets->tangentVerts;
    v18 = (unsigned int)(v12 + 63) >> 6;
    v35 = perVertConstsData->runningCounts.blendMaps + ((offsets->blendMaps - v17) >> 2);
    v33 = perVertConstsData->runningCounts.noTangentVerts + ((offsets->noTangentVerts - v17) >> 2);
    if ( v16 )
    {
      do
      {
        surfs = perVertConstsData->runningCounts.surfs;
        if ( perVertConstsData->runningCounts.surfs > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)surfs, "unsigned", perVertConstsData->runningCounts.surfs) )
            __debugbreak();
          v16 = (unsigned int)(v37 + 63) >> 6;
        }
        v20 = v13 + tangentVerts;
        perVertConstsData->workGroupConsts[v20].surfIndex = surfs;
        v21 = v13 << 6;
        if ( v13 << 6 > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)((_WORD)v13 << 6), "unsigned", v21) )
            __debugbreak();
          v16 = (unsigned int)(v37 + 63) >> 6;
        }
        ++v13;
        perVertConstsData->workGroupConsts[v20].vtxOffset = v21;
      }
      while ( v13 < v16 );
      v6 = 0;
    }
    v22 = v32;
    v23 = 0;
    if ( v32 )
    {
      do
      {
        v24 = perVertConstsData->runningCounts.surfs;
        if ( perVertConstsData->runningCounts.surfs > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v24, "unsigned", perVertConstsData->runningCounts.surfs) )
          __debugbreak();
        v25 = v23 + v33;
        perVertConstsData->workGroupConsts[v25].surfIndex = v24;
        v26 = blendShapesPerVert->tangentVertCount;
        v27 = v26 + (v23 << 6);
        if ( v27 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v26 + ((_WORD)v23 << 6)), "unsigned", v27) )
          __debugbreak();
        ++v23;
        perVertConstsData->workGroupConsts[v25].vtxOffset = v27;
      }
      while ( v23 < v32 );
      v6 = 0;
    }
    if ( v18 )
    {
      do
      {
        v28 = perVertConstsData->runningCounts.surfs;
        if ( perVertConstsData->runningCounts.surfs > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v28, "unsigned", perVertConstsData->runningCounts.surfs) )
          __debugbreak();
        v29 = v6 + v35;
        perVertConstsData->workGroupConsts[v29].surfIndex = v28;
        v30 = blendShapesPerVert->noTangentVertCount + blendShapesPerVert->tangentVertCount + (v6 << 6);
        if ( v30 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v30, "unsigned", v30) )
          __debugbreak();
        ++v6;
        perVertConstsData->workGroupConsts[v29].vtxOffset = v30;
      }
      while ( v6 < v18 );
      v22 = v32;
    }
    perVertConstsData->runningCounts.noTangentVerts += v22;
    perVertConstsData->runningCounts.tangentVerts += (unsigned int)(v37 + 63) >> 6;
    perVertConstsData->runningCounts.blendMaps += v18;
    ++perVertConstsData->runningCounts.surfs;
  }
}

/*
==============
R_SkinXSurfaceCalcTangentFrameCompute
==============
*/
void R_SkinXSurfaceCalcTangentFrameCompute(ComputeCmdBufState *state, const SkinningComputeCmd *cmd, RecalcTangentFrameConsts *recalcTangentFrameConsts)
{
  const XSurface *xsurf; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int surfCount; 
  unsigned int v8; 
  __int64 v9; 

  xsurf = cmd->xsurf;
  if ( cmd->xsurf->blendShapesRecalcTangentFrameData )
  {
    v5 = ((unsigned int)xsurf->vertCount + 63) >> 6;
    if ( v5 + recalcTangentFrameConsts->workGroupCount < 0x1000 )
    {
      if ( recalcTangentFrameConsts->surfCount + 1 < 0x40 )
      {
        recalcTangentFrameConsts->surfConsts[recalcTangentFrameConsts->surfCount].skinnedCacheOffset = cmd->skinnedCachedOffset;
        recalcTangentFrameConsts->surfConsts[recalcTangentFrameConsts->surfCount].vtxCount = xsurf->vertCount;
        v6 = 0;
        recalcTangentFrameConsts->surfConsts[recalcTangentFrameConsts->surfCount].VPageStart = R_UOB_GetRecalcTangentFrameDataVPageStart(xsurf->ugbID);
        recalcTangentFrameConsts->surfConsts[recalcTangentFrameConsts->surfCount].unused = 0;
        R_SetBoundingBoxData(&xsurf->surfBounds, &recalcTangentFrameConsts->surfConsts[recalcTangentFrameConsts->surfCount].preSkinningBoundingBoxData);
        if ( v5 )
        {
          do
          {
            surfCount = recalcTangentFrameConsts->surfCount;
            if ( surfCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)surfCount, "unsigned", recalcTangentFrameConsts->surfCount) )
              __debugbreak();
            recalcTangentFrameConsts->workGroupConsts[v6 + recalcTangentFrameConsts->workGroupCount].surfIndex = surfCount;
            v8 = v6 << 6;
            if ( v6 << 6 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)((_WORD)v6 << 6), "unsigned", v8) )
              __debugbreak();
            v9 = v6 + recalcTangentFrameConsts->workGroupCount;
            ++v6;
            recalcTangentFrameConsts->workGroupConsts[v9].vtxOffset = v8;
          }
          while ( v6 < v5 );
        }
        recalcTangentFrameConsts->workGroupCount += v5;
        ++recalcTangentFrameConsts->surfCount;
      }
      else
      {
        R_WarnOncePerFrame(R_WARN_MAX_BLEND_SHAPES_RECALC_TANGENT_FRAME_SURFS, cmd, cmd);
      }
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_MAX_BLEND_SHAPES_RECALC_TANGENT_FRAME_WORKGROUPS, cmd, cmd);
    }
  }
}

/*
==============
R_SkinXSurfaceSkinningBlendshapeInit
==============
*/
void R_SkinXSurfaceSkinningBlendshapeInit(ComputeCmdBufState *state, const SkinningComputeCmd *cmd, BlendShapesPerVertInfo *blendShapesPerVertOffsets)
{
  const XSurface *xsurf; 
  unsigned int SurfVirtPageStart; 
  int blendMapChannelsOffset; 
  int v9; 
  unsigned int v10; 
  GfxVertexBufferState *skinnedCacheVb; 
  GfxShaderBufferView *p_rwView; 
  int v13; 
  ComputeShader *skinningBlendShapeVertsCopyToOutputComputeShader; 
  unsigned __int16 *blendShapesPerVert; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  GfxShaderBufferView *views[2]; 
  int data[2]; 
  int v22; 
  unsigned int v23; 
  vec4_t outBoundingBoxData; 

  xsurf = cmd->xsurf;
  if ( (cmd->xsurf->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 2025, ASSERT_TYPE_ASSERT, "(XSurfaceIsSkinned( xsurf ))", (const char *)&queryFormat, "XSurfaceIsSkinned( xsurf )") )
    __debugbreak();
  data[0] = xsurf->vertCount;
  data[1] = cmd->skinnedCachedOffset;
  SurfVirtPageStart = R_UVB_GetSurfVirtPageStart(xsurf->ugbID);
  blendMapChannelsOffset = cmd->blendMapChannelsOffset;
  v23 = SurfVirtPageStart;
  v9 = v22;
  if ( blendMapChannelsOffset != -1 )
    v9 = blendMapChannelsOffset;
  v22 = v9;
  R_SetBoundingBoxData(&xsurf->surfBounds, &outBoundingBoxData);
  v10 = 0;
  R_UploadAndSetComputeConstants(state, 0, data, 0x20u, NULL);
  skinnedCacheVb = state->data->skinnedCacheVb;
  views[0] = &gfxBuf.unifiedVertexBuffer.view;
  p_rwView = (GfxShaderBufferView *)&skinnedCacheVb->wrappedBuffer.rwView;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &gfxBuf.uvbVirtPageTableBuffer.view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)views);
  if ( cmd->hasActiveBlendShapes )
  {
    views[0] = p_rwView;
    v13 = 1;
    if ( blendMapChannelsOffset == -1 )
    {
      skinningBlendShapeVertsCopyToOutputComputeShader = rgp.skinningBlendShapeVertsCopyToOutputComputeShader;
    }
    else
    {
      v13 = 2;
      skinningBlendShapeVertsCopyToOutputComputeShader = rgp.skinningBlendShapesVertsCopyToOutputBlendMapWeightsInitComputeShader;
      views[1] = (GfxShaderBufferView *)&state->data->mayhemChannelsVb->wrappedBuffer.rwView;
    }
    R_SetComputeShader(state, skinningBlendShapeVertsCopyToOutputComputeShader);
    R_SetComputeRWViewsWithCounters(state, 0, v13, (const GfxShaderBufferRWView *const *)views, NULL);
    R_Dispatch(state, ((unsigned int)xsurf->vertCount + 63) >> 6, 1u, 1u);
    blendShapesPerVert = (unsigned __int16 *)xsurf->blendShapesPerVert;
    if ( blendShapesPerVert )
    {
      v16 = 0;
      v17 = ((unsigned int)blendShapesPerVert[13] + 63) >> 6;
      v18 = ((unsigned int)blendShapesPerVert[14] + 63) >> 6;
      if ( cmd->hasActiveBlendShapesVerts )
        v16 = ((unsigned int)blendShapesPerVert[12] + 63) >> 6;
      blendShapesPerVertOffsets->tangentVerts += v16;
      v19 = 0;
      if ( cmd->hasActiveBlendShapesVerts )
        v19 = v17;
      blendShapesPerVertOffsets->noTangentVerts += v19;
      if ( cmd->hasActiveBlendShapesBlendMaps )
        v10 = v18;
      ++blendShapesPerVertOffsets->surfs;
      blendShapesPerVertOffsets->blendMaps += v10;
      blendShapesPerVertOffsets->weights += blendShapesPerVert[11];
    }
  }
  else if ( blendMapChannelsOffset != -1 )
  {
    R_SetComputeShader(state, rgp.skinningBlendShapeInitBlendMapWeights);
    views[0] = (GfxShaderBufferView *)&state->data->mayhemChannelsVb->wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)views, NULL);
    R_Dispatch(state, ((unsigned int)xsurf->vertCount + 63) >> 6, 1u, 1u);
  }
}

/*
==============
R_SkinXSurfaceWeight0DQB
==============
*/
void R_SkinXSurfaceWeight0DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v19; 
  __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v25; 
  const float4 *v270; 
  const float4 *v271; 
  const float4 *v289; 
  const float4 *v290; 
  PackedQuatDec3n v307; 
  bool v314; 
  int v315; 
  int v316; 
  __int64 v317; 
  __int64 v318; 
  int v319; 
  __int64 v320; 
  unsigned __int64 v332; 
  float4 v334; 
  __int128 v335; 
  __int128 v336; 
  __int128 v337; 
  vec4_t out; 
  float4 v339; 
  PackedQuatDec3n v340; 

  _R14 = vertsOut;
  _RDI = blend;
  _RBX = vertsIn;
  v19 = vertCount;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 590, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 591, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 592, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v19;
  v21 = v19;
  v22 = 20 * v19;
  if ( (unsigned __int64)(20 * v19) > 0x200 )
    v22 = 512i64;
  for ( _RAX = 0i64; _RAX < v22; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  _R15 = 512i64;
  v25 = 2 * v19;
  _RAX = 0i64;
  if ( (unsigned __int64)(2 * v19) > 0x200 )
    v25 = 512i64;
  if ( (unsigned __int64)(2 * v19) <= 0x200 )
    _R15 = 0i64;
  if ( v25 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v25 );
  }
  if ( (_DWORD)v19 )
  {
    __asm
    {
      vmovups xmm1, cs:__xmm@35800004358000043580000435800004
      vmovaps [rsp+1D0h+var_30], xmm6
    }
    _R13 = (char *)&_RBX->xyz + 4;
    __asm
    {
      vmovaps [rsp+1D0h+var_40], xmm7
      vmovaps [rsp+1D0h+var_50], xmm8
    }
    _R12 = 508i64;
    __asm { vmovaps [rsp+1D0h+var_60], xmm9 }
    if ( _RDX <= 0x200 )
      _R12 = -4i64;
    __asm
    {
      vmovaps [rsp+1D0h+var_70], xmm10
      vmovaps [rsp+1D0h+var_80], xmm11
      vmovaps [rsp+1D0h+var_90], xmm12
      vmovaps [rsp+1D0h+var_A0], xmm13
      vmovaps [rsp+1D0h+var_B0], xmm14
      vmovdqu xmm14, cs:__xmm@000003ff000003ff000003ff000003ff
      vmovaps [rsp+1D0h+var_C0], xmm15
      vxorps  xmm13, xmm13, xmm13
    }
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r12+r13]
        prefetcht0 byte ptr [r15+rdi]
        vmovups xmm15, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm12, xmmword ptr [r13+4]
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      }
      v332 = *(_QWORD *)(_R13 - 4);
      __asm { vpshufd xmm3, xmm12, 0 }
      v339.v.m128_i32[0] = v332 & 0x1FFFFF;
      v339.v.m128_i32[1] = (v332 >> 21) & 0x1FFFFF;
      v339.v.m128_i32[2] = (v332 >> 42) & 0x1FFFFF;
      __asm { vcvtdq2ps xmm0, xmmword ptr [rbp+0D0h+var_F0.v] }
      _RAX = bbData;
      __asm
      {
        vmulps  xmm1, xmm0, xmm1
        vsubps  xmm2, xmm1, xmm15
        vmovups [rsp+1D0h+var_170], xmm12
        vbroadcastss xmm0, dword ptr [rax+0Ch]
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [rax]
        vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vpsrld  xmm1, xmm3, 9
        vpand   xmm0, xmm1, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vandps  xmm0, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm15, xmm0
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm13
        vcmpltps xmm5, xmm9, xmm13
        vmovups [rsp+1D0h+var_180], xmm4
        vcmpltps xmm0, xmm10, xmm13
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm15
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm15, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm15
        vandnps xmm0, xmm6, xmm10
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm4, xmm5, xmm1
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vmovups [rbp+0D0h+var_110], xmm0
        vmovups xmmword ptr [rbp+0D0h+var_F0.v], xmm4
        vpshufd xmm4, xmm12, 0FFh
        vpsrld  xmm0, xmm4, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm4, xmm14
        vpsrld  xmm0, xmm4, 14h
        vpand   xmm1, xmm0, xmm14
        vpunpckldq xmm3, xmm2, xmm1
        vpsrld  xmm2, xmm4, 0Ah
        vpand   xmm0, xmm2, xmm14
        vpunpckldq xmm1, xmm3, xmm0
        vcvtdq2ps xmm3, xmm1
        vmulps  xmm2, xmm3, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm2, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm15, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm13, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis((vector3 *)(v332 & 0x1FFFFF), (const float4 *)_RDX);
      __asm
      {
        vmovups xmm5, [rsp+1D0h+var_180]
        vmovups xmm14, xmm0
        vmovups xmm13, xmm2
      }
      _RAX = &boneDQ[*_RDI];
      __asm
      {
        vmovups xmm6, xmmword ptr [rax]
        vmulps  xmm1, xmm6, xmm6
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm3, xmm2, xmm2
        vrsqrtps xmm4, xmm3
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm3
        vsubps  xmm3, xmm15, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm10, xmm1, xmmword ptr [rax+10h]
        vmulps  xmm15, xmm6, xmm1
        vmovups xmm6, xmmword ptr [rbp+0D0h+var_F0.v]
        vshufps xmm9, xmm15, xmm15, 0D2h ; 'Ò'
        vshufps xmm7, xmm15, xmm15, 0C9h ; 'É'
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vshufps xmm8, xmm15, xmm15, 0FFh
        vmulps  xmm0, xmm5, xmm8
        vaddps  xmm12, xmm0, xmm4
        vshufps xmm0, xmm13, xmm13, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm13, xmm13, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm13, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm14, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm7
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vshufps xmm11, xmm10, xmm10, 0FFh
      }
      _RAX = bbData;
      __asm
      {
        vmulps  xmm0, xmm6, xmm8
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm1, xmm3, xmm13
        vmovups xmm13, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmovups [rbp+0D0h+var_130], xmm1
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm13
        vaddps  xmm1, xmm3, xmm14
        vmovups [rbp+0D0h+var_120], xmm1
        vmulps  xmm5, xmm10, xmm8
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm13
        vaddps  xmm0, xmm3, xmmword ptr [rbp+0D0h+var_F0.v]
        vmovups xmmword ptr [rbp+0D0h+var_F0.v], xmm0
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm15, xmm11
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm5, xmm2, xmm13
        vmulps  xmm4, xmm13, xmm15
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm12, xmm12, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm3, xmm2, [rsp+1D0h+var_180]
        vmovups xmm0, xmmword ptr [rax+20h]
        vmulps  xmm14, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vshufps xmm13, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm12, xmm0, xmm0, 0C9h ; 'É'
        vaddps  xmm4, xmm5, xmm3
        vsubps  xmm4, xmm4, xmmword ptr [rax+30h]
        vshufps xmm5, xmm0, xmm0, 0FFh
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm12
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm13
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm10, xmm0, xmm0
        vxorps  xmm15, xmm15, xmm15
        vsubps  xmm1, xmm15, xmm5
        vmulps  xmm0, xmm10, xmm1
        vaddps  xmm9, xmm0, xmm4
        vmovups xmm4, [rbp+0D0h+var_130]
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm8, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm2, xmm1, xmm8
        vshufps xmm7, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm5, xmm0, xmm0
        vshufps xmm6, xmm14, xmm14, 0FFh
        vsubps  xmm1, xmm15, xmm6
        vmulps  xmm0, xmm5, xmm1
        vaddps  xmm4, xmm0, xmm4
        vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm2, xmm0, xmm8
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vaddps  xmm11, xmm1, xmm4
        vmovups xmm4, [rbp+0D0h+var_120]
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm8
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm3, xmm0, xmm0
        vshufps xmm2, xmm3, xmm3, 0D2h ; 'Ò'
        vsubps  xmm1, xmm15, xmm6
        vmulps  xmm1, xmm3, xmm1
        vaddps  xmm5, xmm1, xmm4
        vshufps xmm1, xmm3, xmm3, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm8
        vmovups xmm1, xmmword ptr [rbp+0D0h+var_F0.v]
        vmulps  xmm4, xmm2, xmm7
        vsubps  xmm2, xmm4, xmm3
        vmovups xmm0, xmm14
        vaddps  xmm7, xmm2, xmm5
      }
      Float4QuatRotateInv(v271, v270, &v339);
      _RAX = bbData;
      __asm
      {
        vmovups xmm1, [rbp+0D0h+var_110]
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm4, xmm0, xmm12
        vshufps xmm2, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm3, xmm2, xmm13
        vbroadcastss xmm2, dword ptr [rax+1Ch]
        vsubps  xmm0, xmm4, xmm3
        vaddps  xmm4, xmm0, xmm9
        vsubps  xmm5, xmm4, xmmword ptr [rax+10h]
        vrcpps  xmm0, xmm2
        vmulps  xmm3, xmm5, xmm0
        vmulps  xmm2, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm0, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm0, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, xmmword ptr [rbp+0D0h+var_F0.v]
        vcvtps2dq xmm8, xmm3
      }
      Float4PackSelfVisX(v290, v289, &v334);
      _ECX = 0;
      __asm { vmovd   xmm1, ecx }
      _EAX = *((_DWORD *)_R13 + 3) & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm6, xmm1, xmm0, xmm2
        vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
        vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm11, xmm11, 0D2h ; 'Ò'
        vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups [rbp+0D0h+var_120], xmm2
        vmovups [rbp+0D0h+var_130], xmm7
        vmovups [rbp+0D0h+var_110], xmm11
      }
      AxisComponentsToQuat((const vec3_t *)&v335, (const vec3_t *)&v336, (const vec3_t *)&v337, &out);
      __asm { vmovaps xmm1, xmm6; binormalSign }
      v307.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      __asm { vmovups xmm0, [rsp+1D0h+var_170] }
      v340.packed = v307.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp-10h], 8
        vmovd   r8d, xmm8
        vpextrd rdx, xmm8, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [rbp+0D0h+var_F0.v], xmm8 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      __asm
      {
        vmovups xmmword ptr [r14+8], xmm1
        vpextrd rcx, xmm8, 2
        vmovdqu xmm14, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm1, cs:__xmm@35800004358000043580000435800004
      }
      ++_R14;
      _R13 += 20;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      _RDI += 2;
      v314 = (int)_RCX < 0;
      v315 = _RCX;
      v316 = _RDX;
      if ( v314 )
        v315 = 0;
      v317 = (*(_QWORD *)&v315 & 0x1FFFFFi64) << 21;
      __asm { vxorps  xmm13, xmm13, xmm13 }
      if ( (_RDX & 0x80000000) != 0i64 )
        v316 = 0;
      v318 = *(_QWORD *)&v316 & 0x1FFFFFi64 | v317;
      v319 = _ER8;
      v320 = v318 << 21;
      if ( _ER8 < 0 )
        v319 = 0;
      _R14[-1].xyz = (PackedPosition)(v332 & 0x8000000000000000ui64 | *(_QWORD *)&v319 & 0x1FFFFFi64 | v320);
      --v21;
    }
    while ( v21 );
    __asm
    {
      vmovaps xmm15, [rsp+1D0h+var_C0]
      vmovaps xmm14, [rsp+1D0h+var_B0]
      vmovaps xmm13, [rsp+1D0h+var_A0]
      vmovaps xmm12, [rsp+1D0h+var_90]
      vmovaps xmm11, [rsp+1D0h+var_80]
      vmovaps xmm10, [rsp+1D0h+var_70]
      vmovaps xmm9, [rsp+1D0h+var_60]
      vmovaps xmm8, [rsp+1D0h+var_50]
      vmovaps xmm7, [rsp+1D0h+var_40]
      vmovaps xmm6, [rsp+1D0h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight1DQB
==============
*/
void R_SkinXSurfaceWeight1DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v18; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v26; 
  unsigned __int64 v28; 
  unsigned __int64 v39; 
  const float4 *v147; 
  const float4 *v287; 
  const float4 *v288; 
  const float4 *v305; 
  const float4 *v306; 
  PackedQuatDec3n v317; 
  bool v324; 
  int v325; 
  int v326; 
  __int64 v327; 
  __int64 v328; 
  int v329; 
  __int64 v330; 
  const float4 *v343; 
  float4 v344; 
  float4 v345; 
  __int128 v346; 
  __int128 v347; 
  vec4_t out; 
  float4 v349; 
  PackedQuatDec3n v350; 

  _R14 = vertsOut;
  _R12 = bbData;
  v18 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 660, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 661, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 662, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v18;
  v22 = v18;
  v23 = 20 * v18;
  if ( (unsigned __int64)(20 * v18) > 0x200 )
    v23 = 512i64;
  _ER10 = 0;
  for ( _RAX = 0i64; _RAX < v23; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v26 = 2 * v18;
  _RAX = 0i64;
  v28 = 2 * v18;
  if ( (unsigned __int64)(2 * v18) > 0x200 )
    v28 = 512i64;
  if ( v28 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v28 );
  }
  if ( (_DWORD)v18 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _RAX = (const float4 *)(_RDI + 1);
    __asm { vmovaps [rsp+1C0h+var_30], xmm6 }
    _R13 = (char *)&_RBX->xyz + 4;
    __asm
    {
      vmovaps [rsp+1C0h+var_40], xmm7
      vmovaps [rsp+1C0h+var_50], xmm8
      vmovaps [rsp+1C0h+var_60], xmm9
    }
    _RDI = 508i64;
    __asm { vmovaps [rsp+1C0h+var_70], xmm10 }
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    __asm
    {
      vmovaps [rsp+1C0h+var_80], xmm11
      vmovaps [rsp+1C0h+var_90], xmm12
      vmovaps [rsp+1C0h+var_A0], xmm13
    }
    _R15 = 510i64;
    __asm { vmovaps [rsp+1C0h+var_B0], xmm14 }
    if ( v26 <= 0x200 )
      _R15 = -2i64;
    __asm
    {
      vmovaps [rsp+1C0h+var_C0], xmm15
      vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
      vxorps  xmm14, xmm14, xmm14
    }
    v343 = _RAX;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [rdi+r13]
        prefetcht0 byte ptr [rax+r15]
        vmovups xmm13, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vmovups xmm12, xmmword ptr [r13+4]
      }
      v39 = *(_QWORD *)(_R13 - 4);
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r10d
      }
      v349.v.m128_i32[0] = v39 & 0x1FFFFF;
      v349.v.m128_i32[1] = (v39 >> 21) & 0x1FFFFF;
      v349.v.m128_i32[2] = (v39 >> 42) & 0x1FFFFF;
      _EAX = *((_DWORD *)_R13 + 3) & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+1C0h+var_190], xmm0
        vcvtdq2ps xmm0, xmmword ptr [rbp+0C0h+var_F0.v]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [r12+0Ch]
        vsubps  xmm2, xmm1, xmm13
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [r12]
        vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm13, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm13
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm13, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
        vmovups [rbp+0C0h+var_120], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vdivps  xmm4, xmm5, xmm1
        vmovups [rbp+0C0h+var_110], xmm0
        vmovups [rsp+1C0h+var_170], xmm12
        vmovups [rbp+0C0h+var_130], xmm4
        vpshufd xmm1, xmm12, 0FFh
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm1, xmm15
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm13, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm14, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis((vector3 *)(v39 & 0x1FFFFF), (const float4 *)_RDX);
      _R8 = boneDQ;
      _RDX = v343;
      __asm
      {
        vmovups xmm15, xmm0
        vmovups xmmword ptr [rbp+0C0h+var_F0.v], xmm0
        vmovups xmm14, xmm2
        vmovq   xmm0, qword ptr [rdx+2]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm3, xmm0, xmmword ptr cs:g_short4BoneWeightScale.v
        vsubps  xmm5, xmm13, xmm3
      }
      _RAX = 32i64 * v343[-1].v.m128_u16[7];
      v147 = (const float4 *)(32i64 * v343->v.m128_u16[0]);
      __asm
      {
        vmovups xmm7, xmmword ptr [rax+r8]
        vmulps  xmm0, xmm7, xmmword ptr [rcx+r8]
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vorps   xmm1, xmm0, xmm13
        vmulps  xmm4, xmm1, xmm3
        vmulps  xmm0, xmm4, xmmword ptr [rcx+r8]
        vmulps  xmm1, xmm4, xmmword ptr [rcx+r8+10h]
        vmulps  xmm3, xmm5, xmmword ptr [rax+r8+10h]
        vmulps  xmm2, xmm5, xmm7
        vaddps  xmm6, xmm0, xmm2
        vaddps  xmm5, xmm1, xmm3
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vsubps  xmm3, xmm13, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm13, xmm6, xmm1
        vshufps xmm8, xmm13, xmm13, 0FFh
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm6, [rbp+0C0h+var_130]
        vmovups xmm5, [rbp+0C0h+var_120]
        vshufps xmm9, xmm13, xmm13, 0D2h ; 'Ò'
        vshufps xmm7, xmm13, xmm13, 0C9h ; 'É'
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm5, xmm8
        vaddps  xmm12, xmm0, xmm4
        vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm14, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm15, xmm15, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm15, xmm15, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm15, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm6, xmm8
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmovups xmm4, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm15, xmm3, xmm14
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm0, xmm3, xmmword ptr [rbp+0C0h+var_F0.v]
        vmovups xmmword ptr [rbp+0C0h+var_F0.v], xmm0
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm14, xmm3, [rbp+0C0h+var_130]
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm5, xmm10, xmm8
        vshufps xmm11, xmm10, xmm10, 0FFh
        vmulps  xmm0, xmm13, xmm11
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm5, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm4, xmm13, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm12, xmm12, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vmovups xmm0, xmmword ptr [r12+20h]
        vaddps  xmm3, xmm2, [rbp+0C0h+var_120]
        vmulps  xmm12, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vaddps  xmm4, xmm5, xmm3
        vsubps  xmm4, xmm4, xmmword ptr [r12+30h]
        vmovups [rbp+0C0h+var_130], xmm14
        vshufps xmm5, xmm0, xmm0, 0FFh
        vshufps xmm11, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm10, xmm0, xmm0, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm10
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm11
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm9, xmm0, xmm0
        vshufps xmm7, xmm12, xmm12, 0D2h ; 'Ò'
        vxorps  xmm13, xmm13, xmm13
        vsubps  xmm1, xmm13, xmm5
        vmulps  xmm0, xmm9, xmm1
        vaddps  xmm8, xmm0, xmm4
        vshufps xmm0, xmm15, xmm15, 0D2h ; 'Ò'
        vshufps xmm1, xmm15, xmm15, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm7
        vshufps xmm4, xmm12, xmm12, 0FFh
        vsubps  xmm1, xmm13, xmm4
        vshufps xmm6, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm6
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm2, xmm0, xmm0
        vmulps  xmm0, xmm2, xmm1
        vshufps xmm1, xmm2, xmm2, 0D2h ; 'Ò'
        vmulps  xmm4, xmm1, xmm6
        vaddps  xmm5, xmm0, xmm15
        vshufps xmm2, xmm2, xmm2, 0C9h ; 'É'
        vmulps  xmm3, xmm2, xmm7
        vsubps  xmm1, xmm4, xmm3
        vaddps  xmm7, xmm1, xmm5
        vmovups xmm1, xmmword ptr [rbp+0C0h+var_F0.v]
        vmovups xmm0, xmm12
      }
      Float4QuatRotateInv(v147, v343, &v349);
      __asm
      {
        vmovups xmm1, xmm14
        vmovups xmm0, xmm12
      }
      Float4QuatRotateInv(v288, v287, &v345);
      __asm
      {
        vmovups xmm1, [rbp+0C0h+var_110]
        vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
        vmulps  xmm4, xmm0, xmm10
        vshufps xmm2, xmm9, xmm9, 0C9h ; 'É'
        vmulps  xmm3, xmm2, xmm11
        vbroadcastss xmm2, dword ptr [r12+1Ch]
        vsubps  xmm0, xmm4, xmm3
        vaddps  xmm4, xmm0, xmm8
        vsubps  xmm5, xmm4, xmmword ptr [r12+10h]
        vrcpps  xmm0, xmm2
        vmulps  xmm3, xmm5, xmm0
        vmulps  xmm2, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm0, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm0, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, [rbp+0C0h+var_130]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v306, v305, &v344);
      __asm
      {
        vmovups xmm2, xmmword ptr [rbp+0C0h+var_F0.v]
        vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
        vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vmovups [rbp+0C0h+var_130], xmm2
        vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
        vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vmovups [rbp+0C0h+var_120], xmm2
        vmovups [rbp+0C0h+var_110], xmm7
      }
      AxisComponentsToQuat((const vec3_t *)&v345, (const vec3_t *)&v346, (const vec3_t *)&v347, &out);
      __asm
      {
        vmovss  xmm0, [rsp+1C0h+var_190]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+1C0h+var_190], xmm0
      }
      v317.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      __asm { vmovups xmm0, [rsp+1C0h+var_170] }
      v350.packed = v317.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp-20h], 8
        vmovups xmmword ptr [rbp+0C0h+var_F0.v], xmm6
        vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
      }
      _R13 += 20;
      __asm { vpextrd rcx, xmm6, 2 }
      _ER10 = 0;
      __asm
      {
        vmovd   r8d, xmm6
        vpextrd rdx, xmm6, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [r14+8], xmm1 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      ++_R14;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v324 = (int)_RCX < 0;
      v325 = _RCX;
      v326 = _RDX;
      if ( v324 )
        v325 = 0;
      v327 = (*(_QWORD *)&v325 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v326 = 0;
      v328 = *(_QWORD *)&v326 & 0x1FFFFFi64 | v327;
      v329 = _ER8;
      v330 = v328 << 21;
      if ( _ER8 < 0 )
        v329 = 0;
      _R14[-1].xyz = (PackedPosition)(v39 & 0x8000000000000000ui64 | *(_QWORD *)&v329 & 0x1FFFFFi64 | v330);
      _RAX = (const float4 *)&v343->v.m128_u16[4];
      v343 = (const float4 *)((char *)v343 + 8);
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm15, [rsp+1C0h+var_C0]
      vmovaps xmm14, [rsp+1C0h+var_B0]
      vmovaps xmm13, [rsp+1C0h+var_A0]
      vmovaps xmm12, [rsp+1C0h+var_90]
      vmovaps xmm11, [rsp+1C0h+var_80]
      vmovaps xmm10, [rsp+1C0h+var_70]
      vmovaps xmm9, [rsp+1C0h+var_60]
      vmovaps xmm8, [rsp+1C0h+var_50]
      vmovaps xmm7, [rsp+1C0h+var_40]
      vmovaps xmm6, [rsp+1C0h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight2DQB
==============
*/
void R_SkinXSurfaceWeight2DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v18; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v26; 
  unsigned __int64 v28; 
  unsigned __int64 v38; 
  const float4 *v149; 
  const float4 *v153; 
  const float4 *v285; 
  const float4 *v286; 
  const float4 *v289; 
  const float4 *v290; 
  const float4 *v307; 
  const float4 *v308; 
  PackedQuatDec3n v320; 
  bool v326; 
  int v327; 
  int v328; 
  __int64 v329; 
  __int64 v330; 
  int v331; 
  __int64 v332; 
  char *v345; 
  float4 v346; 
  float4 v347; 
  float4 v348; 
  float4 v349; 
  __int128 v350; 
  __int128 v351; 
  vec4_t out; 
  __int128 v353; 
  PackedQuatDec3n v354; 

  _R14 = vertsOut;
  _R13 = bbData;
  v18 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 751, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 752, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 753, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v18;
  v22 = v18;
  v23 = 20 * v18;
  if ( (unsigned __int64)(20 * v18) > 0x200 )
    v23 = 512i64;
  _ER11 = 0;
  for ( _RAX = 0i64; _RAX < v23; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v26 = 2 * v18;
  _RAX = 0i64;
  v28 = 2 * v18;
  if ( (unsigned __int64)(2 * v18) > 0x200 )
    v28 = 512i64;
  if ( v28 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v28 );
  }
  if ( (_DWORD)v18 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _R9 = (char *)&_RBX->xyz + 4;
    __asm { vmovaps [rsp+1E0h+var_30], xmm6 }
    _R12 = (unsigned __int16 *)(_RDI + 1);
    __asm
    {
      vmovaps [rsp+1E0h+var_40], xmm7
      vmovaps [rsp+1E0h+var_50], xmm8
      vmovaps [rsp+1E0h+var_60], xmm9
    }
    _RDI = 508i64;
    __asm { vmovaps [rsp+1E0h+var_70], xmm10 }
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    __asm
    {
      vmovaps [rsp+1E0h+var_80], xmm11
      vmovaps [rsp+1E0h+var_90], xmm12
      vmovaps [rsp+1E0h+var_A0], xmm13
    }
    _R15 = 510i64;
    __asm { vmovaps [rsp+1E0h+var_B0], xmm14 }
    if ( v26 <= 0x200 )
      _R15 = -2i64;
    __asm
    {
      vmovaps [rsp+1E0h+var_C0], xmm15
      vxorps  xmm13, xmm13, xmm13
    }
    v345 = (char *)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r9+rdi]
        prefetcht0 byte ptr [r15+r12]
        vmovups xmm14, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vmovups xmm12, xmmword ptr [r9+4]
      }
      v38 = *(_QWORD *)(_R9 - 4);
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r11d
      }
      LODWORD(v353) = v38 & 0x1FFFFF;
      DWORD1(v353) = (v38 >> 21) & 0x1FFFFF;
      DWORD2(v353) = (v38 >> 42) & 0x1FFFFF;
      _EAX = *((_DWORD *)_R9 + 3) & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+1E0h+var_1B0], xmm0
        vcvtdq2ps xmm0, [rbp+0E0h+var_F0]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [r13+0Ch]
        vsubps  xmm2, xmm1, xmm14
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [r13+0]
        vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm14, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm13
        vcmpltps xmm5, xmm9, xmm13
        vcmpltps xmm0, xmm10, xmm13
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm14
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm14, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm14
        vandnps xmm0, xmm6, xmm10
        vmovups [rbp+0E0h+var_F0], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vdivps  xmm15, xmm5, xmm1
        vmovups [rbp+0E0h+var_110], xmm0
        vmovups [rsp+1E0h+var_170], xmm12
        vmovups [rsp+1E0h+var_190], xmm15
        vmovdqu xmm4, cs:__xmm@000003ff000003ff000003ff000003ff
        vpshufd xmm1, xmm12, 0FFh
        vpand   xmm2, xmm1, xmm4
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm4
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm4
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm14, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm13, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis((vector3 *)(v38 & 0x1FFFFF), (const float4 *)_RDX);
      _R8 = boneDQ;
      __asm
      {
        vmovups xmm13, xmm0
        vmovq   xmm0, qword ptr [r12+2]
        vpmovzxwd xmm1, xmm0
        vmovups xmm11, xmm2
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm4, xmm0, xmmword ptr cs:g_short4BoneWeightScale.v
        vmovq   xmm0, qword ptr [r12+6]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm5, xmm0, xmmword ptr cs:g_short4BoneWeightScale.v
      }
      v149 = (const float4 *)(32i64 * *_R12);
      __asm
      {
        vaddps  xmm0, xmm5, xmm4
        vsubps  xmm7, xmm14, xmm0
      }
      _RAX = 32i64 * *(_R12 - 1);
      v153 = (const float4 *)(32i64 * _R12[2]);
      __asm
      {
        vmovups xmm10, xmmword ptr [rax+r8]
        vmulps  xmm1, xmm10, xmmword ptr [rcx+r8]
        vmulps  xmm3, xmm7, xmmword ptr [rax+r8+10h]
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
        vandps  xmm0, xmm2, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vorps   xmm1, xmm0, xmm14
        vmulps  xmm0, xmm10, xmmword ptr [rdx+r8]
        vmulps  xmm6, xmm1, xmm4
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vorps   xmm1, xmm0, xmm14
        vmulps  xmm0, xmm6, xmmword ptr [rcx+r8]
        vmulps  xmm2, xmm7, xmm10
        vmulps  xmm5, xmm1, xmm5
        vmulps  xmm1, xmm6, xmmword ptr [rcx+r8+10h]
        vaddps  xmm4, xmm0, xmm2
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm0, xmm5, xmmword ptr [rdx+r8]
        vmulps  xmm1, xmm5, xmmword ptr [rdx+r8+10h]
        vaddps  xmm5, xmm1, xmm2
        vaddps  xmm6, xmm0, xmm4
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vsubps  xmm3, xmm14, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm0, xmm6, xmm1
        vshufps xmm9, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm7, xmm0, xmm0, 0C9h ; 'É'
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm5, [rbp+0E0h+var_F0]
        vshufps xmm8, xmm0, xmm0, 0FFh
        vmovups [rbp+0E0h+var_120], xmm0
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm5, xmm8
        vaddps  xmm14, xmm0, xmm4
        vshufps xmm0, xmm11, xmm11, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm11, xmm11, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm11, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm13, xmm13, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm13, xmm13, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm13, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm15, xmm15, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm15, xmm15, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm15, xmm8
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmovups xmm4, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm15, xmm3, xmm11
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm13, xmm3, xmm13
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm11, xmm3, [rsp+1E0h+var_190]
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm7
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vshufps xmm12, xmm10, xmm10, 0FFh
        vmovups [rsp+1E0h+var_180], xmm15
        vmovups [rbp+0E0h+var_130], xmm13
        vmovups [rsp+1E0h+var_190], xmm11
        vmulps  xmm5, xmm10, xmm8
        vmovups xmm3, [rbp+0E0h+var_120]
        vmulps  xmm0, xmm12, xmm3
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm4, xmm3, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm5, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vmovups xmm0, xmmword ptr [r13+20h]
        vaddps  xmm3, xmm2, [rbp+0E0h+var_F0]
        vmulps  xmm6, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vshufps xmm10, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm9, xmm0, xmm0, 0C9h ; 'É'
        vaddps  xmm4, xmm5, xmm3
        vsubps  xmm4, xmm4, xmmword ptr [r13+30h]
        vshufps xmm5, xmm0, xmm0, 0FFh
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm10
        vxorps  xmm1, xmm1, xmm1
        vmulps  xmm3, xmm0, xmm9
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm8, xmm0, xmm0
        vsubps  xmm1, xmm1, xmm5
        vmulps  xmm1, xmm8, xmm1
        vaddps  xmm7, xmm1, xmm4
        vmovups xmm1, xmm15
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v149, v153, &v347);
      __asm
      {
        vmovups xmm1, xmm13
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v286, v285, &v349);
      __asm
      {
        vmovups xmm1, xmm11
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v290, v289, &v346);
      __asm
      {
        vmovups xmm1, [rbp+0E0h+var_110]
        vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
        vmulps  xmm4, xmm0, xmm9
        vshufps xmm2, xmm8, xmm8, 0C9h ; 'É'
        vmulps  xmm3, xmm2, xmm10
        vbroadcastss xmm2, dword ptr [r13+1Ch]
        vsubps  xmm0, xmm4, xmm3
        vaddps  xmm4, xmm0, xmm7
        vsubps  xmm5, xmm4, xmmword ptr [r13+10h]
        vrcpps  xmm0, xmm2
        vmulps  xmm3, xmm5, xmm0
        vmulps  xmm2, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm0, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm0, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, [rsp+1E0h+var_190]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v308, v307, &v348);
      __asm
      {
        vmovups xmm4, [rbp+0E0h+var_130]
        vmovups xmm5, [rsp+1E0h+var_180]
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups [rbp+0E0h+var_120], xmm2
        vmovups [rbp+0E0h+var_130], xmm4
        vmovups [rbp+0E0h+var_110], xmm5
      }
      AxisComponentsToQuat((const vec3_t *)&v349, (const vec3_t *)&v350, (const vec3_t *)&v351, &out);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_1B0]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+1E0h+var_1B0], xmm0
      }
      v320.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      ++_R14;
      __asm
      {
        vmovups xmm0, [rsp+1E0h+var_170]
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
      }
      v354.packed = v320.packed;
      _R12 += 6;
      __asm { vblendps xmm1, xmm0, xmmword ptr [rbp+0], 8 }
      _ER11 = 0;
      __asm
      {
        vpextrd rcx, xmm6, 2
        vmovd   r8d, xmm6
        vpextrd rdx, xmm6, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [r14-0Ch], xmm1 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      __asm { vmovups [rbp+0E0h+var_F0], xmm6 }
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v326 = (int)_RCX < 0;
      v327 = _RCX;
      v328 = _RDX;
      if ( v326 )
        v327 = 0;
      v329 = (*(_QWORD *)&v327 & 0x1FFFFFi64) << 21;
      __asm { vxorps  xmm13, xmm13, xmm13 }
      if ( (_RDX & 0x80000000) != 0i64 )
        v328 = 0;
      v330 = *(_QWORD *)&v328 & 0x1FFFFFi64 | v329;
      v331 = _ER8;
      v332 = v330 << 21;
      if ( _ER8 < 0 )
        v331 = 0;
      _R9 = v345 + 20;
      v345 += 20;
      _R14[-1].xyz = (PackedPosition)(v38 & 0x8000000000000000ui64 | *(_QWORD *)&v331 & 0x1FFFFFi64 | v332);
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm15, [rsp+1E0h+var_C0]
      vmovaps xmm14, [rsp+1E0h+var_B0]
      vmovaps xmm13, [rsp+1E0h+var_A0]
      vmovaps xmm12, [rsp+1E0h+var_90]
      vmovaps xmm11, [rsp+1E0h+var_80]
      vmovaps xmm10, [rsp+1E0h+var_70]
      vmovaps xmm9, [rsp+1E0h+var_60]
      vmovaps xmm8, [rsp+1E0h+var_50]
      vmovaps xmm7, [rsp+1E0h+var_40]
      vmovaps xmm6, [rsp+1E0h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight3DQB
==============
*/
void R_SkinXSurfaceWeight3DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v18; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v26; 
  unsigned __int64 v28; 
  unsigned __int64 v40; 
  const float4 *v310; 
  const float4 *v311; 
  const float4 *v314; 
  const float4 *v315; 
  const float4 *v332; 
  const float4 *v333; 
  PackedQuatDec3n v345; 
  bool v351; 
  int v352; 
  int v353; 
  __int64 v354; 
  __int64 v355; 
  int v356; 
  __int64 v357; 
  char *v370; 
  float4 v371; 
  float4 v373; 
  float4 v374; 
  __int128 v375; 
  __int128 v376; 
  vec4_t out; 
  float4 v378; 
  PackedQuatDec3n v379; 

  _R14 = vertsOut;
  _R13 = bbData;
  v18 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 862, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 863, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 864, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v18;
  v22 = v18;
  v23 = 20 * v18;
  if ( (unsigned __int64)(20 * v18) > 0x200 )
    v23 = 512i64;
  _ER11 = 0;
  for ( _RAX = 0i64; _RAX < v23; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v26 = 2 * v18;
  _RAX = 0i64;
  v28 = 2 * v18;
  if ( (unsigned __int64)(2 * v18) > 0x200 )
    v28 = 512i64;
  if ( v28 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v28 );
  }
  if ( (_DWORD)v18 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _R9 = (char *)&_RBX->xyz + 4;
    __asm { vmovaps [rsp+1E0h+var_30], xmm6 }
    _R12 = (unsigned __int16 *)(_RDI + 1);
    __asm
    {
      vmovaps [rsp+1E0h+var_40], xmm7
      vmovaps [rsp+1E0h+var_50], xmm8
      vmovaps [rsp+1E0h+var_60], xmm9
    }
    _RDI = 508i64;
    __asm { vmovaps [rsp+1E0h+var_70], xmm10 }
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    __asm
    {
      vmovaps [rsp+1E0h+var_80], xmm11
      vmovaps [rsp+1E0h+var_90], xmm12
      vmovaps [rsp+1E0h+var_A0], xmm13
    }
    _R15 = 510i64;
    __asm { vmovaps [rsp+1E0h+var_B0], xmm14 }
    if ( v26 <= 0x200 )
      _R15 = -2i64;
    __asm
    {
      vmovaps [rsp+1E0h+var_C0], xmm15
      vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
      vxorps  xmm14, xmm14, xmm14
    }
    v370 = (char *)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [rdi+r9]
        prefetcht0 byte ptr [r12+r15]
        vmovups xmm13, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vmovups xmm12, xmmword ptr [r9+4]
        vmovups xmm7, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      v40 = *(_QWORD *)(_R9 - 4);
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r11d
      }
      v378.v.m128_i32[0] = v40 & 0x1FFFFF;
      v378.v.m128_i32[1] = (v40 >> 21) & 0x1FFFFF;
      v378.v.m128_i32[2] = (v40 >> 42) & 0x1FFFFF;
      _EAX = *((_DWORD *)_R9 + 3) & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+1E0h+var_1B0], xmm0
        vcvtdq2ps xmm0, xmmword ptr [rbp+0E0h+var_F0.v]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [r13+0Ch]
        vsubps  xmm2, xmm1, xmm13
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [r13+0]
        vpand   xmm0, xmm7, xmm3
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmm7
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm13, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm13
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm13, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
        vmovups [rsp+1E0h+var_180], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm4, xmm5, xmm1
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vmovups xmmword ptr [rbp+0E0h+var_F0.v], xmm4
        vmovups [rsp+1E0h+var_170], xmm12
        vmovups [rbp+0E0h+var_110], xmm0
        vpshufd xmm1, xmm12, 0FFh
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm15, xmm1
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm13, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm14, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm7, xmm0
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis((vector3 *)(v40 & 0x1FFFFF), (const float4 *)_RDX);
      _RDX = boneDQ;
      __asm { vmovups xmm3, xmmword ptr cs:g_short4BoneWeightScale.v }
      _RCX = *_R12;
      __asm
      {
        vmovups xmm7, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups [rbp+0E0h+var_130], xmm0
        vmovq   xmm0, qword ptr [r12+2]
        vpmovzxwd xmm1, xmm0
      }
      _RCX *= 32i64;
      __asm
      {
        vmovups [rsp+1E0h+var_190], xmm2
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmovups xmm14, xmmword ptr [rcx+rdx]
        vmovups xmm15, xmmword ptr [rcx+rdx+10h]
        vmulps  xmm4, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+6]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm5, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+0Ah]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
      }
      _RCX = 32i64 * _R12[2];
      __asm
      {
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm9, xmm0, xmm3
        vmovups xmm12, xmmword ptr [rcx+rdx]
        vmovups xmm13, xmmword ptr [rcx+rdx+10h]
        vaddps  xmm1, xmm9, xmm5
        vsubps  xmm0, xmm7, xmm4
        vsubps  xmm8, xmm0, xmm1
        vmulps  xmm1, xmm14, xmmword ptr [rax]
      }
      _RCX = (const float4 *)(32i64 * _R12[4]);
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
        vmovups xmm10, xmmword ptr [rcx+rdx]
        vmovups xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vmovups xmm11, [rsp+1E0h+var_190]
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm7
        vmulps  xmm0, xmm12, xmmword ptr [rax]
        vmulps  xmm7, xmm1, xmm4
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm0, xmm10, xmmword ptr [rax]
        vmulps  xmm6, xmm1, xmm5
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm2, xmm8, xmmword ptr [rax]
        vmulps  xmm3, xmm8, xmmword ptr [rax+10h]
        vmulps  xmm5, xmm1, xmm9
        vmulps  xmm0, xmm7, xmm14
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm6, xmm12
        vmulps  xmm1, xmm7, xmm15
        vaddps  xmm2, xmm1, xmm3
        vaddps  xmm3, xmm0, xmm4
        vmulps  xmm0, xmm5, xmm10
        vmulps  xmm1, xmm6, xmm13
        vmovups xmm13, [rbp+0E0h+var_130]
        vaddps  xmm6, xmm0, xmm3
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm5, xmmword ptr [rcx+rdx+10h]
        vaddps  xmm5, xmm1, xmm4
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm3, xmm0, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm0, xmm6, xmm1
        vmovups xmm6, xmmword ptr [rbp+0E0h+var_F0.v]
        vshufps xmm9, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm7, xmm0, xmm0, 0C9h ; 'É'
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm5, [rsp+1E0h+var_180]
        vmovups [rbp+0E0h+var_120], xmm0
        vshufps xmm8, xmm0, xmm0, 0FFh
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm5
        vaddps  xmm14, xmm0, xmm4
        vshufps xmm0, xmm11, xmm11, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm11, xmm11, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm11, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm13, xmm13, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm13, xmm13, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm13, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vmulps  xmm0, xmm8, xmm6
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm12, xmm10, xmm10, 0FFh
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmovups xmm4, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm15, xmm3, xmm11
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm13, xmm3, xmm13
        vmulps  xmm5, xmm10, xmm8
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm11, xmm3, xmmword ptr [rbp+0E0h+var_F0.v]
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmovups xmm3, [rbp+0E0h+var_120]
        vmulps  xmm0, xmm12, xmm3
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm4, xmm3, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm5, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vmovups xmm0, xmmword ptr [r13+20h]
        vaddps  xmm3, xmm2, [rsp+1E0h+var_180]
        vmulps  xmm6, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vshufps xmm10, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm9, xmm0, xmm0, 0C9h ; 'É'
        vaddps  xmm4, xmm5, xmm3
        vsubps  xmm4, xmm4, xmmword ptr [r13+30h]
        vshufps xmm5, xmm0, xmm0, 0FFh
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm10
        vmulps  xmm3, xmm0, xmm9
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm8, xmm0, xmm0
        vxorps  xmm14, xmm14, xmm14
        vsubps  xmm1, xmm14, xmm5
        vmulps  xmm1, xmm8, xmm1
        vaddps  xmm7, xmm1, xmm4
        vmovups xmm1, xmm15
        vmovups xmm0, xmm6
        vmovups [rsp+1E0h+var_190], xmm15
        vmovups [rbp+0E0h+var_130], xmm13
        vmovups xmmword ptr [rbp+0E0h+var_F0.v], xmm11
      }
      Float4QuatRotateInv(_RCX, (const float4 *)boneDQ, &v371);
      __asm
      {
        vmovups xmm1, xmm13
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v311, v310, &v374);
      __asm
      {
        vmovups xmm1, xmm11
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v315, v314, &v378);
      __asm
      {
        vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
        vshufps xmm2, xmm8, xmm8, 0C9h ; 'É'
        vmulps  xmm4, xmm0, xmm9
        vmulps  xmm3, xmm2, xmm10
        vbroadcastss xmm2, dword ptr [r13+1Ch]
        vsubps  xmm0, xmm4, xmm3
        vaddps  xmm4, xmm0, xmm7
        vsubps  xmm5, xmm4, xmmword ptr [r13+10h]
        vmovups xmm1, [rbp+0E0h+var_110]
        vrcpps  xmm0, xmm2
        vmulps  xmm3, xmm5, xmm0
        vmulps  xmm2, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm0, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm0, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, xmmword ptr [rbp+0E0h+var_F0.v]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v333, v332, &v373);
      __asm
      {
        vmovups xmm4, [rbp+0E0h+var_130]
        vmovups xmm5, [rsp+1E0h+var_190]
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups [rbp+0E0h+var_120], xmm2
        vmovups [rbp+0E0h+var_130], xmm4
        vmovups [rbp+0E0h+var_110], xmm5
      }
      AxisComponentsToQuat((const vec3_t *)&v374, (const vec3_t *)&v375, (const vec3_t *)&v376, &out);
      __asm
      {
        vmovss  xmm0, [rsp+1E0h+var_1B0]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+1E0h+var_1B0], xmm0
      }
      v345.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      ++_R14;
      __asm
      {
        vmovups xmm0, [rsp+1E0h+var_170]
        vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
      }
      v379.packed = v345.packed;
      _R12 += 8;
      __asm { vblendps xmm1, xmm0, xmmword ptr [rbp+0], 8 }
      _ER11 = 0;
      __asm
      {
        vpextrd rcx, xmm6, 2
        vmovd   r8d, xmm6
        vpextrd rdx, xmm6, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [r14-0Ch], xmm1 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      __asm { vmovups xmmword ptr [rbp+0E0h+var_F0.v], xmm6 }
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v351 = (int)_RCX < 0;
      v352 = _RCX;
      v353 = _RDX;
      if ( v351 )
        v352 = 0;
      v354 = (*(_QWORD *)&v352 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v353 = 0;
      v355 = *(_QWORD *)&v353 & 0x1FFFFFi64 | v354;
      v356 = _ER8;
      v357 = v355 << 21;
      if ( _ER8 < 0 )
        v356 = 0;
      _R9 = v370 + 20;
      v370 += 20;
      _R14[-1].xyz = (PackedPosition)(v40 & 0x8000000000000000ui64 | *(_QWORD *)&v356 & 0x1FFFFFi64 | v357);
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm15, [rsp+1E0h+var_C0]
      vmovaps xmm14, [rsp+1E0h+var_B0]
      vmovaps xmm13, [rsp+1E0h+var_A0]
      vmovaps xmm12, [rsp+1E0h+var_90]
      vmovaps xmm11, [rsp+1E0h+var_80]
      vmovaps xmm10, [rsp+1E0h+var_70]
      vmovaps xmm9, [rsp+1E0h+var_60]
      vmovaps xmm8, [rsp+1E0h+var_50]
      vmovaps xmm7, [rsp+1E0h+var_40]
      vmovaps xmm6, [rsp+1E0h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight4DQB
==============
*/
void R_SkinXSurfaceWeight4DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v19; 
  __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v25; 
  unsigned __int64 v27; 
  signed __int64 v32; 
  unsigned __int64 v39; 
  __int64 v140; 
  __int64 v141; 
  const float4 *v327; 
  const float4 *v328; 
  const float4 *v331; 
  const float4 *v332; 
  const float4 *v350; 
  const float4 *v351; 
  PackedQuatDec3n v363; 
  bool v368; 
  int v369; 
  int v370; 
  __int64 v371; 
  __int64 v372; 
  int v373; 
  __int64 v374; 
  char *v389; 
  float4 v390; 
  float4 v392; 
  float4 v393; 
  __int128 v394; 
  __int128 v395; 
  vec4_t out; 
  float4 v397; 
  PackedQuatDec3n v398; 

  _R14 = vertsOut;
  _RDI = blend;
  _RBX = vertsIn;
  v19 = vertCount;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 990, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 991, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 992, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v19;
  v21 = v19;
  v22 = 20 * v19;
  if ( (unsigned __int64)(20 * v19) > 0x200 )
    v22 = 512i64;
  _ER11 = 0;
  for ( _RAX = 0i64; _RAX < v22; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v25 = 2 * v19;
  _RAX = 0i64;
  v27 = 2 * v19;
  if ( (unsigned __int64)(2 * v19) > 0x200 )
    v27 = 512i64;
  if ( v27 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v27 );
  }
  if ( (_DWORD)v19 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _R9 = (char *)&_RBX->xyz + 4;
    __asm { vmovaps [rsp+1F0h+var_30], xmm6 }
    _R13 = (unsigned __int16 *)(_RDI + 1);
    __asm
    {
      vmovaps [rsp+1F0h+var_40], xmm7
      vmovaps [rsp+1F0h+var_50], xmm8
    }
    _R15 = 508i64;
    __asm { vmovaps [rsp+1F0h+var_60], xmm9 }
    if ( _RDX <= 0x200 )
      _R15 = -4i64;
    __asm { vmovaps [rsp+1F0h+var_70], xmm10 }
    v32 = (char *)_RDI - (char *)_RBX;
    __asm
    {
      vmovaps [rsp+1F0h+var_80], xmm11
      vmovaps [rsp+1F0h+var_90], xmm12
      vmovaps [rsp+1F0h+var_A0], xmm13
    }
    _R12 = 510i64;
    __asm { vmovaps [rsp+1F0h+var_B0], xmm14 }
    if ( v25 <= 0x200 )
      _R12 = -2i64;
    __asm
    {
      vmovaps [rsp+1F0h+var_C0], xmm15
      vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
      vxorps  xmm14, xmm14, xmm14
    }
    v389 = (char *)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r9+r15]
        prefetcht0 byte ptr [r12+r13]
        vmovups xmm13, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vmovups xmm12, xmmword ptr [r9+4]
      }
      v39 = *(_QWORD *)(_R9 - 4);
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r11d
      }
      v397.v.m128_i32[0] = v39 & 0x1FFFFF;
      v397.v.m128_i32[1] = (v39 >> 21) & 0x1FFFFF;
      v397.v.m128_i32[2] = (v39 >> 42) & 0x1FFFFF;
      _EAX = *((_DWORD *)_R9 + 3) & 0x20000000;
      __asm { vmovd   xmm0, eax }
      _RAX = bbData;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+1F0h+var_1C0], xmm0
        vcvtdq2ps xmm0, xmmword ptr [rbp+0F0h+var_F0.v]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [rax+0Ch]
        vsubps  xmm2, xmm1, xmm13
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [rax]
        vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm13, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm13
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm13, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
        vmovups [rsp+1F0h+var_180], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm4, xmm5, xmm1
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vmovups xmmword ptr [rbp+0F0h+var_F0.v], xmm4
        vmovups [rbp+0F0h+var_170], xmm12
        vmovups [rbp+0F0h+var_110], xmm0
        vpshufd xmm1, xmm12, 0FFh
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm15, xmm1
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm13, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm14, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm7, xmm0
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis((vector3 *)(v39 & 0x1FFFFF), (const float4 *)_RDX);
      __asm { vmovups xmm3, xmmword ptr cs:g_short4BoneWeightScale.v }
      _R9 = boneDQ;
      _R8 = _R13[4];
      v140 = *_R13;
      v141 = _R13[2];
      _RAX = *(unsigned __int16 *)&v389[v32 - 4];
      __asm
      {
        vmovups [rbp+0F0h+var_130], xmm0
        vmovq   xmm0, qword ptr [r13+2]
        vpmovzxwd xmm1, xmm0
        vmovups [rsp+1F0h+var_190], xmm2
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm4, xmm0, xmm3
        vmovq   xmm0, qword ptr [r13+6]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm5, xmm0, xmm3
        vmovq   xmm0, qword ptr [r13+0Ah]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
      }
      _R8 *= 32i64;
      __asm
      {
        vmulps  xmm6, xmm0, xmm3
        vmovq   xmm0, qword ptr [r13+0Eh]
        vpmovzxwd xmm1, xmm0
        vmovups xmm13, xmmword ptr [r8+r9]
        vmovups xmm14, xmmword ptr [r8+r9+10h]
        vshufps xmm2, xmm1, xmm1, 0
      }
      _RAX *= 32i64;
      __asm
      {
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm10, xmm0, xmm3
        vmovups xmm8, xmmword ptr [rax+r9]
        vaddps  xmm2, xmm10, xmm6
        vaddps  xmm1, xmm5, xmm4
        vmovups xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm0, xmm0, xmm1
        vmulps  xmm1, xmm8, xmmword ptr [rcx+r9]
        vsubps  xmm9, xmm0, xmm2
        vmovups xmm11, [rsp+1F0h+var_190]
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm8, xmm1, xmm4
        vmovups xmm4, xmmword ptr [rax+r9]
        vmulps  xmm0, xmm4, xmmword ptr [rdx+r9]
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm7, xmm1, xmm5
        vmulps  xmm0, xmm4, xmm13
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm0, xmm4, xmmword ptr [r8+r9]
        vmulps  xmm6, xmm1, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm0, xmm8, xmmword ptr [rcx+r9]
        vmulps  xmm3, xmm9, xmmword ptr [rax+r9+10h]
        vmulps  xmm5, xmm1, xmm10
        vmulps  xmm1, xmm8, xmmword ptr [rcx+r9+10h]
        vmulps  xmm2, xmm9, xmm4
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm7, xmmword ptr [rdx+r9]
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm1, xmm7, xmmword ptr [rdx+r9+10h]
        vaddps  xmm3, xmm0, xmm4
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm6, xmm14
        vmulps  xmm0, xmm13, xmm6
        vaddps  xmm2, xmm0, xmm3
        vmulps  xmm0, xmm5, xmmword ptr [r8+r9]
        vaddps  xmm6, xmm0, xmm2
        vaddps  xmm3, xmm1, xmm4
        vmulps  xmm1, xmm5, xmmword ptr [r8+r9+10h]
        vaddps  xmm5, xmm1, xmm3
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm3, xmm0, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm0, xmm6, xmm1
        vshufps xmm9, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm7, xmm0, xmm0, 0C9h ; 'É'
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm5, [rsp+1F0h+var_180]
        vmovups [rbp+0F0h+var_120], xmm0
        vshufps xmm8, xmm0, xmm0, 0FFh
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm5
        vaddps  xmm14, xmm0, xmm4
        vshufps xmm0, xmm11, xmm11, 0C9h ; 'É'
        vshufps xmm1, xmm11, xmm11, 0D2h ; 'Ò'
        vmulps  xmm2, xmm0, xmm9
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm11, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm12, xmm10, xmm10, 0FFh
        vmovups xmm13, [rbp+0F0h+var_130]
        vmovups xmm6, xmmword ptr [rbp+0F0h+var_F0.v]
      }
      _RAX = bbData;
      __asm
      {
        vshufps xmm1, xmm13, xmm13, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm13, xmm13, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm13, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm6
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmovups xmm4, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm15, xmm3, xmm11
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm13, xmm3, xmm13
        vmulps  xmm5, xmm10, xmm8
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm4
        vaddps  xmm11, xmm3, xmmword ptr [rbp+0F0h+var_F0.v]
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmovups xmm3, [rbp+0F0h+var_120]
        vmulps  xmm0, xmm12, xmm3
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm4, xmm3, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmulps  xmm5, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm2, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vmovups xmm0, xmmword ptr [rax+20h]
        vaddps  xmm3, xmm2, [rsp+1F0h+var_180]
        vmulps  xmm6, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vaddps  xmm4, xmm5, xmm3
        vsubps  xmm4, xmm4, xmmword ptr [rax+30h]
        vshufps xmm5, xmm0, xmm0, 0FFh
        vshufps xmm10, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm9, xmm0, xmm0, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm10
        vmulps  xmm3, xmm0, xmm9
        vsubps  xmm0, xmm3, xmm2
        vxorps  xmm14, xmm14, xmm14
        vaddps  xmm8, xmm0, xmm0
        vsubps  xmm1, xmm14, xmm5
        vmulps  xmm1, xmm8, xmm1
        vaddps  xmm7, xmm1, xmm4
        vmovups xmm1, xmm15
        vmovups [rsp+1F0h+var_190], xmm15
        vmovups [rbp+0F0h+var_130], xmm13
        vmovups xmmword ptr [rbp+0F0h+var_F0.v], xmm11
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv((const float4 *)(32 * v140), (const float4 *)(32 * v141), &v390);
      __asm
      {
        vmovups xmm1, xmm13
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v328, v327, &v393);
      __asm
      {
        vmovups xmm1, xmm11
        vmovups xmm0, xmm6
      }
      Float4QuatRotateInv(v332, v331, &v397);
      _RAX = bbData;
      __asm
      {
        vmovups xmm1, [rbp+0F0h+var_110]
        vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
        vmulps  xmm4, xmm0, xmm9
        vshufps xmm2, xmm8, xmm8, 0C9h ; 'É'
        vmulps  xmm3, xmm2, xmm10
        vbroadcastss xmm2, dword ptr [rax+1Ch]
        vsubps  xmm0, xmm4, xmm3
        vaddps  xmm4, xmm0, xmm7
        vsubps  xmm5, xmm4, xmmword ptr [rax+10h]
        vrcpps  xmm0, xmm2
        vmulps  xmm3, xmm5, xmm0
        vmulps  xmm2, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm0, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm0, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, xmmword ptr [rbp+0F0h+var_F0.v]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v351, v350, &v392);
      __asm
      {
        vmovups xmm4, [rbp+0F0h+var_130]
        vmovups xmm5, [rsp+1F0h+var_190]
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups [rbp+0F0h+var_120], xmm2
        vmovups [rbp+0F0h+var_130], xmm4
        vmovups [rbp+0F0h+var_110], xmm5
      }
      AxisComponentsToQuat((const vec3_t *)&v393, (const vec3_t *)&v394, (const vec3_t *)&v395, &out);
      __asm
      {
        vmovss  xmm0, [rsp+1F0h+var_1C0]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+1F0h+var_1C0], xmm0
      }
      v363.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      __asm { vmovups xmm0, [rbp+0F0h+var_170] }
      v398.packed = v363.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+10h], 8
        vpextrd rcx, xmm6, 2
      }
      _ER11 = 0;
      __asm
      {
        vmovd   r8d, xmm6
        vpextrd rdx, xmm6, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [rbp+0F0h+var_F0.v], xmm6 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      __asm { vmovups xmmword ptr [r14+8], xmm1 }
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v368 = (int)_RCX < 0;
      v369 = _RCX;
      v370 = _RDX;
      if ( v368 )
        v369 = 0;
      v371 = (*(_QWORD *)&v369 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v370 = 0;
      v372 = *(_QWORD *)&v370 & 0x1FFFFFi64 | v371;
      v373 = _ER8;
      v374 = v372 << 21;
      if ( _ER8 < 0 )
        v373 = 0;
      ++_R14;
      __asm
      {
        vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
      }
      _R13 += 10;
      _R9 = v389 + 20;
      v389 += 20;
      _R14[-1].xyz = (PackedPosition)(v39 & 0x8000000000000000ui64 | *(_QWORD *)&v373 & 0x1FFFFFi64 | v374);
      --v21;
    }
    while ( v21 );
    __asm
    {
      vmovaps xmm15, [rsp+1F0h+var_C0]
      vmovaps xmm14, [rsp+1F0h+var_B0]
      vmovaps xmm13, [rsp+1F0h+var_A0]
      vmovaps xmm12, [rsp+1F0h+var_90]
      vmovaps xmm11, [rsp+1F0h+var_80]
      vmovaps xmm10, [rsp+1F0h+var_70]
      vmovaps xmm9, [rsp+1F0h+var_60]
      vmovaps xmm8, [rsp+1F0h+var_50]
      vmovaps xmm7, [rsp+1F0h+var_40]
      vmovaps xmm6, [rsp+1F0h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight5DQB
==============
*/
void R_SkinXSurfaceWeight5DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v18; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v26; 
  unsigned __int64 v28; 
  int v38; 
  vector3 *v40; 
  unsigned __int64 v41; 
  const float4 *v331; 
  const float4 *v332; 
  PackedQuatDec3n v344; 
  bool v349; 
  int v350; 
  int v351; 
  __int64 v352; 
  __int64 v353; 
  int v354; 
  __int64 v355; 
  float4 selfVisDirIn; 
  unsigned __int64 v371; 
  unsigned __int64 v372; 
  _DWORD *v373; 
  float4 v374; 
  float4 tanIn; 
  float4 normIn; 
  __int128 v377; 
  vec4_t out; 
  float4 vecIn; 
  PackedQuatDec3n v380; 

  _R14 = vertsOut;
  _R13 = bbData;
  v18 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1136, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1137, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1138, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v18;
  v22 = v18;
  v23 = 20 * v18;
  if ( (unsigned __int64)(20 * v18) > 0x200 )
    v23 = 512i64;
  _ER11 = 0;
  for ( _RAX = 0i64; _RAX < v23; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v26 = 2 * v18;
  _RAX = 0i64;
  v28 = 2 * v18;
  if ( (unsigned __int64)(2 * v18) > 0x200 )
    v28 = 512i64;
  if ( v28 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v28 );
  }
  if ( (_DWORD)v18 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _R9 = (_DWORD *)&_RBX->xyz + 1;
    __asm { vmovaps [rsp+200h+var_30], xmm6 }
    _R12 = (unsigned __int16 *)(_RDI + 1);
    __asm
    {
      vmovaps [rsp+200h+var_40], xmm7
      vmovaps [rsp+200h+var_50], xmm8
      vmovaps [rsp+200h+var_60], xmm9
    }
    _RDI = 508i64;
    __asm { vmovaps [rsp+200h+var_70], xmm10 }
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    __asm
    {
      vmovaps [rsp+200h+var_80], xmm11
      vmovaps [rsp+200h+var_90], xmm12
      vmovaps [rsp+200h+var_A0], xmm13
    }
    _R15 = 510i64;
    __asm { vmovaps [rsp+200h+var_B0], xmm14 }
    if ( v26 <= 0x200 )
      _R15 = -2i64;
    __asm
    {
      vmovaps [rsp+200h+var_C0], xmm15
      vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
      vxorps  xmm14, xmm14, xmm14
    }
    v373 = (_DWORD *)&_RBX->xyz + 1;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [rdi+r9]
        prefetcht0 byte ptr [r12+r15]
        vmovups xmm13, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      }
      v38 = *(_R9 - 1);
      __asm { vmovups xmm12, xmmword ptr [r9+4] }
      HIDWORD(v371) = *_R9;
      LODWORD(v371) = v38;
      v40 = (vector3 *)(v38 & 0x1FFFFF);
      v41 = v371;
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r11d
      }
      vecIn.v.m128_i32[0] = (int)v40;
      vecIn.v.m128_i32[1] = (v371 >> 21) & 0x1FFFFF;
      vecIn.v.m128_i32[2] = (v371 >> 42) & 0x1FFFFF;
      _EAX = _R9[3] & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+200h+var_1B0], xmm0
        vcvtdq2ps xmm0, xmmword ptr [rbp+100h+vecIn.v]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [r13+0Ch]
        vsubps  xmm2, xmm1, xmm13
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [r13+0]
        vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm13, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm13
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm13, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vdivps  xmm4, xmm5, xmm1
        vmovups [rbp+100h+var_110], xmm0
        vmovups [rbp+100h+var_170], xmm12
        vmovups xmmword ptr [rsp+200h+var_1A0.v], xmm4
        vpshufd xmm1, xmm12, 0FFh
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm1, xmm15
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm13, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm14, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm7, xmm0
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis(v40, (const float4 *)_RDX);
      __asm { vmovups xmm3, xmmword ptr cs:g_short4BoneWeightScale.v }
      _RCX = *_R12;
      _R11 = boneDQ;
      _RAX = *(_R12 - 1);
      __asm
      {
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm0
        vmovq   xmm0, qword ptr [r12+2]
        vpmovzxwd xmm1, xmm0
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm2
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm4, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+6]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm5, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+0Ah]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm6, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+0Eh]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm11, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+12h]
      }
      _RCX *= 32i64;
      __asm
      {
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
      }
      _RAX *= 32i64;
      __asm
      {
        vmovups xmm9, xmmword ptr [rcx+r11]
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm12, xmm0, xmm3
        vmovups xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vaddps  xmm2, xmm5, xmm4
        vaddps  xmm0, xmm11, xmm6
        vaddps  xmm1, xmm0, xmm12
        vmovups xmm0, xmm13
        vsubps  xmm0, xmm0, xmm2
        vsubps  xmm10, xmm0, xmm1
        vmulps  xmm1, xmm9, xmmword ptr [rax+r11]
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm13
        vmulps  xmm9, xmm1, xmm4
        vmovups xmm4, xmmword ptr [rax+r11]
        vmulps  xmm0, xmm4, xmmword ptr [rdx+r11]
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm13
        vmulps  xmm0, xmm4, xmmword ptr [r8+r11]
        vmulps  xmm8, xmm1, xmm5
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vmovups xmm5, xmm13
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r9+r11]
        vmulps  xmm7, xmm1, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r10+r11]
        vmulps  xmm6, xmm1, xmm11
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vmulps  xmm3, xmm10, xmmword ptr [rax+r11+10h]
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm9, xmmword ptr [rcx+r11]
        vmulps  xmm5, xmm1, xmm12
        vmulps  xmm1, xmm9, xmmword ptr [rcx+r11+10h]
        vmulps  xmm2, xmm10, xmm4
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm8, xmmword ptr [rdx+r11]
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm1, xmm8, xmmword ptr [rdx+r11+10h]
        vaddps  xmm3, xmm0, xmm4
        vmulps  xmm0, xmm7, xmmword ptr [r8+r11]
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm7, xmmword ptr [r8+r11+10h]
        vaddps  xmm2, xmm0, xmm3
        vmulps  xmm0, xmm6, xmmword ptr [r9+r11]
        vaddps  xmm3, xmm1, xmm4
        vmulps  xmm1, xmm6, xmmword ptr [r9+r11+10h]
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm5, xmmword ptr [r10+r11]
        vaddps  xmm6, xmm0, xmm4
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm1, xmm5, xmmword ptr [r10+r11+10h]
        vaddps  xmm5, xmm1, xmm2
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovups xmm0, xmm13
        vsubps  xmm3, xmm0, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm13, xmm6, xmm1
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm5, xmmword ptr [rbp+100h+vecIn.v]
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm8, xmm13, xmm13, 0FFh
        vshufps xmm11, xmm10, xmm10, 0FFh
        vshufps xmm9, xmm13, xmm13, 0D2h ; 'Ò'
        vshufps xmm7, xmm13, xmm13, 0C9h ; 'É'
        vmovups xmm14, xmmword ptr [rbp+100h+normIn.v]
        vmovups xmm15, xmmword ptr [rbp+100h+var_130.v]
        vmovups xmm6, xmmword ptr [rsp+200h+var_1A0.v]
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm5
        vaddps  xmm12, xmm0, xmm4
        vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm14, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm15, xmm15, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm15, xmm15, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm15, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm6
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm9
        vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm2, xmm1, xmm7
        vsubps  xmm0, xmm2, xmm3
        vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm1, xmm3, xmm14
        vmovups xmm14, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm1
        vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm2, xmm1, xmm7
        vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm9
        vsubps  xmm0, xmm2, xmm3
        vmulps  xmm3, xmm0, xmm14
        vaddps  xmm1, xmm3, xmm15
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm1
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm14
        vaddps  xmm1, xmm3, xmmword ptr [rsp+200h+var_1A0.v]
        vmovups xmmword ptr [rsp+200h+var_1A0.v], xmm1
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm5, xmm10, xmm8
        vmulps  xmm0, xmm13, xmm11
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm5, xmm2, xmm14
        vmulps  xmm4, xmm13, xmm14
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm12, xmm12, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm3, xmm2, xmmword ptr [rbp+100h+vecIn.v]
        vaddps  xmm0, xmm5, xmm3
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm0
      }
      R_TransformToModelSpace(&_R13->rootQuat, &_R13->rootOffset, &vecIn, &vecIn, &normIn, &normIn, &tanIn, &tanIn, &selfVisDirIn, &selfVisDirIn);
      __asm
      {
        vbroadcastss xmm0, dword ptr [r13+1Ch]
        vmovups xmm2, xmmword ptr [rbp+100h+vecIn.v]
        vsubps  xmm3, xmm2, xmmword ptr [r13+10h]
        vmovups xmm1, [rbp+100h+var_110]
        vrcpps  xmm4, xmm0
        vmulps  xmm0, xmm4, xmm3
        vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm2, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm2, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, xmmword ptr [rsp+200h+var_1A0.v]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v332, v331, &v374);
      __asm
      {
        vmovups xmm5, xmmword ptr [rbp+100h+normIn.v]
        vmovups xmm4, xmmword ptr [rbp+100h+var_130.v]
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm2
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm4
        vmovups [rbp+100h+var_110], xmm5
      }
      AxisComponentsToQuat((const vec3_t *)&tanIn, (const vec3_t *)&normIn, (const vec3_t *)&v377, &out);
      __asm
      {
        vmovss  xmm0, [rsp+200h+var_1B0]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+200h+var_1B0], xmm0
      }
      v344.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      __asm { vmovups xmm0, [rbp+100h+var_170] }
      v380.packed = v344.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+20h], 8
        vpextrd rcx, xmm6, 2
      }
      _ER11 = 0;
      __asm
      {
        vmovd   r8d, xmm6
        vpextrd rdx, xmm6, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [rbp+100h+vecIn.v], xmm6 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      __asm { vmovups xmmword ptr [r14+8], xmm1 }
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v349 = (int)_RCX < 0;
      v350 = _RCX;
      v351 = _RDX;
      if ( v349 )
        v350 = 0;
      v352 = (*(_QWORD *)&v350 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v351 = 0;
      v353 = *(_QWORD *)&v351 & 0x1FFFFFi64 | v352;
      v354 = _ER8;
      v355 = v353 << 21;
      if ( _ER8 < 0 )
        v354 = 0;
      ++_R14;
      __asm
      {
        vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
      }
      _R12 += 12;
      _R9 = v373 + 5;
      v372 = v41 & 0x8000000000000000ui64 | *(_QWORD *)&v354 & 0x1FFFFFi64 | v355;
      _R14[-1].xyz = (PackedPosition)v372;
      v373 = _R9;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm15, [rsp+200h+var_C0]
      vmovaps xmm14, [rsp+200h+var_B0]
      vmovaps xmm13, [rsp+200h+var_A0]
      vmovaps xmm12, [rsp+200h+var_90]
      vmovaps xmm11, [rsp+200h+var_80]
      vmovaps xmm10, [rsp+200h+var_70]
      vmovaps xmm9, [rsp+200h+var_60]
      vmovaps xmm8, [rsp+200h+var_50]
      vmovaps xmm7, [rsp+200h+var_40]
      vmovaps xmm6, [rsp+200h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight6DQB
==============
*/
void R_SkinXSurfaceWeight6DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v18; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v26; 
  unsigned __int64 v28; 
  int v38; 
  vector3 *v40; 
  unsigned __int64 v41; 
  __int64 v139; 
  __int64 v140; 
  const float4 *v348; 
  const float4 *v349; 
  PackedQuatDec3n v361; 
  bool v367; 
  int v368; 
  int v369; 
  __int64 v370; 
  __int64 v371; 
  int v372; 
  __int64 v373; 
  float4 selfVisDirIn; 
  unsigned __int64 v387; 
  unsigned __int64 v388; 
  __int64 v389; 
  float4 v390; 
  float4 tanIn; 
  float4 normIn; 
  __int128 v393; 
  vec4_t out; 
  float4 vecIn; 
  PackedQuatDec3n v396; 

  _R14 = vertsOut;
  _R13 = bbData;
  v18 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1300, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1301, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1302, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v18;
  v22 = v18;
  v23 = 20 * v18;
  if ( (unsigned __int64)(20 * v18) > 0x200 )
    v23 = 512i64;
  _ER11 = 0;
  for ( _RAX = 0i64; _RAX < v23; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v26 = 2 * v18;
  _RAX = 0i64;
  v28 = 2 * v18;
  if ( (unsigned __int64)(2 * v18) > 0x200 )
    v28 = 512i64;
  if ( v28 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v28 );
  }
  if ( (_DWORD)v18 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _R9 = (_DWORD *)&_RBX->xyz + 1;
    __asm { vmovaps [rsp+200h+var_30], xmm6 }
    _R12 = (unsigned __int16 *)(_RDI + 1);
    __asm
    {
      vmovaps [rsp+200h+var_40], xmm7
      vmovaps [rsp+200h+var_50], xmm8
      vmovaps [rsp+200h+var_60], xmm9
    }
    _RDI = 508i64;
    __asm { vmovaps [rsp+200h+var_70], xmm10 }
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    __asm
    {
      vmovaps [rsp+200h+var_80], xmm11
      vmovaps [rsp+200h+var_90], xmm12
      vmovaps [rsp+200h+var_A0], xmm13
    }
    _R15 = 510i64;
    __asm { vmovaps [rsp+200h+var_B0], xmm14 }
    if ( v26 <= 0x200 )
      _R15 = -2i64;
    __asm
    {
      vmovaps [rsp+200h+var_C0], xmm15
      vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
      vxorps  xmm14, xmm14, xmm14
    }
    v389 = (__int64)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r9+rdi]
        prefetcht0 byte ptr [r12+r15]
        vmovups xmm13, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      }
      v38 = *(_R9 - 1);
      __asm { vmovups xmm12, xmmword ptr [r9+4] }
      HIDWORD(v387) = *_R9;
      LODWORD(v387) = v38;
      v40 = (vector3 *)(v38 & 0x1FFFFF);
      v41 = v387;
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r11d
      }
      vecIn.v.m128_i32[0] = (int)v40;
      vecIn.v.m128_i32[1] = (v387 >> 21) & 0x1FFFFF;
      vecIn.v.m128_i32[2] = (v387 >> 42) & 0x1FFFFF;
      _EAX = _R9[3] & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+200h+var_1B0], xmm0
        vcvtdq2ps xmm0, xmmword ptr [rbp+100h+vecIn.v]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [r13+0Ch]
        vsubps  xmm2, xmm1, xmm13
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [r13+0]
        vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm13, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm13
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm13, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vdivps  xmm4, xmm5, xmm1
        vmovups [rbp+100h+var_110], xmm0
        vmovups [rbp+100h+var_170], xmm12
        vmovups xmmword ptr [rsp+200h+var_1A0.v], xmm4
        vpshufd xmm1, xmm12, 0FFh
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm15, xmm1
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm13, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm14, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis(v40, (const float4 *)_RDX);
      __asm { vmovups xmm3, xmmword ptr cs:g_short4BoneWeightScale.v }
      v139 = *(_R12 - 1);
      v140 = *_R12;
      __asm
      {
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm0
        vmovq   xmm0, qword ptr [r12+2]
        vpmovzxwd xmm1, xmm0
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm2
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm4, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+6]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm5, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+0Ah]
      }
      _RAX = &boneDQ[v139];
      _RCX = &boneDQ[v140];
      __asm
      {
        vmovups xmm10, xmmword ptr [rcx]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm6, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+0Eh]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm7, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+12h]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm12, xmm0, xmm3
        vmovq   xmm0, qword ptr [r12+16h]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm13, xmm0, xmm3
        vaddps  xmm3, xmm5, xmm4
        vaddps  xmm1, xmm7, xmm6
        vaddps  xmm0, xmm13, xmm12
        vaddps  xmm2, xmm0, xmm1
        vmulps  xmm1, xmm10, xmmword ptr [rax]
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm0, xmm0, xmm3
        vmovups xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vsubps  xmm11, xmm0, xmm2
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm10, xmm1, xmm4
        vmovups xmm4, xmmword ptr [rax]
        vmulps  xmm0, xmm4, xmmword ptr [rdx]
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm0, xmm4, xmmword ptr [r8]
        vmulps  xmm9, xmm1, xmm5
        vmovups xmm5, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r9]
        vmulps  xmm8, xmm1, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r10]
        vmulps  xmm7, xmm1, xmm7
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r11]
        vmulps  xmm6, xmm1, xmm12
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vmulps  xmm3, xmm11, xmmword ptr [rax+10h]
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm10, xmmword ptr [rcx]
        vmulps  xmm2, xmm11, xmm4
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm9, xmmword ptr [rdx]
        vmulps  xmm5, xmm1, xmm13
        vmulps  xmm1, xmm10, xmmword ptr [rcx+10h]
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm1, xmm9, xmmword ptr [rdx+10h]
        vaddps  xmm3, xmm0, xmm4
        vmulps  xmm0, xmm8, xmmword ptr [r8]
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm8, xmmword ptr [r8+10h]
        vaddps  xmm2, xmm0, xmm3
        vmulps  xmm0, xmm7, xmmword ptr [r9]
        vaddps  xmm3, xmm1, xmm4
        vmulps  xmm1, xmm7, xmmword ptr [r9+10h]
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm6, xmmword ptr [r10]
        vaddps  xmm2, xmm1, xmm3
        vaddps  xmm3, xmm0, xmm4
        vmulps  xmm0, xmm5, xmmword ptr [r11]
        vmovups xmm14, xmmword ptr [rbp+100h+normIn.v]
        vmulps  xmm1, xmm6, xmmword ptr [r10+10h]
        vmovups xmm15, xmmword ptr [rbp+100h+var_130.v]
        vaddps  xmm6, xmm0, xmm3
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm5, xmmword ptr [r11+10h]
        vaddps  xmm5, xmm1, xmm4
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm3, xmm0, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm13, xmm6, xmm1
        vmovups xmm6, xmmword ptr [rsp+200h+var_1A0.v]
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm5, xmmword ptr [rbp+100h+vecIn.v]
        vshufps xmm9, xmm13, xmm13, 0D2h ; 'Ò'
        vshufps xmm7, xmm13, xmm13, 0C9h ; 'É'
        vshufps xmm8, xmm13, xmm13, 0FFh
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm5
        vaddps  xmm12, xmm0, xmm4
        vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm14, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm15, xmm15, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm15, xmm15, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm15, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm9
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm2, xmm0, xmm7
        vsubps  xmm1, xmm2, xmm3
        vmulps  xmm0, xmm8, xmm6
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm1, xmm3, xmm14
        vmovups xmm14, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm1
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm14
        vaddps  xmm1, xmm3, xmm15
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm1
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm2, xmm1, xmm9
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm14
        vaddps  xmm1, xmm3, xmmword ptr [rsp+200h+var_1A0.v]
        vmovups xmmword ptr [rsp+200h+var_1A0.v], xmm1
        vshufps xmm11, xmm10, xmm10, 0FFh
        vmulps  xmm5, xmm10, xmm8
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm13, xmm11
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm5, xmm2, xmm14
        vmulps  xmm4, xmm13, xmm14
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm12, xmm12, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm3, xmm2, xmmword ptr [rbp+100h+vecIn.v]
        vaddps  xmm0, xmm5, xmm3
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm0
      }
      R_TransformToModelSpace(&_R13->rootQuat, &_R13->rootOffset, &vecIn, &vecIn, &normIn, &normIn, &tanIn, &tanIn, &selfVisDirIn, &selfVisDirIn);
      __asm
      {
        vbroadcastss xmm0, dword ptr [r13+1Ch]
        vmovups xmm2, xmmword ptr [rbp+100h+vecIn.v]
        vsubps  xmm3, xmm2, xmmword ptr [r13+10h]
        vmovups xmm1, [rbp+100h+var_110]
        vrcpps  xmm4, xmm0
        vmulps  xmm0, xmm4, xmm3
        vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm2, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm2, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, xmmword ptr [rsp+200h+var_1A0.v]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v349, v348, &v390);
      __asm
      {
        vmovups xmm5, xmmword ptr [rbp+100h+normIn.v]
        vmovups xmm4, xmmword ptr [rbp+100h+var_130.v]
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm2
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm4
        vmovups [rbp+100h+var_110], xmm5
      }
      AxisComponentsToQuat((const vec3_t *)&tanIn, (const vec3_t *)&normIn, (const vec3_t *)&v393, &out);
      __asm
      {
        vmovss  xmm0, [rsp+200h+var_1B0]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+200h+var_1B0], xmm0
      }
      v361.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      __asm
      {
        vmovups xmm0, [rbp+100h+var_170]
        vmovd   r8d, xmm6
      }
      v396.packed = v361.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+20h], 8
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm6
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [r14+8], xmm1 }
      ++_R14;
      __asm
      {
        vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
        vpextrd rcx, xmm6, 2
      }
      _ER11 = 0;
      _R12 += 14;
      __asm
      {
        vpextrd rdx, xmm6, 1
        vxorps  xmm14, xmm14, xmm14
      }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v367 = (int)_RCX < 0;
      v368 = _RCX;
      v369 = _RDX;
      if ( v367 )
        v368 = 0;
      v370 = (*(_QWORD *)&v368 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v369 = 0;
      v371 = *(_QWORD *)&v369 & 0x1FFFFFi64 | v370;
      v372 = _ER8;
      v373 = v371 << 21;
      if ( _ER8 < 0 )
        v372 = 0;
      _R9 = (_DWORD *)(v389 + 20);
      v389 += 20i64;
      v388 = v41 & 0x8000000000000000ui64 | *(_QWORD *)&v372 & 0x1FFFFFi64 | v373;
      _R14[-1].xyz = (PackedPosition)v388;
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm15, [rsp+200h+var_C0]
      vmovaps xmm14, [rsp+200h+var_B0]
      vmovaps xmm13, [rsp+200h+var_A0]
      vmovaps xmm12, [rsp+200h+var_90]
      vmovaps xmm11, [rsp+200h+var_80]
      vmovaps xmm10, [rsp+200h+var_70]
      vmovaps xmm9, [rsp+200h+var_60]
      vmovaps xmm8, [rsp+200h+var_50]
      vmovaps xmm7, [rsp+200h+var_40]
      vmovaps xmm6, [rsp+200h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeight7DQB
==============
*/
void R_SkinXSurfaceWeight7DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  __int64 v18; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v26; 
  unsigned __int64 v28; 
  int v38; 
  vector3 *v41; 
  unsigned __int64 v42; 
  __int64 v139; 
  __int64 v140; 
  const float4 *v366; 
  const float4 *v367; 
  PackedQuatDec3n v379; 
  __int64 v380; 
  bool v386; 
  int v387; 
  int v388; 
  __int64 v389; 
  __int64 v390; 
  int v391; 
  __int64 v392; 
  unsigned __int16 *v405; 
  float4 selfVisDirIn; 
  unsigned __int64 v407; 
  unsigned __int64 v408; 
  _DWORD *v409; 
  __int64 v410; 
  float4 v411; 
  float4 tanIn; 
  float4 normIn; 
  __int128 v414; 
  vec4_t out; 
  float4 vecIn; 
  PackedQuatDec3n v417; 

  _R14 = vertsOut;
  _R13 = bbData;
  v18 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1482, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1483, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1484, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v18;
  v22 = v18;
  v23 = 20 * v18;
  if ( (unsigned __int64)(20 * v18) > 0x200 )
    v23 = 512i64;
  _ER11 = 0;
  for ( _RAX = 0i64; _RAX < v23; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v26 = 2 * v18;
  _RAX = 0i64;
  v28 = 2 * v18;
  if ( (unsigned __int64)(2 * v18) > 0x200 )
    v28 = 512i64;
  if ( v28 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v28 );
  }
  if ( (_DWORD)v18 )
  {
    __asm { vmovups xmm4, cs:__xmm@35800004358000043580000435800004 }
    _R9 = (_DWORD *)&_RBX->xyz + 1;
    __asm { vmovaps [rsp+200h+var_30], xmm6 }
    _RDI = (unsigned __int16 *)(_RDI + 1);
    __asm
    {
      vmovaps [rsp+200h+var_40], xmm7
      vmovaps [rsp+200h+var_50], xmm8
      vmovaps [rsp+200h+var_60], xmm9
    }
    _R15 = 508i64;
    __asm { vmovaps [rsp+200h+var_70], xmm10 }
    if ( _RDX <= 0x200 )
      _R15 = -4i64;
    __asm
    {
      vmovaps [rsp+200h+var_80], xmm11
      vmovaps [rsp+200h+var_90], xmm12
      vmovaps [rsp+200h+var_A0], xmm13
    }
    _R12 = 510i64;
    __asm { vmovaps [rsp+200h+var_B0], xmm14 }
    if ( v26 <= 0x200 )
      _R12 = -2i64;
    __asm
    {
      vmovaps [rsp+200h+var_C0], xmm15
      vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
      vxorps  xmm14, xmm14, xmm14
    }
    v405 = _RDI;
    v409 = (_DWORD *)&_RBX->xyz + 1;
    v410 = _R15;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r15+r9]
        prefetcht0 byte ptr [r12+rdi]
        vmovups xmm13, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmovups xmm11, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      }
      v38 = *(_R9 - 1);
      __asm
      {
        vmovups xmm12, xmmword ptr [r9+4]
        vmovups xmm7, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      HIDWORD(v407) = *_R9;
      LODWORD(v407) = v38;
      v41 = (vector3 *)(v38 & 0x1FFFFF);
      v42 = v407;
      __asm
      {
        vpshufd xmm3, xmm12, 0
        vmovd   xmm1, r11d
      }
      vecIn.v.m128_i32[0] = (int)v41;
      vecIn.v.m128_i32[1] = (v407 >> 21) & 0x1FFFFF;
      vecIn.v.m128_i32[2] = (v407 >> 42) & 0x1FFFFF;
      _EAX = _R9[3] & 0x20000000;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vmovss  [rsp+200h+var_1B0], xmm0
        vcvtdq2ps xmm0, xmmword ptr [rbp+100h+vecIn.v]
        vmulps  xmm1, xmm0, xmm4
        vbroadcastss xmm0, dword ptr [r13+0Ch]
        vsubps  xmm2, xmm1, xmm13
        vmulps  xmm1, xmm2, xmm0
        vaddps  xmm4, xmm1, xmmword ptr [r13+0]
        vpand   xmm0, xmm7, xmm3
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm10, xmm0, xmm11
        vandps  xmm5, xmm10, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmm7
        vcvtdq2ps xmm1, xmm0
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_selfVisDirScaleRcp@@3Ufloat4@@B.v; float4 const g_selfVisDirScaleRcp
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm9, xmm3, xmm11
        vandps  xmm3, xmm9, xmmword ptr cs:?g_maskOffSignBit@@3Ufloat4@@B.v; float4 const g_maskOffSignBit
        vsubps  xmm7, xmm13, xmm5
        vsubps  xmm8, xmm7, xmm3
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
        vandps  xmm1, xmm0, xmm11
        vandnps xmm0, xmm0, xmm13
        vorps   xmm2, xmm1, xmm0
        vsubps  xmm1, xmm13, xmm3
        vmulps  xmm2, xmm2, xmm1
        vandps  xmm3, xmm2, xmm6
        vandps  xmm2, xmm5, xmm11
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm4
        vorps   xmm4, xmm3, xmm0
        vorps   xmm0, xmm2, xmm1
        vmulps  xmm2, xmm0, xmm7
        vandps  xmm3, xmm2, xmm6
        vandnps xmm1, xmm6, xmm9
        vorps   xmm0, xmm3, xmm1
        vshufps xmm2, xmm4, xmm0, 0
        vshufps xmm5, xmm2, xmm8, 8
        vmulps  xmm0, xmm5, xmm5
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm4, xmm5, xmm1
        vshufps xmm0, xmm12, xmm12, 0
        vandps  xmm0, xmm0, xmmword ptr cs:?g_selfVisScaleAngleMask@@3Ufloat4@@B.v; float4 const g_selfVisScaleAngleMask
        vmovups xmmword ptr [rsp+200h+var_1A0.v], xmm4
        vmovups [rbp+100h+var_170], xmm12
        vmovups [rbp+100h+var_110], xmm0
        vpshufd xmm1, xmm12, 0FFh
        vpsrld  xmm0, xmm1, 1Eh
        vpand   xmm7, xmm0, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm15, xmm1
        vpsrld  xmm0, xmm1, 14h
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm2, xmm1
        vpshufd xmm2, xmm12, 0FFh
        vpsrld  xmm0, xmm2, 0Ah
        vpand   xmm1, xmm0, xmm15
        vpunpckldq xmm3, xmm3, xmm1
        vcvtdq2ps xmm2, xmm3
        vmulps  xmm0, xmm2, cs:__xmm@3ab532403ab532403ab532403ab53240
        vsubps  xmm5, xmm0, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsubps  xmm1, xmm13, xmm0
        vandps  xmm0, xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
        vmaxps  xmm2, xmm14, xmm1
        vsqrtps xmm3, xmm2
        vandps  xmm4, xmm3, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vaddps  xmm6, xmm4, xmm0
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
        vshufps xmm3, xmm6, xmm6, 0B4h ; '´'
        vshufps xmm1, xmm6, xmm6, 93h ; '“'
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
        vshufps xmm2, xmm6, xmm6, 9Ch ; 'œ'
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
        vaddps  xmm1, xmm5, xmm4
        vaddps  xmm2, xmm1, xmm2
        vaddps  xmm0, xmm2, xmm3
      }
      Float4UnitQuatToAxis(v41, (const float4 *)_RDX);
      v139 = *(_RDI - 1);
      v140 = *_RDI;
      __asm
      {
        vmovups xmm3, xmmword ptr cs:g_short4BoneWeightScale.v
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm0
      }
      _RAX = &boneDQ[v139];
      _RCX = &boneDQ[v140];
      __asm
      {
        vmovups xmm11, xmmword ptr [rcx]
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm2
      }
      _R15 = v405;
      __asm
      {
        vmovq   xmm0, qword ptr [r15+2]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm4, xmm0, xmm3
        vmovq   xmm0, qword ptr [r15+6]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm5, xmm0, xmm3
        vmovq   xmm0, qword ptr [r15+0Ah]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm6, xmm0, xmm3
        vmovq   xmm0, qword ptr [r15+0Eh]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm7, xmm0, xmm3
        vmovq   xmm0, qword ptr [r15+12h]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm13, xmm0, xmm3
        vmovq   xmm0, qword ptr [r15+16h]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm14, xmm0, xmm3
        vmovq   xmm0, qword ptr [r15+1Ah]
        vpmovzxwd xmm1, xmm0
        vshufps xmm2, xmm1, xmm1, 0
        vcvtdq2ps xmm0, xmm2
        vmulps  xmm15, xmm0, xmm3
        vaddps  xmm3, xmm5, xmm4
        vaddps  xmm1, xmm7, xmm6
        vaddps  xmm0, xmm14, xmm13
        vaddps  xmm0, xmm0, xmm15
        vaddps  xmm2, xmm0, xmm1
        vmulps  xmm1, xmm11, xmmword ptr [rax]
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm0, xmm0, xmm3
        vmovups xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vsubps  xmm12, xmm0, xmm2
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm11, xmm1, xmm4
        vmovups xmm4, xmmword ptr [rax]
        vmulps  xmm0, xmm4, xmmword ptr [rdx]
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm0, xmm4, xmmword ptr [r8]
        vmulps  xmm10, xmm1, xmm5
        vmovups xmm5, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r9]
        vmulps  xmm9, xmm1, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r10]
        vmulps  xmm8, xmm1, xmm7
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [r11]
        vmulps  xmm7, xmm1, xmm13
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm4, xmmword ptr [rdi]
        vmulps  xmm6, xmm1, xmm14
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vandps  xmm0, xmm2, xmm3
        vmulps  xmm3, xmm12, xmmword ptr [rax+10h]
        vorps   xmm1, xmm0, xmm5
        vmulps  xmm0, xmm11, xmmword ptr [rcx]
        vmulps  xmm5, xmm1, xmm15
        vmulps  xmm2, xmm12, xmm4
        vmulps  xmm1, xmm11, xmmword ptr [rcx+10h]
        vmovups xmm14, xmmword ptr [rbp+100h+normIn.v]
        vmovups xmm15, xmmword ptr [rbp+100h+var_130.v]
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm10, xmmword ptr [rdx]
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm1, xmm10, xmmword ptr [rdx+10h]
        vaddps  xmm3, xmm0, xmm4
        vmulps  xmm0, xmm9, xmmword ptr [r8]
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm9, xmmword ptr [r8+10h]
        vaddps  xmm2, xmm0, xmm3
        vmulps  xmm0, xmm8, xmmword ptr [r9]
        vaddps  xmm3, xmm1, xmm4
        vmulps  xmm1, xmm8, xmmword ptr [r9+10h]
        vaddps  xmm4, xmm0, xmm2
        vmulps  xmm0, xmm7, xmmword ptr [r10]
        vaddps  xmm2, xmm1, xmm3
        vmulps  xmm1, xmm7, xmmword ptr [r10+10h]
        vaddps  xmm3, xmm0, xmm4
        vmulps  xmm0, xmm6, xmmword ptr [r11]
        vaddps  xmm4, xmm1, xmm2
        vmulps  xmm1, xmm6, xmmword ptr [r11+10h]
        vaddps  xmm2, xmm0, xmm3
        vmulps  xmm0, xmm5, xmmword ptr [rdi]
        vaddps  xmm6, xmm0, xmm2
        vaddps  xmm3, xmm1, xmm4
        vmulps  xmm1, xmm5, xmmword ptr [rdi+10h]
        vaddps  xmm5, xmm1, xmm3
        vmulps  xmm0, xmm6, xmm6
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
        vmulps  xmm0, xmm4, xmm4
        vmulps  xmm1, xmm0, xmm2
        vmulps  xmm2, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm3, xmm0, xmm1
        vmulps  xmm0, xmm3, xmm2
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm13, xmm6, xmm1
        vmovups xmm6, xmmword ptr [rsp+200h+var_1A0.v]
        vmulps  xmm10, xmm5, xmm1
        vmovups xmm5, xmmword ptr [rbp+100h+vecIn.v]
        vshufps xmm9, xmm13, xmm13, 0D2h ; 'Ò'
        vshufps xmm7, xmm13, xmm13, 0C9h ; 'É'
        vshufps xmm8, xmm13, xmm13, 0FFh
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm5
        vaddps  xmm12, xmm0, xmm4
        vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vshufps xmm1, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm14, xmm8
        vaddps  xmm4, xmm0, xmm1
        vshufps xmm1, xmm15, xmm15, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm15, xmm15, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm15, xmm8
        vaddps  xmm5, xmm0, xmm1
        vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
        vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vmulps  xmm0, xmm8, xmm6
        vaddps  xmm6, xmm0, xmm1
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm3, xmm0, xmm7
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vshufps xmm11, xmm10, xmm10, 0FFh
        vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vaddps  xmm1, xmm3, xmm14
        vmovups xmm14, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm1
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm14
        vaddps  xmm1, xmm3, xmm15
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm1
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmulps  xmm3, xmm0, xmm14
        vaddps  xmm1, xmm3, xmmword ptr [rsp+200h+var_1A0.v]
        vmovups xmmword ptr [rsp+200h+var_1A0.v], xmm1
        vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm4, xmm3, xmm2
        vmulps  xmm5, xmm10, xmm8
        vmulps  xmm0, xmm13, xmm11
        vsubps  xmm1, xmm5, xmm0
        vaddps  xmm2, xmm4, xmm1
        vmulps  xmm5, xmm2, xmm14
        vmulps  xmm4, xmm13, xmm14
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm12, xmm12, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm3, xmm2, xmmword ptr [rbp+100h+vecIn.v]
        vaddps  xmm0, xmm5, xmm3
        vmovups xmmword ptr [rbp+100h+vecIn.v], xmm0
      }
      R_TransformToModelSpace(&_R13->rootQuat, &_R13->rootOffset, &vecIn, &vecIn, &normIn, &normIn, &tanIn, &tanIn, &selfVisDirIn, &selfVisDirIn);
      __asm
      {
        vbroadcastss xmm0, dword ptr [r13+1Ch]
        vmovups xmm2, xmmword ptr [rbp+100h+vecIn.v]
        vsubps  xmm3, xmm2, xmmword ptr [r13+10h]
        vmovups xmm1, [rbp+100h+var_110]
        vrcpps  xmm4, xmm0
        vmulps  xmm0, xmm4, xmm3
        vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vaddps  xmm2, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmulps  xmm3, xmm2, cs:__xmm@49fffff849fffff849fffff849fffff8
        vmovups xmm0, xmmword ptr [rsp+200h+var_1A0.v]
        vcvtps2dq xmm6, xmm3
      }
      Float4PackSelfVisX(v367, v366, &v411);
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp+100h+var_130.v]
        vmovups xmm5, xmmword ptr [rbp+100h+normIn.v]
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm2, xmm5, xmm5, 0D2h ; 'Ò'
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm2, xmm3, xmm0
        vmovups xmmword ptr [rbp+100h+var_130.v], xmm4
        vmovups xmmword ptr [rbp+100h+normIn.v], xmm2
        vmovups [rbp+100h+var_110], xmm5
      }
      AxisComponentsToQuat((const vec3_t *)&tanIn, (const vec3_t *)&normIn, (const vec3_t *)&v414, &out);
      __asm
      {
        vmovss  xmm0, [rsp+200h+var_1B0]
        vmovaps xmm1, xmm0; binormalSign
        vmovss  [rsp+200h+var_1B0], xmm0
      }
      v379.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM1).packed;
      v380 = (__int64)v409;
      _RDI = v405 + 16;
      __asm
      {
        vmovups xmm0, [rbp+100h+var_170]
        vmovdqu xmm15, cs:__xmm@000003ff000003ff000003ff000003ff
        vmovups xmm4, cs:__xmm@35800004358000043580000435800004
      }
      _R15 = v410;
      ++_R14;
      v417.packed = v379.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+20h], 8
        vpextrd rcx, xmm6, 2
      }
      _ER11 = 0;
      v405 += 16;
      __asm
      {
        vmovd   r8d, xmm6
        vpextrd rdx, xmm6, 1
      }
      if ( _ER8 > 0x1FFFFF )
        _ER8 = 0x1FFFFF;
      __asm { vmovups xmmword ptr [r14-0Ch], xmm1 }
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      __asm { vmovups xmmword ptr [rbp+100h+vecIn.v], xmm6 }
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v386 = (int)_RCX < 0;
      v387 = _RCX;
      v388 = _RDX;
      if ( v386 )
        v387 = 0;
      v389 = (*(_QWORD *)&v387 & 0x1FFFFFi64) << 21;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      if ( (_RDX & 0x80000000) != 0i64 )
        v388 = 0;
      v390 = *(_QWORD *)&v388 & 0x1FFFFFi64 | v389;
      v391 = _ER8;
      v392 = v390 << 21;
      if ( _ER8 < 0 )
        v391 = 0;
      _R9 = (_DWORD *)(v380 + 20);
      v409 = _R9;
      v408 = v42 & 0x8000000000000000ui64 | *(_QWORD *)&v391 & 0x1FFFFFi64 | v392;
      _R14[-1].xyz = (PackedPosition)v408;
      --v22;
    }
    while ( v22 );
    __asm
    {
      vmovaps xmm15, [rsp+200h+var_C0]
      vmovaps xmm14, [rsp+200h+var_B0]
      vmovaps xmm13, [rsp+200h+var_A0]
      vmovaps xmm12, [rsp+200h+var_90]
      vmovaps xmm11, [rsp+200h+var_80]
      vmovaps xmm10, [rsp+200h+var_70]
      vmovaps xmm9, [rsp+200h+var_60]
      vmovaps xmm8, [rsp+200h+var_50]
      vmovaps xmm7, [rsp+200h+var_40]
      vmovaps xmm6, [rsp+200h+var_30]
    }
  }
}

/*
==============
R_SkinXSurfaceWeightDQB
==============
*/
void R_SkinXSurfaceWeightDQB(const GfxPackedVertex *inVerts, const XSurface *xsurf, const GfxModelSkinnedSurface *skinSurf, const DObjSkelDQ *boneDQ, GfxPackedVertex *outVerts)
{
  __int64 v10; 
  unsigned __int16 *blendVerts; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  int v22; 
  unsigned __int16 v23; 
  int v24; 
  unsigned __int16 v25; 
  int v26; 
  unsigned __int16 v27; 
  int v28; 
  unsigned __int16 v29; 
  int v30; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  PrecomputedBoundingBoxData bbData; 
  __int64 v34; 
  __int128 v35; 
  vec4_t outBoundingBoxData; 

  v34 = -2i64;
  _RBX = skinSurf;
  Profile_Begin(102);
  v10 = 0i64;
  blendVerts = xsurf->blendVerts;
  R_SetBoundingBoxData(&xsurf->surfBounds, &outBoundingBoxData);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0E8h+outBoundingBoxData]
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmovups ymmword ptr [rsp+0E8h+bbData.preSkinning.v], ymm0
    vmovups xmm0, xmmword ptr [rbx+4Ch]
    vmovups xmmword ptr [rsp+0E8h+bbData.rootQuat.v], xmm0
    vmovss  xmm1, dword ptr [rbx+5Ch]
  }
  HIDWORD(v35) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+80h]
    vmovss  xmm3, xmm3, xmm1
    vinsertps xmm3, xmm3, dword ptr [rbx+60h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+64h], 20h ; ' '
    vmovups xmmword ptr [rsp+0E8h+bbData.rootOffset.v], xmm3
  }
  v20 = xsurf->blendVertCounts[0];
  if ( v20 )
  {
    R_SkinXSurfaceWeight0DQB(inVerts, blendVerts, v20, &bbData, boneDQ, outVerts);
    v10 = xsurf->blendVertCounts[0];
    blendVerts += (unsigned int)(2 * v10);
  }
  v21 = xsurf->blendVertCounts[1];
  if ( v21 )
  {
    R_SkinXSurfaceWeight1DQB(&inVerts[v10], blendVerts, v21, &bbData, boneDQ, &outVerts[v10]);
    v22 = xsurf->blendVertCounts[1];
    v10 = (unsigned int)(v22 + v10);
    blendVerts += (unsigned int)(4 * v22);
  }
  v23 = xsurf->blendVertCounts[2];
  if ( v23 )
  {
    R_SkinXSurfaceWeight2DQB(&inVerts[v10], blendVerts, v23, &bbData, boneDQ, &outVerts[v10]);
    v24 = xsurf->blendVertCounts[2];
    v10 = (unsigned int)(v24 + v10);
    blendVerts += (unsigned int)(6 * v24);
  }
  v25 = xsurf->blendVertCounts[3];
  if ( v25 )
  {
    R_SkinXSurfaceWeight3DQB(&inVerts[v10], blendVerts, v25, &bbData, boneDQ, &outVerts[v10]);
    v26 = xsurf->blendVertCounts[3];
    v10 = (unsigned int)(v26 + v10);
    blendVerts += (unsigned int)(8 * v26);
  }
  v27 = xsurf->blendVertCounts[4];
  if ( v27 )
  {
    R_SkinXSurfaceWeight4DQB(&inVerts[v10], blendVerts, v27, &bbData, boneDQ, &outVerts[v10]);
    v28 = xsurf->blendVertCounts[4];
    v10 = (unsigned int)(v28 + v10);
    blendVerts += (unsigned int)(10 * v28);
  }
  v29 = xsurf->blendVertCounts[5];
  if ( v29 )
  {
    R_SkinXSurfaceWeight5DQB(&inVerts[v10], blendVerts, v29, &bbData, boneDQ, &outVerts[v10]);
    v30 = xsurf->blendVertCounts[5];
    v10 = (unsigned int)(v30 + v10);
    blendVerts += (unsigned int)(12 * v30);
  }
  v31 = xsurf->blendVertCounts[6];
  if ( v31 )
  {
    R_SkinXSurfaceWeight6DQB(&inVerts[v10], blendVerts, v31, &bbData, boneDQ, &outVerts[v10]);
    v10 = xsurf->blendVertCounts[6] + (unsigned int)v10;
    blendVerts += 14 * (unsigned int)xsurf->blendVertCounts[6];
  }
  v32 = xsurf->blendVertCounts[7];
  if ( v32 )
    R_SkinXSurfaceWeight7DQB(&inVerts[v10], blendVerts, v32, &bbData, boneDQ, &outVerts[v10]);
  Profile_EndInternal(NULL);
}

/*
==============
R_TransformToModelSpace
==============
*/
void R_TransformToModelSpace(const float4 *rootQuat, const float4 *rootOffset, const float4 *vecIn, float4 *vecOut, const float4 *normIn, float4 *normOut, const float4 *tanIn, float4 *tanOut, const float4 *selfVisDirIn, float4 *selfVisDirOut)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps [rsp+68h+var_58], xmm10
    vmovups xmm0, xmmword ptr [rcx]
    vmulps  xmm9, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
    vmovups xmm1, xmmword ptr [r8]
    vsubps  xmm7, xmm1, xmmword ptr [rdx]
  }
  _RAX = normIn;
  _R10 = normOut;
  _R11 = tanOut;
  _RBX = selfVisDirOut;
  __asm
  {
    vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm4, xmm0, xmm0, 0FFh
    vxorps  xmm10, xmm10, xmm10
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm5, xmm0, xmm0
    vsubps  xmm0, xmm10, xmm4
    vmulps  xmm0, xmm5, xmm0
    vaddps  xmm4, xmm0, xmm7
    vshufps xmm7, xmm9, xmm9, 0C9h ; 'É'
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm8, xmm9, xmm9, 0D2h ; 'Ò'
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm4
    vmovups xmmword ptr [r9], xmm3
    vmovups xmm4, xmmword ptr [rax]
  }
  _RAX = tanIn;
  __asm
  {
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm5, xmm0, xmm0
    vshufps xmm6, xmm9, xmm9, 0FFh
    vsubps  xmm1, xmm10, xmm6
    vmulps  xmm0, xmm5, xmm1
    vaddps  xmm4, xmm0, xmm4
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm4
    vmovups xmmword ptr [r10], xmm3
    vmovups xmm4, xmmword ptr [rax]
  }
  _RAX = selfVisDirIn;
  __asm
  {
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm5, xmm0, xmm0
    vsubps  xmm1, xmm10, xmm6
    vmulps  xmm0, xmm5, xmm1
    vaddps  xmm4, xmm0, xmm4
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm4
    vmovups xmmword ptr [r11], xmm3
    vmovups xmm4, xmmword ptr [rax]
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm5, xmm0, xmm0
    vsubps  xmm1, xmm10, xmm6
    vmulps  xmm0, xmm5, xmm1
    vaddps  xmm4, xmm0, xmm4
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm2, xmm0, xmm8
    vmulps  xmm3, xmm1, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm4
    vmovups xmmword ptr [rbx], xmm3
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
  }
}

