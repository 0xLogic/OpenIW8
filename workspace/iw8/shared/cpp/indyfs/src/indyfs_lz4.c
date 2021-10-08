/*
==============
indyfs_LZ4_attach_dictionary
==============
*/
void indyfs_LZ4_attach_dictionary(indyfs_LZ4_stream_u *working_stream, const indyfs_LZ4_stream_u *dictionary_stream)
{
  if ( dictionary_stream )
  {
    if ( !working_stream->internal_donotuse.currentOffset )
      working_stream->internal_donotuse.currentOffset = 0x10000;
    working_stream->table[2050] = (unsigned __int64)dictionary_stream;
  }
  else
  {
    working_stream->table[2050] = 0i64;
  }
}

/*
==============
indyfs_LZ4_compress
==============
*/
int indyfs_LZ4_compress(const char *source, char *dest, int inputSize)
{
  int v3; 

  if ( (unsigned int)inputSize <= 0x7E000000 )
    v3 = inputSize / 255 + inputSize + 16;
  else
    v3 = 0;
  return j_indyfs_LZ4_compress_fast(source, dest, inputSize, v3, 1);
}

/*
==============
indyfs_LZ4_compressBound
==============
*/
__int64 indyfs_LZ4_compressBound(int isize)
{
  if ( (unsigned int)isize <= 0x7E000000 )
    return (unsigned int)(isize / 255 + isize + 16);
  else
    return 0i64;
}

/*
==============
indyfs_LZ4_compress_continue
==============
*/
int indyfs_LZ4_compress_continue(indyfs_LZ4_stream_u *indyfs_LZ4_stream, const char *source, char *dest, int inputSize)
{
  int maxOutputSize; 

  if ( (unsigned int)inputSize <= 0x7E000000 )
    maxOutputSize = inputSize / 255 + inputSize + 16;
  else
    maxOutputSize = 0;
  return j_indyfs_LZ4_compress_fast_continue(indyfs_LZ4_stream, source, dest, inputSize, maxOutputSize, 1);
}

/*
==============
indyfs_LZ4_compress_default
==============
*/
int indyfs_LZ4_compress_default(const char *source, char *dest, int inputSize, int maxOutputSize)
{
  return j_indyfs_LZ4_compress_fast(source, dest, inputSize, maxOutputSize, 1);
}

/*
==============
indyfs_LZ4_compress_destSize
==============
*/
int indyfs_LZ4_compress_destSize(const char *src, char *dst, int *srcSizePtr, int targetDstSize)
{
  indyfs_LZ4_stream_u state; 

  return indyfs_LZ4_compress_destSize_extState(&state, src, dst, srcSizePtr, targetDstSize);
}

/*
==============
indyfs_LZ4_compress_destSize_extState
==============
*/
int indyfs_LZ4_compress_destSize_extState(indyfs_LZ4_stream_u *state, const char *src, char *dst, int *srcSizePtr, int targetDstSize)
{
  const char *v6; 
  __int64 v9; 
  int v10; 
  int v11; 
  int result; 
  char *v13; 
  char *v14; 
  char *v15; 
  const char *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  indyfs_LZ4_stream_u *v19; 
  _DWORD *v20; 
  unsigned int v21; 
  _DWORD *v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int16 v26; 
  _DWORD *v27; 
  __int64 v28; 
  const char *v29; 
  unsigned __int64 v30; 
  char *v31; 
  char *v32; 
  __int64 v33; 
  char *v34; 
  __int64 v35; 
  char *v36; 
  int v37; 
  __int64 v38; 
  char *v39; 
  __int64 v40; 
  char *v41; 
  _QWORD *v42; 
  unsigned __int64 v43; 
  _QWORD *v44; 
  _DWORD *v45; 
  unsigned int v46; 
  __int64 v47; 
  char v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  __int64 v55; 
  size_t v56; 
  char *v57; 
  size_t v58; 
  const char *v59; 
  unsigned __int64 v60; 
  unsigned __int64 v61; 
  indyfs_LZ4_stream_u *v62; 
  const char *v63; 
  unsigned __int64 v64; 
  unsigned int v65; 
  unsigned __int64 v66; 
  const char *v67; 
  unsigned int v68; 
  unsigned int v69; 
  __int64 v70; 
  unsigned int v71; 
  unsigned __int64 v72; 
  const char *v73; 
  unsigned __int64 v74; 
  const char *v75; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  char *v78; 
  unsigned int v79; 
  char *v80; 
  __int64 v81; 
  char *v82; 
  int v83; 
  __int64 v84; 
  char *v85; 
  __int64 v86; 
  char *v87; 
  _QWORD *v88; 
  __int16 v89; 
  unsigned __int64 v90; 
  _QWORD *v91; 
  _DWORD *v92; 
  unsigned int v93; 
  __int64 v94; 
  char v95; 
  unsigned int v96; 
  __int64 v97; 
  __int64 v98; 
  unsigned __int64 v99; 
  unsigned __int64 v100; 
  unsigned __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  size_t v104; 
  char *v105; 
  size_t v106; 
  unsigned __int64 v107; 

  v6 = src;
  memset_0(state, 0, sizeof(indyfs_LZ4_stream_u));
  v9 = *srcSizePtr;
  v10 = 0;
  if ( (unsigned int)v9 <= 0x7E000000 )
    v11 = (int)v9 / 255 + v9 + 16;
  else
    v11 = 0;
  if ( targetDstSize >= v11 )
    return j_indyfs_LZ4_compress_fast_extState(state, v6, dst, v9, targetDstSize, 1);
  v13 = dst;
  v14 = (char *)v6;
  v15 = &dst[targetDstSize];
  v107 = (unsigned __int64)v15;
  if ( (int)v9 >= 65547 )
  {
    v59 = &v6[v9];
    v60 = (unsigned __int64)&v6[v9 - 11];
    v61 = (unsigned __int64)&v6[v9 - 5];
    if ( targetDstSize >= 1 && (unsigned int)v9 <= 0x7E000000 )
    {
      v62 = state;
      state->internal_donotuse.dictSize = v9;
      state->internal_donotuse.currentOffset = v9;
      state->internal_donotuse.tableType = 2;
      if ( (int)v9 < 13 )
        goto LABEL_129;
      v63 = v6 + 1;
      state->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v6) >> 52] = 0;
      v64 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v6 + 1);
LABEL_75:
      v65 = 64;
      v66 = v64 >> 52;
      v67 = v63;
      v68 = 1;
      while ( 1 )
      {
        v69 = v62->internal_donotuse.hashTable[v66];
        v70 = v68;
        v71 = (_DWORD)v67 - (_DWORD)v6;
        v72 = v66;
        v73 = v67;
        v68 = v65 >> 6;
        v74 = (unsigned __int64)v67;
        ++v65;
        v67 += v70;
        if ( (unsigned __int64)v67 > v60 )
        {
          v15 = (char *)v107;
          goto LABEL_128;
        }
        v75 = &src[v69];
        v66 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v67) >> 52;
        state->internal_donotuse.hashTable[v72] = v71;
        if ( v69 + 0xFFFF >= v71 && *(_DWORD *)v75 == *(_DWORD *)v74 )
          break;
        LODWORD(v6) = (_DWORD)src;
        v60 = (unsigned __int64)(v59 - 11);
        v62 = state;
      }
      if ( v73 > v14 && v75 > src )
      {
        do
        {
          v76 = (unsigned __int64)(v75 - 1);
          v77 = v74 - 1;
          if ( *(_BYTE *)(v74 - 1) != *(v75 - 1) )
            break;
          --v74;
          --v75;
        }
        while ( v76 > (unsigned __int64)src && v77 > (unsigned __int64)v14 );
      }
      v15 = (char *)v107;
      v78 = v13 + 1;
      v79 = v74 - (_DWORD)v14;
      v80 = v13;
      v81 = (unsigned int)(v74 - (_DWORD)v14);
      if ( (unsigned __int64)&v13[v79 + 12 + (unsigned __int64)((v79 + 240) / 0xFF)] <= v107 )
      {
        v82 = v13 + 1;
        if ( v79 < 0xF )
        {
          *v13 = 16 * v79;
        }
        else
        {
          v83 = v79 - 15;
          *v13 = -16;
          if ( v83 >= 255 )
          {
            v84 = v83 / 0xFFu;
            v83 %= 0xFFu;
            do
            {
              *v78++ = -1;
              v82 = v78;
              --v84;
            }
            while ( v84 );
          }
          *v78 = v83;
          v78 = ++v82;
        }
        v85 = &v82[v81];
        v86 = v14 - v78;
        v87 = &v78[v81];
        do
        {
          *(_QWORD *)v78 = *(_QWORD *)&v78[v86];
          v78 += 8;
        }
        while ( v78 < v87 );
        LODWORD(v6) = (_DWORD)src;
        while ( 1 )
        {
          if ( (unsigned __int64)(v85 + 11) > v107 )
          {
            v13 = v80;
            goto LABEL_129;
          }
          v88 = v75 + 4;
          v89 = v74 - (_WORD)v75;
          v90 = v61 - 7;
          v91 = (_QWORD *)(v74 + 4);
          *(_WORD *)v85 = v89;
          v13 = v85 + 2;
          v92 = (_DWORD *)(v74 + 4);
          if ( v74 + 4 < v61 - 7 )
          {
            if ( *v88 != *v91 )
            {
              _BitScanForward64(&v99, *v88 ^ *v91);
              v93 = (unsigned int)v99 >> 3;
              goto LABEL_110;
            }
            v92 = (_DWORD *)(v74 + 12);
            ++v88;
          }
          if ( (unsigned __int64)v92 >= v90 )
          {
LABEL_100:
            if ( (unsigned __int64)v92 < v61 - 3 && *(_DWORD *)v88 == *v92 )
            {
              ++v92;
              v88 = (_QWORD *)((char *)v88 + 4);
            }
            if ( (unsigned __int64)v92 < v61 - 1 && *(_WORD *)v88 == *(_WORD *)v92 )
            {
              v92 = (_DWORD *)((char *)v92 + 2);
              v88 = (_QWORD *)((char *)v88 + 2);
            }
            if ( (unsigned __int64)v92 < v61 && *(_BYTE *)v88 == *(_BYTE *)v92 )
              LODWORD(v92) = (_DWORD)v92 + 1;
            v93 = (_DWORD)v92 - (_DWORD)v91;
          }
          else
          {
            while ( *v88 == *(_QWORD *)v92 )
            {
              v92 += 2;
              ++v88;
              if ( (unsigned __int64)v92 >= v90 )
                goto LABEL_100;
            }
            _BitScanForward64(&v100, *v88 ^ *(_QWORD *)v92);
            v93 = (_DWORD)v92 - (_DWORD)v91 + ((unsigned int)v100 >> 3);
          }
LABEL_110:
          v74 += v93 + 4;
          if ( (unsigned __int64)&v13[((unsigned __int64)v93 >> 8) + 6] > v107 )
          {
            v94 = v93 - (255 * ((_DWORD)v107 - (_DWORD)v13) - 2026);
            v93 = 255 * (v107 - (_DWORD)v13) - 2026;
            v74 -= v94;
          }
          v95 = *v80;
          if ( v93 < 0xF )
          {
            *v80 = v93 + v95;
          }
          else
          {
            v96 = v93 - 15;
            *v80 = v95 + 15;
            *(_DWORD *)v13 = -1;
            if ( v96 >= 0x3FC )
            {
              v97 = v96 / 0x3FC;
              do
              {
                v13 += 4;
                v96 -= 1020;
                *(_DWORD *)v13 = -1;
                --v97;
              }
              while ( v97 );
            }
            v98 = v96 / 0xFF;
            v13[v98] = v98 + v96;
            v13 += v98 + 1;
          }
          v14 = (char *)v74;
          if ( v74 >= (unsigned __int64)(v59 - 11) )
            goto LABEL_129;
          v62 = state;
          state->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v74 - 2)) >> 52] = v74 - 2 - (_DWORD)src;
          v101 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v74) >> 52;
          v102 = state->internal_donotuse.hashTable[v101];
          state->internal_donotuse.hashTable[v101] = v74 - (_DWORD)src;
          v75 = &src[v102];
          if ( (int)v102 + 0xFFFF < (unsigned int)(v74 - (_DWORD)src) || *(_DWORD *)v75 != *(_DWORD *)v74 )
          {
            v103 = *(_QWORD *)(v74 + 1);
            v60 = (unsigned __int64)(v59 - 11);
            v63 = (const char *)(v74 + 1);
            v64 = 0xCF1BBCDCBB000000ui64 * v103;
            goto LABEL_75;
          }
          v80 = v13;
          v85 = v13 + 1;
          *v80 = 0;
        }
      }
LABEL_128:
      LODWORD(v6) = (_DWORD)src;
LABEL_129:
      v104 = v59 - v14;
      if ( &v13[v104 + 1 + (v104 + 240) / 0xFF] > v15 )
        v104 = v15 - v13 - 1 - (v15 - v13 - 1 + 240) / 0xFFui64;
      v105 = v13 + 1;
      if ( v104 < 0xF )
      {
        *v13 = 16 * v104;
      }
      else
      {
        v106 = v104 - 15;
        *v13 = -16;
        if ( v104 - 15 >= 0xFF )
        {
          v105 += v106 / 0xFF;
          memset(v13 + 1, 255, v106 / 0xFF);
          v106 %= 0xFFui64;
        }
        *v105 = v106;
        v13 = v105;
        LODWORD(v105) = (_DWORD)v105 + 1;
      }
      memcpy_0(v13 + 1, v14, v104);
      *srcSizePtr = (_DWORD)v14 + v104 - (_DWORD)v6;
      return (_DWORD)v105 + v104 - (_DWORD)dst;
    }
    return v10;
  }
  v16 = &v6[v9];
  v17 = (unsigned __int64)&v6[v9 - 11];
  v18 = (unsigned __int64)&v6[v9 - 5];
  if ( targetDstSize < 1 || (unsigned int)v9 > 0x7E000000 )
    return 0;
  v19 = state;
  state->internal_donotuse.dictSize = v9;
  state->internal_donotuse.currentOffset = v9;
  state->internal_donotuse.tableType = 3;
  if ( (int)v9 >= 13 )
  {
    v20 = v6 + 1;
    *((_WORD *)state->table + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v6) >> 19)) = 0;
LABEL_12:
    v21 = 1;
    v22 = v20;
    v23 = 64;
    v24 = (unsigned int)(-1640531535 * *v20) >> 19;
    while ( 1 )
    {
      v25 = v21;
      v26 = (_WORD)v22 - (_WORD)v6;
      v21 = v23 >> 6;
      v27 = v22;
      v28 = 2 * v24;
      v22 = (_DWORD *)((char *)v22 + v25);
      ++v23;
      if ( (unsigned __int64)v22 > v17 )
        goto LABEL_61;
      v29 = &src[*(unsigned __int16 *)((char *)v19->table + v28)];
      v24 = (unsigned int)(-1640531535 * *v22) >> 19;
      *(_WORD *)((char *)state->table + v28) = v26;
      if ( *(_DWORD *)v29 == *v27 )
        break;
      LOWORD(v6) = (_WORD)src;
      v19 = state;
    }
    if ( v27 > (_DWORD *)v14 && v29 > src )
    {
      do
      {
        v30 = (unsigned __int64)(v29 - 1);
        v31 = (char *)v27 - 1;
        if ( *((_BYTE *)v27 - 1) != *(v29 - 1) )
          break;
        v27 = (_DWORD *)((char *)v27 - 1);
        --v29;
      }
      while ( v31 > v14 && v30 > (unsigned __int64)src );
    }
    v32 = v13 + 1;
    v33 = (unsigned int)((_DWORD)v27 - (_DWORD)v14);
    v34 = v13;
    v35 = (unsigned int)v33;
    if ( (unsigned __int64)&v13[((int)v33 + 240) / 0xFFu + 12 + v33] <= v107 )
    {
      v36 = v13 + 1;
      if ( (unsigned int)v33 < 0xF )
      {
        *v13 = 16 * ((_BYTE)v27 - (_BYTE)v14);
      }
      else
      {
        v37 = v33 - 15;
        *v13 = -16;
        if ( v37 >= 255 )
        {
          v38 = v37 / 0xFFu;
          v37 %= 0xFFu;
          do
          {
            *v32++ = -1;
            v36 = v32;
            --v38;
          }
          while ( v38 );
        }
        *v32 = v37;
        v32 = ++v36;
      }
      v39 = &v36[v35];
      v40 = v14 - v32;
      v41 = &v32[v35];
      do
      {
        *(_QWORD *)v32 = *(_QWORD *)&v32[v40];
        v32 += 8;
      }
      while ( v32 < v41 );
      LODWORD(v6) = (_DWORD)src;
      while ( 1 )
      {
        if ( (unsigned __int64)(v39 + 11) > v107 )
        {
          v13 = v34;
          goto LABEL_62;
        }
        v42 = v29 + 4;
        v43 = v18 - 7;
        *(_WORD *)v39 = (_WORD)v27 - (_WORD)v29;
        v44 = v27 + 1;
        v13 = v39 + 2;
        v45 = v27 + 1;
        if ( (unsigned __int64)(v27 + 1) < v18 - 7 )
        {
          if ( *v44 != *v42 )
          {
            _BitScanForward64(&v52, *v44 ^ *v42);
            v46 = (unsigned int)v52 >> 3;
            goto LABEL_46;
          }
          v45 = v27 + 3;
          ++v42;
        }
        if ( (unsigned __int64)v45 >= v43 )
        {
LABEL_36:
          if ( (unsigned __int64)v45 < v18 - 3 && *(_DWORD *)v42 == *v45 )
          {
            ++v45;
            v42 = (_QWORD *)((char *)v42 + 4);
          }
          if ( (unsigned __int64)v45 < v18 - 1 && *(_WORD *)v42 == *(_WORD *)v45 )
          {
            v45 = (_DWORD *)((char *)v45 + 2);
            v42 = (_QWORD *)((char *)v42 + 2);
          }
          if ( (unsigned __int64)v45 < v18 && *(_BYTE *)v42 == *(_BYTE *)v45 )
            LODWORD(v45) = (_DWORD)v45 + 1;
          v46 = (_DWORD)v45 - (_DWORD)v44;
        }
        else
        {
          while ( *(_QWORD *)v45 == *v42 )
          {
            v45 += 2;
            ++v42;
            if ( (unsigned __int64)v45 >= v43 )
              goto LABEL_36;
          }
          _BitScanForward64(&v53, *(_QWORD *)v45 ^ *v42);
          v46 = (_DWORD)v45 + ((unsigned int)v53 >> 3) - (_DWORD)v44;
        }
LABEL_46:
        v27 = (_DWORD *)((char *)v27 + v46 + 4);
        if ( (unsigned __int64)&v13[((unsigned __int64)v46 >> 8) + 6] > v107 )
        {
          v47 = v46 - (255 * ((_DWORD)v107 - (_DWORD)v13) - 2026);
          v46 = 255 * (v107 - (_DWORD)v13) - 2026;
          v27 = (_DWORD *)((char *)v27 - v47);
        }
        v48 = *v34;
        if ( v46 < 0xF )
        {
          *v34 = v48 + v46;
        }
        else
        {
          v49 = v46 - 15;
          *v34 = v48 + 15;
          *(_DWORD *)v13 = -1;
          if ( v49 >= 0x3FC )
          {
            v50 = v49 / 0x3FC;
            do
            {
              v13 += 4;
              v49 -= 1020;
              *(_DWORD *)v13 = -1;
              --v50;
            }
            while ( v50 );
          }
          v51 = v49 / 0xFF;
          v13[v51] = v51 + v49;
          v13 += v51 + 1;
        }
        v14 = (char *)v27;
        if ( (unsigned __int64)v27 >= v17 )
          goto LABEL_62;
        *((_WORD *)state->table + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)((char *)v27 - 2)) >> 19)) = (_WORD)v27 - 2 - (_WORD)src;
        v54 = (unsigned __int64)(unsigned int)(-1640531535 * *v27) >> 19;
        v55 = *((unsigned __int16 *)state->table + v54);
        *((_WORD *)state->table + v54) = (_WORD)v27 - (_WORD)src;
        v29 = &src[v55];
        if ( *(_DWORD *)v29 != *v27 )
        {
          v19 = state;
          v20 = (_DWORD *)((char *)v27 + 1);
          goto LABEL_12;
        }
        v34 = v13;
        v39 = v13 + 1;
        *v34 = 0;
      }
    }
LABEL_61:
    LODWORD(v6) = (_DWORD)src;
LABEL_62:
    v15 = (char *)v107;
  }
  v56 = v16 - v14;
  if ( &v13[(v56 + 240) / 0xFF + 1 + v56] > v15 )
    v56 = v15 - v13 - 1 - (v15 - v13 - 1 + 240) / 0xFFui64;
  v57 = v13 + 1;
  if ( v56 < 0xF )
  {
    *v13 = 16 * v56;
  }
  else
  {
    v58 = v56 - 15;
    *v13 = -16;
    if ( v56 - 15 >= 0xFF )
    {
      v57 += v58 / 0xFF;
      memset(v13 + 1, 255, v58 / 0xFF);
      v58 %= 0xFFui64;
    }
    *v57 = v58;
    v13 = v57;
    LODWORD(v57) = (_DWORD)v57 + 1;
  }
  memcpy_0(v13 + 1, v14, v56);
  result = v56 + (_DWORD)v57 - (_DWORD)dst;
  *srcSizePtr = v56 + (_DWORD)v14 - (_DWORD)v6;
  return result;
}

/*
==============
indyfs_LZ4_compress_fast
==============
*/
int indyfs_LZ4_compress_fast(const char *source, char *dest, int inputSize, int maxOutputSize, int acceleration)
{
  char state[16416]; 

  return j_indyfs_LZ4_compress_fast_extState(state, source, dest, inputSize, maxOutputSize, acceleration);
}

/*
==============
indyfs_LZ4_compress_fast_continue
==============
*/
__int64 indyfs_LZ4_compress_fast_continue(indyfs_LZ4_stream_u *indyfs_LZ4_stream, const char *source, char *dest, int inputSize, int maxOutputSize, int acceleration)
{
  char *v6; 
  unsigned __int64 v7; 
  const char *v8; 
  indyfs_LZ4_stream_u *v9; 
  __int64 v10; 
  __int64 result; 
  unsigned __int64 v12; 
  const char *v13; 
  int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  char *v20; 
  const char *v21; 
  const char *v22; 
  int v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  const char *v26; 
  unsigned int v27; 
  unsigned int v28; 
  indyfs_LZ4_stream_u *v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  int v33; 
  const char *v34; 
  unsigned int v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  bool v39; 
  char *v40; 
  unsigned int v41; 
  _QWORD *v42; 
  __int64 v43; 
  unsigned int v44; 
  _WORD *v45; 
  signed __int64 v46; 
  _WORD *v47; 
  unsigned __int64 v48; 
  _QWORD *v49; 
  _DWORD *v50; 
  _DWORD *v51; 
  unsigned int v52; 
  unsigned int v53; 
  char v54; 
  unsigned int v55; 
  __int64 v56; 
  __int64 v57; 
  char *v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  size_t v63; 
  char *v64; 
  size_t v65; 
  char *v66; 
  __int64 v67; 
  unsigned __int64 v68; 
  const char *v69; 
  char *v70; 
  const char *v71; 
  int v72; 
  unsigned __int64 v73; 
  unsigned __int64 v74; 
  const char *v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned __int64 v78; 
  const char *v79; 
  const char *v80; 
  unsigned int v81; 
  __int64 v82; 
  __int64 v83; 
  const char *v84; 
  const char *v85; 
  const char *v86; 
  bool v87; 
  __int64 v88; 
  char *v89; 
  _QWORD *v90; 
  unsigned int v91; 
  void *v92; 
  _WORD *v93; 
  signed __int64 v94; 
  unsigned __int64 v95; 
  _WORD *v96; 
  _QWORD *v97; 
  _QWORD *v98; 
  const char *v99; 
  unsigned int v100; 
  char v101; 
  unsigned int v102; 
  __int64 v103; 
  __int64 v104; 
  char *v105; 
  unsigned __int64 v106; 
  unsigned __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  size_t v110; 
  char *v111; 
  size_t v112; 
  char *v113; 
  unsigned __int64 v114; 
  unsigned __int64 v115; 
  __int64 v116; 
  const char *v117; 
  __int64 dictSize; 
  int v119; 
  unsigned __int64 v120; 
  const char *v121; 
  int v122; 
  unsigned __int64 v123; 
  unsigned __int64 v124; 
  const char *v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned __int64 v128; 
  const char *v129; 
  unsigned int v130; 
  unsigned __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  unsigned __int64 v134; 
  const char *v135; 
  const char *v136; 
  __int16 v137; 
  unsigned int v138; 
  unsigned __int64 v139; 
  bool v140; 
  __int64 v141; 
  char *v142; 
  _QWORD *v143; 
  unsigned int v144; 
  _WORD *v145; 
  signed __int64 v146; 
  _WORD *v147; 
  _DWORD *v148; 
  const char *v149; 
  unsigned __int64 v150; 
  const char *v151; 
  const char *v152; 
  const char *v153; 
  unsigned int v154; 
  unsigned __int64 v155; 
  const char *v156; 
  const char *v157; 
  unsigned int v158; 
  unsigned __int64 v159; 
  unsigned __int64 v160; 
  unsigned __int64 v161; 
  unsigned __int64 v162; 
  unsigned int v163; 
  unsigned __int64 v164; 
  const char *v165; 
  char v166; 
  unsigned int v167; 
  __int64 v168; 
  __int64 v169; 
  char *v170; 
  unsigned __int64 v171; 
  unsigned __int64 v172; 
  const char *v173; 
  unsigned int v174; 
  unsigned __int64 v175; 
  __int64 v176; 
  __int64 v177; 
  size_t v178; 
  char *v179; 
  size_t v180; 
  char *v181; 
  __int64 v182; 
  __int64 currentOffset; 
  const char *v184; 
  unsigned __int64 v185; 
  int v186; 
  __int64 v187; 
  const char *v188; 
  unsigned int v189; 
  unsigned int v190; 
  const char *v191; 
  unsigned __int64 v192; 
  unsigned int v193; 
  const char *v194; 
  const char *v195; 
  unsigned __int64 v196; 
  __int64 v197; 
  const char *v198; 
  __int16 v199; 
  const char *v200; 
  bool v201; 
  unsigned int v202; 
  char *v203; 
  _QWORD *v204; 
  __int64 v205; 
  unsigned int v206; 
  _WORD *v207; 
  signed __int64 v208; 
  _WORD *v209; 
  _QWORD *v210; 
  const char *v211; 
  const char *v212; 
  const char *v213; 
  const char *v214; 
  unsigned int v215; 
  unsigned __int64 v216; 
  const char *v217; 
  const char *v218; 
  unsigned __int64 v219; 
  unsigned int v220; 
  const char *v221; 
  char v222; 
  unsigned int v223; 
  __int64 v224; 
  __int64 v225; 
  char *v226; 
  unsigned __int64 v227; 
  unsigned __int64 v228; 
  unsigned __int64 v229; 
  unsigned __int64 v230; 
  const char *v231; 
  unsigned __int64 v232; 
  unsigned __int64 v233; 
  unsigned __int64 v234; 
  unsigned int v235; 
  unsigned __int64 v236; 
  __int64 v237; 
  size_t v238; 
  char *v239; 
  size_t v240; 
  char *v241; 
  __int64 v242; 
  const char *v243; 
  unsigned __int64 v244; 
  int v245; 
  const char *v246; 
  indyfs_LZ4_stream_u *v247; 
  const char *v248; 
  int v249; 
  unsigned __int64 v250; 
  unsigned __int64 v251; 
  const char *v252; 
  unsigned int v253; 
  unsigned int v254; 
  __int64 v255; 
  __int64 v256; 
  unsigned int v257; 
  unsigned __int64 v258; 
  const char *v259; 
  const char *v260; 
  signed __int64 v261; 
  unsigned __int64 v262; 
  _DWORD *v263; 
  __int16 v264; 
  const char *v265; 
  bool v266; 
  unsigned int v267; 
  char *v268; 
  _QWORD *v269; 
  __int64 v270; 
  unsigned int v271; 
  _WORD *v272; 
  signed __int64 v273; 
  _WORD *v274; 
  _QWORD *v275; 
  const char *v276; 
  unsigned __int64 v277; 
  const char *v278; 
  const char *v279; 
  const char *v280; 
  unsigned int v281; 
  unsigned __int64 v282; 
  const char *v283; 
  const char *v284; 
  unsigned int v285; 
  unsigned __int64 v286; 
  unsigned __int64 v287; 
  unsigned __int64 v288; 
  unsigned __int64 v289; 
  unsigned int v290; 
  unsigned __int64 v291; 
  const char *v292; 
  char v293; 
  unsigned int v294; 
  __int64 v295; 
  char *v296; 
  unsigned __int64 v297; 
  unsigned __int64 v298; 
  signed __int64 v299; 
  unsigned int v300; 
  unsigned __int64 v301; 
  __int64 v302; 
  __int64 v303; 
  size_t v304; 
  char *v305; 
  size_t v306; 
  char *v307; 
  const unsigned __int8 *srcBase; 
  const char *v309; 
  unsigned __int64 v310; 
  const char *v311; 
  int v312; 
  unsigned __int64 v313; 
  unsigned __int64 v314; 
  const char *v315; 
  unsigned int v316; 
  unsigned int v317; 
  unsigned int v318; 
  const char *v319; 
  const char *v320; 
  unsigned __int64 v321; 
  __int64 v322; 
  __int64 v323; 
  const unsigned __int8 *v324; 
  const char *v325; 
  __int16 v326; 
  const char *v327; 
  bool v328; 
  _QWORD *v329; 
  char *v330; 
  unsigned int v331; 
  __int64 v332; 
  unsigned int v333; 
  _WORD *v334; 
  signed __int64 v335; 
  _QWORD *v336; 
  const char *v337; 
  unsigned __int64 v338; 
  const char *v339; 
  const char *v340; 
  const char *v341; 
  unsigned int v342; 
  unsigned __int64 v343; 
  const char *v344; 
  const char *v345; 
  unsigned int v346; 
  unsigned __int64 v347; 
  unsigned __int64 v348; 
  unsigned __int64 v349; 
  unsigned __int64 v350; 
  unsigned int v351; 
  unsigned __int64 v352; 
  const char *v353; 
  char v354; 
  unsigned int v355; 
  __int64 v356; 
  char *v357; 
  unsigned __int64 v358; 
  unsigned __int64 v359; 
  const unsigned __int8 *v360; 
  unsigned int v361; 
  unsigned __int64 v362; 
  __int64 v363; 
  __int64 v364; 
  size_t v365; 
  size_t v366; 
  char *v367; 
  void *v368; 
  int v369; 
  int v370; 
  int v371; 
  int v372; 
  unsigned int v373; 
  int v374; 
  int v375; 
  const char *v376; 
  int v377; 
  int v378; 
  int v379; 
  unsigned __int64 v380; 
  const char *v381; 
  char *v382; 
  unsigned int v383; 
  unsigned __int64 v384; 
  unsigned __int64 v385; 
  const char *v386; 
  char *v387; 
  const unsigned __int8 *v388; 
  const char *v389; 
  unsigned int v390; 
  unsigned int v391; 
  unsigned __int64 v392; 
  unsigned __int64 v393; 
  char *v394; 
  char *v395; 
  const char *v396; 
  signed __int64 v397; 
  unsigned __int64 v398; 
  unsigned __int64 v399; 
  unsigned __int64 v400; 
  __int64 v401; 
  unsigned __int64 v402; 
  unsigned __int64 v403; 
  unsigned __int64 v404; 
  unsigned int v405; 
  unsigned __int64 v406; 
  int v407; 
  unsigned int v408; 
  __int64 v409; 
  __int64 v410; 
  __int64 v411; 
  const char *v413; 

  v413 = source;
  v6 = dest;
  v7 = indyfs_LZ4_stream->table[2049] + indyfs_LZ4_stream->internal_donotuse.dictSize;
  v8 = source;
  v9 = indyfs_LZ4_stream;
  v10 = inputSize;
  if ( indyfs_LZ4_stream->internal_donotuse.initCheck )
    return 0i64;
  indyfs_LZ4_renormDictT((indyfs_LZ4_stream_t_internal *)indyfs_LZ4_stream, inputSize);
  v12 = v9->table[2049];
  v13 = &v8[v10];
  v14 = 1;
  v376 = &v8[v10];
  v389 = (const char *)v12;
  if ( acceleration >= 1 )
    v14 = acceleration;
  v15 = 0;
  v369 = v14;
  if ( (unsigned __int64)v13 > v12 )
  {
    v389 = (const char *)v9->table[2049];
    if ( (unsigned __int64)v13 < v7 )
    {
      v16 = (unsigned int)(v7 - (_DWORD)v13);
      v9->internal_donotuse.dictSize = v16;
      if ( (unsigned int)v16 > 0x10000 )
      {
        v9->internal_donotuse.dictSize = 0x10000;
        v16 = 0x10000i64;
      }
      if ( (unsigned int)v16 < 4 )
      {
        v9->internal_donotuse.dictSize = 0;
        v16 = 0i64;
      }
      v12 = v7 - v16;
      v389 = (const char *)(v7 - v16);
      v9->table[2049] = v7 - v16;
    }
  }
  if ( (const char *)v7 != v8 )
  {
    v114 = v9->table[2050];
    v385 = v114;
    if ( v114 )
    {
      if ( (int)v10 <= 4096 )
      {
        v182 = *(unsigned int *)(v114 + 0x4000);
        currentOffset = v9->internal_donotuse.currentOffset;
        v184 = v8;
        v185 = *(_QWORD *)(v114 + 16392);
        v391 = currentOffset;
        v407 = v9->internal_donotuse.currentOffset - v182;
        v186 = (_DWORD)v8 - currentOffset;
        v187 = *(unsigned int *)(v114 + 16408);
        v396 = &v8[-currentOffset];
        v392 = v185;
        v409 = v187 + v185;
        v402 = v185 + v187 - v182;
        v382 = &dest[maxOutputSize];
        if ( (unsigned int)v10 <= 0x7E000000 )
        {
          v9->table[2050] = 0i64;
          v9->internal_donotuse.currentOffset = currentOffset + v10;
          v9->internal_donotuse.tableType = 2;
          v9->internal_donotuse.dictSize = v10;
          if ( (int)v10 >= 13 )
          {
            v188 = v8 + 1;
            v189 = v14 << 6;
            v373 = v189;
            v9->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v8) >> 52] = currentOffset;
LABEL_251:
            v190 = 1;
            v191 = v188;
            v192 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v188) >> 52;
            while ( 1 )
            {
              v193 = (_DWORD)v191 - v186;
              v194 = v191;
              v195 = v191;
              v196 = v192;
              v197 = indyfs_LZ4_stream->internal_donotuse.hashTable[v192];
              v191 += v190;
              v190 = v189++ >> 6;
              if ( v191 > v376 - 11 )
                break;
              if ( (unsigned int)v197 >= v391 )
              {
                v185 = (unsigned __int64)v413;
                v198 = &v396[v197];
              }
              else
              {
                v198 = (const char *)(v402 + *(unsigned int *)(v385 + 4 * v192));
                LODWORD(v197) = v407 + *(_DWORD *)(v385 + 4 * v192);
              }
              v192 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v191) >> 52;
              indyfs_LZ4_stream->internal_donotuse.hashTable[v196] = v193;
              if ( (int)v197 + 0xFFFF >= v193 && *(_DWORD *)v198 == *(_DWORD *)v195 )
              {
                v199 = v193 - v197;
                v138 = 0;
                if ( (unsigned __int64)v198 > v185 && v194 > v184 )
                {
                  do
                  {
                    v200 = v195 - 1;
                    if ( *(v195 - 1) != *(v198 - 1) )
                      break;
                    --v195;
                    v201 = (unsigned __int64)--v198 > v185;
                  }
                  while ( v201 && v200 > v184 );
                }
                v202 = (_DWORD)v195 - (_DWORD)v184;
                v203 = v6;
                v204 = v6 + 1;
                v205 = (unsigned int)((_DWORD)v195 - (_DWORD)v184);
                if ( (char *)v204 + v205 + ((int)v195 - (int)v184) / 0xFFu + 8 > v382 )
                  goto LABEL_573;
                if ( v202 < 0xF )
                {
                  *v203 = 16 * v202;
                }
                else
                {
                  v206 = v202 - 15;
                  *v203 = -16;
                  if ( (int)(v202 - 15) >= 255 )
                  {
                    memset(v204, 255, v206 / 0xFF);
                    v204 = (_QWORD *)((char *)v204 + v206 / 0xFF);
                    LOBYTE(v206) = v206 / 0xFF + v206;
                  }
                  *(_BYTE *)v204 = v206;
                  v204 = (_QWORD *)((char *)v204 + 1);
                }
                v207 = (_WORD *)((char *)v204 + v205);
                v208 = v184 - (const char *)v204;
                do
                {
                  *v204 = *(_QWORD *)((char *)v204 + v208);
                  ++v204;
                }
                while ( v204 < (_QWORD *)v207 );
                v209 = v207;
LABEL_271:
                *v209 = v199;
                v210 = v198 + 4;
                v6 = (char *)(v209 + 1);
                v211 = v195 + 4;
                if ( v185 == v392 )
                {
                  v212 = v376 - 5;
                  if ( &v195[v409 - (_QWORD)v198] <= v376 - 5 )
                    v212 = &v195[v409 - (_QWORD)v198];
                  v213 = v195 + 4;
                  v214 = v212 - 7;
                  if ( v211 >= v212 - 7 )
                    goto LABEL_277;
                  if ( *v210 != *(_QWORD *)v211 )
                  {
                    _BitScanForward64(&v227, *v210 ^ *(_QWORD *)v211);
                    v215 = (unsigned int)v227 >> 3;
                  }
                  else
                  {
                    v213 = v195 + 12;
                    v210 = v198 + 12;
LABEL_277:
                    if ( v213 >= v214 )
                    {
LABEL_280:
                      if ( v213 < v212 - 3 && *(_DWORD *)v210 == *(_DWORD *)v213 )
                      {
                        v213 += 4;
                        v210 = (_QWORD *)((char *)v210 + 4);
                      }
                      if ( v213 < v212 - 1 && *(_WORD *)v210 == *(_WORD *)v213 )
                      {
                        v213 += 2;
                        v210 = (_QWORD *)((char *)v210 + 2);
                      }
                      if ( v213 < v212 && *(_BYTE *)v210 == *v213 )
                        LODWORD(v213) = (_DWORD)v213 + 1;
                      v215 = (_DWORD)v213 - (_DWORD)v211;
                    }
                    else
                    {
                      while ( *v210 == *(_QWORD *)v213 )
                      {
                        v213 += 8;
                        ++v210;
                        if ( v213 >= v214 )
                          goto LABEL_280;
                      }
                      _BitScanForward64(&v228, *v210 ^ *(_QWORD *)v213);
                      v215 = (_DWORD)v213 + ((unsigned int)v228 >> 3) - (_DWORD)v211;
                    }
                  }
                  v195 += v215 + 4;
                  if ( v195 == v212 )
                  {
                    v216 = (unsigned __int64)(v376 - 12);
                    v217 = v413;
                    v218 = v212;
                    if ( v212 >= v376 - 12 )
                    {
LABEL_294:
                      if ( (unsigned __int64)v218 >= v216 )
                      {
LABEL_297:
                        if ( v218 < v376 - 8 && *(_DWORD *)v217 == *(_DWORD *)v218 )
                        {
                          v218 += 4;
                          v217 += 4;
                        }
                        if ( v218 < v376 - 6 && *(_WORD *)v217 == *(_WORD *)v218 )
                        {
                          v218 += 2;
                          v217 += 2;
                        }
                        if ( v218 < v376 - 5 && *v217 == *v218 )
                          LODWORD(v218) = (_DWORD)v218 + 1;
                        v220 = (_DWORD)v218 - (_DWORD)v212;
                      }
                      else
                      {
                        while ( *(_QWORD *)v218 == *(_QWORD *)v217 )
                        {
                          v218 += 8;
                          v217 += 8;
                          if ( (unsigned __int64)v218 >= v216 )
                            goto LABEL_297;
                        }
                        _BitScanForward64(&v230, *(_QWORD *)v218 ^ *(_QWORD *)v217);
                        v220 = ((unsigned int)v230 >> 3) + (_DWORD)v218 - (_DWORD)v212;
                      }
                    }
                    else
                    {
                      v219 = *(_QWORD *)v212 ^ *(_QWORD *)v413;
                      if ( !v219 )
                      {
                        v218 = v212 + 8;
                        v217 = v413 + 8;
                        goto LABEL_294;
                      }
                      _BitScanForward64(&v229, v219);
                      v220 = (unsigned int)v229 >> 3;
                    }
                    v215 += v220;
                    v195 += v220;
                  }
                  v221 = v376;
LABEL_309:
                  if ( &v6[((unsigned __int64)v215 >> 8) + 6] > v382 )
                    goto LABEL_467;
                  v222 = *v203;
                  if ( v215 < 0xF )
                  {
                    *v203 = v222 + v215;
                  }
                  else
                  {
                    v223 = v215 - 15;
                    *v203 = v222 + 15;
                    *(_DWORD *)v6 = -1;
                    if ( v223 >= 0x3FC )
                    {
                      v224 = v223 / 0x3FC;
                      do
                      {
                        v6 += 4;
                        v223 -= 1020;
                        *(_DWORD *)v6 = -1;
                        --v224;
                      }
                      while ( v224 );
                    }
                    v225 = v223 / 0xFF;
                    v226 = &v6[v225];
                    *v226 = v223 + v225;
                    v6 = v226 + 1;
                  }
                  v184 = v195;
                  if ( v195 >= v221 - 11 )
                    break;
                  v186 = (int)v396;
                  v235 = (_DWORD)v195 - (_DWORD)v396;
                  indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v195 - 2)) >> 52] = (_DWORD)v195 - 2 - (_DWORD)v396;
                  v236 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v195) >> 52;
                  v237 = indyfs_LZ4_stream->internal_donotuse.hashTable[v236];
                  if ( (unsigned int)v237 >= v391 )
                  {
                    v185 = (unsigned __int64)v413;
                    v198 = &v396[v237];
                  }
                  else
                  {
                    v185 = v392;
                    v198 = (const char *)(v402 + *(unsigned int *)(v385 + 4 * v236));
                    LODWORD(v237) = v407 + *(_DWORD *)(v385 + 4 * v236);
                  }
                  indyfs_LZ4_stream->internal_donotuse.hashTable[v236] = v235;
                  if ( (int)v237 + 0xFFFF < v235 || *(_DWORD *)v198 != *(_DWORD *)v195 )
                  {
                    v189 = v373;
                    v188 = v195 + 1;
                    v185 = v392;
                    goto LABEL_251;
                  }
                  v203 = v6;
                  v209 = v6 + 1;
                  v199 = v235 - v237;
                  *v203 = 0;
                  goto LABEL_271;
                }
                v221 = v376;
                v231 = v195 + 4;
                v232 = (unsigned __int64)(v376 - 12);
                if ( v211 < v376 - 12 )
                {
                  if ( *(_QWORD *)v211 != *v210 )
                  {
                    _BitScanForward64(&v233, *(_QWORD *)v211 ^ *v210);
                    v215 = (unsigned int)v233 >> 3;
                    v195 += v215 + 4;
                    goto LABEL_309;
                  }
                  v231 = v195 + 12;
                  ++v210;
                }
                if ( (unsigned __int64)v231 >= v232 )
                {
LABEL_325:
                  if ( v231 < v376 - 8 && *(_DWORD *)v210 == *(_DWORD *)v231 )
                  {
                    v231 += 4;
                    v210 = (_QWORD *)((char *)v210 + 4);
                  }
                  if ( v231 < v376 - 6 && *(_WORD *)v210 == *(_WORD *)v231 )
                  {
                    v231 += 2;
                    v210 = (_QWORD *)((char *)v210 + 2);
                  }
                  if ( v231 < v376 - 5 && *(_BYTE *)v210 == *v231 )
                    LODWORD(v231) = (_DWORD)v231 + 1;
                  v215 = (_DWORD)v231 - (_DWORD)v211;
                  v195 += (unsigned int)((_DWORD)v231 - (_DWORD)v195);
                }
                else
                {
                  while ( *(_QWORD *)v231 == *v210 )
                  {
                    v231 += 8;
                    ++v210;
                    if ( (unsigned __int64)v231 >= v232 )
                      goto LABEL_325;
                  }
                  _BitScanForward64(&v234, *(_QWORD *)v231 ^ *v210);
                  v215 = (_DWORD)v231 - (_DWORD)v211 + ((unsigned int)v234 >> 3);
                  v195 += v215 + 4;
                }
                goto LABEL_309;
              }
              v186 = (int)v396;
              v185 = v392;
            }
            v13 = v376;
          }
          v238 = v13 - v184;
          v378 = v238;
          v239 = v6;
          if ( &v6[v238 + 1 + (v238 + 240) / 0xFF] <= v382 )
          {
            if ( v238 < 0xF )
            {
              *v6 = 16 * v238;
            }
            else
            {
              *v6 = -16;
              v240 = v238 - 15;
              ++v6;
              if ( v238 - 15 >= 0xFF )
              {
                v241 = v6;
                v6 += v240 / 0xFF;
                memset(v241, 255, v240 / 0xFF);
                v240 %= 0xFFui64;
              }
              v239 = v6;
              *v6 = v240;
            }
            memcpy_0(v239 + 1, v184, v238);
            v138 = v378 + (_DWORD)v6 + 1 - (_DWORD)dest;
            goto LABEL_573;
          }
        }
      }
      else
      {
        memcpy_0(v9, (const void *)v114, sizeof(indyfs_LZ4_stream_u));
        v115 = v9->table[2049];
        v116 = v9->internal_donotuse.currentOffset;
        v117 = v8;
        dictSize = v9->internal_donotuse.dictSize;
        v119 = (_DWORD)v8 - v116;
        v120 = (unsigned __int64)(v376 - 11);
        v390 = v9->internal_donotuse.currentOffset;
        v381 = &v8[-v116];
        v406 = v115;
        v401 = v115 + dictSize;
        v386 = (const char *)(dictSize + v115 - v116);
        v395 = &dest[maxOutputSize];
        if ( (unsigned int)v10 <= 0x7E000000 )
        {
          v9->internal_donotuse.dictSize = dictSize + v10;
          v9->internal_donotuse.currentOffset = v116 + v10;
          v9->internal_donotuse.tableType = 2;
          if ( (int)v10 >= 13 )
          {
            v121 = v8 + 1;
            v9->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v8) >> 52] = v116;
            v122 = v369 << 6;
            v372 = v369 << 6;
            v123 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v8 + 1);
