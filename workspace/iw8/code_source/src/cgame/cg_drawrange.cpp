/*
==============
CG_DrawRange_DrawHitTable
==============
*/

void __fastcall CG_DrawRange_DrawHitTable(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  ?CG_DrawRange_DrawHitTable@@YAXW4LocalClientNum_t@@PEBUCG_DrawHits_Hit@@I@Z(localClientIndex, hits, hitCount);
}

/*
==============
CG_DrawRange_Update
==============
*/

void __fastcall CG_DrawRange_Update(LocalClientNum_t localClientIndex)
{
  ?CG_DrawRange_Update@@YAXW4LocalClientNum_t@@@Z(localClientIndex);
}

/*
==============
CG_DrawRange_DrawHitTable
==============
*/
void CG_DrawRange_DrawHitTable(LocalClientNum_t localClientIndex, const CG_DrawHits_Hit *hits, unsigned int hitCount)
{
  __int64 v5; 
  const dvar_t *v6; 
  bool v7; 
  const ScreenPlacement *v8; 
  GfxFont *FontHandle; 
  float v10; 
  const vec4_t *color; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  int v17[3]; 
  __int64 v18; 
  char dest[1024]; 

  v18 = -2i64;
  v5 = localClientIndex;
  v6 = DVARBOOL_cg_drawRange;
  if ( !DVARBOOL_cg_drawRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && hitCount )
  {
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v8 = &scrPlaceViewDisplay[v5];
LABEL_13:
        FontHandle = UI_GetFontHandle(v8, 5, 0.25999999);
        v10 = (float)UI_TextHeight(FontHandle, 0.25999999);
        color = CG_DrawHits_GetHitColor(0);
        if ( (unsigned int)v5 >= cg_t::ms_allocatedCount )
        {
          LODWORD(vertAlign) = cg_t::ms_allocatedCount;
          LODWORD(horzAlign) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", horzAlign, vertAlign) )
            __debugbreak();
        }
        if ( !cg_t::ms_cgArray[v5] )
        {
          LODWORD(vertAlign) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", vertAlign) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(vertAlign) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", vertAlign) )
            __debugbreak();
        }
        p_view = &cg_t::ms_cgArray[v5]->refdef.view;
        if ( !p_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = p_view->refdefViewOrg_aab;
        v = (_DWORD *)p_view->org.org.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        v17[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
        v17[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
        v17[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
        if ( (hits->contentFlags & 0x800) != 0 )
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "Distance to Target: Sky");
        else
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "Distance to Target: %.2f", fsqrt((float)((float)((float)(hits->hitPosition.v[1] - *(float *)&v17[1]) * (float)(hits->hitPosition.v[1] - *(float *)&v17[1])) + (float)((float)(hits->hitPosition.v[0] - *(float *)v17) * (float)(hits->hitPosition.v[0] - *(float *)v17))) + (float)((float)(hits->hitPosition.v[2] - *(float *)&v17[2]) * (float)(hits->hitPosition.v[2] - *(float *)&v17[2]))));
        CG_DrawHits_DrawText(v8, dest, FontHandle, 8.0, 38.399998, 1, 1, 0.25999999, color);
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "Hit Location = %.2f, %.2f, %.2f / Camera Location = %.2f, %.2f, %.2f", hits->hitPosition.v[0], hits->hitPosition.v[1], hits->hitPosition.v[2], *(float *)v17, *(float *)&v17[1], *(float *)&v17[2]);
        CG_DrawHits_DrawText(v8, dest, FontHandle, 8.0, v10 + 38.399998, 1, 1, 0.25999999, color);
        memset(v17, 0, sizeof(v17));
        return;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v7 )
        __debugbreak();
    }
    v8 = &scrPlaceFull;
    goto LABEL_13;
  }
}

/*
==============
CG_DrawRange_Update
==============
*/
void CG_DrawRange_Update(LocalClientNum_t localClientIndex)
{
  const dvar_t *v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_drawrange.cpp", 23, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = DVARBOOL_cg_drawRange;
  if ( !DVARBOOL_cg_drawRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    CG_DrawHits_Activate(localClientIndex, DODGE, (CG_DrawHits_Filter)6, None);
}

