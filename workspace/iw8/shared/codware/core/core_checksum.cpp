/*
==============
Core_StringToChecksum
==============
*/

void __fastcall Core_StringToChecksum(const char *str, checksum128_t *checksumOut)
{
  ?Core_StringToChecksum@@YAXPEBDAEAUchecksum128_t@@@Z(str, checksumOut);
}

/*
==============
Core_ChecksumToString
==============
*/

void __fastcall Core_ChecksumToString(const checksum128_t *checksum, char *strOut, int strSize)
{
  ?Core_ChecksumToString@@YAXAEBUchecksum128_t@@PEADH@Z(checksum, strOut, strSize);
}

/*
==============
MD5_Update
==============
*/

void __fastcall MD5_Update(MD5_CTX *ctx, const void *data, unsigned int size)
{
  ?MD5_Update@@YAXPEAUMD5_CTX@@PEBXK@Z(ctx, data, size);
}

/*
==============
Core_BlockChecksum32_Legacy
==============
*/

unsigned int __fastcall Core_BlockChecksum32_Legacy(const void *buffer, int length)
{
  return ?Core_BlockChecksum32_Legacy@@YAIPEBXH@Z(buffer, length);
}

/*
==============
Core_BlockChecksum128Cat
==============
*/

void __fastcall Core_BlockChecksum128Cat(const void *buffer0, int length0, const void *buffer1, int length1, checksum128_t *checksum)
{
  ?Core_BlockChecksum128Cat@@YAXPEBXH0HAEAUchecksum128_t@@@Z(buffer0, length0, buffer1, length1, checksum);
}

/*
==============
Core_StringChecksum
==============
*/

void __fastcall Core_StringChecksum(const char *str, checksum128_t *checksum)
{
  ?Core_StringChecksum@@YAXPEBDAEAUchecksum128_t@@@Z(str, checksum);
}

/*
==============
MD5_Final
==============
*/

void __fastcall MD5_Final(unsigned __int8 *result, MD5_CTX *ctx)
{
  ?MD5_Final@@YAXPEAEPEAUMD5_CTX@@@Z(result, ctx);
}

/*
==============
MD5_Init
==============
*/

void __fastcall MD5_Init(MD5_CTX *ctx)
{
  ?MD5_Init@@YAXPEAUMD5_CTX@@@Z(ctx);
}

/*
==============
Core_ChecksumToBasicString
==============
*/

void __fastcall Core_ChecksumToBasicString(const checksum128_t *checksum, std::string *strOut)
{
  ?Core_ChecksumToBasicString@@YAXAEBUchecksum128_t@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z(checksum, strOut);
}

/*
==============
Core_Checksum
==============
*/

void __fastcall Core_Checksum(const void *buffer, int length, checksum128_t *checksum)
{
  ?Core_Checksum@@YAXPEBXHAEAUchecksum128_t@@@Z(buffer, length, checksum);
}

/*
==============
MD5_body
==============
*/

const void *__fastcall MD5_body(MD5_CTX *ctx, const void *data, unsigned int size)
{
  return ?MD5_body@@YAPEBXPEAUMD5_CTX@@PEBXK@Z(ctx, data, size);
}

/*
==============
Core_BlockChecksum128
==============
*/

void __fastcall Core_BlockChecksum128(const void *buffer, int length, int key, checksum128_t *checksum)
{
  ?Core_BlockChecksum128@@YAXPEBXHHAEAUchecksum128_t@@@Z(buffer, length, key, checksum);
}

/*
==============
MD5_Init
==============
*/
void MD5_Init(MD5_CTX *ctx)
{
  ctx->a = 1732584193;
  *(_QWORD *)&ctx->lo = 0i64;
  ctx->b = -271733879;
  ctx->c = -1732584194;
  ctx->d = 271733878;
}

