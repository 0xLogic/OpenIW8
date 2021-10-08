/*
==============
HeadIconState_GetPosition
==============
*/

void __fastcall HeadIconState_GetPosition(const HeadIconState *icon, vec3_t *outpos)
{
  ?HeadIconState_GetPosition@@YAXPEBUHeadIconState@@AEATvec3_t@@@Z(icon, outpos);
}

/*
==============
HeadIconState_SetPosition
==============
*/

void __fastcall HeadIconState_SetPosition(HeadIconState *icon, const vec3_t *pos)
{
  ?HeadIconState_SetPosition@@YAXPEAUHeadIconState@@AEBTvec3_t@@@Z(icon, pos);
}

/*
==============
HeadIconState_GetPosition
==============
*/
void HeadIconState_GetPosition(const HeadIconState *icon, vec3_t *outpos)
{
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 96, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  if ( !icon->position.Get_position && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 104, ASSERT_TYPE_ASSERT, "(icon->position.Get_position)", (const char *)&queryFormat, "icon->position.Get_position") )
    __debugbreak();
  ((void (__fastcall *)(vec4_t *, vec3_t *))((unsigned __int64)icon->position.Get_position ^ s_aab_get_pointer_iconpos ^ (unsigned __int64)&icon->position))(&icon->position.position, outpos);
}

/*
==============
HeadIconState_SetPosition
==============
*/
void HeadIconState_SetPosition(HeadIconState *icon, const vec3_t *pos)
{
  if ( !icon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 124, ASSERT_TYPE_ASSERT, "(icon)", (const char *)&queryFormat, "icon") )
    __debugbreak();
  if ( !icon->position.Set_position && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 132, ASSERT_TYPE_ASSERT, "(icon->position.Set_position)", (const char *)&queryFormat, "icon->position.Set_position") )
    __debugbreak();
  ((void (__fastcall *)(const vec3_t *, vec4_t *))((unsigned __int64)icon->position.Set_position ^ s_aab_set_pointer_iconpos ^ (unsigned __int64)&icon->position.Get_position))(pos, &icon->position.position);
}

/*
==============
LUIElement_HeadIcons_Render
==============
*/