LABEL_145:
            v124 = v123 >> 52;
            v125 = v121;
            v126 = 1;
            v127 = v122;
            while ( 1 )
            {
              v128 = v124;
              v129 = v125;
              v130 = (_DWORD)v125 - v119;
              v131 = (unsigned __int64)v125;
              v132 = indyfs_LZ4_stream->internal_donotuse.hashTable[v124];
              v133 = v126;
              v126 = v127 >> 6;
              v125 += v133;
              ++v127;
              if ( (unsigned __int64)v125 > v120 )
                goto LABEL_241;
              v134 = (unsigned __int64)v413;
              if ( (unsigned int)v132 < v390 )
                v134 = v115;
              v135 = v386;
              if ( (unsigned int)v132 >= v390 )
                v135 = v381;
              v136 = &v135[v132];
              v124 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v125) >> 52;
              indyfs_LZ4_stream->internal_donotuse.hashTable[v128] = v130;
              if ( (int)v132 + 0xFFFF >= v130 && *(_DWORD *)v136 == *(_DWORD *)v131 )
                break;
              v119 = (int)v381;
              v115 = v406;
              v120 = (unsigned __int64)(v376 - 11);
            }
            v137 = v130 - v132;
            v138 = 0;
            if ( (unsigned __int64)v136 > v134 && v129 > v117 )
            {
              do
              {
                v139 = v131 - 1;
                if ( *(_BYTE *)(v131 - 1) != *(v136 - 1) )
                  break;
                --v131;
                v140 = (unsigned __int64)--v136 > v134;
              }
              while ( v140 && v139 > (unsigned __int64)v117 );
            }
            v141 = (unsigned int)(v131 - (_DWORD)v117);
            v142 = v6;
            v143 = v6 + 1;
            if ( (char *)v143 + (unsigned int)v141 / 0xFF + v141 + 8 <= v395 )
            {
              if ( (unsigned int)v141 < 0xF )
              {
                *v142 = 16 * (v131 - (_BYTE)v117);
              }
              else
              {
                v144 = v141 - 15;
                *v142 = -16;
                if ( (int)v141 - 15 >= 255 )
                {
                  memset(v143, 255, v144 / 0xFF);
                  v143 = (_QWORD *)((char *)v143 + v144 / 0xFF);
                  LOBYTE(v144) = v144 / 0xFF + v144;
                }
                *(_BYTE *)v143 = v144;
                v143 = (_QWORD *)((char *)v143 + 1);
              }
              v145 = (_WORD *)((char *)v143 + (unsigned int)(v131 - (_DWORD)v117));
              v146 = v117 - (const char *)v143;
              do
              {
                *v143 = *(_QWORD *)((char *)v143 + v146);
                ++v143;
              }
              while ( v143 < (_QWORD *)v145 );
              v147 = v145;
              while ( 1 )
              {
                v148 = v136 + 4;
                *v147 = v137;
                v149 = (const char *)(v131 + 4);
                v150 = (unsigned __int64)(v376 - 5);
                v6 = (char *)(v147 + 1);
                if ( v134 != v406 )
                {
                  v164 = (unsigned __int64)(v376 - 12);
                  v165 = (const char *)(v131 + 4);
                  if ( v149 >= v376 - 12 )
                  {
LABEL_209:
                    if ( (unsigned __int64)v165 >= v164 )
                    {
LABEL_212:
                      if ( v165 < v376 - 8 && *v148 == *(_DWORD *)v165 )
                      {
                        v165 += 4;
                        ++v148;
                      }
                      if ( v165 < v376 - 6 && *(_WORD *)v148 == *(_WORD *)v165 )
                      {
                        v165 += 2;
                        v148 = (_DWORD *)((char *)v148 + 2);
                      }
                      if ( (unsigned __int64)v165 < v150 && *(_BYTE *)v148 == *v165 )
                        LODWORD(v165) = (_DWORD)v165 + 1;
                      v154 = (_DWORD)v165 - (_DWORD)v149;
                    }
                    else
                    {
                      while ( *(_QWORD *)v148 == *(_QWORD *)v165 )
                      {
                        v165 += 8;
                        v148 += 2;
                        if ( (unsigned __int64)v165 >= v164 )
                          goto LABEL_212;
                      }
                      _BitScanForward64(&v172, *(_QWORD *)v148 ^ *(_QWORD *)v165);
                      v154 = (_DWORD)v165 - (_DWORD)v149 + ((unsigned int)v172 >> 3);
                    }
                  }
                  else
                  {
                    if ( *(_QWORD *)v148 == *(_QWORD *)v149 )
                    {
                      v165 = (const char *)(v131 + 12);
                      v148 = v136 + 12;
                      goto LABEL_209;
                    }
                    _BitScanForward64(&v171, *(_QWORD *)v148 ^ *(_QWORD *)v149);
                    v154 = (unsigned int)v171 >> 3;
                  }
                  v134 = (unsigned __int64)v413;
                  v131 += v154 + 4;
                  goto LABEL_223;
                }
                v151 = v376 - 5;
                if ( v131 - (unsigned __int64)v136 + v401 <= v150 )
                  v151 = (const char *)(v131 - (_QWORD)v136 + v401);
                v152 = (const char *)(v131 + 4);
                v153 = v151 - 7;
                if ( v149 >= v151 - 7 )
                  goto LABEL_172;
                if ( *(_QWORD *)v148 == *(_QWORD *)v149 )
                  break;
                _BitScanForward64(&v159, *(_QWORD *)v148 ^ *(_QWORD *)v149);
                v154 = (unsigned int)v159 >> 3;
LABEL_185:
                v134 = (unsigned __int64)v413;
                v131 += v154 + 4;
                if ( (const char *)v131 != v151 )
                  goto LABEL_223;
                v155 = (unsigned __int64)(v376 - 12);
                v156 = v413;
                v157 = v151;
                if ( v151 < v376 - 12 )
                {
                  if ( *(_QWORD *)v151 != *(_QWORD *)v413 )
                  {
                    _BitScanForward64(&v161, *(_QWORD *)v151 ^ *(_QWORD *)v413);
                    LODWORD(v161) = (unsigned int)v161 >> 3;
                    v154 += v161;
                    v131 += (unsigned int)v161;
                    goto LABEL_223;
                  }
                  v157 = v151 + 8;
                  v156 = v413 + 8;
                }
                if ( (unsigned __int64)v157 >= v155 )
                {
LABEL_192:
                  if ( v157 < v376 - 8 && *(_DWORD *)v156 == *(_DWORD *)v157 )
                  {
                    v157 += 4;
                    v156 += 4;
                  }
                  if ( v157 < v376 - 6 && *(_WORD *)v156 == *(_WORD *)v157 )
                  {
                    v157 += 2;
                    v156 += 2;
                  }
                  if ( (unsigned __int64)v157 < v150 && *v156 == *v157 )
                    LODWORD(v157) = (_DWORD)v157 + 1;
                  v158 = (_DWORD)v157 - (_DWORD)v151;
                  v154 += v158;
                  v131 += v158;
                }
                else
                {
                  while ( *(_QWORD *)v157 == *(_QWORD *)v156 )
                  {
                    v157 += 8;
                    v156 += 8;
                    if ( (unsigned __int64)v157 >= v155 )
                      goto LABEL_192;
                  }
                  _BitScanForward64(&v162, *(_QWORD *)v157 ^ *(_QWORD *)v156);
                  v163 = ((unsigned int)v162 >> 3) + (_DWORD)v157 - (_DWORD)v151;
                  v154 += v163;
                  v131 += v163;
                }
LABEL_223:
                if ( &v6[((unsigned __int64)v154 >> 8) + 6] > v395 )
                  goto LABEL_467;
                v166 = *v142;
                if ( v154 < 0xF )
                {
                  *v142 = v154 + v166;
                }
                else
                {
                  v167 = v154 - 15;
                  *v142 = v166 + 15;
                  *(_DWORD *)v6 = -1;
                  if ( v167 >= 0x3FC )
                  {
                    v168 = v167 / 0x3FC;
                    do
                    {
                      v6 += 4;
                      v167 -= 1020;
                      *(_DWORD *)v6 = -1;
                      --v168;
                    }
                    while ( v168 );
                  }
                  v169 = v167 / 0xFF;
                  v170 = &v6[v169];
                  *v170 = v167 + v169;
                  v6 = v170 + 1;
                }
                v117 = (const char *)v131;
                if ( v131 >= (unsigned __int64)(v376 - 11) )
                  goto LABEL_241;
                v119 = (int)v381;
                v173 = v386;
                v174 = v131 - (_DWORD)v381;
                indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v131 - 2)) >> 52] = v131 - 2 - (_DWORD)v381;
                v175 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v131) >> 52;
                v176 = indyfs_LZ4_stream->internal_donotuse.hashTable[v175];
                indyfs_LZ4_stream->internal_donotuse.hashTable[v175] = v131 - (_DWORD)v381;
                if ( (unsigned int)v176 >= v390 )
                  v173 = v381;
                if ( (unsigned int)v176 < v390 )
                  v134 = v406;
                v136 = &v173[v176];
                if ( (int)v176 + 0xFFFF < v174 || *(_DWORD *)v136 != *(_DWORD *)v131 )
                {
                  v177 = *(_QWORD *)(v131 + 1);
                  v121 = (const char *)(v131 + 1);
                  v120 = (unsigned __int64)(v376 - 11);
                  v123 = 0xCF1BBCDCBB000000ui64 * v177;
                  v122 = v372;
                  v115 = v406;
                  goto LABEL_145;
                }
                v142 = v6;
                v147 = v6 + 1;
                v137 = v174 - v176;
                *v142 = 0;
              }
              v152 = (const char *)(v131 + 12);
              v148 = v136 + 12;
LABEL_172:
              if ( v152 >= v153 )
              {
LABEL_175:
                if ( v152 < v151 - 3 && *v148 == *(_DWORD *)v152 )
                {
                  v152 += 4;
                  ++v148;
                }
                if ( v152 < v151 - 1 && *(_WORD *)v148 == *(_WORD *)v152 )
                {
                  v152 += 2;
                  v148 = (_DWORD *)((char *)v148 + 2);
                }
                if ( v152 < v151 && *(_BYTE *)v148 == *v152 )
                  LODWORD(v152) = (_DWORD)v152 + 1;
                v154 = (_DWORD)v152 - (_DWORD)v149;
              }
              else
              {
                while ( *(_QWORD *)v148 == *(_QWORD *)v152 )
                {
                  v152 += 8;
                  v148 += 2;
                  if ( v152 >= v153 )
                    goto LABEL_175;
                }
                _BitScanForward64(&v160, *(_QWORD *)v148 ^ *(_QWORD *)v152);
                v154 = (_DWORD)v152 - (_DWORD)v149 + ((unsigned int)v160 >> 3);
              }
              goto LABEL_185;
            }
LABEL_573:
            indyfs_LZ4_stream->table[2049] = (unsigned __int64)v413;
            result = v138;
            indyfs_LZ4_stream->internal_donotuse.dictSize = inputSize;
            return result;
          }
LABEL_241:
          v178 = v376 - v117;
          v179 = v6;
          if ( &v6[v376 - v117 + 1 + (v376 - v117 + 240) / 0xFFui64] <= v395 )
          {
            if ( v178 < 0xF )
            {
              *v6 = 16 * v178;
            }
            else
            {
              *v6 = -16;
              v180 = v178 - 15;
              ++v6;
              if ( v178 - 15 >= 0xFF )
              {
                v181 = v6;
                v6 += v180 / 0xFF;
                memset(v181, 255, v180 / 0xFF);
                v180 %= 0xFFui64;
              }
              v179 = v6;
              *v6 = v180;
            }
            memcpy_0(v179 + 1, v117, v178);
            v138 = v178 + (_DWORD)v6 + 1 - (_DWORD)dest;
            goto LABEL_573;
          }
        }
      }
    }
    else
    {
      v242 = v9->internal_donotuse.dictSize;
      if ( (unsigned int)v242 >= 0x10000 )
      {
        LODWORD(v9) = v9->internal_donotuse.currentOffset;
        v383 = (unsigned int)v9;
      }
      else
      {
        v9 = (indyfs_LZ4_stream_u *)v9->internal_donotuse.currentOffset;
        v383 = (unsigned int)v9;
        if ( (unsigned int)v242 < (unsigned int)v9 )
        {
          v243 = &v8[v10];
          v410 = v242 + v12;
          v244 = (unsigned __int64)(v13 - 11);
          v408 = (_DWORD)v9 - v242;
          v245 = (_DWORD)v8 - (_DWORD)v9;
          v393 = v244;
          v397 = v8 - (const char *)v9;
          v246 = v8;
          v403 = v12 + (unsigned int)v242 - (_QWORD)v9;
          v387 = &dest[maxOutputSize];
          if ( (unsigned int)v10 <= 0x7E000000 )
          {
            v247 = indyfs_LZ4_stream;
            indyfs_LZ4_stream->internal_donotuse.dictSize = v242 + v10;
            indyfs_LZ4_stream->internal_donotuse.currentOffset = (_DWORD)v9 + v10;
            indyfs_LZ4_stream->internal_donotuse.tableType = 2;
            if ( (int)v10 >= 13 )
            {
              v248 = v8 + 1;
              indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v8) >> 52] = (unsigned int)v9;
              v249 = v369 << 6;
              v374 = v369 << 6;
              v250 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v8 + 1);
LABEL_359:
              v251 = v250 >> 52;
              v252 = v248;
              v253 = 1;
              v254 = v249;
              while ( 1 )
              {
                v255 = v247->internal_donotuse.hashTable[v251];
                v256 = v253;
                v257 = (_DWORD)v252 - v245;
                v258 = v251;
                v259 = v252;
                v253 = v254 >> 6;
                v260 = v252;
                ++v254;
                v252 += v256;
                if ( (unsigned __int64)v252 > v244 )
                  break;
                v261 = v403;
                if ( (unsigned int)v255 >= v383 )
                  v261 = v397;
                v262 = (unsigned __int64)v413;
                if ( (unsigned int)v255 < v383 )
                  v262 = (unsigned __int64)v389;
                v263 = (_DWORD *)(v255 + v261);
                v251 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v252) >> 52;
                indyfs_LZ4_stream->internal_donotuse.hashTable[v258] = v257;
                if ( (unsigned int)v255 >= v408 && (int)v255 + 0xFFFF >= v257 && *v263 == *(_DWORD *)v260 )
                {
                  v138 = 0;
                  v264 = v257 - v255;
                  if ( (unsigned __int64)v263 > v262 && v259 > v246 )
                  {
                    do
                    {
                      v265 = v260 - 1;
                      if ( *(v260 - 1) != *((_BYTE *)v263 - 1) )
                        break;
                      --v260;
                      v266 = (unsigned __int64)v263 - 1 > v262;
                      v263 = (_DWORD *)((char *)v263 - 1);
                    }
                    while ( v266 && v265 > v246 );
                  }
                  v267 = (_DWORD)v260 - (_DWORD)v246;
                  v268 = v6;
                  v269 = v6 + 1;
                  v270 = (unsigned int)((_DWORD)v260 - (_DWORD)v246);
                  if ( (char *)v269 + v270 + ((int)v260 - (int)v246) / 0xFFu + 8 > v387 )
                    goto LABEL_573;
                  if ( v267 < 0xF )
                  {
                    *v268 = 16 * v267;
                  }
                  else
                  {
                    v271 = v267 - 15;
                    *v268 = -16;
                    if ( (int)(v267 - 15) >= 255 )
                    {
                      memset(v269, 255, v271 / 0xFF);
                      v269 = (_QWORD *)((char *)v269 + v271 / 0xFF);
                      LOBYTE(v271) = v271 / 0xFF + v271;
                    }
                    *(_BYTE *)v269 = v271;
                    v269 = (_QWORD *)((char *)v269 + 1);
                  }
                  v272 = (_WORD *)((char *)v269 + v270);
                  v273 = v246 - (const char *)v269;
                  do
                  {
                    *v269 = *(_QWORD *)((char *)v269 + v273);
                    ++v269;
                  }
                  while ( v269 < (_QWORD *)v272 );
                  v274 = v272;
LABEL_381:
                  v275 = v263 + 1;
                  *v274 = v264;
                  v276 = v260 + 4;
                  v277 = (unsigned __int64)(v376 - 5);
                  v6 = (char *)(v274 + 1);
                  if ( (const char *)v262 == v389 )
                  {
                    v278 = v376 - 5;
                    if ( (unsigned __int64)&v260[v410 - (_QWORD)v263] <= v277 )
                      v278 = &v260[v410 - (_QWORD)v263];
                    v279 = v260 + 4;
                    v280 = v278 - 7;
                    if ( v276 >= v278 - 7 )
                      goto LABEL_387;
                    if ( *v275 != *(_QWORD *)v276 )
                    {
                      _BitScanForward64(&v286, *v275 ^ *(_QWORD *)v276);
                      v281 = (unsigned int)v286 >> 3;
                    }
                    else
                    {
                      v279 = v260 + 12;
                      v275 = v263 + 3;
LABEL_387:
                      if ( v279 >= v280 )
                      {
LABEL_390:
                        if ( v279 < v278 - 3 && *(_DWORD *)v275 == *(_DWORD *)v279 )
                        {
                          v279 += 4;
                          v275 = (_QWORD *)((char *)v275 + 4);
                        }
                        if ( v279 < v278 - 1 && *(_WORD *)v275 == *(_WORD *)v279 )
                        {
                          v279 += 2;
                          v275 = (_QWORD *)((char *)v275 + 2);
                        }
                        if ( v279 < v278 && *(_BYTE *)v275 == *v279 )
                          LODWORD(v279) = (_DWORD)v279 + 1;
                        v281 = (_DWORD)v279 - (_DWORD)v276;
                      }
                      else
                      {
                        while ( *v275 == *(_QWORD *)v279 )
                        {
                          v279 += 8;
                          ++v275;
                          if ( v279 >= v280 )
                            goto LABEL_390;
                        }
                        _BitScanForward64(&v287, *v275 ^ *(_QWORD *)v279);
                        v281 = (_DWORD)v279 + ((unsigned int)v287 >> 3) - (_DWORD)v276;
                      }
                    }
                    v262 = (unsigned __int64)v413;
                    v260 += v281 + 4;
                    if ( v260 == v278 )
                    {
                      v282 = (unsigned __int64)(v376 - 12);
                      v283 = v413;
                      v284 = v278;
                      if ( v278 >= v376 - 12 )
                      {
LABEL_404:
                        if ( (unsigned __int64)v284 >= v282 )
                        {
LABEL_407:
                          if ( v284 < v376 - 8 && *(_DWORD *)v283 == *(_DWORD *)v284 )
                          {
                            v284 += 4;
                            v283 += 4;
                          }
                          if ( v284 < v376 - 6 && *(_WORD *)v283 == *(_WORD *)v284 )
                          {
                            v284 += 2;
                            v283 += 2;
                          }
                          if ( (unsigned __int64)v284 < v277 && *v283 == *v284 )
                            LODWORD(v284) = (_DWORD)v284 + 1;
                          v285 = (_DWORD)v284 - (_DWORD)v278;
                          v281 += v285;
                          v260 += v285;
                        }
                        else
                        {
                          while ( *(_QWORD *)v284 == *(_QWORD *)v283 )
                          {
                            v284 += 8;
                            v283 += 8;
                            if ( (unsigned __int64)v284 >= v282 )
                              goto LABEL_407;
                          }
                          _BitScanForward64(&v289, *(_QWORD *)v284 ^ *(_QWORD *)v283);
                          v290 = ((unsigned int)v289 >> 3) - (_DWORD)v278 + (_DWORD)v284;
                          v281 += v290;
                          v260 += v290;
                        }
                      }
                      else
                      {
                        if ( *(_QWORD *)v278 == *(_QWORD *)v413 )
                        {
                          v284 = v278 + 8;
                          v283 = v413 + 8;
                          goto LABEL_404;
                        }
                        _BitScanForward64(&v288, *(_QWORD *)v278 ^ *(_QWORD *)v413);
                        LODWORD(v288) = (unsigned int)v288 >> 3;
                        v281 += v288;
                        v260 += (unsigned int)v288;
                      }
                    }
LABEL_438:
                    if ( &v6[((unsigned __int64)v281 >> 8) + 6] > v387 )
                      goto LABEL_467;
                    v293 = *v268;
                    if ( v281 < 0xF )
                    {
                      *v268 = v293 + v281;
                    }
                    else
                    {
                      v294 = v281 - 15;
                      *v268 = v293 + 15;
                      *(_DWORD *)v6 = -1;
                      if ( v294 >= 0x3FC )
                      {
                        v295 = v294 / 0x3FC;
                        do
                        {
                          v6 += 4;
                          v294 -= 1020;
                          *(_DWORD *)v6 = -1;
                          --v295;
                        }
                        while ( v295 );
                      }
                      v296 = &v6[v294 / 0xFF];
                      *v296 = v294 / 0xFF + v294;
                      v6 = v296 + 1;
                    }
                    v246 = v260;
                    if ( (unsigned __int64)v260 >= v393 )
                      break;
                    v245 = v397;
                    v299 = v403;
                    v300 = (_DWORD)v260 - v397;
                    indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v260 - 2)) >> 52] = (_DWORD)v260 - 2 - v397;
                    v301 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v260) >> 52;
                    v302 = indyfs_LZ4_stream->internal_donotuse.hashTable[v301];
                    indyfs_LZ4_stream->internal_donotuse.hashTable[v301] = (_DWORD)v260 - v397;
                    if ( (unsigned int)v302 < v383 )
                      v262 = (unsigned __int64)v389;
                    if ( (unsigned int)v302 >= v383 )
                      v299 = v397;
                    v263 = (_DWORD *)(v302 + v299);
                    if ( (unsigned int)v302 < v408 || (int)v302 + 0xFFFF < v300 || *v263 != *(_DWORD *)v260 )
                    {
                      v303 = *(_QWORD *)(v260 + 1);
                      v248 = v260 + 1;
                      v247 = indyfs_LZ4_stream;
                      v250 = 0xCF1BBCDCBB000000ui64 * v303;
                      v249 = v374;
                      v244 = v393;
                      goto LABEL_359;
                    }
                    v268 = v6;
                    v274 = v6 + 1;
                    v264 = v300 - v302;
                    *v268 = 0;
                    goto LABEL_381;
                  }
                  v291 = (unsigned __int64)(v376 - 12);
                  v292 = v260 + 4;
                  if ( v276 >= v376 - 12 )
                  {
LABEL_424:
                    if ( (unsigned __int64)v292 >= v291 )
                    {
LABEL_427:
                      if ( v292 < v376 - 8 && *(_DWORD *)v275 == *(_DWORD *)v292 )
                      {
                        v292 += 4;
                        v275 = (_QWORD *)((char *)v275 + 4);
                      }
                      if ( v292 < v376 - 6 && *(_WORD *)v275 == *(_WORD *)v292 )
                      {
                        v292 += 2;
                        v275 = (_QWORD *)((char *)v275 + 2);
                      }
                      if ( (unsigned __int64)v292 < v277 && *(_BYTE *)v275 == *v292 )
                        LODWORD(v292) = (_DWORD)v292 + 1;
                      v281 = (_DWORD)v292 - (_DWORD)v276;
                    }
                    else
                    {
                      while ( *v275 == *(_QWORD *)v292 )
                      {
                        v292 += 8;
                        ++v275;
                        if ( (unsigned __int64)v292 >= v291 )
                          goto LABEL_427;
                      }
                      _BitScanForward64(&v298, *v275 ^ *(_QWORD *)v292);
                      v281 = (_DWORD)v292 + ((unsigned int)v298 >> 3) - (_DWORD)v276;
                    }
                  }
                  else
                  {
                    if ( *v275 == *(_QWORD *)v276 )
                    {
                      v292 = v260 + 12;
                      v275 = v263 + 3;
                      goto LABEL_424;
                    }
                    _BitScanForward64(&v297, *v275 ^ *(_QWORD *)v276);
                    v281 = (unsigned int)v297 >> 3;
                  }
                  v262 = (unsigned __int64)v413;
                  v260 += v281 + 4;
                  goto LABEL_438;
                }
                v245 = v397;
                v244 = v393;
                v247 = indyfs_LZ4_stream;
              }
              v243 = v376;
            }
            v304 = v243 - v246;
            v305 = v6;
            if ( &v6[v304 + 1 + (v304 + 240) / 0xFF] <= v387 )
            {
              if ( v304 < 0xF )
              {
                *v6 = 16 * v304;
              }
              else
              {
                *v6 = -16;
                v306 = v304 - 15;
                ++v6;
                if ( v304 - 15 >= 0xFF )
                {
                  v307 = v6;
                  v6 += v306 / 0xFF;
                  memset(v307, 255, v306 / 0xFF);
                  v306 %= 0xFFui64;
                }
                v305 = v6;
                *v6 = v306;
              }
              memcpy_0(v305 + 1, v246, v304);
              v138 = (_DWORD)v6 + 1 + v304 - (_DWORD)dest;
              goto LABEL_573;
            }
          }
          goto LABEL_467;
        }
      }
      v411 = v242 + v12;
      v398 = (unsigned __int64)(v13 - 11);
      v404 = v12 + v242 - (unsigned int)v9;
      srcBase = (const unsigned __int8 *)&v8[-(unsigned int)v9];
      v309 = v8;
      v388 = srcBase;
      v394 = &dest[maxOutputSize];
      if ( (unsigned int)v10 <= 0x7E000000 )
      {
        indyfs_LZ4_stream->internal_donotuse.dictSize = v242 + v10;
        indyfs_LZ4_stream->internal_donotuse.currentOffset = (_DWORD)v9 + v10;
        indyfs_LZ4_stream->internal_donotuse.tableType = 2;
        if ( (int)v10 >= 13 )
        {
          indyfs_LZ4_putPositionOnHash((const unsigned __int8 *)v8, (unsigned int)((0xCF1BBCDCBB000000ui64 * *(_QWORD *)v8) >> 32) >> 20, indyfs_LZ4_stream, byU16, srcBase);
          v311 = v8 + 1;
          v312 = v369 << 6;
          v375 = v369 << 6;
          v313 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v8 + 1);
LABEL_470:
          v314 = v313 >> 52;
          v315 = v311;
          v316 = 1;
          v317 = v312;
          while ( 1 )
          {
            v318 = (_DWORD)v315 - (_DWORD)srcBase;
            v319 = v315;
            v320 = v315;
            v321 = v314;
            v322 = indyfs_LZ4_stream->internal_donotuse.hashTable[v314];
            v323 = v316;
            v316 = v317 >> 6;
            v315 += v323;
            ++v317;
            if ( (unsigned __int64)v315 > v310 )
              break;
            v324 = (const unsigned __int8 *)v404;
            if ( (unsigned int)v322 < v383 )
              v8 = v389;
            if ( (unsigned int)v322 >= v383 )
              v324 = v388;
            v325 = (const char *)&v324[v322];
            v314 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v315) >> 52;
            indyfs_LZ4_stream->internal_donotuse.hashTable[v321] = v318;
            if ( (int)v322 + 0xFFFF >= v318 && *(_DWORD *)v325 == *(_DWORD *)v320 )
            {
              v326 = v318 - v322;
              v138 = 0;
              if ( v325 > v8 && v319 > v309 )
              {
                do
                {
                  v327 = v320 - 1;
                  if ( *(v320 - 1) != *(v325 - 1) )
                    break;
                  --v320;
                  v328 = --v325 > v8;
                }
                while ( v328 && v327 > v309 );
              }
              v329 = v6 + 1;
              v330 = v6;
              v331 = (_DWORD)v320 - (_DWORD)v309;
              v332 = (unsigned int)((_DWORD)v320 - (_DWORD)v309);
              if ( &v6[v332 + 9 + ((int)v320 - (int)v309) / 0xFFu] > v394 )
                goto LABEL_573;
              if ( v331 < 0xF )
              {
                *v6 = 16 * v331;
              }
              else
              {
                v333 = v331 - 15;
                *v330 = -16;
                if ( (int)(v331 - 15) >= 255 )
                {
                  memset(v329, 255, v333 / 0xFF);
                  v329 = (_QWORD *)((char *)v329 + v333 / 0xFF);
                  LOBYTE(v333) = v333 / 0xFF + v333;
                }
                *(_BYTE *)v329 = v333;
                v329 = (_QWORD *)((char *)v329 + 1);
              }
              v334 = (_WORD *)((char *)v329 + v332);
              v335 = v309 - (const char *)v329;
              do
              {
                *v329 = *(_QWORD *)((char *)v329 + v335);
                ++v329;
              }
              while ( v329 < (_QWORD *)v334 );
LABEL_490:
              v336 = v325 + 4;
              *v334 = v326;
              v337 = v320 + 4;
              v338 = (unsigned __int64)(v376 - 5);
              v6 = (char *)(v334 + 1);
              if ( v8 == v389 )
              {
                v339 = v376 - 5;
                if ( (unsigned __int64)&v320[v411 - (_QWORD)v325] <= v338 )
                  v339 = &v320[v411 - (_QWORD)v325];
                v340 = v320 + 4;
                v341 = v339 - 7;
                if ( v337 >= v339 - 7 )
                  goto LABEL_496;
                if ( *v336 != *(_QWORD *)v337 )
                {
                  _BitScanForward64(&v347, *v336 ^ *(_QWORD *)v337);
                  v342 = (unsigned int)v347 >> 3;
                }
                else
                {
                  v340 = v320 + 12;
                  v336 = v325 + 12;
LABEL_496:
                  if ( v340 >= v341 )
                  {
LABEL_499:
                    if ( v340 < v339 - 3 && *(_DWORD *)v336 == *(_DWORD *)v340 )
                    {
                      v340 += 4;
                      v336 = (_QWORD *)((char *)v336 + 4);
                    }
                    if ( v340 < v339 - 1 && *(_WORD *)v336 == *(_WORD *)v340 )
                    {
                      v340 += 2;
                      v336 = (_QWORD *)((char *)v336 + 2);
                    }
                    if ( v340 < v339 && *(_BYTE *)v336 == *v340 )
                      LODWORD(v340) = (_DWORD)v340 + 1;
                    v342 = (_DWORD)v340 - (_DWORD)v337;
                  }
                  else
                  {
                    while ( *v336 == *(_QWORD *)v340 )
                    {
                      v340 += 8;
                      ++v336;
                      if ( v340 >= v341 )
                        goto LABEL_499;
                    }
                    _BitScanForward64(&v348, *v336 ^ *(_QWORD *)v340);
                    v342 = (_DWORD)v340 - (_DWORD)v337 + ((unsigned int)v348 >> 3);
                  }
                }
                v8 = v413;
                v320 += v342 + 4;
                if ( v320 == v339 )
                {
                  v343 = (unsigned __int64)(v376 - 12);
                  v344 = v413;
                  v345 = v339;
                  if ( v339 >= v376 - 12 )
                  {
LABEL_513:
                    if ( (unsigned __int64)v345 >= v343 )
                    {
LABEL_516:
                      if ( v345 < v376 - 8 && *(_DWORD *)v344 == *(_DWORD *)v345 )
                      {
                        v345 += 4;
                        v344 += 4;
                      }
                      if ( v345 < v376 - 6 && *(_WORD *)v344 == *(_WORD *)v345 )
                      {
                        v345 += 2;
                        v344 += 2;
                      }
                      if ( (unsigned __int64)v345 < v338 && *v344 == *v345 )
                        LODWORD(v345) = (_DWORD)v345 + 1;
                      v346 = (_DWORD)v345 - (_DWORD)v339;
                      v342 += v346;
                      v320 += v346;
                    }
                    else
                    {
                      while ( *(_QWORD *)v345 == *(_QWORD *)v344 )
                      {
                        v345 += 8;
                        v344 += 8;
                        if ( (unsigned __int64)v345 >= v343 )
                          goto LABEL_516;
                      }
                      _BitScanForward64(&v350, *(_QWORD *)v345 ^ *(_QWORD *)v344);
                      v351 = ((unsigned int)v350 >> 3) + (_DWORD)v345 - (_DWORD)v339;
                      v342 += v351;
                      v320 += v351;
                    }
                  }
                  else
                  {
                    if ( *(_QWORD *)v339 == *(_QWORD *)v413 )
                    {
                      v345 = v339 + 8;
                      v344 = v413 + 8;
                      goto LABEL_513;
                    }
                    _BitScanForward64(&v349, *(_QWORD *)v339 ^ *(_QWORD *)v413);
                    LODWORD(v349) = (unsigned int)v349 >> 3;
                    v342 += v349;
                    v320 += (unsigned int)v349;
                  }
                }
LABEL_547:
                if ( &v6[((unsigned __int64)v342 >> 8) + 6] > v394 )
                  goto LABEL_467;
                v354 = *v330;
                if ( v342 < 0xF )
                {
                  *v330 = v354 + v342;
                }
                else
                {
                  v355 = v342 - 15;
                  *v330 = v354 + 15;
                  *(_DWORD *)v6 = -1;
                  if ( v355 >= 0x3FC )
                  {
                    v356 = v355 / 0x3FC;
                    do
                    {
                      v6 += 4;
                      v355 -= 1020;
                      *(_DWORD *)v6 = -1;
                      --v356;
                    }
                    while ( v356 );
                  }
                  v357 = &v6[v355 / 0xFF];
                  *v357 = v355 / 0xFF + v355;
                  v6 = v357 + 1;
                }
                v309 = v320;
                if ( (unsigned __int64)v320 >= v398 )
                  break;
                LODWORD(srcBase) = (_DWORD)v388;
                v360 = (const unsigned __int8 *)v404;
                v361 = (_DWORD)v320 - (_DWORD)v388;
                indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v320 - 2)) >> 52] = (_DWORD)v320 - 2 - (_DWORD)v388;
                v362 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v320) >> 52;
                v363 = indyfs_LZ4_stream->internal_donotuse.hashTable[v362];
                indyfs_LZ4_stream->internal_donotuse.hashTable[v362] = (_DWORD)v320 - (_DWORD)v388;
                if ( (unsigned int)v363 < v383 )
                  v8 = v389;
                if ( (unsigned int)v363 >= v383 )
                  v360 = v388;
                v325 = (const char *)&v360[v363];
                if ( (int)v363 + 0xFFFF < v361 || *(_DWORD *)v325 != *(_DWORD *)v320 )
                {
                  v364 = *(_QWORD *)(v320 + 1);
                  v311 = v320 + 1;
                  v8 = v413;
                  v313 = 0xCF1BBCDCBB000000ui64 * v364;
                  v312 = v375;
                  v310 = v398;
                  goto LABEL_470;
                }
                v330 = v6;
                v334 = v6 + 1;
                v326 = v361 - v363;
                *v330 = 0;
                goto LABEL_490;
              }
              v352 = (unsigned __int64)(v376 - 12);
              v353 = v320 + 4;
              if ( v337 >= v376 - 12 )
              {
LABEL_533:
                if ( (unsigned __int64)v353 >= v352 )
                {
LABEL_536:
                  if ( v353 < v376 - 8 && *(_DWORD *)v336 == *(_DWORD *)v353 )
                  {
                    v353 += 4;
                    v336 = (_QWORD *)((char *)v336 + 4);
                  }
                  if ( v353 < v376 - 6 && *(_WORD *)v336 == *(_WORD *)v353 )
                  {
                    v353 += 2;
                    v336 = (_QWORD *)((char *)v336 + 2);
                  }
                  if ( (unsigned __int64)v353 < v338 && *(_BYTE *)v336 == *v353 )
                    LODWORD(v353) = (_DWORD)v353 + 1;
                  v342 = (_DWORD)v353 - (_DWORD)v337;
                }
                else
                {
                  while ( *v336 == *(_QWORD *)v353 )
                  {
                    v353 += 8;
                    ++v336;
                    if ( (unsigned __int64)v353 >= v352 )
                      goto LABEL_536;
                  }
                  _BitScanForward64(&v359, *v336 ^ *(_QWORD *)v353);
                  v342 = (_DWORD)v353 - (_DWORD)v337 + ((unsigned int)v359 >> 3);
                }
              }
              else
              {
                if ( *v336 == *(_QWORD *)v337 )
                {
                  v353 = v320 + 12;
                  v336 = v325 + 12;
                  goto LABEL_533;
                }
                _BitScanForward64(&v358, *v336 ^ *(_QWORD *)v337);
                v342 = (unsigned int)v358 >> 3;
              }
              v8 = v413;
              v320 += v342 + 4;
              goto LABEL_547;
            }
            LODWORD(srcBase) = (_DWORD)v388;
            v310 = v398;
            v8 = v413;
          }
          v13 = v376;
        }
        v365 = v13 - v309;
        v379 = v365;
        if ( &v6[v365 + 1 + (v365 + 240) / 0xFF] <= v394 )
        {
          if ( v365 < 0xF )
          {
            *v6 = 16 * v365;
          }
          else
          {
            *v6 = -16;
            v366 = v365 - 15;
            ++v6;
            if ( v365 - 15 >= 0xFF )
            {
              v367 = v6;
              v6 += v366 / 0xFF;
              memset(v367, 255, v366 / 0xFF);
              v366 %= 0xFFui64;
            }
            *v6 = v366;
          }
          v368 = v6 + 1;
          memcpy_0(v368, v309, v365);
          v138 = (_DWORD)v368 + v379 - (_DWORD)dest;
          goto LABEL_573;
        }
      }
    }
