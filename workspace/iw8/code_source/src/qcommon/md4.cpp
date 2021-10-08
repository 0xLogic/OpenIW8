/*
==============
MD4Update
==============
*/

void __fastcall MD4Update(MD4_CTX *context, const unsigned __int8 *input, unsigned int inputLen)
{
  ?MD4Update@@YAXPEAUMD4_CTX@@PEBEI@Z(context, input, inputLen);
}

/*
==============
MD4Init
==============
*/

void __fastcall MD4Init(MD4_CTX *context)
{
  ?MD4Init@@YAXPEAUMD4_CTX@@@Z(context);
}

/*
==============
MD4Final
==============
*/

void __fastcall MD4Final(unsigned __int8 *digest, MD4_CTX *context)
{
  ?MD4Final@@YAXQEAEPEAUMD4_CTX@@@Z(digest, context);
}

/*
==============
MD4Final
==============
*/
void MD4Final(unsigned __int8 *digest, MD4_CTX *context)
{
  __int64 v2; 
  char *v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  unsigned __int8 v13; 
  unsigned __int8 input[2]; 
  char v15; 

  v2 = 0i64;
  v5 = &v15;
  v6 = 0;
  v7 = 2i64;
  do
  {
    v8 = v6;
    v5 += 4;
    ++v6;
    *(v5 - 6) = context->count[v8];
    *(v5 - 5) = BYTE1(context->count[v8]);
    *(v5 - 4) = BYTE2(context->count[v8]);
    *(v5 - 3) = HIBYTE(context->count[v8]);
    --v7;
  }
  while ( v7 );
  v9 = (context->count[0] >> 3) & 0x3F;
  v10 = 56 - v9;
  if ( v9 >= 0x38 )
    v10 = 120 - v9;
  MD4Update(context, PADDING, v10);
  MD4Update(context, input, 8u);
  v11 = digest + 2;
  v12 = 4i64;
  do
  {
    *(v11 - 2) = context->state[v2];
    v11 += 4;
    *(v11 - 5) = BYTE1(context->state[v2]);
    *(v11 - 4) = BYTE2(context->state[v2]);
    v13 = HIBYTE(context->state[v2]);
    v2 = (unsigned int)(v2 + 1);
    *(v11 - 3) = v13;
    --v12;
  }
  while ( v12 );
  memset_0(context, 0, sizeof(MD4_CTX));
}

/*
==============
MD4Init
==============
*/
void MD4Init(MD4_CTX *context)
{
  context->state[0] = 1732584193;
  *(_QWORD *)context->count = 0i64;
  context->state[1] = -271733879;
  context->state[2] = -1732584194;
  context->state[3] = 271733878;
}

