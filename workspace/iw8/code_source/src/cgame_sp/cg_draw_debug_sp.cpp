/*
==============
CG_DrawDebugSP_DrawFrontendOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawFrontendOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawFrontendOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawGameMsgWindows
==============
*/

void __fastcall CgDrawDebugSP::DrawGameMsgWindows(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?DrawGameMsgWindows@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(this, localClientNum, scrPlace);
}

/*
==============
CG_DrawDebugSP_DrawNoGameModeOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawNoGameModeOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawNoGameModeOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawTransientOverlays
==============
*/

void __fastcall CgDrawDebugSP::DrawTransientOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ?DrawTransientOverlays@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgDrawDebugSP::PrintStreamingPos
==============
*/

double __fastcall CgDrawDebugSP::PrintStreamingPos(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float posY)
{
  double result; 

  *(float *)&result = ?PrintStreamingPos@CgDrawDebugSP@@IEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, posY);
  return result;
}

/*
==============
CgDrawDebugSP::DrawAnimationOverlays
==============
*/

void __fastcall CgDrawDebugSP::DrawAnimationOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ?DrawAnimationOverlays@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgDrawDebugSP::CgDrawDebugSP
==============
*/

void __fastcall CgDrawDebugSP::CgDrawDebugSP(CgDrawDebugSP *this)
{
  ??0CgDrawDebugSP@@QEAA@XZ(this);
}

/*
==============
CG_DrawDebugSP_DrawPSFlags
==============
*/

