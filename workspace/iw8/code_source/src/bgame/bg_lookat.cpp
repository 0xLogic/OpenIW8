/*
==============
BG_LookAt_GetStateId
==============
*/

unsigned __int8 __fastcall BG_LookAt_GetStateId(scr_string_t statename)
{
  return ?BG_LookAt_GetStateId@@YAEW4scr_string_t@@@Z(statename);
}

/*
==============
BG_LookAt_Shutdown
==============
*/

void BG_LookAt_Shutdown(void)
{
  ?BG_LookAt_Shutdown@@YAXXZ();
}

/*
==============
BG_LookAt_Init
==============
*/

void BG_LookAt_Init(void)
{
  ?BG_LookAt_Init@@YAXXZ();
}

/*
==============
BG_GetLookAtLimits
==============
*/

const XAnimLookAtLimits *__fastcall BG_GetLookAtLimits(int iState)
{
  return ?BG_GetLookAtLimits@@YAPEBUXAnimLookAtLimits@@H@Z(iState);
}

/*
==============
BG_GetLookAtLimits
==============
*/
XAnimLookAtLimits *BG_GetLookAtLimits(int iState)
{
  __int64 v1; 
  int v4; 

  v1 = iState;
  if ( iState >= (unsigned int)s_lookAtNumStates )
  {
    v4 = s_lookAtNumStates;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_lookat.cpp", 115, ASSERT_TYPE_ASSERT, "(unsigned)( iState ) < (unsigned)( s_lookAtNumStates )", "iState doesn't index s_lookAtNumStates\n\t%i not in [0, %i)", iState, v4) )
      __debugbreak();
  }
  return &s_lookAtLimits[v1];
}

