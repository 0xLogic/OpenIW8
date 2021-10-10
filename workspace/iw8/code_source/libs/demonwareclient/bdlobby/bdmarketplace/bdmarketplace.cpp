/*
==============
bdMarketplace::deleteExpiredInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::deleteExpiredInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *itemIds, const unsigned __int16 numItems)
{
  return ?deleteExpiredInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBIG@Z(this, result, itemIds, numItems);
}

/*
==============
bdMarketplace::setPlayersBalancesV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::setPlayersBalancesV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdSetPlayersBalancesRequest *request, bdSetPlayersBalancesResponse *response)
{
  return ?setPlayersBalancesV3@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdSetPlayersBalancesRequest@@PEAVbdSetPlayersBalancesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getDiscountsForPlayer
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getDiscountsForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceDiscountInfo *results, unsigned int pageNum, unsigned int itemsPerPage, unsigned int startTime, unsigned int endTime)
{
  return ?getDiscountsForPlayer@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceDiscountInfo@@IIII@Z(this, result, results, pageNum, itemsPerPage, startTime, endTime);
}

/*
==============
bdMarketplace::giftSkuTransactionV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::giftSkuTransactionV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *transactionId, const unsigned int *skuIds, const unsigned int *giftedQuantities, const unsigned __int8 numSkuIds, const unsigned __int64 recieverPlayerId, const unsigned int customSourceType)
{
  return ?giftSkuTransactionV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBEQEBI1E_KI@Z(this, result, transactionId, skuIds, giftedQuantities, numSkuIds, recieverPlayerId, customSourceType);
}

/*
==============
bdMarketplace::getFPSkusPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getFPSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceFPSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll)
{
  return ?getFPSkusPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceFPSku@@II_N@Z(this, result, results, pageNum, itemsPerPage, showAll);
}

/*
==============
bdMarketplace::wiiUProcessConsumable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::wiiUProcessConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 principalId, const unsigned int fpSkuId, const char *uniqueId, bdExchangeTransactionResultV2 *a7)
{
  return ?wiiUProcessConsumable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KIPEBDPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, principalId, fpSkuId, uniqueId, a7);
}

/*
==============
bdMarketplace::getAllPlayerData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getAllPlayerData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned int numPlayerIds, bdMarketplacePlayerData *results, const unsigned int maxNumResults)
{
  return ?getAllPlayerData@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@IQEAVbdMarketplacePlayerData@@I@Z(this, result, playerIds, numPlayerIds, results, maxNumResults);
}

/*
==============
bdMarketplace::validateReceipt
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::validateReceipt(bdMarketplace *this, bdReference<bdRemoteTask> *result, const void *receipt, const unsigned int receiptSize, bdMarketplaceReceiptStatus *const receiptStatus, const unsigned __int8 platform, const void *receiptSignature, const unsigned int receiptSignatureSize)
{
  return ?validateReceipt@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBXIQEAVbdMarketplaceReceiptStatus@@E0I@Z(this, result, receipt, receiptSize, receiptStatus, platform, receiptSignature, receiptSignatureSize);
}

/*
==============
bdMarketplace::getEntitlements
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceEntitlement *a3)
{
  return ?getEntitlements@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdMarketplaceEntitlement@@@Z(this, result, a3);
}

/*
==============
bdMarketplace::purchaseOnWiiUInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnWiiUInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 principalId, const unsigned int fpSkuId, const char *uniqueId, bdWiiUPrePurchaseResult *a7)
{
  return ?purchaseOnWiiUInitialize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KIPEBDPEAVbdWiiUPrePurchaseResult@@@Z(this, result, transactionId, principalId, fpSkuId, uniqueId, a7);
}

/*
==============
bdMarketplace::reportUsageTime
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::reportUsageTime(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int usageTime)
{
  return ?reportUsageTime@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, usageTime);
}

/*
==============
bdMarketplace::getConversionRules
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getConversionRules(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetConversionRulesByIDsRequest *request, bdGetConversionRulesResponse *response)
{
  return ?getConversionRules@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetConversionRulesByIDsRequest@@PEAVbdGetConversionRulesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::wiiUProcessDurable
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::wiiUProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 principalId, const unsigned int fpSkuId, const char *uniqueId, bdExchangeTransactionResultV2 *a7)
{
  return ?wiiUProcessDurable@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KIPEBDPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, principalId, fpSkuId, uniqueId, a7);
}

/*
==============
bdMarketplace::getFPSkusPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getFPSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceFPSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const char *firstParty)
{
  return ?getFPSkusPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceFPSku@@II_NPEBD@Z(this, result, results, pageNum, itemsPerPage, showAll, firstParty);
}

/*
==============
bdMarketplace::giftCouponV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::giftCouponV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned int *skuIds, const unsigned __int8 numSkuIds, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned int *customSourceType, const unsigned int *startDateTimes, const unsigned int *expireDateTimes)
{
  return ?giftCouponV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@QEBIEQEAPEBE1111@Z(this, result, playerIds, skuIds, numSkuIds, couponMetadata, metadataSize, customSourceType, startDateTimes, expireDateTimes);
}

/*
==============
bdMarketplace::reportPlayersUsageTimes
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::reportPlayersUsageTimes(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceUsageTime *playerUsageTimes, const unsigned __int16 numUsageTimes)
{
  return ?reportPlayersUsageTimes@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMarketplaceUsageTime@@G@Z(this, result, playerUsageTimes, numUsageTimes);
}

/*
==============
bdMarketplace::getPendingCouponInventoryV4
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPendingCouponInventoryV4(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV4 *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  return ?getPendingCouponInventoryV4@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventoryV4@@II@Z(this, result, results, pageNum, itemsPerPage);
}

/*
==============
bdMarketplace::getFPSkusPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getFPSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceFPSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const char *firstParty, const unsigned int *fpSkuIds, const unsigned int numFPSkuIds)
{
  return ?getFPSkusPaginated@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceFPSku@@II_NPEBDQEBII@Z(this, result, results, pageNum, itemsPerPage, showAll, firstParty, fpSkuIds, numFPSkuIds);
}

/*
==============
bdMarketplace::getLimitedSkuQuantities
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getLimitedSkuQuantities(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceLimitedSkuQuantity *results, const unsigned int *skuIds, const unsigned int numSkuIds)
{
  return ?getLimitedSkuQuantities@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceLimitedSkuQuantity@@QEBII@Z(this, result, results, skuIds, numSkuIds);
}

/*
==============
bdMarketplace::deletePlayersEntitlements
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::deletePlayersEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceEntitlement *entitlements, const unsigned int numEntitlements)
{
  return ?deletePlayersEntitlements@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMarketplaceEntitlement@@I@Z(this, result, entitlements, numEntitlements);
}

/*
==============
bdMarketplace::verifyReceiptV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::verifyReceiptV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 platform, const char *receipt, const char *receiptSignature, bdMarketplaceReceiptStatus *const receiptStatus)
{
  return ?verifyReceiptV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@EPEBD0QEAVbdMarketplaceReceiptStatus@@@Z(this, result, platform, receipt, receiptSignature, receiptStatus);
}

/*
==============
bdMarketplace::getPlayerData
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayerData(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerData *a3)
{
  return ?getPlayerData@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdMarketplacePlayerData@@@Z(this, result, a3);
}

/*
==============
bdMarketplace::putPlayersEntitlements
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::putPlayersEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceEntitlement *entitlements, const unsigned __int8 numEntitlements)
{
  return ?putPlayersEntitlements@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdMarketplaceEntitlement@@E@Z(this, result, entitlements, numEntitlements);
}

/*
==============
bdMarketplace::getDiscountsForSkuIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getDiscountsForSkuIDs(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceDiscount *results, unsigned int pageNum, unsigned int itemsPerPage, const unsigned int *skuIds, unsigned int numSkuIds, unsigned int startTime, unsigned int endTime)
{
  return ?getDiscountsForSkuIDs@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceDiscount@@IIQEBIIII@Z(this, result, results, pageNum, itemsPerPage, skuIds, numSkuIds, startTime, endTime);
}

/*
==============
bdMarketplace::getBalancesV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getBalancesV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetPlayerBalancesRequest *request, bdGetPlayerBalancesResponse *response)
{
  return ?getBalancesV3@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetPlayerBalancesRequest@@PEAVbdGetPlayerBalancesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::validateInventoryItemsToken
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::validateInventoryItemsToken(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *const filename, const bdValidationTokenResult *validationToken, bdValidationTokenResult *validationTokenResult)
{
  return ?validateInventoryItemsToken@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDAEBVbdValidationTokenResult@@PEAV3@@Z(this, result, filename, validationToken, validationTokenResult);
}

/*
==============
bdMarketplace::getPlayersBalancesV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayersBalancesV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetPlayersBalancesRequest *request, bdGetPlayersBalancesResponse *response)
{
  return ?getPlayersBalancesV3@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetPlayersBalancesRequest@@PEAVbdGetPlayersBalancesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::bnetReconciliation
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::bnetReconciliation(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdBnetReconciliationRequest *request, bdBnetReconciliationResponse *response)
{
  return ?bnetReconciliation@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdBnetReconciliationRequest@@PEAVbdBnetReconciliationResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getCouponsByTypeV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getCouponsByTypeV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV4 *results, const bdMarketplace::bdCouponType couponType, const unsigned int pageNum, const unsigned int couponsPerPage)
{
  return ?getCouponsByTypeV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventoryV4@@W4bdCouponType@1@II@Z(this, result, results, couponType, pageNum, couponsPerPage);
}

/*
==============
bdMarketplace::purchaseOnWiiUFinalize
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnWiiUFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *ecServiceToken, bdExchangeTransactionResultV2 *a5)
{
  return ?purchaseOnWiiUFinalize@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEBDPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, ecServiceToken, a5);
}

/*
==============
bdMarketplace::switchReconciliation
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::switchReconciliation(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdSwitchReconciliationRequest *request, bdSwitchReconciliationResponse *response)
{
  return ?switchReconciliation@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdSwitchReconciliationRequest@@PEAVbdSwitchReconciliationResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::purchaseOnWiiUInitializeV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::purchaseOnWiiUInitializeV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdPurchaseWiiUInitV2Request *request, bdPurchaseWiiUInitV2Response *response)
{
  return ?purchaseOnWiiUInitializeV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdPurchaseWiiUInitV2Request@@PEAVbdPurchaseWiiUInitV2Response@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getDeletedSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getDeletedSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSkuTombstone *results, const unsigned int pageNum, const unsigned int itemsPerPage, const char *storeVersion)
{
  return ?getDeletedSkus@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceSkuTombstone@@IIPEBD@Z(this, result, results, pageNum, itemsPerPage, storeVersion);
}

/*
==============
bdMarketplace::getDeletedItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getDeletedItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceItemTombstone *results, const unsigned int pageNum, const unsigned int itemsPerPage, const char *storeVersion)
{
  return ?getDeletedItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceItemTombstone@@IIPEBD@Z(this, result, results, pageNum, itemsPerPage, storeVersion);
}

/*
==============
bdMarketplace::getInventoryItemIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventoryItemIDs(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventoryItemIdResult *results, const unsigned __int16 maxNumResults)
{
  return ?getInventoryItemIDs@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceInventoryItemIdResult@@G@Z(this, result, results, maxNumResults);
}

/*
==============
bdMarketplace::getDeletedProducts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getDeletedProducts(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProductTombstone *results, const unsigned int pageNum, const unsigned int itemsPerPage, const char *storeVersion)
{
  return ?getDeletedProducts@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceProductTombstone@@IIPEBD@Z(this, result, results, pageNum, itemsPerPage, storeVersion);
}

/*
==============
bdMarketplace::getUsageTime
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getUsageTime(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceUsageTime *usageTime)
{
  return ?getUsageTime@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdMarketplaceUsageTime@@@Z(this, result, usageTime);
}

/*
==============
bdMarketplace::applyConversionRule
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::applyConversionRule(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdApplyConversionRuleRequest *request, bdApplyConversionRuleResponse *response)
{
  return ?applyConversionRule@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdApplyConversionRuleRequest@@PEAVbdApplyConversionRuleResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getConversionRules
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getConversionRules(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetConversionRulesRequest *request, bdGetConversionRulesResponse *response)
{
  return ?getConversionRules@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetConversionRulesRequest@@PEAVbdGetConversionRulesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getPlayersEntitlements
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayersEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned __int8 numPlayerIds, bdMarketplaceEntitlement *results, const unsigned __int16 maxNumResults)
{
  return ?getPlayersEntitlements@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@EQEAVbdMarketplaceEntitlement@@G@Z(this, result, playerIds, numPlayerIds, results, maxNumResults);
}

/*
==============
bdMarketplace::donatePlayerInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::donatePlayerInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *recipientId, const bdMarketplaceItemQuantity *itemQuantities, const unsigned int numItems)
{
  return ?donatePlayerInventory@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEBVbdMarketplaceItemQuantity@@I@Z(this, result, recipientId, itemQuantities, numItems);
}

/*
==============
bdMarketplace::iTunesProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::iTunesProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const void *receipt, const unsigned int receiptSize, bdExchangeTransactionMultipleResults *transactionResult)
{
  return ?iTunesProcessProduct@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEBXIPEAVbdExchangeTransactionMultipleResults@@@Z(this, result, transactionId, receipt, receiptSize, transactionResult);
}

/*
==============
bdMarketplace::getPlayersInventories
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayersInventories(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned __int8 numPlayerIds, bdMarketplaceInventory *results, const unsigned __int16 maxNumResults)
{
  return ?getPlayersInventories@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@EQEAVbdMarketplaceInventory@@G@Z(this, result, playerIds, numPlayerIds, results, maxNumResults);
}

/*
==============
bdMarketplace::getMarketplaceVersion
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getMarketplaceVersion(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceVersion *version)
{
  return ?getMarketplaceVersion@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdMarketplaceVersion@@@Z(this, result, version);
}

/*
==============
bdMarketplace::weGameReconciliation
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::weGameReconciliation(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdWeGameReconciliationRequest *request, bdWeGameReconciliationResponse *response)
{
  return ?weGameReconciliation@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdWeGameReconciliationRequest@@PEAVbdWeGameReconciliationResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getConversionRules
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getConversionRules(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetConversionRulesByKindRequest *request, bdGetConversionRulesResponse *response)
{
  return ?getConversionRules@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetConversionRulesByKindRequest@@PEAVbdGetConversionRulesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::depositV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::depositV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, bdMarketplaceDepositResult *a6)
{
  return ?depositV3@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdMarketplacePlayerCurrency@@IPEAVbdMarketplaceDepositResult@@@Z(this, result, clientTransactionId, playerCurrencies, numPlayerCurrencies, a6);
}

/*
==============
bdMarketplace::startTask
==============
*/

