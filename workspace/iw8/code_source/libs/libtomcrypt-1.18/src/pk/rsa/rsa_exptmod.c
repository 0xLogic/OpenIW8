/*
==============
rsa_exptmod
==============
*/
int rsa_exptmod(const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen, int which, Rsa_key *key)
{
  int v6; 
  int result; 
  int v12; 
  int v13; 
  void *p; 
  void *q; 
  void *dP; 
  void *dQ; 
  void *qP; 
  int v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  void *a; 
  void *v25; 
  void *v26; 
  void *v27; 
  void *v28; 

  v6 = which;
  if ( which == 1 )
  {
    if ( key->type != 1 )
      return which + 14;
  }
  else if ( which )
  {
    return 18;
  }
  result = j_ltc_init_multi(&a, &v26, &v25, &v27, &v28, 0i64);
  if ( !result )
  {
    v12 = ltc_mp.unsigned_read(a, (unsigned __int8 *)in, inlen);
    if ( !v12 )
    {
      if ( ltc_mp.compare(key->N, a) == -1 )
      {
        v12 = 22;
        goto $error_5;
      }
      if ( which != 1 )
      {
        v12 = ltc_mp.exptmod(a, key->e, key->N, a);
        if ( v12 )
          goto $error_5;
        goto LABEL_40;
      }
      v13 = ltc_mp.get_digit_count(key->N);
      v12 = ltc_mp.rand(v27, v13);
      if ( v12 )
        goto $error_5;
      v12 = ltc_mp.invmod(v27, key->N, v28);
      if ( v12 )
        goto $error_5;
      v12 = ltc_mp.exptmod(v27, key->e, key->N, v27);
      if ( v12 )
        goto $error_5;
      v12 = ltc_mp.mulmod(a, v27, key->N, a);
      if ( v12 )
        goto $error_5;
      p = key->p;
      if ( p && ltc_mp.get_digit_count(p) && (q = key->q) != NULL && ltc_mp.get_digit_count(q) && (dP = key->dP) != NULL && ltc_mp.get_digit_count(dP) && (dQ = key->dQ) != NULL && ltc_mp.get_digit_count(dQ) && (qP = key->qP) != NULL && ltc_mp.get_digit_count(qP) )
      {
        v12 = ltc_mp.exptmod(a, key->dP, key->p, v26);
        if ( v12 )
          goto $error_5;
        v12 = ltc_mp.exptmod(a, key->dQ, key->q, v25);
        if ( v12 )
          goto $error_5;
        v12 = ltc_mp.sub(v26, v25, a);
        if ( v12 )
          goto $error_5;
        v12 = ltc_mp.mulmod(a, key->qP, key->p, a);
        if ( v12 )
          goto $error_5;
        v12 = ltc_mp.mul(a, key->q, a);
        if ( v12 )
          goto $error_5;
        v19 = ltc_mp.add(a, v25, a);
      }
      else
      {
        v6 = 0;
        v19 = ltc_mp.exptmod(a, key->d, key->N, a);
      }
      v12 = v19;
      if ( !v19 )
      {
        v12 = ltc_mp.mulmod(a, v28, key->N, a);
        if ( !v12 )
        {
          if ( v6 )
          {
            v12 = ltc_mp.exptmod(a, key->e, key->N, v26);
            if ( v12 )
              goto $error_5;
            v12 = ltc_mp.unsigned_read(v25, (unsigned __int8 *)in, inlen);
            if ( v12 )
              goto $error_5;
            if ( ltc_mp.compare(v26, v25) )
            {
LABEL_38:
              v12 = 1;
              goto $error_5;
            }
          }
LABEL_40:
          v20 = ltc_mp.unsigned_size(key->N);
          v21 = v20;
          if ( v20 > *outlen )
          {
            *outlen = v20;
            v12 = 6;
            goto $error_5;
          }
          v22 = ltc_mp.unsigned_size(a);
          if ( v22 <= ltc_mp.unsigned_size(key->N) )
          {
            *outlen = v21;
            j_zeromem(out, v21);
            v23 = ltc_mp.unsigned_size(a);
            v12 = ltc_mp.unsigned_write(a, &out[(unsigned int)v21 - v23]);
            goto $error_5;
          }
          goto LABEL_38;
        }
      }
    }
$error_5:
    j_ltc_deinit_multi(v28, v27, v25, v26, a, 0i64);
    return v12;
  }
  return result;
}

