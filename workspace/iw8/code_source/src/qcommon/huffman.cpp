/*
==============
Huff_Init
==============
*/

void Huff_Init(void)
{
  ?Huff_Init@@YAXXZ();
}

/*
==============
Huff_offsetReceive
==============
*/

bool __fastcall Huff_offsetReceive(const unsigned __int8 *const huffReadTable, const unsigned __int8 *const fin, const int inputSize, int *const inOutOffset, unsigned __int8 *const outRecvByte)
{
  return ?Huff_offsetReceive@@YA_NQEIBEQEBEHQEAHQEAE@Z(huffReadTable, fin, inputSize, inOutOffset, outRecvByte);
}

/*
==============
Huff_offsetTransmit
==============
*/

bool __fastcall Huff_offsetTransmit(const int *huffTable, const int ch, unsigned __int8 *const fout, const int maxOutputSize, int *const inOutOffset)
{
  return ?Huff_offsetTransmit@@YA_NQEBHHQEAEHQEAH@Z(huffTable, ch, fout, maxOutputSize, inOutOffset);
}

/*
==============
Huff_BuildFromData
==============
*/
void Huff_BuildFromData(huff_t *huff, int *data)
{
  __int64 *p_Base; 
  int v5; 
  int v6; 
  int v7; 
  node_t *inited; 
  __int64 blocNode; 
  char *v10; 
  __int64 v11; 
  __int64 v12; 
  node_t *v13; 
  __int64 *v14; 
  node_t *tree; 
  __int64 v16; 
  __int64 v17; 
  node_t *v18; 
  node_t *v19; 
  node_t *v20; 
  __int64 v21; 
  __int64 v22; 
  node_t *Base; 
  char v24; 

  *(&huff->blocNode + 1) = 0;
  memset_0(huff->loc, 0, 0x800ui64);
  memset_0(huff->nodes, 0, sizeof(huff->nodes));
  memset_0(&huff->nodeList[0].child[1], 0, 0x8FF8ui64);
  huff->blocNode = 1;
  huff->loc[256] = huff->nodeList;
  p_Base = (__int64 *)&Base;
  huff->tree = huff->nodeList;
  huff->nodeList[0].weight = 0;
  v5 = 256;
  huff->nodeList[0].symbol = 256;
  v6 = 0;
  huff->nodeList[0].parent = NULL;
  v7 = 0;
  huff->nodeList[0].child[0] = NULL;
  huff->nodeList[0].child[1] = NULL;
  do
  {
    inited = Huff_initNode(huff, v7++, *data);
    *p_Base = (__int64)inited;
    ++data;
    ++p_Base;
  }
  while ( v7 < 256 );
  qsort(&Base, 0x100ui64, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)nodeCmp);
  blocNode = (unsigned int)huff->blocNode;
  if ( (unsigned int)blocNode >= 0x480 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( ( sizeof( *array_counter( huff->nodeList ) ) + 0 ) )", "nodeIndex doesn't index ARRAY_COUNT( huff->nodeList )\n\t%i not in [0, %i)", blocNode, 1152) )
    __debugbreak();
  ++huff->blocNode;
  v10 = &v24;
  v11 = 0i64;
  v12 = 255i64;
  v13 = &huff->nodeList[blocNode];
  v13->weight = 1;
  v13->symbol = 257;
  v13->child[0] = NULL;
  v13->child[1] = NULL;
  v13->parent = NULL;
  v14 = (__int64 *)&Base;
  huff->nodes[0] = v13;
  tree = huff->tree;
  v13->child[0] = tree;
  v13->child[1] = Base;
  v16 = (__int64)Base;
  tree->parent = v13;
  *(_QWORD *)(v16 + 16) = v13;
  v13->weight = *(_DWORD *)(v16 + 24) + tree->weight;
  Base = v13;
  do
  {
    qsort(&Base + v6, v5, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)nodeCmp);
    v17 = (unsigned int)huff->blocNode;
    if ( (unsigned int)v17 >= 0x480 )
    {
      LODWORD(v22) = 1152;
      LODWORD(v21) = huff->blocNode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( ( sizeof( *array_counter( huff->nodeList ) ) + 0 ) )", "nodeIndex doesn't index ARRAY_COUNT( huff->nodeList )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    ++huff->blocNode;
    ++v11;
    ++v6;
    --v5;
    v18 = &huff->nodeList[v17];
    v18->weight = 1;
    v18->symbol = 257;
    v18->child[0] = NULL;
    v18->child[1] = NULL;
    v18->parent = NULL;
    v19 = (node_t *)*v14;
    v14 = (__int64 *)(&Base + v11);
    huff->nodes[0] = v18;
    v18->child[0] = v19;
    v20 = *(node_t **)v10;
    v10 += 8;
    v18->child[1] = v20;
    v19->parent = v18;
    v20->parent = v18;
    v18->weight = v20->weight + v19->weight;
    *v14 = (__int64)v18;
    --v12;
  }
  while ( v12 );
  huff->tree = *(&Base + v6);
}

