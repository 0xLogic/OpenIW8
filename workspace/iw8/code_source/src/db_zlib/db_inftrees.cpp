/*
==============
db_inflate_trees_bits
==============
*/

int __fastcall db_inflate_trees_bits(unsigned int *c, unsigned int *bb, db_inflate_huft_s **tb, db_inflate_huft_s *hp, db_z_stream_s *z)
{
  return ?db_inflate_trees_bits@@YAHPEAI0PEAPEAUdb_inflate_huft_s@@PEAU1@PEAUdb_z_stream_s@@@Z(c, bb, tb, hp, z);
}

/*
==============
db_inflate_trees_fixed
==============
*/

int __fastcall db_inflate_trees_fixed(unsigned int *bl, unsigned int *bd, db_inflate_huft_s **tl, db_inflate_huft_s **td, db_z_stream_s *z)
{
  return ?db_inflate_trees_fixed@@YAHPEAI0PEAPEAUdb_inflate_huft_s@@1PEAUdb_z_stream_s@@@Z(bl, bd, tl, td, z);
}

/*
==============
db_inflate_trees_dynamic
==============
*/

int __fastcall db_inflate_trees_dynamic(unsigned int nl, unsigned int nd, unsigned int *c, unsigned int *bl, unsigned int *bd, db_inflate_huft_s **tl, db_inflate_huft_s **td, db_inflate_huft_s *hp, db_z_stream_s *z)
{
  return ?db_inflate_trees_dynamic@@YAHIIPEAI00PEAPEAUdb_inflate_huft_s@@1PEAU1@PEAUdb_z_stream_s@@@Z(nl, nd, c, bl, bd, tl, td, hp, z);
}

