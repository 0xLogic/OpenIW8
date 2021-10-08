/*
==============
inflate_fast
==============
*/

void __fastcall inflate_fast(z_stream_s *strm, unsigned int start)
{
  ?inflate_fast@@YAXPEAUz_stream_s@@I@Z(strm, start);
}

/*
==============
inflate_fast
==============
*/
void inflate_fast(z_stream_s *strm, unsigned int start)
{
  internal_state *state; 
  __int64 v3; 
  unsigned __int8 *next_out; 
  unsigned __int8 *v5; 
  unsigned int avail_out; 
  __int64 v7; 
  unsigned int dummy; 
  unsigned __int8 *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int8 *v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  char v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  unsigned int v26; 
  char v27; 
  unsigned int v28; 
  unsigned int v29; 
  int v30; 
  char v31; 
  int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  __int64 v36; 
  unsigned __int8 *v37; 
  unsigned __int8 v38; 
  __int64 v39; 
  unsigned int v40; 
  signed __int64 v41; 
  unsigned __int8 v42; 
  unsigned int v43; 
  unsigned __int8 v44; 
  unsigned __int8 v45; 
  __int64 v46; 
  unsigned __int8 v47; 
  unsigned __int8 *v48; 
  unsigned __int8 v49; 
  z_stream_s *v50; 
  const char *v51; 
  __int64 v52; 
  unsigned __int8 *v53; 
  int v54; 
  int i; 
  __int64 v56; 
  unsigned __int8 *v57; 
  unsigned __int8 *v58; 
  unsigned int v59; 
  __int64 v60; 
  int v62; 
  int v63; 
  unsigned int v64; 

  state = strm->state;
  v3 = strm->avail_in - 5;
  next_out = strm->next_out;
  v5 = strm->next_in - 1;
  avail_out = strm->avail_out;
  v7 = *(_QWORD *)&state[24].dummy;
  dummy = state[13].dummy;
  v9 = next_out - 1;
  v10 = state[16].dummy;
  v11 = state[17].dummy;
  v12 = &v9[avail_out - 257];
  v13 = *(_QWORD *)&state[22].dummy;
  v58 = &v5[v3];
  v57 = v12;
  v59 = (_DWORD)v9 - (start - avail_out);
  v14 = (1 << state[26].dummy) - 1;
  v63 = state[11].dummy;
  v64 = state[12].dummy;
  v15 = (1 << state[27].dummy) - 1;
  v62 = v15;
  v60 = *(_QWORD *)&state[14].dummy;
  v56 = v7;
  for ( i = v14; ; v14 = i )
  {
    if ( v11 < 0xF )
    {
      v16 = (v5[1] << v11) + v10;
      v17 = v5[2];
      v5 += 2;
      v10 = (v17 << (v11 + 8)) + v16;
      v11 += 16;
    }
    v18 = *(_DWORD *)(v13 + 4i64 * (v10 & v14));
    v10 >>= SBYTE1(v18);
    v11 -= BYTE1(v18);
    v19 = v18;
    if ( (_BYTE)v18 )
      break;
LABEL_9:
    *++v9 = BYTE2(v18);
LABEL_55:
    if ( v5 >= v58 || v9 >= v12 )
    {
      v50 = strm;
      goto LABEL_65;
    }
  }
  v20 = HIWORD(v18);
  while ( 1 )
  {
    if ( (v19 & 0x10) != 0 )
    {
      v21 = v19 & 0xF;
      if ( v21 )
      {
        if ( v11 < v21 )
        {
          v22 = *++v5;
          v10 += v22 << v11;
          v11 += 8;
        }
        v23 = v10 & ((1 << v21) - 1);
        v10 >>= v21;
        v20 += v23;
        v11 -= v21;
      }
      if ( v11 < 0xF )
      {
        v24 = (v5[1] << v11) + v10;
        v25 = v5[2];
        v5 += 2;
        v10 = (v25 << (v11 + 8)) + v24;
        v11 += 16;
      }
      v26 = *(_DWORD *)(v7 + 4i64 * (v10 & v15));
      v10 >>= SBYTE1(v26);
      v11 -= BYTE1(v26);
      v27 = v26;
      v28 = HIWORD(v26);
      if ( (v26 & 0x10) == 0 )
      {
        while ( (v27 & 0x40) == 0 )
        {
          v26 = *(_DWORD *)(v7 + 4i64 * (HIWORD(v26) + (v10 & ((1 << v27) - 1))));
          v10 >>= SBYTE1(v26);
          v11 -= BYTE1(v26);
          v27 = v26;
          v28 = HIWORD(v26);
          if ( (v26 & 0x10) != 0 )
            goto LABEL_19;
        }
        v51 = "invalid distance code";
        goto LABEL_62;
      }
LABEL_19:
      v29 = v27 & 0xF;
      if ( v11 < v29 )
      {
        v30 = *++v5;
        v31 = v11;
        v11 += 8;
        v10 += v30 << v31;
        if ( v11 < v29 )
        {
          v32 = *++v5;
          v10 += v32 << v11;
          v11 += 8;
        }
      }
      v33 = (_DWORD)v9 - v59;
      v11 -= v29;
      v34 = v28 + (v10 & ((1 << v29) - 1));
      v10 >>= v29;
      if ( v34 > (unsigned int)v9 - v59 )
      {
        v35 = v34 - v33;
        if ( v34 - v33 > v64 && state[1782].dummy )
        {
          v51 = "invalid distance too far back";
LABEL_62:
          v50 = strm;
          strm->msg = v51;
          state->dummy = 29;
          goto LABEL_65;
        }
        v36 = v60 - 1;
        if ( !dummy )
        {
          v37 = (unsigned __int8 *)(v63 - v35 + v36);
          if ( v35 < v20 )
          {
            v20 -= v35;
            do
            {
              v38 = *++v37;
              *++v9 = v38;
              --v35;
            }
            while ( v35 );
            goto LABEL_41;
          }
LABEL_42:
          if ( v20 > 2 )
          {
            v46 = (v20 - 3) / 3 + 1;
            do
            {
              v20 -= 3;
              v9[1] = v37[1];
              v47 = v37[2];
              v37 += 3;
              v9[2] = v47;
              v9 += 3;
              *v9 = *v37;
              --v46;
            }
            while ( v46 );
          }
          v12 = v57;
          if ( v20 )
          {
            ++v9;
            v7 = v56;
            *v9 = v37[1];
            if ( v20 > 1 )
              *++v9 = v37[2];
          }
          else
          {
LABEL_53:
            v7 = v56;
          }
          v15 = v62;
          goto LABEL_55;
        }
        v39 = dummy - v35;
        if ( dummy >= v35 )
        {
          v37 = (unsigned __int8 *)(v39 + v36);
          if ( v35 >= v20 )
            goto LABEL_42;
          v20 -= v35;
          do
          {
            v45 = *++v37;
            *++v9 = v45;
            --v35;
          }
          while ( v35 );
        }
        else
        {
          v40 = v35 - dummy;
          v37 = (unsigned __int8 *)((unsigned int)(v39 + v63) + v36);
          if ( v40 >= v20 )
            goto LABEL_42;
          v20 -= v40;
          v41 = v37 - v9;
          do
          {
            v42 = (v9++)[v41 + 1];
            *v9 = v42;
            --v40;
          }
          while ( v40 );
          v37 = (unsigned __int8 *)(v60 - 1);
          if ( dummy >= v20 )
            goto LABEL_42;
          v43 = dummy;
          v20 -= dummy;
          do
          {
            v44 = *++v37;
            *++v9 = v44;
            --v43;
          }
          while ( v43 );
        }
LABEL_41:
        v37 = &v9[-v34];
        goto LABEL_42;
      }
      v48 = &v9[-v34];
      do
      {
        v49 = v48[1];
        v48 += 3;
        v9[1] = v49;
        v20 -= 3;
        v9[2] = *(v48 - 1);
        v9 += 3;
        *v9 = *v48;
      }
      while ( v20 > 2 );
      if ( !v20 )
        goto LABEL_53;
      ++v9;
      v7 = v56;
      v15 = v62;
      *v9 = v48[1];
      if ( v20 > 1 )
        *++v9 = v48[2];
      goto LABEL_55;
    }
    if ( (v19 & 0x40) != 0 )
      break;
    v18 = *(_DWORD *)(v13 + 4i64 * (HIWORD(v18) + (v10 & ((1 << v19) - 1))));
    v10 >>= SBYTE1(v18);
    v11 -= BYTE1(v18);
    v20 = HIWORD(v18);
    v19 = v18;
    if ( !(_BYTE)v18 )
      goto LABEL_9;
  }
  v50 = strm;
  if ( (v19 & 0x20) != 0 )
  {
    state->dummy = 11;
  }
  else
  {
    strm->msg = "invalid literal/length code";
    state->dummy = 29;
  }
LABEL_65:
  v52 = v11 >> 3;
  v53 = &v5[-v52];
  v54 = v11 - 8 * v52;
  v50->next_in = v53 + 1;
  v50->next_out = v9 + 1;
  v50->avail_in = (_DWORD)v58 - (_DWORD)v53 + 5;
  v50->avail_out = (_DWORD)v12 - (_DWORD)v9 + 257;
  state[16].dummy = ((1 << v54) - 1) & v10;
  state[17].dummy = v54;
}

