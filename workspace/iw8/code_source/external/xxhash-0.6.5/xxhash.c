/*
==============
XXH64_finalize
==============
*/
unsigned __int64 XXH64_finalize(unsigned __int64 h64, const void *ptr, unsigned __int64 len, XXH_endianess endian)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  unsigned __int64 v41; 
  unsigned __int64 v42; 
  unsigned __int64 v43; 
  unsigned int v44; 
  __int64 v45; 
  __int64 v46; 

  v4 = h64;
  switch ( 0x9E3779B185EBCA87ui64 )
  {
    case 0ui64:
      goto $LN38_7;
    case 1ui64:
      goto $LN37_6;
    case 2ui64:
      goto $LN36_10;
    case 3ui64:
      goto $LN35_9;
    case 4ui64:
      goto $LN13_37;
    case 5ui64:
      goto $LN20_30;
    case 6ui64:
      goto $LN27_21;
    case 7ui64:
      goto $LN34_12;
    case 8ui64:
      goto $LN9_47;
    case 9ui64:
      goto $LN16_36;
    case 0xAui64:
      goto $LN23_26;
    case 0xBui64:
      goto $LN30_10;
    case 0xCui64:
      goto $LN12_47;
    case 0xDui64:
      goto $LN19_30;
    case 0xEui64:
      goto $LN26_32;
    case 0xFui64:
      goto $LN33_13;
    case 0x10ui64:
      goto $LN8_38;
    case 0x11ui64:
      goto $LN15_38;
    case 0x12ui64:
      goto $LN22_31;
    case 0x13ui64:
      goto $LN29_14;
    case 0x14ui64:
      goto $LN11_36;
    case 0x15ui64:
      goto $LN18_31;
    case 0x16ui64:
      goto $LN25_28;
    case 0x17ui64:
      goto $LN32_16;
    case 0x18ui64:
      v5 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v5 = _byteswap_uint64(v5);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v5, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN8_38:
      v6 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v6 = _byteswap_uint64(v6);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v6, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN9_47:
      v7 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v7 = _byteswap_uint64(v7);
      v8 = 0x9E3779B185EBCA87ui64 * __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v7, 31)), 27) - 0x7A1435883D4D519Di64;
      v9 = v8 ^ (v8 >> 33);
      return (0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) ^ ((0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) >> 32);
    case 0x19ui64:
      v16 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v16 = _byteswap_uint64(v16);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v16, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN15_38:
      v17 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v17 = _byteswap_uint64(v17);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v17, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN16_36:
      v18 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v18 = _byteswap_uint64(v18);
      v19 = *((unsigned __int8 *)ptr + 8);
      v20 = 0x9E3779B185EBCA87ui64 * __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v18, 31)), 27) - 0x7A1435883D4D519Di64;
      goto LABEL_33;
    case 0x1Aui64:
      v30 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v30 = _byteswap_uint64(v30);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v30, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN22_31:
      v31 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v31 = _byteswap_uint64(v31);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v31, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN23_26:
      v32 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v32 = _byteswap_uint64(v32);
      v19 = *((unsigned __int8 *)ptr + 9);
      v20 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * *((unsigned __int8 *)ptr + 8)) ^ (0x9E3779B185EBCA87ui64 * __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v32, 31)), 27) - 0x7A1435883D4D519Di64), 11);
      goto LABEL_33;
    case 0x1Bui64:
      v38 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v38 = _byteswap_uint64(v38);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v38, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN29_14:
      v39 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v39 = _byteswap_uint64(v39);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v39, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN30_10:
      v40 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v40 = _byteswap_uint64(v40);
      v19 = *((unsigned __int8 *)ptr + 10);
      v20 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * *((unsigned __int8 *)ptr + 9)) ^ (0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * *((unsigned __int8 *)ptr + 8)) ^ (0x9E3779B185EBCA87ui64 * __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v40, 31)), 27) - 0x7A1435883D4D519Di64), 11)), 11);
