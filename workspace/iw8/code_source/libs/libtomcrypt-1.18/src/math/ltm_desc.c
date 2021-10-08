/*
==============
gcd
==============
*/

void __fastcall gcd(const hkMpUint *x, const hkMpUint *y, hkMpUint *output)
{
  ?gcd@@YAXAEBUhkMpUint@@0AEAU1@@Z(x, y, output);
}

/*
==============
gcd
==============
*/
void gcd(const hkMpUint *x, const hkMpUint *y, hkMpUint *output)
{
  __int64 m_size; 
  unsigned int *m_data; 
  hkMemoryAllocator *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int *v12; 
  __int64 v13; 
  signed __int64 v14; 
  int v15; 
  __int64 v16; 
  unsigned int *v17; 
  hkMemoryAllocator *v18; 
  int v19; 
  int v20; 
  int v21; 
  unsigned int *v22; 
  __int64 v23; 
  signed __int64 v24; 
  __int64 v25; 
  unsigned int *v26; 
  hkMemoryAllocator *v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  unsigned int *v32; 
  __int64 v33; 
  signed __int64 v34; 
  __int64 v35; 
  unsigned int *v36; 
  hkMemoryAllocator *v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned int *v44; 
  signed __int64 v45; 
  __int64 v46; 
  unsigned int *v47; 
  hkMemoryAllocator *v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  unsigned int *v54; 
  __int64 v55; 
  signed __int64 v56; 
  hkMemoryAllocator *v57; 
  hkMemoryAllocator *v58; 
  hkMemoryAllocator *v59; 
  hkMpUint bi1; 
  hkMpUint array; 
  hkMpUint rOut; 

  array.m_atoms.m_data = NULL;
  array.m_atoms.m_size = 0;
  array.m_atoms.m_capacityAndFlags = 0x80000000;
  if ( &array != x )
  {
    m_size = x->m_atoms.m_size;
    m_data = x->m_atoms.m_data;
    v7 = hkMemHeapAllocator();
    v8 = array.m_atoms.m_size;
    v9 = array.m_atoms.m_size + m_size;
    if ( array.m_atoms.m_size + (int)m_size > (array.m_atoms.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      v10 = 2 * (array.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
      v11 = array.m_atoms.m_size + m_size;
      if ( (unsigned int)v10 >= 0x3FFFFFFF )
        v10 = 1073741822;
      if ( v9 < v10 )
        v11 = v10;
      hkArrayUtil::_reserve(v7, &array, v11, 4);
      v8 = array.m_atoms.m_size;
    }
    v12 = &array.m_atoms.m_data[v8];
    v13 = m_size;
    if ( (int)m_size > 0 )
    {
      v14 = (char *)m_data - (char *)v12;
      do
      {
        *v12 = *(unsigned int *)((char *)v12 + v14);
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    array.m_atoms.m_size = v9;
  }
  bi1.m_atoms.m_data = NULL;
  bi1.m_atoms.m_size = 0;
  v15 = 0;
  bi1.m_atoms.m_capacityAndFlags = 0x80000000;
  if ( &bi1 != y )
  {
    v16 = y->m_atoms.m_size;
    v17 = y->m_atoms.m_data;
    v18 = hkMemHeapAllocator();
    v19 = bi1.m_atoms.m_size;
    v15 = bi1.m_atoms.m_size + v16;
    if ( bi1.m_atoms.m_size + (int)v16 > (bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      v20 = 2 * (bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
      v21 = bi1.m_atoms.m_size + v16;
      if ( (unsigned int)v20 >= 0x3FFFFFFF )
        v20 = 1073741822;
      if ( v15 < v20 )
        v21 = v20;
      hkArrayUtil::_reserve(v18, &bi1, v21, 4);
      v19 = bi1.m_atoms.m_size;
    }
    v22 = &bi1.m_atoms.m_data[v19];
    v23 = v16;
    if ( (int)v16 > 0 )
    {
      v24 = (char *)v17 - (char *)v22;
      do
      {
        *v22 = *(unsigned int *)((char *)v22 + v24);
        ++v22;
        --v23;
      }
      while ( v23 );
    }
    bi1.m_atoms.m_size = v15;
  }
  rOut.m_atoms.m_data = NULL;
  rOut.m_atoms.m_size = 0;
  rOut.m_atoms.m_capacityAndFlags = 0x80000000;
  if ( v15 )
  {
    do
    {
      mod(&array, &bi1, &rOut);
      v25 = bi1.m_atoms.m_size;
      v26 = bi1.m_atoms.m_data;
      array.m_atoms.m_size = 0;
      v27 = hkMemHeapAllocator();
      v28 = array.m_atoms.m_size;
      v29 = array.m_atoms.m_size + v25;
      if ( array.m_atoms.m_size + (int)v25 > (array.m_atoms.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        v30 = 2 * (array.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
        v31 = array.m_atoms.m_size + v25;
        if ( (unsigned int)v30 >= 0x3FFFFFFF )
          v30 = 1073741822;
        if ( v29 < v30 )
          v31 = v30;
        hkArrayUtil::_reserve(v27, &array, v31, 4);
        v28 = array.m_atoms.m_size;
      }
      v32 = &array.m_atoms.m_data[v28];
      v33 = v25;
      if ( (int)v25 > 0 )
      {
        v34 = (char *)v26 - (char *)v32;
        do
        {
          *v32 = *(unsigned int *)((char *)v32 + v34);
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      v35 = rOut.m_atoms.m_size;
      v36 = rOut.m_atoms.m_data;
      array.m_atoms.m_size = v29;
      bi1.m_atoms.m_size = 0;
      v37 = hkMemHeapAllocator();
      v38 = bi1.m_atoms.m_size;
      v39 = bi1.m_atoms.m_size + v35;
      if ( bi1.m_atoms.m_size + (int)v35 > (bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        v40 = 2 * (bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
        v41 = bi1.m_atoms.m_size + v35;
        if ( (unsigned int)v40 >= 0x3FFFFFFF )
          v40 = 1073741822;
        if ( v39 < v40 )
          v41 = v40;
        hkArrayUtil::_reserve(v37, &bi1, v41, 4);
        v38 = bi1.m_atoms.m_size;
      }
      v42 = v38;
      v43 = v35;
      v44 = &bi1.m_atoms.m_data[v42];
      if ( (int)v35 > 0 )
      {
        v45 = (char *)v36 - (char *)v44;
        do
        {
          *v44 = *(unsigned int *)((char *)v44 + v45);
          ++v44;
          --v43;
        }
        while ( v43 );
      }
      bi1.m_atoms.m_size = v39;
    }
    while ( v39 );
  }
  if ( output != &array )
  {
    v46 = array.m_atoms.m_size;
    v47 = array.m_atoms.m_data;
    output->m_atoms.m_size = 0;
    v48 = hkMemHeapAllocator();
    v49 = output->m_atoms.m_size;
    v50 = output->m_atoms.m_capacityAndFlags & 0x3FFFFFFF;
    v51 = v49 + v46;
    if ( v49 + (int)v46 > v50 )
    {
      v52 = 2 * v50;
      v53 = v49 + v46;
      if ( (unsigned int)v52 >= 0x3FFFFFFF )
        v52 = 1073741822;
      if ( v51 < v52 )
        v53 = v52;
      hkArrayUtil::_reserve(v48, output, v53, 4);
      v49 = output->m_atoms.m_size;
    }
    v54 = &output->m_atoms.m_data[v49];
    v55 = v46;
    if ( (int)v46 > 0 )
    {
      v56 = (char *)v47 - (char *)v54;
      do
      {
        *v54 = *(unsigned int *)((char *)v54 + v56);
        ++v54;
        --v55;
      }
      while ( v55 );
    }
    output->m_atoms.m_size = v51;
  }
  v57 = hkMemHeapAllocator();
  rOut.m_atoms.m_size = 0;
  if ( rOut.m_atoms.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v57, rOut.m_atoms.m_data, 4, rOut.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
  rOut.m_atoms.m_data = NULL;
  rOut.m_atoms.m_capacityAndFlags = 0x80000000;
  hkMemHeapAllocator();
  v58 = hkMemHeapAllocator();
  bi1.m_atoms.m_size = 0;
  if ( bi1.m_atoms.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v58, bi1.m_atoms.m_data, 4, bi1.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
  bi1.m_atoms.m_data = NULL;
  bi1.m_atoms.m_capacityAndFlags = 0x80000000;
  v59 = hkMemHeapAllocator();
  array.m_atoms.m_size = 0;
  if ( array.m_atoms.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v59, array.m_atoms.m_data, 4, array.m_atoms.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
neg
==============
*/
__int64 neg(void *a, void *b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_neg((mp_int *)a, (mp_int *)b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
init_copy
==============
*/
__int64 init_copy(void **a, void *b)
{
  mp_int *v4; 
  int v5; 
  int v6; 
  int v7; 
  const const struct {int mpi_code;int ltc_code;} *v8; 
  int v9; 
  const const struct {int mpi_code;int ltc_code;} *v10; 

  v4 = (mp_int *)ltc_calloc(1ui64, 0x18ui64);
  *a = v4;
  if ( !v4 )
    return 13i64;
  v5 = 0;
  v6 = j_mp_init(v4);
  v7 = 0;
  v8 = mpi_to_ltc_codes;
  while ( v6 != v8->mpi_code )
  {
    ++v7;
    if ( (__int64)++v8 >= (__int64)&unk_1447260E8 )
      goto LABEL_7;
  }
  if ( mpi_to_ltc_codes[v7].ltc_code )
  {
LABEL_7:
    ltc_free(*a);
    return 13i64;
  }
  v9 = j_mp_copy((mp_int *)b, (mp_int *)*a);
  v10 = mpi_to_ltc_codes;
  while ( v9 != v10->mpi_code )
  {
    ++v5;
    if ( (__int64)++v10 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
}

/*
==============
set_int
==============
*/
__int64 set_int(void *a, unsigned int b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_set_int((mp_int *)a, b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
get_int
==============
*/

unsigned int __fastcall get_int(void *a)
{
  return j_mp_get_int((mp_int *)a);
}

/*
==============
get_digit
==============
*/
__int64 get_digit(void *a, int n)
{
  if ( n >= *(_DWORD *)a || n < 0 )
    return 0i64;
  else
    return *(unsigned int *)(*((_QWORD *)a + 2) + 4i64 * n);
}

/*
==============
get_digit_count
==============
*/
__int64 get_digit_count(void *a)
{
  return *(unsigned int *)a;
}

/*
==============
compare_d
==============
*/
char compare_d(void *a, unsigned int b)
{
  int v2; 
  char result; 

  v2 = j_mp_cmp_d((mp_int *)a, b);
  if ( v2 == -1 )
    return -1;
  result = 0;
  if ( v2 )
    return v2 == 1;
  return result;
}

/*
==============
count_bits
==============
*/

int __fastcall count_bits(void *a)
{
  return j_mp_count_bits((mp_int *)a);
}

/*
==============
count_lsb_bits
==============
*/

int __fastcall count_lsb_bits(void *a)
{
  return j_mp_cnt_lsb((mp_int *)a);
}

/*
==============
twoexpt
==============
*/
__int64 twoexpt(void *a, int n)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_2expt((mp_int *)a, n);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
read_radix
==============
*/
__int64 read_radix(void *a, const char *b, int radix)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_read_radix((mp_int *)a, b, radix);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
write_radix
==============
*/
__int64 write_radix(void *a, char *b, int radix)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_toradix((mp_int *)a, b, radix);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
unsigned_size
==============
*/

int __fastcall unsigned_size(void *a)
{
  return j_mp_unsigned_bin_size((mp_int *)a);
}

/*
==============
unsigned_write
==============
*/
__int64 unsigned_write(void *a, unsigned __int8 *b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_to_unsigned_bin((mp_int *)a, b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
unsigned_read
==============
*/
__int64 unsigned_read(void *a, unsigned __int8 *b, unsigned int len)
{
  int unsigned_bin; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  unsigned_bin = j_mp_read_unsigned_bin((mp_int *)a, b, len);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( unsigned_bin != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
addi
==============
*/
__int64 addi(void *a, unsigned int b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_add_d((mp_int *)a, b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
subi
==============
*/
__int64 subi(void *a, unsigned int b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_sub_d((mp_int *)a, b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
muli
==============
*/
__int64 muli(void *a, unsigned int b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_mul_d((mp_int *)a, b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
sqr
==============
*/
__int64 sqr(void *a, void *b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_sqr((mp_int *)a, (mp_int *)b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
divide
==============
*/
__int64 divide(void *a, void *b, void *c, void *d)
{
  int v4; 
  int v5; 
  const const struct {int mpi_code;int ltc_code;} *v6; 

  v4 = j_mp_div((mp_int *)a, (mp_int *)b, (mp_int *)c, (mp_int *)d);
  v5 = 0;
  v6 = mpi_to_ltc_codes;
  while ( v4 != v6->mpi_code )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
}

/*
==============
div_2
==============
*/
__int64 div_2(void *a, void *b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_div_2((mp_int *)a, (mp_int *)b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
modi
==============
*/
__int64 modi(void *a, unsigned int b, unsigned int *c)
{
  int v4; 
  int v5; 
  const const struct {int mpi_code;int ltc_code;} *v6; 
  __int64 result; 
  unsigned int ca; 

  v4 = j_mp_mod_d((mp_int *)a, b, &ca);
  v5 = 0;
  v6 = mpi_to_ltc_codes;
  while ( v4 != v6->mpi_code )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  result = (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
  if ( !(_DWORD)result )
  {
    *c = ca;
    return 0i64;
  }
  return result;
}

/*
==============
gcd
==============
*/
__int64 gcd(void *a, void *b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_gcd((mp_int *)a, (mp_int *)b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
lcm
==============
*/
__int64 lcm(void *a, void *b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_lcm((mp_int *)a, (mp_int *)b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
addmod
==============
*/
__int64 addmod(void *a, void *b, void *c, void *d)
{
  int v4; 
  int v5; 
  const const struct {int mpi_code;int ltc_code;} *v6; 

  v4 = j_mp_addmod((mp_int *)a, (mp_int *)b, (mp_int *)c, (mp_int *)d);
  v5 = 0;
  v6 = mpi_to_ltc_codes;
  while ( v4 != v6->mpi_code )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
}

/*
==============
submod
==============
*/
__int64 submod(void *a, void *b, void *c, void *d)
{
  int v4; 
  int v5; 
  const const struct {int mpi_code;int ltc_code;} *v6; 

  v4 = j_mp_submod((mp_int *)a, (mp_int *)b, (mp_int *)c, (mp_int *)d);
  v5 = 0;
  v6 = mpi_to_ltc_codes;
  while ( v4 != v6->mpi_code )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
}

/*
==============
mulmod
==============
*/
__int64 mulmod(void *a, void *b, void *c, void *d)
{
  int v4; 
  int v5; 
  const const struct {int mpi_code;int ltc_code;} *v6; 

  v4 = j_mp_mulmod((mp_int *)a, (mp_int *)b, (mp_int *)c, (mp_int *)d);
  v5 = 0;
  v6 = mpi_to_ltc_codes;
  while ( v4 != v6->mpi_code )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
}

/*
==============
sqrmod
==============
*/
__int64 sqrmod(void *a, void *b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_sqrmod((mp_int *)a, (mp_int *)b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
invmod
==============
*/
__int64 invmod(void *a, void *b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_invmod((mp_int *)a, (mp_int *)b, (mp_int *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
montgomery_setup
==============
*/
__int64 montgomery_setup(void *a, void **b)
{
  unsigned int ltc_code; 
  void *v5; 
  int v7; 
  const const struct {int mpi_code;int ltc_code;} *v8; 
  int v9; 

  ltc_code = 1;
  v5 = ltc_calloc(1ui64, 4ui64);
  *b = v5;
  if ( !v5 )
    return 13i64;
  v7 = j_mp_montgomery_setup((mp_int *)a, (unsigned int *)v5);
  v8 = mpi_to_ltc_codes;
  v9 = 0;
  while ( v7 != v8->mpi_code )
  {
    ++v9;
    if ( (__int64)++v8 >= (__int64)&unk_1447260E8 )
      goto LABEL_8;
  }
  ltc_code = mpi_to_ltc_codes[v9].ltc_code;
  if ( !ltc_code )
    return ltc_code;
LABEL_8:
  ltc_free(*b);
  return ltc_code;
}

/*
==============
montgomery_normalization
==============
*/
__int64 montgomery_normalization(void *a, void *b)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_montgomery_calc_normalization((mp_int *)a, (mp_int *)b);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

/*
==============
montgomery_reduce
==============
*/
__int64 montgomery_reduce(void *a, void *b, void *c)
{
  int v3; 
  int v4; 
  const const struct {int mpi_code;int ltc_code;} *v5; 

  v3 = j_mp_montgomery_reduce((mp_int *)a, (mp_int *)b, *(_DWORD *)c);
  v4 = 0;
  v5 = mpi_to_ltc_codes;
  while ( v3 != v5->mpi_code )
  {
    ++v4;
    if ( (__int64)++v5 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v4].ltc_code;
}

/*
==============
montgomery_deinit
==============
*/

void __fastcall montgomery_deinit(void *a)
{
  ltc_free(a);
}

/*
==============
exptmod
==============
*/
__int64 exptmod(void *a, void *b, void *c, void *d)
{
  int v4; 
  int v5; 
  const const struct {int mpi_code;int ltc_code;} *v6; 

  v4 = j_mp_exptmod((mp_int *)a, (mp_int *)b, (mp_int *)c, (mp_int *)d);
  v5 = 0;
  v6 = mpi_to_ltc_codes;
  while ( v4 != v6->mpi_code )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v5].ltc_code;
}

/*
==============
isprime
==============
*/
__int64 isprime(void *a, int b, int *c)
{
  bool v5; 
  int v6; 
  int is_prime; 
  int v8; 
  int v9; 
  const const struct {int mpi_code;int ltc_code;} *v10; 
  __int64 result; 

  v5 = b == 0;
  v6 = 40;
  if ( !v5 )
    v6 = b;
  is_prime = j_mp_prime_is_prime((mp_int *)a, v6, c);
  v8 = 0;
  v9 = 0;
  v10 = mpi_to_ltc_codes;
  while ( is_prime != v10->mpi_code )
  {
    ++v9;
    if ( (__int64)++v10 >= (__int64)&unk_1447260E8 )
    {
      result = 1i64;
      LOBYTE(v8) = *c == 1;
      *c = v8;
      return result;
    }
  }
  LOBYTE(v8) = *c == 1;
  result = (unsigned int)mpi_to_ltc_codes[v9].ltc_code;
  *c = v8;
  return result;
}

/*
==============
set_rand
==============
*/
__int64 set_rand(void *a, int size)
{
  int v2; 
  int v3; 
  const const struct {int mpi_code;int ltc_code;} *v4; 

  v2 = j_mp_rand((mp_int *)a, size);
  v3 = 0;
  v4 = mpi_to_ltc_codes;
  while ( v2 != v4->mpi_code )
  {
    ++v3;
    if ( (__int64)++v4 >= (__int64)&unk_1447260E8 )
      return 1i64;
  }
  return (unsigned int)mpi_to_ltc_codes[v3].ltc_code;
}