/*
==============
MD5_body
==============
*/
const void *MD5_body(MD5_CTX *ctx, const void *data, unsigned int size)
{
  unsigned int a; 
  unsigned int b; 
  unsigned int c; 
  unsigned int d; 
  int v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
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
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  const void *result; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v87; 
  unsigned int v89; 

  a = ctx->a;
  b = ctx->b;
  c = ctx->c;
  d = ctx->d;
  do
  {
    v8 = *((_DWORD *)data + 5);
    v9 = *((_DWORD *)data + 7);
    v84 = c;
    v89 = b;
    v87 = a;
    v85 = d;
    v10 = b + __ROL4__(*(_DWORD *)data + (d ^ b & (c ^ d)) + a - 680876936, 7);
    v11 = v10 + __ROL4__(*((_DWORD *)data + 1) + (c ^ v10 & (b ^ c)) + d - 389564586, 12);
    v12 = v11 + __ROR4__(*((_DWORD *)data + 2) + (b ^ v11 & (v10 ^ b)) + c + 606105819, 15);
    v13 = v12 + __ROR4__(*((_DWORD *)data + 3) + (v10 ^ v12 & (v10 ^ v11)) + b - 1044525330, 10);
    v14 = v13 + __ROL4__(*((_DWORD *)data + 4) + (v11 ^ v13 & (v12 ^ v11)) + v10 - 176418897, 7);
    v15 = v14 + __ROL4__(v8 + (v12 ^ v14 & (v13 ^ v12)) + v11 + 1200080426, 12);
    v16 = v15 + __ROR4__(*((_DWORD *)data + 6) + (v13 ^ v15 & (v14 ^ v13)) + v12 - 1473231341, 15);
    v17 = v16 + __ROR4__(v9 + (v14 ^ v16 & (v14 ^ v15)) + v13 - 45705983, 10);
    v18 = v17 + __ROL4__(*((_DWORD *)data + 8) + (v15 ^ v17 & (v16 ^ v15)) + v14 + 1770035416, 7);
    v19 = *((_DWORD *)data + 10);
    v20 = *((_DWORD *)data + 12);
    v21 = *((_DWORD *)data + 13);
    v22 = *((_DWORD *)data + 14);
    v23 = *((_DWORD *)data + 15);
    v24 = v18 + __ROL4__(*((_DWORD *)data + 9) + (v16 ^ v18 & (v17 ^ v16)) + v15 - 1958414417, 12);
    v25 = v24 + __ROR4__(v19 + (v17 ^ v24 & (v18 ^ v17)) + v16 - 42063, 15);
    v26 = v25 + __ROR4__(*((_DWORD *)data + 11) + (v18 ^ v25 & (v18 ^ v24)) + v17 - 1990404162, 10);
    v27 = v26 + __ROL4__(v20 + (v24 ^ v26 & (v25 ^ v24)) + v18 + 1804603682, 7);
    v28 = v27 + __ROL4__(v21 + (v25 ^ v27 & (v26 ^ v25)) + v24 - 40341101, 12);
    v29 = v28 + __ROR4__(v22 + (v26 ^ v28 & (v27 ^ v26)) + v25 - 1502002290, 15);
    v30 = v29 + __ROR4__(v23 + (v27 ^ v29 & (v27 ^ v28)) + v26 + 1236535329, 10);
    v31 = v30 + __ROL4__(*((_DWORD *)data + 1) + (v29 ^ v28 & (v30 ^ v29)) + v27 - 165796510, 5);
    v32 = v31 + __ROL4__(*((_DWORD *)data + 6) + (v30 ^ v29 & (v31 ^ v30)) + v28 - 1069501632, 9);
    v33 = v32 + __ROL4__(*((_DWORD *)data + 11) + (v31 ^ v30 & (v31 ^ v32)) + v29 + 643717713, 14);
    v34 = v33 + __ROR4__(*(_DWORD *)data + (v32 ^ v31 & (v33 ^ v32)) + v30 - 373897302, 12);
    v35 = v34 + __ROL4__(v8 + (v33 ^ v32 & (v34 ^ v33)) + v31 - 701558691, 5);
    v36 = v35 + __ROL4__(v19 + (v34 ^ v33 & (v35 ^ v34)) + v32 + 38016083, 9);
    v37 = v36 + __ROL4__(v23 + (v35 ^ v34 & (v35 ^ v36)) + v33 - 660478335, 14);
    v38 = v37 + __ROR4__(*((_DWORD *)data + 4) + (v36 ^ v35 & (v37 ^ v36)) + v34 - 405537848, 12);
    v39 = v38 + __ROL4__(*((_DWORD *)data + 9) + (v37 ^ v36 & (v38 ^ v37)) + v35 + 568446438, 5);
    v40 = v39 + __ROL4__(v22 + (v38 ^ v37 & (v39 ^ v38)) + v36 - 1019803690, 9);
    v41 = v40 + __ROL4__(*((_DWORD *)data + 3) + (v39 ^ v38 & (v39 ^ v40)) + v37 - 187363961, 14);
    v42 = v41 + __ROR4__(*((_DWORD *)data + 8) + (v40 ^ v39 & (v41 ^ v40)) + v38 + 1163531501, 12);
    v43 = v42 + __ROL4__(v21 + (v41 ^ v40 & (v42 ^ v41)) + v39 - 1444681467, 5);
    v44 = v43 + __ROL4__(*((_DWORD *)data + 2) + (v42 ^ v41 & (v43 ^ v42)) + v40 - 51403784, 9);
    v45 = v44 + __ROL4__(v9 + (v43 ^ v42 & (v43 ^ v44)) + v41 + 1735328473, 14);
    v46 = v45 + __ROR4__(v20 + (v44 ^ v43 & (v45 ^ v44)) + v42 - 1926607734, 12);
    v47 = v46 + __ROL4__(v8 + (v46 ^ v45 ^ v44) + v43 - 378558, 4);
    v48 = v47 + __ROL4__(*((_DWORD *)data + 8) + (v47 ^ v46 ^ v45) + v44 - 2022574463, 11);
    v49 = v48 + __ROL4__(*((_DWORD *)data + 11) + (v47 ^ v46 ^ v48) + v45 + 1839030562, 16);
    v50 = v49 + __ROR4__(v22 + (v47 ^ v49 ^ v48) + v46 - 35309556, 9);
    v51 = v50 + __ROL4__(*((_DWORD *)data + 1) + (v50 ^ v49 ^ v48) + v47 - 1530992060, 4);
    v52 = v51 + __ROL4__(*((_DWORD *)data + 4) + (v51 ^ v50 ^ v49) + v48 + 1272893353, 11);
    v53 = v52 + __ROL4__(v9 + (v51 ^ v50 ^ v52) + v49 - 155497632, 16);
    v54 = v53 + __ROR4__(v19 + (v51 ^ v53 ^ v52) + v50 - 1094730640, 9);
    v55 = v54 + __ROL4__(v21 + (v54 ^ v53 ^ v52) + v51 + 681279174, 4);
    v56 = v55 + __ROL4__(*(_DWORD *)data + (v55 ^ v54 ^ v53) + v52 - 358537222, 11);
    v57 = v56 + __ROL4__(*((_DWORD *)data + 3) + (v55 ^ v54 ^ v56) + v53 - 722521979, 16);
    v58 = v57 + __ROR4__(*((_DWORD *)data + 6) + (v55 ^ v57 ^ v56) + v54 + 76029189, 9);
    v59 = v58 + __ROL4__(*((_DWORD *)data + 9) + (v58 ^ v57 ^ v56) + v55 - 640364487, 4);
    v60 = v59 + __ROL4__(v20 + (v59 ^ v58 ^ v57) + v56 - 421815835, 11);
    v61 = v60 + __ROL4__(v23 + (v59 ^ v58 ^ v60) + v57 + 530742520, 16);
    v62 = v61 + __ROR4__(*((_DWORD *)data + 2) + (v59 ^ v61 ^ v60) + v58 - 995338651, 9);
    v63 = v62 + __ROL4__(*(_DWORD *)data + (v61 ^ (v62 | ~v60)) + v59 - 198630844, 6);
    v64 = v63 + __ROL4__(v9 + (v62 ^ (v63 | ~v61)) + v60 + 1126891415, 10);
    v65 = v64 + __ROL4__(v22 + (v63 ^ (v64 | ~v62)) + v61 - 1416354905, 15);
    v66 = v65 + __ROR4__(v8 + (v64 ^ (v65 | ~v63)) + v62 - 57434055, 11);
    v67 = v66 + __ROL4__(v20 + (v65 ^ (v66 | ~v64)) + v63 + 1700485571, 6);
    v68 = v67 + __ROL4__(*((_DWORD *)data + 3) + (v66 ^ (v67 | ~v65)) + v64 - 1894986606, 10);
    v69 = v68 + __ROL4__(v19 + (v67 ^ (v68 | ~v66)) + v65 - 1051523, 15);
    v70 = v69 + __ROR4__(*((_DWORD *)data + 1) + (v68 ^ (v69 | ~v67)) + v66 - 2054922799, 11);
    v71 = v70 + __ROL4__(*((_DWORD *)data + 8) + (v69 ^ (v70 | ~v68)) + v67 + 1873313359, 6);
    v72 = v71 + __ROL4__(v23 + (v70 ^ (v71 | ~v69)) + v68 - 30611744, 10);
    v73 = v72 + __ROL4__(*((_DWORD *)data + 6) + (v71 ^ (v72 | ~v70)) + v69 - 1560198380, 15);
    v74 = v73 + __ROR4__(v21 + (v72 ^ (v73 | ~v71)) + v70 + 1309151649, 11);
    v75 = v74 + __ROL4__(*((_DWORD *)data + 4) + (v73 ^ (v74 | ~v72)) + v71 - 145523070, 6);
    v76 = v75 + __ROL4__(*((_DWORD *)data + 11) + (v74 ^ (v75 | ~v73)) + v72 - 1120210379, 10);
    v77 = *((_DWORD *)data + 2) + (v75 ^ (v76 | ~v74)) + v73 + 718787259;
    v78 = v75;
    a = v87 + v75;
    v79 = v76 + __ROL4__(v77, 15);
    v80 = v76 ^ (v79 | ~v78);
    d = v85 + v76;
    v81 = *((_DWORD *)data + 9) + v80;
    data = (char *)data + 64;
    v82 = v79 + __ROR4__(v81 + v74 - 343485551, 11);
    c = v84 + v79;
    b = v89 + v82;
    size -= 64;
  }
  while ( size );
  result = data;
  ctx->a = a;
  ctx->b = b;
  ctx->c = c;
  ctx->d = d;
  return result;
}

