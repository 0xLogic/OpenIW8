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
  __int64 v8; 
  unsigned int v22; 
  int *v23; 
  int v51[4]; 
  int v52[44]; 

  v3 = localClientNum;
  _RDI = visibleHint;
  _RBX = visible;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_transientsWorld.visible ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_transientsWorld.visible )\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v51[0] = _RBX->array[0];
  v51[1] = _RBX->array[1];
  v51[2] = _RBX->array[2];
  v51[3] = _RBX->array[3];
  v52[0] = _RBX->array[4];
  v52[1] = _RBX->array[5];
  v52[2] = _RBX->array[6];
  v52[3] = _RBX->array[7];
  v52[4] = _RBX->array[8];
  v52[5] = _RBX->array[9];
  v52[6] = _RBX->array[10];
  v52[7] = _RBX->array[11];
  v52[8] = _RBX->array[12];
  v52[9] = _RBX->array[13];
  v52[10] = _RBX->array[14];
  v52[11] = _RBX->array[15];
  v52[12] = _RBX->array[16];
  v52[13] = _RBX->array[17];
  v52[14] = _RBX->array[18];
  v52[15] = _RBX->array[19];
  v52[16] = _RBX->array[20];
  v52[17] = _RBX->array[21];
  v52[18] = _RBX->array[22];
  v52[19] = _RBX->array[23];
  v52[20] = _RBX->array[24];
  v52[21] = _RBX->array[25];
  v52[22] = _RBX->array[26];
  v52[23] = _RBX->array[27];
  v52[24] = _RBX->array[28];
  v52[25] = _RBX->array[29];
  v52[26] = _RBX->array[30];
  v52[27] = _RBX->array[31];
  v52[28] = _RBX->array[32];
  v52[29] = _RBX->array[33];
  v52[30] = _RBX->array[34];
  v52[31] = _RBX->array[35];
  v52[32] = _RBX->array[36];
  v52[33] = _RBX->array[37];
  v52[34] = _RBX->array[38];
  v52[35] = _RBX->array[39];
  __asm { vmovdqu xmm3, cs:__xmm@ffffffffffffffffffffffffffffffff }
  v52[36] = _RBX->array[40];
  v52[37] = _RBX->array[41];
  _RCX = (char *)_RDI - (char *)v52;
  v8 = 3i64;
  v52[38] = _RBX->array[42];
  v52[39] = _RBX->array[43];
  v52[40] = _RBX->array[44];
  v52[41] = _RBX->array[45];
  v52[42] = _RBX->array[46];
  v52[43] = _RBX->array[47];
  _RAX = v52;
  do
  {
    __asm { vmovdqu xmm0, xmmword ptr [rcx+rax] }
    _RAX += 16;
    __asm
    {
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-50h]
      vmovdqu xmmword ptr [rax-50h], xmm0
      vmovdqu xmm0, xmmword ptr [rax+rcx-30h]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-40h]
      vmovdqu xmmword ptr [rax-40h], xmm0
      vmovdqu xmm0, xmmword ptr [rax+rcx-20h]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-30h]
      vmovdqu xmmword ptr [rax-30h], xmm0
      vmovdqu xmm0, xmmword ptr [rax+rcx-10h]
      vpandn  xmm2, xmm0, xmm3
      vpand   xmm0, xmm2, xmmword ptr [rax-20h]
      vmovdqu xmmword ptr [rax-20h], xmm0
    }
    --v8;
  }
  while ( v8 );
  v22 = 0;
  v23 = v51;
  while ( !*v23 )
  {
    ++v22;
    ++v23;
    if ( v22 >= 0x30 )
      goto LABEL_12;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_transients_world.cpp", 72, ASSERT_TYPE_ASSERT, "(!visibleNoHint.anyBitsOn())", (const char *)&queryFormat, "!visibleNoHint.anyBitsOn()") )
    __debugbreak();
LABEL_12:
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  _RDX = &s_transientsWorld;
  _RCX = 192 * v3;
  __asm
  {
    vmovups xmmword ptr [rcx+rdx], xmm0
    vmovups xmm1, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [rcx+rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rcx+rdx+20h], xmm0
    vmovups xmm1, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [rcx+rdx+30h], xmm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [rcx+rdx+40h], xmm0
    vmovups xmm1, xmmword ptr [rbx+50h]
    vmovups xmmword ptr [rcx+rdx+50h], xmm1
    vmovups xmm0, xmmword ptr [rbx+60h]
    vmovups xmmword ptr [rcx+rdx+60h], xmm0
    vmovups xmm0, xmmword ptr [rbx+70h]
    vmovups xmmword ptr [rcx+rdx+70h], xmm0
    vmovups xmm1, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rcx+rdx+80h], xmm1
    vmovups xmm0, xmmword ptr [rbx+90h]
  }
  _RAX = &s_transientsWorld.visible[v3];
  __asm
  {
    vmovups xmmword ptr [rax+90h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0A0h]
    vmovups xmmword ptr [rax+0A0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0B0h]
    vmovups xmmword ptr [rax+0B0h], xmm0
    vmovups xmm0, xmmword ptr [rdi]
  }
  _RAX += 2;
  __asm
  {
    vmovups xmmword ptr [rax], xmm0
    vmovups xmm1, xmmword ptr [rdi+10h]
    vmovups xmmword ptr [rax+10h], xmm1
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rax+20h], xmm0
    vmovups xmm1, xmmword ptr [rdi+30h]
    vmovups xmmword ptr [rax+30h], xmm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rax+40h], xmm0
    vmovups xmm1, xmmword ptr [rdi+50h]
    vmovups xmmword ptr [rax+50h], xmm1
    vmovups xmm0, xmmword ptr [rdi+60h]
    vmovups xmmword ptr [rax+60h], xmm0
    vmovups xmm1, xmmword ptr [rdi+70h]
    vmovups xmmword ptr [rax+70h], xmm1
    vmovups xmm0, xmmword ptr [rdi+80h]
    vmovups xmmword ptr [rax+80h], xmm0
    vmovups xmm1, xmmword ptr [rdi+90h]
    vmovups xmmword ptr [rax+90h], xmm1
    vmovups xmm0, xmmword ptr [rdi+0A0h]
    vmovups xmmword ptr [rax+0A0h], xmm0
    vmovups xmm1, xmmword ptr [rdi+0B0h]
    vmovups xmmword ptr [rax+0B0h], xmm1
  }
}

