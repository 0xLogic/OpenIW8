/*
==============
Stream_Primer_AssetInfo::GetHandle
==============
*/

streamer_handle_t __fastcall Stream_Primer_AssetInfo::GetHandle(Stream_Primer_AssetInfo *this)
{
  return ?GetHandle@Stream_Primer_AssetInfo@@QEBA?AUstreamer_handle_t@@XZ(this);
}

/*
==============
Stream_Primer_AssetInfo::GetStreamItemType
==============
*/

StreamItemType __fastcall Stream_Primer_AssetInfo::GetStreamItemType(Stream_Primer_AssetInfo *this)
{
  return ?GetStreamItemType@Stream_Primer_AssetInfo@@QEBA?AW4StreamItemType@@XZ(this);
}

/*
==============
Stream_Primer_AssetInfo::GetAssetPtr
==============
*/

Stream_Primer_AssetInfo::AssetPtr __fastcall Stream_Primer_AssetInfo::GetAssetPtr(Stream_Primer_AssetInfo *this)
{
  return ?GetAssetPtr@Stream_Primer_AssetInfo@@QEBA?ATAssetPtr@1@XZ(this);
}

/*
==============
Stream_Primer_AssetInfo::GetAssetPtr
==============
*/
Stream_Primer_AssetInfo::AssetPtr Stream_Primer_AssetInfo::GetAssetPtr(Stream_Primer_AssetInfo *this, _QWORD *a2)
{
  StreamLeafType m_leafType; 

  m_leafType = this->m_leafType;
  if ( (m_leafType & 0xF) != 0 )
  {
    *a2 = DB_GetGfxImageAtIndex(this->m_assetIndex >> 2);
    return (Stream_Primer_AssetInfo::AssetPtr)a2;
  }
  else if ( m_leafType == STREAM_LEAF_MESH )
  {
    *a2 = DB_GetXModelSurfsAtIndex(this->m_assetIndex);
    return (Stream_Primer_AssetInfo::AssetPtr)a2;
  }
  else
  {
    if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
      __debugbreak();
    *a2 = DB_GetStreamKeyAtIndex(this->m_assetIndex);
    return (Stream_Primer_AssetInfo::AssetPtr)a2;
  }
}

/*
==============
Stream_Primer_AssetInfo::GetHandle
==============
*/
streamer_handle_t Stream_Primer_AssetInfo::GetHandle(Stream_Primer_AssetInfo *this, streamer_handle_t *a2)
{
  StreamLeafType m_leafType; 
  XModelSurfs *GfxImageAtIndex; 
  GfxImage *v6; 
  StreamLeafType v7; 
  streamer_handle_t v8; 

  m_leafType = this->m_leafType;
  if ( (m_leafType & 0xF) != 0 )
  {
    GfxImageAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(this->m_assetIndex >> 2);
  }
  else if ( m_leafType == STREAM_LEAF_MESH )
  {
    GfxImageAtIndex = DB_GetXModelSurfsAtIndex(this->m_assetIndex);
  }
  else
  {
    if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
      __debugbreak();
    GfxImageAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(this->m_assetIndex);
  }
  v6 = (GfxImage *)GfxImageAtIndex;
  v7 = this->m_leafType;
  if ( (v7 & 0xF) != 0 )
  {
    v8.data = Stream_AddressSpace_ImageHandle(v6).data;
  }
  else if ( v7 == STREAM_LEAF_MESH )
  {
    v8.data = Stream_AddressSpace_MeshHandle((XModelSurfs *)v6).data;
  }
  else
  {
    if ( v7 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 88, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
      __debugbreak();
    v8.data = Stream_AddressSpace_GenericHandle((StreamKey *)v6).data;
  }
  a2->data = v8.data;
  return (streamer_handle_t)a2;
}

/*
==============
Stream_Primer_AssetInfo::GetStreamItemType
==============
*/
char Stream_Primer_AssetInfo::GetStreamItemType(Stream_Primer_AssetInfo *this)
{
  StreamLeafType m_leafType; 

  m_leafType = this->m_leafType;
  if ( (m_leafType & 0xF) != 0 )
    return 0;
  if ( m_leafType == STREAM_LEAF_MESH )
    return 1;
  if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 105, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
    __debugbreak();
  return 2;
}

