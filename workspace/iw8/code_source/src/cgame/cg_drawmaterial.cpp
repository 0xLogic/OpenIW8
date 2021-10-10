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
  const dvar_t *v3; 
  const CG_DrawHits_Hit *v4; 
  __int64 v5; 
  int integer; 
  unsigned int v8; 
  bool v9; 
  const ScreenPlacement *v10; 
  GfxFont *FontHandle; 
  float v12; 
  const CG_DrawHits_Hit *v13; 
  const vec4_t *HitColor; 
  unsigned int surfaceFlags; 
  const char *name; 
  const vec4_t *color; 
  const char *v18; 
  int v19; 
  __int64 v20; 
  const char *v21; 
  bool v22; 
  const dvar_t *v23; 
  unsigned int unsignedInt; 
  unsigned int smodelCollectionIndex; 
  __int64 v26; 
  const char **p_name; 
  const char *v28; 
  const Material *material; 
  const char *v30; 
  int layerCount; 
  __int64 v32; 
  const char **subMaterials; 
  const char *v34; 
  const dvar_t *v35; 
  const char *v36; 
  CG_DrawHits_ModelType modelType; 
  __int32 v38; 
  int v39; 
  const GfxSurface *surface; 
  GfxWorld *world; 
  GfxSurface *surfaces; 
  signed __int64 v43; 
  unsigned __int64 v44; 
  int vertAlign; 
  float outY; 
  unsigned int v47; 
  LocalClientNum_t localClientNum; 
  unsigned int v49; 
  const CG_DrawHits_Hit *v50; 
  char dest[1024]; 
  char textEnd[8]; 

  v3 = DVARINT_cg_drawMaterial;
  v4 = hits;
  v5 = localClientIndex;
  v50 = hits;
  v49 = hitCount;
  localClientNum = localClientIndex;
  if ( !DVARINT_cg_drawMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMaterial") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( integer > 5 )
    integer = 5;
  v8 = 0;
  if ( integer < 0 )
    integer = 0;
  if ( integer && hitCount )
  {
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v10 = &scrPlaceViewDisplay[v5];
LABEL_17:
        FontHandle = UI_GetFontHandle(v10, 5, 0.25999999);
        outY = FLOAT_72_0;
        v12 = (float)UI_TextHeight(FontHandle, 0.25999999);
        v47 = 0;
        do
        {
          v13 = &v4[v8];
          HitColor = CG_DrawHits_GetHitColor(v8);
          surfaceFlags = v13->surfaceFlags;
          name = "^3<unknown>^7";
          color = HitColor;
          if ( surfaceFlags != -1 )
          {
            if ( ((surfaceFlags >> 19) & 0x3F) != 0 )
              name = infoParms[(surfaceFlags >> 19) & 0x3F].name;
            else
              name = "^1default^7";
          }
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "%2u: surface  = %s", v8, name);
          if ( surfaceFlags != -1 )
          {
            v18 = infoParms[65].name;
            v19 = 65;
            if ( infoParms[65].name )
            {
              v20 = 65i64;
              do
              {
                if ( (surfaceFlags & infoParms[v20].surfaceFlags) != 0 )
                  I_strcat_truncate(dest, 0x400ui64, v18);
                v20 = (unsigned int)++v19;
                v18 = infoParms[v20].name;
              }
              while ( v18 );
              v8 = v47;
            }
          }
          CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
          v21 = "^3nonsolid^7";
          if ( (v13->contentFlags & 1) != 0 )
            v21 = "solid";
          outY = v12 + outY;
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "    contents = %s", v21);
          CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
          v22 = v13->modelType == SuperTerrain;
          outY = v12 + outY;
          if ( v22 )
          {
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "    super terrain layer materials");
            CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
            v23 = DVARINT_cg_drawMaterialLayerScroll;
            outY = v12 + outY;
            if ( !DVARINT_cg_drawMaterialLayerScroll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawMaterialLayerScroll") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v23);
            unsignedInt = v23->current.unsignedInt;
            smodelCollectionIndex = v13->modelInfo.model.smodelCollectionIndex;
            v26 = smodelCollectionIndex - 1;
            if ( (unsigned int)v26 > unsignedInt )
              v26 = unsignedInt;
            if ( (unsigned int)v26 < smodelCollectionIndex )
            {
              do
              {
                p_name = &v13->modelInfo.superTerrain.layerMaterials[v26]->name;
                if ( p_name )
                  v28 = *p_name;
                else
                  v28 = "^3<unknown>^7";
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "     %2u: %s", (unsigned int)v26, v28);
                CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
                v26 = (unsigned int)(v26 + 1);
                outY = v12 + outY;
              }
              while ( (unsigned int)v26 < v13->modelInfo.model.smodelCollectionIndex );
            }
          }
          else
          {
            material = v13->material;
            if ( material )
              v30 = material->name;
            else
              v30 = "^3<unknown>^7";
            Com_sprintf_truncate<1024>((char (*)[1024])dest, "    material = %s", v30);
            CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
            outY = v12 + outY;
            if ( material )
            {
              layerCount = material->layerCount;
              v32 = 0i64;
              if ( material->layerCount )
              {
                do
                {
                  subMaterials = material->subMaterials;
                  v34 = "^3<unknown>^7";
                  if ( subMaterials[v32] )
                    v34 = subMaterials[v32];
                  Com_sprintf_truncate<1024>((char (*)[1024])dest, "     layer %2u: %s", (unsigned int)v32, v34);
                  CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
                  v32 = (unsigned int)(v32 + 1);
                  outY = v12 + outY;
                }
                while ( (_DWORD)v32 != layerCount );
              }
              v35 = DVARBOOL_cg_drawTechset;
              if ( !DVARBOOL_cg_drawTechset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTechset") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v35);
              if ( v35->current.enabled )
              {
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "    techset  = %s", material->techniqueSet->name);
                CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
                outY = v12 + outY;
                v36 = (char *)&queryFormat.fmt + 3;
                if ( (material->techniqueSet->flags & 0x1000000000i64) != 0 )
                  v36 = "hasPrepass ";
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "    surfProp  = %s", v36);
                CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
                outY = v12 + outY;
              }
              v8 = v47;
            }
          }
          modelType = v13->modelType;
          if ( modelType )
          {
            v38 = modelType - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                if ( v39 == 1 )
                {
                  Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = <super terrain> (idx: %u)", v13->modelInfo.superTerrain.surfaceIndex);
                }
                else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawmaterial.cpp", 208, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
                {
                  __debugbreak();
                }
              }
              else
              {
                Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = %s (ent: %u)", *(const char **)v13->modelInfo.world.surface, v13->modelInfo.model.entNum);
              }
            }
            else
            {
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = %s (smii: %u)", *(const char **)v13->modelInfo.world.surface, v13->modelInfo.model.entNum);
            }
          }
          else
          {
            surface = v13->modelInfo.world.surface;
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
              v43 = (char *)v13->modelInfo.world.surface - (char *)world->surfaces.surfaces;
              v44 = v43 / 40;
              if ( (v43 / 40 < 0 || v44 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v44, "signed", v43 / 40) )
                __debugbreak();
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = <world> (idx: %u)", (unsigned int)v44);
            }
            else
            {
              Com_sprintf_truncate<1024>((char (*)[1024])dest, "    model    = <world>");
            }
          }
          CG_DrawHits_DrawText(v10, dest, FontHandle, 8.0, outY, 1, 1, 0.25999999, color);
          vertAlign = v13->surfaceFlags;
          outY = v12 + outY;
          CG_GameInterface_DrawMaterial_DrawHitTable(localClientNum, v10, FontHandle, color, dest, textEnd, vertAlign, 0.25999999, v12, 8.0, &outY);
          v4 = v50;
          ++v8;
          outY = v12 + outY;
          v47 = v8;
        }
        while ( v8 != v49 );
        return;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v9 )
        __debugbreak();
    }
    v10 = &scrPlaceFull;
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

