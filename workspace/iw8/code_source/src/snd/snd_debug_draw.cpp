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
  int v2; 
  int v3; 
  int v4; 
  const ScreenPlacement *ActivePlacement; 
  const char *v6; 
  const char *NameForId; 
  const char *v8; 
  const char *v9; 
  float lerpA[4]; 
  unsigned int zoneA; 
  unsigned int zoneB; 
  float lerpB; 

  v2 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_snd_submix_debug_draw, "snd_submix_debug_draw") - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          SND_SubmixDebugDrawZoneCalls(localClientNum);
      }
      else
      {
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        CG_DrawStringExt(ActivePlacement, 24.0, 24.0, "time", &colorWhiteFaded, 0, 1, 12.0, 0);
        CG_DrawStringExt(ActivePlacement, 80.0, 24.0, "ZONE SUBMIXES", &colorWhiteFaded, 0, 1, 12.0, 0);
        SND_SubmixDebugGetZones(&zoneA, lerpA, &zoneB, &lerpB);
        v6 = "none";
        if ( zoneA )
          NameForId = SND_SubmixDebugGetNameForId(zoneA);
        else
          NameForId = "none";
        if ( zoneB )
          v6 = SND_SubmixDebugGetNameForId(zoneB);
        v8 = j_va("%5.1f", (float)((float)g_snd.time * 0.001));
        CG_DrawStringExt(ActivePlacement, 24.0, 36.0, v8, &colorYellow, 0, 1, 12.0, 0);
        v9 = j_va("%s (%.2f) / %s (%.2f)", NameForId, lerpA[0], v6, lerpB);
        CG_DrawStringExt(ActivePlacement, 80.0, 36.0, v9, &colorYellow, 0, 1, 12.0, 0);
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
void SND_SubmixDebugDrawSubmixes(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  __int128 v2; 
  int i; 
  const char *NameForId; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  int j; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  __int128 v20; 
  float maxCutoffHpfHz; 
  float minCutoffLpfHz; 
  int type; 
  unsigned int id; 
  float effect; 
  float maxAttnLinear; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CG_DrawStringExt(ActivePlacement, 24.0, 0.0, "SUBMIX REQUESTS", &colorYellow, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 24.0, 12.0, "Name", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 200.0, 12.0, "Effect", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 250.0, 12.0, "Low Scale", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 325.0, 12.0, "High HPF", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 400.0, 12.0, "Low LPF", &colorWhiteFaded, 0, 1, 12.0, 0);
  v2 = LODWORD(FLOAT_24_0);
  for ( i = 0; i < 141; ++i )
  {
    if ( SND_SubmixDebugGetData(i, &type, &id, &effect, &maxAttnLinear, &minCutoffLpfHz, &maxCutoffHpfHz) && id )
    {
      NameForId = SND_SubmixDebugGetNameForId(id);
      v5 = j_va((const char *)&queryFormat, NameForId);
      CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v2, v5, &colorYellow, 0, 1, 12.0, 0);
      v6 = j_va("%.02f", effect);
      CG_DrawStringExt(ActivePlacement, 200.0, *(float *)&v2, v6, &colorYellow, 0, 1, 12.0, 0);
      v7 = j_va("%.02f", maxAttnLinear);
      CG_DrawStringExt(ActivePlacement, 250.0, *(float *)&v2, v7, &colorYellow, 0, 1, 12.0, 0);
      v8 = j_va("%.02f", maxCutoffHpfHz);
      CG_DrawStringExt(ActivePlacement, 325.0, *(float *)&v2, v8, &colorYellow, 0, 1, 12.0, 0);
      v9 = j_va("%.02f", minCutoffLpfHz);
      CG_DrawStringExt(ActivePlacement, 400.0, *(float *)&v2, v9, &colorYellow, 0, 1, 12.0, 0);
      v10 = v2;
      *(float *)&v10 = *(float *)&v2 + 12.0;
      v2 = v10;
    }
  }
  CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v2, "UNIQUE SUBMIXES", &colorRed, 0, 1, 12.0, 0);
  v11 = v2;
  CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v2 + 12.0, "Name", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 200.0, *(float *)&v2 + 12.0, "Effect", &colorWhiteFaded, 0, 1, 12.0, 0);
  *(float *)&v11 = (float)(*(float *)&v2 + 12.0) + 12.0;
  v12 = v11;
  for ( j = 0; j < 141; ++j )
  {
    if ( SND_SubmixDebugGetDataUnique(j, &type, &id, &effect, &maxAttnLinear, &maxCutoffHpfHz, &minCutoffLpfHz) )
    {
      if ( id )
      {
        v14 = SND_SubmixDebugGetNameForId(id);
        v15 = j_va((const char *)&queryFormat, v14);
        CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v12, v15, &colorRed, 0, 1, 12.0, 0);
        v16 = j_va("%.02f", effect);
        CG_DrawStringExt(ActivePlacement, 200.0, *(float *)&v12, v16, &colorRed, 0, 1, 12.0, 0);
        v17 = j_va("%.02f", maxAttnLinear);
        CG_DrawStringExt(ActivePlacement, 250.0, *(float *)&v12, v17, &colorRed, 0, 1, 12.0, 0);
        v18 = j_va("%.02f", minCutoffLpfHz);
        CG_DrawStringExt(ActivePlacement, 325.0, *(float *)&v12, v18, &colorRed, 0, 1, 12.0, 0);
        v19 = j_va("%.02f", maxCutoffHpfHz);
        CG_DrawStringExt(ActivePlacement, 400.0, *(float *)&v12, v19, &colorRed, 0, 1, 12.0, 0);
        v20 = v12;
        *(float *)&v20 = *(float *)&v12 + 12.0;
        v12 = v20;
      }
    }
  }
}

