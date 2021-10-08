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
      __asm
      {
        vmovups ymm0, ymmword ptr cs:dsa_oid.OID
        vmovups ymmword ptr [rdx], ymm0
        vmovups ymm1, ymmword ptr cs:dsa_oid.OID+20h
        vmovups ymmword ptr [rdx+20h], ymm1
      }
      st->OIDlen = dsa_oid.OIDlen;
      return 0i64;
    }
    else
    {
      return 16i64;
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:rsa_oid.OID
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm1, ymmword ptr cs:rsa_oid.OID+20h
      vmovups ymmword ptr [rdx+20h], ymm1
    }
    st->OIDlen = rsa_oid.OIDlen;
    return 0i64;
  }
}

