/*
==============
BgStepSlideMove::StepSlideMove
==============
*/

void __fastcall BgStepSlideMove::StepSlideMove(BgStepSlideMove *this)
{
  ?StepSlideMove@BgStepSlideMove@@QEAAXXZ(this);
}

/*
==============
BgStepSlideMove::SlideMove
==============
*/

bool __fastcall BgStepSlideMove::SlideMove(BgStepSlideMove *this)
{
  return ?SlideMove@BgStepSlideMove@@QEAA_NXZ(this);
}

/*
==============
BgStepSlideMove::~BgStepSlideMove
==============
*/

void __fastcall BgStepSlideMove::~BgStepSlideMove(BgStepSlideMove *this)
{
  ??1BgStepSlideMove@@UEAA@XZ(this);
}

/*
==============
BgStepSlideMove::~BgStepSlideMove
==============
*/
void BgStepSlideMove::~BgStepSlideMove(BgStepSlideMove *this)
{
  this->__vftable = (BgStepSlideMove_vtbl *)&BgStepSlideMove::`vftable';
}

/*
==============
BgStepSlideMove::SlideMove
==============
*/
bool BgStepSlideMove::SlideMove(BgStepSlideMove *this)
{
  bool v2; 
  vec3_t *velocity; 
  __int128 deltaTime_low; 
  float v5; 
  int *groundNormal; 
  float *v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  vec3_t *v11; 
  int v12; 
  __int128 v13; 
  __int128 v14; 
  float *v18; 
  vec3_t *v19; 
  vec3_t *origin; 
  float v21; 
  BgStepSlideMove_vtbl *v22; 
  float fraction; 
  vec3_t *v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  float v28; 
  int v29; 
  __int64 v30; 
  float *v31; 
  vec3_t *v32; 
  __int64 v33; 
  int v34; 
  vec3_t *v35; 
  float *v36; 
  const vec3_t *v37; 
  float v38; 
  float v39; 
  float v40; 
  int v41; 
  float *v42; 
  __int64 v43; 
  char *v44; 
  const vec3_t *v45; 
  int *v46; 
  float v47; 
  float v48; 
  float v49; 
  vec3_t *v50; 
  float *v51; 
  float v52; 
  __int128 v53; 
  float v54; 
  float v55; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  __int64 v64; 
  vec3_t *v65; 
  vec3_t *v66; 
  vec3_t *v68; 
  bool *inSolid; 
  int v70; 
  int v71; 
  int v72; 
  float *v73; 
  float v74; 
  float v75; 
  __int64 v76; 
  double v77; 
  __int64 v78; 
  double v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  trace_t trace; 
  char v85[16]; 
  int v86; 
  int v87; 
  int v88; 
  char v89; 

  if ( !this->velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 27, ASSERT_TYPE_ASSERT, "(this->velocity)", (const char *)&queryFormat, "this->velocity") )
    __debugbreak();
  if ( !this->origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 28, ASSERT_TYPE_ASSERT, "(this->origin)", (const char *)&queryFormat, "this->origin") )
    __debugbreak();
  if ( this->hasGround && !this->groundNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 29, ASSERT_TYPE_ASSERT, "(!this->hasGround || this->groundNormal)", (const char *)&queryFormat, "!this->hasGround || this->groundNormal") )
    __debugbreak();
  v2 = !this->gravity;
  velocity = this->velocity;
  deltaTime_low = LODWORD(this->deltaTime);
  this->bumpEntityNum = 2047;
  v77 = *(double *)velocity->v;
  v5 = velocity->v[2];
  *(float *)&v78 = v5;
  if ( !v2 )
  {
    *(float *)&v78 = v5 - (float)(*(float *)&deltaTime_low * 800.0);
    velocity->v[2] = (float)(*(float *)&v78 + velocity->v[2]) * 0.5;
    if ( !this->hasGround )
    {
LABEL_16:
      v8 = 1;
      v7 = (float *)&v86;
      goto LABEL_17;
    }
    this->ClipVelocity(this, this->velocity, this->groundNormal, this->velocity);
  }
  if ( !this->hasGround )
    goto LABEL_16;
  groundNormal = (int *)this->groundNormal;
  v7 = (float *)&v89;
  v86 = *groundNormal;
  v87 = groundNormal[1];
  v88 = groundNormal[2];
  v8 = 2;
LABEL_17:
  v9 = v8;
  v10 = 0;
  v11 = this->velocity;
  v12 = v9;
  v71 = 0;
  v13 = LODWORD(v11->v[0]);
  v14 = v13;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v11->v[1] * v11->v[1])) + (float)(v11->v[2] * v11->v[2]));
  _XMM4 = v14;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm15, xmm0
  }
  *v7 = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  v7[1] = (float)(1.0 / *(float *)&_XMM0) * v11->v[1];
  v18 = (float *)(&v88 + 3 * v9);
  v7[2] = (float)(1.0 / *(float *)&_XMM0) * v11->v[2];
  while ( 1 )
  {
    v19 = this->velocity;
    origin = this->origin;
    v81 = (float)(*(float *)&deltaTime_low * v19->v[0]) + origin->v[0];
    v82 = (float)(*(float *)&deltaTime_low * v19->v[1]) + origin->v[1];
    v21 = (float)(*(float *)&deltaTime_low * v19->v[2]) + origin->v[2];
    v22 = this->__vftable;
    v83 = v21;
    v22->TraceCapsule(this, &trace, origin, (const vec3_t *)&v81);
    if ( trace.allsolid )
    {
      if ( !this->zerog )
        this->velocity->v[2] = 0.0;
      inSolid = this->inSolid;
      if ( inSolid )
        *inSolid = 1;
      return 1;
    }
    fraction = trace.fraction;
    if ( trace.fraction > 0.0 )
    {
      v24 = this->origin;
      v24->v[0] = (float)((float)(v81 - v24->v[0]) * trace.fraction) + v24->v[0];
      v24->v[1] = (float)((float)(v82 - v24->v[1]) * fraction) + v24->v[1];
      v24->v[2] = (float)((float)(v83 - v24->v[2]) * fraction) + v24->v[2];
      fraction = trace.fraction;
    }
    if ( fraction == 1.0 )
    {
LABEL_57:
      if ( this->gravity )
      {
        v66 = this->velocity;
        *(double *)v66->v = v77;
        v66->v[2] = *(float *)&v78;
      }
      return v10 != 0;
    }
    v25 = deltaTime_low;
    *(float *)&v25 = *(float *)&deltaTime_low - (float)(fraction * *(float *)&deltaTime_low);
    deltaTime_low = v25;
    if ( !v10 )
      this->bumpEntityNum = Trace_GetEntityHitId(&trace);
    if ( v9 >= 5 )
    {
      v68 = this->velocity;
      *(_QWORD *)v68->v = 0i64;
      v68->v[2] = 0.0;
      return 1;
    }
    v26 = trace.normal.v[2];
    v27 = trace.normal.v[1];
    v28 = trace.normal.v[0];
    v29 = 0;
    v30 = 0i64;
    if ( v9 > 0 )
    {
      v31 = (float *)&v88;
      while ( (float)((float)((float)(trace.normal.v[1] * *(v31 - 1)) + (float)(trace.normal.v[0] * *(v31 - 2))) + (float)(trace.normal.v[2] * *v31)) <= 0.99000001 )
      {
        ++v29;
        ++v30;
        v31 += 3;
        if ( v30 >= v9 )
          goto LABEL_31;
      }
      this->ClipVelocity(this, this->velocity, &trace.normal, this->velocity);
      v32 = this->velocity;
      v32->v[0] = trace.normal.v[0] + v32->v[0];
      v32->v[1] = trace.normal.v[1] + v32->v[1];
      v32->v[2] = trace.normal.v[2] + v32->v[2];
      v26 = trace.normal.v[2];
      v27 = trace.normal.v[1];
      v28 = trace.normal.v[0];
    }
LABEL_31:
    if ( v29 >= v12 )
      break;
LABEL_56:
    v10 = v71 + 1;
    v71 = v10;
    if ( v10 >= 4 )
      goto LABEL_57;
  }
  *(v18 - 2) = v28;
  *(v18 - 1) = v27;
  *v18 = v26;
  ++v12;
  v73 = v18 + 3;
  ++v9;
  v33 = 0i64;
  v72 = v12;
  v34 = 0;
  if ( v9 <= 0 )
  {
LABEL_55:
    v18 = v73;
    goto LABEL_56;
  }
  v35 = this->velocity;
  v36 = (float *)&v88;
  while ( (float)((float)((float)(v35->v[0] * *(v36 - 2)) + (float)(v35->v[1] * *(v36 - 1))) + (float)(v35->v[2] * *v36)) >= 0.1 )
  {
    ++v34;
    ++v33;
    v36 += 3;
    if ( v33 >= v9 )
      goto LABEL_55;
  }
  v37 = (const vec3_t *)(&v86 + 3 * v34);
  this->ClipVelocity(this, v35, v37, (vec3_t *)&v74);
  this->ClipVelocity(this, (const vec3_t *)&v77, v37, (vec3_t *)&v79);
  v38 = *(float *)&v76;
  v39 = v75;
  v40 = v74;
  v41 = 0;
  v42 = (float *)&v87;
  v70 = 0;
  v43 = 0i64;
  while ( 2 )
  {
    if ( v43 == v33 || (v44 = (char *)(v42 - 1), (float)((float)((float)(v39 * *v42) + (float)(v40 * *(v42 - 1))) + (float)(v38 * v42[1])) >= 0.1) )
    {
LABEL_53:
      ++v41;
      ++v43;
      v42 += 3;
      v70 = v41;
      if ( v43 >= v9 )
      {
        v65 = this->velocity;
        v12 = v72;
        v65->v[0] = v40;
        v65->v[1] = v75;
        v65->v[2] = *(float *)&v76;
        v77 = v79;
        *(float *)&v78 = v80;
        goto LABEL_55;
      }
      continue;
    }
    break;
  }
  v45 = (const vec3_t *)(&v86 + 3 * v41);
  this->ClipVelocity(this, (const vec3_t *)&v74, v45, (vec3_t *)&v74);
  this->ClipVelocity(this, (const vec3_t *)&v79, v45, (vec3_t *)&v79);
  v39 = v75;
  v40 = v74;
  v38 = *(float *)&v76;
  v46 = &v86 + 3 * v33;
  if ( (float)((float)((float)(v75 * *((float *)&v87 + 3 * v33)) + (float)(v74 * *(float *)v46)) + (float)(*(float *)&v76 * *((float *)&v88 + 3 * v33))) >= 0.0 )
  {
LABEL_52:
    v41 = v70;
    goto LABEL_53;
  }
  if ( v46 == (int *)v85 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v44 == v85 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v47 = *((float *)v46 + 1);
  v48 = v42[1];
  v49 = *((float *)v46 + 2);
  v50 = this->velocity;
  v51 = (float *)&v88;
  v52 = (float)(v47 * v48) - (float)(*v42 * v49);
  v53 = LODWORD(v49);
  v54 = (float)(v49 * *(float *)v44) - (float)(v48 * *(float *)v46);
  v55 = (float)(*v42 * *(float *)v46) - (float)(v47 * *(float *)v44);
  *(float *)&v53 = fsqrt((float)((float)(v54 * v54) + (float)(v52 * v52)) + (float)(v55 * v55));
  _XMM3 = v53;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm15, xmm0
  }
  v59 = v52 * (float)(1.0 / *(float *)&_XMM0);
  v60 = v54 * (float)(1.0 / *(float *)&_XMM0);
  v61 = v55 * (float)(1.0 / *(float *)&_XMM0);
  v62 = (float)((float)(v60 * v50->v[1]) + (float)(v59 * v50->v[0])) + (float)(v61 * v50->v[2]);
  v63 = (float)((float)(v60 * *((float *)&v77 + 1)) + (float)(v59 * *(float *)&v77)) + (float)(v61 * *(float *)&v78);
  v40 = v62 * v59;
  v39 = v60 * v62;
  v38 = v62 * v61;
  *(float *)&v79 = v63 * v59;
  v80 = v63 * v61;
  v74 = v62 * v59;
  v75 = v60 * v62;
  *(float *)&v76 = v62 * v61;
  *((float *)&v79 + 1) = v60 * v63;
  v64 = 0i64;
  while ( v64 == v33 || v64 == v43 || (float)((float)((float)(v40 * *(v51 - 2)) + (float)(v39 * *(v51 - 1))) + (float)((float)(v62 * v61) * *v51)) >= 0.1 )
  {
    ++v64;
    v51 += 3;
    if ( v64 >= v9 )
      goto LABEL_52;
  }
  *(_QWORD *)v50->v = 0i64;
  v50->v[2] = 0.0;
  return 1;
}

/*
==============
BgStepSlideMove::StepSlideMove
==============
*/
void BgStepSlideMove::StepSlideMove(BgStepSlideMove *this)
{
  __int128 v1; 
  vec3_t *origin; 
  float v4; 
  vec3_t *velocity; 
  float v6; 
  float v7; 
  float v8; 
  BgStepSlideMove_vtbl *v9; 
  BgStepSlideMove_vtbl *v10; 
  vec3_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t *v15; 
  vec3_t *v16; 
  BgStepSlideMove_vtbl *v17; 
  vec3_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  int v29[4]; 
  int v30[12]; 
  char v31; 
  __int128 v32; 

  if ( !this->velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 195, ASSERT_TYPE_ASSERT, "(this->velocity)", (const char *)&queryFormat, "this->velocity") )
    __debugbreak();
  if ( !this->origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_stepslide.cpp", 196, ASSERT_TYPE_ASSERT, "(this->origin)", (const char *)&queryFormat, "this->origin") )
    __debugbreak();
  origin = this->origin;
  v20 = origin->v[0];
  v21 = origin->v[1];
  v4 = origin->v[2];
  velocity = this->velocity;
  v22 = v4;
  v6 = velocity->v[0];
  v7 = velocity->v[1];
  v8 = velocity->v[2];
  if ( BgStepSlideMove::SlideMove(this) )
  {
    v9 = this->__vftable;
    v23 = v20;
    v24 = v21;
    v25 = v22 - 18.0;
    v9->TraceCapsule(this, (trace_t *)v29, (const vec3_t *)&v20, (const vec3_t *)&v23);
    if ( v8 <= 0.0 || *(float *)v29 != 1.0 && *(float *)&v30[2] >= 0.69999999 )
    {
      v10 = this->__vftable;
      v26 = v20;
      v27 = v21;
      v28 = v22 + 18.0;
      v10->TraceCapsule(this, (trace_t *)v29, (const vec3_t *)&v20, (const vec3_t *)&v26);
      if ( !v31 )
      {
        v11 = this->origin;
        v32 = v1;
        v12 = (float)((float)(v26 - v20) * *(float *)v29) + v20;
        v13 = (float)((float)(v27 - v21) * *(float *)v29) + v21;
        v14 = (float)((float)(v28 - v22) * *(float *)v29) + v22;
        v11->v[2] = v14;
        v11->v[0] = v12;
        v11->v[1] = v13;
        v15 = this->velocity;
        v15->v[0] = v6;
        v15->v[1] = v7;
        v15->v[2] = v8;
        BgStepSlideMove::SlideMove(this);
        v16 = this->origin;
        v17 = this->__vftable;
        v23 = v16->v[0];
        v24 = v16->v[1];
        v25 = (float)(v22 - v14) + v16->v[2];
        v17->TraceCapsule(this, (trace_t *)v29, v16, (const vec3_t *)&v23);
        if ( !v31 )
        {
          v18 = this->origin;
          v19 = *(float *)v29;
          v18->v[0] = (float)((float)(v23 - v18->v[0]) * *(float *)v29) + v18->v[0];
          v18->v[1] = (float)((float)(v24 - v18->v[1]) * v19) + v18->v[1];
          v18->v[2] = (float)((float)(v25 - v18->v[2]) * v19) + v18->v[2];
        }
        if ( *(float *)v29 < 1.0 )
          this->ClipVelocity(this, this->velocity, (const vec3_t *)v30, this->velocity);
      }
    }
  }
}

