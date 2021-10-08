/*
==============
ctr_start
==============
*/
int ctr_start(int cipher, const unsigned __int8 *IV, const unsigned __int8 *key, int keylen, int num_rounds, int ctr_mode, symmetric_CTR *ctr)
{
  __int64 v7; 
  int result; 
  int block_length; 
  int v13; 
  int v14; 
  int blocklen; 
  int v16; 
  unsigned __int8 *v17; 
  signed __int64 v18; 
  int ctrlen; 
  unsigned __int8 *v20; 
  bool v21; 
  int v22; 
  unsigned __int8 *v23; 

  v7 = cipher;
  result = j_cipher_is_valid(cipher);
  if ( !result )
  {
    block_length = (unsigned __int8)ctr_mode;
    if ( !(_BYTE)ctr_mode )
      block_length = cipher_descriptor[v7].block_length;
    ctr->ctrlen = block_length;
    v13 = cipher_descriptor[v7].block_length;
    if ( block_length <= v13 )
    {
      if ( (ctr_mode & 0x1000) != 0 )
        ctr->ctrlen = v13 - block_length;
      result = cipher_descriptor[v7].setup(key, keylen, num_rounds, &ctr->key);
      if ( !result )
      {
        v14 = 0;
        blocklen = cipher_descriptor[v7].block_length;
        v16 = 0;
        ctr->blocklen = blocklen;
        ctr->cipher = v7;
        ctr->padlen = 0;
        ctr->mode = ctr_mode & 0x1000;
        if ( blocklen > 0 )
        {
          v17 = ctr->ctr;
          v18 = IV - (const unsigned __int8 *)ctr;
          do
          {
            ++v16;
            *v17 = v17[v18 - 20];
            ++v17;
            blocklen = ctr->blocklen;
          }
          while ( v16 < blocklen );
        }
        if ( (ctr_mode & 0x2000) != 0 )
        {
          ctrlen = ctr->ctrlen;
          if ( ctr->mode )
          {
            v22 = blocklen - 1;
            if ( blocklen > ctrlen )
            {
              v23 = &ctr->ctr[v22];
              do
              {
                v21 = (*v23)++ == 0xFF;
                if ( !v21 )
                  break;
                --v22;
                --v23;
              }
              while ( v22 >= ctr->ctrlen );
            }
          }
          else if ( ctrlen > 0 )
          {
            v20 = ctr->ctr;
            do
            {
              v21 = (*v20)++ == 0xFF;
              if ( !v21 )
                break;
              ++v14;
              ++v20;
            }
            while ( v14 < ctr->ctrlen );
          }
        }
        return cipher_descriptor[ctr->cipher].ecb_encrypt(ctr->ctr, ctr->pad, &ctr->key);
      }
    }
    else
    {
      return 16;
    }
  }
  return result;
}