LABEL_467:
    v138 = 0;
    goto LABEL_573;
  }
  v17 = v9->internal_donotuse.dictSize;
  if ( (unsigned int)v17 >= 0x10000 || (v18 = v9->internal_donotuse.currentOffset, (unsigned int)v17 >= (unsigned int)v18) )
  {
    v67 = v9->internal_donotuse.currentOffset;
    v68 = (unsigned __int64)(v13 - 11);
    v69 = &v8[-v67];
    v70 = &dest[maxOutputSize];
    v380 = v68;
    v384 = (unsigned __int64)v70;
    if ( (unsigned int)inputSize > 0x7E000000 )
      return v15;
    v400 = (unsigned __int64)&v8[-v17];
    indyfs_LZ4_stream->internal_donotuse.dictSize = v17 + inputSize;
    indyfs_LZ4_stream->internal_donotuse.currentOffset = v67 + inputSize;
    indyfs_LZ4_stream->internal_donotuse.tableType = 2;
    if ( inputSize >= 13 )
    {
      v71 = v8 + 1;
      indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v8) >> 52] = v67;
      v72 = v369 << 6;
      v371 = v369 << 6;
      v73 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v8 + 1);
LABEL_82:
      v74 = v73 >> 52;
      v75 = v71;
      v76 = 1;
      v77 = v72;
      while ( 1 )
      {
        v78 = v74;
        v79 = v75;
        v80 = v75;
        v81 = (_DWORD)v75 - (_DWORD)v69;
        v82 = indyfs_LZ4_stream->internal_donotuse.hashTable[v74];
        v83 = v76;
        v76 = v77 >> 6;
        v75 += v83;
        ++v77;
        if ( (unsigned __int64)v75 > v68 )
          break;
        v84 = &v69[v82];
        v74 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v75) >> 52;
        indyfs_LZ4_stream->internal_donotuse.hashTable[v78] = v81;
        if ( (int)v82 + 0xFFFF >= v81 && *(_DWORD *)v84 == *(_DWORD *)v80 )
        {
          v85 = v413;
          v15 = 0;
          if ( v79 > v413 && (unsigned __int64)v84 > v400 )
          {
            do
            {
              v86 = v80 - 1;
              if ( *(v80 - 1) != *(v84 - 1) )
                break;
              --v80;
              v87 = (unsigned __int64)--v84 > v400;
            }
            while ( v87 && v86 > v413 );
          }
          v70 = &dest[maxOutputSize];
          v88 = (unsigned int)((_DWORD)v80 - (_DWORD)v413);
          v89 = v6;
          v90 = v6 + 1;
          if ( (unsigned __int64)v90 + (unsigned int)v88 / 0xFF + v88 + 8 <= v384 )
          {
            if ( (unsigned int)v88 < 0xF )
            {
              *v89 = 16 * ((_BYTE)v80 - (_BYTE)v413);
            }
            else
            {
              v91 = v88 - 15;
              *v89 = -16;
              if ( (int)v88 - 15 >= 255 )
              {
                v92 = v90;
                v90 = (_QWORD *)((char *)v90 + v91 / 0xFF);
                v85 = v413;
                memset(v92, 255, v91 / 0xFF);
                LOBYTE(v91) = v91 / 0xFF + v91;
              }
              *(_BYTE *)v90 = v91;
              v90 = (_QWORD *)((char *)v90 + 1);
            }
            v93 = (_WORD *)((char *)v90 + (unsigned int)((_DWORD)v80 - (_DWORD)v413));
            v94 = v85 - (const char *)v90;
            do
            {
              *v90 = *(_QWORD *)((char *)v90 + v94);
              ++v90;
            }
            while ( v90 < (_QWORD *)v93 );
            v95 = (unsigned __int64)(v376 - 12);
            v96 = v93;
            while ( 1 )
            {
              v97 = v80 + 4;
              v98 = v84 + 4;
              *v96 = (_WORD)v80 - (_WORD)v84;
              v6 = (char *)(v96 + 1);
              v99 = v80 + 4;
              if ( (unsigned __int64)(v80 + 4) < v95 )
              {
                if ( *v97 != *v98 )
                {
                  _BitScanForward64((unsigned __int64 *)&v97, *v97 ^ *v98);
                  v100 = (unsigned int)v97 >> 3;
                  goto LABEL_115;
                }
                v99 = v80 + 12;
                v98 = v84 + 12;
              }
              if ( (unsigned __int64)v99 >= v95 )
              {
LABEL_105:
                if ( v99 < v376 - 8 && *(_DWORD *)v98 == *(_DWORD *)v99 )
                {
                  v99 += 4;
                  v98 = (_QWORD *)((char *)v98 + 4);
                }
                if ( v99 < v376 - 6 && *(_WORD *)v98 == *(_WORD *)v99 )
                {
                  v99 += 2;
                  v98 = (_QWORD *)((char *)v98 + 2);
                }
                if ( v99 < v376 - 5 && *(_BYTE *)v98 == *v99 )
                  LODWORD(v99) = (_DWORD)v99 + 1;
                v100 = (_DWORD)v99 - (_DWORD)v97;
              }
              else
              {
                while ( *(_QWORD *)v99 == *v98 )
                {
                  v99 += 8;
                  ++v98;
                  if ( (unsigned __int64)v99 >= v95 )
                    goto LABEL_105;
                }
                _BitScanForward64(&v106, *(_QWORD *)v99 ^ *v98);
                v100 = ((unsigned int)v106 >> 3) + (_DWORD)v99 - (_DWORD)v97;
              }
LABEL_115:
              v80 += v100 + 4;
              if ( (unsigned __int64)&v6[((unsigned __int64)v100 >> 8) + 6] > v384 )
                return 0i64;
              v101 = *v89;
              if ( v100 < 0xF )
              {
                *v89 = v101 + v100;
              }
              else
              {
                v102 = v100 - 15;
                *v89 = v101 + 15;
                *(_DWORD *)v6 = -1;
                if ( v102 >= 0x3FC )
                {
                  v103 = v102 / 0x3FC;
                  do
                  {
                    v6 += 4;
                    v102 -= 1020;
                    *(_DWORD *)v6 = -1;
                    --v103;
                  }
                  while ( v103 );
                }
                v104 = v102 / 0xFF;
                v105 = &v6[v104];
                *v105 = v102 + v104;
                v6 = v105 + 1;
              }
              v413 = v80;
              v8 = v80;
              if ( (unsigned __int64)v80 >= v380 )
                goto LABEL_131;
              indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v80 - 2)) >> 52] = (_DWORD)v80 - 2 - (_DWORD)v69;
              v107 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v80) >> 52;
              v108 = indyfs_LZ4_stream->internal_donotuse.hashTable[v107];
              indyfs_LZ4_stream->internal_donotuse.hashTable[v107] = (_DWORD)v80 - (_DWORD)v69;
              v84 = &v69[v108];
              if ( (int)v108 + 0xFFFF < (unsigned int)((_DWORD)v80 - (_DWORD)v69) || *(_DWORD *)v84 != *(_DWORD *)v80 )
              {
                v109 = *(_QWORD *)(v80 + 1);
                v71 = v80 + 1;
                v72 = v371;
                v68 = v380;
                v73 = 0xCF1BBCDCBB000000ui64 * v109;
                goto LABEL_82;
              }
              v89 = v6;
              v96 = v6 + 1;
              *v89 = 0;
            }
          }
          return v15;
        }
        v68 = v380;
      }
      v70 = &dest[maxOutputSize];
      v8 = v413;
LABEL_131:
      v15 = 0;
    }
    v110 = v376 - v8;
    v111 = v6;
    if ( &v6[(v376 - v8 + 240) / 0xFFui64 + 1 + v376 - v8] <= v70 )
    {
      if ( v110 < 0xF )
      {
        *v6 = 16 * v110;
      }
      else
      {
        *v6 = -16;
        v112 = v110 - 15;
        ++v6;
        if ( v110 - 15 >= 0xFF )
        {
          v113 = v6;
          v6 += v112 / 0xFF;
          memset(v113, 255, v112 / 0xFF);
          v112 %= 0xFFui64;
        }
        v111 = v6;
        *v6 = v112;
      }
      memcpy_0(v111 + 1, v8, v110);
      return (unsigned int)(v110 + (_DWORD)v6 + 1 - (_DWORD)dest);
    }
    return v15;
  }
  v19 = (unsigned __int64)(v13 - 5);
  v20 = &dest[maxOutputSize];
  v21 = &v8[-v18];
  v405 = v18 - v17;
  if ( (unsigned int)inputSize > 0x7E000000 )
    return 0i64;
  v399 = (unsigned __int64)&v8[-v17];
  indyfs_LZ4_stream->internal_donotuse.dictSize = v17 + inputSize;
  indyfs_LZ4_stream->internal_donotuse.currentOffset = v18 + inputSize;
  indyfs_LZ4_stream->internal_donotuse.tableType = 2;
  if ( inputSize >= 13 )
  {
    v22 = v8 + 1;
    v23 = v14 << 6;
    v370 = v23;
    indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v8) >> 52] = v18;
    v24 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v8 + 1);
LABEL_19:
    v25 = v24 >> 52;
    v26 = v22;
    v27 = 1;
    v28 = v23;
LABEL_20:
    v29 = indyfs_LZ4_stream;
    while ( 1 )
    {
      v30 = v29->internal_donotuse.hashTable[v25];
      v31 = v25;
      v32 = v27;
      v33 = (int)v26;
      v34 = v26;
      v27 = v28 >> 6;
      v26 += v32;
      v35 = v33 - (_DWORD)v21;
      ++v28;
      if ( v26 > v376 - 11 )
        break;
      v36 = &v21[v30];
      v29 = indyfs_LZ4_stream;
      v25 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v26) >> 52;
      indyfs_LZ4_stream->internal_donotuse.hashTable[v31] = v35;
      if ( (unsigned int)v30 >= v405 )
      {
        if ( (int)v30 + 0xFFFF >= v35 && *(_DWORD *)v36 == *(_DWORD *)v34 )
        {
          v37 = v413;
          if ( (unsigned __int64)v36 > v399 && v34 > v413 )
          {
            do
            {
              v38 = v34 - 1;
              if ( *(v34 - 1) != *(v36 - 1) )
                break;
              --v34;
              v39 = (unsigned __int64)--v36 > v399;
            }
            while ( v39 && v38 > v413 );
            v37 = v413;
          }
          v20 = &dest[maxOutputSize];
          v40 = v6;
          v41 = (_DWORD)v34 - (_DWORD)v37;
          v42 = v6 + 1;
          v43 = (unsigned int)((_DWORD)v34 - (_DWORD)v37);
          if ( (char *)v42 + v43 + ((int)v34 - (int)v37) / 0xFFu + 8 > v20 )
            return 0i64;
          if ( v41 < 0xF )
          {
            *v40 = 16 * v41;
          }
          else
          {
            v44 = v41 - 15;
            *v40 = -16;
            if ( (int)(v41 - 15) >= 255 )
            {
              memset(v42, 255, v44 / 0xFF);
              v37 = v413;
              v42 = (_QWORD *)((char *)v42 + v44 / 0xFF);
              LOBYTE(v44) = v44 / 0xFF + v44;
            }
            *(_BYTE *)v42 = v44;
            v42 = (_QWORD *)((char *)v42 + 1);
            v20 = &dest[maxOutputSize];
          }
          v45 = (_WORD *)((char *)v42 + v43);
          v46 = v37 - (const char *)v42;
          do
          {
            *v42 = *(_QWORD *)((char *)v42 + v46);
            ++v42;
          }
          while ( v42 < (_QWORD *)v45 );
          v47 = v45;
          v48 = v19 - 7;
          while ( 2 )
          {
            v49 = v34 + 4;
            v50 = v36 + 4;
            *v47 = (_WORD)v34 - (_WORD)v36;
            v51 = v34 + 4;
            v6 = (char *)(v47 + 1);
            if ( (unsigned __int64)(v34 + 4) >= v48 )
            {
LABEL_41:
              if ( (unsigned __int64)v51 >= v48 )
              {
LABEL_44:
                if ( (unsigned __int64)v51 < v19 - 3 && *v50 == *v51 )
                {
                  ++v51;
                  ++v50;
                }
                if ( (unsigned __int64)v51 < v19 - 1 && *(_WORD *)v50 == *(_WORD *)v51 )
                {
                  v51 = (_DWORD *)((char *)v51 + 2);
                  v50 = (_DWORD *)((char *)v50 + 2);
                }
                if ( (unsigned __int64)v51 < v19 && *(_BYTE *)v50 == *(_BYTE *)v51 )
                  LODWORD(v51) = (_DWORD)v51 + 1;
                v52 = (_DWORD)v51 - (_DWORD)v49;
                v53 = 0;
              }
              else
              {
                while ( *(_QWORD *)v51 == *(_QWORD *)v50 )
                {
                  v51 += 2;
                  v50 += 2;
                  if ( (unsigned __int64)v51 >= v48 )
                    goto LABEL_44;
                }
                _BitScanForward64(&v59, *(_QWORD *)v51 ^ *(_QWORD *)v50);
                v53 = 0;
                v52 = (_DWORD)v51 + ((unsigned int)v59 >> 3) - (_DWORD)v49;
              }
            }
            else
            {
              if ( *v49 == *(_QWORD *)v50 )
              {
                v51 = v34 + 12;
                v50 = v36 + 12;
                goto LABEL_41;
              }
              _BitScanForward64((unsigned __int64 *)&v49, *v49 ^ *(_QWORD *)v50);
              v53 = 0;
              v52 = (unsigned int)v49 >> 3;
            }
            v34 += v52 + 4;
            if ( &v6[((unsigned __int64)v52 >> 8) + 6] > v20 )
              return v53;
            v54 = *v40;
            if ( v52 < 0xF )
            {
              *v40 = v52 + v54;
            }
            else
            {
              v55 = v52 - 15;
              *v40 = v54 + 15;
              *(_DWORD *)v6 = -1;
              if ( v55 >= 0x3FC )
              {
                v56 = v55 / 0x3FC;
                do
                {
                  v6 += 4;
                  v55 -= 1020;
                  *(_DWORD *)v6 = -1;
                  --v56;
                }
                while ( v56 );
              }
              v57 = v55 / 0xFF;
              v58 = &v6[v57];
              *v58 = v55 + v57;
              v6 = v58 + 1;
            }
            v8 = v34;
            v413 = v34;
            if ( v34 >= v376 - 11 )
              goto LABEL_70;
            indyfs_LZ4_stream->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v34 - 2)) >> 52] = (_DWORD)v34 - 2 - (_DWORD)v21;
            v60 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v34) >> 52;
            v61 = indyfs_LZ4_stream->internal_donotuse.hashTable[v60];
            indyfs_LZ4_stream->internal_donotuse.hashTable[v60] = (_DWORD)v34 - (_DWORD)v21;
            v36 = &v21[v61];
            if ( (unsigned int)v61 < v405 || (int)v61 + 0xFFFF < (unsigned int)((_DWORD)v34 - (_DWORD)v21) || *(_DWORD *)v36 != *(_DWORD *)v34 )
            {
              v62 = *(_QWORD *)(v34 + 1);
              v22 = v34 + 1;
              v24 = 0xCF1BBCDCBB000000ui64 * v62;
              v23 = v370;
              goto LABEL_19;
            }
            v40 = v6;
            v47 = v6 + 1;
            *v40 = 0;
            continue;
          }
        }
        goto LABEL_20;
      }
    }
    v20 = &dest[maxOutputSize];
    v8 = v413;
LABEL_70:
    v13 = v376;
  }
  v63 = v13 - v8;
  v377 = v63;
  v64 = v6;
  if ( &v6[v63 + 1 + (v63 + 240) / 0xFF] > v20 )
    return 0i64;
  if ( v63 < 0xF )
  {
    *v6 = 16 * v63;
  }
  else
  {
    *v6 = -16;
    v65 = v63 - 15;
    ++v6;
    if ( v63 - 15 >= 0xFF )
    {
      v66 = v6;
      v6 += v65 / 0xFF;
      memset(v66, 255, v65 / 0xFF);
      v65 %= 0xFFui64;
    }
    v64 = v6;
    *v6 = v65;
  }
  memcpy_0(v64 + 1, v8, v63);
  return (unsigned int)(v377 + (_DWORD)v6 + 1 - (_DWORD)dest);
}

/*
==============
indyfs_LZ4_compress_fast_extState
==============
*/
__int64 indyfs_LZ4_compress_fast_extState(void *state, const char *source, char *dest, int inputSize, int maxOutputSize, int acceleration)
{
  int v6; 
  __int64 v7; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  char *v18; 
  const char *v19; 
  const char *v20; 
  __int64 v21; 
  int v22; 
  const char *v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  const char *v28; 
  __int16 v29; 
  unsigned int v30; 
  __int64 v31; 
  const char *v32; 
  unsigned __int64 v33; 
  const char *v34; 
  char *v35; 
  unsigned int v36; 
  _QWORD *v37; 
  unsigned int v38; 
  _WORD *v39; 
  signed __int64 v40; 
  _WORD *v41; 
  unsigned __int64 v42; 
  _QWORD *v43; 
  _QWORD *v44; 
  const char *v45; 
  unsigned int v46; 
  char v47; 
  unsigned int v48; 
  __int64 v49; 
  __int64 v50; 
  char *v51; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  __int64 v54; 
  unsigned int v55; 
  size_t v56; 
  char *v57; 
  size_t v58; 
  char *v59; 
  int v60; 
  void *v61; 
  const char *v62; 
  const char *v63; 
  const char *v64; 
  const char *v65; 
  int v66; 
  unsigned __int64 v67; 
  unsigned __int64 v68; 
  const char *v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned __int64 v72; 
  const char *v73; 
  const char *v74; 
  unsigned int v75; 
  __int64 v76; 
  __int64 v77; 
  const char *v78; 
  unsigned __int64 v79; 
  bool v80; 
  char *v81; 
  unsigned int v82; 
  _QWORD *v83; 
  unsigned int v84; 
  _WORD *v85; 
  signed __int64 v86; 
  unsigned __int64 v87; 
  _WORD *v88; 
  _QWORD *v89; 
  _QWORD *v90; 
  const char *v91; 
  unsigned int v92; 
  char v93; 
  unsigned int v94; 
  __int64 v95; 
  char *v96; 
  unsigned __int64 v97; 
  unsigned __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  const char *v101; 
  const char *v102; 
  const char *v103; 
  const char *v104; 
  char *v105; 
  const char *v106; 
  __int64 v107; 
  int v108; 
  const char *v109; 
  unsigned int v110; 
  unsigned int v111; 
  __int64 v112; 
  __int64 v113; 
  const char *v114; 
  __int16 v115; 
  unsigned int v116; 
  __int64 v117; 
  const char *v118; 
  unsigned __int64 v119; 
  const char *v120; 
  char *v121; 
  __int64 v122; 
  char *v123; 
  _QWORD *v124; 
  unsigned int v125; 
  _WORD *v126; 
  signed __int64 v127; 
  _WORD *v128; 
  unsigned __int64 v129; 
  _QWORD *v130; 
  _DWORD *v131; 
  const char *v132; 
  unsigned int v133; 
  char v134; 
  unsigned int v135; 
  __int64 v136; 
  __int64 v137; 
  char *v138; 
  unsigned __int64 v139; 
  unsigned __int64 v140; 
  __int64 v141; 
  unsigned int v142; 
  size_t v143; 
  _BYTE *v144; 
  void *v145; 
  _BYTE *v146; 
  const char *v147; 
  const char *v148; 
  const char *v149; 
  const char *v150; 
  const char *v151; 
  char *v152; 
  const char *v153; 
  int v154; 
  unsigned __int64 v155; 
  unsigned __int64 v156; 
  const char *v157; 
  unsigned int v158; 
  unsigned int v159; 
  unsigned __int64 v160; 
  const char *v161; 
  const char *v162; 
  unsigned int v163; 
  __int64 v164; 
  __int64 v165; 
  const char *v166; 
  const char *v167; 
  bool v168; 
  unsigned int v169; 
  char *v170; 
  _QWORD *v171; 
  __int64 v172; 
  unsigned int v173; 
  _WORD *v174; 
  signed __int64 v175; 
  unsigned __int64 v176; 
  _WORD *v177; 
  _QWORD *v178; 
  _DWORD *v179; 
  const char *v180; 
  unsigned int v181; 
  char v182; 
  unsigned int v183; 
  __int64 v184; 
  __int64 v185; 
  char *v186; 
  unsigned __int64 v187; 
  unsigned __int64 v188; 
  __int64 v189; 
  __int64 v190; 
  size_t v191; 
  char *v192; 
  size_t v193; 
  char *v194; 
  const char *v196; 
  char *v197; 
  const char *v198; 
  const char *v199; 
  const char *v200; 
  const char *v201; 
  int accelerationa; 
  int accelerationb; 
  int accelerationc; 
  int accelerationd; 
  int acceleratione; 

  v6 = 1;
  v7 = inputSize;
  if ( acceleration >= 1 )
    v6 = acceleration;
  accelerationa = v6;
  memset_0(state, 0, 0x4020ui64);
  v10 = 0;
  if ( (unsigned int)v7 <= 0x7E000000 )
    v11 = (int)v7 / 255 + v7 + 16;
  else
    v11 = 0;
  v12 = *((unsigned int *)state + 4096);
  if ( maxOutputSize < v11 )
  {
    v197 = &dest[maxOutputSize];
    if ( (int)v7 < 65547 )
    {
      v101 = &source[v7];
      v102 = &source[-v12];
      v198 = &source[v7];
      v103 = &source[v7 - 11];
      v14 = source;
      v104 = &source[v7 - 5];
      v105 = dest;
      if ( (unsigned int)v7 > 0x7E000000 )
        return v10;
      *((_DWORD *)state + 4102) = v7;
      *((_DWORD *)state + 4096) = v7 + v12;
      *((_WORD *)state + 8195) = 3;
      if ( (int)v7 >= 13 )
      {
        v106 = v14 + 1;
        *((_WORD *)state + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)source) >> 19)) = (_WORD)v14 - (_WORD)v102;
        v107 = (unsigned int)(-1640531535 * *(_DWORD *)(v14 + 1)) >> 19;
        v108 = accelerationa << 6;
        accelerationd = accelerationa << 6;
LABEL_113:
        v109 = v106;
        v110 = 1;
        v111 = v108;
        while ( 1 )
        {
          v112 = v110;
          v113 = 2 * v107;
          v110 = v111 >> 6;
          v114 = v109;
          v115 = (_WORD)v109 - (_WORD)v102;
          v109 += v112;
          ++v111;
          if ( v109 > v103 )
            break;
          v116 = -1640531535 * *(_DWORD *)v109;
          v117 = *(unsigned __int16 *)((char *)state + v113);
          *(_WORD *)((char *)state + v113) = v115;
          v118 = &v102[v117];
          v107 = v116 >> 19;
          if ( *(_DWORD *)v118 == *(_DWORD *)v114 )
          {
            if ( v118 > source && v114 > v14 )
            {
              do
              {
                v119 = (unsigned __int64)(v118 - 1);
                v120 = v114 - 1;
                if ( *(v114 - 1) != *(v118 - 1) )
                  break;
                --v114;
                --v118;
              }
              while ( v120 > v14 && v119 > (unsigned __int64)source );
            }
            v121 = &dest[maxOutputSize];
            v122 = (unsigned int)((_DWORD)v114 - (_DWORD)v14);
            v123 = v105;
            v124 = v105 + 1;
            if ( (char *)v124 + (unsigned int)v122 / 0xFF + v122 + 8 > v197 )
              return 0;
            if ( (unsigned int)v122 < 0xF )
            {
              *v123 = 16 * ((_BYTE)v114 - (_BYTE)v14);
            }
            else
            {
              v125 = v122 - 15;
              *v123 = -16;
              if ( (int)v122 - 15 >= 255 )
              {
                memset(v124, 255, v125 / 0xFF);
                v124 = (_QWORD *)((char *)v124 + v125 / 0xFF);
                LOBYTE(v125) = v125 / 0xFF + v125;
              }
              *(_BYTE *)v124 = v125;
              v124 = (_QWORD *)((char *)v124 + 1);
              v121 = &dest[maxOutputSize];
            }
            v126 = (_WORD *)((char *)v124 + (unsigned int)((_DWORD)v114 - (_DWORD)v14));
            v127 = v14 - (const char *)v124;
            do
            {
              *v124 = *(_QWORD *)((char *)v124 + v127);
              ++v124;
            }
            while ( v124 < (_QWORD *)v126 );
            v128 = v126;
            v129 = (unsigned __int64)(v104 - 7);
            while ( 2 )
            {
              v130 = v114 + 4;
              v131 = v118 + 4;
              *v128 = (_WORD)v114 - (_WORD)v118;
              v105 = (char *)(v128 + 1);
              v132 = v114 + 4;
              if ( (unsigned __int64)(v114 + 4) >= v129 )
              {
LABEL_131:
                if ( (unsigned __int64)v132 >= v129 )
                {
LABEL_134:
                  if ( v132 < v104 - 3 && *v131 == *(_DWORD *)v132 )
                  {
                    v132 += 4;
                    ++v131;
                  }
                  if ( v132 < v104 - 1 && *(_WORD *)v131 == *(_WORD *)v132 )
                  {
                    v132 += 2;
                    v131 = (_DWORD *)((char *)v131 + 2);
                  }
                  if ( v132 < v104 && *(_BYTE *)v131 == *v132 )
                    LODWORD(v132) = (_DWORD)v132 + 1;
                  v133 = (_DWORD)v132 - (_DWORD)v130;
                  v10 = 0;
                }
                else
                {
                  while ( *(_QWORD *)v132 == *(_QWORD *)v131 )
                  {
                    v132 += 8;
                    v131 += 2;
                    if ( (unsigned __int64)v132 >= v129 )
                      goto LABEL_134;
                  }
                  _BitScanForward64(&v139, *(_QWORD *)v132 ^ *(_QWORD *)v131);
                  v10 = 0;
                  v133 = ((unsigned int)v139 >> 3) + (_DWORD)v132 - (_DWORD)v130;
                }
              }
              else
              {
                if ( *v130 == *(_QWORD *)v131 )
                {
                  v132 = v114 + 12;
                  v131 = v118 + 12;
                  goto LABEL_131;
                }
                _BitScanForward64((unsigned __int64 *)&v130, *v130 ^ *(_QWORD *)v131);
                v10 = 0;
                v133 = (unsigned int)v130 >> 3;
              }
              v114 += v133 + 4;
              if ( &v105[((unsigned __int64)v133 >> 8) + 6] > v121 )
                return v10;
              v134 = *v123;
              if ( v133 < 0xF )
              {
                *v123 = v133 + v134;
              }
              else
              {
                v135 = v133 - 15;
                *v123 = v134 + 15;
                *(_DWORD *)v105 = -1;
                if ( v135 >= 0x3FC )
                {
                  v136 = v135 / 0x3FC;
                  do
                  {
                    v105 += 4;
                    v135 -= 1020;
                    *(_DWORD *)v105 = -1;
                    --v136;
                  }
                  while ( v136 );
                }
                v137 = v135 / 0xFF;
                v138 = &v105[v137];
                *v138 = v135 + v137;
                v105 = v138 + 1;
              }
              v14 = v114;
              if ( v114 >= v103 )
                goto LABEL_159;
              *((_WORD *)state + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v114 - 2)) >> 19)) = (_WORD)v114 - 2 - (_WORD)v102;
              v140 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v114) >> 19;
              v141 = *((unsigned __int16 *)state + v140);
              *((_WORD *)state + v140) = (_WORD)v114 - (_WORD)v102;
              v118 = &v102[v141];
              if ( *(_DWORD *)v118 != *(_DWORD *)v114 )
              {
                v142 = -1640531535 * *(_DWORD *)(v114 + 1);
                v106 = v114 + 1;
                v108 = accelerationd;
                v107 = v142 >> 19;
                goto LABEL_113;
              }
              v123 = v105;
              v128 = v105 + 1;
              *v123 = 0;
              continue;
            }
          }
        }
        v10 = 0;
LABEL_159:
        v101 = v198;
      }
      v56 = v101 - v14;
      if ( &v105[v56 + 1 + (v56 + 240) / 0xFF] > v197 )
        return v10;
      if ( v56 < 0xF )
      {
        v61 = v105 + 1;
        *v105 = 16 * v56;
        v60 = (_DWORD)v105 + 1;
      }
      else
      {
        *v105 = -16;
        v143 = v56 - 15;
        v144 = v105 + 1;
        if ( v56 - 15 >= 0xFF )
        {
          v145 = v144;
          v144 += v143 / 0xFF;
          memset(v145, 255, v143 / 0xFF);
          v143 %= 0xFFui64;
        }
        v146 = v144;
        *v144 = v143;
        v60 = (_DWORD)v144 + 1;
        v61 = v146 + 1;
      }
      goto LABEL_60;
    }
    v147 = &source[v7];
    v148 = &source[-v12];
    v201 = &source[v7];
    v149 = &source[v7 - 11];
    v150 = source;
    v199 = v149;
    v151 = &source[v7 - 5];
    v152 = dest;
    if ( (unsigned int)v7 > 0x7E000000 )
      return v10;
    *((_DWORD *)state + 4102) = v7;
    *((_DWORD *)state + 4096) = v7 + v12;
    *((_WORD *)state + 8195) = 2;
    if ( (int)v7 >= 13 )
    {
      v153 = v150 + 1;
      v154 = v6 << 6;
      acceleratione = v154;
      *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)source) >> 52)) = (_DWORD)v150 - (_DWORD)v148;
      v155 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v150 + 1);