void __fastcall bdMarketplace::startTask(bdMarketplace *this, bdReference<bdRemoteTask> *remoteTask, bdTaskParams *params)
{
  ?startTask@bdMarketplace@@IEAAXAEAV?$bdReference@VbdRemoteTask@@@@AEAVbdTaskParams@@@Z(this, remoteTask, params);
}

/*
==============
bdMarketplace::getExpiredInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getExpiredInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result)
{
  return ?getExpiredInventoryItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdMarketplace::donatePlayerInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::donatePlayerInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *recipientId, const bdMarketplaceItemQuantity *itemQuantities, const unsigned int numItems)
{
  return ?donatePlayerInventory@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@QEBVbdMarketplaceItemQuantity@@I@Z(this, result, clientTransactionId, recipientId, itemQuantities, numItems);
}

/*
==============
bdMarketplace::~bdMarketplace
==============
*/

void __fastcall bdMarketplace::~bdMarketplace(bdMarketplace *this)
{
  ??1bdMarketplace@@QEAA@XZ(this);
}

/*
==============
bdMarketplace::wiiUProcessDurableV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::wiiUProcessDurableV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdWiiUProcessDurableV2Request *request, bdWiiUProcessDurableV2Response *response)
{
  return ?wiiUProcessDurableV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdWiiUProcessDurableV2Request@@PEAVbdWiiUProcessDurableV2Response@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getPendingCouponInventoryV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPendingCouponInventoryV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV3 *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  return ?getPendingCouponInventoryV3@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventoryV3@@II@Z(this, result, results, pageNum, itemsPerPage);
}

/*
==============
bdMarketplace::getPlayersUsageTimes
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPlayersUsageTimes(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceUsageTime *playerUsageTimes, const unsigned __int16 maxNumResults)
{
  return ?getPlayersUsageTimes@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceUsageTime@@G@Z(this, result, playerUsageTimes, maxNumResults);
}

/*
==============
bdMarketplace::getRewards
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getRewards(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *rewardIds, unsigned int numRewardIds, bdMarketplaceReward *results, unsigned int maxNumResults)
{
  return ?getRewards@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBIIQEAVbdMarketplaceReward@@I@Z(this, result, rewardIds, numRewardIds, results, maxNumResults);
}

/*
==============
bdMarketplace::getInventoryByItemIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getInventoryByItemIDs(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *itemIDs, const unsigned int numItems, bdMarketplaceInventory *results, const unsigned __int16 maxNumResults)
{
  return ?getInventoryByItemIDs@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBIIQEAVbdMarketplaceInventory@@G@Z(this, result, itemIDs, numItems, results, maxNumResults);
}

/*
==============
bdMarketplace::depositV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::depositV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, const unsigned int customSourceType, bdMarketplaceDepositResult *a7)
{
  return ?depositV3@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdMarketplacePlayerCurrency@@IIPEAVbdMarketplaceDepositResult@@@Z(this, result, clientTransactionId, playerCurrencies, numPlayerCurrencies, customSourceType, a7);
}

/*
==============
bdMarketplace::bdMarketplace
==============
*/

