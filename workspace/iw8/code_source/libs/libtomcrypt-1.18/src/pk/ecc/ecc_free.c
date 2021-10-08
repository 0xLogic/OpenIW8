/*
==============
ecc_free
==============
*/
void ecc_free(ecc_key *key)
{
  j_ltc_deinit_multi(key->pubkey.x, key->pubkey.y, key->pubkey.z, key->k, 0i64);
}