/*
==============
BG_LookAt_GetStateId
==============
*/
__int64 BG_LookAt_GetStateId(scr_string_t statename)
{
  unsigned __int8 v2; 
  int v3; 
  XAnimLookAtLimits *v4; 
  bool v5; 
  unsigned __int8 v6; 

  v2 = 8;
  if ( !s_lookAtInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_lookat.cpp", 83, ASSERT_TYPE_ASSERT, "(s_lookAtInitialized)", (const char *)&queryFormat, "s_lookAtInitialized") )
    __debugbreak();
  v3 = 0;
  if ( s_lookAtNumStates > 0 )
  {
    v4 = s_lookAtLimits;
    do
    {
      v5 = v4->m_statename == statename;
      ++v4;
      v6 = v3;
      if ( !v5 )
        v6 = v2;
      ++v3;
      v2 = v6;
    }
    while ( v3 < s_lookAtNumStates );
  }
  return v2;
}

/*
==============
BG_LookAt_Init
==============
*/

void __fastcall BG_LookAt_Init(double _XMM0_8)
{
  int v5; 
  int RowCount; 
  __int64 v7; 
  __int64 v8; 
  const char *ColumnValueForRow; 
  scr_string_t String; 
  StringTable *v16; 
  const char *v17; 
  StringTable *v21; 
  const char *v22; 
  StringTable *v26; 
  const char *v27; 
  StringTable *v31; 
  const char *v32; 
  StringTable *v36; 
  const char *v37; 
  StringTable *v38; 
  const char *v41; 
  StringTable *v45; 
  const char *v46; 
  StringTable *v50; 
  const char *v51; 
  int v54; 
  __int64 v56; 
  const char *v57; 
  StringTable *v58; 
  const char *v62; 
  StringTable *v63; 
  const char *v66; 
  StringTable *v67; 
  const char *v71; 
  StringTable *v72; 
  const char *v76; 
  StringTable *v77; 
  const char *v81; 
  StringTable *v82; 
  const char *v86; 
  StringTable *table; 

  if ( !s_lookAtInitialized )
  {
    v5 = 0;
    s_lookAtInitialized = 1;
    s_lookAtNumStates = 0;
    StringTable_GetAsset("lookatstates.csv", (const StringTable **)&table);
    if ( !DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "lookatstates.csv") )
    {
      RowCount = StringTable_GetRowCount(table);
      v7 = RowCount;
      if ( RowCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_lookat.cpp", 48, ASSERT_TYPE_ASSERT, "(rowNum <= 8)", "%s\n\tToo many lookat states defined.", "rowNum <= BG_LOOKAT_MAX_STATES") )
        __debugbreak();
      v8 = v7;
      if ( (int)v7 > 0 )
      {
        _R14 = &s_lookAtLimits[0].m_maxDownPitch;
        __asm
        {
          vmovaps [rsp+88h+var_28], xmm6
          vmovss  xmm6, cs:__real@43340000
          vmovaps [rsp+88h+var_38], xmm7
          vmovss  xmm7, cs:__real@c3340000
          vmovaps [rsp+88h+var_48], xmm8
          vmovaps [rsp+88h+var_58], xmm9
          vmovss  xmm9, cs:__real@3f800000
          vxorps  xmm8, xmm8, xmm8
        }
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(table, v5, 0);
          String = j_SL_GetString_(ColumnValueForRow, 0, 22);
          v16 = table;
          *((_DWORD *)_R14 - 2) = String;
          v17 = StringTable_GetColumnValueForRow(v16, v5, 1);
          _XMM0_8 = atof(v17);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v21 = table;
          __asm { vmovss  dword ptr [r14-4], xmm0 }
          v22 = StringTable_GetColumnValueForRow(v21, v5, 2);
          *(double *)&_XMM0 = atof(v22);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v26 = table;
          __asm { vmovss  dword ptr [r14], xmm0 }
          v27 = StringTable_GetColumnValueForRow(v26, v5, 3);
          *(double *)&_XMM0 = atof(v27);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v31 = table;
          __asm { vmovss  dword ptr [r14+4], xmm0 }
          v32 = StringTable_GetColumnValueForRow(v31, v5, 4);
          *(double *)&_XMM0 = atof(v32);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v36 = table;
          __asm { vmovss  dword ptr [r14+8], xmm0 }
          v37 = StringTable_GetColumnValueForRow(v36, v5, 5);
          *(double *)&_XMM0 = atof(v37);
          v38 = table;
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmaxss  xmm1, xmm1, xmm8
            vmovss  dword ptr [r14+0Ch], xmm1
          }
          v41 = StringTable_GetColumnValueForRow(v38, v5, 6);
          *(double *)&_XMM0 = atof(v41);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v45 = table;
          __asm { vmovss  dword ptr [r14+10h], xmm0 }
          v46 = StringTable_GetColumnValueForRow(v45, v5, 7);
          *(double *)&_XMM0 = atof(v46);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v50 = table;
          __asm { vmovss  dword ptr [r14+14h], xmm0 }
          v51 = StringTable_GetColumnValueForRow(v50, v5, 8);
          *(double *)&_XMM0 = atof(v51);
          __asm
          {
            vcvtsd2ss xmm0, xmm0, xmm0; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
          }
          _XMM0_8 = I_fclamp(*(float *)&_XMM0_8, *(float *)&_XMM1, *(float *)&_XMM2);
          v54 = 13;
          _RSI = _R14 + 11;
          __asm { vmovss  dword ptr [r14+18h], xmm0 }
          v56 = 4i64;
          do
          {
            v57 = StringTable_GetColumnValueForRow(table, v5, v54 - 4);
            _XMM0_8 = atof(v57);
            v58 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm1, xmm1, xmm8
              vminss  xmm0, xmm1, xmm9
              vmovss  dword ptr [rsi-10h], xmm0
            }
            v62 = StringTable_GetColumnValueForRow(v58, v5, v54);
            *(double *)&_XMM0 = atof(v62);
            v63 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm1, xmm1, xmm8
              vminss  xmm0, xmm1, xmm9
              vmovss  dword ptr [rsi], xmm0
            }
            v66 = StringTable_GetColumnValueForRow(v63, v5, v54 + 4);
            _XMM0_8 = atof(v66);
            v67 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
              vmovss  dword ptr [rsi+10h], xmm3
            }
            v71 = StringTable_GetColumnValueForRow(v67, v5, v54 + 8);
            _XMM0_8 = atof(v71);
            v72 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
              vmovss  dword ptr [rsi+20h], xmm3
            }
            v76 = StringTable_GetColumnValueForRow(v72, v5, v54 + 12);
            _XMM0_8 = atof(v76);
            v77 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
              vmovss  dword ptr [rsi+30h], xmm3
            }
            v81 = StringTable_GetColumnValueForRow(v77, v5, v54 + 16);
            _XMM0_8 = atof(v81);
            v82 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
              vmovss  dword ptr [rsi+40h], xmm3
            }
            v86 = StringTable_GetColumnValueForRow(v82, v5, v54 + 20);
            _XMM0_8 = atof(v86);
            ++v54;
            ++_RSI;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
              vmovss  dword ptr [rsi+4Ch], xmm3
            }
            --v56;
          }
          while ( v56 );
          ++s_lookAtNumStates;
          ++v5;
          _R14 += 37;
          --v8;
        }
        while ( v8 );
        __asm
        {
          vmovaps xmm9, [rsp+88h+var_58]
          vmovaps xmm8, [rsp+88h+var_48]
          vmovaps xmm7, [rsp+88h+var_38]
          vmovaps xmm6, [rsp+88h+var_28]
        }
      }
    }
  }
}

/*
==============
BG_LookAt_Shutdown
==============
*/
void BG_LookAt_Shutdown(void)
{
  int v0; 
  int v1; 
  XAnimLookAtLimits *v2; 

  if ( s_lookAtInitialized )
  {
    v0 = s_lookAtNumStates;
    v1 = 0;
    s_lookAtInitialized = 0;
    if ( s_lookAtNumStates > 0 )
    {
      v2 = s_lookAtLimits;
      do
      {
        if ( v2->m_statename )
        {
          SL_RemoveRefToString(v2->m_statename);
          v0 = s_lookAtNumStates;
        }
        ++v1;
        ++v2;
      }
      while ( v1 < v0 );
    }
    s_lookAtNumStates = 0;
  }
}