void __fastcall LUIElement_HeadIcons_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  HeadIconState *customElementData; 
  cg_t *LocalClientGlobals; 
  cg_t *v19; 
  signed int v23; 
  char v30; 
  const HeadIconExtendedView *p_headIconExtendedView; 
  bool v36; 
  LUITraceRequest *v37; 
  int FlashbangedRemainingTime; 
  char v49; 
  float v57; 
  float v58; 
  bool outHit; 
  vec3_t outWorldPosition; 
  char *outName; 
  lua_State *v62; 
  LUIElement *roota; 
  LUIElement *elementa; 
  HeadIconState *v65; 
  __int64 v66; 
  vec4_t color; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  v66 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmm6, xmm3
  }
  roota = root;
  elementa = element;
  v62 = luaVM;
  if ( !Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate() )
  {
    if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
      __debugbreak();
    customElementData = (HeadIconState *)element->customElementData;
    v65 = customElementData;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v19 = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm0, [rsp+138h+red]
      vmovss  dword ptr [rsp+138h+var_A0], xmm0
      vmovss  xmm1, [rsp+138h+green]
      vmovss  dword ptr [rsp+138h+var_A0+4], xmm1
      vmovss  xmm0, [rsp+138h+blue]
      vmovss  dword ptr [rsp+138h+var_A0+8], xmm0
      vmovss  dword ptr [rsp+138h+var_A0+0Ch], xmm6
    }
    v23 = 0;
    _RBX = (char *)&customElementData->headIconExtendedView.worldOrigin.z;
    _R15 = v19->predictedPlayerState.headIcons;
    _RBP = &v19->predictedPlayerState.headIconsExtendedData[0].worldOrigin.v[1];
    __asm
    {
      vmovss  xmm9, cs:__real@3b5a740e
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm10, cs:__real@3b03126f
    }
    do
    {
      if ( (_R15->flags & 1) != 0 )
      {
        if ( *((_DWORD *)_RBX - 8) != _R15->entityNumber )
          goto LABEL_13;
        v30 = *((_BYTE *)_RBP + 8);
        if ( _RBX[4] != v30 )
          goto LABEL_13;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp-4]
          vucomiss xmm0, dword ptr [rbx-8]
        }
        if ( _RBX[4] != v30 )
          goto LABEL_13;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vucomiss xmm0, dword ptr [rbx-4]
        }
        if ( _RBX[4] != v30 )
          goto LABEL_13;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+4]
          vucomiss xmm0, dword ptr [rbx]
        }
        if ( _RBX[4] != v30 )
        {
LABEL_13:
          *((_DWORD *)_RBX + 3) = LocalClientGlobals->time;
          _RBX[24] = 0;
          *((_QWORD *)_RBX + 2) = 0i64;
          HeadIconState_SetPosition(&customElementData[v23], &vec3_origin);
          _RBX[80] = 0;
        }
        *((_DWORD *)_RBX + 2) = LocalClientGlobals->time;
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovups xmmword ptr [rbx-20h], xmm0
          vmovsd  xmm1, qword ptr [r15+10h]
          vmovsd  qword ptr [rbx-10h], xmm1
          vmovups xmm0, xmmword ptr [rbp-4]
          vmovups xmmword ptr [rbx-8], xmm0
        }
      }
      p_headIconExtendedView = &customElementData[v23].headIconExtendedView;
      if ( (*(_RBX - 24) & 1) == 0 || CG_CalloutMarkerPing_CheckSquadPingsForTarget(localClientNum, *((_DWORD *)_RBX - 8), 0xFFFFFFFF, -1) != 53 || CG_CalloutMarkerPing_CheckPrevPredictedForTarget(localClientNum, *((_DWORD *)_RBX - 8), 0xFFFFFFFF, -1) != 53 )
        goto LABEL_42;
      if ( CG_Players_HeadIcons_GetWorldPosition(localClientNum, (const HeadIconView *)(_RBX - 32), p_headIconExtendedView, &outWorldPosition) )
      {
        HeadIconState_SetPosition((HeadIconState *)(_RBX - 32), &outWorldPosition);
        _RBX[80] = 1;
      }
      else
      {
        if ( !_RBX[80] )
          goto LABEL_41;
        if ( !*((_QWORD *)_RBX + 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 104, ASSERT_TYPE_ASSERT, "(icon->position.Get_position)", (const char *)&queryFormat, "icon->position.Get_position") )
          __debugbreak();
        ((void (__fastcall *)(char *, vec3_t *))(*((_QWORD *)_RBX + 7) ^ s_aab_get_pointer_iconpos ^ (unsigned __int64)(_RBX + 48)))(_RBX + 64, &outWorldPosition);
      }
      v36 = (*((_DWORD *)_RBX - 6) & 2) != 0;
      if ( (*((_DWORD *)_RBX - 6) & 2) != 0 )
      {
        v37 = (LUITraceRequest *)*((_QWORD *)_RBX + 2);
        if ( v37 )
        {
          if ( LUITraceRunner::GetTraceResult(localClientNum, v37, &outHit) )
          {
            *((_QWORD *)_RBX + 2) = 0i64;
            _RBX[24] = !outHit;
          }
        }
        else
        {
          *((_QWORD *)_RBX + 2) = LUITraceRunner::RequestTraceToPosition(localClientNum, &outWorldPosition, *((_DWORD *)_RBX - 8), 0, 0);
        }
        if ( !_RBX[24] )
          goto LABEL_41;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, xmm9; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm10; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      if ( *((_QWORD *)_RBX + 4) && *((_DWORD *)_RBX + 10) == *((_DWORD *)_RBX - 7) )
        goto LABEL_35;
      if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_HEADICON, *((_DWORD *)_RBX - 7), (const char **)&outName) )
      {
        *((_DWORD *)_RBX + 10) = *((_DWORD *)_RBX - 7);
        *((_QWORD *)_RBX + 4) = Image_Register(outName, IMAGE_TRACK_HUD);
LABEL_35:
        FlashbangedRemainingTime = CG_GetFlashbangedRemainingTime(localClientNum);
        v49 = 0;
        if ( FlashbangedRemainingTime <= 0 )
        {
          if ( !v36 || (v49 = 0, _RBX[24]) )
          {
            __asm
            {
              vmovss  [rsp+138h+var_F8], xmm6
              vmovss  [rsp+138h+var_100], xmm7
            }
            LUIElement_HeadIcons_RenderItem(localClientNum, elementa, roota, (const HeadIconView *)(_RBX - 32), *((const GfxImage **)_RBX + 4), &color, &outWorldPosition, v57, v58, v62);
          }
        }
        __asm { vcomiss xmm6, xmm8 }
        if ( !v49 )
        {
          __asm { vmovups xmm7, xmmword ptr [rbx+30h] }
          memset_0(_RBX - 32, 0, 0x78ui64);
          __asm { vmovups xmmword ptr [rbx+30h], xmm7 }
        }
      }
