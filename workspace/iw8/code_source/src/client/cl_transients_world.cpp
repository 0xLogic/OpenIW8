/*
==============
CL_TransientsWorld_GetVisibilityBitArray
==============
*/

const bitarray<1536> *__fastcall CL_TransientsWorld_GetVisibilityBitArray(LocalClientNum_t localClientNum)
{
  return ?CL_TransientsWorld_GetVisibilityBitArray@@YAAEBV?$bitarray@$0GAA@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_TransientsWorld_GetVisibilityHintBitArray
==============
*/

const bitarray<1536> *__fastcall CL_TransientsWorld_GetVisibilityHintBitArray(LocalClientNum_t localClientNum)
{
  return ?CL_TransientsWorld_GetVisibilityHintBitArray@@YAAEBV?$bitarray@$0GAA@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_TransientsWorld_GetVisibility
==============
*/

bool __fastcall CL_TransientsWorld_GetVisibility(LocalClientNum_t localClientNum, unsigned int transientIndex)
{
  return ?CL_TransientsWorld_GetVisibility@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, transientIndex);
}

/*
==============
CL_TransientsWorld_SetVisibility
==============
*/

void __fastcall CL_TransientsWorld_SetVisibility(LocalClientNum_t localClientNum, unsigned int transientIndex, bool toggle)
{
  ?CL_TransientsWorld_SetVisibility@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, transientIndex, toggle);
}

/*
==============
CL_TransientsWorld_SetVisibilityBitArray
==============
*/

void __fastcall CL_TransientsWorld_SetVisibilityBitArray(LocalClientNum_t localClientNum, const bitarray<1536> *visible, const bitarray<1536> *visibleHint)
{
  ?CL_TransientsWorld_SetVisibilityBitArray@@YAXW4LocalClientNum_t@@AEBV?$bitarray@$0GAA@@@1@Z(localClientNum, visible, visibleHint);
}

/*
==============
CL_TransientsWorld_ResetVisibility
==============
*/

void __fastcall CL_TransientsWorld_ResetVisibility(LocalClientNum_t localClientNum)
{
  ?CL_TransientsWorld_ResetVisibility@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_TransientsWorld_GetVisibility
==============
*/
bool CL_TransientsWorld_GetVisibility(LocalClientNum_t localClientNum, unsigned int transientIndex)
{
  __int64 v2; 
  unsigned __int64 v3; 
  bitarray<1536> *v4; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = localClientNum;
  v3 = transientIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x600 )
  {
    LODWORD(v8) = 1536;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( s_transientsWorld.visible[localClientNum].size() )", "transientIndex doesn't index s_transientsWorld.visible[localClientNum].size()\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v4 = &s_transientsWorld.visible[v2];
  if ( (unsigned int)v3 >= 0x600 )
  {
    LODWORD(v8) = 1536;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v8) )
      __debugbreak();
  }
  return ((0x80000000 >> (v3 & 0x1F)) & v4->array[v3 >> 5]) != 0;
}

/*
==============
CL_TransientsWorld_GetVisibilityBitArray
==============
*/
const bitarray<1536> *CL_TransientsWorld_GetVisibilityBitArray(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (const bitarray<1536> *)((char *)&s_transientsWorld + 192 * v1);
}

/*
==============
CL_TransientsWorld_GetVisibilityHintBitArray
==============
*/
bitarray<1536> *CL_TransientsWorld_GetVisibilityHintBitArray(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &s_transientsWorld.visibleHint[v1];
}