void __fastcall CG_DrawDebugSP_DrawPSFlags(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawPSFlags@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawEntitiesLoD
==============
*/

void __fastcall CgDrawDebugSP::DrawEntitiesLoD(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ?DrawEntitiesLoD@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawSaveInfo
==============
*/

void __fastcall CG_DrawDebugSP_DrawSaveInfo(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawSaveInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawDebugOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::DrawClientNetPerf
==============
*/

double __fastcall CgDrawDebugSP::DrawClientNetPerf(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float y)
{
  double result; 

  *(float *)&result = ?DrawClientNetPerf@CgDrawDebugSP@@MEBAMW4LocalClientNum_t@@PEBUScreenPlacement@@M@Z(this, localClientNum, scrPlace, y);
  return result;
}

/*
==============
CG_DrawDebugSP_DrawFullScreenDebugOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawFullScreenDebugOverlays(const LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugSP_DrawFullScreenDebugOverlays@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawDebugSP::PrintUpperRightDebugInfo
==============
*/

void __fastcall CgDrawDebugSP::PrintUpperRightDebugInfo(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?PrintUpperRightDebugInfo@CgDrawDebugSP@@MEBAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(this, localClientNum, scrPlace);
}

/*
==============
CgDrawDebugSP::CgDrawDebugSP
==============
*/
void CgDrawDebugSP::CgDrawDebugSP(CgDrawDebugSP *this)
{
  this->__vftable = (CgDrawDebugSP_vtbl *)&CgDrawDebugSP::`vftable';
}

/*
==============
CG_DrawDebugSP_DrawAIAnimTreeRecurse
==============
*/

float __fastcall CG_DrawDebugSP_DrawAIAnimTreeRecurse(const ScreenPlacement *scrPlace, double x, double y, double scale, const DObj *obj, const XAnimTree *tree, unsigned __int16 infoIndex, int depth)
{
  const XAnim_s *SubTreeAnims; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  const vec4_t *v33; 
  int v34; 
  unsigned int animIndex; 
  unsigned int flags; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  const char *v38; 
  XAnimCurveID curveID; 
  bool v41; 
  bool v42; 
  scr_string_t notifyName; 
  GfxFont *smallDevFont; 
  const char *v52; 
  const char *v66; 
  scr_string_t v82; 
  bool HasTime; 
  GfxFont *v84; 
  scr_string_t v85; 
  const char *v86; 
  const char *v97; 
  const char *v98; 
  XAnimTree *v117; 
  char *v122; 
  GfxFont *v123; 
  const char *v124; 
  unsigned __int16 children; 
  DObj *v130; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  float fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmtg; 
  float fmth; 
  float fmti; 
  char *s; 
  char *sa; 
  char *sb; 
  char *sc; 
  char *sd; 
  char *se; 
  vec4_t *color; 
  vec4_t *colora; 
  vec4_t *colorb; 
  vec4_t *colorc; 
  __int64 align; 
  __int64 aligna; 
  double alignb; 
  double alignc; 
  GfxFont *font; 
  GfxFont *fonta; 
  GfxFont *fontb; 
  GfxFont *fontc; 
  int v170[2]; 
  const char *AnimDebugName; 
  int destPos[2]; 
  XAnimTree *v173; 
  DObj *v174; 
  float ikWeights[2]; 
  __int64 v176; 
  float animWeights[2]; 
  __int64 v178; 
  char v179[8]; 
  __int64 v180; 
  __int64 v181; 
  __int64 v182; 
  char v183[8]; 
  __int64 v184; 
  __int64 v185; 
  __int64 i; 
  char dest[8]; 
  __int64 v188; 
  __int64 v189; 
  __int64 v190; 
  __int64 v191; 
  __int64 v192; 
  __int64 v193; 
  __int64 v194; 
  char v195[64]; 
  char buffer[512]; 
  char v197; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  v174 = (DObj *)obj;
  v173 = (XAnimTree *)tree;
  v170[0] = 0;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm11, xmm2
    vmovaps xmm9, xmm1
  }
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 222, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  _RDI = GetAnimInfo(infoIndex);
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RDI->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 228, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  destPos[0] = 0;
  *(_QWORD *)ikWeights = 0i64;
  v176 = 0i64;
  *(_QWORD *)animWeights = 0i64;
  v178 = 0i64;
  *(_QWORD *)dest = 0i64;
  v188 = 0i64;
  v189 = 0i64;
  v190 = 0i64;
  v191 = 0i64;
  v192 = 0i64;
  v193 = 0i64;
  v194 = 0i64;
  XAnimIKGetWeights(obj, _RDI, ikWeights, animWeights);
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  _RBX = 0i64;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    __asm
    {
      vmovss  xmm0, [rbp+rbx*4+320h+ikWeights]
      vmaxss  xmm0, xmm0, xmm8
      vminss  xmm6, xmm0, xmm10
    }
    if ( _RBX )
      Com_sprintfPos_truncate(dest, 0x40ui64, destPos, ", ");
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+420h+fmt], xmm0
    }
    Com_sprintfPos_truncate(dest, 0x40ui64, destPos, "%.3f", *(double *)&fmt);
    v28 = (unsigned __int64)++_RBX < 4;
    v29 = _RBX == 4;
    v30 = (unsigned __int64)_RBX <= 4;
  }
  while ( _RBX < 4 );
  __asm { vcomiss xmm8, dword ptr [rdi+3Ch] }
  if ( (unsigned __int64)_RBX > 4 )
  {
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 255, ASSERT_TYPE_ASSERT, "(state->weight >= 0)", (const char *)&queryFormat, "state->weight >= 0");
    v28 = 0;
    v29 = !v31;
    v30 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vucomiss xmm0, xmm8
  }
  if ( v29 )
  {
    v33 = &colorMdGrey;
  }
  else
  {
    __asm { vcomiss xmm0, dword ptr [rdi+38h] }
    if ( v28 )
    {
      v33 = &colorLtBlue;
    }
    else
    {
      v33 = &colorRedFaded;
      if ( v30 )
        v33 = &colorWhite;
    }
  }
  v34 = 0;
  *(_QWORD *)v183 = 0i64;
  v184 = 0i64;
  v185 = 0i64;
  for ( i = 0i64; v34 < depth; ++v34 )
  {
    if ( v34 >= 16 )
      break;
    Com_sprintf(v183, 0x20ui64, "%s  ", v183);
  }
  animIndex = _RDI->animIndex;
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 282, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
  *(_QWORD *)v179 = 0i64;
  v180 = 0i64;
  v181 = 0i64;
  v182 = 0i64;
  if ( !_RDI->animToModel )
  {
    flags = _RDI->animParent.flags;
    if ( (flags & 0x100) != 0 )
    {
      Com_sprintfPos_truncate(v179, 0x20ui64, v170, "(overlay)");
    }
    else if ( (flags & 0x200) != 0 )
    {
      Com_sprintfPos_truncate(v179, 0x20ui64, v170, "(additive mul)");
    }
    else if ( (flags & 0x210) != 0 )
    {
      Com_sprintfPos_truncate(v179, 0x20ui64, v170, "(additive)");
    }
    else if ( XAnimIsCustomNode(SubTreeAnims, _RDI) )
    {
      CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, _RDI);
      if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 305, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
        __debugbreak();
      v38 = SL_ConvertToString((scr_string_t)*CustomNodeTypeInfo->name);
      Com_sprintfPos_truncate(v179, 0x20ui64, v170, "(%s)", v38);
    }
  }
  v195[0] = 0;
  curveID = _RDI->state.curveID;
  if ( curveID != CURVE_ASSET_END && curveID )
    __asm { vcomiss xmm8, dword ptr [rdi+34h] }
  if ( _RDI->animToModel )
  {
    _RBX = _RDI->parts;
    v41 = _RBX == NULL;
    if ( !_RBX )
    {
      v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 322, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts");
      v41 = !v42;
      if ( v42 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+68h]
      vucomiss xmm3, xmm8
      vmovss  xmm4, dword ptr [rdi+28h]
      vmovss  xmm5, dword ptr [rdi+2Ch]
      vsubss  xmm2, xmm4, xmm5
    }
    if ( !v41 )
    {
      __asm
      {
        vcmpltss xmm0, xmm2, xmm8
        vaddss  xmm1, xmm2, xmm10
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm8, xmm0, xmm3
      }
    }
    notifyName = _RDI->notifyName;
    smallDevFont = cls.smallDevFont;
    if ( notifyName )
    {
      v52 = SL_ConvertToString(notifyName);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+40h]
        vmovss  xmm2, dword ptr [rdi+28h]
        vmovss  xmm3, dword ptr [rdi+2Ch]
        vmovss  xmm5, dword ptr [rdi+3Ch]
        vmovss  xmm4, dword ptr [rdi+38h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+420h+font], xmm1
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  qword ptr [rsp+420h+align], xmm0
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+420h+color], xmm2
        vmovsd  [rsp+420h+s], xmm3
        vcvtss2sd xmm5, xmm5, xmm5
        vmovaps xmm3, xmm5
        vcvtss2sd xmm4, xmm4, xmm4
        vmovq   r9, xmm3
        vmovsd  [rsp+420h+fmt], xmm4
      }
      v66 = j_va("%s%s: W %.3f -> %.3f, T %.3f -> %.3f, D %.3f, R %.3f, IK %s, '%s'%s", v183, AnimDebugName, _R9, fmta, s, color, align, font, dest, v52, v195, *(_QWORD *)v170);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+40h]
        vmovss  xmm3, dword ptr [rdi+3Ch]
        vcvtss2sd xmm2, xmm4, xmm4
        vcvtss2sd xmm4, xmm5, xmm5
        vmovss  xmm5, dword ptr [rdi+38h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+420h+font], xmm0
        vcvtss2sd xmm1, xmm8, xmm8
        vmovsd  qword ptr [rsp+420h+align], xmm1
        vmovsd  [rsp+420h+color], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+420h+s], xmm4
        vmovq   r9, xmm3
        vmovsd  [rsp+420h+fmt], xmm5
      }
      v66 = j_va("%s%s: W %.3f -> %.3f, T %.3f -> %.3f, D %.3f, R %.3f, IK %s%s", v183, AnimDebugName, _R9, fmtb, sa, colora, aligna, fonta, dest, v195);
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm11; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+420h+fmt], xmm7
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v66, v33, 5, smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm0, xmm11, xmm0
    }
  }
  else
  {
    v82 = _RDI->notifyName;
    HasTime = XAnimHasTime(SubTreeAnims, animIndex);
    v29 = v82 == 0;
    v84 = cls.smallDevFont;
    if ( v29 )
    {
      if ( HasTime )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+40h]
          vmovss  xmm1, dword ptr [rdi+28h]
          vmovss  xmm2, dword ptr [rdi+2Ch]
          vmovss  xmm3, dword ptr [rdi+38h]
          vmovss  xmm4, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+420h+font], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+420h+align], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+420h+color], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  [rsp+420h+s], xmm3
          vmovsd  [rsp+420h+fmt], xmm4
        }
        v97 = j_va("%s%s: %s W %.3f -> %.3f, T %.3f -> %.3f, R %.3f, IK %s%s", v183, AnimDebugName, v179, *(double *)&fmtf, *(double *)&sd, *(double *)&colorc, alignc, *(double *)&fontc, dest, v195);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+38h]
          vmovss  xmm1, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+420h+s], xmm0
          vmovsd  [rsp+420h+fmt], xmm1
        }
        v97 = j_va("%s%s: %s W %.3f -> %.3f, IK %s%s", v183, AnimDebugName, v179, *(double *)&fmtg, *(double *)&se, dest, v195);
      }
    }
    else
    {
      v85 = _RDI->notifyName;
      if ( HasTime )
      {
        v86 = SL_ConvertToString(v85);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+40h]
          vmovss  xmm1, dword ptr [rdi+28h]
          vmovss  xmm2, dword ptr [rdi+2Ch]
          vmovss  xmm3, dword ptr [rdi+38h]
          vmovss  xmm4, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+420h+font], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+420h+align], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+420h+color], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  [rsp+420h+s], xmm3
          vmovsd  [rsp+420h+fmt], xmm4
        }
        v97 = j_va("%s%s: %s W %.3f -> %.3f, T %.3f -> %.3f, R %.3f, IK %s '%s'%s", v183, AnimDebugName, v179, *(double *)&fmtd, *(double *)&sb, *(double *)&colorb, alignb, *(double *)&fontb, dest, v86, v195);
      }
      else
      {
        v98 = SL_ConvertToString(v85);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+38h]
          vmovss  xmm1, dword ptr [rdi+3Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+420h+s], xmm0
          vmovsd  [rsp+420h+fmt], xmm1
        }
        v97 = j_va("%s%s: %s W %.3f -> %.3f, IK %s, '%s'%s", v183, AnimDebugName, v179, *(double *)&fmte, *(double *)&sc, dest, v98, v195);
      }
    }
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm11; y
      vmovaps xmm1, xmm9; x
      vmovss  dword ptr [rsp+420h+fmt], xmm7
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, v97, v33, 5, v84);
    v117 = v173;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    destPos[1] = 0;
    __asm { vaddss  xmm8, xmm11, xmm0 }
    XAnimCustomNodePrintDebugInfo(v173, SubTreeAnims, _RDI, buffer, 512, depth, &destPos[1]);
    __asm { vmovaps xmm6, xmm8 }
    if ( destPos[1] > 0 )
    {
      v122 = strtok(buffer, "\n");
      if ( v122 )
      {
        do
        {
          v123 = cls.smallDevFont;
          v124 = j_va((const char *)&queryFormat, v122);
          __asm
          {
            vmovaps xmm3, xmm7; xScale
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm9; x
            vmovss  dword ptr [rsp+420h+fmt], xmm7
          }
          CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmti, v124, v33, 5, v123);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vaddss  xmm6, xmm6, xmm0
          }
          v122 = strtok(NULL, "\n");
        }
        while ( v122 );
        v117 = v173;
      }
    }
    children = _RDI->children;
    if ( children )
    {
      v130 = v174;
      do
      {
        __asm
        {
          vmovaps xmm3, xmm7; scale
          vmovaps xmm2, xmm6; y
          vmovaps xmm1, xmm9; x
        }
        *(float *)&_XMM0 = CG_DrawDebugSP_DrawAIAnimTreeRecurse(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v130, v117, children, depth + 1);
        __asm { vmovaps xmm6, xmm0 }
        children = GetAnimInfo(children)->next;
      }
      while ( children );
    }
    __asm { vmovaps xmm0, xmm6 }
  }
  _R11 = &v197;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawDebugSP_DrawDebugOverlays
==============
*/
void CG_DrawDebugSP_DrawDebugOverlays(const LocalClientNum_t localClientNum)
{
  CgDrawDebug v1; 

  v1.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  CgDrawDebug::DrawDebugOverlays(&v1, localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawFrontendOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawFrontendOverlays(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  CgDrawDebug v4; 

  v4.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  __asm { vxorps  xmm2, xmm2, xmm2; posY }
  CgDrawDebug::PrintFrontendUpperRightDebugInfo(&v4, localClientNum, *(float *)&_XMM2);
}

/*
==============
CG_DrawDebugSP_DrawFullScreenDebugOverlays
==============
*/
void CG_DrawDebugSP_DrawFullScreenDebugOverlays(const LocalClientNum_t localClientNum)
{
  CgDrawDebug v1; 

  v1.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  CgDrawDebug::DrawFullScreenDebugOverlays(&v1, localClientNum);
}

/*
==============
CG_DrawDebugSP_DrawNoGameModeOverlays
==============
*/

void __fastcall CG_DrawDebugSP_DrawNoGameModeOverlays(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  CgDrawDebug v4; 

  v4.__vftable = (CgDrawDebug_vtbl *)&CgDrawDebugSP::`vftable';
  __asm { vxorps  xmm2, xmm2, xmm2; posY }
  CgDrawDebug::PrintNoGameModeUpperRightDebugInfo(&v4, localClientNum, *(float *)&_XMM2);
}

/*
==============
CG_DrawDebugSP_DrawPSFlags
==============
*/
void CG_DrawDebugSP_DrawPSFlags(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *predictedPlayerEntity; 
  const playerState_s *p_predictedPlayerState; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  GfxFont *v17; 
  GfxFont *v18; 
  __int64 SharedPMFlags; 
  bool v22; 
  unsigned int v23; 
  __int64 v24; 
  int v25; 
  bool v26; 
  __int64 v27; 
  __int64 SharedPLFlags; 
  bool v31; 
  __int64 v32; 
  int v33; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  char outBuffer[2048]; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->predictedPlayerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 862, ASSERT_TYPE_ASSERT, "(cgameGlob->predictedPlayerEntity)", (const char *)&queryFormat, "cgameGlob->predictedPlayerEntity") )
    __debugbreak();
  predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  __asm
  {
    vmovss  xmm7, cs:__real@3e3851ec
    vmovaps xmm2, xmm7; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmovaps xmm2, xmm6; scale
  }
  v17 = FontHandle;
  v18 = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@c2f00000
    vmovss  [rsp+8D8h+var_898], xmm6
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+8D8h+y], xmm0
    vmovss  dword ptr [rsp+8D8h+fmt], xmm1
  }
  UI_DrawText(ActivePlacement, "Client View of Flags", 2048, v18, fmt, y, 2, 1, v55, &colorWhite, 3);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 713, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SharedPMFlags = CG_DrawDebug_GetSharedPMFlags(&LocalClientGlobals->predictedPlayerState, outBuffer, 2048);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v22 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x3Au);
  v23 = 55;
  v24 = 55i64;
  if ( v22 )
    v24 = 50i64;
  v25 = Com_sprintf(&outBuffer[SharedPMFlags], 2048 - (int)SharedPMFlags, "^%cSWIMMING\n", v24) + SharedPMFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v26 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x3Bu);
  v27 = 55i64;
  if ( v26 )
    v27 = 50i64;
  Com_sprintf(&outBuffer[v25], 2048 - v25, "^%cNO_WALK\n", v27);
  __asm
  {
    vmovss  xmm8, cs:__real@41a00000
    vmovss  xmm9, cs:__real@41f00000
    vmovss  [rsp+8D8h+var_898], xmm7
    vmovss  [rsp+8D8h+y], xmm8
    vmovss  dword ptr [rsp+8D8h+fmt], xmm9
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v17, fmta, ya, 1, 1, v56, &colorWhite, 3);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 793, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SharedPLFlags = CG_DrawDebug_GetSharedPLFlags(p_predictedPlayerState, outBuffer, 2048);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v31 = GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->linkFlags, ACTIVE, 7u);
  v32 = 55i64;
  if ( v31 )
    v32 = 50i64;
  v33 = Com_sprintf(&outBuffer[SharedPLFlags], 2048 - (int)SharedPLFlags, "^%cTURRET_LINK_ANGLES\n", v32) + SharedPLFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->linkFlags, ACTIVE, 8u) )
    v23 = 50;
  Com_sprintf(&outBuffer[v33], 2048 - v33, "^%cTRACK_VELOCITY\n", v23);
  __asm
  {
    vmovss  xmm6, cs:__real@43af0000
    vmovss  [rsp+8D8h+var_898], xmm7
    vmovss  [rsp+8D8h+y], xmm6
    vmovss  dword ptr [rsp+8D8h+fmt], xmm9
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v17, fmtb, yb, 1, 1, v57, &colorWhite, 3);
  CG_DrawDebugSP_GetPWFlags(p_predictedPlayerState, outBuffer, 2048);
  __asm
  {
    vmovss  xmm0, cs:__real@432f0000
    vmovss  [rsp+8D8h+var_898], xmm7
    vmovss  [rsp+8D8h+y], xmm8
    vmovss  dword ptr [rsp+8D8h+fmt], xmm0
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v17, fmtc, yc, 1, 1, v58, &colorWhite, 3);
  CG_DrawDebugSP_GetPOFlags(p_predictedPlayerState, outBuffer, 2048);
  __asm
  {
    vmovss  [rsp+8D8h+var_898], xmm7
    vmovss  [rsp+8D8h+y], xmm8
    vmovss  dword ptr [rsp+8D8h+fmt], xmm6
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v17, fmtd, yd, 1, 1, v59, &colorWhite, 3);
  CG_DrawDebugSP_GetPEFlags(&predictedPlayerEntity->nextState, outBuffer, 2048);
  __asm
  {
    vmovss  xmm0, cs:__real@42a00000
    vmovss  xmm1, cs:__real@44098000
    vmovss  [rsp+8D8h+var_898], xmm7
    vmovss  [rsp+8D8h+y], xmm0
    vmovss  dword ptr [rsp+8D8h+fmt], xmm1
  }
  UI_DrawText(ActivePlacement, outBuffer, 2048, v17, fmte, ye, 1, 1, v60, &colorWhite, 3);
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_DrawDebugSP_DrawSaveInfo
==============
*/
void CG_DrawDebugSP_DrawSaveInfo(const LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int v6; 
  float v10; 
  float v11; 
  float v12; 
  char buffer[2048]; 

  __asm
  {
    vmovaps [rsp+888h+var_18], xmm6
    vmovss  xmm6, cs:__real@3e800000
    vmovaps xmm2, xmm6; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
  v6 = SaveMemory_WriteInfoToBuffer(buffer, 2048);
  PendingSaveList_WriteInfoToBuffer(&buffer[v6], 2048 - v6);
  __asm
  {
    vmovss  xmm0, cs:__real@41a00000
    vmovss  xmm1, cs:__real@42200000
    vmovss  [rsp+888h+var_848], xmm6
    vmovss  [rsp+888h+var_860], xmm0
    vmovss  [rsp+888h+var_868], xmm1
  }
  UI_DrawText(ActivePlacement, buffer, 2048, FontHandle, v10, v11, 1, 1, v12, &colorWhite, 3);
  __asm { vmovaps xmm6, [rsp+888h+var_18] }
}

/*
==============
CG_DrawDebugSP_GetPEFlags
==============
*/
__int64 CG_DrawDebugSP_GetPEFlags(const entityState_t *es, char *outBuffer, int bufferSize)
{
  unsigned __int64 v3; 
  __int64 v6; 
  LerpEntityState *p_lerp; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 

  v3 = bufferSize;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 818, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 819, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  v6 = Com_sprintf(outBuffer, v3, "EntityStateFlags\n");
  p_lerp = &es->lerp;
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0);
  v9 = 55;
  v10 = 55i64;
  if ( v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[v6], (int)v3 - (int)v6, "^%cNONSOLID\n", v10) + v6;
  v12 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 2u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], (int)v3 - v11, "^%cTELEPORT_BIT\n", v13) + v11;
  v15 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 3u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], (int)v3 - v14, "^%cCROUCHING\n", v16) + v14;
  v18 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 4u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], (int)v3 - v17, "^%cPRONE\n", v19) + v17;
  v21 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xCu);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], (int)v3 - v20, "^%cNODRAW\n", v22) + v20;
  v24 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xAu);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], (int)v3 - v23, "^%cFIRING\n", v25) + v23;
  v27 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 5u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], (int)v3 - v26, "^%cTURRET_ACTIVE_PRONE\n", v28) + v26;
  v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 6u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], (int)v3 - v29, "^%cTURRET_ACTIVE_DUCK\n", v31) + v29;
  v33 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 8u);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], (int)v3 - v32, "^%cAIM_ASSIST\n", v34) + v32;
  v36 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 9u);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], (int)v3 - v35, "^%cLASER_SIGHT\n", v37) + v35;
  v39 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xBu);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], (int)v3 - v38, "^%cVEHICLE_ACTIVE\n", v40) + v38;
  v42 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0xEu);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], (int)v3 - v41, "^%cTHERMAL_DRAW\n", v43) + v41;
  v45 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x1Bu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], (int)v3 - v44, "^%cVEHICLE_TANK\n", v46) + v44;
  v48 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], (int)v3 - v47, "^%cVEHICLE_VIEWLOCK\n", v49) + v47;
  v51 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x14u);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], (int)v3 - v50, "^%cDONT_CAST_SHADOWS\n", v52) + v50;
  v54 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x13u);
  v55 = 55i64;
  if ( !v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], (int)v3 - v53, "^%cLASER_FORCE_SIGHT\n", v55) + v53;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_spValue, 0x15u) )
    v9 = 50;
  return (unsigned int)(v56 + Com_sprintf(&outBuffer[v56], (int)v3 - v56, "^%cUSE_HERO_LIGHTING\n", v9));
}