/*
==============
MD5_Update
==============
*/
void MD5_Update(MD5_CTX *ctx, const void *data, size_t size)
{
  unsigned int v4; 
  unsigned int lo; 
  unsigned int hi; 
  unsigned int v8; 
  int v9; 
  const void *v10; 
  unsigned int v11; 
  unsigned __int8 *buffer; 

  v4 = size;
  lo = ctx->lo;
  hi = ctx->hi;
  v8 = (lo + size) & 0x1FFFFFFF;
  ctx->lo = v8;
  if ( v8 < lo )
    ++hi;
  ctx->hi = hi + ((unsigned int)size >> 29);
  v9 = lo & 0x3F;
  if ( v9 )
  {
    v10 = data;
    v11 = 64 - v9;
    buffer = &ctx->buffer[v9];
    if ( (unsigned int)size < v11 )
    {
      size = (unsigned int)size;
      goto LABEL_10;
    }
    memcpy_0(buffer, data, v11);
    data = (char *)data + v11;
    v4 -= v11;
    MD5_body(ctx, ctx->buffer, 0x40u);
  }
  if ( v4 >= 0x40 )
  {
    data = MD5_body(ctx, data, v4 & 0xFFFFFFC0);
    v4 &= 0x3Fu;
  }
  size = v4;
  buffer = ctx->buffer;
  v10 = data;
LABEL_10:
  memcpy_0(buffer, v10, size);
}

