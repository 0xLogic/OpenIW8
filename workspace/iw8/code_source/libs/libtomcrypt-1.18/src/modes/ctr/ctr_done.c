/*
==============
ctr_done
==============
*/
int ctr_done(symmetric_CTR *ctr)
{
  int result; 

  result = j_cipher_is_valid(ctr->cipher);
  if ( !result )
  {
    cipher_descriptor[ctr->cipher].done(&ctr->key);
    return 0;
  }
  return result;
}

