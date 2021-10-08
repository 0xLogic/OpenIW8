/*
==============
rsa_free
==============
*/
void rsa_free(Rsa_key *key)
{
  j_ltc_cleanup_multi(&key->q, &key->p, &key->qP, &key->dP, &key->dQ, &key->N, &key->d, &key->e, 0i64);
}

