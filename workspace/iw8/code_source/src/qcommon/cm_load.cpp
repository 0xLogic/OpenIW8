/*
==============
CM_TriggerSource
==============
*/

const MapTriggers *__fastcall CM_TriggerSource(unsigned int triggerIndex)
{
  return ?CM_TriggerSource@@YAPEBUMapTriggers@@I@Z(triggerIndex);
}

/*
==============
CM_TriggerModelBaseCount
==============
*/

unsigned int __fastcall CM_TriggerModelBaseCount()
{
  return ?CM_TriggerModelBaseCount@@YAIXZ();
}

/*
==============
CM_Unload
==============
*/

void __fastcall CM_Unload(clipMap_t *clipMap)
{
  ?CM_Unload@@YAXPEAUclipMap_t@@@Z(clipMap);
}

/*
==============
CM_InitDevGui
==============
*/

void CM_InitDevGui(void)
{
  ?CM_InitDevGui@@YAXXZ();
}

/*
==============
CM_ClientTriggerModelIsValid
==============
*/

bool __fastcall CM_ClientTriggerModelIsValid(unsigned int tmodelIndex)
{
  return ?CM_ClientTriggerModelIsValid@@YA_NI@Z(tmodelIndex);
}

/*
==============
CM_GetTriggerModel
==============
*/

const TriggerModel *__fastcall CM_GetTriggerModel(unsigned int triggerIndex)
{
  return ?CM_GetTriggerModel@@YAPEBUTriggerModel@@I@Z(triggerIndex);
}

/*
==============
CM_ClientTriggerModelBounds
==============
*/

void __fastcall CM_ClientTriggerModelBounds(unsigned int tmodelIndex, Bounds *bounds)
{
  ?CM_ClientTriggerModelBounds@@YAXIPEAUBounds@@@Z(tmodelIndex, bounds);
}

/*
==============
CM_TriggerModelTotalCount
==============
*/

unsigned int __fastcall CM_TriggerModelTotalCount()
{
  return ?CM_TriggerModelTotalCount@@YAIXZ();
}

/*
==============
CM_LoadAddOnMapEnts
==============
*/

void __fastcall CM_LoadAddOnMapEnts(const char *name)
{
  ?CM_LoadAddOnMapEnts@@YAXPEBD@Z(name);
}

/*
==============
CM_LoadMap
==============
*/

void __fastcall CM_LoadMap(const char *name, int *checksum)
{
  ?CM_LoadMap@@YAXPEBDPEAH@Z(name, checksum);
}

/*
==============
CM_BrushModelBounds
==============
*/

void __fastcall CM_BrushModelBounds(unsigned int bmodelIndex, Bounds *bounds)
{
  ?CM_BrushModelBounds@@YAXIPEAUBounds@@@Z(bmodelIndex, bounds);
}

/*
==============
CM_ContentsOfTriggerModel
==============
*/

int __fastcall CM_ContentsOfTriggerModel(unsigned int tmodelIndex)
{
  return ?CM_ContentsOfTriggerModel@@YAHI@Z(tmodelIndex);
}

/*
==============
CM_TriggerModelBounds
==============
*/

void __fastcall CM_TriggerModelBounds(unsigned int tmodelIndex, Bounds *bounds)
{
  ?CM_TriggerModelBounds@@YAXIPEAUBounds@@@Z(tmodelIndex, bounds);
}

/*
==============
CM_TriggerModelIsValid
==============
*/

bool __fastcall CM_TriggerModelIsValid(unsigned int tmodelIndex)
{
  return ?CM_TriggerModelIsValid@@YA_NI@Z(tmodelIndex);
}

