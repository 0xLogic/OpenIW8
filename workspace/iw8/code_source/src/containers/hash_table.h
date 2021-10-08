/*
==============
IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>
==============
*/

unsigned __int8 __fastcall IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>(IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher> *this, VisionSetAssetKey *const *key, unsigned int hash, const IWHashTable_Bucket<unsigned char> *buckets, unsigned int bucketMask, const CG_VisionSet_AssetHashNode *nodes)
{
  return ??$BaseFind@PEAUVisionSetAssetKey@@@?$IWHashTable_Base@UCG_VisionSet_AssetHashNode@@UHasher@1@@@IEBAEAEBQEAUVisionSetAssetKey@@IPEBU?$IWHashTable_Bucket@E@@IPEBUCG_VisionSet_AssetHashNode@@@Z(this, key, hash, buckets, bucketMask, nodes);
}

/*
==============
IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>
==============
*/

unsigned __int16 __fastcall IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>(IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher> *this, const NetConstStringLookupKey *key, unsigned int hash, const IWHashTable_Bucket<unsigned short> *buckets, unsigned int bucketMask, const NetConstStringsLookup::NcsHashTableNode *nodes)
{
  return ??$BaseFind@UNetConstStringLookupKey@@@?$IWHashTable_Base@UNcsHashTableNode@NetConstStringsLookup@@UHasher@12@@@IEBAGAEBUNetConstStringLookupKey@@IPEBU?$IWHashTable_Bucket@G@@IPEBUNcsHashTableNode@NetConstStringsLookup@@@Z(this, key, hash, buckets, bucketMask, nodes);
}

/*
==============
IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher>::Find<R_RT_DXResource_LayoutKey>
==============
*/

unsigned __int16 __fastcall IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher>::Find<R_RT_DXResource_LayoutKey>(IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher> *this, const R_RT_DXResource_LayoutKey *key, unsigned int hash, const R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey> *nodes)
{
  return ??$Find@UR_RT_DXResource_LayoutKey@@@?$IWHashTableN@$0EAAA@U?$R_RT_DXResource_HashNode@UR_RT_DXResource_LayoutKey@@@@UHasher@1@@@QEBAGAEBUR_RT_DXResource_LayoutKey@@IPEBU?$R_RT_DXResource_HashNode@UR_RT_DXResource_LayoutKey@@@@@Z(this, key, hash, nodes);
}

/*
==============
IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>
==============
*/

unsigned __int8 __fastcall IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>(IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher> *this, const VisionSetAssetKey *const *key, unsigned int hash, const IWHashTable_Bucket<unsigned char> *buckets, unsigned int bucketMask, const CG_VisionSet_AssetHashNode *nodes)
{
  return ??$BaseFind@PEBUVisionSetAssetKey@@@?$IWHashTable_Base@UCG_VisionSet_AssetHashNode@@UHasher@1@@@IEBAEAEBQEBUVisionSetAssetKey@@IPEBU?$IWHashTable_Bucket@E@@IPEBUCG_VisionSet_AssetHashNode@@@Z(this, key, hash, buckets, bucketMask, nodes);
}

/*
==============
IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>
==============
*/
__int64 IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher>::BaseFind<NetConstStringLookupKey>(IWHashTable_Base<NetConstStringsLookup::NcsHashTableNode,NetConstStringsLookup::NcsHashTableNode::Hasher> *this, const NetConstStringLookupKey *key, unsigned int hash, const IWHashTable_Bucket<unsigned short> *buckets, unsigned int bucketMask, const NetConstStringsLookup::NcsHashTableNode *nodes)
{
  unsigned __int16 headNodeIndex; 
  const NetConstStringsLookup::NcsHashTableNode *v8; 
  unsigned __int16 m_listIndex; 
  NetConstStrings *ncs; 
  NetConstStringType stringType; 
  __int64 v13; 
  __int64 v14; 

  headNodeIndex = buckets[bucketMask & hash].headNodeIndex;
  if ( headNodeIndex == 0xFFFF )
    return 0xFFFFi64;
  while ( 1 )
  {
    v8 = &nodes[headNodeIndex];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 534, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    m_listIndex = v8->m_listIndex;
    if ( m_listIndex >= s_netConstStringMapListCount )
    {
      LODWORD(v14) = s_netConstStringMapListCount;
      LODWORD(v13) = m_listIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 536, ASSERT_TYPE_ASSERT, "(unsigned)( node->m_listIndex ) < (unsigned)( s_netConstStringMapListCount )", "node->m_listIndex doesn't index s_netConstStringMapListCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    ncs = s_netConstStringMapLists[v8->m_listIndex].ncs;
    if ( !ncs )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 538, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 481, ASSERT_TYPE_ASSERT, "(ncsAsset)", (const char *)&queryFormat, "ncsAsset") )
        __debugbreak();
    }
    stringType = NETCONSTSTRINGTYPE_XMODEL;
    if ( ncs->stringType != NETCONSTSTRINGTYPE_XCOMPOSITEMODEL )
      stringType = ncs->stringType;
    if ( stringType == key->m_type )
    {
      if ( !ncs->stringList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 546, ASSERT_TYPE_ASSERT, "(ncsAsset->stringList)", (const char *)&queryFormat, "ncsAsset->stringList") )
        __debugbreak();
      if ( v8->m_entryIndex >= ncs->entryCount )
      {
        LODWORD(v14) = ncs->entryCount;
        LODWORD(v13) = v8->m_entryIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings.cpp", 547, ASSERT_TYPE_ASSERT, "(unsigned)( node->m_entryIndex ) < (unsigned)( ncsAsset->entryCount )", "node->m_entryIndex doesn't index ncsAsset->entryCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !I_strcmp(ncs->stringList[v8->m_entryIndex], key->m_name) )
        break;
    }
    headNodeIndex = v8->m_nextAssetIndex;
    if ( v8->m_nextAssetIndex == 0xFFFF )
      return 0xFFFFi64;
  }
  return headNodeIndex;
}

