/*
==============
pkcs_1_mgf1
==============
*/
int pkcs_1_mgf1(int hash_idx, const unsigned __int8 *seed, unsigned int seedlen, unsigned __int8 *mask, unsigned int masklen)
{
  __int64 v5; 
  int result; 
  __int64 v8; 
  unsigned int hashsize; 
  char *v10; 
  char *v11; 
  char *v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  signed __int64 v17; 
  char *v18; 

  v5 = hash_idx;
  result = j_hash_is_valid(hash_idx);
  if ( result )
    return result;
  v8 = v5 << 7;
  hashsize = hash_descriptor[v5].hashsize;
  v10 = (char *)ltc_malloc(0x190ui64);
  v11 = (char *)ltc_malloc(hashsize);
  v12 = v11;
  if ( !v10 )
  {
    if ( !v11 )
      return 13;
    v18 = v11;
LABEL_19:
    ltc_free(v18);
    return 13;
  }
  if ( !v11 )
  {
    v18 = v10;
    goto LABEL_19;
  }
  v13 = masklen;
  v14 = 0;
  if ( masklen )
  {
    while ( 1 )
    {
      *(_DWORD *)v12 = _byteswap_ulong(v14++);
      v15 = (*(__int64 (__fastcall **)(char *))((char *)&hash_descriptor[0].init + v8))(v10);
      if ( v15 )
        break;
      v15 = (*(__int64 (__fastcall **)(char *, const unsigned __int8 *, _QWORD))((char *)&hash_descriptor[0].process + v8))(v10, seed, seedlen);
      if ( v15 )
        break;
      v15 = (*(__int64 (__fastcall **)(char *, char *, __int64))((char *)&hash_descriptor[0].process + v8))(v10, v12, 4i64);
      if ( v15 )
        break;
      v15 = (*(__int64 (__fastcall **)(char *, char *))((char *)&hash_descriptor[0].done + v8))(v10, v12);
      if ( v15 )
        break;
      v16 = 0;
      if ( hashsize )
      {
        v17 = v12 - (char *)mask;
        while ( v13 )
        {
          ++v16;
          *mask = mask[v17];
          --v13;
          ++mask;
          if ( v16 >= hashsize )
            goto LABEL_13;
        }
        goto LABEL_14;
      }
LABEL_13:
      if ( !v13 )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    v15 = 0;
  }
  ltc_free(v12);
  ltc_free(v10);
  return v15;
}