/*
==============
CM_BrushModelBounds
==============
*/
void CM_BrushModelBounds(unsigned int bmodelIndex, Bounds *bounds)
{
  __int64 v3; 
  cmodel_t *cmodels; 

  v3 = bmodelIndex;
  if ( bmodelIndex >= cm.mapEnts->numSubModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 244, ASSERT_TYPE_ASSERT, "(unsigned)( bmodelIndex ) < (unsigned)( cm.mapEnts->numSubModels )", "bmodelIndex doesn't index cm.mapEnts->numSubModels\n\t%i not in [0, %i)", bmodelIndex, cm.mapEnts->numSubModels) )
    __debugbreak();
  cmodels = cm.mapEnts->cmodels;
  *(_OWORD *)bounds->midPoint.v = *(_OWORD *)cmodels[v3].bounds.midPoint.v;
  *(double *)&bounds->halfSize.y = *(double *)&cmodels[v3].bounds.halfSize.y;
}

/*
==============
CM_ClientTriggerModelBounds
==============
*/
void CM_ClientTriggerModelBounds(unsigned int tmodelIndex, Bounds *bounds)
{
  __int64 v3; 
  MapEnts *mapEnts; 
  ClientTriggerModel *models; 
  __int64 v6; 
  vec3_t *origins; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __m128 v12; 
  __m128 v16; 
  __m128 v20; 
  __m128 v24; 
  __int64 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 

  _RBX = bounds;
  v3 = tmodelIndex;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 349, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  if ( (unsigned int)v3 >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v33) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 351, ASSERT_TYPE_ASSERT, "(unsigned)( tmodelIndex ) < (unsigned)( triggers->count )", "tmodelIndex doesn't index triggers->count\n\t%i not in [0, %i)", v33, cm.mapEnts->clientTrigger.trigger.count) )
      __debugbreak();
  }
  models = mapEnts->clientTrigger.trigger.models;
  v6 = v3;
  origins = cm.mapEnts->clientTrigger.origins;
  if ( !models[v6].hullCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 355, ASSERT_TYPE_ASSERT, "(tmodel->hullCount)", (const char *)&queryFormat, "tmodel->hullCount") )
    __debugbreak();
  v8 = 1;
  v9 = (__int64)&mapEnts->clientTrigger.trigger.hulls[models[v6].firstHull];
  *(_OWORD *)_RBX->midPoint.v = *(_OWORD *)v9;
  *(double *)&_RBX->halfSize.y = *(double *)(v9 + 16);
  if ( models[v6].hullCount > 1u )
  {
    v10 = v9 + 20;
    do
    {
      v10 += 32i64;
      v34.m128_i32[3] = 0;
      ++v8;
      v12 = v34;
      v12.m128_f32[0] = _RBX->midPoint.v[0];
      _XMM6 = v12;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rbx+4], 10h
        vinsertps xmm6, xmm6, dword ptr [rbx+8], 20h ; ' '
      }
      v35.m128_i32[3] = 0;
      v16 = v35;
      v16.m128_f32[0] = _RBX->halfSize.v[0];
      _XMM3 = v16;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' '
      }
      _mm128_sub_ps(_XMM6, _XMM3);
      v36.m128_i32[3] = 0;
      v20 = v36;
      v20.m128_f32[0] = *(float *)(v10 - 20);
      _XMM5 = v20;
      __asm
      {
        vinsertps xmm5, xmm5, dword ptr [rcx-10h], 10h
        vinsertps xmm5, xmm5, dword ptr [rcx-0Ch], 20h ; ' '
      }
      v37.m128_i32[3] = 0;
      v24 = v37;
      v24.m128_f32[0] = *(float *)(v10 - 8);
      _XMM4 = v24;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rcx-4], 10h
        vinsertps xmm4, xmm4, dword ptr [rcx], 20h ; ' '
      }
      _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
      _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
      v35 = _XMM3;
      _mm128_add_ps(_XMM6, _XMM3);
      v37 = _XMM4;
      __asm
      {
        vminps  xmm4, xmm0, xmm2
        vmaxps  xmm0, xmm1, xmm3
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
      _RBX->midPoint.v[0] = _XMM2.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rbx+4], xmm2, 1
        vextractps dword ptr [rbx+8], xmm2, 2
      }
      _XMM3 = _mm128_sub_ps(_XMM2, _XMM4);
      _RBX->halfSize.v[0] = _XMM3.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rbx+10h], xmm3, 1
        vextractps dword ptr [rbx+14h], xmm3, 2
      }
      v34 = _XMM6;
      v36 = _XMM5;
    }
    while ( v8 < models[v6].hullCount );
  }
  _RBX->midPoint.v[0] = origins[v6].v[0] + _RBX->midPoint.v[0];
  _RBX->midPoint.v[1] = origins[v6].v[1] + _RBX->midPoint.v[1];
  _RBX->midPoint.v[2] = origins[v6].v[2] + _RBX->midPoint.v[2];
}

