/*
==============
pk_get_oid
==============
*/
__int64 pk_get_oid(int pk, Oid *st)
{
  if ( pk )
  {
    if ( pk == 1 )
    {
      *st = dsa_oid;
      return 0i64;
    }
    else
    {
      return 16i64;
    }
  }
  else
  {
    *st = rsa_oid;
    return 0i64;
  }
}