/*
==============
SND_SubmixDebugDrawVolmods
==============
*/
void SND_SubmixDebugDrawVolmods(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  __int128 v2; 
  int VolmodActiveCount; 
  int v4; 
  unsigned int v5; 
  double VolmodAttenuation; 
  float v7; 
  double HpFilterValue; 
  float v9; 
  const FocusCone *VolmodFocusCone; 
  unsigned int VolmodFocusConeId; 
  double VolmodFocusAmount; 
  float v13; 
  double LpFilterValue; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  __int128 v22; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CG_DrawStringExt(ActivePlacement, 24.0, 0.0, "VOLMODS", &colorRed, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 24.0, 12.0, "#", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 80.0, 12.0, "Att.", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 130.0, 12.0, "HPF", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 230.0, 12.0, "LPF", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 330.0, 12.0, "FocusAmt", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 430.0, 12.0, "FocusCone", &colorWhiteFaded, 0, 1, 12.0, 0);
  v2 = LODWORD(FLOAT_24_0);
  VolmodActiveCount = SND_SubmixGetVolmodActiveCount();
  v4 = 0;
  v5 = 0;
  if ( VolmodActiveCount > 0 )
  {
    while ( 1 )
    {
      VolmodAttenuation = SND_SubmixGetVolmodAttenuation(v5);
      v7 = *(float *)&VolmodAttenuation;
      HpFilterValue = SND_SubmixGetHpFilterValue(v5);
      v9 = *(float *)&HpFilterValue;
      SND_SubmixGetLpFilterValue(v5);
      VolmodFocusCone = SND_SubmixGetVolmodFocusCone(v5);
      VolmodFocusConeId = SND_SubmixGetVolmodFocusConeId(v5);
      VolmodFocusAmount = SND_SubmixGetVolmodFocusAmount(v5);
      v13 = *(float *)&VolmodFocusAmount;
      LpFilterValue = SND_SubmixGetLpFilterValue(v5);
      if ( v7 != 1.0 || v9 != 0.0 || *(float *)&LpFilterValue != 1.0 || VolmodFocusConeId || v13 != 0.0 )
      {
        v15 = j_va("%3d", v5);
        CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v2, v15, &colorYellow, 0, 1, 12.0, 0);
        v16 = j_va("%4.02f", v7);
        CG_DrawStringExt(ActivePlacement, 80.0, *(float *)&v2, v16, &colorYellow, 0, 1, 12.0, 0);
        v17 = j_va("%4.02f %3.1fkHz", v9, (float)((float)((float)(v9 * v9) * v9) * 24.0));
        CG_DrawStringExt(ActivePlacement, 130.0, *(float *)&v2, v17, &colorYellow, 0, 1, 12.0, 0);
        v18 = j_va("%4.02f %3.1fkHz", *(float *)&LpFilterValue, (float)((float)((float)(*(float *)&LpFilterValue * *(float *)&LpFilterValue) * *(float *)&LpFilterValue) * 24.0));
        CG_DrawStringExt(ActivePlacement, 230.0, *(float *)&v2, v18, &colorYellow, 0, 1, 12.0, 0);
        v19 = j_va("%4.02f", v13);
        CG_DrawStringExt(ActivePlacement, 330.0, *(float *)&v2, v19, &colorYellow, 0, 1, 12.0, 0);
        if ( VolmodFocusConeId )
        {
          v20 = "???";
          if ( VolmodFocusCone )
            v20 = (const char *)VolmodFocusCone;
        }
        else
        {
          v20 = (char *)&queryFormat.fmt + 3;
        }
        v21 = j_va((const char *)&queryFormat, v20);
        CG_DrawStringExt(ActivePlacement, 430.0, *(float *)&v2, v21, &colorYellow, 0, 1, 12.0, 0);
        ++v4;
        v22 = v2;
        *(float *)&v22 = *(float *)&v2 + 12.0;
        v2 = v22;
        if ( v4 >= 32 )
          break;
      }
      if ( (int)++v5 >= VolmodActiveCount )
        return;
    }
    CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v22, "...", &colorYellow, 0, 1, 12.0, 0);
  }
}