LABEL_41:
      memset(&outWorldPosition, 0, sizeof(outWorldPosition));
LABEL_42:
      ++v23;
      ++_R15;
      _RBP += 4;
      _RBX += 120;
      customElementData = v65;
    }
    while ( (unsigned int)v23 < 0x20 );
  }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
LUIElement_HeadIcons_RenderItem
==============
*/
void LUIElement_HeadIcons_RenderItem(LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, const HeadIconView *headIcon, const GfxImage *image, const vec4_t *color, const vec3_t *worldPosition, float introLerp, float outroLerp, lua_State *luaVM)
{
  __int64 v21; 
  bool v23; 
  const ScreenPlacement *v24; 
  const GfxViewInfo *ViewInfo; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  int v30; 
  bool v31; 
  int maxDistance; 
  char v74; 
  bool v75; 
  float fmt; 
  float fmta; 
  float screenPosition; 
  float outSnappedScreenPosition; 
  float snapToLocation; 
  bool v137[24]; 
  lua_State *v138; 
  LUIElement *elementa; 
  __int64 v140; 
  vec2_t outScreenPos; 
  vec2_t v142; 
  vec4_t v143; 
  vec2_t screenSnapOffset; 
  vec4_t quadVerts[4]; 
  char v146; 
  void *retaddr; 

  _RAX = &retaddr;
  v140 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  elementa = element;
  v21 = localClientNum;
  _R13 = worldPosition;
  v138 = luaVM;
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 165, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 166, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !headIcon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 167, ASSERT_TYPE_ASSERT, "(headIcon)", (const char *)&queryFormat, "headIcon") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 168, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_headicons.cpp", 169, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_22;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v23 )
      __debugbreak();
LABEL_22:
    v24 = &scrPlaceFull;
    goto LABEL_23;
  }
  v24 = &scrPlaceViewDisplay[v21];
