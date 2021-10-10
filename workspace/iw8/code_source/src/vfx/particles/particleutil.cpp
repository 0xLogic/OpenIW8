/*
==============
Particle_DebugAxis
==============
*/

void __fastcall Particle_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, const vec4_t *colorX, const vec4_t *colorY, const vec4_t *colorZ, float length, const bool depthTest, int duration)
{
  ?Particle_DebugAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@AEBTvec4_t@@22M_NH@Z(axes, pos, colorX, colorY, colorZ, length, depthTest, duration);
}

/*
==============
Particle_AssetFixup
==============
*/

void __fastcall Particle_AssetFixup(ParticleSystemDef *pSystem)
{
  ?Particle_AssetFixup@@YAXPEAUParticleSystemDef@@@Z(pSystem);
}

/*
==============
Particle_DebugAxis
==============
*/

void __fastcall Particle_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const bool depthTest, int duration)
{
  ?Particle_DebugAxis@@YAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@M_NH@Z(axes, pos, length, depthTest, duration);
}

/*
==============
Particle_AssetFixup
==============
*/
void Particle_AssetFixup(ParticleSystemDef *pSystem)
{
  ParticleSystemDef *v1; 
  const ParticleModuleUpdateData *UpdateData; 
  int v3; 
  const ParticleModuleUpdateData *v4; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  ParticleEmitterDef *emitterDefs; 
  bool v9; 
  int *v10; 
  __int64 v11; 
  _QWORD *v12; 
  __int64 i; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int16 *v17; 
  void (__fastcall *fixupFunc)(ParticleModule *); 
  __int64 v19; 
  _QWORD *v20; 
  int *v21; 
  int v23; 
  int v24; 
  __int64 v25; 

  v1 = pSystem;
  if ( !pSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.cpp", 19, ASSERT_TYPE_ASSERT, "(pSystem)", (const char *)&queryFormat, "pSystem") )
    __debugbreak();
  UpdateData = ParticleModule::GetUpdateData();
  v3 = 0;
  v4 = UpdateData;
  v23 = 0;
  if ( v1->numEmitters > 0 )
  {
    v5 = "pEmitterDef";
    v6 = "pStateDef";
    v7 = 0i64;
    v25 = 0i64;
    do
    {
      emitterDefs = v1->emitterDefs;
      v9 = (ParticleEmitterDef *)((char *)emitterDefs + v7) == NULL;
      v10 = (int *)((char *)emitterDefs + v7);
      v21 = v10;
      if ( v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.cpp", 36, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
          __debugbreak();
        v7 = v25;
        v6 = "pStateDef";
        v3 = v23;
      }
      v24 = 0;
      if ( v10[2] > 0 )
      {
        v11 = 0i64;
        v19 = 0i64;
        do
        {
          v12 = (_QWORD *)(v11 + *(_QWORD *)v10);
          v20 = v12;
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.cpp", 41, ASSERT_TYPE_ASSERT, "(pStateDef)", (const char *)&queryFormat, "pStateDef") )
            __debugbreak();
          for ( i = 0i64; i < 48; i += 16i64 )
          {
            v14 = i + *v12;
            if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.cpp", 46, ASSERT_TYPE_ASSERT, "(pModuleGroupDef)", (const char *)&queryFormat, "pModuleGroupDef") )
              __debugbreak();
            v15 = 0;
            if ( *(int *)(v14 + 8) > 0 )
            {
              v16 = 0i64;
              do
              {
                v17 = (__int16 *)(v16 + *(_QWORD *)v14);
                if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.cpp", 51, ASSERT_TYPE_ASSERT, "(pModuleDef)", (const char *)&queryFormat, "pModuleDef") )
                  __debugbreak();
                fixupFunc = v4[(__int64)*v17].fixupFunc;
                if ( fixupFunc )
                  ((void (__fastcall *)(__int16 *, void (__fastcall *)(ParticleModule *), const char *, const char *))fixupFunc)(v17 + 8, fixupFunc, v6, v5);
                ++v15;
                v16 += 240i64;
              }
              while ( v15 < *(_DWORD *)(v14 + 8) );
              v12 = v20;
            }
          }
          v6 = "pStateDef";
          v10 = v21;
          v11 = v19 + 32;
          ++v24;
          v19 += 32i64;
        }
        while ( v24 < v21[2] );
        v3 = v23;
        v7 = v25;
      }
      v1 = pSystem;
      v6 = "pStateDef";
      ++v3;
      v5 = "pEmitterDef";
      v7 += 160i64;
      v23 = v3;
      v25 = v7;
    }
    while ( v3 < pSystem->numEmitters );
  }
}

/*
==============
Particle_DebugAxis
==============
*/
void Particle_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, const vec4_t *colorX, const vec4_t *colorY, const vec4_t *colorZ, float length, const bool depthTest, int duration)
{
  float v8; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  vec3_t end; 

  v8 = length * axes->m[0].v[1];
  end.v[0] = (float)(length * axes->m[0].v[0]) + pos->v[0];
  v12 = length * axes->m[0].v[2];
  end.v[1] = v8 + pos->v[1];
  end.v[2] = v12 + pos->v[2];
  Particle_DebugLine(pos, &end, colorX, depthTest, duration);
  v13 = length * axes->m[1].v[1];
  end.v[0] = (float)(length * axes->m[1].v[0]) + pos->v[0];
  v14 = length * axes->m[1].v[2];
  end.v[1] = v13 + pos->v[1];
  end.v[2] = v14 + pos->v[2];
  Particle_DebugLine(pos, &end, colorY, depthTest, duration);
  v15 = length * axes->m[2].v[1];
  end.v[0] = (float)(length * axes->m[2].v[0]) + pos->v[0];
  v16 = length * axes->m[2].v[2];
  end.v[1] = v15 + pos->v[1];
  end.v[2] = v16 + pos->v[2];
  Particle_DebugLine(pos, &end, colorZ, depthTest, duration);
}

/*
==============
Particle_DebugAxis
==============
*/
void Particle_DebugAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const bool depthTest, int duration)
{
  float v5; 
  float v6; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t end; 

  v5 = length * axes->m[0].v[1];
  end.v[0] = (float)(length * axes->m[0].v[0]) + pos->v[0];
  v6 = length * axes->m[0].v[2];
  end.v[1] = v5 + pos->v[1];
  end.v[2] = v6 + pos->v[2];
  Particle_DebugLine(pos, &end, &colorRed, depthTest, duration);
  v10 = length * axes->m[1].v[1];
  end.v[0] = (float)(length * axes->m[1].v[0]) + pos->v[0];
  v11 = length * axes->m[1].v[2];
  end.v[1] = v10 + pos->v[1];
  end.v[2] = v11 + pos->v[2];
  Particle_DebugLine(pos, &end, &colorGreen, depthTest, duration);
  v12 = length * axes->m[2].v[1];
  end.v[0] = (float)(length * axes->m[2].v[0]) + pos->v[0];
  v13 = length * axes->m[2].v[2];
  end.v[1] = v12 + pos->v[1];
  end.v[2] = v13 + pos->v[2];
  Particle_DebugLine(pos, &end, &colorBlue, depthTest, duration);
}

