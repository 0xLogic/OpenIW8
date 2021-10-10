/*
==============
CG_VectorField_GetInstance
==============
*/

const VectorFieldInstance *__fastcall CG_VectorField_GetInstance(unsigned __int8 vfHandle)
{
  return ?CG_VectorField_GetInstance@@YAPEBUVectorFieldInstance@@E@Z(vfHandle);
}

/*
==============
CG_VectorField_AllocInstanceForFx
==============
*/

unsigned __int8 __fastcall CG_VectorField_AllocInstanceForFx(const VectorField *vf, const orientation_t *orient, unsigned int effectHandle, ParticleSystemHandle systemOwner)
{
  return ?CG_VectorField_AllocInstanceForFx@@YAEPEBUVectorField@@PEBUorientation_t@@IW4ParticleSystemHandle@@@Z(vf, orient, effectHandle, systemOwner);
}

/*
==============
CG_VectorField_GetInstancePool
==============
*/

const VectorFieldInstance *__fastcall CG_VectorField_GetInstancePool()
{
  return ?CG_VectorField_GetInstancePool@@YAPEBUVectorFieldInstance@@XZ();
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithHandle
==============
*/

void __fastcall CG_VectorField_UpdateInstanceForFxWithHandle(unsigned __int8 vfHandle, const orientation_t *orient, float strengthScale, float sizeScale, bool isRotated)
{
  ?CG_VectorField_UpdateInstanceForFxWithHandle@@YAXEPEBUorientation_t@@MM_N@Z(vfHandle, orient, strengthScale, sizeScale, isRotated);
}

/*
==============
CG_VectorField_FreeInstanceForFxWithEffectHandle
==============
*/

void __fastcall CG_VectorField_FreeInstanceForFxWithEffectHandle(unsigned int effectHandle)
{
  ?CG_VectorField_FreeInstanceForFxWithEffectHandle@@YAXI@Z(effectHandle);
}

/*
==============
CG_VectorField_GetIntersectingInstances
==============
*/

unsigned int __fastcall CG_VectorField_GetIntersectingInstances(const vec3_t *pos, float radius, unsigned __int8 *destInstances, unsigned int maxDestInstances)
{
  return ?CG_VectorField_GetIntersectingInstances@@YAIAEBTvec3_t@@MPEAEI@Z(pos, radius, destInstances, maxDestInstances);
}

/*
==============
CG_VectorField_DrawActiveFields
==============
*/

void CG_VectorField_DrawActiveFields(void)
{
  ?CG_VectorField_DrawActiveFields@@YAXXZ();
}

/*
==============
CG_VectorField_SamplePosAgainstInstances
==============
*/

int __fastcall CG_VectorField_SamplePosAgainstInstances(const vec3_t *pos, vec3_t *outSample, unsigned int numInstances, unsigned __int8 *samplers, VectorFieldType filterType)
{
  return ?CG_VectorField_SamplePosAgainstInstances@@YAHAEBTvec3_t@@AEAT1@IPEAEW4VectorFieldType@@@Z(pos, outSample, numInstances, samplers, filterType);
}

/*
==============
CG_VectorField_FreeInstanceForFxWithHandle
==============
*/

void __fastcall CG_VectorField_FreeInstanceForFxWithHandle(unsigned __int8 vfHandle)
{
  ?CG_VectorField_FreeInstanceForFxWithHandle@@YAXE@Z(vfHandle);
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithEffectHandle
==============
*/

void __fastcall CG_VectorField_UpdateInstanceForFxWithEffectHandle(unsigned int effectHandle, const orientation_t *orient, float strengthScale, float sizeScale, int isRotated)
{
  ?CG_VectorField_UpdateInstanceForFxWithEffectHandle@@YAXIPEBUorientation_t@@MMH@Z(effectHandle, orient, strengthScale, sizeScale, isRotated);
}

/*
==============
CG_VectorField_DrawField
==============
*/

void __fastcall CG_VectorField_DrawField(const VectorFieldInstance *vfi, int depthTest)
{
  ?CG_VectorField_DrawField@@YAXPEBUVectorFieldInstance@@H@Z(vfi, depthTest);
}

/*
==============
CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius
==============
*/

int __fastcall CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius(const CapsuleBounds *const cpBounds, vec3_t *outSample, const unsigned int numInstances, const unsigned __int8 *const samplers, VectorFieldType filterType)
{
  return ?CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius@@YAHQEBUCapsuleBounds@@AEATvec3_t@@IQEBEW4VectorFieldType@@@Z(cpBounds, outSample, numInstances, samplers, filterType);
}

/*
==============
CG_DebugVectorFieldBox
==============
*/
void CG_DebugVectorFieldBox(const orientation_t *orient, const Bounds *box, const vec4_t *color, int depthTest, int duration)
{
  char *v6; 
  unsigned int v7; 
  float v15; 
  float v20; 
  float v25; 
  float v26; 
  float v27; 
  int v30; 
  bool v31; 
  char v32; 
  int v33; 
  char v34; 
  int v36; 
  char v37; 
  int v39; 
  char v40; 
  const int *v41; 
  __int64 v42; 
  __int64 v43; 
  char v45[32]; 
  char v46; 

  v6 = &v46;
  v7 = 0;
  _XMM10 = 0i64;
  do
  {
    _XMM4 = LODWORD(box->halfSize.v[0]);
    _XMM0 = v7 & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v15 = *(float *)&_XMM1 + box->midPoint.v[0];
    _XMM4 = LODWORD(box->halfSize.v[1]);
    _XMM0 = v7 & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v20 = *(float *)&_XMM1 + box->midPoint.v[1];
    _XMM4 = LODWORD(box->halfSize.v[2]);
    _XMM0 = v7 & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    v25 = *(float *)&_XMM1 + box->midPoint.v[2];
    *(float *)v6 = v25;
    *((float *)v6 - 2) = v15;
    *((float *)v6 - 1) = v20;
    if ( v6 - 8 == v45 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
      __debugbreak();
    v26 = (float)((float)((float)(v20 * orient->axis.m[0].v[1]) + (float)(v15 * orient->axis.m[0].v[0])) + (float)(v25 * orient->axis.m[0].v[2])) + orient->origin.v[0];
    v27 = (float)((float)(v20 * orient->axis.m[2].v[1]) + (float)(v15 * orient->axis.m[2].v[0])) + (float)(v25 * orient->axis.m[2].v[2]);
    *((float *)v6 - 1) = (float)((float)((float)(v20 * orient->axis.m[1].v[1]) + (float)(v15 * orient->axis.m[1].v[0])) + (float)(v25 * orient->axis.m[1].v[2])) + orient->origin.v[1];
    *((float *)v6 - 2) = v26;
    *(float *)v6 = v27 + orient->origin.v[2];
    __asm
    {
      vroundss xmm2, xmm10, xmm3, 1
      vroundss xmm1, xmm10, xmm3, 1
    }
    v30 = (int)*(float *)&_XMM2;
    if ( (int)*(float *)&_XMM2 > 255 )
      v30 = 255;
    v31 = v30 < 0;
    v32 = v30;
    v33 = (int)*(float *)&_XMM1;
    if ( v31 )
      v32 = 0;
    v6[4] = v32;
    if ( v33 > 255 )
      v33 = 255;
    v34 = v33;
    if ( v33 < 0 )
      v34 = 0;
    v6[5] = v34;
    __asm { vroundss xmm1, xmm10, xmm3, 1 }
    v36 = (int)*(float *)&_XMM1;
    if ( (int)*(float *)&_XMM1 > 255 )
      v36 = 255;
    v37 = v36;
    __asm { vroundss xmm1, xmm10, xmm3, 1 }
    if ( v36 < 0 )
      v37 = 0;
    v39 = (int)*(float *)&_XMM1;
    v6[6] = v37;
    if ( (int)*(float *)&_XMM1 > 255 )
      v39 = 255;
    v40 = v39;
    if ( v39 < 0 )
      v40 = 0;
    ++v7;
    v6[7] = v40;
    v6 += 16;
  }
  while ( v7 < 8 );
  v41 = &iEdgePairs_4[0][1];
  v42 = 12i64;
  do
  {
    v43 = 2i64 * *v41;
    *(_OWORD *)debugEdge.v = *(_OWORD *)&v45[16 * *(v41 - 1) + 24];
    *(_OWORD *)stru_1512E3C68.v = *(_OWORD *)&v45[8 * v43 + 24];
    CG_DebugLine(&debugEdge, &stru_1512E3C68, color, depthTest, duration);
    v41 += 2;
    --v42;
  }
  while ( v42 );
}

/*
==============
CG_VectorField_AllocInstanceForFx
==============
*/
unsigned __int8 CG_VectorField_AllocInstanceForFx(const VectorField *vf, const orientation_t *orient, unsigned int effectHandle, ParticleSystemHandle systemOwner)
{
  __int64 v4; 
  VectorFieldInstance *v9; 
  unsigned __int8 v11; 

  v4 = 0i64;
  while ( 1 )
  {
    v9 = &s_vectorFieldInstancePool[v4];
    if ( (((_BYTE)v9 + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v9->inUse) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&v9->inUse, 1, 0) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0xFF )
      return -1;
  }
  v9->vf = vf;
  v9->effectHandle = effectHandle;
  v9->isRotated = 0;
  v9->sizeScale = 1.0;
  v9->orient.origin.v[0] = orient->origin.v[0];
  v9->orient.origin.v[1] = orient->origin.v[1];
  v9->orient.origin.v[2] = orient->origin.v[2];
  v9->orient.axis.m[0].v[0] = orient->axis.m[0].v[0];
  v9->orient.axis.m[0].v[1] = orient->axis.m[0].v[1];
  v9->orient.axis.m[0].v[2] = orient->axis.m[0].v[2];
  v9->orient.axis.m[1].v[0] = orient->axis.m[1].v[0];
  v9->orient.axis.m[1].v[1] = orient->axis.m[1].v[1];
  v9->orient.axis.m[1].v[2] = orient->axis.m[1].v[2];
  v9->orient.axis.m[2].v[0] = orient->axis.m[2].v[0];
  v9->orient.axis.m[2].v[1] = orient->axis.m[2].v[1];
  v9->orient.axis.m[2].v[2] = orient->axis.m[2].v[2];
  v9->systemOwner = systemOwner;
  v11 = truncate_cast<unsigned char,unsigned int>(v4);
  CG_Wind_AddVectorField(v11);
  return truncate_cast<unsigned char,unsigned int>(v4);
}

/*
==============
CG_VectorField_DrawActiveFields
==============
*/
void CG_VectorField_DrawActiveFields(void)
{
  float *p_strengthScale; 
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v3; 
  int integer; 
  __int64 v5; 
  int v6; 

  p_strengthScale = &s_vectorFieldInstancePool[0].strengthScale;
  v1 = 255i64;
  do
  {
    if ( *((_DWORD *)p_strengthScale + 2) )
    {
      v2 = DVARINT_cg_vectorFieldsDraw;
      if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      v3 = *((_QWORD *)p_strengthScale - 7);
      integer = v2->current.integer;
      v5 = 0i64;
      if ( *(_DWORD *)(v3 + 52) )
      {
        v6 = integer > 1;
        do
        {
          CG_VectorField_DrawSubField((const orientation_t *)p_strengthScale - 1, p_strengthScale[1], *p_strengthScale, (const VectorSubField *)(*(_QWORD *)(v3 + 8) + 80 * v5), v6);
          v3 = *((_QWORD *)p_strengthScale - 7);
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(v3 + 52) );
      }
    }
    p_strengthScale += 20;
    --v1;
  }
  while ( v1 );
}

/*
==============
CG_VectorField_DrawField
==============
*/
void CG_VectorField_DrawField(const VectorFieldInstance *vfi, int depthTest)
{
  __int64 v3; 
  const VectorField *vf; 

  v3 = 0i64;
  vf = vfi->vf;
  if ( vf->numSubFields )
  {
    do
    {
      CG_VectorField_DrawSubField(&vfi->orient, vfi->sizeScale, vfi->strengthScale, &vf->subFields[v3], depthTest);
      vf = vfi->vf;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < vfi->vf->numSubFields );
  }
}

/*
==============
CG_VectorField_DrawSubField
==============
*/

void __fastcall CG_VectorField_DrawSubField(const orientation_t *orient, double sizeScale, float strengthScale, const VectorSubField *vf, int depthTest)
{
  float v7; 
  const dvar_t *v8; 
  const char *v9; 
  VectorFieldType type; 
  int v11; 
  int v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int128 v27; 
  __int128 v30; 
  __int128 v32; 
  float v34; 
  float v35; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v38; 
  float v39; 
  float v40; 
  const dvar_t *v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  unsigned int v46; 
  int v47; 
  int v48; 
  unsigned int v49; 
  vec4_t *v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  int v66; 
  bool v67; 
  char v68; 
  int v69; 
  char v70; 
  int v72; 
  char v73; 
  int v75; 
  char v76; 
  float v77; 
  int v80; 
  char v81; 
  int v82; 
  char v83; 
  int v85; 
  char v86; 
  int v88; 
  char v89; 
  int v91; 
  char v92; 
  int v94; 
  char v95; 
  int v97; 
  char v98; 
  int v100; 
  char v101; 
  __int128 v103; 
  int v107; 
  int v108; 
  char v109; 
  int v111; 
  int v113; 
  int v114; 
  char v115; 
  int v116; 
  char v117; 
  int v119; 
  int v120; 
  char v121; 
  char v122; 
  char v123; 
  char v124; 
  char v125; 
  __int64 v126; 
  __int64 v127; 
  unsigned int v128; 
  int v129; 
  int v130; 
  float v131; 
  float v132; 
  unsigned int v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  int v138; 
  unsigned int v139; 
  float v140; 
  vec4_t color; 
  __int128 v142; 
  Bounds box; 
  char v144; 
  __int128 v145; 
  __int128 v146; 

  v133 = vf->numEntries[0];
  v139 = vf->numEntries[1];
  v7 = *(float *)&sizeScale;
  if ( vf->type == VECTOR_FIELD_TYPE_VELOCITY )
  {
    v8 = DVARFLT_cg_vectorFieldsDrawVelocityScale;
    if ( DVARFLT_cg_vectorFieldsDrawVelocityScale )
      goto LABEL_8;
    v9 = "cg_vectorFieldsDrawVelocityScale";
  }
  else
  {
    v8 = DVARFLT_cg_vectorFieldsDrawForceScale;
    if ( DVARFLT_cg_vectorFieldsDrawForceScale )
      goto LABEL_8;
    v9 = "cg_vectorFieldsDrawForceScale";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(v8);
  type = vf->type;
  v11 = vf->numEntries[0];
  v12 = vf->numEntries[2];
  v129 = v11;
  v128 = vf->numEntries[1];
  v140 = v8->current.value * strengthScale;
  if ( type == VECTOR_FIELD_TYPE_FORCE )
  {
    v132 = FLOAT_1_0;
    color = (vec4_t)_xmm;
  }
  else if ( type == VECTOR_FIELD_TYPE_VELOCITY )
  {
    color = (vec4_t)_xmm;
    v132 = 1.0 / (float)v11;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 123, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported vf type") )
      __debugbreak();
    v132 = v131;
  }
  v14 = *(_OWORD *)&sizeScale;
  *(float *)&v14 = *(float *)&sizeScale * vf->worldBounds.maxs.v[0];
  v13 = v14;
  v16 = *(_OWORD *)&sizeScale;
  *(float *)&v16 = *(float *)&sizeScale * vf->worldBounds.maxs.v[1];
  v15 = v16;
  v18 = *(_OWORD *)&sizeScale;
  *(float *)&v18 = *(float *)&sizeScale * vf->worldBounds.maxs.v[2];
  v17 = v18;
  v19 = *(float *)&sizeScale * vf->worldBounds.mins.v[0];
  v20 = *(float *)&sizeScale * vf->worldBounds.mins.v[1];
  v21 = *(float *)&sizeScale * vf->worldBounds.mins.v[2];
  v22 = *(float *)&sizeScale * vf->ds.v[0];
  v23 = (float)(v19 + *(float *)&v13) * 0.5;
  v24 = (float)(v20 + *(float *)&v15) * 0.5;
  v25 = (float)(*(float *)&v18 + v21) * 0.5;
  v27 = v13;
  *(float *)&v27 = *(float *)&v13 - v23;
  _XMM2 = v27;
  __asm { vmaxss  xmm1, xmm2, xmm0 }
  box.halfSize.v[0] = *(float *)&_XMM1;
  v30 = v17;
  *(float *)&v30 = *(float *)&v17 - v25;
  _XMM2 = v30;
  box.midPoint.v[0] = v23;
  v32 = v15;
  *(float *)&v32 = *(float *)&v15 - v24;
  _XMM3 = v32;
  __asm { vmaxss  xmm1, xmm3, xmm0 }
  box.halfSize.v[1] = *(float *)&v15;
  v34 = v7 * vf->ds.v[2];
  box.halfSize.v[1] = *(float *)&_XMM1;
  box.halfSize.v[2] = *(float *)&v17;
  v35 = v7 * vf->ds.v[1];
  __asm { vmaxss  xmm1, xmm2, xmm0 }
  box.halfSize.v[2] = *(float *)&_XMM1;
  v136 = v19;
  box.midPoint.v[1] = v24;
  box.midPoint.v[2] = v25;
  v137 = v22;
  v135 = v35;
  v134 = v34;
  LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
  v38 = DVARFLT_cg_vectorFieldsDrawBoxDist;
  *(float *)&_XMM2 = LocalClientGlobals->predictedPlayerState.origin.v[1] - orient->origin.v[1];
  v39 = LocalClientGlobals->predictedPlayerState.origin.v[2] - orient->origin.v[2];
  v40 = fsqrt((float)((float)(*(float *)&_XMM2 * *(float *)&_XMM2) + (float)((float)(LocalClientGlobals->predictedPlayerState.origin.v[0] - orient->origin.v[0]) * (float)(LocalClientGlobals->predictedPlayerState.origin.v[0] - orient->origin.v[0]))) + (float)(v39 * v39));
  if ( !DVARFLT_cg_vectorFieldsDrawBoxDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDrawBoxDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v40 <= v38->current.value )
    CG_DebugVectorFieldBox(orient, &box, &color, depthTest, 2);
  v41 = DVARFLT_cg_vectorFieldsDrawEntryDist;
  if ( !DVARFLT_cg_vectorFieldsDrawEntryDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDrawEntryDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v40 <= v41->current.value )
  {
    v42 = v129;
    v43 = 0;
    v130 = 0;
    if ( v129 > 0 )
    {
      v44 = v128;
      do
      {
        v45 = 0;
        if ( v44 > 0 )
        {
          v46 = v133;
          v47 = v43;
          v138 = v43;
          do
          {
            v48 = 0;
            if ( v12 > 0 )
            {
              v49 = v47;
              _XMM9 = 0i64;
              do
              {
                if ( v49 >= vf->numEntries[0] * vf->numEntries[2] * vf->numEntries[1] )
                {
                  LODWORD(v127) = vf->numEntries[0] * vf->numEntries[2] * vf->numEntries[1];
                  LODWORD(v126) = v49;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2] )", "index doesn't index vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2]\n\t%i not in [0, %i)", v126, v127) )
                    __debugbreak();
                  v42 = v129;
                  v43 = v130;
                  v44 = v128;
                }
                v51 = &vf->linearData[v49];
                if ( v12 == 1 )
                  v52 = FLOAT_0_5;
                else
                  v52 = (float)v48;
                v53 = (float)(v34 * v52) + v21;
                if ( v44 == 1 )
                  v54 = FLOAT_0_5;
                else
                  v54 = (float)v45;
                v56 = (float)(v35 * v54) + v20;
                v55 = v56;
                if ( v42 == 1 )
                  v57 = FLOAT_0_5;
                else
                  v57 = (float)v43;
                v58 = v56 * orient->axis.m[0].v[1];
                v59 = (float)(v22 * v57) + v19;
                v60 = (float)((float)(v58 + (float)(v59 * orient->axis.m[0].v[0])) + (float)(v53 * orient->axis.m[0].v[2])) + orient->origin.v[0];
                v61 = (float)((float)((float)(v59 * orient->axis.m[1].v[0]) + (float)(v55 * orient->axis.m[1].v[1])) + (float)(v53 * orient->axis.m[1].v[2])) + orient->origin.v[1];
                v63 = (float)((float)((float)(v59 * orient->axis.m[2].v[0]) + (float)(v55 * orient->axis.m[2].v[1])) + (float)(v53 * orient->axis.m[2].v[2])) + orient->origin.v[2];
                v62 = v63;
                __asm
                {
                  vroundss xmm0, xmm9, xmm3, 1
                  vroundss xmm1, xmm9, xmm3, 1
                }
                v66 = (int)*(float *)&_XMM0;
                *(float *)&v142 = v60;
                if ( (int)*(float *)&_XMM0 > 255 )
                  v66 = 255;
                v67 = v66 < 0;
                v68 = v66;
                v69 = (int)*(float *)&_XMM1;
                if ( v67 )
                  v68 = 0;
                BYTE12(v142) = v68;
                if ( v69 > 255 )
                  v69 = 255;
                v70 = v69;
                if ( v69 < 0 )
                  v70 = 0;
                BYTE13(v142) = v70;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                v72 = (int)*(float *)&_XMM1;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v72 = 255;
                v73 = v72;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v72 < 0 )
                  v73 = 0;
                BYTE14(v142) = v73;
                v75 = (int)*(float *)&_XMM1;
                *((float *)&v142 + 1) = v61;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v75 = 255;
                v76 = v75;
                *((float *)&v142 + 2) = v63;
                if ( v75 < 0 )
                  v76 = 0;
                HIBYTE(v142) = v76;
                if ( v51 == (vec4_t *)&v144 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
                  __debugbreak();
                v77 = (float)((float)((float)((float)((float)(v51->v[1] * orient->axis.m[0].v[1]) + (float)(v51->v[0] * orient->axis.m[0].v[0])) + (float)(v51->v[2] * orient->axis.m[0].v[2])) * v132) * v140) + v60;
                __asm
                {
                  vroundss xmm2, xmm9, xmm3, 1
                  vroundss xmm1, xmm9, xmm3, 1
                }
                v80 = (int)*(float *)&_XMM2;
                if ( (int)*(float *)&_XMM2 > 255 )
                  v80 = 255;
                v67 = v80 < 0;
                v81 = v80;
                v82 = (int)*(float *)&_XMM1;
                if ( v67 )
                  v81 = 0;
                if ( v82 > 255 )
                  v82 = 255;
                LOBYTE(box.halfSize.v[0]) = v81;
                v83 = v82;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v82 < 0 )
                  v83 = 0;
                v85 = (int)*(float *)&_XMM1;
                BYTE1(box.halfSize.v[0]) = v83;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v85 = 255;
                v86 = v85;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v85 < 0 )
                  v86 = 0;
                v88 = (int)*(float *)&_XMM1;
                BYTE2(box.halfSize.x) = v86;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v88 = 255;
                v89 = v88;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v88 < 0 )
                  v89 = 0;
                v91 = (int)*(float *)&_XMM1;
                HIBYTE(box.halfSize.x) = v89;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v91 = 255;
                v92 = v91;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v91 < 0 )
                  v92 = 0;
                BYTE12(v142) = v92;
                v94 = (int)*(float *)&_XMM1;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v94 = 255;
                v67 = v94 < 0;
                v95 = v94;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                v97 = (int)*(float *)&_XMM1;
                if ( v67 )
                  v95 = 0;
                BYTE13(v142) = v95;
                if ( v97 > 255 )
                  v97 = 255;
                v67 = v97 < 0;
                v98 = v97;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                v100 = (int)*(float *)&_XMM1;
                if ( v67 )
                  v98 = 0;
                BYTE14(v142) = v98;
                if ( v100 > 255 )
                  v100 = 255;
                v101 = v100;
                v103 = *(_OWORD *)box.midPoint.v;
                *(float *)&v103 = v77;
                _XMM1 = v103;
                if ( v100 < 0 )
                  v101 = 0;
                __asm
                {
                  vinsertps xmm1, xmm1, xmm4, 10h
                  vinsertps xmm1, xmm1, xmm6, 20h ; ' '
                }
                HIBYTE(v142) = v101;
                v145 = v142;
                *(_OWORD *)box.midPoint.v = _XMM1;
                v146 = _XMM1;
                CG_DebugLine((const vec3_t *)&v145, (const vec3_t *)&v146, &color, depthTest, 2);
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                v107 = (int)*(float *)&_XMM1;
                v108 = (int)*(float *)&_XMM1;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v108 = 255;
                v109 = v108;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                if ( v108 < 0 )
                  v109 = 0;
                v111 = (int)*(float *)&_XMM1;
                BYTE12(v145) = v109;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                v113 = (int)*(float *)&_XMM1;
                v114 = v111;
                if ( v111 > 255 )
                  v114 = 255;
                v67 = v114 < 0;
                v115 = v114;
                v116 = (int)*(float *)&_XMM1;
                if ( v67 )
                  v115 = 0;
                BYTE13(v145) = v115;
                if ( v113 > 255 )
                  v116 = 255;
                v117 = v116;
                if ( v116 < 0 )
                  v117 = 0;
                __asm { vroundss xmm1, xmm9, xmm3, 1 }
                BYTE14(v145) = v117;
                v119 = (int)*(float *)&_XMM1;
                v120 = (int)*(float *)&_XMM1;
                if ( (int)*(float *)&_XMM1 > 255 )
                  v120 = 255;
                v121 = v120;
                if ( v120 < 0 )
                  v121 = 0;
                HIBYTE(v145) = v121;
                if ( v107 > 255 )
                  v107 = 255;
                v122 = v107;
                if ( v107 < 0 )
                  v122 = 0;
                BYTE12(v146) = v122;
                if ( v111 > 255 )
                  v111 = 255;
                v123 = v111;
                *(float *)&v145 = v60 - 5.0;
                if ( v111 < 0 )
                  v123 = 0;
                BYTE13(v146) = v123;
                if ( v113 > 255 )
                  v113 = 255;
                v124 = v113;
                if ( v113 < 0 )
                  v124 = 0;
                BYTE14(v146) = v124;
                if ( v119 > 255 )
                  v119 = 255;
                v125 = v119;
                if ( v119 < 0 )
                  v125 = 0;
                HIBYTE(v146) = v125;
                *((float *)&v145 + 1) = v61;
                *((float *)&v145 + 2) = v62;
                *(float *)&v146 = v60 + 5.0;
                *((float *)&v146 + 1) = v61;
                *((float *)&v146 + 2) = v62;
                CG_DebugLine((const vec3_t *)&v145, (const vec3_t *)&v146, &color, depthTest, 2);
                *((float *)&v145 + 1) = v61 - 5.0;
                *((float *)&v146 + 1) = v61 + 5.0;
                *(float *)&v145 = v60;
                *((float *)&v145 + 2) = v62;
                *(float *)&v146 = v60;
                *((float *)&v146 + 2) = v62;
                CG_DebugLine((const vec3_t *)&v145, (const vec3_t *)&v146, &color, depthTest, 2);
                *((float *)&v145 + 2) = v62 - 5.0;
                *((float *)&v146 + 2) = v62 + 5.0;
                *(float *)&v145 = v60;
                *((float *)&v145 + 1) = v61;
                *(float *)&v146 = v60;
                *((float *)&v146 + 1) = v61;
                CG_DebugLine((const vec3_t *)&v145, (const vec3_t *)&v146, &color, depthTest, 2);
                v49 += v133 * v139;
                ++v48;
                v34 = v134;
                v35 = v135;
                v19 = v136;
                v22 = v137;
                v44 = v128;
                v43 = v130;
                v42 = v129;
              }
              while ( v48 < v12 );
              v47 = v138;
              v46 = v133;
            }
            v47 += v46;
            ++v45;
            v138 = v47;
          }
          while ( v45 < v44 );
        }
        v130 = ++v43;
      }
      while ( v43 < v42 );
    }
  }
}