LABEL_169:
      v156 = v155 >> 52;
      v157 = v153;
      v158 = 1;
      v159 = v154;
      while ( 1 )
      {
        v160 = v156;
        v161 = v157;
        v162 = v157;
        v163 = (_DWORD)v157 - (_DWORD)v148;
        v164 = *((unsigned int *)state + v156);
        v165 = v158;
        v158 = v159 >> 6;
        v157 += v165;
        ++v159;
        if ( v157 > v149 )
          break;
        v166 = &v148[v164];
        v156 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v157) >> 52;
        *((_DWORD *)state + v160) = v163;
        if ( (int)v164 + 0xFFFF >= v163 && *(_DWORD *)v166 == *(_DWORD *)v162 )
        {
          v10 = 0;
          if ( v166 > source && v161 > v150 )
          {
            do
            {
              v167 = v162 - 1;
              if ( *(v162 - 1) != *(v166 - 1) )
                break;
              --v162;
              v168 = --v166 > source;
            }
            while ( v168 && v167 > v150 );
          }
          v169 = (_DWORD)v162 - (_DWORD)v150;
          v170 = v152;
          v171 = v152 + 1;
          v172 = (unsigned int)((_DWORD)v162 - (_DWORD)v150);
          if ( (char *)v171 + v172 + ((int)v162 - (int)v150) / 0xFFu + 8 > v197 )
            return v10;
          if ( v169 < 0xF )
          {
            *v170 = 16 * v169;
          }
          else
          {
            v173 = v169 - 15;
            *v170 = -16;
            if ( (int)(v169 - 15) >= 255 )
            {
              memset(v171, 255, v173 / 0xFF);
              v171 = (_QWORD *)((char *)v171 + v173 / 0xFF);
              LOBYTE(v173) = v173 / 0xFF + v173;
            }
            *(_BYTE *)v171 = v173;
            v171 = (_QWORD *)((char *)v171 + 1);
          }
          v174 = (_WORD *)((char *)v171 + v172);
          v175 = v150 - (const char *)v171;
          do
          {
            *v171 = *(_QWORD *)((char *)v171 + v175);
            ++v171;
          }
          while ( v171 < (_QWORD *)v174 );
          v176 = (unsigned __int64)(v151 - 7);
          v177 = v174;
          while ( 2 )
          {
            v178 = v162 + 4;
            v179 = v166 + 4;
            *v177 = (_WORD)v162 - (_WORD)v166;
            v180 = v162 + 4;
            v152 = (char *)(v177 + 1);
            if ( (unsigned __int64)(v162 + 4) >= v176 )
            {
LABEL_189:
              if ( (unsigned __int64)v180 >= v176 )
              {
LABEL_192:
                if ( v180 < v151 - 3 && *v179 == *(_DWORD *)v180 )
                {
                  v180 += 4;
                  ++v179;
                }
                if ( v180 < v151 - 1 && *(_WORD *)v179 == *(_WORD *)v180 )
                {
                  v180 += 2;
                  v179 = (_DWORD *)((char *)v179 + 2);
                }
                if ( v180 < v151 && *(_BYTE *)v179 == *v180 )
                  LODWORD(v180) = (_DWORD)v180 + 1;
                v181 = (_DWORD)v180 - (_DWORD)v178;
              }
              else
              {
                while ( *(_QWORD *)v180 == *(_QWORD *)v179 )
                {
                  v180 += 8;
                  v179 += 2;
                  if ( (unsigned __int64)v180 >= v176 )
                    goto LABEL_192;
                }
                _BitScanForward64(&v187, *(_QWORD *)v180 ^ *(_QWORD *)v179);
                v181 = ((unsigned int)v187 >> 3) + (_DWORD)v180 - (_DWORD)v178;
              }
            }
            else
            {
              if ( *v178 == *(_QWORD *)v179 )
              {
                v180 = v162 + 12;
                v179 = v166 + 12;
                goto LABEL_189;
              }
              _BitScanForward64((unsigned __int64 *)&v178, *v178 ^ *(_QWORD *)v179);
              v181 = (unsigned int)v178 >> 3;
            }
            v162 += v181 + 4;
            if ( &v152[((unsigned __int64)v181 >> 8) + 6] > v197 )
              return v10;
            v182 = *v170;
            if ( v181 < 0xF )
            {
              *v170 = v182 + v181;
            }
            else
            {
              v183 = v181 - 15;
              *v170 = v182 + 15;
              *(_DWORD *)v152 = -1;
              if ( v183 >= 0x3FC )
              {
                v184 = v183 / 0x3FC;
                do
                {
                  v152 += 4;
                  v183 -= 1020;
                  *(_DWORD *)v152 = -1;
                  --v184;
                }
                while ( v184 );
              }
              v185 = v183 / 0xFF;
              v186 = &v152[v185];
              *v186 = v183 + v185;
              v152 = v186 + 1;
            }
            v150 = v162;
            if ( v162 >= v199 )
              goto LABEL_217;
            *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v162 - 2)) >> 52)) = (_DWORD)v162 - 2 - (_DWORD)v148;
            v188 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v162) >> 52;
            v189 = *((unsigned int *)state + v188);
            *((_DWORD *)state + v188) = (_DWORD)v162 - (_DWORD)v148;
            v166 = &v148[v189];
            if ( (int)v189 + 0xFFFF < (unsigned int)((_DWORD)v162 - (_DWORD)v148) || *(_DWORD *)v166 != *(_DWORD *)v162 )
            {
              v190 = *(_QWORD *)(v162 + 1);
              v153 = v162 + 1;
              v154 = acceleratione;
              v149 = v199;
              v155 = 0xCF1BBCDCBB000000ui64 * v190;
              goto LABEL_169;
            }
            v170 = v152;
            v177 = v152 + 1;
            *v170 = 0;
            continue;
          }
        }
        v149 = v199;
      }
      v10 = 0;
LABEL_217:
      v147 = v201;
    }
    v191 = v147 - v150;
    v192 = v152;
    if ( &v152[v191 + 1 + (v191 + 240) / 0xFF] <= v197 )
    {
      if ( v191 < 0xF )
      {
        *v152 = 16 * v191;
      }
      else
      {
        *v152 = -16;
        v193 = v191 - 15;
        ++v152;
        if ( v191 - 15 >= 0xFF )
        {
          v194 = v152;
          v152 += v193 / 0xFF;
          memset(v194, 255, v193 / 0xFF);
          v193 %= 0xFFui64;
        }
        v192 = v152;
        *v152 = v193;
      }
      memcpy_0(v192 + 1, v150, v191);
      return (unsigned int)((_DWORD)v152 + 1 + v191 - (_DWORD)dest);
    }
    return v10;
  }
  v13 = &source[v7];
  v14 = source;
  v200 = &source[v7];
  v15 = &source[v7 - 5];
  if ( (int)v7 >= 65547 )
  {
    v62 = source;
    v63 = v13 - 11;
    v18 = dest;
    v64 = &v62[-v12];
    v196 = v13 - 11;
    if ( (unsigned int)v7 > 0x7E000000 )
      return v10;
    *((_DWORD *)state + 4102) = v7;
    *((_DWORD *)state + 4096) = v7 + v12;
    *((_WORD *)state + 8195) = 2;
    if ( (int)v7 < 13 )
      goto LABEL_54;
    v65 = v14 + 1;
    v66 = v6 << 6;
    accelerationc = v66;
    *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)source) >> 52)) = (_DWORD)v14 - (_DWORD)v64;
    v67 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v14 + 1);
LABEL_64:
    v68 = v67 >> 52;
    v69 = v65;
    v70 = 1;
    v71 = v66;
    while ( 1 )
    {
      v72 = v68;
      v73 = v69;
      v74 = v69;
      v75 = (_DWORD)v69 - (_DWORD)v64;
      v76 = *((unsigned int *)state + v68);
      v77 = v70;
      v70 = v71 >> 6;
      v69 += v77;
      ++v71;
      if ( v69 > v63 )
      {
LABEL_53:
        v13 = v200;
LABEL_54:
        v56 = v13 - v14;
        v57 = v18;
        if ( v56 < 0xF )
        {
          *v18 = 16 * v56;
        }
        else
        {
          *v18 = -16;
          v58 = v56 - 15;
          ++v18;
          if ( v56 - 15 >= 0xFF )
          {
            v59 = v18;
            v18 += v58 / 0xFF;
            memset(v59, 255, v58 / 0xFF);
            v58 %= 0xFFui64;
          }
          v57 = v18;
          *v18 = v58;
        }
        v60 = (_DWORD)v18 + 1;
        v61 = v57 + 1;
LABEL_60:
        memcpy_0(v61, v14, v56);
        return (unsigned int)(v56 + v60 - (_DWORD)dest);
      }
      v78 = &v64[v76];
      v68 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v69) >> 52;
      *((_DWORD *)state + v72) = v75;
      if ( (int)v76 + 0xFFFF >= v75 && *(_DWORD *)v78 == *(_DWORD *)v74 )
        break;
      v63 = v196;
    }
    if ( v78 > source && v73 > v14 )
    {
      do
      {
        v79 = (unsigned __int64)(v74 - 1);
        if ( *(v74 - 1) != *(v78 - 1) )
          break;
        --v74;
        v80 = --v78 > source;
      }
      while ( v80 && v79 > (unsigned __int64)v14 );
    }
    v81 = v18;
    v82 = (_DWORD)v74 - (_DWORD)v14;
    v83 = v18 + 1;
    if ( (unsigned int)((_DWORD)v74 - (_DWORD)v14) < 0xF )
    {
      *v81 = 16 * v82;
    }
    else
    {
      v84 = v82 - 15;
      *v81 = -16;
      if ( (int)(v82 - 15) >= 255 )
      {
        memset(v83, 255, v84 / 0xFF);
        v83 = (_QWORD *)((char *)v83 + v84 / 0xFF);
        LOBYTE(v84) = v84 / 0xFF + v84;
      }
      *(_BYTE *)v83 = v84;
      v83 = (_QWORD *)((char *)v83 + 1);
    }
    v85 = (_WORD *)((char *)v83 + v82);
    v86 = v14 - (const char *)v83;
    do
    {
      *v83 = *(_QWORD *)((char *)v83 + v86);
      ++v83;
    }
    while ( v83 < (_QWORD *)v85 );
    v87 = (unsigned __int64)(v15 - 7);
    v88 = v85;
    while ( 1 )
    {
      v89 = v74 + 4;
      v90 = v78 + 4;
      *v88 = (_WORD)v74 - (_WORD)v78;
      v91 = v74 + 4;
      v18 = (char *)(v88 + 1);
      if ( (unsigned __int64)(v74 + 4) < v87 )
      {
        if ( *v90 != *v89 )
        {
          _BitScanForward64((unsigned __int64 *)&v89, *v90 ^ *v89);
          v92 = (unsigned int)v89 >> 3;
          goto LABEL_96;
        }
        v91 = v74 + 12;
        v90 = v78 + 12;
      }
      if ( (unsigned __int64)v91 >= v87 )
      {
LABEL_86:
        if ( v91 < v15 - 3 && *(_DWORD *)v90 == *(_DWORD *)v91 )
        {
          v91 += 4;
          v90 = (_QWORD *)((char *)v90 + 4);
        }
        if ( v91 < v15 - 1 && *(_WORD *)v90 == *(_WORD *)v91 )
        {
          v91 += 2;
          v90 = (_QWORD *)((char *)v90 + 2);
        }
        if ( v91 < v15 && *(_BYTE *)v90 == *v91 )
          LODWORD(v91) = (_DWORD)v91 + 1;
        v92 = (_DWORD)v91 - (_DWORD)v89;
      }
      else
      {
        while ( *v90 == *(_QWORD *)v91 )
        {
          v91 += 8;
          ++v90;
          if ( (unsigned __int64)v91 >= v87 )
            goto LABEL_86;
        }
        _BitScanForward64(&v97, *v90 ^ *(_QWORD *)v91);
        v92 = (_DWORD)v91 + ((unsigned int)v97 >> 3) - (_DWORD)v89;
      }
LABEL_96:
      v93 = *v81;
      v74 += v92 + 4;
      if ( v92 < 0xF )
      {
        *v81 = v92 + v93;
      }
      else
      {
        v94 = v92 - 15;
        *v81 = v93 + 15;
        *(_DWORD *)v18 = -1;
        if ( v94 >= 0x3FC )
        {
          v95 = v94 / 0x3FC;
          do
          {
            v18 += 4;
            v94 -= 1020;
            *(_DWORD *)v18 = -1;
            --v95;
          }
          while ( v95 );
        }
        v96 = &v18[v94 / 0xFF];
        *v96 = v94 / 0xFF + v94;
        v18 = v96 + 1;
      }
      v14 = v74;
      if ( v74 >= v196 )
        goto LABEL_53;
      *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v74 - 2)) >> 52)) = (_DWORD)v74 - 2 - (_DWORD)v64;
      v98 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v74) >> 52;
      v99 = *((unsigned int *)state + v98);
      *((_DWORD *)state + v98) = (_DWORD)v74 - (_DWORD)v64;
      v78 = &v64[v99];
      if ( (int)v99 + 0xFFFF < (unsigned int)((_DWORD)v74 - (_DWORD)v64) || *(_DWORD *)v78 != *(_DWORD *)v74 )
      {
        v100 = *(_QWORD *)(v74 + 1);
        v65 = v74 + 1;
        v66 = accelerationc;
        v63 = v196;
        v67 = 0xCF1BBCDCBB000000ui64 * v100;
        goto LABEL_64;
      }
      v81 = v18;
      v88 = v18 + 1;
      *v81 = 0;
    }
  }
  v16 = source;
  v17 = v13 - 11;
  v18 = dest;
  v19 = &v16[-v12];
  if ( (unsigned int)v7 <= 0x7E000000 )
  {
    *((_DWORD *)state + 4102) = v7;
    *((_DWORD *)state + 4096) = v7 + v12;
    *((_WORD *)state + 8195) = 3;
    if ( (int)v7 >= 13 )
    {
      v20 = v14 + 1;
      *((_WORD *)state + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)source) >> 19)) = (_WORD)v14 - (_WORD)v19;
      v21 = (unsigned int)(-1640531535 * *(_DWORD *)(v14 + 1)) >> 19;
      v22 = accelerationa << 6;
      accelerationb = accelerationa << 6;
LABEL_11:
      v23 = v20;
      v24 = 1;
      v25 = v22;
      do
      {
        v26 = v24;
        v27 = 2 * v21;
        v24 = v25 >> 6;
        v28 = v23;
        v29 = (_WORD)v23 - (_WORD)v19;
        v23 += v26;
        ++v25;
        if ( v23 > v17 )
          goto LABEL_53;
        v30 = -1640531535 * *(_DWORD *)v23;
        v31 = *(unsigned __int16 *)((char *)state + v27);
        *(_WORD *)((char *)state + v27) = v29;
        v32 = &v19[v31];
        v21 = v30 >> 19;
      }
      while ( *(_DWORD *)v32 != *(_DWORD *)v28 );
      if ( v28 > v14 && v32 > source )
      {
        do
        {
          v33 = (unsigned __int64)(v32 - 1);
          v34 = v28 - 1;
          if ( *(v28 - 1) != *(v32 - 1) )
            break;
          --v28;
          --v32;
        }
        while ( v34 > v14 && v33 > (unsigned __int64)source );
      }
      v35 = v18;
      v36 = (_DWORD)v28 - (_DWORD)v14;
      v37 = v18 + 1;
      if ( (unsigned int)((_DWORD)v28 - (_DWORD)v14) < 0xF )
      {
        *v35 = 16 * v36;
      }
      else
      {
        v38 = v36 - 15;
        *v35 = -16;
        if ( (int)(v36 - 15) >= 255 )
        {
          memset(v37, 255, v38 / 0xFF);
          v37 = (_QWORD *)((char *)v37 + v38 / 0xFF);
          LOBYTE(v38) = v38 / 0xFF + v38;
        }
        *(_BYTE *)v37 = v38;
        v37 = (_QWORD *)((char *)v37 + 1);
      }
      v39 = (_WORD *)((char *)v37 + v36);
      v40 = v14 - (const char *)v37;
      do
      {
        *v37 = *(_QWORD *)((char *)v37 + v40);
        ++v37;
      }
      while ( v37 < (_QWORD *)v39 );
      v41 = v39;
      v42 = (unsigned __int64)(v15 - 7);
      while ( 1 )
      {
        v43 = v28 + 4;
        v44 = v32 + 4;
        *v41 = (_WORD)v28 - (_WORD)v32;
        v45 = v28 + 4;
        v18 = (char *)(v41 + 1);
        if ( (unsigned __int64)(v28 + 4) < v42 )
        {
          if ( *v43 != *v44 )
          {
            _BitScanForward64((unsigned __int64 *)&v43, *v43 ^ *v44);
            v46 = (unsigned int)v43 >> 3;
            goto LABEL_41;
          }
          v45 = v28 + 12;
          v44 = v32 + 12;
        }
        if ( (unsigned __int64)v45 >= v42 )
        {
LABEL_31:
          if ( v45 < v15 - 3 && *(_DWORD *)v44 == *(_DWORD *)v45 )
          {
            v45 += 4;
            v44 = (_QWORD *)((char *)v44 + 4);
          }
          if ( v45 < v15 - 1 && *(_WORD *)v44 == *(_WORD *)v45 )
          {
            v45 += 2;
            v44 = (_QWORD *)((char *)v44 + 2);
          }
          if ( v45 < v15 && *(_BYTE *)v44 == *v45 )
            LODWORD(v45) = (_DWORD)v45 + 1;
          v46 = (_DWORD)v45 - (_DWORD)v43;
        }
        else
        {
          while ( *(_QWORD *)v45 == *v44 )
          {
            v45 += 8;
            ++v44;
            if ( (unsigned __int64)v45 >= v42 )
              goto LABEL_31;
          }
          _BitScanForward64(&v52, *(_QWORD *)v45 ^ *v44);
          v46 = (_DWORD)v45 + ((unsigned int)v52 >> 3) - (_DWORD)v43;
        }
LABEL_41:
        v47 = *v35;
        v28 += v46 + 4;
        if ( v46 < 0xF )
        {
          *v35 = v47 + v46;
        }
        else
        {
          v48 = v46 - 15;
          *v35 = v47 + 15;
          *(_DWORD *)v18 = -1;
          if ( v48 >= 0x3FC )
          {
            v49 = v48 / 0x3FC;
            do
            {
              v18 += 4;
              v48 -= 1020;
              *(_DWORD *)v18 = -1;
              --v49;
            }
            while ( v49 );
          }
          v50 = v48 / 0xFF;
          v51 = &v18[v50];
          *v51 = v48 + v50;
          v18 = v51 + 1;
        }
        v14 = v28;
        if ( v28 >= v17 )
          goto LABEL_53;
        *((_WORD *)state + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v28 - 2)) >> 19)) = (_WORD)v28 - 2 - (_WORD)v19;
        v53 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v28) >> 19;
        v54 = *((unsigned __int16 *)state + v53);
        *((_WORD *)state + v53) = (_WORD)v28 - (_WORD)v19;
        v32 = &v19[v54];
        if ( *(_DWORD *)v32 != *(_DWORD *)v28 )
        {
          v55 = -1640531535 * *(_DWORD *)(v28 + 1);
          v20 = v28 + 1;
          v22 = accelerationb;
          v21 = v55 >> 19;
          goto LABEL_11;
        }
        v35 = v18;
        v41 = v18 + 1;
        *v35 = 0;
      }
    }
    goto LABEL_54;
  }
  return v10;
}

/*
==============
indyfs_LZ4_compress_fast_extState_fastReset
==============
*/
__int64 indyfs_LZ4_compress_fast_extState_fastReset(void *state, const char *src, char *dst, int srcSize, int dstCapacity, int acceleration)
{
  int v6; 
  __int64 v7; 
  char *v8; 
  const char *v9; 
  unsigned int v11; 
  int v12; 
  __int16 v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  unsigned __int64 v17; 
  const char *v18; 
  const char *v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned __int16 *v22; 
  const char *v23; 
  unsigned int v24; 
  __int64 v25; 
  __int16 v26; 
  __int64 v27; 
  __int64 v28; 
  const char *v29; 
  __int16 v30; 
  const char *v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  const char *v34; 
  char *v35; 
  unsigned int v36; 
  _QWORD *v37; 
  unsigned int v38; 
  _WORD *v39; 
  signed __int64 v40; 
  unsigned __int64 v41; 
  _WORD *v42; 
  _QWORD *v43; 
  _QWORD *v44; 
  _DWORD *v45; 
  unsigned int v46; 
  char v47; 
  unsigned int v48; 
  __int64 v49; 
  char *v50; 
  unsigned __int64 v51; 
  __int64 v52; 
  unsigned int v53; 
  size_t v54; 
  char *v55; 
  size_t v56; 
  char *v57; 
  __int16 v58; 
  const char *v59; 
  const char *v60; 
  const char *v61; 
  const char *v62; 
  unsigned int v63; 
  const char *v64; 
  __int64 v65; 
  unsigned int v66; 
  __int64 v67; 
  __int16 v68; 
  const char *v69; 
  __int64 v70; 
  __int64 v71; 
  unsigned int v72; 
  const char *v73; 
  const char *v74; 
  bool v75; 
  char *v76; 
  unsigned int v77; 
  _QWORD *v78; 
  unsigned int v79; 
  _WORD *v80; 
  signed __int64 v81; 
  unsigned __int64 v82; 
  _WORD *v83; 
  _QWORD *v84; 
  _QWORD *v85; 
  const char *v86; 
  unsigned int v87; 
  char v88; 
  unsigned int v89; 
  __int64 v90; 
  __int64 v91; 
  char *v92; 
  unsigned __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  size_t v96; 
  char *v97; 
  size_t v98; 
  char *v99; 
  int v100; 
  const char *v101; 
  unsigned __int64 v102; 
  const char *v103; 
  const char *v104; 
  const char *v105; 
  int v106; 
  unsigned __int64 v107; 
  unsigned __int64 v108; 
  const char *v109; 
  unsigned int v110; 
  unsigned int v111; 
  unsigned __int64 v112; 
  const char *v113; 
  unsigned int v114; 
  __int64 v115; 
  const char *v116; 
  unsigned __int64 v117; 
  const char *v118; 
  char *v119; 
  unsigned int v120; 
  _QWORD *v121; 
  unsigned int v122; 
  _WORD *v123; 
  signed __int64 v124; 
  unsigned __int64 v125; 
  _WORD *v126; 
  _QWORD *v127; 
  _QWORD *v128; 
  _DWORD *v129; 
  unsigned int v130; 
  char v131; 
  unsigned int v132; 
  __int64 v133; 
  char *v134; 
  unsigned __int64 v135; 
  unsigned __int64 v136; 
  __int64 v137; 
  __int64 v138; 
  size_t v139; 
  char *v140; 
  size_t v141; 
  char *v142; 
  unsigned __int64 v143; 
  __int64 v144; 
  const char *v145; 
  const char *v146; 
  unsigned __int64 v147; 
  const char *v148; 
  const char *v149; 
  unsigned __int16 *v150; 
  __int64 v151; 
  unsigned int v152; 
  const char *v153; 
  unsigned int v154; 
  __int64 v155; 
  __int16 v156; 
  __int64 v157; 
  __int64 v158; 
  const char *v159; 
  __int16 v160; 
  const char *v161; 
  unsigned int v162; 
  bool v163; 
  unsigned __int64 v164; 
  const char *v165; 
  char *v166; 
  unsigned int v167; 
  _QWORD *v168; 
  __int64 v169; 
  unsigned int v170; 
  _WORD *v171; 
  signed __int64 v172; 
  _WORD *v173; 
  unsigned __int64 v174; 
  _QWORD *v175; 
  _DWORD *v176; 
  _DWORD *v177; 
  unsigned int v178; 
  char v179; 
  unsigned int v180; 
  __int64 v181; 
  __int64 v182; 
  char *v183; 
  unsigned __int64 v184; 
  __int64 v185; 
  unsigned int v186; 
  size_t v187; 
  char *v188; 
  size_t v189; 
  char *v190; 
  const char *v191; 
  const char *v192; 
  unsigned __int64 v193; 
  unsigned __int64 v194; 
  unsigned int v195; 
  const char *v196; 
  __int64 v197; 
  unsigned int v198; 
  __int64 v199; 
  __int64 v200; 
  const char *v201; 
  __int16 v202; 
  __int64 v203; 
  unsigned int v204; 
  const char *v205; 
  unsigned __int64 v206; 
  const char *v207; 
  __int64 v208; 
  char *v209; 
  _QWORD *v210; 
  unsigned int v211; 
  _WORD *v212; 
  signed __int64 v213; 
  unsigned __int64 v214; 
  _WORD *v215; 
  _QWORD *v216; 
  _QWORD *v217; 
  _DWORD *v218; 
  unsigned int v219; 
  char v220; 
  unsigned int v221; 
  __int64 v222; 
  __int64 v223; 
  char *v224; 
  unsigned __int64 v225; 
  __int64 v226; 
  __int64 v227; 
  size_t v228; 
  char *v229; 
  size_t v230; 
  char *v231; 
  int v232; 
  char *v233; 
  const char *v234; 
  unsigned __int64 v235; 
  const char *v236; 
  const unsigned __int8 *srcBase; 
  unsigned __int64 v238; 
  const char *v239; 
  int v240; 
  const char *v241; 
  unsigned int v242; 
  unsigned int v243; 
  unsigned __int64 v244; 
  unsigned __int64 v245; 
  const char *v246; 
  const char *v247; 
  unsigned int v248; 
  __int64 v249; 
  __int64 v250; 
  const unsigned __int8 *v251; 
  unsigned __int64 v252; 
  const char *v253; 
  _QWORD *v254; 
  unsigned int v255; 
  char *v256; 
  __int64 v257; 
  unsigned int v258; 
  _WORD *v259; 
  signed __int64 v260; 
  unsigned __int64 v261; 
  _QWORD *v262; 
  _DWORD *v263; 
  _DWORD *v264; 
  unsigned int v265; 
  char v266; 
  unsigned int v267; 
  __int64 v268; 
  __int64 v269; 
  char *v270; 
  unsigned __int64 v271; 
  unsigned __int64 v272; 
  __int64 v273; 
  size_t v274; 
  size_t v275; 
  char *v276; 
  void *v277; 
  const char *v279; 
  const char *v280; 
  unsigned __int64 v281; 
  unsigned __int64 v282; 
  const char *v283; 
  unsigned __int64 v284; 
  const char *v285; 
  const char *v286; 
  unsigned int dstCapacitya; 
  unsigned int dstCapacityb; 
  int accelerationa; 
  int accelerationb; 
  int accelerationc; 
  int accelerationd; 
  int acceleratione; 
  int accelerationf; 

  v6 = 1;
  v7 = srcSize;
  v8 = dst;
  v9 = src;
  if ( acceleration >= 1 )
    v6 = acceleration;
  v11 = 0;
  accelerationa = v6;
  if ( (unsigned int)v7 <= 0x7E000000 )
    v12 = (int)v7 / 255 + v7 + 16;
  else
    v12 = 0;
  v13 = *((_WORD *)state + 8195);
  if ( dstCapacity >= v12 )
  {
    if ( (int)v7 < 65547 )
    {
      if ( v13 && (v13 != 3 || (unsigned int)(v7 + *((_DWORD *)state + 4096)) >= 0xFFFF || (int)v7 >= 4096) )
      {
        memset_0(state, 0, 0x4000ui64);
        v9 = src;
        v11 = 0;
        *((_DWORD *)state + 4096) = 0;
        *((_WORD *)state + 8195) = 0;
      }
      *((_QWORD *)state + 2050) = 0i64;
      *((_QWORD *)state + 2049) = 0i64;
      *((_DWORD *)state + 4102) = 0;
      v14 = *((unsigned int *)state + 4096);
      dstCapacitya = v14;
      if ( (_DWORD)v14 )
      {
        v15 = &v9[v7];
        v16 = &v9[-v14];
        v279 = &v9[v7];
        v17 = (unsigned __int64)&v9[v7 - 5];
        v18 = v9;
        if ( (unsigned int)v7 <= 0x7E000000 )
        {
          *((_DWORD *)state + 4102) = v7;
          *((_DWORD *)state + 4096) += v7;
          *((_WORD *)state + 8195) = 3;
          if ( (int)v7 >= 13 )
          {
            v19 = v9 + 1;
            *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v9) >> 19)) = v14;
            v20 = (unsigned int)(-1640531535 * *(_DWORD *)(v9 + 1)) >> 19;
            v21 = v6 << 6;
            accelerationb = v21;
LABEL_17:
            v22 = (unsigned __int16 *)state;
            v23 = v19;
            v24 = 1;
            while ( 1 )
            {
              v25 = v22[v20];
              v26 = (__int16)v23;
              v27 = v24;
              v28 = (unsigned int)v20;
              v29 = v23;
              v24 = v21 >> 6;
              v23 += v27;
              v30 = v26 - (_WORD)v16;
              ++v21;
              if ( v23 > v279 - 11 )
                break;
              v31 = &v16[v25];
              v22 = (unsigned __int16 *)state;
              v20 = (unsigned int)(-1640531535 * *(_DWORD *)v23) >> 19;
              *((_WORD *)state + v28) = v30;
              v32 = dstCapacitya;
              if ( (unsigned int)v25 >= dstCapacitya )
              {
                v22 = (unsigned __int16 *)state;
                if ( *(_DWORD *)v31 == *(_DWORD *)v29 )
                {
                  if ( v31 > src && v29 > v18 )
                  {
                    do
                    {
                      v33 = (unsigned __int64)(v31 - 1);
                      v34 = v29 - 1;
                      if ( *(v29 - 1) != *(v31 - 1) )
                        break;
                      --v29;
                      --v31;
                    }
                    while ( v34 > v18 && v33 > (unsigned __int64)src );
                  }
                  v35 = v8;
                  v36 = (_DWORD)v29 - (_DWORD)v18;
                  v37 = v8 + 1;
                  if ( (unsigned int)((_DWORD)v29 - (_DWORD)v18) < 0xF )
                  {
                    *v35 = 16 * v36;
                  }
                  else
                  {
                    v38 = v36 - 15;
                    *v35 = -16;
                    if ( (int)(v36 - 15) >= 255 )
                    {
                      memset(v37, 255, v38 / 0xFF);
                      v37 = (_QWORD *)((char *)v37 + v38 / 0xFF);
                      LOBYTE(v38) = v38 / 0xFF + v38;
                    }
                    *(_BYTE *)v37 = v38;
                    v37 = (_QWORD *)((char *)v37 + 1);
                    v32 = dstCapacitya;
                  }
                  v39 = (_WORD *)((char *)v37 + v36);
                  v40 = v18 - (const char *)v37;
                  do
                  {
                    *v37 = *(_QWORD *)((char *)v37 + v40);
                    ++v37;
                  }
                  while ( v37 < (_QWORD *)v39 );
                  v15 = v279;
                  v41 = v17 - 7;
                  v42 = v39;
                  while ( 1 )
                  {
                    v43 = v29 + 4;
                    v44 = v31 + 4;
                    *v42 = (_WORD)v29 - (_WORD)v31;
                    v45 = v29 + 4;
                    v8 = (char *)(v42 + 1);
                    if ( (unsigned __int64)(v29 + 4) < v41 )
                    {
                      if ( *v43 != *v44 )
                      {
                        _BitScanForward64((unsigned __int64 *)&v43, *v43 ^ *v44);
                        v46 = (unsigned int)v43 >> 3;
                        goto LABEL_48;
                      }
                      v45 = v29 + 12;
                      v44 = v31 + 12;
                    }
                    if ( (unsigned __int64)v45 >= v41 )
                    {
LABEL_38:
                      if ( (unsigned __int64)v45 < v17 - 3 && *(_DWORD *)v44 == *v45 )
                      {
                        ++v45;
                        v44 = (_QWORD *)((char *)v44 + 4);
                      }
                      if ( (unsigned __int64)v45 < v17 - 1 && *(_WORD *)v44 == *(_WORD *)v45 )
                      {
                        v45 = (_DWORD *)((char *)v45 + 2);
                        v44 = (_QWORD *)((char *)v44 + 2);
                      }
                      if ( (unsigned __int64)v45 < v17 && *(_BYTE *)v44 == *(_BYTE *)v45 )
                        LODWORD(v45) = (_DWORD)v45 + 1;
                      v46 = (_DWORD)v45 - (_DWORD)v43;
                    }
                    else
                    {
                      while ( *(_QWORD *)v45 == *v44 )
                      {
                        v45 += 2;
                        ++v44;
                        if ( (unsigned __int64)v45 >= v41 )
                          goto LABEL_38;
                      }
                      _BitScanForward64(&v51, *(_QWORD *)v45 ^ *v44);
                      v46 = (_DWORD)v45 + ((unsigned int)v51 >> 3) - (_DWORD)v43;
                    }
LABEL_48:
                    v47 = *v35;
                    v29 += v46 + 4;
                    if ( v46 < 0xF )
                    {
                      *v35 = v47 + v46;
                    }
                    else
                    {
                      v48 = v46 - 15;
                      *v35 = v47 + 15;
                      *(_DWORD *)v8 = -1;
                      if ( v48 >= 0x3FC )
                      {
                        v49 = v48 / 0x3FC;
                        do
                        {
                          v8 += 4;
                          v48 -= 1020;
                          *(_DWORD *)v8 = -1;
                          --v49;
                        }
                        while ( v49 );
                      }
                      v50 = &v8[v48 / 0xFF];
                      *v50 = v48 / 0xFF + v48;
                      v8 = v50 + 1;
                    }
                    v18 = v29;
                    if ( v29 >= v279 - 11 )
                      goto LABEL_62;
                    *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)(v29 - 2)) >> 19)) = (_WORD)v29 - 2 - (_WORD)v16;
                    v52 = *((unsigned __int16 *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v29) >> 19));
                    *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v29) >> 19)) = (_WORD)v29 - (_WORD)v16;
                    v31 = &v16[v52];
                    if ( (unsigned int)v52 < v32 || *(_DWORD *)v31 != *(_DWORD *)v29 )
                    {
                      v53 = -1640531535 * *(_DWORD *)(v29 + 1);
                      v19 = v29 + 1;
                      v21 = accelerationb;
                      v20 = v53 >> 19;
                      goto LABEL_17;
                    }
                    v35 = v8;
                    v42 = v8 + 1;
                    *v35 = 0;
                  }
                }
              }
            }
            v15 = v279;
          }
LABEL_62:
          v54 = v15 - v18;
          v55 = v8;
          if ( v54 < 0xF )
          {
            *v8 = 16 * v54;
          }
          else
          {
            *v8 = -16;
            v56 = v54 - 15;
            ++v8;
            if ( v54 - 15 >= 0xFF )
            {
              v57 = v8;
              v8 += v56 / 0xFF;
              memset(v57, 255, v56 / 0xFF);
              v56 %= 0xFFui64;
            }
            v55 = v8;
            *v8 = v56;
          }
          memcpy_0(v55 + 1, v18, v54);
          return (unsigned int)(v54 + (_DWORD)v8 + 1 - (_DWORD)dst);
        }
        return v11;
      }
      v58 = (__int16)src;
      v59 = src;
      v60 = &src[v7];
      v285 = &src[v7];
      v61 = &src[v7 - 11];
      v62 = &src[v7 - 5];
      if ( (unsigned int)v7 > 0x7E000000 )
        return v11;
      *((_DWORD *)state + 4102) = v7;
      *((_DWORD *)state + 4096) += v7;
      *((_WORD *)state + 8195) = 3;
      if ( (int)v7 < 13 )
        goto LABEL_114;
      v63 = 1;
      *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)src) >> 19)) = 0;
      v64 = src + 1;
      v65 = (unsigned int)(-1640531535 * *(_DWORD *)(src + 1)) >> 19;
      accelerationc = v6 << 6;
      v66 = v6 << 6;
LABEL_72:
      while ( 2 )
      {
        v67 = v63;
        v68 = (_WORD)v64 - v58;
        v63 = v66 >> 6;
        v69 = v64;
        v70 = (unsigned int)v65;
        v64 += v67;
        ++v66;
        if ( v64 > v61 )
        {
LABEL_113:
          v60 = v285;
LABEL_114:
          v96 = v60 - v59;
          v97 = v8;
          if ( v96 < 0xF )
          {
            *v8 = 16 * v96;
          }
          else
          {
            *v8 = -16;
            v98 = v96 - 15;
            ++v8;
            if ( v96 - 15 >= 0xFF )
            {
              v99 = v8;
              v8 += v98 / 0xFF;
              memset(v99, 255, v98 / 0xFF);
              v98 %= 0xFFui64;
            }
            v97 = v8;
            *v8 = v98;
          }
          memcpy_0(v97 + 1, v59, v96);
          return (unsigned int)(v96 + (_DWORD)v8 + 1 - (_DWORD)dst);
        }
        v71 = *((unsigned __int16 *)state + v65);
        v72 = -1640531535 * *(_DWORD *)v64;
        v73 = &src[v71];
        *((_WORD *)state + v70) = v68;
        v65 = v72 >> 19;
        if ( *(_DWORD *)v73 != *(_DWORD *)v69 )
        {
          v58 = (__int16)src;
          continue;
        }
        break;
      }
      if ( v69 > v59 && v73 > src )
      {
        do
        {
          v74 = v69 - 1;
          if ( *(v69 - 1) != *(v73 - 1) )
            break;
          --v69;
          v75 = --v73 > src;
        }
        while ( v75 && v74 > v59 );
      }
      v76 = v8;
      v77 = (_DWORD)v69 - (_DWORD)v59;
      v78 = v8 + 1;
      if ( (unsigned int)((_DWORD)v69 - (_DWORD)v59) < 0xF )
      {
        *v76 = 16 * v77;
      }
      else
      {
        v79 = v77 - 15;
        *v76 = -16;
        if ( (int)(v77 - 15) >= 255 )
        {
          memset(v78, 255, v79 / 0xFF);
          v78 = (_QWORD *)((char *)v78 + v79 / 0xFF);
          LOBYTE(v79) = v79 / 0xFF + v79;
        }
        *(_BYTE *)v78 = v79;
        v78 = (_QWORD *)((char *)v78 + 1);
      }
      v80 = (_WORD *)((char *)v78 + v77);
      v81 = v59 - (const char *)v78;
      do
      {
        *v78 = *(_QWORD *)((char *)v78 + v81);
        ++v78;
      }
      while ( v78 < (_QWORD *)v80 );
      v58 = (__int16)src;
      v82 = (unsigned __int64)(v62 - 7);
      v83 = v80;
      while ( 1 )
      {
        v84 = v69 + 4;
        v85 = v73 + 4;
        *v83 = (_WORD)v69 - (_WORD)v73;
        v8 = (char *)(v83 + 1);
        v86 = v69 + 4;
        if ( (unsigned __int64)(v69 + 4) < v82 )
        {
          if ( *v84 != *v85 )
          {
            _BitScanForward64((unsigned __int64 *)&v84, *v84 ^ *v85);
            v87 = (unsigned int)v84 >> 3;
            goto LABEL_101;
          }
          v86 = v69 + 12;
          v85 = v73 + 12;
        }
        if ( (unsigned __int64)v86 >= v82 )
        {
LABEL_91:
          if ( v86 < v62 - 3 && *(_DWORD *)v85 == *(_DWORD *)v86 )
          {
            v86 += 4;
            v85 = (_QWORD *)((char *)v85 + 4);
          }
          if ( v86 < v62 - 1 && *(_WORD *)v85 == *(_WORD *)v86 )
          {
            v86 += 2;
            v85 = (_QWORD *)((char *)v85 + 2);
          }
          if ( v86 < v62 && *(_BYTE *)v85 == *v86 )
            LODWORD(v86) = (_DWORD)v86 + 1;
          v87 = (_DWORD)v86 - (_DWORD)v84;
        }
        else
        {
          while ( *(_QWORD *)v86 == *v85 )
          {
            v86 += 8;
            ++v85;
            if ( (unsigned __int64)v86 >= v82 )
              goto LABEL_91;
          }
          _BitScanForward64(&v93, *(_QWORD *)v86 ^ *v85);
          v87 = ((unsigned int)v93 >> 3) + (_DWORD)v86 - (_DWORD)v84;
        }
LABEL_101:
        v88 = *v76;
        v69 += v87 + 4;
        if ( v87 < 0xF )
        {
          *v76 = v88 + v87;
        }
        else
        {
          v89 = v87 - 15;
          *v76 = v88 + 15;
          *(_DWORD *)v8 = -1;
          if ( v89 >= 0x3FC )
          {
            v90 = v89 / 0x3FC;
            do
            {
              v8 += 4;
              v89 -= 1020;
              *(_DWORD *)v8 = -1;
              --v90;
            }
            while ( v90 );
          }
          v91 = v89 / 0xFF;
          v92 = &v8[v91];
          *v92 = v89 + v91;
          v8 = v92 + 1;
        }
        v59 = v69;
        if ( v69 >= v61 )
          goto LABEL_113;
        *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)(v69 - 2)) >> 19)) = (_WORD)v69 - 2 - (_WORD)src;
        v94 = (unsigned int)(-1640531535 * *(_DWORD *)v69) >> 19;
        v95 = *((unsigned __int16 *)state + v94);
        *((_WORD *)state + v94) = (_WORD)v69 - (_WORD)src;
        v73 = &src[v95];
        if ( *(_DWORD *)v73 != *(_DWORD *)v69 )
        {
          v64 = v69 + 1;
          v63 = 1;
          v66 = accelerationc;
          v65 = (unsigned int)(-1640531535 * *(_DWORD *)(v69 + 1)) >> 19;
          goto LABEL_72;
        }
        v76 = v8;
        v83 = v8 + 1;
        *v76 = 0;
      }
    }
    if ( v13 && (v13 != 2 || *((_DWORD *)state + 4096) > 0x40000000u || (int)v7 >= 4096) )
    {
      memset_0(state, 0, 0x4000ui64);
      v9 = src;
      v11 = 0;
      *((_DWORD *)state + 4096) = 0;
      *((_WORD *)state + 8195) = 0;
    }
    v100 = *((_DWORD *)state + 4096);
    if ( v100 )
      *((_DWORD *)state + 4096) = v100 + 0x10000;
    *((_QWORD *)state + 2050) = 0i64;
    v101 = &v9[v7];
    *((_QWORD *)state + 2049) = 0i64;
    v102 = (unsigned __int64)&v9[v7 - 5];
    *((_DWORD *)state + 4102) = 0;
    v103 = v9;
    v104 = &v9[-*((unsigned int *)state + 4096)];
    v280 = &v9[v7];
    if ( (unsigned int)v7 > 0x7E000000 )
      return v11;
    *((_DWORD *)state + 4102) = v7;
    *((_DWORD *)state + 4096) += v7;
    *((_WORD *)state + 8195) = 2;
    if ( (int)v7 >= 13 )
    {
      v105 = v9 + 1;
      v106 = v6 << 6;
      accelerationd = v106;
      *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)src) >> 52)) = (_DWORD)v9 - (_DWORD)v104;
      v107 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v9 + 1);
