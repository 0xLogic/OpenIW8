/*
==============
mp_clear_multi
==============
*/
void mp_clear_multi(mp_int *mp, ...)
{
  _QWORD *v1; 
  __int64 v2; 

  if ( mp )
  {
    v1 = &v2 + 6;
    do
    {
      j_mp_clear(mp);
      mp = (mp_int *)v1[1];
      ++v1;
    }
    while ( mp );
  }
}