/*
==============
CG_VectorField_FreeInstanceForFxWithEffectHandle
==============
*/
void CG_VectorField_FreeInstanceForFxWithEffectHandle(unsigned int effectHandle)
{
  unsigned int v1; 
  volatile int *p_inUse; 
  __int64 v3; 

  v1 = 0;
  p_inUse = &s_vectorFieldInstancePool[0].inUse;
  v3 = 0i64;
  do
  {
    if ( *((_DWORD *)p_inUse + 2) == effectHandle )
    {
      CG_Wind_RemoveVectorField(v1);
      if ( ((unsigned __int8)p_inUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_inUse) )
        __debugbreak();
      _InterlockedExchange(p_inUse, 0);
    }
    ++v1;
    ++v3;
    p_inUse += 20;
  }
  while ( v1 < 0xFF );
}

/*
==============
CG_VectorField_FreeInstanceForFxWithHandle
==============
*/
void CG_VectorField_FreeInstanceForFxWithHandle(unsigned __int8 vfHandle)
{
  volatile int *p_inUse; 

  if ( vfHandle == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( vfHandle ) < (unsigned)( ( sizeof( *array_counter( s_vectorFieldInstancePool ) ) + 0 ) )", "vfHandle doesn't index ARRAY_COUNT( s_vectorFieldInstancePool )\n\t%i not in [0, %i)", 255, 255) )
    __debugbreak();
  p_inUse = &s_vectorFieldInstancePool[vfHandle].inUse;
  if ( !*p_inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 285, ASSERT_TYPE_ASSERT, "(s_vectorFieldInstancePool[vfHandle].inUse)", (const char *)&queryFormat, "s_vectorFieldInstancePool[vfHandle].inUse") )
    __debugbreak();
  CG_Wind_RemoveVectorField(vfHandle);
  if ( ((unsigned __int8)p_inUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_vectorFieldInstancePool[vfHandle].inUse) )
    __debugbreak();
  _InterlockedExchange(p_inUse, 0);
}

