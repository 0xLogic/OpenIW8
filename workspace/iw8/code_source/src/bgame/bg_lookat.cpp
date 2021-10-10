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
  int v1; 
  int RowCount; 
  __int64 v3; 
  __int64 v4; 
  float *p_m_maxDownPitch; 
  const char *ColumnValueForRow; 
  scr_string_t String; 
  StringTable *v8; 
  const char *v9; 
  StringTable *v11; 
  const char *v12; 
  StringTable *v14; 
  const char *v15; 
  StringTable *v17; 
  const char *v18; 
  StringTable *v20; 
  const char *v21; 
  StringTable *v22; 
  const char *v25; 
  StringTable *v27; 
  const char *v28; 
  StringTable *v30; 
  const char *v31; 
  int v32; 
  float *v33; 
  __int64 v34; 
  const char *v35; 
  StringTable *v36; 
  const char *v40; 
  StringTable *v41; 
  const char *v44; 
  StringTable *v45; 
  const char *v49; 
  StringTable *v50; 
  const char *v54; 
  StringTable *v55; 
  const char *v59; 
  StringTable *v60; 
  const char *v64; 
  StringTable *table; 

  if ( !s_lookAtInitialized )
  {
    v1 = 0;
    s_lookAtInitialized = 1;
    s_lookAtNumStates = 0;
    StringTable_GetAsset("lookatstates.csv", (const StringTable **)&table);
    if ( !DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "lookatstates.csv") )
    {
      RowCount = StringTable_GetRowCount(table);
      v3 = RowCount;
      if ( RowCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_lookat.cpp", 48, ASSERT_TYPE_ASSERT, "(rowNum <= 8)", "%s\n\tToo many lookat states defined.", "rowNum <= BG_LOOKAT_MAX_STATES") )
        __debugbreak();
      v4 = v3;
      if ( (int)v3 > 0 )
      {
        p_m_maxDownPitch = &s_lookAtLimits[0].m_maxDownPitch;
        do
        {
          ColumnValueForRow = StringTable_GetColumnValueForRow(table, v1, 0);
          String = j_SL_GetString_(ColumnValueForRow, 0, 22);
          v8 = table;
          *((_DWORD *)p_m_maxDownPitch - 2) = String;
          v9 = StringTable_GetColumnValueForRow(v8, v1, 1);
          _XMM0_8 = atof(v9);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -180.0, 180.0);
          v11 = table;
          *(p_m_maxDownPitch - 1) = *(float *)&_XMM0;
          v12 = StringTable_GetColumnValueForRow(v11, v1, 2);
          *(double *)&_XMM0 = atof(v12);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -180.0, 180.0);
          v14 = table;
          *p_m_maxDownPitch = *(float *)&_XMM0;
          v15 = StringTable_GetColumnValueForRow(v14, v1, 3);
          *(double *)&_XMM0 = atof(v15);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -180.0, 180.0);
          v17 = table;
          p_m_maxDownPitch[1] = *(float *)&_XMM0;
          v18 = StringTable_GetColumnValueForRow(v17, v1, 4);
          *(double *)&_XMM0 = atof(v18);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -180.0, 180.0);
          v20 = table;
          p_m_maxDownPitch[2] = *(float *)&_XMM0;
          v21 = StringTable_GetColumnValueForRow(v20, v1, 5);
          *(double *)&_XMM0 = atof(v21);
          v22 = table;
          __asm
          {
            vcvtsd2ss xmm1, xmm0, xmm0
            vmaxss  xmm1, xmm1, xmm8
          }
          p_m_maxDownPitch[3] = *(float *)&_XMM1;
          v25 = StringTable_GetColumnValueForRow(v22, v1, 6);
          *(double *)&_XMM0 = atof(v25);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -180.0, 180.0);
          v27 = table;
          p_m_maxDownPitch[4] = *(float *)&_XMM0;
          v28 = StringTable_GetColumnValueForRow(v27, v1, 7);
          *(double *)&_XMM0 = atof(v28);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -180.0, 180.0);
          v30 = table;
          p_m_maxDownPitch[5] = *(float *)&_XMM0;
          v31 = StringTable_GetColumnValueForRow(v30, v1, 8);
          *(double *)&_XMM0 = atof(v31);
          __asm { vcvtsd2ss xmm0, xmm0, xmm0; val }
          _XMM0_8 = I_fclamp(*(float *)&_XMM0_8, -180.0, 180.0);
          v32 = 13;
          v33 = p_m_maxDownPitch + 11;
          p_m_maxDownPitch[6] = *(float *)&_XMM0_8;
          v34 = 4i64;
          do
          {
            v35 = StringTable_GetColumnValueForRow(table, v1, v32 - 4);
            _XMM0_8 = atof(v35);
            v36 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm1, xmm1, xmm8
              vminss  xmm0, xmm1, xmm9
            }
            *(v33 - 4) = *(float *)&_XMM0;
            v40 = StringTable_GetColumnValueForRow(v36, v1, v32);
            *(double *)&_XMM0 = atof(v40);
            v41 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm1, xmm1, xmm8
              vminss  xmm0, xmm1, xmm9
            }
            *v33 = *(float *)&_XMM0_8;
            v44 = StringTable_GetColumnValueForRow(v41, v1, v32 + 4);
            _XMM0_8 = atof(v44);
            v45 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
            }
            v33[4] = *(float *)&_XMM3;
            v49 = StringTable_GetColumnValueForRow(v45, v1, v32 + 8);
            _XMM0_8 = atof(v49);
            v50 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
            }
            v33[8] = *(float *)&_XMM3;
            v54 = StringTable_GetColumnValueForRow(v50, v1, v32 + 12);
            _XMM0_8 = atof(v54);
            v55 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
            }
            v33[12] = *(float *)&_XMM3;
            v59 = StringTable_GetColumnValueForRow(v55, v1, v32 + 16);
            _XMM0_8 = atof(v59);
            v60 = table;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
            }
            v33[16] = *(float *)&_XMM3;
            v64 = StringTable_GetColumnValueForRow(v60, v1, v32 + 20);
            _XMM0_8 = atof(v64);
            ++v32;
            ++v33;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmaxss  xmm2, xmm1, xmm7
              vminss  xmm3, xmm2, xmm6
            }
            v33[19] = *(float *)&_XMM3;
            --v34;
          }
          while ( v34 );
          ++s_lookAtNumStates;
          ++v1;
          p_m_maxDownPitch += 37;
          --v4;
        }
        while ( v4 );
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