/*
==============
Huff_CheckTable
==============
*/
void Huff_CheckTable(huff_t *huff, int *huffTable, unsigned __int8 *huffReadTable)
{
  int v5; 
  int v6; 
  node_t **loc; 
  int *v8; 
  const node_t *v9; 
  int v10; 
  const node_t *parent; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  bool v15; 
  int *v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  unsigned __int8 *v19; 
  unsigned int i; 
  int v21; 
  __int64 j; 
  unsigned int v23; 
  int v24; 
  unsigned int k; 
  int v26; 
  __int64 m; 
  unsigned int v28; 
  int v29; 
  unsigned __int8 *v30; 
  const char *v31; 
  const char *v32; 
  node_t *tree; 
  __int64 v34; 
  char v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int v40; 
  node_t *v41; 
  __int64 v42; 
  const char *v43; 
  node_t **v44; 
  __int64 symbol_low; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned __int64 v49; 
  const char *v50; 
  unsigned int v51; 
  char *fmt; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  int v57; 
  unsigned int v58; 
  node_t *v61; 
  unsigned __int8 fout[8]; 
  __int64 v63; 

  v5 = 1;
$retry_1:
  v6 = 0;
  loc = huff->loc;
  v8 = huffTable;
  while ( v6 < 256 )
  {
    v9 = *loc;
    *(_QWORD *)fout = 0i64;
    v10 = 0;
    v63 = 0i64;
    parent = v9->parent;
    if ( parent )
    {
      v12 = huffman_send(parent, v9, 0, fout);
      v10 = v12;
      if ( v12 > 27 )
      {
        LODWORD(v53) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1700, ASSERT_TYPE_ASSERT, "( ( bitCount <= 27 ) )", v13, v53) )
          __debugbreak();
      }
    }
    v14 = v10 | (32 * (fout[0] | ((fout[1] | (*(unsigned __int16 *)&fout[2] << 8)) << 8)));
    if ( v5 )
    {
      if ( (_DWORD)v14 != *v8 )
      {
        v5 = 0;
        goto $retry_1;
      }
    }
    else
    {
      LODWORD(v53) = v10;
      LODWORD(fmt) = fout[0] | ((fout[1] | (*(unsigned __int16 *)&fout[2] << 8)) << 8);
      Com_Printf(25, "\t%d,\t
    }
    ++v6;
    ++loc;
    ++v8;
  }
  v57 = v5;
  if ( !v5 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1720, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "update huff write table");
LABEL_145:
    if ( v15 )
      __debugbreak();
    return;
  }
  v16 = huffTable;
LABEL_16:
  v17 = huffReadTable;