/*
==============
CG_VectorField_GetEntry
==============
*/
vec4_t *CG_VectorField_GetEntry(const VectorSubField *vf, const unsigned int xCoord, const unsigned int yCoord, const unsigned int zCoord, const unsigned int width, const unsigned int height)
{
  unsigned int v7; 
  unsigned int v9; 
  unsigned int v10; 

  v7 = xCoord + width * (yCoord + height * zCoord);
  if ( v7 >= vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2] )
  {
    v10 = vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2];
    v9 = xCoord + width * (yCoord + height * zCoord);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 27, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2] )", "index doesn't index vf->numEntries[0] * vf->numEntries[1] * vf->numEntries[2]\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return &vf->linearData[v7];
}

/*
==============
CG_VectorField_GetInstance
==============
*/
VectorFieldInstance *CG_VectorField_GetInstance(unsigned __int8 vfHandle)
{
  if ( vfHandle == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( vfHandle ) < (unsigned)( ( sizeof( *array_counter( s_vectorFieldInstancePool ) ) + 0 ) )", "vfHandle doesn't index ARRAY_COUNT( s_vectorFieldInstancePool )\n\t%i not in [0, %i)", 255, 255) )
    __debugbreak();
  return &s_vectorFieldInstancePool[vfHandle];
}

/*
==============
CG_VectorField_GetInstancePool
==============
*/
VectorFieldInstance *CG_VectorField_GetInstancePool()
{
  return s_vectorFieldInstancePool;
}

/*
==============
CG_VectorField_GetIntersectingInstances
==============
*/
__int64 CG_VectorField_GetIntersectingInstances(const vec3_t *pos, float radius, unsigned __int8 *destInstances, unsigned int maxDestInstances)
{
  __int64 v4; 
  unsigned int i; 
  VectorFieldInstance *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float sizeScale; 
  float v14; 

  v4 = 0i64;
  for ( i = 0; i < 0xFF; ++i )
  {
    v7 = &s_vectorFieldInstancePool[i];
    if ( v7->inUse )
    {
      v8 = pos->v[0] - v7->orient.origin.v[0];
      v9 = pos->v[1] - v7->orient.origin.v[1];
      v10 = pos->v[2] - v7->orient.origin.v[2];
      v11 = (float)((float)(v9 * v7->orient.axis.m[1].v[0]) + (float)(v8 * v7->orient.axis.m[0].v[0])) + (float)(v10 * v7->orient.axis.m[2].v[0]);
      v12 = (float)((float)(v9 * v7->orient.axis.m[1].v[1]) + (float)(v8 * v7->orient.axis.m[0].v[1])) + (float)(v10 * v7->orient.axis.m[2].v[1]);
      sizeScale = v7->sizeScale;
      v14 = (float)((float)(v9 * v7->orient.axis.m[1].v[2]) + (float)(v8 * v7->orient.axis.m[0].v[2])) + (float)(v10 * v7->orient.axis.m[2].v[2]);
      if ( v11 < (float)((float)(sizeScale * v7->vf->worldBounds.maxs.v[0]) + radius) && v12 < (float)((float)(sizeScale * v7->vf->worldBounds.maxs.v[1]) + radius) && v14 < (float)((float)(sizeScale * v7->vf->worldBounds.maxs.v[2]) + radius) && v11 > (float)((float)(sizeScale * v7->vf->worldBounds.mins.v[0]) - radius) && v12 > (float)((float)(sizeScale * v7->vf->worldBounds.mins.v[1]) - radius) && v14 > (float)((float)(sizeScale * v7->vf->worldBounds.mins.v[2]) - radius) )
      {
        if ( (unsigned int)v4 >= maxDestInstances )
          return (unsigned int)v4;
        destInstances[v4] = i;
        v4 = (unsigned int)(v4 + 1);
      }
    }
  }
  return (unsigned int)v4;
}

/*
==============
CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius
==============
*/
__int64 CG_VectorField_SampleFoliagePosAgainstInstancesWithRadius(const CapsuleBounds *const cpBounds, vec3_t *outSample, const unsigned int numInstances, const unsigned __int8 *const samplers, VectorFieldType filterType)
{
  __int64 v5; 
  const unsigned __int8 *v6; 
  unsigned int v9; 
  __int64 v10; 
  VectorFieldInstance *v11; 
  float v13; 
  __m128 v17; 
  float v18; 
  __m128 v22; 
  float v23; 
  __m128 v27; 
  __int128 v29; 
  __m128 v34; 
  __m128 v35; 
  bool v46; 
  int v50; 
  vec3_t pos; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 

  v5 = numInstances;
  v6 = samplers;
  _R12 = cpBounds;
  if ( !samplers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 793, ASSERT_TYPE_ASSERT, "(samplers)", (const char *)&queryFormat, "samplers") )
    __debugbreak();
  v9 = 0;
  *(_QWORD *)outSample->v = 0i64;
  outSample->v[2] = 0.0;
  if ( (_DWORD)v5 )
  {
    v10 = v5;
    do
    {
      v11 = &s_vectorFieldInstancePool[*v6];
      if ( v11->inUse )
      {
        _RAX = v11->vf;
        v13 = _R12->start.v[0];
        __asm
        {
          vbroadcastss xmm6, dword ptr [r12+1Ch]
          vbroadcastss xmm7, dword ptr [r12+18h]
        }
        v53.m128_i32[3] = 0;
        v17 = v53;
        v17.m128_f32[0] = v13;
        _XMM10 = v17;
        v18 = _R12->segTangent.v[0];
        __asm
        {
          vinsertps xmm10, xmm10, dword ptr [r12+4], 10h
          vinsertps xmm10, xmm10, dword ptr [r12+8], 20h ; ' '
        }
        v54.m128_i32[3] = 0;
        v22 = v54;
        v22.m128_f32[0] = v18;
        _XMM9 = v22;
        v23 = v11->orient.origin.v[0];
        __asm
        {
          vinsertps xmm9, xmm9, dword ptr [r12+10h], 10h
          vinsertps xmm9, xmm9, dword ptr [r12+14h], 20h ; ' '
        }
        v55.m128_i32[3] = 0;
        v27 = v55;
        v27.m128_f32[0] = v23;
        _XMM5 = v27;
        v29 = LODWORD(_RAX->worldBounds.maxs.v[1]);
        *(float *)&v29 = _RAX->worldBounds.maxs.v[1] - _RAX->worldBounds.mins.v[1];
        _XMM3 = v29;
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 10h
          vinsertps xmm5, xmm5, dword ptr [rbx+10h], 20h ; ' '
          vmaxss  xmm4, xmm3, xmm2
          vmaxss  xmm2, xmm4, xmm1
        }
        v34 = _XMM2;
        v34.m128_f32[0] = (float)(_XMM2.m128_f32[0] * v11->sizeScale) * 0.5;
        v35 = _mm128_add_ps(_mm_shuffle_ps(v34, v34, 0), _XMM6);
        _XMM1 = _mm128_mul_ps(_mm128_sub_ps(_XMM5, _XMM10), _XMM9);
        __asm
        {
          vinsertps xmm2, xmm1, xmm1, 8
          vhaddps xmm0, xmm2, xmm2
          vhaddps xmm6, xmm0, xmm0
        }
        _mm128_sub_ps((__m128)0i64, v35);
        __asm
        {
          vcmpltps xmm1, xmm6, xmm0
          vmovmskps eax, xmm1
        }
        v53 = _XMM10;
        v54 = _XMM9;
        v55 = _XMM5;
        if ( ((unsigned __int8)_RAX & 0xF) != 15 )
        {
          _XMM0 = _mm128_add_ps(_XMM7, v35);
          __asm
          {
            vcmpltps xmm1, xmm0, xmm6
            vmovmskps eax, xmm1
          }
          if ( (_EAX & 0xF) != 15 )
          {
            __asm
            {
              vcmpltps xmm0, xmm7, xmm8
              vmovmskps eax, xmm0
            }
            if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
              __debugbreak();
            v46 = v11->isRotated == 0;
            __asm
            {
              vmaxps  xmm0, xmm6, xmm8
              vminps  xmm1, xmm0, xmm7
            }
            _XMM3 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM9), _XMM10);
            pos.v[0] = _XMM3.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rsp+118h+pos+4], xmm3, 1
              vextractps dword ptr [rsp+118h+pos+8], xmm3, 2
            }
            if ( v46 )
              v50 = CG_VectorField_SamplePosAgainstSubFields_0_(v11, &pos, outSample, filterType);
            else
              v50 = CG_VectorField_SamplePosAgainstSubFields_1_(v11, &pos, outSample, filterType);
            v9 |= v50;
          }
        }
      }
      ++v6;
      --v10;
    }
    while ( v10 );
  }
  return v9;
}