/*
==============
CG_DrawDebugSP_GetPOFlags
==============
*/
__int64 CG_DrawDebugSP_GetPOFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  __int64 SharedPOFlags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 
  bool v21; 
  __int64 v22; 
  int v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  bool v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  __int64 v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  int v38; 
  bool v39; 
  __int64 v40; 
  int v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  bool v45; 
  __int64 v46; 
  int v47; 
  bool v48; 
  __int64 v49; 
  int v50; 
  bool v51; 
  __int64 v52; 
  int v53; 
  bool v54; 
  __int64 v55; 
  int v56; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 758, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 759, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_otherFlags = &ps->otherFlags;
  SharedPOFlags = CG_DrawDebug_GetSharedPOFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x21u);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPOFlags], bufferSize - (int)SharedPOFlags, "^%cBREACHING\n", v10) + SharedPOFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cHUD_HIDDEN\n", v13) + v11;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x23u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cUSE_HINTS_IN_VEHICLE\n", v16) + v14;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x24u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cMOUSE_VEHICLE_STEER\n", v19) + v17;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v21 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x25u);
  v22 = 55i64;
  if ( v21 )
    v22 = 50i64;
  v23 = Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cENABLE_MOUSE_STEER\n", v22) + v20;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v24 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x26u);
  v25 = 55i64;
  if ( v24 )
    v25 = 50i64;
  v26 = Com_sprintf(&outBuffer[v23], bufferSize - v23, "^%cSPRING_CAM\n", v25) + v23;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v27 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x28u);
  v28 = 55i64;
  if ( v27 )
    v28 = 50i64;
  v29 = Com_sprintf(&outBuffer[v26], bufferSize - v26, "^%cFORCE_VIEWMODEL_DOF\n", v28) + v26;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x29u);
  v31 = 55i64;
  if ( v30 )
    v31 = 50i64;
  v32 = Com_sprintf(&outBuffer[v29], bufferSize - v29, "^%cQUICK_WEAPON_SWITCH\n", v31) + v29;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v33 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Au);
  v34 = 55i64;
  if ( v33 )
    v34 = 50i64;
  v35 = Com_sprintf(&outBuffer[v32], bufferSize - v32, "^%cDISABLE_TRIGGERS\n", v34) + v32;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v36 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Bu);
  v37 = 55i64;
  if ( v36 )
    v37 = 50i64;
  v38 = Com_sprintf(&outBuffer[v35], bufferSize - v35, "^%cLEGS_HIDDEN\n", v37) + v35;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v39 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Cu);
  v40 = 55i64;
  if ( v39 )
    v40 = 50i64;
  v41 = Com_sprintf(&outBuffer[v38], bufferSize - v38, "^%cSHADOW_HIDDEN\n", v40) + v38;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v42 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Du);
  v43 = 55i64;
  if ( v42 )
    v43 = 50i64;
  v44 = Com_sprintf(&outBuffer[v41], bufferSize - v41, "^%cAUTO_LEVEL_IMMEDIATE\n", v43) + v41;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v45 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Eu);
  v46 = 55i64;
  if ( v45 )
    v46 = 50i64;
  v47 = Com_sprintf(&outBuffer[v44], bufferSize - v44, "^%cCURSOR_HINT_CONTROL_LOCK\n", v46) + v44;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v48 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x2Fu);
  v49 = 55i64;
  if ( v48 )
    v49 = 50i64;
  v50 = Com_sprintf(&outBuffer[v47], bufferSize - v47, "^%cSCRIPTED_MELEE_ACTIVE\n", v49) + v47;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v51 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x30u);
  v52 = 55i64;
  if ( v51 )
    v52 = 50i64;
  v53 = Com_sprintf(&outBuffer[v50], bufferSize - v50, "^%cHANDS_OCCUPIED\n", v52) + v50;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v54 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x31u);
  v55 = 55i64;
  if ( v54 )
    v55 = 50i64;
  v56 = Com_sprintf(&outBuffer[v53], bufferSize - v53, "^%cNEXT_BULLET_IS_DRY_FIRE\n", v55) + v53;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x32u) )
    v9 = 50;
  return (unsigned int)(v56 + Com_sprintf(&outBuffer[v56], bufferSize - v56, "^%cUSE_HINTS_ON_TURRET\n", v9));
}