/*
==============
db_huft_build
==============
*/
__int64 db_huft_build(unsigned int *b, unsigned int n, unsigned int s, const unsigned int *d, const unsigned int *e, db_inflate_huft_s **t, unsigned int *m, db_inflate_huft_s *hp, unsigned int *hn, unsigned int *v)
{
  unsigned int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  __int64 v13; 
  __int64 result; 
  unsigned int i; 
  unsigned int v16; 
  signed int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int j; 
  int v21; 
  int v22; 
  _DWORD *v23; 
  char *v24; 
  unsigned int k; 
  unsigned int v26; 
  __int64 v27; 
  int *v28; 
  __int64 v29; 
  signed int v30; 
  unsigned int *v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  db_inflate_huft_s *v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int v38; 
  char *v39; 
  unsigned int v40; 
  int v41; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  __int64 v49; 
  __int64 v50; 
  unsigned int v51; 
  unsigned int *v52; 
  char v53; 
  __int64 v54; 
  __int64 ii; 
  unsigned int jj; 
  db_inflate_huft_s v57; 
  signed int v58; 
  unsigned int *v59; 
  int v60; 
  int v62; 
  __int64 v64[8]; 
  int v65[2]; 
  char v66[56]; 
  __int64 v67[16]; 

  v10 = 0;
  v11 = n;
  v12 = b;
  v57.base = 0;
  memset(v64, 0, sizeof(v64));
  do
  {
    v13 = *b++;
    ++*((_DWORD *)v64 + v13);
    --n;
  }
  while ( n );
  if ( LODWORD(v64[0]) == v11 )
  {
    *t = NULL;
    result = 0i64;
    *m = 0;
    return result;
  }
  for ( i = 1; i <= 0xF; ++i )
  {
    if ( *((_DWORD *)v64 + i) )
      break;
  }
  v16 = i;
  v17 = i;
  if ( *m >= i )
    v16 = *m;
  v18 = 15;
  do
  {
    if ( *((_DWORD *)v64 + v18) )
      break;
    --v18;
  }
  while ( v18 );
  v19 = v18;
  if ( v16 <= v18 )
    v19 = v16;
  v58 = v18;
  *m = v19;
  for ( j = 1 << i; i < v18; j = 2 * v21 )
  {
    v21 = j - *((_DWORD *)v64 + i);
    if ( v21 < 0 )
      return 4294967293i64;
    ++i;
  }
  v62 = j - *((_DWORD *)v64 + v18);
  if ( v62 < 0 )
    return 4294967293i64;
  *((_DWORD *)v64 + v18) = j;
  v22 = 0;
  v65[1] = 0;
  v23 = (_DWORD *)v64 + 1;
  v24 = v66;
  for ( k = v18 - 1; k; --k )
  {
    v24 += 4;
    v22 += *v23++;
    *((_DWORD *)v24 - 1) = v22;
  }
  v26 = 0;
  do
  {
    v27 = *v12++;
    if ( (_DWORD)v27 )
    {
      v28 = &v65[v27];
      v29 = (unsigned int)*v28;
      v[v29] = v26;
      *v28 = v29 + 1;
    }
    ++v26;
  }
  while ( v26 < v11 );
  v30 = v58;
  v31 = v;
  v59 = v;
  v32 = -v19;
  v67[0] = 0i64;
  v33 = 0;
  v34 = -1;
  v35 = NULL;
  v60 = v65[v58];
  v36 = 0;
  v65[0] = 0;
  if ( v17 <= v58 )
  {
    v37 = -1i64;
    while ( 1 )
    {
      v38 = *((_DWORD *)v64 + v17);
      v39 = (char *)v64 + 4 * v17;
      if ( v38 )
        break;
LABEL_57:
      if ( ++v17 > v30 )
        goto LABEL_58;
    }
    while ( 1 )
    {
      v40 = v38;
      v41 = v19 + v32;
      --v38;
      if ( v17 > (int)(v19 + v32) )
      {
        while ( 1 )
        {
          ++v34;
          v42 = v30 - v41;
          ++v37;
          v32 = v41;
          if ( v30 - v41 > v19 )
            v42 = v19;
          v43 = v17 - v41;
          if ( 1 << (v17 - v41) > v40 )
          {
            v44 = -1 - v38 + (1 << v43);
            if ( v43 < v42 && ++v43 < v42 )
            {
              do
              {
                v45 = *((_DWORD *)v39 + 1);
                v39 += 4;
                v46 = 2 * v44;
                if ( v46 <= v45 )
                  break;
                v44 = v46 - v45;
                ++v43;
              }
              while ( v43 < v42 );
            }
          }
          v36 = 1 << v43;
          v47 = *hn;
          v48 = v47 + (1 << v43);
          if ( v48 > 0x5A0 )
            return 4294967293i64;
          *hn = v48;
          v35 = &hp[v47];
          v67[v37] = (__int64)v35;
          if ( v37 )
          {
            v57.word.what.Exop = v43;
            v49 = *(_QWORD *)&v66[8 * v37 + 48];
            v57.word.what.Bits = v19;
            v50 = v33 >> (v32 - v19);
            v65[v37] = v33;
            v57.base = (((__int64)v35 - v49) >> 3) - v50;
            *(db_inflate_huft_s *)(v49 + 8 * v50) = v57;
          }
          else
          {
            *t = v35;
          }
          v39 = (char *)v64 + 4 * v17;
          v41 = v19 + v32;
          v30 = v58;
          if ( v17 <= (int)(v19 + v32) )
          {
            v31 = v59;
            break;
          }
        }
      }
      if ( v31 < &v[v60] )
      {
        v51 = *v31;
        v52 = v31 + 1;
        v59 = v52;
        if ( v51 < s )
        {
          v57.base = v51;
          v53 = 96;
          v10 = 0;
          if ( v51 < 0x100 )
            v53 = 0;
          v57.word.what.Exop = v53;
          goto LABEL_50;
        }
        v54 = v51 - s;
        v59 = v52;
        v57.word.what.Exop = LOBYTE(e[v54]) + 80;
        v57.base = d[v54];
      }
      else
      {
        v57.word.what.Exop = -64;
      }
      v10 = 0;
LABEL_50:
      for ( ii = v33 >> v32; (unsigned int)ii < v36; ii = (unsigned int)((1 << (v17 - v32)) + ii) )
      {
        v57.word.what.Bits = v17 - v32;
        v35[ii] = v57;
      }
      for ( jj = 1 << (v17 - 1); (jj & v33) != 0; jj >>= 1 )
        v33 ^= jj;
      for ( v33 ^= jj; (v33 & ((1 << v32) - 1)) != v65[v37]; --v34 )
      {
        v32 -= v19;
        --v37;
      }
      v31 = v59;
      v39 = (char *)v64 + 4 * v17;
      v30 = v58;
      if ( !v38 )
        goto LABEL_57;
    }
  }
LABEL_58:
  if ( v62 )
  {
    if ( v30 != 1 )
      return (unsigned int)-5;
  }
  return v10;
}