/*
==============
IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>
==============
*/
unsigned __int8 IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>(IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher> *this, const VisionSetAssetKey *const *key, unsigned int hash, const IWHashTable_Bucket<unsigned char> *buckets, unsigned int bucketMask, const CG_VisionSet_AssetHashNode *nodes)
{
  unsigned __int8 headNodeIndex; 
  const VisionSetAssetKey *v8; 
  const CG_VisionSet_AssetHashNode *v9; 
  const CG_VisionSet_Asset *v10; 
  const char *AssetName; 
  int v12; 
  const char *m_name; 
  signed __int64 v14; 
  int v15; 

  headNodeIndex = buckets[bucketMask & hash].headNodeIndex;
  if ( headNodeIndex == 0xFF )
    return -1;
  while ( 1 )
  {
    v8 = *key;
    v9 = &nodes[headNodeIndex];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 133, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 134, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
      __debugbreak();
    if ( !v8->m_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 135, ASSERT_TYPE_ASSERT, "(key->m_name)", (const char *)&queryFormat, "key->m_name") )
      __debugbreak();
    if ( v9 - s_CG_VisionSet.m_assetNodes >= (unsigned __int64)s_CG_VisionSet.m_assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 137, ASSERT_TYPE_ASSERT, "(nodeIndex < s_CG_VisionSet.m_assetCount)", (const char *)&queryFormat, "nodeIndex < s_CG_VisionSet.m_assetCount") )
      __debugbreak();
    v10 = (const CG_VisionSet_Asset *)&s_CG_VisionSet.m_assetNodes[16 * (v9 - s_CG_VisionSet.m_assetNodes) - 4080];
    if ( v10->m_type == v8->m_type )
    {
      if ( !v10->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 143, ASSERT_TYPE_ASSERT, "(asset->m_header.data)", (const char *)&queryFormat, "asset->m_header.data") )
        __debugbreak();
      AssetName = CG_VisionSetGetAssetName(v10);
      if ( !AssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 145, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
        __debugbreak();
      v12 = *AssetName;
      m_name = v8->m_name;
      if ( v12 + ((unsigned int)(v12 - 65) < 0x1A ? 0x20 : 0) == *m_name + ((unsigned int)(*m_name - 65) < 0x1A ? 0x20 : 0) )
        break;
    }
LABEL_25:
    headNodeIndex = v9->m_nextAssetIndex;
    if ( v9->m_nextAssetIndex == 0xFF )
      return -1;
  }
  v14 = m_name - AssetName;
  while ( v12 )
  {
    v15 = (AssetName++)[v14 + 1];
    v12 = *AssetName;
    if ( v12 + ((unsigned int)(v12 - 65) < 0x1A ? 0x20 : 0) != v15 + ((unsigned int)(v15 - 65) < 0x1A ? 0x20 : 0) )
      goto LABEL_25;
  }
  return headNodeIndex;
}

