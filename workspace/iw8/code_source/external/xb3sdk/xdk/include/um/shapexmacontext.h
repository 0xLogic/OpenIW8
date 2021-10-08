/*
==============
GetShapeXmaOutputBufferNumBytesAvailable
==============
*/

unsigned int __fastcall GetShapeXmaOutputBufferNumBytesAvailable(const SHAPE_XMA_CONTEXT *context)
{
  return ?GetShapeXmaOutputBufferNumBytesAvailable@@YAIPEBUSHAPE_XMA_CONTEXT@@@Z(context);
}

/*
==============
SetShapeXmaNumSubframesToDecode
==============
*/

HRESULT __fastcall SetShapeXmaNumSubframesToDecode(SHAPE_XMA_CONTEXT *context, unsigned int numSubframes)
{
  return ?SetShapeXmaNumSubframesToDecode@@YAJPEAUSHAPE_XMA_CONTEXT@@I@Z(context, numSubframes);
}

/*
==============
GetShapeXmaOutputBufferNumBytesAvailable
==============
*/
__int64 GetShapeXmaOutputBufferNumBytesAvailable(const SHAPE_XMA_CONTEXT *context)
{
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 

  v1 = *(_DWORD *)context;
  v2 = (*(_DWORD *)context >> 19) & 0x1F00;
  v3 = (*((_DWORD *)context + 9) & 0x1F) << 8;
  if ( v3 > v2 )
    return v2 + ((v1 >> 14) & 0x1F00) - v3;
  if ( v3 < v2 )
    return v2 - v3;
  if ( *((int *)context + 1) < 0 )
    return 0i64;
  return (v1 >> 14) & 0x1F00;
}

/*
==============
SetShapeXmaNumSubframesToDecode
==============
*/
__int64 SetShapeXmaNumSubframesToDecode(SHAPE_XMA_CONTEXT *context, unsigned int numSubframes)
{
  __int64 v2; 
  int v4[4]; 

  if ( !context )
    return 2147942487i64;
  v4[0] = 1;
  v2 = 0i64;
  v4[1] = 2;
  v4[2] = 4;
  v4[3] = 8;
  while ( numSubframes != v4[v2] )
  {
    if ( (unsigned __int64)++v2 >= 4 )
      return 2147942487i64;
  }
  *((_DWORD *)context + 1) &= 0xFF0FFFFF;
  *((_DWORD *)context + 1) |= (numSubframes & 0xF) << 20;
  return 0i64;
}

