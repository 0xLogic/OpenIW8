/*
==============
CG_DrawMaterial_Update
==============
*/

void __fastcall CG_DrawMaterial_Update(LocalClientNum_t localClientIndex)
{
  ?CG_DrawMaterial_Update@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawMaterial_DrawHitTable
==============
*/

void __fastcall CG_DrawMaterial_DrawHitTable(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  ?CG_DrawMaterial_DrawHitTable@@YAXW4LocalClientNum_t@@PEBUCG_DrawHits_Hit@@I@Z(localClientIndex, hits, hitCount);
}

/*
==============
CG_DrawMaterial_DrawHitTable
==============
*/
void CG_DrawMaterial_DrawHitTable(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  const dvar_t *v6; 
  const CG_DrawHits_Hit *v7; 
  __int64 v8; 
  int integer; 
  unsigned int v11; 
  bool v12; 
  const ScreenPlacement *v13; 
  GfxFont *FontHandle; 
  const CG_DrawHits_Hit *v22; 
  const vec4_t *HitColor; 
  unsigned int surfaceFlags; 
  const char *name; 
  const vec4_t *v26; 
  const char *v27; 
  int v28; 
  __int64 v29; 
  const char *v33; 
  bool v36; 
  const dvar_t *v40; 
  unsigned int unsignedInt; 
  unsigned int smodelCollectionIndex; 
  __int64 v44; 
  const char **p_name; 
  const char *v46; 
  const Material *material; 
  const char *v51; 
  int layerCount; 
  __int64 v56; 
  const char **subMaterials; 
  const char *v58; 
  const dvar_t *v62; 
  const char *v66; 
  CG_DrawHits_ModelType modelType; 
  __int32 v71; 
  int v72; 
  const GfxSurface *surface; 
  GfxWorld *world; 
  GfxSurface *surfaces; 
  signed __int64 v76; 
  unsigned __int64 v77; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  int vertAlign; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float color; 
  float v106; 
  float outY; 
  unsigned int v108; 
  LocalClientNum_t localClientNum; 
  unsigned int v110; 
  const CG_DrawHits_Hit *v111; 
  char dest[1024]; 
  char textEnd[8]; 

  v6 = DVARINT_cg_drawMaterial;
  v7 = hits;
  v8 = localClientIndex;
  v111 = hits;
  v110 = hitCount;
  localClientNum = localClientIndex;
  if ( !DVARINT_cg_drawMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMaterial") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( integer > 5 )
    integer = 5;
  v11 = 0;
  if ( integer < 0 )
    integer = 0;
  if ( integer && hitCount )
  {
    __asm
    {
      vmovaps [rsp+4F0h+var_40], xmm6
      vmovaps [rsp+4F0h+var_50], xmm7
      vmovaps [rsp+4F0h+var_60], xmm8
    }
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v13 = &scrPlaceViewDisplay[v8];
LABEL_17:
        __asm
        {
          vmovss  xmm7, cs:__real@3e851eb8
          vmovaps xmm2, xmm7; scale
          vmovaps xmm1, xmm7; scale
        }
        FontHandle = UI_GetFontHandle(v13, 5, *(float *)&_XMM2);
        UI_TextHeight(FontHandle, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm0, cs:__real@42900000
          vmovss  xmm8, cs:__real@41000000
          vxorps  xmm6, xmm6, xmm6
          vmovss  [rsp+4F0h+var_490], xmm0
          vcvtsi2ss xmm6, xmm6, eax
        }
        v108 = 0;
        do
        {
          v22 = &v7[v11];
          HitColor = CG_DrawHits_GetHitColor(v11);
          surfaceFlags = v22->surfaceFlags;
          name = "^3<unknown>^7";
          v26 = HitColor;
          if ( surfaceFlags != -1 )
          {
            if ( ((surfaceFlags >> 19) & 0x3F) != 0 )
              name = infoParms[(surfaceFlags >> 19) & 0x3F].name;
            else
              name = "^1default^7";
          }
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "%2u: surface  = %s", v11, name);
          if ( surfaceFlags != -1 )
          {
            v27 = infoParms[65].name;
            v28 = 65;
            if ( infoParms[65].name )
            {
              v29 = 65i64;
              do
              {
                if ( (surfaceFlags & infoParms[v29].surfaceFlags) != 0 )
                  I_strcat_truncate(dest, 0x400ui64, v27);
                v29 = (unsigned int)++v28;
                v27 = infoParms[v29].name;
              }
              while ( v27 );
              v11 = v108;
            }
          }
          __asm
          {
            vmovss  xmm0, [rsp+4F0h+var_490]
            vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
            vmovaps xmm3, xmm8; x
            vmovss  dword ptr [rsp+4F0h+fmt], xmm0
          }
          CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmt, 1, 1, v95, v26);
          __asm { vaddss  xmm1, xmm6, [rsp+4F0h+var_490] }
          v33 = "^3nonsolid^7";
          if ( (v22->contentFlags & 1) != 0 )
            v33 = "solid";
          __asm { vmovss  [rsp+4F0h+var_490], xmm1 }
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "    contents = %s", v33);
          __asm
          {
            vmovss  xmm0, [rsp+4F0h+var_490]
            vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
            vmovaps xmm3, xmm8; x
            vmovss  dword ptr [rsp+4F0h+fmt], xmm0
          }
          CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmta, 1, 1, v96, v26);
          v36 = v22->modelType == SuperTerrain;
          __asm
          {
            vaddss  xmm1, xmm6, [rsp+4F0h+var_490]
            vmovss  [rsp+4F0h+var_490], xmm1
          }
          if ( v36 )
          {
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "    super terrain layer materials");
            __asm
            {
              vmovss  xmm0, [rsp+4F0h+var_490]
              vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
              vmovaps xmm3, xmm8; x
              vmovss  dword ptr [rsp+4F0h+fmt], xmm0
            }
            CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmtb, 1, 1, v97, v26);
            v40 = DVARINT_cg_drawMaterialLayerScroll;
            __asm
            {
              vaddss  xmm1, xmm6, [rsp+4F0h+var_490]
              vmovss  [rsp+4F0h+var_490], xmm1
            }
            if ( !DVARINT_cg_drawMaterialLayerScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMaterialLayerScroll") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v40);
            unsignedInt = v40->current.unsignedInt;
            smodelCollectionIndex = v22->modelInfo.model.smodelCollectionIndex;
            v44 = smodelCollectionIndex - 1;
            if ( (unsigned int)v44 > unsignedInt )
              v44 = unsignedInt;
            if ( (unsigned int)v44 < smodelCollectionIndex )
            {
              do
              {
                p_name = &v22->modelInfo.superTerrain.layerMaterials[v44]->name;
                if ( p_name )
                  v46 = *p_name;
                else
                  v46 = "^3<unknown>^7";
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "     %2u: %s", (unsigned int)v44, v46);
                __asm
                {
                  vmovss  xmm0, [rsp+4F0h+var_490]
                  vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
                  vmovaps xmm3, xmm8; x
                  vmovss  dword ptr [rsp+4F0h+fmt], xmm0
                }
                CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmtc, 1, 1, v98, v26);
                __asm { vaddss  xmm1, xmm6, [rsp+4F0h+var_490] }
                v44 = (unsigned int)(v44 + 1);
                __asm { vmovss  [rsp+4F0h+var_490], xmm1 }
              }
              while ( (unsigned int)v44 < v22->modelInfo.model.smodelCollectionIndex );
            }
          }
          else
          {
            material = v22->material;
            if ( material )
              v51 = material->name;
            else
              v51 = "^3<unknown>^7";
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "    material = %s", v51);
            __asm
            {
              vmovss  xmm0, [rsp+4F0h+var_490]
              vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
              vmovaps xmm3, xmm8; x
              vmovss  dword ptr [rsp+4F0h+fmt], xmm0
            }
            CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmtd, 1, 1, v99, v26);
            __asm
            {
              vaddss  xmm1, xmm6, [rsp+4F0h+var_490]
              vmovss  [rsp+4F0h+var_490], xmm1
            }
            if ( material )
            {
              layerCount = material->layerCount;
              v56 = 0i64;
              if ( material->layerCount )
              {
                do
                {
                  subMaterials = material->subMaterials;
                  v58 = "^3<unknown>^7";
                  if ( subMaterials[v56] )
                    v58 = subMaterials[v56];
                  Com_sprintf_truncate<1024>((char (*)[1024])dest, "     layer %2u: %s", (unsigned int)v56, v58);
                  __asm
                  {
                    vmovss  xmm0, [rsp+4F0h+var_490]
                    vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
                    vmovaps xmm3, xmm8; x
                    vmovss  dword ptr [rsp+4F0h+fmt], xmm0
                  }
                  CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmte, 1, 1, v100, v26);
                  __asm { vaddss  xmm1, xmm6, [rsp+4F0h+var_490] }
                  v56 = (unsigned int)(v56 + 1);
                  __asm { vmovss  [rsp+4F0h+var_490], xmm1 }
                }
                while ( (_DWORD)v56 != layerCount );
              }
              v62 = DVARBOOL_cg_drawTechset;
              if ( !DVARBOOL_cg_drawTechset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTechset") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v62);
              if ( v62->current.enabled )
              {
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "    techset  = %s", material->techniqueSet->name);
                __asm
                {
                  vmovss  xmm0, [rsp+4F0h+var_490]
                  vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
                  vmovaps xmm3, xmm8; x
                  vmovss  dword ptr [rsp+4F0h+fmt], xmm0
                }
                CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmtf, 1, 1, v101, v26);
                __asm
                {
                  vaddss  xmm1, xmm6, [rsp+4F0h+var_490]
                  vmovss  [rsp+4F0h+var_490], xmm1
                }
                v66 = (char *)&queryFormat.fmt + 3;
                if ( (material->techniqueSet->flags & 0x1000000000i64) != 0 )
                  v66 = "hasPrepass ";
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "    surfProp  = %s", v66);
                __asm
                {
                  vmovss  xmm0, [rsp+4F0h+var_490]
                  vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
                  vmovaps xmm3, xmm8; x
                  vmovss  dword ptr [rsp+4F0h+fmt], xmm0
                }
                CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmtg, 1, 1, v102, v26);
                __asm
                {
                  vaddss  xmm1, xmm6, [rsp+4F0h+var_490]
                  vmovss  [rsp+4F0h+var_490], xmm1
                }
              }
              v11 = v108;
            }
          }
          modelType = v22->modelType;
          if ( modelType )
          {
            v71 = modelType - 1;
            if ( v71 )
            {
              v72 = v71 - 1;
              if ( v72 )
              {
                if ( v72 == 1 )
                {
                  Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = <super terrain> (idx: %u)", v22->modelInfo.superTerrain.surfaceIndex);
                }
                else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawmaterial.cpp", 208, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
                {
                  __debugbreak();
                }
              }
              else
              {
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = %s (ent: %u)", *(const char **)v22->modelInfo.world.surface, v22->modelInfo.model.entNum);
              }
            }
            else
            {
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = %s (smii: %u)", *(const char **)v22->modelInfo.world.surface, v22->modelInfo.model.entNum);
            }
          }
          else
          {
            surface = v22->modelInfo.world.surface;
            if ( surface )
            {
              world = rgp.world;
              surfaces = rgp.world->surfaces.surfaces;
              if ( surface < surfaces || surface >= &surfaces[rgp.world->surfaces.count] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawmaterial.cpp", 194, ASSERT_TYPE_ASSERT, "(modelInfo.world.surface >= rgp.world->surfaces.surfaces && modelInfo.world.surface < rgp.world->surfaces.surfaces + rgp.world->surfaces.count)", (const char *)&queryFormat, "modelInfo.world.surface >= rgp.world->surfaces.surfaces && modelInfo.world.surface < rgp.world->surfaces.surfaces + rgp.world->surfaces.count") )
                  __debugbreak();
                world = rgp.world;
              }
              v76 = (char *)v22->modelInfo.world.surface - (char *)world->surfaces.surfaces;
              v77 = v76 / 40;
              if ( (v76 / 40 < 0 || v77 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v77, "signed", v76 / 40) )
                __debugbreak();
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = <world> (idx: %u)", (unsigned int)v77);
            }
            else
            {
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = <world>");
            }
          }
          __asm
          {
            vmovss  xmm0, [rsp+4F0h+var_490]
            vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
            vmovaps xmm3, xmm8; x
            vmovss  dword ptr [rsp+4F0h+fmt], xmm0
          }
          CG_DrawHits_DrawText(v13, dest, FontHandle, *(float *)&_XMM3, fmth, 1, 1, v103, v26);
          __asm
          {
            vaddss  xmm1, xmm6, [rsp+4F0h+var_490]
            vmovss  dword ptr [rsp+4F0h+var_4A8], xmm8
            vmovss  dword ptr [rsp+4F0h+color], xmm6
            vmovss  dword ptr [rsp+4F0h+var_4B8], xmm7
          }
          vertAlign = v22->surfaceFlags;
          __asm { vmovss  [rsp+4F0h+var_490], xmm1 }
          CG_GameInterface_DrawMaterial_DrawHitTable(localClientNum, v13, FontHandle, v26, dest, textEnd, vertAlign, v104, color, v106, &outY);
          __asm { vaddss  xmm1, xmm6, [rsp+4F0h+var_490] }
          v7 = v111;
          ++v11;
          __asm { vmovss  [rsp+4F0h+var_490], xmm1 }
          v108 = v11;
        }
        while ( v11 != v110 );
        __asm
        {
          vmovaps xmm8, [rsp+4F0h+var_60]
          vmovaps xmm7, [rsp+4F0h+var_50]
          vmovaps xmm6, [rsp+4F0h+var_40]
        }
        return;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v12 )
        __debugbreak();
    }
    v13 = &scrPlaceFull;
    goto LABEL_17;
  }
}

/*
==============
CG_DrawMaterial_Update
==============
*/
void CG_DrawMaterial_Update(LocalClientNum_t localClientIndex)
{
  const dvar_t *v2; 
  int integer; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawmaterial.cpp", 42, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = DVARINT_cg_drawMaterial;
  if ( !DVARINT_cg_drawMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMaterial") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( integer > 5 )
    integer = 5;
  if ( integer < 0 )
    integer = 0;
  if ( integer )
    CG_DrawHits_Activate(localClientIndex, MOVEMENT, (CG_DrawHits_Filter)integer, None);
}

