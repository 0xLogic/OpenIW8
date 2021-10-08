/*
==============
ecc_shared_secret
==============
*/
__int64 ecc_shared_secret(ecc_key *private_key, ecc_key *public_key, unsigned __int8 *out, unsigned int *outlen)
{
  const char *name; 
  const char *v10; 
  int v11; 
  int v12; 
  ecc_point *v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  void *v18; 

  if ( private_key->type != 1 )
    return 15i64;
  if ( !j_ltc_ecc_is_valid_idx(private_key->idx) || !j_ltc_ecc_is_valid_idx(public_key->idx) )
    return 16i64;
  name = private_key->dp->name;
  v10 = (const char *)(public_key->dp->name - name);
  do
  {
    v11 = (unsigned __int8)v10[(_QWORD)name];
    v12 = *(unsigned __int8 *)name - v11;
    if ( v12 )
      break;
    ++name;
  }
  while ( v11 );
  if ( v12 )
    return 14i64;
  v13 = j_ltc_ecc_new_point();
  if ( !v13 )
    return 13i64;
  v14 = ltc_mp.init(&v18);
  if ( !v14 )
  {
    v14 = ltc_mp.read_radix(v18, private_key->dp->prime, 16);
    if ( v14 )
      goto $done_24;
    v14 = ltc_mp.ecc_ptmul(private_key->k, &public_key->pubkey, v13, v18, 1);
    if ( v14 )
      goto $done_24;
    v15 = ltc_mp.unsigned_size(v18);
    v16 = v15;
    if ( *outlen >= v15 )
    {
      j_zeromem(out, v15);
      v17 = ltc_mp.unsigned_size(v13->x);
      v14 = ltc_mp.unsigned_write(v13->x, &out[v16 - v17]);
      if ( v14 )
      {
$done_24:
        ltc_mp.deinit(v18);
        goto LABEL_20;
      }
    }
    else
    {
      v14 = 6;
    }
    *outlen = v16;
    goto $done_24;
  }
LABEL_20:
  j_ltc_ecc_del_point(v13);
  return v14;
}