LABEL_33:
      v21 = __ROL8__((0x27D4EB2F165667C5i64 * v19) ^ v20, 11);
      v9 = (0x9E3779B185EBCA87ui64 * v21) ^ ((0x9E3779B185EBCA87ui64 * v21) >> 33);
      return (0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) ^ ((0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) >> 32);
    case 0x1Cui64:
      v11 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v11 = _byteswap_uint64(v11);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v11, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN11_36:
      v12 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v12 = _byteswap_uint64(v12);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v12, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN12_47:
      v13 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v13 = _byteswap_uint64(v13);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v13, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN13_37:
      v14 = *(_DWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v14 = _byteswap_ulong(v14);
      v15 = 0xC2B2AE3D27D4EB4Fui64 * __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * v14), 23) + 0x165667B19E3779F9i64;
      v9 = v15 ^ (v15 >> 33);
      return (0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) ^ ((0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) >> 32);
    case 0x1Dui64:
      v22 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v22 = _byteswap_uint64(v22);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v22, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN18_31:
      v23 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v23 = _byteswap_uint64(v23);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v23, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN19_30:
      v24 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v24 = _byteswap_uint64(v24);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v24, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN20_30:
      v25 = *(_DWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v25 = _byteswap_ulong(v25);
      v26 = v25;
      v27 = *((unsigned __int8 *)ptr + 4);
      v28 = 0xC2B2AE3D27D4EB4Fui64 * __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * v26), 23) + 0x165667B19E3779F9i64;
      goto LABEL_46;
    case 0x1Eui64:
      v33 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v33 = _byteswap_uint64(v33);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v33, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN25_28:
      v34 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v34 = _byteswap_uint64(v34);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v34, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN26_32:
      v35 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v35 = _byteswap_uint64(v35);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v35, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN27_21:
      v36 = *(_DWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v36 = _byteswap_ulong(v36);
      v37 = __ROL8__(v4 ^ (0x9E3779B185EBCA87ui64 * v36), 23);
      v27 = *((unsigned __int8 *)ptr + 5);
      v28 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * *((unsigned __int8 *)ptr + 4)) ^ (0xC2B2AE3D27D4EB4Fui64 * v37 + 0x165667B19E3779F9i64), 11);
LABEL_46:
      v29 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * v27) ^ v28, 11);
      v9 = v29 ^ (v29 >> 33);
      break;
    case 0x1Fui64:
      v41 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v41 = _byteswap_uint64(v41);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v41, 31)) ^ h64, 27) - 0x7A1435883D4D519Di64;
$LN32_16:
      v42 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v42 = _byteswap_uint64(v42);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v42, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN33_13:
      v43 = *(_QWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v43 = _byteswap_uint64(v43);
      ptr = (char *)ptr + 8;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v43, 31)) ^ v4, 27) - 0x7A1435883D4D519Di64;
$LN34_12:
      v44 = *(_DWORD *)ptr;
      if ( endian != XXH_littleEndian )
        v44 = _byteswap_ulong(v44);
      ptr = (char *)ptr + 4;
      v4 = 0xC2B2AE3D27D4EB4Fui64 * __ROL8__((0x9E3779B185EBCA87ui64 * v44) ^ v4, 23) + 0x165667B19E3779F9i64;
$LN35_9:
      v45 = *(unsigned __int8 *)ptr;
      ptr = (char *)ptr + 1;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * v45) ^ v4, 11);
$LN36_10:
      v46 = *(unsigned __int8 *)ptr;
      ptr = (char *)ptr + 1;
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * v46) ^ v4, 11);
$LN37_6:
      v4 = 0x9E3779B185EBCA87ui64 * __ROL8__((0x27D4EB2F165667C5i64 * *(unsigned __int8 *)ptr) ^ v4, 11);
$LN38_7:
      v9 = v4 ^ (v4 >> 33);
      break;
  }
  return (0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) ^ ((0x165667B19E3779F9i64 * ((0xC2B2AE3D27D4EB4Fui64 * v9) ^ ((0xC2B2AE3D27D4EB4Fui64 * v9) >> 29))) >> 32);
}

