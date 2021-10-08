/*
==============
SND_SubmixDebugGetUnits
==============
*/

int __fastcall SND_SubmixDebugGetUnits()
{
  return ?SND_SubmixDebugGetUnits@@YAHXZ();
}

/*
==============
SND_DebugGetNameForSubmixHUD
==============
*/

const char *__fastcall SND_DebugGetNameForSubmixHUD(const unsigned int id, const unsigned int compareTo)
{
  return ?SND_DebugGetNameForSubmixHUD@@YAPEBDII@Z(id, compareTo);
}

/*
==============
SND_SubmixDebugGetCutoffAsHzFaded
==============
*/

double __fastcall SND_SubmixDebugGetCutoffAsHzFaded(float linearValue)
{
  double result; 

  *(float *)&result = ?SND_SubmixDebugGetCutoffAsHzFaded@@YAMM@Z(linearValue);
  return result;
}

/*
==============
SND_SubmixDebugGetCutoffAsHz
==============
*/

double __fastcall SND_SubmixDebugGetCutoffAsHz(float linearValue)
{
  double result; 

  *(float *)&result = ?SND_SubmixDebugGetCutoffAsHz@@YAMM@Z(linearValue);
  return result;
}

/*
==============
SND_SubmixDebugDrawHUD
==============
*/

void __fastcall SND_SubmixDebugDrawHUD(LocalClientNum_t localClientNum)
{
  ?SND_SubmixDebugDrawHUD@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
SND_SubmixDebugRecordZones
==============
*/

void __fastcall SND_SubmixDebugRecordZones(int time, unsigned int idA, unsigned int idB, float lerp, unsigned int zoneA, unsigned int zoneB)
{
  ?SND_SubmixDebugRecordZones@@YAXHIIMII@Z(time, idA, idB, lerp, zoneA, zoneB);
}

/*
==============
SND_DebugGetNameForSubmixHUD
==============
*/
const char *SND_DebugGetNameForSubmixHUD(const unsigned int id, const unsigned int compareTo)
{
  const char *result; 

  if ( id )
    result = SND_SubmixDebugGetNameForId(id);
  else
    result = "none";
  if ( compareTo )
  {
    if ( id == compareTo )
      return "same";
  }
  return result;
}

/*
==============
SND_SubmixDebugDrawHUD
==============
*/
void SND_SubmixDebugDrawHUD(LocalClientNum_t localClientNum)
{
  int v5; 
  int v6; 
  int v7; 
  const ScreenPlacement *ActivePlacement; 
  const char *v15; 
  const char *NameForId; 
  const char *v22; 
  const char *v30; 
  vec4_t *setColor; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float lerpA[4]; 
  unsigned int zoneA; 
  unsigned int zoneB; 
  float lerpB; 

  v5 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_snd_submix_debug_draw, "snd_submix_debug_draw") - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          SND_SubmixDebugDrawZoneCalls(localClientNum);
      }
      else
      {
        __asm
        {
          vmovaps [rsp+0A8h+var_38], xmm7
          vmovaps [rsp+0A8h+var_48], xmm8
          vmovss  xmm7, cs:__real@41c00000
          vmovss  xmm8, cs:__real@41400000
          vmovss  [rsp+0A8h+var_70], xmm8
        }
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        __asm
        {
          vmovaps xmm2, xmm7; y
          vmovaps xmm1, xmm7; x
        }
        CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "time", &colorWhiteFaded, 0, 1, v36, 0);
        __asm
        {
          vmovss  xmm1, cs:__real@42a00000; x
          vmovss  [rsp+0A8h+var_70], xmm8
          vmovaps xmm2, xmm7; y
        }
        CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "ZONE SUBMIXES", &colorWhiteFaded, 0, 1, v37, 0);
        SND_SubmixDebugGetZones(&zoneA, lerpA, &zoneB, &lerpB);
        v15 = "none";
        if ( zoneA )
          NameForId = SND_SubmixDebugGetNameForId(zoneA);
        else
          NameForId = "none";
        if ( zoneB )
          v15 = SND_SubmixDebugGetNameForId(zoneB);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, cs:?g_snd@@3Usnd_local_t@@A.time; snd_local_t g_snd
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   rdx, xmm1
        }
        v22 = j_va("%5.1f", _RDX);
        __asm
        {
          vmovss  xmm2, cs:__real@42100000; y
          vmovss  [rsp+0A8h+var_70], xmm8
          vmovaps xmm1, xmm7; x
        }
        CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v22, &colorYellow, 0, 1, v38, 0);
        __asm
        {
          vmovss  xmm2, [rsp+0A8h+lerpA]
          vmovss  xmm0, [rsp+0A8h+lerpB]
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovq   r8, xmm2
          vmovsd  [rsp+0A8h+setColor], xmm0
        }
        v30 = j_va("%s (%.2f) / %s (%.2f)", NameForId, _R8, v15, setColor);
        __asm
        {
          vmovss  xmm2, cs:__real@42100000; y
          vmovss  xmm1, cs:__real@42a00000; x
          vmovss  [rsp+0A8h+var_70], xmm8
        }
        CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v30, &colorYellow, 0, 1, v39, 0);
        __asm
        {
          vmovaps xmm8, [rsp+0A8h+var_48]
          vmovaps xmm7, [rsp+0A8h+var_38]
        }
      }
    }
    else
    {
      SND_SubmixDebugDrawVolmods(localClientNum);
    }
  }
  else
  {
    SND_SubmixDebugDrawSubmixes(localClientNum);
  }
}