LABEL_130:
      v108 = v107 >> 52;
      v109 = v105;
      v110 = 1;
      v111 = v106;
      while ( 1 )
      {
        v112 = v108;
        v113 = v109;
        v114 = (_DWORD)v109 - (_DWORD)v104;
        v115 = *((unsigned int *)state + v108);
        v109 += v110;
        v110 = v111++ >> 6;
        if ( v109 > v280 - 11 )
          break;
        v116 = &v104[v115];
        v108 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v109) >> 52;
        *((_DWORD *)state + v112) = v114;
        if ( (int)v115 + 0xFFFF >= v114 && *(_DWORD *)v116 == *(_DWORD *)v113 )
        {
          if ( v116 > src && v113 > v103 )
          {
            do
            {
              v117 = (unsigned __int64)(v116 - 1);
              v118 = v113 - 1;
              if ( *(v113 - 1) != *(v116 - 1) )
                break;
              --v113;
              --v116;
            }
            while ( v118 > v103 && v117 > (unsigned __int64)src );
          }
          v119 = v8;
          v120 = (_DWORD)v113 - (_DWORD)v103;
          v121 = v8 + 1;
          if ( (unsigned int)((_DWORD)v113 - (_DWORD)v103) < 0xF )
          {
            *v119 = 16 * v120;
          }
          else
          {
            v122 = v120 - 15;
            *v119 = -16;
            if ( (int)(v120 - 15) >= 255 )
            {
              memset(v121, 255, v122 / 0xFF);
              v121 = (_QWORD *)((char *)v121 + v122 / 0xFF);
              LOBYTE(v122) = v122 / 0xFF + v122;
            }
            *(_BYTE *)v121 = v122;
            v121 = (_QWORD *)((char *)v121 + 1);
          }
          v123 = (_WORD *)((char *)v121 + v120);
          v124 = v103 - (const char *)v121;
          do
          {
            *v121 = *(_QWORD *)((char *)v121 + v124);
            ++v121;
          }
          while ( v121 < (_QWORD *)v123 );
          v101 = v280;
          v125 = v102 - 7;
          v126 = v123;
          while ( 1 )
          {
            v127 = v113 + 4;
            v128 = v116 + 4;
            *v126 = (_WORD)v113 - (_WORD)v116;
            v129 = v113 + 4;
            v8 = (char *)(v126 + 1);
            if ( (unsigned __int64)(v113 + 4) < v125 )
            {
              if ( *v128 != *v127 )
              {
                _BitScanForward64((unsigned __int64 *)&v127, *v128 ^ *v127);
                v130 = (unsigned int)v127 >> 3;
                goto LABEL_161;
              }
              v129 = v113 + 12;
              v128 = v116 + 12;
            }
            if ( (unsigned __int64)v129 >= v125 )
            {
LABEL_151:
              if ( (unsigned __int64)v129 < v102 - 3 && *(_DWORD *)v128 == *v129 )
              {
                ++v129;
                v128 = (_QWORD *)((char *)v128 + 4);
              }
              if ( (unsigned __int64)v129 < v102 - 1 && *(_WORD *)v128 == *(_WORD *)v129 )
              {
                v129 = (_DWORD *)((char *)v129 + 2);
                v128 = (_QWORD *)((char *)v128 + 2);
              }
              if ( (unsigned __int64)v129 < v102 && *(_BYTE *)v128 == *(_BYTE *)v129 )
                LODWORD(v129) = (_DWORD)v129 + 1;
              v130 = (_DWORD)v129 - (_DWORD)v127;
            }
            else
            {
              while ( *v128 == *(_QWORD *)v129 )
              {
                v129 += 2;
                ++v128;
                if ( (unsigned __int64)v129 >= v125 )
                  goto LABEL_151;
              }
              _BitScanForward64(&v135, *v128 ^ *(_QWORD *)v129);
              v130 = ((unsigned int)v135 >> 3) + (_DWORD)v129 - (_DWORD)v127;
            }
LABEL_161:
            v131 = *v119;
            v113 += v130 + 4;
            if ( v130 < 0xF )
            {
              *v119 = v130 + v131;
            }
            else
            {
              v132 = v130 - 15;
              *v119 = v131 + 15;
              *(_DWORD *)v8 = -1;
              if ( v132 >= 0x3FC )
              {
                v133 = v132 / 0x3FC;
                do
                {
                  v8 += 4;
                  v132 -= 1020;
                  *(_DWORD *)v8 = -1;
                  --v133;
                }
                while ( v133 );
              }
              v134 = &v8[v132 / 0xFF];
              *v134 = v132 / 0xFF + v132;
              v8 = v134 + 1;
            }
            v103 = v113;
            if ( v113 >= v280 - 11 )
              goto LABEL_175;
            *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v113 - 2)) >> 52)) = (_DWORD)v113 - 2 - (_DWORD)v104;
            v136 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v113) >> 52;
            v137 = *((unsigned int *)state + v136);
            *((_DWORD *)state + v136) = (_DWORD)v113 - (_DWORD)v104;
            v116 = &v104[v137];
            if ( (int)v137 + 0xFFFF < (unsigned int)((_DWORD)v113 - (_DWORD)v104) || *(_DWORD *)v116 != *(_DWORD *)v113 )
            {
              v138 = *(_QWORD *)(v113 + 1);
              v105 = v113 + 1;
              v106 = accelerationd;
              v107 = 0xCF1BBCDCBB000000ui64 * v138;
              goto LABEL_130;
            }
            v119 = v8;
            v126 = v8 + 1;
            *v119 = 0;
          }
        }
      }
      v101 = v280;
    }
LABEL_175:
    v139 = v101 - v103;
    v140 = v8;
    if ( v139 < 0xF )
    {
      *v8 = 16 * v139;
    }
    else
    {
      *v8 = -16;
      v141 = v139 - 15;
      ++v8;
      if ( v139 - 15 >= 0xFF )
      {
        v142 = v8;
        v8 += v141 / 0xFF;
        memset(v142, 255, v141 / 0xFF);
        v141 %= 0xFFui64;
      }
      v140 = v8;
      *v8 = v141;
    }
    memcpy_0(v140 + 1, v103, v139);
    return (unsigned int)((_DWORD)v8 + 1 + v139 - (_DWORD)dst);
  }
  if ( (int)v7 < 65547 )
  {
    if ( v13 && (v13 != 3 || (unsigned int)(v7 + *((_DWORD *)state + 4096)) >= 0xFFFF || (int)v7 >= 4096) )
    {
      memset_0(state, 0, 0x4000ui64);
      v9 = src;
      v11 = 0;
      *((_DWORD *)state + 4096) = 0;
      *((_WORD *)state + 8195) = 0;
    }
    *((_QWORD *)state + 2050) = 0i64;
    v143 = (unsigned __int64)&v8[dstCapacity];
    *((_QWORD *)state + 2049) = 0i64;
    *((_DWORD *)state + 4102) = 0;
    v144 = *((unsigned int *)state + 4096);
    dstCapacityb = v144;
    v281 = v143;
    if ( (_DWORD)v144 )
    {
      v145 = &v9[v7];
      v146 = &v9[-v144];
      v283 = &v9[v7];
      v147 = (unsigned __int64)&v9[v7 - 5];
      v148 = v9;
      if ( (unsigned int)v7 > 0x7E000000 )
        return v11;
      *((_DWORD *)state + 4102) = v7;
      *((_DWORD *)state + 4096) += v7;
      *((_WORD *)state + 8195) = 3;
      if ( (int)v7 >= 13 )
      {
        v149 = v9 + 1;
        v150 = (unsigned __int16 *)state;
        *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v9) >> 19)) = v144;
        v151 = (unsigned int)(-1640531535 * *(_DWORD *)(v9 + 1)) >> 19;
        v152 = v6 << 6;
        acceleratione = v152;
LABEL_191:
        v153 = v149;
        v154 = 1;
        while ( 1 )
        {
          v155 = v150[v151];
          v156 = (__int16)v153;
          v157 = v154;
          v158 = (unsigned int)v151;
          v159 = v153;
          v154 = v152 >> 6;
          v153 += v157;
          v160 = v156 - (_WORD)v146;
          ++v152;
          if ( v153 > v283 - 11 )
            break;
          v161 = &v146[v155];
          v151 = (unsigned int)(-1640531535 * *(_DWORD *)v153) >> 19;
          *((_WORD *)state + v158) = v160;
          v162 = dstCapacityb;
          v163 = (unsigned int)v155 < dstCapacityb;
          v150 = (unsigned __int16 *)state;
          if ( !v163 && *(_DWORD *)v161 == *(_DWORD *)v159 )
          {
            v11 = 0;
            if ( v161 > src && v159 > v148 )
            {
              do
              {
                v164 = (unsigned __int64)(v161 - 1);
                v165 = v159 - 1;
                if ( *(v159 - 1) != *(v161 - 1) )
                  break;
                --v159;
                --v161;
              }
              while ( v165 > v148 && v164 > (unsigned __int64)src );
            }
            v143 = v281;
            v166 = v8;
            v167 = (_DWORD)v159 - (_DWORD)v148;
            v168 = v8 + 1;
            v169 = (unsigned int)((_DWORD)v159 - (_DWORD)v148);
            if ( (unsigned __int64)v168 + v169 + ((int)v159 - (int)v148) / 0xFFu + 8 > v281 )
              return v11;
            if ( v167 < 0xF )
            {
              *v166 = 16 * v167;
            }
            else
            {
              v170 = v167 - 15;
              *v166 = -16;
              if ( (int)(v167 - 15) >= 255 )
              {
                memset(v168, 255, v170 / 0xFF);
                v168 = (_QWORD *)((char *)v168 + v170 / 0xFF);
                LOBYTE(v170) = v170 / 0xFF + v170;
              }
              *(_BYTE *)v168 = v170;
              v168 = (_QWORD *)((char *)v168 + 1);
              v162 = dstCapacityb;
            }
            v171 = (_WORD *)((char *)v168 + v169);
            v172 = v148 - (const char *)v168;
            do
            {
              *v168 = *(_QWORD *)((char *)v168 + v172);
              ++v168;
            }
            while ( v168 < (_QWORD *)v171 );
            v173 = v171;
            v174 = v147 - 7;
            while ( 2 )
            {
              v175 = v159 + 4;
              v176 = v161 + 4;
              *v173 = (_WORD)v159 - (_WORD)v161;
              v177 = v159 + 4;
              v8 = (char *)(v173 + 1);
              if ( (unsigned __int64)(v159 + 4) >= v174 )
              {
LABEL_210:
                if ( (unsigned __int64)v177 >= v174 )
                {
LABEL_213:
                  if ( (unsigned __int64)v177 < v147 - 3 && *v176 == *v177 )
                  {
                    ++v177;
                    ++v176;
                  }
                  if ( (unsigned __int64)v177 < v147 - 1 && *(_WORD *)v176 == *(_WORD *)v177 )
                  {
                    v177 = (_DWORD *)((char *)v177 + 2);
                    v176 = (_DWORD *)((char *)v176 + 2);
                  }
                  if ( (unsigned __int64)v177 < v147 && *(_BYTE *)v176 == *(_BYTE *)v177 )
                    LODWORD(v177) = (_DWORD)v177 + 1;
                  v178 = (_DWORD)v177 - (_DWORD)v175;
                }
                else
                {
                  while ( *(_QWORD *)v177 == *(_QWORD *)v176 )
                  {
                    v177 += 2;
                    v176 += 2;
                    if ( (unsigned __int64)v177 >= v174 )
                      goto LABEL_213;
                  }
                  _BitScanForward64(&v184, *(_QWORD *)v177 ^ *(_QWORD *)v176);
                  v178 = ((unsigned int)v184 >> 3) + (_DWORD)v177 - (_DWORD)v175;
                }
              }
              else
              {
                if ( *v175 == *(_QWORD *)v176 )
                {
                  v177 = v159 + 12;
                  v176 = v161 + 12;
                  goto LABEL_210;
                }
                _BitScanForward64((unsigned __int64 *)&v175, *v175 ^ *(_QWORD *)v176);
                v178 = (unsigned int)v175 >> 3;
              }
              v159 += v178 + 4;
              if ( (unsigned __int64)&v8[((unsigned __int64)v178 >> 8) + 6] > v281 )
                return 0;
              v179 = *v166;
              if ( v178 < 0xF )
              {
                *v166 = v179 + v178;
              }
              else
              {
                v180 = v178 - 15;
                *v166 = v179 + 15;
                *(_DWORD *)v8 = -1;
                if ( v180 >= 0x3FC )
                {
                  v181 = v180 / 0x3FC;
                  do
                  {
                    v8 += 4;
                    v180 -= 1020;
                    *(_DWORD *)v8 = -1;
                    --v181;
                  }
                  while ( v181 );
                }
                v182 = v180 / 0xFF;
                v183 = &v8[v182];
                *v183 = v180 + v182;
                v8 = v183 + 1;
              }
              v145 = v283;
              v148 = v159;
              if ( v159 >= v283 - 11 )
                goto LABEL_238;
              *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)(v159 - 2)) >> 19)) = (_WORD)v159 - 2 - (_WORD)v146;
              v185 = *((unsigned __int16 *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v159) >> 19));
              *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v159) >> 19)) = (_WORD)v159 - (_WORD)v146;
              v161 = &v146[v185];
              if ( (unsigned int)v185 < v162 || *(_DWORD *)v161 != *(_DWORD *)v159 )
              {
                v186 = -1640531535 * *(_DWORD *)(v159 + 1);
                v149 = v159 + 1;
                v150 = (unsigned __int16 *)state;
                v152 = acceleratione;
                v151 = v186 >> 19;
                goto LABEL_191;
              }
              v166 = v8;
              v173 = v8 + 1;
              *v166 = 0;
              continue;
            }
          }
        }
        v145 = v283;
        v143 = v281;
LABEL_238:
        v11 = 0;
      }
      v187 = v145 - v148;
      v188 = v8;
      if ( (unsigned __int64)&v8[v187 + 1 + (v187 + 240) / 0xFF] <= v143 )
      {
        if ( v187 < 0xF )
        {
          *v8 = 16 * v187;
        }
        else
        {
          *v8 = -16;
          v189 = v187 - 15;
          ++v8;
          if ( v187 - 15 >= 0xFF )
          {
            v190 = v8;
            v8 += v189 / 0xFF;
            memset(v190, 255, v189 / 0xFF);
            v189 %= 0xFFui64;
          }
          v188 = v8;
          *v8 = v189;
        }
        memcpy_0(v188 + 1, v148, v187);
        return (unsigned int)((_DWORD)v8 + 1 + v187 - (_DWORD)dst);
      }
      return v11;
    }
    v191 = &v9[v7];
    v192 = v9;
    v193 = (unsigned __int64)&v9[v7 - 11];
    v194 = (unsigned __int64)&v9[v7 - 5];
    if ( (unsigned int)v7 > 0x7E000000 )
      return v11;
    *((_DWORD *)state + 4102) = v7;
    *((_DWORD *)state + 4096) += v7;
    *((_WORD *)state + 8195) = 3;
    if ( (int)v7 < 13 )
      goto LABEL_295;
    v195 = 1;
    *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)v9) >> 19)) = 0;
    v196 = v9 + 1;
    v197 = (unsigned int)(-1640531535 * *(_DWORD *)(v9 + 1)) >> 19;
    v198 = v6 << 6;
LABEL_250:
    while ( 2 )
    {
      v199 = v195;
      v200 = (unsigned int)v197;
      v195 = v198 >> 6;
      v201 = v196;
      v202 = (_WORD)v196 - (_WORD)v9;
      v196 += v199;
      ++v198;
      if ( (unsigned __int64)v196 > v193 )
      {
        v143 = v281;
LABEL_294:
        v11 = 0;
LABEL_295:
        v228 = v191 - v192;
        v229 = v8;
        if ( (unsigned __int64)&v8[v228 + 1 + (v228 + 240) / 0xFF] <= v143 )
        {
          if ( v228 < 0xF )
          {
            *v8 = 16 * v228;
          }
          else
          {
            *v8 = -16;
            v230 = v228 - 15;
            ++v8;
            if ( v228 - 15 >= 0xFF )
            {
              v231 = v8;
              v8 += v230 / 0xFF;
              memset(v231, 255, v230 / 0xFF);
              v230 %= 0xFFui64;
            }
            v229 = v8;
            *v8 = v230;
          }
          memcpy_0(v229 + 1, v192, v228);
          return (unsigned int)((_DWORD)v8 + 1 + v228 - (_DWORD)dst);
        }
        return v11;
      }
      v203 = *((unsigned __int16 *)state + v197);
      v204 = -1640531535 * *(_DWORD *)v196;
      v205 = &v9[v203];
      *((_WORD *)state + v200) = v202;
      v197 = v204 >> 19;
      if ( *(_DWORD *)v205 != *(_DWORD *)v201 )
      {
        v9 = src;
        continue;
      }
      break;
    }
    v11 = 0;
    if ( v201 > v192 && v205 > src )
    {
      do
      {
        v206 = (unsigned __int64)(v205 - 1);
        v207 = v201 - 1;
        if ( *(v201 - 1) != *(v205 - 1) )
          break;
        --v201;
        --v205;
      }
      while ( v207 > v192 && v206 > (unsigned __int64)src );
    }
    v143 = v281;
    v208 = (unsigned int)((_DWORD)v201 - (_DWORD)v192);
    v209 = v8;
    v210 = v8 + 1;
    if ( (unsigned __int64)v210 + (unsigned int)v208 / 0xFF + v208 + 8 > v281 )
      return v11;
    if ( (unsigned int)v208 < 0xF )
    {
      *v209 = 16 * ((_BYTE)v201 - (_BYTE)v192);
    }
    else
    {
      v211 = v208 - 15;
      *v209 = -16;
      if ( (int)v208 - 15 >= 255 )
      {
        memset(v210, 255, v211 / 0xFF);
        v210 = (_QWORD *)((char *)v210 + v211 / 0xFF);
        LOBYTE(v211) = v211 / 0xFF + v211;
      }
      *(_BYTE *)v210 = v211;
      v210 = (_QWORD *)((char *)v210 + 1);
      v143 = v281;
    }
    v212 = (_WORD *)((char *)v210 + (unsigned int)((_DWORD)v201 - (_DWORD)v192));
    v213 = v192 - (const char *)v210;
    do
    {
      *v210 = *(_QWORD *)((char *)v210 + v213);
      ++v210;
    }
    while ( v210 < (_QWORD *)v212 );
    v214 = v194 - 7;
    v215 = v212;
    while ( 1 )
    {
      v216 = v201 + 4;
      v217 = v205 + 4;
      *v215 = (_WORD)v201 - (_WORD)v205;
      v218 = v201 + 4;
      v8 = (char *)(v215 + 1);
      if ( (unsigned __int64)(v201 + 4) < v214 )
      {
        if ( *v216 != *v217 )
        {
          _BitScanForward64((unsigned __int64 *)&v216, *v216 ^ *v217);
          v219 = (unsigned int)v216 >> 3;
          goto LABEL_280;
        }
        v218 = v201 + 12;
        v217 = v205 + 12;
      }
      if ( (unsigned __int64)v218 >= v214 )
      {
LABEL_270:
        if ( (unsigned __int64)v218 < v194 - 3 && *(_DWORD *)v217 == *v218 )
        {
          ++v218;
          v217 = (_QWORD *)((char *)v217 + 4);
        }
        if ( (unsigned __int64)v218 < v194 - 1 && *(_WORD *)v217 == *(_WORD *)v218 )
        {
          v218 = (_DWORD *)((char *)v218 + 2);
          v217 = (_QWORD *)((char *)v217 + 2);
        }
        if ( (unsigned __int64)v218 < v194 && *(_BYTE *)v217 == *(_BYTE *)v218 )
          LODWORD(v218) = (_DWORD)v218 + 1;
        v219 = (_DWORD)v218 - (_DWORD)v216;
      }
      else
      {
        while ( *(_QWORD *)v218 == *v217 )
        {
          v218 += 2;
          ++v217;
          if ( (unsigned __int64)v218 >= v214 )
            goto LABEL_270;
        }
        _BitScanForward64(&v225, *(_QWORD *)v218 ^ *v217);
        v219 = (_DWORD)v218 + ((unsigned int)v225 >> 3) - (_DWORD)v216;
      }
LABEL_280:
      v201 += v219 + 4;
      if ( (unsigned __int64)&v8[((unsigned __int64)v219 >> 8) + 6] > v143 )
        return 0;
      v220 = *v209;
      if ( v219 < 0xF )
      {
        *v209 = v220 + v219;
      }
      else
      {
        v221 = v219 - 15;
        *v209 = v220 + 15;
        *(_DWORD *)v8 = -1;
        if ( v221 >= 0x3FC )
        {
          v222 = v221 / 0x3FC;
          do
          {
            v8 += 4;
            v221 -= 1020;
            *(_DWORD *)v8 = -1;
            --v222;
          }
          while ( v222 );
        }
        v223 = v221 / 0xFF;
        v224 = &v8[v223];
        *v224 = v221 + v223;
        v8 = v224 + 1;
      }
      v192 = v201;
      if ( (unsigned __int64)v201 >= v193 )
        goto LABEL_294;
      *((_WORD *)state + ((unsigned int)(-1640531535 * *(_DWORD *)(v201 - 2)) >> 19)) = (_WORD)v201 - 2 - (_WORD)src;
      v226 = (unsigned int)(-1640531535 * *(_DWORD *)v201) >> 19;
      v227 = *((unsigned __int16 *)state + v226);
      *((_WORD *)state + v226) = (_WORD)v201 - (_WORD)src;
      v205 = &src[v227];
      if ( *(_DWORD *)v205 != *(_DWORD *)v201 )
      {
        v196 = v201 + 1;
        v9 = src;
        v195 = 1;
        v198 = v6 << 6;
        v197 = (unsigned int)(-1640531535 * *(_DWORD *)(v201 + 1)) >> 19;
        goto LABEL_250;
      }
      v209 = v8;
      v215 = v8 + 1;
      *v209 = 0;
    }
  }
  if ( v13 && (v13 != 2 || *((_DWORD *)state + 4096) > 0x40000000u || (int)v7 >= 4096) )
  {
    memset_0(state, 0, 0x4000ui64);
    v9 = src;
    v11 = 0;
    *((_DWORD *)state + 4096) = 0;
    *((_WORD *)state + 8195) = 0;
  }
  v232 = *((_DWORD *)state + 4096);
  if ( v232 )
    *((_DWORD *)state + 4096) = v232 + 0x10000;
  v233 = &dst[dstCapacity];
  v234 = &v9[v7];
  *((_QWORD *)state + 2050) = 0i64;
  *((_QWORD *)state + 2049) = 0i64;
  v235 = (unsigned __int64)&v9[v7 - 5];
  *((_DWORD *)state + 4102) = 0;
  v236 = v9;
  srcBase = (const unsigned __int8 *)&v9[-*((unsigned int *)state + 4096)];
  v286 = &v9[v7];
  v284 = (unsigned __int64)&v9[v7 - 11];
  v282 = (unsigned __int64)v233;
  if ( (unsigned int)v7 <= 0x7E000000 )
  {
    *((_DWORD *)state + 4102) = v7;
    *((_DWORD *)state + 4096) += v7;
    *((_WORD *)state + 8195) = 2;
    if ( (int)v7 >= 13 )
    {
      indyfs_LZ4_putPositionOnHash((const unsigned __int8 *)src, (unsigned int)((0xCF1BBCDCBB000000ui64 * *(_QWORD *)src) >> 32) >> 20, state, byU16, srcBase);
      v239 = v236 + 1;
      v240 = accelerationa << 6;
      accelerationf = accelerationa << 6;
LABEL_312:
      v241 = v239;
      v242 = 1;
      v243 = v240;
      v244 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v239) >> 52;
      while ( 1 )
      {
        v245 = v244;
        v246 = v241;
        v247 = v241;
        v248 = (_DWORD)v241 - (_DWORD)srcBase;
        v249 = *((unsigned int *)state + v244);
        v250 = v242;
        v242 = v243 >> 6;
        v241 += v250;
        ++v243;
        if ( (unsigned __int64)v241 > v238 )
          break;
        v251 = &srcBase[v249];
        v244 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v241) >> 52;
        *((_DWORD *)state + v245) = v248;
        if ( (int)v249 + 0xFFFF >= v248 && *(_DWORD *)v251 == *(_DWORD *)v247 )
        {
          v11 = 0;
          if ( v246 > v236 && v251 > (const unsigned __int8 *)src )
          {
            do
            {
              v252 = (unsigned __int64)(v251 - 1);
              v253 = v247 - 1;
              if ( *(v247 - 1) != *(v251 - 1) )
                break;
              --v247;
              --v251;
            }
            while ( v253 > v236 && v252 > (unsigned __int64)src );
          }
          v233 = &dst[dstCapacity];
          v254 = v8 + 1;
          v255 = (_DWORD)v247 - (_DWORD)v236;
          v256 = v8;
          v257 = (unsigned int)((_DWORD)v247 - (_DWORD)v236);
          if ( (unsigned __int64)&v8[v257 + 9 + ((int)v247 - (int)v236) / 0xFFu] > v282 )
            return v11;
          if ( v255 < 0xF )
          {
            *v8 = 16 * v255;
          }
          else
          {
            v258 = v255 - 15;
            *v256 = -16;
            if ( (int)(v255 - 15) >= 255 )
            {
              memset(v254, 255, v258 / 0xFF);
              v254 = (_QWORD *)((char *)v254 + v258 / 0xFF);
              LOBYTE(v258) = v258 / 0xFF + v258;
            }
            *(_BYTE *)v254 = v258;
            v254 = (_QWORD *)((char *)v254 + 1);
          }
          v259 = (_WORD *)((char *)v254 + v257);
          v260 = v236 - (const char *)v254;
          do
          {
            *v254 = *(_QWORD *)((char *)v254 + v260);
            ++v254;
          }
          while ( v254 < (_QWORD *)v259 );
          v261 = v235 - 7;
          while ( 2 )
          {
            v262 = v247 + 4;
            v263 = v251 + 4;
            *v259 = (_WORD)v247 - (_WORD)v251;
            v264 = v247 + 4;
            v8 = (char *)(v259 + 1);
            if ( (unsigned __int64)(v247 + 4) >= v261 )
            {
LABEL_332:
              if ( (unsigned __int64)v264 >= v261 )
              {
LABEL_335:
                if ( (unsigned __int64)v264 < v235 - 3 && *v263 == *v264 )
                {
                  ++v264;
                  ++v263;
                }
                if ( (unsigned __int64)v264 < v235 - 1 && *(_WORD *)v263 == *(_WORD *)v264 )
                {
                  v264 = (_DWORD *)((char *)v264 + 2);
                  v263 = (_DWORD *)((char *)v263 + 2);
                }
                if ( (unsigned __int64)v264 < v235 && *(_BYTE *)v263 == *(_BYTE *)v264 )
                  LODWORD(v264) = (_DWORD)v264 + 1;
                v265 = (_DWORD)v264 - (_DWORD)v262;
              }
              else
              {
                while ( *(_QWORD *)v264 == *(_QWORD *)v263 )
                {
                  v264 += 2;
                  v263 += 2;
                  if ( (unsigned __int64)v264 >= v261 )
                    goto LABEL_335;
                }
                _BitScanForward64(&v271, *(_QWORD *)v264 ^ *(_QWORD *)v263);
                v265 = (_DWORD)v264 + ((unsigned int)v271 >> 3) - (_DWORD)v262;
              }
            }
            else
            {
              if ( *v262 == *(_QWORD *)v263 )
              {
                v264 = v247 + 12;
                v263 = v251 + 12;
                goto LABEL_332;
              }
              _BitScanForward64((unsigned __int64 *)&v262, *v262 ^ *(_QWORD *)v263);
              v265 = (unsigned int)v262 >> 3;
            }
            v247 += v265 + 4;
            if ( (unsigned __int64)&v8[((unsigned __int64)v265 >> 8) + 6] > v282 )
              return 0;
            v266 = *v256;
            if ( v265 < 0xF )
            {
              *v256 = v265 + v266;
            }
            else
            {
              v267 = v265 - 15;
              *v256 = v266 + 15;
              *(_DWORD *)v8 = -1;
              if ( v267 >= 0x3FC )
              {
                v268 = v267 / 0x3FC;
                do
                {
                  v8 += 4;
                  v267 -= 1020;
                  *(_DWORD *)v8 = -1;
                  --v268;
                }
                while ( v268 );
              }
              v269 = v267 / 0xFF;
              v270 = &v8[v269];
              *v270 = v267 + v269;
              v8 = v270 + 1;
            }
            v236 = v247;
            if ( (unsigned __int64)v247 >= v284 )
              goto LABEL_361;
            *((_DWORD *)state + ((0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v247 - 2)) >> 52)) = (_DWORD)v247 - 2 - (_DWORD)srcBase;
            v272 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v247) >> 52;
            v273 = *((unsigned int *)state + v272);
            *((_DWORD *)state + v272) = (_DWORD)v247 - (_DWORD)srcBase;
            v251 = &srcBase[v273];
            if ( (int)v273 + 0xFFFF < (unsigned int)((_DWORD)v247 - (_DWORD)srcBase) || *(_DWORD *)v251 != *(_DWORD *)v247 )
            {
              v240 = accelerationf;
              v239 = v247 + 1;
              v238 = v284;
              goto LABEL_312;
            }
            v256 = v8;
            v259 = v8 + 1;
            *v256 = 0;
            continue;
          }
        }
        v238 = v284;
      }
      v233 = &dst[dstCapacity];
LABEL_361:
      v234 = v286;
      v11 = 0;
    }
    v274 = v234 - v236;
    if ( &v8[v274 + 1 + (v274 + 240) / 0xFF] <= v233 )
    {
      if ( v274 < 0xF )
      {
        *v8 = 16 * v274;
      }
      else
      {
        *v8 = -16;
        v275 = v274 - 15;
        ++v8;
        if ( v274 - 15 >= 0xFF )
        {
          v276 = v8;
          v8 += v275 / 0xFF;
          memset(v276, 255, v275 / 0xFF);
          v275 %= 0xFFui64;
        }
        *v8 = v275;
      }
      v277 = v8 + 1;
      memcpy_0(v277, v236, v274);
      return (unsigned int)(v274 + (_DWORD)v277 - (_DWORD)dst);
    }
  }
  return v11;
}