/*
==============
CoD_XXH32
==============
*/
__int64 CoD_XXH32(const void *input, unsigned __int64 len, unsigned int seed)
{
  unsigned __int8 *v3; 
  unsigned __int8 *v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  __int64 result; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 

  v3 = (unsigned __int8 *)input;
  if ( len < 0x10 )
  {
    v10 = seed + 374761393;
  }
  else
  {
    v4 = (unsigned __int8 *)input + len - 15;
    v5 = seed + 1640531535;
    v6 = seed + 606290984;
    v7 = seed - 2048144777;
    do
    {
      v6 = -1640531535 * __ROL4__(v6 - 2048144777 * *(_DWORD *)v3, 13);
      v7 = -1640531535 * __ROL4__(v7 - 2048144777 * *((_DWORD *)v3 + 1), 13);
      v8 = 2048144777 * *((_DWORD *)v3 + 3);
      v9 = __ROL4__(seed - 2048144777 * *((_DWORD *)v3 + 2), 13);
      v3 += 16;
      seed = -1640531535 * v9;
      v5 = -1640531535 * __ROL4__(v5 - v8, 13);
    }
    while ( v3 < v4 );
    v10 = __ROL4__(v6, 1) + __ROL4__(v7, 7) + __ROL4__(seed, 12) + __ROL4__(v5, 18);
  }
  v11 = v10 + len;
  switch ( len & 0xF )
  {
    case 0ui64:
      goto LABEL_23;
    case 1ui64:
      goto LABEL_22;
    case 2ui64:
      goto LABEL_21;
    case 3ui64:
      goto LABEL_20;
    case 4ui64:
      goto LABEL_9;
    case 5ui64:
      goto LABEL_12;
    case 6ui64:
      goto LABEL_16;
    case 7ui64:
      goto LABEL_19;
    case 8ui64:
      goto LABEL_8;
    case 9ui64:
      goto LABEL_11;
    case 0xAui64:
      goto LABEL_15;
    case 0xBui64:
      goto LABEL_18;
    case 0xCui64:
      v12 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v12, 17);
LABEL_8:
      v13 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v13, 17);
LABEL_9:
      v14 = __ROL4__(v11 - 1028477379 * *(_DWORD *)v3, 17);
      v15 = -1028477379 * ((-2048144777 * ((668265263 * v14) ^ ((unsigned int)(668265263 * v14) >> 15))) ^ ((-2048144777 * ((668265263 * v14) ^ ((unsigned int)(668265263 * v14) >> 15))) >> 13));
      return v15 ^ HIWORD(v15);
    case 0xDui64:
      v17 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v17, 17);
LABEL_11:
      v18 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v18, 17);
LABEL_12:
      v19 = 374761393 * v3[4] + 668265263 * __ROL4__(v11 - 1028477379 * *(_DWORD *)v3, 17);
      goto LABEL_13;
    case 0xEui64:
      v22 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v22, 17);
LABEL_15:
      v23 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v23, 17);
LABEL_16:
      v19 = 374761393 * v3[5] - 1640531535 * __ROL4__(374761393 * v3[4] + 668265263 * __ROL4__(v11 - 1028477379 * *(_DWORD *)v3, 17), 11);
LABEL_13:
      v20 = __ROL4__(v19, 11);
      v21 = -1028477379 * ((-2048144777 * ((-1640531535 * v20) ^ ((unsigned int)(-1640531535 * v20) >> 15))) ^ ((-2048144777 * ((-1640531535 * v20) ^ ((unsigned int)(-1640531535 * v20) >> 15))) >> 13));
      result = v21 ^ HIWORD(v21);
      break;
    case 0xFui64:
      v24 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v24, 17);
LABEL_18:
      v25 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v25, 17);
LABEL_19:
      v26 = *(_DWORD *)v3;
      v3 += 4;
      v11 = 668265263 * __ROL4__(v11 - 1028477379 * v26, 17);
LABEL_20:
      v27 = *v3++;
      v11 = -1640531535 * __ROL4__(374761393 * v27 + v11, 11);
LABEL_21:
      v28 = *v3++;
      v11 = -1640531535 * __ROL4__(374761393 * v28 + v11, 11);
LABEL_22:
      v11 = -1640531535 * __ROL4__(v11 + 374761393 * *v3, 11);
LABEL_23:
      result = (-1028477379 * ((-2048144777 * (v11 ^ (v11 >> 15))) ^ ((-2048144777 * (v11 ^ (v11 >> 15))) >> 13))) ^ ((-1028477379 * ((-2048144777 * (v11 ^ (v11 >> 15))) ^ ((-2048144777 * (v11 ^ (v11 >> 15))) >> 13))) >> 16);
      break;
  }
  return result;
}