/*
==============
SND_SubmixDebugDrawSubmixes
==============
*/

void __fastcall SND_SubmixDebugDrawSubmixes(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const ScreenPlacement *ActivePlacement; 
  int i; 
  const char *NameForId; 
  const char *v33; 
  const char *v39; 
  const char *v45; 
  const char *v51; 
  const char *v57; 
  int j; 
  const char *v69; 
  const char *v70; 
  const char *v76; 
  const char *v82; 
  const char *v88; 
  const char *v94; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float maxCutoffHpfHz; 
  float minCutoffLpfHz; 
  int type; 
  char v129; 
  void *retaddr; 
  unsigned int id; 
  float effect; 
  float maxAttnLinear; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovss  xmm7, cs:__real@41400000
    vmovss  xmm8, cs:__real@41c00000
    vmovss  [rsp+0F8h+var_C0], xmm7
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm8; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "SUBMIX REQUESTS", &colorYellow, 0, 1, v105, 0);
  __asm
  {
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm8; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Name", &colorWhiteFaded, 0, 1, v106, 0);
  __asm
  {
    vmovss  xmm9, cs:__real@43480000
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm9; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Effect", &colorWhiteFaded, 0, 1, v107, 0);
  __asm
  {
    vmovss  xmm10, cs:__real@437a0000
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm10; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Low Scale", &colorWhiteFaded, 0, 1, v108, 0);
  __asm
  {
    vmovss  xmm11, cs:__real@43a28000
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm11; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "High HPF", &colorWhiteFaded, 0, 1, v109, 0);
  __asm
  {
    vmovss  xmm12, cs:__real@43c80000
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm12; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Low LPF", &colorWhiteFaded, 0, 1, v110, 0);
  __asm { vmovaps xmm6, xmm8 }
  for ( i = 0; i < 141; ++i )
  {
    if ( SND_SubmixDebugGetData(i, &type, &id, &effect, &maxAttnLinear, &minCutoffLpfHz, &maxCutoffHpfHz) && id )
    {
      NameForId = SND_SubmixDebugGetNameForId(id);
      v33 = j_va((const char *)&queryFormat, NameForId);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm8; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v33, &colorYellow, 0, 1, v111, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+effect]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v39 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm9; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v39, &colorYellow, 0, 1, v112, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+maxAttnLinear]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v45 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm10; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v45, &colorYellow, 0, 1, v113, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+maxCutoffHpfHz]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v51 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm11; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v51, &colorYellow, 0, 1, v114, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+minCutoffLpfHz]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v57 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm12; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v57, &colorYellow, 0, 1, v115, 0);
      __asm { vaddss  xmm6, xmm6, xmm7 }
    }
  }
  __asm
  {
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "UNIQUE SUBMIXES", &colorRed, 0, 1, v116, 0);
  __asm
  {
    vmovss  [rsp+0F8h+var_C0], xmm7
    vaddss  xmm6, xmm6, xmm7
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm8; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Name", &colorWhiteFaded, 0, 1, v117, 0);
  __asm
  {
    vmovss  [rsp+0F8h+var_C0], xmm7
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm9; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Effect", &colorWhiteFaded, 0, 1, v118, 0);
  __asm { vaddss  xmm6, xmm6, xmm7 }
  for ( j = 0; j < 141; ++j )
  {
    if ( SND_SubmixDebugGetDataUnique(j, &type, &id, &effect, &maxAttnLinear, &maxCutoffHpfHz, &minCutoffLpfHz) && id )
    {
      v69 = SND_SubmixDebugGetNameForId(id);
      v70 = j_va((const char *)&queryFormat, v69);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm8; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v70, &colorRed, 0, 1, v119, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+effect]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v76 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm9; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v76, &colorRed, 0, 1, v120, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+maxAttnLinear]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v82 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm10; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v82, &colorRed, 0, 1, v121, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+minCutoffLpfHz]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v88 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm11; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v88, &colorRed, 0, 1, v122, 0);
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+maxCutoffHpfHz]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v94 = j_va("%.02f", _RDX);
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovaps xmm2, xmm6; y
        vmovaps xmm1, xmm12; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v94, &colorRed, 0, 1, v123, 0);
      __asm { vaddss  xmm6, xmm6, xmm7 }
    }
  }
  _R11 = &v129;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
