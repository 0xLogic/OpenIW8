/*
==============
_qsort_helper
==============
*/
__int64 qsort_helper(const void *a, const void *b)
{
  ltc_asn1_type_ *v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 

  ltc_to_asn1(*(ltc_asn1_type_ *)a);
  v3 = ltc_to_asn1(*v2);
  v7 = v6 - v3;
  if ( v7 )
    return v7;
  else
    return (unsigned int)(*(_DWORD *)(v5 + 20) - *(_DWORD *)(v4 + 20));
}

/*
==============
der_encode_setof
==============
*/
__int64 der_encode_setof(ltc_asn1_list_ *list, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  unsigned int v4; 
  unsigned __int64 v5; 
  ltc_asn1_list_ *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned int v13; 
  unsigned __int64 v14; 
  const void **v15; 
  unsigned __int8 *v16; 
  size_t v17; 
  unsigned int i; 
  unsigned int v19; 
  const void **v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  const void **v27; 

  v4 = 1;
  v5 = inlen;
  if ( inlen <= 1 )
  {
LABEL_5:
    v10 = (unsigned __int8 *)ltc_calloc(1ui64, *outlen);
    v11 = v10;
    if ( v10 )
    {
      v13 = j_der_encode_sequence_ex(list, v5, v10, outlen, 15);
      if ( v13 )
      {
        ltc_free(v11);
        return v13;
      }
      else
      {
        v14 = v5;
        v15 = (const void **)ltc_calloc(v5, 0x10ui64);
        if ( v15 )
        {
          v16 = v11 + 2;
          if ( v11[1] >= 0x80u )
            v16 += v11[1] & 0x7F;
          v17 = v16 - v11;
          for ( i = 0; v16 < &v11[*outlen]; *((_DWORD *)v20 + 2) = v26 )
          {
            v19 = 2;
            v20 = &v15[2 * i];
            *v20 = v16;
            v21 = v16[1];
            if ( v21 >= 0x80 )
            {
              *((_DWORD *)v20 + 2) = 0;
              v22 = 0;
              v23 = v21 & 0x7F;
              if ( v23 )
              {
                v24 = 0;
                do
                {
                  v25 = v19++;
                  v22 = (v24 << 8) | v16[v25];
                  *((_DWORD *)v20 + 2) = v22;
                  v24 = v22;
                  --v23;
                }
                while ( v23 );
              }
            }
            else
            {
              v22 = v16[1];
            }
            v26 = v19 + v22;
            ++i;
            v16 += v26;
          }
          qsort(v15, v5, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)qsort_helper_0);
          memcpy_0(out, v11, v17);
          if ( (_DWORD)v5 )
          {
            v27 = v15 + 1;
            do
            {
              memcpy_0(&out[(unsigned int)v17], *(v27 - 1), *(unsigned int *)v27);
              LODWORD(v17) = *(_DWORD *)v27 + v17;
              v27 += 2;
              --v14;
            }
            while ( v14 );
          }
          ltc_free(v15);
          ltc_free(v11);
          return 0i64;
        }
        else
        {
          ltc_free(v11);
          return 13i64;
        }
      }
    }
    else
    {
      return 13i64;
    }
  }
  else
  {
    v9 = list + 1;
    while ( v9->type == list[v4 - 1].type )
    {
      ++v4;
      ++v9;
      if ( v4 >= inlen )
        goto LABEL_5;
    }
    return 16i64;
  }
}