/*
==============
CG_VectorField_SamplePosAgainstInstances
==============
*/
__int64 CG_VectorField_SamplePosAgainstInstances(const vec3_t *pos, vec3_t *outSample, unsigned int numInstances, unsigned __int8 *samplers, VectorFieldType filterType)
{
  unsigned int v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  VectorFieldInstance *v11; 
  const VectorField *vf; 
  int v13; 
  __int64 v14; 
  float **v15; 
  const dvar_t *v16; 
  float sizeScale; 
  const orientation_t *p_orient; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float *v32; 
  float v33; 
  float strengthScale; 
  float v35; 
  float v36; 
  char v38; 
  unsigned int v39; 
  unsigned __int8 *v41; 
  vec3_t outSamplea; 

  v41 = samplers;
  if ( !samplers )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 718, ASSERT_TYPE_ASSERT, "(samplers)", (const char *)&queryFormat, "samplers") )
      __debugbreak();
    samplers = NULL;
  }
  v8 = 0;
  v9 = 0;
  v39 = 0;
  *(_QWORD *)outSample->v = 0i64;
  outSample->v[2] = 0.0;
  v38 = 0;
  if ( !numInstances )
    return v8;
  do
  {
    v10 = samplers[v9];
    v11 = &s_vectorFieldInstancePool[v10];
    if ( !v11->inUse )
      goto LABEL_40;
    if ( !v11->isRotated )
    {
      v8 |= CG_VectorField_SamplePosAgainstSubFields_0_(&s_vectorFieldInstancePool[v10], pos, outSample, filterType);
      goto LABEL_39;
    }
    vf = v11->vf;
    v13 = 0;
    v14 = 0i64;
    if ( !v11->vf->numSubFields )
      goto LABEL_37;
    do
    {
      v15 = (float **)&vf->subFields[v14];
      if ( *((_DWORD *)v15 + 15) != filterType )
        goto LABEL_35;
      if ( ((_BYTE)v15[7] & 1) == 0 )
      {
        v16 = DVARBOOL_cg_vectorFieldsForceUniform;
        if ( !DVARBOOL_cg_vectorFieldsForceUniform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsForceUniform") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( !v16->current.enabled )
        {
          sizeScale = v11->sizeScale;
          p_orient = &v11->orient;
          if ( v11->isRotated )
            v19 = CG_VectorField_SamplePosFromSubField_1_(p_orient, sizeScale, (const VectorSubField *)v15, pos, &outSamplea);
          else
            v19 = CG_VectorField_SamplePosFromSubField_0_(p_orient, sizeScale, (const VectorSubField *)v15, pos, &outSamplea);
          goto LABEL_34;
        }
      }
      v20 = v11->sizeScale;
      v21 = pos->v[0];
      v22 = pos->v[2];
      if ( v11->isRotated )
      {
        v23 = v21 - v11->orient.origin.v[0];
        v24 = v22 - v11->orient.origin.v[2];
        v25 = pos->v[1] - v11->orient.origin.v[1];
        v26 = (float)((float)(v25 * v11->orient.axis.m[1].v[0]) + (float)(v23 * v11->orient.axis.m[0].v[0])) + (float)(v24 * v11->orient.axis.m[2].v[0]);
        v27 = (float)((float)(v23 * v11->orient.axis.m[0].v[1]) + (float)(v25 * v11->orient.axis.m[1].v[1])) + (float)(v24 * v11->orient.axis.m[2].v[1]);
        v28 = (float)((float)(v23 * v11->orient.axis.m[0].v[2]) + (float)(v25 * v11->orient.axis.m[1].v[2])) + (float)(v24 * v11->orient.axis.m[2].v[2]);
        if ( v26 > (float)(v20 * *((float *)v15 + 5)) || v27 > (float)(v20 * *((float *)v15 + 6)) || v28 > (float)(v20 * *((float *)v15 + 7)) || v26 < (float)(v20 * *((float *)v15 + 2)) || v27 < (float)(v20 * *((float *)v15 + 3)) || v28 < (float)(v20 * *((float *)v15 + 4)) )
          goto LABEL_33;
        Vec3Rotate((const vec3_t *)*v15, &v11->orient.axis, &outSamplea);
        v19 = 1;
      }
      else
      {
        v29 = v21 - v11->orient.origin.v[0];
        v30 = pos->v[1] - v11->orient.origin.v[1];
        v31 = v22 - v11->orient.origin.v[2];
        if ( v29 > (float)(v20 * *((float *)v15 + 5)) || v30 > (float)(v20 * *((float *)v15 + 6)) || v31 > (float)(v20 * *((float *)v15 + 7)) || v29 < (float)(v20 * *((float *)v15 + 2)) || v30 < (float)(v20 * *((float *)v15 + 3)) || v31 < (float)(v20 * *((float *)v15 + 4)) )
        {
LABEL_33:
          outSamplea.v[0] = 0.0;
          outSamplea.v[2] = 0.0;
          outSamplea.v[1] = 0.0;
          v19 = 0;
          goto LABEL_34;
        }
        v32 = *v15;
        v33 = (*v15)[1];
        outSamplea.v[0] = **v15;
        outSamplea.v[2] = v32[2];
        outSamplea.v[1] = v33;
        v19 = 1;
      }
LABEL_34:
      strengthScale = v11->strengthScale;
      v35 = strengthScale * outSamplea.v[1];
      outSample->v[0] = (float)(strengthScale * outSamplea.v[0]) + outSample->v[0];
      v36 = strengthScale * outSamplea.v[2];
      outSample->v[1] = v35 + outSample->v[1];
      outSample->v[2] = v36 + outSample->v[2];
      v13 |= v19;
LABEL_35:
      vf = v11->vf;
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < v11->vf->numSubFields );
    v8 = v39;
    v9 = v38;
LABEL_37:
    v8 |= v13;
LABEL_39:
    v39 = v8;
LABEL_40:
    samplers = v41;
    v38 = ++v9;
  }
  while ( v9 < numInstances );
  return v8;
}