/*
==============
MD5_Final
==============
*/
void MD5_Final(unsigned __int8 *result, MD5_CTX *ctx)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 

  v4 = ctx->lo & 0x3F;
  ctx->buffer[v4] = 0x80;
  v5 = (unsigned int)(v4 + 1);
  v6 = 64 - v5;
  if ( (unsigned int)(64 - v5) < 8 )
  {
    memset_0(&ctx->buffer[v5], 0, v6);
    MD5_body(ctx, ctx->buffer, 0x40u);
    v5 = 0i64;
    v6 = 64;
  }
  memset_0(&ctx->buffer[v5], 0, v6 - 8);
  ctx->lo *= 8;
  ctx->buffer[56] = ctx->lo;
  ctx->buffer[57] = BYTE1(ctx->lo);
  ctx->buffer[58] = BYTE2(ctx->lo);
  ctx->buffer[59] = HIBYTE(ctx->lo);
  ctx->buffer[60] = ctx->hi;
  ctx->buffer[61] = BYTE1(ctx->hi);
  ctx->buffer[62] = BYTE2(ctx->hi);
  ctx->buffer[63] = HIBYTE(ctx->hi);
  MD5_body(ctx, ctx->buffer, 0x40u);
  *result = ctx->a;
  result[1] = BYTE1(ctx->a);
  result[2] = BYTE2(ctx->a);
  result[3] = HIBYTE(ctx->a);
  result[4] = ctx->b;
  result[5] = BYTE1(ctx->b);
  result[6] = BYTE2(ctx->b);
  result[7] = HIBYTE(ctx->b);
  result[8] = ctx->c;
  result[9] = BYTE1(ctx->c);
  result[10] = BYTE2(ctx->c);
  result[11] = HIBYTE(ctx->c);
  result[12] = ctx->d;
  result[13] = BYTE1(ctx->d);
  result[14] = BYTE2(ctx->d);
  result[15] = HIBYTE(ctx->d);
  memset_0(ctx, 0, sizeof(MD5_CTX));
}

