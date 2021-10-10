/*
==============
Com_CanPrimaryLightAffectPoint
==============
*/

bool __fastcall Com_CanPrimaryLightAffectPoint(const ComPrimaryLight *light, const vec3_t *point)
{
  return ?Com_CanPrimaryLightAffectPoint@@YA_NPEBUComPrimaryLight@@AEBTvec3_t@@@Z(light, point);
}

/*
==============
Com_UnloadWorld
==============
*/

void __fastcall Com_UnloadWorld(ComWorld *curComWorld)
{
  ?Com_UnloadWorld@@YAXPEAUComWorld@@@Z(curComWorld);
}

/*
==============
Com_GetUsedTechniques
==============
*/

int __fastcall Com_GetUsedTechniques(int *usedTechniques)
{
  return ?Com_GetUsedTechniques@@YAHPEAH@Z(usedTechniques);
}

/*
==============
Com_GetUmbraGateIndex
==============
*/

bool __fastcall Com_GetUmbraGateIndex(const char *name, unsigned int *gateIndexOut)
{
  return ?Com_GetUmbraGateIndex@@YA_NPEBDAEAI@Z(name, gateIndexOut);
}

/*
==============
Com_FindClosestPrimaryLight
==============
*/

unsigned int __fastcall Com_FindClosestPrimaryLight(const vec3_t *origin)
{
  return ?Com_FindClosestPrimaryLight@@YAIAEBTvec3_t@@@Z(origin);
}

/*
==============
Com_CanPrimaryLightAffectPoint
==============
*/
bool Com_CanPrimaryLightAffectPoint(const ComPrimaryLight *light, const vec3_t *point)
{
  unsigned __int8 type; 
  float v5; 
  float v6; 
  float v7; 
  float radius; 
  float v9; 
  float cosHalfFovOuter; 
  float rotationLimit; 
  float v12; 
  float v13; 
  __int64 v15; 

  if ( !light && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 28, ASSERT_TYPE_ASSERT, "(light)", (const char *)&queryFormat, "light") )
    __debugbreak();
  type = light->type;
  if ( (unsigned __int8)(type - 2) > 1u )
  {
    LODWORD(v15) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 29, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v15) )
      __debugbreak();
  }
  v5 = light->origin.v[0] - point->v[0];
  v6 = light->origin.v[1] - point->v[1];
  v7 = light->origin.v[2] - point->v[2];
  radius = light->radius;
  v9 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( v9 >= (float)(radius * radius) )
    return 0;
  if ( light->type == 3 )
    return 1;
  cosHalfFovOuter = light->cosHalfFovOuter;
  rotationLimit = light->rotationLimit;
  if ( rotationLimit <= COERCE_FLOAT(LODWORD(cosHalfFovOuter) ^ _xmm) )
    return 1;
  v12 = (float)((float)(v6 * light->dir.v[1]) + (float)(v5 * light->dir.v[0])) + (float)(v7 * light->dir.v[2]);
  if ( rotationLimit != 1.0 )
  {
    v13 = (float)(cosHalfFovOuter * rotationLimit) - fsqrt((float)(1.0 - (float)(cosHalfFovOuter * cosHalfFovOuter)) * (float)(1.0 - (float)(rotationLimit * rotationLimit)));
    cosHalfFovOuter = v13;
    if ( v13 <= 0.0 )
      return (float)(radius * v13) >= v12;
  }
  return v12 > 0.0 && (float)(v12 * v12) >= (float)((float)(cosHalfFovOuter * cosHalfFovOuter) * v9);
}