/*
==============
indyfs_LZ4_compress_fast_force
==============
*/
__int64 indyfs_LZ4_compress_fast_force(const char *source, char *dest, int inputSize, int maxOutputSize, int acceleration)
{
  __int64 v5; 
  char *v6; 
  const char *v7; 
  __int64 v8; 
  unsigned int v9; 
  const char *v10; 
  unsigned __int64 v11; 
  const char *v12; 
  unsigned __int64 v13; 
  const char *v14; 
  __int64 v15; 
  int v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int16 v21; 
  const char *v22; 
  unsigned int v23; 
  const char *v24; 
  int v25; 
  unsigned __int64 v26; 
  const char *v27; 
  unsigned __int64 v28; 
  char *v29; 
  unsigned int v30; 
  _QWORD *v31; 
  __int64 v32; 
  unsigned int v33; 
  _WORD *v34; 
  signed __int64 v35; 
  unsigned __int64 v36; 
  _WORD *v37; 
  _QWORD *v38; 
  _QWORD *v39; 
  _DWORD *v40; 
  unsigned int v41; 
  char v42; 
  unsigned int v43; 
  __int64 v44; 
  char *v45; 
  unsigned __int64 v46; 
  int v47; 
  unsigned __int64 v48; 
  unsigned int v49; 
  size_t v50; 
  char *v51; 
  size_t v52; 
  char *v53; 
  unsigned __int64 v54; 
  const char *v55; 
  unsigned __int64 v56; 
  const char *v57; 
  __int64 v58; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  int v61; 
  unsigned int v62; 
  unsigned int v63; 
  __int64 v64; 
  int *v65; 
  unsigned int v66; 
  int v67; 
  const char *v68; 
  unsigned __int64 v69; 
  const char *v70; 
  unsigned __int64 v71; 
  const char *v72; 
  unsigned __int64 v73; 
  __int64 v74; 
  char *v75; 
  _QWORD *v76; 
  unsigned int v77; 
  _WORD *v78; 
  signed __int64 v79; 
  unsigned __int64 v80; 
  _WORD *v81; 
  _QWORD *v82; 
  _DWORD *v83; 
  _DWORD *v84; 
  unsigned int v85; 
  char v86; 
  unsigned int v87; 
  __int64 v88; 
  char *v89; 
  unsigned __int64 v90; 
  unsigned __int64 v91; 
  __int64 v92; 
  size_t v93; 
  char *v94; 
  size_t v95; 
  char *v96; 
  unsigned __int64 v99; 
  const char *v100; 
  int v101; 
  unsigned __int64 v102; 
  int v103[4096]; 
  int v104; 
  __int16 v105; 
  int v106; 

  v5 = inputSize;
  v6 = dest;
  v101 = (int)dest;
  v7 = source;
  v8 = maxOutputSize;
  memset_0(v103, 0, 0x4020ui64);
  v9 = 0;
  v99 = (unsigned __int64)&v6[v8];
  v10 = &v7[v5];
  v100 = &v7[v5];
  if ( (int)v5 >= 65547 )
  {
    v54 = (unsigned __int64)(v10 - 11);
    v55 = v7;
    v56 = (unsigned __int64)(v10 - 5);
    if ( (unsigned int)v5 > 0x7E000000 )
      return v9;
    v104 += v5;
    v57 = v7 + 1;
    v58 = *(_QWORD *)(v7 + 1);
    v105 = 2;
    v59 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v7) >> 52;
    v106 = v5;
    v103[v59] = 0;
    v60 = (0xCF1BBCDCBB000000ui64 * v58) >> 52;
    v61 = acceleration << 6;
LABEL_61:
    v62 = 1;
    v63 = v61;
    while ( 1 )
    {
      v64 = v62;
      v65 = &v103[v60];
      v66 = (_DWORD)v57 - (_DWORD)v7;
      v62 = v63 >> 6;
      v67 = *v65;
      v68 = v57;
      v57 += v64;
      ++v63;
      if ( (unsigned __int64)v57 > v54 )
        break;
      v69 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)v57;
      *v65 = v66;
      v70 = &source[v67];
      v60 = v69 >> 52;
      if ( v67 + 0xFFFF >= v66 && *(_DWORD *)v70 == *(_DWORD *)v68 )
      {
        if ( v68 > v55 && &source[v67] > source )
        {
          do
          {
            v71 = (unsigned __int64)(v70 - 1);
            v72 = v68 - 1;
            if ( *(v68 - 1) != *(v70 - 1) )
              break;
            --v68;
            --v70;
          }
          while ( v72 > v55 && v71 > (unsigned __int64)source );
        }
        v73 = v99;
        v74 = (unsigned int)((_DWORD)v68 - (_DWORD)v55);
        v75 = v6;
        v76 = v6 + 1;
        if ( (unsigned __int64)v76 + (unsigned int)v74 / 0xFF + v74 + 8 > v99 )
          return v9;
        if ( (unsigned int)v74 < 0xF )
        {
          *v75 = 16 * ((_BYTE)v68 - (_BYTE)v55);
        }
        else
        {
          v77 = v74 - 15;
          *v75 = -16;
          if ( (int)v74 - 15 >= 255 )
          {
            memset(v76, 255, v77 / 0xFF);
            v76 = (_QWORD *)((char *)v76 + v77 / 0xFF);
            LOBYTE(v77) = v77 / 0xFF + v77;
          }
          *(_BYTE *)v76 = v77;
          v76 = (_QWORD *)((char *)v76 + 1);
          v73 = v99;
        }
        v78 = (_WORD *)((char *)v76 + (unsigned int)((_DWORD)v68 - (_DWORD)v55));
        v79 = v55 - (const char *)v76;
        do
        {
          *v76 = *(_QWORD *)((char *)v76 + v79);
          ++v76;
        }
        while ( v76 < (_QWORD *)v78 );
        LODWORD(v7) = (_DWORD)source;
        v80 = v56 - 7;
        v81 = v78;
        while ( 2 )
        {
          v82 = v68 + 4;
          v83 = v70 + 4;
          *v81 = (_WORD)v68 - (_WORD)v70;
          v6 = (char *)(v81 + 1);
          v84 = v68 + 4;
          if ( (unsigned __int64)(v68 + 4) >= v80 )
          {
LABEL_81:
            if ( (unsigned __int64)v84 >= v80 )
            {
LABEL_84:
              if ( (unsigned __int64)v84 < v56 - 3 && *v83 == *v84 )
              {
                ++v84;
                ++v83;
              }
              if ( (unsigned __int64)v84 < v56 - 1 && *(_WORD *)v83 == *(_WORD *)v84 )
              {
                v84 = (_DWORD *)((char *)v84 + 2);
                v83 = (_DWORD *)((char *)v83 + 2);
              }
              if ( (unsigned __int64)v84 < v56 && *(_BYTE *)v83 == *(_BYTE *)v84 )
                LODWORD(v84) = (_DWORD)v84 + 1;
              v85 = (_DWORD)v84 - (_DWORD)v82;
            }
            else
            {
              while ( *(_QWORD *)v84 == *(_QWORD *)v83 )
              {
                v84 += 2;
                v83 += 2;
                if ( (unsigned __int64)v84 >= v80 )
                  goto LABEL_84;
              }
              _BitScanForward64(&v90, *(_QWORD *)v84 ^ *(_QWORD *)v83);
              v85 = ((unsigned int)v90 >> 3) + (_DWORD)v84 - (_DWORD)v82;
            }
          }
          else
          {
            if ( *v82 == *(_QWORD *)v83 )
            {
              v84 = v68 + 12;
              v83 = v70 + 12;
              goto LABEL_81;
            }
            _BitScanForward64((unsigned __int64 *)&v82, *v82 ^ *(_QWORD *)v83);
            v85 = (unsigned int)v82 >> 3;
          }
          v68 += v85 + 4;
          if ( (unsigned __int64)&v6[((unsigned __int64)v85 >> 8) + 6] > v73 )
            return v9;
          v86 = *v75;
          if ( v85 < 0xF )
          {
            *v75 = v86 + v85;
          }
          else
          {
            v87 = v85 - 15;
            *v75 = v86 + 15;
            *(_DWORD *)v6 = -1;
            if ( v87 >= 0x3FC )
            {
              v88 = v87 / 0x3FC;
              do
              {
                v6 += 4;
                v87 -= 1020;
                *(_DWORD *)v6 = -1;
                --v88;
              }
              while ( v88 );
            }
            v89 = &v6[v87 / 0xFF];
            *v89 = v87 / 0xFF + v87;
            v6 = v89 + 1;
          }
          v55 = v68;
          if ( (unsigned __int64)v68 >= v54 )
            goto LABEL_109;
          v103[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v68 - 2)) >> 52] = (_DWORD)v68 - 2 - (_DWORD)source;
          v91 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v68) >> 52;
          v92 = (unsigned int)v103[v91];
          v103[v91] = (_DWORD)v68 - (_DWORD)source;
          v70 = &source[v92];
          if ( (int)v92 + 0xFFFF < (unsigned int)((_DWORD)v68 - (_DWORD)source) || *(_DWORD *)v70 != *(_DWORD *)v68 )
          {
            v57 = v68 + 1;
            v61 = acceleration << 6;
            v60 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v68 + 1)) >> 52;
            goto LABEL_61;
          }
          v75 = v6;
          v81 = v6 + 1;
          *v75 = 0;
          continue;
        }
      }
      LODWORD(v7) = (_DWORD)source;
    }
    v73 = v99;
LABEL_109:
    v93 = v100 - v55;
    v94 = v6;
    if ( (unsigned __int64)&v6[v100 - v55 + 1 + (v100 - v55 + 240) / 0xFFui64] <= v73 )
    {
      if ( v93 < 0xF )
      {
        *v6 = 16 * v93;
      }
      else
      {
        *v6 = -16;
        v95 = v93 - 15;
        ++v6;
        if ( v93 - 15 >= 0xFF )
        {
          v96 = v6;
          v6 += v95 / 0xFF;
          memset(v96, 255, v95 / 0xFF);
          v95 %= 0xFFui64;
        }
        v94 = v6;
        *v6 = v95;
      }
      memcpy_0(v94 + 1, v55, v93);
      return (unsigned int)(v93 + (_DWORD)v6 + 1 - v101);
    }
  }
  else
  {
    v11 = (unsigned __int64)(v10 - 11);
    v12 = v7;
    v102 = (unsigned __int64)(v10 - 11);
    v13 = (unsigned __int64)(v10 - 5);
    if ( (unsigned int)v5 <= 0x7E000000 )
    {
      v104 += v5;
      v106 = v5;
      v105 = 3;
      if ( (int)v5 < 13 )
      {
        v28 = (unsigned __int64)&v6[v8];
LABEL_51:
        v50 = v10 - v12;
        v51 = v6;
        if ( (unsigned __int64)&v6[v50 + 1 + (v50 + 240) / 0xFF] <= v28 )
        {
          if ( v50 < 0xF )
          {
            *v6 = 16 * v50;
          }
          else
          {
            *v6 = -16;
            v52 = v50 - 15;
            ++v6;
            if ( v50 - 15 >= 0xFF )
            {
              v53 = v6;
              v6 += v52 / 0xFF;
              memset(v53, 255, v52 / 0xFF);
              v52 %= 0xFFui64;
            }
            v51 = v6;
            *v6 = v52;
          }
          memcpy_0(v51 + 1, v12, v50);
          return (unsigned int)((_DWORD)v6 + 1 + v50 - v101);
        }
      }
      else
      {
        v14 = v7 + 1;
        *((_WORD *)v103 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v7) >> 19)) = 0;
        v15 = (unsigned int)(-1640531535 * *(_DWORD *)(v7 + 1)) >> 19;
        v16 = acceleration << 6;
LABEL_5:
        v17 = v14;
        v18 = 1;
        v19 = v16;
        do
        {
          v20 = v18;
          v21 = (_WORD)v17 - (_WORD)v7;
          v18 = v19 >> 6;
          v22 = v17;
          v7 = (const char *)(2 * v15);
          v17 += v20;
          ++v19;
          if ( (unsigned __int64)v17 > v11 )
          {
            v28 = v99;
LABEL_50:
            v10 = v100;
            goto LABEL_51;
          }
          v23 = -1640531535 * *(_DWORD *)v17;
          v24 = &source[*(unsigned __int16 *)((char *)v103 + (_QWORD)v7)];
          v25 = *(_DWORD *)v22;
          *(_WORD *)((char *)v103 + (_QWORD)v7) = v21;
          LOWORD(v7) = (_WORD)source;
          v15 = v23 >> 19;
        }
        while ( *(_DWORD *)v24 != v25 );
        if ( v24 > source && v22 > v12 )
        {
          do
          {
            v26 = (unsigned __int64)(v24 - 1);
            v27 = v22 - 1;
            if ( *(v22 - 1) != *(v24 - 1) )
              break;
            --v22;
            --v24;
          }
          while ( v27 > v12 && v26 > (unsigned __int64)source );
        }
        v28 = v99;
        v29 = v6;
        v30 = (_DWORD)v22 - (_DWORD)v12;
        v31 = v6 + 1;
        v32 = (unsigned int)((_DWORD)v22 - (_DWORD)v12);
        if ( (unsigned __int64)v31 + v32 + ((int)v22 - (int)v12) / 0xFFu + 8 <= v99 )
        {
          if ( v30 < 0xF )
          {
            *v29 = 16 * v30;
          }
          else
          {
            v33 = v30 - 15;
            *v29 = -16;
            if ( (int)(v30 - 15) >= 255 )
            {
              memset(v31, 255, v33 / 0xFF);
              v31 = (_QWORD *)((char *)v31 + v33 / 0xFF);
              LOBYTE(v33) = v33 / 0xFF + v33;
            }
            *(_BYTE *)v31 = v33;
            v31 = (_QWORD *)((char *)v31 + 1);
            v28 = v99;
          }
          v34 = (_WORD *)((char *)v31 + v32);
          v35 = v12 - (const char *)v31;
          do
          {
            *v31 = *(_QWORD *)((char *)v31 + v35);
            ++v31;
          }
          while ( v31 < (_QWORD *)v34 );
          v11 = v102;
          v36 = v13 - 7;
          v37 = v34;
          while ( 1 )
          {
            v38 = v22 + 4;
            v39 = v24 + 4;
            *v37 = (_WORD)v22 - (_WORD)v24;
            v40 = v22 + 4;
            v6 = (char *)(v37 + 1);
            if ( (unsigned __int64)(v22 + 4) < v36 )
            {
              if ( *v38 != *v39 )
              {
                _BitScanForward64((unsigned __int64 *)&v38, *v38 ^ *v39);
                v41 = (unsigned int)v38 >> 3;
                goto LABEL_36;
              }
              v40 = v22 + 12;
              v39 = v24 + 12;
            }
            if ( (unsigned __int64)v40 >= v36 )
            {
LABEL_26:
              if ( (unsigned __int64)v40 < v13 - 3 && *(_DWORD *)v39 == *v40 )
              {
                ++v40;
                v39 = (_QWORD *)((char *)v39 + 4);
              }
              if ( (unsigned __int64)v40 < v13 - 1 && *(_WORD *)v39 == *(_WORD *)v40 )
              {
                v40 = (_DWORD *)((char *)v40 + 2);
                v39 = (_QWORD *)((char *)v39 + 2);
              }
              if ( (unsigned __int64)v40 < v13 && *(_BYTE *)v39 == *(_BYTE *)v40 )
                LODWORD(v40) = (_DWORD)v40 + 1;
              v41 = (_DWORD)v40 - (_DWORD)v38;
            }
            else
            {
              while ( *(_QWORD *)v40 == *v39 )
              {
                v40 += 2;
                ++v39;
                if ( (unsigned __int64)v40 >= v36 )
                  goto LABEL_26;
              }
              _BitScanForward64(&v46, *(_QWORD *)v40 ^ *v39);
              v41 = (_DWORD)v40 + ((unsigned int)v46 >> 3) - (_DWORD)v38;
            }
LABEL_36:
            v22 += v41 + 4;
            if ( (unsigned __int64)&v6[((unsigned __int64)v41 >> 8) + 6] > v28 )
              return v9;
            v42 = *v29;
            if ( v41 < 0xF )
            {
              *v29 = v41 + v42;
            }
            else
            {
              v43 = v41 - 15;
              *v29 = v42 + 15;
              *(_DWORD *)v6 = -1;
              if ( v43 >= 0x3FC )
              {
                v44 = v43 / 0x3FC;
                do
                {
                  v6 += 4;
                  v43 -= 1020;
                  *(_DWORD *)v6 = -1;
                  --v44;
                }
                while ( v44 );
              }
              v45 = &v6[v43 / 0xFF];
              *v45 = v43 / 0xFF + v43;
              v6 = v45 + 1;
            }
            v12 = v22;
            if ( (unsigned __int64)v22 >= v102 )
              goto LABEL_50;
            *((_WORD *)v103 + ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)(v22 - 2)) >> 19)) = (_WORD)v22 - 2 - (_WORD)source;
            v47 = *(_DWORD *)v22;
            v48 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v22) >> 19;
            v24 = &source[*((unsigned __int16 *)v103 + v48)];
            *((_WORD *)v103 + v48) = (_WORD)v22 - (_WORD)source;
            if ( *(_DWORD *)v24 != v47 )
            {
              v49 = -1640531535 * *(_DWORD *)(v22 + 1);
              v14 = v22 + 1;
              v16 = acceleration << 6;
              v15 = v49 >> 19;
              goto LABEL_5;
            }
            v29 = v6;
            v37 = v6 + 1;
            *v29 = 0;
          }
        }
      }
    }
  }
  return v9;
}

/*
==============
indyfs_LZ4_compress_forceExtDict
==============
*/
__int64 indyfs_LZ4_compress_forceExtDict(indyfs_LZ4_stream_u *indyfs_LZ4_dict, const char *source, char *dest, int srcSize)
{
  __int64 v4; 
  const char *v5; 
  char *v6; 
  indyfs_LZ4_stream_u *v7; 
  __int64 dictSize; 
  __int64 currentOffset; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  unsigned __int64 v13; 
  const char *v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  indyfs_LZ4_stream_u *v18; 
  const char *v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned __int64 v22; 
  const char *v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int *v26; 
  __int64 v27; 
  const char *v28; 
  unsigned int v29; 
  __int64 v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  __int16 v34; 
  const char *v35; 
  BOOL v36; 
  char *v37; 
  unsigned int v38; 
  _QWORD *v39; 
  unsigned int v40; 
  _WORD *v41; 
  signed __int64 v42; 
  _WORD *v43; 
  _DWORD *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  unsigned int v49; 
  unsigned __int64 v50; 
  const char *v51; 
  const char *v52; 
  unsigned int v53; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  unsigned __int64 v56; 
  unsigned __int64 v57; 
  unsigned int v58; 
  unsigned __int64 v59; 
  _DWORD *v60; 
  char v61; 
  unsigned int v62; 
  __int64 v63; 
  char *v64; 
  unsigned __int64 v65; 
  unsigned __int64 v66; 
  const char *v67; 
  unsigned int v68; 
  unsigned __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  unsigned __int64 v72; 
  char *v73; 
  size_t v74; 
  unsigned __int64 v75; 
  char *v76; 
  const char *v77; 
  const char *v78; 
  int v79; 
  const char *v80; 
  unsigned __int64 v81; 
  const char *v82; 
  const char *v83; 
  unsigned int v84; 
  indyfs_LZ4_stream_u *v85; 
  const char *v86; 
  unsigned __int64 v87; 
  unsigned int v88; 
  unsigned __int64 v89; 
  const char *v90; 
  unsigned int v91; 
  __int64 v92; 
  unsigned int *v93; 
  __int64 v94; 
  const char *v95; 
  unsigned int v96; 
  __int64 v97; 
  const char *v98; 
  const char *v99; 
  const char *v100; 
  __int16 v101; 
  const char *v102; 
  const char *v103; 
  char *v104; 
  unsigned int v105; 
  _QWORD *v106; 
  unsigned int v107; 
  _WORD *v108; 
  signed __int64 v109; 
  _WORD *v110; 
  _DWORD *v111; 
  const char *v112; 
  const char *v113; 
  const char *v114; 
  const char *v115; 
  unsigned int v116; 
  unsigned __int64 v117; 
  const char *v118; 
  const char *v119; 
  unsigned int v120; 
  unsigned __int64 v121; 
  unsigned __int64 v122; 
  unsigned __int64 v123; 
  unsigned __int64 v124; 
  unsigned int v125; 
  unsigned __int64 v126; 
  const char *v127; 
  char v128; 
  unsigned int v129; 
  __int64 v130; 
  char *v131; 
  unsigned __int64 v132; 
  unsigned __int64 v133; 
  const char *v134; 
  unsigned int v135; 
  unsigned __int64 v136; 
  __int64 v137; 
  __int64 v138; 
  size_t v139; 
  char *v140; 
  size_t v141; 
  char *v142; 
  __int64 result; 
  unsigned int v144; 
  unsigned int v145; 
  const char *v146; 
  unsigned __int64 v147; 
  unsigned __int64 v148; 
  const char *v149; 
  unsigned int v150; 
  const char *v151; 
  const char *v152; 
  const char *v153; 
  const char *v154; 
  const char *v155; 
  const char *v156; 
  const char *v157; 
  const char *v158; 
  int v161; 

  v161 = (int)dest;
  v4 = srcSize;
  v5 = source;
  v6 = dest;
  v7 = indyfs_LZ4_dict;
  indyfs_LZ4_renormDictT((indyfs_LZ4_stream_t_internal *)indyfs_LZ4_dict, srcSize);
  dictSize = v7->internal_donotuse.dictSize;
  if ( (unsigned int)dictSize < 0x10000 )
  {
    currentOffset = v7->internal_donotuse.currentOffset;
    v144 = currentOffset;
    if ( (unsigned int)dictSize < (unsigned int)currentOffset )
    {
      v10 = (const char *)v7->table[2049];
      v146 = v10;
      v150 = currentOffset - dictSize;
      v11 = &v5[-currentOffset];
      v155 = &v5[-currentOffset];
      v153 = &v10[dictSize];
      v12 = &v5[v4];
      v157 = &v5[v4];
      v13 = (unsigned __int64)&v5[v4 - 11];
      v148 = v13;
      v14 = v5;
      v151 = &v10[(unsigned int)dictSize - currentOffset];
      v15 = (unsigned __int64)&v5[v4 - 5];
      if ( (unsigned int)v4 > 0x7E000000 )
      {
        v16 = 0;
LABEL_216:
        v79 = srcSize;
        goto LABEL_217;
      }
      v7->internal_donotuse.dictSize = dictSize + v4;
      v17 = currentOffset + v4;
      v18 = indyfs_LZ4_dict;
      indyfs_LZ4_dict->internal_donotuse.currentOffset = v17;
      indyfs_LZ4_dict->internal_donotuse.tableType = 2;
      if ( (int)v4 >= 13 )
      {
        v19 = v5 + 1;
        indyfs_LZ4_dict->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v5) >> 52] = (_DWORD)v5 - (_DWORD)v11;
        v20 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v5 + 1);
LABEL_7:
        v21 = 1;
        v22 = v20 >> 52;
        v23 = v19;
        v24 = 64;
        while ( 1 )
        {
          v25 = v18->internal_donotuse.hashTable[v22];
          v26 = (unsigned int *)((char *)v18 + 4 * v22);
          v27 = v21;
          v28 = v23;
          v21 = v24 >> 6;
          v29 = (_DWORD)v23 - (_DWORD)v11;
          v23 += v27;
          ++v24;
          if ( (unsigned __int64)v23 > v13 )
            break;
          v30 = *(_QWORD *)v23;
          v31 = source;
          if ( (unsigned int)v25 < v144 )
            v31 = v10;
          *v26 = v29;
          v32 = v151;
          if ( (unsigned int)v25 >= v144 )
            v32 = v11;
          v33 = &v32[v25];
          v22 = (0xCF1BBCDCBB000000ui64 * v30) >> 52;
          if ( (unsigned int)v25 >= v150 && (int)v25 + 0xFFFF >= v29 && *(_DWORD *)v33 == *(_DWORD *)v28 )
          {
            v34 = v29 - v25;
            if ( v33 > v31 && v28 > v14 )
            {
              do
              {
                v35 = v28 - 1;
                if ( *(v28 - 1) != *(v33 - 1) )
                  break;
                --v28;
                v36 = --v33 > v31;
              }
              while ( v36 && v35 > v14 );
            }
            v37 = v6;
            v38 = (_DWORD)v28 - (_DWORD)v14;
            v39 = v6 + 1;
            if ( (unsigned int)((_DWORD)v28 - (_DWORD)v14) < 0xF )
            {
              *v37 = 16 * v38;
            }
            else
            {
              v40 = v38 - 15;
              *v37 = -16;
              if ( (int)(v38 - 15) >= 255 )
              {
                memset(v39, 255, v40 / 0xFF);
                v39 = (_QWORD *)((char *)v39 + v40 / 0xFF);
                LOBYTE(v40) = v40 / 0xFF + v40;
              }
              *(_BYTE *)v39 = v40;
              v39 = (_QWORD *)((char *)v39 + 1);
            }
            v41 = (_WORD *)((char *)v39 + v38);
            v42 = v14 - (const char *)v39;
            do
            {
              *v39 = *(_QWORD *)((char *)v39 + v42);
              ++v39;
            }
            while ( v39 < (_QWORD *)v41 );
            v43 = v41;
            while ( 1 )
            {
              *v43 = v34;
              v44 = v33 + 4;
              v6 = (char *)(v43 + 1);
              v45 = v28 + 4;
              if ( v31 != v146 )
              {
                v59 = v15 - 7;
                v60 = v28 + 4;
                if ( (unsigned __int64)v45 >= v15 - 7 )
                {
LABEL_71:
                  if ( (unsigned __int64)v60 >= v59 )
                  {
LABEL_74:
                    if ( (unsigned __int64)v60 < v15 - 3 && *v44 == *v60 )
                    {
                      ++v60;
                      ++v44;
                    }
                    if ( (unsigned __int64)v60 < v15 - 1 && *(_WORD *)v44 == *(_WORD *)v60 )
                    {
                      v60 = (_DWORD *)((char *)v60 + 2);
                      v44 = (_DWORD *)((char *)v44 + 2);
                    }
                    if ( (unsigned __int64)v60 < v15 && *(_BYTE *)v44 == *(_BYTE *)v60 )
                      LODWORD(v60) = (_DWORD)v60 + 1;
                    v49 = (_DWORD)v60 - (_DWORD)v45;
                  }
                  else
                  {
                    while ( *(_QWORD *)v44 == *(_QWORD *)v60 )
                    {
                      v60 += 2;
                      v44 += 2;
                      if ( (unsigned __int64)v60 >= v59 )
                        goto LABEL_74;
                    }
                    _BitScanForward64(&v66, *(_QWORD *)v44 ^ *(_QWORD *)v60);
                    v49 = (_DWORD)v60 + ((unsigned int)v66 >> 3) - (_DWORD)v45;
                  }
                }
                else
                {
                  if ( *(_QWORD *)v44 == *(_QWORD *)v45 )
                  {
                    v60 = v28 + 12;
                    v44 = v33 + 12;
                    goto LABEL_71;
                  }
                  _BitScanForward64(&v65, *(_QWORD *)v44 ^ *(_QWORD *)v45);
                  v49 = (unsigned int)v65 >> 3;
                }
                v31 = source;
                v28 += v49 + 4;
                goto LABEL_85;
              }
              v46 = (const char *)v15;
              if ( (unsigned __int64)&v28[v153 - v33] <= v15 )
                v46 = &v28[v153 - v33];
              v47 = v28 + 4;
              v48 = v46 - 7;
              if ( v45 >= v46 - 7 )
                goto LABEL_34;
              if ( *(_QWORD *)v44 == *(_QWORD *)v45 )
                break;
              _BitScanForward64(&v54, *(_QWORD *)v44 ^ *(_QWORD *)v45);
              v49 = (unsigned int)v54 >> 3;
LABEL_47:
              v31 = source;
              v28 += v49 + 4;
              if ( v28 != v46 )
                goto LABEL_85;
              v50 = v15 - 7;
              v51 = source;
              v52 = v46;
              if ( (unsigned __int64)v46 < v15 - 7 )
              {
                if ( *(_QWORD *)source != *(_QWORD *)v46 )
                {
                  _BitScanForward64(&v56, *(_QWORD *)source ^ *(_QWORD *)v46);
                  LODWORD(v56) = (unsigned int)v56 >> 3;
                  v49 += v56;
                  v28 += (unsigned int)v56;
                  goto LABEL_85;
                }
                v52 = v46 + 8;
                v51 = source + 8;
              }
              if ( (unsigned __int64)v52 >= v50 )
              {
LABEL_54:
                if ( (unsigned __int64)v52 < v15 - 3 && *(_DWORD *)v51 == *(_DWORD *)v52 )
                {
                  v52 += 4;
                  v51 += 4;
                }
                if ( (unsigned __int64)v52 < v15 - 1 && *(_WORD *)v51 == *(_WORD *)v52 )
                {
                  v52 += 2;
                  v51 += 2;
                }
                if ( (unsigned __int64)v52 < v15 && *v51 == *v52 )
                  LODWORD(v52) = (_DWORD)v52 + 1;
                v53 = (_DWORD)v52 - (_DWORD)v46;
                v49 += v53;
                v28 += v53;
              }
              else
              {
                while ( *(_QWORD *)v52 == *(_QWORD *)v51 )
                {
                  v52 += 8;
                  v51 += 8;
                  if ( (unsigned __int64)v52 >= v50 )
                    goto LABEL_54;
                }
                _BitScanForward64(&v57, *(_QWORD *)v52 ^ *(_QWORD *)v51);
                v58 = ((unsigned int)v57 >> 3) - (_DWORD)v46 + (_DWORD)v52;
                v49 += v58;
                v28 += v58;
              }
LABEL_85:
              v61 = *v37;
              if ( v49 < 0xF )
              {
                *v37 = v61 + v49;
              }
              else
              {
                v62 = v49 - 15;
                *v37 = v61 + 15;
                *(_DWORD *)v6 = -1;
                if ( v62 >= 0x3FC )
                {
                  v63 = v62 / 0x3FC;
                  do
                  {
                    v6 += 4;
                    v62 -= 1020;
                    *(_DWORD *)v6 = -1;
                    --v63;
                  }
                  while ( v63 );
                }
                v64 = &v6[v62 / 0xFF];
                *v64 = v62 / 0xFF + v62;
                v6 = v64 + 1;
              }
              v14 = v28;
              if ( (unsigned __int64)v28 >= v148 )
                goto LABEL_103;
              v11 = v155;
              v67 = v151;
              v68 = (_DWORD)v28 - (_DWORD)v155;
              indyfs_LZ4_dict->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v28 - 2)) >> 52] = (_DWORD)v28 - 2 - (_DWORD)v155;
              v69 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v28) >> 52;
              v70 = indyfs_LZ4_dict->internal_donotuse.hashTable[v69];
              indyfs_LZ4_dict->internal_donotuse.hashTable[v69] = (_DWORD)v28 - (_DWORD)v155;
              if ( (unsigned int)v70 >= v144 )
                v67 = v155;
              if ( (unsigned int)v70 < v144 )
                v31 = v146;
              v33 = &v67[v70];
              if ( (unsigned int)v70 < v150 || (int)v70 + 0xFFFF < v68 || *(_DWORD *)v33 != *(_DWORD *)v28 )
              {
                v71 = *(_QWORD *)(v28 + 1);
                v19 = v28 + 1;
                v18 = indyfs_LZ4_dict;
                v20 = 0xCF1BBCDCBB000000ui64 * v71;
                v10 = v146;
                v13 = v148;
                goto LABEL_7;
              }
              v37 = v6;
              v43 = v6 + 1;
              v34 = v68 - v70;
              *v37 = 0;
            }
            v47 = v28 + 12;
            v44 = v33 + 12;
LABEL_34:
            if ( v47 >= v48 )
            {
LABEL_37:
              if ( v47 < v46 - 3 && *v44 == *(_DWORD *)v47 )
              {
                v47 += 4;
                ++v44;
              }
              if ( v47 < v46 - 1 && *(_WORD *)v44 == *(_WORD *)v47 )
              {
                v47 += 2;
                v44 = (_DWORD *)((char *)v44 + 2);
              }
              if ( v47 < v46 && *(_BYTE *)v44 == *v47 )
                LODWORD(v47) = (_DWORD)v47 + 1;
              v49 = (_DWORD)v47 - (_DWORD)v45;
            }
            else
            {
              while ( *(_QWORD *)v44 == *(_QWORD *)v47 )
              {
                v47 += 8;
                v44 += 2;
                if ( v47 >= v48 )
                  goto LABEL_37;
              }
              _BitScanForward64(&v55, *(_QWORD *)v44 ^ *(_QWORD *)v47);
              v49 = (_DWORD)v47 + ((unsigned int)v55 >> 3) - (_DWORD)v45;
            }
            goto LABEL_47;
          }
          v10 = v146;
          v13 = v148;
          v18 = indyfs_LZ4_dict;
        }
LABEL_103:
        v12 = v157;
        v5 = source;
      }
      v72 = v12 - v14;
      v73 = v6;
      v74 = v72;
      if ( v72 < 0xF )
      {
        *v6 = 16 * v72;
      }
      else
      {
        *v6 = -16;
        v75 = v72 - 15;
        ++v6;
        if ( v72 - 15 >= 0xFF )
        {
          v76 = v6;
          v6 += v75 / 0xFF;
          memset(v76, 255, v75 / 0xFF);
          v74 = v72;
          v75 %= 0xFFui64;
        }
        v73 = v6;
        *v6 = v75;
      }
      memcpy_0(v73 + 1, v14, v74);
      v16 = (_DWORD)v6 + 1 + v74 - v161;
LABEL_215:
      v7 = indyfs_LZ4_dict;
      goto LABEL_216;
    }
  }
  v77 = &v5[v4];
  v78 = (const char *)v7->table[2049];
  v145 = v7->internal_donotuse.currentOffset;
  v149 = v78;
  v152 = &v78[dictSize - v145];
  v79 = srcSize;
  v80 = &v5[-v145];
  v158 = &v78[dictSize];
  v156 = v80;
  v81 = (unsigned __int64)(v77 - 11);
  v154 = v77;
  v82 = v5;
  v147 = (unsigned __int64)(v77 - 11);
  v83 = v77 - 5;
  if ( (unsigned int)srcSize <= 0x7E000000 )
  {
    v84 = dictSize + srcSize;
    v85 = indyfs_LZ4_dict;
    indyfs_LZ4_dict->internal_donotuse.dictSize = v84;
    indyfs_LZ4_dict->internal_donotuse.currentOffset = v145 + srcSize;
    indyfs_LZ4_dict->internal_donotuse.tableType = 2;
    if ( srcSize >= 13 )
    {
      v86 = v5 + 1;
      indyfs_LZ4_dict->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)v5) >> 52] = (_DWORD)v5 - (_DWORD)v80;
      v87 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v5 + 1);
LABEL_114:
      v88 = 64;
      v89 = v87 >> 52;
      v90 = v86;
      v91 = 1;
      while ( 1 )
      {
        v92 = v91;
        v93 = (unsigned int *)((char *)v85 + 4 * v89);
        v94 = *v93;
        v91 = v88 >> 6;
        v95 = v90;
        v96 = (_DWORD)v90 - (_DWORD)v80;
        v90 += v92;
        ++v88;
        if ( (unsigned __int64)v90 > v81 )
          break;
        v97 = *(_QWORD *)v90;
        v98 = source;
        if ( (unsigned int)v94 < v145 )
          v98 = v78;
        *v93 = v96;
        v99 = v152;
        if ( (unsigned int)v94 >= v145 )
          v99 = v80;
        v100 = &v99[v94];
        v89 = (0xCF1BBCDCBB000000ui64 * v97) >> 52;
        if ( (int)v94 + 0xFFFF >= v96 && *(_DWORD *)v100 == *(_DWORD *)v95 )
        {
          v101 = v96 - v94;
          if ( v95 > v82 && v100 > v98 )
          {
            do
            {
              v102 = v100 - 1;
              v103 = v95 - 1;
              if ( *(v95 - 1) != *(v100 - 1) )
                break;
              --v95;
              --v100;
            }
            while ( v102 > v98 && v103 > v82 );
          }
          v104 = v6;
          v105 = (_DWORD)v95 - (_DWORD)v82;
          v106 = v6 + 1;
          if ( (unsigned int)((_DWORD)v95 - (_DWORD)v82) < 0xF )
          {
            *v104 = 16 * v105;
          }
          else
          {
            v107 = v105 - 15;
            *v104 = -16;
            if ( (int)(v105 - 15) >= 255 )
            {
              memset(v106, 255, v107 / 0xFF);
              v106 = (_QWORD *)((char *)v106 + v107 / 0xFF);
              LOBYTE(v107) = v107 / 0xFF + v107;
            }
            *(_BYTE *)v106 = v107;
            v106 = (_QWORD *)((char *)v106 + 1);
          }
          v108 = (_WORD *)((char *)v106 + v105);
          v109 = v82 - (const char *)v106;
          do
          {
            *v106 = *(_QWORD *)((char *)v106 + v109);
            ++v106;
          }
          while ( v106 < (_QWORD *)v108 );
          v110 = v108;
          while ( 1 )
          {
            *v110 = v101;
            v111 = v100 + 4;
            v6 = (char *)(v110 + 1);
            v112 = v95 + 4;
            if ( v98 != v149 )
            {
              v126 = (unsigned __int64)(v83 - 7);
              v127 = v95 + 4;
              if ( v112 >= v83 - 7 )
              {
LABEL_177:
                if ( (unsigned __int64)v127 >= v126 )
                {
LABEL_180:
                  if ( v127 < v83 - 3 && *v111 == *(_DWORD *)v127 )
                  {
                    v127 += 4;
                    ++v111;
                  }
                  if ( v127 < v83 - 1 && *(_WORD *)v111 == *(_WORD *)v127 )
                  {
                    v127 += 2;
                    v111 = (_DWORD *)((char *)v111 + 2);
                  }
                  if ( v127 < v83 && *(_BYTE *)v111 == *v127 )
                    LODWORD(v127) = (_DWORD)v127 + 1;
                  v116 = (_DWORD)v127 - (_DWORD)v112;
                }
                else
                {
                  while ( *(_QWORD *)v127 == *(_QWORD *)v111 )
                  {
                    v127 += 8;
                    v111 += 2;
                    if ( (unsigned __int64)v127 >= v126 )
                      goto LABEL_180;
                  }
                  _BitScanForward64(&v133, *(_QWORD *)v127 ^ *(_QWORD *)v111);
                  v116 = (_DWORD)v127 - (_DWORD)v112 + ((unsigned int)v133 >> 3);
                }
              }
              else
              {
                if ( *(_QWORD *)v112 == *(_QWORD *)v111 )
                {
                  v127 = v95 + 12;
                  v111 = v100 + 12;
                  goto LABEL_177;
                }
                _BitScanForward64(&v132, *(_QWORD *)v112 ^ *(_QWORD *)v111);
                v116 = (unsigned int)v132 >> 3;
              }
              v98 = source;
              v95 += v116 + 4;
              goto LABEL_191;
            }
            v113 = v83;
            if ( &v95[v158 - v100] <= v83 )
              v113 = &v95[v158 - v100];
            v114 = v95 + 4;
            v115 = v113 - 7;
            if ( v112 >= v113 - 7 )
              goto LABEL_140;
            if ( *(_QWORD *)v111 == *(_QWORD *)v112 )
              break;
            _BitScanForward64(&v121, *(_QWORD *)v111 ^ *(_QWORD *)v112);
            v116 = (unsigned int)v121 >> 3;
LABEL_153:
            v98 = source;
            v95 += v116 + 4;
            if ( v95 != v113 )
              goto LABEL_191;
            v117 = (unsigned __int64)(v83 - 7);
            v118 = source;
            v119 = v113;
            if ( v113 < v83 - 7 )
            {
              if ( *(_QWORD *)v113 != *(_QWORD *)source )
              {
                _BitScanForward64(&v123, *(_QWORD *)v113 ^ *(_QWORD *)source);
                LODWORD(v123) = (unsigned int)v123 >> 3;
                v116 += v123;
                v95 += (unsigned int)v123;
                goto LABEL_191;
              }
              v119 = v113 + 8;
              v118 = source + 8;
            }
            if ( (unsigned __int64)v119 >= v117 )
            {
LABEL_160:
              if ( v119 < v83 - 3 && *(_DWORD *)v118 == *(_DWORD *)v119 )
              {
                v119 += 4;
                v118 += 4;
              }
              if ( v119 < v83 - 1 && *(_WORD *)v118 == *(_WORD *)v119 )
              {
                v119 += 2;
                v118 += 2;
              }
              if ( v119 < v83 && *v118 == *v119 )
                LODWORD(v119) = (_DWORD)v119 + 1;
              v120 = (_DWORD)v119 - (_DWORD)v113;
              v116 += v120;
              v95 += v120;
            }
            else
            {
              while ( *(_QWORD *)v119 == *(_QWORD *)v118 )
              {
                v119 += 8;
                v118 += 8;
                if ( (unsigned __int64)v119 >= v117 )
                  goto LABEL_160;
              }
              _BitScanForward64(&v124, *(_QWORD *)v119 ^ *(_QWORD *)v118);
              v125 = ((unsigned int)v124 >> 3) + (_DWORD)v119 - (_DWORD)v113;
              v116 += v125;
              v95 += v125;
            }
LABEL_191:
            v128 = *v104;
            if ( v116 < 0xF )
            {
              *v104 = v128 + v116;
            }
            else
            {
              v129 = v116 - 15;
              *v104 = v128 + 15;
              *(_DWORD *)v6 = -1;
              if ( v129 >= 0x3FC )
              {
                v130 = v129 / 0x3FC;
                do
                {
                  v6 += 4;
                  v129 -= 1020;
                  *(_DWORD *)v6 = -1;
                  --v130;
                }
                while ( v130 );
              }
              v131 = &v6[v129 / 0xFF];
              *v131 = v129 / 0xFF + v129;
              v6 = v131 + 1;
            }
            v82 = v95;
            if ( (unsigned __int64)v95 >= v147 )
              goto LABEL_208;
            v80 = v156;
            v134 = v152;
            v135 = (_DWORD)v95 - (_DWORD)v156;
            indyfs_LZ4_dict->internal_donotuse.hashTable[(0xCF1BBCDCBB000000ui64 * *(_QWORD *)(v95 - 2)) >> 52] = (_DWORD)v95 - 2 - (_DWORD)v156;
            v136 = (0xCF1BBCDCBB000000ui64 * *(_QWORD *)v95) >> 52;
            v137 = indyfs_LZ4_dict->internal_donotuse.hashTable[v136];
            indyfs_LZ4_dict->internal_donotuse.hashTable[v136] = (_DWORD)v95 - (_DWORD)v156;
            if ( (unsigned int)v137 >= v145 )
              v134 = v156;
            if ( (unsigned int)v137 < v145 )
              v98 = v149;
            v100 = &v134[v137];
            if ( (int)v137 + 0xFFFF < v135 || *(_DWORD *)v100 != *(_DWORD *)v95 )
            {
              v138 = *(_QWORD *)(v95 + 1);
              v86 = v95 + 1;
              v85 = indyfs_LZ4_dict;
              v87 = 0xCF1BBCDCBB000000ui64 * v138;
              v78 = v149;
              v81 = v147;
              goto LABEL_114;
            }
            v104 = v6;
            v110 = v6 + 1;
            v101 = v135 - v137;
            *v104 = 0;
          }
          v114 = v95 + 12;
          v111 = v100 + 12;
LABEL_140:
          if ( v114 >= v115 )
          {
LABEL_143:
            if ( v114 < v113 - 3 && *v111 == *(_DWORD *)v114 )
            {
              v114 += 4;
              ++v111;
            }
            if ( v114 < v113 - 1 && *(_WORD *)v111 == *(_WORD *)v114 )
            {
              v114 += 2;
              v111 = (_DWORD *)((char *)v111 + 2);
            }
            if ( v114 < v113 && *(_BYTE *)v111 == *v114 )
              LODWORD(v114) = (_DWORD)v114 + 1;
            v116 = (_DWORD)v114 - (_DWORD)v112;
          }
          else
          {
            while ( *(_QWORD *)v111 == *(_QWORD *)v114 )
            {
              v114 += 8;
              v111 += 2;
              if ( v114 >= v115 )
                goto LABEL_143;
            }
            _BitScanForward64(&v122, *(_QWORD *)v111 ^ *(_QWORD *)v114);
            v116 = (_DWORD)v114 - (_DWORD)v112 + ((unsigned int)v122 >> 3);
          }
          goto LABEL_153;
        }
        v78 = v149;
        v81 = v147;
        v85 = indyfs_LZ4_dict;
      }
