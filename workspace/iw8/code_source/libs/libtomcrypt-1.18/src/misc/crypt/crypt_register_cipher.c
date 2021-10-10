/*
==============
register_cipher
==============
*/
__int64 register_cipher(const ltc_cipher_descriptor *cipher)
{
  unsigned int v1; 
  unsigned __int8 *p_ID; 
  unsigned int v3; 
  ltc_cipher_descriptor *v4; 
  __int64 result; 

  v1 = 0;
  p_ID = &cipher_descriptor[0].ID;
  v3 = 0;
  do
  {
    if ( *((_QWORD *)p_ID - 1) && *p_ID == cipher->ID )
      return v3;
    ++v3;
    p_ID += 192;
  }
  while ( (__int64)p_ID < (__int64)&unk_156677368 );
  v4 = cipher_descriptor;
  while ( v4->name )
  {
    ++v1;
    if ( (__int64)++v4 >= (__int64)&unk_156677360 )
      return 0xFFFFFFFFi64;
  }
  result = v1;
  cipher_descriptor[v1] = *cipher;
  return result;
}

