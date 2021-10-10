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
void Float4QuatRotateInv(const float4 *outResult, const float4 *a2, float4 *a3)
{
  __m128 v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 

  v5 = _mm_shuffle_ps(v3, v3, 210);
  v6 = _mm_shuffle_ps(v3, v3, 201);
  v7 = _mm_shuffle_ps(v3, v3, 255);
  v8 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v4, v4, 210), v6), _mm128_mul_ps(_mm_shuffle_ps(v4, v4, 201), v5));
  v9 = _mm128_add_ps(v8, v8);
  a3->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v9, v9, 210), v6), _mm128_mul_ps(_mm_shuffle_ps(v9, v9, 201), v5)), _mm128_add_ps(_mm128_mul_ps(v9, _mm128_sub_ps((__m128)0i64, v7)), v4));
}

/*
==============
R_AddSkinningComputeCmds
==============
*/
bool R_AddSkinningComputeCmds(ComputeCmdList *list, const vec3_t *viewOffset, const vec3_t *viewOffsetPrevFrame, void *modelSurfs, unsigned int surfBufSize, const DObjAnimMat *skelMatArray, const DObjAnimMat *skelMatArrayPrevFrame, const DObjPartBits *surfacePartBits, int partBitCount, unsigned __int16 surfCount, int objBufIndex, unsigned __int8 dismembermentPointCount, vec3_t *dismembermentPointsBuffer, unsigned __int8 *dismembermentIndicesBuffer, const float *dobjBlendShapeWeights, const unsigned __int16 dobjBlendShapeTargetCount, const int entnum, const XModel *const *models, unsigned int numModels, const unsigned __int8 *surfModelIndex)
{
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  char *v28; 
  int v29; 
  unsigned int v30; 
  __m128 v32; 
  __m128 v33; 
  int v34; 
  float v35; 
  float v36; 
  double v37; 
  int *v38; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  bool v44; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  __int64 v48; 
  __int64 v49; 
  int v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  vec4_t quat; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  XBoneInfo *v63; 
  __m128 v64; 
  __m128 v65; 
  __m128 v66; 
  __m128 v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 
  __m128 v71; 
  __m128 v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v75; 
  __m128 v76; 
  __m128 v77; 
  __m128 v78; 
  __m128 v79; 
  __m128 v80; 
  __m128 v81; 
  __m128 v82; 
  __m128 v83; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  __m128 v88; 
  __m128 v92; 
  __m128 v93; 
  __m128 v94; 
  __m128 v96; 
  __m128 v97; 
  vector3 *v100; 
  unsigned int *v101; 
  unsigned int *v102; 
  __int64 v103; 
  signed int v104; 
  unsigned int v105; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  const XModel *v118; 
  unsigned int v119; 
  const DObjAnimMat *v121; 
  float v122; 
  float v123; 
  const XModel *v124; 
  unsigned int v125; 
  __int64 v126; 
  const DObjAnimMat *v127; 
  double v128; 
  unsigned int v129; 
  float v130; 
  float v131; 
  char *v132; 
  char *v133; 
  char *v134; 
  __m128 v135; 
  int v136; 
  int v137; 
  __int64 v138; 
  unsigned int v139; 
  bool v140; 
  char v141; 
  const float4 *v142; 
  unsigned int *v143; 
  __int64 v144; 
  __m128 v145; 
  const Bounds *v147; 
  __int128 v153; 
  __m128 v164; 
  int v167; 
  __int64 v169; 
  __int64 v170; 
  __int64 v171; 
  __int64 v172; 
  bool v173; 
  int v174; 
  int v175; 
  unsigned int v176; 
  unsigned int v177; 
  unsigned int v178; 
  bool v179; 
  int v180; 
  int v181; 
  int v182; 
  int v183; 
  void *v184; 
  char *v186; 
  unsigned __int8 *v187; 
  unsigned __int8 *v188; 
  __int64 v190; 
  __m128 v191; 
  __m256i v193; 
  tmat33_t<vec3_t> bounds; 
  vec3_t origin; 
  vec3_t pos; 
  vec3_t v197; 
  __m128 v198; 
  char axis[48]; 

  _RSI = (unsigned int *)modelSurfs;
  v187 = NULL;
  v188 = NULL;
  Profile_Begin(67);
  if ( !surfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 3859, ASSERT_TYPE_ASSERT, "(surfCount)", (const char *)&queryFormat, "surfCount") )
    __debugbreak();
  v175 = 0;
  v24 = -1;
  v174 = -1;
  v25 = 0;
  v178 = -1;
  v26 = -1;
  v181 = 0;
  v27 = 0;
  v180 = 0;
  v184 = NULL;
  v186 = NULL;
  if ( !dobjBlendShapeTargetCount )
    goto LABEL_9;
  if ( !r_blendshape_enable->current.enabled )
  {
    v24 = -1;
    goto LABEL_9;
  }
  v28 = (char *)R_AllocComputeCmdData(list, 4 * (unsigned int)dobjBlendShapeTargetCount);
  v186 = v28;
  if ( v28 )
  {
    memcpy_0(v28, dobjBlendShapeWeights, 4i64 * dobjBlendShapeTargetCount);
    v27 = 0;
    v24 = -1;
    v25 = 0;
    v26 = -1;
LABEL_9:
    v29 = -1;
    v30 = 0;
    v173 = 0;
    v176 = -1;
    v177 = 0;
    _XMM15 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    if ( !surfCount )
    {
LABEL_118:
      Profile_EndInternal(NULL);
      LOBYTE(v28) = 1;
      return (char)v28;
    }
    v34 = _xmm;
    v35 = FLOAT_2_0;
    v36 = FLOAT_0_001;
    while ( 1 )
    {
      v37 = DOUBLE_0_000244140625;
      v38 = (int *)_RSI;
      if ( *_RSI == -3 )
      {
        ++_RSI;
      }
      else
      {
        if ( v24 != *((unsigned __int16 *)_RSI + 20) || v27 != *((unsigned __int16 *)_RSI + 22) || v26 != *((unsigned __int16 *)_RSI + 23) || v25 != *((unsigned __int16 *)_RSI + 24) )
        {
          v39 = *((unsigned __int16 *)_RSI + 20);
          v40 = v39;
          v174 = *((unsigned __int16 *)_RSI + 20);
          v175 = *((unsigned __int16 *)_RSI + 22);
          v41 = *((unsigned __int16 *)_RSI + 24) + v175;
          v178 = *((unsigned __int16 *)_RSI + 23);
          v180 = v41;
          v181 = *((unsigned __int16 *)_RSI + 24);
          if ( dismembermentPointCount )
          {
            v187 = &dismembermentIndicesBuffer[v39];
            v188 = &dismembermentIndicesBuffer[*((unsigned __int16 *)_RSI + 23)];
          }
          v184 = R_AllocComputeCmdDataAligned(list, 32 * v41, 0x10u);
          if ( !v184 )
          {
LABEL_117:
            Profile_EndInternal(NULL);
            LOBYTE(v28) = 0;
            return (char)v28;
          }
          v32 = (__m128)_xmm;
          v42 = v178;
          v33 = (__m128)_xmm_ff7fffffff7fffffff7fffffff7fffff;
          v176 = surfModelIndex[v177];
          v173 = v176 != v29;
          if ( v175 )
            v42 = (unsigned int)v39;
          v43 = 0;
          *(_OWORD *)bounds.m[0].v = *(_OWORD *)skelMatArray[v42].trans.v;
          v44 = (surfacePartBits->array[7] & 2) != 0;
          v179 = v44;
          if ( v41 )
          {
            v45 = (unsigned __int16)v178;
            v46 = v175;
            v47 = v178 - v175 - v39;
            v182 = v47;
            v48 = v39;
            v49 = (unsigned __int16)v178 - (__int64)v175 - v39;
            do
            {
              v50 = v43 + v39;
              v51 = v48 + v49;
              v52 = v48;
              if ( v48 - v40 >= v46 )
                v52 = v51;
              if ( v48 - v40 >= v46 )
                v50 += v47;
              if ( v50 >= partBitCount )
                goto LABEL_35;
              if ( (unsigned int)v50 >= 0x100 )
              {
                LODWORD(v170) = 256;
                LODWORD(v169) = v50;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v169, v170) )
                  __debugbreak();
                v45 = (unsigned __int16)v178;
                v44 = v179;
              }
              if ( ((0x80000000 >> (v50 & 0x1F)) & surfacePartBits->array[(unsigned __int64)(unsigned int)v50 >> 5]) != 0 )
              {
LABEL_35:
                if ( v44 || v52 < v45 )
                {
                  v53 = *((_QWORD *)_RSI + 4);
                  v54 = v52;
                  v190 = v53;
                  if ( (LODWORD(skelMatArray[v54].quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(skelMatArray[v54].quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(skelMatArray[v54].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(skelMatArray[v54].quat.v[3]) & 0x7F800000) == 2139095040 )
                  {
                    CrashReport_TriggerNow();
                    v53 = v190;
                  }
                  v55 = v50;
                  _R8 = 32i64 * v43;
                  quat = skelMatArray[v55].quat;
                  v58 = *(__m128 *)(v53 + _R8 + 16);
                  v59 = (__m128)(*(_OWORD *)(v53 + _R8) ^ *(_OWORD *)&vNegateXYZ);
                  v60 = _mm_shuffle_ps(v59, v59, 201);
                  v61 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v58, v58, 201), v59), _mm128_mul_ps(v60, v58));
                  v62 = _mm_shuffle_ps(v61, v61, 201);
                  v63 = &models[v176]->boneInfo[v43];
                  v64 = _mm128_add_ps(v62, v62);
                  v65 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v64, v64, 201), v59), _mm128_mul_ps(v64, v60));
                  v66 = _mm_shuffle_ps((__m128)quat, (__m128)quat, 255);
                  v67 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 255), v64), v58), _mm_shuffle_ps(v65, v65, 201)) ^ *(_OWORD *)&vNegateXYZ);
                  v191 = _mm128_add_ps(_mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 177), _mm_shuffle_ps((__m128)quat, (__m128)quat, 170)) ^ *(_OWORD *)&vNPPN), (__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 78), _mm_shuffle_ps((__m128)quat, (__m128)quat, 85)) ^ *(_OWORD *)&vPPNN)), _mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 27), _mm_shuffle_ps((__m128)quat, (__m128)quat, 0)) ^ *(_OWORD *)&vPNPN), _mm128_mul_ps(v59, v66)));
                  v68 = _mm_shuffle_ps((__m128)quat, (__m128)quat, 201);
                  v69 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v67, v67, 201), (__m128)quat), _mm128_mul_ps(v67, v68));
                  v70 = _mm_shuffle_ps(v69, v69, 201);
                  v71 = _mm128_add_ps(v70, v70);
                  v72 = _mm128_mul_ps(v71, v68);
                  v73 = (__m128)quat;
                  v74 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v71, v71, 201), (__m128)quat), v72);
                  v75 = _mm128_add_ps(_mm128_mul_ps(v71, v66), v67);
                  v76 = *(__m128 *)v63->bounds.midPoint.v;
                  v77 = _mm128_add_ps(_mm128_add_ps(v75, _mm_shuffle_ps(v74, v74, 201)), *(__m128 *)skelMatArray[v55].trans.v);
                  v78 = _mm128_add_ps(v73, v73);
                  v79 = _mm128_mul_ps(v78, (__m128)quat);
                  v80 = _mm128_sub_ps((__m128)_xmm, _mm128_add_ps(_mm_shuffle_ps(v79, v79, 26), _mm_shuffle_ps(v79, v79, 1)));
                  v81 = _mm128_mul_ps(_mm_shuffle_ps(v73, v73, 218), _mm_shuffle_ps(v78, v78, 1));
                  v82 = _mm128_mul_ps(_mm_shuffle_ps(v73, v73, 255), v78);
                  v83 = _mm128_add_ps(v82, v81);
                  _RAX = v184;
                  v85 = _mm128_sub_ps(v81, v82);
                  v86 = _mm_shuffle_ps(_mm_shuffle_ps(v80, v83, 160), v85, 88);
                  v87 = _mm_shuffle_ps(_mm_shuffle_ps(v85, v80, 90), v83, 8);
                  v88 = _mm_shuffle_ps(_mm_shuffle_ps(v83, v85, 5), v80, 168);
                  _XMM0 = g_negativeZero.v;
                  __asm
                  {
                    vandnps xmm5, xmm0, xmm13
                    vandnps xmm6, xmm0, xmm12
                  }
                  v92 = _mm_shuffle_ps(v76, v76, 85);
                  v93 = _mm_shuffle_ps(v76, v76, 170);
                  v94 = _mm_shuffle_ps(v76, v76, 0);
                  __asm { vandnps xmm7, xmm0, xmm14 }
                  v96 = _mm128_add_ps(_mm128_mul_ps(v93, v88), _mm128_add_ps(_mm128_mul_ps(v92, v87), _mm128_add_ps(_mm128_sub_ps(*(__m128 *)skelMatArray[v55].trans.v, *(__m128 *)bounds.m[0].v), _mm128_mul_ps(v94, v86))));
                  v97 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)v63->bounds.halfSize.v, *(__m128 *)v63->bounds.halfSize.v, 170), _XMM6), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)v63->bounds.halfSize.v, *(__m128 *)v63->bounds.halfSize.v, 85), _XMM5), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)v63->bounds.halfSize.v, *(__m128 *)v63->bounds.halfSize.v, 0), _XMM7)));
                  v33 = _mm128_add_ps(v96, v97);
                  v32 = _mm128_sub_ps(v96, v97);
                  *(__m128 *)&axis[16] = _XMM5;
                  _XMM5 = v191;
                  _XMM1 = _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 177), _mm_shuffle_ps(v77, v77, 170));
                  _XMM2 = (__m128)(*(_OWORD *)&_XMM1 ^ *(_OWORD *)&vNPPP);
                  _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 78), _mm_shuffle_ps(v77, v77, 85)) ^ *(_OWORD *)&vPPNP), (__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 27), _mm_shuffle_ps(v77, v77, 0)) ^ *(_OWORD *)&vPNPP)), (__m128)(*(_OWORD *)&_XMM1 ^ *(_OWORD *)&vNPPP)), vHalfXYZw);
                  __asm
                  {
                    vmovntps xmmword ptr [r8+rax], xmm5
                    vmovntps xmmword ptr [r8+rax+10h], xmm0
                  }
                  *(__m128 *)axis = _XMM7;
                  *(__m128 *)&axis[32] = _XMM6;
                }
              }
              v46 = v175;
              ++v43;
              v44 = v179;
              ++v48;
              LODWORD(v39) = v40;
              v47 = v182;
              v49 = (unsigned __int16)v178 - (__int64)v175 - v40;
              v45 = (unsigned __int16)v178;
            }
            while ( v43 < v180 );
            v37 = DOUBLE_0_000244140625;
            v34 = _xmm;
            v36 = FLOAT_0_001;
            v35 = FLOAT_2_0;
            _XMM15 = 0i64;
            v38 = (int *)_RSI;
          }
          v30 = v177;
        }
        v100 = (vector3 *)*_RSI;
        if ( (int)v100 <= -4 )
        {
          if ( r_xdebugPack->current.integer >= 1 )
          {
            v142 = (const float4 *)*(unsigned __int8 *)(*((_QWORD *)_RSI + 7) + 8i64);
            if ( (_BYTE)v142 )
            {
              v143 = _RSI + 25;
              v144 = (unsigned __int8)v142;
              do
              {
                v145 = *(__m128 *)(v143 - 6);
                __asm { vbroadcastss xmm6, dword ptr [rsi+48h] }
                Float4UnitQuatToAxis(v100, v142);
                v147 = (const Bounds *)*((_QWORD *)_RSI + 7);
                _XMM5 = _mm128_mul_ps(v145, _XMM6);
                *(__m128 *)v193.m256i_i8 = v145;
                _XMM0 = 0i64;
                __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rbx-8] }
                *(__m128 *)&v193.m256i_u64[2] = _XMM1;
                *(__m256i *)axis = v193;
                _XMM7 = _mm128_mul_ps(_XMM6, _XMM1);
                *((_QWORD *)&v153 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v153 = *(double *)&_XMM0 * v37;
                _XMM1 = v153;
                _XMM0 = 0i64;
                __asm
                {
                  vcvtsi2sd xmm0, xmm0, dword ptr [rbx-4]
                  vcvtsd2ss xmm4, xmm1, xmm1
                }
                *((_QWORD *)&v153 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v153 = *(double *)&_XMM0 * v37;
                _XMM1 = v153;
                _XMM0 = 0i64;
                __asm { vcvtsi2sd xmm0, xmm0, dword ptr [rbx] }
                _XMM6 = _mm128_mul_ps(_XMM2, _XMM6);
                __asm { vcvtsd2ss xmm3, xmm1, xmm1 }
                *((_QWORD *)&v153 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v153 = *(double *)&_XMM0 * v37;
                _XMM1 = v153;
                __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                v198.m128_i32[3] = 0;
                v164 = v198;
                v164.m128_f32[0] = *(float *)&_XMM4;
                _XMM0 = v164;
                __asm
                {
                  vinsertps xmm0, xmm0, xmm3, 10h
                  vinsertps xmm0, xmm0, xmm2, 20h ; ' '
                }
                _XMM1 = _mm128_add_ps(_XMM0, g_unit.v);
                v197.v[0] = _XMM1.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [rsp+2B8h+var_138+4], xmm1, 1
                  vextractps dword ptr [rsp+2B8h+var_138+8], xmm1, 2
                }
                bounds.m[0].v[0] = _XMM5.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [rsp+2B8h+bounds.midPoint+4], xmm5, 1
                  vextractps dword ptr [rsp+2B8h+bounds.midPoint+8], xmm5, 2
                }
                bounds.m[1].v[0] = _XMM7.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [rsp+2B8h+bounds.halfSize+4], xmm7, 1
                  vextractps dword ptr [rsp+2B8h+bounds.halfSize+8], xmm7, 2
                }
                bounds.m[2].v[0] = _XMM6.m128_f32[0];
                __asm
                {
                  vextractps [rsp+2B8h+var_16C], xmm6, 1
                  vextractps [rsp+2B8h+var_168], xmm6, 2
                }
                v198 = _XMM0;
                R_AddDebugBoxOriented(&frontEndDataOut->debugGlobals, &v197, v147 + 6, &bounds, &colorCyan);
                v143 += 8;
                --v144;
              }
              while ( v144 );
              LODWORD(v100) = *_RSI;
            }
          }
          if ( (int)v100 > -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 226, ASSERT_TYPE_ASSERT, "(R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset ))", (const char *)&queryFormat, "R_IsRigidSurfaceType( modelSurf->base.skinnedCachedOffset )") )
            __debugbreak();
          v167 = -3 - *_RSI;
          if ( v167 > 128 )
          {
            LODWORD(v172) = 128;
            LODWORD(v171) = -3 - *_RSI;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v171, v172) )
              __debugbreak();
          }
          _RSI += 8 * (unsigned int)v167 + 19;
        }
        else
        {
          v101 = _RSI;
          v102 = _RSI;
          _RSI += 34;
          v103 = *((_QWORD *)v101 + 7);
          if ( !v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4069, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
            __debugbreak();
          if ( (*(_BYTE *)v103 & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4070, ASSERT_TYPE_ASSERT, "(XSurfaceIsSkinned( xsurf ))", (const char *)&queryFormat, "XSurfaceIsSkinned( xsurf )") )
            __debugbreak();
          if ( *v38 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4072, ASSERT_TYPE_ASSERT, "(baseSurf->skinnedCachedOffset >= 0)", (const char *)&queryFormat, "baseSurf->skinnedCachedOffset >= 0") )
            __debugbreak();
          v104 = v178;
          if ( v175 )
            v104 = v174;
          v183 = v38[1];
          if ( v173 && r_modelRadiusPackWarn->current.enabled )
          {
            v105 = v176;
            _XMM0 = _mm128_mul_ps(v32, v32);
            __asm { vhaddps xmm3, xmm0, xmm0 }
            _XMM1 = _mm128_mul_ps(v33, v33);
            __asm
            {
              vhaddps xmm0, xmm1, xmm1
              vhaddps xmm2, xmm0, xmm0
              vhaddps xmm0, xmm3, xmm3
              vmaxps  xmm8, xmm2, xmm0
            }
            if ( v176 >= numModels )
            {
              LODWORD(v170) = numModels;
              LODWORD(v169) = v176;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4091, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( numModels )", "modelIndex doesn't index numModels\n\t%i not in [0, %i)", v169, v170) )
                __debugbreak();
            }
            v113 = *(float *)(v103 + 156);
            v114 = *(float *)(v103 + 160);
            v115 = v113;
            if ( v113 != v114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4094, ASSERT_TYPE_ASSERT, "( xsurf->surfBounds.halfSize.x ) == ( xsurf->surfBounds.halfSize.y )", "%s == %s\n\t%g, %g", "xsurf->surfBounds.halfSize.x", "xsurf->surfBounds.halfSize.y", v113, v114) )
            {
              __debugbreak();
              v115 = v113;
            }
            v116 = *(float *)(v103 + 164);
            if ( v115 != v116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4095, ASSERT_TYPE_ASSERT, "( xsurf->surfBounds.halfSize.x ) == ( xsurf->surfBounds.halfSize.z )", "%s == %s\n\t%g, %g", "xsurf->surfBounds.halfSize.x", "xsurf->surfBounds.halfSize.z", v115, v116) )
              __debugbreak();
            if ( _XMM8.m128_f32[0] > (float)(v113 * v113) )
            {
              LODWORD(v117) = _mm_sqrt_ps(_XMM8).m128_u32[0];
              if ( v113 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
                __debugbreak();
              v118 = models[v176];
              v119 = R_MessageStringHash(v118->name);
              __asm { vroundss xmm0, xmm15, xmm2, 2 }
              LODWORD(v172) = entnum;
              R_WarnOncePerFrameUnique(R_WARN_RADIUS_FOR_PACKING_TOO_SMALL0, 3u, s_packedRadiusTooSmallWarnHashes, v119, v118->name, v117, v113, (float)(*(float *)&_XMM0 * 0.1), v172);
              if ( r_xdebugPack->current.integer >= 2 )
              {
                v121 = &skelMatArray[v104];
                QuatToAxis(&v121->quat, (tmat33_t<vec3_t> *)axis);
                v122 = viewOffset->v[0] + v121->trans.v[0];
                origin.v[1] = v121->trans.v[1] + viewOffset->v[1];
                origin.v[0] = v122;
                v123 = v121->trans.v[2] + viewOffset->v[2];
                bounds.m[0] = vec3_origin;
                origin.v[2] = v123;
                bounds.m[1].v[0] = v117;
                bounds.m[1].v[1] = v117;
                bounds.m[1].v[2] = v117;
                R_AddDebugBoxOriented(&frontEndDataOut->debugGlobals, &origin, (const Bounds *)&bounds, (const tmat33_t<vec3_t> *)axis, &colorOrangeHeat);
                R_AddDebugPoint(&frontEndDataOut->debugGlobals, &origin, v35, &colorOrangeHeat);
              }
              v105 = v176;
            }
            if ( _XMM8.m128_f32[0] > 1000000.0 || v113 > 1000.0 )
            {
              v124 = models[v105];
              v125 = R_MessageStringHash(v124->name);
              LODWORD(v171) = entnum;
              R_WarnOncePerFrameUnique(R_WARN_RADIUS_FOR_PACKING_TOO_BIG0, 3u, s_packedRadiusTooBigWarnHashes, v125, v124->name, _mm_sqrt_ps(_XMM8).m128_f32[0], v113, v171);
            }
          }
          v126 = v104;
          v127 = &skelMatArray[v126];
          v102[19] = LODWORD(skelMatArray[v126].quat.v[0]);
          v102[20] = LODWORD(skelMatArray[v126].quat.v[1]);
          v102[21] = LODWORD(skelMatArray[v126].quat.v[2]);
          v102[22] = LODWORD(skelMatArray[v126].quat.v[3]);
          *((float *)v102 + 23) = skelMatArray[v126].trans.v[0] + viewOffset->v[0];
          *((float *)v102 + 24) = skelMatArray[v126].trans.v[1] + viewOffset->v[1];
          *((float *)v102 + 25) = skelMatArray[v126].trans.v[2] + viewOffset->v[2];
          if ( skelMatArrayPrevFrame )
          {
            v101[26] = LODWORD(skelMatArrayPrevFrame[v104].quat.v[0]);
            v101[27] = LODWORD(skelMatArrayPrevFrame[v126].quat.v[1]);
            v101[28] = LODWORD(skelMatArrayPrevFrame[v126].quat.v[2]);
            v101[29] = LODWORD(skelMatArrayPrevFrame[v126].quat.v[3]);
            *((float *)v102 + 30) = viewOffsetPrevFrame->v[0] + skelMatArrayPrevFrame[v126].trans.v[0];
            *((float *)v102 + 31) = skelMatArrayPrevFrame[v126].trans.v[1] + viewOffsetPrevFrame->v[1];
            *((float *)v102 + 32) = skelMatArrayPrevFrame[v126].trans.v[2] + viewOffsetPrevFrame->v[2];
          }
          else
          {
            v128 = *(double *)(v102 + 23);
            v129 = v102[25];
            *(_OWORD *)(v101 + 26) = *(_OWORD *)(v102 + 19);
            *((double *)v101 + 15) = v128;
            v101[32] = v129;
          }
          if ( r_xdebugPack->current.integer >= 1 )
          {
            QuatToAxis(&skelMatArray[v126].quat, (tmat33_t<vec3_t> *)axis);
            v130 = v127->trans.v[1] + viewOffset->v[1];
            pos.v[0] = viewOffset->v[0] + v127->trans.v[0];
            pos.v[2] = v127->trans.v[2] + viewOffset->v[2];
            pos.v[1] = v130;
            R_AddDebugCross(&frontEndDataOut->debugGlobals, &pos, v35, &colorPurple);
            R_AddDebugBoxOriented(&frontEndDataOut->debugGlobals, &pos, (const Bounds *)(*((_QWORD *)v102 + 7) + 144i64), (const tmat33_t<vec3_t> *)axis, &colorPurple);
          }
          v131 = *(float *)v102;
          v132 = &v186[4 * *((unsigned __int16 *)v102 + 21)];
          v133 = (char *)R_AllocComputeCmdDataAligned(frontEndDataOut->compute.cmdList, 112, 8u);
          v134 = v133;
          if ( !v133 )
            goto LABEL_117;
          *(_QWORD *)v133 = v103;
          *((_QWORD *)v133 + 1) = v184;
          *((_OWORD *)v133 + 1) = *(_OWORD *)(v102 + 19);
          *((double *)v133 + 4) = *(double *)(v102 + 23);
          *((_DWORD *)v133 + 10) = v102[25];
          *((float *)v133 + 8) = *((float *)v102 + 23) - viewOffset->v[0];
          *((float *)v133 + 9) = *((float *)v102 + 24) - viewOffset->v[1];
          _XMM1 = (__m128)v102[25];
          v135 = _XMM1;
          v135.m128_f32[0] = _XMM1.m128_f32[0] - viewOffset->v[2];
          _XMM2 = v135;
          *((float *)v133 + 10) = v135.m128_f32[0];
          *((_DWORD *)v133 + 11) = v180;
          *((_DWORD *)v133 + 14) = v183;
          *((_DWORD *)v133 + 15) = objBufIndex;
          *((_DWORD *)v133 + 20) = v175;
          v133[84] = dismembermentPointCount;
          *((_QWORD *)v133 + 11) = dismembermentPointsBuffer;
          *((_QWORD *)v133 + 12) = v187;
          *((_QWORD *)v133 + 13) = v188;
          *((float *)v133 + 12) = v131;
          *((_DWORD *)v133 + 13) = -1;
          *((_QWORD *)v133 + 8) = v132;
          v133[72] = 0;
          if ( v132 )
          {
            v136 = *(unsigned __int16 *)(v103 + 6);
            v137 = 0;
            v138 = *(_QWORD *)(v103 + 176);
            *(_WORD *)(v133 + 73) = 0;
            if ( v136 )
            {
              do
              {
                v139 = *(unsigned __int16 *)(*(_QWORD *)(v138 + 8) + 2i64 * v137);
                if ( v139 >> 14 == 2 )
                  v140 = v134[74] == 0;
                else
                  v140 = v134[73] == 0;
                if ( v140 && COERCE_FLOAT(*(_DWORD *)&v132[4 * (v139 & 0x3FF)] & v34) >= v36 )
                {
                  if ( v139 >> 14 == 2 )
                  {
                    v141 = v134[73];
                    v134[74] = 1;
                  }
                  else
                  {
                    v134[73] = 1;
                    if ( *(unsigned __int16 *)(v138 + 30) - 1 > v137 )
                      v137 = *(unsigned __int16 *)(v138 + 30) - 1;
                    v141 = 1;
                  }
                  v134[72] = 1;
                  if ( v141 )
                  {
                    if ( v134[74] )
                      break;
                  }
                }
                ++v137;
              }
              while ( v137 < v136 );
            }
          }
          *((_DWORD *)v134 + 19) = entnum;
          if ( !r_blendshape_enable->current.enabled )
            v134[72] = 0;
          if ( !R_AddComputeCmd(list, COMPUTECMD_SKINNING, v134) )
            goto LABEL_117;
          v30 = v177;
        }
      }
      v177 = ++v30;
      if ( v30 >= surfCount )
        goto LABEL_118;
      v24 = v174;
      v27 = v175;
      v26 = v178;
      v29 = v176;
      v25 = v181;
    }
  }
  return (char)v28;
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
  __int64 v2; 
  int v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  char v15; 
  bool v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __int64 v47; 
  __int64 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  __m128 v63; 
  __m128 v64; 
  __int64 v65; 
  __int64 v66; 
  const XSurface *v67; 
  unsigned __int8 *v68; 
  double v69; 
  int v70; 
  unsigned int sharedVertDataOffset; 
  XSurfaceShared *shared; 
  unsigned __int8 *v73; 
  unsigned int v74; 
  float *outTension; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  char v79; 
  bool v80; 
  int v81; 
  int v82; 
  int v83; 
  unsigned int i; 
  int v85; 
  int v86; 
  int v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  GfxPackedVertex *outVerts; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __m128 v97; 
  __m128 v98; 
  __m128 v99; 
  __m128 v100; 
  __m256i v101; 
  DObjSkelDQ boneDQ; 

  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4278, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented code") )
    __debugbreak();
  Profile_Begin(67);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4285, ASSERT_TYPE_ASSERT, "(skinCmd)", (const char *)&queryFormat, "skinCmd") )
    __debugbreak();
  if ( !*((_WORD *)data + 26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4286, ASSERT_TYPE_ASSERT, "(skinCmd->surfCount)", (const char *)&queryFormat, "skinCmd->surfCount") )
    __debugbreak();
  v2 = *(_QWORD *)data;
  v3 = -1;
  v4 = *((_QWORD *)data + 1);
  v5 = 0;
  v81 = -1;
  v6 = -1;
  v85 = 0;
  v7 = 0;
  v82 = -1;
  v8 = 0;
  v83 = 0;
  v101 = *(__m256i *)((char *)data + 16);
  for ( i = 0; v8 < *((unsigned __int16 *)data + 26); i = v8 )
  {
    v9 = *(_DWORD *)v2;
    v10 = (int *)v2;
    if ( *(_DWORD *)v2 == -3 )
    {
      v2 += 4i64;
    }
    else
    {
      v86 = *(unsigned __int16 *)(v2 + 40);
      if ( v3 != v86 || v5 != *(unsigned __int16 *)(v2 + 44) || v6 != *(unsigned __int16 *)(v2 + 46) || (v11 = *(_DWORD *)v2, v7 != *(unsigned __int16 *)(v2 + 48)) )
      {
        v12 = *(unsigned __int16 *)(v2 + 44);
        v13 = *(unsigned __int16 *)(v2 + 40);
        v14 = *(unsigned __int16 *)(v2 + 48);
        v15 = 0;
        v11 = *(_DWORD *)v2;
        v16 = (v101.m256i_i8[28] & 2) != 0;
        v81 = *(unsigned __int16 *)(v2 + 40);
        v85 = *(unsigned __int16 *)(v2 + 44);
        v82 = *(unsigned __int16 *)(v2 + 46);
        v83 = v14;
        v80 = v16;
        v79 = 0;
        v94 = (unsigned int)(v14 + v12);
        if ( v14 + (_DWORD)v12 )
        {
          v17 = *(unsigned __int16 *)(v2 + 46);
          v88 = v17;
          v18 = 0i64;
          v19 = *(unsigned __int16 *)(v2 + 46) - (_DWORD)v12 - v13;
          v20 = *(unsigned __int16 *)(v2 + 40);
          v21 = v12 + v13;
          v87 = v19;
          v22 = *(unsigned __int16 *)(v2 + 44);
          v96 = v21;
          v95 = v22;
          do
          {
            v23 = v20;
            v24 = v18 - v22 + v21;
            if ( v18 >= v22 )
              v24 = v18 - v22 + v17;
            if ( v18 >= v22 )
              v23 = v20 + v19;
            if ( (signed int)v23 >= *((_DWORD *)data + 12) )
              goto LABEL_29;
            if ( v23 >= 0x100 )
            {
              LODWORD(v76) = 256;
              LODWORD(outTension) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outTension, v76) )
                __debugbreak();
              v15 = v79;
              v17 = v88;
              v16 = v80;
            }
            if ( ((0x80000000 >> (v23 & 0x1F)) & v101.m256i_i32[(unsigned __int64)v23 >> 5]) != 0 )
            {
LABEL_29:
              if ( v16 || v24 < v17 )
              {
                v25 = *(_QWORD *)(v2 + 32);
                v26 = 32 * v24;
                v89 = v25;
                if ( (*(_DWORD *)(v26 + v4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v26 + v4 + 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v26 + v4 + 8) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v26 + v4 + 12) & 0x7F800000) == 2139095040 )
                {
                  CrashReport_TriggerNow();
                  v25 = v89;
                  v15 = v79;
                }
                v27 = 32i64 * (int)v23;
                _RDX = 32i64 * (int)(v20 - v86);
                v92 = _RDX;
                v93 = v27;
                v29 = *(__m128 *)(v27 + v4);
                v30 = *(__m128 *)(_RDX + v25 + 16);
                v31 = (__m128)(*(_OWORD *)(_RDX + v25) ^ *(_OWORD *)&vNegateXYZ);
                v32 = _mm_shuffle_ps(v31, v31, 201);
                v33 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 201), v31), _mm128_mul_ps(v32, v30));
                v34 = _mm_shuffle_ps(v33, v33, 201);
                v35 = _mm128_add_ps(v34, v34);
                v36 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v35, v35, 201), v31), _mm128_mul_ps(v35, v32));
                v37 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 255), v35), v30), _mm_shuffle_ps(v36, v36, 201)) ^ *(_OWORD *)&vNegateXYZ);
                v38 = _mm_shuffle_ps(v29, v29, 255);
                _XMM8 = _mm128_add_ps(_mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 177), _mm_shuffle_ps(v29, v29, 170)) ^ *(_OWORD *)&vNPPN), (__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 78), _mm_shuffle_ps(v29, v29, 85)) ^ *(_OWORD *)&vPPNN)), _mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 27), _mm_shuffle_ps(v29, v29, 0)) ^ *(_OWORD *)&vPNPN), _mm128_mul_ps(v38, v31)));
                v40 = _mm_shuffle_ps(v29, v29, 201);
                v41 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v37, v37, 201), v29), _mm128_mul_ps(v37, v40));
                v42 = _mm_shuffle_ps(v41, v41, 201);
                v43 = _mm128_add_ps(v42, v42);
                v44 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v43, v43, 201), v29), _mm128_mul_ps(v43, v40));
                v45 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v38, v43), v37), _mm_shuffle_ps(v44, v44, 201)), *(__m128 *)(v27 + v4 + 16));
                _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 78), _mm_shuffle_ps(v45, v45, 85)) ^ *(_OWORD *)&vPPNP), (__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 27), _mm_shuffle_ps(v45, v45, 0)) ^ *(_OWORD *)&vPNPP)), (__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 177), _mm_shuffle_ps(v45, v45, 170)) ^ *(_OWORD *)&vNPPP)), vHalfXYZw);
                __asm
                {
                  vmovntps xmmword ptr [rsp+rdx+20178h+boneDQ.dq], xmm8
                  vmovntps xmmword ptr [rsp+rdx+20178h+boneDQ.dq+10h], xmm0
                }
                if ( !v15 )
                {
                  v47 = *((_QWORD *)data + 10);
                  v15 = 1;
                  v79 = 1;
                  v97 = _XMM8;
                  v99 = v45;
                  if ( v47 )
                  {
                    v48 = *(_QWORD *)(v2 + 32);
                    v90 = v48;
                    if ( (*(_DWORD *)(v47 + v26) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v47 + v26 + 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v47 + v26 + 8) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v47 + v26 + 12) & 0x7F800000) == 2139095040 )
                    {
                      CrashReport_TriggerNow();
                      v48 = v90;
                      _RDX = v92;
                      v27 = v93;
                      v15 = 1;
                    }
                    v49 = *(__m128 *)(v47 + v27);
                    v50 = *(__m128 *)(v48 + _RDX + 16);
                    v51 = (__m128)(*(_OWORD *)(v48 + _RDX) ^ *(_OWORD *)&vNegateXYZ);
                    v52 = _mm_shuffle_ps(v51, v51, 201);
                    v53 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v50, v50, 201), v51), _mm128_mul_ps(v52, v50));
                    v54 = _mm_shuffle_ps(v53, v53, 201);
                    v55 = _mm128_add_ps(v54, v54);
                    v56 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v55, v55, 201), v51), _mm128_mul_ps(v55, v52));
                    v57 = _mm_shuffle_ps(v56, v56, 201);
                    v58 = _mm_shuffle_ps(v49, v49, 201);
                    v59 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 255), v55), v50), v57) ^ *(_OWORD *)&vNegateXYZ);
                    v60 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 201), v49), _mm128_mul_ps(v59, v58));
                    v61 = _mm_shuffle_ps(v60, v60, 201);
                    v62 = _mm128_add_ps(v61, v61);
                    v63 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v62, v62, 201), v49), _mm128_mul_ps(v62, v58));
                    v64 = _mm_shuffle_ps(v49, v49, 255);
                    v98 = _mm128_add_ps(_mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 177), _mm_shuffle_ps(v49, v49, 170)) ^ *(_OWORD *)&vNPPN), (__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 78), _mm_shuffle_ps(v49, v49, 85)) ^ *(_OWORD *)&vPPNN)), _mm128_add_ps((__m128)(*(_OWORD *)&_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 27), _mm_shuffle_ps(v49, v49, 0)) ^ *(_OWORD *)&vPNPN), _mm128_mul_ps(v64, v51)));
                    v100 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v62, v64), v59), _mm_shuffle_ps(v63, v63, 201)), *(__m128 *)(v47 + v27 + 16));
                  }
                }
              }
            }
            v22 = v95;
            ++v20;
            v16 = v80;
            ++v18;
            v17 = v88;
            v19 = v87;
            v21 = v96;
          }
          while ( v18 < v94 );
          v9 = *(_DWORD *)v2;
          v10 = (int *)v2;
          v8 = i;
          v11 = *(_DWORD *)v2;
        }
      }
      if ( v11 <= -4 )
      {
        v74 = -3 - v9;
        if ( -3 - v9 > 128 )
        {
          LODWORD(v78) = 128;
          LODWORD(v77) = -3 - v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", v77, v78) )
            __debugbreak();
        }
        v2 += 32i64 * v74 + 76;
      }
      else
      {
        v65 = v2;
        v66 = v2;
        v2 += 136i64;
        v67 = *(const XSurface **)(v65 + 56);
        if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4430, ASSERT_TYPE_ASSERT, "(xsurf)", (const char *)&queryFormat, "xsurf") )
          __debugbreak();
        if ( *v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4432, ASSERT_TYPE_ASSERT, "(baseSurf->skinnedCachedOffset >= 0)", (const char *)&queryFormat, "baseSurf->skinnedCachedOffset >= 0") )
          __debugbreak();
        if ( !gfxBuf.skinnedCacheLockAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 4433, ASSERT_TYPE_ASSERT, "(gfxBuf.skinnedCacheLockAddr)", (const char *)&queryFormat, "gfxBuf.skinnedCacheLockAddr") )
          __debugbreak();
        v68 = &gfxBuf.skinnedCacheLockAddr[*v10];
        *(__m128 *)(v65 + 76) = v97;
        *(float *)(v65 + 92) = v99.m128_f32[0] + *((float *)data + 14);
        *(float *)(v65 + 96) = v99.m128_f32[1] + *((float *)data + 15);
        *(float *)(v65 + 100) = v99.m128_f32[2] + *((float *)data + 16);
        outVerts = (GfxPackedVertex *)v68;
        if ( *((_QWORD *)data + 10) )
        {
          *(__m128 *)(v66 + 104) = v98;
          *(float *)(v65 + 120) = v100.m128_f32[0] + *((float *)data + 17);
          *(float *)(v65 + 124) = v100.m128_f32[1] + *((float *)data + 18);
          *(float *)(v65 + 128) = v100.m128_f32[2] + *((float *)data + 19);
        }
        else
        {
          v69 = *(double *)(v65 + 92);
          v70 = *(_DWORD *)(v65 + 100);
          *(_OWORD *)(v66 + 104) = *(_OWORD *)(v65 + 76);
          *(double *)(v66 + 120) = v69;
          *(_DWORD *)(v66 + 128) = v70;
        }
        if ( (v67->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1931, ASSERT_TYPE_ASSERT, "(XSurfaceIsSkinned( xsurf ))", (const char *)&queryFormat, "XSurfaceIsSkinned( xsurf )") )
          __debugbreak();
        sharedVertDataOffset = v67->sharedVertDataOffset;
        shared = v67->shared;
        if ( sharedVertDataOffset >= shared->dataSize )
        {
          LODWORD(v76) = shared->dataSize;
          LODWORD(outTension) = v67->sharedVertDataOffset;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_xsurface.h", 33, ASSERT_TYPE_ASSERT, "(unsigned)( surface->sharedVertDataOffset ) < (unsigned)( surface->shared->dataSize )", "surface->sharedVertDataOffset doesn't index surface->shared->dataSize\n\t%i not in [0, %i)", outTension, v76) )
            __debugbreak();
        }
        if ( (shared->flags & 1) != 0 )
          v73 = Stream_AddressSpace_ResolveHandle(&shared->data.streamedDataHandle);
        else
          v73 = (unsigned __int8 *)shared->data.streamedDataHandle.data;
        R_SkinXSurfaceWeightDQB((const GfxPackedVertex *)&v73[sharedVertDataOffset], v67, (const GfxModelSkinnedSurface *)v65, &boneDQ, outVerts, NULL);
        v8 = i;
      }
      v7 = v83;
      v6 = v82;
      v3 = v81;
    }
    ++v8;
    v5 = v85;
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
  GfxPackedVertex *v6; 
  __int64 v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v15; 
  __m128 v17; 
  __m128 v; 
  __m128 v26; 
  __m128 v31; 
  __int128 v37; 
  __int128 v39; 
  __m128 v42; 
  __m128 v44; 
  __m128 v59; 
  __m128 v66; 
  __m128 v76; 
  __m128 v77; 
  __m128 v78; 
  __m128 *v79; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  __m128 v92; 
  __m128 v93; 
  __m128 v94; 
  __m128 v95; 
  float4 v96; 
  __m128 v97; 
  __m128 v98; 
  __m128 v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v110; 
  __m128 v111; 
  __m128 v112; 
  __m128 v113; 
  const float4 *v114; 
  const float4 *v115; 
  const float4 *v121; 
  const float4 *v122; 
  PackedQuatDec3n v127; 
  int v130; 
  bool v132; 
  int v133; 
  int v134; 
  __int64 v135; 
  __int64 v136; 
  int v137; 
  __int64 v138; 
  unsigned __int64 v140; 
  __m128 v141; 
  float4 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  vec4_t out; 
  __m128i v147; 
  PackedQuatDec3n v148; 

  v6 = vertsOut;
  _RDI = blend;
  _RBX = vertsIn;
  v9 = vertCount;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 590, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 591, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 592, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v9;
  v11 = v9;
  v12 = 20 * v9;
  if ( (unsigned __int64)(20 * v9) > 0x200 )
    v12 = 512i64;
  for ( _RAX = 0i64; _RAX < v12; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  _R15 = 512i64;
  v15 = 2 * v9;
  _RAX = 0i64;
  if ( (unsigned __int64)(2 * v9) > 0x200 )
    v15 = 512i64;
  if ( (unsigned __int64)(2 * v9) <= 0x200 )
    _R15 = 0i64;
  if ( v15 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v15 );
  }
  if ( (_DWORD)v9 )
  {
    v17 = (__m128)_xmm;
    _R13 = (char *)&_RBX->xyz + 4;
    _R12 = 508i64;
    if ( _RDX <= 0x200 )
      _R12 = -4i64;
    _XMM13 = 0i64;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r12+r13]
        prefetcht0 byte ptr [r15+rdi]
      }
      v = g_one.v;
      _XMM12 = *(__m128 *)(_R13 + 4);
      v140 = *(_QWORD *)(_R13 - 4);
      __asm { vpshufd xmm3, xmm12, 0 }
      v147.m128i_i32[0] = v140 & 0x1FFFFF;
      v147.m128i_i32[1] = (v140 >> 21) & 0x1FFFFF;
      v147.m128i_i32[2] = (v140 >> 42) & 0x1FFFFF;
      _RAX = bbData;
      v142.v = _XMM12;
      __asm { vbroadcastss xmm0, dword ptr [rax+0Ch] }
      v26 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(v147), v17), g_one.v), _XMM0), bbData->preSkinning.v);
      __asm { vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm1, xmm3, 9
        vpand   xmm0, xmm1, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      v31 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      _XMM8 = _mm128_sub_ps(v31, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm13
        vcmpltps xmm5, xmm9, xmm13
      }
      v141 = v26;
      __asm { vcmpltps xmm0, xmm10, xmm13 }
      v37 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm15 }
      v39 = *(_OWORD *)&_mm128_mul_ps((__m128)(v37 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm15
        vandnps xmm0, xmm6, xmm10
      }
      v42 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v31);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v44 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v39 | _XMM0), (__m128)(*(_OWORD *)&v42 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v44, v44);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v145 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      v147 = (__m128i)_mm128_div_ps(v44, _mm_sqrt_ps(_XMM0));
      __asm
      {
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
      }
      v59 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm), (__m128)_xmm);
      _XMM0 = _mm128_mul_ps(v59, v59);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v59 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm13, xmm1 }
      v66 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v59 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
      }
      _mm_shuffle_ps(v66, v66, 180);
      _mm_shuffle_ps(v66, v66, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v66, v66, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v76 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      v77 = _mm128_add_ps(v76, _XMM3);
      Float4UnitQuatToAxis((vector3 *)(v140 & 0x1FFFFF), (const float4 *)_RDX);
      v78 = v76;
      v79 = (__m128 *)&boneDQ[*_RDI];
      _XMM1 = _mm128_mul_ps(*v79, *v79);
      __asm
      {
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm3, xmm2, xmm2
        vrsqrtps xmm4, xmm3
      }
      v84 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM3)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v85 = _mm128_mul_ps(v84, v79[1]);
      v86 = _mm128_mul_ps(*v79, v84);
      v87 = _mm_shuffle_ps(v86, v86, 210);
      v88 = _mm_shuffle_ps(v86, v86, 201);
      v89 = _mm_shuffle_ps(v86, v86, 255);
      v90 = _mm128_add_ps(_mm128_mul_ps(v141, v89), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v141, v141, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v141, v141, 201), v87)));
      v91 = _mm128_add_ps(_mm128_mul_ps(v78, v89), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v78, v78, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v78, v78, 201), v87)));
      v92 = _mm128_add_ps(_mm128_mul_ps(v77, v89), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v77, v77, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v77, v77, 201), v87)));
      v93 = _mm128_add_ps(_mm128_mul_ps((__m128)v147, v89), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v147, (__m128)v147, 210), v88), _mm128_mul_ps(_mm_shuffle_ps((__m128)v147, (__m128)v147, 201), v87)));
      v143 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v91, v91, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v91, v91, 201), v87)), g_two.v), v78);
      v144 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v92, v92, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v92, v92, 201), v87)), g_two.v), v77);
      v147 = (__m128i)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v93, v93, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v93, v93, 201), v87)), g_two.v), (__m128)v147);
      v94 = _mm128_mul_ps(g_two.v, v86);
      v95 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v90, v90, 210), _mm_shuffle_ps(v94, v94, 201)), _mm128_mul_ps(_mm_shuffle_ps(v90, v90, 201), _mm_shuffle_ps(v94, v94, 210))), v141);
      v96.v = (__m128)bbData->rootQuat;
      v97 = _mm128_mul_ps(v96.v, (__m128)_xmm);
      v98 = _mm_shuffle_ps(v96.v, v96.v, 210);
      v99 = _mm_shuffle_ps(v96.v, v96.v, 201);
      v100 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v85, v85, 210), v88), _mm128_mul_ps(_mm_shuffle_ps(v85, v85, 201), v87)), _mm128_sub_ps(_mm128_mul_ps(v85, v89), _mm128_mul_ps(v86, _mm_shuffle_ps(v85, v85, 255)))), g_two.v), v95), bbData->rootOffset.v);
      v101 = _mm_shuffle_ps(v96.v, v96.v, 255);
      v102 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v100, v100, 210), v99), _mm128_mul_ps(_mm_shuffle_ps(v100, v100, 201), v98));
      v103 = _mm128_add_ps(v102, v102);
      v104 = _mm128_add_ps(_mm128_mul_ps(v103, _mm128_sub_ps((__m128)0i64, v101)), v100);
      v105 = _mm_shuffle_ps(v97, v97, 210);
      v106 = _mm_shuffle_ps(v97, v97, 201);
      v107 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v143, v143, 210), v106), _mm128_mul_ps(_mm_shuffle_ps(v143, v143, 201), v105));
      v108 = _mm128_add_ps(v107, v107);
      v109 = _mm_shuffle_ps(v97, v97, 255);
      v110 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v108, v108, 210), v106), _mm128_mul_ps(_mm_shuffle_ps(v108, v108, 201), v105)), _mm128_add_ps(_mm128_mul_ps(v108, _mm128_sub_ps((__m128)0i64, v109)), v143));
      v111 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v144, v144, 210), v106), _mm128_mul_ps(_mm_shuffle_ps(v144, v144, 201), v105));
      v112 = _mm128_add_ps(v111, v111);
      v113 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v112, v112, 210), v106), _mm128_mul_ps(_mm_shuffle_ps(v112, v112, 201), v105)), _mm128_add_ps(_mm128_mul_ps(v112, _mm128_sub_ps((__m128)0i64, v109)), v144));
      Float4QuatRotateInv(v115, v114, (float4 *)&v147);
      _RAX = bbData;
      __asm
      {
        vbroadcastss xmm2, dword ptr [rax+1Ch]
        vrcpps  xmm0, xmm2
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v103, v103, 210), v99), _mm128_mul_ps(_mm_shuffle_ps(v103, v103, 201), v98)), v104), bbData->postSkinning.v), _XMM0), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm8, xmm3 }
      Float4PackSelfVisX(v122, v121, &v142);
      _XMM0 = *((_DWORD *)_R13 + 3) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm6, xmm1, xmm0, xmm2 }
      v144 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v110, v110, 201), _mm_shuffle_ps(v113, v113, 210)), _mm128_mul_ps(_mm_shuffle_ps(v110, v110, 210), _mm_shuffle_ps(v113, v113, 201)));
      v143 = v113;
      v145 = v110;
      AxisComponentsToQuat((const vec3_t *)&v143, (const vec3_t *)&v144, (const vec3_t *)&v145, &out);
      v127.packed = UnitQuatToQuatDec3n(&out, *(float *)&_XMM6).packed;
      _XMM0 = v142.v;
      v148.packed = v127.packed;
      __asm { vblendps xmm1, xmm0, xmmword ptr [rbp-10h], 8 }
      v130 = _XMM8.m128_i32[0];
      __asm { vpextrd rdx, xmm8, 1 }
      if ( _XMM8.m128_i32[0] > 0x1FFFFF )
        v130 = 0x1FFFFF;
      v147 = (__m128i)_XMM8;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      *(_OWORD *)&v6->selfVisibility.packed = _XMM1;
      __asm { vpextrd rcx, xmm8, 2 }
      v17 = (__m128)_xmm;
      ++v6;
      _R13 += 20;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      _RDI += 2;
      v132 = (int)_RCX < 0;
      v133 = _RCX;
      v134 = _RDX;
      if ( v132 )
        v133 = 0;
      v135 = (*(_QWORD *)&v133 & 0x1FFFFFi64) << 21;
      _XMM13 = 0i64;
      if ( (_RDX & 0x80000000) != 0i64 )
        v134 = 0;
      v136 = *(_QWORD *)&v134 & 0x1FFFFFi64 | v135;
      v137 = v130;
      v138 = v136 << 21;
      if ( v130 < 0 )
        v137 = 0;
      v6[-1].xyz = (PackedPosition)(v140 & 0x8000000000000000ui64 | *(_QWORD *)&v137 & 0x1FFFFFi64 | v138);
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
R_SkinXSurfaceWeight1DQB
==============
*/
void R_SkinXSurfaceWeight1DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 
  __m128 v18; 
  __m128 v; 
  unsigned __int64 v26; 
  __m128 v33; 
  __m128 v39; 
  __int128 v44; 
  __int128 v46; 
  __m128 v49; 
  __m128 v51; 
  __m128 v67; 
  __m128 v74; 
  __m128 v84; 
  __m128 v85; 
  __m128 v88; 
  __m128 v89; 
  __int64 v90; 
  __int64 v91; 
  __m128 v92; 
  __m128 v96; 
  __m128 v97; 
  __m128 v98; 
  __m128 v103; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v110; 
  __m128 v111; 
  __m128 v112; 
  __m128 v113; 
  __m128 v114; 
  __m128 v115; 
  __m128 v116; 
  __m128 v117; 
  __m128 v118; 
  __m128 v119; 
  __m128 v120; 
  __m128 v121; 
  __m128 v122; 
  __m128 v123; 
  __m128 v124; 
  __m128 v125; 
  __m128 v126; 
  __m128 v127; 
  __m128 v128; 
  __m128 v129; 
  const float4 *v130; 
  const float4 *v131; 
  const float4 *v136; 
  const float4 *v137; 
  PackedQuatDec3n v138; 
  int v142; 
  bool v143; 
  int v144; 
  int v145; 
  __int64 v146; 
  __int64 v147; 
  int v148; 
  __int64 v149; 
  float v150; 
  unsigned __int16 *v151; 
  float4 v152; 
  float4 v153; 
  __m128 v154; 
  __m128 v155; 
  vec4_t out; 
  __m128i v157; 
  PackedQuatDec3n v158; 

  v6 = vertsOut;
  _R12 = bbData;
  v8 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 660, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 661, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 662, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v8;
  v12 = v8;
  v13 = 20 * v8;
  if ( (unsigned __int64)(20 * v8) > 0x200 )
    v13 = 512i64;
  for ( _RAX = 0i64; _RAX < v13; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v15 = 2 * v8;
  _RAX = 0i64;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0x200 )
    v17 = 512i64;
  if ( v17 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v17 );
  }
  if ( (_DWORD)v8 )
  {
    v18 = (__m128)_xmm;
    _RAX = (unsigned __int16 *)(_RDI + 1);
    _R13 = (char *)&_RBX->xyz + 4;
    _RDI = 508i64;
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    _R15 = 510i64;
    if ( v15 <= 0x200 )
      _R15 = -2i64;
    _XMM14 = 0i64;
    v151 = _RAX;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [rdi+r13]
        prefetcht0 byte ptr [rax+r15]
      }
      v = g_one.v;
      _XMM12 = *(__m128 *)(_R13 + 4);
      v26 = *(_QWORD *)(_R13 - 4);
      __asm { vpshufd xmm3, xmm12, 0 }
      v157.m128i_i32[0] = v26 & 0x1FFFFF;
      v157.m128i_i32[1] = (v26 >> 21) & 0x1FFFFF;
      v157.m128i_i32[2] = (v26 >> 42) & 0x1FFFFF;
      _XMM0 = *((_DWORD *)_R13 + 3) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v150 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [r12+0Ch] }
      v33 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(v157), v18), g_one.v), _XMM0), _R12->preSkinning.v);
      __asm { vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v39 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v39, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
      }
      v44 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm13 }
      v46 = *(_OWORD *)&_mm128_mul_ps((__m128)(v44 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
      }
      v154 = v33;
      v49 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v39);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v51 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v46 | _XMM0), (__m128)(*(_OWORD *)&v49 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v51, v51);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v155 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      v152.v = _XMM12;
      v153.v = _mm128_div_ps(v51, _mm_sqrt_ps(_XMM0));
      __asm
      {
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
      }
      v67 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v67, v67);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v67 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm14, xmm1 }
      v74 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v67 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
      }
      _mm_shuffle_ps(v74, v74, 180);
      _mm_shuffle_ps(v74, v74, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v74, v74, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v84 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis((vector3 *)(v26 & 0x1FFFFF), (const float4 *)_RDX);
      v157 = (__m128i)_mm128_add_ps(v84, _XMM3);
      v85 = v84;
      _XMM0 = *(unsigned __int64 *)(v151 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      v88 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      v89 = _mm128_sub_ps(v, v88);
      v90 = *(v151 - 1);
      v91 = *v151;
      v92 = (__m128)boneDQ[v90].dq.m[0];
      _XMM0 = _mm128_mul_ps(v92, (__m128)boneDQ[v91].dq.m[0]);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v96 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v88);
      v97 = _mm128_add_ps(_mm128_mul_ps(v96, (__m128)boneDQ[v91].dq.m[0]), _mm128_mul_ps(v89, v92));
      v98 = _mm128_add_ps(_mm128_mul_ps(v96, (__m128)boneDQ[v91].dq.m[1]), _mm128_mul_ps(v89, (__m128)boneDQ[v90].dq.m[1]));
      _XMM0 = _mm128_mul_ps(v97, v97);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v103 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v104 = _mm128_mul_ps(v97, v103);
      v105 = _mm_shuffle_ps(v104, v104, 255);
      v106 = _mm128_mul_ps(v98, v103);
      v107 = _mm_shuffle_ps(v104, v104, 210);
      v108 = _mm_shuffle_ps(v104, v104, 201);
      v109 = _mm128_add_ps(_mm128_mul_ps(v154, v105), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v154, v154, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v154, v154, 201), v107)));
      v110 = _mm128_add_ps(_mm128_mul_ps(v85, v105), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v85, v85, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v85, v85, 201), v107)));
      v111 = _mm128_add_ps(_mm128_mul_ps((__m128)v157, v105), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v157, (__m128)v157, 210), v108), _mm128_mul_ps(_mm_shuffle_ps((__m128)v157, (__m128)v157, 201), v107)));
      v112 = _mm128_add_ps(_mm128_mul_ps(v153.v, v105), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v153.v, v153.v, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v153.v, v153.v, 201), v107)));
      v113 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v110, v110, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v110, v110, 201), v107)), g_two.v), v85);
      v157 = (__m128i)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v111, v111, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v111, v111, 201), v107)), g_two.v), (__m128)v157);
      v114 = _mm128_mul_ps(v104, g_two.v);
      v115 = _R12->rootQuat.v;
      v116 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v109, v109, 210), _mm_shuffle_ps(v114, v114, 201)), _mm128_mul_ps(_mm_shuffle_ps(v109, v109, 201), _mm_shuffle_ps(v114, v114, 210))), v154);
      v117 = _mm128_mul_ps(v115, (__m128)_xmm);
      v118 = _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v106, v106, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v106, v106, 201), v107)), _mm128_sub_ps(_mm128_mul_ps(v106, v105), _mm128_mul_ps(v104, _mm_shuffle_ps(v106, v106, 255)))), g_two.v), v116), _R12->rootOffset.v);
      v153.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v112, v112, 210), v108), _mm128_mul_ps(_mm_shuffle_ps(v112, v112, 201), v107)), g_two.v), v153.v);
      v119 = _mm_shuffle_ps(v115, v115, 255);
      v120 = _mm_shuffle_ps(v115, v115, 210);
      v121 = _mm_shuffle_ps(v115, v115, 201);
      v122 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v118, v118, 210), v121), _mm128_mul_ps(_mm_shuffle_ps(v118, v118, 201), v120));
      v123 = _mm128_add_ps(v122, v122);
      v124 = _mm_shuffle_ps(v117, v117, 210);
      v125 = _mm128_add_ps(_mm128_mul_ps(v123, _mm128_sub_ps((__m128)0i64, v119)), v118);
      v126 = _mm_shuffle_ps(v117, v117, 201);
      v127 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v113, v113, 210), v126), _mm128_mul_ps(_mm_shuffle_ps(v113, v113, 201), v124));
      v128 = _mm128_add_ps(v127, v127);
      v129 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v128, v128, 210), v126), _mm128_mul_ps(_mm_shuffle_ps(v128, v128, 201), v124)), _mm128_add_ps(_mm128_mul_ps(v128, _mm128_sub_ps((__m128)0i64, _mm_shuffle_ps(v117, v117, 255))), v113));
      Float4QuatRotateInv((const float4 *)(v91 * 32), (const float4 *)v151, (float4 *)&v157);
      Float4QuatRotateInv(v131, v130, &v153);
      __asm
      {
        vbroadcastss xmm2, dword ptr [r12+1Ch]
        vrcpps  xmm0, xmm2
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v123, v123, 210), v121), _mm128_mul_ps(_mm_shuffle_ps(v123, v123, 201), v120)), v125), _R12->postSkinning.v), _XMM0), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v137, v136, &v152);
      v153.v = (__m128)v157;
      v154 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v157, (__m128)v157, 210), _mm_shuffle_ps(v129, v129, 201)), _mm128_mul_ps(_mm_shuffle_ps((__m128)v157, (__m128)v157, 201), _mm_shuffle_ps(v129, v129, 210)));
      v155 = v129;
      AxisComponentsToQuat((const vec3_t *)&v153, (const vec3_t *)&v154, (const vec3_t *)&v155, &out);
      v138.packed = UnitQuatToQuatDec3n(&out, v150).packed;
      _XMM0 = v152.v;
      v158.packed = v138.packed;
      __asm { vblendps xmm1, xmm0, xmmword ptr [rbp-20h], 8 }
      v157 = (__m128i)_XMM6;
      v18 = (__m128)_xmm;
      _R13 += 20;
      __asm { vpextrd rcx, xmm6, 2 }
      v142 = _XMM6.m128_i32[0];
      __asm { vpextrd rdx, xmm6, 1 }
      if ( _XMM6.m128_i32[0] > 0x1FFFFF )
        v142 = 0x1FFFFF;
      *(_OWORD *)&v6->selfVisibility.packed = _XMM1;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      ++v6;
      _XMM14 = 0i64;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v143 = (int)_RCX < 0;
      v144 = _RCX;
      v145 = _RDX;
      if ( v143 )
        v144 = 0;
      v146 = (*(_QWORD *)&v144 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v145 = 0;
      v147 = *(_QWORD *)&v145 & 0x1FFFFFi64 | v146;
      v148 = v142;
      v149 = v147 << 21;
      if ( v142 < 0 )
        v148 = 0;
      v6[-1].xyz = (PackedPosition)(v26 & 0x8000000000000000ui64 | *(_QWORD *)&v148 & 0x1FFFFFi64 | v149);
      _RAX = v151 + 4;
      v151 += 4;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_SkinXSurfaceWeight2DQB
==============
*/
void R_SkinXSurfaceWeight2DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 
  __m128 v18; 
  __m128 v; 
  unsigned __int64 v26; 
  __m128 v33; 
  __m128 v39; 
  __int128 v44; 
  __int128 v46; 
  __m128 v49; 
  __m128 v51; 
  __m128 v56; 
  __m128 v68; 
  __m128 v75; 
  __m128 v85; 
  __m128 v86; 
  __m128 v89; 
  __m128 v90; 
  __m128 v93; 
  __int64 v94; 
  __m128 v95; 
  __int64 v96; 
  __int64 v97; 
  __m128 v98; 
  __m128 v103; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v114; 
  __m128 v115; 
  __m128 v116; 
  __m128 v117; 
  __m128 v118; 
  __m128 v119; 
  __m128 v120; 
  __m128 v121; 
  __m128 v122; 
  __m128 v123; 
  __m128 v124; 
  __m128 v125; 
  __m128 v126; 
  __m128 v127; 
  __m128 v128; 
  __m128 v129; 
  __m128 v130; 
  __m128 v131; 
  __m128 v132; 
  __m128 v133; 
  const float4 *v134; 
  const float4 *v135; 
  const float4 *v136; 
  const float4 *v137; 
  const float4 *v142; 
  const float4 *v143; 
  PackedQuatDec3n v144; 
  int v148; 
  bool v149; 
  int v150; 
  int v151; 
  __int64 v152; 
  __int64 v153; 
  int v154; 
  __int64 v155; 
  float v156; 
  char *v157; 
  float4 v158; 
  float4 v159; 
  float4 v160; 
  float4 v161; 
  __m128 v162; 
  __m128 v163; 
  vec4_t out; 
  __m128i v165; 
  PackedQuatDec3n v166; 

  v6 = vertsOut;
  _R13 = bbData;
  v8 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 751, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 752, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 753, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v8;
  v12 = v8;
  v13 = 20 * v8;
  if ( (unsigned __int64)(20 * v8) > 0x200 )
    v13 = 512i64;
  for ( _RAX = 0i64; _RAX < v13; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v15 = 2 * v8;
  _RAX = 0i64;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0x200 )
    v17 = 512i64;
  if ( v17 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v17 );
  }
  if ( (_DWORD)v8 )
  {
    v18 = (__m128)_xmm;
    _R9 = (char *)&_RBX->xyz + 4;
    _R12 = (unsigned __int16 *)(_RDI + 1);
    _RDI = 508i64;
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    _R15 = 510i64;
    if ( v15 <= 0x200 )
      _R15 = -2i64;
    _XMM13 = 0i64;
    v157 = (char *)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r9+rdi]
        prefetcht0 byte ptr [r15+r12]
      }
      v = g_one.v;
      _XMM12 = *(__m128 *)(_R9 + 4);
      v26 = *(_QWORD *)(_R9 - 4);
      __asm { vpshufd xmm3, xmm12, 0 }
      v165.m128i_i32[0] = v26 & 0x1FFFFF;
      v165.m128i_i32[1] = (v26 >> 21) & 0x1FFFFF;
      v165.m128i_i32[2] = (v26 >> 42) & 0x1FFFFF;
      _XMM0 = *((_DWORD *)_R9 + 3) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v156 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [r13+0Ch] }
      v33 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(v165), v18), g_one.v), _XMM0), _R13->preSkinning.v);
      __asm { vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v39 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v39, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm13
        vcmpltps xmm5, xmm9, xmm13
        vcmpltps xmm0, xmm10, xmm13
      }
      v44 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm14 }
      v46 = *(_OWORD *)&_mm128_mul_ps((__m128)(v44 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm14
        vandnps xmm0, xmm6, xmm10
      }
      v165 = (__m128i)v33;
      v49 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v39);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v51 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v46 | _XMM0), (__m128)(*(_OWORD *)&v49 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v51, v51);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v56 = _mm128_div_ps(v51, _mm_sqrt_ps(_XMM0));
      v163 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      v160.v = _XMM12;
      v158.v = v56;
      __asm
      {
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
      }
      v68 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v68, v68);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v68 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm13, xmm1 }
      v75 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v68 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
      }
      _mm_shuffle_ps(v75, v75, 180);
      _mm_shuffle_ps(v75, v75, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v75, v75, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v85 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis((vector3 *)(v26 & 0x1FFFFF), (const float4 *)_RDX);
      v86 = _mm128_add_ps(v85, _XMM3);
      _XMM0 = *(unsigned __int64 *)(_R12 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      v89 = v85;
      v90 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 3);
      __asm { vpmovzxwd xmm1, xmm0 }
      v93 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      v94 = *_R12;
      v95 = _mm128_sub_ps(v, _mm128_add_ps(v93, v90));
      v96 = *(_R12 - 1);
      v97 = _R12[2];
      v98 = (__m128)boneDQ[v96].dq.m[0];
      _XMM1 = _mm128_mul_ps(v98, (__m128)boneDQ[v94].dq.m[0]);
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
      }
      _XMM0 = _mm128_mul_ps(v98, (__m128)boneDQ[v97].dq.m[0]);
      v103 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v90);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v106 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v93);
      v107 = _mm128_mul_ps(v106, (__m128)boneDQ[v97].dq.m[0]);
      v108 = _mm128_add_ps(_mm128_mul_ps(v106, (__m128)boneDQ[v97].dq.m[1]), _mm128_add_ps(_mm128_mul_ps(v103, (__m128)boneDQ[v94].dq.m[1]), _mm128_mul_ps(v95, (__m128)boneDQ[v96].dq.m[1])));
      v109 = _mm128_add_ps(v107, _mm128_add_ps(_mm128_mul_ps(v103, (__m128)boneDQ[v94].dq.m[0]), _mm128_mul_ps(v95, v98)));
      _XMM0 = _mm128_mul_ps(v109, v109);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v114 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v115 = _mm128_mul_ps(v109, v114);
      v116 = _mm_shuffle_ps(v115, v115, 210);
      v117 = _mm_shuffle_ps(v115, v115, 201);
      v118 = _mm128_mul_ps(v108, v114);
      v119 = _mm_shuffle_ps(v115, v115, 255);
      v162 = v115;
      v120 = _mm128_add_ps(_mm128_mul_ps((__m128)v165, v119), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v165, (__m128)v165, 210), v117), _mm128_mul_ps(_mm_shuffle_ps((__m128)v165, (__m128)v165, 201), v116)));
      v121 = _mm128_add_ps(_mm128_mul_ps(v89, v119), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v89, v89, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v89, v89, 201), v116)));
      v122 = _mm128_add_ps(_mm128_mul_ps(v86, v119), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v86, v86, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v86, v86, 201), v116)));
      v123 = _mm128_add_ps(_mm128_mul_ps(v56, v119), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v56, v56, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v56, v56, 201), v116)));
      v159.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v121, v121, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v121, v121, 201), v116)), g_two.v), v89);
      v161.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v122, v122, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v122, v122, 201), v116)), g_two.v), v86);
      v158.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v123, v123, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v123, v123, 201), v116)), g_two.v), v158.v);
      v124 = _mm128_mul_ps(v115, g_two.v);
      v125 = _mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v118, v118, 210), v117), _mm128_mul_ps(_mm_shuffle_ps(v118, v118, 201), v116)), _mm128_sub_ps(_mm128_mul_ps(v118, v119), _mm128_mul_ps(_mm_shuffle_ps(v118, v118, 255), v115))), g_two.v);
      v126 = _R13->rootQuat.v;
      _mm128_mul_ps(v126, (__m128)_xmm);
      v127 = _mm_shuffle_ps(v126, v126, 210);
      v128 = _mm_shuffle_ps(v126, v126, 201);
      v129 = _mm128_sub_ps(_mm128_add_ps(v125, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v120, v120, 210), _mm_shuffle_ps(v124, v124, 201)), _mm128_mul_ps(_mm_shuffle_ps(v120, v120, 201), _mm_shuffle_ps(v124, v124, 210))), (__m128)v165)), _R13->rootOffset.v);
      v130 = _mm_shuffle_ps(v126, v126, 255);
      v131 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v129, v129, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v129, v129, 201), v127));
      v132 = _mm128_add_ps(v131, v131);
      v133 = _mm128_add_ps(_mm128_mul_ps(v132, _mm128_sub_ps((__m128)0i64, v130)), v129);
      Float4QuatRotateInv((const float4 *)(v94 * 32), (const float4 *)(v97 * 32), &v159);
      Float4QuatRotateInv(v135, v134, &v161);
      Float4QuatRotateInv(v137, v136, &v158);
      __asm
      {
        vbroadcastss xmm2, dword ptr [r13+1Ch]
        vrcpps  xmm0, xmm2
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v132, v132, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v132, v132, 201), v127)), v133), _R13->postSkinning.v), _XMM0), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v143, v142, &v160);
      v162 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v159.v, v159.v, 201), _mm_shuffle_ps(v161.v, v161.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v159.v, v159.v, 210), _mm_shuffle_ps(v161.v, v161.v, 201)));
      v163 = v159.v;
      AxisComponentsToQuat((const vec3_t *)&v161, (const vec3_t *)&v162, (const vec3_t *)&v163, &out);
      v144.packed = UnitQuatToQuatDec3n(&out, v156).packed;
      ++v6;
      _XMM0 = v160.v;
      v18 = (__m128)_xmm;
      v166.packed = v144.packed;
      _R12 += 6;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+0], 8
        vpextrd rcx, xmm6, 2
      }
      v148 = _XMM6.m128i_i32[0];
      __asm { vpextrd rdx, xmm6, 1 }
      if ( _XMM6.m128i_i32[0] > 0x1FFFFF )
        v148 = 0x1FFFFF;
      *(_OWORD *)&v6[-1].selfVisibility.packed = _XMM1;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      v165 = _XMM6;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v149 = (int)_RCX < 0;
      v150 = _RCX;
      v151 = _RDX;
      if ( v149 )
        v150 = 0;
      v152 = (*(_QWORD *)&v150 & 0x1FFFFFi64) << 21;
      _XMM13 = 0i64;
      if ( (_RDX & 0x80000000) != 0i64 )
        v151 = 0;
      v153 = *(_QWORD *)&v151 & 0x1FFFFFi64 | v152;
      v154 = v148;
      v155 = v153 << 21;
      if ( v148 < 0 )
        v154 = 0;
      _R9 = v157 + 20;
      v157 += 20;
      v6[-1].xyz = (PackedPosition)(v26 & 0x8000000000000000ui64 | *(_QWORD *)&v154 & 0x1FFFFFi64 | v155);
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_SkinXSurfaceWeight3DQB
==============
*/
void R_SkinXSurfaceWeight3DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 
  __m128 v18; 
  unsigned __int64 v27; 
  __m128 v34; 
  __m128 v40; 
  __int128 v45; 
  __int128 v47; 
  __m128 v50; 
  __m128 v52; 
  __m128 v68; 
  __m128 v75; 
  __m128 v85; 
  __int64 v86; 
  __int64 v87; 
  __m128 v90; 
  __m128 v91; 
  __m128 v92; 
  __m128 v95; 
  __int64 v98; 
  __m128 v99; 
  __m128 v100; 
  vec4_t v101; 
  __m128 *v102; 
  __m128 v103; 
  __int64 v105; 
  __m128 v108; 
  __m128 v110; 
  __m128 v114; 
  __m128 v117; 
  __m128 v118; 
  __m128 v119; 
  __m128 v120; 
  __m128 v125; 
  __m128 v126; 
  __m128 v127; 
  __m128 v128; 
  __m128 v129; 
  __m128 v130; 
  __m128 v131; 
  __m128 v132; 
  __m128 v133; 
  __m128 v134; 
  __m128 v135; 
  __m128 v136; 
  __m128 v137; 
  __m128 v138; 
  __m128 v139; 
  __m128 v; 
  __m128 v141; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  __m128 v146; 
  __m128 v147; 
  const float4 *v148; 
  const float4 *v149; 
  const float4 *v150; 
  const float4 *v151; 
  const float4 *v156; 
  const float4 *v157; 
  PackedQuatDec3n v158; 
  int v162; 
  bool v163; 
  int v164; 
  int v165; 
  __int64 v166; 
  __int64 v167; 
  int v168; 
  __int64 v169; 
  float v170; 
  char *v171; 
  float4 v172; 
  __m128 v173; 
  float4 v174; 
  float4 v175; 
  __m128 v176; 
  __m128 v177; 
  vec4_t out; 
  __m128i v179; 
  PackedQuatDec3n v180; 

  v6 = vertsOut;
  _R13 = bbData;
  v8 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 862, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 863, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 864, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v8;
  v12 = v8;
  v13 = 20 * v8;
  if ( (unsigned __int64)(20 * v8) > 0x200 )
    v13 = 512i64;
  for ( _RAX = 0i64; _RAX < v13; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v15 = 2 * v8;
  _RAX = 0i64;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0x200 )
    v17 = 512i64;
  if ( v17 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v17 );
  }
  if ( (_DWORD)v8 )
  {
    v18 = (__m128)_xmm;
    _R9 = (char *)&_RBX->xyz + 4;
    _R12 = (unsigned __int16 *)(_RDI + 1);
    _RDI = 508i64;
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    _R15 = 510i64;
    if ( v15 <= 0x200 )
      _R15 = -2i64;
    _XMM15 = _xmm;
    _XMM14 = 0i64;
    v171 = (char *)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [rdi+r9]
        prefetcht0 byte ptr [r12+r15]
      }
      _XMM12 = *(__m128 *)(_R9 + 4);
      _XMM7 = g_selfVisDirMask.v;
      v27 = *(_QWORD *)(_R9 - 4);
      __asm { vpshufd xmm3, xmm12, 0 }
      v179.m128i_i32[0] = v27 & 0x1FFFFF;
      v179.m128i_i32[1] = (v27 >> 21) & 0x1FFFFF;
      v179.m128i_i32[2] = (v27 >> 42) & 0x1FFFFF;
      _XMM0 = *((_DWORD *)_R9 + 3) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v170 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [r13+0Ch] }
      v34 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(v179), v18), g_one.v), _XMM0), _R13->preSkinning.v);
      __asm { vpand   xmm0, xmm7, xmm3 }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmm7
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v40 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v40, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
      }
      v45 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm13 }
      v47 = *(_OWORD *)&_mm128_mul_ps((__m128)(v45 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
      }
      v173 = v34;
      v50 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v40);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v52 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v47 | _XMM0), (__m128)(*(_OWORD *)&v50 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v52, v52);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v179 = (__m128i)_mm128_div_ps(v52, _mm_sqrt_ps(_XMM0));
      v174.v = _XMM12;
      v177 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      __asm
      {
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
      }
      v68 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v68, v68);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v68 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm14, xmm1 }
      v75 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v68 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm7, xmm0
      }
      _mm_shuffle_ps(v75, v75, 180);
      _mm_shuffle_ps(v75, v75, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v75, v75, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v85 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis((vector3 *)(v27 & 0x1FFFFF), (const float4 *)_RDX);
      v86 = *_R12;
      v87 = *(_R12 - 1);
      v175.v = _mm128_add_ps(v85, _XMM3);
      _XMM0 = *(unsigned __int64 *)(_R12 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      v86 *= 32i64;
      v172.v = v85;
      v90 = *(__m128 *)((char *)boneDQ->dq.m + v86);
      v91 = *(__m128 *)((char *)&boneDQ->dq.m[1] + v86);
      v92 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 3);
      __asm { vpmovzxwd xmm1, xmm0 }
      v95 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 5);
      __asm { vpmovzxwd xmm1, xmm0 }
      v98 = _R12[2];
      v99 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      v100 = (__m128)boneDQ[v98].dq.m[0];
      v101 = boneDQ[v98].dq.m[1];
      v102 = (__m128 *)&boneDQ[v87];
      v103 = _mm128_sub_ps(_mm128_sub_ps(g_one.v, v92), _mm128_add_ps(v99, v95));
      _XMM1 = _mm128_mul_ps(v90, *v102);
      v105 = _R12[4];
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
      }
      v108 = (__m128)boneDQ[v105].dq.m[0];
      _XMM0 = _mm128_mul_ps(v100, *v102);
      v110 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v92);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(v108, *v102);
      v114 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v95);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v117 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v99);
      v118 = _mm128_mul_ps(v114, (__m128)v101);
      v119 = _mm128_add_ps(_mm128_mul_ps(v117, v108), _mm128_add_ps(_mm128_mul_ps(v114, v100), _mm128_add_ps(_mm128_mul_ps(v110, v90), _mm128_mul_ps(v103, *v102))));
      v120 = _mm128_add_ps(_mm128_mul_ps(v117, (__m128)boneDQ[v105].dq.m[1]), _mm128_add_ps(v118, _mm128_add_ps(_mm128_mul_ps(v110, v91), _mm128_mul_ps(v103, v102[1]))));
      _XMM0 = _mm128_mul_ps(v119, v119);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v125 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v126 = _mm128_mul_ps(v119, v125);
      v127 = _mm_shuffle_ps(v126, v126, 210);
      v128 = _mm_shuffle_ps(v126, v126, 201);
      v129 = _mm128_mul_ps(v120, v125);
      v176 = v126;
      v130 = _mm_shuffle_ps(v126, v126, 255);
      v131 = _mm128_add_ps(_mm128_mul_ps(v130, v173), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v173, v173, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v173, v173, 201), v127)));
      v132 = _mm128_add_ps(_mm128_mul_ps(v172.v, v130), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v172.v, v172.v, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v172.v, v172.v, 201), v127)));
      v133 = _mm128_add_ps(_mm128_mul_ps(v175.v, v130), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v175.v, v175.v, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v175.v, v175.v, 201), v127)));
      v134 = _mm128_add_ps(_mm128_mul_ps(v130, (__m128)v179), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v179, (__m128)v179, 210), v128), _mm128_mul_ps(_mm_shuffle_ps((__m128)v179, (__m128)v179, 201), v127)));
      v135 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v132, v132, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v132, v132, 201), v127)), g_two.v), v172.v);
      v136 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v133, v133, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v133, v133, 201), v127)), g_two.v), v175.v);
      v137 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v134, v134, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v134, v134, 201), v127)), g_two.v), (__m128)v179);
      v138 = _mm128_mul_ps(v126, g_two.v);
      v139 = _mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v129, v129, 210), v128), _mm128_mul_ps(_mm_shuffle_ps(v129, v129, 201), v127)), _mm128_sub_ps(_mm128_mul_ps(v129, v130), _mm128_mul_ps(_mm_shuffle_ps(v129, v129, 255), v126))), g_two.v);
      v = _R13->rootQuat.v;
      _mm128_mul_ps(v, (__m128)_xmm);
      v141 = _mm_shuffle_ps(v, v, 210);
      v142 = _mm_shuffle_ps(v, v, 201);
      v143 = _mm128_sub_ps(_mm128_add_ps(v139, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v131, v131, 210), _mm_shuffle_ps(v138, v138, 201)), _mm128_mul_ps(_mm_shuffle_ps(v131, v131, 201), _mm_shuffle_ps(v138, v138, 210))), v173)), _R13->rootOffset.v);
      v144 = _mm_shuffle_ps(v, v, 255);
      v145 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v143, v143, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(v143, v143, 201), v141));
      v146 = _mm128_add_ps(v145, v145);
      _XMM14 = 0i64;
      v147 = _mm128_add_ps(_mm128_mul_ps(v146, _mm128_sub_ps((__m128)0i64, v144)), v143);
      v172.v = v135;
      v175.v = v136;
      v179 = (__m128i)v137;
      Float4QuatRotateInv((const float4 *)(v105 * 32), (const float4 *)boneDQ, &v172);
      Float4QuatRotateInv(v149, v148, &v175);
      Float4QuatRotateInv(v151, v150, (float4 *)&v179);
      __asm
      {
        vbroadcastss xmm2, dword ptr [r13+1Ch]
        vrcpps  xmm0, xmm2
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v146, v146, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(v146, v146, 201), v141)), v147), _R13->postSkinning.v), _XMM0), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v157, v156, &v174);
      v176 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v172.v, v172.v, 201), _mm_shuffle_ps(v175.v, v175.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v172.v, v172.v, 210), _mm_shuffle_ps(v175.v, v175.v, 201)));
      v177 = v172.v;
      AxisComponentsToQuat((const vec3_t *)&v175, (const vec3_t *)&v176, (const vec3_t *)&v177, &out);
      v158.packed = UnitQuatToQuatDec3n(&out, v170).packed;
      ++v6;
      _XMM0 = v174.v;
      _XMM15 = _xmm;
      v18 = (__m128)_xmm;
      v180.packed = v158.packed;
      _R12 += 8;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+0], 8
        vpextrd rcx, xmm6, 2
      }
      v162 = _XMM6.m128_i32[0];
      __asm { vpextrd rdx, xmm6, 1 }
      if ( _XMM6.m128_i32[0] > 0x1FFFFF )
        v162 = 0x1FFFFF;
      *(_OWORD *)&v6[-1].selfVisibility.packed = _XMM1;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      v179 = (__m128i)_XMM6;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v163 = (int)_RCX < 0;
      v164 = _RCX;
      v165 = _RDX;
      if ( v163 )
        v164 = 0;
      v166 = (*(_QWORD *)&v164 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v165 = 0;
      v167 = *(_QWORD *)&v165 & 0x1FFFFFi64 | v166;
      v168 = v162;
      v169 = v167 << 21;
      if ( v162 < 0 )
        v168 = 0;
      _R9 = v171 + 20;
      v171 += 20;
      v6[-1].xyz = (PackedPosition)(v27 & 0x8000000000000000ui64 | *(_QWORD *)&v168 & 0x1FFFFFi64 | v169);
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_SkinXSurfaceWeight4DQB
==============
*/
void R_SkinXSurfaceWeight4DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v9; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v14; 
  unsigned __int64 v16; 
  __m128 v17; 
  signed __int64 v21; 
  unsigned __int64 v26; 
  __m128 v34; 
  __m128 v40; 
  __int128 v45; 
  __int128 v47; 
  __m128 v50; 
  __m128 v52; 
  __m128 v68; 
  __m128 v75; 
  __m128 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __m128 v92; 
  __m128 v95; 
  __m128 v98; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  __int64 v104; 
  __m128 v106; 
  __m128 v107; 
  __m128 v110; 
  __m128 v111; 
  __m128 v115; 
  __m128 v120; 
  __m128 v123; 
  __m128 v124; 
  __m128 v125; 
  __m128 v126; 
  __m128 v131; 
  __m128 v132; 
  __m128 v133; 
  __m128 v134; 
  __m128 v135; 
  __m128 v136; 
  __m128 v137; 
  __m128 v138; 
  __m128 v139; 
  __m128 v140; 
  __m128 v141; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  float4 v146; 
  __m128 v147; 
  __m128 v148; 
  __m128 v149; 
  __m128 v150; 
  __m128 v151; 
  __m128 v152; 
  __m128 v153; 
  const float4 *v154; 
  const float4 *v155; 
  const float4 *v156; 
  const float4 *v157; 
  const float4 *v163; 
  const float4 *v164; 
  PackedQuatDec3n v165; 
  int v169; 
  bool v170; 
  int v171; 
  int v172; 
  __int64 v173; 
  __int64 v174; 
  int v175; 
  __int64 v176; 
  float v177; 
  char *v179; 
  float4 v180; 
  __m128 v181; 
  float4 v182; 
  float4 v183; 
  __m128 v184; 
  __m128 v; 
  vec4_t out; 
  __m128i v187; 
  PackedQuatDec3n v188; 

  v6 = vertsOut;
  _RDI = blend;
  _RBX = vertsIn;
  v9 = vertCount;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 990, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 991, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 992, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v9;
  v11 = v9;
  v12 = 20 * v9;
  if ( (unsigned __int64)(20 * v9) > 0x200 )
    v12 = 512i64;
  for ( _RAX = 0i64; _RAX < v12; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v14 = 2 * v9;
  _RAX = 0i64;
  v16 = 2 * v9;
  if ( (unsigned __int64)(2 * v9) > 0x200 )
    v16 = 512i64;
  if ( v16 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v16 );
  }
  if ( (_DWORD)v9 )
  {
    v17 = (__m128)_xmm;
    _R9 = (char *)&_RBX->xyz + 4;
    _R13 = (unsigned __int16 *)(_RDI + 1);
    _R15 = 508i64;
    if ( _RDX <= 0x200 )
      _R15 = -4i64;
    v21 = (char *)_RDI - (char *)_RBX;
    _R12 = 510i64;
    if ( v14 <= 0x200 )
      _R12 = -2i64;
    _XMM15 = _xmm;
    _XMM14 = 0i64;
    v179 = (char *)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r9+r15]
        prefetcht0 byte ptr [r12+r13]
      }
      _XMM12 = *(__m128 *)(_R9 + 4);
      v26 = *(_QWORD *)(_R9 - 4);
      __asm { vpshufd xmm3, xmm12, 0 }
      v187.m128i_i32[0] = v26 & 0x1FFFFF;
      v187.m128i_i32[1] = (v26 >> 21) & 0x1FFFFF;
      v187.m128i_i32[2] = (v26 >> 42) & 0x1FFFFF;
      _XMM0 = *((_DWORD *)_R9 + 3) & 0x20000000;
      _RAX = bbData;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v177 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [rax+0Ch] }
      v34 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(v187), v17), g_one.v), _XMM0), bbData->preSkinning.v);
      __asm { vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v40 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v40, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
      }
      v45 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm13 }
      v47 = *(_OWORD *)&_mm128_mul_ps((__m128)(v45 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
      }
      v181 = v34;
      v50 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v40);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v52 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v47 | _XMM0), (__m128)(*(_OWORD *)&v50 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v52, v52);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v187 = (__m128i)_mm128_div_ps(v52, _mm_sqrt_ps(_XMM0));
      v182.v = _XMM12;
      v = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      __asm
      {
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
      }
      v68 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v68, v68);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v68 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm14, xmm1 }
      v75 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v68 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm7, xmm0
      }
      _mm_shuffle_ps(v75, v75, 180);
      _mm_shuffle_ps(v75, v75, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v75, v75, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v85 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis((vector3 *)(v26 & 0x1FFFFF), (const float4 *)_RDX);
      v86 = _R13[4];
      v87 = *_R13;
      v88 = _R13[2];
      v89 = *(unsigned __int16 *)&v179[v21 - 4];
      v183.v = _mm128_add_ps(v85, _XMM3);
      _XMM0 = *(unsigned __int64 *)(_R13 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      v180.v = v85;
      v92 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R13 + 3);
      __asm { vpmovzxwd xmm1, xmm0 }
      v95 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R13 + 5);
      __asm { vpmovzxwd xmm1, xmm0 }
      v86 *= 32i64;
      v98 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R13 + 7);
      __asm { vpmovzxwd xmm1, xmm0 }
      v101 = *(__m128 *)((char *)boneDQ->dq.m + v86);
      v102 = *(__m128 *)((char *)&boneDQ->dq.m[1] + v86);
      v89 *= 32i64;
      v103 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      v87 *= 32i64;
      v88 *= 32i64;
      v104 = _R13[6];
      _XMM1 = _mm128_mul_ps(*(__m128 *)((char *)boneDQ->dq.m + v89), *(__m128 *)((char *)boneDQ->dq.m + v87));
      v106 = _mm128_sub_ps(_mm128_sub_ps(g_one.v, _mm128_add_ps(v95, v92)), _mm128_add_ps(v103, v98));
      v107 = v85;
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
      }
      v110 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v92);
      v111 = *(__m128 *)((char *)boneDQ->dq.m + v89);
      _XMM0 = _mm128_mul_ps(v111, *(__m128 *)((char *)boneDQ->dq.m + v88));
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v115 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v95);
      _XMM0 = _mm128_mul_ps(v111, v101);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(v111, (__m128)boneDQ[v104].dq.m[0]);
      v120 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v98);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v123 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v103);
      v124 = _mm128_mul_ps(v120, v102);
      v125 = _mm128_add_ps(_mm128_mul_ps(v123, (__m128)boneDQ[v104].dq.m[0]), _mm128_add_ps(_mm128_mul_ps(v101, v120), _mm128_add_ps(_mm128_mul_ps(v115, *(__m128 *)((char *)boneDQ->dq.m + v88)), _mm128_add_ps(_mm128_mul_ps(v110, *(__m128 *)((char *)boneDQ->dq.m + v87)), _mm128_mul_ps(v106, v111)))));
      v126 = _mm128_add_ps(_mm128_mul_ps(v123, (__m128)boneDQ[v104].dq.m[1]), _mm128_add_ps(v124, _mm128_add_ps(_mm128_mul_ps(v115, *(__m128 *)((char *)&boneDQ->dq.m[1] + v88)), _mm128_add_ps(_mm128_mul_ps(v110, *(__m128 *)((char *)&boneDQ->dq.m[1] + v87)), _mm128_mul_ps(v106, *(__m128 *)((char *)&boneDQ->dq.m[1] + v89))))));
      _XMM0 = _mm128_mul_ps(v125, v125);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v131 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v132 = _mm128_mul_ps(v125, v131);
      v133 = _mm_shuffle_ps(v132, v132, 210);
      v134 = _mm_shuffle_ps(v132, v132, 201);
      v135 = _mm128_mul_ps(v126, v131);
      v184 = v132;
      v136 = _mm_shuffle_ps(v132, v132, 255);
      v137 = _mm128_add_ps(_mm128_mul_ps(v136, v181), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v181, v181, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v181, v181, 201), v133)));
      v138 = _mm128_add_ps(_mm128_mul_ps(v180.v, v136), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v107, v107, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v107, v107, 201), v133)));
      v139 = _mm128_add_ps(_mm128_mul_ps(v183.v, v136), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v183.v, v183.v, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v183.v, v183.v, 201), v133)));
      v140 = _mm128_add_ps(_mm128_mul_ps(v136, (__m128)v187), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v187, (__m128)v187, 210), v134), _mm128_mul_ps(_mm_shuffle_ps((__m128)v187, (__m128)v187, 201), v133)));
      v141 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v138, v138, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v138, v138, 201), v133)), g_two.v), v180.v);
      v142 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v139, v139, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v139, v139, 201), v133)), g_two.v), v183.v);
      v143 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v140, v140, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v140, v140, 201), v133)), g_two.v), (__m128)v187);
      v144 = _mm128_mul_ps(v132, g_two.v);
      v145 = _mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v135, v135, 210), v134), _mm128_mul_ps(_mm_shuffle_ps(v135, v135, 201), v133)), _mm128_sub_ps(_mm128_mul_ps(v135, v136), _mm128_mul_ps(_mm_shuffle_ps(v135, v135, 255), v132))), g_two.v);
      v146.v = (__m128)bbData->rootQuat;
      _mm128_mul_ps(v146.v, (__m128)_xmm);
      v147 = _mm128_sub_ps(_mm128_add_ps(v145, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v137, v137, 210), _mm_shuffle_ps(v144, v144, 201)), _mm128_mul_ps(_mm_shuffle_ps(v137, v137, 201), _mm_shuffle_ps(v144, v144, 210))), v181)), bbData->rootOffset.v);
      v148 = _mm_shuffle_ps(v146.v, v146.v, 255);
      v149 = _mm_shuffle_ps(v146.v, v146.v, 210);
      v150 = _mm_shuffle_ps(v146.v, v146.v, 201);
      v151 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v147, v147, 210), v150), _mm128_mul_ps(_mm_shuffle_ps(v147, v147, 201), v149));
      _XMM14 = 0i64;
      v152 = _mm128_add_ps(v151, v151);
      v153 = _mm128_add_ps(_mm128_mul_ps(v152, _mm128_sub_ps((__m128)0i64, v148)), v147);
      v180.v = v141;
      v183.v = v142;
      v187 = (__m128i)v143;
      Float4QuatRotateInv((const float4 *)v87, (const float4 *)v88, &v180);
      Float4QuatRotateInv(v155, v154, &v183);
      Float4QuatRotateInv(v157, v156, (float4 *)&v187);
      _RAX = bbData;
      __asm
      {
        vbroadcastss xmm2, dword ptr [rax+1Ch]
        vrcpps  xmm0, xmm2
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v152, v152, 210), v150), _mm128_mul_ps(_mm_shuffle_ps(v152, v152, 201), v149)), v153), bbData->postSkinning.v), _XMM0), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v164, v163, &v182);
      v184 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v180.v, v180.v, 201), _mm_shuffle_ps(v183.v, v183.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v180.v, v180.v, 210), _mm_shuffle_ps(v183.v, v183.v, 201)));
      v = v180.v;
      AxisComponentsToQuat((const vec3_t *)&v183, (const vec3_t *)&v184, (const vec3_t *)&v, &out);
      v165.packed = UnitQuatToQuatDec3n(&out, v177).packed;
      _XMM0 = v182.v;
      v188.packed = v165.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+10h], 8
        vpextrd rcx, xmm6, 2
      }
      v169 = _XMM6.m128_i32[0];
      __asm { vpextrd rdx, xmm6, 1 }
      if ( _XMM6.m128_i32[0] > 0x1FFFFF )
        v169 = 0x1FFFFF;
      v187 = (__m128i)_XMM6;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      *(_OWORD *)&v6->selfVisibility.packed = _XMM1;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v170 = (int)_RCX < 0;
      v171 = _RCX;
      v172 = _RDX;
      if ( v170 )
        v171 = 0;
      v173 = (*(_QWORD *)&v171 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v172 = 0;
      v174 = *(_QWORD *)&v172 & 0x1FFFFFi64 | v173;
      v175 = v169;
      v176 = v174 << 21;
      if ( v169 < 0 )
        v175 = 0;
      ++v6;
      _XMM15 = _xmm;
      v17 = (__m128)_xmm;
      _R13 += 10;
      _R9 = v179 + 20;
      v179 += 20;
      v6[-1].xyz = (PackedPosition)(v26 & 0x8000000000000000ui64 | *(_QWORD *)&v175 & 0x1FFFFFi64 | v176);
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
R_SkinXSurfaceWeight5DQB
==============
*/
void R_SkinXSurfaceWeight5DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 
  __m128 v18; 
  __m128 v; 
  int v25; 
  vector3 *v27; 
  unsigned __int64 v28; 
  __m128 v35; 
  __m128 v41; 
  __int128 v46; 
  __int128 v48; 
  __m128 v51; 
  __m128 v53; 
  __m128 v69; 
  __m128 v76; 
  __m128 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  __m128 v95; 
  __m128 v98; 
  __m128 v101; 
  __m128 v104; 
  __m128 v107; 
  __m128 v108; 
  __m128 v112; 
  __m128 v113; 
  __m128 v118; 
  __m128 v122; 
  __m128 v126; 
  __m128 v129; 
  __m128 v130; 
  __m128 v131; 
  __m128 v132; 
  __m128 v137; 
  __m128 v138; 
  __m128 v139; 
  __m128 v140; 
  __m128 v141; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  __m128 v146; 
  __m128 v147; 
  const float4 *v152; 
  const float4 *v153; 
  __m128 v154; 
  PackedQuatDec3n v155; 
  int v159; 
  bool v160; 
  int v161; 
  int v162; 
  __int64 v163; 
  __int64 v164; 
  int v165; 
  __int64 v166; 
  float v167; 
  float4 selfVisDirIn; 
  unsigned __int64 v169; 
  unsigned __int64 v170; 
  __int64 v171; 
  float4 v172; 
  float4 tanIn; 
  float4 normIn; 
  __m128 v175; 
  vec4_t out; 
  float4 vecIn; 
  PackedQuatDec3n v178; 

  v6 = vertsOut;
  _R13 = bbData;
  v8 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1136, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1137, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1138, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v8;
  v12 = v8;
  v13 = 20 * v8;
  if ( (unsigned __int64)(20 * v8) > 0x200 )
    v13 = 512i64;
  for ( _RAX = 0i64; _RAX < v13; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v15 = 2 * v8;
  _RAX = 0i64;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0x200 )
    v17 = 512i64;
  if ( v17 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v17 );
  }
  if ( (_DWORD)v8 )
  {
    v18 = (__m128)_xmm;
    _R9 = (__int64)&_RBX->xyz + 4;
    _R12 = (unsigned __int16 *)(_RDI + 1);
    _RDI = 508i64;
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    _R15 = 510i64;
    if ( v15 <= 0x200 )
      _R15 = -2i64;
    _XMM14 = 0i64;
    v171 = (__int64)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [rdi+r9]
        prefetcht0 byte ptr [r12+r15]
      }
      v = g_one.v;
      v25 = *(_DWORD *)(_R9 - 4);
      _XMM12 = *(__m128 *)(_R9 + 4);
      HIDWORD(v169) = *(_DWORD *)_R9;
      LODWORD(v169) = v25;
      v27 = (vector3 *)(v25 & 0x1FFFFF);
      v28 = v169;
      __asm { vpshufd xmm3, xmm12, 0 }
      vecIn.v.m128_i32[0] = (int)v27;
      vecIn.v.m128_i32[1] = (v169 >> 21) & 0x1FFFFF;
      vecIn.v.m128_i32[2] = (v169 >> 42) & 0x1FFFFF;
      _XMM0 = *(_DWORD *)(_R9 + 12) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v167 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [r13+0Ch] }
      v35 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps((__m128i)vecIn.v), v18), g_one.v), _XMM0), _R13->preSkinning.v);
      __asm { vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v41 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v41, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
      }
      v46 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm13 }
      v48 = *(_OWORD *)&_mm128_mul_ps((__m128)(v46 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
      }
      vecIn.v = v35;
      v51 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v41);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v53 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v48 | _XMM0), (__m128)(*(_OWORD *)&v51 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v53, v53);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v175 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      v172.v = _XMM12;
      selfVisDirIn.v = _mm128_div_ps(v53, _mm_sqrt_ps(_XMM0));
      __asm
      {
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
      }
      v69 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v69, v69);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v69 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm14, xmm1 }
      v76 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v69 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm7, xmm0
      }
      _mm_shuffle_ps(v76, v76, 180);
      _mm_shuffle_ps(v76, v76, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v76, v76, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v86 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis(v27, (const float4 *)_RDX);
      v87 = *_R12;
      v88 = *(_R12 - 1);
      v89 = _R12[2];
      v90 = _R12[4];
      v91 = _R12[6];
      v92 = _R12[8];
      tanIn.v = _mm128_add_ps(v86, _XMM3);
      _XMM0 = *(unsigned __int64 *)(_R12 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      normIn.v = v86;
      v95 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 3);
      __asm { vpmovzxwd xmm1, xmm0 }
      v98 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 5);
      __asm { vpmovzxwd xmm1, xmm0 }
      v101 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 7);
      __asm { vpmovzxwd xmm1, xmm0 }
      v104 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 9);
      v87 *= 32i64;
      __asm { vpmovzxwd xmm1, xmm0 }
      v88 *= 32i64;
      v89 *= 32i64;
      v90 *= 32i64;
      v91 *= 32i64;
      v92 *= 32i64;
      v107 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      v108 = _mm128_sub_ps(_mm128_sub_ps(v, _mm128_add_ps(v98, v95)), _mm128_add_ps(_mm128_add_ps(v104, v101), v107));
      _XMM1 = _mm128_mul_ps(*(__m128 *)((char *)boneDQ->dq.m + v87), *(__m128 *)((char *)boneDQ->dq.m + v88));
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
      }
      v112 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v95);
      v113 = *(__m128 *)((char *)boneDQ->dq.m + v88);
      _XMM0 = _mm128_mul_ps(v113, *(__m128 *)((char *)boneDQ->dq.m + v89));
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(v113, *(__m128 *)((char *)boneDQ->dq.m + v90));
      v118 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v98);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(v113, *(__m128 *)((char *)boneDQ->dq.m + v91));
      v122 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v101);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(v113, *(__m128 *)((char *)boneDQ->dq.m + v92));
      v126 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v104);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v129 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&v), v107);
      v130 = _mm128_mul_ps(v126, *(__m128 *)((char *)&boneDQ->dq.m[1] + v91));
      v131 = _mm128_add_ps(_mm128_mul_ps(v129, *(__m128 *)((char *)boneDQ->dq.m + v92)), _mm128_add_ps(_mm128_mul_ps(v126, *(__m128 *)((char *)boneDQ->dq.m + v91)), _mm128_add_ps(_mm128_mul_ps(v122, *(__m128 *)((char *)boneDQ->dq.m + v90)), _mm128_add_ps(_mm128_mul_ps(v118, *(__m128 *)((char *)boneDQ->dq.m + v89)), _mm128_add_ps(_mm128_mul_ps(v112, *(__m128 *)((char *)boneDQ->dq.m + v87)), _mm128_mul_ps(v108, v113))))));
      v132 = _mm128_add_ps(_mm128_mul_ps(v129, *(__m128 *)((char *)&boneDQ->dq.m[1] + v92)), _mm128_add_ps(v130, _mm128_add_ps(_mm128_mul_ps(v122, *(__m128 *)((char *)&boneDQ->dq.m[1] + v90)), _mm128_add_ps(_mm128_mul_ps(v118, *(__m128 *)((char *)&boneDQ->dq.m[1] + v89)), _mm128_add_ps(_mm128_mul_ps(v112, *(__m128 *)((char *)&boneDQ->dq.m[1] + v87)), _mm128_mul_ps(v108, *(__m128 *)((char *)&boneDQ->dq.m[1] + v88)))))));
      _XMM0 = _mm128_mul_ps(v131, v131);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v137 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v138 = _mm128_mul_ps(v131, v137);
      v139 = _mm128_mul_ps(v132, v137);
      v140 = _mm_shuffle_ps(v138, v138, 255);
      v141 = _mm_shuffle_ps(v138, v138, 210);
      v142 = _mm_shuffle_ps(v138, v138, 201);
      v143 = _mm128_add_ps(_mm128_mul_ps(v140, vecIn.v), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(vecIn.v, vecIn.v, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(vecIn.v, vecIn.v, 201), v141)));
      v144 = _mm128_add_ps(_mm128_mul_ps(normIn.v, v140), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(normIn.v, normIn.v, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(normIn.v, normIn.v, 201), v141)));
      v145 = _mm128_add_ps(_mm128_mul_ps(tanIn.v, v140), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(tanIn.v, tanIn.v, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(tanIn.v, tanIn.v, 201), v141)));
      v146 = _mm128_add_ps(_mm128_mul_ps(v140, selfVisDirIn.v), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn.v, selfVisDirIn.v, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn.v, selfVisDirIn.v, 201), v141)));
      normIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v144, v144, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(v144, v144, 201), v141)), g_two.v), normIn.v);
      tanIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v145, v145, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(v145, v145, 201), v141)), g_two.v), tanIn.v);
      selfVisDirIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v146, v146, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(v146, v146, 201), v141)), g_two.v), selfVisDirIn.v);
      v147 = _mm128_mul_ps(v138, g_two.v);
      vecIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v139, v139, 210), v142), _mm128_mul_ps(_mm_shuffle_ps(v139, v139, 201), v141)), _mm128_sub_ps(_mm128_mul_ps(v139, v140), _mm128_mul_ps(v138, _mm_shuffle_ps(v139, v139, 255)))), g_two.v), _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v143, v143, 210), _mm_shuffle_ps(v147, v147, 201)), _mm128_mul_ps(_mm_shuffle_ps(v143, v143, 201), _mm_shuffle_ps(v147, v147, 210))), vecIn.v));
      R_TransformToModelSpace(&_R13->rootQuat, &_R13->rootOffset, &vecIn, &vecIn, &normIn, &normIn, &tanIn, &tanIn, &selfVisDirIn, &selfVisDirIn);
      __asm
      {
        vbroadcastss xmm0, dword ptr [r13+1Ch]
        vrcpps  xmm4, xmm0
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_XMM4, _mm128_sub_ps(vecIn.v, _R13->postSkinning.v)), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v153, v152, &v172);
      v154 = normIn.v;
      normIn.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v154, v154, 201), _mm_shuffle_ps(tanIn.v, tanIn.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v154, v154, 210), _mm_shuffle_ps(tanIn.v, tanIn.v, 201)));
      v175 = v154;
      AxisComponentsToQuat((const vec3_t *)&tanIn, (const vec3_t *)&normIn, (const vec3_t *)&v175, &out);
      v155.packed = UnitQuatToQuatDec3n(&out, v167).packed;
      _XMM0 = v172.v;
      v178.packed = v155.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+20h], 8
        vpextrd rcx, xmm6, 2
      }
      v159 = _XMM6.m128_i32[0];
      __asm { vpextrd rdx, xmm6, 1 }
      if ( _XMM6.m128_i32[0] > 0x1FFFFF )
        v159 = 0x1FFFFF;
      vecIn.v = _XMM6;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      *(_OWORD *)&v6->selfVisibility.packed = _XMM1;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v160 = (int)_RCX < 0;
      v161 = _RCX;
      v162 = _RDX;
      if ( v160 )
        v161 = 0;
      v163 = (*(_QWORD *)&v161 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v162 = 0;
      v164 = *(_QWORD *)&v162 & 0x1FFFFFi64 | v163;
      v165 = v159;
      v166 = v164 << 21;
      if ( v159 < 0 )
        v165 = 0;
      ++v6;
      v18 = (__m128)_xmm;
      _R12 += 12;
      _R9 = v171 + 20;
      v170 = v28 & 0x8000000000000000ui64 | *(_QWORD *)&v165 & 0x1FFFFFi64 | v166;
      v6[-1].xyz = (PackedPosition)v170;
      v171 = _R9;
      _XMM14 = 0i64;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_SkinXSurfaceWeight6DQB
==============
*/
void R_SkinXSurfaceWeight6DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 
  __m128 v18; 
  int v25; 
  vector3 *v27; 
  unsigned __int64 v28; 
  __m128 v35; 
  __m128 v41; 
  __int128 v46; 
  __int128 v48; 
  __m128 v51; 
  __m128 v53; 
  __m128 v69; 
  __m128 v76; 
  __m128 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  __m128 v95; 
  __m128 v98; 
  __m128 *v100; 
  __m128 *v101; 
  __m128 *v102; 
  __m128 *v103; 
  __m128 *v104; 
  __m128 *v105; 
  __m128 *v107; 
  __m128 v108; 
  __m128 v111; 
  __m128 v114; 
  __m128 v117; 
  __m128 v119; 
  __m128 v122; 
  __m128 v127; 
  __m128 v131; 
  __m128 v135; 
  __m128 v139; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  __m128 v150; 
  __m128 v151; 
  __m128 v152; 
  __m128 v153; 
  __m128 v154; 
  __m128 v155; 
  __m128 v156; 
  __m128 v157; 
  __m128 v158; 
  __m128 v159; 
  __m128 v160; 
  const float4 *v165; 
  const float4 *v166; 
  __m128 v; 
  PackedQuatDec3n v168; 
  int v170; 
  bool v173; 
  int v174; 
  int v175; 
  __int64 v176; 
  __int64 v177; 
  int v178; 
  __int64 v179; 
  float v180; 
  float4 selfVisDirIn; 
  unsigned __int64 v182; 
  unsigned __int64 v183; 
  __int64 v184; 
  float4 v185; 
  float4 tanIn; 
  float4 normIn; 
  __m128 v188; 
  vec4_t out; 
  float4 vecIn; 
  PackedQuatDec3n v191; 

  v6 = vertsOut;
  _R13 = bbData;
  v8 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1300, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1301, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1302, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v8;
  v12 = v8;
  v13 = 20 * v8;
  if ( (unsigned __int64)(20 * v8) > 0x200 )
    v13 = 512i64;
  for ( _RAX = 0i64; _RAX < v13; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v15 = 2 * v8;
  _RAX = 0i64;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0x200 )
    v17 = 512i64;
  if ( v17 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v17 );
  }
  if ( (_DWORD)v8 )
  {
    v18 = (__m128)_xmm;
    _R9 = (char *)&_RBX->xyz + 4;
    _R12 = (unsigned __int16 *)(_RDI + 1);
    _RDI = 508i64;
    if ( _RDX <= 0x200 )
      _RDI = -4i64;
    _R15 = 510i64;
    if ( v15 <= 0x200 )
      _R15 = -2i64;
    _XMM15 = _xmm;
    _XMM14 = 0i64;
    v184 = (__int64)&_RBX->xyz + 4;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r9+rdi]
        prefetcht0 byte ptr [r12+r15]
      }
      v25 = *((_DWORD *)_R9 - 1);
      _XMM12 = *(__m128 *)(_R9 + 4);
      HIDWORD(v182) = *(_DWORD *)_R9;
      LODWORD(v182) = v25;
      v27 = (vector3 *)(v25 & 0x1FFFFF);
      v28 = v182;
      __asm { vpshufd xmm3, xmm12, 0 }
      vecIn.v.m128_i32[0] = (int)v27;
      vecIn.v.m128_i32[1] = (v182 >> 21) & 0x1FFFFF;
      vecIn.v.m128_i32[2] = (v182 >> 42) & 0x1FFFFF;
      _XMM0 = *((_DWORD *)_R9 + 3) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v180 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [r13+0Ch] }
      v35 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps((__m128i)vecIn.v), v18), g_one.v), _XMM0), _R13->preSkinning.v);
      __asm { vpand   xmm0, xmm3, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmmword ptr cs:?g_selfVisDirMask@@3Ufloat4@@B.v; float4 const g_selfVisDirMask
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v41 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v41, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
      }
      v46 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm13 }
      v48 = *(_OWORD *)&_mm128_mul_ps((__m128)(v46 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
      }
      vecIn.v = v35;
      v51 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v41);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v53 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v48 | _XMM0), (__m128)(*(_OWORD *)&v51 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v53, v53);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v188 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      v185.v = _XMM12;
      selfVisDirIn.v = _mm128_div_ps(v53, _mm_sqrt_ps(_XMM0));
      __asm
      {
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
      }
      v69 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v69, v69);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v69 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm14, xmm1 }
      v76 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v69 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
      }
      _mm_shuffle_ps(v76, v76, 180);
      _mm_shuffle_ps(v76, v76, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v76, v76, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v86 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis(v27, (const float4 *)_RDX);
      v87 = *(_R12 - 1);
      v88 = *_R12;
      v89 = _R12[2];
      v90 = _R12[4];
      v91 = _R12[6];
      v92 = _R12[8];
      tanIn.v = _mm128_add_ps(v86, _XMM3);
      _XMM0 = *(unsigned __int64 *)(_R12 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      normIn.v = v86;
      v95 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 3);
      __asm { vpmovzxwd xmm1, xmm0 }
      v98 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 5);
      v100 = (__m128 *)&boneDQ[v87];
      v101 = (__m128 *)&boneDQ[v88];
      v102 = (__m128 *)&boneDQ[v89];
      v103 = (__m128 *)&boneDQ[v90];
      v104 = (__m128 *)&boneDQ[v91];
      v105 = (__m128 *)&boneDQ[v92];
      __asm { vpmovzxwd xmm1, xmm0 }
      v107 = (__m128 *)&boneDQ[_R12[10]];
      v108 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 7);
      __asm { vpmovzxwd xmm1, xmm0 }
      v111 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 9);
      __asm { vpmovzxwd xmm1, xmm0 }
      v114 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(_R12 + 11);
      __asm { vpmovzxwd xmm1, xmm0 }
      v117 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM1 = _mm128_mul_ps(*v101, *v100);
      v119 = _mm128_sub_ps(_mm128_sub_ps(g_one.v, _mm128_add_ps(v98, v95)), _mm128_add_ps(_mm128_add_ps(v117, v114), _mm128_add_ps(v111, v108)));
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
      }
      v122 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v95);
      _XMM0 = _mm128_mul_ps(*v100, *v102);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v100, *v103);
      v127 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v98);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v100, *v104);
      v131 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v108);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v100, *v105);
      v135 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v111);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v100, *v107);
      v139 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v114);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v142 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v117);
      v143 = _mm128_mul_ps(v139, v105[1]);
      v144 = _mm128_add_ps(_mm128_mul_ps(v142, *v107), _mm128_add_ps(_mm128_mul_ps(v139, *v105), _mm128_add_ps(_mm128_mul_ps(v135, *v104), _mm128_add_ps(_mm128_mul_ps(v131, *v103), _mm128_add_ps(_mm128_mul_ps(v127, *v102), _mm128_add_ps(_mm128_mul_ps(v122, *v101), _mm128_mul_ps(v119, *v100)))))));
      v145 = _mm128_add_ps(_mm128_mul_ps(v142, v107[1]), _mm128_add_ps(v143, _mm128_add_ps(_mm128_mul_ps(v135, v104[1]), _mm128_add_ps(_mm128_mul_ps(v131, v103[1]), _mm128_add_ps(_mm128_mul_ps(v127, v102[1]), _mm128_add_ps(_mm128_mul_ps(v122, v101[1]), _mm128_mul_ps(v119, v100[1])))))));
      _XMM0 = _mm128_mul_ps(v144, v144);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v150 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v151 = _mm128_mul_ps(v144, v150);
      v152 = _mm128_mul_ps(v145, v150);
      v153 = _mm_shuffle_ps(v151, v151, 210);
      v154 = _mm_shuffle_ps(v151, v151, 201);
      v155 = _mm_shuffle_ps(v151, v151, 255);
      v156 = _mm128_add_ps(_mm128_mul_ps(v155, vecIn.v), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(vecIn.v, vecIn.v, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(vecIn.v, vecIn.v, 201), v153)));
      v157 = _mm128_add_ps(_mm128_mul_ps(normIn.v, v155), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(normIn.v, normIn.v, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(normIn.v, normIn.v, 201), v153)));
      v158 = _mm128_add_ps(_mm128_mul_ps(tanIn.v, v155), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(tanIn.v, tanIn.v, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(tanIn.v, tanIn.v, 201), v153)));
      v159 = _mm128_add_ps(_mm128_mul_ps(v155, selfVisDirIn.v), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn.v, selfVisDirIn.v, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn.v, selfVisDirIn.v, 201), v153)));
      normIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v157, v157, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(v157, v157, 201), v153)), g_two.v), normIn.v);
      tanIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v158, v158, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(v158, v158, 201), v153)), g_two.v), tanIn.v);
      selfVisDirIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v159, v159, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(v159, v159, 201), v153)), g_two.v), selfVisDirIn.v);
      v160 = _mm128_mul_ps(v151, g_two.v);
      vecIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v152, v152, 210), v154), _mm128_mul_ps(_mm_shuffle_ps(v152, v152, 201), v153)), _mm128_sub_ps(_mm128_mul_ps(v152, v155), _mm128_mul_ps(v151, _mm_shuffle_ps(v152, v152, 255)))), g_two.v), _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v156, v156, 210), _mm_shuffle_ps(v160, v160, 201)), _mm128_mul_ps(_mm_shuffle_ps(v156, v156, 201), _mm_shuffle_ps(v160, v160, 210))), vecIn.v));
      R_TransformToModelSpace(&_R13->rootQuat, &_R13->rootOffset, &vecIn, &vecIn, &normIn, &normIn, &tanIn, &tanIn, &selfVisDirIn, &selfVisDirIn);
      __asm
      {
        vbroadcastss xmm0, dword ptr [r13+1Ch]
        vrcpps  xmm4, xmm0
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_XMM4, _mm128_sub_ps(vecIn.v, _R13->postSkinning.v)), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v166, v165, &v185);
      v = normIn.v;
      normIn.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 201), _mm_shuffle_ps(tanIn.v, tanIn.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v, v, 210), _mm_shuffle_ps(tanIn.v, tanIn.v, 201)));
      v188 = v;
      AxisComponentsToQuat((const vec3_t *)&tanIn, (const vec3_t *)&normIn, (const vec3_t *)&v188, &out);
      v168.packed = UnitQuatToQuatDec3n(&out, v180).packed;
      _XMM0 = v185.v;
      v170 = _XMM6.m128_i32[0];
      v191.packed = v168.packed;
      __asm { vblendps xmm1, xmm0, xmmword ptr [rbp+20h], 8 }
      vecIn.v = _XMM6;
      if ( _XMM6.m128_i32[0] > 0x1FFFFF )
        v170 = 0x1FFFFF;
      *(_OWORD *)&v6->selfVisibility.packed = _XMM1;
      ++v6;
      _XMM15 = _xmm;
      v18 = (__m128)_xmm;
      __asm { vpextrd rcx, xmm6, 2 }
      _R12 += 14;
      __asm { vpextrd rdx, xmm6, 1 }
      _XMM14 = 0i64;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v173 = (int)_RCX < 0;
      v174 = _RCX;
      v175 = _RDX;
      if ( v173 )
        v174 = 0;
      v176 = (*(_QWORD *)&v174 & 0x1FFFFFi64) << 21;
      if ( (_RDX & 0x80000000) != 0i64 )
        v175 = 0;
      v177 = *(_QWORD *)&v175 & 0x1FFFFFi64 | v176;
      v178 = v170;
      v179 = v177 << 21;
      if ( v170 < 0 )
        v178 = 0;
      _R9 = (char *)(v184 + 20);
      v184 += 20i64;
      v183 = v28 & 0x8000000000000000ui64 | *(_QWORD *)&v178 & 0x1FFFFFi64 | v179;
      v6[-1].xyz = (PackedPosition)v183;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_SkinXSurfaceWeight7DQB