/*
==============
Core_Checksum
==============
*/
void Core_Checksum(const void *buffer, int length, checksum128_t *checksum)
{
  MD5_CTX ctx; 

  ctx.a = 1732584193;
  ctx.b = -271733879;
  ctx.c = -1732584194;
  ctx.d = 271733878;
  *(_QWORD *)&ctx.lo = 0i64;
  MD5_Update(&ctx, buffer, length);
  MD5_Final((unsigned __int8 *)checksum, &ctx);
}

/*
==============
Core_StringChecksum
==============
*/
void Core_StringChecksum(const char *str, checksum128_t *checksum)
{
  __int64 v4; 
  MD5_CTX ctx; 

  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_checksum.cpp", 274, ASSERT_TYPE_ASSERT, "( str )", "Null str argument to Core_StringChecksum") )
    __debugbreak();
  ctx.a = 1732584193;
  *(_QWORD *)&ctx.lo = 0i64;
  v4 = -1i64;
  ctx.b = -271733879;
  ctx.c = -1732584194;
  ctx.d = 271733878;
  do
    ++v4;
  while ( str[v4] );
  MD5_Update(&ctx, str, v4);
  MD5_Final((unsigned __int8 *)checksum, &ctx);
}

/*
==============
Core_ChecksumToString
==============
*/
void Core_ChecksumToString(const checksum128_t *checksum, char *strOut, int strSize)
{
  int v6; 
  __int64 v7; 
  char *v8; 
  unsigned __int64 v9; 

  if ( strSize < 33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_checksum.cpp", 280, ASSERT_TYPE_SANITY, "( strSize >= 33 )", "%s", "strSize >= 33") )
    __debugbreak();
  v6 = 32;
  if ( strSize < 32 )
    v6 = strSize;
  v7 = v6 / 2;
  if ( v6 / 2 > 0 )
  {
    v8 = strOut;
    do
    {
      v8 += 2;
      v9 = (unsigned __int64)LOBYTE(checksum->hash[0]) >> 4;
      checksum = (const checksum128_t *)((char *)checksum + 1);
      *(v8 - 2) = a0123456789abcd[v9];
      *(v8 - 1) = a0123456789abcd_8[HIBYTE(checksum[-1].hash[3]) & 0xF];
      --v7;
    }
    while ( v7 );
  }
  strOut[2 * (v6 / 2)] = 0;
}

/*
==============
Core_ChecksumToBasicString
==============
*/
void Core_ChecksumToBasicString(const checksum128_t *checksum, std::string *strOut)
{
  _BYTE *v3; 
  __int64 v4; 
  __int64 v5; 
  std::string *Ptr; 
  std::string *v7; 
  std::string *v8; 
  std::string *v9; 
  std::string *v10; 
  std::string *v11; 
  std::string *v12; 
  std::string *v13; 
  std::string *v14; 
  std::string *v15; 
  std::string *v16; 
  std::string *v17; 
  std::string *v18; 
  std::string *v19; 
  std::string *v20; 
  std::string *v21; 

  v3 = (char *)checksum->hash + 1;
  std::string::resize(strOut, 0x20ui64, 0);
  v4 = 0i64;
  v5 = 2i64;
  do
  {
    Ptr = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    Ptr->_Mypair._Myval2._Bx._Buf[v4] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)*(v3 - 1) >> 4];
    v7 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v7 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v7->_Mypair._Myval2._Bx._Buf[v4 + 1] = a0123456789abcd_10[*(v3 - 1) & 0xF];
    v8 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v8 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v8->_Mypair._Myval2._Bx._Buf[v4 + 2] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)*v3 >> 4];
    v9 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v9 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v9->_Mypair._Myval2._Bx._Buf[v4 + 3] = a0123456789abcd_10[*v3 & 0xF];
    v10 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v10 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v10->_Mypair._Myval2._Bx._Buf[v4 + 4] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)v3[1] >> 4];
    v11 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v11 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v11->_Mypair._Myval2._Bx._Buf[v4 + 5] = a0123456789abcd_10[v3[1] & 0xF];
    v12 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v12 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v12->_Mypair._Myval2._Bx._Buf[v4 + 6] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)v3[2] >> 4];
    v13 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v13 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v13->_Mypair._Myval2._Bx._Buf[v4 + 7] = a0123456789abcd_10[v3[2] & 0xF];
    v14 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v14 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v14->_Mypair._Myval2._Bx._Buf[v4 + 8] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)v3[3] >> 4];
    v15 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v15 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v15->_Mypair._Myval2._Bx._Buf[v4 + 9] = a0123456789abcd_10[v3[3] & 0xF];
    v16 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v16 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v16->_Mypair._Myval2._Bx._Buf[v4 + 10] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)v3[4] >> 4];
    v17 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v17 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v17->_Mypair._Myval2._Bx._Buf[v4 + 11] = a0123456789abcd_10[v3[4] & 0xF];
    v18 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v18 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v18->_Mypair._Myval2._Bx._Buf[v4 + 12] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)v3[5] >> 4];
    v19 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v19 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v19->_Mypair._Myval2._Bx._Buf[v4 + 13] = a0123456789abcd_10[v3[5] & 0xF];
    v20 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v20 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v20->_Mypair._Myval2._Bx._Buf[v4 + 14] = a0123456789abcd_9[(unsigned __int64)(unsigned __int8)v3[6] >> 4];
    v21 = strOut;
    if ( strOut->_Mypair._Myval2._Myres >= 0x10 )
      v21 = (std::string *)strOut->_Mypair._Myval2._Bx._Ptr;
    v21->_Mypair._Myval2._Bx._Buf[v4 + 15] = a0123456789abcd_10[v3[6] & 0xF];
    v3 += 8;
    v4 += 16i64;
    --v5;
  }
  while ( v5 );
}