/*
==============
SND_SubmixDebugDrawZoneCalls
==============
*/
void SND_SubmixDebugDrawZoneCalls(LocalClientNum_t localClientNum)
{
  const ScreenPlacement *ActivePlacement; 
  __int128 v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int idA; 
  const char *NameForId; 
  unsigned int idB; 
  const char *v8; 
  unsigned int idAprev; 
  const char *v10; 
  unsigned int idBprev; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  __int128 v17; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  CG_DrawStringExt(ActivePlacement, 24.0, 0.0, "time", &colorYellow, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 80.0, 12.0, "Zone A", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 320.0, 12.0, "Zone B", &colorWhiteFaded, 0, 1, 12.0, 0);
  CG_DrawStringExt(ActivePlacement, 540.0, 12.0, "Lerp", &colorWhiteFaded, 0, 1, 12.0, 0);
  v2 = LODWORD(FLOAT_24_0);
  v3 = 0;
  do
  {
    v4 = ((_BYTE)v3 + (_BYTE)s_recordsZonesIdx) & 0x1F;
    idA = s_recordsZones[((_BYTE)v3 + (_BYTE)s_recordsZonesIdx) & 0x1F].idA;
    if ( idA )
      NameForId = SND_SubmixDebugGetNameForId(idA);
    else
      NameForId = "none";
    idB = s_recordsZones[v4].idB;
    if ( idB )
      v8 = SND_SubmixDebugGetNameForId(idB);
    else
      v8 = "none";
    idAprev = s_recordsZones[v4].idAprev;
    if ( idAprev )
    {
      if ( idAprev == s_recordsZones[v4].idA )
        v10 = "same";
      else
        v10 = SND_SubmixDebugGetNameForId(idAprev);
    }
    else
    {
      v10 = "none";
    }
    idBprev = s_recordsZones[v4].idBprev;
    if ( idBprev )
    {
      if ( idBprev == s_recordsZones[v4].idB )
        v12 = "same";
      else
        v12 = SND_SubmixDebugGetNameForId(idBprev);
    }
    else
    {
      v12 = "none";
    }
    v13 = j_va("%5.1f", (float)((float)g_snd.time * 0.001));
    CG_DrawStringExt(ActivePlacement, 24.0, *(float *)&v2, v13, &colorYellow, 0, 1, 12.0, 0);
    v14 = j_va("%s/%s", NameForId, v10);
    CG_DrawStringExt(ActivePlacement, 80.0, *(float *)&v2, v14, &colorYellow, 0, 1, 12.0, 0);
    v15 = j_va("%s/%s", v8, v12);
    CG_DrawStringExt(ActivePlacement, 320.0, *(float *)&v2, v15, &colorYellow, 0, 1, 12.0, 0);
    v16 = j_va("%3.2f", s_recordsZones[v4].lerp);
    CG_DrawStringExt(ActivePlacement, 540.0, *(float *)&v2, v16, &colorYellow, 0, 1, 12.0, 0);
    ++v3;
    v17 = v2;
    *(float *)&v17 = *(float *)&v2 + 12.0;
    v2 = v17;
  }
  while ( v3 < 0x20 );
}

/*
==============
SND_SubmixDebugGetCutoffAsHz
==============
*/

float __fastcall SND_SubmixDebugGetCutoffAsHz(double linearValue)
{
  __int128 v2; 

  v2 = *(_OWORD *)&linearValue;
  *(float *)&v2 = *(float *)&linearValue * 24000.0;
  _XMM2 = v2;
  if ( (float)(*(float *)&linearValue * 24000.0) == -1.0 )
    return FLOAT_24000_0;
  __asm
  {
    vcmpless xmm0, xmm2, xmm1
    vblendvps xmm0, xmm2, xmm1, xmm0
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
  __int128 v2; 

  _XMM2 = LODWORD(FLOAT_24000_0);
  v2 = *(_OWORD *)&linearValue;
  *(float *)&v2 = (float)((float)(*(float *)&linearValue * *(float *)&linearValue) * *(float *)&linearValue) * 24000.0;
  _XMM3 = v2;
  LODWORD(linearValue) = 0;
  if ( *(float *)&v2 > 0.0 )
  {
    __asm
    {
      vcmpltss xmm0, xmm2, xmm3
      vblendvps xmm0, xmm3, xmm2, xmm0
    }
  }
  return *(float *)&linearValue;
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
void SND_SubmixDebugRecordZones(int time, unsigned int idA, unsigned int idB, float lerp, unsigned int zoneA, unsigned int zoneB)
{
  char v6; 
  __int64 v7; 

  v6 = s_recordsZonesIdx;
  v7 = s_recordsZonesIdx;
  s_recordsZones[v7].idAprev = zoneA;
  s_recordsZones[v7].idBprev = zoneB;
  s_recordsZones[v7].time = time;
  s_recordsZonesIdx = (v6 + 1) & 0x1F;
  s_recordsZones[v7].lerp = lerp;
  s_recordsZones[v7].idA = idA;
  s_recordsZones[v7].idB = idB;
}