LABEL_17:
  memset_0(huff->nodes, 0, sizeof(huff->nodes));
  v18 = 0i64;
  v19 = v17;
  v58 = 0;
  for ( i = 0; i < 0x100; ++i )
  {
    v21 = 0;
    for ( j = 0i64; j < 256; ++j )
    {
      v23 = v16[j] & 0x1F;
      v24 = (unsigned __int8)((unsigned int)v16[j] >> 5);
      if ( v23 < 8 )
        v24 = v24 & (255 >> (8 - v23)) | i & ~(255 >> (8 - v23));
      if ( i == v24 )
        break;
      ++v21;
    }
    if ( v21 == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1749, ASSERT_TYPE_ASSERT, "(i != 256)", (const char *)&queryFormat, "i != HMAX") )
      __debugbreak();
    if ( v5 )
    {
      if ( *v19 != v23 )
      {
        v5 = 0;
        v57 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      Com_Printf(25, "\t%d,\t\t
    }
    ++v19;
  }
  for ( k = 0; k < 0x100; ++k )
  {
    v26 = 0;
    for ( m = 0i64; m < 256; ++m )
    {
      v28 = v16[m] & 0x1F;
      v29 = (unsigned __int8)((unsigned int)v16[m] >> 5);
      if ( v28 < 8 )
        v29 = v29 & (255 >> (8 - v28)) | k & ~(255 >> (8 - v28));
      if ( k == v29 )
        break;
      ++v26;
    }
    if ( v26 == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1786, ASSERT_TYPE_ASSERT, "(i != 256)", (const char *)&queryFormat, "i != HMAX") )
      __debugbreak();
    if ( v28 > 8 )
    {
      if ( v5 )
      {
        v17 = huffReadTable;
        if ( huffReadTable[k + 256] != (_DWORD)v18 )
        {
          v5 = 0;
          v57 = 0;
          goto LABEL_17;
        }
      }
      else
      {
        LODWORD(fmt) = k;
        v32 = (char *)&queryFormat.fmt + 3;
        if ( (unsigned int)v18 < 0x64 )
          v32 = "\t";
        Com_Printf(25, "\t%d,\t%s
      }
      tree = huff->tree;
      v34 = 8i64;
      do
      {
        if ( tree->symbol != 257 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1822, ASSERT_TYPE_ASSERT, "(node->symbol == (256 + 1))", (const char *)&queryFormat, "node->symbol == INTERNAL_NODE") )
          __debugbreak();
        v35 = v29;
        v29 >>= 1;
        tree = tree->child[v35 & 1];
        --v34;
      }
      while ( v34 );
      v5 = v57;
      v16 = huffTable;
      if ( tree->symbol != 257 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1827, ASSERT_TYPE_ASSERT, "(node->symbol == (256 + 1))", (const char *)&queryFormat, "node->symbol == INTERNAL_NODE") )
        __debugbreak();
      if ( (unsigned int)v18 >= 0x480 )
      {
        LODWORD(v54) = 1152;
        LODWORD(v53) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1829, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCount ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeCount doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      huff->nodes[v18] = tree->child[0];
      v36 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v36 >= 0x480 )
      {
        LODWORD(v54) = 1152;
        LODWORD(v53) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1833, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCount ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeCount doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      huff->nodes[v36] = tree->child[1];
      v18 = (unsigned int)(v36 + 1);
      goto LABEL_68;
    }
    if ( !v5 )
    {
      LODWORD(fmt) = k;
      v31 = (char *)&queryFormat.fmt + 3;
      if ( v26 < 100 )
        v31 = "\t";
      Com_Printf(25, "\t%d,\t%s
LABEL_68:
      v30 = huffReadTable;
      continue;
    }
    v30 = huffReadTable;
    if ( huffReadTable[k + 256] != v26 )
    {
      v5 = 0;
      v57 = 0;
      v17 = huffReadTable;
      goto LABEL_17;
    }
  }
  v37 = 0;
  v38 = 256;
  while ( 1 )
  {
    v39 = v38 - 256;
    v40 = v37;
    if ( (unsigned int)v18 > v37 )
      v40 = v18;
    if ( (unsigned int)v39 >= v40 )
      break;
    if ( (unsigned int)v39 >= 0x480 )
    {
      LODWORD(v54) = 1152;
      LODWORD(v53) = v38 - 256;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1841, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeIndex doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    v41 = huff->nodes[v39];
    v61 = v41;
    if ( v41 )
    {
      if ( (unsigned __int64)huff->nodeList <= 0x2020 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1861, ASSERT_TYPE_ASSERT, "((uintptr_t)huff->nodeList > sizeof(huff->nodeList[0]) * (1+256))", (const char *)&queryFormat, "(uintptr_t)huff->nodeList > sizeof(huff->nodeList[0]) * (1+256)") )
        __debugbreak();
      v42 = (__int64)&v41[-1] >> 5;
      if ( v42 >= 256 )
      {
        if ( v41->symbol == 257 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( (unsigned int)v18 >= 0x480 )
              {
                LODWORD(v54) = 1152;
                LODWORD(v53) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1915, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCount ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeCount doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
                  __debugbreak();
              }
              v46 = (unsigned int)v18;
              v47 = (unsigned int)(v18 + 1);
              if ( !huff->nodes[(unsigned int)v18] )
                break;
              LODWORD(v18) = v18 + 1;
            }
            if ( (unsigned int)v47 >= 0x480 )
            {
              LODWORD(v54) = 1152;
              LODWORD(v53) = v18 + 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1922, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCount + 1 ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeCount + 1 doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
                __debugbreak();
            }
            v48 = (unsigned int)v47;
            if ( !huff->nodes[v47] )
              break;
            LODWORD(v18) = v18 + 2;
          }
          v49 = (unsigned int)v18 - (v38 - 256);
          if ( (unsigned int)v18 - (v38 - 256) >= 0x100 )
          {
            LODWORD(v54) = 256;
            LODWORD(v53) = v18 - (v38 - 256);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1934, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( 256 )", "offset doesn't index 256\n\t%i not in [0, %i)", v53, v54) )
              __debugbreak();
          }
          if ( (_DWORD)v18 == v38 - 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1935, ASSERT_TYPE_ASSERT, "(offset)", (const char *)&queryFormat, "offset") )
            __debugbreak();
          if ( v57 )
          {
            if ( huffReadTable[v38 + 256] != v49 )
            {
              v16 = huffTable;
              v5 = 0;
              v17 = huffReadTable;
              v57 = 0;
              goto LABEL_17;
            }
          }
          else
          {
            if ( v49 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v49, "signed", v49) )
              __debugbreak();
            v50 = (char *)&queryFormat.fmt + 3;
            if ( v49 < 0x64 )
              v50 = "\t";
            LODWORD(fmt) = v38 - 256;
            Com_Printf(25, "\t%d,\t%s
          }
          if ( (unsigned int)v18 >= 0x480 )
          {
            LODWORD(v54) = 1152;
            LODWORD(v53) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1950, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCount ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeCount doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
              __debugbreak();
          }
          v51 = v18 + 1;
          huff->nodes[v46] = v41->child[0];
          if ( v51 >= 0x480 )
          {
            LODWORD(v54) = 1152;
            LODWORD(v53) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1954, ASSERT_TYPE_ASSERT, "(unsigned)( nodeCount ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "nodeCount doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
              __debugbreak();
          }
          LODWORD(v18) = v51 + 1;
          v5 = v57;
          huff->nodes[v48] = v61->child[1];
LABEL_142:
          v37 = v58;
          ++v38;
          v30 = huffReadTable;
        }
        else
        {
          if ( v57 )
          {
            if ( v30[v38 + 256] )
            {
LABEL_80:
              v16 = huffTable;
              v5 = 0;
              v57 = 0;
              goto LABEL_16;
            }
          }
          else
          {
            Com_Printf(25, "\t0,\t\t
          }
          if ( v38 < (unsigned int)v18 )
          {
            LODWORD(v56) = v18;
            LODWORD(v55) = v38;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1904, ASSERT_TYPE_ASSERT, "( reservedNodeIndex ) >= ( nodeCount )", "%s >= %s\n\t%i, %i", "reservedNodeIndex", "nodeCount", v55, v56) )
              __debugbreak();
          }
          if ( v38 >= 0x480 )
          {
            LODWORD(v54) = 1152;
            LODWORD(v53) = v38;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1905, ASSERT_TYPE_ASSERT, "(unsigned)( reservedNodeIndex ) < (unsigned)( ( sizeof( *array_counter( huff->nodes ) ) + 0 ) )", "reservedNodeIndex doesn't index ARRAY_COUNT( huff->nodes )\n\t%i not in [0, %i)", v53, v54) )
              __debugbreak();
          }
          v44 = &huff->nodes[v38];
          if ( *v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1907, ASSERT_TYPE_ASSERT, "(!huff->nodes[reservedNodeIndex])", (const char *)&queryFormat, "!huff->nodes[reservedNodeIndex]") )
            __debugbreak();
          symbol_low = LOBYTE(v41->symbol);
          v5 = v57;
          v30 = huffReadTable;
          *v44 = (node_t *)(32 * (symbol_low + 1));
          v37 = ++v38;
          v58 = v38;
        }
      }
      else
      {
        v5 = v57;
        if ( v57 )
        {
          if ( v30[v38 + 256] != v42 )
            goto LABEL_80;
          v37 = v58;
          ++v38;
          v30 = huffReadTable;
        }
        else
        {
          if ( (unsigned __int64)(v42 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v42, "signed", v42) )
            __debugbreak();
          v43 = (char *)&queryFormat.fmt + 3;
          if ( v42 < 100 )
            v43 = "\t";
          LODWORD(fmt) = v38 - 256;
          Com_Printf(25, "\t%d,\t%s
          v37 = v58;
          ++v38;
          v30 = huffReadTable;
        }
      }
    }
    else
    {
      v5 = v57;
      if ( v57 )
      {
        if ( v30[v38 + 256] )
          goto LABEL_80;
        goto LABEL_142;
      }
      Com_Printf(25, "\t0,\t\t
      v37 = v58;
      ++v38;
      v30 = huffReadTable;
    }
  }
  if ( !v5 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1961, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "update huff read table");
    goto LABEL_145;
  }
}