/*
==============
Core_StringToChecksum
==============
*/
void Core_StringToChecksum(const char *str, checksum128_t *checksumOut)
{
  __int64 v4; 
  char *v5; 
  __int64 v6; 
  const char *v7; 
  char v8; 
  char v9; 
  char v10; 
  char v11; 
  char v12; 
  unsigned __int8 v13; 
  char v14; 
  char v15; 
  char v16; 
  char v17; 
  char v18; 
  char v19; 
  char v20; 
  char v21; 
  char v22; 
  char v23; 
  char v24; 
  char v25; 
  char v26; 
  char v27; 
  char v28; 
  char v29; 
  char v30; 
  char v31; 
  char v32; 
  char v33; 
  char v34; 
  char v35; 
  char v36; 
  char v37; 
  char v38; 
  char v39; 

  v4 = -1i64;
  do
    ++v4;
  while ( str[v4] );
  if ( v4 != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_checksum.cpp", 361, ASSERT_TYPE_SANITY, "( strlen( str ) == 32 )", "%s", "strlen( str ) == 32") )
    __debugbreak();
  v5 = (char *)checksumOut->hash + 1;
  v6 = 2i64;
  v7 = str + 2;
  do
  {
    v8 = *(v7 - 2);
    v9 = v8 - 48;
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      v9 = v8 - 87;
      if ( (unsigned __int8)(v8 - 87) > 0xFu )
        v9 = v8 - 55;
    }
    v10 = *(v7 - 1);
    v11 = v10 - 48;
    if ( (unsigned __int8)(v10 - 48) > 9u )
    {
      v11 = v10 - 87;
      if ( (unsigned __int8)(v10 - 87) > 0xFu )
        v11 = v10 - 55;
    }
    *(v5 - 1) = v11 + 16 * v9;
    v12 = *v7;
    v13 = *v7 - 48;
    if ( v13 > 9u )
    {
      v13 = v12 - 87;
      if ( (unsigned __int8)(v12 - 87) > 0xFu )
        v13 = v12 - 55;
    }
    v14 = v7[1];
    v15 = v14 - 48;
    if ( (unsigned __int8)(v14 - 48) > 9u )
    {
      v15 = v14 - 87;
      if ( (unsigned __int8)(v14 - 87) > 0xFu )
        v15 = v14 - 55;
    }
    *v5 = v15 + 16 * v13;
    v16 = v7[2];
    v17 = v16 - 48;
    if ( (unsigned __int8)(v16 - 48) > 9u )
    {
      v17 = v16 - 87;
      if ( (unsigned __int8)(v16 - 87) > 0xFu )
        v17 = v16 - 55;
    }
    v18 = v7[3];
    v19 = v18 - 48;
    if ( (unsigned __int8)(v18 - 48) > 9u )
    {
      v19 = v18 - 87;
      if ( (unsigned __int8)(v18 - 87) > 0xFu )
        v19 = v18 - 55;
    }
    v5[1] = v19 + 16 * v17;
    v20 = v7[4];
    v21 = v20 - 48;
    if ( (unsigned __int8)(v20 - 48) > 9u )
    {
      v21 = v20 - 87;
      if ( (unsigned __int8)(v20 - 87) > 0xFu )
        v21 = v20 - 55;
    }
    v22 = v7[5];
    v23 = v22 - 48;
    if ( (unsigned __int8)(v22 - 48) > 9u )
    {
      v23 = v22 - 87;
      if ( (unsigned __int8)(v22 - 87) > 0xFu )
        v23 = v22 - 55;
    }
    v5[2] = v23 + 16 * v21;
    v24 = v7[6];
    v25 = v24 - 48;
    if ( (unsigned __int8)(v24 - 48) > 9u )
    {
      v25 = v24 - 87;
      if ( (unsigned __int8)(v24 - 87) > 0xFu )
        v25 = v24 - 55;
    }
    v26 = v7[7];
    v27 = v26 - 48;
    if ( (unsigned __int8)(v26 - 48) > 9u )
    {
      v27 = v26 - 87;
      if ( (unsigned __int8)(v26 - 87) > 0xFu )
        v27 = v26 - 55;
    }
    v5[3] = v27 + 16 * v25;
    v28 = v7[8];
    v29 = v28 - 48;
    if ( (unsigned __int8)(v28 - 48) > 9u )
    {
      v29 = v28 - 87;
      if ( (unsigned __int8)(v28 - 87) > 0xFu )
        v29 = v28 - 55;
    }
    v30 = v7[9];
    v31 = v30 - 48;
    if ( (unsigned __int8)(v30 - 48) > 9u )
    {
      v31 = v30 - 87;
      if ( (unsigned __int8)(v30 - 87) > 0xFu )
        v31 = v30 - 55;
    }
    v5[4] = v31 + 16 * v29;
    v32 = v7[10];
    v33 = v32 - 48;
    if ( (unsigned __int8)(v32 - 48) > 9u )
    {
      v33 = v32 - 87;
      if ( (unsigned __int8)(v32 - 87) > 0xFu )
        v33 = v32 - 55;
    }
    v34 = v7[11];
    v35 = v34 - 48;
    if ( (unsigned __int8)(v34 - 48) > 9u )
    {
      v35 = v34 - 87;
      if ( (unsigned __int8)(v34 - 87) > 0xFu )
        v35 = v34 - 55;
    }
    v5[5] = v35 + 16 * v33;
    v36 = v7[12];
    v37 = v36 - 48;
    if ( (unsigned __int8)(v36 - 48) > 9u )
    {
      v37 = v36 - 87;
      if ( (unsigned __int8)(v36 - 87) > 0xFu )
        v37 = v36 - 55;
    }
    v38 = v7[13];
    v39 = v38 - 48;
    if ( (unsigned __int8)(v38 - 48) > 9u )
    {
      v39 = v38 - 87;
      if ( (unsigned __int8)(v38 - 87) > 0xFu )
        v39 = v38 - 55;
    }
    v7 += 16;
    v5[6] = v39 + 16 * v37;
    v5 += 8;
    --v6;
  }
  while ( v6 );
}