==============
*/
void R_SkinXSurfaceWeight7DQB(const GfxPackedVertex *vertsIn, const unsigned __int16 *blend, const unsigned int vertCount, const PrecomputedBoundingBoxData *bbData, const DObjSkelDQ *boneDQ, GfxPackedVertex *vertsOut)
{
  GfxPackedVertex *v6; 
  __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v15; 
  unsigned __int64 v17; 
  __m128 v18; 
  int v25; 
  vector3 *v28; 
  unsigned __int64 v29; 
  __m128 v36; 
  __m128 v42; 
  __int128 v47; 
  __int128 v49; 
  __m128 v52; 
  __m128 v54; 
  __m128 v70; 
  __m128 v77; 
  __m128 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __m128 *v96; 
  __m128 *v97; 
  __m128 *v98; 
  __m128 *v99; 
  __m128 *v100; 
  __m128 v101; 
  __m128 *v102; 
  __m128 *v103; 
  __m128 *v104; 
  __m128 v107; 
  __m128 v110; 
  __m128 v113; 
  __m128 v116; 
  __m128 v119; 
  __m128 v122; 
  __m128 v125; 
  __m128 v127; 
  __m128 v130; 
  __m128 v135; 
  __m128 v139; 
  __m128 v143; 
  __m128 v147; 
  __m128 v151; 
  __m128 v154; 
  __m128 v155; 
  __m128 v156; 
  __m128 v157; 
  __m128 v162; 
  __m128 v163; 
  __m128 v164; 
  __m128 v165; 
  __m128 v166; 
  __m128 v167; 
  __m128 v168; 
  __m128 v169; 
  __m128 v170; 
  __m128 v171; 
  __m128 v172; 
  const float4 *v177; 
  const float4 *v178; 
  __m128 v; 
  PackedQuatDec3n v180; 
  __int64 v181; 
  int v185; 
  bool v186; 
  int v187; 
  int v188; 
  __int64 v189; 
  __int64 v190; 
  int v191; 
  __int64 v192; 
  float v193; 
  unsigned __int16 *v194; 
  float4 selfVisDirIn; 
  unsigned __int64 v196; 
  unsigned __int64 v197; 
  __int64 v198; 
  __int64 v199; 
  float4 v200; 
  float4 tanIn; 
  float4 normIn; 
  __m128 v203; 
  vec4_t out; 
  float4 vecIn; 
  PackedQuatDec3n v206; 

  v6 = vertsOut;
  _R13 = bbData;
  v8 = vertCount;
  _RDI = blend;
  _RBX = vertsIn;
  if ( !vertsIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1482, ASSERT_TYPE_ASSERT, "(vertsIn)", (const char *)&queryFormat, "vertsIn") )
    __debugbreak();
  if ( !vertsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1483, ASSERT_TYPE_ASSERT, "(vertsOut)", (const char *)&queryFormat, "vertsOut") )
    __debugbreak();
  if ( ((unsigned __int8)vertsOut & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model_skin.cpp", 1484, ASSERT_TYPE_ASSERT, "(!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 ))", (const char *)&queryFormat, "!( reinterpret_cast< uintptr_t >( vertsOut ) & 7 )") )
    __debugbreak();
  _RDX = 20 * v8;
  v12 = v8;
  v13 = 20 * v8;
  if ( (unsigned __int64)(20 * v8) > 0x200 )
    v13 = 512i64;
  for ( _RAX = 0i64; _RAX < v13; _RAX += 64i64 )
    __asm { prefetcht0 byte ptr [rax+rbx] }
  v15 = 2 * v8;
  _RAX = 0i64;
  v17 = 2 * v8;
  if ( (unsigned __int64)(2 * v8) > 0x200 )
    v17 = 512i64;
  if ( v17 )
  {
    do
    {
      __asm { prefetcht0 byte ptr [rax+rdi] }
      _RAX += 64i64;
    }
    while ( _RAX < v17 );
  }
  if ( (_DWORD)v8 )
  {
    v18 = (__m128)_xmm;
    _R9 = (__int64)&_RBX->xyz + 4;
    _RDI = (unsigned __int16 *)(_RDI + 1);
    _R15 = 508i64;
    if ( _RDX <= 0x200 )
      _R15 = -4i64;
    _R12 = 510i64;
    if ( v15 <= 0x200 )
      _R12 = -2i64;
    _XMM15 = _xmm;
    _XMM14 = 0i64;
    v194 = _RDI;
    v198 = (__int64)&_RBX->xyz + 4;
    v199 = _R15;
    do
    {
      __asm
      {
        prefetcht0 byte ptr [r15+r9]
        prefetcht0 byte ptr [r12+rdi]
      }
      v25 = *(_DWORD *)(_R9 - 4);
      _XMM12 = *(__m128 *)(_R9 + 4);
      _XMM7 = g_selfVisDirMask.v;
      HIDWORD(v196) = *(_DWORD *)_R9;
      LODWORD(v196) = v25;
      v28 = (vector3 *)(v25 & 0x1FFFFF);
      v29 = v196;
      __asm { vpshufd xmm3, xmm12, 0 }
      vecIn.v.m128_i32[0] = (int)v28;
      vecIn.v.m128_i32[1] = (v196 >> 21) & 0x1FFFFF;
      vecIn.v.m128_i32[2] = (v196 >> 42) & 0x1FFFFF;
      _XMM0 = *(_DWORD *)(_R9 + 12) & 0x20000000;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N1_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v193 = *(float *)&_XMM0;
      __asm { vbroadcastss xmm0, dword ptr [r13+0Ch] }
      v36 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps((__m128i)vecIn.v), v18), g_one.v), _XMM0), _R13->preSkinning.v);
      __asm { vpand   xmm0, xmm7, xmm3 }
      _XMM10 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      __asm
      {
        vpsrld  xmm0, xmm3, 9
        vpand   xmm0, xmm0, xmm7
      }
      _XMM9 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM0), g_selfVisDirScaleRcp.v), g_two.v), g_negativeOneXYZW.v);
      v42 = _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM10 & *(_OWORD *)&g_maskOffSignBit.v));
      _XMM8 = _mm128_sub_ps(v42, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v));
      __asm
      {
        vcmpltps xmm6, xmm8, xmm14
        vcmpltps xmm5, xmm9, xmm14
        vcmpltps xmm0, xmm10, xmm14
      }
      v47 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
      __asm { vandnps xmm0, xmm0, xmm13 }
      v49 = *(_OWORD *)&_mm128_mul_ps((__m128)(v47 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM6;
      __asm
      {
        vandnps xmm1, xmm5, xmm13
        vandnps xmm0, xmm6, xmm10
      }
      vecIn.v = v36;
      v52 = _mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM1), v42);
      __asm { vandnps xmm1, xmm6, xmm9 }
      v54 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)(v49 | _XMM0), (__m128)(*(_OWORD *)&v52 & _XMM6 | _XMM1), 0), _XMM8, 8);
      _XMM0 = _mm128_mul_ps(v54, v54);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      selfVisDirIn.v = _mm128_div_ps(v54, _mm_sqrt_ps(_XMM0));
      v200.v = _XMM12;
      v203 = (__m128)(*(_OWORD *)&_mm_shuffle_ps(_XMM12, _XMM12, 0) & *(_OWORD *)&g_selfVisScaleAngleMask.v);
      __asm
      {
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
      }
      v70 = _mm128_sub_ps(_mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm), (__m128)_xmm);
      _XMM1 = _mm128_mul_ps(v70, v70);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      _mm128_sub_ps(g_one.v, _XMM0);
      _XMM0 = *(_OWORD *)&v70 & *(_OWORD *)&g_keepXYZ.v;
      __asm { vmaxps  xmm2, xmm14, xmm1 }
      v77 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm_sqrt_ps(_XMM2) & *(_OWORD *)&g_keepW.v), (__m128)(*(_OWORD *)&v70 & *(_OWORD *)&g_keepXYZ.v));
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vpcmpeqd xmm0, xmm0, xmm7
      }
      _mm_shuffle_ps(v77, v77, 180);
      _mm_shuffle_ps(v77, v77, 147);
      __asm
      {
        vpand   xmm5, xmm0, xmm1
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000001000000010000000100000001
        vpcmpeqd xmm0, xmm7, cs:__xmm@00000002000000020000000200000002
      }
      _mm_shuffle_ps(v77, v77, 156);
      __asm
      {
        vpand   xmm4, xmm1, xmm2
        vpcmpeqd xmm1, xmm7, cs:__xmm@00000003000000030000000300000003
        vpand   xmm2, xmm0, xmm3
        vpand   xmm3, xmm1, xmm6
      }
      v87 = _mm128_add_ps(_mm128_add_ps(_XMM5, _XMM4), _XMM2);
      Float4UnitQuatToAxis(v28, (const float4 *)_RDX);
      v88 = *(_RDI - 1);
      v89 = *_RDI;
      v90 = _RDI[2];
      v91 = _RDI[4];
      v92 = _RDI[6];
      v93 = _RDI[8];
      v94 = _RDI[10];
      v95 = _RDI[12];
      tanIn.v = _mm128_add_ps(v87, _XMM3);
      v96 = (__m128 *)&boneDQ[v88];
      v97 = (__m128 *)&boneDQ[v89];
      v98 = (__m128 *)&boneDQ[v90];
      v99 = (__m128 *)&boneDQ[v91];
      v100 = (__m128 *)&boneDQ[v92];
      v101 = *v97;
      v102 = (__m128 *)&boneDQ[v93];
      v103 = (__m128 *)&boneDQ[v94];
      normIn.v = v87;
      v104 = (__m128 *)&boneDQ[v95];
      _XMM0 = *(unsigned __int64 *)(v194 + 1);
      __asm { vpmovzxwd xmm1, xmm0 }
      v107 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(v194 + 3);
      __asm { vpmovzxwd xmm1, xmm0 }
      v110 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(v194 + 5);
      __asm { vpmovzxwd xmm1, xmm0 }
      v113 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(v194 + 7);
      __asm { vpmovzxwd xmm1, xmm0 }
      v116 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(v194 + 9);
      __asm { vpmovzxwd xmm1, xmm0 }
      v119 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(v194 + 11);
      __asm { vpmovzxwd xmm1, xmm0 }
      v122 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM0 = *(unsigned __int64 *)(v194 + 13);
      __asm { vpmovzxwd xmm1, xmm0 }
      v125 = _mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_mm_shuffle_ps(_XMM1, _XMM1, 0)), g_short4BoneWeightScale.v);
      _XMM1 = _mm128_mul_ps(v101, *v96);
      v127 = _mm128_sub_ps(_mm128_sub_ps(g_one.v, _mm128_add_ps(v110, v107)), _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v122, v119), v125), _mm128_add_ps(v116, v113)));
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vhaddps xmm2, xmm0, xmm0
      }
      v130 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v107);
      _XMM0 = _mm128_mul_ps(*v96, *v98);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v96, *v99);
      v135 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v110);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v96, *v100);
      v139 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v113);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v96, *v102);
      v143 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v116);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v96, *v103);
      v147 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v119);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      _XMM0 = _mm128_mul_ps(*v96, *v104);
      v151 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v122);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      v154 = _mm128_mul_ps((__m128)(_XMM2 & *(_OWORD *)&g_negativeZero.v | *(_OWORD *)&g_one.v), v125);
      v155 = _mm128_mul_ps(v151, v103[1]);
      v156 = _mm128_add_ps(_mm128_mul_ps(v154, *v104), _mm128_add_ps(_mm128_mul_ps(v151, *v103), _mm128_add_ps(_mm128_mul_ps(v147, *v102), _mm128_add_ps(_mm128_mul_ps(v143, *v100), _mm128_add_ps(_mm128_mul_ps(v139, *v99), _mm128_add_ps(_mm128_mul_ps(v135, *v98), _mm128_add_ps(_mm128_mul_ps(v130, *v97), _mm128_mul_ps(v127, *v96))))))));
      v157 = _mm128_add_ps(_mm128_mul_ps(v154, v104[1]), _mm128_add_ps(v155, _mm128_add_ps(_mm128_mul_ps(v147, v102[1]), _mm128_add_ps(_mm128_mul_ps(v143, v100[1]), _mm128_add_ps(_mm128_mul_ps(v139, v99[1]), _mm128_add_ps(_mm128_mul_ps(v135, v98[1]), _mm128_add_ps(_mm128_mul_ps(v130, v97[1]), _mm128_mul_ps(v127, v96[1]))))))));
      _XMM0 = _mm128_mul_ps(v156, v156);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vrsqrtps xmm4, xmm2
      }
      v162 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM2)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
      v163 = _mm128_mul_ps(v156, v162);
      v164 = _mm128_mul_ps(v157, v162);
      v165 = _mm_shuffle_ps(v163, v163, 210);
      v166 = _mm_shuffle_ps(v163, v163, 201);
      v167 = _mm_shuffle_ps(v163, v163, 255);
      v168 = _mm128_add_ps(_mm128_mul_ps(v167, vecIn.v), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(vecIn.v, vecIn.v, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(vecIn.v, vecIn.v, 201), v165)));
      v169 = _mm128_add_ps(_mm128_mul_ps(normIn.v, v167), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(normIn.v, normIn.v, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(normIn.v, normIn.v, 201), v165)));
      v170 = _mm128_add_ps(_mm128_mul_ps(tanIn.v, v167), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(tanIn.v, tanIn.v, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(tanIn.v, tanIn.v, 201), v165)));
      v171 = _mm128_add_ps(_mm128_mul_ps(v167, selfVisDirIn.v), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn.v, selfVisDirIn.v, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn.v, selfVisDirIn.v, 201), v165)));
      normIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v169, v169, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(v169, v169, 201), v165)), g_two.v), normIn.v);
      tanIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v170, v170, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(v170, v170, 201), v165)), g_two.v), tanIn.v);
      selfVisDirIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v171, v171, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(v171, v171, 201), v165)), g_two.v), selfVisDirIn.v);
      v172 = _mm128_mul_ps(v163, g_two.v);
      vecIn.v = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v164, v164, 210), v166), _mm128_mul_ps(_mm_shuffle_ps(v164, v164, 201), v165)), _mm128_sub_ps(_mm128_mul_ps(v164, v167), _mm128_mul_ps(v163, _mm_shuffle_ps(v164, v164, 255)))), g_two.v), _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v168, v168, 210), _mm_shuffle_ps(v172, v172, 201)), _mm128_mul_ps(_mm_shuffle_ps(v168, v168, 201), _mm_shuffle_ps(v172, v172, 210))), vecIn.v));
      R_TransformToModelSpace(&_R13->rootQuat, &_R13->rootOffset, &vecIn, &vecIn, &normIn, &normIn, &tanIn, &tanIn, &selfVisDirIn, &selfVisDirIn);
      __asm
      {
        vbroadcastss xmm0, dword ptr [r13+1Ch]
        vrcpps  xmm4, xmm0
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_XMM4, _mm128_sub_ps(vecIn.v, _R13->postSkinning.v)), g_oneHalf.v), g_oneHalf.v), (__m128)_xmm);
      __asm { vcvtps2dq xmm6, xmm3 }
      Float4PackSelfVisX(v178, v177, &v200);
      v = normIn.v;
      normIn.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 201), _mm_shuffle_ps(tanIn.v, tanIn.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v, v, 210), _mm_shuffle_ps(tanIn.v, tanIn.v, 201)));
      v203 = v;
      AxisComponentsToQuat((const vec3_t *)&tanIn, (const vec3_t *)&normIn, (const vec3_t *)&v203, &out);
      v180.packed = UnitQuatToQuatDec3n(&out, v193).packed;
      v181 = v198;
      _RDI = v194 + 16;
      _XMM0 = v200.v;
      _XMM15 = _xmm;
      v18 = (__m128)_xmm;
      _R15 = v199;
      ++v6;
      v206.packed = v180.packed;
      __asm
      {
        vblendps xmm1, xmm0, xmmword ptr [rbp+20h], 8
        vpextrd rcx, xmm6, 2
      }
      v194 += 16;
      v185 = _XMM6.m128_i32[0];
      __asm { vpextrd rdx, xmm6, 1 }
      if ( _XMM6.m128_i32[0] > 0x1FFFFF )
        v185 = 0x1FFFFF;
      *(_OWORD *)&v6[-1].selfVisibility.packed = _XMM1;
      if ( (int)_RDX > 0x1FFFFF )
        _RDX = 0x1FFFFFi64;
      vecIn.v = _XMM6;
      if ( (int)_RCX > 0x1FFFFF )
        LODWORD(_RCX) = 0x1FFFFF;
      v186 = (int)_RCX < 0;
      v187 = _RCX;
      v188 = _RDX;
      if ( v186 )
        v187 = 0;
      v189 = (*(_QWORD *)&v187 & 0x1FFFFFi64) << 21;
      _XMM14 = 0i64;
      if ( (_RDX & 0x80000000) != 0i64 )
        v188 = 0;
      v190 = *(_QWORD *)&v188 & 0x1FFFFFi64 | v189;
      v191 = v185;
      v192 = v190 << 21;
      if ( v185 < 0 )
        v191 = 0;
      _R9 = v181 + 20;
      v198 = _R9;
      v197 = v29 & 0x8000000000000000ui64 | *(_QWORD *)&v191 & 0x1FFFFFi64 | v192;
      v6[-1].xyz = (PackedPosition)v197;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_SkinXSurfaceWeightDQB
