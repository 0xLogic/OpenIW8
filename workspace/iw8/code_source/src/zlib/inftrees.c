/*
==============
inflate_table
==============
*/

int __fastcall inflate_table(codetype type, unsigned __int16 *lens, unsigned int codes, code **table, unsigned int *bits, unsigned __int16 *work)
{
  return ?inflate_table@@YAHW4codetype@@PEAGIPEAPEAUcode@@PEAI1@Z(type, lens, codes, table, bits, work);
}

/*
==============
inflate_table
==============
*/
__int64 inflate_table(__int64 type, unsigned __int16 *lens, unsigned int codes, code **table, unsigned int *bits, unsigned __int16 *work)
{
  unsigned int v6; 
  code **v7; 
  int v9; 
  unsigned __int64 v11; 
  unsigned __int16 *v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  unsigned int i; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v20; 
  __int16 *v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  char v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned __int16 *v29; 
  int v30; 
  code *v31; 
  __int64 v32; 
  unsigned int v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  unsigned __int16 v38; 
  int v39; 
  int v40; 
  __int64 v41; 
  unsigned int j; 
  unsigned int v44; 
  unsigned __int8 v45; 
  int v46; 
  unsigned int v47; 
  int v48; 
  bool v49; 
  code v50; 
  unsigned int v51; 
  int v52; 
  int v53; 
  unsigned int v54; 
  int v55; 
  int v56; 
  unsigned __int16 *v57; 
  unsigned __int16 *v58; 
  __int16 v62[16]; 
  __int16 v63[15]; 

  v6 = 0;
  v7 = table;
  v9 = type;
  v56 = type;
  do
  {
    v11 = v6;
    if ( v11 >= 16 )
    {
      j___report_rangecheckfailure(type);
      JUMPOUT(0x1437D118Bi64);
    }
    ++v6;
    v62[v11 - 1] = 0;
  }
  while ( v6 <= 0xF );
  if ( codes )
  {
    v12 = lens;
    v13 = codes;
    do
    {
      v14 = *v12++;
      ++v62[v14 - 1];
      --v13;
    }
    while ( v13 );
  }
  v15 = 13;
  for ( i = 15; i; i -= 5 )
  {
    LODWORD(v17) = -1;
    if ( v62[i - 1] )
      break;
    if ( v62[v15 + 1 - 1] )
    {
      --i;
      break;
    }
    if ( v62[v15 - 1] )
    {
      i -= 2;
      break;
    }
    if ( v62[v15 - 1 - 1] )
    {
      i -= 3;
      break;
    }
    if ( v62[v15 - 2 - 1] )
    {
      i -= 4;
      break;
    }
    v15 -= 5;
  }
  v18 = i;
  if ( *bits <= i )
    v18 = *bits;
  if ( !i )
  {
    *(*v7)++ = (code)320;
    *(*v7)++ = (code)320;
    *bits = 1;
    return 0i64;
  }
  v20 = 1;
  if ( i > 1 )
  {
    v21 = v62;
    do
    {
      if ( *v21 )
        break;
      ++v20;
      ++v21;
    }
    while ( v20 < i );
  }
  v22 = v20;
  v23 = 1;
  if ( v18 >= v20 )
    v22 = v18;
  v24 = 1;
  v54 = v22;
  do
  {
    v24 = 2 * v24 - (unsigned __int16)v62[v23 - 1];
    if ( v24 < 0 )
      return 0xFFFFFFFFi64;
    ++v23;
  }
  while ( v23 <= 0xF );
  if ( v24 > 0 && (!v9 || i != 1) )
    return 0xFFFFFFFFi64;
  v25 = 0;
  v63[0] = 0;
  v26 = 0i64;
  v27 = 14i64;
  do
  {
    v63[v26 + 1] = v63[v26] + v62[v26];
    ++v26;
    --v27;
  }
  while ( v27 );
  v28 = 0;
  if ( codes )
  {
    v29 = lens;
    do
    {
      if ( *v29 )
        work[(unsigned __int16)v62[*v29 + 15]++] = v28;
      ++v28;
      ++v29;
    }
    while ( v28 < codes );
  }
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v30 = 256;
      v58 = (unsigned __int16 *)&lbase[-257];
      v57 = (unsigned __int16 *)&lext[-257];
    }
    else
    {
      v30 = -1;
      v58 = (unsigned __int16 *)dbase;
      v57 = (unsigned __int16 *)dext;
    }
  }
  else
  {
    v57 = work;
    v30 = 19;
    v58 = work;
  }
  v31 = *v7;
  v52 = v30;
  v32 = (unsigned int)(1 << v22);
  v33 = 0;
  v53 = 0;
  LODWORD(v34) = 0;
  v51 = 0;
  v35 = v32;
  v55 = v32 - 1;
  if ( v9 == 1 )
  {
    if ( (unsigned int)v32 <= 0x354 )
      goto LABEL_55;
    return 1i64;
  }
  if ( v9 == 2 && (unsigned int)v32 > 0x250 )
    return 1i64;
  while ( 1 )
  {
LABEL_55:
    v50.bits = v20 - v25;
    v36 = work[(unsigned int)v34];
    if ( (int)v36 >= v30 )
    {
      if ( (int)v36 <= v30 )
      {
        v50.op = 96;
        v38 = 0;
      }
      else
      {
        v37 = v36;
        v50.op = v57[v37];
        v38 = v58[v37];
      }
      v50.val = v38;
    }
    else
    {
      v50.op = 0;
      v50.val = work[(unsigned int)v34];
    }
    v39 = v32;
    v40 = 1 << (v20 - v25);
    LODWORD(v41) = v32 + (v33 >> v51);
    do
    {
      v41 = (unsigned int)(v41 - v40);
      v31[v41] = v50;
      v39 -= v40;
    }
    while ( v39 );
    for ( j = 1 << (v20 - 1); (j & v33) != 0; j >>= 1 )
      ;
    if ( j )
      v33 = j + ((j - 1) & v33);
    else
      v33 = 0;
    v34 = (unsigned int)++v53;
    if ( v62[v20 - 1]-- != 1 )
      goto LABEL_71;
    if ( v20 == i )
      break;
    v20 = lens[work[v34]];
LABEL_71:
    v44 = v54;
    v30 = v52;
    v25 = v51;
    if ( v20 > v54 )
    {
      if ( (v33 & v55) == (_DWORD)v17 )
      {
        v7 = table;
      }
      else
      {
        v31 += v32;
        if ( v51 )
          v44 = v51;
        v45 = v20 - v44;
        v51 = v44;
        v46 = 1 << (v20 - v44);
        if ( v20 < i )
        {
          v47 = v20;
          do
          {
            v48 = v46 - (unsigned __int16)v62[v47 - 1];
            if ( v48 <= 0 )
              break;
            ++v45;
            ++v47;
            v46 = 2 * v48;
          }
          while ( v47 < i );
          LODWORD(v34) = v53;
        }
        v32 = (unsigned int)(1 << v45);
        v35 += v32;
        if ( v56 == 1 )
        {
          v49 = v35 <= 0x354;
        }
        else
        {
          if ( v56 != 2 )
            goto LABEL_85;
          v49 = v35 <= 0x250;
        }
        if ( !v49 )
          return 1i64;
LABEL_85:
        v30 = v52;
        v17 = v33 & v55;
        v7 = table;
        (*table)[v17].op = v45;
        v25 = v44;
        (*table)[v17].bits = v54;
        (*table)[v17].val = v31 - *table;
      }
    }
  }
  if ( v33 )
  {
    v50.op = 64;
    v31[v33] = (code)*(unsigned __int16 *)&v50.op;
  }
  *v7 += v35;
  *bits = v54;
  return 0i64;
}