/*
==============
CG_DrawDebugSP_GetPWFlags
==============
*/
__int64 CG_DrawDebugSP_GetPWFlags(const playerState_s *ps, char *outBuffer, int bufferSize)
{
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  __int64 SharedPWFlags; 
  bool v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  bool v18; 
  __int64 v19; 
  int v20; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 734, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 735, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  p_weapFlags = &ps->weapCommon.weapFlags;
  SharedPWFlags = CG_DrawDebug_GetSharedPWFlags(ps, outBuffer, bufferSize);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x35u);
  v9 = 55;
  v10 = 55i64;
  if ( !v8 )
    v10 = 50i64;
  v11 = Com_sprintf(&outBuffer[SharedPWFlags], bufferSize - (int)SharedPWFlags, "^%cFRIENDLY_NOT_USABLE\n", v10) + SharedPWFlags;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v12 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x36u);
  v13 = 55i64;
  if ( v12 )
    v13 = 50i64;
  v14 = Com_sprintf(&outBuffer[v11], bufferSize - v11, "^%cFORCE_VIEWMODEL_ANIM\n", v13) + v11;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x37u);
  v16 = 55i64;
  if ( v15 )
    v16 = 50i64;
  v17 = Com_sprintf(&outBuffer[v14], bufferSize - v14, "^%cDISABLE_EMPTY_CLIP_WEAPON_SWITCH\n", v16) + v14;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v18 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x38u);
  v19 = 55i64;
  if ( v18 )
    v19 = 50i64;
  v20 = Com_sprintf(&outBuffer[v17], bufferSize - v17, "^%cNAMEPLATE_IS_ENEMY\n", v19) + v17;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x39u) )
    v9 = 50;
  return (unsigned int)(v20 + Com_sprintf(&outBuffer[v20], bufferSize - v20, "^%cNAMEPLATE_IS_CIVILIAN\n", v9));
}

