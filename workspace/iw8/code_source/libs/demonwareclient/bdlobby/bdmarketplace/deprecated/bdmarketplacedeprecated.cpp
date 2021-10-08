/*
==============
bdMarketplace::getItemsPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getItemsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceItem *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *itemIds, const unsigned int numItemIds, const char *storeVersion)
{
  return ?getItemsPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceItem@@II_NQEBIIPEBD@Z(this, result, results, pageNum, itemsPerPage, showAll, itemIds, numItemIds, storeVersion);
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdSteamOrderIdResultV2 *a4)
{
  return ?purchaseOnSteamInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdSteamOrderIdResultV2@@@Z(this, result, transactionId, a4);
}

/*
==============
bdMarketplace::transferCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::transferCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *transferToIds, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceAuditLogResult *a7)
{
  return ?transferCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBVbdUserAccountID@@QEAY0BJ@$$CBDEPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, transferToIds, couponIds, numCouponIds, a7);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned __int8 numSkuIds, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned int maxNumResults, bdMarketplacePurchaseSkusResult *a8, const unsigned int *discountIds, const bdUserAccountID *couponRecipients, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDEQEBI1IPEAVbdMarketplacePurchaseSkusResult@@1QEBVbdUserAccountID@@QEAPEBE1E_N@Z(this, result, clientTransactionId, numSkuIds, skuIds, purchasedQuantities, maxNumResults, a8, discountIds, couponRecipients, couponMetadata, metadataSize, customSourceType, ignoreEntitlements);
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdExchangeTransactionResultV2 *a4)
{
  return ?purchaseOnSteamFinalize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, a4);
}

/*
==============
bdMarketplace::getLimitedSkuQuantites
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getLimitedSkuQuantites(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceLimitedSkuQuantity *results, const unsigned int *skuIds, const unsigned int numSkuIds)
{
  return ?getLimitedSkuQuantites@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceLimitedSkuQuantity@@QEBII@Z(this, result, results, skuIds, numSkuIds);
}

/*
==============
bdMarketplace::psnRevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::psnRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeRevokeResult *revokeResult)
{
  return ?psnRevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeRevokeResult@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, revokeResult);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrder *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrder *couponOrders, bdMarketplacePurchaseSkusResultV2 *a9, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@EQEBVbdMarketplacePurchaseSkusSkuOrder@@EQEBVbdMarketplacePurchaseSkusCouponOrder@@PEAVbdMarketplacePurchaseSkusResultV2@@E_N@Z(this, result, clientTransactionId, buyer, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements);
}

/*
==============
bdMarketplace::getCouponInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getCouponInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned __int16 maxNumResults, const unsigned __int8 callType)
{
  return ?getCouponInventory@bdMarketplace@@AEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventory@@GE@Z(this, result, results, maxNumResults, callType);
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  return ?xboxOneTransferConsumable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000VbdUserAccountID@@PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, delegationToken, consumablePath, productID, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::purchaseSkusForPlayer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkusForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const unsigned int *discountIds)
{
  return ?purchaseSkusForPlayer@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEBI1E_NQEBV3@QEAVbdMarketplaceCouponInventory@@IQEAPEBE1E1@Z(this, result, playerId, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, results, maxNumResults, couponMetadata, metadataSize, customSourceType, discountIds);
}

/*
==============
bdMarketplace::purchaseSkusForPlayer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkusForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds)
{
  return ?purchaseSkusForPlayer@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEBI1E@Z(this, result, playerId, skuIds, purchasedQuantities, numSkuIds);
}

/*
==============
bdMarketplace::xbox360RevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xbox360RevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeRevokeResult *revokeResult)
{
  return ?xbox360RevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdExchangeRevokeResult@@@Z(this, result, transactionId, offerId, revokeResult);
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdSteamOrderIdResult *a4)
{
  return ?purchaseOnSteamInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdSteamOrderIdResult@@@Z(this, result, transactionId, a4);
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  return ?psnProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000VbdUserAccountID@@PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::setPlayersBalances
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::setPlayersBalances(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, unsigned __int8 numPlayerCurrencies)
{
  return ?setPlayersBalances@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplacePlayerCurrency@@E@Z(this, result, playerCurrencies, numPlayerCurrencies);
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, const bdUserAccountID *couponToWhom, bdSteamOrderIdResult *a6)
{
  return ?purchaseOnSteamInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIVbdUserAccountID@@PEAVbdSteamOrderIdResult@@@Z(this, result, transactionId, fpSkuId, couponToWhom, a6);
}

/*
==============
bdMarketplace::consumeInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::consumeInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int *itemIds, const unsigned int *consumedQuantities, const unsigned __int16 numItems, bdMarketplaceAuditLogResult *a7)
{
  return ?consumeInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBI1GPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, itemIds, consumedQuantities, numItems, a7);
}

/*
==============
bdMarketplace::consumeInventoryItem
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::consumeInventoryItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int itemId, const unsigned int consumedQuantity)
{
  return ?consumeInventoryItem@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@II@Z(this, result, playerId, itemId, consumedQuantity);
}

/*
==============
bdMarketplace::setPlayersBalancesV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::setPlayersBalancesV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, const unsigned int customSourceType, bdMarketplaceAuditLogResult *a6)
{
  return ?setPlayersBalancesV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplacePlayerCurrency@@IIPEAVbdMarketplaceAuditLogResult@@@Z(this, result, playerCurrencies, numPlayerCurrencies, customSourceType, a6);
}

/*
==============
bdMarketplace::setPlayersBalancesV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::setPlayersBalancesV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, bdMarketplaceAuditLogResult *a5)
{
  return ?setPlayersBalancesV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplacePlayerCurrency@@IPEAVbdMarketplaceAuditLogResult@@@Z(this, result, playerCurrencies, numPlayerCurrencies, a5);
}

/*
==============
bdMarketplace::transferCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::transferCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *transferToIds, const char (*couponIds)[25], const unsigned __int8 numCouponIds)
{
  return ?transferCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@QEAY0BJ@$$CBDE@Z(this, result, transferToIds, couponIds, numCouponIds);
}

/*
==============
bdMarketplace::pawnItem
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::pawnItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int itemID)
{
  return ?pawnItem@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, itemID);
}

/*
==============
bdMarketplace::xbox360RevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xbox360RevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeRevokeResultV2 *revokeResult)
{
  return ?xbox360RevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdExchangeRevokeResultV2@@@Z(this, result, transactionId, offerId, revokeResult);
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeTransactionResult *transactionResult)
{
  return ?psnProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, transactionResult);
}

/*
==============
bdMarketplace::getSkusPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *skuIds, const unsigned int numSkuIds)
{
  return ?getSkusPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceSku@@II_NQEBII@Z(this, result, results, pageNum, itemsPerPage, showAll, skuIds, numSkuIds);
}

/*
==============
bdMarketplace::getCouponInventoryV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getCouponInventoryV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV3 *results, const unsigned __int16 maxNumResults)
{
  return ?getCouponInventoryV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventoryV3@@G@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::getInventoryPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventoryPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventory *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  return ?getInventoryPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceInventory@@II@Z(this, result, results, pageNum, itemsPerPage);
}

/*
==============
bdMarketplace::pawnItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::pawnItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceItemToPawnV2 *itemsToPawn, const unsigned int numItemsToPawn, bdMarketplaceAuditLogResult *a6)
{
  return ?pawnItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBVbdMarketplaceItemToPawnV2@@IPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, itemsToPawn, numItemsToPawn, a6);
}

/*
==============
bdMarketplace::getProductsPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getProductsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProductV2 *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *productIds, const unsigned __int8 numProductIds, const char *storeVersion)
{
  return ?getProductsPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceProductV2@@IIQEBIEPEBD@Z(this, result, results, pageNum, itemsPerPage, productIds, numProductIds, storeVersion);
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeTransactionResult *transactionResult)
{
  return ?xboxOneProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, delegationToken, productID, transactionResult);
}

/*
==============
bdMarketplace::consumeInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::consumeInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventoryItemQuantity *consumedQuantities, const unsigned __int16 numEntries)
{
  return ?consumeInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMarketplaceInventoryItemQuantity@@G@Z(this, result, consumedQuantities, numEntries);
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 orderId, const unsigned int appId, const bool isAuthorized, bdExchangeTransactionResultV2 *a7)
{
  return ?purchaseOnSteamFinalize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KI_NPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, orderId, appId, isAuthorized, a7);
}

/*
==============
bdMarketplace::putInventoryItemData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putInventoryItemData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventoryItemData *inventoryItemData)
{
  return ?putInventoryItemData@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdMarketplaceInventoryItemData@@@Z(this, result, inventoryItemData);
}

/*
==============
bdMarketplace::getItemsPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getItemsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceItem *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *itemIds, const unsigned int numItemIds)
{
  return ?getItemsPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceItem@@II_NQEBII@Z(this, result, results, pageNum, itemsPerPage, showAll, itemIds, numItemIds);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBI0E_N@Z(this, result, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements);
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, bdExchangeTransactionResult *transactionResult)
{
  return ?xboxOneTransferConsumable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, delegationToken, consumablePath, productID, transactionResult);
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xboxOneTransferConsumable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, delegationToken, consumablePath, productID, transactionResult);
}

/*
==============
bdMarketplace::steamRevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::steamRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeRevokeResultV2 *revokeResult)
{
  return ?steamRevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdExchangeRevokeResultV2@@@Z(this, result, transactionId, durableAppId, revokeResult);
}

/*
==============
bdMarketplace::getSkusPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSkuV3 *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *skuIds, const unsigned int numSkuIds, const unsigned __int8 *skuTypes, const unsigned int numSkuTypes, const char *storeVersion)
{
  return ?getSkusPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceSkuV3@@II_NQEBIIQEBEIPEBD@Z(this, result, results, pageNum, itemsPerPage, showAll, skuIds, numSkuIds, skuTypes, numSkuTypes, storeVersion);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, bdMarketplacePurchaseSkusResultV4 *a7, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, const unsigned __int8 numMetadataEntries, const bdMarketplaceMetadata *metadata, const unsigned int customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@EQEBVbdMarketplacePurchaseSkusSkuOrderV2@@PEAVbdMarketplacePurchaseSkusResultV4@@EQEBVbdMarketplacePurchaseSkusCouponOrderV2@@EQEBVbdMarketplaceMetadata@@I_N@Z(this, result, clientTransactionId, buyer, numSkuOrders, skuOrders, a7, numCouponOrders, couponOrders, numMetadataEntries, metadata, customSourceType, ignoreEntitlements);
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeTransactionResult *a5)
{
  return ?steamProcessDurable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, durableAppId, a5);
}

/*
==============
bdMarketplace::getPlayersBalancesV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayersBalancesV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdUserAccountID *playerIds, unsigned int numPlayerIds, bdMarketplacePlayerCurrency *results, const unsigned int maxNumResults)
{
  return ?getPlayersBalancesV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@IQEAVbdMarketplacePlayerCurrency@@I@Z(this, result, playerIds, numPlayerIds, results, maxNumResults);
}

/*
==============
bdMarketplace::pawnItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::pawnItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceItemToPawn *itemsToPawn, const unsigned int numItemsToPawn, bdMarketplaceAuditLogResult *a6)
{
  return ?pawnItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBVbdMarketplaceItemToPawn@@IPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, itemsToPawn, numItemsToPawn, a6);
}

/*
==============
bdMarketplace::steamRevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::steamRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeRevokeResult *revokeResult)
{
  return ?steamRevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdExchangeRevokeResult@@@Z(this, result, transactionId, durableAppId, revokeResult);
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdExchangeTransactionResult *a4)
{
  return ?purchaseOnSteamFinalize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, a4);
}

/*
==============
bdMarketplace::consumeInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::consumeInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *itemIds, const unsigned int *consumedQuantities, const unsigned __int16 numItems)
{
  return ?consumeInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBI0G@Z(this, result, itemIds, consumedQuantities, numItems);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, bdMarketplacePurchaseSkusResultV4 *a9, const unsigned int customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@EQEBVbdMarketplacePurchaseSkusSkuOrderV2@@EQEBVbdMarketplacePurchaseSkusCouponOrderV2@@PEAVbdMarketplacePurchaseSkusResultV4@@I_N@Z(this, result, clientTransactionId, buyer, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements);
}

/*
==============
bdMarketplace::getPlayersBalances
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayersBalances(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdUserAccountID *playerIds, unsigned int numPlayerIds, bdMarketplacePlayerCurrency *results, const unsigned int maxNumResults)
{
  return ?getPlayersBalances@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@IQEAVbdMarketplacePlayerCurrency@@I@Z(this, result, playerIds, numPlayerIds, results, maxNumResults);
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xboxOneProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00VbdUserAccountID@@PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, delegationToken, productID, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::getSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSku *results, const unsigned __int16 maxNumResults, const bool showAll, const unsigned int *skuIds, const unsigned __int8 numSkuIds)
{
  return ?getSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceSku@@G_NQEBIE@Z(this, result, results, maxNumResults, showAll, skuIds, numSkuIds);
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, bdSteamOrderIdResultV2 *a5)
{
  return ?purchaseOnSteamInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdSteamOrderIdResultV2@@@Z(this, result, transactionId, fpSkuId, a5);
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xboxOneTransferConsumable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000VbdUserAccountID@@PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, delegationToken, consumablePath, productID, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::pawnItem
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::pawnItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int itemID, const bdMarketplacePawnChoice *pawnChoices, const unsigned __int8 numPawnChoices)
{
  return ?pawnItem@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEBVbdMarketplacePawnChoice@@E@Z(this, result, itemID, pawnChoices, numPawnChoices);
}

/*
==============
bdMarketplace::putPlayersInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putPlayersInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventory *inventoryItems, const unsigned __int8 numInventoryItems, const bool checkItemLimits)
{
  return ?putPlayersInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMarketplaceInventory@@E_N@Z(this, result, inventoryItems, numInventoryItems, checkItemLimits);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, bdMarketplacePurchaseSkusResultV3 *a9, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@EQEBVbdMarketplacePurchaseSkusSkuOrderV2@@EQEBVbdMarketplacePurchaseSkusCouponOrderV2@@PEAVbdMarketplacePurchaseSkusResultV3@@E_N@Z(this, result, clientTransactionId, buyer, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements);
}

/*
==============
bdMarketplace::redeemCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::redeemCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, char (*couponIds)[25], unsigned __int8 numCouponIds)
{
  return ?redeemCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAY0BJ@DE@Z(this, result, couponIds, numCouponIds);
}

/*
==============
bdMarketplace::putInventoryItem
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putInventoryItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventory *inventoryItem)
{
  return ?putInventoryItem@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdMarketplaceInventory@@@Z(this, result, inventoryItem);
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?psnProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, transactionResult);
}

/*
==============
bdMarketplace::getCouponInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getCouponInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned __int16 maxNumResults)
{
  return ?getCouponInventory@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventory@@G@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::redeemCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::redeemCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceAuditLogResult *a6)
{
  return ?redeemCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAY0BJ@$$CBDEPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, couponIds, numCouponIds, a6);
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xbox360ProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, offerId, transactionResult);
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?psnProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000VbdUserAccountID@@PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *a6)
{
  return ?steamProcessDurable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIVbdUserAccountID@@PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, durableAppId, couponToWhom, a6);
}

/*
==============
bdMarketplace::deposit
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::deposit(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, unsigned __int8 numPlayerCurrencies)
{
  return ?deposit@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplacePlayerCurrency@@E@Z(this, result, playerCurrencies, numPlayerCurrencies);
}

/*
==============
bdMarketplace::giftSkuTransaction
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::giftSkuTransaction(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *transactionID, const unsigned int *skuIds, const unsigned int *giftedQuantities, const unsigned __int8 numSkuIds, const unsigned __int64 recieverPlayerID)
{
  return ?giftSkuTransaction@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBEQEBI1E_K@Z(this, result, transactionID, skuIds, giftedQuantities, numSkuIds, recieverPlayerID);
}

/*
==============
bdMarketplace::getProducts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getProducts(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProduct *results, const unsigned __int16 maxNumResults)
{
  return ?getProducts@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceProduct@@G@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::giftSkuTransaction
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::giftSkuTransaction(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *transactionId, const unsigned int *skuIds, const unsigned int *giftedQuantities, const unsigned __int8 numSkuIds, const unsigned __int64 recieverPlayerId, const unsigned __int8 customSourceType)
{
  return ?giftSkuTransaction@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBEQEBI1E_KE@Z(this, result, transactionId, skuIds, giftedQuantities, numSkuIds, recieverPlayerId, customSourceType);
}

/*
==============
bdMarketplace::putInventoryItemsData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putInventoryItemsData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventoryItemData *inventoryItemsData, const unsigned __int8 numInventoryItemsData)
{
  return ?putInventoryItemsData@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMarketplaceInventoryItemData@@E@Z(this, result, inventoryItemsData, numInventoryItemsData);
}

/*
==============
bdMarketplace::getProducts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getProducts(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProduct *results, const unsigned __int16 maxNumResults, const unsigned int *productIds, const unsigned __int8 numProductIds)
{
  return ?getProducts@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceProduct@@GQEBIE@Z(this, result, results, maxNumResults, productIds, numProductIds);
}

/*
==============
bdMarketplace::putPlayersInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putPlayersInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceInventory *inventoryItems, const unsigned __int8 numInventoryItems, bdMarketplaceAuditLogResult *a6, const bool checkItemLimits)
{
  return ?putPlayersInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBVbdMarketplaceInventory@@EPEAVbdMarketplaceAuditLogResult@@_N@Z(this, result, clientTransactionId, inventoryItems, numInventoryItems, a6, checkItemLimits);
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  return ?xboxOneProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00VbdUserAccountID@@PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, delegationToken, productID, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeTransactionResult *transactionResult)
{
  return ?xbox360ProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, offerId, transactionResult);
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, bdSteamOrderIdResult *a5)
{
  return ?purchaseOnSteamInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdSteamOrderIdResult@@@Z(this, result, transactionId, fpSkuId, a5);
}

/*
==============
bdMarketplace::psnRevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::psnRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeRevokeResultV2 *revokeResult)
{
  return ?psnRevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeRevokeResultV2@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, revokeResult);
}

/*
==============
bdMarketplace::claimCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::claimCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults)
{
  return ?claimCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAY0BJ@$$CBDEQEAVbdMarketplaceCouponInventory@@I@Z(this, result, couponIds, numCouponIds, results, maxNumResults);
}

/*
==============
bdMarketplace::getInventoryPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventoryPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventory *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *itemIDs, const unsigned __int16 numItems)
{
  return ?getInventoryPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceInventory@@IIQEBIG@Z(this, result, results, pageNum, itemsPerPage, itemIDs, numItems);
}

/*
==============
bdMarketplace::xboxOneRevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeRevokeResult *revokeResult)
{
  return ?xboxOneRevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00PEAVbdExchangeRevokeResult@@@Z(this, result, transactionId, delegationToken, productID, revokeResult);
}

/*
==============
bdMarketplace::getInventoryItemInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventoryItemInfo(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetInventoryItemInfoRequest *request, bdGetInventoryItemInfoResponse *response)
{
  return ?getInventoryItemInfo@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetInventoryItemInfoRequest@@PEAVbdGetInventoryItemInfoResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  return ?xbox360ProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0VbdUserAccountID@@PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, offerId, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xbox360ProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0VbdUserAccountID@@PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, offerId, couponToWhom, transactionResult);
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *a6)
{
  return ?steamProcessDurable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIVbdUserAccountID@@PEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, durableAppId, couponToWhom, a6);
}

/*
==============
bdMarketplace::getBalance
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getBalance(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCurrency *results, const unsigned int maxNumResults)
{
  return ?getBalance@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCurrency@@I@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::getPendingCouponInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPendingCouponInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned __int16 maxNumResults)
{
  return ?getPendingCouponInventory@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventory@@G@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::deleteSpecifiedCoupons
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::deleteSpecifiedCoupons(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceAuditLogResult *a6)
{
  return ?deleteSpecifiedCoupons@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAY0BJ@$$CBDEPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, couponIds, numCouponIds, a6);
}

/*
==============
bdMarketplace::getProductsPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getProductsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProduct *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *productIds, const unsigned __int8 numProductIds, const char *storeVersion)
{
  return ?getProductsPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceProduct@@IIQEBIEPEBD@Z(this, result, results, pageNum, itemsPerPage, productIds, numProductIds, storeVersion);
}

/*
==============
bdMarketplace::claimCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::claimCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, const unsigned int maxNumResults, bdMarketplaceCouponInventoryResultT<bdMarketplaceCouponInventoryV4> *a7)
{
  return ?claimCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAY0BJ@$$CBDEIPEAV?$bdMarketplaceCouponInventoryResultT@VbdMarketplaceCouponInventoryV4@@@@@Z(this, result, clientTransactionId, couponIds, numCouponIds, maxNumResults, a7);
}

/*
==============
bdMarketplace::deleteSpecifiedCoupons
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::deleteSpecifiedCoupons(bdMarketplace *this, bdReference<bdRemoteTask> *result, char (*couponIds)[25], unsigned __int8 numCouponIds)
{
  return ?deleteSpecifiedCoupons@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAY0BJ@DE@Z(this, result, couponIds, numCouponIds);
}

/*
==============
bdMarketplace::claimCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::claimCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, const unsigned int maxNumResults, bdMarketplaceCouponInventoryResultT<bdMarketplaceCouponInventory> *a7)
{
  return ?claimCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAY0BJ@$$CBDEIPEAV?$bdMarketplaceCouponInventoryResultT@VbdMarketplaceCouponInventory@@@@@Z(this, result, clientTransactionId, couponIds, numCouponIds, maxNumResults, a7);
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, const bdUserAccountID *couponToWhom, bdSteamOrderIdResultV2 *a6)
{
  return ?purchaseOnSteamInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIVbdUserAccountID@@PEAVbdSteamOrderIdResultV2@@@Z(this, result, transactionId, fpSkuId, couponToWhom, a6);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, bdMarketplacePurchaseSkusResultV2 *a9, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@EQEBVbdMarketplacePurchaseSkusSkuOrderV2@@EQEBVbdMarketplacePurchaseSkusCouponOrderV2@@PEAVbdMarketplacePurchaseSkusResultV2@@E_N@Z(this, result, clientTransactionId, buyer, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const unsigned int *discountIds)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBI0E_NQEBVbdUserAccountID@@QEAVbdMarketplaceCouponInventory@@IQEAPEBE0E0@Z(this, result, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, results, maxNumResults, couponMetadata, metadataSize, customSourceType, discountIds);
}

/*
==============
bdMarketplace::getBalanceV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getBalanceV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCurrency *results, const unsigned int maxNumResults)
{
  return ?getBalanceV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCurrency@@I@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::pawnItem
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::pawnItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int itemID, const bdMarketplacePawnChoice *pawnChoices, const unsigned __int8 numPawnChoices)
{
  return ?pawnItem@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIQEBVbdMarketplacePawnChoice@@E@Z(this, result, clientTransactionId, itemID, pawnChoices, numPawnChoices);
}

/*
==============
bdMarketplace::getInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventory *results, const unsigned __int16 maxNumResults)
{
  return ?getInventory@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceInventory@@G@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, bdMarketplaceCouponInventoryResultT<bdMarketplaceCouponInventory> *a13)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBI1E_NQEBVbdUserAccountID@@IQEAPEBE1EPEAV?$bdMarketplaceCouponInventoryResultT@VbdMarketplaceCouponInventory@@@@@Z(this, result, clientTransactionId, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, maxNumResults, couponMetadata, metadataSize, customSourceType, a13);
}

/*
==============
bdMarketplace::getSkusPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSkuV2 *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *skuIds, const unsigned int numSkuIds, const unsigned __int8 *skuTypes, const unsigned int numSkuTypes, const char *storeVersion)
{
  return ?getSkusPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceSkuV2@@II_NQEBIIQEBEIPEBD@Z(this, result, results, pageNum, itemsPerPage, showAll, skuIds, numSkuIds, skuTypes, numSkuTypes, storeVersion);
}

/*
==============
bdMarketplace::getInventoryItemInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventoryItemInfo(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventoryItemInfo *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *itemIds, const unsigned int numItemIds)
{
  return ?getInventoryItemInfo@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceInventoryItemInfo@@IIQEBII@Z(this, result, results, pageNum, itemsPerPage, itemIds, numItemIds);
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 orderId, const unsigned int appId, const bool isAuthorized, bdExchangeTransactionResult *a7)
{
  return ?purchaseOnSteamFinalize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KI_NPEAVbdExchangeTransactionResult@@@Z(this, result, transactionId, orderId, appId, isAuthorized, a7);
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds)
{
  return ?purchaseSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBI0E@Z(this, result, skuIds, purchasedQuantities, numSkuIds);
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeTransactionResultV2 *a5)
{
  return ?steamProcessDurable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, durableAppId, a5);
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xboxOneProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, delegationToken, productID, transactionResult);
}

/*
==============
bdMarketplace::xboxOneRevokeProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::xboxOneRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeRevokeResultV2 *revokeResult)
{
  return ?xboxOneRevokeProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00PEAVbdExchangeRevokeResultV2@@@Z(this, result, transactionId, delegationToken, productID, revokeResult);
}

/*
==============
bdMarketplace::putInventoryItemsData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putInventoryItemsData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceInventoryItemData *inventoryItemsData, const unsigned __int8 numInventoryItemsData, bdMarketplaceAuditLogResult *a6)
{
  return ?putInventoryItemsData@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBVbdMarketplaceInventoryItemData@@EPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, inventoryItemsData, numInventoryItemsData, a6);
}

/*
==============
bdMarketplace::purchaseSkusForPlayer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseSkusForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements)
{
  return ?purchaseSkusForPlayer@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEBI1E_N@Z(this, result, playerId, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements);
}

/*
==============
bdMarketplace::claimCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::claimCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults)
{
  __int64 v6; 
  const char *v7; 
  _BOOL8 v10; 
  bool v11; 
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams params; 

  LOBYTE(v6) = numCouponIds;
  v7 = (const char *)couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x7ABu, "Cannot call claimCoupon() with a NULL couponIds");
  bdHandleAssert((_BYTE)v6 != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x7ACu, "Cannot call claimCoupon() with zero numCouponIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x7ADu, "Cannot call claimCoupon() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x7AEu, "Cannot call claimCoupon() with zero maxNumResults");
  if ( v7 && (_BYTE)v6 && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x96u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v6 = (unsigned __int8)v6;
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v6), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdBufferParams::addString(&params, v7, 0x19ui64);
      v7 += 25;
      --v6;
    }
    while ( v6 );
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::claimCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::claimCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, const unsigned int maxNumResults, bdMarketplaceCouponInventoryResultT<bdMarketplaceCouponInventoryV4> *resulta)
{
  const char *v7; 
  __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  bdTaskParams params; 

  v7 = (const char *)couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x87Eu, "Cannot call claimCoupon() with a NULL couponIds");
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x87Fu, "Cannot call claimCoupon() with zero numCouponIds");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::claimCoupon", 0x880u, "Cannot call claimCoupon() with zero maxNumResults");
  if ( v7 && numCouponIds && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x64u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    v11 = numCouponIds;
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdBufferParams::addString(&params, v7, 0x19ui64);
      v7 += 25;
      --v11;
    }
    while ( v11 );
    LOBYTE(v14) = 1;
    if ( params.ensureCapacity(&params, 4u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::consumeInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::consumeInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int *itemIds, const unsigned int *consumedQuantities, const unsigned __int16 numItems, bdMarketplaceAuditLogResult *resulta)
{
  unsigned __int16 v11; 
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  unsigned __int16 i; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  bool v19; 
  bdTaskParams params; 

  v11 = 0;
  result->m_ptr = NULL;
  bdHandleAssert(itemIds != NULL, "(itemIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::consumeInventoryItems", 0x70Au, "Cannot call consumeInventoryItems() with a NULL itemIds");
  bdHandleAssert(consumedQuantities != NULL, "(consumedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::consumeInventoryItems", 0x70Bu, "Cannot call consumeInventoryItems() with a NULL consumedQuantities");
  bdHandleAssert(numItems != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::consumeInventoryItems", 0x70Cu, "Cannot call consumeInventoryItems() with zero numItems");
  if ( itemIds && consumedQuantities && numItems )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x60u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    for ( i = 0; i < numItems; ++i )
    {
      LOBYTE(v13) = 1;
      if ( params.ensureCapacity(&params, 4u, v13) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemIds[i]), params.m_serializeOk = 1, !v16) )
          params.m_serializeOk = 0;
      }
    }
    LOBYTE(v13) = 1;
    if ( params.ensureCapacity(&params, 4u, v13) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v18) )
        params.m_serializeOk = 0;
    }
    do
    {
      LOBYTE(v17) = 1;
      if ( params.ensureCapacity(&params, 4u, v17) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, consumedQuantities[v11]), params.m_serializeOk = 1, !v19) )
          params.m_serializeOk = 0;
      }
      ++v11;
    }
    while ( v11 < numItems );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::deleteSpecifiedCoupons
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::deleteSpecifiedCoupons(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceAuditLogResult *resulta)
{
  const char *v6; 
  _BOOL8 v10; 
  bool v11; 
  __int64 v12; 
  bdTaskParams params; 

  v6 = (const char *)couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::deleteSpecifiedCoupons", 0x8F2u, "Cannot call deleteSpecifiedCoupons() with a NULL couponIds");
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::deleteSpecifiedCoupons", 0x8F3u, "Cannot call deleteSpecifiedCoupons() with zero numCouponIds");
  if ( v6 && numCouponIds )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x5Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    v12 = numCouponIds;
    do
    {
      bdBufferParams::addString(&params, v6, 0x19ui64);
      v6 += 25;
      --v12;
    }
    while ( v12 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getCouponInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getCouponInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned __int16 maxNumResults, const unsigned __int8 callType)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getCouponInventory", 0x829u, "Cannot call getCouponInventory() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getCouponInventory", 0x82Au, "Cannot call getCouponInventory() with zero coupons per page");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, callType, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 2u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getInventoryItemInfo
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventoryItemInfo(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetInventoryItemInfoRequest *request, bdGetInventoryItemInfoResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdGetInventoryItemInfoRequest::setContext(request, this->m_context);
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0x45u, request, response, NULL);
  if ( started )
  {
    v11 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v11);
  }
  m_ptr = newTask.m_ptr;
  result->m_ptr = newTask.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = newTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getInventoryPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventoryPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventory *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *itemIDs, const unsigned __int16 numItems)
{
  const unsigned int *v11; 
  __int64 v12; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  bool v19; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryPaginated", 0x5FAu, "Cannot call getInventoryPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryPaginated", 0x5FBu, "Cannot call getInventoryPaginated() with zero itemsPerPage");
  v11 = itemIDs;
  bdHandleAssert(itemIDs != NULL, "(itemIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryPaginated", 0x5FCu, "Cannot call getInventoryByItemIDs() with a NULL itemsIDs array");
  bdHandleAssert(numItems != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryPaginated", 0x5FDu, "Cannot call getInventoryByItemIDs() with zero numItemIDs");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA5u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v12 = numItems;
    LOBYTE(v13) = 1;
    if ( params.ensureCapacity(&params, 4u, v13) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    if ( numItems )
    {
      do
      {
        LOBYTE(v14) = 1;
        if ( params.ensureCapacity(&params, 4u, v14) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *v11), params.m_serializeOk = 1, !v16) )
            params.m_serializeOk = 0;
        }
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    LOBYTE(v14) = 1;
    if ( params.ensureCapacity(&params, 4u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v18) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v17) = 1;
    if ( params.ensureCapacity(&params, 4u, v17) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v19) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = itemsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getItemsPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getItemsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceItem *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *itemIds, const unsigned int numItemIds, const char *storeVersion)
{
  unsigned int v13; 
  const char *v14; 
  unsigned __int64 v15; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v17; 
  _BOOL8 v18; 
  bool v19; 
  _BOOL8 v20; 
  bool v21; 
  _BOOL8 v22; 
  bool v23; 
  bool v24; 
  _BOOL8 v25; 
  __int64 v26; 
  bool v27; 
  const unsigned int *v28; 
  bool v29; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 

  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getItemsPaginated", 0x21Bu, "Cannot call getItemsPaginated() with a NULL results");
  v13 = itemsPerPage;
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getItemsPaginated", 0x21Cu, "Cannot call getItemsPaginated() with zero itemsPerPage");
  v14 = storeVersion;
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( v14[v15] );
  if ( v15 <= 0x20 )
  {
    if ( results && v13 )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x50u, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, this->m_context);
      LOBYTE(v17) = 1;
      if ( params.ensureCapacity(&params, 4u, v17) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v19) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v18) = 1;
      if ( params.ensureCapacity(&params, 4u, v18) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v13), params.m_serializeOk = 1, !v21) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v20) = 1;
      if ( params.ensureCapacity(&params, 1u, v20) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v23 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v23) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v22) = 1;
      v24 = params.ensureCapacity(&params, 4u, v22);
      v26 = numItemIds;
      if ( v24 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v27 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItemIds), params.m_serializeOk = 1, !v27) )
          params.m_serializeOk = 0;
      }
      if ( (_DWORD)v26 )
      {
        v28 = itemIds;
        do
        {
          LOBYTE(v25) = 1;
          if ( params.ensureCapacity(&params, 4u, v25) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v29 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *v28), params.m_serializeOk = 1, !v29) )
              params.m_serializeOk = 0;
          }
          ++v28;
          --v26;
        }
        while ( v26 );
      }
      bdBufferParams::addString(&params, v14, 0x20ui64);
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = results;
        params.m_maxResults = v13;
      }
      bdMarketplace::startTask(this, &remoteTask, &params);
      bdTaskParams::~bdTaskParams(&params);
    }
    m_ptr = remoteTask.m_ptr;
    result->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getItemsPaginated", 0x220u, "Version Number exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getProductsPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getProductsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProductV2 *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *productIds, const unsigned __int8 numProductIds, const char *storeVersion)
{
  bdMarketplaceProductV2 *v9; 
  unsigned __int64 v12; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  _BOOL8 v19; 
  bool v20; 
  unsigned __int8 v21; 
  bool v22; 
  bdReference<bdRemoteTask> remoteTask; 
  __int64 v25; 
  bdTaskParams params; 

  v25 = -2i64;
  v9 = results;
  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getProductsPaginated", 0x144u, "Cannot call getProductsPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getProductsPaginated", 0x145u, "Cannot call getProductsPaginated() with zero itemsPerPage");
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  do
    ++v12;
  while ( storeVersion[v12] );
  if ( v12 <= 0x20 )
  {
    if ( v9 && itemsPerPage )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x71u, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, this->m_context);
      LOBYTE(v14) = 1;
      if ( params.ensureCapacity(&params, 4u, v14) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v16) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v15) = 1;
      if ( params.ensureCapacity(&params, 4u, v15) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v18) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v17) = 1;
      if ( params.ensureCapacity(&params, 4u, v17) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numProductIds), params.m_serializeOk = 1, !v20) )
          params.m_serializeOk = 0;
      }
      v21 = 0;
      if ( numProductIds )
      {
        do
        {
          LOBYTE(v19) = 1;
          if ( params.ensureCapacity(&params, 4u, v19) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, productIds[v21]), params.m_serializeOk = 1, !v22) )
              params.m_serializeOk = 0;
          }
          ++v21;
        }
        while ( v21 < numProductIds );
        v9 = results;
      }
      bdBufferParams::addString(&params, storeVersion, 0x20ui64);
      if ( *(_OWORD *)&params.m_taskResults == 0i64 )
      {
        params.m_taskResults = v9;
        params.m_maxResults = itemsPerPage;
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      bdMarketplace::startTask(this, &remoteTask, &params);
      bdTaskParams::~bdTaskParams(&params);
    }
    m_ptr = remoteTask.m_ptr;
    result->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getProductsPaginated", 0x149u, "Store Version string exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getSkusPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSkuV3 *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *skuIds, const unsigned int numSkuIds, const unsigned __int8 *skuTypes, const unsigned int numSkuTypes, const char *storeVersion)
{
  unsigned int v15; 
  const char *v16; 
  unsigned __int64 v17; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v19; 
  _BOOL8 v20; 
  bool v21; 
  _BOOL8 v22; 
  bool v23; 
  _BOOL8 v24; 
  bool v25; 
  bool v26; 
  _BOOL8 v27; 
  __int64 v28; 
  bool v29; 
  const unsigned int *v30; 
  bool v31; 
  bool v32; 
  _BOOL8 v33; 
  __int64 v34; 
  bool v35; 
  const unsigned __int8 *v36; 
  bool v37; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 

  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getSkusPaginated", 0x19Cu, "Cannot call getSkusPaginated() with a NULL results");
  v15 = itemsPerPage;
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getSkusPaginated", 0x19Du, "Cannot call getSkusPaginated() with zero itemsPerPage");
  v16 = storeVersion;
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v17 = -1i64;
  do
    ++v17;
  while ( v16[v17] );
  if ( v17 <= 0x20 )
  {
    if ( results && v15 )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x6Fu, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, this->m_context);
      LOBYTE(v19) = 1;
      if ( params.ensureCapacity(&params, 4u, v19) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v21) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v20) = 1;
      if ( params.ensureCapacity(&params, 4u, v20) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v23 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v15), params.m_serializeOk = 1, !v23) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v22) = 1;
      if ( params.ensureCapacity(&params, 1u, v22) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v25 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v25) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v24) = 1;
      v26 = params.ensureCapacity(&params, 4u, v24);
      v28 = numSkuIds;
      if ( v26 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v29 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuIds), params.m_serializeOk = 1, !v29) )
          params.m_serializeOk = 0;
      }
      if ( (_DWORD)v28 )
      {
        v30 = skuIds;
        do
        {
          LOBYTE(v27) = 1;
          if ( params.ensureCapacity(&params, 4u, v27) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v31 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *v30), params.m_serializeOk = 1, !v31) )
              params.m_serializeOk = 0;
          }
          ++v30;
          --v28;
        }
        while ( v28 );
      }
      LOBYTE(v27) = 1;
      v32 = params.ensureCapacity(&params, 4u, v27);
      v34 = numSkuTypes;
      if ( v32 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v35 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuTypes), params.m_serializeOk = 1, !v35) )
          params.m_serializeOk = 0;
      }
      if ( (_DWORD)v34 )
      {
        v36 = skuTypes;
        do
        {
          LOBYTE(v33) = 1;
          if ( params.ensureCapacity(&params, 1u, v33) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v37 = bdByteBuffer::writeUByte8(params.m_buffer.m_ptr, *v36), params.m_serializeOk = 1, !v37) )
              params.m_serializeOk = 0;
          }
          ++v36;
          --v34;
        }
        while ( v34 );
      }
      bdBufferParams::addString(&params, v16, 0x20ui64);
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = results;
        params.m_maxResults = v15;
      }
      bdMarketplace::startTask(this, &remoteTask, &params);
      bdTaskParams::~bdTaskParams(&params);
    }
    m_ptr = remoteTask.m_ptr;
    result->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getSkusPaginated", 0x1A1u, "Version Number exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::giftSkuTransaction
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::giftSkuTransaction(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *transactionId, const unsigned int *skuIds, const unsigned int *giftedQuantities, const unsigned __int8 numSkuIds, const unsigned __int64 recieverPlayerId, const unsigned __int8 customSourceType)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  unsigned __int8 i; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  unsigned __int8 j; 
  bool v20; 
  _BOOL8 v21; 
  bool v22; 
  bool v23; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v26; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransaction", 0x35Du, "Cannot call giftSkuTransaction() with a NULL skuIds");
  bdHandleAssert(giftedQuantities != NULL, "(giftedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransaction", 0x35Eu, "Cannot call giftSkuTransaction() with a NULL giftedQuantities");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransaction", 0x35Fu, "Cannot call giftSkuTransaction() with zero numSkuIds");
  bdTaskParams::bdTaskParams(&taskParams, 0x50u, 0xE2u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addBlob(&taskParams, transactionId, 0x10u);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numSkuIds), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  for ( i = 0; i < numSkuIds; ++i )
  {
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, skuIds[i]), taskParams.m_serializeOk = 1, !v16) )
        taskParams.m_serializeOk = 0;
    }
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numSkuIds), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  for ( j = 0; j < numSkuIds; ++j )
  {
    LOBYTE(v17) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, giftedQuantities[j]), taskParams.m_serializeOk = 1, !v20) )
        taskParams.m_serializeOk = 0;
    }
  }
  LOBYTE(v17) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v17) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v22 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, recieverPlayerId), taskParams.m_serializeOk = 1, !v22) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v21) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v21) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v23 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, customSourceType), taskParams.m_serializeOk = 1, !v23) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v26 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransaction", 0x37Eu, "Failed to start task: Error %i", v26);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMarketplace::pawnItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::pawnItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceItemToPawnV2 *itemsToPawn, const unsigned int numItemsToPawn, bdMarketplaceAuditLogResult *resulta)
{
  _BOOL8 v10; 
  __int64 v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xD2u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
  LOBYTE(v10) = 1;
  v11 = numItemsToPawn;
  if ( params.ensureCapacity(&params, 4u, v10) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItemsToPawn), params.m_serializeOk = 1, !v12) )
      params.m_serializeOk = 0;
  }
  if ( numItemsToPawn )
  {
    do
    {
      bdBufferParams::addSerializable(&params, itemsToPawn++);
      --v11;
    }
    while ( v11 );
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = resulta;
    params.m_maxResults = 1;
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeTransactionResultV2 *transactionResult)
{
  const bdUserAccountID *v11; 
  bdUserAccountID v13; 
  unsigned __int64 v14; 

  v14 = 0i64;
  bdUserAccountID::bdUserAccountID(&v13, &v14);
  bdMarketplace::psnProcessProduct(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, v11, transactionResult);
  return result;
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  bool v11; 
  char *str; 
  bdTaskParams params; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 
  bdUserAccountID other; 

  v15 = -2i64;
  str = (char *)npTitleID;
  v16 = result;
  v17 = couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnProcessProduct", 0x9CEu, "Cannot call psnProcessProduct() with a NULL transactionId");
  bdHandleAssert(npAuthCode != NULL, "(npAuthCode != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnProcessProduct", 0x9CFu, "Cannot call psnProcessProduct() with a NULL npAuthCode");
  bdHandleAssert(npEntitlementId != NULL, "(npEntitlementId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnProcessProduct", 0x9D0u, "Cannot call psnProcessProduct() with a NULL npEntitlementId");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnProcessProduct", 0x9D1u, "Cannot call psnProcessProduct() with a NULL transactionResult");
  if ( transactionId && npAuthCode && npEntitlementId && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x51u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, str, 0xDui64);
    bdBufferParams::addString(&params, npAuthCode, 7ui64);
    bdBufferParams::addString(&params, npEntitlementId, 0x11ui64);
    str = NULL;
    bdUserAccountID::bdUserAccountID(&other, (const unsigned __int64 *)&str);
    v11 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v11 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::psnRevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::psnRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeRevokeResultV2 *revokeResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnRevokeProduct", 0x9F8u, "Cannot call psnProcessProduct() with a NULL transactionId");
  bdHandleAssert(npAuthCode != NULL, "(npAuthCode != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnRevokeProduct", 0x9F9u, "Cannot call psnProcessProduct() with a NULL npAuthCode");
  bdHandleAssert(npEntitlementId != NULL, "(npEntitlementId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnRevokeProduct", 0x9FAu, "Cannot call psnProcessProduct() with a NULL npEntitlementId");
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::psnRevokeProduct", 0x9FBu, "Cannot call psnProcessProduct() with a NULL revokeResult");
  if ( transactionId && npAuthCode && npEntitlementId && revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x52u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, npTitleID, 0xDui64);
    bdBufferParams::addString(&params, npAuthCode, 7ui64);
    bdBufferParams::addString(&params, npEntitlementId, 0x11ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdExchangeTransactionResultV2 *a4)
{
  bdMarketplace::purchaseOnSteamFinalize(this, result, transactionId, 0i64, 0, 0, a4);
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 orderId, const unsigned int appId, const bool isAuthorized, bdExchangeTransactionResultV2 *resulta)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(resulta != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnSteamFinalize", 0x4E3u, "Cannot call purchaseOnSteamFinalize() with a NULL result");
  if ( resulta )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x54u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 8u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, orderId), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, appId), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( params.ensureCapacity(&params, 1u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, isAuthorized), params.m_serializeOk = 1, !v16) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, bdSteamOrderIdResultV2 *resulta)
{
  const bdUserAccountID *v9; 
  bdUserAccountID v11; 
  unsigned __int64 v12; 

  v12 = 0i64;
  bdUserAccountID::bdUserAccountID(&v11, &v12);
  bdMarketplace::purchaseOnSteamInitialize(this, result, transactionId, fpSkuId, v9, resulta);
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, const bdUserAccountID *couponToWhom, bdSteamOrderIdResultV2 *a6)
{
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  const bdUserAccountID *v13; 
  bdTaskParams params; 
  unsigned __int64 userID; 
  unsigned __int64 v17[5]; 
  bdUserAccountID other; 
  bdUserAccountID v19; 

  v17[1] = -2i64;
  v17[2] = (unsigned __int64)result;
  v17[3] = (unsigned __int64)couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(a6 != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnSteamInitialize", 0x4ABu, "Cannot call purchaseOnSteamInitialize() with a NULL result");
  if ( a6 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x53u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, fpSkuId), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    bdBufferParams::addString(&params, (const char *)&queryFormat.fmt + 3, 1ui64);
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&v19, &userID);
    v17[0] = 0i64;
    bdUserAccountID::bdUserAccountID(&other, v17);
    v12 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    v13 = &v19;
    if ( !v12 )
      v13 = couponToWhom;
    bdTaskParams::addContextUser(&params, v13);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = a6;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v19.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v19.gap38);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdSteamOrderIdResultV2 *a4)
{
  const bdUserAccountID *v8; 
  bdUserAccountID v10; 
  unsigned __int64 v11; 

  v11 = 0i64;
  bdUserAccountID::bdUserAccountID(&v10, &v11);
  bdMarketplace::purchaseOnSteamInitialize(this, result, transactionId, 0, v8, a4);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, bdMarketplacePurchaseSkusResultV4 *a7, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, const unsigned __int8 numMetadataEntries, const bdMarketplaceMetadata *metadata, const unsigned int customSourceType, const bool ignoreEntitlements)
{
  const bdUserAccountID *v17; 
  bdTaskParams params; 
  bdUserAccountID v20; 
  const bdUserAccountID *v21; 

  v21 = buyer;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x7Du, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v20, buyer);
  if ( bdMarketplacePurchaseParamsBuilder::build<bdMarketplacePurchaseSkusSkuOrderV2,bdMarketplacePurchaseSkusCouponOrderV2,bdMarketplacePurchaseSkusResultV4>(&params, this->m_context, clientTransactionId, v17, numSkuOrders, skuOrders, numCouponOrders, couponOrders, numMetadataEntries, metadata, customSourceType, ignoreEntitlements, a7) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)buyer->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)buyer->gap38);
  return result;
}

/*
==============
bdMarketplace::putInventoryItemsData
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putInventoryItemsData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceInventoryItemData *inventoryItemsData, const unsigned __int8 numInventoryItemsData, bdMarketplaceAuditLogResult *resulta)
{
  __int64 v10; 
  _BOOL8 v11; 
  bool v12; 
  const bdSerializable *v13; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(inventoryItemsData != NULL, "(inventoryItemsData != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::putInventoryItemsData", 0x6B8u, "Cannot call putInventoryItemsData() with a NULL inventoryItemsData");
  bdHandleAssert(numInventoryItemsData != 0, "(numInventoryItemsData > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::putInventoryItemsData", 0x6B9u, "Cannot call putInventoryItemsData() with zero numInventoryItemsData");
  if ( inventoryItemsData && numInventoryItemsData )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA8u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    v10 = numInventoryItemsData;
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numInventoryItemsData), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    v13 = (const bdSerializable *)(&inventoryItemsData->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v13);
      v13 += 6;
      --v10;
    }
    while ( v10 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::putPlayersInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putPlayersInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceInventory *inventoryItems, const unsigned __int8 numInventoryItems, bdMarketplaceAuditLogResult *resulta, const bool checkItemLimits)
{
  _BOOL8 v11; 
  bool v12; 
  const bdSerializable *v13; 
  __int64 v14; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(inventoryItems != NULL, "(inventoryItems != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::putPlayersInventoryItems", 0x6D8u, "Cannot call putPlayersInventoryItems() with a NULL inventoryItems");
  bdHandleAssert(numInventoryItems != 0, "(numInventoryItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::putPlayersInventoryItems", 0x6D9u, "Cannot call putPlayersInventoryItems() with zero numInventoryItems");
  if ( inventoryItems && numInventoryItems )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 2 * checkItemLimits - 51, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numInventoryItems), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    v13 = (const bdSerializable *)(&inventoryItems->__vftable + 2);
    v14 = numInventoryItems;
    do
    {
      bdBufferParams::addSerializable(&params, v13);
      v13 = (const bdSerializable *)((char *)v13 + 232);
      --v14;
    }
    while ( v14 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::redeemCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::redeemCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceAuditLogResult *resulta)
{
  const char *v6; 
  __int64 v10; 
  _BOOL8 v11; 
  bool v12; 
  bdTaskParams params; 

  v6 = (const char *)couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::redeemCoupon", 0x8CFu, "Cannot call redeemCoupon() with a NULL couponIds");
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::redeemCoupon", 0x8D0u, "Cannot call redeemCoupon() with zero numCouponIds");
  if ( v6 && numCouponIds )
  {
    LOBYTE(v10) = numCouponIds;
    if ( numCouponIds >= 0xAu )
      LOBYTE(v10) = 10;
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x5Du, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    v10 = (unsigned __int8)v10;
    do
    {
      bdBufferParams::addString(&params, v6, 0x19ui64);
      v6 += 25;
      --v10;
    }
    while ( v10 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::setPlayersBalancesV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::setPlayersBalancesV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, const unsigned int customSourceType, bdMarketplaceAuditLogResult *resulta)
{
  __int64 v6; 
  _BOOL8 v10; 
  bool v11; 
  const bdSerializable *v12; 
  _BOOL8 v13; 
  bool v14; 
  bdTaskParams params; 

  v6 = numPlayerCurrencies;
  result->m_ptr = NULL;
  bdHandleAssert(playerCurrencies != NULL, "(playerCurrencies != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::setPlayersBalancesV2", 0xC1u, "Cannot call setPlayersBalances() with a NULL playerCurrencies");
  bdHandleAssert((_DWORD)v6 != 0, "(numPlayerCurrencies > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::setPlayersBalancesV2", 0xC2u, "Cannot call setPlayersBalances() with zero numPlayerCurrencies");
  if ( playerCurrencies && (_DWORD)v6 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA0u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v6), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    v12 = (const bdSerializable *)(&playerCurrencies->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v12);
      v12 += 4;
      --v6;
    }
    while ( v6 );
    LOBYTE(v13) = 1;
    if ( params.ensureCapacity(&params, 4u, v13) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, customSourceType), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeTransactionResultV2 *resulta)
{
  const bdUserAccountID *v9; 
  bdUserAccountID v11; 
  unsigned __int64 v12; 

  v12 = 0i64;
  bdUserAccountID::bdUserAccountID(&v11, &v12);
  bdMarketplace::steamProcessDurable(this, result, transactionId, durableAppId, v9, resulta);
  return result;
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *a6)
{
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  const bdUserAccountID *v13; 
  bdTaskParams params; 
  unsigned __int64 userID; 
  unsigned __int64 v17[5]; 
  bdUserAccountID other; 
  bdUserAccountID v19; 

  v17[1] = -2i64;
  v17[2] = (unsigned __int64)result;
  v17[3] = (unsigned __int64)couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(a6 != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::steamProcessDurable", 0x509u, "Cannot call steamProcessDurable() with a NULL result");
  if ( a6 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x55u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, durableAppId), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&v19, &userID);
    v17[0] = 0i64;
    bdUserAccountID::bdUserAccountID(&other, v17);
    v12 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    v13 = &v19;
    if ( !v12 )
      v13 = couponToWhom;
    bdTaskParams::addContextUser(&params, v13);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = a6;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v19.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v19.gap38);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::steamRevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::steamRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeRevokeResultV2 *revokeResult)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::steamRevokeProduct", 0x52Bu, "Cannot call steamRevokeProduct() with a NULL result");
  if ( revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x56u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, durableAppId), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::transferCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::transferCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *transferToIds, const char (*couponIds)[25], const unsigned __int8 numCouponIds, bdMarketplaceAuditLogResult *resulta)
{
  const bdUserAccountID *v7; 
  const char *v11; 
  _BOOL8 v12; 
  bool v13; 
  __int64 v14; 
  _BOOL8 v15; 
  bool v16; 
  __int64 v17; 
  bdTaskParams params; 

  v7 = transferToIds;
  result->m_ptr = NULL;
  bdHandleAssert(transferToIds != NULL, "(transferToIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::transferCoupon", 0x8A5u, "Cannot call transferCoupon() with a NULL transferToIds");
  v11 = (const char *)couponIds;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::transferCoupon", 0x8A6u, "Cannot call transferCoupon() with a NULL couponIds");
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::transferCoupon", 0x8A7u, "Cannot call transferCoupon() with zero numCouponIds");
  if ( v7 && couponIds && numCouponIds )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x5Cu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    v14 = numCouponIds;
    do
    {
      bdTaskParams::addContextUser(&params, v7++);
      --v14;
    }
    while ( v14 );
    LOBYTE(v15) = 1;
    if ( params.ensureCapacity(&params, 4u, v15) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v16) )
        params.m_serializeOk = 0;
    }
    v17 = numCouponIds;
    do
    {
      bdBufferParams::addString(&params, v11, 0x19ui64);
      v11 += 25;
      --v17;
    }
    while ( v17 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeTransactionResultV2 *transactionResult)
{
  const bdUserAccountID *v9; 
  bdUserAccountID v11; 
  unsigned __int64 v12; 

  v12 = 0i64;
  bdUserAccountID::bdUserAccountID(&v11, &v12);
  bdMarketplace::xbox360ProcessProduct(this, result, transactionId, offerId, v9, transactionResult);
  return result;
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  bool v10; 
  unsigned __int64 userID; 
  bdTaskParams params; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 
  bdUserAccountID other; 

  v14 = -2i64;
  v15 = result;
  v16 = couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xbox360ProcessProduct", 0xA21u, "Cannot call xbox360ProcessProduct() with a NULL transactionId");
  bdHandleAssert(offerId != NULL, "(offerId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xbox360ProcessProduct", 0xA22u, "Cannot call xbox360ProcessProduct() with a NULL offerId");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xbox360ProcessProduct", 0xA23u, "Cannot call xbox360ProcessProduct() with a NULL transactionResult");
  if ( transactionId && offerId && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x59u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, offerId, 0x25ui64);
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&other, &userID);
    v10 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v10 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::xbox360RevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xbox360RevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeRevokeResultV2 *revokeResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xbox360RevokeProduct", 0xA47u, "Cannot call xbox360RevokeProduct() with a NULL transactionId");
  bdHandleAssert(offerId != NULL, "(offerId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xbox360RevokeProduct", 0xA48u, "Cannot call xbox360RevokeProduct() with a NULL offerId");
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xbox360RevokeProduct", 0xA49u, "Cannot call xbox360RevokeProduct() with a NULL revokeResult");
  if ( transactionId && offerId && revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x5Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, offerId, 0x25ui64);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  const bdUserAccountID *v10; 
  bdUserAccountID v12; 
  unsigned __int64 v13; 

  v13 = 0i64;
  bdUserAccountID::bdUserAccountID(&v12, &v13);
  bdMarketplace::xboxOneProcessProduct(this, result, transactionId, delegationToken, productID, v10, transactionResult);
  return result;
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  bool v11; 
  unsigned __int64 userID; 
  bdTaskParams params; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 
  bdUserAccountID other; 

  v15 = -2i64;
  v16 = result;
  v17 = couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneProcessProduct", 0xAB1u, "Cannot call xboxOneProcessProduct() with a NULL transactionId");
  bdHandleAssert(delegationToken != NULL, "(delegationToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneProcessProduct", 0xAB2u, "Cannot call xboxOneProcessProduct() with a NULL delegationToken");
  bdHandleAssert(productID != NULL, "(productID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneProcessProduct", 0xAB4u, "Cannot call xboxOneProcessProduct() with a NULL productID");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneProcessProduct", 0xAB5u, "Cannot call xboxOneProcessProduct() with a NULL transactionResult");
  if ( transactionId && delegationToken && productID && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x57u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, delegationToken, 0x2000ui64);
    bdBufferParams::addString(&params, (const char *)&queryFormat.fmt + 3, 1ui64);
    bdBufferParams::addString(&params, productID, 0x25ui64);
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&other, &userID);
    v11 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v11 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::xboxOneRevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeRevokeResultV2 *revokeResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneRevokeProduct", 0xADBu, "Cannot call xboxOneRevokeProduct() with a NULL transactionId");
  bdHandleAssert(delegationToken != NULL, "(delegationToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneRevokeProduct", 0xADCu, "Cannot call xboxOneRevokeProduct() with a NULL delegationToken");
  bdHandleAssert(productID != NULL, "(productID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneRevokeProduct", 0xADEu, "Cannot call xboxOneRevokeProduct() with a NULL productID");
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneRevokeProduct", 0xADFu, "Cannot call xboxOneRevokeProduct() with a NULL revokeResult");
  if ( transactionId && delegationToken && productID && revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x58u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, delegationToken, 0x2000ui64);
    bdBufferParams::addString(&params, (const char *)&queryFormat.fmt + 3, 1ui64);
    bdBufferParams::addString(&params, productID, 0x25ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  const bdUserAccountID *v11; 
  bdUserAccountID v13; 
  unsigned __int64 v14; 

  v14 = 0i64;
  bdUserAccountID::bdUserAccountID(&v13, &v14);
  bdMarketplace::xboxOneTransferConsumable(this, result, transactionId, delegationToken, consumablePath, productID, v11, transactionResult);
  return result;
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResultV2 *transactionResult)
{
  bool v11; 
  char *str; 
  int v14; 
  bdTaskParams params; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 
  bdUserAccountID other; 

  v16 = -2i64;
  str = (char *)transactionId;
  v17 = result;
  v18 = couponToWhom;
  result->m_ptr = NULL;
  v14 = 1;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneTransferConsumable", 0xA77u, "Cannot call xboxOneTransferConsumable() with a NULL transactionId");
  bdHandleAssert(delegationToken != NULL, "(delegationToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneTransferConsumable", 0xA78u, "Cannot call xboxOneTransferConsumable() with a NULL delegationToken");
  bdHandleAssert(consumablePath != NULL, "(consumablePath != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneTransferConsumable", 0xA79u, "Cannot call xboxOneTransferConsumable() with a NULL consumablePath");
  bdHandleAssert(productID != NULL, "(productID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneTransferConsumable", 0xA7Au, "Cannot call xboxOneTransferConsumable() with a NULL productID");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::xboxOneTransferConsumable", 0xA7Bu, "Cannot call xboxOneTransferConsumable() with a NULL transactionResult");
  if ( str && delegationToken && consumablePath && productID && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x57u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, str, 0x19ui64);
    bdBufferParams::addString(&params, delegationToken, 0x2000ui64);
    bdBufferParams::addString(&params, consumablePath, 0x80ui64);
    bdBufferParams::addString(&params, productID, 0x25ui64);
    str = NULL;
    bdUserAccountID::bdUserAccountID(&other, (const unsigned __int64 *)&str);
    v11 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v11 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::claimCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::claimCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const char (*couponIds)[25], const unsigned __int8 numCouponIds, const unsigned int maxNumResults, bdMarketplaceCouponInventoryResultT<bdMarketplaceCouponInventory> *resulta)
{
  const char *v7; 
  __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  bdTaskParams params; 

  v7 = (const char *)couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::claimCoupon", 0x355u, "Cannot call claimCoupon() with a NULL couponIds");
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::claimCoupon", 0x356u, "Cannot call claimCoupon() with zero numCouponIds");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::claimCoupon", 0x357u, "Cannot call claimCoupon() with zero maxNumResults");
  if ( v7 && numCouponIds )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x5Bu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    v11 = numCouponIds;
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdBufferParams::addString(&params, v7, 0x19ui64);
      v7 += 25;
      --v11;
    }
    while ( v11 );
    LOBYTE(v14) = 1;
    if ( params.ensureCapacity(&params, 4u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::consumeInventoryItem
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::consumeInventoryItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int itemId, const unsigned int consumedQuantity)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 

  v15 = -2i64;
  v16 = result;
  v17 = playerId;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x8Cu, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdTaskParams::addContextUser(&params, playerId);
  LOBYTE(v9) = 1;
  if ( params.ensureCapacity(&params, 4u, v9) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemId), params.m_serializeOk = 1, !v11) )
      params.m_serializeOk = 0;
  }
  LOBYTE(v10) = 1;
  if ( params.ensureCapacity(&params, 4u, v10) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, consumedQuantity), params.m_serializeOk = 1, !v12) )
      params.m_serializeOk = 0;
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return result;
}

/*
==============
bdMarketplace::consumeInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::consumeInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *itemIds, const unsigned int *consumedQuantities, const unsigned __int16 numItems)
{
  unsigned __int16 v9; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int16 i; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  bool v17; 
  int v19; 
  bdTaskParams params; 

  v9 = 0;
  result->m_ptr = NULL;
  v19 = 1;
  bdHandleAssert(itemIds != NULL, "(itemIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::consumeInventoryItems", 0x294u, "Cannot call consumeInventoryItems() with a NULL itemIds", v19, -2i64);
  bdHandleAssert(consumedQuantities != NULL, "(consumedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::consumeInventoryItems", 0x295u, "Cannot call consumeInventoryItems() with a NULL consumedQuantities");
  bdHandleAssert(numItems != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::consumeInventoryItems", 0x296u, "Cannot call consumeInventoryItems() with zero numItems");
  if ( itemIds && consumedQuantities && numItems )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x92u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    for ( i = 0; i < numItems; ++i )
    {
      LOBYTE(v11) = 1;
      if ( params.ensureCapacity(&params, 4u, v11) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemIds[i]), params.m_serializeOk = 1, !v14) )
          params.m_serializeOk = 0;
      }
    }
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v16) )
        params.m_serializeOk = 0;
    }
    do
    {
      LOBYTE(v15) = 1;
      if ( params.ensureCapacity(&params, 4u, v15) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, consumedQuantities[v9]), params.m_serializeOk = 1, !v17) )
          params.m_serializeOk = 0;
      }
      ++v9;
    }
    while ( v9 < numItems );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::consumeInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::consumeInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventoryItemQuantity *consumedQuantities, const unsigned __int16 numEntries)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdTaskParams params; 

  LOWORD(v4) = numEntries;
  result->m_ptr = NULL;
  bdHandleAssert(consumedQuantities != NULL, "(consumedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::consumeInventoryItems", 0x2B6u, "Cannot call consumeInventoryItems() with a NULL consumedQuantities", 1, -2i64);
  bdHandleAssert((_WORD)v4 != 0, "(numEntries > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::consumeInventoryItems", 0x2B7u, "Cannot call consumeInventoryItems() with zero numEntries");
  if ( consumedQuantities && (_WORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x93u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v8 = (const bdSerializable *)(&consumedQuantities->__vftable + 2);
    v4 = (unsigned __int16)v4;
    do
    {
      bdBufferParams::addSerializable(&params, v8);
      v8 += 4;
      --v4;
    }
    while ( v4 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::deleteSpecifiedCoupons
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::deleteSpecifiedCoupons(bdMarketplace *this, bdReference<bdRemoteTask> *result, char (*couponIds)[25], unsigned __int8 numCouponIds)
{
  __int64 v4; 
  char (*v5)[25]; 
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  LOBYTE(v4) = numCouponIds;
  v5 = couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::deleteSpecifiedCoupons", 0x3BBu, "Cannot call deleteSpecifiedCoupons() with a NULL couponIds", 1, -2i64);
  bdHandleAssert((_BYTE)v4 != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::deleteSpecifiedCoupons", 0x3BCu, "Cannot call deleteSpecifiedCoupons() with zero numCouponIds");
  if ( v5 && (_BYTE)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA9u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int8)v4), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    v4 = (unsigned __int8)v4;
    do
    {
      bdBufferParams::addString(&params, (const char *)v5++, 0x19ui64);
      --v4;
    }
    while ( v4 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::deposit
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::deposit(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, unsigned __int8 numPlayerCurrencies)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdTaskParams params; 

  LOBYTE(v4) = numPlayerCurrencies;
  result->m_ptr = NULL;
  bdHandleAssert(playerCurrencies != NULL, "(playerCurrencies != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::deposit", 0x150u, "Cannot call deposit() with a NULL playerCurrencies", 1, -2i64);
  bdHandleAssert((_BYTE)v4 != 0, "(numPlayerCurrencies > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::deposit", 0x151u, "Cannot call deposit() with zero numPlayerCurrencies");
  if ( playerCurrencies && (_BYTE)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x99u, 0x400u, 0xFFFFu);
    v8 = (const bdSerializable *)(&playerCurrencies->__vftable + 2);
    v4 = (unsigned __int8)v4;
    do
    {
      bdBufferParams::addSerializable(&params, v8);
      v8 += 4;
      --v4;
    }
    while ( v4 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getBalance
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getBalance(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCurrency *results, const unsigned int maxNumResults)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getBalance", 0x169u, "Cannot call getBalance() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getBalance", 0x16Au, "Cannot call getBalance() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x82u, 0x400u, 0xFFFFu);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getBalanceV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getBalanceV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCurrency *results, const unsigned int maxNumResults)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getBalanceV2", 0x183u, "Cannot call getBalanceV2() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getBalanceV2", 0x184u, "Cannot call getBalanceV2() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x84u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getCouponInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getCouponInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned __int16 maxNumResults)
{
  bdMarketplace::getCouponInventory(this, result, results, maxNumResults, 0x94u);
  return result;
}

/*
==============
bdMarketplace::getCouponInventoryV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getCouponInventoryV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV3 *results, const unsigned __int16 maxNumResults)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getCouponInventoryV2", 0x332u, "Cannot call getCouponInventoryV2() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getCouponInventoryV2", 0x333u, "Cannot call getCouponInventoryV2() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xADu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 2u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventory *results, const unsigned __int16 maxNumResults)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getInventory", 0x20Eu, "Cannot call getInventory() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getInventory", 0x20Fu, "Cannot call getInventory() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x8Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 2u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getInventoryItemInfo
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventoryItemInfo(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventoryItemInfo *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *itemIds, const unsigned int numItemIds)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  __int64 v17; 
  bool v18; 
  bool v20; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getInventoryItemInfo", 0x24Du, "Cannot call getInventoryItemInfo() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getInventoryItemInfo", 0x24Eu, "Cannot call getInventoryItemInfo() with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x44u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    v17 = numItemIds;
    if ( params.ensureCapacity(&params, 4u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItemIds), params.m_serializeOk = 1, !v18) )
        params.m_serializeOk = 0;
    }
    if ( numItemIds )
    {
      do
      {
        LOBYTE(v16) = 1;
        if ( params.ensureCapacity(&params, 4u, v16) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *itemIds), params.m_serializeOk = 1, !v20) )
            params.m_serializeOk = 0;
        }
        ++itemIds;
        --v17;
      }
      while ( v17 );
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = itemsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getInventoryPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventoryPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventory *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getInventoryPaginated", 0x22Cu, "Cannot call getInventoryPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getInventoryPaginated", 0x22Du, "Cannot call getInventoryPaginated() with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA5u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = itemsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getItemsPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getItemsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceItem *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *itemIds, const unsigned int numItemIds)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  __int64 v20; 
  bool v21; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getItemsPaginated", 0x12Eu, "Cannot call getItemsPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getItemsPaginated", 0x12Fu, "Cannot call getItemsPaginated() with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xC3u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( params.ensureCapacity(&params, 4u, v13) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v16) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v15) = 1;
    if ( params.ensureCapacity(&params, 1u, v15) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v18) )
        params.m_serializeOk = 0;
    }
    if ( numItemIds )
    {
      v20 = numItemIds;
      do
      {
        LOBYTE(v17) = 1;
        if ( params.ensureCapacity(&params, 4u, v17) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *itemIds), params.m_serializeOk = 1, !v21) )
            params.m_serializeOk = 0;
        }
        ++itemIds;
        --v20;
      }
      while ( v20 );
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = itemsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getLimitedSkuQuantites
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getLimitedSkuQuantites(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceLimitedSkuQuantity *results, const unsigned int *skuIds, const unsigned int numSkuIds)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  __int64 v12; 
  bool v13; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getLimitedSkuQuantites", 0x10Au, "Cannot call getLimitedSkuQuantites() with a NULL results");
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getLimitedSkuQuantites", 0x10Bu, "Cannot call getLimitedSkuQuantites() with a NULL skuIds");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getLimitedSkuQuantites", 0x10Cu, "Cannot call getLimitedSkuQuantites() with zero numSkuIds");
  if ( results && skuIds && numSkuIds )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x70u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuIds), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    v12 = numSkuIds;
    do
    {
      LOBYTE(v10) = 1;
      if ( params.ensureCapacity(&params, 4u, v10) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *skuIds), params.m_serializeOk = 1, !v13) )
          params.m_serializeOk = 0;
      }
      ++skuIds;
      --v12;
    }
    while ( v12 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = numSkuIds;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getPendingCouponInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPendingCouponInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned __int16 maxNumResults)
{
  bdMarketplace::getCouponInventory(this, result, results, maxNumResults, 0x95u);
  return result;
}

/*
==============
bdMarketplace::getPlayersBalances
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayersBalances(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdUserAccountID *playerIds, unsigned int numPlayerIds, bdMarketplacePlayerCurrency *results, const unsigned int maxNumResults)
{
  __int64 v6; 
  bdUserAccountID *v7; 
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams params; 

  v6 = numPlayerIds;
  v7 = playerIds;
  result->m_ptr = NULL;
  bdHandleAssert(playerIds != NULL, "(playerIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalances", 0x1A2u, "Cannot call getPlayersBalances() with a NULL playerIds");
  bdHandleAssert((_DWORD)v6 != 0, "(numPlayerIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalances", 0x1A3u, "Cannot call getPlayersBalances() with zero numPlayerIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalances", 0x1A4u, "Cannot call getPlayersBalances() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalances", 0x1A5u, "Cannot call getPlayersBalances() with zero maxNumResults");
  if ( v7 && (_DWORD)v6 && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x98u, 0x400u, 0xFFFFu);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdTaskParams::addContextUser(&params, v7++);
      --v6;
    }
    while ( v6 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getPlayersBalancesV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayersBalancesV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdUserAccountID *playerIds, unsigned int numPlayerIds, bdMarketplacePlayerCurrency *results, const unsigned int maxNumResults)
{
  __int64 v6; 
  bdUserAccountID *v7; 
  _BOOL8 v10; 
  bool v11; 
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams params; 

  v6 = numPlayerIds;
  v7 = playerIds;
  result->m_ptr = NULL;
  bdHandleAssert(playerIds != NULL, "(playerIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalancesV2", 0x1C4u, "Cannot call getPlayersBalancesV2() with a NULL playerIds");
  bdHandleAssert((_DWORD)v6 != 0, "(numPlayerIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalancesV2", 0x1C5u, "Cannot call getPlayersBalancesV2() with zero numPlayerIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalancesV2", 0x1C6u, "Cannot call getPlayersBalancesV2() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getPlayersBalancesV2", 0x1C7u, "Cannot call getPlayersBalancesV2() with zero maxNumResults");
  if ( v7 && (_DWORD)v6 && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA7u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v6), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdTaskParams::addContextUser(&params, v7++);
      --v6;
    }
    while ( v6 );
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getProducts
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getProducts(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProduct *results, const unsigned __int16 maxNumResults)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProducts", 0x1Fu, "Cannot call getProducts() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProducts", 0x20u, "Cannot call getProducts() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x63u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 1u), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 0), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getProducts
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getProducts(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProduct *results, const unsigned __int16 maxNumResults, const unsigned int *productIds, const unsigned __int8 numProductIds)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned int v13; 
  _BOOL8 v14; 
  bool v15; 
  __int64 v16; 
  _BOOL8 v17; 
  bool v18; 
  bool v20; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProducts", 0x3Cu, "Cannot call getProducts() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProducts", 0x3Du, "Cannot call getProducts() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x63u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 1u), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    v13 = maxNumResults;
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    v16 = numProductIds;
    LOBYTE(v14) = 1;
    if ( params.ensureCapacity(&params, 4u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numProductIds), params.m_serializeOk = 1, !v18) )
        params.m_serializeOk = 0;
    }
    if ( numProductIds )
    {
      do
      {
        LOBYTE(v17) = 1;
        if ( params.ensureCapacity(&params, 4u, v17) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *productIds), params.m_serializeOk = 1, !v20) )
            params.m_serializeOk = 0;
        }
        ++productIds;
        --v16;
      }
      while ( v16 );
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = v13;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getProductsPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getProductsPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProduct *results, const unsigned int pageNum, const unsigned int itemsPerPage, const unsigned int *productIds, const unsigned __int8 numProductIds, const char *storeVersion)
{
  bdMarketplaceProduct *v9; 
  unsigned __int64 v12; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  _BOOL8 v19; 
  bool v20; 
  unsigned __int8 v21; 
  bool v22; 
  bdReference<bdRemoteTask> remoteTask; 
  __int64 v25; 
  bdTaskParams params; 

  v25 = -2i64;
  v9 = results;
  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProductsPaginated", 0x61u, "Cannot call getProductsPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProductsPaginated", 0x62u, "Cannot call getProductsPaginated() with zero itemsPerPage");
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  do
    ++v12;
  while ( storeVersion[v12] );
  if ( v12 <= 0x20 )
  {
    if ( v9 && itemsPerPage )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x63u, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, this->m_context);
      LOBYTE(v14) = 1;
      if ( params.ensureCapacity(&params, 4u, v14) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v16) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v15) = 1;
      if ( params.ensureCapacity(&params, 4u, v15) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v18) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v17) = 1;
      if ( params.ensureCapacity(&params, 4u, v17) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numProductIds), params.m_serializeOk = 1, !v20) )
          params.m_serializeOk = 0;
      }
      v21 = 0;
      if ( numProductIds )
      {
        do
        {
          LOBYTE(v19) = 1;
          if ( params.ensureCapacity(&params, 4u, v19) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, productIds[v21]), params.m_serializeOk = 1, !v22) )
              params.m_serializeOk = 0;
          }
          ++v21;
        }
        while ( v21 < numProductIds );
        v9 = results;
      }
      bdBufferParams::addString(&params, storeVersion, 0x20ui64);
      if ( *(_OWORD *)&params.m_taskResults == 0i64 )
      {
        params.m_taskResults = v9;
        params.m_maxResults = itemsPerPage;
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      bdMarketplace::startTask(this, &remoteTask, &params);
      bdTaskParams::~bdTaskParams(&params);
    }
    m_ptr = remoteTask.m_ptr;
    result->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplaceDeprecated", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getProductsPaginated", 0x66u, "Store Version string exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSku *results, const unsigned __int16 maxNumResults, const bool showAll, const unsigned int *skuIds, const unsigned __int8 numSkuIds)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  unsigned __int8 i; 
  bool v17; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkus", 0x8Eu, "Cannot call getSkus() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkus", 0x8Fu, "Cannot call getSkus() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x86u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 2u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 1u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    for ( i = 0; i < numSkuIds; ++i )
    {
      LOBYTE(v14) = 1;
      if ( params.ensureCapacity(&params, 4u, v14) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, skuIds[i]), params.m_serializeOk = 1, !v17) )
          params.m_serializeOk = 0;
      }
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = maxNumResults;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getSkusPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *skuIds, const unsigned int numSkuIds)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  __int64 v20; 
  bool v21; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkusPaginated", 0xB0u, "Cannot call getSkusPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkusPaginated", 0xB1u, "Cannot call getSkusPaginated() with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA4u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( params.ensureCapacity(&params, 4u, v13) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v16) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v15) = 1;
    if ( params.ensureCapacity(&params, 1u, v15) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v18) )
        params.m_serializeOk = 0;
    }
    if ( numSkuIds )
    {
      v20 = numSkuIds;
      do
      {
        LOBYTE(v17) = 1;
        if ( params.ensureCapacity(&params, 4u, v17) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *skuIds), params.m_serializeOk = 1, !v21) )
            params.m_serializeOk = 0;
        }
        ++skuIds;
        --v20;
      }
      while ( v20 );
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = results;
      params.m_maxResults = itemsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getSkusPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSkuV2 *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const unsigned int *skuIds, const unsigned int numSkuIds, const unsigned __int8 *skuTypes, const unsigned int numSkuTypes, const char *storeVersion)
{
  unsigned int v15; 
  const char *v16; 
  unsigned __int64 v17; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v19; 
  _BOOL8 v20; 
  bool v21; 
  _BOOL8 v22; 
  bool v23; 
  _BOOL8 v24; 
  bool v25; 
  bool v26; 
  _BOOL8 v27; 
  __int64 v28; 
  bool v29; 
  const unsigned int *v30; 
  bool v31; 
  bool v32; 
  _BOOL8 v33; 
  __int64 v34; 
  bool v35; 
  const unsigned __int8 *v36; 
  bool v37; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 

  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkusPaginated", 0xD8u, "Cannot call getSkusPaginated() with a NULL results");
  v15 = itemsPerPage;
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkusPaginated", 0xD9u, "Cannot call getSkusPaginated() with zero itemsPerPage");
  v16 = storeVersion;
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v17 = -1i64;
  do
    ++v17;
  while ( v16[v17] );
  if ( v17 <= 0x20 )
  {
    if ( results && v15 )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x46u, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, this->m_context);
      LOBYTE(v19) = 1;
      if ( params.ensureCapacity(&params, 4u, v19) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v21) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v20) = 1;
      if ( params.ensureCapacity(&params, 4u, v20) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v23 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v15), params.m_serializeOk = 1, !v23) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v22) = 1;
      if ( params.ensureCapacity(&params, 1u, v22) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v25 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v25) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v24) = 1;
      v26 = params.ensureCapacity(&params, 4u, v24);
      v28 = numSkuIds;
      if ( v26 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v29 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuIds), params.m_serializeOk = 1, !v29) )
          params.m_serializeOk = 0;
      }
      if ( (_DWORD)v28 )
      {
        v30 = skuIds;
        do
        {
          LOBYTE(v27) = 1;
          if ( params.ensureCapacity(&params, 4u, v27) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v31 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *v30), params.m_serializeOk = 1, !v31) )
              params.m_serializeOk = 0;
          }
          ++v30;
          --v28;
        }
        while ( v28 );
      }
      LOBYTE(v27) = 1;
      v32 = params.ensureCapacity(&params, 4u, v27);
      v34 = numSkuTypes;
      if ( v32 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v35 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuTypes), params.m_serializeOk = 1, !v35) )
          params.m_serializeOk = 0;
      }
      if ( (_DWORD)v34 )
      {
        v36 = skuTypes;
        do
        {
          LOBYTE(v33) = 1;
          if ( params.ensureCapacity(&params, 1u, v33) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v37 = bdByteBuffer::writeUByte8(params.m_buffer.m_ptr, *v36), params.m_serializeOk = 1, !v37) )
              params.m_serializeOk = 0;
          }
          ++v36;
          --v34;
        }
        while ( v34 );
      }
      bdBufferParams::addString(&params, v16, 0x20ui64);
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = results;
        params.m_maxResults = v15;
      }
      bdMarketplace::startTask(this, &remoteTask, &params);
      bdTaskParams::~bdTaskParams(&params);
    }
    m_ptr = remoteTask.m_ptr;
    result->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplaceDeprecated", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::getSkusPaginated", 0xDDu, "Version Number exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::giftSkuTransaction
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::giftSkuTransaction(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *transactionID, const unsigned int *skuIds, const unsigned int *giftedQuantities, const unsigned __int8 numSkuIds, const unsigned __int64 recieverPlayerID)
{
  bdMarketplace::giftSkuTransaction(this, result, transactionID, skuIds, giftedQuantities, numSkuIds, recieverPlayerID, 0);
  return result;
}

/*
==============
bdMarketplace::pawnItem
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::pawnItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int itemID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xBAu, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  LOBYTE(v6) = 1;
  if ( params.ensureCapacity(&params, 4u, v6) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v7 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemID), params.m_serializeOk = 1, !v7) )
      params.m_serializeOk = 0;
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::pawnItem
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::pawnItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int itemID, const bdMarketplacePawnChoice *pawnChoices, const unsigned __int8 numPawnChoices)
{
  _BOOL8 v9; 
  bool v10; 
  __int64 v11; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xC5u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  LOBYTE(v9) = 1;
  if ( params.ensureCapacity(&params, 4u, v9) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemID), params.m_serializeOk = 1, !v10) )
      params.m_serializeOk = 0;
  }
  if ( pawnChoices && numPawnChoices )
  {
    v11 = numPawnChoices;
    do
    {
      bdBufferParams::addSerializable(&params, pawnChoices++);
      --v11;
    }
    while ( v11 );
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::pawnItem
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::pawnItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int itemID, const bdMarketplacePawnChoice *pawnChoices, const unsigned __int8 numPawnChoices)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xC6u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
  LOBYTE(v10) = 1;
  if ( params.ensureCapacity(&params, 4u, v10) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemID), params.m_serializeOk = 1, !v12) )
      params.m_serializeOk = 0;
  }
  v13 = numPawnChoices;
  LOBYTE(v11) = 1;
  if ( params.ensureCapacity(&params, 4u, v11) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numPawnChoices), params.m_serializeOk = 1, !v14) )
      params.m_serializeOk = 0;
  }
  if ( numPawnChoices )
  {
    do
    {
      bdBufferParams::addSerializable(&params, pawnChoices++);
      --v13;
    }
    while ( v13 );
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::pawnItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::pawnItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceItemToPawn *itemsToPawn, const unsigned int numItemsToPawn, bdMarketplaceAuditLogResult *resulta)
{
  _BOOL8 v10; 
  __int64 v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xC7u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
  LOBYTE(v10) = 1;
  v11 = numItemsToPawn;
  if ( params.ensureCapacity(&params, 4u, v10) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItemsToPawn), params.m_serializeOk = 1, !v12) )
      params.m_serializeOk = 0;
  }
  if ( numItemsToPawn )
  {
    do
    {
      bdBufferParams::addSerializable(&params, itemsToPawn++);
      --v11;
    }
    while ( v11 );
  }
  if ( params.m_taskResults || params.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    params.m_serializeOk = 0;
  }
  else
  {
    params.m_taskResults = resulta;
    params.m_maxResults = 1;
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeTransactionResult *transactionResult)
{
  const bdUserAccountID *v11; 
  bdUserAccountID v13; 
  unsigned __int64 v14; 

  v14 = 0i64;
  bdUserAccountID::bdUserAccountID(&v13, &v14);
  bdMarketplace::psnProcessProduct(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, v11, transactionResult);
  return result;
}

/*
==============
bdMarketplace::psnProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::psnProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  bool v11; 
  char *str; 
  bdTaskParams params; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 
  bdUserAccountID other; 

  v15 = -2i64;
  str = (char *)npTitleID;
  v16 = result;
  v17 = couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnProcessProduct", 0x6B8u, "Cannot call psnProcessProduct() with a NULL transactionId");
  bdHandleAssert(npAuthCode != NULL, "(npAuthCode != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnProcessProduct", 0x6B9u, "Cannot call psnProcessProduct() with a NULL npAuthCode");
  bdHandleAssert(npEntitlementId != NULL, "(npEntitlementId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnProcessProduct", 0x6BAu, "Cannot call psnProcessProduct() with a NULL npEntitlementId");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnProcessProduct", 0x6BBu, "Cannot call psnProcessProduct() with a NULL transactionResult");
  if ( transactionId && npAuthCode && npEntitlementId && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x2Du, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, str, 0xDui64);
    bdBufferParams::addString(&params, npAuthCode, 7ui64);
    bdBufferParams::addString(&params, npEntitlementId, 0x11ui64);
    str = NULL;
    bdUserAccountID::bdUserAccountID(&other, (const unsigned __int64 *)&str);
    v11 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v11 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::psnRevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::psnRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeRevokeResult *revokeResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnRevokeProduct", 0x6E1u, "Cannot call psnProcessProduct() with a NULL transactionId");
  bdHandleAssert(npAuthCode != NULL, "(npAuthCode != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnRevokeProduct", 0x6E2u, "Cannot call psnProcessProduct() with a NULL npAuthCode");
  bdHandleAssert(npEntitlementId != NULL, "(npEntitlementId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnRevokeProduct", 0x6E3u, "Cannot call psnProcessProduct() with a NULL npEntitlementId");
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::psnRevokeProduct", 0x6E4u, "Cannot call psnProcessProduct() with a NULL revokeResult");
  if ( transactionId && npAuthCode && npEntitlementId && revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x3Du, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, npTitleID, 0xDui64);
    bdBufferParams::addString(&params, npAuthCode, 7ui64);
    bdBufferParams::addString(&params, npEntitlementId, 0x11ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdExchangeTransactionResult *a4)
{
  bdMarketplace::purchaseOnSteamFinalize(this, result, transactionId, 0i64, 0, 0, a4);
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamFinalize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 orderId, const unsigned int appId, const bool isAuthorized, bdExchangeTransactionResult *resulta)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(resulta != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseOnSteamFinalize", 0x648u, "Cannot call purchaseOnSteamFinalize() with a NULL result");
  if ( resulta )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x2Cu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 8u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, orderId), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, appId), params.m_serializeOk = 1, !v15) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( params.ensureCapacity(&params, 1u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, isAuthorized), params.m_serializeOk = 1, !v16) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = resulta;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, bdSteamOrderIdResult *resulta)
{
  const bdUserAccountID *v9; 
  bdUserAccountID v11; 
  unsigned __int64 v12; 

  v12 = 0i64;
  bdUserAccountID::bdUserAccountID(&v11, &v12);
  bdMarketplace::purchaseOnSteamInitialize(this, result, transactionId, fpSkuId, v9, resulta);
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, const bdUserAccountID *couponToWhom, bdSteamOrderIdResult *a6)
{
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  const bdUserAccountID *v13; 
  bdTaskParams params; 
  unsigned __int64 userID; 
  unsigned __int64 v17[5]; 
  bdUserAccountID other; 
  bdUserAccountID v19; 

  v17[1] = -2i64;
  v17[2] = (unsigned __int64)result;
  v17[3] = (unsigned __int64)couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(a6 != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseOnSteamInitialize", 0x610u, "Cannot call purchaseOnSteamInitialize() with a NULL result");
  if ( a6 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x2Bu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, fpSkuId), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    bdBufferParams::addString(&params, (const char *)&queryFormat.fmt + 3, 1ui64);
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&v19, &userID);
    v17[0] = 0i64;
    bdUserAccountID::bdUserAccountID(&other, v17);
    v12 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    v13 = &v19;
    if ( !v12 )
      v13 = couponToWhom;
    bdTaskParams::addContextUser(&params, v13);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = a6;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v19.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v19.gap38);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnSteamInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, bdSteamOrderIdResult *a4)
{
  const bdUserAccountID *v8; 
  bdUserAccountID v10; 
  unsigned __int64 v11; 

  v11 = 0i64;
  bdUserAccountID::bdUserAccountID(&v10, &v11);
  bdMarketplace::purchaseOnSteamInitialize(this, result, transactionId, 0, v8, a4);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned __int8 numSkuIds, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned int maxNumResults, bdMarketplacePurchaseSkusResult *resulta, const unsigned int *discountIds, const bdUserAccountID *couponRecipients, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  __int64 v14; 
  bdReference<bdRemoteTask> *v16; 
  const unsigned int *v17; 
  const void **v18; 
  unsigned __int8 v19; 
  _BOOL8 v20; 
  _BOOL8 v21; 
  bool v22; 
  unsigned __int8 v23; 
  bool v24; 
  _BOOL8 v25; 
  bool v26; 
  unsigned __int8 v27; 
  bool v28; 
  _BOOL8 v29; 
  bool v30; 
  bool v31; 
  _BOOL8 v32; 
  bdRemoteTask *m_ptr; 
  bool v34; 
  unsigned __int8 v35; 
  bool v36; 
  const bdUserAccountID *v37; 
  bool v38; 
  _BOOL8 v39; 
  bool v40; 
  __int64 v41; 
  bool v42; 
  _BOOL8 v43; 
  bool v44; 
  _BOOL8 v45; 
  bool v46; 
  bool v47; 
  bdReference<bdRemoteTask> remoteTask; 
  __int64 v50; 
  bdTaskParams params; 

  v50 = -2i64;
  LOBYTE(v14) = numSkuIds;
  v16 = result;
  remoteTask.m_ptr = NULL;
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x4B2u, "Cannot call purchaseSkus() with zero numSkuIds");
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x4B3u, "Cannot call purchaseSkus() with a NULL skuIds");
  bdHandleAssert(purchasedQuantities != NULL, "(purchasedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x4B4u, "Cannot call purchaseSkus() with a NULL purchasedQuantities");
  v17 = metadataSize;
  v18 = (const void **)couponMetadata;
  if ( !couponMetadata )
  {
LABEL_5:
    if ( (_BYTE)v14 && skuIds && purchasedQuantities )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x6Au, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, this->m_context);
      bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
      LOBYTE(v20) = 1;
      if ( params.ensureCapacity(&params, 4u, v20) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int8)v14), params.m_serializeOk = 1, !v22) )
          params.m_serializeOk = 0;
      }
      v23 = 0;
      do
      {
        LOBYTE(v21) = 1;
        if ( params.ensureCapacity(&params, 4u, v21) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, skuIds[v23]), params.m_serializeOk = 1, !v24) )
            params.m_serializeOk = 0;
        }
        ++v23;
      }
      while ( v23 < (unsigned __int8)v14 );
      LOBYTE(v21) = 1;
      if ( params.ensureCapacity(&params, 4u, v21) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v26 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int8)v14), params.m_serializeOk = 1, !v26) )
          params.m_serializeOk = 0;
      }
      v27 = 0;
      do
      {
        LOBYTE(v25) = 1;
        if ( params.ensureCapacity(&params, 4u, v25) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v28 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, purchasedQuantities[v27]), params.m_serializeOk = 1, !v28) )
            params.m_serializeOk = 0;
        }
        ++v27;
      }
      while ( v27 < (unsigned __int8)v14 );
      LOBYTE(v25) = 1;
      if ( params.ensureCapacity(&params, 4u, v25) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v30 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v30) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v29) = 1;
      v31 = params.ensureCapacity(&params, 4u, v29);
      if ( discountIds )
      {
        if ( v31 )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v34 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int8)v14), params.m_serializeOk = 1, !v34) )
            params.m_serializeOk = 0;
        }
        v35 = 0;
        do
        {
          LOBYTE(v32) = 1;
          if ( params.ensureCapacity(&params, 4u, v32) )
          {
            if ( params.m_isWritingArray )
              --params.m_arrayWriteCount;
            if ( !params.m_serializeOk || (v36 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, discountIds[v35]), params.m_serializeOk = 1, !v36) )
              params.m_serializeOk = 0;
          }
          ++v35;
        }
        while ( v35 < (unsigned __int8)v14 );
      }
      else if ( v31 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        params.m_serializeOk = params.m_serializeOk && bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 0);
      }
      v37 = couponRecipients;
      LOBYTE(v32) = 1;
      v38 = params.ensureCapacity(&params, 4u, v32);
      if ( couponRecipients )
      {
        if ( v38 )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v40 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int8)v14), params.m_serializeOk = 1, !v40) )
            params.m_serializeOk = 0;
        }
        v41 = (unsigned __int8)v14;
        do
        {
          bdTaskParams::addContextUser(&params, v37++);
          --v41;
        }
        while ( v41 );
      }
      else if ( v38 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        params.m_serializeOk = params.m_serializeOk && bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 0);
      }
      LOBYTE(v39) = 1;
      v42 = params.ensureCapacity(&params, 4u, v39);
      if ( couponMetadata )
      {
        if ( v42 )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v44 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int8)v14), params.m_serializeOk = 1, !v44) )
            params.m_serializeOk = 0;
        }
        v14 = (unsigned __int8)v14;
        do
        {
          bdBufferParams::addBlob(&params, *v18++, *v17++);
          --v14;
        }
        while ( v14 );
      }
      else if ( v42 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        params.m_serializeOk = params.m_serializeOk && bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 0);
      }
      LOBYTE(v43) = 1;
      if ( params.ensureCapacity(&params, 1u, v43) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v46 = bdByteBuffer::writeUByte8(params.m_buffer.m_ptr, customSourceType), params.m_serializeOk = 1, !v46) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v45) = 1;
      if ( params.ensureCapacity(&params, 1u, v45) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v47 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, ignoreEntitlements), params.m_serializeOk = 1, !v47) )
          params.m_serializeOk = 0;
      }
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = resulta;
        params.m_maxResults = 1;
      }
      bdMarketplace::startTask(this, &remoteTask, &params);
      bdTaskParams::~bdTaskParams(&params);
      v16 = result;
    }
    goto LABEL_114;
  }
  v19 = 0;
  if ( !(_BYTE)v14 )
  {
LABEL_114:
    m_ptr = remoteTask.m_ptr;
    v16->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
    goto LABEL_116;
  }
  while ( metadataSize[v19] <= 0x40 )
  {
    if ( ++v19 >= (unsigned __int8)v14 )
      goto LABEL_5;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplaceDeprecated", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x4BDu, "Metadata '%s' exceeded maximum size", (const char *)couponMetadata[v19]);
  v16->m_ptr = NULL;
  m_ptr = remoteTask.m_ptr;
LABEL_116:
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return v16;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, bdMarketplaceCouponInventoryResultT<bdMarketplaceCouponInventory> *resulta)
{
  const void **v15; 
  const unsigned int *v16; 
  unsigned __int8 v17; 
  _BOOL8 v18; 
  _BOOL8 v19; 
  bool v20; 
  unsigned __int8 i; 
  bool v22; 
  _BOOL8 v23; 
  unsigned int v24; 
  bdReference<bdRemoteTask> *v25; 
  unsigned __int8 j; 
  bool v27; 
  _BOOL8 v28; 
  bool v29; 
  bool v30; 
  unsigned __int8 k; 
  bdUserAccountID *v32; 
  _BOOL8 v33; 
  _BOOL8 v34; 
  bool v35; 
  bool v36; 
  _BOOL8 v37; 
  bool v38; 
  __int64 v39; 
  bool v40; 
  bool v41; 
  bdRemoteTask *m_ptr; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 
  bdMarketplace *v46; 
  bdReference<bdRemoteTask> *v47; 
  unsigned __int64 userID[3]; 
  bdUserAccountID v49; 

  userID[1] = -2i64;
  v47 = result;
  v46 = this;
  userID[0] = (unsigned __int64)result;
  v15 = (const void **)couponMetadata;
  v16 = metadataSize;
  remoteTask.m_ptr = NULL;
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x446u, "Cannot call purchaseSkus() with a NULL skuIds");
  bdHandleAssert(purchasedQuantities != NULL, "(purchasedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x447u, "Cannot call purchaseSkus() with a NULL purchasedQuantities");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x448u, "Cannot call purchaseSkus() with zero numSkuIds");
  if ( couponMetadata && (v17 = 0, numSkuIds) )
  {
    while ( metadataSize[v17] <= 0x40 )
    {
      if ( ++v17 >= numSkuIds )
        goto LABEL_5;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdMarketplaceDeprecated", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::purchaseSkus", 0x451u, "Metadata '%s' exceeded maximum size", (const char *)couponMetadata[v17]);
    v25 = v47;
    v47->m_ptr = NULL;
    if ( remoteTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  }
  else
  {
LABEL_5:
    if ( skuIds && purchasedQuantities && numSkuIds )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x5Fu, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&params, v46->m_context);
      bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
      LOBYTE(v18) = 1;
      if ( params.ensureCapacity(&params, 4u, v18) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuIds), params.m_serializeOk = 1, !v20) )
          params.m_serializeOk = 0;
      }
      for ( i = 0; i < numSkuIds; ++i )
      {
        LOBYTE(v19) = 1;
        if ( params.ensureCapacity(&params, 4u, v19) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, skuIds[i]), params.m_serializeOk = 1, !v22) )
            params.m_serializeOk = 0;
        }
      }
      LOBYTE(v19) = 1;
      if ( params.ensureCapacity(&params, 4u, v19) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        v24 = numSkuIds;
        params.m_serializeOk = params.m_serializeOk && bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuIds);
      }
      else
      {
        v24 = numSkuIds;
      }
      for ( j = 0; j < numSkuIds; ++j )
      {
        LOBYTE(v23) = 1;
        if ( params.ensureCapacity(&params, 4u, v23) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v27 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, purchasedQuantities[j]), params.m_serializeOk = 1, !v27) )
            params.m_serializeOk = 0;
        }
      }
      LOBYTE(v23) = 1;
      if ( params.ensureCapacity(&params, 1u, v23) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v29 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, ignoreEntitlements), params.m_serializeOk = 1, !v29) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v28) = 1;
      if ( params.ensureCapacity(&params, 4u, v28) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v30 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v24), params.m_serializeOk = 1, !v30) )
          params.m_serializeOk = 0;
      }
      userID[0] = 0i64;
      bdUserAccountID::bdUserAccountID(&v49, userID);
      for ( k = 0; k < numSkuIds; ++k )
      {
        if ( couponToWhom )
          v32 = (bdUserAccountID *)&couponToWhom[k];
        else
          v32 = &v49;
        bdTaskParams::addContextUser(&params, v32);
      }
      LOBYTE(v33) = 1;
      if ( params.ensureCapacity(&params, 4u, v33) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v35 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v35) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v34) = 1;
      v36 = params.ensureCapacity(&params, 4u, v34);
      if ( couponMetadata )
      {
        if ( v36 )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v38 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v24), params.m_serializeOk = 1, !v38) )
            params.m_serializeOk = 0;
        }
        v39 = numSkuIds;
        do
        {
          bdBufferParams::addBlob(&params, *v15++, *v16++);
          --v39;
        }
        while ( v39 );
      }
      else if ( v36 )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v40 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, 0), params.m_serializeOk = 1, !v40) )
          params.m_serializeOk = 0;
      }
      LOBYTE(v37) = 1;
      if ( params.ensureCapacity(&params, 1u, v37) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v41 = bdByteBuffer::writeUByte8(params.m_buffer.m_ptr, customSourceType), params.m_serializeOk = 1, !v41) )
          params.m_serializeOk = 0;
      }
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = resulta;
        params.m_maxResults = 1;
      }
      bdMarketplace::startTask(v46, &remoteTask, &params);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v49.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v49.gap38);
      bdTaskParams::~bdTaskParams(&params);
    }
    m_ptr = remoteTask.m_ptr;
    v25 = v47;
    v47->m_ptr = remoteTask.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = remoteTask.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  }
  return v25;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrder *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrder *couponOrders, bdMarketplacePurchaseSkusResultV2 *a9, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  const bdUserAccountID *v15; 
  bdTaskParams params; 
  bdUserAccountID v18; 
  const bdUserAccountID *v19; 

  v19 = buyer;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x74u, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v18, buyer);
  if ( bdMarketplacePurchaseParamsBuilder::build<bdMarketplacePurchaseSkusSkuOrder,bdMarketplacePurchaseSkusCouponOrder,bdMarketplacePurchaseSkusResultV2>(&params, this->m_context, clientTransactionId, v15, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)buyer->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)buyer->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, bdMarketplacePurchaseSkusResultV2 *a9, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  const bdUserAccountID *v15; 
  bdTaskParams params; 
  bdUserAccountID v18; 
  const bdUserAccountID *v19; 

  v19 = buyer;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x76u, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v18, buyer);
  if ( bdMarketplacePurchaseParamsBuilder::build<bdMarketplacePurchaseSkusSkuOrderV2,bdMarketplacePurchaseSkusCouponOrderV2,bdMarketplacePurchaseSkusResultV2>(&params, this->m_context, clientTransactionId, v15, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)buyer->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)buyer->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, bdMarketplacePurchaseSkusResultV3 *a9, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  const bdUserAccountID *v15; 
  bdTaskParams params; 
  bdUserAccountID v18; 
  const bdUserAccountID *v19; 

  v19 = buyer;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x7Au, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v18, buyer);
  if ( bdMarketplacePurchaseParamsBuilder::build<bdMarketplacePurchaseSkusSkuOrderV2,bdMarketplacePurchaseSkusCouponOrderV2,bdMarketplacePurchaseSkusResultV3>(&params, this->m_context, clientTransactionId, v15, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)buyer->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)buyer->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, bdMarketplacePurchaseSkusResultV4 *a9, const unsigned int customSourceType, const bool ignoreEntitlements)
{
  const bdUserAccountID *v15; 
  bdTaskParams params; 
  bdUserAccountID v18; 
  const bdUserAccountID *v19; 

  v19 = buyer;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x7Bu, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v18, buyer);
  if ( bdMarketplacePurchaseParamsBuilder::build<bdMarketplacePurchaseSkusSkuOrderV2,bdMarketplacePurchaseSkusCouponOrderV2,bdMarketplacePurchaseSkusResultV4>(&params, this->m_context, clientTransactionId, v15, numSkuOrders, skuOrders, numCouponOrders, couponOrders, a9, customSourceType, ignoreEntitlements) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)buyer->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)buyer->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds)
{
  bdMarketplace::purchaseSkus(this, result, skuIds, purchasedQuantities, numSkuIds, 0, NULL, NULL, 0, NULL, NULL, 0, NULL);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements)
{
  bdMarketplace::purchaseSkus(this, result, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, NULL, NULL, 0, NULL, NULL, 0, NULL);
  return result;
}

/*
==============
bdMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const unsigned int *discountIds)
{
  const bdUserAccountID *v17; 
  bdTaskParams params; 
  bdUserAccountID v20; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x9Au, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v20);
  if ( bdMarketplacePurchaseParamsBuilder::build(&params, this->m_context, v17, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, results, maxNumResults, couponMetadata, metadataSize, customSourceType, discountIds) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::purchaseSkusForPlayer
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkusForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds)
{
  const bdUserAccountID *v10; 
  bdUserAccountID v12; 
  const bdUserAccountID *v13; 

  v13 = playerId;
  bdUserAccountID::bdUserAccountID(&v12, playerId);
  bdMarketplace::purchaseSkusForPlayer(this, result, v10, skuIds, purchasedQuantities, numSkuIds, 0, NULL, NULL, 0, NULL, NULL, 0, NULL);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseSkusForPlayer
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkusForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements)
{
  const bdUserAccountID *v11; 
  bdUserAccountID v13; 
  const bdUserAccountID *v14; 

  v14 = playerId;
  bdUserAccountID::bdUserAccountID(&v13, playerId);
  bdMarketplace::purchaseSkusForPlayer(this, result, v11, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, NULL, NULL, 0, NULL, NULL, 0, NULL);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return result;
}

/*
==============
bdMarketplace::purchaseSkusForPlayer
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseSkusForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerId, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned __int8 numSkuIds, const bool ignoreEntitlements, const bdUserAccountID *couponToWhom, bdMarketplaceCouponInventory *results, const unsigned int maxNumResults, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const unsigned int *discountIds)
{
  const bdUserAccountID *v16; 
  bdTaskParams params; 
  bdUserAccountID v21; 
  const bdUserAccountID *v22; 

  v22 = playerId;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xAu, 0x400u, 0xFFFFu);
  bdUserAccountID::bdUserAccountID(&v21, playerId);
  if ( bdMarketplacePurchaseParamsBuilder::build(&params, this->m_context, v16, skuIds, purchasedQuantities, numSkuIds, ignoreEntitlements, couponToWhom, results, maxNumResults, couponMetadata, metadataSize, customSourceType, discountIds) )
    bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)playerId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)playerId->gap38);
  return result;
}

/*
==============
bdMarketplace::putInventoryItem
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putInventoryItem(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventory *inventoryItem)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x8Bu, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdBufferParams::addSerializable(&params, (const bdSerializable *)(&inventoryItem->__vftable + 2));
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::putInventoryItemData
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putInventoryItemData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventoryItemData *inventoryItemData)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0xA3u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdBufferParams::addSerializable(&params, (const bdSerializable *)(&inventoryItemData->__vftable + 2));
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::putInventoryItemsData
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putInventoryItemsData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventoryItemData *inventoryItemsData, const unsigned __int8 numInventoryItemsData)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdTaskParams params; 

  LOBYTE(v4) = numInventoryItemsData;
  result->m_ptr = NULL;
  bdHandleAssert(inventoryItemsData != NULL, "(inventoryItemsData != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::putInventoryItemsData", 0x2E4u, "Cannot call putInventoryItemsData() with a NULL inventoryItemsData", 1, -2i64);
  bdHandleAssert((_BYTE)v4 != 0, "(numInventoryItemsData > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::putInventoryItemsData", 0x2E5u, "Cannot call putInventoryItemsData() with zero numInventoryItemsData");
  if ( inventoryItemsData && (_BYTE)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xA6u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v8 = (const bdSerializable *)(&inventoryItemsData->__vftable + 2);
    v4 = (unsigned __int8)v4;
    do
    {
      bdBufferParams::addSerializable(&params, v8);
      v8 += 6;
      --v4;
    }
    while ( v4 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::putPlayersInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putPlayersInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceInventory *inventoryItems, const unsigned __int8 numInventoryItems, const bool checkItemLimits)
{
  __int64 v5; 
  unsigned __int8 v9; 
  const bdSerializable *v10; 
  bdTaskParams params; 

  LOBYTE(v5) = numInventoryItems;
  result->m_ptr = NULL;
  bdHandleAssert(inventoryItems != NULL, "(inventoryItems != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::putPlayersInventoryItems", 0x2FEu, "Cannot call putPlayersInventoryItems() with a NULL inventoryItems", 1, -2i64);
  bdHandleAssert((_BYTE)v5 != 0, "(numInventoryItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::putPlayersInventoryItems", 0x2FFu, "Cannot call putPlayersInventoryItems() with zero numInventoryItems");
  v9 = -111;
  if ( checkItemLimits )
    v9 = -63;
  if ( inventoryItems && (_BYTE)v5 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, v9, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v10 = (const bdSerializable *)(&inventoryItems->__vftable + 2);
    v5 = (unsigned __int8)v5;
    do
    {
      bdBufferParams::addSerializable(&params, v10);
      v10 = (const bdSerializable *)((char *)v10 + 232);
      --v5;
    }
    while ( v5 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::redeemCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::redeemCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, char (*couponIds)[25], unsigned __int8 numCouponIds)
{
  char (*v5)[25]; 
  __int64 v8; 
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams params; 

  v5 = couponIds;
  result->m_ptr = NULL;
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::redeemCoupon", 0x39Fu, "Cannot call redeemCoupon() with a NULL couponIds", 1, -2i64);
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::redeemCoupon", 0x3A0u, "Cannot call redeemCoupon() with zero numCouponIds");
  if ( v5 && numCouponIds )
  {
    LOBYTE(v8) = numCouponIds;
    if ( numCouponIds >= 0xAu )
      LOBYTE(v8) = 10;
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x9Bu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    v8 = (unsigned __int8)v8;
    do
    {
      bdBufferParams::addString(&params, (const char *)v5++, 0x19ui64);
      --v8;
    }
    while ( v8 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::setPlayersBalances
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::setPlayersBalances(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, unsigned __int8 numPlayerCurrencies)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdTaskParams params; 

  LOBYTE(v4) = numPlayerCurrencies;
  result->m_ptr = NULL;
  bdHandleAssert(playerCurrencies != NULL, "(playerCurrencies != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::setPlayersBalances", 0x1E8u, "Cannot call setPlayersBalances() with a NULL playerCurrencies", 1, -2i64);
  bdHandleAssert((_BYTE)v4 != 0, "(numPlayerCurrencies > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::setPlayersBalances", 0x1E9u, "Cannot call setPlayersBalances() with zero numPlayerCurrencies");
  if ( playerCurrencies && (_BYTE)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x9Du, 0x400u, 0xFFFFu);
    v8 = (const bdSerializable *)(&playerCurrencies->__vftable + 2);
    v4 = (unsigned __int8)v4;
    do
    {
      bdBufferParams::addSerializable(&params, v8);
      v8 += 4;
      --v4;
    }
    while ( v4 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::setPlayersBalancesV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::setPlayersBalancesV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, bdMarketplaceAuditLogResult *resulta)
{
  bdMarketplace::setPlayersBalancesV2(this, result, playerCurrencies, numPlayerCurrencies, 0, resulta);
  return result;
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeTransactionResult *resulta)
{
  const bdUserAccountID *v9; 
  bdUserAccountID v11; 
  unsigned __int64 v12; 

  v12 = 0i64;
  bdUserAccountID::bdUserAccountID(&v11, &v12);
  bdMarketplace::steamProcessDurable(this, result, transactionId, durableAppId, v9, resulta);
  return result;
}

/*
==============
bdMarketplace::steamProcessDurable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::steamProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *a6)
{
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  const bdUserAccountID *v13; 
  bdTaskParams params; 
  unsigned __int64 userID; 
  unsigned __int64 v17[5]; 
  bdUserAccountID other; 
  bdUserAccountID v19; 

  v17[1] = -2i64;
  v17[2] = (unsigned __int64)result;
  v17[3] = (unsigned __int64)couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(a6 != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::steamProcessDurable", 0x66Eu, "Cannot call steamProcessDurable() with a NULL result");
  if ( a6 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x3Cu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, durableAppId), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&v19, &userID);
    v17[0] = 0i64;
    bdUserAccountID::bdUserAccountID(&other, v17);
    v12 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    v13 = &v19;
    if ( !v12 )
      v13 = couponToWhom;
    bdTaskParams::addContextUser(&params, v13);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = a6;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v19.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v19.gap38);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::steamRevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::steamRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeRevokeResult *revokeResult)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::steamRevokeProduct", 0x690u, "Cannot call steamRevokeProduct() with a NULL result");
  if ( revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x3Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, durableAppId), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::transferCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::transferCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *transferToIds, const char (*couponIds)[25], const unsigned __int8 numCouponIds)
{
  const bdUserAccountID *v6; 
  _BOOL8 v9; 
  bool v10; 
  __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  __int64 v14; 
  bdTaskParams params; 

  v6 = transferToIds;
  result->m_ptr = NULL;
  bdHandleAssert(transferToIds != NULL, "(transferToIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::transferCoupon", 0x37Bu, "Cannot call transferCoupon() with a NULL transferToIds", 1, -2i64);
  bdHandleAssert(couponIds != NULL, "(couponIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::transferCoupon", 0x37Cu, "Cannot call transferCoupon() with a NULL couponIds");
  bdHandleAssert(numCouponIds != 0, "(numCouponIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::transferCoupon", 0x37Du, "Cannot call transferCoupon() with zero numCouponIds");
  if ( v6 && couponIds && numCouponIds )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x97u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    v11 = numCouponIds;
    do
    {
      bdTaskParams::addContextUser(&params, v6++);
      --v11;
    }
    while ( v11 );
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numCouponIds), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    v14 = numCouponIds;
    do
    {
      bdBufferParams::addString(&params, (const char *)couponIds++, 0x19ui64);
      --v14;
    }
    while ( v14 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeTransactionResult *transactionResult)
{
  const bdUserAccountID *v9; 
  bdUserAccountID v11; 
  unsigned __int64 v12; 

  v12 = 0i64;
  bdUserAccountID::bdUserAccountID(&v11, &v12);
  bdMarketplace::xbox360ProcessProduct(this, result, transactionId, offerId, v9, transactionResult);
  return result;
}

/*
==============
bdMarketplace::xbox360ProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xbox360ProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  bool v10; 
  unsigned __int64 userID; 
  bdTaskParams params; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 
  bdUserAccountID other; 

  v14 = -2i64;
  v15 = result;
  v16 = couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xbox360ProcessProduct", 0x709u, "Cannot call xbox360ProcessProduct() with a NULL transactionId");
  bdHandleAssert(offerId != NULL, "(offerId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xbox360ProcessProduct", 0x70Au, "Cannot call xbox360ProcessProduct() with a NULL offerId");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xbox360ProcessProduct", 0x70Bu, "Cannot call xbox360ProcessProduct() with a NULL transactionResult");
  if ( transactionId && offerId && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x30u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, offerId, 0x25ui64);
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&other, &userID);
    v10 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v10 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::xbox360RevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xbox360RevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *offerId, bdExchangeRevokeResult *revokeResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xbox360RevokeProduct", 0x72Fu, "Cannot call xbox360RevokeProduct() with a NULL transactionId");
  bdHandleAssert(offerId != NULL, "(offerId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xbox360RevokeProduct", 0x730u, "Cannot call xbox360RevokeProduct() with a NULL offerId");
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xbox360RevokeProduct", 0x731u, "Cannot call xbox360RevokeProduct() with a NULL revokeResult");
  if ( transactionId && offerId && revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x40u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, offerId, 0x25ui64);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeTransactionResult *transactionResult)
{
  const bdUserAccountID *v10; 
  bdUserAccountID v12; 
  unsigned __int64 v13; 

  v13 = 0i64;
  bdUserAccountID::bdUserAccountID(&v12, &v13);
  bdMarketplace::xboxOneProcessProduct(this, result, transactionId, delegationToken, productID, v10, transactionResult);
  return result;
}

/*
==============
bdMarketplace::xboxOneProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  bool v11; 
  unsigned __int64 userID; 
  bdTaskParams params; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 
  bdUserAccountID other; 

  v15 = -2i64;
  v16 = result;
  v17 = couponToWhom;
  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneProcessProduct", 0x798u, "Cannot call xboxOneProcessProduct() with a NULL transactionId");
  bdHandleAssert(delegationToken != NULL, "(delegationToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneProcessProduct", 0x799u, "Cannot call xboxOneProcessProduct() with a NULL delegationToken");
  bdHandleAssert(productID != NULL, "(productID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneProcessProduct", 0x79Bu, "Cannot call xboxOneProcessProduct() with a NULL productID");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneProcessProduct", 0x79Cu, "Cannot call xboxOneProcessProduct() with a NULL transactionResult");
  if ( transactionId && delegationToken && productID && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x2Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, delegationToken, 0x2000ui64);
    bdBufferParams::addString(&params, (const char *)&queryFormat.fmt + 3, 1ui64);
    bdBufferParams::addString(&params, productID, 0x25ui64);
    userID = 0i64;
    bdUserAccountID::bdUserAccountID(&other, &userID);
    v11 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v11 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

/*
==============
bdMarketplace::xboxOneRevokeProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneRevokeProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeRevokeResult *revokeResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneRevokeProduct", 0x7C2u, "Cannot call xboxOneRevokeProduct() with a NULL transactionId");
  bdHandleAssert(delegationToken != NULL, "(delegationToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneRevokeProduct", 0x7C3u, "Cannot call xboxOneRevokeProduct() with a NULL delegationToken");
  bdHandleAssert(productID != NULL, "(productID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneRevokeProduct", 0x7C5u, "Cannot call xboxOneRevokeProduct() with a NULL productID");
  bdHandleAssert(revokeResult != NULL, "(revokeResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneRevokeProduct", 0x7C6u, "Cannot call xboxOneRevokeProduct() with a NULL revokeResult");
  if ( transactionId && delegationToken && productID && revokeResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x3Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, delegationToken, 0x2000ui64);
    bdBufferParams::addString(&params, (const char *)&queryFormat.fmt + 3, 1ui64);
    bdBufferParams::addString(&params, productID, 0x25ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = revokeResult;
      params.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, bdExchangeTransactionResult *transactionResult)
{
  const bdUserAccountID *v11; 
  bdUserAccountID v13; 
  unsigned __int64 v14; 

  v14 = 0i64;
  bdUserAccountID::bdUserAccountID(&v13, &v14);
  bdMarketplace::xboxOneTransferConsumable(this, result, transactionId, delegationToken, consumablePath, productID, v11, transactionResult);
  return result;
}

/*
==============
bdMarketplace::xboxOneTransferConsumable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::xboxOneTransferConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, const bdUserAccountID *couponToWhom, bdExchangeTransactionResult *transactionResult)
{
  bool v11; 
  char *str; 
  int v14; 
  bdTaskParams params; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 
  bdUserAccountID other; 

  v16 = -2i64;
  str = (char *)transactionId;
  v17 = result;
  v18 = couponToWhom;
  result->m_ptr = NULL;
  v14 = 1;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneTransferConsumable", 0x75Eu, "Cannot call xboxOneTransferConsumable() with a NULL transactionId");
  bdHandleAssert(delegationToken != NULL, "(delegationToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneTransferConsumable", 0x75Fu, "Cannot call xboxOneTransferConsumable() with a NULL delegationToken");
  bdHandleAssert(consumablePath != NULL, "(consumablePath != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneTransferConsumable", 0x760u, "Cannot call xboxOneTransferConsumable() with a NULL consumablePath");
  bdHandleAssert(productID != NULL, "(productID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneTransferConsumable", 0x761u, "Cannot call xboxOneTransferConsumable() with a NULL productID");
  bdHandleAssert(transactionResult != NULL, "(transactionResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\deprecated\\bdmarketplacedeprecated.cpp", "bdMarketplace::xboxOneTransferConsumable", 0x762u, "Cannot call xboxOneTransferConsumable() with a NULL transactionResult");
  if ( str && delegationToken && consumablePath && productID && transactionResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x2Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, str, 0x19ui64);
    bdBufferParams::addString(&params, delegationToken, 0x2000ui64);
    bdBufferParams::addString(&params, consumablePath, 0x80ui64);
    bdBufferParams::addString(&params, productID, 0x25ui64);
    str = NULL;
    bdUserAccountID::bdUserAccountID(&other, (const unsigned __int64 *)&str);
    v11 = bdUserAccountID::operator==((bdUserAccountID *)couponToWhom, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    if ( v11 )
    {
      bdBufferParams::addNAN(&params);
      bdBufferParams::addNAN(&params);
    }
    else
    {
      bdTaskParams::addContextUser(&params, couponToWhom);
    }
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)couponToWhom->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)couponToWhom->gap38);
  return result;
}