SND_SubmixDebugDrawVolmods
==============
*/

void __fastcall SND_SubmixDebugDrawVolmods(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const ScreenPlacement *ActivePlacement; 
  int VolmodActiveCount; 
  int v36; 
  unsigned int v37; 
  const FocusCone *VolmodFocusCone; 
  unsigned int VolmodFocusConeId; 
  char v44; 
  const char *v46; 
  const char *v51; 
  const char *v61; 
  const char *v70; 
  const char *v75; 
  const char *v78; 
  const char *v79; 
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
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  char v116; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
    vmovss  xmm6, cs:__real@41400000
    vmovss  xmm15, cs:__real@41c00000
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm6
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm15; x
    vxorps  xmm11, xmm11, xmm11
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "VOLMODS", &colorRed, 0, 1, v95, 0);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm15; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "#", &colorWhiteFaded, 0, 1, v96, 0);
  __asm
  {
    vmovss  xmm1, cs:__real@42a00000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Att.", &colorWhiteFaded, 0, 1, v97, 0);
  __asm
  {
    vmovss  xmm1, cs:__real@43020000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "HPF", &colorWhiteFaded, 0, 1, v98, 0);
  __asm
  {
    vmovss  xmm1, cs:__real@43660000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "LPF", &colorWhiteFaded, 0, 1, v99, 0);
  __asm
  {
    vmovss  xmm1, cs:__real@43a50000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm6; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "FocusAmt", &colorWhiteFaded, 0, 1, v100, 0);
  __asm
  {
    vmovss  xmm14, cs:__real@43d70000
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "FocusCone", &colorWhiteFaded, 0, 1, v101, 0);
  __asm { vmovaps xmm7, xmm15 }
  VolmodActiveCount = SND_SubmixGetVolmodActiveCount();
  v36 = 0;
  v37 = 0;
  if ( VolmodActiveCount <= 0 )
    goto LABEL_18;
  __asm
  {
    vmovaps [rsp+118h+var_58], xmm8
    vmovaps [rsp+118h+var_68], xmm9
    vmovaps [rsp+118h+var_78], xmm10
    vmovaps [rsp+118h+var_98], xmm12
    vmovss  xmm12, cs:__real@3f800000
    vmovaps [rsp+118h+var_A8], xmm13
  }
  while ( 1 )
  {
    *(double *)&_XMM0 = SND_SubmixGetVolmodAttenuation(v37);
    __asm { vmovaps xmm13, xmm0 }
    *(double *)&_XMM0 = SND_SubmixGetHpFilterValue(v37);
    __asm { vmovaps xmm9, xmm0 }
    SND_SubmixGetLpFilterValue(v37);
    VolmodFocusCone = SND_SubmixGetVolmodFocusCone(v37);
    VolmodFocusConeId = SND_SubmixGetVolmodFocusConeId(v37);
    *(double *)&_XMM0 = SND_SubmixGetVolmodFocusAmount(v37);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = SND_SubmixGetLpFilterValue(v37);
    __asm
    {
      vucomiss xmm13, xmm12
      vmovaps xmm8, xmm0
    }
    if ( !v44 )
      break;
    __asm { vucomiss xmm9, xmm11 }
    if ( !v44 )
      break;
    __asm { vucomiss xmm0, xmm12 }
    if ( !v44 || VolmodFocusConeId )
      break;
    __asm { vucomiss xmm10, xmm11 }
LABEL_14:
    if ( (int)++v37 >= VolmodActiveCount )
      goto LABEL_17;
  }
  v46 = j_va("%3d", v37);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm15; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v46, &colorYellow, 0, 1, v102, 0);
  __asm
  {
    vcvtss2sd xmm1, xmm13, xmm13
    vmovq   rdx, xmm1
  }
  v51 = j_va("%4.02f", _RDX);
  __asm
  {
    vmovss  xmm1, cs:__real@42a00000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v51, &colorYellow, 0, 1, v103, 0);
  __asm
  {
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm15
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm9, xmm9
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v61 = j_va("%4.02f %3.1fkHz", _RDX, _R8);
  __asm
  {
    vmovss  xmm1, cs:__real@43020000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v61, &colorYellow, 0, 1, v104, 0);
  __asm
  {
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm1, xmm15
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm8, xmm8
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v70 = j_va("%4.02f %3.1fkHz", _RDX, _R8);
  __asm
  {
    vmovss  xmm1, cs:__real@43660000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v70, &colorYellow, 0, 1, v105, 0);
  __asm
  {
    vcvtss2sd xmm1, xmm10, xmm10
    vmovq   rdx, xmm1
  }
  v75 = j_va("%4.02f", _RDX);
  __asm
  {
    vmovss  xmm1, cs:__real@43a50000; x
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v75, &colorYellow, 0, 1, v106, 0);
  if ( VolmodFocusConeId )
  {
    v78 = "???";
    if ( VolmodFocusCone )
      v78 = (const char *)VolmodFocusCone;
  }
  else
  {
    v78 = (char *)&queryFormat.fmt + 3;
  }
  v79 = j_va((const char *)&queryFormat, v78);
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm14; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v79, &colorYellow, 0, 1, v107, 0);
  ++v36;
  __asm { vaddss  xmm7, xmm7, xmm6 }
  if ( v36 < 32 )
    goto LABEL_14;
  __asm
  {
    vmovss  [rsp+118h+var_E0], xmm6
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm15; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "...", &colorYellow, 0, 1, v108, 0);
LABEL_17:
  __asm
  {
    vmovaps xmm12, [rsp+118h+var_98]
    vmovaps xmm10, [rsp+118h+var_78]
    vmovaps xmm9, [rsp+118h+var_68]
    vmovaps xmm8, [rsp+118h+var_58]
    vmovaps xmm13, [rsp+118h+var_A8]
  }
LABEL_18:
  __asm { vmovaps xmm14, [rsp+118h+var_B8] }
  _R11 = &v116;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm15, [rsp+118h+var_C8]
  }
}