/*
==============
CoD_XXH32_canonicalFromHash
==============
*/
void CoD_XXH32_canonicalFromHash(XXH32_canonical_t *dst, unsigned int hash)
{
  *dst = (XXH32_canonical_t)_byteswap_ulong(hash);
}

/*
==============
CoD_XXH32_copyState
==============
*/
void CoD_XXH32_copyState(XXH32_state_s *dstState, const XXH32_state_s *srcState)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rdx+20h]
    vmovups xmmword ptr [rcx+20h], xmm1
  }
}

/*
==============
CoD_XXH32_createState
==============
*/
XXH32_state_s *CoD_XXH32_createState()
{
  return (XXH32_state_s *)malloc(0x30ui64);
}

/*
==============
CoD_XXH32_digest
==============
*/
__int64 CoD_XXH32_digest(const XXH32_state_s *state_in)
{
  int v1; 
  unsigned int *mem32; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  __int64 result; 
  unsigned int v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  if ( state_in->large_len )
    v1 = __ROL4__(state_in->v3, 12) + __ROL4__(state_in->v1, 1) + __ROL4__(state_in->v2, 7) + __ROL4__(state_in->v4, 18);
  else
    v1 = state_in->v3 + 374761393;
  mem32 = state_in->mem32;
  v3 = v1 + state_in->total_len_32;
  switch ( state_in->memsize & 0xF )
  {
    case 0u:
      goto LABEL_21;
    case 1u:
      goto LABEL_20;
    case 2u:
      goto LABEL_19;
    case 3u:
      goto LABEL_18;
    case 4u:
      goto LABEL_7;
    case 5u:
      goto LABEL_10;
    case 6u:
      goto LABEL_14;
    case 7u:
      goto LABEL_17;
    case 8u:
      goto LABEL_6;
    case 9u:
      goto LABEL_9;
    case 0xAu:
      goto LABEL_13;
    case 0xBu:
      goto LABEL_16;
    case 0xCu:
      v4 = *mem32;
      mem32 = &state_in->mem32[1];
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v4, 17);
LABEL_6:
      v5 = *mem32++;
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v5, 17);
LABEL_7:
      v6 = __ROL4__(v3 - 1028477379 * *mem32, 17);
      v7 = -1028477379 * ((-2048144777 * ((668265263 * v6) ^ ((unsigned int)(668265263 * v6) >> 15))) ^ ((-2048144777 * ((668265263 * v6) ^ ((unsigned int)(668265263 * v6) >> 15))) >> 13));
      return v7 ^ HIWORD(v7);
    case 0xDu:
      v9 = *mem32;
      mem32 = &state_in->mem32[1];
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v9, 17);
LABEL_9:
      v10 = *mem32++;
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v10, 17);
LABEL_10:
      v11 = 374761393 * *((unsigned __int8 *)mem32 + 4) + 668265263 * __ROL4__(v3 - 1028477379 * *mem32, 17);
      goto LABEL_11;
    case 0xEu:
      v14 = *mem32;
      mem32 = &state_in->mem32[1];
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v14, 17);
LABEL_13:
      v15 = *mem32++;
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v15, 17);
LABEL_14:
      v11 = 374761393 * *((unsigned __int8 *)mem32 + 5) - 1640531535 * __ROL4__(374761393 * *((unsigned __int8 *)mem32 + 4) + 668265263 * __ROL4__(v3 - 1028477379 * *mem32, 17), 11);
LABEL_11:
      v12 = __ROL4__(v11, 11);
      v13 = -1028477379 * ((-2048144777 * ((-1640531535 * v12) ^ ((unsigned int)(-1640531535 * v12) >> 15))) ^ ((-2048144777 * ((-1640531535 * v12) ^ ((unsigned int)(-1640531535 * v12) >> 15))) >> 13));
      result = v13 ^ HIWORD(v13);
      break;
    case 0xFu:
      v16 = *mem32;
      mem32 = &state_in->mem32[1];
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v16, 17);
LABEL_16:
      v17 = *mem32++;
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v17, 17);
LABEL_17:
      v18 = *mem32++;
      v3 = 668265263 * __ROL4__(v3 - 1028477379 * v18, 17);
