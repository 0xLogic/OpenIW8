/*
==============
ltc_ecc_del_point
==============
*/
void ltc_ecc_del_point(ecc_point *p)
{
  if ( p )
  {
    j_ltc_deinit_multi(p->x, p->y, p->z, 0i64);
    ltc_free(p);
  }
}

/*
==============
ltc_ecc_new_point
==============
*/
ecc_point *ltc_ecc_new_point()
{
  void **v0; 
  void **v1; 

  v0 = (void **)ltc_calloc(1ui64, 0x18ui64);
  v1 = v0;
  if ( !v0 )
    return 0i64;
  if ( j_ltc_init_multi(v0, v0 + 1, v0 + 2, 0i64) )
  {
    ltc_free(v1);
    return 0i64;
  }
  return (ecc_point *)v1;
}