/*
==============
SND_SubmixDebugDrawZoneCalls
==============
*/

void __fastcall SND_SubmixDebugDrawZoneCalls(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const ScreenPlacement *ActivePlacement; 
  unsigned int v28; 
  unsigned int idA; 
  const char *NameForId; 
  unsigned int idB; 
  const char *v34; 
  unsigned int idAprev; 
  const char *v36; 
  unsigned int idBprev; 
  const char *v38; 
  const char *v43; 
  const char *v46; 
  const char *v49; 
  const char *v55; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
    vmovaps [rsp+0E8h+var_98], xmm12
    vmovss  xmm6, cs:__real@41400000
    vmovss  xmm8, cs:__real@41c00000
  }
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  [rsp+0E8h+var_B0], xmm6
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm8; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "time", &colorYellow, 0, 1, v66, 0);
  __asm
  {
    vmovss  xmm9, cs:__real@42a00000
    vmovss  [rsp+0E8h+var_B0], xmm6
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm9; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Zone A", &colorWhiteFaded, 0, 1, v67, 0);
  __asm
  {
    vmovss  xmm10, cs:__real@43a00000
    vmovss  [rsp+0E8h+var_B0], xmm6
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm10; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Zone B", &colorWhiteFaded, 0, 1, v68, 0);
  __asm
  {
    vmovss  xmm11, cs:__real@44070000
    vmovss  [rsp+0E8h+var_B0], xmm6
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm11; x
  }
  CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, "Lerp", &colorWhiteFaded, 0, 1, v69, 0);
  __asm
  {
    vmovss  xmm12, cs:__real@3a83126f
    vmovaps xmm7, xmm8
  }
  v28 = 0;
  _R13 = s_recordsZones;
  do
  {
    _RBX = ((_BYTE)v28 + (_BYTE)s_recordsZonesIdx) & 0x1F;
    idA = s_recordsZones[((_BYTE)v28 + (_BYTE)s_recordsZonesIdx) & 0x1F].idA;
    if ( idA )
      NameForId = SND_SubmixDebugGetNameForId(idA);
    else
      NameForId = "none";
    idB = s_recordsZones[_RBX].idB;
    if ( idB )
      v34 = SND_SubmixDebugGetNameForId(idB);
    else
      v34 = "none";
    idAprev = s_recordsZones[_RBX].idAprev;
    if ( idAprev )
    {
      if ( idAprev == s_recordsZones[_RBX].idA )
        v36 = "same";
      else
        v36 = SND_SubmixDebugGetNameForId(idAprev);
    }
    else
    {
      v36 = "none";
    }
    idBprev = s_recordsZones[_RBX].idBprev;
    if ( idBprev )
    {
      if ( idBprev == s_recordsZones[_RBX].idB )
        v38 = "same";
      else
        v38 = SND_SubmixDebugGetNameForId(idBprev);
    }
    else
    {
      v38 = "none";
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?g_snd@@3Usnd_local_t@@A.time; snd_local_t g_snd
      vmulss  xmm1, xmm0, xmm12
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v43 = j_va("%5.1f", _RDX);
    __asm
    {
      vmovss  [rsp+0E8h+var_B0], xmm6
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm8; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v43, &colorYellow, 0, 1, v70, 0);
    v46 = j_va("%s/%s", NameForId, v36);
    __asm
    {
      vmovss  [rsp+0E8h+var_B0], xmm6
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm9; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v46, &colorYellow, 0, 1, v71, 0);
    v49 = j_va("%s/%s", v34, v38);
    __asm
    {
      vmovss  [rsp+0E8h+var_B0], xmm6
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm10; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v49, &colorYellow, 0, 1, v72, 0);
    __asm
    {
      vmovss  xmm1, dword ptr [r13+rbx*8+0Ch]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v55 = j_va("%3.2f", _RDX);
    __asm
    {
      vmovss  [rsp+0E8h+var_B0], xmm6
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm11; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, v55, &colorYellow, 0, 1, v73, 0);
    ++v28;
    __asm { vaddss  xmm7, xmm7, xmm6 }
  }
  while ( v28 < 0x20 );
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
SND_SubmixDebugGetCutoffAsHz
==============
*/

float __fastcall SND_SubmixDebugGetCutoffAsHz(double linearValue)
{
  char v1; 

  __asm
  {
    vmovss  xmm1, cs:__real@46bb8000
    vmulss  xmm2, xmm0, xmm1
    vucomiss xmm2, cs:__real@bf800000
  }
  if ( v1 )
  {
    __asm { vmovaps xmm0, xmm1 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcmpless xmm0, xmm2, xmm1
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixDebugGetCutoffAsHzFaded
==============
*/

float __fastcall SND_SubmixDebugGetCutoffAsHzFaded(double linearValue)
{
  char v1; 
  char v2; 

  __asm
  {
    vmovss  xmm2, cs:__real@46bb8000
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm0
    vmulss  xmm3, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  if ( !(v1 | v2) )
  {
    __asm
    {
      vcmpltss xmm0, xmm2, xmm3
      vblendvps xmm0, xmm3, xmm2, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
SND_SubmixDebugGetUnits
==============
*/
__int64 SND_SubmixDebugGetUnits()
{
  int Int_Internal_DebugName; 
  int v1; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_snd_submix_debug_units, "snd_submix_debug_units");
  if ( !Int_Internal_DebugName )
    return 0i64;
  v1 = Int_Internal_DebugName - 1;
  if ( !v1 )
    return 1i64;
  if ( v1 == 1 )
    return 2i64;
  return 3i64;
}

/*
==============
SND_SubmixDebugRecordZones
==============
*/

void __fastcall SND_SubmixDebugRecordZones(int time, unsigned int idA, unsigned int idB, double lerp, unsigned int zoneA, unsigned int zoneB)
{
  char v6; 

  v6 = s_recordsZonesIdx;
  _R11 = s_recordsZones;
  _R9 = s_recordsZonesIdx;
  s_recordsZones[_R9].idAprev = zoneA;
  s_recordsZones[_R9].idBprev = zoneB;
  s_recordsZones[_R9].time = time;
  s_recordsZonesIdx = (v6 + 1) & 0x1F;
  __asm { vmovss  dword ptr [r11+r9*8+0Ch], xmm3 }
  s_recordsZones[_R9].idA = idA;
  s_recordsZones[_R9].idB = idB;
}

