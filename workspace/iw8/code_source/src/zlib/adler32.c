/*
==============
adler32_combine64
==============
*/

unsigned int __fastcall adler32_combine64(unsigned int adler1, unsigned int adler2, __int64 len2)
{
  return ?adler32_combine64@@YAKKK_J@Z(adler1, adler2, len2);
}

/*
==============
adler32
==============
*/
__int64 adler32(unsigned int adler, const unsigned __int8 *buf, unsigned int len)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  const unsigned __int8 *v6; 
  int v8; 
  unsigned __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 

  v3 = (unsigned __int16)adler;
  v4 = len;
  v5 = HIWORD(adler);
  v6 = buf;
  if ( !buf )
    return 1i64;
  if ( len )
  {
    do
    {
      v8 = 5552;
      if ( v4 < 0x15B0 )
        v8 = v4;
      v4 -= v8;
      if ( v8 >= 16 )
      {
        v9 = (unsigned __int64)(unsigned int)v8 >> 4;
        v8 += -16 * ((unsigned int)v8 >> 4);
        do
        {
          v10 = *v6 + v3;
          v11 = v10 + v5;
          v12 = v6[1] + v10;
          v13 = v12 + v11;
          v14 = v6[2] + v12;
          v15 = v14 + v13;
          v16 = v6[3] + v14;
          v17 = v16 + v15;
          v18 = v6[4] + v16;
          v19 = v18 + v17;
          v20 = v6[5] + v18;
          v21 = v20 + v19;
          v22 = v6[6] + v20;
          v23 = v22 + v21;
          v24 = v6[7] + v22;
          v25 = v24 + v23;
          v26 = v6[8] + v24;
          v27 = v26 + v25;
          v28 = v6[9] + v26;
          v29 = v28 + v27;
          v30 = v6[10] + v28;
          v31 = v30 + v29;
          v32 = v6[11] + v30;
          v33 = v32 + v31;
          v34 = v6[12] + v32;
          v35 = v34 + v33;
          v36 = v6[13] + v34;
          v37 = v36 + v35;
          v38 = v6[14] + v36;
          v39 = v6[15];
          v40 = v38 + v37;
          v6 += 16;
          v3 = v39 + v38;
          v5 = v3 + v40;
          --v9;
        }
        while ( v9 );
      }
      for ( ; v8; --v8 )
      {
        v41 = *v6++;
        v3 += v41;
        v5 += v3;
      }
      v3 %= 0xFFF1u;
      v5 %= 0xFFF1u;
    }
    while ( v4 );
  }
  return v3 | (v5 << 16);
}

/*
==============
adler32_combine64
==============
*/

unsigned int __fastcall adler32_combine64(unsigned int adler1, unsigned int adler2, __int64 len2)
{
  return adler32_combine_(adler1, adler2, len2);
}

/*
==============
adler32_combine_
==============
*/
__int64 adler32_combine_(unsigned int adler1, unsigned int adler2, __int64 len2)
{
  int v3; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 

  v3 = len2;
  if ( len2 < 0 )
    return 0xFFFFFFFFi64;
  v6 = (unsigned __int16)adler1 + (unsigned __int16)adler2;
  v7 = v6 + 65520;
  v8 = v3 % 65521 * (unsigned __int16)adler1 + HIWORD(adler2) + HIWORD(adler1) - 65521 * (v3 % 65521 * (unsigned int)(unsigned __int16)adler1 / 0xFFF1) - v3 % 65521;
  v9 = v6 - 1;
  if ( v7 < 0xFFF1 )
    v9 = v7;
  v10 = -65521;
  if ( v8 + 65521 < 0x1FFE2 )
    v10 = 65521;
  v11 = v8 + v10;
  v12 = v11 - 65521;
  if ( v11 < 0xFFF1 )
    v12 = v11;
  v13 = v9 - 65521;
  v14 = v12 << 16;
  if ( v9 < 0xFFF1 )
    v13 = v9;
  return v13 | v14;
}

/*
==============
adler32_combine
==============
*/
__int64 adler32_combine(unsigned int adler1, unsigned int adler2, int len2)
{
  return adler32_combine_(adler1, adler2, len2);
}