void __fastcall bdMarketplace::bdMarketplace(bdMarketplace *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdMarketplace@@QEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdMarketplace::startStructTask
==============
*/

void __fastcall bdMarketplace::startStructTask(bdMarketplace *this, bdReference<bdStructBufferTask> *remoteTask, const unsigned __int8 taskID, bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  ?startStructTask@bdMarketplace@@IEAAXAEAV?$bdReference@VbdStructBufferTask@@@@EPEAVbdStructBufferSerializable@@1@Z(this, remoteTask, taskID, request, response);
}

/*
==============
bdMarketplace::giftCoupon
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::giftCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned int *skuIds, const unsigned __int8 numSkuIds, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 *customSourceType, const unsigned int *startDateTimes, const unsigned int *expireDateTimes)
{
  return ?giftCoupon@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAccountID@@QEBIEQEAPEBE1QEBE11@Z(this, result, playerIds, skuIds, numSkuIds, couponMetadata, metadataSize, customSourceType, startDateTimes, expireDateTimes);
}

/*
==============
bdMarketplace::validateInventoriesItems
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::validateInventoriesItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdValidateInventoriesItemsRequest *request, bdValidateInventoriesItemsResponse *response)
{
  return ?validateInventoriesItems@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdValidateInventoriesItemsRequest@@PEAVbdValidateInventoriesItemsResponse@@@Z(this, result, request, response);
}

/*
==============
bdMarketplace::getPendingCouponInventoryV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getPendingCouponInventoryV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  return ?getPendingCouponInventoryV2@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventory@@II@Z(this, result, results, pageNum, itemsPerPage);
}

/*
==============
bdMarketplace::startExchangeTransaction
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::startExchangeTransaction(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdStringResult *transactionId)
{
  return ?startExchangeTransaction@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, transactionId);
}

/*
==============
bdMarketplace::deleteInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::deleteInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result)
{
  return ?deleteInventory@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdMarketplace::getCouponsByType
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMarketplace::getCouponsByType(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV2 *results, const bdMarketplace::bdCouponType couponType, const unsigned int pageNum, const unsigned int couponsPerPage)
{
  return ?getCouponsByType@bdMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplaceCouponInventoryV2@@W4bdCouponType@1@II@Z(this, result, results, couponType, pageNum, couponsPerPage);
}

/*
==============
bdMarketplace::bdMarketplace
==============
*/
void bdMarketplace::bdMarketplace(bdMarketplace *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdMarketplace::~bdMarketplace
==============
*/
void bdMarketplace::~bdMarketplace(bdMarketplace *this)
{
  ;
}

/*
==============
bdMarketplace::applyConversionRule
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::applyConversionRule(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdApplyConversionRuleRequest *request, bdApplyConversionRuleResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdStrlcpy((char *const)&request->__vftable + 16, this->m_context, 0x10ui64);
  bdHandleAssert(request->m_conversionRuleID[0] != 0, "bdStrcmp(request->m_conversionRuleID, \"\") != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::applyConversionRule", 0x12Du, "Cannot call applyConversionRule with empty ruleID");
  bdHandleAssert(request->m_quantity != 0, "request->m_quantity > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::applyConversionRule", 0x12Eu, "Cannot call applyConversionRule with zero quantity");
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF2u, request, response, NULL);
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
bdMarketplace::bnetReconciliation
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::bnetReconciliation(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdBnetReconciliationRequest *request, bdBnetReconciliationResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  if ( bdBnetReconciliationRequest::isRequestValid(request) )
  {
    bdBnetReconciliationRequest::setContext(request, this->m_context);
    started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF3u, request, response, NULL);
    if ( started )
    {
      v11 = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v11);
    }
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
bdMarketplace::deleteExpiredInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::deleteExpiredInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *itemIds, const unsigned __int16 numItems)
{
  unsigned __int16 v8; 
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  int v14; 
  bdTaskParams params; 

  v8 = 0;
  result->m_ptr = NULL;
  v14 = 1;
  bdHandleAssert(itemIds != NULL, "(itemIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::deleteExpiredInventoryItems", 0xB4Du, "Cannot Call deleteExpiredInventoryItems() with NULL itemIds", v14, -2i64);
  bdHandleAssert(numItems != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::deleteExpiredInventoryItems", 0xB4Eu, "Cannot Call deleteExpiredInventoryItems() with zero itemIds");
  if ( itemIds && numItems )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x32u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    do
    {
      LOBYTE(v10) = 1;
      if ( params.ensureCapacity(&params, 4u, v10) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemIds[v8]), params.m_serializeOk = 1, !v12) )
          params.m_serializeOk = 0;
      }
      ++v8;
    }
    while ( v8 < numItems );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::deleteInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::deleteInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x8Eu, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::deletePlayersEntitlements
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::deletePlayersEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceEntitlement *entitlements, const unsigned int numEntitlements)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdTaskParams params; 

  v4 = numEntitlements;
  result->m_ptr = NULL;
  bdHandleAssert(entitlements != NULL, "(entitlements != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::deletePlayersEntitlements", 0x78Fu, "Cannot call deletePlayersEntitlements() with a NULL entitlements", 1, -2i64);
  bdHandleAssert((_DWORD)v4 != 0, "(numEntitlements > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::deletePlayersEntitlements", 0x790u, "Cannot call deletePlayersEntitlements() with zero numEntitlements");
  if ( entitlements && (_DWORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x69u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v8 = (const bdSerializable *)(&entitlements->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v8);
      v8 += 254;
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
bdMarketplace::depositV3
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::depositV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, const unsigned int customSourceType, bdMarketplaceDepositResult *resulta)
{
  __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  const bdSerializable *v14; 
  _BOOL8 v15; 
  bool v16; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(playerCurrencies != NULL, "(playerCurrencies != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::depositV3", 0x6Cu, "Cannot call deposit() with a NULL playerCurrencies");
  v11 = numPlayerCurrencies;
  bdHandleAssert(numPlayerCurrencies != 0, "(numPlayerCurrencies > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::depositV3", 0x6Du, "Cannot call deposit() with zero numPlayerCurrencies");
  if ( playerCurrencies && numPlayerCurrencies )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 2u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numPlayerCurrencies), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    v14 = (const bdSerializable *)(&playerCurrencies->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&params, v14);
      v14 += 4;
      --v11;
    }
    while ( v11 );
    LOBYTE(v15) = 1;
    if ( params.ensureCapacity(&params, 4u, v15) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, customSourceType), params.m_serializeOk = 1, !v16) )
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
bdMarketplace::depositV3
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::depositV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned int numPlayerCurrencies, bdMarketplaceDepositResult *resulta)
{
  bdMarketplace::depositV3(this, result, clientTransactionId, playerCurrencies, numPlayerCurrencies, 0, resulta);
  return result;
}

/*
==============
bdMarketplace::donatePlayerInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::donatePlayerInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *recipientId, const bdMarketplaceItemQuantity *itemQuantities, const unsigned int numItems)
{
  const bdMarketplaceItemQuantity *v10; 
  __int64 v11; 
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams params; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = recipientId;
  v10 = itemQuantities;
  result->m_ptr = NULL;
  bdHandleAssert(itemQuantities != NULL, "(itemQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::donatePlayerInventory", 0xB89u, "Cannot call donatePlayerInventory() with NULL itemQuantities", 1);
  v11 = numItems;
  bdHandleAssert(numItems != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::donatePlayerInventory", 0xB8Au, "Cannot call donatePlayerInventory() with zero itemQuantities");
  if ( itemQuantities && numItems )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xEDu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, clientTransactionId, 0x19ui64);
    bdTaskParams::addContextUser(&params, recipientId);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdBufferParams::addSerializable(&params, v10++);
      --v11;
    }
    while ( v11 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)recipientId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)recipientId->gap38);
  return result;
}

/*
==============
bdMarketplace::donatePlayerInventory
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::donatePlayerInventory(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *recipientId, const bdMarketplaceItemQuantity *itemQuantities, const unsigned int numItems)
{
  const bdMarketplaceItemQuantity *v5; 
  __int64 v9; 
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams params; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 

  v14 = -2i64;
  v5 = itemQuantities;
  v15 = result;
  v16 = recipientId;
  result->m_ptr = NULL;
  bdHandleAssert(itemQuantities != NULL, "(itemQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::donatePlayerInventory", 0xB6Au, "Cannot call donatePlayerInventory() with NULL itemQuantities", 1);
  v9 = numItems;
  bdHandleAssert(numItems != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::donatePlayerInventory", 0xB6Bu, "Cannot call donatePlayerInventory() with zero itemQuantities");
  if ( v5 && numItems )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xE9u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdTaskParams::addContextUser(&params, recipientId);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numItems), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    do
    {
      bdBufferParams::addSerializable(&params, v5++);
      --v9;
    }
    while ( v9 );
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)recipientId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)recipientId->gap38);
  return result;
}

/*
==============
bdMarketplace::getAllPlayerData
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getAllPlayerData(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned int numPlayerIds, bdMarketplacePlayerData *results, const unsigned int maxNumResults)
{
  __int64 v6; 
  const bdUserAccountID *v7; 
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams params; 

  v6 = numPlayerIds;
  v7 = playerIds;
  result->m_ptr = NULL;
  bdHandleAssert(playerIds != NULL, "(playerIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getAllPlayerData", 0x927u, "Cannot call getAllPlayerData() with a NULL playerIds");
  bdHandleAssert((_DWORD)v6 != 0, "(numPlayerIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getAllPlayerData", 0x928u, "Cannot call getAllPlayerData() with zero numPlayerIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getAllPlayerData", 0x929u, "Cannot call getAllPlayerData() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getAllPlayerData", 0x92Au, "Cannot call getAllPlayerData() with zero maxNumResults");
  if ( v7 && (_DWORD)v6 && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xE7u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
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
bdMarketplace::getBalancesV3
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getBalancesV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetPlayerBalancesRequest *request, bdGetPlayerBalancesResponse *response)
{
  unsigned int MaxNumResults; 
  unsigned int v9; 
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v13; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  MaxNumResults = bdGetPlayerBalancesRequest::getMaxNumResults(request);
  bdHandleAssert(MaxNumResults != 0, "(request->getMaxNumResults() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getBalancesV3", 0x8Fu, "Cannot call getBalancesV3() with zero m_maxNumResults");
  v9 = bdGetPlayerBalancesRequest::getMaxNumResults(request);
  bdHandleAssert(v9 <= 0x10, "(request->getMaxNumResults() <= BD_MARKETPLACE_MAX_NUM_CURRENCIES)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getBalancesV3", 0x93u, "Cannot call getBalancesV3() with m_maxNumResults greater than BD_MARKETPLACE_MAX_NUM_CURRENCIES");
  bdGetPlayerBalancesRequest::setContext(request, this->m_context);
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF5u, request, response, NULL);
  if ( started )
  {
    v13 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v13);
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
bdMarketplace::getConversionRules
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getConversionRules(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetConversionRulesByIDsRequest *request, bdGetConversionRulesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdStrlcpy((char *const)&request->__vftable + 16, this->m_context, 0x10ui64);
  bdHandleAssert(*(&request->m_itemsPerPage + 5) != 0, "(request->m_conversionRuleIDs.getSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getConversionRules", 0x11Au, "Cannot call getConversionRules (filter by conversion rule IDs) with empty ID array");
  bdHandleAssert(request->m_itemsPerPage != 0, "(request->m_itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getConversionRules", 0x11Bu, "Cannot call getConversionRules with 0 pageSize");
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF1u, request, response, NULL);
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
bdMarketplace::getConversionRules
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getConversionRules(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetConversionRulesByKindRequest *request, bdGetConversionRulesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdStrlcpy((char *const)&request->__vftable + 16, this->m_context, 0x10ui64);
  bdHandleAssert(request->m_itemsPerPage != 0, "(request->m_itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getConversionRules", 0x108u, "Cannot call getConversionRules with 0 pageSize");
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF0u, request, response, NULL);
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
bdMarketplace::getConversionRules
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getConversionRules(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetConversionRulesRequest *request, bdGetConversionRulesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdStrlcpy((char *const)&request->__vftable + 16, this->m_context, 0x10ui64);
  bdHandleAssert(request->m_itemsPerPage != 0, "(request->m_itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getConversionRules", 0xF6u, "Cannot call getConversionRules with 0 pageSize");
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xEFu, request, response, NULL);
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
bdMarketplace::getCouponsByType
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getCouponsByType(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV2 *results, const bdMarketplace::bdCouponType couponType, const unsigned int pageNum, const unsigned int couponsPerPage)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getCouponsByType", 0x843u, "Cannot call getCouponsByType() with NULL results");
  bdHandleAssert(couponsPerPage != 0, "(couponsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getCouponsByType", 0x844u, "Cannot call getCouponsByType() with zero coupons per page");
  if ( results && couponsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xAAu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, couponType), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
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
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, couponsPerPage), params.m_serializeOk = 1, !v15) )
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
      params.m_maxResults = couponsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getCouponsByTypeV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getCouponsByTypeV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV4 *results, const bdMarketplace::bdCouponType couponType, const unsigned int pageNum, const unsigned int couponsPerPage)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getCouponsByTypeV2", 0x860u, "Cannot call getCouponsByTypeV2() with NULL results");
  bdHandleAssert(couponsPerPage != 0, "(couponsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getCouponsByTypeV2", 0x861u, "Cannot call getCouponsByTypeV2() with zero coupons per page");
  if ( results && couponsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xB0u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, couponType), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
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
      if ( !params.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, couponsPerPage), params.m_serializeOk = 1, !v15) )
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
      params.m_maxResults = couponsPerPage;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getDeletedItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getDeletedItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceItemTombstone *results, const unsigned int pageNum, const unsigned int itemsPerPage, const char *storeVersion)
{
  unsigned int v10; 
  const char *v11; 
  unsigned __int64 v12; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  bool v17; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 

  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedItems", 0x248u, "Cannot call getDeletedItems() with a NULL results");
  v10 = itemsPerPage;
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedItems", 0x249u, "Cannot call getDeletedItems() with zero itemsPerPage");
  v11 = storeVersion;
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  do
    ++v12;
  while ( v11[v12] );
  if ( v12 <= 0x20 )
  {
    if ( results && v10 )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x6Du, 0x400u, 0xFFFFu);
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
        if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v10), params.m_serializeOk = 1, !v17) )
          params.m_serializeOk = 0;
      }
      bdBufferParams::addString(&params, v11, 0x20ui64);
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = results;
        params.m_maxResults = v10;
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
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedItems", 0x24Du, "Version Number exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getDeletedProducts
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getDeletedProducts(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceProductTombstone *results, const unsigned int pageNum, const unsigned int itemsPerPage, const char *storeVersion)
{
  unsigned int v10; 
  const char *v11; 
  unsigned __int64 v12; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  bool v17; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 

  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedProducts", 0x170u, "Cannot call getDeletedProducts() with a NULL results");
  v10 = itemsPerPage;
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedProducts", 0x171u, "Cannot call getDeletedProducts() with zero itemsPerPage");
  v11 = storeVersion;
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  do
    ++v12;
  while ( v11[v12] );
  if ( v12 <= 0x20 )
  {
    if ( results && v10 )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x6Cu, 0x400u, 0xFFFFu);
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
        if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v10), params.m_serializeOk = 1, !v17) )
          params.m_serializeOk = 0;
      }
      bdBufferParams::addString(&params, v11, 0x20ui64);
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = results;
        params.m_maxResults = v10;
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
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedProducts", 0x175u, "Version Number exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getDeletedSkus
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getDeletedSkus(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceSkuTombstone *results, const unsigned int pageNum, const unsigned int itemsPerPage, const char *storeVersion)
{
  unsigned int v10; 
  const char *v11; 
  unsigned __int64 v12; 
  bdRemoteTask *m_ptr; 
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  bool v17; 
  bdTaskParams params; 
  bdReference<bdRemoteTask> remoteTask; 

  remoteTask.m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedSkus", 0x1F2u, "Cannot call getDeletedSkus() with a NULL results");
  v10 = itemsPerPage;
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedSkus", 0x1F3u, "Cannot call getDeletedSkus() with zero itemsPerPage");
  v11 = storeVersion;
  bdHandleAssert(storeVersion != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v12 = -1i64;
  do
    ++v12;
  while ( v11[v12] );
  if ( v12 <= 0x20 )
  {
    if ( results && v10 )
    {
      bdTaskParams::bdTaskParams(&params, 0x50u, 0x6Bu, 0x400u, 0xFFFFu);
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
        if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v10), params.m_serializeOk = 1, !v17) )
          params.m_serializeOk = 0;
      }
      bdBufferParams::addString(&params, v11, 0x20ui64);
      if ( params.m_taskResults || params.m_taskResultRefs )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
        params.m_serializeOk = 0;
      }
      else
      {
        params.m_taskResults = results;
        params.m_maxResults = v10;
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
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDeletedSkus", 0x1F7u, "Version Number exceeded maximum size");
    result->m_ptr = NULL;
    m_ptr = remoteTask.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && remoteTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::getDiscountsForPlayer
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getDiscountsForPlayer(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceDiscountInfo *results, unsigned int pageNum, unsigned int itemsPerPage, unsigned int startTime, unsigned int endTime)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDiscountsForPlayer", 0x2F8u, "Cannot call getDiscountsForPlayer with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDiscountsForPlayer", 0x2F9u, "Cannot call getDiscountsForPlayer with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x77u, 0x400u, 0xFFFFu);
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
    if ( params.ensureCapacity(&params, 4u, v14) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, startTime), params.m_serializeOk = 1, !v17) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    if ( params.ensureCapacity(&params, 4u, v16) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, endTime), params.m_serializeOk = 1, !v18) )
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
bdMarketplace::getDiscountsForSkuIDs
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getDiscountsForSkuIDs(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceDiscount *results, unsigned int pageNum, unsigned int itemsPerPage, const unsigned int *skuIds, unsigned int numSkuIds, unsigned int startTime, unsigned int endTime)
{
  const unsigned int *v13; 
  __int64 v14; 
  _BOOL8 v15; 
  _BOOL8 v16; 
  bool v17; 
  _BOOL8 v18; 
  bool v19; 
  _BOOL8 v20; 
  bool v21; 
  _BOOL8 v22; 
  bool v23; 
  _BOOL8 v24; 
  bool v25; 
  bool v26; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  v13 = skuIds;
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDiscountsForSkuIDs", 0x2D0u, "Cannot call getDiscountsForSkuIDs with a NULL skuIds");
  v14 = numSkuIds;
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDiscountsForSkuIDs", 0x2D1u, "Cannot call getDiscountsForSkuIDs with zero numSkuIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDiscountsForSkuIDs", 0x2D2u, "Cannot call getDiscountsForSkuIDs with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getDiscountsForSkuIDs", 0x2D3u, "Cannot call getDiscountsForSkuIDs with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x4Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v15) = 1;
    if ( params.ensureCapacity(&params, 4u, v15) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, pageNum), params.m_serializeOk = 1, !v17) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    if ( params.ensureCapacity(&params, 4u, v16) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, itemsPerPage), params.m_serializeOk = 1, !v19) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v18) = 1;
    if ( params.ensureCapacity(&params, 4u, v18) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, startTime), params.m_serializeOk = 1, !v21) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v20) = 1;
    if ( params.ensureCapacity(&params, 4u, v20) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v23 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, endTime), params.m_serializeOk = 1, !v23) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v22) = 1;
    if ( params.ensureCapacity(&params, 4u, v22) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v25 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, numSkuIds), params.m_serializeOk = 1, !v25) )
        params.m_serializeOk = 0;
    }
    if ( numSkuIds )
    {
      do
      {
        LOBYTE(v24) = 1;
        if ( params.ensureCapacity(&params, 4u, v24) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v26 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *v13), params.m_serializeOk = 1, !v26) )
            params.m_serializeOk = 0;
        }
        ++v13;
        --v14;
      }
      while ( v14 );
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
bdMarketplace::getEntitlements
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceEntitlement *a3)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(a3 != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getEntitlements", 0x778u, "Cannot call getEntitlements() with a NULL result");
  if ( a3 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xE8u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = a3;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getExpiredInventoryItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getExpiredInventoryItems(bdMarketplace *this, bdReference<bdRemoteTask> *result)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x31u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::getFPSkusPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getFPSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceFPSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll)
{
  bdMarketplace::getFPSkusPaginated(this, result, results, pageNum, itemsPerPage, showAll, NULL, NULL, 0);
  return result;
}

/*
==============
bdMarketplace::getFPSkusPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getFPSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceFPSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const char *firstParty)
{
  bdMarketplace::getFPSkusPaginated(this, result, results, pageNum, itemsPerPage, showAll, firstParty, NULL, 0);
  return result;
}

/*
==============
bdMarketplace::getFPSkusPaginated
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getFPSkusPaginated(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceFPSku *results, const unsigned int pageNum, const unsigned int itemsPerPage, const bool showAll, const char *firstParty, const unsigned int *fpSkuIds, const unsigned int numFPSkuIds)
{
  _BOOL8 v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  bool v19; 
  unsigned __int64 v20; 
  size_t v21; 
  unsigned __int64 v22; 
  const char *v23; 
  _BOOL8 v24; 
  __int64 v25; 
  bool v26; 
  bdTaskParams params; 
  int v29; 
  __int64 v30; 
  bdReference<bdRemoteTask> *v31; 
  char str[16]; 

  v30 = -2i64;
  v31 = result;
  result->m_ptr = NULL;
  v29 = 1;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getFPSkusPaginated", 0x289u, "Cannot call getFPSkusPaginated() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getFPSkusPaginated", 0x28Au, "Cannot call getFPSkusPaginated() with zero itemsPerPage");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xBBu, 0x400u, 0xFFFFu);
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
    if ( params.ensureCapacity(&params, 1u, v17) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v19 = bdByteBuffer::writeBool(params.m_buffer.m_ptr, showAll), params.m_serializeOk = 1, !v19) )
        params.m_serializeOk = 0;
    }
    if ( firstParty )
    {
      v20 = bdStrlen(firstParty);
      v21 = 15i64;
      bdHandleAssert(v20 < 0x10, "(bdStrlen(firstParty) < BD_MAX_CONTEXT_NAME_LENGTH)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getFPSkusPaginated", 0x29Bu, "FirstParty platform longer than [%u] bytes, will be truncated", 15);
      if ( bdStrlen(firstParty) >= 0x10 )
        bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getFPSkusPaginated", 0x2A0u, "FirstParty platform longer than [%u] bytes, will be truncated", 15);
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v22 = -1i64;
      do
        ++v22;
      while ( firstParty[v22] );
      v23 = firstParty;
    }
    else
    {
      bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v23 = "xb1";
      v22 = -1i64;
      do
        ++v22;
      while ( aXb1_0[v22] );
      v21 = 15i64;
    }
    if ( v22 < 0xF )
      v21 = v22;
    memcpy_0(str, v23, v21);
    str[v21] = 0;
    bdBufferParams::addString(&params, str, 0x10ui64);
    if ( numFPSkuIds )
    {
      v25 = numFPSkuIds;
      do
      {
        LOBYTE(v24) = 1;
        if ( params.ensureCapacity(&params, 4u, v24) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v26 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *fpSkuIds), params.m_serializeOk = 1, !v26) )
            params.m_serializeOk = 0;
        }
        ++fpSkuIds;
        --v25;
      }
      while ( v25 );
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
bdMarketplace::getInventoryByItemIDs
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventoryByItemIDs(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *itemIDs, const unsigned int numItems, bdMarketplaceInventory *results, const unsigned __int16 maxNumResults)
{
  __int64 v6; 
  const unsigned int *v7; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bdTaskParams params; 

  v6 = numItems;
  v7 = itemIDs;
  result->m_ptr = NULL;
  bdHandleAssert(itemIDs != NULL, "(itemIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryByItemIDs", 0x63Cu, "Cannot call getInventoryByItemIDs() with a NULL itemsIDs array");
  bdHandleAssert((_DWORD)v6 != 0, "(numItems > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryByItemIDs", 0x63Du, "Cannot call getInventoryByItemIDs() with zero numItemIDs");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryByItemIDs", 0x63Eu, "Cannot call getInventoryByItemIDs() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryByItemIDs", 0x63Fu, "Cannot call getInventoryByItemIDs() with zero maxNumResults");
  if ( results && (_DWORD)v6 && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x39u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v6), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    do
    {
      LOBYTE(v11) = 1;
      if ( params.ensureCapacity(&params, 4u, v11) )
      {
        if ( params.m_isWritingArray )
          --params.m_arrayWriteCount;
        if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *v7), params.m_serializeOk = 1, !v13) )
          params.m_serializeOk = 0;
      }
      ++v7;
      --v6;
    }
    while ( v6 );
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 2u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v14) )
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
bdMarketplace::getInventoryItemIDs
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getInventoryItemIDs(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceInventoryItemIdResult *results, const unsigned __int16 maxNumResults)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryItemIDs", 0x621u, "Cannot call getInventoryItemIDs() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getInventoryItemIDs", 0x622u, "Cannot call getInventoryItemIDs() with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x38u, 0x400u, 0xFFFFu);
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
bdMarketplace::getLimitedSkuQuantities
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getLimitedSkuQuantities(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceLimitedSkuQuantity *results, const unsigned int *skuIds, const unsigned int numSkuIds)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  __int64 v12; 
  bool v13; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getLimitedSkuQuantities", 0x1CFu, "Cannot call getLimitedSkuQuantities() with a NULL results");
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getLimitedSkuQuantities", 0x1D0u, "Cannot call getLimitedSkuQuantities() with a NULL skuIds");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getLimitedSkuQuantities", 0x1D1u, "Cannot call getLimitedSkuQuantities() with zero numSkuIds");
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
bdMarketplace::getMarketplaceVersion
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getMarketplaceVersion(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceVersion *version)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  if ( version )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xEEu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = version;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getMarketplaceVersion", 0xC03u, "Cannot call getMarketplaceVersion with a NULL version result");
  }
  return result;
}

/*
==============
bdMarketplace::getPendingCouponInventoryV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPendingCouponInventoryV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventory *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPendingCouponInventoryV2", 0x7D1u, "Cannot call getPendingCouponInventoryV2() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPendingCouponInventoryV2", 0x7D3u, "Cannot call getPendingCouponInventoryV2() with zero items per page");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x75u, 0x400u, 0xFFFFu);
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
bdMarketplace::getPendingCouponInventoryV3
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPendingCouponInventoryV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV3 *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPendingCouponInventoryV3", 0x7EEu, "Cannot call getPendingCouponInventoryV3() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPendingCouponInventoryV3", 0x7F0u, "Cannot call getPendingCouponInventoryV3() with zero items per page");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xAEu, 0x400u, 0xFFFFu);
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
bdMarketplace::getPendingCouponInventoryV4
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPendingCouponInventoryV4(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceCouponInventoryV4 *results, const unsigned int pageNum, const unsigned int itemsPerPage)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPendingCouponInventoryV4", 0x80Cu, "Cannot call getPendingCouponInventoryV4() with a NULL results");
  bdHandleAssert(itemsPerPage != 0, "(itemsPerPage > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPendingCouponInventoryV4", 0x80Eu, "Cannot call getPendingCouponInventoryV4() with zero items per page");
  if ( results && itemsPerPage )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xB1u, 0x400u, 0xFFFFu);
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
bdMarketplace::getPlayerData
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayerData(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerData *a3)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(a3 != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayerData", 0x90Fu, "Cannot call getPlayerData() with a NULL result");
  if ( a3 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xE6u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = a3;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getPlayersBalancesV3
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayersBalancesV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdGetPlayersBalancesRequest *request, bdGetPlayersBalancesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdStrlcpy((char *const)&request->__vftable + 16, this->m_context, 0x10ui64);
  bdHandleAssert(request->m_userAccounts.m_size != 0, "(request->m_userAccounts.getSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersBalancesV3", 0xA9u, "Cannot call getPlayersBalancesV3() with empty m_userAccounts");
  bdHandleAssert(request->m_maxNumResults != 0, "(request->m_maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersBalancesV3", 0xADu, "Cannot call getPlayersBalancesV3() with zero m_maxNumResults");
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xABu, request, response, NULL);
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
bdMarketplace::getPlayersEntitlements
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayersEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned __int8 numPlayerIds, bdMarketplaceEntitlement *results, const unsigned __int16 maxNumResults)
{
  __int64 v6; 
  const bdUserAccountID *v7; 
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams params; 

  LOBYTE(v6) = numPlayerIds;
  v7 = playerIds;
  result->m_ptr = NULL;
  bdHandleAssert(playerIds != NULL, "(playerIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersEntitlements", 0x759u, "Cannot call getPlayersEntitlements() with a NULL playerIds");
  bdHandleAssert((_BYTE)v6 != 0, "(numPlayerIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersEntitlements", 0x75Au, "Cannot call getPlayersEntitlements() with zero numPlayerIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersEntitlements", 0x75Bu, "Cannot call getPlayersEntitlements() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersEntitlements", 0x75Cu, "Cannot call getPlayersEntitlements() with zero maxNumResults");
  if ( v7 && (_BYTE)v6 && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xE5u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 2u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    v6 = (unsigned __int8)v6;
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
bdMarketplace::getPlayersInventories
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayersInventories(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned __int8 numPlayerIds, bdMarketplaceInventory *results, const unsigned __int16 maxNumResults)
{
  __int64 v6; 
  const bdUserAccountID *v7; 
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams params; 

  LOBYTE(v6) = numPlayerIds;
  v7 = playerIds;
  result->m_ptr = NULL;
  bdHandleAssert(playerIds != NULL, "(playerIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersInventories", 0x693u, "Cannot call getPlayersInventories() with a NULL playerIds");
  bdHandleAssert((_BYTE)v6 != 0, "(numPlayerIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersInventories", 0x694u, "Cannot call getPlayersInventories() with zero numPlayerIds");
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersInventories", 0x695u, "Cannot call getPlayersInventories() with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersInventories", 0x696u, "Cannot call getPlayersInventories() with zero maxNumResults");
  if ( v7 && (_BYTE)v6 && results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x8Du, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 2u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUInt16(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    v6 = (unsigned __int8)v6;
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
bdMarketplace::getPlayersUsageTimes
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getPlayersUsageTimes(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceUsageTime *playerUsageTimes, const unsigned __int16 maxNumResults)
{
  __int64 v4; 
  unsigned int v8; 
  _BOOL8 v9; 
  bool v10; 
  const bdUserAccountID *bytes_20; 
  bdTaskParams params; 

  LOWORD(v4) = maxNumResults;
  result->m_ptr = NULL;
  bdHandleAssert(playerUsageTimes != NULL, "(playerUsageTimes != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersUsageTimes", 0xBBAu, "Cannot call getPlayersUsageTimes() with a NULL playerUsageTimes");
  bdHandleAssert((_WORD)v4 != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getPlayersUsageTimes", 0xBBBu, "Cannot call getPlayersUsageTimes() with zero maxNumResults");
  if ( playerUsageTimes && (_WORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x34u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v8 = (unsigned __int16)v4;
    LOBYTE(v9) = 1;
    if ( params.ensureCapacity(&params, 4u, v9) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int16)v4), params.m_serializeOk = 1, !v10) )
        params.m_serializeOk = 0;
    }
    bytes_20 = (const bdUserAccountID *)playerUsageTimes->_bytes_20;
    v4 = (unsigned __int16)v4;
    do
    {
      bdTaskParams::addContextUser(&params, bytes_20);
      bytes_20 = (const bdUserAccountID *)((char *)bytes_20 + 128);
      --v4;
    }
    while ( v4 );
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = playerUsageTimes;
      params.m_maxResults = v8;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::getRewards
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getRewards(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int *rewardIds, unsigned int numRewardIds, bdMarketplaceReward *results, unsigned int maxNumResults)
{
  __int64 v6; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  bdTaskParams params; 

  v6 = numRewardIds;
  result->m_ptr = NULL;
  bdHandleAssert(results != NULL, "(results != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getRewards", 0x318u, "Cannot call getRewards with a NULL results");
  bdHandleAssert(maxNumResults != 0, "(maxNumResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getRewards", 0x319u, "Cannot call getRewards with zero maxNumResults");
  if ( results && maxNumResults )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x6Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 4u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, v6), params.m_serializeOk = 1, !v12) )
        params.m_serializeOk = 0;
    }
    if ( (_DWORD)v6 )
    {
      do
      {
        LOBYTE(v11) = 1;
        if ( params.ensureCapacity(&params, 4u, v11) )
        {
          if ( params.m_isWritingArray )
            --params.m_arrayWriteCount;
          if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, *rewardIds), params.m_serializeOk = 1, !v13) )
            params.m_serializeOk = 0;
        }
        ++rewardIds;
        --v6;
      }
      while ( v6 );
    }
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 4u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, maxNumResults), params.m_serializeOk = 1, !v14) )
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
bdMarketplace::getUsageTime
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::getUsageTime(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplaceUsageTime *usageTime)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(usageTime != NULL, "(usageTime != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::getUsageTime", 0xBA3u, "Cannot call getUsageTime() with a NULL usageTime");
  if ( usageTime )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x33u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = usageTime;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::giftCoupon
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::giftCoupon(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned int *skuIds, const unsigned __int8 numSkuIds, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 *customSourceType, const unsigned int *startDateTimes, const unsigned int *expireDateTimes)
{
  const bdUserAccountID *v11; 
  bdReference<bdRemoteTask> *v12; 
  bool v14; 
  unsigned __int8 v15; 
  const unsigned int *v16; 
  const void **v17; 
  unsigned __int8 v18; 
  _BOOL8 v19; 
  _BOOL8 v20; 
  bool v21; 
  __int64 v22; 
  _BOOL8 v23; 
  bool v24; 
  unsigned __int8 i; 
  bool v26; 
  bool v27; 
  _BOOL8 v28; 
  bool v29; 
  __int64 v30; 
  bool v31; 
  const unsigned __int8 *v32; 
  bool v33; 
  _BOOL8 v34; 
  bool v35; 
  unsigned __int8 j; 
  bool v37; 
  bool v38; 
  const unsigned int *v39; 
  bool v40; 
  _BOOL8 v41; 
  bool v42; 
  unsigned __int8 k; 
  bool v44; 
  bool v45; 
  const unsigned int *v46; 
  bool v47; 
  _BOOL8 v48; 
  bool v49; 
  unsigned __int8 m; 
  bool v51; 
  bool v52; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  bdTaskParams taskParams; 
  bdReference<bdRemoteTask> newTask; 

  v11 = playerIds;
  v12 = result;
  newTask.m_ptr = NULL;
  v14 = playerIds && skuIds;
  bdHandleAssert(v14, "(playerIds != BD_NULL && skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCoupon", 0x3BBu, "Cannot call giftCoupon() with a NULL playerIds or skuIds");
  v15 = numSkuIds;
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCoupon", 0x3BCu, "Cannot call giftCoupon() with zero numSkuIds");
  v16 = metadataSize;
  v17 = (const void **)couponMetadata;
  if ( couponMetadata && (v18 = 0, v15) )
  {
    while ( metadataSize[v18] <= 0x40 )
    {
      if ( ++v18 >= v15 )
        goto LABEL_9;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCoupon", 0x3C5u, "Metadata '%s' exceeded maximum size", (const char *)couponMetadata[v18]);
    v12->m_ptr = NULL;
  }
  else
  {
LABEL_9:
    bdTaskParams::bdTaskParams(&taskParams, 0x50u, 0x61u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v19) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v19) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v21) )
        taskParams.m_serializeOk = 0;
    }
    if ( v15 )
    {
      v22 = v15;
      do
      {
        bdTaskParams::addContextUser(&taskParams, v11++);
        --v22;
      }
      while ( v22 );
      v12 = result;
    }
    LOBYTE(v20) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v20) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v24) )
        taskParams.m_serializeOk = 0;
    }
    for ( i = 0; i < v15; ++i )
    {
      LOBYTE(v23) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v23) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v26 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, skuIds[i]), taskParams.m_serializeOk = 1, !v26) )
          taskParams.m_serializeOk = 0;
      }
    }
    LOBYTE(v23) = 1;
    v27 = taskParams.ensureCapacity(&taskParams, 4u, v23);
    if ( v17 )
    {
      if ( v27 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v29 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v29) )
          taskParams.m_serializeOk = 0;
      }
      if ( v15 )
      {
        v30 = v15;
        do
        {
          bdBufferParams::addBlob(&taskParams, *v17++, *v16++);
          --v30;
        }
        while ( v30 );
      }
    }
    else if ( v27 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v31 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v31) )
        taskParams.m_serializeOk = 0;
    }
    v32 = customSourceType;
    LOBYTE(v28) = 1;
    v33 = taskParams.ensureCapacity(&taskParams, 4u, v28);
    if ( v32 )
    {
      if ( v33 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v35 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v35) )
          taskParams.m_serializeOk = 0;
      }
      for ( j = 0; j < v15; ++j )
      {
        LOBYTE(v34) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 1u, v34) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v37 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, v32[j]), taskParams.m_serializeOk = 1, !v37) )
            taskParams.m_serializeOk = 0;
        }
      }
    }
    else if ( v33 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v38 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v38) )
        taskParams.m_serializeOk = 0;
    }
    v39 = startDateTimes;
    LOBYTE(v34) = 1;
    v40 = taskParams.ensureCapacity(&taskParams, 4u, v34);
    if ( v39 )
    {
      if ( v40 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v42 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v42) )
          taskParams.m_serializeOk = 0;
      }
      for ( k = 0; k < v15; ++k )
      {
        LOBYTE(v41) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 4u, v41) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v44 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v39[k]), taskParams.m_serializeOk = 1, !v44) )
            taskParams.m_serializeOk = 0;
        }
      }
    }
    else if ( v40 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v45 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v45) )
        taskParams.m_serializeOk = 0;
    }
    v46 = expireDateTimes;
    LOBYTE(v41) = 1;
    v47 = taskParams.ensureCapacity(&taskParams, 4u, v41);
    if ( v46 )
    {
      if ( v47 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v49 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v49) )
          taskParams.m_serializeOk = 0;
      }
      for ( m = 0; m < v15; ++m )
      {
        LOBYTE(v48) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 4u, v48) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v51 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v46[m]), taskParams.m_serializeOk = 1, !v51) )
            taskParams.m_serializeOk = 0;
        }
      }
    }
    else if ( v47 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v52 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v52) )
        taskParams.m_serializeOk = 0;
    }
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &taskParams);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCoupon", 0x41Fu, "Failed to start task: Error %i", started);
    m_ptr = newTask.m_ptr;
    v12->m_ptr = newTask.m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return v12;
}

/*
==============
bdMarketplace::giftCouponV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::giftCouponV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *playerIds, const unsigned int *skuIds, const unsigned __int8 numSkuIds, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned int *customSourceType, const unsigned int *startDateTimes, const unsigned int *expireDateTimes)
{
  const bdUserAccountID *v11; 
  bdReference<bdRemoteTask> *v12; 
  bool v14; 
  unsigned __int8 v15; 
  const unsigned int *v16; 
  const void **v17; 
  unsigned __int8 v18; 
  _BOOL8 v19; 
  _BOOL8 v20; 
  bool v21; 
  __int64 v22; 
  _BOOL8 v23; 
  bool v24; 
  unsigned __int8 i; 
  bool v26; 
  bool v27; 
  _BOOL8 v28; 
  bool v29; 
  __int64 v30; 
  bool v31; 
  const unsigned int *v32; 
  bool v33; 
  _BOOL8 v34; 
  bool v35; 
  unsigned __int8 j; 
  bool v37; 
  bool v38; 
  const unsigned int *v39; 
  bool v40; 
  _BOOL8 v41; 
  bool v42; 
  unsigned __int8 k; 
  bool v44; 
  bool v45; 
  const unsigned int *v46; 
  bool v47; 
  _BOOL8 v48; 
  bool v49; 
  unsigned __int8 m; 
  bool v51; 
  bool v52; 
  bdLobbyErrorCode started; 
  bdRemoteTask *m_ptr; 
  bdTaskParams taskParams; 
  bdReference<bdRemoteTask> newTask; 

  v11 = playerIds;
  v12 = result;
  newTask.m_ptr = NULL;
  v14 = playerIds && skuIds;
  bdHandleAssert(v14, "(playerIds != BD_NULL && skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCouponV2", 0x432u, "Cannot call giftCouponV2() with a NULL playerIds or skuIds");
  v15 = numSkuIds;
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCouponV2", 0x433u, "Cannot call giftCouponV2() with zero numSkuIds");
  v16 = metadataSize;
  v17 = (const void **)couponMetadata;
  if ( couponMetadata && (v18 = 0, v15) )
  {
    while ( metadataSize[v18] <= 0x40 )
    {
      if ( ++v18 >= v15 )
        goto LABEL_9;
    }
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCouponV2", 0x43Cu, "Metadata '%s' exceeded maximum size", (const char *)couponMetadata[v18]);
    v12->m_ptr = NULL;
  }
  else
  {
LABEL_9:
    bdTaskParams::bdTaskParams(&taskParams, 0x50u, 0x62u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v19) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v19) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v21) )
        taskParams.m_serializeOk = 0;
    }
    if ( v15 )
    {
      v22 = v15;
      do
      {
        bdTaskParams::addContextUser(&taskParams, v11++);
        --v22;
      }
      while ( v22 );
      v12 = result;
    }
    LOBYTE(v20) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v20) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v24) )
        taskParams.m_serializeOk = 0;
    }
    for ( i = 0; i < v15; ++i )
    {
      LOBYTE(v23) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v23) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v26 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, skuIds[i]), taskParams.m_serializeOk = 1, !v26) )
          taskParams.m_serializeOk = 0;
      }
    }
    LOBYTE(v23) = 1;
    v27 = taskParams.ensureCapacity(&taskParams, 4u, v23);
    if ( v17 )
    {
      if ( v27 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v29 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v29) )
          taskParams.m_serializeOk = 0;
      }
      if ( v15 )
      {
        v30 = v15;
        do
        {
          bdBufferParams::addBlob(&taskParams, *v17++, *v16++);
          --v30;
        }
        while ( v30 );
      }
    }
    else if ( v27 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v31 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v31) )
        taskParams.m_serializeOk = 0;
    }
    v32 = customSourceType;
    LOBYTE(v28) = 1;
    v33 = taskParams.ensureCapacity(&taskParams, 4u, v28);
    if ( v32 )
    {
      if ( v33 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v35 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v35) )
          taskParams.m_serializeOk = 0;
      }
      for ( j = 0; j < v15; ++j )
      {
        LOBYTE(v34) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 4u, v34) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v37 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v32[j]), taskParams.m_serializeOk = 1, !v37) )
            taskParams.m_serializeOk = 0;
        }
      }
    }
    else if ( v33 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v38 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v38) )
        taskParams.m_serializeOk = 0;
    }
    v39 = startDateTimes;
    LOBYTE(v34) = 1;
    v40 = taskParams.ensureCapacity(&taskParams, 4u, v34);
    if ( v39 )
    {
      if ( v40 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v42 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v42) )
          taskParams.m_serializeOk = 0;
      }
      for ( k = 0; k < v15; ++k )
      {
        LOBYTE(v41) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 4u, v41) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v44 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v39[k]), taskParams.m_serializeOk = 1, !v44) )
            taskParams.m_serializeOk = 0;
        }
      }
    }
    else if ( v40 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v45 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v45) )
        taskParams.m_serializeOk = 0;
    }
    v46 = expireDateTimes;
    LOBYTE(v41) = 1;
    v47 = taskParams.ensureCapacity(&taskParams, 4u, v41);
    if ( v46 )
    {
      if ( v47 )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v49 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v15), taskParams.m_serializeOk = 1, !v49) )
          taskParams.m_serializeOk = 0;
      }
      for ( m = 0; m < v15; ++m )
      {
        LOBYTE(v48) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 4u, v48) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v51 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v46[m]), taskParams.m_serializeOk = 1, !v51) )
            taskParams.m_serializeOk = 0;
        }
      }
    }
    else if ( v47 )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v52 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v52) )
        taskParams.m_serializeOk = 0;
    }
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, &newTask, &taskParams);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftCouponV2", 0x48Bu, "Failed to start task: Error %i", started);
    m_ptr = newTask.m_ptr;
    v12->m_ptr = newTask.m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  if ( newTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&newTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && newTask.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))newTask.m_ptr->~bdReferencable)(newTask.m_ptr, 1i64);
  return v12;
}

/*
==============
bdMarketplace::giftSkuTransactionV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::giftSkuTransactionV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *transactionId, const unsigned int *skuIds, const unsigned int *giftedQuantities, const unsigned __int8 numSkuIds, const unsigned __int64 recieverPlayerId, const unsigned int customSourceType)
{
  const unsigned int *v8; 
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  __int64 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  unsigned __int8 i; 
  bool v20; 
  _BOOL8 v21; 
  bool v22; 
  bool v23; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v26; 
  bdTaskParams taskParams; 

  v8 = skuIds;
  result->m_ptr = NULL;
  bdHandleAssert(skuIds != NULL, "(skuIds != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransactionV2", 0x38Eu, "Cannot call giftSkuTransactionV2() with a NULL skuIds");
  bdHandleAssert(giftedQuantities != NULL, "(giftedQuantities != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransactionV2", 0x38Fu, "Cannot call giftSkuTransactionV2() with a NULL giftedQuantities");
  bdHandleAssert(numSkuIds != 0, "(numSkuIds > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransactionV2", 0x390u, "Cannot call giftSkuTransactionV2() with zero numSkuIds");
  bdTaskParams::bdTaskParams(&taskParams, 0x50u, 0xE3u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdBufferParams::addBlob(&taskParams, transactionId, 0x10u);
  LOBYTE(v12) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v12) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, numSkuIds), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  if ( numSkuIds )
  {
    v15 = numSkuIds;
    do
    {
      LOBYTE(v13) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, *v8), taskParams.m_serializeOk = 1, !v16) )
          taskParams.m_serializeOk = 0;
      }
      ++v8;
      --v15;
    }
    while ( v15 );
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numSkuIds), taskParams.m_serializeOk = 1, !v18) )
      taskParams.m_serializeOk = 0;
  }
  for ( i = 0; i < numSkuIds; ++i )
  {
    LOBYTE(v17) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, giftedQuantities[i]), taskParams.m_serializeOk = 1, !v20) )
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
  if ( taskParams.ensureCapacity(&taskParams, 4u, v21) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v23 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, customSourceType), taskParams.m_serializeOk = 1, !v23) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v26 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::giftSkuTransactionV2", 0x3A8u, "Failed to start task: Error %i", v26);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdMarketplace::iTunesProcessProduct
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::iTunesProcessProduct(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const void *receipt, const unsigned int receiptSize, bdExchangeTransactionMultipleResults *transactionResult)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(receipt != NULL, "(receipt != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::iTunesProcessProduct", 0xAFCu, "Cannot call iTunesProcessProduct() with a NULL receipt");
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::iTunesProcessProduct", 0xAFDu, "Cannot call iTunesProcessProduct() with a NULL transactionID");
  if ( receipt )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xEAu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addBlob(&params, receipt, receiptSize);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
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
  return result;
}

/*
==============
bdMarketplace::purchaseOnWiiUFinalize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnWiiUFinalize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *ecServiceToken, bdExchangeTransactionResultV2 *resulta)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUFinalize", 0x581u, "Cannot call purchaseOnWiiUFinalize() with a NULL transactionId");
  bdHandleAssert(ecServiceToken != NULL, "(ecServiceToken != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUFinalize", 0x582u, "Cannot call purchaseOnWiiUFinalize() with a NULL ecServiceToken");
  bdHandleAssert(resulta != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUFinalize", 0x583u, "Cannot call purchaseOnWiiUFinalize() with a NULL result");
  if ( resulta )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x73u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    bdBufferParams::addString(&params, ecServiceToken, 0x100ui64);
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
bdMarketplace::purchaseOnWiiUInitialize
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnWiiUInitialize(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 principalId, const unsigned int fpSkuId, const char *uniqueId, bdWiiUPrePurchaseResult *resulta)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUInitialize", 0x547u, "Cannot call purchaseOnWiiUInitialize() with a NULL transactionId");
  bdHandleAssert(uniqueId != NULL, "(uniqueId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUInitialize", 0x548u, "Cannot call purchaseOnWiiUInitialize() with a NULL uniqueID");
  bdHandleAssert(resulta != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUInitialize", 0x549u, "Cannot call purchaseOnWiiUInitialize() with a NULL result");
  if ( resulta )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x72u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 8u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, principalId), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, fpSkuId), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    bdBufferParams::addString(&params, uniqueId, 8ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = resulta;
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
bdMarketplace::purchaseOnWiiUInitializeV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::purchaseOnWiiUInitializeV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdPurchaseWiiUInitV2Request *request, bdPurchaseWiiUInitV2Response *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  if ( request->m_transactionId[0] )
  {
    if ( request->m_uniqueId[0] )
    {
      if ( request->m_languageCode[0] )
      {
        *((_OWORD *)&request->__vftable + 1) = *(_OWORD *)this->m_context;
        started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0x78u, request, response, NULL);
        if ( started )
        {
          v8 = started;
          bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v8);
        }
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUInitializeV2", 0x56Fu, "Cannot call purchaseOnWiiUInitializeV2() with an empty languageCode");
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUInitializeV2", 0x56Bu, "Cannot call purchaseOnWiiUInitializeV2() with an empty uniqueId");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::purchaseOnWiiUInitializeV2", 0x567u, "Cannot call purchaseOnWiiUInitializeV2() with an empty transactionId");
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
bdMarketplace::putPlayersEntitlements
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::putPlayersEntitlements(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceEntitlement *entitlements, const unsigned __int8 numEntitlements)
{
  __int64 v4; 
  const bdSerializable *v8; 
  bdTaskParams params; 

  LOBYTE(v4) = numEntitlements;
  result->m_ptr = NULL;
  bdHandleAssert(entitlements != NULL, "(entitlements != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::putPlayersEntitlements", 0x73Eu, "Cannot call putPlayersEntitlements() with a NULL entitlements", 1, -2i64);
  bdHandleAssert((_BYTE)v4 != 0, "(numEntitlements > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::putPlayersEntitlements", 0x73Fu, "Cannot call putPlayersEntitlements() with zero numEntitlements");
  if ( entitlements && (_BYTE)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xE4u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    v8 = (const bdSerializable *)(&entitlements->__vftable + 2);
    v4 = (unsigned __int8)v4;
    do
    {
      bdBufferParams::addSerializable(&params, v8);
      v8 += 254;
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
bdMarketplace::reportPlayersUsageTimes
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::reportPlayersUsageTimes(bdMarketplace *this, bdReference<bdRemoteTask> *result, const bdMarketplaceUsageTime *playerUsageTimes, const unsigned __int16 numUsageTimes)
{
  __int64 v4; 
  _BOOL8 v8; 
  bool v9; 
  const bdSerializable *v10; 
  bdTaskParams params; 

  LOWORD(v4) = numUsageTimes;
  result->m_ptr = NULL;
  bdHandleAssert(playerUsageTimes != NULL, "(playerUsageTimes != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::reportPlayersUsageTimes", 0xBE7u, "Cannot call reportPlayersUsageTimes() with a NULL playerUsageTimes", 1, -2i64);
  bdHandleAssert((_WORD)v4 != 0, "(numUsageTimes > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::reportPlayersUsageTimes", 0xBE8u, "Cannot call reportPlayersUsageTimes() with zero players");
  if ( playerUsageTimes && (_WORD)v4 )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x36u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v8) = 1;
    if ( params.ensureCapacity(&params, 4u, v8) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v9 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, (unsigned __int16)v4), params.m_serializeOk = 1, !v9) )
        params.m_serializeOk = 0;
    }
    v10 = (const bdSerializable *)(&playerUsageTimes->__vftable + 2);
    v4 = (unsigned __int16)v4;
    do
    {
      bdBufferParams::addSerializable(&params, v10);
      v10 += 4;
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
bdMarketplace::reportUsageTime
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::reportUsageTime(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned int usageTime)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&params, 0x50u, 0x35u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&params, this->m_context);
  LOBYTE(v6) = 1;
  if ( params.ensureCapacity(&params, 4u, v6) )
  {
    if ( params.m_isWritingArray )
      --params.m_arrayWriteCount;
    if ( !params.m_serializeOk || (v7 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, usageTime), params.m_serializeOk = 1, !v7) )
      params.m_serializeOk = 0;
  }
  bdMarketplace::startTask(this, result, &params);
  bdTaskParams::~bdTaskParams(&params);
  return result;
}

/*
==============
bdMarketplace::setPlayersBalancesV3
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::setPlayersBalancesV3(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdSetPlayersBalancesRequest *request, bdSetPlayersBalancesResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdStrlcpy((char *const)&request->__vftable + 16, this->m_context, 0x10ui64);
  bdHandleAssert(request->m_playerCurrencies.m_size != 0, "(request->m_playerCurrencies.getSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::setPlayersBalancesV3", 0xE4u, "Cannot call setPlayersBalancesV3() with empty playerCurrencies");
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xACu, request, response, NULL);
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
bdMarketplace::startExchangeTransaction
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::startExchangeTransaction(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdStringResult *transactionId)
{
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startExchangeTransaction", 0x9A8u, "Cannot call startExchangeTransaction() with a NULL transactionId");
  if ( transactionId )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x2Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = transactionId;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::startStructTask
==============
*/
void bdMarketplace::startStructTask(bdMarketplace *this, bdReference<bdStructBufferTask> *remoteTask, const unsigned __int8 taskID, bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v6; 

  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, remoteTask, 0x50u, taskID, request, response, NULL);
  if ( started )
  {
    v6 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v6);
  }
}