/*
==============
CM_ClientTriggerModelIsValid
==============
*/
bool CM_ClientTriggerModelIsValid(unsigned int tmodelIndex)
{
  return tmodelIndex < cm.mapEnts->clientTrigger.trigger.count;
}

/*
==============
CM_ContentsOfTriggerModel
==============
*/
__int64 CM_ContentsOfTriggerModel(unsigned int tmodelIndex)
{
  return (unsigned int)CM_GetTriggerModel(tmodelIndex)->contents;
}

/*
==============
CM_GetTriggerModel
==============
*/
TriggerModel *CM_GetTriggerModel(unsigned int triggerIndex)
{
  MapEnts *mapEnts; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int count; 

  mapEnts = cm.mapEnts;
  if ( triggerIndex < cm.mapEnts->trigger.count )
    return &cm.mapEnts->trigger.models[triggerIndex];
  if ( !g_addonMapEnts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 331, ASSERT_TYPE_ASSERT, "(g_addonMapEnts)", (const char *)&queryFormat, "g_addonMapEnts") )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  v4 = triggerIndex - mapEnts->trigger.count;
  if ( v4 >= g_addonMapEnts->trigger.count )
  {
    count = g_addonMapEnts->trigger.count;
    LODWORD(v5) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 334, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( g_addonMapEnts->trigger.count )", "triggerIndex doesn't index g_addonMapEnts->trigger.count\n\t%i not in [0, %i)", v5, count) )
      __debugbreak();
  }
  return &g_addonMapEnts->trigger.models[v4];
}

/*
==============
CM_InitDevGui
==============
*/
void CM_InitDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 

  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v0 = truncate_cast<int,unsigned __int64>(0xFui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
    {
      v2 = v0 + i;
      v3 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_cm\n", v0 - 1);
    s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v0;
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
}

/*
==============
CM_LoadAddOnMapEnts
==============
*/
void CM_LoadAddOnMapEnts(const char *name)
{
  unsigned int numSubModels; 
  MapEnts *mapEnts; 
  char dest[64]; 

  if ( Com_IsAddonMap(name, NULL) )
  {
    Com_sprintf(dest, 0x40ui64, "maps/%s.mapents", name);
    g_addonMapEnts = DB_FindXAssetHeader(ASSET_TYPE_ADDON_MAP_ENTS, dest, 0).addonMapEnts;
    if ( !g_addonMapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 173, ASSERT_TYPE_ASSERT, "(g_addonMapEnts)", (const char *)&queryFormat, "g_addonMapEnts") )
      __debugbreak();
    numSubModels = g_addonMapEnts->numSubModels;
    if ( numSubModels )
    {
      mapEnts = cm.mapEnts;
      if ( cm.mapEnts->numSubModels > numSubModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 178, ASSERT_TYPE_ASSERT, "(mapEnts->numSubModels <= g_addonMapEnts->numSubModels)", (const char *)&queryFormat, "mapEnts->numSubModels <= g_addonMapEnts->numSubModels") )
        __debugbreak();
      memcpy_0(g_addonMapEnts->cmodels, mapEnts->cmodels, 56i64 * mapEnts->numSubModels);
      mapEnts->cmodels = g_addonMapEnts->cmodels;
      mapEnts->numSubModels = g_addonMapEnts->numSubModels;
    }
  }
  else
  {
    g_addonMapEnts = NULL;
  }
}