/*
==============
IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>
==============
*/
unsigned __int8 IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>(IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher> *this, VisionSetAssetKey *const *key, unsigned int hash, const IWHashTable_Bucket<unsigned char> *buckets, unsigned int bucketMask, const CG_VisionSet_AssetHashNode *nodes)
{
  unsigned __int8 headNodeIndex; 
  VisionSetAssetKey *v8; 
  const CG_VisionSet_AssetHashNode *v9; 
  CG_VisionSet_AssetHashNode *v10; 
  const char *v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  int v15; 
  const char *m_name; 
  signed __int64 v17; 
  int v18; 

  headNodeIndex = buckets[bucketMask & hash].headNodeIndex;
  if ( headNodeIndex == 0xFF )
    return -1;
  while ( 1 )
  {
    v8 = *key;
    v9 = &nodes[headNodeIndex];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 133, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 134, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
      __debugbreak();
    if ( !v8->m_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 135, ASSERT_TYPE_ASSERT, "(key->m_name)", (const char *)&queryFormat, "key->m_name") )
      __debugbreak();
    if ( v9 - s_CG_VisionSet.m_assetNodes >= (unsigned __int64)s_CG_VisionSet.m_assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 137, ASSERT_TYPE_ASSERT, "(nodeIndex < s_CG_VisionSet.m_assetCount)", (const char *)&queryFormat, "nodeIndex < s_CG_VisionSet.m_assetCount") )
      __debugbreak();
    v10 = &s_CG_VisionSet.m_assetNodes[16 * (v9 - s_CG_VisionSet.m_assetNodes) - 4080];
    if ( v10->m_nextAssetIndex != v8->m_type )
      goto LABEL_38;
    if ( !*(_QWORD *)&v10[8].m_nextAssetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 143, ASSERT_TYPE_ASSERT, "(asset->m_header.data)", (const char *)&queryFormat, "asset->m_header.data") )
      __debugbreak();
    v11 = NULL;
    switch ( v10->m_nextAssetIndex )
    {
      case 0u:
        v11 = "(identity)";
        goto LABEL_34;
      case 1u:
        if ( *(_QWORD *)&v10[8].m_nextAssetIndex )
          goto LABEL_30;
        v12 = "asset->m_header.image";
        v13 = 139;
        v14 = "(asset->m_header.image)";
LABEL_28:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", v13, ASSERT_TYPE_ASSERT, v14, (const char *)&queryFormat, v12) )
          __debugbreak();
LABEL_30:
        v11 = **(const char ***)&v10[8].m_nextAssetIndex;
        if ( v11 )
          goto LABEL_34;
        break;
      case 2u:
        if ( *(_QWORD *)&v10[8].m_nextAssetIndex )
          goto LABEL_30;
        v12 = "asset->m_header.gradingClut";
        v13 = 144;
        v14 = "(asset->m_header.gradingClut)";
        goto LABEL_28;
      case 3u:
        if ( *(_QWORD *)&v10[8].m_nextAssetIndex )
          goto LABEL_30;
        v12 = "asset->m_header.fogSpline";
        v13 = 150;
        v14 = "(asset->m_header.fogSpline)";
        goto LABEL_28;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_local.h", 145, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
      __debugbreak();
LABEL_34:
    v15 = *v11;
    m_name = v8->m_name;
    if ( v15 + ((unsigned int)(v15 - 65) < 0x1A ? 0x20 : 0) == *m_name + ((unsigned int)(*m_name - 65) < 0x1A ? 0x20 : 0) )
      break;
LABEL_38:
    headNodeIndex = v9->m_nextAssetIndex;
    if ( v9->m_nextAssetIndex == 0xFF )
      return -1;
  }
  v17 = m_name - v11;
  while ( v15 )
  {
    v18 = (v11++)[v17 + 1];
    v15 = *v11;
    if ( v15 + ((unsigned int)(v15 - 65) < 0x1A ? 0x20 : 0) != v18 + ((unsigned int)(v18 - 65) < 0x1A ? 0x20 : 0) )
      goto LABEL_38;
  }
  return headNodeIndex;
}

/*
==============
IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher>::Find<R_RT_DXResource_LayoutKey>
==============
*/
__int64 IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher>::Find<R_RT_DXResource_LayoutKey>(IWHashTableN<16384,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>,R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey>::Hasher> *this, const R_RT_DXResource_LayoutKey *key, unsigned int hash, const R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey> *nodes)
{
  unsigned __int16 headNodeIndex; 
  const R_RT_DXResource_HashNode<R_RT_DXResource_LayoutKey> *v5; 

  headNodeIndex = this->buckets[hash & 0x3FFF].headNodeIndex;
  if ( headNodeIndex == 0xFFFF )
    return 0xFFFFi64;
  while ( 1 )
  {
    v5 = &nodes[headNodeIndex];
    if ( *(_DWORD *)&v5->m_resourceKey.m_info.m_width == *(_DWORD *)&key->m_info.m_width && v5->m_resourceKey.m_info.m_arraySliceCount == key->m_info.m_arraySliceCount && v5->m_resourceKey.m_info.m_mipCount == key->m_info.m_mipCount && v5->m_resourceKey.m_info.m_format == key->m_info.m_format && v5->m_resourceKey.m_info.m_miscFlags == key->m_info.m_miscFlags && v5->m_resourceKey.m_info.m_bindFlags == key->m_info.m_bindFlags && v5->m_resourceKey.m_info.m_isDepth == key->m_info.m_isDepth && v5->m_resourceKey.m_info.m_sampleCount == key->m_info.m_sampleCount && v5->m_resourceKey.m_info.m_depth == key->m_info.m_depth )
      break;
    headNodeIndex = v5->m_resourceKey.m_info.m_nextHashNodeIndex;
    if ( headNodeIndex == 0xFFFF )
      return 0xFFFFi64;
  }
  return headNodeIndex;
}

