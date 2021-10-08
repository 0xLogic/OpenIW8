/*
==============
ctr_decrypt
==============
*/

int __fastcall ctr_decrypt(const unsigned __int8 *ct, unsigned __int8 *pt, unsigned int len, symmetric_CTR *ctr)
{
  return j_ctr_encrypt(ct, pt, len, ctr);
}

