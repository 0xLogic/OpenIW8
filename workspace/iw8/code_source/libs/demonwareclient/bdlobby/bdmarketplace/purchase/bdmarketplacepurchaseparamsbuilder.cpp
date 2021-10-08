/*
==============
bdMarketplacePurchaseParamsBuilder::build
==============
*/

bool __fastcall bdMarketplacePurchaseParamsBuilder::build(bdTaskParams *params, const char *context, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const unsigned int *discountIds)
{
  return ?build@bdMarketplacePurchaseParamsBuilder@@SA_NAEAVbdTaskParams@@PEBDVbdUserAccountID@@QEBI3E_NQEBV3@QEAVbdMarketplaceCouponInventory@@IQEAPEBE3E3@Z(params, context, playerId, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, results, maxNumResults, couponMetadata, metadataSize, customSourceType, discountIds);
}

/*
==============
bdMarketplacePurchaseParamsBuilder::build
==============
*/

bool __fastcall bdMarketplacePurchaseParamsBuilder::build(bdTaskParams *params, const char *context, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned int customSourceType, const unsigned int *discountIds)
{
  return ?build@bdMarketplacePurchaseParamsBuilder@@SA_NAEAVbdTaskParams@@PEBDVbdUserAccountID@@QEBI3E_NQEBV3@QEAVbdMarketplaceCouponInventory@@IQEAPEBE3I3@Z(params, context, playerId, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, results, maxNumResults, couponMetadata, metadataSize, customSourceType, discountIds);
}

/*
==============
bdMarketplacePurchaseParamsBuilder::build
==============
*/
char bdMarketplacePurchaseParamsBuilder::build(bdTaskParams *params, const char *context, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const unsigned int *discountIds)
{
  const void **v18; 
  const unsigned int *v19; 
  const bdUserAccountID *v20; 
  bool v21; 
  unsigned __int8 v22; 
  _BOOL8 v23; 
  _BOOL8 v24; 
  bool v25; 
  bdReferencable *v26; 
  unsigned __int8 i; 
  bool v28; 
  _BOOL8 v29; 
  bool v30; 
  unsigned __int8 v31; 
  unsigned __int64 v32; 
  bool v33; 
  _BOOL8 v34; 
  bool v35; 
  bool v36; 
  unsigned __int8 j; 
  bdUserAccountID *v38; 
  _BOOL8 v39; 
  _BOOL8 v40; 
  bool v41; 
  bool v42; 
  _BOOL8 v43; 
  bool v44; 
  __int64 v45; 
  bool v46; 
  _BOOL8 v47; 
  bool v48; 
  const unsigned int *v49; 
  bool v50; 
  _BOOL8 v51; 
  bool v52; 
  unsigned __int8 k; 
  bool v54; 
  bool v55; 
  unsigned __int64 v58; 
  const unsigned int *v59; 
  __int64 v60; 
  const bdUserAccountID *v61; 
  bdUserAccountID v62; 
  bdUserAccountID v63; 

  v60 = -2i64;
  v61 = playerId;
  v58 = (unsigned __int64)purchasedQuantities;
  v18 = (const void **)couponMetadata;
  v19 = metadataSize;
  v59 = discountIds;
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x20u, "Cannot purchase Skus with a NULL skuIds");
  bdHandleAssert(purchasedQuantities != NULL, "(purchasedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x21u, "Cannot purchase Skus with a NULL purchasedQuantities");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x22u, "Cannot purchase Skus with zero numSkuIds");
  bdUserAccountID::bdUserAccountID(&v63);
  v21 = bdUserAccountID::operator==((bdUserAccountID *)playerId, v20);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v63.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v63.gap38);
  if ( couponMetadata )
  {
    v22 = 0;
    if ( numSkuIds )
    {
      while ( metadataSize[v22] <= 0x40 )
      {
        if ( ++v22 >= numSkuIds )
          goto LABEL_5;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/purchase/bdMarketplacePurchaseParamsBuilder", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x2Du, "Metadata '%s' exceeded maximum size", (const char *)couponMetadata[v22]);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
      v26 = (bdReferencable *)playerId->gap38;
      goto LABEL_134;
    }
  }
LABEL_5:
  if ( !skuIds || !v58 || !numSkuIds )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/purchase/bdMarketplacePurchaseParamsBuilder", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x36u, "Failed to build purchase parameters due to no SKU data being provided.");
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
    v26 = (bdReferencable *)playerId->gap38;
LABEL_134:
    bdReferencable::~bdReferencable(v26);
    return 0;
  }
  bdTaskParams::addContext(params, context);
  if ( !v21 )
    bdTaskParams::addContextUser(params, playerId);
  LOBYTE(v23) = 1;
  if ( params->ensureCapacity(params, 4u, v23) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v25 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
    params->m_serializeOk = v25;
  }
  for ( i = 0; i < numSkuIds; ++i )
  {
    LOBYTE(v24) = 1;
    if ( params->ensureCapacity(params, 4u, v24) )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v28 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, skuIds[i]);
      params->m_serializeOk = v28;
    }
  }
  LOBYTE(v24) = 1;
  if ( params->ensureCapacity(params, 4u, v24) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v30 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
    params->m_serializeOk = v30;
  }
  v31 = 0;
  v32 = v58;
  do
  {
    LOBYTE(v29) = 1;
    if ( params->ensureCapacity(params, 4u, v29) )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v33 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, *(_DWORD *)(v32 + 4i64 * v31));
      params->m_serializeOk = v33;
    }
    ++v31;
  }
  while ( v31 < numSkuIds );
  LOBYTE(v29) = 1;
  if ( params->ensureCapacity(params, 1u, v29) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v35 = params->m_serializeOk && bdByteBuffer::writeBool(params->m_buffer.m_ptr, ignoreEntitlements);
    params->m_serializeOk = v35;
  }
  LOBYTE(v34) = 1;
  if ( params->ensureCapacity(params, 4u, v34) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v36 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
    params->m_serializeOk = v36;
  }
  v58 = 0i64;
  bdUserAccountID::bdUserAccountID(&v62, &v58);
  for ( j = 0; j < numSkuIds; ++j )
  {
    if ( couponToWhom )
      v38 = (bdUserAccountID *)&couponToWhom[j];
    else
      v38 = &v62;
    bdTaskParams::addContextUser(params, v38);
  }
  LOBYTE(v39) = 1;
  if ( params->ensureCapacity(params, 4u, v39) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v41 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, maxNumResults);
    params->m_serializeOk = v41;
  }
  LOBYTE(v40) = 1;
  v42 = params->ensureCapacity(params, 4u, v40);
  if ( couponMetadata )
  {
    if ( v42 )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v44 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
      params->m_serializeOk = v44;
    }
    v45 = numSkuIds;
    do
    {
      bdBufferParams::addBlob(params, *v18++, *v19++);
      --v45;
    }
    while ( v45 );
  }
  else if ( v42 )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v46 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, 0);
    params->m_serializeOk = v46;
  }
  LOBYTE(v43) = 1;
  if ( params->ensureCapacity(params, 1u, v43) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v48 = params->m_serializeOk && bdByteBuffer::writeUByte8(params->m_buffer.m_ptr, customSourceType);
    params->m_serializeOk = v48;
  }
  v49 = v59;
  LOBYTE(v47) = 1;
  v50 = params->ensureCapacity(params, 4u, v47);
  if ( v49 )
  {
    if ( v50 )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v52 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
      params->m_serializeOk = v52;
    }
    for ( k = 0; k < numSkuIds; ++k )
    {
      LOBYTE(v51) = 1;
      if ( params->ensureCapacity(params, 4u, v51) )
      {
        if ( params->m_isWritingArray )
          --params->m_arrayWriteCount;
        v54 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, v49[k]);
        params->m_serializeOk = v54;
      }
    }
  }
  else if ( v50 )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v55 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, 0);
    params->m_serializeOk = v55;
  }
  bdTaskParams::bindResults(params, results, maxNumResults);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v62.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v62.gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return 1;
}