/*
==============
db_inflate_trees_bits
==============
*/
__int64 db_inflate_trees_bits(unsigned int *c, unsigned int *bb, db_inflate_huft_s **tb, db_inflate_huft_s *hp, db_z_stream_s *z)
{
  unsigned int *v; 
  unsigned int *v10; 
  unsigned int v12; 
  unsigned int v13; 
  char *v14; 
  unsigned int hn[4]; 

  hn[0] = 0;
  v = (unsigned int *)z->zalloc(z->opaque, 19i64, 4i64);
  v10 = v;
  if ( !v )
    return 4294967292i64;
  v12 = db_huft_build(c, 0x13u, 0x13u, NULL, NULL, tb, bb, hp, hn, v);
  v13 = v12;
  if ( v12 == -3 )
  {
    v14 = "oversubscribed dynamic bit lengths tree";
  }
  else
  {
    if ( v12 != -5 && *bb )
      goto LABEL_9;
    v14 = "incomplete dynamic bit lengths tree";
    v13 = -3;
  }
  z->msg = v14;
LABEL_9:
  z->zfree(z->opaque, v10);
  return v13;
}

/*
==============
db_inflate_trees_dynamic
==============
*/
__int64 db_inflate_trees_dynamic(unsigned int nl, unsigned int nd, unsigned int *c, unsigned int *bl, unsigned int *bd, db_inflate_huft_s **tl, db_inflate_huft_s **td, db_inflate_huft_s *hp, db_z_stream_s *z)
{
  __int64 v11; 
  unsigned int *v; 
  unsigned int *v14; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  char *v19; 
  unsigned int hn[14]; 

  v11 = nl;
  hn[0] = 0;
  v = (unsigned int *)z->zalloc(z->opaque, 288i64, 4i64);
  v14 = v;
  if ( !v )
    return 4294967292i64;
  v16 = db_huft_build(c, v11, 0x101u, cplens_0, cplext_0, tl, bl, hp, hn, v);
  v17 = v16;
  if ( !v16 )
  {
    if ( *bl )
    {
      v18 = db_huft_build(&c[v11], nd, 0, cpdist_0, cpdext_0, td, bd, hp, hn, v14);
      v17 = v18;
      switch ( v18 )
      {
        case 0u:
          if ( *bd || (unsigned int)v11 <= 0x101 )
          {
            z->zfree(z->opaque, v14);
            return 0i64;
          }
          goto LABEL_14;
        case 0xFFFFFFFD:
          v19 = "oversubscribed distance tree";
LABEL_20:
          z->msg = v19;
          goto LABEL_21;
        case 0xFFFFFFFB:
          v19 = "incomplete distance tree";
LABEL_19:
          v17 = -3;
          goto LABEL_20;
      }
      if ( v18 != -4 )
      {
LABEL_14:
        v19 = "empty distance tree with lengths";
        goto LABEL_19;
      }
      goto LABEL_21;
    }
LABEL_18:
    v19 = "incomplete literal/length tree";
    goto LABEL_19;
  }
  if ( v16 == -3 )
  {
    v19 = "oversubscribed literal/length tree";
    goto LABEL_20;
  }
  if ( v16 != -4 )
    goto LABEL_18;
LABEL_21:
  z->zfree(z->opaque, v14);
  return v17;
}

/*
==============
db_inflate_trees_fixed
==============
*/
__int64 db_inflate_trees_fixed(unsigned int *bl, unsigned int *bd, db_inflate_huft_s **tl, db_inflate_huft_s **td)
{
  *bl = db_fixed_bl;
  *bd = db_fixed_bd;
  *tl = db_fixed_tl;
  *td = db_fixed_td;
  return 0i64;
}