==============
*/
void R_SkinXSurfaceWeightDQB(const GfxPackedVertex *inVerts, const XSurface *xsurf, const GfxModelSkinnedSurface *skinSurf, const DObjSkelDQ *boneDQ, GfxPackedVertex *outVerts)
{
  __int64 v9; 
  unsigned __int16 *blendVerts; 
  float v13; 
  __int128 v15; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  int v20; 
  unsigned __int16 v21; 
  int v22; 
  unsigned __int16 v23; 
  int v24; 
  unsigned __int16 v25; 
  int v26; 
  unsigned __int16 v27; 
  int v28; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  PrecomputedBoundingBoxData bbData; 
  __int64 v32; 
  __int128 v33; 
  vec4_t outBoundingBoxData; 

  v32 = -2i64;
  Profile_Begin(102);
  v9 = 0i64;
  blendVerts = xsurf->blendVerts;
  R_SetBoundingBoxData(&xsurf->surfBounds, &outBoundingBoxData);
  _YMM0 = (__m256i)(unsigned __int128)outBoundingBoxData;
  __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
  *(__m256i *)bbData.preSkinning.v.m128_f32 = _YMM0;
  bbData.rootQuat = (float4)skinSurf->rootPlacement.quat;
  v13 = skinSurf->rootPlacement.origin.v[0];
  HIDWORD(v33) = 0;
  v15 = v33;
  *(float *)&v15 = v13;
  _XMM3 = v15;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbx+60h], 10h
    vinsertps xmm3, xmm3, dword ptr [rbx+64h], 20h ; ' '
  }
  bbData.rootOffset = (float4)_XMM3.v;
  v18 = xsurf->blendVertCounts[0];
  if ( v18 )
  {
    R_SkinXSurfaceWeight0DQB(inVerts, blendVerts, v18, &bbData, boneDQ, outVerts);
    v9 = xsurf->blendVertCounts[0];
    blendVerts += (unsigned int)(2 * v9);
  }
  v19 = xsurf->blendVertCounts[1];
  if ( v19 )
  {
    R_SkinXSurfaceWeight1DQB(&inVerts[v9], blendVerts, v19, &bbData, boneDQ, &outVerts[v9]);
    v20 = xsurf->blendVertCounts[1];
    v9 = (unsigned int)(v20 + v9);
    blendVerts += (unsigned int)(4 * v20);
  }
  v21 = xsurf->blendVertCounts[2];
  if ( v21 )
  {
    R_SkinXSurfaceWeight2DQB(&inVerts[v9], blendVerts, v21, &bbData, boneDQ, &outVerts[v9]);
    v22 = xsurf->blendVertCounts[2];
    v9 = (unsigned int)(v22 + v9);
    blendVerts += (unsigned int)(6 * v22);
  }
  v23 = xsurf->blendVertCounts[3];
  if ( v23 )
  {
    R_SkinXSurfaceWeight3DQB(&inVerts[v9], blendVerts, v23, &bbData, boneDQ, &outVerts[v9]);
    v24 = xsurf->blendVertCounts[3];
    v9 = (unsigned int)(v24 + v9);
    blendVerts += (unsigned int)(8 * v24);
  }
  v25 = xsurf->blendVertCounts[4];
  if ( v25 )
  {
    R_SkinXSurfaceWeight4DQB(&inVerts[v9], blendVerts, v25, &bbData, boneDQ, &outVerts[v9]);
    v26 = xsurf->blendVertCounts[4];
    v9 = (unsigned int)(v26 + v9);
    blendVerts += (unsigned int)(10 * v26);
  }
  v27 = xsurf->blendVertCounts[5];
  if ( v27 )
  {
    R_SkinXSurfaceWeight5DQB(&inVerts[v9], blendVerts, v27, &bbData, boneDQ, &outVerts[v9]);
    v28 = xsurf->blendVertCounts[5];
    v9 = (unsigned int)(v28 + v9);
    blendVerts += (unsigned int)(12 * v28);
  }
  v29 = xsurf->blendVertCounts[6];
  if ( v29 )
  {
    R_SkinXSurfaceWeight6DQB(&inVerts[v9], blendVerts, v29, &bbData, boneDQ, &outVerts[v9]);
    v9 = xsurf->blendVertCounts[6] + (unsigned int)v9;
    blendVerts += 14 * (unsigned int)xsurf->blendVertCounts[6];
  }
  v30 = xsurf->blendVertCounts[7];
  if ( v30 )
    R_SkinXSurfaceWeight7DQB(&inVerts[v9], blendVerts, v30, &bbData, boneDQ, &outVerts[v9]);
  Profile_EndInternal(NULL);
}