LABEL_18:
      v19 = *(unsigned __int8 *)mem32;
      mem32 = (unsigned int *)((char *)mem32 + 1);
      v3 = -1640531535 * __ROL4__(374761393 * v19 + v3, 11);
LABEL_19:
      v20 = *(unsigned __int8 *)mem32;
      mem32 = (unsigned int *)((char *)mem32 + 1);
      v3 = -1640531535 * __ROL4__(374761393 * v20 + v3, 11);
LABEL_20:
      v3 = -1640531535 * __ROL4__(v3 + 374761393 * *(unsigned __int8 *)mem32, 11);
LABEL_21:
      result = (-1028477379 * ((-2048144777 * (v3 ^ (v3 >> 15))) ^ ((-2048144777 * (v3 ^ (v3 >> 15))) >> 13))) ^ ((-1028477379 * ((-2048144777 * (v3 ^ (v3 >> 15))) ^ ((-2048144777 * (v3 ^ (v3 >> 15))) >> 13))) >> 16);
      break;
  }
  return result;
}

/*
==============
CoD_XXH32_freeState
==============
*/
__int64 CoD_XXH32_freeState(XXH32_state_s *statePtr)
{
  free(statePtr);
  return 0i64;
}

/*
==============
CoD_XXH32_hashFromCanonical
==============
*/
__int64 CoD_XXH32_hashFromCanonical(const XXH32_canonical_t *src)
{
  return _byteswap_ulong((unsigned int)*src);
}

/*
==============
CoD_XXH32_reset
==============
*/
__int64 CoD_XXH32_reset(XXH32_state_s *statePtr, unsigned int seed)
{
  _BYTE v6[40]; 

  *(_DWORD *)&v6[16] = seed;
  *(_QWORD *)v6 = 0i64;
  *(_DWORD *)&v6[8] = seed + 606290984;
  *(_DWORD *)&v6[12] = seed - 2048144777;
  *(_DWORD *)&v6[20] = seed + 1640531535;
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vmovdqu xmmword ptr [rsp+38h+var_38+18h], xmm1
    vmovups ymm0, [rsp+38h+var_38]
    vmovups ymmword ptr [rcx], ymm0
    vmovhpd qword ptr [rcx+20h], xmm1
  }
  statePtr->memsize = 0;
  return 0i64;
}

/*
==============
CoD_XXH32_update
==============
*/
__int64 CoD_XXH32_update(XXH32_state_s *state_in, const void *input, unsigned __int64 len)
{
  char *v3; 
  int v4; 
  char *v5; 
  __int64 memsize; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 

  v3 = (char *)input + len;
  v4 = len;
  v5 = (char *)input;
  if ( !input )
    return 1i64;
  state_in->total_len_32 += len;
  state_in->large_len |= len >= 0x10 || state_in->total_len_32 >= 0x10;
  memsize = state_in->memsize;
  if ( memsize + len >= 0x10 )
  {
    if ( (_DWORD)memsize )
    {
      memcpy_0((char *)state_in->mem32 + memsize, input, (unsigned int)(16 - memsize));
      v9 = 16 - state_in->memsize;
      v10 = state_in->v2;
      state_in->v1 = -1640531535 * __ROL4__(state_in->v1 - 2048144777 * state_in->mem32[0], 13);
      v11 = -1640531535 * __ROL4__(v10 - 2048144777 * state_in->mem32[1], 13);
      v12 = state_in->v3;
      state_in->v2 = v11;
      v13 = -1640531535 * __ROL4__(v12 - 2048144777 * state_in->mem32[2], 13);
      v14 = state_in->v4;
      state_in->v3 = v13;
      v15 = 2048144777 * state_in->mem32[3];
      state_in->memsize = 0;
      state_in->v4 = -1640531535 * __ROL4__(v14 - v15, 13);
      v5 += v9;
    }
    if ( v5 <= v3 - 16 )
    {
      v16 = state_in->v1;
      v17 = state_in->v2;
      v18 = state_in->v3;
      v19 = state_in->v4;
      do
      {
        v16 = -1640531535 * __ROL4__(v16 - 2048144777 * *(_DWORD *)v5, 13);
        v17 = -1640531535 * __ROL4__(v17 - 2048144777 * *((_DWORD *)v5 + 1), 13);
        v20 = 2048144777 * *((_DWORD *)v5 + 3);
        v21 = __ROL4__(v18 - 2048144777 * *((_DWORD *)v5 + 2), 13);
        v5 += 16;
        v18 = -1640531535 * v21;
        v19 = -1640531535 * __ROL4__(v19 - v20, 13);
      }
      while ( v5 <= v3 - 16 );
      state_in->v1 = v16;
      state_in->v2 = v17;
      state_in->v3 = v18;
      state_in->v4 = v19;
    }
    if ( v5 < v3 )
    {
      memcpy_0(state_in->mem32, v5, v3 - v5);
      state_in->memsize = (_DWORD)v3 - (_DWORD)v5;
    }
  }
  else
  {
    memcpy_0((char *)state_in->mem32 + memsize, input, len);
    state_in->memsize += v4;
  }
  return 0i64;
}

