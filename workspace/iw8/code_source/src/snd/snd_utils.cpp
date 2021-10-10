/*
==============
SND_Hash
==============
*/

unsigned int __fastcall SND_Hash(const void *data, unsigned int length)
{
  return ?SND_Hash@@YAIPEBXI@Z(data, length);
}

/*
==============
SND_AssetEnvelope
==============
*/

double __fastcall SND_AssetEnvelope(int played, int length, unsigned __int8 e0, unsigned __int8 e1, unsigned __int8 e2, unsigned __int8 e3, unsigned __int16 i1, unsigned __int16 i2)
{
  double result; 

  *(float *)&result = ?SND_AssetEnvelope@@YAMHHEEEEGG@Z(played, length, e0, e1, e2, e3, i1, i2);
  return result;
}

/*
==============
SND_AssetEnvelope
==============
*/
double SND_AssetEnvelope(int played, int length, unsigned __int8 e0, unsigned __int8 e1, unsigned __int8 e2, unsigned __int8 e3, unsigned __int16 i1, unsigned __int16 i2)
{
  __int128 v10; 
  __int128 v13; 
  __int128 v16; 
  int v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 

  v10 = 0i64;
  *(float *)&v10 = (float)e2;
  _XMM8 = v10;
  __asm { vmaxss  xmm0, xmm8, xmm11 }
  v13 = 0i64;
  *(float *)&v13 = (float)e1;
  _XMM7 = v13;
  __asm { vmaxss  xmm1, xmm7, xmm0 }
  v16 = 0i64;
  *(float *)&v16 = (float)e0;
  _XMM9 = v16;
  __asm
  {
    vmaxss  xmm2, xmm9, xmm1
    vcmpeqss xmm0, xmm2, xmm10
    vblendvps xmm0, xmm2, xmm6, xmm0
  }
  v20 = (int)(float)((float)((float)played * 65535.0) / (float)length);
  if ( dword_14EAFF664 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14EAFF664);
    if ( dword_14EAFF664 == -1 )
    {
      escale = 1.0 / *(float *)&_XMM0;
      j__Init_thread_footer(&dword_14EAFF664);
    }
  }
  if ( v20 >= i1 )
  {
    if ( v20 >= i2 )
    {
      v24 = (float)(v20 - i2) / (float)(length - i2);
      v23 = (float)((float)(1.0 - v24) * *(float *)&_XMM8) + (float)((float)e3 * v24);
    }
    else
    {
      v22 = (float)(v20 - i1) / (float)(i2 - i1);
      v23 = (float)((float)(1.0 - v22) * *(float *)&_XMM7) + (float)(*(float *)&_XMM8 * v22);
    }
    v21 = v23 * escale;
  }
  else
  {
    v21 = (float)((float)((float)(1.0 - (float)((float)v20 / (float)i1)) * *(float *)&v16) + (float)(*(float *)&_XMM7 * (float)((float)v20 / (float)i1))) * escale;
  }
  return I_fclamp(v21, 0.0, 1.0);
}

/*
==============
SND_Hash
==============
*/
__int64 SND_Hash(const void *data, unsigned int length)
{
  __int64 result; 
  __int64 v3; 
  int v4; 

  result = 5381i64;
  if ( length )
  {
    v3 = length;
    do
    {
      v4 = *(unsigned __int8 *)data;
      data = (char *)data + 1;
      result = (unsigned int)(v4 + 65599 * result);
      --v3;
    }
    while ( v3 );
    if ( !(_DWORD)result )
      return 1i64;
  }
  return result;
}

