/*
==============
Com_BlockChecksum128
==============
*/

void __fastcall Com_BlockChecksum128(const void *buffer, unsigned __int64 length, int key, unsigned int (*outChecksum)[4])
{
  ?Com_BlockChecksum128@@YAXPEBX_KHAEAY03I@Z(buffer, length, key, outChecksum);
}

/*
==============
Com_BlockChecksum128
==============
*/
void Com_BlockChecksum128(const void *buffer, unsigned __int64 length, int key, unsigned int (*outChecksum)[4])
{
  __int64 v4; 
  unsigned int v6; 
  unsigned int v8; 
  char *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  char *v18; 
  __int64 v19; 
  char v20; 
  MD4_CTX context; 
  unsigned __int8 Src[2]; 
  char v23; 

  v4 = 0i64;
  *(_QWORD *)context.count = 32i64;
  context.state[0] = 1732584193;
  context.state[1] = -271733879;
  context.state[2] = -1732584194;
  v6 = length;
  context.state[3] = 271733878;
  *(_DWORD *)context.buffer = key;
  if ( (length > 0x7FFFFFFFFFFFFFFFi64 || length + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)length, "unsigned", length) )
    __debugbreak();
  MD4Update(&context, (const unsigned __int8 *)buffer, v6);
  v8 = 0;
  v9 = &v23;
  v10 = 2i64;
  do
  {
    v11 = v8;
    v9 += 4;
    ++v8;
    *(v9 - 6) = context.count[v11];
    *(v9 - 5) = context.buffer[4 * v11 - 7];
    *(v9 - 4) = context.buffer[4 * v11 - 6];
    *(v9 - 3) = context.buffer[4 * v11 - 5];
    --v10;
  }
  while ( v10 );
  v12 = (context.count[0] >> 3) & 0x3F;
  v13 = 56 - v12;
  if ( (unsigned int)v12 >= 0x38 )
    v13 = 120 - v12;
  context.count[0] += 8 * v13;
  v14 = context.count[1];
  if ( context.count[0] < 8 * v13 )
    v14 = context.count[1] + 1;
  v15 = 64 - v12;
  context.count[1] = (v13 >> 29) + v14;
  if ( v13 < 64 - (int)v12 )
  {
    v15 = 0;
  }
  else
  {
    memcpy_0(&context.buffer[v12], PADDING, v15);
    MD4Transform(context.state, context.buffer);
    for ( ; v15 + 63 < v13; v15 += 64 )
      MD4Transform(context.state, &PADDING[v15]);
    LODWORD(v12) = 0;
  }
  memcpy_0(&context.buffer[(unsigned int)v12], &PADDING[v15], v13 - v15);
  v16 = (context.count[0] >> 3) & 0x3F;
  context.count[0] += 64;
  if ( context.count[0] < 0x40 )
    ++context.count[1];
  v17 = (unsigned int)(64 - v16);
  if ( (unsigned int)v17 > 8 )
  {
    LODWORD(v17) = 0;
  }
  else
  {
    memcpy_0(&context.buffer[v16], Src, (unsigned int)v17);
    MD4Transform(context.state, context.buffer);
    for ( ; (unsigned int)(v17 + 63) < 8; v17 = (unsigned int)(v17 + 64) )
      MD4Transform(context.state, &Src[v17]);
    LODWORD(v16) = 0;
  }
  memcpy_0(&context.buffer[(unsigned int)v16], &Src[(unsigned int)v17], (unsigned int)(8 - v17));
  v18 = (char *)&(*outChecksum)[0] + 2;
  v19 = 4i64;
  do
  {
    *(v18 - 2) = context.state[v4];
    v18 += 4;
    *(v18 - 5) = BYTE1(context.state[v4]);
    *(v18 - 4) = BYTE2(context.state[v4]);
    v20 = HIBYTE(context.state[v4]);
    v4 = (unsigned int)(v4 + 1);
    *(v18 - 3) = v20;
    --v19;
  }
  while ( v19 );
}