/*
==============
CgDrawDebugSP::DrawAnimationOverlays
==============
*/

void __fastcall CgDrawDebugSP::DrawAnimationOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, double _XMM2_8)
{
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *font; 
  const ScreenPlacement *v17; 
  unsigned int AICount; 
  const char *s; 
  GfxFont *smallDevFont; 
  unsigned int SentientCount; 
  const char *v28; 
  const dvar_t *v32; 
  const dvar_t *v34; 
  const dvar_t *v36; 
  const ScreenPlacement *v37; 
  DObj *ClientDObj; 
  const XAnimTree *tree; 
  unsigned __int16 children; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  const dvar_t *v50; 
  int integer; 
  const dvar_t *v53; 
  const dvar_t *v55; 
  const dvar_t *v59; 
  const dvar_t *v60; 
  const dvar_t *v64; 
  const dvar_t *v66; 
  const dvar_t *v69; 
  const dvar_t *v70; 
  bool enabled; 
  const dvar_t *v72; 
  float fmt; 
  float fmta; 
  void *retaddr; 
  float yPos; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rax+18h], xmm8
  }
  CG_DrawDebug_DrawScriptedAnims(localClientNum, &yPos);
  v10 = DVARINT_cg_drawBoneVisibility;
  if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer >= 0 )
  {
    v11 = DVARINT_cg_drawBoneVisibility;
    if ( !DVARINT_cg_drawBoneVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBoneVisibility") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    CG_DrawDebug_DrawBoneVisibility(localClientNum, v11->current.integer, &yPos);
  }
  v12 = DVARINT_cg_debugCharacterController;
  if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer >= 0 )
  {
    v13 = DVARINT_cg_debugCharacterController;
    if ( !DVARINT_cg_debugCharacterController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCharacterController") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    CG_DrawDebug_CharacterController(localClientNum, v13->current.integer, &yPos);
  }
  v14 = DVARBOOL_ai_debugOverlay;
  if ( !DVARBOOL_ai_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugOverlay") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_38], xmm7 }
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    font = cls.smallDevFont;
    v17 = ActivePlacement;
    AICount = G_GetAICount();
    s = j_va("AI: %d", AICount);
    __asm
    {
      vmovss  xmm7, cs:__real@3f333333
      vmovaps xmm3, xmm7; xScale
      vxorps  xmm2, xmm2, xmm2; y
      vxorps  xmm1, xmm1, xmm1; x
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    CG_DrawDevString(v17, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, s, &colorWhite, 5, font);
    smallDevFont = cls.smallDevFont;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    SentientCount = G_GetSentientCount();
    v28 = j_va("Sentient: %d", SentientCount);
    __asm
    {
      vmovaps xmm3, xmm7; xScale
      vmovaps xmm2, xmm6; y
      vxorps  xmm1, xmm1, xmm1; x
      vmovss  dword ptr [rsp+98h+fmt], xmm7
    }
    CG_DrawDevString(v17, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v28, &colorWhite, 5, smallDevFont);
  }
  v32 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  __asm { vmovss  xmm6, cs:__real@43480000 }
  if ( v32->current.integer == 7 )
  {
    v34 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.integer >= 0 )
    {
      _RAX = ScrPlace_GetActivePlacement(localClientNum);
      v36 = DVARINT_ai_debugEntIndex;
      v37 = _RAX;
      __asm
      {
        vmovss  xmm7, dword ptr [rax+28h]
        vmovss  xmm8, dword ptr [rax+2Ch]
      }
      if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      ClientDObj = Com_GetClientDObj(v36->current.integer, localClientNum);
      if ( ClientDObj )
      {
        tree = ClientDObj->tree;
        if ( ClientDObj->tree )
        {
          children = tree->children;
          if ( children )
          {
            __asm
            {
              vmovss  xmm3, cs:__real@3f0ccccd; scale
              vmovaps xmm2, xmm8; y
              vmovaps xmm1, xmm7; x
            }
            CG_DrawDebugSP_DrawAIAnimTreeRecurse(v37, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, ClientDObj, tree, children, 0);
          }
        }
      }
    }
LABEL_56:
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+98h+yPos]
      vmovss  [rsp+98h+yPos], xmm1
    }
    goto LABEL_57;
  }
  v46 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.integer == 8 )
  {
    v47 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.integer >= 0 )
    {
      v48 = DVARINT_ai_debugEntIndex;
      if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      if ( Com_GetClientDObj(v48->current.integer, localClientNum) )
      {
        v49 = DVARINT_ai_debugEntIndex;
        if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v49);
        v50 = DVARBOOL_cg_drawDebugBonesBind;
        integer = v49->current.integer;
        if ( !DVARBOOL_cg_drawDebugBonesBind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDebugBonesBind") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v50);
        CG_DrawDebug_DrawBones(localClientNum, v50->current.enabled, CG_DEBUG_DRAW_BONES_SHARED_ONLY, NULL, integer);
      }
    }
    goto LABEL_56;
  }
