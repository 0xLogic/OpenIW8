/*
==============
hash_memory
==============
*/
int hash_memory(int hash, const unsigned __int8 *in, unsigned int inlen, unsigned __int8 *out, unsigned int *outlen)
{
  __int64 v5; 
  int result; 
  __int64 v10; 
  unsigned int hashsize; 
  void *v12; 
  void *v13; 
  int v14; 

  v5 = hash;
  result = j_hash_is_valid(hash);
  if ( !result )
  {
    v10 = v5 << 7;
    hashsize = hash_descriptor[v5].hashsize;
    if ( *outlen >= hashsize )
    {
      v12 = ltc_malloc(0x190ui64);
      v13 = v12;
      if ( v12 )
      {
        v14 = (*(__int64 (__fastcall **)(void *))((char *)&hash_descriptor[0].init + v10))(v12);
        if ( !v14 )
        {
          v14 = (*(__int64 (__fastcall **)(void *, const unsigned __int8 *, _QWORD))((char *)&hash_descriptor[0].process + v10))(v13, in, inlen);
          if ( !v14 )
          {
            v14 = (*(__int64 (__fastcall **)(void *, unsigned __int8 *))((char *)&hash_descriptor[0].done + v10))(v13, out);
            *outlen = *(unsigned int *)((char *)&hash_descriptor[0].hashsize + v10);
          }
        }
        ltc_free(v13);
        return v14;
      }
      else
      {
        return 13;
      }
    }
    else
    {
      *outlen = hashsize;
      return 6;
    }
  }
  return result;
}