LABEL_208:
      v77 = v154;
      v5 = source;
    }
    v139 = v77 - v82;
    v140 = v6;
    if ( v139 < 0xF )
    {
      *v6 = 16 * v139;
    }
    else
    {
      *v6 = -16;
      v141 = v139 - 15;
      ++v6;
      if ( v139 - 15 >= 0xFF )
      {
        v142 = v6;
        v6 += v141 / 0xFF;
        memset(v142, 255, v141 / 0xFF);
        v141 %= 0xFFui64;
      }
      v140 = v6;
      *v6 = v141;
    }
    memcpy_0(v140 + 1, v82, v139);
    v16 = (_DWORD)v6 + 1 + v139 - v161;
    goto LABEL_215;
  }
  v16 = 0;
LABEL_217:
  v7->internal_donotuse.dictSize = v79;
  result = v16;
  v7->table[2049] = (unsigned __int64)v5;
  return result;
}

/*
==============
indyfs_LZ4_compress_limitedOutput
==============
*/
int indyfs_LZ4_compress_limitedOutput(const char *source, char *dest, int inputSize, int maxOutputSize)
{
  return j_indyfs_LZ4_compress_fast(source, dest, inputSize, maxOutputSize, 1);
}

/*
==============
indyfs_LZ4_compress_limitedOutput_continue
==============
*/
int indyfs_LZ4_compress_limitedOutput_continue(indyfs_LZ4_stream_u *indyfs_LZ4_stream, const char *src, char *dst, int srcSize, int dstCapacity)
{
  return j_indyfs_LZ4_compress_fast_continue(indyfs_LZ4_stream, src, dst, srcSize, dstCapacity, 1);
}

/*
==============
indyfs_LZ4_compress_limitedOutput_withState
==============
*/
int indyfs_LZ4_compress_limitedOutput_withState(void *state, const char *src, char *dst, int srcSize, int dstSize)
{
  return j_indyfs_LZ4_compress_fast_extState(state, src, dst, srcSize, dstSize, 1);
}

/*
==============
indyfs_LZ4_compress_withState
==============
*/
int indyfs_LZ4_compress_withState(void *state, const char *src, char *dst, int srcSize)
{
  int maxOutputSize; 

  if ( (unsigned int)srcSize <= 0x7E000000 )
    maxOutputSize = srcSize / 255 + srcSize + 16;
  else
    maxOutputSize = 0;
  return j_indyfs_LZ4_compress_fast_extState(state, src, dst, srcSize, maxOutputSize, 1);
}

/*
==============
indyfs_LZ4_create
==============
*/
void *indyfs_LZ4_create(char *inputBuffer)
{
  void *result; 
  void *v2; 

  result = malloc(0x4020ui64);
  v2 = result;
  if ( result )
  {
    memset_0(result, 0, 0x4020ui64);
    return v2;
  }
  return result;
}

/*
==============
indyfs_LZ4_createStream
==============
*/
indyfs_LZ4_stream_u *indyfs_LZ4_createStream()
{
  indyfs_LZ4_stream_u *result; 
  indyfs_LZ4_stream_u *v1; 

  result = (indyfs_LZ4_stream_u *)malloc(0x4020ui64);
  v1 = result;
  if ( result )
  {
    memset_0(result, 0, sizeof(indyfs_LZ4_stream_u));
    return v1;
  }
  return result;
}

/*
==============
indyfs_LZ4_createStreamDecode
==============
*/
indyfs_LZ4_streamDecode_u *indyfs_LZ4_createStreamDecode()
{
  return (indyfs_LZ4_streamDecode_u *)calloc(1ui64, 0x20ui64);
}

/*
==============
indyfs_LZ4_decompress_fast
==============
*/
__int64 indyfs_LZ4_decompress_fast(const char *source, char *dest, int originalSize)
{
  char *v4; 
  int v5; 
  const char *v6; 
  char *v7; 
  __int64 result; 
  unsigned int v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  char *v12; 
  signed __int64 v13; 
  const char *v14; 
  __int64 v15; 
  char *v16; 
  unsigned __int64 v17; 
  char *v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  char *v22; 
  char *v23; 
  __int64 v24; 
  char *v25; 
  char *v26; 
  _QWORD *v27; 
  signed __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  char *v31; 
  signed __int64 v32; 
  int v33[3]; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  __m256i v38; 

  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  v4 = &dest[originalSize];
  v33[0] = 0;
  v33[2] = 2;
  v5 = (int)source;
  v35 = 4;
  v6 = source;
  v36 = 4;
  v33[1] = 1;
  v7 = dest;
  v34 = 1i64;
  v37 = 4;
  __asm { vmovdqu [rsp+98h+var_58], ymm0 }
  if ( !originalSize )
  {
    result = 0xFFFFFFFFi64;
    if ( !*source )
      return 1i64;
    return result;
  }
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)v6++;
    v10 = (unsigned __int64)v9 >> 4;
    if ( v10 == 15 )
    {
      do
      {
        v11 = *(unsigned __int8 *)v6++;
        v10 += v11;
      }
      while ( (_BYTE)v11 == 0xFF );
    }
    v12 = &v7[v10];
    if ( &v7[v10] > v4 - 8 )
      break;
    v13 = v6 - v7;
    do
    {
      *(_QWORD *)v7 = *(_QWORD *)&v7[v13];
      v7 += 8;
    }
    while ( v7 < v12 );
    v14 = &v6[v10];
    v15 = v9 & 0xF;
    v16 = v12;
    v17 = *(unsigned __int16 *)v14;
    v6 = v14 + 2;
    v18 = &v12[-v17];
    *(_DWORD *)v12 = v17;
    if ( v15 == 15 )
    {
      do
      {
        v19 = *(unsigned __int8 *)v6++;
        v15 += v19;
      }
      while ( (_BYTE)v19 == 0xFF );
    }
    v20 = v15 + 4;
    v21 = (unsigned __int64)&v12[v20];
    if ( v17 >= 8 )
    {
      v24 = *(_QWORD *)v18;
      v23 = v18 + 8;
      *(_QWORD *)v16 = v24;
    }
    else
    {
      *v16 = *v18;
      v16[1] = v18[1];
      v16[2] = v18[2];
      v16[3] = v18[3];
      v22 = &v18[v33[v17]];
      *((_DWORD *)v16 + 1) = *(_DWORD *)v22;
      v23 = &v22[-v38.m256i_i32[v17]];
    }
    v25 = v16 + 8;
    if ( v21 <= (unsigned __int64)(v4 - 12) )
    {
      *(_QWORD *)v25 = *(_QWORD *)v23;
      if ( v20 > 0x10 )
      {
        v31 = v25 + 8;
        v32 = v23 - v31;
        do
        {
          *(_QWORD *)v31 = *(_QWORD *)&v31[v32 + 8];
          v31 += 8;
        }
        while ( (unsigned __int64)v31 < v21 );
      }
      goto LABEL_29;
    }
    v26 = v4 - 7;
    if ( v21 > (unsigned __int64)(v4 - 5) )
      return (unsigned int)(v5 - (_DWORD)v6 - 1);
    if ( v25 < v26 )
    {
      v27 = v25;
      do
      {
        *v27 = *(_QWORD *)((char *)v27 + v23 - v25);
        ++v27;
      }
      while ( v27 < (_QWORD *)v26 );
      v28 = v26 - v25;
      v25 = v4 - 7;
      v23 += v28;
    }
    v29 = 0i64;
    v30 = v21 - (_QWORD)v25;
    if ( (unsigned __int64)v25 > v21 )
      v30 = 0i64;
    if ( v30 )
    {
      do
      {
        ++v29;
        *v25++ = *v23++;
      }
      while ( v29 < v30 );
      v7 = (char *)v21;
    }
    else
    {
LABEL_29:
      v7 = (char *)v21;
    }
  }
  if ( v12 == v4 )
  {
    memcpy_0(v7, v6, v10);
    return (unsigned int)((_DWORD)v6 + v10 - v5);
  }
  return (unsigned int)(v5 - (_DWORD)v6 - 1);
}

/*
==============
indyfs_LZ4_decompress_fast_continue
==============
*/
int indyfs_LZ4_decompress_fast_continue(indyfs_LZ4_streamDecode_u *indyfs_LZ4_streamDecode, const char *source, char *dest, int originalSize)
{
  unsigned __int64 dictSize; 
  char *v5; 
  unsigned __int64 v6; 
  int result; 
  char *v9; 
  unsigned __int64 v10; 
  char *v12; 
  char *v13; 
  unsigned __int64 v14; 
  const char *v15; 
  int v16; 
  char v17; 
  unsigned __int64 v18; 
  size_t v19; 
  __int64 v20; 
  char *v21; 
  signed __int64 v22; 
  const char *v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  size_t v28; 
  size_t v29; 
  size_t v30; 
  char *v31; 
  char *v32; 
  char v33; 
  _DWORD *v34; 
  char *v35; 
  __int64 v36; 
  char *v37; 
  char *v38; 
  _QWORD *v39; 
  signed __int64 v40; 
  unsigned __int64 v41; 
  unsigned __int64 v42; 
  char *v43; 
  signed __int64 v44; 
  char *v45; 
  unsigned __int64 v46; 
  int v48; 
  int v49[3]; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  __m256i v54; 

  dictSize = indyfs_LZ4_streamDecode->table[3];
  v5 = dest;
  v6 = originalSize;
  v48 = (int)source;
  if ( dictSize )
  {
    v9 = (char *)indyfs_LZ4_streamDecode->table[2];
    if ( v9 == dest )
    {
      if ( dictSize < 0xFFFF && (v10 = indyfs_LZ4_streamDecode->table[1]) != 0 )
      {
        __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
        v12 = &dest[-dictSize];
        v13 = &dest[v6];
        v49[0] = 0;
        v14 = v10 + indyfs_LZ4_streamDecode->table[0];
        v49[1] = 1;
        v46 = v14;
        v15 = source;
        v49[2] = 2;
        v50 = 1i64;
        v51 = 4;
        v52 = 4;
        v53 = 4;
        __asm { vmovdqu [rsp+0D8h+var_70], ymm0 }
        if ( (_DWORD)v6 )
        {
          while ( 1 )
          {
            v17 = *v15;
            v18 = *(unsigned __int8 *)v15++;
            v19 = v18 >> 4;
            if ( v19 == 15 )
            {
              do
              {
                v20 = *(unsigned __int8 *)v15++;
                v19 += v20;
              }
              while ( (_BYTE)v20 == 0xFF );
            }
            v21 = &v5[v19];
            if ( &v5[v19] > v13 - 8 )
              break;
            v22 = v15 - v5;
            do
            {
              *(_QWORD *)v5 = *(_QWORD *)&v5[v22];
              v5 += 8;
            }
            while ( v5 < v21 );
            v23 = &v15[v19];
            v24 = v17 & 0xF;
            v25 = *(unsigned __int16 *)v23;
            v15 = v23 + 2;
            v26 = (unsigned __int64)&v21[-v25];
            *(_DWORD *)v21 = v25;
            if ( v24 == 15 )
            {
              do
              {
                v27 = *(unsigned __int8 *)v15++;
                v24 += v27;
              }
              while ( (_BYTE)v27 == 0xFF );
            }
            v28 = v24 + 4;
            v5 = &v21[v28];
            if ( v26 >= (unsigned __int64)v12 )
            {
              if ( v25 >= 8 )
              {
                v36 = *(_QWORD *)v26;
                v35 = (char *)(v26 + 8);
                *(_QWORD *)v21 = v36;
              }
              else
              {
                *v21 = *(_BYTE *)v26;
                v21[1] = *(_BYTE *)(v26 + 1);
                v21[2] = *(_BYTE *)(v26 + 2);
                v21[3] = *(_BYTE *)(v26 + 3);
                v34 = (_DWORD *)((unsigned int)v49[v25] + v26);
                *((_DWORD *)v21 + 1) = *v34;
                v35 = (char *)v34 - v54.m256i_i32[v25];
              }
              v37 = v21 + 8;
              if ( v5 <= v13 - 12 )
              {
                *(_QWORD *)v37 = *(_QWORD *)v35;
                if ( v28 > 0x10 )
                {
                  v43 = v37 + 8;
                  v44 = v35 - v43;
                  do
                  {
                    *(_QWORD *)v43 = *(_QWORD *)&v43[v44 + 8];
                    v43 += 8;
                  }
                  while ( v43 < v5 );
                }
              }
              else
              {
                v38 = v13 - 7;
                if ( v5 > v13 - 5 )
                  goto LABEL_48;
                if ( v37 < v38 )
                {
                  v39 = v37;
                  do
                  {
                    *v39 = *(_QWORD *)((char *)v39 + v35 - v37);
                    ++v39;
                  }
                  while ( v39 < (_QWORD *)v38 );
                  v40 = v38 - v37;
                  v37 = v13 - 7;
                  v35 += v40;
                }
                v41 = 0i64;
                v42 = v5 - v37;
                if ( v37 > v5 )
                  v42 = 0i64;
                if ( v42 )
                {
                  do
                  {
                    ++v41;
                    *v37++ = *v35++;
                  }
                  while ( v41 < v42 );
                }
                v14 = v46;
              }
            }
            else
            {
              if ( v5 > v13 - 5 )
                goto LABEL_48;
              v29 = (size_t)&v12[-v26];
              if ( v28 > (unsigned __int64)&v12[-v26] )
              {
                v30 = v28 - v29;
                memcpy_0(v21, (const void *)(v14 - v29), v29);
                v5 = &v21[v29];
                v31 = &v21[v29 + v30];
                if ( v30 <= v5 - v12 )
                {
                  memcpy_0(v5, v12, v30);
                  v14 = v46;
                  v5 = v31;
                }
                else
                {
                  v14 = v46;
                  v32 = v12;
                  if ( v5 > v31 )
                    v30 = 0i64;
                  if ( v30 )
                  {
                    do
                    {
                      v33 = *v32++;
                      *v5++ = v33;
                    }
                    while ( v32 - v12 < v30 );
                  }
                }
              }
              else
              {
                memmove_0(v21, (const void *)(v14 + v26 - (_QWORD)v12), v28);
                v14 = v46;
              }
            }
          }
          if ( v21 == v13 )
          {
            memcpy_0(v5, v15, v19);
            v16 = (_DWORD)v15 + v19 - v48;
            goto LABEL_49;
          }
LABEL_48:
          v16 = v48 - (_DWORD)v15 - 1;
LABEL_49:
          LODWORD(v6) = originalSize;
        }
        else
        {
          v16 = -1;
          if ( !*source )
            v16 = 1;
        }
      }
      else
      {
        v16 = j_indyfs_LZ4_decompress_fast(source, dest, v6);
      }
      if ( v16 > 0 )
      {
        indyfs_LZ4_streamDecode->table[3] += (int)v6;
        indyfs_LZ4_streamDecode->table[2] += (int)v6;
      }
      return v16;
    }
    v45 = &v9[-dictSize];
    indyfs_LZ4_streamDecode->table[1] = dictSize;
    indyfs_LZ4_streamDecode->table[0] = (unsigned __int64)v45;
    result = indyfs_LZ4_decompress_fast_extDict(source, dest, v6, v45, dictSize);
  }
  else
  {
    result = j_indyfs_LZ4_decompress_fast(source, dest, originalSize);
  }
  v16 = result;
  if ( result <= 0 )
    return result;
  indyfs_LZ4_streamDecode->table[3] = v6;
  indyfs_LZ4_streamDecode->table[2] = (unsigned __int64)&v5[v6];
  return v16;
}

/*
==============
indyfs_LZ4_decompress_fast_extDict
==============
*/
__int64 indyfs_LZ4_decompress_fast_extDict(const char *source, char *dest, int originalSize, const void *dictStart, unsigned __int64 dictSize)
{
  char *v5; 
  int v7; 
  char *v8; 
  const char *v9; 
  char *v11; 
  __int64 result; 
  char v13; 
  unsigned __int64 v14; 
  size_t v15; 
  __int64 v16; 
  char *v17; 
  signed __int64 v18; 
  const char *v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  size_t v24; 
  char *v25; 
  size_t v26; 
  char *v27; 
  char *v28; 
  char v29; 
  _DWORD *v30; 
  char *v31; 
  __int64 v32; 
  char *v33; 
  char *v34; 
  _QWORD *v35; 
  signed __int64 v36; 
  unsigned __int64 v37; 
  unsigned __int64 v38; 
  char *v39; 
  signed __int64 v40; 
  char *v41; 
  int v42[3]; 
  __int64 v43; 
  int v44; 
  int v45; 
  int v46; 
  __m256i v47; 

  v5 = (char *)dictStart + dictSize;
  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  v7 = (int)source;
  v8 = &dest[originalSize];
  v41 = v5;
  v42[0] = 0;
  v9 = source;
  v42[2] = 2;
  v42[1] = 1;
  v43 = 1i64;
  v11 = dest;
  v44 = 4;
  v45 = 4;
  v46 = 4;
  __asm { vmovdqu [rsp+0B8h+var_70], ymm0 }
  if ( originalSize )
  {
    while ( 1 )
    {
      v13 = *v9;
      v14 = *(unsigned __int8 *)v9++;
      v15 = v14 >> 4;
      if ( v15 == 15 )
      {
        do
        {
          v16 = *(unsigned __int8 *)v9++;
          v15 += v16;
        }
        while ( (_BYTE)v16 == 0xFF );
      }
      v17 = &v11[v15];
      if ( &v11[v15] > v8 - 8 )
        break;
      v18 = v9 - v11;
      do
      {
        *(_QWORD *)v11 = *(_QWORD *)&v11[v18];
        v11 += 8;
      }
      while ( v11 < v17 );
      v19 = &v9[v15];
      v20 = v13 & 0xF;
      v21 = *(unsigned __int16 *)v19;
      v9 = v19 + 2;
      v22 = (unsigned __int64)&v17[-v21];
      *(_DWORD *)v17 = v21;
      if ( v20 == 15 )
      {
        do
        {
          v23 = *(unsigned __int8 *)v9++;
          v20 += v23;
        }
        while ( (_BYTE)v23 == 0xFF );
      }
      v24 = v20 + 4;
      v11 = &v17[v24];
      if ( v22 >= (unsigned __int64)dest )
      {
        if ( v21 >= 8 )
        {
          v32 = *(_QWORD *)v22;
          v31 = (char *)(v22 + 8);
          *(_QWORD *)v17 = v32;
        }
        else
        {
          *v17 = *(_BYTE *)v22;
          v17[1] = *(_BYTE *)(v22 + 1);
          v17[2] = *(_BYTE *)(v22 + 2);
          v17[3] = *(_BYTE *)(v22 + 3);
          v30 = (_DWORD *)((unsigned int)v42[v21] + v22);
          *((_DWORD *)v17 + 1) = *v30;
          v31 = (char *)v30 - v47.m256i_i32[v21];
        }
        v33 = v17 + 8;
        if ( v11 <= v8 - 12 )
        {
          *(_QWORD *)v33 = *(_QWORD *)v31;
          if ( v24 > 0x10 )
          {
            v39 = v33 + 8;
            v40 = v31 - v39;
            do
            {
              *(_QWORD *)v39 = *(_QWORD *)&v39[v40 + 8];
              v39 += 8;
            }
            while ( v39 < v11 );
          }
        }
        else
        {
          v34 = v8 - 7;
          if ( v11 > v8 - 5 )
            return (unsigned int)(v7 - (_DWORD)v9 - 1);
          if ( v33 < v34 )
          {
            v35 = v33;
            do
            {
              *v35 = *(_QWORD *)((char *)v35 + v31 - v33);
              ++v35;
            }
            while ( v35 < (_QWORD *)v34 );
            v5 = v41;
            v36 = v34 - v33;
            v33 = v8 - 7;
            v31 += v36;
          }
          v37 = 0i64;
          v38 = v11 - v33;
          if ( v33 > v11 )
            v38 = 0i64;
          if ( v38 )
          {
            do
            {
              ++v37;
              *v33++ = *v31++;
            }
            while ( v37 < v38 );
          }
        }
      }
      else
      {
        if ( v11 > v8 - 5 )
          return (unsigned int)(v7 - (_DWORD)v9 - 1);
        v25 = &dest[-v22];
        if ( v24 > (unsigned __int64)&dest[-v22] )
        {
          v26 = v24 - (_QWORD)v25;
          memcpy_0(v17, (const void *)(v5 - v25), (size_t)&dest[-v22]);
          v11 = &v17[(_QWORD)v25];
          v27 = &v17[(_QWORD)v25 + v26];
          if ( v26 <= v11 - dest )
          {
            memcpy_0(v11, dest, v26);
            v5 = v41;
            v11 = v27;
          }
          else
          {
            v5 = v41;
            v28 = dest;
            if ( v11 > v27 )
              v26 = 0i64;
            if ( v26 )
            {
              do
              {
                v29 = *v28++;
                *v11++ = v29;
              }
              while ( v28 - dest < v26 );
            }
          }
        }
        else
        {
          memmove_0(v17, &v5[v22 - (_QWORD)dest], v24);
          v5 = v41;
        }
      }
    }
    if ( v17 == v8 )
    {
      memcpy_0(v11, v9, v15);
      return (unsigned int)((_DWORD)v9 + v15 - v7);
    }
    return (unsigned int)(v7 - (_DWORD)v9 - 1);
  }
  else
  {
    result = 0xFFFFFFFFi64;
    if ( !*source )
      return 1i64;
  }
  return result;
}

/*
==============
indyfs_LZ4_decompress_fast_usingDict
==============
*/
int indyfs_LZ4_decompress_fast_usingDict(const char *source, char *dest, int originalSize, const char *dictStart, int dictSize)
{
  if ( !dictSize || &dictStart[dictSize] == dest )
    return j_indyfs_LZ4_decompress_fast(source, dest, originalSize);
  else
    return indyfs_LZ4_decompress_fast_extDict(source, dest, originalSize, dictStart, dictSize);
}

/*
==============
indyfs_LZ4_decompress_fast_withPrefix64k
==============
*/

int __fastcall indyfs_LZ4_decompress_fast_withPrefix64k(const char *source, char *dest, int originalSize)
{
  return j_indyfs_LZ4_decompress_fast(source, dest, originalSize);
}

/*
==============
indyfs_LZ4_decompress_safe
==============
*/
__int64 indyfs_LZ4_decompress_safe(const char *source, char *dest, int compressedSize, int maxDecompressedSize)
{
  const char *v6; 
  char *v7; 
  int v8; 
  unsigned int v12; 
  int v13; 
  char v14; 
  bool v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  char *v20; 
  __int64 v21; 
  char *v22; 
  const char *v23; 
  signed __int64 v24; 
  const char *v25; 
  char *v26; 
  unsigned __int64 v27; 
  char *v28; 
  __int64 v29; 
  unsigned __int8 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  char *v33; 
  char *v34; 
  __int64 v35; 
  char *v36; 
  char *v37; 
  _QWORD *v38; 
  signed __int64 v39; 
  char v40; 
  char *v41; 
  __int64 v42; 
  int v43[3]; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v47; 
  __m256i v48; 

  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  v6 = &source[compressedSize];
  v7 = &dest[maxDecompressedSize];
  v43[0] = 0;
  v43[1] = 1;
  v8 = (int)source;
  v43[2] = 2;
  _RDX = source;
  v44 = 1i64;
  _RBX = dest;
  v45 = 4;
  v46 = 4;
  v47 = 4;
  __asm { vmovdqu [rsp+0A8h+var_68], ymm0 }
  if ( !maxDecompressedSize )
  {
    if ( compressedSize == 1 && !*source )
      return 0i64;
    return 0xFFFFFFFFi64;
  }
  if ( !compressedSize )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)_RDX++;
      v13 = v12 & 0xF;
      v14 = v12;
      v15 = 0;
      if ( v13 != 15 )
        v15 = _RDX + 16 < v6 && _RBX + 32 <= v7;
      v16 = (unsigned __int64)v12 >> 4;
      if ( !v15 || v12 >= 0xF0 )
        break;
      v17 = *(unsigned __int16 *)&_RDX[v16];
      v18 = (unsigned __int64)&_RBX[v16 - v17];
      if ( v18 < (unsigned __int64)dest || v17 < 8 )
        break;
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rbx], xmm0
      }
      v20 = &_RBX[v16];
      _RDX += v16 + 2;
      *(_QWORD *)v20 = *(_QWORD *)v18;
      *((_QWORD *)v20 + 1) = *(_QWORD *)(v18 + 8);
      *((_WORD *)v20 + 8) = *(_WORD *)(v18 + 16);
      _RBX = &v20[v13 + 4];
    }
    if ( v16 == 15 )
    {
      if ( _RDX >= v6 - 15 )
        break;
      do
      {
        v21 = *(unsigned __int8 *)_RDX;
        v16 += v21;
        ++_RDX;
      }
      while ( _RDX < v6 - 15 && (_BYTE)v21 == 0xFF );
      if ( &_RBX[v16] < _RBX || &_RDX[v16] < _RDX )
        break;
    }
    v22 = &_RBX[v16];
    if ( &_RBX[v16] > v7 - 12 || (v23 = &_RDX[v16], &_RDX[v16] > v6 - 8) )
    {
      if ( &_RDX[v16] == v6 && v22 <= v7 )
      {
        memcpy_0(_RBX, _RDX, v16);
        return (unsigned int)((_DWORD)_RBX + v16 - (_DWORD)dest);
      }
      return (unsigned int)(v8 - (_DWORD)_RDX - 1);
    }
    v24 = _RDX - _RBX;
    do
    {
      *(_QWORD *)_RBX = *(_QWORD *)&_RBX[v24];
      _RBX += 8;
    }
    while ( _RBX < v22 );
    v25 = v23;
    v26 = v22;
    v27 = *(unsigned __int16 *)v25;
    _RDX = v25 + 2;
    v28 = &v22[-v27];
    if ( &v22[-v27] < dest )
      return (unsigned int)(v8 - (_DWORD)_RDX - 1);
    v29 = v14 & 0xF;
    *(_DWORD *)v22 = v27;
    if ( v29 == 15 )
    {
      while ( 1 )
      {
        v30 = *_RDX++;
        if ( _RDX > v6 - 5 )
          return (unsigned int)(v8 - (_DWORD)_RDX - 1);
        v29 += v30;
        if ( v30 != 0xFF )
        {
          if ( &v22[v29] < v22 )
            return (unsigned int)(v8 - (_DWORD)_RDX - 1);
          break;
        }
      }
    }
    v31 = v29 + 4;
    v32 = (unsigned __int64)&v22[v31];
    if ( v27 >= 8 )
    {
      v35 = *(_QWORD *)v28;
      v34 = v28 + 8;
      *(_QWORD *)v26 = v35;
    }
    else
    {
      *v26 = *v28;
      v26[1] = v28[1];
      v26[2] = v28[2];
      v26[3] = v28[3];
      v33 = &v28[v43[v27]];
      *((_DWORD *)v26 + 1) = *(_DWORD *)v33;
      v34 = &v33[-v48.m256i_i32[v27]];
    }
    v36 = v26 + 8;
    if ( v32 <= (unsigned __int64)(v7 - 12) )
    {
      *(_QWORD *)v36 = *(_QWORD *)v34;
      if ( v31 > 0x10 )
      {
        v41 = v36 + 8;
        v42 = v34 - v41;
        do
        {
          *(_QWORD *)v41 = *(_QWORD *)&v41[v42 + 8];
          v41 += 8;
        }
        while ( (unsigned __int64)v41 < v32 );
      }
      goto LABEL_41;
    }
    v37 = v7 - 7;
    if ( v32 > (unsigned __int64)(v7 - 5) )
      return (unsigned int)(v8 - (_DWORD)_RDX - 1);
    if ( v36 < v37 )
    {
      v38 = v36;
      do
      {
        *v38 = *(_QWORD *)((char *)v38 + v34 - v36);
        ++v38;
      }
      while ( v38 < (_QWORD *)v37 );
      v39 = v37 - v36;
      v36 = v7 - 7;
      v34 += v39;
    }
    if ( (unsigned __int64)v36 >= v32 )
    {
LABEL_41:
      _RBX = (char *)v32;
    }
    else
    {
      do
      {
        v40 = *v34++;
        *v36++ = v40;
      }
      while ( (unsigned __int64)v36 < v32 );
      _RBX = (char *)v32;
    }
  }
  return (unsigned int)(v8 - (_DWORD)_RDX - 1);
}

/*
==============
indyfs_LZ4_decompress_safe_continue
==============
*/
__int64 indyfs_LZ4_decompress_safe_continue(indyfs_LZ4_streamDecode_u *indyfs_LZ4_streamDecode, const char *source, char *dest, int compressedSize, int maxOutputSize)
{
  unsigned __int64 prefixSize; 
  int v9; 
  char *v10; 
  int v11; 
  unsigned __int64 v12; 
  char *v16; 
  const char *v17; 
  char *v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  int v21; 
  char v22; 
  int v23; 
  BOOL v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  char *v27; 
  char *v29; 
  __int64 v30; 
  char *v31; 
  const char *v32; 
  signed __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  __int64 v36; 
  unsigned __int8 v37; 
  size_t v38; 
  char *v39; 
  size_t v40; 
  char *v41; 
  signed __int64 v42; 
  _DWORD *v43; 
  char *v44; 
  __int64 v45; 
  char *v46; 
  char *v47; 
  _QWORD *v48; 
  signed __int64 v49; 
  char v50; 
  char *v51; 
  signed __int64 v52; 
  char *v53; 
  const char *v55; 
  char *v56; 
  unsigned __int64 v57; 
  unsigned __int64 v58; 
  int v59; 
  int v60; 
  int v61[3]; 
  __int64 v62; 
  int v63; 
  int v64; 
  int v65; 
  __m256i v66; 

  prefixSize = indyfs_LZ4_streamDecode->table[3];
  v59 = (int)dest;
  v60 = (int)source;
  if ( !prefixSize )
  {
    v9 = j_indyfs_LZ4_decompress_safe(source, dest, compressedSize, maxOutputSize);
    goto LABEL_69;
  }
  v10 = (char *)indyfs_LZ4_streamDecode->table[2];
  if ( v10 != dest )
  {
    v53 = &v10[-prefixSize];
    indyfs_LZ4_streamDecode->table[0] = (unsigned __int64)v53;
    indyfs_LZ4_streamDecode->table[1] = prefixSize;
    v9 = j_indyfs_LZ4_decompress_safe_forceExtDict(source, dest, compressedSize, maxOutputSize, v53, prefixSize);
LABEL_69:
    v11 = v9;
    if ( v9 > 0 )
    {
      indyfs_LZ4_streamDecode->table[3] = v9;
      indyfs_LZ4_streamDecode->table[2] = (unsigned __int64)&dest[v9];
    }
    return (unsigned int)v11;
  }
  if ( prefixSize >= 0xFFFF )
  {
    v11 = j_indyfs_LZ4_decompress_safe_withPrefix64k(source, dest, compressedSize, maxOutputSize);
    goto LABEL_66;
  }
  v12 = indyfs_LZ4_streamDecode->table[1];
  v58 = v12;
  if ( !v12 )
  {
    v11 = indyfs_LZ4_decompress_safe_withSmallPrefix(source, dest, compressedSize, maxOutputSize, prefixSize);
    goto LABEL_66;
  }
  v11 = 0;
  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  _RBX = dest;
  _RSI = source;
  v16 = &dest[maxOutputSize];
  v17 = &source[compressedSize];
  v55 = v17;
  v18 = &dest[-prefixSize];
  v56 = v16;
  v19 = v12 + indyfs_LZ4_streamDecode->table[0];
  v61[0] = 0;
  v57 = v19;
  v61[1] = 1;
  v61[2] = 2;
  v62 = 1i64;
  v63 = 4;
  v64 = 4;
  v65 = 4;
  __asm { vmovdqu [rsp+0F8h+var_78], ymm0 }
  if ( !maxOutputSize )
  {
    if ( compressedSize != 1 || *source )
      v11 = -1;
    goto LABEL_66;
  }
  if ( compressedSize )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(unsigned __int8 *)_RSI++;
          v21 = v20 & 0xF;
          v22 = v20;
          v23 = 0;
          v24 = 0;
          if ( v21 != 15 )
            v24 = _RSI + 16 < v17 && _RBX + 32 <= v16;
          LOBYTE(v23) = v20 < 0xF0;
          v25 = (unsigned __int64)v20 >> 4;
          if ( (v24 & v23) == 0 )
            break;
          v26 = *(unsigned __int16 *)&_RSI[v25];
          v27 = &_RBX[v25 - v26];
          if ( v27 < v18 || v26 < 8 )
            break;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups xmmword ptr [rbx], xmm0
          }
          v29 = &_RBX[v25];
          _RSI += v25 + 2;
          *(_QWORD *)v29 = *(_QWORD *)v27;
          *((_QWORD *)v29 + 1) = *((_QWORD *)v27 + 1);
          *((_WORD *)v29 + 8) = *((_WORD *)v27 + 8);
          _RBX = &v29[v21 + 4];
        }
        if ( v25 == 15 )
        {
          if ( _RSI >= v17 - 15 )
            goto LABEL_65;
          do
          {
            v30 = *(unsigned __int8 *)_RSI;
            v25 += v30;
            ++_RSI;
          }
          while ( _RSI < v17 - 15 && (_BYTE)v30 == 0xFF );
          if ( &_RBX[v25] < _RBX || &_RSI[v25] < _RSI )
          {
LABEL_65:
            v11 = v60 - (_DWORD)_RSI - 1;
            goto LABEL_66;
          }
        }
        v31 = &_RBX[v25];
        if ( &_RBX[v25] > v16 - 12 || (v32 = &_RSI[v25], &_RSI[v25] > v55 - 8) )
        {
          if ( &_RSI[v25] == v55 && v31 <= v16 )
          {
            memcpy_0(_RBX, _RSI, v25);
            v11 = (_DWORD)_RBX + v25 - v59;
            goto LABEL_66;
          }
          goto LABEL_65;
        }
        v33 = _RSI - _RBX;
        do
        {
          *(_QWORD *)_RBX = *(_QWORD *)&_RBX[v33];
          _RBX += 8;
        }
        while ( _RBX < v31 );
        v34 = *(unsigned __int16 *)v32;
        _RSI = v32 + 2;
        v35 = (unsigned __int64)&v31[-v34];
        if ( v58 < 0x10000 && v35 + v58 < (unsigned __int64)v18 )
          goto LABEL_65;
        v36 = v22 & 0xF;
        *(_DWORD *)v31 = v34;
        if ( v36 == 15 )
        {
          while ( 1 )
          {
            v37 = *_RSI++;
            if ( _RSI > v55 - 5 )
              goto LABEL_65;
            v36 += v37;
            if ( v37 != 0xFF )
            {
              if ( &v31[v36] < v31 )
                goto LABEL_65;
              break;
            }
          }
        }
        v38 = v36 + 4;
        _RBX = &v31[v38];
        if ( v35 < (unsigned __int64)v18 )
          break;
        if ( v34 >= 8 )
        {
          v45 = *(_QWORD *)v35;
          v44 = (char *)(v35 + 8);
          *(_QWORD *)v31 = v45;
        }
        else
        {
          *v31 = *(_BYTE *)v35;
          v31[1] = *(_BYTE *)(v35 + 1);
          v31[2] = *(_BYTE *)(v35 + 2);
          v31[3] = *(_BYTE *)(v35 + 3);
          v43 = (_DWORD *)((unsigned int)v61[v34] + v35);
          *((_DWORD *)v31 + 1) = *v43;
          v44 = (char *)v43 - v66.m256i_i32[v34];
        }
        v46 = v31 + 8;
        if ( _RBX <= v16 - 12 )
        {
          *(_QWORD *)v46 = *(_QWORD *)v44;
          if ( v38 > 0x10 )
          {
            v51 = v46 + 8;
            v52 = v44 - v51;
            do
            {
              *(_QWORD *)v51 = *(_QWORD *)&v51[v52 + 8];
              v51 += 8;
            }
            while ( v51 < _RBX );
          }
        }
        else
        {
          v47 = v16 - 7;
          if ( _RBX > v16 - 5 )
            goto LABEL_65;
          if ( v46 < v47 )
          {
            v48 = v46;
            do
            {
              *v48 = *(_QWORD *)((char *)v48 + v44 - v46);
              ++v48;
            }
            while ( v48 < (_QWORD *)v47 );
            v49 = v47 - v46;
            v46 = v16 - 7;
            v44 += v49;
          }
          for ( ; v46 < _RBX; ++v46 )
          {
            v50 = *v44++;
            *v46 = v50;
          }
        }
