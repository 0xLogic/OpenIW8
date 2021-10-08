/*
==============
zeromem
==============
*/
void zeromem(volatile void *out, unsigned __int64 outlen)
{
  for ( ; outlen; --outlen )
  {
    *(_BYTE *)out = 0;
    out = (char *)out + 1;
  }
}