LABEL_57:
  v53 = DVARINT_cg_dumpAnimsToScreen;
  __asm { vmovaps xmm8, [rsp+98h+var_48] }
  if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.integer >= 0 )
  {
    v55 = DVARINT_cg_dumpAnimsToScreen;
    __asm { vmovss  xmm7, [rsp+98h+yPos] }
    if ( !DVARINT_cg_dumpAnimsToScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    __asm { vmovaps xmm2, xmm7; yPos }
    if ( CG_DrawDebug_DrawAnims(localClientNum, v55->current.integer, *(float *)&_XMM2) )
    {
      __asm
      {
        vaddss  xmm1, xmm6, [rsp+98h+yPos]
        vmovss  [rsp+98h+yPos], xmm1
      }
    }
  }
  v59 = DVARINT_cg_dumpAnimsToScreen2;
  if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.integer >= 0 )
  {
    v60 = DVARINT_cg_dumpAnimsToScreen2;
    __asm { vmovss  xmm7, [rsp+98h+yPos] }
    if ( !DVARINT_cg_dumpAnimsToScreen2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnimsToScreen2") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
    __asm { vmovaps xmm2, xmm7; yPos }
    if ( CG_DrawDebug_DrawAnims(localClientNum, v60->current.integer, *(float *)&_XMM2) )
    {
      __asm
      {
        vaddss  xmm1, xmm6, [rsp+98h+yPos]
        vmovss  [rsp+98h+yPos], xmm1
      }
    }
  }
  v64 = DVARINT_animscript_debug;
  __asm { vmovaps xmm7, [rsp+98h+var_38] }
  if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  if ( v64->current.integer >= 0 )
  {
    v66 = DVARINT_animscript_debug;
    if ( !DVARINT_animscript_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "animscript_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v66);
    __asm { vmovss  xmm1, [rsp+98h+yPos]; requestedYPos }
    CG_DrawDebug_PlayerAnimScriptInfo_Client(localClientNum, *(float *)&_XMM1, v66->current.integer, ANIM_SCRIPT_DEBUG_MODE_BOTH);
    __asm
    {
      vaddss  xmm1, xmm6, [rsp+98h+yPos]
      vmovss  [rsp+98h+yPos], xmm1
    }
  }
  v69 = DVARINT_cg_dumpBlendSpaces;
  if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  if ( v69->current.integer >= 0 )
  {
    v70 = DVARBOOL_cg_dumpblendspaces_coverage;
    if ( !DVARBOOL_cg_dumpblendspaces_coverage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpblendspaces_coverage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    enabled = v70->current.enabled;
    v72 = DVARINT_cg_dumpBlendSpaces;
    __asm { vmovss  xmm6, [rsp+98h+yPos] }
    if ( !DVARINT_cg_dumpBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpBlendSpaces") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v72);
    __asm
    {
      vmovss  xmm2, cs:__real@41200000; startX
      vmovaps xmm3, xmm6; startY
    }
    CG_DrawDebug_DrawBlendSpaces(localClientNum, v72->current.integer, *(float *)&_XMM2, *(float *)&_XMM3, enabled);
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
CgDrawDebugSP::DrawClientNetPerf
==============
*/

float __fastcall CgDrawDebugSP::DrawClientNetPerf(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double y)
{
  __asm { vmovaps xmm0, xmm3 }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugSP::DrawEntitiesLoD
==============
*/
void CgDrawDebugSP::DrawEntitiesLoD(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CgDrawDebugSP::DrawGameMsgWindows
==============
*/
void CgDrawDebugSP::DrawGameMsgWindows(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  GfxFont *smallDevFont; 
  __int64 v5; 
  __int64 v6; 
  GfxFont *v8; 
  __int64 vertAlign; 
  GfxFont *font; 
  int fonta; 
  float v14; 
  float v15; 
  vec4_t color; 

  __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
  smallDevFont = cls.smallDevFont;
  v5 = localClientNum;
  __asm { vmovups xmmword ptr [rsp+98h+var_38], xmm0 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    fonta = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, fonta) )
      __debugbreak();
  }
  v6 = v5;
  if ( !clientUIActives[v5].frontEndSceneState[0] && clientUIActives[v6].cgameInitialized )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3eb851ec
      vmovss  [rsp+98h+var_60], xmm0
    }
    Con_DrawGameMessageWindow((LocalClientNum_t)v5, 0, 6, 10, 8, 8, smallDevFont, v14, &color, 6, 4, MWM_BOTTOMUP_ALIGN_TOP);
  }
  v8 = cls.smallDevFont;
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(font) = 2;
    LODWORD(vertAlign) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", vertAlign, font) )
      __debugbreak();
  }
  if ( !clientUIActives[v6].frontEndSceneState[0] && clientUIActives[v6].cgameInitialized )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3ed58106
      vmovss  [rsp+98h+var_60], xmm0
    }
    Con_DrawGameMessageWindow((LocalClientNum_t)v5, 1, 0, 180, 9, 8, v8, v15, &color, 3, 5, MWM_BOTTOMUP_ALIGN_BOTTOM);
  }
}