/*
==============
Com_FindClosestPrimaryLight
==============
*/
__int64 Com_FindClosestPrimaryLight(const vec3_t *origin)
{
  unsigned int v2; 
  float v3; 
  unsigned int v4; 
  int v5; 
  float *v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float *v19; 
  float v20; 
  float v21; 
  float v22; 

  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 67, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  v2 = 0;
  v3 = FLOAT_3_4028235e38;
  v4 = 1;
  if ( comWorld.primaryLightCount > 1 )
  {
    if ( comWorld.primaryLightCount - 1 >= 4 )
    {
      v5 = 3;
      v6 = &comWorld.primaryLights[1].origin.v[2];
      do
      {
        if ( *((_BYTE *)v6 - 75) != 1 )
        {
          v7 = *(v6 - 1) - origin->v[1];
          v8 = v7 * v7;
          v9 = (float)(*v6 - origin->v[2]) * (float)(*v6 - origin->v[2]);
          if ( (float)((float)(v8 + (float)((float)(*(v6 - 2) - origin->v[0]) * (float)(*(v6 - 2) - origin->v[0]))) + v9) < v3 )
          {
            v3 = (float)(v8 + (float)((float)(*(v6 - 2) - origin->v[0]) * (float)(*(v6 - 2) - origin->v[0]))) + v9;
            v2 = v4;
          }
        }
        if ( *((_BYTE *)v6 + 85) != 1 )
        {
          v10 = v6[39] - origin->v[1];
          v11 = v6[40] - origin->v[2];
          v12 = v10 * v10;
          if ( (float)((float)(v12 + (float)((float)(v6[38] - origin->v[0]) * (float)(v6[38] - origin->v[0]))) + (float)(v11 * v11)) < v3 )
          {
            v3 = (float)(v12 + (float)((float)(v6[38] - origin->v[0]) * (float)(v6[38] - origin->v[0]))) + (float)(v11 * v11);
            v2 = v5 - 1;
          }
        }
        if ( *((_BYTE *)v6 + 245) != 1 )
        {
          v13 = v6[79] - origin->v[1];
          v14 = v6[80] - origin->v[2];
          v15 = v13 * v13;
          if ( (float)((float)(v15 + (float)((float)(v6[78] - origin->v[0]) * (float)(v6[78] - origin->v[0]))) + (float)(v14 * v14)) < v3 )
          {
            v3 = (float)(v15 + (float)((float)(v6[78] - origin->v[0]) * (float)(v6[78] - origin->v[0]))) + (float)(v14 * v14);
            v2 = v5;
          }
        }
        if ( *((_BYTE *)v6 + 405) != 1 )
        {
          v16 = v6[119] - origin->v[1];
          v17 = v6[120] - origin->v[2];
          v18 = v16 * v16;
          if ( (float)((float)(v18 + (float)((float)(v6[118] - origin->v[0]) * (float)(v6[118] - origin->v[0]))) + (float)(v17 * v17)) < v3 )
          {
            v3 = (float)(v18 + (float)((float)(v6[118] - origin->v[0]) * (float)(v6[118] - origin->v[0]))) + (float)(v17 * v17);
            v2 = v5 + 1;
          }
        }
        v6 += 160;
        v4 += 4;
        v5 += 4;
      }
      while ( v4 < comWorld.primaryLightCount - 3 );
    }
    if ( v4 < comWorld.primaryLightCount )
    {
      v19 = &comWorld.primaryLights[v4].origin.v[2];
      do
      {
        if ( *((_BYTE *)v19 - 75) != 1 )
        {
          v20 = *(v19 - 1) - origin->v[1];
          v21 = v20 * v20;
          v22 = (float)(*v19 - origin->v[2]) * (float)(*v19 - origin->v[2]);
          if ( (float)((float)(v21 + (float)((float)(*(v19 - 2) - origin->v[0]) * (float)(*(v19 - 2) - origin->v[0]))) + v22) < v3 )
          {
            v3 = (float)(v21 + (float)((float)(*(v19 - 2) - origin->v[0]) * (float)(*(v19 - 2) - origin->v[0]))) + v22;
            v2 = v4;
          }
        }
        v19 += 40;
        ++v4;
      }
      while ( v4 < comWorld.primaryLightCount );
    }
  }
  return v2;
}

/*
==============
Com_GetUmbraGateIndex
==============
*/
char Com_GetUmbraGateIndex(const char *name, unsigned int *gateIndexOut)
{
  __int64 i; 
  __int64 v5; 
  const char *v6; 
  const char *v7; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 119, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 120, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < comWorld.numUmbraGates; i = (unsigned int)(i + 1) )
  {
    if ( !comWorld.umbraGateNames[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 124, ASSERT_TYPE_ASSERT, "(comWorld.umbraGateNames[gateIndex])", (const char *)&queryFormat, "comWorld.umbraGateNames[gateIndex]") )
      __debugbreak();
    v5 = 0x7FFFFFFFi64;
    v6 = name;
    v7 = comWorld.umbraGateNames[i];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = v7 - name;
    while ( 1 )
    {
      v9 = v6[v8];
      v10 = v5;
      v11 = *v6++;
      --v5;
      if ( !v10 )
      {
LABEL_21:
        *gateIndexOut = i;
        return 1;
      }
      if ( v9 != v11 )
        break;
      if ( !v9 )
        goto LABEL_21;
    }
  }
  return 0;
}

/*
==============
Com_GetUsedTechniques
==============
*/
__int64 Com_GetUsedTechniques(int *usedTechniques)
{
  int v1; 
  int *v2; 
  int i; 
  int *v16; 

  v1 = 0;
  v2 = usedTechniques + 8;
  for ( i = 8; i < 200; i += 16 )
  {
    _XMM0 = (unsigned int)v1;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v2 - 2) = _XMM1;
    _XMM0 = (unsigned int)(i - 4);
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v2 - 1) = _XMM1;
    _XMM0 = (unsigned int)i;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *(_OWORD *)v2 = _XMM1;
    v1 += 16;
    _XMM0 = (unsigned int)(i + 4);
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v2 + 1) = _XMM1;
    v2 += 16;
  }
  if ( v1 < 195 )
  {
    v16 = &usedTechniques[v1];
    do
      *v16++ = v1++;
    while ( v1 < 195 );
  }
  return 195i64;
}

/*
==============
Com_UnloadWorld
==============
*/
void Com_UnloadWorld(ComWorld *curComWorld)
{
  if ( curComWorld->isInUse )
  {
    curComWorld->isInUse = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp.cpp", 93, ASSERT_TYPE_ASSERT, "(curComWorld->isInUse)", (const char *)&queryFormat, "curComWorld->isInUse") )
      __debugbreak();
    curComWorld->isInUse = 0;
  }
}