/*
==============
CL_TransientsWorld_ResetVisibility
==============
*/
void CL_TransientsWorld_ResetVisibility(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v36; 
  __int64 v37; 

  v1 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 22, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v17) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 23, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", v17, 2) )
      __debugbreak();
  }
  v2 = 48 * v1;
  s_transientsWorld.visible[v1].array[0] = 0;
  v3 = 192 * v1 + 8;
  v36 = v1;
  v4 = 192 * v1 + 12;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v3) = 0;
  s_transientsWorld.visible[v1].array[1] = 0;
  v5 = 192 * v1 + 16;
  v37 = 192 * v1 + 4;
  v6 = 192 * v1 + 20;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v4) = 0;
  s_transientsWorld.visible[v2 / 0x30].array[13] = 0;
  v7 = 192 * v1 + 24;
  s_transientsWorld.visible[v2 / 0x30].array[14] = 0;
  v8 = 192 * v1 + 28;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v5) = 0;
  v18 = 4 * v2 + 60;
  v9 = 4 * v2 + 32;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v6) = 0;
  s_transientsWorld.visible[v2 / 0x30].array[15] = 0;
  v10 = 4 * v2 + 36;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v7) = 0;
  v19 = 4 * v2 + 64;
  v11 = 4 * v2 + 40;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v8) = 0;
  v12 = 4 * v2 + 44;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v9) = 0;
  v13 = 4 * v2 + 48;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v10) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v11) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v12) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v13) = 0;
  v14 = 4 * v2 + 52;
  v15 = 4 * v2 + 56;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v19) = 0;
  v20 = 4 * v2 + 68;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v20) = 0;
  v21 = 4 * v2 + 72;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v21) = 0;
  v22 = 4 * v2 + 76;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v22) = 0;
  v23 = 4 * v2 + 80;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v23) = 0;
  v24 = 4 * v2 + 84;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v24) = 0;
  v25 = 4 * v2 + 88;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v25) = 0;
  v26 = 4 * v2 + 92;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v26) = 0;
  v27 = 4 * v2 + 96;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v27) = 0;
  v28 = 4 * v2 + 100;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v28) = 0;
  v29 = 4 * v2 + 104;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v29) = 0;
  v30 = 4 * v2 + 108;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v30) = 0;
  v31 = 4 * v2 + 112;
  *(unsigned int *)((char *)s_transientsWorld.visible[0].array + v31) = 0;
  s_transientsWorld.visible[v2 / 0x30].array[29] = 0;
  v32 = 4 * v2 + 116;
  s_transientsWorld.visible[v2 / 0x30].array[30] = 0;
  v33 = 4 * v2 + 120;
  s_transientsWorld.visible[v2 / 0x30].array[31] = 0;
  v34 = 4 * v2 + 124;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[32] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[34] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[36] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[38] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[40] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[42] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[44] = 0i64;
  *(_QWORD *)&s_transientsWorld.visible[v2 / 0x30].array[46] = 0i64;
  v16 = localClientNum;
  s_transientsWorld.visibleHint[v36].array[0] = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v37) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v3) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v4) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v5) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v6) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v7) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v18) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v8) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v9) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v10) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v19) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v11) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v12) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v13) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v20) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v14) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v15) = 0;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[32] = 0i64;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v21) = 0;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[34] = 0i64;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[36] = 0i64;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[38] = 0i64;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v22) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v23) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v24) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v25) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v26) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v27) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v28) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v29) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v30) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v31) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v32) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v33) = 0;
  *(unsigned int *)((char *)s_transientsWorld.visibleHint[0].array + v34) = 0;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[40] = 0i64;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[42] = 0i64;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[44] = 0i64;
  *(_QWORD *)&s_transientsWorld.visibleHint[v16].array[46] = 0i64;
}

/*
==============
CL_TransientsWorld_SetVisibility
==============
*/
void CL_TransientsWorld_SetVisibility(LocalClientNum_t localClientNum, unsigned int transientIndex, bool toggle)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 

  v4 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 32, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    v9 = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 33, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( transientIndex >= 0x600 )
  {
    LODWORD(v8) = 1536;
    LODWORD(v7) = transientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 34, ASSERT_TYPE_ASSERT, "(unsigned)( transientIndex ) < (unsigned)( s_transientsWorld.visible[localClientNum].size() )", "transientIndex doesn't index s_transientsWorld.visible[localClientNum].size()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = v4;
  bitarray_base<bitarray<1536>>::setBitTo((bitarray_base<bitarray<1536> > *)&s_transientsWorld + v6 * 192, transientIndex, toggle);
  bitarray_base<bitarray<1536>>::setBitTo(&s_transientsWorld.visibleHint[v6], transientIndex, toggle);
}