/*
==============
CoD_XXH64
==============
*/
unsigned __int64 CoD_XXH64(const void *input, unsigned __int64 len, unsigned __int64 seed)
{
  char *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 

  if ( len < 0x20 )
  {
    v11 = seed + len + 0x27D4EB2F165667C5i64;
  }
  else
  {
    v4 = (char *)input + len - 32;
    v5 = seed + 0x60EA27EEADC0B5D6i64;
    v6 = seed + 0x61C8864E7A143579i64;
    v7 = seed - 0x3D4D51C2D82B14B1i64;
    do
    {
      v5 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *(_QWORD *)input + v5, 31);
      v8 = 0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)input + 2) + seed;
      v9 = __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)input + 1) + v7, 31);
      v10 = *((_QWORD *)input + 3);
      input = (char *)input + 32;
      v7 = 0x9E3779B185EBCA87ui64 * v9;
      v6 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v10 + v6, 31);
      seed = 0x9E3779B185EBCA87ui64 * __ROL8__(v8, 31);
    }
    while ( input <= v4 );
    v11 = len + 0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v6, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * seed, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v7, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v5, 31)) ^ (__ROL8__(v5, 1) + __ROL8__(v7, 7) + __ROL8__(seed, 12) + __ROL8__(v6, 18))) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64;
  }
  return XXH64_finalize(v11, input, len, XXH_littleEndian);
}

/*
==============
CoD_XXH64_canonicalFromHash
==============
*/
void CoD_XXH64_canonicalFromHash(XXH64_canonical_t *dst, unsigned __int64 hash)
{
  *dst = (XXH64_canonical_t)_byteswap_uint64(hash);
}

/*
==============
CoD_XXH64_copyState
==============
*/
void CoD_XXH64_copyState(XXH64_state_s *dstState, const XXH64_state_s *srcState)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovsd  xmm1, qword ptr [rdx+50h]
    vmovsd  qword ptr [rcx+50h], xmm1
  }
}

/*
==============
CoD_XXH64_createState
==============
*/
XXH64_state_s *CoD_XXH64_createState()
{
  return (XXH64_state_s *)malloc(0x58ui64);
}

/*
==============
CoD_XXH64_digest
==============
*/
unsigned __int64 CoD_XXH64_digest(const XXH64_state_s *state_in)
{
  unsigned __int64 v1; 

  if ( state_in->total_len < 0x20 )
    v1 = state_in->v3 + 0x27D4EB2F165667C5i64;
  else
    v1 = 0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v4, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v3, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v2, 31)) ^ (0x9E3779B185EBCA87ui64 * ((0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * state_in->v1, 31)) ^ (__ROL8__(state_in->v1, 1) + __ROL8__(state_in->v2, 7) + __ROL8__(state_in->v3, 12) + __ROL8__(state_in->v4, 18))) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64)) - 0x7A1435883D4D519Di64;
  return XXH64_finalize(state_in->total_len + v1, state_in->mem64, state_in->total_len, XXH_littleEndian);
}

/*
==============
CoD_XXH64_freeState
==============
*/
__int64 CoD_XXH64_freeState(XXH64_state_s *statePtr)
{
  free(statePtr);
  return 0i64;
}