/*
==============
MD4Transform
==============
*/
void MD4Transform(unsigned int *state, const unsigned __int8 *block)
{
  unsigned int v2; 
  const unsigned __int8 *v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  unsigned int v59; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 

  v2 = *state;
  v3 = block + 2;
  v4 = state[1];
  v5 = 0i64;
  v6 = state[2];
  v7 = state[3];
  v8 = 16i64;
  v59 = *state;
  do
  {
    v9 = *v3;
    v10 = v3[1];
    v3 += 4;
    *(&v61 + v5) = *(v3 - 6) | ((*(v3 - 5) | ((v9 | (v10 << 8)) << 8)) << 8);
    v5 = (unsigned int)(v5 + 1);
    --v8;
  }
  while ( v8 );
  v11 = __ROL4__(v2 + v61 + (v4 & v6 | v7 & ~v4), 3);
  v12 = __ROL4__(v7 + v62 + (v11 & v4 | v6 & ~v11), 7);
  v13 = __ROL4__(v6 + v63 + (v11 & v12 | v4 & ~v12), 11);
  v14 = __ROR4__(v4 + v64 + (v13 & v12 | v11 & ~v13), 13);
  v15 = __ROL4__(v11 + v65 + (v14 & v13 | v12 & ~v14), 3);
  v16 = __ROL4__(v12 + v66 + (v15 & v14 | v13 & ~v15), 7);
  v17 = __ROL4__(v13 + v67 + (v15 & v16 | v14 & ~v16), 11);
  v18 = __ROR4__(v14 + v68 + (v17 & v16 | v15 & ~v17), 13);
  v19 = v76;
  v20 = __ROL4__(v15 + v69 + (v18 & v17 | v16 & ~v18), 3);
  v21 = __ROL4__(v16 + v70 + (v20 & v18 | v17 & ~v20), 7);
  v22 = __ROL4__(v17 + v71 + (v20 & v21 | v18 & ~v21), 11);
  v23 = __ROR4__(v18 + v72 + (v22 & v21 | v20 & ~v22), 13);
  v24 = __ROL4__(v20 + v73 + (v23 & v22 | v21 & ~v23), 3);
  v25 = __ROL4__(v21 + v74 + (v24 & v23 | v22 & ~v24), 7);
  v26 = __ROL4__(v22 + v75 + (v24 & v25 | v23 & ~v25), 11);
  v27 = __ROR4__(v23 + v76 + (v26 & v25 | v24 & ~v26), 13);
  v28 = __ROL4__(v61 + (v27 & v26 | v25 & (v27 | v26)) + v24 + 1518500249, 3);
  v29 = __ROL4__(v65 + (v28 & v27 | v26 & (v28 | v27)) + v25 + 1518500249, 5);
  v30 = __ROL4__(v69 + (v28 & v27 | v29 & (v28 | v27)) + v26 + 1518500249, 9);
  v31 = __ROL4__(v73 + (v28 & v30 | v29 & (v28 | v30)) + v27 + 1518500249, 13);
  v32 = __ROL4__(v62 + (v31 & v30 | v29 & (v31 | v30)) + v28 + 1518500249, 3);
  v33 = __ROL4__(v66 + (v32 & v31 | v30 & (v32 | v31)) + v29 + 1518500249, 5);
  v34 = __ROL4__(v70 + (v32 & v31 | v33 & (v32 | v31)) + v30 + 1518500249, 9);
  v35 = __ROL4__(v74 + (v32 & v34 | v33 & (v32 | v34)) + v31 + 1518500249, 13);
  v36 = __ROL4__(v63 + (v35 & v34 | v33 & (v35 | v34)) + v32 + 1518500249, 3);
  v37 = __ROL4__(v67 + (v36 & v35 | v34 & (v36 | v35)) + v33 + 1518500249, 5);
  v38 = __ROL4__(v71 + (v36 & v35 | v37 & (v36 | v35)) + v34 + 1518500249, 9);
  v39 = __ROL4__(v75 + (v36 & v38 | v37 & (v36 | v38)) + v35 + 1518500249, 13);
  v40 = __ROL4__(v64 + (v39 & v38 | v37 & (v39 | v38)) + v36 + 1518500249, 3);
  v41 = __ROL4__(v68 + (v40 & v39 | v38 & (v40 | v39)) + v37 + 1518500249, 5);
  v42 = __ROL4__(v72 + (v40 & v39 | v41 & (v40 | v39)) + v38 + 1518500249, 9);
  v43 = __ROL4__(v76 + (v40 & v42 | v41 & (v40 | v42)) + v39 + 1518500249, 13);
  v44 = __ROL4__(v61 + (v43 ^ v42 ^ v41) + v40 + 1859775393, 3);
  v45 = __ROL4__(v69 + (v44 ^ v43 ^ v42) + v41 + 1859775393, 9);
  v46 = __ROL4__(v65 + (v44 ^ v43 ^ v45) + v42 + 1859775393, 11);
  v47 = __ROL4__(v73 + (v44 ^ v46 ^ v45) + v43 + 1859775393, 15);
  v48 = __ROL4__(v63 + (v47 ^ v46 ^ v45) + v44 + 1859775393, 3);
  v49 = __ROL4__(v71 + (v48 ^ v47 ^ v46) + v45 + 1859775393, 9);
  v50 = __ROL4__(v67 + (v48 ^ v47 ^ v49) + v46 + 1859775393, 11);
  v51 = __ROL4__(v75 + (v48 ^ v50 ^ v49) + v47 + 1859775393, 15);
  v52 = __ROL4__(v62 + (v51 ^ v50 ^ v49) + v48 + 1859775393, 3);
  v53 = __ROL4__(v70 + (v52 ^ v51 ^ v50) + v49 + 1859775393, 9);
  v54 = __ROL4__(v66 + (v52 ^ v51 ^ v53) + v50 + 1859775393, 11);
  v55 = __ROL4__(v74 + (v52 ^ v54 ^ v53) + v51 + 1859775393, 15);
  v56 = __ROL4__(v64 + (v55 ^ v54 ^ v53) + v52 + 1859775393, 3);
  v57 = __ROL4__(v72 + (v56 ^ v55 ^ v54) + v53 + 1859775393, 9);
  v58 = __ROL4__(v68 + (v56 ^ v55 ^ v57) + v54 + 1859775393, 11);
  state[2] += v58;
  *state = v56 + v59;
  state[1] += __ROL4__(v19 + (v56 ^ v58 ^ v57) + v55 + 1859775393, 15);
  state[3] += v57;
}

/*
==============
MD4Update
==============
*/
void MD4Update(MD4_CTX *context, const unsigned __int8 *input, unsigned int inputLen)
{
  unsigned int v3; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  v3 = context->count[0];
  v7 = (v3 >> 3) & 0x3F;
  v8 = context->count[1];
  v9 = v3 + 8 * inputLen;
  context->count[0] = v9;
  if ( v9 < 8 * inputLen )
    ++v8;
  v10 = 64 - v7;
  context->count[1] = v8 + (inputLen >> 29);
  if ( inputLen < 64 - (int)v7 )
  {
    v10 = 0;
  }
  else
  {
    memcpy_0(&context->buffer[v7], input, v10);
    MD4Transform(context->state, context->buffer);
    for ( ; v10 + 63 < inputLen; v10 += 64 )
      MD4Transform(context->state, &input[v10]);
    v7 = 0i64;
  }
  memcpy_0(&context->buffer[v7], &input[v10], inputLen - v10);
}