/*
==============
CG_VectorField_TransformUpdated
==============
*/
_BOOL8 CG_VectorField_TransformUpdated(float vf_sizesScale, const orientation_t *vf_orient, float fx_sizesScale, const orientation_t *fx_orient)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(vf_sizesScale - fx_sizesScale) & _xmm) >= 0.001 || !VecNCompareCustomEpsilon(vf_orient->origin.v, fx_orient->origin.v, 0.001, 3) || !VecNCompareCustomEpsilon((const float *)&vf_orient->axis, (const float *)&fx_orient->axis, 0.001, 3) || !VecNCompareCustomEpsilon(vf_orient->axis.m[1].v, fx_orient->axis.m[1].v, 0.001, 3) || !VecNCompareCustomEpsilon(vf_orient->axis.m[2].v, fx_orient->axis.m[2].v, 0.001, 3);
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithEffectHandle
==============
*/
void CG_VectorField_UpdateInstanceForFxWithEffectHandle(unsigned int effectHandle, const orientation_t *orient, float strengthScale, float sizeScale, int isRotated)
{
  float *v7; 
  unsigned int i; 
  float *v9; 
  BOOL v10; 
  unsigned __int8 v11; 
  float v12; 
  unsigned __int8 v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 

  if ( sizeScale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 377, ASSERT_TYPE_ASSERT, "(sizeScale)", (const char *)&queryFormat, "sizeScale") )
    __debugbreak();
  v7 = &s_vectorFieldInstancePool[0].orient.axis.m[0].v[1];
  for ( i = 0; i < 0xFF; ++i )
  {
    v9 = (float *)*((_QWORD *)v7 - 3);
    *(v7 - 4) = orient->origin.v[0] + v9[10];
    *(v7 - 3) = v9[11] + orient->origin.v[1];
    *(v7 - 2) = v9[12] + orient->origin.v[2];
    if ( *((_DWORD *)v7 + 12) == effectHandle && *((_DWORD *)v7 + 10) )
    {
      v10 = CG_VectorField_TransformUpdated(v7[9], (const orientation_t *)(v7 - 4), sizeScale, orient);
      if ( v10 )
      {
        v11 = truncate_cast<unsigned char,unsigned int>(i);
        CG_Wind_RemoveVectorField(v11);
      }
      *((_DWORD *)v7 + 11) = isRotated;
      if ( isRotated )
      {
        *(v7 - 1) = orient->axis.m[0].v[0];
        *v7 = orient->axis.m[0].v[1];
        v7[1] = orient->axis.m[0].v[2];
        v7[2] = orient->axis.m[1].v[0];
        v7[3] = orient->axis.m[1].v[1];
        v7[4] = orient->axis.m[1].v[2];
        v7[5] = orient->axis.m[2].v[0];
        v7[6] = orient->axis.m[2].v[1];
        v12 = orient->axis.m[2].v[2];
      }
      else
      {
        *(_QWORD *)(v7 - 1) = 1065353216i64;
        *(_QWORD *)(v7 + 1) = 0i64;
        *(_QWORD *)(v7 + 3) = 1065353216i64;
        *(_QWORD *)(v7 + 5) = 0i64;
        v12 = FLOAT_1_0;
      }
      v7[7] = v12;
      v7[8] = strengthScale;
      v7[9] = sizeScale;
      if ( v10 )
      {
        v13 = truncate_cast<unsigned char,unsigned int>(i);
        CG_Wind_AddVectorField(v13);
      }
      v14 = DVARINT_cg_vectorFieldsDraw;
      if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.integer )
      {
        v15 = DVARINT_cg_vectorFieldsDraw;
        if ( !DVARINT_cg_vectorFieldsDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vectorFieldsDraw") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        CG_VectorField_DrawField((const VectorFieldInstance *)(v7 - 6), v15->current.integer > 1);
      }
    }
    v7 += 20;
  }
}

