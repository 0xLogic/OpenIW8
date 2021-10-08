/*
==============
mp_dr_setup
==============
*/
void mp_dr_setup(mp_int *a, unsigned int *d)
{
  *d = 0x10000000 - *a->dp;
}