/*
==============
bdMarketplacePurchaseParamsBuilder::build
==============
*/
char bdMarketplacePurchaseParamsBuilder::build(bdTaskParams *params, const char *context, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned int customSourceType, const unsigned int *discountIds)
{
  const void **v18; 
  const unsigned int *v19; 
  const bdUserAccountID *v20; 
  bool v21; 
  unsigned __int8 v22; 
  _BOOL8 v23; 
  _BOOL8 v24; 
  bool v25; 
  bdReferencable *v26; 
  unsigned __int8 i; 
  bool v28; 
  _BOOL8 v29; 
  bool v30; 
  unsigned __int8 v31; 
  unsigned __int64 v32; 
  bool v33; 
  _BOOL8 v34; 
  bool v35; 
  bool v36; 
  unsigned __int8 j; 
  bdUserAccountID *v38; 
  _BOOL8 v39; 
  _BOOL8 v40; 
  bool v41; 
  bool v42; 
  _BOOL8 v43; 
  bool v44; 
  __int64 v45; 
  bool v46; 
  _BOOL8 v47; 
  bool v48; 
  const unsigned int *v49; 
  bool v50; 
  _BOOL8 v51; 
  bool v52; 
  unsigned __int8 k; 
  bool v54; 
  bool v55; 
  unsigned __int64 v58; 
  const unsigned int *v59; 
  __int64 v60; 
  const bdUserAccountID *v61; 
  bdUserAccountID v62; 
  bdUserAccountID v63; 

  v60 = -2i64;
  v61 = playerId;
  v58 = (unsigned __int64)purchasedQuantities;
  v18 = (const void **)couponMetadata;
  v19 = metadataSize;
  v59 = discountIds;
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x9Au, "Cannot purchase Skus with a NULL skuIds");
  bdHandleAssert(purchasedQuantities != NULL, "(purchasedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x9Bu, "Cannot purchase Skus with a NULL purchasedQuantities");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0x9Cu, "Cannot purchase Skus with zero numSkuIds");
  bdUserAccountID::bdUserAccountID(&v63);
  v21 = bdUserAccountID::operator==((bdUserAccountID *)playerId, v20);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v63.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v63.gap38);
  if ( couponMetadata )
  {
    v22 = 0;
    if ( numSkuIds )
    {
      while ( metadataSize[v22] <= 0x40 )
      {
        if ( ++v22 >= numSkuIds )
          goto LABEL_5;
      }
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/purchase/bdMarketplacePurchaseParamsBuilder", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0xA7u, "Metadata '%s' exceeded maximum size", (const char *)couponMetadata[v22]);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
      v26 = (bdReferencable *)playerId->gap38;
      goto LABEL_134;
    }
  }