/*
==============
R_TransformToModelSpace
==============
*/
void R_TransformToModelSpace(const float4 *rootQuat, const float4 *rootOffset, const float4 *vecIn, float4 *vecOut, const float4 *normIn, float4 *normOut, const float4 *tanIn, float4 *tanOut, const float4 *selfVisDirIn, float4 *selfVisDirOut)
{
  __m128 v; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 

  v = rootQuat->v;
  v11 = _mm128_mul_ps(rootQuat->v, (__m128)_xmm);
  v12 = _mm128_sub_ps(vecIn->v, rootOffset->v);
  v13 = _mm_shuffle_ps(v, v, 210);
  v14 = _mm_shuffle_ps(v, v, 201);
  v15 = _mm_shuffle_ps(v, v, 255);
  v16 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v12, v12, 210), v14), _mm128_mul_ps(_mm_shuffle_ps(v12, v12, 201), v13));
  v17 = _mm128_add_ps(v16, v16);
  v18 = _mm128_add_ps(_mm128_mul_ps(v17, _mm128_sub_ps((__m128)0i64, v15)), v12);
  v19 = _mm_shuffle_ps(v11, v11, 201);
  v20 = _mm128_mul_ps(_mm_shuffle_ps(v17, v17, 201), v13);
  v21 = _mm_shuffle_ps(v11, v11, 210);
  vecOut->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 210), v14), v20), v18);
  v22 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(normIn->v, normIn->v, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(normIn->v, normIn->v, 201), v21));
  v23 = _mm128_add_ps(v22, v22);
  v24 = _mm_shuffle_ps(v11, v11, 255);
  normOut->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v23, v23, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v23, v23, 201), v21)), _mm128_add_ps(_mm128_mul_ps(v23, _mm128_sub_ps((__m128)0i64, v24)), normIn->v));
  v25 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(tanIn->v, tanIn->v, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(tanIn->v, tanIn->v, 201), v21));
  v26 = _mm128_add_ps(v25, v25);
  tanOut->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v26, v26, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v26, v26, 201), v21)), _mm128_add_ps(_mm128_mul_ps(v26, _mm128_sub_ps((__m128)0i64, v24)), tanIn->v));
  v27 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn->v, selfVisDirIn->v, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(selfVisDirIn->v, selfVisDirIn->v, 201), v21));
  v28 = _mm128_add_ps(v27, v27);
  selfVisDirOut->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v28, v28, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v28, v28, 201), v21)), _mm128_add_ps(_mm128_mul_ps(v28, _mm128_sub_ps((__m128)0i64, v24)), selfVisDirIn->v));
}