/*
==============
Core_BlockChecksum128
==============
*/
void Core_BlockChecksum128(const void *buffer, int length, int key, checksum128_t *checksum)
{
  MD5_CTX ctx; 

  *(_DWORD *)ctx.buffer = key;
  ctx.a = 1732584193;
  ctx.b = -271733879;
  ctx.c = -1732584194;
  ctx.d = 271733878;
  *(_QWORD *)&ctx.lo = 4i64;
  MD5_Update(&ctx, buffer, length);
  MD5_Final((unsigned __int8 *)checksum, &ctx);
}

/*
==============
Core_BlockChecksum128Cat
==============
*/
void Core_BlockChecksum128Cat(const void *buffer0, int length0, const void *buffer1, int length1, checksum128_t *checksum)
{
  MD5_CTX ctx; 

  ctx.a = 1732584193;
  ctx.b = -271733879;
  ctx.c = -1732584194;
  ctx.d = 271733878;
  *(_QWORD *)&ctx.lo = 0i64;
  MD5_Update(&ctx, buffer0, length0);
  MD5_Update(&ctx, buffer1, length1);
  MD5_Final((unsigned __int8 *)checksum, &ctx);
}

/*
==============
Core_BlockChecksum32_Legacy
==============
*/
__int64 Core_BlockChecksum32_Legacy(const void *buffer, int length)
{
  unsigned __int8 result[4]; 
  int v4; 
  int v5; 
  unsigned int v6; 
  MD5_CTX ctx; 

  ctx.a = 1732584193;
  ctx.b = -271733879;
  ctx.c = -1732584194;
  ctx.d = 271733878;
  *(_QWORD *)&ctx.lo = 0i64;
  MD5_Update(&ctx, buffer, length);
  MD5_Final(result, &ctx);
  return v5 ^ v4 ^ *(_DWORD *)result ^ v6;
}

