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

  _RDI = bounds;
  v3 = bmodelIndex;
  if ( bmodelIndex >= cm.mapEnts->numSubModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 244, ASSERT_TYPE_ASSERT, "(unsigned)( bmodelIndex ) < (unsigned)( cm.mapEnts->numSubModels )", "bmodelIndex doesn't index cm.mapEnts->numSubModels\n\t%i not in [0, %i)", bmodelIndex, cm.mapEnts->numSubModels) )
    __debugbreak();
  _RDX = 56 * v3;
  _RCX = cm.mapEnts->cmodels;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+rcx]
    vmovups xmmword ptr [rdi], xmm0
    vmovsd  xmm1, qword ptr [rdx+rcx+10h]
    vmovsd  qword ptr [rdi+10h], xmm1
  }
}

/*
==============
CM_ClientTriggerModelBounds
==============
*/
void CM_ClientTriggerModelBounds(unsigned int tmodelIndex, Bounds *bounds)
{
  __int64 v4; 
  MapEnts *mapEnts; 
  ClientTriggerModel *models; 
  unsigned int v9; 
  __int64 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 

  _RBX = bounds;
  v4 = tmodelIndex;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 349, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  if ( (unsigned int)v4 >= cm.mapEnts->clientTrigger.trigger.count )
  {
    LODWORD(v50) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 351, ASSERT_TYPE_ASSERT, "(unsigned)( tmodelIndex ) < (unsigned)( triggers->count )", "tmodelIndex doesn't index triggers->count\n\t%i not in [0, %i)", v50, cm.mapEnts->clientTrigger.trigger.count) )
      __debugbreak();
  }
  models = mapEnts->clientTrigger.trigger.models;
  _RDI = v4;
  _R14 = cm.mapEnts->clientTrigger.origins;
  if ( !models[_RDI].hullCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 355, ASSERT_TYPE_ASSERT, "(tmodel->hullCount)", (const char *)&queryFormat, "tmodel->hullCount") )
    __debugbreak();
  v9 = 1;
  _RAX = (__int64)&mapEnts->clientTrigger.trigger.hulls[models[_RDI].firstHull];
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  if ( models[_RDI].hullCount > 1u )
  {
    __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
    _RCX = _RAX + 20;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rbx] }
      _RCX += 32i64;
      HIDWORD(v51) = 0;
      ++v9;
      __asm
      {
        vmovups xmm6, xmmword ptr [rsp+40h]
        vmovss  xmm6, xmm6, xmm0
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vinsertps xmm6, xmm6, dword ptr [rbx+4], 10h
        vinsertps xmm6, xmm6, dword ptr [rbx+8], 20h ; ' '
      }
      HIDWORD(v52) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+50h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' '
        vmovss  xmm0, dword ptr [rcx-14h]
        vsubps  xmm2, xmm6, xmm3
      }
      HIDWORD(v53) = 0;
      __asm
      {
        vmovups xmm5, xmmword ptr [rsp+60h]
        vmovss  xmm5, xmm5, xmm0
        vmovss  xmm0, dword ptr [rcx-8]
        vinsertps xmm5, xmm5, dword ptr [rcx-10h], 10h
        vinsertps xmm5, xmm5, dword ptr [rcx-0Ch], 20h ; ' '
      }
      HIDWORD(v54) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+70h]
        vmovss  xmm4, xmm4, xmm0
        vinsertps xmm4, xmm4, dword ptr [rcx-4], 10h
        vinsertps xmm4, xmm4, dword ptr [rcx], 20h ; ' '
        vaddps  xmm1, xmm5, xmm4
        vsubps  xmm0, xmm5, xmm4
        vmovups xmmword ptr [rsp+50h], xmm3
        vaddps  xmm3, xmm6, xmm3
        vmovups xmmword ptr [rsp+70h], xmm4
        vminps  xmm4, xmm0, xmm2
        vmaxps  xmm0, xmm1, xmm3
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovss  dword ptr [rbx], xmm2
        vextractps dword ptr [rbx+4], xmm2, 1
        vextractps dword ptr [rbx+8], xmm2, 2
        vsubps  xmm3, xmm2, xmm4
        vmovss  dword ptr [rbx+0Ch], xmm3
        vextractps dword ptr [rbx+10h], xmm3, 1
        vextractps dword ptr [rbx+14h], xmm3, 2
        vmovups xmmword ptr [rsp+40h], xmm6
        vmovups xmmword ptr [rsp+60h], xmm5
      }
    }
    while ( v9 < models[_RDI].hullCount );
    __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+rdi*4]
    vaddss  xmm1, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [r14+rdi*4+4]
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr [r14+rdi*4+8]
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm1
  }
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
  unsigned int v7; 
  __int64 v42; 
  unsigned int count; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 

  _RBX = bounds;
  p_trigger = &cm.mapEnts->trigger;
  if ( tmodelIndex >= cm.mapEnts->trigger.count )
  {
    if ( !g_addonMapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 312, ASSERT_TYPE_ASSERT, "(g_addonMapEnts)", (const char *)&queryFormat, "g_addonMapEnts") )
      __debugbreak();
    if ( tmodelIndex - cm.mapEnts->trigger.count >= g_addonMapEnts->trigger.count )
    {
      count = g_addonMapEnts->trigger.count;
      LODWORD(v42) = tmodelIndex - cm.mapEnts->trigger.count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( g_addonMapEnts->trigger.count )", "triggerIndex doesn't index g_addonMapEnts->trigger.count\n\t%i not in [0, %i)", v42, count) )
        __debugbreak();
    }
    p_trigger = &g_addonMapEnts->trigger;
  }
  TriggerModel = CM_GetTriggerModel(tmodelIndex);
  if ( !TriggerModel->hullCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load.cpp", 287, ASSERT_TYPE_ASSERT, "(tmodel->hullCount)", (const char *)&queryFormat, "tmodel->hullCount") )
    __debugbreak();
  v7 = 1;
  _RAX = (__int64)&p_trigger->hulls[TriggerModel->firstHull];
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  if ( TriggerModel->hullCount > 1u )
  {
    __asm { vmovaps [rsp+0B8h+var_28], xmm6 }
    _RCX = _RAX + 20;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rbx] }
      _RCX += 32i64;
      HIDWORD(v44) = 0;
      ++v7;
      __asm
      {
        vmovups xmm6, xmmword ptr [rsp+40h]
        vmovss  xmm6, xmm6, xmm0
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vinsertps xmm6, xmm6, dword ptr [rbx+4], 10h
        vinsertps xmm6, xmm6, dword ptr [rbx+8], 20h ; ' '
      }
      HIDWORD(v45) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+50h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rbx+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+14h], 20h ; ' '
        vmovss  xmm0, dword ptr [rcx-14h]
        vsubps  xmm2, xmm6, xmm3
      }
      HIDWORD(v46) = 0;
      __asm
      {
        vmovups xmm5, xmmword ptr [rsp+60h]
        vmovss  xmm5, xmm5, xmm0
        vmovss  xmm0, dword ptr [rcx-8]
        vinsertps xmm5, xmm5, dword ptr [rcx-10h], 10h
        vinsertps xmm5, xmm5, dword ptr [rcx-0Ch], 20h ; ' '
      }
      HIDWORD(v47) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp+70h]
        vmovss  xmm4, xmm4, xmm0
        vinsertps xmm4, xmm4, dword ptr [rcx-4], 10h
        vinsertps xmm4, xmm4, dword ptr [rcx], 20h ; ' '
        vaddps  xmm1, xmm5, xmm4
        vsubps  xmm0, xmm5, xmm4
        vmovups xmmword ptr [rsp+50h], xmm3
        vaddps  xmm3, xmm6, xmm3
        vmovups xmmword ptr [rsp+70h], xmm4
        vminps  xmm4, xmm0, xmm2
        vmaxps  xmm0, xmm1, xmm3
        vaddps  xmm1, xmm0, xmm4
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovss  dword ptr [rbx], xmm2
        vextractps dword ptr [rbx+4], xmm2, 1
        vextractps dword ptr [rbx+8], xmm2, 2
        vsubps  xmm3, xmm2, xmm4
        vmovss  dword ptr [rbx+0Ch], xmm3
        vextractps dword ptr [rbx+10h], xmm3, 1
        vextractps dword ptr [rbx+14h], xmm3, 2
        vmovups xmmword ptr [rsp+40h], xmm6
        vmovups xmmword ptr [rsp+60h], xmm5
      }
    }
    while ( v7 < TriggerModel->hullCount );
    __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
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

