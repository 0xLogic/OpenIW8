/*
==============
aesni_supported
==============
*/
int aesni_supported()
{
  int result; 

  result = supported_1;
  if ( supported_1 == 16 )
  {
    result = cpu_feature_supported(supported_1 - 14, 0x2000000);
    supported_1 = result;
  }
  return result;
}

/*
==============
cpu_feature_supported
==============
*/
_BOOL8 cpu_feature_supported(const int regnum, const int flag)
{
  __int64 v3; 
  bool v9; 
  _BOOL8 result; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 

  _RAX = 0i64;
  v3 = regnum;
  __asm { cpuid }
  v9 = (int)_RAX < 1;
  v16 = _RBX;
  result = 1i64;
  v17 = _RCX;
  v18 = _RDX;
  if ( !v9 )
  {
    __asm { cpuid }
    v15 = _RAX;
    v16 = _RBX;
    v17 = _RCX;
    v18 = _RDX;
    return (flag & *(&v15 + v3)) == 0;
  }
  return result;
}

/*
==============
pclmulqdq_supported
==============
*/
__int64 pclmulqdq_supported()
{
  __int64 result; 

  result = (unsigned int)supported_0;
  if ( supported_0 == 16 )
  {
    result = cpu_feature_supported(supported_0 - 14, supported_0 - 15);
    supported_0 = result;
  }
  return result;
}

/*
==============
sse2_aligned
==============
*/
_BOOL8 sse2_aligned(void *p)
{
  return ((unsigned __int8)p & 0xF) == 0;
}

/*
==============
sse2_supported
==============
*/
__int64 sse2_supported()
{
  __int64 result; 

  result = (unsigned int)supported;
  if ( supported == 16 )
  {
    result = cpu_feature_supported(supported - 13, 0x4000000);
    supported = result;
  }
  return result;
}

