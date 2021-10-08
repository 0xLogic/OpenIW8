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
  __int64 v9; 
  const dvar_t *v10; 
  bool v11; 
  const ScreenPlacement *v12; 
  GfxFont *FontHandle; 
  const vec4_t *color; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float fmt; 
  char *fmta; 
  float fmtb; 
  __int64 horzAlign; 
  double horzAligna; 
  __int64 vertAlign; 
  double vertAligna; 
  float v67; 
  double v68; 
  float v69; 
  int v70[3]; 
  __int64 v71; 
  char dest[1024]; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  v71 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm12
  }
  _RBP = hits;
  v9 = localClientIndex;
  v10 = DVARBOOL_cg_drawRange;
  if ( !DVARBOOL_cg_drawRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && hitCount )
  {
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v12 = &scrPlaceViewDisplay[v9];
LABEL_13:
        __asm
        {
          vmovss  xmm8, cs:__real@3e851eb8
          vmovaps xmm2, xmm8; scale
        }
        FontHandle = UI_GetFontHandle(v12, 5, *(float *)&_XMM2);
        __asm { vmovaps xmm1, xmm8; scale }
        UI_TextHeight(FontHandle, *(float *)&_XMM1);
        __asm
        {
          vxorps  xmm12, xmm12, xmm12
          vcvtsi2ss xmm12, xmm12, eax
        }
        color = CG_DrawHits_GetHitColor(0);
        if ( (unsigned int)v9 >= cg_t::ms_allocatedCount )
        {
          LODWORD(vertAlign) = cg_t::ms_allocatedCount;
          LODWORD(horzAlign) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", horzAlign, vertAlign) )
            __debugbreak();
        }
        if ( !cg_t::ms_cgArray[v9] )
        {
          LODWORD(vertAlign) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", vertAlign) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(vertAlign) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", vertAlign) )
            __debugbreak();
        }
        p_view = &cg_t::ms_cgArray[v9]->refdef.view;
        if ( !p_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = p_view->refdefViewOrg_aab;
        v = (_DWORD *)p_view->org.org.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        v70[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
        v70[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
        v70[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
        if ( (_RBP->contentFlags & 0x800) != 0 )
        {
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "Distance to Target: Sky");
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+4]
            vsubss  xmm3, xmm0, [rsp+4D8h+var_488]
            vmovss  xmm1, dword ptr [rbp+8]
            vsubss  xmm2, xmm1, [rsp+4D8h+var_484]
            vmovss  xmm0, dword ptr [rbp+0Ch]
            vsubss  xmm4, xmm0, [rsp+4D8h+var_480]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcvtss2sd xmm2, xmm1, xmm1
            vmovq   r8, xmm2
          }
          Com_sprintf_truncate<1024>((char (*)[1024])dest, "Distance to Target: %.2f", *(double *)&_XMM2);
        }
        __asm
        {
          vmovss  dword ptr [rsp+4D8h+var_4A0], xmm8
          vmovss  xmm6, cs:__real@42199999
          vmovss  dword ptr [rsp+4D8h+fmt], xmm6
          vmovss  xmm3, cs:__real@41000000; x
        }
        CG_DrawHits_DrawText(v12, dest, FontHandle, *(float *)&_XMM3, fmt, 1, 1, v67, color);
        __asm
        {
          vaddss  xmm6, xmm12, xmm6
          vmovss  xmm0, [rsp+4D8h+var_480]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovss  xmm1, [rsp+4D8h+var_484]
          vcvtss2sd xmm1, xmm1, xmm1
          vmovss  xmm3, [rsp+4D8h+var_488]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovss  xmm4, dword ptr [rbp+0Ch]
          vcvtss2sd xmm4, xmm4, xmm4
          vmovss  xmm5, dword ptr [rbp+8]
          vcvtss2sd xmm5, xmm5, xmm5
          vmovss  xmm2, dword ptr [rbp+4]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+4D8h+var_4A0], xmm0
          vmovsd  qword ptr [rsp+4D8h+vertAlign], xmm1
          vmovsd  qword ptr [rsp+4D8h+horzAlign], xmm3
          vmovsd  [rsp+4D8h+fmt], xmm4
          vmovaps xmm3, xmm5
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        Com_sprintf_truncate<1024>((char (*)[1024])dest, "Hit Location = %.2f, %.2f, %.2f / Camera Location = %.2f, %.2f, %.2f", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta, horzAligna, vertAligna, v68);
        __asm
        {
          vmovss  dword ptr [rsp+4D8h+var_4A0], xmm8
          vmovss  dword ptr [rsp+4D8h+fmt], xmm6
          vmovss  xmm3, cs:__real@41000000; x
        }
        CG_DrawHits_DrawText(v12, dest, FontHandle, *(float *)&_XMM3, fmtb, 1, 1, v69, color);
        memset(v70, 0, sizeof(v70));
        goto LABEL_34;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v11 )
        __debugbreak();
    }
    v12 = &scrPlaceFull;
    goto LABEL_13;
  }
LABEL_34:
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm12, xmmword ptr [r11-30h]
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