/*
==============
CM_LoadMap
==============
*/
void CM_LoadMap(const char *name, int *checksum)
{
  if ( !name || !*name )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FFC7E0, 1075i64);
  ProfLoad_Begin("CM_LoadMapData");
  if ( DB_FindXAssetHeader(ASSET_TYPE_CLIPMAP, name, 1).clipMap != &cm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 135, ASSERT_TYPE_ASSERT, "(header.clipMap == &cm)", (const char *)&queryFormat, "header.clipMap == &cm") )
    __debugbreak();
  if ( !cm.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 136, ASSERT_TYPE_ASSERT, "(cm.isInUse)", (const char *)&queryFormat, "cm.isInUse") )
    __debugbreak();
  ProfLoad_End();
  *checksum = cm.checksum;
}

/*
==============
CM_TriggerModelBaseCount
==============
*/
__int64 CM_TriggerModelBaseCount()
{
  return cm.mapEnts->trigger.count;
}

/*
==============
CM_TriggerModelBounds
==============
*/
void CM_TriggerModelBounds(unsigned int tmodelIndex, Bounds *bounds)
{
  MapTriggers *p_trigger; 
  const TriggerModel *TriggerModel; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __m128 v10; 
  __m128 v14; 
  __m128 v18; 
  __m128 v22; 
  __int64 v31; 
  unsigned int count; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 

  _RBX = bounds;
  p_trigger = &cm.mapEnts->trigger;
  if ( tmodelIndex >= cm.mapEnts->trigger.count )
  {
    if ( !g_addonMapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 312, ASSERT_TYPE_ASSERT, "(g_addonMapEnts)", (const char *)&queryFormat, "g_addonMapEnts") )
      __debugbreak();
    if ( tmodelIndex - cm.mapEnts->trigger.count >= g_addonMapEnts->trigger.count )
    {
      count = g_addonMapEnts->trigger.count;
      LODWORD(v31) = tmodelIndex - cm.mapEnts->trigger.count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( g_addonMapEnts->trigger.count )", "triggerIndex doesn't index g_addonMapEnts->trigger.count\n\t%i not in [0, %i)", v31, count) )
        __debugbreak();
    }
    p_trigger = &g_addonMapEnts->trigger;
  }
  TriggerModel = CM_GetTriggerModel(tmodelIndex);
  if ( !TriggerModel->hullCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 287, ASSERT_TYPE_ASSERT, "(tmodel->hullCount)", (const char *)&queryFormat, "tmodel->hullCount") )
    __debugbreak();
  v6 = 1;
  v7 = (__int64)&p_trigger->hulls[TriggerModel->firstHull];
  *(_OWORD *)_RBX->midPoint.v = *(_OWORD *)v7;
  *(double *)&_RBX->halfSize.y = *(double *)(v7 + 16);
  if ( TriggerModel->hullCount > 1u )
  {
    v8 = v7 + 20;
    do
    {
      v8 += 32i64;
      v33.m128_i32[3] = 0;
      ++v6;
      v10 = v33;
      v10.m128_f32[0] = _RBX->midPoint.v[0];
      _XMM6 = v10;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rbx+4], 10h
        vinsertps xmm6, xmm6, dword ptr [rbx+8], 20h ; ' '
      }
      v34.m128_i32[3] = 0;
      v14 = v34;
      v14.m128_f32[0] = _RBX->halfSize.v[0];
      _XMM3 = v14;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' '
      }
      _mm128_sub_ps(_XMM6, _XMM3);
      v35.m128_i32[3] = 0;
      v18 = v35;
      v18.m128_f32[0] = *(float *)(v8 - 20);
      _XMM5 = v18;
      __asm
      {
        vinsertps xmm5, xmm5, dword ptr [rcx-10h], 10h
        vinsertps xmm5, xmm5, dword ptr [rcx-0Ch], 20h ; ' '
      }
      v36.m128_i32[3] = 0;
      v22 = v36;
      v22.m128_f32[0] = *(float *)(v8 - 8);
      _XMM4 = v22;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rcx-4], 10h
        vinsertps xmm4, xmm4, dword ptr [rcx], 20h ; ' '
      }
      _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
      _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
      v34 = _XMM3;
      _mm128_add_ps(_XMM6, _XMM3);
      v36 = _XMM4;
      __asm
      {
        vminps  xmm4, xmm0, xmm2
        vmaxps  xmm0, xmm1, xmm3
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
      _RBX->midPoint.v[0] = _XMM2.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rbx+4], xmm2, 1
        vextractps dword ptr [rbx+8], xmm2, 2
      }
      _XMM3 = _mm128_sub_ps(_XMM2, _XMM4);
      _RBX->halfSize.v[0] = _XMM3.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rbx+10h], xmm3, 1
        vextractps dword ptr [rbx+14h], xmm3, 2
      }
      v33 = _XMM6;
      v35 = _XMM5;
    }
    while ( v6 < TriggerModel->hullCount );
  }
}