LABEL_15:
        v17 = v55;
      }
      if ( _RBX > v16 - 5 )
        goto LABEL_65;
      v39 = &v18[-v35];
      if ( v38 <= (unsigned __int64)&v18[-v35] )
        break;
      v40 = v38 - (_QWORD)v39;
      memcpy_0(v31, (const void *)(v57 - (_QWORD)v39), (size_t)&v18[-v35]);
      _RBX = &v31[(_QWORD)v39];
      if ( v40 <= &v31[(_QWORD)v39] - v18 )
      {
        memcpy_0(&v31[(_QWORD)v39], v18, v40);
        _RBX += v40;
        goto LABEL_14;
      }
      v16 = v56;
      v41 = &_RBX[v40];
      v17 = v55;
      if ( _RBX < &_RBX[v40] )
      {
        v42 = v18 - _RBX;
        do
        {
          *_RBX = _RBX[v42];
          ++_RBX;
        }
        while ( _RBX < v41 );
      }
    }
    memmove_0(v31, (const void *)(v57 + v35 - (_QWORD)v18), v38);
LABEL_14:
    v16 = v56;
    goto LABEL_15;
  }
  v11 = -1;
LABEL_66:
  if ( v11 > 0 )
  {
    indyfs_LZ4_streamDecode->table[3] += v11;
    indyfs_LZ4_streamDecode->table[2] += v11;
  }
  return (unsigned int)v11;
}

/*
==============
indyfs_LZ4_decompress_safe_forceExtDict
==============
*/
__int64 indyfs_LZ4_decompress_safe_forceExtDict(const char *source, char *dest, int compressedSize, int maxOutputSize, const void *dictStart, unsigned __int64 dictSize)
{
  const char *v10; 
  char *v11; 
  unsigned int v13; 
  int v14; 
  char v15; 
  bool v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v21; 
  __int64 v22; 
  char *v23; 
  const char *v24; 
  const char *v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  unsigned __int8 v29; 
  size_t v30; 
  char *v31; 
  size_t v32; 
  unsigned __int64 v33; 
  char *v34; 
  _DWORD *v35; 
  char *v36; 
  __int64 v37; 
  char *v38; 
  char *v39; 
  _QWORD *v40; 
  signed __int64 v41; 
  char v42; 
  char *v43; 
  signed __int64 v44; 
  char *v45; 
  int v46; 
  int v47[3]; 
  __int64 v48; 
  int v49; 
  int v50; 
  int v51; 
  __m256i v52; 

  _RSI = source;
  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  _RBX = (unsigned __int64)dest;
  v10 = &source[compressedSize];
  v11 = &dest[maxOutputSize];
  v46 = (int)source;
  v45 = (char *)dictStart + dictSize;
  v47[0] = 0;
  v47[1] = 1;
  v47[2] = 2;
  v48 = 1i64;
  v49 = 4;
  v50 = 4;
  v51 = 4;
  __asm { vmovdqu [rsp+0B8h+var_68], ymm0 }
  if ( !maxOutputSize )
  {
    if ( compressedSize == 1 && !*source )
      return 0i64;
    return 0xFFFFFFFFi64;
  }
  if ( !compressedSize )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)_RSI++;
      v14 = v13 & 0xF;
      v15 = v13;
      v16 = 0;
      if ( v14 != 15 )
        v16 = _RSI + 16 < v10 && _RBX + 32 <= (unsigned __int64)v11;
      v17 = (unsigned __int64)v13 >> 4;
      if ( !v16 || v13 >= 0xF0 )
        break;
      v18 = *(unsigned __int16 *)&_RSI[v17];
      v19 = _RBX + v17 - v18;
      if ( v19 < (unsigned __int64)dest || v18 < 8 )
        break;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rbx], xmm0
      }
      v21 = v17 + _RBX;
      _RSI += v17 + 2;
      *(_QWORD *)v21 = *(_QWORD *)v19;
      *(_QWORD *)(v21 + 8) = *(_QWORD *)(v19 + 8);
      *(_WORD *)(v21 + 16) = *(_WORD *)(v19 + 16);
      _RBX = (unsigned int)(v14 + 4) + v21;
    }
    if ( v17 == 15 )
    {
      if ( _RSI >= v10 - 15 )
        break;
      do
      {
        v22 = *(unsigned __int8 *)_RSI;
        v17 += v22;
        ++_RSI;
      }
      while ( _RSI < v10 - 15 && (_BYTE)v22 == 0xFF );
      if ( v17 + _RBX < _RBX || &_RSI[v17] < _RSI )
        break;
    }
    v23 = (char *)(v17 + _RBX);
    if ( v17 + _RBX > (unsigned __int64)(v11 - 12) || (v24 = &_RSI[v17], &_RSI[v17] > v10 - 8) )
    {
      if ( &_RSI[v17] == v10 && v23 <= v11 )
      {
        memcpy_0((void *)_RBX, _RSI, v17);
        return (unsigned int)(_RBX + v17 - (_DWORD)dest);
      }
      return (unsigned int)(v46 - (_DWORD)_RSI - 1);
    }
    v25 = &_RSI[-_RBX];
    do
    {
      *(_QWORD *)_RBX = *(_QWORD *)&v25[_RBX];
      _RBX += 8i64;
    }
    while ( _RBX < (unsigned __int64)v23 );
    v26 = *(unsigned __int16 *)v24;
    _RSI = v24 + 2;
    v27 = (unsigned __int64)&v23[-v26];
    if ( dictSize < 0x10000 && v27 + dictSize < (unsigned __int64)dest )
      return (unsigned int)(v46 - (_DWORD)_RSI - 1);
    v28 = v15 & 0xF;
    *(_DWORD *)v23 = v26;
    if ( v28 == 15 )
    {
      while ( 1 )
      {
        v29 = *_RSI++;
        if ( _RSI > v10 - 5 )
          return (unsigned int)(v46 - (_DWORD)_RSI - 1);
        v28 += v29;
        if ( v29 != 0xFF )
        {
          if ( &v23[v28] < v23 )
            return (unsigned int)(v46 - (_DWORD)_RSI - 1);
          break;
        }
      }
    }
    v30 = v28 + 4;
    _RBX = (unsigned __int64)&v23[v30];
    if ( v27 >= (unsigned __int64)dest )
    {
      if ( v26 >= 8 )
      {
        v37 = *(_QWORD *)v27;
        v36 = (char *)(v27 + 8);
        *(_QWORD *)v23 = v37;
      }
      else
      {
        *v23 = *(_BYTE *)v27;
        v23[1] = *(_BYTE *)(v27 + 1);
        v23[2] = *(_BYTE *)(v27 + 2);
        v23[3] = *(_BYTE *)(v27 + 3);
        v35 = (_DWORD *)((unsigned int)v47[v26] + v27);
        *((_DWORD *)v23 + 1) = *v35;
        v36 = (char *)v35 - v52.m256i_i32[v26];
      }
      v38 = v23 + 8;
      if ( _RBX <= (unsigned __int64)(v11 - 12) )
      {
        *(_QWORD *)v38 = *(_QWORD *)v36;
        if ( v30 > 0x10 )
        {
          v43 = v38 + 8;
          v44 = v36 - v43;
          do
          {
            *(_QWORD *)v43 = *(_QWORD *)&v43[v44 + 8];
            v43 += 8;
          }
          while ( (unsigned __int64)v43 < _RBX );
        }
      }
      else
      {
        v39 = v11 - 7;
        if ( _RBX > (unsigned __int64)(v11 - 5) )
          return (unsigned int)(v46 - (_DWORD)_RSI - 1);
        if ( v38 < v39 )
        {
          v40 = v38;
          do
          {
            *v40 = *(_QWORD *)((char *)v40 + v36 - v38);
            ++v40;
          }
          while ( v40 < (_QWORD *)v39 );
          v41 = v39 - v38;
          v38 = v11 - 7;
          v36 += v41;
        }
        for ( ; (unsigned __int64)v38 < _RBX; ++v38 )
        {
          v42 = *v36++;
          *v38 = v42;
        }
      }
    }
    else
    {
      if ( _RBX > (unsigned __int64)(v11 - 5) )
        return (unsigned int)(v46 - (_DWORD)_RSI - 1);
      v31 = &dest[-v27];
      if ( v30 > (unsigned __int64)&dest[-v27] )
      {
        v32 = v30 - (_QWORD)v31;
        memcpy_0(v23, (const void *)(v45 - v31), (size_t)&dest[-v27]);
        _RBX = (unsigned __int64)&v23[(_QWORD)v31];
        if ( v32 <= &v23[(_QWORD)v31] - dest )
        {
          memcpy_0(&v23[(_QWORD)v31], dest, v32);
          _RBX += v32;
        }
        else
        {
          v33 = v32 + _RBX;
          if ( _RBX < v32 + _RBX )
          {
            v34 = &dest[-_RBX];
            do
            {
              *(_BYTE *)_RBX = v34[_RBX];
              ++_RBX;
            }
            while ( _RBX < v33 );
          }
        }
      }
      else
      {
        memmove_0(v23, &v45[v27 - (_QWORD)dest], v30);
      }
    }
  }
  return (unsigned int)(v46 - (_DWORD)_RSI - 1);
}

/*
==============
indyfs_LZ4_decompress_safe_partial
==============
*/
__int64 indyfs_LZ4_decompress_safe_partial(const char *source, char *dest, int compressedSize, int targetOutputSize, int maxDecompressedSize)
{
  int v7; 
  const char *v8; 
  char *v10; 
  char *v11; 
  unsigned int v14; 
  int v15; 
  char v16; 
  bool v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  char *v22; 
  __int64 v23; 
  char *v24; 
  const char *v25; 
  signed __int64 v26; 
  const char *v27; 
  char *v28; 
  unsigned __int64 v29; 
  char *v30; 
  __int64 v31; 
  unsigned __int8 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  char *v35; 
  char *v36; 
  __int64 v37; 
  char *v38; 
  char *v39; 
  _QWORD *v40; 
  signed __int64 v41; 
  char v42; 
  char *v43; 
  __int64 v44; 
  char *v45; 
  int v46[3]; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v50; 
  __m256i v51; 

  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  v7 = (int)source;
  v8 = &source[compressedSize];
  v46[0] = 0;
  _RDX = source;
  v46[1] = 1;
  v10 = &dest[maxDecompressedSize];
  v46[2] = 2;
  v47 = 1i64;
  v48 = 4;
  v11 = v10 - 12;
  v49 = 4;
  if ( &dest[targetOutputSize] <= v10 - 12 )
    v11 = &dest[targetOutputSize];
  v50 = 4;
  v45 = v11;
  _RBX = dest;
  __asm { vmovdqu [rsp+0A8h+var_60], ymm0 }
  if ( !maxDecompressedSize )
  {
    if ( compressedSize == 1 && !*source )
      return 0i64;
    return 0xFFFFFFFFi64;
  }
  if ( !compressedSize )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)_RDX++;
      v15 = v14 & 0xF;
      v16 = v14;
      v17 = 0;
      if ( v15 != 15 )
        v17 = _RDX + 16 < v8 && _RBX + 32 <= v10;
      v18 = (unsigned __int64)v14 >> 4;
      if ( !v17 || v14 >= 0xF0 )
        break;
      v19 = *(unsigned __int16 *)&_RDX[v18];
      v11 = v45;
      v20 = (unsigned __int64)&_RBX[v18 - v19];
      if ( v20 < (unsigned __int64)dest || v19 < 8 )
        break;
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rbx], xmm0
      }
      v22 = &_RBX[v18];
      _RDX += v18 + 2;
      *(_QWORD *)v22 = *(_QWORD *)v20;
      *((_QWORD *)v22 + 1) = *(_QWORD *)(v20 + 8);
      *((_WORD *)v22 + 8) = *(_WORD *)(v20 + 16);
      _RBX = &v22[v15 + 4];
    }
    if ( v18 == 15 )
    {
      if ( _RDX >= v8 - 15 )
        break;
      do
      {
        v23 = *(unsigned __int8 *)_RDX;
        v18 += v23;
        ++_RDX;
      }
      while ( _RDX < v8 - 15 && (_BYTE)v23 == 0xFF );
      if ( &_RBX[v18] < _RBX || &_RDX[v18] < _RDX )
        break;
    }
    v24 = &_RBX[v18];
    if ( &_RBX[v18] > v11 || (v25 = &_RDX[v18], &_RDX[v18] > v8 - 8) )
    {
      if ( v24 <= v10 && &_RDX[v18] <= v8 )
      {
        memcpy_0(_RBX, _RDX, v18);
        return (unsigned int)((_DWORD)_RBX + v18 - (_DWORD)dest);
      }
      return (unsigned int)(v7 - (_DWORD)_RDX - 1);
    }
    v26 = _RDX - _RBX;
    do
    {
      *(_QWORD *)_RBX = *(_QWORD *)&_RBX[v26];
      _RBX += 8;
    }
    while ( _RBX < v24 );
    v27 = v25;
    v28 = v24;
    v29 = *(unsigned __int16 *)v27;
    _RDX = v27 + 2;
    v30 = &v24[-v29];
    if ( &v24[-v29] < dest )
      return (unsigned int)(v7 - (_DWORD)_RDX - 1);
    v31 = v16 & 0xF;
    *(_DWORD *)v24 = v29;
    if ( v31 == 15 )
    {
      while ( 1 )
      {
        v32 = *_RDX++;
        if ( _RDX > v8 - 5 )
          return (unsigned int)(v7 - (_DWORD)_RDX - 1);
        v31 += v32;
        if ( v32 != 0xFF )
        {
          if ( &v24[v31] < v24 )
            return (unsigned int)(v7 - (_DWORD)_RDX - 1);
          break;
        }
      }
    }
    v33 = v31 + 4;
    v34 = (unsigned __int64)&v24[v33];
    if ( v29 >= 8 )
    {
      v37 = *(_QWORD *)v30;
      v36 = v30 + 8;
      *(_QWORD *)v28 = v37;
    }
    else
    {
      *v28 = *v30;
      v28[1] = v30[1];
      v28[2] = v30[2];
      v28[3] = v30[3];
      v35 = &v30[v46[v29]];
      *((_DWORD *)v28 + 1) = *(_DWORD *)v35;
      v36 = &v35[-v51.m256i_i32[v29]];
    }
    v38 = v28 + 8;
    if ( v34 <= (unsigned __int64)(v10 - 12) )
    {
      *(_QWORD *)v38 = *(_QWORD *)v36;
      if ( v33 > 0x10 )
      {
        v43 = v38 + 8;
        v44 = v36 - v43;
        do
        {
          *(_QWORD *)v43 = *(_QWORD *)&v43[v44 + 8];
          v43 += 8;
        }
        while ( (unsigned __int64)v43 < v34 );
      }
      goto LABEL_43;
    }
    v39 = v10 - 7;
    if ( v34 > (unsigned __int64)(v10 - 5) )
      return (unsigned int)(v7 - (_DWORD)_RDX - 1);
    if ( v38 < v39 )
    {
      v40 = v38;
      do
      {
        *v40 = *(_QWORD *)((char *)v40 + v36 - v38);
        ++v40;
      }
      while ( v40 < (_QWORD *)v39 );
      v41 = v39 - v38;
      v38 = v10 - 7;
      v36 += v41;
    }
    if ( (unsigned __int64)v38 >= v34 )
    {
LABEL_43:
      _RBX = (char *)v34;
    }
    else
    {
      do
      {
        v42 = *v36++;
        *v38++ = v42;
      }
      while ( (unsigned __int64)v38 < v34 );
      _RBX = (char *)v34;
    }
  }
  return (unsigned int)(v7 - (_DWORD)_RDX - 1);
}

/*
==============
indyfs_LZ4_decompress_safe_usingDict
==============
*/
int indyfs_LZ4_decompress_safe_usingDict(const char *source, char *dest, int compressedSize, int maxOutputSize, const char *dictStart, int dictSize)
{
  if ( !dictSize )
    return j_indyfs_LZ4_decompress_safe(source, dest, compressedSize, maxOutputSize);
  if ( &dictStart[dictSize] != dest )
    return j_indyfs_LZ4_decompress_safe_forceExtDict(source, dest, compressedSize, maxOutputSize, dictStart, dictSize);
  if ( dictSize < 0xFFFF )
    return indyfs_LZ4_decompress_safe_withSmallPrefix(source, dest, compressedSize, maxOutputSize, dictSize);
  return j_indyfs_LZ4_decompress_safe_withPrefix64k(source, dest, compressedSize, maxOutputSize);
}

/*
==============
indyfs_LZ4_decompress_safe_withPrefix64k
==============
*/
__int64 indyfs_LZ4_decompress_safe_withPrefix64k(const char *source, char *dest, int compressedSize, int maxOutputSize)
{
  char *v6; 
  const char *v7; 
  char *v8; 
  int v9; 
  unsigned int v13; 
  int v14; 
  char v15; 
  bool v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  char *v19; 
  char *v21; 
  __int64 v22; 
  char *v23; 
  const char *v24; 
  signed __int64 v25; 
  const char *v26; 
  char *v27; 
  unsigned __int64 v28; 
  char *v29; 
  __int64 v30; 
  unsigned __int8 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  char *v34; 
  char *v35; 
  __int64 v36; 
  char *v37; 
  char *v38; 
  _QWORD *v39; 
  signed __int64 v40; 
  char v41; 
  char *v42; 
  __int64 v43; 
  int v44[3]; 
  __int64 v45; 
  int v46; 
  int v47; 
  int v48; 
  __m256i v49; 

  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  v6 = dest - 0x10000;
  v7 = &source[compressedSize];
  v44[0] = 0;
  v8 = &dest[maxOutputSize];
  v44[1] = 1;
  v44[2] = 2;
  v9 = (int)source;
  v45 = 1i64;
  _RDX = source;
  v46 = 4;
  _RBX = dest;
  v47 = 4;
  v48 = 4;
  __asm { vmovdqu [rsp+0A8h+var_68], ymm0 }
  if ( !maxOutputSize )
  {
    if ( compressedSize == 1 && !*source )
      return 0i64;
    return 0xFFFFFFFFi64;
  }
  if ( !compressedSize )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = *(unsigned __int8 *)_RDX++;
      v14 = v13 & 0xF;
      v15 = v13;
      v16 = 0;
      if ( v14 != 15 )
        v16 = _RDX + 16 < v7 && _RBX + 32 <= v8;
      v17 = (unsigned __int64)v13 >> 4;
      if ( !v16 || v13 >= 0xF0 )
        break;
      v18 = *(unsigned __int16 *)&_RDX[v17];
      v19 = &_RBX[v17 - v18];
      if ( v19 < v6 || v18 < 8 )
        break;
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rbx], xmm0
      }
      v21 = &_RBX[v17];
      _RDX += v17 + 2;
      *(_QWORD *)v21 = *(_QWORD *)v19;
      *((_QWORD *)v21 + 1) = *((_QWORD *)v19 + 1);
      *((_WORD *)v21 + 8) = *((_WORD *)v19 + 8);
      _RBX = &v21[v14 + 4];
    }
    if ( v17 == 15 )
    {
      if ( _RDX >= v7 - 15 )
        break;
      do
      {
        v22 = *(unsigned __int8 *)_RDX;
        v17 += v22;
        ++_RDX;
      }
      while ( _RDX < v7 - 15 && (_BYTE)v22 == 0xFF );
      if ( &_RBX[v17] < _RBX || &_RDX[v17] < _RDX )
        break;
    }
    v23 = &_RBX[v17];
    if ( &_RBX[v17] > v8 - 12 || (v24 = &_RDX[v17], &_RDX[v17] > v7 - 8) )
    {
      if ( &_RDX[v17] == v7 && v23 <= v8 )
      {
        memcpy_0(_RBX, _RDX, v17);
        return (unsigned int)((_DWORD)_RBX + v17 - (_DWORD)dest);
      }
      return (unsigned int)(v9 - (_DWORD)_RDX - 1);
    }
    v25 = _RDX - _RBX;
    do
    {
      *(_QWORD *)_RBX = *(_QWORD *)&_RBX[v25];
      _RBX += 8;
    }
    while ( _RBX < v23 );
    v26 = v24;
    v27 = v23;
    v28 = *(unsigned __int16 *)v26;
    _RDX = v26 + 2;
    v29 = &v23[-v28];
    if ( &v23[-v28] < v6 )
      return (unsigned int)(v9 - (_DWORD)_RDX - 1);
    v30 = v15 & 0xF;
    *(_DWORD *)v23 = v28;
    if ( v30 == 15 )
    {
      while ( 1 )
      {
        v31 = *_RDX++;
        if ( _RDX > v7 - 5 )
          return (unsigned int)(v9 - (_DWORD)_RDX - 1);
        v30 += v31;
        if ( v31 != 0xFF )
        {
          if ( &v23[v30] < v23 )
            return (unsigned int)(v9 - (_DWORD)_RDX - 1);
          break;
        }
      }
    }
    v32 = v30 + 4;
    v33 = (unsigned __int64)&v23[v32];
    if ( v28 >= 8 )
    {
      v36 = *(_QWORD *)v29;
      v35 = v29 + 8;
      *(_QWORD *)v27 = v36;
    }
    else
    {
      *v27 = *v29;
      v27[1] = v29[1];
      v27[2] = v29[2];
      v27[3] = v29[3];
      v34 = &v29[v44[v28]];
      *((_DWORD *)v27 + 1) = *(_DWORD *)v34;
      v35 = &v34[-v49.m256i_i32[v28]];
    }
    v37 = v27 + 8;
    if ( v33 <= (unsigned __int64)(v8 - 12) )
    {
      *(_QWORD *)v37 = *(_QWORD *)v35;
      if ( v32 > 0x10 )
      {
        v42 = v37 + 8;
        v43 = v35 - v42;
        do
        {
          *(_QWORD *)v42 = *(_QWORD *)&v42[v43 + 8];
          v42 += 8;
        }
        while ( (unsigned __int64)v42 < v33 );
      }
      goto LABEL_41;
    }
    v38 = v8 - 7;
    if ( v33 > (unsigned __int64)(v8 - 5) )
      return (unsigned int)(v9 - (_DWORD)_RDX - 1);
    if ( v37 < v38 )
    {
      v39 = v37;
      do
      {
        *v39 = *(_QWORD *)((char *)v39 + v35 - v37);
        ++v39;
      }
      while ( v39 < (_QWORD *)v38 );
      v40 = v38 - v37;
      v37 = v8 - 7;
      v35 += v40;
    }
    if ( (unsigned __int64)v37 >= v33 )
    {
LABEL_41:
      _RBX = (char *)v33;
    }
    else
    {
      do
      {
        v41 = *v35++;
        *v37++ = v41;
      }
      while ( (unsigned __int64)v37 < v33 );
      _RBX = (char *)v33;
    }
  }
  return (unsigned int)(v9 - (_DWORD)_RDX - 1);
}

/*
==============
indyfs_LZ4_decompress_safe_withSmallPrefix
==============
*/
__int64 indyfs_LZ4_decompress_safe_withSmallPrefix(const char *source, char *dest, int compressedSize, int maxOutputSize, unsigned __int64 prefixSize)
{
  char *v7; 
  const char *v8; 
  char *v9; 
  int v10; 
  unsigned int v14; 
  int v15; 
  char v16; 
  bool v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  char *v20; 
  char *v22; 
  __int64 v23; 
  char *v24; 
  const char *v25; 
  signed __int64 v26; 
  const char *v27; 
  char *v28; 
  unsigned __int64 v29; 
  char *v30; 
  __int64 v31; 
  unsigned __int8 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  char *v35; 
  char *v36; 
  __int64 v37; 
  char *v38; 
  char *v39; 
  _QWORD *v40; 
  signed __int64 v41; 
  char v42; 
  char *v43; 
  __int64 v44; 
  int v45[3]; 
  __int64 v46; 
  int v47; 
  int v48; 
  int v49; 
  __m256i v50; 

  __asm { vmovdqu ymm0, cs:__ymm@000000030000000200000001fffffffcffffffff000000000000000000000000 }
  v7 = &dest[-prefixSize];
  v8 = &source[compressedSize];
  v45[0] = 0;
  v9 = &dest[maxOutputSize];
  v45[1] = 1;
  v45[2] = 2;
  v10 = (int)source;
  v46 = 1i64;
  _RDX = source;
  v47 = 4;
  _RBX = dest;
  v48 = 4;
  v49 = 4;
  __asm { vmovdqu [rsp+0A8h+var_68], ymm0 }
  if ( !maxOutputSize )
  {
    if ( compressedSize == 1 && !*source )
      return 0i64;
    return 0xFFFFFFFFi64;
  }
  if ( !compressedSize )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)_RDX++;
      v15 = v14 & 0xF;
      v16 = v14;
      v17 = 0;
      if ( v15 != 15 )
        v17 = _RDX + 16 < v8 && _RBX + 32 <= v9;
      v18 = (unsigned __int64)v14 >> 4;
      if ( !v17 || v14 >= 0xF0 )
        break;
      v19 = *(unsigned __int16 *)&_RDX[v18];
      v20 = &_RBX[v18 - v19];
      if ( v20 < v7 || v19 < 8 )
        break;
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rbx], xmm0
      }
      v22 = &_RBX[v18];
      _RDX += v18 + 2;
      *(_QWORD *)v22 = *(_QWORD *)v20;
      *((_QWORD *)v22 + 1) = *((_QWORD *)v20 + 1);
      *((_WORD *)v22 + 8) = *((_WORD *)v20 + 8);
      _RBX = &v22[v15 + 4];
    }
    if ( v18 == 15 )
    {
      if ( _RDX >= v8 - 15 )
        break;
      do
      {
        v23 = *(unsigned __int8 *)_RDX;
        v18 += v23;
        ++_RDX;
      }
      while ( _RDX < v8 - 15 && (_BYTE)v23 == 0xFF );
      if ( &_RBX[v18] < _RBX || &_RDX[v18] < _RDX )
        break;
    }
    v24 = &_RBX[v18];
    if ( &_RBX[v18] > v9 - 12 || (v25 = &_RDX[v18], &_RDX[v18] > v8 - 8) )
    {
      if ( &_RDX[v18] == v8 && v24 <= v9 )
      {
        memcpy_0(_RBX, _RDX, v18);
        return (unsigned int)((_DWORD)_RBX + v18 - (_DWORD)dest);
      }
      return (unsigned int)(v10 - (_DWORD)_RDX - 1);
    }
    v26 = _RDX - _RBX;
    do
    {
      *(_QWORD *)_RBX = *(_QWORD *)&_RBX[v26];
      _RBX += 8;
    }
    while ( _RBX < v24 );
    v27 = v25;
    v28 = v24;
    v29 = *(unsigned __int16 *)v27;
    _RDX = v27 + 2;
    v30 = &v24[-v29];
    if ( &v24[-v29] < v7 )
      return (unsigned int)(v10 - (_DWORD)_RDX - 1);
    v31 = v16 & 0xF;
    *(_DWORD *)v24 = v29;
    if ( v31 == 15 )
    {
      while ( 1 )
      {
        v32 = *_RDX++;
        if ( _RDX > v8 - 5 )
          return (unsigned int)(v10 - (_DWORD)_RDX - 1);
        v31 += v32;
        if ( v32 != 0xFF )
        {
          if ( &v24[v31] < v24 )
            return (unsigned int)(v10 - (_DWORD)_RDX - 1);
          break;
        }
      }
    }
    v33 = v31 + 4;
    v34 = (unsigned __int64)&v24[v33];
    if ( v29 >= 8 )
    {
      v37 = *(_QWORD *)v30;
      v36 = v30 + 8;
      *(_QWORD *)v28 = v37;
    }
    else
    {
      *v28 = *v30;
      v28[1] = v30[1];
      v28[2] = v30[2];
      v28[3] = v30[3];
      v35 = &v30[v45[v29]];
      *((_DWORD *)v28 + 1) = *(_DWORD *)v35;
      v36 = &v35[-v50.m256i_i32[v29]];
    }
    v38 = v28 + 8;
    if ( v34 <= (unsigned __int64)(v9 - 12) )
    {
      *(_QWORD *)v38 = *(_QWORD *)v36;
      if ( v33 > 0x10 )
      {
        v43 = v38 + 8;
        v44 = v36 - v43;
        do
        {
          *(_QWORD *)v43 = *(_QWORD *)&v43[v44 + 8];
          v43 += 8;
        }
        while ( (unsigned __int64)v43 < v34 );
      }
      goto LABEL_41;
    }
    v39 = v9 - 7;
    if ( v34 > (unsigned __int64)(v9 - 5) )
      return (unsigned int)(v10 - (_DWORD)_RDX - 1);
    if ( v38 < v39 )
    {
      v40 = v38;
      do
      {
        *v40 = *(_QWORD *)((char *)v40 + v36 - v38);
        ++v40;
      }
      while ( v40 < (_QWORD *)v39 );
      v41 = v39 - v38;
      v38 = v9 - 7;
      v36 += v41;
    }
    if ( (unsigned __int64)v38 >= v34 )
    {
LABEL_41:
      _RBX = (char *)v34;
    }
    else
    {
      do
      {
        v42 = *v36++;
        *v38++ = v42;
      }
      while ( (unsigned __int64)v38 < v34 );
      _RBX = (char *)v34;
    }
  }
  return (unsigned int)(v10 - (_DWORD)_RDX - 1);
}

/*
==============
indyfs_LZ4_freeStream
==============
*/
__int64 indyfs_LZ4_freeStream(indyfs_LZ4_stream_u *indyfs_LZ4_stream)
{
  if ( indyfs_LZ4_stream )
    free(indyfs_LZ4_stream);
  return 0i64;
}

/*
==============
indyfs_LZ4_freeStreamDecode
==============
*/
__int64 indyfs_LZ4_freeStreamDecode(indyfs_LZ4_streamDecode_u *indyfs_LZ4_stream)
{
  if ( indyfs_LZ4_stream )
    free(indyfs_LZ4_stream);
  return 0i64;
}

/*
==============
indyfs_LZ4_loadDict
==============
*/
__int64 indyfs_LZ4_loadDict(indyfs_LZ4_stream_u *indyfs_LZ4_dict, const char *dictionary, int dictSize)
{
  __int64 v3; 
  const char *v4; 
  const char *v6; 
  __int64 result; 
  unsigned __int64 v8; 
  unsigned int v9; 

  v3 = dictSize;
  v4 = dictionary;
  v6 = &dictionary[dictSize];
  memset_0(indyfs_LZ4_dict, 0, sizeof(indyfs_LZ4_stream_u));
  if ( v3 > 0x10000 )
    v4 = v6 - 0x10000;
  indyfs_LZ4_dict->table[2049] = (unsigned __int64)v4;
  result = (unsigned int)((_DWORD)v6 - (_DWORD)v4);
  indyfs_LZ4_dict->internal_donotuse.currentOffset = 0x10000;
  indyfs_LZ4_dict->internal_donotuse.dictSize = result;
  indyfs_LZ4_dict->internal_donotuse.tableType = 2;
  if ( (int)v3 < 8 )
    return 0i64;
  if ( v4 <= v6 - 8 )
  {
    do
    {
      v8 = 0xCF1BBCDCBB000000ui64 * *(_QWORD *)v4;
      v9 = (_DWORD)v4 - ((_DWORD)v6 - 0x10000);
      v4 += 3;
      indyfs_LZ4_dict->internal_donotuse.hashTable[v8 >> 52] = v9;
    }
    while ( v4 <= v6 - 8 );
    return indyfs_LZ4_dict->internal_donotuse.dictSize;
  }
  return result;
}

/*
==============
indyfs_LZ4_putPositionOnHash
==============
*/
void indyfs_LZ4_putPositionOnHash(const unsigned __int8 *p, unsigned int h, void *tableBase, const tableType_t tableType, const unsigned __int8 *srcBase)
{
  __int32 v5; 
  __int32 v6; 

  if ( tableType )
  {
    v5 = tableType - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          *((_WORD *)tableBase + h) = (_WORD)p - (_WORD)srcBase;
      }
      else
      {
        *((_DWORD *)tableBase + h) = (_DWORD)p - (_DWORD)srcBase;
      }
    }
    else
    {
      *((_QWORD *)tableBase + h) = p;
    }
  }
}

/*
==============
indyfs_LZ4_renormDictT
==============
*/
void indyfs_LZ4_renormDictT(indyfs_LZ4_stream_t_internal *indyfs_LZ4_dict, int nextSize)
{
  unsigned int *p_currentOffset; 
  indyfs_LZ4_stream_t_internal *v3; 
  unsigned int currentOffset; 
  unsigned int v5; 
  unsigned int *p_dictSize; 
  const unsigned __int8 **p_dictionary; 
  const unsigned __int8 *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 

  p_currentOffset = &indyfs_LZ4_dict->currentOffset;
  v3 = indyfs_LZ4_dict;
  currentOffset = indyfs_LZ4_dict->currentOffset;
  if ( currentOffset + nextSize > 0x80000000 )
  {
    v5 = currentOffset - 0x10000;
    p_dictSize = &indyfs_LZ4_dict->dictSize;
    p_dictionary = &indyfs_LZ4_dict->dictionary;
    v8 = &indyfs_LZ4_dict->dictionary[indyfs_LZ4_dict->dictSize];
    v9 = 4096i64;
    do
    {
      v10 = v3->hashTable[0];
      v3 = (indyfs_LZ4_stream_t_internal *)((char *)v3 + 4);
      v11 = v10 - v5;
      v12 = 0;
      if ( *(&v3[-1].dictSize + 1) >= v5 )
        v12 = v11;
      *(&v3[-1].dictSize + 1) = v12;
      --v9;
    }
    while ( v9 );
    v13 = *p_dictSize;
    *p_currentOffset = 0x10000;
    if ( (unsigned int)v13 > 0x10000 )
    {
      *p_dictSize = 0x10000;
      v13 = 0x10000i64;
    }
    *p_dictionary = &v8[-v13];
  }
}

/*
==============
indyfs_LZ4_resetStream
==============
*/
void indyfs_LZ4_resetStream(indyfs_LZ4_stream_u *indyfs_LZ4_stream)
{
  memset_0(indyfs_LZ4_stream, 0, sizeof(indyfs_LZ4_stream_u));
}

/*
==============
indyfs_LZ4_resetStreamState
==============
*/
__int64 indyfs_LZ4_resetStreamState(void *state, char *inputBuffer)
{
  memset_0(state, 0, 0x4020ui64);
  return 0i64;
}

/*
==============
indyfs_LZ4_resetStream_fast
==============
*/
void indyfs_LZ4_resetStream_fast(indyfs_LZ4_stream_u *ctx)
{
  unsigned __int16 tableType; 
  unsigned int currentOffset; 

  tableType = ctx->internal_donotuse.tableType;
  if ( tableType && (tableType != 2 || ctx->internal_donotuse.currentOffset > 0x40000000) )
  {
    memset_0(ctx, 0, 0x4000ui64);
    ctx->internal_donotuse.currentOffset = 0;
    ctx->internal_donotuse.tableType = 0;
  }
  currentOffset = ctx->internal_donotuse.currentOffset;
  if ( currentOffset )
    ctx->internal_donotuse.currentOffset = currentOffset + 0x10000;
  ctx->table[2050] = 0i64;
  ctx->table[2049] = 0i64;
  ctx->internal_donotuse.dictSize = 0;
}

/*
==============
indyfs_LZ4_saveDict
==============
*/
__int64 indyfs_LZ4_saveDict(indyfs_LZ4_stream_u *indyfs_LZ4_dict, char *safeBuffer, int dictSize)
{
  unsigned int v4; 
  __int64 result; 

  v4 = 0x10000;
  if ( (unsigned int)dictSize <= 0x10000 )
    v4 = dictSize;
  if ( v4 > indyfs_LZ4_dict->internal_donotuse.dictSize )
    v4 = indyfs_LZ4_dict->internal_donotuse.dictSize;
  memmove_0(safeBuffer, (const void *)(indyfs_LZ4_dict->table[2049] + indyfs_LZ4_dict->internal_donotuse.dictSize - (int)v4), (int)v4);
  indyfs_LZ4_dict->internal_donotuse.dictSize = v4;
  result = v4;
  indyfs_LZ4_dict->table[2049] = (unsigned __int64)safeBuffer;
  return result;
}

/*
==============
indyfs_LZ4_setStreamDecode
==============
*/
__int64 indyfs_LZ4_setStreamDecode(indyfs_LZ4_streamDecode_u *indyfs_LZ4_streamDecode, const char *dictionary, int dictSize)
{
  indyfs_LZ4_streamDecode->table[3] = dictSize;
  indyfs_LZ4_streamDecode->table[2] = (unsigned __int64)&dictionary[dictSize];
  *(_OWORD *)indyfs_LZ4_streamDecode->table = 0ui64;
  return 1i64;
}

/*
==============
indyfs_LZ4_sizeofState
==============
*/
__int64 indyfs_LZ4_sizeofState()
{
  return 16416i64;
}

/*
==============
indyfs_LZ4_sizeofStreamState
==============
*/
__int64 indyfs_LZ4_sizeofStreamState()
{
  return 16416i64;
}

/*
==============
indyfs_LZ4_slideInputBuffer
==============
*/
char *indyfs_LZ4_slideInputBuffer(void *state)
{
  return (char *)*((_QWORD *)state + 2049);
}

/*
==============
indyfs_LZ4_uncompress
==============
*/

int __fastcall indyfs_LZ4_uncompress(const char *source, char *dest, int outputSize)
{
  return j_indyfs_LZ4_decompress_fast(source, dest, outputSize);
}

/*
==============
indyfs_LZ4_uncompress_unknownOutputSize
==============
*/

int __fastcall indyfs_LZ4_uncompress_unknownOutputSize(const char *source, char *dest, int isize, int maxOutputSize)
{
  return j_indyfs_LZ4_decompress_safe(source, dest, isize, maxOutputSize);
}

/*
==============
indyfs_LZ4_versionNumber
==============
*/
__int64 indyfs_LZ4_versionNumber()
{
  return 10802i64;
}

/*
==============
indyfs_LZ4_versionString
==============
*/
const char *indyfs_LZ4_versionString()
{
  return "1.8.2";
}