/*
==============
bdMarketplace::startTask
==============
*/
void bdMarketplace::startTask(bdMarketplace *this, bdReference<bdRemoteTask> *remoteTask, bdTaskParams *params)
{
  bdByteBuffer *m_ptr; 
  bdLobbyErrorCode started; 
  __int64 v8; 
  int m_arrayWriteCount; 

  if ( (params->m_isWritingArray || params->m_arrayWriteCount) && (m_arrayWriteCount = params->m_arrayWriteCount, bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdBufferParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdbufferparams.inl", "bdBufferParams::serializedOk", 0xECu, "Did you forget to call arrayEnd() at the correct time (remaining = %u)?", m_arrayWriteCount), params->m_isWritingArray) || params->m_arrayWriteCount || !params->m_serializeOk || (m_ptr = params->m_buffer.m_ptr) == NULL || !m_ptr->m_data )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startTask", 0x40u, "Failed to serialize the task buffer.");
  }
  else
  {
    started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, remoteTask, params);
    if ( started )
    {
      LODWORD(v8) = started;
      bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startTask", 0x3Bu, "Failed to start task: Error %i", v8);
    }
  }
}

/*
==============
bdMarketplace::switchReconciliation
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::switchReconciliation(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdSwitchReconciliationRequest *request, bdSwitchReconciliationResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = (bdStructBufferTask *)result;
  bdSwitchReconciliationRequest::setContext(request, this->m_context);
  newTask.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF6u, request, response, NULL);
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
bdMarketplace::validateInventoriesItems
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::validateInventoriesItems(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdValidateInventoriesItemsRequest *request, bdValidateInventoriesItemsResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> v9; 

  v9.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v9, 0x50u, 0xF7u, request, response, NULL);
  if ( started )
  {
    v8 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v8);
  }
  m_ptr = v9.m_ptr;
  result->m_ptr = v9.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v9.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v9.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v9.m_ptr->~bdReferencable)(v9.m_ptr, 1i64);
  return result;
}

/*
==============
bdMarketplace::validateInventoryItemsToken
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::validateInventoryItemsToken(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *const filename, const bdValidationTokenResult *validationToken, bdValidationTokenResult *validationTokenResult)
{
  unsigned int ValidationTokenSize; 
  unsigned int v10; 
  const unsigned __int8 *v11; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(filename != NULL, "(filename != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateInventoryItemsToken", 0x672u, "Cannot call validateInventoryItemsToken() with NULL filename");
  ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)validationToken);
  bdHandleAssert(ValidationTokenSize != 0, "(validationToken.getValidationTokenSize() > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateInventoryItemsToken", 0x673u, "Cannot call validateInventoryItemsToken() with zero validationTokenDataSize");
  bdHandleAssert(validationTokenResult != NULL, "(validationTokenResult != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateInventoryItemsToken", 0x674u, "Cannot call validateInventoryItemsToken() with a NULL validationTokenResult");
  if ( filename && bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)validationToken) && validationTokenResult )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x3Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, filename, 0x80ui64);
    v10 = bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)validationToken);
    v11 = bdValidationTokenResult::getValidationToken((bdValidationTokenResult *)validationToken);
    bdBufferParams::addBlob(&params, v11, v10);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = validationTokenResult;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateInventoryItemsToken", 0x685u, "Cannot call validateInventoryItemsToken() with invalid parameters");
  }
  return result;
}

/*
==============
bdMarketplace::validateReceipt
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::validateReceipt(bdMarketplace *this, bdReference<bdRemoteTask> *result, const void *receipt, const unsigned int receiptSize, bdMarketplaceReceiptStatus *const receiptStatus, const unsigned __int8 platform, const void *receiptSignature, const unsigned int receiptSignatureSize)
{
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(receipt != NULL, "(receipt != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateReceipt", 0x94Au, "Cannot call validateReceipt() with a NULL receipt");
  bdHandleAssert(receiptStatus != NULL, "(receiptStatus != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateReceipt", 0x94Bu, "Cannot call validateReceipt() with a NULL receiptStatus");
  if ( platform == 2 )
  {
    bdHandleAssert(receiptSignature != NULL, "(receiptSignature != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateReceipt", 0x94Fu, "Google Play receipt validation requires a receiptSignature");
    bdHandleAssert(receiptSignatureSize != 0, "(receiptSignatureSize != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::validateReceipt", 0x950u, "Google Play receipt validation requires a receiptSignatureSize");
  }
  if ( receipt && receiptStatus )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x28u, 0x400u, 0xFFFFu);
    bdBufferParams::addBlob(&params, receipt, receiptSize);
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 1u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUByte8(params.m_buffer.m_ptr, platform), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    if ( receiptSignature )
      bdBufferParams::addBlob(&params, receiptSignature, receiptSignatureSize);
    else
      bdBufferParams::addNAN(&params);
    if ( params.m_taskResults || params.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      params.m_serializeOk = 0;
    }
    else
    {
      params.m_taskResults = receiptStatus;
      params.m_maxResults = 1;
    }
    bdMarketplace::startTask(this, result, &params);
    bdTaskParams::~bdTaskParams(&params);
  }
  return result;
}

/*
==============
bdMarketplace::verifyReceiptV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::verifyReceiptV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, const unsigned __int8 platform, const char *receipt, const char *receiptSignature, bdMarketplaceReceiptStatus *const receiptStatus)
{
  _BOOL8 v10; 
  bool v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(receipt != NULL, "(receipt != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::verifyReceiptV2", 0x974u, "Cannot call verifyReceiptV2() with a NULL receipt");
  bdHandleAssert(receiptStatus != NULL, "(receiptStatus != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::verifyReceiptV2", 0x975u, "Cannot call verifyReceiptV2() with a NULL receiptStatus");
  bdHandleAssert(receiptSignature != NULL, "(receiptSignature != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::verifyReceiptV2", 0x976u, "Cannot call verifyReceiptV2() with a NULL receiptSignature");
  if ( receipt && receiptStatus )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0x29u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    LOBYTE(v10) = 1;
    if ( params.ensureCapacity(&params, 1u, v10) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v11 = bdByteBuffer::writeUByte8(params.m_buffer.m_ptr, platform), params.m_serializeOk = 1, !v11) )
        params.m_serializeOk = 0;
    }
    v12 = bdStrlen(receipt);
    bdBufferParams::addString(&params, receipt, v12 + 1);
    v13 = bdStrlen(receiptSignature);
    bdBufferParams::addString(&params, receiptSignature, v13 + 1);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = receiptStatus;
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
bdMarketplace::weGameReconciliation
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::weGameReconciliation(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdWeGameReconciliationRequest *request, bdWeGameReconciliationResponse *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  bdWeGameReconciliationRequest::setContext(request, this->m_context);
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0xF4u, request, response, NULL);
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
bdMarketplace::wiiUProcessConsumable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::wiiUProcessConsumable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 principalId, const unsigned int fpSkuId, const char *uniqueId, bdExchangeTransactionResultV2 *resulta)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessConsumable", 0x5DAu, "Cannot call wiiUProcessConsumable() with a NULL transactionId");
  bdHandleAssert(uniqueId != NULL, "(uniqueId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessConsumable", 0x5DBu, "Cannot call wiiUProcessConsumable() with a NULL uniqueID");
  bdHandleAssert(resulta != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessConsumable", 0x5DCu, "Cannot call wiiUProcessConsumable() with a NULL result");
  if ( resulta )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xECu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 8u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, principalId), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, fpSkuId), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    bdBufferParams::addString(&params, uniqueId, 8ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = resulta;
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
bdMarketplace::wiiUProcessDurable
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::wiiUProcessDurable(bdMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 principalId, const unsigned int fpSkuId, const char *uniqueId, bdExchangeTransactionResultV2 *resulta)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  bdTaskParams params; 

  result->m_ptr = NULL;
  bdHandleAssert(transactionId != NULL, "(transactionId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessDurable", 0x59Fu, "Cannot call wiiUProcessDurable() with a NULL transactionId");
  bdHandleAssert(uniqueId != NULL, "(uniqueId != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessDurable", 0x5A0u, "Cannot call wiiUProcessDurable() with a NULL uniqueID");
  bdHandleAssert(resulta != NULL, "(result != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessDurable", 0x5A1u, "Cannot call wiiUProcessDurable() with a NULL result");
  if ( resulta )
  {
    bdTaskParams::bdTaskParams(&params, 0x50u, 0xEBu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&params, this->m_context);
    bdBufferParams::addString(&params, transactionId, 0x19ui64);
    LOBYTE(v11) = 1;
    if ( params.ensureCapacity(&params, 8u, v11) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(params.m_buffer.m_ptr, principalId), params.m_serializeOk = 1, !v13) )
        params.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( params.ensureCapacity(&params, 4u, v12) )
    {
      if ( params.m_isWritingArray )
        --params.m_arrayWriteCount;
      if ( !params.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(params.m_buffer.m_ptr, fpSkuId), params.m_serializeOk = 1, !v14) )
        params.m_serializeOk = 0;
    }
    bdBufferParams::addString(&params, uniqueId, 8ui64);
    if ( *(_OWORD *)&params.m_taskResults == 0i64 )
    {
      params.m_taskResults = resulta;
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
bdMarketplace::wiiUProcessDurableV2
==============
*/
bdReference<bdRemoteTask> *bdMarketplace::wiiUProcessDurableV2(bdMarketplace *this, bdReference<bdRemoteTask> *result, bdWiiUProcessDurableV2Request *request, bdWiiUProcessDurableV2Response *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  bdLobbyErrorCode v8; 
  bdReference<bdStructBufferTask> newTask; 

  newTask.m_ptr = NULL;
  if ( request->m_transactionId[0] )
  {
    if ( request->m_uniqueId[0] )
    {
      if ( request->m_languageCode[0] )
      {
        *((_OWORD *)&request->__vftable + 1) = *(_OWORD *)this->m_context;
        started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &newTask, 0x50u, 0x79u, request, response, NULL);
        if ( started )
        {
          v8 = started;
          bdLogMessage(BD_LOG_WARNING, "warn/", "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::startStructTask", 0x50u, "Failed to start task: Error %i", v8);
        }
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessDurableV2", 0x5C7u, "Cannot call wiiUProcessDurableV2() with an empty languageCode");
      }
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessDurableV2", 0x5C3u, "Cannot call wiiUProcessDurableV2() with an empty uniqueId");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "marketplace", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmarketplace\\bdmarketplace.cpp", "bdMarketplace::wiiUProcessDurableV2", 0x5BFu, "Cannot call wiiUProcessDurableV2() with an empty transactionId");
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