LABEL_23:
  CG_WorldPosToScreenPosRealForScene((LocalClientNum_t)v21, v24, worldPosition, 0, &outScreenPos);
  ViewInfo = LUI_GetViewInfo();
  if ( ViewInfo )
    R_ScopeDistortionTransform(ViewInfo, &outScreenPos, &outScreenPos);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
  p_view = &LocalClientGlobals->refdef.view;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  *(_DWORD *)&v137[8] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  *(_DWORD *)&v137[12] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  v30 = (refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2);
  v31 = v30 == v[2];
  *(_DWORD *)&v137[16] = v30 ^ v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vsubss  xmm3, xmm0, [rsp+1B0h+var_158]
    vmovss  xmm1, dword ptr [r13+4]
    vsubss  xmm2, xmm1, [rsp+1B0h+var_154]
    vmovss  xmm0, dword ptr [r13+8]
    vsubss  xmm4, xmm0, [rsp+1B0h+var_150]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm6, xmm8
  }
  if ( !v31 )
  {
    maxDistance = headIcon->maxDistance;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcomiss xmm0, xmm8
      vcomiss xmm6, xmm0
    }
    if ( v31 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
        vmovss  xmm9, cs:__real@3f000000
        vmovss  xmm7, cs:__real@3f800000
        vcomiss xmm0, xmm8
      }
      if ( v31 )
      {
        __asm { vmovaps xmm10, xmm7 }
      }
      else
      {
        __asm
        {
          vdivss  xmm0, xmm0, xmm6; val
          vmovaps xmm2, xmm7; max
          vmovaps xmm1, xmm9; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm10, xmm0 }
        maxDistance = headIcon->maxDistance;
      }
      if ( maxDistance > 0 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, cs:__real@3dcccccd
          vminss  xmm6, xmm2, xmm7
        }
      }
      else
      {
        __asm { vmovaps xmm6, xmm7 }
      }
      *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
      __asm
      {
        vmovaps xmm12, xmm0
        vmulss  xmm1, xmm0, cs:__real@3f2aaaab
        vmulss  xmm2, xmm1, xmm10
        vmulss  xmm10, xmm2, xmm6
        vmulss  xmm11, xmm10, cs:__real@42a00000
      }
      _EAX = image->width;
      __asm
      {
        vmovd   xmm1, eax
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm3, xmm1, xmm11
      }
      _EAX = image->height;
      __asm
      {
        vmovd   xmm2, eax
        vcvtdq2ps xmm2, xmm2
        vdivss  xmm13, xmm3, xmm2
      }
      v74 = 0;
      v75 = (headIcon->flags & 4) == 0;
      if ( (headIcon->flags & 4) != 0 )
      {
        __asm
        {
          vmulss  xmm6, xmm11, xmm9
          vmovss  xmm0, dword ptr [rbp+0B0h+outScreenPos+4]
          vsubss  xmm2, xmm0, xmm6
          vmovss  xmm1, dword ptr [rbp+0B0h+outScreenPos]
          vmovss  dword ptr [rbp+0B0h+var_128], xmm1
          vmovss  dword ptr [rbp+0B0h+var_128+4], xmm2
          vmovss  dword ptr [rbp+0B0h+var_110], xmm8
          vmovss  dword ptr [rbp+0B0h+var_110+4], xmm8
        }
        v137[0] = 0;
        __asm
        {
          vmovss  dword ptr [rsp+1B0h+fmt], xmm9
          vmovaps xmm3, xmm11; elementHeight
          vmovaps xmm2, xmm13; elementwWidth
          vxorps  xmm1, xmm1, xmm1; snapRadius
        }
        LUIElement_Anchored_SnapScreenPositionToEdges((const LocalClientNum_t)v21, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &v142, &v142, v137, &screenSnapOffset);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0B0h+var_128+4]
          vaddss  xmm5, xmm0, xmm6
          vmovss  xmm1, dword ptr [rbp+0B0h+var_128]
          vmovss  dword ptr [rbp+0B0h+outScreenPos], xmm1
          vmovss  dword ptr [rbp+0B0h+outScreenPos+4], xmm5
        }
      }
      else
      {
        __asm { vmovss  xmm5, dword ptr [rbp+0B0h+outScreenPos+4] }
      }
      _RAX = color;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+0B0h+var_120], xmm0
        vmovss  xmm6, [rbp+0B0h+introLerp]
        vcomiss xmm6, xmm7
      }
      if ( v74 )
      {
        __asm { vmovaps xmm0, xmm6; t }
        LUI_Tween_Ease(*(float *)&_XMM0, EASE_OUT_QUAD);
        __asm
        {
          vsubss  xmm0, xmm7, xmm0
          vmulss  xmm1, xmm0, cs:__real@42200000
          vmulss  xmm3, xmm1, xmm10
          vmulss  xmm1, xmm6, dword ptr [rbp+0B0h+var_120+0Ch]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm6, [rbp+0B0h+outroLerp]
          vcomiss xmm6, xmm8
        }
        if ( v74 | v75 )
        {
LABEL_50:
          __asm
          {
            vmulss  xmm3, xmm9, dword ptr [rdi+20h]
            vmulss  xmm2, xmm9, dword ptr [rdi+24h]
            vsubss  xmm4, xmm3, dword ptr [rbp+0B0h+outScreenPos]
            vsubss  xmm0, xmm2, xmm5
            vmulss  xmm3, xmm0, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm1
            vmulss  xmm0, xmm12, xmm12
            vmulss  xmm4, xmm0, cs:__real@45c80000
            vmovaps xmm6, xmm7
            vcomiss xmm2, xmm4
          }
          if ( v74 )
            __asm { vdivss  xmm6, xmm2, xmm4 }
          CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
          __asm
          {
            vsubss  xmm0, xmm7, dword ptr [rax+738h]
            vmulss  xmm1, xmm0, cs:__real@3e4ccccd
            vmaxss  xmm3, xmm1, xmm6
            vmulss  xmm0, xmm3, dword ptr [rbp+0B0h+var_120+0Ch]
            vmovss  dword ptr [rbp+0B0h+var_120+0Ch], xmm0
            vmulss  xmm5, xmm13, xmm9
            vmovss  xmm4, dword ptr [rbp+0B0h+outScreenPos]
            vaddss  xmm2, xmm5, xmm4; right
            vmovss  xmm3, dword ptr [rbp+0B0h+outScreenPos+4]; bottom
            vsubss  xmm1, xmm3, xmm11; top
            vsubss  xmm0, xmm4, xmm5; left
          }
          LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
          __asm
          {
            vmovss  dword ptr [rsp+1B0h+snapToLocation], xmm7
            vmovss  dword ptr [rsp+1B0h+outSnappedScreenPosition], xmm7
            vmovss  dword ptr [rsp+1B0h+screenPosition], xmm8
            vmovss  dword ptr [rsp+1B0h+fmt], xmm8
          }
          LUI_Render_DrawImage((const LocalClientNum_t)v21, elementa, v138, (const vec4_t (*)[4])quadVerts, fmta, screenPosition, outSnappedScreenPosition, snapToLocation, &v143, image);
          goto LABEL_53;
        }
        __asm { vmovaps xmm0, xmm6; t }
        *(double *)&_XMM0 = LUI_Tween_Ease(*(float *)&_XMM0, EASE_IN_QUAD);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@41a00000
          vmulss  xmm3, xmm1, xmm10
          vsubss  xmm1, xmm7, xmm6
          vmulss  xmm1, xmm1, dword ptr [rbp+0B0h+var_120+0Ch]
        }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0B0h+outScreenPos+4]
        vsubss  xmm5, xmm2, xmm3
        vmovss  dword ptr [rbp+0B0h+var_120+0Ch], xmm1
        vmovss  dword ptr [rbp+0B0h+outScreenPos+4], xmm5
      }
      goto LABEL_50;
    }
  }
LABEL_53:
  memset(&v137[8], 0, 0xCui64);
  _R11 = &v146;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupHeadIcons
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHeadIcons(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupHeadIcons_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupHeadIcons_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupHeadIcons_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  void *v3; 
  signed int i; 
  unsigned int v5; 
  bdRandom v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_HeadIcons_Render;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0xF00ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0xF00ui64);
  for ( i = 0; (unsigned int)i < 0x20; ++i )
  {
    bdRandom::bdRandom(&v7);
    v5 = bdRandom::nextUInt(&v7) % 0x22;
    bdRandom::~bdRandom(&v7);
    SetObfuscatedFunction(v5, (unsigned __int64)v3 + 120 * i + 88, (unsigned __int64)v3 + 120 * i + 80, (void (__fastcall **)(const vec3_t *, vec4_t *))v3 + 15 * i + 10, (void (__fastcall **)(const vec4_t *, vec3_t *))v3 + 15 * i + 11, s_aab_set_pointer_iconpos, s_aab_get_pointer_iconpos);
  }
  return 0i64;
}

