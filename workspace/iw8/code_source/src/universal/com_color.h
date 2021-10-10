/*
==============
Byte4PackVertexColor
==============
*/

void __fastcall Byte4PackVertexColor(const vec4_t *from, unsigned __int8 *to)
{
  ?Byte4PackVertexColor@@YAXAEBTvec4_t@@QEAE@Z(from, to);
}

/*
==============
Byte4PackVertexColor
==============
*/
void Byte4PackVertexColor(const vec4_t *from, unsigned __int8 *to)
{
  int v4; 
  unsigned __int8 v5; 
  int v7; 
  unsigned __int8 v8; 
  int v10; 
  unsigned __int8 v11; 
  int v13; 
  unsigned __int8 v14; 

  _XMM6 = 0i64;
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  v4 = (int)*(float *)&_XMM3;
  if ( (int)*(float *)&_XMM3 > 255 )
    v4 = 255;
  v5 = v4;
  if ( v4 < 0 )
    v5 = 0;
  *to = v5;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  v7 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v7 = 255;
  v8 = v7;
  if ( v7 < 0 )
    v8 = 0;
  to[1] = v8;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  v10 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v10 = 255;
  v11 = v10;
  if ( v10 < 0 )
    v11 = 0;
  to[2] = v11;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  v13 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v13 = 255;
  v14 = v13;
  if ( v13 < 0 )
    v14 = 0;
  to[3] = v14;
}

