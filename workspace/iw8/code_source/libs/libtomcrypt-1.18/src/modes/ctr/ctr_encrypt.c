/*
==============
ctr_encrypt
==============
*/
int ctr_encrypt(const unsigned __int8 *pt, unsigned __int8 *ct, unsigned int len, symmetric_CTR *ctr)
{
  int result; 
  unsigned int blocklen; 
  unsigned int padlen; 
  int (__fastcall *accel_ctr_encrypt)(const unsigned __int8 *, unsigned __int8 *, unsigned int, unsigned __int8 *, int, Symmetric_key *); 
  signed int v12; 
  int v13; 
  int ctrlen; 
  int v15; 
  unsigned __int8 *v16; 
  bool v17; 
  int v18; 
  unsigned __int8 *v19; 
  signed int v20; 
  signed int v21; 
  const unsigned __int8 *v22; 
  __int64 v23; 

  result = j_cipher_is_valid(ctr->cipher);
  if ( !result )
  {
    blocklen = ctr->blocklen;
    if ( blocklen - 1 > 0x7F )
      return 16;
    padlen = ctr->padlen;
    if ( padlen > 0x80 || (blocklen & 7) != 0 )
      return 16;
    if ( padlen == blocklen )
    {
      accel_ctr_encrypt = cipher_descriptor[ctr->cipher].accel_ctr_encrypt;
      if ( accel_ctr_encrypt )
      {
        if ( len >= blocklen )
        {
          result = accel_ctr_encrypt(pt, ct, len / blocklen, ctr->ctr, ctr->mode, &ctr->key);
          if ( result )
            return result;
          len %= ctr->blocklen;
        }
      }
    }
    if ( len )
    {
      v12 = ctr->padlen;
      do
      {
        v13 = ctr->blocklen;
        if ( v12 == v13 )
        {
          ctrlen = ctr->ctrlen;
          if ( ctr->mode )
          {
            v18 = v13 - 1;
            if ( v13 > ctrlen )
            {
              v19 = &ctr->ctr[v18];
              do
              {
                v17 = (*v19)++ == 0xFF;
                if ( !v17 )
                  break;
                --v18;
                --v19;
              }
              while ( v18 >= ctr->ctrlen );
            }
          }
          else
          {
            v15 = 0;
            if ( ctrlen > 0 )
            {
              v16 = ctr->ctr;
              do
              {
                v17 = (*v16)++ == 0xFF;
                if ( !v17 )
                  break;
                ++v15;
                ++v16;
              }
              while ( v15 < ctr->ctrlen );
            }
          }
          result = cipher_descriptor[ctr->cipher].ecb_encrypt(ctr->ctr, ctr->pad, &ctr->key);
          if ( result )
            return result;
          v13 = ctr->blocklen;
          ctr->padlen = 0;
        }
        else if ( v12 )
        {
          v20 = v12;
          goto LABEL_32;
        }
        v12 = v13;
        v20 = 0;
        if ( len >= v12 )
        {
          v21 = 0;
          if ( v12 > 0 )
          {
            v22 = pt;
            do
            {
              v21 += 8;
              *(_QWORD *)&v22[ct - pt] = *(_QWORD *)v22 ^ *(_QWORD *)&v22[(char *)ctr - (char *)pt + 148];
              v22 += 8;
              v12 = ctr->blocklen;
            }
            while ( v21 < v12 );
          }
          len -= v12;
          ctr->padlen = v12;
          v23 = v12;
          goto LABEL_33;
        }
LABEL_32:
        *ct = *pt ^ ctr->pad[v20];
        v23 = 1i64;
        v12 = ++ctr->padlen;
        --len;
LABEL_33:
        ct += v23;
        pt += v23;
      }
      while ( len );
    }
    return 0;
  }
  return result;
}