/*
==============
Huff_Init
==============
*/
void Huff_Init(void)
{
  huff_t *m_ptr; 
  int v1; 
  int v2; 
  Mem_LargeLocal v3; 

  Mem_LargeLocal::Mem_LargeLocal(&v3, 0xBC18ui64, "huff_t huff");
  m_ptr = (huff_t *)v3.m_ptr;
  v1 = Sys_Milliseconds();
  Huff_BuildFromData(m_ptr, s_msg_hData);
  Huff_CheckTable(m_ptr, g_huffWriteData, g_huffReadData);
  v2 = Sys_Milliseconds();
  Com_Printf(25, "Huffman Took %d Milliseconds\n", (unsigned int)(v2 - v1));
  Mem_LargeLocal::~Mem_LargeLocal(&v3);
}

/*
==============
Huff_initNode
==============
*/
node_t *Huff_initNode(huff_t *huff, int ch, int weight)
{
  __int64 blocNode; 
  __int64 v5; 
  node_t *v7; 
  __int64 v9; 
  __int64 v10; 

  blocNode = (unsigned int)huff->blocNode;
  v5 = ch;
  if ( (unsigned int)blocNode >= 0x480 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( ( sizeof( *array_counter( huff->nodeList ) ) + 0 ) )", "nodeIndex doesn't index ARRAY_COUNT( huff->nodeList )\n\t%i not in [0, %i)", blocNode, 1152) )
    __debugbreak();
  ++huff->blocNode;
  v7 = &huff->nodeList[blocNode];
  v7->symbol = v5;
  v7->weight = weight;
  v7->child[0] = NULL;
  v7->child[1] = NULL;
  v7->parent = NULL;
  if ( (_DWORD)v5 == 257 )
  {
    huff->nodes[0] = v7;
  }
  else
  {
    if ( (unsigned int)v5 >= 0x101 )
    {
      LODWORD(v10) = 257;
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\huffman.cpp", 2013, ASSERT_TYPE_ASSERT, "(unsigned)( ch ) < (unsigned)( ( sizeof( *array_counter( huff->loc ) ) + 0 ) )", "ch doesn't index ARRAY_COUNT( huff->loc )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    huff->loc[v5] = v7;
  }
  return v7;
}

/*
==============
Huff_offsetReceive
==============
*/
char Huff_offsetReceive(const unsigned __int8 *const huffReadTable, const unsigned __int8 *const fin, const int inputSize, int *const inOutOffset, unsigned __int8 *const outRecvByte)
{
  int v5; 
  int v8; 
  int v9; 
  char v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned __int8 v16; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  unsigned __int8 v22; 
  __int64 v23; 

  v5 = *inOutOffset;
  v8 = *inOutOffset >> 3;
  v9 = *inOutOffset & 7;
  if ( v8 >= inputSize )
    return 0;
  v12 = 8 - v9;
  v13 = fin[v8] >> v9;
  v14 = huffReadTable[v13];
  if ( v14 <= 8 - v9 )
    goto LABEL_5;
  if ( v8 + 1 >= inputSize )
    return 0;
  v15 = (unsigned __int8)(v13 | (fin[v8 + 1] << v12));
  v13 = (unsigned __int8)(v13 | (fin[v8 + 1] << v12));
  v14 = huffReadTable[v15];
LABEL_5:
  v16 = huffReadTable[v13 + 256];
  if ( v14 <= 8 )
  {
    *inOutOffset = v5 + v14;
    *outRecvByte = v16;
    return 1;
  }
  v18 = v16;
  v19 = v5 + 8;
  *inOutOffset = v5 + 8;
  v20 = v18 + 512;
  if ( (v5 + 8) >> 3 >= inputSize )
    return 0;
  while ( 1 )
  {
    v21 = v19 + 1;
    v22 = fin[(__int64)v19 >> 3];
    *inOutOffset = v19 + 1;
    v23 = (unsigned int)(((unsigned __int8)(1 << (v19 & 7)) & v22) != 0) + v20;
    if ( !huffReadTable[v23] )
      break;
    v20 = huffReadTable[v23] + (_DWORD)v23;
    ++v19;
    if ( v21 >> 3 >= inputSize )
      return 0;
  }
  *outRecvByte = huffReadTable[(unsigned int)(v23 + 256)];
  return 1;
}

/*
==============
Huff_offsetTransmit
==============
*/
char Huff_offsetTransmit(const int *huffTable, const int ch, unsigned __int8 *const fout, const int maxOutputSize, int *const inOutOffset)
{
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v11; 

  v5 = maxOutputSize;
  v6 = huffTable[ch] & 0x1F;
  v7 = (unsigned int)huffTable[ch] >> 5;
  v8 = *inOutOffset & 7;
  v9 = *inOutOffset >> 3;
  if ( v9 < (int)v5 )
  {
    *inOutOffset += v6;
    if ( !v8 )
      goto LABEL_6;
    v10 = 8 - v8;
    fout[v9] |= (_BYTE)v7 << v8;
    if ( v6 <= 8 - v8 )
      return 1;
    if ( ++v9 < (int)v5 )
    {
      v6 -= v10;
      v7 >>= v10;
LABEL_6:
      v11 = v9;
      fout[v9] = v7;
      if ( v6 > 8 )
      {
        while ( ++v11 < v5 )
        {
          v7 >>= 8;
          v6 -= 8;
          fout[v11] = v7;
          if ( v6 <= 8 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

/*
==============
huffman_send
==============
*/
__int64 huffman_send(const node_t *node, const node_t *child, int offset, unsigned __int8 *fout)
{
  node_t *parent; 

  parent = node->parent;
  if ( parent )
    offset = huffman_send(parent, node, offset, fout);
  if ( !child )
    return (unsigned int)offset;
  if ( (offset & 7) == 0 )
    fout[(__int64)offset >> 3] = 0;
  fout[(__int64)offset >> 3] |= (node->child[1] == child) << (offset & 7);
  return (unsigned int)(offset + 1);
}

/*
==============
nodeCmp
==============
*/
__int64 nodeCmp(const void *left, const void *right)
{
  return (unsigned int)(*(_DWORD *)(*(_QWORD *)left + 24i64) - *(_DWORD *)(*(_QWORD *)right + 24i64));
}