LABEL_5:
  if ( !skuIds || !v58 || !numSkuIds )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplace/purchase/bdMarketplacePurchaseParamsBuilder", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\purchase\\bdmarketplacepurchaseparamsbuilder.cpp", "bdMarketplacePurchaseParamsBuilder::build", 0xB0u, "Failed to build purchase parameters due to no SKU data being provided.");
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
    v26 = (bdReferencable *)playerId->gap38;
LABEL_134:
    bdReferencable::~bdReferencable(v26);
    return 0;
  }
  bdTaskParams::addContext(params, context);
  if ( !v21 )
    bdTaskParams::addContextUser(params, playerId);
  LOBYTE(v23) = 1;
  if ( params->ensureCapacity(params, 4u, v23) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v25 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
    params->m_serializeOk = v25;
  }
  for ( i = 0; i < numSkuIds; ++i )
  {
    LOBYTE(v24) = 1;
    if ( params->ensureCapacity(params, 4u, v24) )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v28 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, skuIds[i]);
      params->m_serializeOk = v28;
    }
  }
  LOBYTE(v24) = 1;
  if ( params->ensureCapacity(params, 4u, v24) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v30 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
    params->m_serializeOk = v30;
  }
  v31 = 0;
  v32 = v58;
  do
  {
    LOBYTE(v29) = 1;
    if ( params->ensureCapacity(params, 4u, v29) )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v33 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, *(_DWORD *)(v32 + 4i64 * v31));
      params->m_serializeOk = v33;
    }
    ++v31;
  }
  while ( v31 < numSkuIds );
  LOBYTE(v29) = 1;
  if ( params->ensureCapacity(params, 1u, v29) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v35 = params->m_serializeOk && bdByteBuffer::writeBool(params->m_buffer.m_ptr, ignoreEntitlements);
    params->m_serializeOk = v35;
  }
  LOBYTE(v34) = 1;
  if ( params->ensureCapacity(params, 4u, v34) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v36 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
    params->m_serializeOk = v36;
  }
  v58 = 0i64;
  bdUserAccountID::bdUserAccountID(&v62, &v58);
  for ( j = 0; j < numSkuIds; ++j )
  {
    if ( couponToWhom )
      v38 = (bdUserAccountID *)&couponToWhom[j];
    else
      v38 = &v62;
    bdTaskParams::addContextUser(params, v38);
  }
  LOBYTE(v39) = 1;
  if ( params->ensureCapacity(params, 4u, v39) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v41 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, maxNumResults);
    params->m_serializeOk = v41;
  }
  LOBYTE(v40) = 1;
  v42 = params->ensureCapacity(params, 4u, v40);
  if ( couponMetadata )
  {
    if ( v42 )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v44 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
      params->m_serializeOk = v44;
    }
    v45 = numSkuIds;
    do
    {
      bdBufferParams::addBlob(params, *v18++, *v19++);
      --v45;
    }
    while ( v45 );
  }
  else if ( v42 )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v46 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, 0);
    params->m_serializeOk = v46;
  }
  LOBYTE(v43) = 1;
  if ( params->ensureCapacity(params, 4u, v43) )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v48 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, customSourceType);
    params->m_serializeOk = v48;
  }
  v49 = v59;
  LOBYTE(v47) = 1;
  v50 = params->ensureCapacity(params, 4u, v47);
  if ( v49 )
  {
    if ( v50 )
    {
      if ( params->m_isWritingArray )
        --params->m_arrayWriteCount;
      v52 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, numSkuIds);
      params->m_serializeOk = v52;
    }
    for ( k = 0; k < numSkuIds; ++k )
    {
      LOBYTE(v51) = 1;
      if ( params->ensureCapacity(params, 4u, v51) )
      {
        if ( params->m_isWritingArray )
          --params->m_arrayWriteCount;
        v54 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, v49[k]);
        params->m_serializeOk = v54;
      }
    }
  }
  else if ( v50 )
  {
    if ( params->m_isWritingArray )
      --params->m_arrayWriteCount;
    v55 = params->m_serializeOk && bdByteBuffer::writeUInt32(params->m_buffer.m_ptr, 0);
    params->m_serializeOk = v55;
  }
  bdTaskParams::bindResults(params, results, maxNumResults);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v62.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v62.gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return 1;
}