/*
==============
CL_TransientsWorld_SetVisibilityBitArray
==============
*/
void CL_TransientsWorld_SetVisibilityBitArray(LocalClientNum_t localClientNum, const bitarray<1536> *visible, const bitarray<1536> *visibleHint)
{
  __int64 v3; 
  signed __int64 v6; 
  __int64 v7; 
  int *v8; 
  unsigned int v21; 
  int *v22; 
  __int64 v23; 
  bitarray<1536> *v24; 
  int v25[4]; 
  int v26[44]; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v25[0] = visible->array[0];
  v25[1] = visible->array[1];
  v25[2] = visible->array[2];
  v25[3] = visible->array[3];
  v26[0] = visible->array[4];
  v26[1] = visible->array[5];
  v26[2] = visible->array[6];
  v26[3] = visible->array[7];
  v26[4] = visible->array[8];
  v26[5] = visible->array[9];
  v26[6] = visible->array[10];
  v26[7] = visible->array[11];
  v26[8] = visible->array[12];
  v26[9] = visible->array[13];
  v26[10] = visible->array[14];
  v26[11] = visible->array[15];
  v26[12] = visible->array[16];
  v26[13] = visible->array[17];
  v26[14] = visible->array[18];
  v26[15] = visible->array[19];
  v26[16] = visible->array[20];
  v26[17] = visible->array[21];
  v26[18] = visible->array[22];
  v26[19] = visible->array[23];
  v26[20] = visible->array[24];
  v26[21] = visible->array[25];
  v26[22] = visible->array[26];
  v26[23] = visible->array[27];
  v26[24] = visible->array[28];
  v26[25] = visible->array[29];
  v26[26] = visible->array[30];
  v26[27] = visible->array[31];
  v26[28] = visible->array[32];
  v26[29] = visible->array[33];
  v26[30] = visible->array[34];
  v26[31] = visible->array[35];
  v26[32] = visible->array[36];
  v26[33] = visible->array[37];
  v26[34] = visible->array[38];
  v26[35] = visible->array[39];
  v26[36] = visible->array[40];
  v26[37] = visible->array[41];
  v6 = (char *)visibleHint - (char *)v26;
  v7 = 3i64;
  v26[38] = visible->array[42];
  v26[39] = visible->array[43];
  v26[40] = visible->array[44];
  v26[41] = visible->array[45];
  v26[42] = visible->array[46];
  v26[43] = visible->array[47];
  v8 = v26;
  do
  {
    _XMM0 = *(_OWORD *)((char *)v8 + v6);
    v8 += 16;
    __asm
    {
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-50h]
    }
    *((_OWORD *)v8 - 5) = _XMM0;
    _XMM0 = *(_OWORD *)((char *)v8 + v6 - 48);
    __asm
    {
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-40h]
    }
    *((_OWORD *)v8 - 4) = _XMM0;
    _XMM0 = *(_OWORD *)((char *)v8 + v6 - 32);
    __asm
    {
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-30h]
    }
    *((_OWORD *)v8 - 3) = _XMM0;
    _XMM0 = *(_OWORD *)((char *)v8 + v6 - 16);
    __asm
    {
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-20h]
    }
    *((_OWORD *)v8 - 2) = _XMM0;
    --v7;
  }
  while ( v7 );
  v21 = 0;
  v22 = v25;
  while ( !*v22 )
  {
    ++v21;
    ++v22;
    if ( v21 >= 0x30 )
      goto LABEL_12;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 72, ASSERT_TYPE_ASSERT, "(!visibleNoHint.anyBitsOn())", (const char *)&queryFormat, "!visibleNoHint.anyBitsOn()") )
    __debugbreak();
LABEL_12:
  v23 = v3;
  *(_OWORD *)s_transientsWorld.visible[v23].array = *(_OWORD *)visible->array;
  *(_OWORD *)&s_transientsWorld.visible[v23].array[4] = *(_OWORD *)&visible->array[4];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[8] = *(_OWORD *)&visible->array[8];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[12] = *(_OWORD *)&visible->array[12];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[16] = *(_OWORD *)&visible->array[16];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[20] = *(_OWORD *)&visible->array[20];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[24] = *(_OWORD *)&visible->array[24];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[28] = *(_OWORD *)&visible->array[28];
  *(_OWORD *)&s_transientsWorld.visible[v23].array[32] = *(_OWORD *)&visible->array[32];
  v24 = &s_transientsWorld.visible[v3];
  *(_OWORD *)&v24->array[36] = *(_OWORD *)&visible->array[36];
  *(_OWORD *)&v24->array[40] = *(_OWORD *)&visible->array[40];
  *(_OWORD *)&v24->array[44] = *(_OWORD *)&visible->array[44];
  v24 += 2;
  *(_OWORD *)v24->array = *(_OWORD *)visibleHint->array;
  *(_OWORD *)&v24->array[4] = *(_OWORD *)&visibleHint->array[4];
  *(_OWORD *)&v24->array[8] = *(_OWORD *)&visibleHint->array[8];
  *(_OWORD *)&v24->array[12] = *(_OWORD *)&visibleHint->array[12];
  *(_OWORD *)&v24->array[16] = *(_OWORD *)&visibleHint->array[16];
  *(_OWORD *)&v24->array[20] = *(_OWORD *)&visibleHint->array[20];
  *(_OWORD *)&v24->array[24] = *(_OWORD *)&visibleHint->array[24];
  *(_OWORD *)&v24->array[28] = *(_OWORD *)&visibleHint->array[28];
  *(_OWORD *)&v24->array[32] = *(_OWORD *)&visibleHint->array[32];
  *(_OWORD *)&v24->array[36] = *(_OWORD *)&visibleHint->array[36];
  *(_OWORD *)&v24->array[40] = *(_OWORD *)&visibleHint->array[40];
  *(_OWORD *)&v24->array[44] = *(_OWORD *)&visibleHint->array[44];
}