/*
==============
CG_VectorField_UpdateInstanceForFxWithHandle
==============
*/
void CG_VectorField_UpdateInstanceForFxWithHandle(unsigned __int8 vfHandle, const orientation_t *orient, float strengthScale, float sizeScale, bool isRotated)
{
  BOOL v8; 
  const VectorField *vf; 
  float v11; 

  if ( vfHandle == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( vfHandle ) < (unsigned)( ( sizeof( *array_counter( s_vectorFieldInstancePool ) ) + 0 ) )", "vfHandle doesn't index ARRAY_COUNT( s_vectorFieldInstancePool )\n\t%i not in [0, %i)", 255, 255) )
    __debugbreak();
  if ( !s_vectorFieldInstancePool[vfHandle].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vectorfield.cpp", 332, ASSERT_TYPE_ASSERT, "(s_vectorFieldInstancePool[vfHandle].inUse)", (const char *)&queryFormat, "s_vectorFieldInstancePool[vfHandle].inUse") )
    __debugbreak();
  v8 = CG_VectorField_TransformUpdated(s_vectorFieldInstancePool[vfHandle].sizeScale, &s_vectorFieldInstancePool[vfHandle].orient, sizeScale, orient);
  if ( v8 )
    CG_Wind_RemoveVectorField(vfHandle);
  _XMM3 = LODWORD(FLOAT_1_0);
  s_vectorFieldInstancePool[vfHandle].isRotated = isRotated;
  vf = s_vectorFieldInstancePool[vfHandle].vf;
  s_vectorFieldInstancePool[vfHandle].orient.origin.v[0] = orient->origin.v[0] + vf->localOrigin.v[0];
  s_vectorFieldInstancePool[vfHandle].orient.origin.v[1] = vf->localOrigin.v[1] + orient->origin.v[1];
  s_vectorFieldInstancePool[vfHandle].orient.origin.v[2] = vf->localOrigin.v[2] + orient->origin.v[2];
  if ( s_vectorFieldInstancePool[vfHandle].isRotated )
  {
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v[0] = orient->axis.m[0].v[0];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v[1] = orient->axis.m[0].v[1];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v[2] = orient->axis.m[0].v[2];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[1].v[0] = orient->axis.m[1].v[0];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[1].v[1] = orient->axis.m[1].v[1];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[1].v[2] = orient->axis.m[1].v[2];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[2].v[0] = orient->axis.m[2].v[0];
    s_vectorFieldInstancePool[vfHandle].orient.axis.m[2].v[1] = orient->axis.m[2].v[1];
    v11 = orient->axis.m[2].v[2];
  }
  else
  {
    *(_QWORD *)s_vectorFieldInstancePool[vfHandle].orient.axis.m[0].v = 1065353216i64;
    *(_QWORD *)&s_vectorFieldInstancePool[vfHandle].orient.axis.row0.z = 0i64;
    *(_QWORD *)&s_vectorFieldInstancePool[vfHandle].orient.axis.row1.y = 1065353216i64;
    *(_QWORD *)s_vectorFieldInstancePool[vfHandle].orient.axis.row2.v = 0i64;
    v11 = FLOAT_1_0;
  }
  s_vectorFieldInstancePool[vfHandle].orient.axis.m[2].v[2] = v11;
  _XMM0 = *(unsigned __int64 *)&DOUBLE_0_000001;
  __asm
  {
    vcmpltsd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm6, xmm2
  }
  s_vectorFieldInstancePool[vfHandle].sizeScale = *(float *)&_XMM0;
  s_vectorFieldInstancePool[vfHandle].strengthScale = strengthScale;
  if ( v8 )
    CG_Wind_AddVectorField(vfHandle);
}