/*
==============
CgDrawDebugSP::DrawTransientOverlays
==============
*/
void CgDrawDebugSP::DrawTransientOverlays(CgDrawDebugSP *this, const LocalClientNum_t localClientNum)
{
  const dvar_t *v9; 
  const dvar_t *v10; 
  bool enabled; 
  const dvar_t *v12; 
  const ScreenPlacement *ActivePlacement; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  GfxFont *FontHandle; 
  TransientSPZoneState ZoneModeByIndex; 
  __int64 v28; 
  const char *SPTransientName; 
  unsigned int v34; 
  const char *v36; 
  const char *v37; 
  const char *ZoneNameFromIndex; 
  bool IsFinishedLoadingByIndex; 
  const char *v40; 
  bool IsBusy; 
  const char *v43; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  __int64 horzAlign; 
  int horzAligna; 
  int horzAlignb; 
  int horzAlignc; 
  int horzAlignd; 
  int horzAligne; 
  __int64 vertAlign; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  bool v65; 
  bool v66; 
  vec4_t v67; 
  vec4_t color; 
  char dest[512]; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 561, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  v9 = DVARBOOL_cg_drawTransients;
  if ( !DVARBOOL_cg_drawTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
    return;
  v10 = DVARBOOL_cg_drawLevelTransients;
  __asm
  {
    vmovaps [rsp+328h+var_38], xmm6
    vmovaps [rsp+328h+var_48], xmm7
    vmovaps [rsp+328h+var_58], xmm8
    vmovaps [rsp+328h+var_68], xmm9
    vmovaps [rsp+328h+var_78], xmm10
    vmovaps [rsp+328h+var_88], xmm11
  }
  if ( !DVARBOOL_cg_drawLevelTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawLevelTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  enabled = v10->current.enabled;
  v12 = DVARBOOL_cg_drawCommonTransients;
  v65 = enabled;
  if ( !DVARBOOL_cg_drawCommonTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCommonTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  __asm
  {
    vmovups xmm0, cs:__xmm@3f3333333f8000003f3333333ecccccd
    vmovups xmm1, cs:__xmm@3f3333333e4ccccd3e4ccccd3f800000
    vmovss  xmm6, cs:__real@43d48000
  }
  v66 = v12->current.enabled;
  __asm
  {
    vmovups xmmword ptr [rsp+328h+var_2C0], xmm0
    vmovups xmmword ptr [rsp+328h+var_2B0], xmm1
    vmovss  xmm2, cs:__real@3f155555; scale
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm7, cs:__real@40e00000
    vmovss  xmm11, cs:__real@c1840000
    vmovss  xmm8, cs:__real@3e3851ec
    vmovss  xmm9, cs:__real@c0f00000
    vmovss  xmm10, cs:__real@c0e00000
  }
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0;
  FontHandle = UI_GetFontHandle(ActivePlacement, 0, *(float *)&_XMM2);
  do
  {
    ZoneModeByIndex = CL_TransientsSP_GetZoneModeByIndex(v25);
    v28 = ZoneModeByIndex;
    if ( (unsigned int)ZoneModeByIndex >= 8 )
    {
      LODWORD(vertAlign) = 8;
      LODWORD(horzAlign) = ZoneModeByIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_debug_sp.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( zoneMode ) < (unsigned)( TransientSPZoneState::COUNT )", "zoneMode doesn't index TransientSPZoneState::COUNT\n\t%i not in [0, %i)", horzAlign, vertAlign) )
        __debugbreak();
    }
    if ( (_DWORD)v28 )
    {
      SPTransientName = DB_Transients_GetSPTransientName(v25);
      if ( (DB_Transients_GetSPTransientZoneFlags(v25) & 0x4000) != 0 )
      {
        if ( !v65 )
        {
          ++v24;
          goto LABEL_27;
        }
      }
      else if ( !v66 )
      {
        ++v23;
        goto LABEL_27;
      }
      if ( (_DWORD)v28 != 4 )
      {
        __asm
        {
          vsubss  xmm2, xmm6, xmm7; y
          vmovaps xmm3, xmm7; width
          vmovaps xmm1, xmm11; x
          vmovss  dword ptr [rsp+328h+fmt], xmm7
        }
        UI_FillRect(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 1, 1, &color);
      }
      Com_sprintf(dest, 0x200ui64, "%s : %s", SPTransientName, TRANSIENT_ZONE_NAMES[v28]);
      __asm
      {
        vmovss  [rsp+328h+var_2E8], xmm8
        vmovss  [rsp+328h+horzAlign], xmm6
        vmovss  dword ptr [rsp+328h+fmt], xmm9
      }
      UI_DrawText(ActivePlacement, dest, 512, FontHandle, fmta, *(float *)&horzAligna, 1, 1, v60, &v67, 3);
      __asm { vaddss  xmm6, xmm6, xmm10 }
    }
LABEL_27:
    ++v25;
  }
  while ( v25 < 0x20 );
  __asm { vmovaps xmm11, [rsp+328h+var_88] }
  v34 = 0;
  __asm { vmovaps xmm7, [rsp+328h+var_48] }
  if ( v24 )
  {
    v36 = "%zu Level Transients";
    if ( v24 == 1 )
      v36 = "%zu Level Transient";
    Com_sprintf(dest, 0x200ui64, v36, v24);
    __asm
    {
      vmovss  [rsp+328h+var_2E8], xmm8
      vmovss  [rsp+328h+horzAlign], xmm6
      vmovss  dword ptr [rsp+328h+fmt], xmm9
    }
    UI_DrawText(ActivePlacement, dest, 512, FontHandle, fmtb, *(float *)&horzAlignb, 1, 1, v61, &v67, 3);
    __asm { vaddss  xmm6, xmm6, xmm10 }
  }
  if ( v23 )
  {
    v37 = "%zu Weapon Transients";
    if ( v23 == 1 )
      v37 = "%zu Weapon Transient";
    Com_sprintf(dest, 0x200ui64, v37, v23);
    __asm
    {
      vmovss  [rsp+328h+var_2E8], xmm8
      vmovss  [rsp+328h+horzAlign], xmm6
      vmovss  dword ptr [rsp+328h+fmt], xmm9
    }
    UI_DrawText(ActivePlacement, dest, 512, FontHandle, fmtc, *(float *)&horzAlignc, 1, 1, v62, &v67, 3);
    __asm { vaddss  xmm6, xmm6, xmm10 }
  }
  do
  {
    if ( DB_Zones_IsValidZoneIndex(v34) && (DB_Zones_GetZoneFlagsFromIndex(v34) & 0x600000) != 0 )
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v34);
      IsFinishedLoadingByIndex = DB_Zones_IsFinishedLoadingByIndex(v34);
      v40 = "Loading";
      if ( IsFinishedLoadingByIndex )
        v40 = "Loaded";
      Com_sprintf(dest, 0x200ui64, "%s : Preload : %s", ZoneNameFromIndex, v40);
      __asm
      {
        vmovss  [rsp+328h+var_2E8], xmm8
        vmovss  [rsp+328h+horzAlign], xmm6
        vmovss  dword ptr [rsp+328h+fmt], xmm9
      }
      UI_DrawText(ActivePlacement, dest, 512, FontHandle, fmtd, *(float *)&horzAlignd, 1, 1, v63, &v67, 3);
      __asm { vaddss  xmm6, xmm6, xmm10 }
    }
    ++v34;
  }
  while ( v34 < 0x7A4 );
  IsBusy = CL_PreloadSP_IsBusy();
  __asm { vmovaps xmm10, [rsp+328h+var_78] }
  if ( IsBusy )
  {
    if ( CL_PreloadSP_IsYieldingForStreaming() )
    {
      v43 = "Yielding Preload (Streamer)";
      goto LABEL_47;
    }
  }
  else if ( CL_TransientsSP_IsYieldingForStreaming() )
  {
    v43 = "Yielding Transients (Streamer)";
LABEL_47:
    __asm
    {
      vmovss  [rsp+328h+var_2E8], xmm8
      vmovss  [rsp+328h+horzAlign], xmm6
      vmovss  dword ptr [rsp+328h+fmt], xmm9
    }
    UI_DrawText(ActivePlacement, v43, 512, FontHandle, fmte, *(float *)&horzAligne, 1, 1, v64, &v67, 3);
  }
  __asm
  {
    vmovaps xmm8, [rsp+328h+var_58]
    vmovaps xmm6, [rsp+328h+var_38]
    vmovaps xmm9, [rsp+328h+var_68]
  }
}

/*
==============
CgDrawDebugSP::PrintStreamingPos
==============
*/

float __fastcall CgDrawDebugSP::PrintStreamingPos(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double posY)
{
  const char *text; 
  float fmt; 
  char v37; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm6, xmm3
  }
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, cls.m_activeGameMapName);
  __asm { vmovaps xmm8, xmm0 }
  if ( CL_StreamViews_IsManualViewSet(COUNT|DODGE, localClientNum) )
  {
    _RAX = CL_StreamViews_GetManualViewOrigin(COUNT|DODGE, localClientNum);
    __asm
    {
      vmovss  xmm3, dword ptr [rax+8]
      vmovss  xmm2, dword ptr [rax+4]
      vmovss  xmm1, dword ptr [rax]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    text = j_va("PlayerSetStreamOrigin (%.0f %.0f %.0f) \n", _RDX, _R8, _R9);
    __asm
    {
      vmovaps xmm3, xmm6; posY
      vmovaps xmm2, xmm7; posX
      vmovss  dword ptr [rsp+78h+fmt], xmm8
    }
    CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, text, cls.m_activeGameMapName, &colorRed);
    __asm { vaddss  xmm0, xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v37;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawDebugSP::PrintUpperRightDebugInfo
==============
*/
void CgDrawDebugSP::PrintUpperRightDebugInfo(CgDrawDebugSP *this, const LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const char *text; 
  float fmt; 

  if ( CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.pm_type != 4 )
  {
    _RBP = DVARVEC2_cg_debugInfoCornerOffsetSP;
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm6
      vmovaps [rsp+88h+var_38], xmm7
      vmovaps [rsp+88h+var_48], xmm8
    }
    if ( !DVARVEC2_cg_debugInfoCornerOffsetSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugInfoCornerOffsetSP") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm { vmovss  xmm3, dword ptr [rbp+2Ch]; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintCinematicInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintPerformanceInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintBuildName(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintFastfileDebugInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintScriptableDebugInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintWallRunDebugInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintEventProfile(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintReplayTime(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    *(double *)&_XMM0 = CgDrawDebug::PrintViewpos(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm6, xmm0 }
    if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    *(double *)&_XMM0 = CgDrawDebug::GetCornerFarRight(this, scrPlace);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = CgDrawDebug::GetCornerLabelWidth(this, cls.m_activeGameMapName);
    __asm { vmovaps xmm8, xmm0 }
    if ( CL_StreamViews_IsManualViewSet(COUNT|DODGE, localClientNum) )
    {
      _RAX = CL_StreamViews_GetManualViewOrigin(COUNT|DODGE, localClientNum);
      __asm
      {
        vmovss  xmm3, dword ptr [rax+8]
        vmovss  xmm2, dword ptr [rax+4]
        vmovss  xmm1, dword ptr [rax]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      text = j_va("PlayerSetStreamOrigin (%.0f %.0f %.0f) \n", _RDX, _R8, _R9);
      __asm
      {
        vmovaps xmm3, xmm6; posY
        vmovaps xmm2, xmm7; posX
        vmovss  dword ptr [rsp+88h+fmt], xmm8
      }
      CgDrawDebug::CornerPrint(this, scrPlace, *(float *)&_XMM2, *(float *)&_XMM3, fmt, text, cls.m_activeGameMapName, &colorRed);
      __asm { vaddss  xmm6, xmm6, xmm0 }
    }
    __asm { vmovaps xmm3, xmm6; y }
    *(double *)&_XMM0 = CgDrawDebug::PrintSystemTime(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm { vmovaps xmm3, xmm0; posY }
    CgDrawDebug::PrintCamAndMovementInfo(this, localClientNum, scrPlace, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_48]
      vmovaps xmm7, [rsp+88h+var_38]
      vmovaps xmm6, [rsp+88h+var_28]
    }
  }
}