/*
==============
CoD_XXH64_hashFromCanonical
==============
*/
unsigned __int64 CoD_XXH64_hashFromCanonical(const XXH64_canonical_t *src)
{
  return _byteswap_uint64((unsigned __int64)*src);
}

/*
==============
CoD_XXH64_reset
==============
*/
__int64 CoD_XXH64_reset(XXH64_state_s *statePtr, unsigned __int64 seed)
{
  __int64 result; 
  __m256i v8; 
  __m256i v9; 

  _RDI = statePtr;
  memset_0(&v8, 0, 0x58ui64);
  v8.m256i_i64[3] = seed;
  v8.m256i_i64[1] = seed + 0x60EA27EEADC0B5D6i64;
  v8.m256i_i64[2] = seed - 0x3D4D51C2D82B14B1i64;
  __asm
  {
    vmovups ymm0, [rsp+88h+var_68]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmm0, [rsp+88h+var_28]
  }
  v9.m256i_i64[0] = seed + 0x61C8864E7A143579i64;
  result = 0i64;
  __asm
  {
    vmovups ymm1, [rsp+88h+var_48]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups xmmword ptr [rdi+40h], xmm0
  }
  return result;
}

/*
==============
CoD_XXH64_update
==============
*/
__int64 CoD_XXH64_update(XXH64_state_s *state_in, const void *input, unsigned __int64 len)
{
  char *v3; 
  int v4; 
  char *v5; 
  __int64 memsize; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v3 = (char *)input + len;
  v4 = len;
  v5 = (char *)input;
  if ( !input )
    return 1i64;
  state_in->total_len += len;
  memsize = state_in->memsize;
  if ( memsize + len >= 0x20 )
  {
    if ( (_DWORD)memsize )
    {
      memcpy_0((char *)state_in->mem64 + memsize, input, (unsigned int)(32 - memsize));
      v9 = 32 - state_in->memsize;
      state_in->v1 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v1 - 0x3D4D51C2D82B14B1i64 * state_in->mem64[0], 31);
      state_in->v2 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v2 - 0x3D4D51C2D82B14B1i64 * state_in->mem64[1], 31);
      state_in->v3 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v3 - 0x3D4D51C2D82B14B1i64 * state_in->mem64[2], 31);
      v10 = 0xC2B2AE3D27D4EB4Fui64 * state_in->mem64[3];
      state_in->memsize = 0;
      state_in->v4 = 0x9E3779B185EBCA87ui64 * __ROL8__(state_in->v4 + v10, 31);
      v5 += v9;
    }
    if ( v5 + 32 <= v3 )
    {
      v11 = state_in->v1;
      v12 = state_in->v2;
      v13 = state_in->v3;
      v14 = state_in->v4;
      do
      {
        v11 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *(_QWORD *)v5 + v11, 31);
        v15 = 0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v5 + 2) + v13;
        v16 = __ROL8__(0xC2B2AE3D27D4EB4Fui64 * *((_QWORD *)v5 + 1) + v12, 31);
        v17 = *((_QWORD *)v5 + 3);
        v5 += 32;
        v12 = 0x9E3779B185EBCA87ui64 * v16;
        v14 = 0x9E3779B185EBCA87ui64 * __ROL8__(0xC2B2AE3D27D4EB4Fui64 * v17 + v14, 31);
        v13 = 0x9E3779B185EBCA87ui64 * __ROL8__(v15, 31);
      }
      while ( v5 <= v3 - 32 );
      state_in->v1 = v11;
      state_in->v2 = v12;
      state_in->v3 = v13;
      state_in->v4 = v14;
    }
    if ( v5 < v3 )
    {
      memcpy_0(state_in->mem64, v5, v3 - v5);
      state_in->memsize = (_DWORD)v3 - (_DWORD)v5;
    }
    return 0i64;
  }
  else
  {
    memcpy_0((char *)state_in->mem64 + memsize, input, len);
    state_in->memsize += v4;
    return 0i64;
  }
}

/*
==============
CoD_XXH_versionNumber
==============
*/
__int64 CoD_XXH_versionNumber()
{
  return 605i64;
}

