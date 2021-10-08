/*
==============
tg::HashRaw
==============
*/

unsigned int __fastcall tg::HashRaw(const unsigned __int8 *k, unsigned int length, unsigned int initval)
{
  return ?HashRaw@tg@@YAIPEBEII@Z(k, length, initval);
}

/*
==============
tg::HashRaw
==============
*/
__int64 tg::HashRaw(const unsigned __int8 *k, unsigned int length, unsigned int initval)
{
  unsigned int v3; 
  int v5; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 

  v3 = -1640531527;
  v5 = -1640531527;
  v7 = length;
  if ( length >= 0xC )
  {
    v8 = length / 0xC;
    do
    {
      v7 -= 12;
      v9 = ((k[5] + ((k[6] + (k[7] << 8)) << 8)) << 8) + k[4] + v3;
      v10 = ((k[9] + ((k[10] + (k[11] << 8)) << 8)) << 8) + k[8] + initval;
      v11 = *k;
      v12 = (k[1] + ((k[2] + (k[3] << 8)) << 8)) << 8;
      k += 12;
      v13 = (v10 >> 13) ^ (v11 + v12 - v10 - v9 + v5);
      v14 = (v13 << 8) ^ (v9 - v10 - v13);
      v15 = (v14 >> 13) ^ (v10 - v14 - v13);
      v16 = (v15 >> 12) ^ (v13 - v15 - v14);
      v17 = (v16 << 16) ^ (v14 - v15 - v16);
      v18 = (v17 >> 5) ^ (v15 - v17 - v16);
      v5 = (v18 >> 3) ^ (v16 - v18 - v17);
      v3 = (v5 << 10) ^ (v17 - v18 - v5);
      initval = (v3 >> 15) ^ (v18 - v3 - v5);
      --v8;
    }
    while ( v8 );
  }
  v19 = length + initval;
  switch ( v7 )
  {
    case 1u:
      goto $LN16_257;
    case 2u:
      goto $LN15_453;
    case 3u:
      goto $LN14_463;
    case 4u:
      goto $LN13_476;
    case 5u:
      goto $LN12_452;
    case 6u:
      goto $LN11_296;
    case 7u:
      goto $LN10_359;
    case 8u:
      goto $LN9_406;
    case 9u:
      goto $LN8_404;
    case 0xAu:
      goto $LN7_970;
    case 0xBu:
      v19 += k[10] << 24;
$LN7_970:
      v19 += k[9] << 16;
$LN8_404:
      v19 += k[8] << 8;
$LN9_406:
      v3 += k[7] << 24;
$LN10_359:
      v3 += k[6] << 16;
$LN11_296:
      v3 += k[5] << 8;
$LN12_452:
      v3 += k[4];
$LN13_476:
      v5 += k[3] << 24;
$LN14_463:
      v5 += k[2] << 16;
$LN15_453:
      v5 += k[1] << 8;
$LN16_257:
      v5 += *k;
      break;
    default:
      break;
  }
  v20 = (v19 >> 13) ^ (v5 - v19 - v3);
  v21 = (v20 << 8) ^ (v3 - v19 - v20);
  v22 = (v21 >> 13) ^ (v19 - v21 - v20);
  v23 = (v22 >> 12) ^ (v20 - v22 - v21);
  v24 = (v23 << 16) ^ (v21 - v22 - v23);
  v25 = (v24 >> 5) ^ (v22 - v24 - v23);
  v26 = (v25 >> 3) ^ (v23 - v25 - v24);
  return (((v26 << 10) ^ (v24 - v25 - v26)) >> 15) ^ (v25 - ((v26 << 10) ^ (v24 - v25 - v26)) - v26);
}