/*
==============
CM_TriggerModelIsValid
==============
*/
bool CM_TriggerModelIsValid(unsigned int tmodelIndex)
{
  unsigned int count; 

  count = 0;
  if ( cm.mapEnts )
    count = cm.mapEnts->trigger.count;
  if ( g_addonMapEnts )
    count += g_addonMapEnts->trigger.count;
  return tmodelIndex < count;
}

/*
==============
CM_TriggerModelTotalCount
==============
*/
__int64 CM_TriggerModelTotalCount()
{
  __int64 result; 

  result = 0i64;
  if ( cm.mapEnts )
    result = cm.mapEnts->trigger.count;
  if ( g_addonMapEnts )
    return (unsigned int)(g_addonMapEnts->trigger.count + result);
  return result;
}

/*
==============
CM_TriggerSource
==============
*/
const MapTriggers *CM_TriggerSource(unsigned int triggerIndex)
{
  const MapTriggers *result; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int count; 

  result = &cm.mapEnts->trigger;
  if ( triggerIndex >= cm.mapEnts->trigger.count )
  {
    if ( !g_addonMapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 312, ASSERT_TYPE_ASSERT, "(g_addonMapEnts)", (const char *)&queryFormat, "g_addonMapEnts") )
      __debugbreak();
    v3 = triggerIndex - cm.mapEnts->trigger.count;
    if ( v3 >= g_addonMapEnts->trigger.count )
    {
      count = g_addonMapEnts->trigger.count;
      LODWORD(v4) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( g_addonMapEnts->trigger.count )", "triggerIndex doesn't index g_addonMapEnts->trigger.count\n\t%i not in [0, %i)", v4, count) )
        __debugbreak();
    }
    return &g_addonMapEnts->trigger;
  }
  return result;
}

/*
==============
CM_Unload
==============
*/
void CM_Unload(clipMap_t *clipMap)
{
  const char *name; 
  bool v3; 

  if ( !clipMap->isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 232, ASSERT_TYPE_ASSERT, "(clipMap->isInUse)", (const char *)&queryFormat, "clipMap->isInUse") )
    __debugbreak();
  name = clipMap->name;
  memset_0(&cm, 0, sizeof(cm));
  v3 = clipMap->isInUse == 0;
  clipMap->name = name;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 237, ASSERT_TYPE_ASSERT, "(!clipMap->isInUse)", (const char *)&queryFormat, "!clipMap->isInUse") )
    __debugbreak();
}

