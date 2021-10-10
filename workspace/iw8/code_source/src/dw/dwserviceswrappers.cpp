/*
==============
DWFriends::rejectFriend
==============
*/

bdReference<bdRemoteTask> *__fastcall DWFriends::rejectFriend(DWFriends *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userId, bdRejectFriendResponse *response)
{
  return ?rejectFriend@DWFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@PEAVbdRejectFriendResponse@@@Z(this, result, userId, response);
}

/*
==============
DWMessaging::sendGlobalInstantMessage
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::sendGlobalInstantMessage(DWMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 recipientUID, const void *const message, const unsigned int msgSize)
{
  return ?sendGlobalInstantMessage@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBXI@Z(this, result, recipientUID, message, msgSize);
}

/*
==============
DWAchievementEngineClient::reportUserEvent
==============
*/

bool __fastcall DWAchievementEngineClient::reportUserEvent(DWAchievementEngineClient *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event)
{
  return ?reportUserEvent@DWAchievementEngineClient@@QEAA_NAEBVbdUserAccountID@@0W4bdPlatformID@@AEBVbdAchievementEvent@@@Z(this, user, firstPartyUser, platform, event);
}

/*
==============
DWAchievementEngine::getAchievementStates
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::getAchievementStates(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesRequest *request, bdGetAchievementStatesResponse *response)
{
  return ?getAchievementStates@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetAchievementStatesRequest@@PEAVbdGetAchievementStatesResponse@@@Z(this, result, request, response);
}

/*
==============
DWLobbyService::getStorage
==============
*/

bdStorage *__fastcall DWLobbyService::getStorage(DWLobbyService *this, const char *context)
{
  return ?getStorage@DWLobbyService@@IEAAPEAVbdStorage@@PEBD@Z(this, context);
}

/*
==============
DWDataChannelDispatch::isReady
==============
*/

bool __fastcall DWDataChannelDispatch::isReady(DWDataChannelDispatch *this)
{
  return ?isReady@DWDataChannelDispatch@@UEBA_NXZ(this);
}

/*
==============
DWRedeemableCodes::redeemPayload
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRedeemableCodes::redeemPayload(DWRedeemableCodes *this, bdReference<bdRemoteTask> *result, const char *const clientTransactionId, const char *const payload, const char *const payloadSignature, bdRedeemCodeResult *a6)
{
  return ?redeemPayload@DWRedeemableCodes@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD00PEAVbdRedeemCodeResult@@@Z(this, result, clientTransactionId, payload, payloadSignature, a6);
}

/*
==============
DWLobbyService::getFriends
==============
*/

bdCrossPlatformFriends *__fastcall DWLobbyService::getFriends(DWLobbyService *this)
{
  return ?getFriends@DWLobbyService@@IEAAPEAVbdCrossPlatformFriends@@XZ(this);
}

/*
==============
DWStorageContext::getFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::getFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *const *ownerIDs, const char *const *fileNames, bdFileQueryResult *const files, const unsigned int count)
{
  return ?getFiles@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBVbdUserAccountID@@QEBQEBDQEAVbdFileQueryResult@@I@Z(this, result, ownerIDs, fileNames, files, count);
}

/*
==============
DWUmbrella::clearBuffers
==============
*/

void __fastcall DWUmbrella::clearBuffers(DWUmbrella *this)
{
  ?clearBuffers@DWUmbrella@@QEAAXXZ(this);
}

/*
==============
DWLogin::initLogin
==============
*/

bool __fastcall DWLogin::initLogin(DWLogin *this, const int controllerIndex, bdPlatformUser platformUser)
{
  return ?initLogin@DWLogin@@QEAA_NHVbdPlatformUser@@@Z(this, controllerIndex, platformUser);
}

/*
==============
DWTitleUtilities::sanitizeString
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTitleUtilities::sanitizeString(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *str, bdSanitizeStringResponse *response)
{
  return ?sanitizeString@DWTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEAVbdSanitizeStringResponse@@@Z(this, result, str, response);
}

/*
==============
DWGameMetrics::init
==============
*/

bool __fastcall DWGameMetrics::init(DWGameMetrics *this)
{
  return ?init@DWGameMetrics@@IEAA_NXZ(this);
}

/*
==============
DWDataChannelDispatch::pump
==============
*/

void __fastcall DWDataChannelDispatch::pump(DWDataChannelDispatch *this)
{
  ?pump@DWDataChannelDispatch@@MEAAXXZ(this);
}

/*
==============
DWObjectStore::pump
==============
*/

void __fastcall DWObjectStore::pump(DWObjectStore *this)
{
  ?pump@DWObjectStore@@MEAAXXZ(this);
}

/*
==============
DWObjectStore::listUserObjectsByCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::listUserObjectsByCategory(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListUserObjectsByCategoryRequest *request, bdObjectStoreListUserObjectsByCategoryResponse *response)
{
  return ?listUserObjectsByCategory@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreListUserObjectsByCategoryRequest@@PEAVbdObjectStoreListUserObjectsByCategoryResponse@@@Z(this, result, request, response);
}

/*
==============
DWLobbyService::getServerInventory
==============
*/

bdServerInventory *__fastcall DWLobbyService::getServerInventory(DWLobbyService *this)
{
  return ?getServerInventory@DWLobbyService@@IEAAPEAVbdServerInventory@@XZ(this);
}

/*
==============
DWGroup::init
==============
*/

bool __fastcall DWGroup::init(DWGroup *this, DWWrappers *wrapper)
{
  return ?init@DWGroup@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLootGen::openLootDrop
==============
*/

bdReference<bdRemoteTask> *__fastcall DWLootGen::openLootDrop(DWLootGen *this, bdReference<bdRemoteTask> *result, const bdLootGenerationOpenLootDropRequest *request, bdLootGenerationOpenLootDropResponse *response)
{
  return ?openLootDrop@DWLootGen@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdLootGenerationOpenLootDropRequest@@AEAVbdLootGenerationOpenLootDropResponse@@@Z(this, result, request, response);
}

/*
==============
DWDataChannelManagerStandard::getUserId
==============
*/

bdUserAccountID *__fastcall DWDataChannelManagerStandard::getUserId(DWDataChannelManagerStandard *this, bdUserAccountID *result)
{
  return ?getUserId@DWDataChannelManagerStandard@@QEBA?AVbdUserAccountID@@XZ(this, result);
}

/*
==============
DWTeams::acceptApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::acceptApplication(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  return ?acceptApplication@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, applicantID);
}

/*
==============
DWMessaging::kickFromChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::kickFromChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const unsigned __int64 userId, const unsigned int kickReason, const bool alsoBan)
{
  return ?kickFromChannel@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_K1I_N@Z(this, result, category, channelID, userId, kickReason, alsoBan);
}

/*
==============
DWRichPresenceService::setInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRichPresenceService::setInfo(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserPresenceInfoV3 *userPresenceInfo, const bdUserAccountID *userAccountId, bdSetUserPresenceResponse *response)
{
  return ?setInfo@DWRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUserPresenceInfoV3@@VbdUserAccountID@@PEAVbdSetUserPresenceResponse@@@Z(this, result, userPresenceInfo, userAccountId, response);
}

/*
==============
DWStandaloneUmbrella::startTokenRequest
==============
*/

void __fastcall DWStandaloneUmbrella::startTokenRequest(DWStandaloneUmbrella *this)
{
  ?startTokenRequest@DWStandaloneUmbrella@@AEAAXXZ(this);
}

/*
==============
DWMarketingComms::getCommMessages
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketingComms::getCommMessages(DWMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsGetMessagesRequest *request, bdCommsGetMessagesResponse *response)
{
  return ?getCommMessages@DWMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCommsGetMessagesRequest@@PEAVbdCommsGetMessagesResponse@@@Z(this, result, request, response);
}

/*
==============
DWEventLog::recordEventsMixed
==============
*/

bdReference<bdRemoteTask> *__fastcall DWEventLog::recordEventsMixed(DWEventLog *this, bdReference<bdRemoteTask> *result, const bdEventInfo *eventInfos, unsigned int count, bdEventLogID *eventLogIDs)
{
  return ?recordEventsMixed@DWEventLog@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdEventInfo@@IQEAVbdEventLogID@@@Z(this, result, eventInfos, count, eventLogIDs);
}

/*
==============
DWCounter::getCounterTotals
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCounter::getCounterTotals(DWCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *results, const unsigned int numCounterIDs)
{
  return ?getCounterTotals@DWCounter@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdCounterValue@@I@Z(this, result, results, numCounterIDs);
}

/*
==============
DWAsyncMatchMaking::ackExpectGame
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::ackExpectGame(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  return ?ackExpectGame@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, lobbyID);
}

/*
==============
DWUmbrella::getErrors
==============
*/

const bdSingleIdentityError *__fastcall DWUmbrella::getErrors(DWUmbrella *this)
{
  return ?getErrors@DWUmbrella@@QEAAPEBUbdSingleIdentityError@@XZ(this);
}

/*
==============
DWAchievementEngine::getAchievementStatesBatch
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::getAchievementStatesBatch(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesBatchRequest *request, bdGetAchievementStatesBatchResponse *response)
{
  return ?getAchievementStatesBatch@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetAchievementStatesBatchRequest@@PEAVbdGetAchievementStatesBatchResponse@@@Z(this, result, request, response);
}

/*
==============
DWEventLog::init
==============
*/

bool __fastcall DWEventLog::init(DWEventLog *this, DWWrappers *wrapper)
{
  return ?init@DWEventLog@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWStorageContext::removeFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::removeFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, const bdUserAccountID *ownerID)
{
  return ?removeFile@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDAEBVbdUserAccountID@@@Z(this, result, fileName, ownerID);
}

/*
==============
DWDataChannelManagerStandard::reset
==============
*/

void __fastcall DWDataChannelManagerStandard::reset(DWDataChannelManagerStandard *this)
{
  ?reset@DWDataChannelManagerStandard@@AEAAXXZ(this);
}

/*
==============
DWLobbyService::pump
==============
*/

void __fastcall DWLobbyService::pump(DWLobbyService *this)
{
  ?pump@DWLobbyService@@UEAAXXZ(this);
}

/*
==============
DWUno::clearBuffers
==============
*/

void __fastcall DWUno::clearBuffers(DWUno *this)
{
  ?clearBuffers@DWUno@@QEAAXXZ(this);
}

/*
==============
DWAntiCheat::reportConsoleDetails
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAntiCheat::reportConsoleDetails(DWAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr, const bdConsoleID *consoleID)
{
  return ?reportConsoleDetails@DWAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@II_KAEBVbdMACAddr@@00PEBVbdConsoleID@@@Z(this, result, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, consoleID);
}

/*
==============
DWAsyncMatchMaking::rejoinTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::rejoinTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  return ?rejoinTournament@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, tournamentID);
}

/*
==============
DWCrossPlatformIdentity::getCrossPlatformUsernames
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCrossPlatformIdentity::getCrossPlatformUsernames(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUsernamesRequest *request, bdGetCrossPlatformUsernamesResponse *response)
{
  return ?getCrossPlatformUsernames@DWCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetCrossPlatformUsernamesRequest@@AEAVbdGetCrossPlatformUsernamesResponse@@@Z(this, result, request, response);
}

/*
==============
DWAntiCheat::answerChallenges
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAntiCheat::answerChallenges(DWAntiCheat *this, bdReference<bdRemoteTask> *result, const bdAntiCheatResponses *responses)
{
  return ?answerChallenges@DWAntiCheat@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdAntiCheatResponses@@@Z(this, result, responses);
}

/*
==============
DWLobbyService::getCrossPlatformIdentity
==============
*/

bdCrossPlatformIdentity *__fastcall DWLobbyService::getCrossPlatformIdentity(DWLobbyService *this)
{
  return ?getCrossPlatformIdentity@DWLobbyService@@IEAAPEAVbdCrossPlatformIdentity@@XZ(this);
}

/*
==============
DWMarketplace::purchaseSkus
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::purchaseSkus(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned __int8 numSkuIds, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned int maxNumResults, bdMarketplacePurchaseSkusResult *a8, const unsigned int *discountIds, const bdUserAccountID *couponRecipients, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkus@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDEQEBI1IPEAVbdMarketplacePurchaseSkusResult@@1QEBVbdUserAccountID@@QEAPEBE1E_N@Z(this, result, clientTransactionId, numSkuIds, skuIds, purchasedQuantities, maxNumResults, a8, discountIds, couponRecipients, couponMetadata, metadataSize, customSourceType, ignoreEntitlements);
}

/*
==============
DWFriends::unregisterPushMessageHandler
==============
*/

bool __fastcall DWFriends::unregisterPushMessageHandler(DWFriends *this, bdCrossPlatformFriendsPushMessageHandler *handler)
{
  return ?unregisterPushMessageHandler@DWFriends@@QEAA_NPEAVbdCrossPlatformFriendsPushMessageHandler@@@Z(this, handler);
}

/*
==============
DWMarketplace::getBalance
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::getBalance(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdGetPlayerBalancesRequest *request, bdGetPlayerBalancesResponse *response)
{
  return ?getBalance@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetPlayerBalancesRequest@@PEAVbdGetPlayerBalancesResponse@@@Z(this, result, request, response);
}

/*
==============
DWClans::getMembershipsByUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::getMembershipsByUsers(DWClans *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userIds, const unsigned int numIds, bdClansGetMembershipsByUsersResponse *response)
{
  return ?getMembershipsByUsers@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUserAccountID@@IPEAVbdClansGetMembershipsByUsersResponse@@@Z(this, result, userIds, numIds, response);
}

/*
==============
DWStandaloneUmbrella::pump
==============
*/

void __fastcall DWStandaloneUmbrella::pump(DWStandaloneUmbrella *this)
{
  ?pump@DWStandaloneUmbrella@@MEAAXXZ(this);
}

/*
==============
DWAsyncMatchMaking::setPlayerInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::setPlayerInfo(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *playerInfo, unsigned int bufferSize)
{
  return ?setPlayerInfo@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDI@Z(this, result, playerInfo, bufferSize);
}

/*
==============
DWStandaloneUmbrella::getToken
==============
*/

const char *__fastcall DWStandaloneUmbrella::getToken(DWStandaloneUmbrella *this)
{
  return ?getToken@DWStandaloneUmbrella@@QEAAPEBDXZ(this);
}

/*
==============
DWLobbyService::getFeatureBan
==============
*/

bdFeatureBan *__fastcall DWLobbyService::getFeatureBan(DWLobbyService *this)
{
  return ?getFeatureBan@DWLobbyService@@IEAAPEAVbdFeatureBan@@XZ(this);
}

/*
==============
DWAntiCheat::init
==============
*/

bool __fastcall DWAntiCheat::init(DWAntiCheat *this, DWWrappers *wrapper)
{
  return ?init@DWAntiCheat@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWClans::acceptInvite
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::acceptInvite(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *member, bdClansAddOrUpdateGroupMemberResponse *response)
{
  return ?acceptInvite@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@PEAVbdClansAddOrUpdateGroupMemberResponse@@@Z(this, result, id, member, response);
}

/*
==============
DWContentStreaming::downloadUserSummary
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::downloadUserSummary(DWContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, void *summaryData, unsigned int summaryDataSize, unsigned int startByte, unsigned int endByte)
{
  return ?downloadUserSummary@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIII@Z(this, result, fileID, summaryData, summaryDataSize, startByte, endByte);
}

/*
==============
DWLobbyService::initBandwidthTestClient
==============
*/

bool __fastcall DWLobbyService::initBandwidthTestClient(DWLobbyService *this, bdBandwidthTestClient *testClientToInit)
{
  return ?initBandwidthTestClient@DWLobbyService@@QEAA_NPEAVbdBandwidthTestClient@@@Z(this, testClientToInit);
}

/*
==============
DWProfiles::setPublicInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWProfiles::setPublicInfo(DWProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *profileInfo)
{
  return ?setPublicInfo@DWProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdProfileInfo@@@Z(this, result, profileInfo);
}

/*
==============
DWClans::getIncomingClanInvites
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::getIncomingClanInvites(DWClans *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userId, bdClansGetMembershipProposalsByUserResponse *response)
{
  return ?getIncomingClanInvites@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@PEAVbdClansGetMembershipProposalsByUserResponse@@@Z(this, result, userId, response);
}

/*
==============
DWStandaloneUmbrella::authenticate
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStandaloneUmbrella::authenticate(DWStandaloneUmbrella *this, bdReference<bdRemoteTask> *result, const bdAuthInfo *authInfo, bdUmbrellaUserAccount *userInfo)
{
  return ?authenticate@DWStandaloneUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdAuthInfo@@PEAVbdUmbrellaUserAccount@@@Z(this, result, authInfo, userInfo);
}

/*
==============
DWDataChannelManagerStandard::getChannel
==============
*/

bdReference<bdDataChannelStandard> *__fastcall DWDataChannelManagerStandard::getChannel(DWDataChannelManagerStandard *this, bdReference<bdDataChannelStandard> *result, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, bool *created)
{
  return ?getChannel@DWDataChannelManagerStandard@@QEAA?AV?$bdReference@VbdDataChannelStandard@@@@QEBDQEBCIAEA_N@Z(this, result, msgName, msgSchemaGuid, msgSchemaGuidSize, created);
}

/*
==============
DWDataChannelManagerStandard::initialized
==============
*/

bool __fastcall DWDataChannelManagerStandard::initialized(DWDataChannelManagerStandard *this)
{
  return ?initialized@DWDataChannelManagerStandard@@QEBA_NXZ(this);
}

/*
==============
DWTeams::rejectMembership
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::rejectMembership(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  return ?rejectMembership@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, teamID);
}

/*
==============
DWFriends::addFriends
==============
*/

bdReference<bdRemoteTask> *__fastcall DWFriends::addFriends(DWFriends *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userIds, const int numUsers, bdSendFriendInvitationsResponse *response)
{
  return ?addFriends@DWFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUserAccountID@@HPEAVbdSendFriendInvitationsResponse@@@Z(this, result, userIds, numUsers, response);
}

/*
==============
DWStorage::init
==============
*/

bool __fastcall DWStorage::init(DWStorage *this, DWWrappers *wrapper)
{
  return ?init@DWStorage@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLogin::reset
==============
*/

void __fastcall DWLogin::reset(DWLogin *this)
{
  ?reset@DWLogin@@QEAAXXZ(this);
}

/*
==============
DWClans::getClanInfos
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::getClanInfos(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *ids, const unsigned int numIdentifiers, bdClansGetGroupInfosResponse *response)
{
  return ?getClanInfos@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEB_KIPEAVbdClansGetGroupInfosResponse@@@Z(this, result, ids, numIdentifiers, response);
}

/*
==============
DWLobbyService::getContentStreaming
==============
*/

bdContentStreaming *__fastcall DWLobbyService::getContentStreaming(DWLobbyService *this)
{
  return ?getContentStreaming@DWLobbyService@@IEAAPEAVbdContentStreaming@@XZ(this);
}

/*
==============
DWLobbyService::getUno
==============
*/

bdUno *__fastcall DWLobbyService::getUno(DWLobbyService *this)
{
  return ?getUno@DWLobbyService@@IEAAPEAVbdUno@@XZ(this);
}

/*
==============
DWUmbrella::isUmbrellaInited
==============
*/

bool __fastcall DWUmbrella::isUmbrellaInited(DWUmbrella *this)
{
  return ?isUmbrellaInited@DWUmbrella@@QEAA_NXZ(this);
}

/*
==============
DWLobbyService::getRewards
==============
*/

bdReward *__fastcall DWLobbyService::getRewards(DWLobbyService *this)
{
  return ?getRewards@DWLobbyService@@IEAAPEAVbdReward@@XZ(this);
}

/*
==============
DWMarketplace::consumeInventoryItems
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::consumeInventoryItems(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int *itemIds, const unsigned int *consumedQuantities, const unsigned __int16 numItems, bdMarketplaceAuditLogResult *a7)
{
  return ?consumeInventoryItems@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBI1GPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, itemIds, consumedQuantities, numItems, a7);
}

/*
==============
DWPooledStorage::init
==============
*/

bool __fastcall DWPooledStorage::init(DWPooledStorage *this, DWWrappers *wrapper)
{
  return ?init@DWPooledStorage@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWObjectStore::listPublisherObjectsByCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::listPublisherObjectsByCategory(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListPublisherObjectsByCategoryRequest *request, bdObjectStoreListPublisherObjectsByCategoryResponse *response)
{
  return ?listPublisherObjectsByCategory@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreListPublisherObjectsByCategoryRequest@@PEAVbdObjectStoreListPublisherObjectsByCategoryResponse@@@Z(this, result, request, response);
}

/*
==============
DWMarketplace::deleteInventory
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::deleteInventory(DWMarketplace *this, bdReference<bdRemoteTask> *result)
{
  return ?deleteInventory@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
DWStats::readStatsByRankExcluded
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::readStatsByRankExcluded(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  return ?readStatsByRankExcluded@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderboardID, firstRank, stats, maxResults, excludedColumns, numExcludedColumns);
}

/*
==============
DWLobbyService::getPerformance
==============
*/

bdPerformance *__fastcall DWLobbyService::getPerformance(DWLobbyService *this)
{
  return ?getPerformance@DWLobbyService@@IEAAPEAVbdPerformance@@XZ(this);
}

/*
==============
DWLobbyService::getGroup
==============
*/

bdGroup *__fastcall DWLobbyService::getGroup(DWLobbyService *this)
{
  return ?getGroup@DWLobbyService@@IEAAPEAVbdGroup@@XZ(this);
}

/*
==============
DWStats::writeStats
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::writeStats(DWStats *this, bdReference<bdRemoteTask> *result, bdStatsInfo **stats, const unsigned int numStats)
{
  return ?writeStats@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAPEAVbdStatsInfo@@I@Z(this, result, stats, numStats);
}

/*
==============
DWUmbrella::linkUnoWithUmbrella
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUmbrella::linkUnoWithUmbrella(DWUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *providerAccount, const bdUmbrellaProviderToken *providerToken, bdUmbrellaUserAccount *umbrellaUser, const char *accessToken)
{
  return ?linkUnoWithUmbrella@DWUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUmbrellaProviderAccount@@PEBVbdUmbrellaProviderToken@@PEAVbdUmbrellaUserAccount@@PEBD@Z(this, result, umbrellaID, providerAccount, providerToken, umbrellaUser, accessToken);
}

/*
==============
DWFriends::getFriends
==============
*/

bdReference<bdRemoteTask> *__fastcall DWFriends::getFriends(DWFriends *this, bdReference<bdRemoteTask> *result, bdGetFriendsResponse *response, const char *pageToken)
{
  return ?getFriends@DWFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetFriendsResponse@@PEBD@Z(this, result, response, pageToken);
}

/*
==============
DWLogin::succeeded
==============
*/

bool __fastcall DWLogin::succeeded(DWLogin *this)
{
  return ?succeeded@DWLogin@@QEAA_NXZ(this);
}

/*
==============
DWDML::init
==============
*/

bool __fastcall DWDML::init(DWDML *this, DWWrappers *wrapper)
{
  return ?init@DWDML@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWContentStreaming::getLastHTTPError
==============
*/

int __fastcall DWContentStreaming::getLastHTTPError(DWContentStreaming *this)
{
  return ?getLastHTTPError@DWContentStreaming@@QEBAHXZ(this);
}

/*
==============
DWMatchMaking::updateSession
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::updateSession(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  return ?updateSession@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEAVbdMatchMakingInfo@@@Z(this, result, sessionID, sessionInfo);
}

/*
==============
DWTeams::setTeamAutoJoin
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::setTeamAutoJoin(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bool autoJoin)
{
  return ?setTeamAutoJoin@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K_N@Z(this, result, teamID, autoJoin);
}

/*
==============
DWMessaging::unsubscribeFromCategory
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::unsubscribeFromCategory(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category)
{
  return ?unsubscribeFromCategory@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD@Z(this, result, category);
}

/*
==============
DWMail::init
==============
*/

bool __fastcall DWMail::init(DWMail *this, DWWrappers *wrapper)
{
  return ?init@DWMail@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWDataChannelManagerStandard::initDataChannelManager
==============
*/

bool __fastcall DWDataChannelManagerStandard::initDataChannelManager(DWDataChannelManagerStandard *this)
{
  return ?initDataChannelManager@DWDataChannelManagerStandard@@AEAA_NXZ(this);
}

/*
==============
DWStorageContext::getPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::getPublisherFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData)
{
  return ?getPublisherFile@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdFileData@@@Z(this, result, fileName, fileData);
}

/*
==============
DWObjectStore::init
==============
*/

bool __fastcall DWObjectStore::init(DWObjectStore *this, DWWrappers *wrapper)
{
  return ?init@DWObjectStore@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWMarketingComms::markMessagesRead
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketingComms::markMessagesRead(DWMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsReportMessagesViewedRequest *request, bdCommsReportMessagesViewedResponse *response)
{
  return ?markMessagesRead@DWMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdCommsReportMessagesViewedRequest@@PEAVbdCommsReportMessagesViewedResponse@@@Z(this, result, request, response);
}

/*
==============
DWLogin::getLoginStatusCode
==============
*/

bdLoginStatus::bdLoginStatusCode __fastcall DWLogin::getLoginStatusCode(DWLogin *this)
{
  return ?getLoginStatusCode@DWLogin@@AEBA?AW4bdLoginStatusCode@bdLoginStatus@@XZ(this);
}

/*
==============
DWLogin::start
==============
*/

bool __fastcall DWLogin::start(DWLogin *this)
{
  return ?start@DWLogin@@QEAA_NXZ(this);
}

/*
==============
DWProfiles::getPublicInfos
==============
*/

bdReference<bdRemoteTask> *__fastcall DWProfiles::getPublicInfos(DWProfiles *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, bdProfileInfo *publicProfiles, const unsigned int numProfiles)
{
  return ?getPublicInfos@DWProfiles@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdProfileInfo@@I@Z(this, result, userIDs, publicProfiles, numProfiles);
}

/*
==============
DWClans::setActiveClan
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::setActiveClan(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id)
{
  return ?setActiveClan@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, id);
}

/*
==============
DWContentStreaming::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::upload(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  return ?upload@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GPEAVbdUploadInterceptor@@IQEBDGPEBXIIQEBVbdTag@@PEAVbdFileID@@PEBD@Z(this, result, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, DEPRECATED_clientLocale);
}

/*
==============
DWStats::readStatsByEntityIDExcluded
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::readStatsByEntityIDExcluded(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  return ?readStatsByEntityIDExcluded@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@QEAPEBDI@Z(this, result, leaderboardID, entityIDs, numEntityIDs, stats, excludedColumns, numExcludedColumns);
}

/*
==============
DWLootGen::init
==============
*/

bool __fastcall DWLootGen::init(DWLootGen *this, DWWrappers *wrapper)
{
  return ?init@DWLootGen@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWCrossPlatformIdentity::renameUser
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCrossPlatformIdentity::renameUser(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdRenameCrossPlatformUserRequest *request, bdRenameCrossPlatformUserResponse *response)
{
  return ?renameUser@DWCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdRenameCrossPlatformUserRequest@@AEAVbdRenameCrossPlatformUserResponse@@@Z(this, result, request, response);
}

/*
==============
DWAchievementEngine::setRestRequestsEnabled
==============
*/

void __fastcall DWAchievementEngine::setRestRequestsEnabled(DWAchievementEngine *this, bool restRequestEnabled)
{
  ?setRestRequestsEnabled@DWAchievementEngine@@QEAAX_N@Z(this, restRequestEnabled);
}

/*
==============
DWGroup::getGroupCounts
==============
*/

bdReference<bdRemoteTask> *__fastcall DWGroup::getGroupCounts(DWGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numGroupIDs, bdGroupCount *results, const unsigned int numEntries)
{
  return ?getGroupCounts@DWGroup@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBIIQEAVbdGroupCount@@I@Z(this, result, groupIDs, numGroupIDs, results, numEntries);
}

/*
==============
DWUCD::createAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUCD::createAccount(DWUCD *this, bdReference<bdRemoteTask> *result, bdUCDAccountInfo *const accountInfo, const char *const password, bdUCDAccountID *ucdID)
{
  return ?createAccount@DWUCD@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUCDAccountInfo@@QEBDPEAVbdUCDAccountID@@@Z(this, result, accountInfo, password, ucdID);
}

/*
==============
DWGameMetrics::checkForUmbrellaToken
==============
*/

void __fastcall DWGameMetrics::checkForUmbrellaToken(DWGameMetrics *this)
{
  ?checkForUmbrellaToken@DWGameMetrics@@AEAAXXZ(this);
}

/*
==============
DWCrossPlatformIdentity::upgradeAnonAccToFull
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCrossPlatformIdentity::upgradeAnonAccToFull(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdUpgradeAnonUnoAccRequest *request, bdUpgradeAnonUnoAccResponse *response)
{
  return ?upgradeAnonAccToFull@DWCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUpgradeAnonUnoAccRequest@@AEAVbdUpgradeAnonUnoAccResponse@@@Z(this, result, request, response);
}

/*
==============
DWClans::updateClan
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::updateClan(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const char *name, const char *clanTag, const bdUserAccountID *owner, bdClansGroupInfo *response)
{
  return ?updateClan@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBD1VbdUserAccountID@@PEAVbdClansGroupInfo@@@Z(this, result, id, name, clanTag, owner, response);
}

/*
==============
DWLobbyService::getUserLists
==============
*/

bdCrossPlatformUserLists *__fastcall DWLobbyService::getUserLists(DWLobbyService *this)
{
  return ?getUserLists@DWLobbyService@@IEAAPEAVbdCrossPlatformUserLists@@XZ(this);
}

/*
==============
DWLogin::getEnvironment
==============
*/

bool __fastcall DWLogin::getEnvironment(DWLogin *this, bdEnvironment *environment)
{
  return ?getEnvironment@DWLogin@@QEAA_NAEAW4bdEnvironment@@@Z(this, environment);
}

/*
==============
DWPooledStorage::abortHTTPOperation
==============
*/

void __fastcall DWPooledStorage::abortHTTPOperation(DWPooledStorage *this, bool joinThread)
{
  ?abortHTTPOperation@DWPooledStorage@@QEAAX_N@Z(this, joinThread);
}

/*
==============
GetGluttonEndpoint
==============
*/

const char *__fastcall GetGluttonEndpoint(const bdEnvironment environment, const int version)
{
  return ?GetGluttonEndpoint@@YAPEBDW4bdEnvironment@@H@Z(environment, version);
}

/*
==============
DWStats::readStatsByRank
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::readStatsByRank(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?readStatsByRank@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@IQEAPEBDI@Z(this, result, leaderboardID, firstRank, stats, maxResults, includedColumns, numIncludedColumns);
}

/*
==============
DWTeams::acceptMembership
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::acceptMembership(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  return ?acceptMembership@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, teamID);
}

/*
==============
DWStats::readStatsByLeaderboardIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::readStatsByLeaderboardIDs(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned int *leaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderboards)
{
  return ?readStatsByLeaderboardIDs@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBIQEAPEAVbdStatsInfoEx@@I@Z(this, result, entityID, leaderboardIDs, statsResults, numLeaderboards);
}

/*
==============
DWPublisherVariables::init
==============
*/

bool __fastcall DWPublisherVariables::init(DWPublisherVariables *this, DWWrappers *wrapper)
{
  return ?init@DWPublisherVariables@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWTitleUtilities::getUserNames
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTitleUtilities::getUserNames(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, const unsigned int numUsers, bdUserInfo *userInfos)
{
  return ?getUserNames@DWTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEA_KIQEAVbdUserInfo@@@Z(this, result, userIDs, numUsers, userInfos);
}

/*
==============
DWReward::init
==============
*/

bool __fastcall DWReward::init(DWReward *this, DWWrappers *wrapper)
{
  return ?init@DWReward@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWStandaloneUmbrella::isReady
==============
*/

bool __fastcall DWStandaloneUmbrella::isReady(DWStandaloneUmbrella *this)
{
  return ?isReady@DWStandaloneUmbrella@@UEBA_NXZ(this);
}

/*
==============
DWMarketplace::validateInventoryItemsToken
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::validateInventoryItemsToken(DWMarketplace *this, bdReference<bdRemoteTask> *result, char *const fileName, const bdValidationTokenResult *token, bdValidationTokenResult *validationTokenResult)
{
  return ?validateInventoryItemsToken@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEADAEBVbdValidationTokenResult@@PEAV3@@Z(this, result, fileName, token, validationTokenResult);
}

/*
==============
DWUmbrella::authenticateUmbrella
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUmbrella::authenticateUmbrella(DWUmbrella *this, bdReference<bdRemoteTask> *result, const bdAuthInfo *authInfo, bdUmbrellaUserAccount *outUmbrellaUser)
{
  return ?authenticateUmbrella@DWUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdAuthInfo@@PEAVbdUmbrellaUserAccount@@@Z(this, result, authInfo, outUmbrellaUser);
}

/*
==============
DWLobbyService::getRegulations
==============
*/

bdRegulations *__fastcall DWLobbyService::getRegulations(DWLobbyService *this)
{
  return ?getRegulations@DWLobbyService@@IEAAPEAVbdRegulations@@XZ(this);
}

/*
==============
DWMessaging::getChannelMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::getChannelMembers(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const unsigned int maxNumMembers, bdChannelGetMembersResponse *response)
{
  return ?getChannelMembers@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_KIPEAVbdChannelGetMembersResponse@@@Z(this, result, category, channelID, maxNumMembers, response);
}

/*
==============
DWClans::getOutgoingClanInvites
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::getOutgoingClanInvites(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const unsigned __int16 limit, const char *pageToken, bdClansGetMembershipProposalsByGroupResponse *response)
{
  return ?getOutgoingClanInvites@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEBDPEAVbdClansGetMembershipProposalsByGroupResponse@@@Z(this, result, id, limit, pageToken, response);
}

/*
==============
DWRedeemableCodes::redeemCode
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRedeemableCodes::redeemCode(DWRedeemableCodes *this, bdReference<bdRemoteTask> *result, const char *const clientTransactionId, const char *const code, bdRedeemCodeResult *a5)
{
  return ?redeemCode@DWRedeemableCodes@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD0PEAVbdRedeemCodeResult@@@Z(this, result, clientTransactionId, code, a5);
}

/*
==============
DWAsyncMatchMaking::shutdownMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::shutdownMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  return ?shutdownMatchMaking@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdBoolResult@@@Z(this, result, mmID, success);
}

/*
==============
DWClans::unregisterEventHandler
==============
*/

bool __fastcall DWClans::unregisterEventHandler(DWClans *this, bdClansEventHandler *handler)
{
  return ?unregisterEventHandler@DWClans@@QEAA_NPEAVbdClansEventHandler@@@Z(this, handler);
}

/*
==============
DWClans::registerEventHandler
==============
*/

bool __fastcall DWClans::registerEventHandler(DWClans *this, bdClansEventHandler *handler)
{
  return ?registerEventHandler@DWClans@@QEAA_NPEAVbdClansEventHandler@@@Z(this, handler);
}

/*
==============
DWLobbyService::deletePooledStorage
==============
*/

void __fastcall DWLobbyService::deletePooledStorage(DWLobbyService *this)
{
  ?deletePooledStorage@DWLobbyService@@IEAAXXZ(this);
}

/*
==============
DWMail::sendMailWithDuration
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMail::sendMailWithDuration(DWMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const unsigned int messageDuration, const bool returnOnExpiration, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  return ?sendMailWithDuration@DWMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBXIGI_NQEBVbdUserAccountID@@IPEBV3@@Z(this, result, message, messageSize, mailCategory, messageDuration, returnOnExpiration, userIDs, numUserIDs, senderID);
}

/*
==============
DWGameMetrics::set
==============
*/

bool __fastcall DWGameMetrics::set(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?set@DWGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
DWAsyncMatchMaking::syncLobbyDocuments
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::syncLobbyDocuments(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdBoolResult *boolResult, const char *lobbyHostDoc, unsigned int lobbyHostDocLength, unsigned __int64 updateID)
{
  return ?syncLobbyDocuments@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdBoolResult@@PEBDI0@Z(this, result, lobbyID, boolResult, lobbyHostDoc, lobbyHostDocLength, updateID);
}

/*
==============
DWMLG::isUserRegistered
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMLG::isUserRegistered(DWMLG *this, bdReference<bdRemoteTask> *result, bdBoolResult *const isRegistered)
{
  return ?isUserRegistered@DWMLG@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdBoolResult@@@Z(this, result, isRegistered);
}

/*
==============
DWAchievementEngine::claimAchievement
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::claimAchievement(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdClaimAchievementRequest *request)
{
  return ?claimAchievement@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClaimAchievementRequest@@@Z(this, result, request);
}

/*
==============
DWTeams::getApplicationsByTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getApplicationsByTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamApplicationWithTeamID *applications, const unsigned int numTeams, const unsigned int maxApplications, const unsigned int offset)
{
  return ?getApplicationsByTeam@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTeamApplicationWithTeamID@@III@Z(this, result, teamIDs, applications, numTeams, maxApplications, offset);
}

/*
==============
DWCrossPlatformIdentity::getCrossPlatformUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCrossPlatformIdentity::getCrossPlatformUserIDs(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserIDsRequest *request, bdGetCrossPlatformUserIDsResponse *response)
{
  return ?getCrossPlatformUserIDs@DWCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetCrossPlatformUserIDsRequest@@AEAVbdGetCrossPlatformUserIDsResponse@@@Z(this, result, request, response);
}

/*
==============
DWMarketplace::validateInventoriesItems
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::validateInventoriesItems(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdValidateInventoriesItemsRequest *request, bdValidateInventoriesItemsResponse *a4)
{
  return ?validateInventoriesItems@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdValidateInventoriesItemsRequest@@PEAVbdValidateInventoriesItemsResponse@@@Z(this, result, request, a4);
}

/*
==============
DWLobbyService::deleteContentStreaming
==============
*/

void __fastcall DWLobbyService::deleteContentStreaming(DWLobbyService *this)
{
  ?deleteContentStreaming@DWLobbyService@@IEAAXXZ(this);
}

/*
==============
DWTitleUtilities::getServerTime
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTitleUtilities::getServerTime(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTimeStamp *timeStamp)
{
  return ?getServerTime@DWTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdTimeStamp@@@Z(this, result, timeStamp);
}

/*
==============
DWPublisherVariables::getIterator
==============
*/

bool __fastcall DWPublisherVariables::getIterator(DWPublisherVariables *this, const char *const nameSpace, bdPublisherVariablesIterator *iterator)
{
  return ?getIterator@DWPublisherVariables@@QEAA_NQEBDAEAVbdPublisherVariablesIterator@@@Z(this, nameSpace, iterator);
}

/*
==============
DWObjectStore::uploadUserObjectsVectorized
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::uploadUserObjectsVectorized(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserObjectsVectorizedRequest *request, bdObjectStoreUploadUserObjectsVectorizedResponse *response)
{
  return ?uploadUserObjectsVectorized@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreUploadUserObjectsVectorizedRequest@@PEAVbdObjectStoreUploadUserObjectsVectorizedResponse@@@Z(this, result, request, response);
}

/*
==============
DWLobbyService::getMLG
==============
*/

bdMLG *__fastcall DWLobbyService::getMLG(DWLobbyService *this)
{
  return ?getMLG@DWLobbyService@@IEAAPEAVbdMLG@@XZ(this);
}

/*
==============
DWMarketplace::getInventoryItemInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::getInventoryItemInfo(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdGetInventoryItemInfoRequest *request, bdGetInventoryItemInfoResponse *response)
{
  return ?getInventoryItemInfo@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetInventoryItemInfoRequest@@PEAVbdGetInventoryItemInfoResponse@@@Z(this, result, request, response);
}

/*
==============
DWUno::getNumErrors
==============
*/

int __fastcall DWUno::getNumErrors(DWUno *this)
{
  return ?getNumErrors@DWUno@@QEBAHXZ(this);
}

/*
==============
DWUCD::init
==============
*/

bool __fastcall DWUCD::init(DWUCD *this, DWWrappers *wrapper)
{
  return ?init@DWUCD@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLobbyService::releaseAccess
==============
*/

void __fastcall DWLobbyService::releaseAccess(DWLobbyService *this)
{
  ?releaseAccess@DWLobbyService@@QEAAXXZ(this);
}

/*
==============
DWAsyncMatchMaking::getRelayClientAuthToken
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getRelayClientAuthToken(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdClientAuthTokenResult *clientAuthTokenResult)
{
  return ?getRelayClientAuthToken@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdClientAuthTokenResult@@@Z(this, result, clientAuthTokenResult);
}

/*
==============
DWUno::init
==============
*/

bool __fastcall DWUno::init(DWUno *this, DWWrappers *wrapper)
{
  return ?init@DWUno@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWUno::deleteAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUno::deleteAccount(DWUno *this, bdReference<bdRemoteTask> *result, const unsigned __int64 accountId, const char *accessToken)
{
  return ?deleteAccount@DWUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBD@Z(this, result, accountId, accessToken);
}

/*
==============
DWTeams::promoteMember
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::promoteMember(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?promoteMember@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
DWLobbyService::getUmbrella
==============
*/

bdUmbrella *__fastcall DWLobbyService::getUmbrella(DWLobbyService *this)
{
  return ?getUmbrella@DWLobbyService@@IEAAPEAVbdUmbrella@@XZ(this);
}

/*
==============
DWLobbyService::assignLoginService
==============
*/

void __fastcall DWLobbyService::assignLoginService(DWLobbyService *this, DWLogin *loginService, bdLobbyEventHandler *eventHandler)
{
  ?assignLoginService@DWLobbyService@@QEAAXPEAVDWLogin@@PEAVbdLobbyEventHandler@@@Z(this, loginService, eventHandler);
}

/*
==============
DWLobbyService::getLobbyServiceConst
==============
*/

const bdLobbyService *__fastcall DWLobbyService::getLobbyServiceConst(DWLobbyService *this)
{
  return ?getLobbyServiceConst@DWLobbyService@@AEBAPEBVbdLobbyService@@XZ(this);
}

/*
==============
DWUno::authenticateUnoUser
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUno::authenticateUnoUser(DWUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo)
{
  return ?authenticateUnoUser@DWUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoAccountInfo@@@Z(this, result, accountInfo);
}

/*
==============
DWUCD::initDefaultPublicKey
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUCD::initDefaultPublicKey(DWUCD *this, bdReference<bdRemoteTask> *result)
{
  return ?initDefaultPublicKey@DWUCD@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
DWMarketplace::steamProcessDurable
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::steamProcessDurable(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeTransactionResultV2 *a5)
{
  return ?steamProcessDurable@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, durableAppId, a5);
}

/*
==============
DWMarketingComms::init
==============
*/

bool __fastcall DWMarketingComms::init(DWMarketingComms *this, DWWrappers *wrapper)
{
  return ?init@DWMarketingComms@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAsyncMatchMaking::cancelMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::cancelMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  return ?cancelMatchMaking@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdBoolResult@@@Z(this, result, mmID, success);
}

/*
==============
DWUserLists::AddUsersToList
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUserLists::AddUsersToList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, const bdUserListEntity *userList, const int numUsers, const bool trim, const int listMaxSize, bdUpdateUsersInUserListResponse *response)
{
  return ?AddUsersToList@DWUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEBVbdUserListEntity@@H_NHPEAVbdUpdateUsersInUserListResponse@@@Z(this, result, listName, userList, numUsers, trim, listMaxSize, response);
}

/*
==============
DWUmbrella::unlinkUnoFromUmbrella
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUmbrella::unlinkUnoFromUmbrella(DWUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *providerAccount, const char *accessToken, bool psnIDMode)
{
  return ?unlinkUnoFromUmbrella@DWUmbrella@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUmbrellaProviderAccount@@PEBD_N@Z(this, result, umbrellaID, providerAccount, accessToken, psnIDMode);
}

/*
==============
DWMatchMaking::submitPerformance
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::submitPerformance(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues)
{
  return ?submitPerformance@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEBVbdPerformanceValue@@I@Z(this, result, gameType, performanceValues, numValues);
}

/*
==============
DWClans::cancelInvite
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::cancelInvite(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *user, bdClansRemoveProposalsResponse *response)
{
  return ?cancelInvite@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@PEAVbdClansRemoveProposalsResponse@@@Z(this, result, id, user, response);
}

/*
==============
DWLobbyService::getPooledStorage
==============
*/

bdPooledStorage *__fastcall DWLobbyService::getPooledStorage(DWLobbyService *this)
{
  return ?getPooledStorage@DWLobbyService@@IEAAPEAVbdPooledStorage@@XZ(this);
}

/*
==============
DWAsyncMatchMaking::qosHostsReply
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::qosHostsReply(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 transactionID, bdArray<bdQoSProbeInfo> *qosResponse)
{
  return ?qosHostsReply@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KAEAV?$bdArray@VbdQoSProbeInfo@@@@@Z(this, result, transactionID, qosResponse);
}

/*
==============
DWRichPresenceService::getInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRichPresenceService::getInfo(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userIDs, const int numUsers, bdGetUsersPresenceResponseV3 *response)
{
  return ?getInfo@DWRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@HPEAVbdGetUsersPresenceResponseV3@@@Z(this, result, userIDs, numUsers, response);
}

/*
==============
DWDataChannelDispatch::getErrorString
==============
*/

const char *__fastcall DWDataChannelDispatch::getErrorString(DWDataChannelDispatch *this, const char *category)
{
  return ?getErrorString@DWDataChannelDispatch@@QEAAPEBDPEBD@Z(this, category);
}

/*
==============
DWStorageContext::listFilesByOwner
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::listFilesByOwner(DWStorageContext *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *ownerID, const unsigned int startDate, bdContextUserStorageFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  return ?listFilesByOwner@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdUserAccountID@@IQEAVbdContextUserStorageFileInfo@@GGQEBD@Z(this, result, ownerID, startDate, fileList, maxNumResults, offset, fileName);
}

/*
==============
DWMessaging::sendToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::sendToChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  return ?sendToChannel@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_KQEBXII@Z(this, result, category, channelID, message, messageSize, messageType);
}

/*
==============
DWLobbyService::cleanup
==============
*/

void __fastcall DWLobbyService::cleanup(DWLobbyService *this)
{
  ?cleanup@DWLobbyService@@QEAAXXZ(this);
}

/*
==============
DWStandaloneUmbrella::init
==============
*/

bool __fastcall DWStandaloneUmbrella::init(DWStandaloneUmbrella *this)
{
  return ?init@DWStandaloneUmbrella@@IEAA_NXZ(this);
}

/*
==============
DWPooledStorage::enablePersistentThread
==============
*/

void __fastcall DWPooledStorage::enablePersistentThread(DWPooledStorage *this, bool enable)
{
  ?enablePersistentThread@DWPooledStorage@@QEAAX_N@Z(this, enable);
}

/*
==============
DWUmbrella::initUmbrella
==============
*/

void __fastcall DWUmbrella::initUmbrella(DWUmbrella *this)
{
  ?initUmbrella@DWUmbrella@@QEAAXXZ(this);
}

/*
==============
DWMatchScheduler::getScheduledMatch
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchScheduler::getScheduledMatch(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned int matchID, bdScheduledMatchInfo *scheduledMatch)
{
  return ?getScheduledMatch@DWMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEAVbdScheduledMatchInfo@@@Z(this, result, matchID, scheduledMatch);
}

/*
==============
DWTeams::searchTeams
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::searchTeams(DWTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *teamInfos, const bdUserAccountID *searchingUserID, const unsigned int numOtherUsers, const unsigned int numTeamsFilter, const unsigned int numProfileFilters, const unsigned __int64 *otherUsers, const bdTeamSearchFilter *publicProfileFilter, const bdTeamSearchFilter *teamsFilter, const unsigned int offset, const unsigned int maxResults, const char *const orderByColumn, const char *const sortOrder, const bool getCurrentTeams)
{
  return ?searchTeams@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoV2@@VbdUserAccountID@@IIIQEB_KQEBVbdTeamSearchFilter@@3IIQEBD4_N@Z(this, result, teamInfos, searchingUserID, numOtherUsers, numTeamsFilter, numProfileFilters, otherUsers, publicProfileFilter, teamsFilter, offset, maxResults, orderByColumn, sortOrder, getCurrentTeams);
}

/*
==============
DWLobbyService::getMarketingComms
==============
*/

bdMarketingComms *__fastcall DWLobbyService::getMarketingComms(DWLobbyService *this)
{
  return ?getMarketingComms@DWLobbyService@@IEAAPEAVbdMarketingComms@@XZ(this);
}

/*
==============
DWGroup::setGroups
==============
*/

bdReference<bdRemoteTask> *__fastcall DWGroup::setGroups(DWGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numEntries)
{
  return ?setGroups@DWGroup@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBII@Z(this, result, groupIDs, numEntries);
}

/*
==============
DWLootGen::getPlayerState
==============
*/

bdReference<bdRemoteTask> *__fastcall DWLootGen::getPlayerState(DWLootGen *this, bdReference<bdRemoteTask> *result, const bdLootGenerationGetPlayerStateRequest *request, bdLootGenerationGetPlayerStateResponse *response)
{
  return ?getPlayerState@DWLootGen@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdLootGenerationGetPlayerStateRequest@@AEAVbdLootGenerationGetPlayerStateResponse@@@Z(this, result, request, response);
}

/*
==============
DWPublisherVariables::retrievePublisherVariables
==============
*/

bdReference<bdRemoteTask> *__fastcall DWPublisherVariables::retrievePublisherVariables(DWPublisherVariables *this, bdReference<bdRemoteTask> *result, const char *const *nameSpaces, const unsigned __int16 numNameSpaces)
{
  return ?retrievePublisherVariables@DWPublisherVariables@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBDG@Z(this, result, nameSpaces, numNameSpaces);
}

/*
==============
DWAsyncMatchMaking::initiateDCQoS
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::initiateDCQoS(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *initiateParams, bdStringResult *dcQoSInfo)
{
  return ?initiateDCQoS@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEAVbdStringResult@@@Z(this, result, initiateParams, dcQoSInfo);
}

/*
==============
DWAchievementEngineClient::pump
==============
*/

void __fastcall DWAchievementEngineClient::pump(DWAchievementEngineClient *this)
{
  ?pump@DWAchievementEngineClient@@UEAAXXZ(this);
}

/*
==============
DWContentStreaming::download
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::download(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?download@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIPEAVbdFileMetaData@@II@Z(this, result, fileID, fileData, fileDataSize, fileMetaData, startByte, endByte);
}

/*
==============
DWMessaging::createChatChannelWithID
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::createChatChannelWithID(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, bdChannelCreateChannelResponse *const createChannelResponse)
{
  return ?createChatChannelWithID@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_KQEAVbdChannelCreateChannelResponse@@@Z(this, result, category, channelID, createChannelResponse);
}

/*
==============
DWMail::sendMail
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMail::sendMail(DWMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  return ?sendMail@DWMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBXIGQEBVbdUserAccountID@@IPEBV3@@Z(this, result, message, messageSize, mailCategory, userIDs, numUserIDs, senderID);
}

/*
==============
DWLobbyService::isDisconnected
==============
*/

bool __fastcall DWLobbyService::isDisconnected(DWLobbyService *this)
{
  return ?isDisconnected@DWLobbyService@@IEAA_NXZ(this);
}

/*
==============
DWCrossPlatformIdentity::unregisterPushMessageHandler
==============
*/

bool __fastcall DWCrossPlatformIdentity::unregisterPushMessageHandler(DWCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *handler)
{
  return ?unregisterPushMessageHandler@DWCrossPlatformIdentity@@QEAA_NPEAVbdCrossPlatformIdentityPushMessageHandler@@@Z(this, handler);
}

/*
==============
DWUno::isUnoInited
==============
*/

bool __fastcall DWUno::isUnoInited(DWUno *this)
{
  return ?isUnoInited@DWUno@@QEAA_NXZ(this);
}

/*
==============
DWDataChannelManagerStandard::init
==============
*/

bool __fastcall DWDataChannelManagerStandard::init(DWDataChannelManagerStandard *this)
{
  return ?init@DWDataChannelManagerStandard@@QEAA_NXZ(this);
}

/*
==============
DWTeams::proposeMembership
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::proposeMembership(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newUserID, const void *const attachment, const unsigned int attachmentSize)
{
  return ?proposeMembership@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@QEBXI@Z(this, result, teamID, newUserID, attachment, attachmentSize);
}

/*
==============
DWLobbyService::getEventLog
==============
*/

bdEventLog *__fastcall DWLobbyService::getEventLog(DWLobbyService *this)
{
  return ?getEventLog@DWLobbyService@@IEAAPEAVbdEventLog@@XZ(this);
}

/*
==============
DWTeams::getMemberships
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getMemberships(DWTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfo *teamInfos, const unsigned int maxNumTeams)
{
  return ?getMemberships@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfo@@I@Z(this, result, teamInfos, maxNumTeams);
}

/*
==============
DWEventLog::pump
==============
*/

void __fastcall DWEventLog::pump(DWEventLog *this)
{
  ?pump@DWEventLog@@UEAAXXZ(this);
}

/*
==============
DWServerInventory::allocateDedicatedServer
==============
*/

bdReference<bdRemoteTask> *__fastcall DWServerInventory::allocateDedicatedServer(DWServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, bdDataCenterPreferences *dataCenterPreferences, bdAllocateDedicatedServerResponse *a5, const char *context)
{
  return ?allocateDedicatedServer@DWServerInventory@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEAVbdDataCenterPreferences@@PEAVbdAllocateDedicatedServerResponse@@0@Z(this, result, buildName, dataCenterPreferences, a5, context);
}

/*
==============
DWAsyncMatchMaking::getDataCenterPreferences
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getDataCenterPreferences(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, unsigned int numUserIDs, bdDataCenterPreferences *results)
{
  return ?getDataCenterPreferences@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEA_KIPEAVbdDataCenterPreferences@@@Z(this, result, userIDs, numUserIDs, results);
}

/*
==============
DWMatchMaking::init
==============
*/

bool __fastcall DWMatchMaking::init(DWMatchMaking *this, DWWrappers *wrapper)
{
  return ?init@DWMatchMaking@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLobbyService::getLobbyService
==============
*/

DWLobbyServiceHandle *__fastcall DWLobbyService::getLobbyService(DWLobbyService *this, DWLobbyServiceHandle *result)
{
  return ?getLobbyService@DWLobbyService@@AEAA?AVDWLobbyServiceHandle@@XZ(this, result);
}

/*
==============
DWContentStreaming::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::upload(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  return ?upload@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@GPEBXIQEBDG0IIQEBVbdTag@@PEAVbdFileID@@PEBD@Z(this, result, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, DEPRECATED_clientLocale);
}

/*
==============
DWTeams::demoteMember
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::demoteMember(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?demoteMember@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
DWLobbyService::getKeyArchive
==============
*/

bdKeyArchive *__fastcall DWLobbyService::getKeyArchive(DWLobbyService *this)
{
  return ?getKeyArchive@DWLobbyService@@IEAAPEAVbdKeyArchive@@XZ(this);
}

/*
==============
DWMarketplace::pawnItem
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::pawnItem(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int itemID, const bdMarketplacePawnChoice *pawnChoices, unsigned __int8 numPawnChoices)
{
  return ?pawnItem@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIQEBVbdMarketplacePawnChoice@@E@Z(this, result, clientTransactionId, itemID, pawnChoices, numPawnChoices);
}

/*
==============
DWTags::searchByTags
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTags::searchByTags(DWTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int startIndex, const unsigned int maxNumResults, const bool orderNewestFirst, const unsigned int numTags, const bdTag *tags, bdFileID *results)
{
  return ?searchByTags@DWTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@III_NIQEBVbdTag@@QEAVbdFileID@@@Z(this, result, collectionID, startIndex, maxNumResults, orderNewestFirst, numTags, tags, results);
}

/*
==============
DWMarketplace::purchaseOnSteamFinalize
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::purchaseOnSteamFinalize(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 orderId, const unsigned int appId, const bool isAuthorized, bdExchangeTransactionResultV2 *a7)
{
  return ?purchaseOnSteamFinalize@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD_KI_NPEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, orderId, appId, isAuthorized, a7);
}

/*
==============
DWLobbyService::callReportConsoleDetailsIfNeeded
==============
*/

void __fastcall DWLobbyService::callReportConsoleDetailsIfNeeded(DWLobbyService *this, bdLobbyService *lobbyService)
{
  ?callReportConsoleDetailsIfNeeded@DWLobbyService@@AEAAXPEAVbdLobbyService@@@Z(this, lobbyService);
}

/*
==============
DWStandaloneUmbrella::getTokenCRC
==============
*/

unsigned int __fastcall DWStandaloneUmbrella::getTokenCRC(DWStandaloneUmbrella *this)
{
  return ?getTokenCRC@DWStandaloneUmbrella@@QEAAIXZ(this);
}

/*
==============
DWProfiles::init
==============
*/

bool __fastcall DWProfiles::init(DWProfiles *this, DWWrappers *wrapper)
{
  return ?init@DWProfiles@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLobbyService::getConnectionID
==============
*/

unsigned __int64 __fastcall DWLobbyService::getConnectionID(DWLobbyService *this)
{
  return ?getConnectionID@DWLobbyService@@QEAA_KXZ(this);
}

/*
==============
DWTeams::init
==============
*/

bool __fastcall DWTeams::init(DWTeams *this, DWWrappers *wrapper)
{
  return ?init@DWTeams@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAsyncMatchMaking::getLobbyDocuments
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getLobbyDocuments(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdLobbyDocuments *lobbyDocs)
{
  return ?getLobbyDocuments@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdLobbyDocuments@@@Z(this, result, lobbyID, lobbyDocs);
}

/*
==============
DWContentStreaming::listFilesByOwner
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::listFilesByOwner(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileMetaData, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  return ?listFilesByOwner@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KIGQEAVbdFileMetaData@@GGPEBD@Z(this, result, ownerID, startDate, category, fileMetaData, maxNumResults, offset, fileName);
}

/*
==============
DWFriends::getPending
==============
*/

bdReference<bdRemoteTask> *__fastcall DWFriends::getPending(DWFriends *this, bdReference<bdRemoteTask> *result, bdGetPendingFriendsResponse *response, const int direction)
{
  return ?getPending@DWFriends@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdGetPendingFriendsResponse@@H@Z(this, result, response, direction);
}

/*
==============
DWStorageContext::uploadFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::uploadFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadFile@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBXIW4bdVisibility@bdFileInfo@@AEBVbdUserAccountID@@QEAVbdContextUserStorageFileInfo@@@Z(this, result, fileName, fileData, fileSize, fileVisibility, ownerID, fileInfo);
}

/*
==============
DWStorageContext::uploadFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::uploadFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const dwMultiFileTask *multiFileTask, bdContextUserStorageFileInfo *const fileInfo)
{
  return ?uploadFiles@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBUdwMultiFileTask@@QEAVbdContextUserStorageFileInfo@@@Z(this, result, multiFileTask, fileInfo);
}

/*
==============
DWPlatformInfo::getConsoleId
==============
*/

unsigned int __fastcall DWPlatformInfo::getConsoleId(DWPlatformInfo *this, unsigned __int8 *id, unsigned int size)
{
  return ?getConsoleId@DWPlatformInfo@@QEAAIPEAEI@Z(this, id, size);
}

/*
==============
DWObjectStore::getPublisherObject
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::getPublisherObject(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectRequest *request, bdObjectStoreGetPublisherObjectResponse *response)
{
  return ?getPublisherObject@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetPublisherObjectRequest@@PEAVbdObjectStoreGetPublisherObjectResponse@@@Z(this, result, request, response);
}

/*
==============
DWDataChannelManagerStandard::pump
==============
*/

void __fastcall DWDataChannelManagerStandard::pump(DWDataChannelManagerStandard *this)
{
  ?pump@DWDataChannelManagerStandard@@UEAAXXZ(this);
}

/*
==============
DWTeams::getMembershipsUser
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getMembershipsUser(DWTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, bdTeamInfo *teamInfos, const unsigned int maxNumTeams)
{
  return ?getMembershipsUser@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEAVbdTeamInfo@@I@Z(this, result, userID, teamInfos, maxNumTeams);
}

/*
==============
DWLobbyService::getTags
==============
*/

bdTags *__fastcall DWLobbyService::getTags(DWLobbyService *this)
{
  return ?getTags@DWLobbyService@@IEAAPEAVbdTags@@XZ(this);
}

/*
==============
DWAsyncMatchMaking::initMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::initMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned __int64 *tokens, unsigned __int64 count, bdStringResult *initMatchMakingResponse)
{
  return ?initMatchMaking@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEB_K0_KPEAVbdStringResult@@@Z(this, result, userIDs, tokens, count, initMatchMakingResponse);
}

/*
==============
DWTeams::getIncomingProposals
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getIncomingProposals(DWTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *incomingProposals, const unsigned int maxNumProposals)
{
  return ?getIncomingProposals@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamProposal@@I@Z(this, result, incomingProposals, maxNumProposals);
}

/*
==============
DWUno::initUno
==============
*/

void __fastcall DWUno::initUno(DWUno *this)
{
  ?initUno@DWUno@@QEAAXXZ(this);
}

/*
==============
DWTitleUtilities::verifyString
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTitleUtilities::verifyString(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdVerifyString *verified)
{
  return ?verifyString@DWTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdVerifyString@@@Z(this, result, str, length, verified);
}

/*
==============
DWLobbyService::getAchievementsEngineService
==============
*/

bdAchievementsEngineService *__fastcall DWLobbyService::getAchievementsEngineService(DWLobbyService *this)
{
  return ?getAchievementsEngineService@DWLobbyService@@IEAAPEAVbdAchievementsEngineService@@XZ(this);
}

/*
==============
DWRichPresenceService::unsubscribeToPlayers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRichPresenceService::unsubscribeToPlayers(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userIDs, const int numUsers, bdUnsubscribeFromUsersPresenceResponse *response)
{
  return ?unsubscribeToPlayers@DWRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@HPEAVbdUnsubscribeFromUsersPresenceResponse@@@Z(this, result, userIDs, numUsers, response);
}

/*
==============
DWMarketplace::purchaseOnSteamInitialize
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::purchaseOnSteamInitialize(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, bdSteamOrderIdResult *a5)
{
  return ?purchaseOnSteamInitialize@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDIPEAVbdSteamOrderIdResult@@@Z(this, result, transactionId, fpSkuId, a5);
}

/*
==============
DWMarketplace::xboxOneTransferConsumable
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::xboxOneTransferConsumable(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xboxOneTransferConsumable@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, delegationToken, consumablePath, productID, transactionResult);
}

/*
==============
DWDataChannelDispatch::initCategory
==============
*/

bool __fastcall DWDataChannelDispatch::initCategory(DWDataChannelDispatch *this, const char *category)
{
  return ?initCategory@DWDataChannelDispatch@@QEAA_NPEBD@Z(this, category);
}

/*
==============
DWLogin::failed
==============
*/

bool __fastcall DWLogin::failed(DWLogin *this)
{
  return ?failed@DWLogin@@QEBA_NXZ(this);
}

/*
==============
DWLogin::abort
==============
*/

void __fastcall DWLogin::abort(DWLogin *this)
{
  ?abort@DWLogin@@QEAAXXZ(this);
}

/*
==============
DWCrossPlatformIdentity::usernameSearch
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCrossPlatformIdentity::usernameSearch(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserSearchRequest *request, bdGetCrossPlatformUserSearchResponse *response)
{
  return ?usernameSearch@DWCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetCrossPlatformUserSearchRequest@@AEAVbdGetCrossPlatformUserSearchResponse@@@Z(this, result, request, response);
}

/*
==============
DWLogin::getStatus
==============
*/

const bdLoginStatus *__fastcall DWLogin::getStatus(DWLogin *this)
{
  return ?getStatus@DWLogin@@QEBAAEBVbdLoginStatus@@XZ(this);
}

/*
==============
DWLobbyService::getPublisherVariables
==============
*/

bdPublisherVariables *__fastcall DWLobbyService::getPublisherVariables(DWLobbyService *this)
{
  return ?getPublisherVariables@DWLobbyService@@IEAAPEAVbdPublisherVariables@@XZ(this);
}

/*
==============
DWEventLog::isReadyToSend
==============
*/

bool __fastcall DWEventLog::isReadyToSend(DWEventLog *this)
{
  return ?isReadyToSend@DWEventLog@@QEBA_NXZ(this);
}

/*
==============
DWObjectStore::getPublisherObjectMetadatas
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::getPublisherObjectMetadatas(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectMetadatasResponse *response)
{
  return ?getPublisherObjectMetadatas@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetPublisherObjectsRequest@@PEAVbdObjectStoreGetPublisherObjectMetadatasResponse@@@Z(this, result, request, response);
}

/*
==============
DWServerInventory::init
==============
*/

bool __fastcall DWServerInventory::init(DWServerInventory *this, DWWrappers *wrapper)
{
  return ?init@DWServerInventory@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWUCD::getUserDetailsByEmail
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUCD::getUserDetailsByEmail(DWUCD *this, bdReference<bdRemoteTask> *result, const char *const emailAddress, const char *const password, bdUCDAccountInfo *accountInfo)
{
  return ?getUserDetailsByEmail@DWUCD@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD0PEAVbdUCDAccountInfo@@@Z(this, result, emailAddress, password, accountInfo);
}

/*
==============
DWMessaging::unsubscribeFromChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::unsubscribeFromChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID)
{
  return ?unsubscribeFromChannel@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_K@Z(this, result, category, channelID);
}

/*
==============
DWRegulations::getRegulations
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRegulations::getRegulations(DWRegulations *this, bdReference<bdRemoteTask> *result, const bdFetchRegulationsRequest *request, bdFetchRegulationsResponse *response)
{
  return ?getRegulations@DWRegulations@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdFetchRegulationsRequest@@AEAVbdFetchRegulationsResponse@@@Z(this, result, request, response);
}

/*
==============
DWStorageContext::listAllPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::listAllPublisherFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, bdFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  return ?listAllPublisherFiles@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEAVbdFileInfo@@GGQEBD@Z(this, result, startDate, fileList, maxNumResults, offset, fileName);
}

/*
==============
DWLogin::pump
==============
*/

void __fastcall DWLogin::pump(DWLogin *this)
{
  ?pump@DWLogin@@UEAAXXZ(this);
}

/*
==============
DWMatchScheduler::listScheduledMatches
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchScheduler::listScheduledMatches(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, bdScheduledMatchInfo *scheduledMatches, unsigned int numMatches)
{
  return ?listScheduledMatches@DWMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdScheduledMatchInfo@@I@Z(this, result, scheduledMatches, numMatches);
}

/*
==============
DWTitleUtilities::getUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTitleUtilities::getUserIDs(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const *usernames, const unsigned int numUsers, bdUserInfo *userInfos)
{
  return ?getUserIDs@DWTitleUtilities@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBQEBDIQEAVbdUserInfo@@@Z(this, result, usernames, numUsers, userInfos);
}

/*
==============
DWLobbyService::getMatchScheduler
==============
*/

bdMatchScheduler *__fastcall DWLobbyService::getMatchScheduler(DWLobbyService *this)
{
  return ?getMatchScheduler@DWLobbyService@@IEAAPEAVbdMatchScheduler@@XZ(this);
}

/*
==============
DWTeams::autoJoinTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::autoJoinTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  return ?autoJoinTeam@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, teamID);
}

/*
==============
DWRedeemableCodes::init
==============
*/

bool __fastcall DWRedeemableCodes::init(DWRedeemableCodes *this, DWWrappers *wrapper)
{
  return ?init@DWRedeemableCodes@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAchievementEngine::getRestRequestsEnabled
==============
*/

bool __fastcall DWAchievementEngine::getRestRequestsEnabled(DWAchievementEngine *this)
{
  return ?getRestRequestsEnabled@DWAchievementEngine@@QEAA_NXZ(this);
}

/*
==============
DWPublisherVariables::getKeyValueByIterator
==============
*/

bool __fastcall DWPublisherVariables::getKeyValueByIterator(DWPublisherVariables *this, const bdPublisherVariablesIterator *iterator, char *const key, unsigned int keySize, char *const value, unsigned int valueSize)
{
  return ?getKeyValueByIterator@DWPublisherVariables@@QEAA_NVbdPublisherVariablesIterator@@QEADI1I@Z(this, iterator, key, keySize, value, valueSize);
}

/*
==============
DWAchievementEngine::reportEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::reportEvents(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdReportEventsRequest *request)
{
  return ?reportEvents@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdReportEventsRequest@@@Z(this, result, request);
}

/*
==============
DWCrossPlatformIdentity::init
==============
*/

bool __fastcall DWCrossPlatformIdentity::init(DWCrossPlatformIdentity *this, DWWrappers *wrapper)
{
  return ?init@DWCrossPlatformIdentity@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAsyncMatchMaking::submitTournamentMatchResults
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::submitTournamentMatchResults(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentMatchResults, unsigned int matchResultsLength)
{
  return ?submitTournamentMatchResults@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDI@Z(this, result, tournamentMatchResults, matchResultsLength);
}

/*
==============
DWDML::getUserData
==============
*/

bdReference<bdRemoteTask> *__fastcall DWDML::getUserData(DWDML *this, bdReference<bdRemoteTask> *result, bdDMLInfo *info)
{
  return ?getUserData@DWDML@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdDMLInfo@@@Z(this, result, info);
}

/*
==============
DWTeams::kickMember
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::kickMember(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?kickMember@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
DWStorageContext::uploadAndValidateFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::uploadAndValidateFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const dwMultiFileTask *multiFileTask, bdValidatedContextUserStorageFileInfo *const validatedFileInfo)
{
  return ?uploadAndValidateFiles@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBUdwMultiFileTask@@QEAVbdValidatedContextUserStorageFileInfo@@@Z(this, result, multiFileTask, validatedFileInfo);
}

/*
==============
DWTags::setTagsForEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTags::setTagsForEntityID(DWTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  return ?setTagsForEntityID@DWTags@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KIQEBVbdTag@@@Z(this, result, collectionID, entityID, numTags, tags);
}

/*
==============
DWLogin::cleanup
==============
*/

void __fastcall DWLogin::cleanup(DWLogin *this)
{
  ?cleanup@DWLogin@@QEAAXXZ(this);
}

/*
==============
DWObjectStore::getUserObjectsVectorized
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::getUserObjectsVectorized(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsVectorizedRequest *request, bdObjectStoreGetUserObjectsVectorizedResponse *response)
{
  return ?getUserObjectsVectorized@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdObjectStoreGetUserObjectsVectorizedRequest@@PEAVbdObjectStoreGetUserObjectsVectorizedResponse@@@Z(this, result, request, response);
}

/*
==============
DWStats::deleteStats
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::deleteStats(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID)
{
  return ?deleteStats@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, leaderboardID);
}

/*
==============
DWClans::inviteUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::inviteUsers(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *users, const unsigned int numUsers, bdClansProposeMembershipsResponse *response)
{
  return ?inviteUsers@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBVbdUserAccountID@@IPEAVbdClansProposeMembershipsResponse@@@Z(this, result, id, users, numUsers, response);
}

/*
==============
DWPooledStorage::pump
==============
*/

void __fastcall DWPooledStorage::pump(DWPooledStorage *this)
{
  ?pump@DWPooledStorage@@UEAAXXZ(this);
}

/*
==============
DWLobbyService::getRichPresence
==============
*/

bdCrossPlatformPresence *__fastcall DWLobbyService::getRichPresence(DWLobbyService *this)
{
  return ?getRichPresence@DWLobbyService@@IEAAPEAVbdCrossPlatformPresence@@XZ(this);
}

/*
==============
DWContentStreaming::copyFromUserStorage
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::copyFromUserStorage(DWContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 userFileID, const unsigned __int16 fileSlot, const char *fileName, const unsigned __int16 category, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  return ?copyFromUserStorage@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KGPEBDGPEBXIIPEAVbdTag@@PEAVbdFileID@@@Z(this, result, userFileID, fileSlot, fileName, category, metaData, metaDataSize, numTags, tags, fileID);
}

/*
==============
DWLogin::getFailure
==============
*/

const bdLoginFailure *__fastcall DWLogin::getFailure(DWLogin *this)
{
  return ?getFailure@DWLogin@@QEBAAEBVbdLoginFailure@@XZ(this);
}

/*
==============
DWLogin::hasStarted
==============
*/

bool __fastcall DWLogin::hasStarted(DWLogin *this)
{
  return ?hasStarted@DWLogin@@QEBA_NXZ(this);
}

/*
==============
DWAsyncMatchMaking::leaveAllTournaments
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::leaveAllTournaments(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result)
{
  return ?leaveAllTournaments@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
DWCrossPlatformIdentity::registerPushMessageHandler
==============
*/

bool __fastcall DWCrossPlatformIdentity::registerPushMessageHandler(DWCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *handler)
{
  return ?registerPushMessageHandler@DWCrossPlatformIdentity@@QEAA_NPEAVbdCrossPlatformIdentityPushMessageHandler@@@Z(this, handler);
}

/*
==============
DWTags::init
==============
*/

bool __fastcall DWTags::init(DWTags *this, DWWrappers *wrapper)
{
  return ?init@DWTags@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAchievementEngine::deleteUser
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::deleteUser(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdDeleteUserRequest *request)
{
  return ?deleteUser@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdDeleteUserRequest@@@Z(this, result, request);
}

/*
==============
DWGameMetrics::enqueue
==============
*/

bool __fastcall DWGameMetrics::enqueue(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?enqueue@DWGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
DWMessaging::getChannelInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::getChannelInfo(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, bdChannelGetChannelInfosResponse *response)
{
  return ?getChannelInfo@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_KPEAVbdChannelGetChannelInfosResponse@@@Z(this, result, category, channelID, response);
}

/*
==============
DWAsyncMatchMaking::getMatchMakingStatus
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getMatchMakingStatus(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *searchParamsList, unsigned int paramsLength, bdStringResult *matchmakingStatus)
{
  return ?getMatchMakingStatus@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, searchParamsList, paramsLength, matchmakingStatus);
}

/*
==============
DWMarketplace::xboxOneProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::xboxOneProcessProduct(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?xboxOneProcessProduct@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD00PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, delegationToken, productID, transactionResult);
}

/*
==============
DWTeams::getMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getMembers(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  return ?getMembers@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMember@@II_N@Z(this, result, teamID, teamMembers, maxNumTeamMembers, offset, getOnlineFirst);
}

/*
==============
DWUserLists::CreateUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUserLists::CreateUserList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, bdCreateUserListResponse *response)
{
  return ?CreateUserList@DWUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEAVbdCreateUserListResponse@@@Z(this, result, listName, response);
}

/*
==============
DWMarketplace::pawnItems
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::pawnItems(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceItemToPawn *itemsToPawn, const unsigned int numItemsToPawn, bdMarketplaceAuditLogResult *a6)
{
  return ?pawnItems@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEBVbdMarketplaceItemToPawn@@IPEAVbdMarketplaceAuditLogResult@@@Z(this, result, clientTransactionId, itemsToPawn, numItemsToPawn, a6);
}

/*
==============
DWFriends::init
==============
*/

bool __fastcall DWFriends::init(DWFriends *this, DWWrappers *wrapper)
{
  return ?init@DWFriends@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAsyncMatchMaking::registerForTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::registerForTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentRegistration, const unsigned int bufferSize, bdStringResult *registrationResult)
{
  return ?registerForTournament@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, tournamentRegistration, bufferSize, registrationResult);
}

/*
==============
DWTeams::rejectApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::rejectApplication(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  return ?rejectApplication@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, applicantID);
}

/*
==============
DWStats::readStatsByPivot
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::readStatsByPivot(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 entityID, bdStatsInfo *stats, const unsigned int maxResults)
{
  return ?readStatsByPivot@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I_KQEAVbdStatsInfo@@I@Z(this, result, leaderboardID, entityID, stats, maxResults);
}

/*
==============
DWAchievementEngine::reportUserEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::reportUserEvents(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdReportUserEventsRequest *request)
{
  return ?reportUserEvents@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdReportUserEventsRequest@@@Z(this, result, request);
}

/*
==============
DWAsyncMatchMaking::getPreferredServerDetails
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getPreferredServerDetails(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *buildName, const char *context, bdStringResult *serverDetails)
{
  return ?getPreferredServerDetails@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdStringResult@@@Z(this, result, buildName, context, serverDetails);
}

/*
==============
DWLobbyService::getABTesting
==============
*/

bdABTesting *__fastcall DWLobbyService::getABTesting(DWLobbyService *this)
{
  return ?getABTesting@DWLobbyService@@IEAAPEAVbdABTesting@@XZ(this);
}

/*
==============
DWAsyncMatchMaking::initiateDCQoS
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::initiateDCQoS(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *dcQoSInfo)
{
  return ?initiateDCQoS@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, dcQoSInfo);
}

/*
==============
DWTeams::getPrivateProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getPrivateProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *const privateProfile)
{
  return ?getPrivateProfile@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamProfile@@@Z(this, result, teamID, privateProfile);
}

/*
==============
DWTeams::promoteMemberToOwner
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::promoteMemberToOwner(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?promoteMemberToOwner@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
DWTeams::getMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getMembers(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  return ?getMembers@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMember@@II@Z(this, result, teamID, teamMembers, maxNumTeamMembers, offset);
}

/*
==============
DWMatchMaking::findSessions
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::findSessions(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, const unsigned int startIndex, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  return ?findSessions@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIIPEAVbdSessionParams@@QEAVbdMatchMakingInfo@@@Z(this, result, queryID, startIndex, maxNumResults, sessionParams, results);
}

/*
==============
DWDataChannelDispatch::setAuthToken
==============
*/

bool __fastcall DWDataChannelDispatch::setAuthToken(DWDataChannelDispatch *this, const char *const authToken)
{
  return ?setAuthToken@DWDataChannelDispatch@@QEAA_NQEBD@Z(this, authToken);
}

/*
==============
DWPooledStorage::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall DWPooledStorage::upload(DWPooledStorage *this, bdReference<bdRemoteTask> *result, bdUploadInterceptor *uploadHandler, unsigned __int16 category, const char *const fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  return ?upload@DWPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUploadInterceptor@@GQEBDIPEAVbdTag@@PEAVbdFileID@@PEBD@Z(this, result, uploadHandler, category, fileName, numTags, tags, fileID, DEPRECATED_clientLocale);
}

/*
==============
DWUno::authenticateUmbrellaTokenWithUno
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUno::authenticateUmbrellaTokenWithUno(DWUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaToken, bdUnoTokens *outUnoTokens)
{
  return ?authenticateUmbrellaTokenWithUno@DWUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaAccessInfo@@PEAVbdUnoTokens@@@Z(this, result, umbrellaToken, outUnoTokens);
}

/*
==============
DWMarketingComms::getCommMessages
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketingComms::getCommMessages(DWMarketingComms *this, bdReference<bdRemoteTask> *result, const char *locale, bdCommsLocationMessages *locationMessages, unsigned int locationMessagesCount)
{
  return ?getCommMessages@DWMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDQEAVbdCommsLocationMessages@@I@Z(this, result, locale, locationMessages, locationMessagesCount);
}

/*
==============
DWContentStreaming::init
==============
*/

bool __fastcall DWContentStreaming::init(DWContentStreaming *this, DWWrappers *wrapper)
{
  return ?init@DWContentStreaming@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWContentStreaming::enablePersistentThread
==============
*/

void __fastcall DWContentStreaming::enablePersistentThread(DWContentStreaming *this, bool enable)
{
  ?enablePersistentThread@DWContentStreaming@@QEAAX_N@Z(this, enable);
}

/*
==============
DWTeams::getPublicProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getPublicProfiles(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamProfile *publicProfiles, const unsigned int numTeams)
{
  return ?getPublicProfiles@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTeamProfile@@I@Z(this, result, teamIDs, publicProfiles, numTeams);
}

/*
==============
DWStandaloneUmbrella::getTokenExpiry
==============
*/

unsigned __int64 __fastcall DWStandaloneUmbrella::getTokenExpiry(DWStandaloneUmbrella *this)
{
  return ?getTokenExpiry@DWStandaloneUmbrella@@QEAA_KXZ(this);
}

/*
==============
DWRichPresenceService::registerPushMessageHandler
==============
*/

bool __fastcall DWRichPresenceService::registerPushMessageHandler(DWRichPresenceService *this, bdCrossPlatformPresencePushMessageHandler *pushMessageHandler)
{
  return ?registerPushMessageHandler@DWRichPresenceService@@QEAA_NPEAVbdCrossPlatformPresencePushMessageHandler@@@Z(this, pushMessageHandler);
}

/*
==============
DWRichPresenceService::subscribeToPlayers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRichPresenceService::subscribeToPlayers(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userIDs, const int numUsers, bdSubscribeToUsersPresenceResponseV3 *response)
{
  return ?subscribeToPlayers@DWRichPresenceService@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdUserAccountID@@HPEAVbdSubscribeToUsersPresenceResponseV3@@@Z(this, result, userIDs, numUsers, response);
}

/*
==============
DWClans::getClanMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::getClanMembers(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, bdClansGetGroupMembersResponse *response)
{
  return ?getClanMembers@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdClansGetGroupMembersResponse@@@Z(this, result, id, response);
}

/*
==============
DWMarketplace::init
==============
*/

bool __fastcall DWMarketplace::init(DWMarketplace *this, DWWrappers *wrapper)
{
  return ?init@DWMarketplace@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLobbyService::getMessaging
==============
*/

bdMessaging *__fastcall DWLobbyService::getMessaging(DWLobbyService *this)
{
  return ?getMessaging@DWLobbyService@@IEAAPEAVbdMessaging@@XZ(this);
}

/*
==============
DWStorageContext::getFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStorageContext::getFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData, const bdUserAccountID *ownerUID)
{
  return ?getFile@DWStorageContext@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdFileData@@AEBVbdUserAccountID@@@Z(this, result, fileName, fileData, ownerUID);
}

/*
==============
DWLobbyService::getProfiles
==============
*/

bdProfiles *__fastcall DWLobbyService::getProfiles(DWLobbyService *this)
{
  return ?getProfiles@DWLobbyService@@IEAAPEAVbdProfiles@@XZ(this);
}

/*
==============
DWPooledStorage::upload
==============
*/

bdReference<bdRemoteTask> *__fastcall DWPooledStorage::upload(DWPooledStorage *this, bdReference<bdRemoteTask> *result, const void *fileData, const unsigned int fileSize, unsigned __int16 category, const char *const fileName, const unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  return ?upload@DWPooledStorage@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBXIGQEBDIPEAVbdTag@@PEAVbdFileID@@@Z(this, result, fileData, fileSize, category, fileName, numTags, tags, fileID);
}

/*
==============
DWLobbyService::getVoteRank
==============
*/

bdVoteRank *__fastcall DWLobbyService::getVoteRank(DWLobbyService *this)
{
  return ?getVoteRank@DWLobbyService@@IEAAPEAVbdVoteRank@@XZ(this);
}

/*
==============
DWAchievementEngineClient::setFlushIntervalSeconds
==============
*/

void __fastcall DWAchievementEngineClient::setFlushIntervalSeconds(DWAchievementEngineClient *this, float flushIntervalSeconds)
{
  ?setFlushIntervalSeconds@DWAchievementEngineClient@@QEAAXM@Z(this, flushIntervalSeconds);
}

/*
==============
DWMessaging::createChatChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::createChatChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, bdChannelCreateChannelResponse *const createChannelResponse)
{
  return ?createChatChannel@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDQEAVbdChannelCreateChannelResponse@@@Z(this, result, category, createChannelResponse);
}

/*
==============
DWAsyncMatchMaking::startSearch
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::startSearch(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *params, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  return ?startSearch@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDIPEAVbdStringResult@@@Z(this, result, params, paramsLength, matchMakingSearchStatus);
}

/*
==============
DWUno::createAccount
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUno::createAccount(DWUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo, const bdUnoSubscription *subscriptions, unsigned __int16 numSubscriptions, const bdUnoTermsOfService *termsOfService, const char *locale, const char *fields, const char *source)
{
  return ?createAccount@DWUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUnoAccountInfo@@PEBVbdUnoSubscription@@GPEBVbdUnoTermsOfService@@PEBD33@Z(this, result, accountInfo, subscriptions, numSubscriptions, termsOfService, locale, fields, source);
}

/*
==============
DWAsyncMatchMaking::init
==============
*/

bool __fastcall DWAsyncMatchMaking::init(DWAsyncMatchMaking *this, DWWrappers *wrapper)
{
  return ?init@DWAsyncMatchMaking@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWClans::removeClanMember
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::removeClanMember(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, bdUserAccountID *member, bdClansRemoveGroupMemberResponse *response)
{
  return ?removeClanMember@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@PEAVbdClansRemoveGroupMemberResponse@@@Z(this, result, id, member, response);
}

/*
==============
DWLobbyService::getMatchMaking
==============
*/

bdMatchMaking *__fastcall DWLobbyService::getMatchMaking(DWLobbyService *this, const char *context)
{
  return ?getMatchMaking@DWLobbyService@@IEAAPEAVbdMatchMaking@@PEBD@Z(this, context);
}

/*
==============
DWLobbyService::getLootGen
==============
*/

bdLootGeneration *__fastcall DWLobbyService::getLootGen(DWLobbyService *this)
{
  return ?getLootGen@DWLobbyService@@IEAAPEAVbdLootGeneration@@XZ(this);
}

/*
==============
DWLobbyService::getTitleUtilities
==============
*/

bdTitleUtilities *__fastcall DWLobbyService::getTitleUtilities(DWLobbyService *this)
{
  return ?getTitleUtilities@DWLobbyService@@IEAAPEAVbdTitleUtilities@@XZ(this);
}

/*
==============
DWStats::init
==============
*/

bool __fastcall DWStats::init(DWStats *this, DWWrappers *wrapper)
{
  return ?init@DWStats@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAchievementEngine::deactivateAchievement
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::deactivateAchievement(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdDeactivateAchievementRequest *request)
{
  return ?deactivateAchievement@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdDeactivateAchievementRequest@@@Z(this, result, request);
}

/*
==============
DWTeams::leaveTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::leaveTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newOwnerID)
{
  return ?leaveTeam@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, newOwnerID);
}

/*
==============
DWObjectStore::getPublisherObjects
==============
*/

bdReference<bdRemoteTask> *__fastcall DWObjectStore::getPublisherObjects(DWObjectStore *this, bdReference<bdRemoteTask> *result, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectsResponse *response)
{
  return ?getPublisherObjects@DWObjectStore@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdObjectStoreGetPublisherObjectsRequest@@PEAVbdObjectStoreGetPublisherObjectsResponse@@@Z(this, result, request, response);
}

/*
==============
DWLobbyService::acquireAccess
==============
*/

void __fastcall DWLobbyService::acquireAccess(DWLobbyService *this)
{
  ?acquireAccess@DWLobbyService@@QEAAXXZ(this);
}

/*
==============
DWLobbyService::getAntiCheat
==============
*/

bdAntiCheat *__fastcall DWLobbyService::getAntiCheat(DWLobbyService *this)
{
  return ?getAntiCheat@DWLobbyService@@IEAAPEAVbdAntiCheat@@XZ(this);
}

/*
==============
DWTeams::getPrivateMemberProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::getPrivateMemberProfiles(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *privateMemberProfiles, const unsigned int numTeamMembers)
{
  return ?getPrivateMemberProfiles@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMemberProfile@@I@Z(this, result, teamID, privateMemberProfiles, numTeamMembers);
}

/*
==============
DWLobbyService::isReady
==============
*/

bool __fastcall DWLobbyService::isReady(DWLobbyService *this)
{
  return ?isReady@DWLobbyService@@MEBA_NXZ(this);
}

/*
==============
DWLobbyService::getStats
==============
*/

bdStats *__fastcall DWLobbyService::getStats(DWLobbyService *this)
{
  return ?getStats@DWLobbyService@@IEAAPEAVbdStats@@XZ(this);
}

/*
==============
DWStandaloneUmbrella::setControllerIndexAndEnv
==============
*/

bool __fastcall DWStandaloneUmbrella::setControllerIndexAndEnv(DWStandaloneUmbrella *this, const int controllerIndex, const bdEnvironment env)
{
  return ?setControllerIndexAndEnv@DWStandaloneUmbrella@@QEAA_NHW4bdEnvironment@@@Z(this, controllerIndex, env);
}

/*
==============
DWUno::getErrors
==============
*/

const bdSingleIdentityError *__fastcall DWUno::getErrors(DWUno *this)
{
  return ?getErrors@DWUno@@QEBAPEBUbdSingleIdentityError@@XZ(this);
}

/*
==============
DWUmbrella::pump
==============
*/

void __fastcall DWUmbrella::pump(DWUmbrella *this)
{
  ?pump@DWUmbrella@@UEAAXXZ(this);
}

/*
==============
DWMarketplace::psnProcessProduct
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::psnProcessProduct(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeTransactionResultV2 *transactionResult)
{
  return ?psnProcessProduct@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD000PEAVbdExchangeTransactionResultV2@@@Z(this, result, transactionId, npTitleID, npAuthCode, npEntitlementId, transactionResult);
}

/*
==============
DWMarketplace::startExchangeTransaction
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::startExchangeTransaction(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdStringResult *transactionId)
{
  return ?startExchangeTransaction@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, transactionId);
}

/*
==============
DWMarketplace::setBalance
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::setBalance(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned __int8 numPlayerCurrencies)
{
  return ?setBalance@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplacePlayerCurrency@@E@Z(this, result, playerCurrencies, numPlayerCurrencies);
}

/*
==============
DWLogin::getClientId
==============
*/

const char *__fastcall DWLogin::getClientId(DWLogin *this)
{
  return ?getClientId@DWLogin@@QEAAPEBDXZ(this);
}

/*
==============
DWAsyncMatchMaking::readyUpTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::readyUpTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  return ?readyUpTournament@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, tournamentID);
}

/*
==============
DWRichPresenceService::init
==============
*/

bool __fastcall DWRichPresenceService::init(DWRichPresenceService *this, DWWrappers *wrapper)
{
  return ?init@DWRichPresenceService@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAsyncMatchMaking::getMatchMakingPlayerToken
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getMatchMakingPlayerToken(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdUInt64Result *playerToken)
{
  return ?getMatchMakingPlayerToken@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdUInt64Result@@@Z(this, result, playerToken);
}

/*
==============
DWDataChannelDispatch::setupDataChannelDispatch
==============
*/

void __fastcall DWDataChannelDispatch::setupDataChannelDispatch(DWDataChannelDispatch *this)
{
  ?setupDataChannelDispatch@DWDataChannelDispatch@@QEAAXXZ(this);
}

/*
==============
DWContentStreaming::removeFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::removeFile(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot)
{
  return ?removeFile@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@G@Z(this, result, fileSlot);
}

/*
==============
DWDataChannelDispatch::getDispatchInstance
==============
*/

bdDataChannelDispatch *__fastcall DWDataChannelDispatch::getDispatchInstance(DWDataChannelDispatch *this, const char *category)
{
  return ?getDispatchInstance@DWDataChannelDispatch@@AEAAPEAVbdDataChannelDispatch@@PEBD@Z(this, category);
}

/*
==============
DWLobbyService::init
==============
*/

bool __fastcall DWLobbyService::init(DWLobbyService *this, bdLobbyEventHandler *eventHandler, DWWrappers *wrapper)
{
  return ?init@DWLobbyService@@IEAA_NPEAVbdLobbyEventHandler@@AEAVDWWrappers@@@Z(this, eventHandler, wrapper);
}

/*
==============
DWReward::claimClientAchievements
==============
*/

bdReference<bdRemoteTask> *__fastcall DWReward::claimClientAchievements(DWReward *this, bdReference<bdRemoteTask> *result, const bdUserAchievement *userAchievements, const unsigned __int16 numAchievements, const bdSessionID *sessionID)
{
  return ?claimClientAchievements@DWReward@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBVbdUserAchievement@@GVbdSessionID@@@Z(this, result, userAchievements, numAchievements, sessionID);
}

/*
==============
DWDataChannelDispatch::init
==============
*/

bool __fastcall DWDataChannelDispatch::init(DWDataChannelDispatch *this)
{
  return ?init@DWDataChannelDispatch@@IEAA_NXZ(this);
}

/*
==============
DWClans::init
==============
*/

bool __fastcall DWClans::init(DWClans *this, DWWrappers *wrapper)
{
  return ?init@DWClans@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWDataChannelDispatch::write
==============
*/

bool __fastcall DWDataChannelDispatch::write(DWDataChannelDispatch *this, const char *const category, const char *const data, unsigned int size)
{
  return ?write@DWDataChannelDispatch@@QEAA_NQEBD0I@Z(this, category, data, size);
}

/*
==============
DWLobbyService::getRedeemableCodeService
==============
*/

bdRedeemableCodeService *__fastcall DWLobbyService::getRedeemableCodeService(DWLobbyService *this)
{
  return ?getRedeemableCodeService@DWLobbyService@@IEAAPEAVbdRedeemableCodeService@@XZ(this);
}

/*
==============
DWStats::writeServerValidatedStats
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::writeServerValidatedStats(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *tokenData, unsigned int tokenSize)
{
  return ?writeServerValidatedStats@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBEI@Z(this, result, tokenData, tokenSize);
}

/*
==============
DWMatchScheduler::recordScheduledMatchEvent
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchScheduler::recordScheduledMatchEvent(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned int matchID, unsigned __int8 *eventData, unsigned int eventDataSize)
{
  return ?recordScheduledMatchEvent@DWMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IPEAEI@Z(this, result, matchID, eventData, eventDataSize);
}

/*
==============
DWTeams::setPublicProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::setPublicProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *publicProfile)
{
  return ?setPublicProfile@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamProfile@@@Z(this, result, teamID, publicProfile);
}

/*
==============
DWLobbyService::getAsyncMatchmaking
==============
*/

bdAsyncMatchMaking *__fastcall DWLobbyService::getAsyncMatchmaking(DWLobbyService *this)
{
  return ?getAsyncMatchmaking@DWLobbyService@@IEAAPEAVbdAsyncMatchMaking@@XZ(this);
}

/*
==============
DWDataChannelDispatch::getError
==============
*/

int __fastcall DWDataChannelDispatch::getError(DWDataChannelDispatch *this, const char *category)
{
  return ?getError@DWDataChannelDispatch@@QEAAHPEBD@Z(this, category);
}

/*
==============
DWMessaging::init
==============
*/

bool __fastcall DWMessaging::init(DWMessaging *this, DWWrappers *wrapper)
{
  return ?init@DWMessaging@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWClans::uploadGroupFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::uploadGroupFile(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const char *filename, unsigned __int8 *fileBuffer, const unsigned int bufferSize, bdClansUploadGroupFileResponse *response)
{
  return ?uploadGroupFile@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBDPEAEIPEAVbdClansUploadGroupFileResponse@@@Z(this, result, id, filename, fileBuffer, bufferSize, response);
}

/*
==============
DWMarketplace::deposit
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::deposit(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, unsigned __int8 numPlayerCurrencies)
{
  return ?deposit@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketplacePlayerCurrency@@E@Z(this, result, playerCurrencies, numPlayerCurrencies);
}

/*
==============
DWLobbyService::getTeams
==============
*/

bdTeams *__fastcall DWLobbyService::getTeams(DWLobbyService *this, const char *context)
{
  return ?getTeams@DWLobbyService@@IEAAPEAVbdTeams@@PEBD@Z(this, context);
}

/*
==============
DWMatchScheduler::listMatchEvents
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchScheduler::listMatchEvents(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, bdMatchEventInfo *matchEventInfos, unsigned int matchEventInfosNumber)
{
  return ?listMatchEvents@DWMatchScheduler@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdMatchEventInfo@@I@Z(this, result, matchID, matchEventInfos, matchEventInfosNumber);
}

/*
==============
DWMatchScheduler::init
==============
*/

bool __fastcall DWMatchScheduler::init(DWMatchScheduler *this, DWWrappers *wrapper)
{
  return ?init@DWMatchScheduler@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWStandaloneUmbrella::getRegion
==============
*/

const char *__fastcall DWStandaloneUmbrella::getRegion(DWStandaloneUmbrella *this)
{
  return ?getRegion@DWStandaloneUmbrella@@QEAAPEBDXZ(this);
}

/*
==============
DWGameMetrics::pump
==============
*/

void __fastcall DWGameMetrics::pump(DWGameMetrics *this)
{
  ?pump@DWGameMetrics@@UEAAXXZ(this);
}

/*
==============
DWCrossPlatformIdentity::getPlatformUserIDs
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCrossPlatformIdentity::getPlatformUserIDs(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetPlatformUserIDsRequest *request, bdGetPlatformUserIDsResponse *response)
{
  return ?getPlatformUserIDs@DWCrossPlatformIdentity@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetPlatformUserIDsRequest@@AEAVbdGetPlatformUserIDsResponse@@@Z(this, result, request, response);
}

/*
==============
DWLobbyService::getMarketplace
==============
*/

bdMarketplace *__fastcall DWLobbyService::getMarketplace(DWLobbyService *this)
{
  return ?getMarketplace@DWLobbyService@@IEAAPEAVbdMarketplace@@XZ(this);
}

/*
==============
DWStats::readStatsByEntityID
==============
*/

bdReference<bdRemoteTask> *__fastcall DWStats::readStatsByEntityID(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **includedColumns, const unsigned int numIncludedColumns)
{
  return ?readStatsByEntityID@DWStats@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KIQEAVbdStatsInfo@@QEAPEBDI@Z(this, result, leaderboardID, entityIDs, numEntityIDs, stats, includedColumns, numIncludedColumns);
}

/*
==============
DWUserLists::RemoveUsersFromList
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUserLists::RemoveUsersFromList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, const bdUserListEntity *userList, const int numUsers, bdRemoveUsersFromUserListResponse *response)
{
  return ?RemoveUsersFromList@DWUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBDPEBVbdUserListEntity@@HPEAVbdRemoveUsersFromUserListResponse@@@Z(this, result, listName, userList, numUsers, response);
}

/*
==============
DWClans::getGroupFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::getGroupFile(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const char *filename, unsigned __int8 *fileBuffer, const unsigned int bufferSize, bdClansGetGroupFileResponse *response)
{
  return ?getGroupFile@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBDPEAEIPEAVbdClansGetGroupFileResponse@@@Z(this, result, id, filename, fileBuffer, bufferSize, response);
}

/*
==============
BaseDWWrapper::isReady
==============
*/

bool __fastcall BaseDWWrapper::isReady(BaseDWWrapper *this)
{
  return ?isReady@BaseDWWrapper@@UEBA_NXZ(this);
}

/*
==============
DWMail::deleteMail
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMail::deleteMail(DWMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, const bdUserAccountID *userID)
{
  return ?deleteMail@DWMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIPEBVbdUserAccountID@@@Z(this, result, mailIDs, numMailIDs, userID);
}

/*
==============
DWLobbyService::getClans
==============
*/

bdMW4Service *__fastcall DWLobbyService::getClans(DWLobbyService *this)
{
  return ?getClans@DWLobbyService@@IEAAPEAVbdMW4Service@@XZ(this);
}

/*
==============
DWAsyncMatchMaking::ackJoinTournament
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::ackJoinTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID, bool acceptJoin)
{
  return ?ackJoinTournament@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K_N@Z(this, result, tournamentID, acceptJoin);
}

/*
==============
DWContentStreaming::uploadUserSummaryMetaData
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::uploadUserSummaryMetaData(DWContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, const void *summaryData, unsigned int summaryDataSize, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags)
{
  return ?uploadUserSummaryMetaData@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBXI1IIPEAVbdTag@@@Z(this, result, fileID, summaryData, summaryDataSize, metaData, metaDataSize, numTags, tags);
}

/*
==============
DWLogin::getResult
==============
*/

const bdLoginResult *__fastcall DWLogin::getResult(DWLogin *this)
{
  return ?getResult@DWLogin@@QEBAAEBVbdLoginResult@@XZ(this);
}

/*
==============
DWGameMetrics::counter
==============
*/

bool __fastcall DWGameMetrics::counter(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?counter@DWGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
DWGameMetrics::gauge
==============
*/

bool __fastcall DWGameMetrics::gauge(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?gauge@DWGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
DWLobbyService::registerPushMessageHandler
==============
*/

bool __fastcall DWLobbyService::registerPushMessageHandler(DWLobbyService *this, bdPushMessageHandler *handler)
{
  return ?registerPushMessageHandler@DWLobbyService@@QEAA_NPEAVbdPushMessageHandler@@@Z(this, handler);
}

/*
==============
DWStorageContext::init
==============
*/

bool __fastcall DWStorageContext::init(DWStorageContext *this, DWWrappers *wrapper)
{
  return ?init@DWStorageContext@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWAsyncMatchMaking::startMatchMaking
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::startMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, const char *startMatchMakingParams, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  return ?startMatchMaking@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEBDIPEAVbdStringResult@@@Z(this, result, mmID, startMatchMakingParams, paramsLength, matchMakingSearchStatus);
}

/*
==============
DWUmbrella::init
==============
*/

bool __fastcall DWUmbrella::init(DWUmbrella *this, DWWrappers *wrapper)
{
  return ?init@DWUmbrella@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWMatchMaking::getPerformanceValues
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::getPerformanceValues(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, const unsigned int gameType, bdStoredPerformanceValue *results)
{
  return ?getPerformanceValues@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIIQEAVbdStoredPerformanceValue@@@Z(this, result, entityIDs, numEntityIDs, gameType, results);
}

/*
==============
DWLobbyService::getObjectStore
==============
*/

bdObjectStore *__fastcall DWLobbyService::getObjectStore(DWLobbyService *this)
{
  return ?getObjectStore@DWLobbyService@@IEAAPEAVbdObjectStore@@XZ(this);
}

/*
==============
DWStorage::getContext
==============
*/

DWStorageContext *__fastcall DWStorage::getContext(DWStorage *this, const char *context)
{
  return ?getContext@DWStorage@@QEAAAEAVDWStorageContext@@PEBD@Z(this, context);
}

/*
==============
DWAchievementEngine::activateAchievement
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::activateAchievement(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdActivateAchievementRequest *request)
{
  return ?activateAchievement@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdActivateAchievementRequest@@@Z(this, result, request);
}

/*
==============
DWLobbyService::getStatus
==============
*/

DWLobbyService::LobbyStatus __fastcall DWLobbyService::getStatus(DWLobbyService *this)
{
  return ?getStatus@DWLobbyService@@QEBA?AW4LobbyStatus@1@XZ(this);
}

/*
==============
DWRegulations::getUserRegulationPreference
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRegulations::getUserRegulationPreference(DWRegulations *this, bdReference<bdRemoteTask> *result, const bdGetUserRegulationPreferenceRequest *request, bdGetUserRegulationPreferenceResponse *response)
{
  return ?getUserRegulationPreference@DWRegulations@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetUserRegulationPreferenceRequest@@AEAVbdGetUserRegulationPreferenceResponse@@@Z(this, result, request, response);
}

/*
==============
DWFriends::registerPushMessageHandler
==============
*/

bool __fastcall DWFriends::registerPushMessageHandler(DWFriends *this, bdCrossPlatformFriendsPushMessageHandler *handler)
{
  return ?registerPushMessageHandler@DWFriends@@QEAA_NPEAVbdCrossPlatformFriendsPushMessageHandler@@@Z(this, handler);
}

/*
==============
DWContentStreaming::pump
==============
*/

void __fastcall DWContentStreaming::pump(DWContentStreaming *this)
{
  ?pump@DWContentStreaming@@UEAAXXZ(this);
}

/*
==============
DWContentStreaming::downloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::downloadPublisherFile(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadPublisherFile@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAXIPEAVbdFileMetaData@@II@Z(this, result, fileID, fileData, fileDataSize, fileMetaData, startByte, endByte);
}

/*
==============
DWStandaloneUmbrella::getClientId
==============
*/

const char *__fastcall DWStandaloneUmbrella::getClientId(DWStandaloneUmbrella *this, const int controllerIndex)
{
  return ?getClientId@DWStandaloneUmbrella@@QEAAPEBDH@Z(this, controllerIndex);
}

/*
==============
DWAchievementEngineClient::init
==============
*/

bool __fastcall DWAchievementEngineClient::init(DWAchievementEngineClient *this, DWWrappers *wrapper)
{
  return ?init@DWAchievementEngineClient@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWABTesting::enroll
==============
*/

bdReference<bdRemoteTask> *__fastcall DWABTesting::enroll(DWABTesting *this, bdReference<bdRemoteTask> *result, bdABTestingEnrollRequest *request, bdABTestingEnrollResponse *response)
{
  return ?enroll@DWABTesting@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEAVbdABTestingEnrollRequest@@AEAVbdABTestingEnrollResponse@@@Z(this, result, request, response);
}

/*
==============
DWMarketplace::purchaseSkusInfluencer
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketplace::purchaseSkusInfluencer(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, bdMarketplacePurchaseSkusResultV4 *a7, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, const unsigned __int8 numMetadataEntries, const bdMarketplaceMetadata *metadata, const unsigned int customSourceType, const bool ignoreEntitlements)
{
  return ?purchaseSkusInfluencer@DWMarketplace@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDVbdUserAccountID@@EQEBVbdMarketplacePurchaseSkusSkuOrderV2@@PEAVbdMarketplacePurchaseSkusResultV4@@EQEBVbdMarketplacePurchaseSkusCouponOrderV2@@EQEBVbdMarketplaceMetadata@@I_N@Z(this, result, clientTransactionId, buyer, numSkuOrders, skuOrders, a7, numCouponOrders, couponOrders, numMetadataEntries, metadata, customSourceType, ignoreEntitlements);
}

/*
==============
DWTeams::setPrivateMemberProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::setPrivateMemberProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *teamMemberProfile)
{
  return ?setPrivateMemberProfile@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamMemberProfile@@@Z(this, result, teamID, teamMemberProfile);
}

/*
==============
DWPlatformInfo::init
==============
*/

bool __fastcall DWPlatformInfo::init(DWPlatformInfo *this)
{
  return ?init@DWPlatformInfo@@IEAA_NXZ(this);
}

/*
==============
DWMail::getMail
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMail::getMail(DWMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, bdMailBody *mails, const bool deleteOnRead, const bdUserAccountID *userID)
{
  return ?getMail@DWMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIQEAVbdMailBody@@_NPEBVbdUserAccountID@@@Z(this, result, mailIDs, numMailIDs, mails, deleteOnRead, userID);
}

/*
==============
DWStandaloneUmbrella::OnUmbrellaTokenAcquired
==============
*/

void __fastcall DWStandaloneUmbrella::OnUmbrellaTokenAcquired(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnUmbrellaTokenAcquired@DWStandaloneUmbrella@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
DWLobbyService::getAchievementsEngineClientService
==============
*/

bdAchievementClient *__fastcall DWLobbyService::getAchievementsEngineClientService(DWLobbyService *this)
{
  return ?getAchievementsEngineClientService@DWLobbyService@@IEAAPEAVbdAchievementClient@@XZ(this);
}

/*
==============
DWMatchMaking::findSessionsTwoPass
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::findSessionsTwoPass(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int primaryQueryID, const unsigned int secondaryQueryID, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  return ?findSessionsTwoPass@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIIPEAVbdSessionParams@@QEAVbdMatchMakingInfo@@@Z(this, result, primaryQueryID, secondaryQueryID, maxNumResults, sessionParams, results);
}

/*
==============
DWPooledStorage::getLastHTTPError
==============
*/

int __fastcall DWPooledStorage::getLastHTTPError(DWPooledStorage *this)
{
  return ?getLastHTTPError@DWPooledStorage@@QEBAHXZ(this);
}

/*
==============
DWUserLists::init
==============
*/

bool __fastcall DWUserLists::init(DWUserLists *this, DWWrappers *wrapper)
{
  return ?init@DWUserLists@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWUmbrella::getNumErrors
==============
*/

int __fastcall DWUmbrella::getNumErrors(DWUmbrella *this)
{
  return ?getNumErrors@DWUmbrella@@QEAAHXZ(this);
}

/*
==============
DWContentStreaming::abortHTTPOperation
==============
*/

void __fastcall DWContentStreaming::abortHTTPOperation(DWContentStreaming *this, bool joinThread)
{
  ?abortHTTPOperation@DWContentStreaming@@QEAAX_N@Z(this, joinThread);
}

/*
==============
DWClans::updateMemberRole
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::updateMemberRole(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *member, const unsigned __int16 role, bdClansAddOrUpdateGroupMemberResponse *response)
{
  return ?updateMemberRole@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@GPEAVbdClansAddOrUpdateGroupMemberResponse@@@Z(this, result, id, member, role, response);
}

/*
==============
DWDataChannelDispatch::getStatus
==============
*/

bdDataChannelDispatch::bdDispatchStatus __fastcall DWDataChannelDispatch::getStatus(DWDataChannelDispatch *this, const char *category)
{
  return ?getStatus@DWDataChannelDispatch@@QEAA?AW4bdDispatchStatus@bdDataChannelDispatch@@PEBD@Z(this, category);
}

/*
==============
DWTeams::createTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::createTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoV2 *const teamInfo)
{
  return ?createTeam@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfoV2@@@Z(this, result, teamName, teamInfo);
}

/*
==============
DWMarketingComms::markMessagesRead
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMarketingComms::markMessagesRead(DWMarketingComms *this, bdReference<bdRemoteTask> *result, bdMarketingMessage *messages, unsigned int locationMessagesCount)
{
  return ?markMessagesRead@DWMarketingComms@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMarketingMessage@@I@Z(this, result, messages, locationMessagesCount);
}

/*
==============
DWAsyncMatchMaking::getTournamentState
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::getTournamentState(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *tournamentState)
{
  return ?getTournamentState@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdStringResult@@@Z(this, result, tournamentState);
}

/*
==============
DWGameMetrics::setupGameMetrics
==============
*/

bool __fastcall DWGameMetrics::setupGameMetrics(DWGameMetrics *this)
{
  return ?setupGameMetrics@DWGameMetrics@@AEAA_NXZ(this);
}

/*
==============
DWDataChannelDispatch::checkForAuthToken
==============
*/

void __fastcall DWDataChannelDispatch::checkForAuthToken(DWDataChannelDispatch *this)
{
  ?checkForAuthToken@DWDataChannelDispatch@@QEAAXXZ(this);
}

/*
==============
DWLobbyService::disconnect
==============
*/

void __fastcall DWLobbyService::disconnect(DWLobbyService *this)
{
  ?disconnect@DWLobbyService@@QEAAXXZ(this);
}

/*
==============
DWContentStreaming::checkProgress
==============
*/

void __fastcall DWContentStreaming::checkProgress(DWContentStreaming *this, unsigned int *bytesTransfered, float *dataRate)
{
  ?checkProgress@DWContentStreaming@@QEAAXAEAIAEAM@Z(this, bytesTransfered, dataRate);
}

/*
==============
DWPublisherVariables::subscribeToGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall DWPublisherVariables::subscribeToGroup(DWPublisherVariables *this, bdReference<bdRemoteTask> *result, unsigned int group)
{
  return ?subscribeToGroup@DWPublisherVariables@@QEAA?AV?$bdReference@VbdRemoteTask@@@@I@Z(this, result, group);
}

/*
==============
DWLobbyService::unregisterPushMessageHandler
==============
*/

bool __fastcall DWLobbyService::unregisterPushMessageHandler(DWLobbyService *this, bdPushMessageHandler *handler)
{
  return ?unregisterPushMessageHandler@DWLobbyService@@QEAA_NPEAVbdPushMessageHandler@@@Z(this, handler);
}

/*
==============
DWUno::pump
==============
*/

void __fastcall DWUno::pump(DWUno *this)
{
  ?pump@DWUno@@UEAAXXZ(this);
}

/*
==============
DWContentStreaming::listAllPublisherFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::listAllPublisherFiles(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileMetaData, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  return ?listAllPublisherFiles@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IGQEAVbdFileMetaData@@GGPEBD@Z(this, result, startDate, category, fileMetaData, maxNumResults, offset, fileName);
}

/*
==============
DWUno::createPreRegistration
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUno::createPreRegistration(DWUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaToken, const bdUmbrellaProviderAccount *umbrellaProviderAccount, const char *email, const char *country, const char *dateOfBirth, const char *locale)
{
  return ?createPreRegistration@DWUno@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBVbdUmbrellaAccessInfo@@PEBVbdUmbrellaProviderAccount@@PEBD222@Z(this, result, umbrellaToken, umbrellaProviderAccount, email, country, dateOfBirth, locale);
}

/*
==============
DWAsyncMatchMaking::lobbyDisbanded
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAsyncMatchMaking::lobbyDisbanded(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  return ?lobbyDisbanded@DWAsyncMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, lobbyID);
}

/*
==============
DWMessaging::getNotifications
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::getNotifications(DWMessaging *this, bdReference<bdRemoteTask> *result, bdNotification *notifications, const unsigned int startIndex, const unsigned int numNotifications)
{
  return ?getNotifications@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdNotification@@II@Z(this, result, notifications, startIndex, numNotifications);
}

/*
==============
DWRichPresenceService::unregisterPushMessageHandler
==============
*/

bool __fastcall DWRichPresenceService::unregisterPushMessageHandler(DWRichPresenceService *this, bdCrossPlatformPresencePushMessageHandler *pushMessageHandler)
{
  return ?unregisterPushMessageHandler@DWRichPresenceService@@QEAA_NPEAVbdCrossPlatformPresencePushMessageHandler@@@Z(this, pushMessageHandler);
}

/*
==============
DWAchievementEngine::getAchievementDefinitions
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::getAchievementDefinitions(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetAchievementDefinitionsRequest *request, bdGetAchievementDefinitionsResponse *response)
{
  return ?getAchievementDefinitions@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetAchievementDefinitionsRequest@@PEAVbdGetAchievementDefinitionsResponse@@@Z(this, result, request, response);
}

/*
==============
DWRegulations::init
==============
*/

bool __fastcall DWRegulations::init(DWRegulations *this, DWWrappers *wrapper)
{
  return ?init@DWRegulations@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWPublisherVariables::getPublisherVariable
==============
*/

bool __fastcall DWPublisherVariables::getPublisherVariable(DWPublisherVariables *this, const char *const nameSpace, const char *const name, char *const value, int size)
{
  return ?getPublisherVariable@DWPublisherVariables@@QEAA_NQEBD0QEADH@Z(this, nameSpace, name, value, size);
}

/*
==============
DWTitleUtilities::init
==============
*/

bool __fastcall DWTitleUtilities::init(DWTitleUtilities *this, DWWrappers *wrapper)
{
  return ?init@DWTitleUtilities@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWMatchMaking::findSessionFromID
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::findSessionFromID(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  return ?findSessionFromID@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@QEAVbdMatchMakingInfo@@@Z(this, result, sessionID, sessionInfo);
}

/*
==============
DWMail::getMailInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMail::getMailInfo(DWMail *this, bdReference<bdRemoteTask> *result, bdMailInfo *mailInfos, const unsigned int startIndex, const unsigned int numMails, const bool newestFirst, const bdUserAccountID *userID)
{
  return ?getMailInfo@DWMail@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdMailInfo@@II_NPEBVbdUserAccountID@@@Z(this, result, mailInfos, startIndex, numMails, newestFirst, userID);
}

/*
==============
DWLobbyService::connect
==============
*/

bool __fastcall DWLobbyService::connect(DWLobbyService *this, bdAddr *lobbyServiceAddr, const bdAuthInfo *authInfo, const bool useEncryption)
{
  return ?connect@DWLobbyService@@QEAA_NVbdAddr@@PEBVbdAuthInfo@@_N@Z(this, lobbyServiceAddr, authInfo, useEncryption);
}

/*
==============
DWGameMetrics::timing
==============
*/

bool __fastcall DWGameMetrics::timing(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  return ?timing@DWGameMetrics@@QEAA_N_KQEBDN@Z(this, timestamp, name, value);
}

/*
==============
DWContentStreaming::downloadPublisherFile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::downloadPublisherFile(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?downloadPublisherFile@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, fileID, downloadHandler, fileMetaData, startByte, endByte);
}

/*
==============
DWLobbyService::getMail
==============
*/

bdMail *__fastcall DWLobbyService::getMail(DWLobbyService *this, const char *context)
{
  return ?getMail@DWLobbyService@@IEAAPEAVbdMail@@PEBD@Z(this, context);
}

/*
==============
DWContentStreaming::getFileMetaDataByID
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::getFileMetaDataByID(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int numFileIDs, const unsigned __int64 *fileIDs, bdFileMetaData *fileDescriptor)
{
  return ?getFileMetaDataByID@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IQEB_KQEAVbdFileMetaData@@@Z(this, result, numFileIDs, fileIDs, fileDescriptor);
}

/*
==============
DWMLG::init
==============
*/

bool __fastcall DWMLG::init(DWMLG *this, DWWrappers *wrapper)
{
  return ?init@DWMLG@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWPooledStorage::checkProgress
==============
*/

void __fastcall DWPooledStorage::checkProgress(DWPooledStorage *this, unsigned int *bytesTransfered, float *dataRate)
{
  ?checkProgress@DWPooledStorage@@QEAAXAEAIAEAM@Z(this, bytesTransfered, dataRate);
}

/*
==============
DWUserLists::GetUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall DWUserLists::GetUserList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, const char *pageToken, bdGetUserListResponse *response)
{
  return ?GetUserList@DWUserLists@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0PEAVbdGetUserListResponse@@@Z(this, result, listName, pageToken, response);
}

/*
==============
DWMatchMaking::deleteSession
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::deleteSession(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID)
{
  return ?deleteSession@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSessionID@@@Z(this, result, sessionID);
}

/*
==============
DWLogin::resume
==============
*/

void __fastcall DWLogin::resume(DWLogin *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  ?resume@DWLogin@@QEAAXW4bdLoginResumeFlow@@VbdLoginResumeConfig@@@Z(this, resumeFlow, resumeConfig);
}

/*
==============
DWLobbyService::getDML
==============
*/

bdDML *__fastcall DWLobbyService::getDML(DWLobbyService *this)
{
  return ?getDML@DWLobbyService@@IEAAPEAVbdDML@@XZ(this);
}

/*
==============
DWMessaging::whisperToChannelMember
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::whisperToChannelMember(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  return ?whisperToChannelMember@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_K1QEBXII@Z(this, result, category, channelID, userID, message, messageSize, messageType);
}

/*
==============
DWMessaging::subscribeToChannel
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMessaging::subscribeToChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID)
{
  return ?subscribeToChannel@DWMessaging@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD_K@Z(this, result, category, channelID);
}

/*
==============
DWCounter::init
==============
*/

bool __fastcall DWCounter::init(DWCounter *this, DWWrappers *wrapper)
{
  return ?init@DWCounter@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWContentStreaming::download
==============
*/

bdReference<bdRemoteTask> *__fastcall DWContentStreaming::download(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  return ?download@DWContentStreaming@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdDownloadInterceptor@@PEAVbdFileMetaData@@II@Z(this, result, fileID, downloadHandler, fileMetaData, startByte, endByte);
}

/*
==============
DWAchievementEngine::init
==============
*/

bool __fastcall DWAchievementEngine::init(DWAchievementEngine *this, DWWrappers *wrapper)
{
  return ?init@DWAchievementEngine@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLobbyService::getCounter
==============
*/

bdCounter *__fastcall DWLobbyService::getCounter(DWLobbyService *this)
{
  return ?getCounter@DWLobbyService@@IEAAPEAVbdCounter@@XZ(this);
}

/*
==============
DWTeams::setPrivateProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::setPrivateProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *privateProfile)
{
  return ?setPrivateProfile@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamProfile@@@Z(this, result, teamID, privateProfile);
}

/*
==============
DWLogin::getTitleId
==============
*/

unsigned int __fastcall DWLogin::getTitleId(DWLogin *this)
{
  return ?getTitleId@DWLogin@@QEAAIXZ(this);
}

/*
==============
DWRegulations::setUserRegulationPreference
==============
*/

bdReference<bdRemoteTask> *__fastcall DWRegulations::setUserRegulationPreference(DWRegulations *this, bdReference<bdRemoteTask> *result, const bdSetUserRegulationPreferenceRequest *request, bdSetUserRegulationPreferenceResponse *response)
{
  return ?setUserRegulationPreference@DWRegulations@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdSetUserRegulationPreferenceRequest@@AEAVbdSetUserRegulationPreferenceResponse@@@Z(this, result, request, response);
}

/*
==============
DWCounter::incrementCounters
==============
*/

bdReference<bdRemoteTask> *__fastcall DWCounter::incrementCounters(DWCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *const counterIncrements, const unsigned int numEntries)
{
  return ?incrementCounters@DWCounter@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdCounterValue@@I@Z(this, result, counterIncrements, numEntries);
}

/*
==============
DWPublisherVariables::retrievePublisherVariables
==============
*/

bdReference<bdRemoteTask> *__fastcall DWPublisherVariables::retrievePublisherVariables(DWPublisherVariables *this, bdReference<bdRemoteTask> *result, const char *const nameSpace)
{
  return ?retrievePublisherVariables@DWPublisherVariables@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBD@Z(this, result, nameSpace);
}

/*
==============
DWClans::createClan
==============
*/

bdReference<bdRemoteTask> *__fastcall DWClans::createClan(DWClans *this, bdReference<bdRemoteTask> *result, const char *name, const char *clanTag, const bdUserAccountID *owner, bdClansGroupInfo *response)
{
  return ?createClan@DWClans@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEBD0VbdUserAccountID@@PEAVbdClansGroupInfo@@@Z(this, result, name, clanTag, owner, response);
}

/*
==============
DWAchievementEngine::getUserState
==============
*/

bdReference<bdRemoteTask> *__fastcall DWAchievementEngine::getUserState(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetUserStateRequest *request, bdGetUserStateResponse *response)
{
  return ?getUserState@DWAchievementEngine@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdGetUserStateRequest@@PEAVbdGetUserStateResponse@@@Z(this, result, request, response);
}

/*
==============
DWMatchMaking::createSession
==============
*/

bdReference<bdRemoteTask> *__fastcall DWMatchMaking::createSession(DWMatchMaking *this, bdReference<bdRemoteTask> *result, bdMatchMakingInfo *sessionParams, bdSessionID *const sessionID)
{
  return ?createSession@DWMatchMaking@@QEAA?AV?$bdReference@VbdRemoteTask@@@@PEAVbdMatchMakingInfo@@QEAVbdSessionID@@@Z(this, result, sessionParams, sessionID);
}

/*
==============
DWTeams::addApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall DWTeams::addApplication(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  return ?addApplication@DWTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, teamID);
}

/*
==============
DWABTesting::init
==============
*/

bool __fastcall DWABTesting::init(DWABTesting *this, DWWrappers *wrapper)
{
  return ?init@DWABTesting@@IEAA_NAEAVDWWrappers@@@Z(this, wrapper);
}

/*
==============
DWLogin::isPending
==============
*/

bool __fastcall DWLogin::isPending(DWLogin *this)
{
  return ?isPending@DWLogin@@QEBA_NXZ(this);
}

/*
==============
DWUserLists::AddUsersToList
==============
*/
bdReference<bdRemoteTask> *DWUserLists::AddUsersToList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, const bdUserListEntity *userList, const int numUsers, const bool trim, const int listMaxSize, bdUpdateUsersInUserListResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformUserLists *UserLists; 
  const bdReference<bdRemoteTask> *updated; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  bdUpdateUsersInUserListRequest request; 

  v17 = -2i64;
  v18 = result;
  result->m_ptr = NULL;
  if ( !listName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5985, ASSERT_TYPE_ASSERT, "(listName)", (const char *)&queryFormat, "listName", 1) )
    __debugbreak();
  if ( !userList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5986, ASSERT_TYPE_ASSERT, "(userList)", (const char *)&queryFormat, "userList") )
    __debugbreak();
  if ( numUsers <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5987, ASSERT_TYPE_ASSERT, "(numUsers > 0)", (const char *)&queryFormat, "numUsers > 0") )
    __debugbreak();
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService) )
  {
    bdUpdateUsersInUserListRequest::bdUpdateUsersInUserListRequest(&request);
    bdUpdateUsersInUserListRequest::setContext(&request, "cod-shared");
    bdUpdateUsersInUserListRequest::setListName(&request, listName);
    if ( trim )
    {
      bdUpdateUsersInUserListRequest::setTrimLength(&request, listMaxSize);
      bdUpdateUsersInUserListRequest::setTrimOrder(&request, DESCENDING);
    }
    else
    {
      bdUpdateUsersInUserListRequest::setTrimLength(&request, 0);
    }
    bdUpdateUsersInUserListRequest::setUsers(&request, numUsers, userList);
    UserLists = DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService);
    updated = bdCrossPlatformUserLists::updateUsersInUserList(UserLists, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, updated);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    `eh vector destructor iterator'(&request.m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>(&request.m_listName);
    bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&request.m_context);
    bdRESTRequest::~bdRESTRequest(&request);
  }
  return result;
}

/*
==============
DWUserLists::CreateUserList
==============
*/
bdReference<bdRemoteTask> *DWUserLists::CreateUserList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, bdCreateUserListResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformUserLists *UserLists; 
  const bdReference<bdRemoteTask> *v10; 
  unsigned __int32 v11; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdCreateUserListRequest request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  if ( !listName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5943, ASSERT_TYPE_ASSERT, "(listName)", (const char *)&queryFormat, "listName", 1) )
    __debugbreak();
  if ( !response && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5944, ASSERT_TYPE_ASSERT, "(response)", (const char *)&queryFormat, "response") )
    __debugbreak();
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService) )
  {
    bdCreateUserListRequest::bdCreateUserListRequest(&request);
    bdCreateUserListRequest::setContext(&request, "cod-shared");
    bdCreateUserListRequest::setListName(&request, listName);
    UserLists = DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService);
    v10 = bdCrossPlatformUserLists::createUserList(UserLists, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v10);
    if ( resulta.m_ptr )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v11 == 1 )
      {
        if ( resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v11);
      }
    }
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>(&request.m_listName);
    bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&request.m_context);
    bdRESTRequest::~bdRESTRequest(&request);
  }
  return result;
}

/*
==============
GetGluttonEndpoint
==============
*/
const char *GetGluttonEndpoint(const bdEnvironment environment, const int version)
{
  char *v2; 
  int v3; 
  __int32 v4; 
  __int32 v6; 

  v2 = (char *)&queryFormat.fmt + 3;
  v3 = version - 1;
  if ( !v3 )
  {
    if ( environment )
    {
      v6 = environment - 1;
      if ( !v6 )
        return glutton_ingestion_point_v1_cert;
      if ( v6 == 1 )
        return glutton_ingestion_point_v1_live;
    }
    return glutton_ingestion_point_v1_dev;
  }
  if ( v3 != 1 )
    return v2;
  if ( environment == BD_ENVIRONMENT_DEV )
    return glutton_ingestion_point_v2_dev;
  v4 = environment - 1;
  if ( !v4 )
    return glutton_ingestion_point_v2_cert;
  if ( v4 != 1 )
    return glutton_ingestion_point_v2_dev;
  return glutton_ingestion_point_v2_live;
}

/*
==============
DWUserLists::GetUserList
==============
*/
bdReference<bdRemoteTask> *DWUserLists::GetUserList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, const char *pageToken, bdGetUserListResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformUserLists *UserLists; 
  const bdReference<bdRemoteTask> *UserList; 
  _BYTE *v12; 
  unsigned __int64 v13; 
  _BYTE *v14; 
  unsigned __int64 v15; 
  _BYTE *v16; 
  unsigned __int64 v17; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v20; 
  bdReference<bdRemoteTask> *v21; 
  bdGetUserListRequest request; 

  v20 = -2i64;
  v21 = result;
  result->m_ptr = NULL;
  if ( !listName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5963, ASSERT_TYPE_ASSERT, "(listName)", (const char *)&queryFormat, "listName", 1) )
    __debugbreak();
  if ( !pageToken && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5964, ASSERT_TYPE_ASSERT, "(pageToken)", (const char *)&queryFormat, "pageToken") )
    __debugbreak();
  if ( !response && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5965, ASSERT_TYPE_ASSERT, "(response)", (const char *)&queryFormat, "response") )
    __debugbreak();
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService) )
  {
    bdGetUserListRequest::bdGetUserListRequest(&request);
    bdGetUserListRequest::setContext(&request, "cod-shared");
    bdGetUserListRequest::setListName(&request, listName);
    bdGetUserListRequest::setPageToken(&request, pageToken);
    UserLists = DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService);
    UserList = bdCrossPlatformUserLists::getUserList(UserLists, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, UserList);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    v12 = memchr_0(&request.m_pageToken, 0, 0x401ui64);
    if ( v12 )
      v13 = v12 - (_BYTE *)&request.m_pageToken;
    else
      v13 = 1025i64;
    bdHandleAssert(v13 < 0x401, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    v14 = memchr_0(&request.m_listName, 0, 0x65ui64);
    if ( v14 )
      v15 = v14 - (_BYTE *)&request.m_listName;
    else
      v15 = 101i64;
    bdHandleAssert(v15 < 0x65, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    v16 = memchr_0(&request.m_context, 0, 0x11ui64);
    if ( v16 )
      v17 = v16 - (_BYTE *)&request.m_context;
    else
      v17 = 17i64;
    bdHandleAssert(v17 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    bdRESTRequest::~bdRESTRequest(&request);
  }
  return result;
}

/*
==============
DWStandaloneUmbrella::OnUmbrellaTokenAcquired
==============
*/
void DWStandaloneUmbrella::OnUmbrellaTokenAcquired(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ;
}

/*
==============
DWUserLists::RemoveUsersFromList
==============
*/
bdReference<bdRemoteTask> *DWUserLists::RemoveUsersFromList(DWUserLists *this, bdReference<bdRemoteTask> *result, const char *listName, const bdUserListEntity *userList, const int numUsers, bdRemoveUsersFromUserListResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformUserLists *UserLists; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  bdRemoveUsersFromUserListRequest request; 

  v15 = -2i64;
  v16 = result;
  result->m_ptr = NULL;
  if ( !listName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6016, ASSERT_TYPE_ASSERT, "(listName)", (const char *)&queryFormat, "listName", 1) )
    __debugbreak();
  if ( !userList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6017, ASSERT_TYPE_ASSERT, "(userList)", (const char *)&queryFormat, "userList") )
    __debugbreak();
  if ( numUsers <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6018, ASSERT_TYPE_ASSERT, "(numUsers > 0)", (const char *)&queryFormat, "numUsers > 0") )
    __debugbreak();
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService) )
  {
    bdRemoveUsersFromUserListRequest::bdRemoveUsersFromUserListRequest(&request);
    bdRemoveUsersFromUserListRequest::setContext(&request, "cod-shared");
    bdRemoveUsersFromUserListRequest::setListName(&request, listName);
    bdRemoveUsersFromUserListRequest::setUsers(&request, numUsers, userList);
    UserLists = DWLobbyService::getUserLists(&this->m_owningWrapper->m_lobbyService);
    v12 = bdCrossPlatformUserLists::removeUsersFromUserList(UserLists, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v12);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    `eh vector destructor iterator'(&request.m_users, 0xF8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdUserListEntity::~bdUserListEntity);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>(&request.m_listName);
    bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&request.m_context);
    bdRESTRequest::~bdRESTRequest(&request);
  }
  return result;
}

/*
==============
DWLogin::abort
==============
*/
void DWLogin::abort(DWLogin *this)
{
  bdLogin *m_login; 

  m_login = this->m_login;
  if ( m_login )
    bdLogin::abort(m_login);
}

/*
==============
DWContentStreaming::abortHTTPOperation
==============
*/
void DWContentStreaming::abortHTTPOperation(DWContentStreaming *this, bool joinThread)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
    {
      ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::abortHTTPOperation(ContentStreaming, joinThread);
    }
  }
}

/*
==============
DWPooledStorage::abortHTTPOperation
==============
*/
void DWPooledStorage::abortHTTPOperation(DWPooledStorage *this, bool joinThread)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
    {
      PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::abortHTTPOperation(PooledStorage, joinThread);
    }
  }
}

/*
==============
DWTeams::acceptApplication
==============
*/
bdReference<bdRemoteTask> *DWTeams::acceptApplication(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = applicantID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, applicantID);
        v11 = bdTeams::acceptApplication(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return result;
}

/*
==============
DWClans::acceptInvite
==============
*/
bdReference<bdRemoteTask> *DWClans::acceptInvite(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *member, bdClansAddOrUpdateGroupMemberResponse *response)
{
  DWWrappers *m_owningWrapper; 
  const bdClansGroupIdentifier *v10; 
  const bdUserAccountID *v11; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *updated; 
  bdReference<bdRemoteTask> resulta; 
  int v16; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  bdClansGroupIdentifier v19; 
  bdUserAccountID v20; 
  const bdUserAccountID *v21; 
  bdClansAddOrUpdateGroupMemberRequest request; 

  v17 = -2i64;
  v18 = result;
  v21 = member;
  result->m_ptr = NULL;
  v16 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v19, 1u, id, 0, 0i64);
    bdClansAddOrUpdateGroupMemberRequest::bdClansAddOrUpdateGroupMemberRequest(&request, v10);
    bdUserAccountID::bdUserAccountID(&v20, member);
    bdClansAddOrUpdateGroupMemberRequest::setUser(&request, v11);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    updated = bdMW4Service::addOrUpdateGroupMember(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, updated);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_user.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_user.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_user.m_value._bytes_48);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap4C4[4]);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)member->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)member->gap38);
  return result;
}

/*
==============
DWTeams::acceptMembership
==============
*/
bdReference<bdRemoteTask> *DWTeams::acceptMembership(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v8; 
  const bdReference<bdRemoteTask> *v9; 
  bdUserAccountID v11; 
  bdReference<bdRemoteTask> v12; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v11);
        v9 = bdTeams::acceptMembership(Teams, &v12, teamID, v8);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( v12.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v12.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::ackExpectGame
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::ackExpectGame(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAsyncMatchMaking::ackExpectGame(AsyncMatchmaking, &resulta, lobbyID);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::ackJoinTournament
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::ackJoinTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID, bool acceptJoin)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v10 = bdAsyncMatchMaking::ackJoinTournament(AsyncMatchmaking, &resulta, tournamentID, acceptJoin);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::acquireAccess
==============
*/
void DWLobbyService::acquireAccess(DWLobbyService *this)
{
  volatile int *p_m_ownerThread; 
  signed __int32 CurrentThreadContext; 
  signed __int32 v3; 

  p_m_ownerThread = &this->m_ownerThread;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)p_m_ownerThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_ownerThread) )
    __debugbreak();
  v3 = _InterlockedCompareExchange(p_m_ownerThread, CurrentThreadContext, 0);
  if ( v3 && v3 != CurrentThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 174, ASSERT_TYPE_ASSERT, "(owningContext == 0 || owningContext == threadContext)", (const char *)&queryFormat, "owningContext == 0 || owningContext == threadContext") )
    __debugbreak();
}

/*
==============
DWAchievementEngine::activateAchievement
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::activateAchievement(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdActivateAchievementRequest *request)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAchievementsEngineService::activateAchievement(AchievementsEngineService, &resulta, request);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::addApplication
==============
*/
bdReference<bdRemoteTask> *DWTeams::addApplication(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v8; 
  const bdReference<bdRemoteTask> *v9; 
  bdUserAccountID v11; 
  bdReference<bdRemoteTask> v12; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v11);
        v9 = bdTeams::addApplication(Teams, &v12, teamID, 0i64, v8, NULL, 0);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( v12.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v12.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWFriends::addFriends
==============
*/
bdReference<bdRemoteTask> *DWFriends::addFriends(DWFriends *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userIds, const int numUsers, bdSendFriendInvitationsResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformFriends *Friends; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  bdSendFriendInvitationsRequest request; 

  v15 = -2i64;
  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService) )
  {
    bdSendFriendInvitationsRequest::bdSendFriendInvitationsRequest(&request);
    bdSendFriendInvitationsRequest::setUsers(&request, numUsers, userIds);
    bdSendFriendInvitationsRequest::setContext(&request, "cod-shared");
    Friends = DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService);
    v11 = bdCrossPlatformFriends::invite(Friends, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v11);
    if ( resulta.m_ptr )
    {
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v12 == 1 )
      {
        if ( resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v12);
      }
    }
    bdSendFriendInvitationsRequest::~bdSendFriendInvitationsRequest(&request);
  }
  return result;
}

/*
==============
DWServerInventory::allocateDedicatedServer
==============
*/
bdReference<bdRemoteTask> *DWServerInventory::allocateDedicatedServer(DWServerInventory *this, bdReference<bdRemoteTask> *result, const char *buildName, bdDataCenterPreferences *dataCenterPreferences, bdAllocateDedicatedServerResponse *resulta, const char *context)
{
  DWWrappers *m_owningWrapper; 
  bdServerInventory *ServerInventory; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> v14; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getServerInventory(&m_owningWrapper->m_lobbyService) )
      {
        ServerInventory = DWLobbyService::getServerInventory(&this->m_owningWrapper->m_lobbyService);
        v12 = bdServerInventory::allocateDedicatedServer(ServerInventory, &v14, buildName, dataCenterPreferences, resulta, context);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( v14.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAntiCheat::answerChallenges
==============
*/
bdReference<bdRemoteTask> *DWAntiCheat::answerChallenges(DWAntiCheat *this, bdReference<bdRemoteTask> *result, const bdAntiCheatResponses *responses)
{
  DWWrappers *m_owningWrapper; 
  bdAntiCheat *AntiCheat; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAntiCheat(&this->m_owningWrapper->m_lobbyService) )
      {
        AntiCheat = DWLobbyService::getAntiCheat(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAntiCheat::answerChallenges(AntiCheat, &resulta, responses);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::assignLoginService
==============
*/
void DWLobbyService::assignLoginService(DWLobbyService *this, DWLogin *loginService, bdLobbyEventHandler *eventHandler)
{
  bdLoginResult *Result; 
  bdLobbyService *LobbyService; 

  this->m_loginService = loginService;
  if ( !loginService->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6519, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  Result = (bdLoginResult *)bdLogin::getResult(loginService->m_login);
  LobbyService = bdLoginResult::getLobbyService(Result);
  bdLobbyService::registerEventHandler(LobbyService, eventHandler);
}

/*
==============
DWStandaloneUmbrella::authenticate
==============
*/
bdReference<bdRemoteTask> *DWStandaloneUmbrella::authenticate(DWStandaloneUmbrella *this, bdReference<bdRemoteTask> *result, const bdAuthInfo *authInfo, bdUmbrellaUserAccount *userInfo)
{
  bdRemoteTask *v8; 
  bdUmbrella *v9; 
  bdUmbrella *m_umbrella; 
  DWServicesAccess *Instance; 
  const char *LoginRegion; 
  const char *region; 
  const char *client; 
  bdUmbrella *v15; 
  bdUmbrella *v16; 
  const bdReference<bdRemoteTask> *v17; 
  unsigned __int8 *m_data; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v54; 

  v54 = result;
  if ( !authInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5452, ASSERT_TYPE_ASSERT, "(authInfo)", (const char *)&queryFormat, "authInfo") )
    __debugbreak();
  if ( !userInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5453, ASSERT_TYPE_ASSERT, "(userInfo)", (const char *)&queryFormat, "userInfo") )
    __debugbreak();
  result->m_ptr = NULL;
  if ( !this->m_umbrella )
  {
    v8 = (bdRemoteTask *)bdMemory::allocate(0x1A0ui64);
    v9 = (bdUmbrella *)v8;
    resulta.m_ptr = v8;
    if ( v8 )
    {
      bdSingleIdentityBase::bdSingleIdentityBase((bdSingleIdentityBase *)v8);
      v9->__vftable = (bdUmbrella_vtbl *)&bdUmbrella::`vftable';
    }
    else
    {
      v9 = NULL;
    }
    this->m_umbrella = v9;
    memset_0(this->m_umbrellaHTTPBuffer, 0, sizeof(this->m_umbrellaHTTPBuffer));
    memset_0(this->m_umbrellaHTTPResponseBuffer, 0, sizeof(this->m_umbrellaHTTPResponseBuffer));
    m_umbrella = this->m_umbrella;
    Instance = DWServicesAccess::GetInstance();
    LoginRegion = DWServicesAccess::getLoginRegion(Instance);
    region = "cn";
    if ( I_strcmp(LoginRegion, "cn") )
      region = "global";
    client = DWStandaloneUmbrella::getClientId(this, this->m_controllerIndexOfUmbrellaUser);
    if ( !bdSingleIdentityBase::init(m_umbrella, this->m_umbrellaHTTPBuffer, 0x800u, this->m_umbrellaHTTPResponseBuffer, 0x800u, this->m_environment, client, region) )
    {
      v15 = this->m_umbrella;
      if ( v15 )
        ((void (__fastcall *)(bdUmbrella *, __int64))v15->~bdSingleIdentityBase)(v15, 1i64);
      this->m_umbrella = NULL;
    }
  }
  v16 = this->m_umbrella;
  if ( v16 )
  {
    v17 = bdUmbrella::authenticate(v16, &resulta, authInfo, userInfo);
    bdReference<bdRemoteTask>::operator=(result, v17);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    m_data = (unsigned __int8 *)authInfo->m_data;
    v19 = -1;
    v20 = 4i64;
    do
    {
      v21 = (v19 >> 8) ^ g_crc32Table[*m_data ^ (unsigned __int64)(unsigned __int8)v19];
      v22 = (v21 >> 8) ^ g_crc32Table[m_data[1] ^ (unsigned __int64)(unsigned __int8)v21];
      v23 = (v22 >> 8) ^ g_crc32Table[m_data[2] ^ (unsigned __int64)(unsigned __int8)v22];
      v24 = (v23 >> 8) ^ g_crc32Table[m_data[3] ^ (unsigned __int64)(unsigned __int8)v23];
      v25 = (v24 >> 8) ^ g_crc32Table[m_data[4] ^ (unsigned __int64)(unsigned __int8)v24];
      v26 = (v25 >> 8) ^ g_crc32Table[m_data[5] ^ (unsigned __int64)(unsigned __int8)v25];
      v27 = (v26 >> 8) ^ g_crc32Table[m_data[6] ^ (unsigned __int64)(unsigned __int8)v26];
      v28 = (v27 >> 8) ^ g_crc32Table[m_data[7] ^ (unsigned __int64)(unsigned __int8)v27];
      v29 = (v28 >> 8) ^ g_crc32Table[m_data[8] ^ (unsigned __int64)(unsigned __int8)v28];
      v30 = (v29 >> 8) ^ g_crc32Table[m_data[9] ^ (unsigned __int64)(unsigned __int8)v29];
      v31 = (v30 >> 8) ^ g_crc32Table[m_data[10] ^ (unsigned __int64)(unsigned __int8)v30];
      v32 = (v31 >> 8) ^ g_crc32Table[m_data[11] ^ (unsigned __int64)(unsigned __int8)v31];
      v33 = (v32 >> 8) ^ g_crc32Table[m_data[12] ^ (unsigned __int64)(unsigned __int8)v32];
      v34 = (v33 >> 8) ^ g_crc32Table[m_data[13] ^ (unsigned __int64)(unsigned __int8)v33];
      v35 = (v34 >> 8) ^ g_crc32Table[m_data[14] ^ (unsigned __int64)(unsigned __int8)v34];
      v36 = (v35 >> 8) ^ g_crc32Table[m_data[15] ^ (unsigned __int64)(unsigned __int8)v35];
      v37 = (v36 >> 8) ^ g_crc32Table[m_data[16] ^ (unsigned __int64)(unsigned __int8)v36];
      v38 = (v37 >> 8) ^ g_crc32Table[m_data[17] ^ (unsigned __int64)(unsigned __int8)v37];
      v39 = (v38 >> 8) ^ g_crc32Table[m_data[18] ^ (unsigned __int64)(unsigned __int8)v38];
      v40 = (v39 >> 8) ^ g_crc32Table[m_data[19] ^ (unsigned __int64)(unsigned __int8)v39];
      v41 = (v40 >> 8) ^ g_crc32Table[m_data[20] ^ (unsigned __int64)(unsigned __int8)v40];
      v42 = (v41 >> 8) ^ g_crc32Table[m_data[21] ^ (unsigned __int64)(unsigned __int8)v41];
      v43 = (v42 >> 8) ^ g_crc32Table[m_data[22] ^ (unsigned __int64)(unsigned __int8)v42];
      v44 = (v43 >> 8) ^ g_crc32Table[m_data[23] ^ (unsigned __int64)(unsigned __int8)v43];
      v45 = (v44 >> 8) ^ g_crc32Table[m_data[24] ^ (unsigned __int64)(unsigned __int8)v44];
      v46 = (v45 >> 8) ^ g_crc32Table[m_data[25] ^ (unsigned __int64)(unsigned __int8)v45];
      v47 = (v46 >> 8) ^ g_crc32Table[m_data[26] ^ (unsigned __int64)(unsigned __int8)v46];
      v48 = (v47 >> 8) ^ g_crc32Table[m_data[27] ^ (unsigned __int64)(unsigned __int8)v47];
      v49 = (v48 >> 8) ^ g_crc32Table[m_data[28] ^ (unsigned __int64)(unsigned __int8)v48];
      v50 = (v49 >> 8) ^ g_crc32Table[m_data[29] ^ (unsigned __int64)(unsigned __int8)v49];
      v51 = (v50 >> 8) ^ g_crc32Table[m_data[30] ^ (unsigned __int64)(unsigned __int8)v50];
      v19 = (v51 >> 8) ^ g_crc32Table[m_data[31] ^ (unsigned __int64)(unsigned __int8)v51];
      m_data += 32;
      --v20;
    }
    while ( v20 );
    this->m_authInfoTokenCRC = ~v19;
  }
  return result;
}

/*
==============
DWUmbrella::authenticateUmbrella
==============
*/
bdReference<bdRemoteTask> *DWUmbrella::authenticateUmbrella(DWUmbrella *this, bdReference<bdRemoteTask> *result, const bdAuthInfo *authInfo, bdUmbrellaUserAccount *outUmbrellaUser)
{
  bdUmbrella *Umbrella; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService);
      if ( Umbrella )
      {
        v9 = bdUmbrella::authenticate(Umbrella, &resulta, authInfo, outUmbrellaUser);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWUno::authenticateUmbrellaTokenWithUno
==============
*/
bdReference<bdRemoteTask> *DWUno::authenticateUmbrellaTokenWithUno(DWUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaToken, bdUnoTokens *outUnoTokens)
{
  bdUno *Uno; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        v9 = bdUno::authenticateUmbrellaToken(Uno, &resulta, umbrellaToken, outUnoTokens);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWUno::authenticateUnoUser
==============
*/
bdReference<bdRemoteTask> *DWUno::authenticateUnoUser(DWUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo)
{
  bdUno *Uno; 
  const bdReference<bdRemoteTask> *v7; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v10; 

  v10 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        v7 = bdUno::authenticateUser(Uno, &resulta, accountInfo, NULL);
        bdReference<bdRemoteTask>::operator=(result, v7);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::autoJoinTeam
==============
*/
bdReference<bdRemoteTask> *DWTeams::autoJoinTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v8; 
  const bdReference<bdRemoteTask> *v9; 
  bdUserAccountID v11; 
  bdReference<bdRemoteTask> v12; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v11);
        v9 = bdTeams::autoJoinTeam(Teams, &v12, teamID, v8);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( v12.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v12.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::callReportConsoleDetailsIfNeeded
==============
*/
void DWLobbyService::callReportConsoleDetailsIfNeeded(DWLobbyService *this, bdLobbyService *lobbyService)
{
  ;
}

/*
==============
DWClans::cancelInvite
==============
*/
bdReference<bdRemoteTask> *DWClans::cancelInvite(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *user, bdClansRemoveProposalsResponse *response)
{
  __int64 v9; 
  DWWrappers *m_owningWrapper; 
  const bdUserAccountID *v11; 
  const bdClansGroupIdentifier *v12; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *v14; 
  bdClansRemovedMembershipProposal *m_data; 
  __int64 v16; 
  bdClansRemovedMembershipProposal_vtbl **v17; 
  __int64 m_size; 
  bdReference<bdRemoteTask> resulta; 
  bdArray<bdClansRemovedMembershipProposal> proposals; 
  int v22; 
  bdClansRemoveProposalsRequest request; 
  __int64 v24; 
  bdReference<bdRemoteTask> *v25; 
  bdClansGroupIdentifier v26; 
  bdUserAccountID v27; 
  const bdUserAccountID *v28; 
  bdClansRemovedMembershipProposal value; 

  v24 = -2i64;
  v25 = result;
  v28 = user;
  v9 = 0i64;
  result->m_ptr = NULL;
  v22 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    *(_QWORD *)&proposals.m_capacity = 1i64;
    proposals.m_data = (bdClansRemovedMembershipProposal *)bdMemory::allocate(0x110ui64);
    bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(&value);
    bdUserAccountID::bdUserAccountID(&v27, user);
    bdClansRemovedMembershipProposal::setTargetUser(&value, v11);
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v26, 1u, id, 0, 0i64);
    bdClansRemovedMembershipProposal::setGroup(&value, v12);
    bdArray<bdClansRemovedMembershipProposal>::pushBack(&proposals, &value);
    bdClansRemoveProposalsRequest::bdClansRemoveProposalsRequest(&request, &proposals);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    v14 = bdMW4Service::removeProposals(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v14);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdArray<bdClansRemovedMembershipProposal>::destruct((bdArray<bdClansRemovedMembershipProposal> *)&request.__vftable + 1, *((bdClansRemovedMembershipProposal **)&request.__vftable + 2), *((const unsigned int *)&request.__vftable + 7));
    bdMemory::deallocate(*((void **)&request.__vftable + 2));
    *((_QWORD *)&request.__vftable + 2) = 0i64;
    *((_QWORD *)&request.__vftable + 3) = 0i64;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)request.gap20);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.m_group.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&value.m_group.m_rootID + 1));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&value.m_targetUser[136]);
    bdUserDetails::~bdUserDetails((bdUserDetails *)&value.m_targetUser[120]);
    bdReferencable::~bdReferencable((bdReferencable *)&value.m_targetUser[136]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&value.gapFC[4]);
    m_data = proposals.m_data;
    if ( proposals.m_size )
    {
      v16 = 0i64;
      v17 = &proposals.m_data->__vftable + 1;
      m_size = proposals.m_size;
      do
      {
        (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v17)->serialize) + v9 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v17)->serialize) + v16 + 8, 0i64);
        v16 += 272i64;
        v9 += 272i64;
        v17 += 34;
        --m_size;
      }
      while ( m_size );
      m_data = proposals.m_data;
    }
    bdMemory::deallocate(m_data);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)user->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)user->gap38);
  return result;
}

/*
==============
DWAsyncMatchMaking::cancelMatchMaking
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::cancelMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *matched; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        matched = bdAsyncMatchMaking::cancelMatchMaking(AsyncMatchmaking, &resulta, mmID, success);
        bdReference<bdRemoteTask>::operator=(result, matched);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelDispatch::checkForAuthToken
==============
*/
void DWDataChannelDispatch::checkForAuthToken(DWDataChannelDispatch *this)
{
  ;
}

/*
==============
DWGameMetrics::checkForUmbrellaToken
==============
*/
void DWGameMetrics::checkForUmbrellaToken(DWGameMetrics *this)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  int m_controllerIndexOfUmbrellaUser; 
  int m_currentControllerIndex; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::GetStandaloneUmbrella(Instance)->m_hasUmbrellaToken )
  {
    v3 = DWServicesAccess::GetInstance();
    m_controllerIndexOfUmbrellaUser = DWServicesAccess::GetStandaloneUmbrella(v3)->m_controllerIndexOfUmbrellaUser;
    m_currentControllerIndex = this->m_currentControllerIndex;
    if ( m_controllerIndexOfUmbrellaUser != m_currentControllerIndex )
    {
      if ( m_currentControllerIndex != -1 )
      {
        if ( this->m_messagesEnqueued )
          bdGameMetrics::prepare(this->m_gameMetrics);
      }
      this->m_currentControllerIndex = m_controllerIndexOfUmbrellaUser;
    }
  }
  else
  {
    this->m_currentControllerIndex = -1;
  }
}

/*
==============
DWContentStreaming::checkProgress
==============
*/
void DWContentStreaming::checkProgress(DWContentStreaming *this, unsigned int *bytesTransfered, float *dataRate)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 

  *bytesTransfered = 0;
  *dataRate = 0.0;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
    {
      ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::checkProgress(ContentStreaming, bytesTransfered, dataRate);
    }
  }
}

/*
==============
DWPooledStorage::checkProgress
==============
*/
void DWPooledStorage::checkProgress(DWPooledStorage *this, unsigned int *bytesTransfered, float *dataRate)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 

  *bytesTransfered = 0;
  *dataRate = 0.0;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
    {
      PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::checkProgress(PooledStorage, bytesTransfered, dataRate);
    }
  }
}

/*
==============
DWAchievementEngine::claimAchievement
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::claimAchievement(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdClaimAchievementRequest *request)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAchievementsEngineService::claimAchievement(AchievementsEngineService, &resulta, request);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWReward::claimClientAchievements
==============
*/
bdReference<bdRemoteTask> *DWReward::claimClientAchievements(DWReward *this, bdReference<bdRemoteTask> *result, const bdUserAchievement *userAchievements, const unsigned __int16 numAchievements, const bdSessionID *sessionID)
{
  DWWrappers *m_owningWrapper; 
  bdReward *Rewards; 
  const bdSessionID *v11; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdSessionID v15; 
  const bdSessionID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = sessionID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getRewards(&this->m_owningWrapper->m_lobbyService) )
      {
        Rewards = DWLobbyService::getRewards(&this->m_owningWrapper->m_lobbyService);
        bdSessionID::bdSessionID(&v15, sessionID);
        v12 = bdReward::claimClientAchievements(Rewards, v14, userAchievements, numAchievements, v11);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( v14[0].m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14[0].m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, 1i64);
        }
      }
    }
  }
  bdSecurityID::~bdSecurityID((bdSecurityID *)sessionID->_bytes_20);
  bdSerializable::~bdSerializable((bdSerializable *)sessionID->_bytes_20);
  bdTaskResult::~bdTaskResult((bdTaskResult *)(&sessionID->__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&sessionID->_bytes_20[8]);
  return result;
}

/*
==============
DWLobbyService::cleanup
==============
*/
void DWLobbyService::cleanup(DWLobbyService *this)
{
  this->m_loginService = NULL;
}

/*
==============
DWLogin::cleanup
==============
*/
void DWLogin::cleanup(DWLogin *this)
{
  bdLogin *m_login; 
  bdLogin *v3; 

  m_login = this->m_login;
  if ( m_login )
  {
    bdLogin::reset(m_login);
    v3 = this->m_login;
    if ( v3 )
    {
      bdLogin::~bdLogin(this->m_login);
      bdMemory::deallocate(v3);
    }
    this->m_login = NULL;
  }
}

/*
==============
DWUmbrella::clearBuffers
==============
*/
void DWUmbrella::clearBuffers(DWUmbrella *this)
{
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
      memset_0(this->m_umbrellaHTTPRequestBuffer, 0, 0x2000ui64);
  }
}

/*
==============
DWUno::clearBuffers
==============
*/
void DWUno::clearBuffers(DWUno *this)
{
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
      memset_0(this->m_unoHTTPRequestBuffer, 0, 0x2000ui64);
  }
}

/*
==============
DWLobbyService::connect
==============
*/
_BOOL8 DWLobbyService::connect(DWLobbyService *this, bdAddr *lobbyServiceAddr, const bdAuthInfo *authInfo, const bool useEncryption)
{
  bool v8; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v11; 
  DWLogin *v12; 
  bdLoginResult *v13; 
  bdLobbyService *LobbyService; 
  bdAddr *v15; 
  DWLobbyServiceHandle result; 
  __int64 v18; 
  bdAddr v19; 

  v18 = -2i64;
  v8 = 0;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v11 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v11) )
    {
      this->m_hasCalledReportConsoleDetails = 0;
      v12 = m_lobbyService->m_loginService;
      if ( v12 )
      {
        v13 = (bdLoginResult *)DWLogin::getResult(v12);
        LobbyService = bdLoginResult::getLobbyService(v13);
      }
      else
      {
        LobbyService = NULL;
      }
      bdAddr::bdAddr(&v19, lobbyServiceAddr);
      v8 = bdLobbyService::connect(LobbyService, v15, authInfo, 0x20000ui64, 0x20000ui64, useEncryption);
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return v8;
}

/*
==============
DWMarketplace::consumeInventoryItems
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::consumeInventoryItems(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int *itemIds, const unsigned int *consumedQuantities, const unsigned __int16 numItems, bdMarketplaceAuditLogResult *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> v15; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v13 = bdMarketplace::consumeInventoryItems(Marketplace, &v15, clientTransactionId, itemIds, consumedQuantities, numItems, resulta);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( v15.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::copyFromUserStorage
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::copyFromUserStorage(DWContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 userFileID, const unsigned __int16 fileSlot, const char *fileName, const unsigned __int16 category, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v17; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v20; 

  v20 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v17 = bdContentStreaming::copyFromUserStorage(ContentStreaming, &resulta, userFileID, fileSlot, fileName, category, metaData, metaDataSize, numTags, tags, fileID);
        bdReference<bdRemoteTask>::operator=(result, v17);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWGameMetrics::counter
==============
*/
char DWGameMetrics::counter(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  const dvar_t *v7; 

  if ( !this->m_gameMetrics )
    return 0;
  v7 = DVARBOOL_online_matchmaking_using_metrics;
  if ( !DVARBOOL_online_matchmaking_using_metrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_using_metrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || !bdGameMetrics::counter(this->m_gameMetrics, timestamp, name, value) )
    return 0;
  ++this->m_messagesEnqueued;
  return 1;
}

/*
==============
DWUCD::createAccount
==============
*/
bdReference<bdRemoteTask> *DWUCD::createAccount(DWUCD *this, bdReference<bdRemoteTask> *result, bdUCDAccountInfo *const accountInfo, const char *const password)
{
  result->m_ptr = NULL;
  return result;
}

/*
==============
DWUno::createAccount
==============
*/
bdReference<bdRemoteTask> *DWUno::createAccount(DWUno *this, bdReference<bdRemoteTask> *result, bdUnoAccountInfo *accountInfo, const bdUnoSubscription *subscriptions, unsigned __int16 numSubscriptions, const bdUnoTermsOfService *termsOfService, const char *locale, const char *fields, const char *source)
{
  bdUno *Uno; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        v14 = bdUno::createAccount(Uno, &resulta, accountInfo, subscriptions, numSubscriptions, termsOfService, locale, fields, source);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::createChatChannel
==============
*/
bdReference<bdRemoteTask> *DWMessaging::createChatChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, bdChannelCreateChannelResponse *const createChannelResponse)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v9 = bdMessaging::createOrSubscribeToChannel(Messaging, &resulta, createChannelResponse, category, 0i64, 0i64);
      bdReference<bdRemoteTask>::operator=(result, v9);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::createChatChannelWithID
==============
*/
bdReference<bdRemoteTask> *DWMessaging::createChatChannelWithID(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, bdChannelCreateChannelResponse *const createChannelResponse)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v10 = bdMessaging::createOrSubscribeToChannel(Messaging, &resulta, createChannelResponse, category, channelID, 0i64);
      bdReference<bdRemoteTask>::operator=(result, v10);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWClans::createClan
==============
*/
bdReference<bdRemoteTask> *DWClans::createClan(DWClans *this, bdReference<bdRemoteTask> *result, const char *name, const char *clanTag, const bdUserAccountID *owner, bdClansGroupInfo *response)
{
  DWWrappers *m_owningWrapper; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 
  bdClansCreateGroupRequest request; 

  v15 = -2i64;
  v16 = result;
  v17 = owner;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansCreateGroupRequest::bdClansCreateGroupRequest(&request, 1u, name, clanTag, 0, 0i64, 3u);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    v12 = bdMW4Service::createGroup(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v12);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_owner.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_owner.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_owner.m_value._bytes_48);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>(&request.m_uniqueTag);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)(&request.m_rootID + 1));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)request.gap2A8);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)owner->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)owner->gap38);
  return result;
}

/*
==============
DWUno::createPreRegistration
==============
*/
bdReference<bdRemoteTask> *DWUno::createPreRegistration(DWUno *this, bdReference<bdRemoteTask> *result, const bdUmbrellaAccessInfo *umbrellaToken, const bdUmbrellaProviderAccount *umbrellaProviderAccount, const char *email, const char *country, const char *dateOfBirth, const char *locale)
{
  bdUno *Uno; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        v13 = bdUno::createPreRegistration(Uno, &resulta, umbrellaToken, umbrellaProviderAccount, email, country, dateOfBirth, locale);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMatchMaking::createSession
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::createSession(DWMatchMaking *this, bdReference<bdRemoteTask> *result, bdMatchMakingInfo *sessionParams, bdSessionID *const sessionID)
{
  DWWrappers *m_owningWrapper; 
  bdMatchMaking *MatchMaking; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMatchMaking(&m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        MatchMaking = DWLobbyService::getMatchMaking(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v10 = bdMatchMaking::createSession(MatchMaking, &resulta, sessionParams, sessionID);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::createTeam
==============
*/
bdReference<bdRemoteTask> *DWTeams::createTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoV2 *const teamInfo)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  bdUserAccountID v13; 
  bdReference<bdRemoteTask> v14; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v13);
        v11 = bdTeams::createTeamV2(Teams, &v14, teamName, teamInfo, v10, 0);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::deactivateAchievement
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::deactivateAchievement(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdDeactivateAchievementRequest *request)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAchievementsEngineService::deactivateAchievement(AchievementsEngineService, &resulta, request);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWUno::deleteAccount
==============
*/
bdReference<bdRemoteTask> *DWUno::deleteAccount(DWUno *this, bdReference<bdRemoteTask> *result, const unsigned __int64 accountId, const char *accessToken)
{
  bdUno *Uno; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        v9 = bdUno::deleteUser(Uno, &resulta, accountId, accessToken);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::deleteContentStreaming
==============
*/
void DWLobbyService::deleteContentStreaming(DWLobbyService *this)
{
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v4; 
  DWLogin *v5; 
  bdLoginResult *v6; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v4 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v4) )
    {
      if ( this->isReady(this) )
      {
        v5 = m_lobbyService->m_loginService;
        if ( v5 )
        {
          v6 = (bdLoginResult *)DWLogin::getResult(v5);
          LobbyService = bdLoginResult::getLobbyService(v6);
        }
        else
        {
          LobbyService = NULL;
        }
        bdLobbyService::deleteContentStreaming(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
}

/*
==============
DWMarketplace::deleteInventory
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::deleteInventory(DWMarketplace *this, bdReference<bdRemoteTask> *result)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v6; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v9; 

  v9 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v6 = bdMarketplace::deleteInventory(Marketplace, &resulta);
        bdReference<bdRemoteTask>::operator=(result, v6);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMail::deleteMail
==============
*/
bdReference<bdRemoteTask> *DWMail::deleteMail(DWMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdMail *Mail; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Mail = DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v11 = bdMail::deleteMail(Mail, &resulta, mailIDs, numMailIDs, userID);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::deletePooledStorage
==============
*/
void DWLobbyService::deletePooledStorage(DWLobbyService *this)
{
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v4; 
  DWLogin *v5; 
  bdLoginResult *v6; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v4 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v4) )
    {
      if ( this->isReady(this) )
      {
        v5 = m_lobbyService->m_loginService;
        if ( v5 )
        {
          v6 = (bdLoginResult *)DWLogin::getResult(v5);
          LobbyService = bdLoginResult::getLobbyService(v6);
        }
        else
        {
          LobbyService = NULL;
        }
        bdLobbyService::getMessaging(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
}

/*
==============
DWMatchMaking::deleteSession
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::deleteSession(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID)
{
  DWWrappers *m_owningWrapper; 
  bdMatchMaking *MatchMaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMatchMaking(&m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        MatchMaking = DWLobbyService::getMatchMaking(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v8 = bdMatchMaking::deleteSession(MatchMaking, &resulta, sessionID);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStats::deleteStats
==============
*/
bdReference<bdRemoteTask> *DWStats::deleteStats(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID)
{
  DWWrappers *m_owningWrapper; 
  bdStats *Stats; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        Stats = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v8 = bdStats::deleteStats(Stats, &resulta, leaderboardID);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::deleteUser
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::deleteUser(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdDeleteUserRequest *request)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAchievementsEngineService::deleteUser(AchievementsEngineService, &resulta, request);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::demoteMember
==============
*/
bdReference<bdRemoteTask> *DWTeams::demoteMember(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  const bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = userID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, userID);
        v11 = bdTeams::demoteMember(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
DWMarketplace::deposit
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::deposit(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, unsigned __int8 numPlayerCurrencies)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v10 = bdMarketplace::deposit(Marketplace, &resulta, playerCurrencies, numPlayerCurrencies);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::disconnect
==============
*/
void DWLobbyService::disconnect(DWLobbyService *this)
{
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v4; 
  DWLogin *v5; 
  bdLoginResult *v6; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  DWLobbyService::getLobbyService(this, &result);
  if ( DWLobbyService::getStatus(this) != DISCONNECTED )
  {
    m_lobbyService = result.m_lobbyService;
    m_loginService = result.m_lobbyService->m_loginService;
    if ( m_loginService )
    {
      v4 = (bdLoginResult *)DWLogin::getResult(m_loginService);
      if ( bdLoginResult::getLobbyService(v4) )
      {
        v5 = m_lobbyService->m_loginService;
        if ( v5 )
        {
          v6 = (bdLoginResult *)DWLogin::getResult(v5);
          LobbyService = bdLoginResult::getLobbyService(v6);
        }
        else
        {
          LobbyService = NULL;
        }
        bdLobbyService::disconnect(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
}

/*
==============
DWContentStreaming::download
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::download(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v13 = bdContentStreaming::download(ContentStreaming, &resulta, fileID, downloadHandler, fileMetaData, startByte, endByte);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::download
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::download(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v14 = bdContentStreaming::download(ContentStreaming, &resulta, fileID, fileData, fileDataSize, fileMetaData, startByte, endByte);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::downloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::downloadPublisherFile(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, bdDownloadInterceptor *downloadHandler, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v13 = bdContentStreaming::downloadPublisherFile(ContentStreaming, &resulta, fileID, downloadHandler, fileMetaData, startByte, endByte);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::downloadPublisherFile
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::downloadPublisherFile(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 fileID, void *fileData, const unsigned int fileDataSize, bdFileMetaData *fileMetaData, unsigned int startByte, unsigned int endByte)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v14 = bdContentStreaming::downloadPublisherFile(ContentStreaming, &resulta, fileID, fileData, fileDataSize, fileMetaData, startByte, endByte);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::downloadUserSummary
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::downloadUserSummary(DWContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, void *summaryData, unsigned int summaryDataSize, unsigned int startByte, unsigned int endByte)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v13 = bdContentStreaming::downloadUserSummary(ContentStreaming, &resulta, fileID, summaryData, summaryDataSize, startByte, endByte);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::enablePersistentThread
==============
*/
void DWContentStreaming::enablePersistentThread(DWContentStreaming *this, bool enable)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
    {
      ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::enablePersistentThread(ContentStreaming, enable);
    }
  }
}

/*
==============
DWPooledStorage::enablePersistentThread
==============
*/
void DWPooledStorage::enablePersistentThread(DWPooledStorage *this, bool enable)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
    {
      PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::enablePersistentThread(PooledStorage, enable);
    }
  }
}

/*
==============
DWGameMetrics::enqueue
==============
*/
char DWGameMetrics::enqueue(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  const dvar_t *v7; 

  if ( !this->m_gameMetrics )
    return 0;
  v7 = DVARBOOL_online_matchmaking_using_metrics;
  if ( !DVARBOOL_online_matchmaking_using_metrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_using_metrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || !bdGameMetrics::enqueue(this->m_gameMetrics, timestamp, name, value) )
    return 0;
  ++this->m_messagesEnqueued;
  return 1;
}

/*
==============
DWABTesting::enroll
==============
*/
bdReference<bdRemoteTask> *DWABTesting::enroll(DWABTesting *this, bdReference<bdRemoteTask> *result, bdABTestingEnrollRequest *request, bdABTestingEnrollResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdABTesting *ABTesting; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getABTesting(&this->m_owningWrapper->m_lobbyService) )
      {
        ABTesting = DWLobbyService::getABTesting(&this->m_owningWrapper->m_lobbyService);
        v10 = bdABTesting::enroll(ABTesting, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLogin::failed
==============
*/
bool DWLogin::failed(DWLogin *this)
{
  bdLogin *m_login; 
  bdLoginStatus *Status; 
  bool result; 

  m_login = this->m_login;
  result = 0;
  if ( m_login )
  {
    Status = (bdLoginStatus *)bdLogin::getStatus(m_login);
    if ( bdLoginStatus::getLoginStatusCode(Status) == FAILED )
      return 1;
  }
  return result;
}

/*
==============
DWMatchMaking::findSessionFromID
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::findSessionFromID(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  DWWrappers *m_owningWrapper; 
  bdMatchMaking *MatchMaking; 
  const bdReference<bdRemoteTask> *SessionFromID; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMatchMaking(&m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        MatchMaking = DWLobbyService::getMatchMaking(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        SessionFromID = bdMatchMaking::findSessionFromID(MatchMaking, &resulta, sessionID, sessionInfo);
        bdReference<bdRemoteTask>::operator=(result, SessionFromID);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMatchMaking::findSessions
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::findSessions(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, const unsigned int startIndex, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  DWWrappers *m_owningWrapper; 
  bdMatchMaking *MatchMaking; 
  const bdReference<bdRemoteTask> *Sessions; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMatchMaking(&m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        MatchMaking = DWLobbyService::getMatchMaking(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        Sessions = bdMatchMaking::findSessions(MatchMaking, &resulta, queryID, startIndex, maxNumResults, sessionParams, results);
        bdReference<bdRemoteTask>::operator=(result, Sessions);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMatchMaking::findSessionsTwoPass
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::findSessionsTwoPass(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int primaryQueryID, const unsigned int secondaryQueryID, const unsigned int maxNumResults, bdSessionParams *sessionParams, bdMatchMakingInfo *results)
{
  DWWrappers *m_owningWrapper; 
  bdMatchMaking *MatchMaking; 
  const bdReference<bdRemoteTask> *SessionsTwoPass; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMatchMaking(&m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        MatchMaking = DWLobbyService::getMatchMaking(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        SessionsTwoPass = bdMatchMaking::findSessionsTwoPass(MatchMaking, &resulta, primaryQueryID, secondaryQueryID, maxNumResults, sessionParams, results);
        bdReference<bdRemoteTask>::operator=(result, SessionsTwoPass);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWGameMetrics::gauge
==============
*/
char DWGameMetrics::gauge(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  const dvar_t *v7; 

  if ( !this->m_gameMetrics )
    return 0;
  v7 = DVARBOOL_online_matchmaking_using_metrics;
  if ( !DVARBOOL_online_matchmaking_using_metrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_using_metrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || !bdGameMetrics::gauge(this->m_gameMetrics, timestamp, name, value) )
    return 0;
  ++this->m_messagesEnqueued;
  return 1;
}

/*
==============
DWLobbyService::getABTesting
==============
*/
bdLobbyService *DWLobbyService::getABTesting(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getABTesting(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWAchievementEngine::getAchievementDefinitions
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::getAchievementDefinitions(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetAchievementDefinitionsRequest *request, bdGetAchievementDefinitionsResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *AchievementDefinitions; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        AchievementDefinitions = bdAchievementsEngineService::getAchievementDefinitions(AchievementsEngineService, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, AchievementDefinitions);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::getAchievementStates
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::getAchievementStates(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesRequest *request, bdGetAchievementStatesResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *AchievementStates; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        AchievementStates = bdAchievementsEngineService::getAchievementStates(AchievementsEngineService, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, AchievementStates);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::getAchievementStatesBatch
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::getAchievementStatesBatch(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetAchievementStatesBatchRequest *request, bdGetAchievementStatesBatchResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *AchievementStatesBatch; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        AchievementStatesBatch = bdAchievementsEngineService::getAchievementStatesBatch(AchievementsEngineService, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, AchievementStatesBatch);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getAchievementsEngineClientService
==============
*/
bdLobbyService *DWLobbyService::getAchievementsEngineClientService(DWLobbyService *this)
{
  bdLobbyService *AchievementsEngineClientService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  bdLobbyService *LobbyService; 
  bdLoginResult *v9; 
  bdAuthInfo *AuthInfo; 
  const char *v11; 
  DWLobbyServiceHandle result; 

  AchievementsEngineClientService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
          v6 = m_lobbyService->m_loginService;
        }
        else
        {
          LobbyService = NULL;
        }
        if ( v6 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v6);
          AchievementsEngineClientService = bdLoginResult::getLobbyService(v9);
        }
        AuthInfo = bdLobbyService::getAuthInfo(AchievementsEngineClientService);
        v11 = j_va("%u", AuthInfo->m_titleID);
        AchievementsEngineClientService = (bdLobbyService *)bdLobbyService::getAchievementsEngineClientService(LobbyService, v11);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return AchievementsEngineClientService;
}

/*
==============
DWLobbyService::getAchievementsEngineService
==============
*/
bdLobbyService *DWLobbyService::getAchievementsEngineService(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getAchievementsEngineService(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getAntiCheat
==============
*/
bdLobbyService *DWLobbyService::getAntiCheat(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) || DWLobbyService::getStatus(this) == WAITING_FOR_REPORT_CONSOLE_DETAILS )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getAntiCheat(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWTeams::getApplicationsByTeam
==============
*/
bdReference<bdRemoteTask> *DWTeams::getApplicationsByTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamApplicationWithTeamID *applications, const unsigned int numTeams, const unsigned int maxApplications, const unsigned int offset)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *ApplicationsByTeamPaginated; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        ApplicationsByTeamPaginated = bdTeams::getApplicationsByTeamPaginated(Teams, &resulta, teamIDs, numTeams, applications, maxApplications, offset, 1, 1, 1);
        bdReference<bdRemoteTask>::operator=(result, ApplicationsByTeamPaginated);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getAsyncMatchmaking
==============
*/
bdLobbyService *DWLobbyService::getAsyncMatchmaking(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getService<bdAsyncMatchMaking>(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWMarketplace::getBalance
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::getBalance(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdGetPlayerBalancesRequest *request, bdGetPlayerBalancesResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *BalancesV3; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        BalancesV3 = bdMarketplace::getBalancesV3(Marketplace, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, BalancesV3);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelManagerStandard::getChannel
==============
*/
bdReference<bdDataChannelStandard> *DWDataChannelManagerStandard::getChannel(DWDataChannelManagerStandard *this, bdReference<bdDataChannelStandard> *result, const char *const msgName, const char *const msgSchemaGuid, unsigned int msgSchemaGuidSize, bool *created)
{
  bdDataChannelManagerStandardImpl *Instance; 
  __int64 v11; 

  if ( this->m_activeControllerIndex >= 0 )
  {
    Instance = bdSingleton<bdDataChannelManagerStandardImpl>::getInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6229, ASSERT_TYPE_SANITY, "( dataChannelManager )", (const char *)&queryFormat, "dataChannelManager") )
      __debugbreak();
    v11 = -1i64;
    do
      ++v11;
    while ( msgSchemaGuid[v11] );
    bdDataChannelManagerStandardImpl::getChannel(Instance, result, msgName, msgSchemaGuid, v11, created);
    return result;
  }
  else
  {
    result->m_ptr = NULL;
    return result;
  }
}

/*
==============
DWMessaging::getChannelInfo
==============
*/
bdReference<bdRemoteTask> *DWMessaging::getChannelInfo(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, bdChannelGetChannelInfosResponse *response)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *ChannelsInfo; 
  char *categories[6]; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 
  unsigned __int64 channelIDs; 

  channelIDs = channelID;
  v13 = result;
  categories[1] = (char *)-2i64;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      categories[0] = (char *)category;
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      ChannelsInfo = bdMessaging::getChannelsInfo(Messaging, &resulta, response, 1u, (const char *const *)categories, &channelIDs);
      bdReference<bdRemoteTask>::operator=(result, ChannelsInfo);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::getChannelMembers
==============
*/
bdReference<bdRemoteTask> *DWMessaging::getChannelMembers(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const unsigned int maxNumMembers, bdChannelGetMembersResponse *response)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *ChannelMembers; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      ChannelMembers = bdMessaging::getChannelMembers(Messaging, &resulta, response, category, channelID, maxNumMembers);
      bdReference<bdRemoteTask>::operator=(result, ChannelMembers);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWClans::getClanInfos
==============
*/
bdReference<bdRemoteTask> *DWClans::getClanInfos(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *ids, const unsigned int numIdentifiers, bdClansGetGroupInfosResponse *response)
{
  __int64 v5; 
  const unsigned __int64 *v6; 
  bdReference<bdRemoteTask> *v7; 
  __int64 v9; 
  DWWrappers *m_owningWrapper; 
  bdClansGroupIdentifier *m_data; 
  __int64 m_size; 
  int v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  char *v21; 
  bdClansGroupIdentifier *v22; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *GroupInfos; 
  __int64 v25; 
  __int64 v26; 
  int v28; 
  bdArray<bdClansGroupIdentifier> v29; 
  __int64 v30; 
  bdClansGroupIdentifier *v31; 
  bdArray<bdClansGroupIdentifier> v32; 
  bdClansGetGroupInfosRequest request; 
  bdClansGroupIdentifier v34; 
  __int64 v35; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v37; 
  const unsigned __int64 *v38; 

  v38 = ids;
  v37 = result;
  resulta.m_ptr = (bdRemoteTask *)this;
  v35 = -2i64;
  v5 = numIdentifiers;
  v6 = ids;
  v7 = result;
  v9 = 0i64;
  result->m_ptr = NULL;
  v28 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    m_data = NULL;
    v29.m_data = NULL;
    v29.m_capacity = v5;
    m_size = 0i64;
    v29.m_size = 0;
    if ( (_DWORD)v5 )
    {
      v30 = (unsigned int)v5;
      m_data = (bdClansGroupIdentifier *)bdMemory::allocate((unsigned __int64)(unsigned int)v5 << 6);
      v29.m_data = m_data;
    }
    else
    {
      v30 = v5;
    }
    if ( (_DWORD)v5 )
    {
      v13 = 0;
      do
      {
        bdClansGroupIdentifier::bdClansGroupIdentifier(&v34, 1u, *v6, 0, 0i64);
        if ( v13 == (_DWORD)v5 )
        {
          v14 = v5;
          if ( !(_DWORD)v5 )
            v14 = 1;
          v15 = v14 + (_DWORD)v5 == 0;
          LODWORD(v5) = v14 + v5;
          v31 = NULL;
          if ( !v15 )
          {
            v31 = (bdClansGroupIdentifier *)bdMemory::allocate((unsigned __int64)(unsigned int)v5 << 6);
            bdArray<bdClansGroupIdentifier>::copyConstructArrayArray(&v29, v31, m_data, m_size);
          }
          if ( (_DWORD)m_size )
          {
            v16 = 0i64;
            v17 = 0i64;
            v18 = (unsigned int)m_size;
            do
            {
              v19 = *(int *)(*((_QWORD *)&m_data[v16].__vftable + 1) + 4i64);
              (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + v19 + v16 * 64 + 8))((__int64)&m_data->__vftable + v19 + v17 + 8, 0i64);
              v17 += 64i64;
              ++v16;
              --v18;
            }
            while ( v18 );
            v6 = v38;
          }
          bdMemory::deallocate(m_data);
          m_data = v31;
          v29.m_data = v31;
          v29.m_capacity = v5;
        }
        v20 = (unsigned __int64)(unsigned int)m_size << 6;
        v15 = (bdClansGroupIdentifier *)((char *)m_data + v20) == NULL;
        v21 = (char *)m_data + v20;
        v32.m_data = (bdClansGroupIdentifier *)v21;
        v31 = (bdClansGroupIdentifier *)v21;
        if ( !v15 )
        {
          *((_QWORD *)v21 + 1) = &bdClansGroupIdentifier::`vbtable';
          bdReferencable::bdReferencable((bdReferencable *)v21 + 3, (const bdReferencable *)((char *)&v34.__vftable + *(int *)(*((_QWORD *)&v34.__vftable + 1) + 4i64) + 8));
          v28 |= 2u;
          bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)v21, &v34);
          *(_QWORD *)v21 = &bdClansGroupIdentifier::`vftable'{for `bdStructBufferSerializable'};
          *(_QWORD *)&v21[*(int *)(*((_QWORD *)v21 + 1) + 4i64) + 8] = &bdClansGroupIdentifier::`vftable'{for `bdReferencable'};
          *((_WORD *)v21 + 8) = *((_WORD *)&v34.__vftable + 8);
          *((_QWORD *)v21 + 3) = *((_QWORD *)&v34.__vftable + 3);
          *((_WORD *)v21 + 16) = v34.m_rootKind;
          *((_QWORD *)v21 + 5) = v34.m_rootID;
        }
        m_size = (unsigned int)(m_size + 1);
        v29.m_size = m_size;
        v13 = m_size;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v34.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)(&v34.m_rootID + 1));
        v38 = ++v6;
        --v30;
      }
      while ( v30 );
      v7 = v37;
    }
    v32.m_capacity = v5;
    v32.m_size = m_size;
    v22 = NULL;
    if ( (_DWORD)v5 )
    {
      v22 = (bdClansGroupIdentifier *)bdMemory::allocate((unsigned __int64)(unsigned int)v5 << 6);
      bdArray<bdClansGroupIdentifier>::copyConstructArrayArray(&v32, v22, m_data, m_size);
    }
    v32.m_data = v22;
    bdClansGetGroupInfosRequest::bdClansGetGroupInfosRequest(&request, &v32);
    Clans = DWLobbyService::getClans((DWLobbyService *)(*(_QWORD *)&resulta.m_ptr->m_refCount.m_value._My_val + 17424i64));
    GroupInfos = bdMW4Service::getGroupInfos(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(v7, GroupInfos);
    if ( resulta.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      m_data = v29.m_data;
      m_size = v29.m_size;
    }
    bdArray<bdClansGroupIdentifier>::destruct((bdArray<bdClansGroupIdentifier> *)&request.__vftable + 1, *((bdClansGroupIdentifier **)&request.__vftable + 2), *((const unsigned int *)&request.__vftable + 7));
    bdMemory::deallocate(*((void **)&request.__vftable + 2));
    *((_QWORD *)&request.__vftable + 2) = 0i64;
    *((_QWORD *)&request.__vftable + 3) = 0i64;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)request.gap20);
    if ( (_DWORD)m_size )
    {
      v25 = 0i64;
      do
      {
        v26 = *(int *)(*((_QWORD *)&m_data[v9].__vftable + 1) + 4i64);
        (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + v26 + v9 * 64 + 8))((__int64)&m_data->__vftable + v26 + v25 + 8, 0i64);
        v25 += 64i64;
        ++v9;
        --m_size;
      }
      while ( m_size );
    }
    bdMemory::deallocate(m_data);
  }
  return v7;
}

/*
==============
DWClans::getClanMembers
==============
*/
bdReference<bdRemoteTask> *DWClans::getClanMembers(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, bdClansGetGroupMembersResponse *response)
{
  DWWrappers *m_owningWrapper; 
  const bdClansGroupIdentifier *v9; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *GroupMembers; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdClansGroupIdentifier v16; 
  bdClansGetGroupMembersRequest request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v16, 1u, id, 0, 0i64);
    bdClansGetGroupMembersRequest::bdClansGetGroupMembersRequest(&request, v9);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    GroupMembers = bdMW4Service::getGroupMembers(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, GroupMembers);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdArray<bdStructUserAccountID>::~bdArray<bdStructUserAccountID>(&request.m_users);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap76[2]);
  }
  return result;
}

/*
==============
DWLobbyService::getClans
==============
*/
bdLobbyService *DWLobbyService::getClans(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMW4Service(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLogin::getClientId
==============
*/
char *DWLogin::getClientId(DWLogin *this)
{
  bdLogin *m_login; 
  bdLoginResult *v3; 
  const char *ClientID; 

  m_login = this->m_login;
  if ( !m_login || !bdLogin::succeeded(m_login) )
    return this->m_cachedClientId;
  if ( this == (DWLogin *)-25i64 || !this->m_cachedClientId[0] )
  {
    v3 = (bdLoginResult *)bdLogin::getResult(this->m_login);
    ClientID = bdLoginResult::getClientID(v3);
    Core_strcpy(this->m_cachedClientId, 0x40ui64, ClientID);
  }
  return this->m_cachedClientId;
}

/*
==============
DWStandaloneUmbrella::getClientId
==============
*/
const char *DWStandaloneUmbrella::getClientId(DWStandaloneUmbrella *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 

  if ( !this->m_hasUmbrellaToken && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5202, ASSERT_TYPE_ASSERT, "(hasToken())", (const char *)&queryFormat, "hasToken()") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, controllerIndex);
  return bdLoginResult::getClientID(LoginResult);
}

/*
==============
DWMarketingComms::getCommMessages
==============
*/
bdReference<bdRemoteTask> *DWMarketingComms::getCommMessages(DWMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsGetMessagesRequest *request, bdCommsGetMessagesResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdMarketingComms *MarketingComms; 
  const bdReference<bdRemoteTask> *Messages; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMarketingComms(&m_owningWrapper->m_lobbyService) )
      {
        MarketingComms = DWLobbyService::getMarketingComms(&this->m_owningWrapper->m_lobbyService);
        Messages = bdMarketingComms::getMessages(MarketingComms, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, Messages);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketingComms::getCommMessages
==============
*/
bdReference<bdRemoteTask> *DWMarketingComms::getCommMessages(DWMarketingComms *this, bdReference<bdRemoteTask> *result, const char *locale, bdCommsLocationMessages *locationMessages, unsigned int locationMessagesCount)
{
  DWWrappers *m_owningWrapper; 
  bdMarketingComms *MarketingComms; 
  const bdReference<bdRemoteTask> *Messages; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMarketingComms(&m_owningWrapper->m_lobbyService) )
      {
        MarketingComms = DWLobbyService::getMarketingComms(&this->m_owningWrapper->m_lobbyService);
        Messages = bdMarketingComms::getMessages(MarketingComms, &resulta, locale, locationMessages, locationMessagesCount);
        bdReference<bdRemoteTask>::operator=(result, Messages);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getConnectionID
==============
*/
unsigned __int64 DWLobbyService::getConnectionID(DWLobbyService *this)
{
  unsigned __int64 ConnectionID; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLobbyService *v7; 
  bdLoginResult *v8; 
  bdLobbyService *LobbyService; 
  DWLogin *v10; 
  bdLoginResult *v11; 
  bdRemoteTaskManager *TaskManager; 
  DWLobbyServiceHandle result; 

  ConnectionID = -1i64;
  DWLobbyService::getLobbyService(this, &result);
  if ( this->isReady(this) )
  {
    m_lobbyService = result.m_lobbyService;
    m_loginService = result.m_lobbyService->m_loginService;
    if ( m_loginService )
    {
      v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
      if ( bdLoginResult::getLobbyService(v5) )
      {
        v6 = m_lobbyService->m_loginService;
        v7 = NULL;
        if ( v6 )
        {
          v8 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v8);
        }
        else
        {
          LobbyService = NULL;
        }
        if ( bdLobbyService::getTaskManager(LobbyService) )
        {
          v10 = m_lobbyService->m_loginService;
          if ( v10 )
          {
            v11 = (bdLoginResult *)DWLogin::getResult(v10);
            v7 = bdLoginResult::getLobbyService(v11);
          }
          TaskManager = bdLobbyService::getTaskManager(v7);
          ConnectionID = bdRemoteTaskManager::getConnectionID(TaskManager);
        }
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return ConnectionID;
}

/*
==============
DWPlatformInfo::getConsoleId
==============
*/
unsigned int DWPlatformInfo::getConsoleId(DWPlatformInfo *this, unsigned __int8 *id, unsigned int size)
{
  return bdPlatformInfo::getConsoleId(id, size);
}

/*
==============
DWLobbyService::getContentStreaming
==============
*/
bdLobbyService *DWLobbyService::getContentStreaming(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getContentStreaming(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWStorage::getContext
==============
*/
DWStorageContext *DWStorage::getContext(DWStorage *this, const char *context)
{
  ntl::fixed_vector<DWStorageContext,5,0> *p_m_contexts; 
  unsigned __int64 m_size; 
  DWStorageContext *p_m_unknownContext; 
  ntl::fixed_vector<DWStorageContext,5,0> *v6; 
  ntl::fixed_vector<DWStorageContext,5,0> *v7; 
  int v8; 
  int v9; 
  ntl::fixed_vector<DWStorageContext,5,0> *v10; 

  p_m_contexts = &this->m_contexts;
  m_size = this->m_contexts.m_size;
  p_m_unknownContext = &this->m_unknownContext;
  v6 = &this->m_contexts;
  if ( &this->m_contexts != (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)&this->m_contexts + 40 * m_size) )
  {
    while ( 1 )
    {
      if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
        __debugbreak();
      v7 = v6;
      do
      {
        v8 = (unsigned __int8)v7->m_data.m_buffer[context - (const char *)v6];
        v9 = (unsigned __int8)v7->m_data.m_buffer[0] - v8;
        if ( v9 )
          break;
        v7 = (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)v7 + 1);
      }
      while ( v8 );
      if ( !v9 )
        break;
      m_size = p_m_contexts->m_size;
      v6 = (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)v6 + 40);
      if ( v6 == (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)p_m_contexts + 40 * m_size) )
        goto LABEL_12;
    }
    *(__m256i *)p_m_unknownContext->m_context.m_string = *(__m256i *)v6->m_data.m_buffer;
    *(double *)&p_m_unknownContext->m_inUse = *(double *)&v6->m_data.m_buffer[32];
    m_size = p_m_contexts->m_size;
  }
LABEL_12:
  v10 = (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)p_m_contexts + 40 * m_size);
  if ( v6 == v10 )
  {
    v6 = p_m_contexts;
    if ( p_m_contexts != v10 )
    {
      while ( v6->m_data.m_buffer[32] )
      {
        v6 = (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)v6 + 40);
        if ( v6 == v10 )
          goto LABEL_21;
      }
      if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
        __debugbreak();
      ntl::internal::string_assign(v6->m_data.m_buffer, 0x10ui64, context);
      *(__m256i *)p_m_unknownContext->m_context.m_string = *(__m256i *)v6->m_data.m_buffer;
      *(double *)&p_m_unknownContext->m_inUse = *(double *)&v6->m_data.m_buffer[32];
    }
  }
LABEL_21:
  if ( v6 == (ntl::fixed_vector<DWStorageContext,5,0> *)((char *)p_m_contexts + 40 * p_m_contexts->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 2078, ASSERT_TYPE_ASSERT, "(it != m_contexts.end())", (const char *)&queryFormat, "it != m_contexts.end()") )
    __debugbreak();
  return p_m_unknownContext;
}

/*
==============
DWLobbyService::getCounter
==============
*/
bdLobbyService *DWLobbyService::getCounter(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getCounter(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWCounter::getCounterTotals
==============
*/
bdReference<bdRemoteTask> *DWCounter::getCounterTotals(DWCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *results, const unsigned int numCounterIDs)
{
  DWWrappers *m_owningWrapper; 
  bdCounter *Counter; 
  const bdReference<bdRemoteTask> *CounterTotals; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCounter(&this->m_owningWrapper->m_lobbyService) )
      {
        Counter = DWLobbyService::getCounter(&this->m_owningWrapper->m_lobbyService);
        CounterTotals = bdCounter::getCounterTotals(Counter, &resulta, results, numCounterIDs);
        bdReference<bdRemoteTask>::operator=(result, CounterTotals);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getCrossPlatformIdentity
==============
*/
bdLobbyService *DWLobbyService::getCrossPlatformIdentity(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getCrossPlatformIdentity(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWCrossPlatformIdentity::getCrossPlatformUserIDs
==============
*/
bdReference<bdRemoteTask> *DWCrossPlatformIdentity::getCrossPlatformUserIDs(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserIDsRequest *request, bdGetCrossPlatformUserIDsResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *CrossPlatformUserIDs; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
      {
        CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
        CrossPlatformUserIDs = bdCrossPlatformIdentity::getCrossPlatformUserIDs(CrossPlatformIdentity, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, CrossPlatformUserIDs);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWCrossPlatformIdentity::getCrossPlatformUsernames
==============
*/
bdReference<bdRemoteTask> *DWCrossPlatformIdentity::getCrossPlatformUsernames(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUsernamesRequest *request, bdGetCrossPlatformUsernamesResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *CrossPlatformUsernames; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
      {
        CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
        CrossPlatformUsernames = bdCrossPlatformIdentity::getCrossPlatformUsernames(CrossPlatformIdentity, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, CrossPlatformUsernames);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getDML
==============
*/
bdLobbyService *DWLobbyService::getDML(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getDML(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWAsyncMatchMaking::getDataCenterPreferences
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getDataCenterPreferences(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, unsigned int numUserIDs, bdDataCenterPreferences *results)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *DataCenterPreferences; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        DataCenterPreferences = bdAsyncMatchMaking::getDataCenterPreferences(AsyncMatchmaking, &resulta, userIDs, numUserIDs, results);
        bdReference<bdRemoteTask>::operator=(result, DataCenterPreferences);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelDispatch::getDispatchInstance
==============
*/
bdDataChannelDispatch *DWDataChannelDispatch::getDispatchInstance(DWDataChannelDispatch *this, const char *category)
{
  unsigned int i; 
  __int64 v5; 
  DWDataChannelDispatch::DataChannelDispatchInstances *v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  for ( i = 0; i < 2; ++i )
  {
    v5 = 0x7FFFFFFFi64;
    v6 = &this->m_dispatchInstances[i];
    if ( !category && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( (DWDataChannelDispatch *)((char *)this + 48 * (int)i) == (DWDataChannelDispatch *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(category - (const char *)v6);
    while ( 1 )
    {
      v8 = v6->m_category[(_QWORD)v7];
      v9 = v5;
      v10 = v6->m_category[0];
      v6 = (DWDataChannelDispatch::DataChannelDispatchInstances *)((char *)v6 + 1);
      --v5;
      if ( !v9 )
        return this->m_dispatchInstances[i].m_dispatch;
      if ( v8 != v10 )
        break;
      if ( !v8 )
        return this->m_dispatchInstances[i].m_dispatch;
    }
  }
  return 0i64;
}

/*
==============
DWLogin::getEnvironment
==============
*/
char DWLogin::getEnvironment(DWLogin *this, bdEnvironment *environment)
{
  bdLogin *m_login; 
  bdLoginResult *v5; 

  m_login = this->m_login;
  if ( !m_login || !bdLogin::succeeded(m_login) )
    return 0;
  v5 = (bdLoginResult *)bdLogin::getResult(this->m_login);
  *environment = bdLoginResult::getEnvironment(v5);
  return 1;
}

/*
==============
DWDataChannelDispatch::getError
==============
*/
__int64 DWDataChannelDispatch::getError(DWDataChannelDispatch *this, const char *category)
{
  bdDataChannelDispatch *DispatchInstance; 

  DispatchInstance = DWDataChannelDispatch::getDispatchInstance(this, category);
  if ( DispatchInstance )
    bdDataChannelDispatch::getError(DispatchInstance);
  return 0xFFFFFFFFi64;
}

/*
==============
DWDataChannelDispatch::getErrorString
==============
*/
const char *DWDataChannelDispatch::getErrorString(DWDataChannelDispatch *this, const char *category)
{
  bdDataChannelDispatch *DispatchInstance; 

  DispatchInstance = DWDataChannelDispatch::getDispatchInstance(this, category);
  if ( DispatchInstance )
    return bdDataChannelDispatch::getErrorString(DispatchInstance);
  else
    return "UNINITIALIZED";
}

/*
==============
DWUmbrella::getErrors
==============
*/
bdSingleIdentityError *DWUmbrella::getErrors(DWUmbrella *this)
{
  bdUmbrella *Umbrella; 

  if ( this->m_owningWrapper && this->isReady(this) && (Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService)) != NULL )
    return Umbrella->m_errors;
  else
    return 0i64;
}

/*
==============
DWUno::getErrors
==============
*/
bdSingleIdentityError *DWUno::getErrors(DWUno *this)
{
  bdUno *Uno; 

  if ( this->m_owningWrapper && this->isReady(this) && (Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService)) != NULL )
    return Uno->m_errors;
  else
    return 0i64;
}

/*
==============
DWLobbyService::getEventLog
==============
*/
bdLobbyService *DWLobbyService::getEventLog(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getEventLog(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLogin::getFailure
==============
*/
const bdLoginFailure *DWLogin::getFailure(DWLogin *this)
{
  if ( !this->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6526, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  return bdLogin::getFailure(this->m_login);
}

/*
==============
DWLobbyService::getFeatureBan
==============
*/
bdLobbyService *DWLobbyService::getFeatureBan(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getFeatureBan(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWStorageContext::getFile
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::getFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData, const bdUserAccountID *ownerUID)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *File; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        File = bdStorage::getFile(Storage, &resulta, fileName, fileData, ownerUID);
        bdReference<bdRemoteTask>::operator=(result, File);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::getFileMetaDataByID
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::getFileMetaDataByID(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int numFileIDs, const unsigned __int64 *fileIDs, bdFileMetaData *fileDescriptor)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *FileMetaDataByID; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        FileMetaDataByID = bdContentStreaming::getFileMetaDataByID(ContentStreaming, &resulta, numFileIDs, fileIDs, fileDescriptor);
        bdReference<bdRemoteTask>::operator=(result, FileMetaDataByID);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::getFiles
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::getFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *const *ownerIDs, const char *const *fileNames, bdFileQueryResult *const files, const unsigned int count)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v12 = bdStorage::getFiles(Storage, &resulta, ownerIDs, fileNames, files, count);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWFriends::getFriends
==============
*/
bdReference<bdRemoteTask> *DWFriends::getFriends(DWFriends *this, bdReference<bdRemoteTask> *result, bdGetFriendsResponse *response, const char *pageToken)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformFriends *Friends; 
  const bdReference<bdRemoteTask> *v10; 
  unsigned __int32 v11; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdGetFriendsRequest request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService) )
  {
    bdGetFriendsRequest::bdGetFriendsRequest(&request);
    bdGetFriendsRequest::setContext(&request, "cod-shared");
    bdGetFriendsRequest::setPageToken(&request, pageToken);
    Friends = DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService);
    v10 = bdCrossPlatformFriends::getFriends(Friends, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v10);
    if ( resulta.m_ptr )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v11 == 1 )
      {
        if ( resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v11);
      }
    }
    bdGetFriendsRequest::~bdGetFriendsRequest(&request);
  }
  return result;
}

/*
==============
DWLobbyService::getFriends
==============
*/
bdLobbyService *DWLobbyService::getFriends(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getCrossPlatformFriends(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getGroup
==============
*/
bdLobbyService *DWLobbyService::getGroup(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getGroup(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWGroup::getGroupCounts
==============
*/
bdReference<bdRemoteTask> *DWGroup::getGroupCounts(DWGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numGroupIDs, bdGroupCount *results, const unsigned int numEntries)
{
  DWWrappers *m_owningWrapper; 
  bdGroup *Group; 
  const bdReference<bdRemoteTask> *GroupCounts; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getGroup(&this->m_owningWrapper->m_lobbyService) )
      {
        Group = DWLobbyService::getGroup(&this->m_owningWrapper->m_lobbyService);
        GroupCounts = bdGroup::getGroupCounts(Group, &resulta, groupIDs, numGroupIDs, results, numEntries);
        bdReference<bdRemoteTask>::operator=(result, GroupCounts);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWClans::getGroupFile
==============
*/
bdReference<bdRemoteTask> *DWClans::getGroupFile(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const char *filename, unsigned __int8 *fileBuffer, const unsigned int bufferSize, bdClansGetGroupFileResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *GroupFile; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  bdClansGroupIdentifier group; 
  bdClansGroupFile file; 
  bdClansGetGroupFileRequest request; 

  v16 = -2i64;
  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&group, 1u, id, 0, 0i64);
    bdClansGroupFile::bdClansGroupFile(&file);
    bdClansGroupFile::setFileData(&file, fileBuffer, bufferSize);
    bdClansGroupFile::setFileName(&file, filename);
    bdClansGroupFile::setGroup(&file, &group);
    bdClansGetGroupFileRequest::bdClansGetGroupFileRequest(&request, &file);
    bdClansGetGroupFileResponse::setFile(response, &file);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    GroupFile = bdMW4Service::getGroupFile(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, GroupFile);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)&request.m_file[64]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&request.m_file[16]);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_file[48]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_file);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_file[352]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_file[368]);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>(&file.m_fileName);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)file.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&file.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&file.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&file.m_updatedTimestamp + 1));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&group.m_rootID + 1));
  }
  return result;
}

/*
==============
DWClans::getIncomingClanInvites
==============
*/
bdReference<bdRemoteTask> *DWClans::getIncomingClanInvites(DWClans *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userId, bdClansGetMembershipProposalsByUserResponse *response)
{
  DWWrappers *m_owningWrapper; 
  const bdUserAccountID *v9; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *MembershipProposalsByUser; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdUserAccountID v16; 
  const bdUserAccountID *v17; 
  bdClansGetMembershipProposalsByUserRequest request; 

  v14 = -2i64;
  v15 = result;
  v17 = userId;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGetMembershipProposalsByUserRequest::bdClansGetMembershipProposalsByUserRequest(&request);
    bdUserAccountID::bdUserAccountID(&v16, userId);
    bdClansGetMembershipProposalsByUserRequest::setTargetUser(&request, v9);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    MembershipProposalsByUser = bdMW4Service::getMembershipProposalsByUser(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, MembershipProposalsByUser);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructFixedSizeString<127>::~bdStructFixedSizeString<127>(&request.m_pageToken);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_targetUser.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_targetUser.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_targetUser.m_value._bytes_48);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&request.m_proposingUser[64]);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&request.m_proposingUser[48]);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_proposingUser[64]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap152[6]);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userId->gap38);
  return result;
}

/*
==============
DWTeams::getIncomingProposals
==============
*/
bdReference<bdRemoteTask> *DWTeams::getIncomingProposals(DWTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *incomingProposals, const unsigned int maxNumProposals)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  bdUserAccountID v13; 
  bdReference<bdRemoteTask> v14; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v13);
        v11 = bdTeams::getIncomingProposals(Teams, &v14, incomingProposals, maxNumProposals, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWRichPresenceService::getInfo
==============
*/
bdReference<bdRemoteTask> *DWRichPresenceService::getInfo(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userIDs, const int numUsers, bdGetUsersPresenceResponseV3 *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformPresence *RichPresence; 
  const bdReference<bdRemoteTask> *UsersPresenceV3; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdGetUsersPresenceRequestV3 request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService) )
  {
    bdGetUsersPresenceRequestV3::bdGetUsersPresenceRequestV3(&request);
    bdGetUsersPresenceRequestV3::setContext(&request, "cod-shared");
    bdGetUsersPresenceRequestV3::setUsers(&request, numUsers, userIDs);
    RichPresence = DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService);
    UsersPresenceV3 = bdCrossPlatformPresence::getUsersPresenceV3(RichPresence, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, UsersPresenceV3);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    `eh vector destructor iterator'(request.m_users, 0x48ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
    bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&request.m_context);
    bdRESTRequest::~bdRESTRequest(&request);
  }
  return result;
}

/*
==============
DWMarketplace::getInventoryItemInfo
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::getInventoryItemInfo(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdGetInventoryItemInfoRequest *request, bdGetInventoryItemInfoResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *InventoryItemInfo; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        InventoryItemInfo = bdMarketplace::getInventoryItemInfo(Marketplace, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, InventoryItemInfo);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWPublisherVariables::getIterator
==============
*/
bool DWPublisherVariables::getIterator(DWPublisherVariables *this, const char *const nameSpace, bdPublisherVariablesIterator *iterator)
{
  DWWrappers *m_owningWrapper; 
  bdPublisherVariables *PublisherVariables; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  PublisherVariables = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
  return bdPublisherVariables::getIterator(PublisherVariables, nameSpace, iterator) == BD_AVAILABLE;
}

/*
==============
DWLobbyService::getKeyArchive
==============
*/
bdLobbyService *DWLobbyService::getKeyArchive(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getKeyArchive(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWPublisherVariables::getKeyValueByIterator
==============
*/
bool DWPublisherVariables::getKeyValueByIterator(DWPublisherVariables *this, const bdPublisherVariablesIterator *iterator, char *const key, unsigned int keySize, char *const value, unsigned int valueSize)
{
  DWWrappers *m_owningWrapper; 
  bdPublisherVariables *PublisherVariables; 
  bdPublisherVariablesIterator v13; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  PublisherVariables = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
  v13 = *iterator;
  return bdPublisherVariables::getKeyValueByIterator(PublisherVariables, &v13, key, keySize, value, valueSize) == BD_AVAILABLE;
}

/*
==============
DWContentStreaming::getLastHTTPError
==============
*/
int DWContentStreaming::getLastHTTPError(DWContentStreaming *this)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
  return bdContentStreamingBase::getLastHTTPError(ContentStreaming);
}

/*
==============
DWPooledStorage::getLastHTTPError
==============
*/
int DWPooledStorage::getLastHTTPError(DWPooledStorage *this)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
  return bdContentStreamingBase::getLastHTTPError(PooledStorage);
}

/*
==============
DWAsyncMatchMaking::getLobbyDocuments
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getLobbyDocuments(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdLobbyDocuments *lobbyDocs)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *LobbyDocuments; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        LobbyDocuments = bdAsyncMatchMaking::getLobbyDocuments(AsyncMatchmaking, &resulta, lobbyID, lobbyDocs);
        bdReference<bdRemoteTask>::operator=(result, LobbyDocuments);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getLobbyService
==============
*/
DWLobbyServiceHandle *DWLobbyService::getLobbyService(DWLobbyService *this, DWLobbyServiceHandle *result)
{
  volatile int *p_m_ownerThread; 
  signed __int32 CurrentThreadContext; 
  signed __int32 v5; 

  result->m_lobbyService = this;
  p_m_ownerThread = &this->m_ownerThread;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)p_m_ownerThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_ownerThread) )
    __debugbreak();
  v5 = _InterlockedCompareExchange(p_m_ownerThread, CurrentThreadContext, 0);
  if ( v5 && v5 != CurrentThreadContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 174, ASSERT_TYPE_ASSERT, "(owningContext == 0 || owningContext == threadContext)", (const char *)&queryFormat, "owningContext == 0 || owningContext == threadContext") )
    __debugbreak();
  return result;
}

/*
==============
DWLobbyService::getLobbyServiceConst
==============
*/
bdLobbyService *DWLobbyService::getLobbyServiceConst(DWLobbyService *this)
{
  DWLogin *m_loginService; 
  bdLoginResult *v2; 

  m_loginService = this->m_loginService;
  if ( !m_loginService )
    return 0i64;
  v2 = (bdLoginResult *)DWLogin::getResult(m_loginService);
  return bdLoginResult::getLobbyService(v2);
}

/*
==============
DWLogin::getLoginStatusCode
==============
*/
bdLoginStatus::bdLoginStatusCode DWLogin::getLoginStatusCode(DWLogin *this)
{
  bdLoginStatus *Status; 

  if ( !this->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6567, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  Status = (bdLoginStatus *)bdLogin::getStatus(this->m_login);
  return bdLoginStatus::getLoginStatusCode(Status);
}

/*
==============
DWLobbyService::getLootGen
==============
*/
bdLobbyService *DWLobbyService::getLootGen(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getLootGeneration(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getMLG
==============
*/
bdLobbyService *DWLobbyService::getMLG(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMLG(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getMail
==============
*/
bdLobbyService *DWLobbyService::getMail(DWLobbyService *this, const char *context)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v7; 
  DWLogin *v8; 
  bdLoginResult *v9; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v7 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v7) )
    {
      if ( this->isReady(this) )
      {
        v8 = m_lobbyService->m_loginService;
        if ( v8 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v8);
          LobbyService = bdLoginResult::getLobbyService(v9);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMail(LobbyService, context);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWMail::getMail
==============
*/
bdReference<bdRemoteTask> *DWMail::getMail(DWMail *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *mailIDs, const unsigned int numMailIDs, bdMailBody *mails, const bool deleteOnRead, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdMail *Mail; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Mail = DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v13 = bdMail::getMail(Mail, &resulta, mailIDs, numMailIDs, mails, deleteOnRead, userID);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMail::getMailInfo
==============
*/
bdReference<bdRemoteTask> *DWMail::getMailInfo(DWMail *this, bdReference<bdRemoteTask> *result, bdMailInfo *mailInfos, const unsigned int startIndex, const unsigned int numMails, const bool newestFirst, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdMail *Mail; 
  const bdReference<bdRemoteTask> *MailInfo; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Mail = DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        MailInfo = bdMail::getMailInfo(Mail, &resulta, mailInfos, startIndex, numMails, newestFirst, userID);
        bdReference<bdRemoteTask>::operator=(result, MailInfo);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getMarketingComms
==============
*/
bdLobbyService *DWLobbyService::getMarketingComms(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMarketingComms(LobbyService, (const char *)&queryFormat.fmt + 3);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getMarketplace
==============
*/
bdLobbyService *DWLobbyService::getMarketplace(DWLobbyService *this)
{
  bdLobbyService *Marketplace; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  bdLobbyService *LobbyService; 
  bdLoginResult *v9; 
  bdAuthInfo *AuthInfo; 
  const char *v11; 
  DWLobbyServiceHandle result; 

  Marketplace = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
          v6 = m_lobbyService->m_loginService;
        }
        else
        {
          LobbyService = NULL;
        }
        if ( v6 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v6);
          Marketplace = bdLoginResult::getLobbyService(v9);
        }
        AuthInfo = bdLobbyService::getAuthInfo(Marketplace);
        v11 = j_va("%u", AuthInfo->m_titleID);
        Marketplace = (bdLobbyService *)bdLobbyService::getMarketplace(LobbyService, v11);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return Marketplace;
}

/*
==============
DWLobbyService::getMatchMaking
==============
*/
bdLobbyService *DWLobbyService::getMatchMaking(DWLobbyService *this, const char *context)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v6; 
  DWLogin *v7; 
  bdLoginResult *v8; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v6 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v6) )
    {
      if ( this->isReady(this) )
      {
        v7 = m_lobbyService->m_loginService;
        if ( v7 )
        {
          v8 = (bdLoginResult *)DWLogin::getResult(v7);
          LobbyService = bdLoginResult::getLobbyService(v8);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMatchMaking(LobbyService, (const char *)&queryFormat.fmt + 3);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWAsyncMatchMaking::getMatchMakingPlayerToken
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getMatchMakingPlayerToken(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdUInt64Result *playerToken)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *MatchMakingPlayerToken; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        MatchMakingPlayerToken = bdAsyncMatchMaking::getMatchMakingPlayerToken(AsyncMatchmaking, &resulta, playerToken);
        bdReference<bdRemoteTask>::operator=(result, MatchMakingPlayerToken);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::getMatchMakingStatus
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getMatchMakingStatus(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *searchParamsList, unsigned int paramsLength, bdStringResult *matchmakingStatus)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v11 = bdAsyncMatchMaking::getMatchMakingStatus(AsyncMatchmaking, &resulta, searchParamsList, paramsLength, matchmakingStatus);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getMatchScheduler
==============
*/
bdLobbyService *DWLobbyService::getMatchScheduler(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMatchScheduler(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWTeams::getMembers
==============
*/
bdReference<bdRemoteTask> *DWTeams::getMembers(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *Members; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        Members = bdTeams::getMembers(Teams, &resulta, teamID, teamMembers, maxNumTeamMembers, offset);
        bdReference<bdRemoteTask>::operator=(result, Members);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::getMembers
==============
*/
bdReference<bdRemoteTask> *DWTeams::getMembers(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *MembersV2; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        MembersV2 = bdTeams::getMembersV2(Teams, &resulta, teamID, teamMembers, maxNumTeamMembers, offset, getOnlineFirst);
        bdReference<bdRemoteTask>::operator=(result, MembersV2);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::getMemberships
==============
*/
bdReference<bdRemoteTask> *DWTeams::getMemberships(DWTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfo *teamInfos, const unsigned int maxNumTeams)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *Memberships; 
  bdUserAccountID v13; 
  bdReference<bdRemoteTask> v14; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v13);
        Memberships = bdTeams::getMemberships(Teams, &v14, teamInfos, maxNumTeams, 0, v10);
        bdReference<bdRemoteTask>::operator=(result, Memberships);
        if ( v14.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWClans::getMembershipsByUsers
==============
*/
bdReference<bdRemoteTask> *DWClans::getMembershipsByUsers(DWClans *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userIds, const unsigned int numIds, bdClansGetMembershipsByUsersResponse *response)
{
  __int64 v5; 
  bdReference<bdRemoteTask> *v6; 
  __int64 v8; 
  DWWrappers *m_owningWrapper; 
  bdUserAccountID *m_ptr; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  bool v16; 
  bdRemoteTask *v17; 
  bdUserAccountID *v18; 
  signed __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  bdUserAccountID *v25; 
  bdUserAccountID *v26; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *MembershipsByUsers; 
  __int64 v29; 
  char *v30; 
  unsigned int v32; 
  bdReference<bdRemoteTask> resulta; 
  bdRemoteTask *v34; 
  int v35; 
  unsigned int v36; 
  int v37; 
  unsigned int v38; 
  bdArray<bdUserAccountID> v39; 
  const bdUserAccountID *v40; 
  bdReference<bdRemoteTask> *v41; 
  DWClans *v42; 
  bdClansGetMembershipsByUsersResponse *v43; 
  bdUserAccountID *v44; 
  __int64 v45; 
  bdReference<bdRemoteTask> *v46; 
  bdUserAccountID *v47; 
  bdClansGetMembershipsByUsersRequest request; 

  v45 = -2i64;
  v5 = numIds;
  v38 = numIds;
  v40 = userIds;
  v6 = result;
  v41 = result;
  v42 = this;
  v46 = result;
  v43 = response;
  v8 = 0i64;
  result->m_ptr = NULL;
  v37 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    m_ptr = NULL;
    v34 = NULL;
    LODWORD(v11) = v5;
    v35 = v5;
    v12 = 0i64;
    v36 = 0;
    if ( (_DWORD)v5 )
    {
      m_ptr = (bdUserAccountID *)bdMemory::allocate(72 * v5);
      v34 = (bdRemoteTask *)m_ptr;
    }
    v13 = 0;
    v32 = 0;
    if ( (_DWORD)v5 )
    {
      v14 = 0;
      while ( v14 != (_DWORD)v11 )
      {
LABEL_22:
        v25 = &m_ptr[v12];
        v39.m_data = v25;
        v44 = v25;
        if ( v25 )
          bdUserAccountID::bdUserAccountID(v25, &v40[v13]);
        v12 = (unsigned int)(v12 + 1);
        v36 = v12;
        v14 = v12;
        v32 = ++v13;
        if ( v13 >= (unsigned int)v5 )
        {
          v6 = v41;
          goto LABEL_26;
        }
      }
      v15 = v11;
      if ( !(_DWORD)v11 )
        v15 = 1;
      v16 = v15 + (_DWORD)v11 == 0;
      v11 = (unsigned int)(v15 + v11);
      resulta.m_ptr = NULL;
      if ( !v16 )
      {
        v17 = (bdRemoteTask *)bdMemory::allocate(72 * v11);
        resulta.m_ptr = v17;
        if ( !(_DWORD)v12 )
        {
LABEL_21:
          bdMemory::deallocate(m_ptr);
          m_ptr = (bdUserAccountID *)resulta.m_ptr;
          v34 = resulta.m_ptr;
          v35 = v11;
          v13 = v32;
          LODWORD(v5) = v38;
          goto LABEL_22;
        }
        v18 = (bdUserAccountID *)v17;
        v19 = (char *)m_ptr - (char *)v17;
        v20 = (unsigned int)v12;
        do
        {
          v47 = v18;
          v44 = v18;
          if ( v18 )
            bdUserAccountID::bdUserAccountID(v18, (bdUserAccountID *)((char *)v18 + v19));
          ++v18;
          --v20;
        }
        while ( v20 );
        v8 = 0i64;
      }
      if ( (_DWORD)v12 )
      {
        v21 = 0i64;
        v22 = 0i64;
        v23 = (unsigned int)v12;
        do
        {
          v24 = *(int *)(*((_QWORD *)&m_ptr[v21].__vftable + 1) + 4i64);
          (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_ptr[v21++].__vftable + v24 + 8))((__int64)&m_ptr[v22++].__vftable + v24 + 8, 0i64);
          --v23;
        }
        while ( v23 );
      }
      goto LABEL_21;
    }
LABEL_26:
    v39.m_capacity = v11;
    v39.m_size = v12;
    v26 = NULL;
    if ( (_DWORD)v11 )
    {
      v26 = (bdUserAccountID *)bdMemory::allocate(72i64 * (unsigned int)v11);
      bdArray<bdUserAccountID>::copyConstructArrayArray(&v39, v26, m_ptr, v12);
    }
    v39.m_data = v26;
    bdClansGetMembershipsByUsersRequest::bdClansGetMembershipsByUsersRequest(&request, &v39);
    Clans = DWLobbyService::getClans(&v42->m_owningWrapper->m_lobbyService);
    MembershipsByUsers = bdMW4Service::getMembershipsByUsers(Clans, &resulta, &request, v43);
    bdReference<bdRemoteTask>::operator=(v6, MembershipsByUsers);
    if ( resulta.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      m_ptr = (bdUserAccountID *)v34;
      v12 = v36;
    }
    bdArray<bdStructUserAccountID>::~bdArray<bdStructUserAccountID>((bdArray<bdStructUserAccountID> *)&request.__vftable + 1);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap36[2]);
    if ( (_DWORD)v12 )
    {
      v29 = 0i64;
      do
      {
        v30 = (char *)m_ptr + *(int *)(*((_QWORD *)&m_ptr[v8].__vftable + 1) + 4i64);
        (**(void (__fastcall ***)(__int64, _QWORD))&v30[v8 * 72 + 8])((__int64)&v30[v29 + 8], 0i64);
        v29 += 72i64;
        ++v8;
        --v12;
      }
      while ( v12 );
    }
    bdMemory::deallocate(m_ptr);
  }
  return v6;
}

/*
==============
DWTeams::getMembershipsUser
==============
*/
bdReference<bdRemoteTask> *DWTeams::getMembershipsUser(DWTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, bdTeamInfo *teamInfos, const unsigned int maxNumTeams)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v11; 
  const bdReference<bdRemoteTask> *MembershipsUser; 
  unsigned __int32 v13; 
  bdReference<bdRemoteTask> v15[4]; 
  bdUserAccountID v16; 
  const bdUserAccountID *v17; 

  v15[1].m_ptr = (bdRemoteTask *)-2i64;
  v15[2].m_ptr = (bdRemoteTask *)result;
  v17 = userID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v16, userID);
        MembershipsUser = bdTeams::getMembershipsUser(Teams, v15, v11, teamInfos, maxNumTeams, 0);
        bdReference<bdRemoteTask>::operator=(result, MembershipsUser);
        if ( v15[0].m_ptr )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)&v15[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v13 == 1 )
          {
            if ( v15[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v15[0].m_ptr->~bdReferencable)(v15[0].m_ptr, v13);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
DWLobbyService::getMessaging
==============
*/
bdLobbyService *DWLobbyService::getMessaging(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getMessaging(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWMessaging::getNotifications
==============
*/
bdReference<bdRemoteTask> *DWMessaging::getNotifications(DWMessaging *this, bdReference<bdRemoteTask> *result, bdNotification *notifications, const unsigned int startIndex, const unsigned int numNotifications)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v10 = bdMessaging::getNotifications(Messaging, &resulta, notifications, startIndex, numNotifications, 1);
      bdReference<bdRemoteTask>::operator=(result, v10);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWUmbrella::getNumErrors
==============
*/
__int64 DWUmbrella::getNumErrors(DWUmbrella *this)
{
  bdUmbrella *Umbrella; 

  if ( this->m_owningWrapper && this->isReady(this) && (Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService)) != NULL )
    return Umbrella->m_numErrors;
  else
    return 0i64;
}

/*
==============
DWUno::getNumErrors
==============
*/
__int64 DWUno::getNumErrors(DWUno *this)
{
  bdUno *Uno; 

  if ( this->m_owningWrapper && this->isReady(this) && (Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService)) != NULL )
    return Uno->m_numErrors;
  else
    return 0i64;
}

/*
==============
DWLobbyService::getObjectStore
==============
*/
bdLobbyService *DWLobbyService::getObjectStore(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWServicesAccess *Instance; 
  bdEnvironment environment; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getObjectStore(LobbyService, NULL);
        if ( !bdObjectStore::isInitialized((bdObjectStore *)LobbyService) )
        {
          Instance = DWServicesAccess::GetInstance();
          if ( !DWServicesAccess::GetEnvironment(Instance, &environment) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 581, ASSERT_TYPE_ASSERT, "(DWServicesAccess::GetInstance().GetEnvironment( environment ))", (const char *)&queryFormat, "DWServicesAccess::GetInstance().GetEnvironment( environment )", -2i64) )
            __debugbreak();
          bdObjectStore::init((bdObjectStore *)LobbyService, environment);
        }
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWClans::getOutgoingClanInvites
==============
*/
bdReference<bdRemoteTask> *DWClans::getOutgoingClanInvites(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const unsigned __int16 limit, const char *pageToken, bdClansGetMembershipProposalsByGroupResponse *response)
{
  DWWrappers *m_owningWrapper; 
  const bdClansGroupIdentifier *v11; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *MembershipProposalsByGroup; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  bdClansGroupIdentifier v18; 
  bdClansGetMembershipProposalsByGroupRequest request; 

  v16 = -2i64;
  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v18, 1u, id, 0, 0i64);
    bdClansGetMembershipProposalsByGroupRequest::bdClansGetMembershipProposalsByGroupRequest(&request, v11, limit, pageToken);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    MembershipProposalsByGroup = bdMW4Service::getMembershipProposalsByGroup(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, MembershipProposalsByGroup);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructFixedSizeString<127>::~bdStructFixedSizeString<127>(&request.m_pageToken);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gapD2[6]);
  }
  return result;
}

/*
==============
DWFriends::getPending
==============
*/
bdReference<bdRemoteTask> *DWFriends::getPending(DWFriends *this, bdReference<bdRemoteTask> *result, bdGetPendingFriendsResponse *response, const int direction)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformFriends *Friends; 
  const bdReference<bdRemoteTask> *Pending; 
  unsigned __int32 v11; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdGetPendingFriendsRequest request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService) )
  {
    bdGetPendingFriendsRequest::bdGetPendingFriendsRequest(&request);
    bdGetPendingFriendsRequest::setDirection(&request, (const bdGetPendingFriendsRequest::Direction)direction);
    bdGetPendingFriendsRequest::setContext(&request, "cod-shared");
    Friends = DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService);
    Pending = bdCrossPlatformFriends::getPending(Friends, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, Pending);
    if ( resulta.m_ptr )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v11 == 1 )
      {
        if ( resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v11);
      }
    }
    bdGetPendingFriendsRequest::~bdGetPendingFriendsRequest(&request);
  }
  return result;
}

/*
==============
DWLobbyService::getPerformance
==============
*/
bdLobbyService *DWLobbyService::getPerformance(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getService<bdPerformance>(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWMatchMaking::getPerformanceValues
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::getPerformanceValues(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *const entityIDs, const unsigned int numEntityIDs, const unsigned int gameType, bdStoredPerformanceValue *results)
{
  DWWrappers *m_owningWrapper; 
  bdPerformance *Performance; 
  const bdReference<bdRemoteTask> *PerformanceValues; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getPerformance(&m_owningWrapper->m_lobbyService) )
      {
        Performance = DWLobbyService::getPerformance(&this->m_owningWrapper->m_lobbyService);
        PerformanceValues = bdPerformance::getPerformanceValues(Performance, &resulta, entityIDs, numEntityIDs, gameType, results);
        bdReference<bdRemoteTask>::operator=(result, PerformanceValues);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWCrossPlatformIdentity::getPlatformUserIDs
==============
*/
bdReference<bdRemoteTask> *DWCrossPlatformIdentity::getPlatformUserIDs(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetPlatformUserIDsRequest *request, bdGetPlatformUserIDsResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *PlatformUserIDs; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
      {
        CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
        PlatformUserIDs = bdCrossPlatformIdentity::getPlatformUserIDs(CrossPlatformIdentity, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, PlatformUserIDs);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLootGen::getPlayerState
==============
*/
bdReference<bdRemoteTask> *DWLootGen::getPlayerState(DWLootGen *this, bdReference<bdRemoteTask> *result, const bdLootGenerationGetPlayerStateRequest *request, bdLootGenerationGetPlayerStateResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdLootGeneration *LootGen; 
  const bdReference<bdRemoteTask> *PlayerState; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getLootGen(&this->m_owningWrapper->m_lobbyService) )
      {
        LootGen = DWLobbyService::getLootGen(&this->m_owningWrapper->m_lobbyService);
        PlayerState = bdLootGeneration::getPlayerState(LootGen, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, PlayerState);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getPooledStorage
==============
*/
bdLobbyService *DWLobbyService::getPooledStorage(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getPooledStorage(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWAsyncMatchMaking::getPreferredServerDetails
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getPreferredServerDetails(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *buildName, const char *context, bdStringResult *serverDetails)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *PreferredServerDetails; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        PreferredServerDetails = bdAsyncMatchMaking::getPreferredServerDetails(AsyncMatchmaking, &resulta, buildName, context, serverDetails);
        bdReference<bdRemoteTask>::operator=(result, PreferredServerDetails);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::getPrivateMemberProfiles
==============
*/
bdReference<bdRemoteTask> *DWTeams::getPrivateMemberProfiles(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *privateMemberProfiles, const unsigned int numTeamMembers)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v11 = bdTeams::getPrivateMemberProfiles(Teams, &resulta, teamID, privateMemberProfiles, numTeamMembers);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::getPrivateProfile
==============
*/
bdReference<bdRemoteTask> *DWTeams::getPrivateProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *const privateProfile)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v10 = bdTeams::getPrivateProfile(Teams, &resulta, teamID, privateProfile);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getProfiles
==============
*/
bdLobbyService *DWLobbyService::getProfiles(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getProfiles(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWProfiles::getPublicInfos
==============
*/
bdReference<bdRemoteTask> *DWProfiles::getPublicInfos(DWProfiles *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, bdProfileInfo *publicProfiles, const unsigned int numProfiles)
{
  DWWrappers *m_owningWrapper; 
  bdProfiles *Profiles; 
  const bdReference<bdRemoteTask> *PublicInfos; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getProfiles(&this->m_owningWrapper->m_lobbyService) )
      {
        Profiles = DWLobbyService::getProfiles(&this->m_owningWrapper->m_lobbyService);
        PublicInfos = bdProfiles::getPublicInfos(Profiles, &resulta, userIDs, publicProfiles, numProfiles);
        bdReference<bdRemoteTask>::operator=(result, PublicInfos);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::getPublicProfiles
==============
*/
bdReference<bdRemoteTask> *DWTeams::getPublicProfiles(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamProfile *publicProfiles, const unsigned int numTeams)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v11 = bdTeams::getPublicProfiles(Teams, &resulta, teamIDs, publicProfiles, numTeams);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::getPublisherFile
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::getPublisherFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, bdFileData *const fileData)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *PublisherFile; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        PublisherFile = bdStorage::getPublisherFile(Storage, &resulta, fileName, fileData);
        bdReference<bdRemoteTask>::operator=(result, PublisherFile);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWObjectStore::getPublisherObject
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::getPublisherObject(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectRequest *request, bdObjectStoreGetPublisherObjectResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *PublisherObject; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        PublisherObject = bdObjectStore::getPublisherObject(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, PublisherObject);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWObjectStore::getPublisherObjectMetadatas
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::getPublisherObjectMetadatas(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectMetadatasResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *PublisherObjectMetadatas; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        PublisherObjectMetadatas = bdObjectStore::getPublisherObjectMetadatas(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, PublisherObjectMetadatas);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWObjectStore::getPublisherObjects
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::getPublisherObjects(DWObjectStore *this, bdReference<bdRemoteTask> *result, bdObjectStoreGetPublisherObjectsRequest *request, bdObjectStoreGetPublisherObjectsResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *PublisherObjects; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        PublisherObjects = bdObjectStore::getPublisherObjects(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, PublisherObjects);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWPublisherVariables::getPublisherVariable
==============
*/
bool DWPublisherVariables::getPublisherVariable(DWPublisherVariables *this, const char *const nameSpace, const char *const name, char *const value, int size)
{
  DWWrappers *m_owningWrapper; 
  bdPublisherVariables *PublisherVariables; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  PublisherVariables = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
  return bdPublisherVariables::getVariable(PublisherVariables, nameSpace, name, value, size) == BD_AVAILABLE;
}

/*
==============
DWLobbyService::getPublisherVariables
==============
*/
bdLobbyService *DWLobbyService::getPublisherVariables(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getPublisherVariables(LobbyService, (const char *)&queryFormat.fmt + 3);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getRedeemableCodeService
==============
*/
bdLobbyService *DWLobbyService::getRedeemableCodeService(DWLobbyService *this)
{
  bdLobbyService *RedeemableCodeService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  bdLobbyService *LobbyService; 
  bdLoginResult *v9; 
  bdAuthInfo *AuthInfo; 
  const char *v11; 
  DWLobbyServiceHandle result; 

  RedeemableCodeService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
          v6 = m_lobbyService->m_loginService;
        }
        else
        {
          LobbyService = NULL;
        }
        if ( v6 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v6);
          RedeemableCodeService = bdLoginResult::getLobbyService(v9);
        }
        AuthInfo = bdLobbyService::getAuthInfo(RedeemableCodeService);
        v11 = j_va("%u", AuthInfo->m_titleID);
        RedeemableCodeService = (bdLobbyService *)bdLobbyService::getRedeemableCodeService(LobbyService, v11);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return RedeemableCodeService;
}

/*
==============
DWStandaloneUmbrella::getRegion
==============
*/
const char *DWStandaloneUmbrella::getRegion(DWStandaloneUmbrella *this)
{
  DWServicesAccess *Instance; 
  const char *LoginRegion; 
  bool v3; 
  const char *result; 

  Instance = DWServicesAccess::GetInstance();
  LoginRegion = DWServicesAccess::getLoginRegion(Instance);
  v3 = I_strcmp(LoginRegion, "cn") == 0;
  result = "cn";
  if ( !v3 )
    return "global";
  return result;
}

/*
==============
DWLobbyService::getRegulations
==============
*/
bdLobbyService *DWLobbyService::getRegulations(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getRegulations(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWRegulations::getRegulations
==============
*/
bdReference<bdRemoteTask> *DWRegulations::getRegulations(DWRegulations *this, bdReference<bdRemoteTask> *result, const bdFetchRegulationsRequest *request, bdFetchRegulationsResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdRegulations *Regulations; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getRegulations(&this->m_owningWrapper->m_lobbyService) )
      {
        Regulations = DWLobbyService::getRegulations(&this->m_owningWrapper->m_lobbyService);
        v10 = bdRegulations::getRegulations(Regulations, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::getRelayClientAuthToken
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getRelayClientAuthToken(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdClientAuthTokenResult *clientAuthTokenResult)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *RelayClientAuthToken; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        RelayClientAuthToken = bdAsyncMatchMaking::getRelayClientAuthToken(AsyncMatchmaking, &resulta, clientAuthTokenResult);
        bdReference<bdRemoteTask>::operator=(result, RelayClientAuthToken);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::getRestRequestsEnabled
==============
*/
bool DWAchievementEngine::getRestRequestsEnabled(DWAchievementEngine *this)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
  return bdAchievementsEngineService::getRestRequestsEnabled(AchievementsEngineService);
}

/*
==============
DWLogin::getResult
==============
*/
const bdLoginResult *DWLogin::getResult(DWLogin *this)
{
  if ( !this->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6519, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  return bdLogin::getResult(this->m_login);
}

/*
==============
DWLobbyService::getRewards
==============
*/
bdLobbyService *DWLobbyService::getRewards(DWLobbyService *this)
{
  bdLobbyService *Rewards; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  bdLobbyService *LobbyService; 
  bdLoginResult *v9; 
  bdAuthInfo *AuthInfo; 
  const char *v11; 
  DWLobbyServiceHandle result; 

  Rewards = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
          v6 = m_lobbyService->m_loginService;
        }
        else
        {
          LobbyService = NULL;
        }
        if ( v6 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v6);
          Rewards = bdLoginResult::getLobbyService(v9);
        }
        AuthInfo = bdLobbyService::getAuthInfo(Rewards);
        v11 = j_va("%u", AuthInfo->m_titleID);
        Rewards = (bdLobbyService *)bdLobbyService::getRewards(LobbyService, v11);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return Rewards;
}

/*
==============
DWLobbyService::getRichPresence
==============
*/
bdLobbyService *DWLobbyService::getRichPresence(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getCrossPlatformPresence(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWMatchScheduler::getScheduledMatch
==============
*/
bdReference<bdRemoteTask> *DWMatchScheduler::getScheduledMatch(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned int matchID, bdScheduledMatchInfo *scheduledMatch)
{
  bdMatchScheduler *MatchScheduler; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService) )
    {
      MatchScheduler = DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService);
      v9 = bdMatchScheduler::getScheduledMatch(MatchScheduler, &resulta, matchID, scheduledMatch);
      bdReference<bdRemoteTask>::operator=(result, v9);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getServerInventory
==============
*/
bdLobbyService *DWLobbyService::getServerInventory(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getServerInventory(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWTitleUtilities::getServerTime
==============
*/
bdReference<bdRemoteTask> *DWTitleUtilities::getServerTime(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, bdTimeStamp *timeStamp)
{
  DWWrappers *m_owningWrapper; 
  bdTitleUtilities *TitleUtilities; 
  const bdReference<bdRemoteTask> *ServerTime; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService) )
      {
        TitleUtilities = DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService);
        ServerTime = bdTitleUtilities::getServerTime(TitleUtilities, &resulta, timeStamp);
        bdReference<bdRemoteTask>::operator=(result, ServerTime);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getStats
==============
*/
bdLobbyService *DWLobbyService::getStats(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getStats(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWDataChannelDispatch::getStatus
==============
*/
bdDataChannelDispatch::bdDispatchStatus DWDataChannelDispatch::getStatus(DWDataChannelDispatch *this, const char *category)
{
  bdDataChannelDispatch *DispatchInstance; 

  DispatchInstance = DWDataChannelDispatch::getDispatchInstance(this, category);
  if ( DispatchInstance )
    LODWORD(DispatchInstance) = bdDataChannelDispatch::getStatus(DispatchInstance);
  return (int)DispatchInstance;
}

/*
==============
DWLobbyService::getStatus
==============
*/
__int64 DWLobbyService::getStatus(DWLobbyService *this)
{
  DWLogin *m_loginService; 
  unsigned int v2; 
  bdLoginResult *v3; 
  bdLobbyService *LobbyService; 
  bdLobbyConnection::Status Status; 

  m_loginService = this->m_loginService;
  v2 = 0;
  if ( m_loginService )
  {
    v3 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    LobbyService = bdLoginResult::getLobbyService(v3);
    if ( LobbyService )
    {
      Status = bdLobbyService::getStatus(LobbyService);
      if ( Status )
      {
        switch ( Status )
        {
          case BD_TOO_MANY_TASKS:
            return 2i64;
          case BD_NOT_CONNECTED:
            return 4i64;
          case BD_SEND_FAILED:
            return 5i64;
          case BD_HANDLE_TASK_FAILED:
            return 6i64;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 323, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown bdLobbyConnection::Status : %d\n", Status) )
        {
          __debugbreak();
          return 0i64;
        }
      }
      else
      {
        return 1;
      }
    }
  }
  return v2;
}

/*
==============
DWLogin::getStatus
==============
*/
const bdLoginStatus *DWLogin::getStatus(DWLogin *this)
{
  if ( !this->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6512, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  return bdLogin::getStatus(this->m_login);
}

/*
==============
DWLobbyService::getStorage
==============
*/
bdLobbyService *DWLobbyService::getStorage(DWLobbyService *this, const char *context)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v7; 
  DWLogin *v8; 
  bdLoginResult *v9; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v7 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v7) )
    {
      if ( this->isReady(this) )
      {
        v8 = m_lobbyService->m_loginService;
        if ( v8 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v8);
          LobbyService = bdLoginResult::getLobbyService(v9);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getStorage(LobbyService, context);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getTags
==============
*/
bdLobbyService *DWLobbyService::getTags(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getTags(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getTeams
==============
*/
bdLobbyService *DWLobbyService::getTeams(DWLobbyService *this, const char *context)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v7; 
  DWLogin *v8; 
  bdLoginResult *v9; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v7 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v7) )
    {
      if ( this->isReady(this) )
      {
        v8 = m_lobbyService->m_loginService;
        if ( v8 )
        {
          v9 = (bdLoginResult *)DWLogin::getResult(v8);
          LobbyService = bdLoginResult::getLobbyService(v9);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getTeams(LobbyService, context);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLogin::getTitleId
==============
*/
unsigned int DWLogin::getTitleId(DWLogin *this)
{
  bdLogin *m_login; 
  bdLoginResult *v3; 

  m_login = this->m_login;
  if ( !m_login || !bdLogin::succeeded(m_login) )
    return 0;
  v3 = (bdLoginResult *)bdLogin::getResult(this->m_login);
  return bdLoginResult::getTitleID(v3);
}

/*
==============
DWLobbyService::getTitleUtilities
==============
*/
bdLobbyService *DWLobbyService::getTitleUtilities(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getTitleUtilities(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWStandaloneUmbrella::getToken
==============
*/
char *DWStandaloneUmbrella::getToken(DWStandaloneUmbrella *this)
{
  char *result; 

  result = this->m_authToken;
  if ( !this->m_hasUmbrellaToken )
    return 0i64;
  return result;
}

/*
==============
DWStandaloneUmbrella::getTokenCRC
==============
*/
__int64 DWStandaloneUmbrella::getTokenCRC(DWStandaloneUmbrella *this)
{
  return this->m_umbrellaTokenCRC32;
}

/*
==============
DWStandaloneUmbrella::getTokenExpiry
==============
*/
unsigned __int64 DWStandaloneUmbrella::getTokenExpiry(DWStandaloneUmbrella *this)
{
  return this->m_tokenExpiry;
}

/*
==============
DWAsyncMatchMaking::getTournamentState
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::getTournamentState(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *tournamentState)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAsyncMatchMaking::getTournamentState(AsyncMatchmaking, &resulta, tournamentState);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getUmbrella
==============
*/
bdLobbyService *DWLobbyService::getUmbrella(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getUmbrella(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLobbyService::getUno
==============
*/
bdLobbyService *DWLobbyService::getUno(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getUno(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWDML::getUserData
==============
*/
bdReference<bdRemoteTask> *DWDML::getUserData(DWDML *this, bdReference<bdRemoteTask> *result, bdDMLInfo *info)
{
  DWWrappers *m_owningWrapper; 
  bdDML *DML; 
  const bdReference<bdRemoteTask> *UserData; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getDML(&this->m_owningWrapper->m_lobbyService) )
      {
        DML = DWLobbyService::getDML(&this->m_owningWrapper->m_lobbyService);
        UserData = bdDML::getUserData(DML, &resulta, info);
        bdReference<bdRemoteTask>::operator=(result, UserData);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWUCD::getUserDetailsByEmail
==============
*/
bdReference<bdRemoteTask> *DWUCD::getUserDetailsByEmail(DWUCD *this, bdReference<bdRemoteTask> *result, const char *const emailAddress, const char *const password)
{
  result->m_ptr = NULL;
  return result;
}

/*
==============
DWTitleUtilities::getUserIDs
==============
*/
bdReference<bdRemoteTask> *DWTitleUtilities::getUserIDs(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const *usernames, const unsigned int numUsers, bdUserInfo *userInfos)
{
  DWWrappers *m_owningWrapper; 
  bdTitleUtilities *TitleUtilities; 
  const bdReference<bdRemoteTask> *UserIDs; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService) )
      {
        TitleUtilities = DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService);
        UserIDs = bdTitleUtilities::getUserIDs(TitleUtilities, &resulta, usernames, numUsers, userInfos);
        bdReference<bdRemoteTask>::operator=(result, UserIDs);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelManagerStandard::getUserId
==============
*/
bdUserAccountID *DWDataChannelManagerStandard::getUserId(DWDataChannelManagerStandard *this, bdUserAccountID *result)
{
  bdDataChannelManagerStandardImpl *Instance; 
  unsigned __int64 userID; 

  Instance = bdSingleton<bdDataChannelManagerStandardImpl>::getInstance();
  if ( this->m_activeControllerIndex < 0 )
    userID = 0i64;
  else
    userID = bdDataChannelManagerStandardImpl::getUserId(Instance);
  bdUserAccountID::bdUserAccountID(result, &userID);
  return result;
}

/*
==============
DWLobbyService::getUserLists
==============
*/
bdLobbyService *DWLobbyService::getUserLists(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getCrossPlatformUserLists(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWTitleUtilities::getUserNames
==============
*/
bdReference<bdRemoteTask> *DWTitleUtilities::getUserNames(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, unsigned __int64 *userIDs, const unsigned int numUsers, bdUserInfo *userInfos)
{
  DWWrappers *m_owningWrapper; 
  bdTitleUtilities *TitleUtilities; 
  const bdReference<bdRemoteTask> *UserNames; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService) )
      {
        TitleUtilities = DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService);
        UserNames = bdTitleUtilities::getUserNames(TitleUtilities, &resulta, userIDs, numUsers, userInfos);
        bdReference<bdRemoteTask>::operator=(result, UserNames);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWObjectStore::getUserObjectsVectorized
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::getUserObjectsVectorized(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreGetUserObjectsVectorizedRequest *request, bdObjectStoreGetUserObjectsVectorizedResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *UserObjectsVectorized; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        UserObjectsVectorized = bdObjectStore::getUserObjectsVectorized(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, UserObjectsVectorized);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWRegulations::getUserRegulationPreference
==============
*/
bdReference<bdRemoteTask> *DWRegulations::getUserRegulationPreference(DWRegulations *this, bdReference<bdRemoteTask> *result, const bdGetUserRegulationPreferenceRequest *request, bdGetUserRegulationPreferenceResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdRegulations *Regulations; 
  const bdReference<bdRemoteTask> *UserRegulationPreference; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getRegulations(&this->m_owningWrapper->m_lobbyService) )
      {
        Regulations = DWLobbyService::getRegulations(&this->m_owningWrapper->m_lobbyService);
        UserRegulationPreference = bdRegulations::getUserRegulationPreference(Regulations, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, UserRegulationPreference);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::getUserState
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::getUserState(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdGetUserStateRequest *request, bdGetUserStateResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *UserState; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        UserState = bdAchievementsEngineService::getUserState(AchievementsEngineService, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, UserState);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::getVoteRank
==============
*/
bdLobbyService *DWLobbyService::getVoteRank(DWLobbyService *this)
{
  bdLobbyService *LobbyService; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v5; 
  DWLogin *v6; 
  bdLoginResult *v7; 
  DWLobbyServiceHandle result; 

  LobbyService = NULL;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v5 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v5) )
    {
      if ( this->isReady(this) )
      {
        v6 = m_lobbyService->m_loginService;
        if ( v6 )
        {
          v7 = (bdLoginResult *)DWLogin::getResult(v6);
          LobbyService = bdLoginResult::getLobbyService(v7);
        }
        LobbyService = (bdLobbyService *)bdLobbyService::getVoteRank(LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return LobbyService;
}

/*
==============
DWLogin::hasStarted
==============
*/
bool DWLogin::hasStarted(DWLogin *this)
{
  return this->m_login != NULL;
}

/*
==============
DWCounter::incrementCounters
==============
*/
bdReference<bdRemoteTask> *DWCounter::incrementCounters(DWCounter *this, bdReference<bdRemoteTask> *result, bdCounterValue *const counterIncrements, const unsigned int numEntries)
{
  DWWrappers *m_owningWrapper; 
  bdCounter *Counter; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCounter(&this->m_owningWrapper->m_lobbyService) )
      {
        Counter = DWLobbyService::getCounter(&this->m_owningWrapper->m_lobbyService);
        v10 = bdCounter::incrementCounters(Counter, &resulta, counterIncrements, numEntries);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWABTesting::init
==============
*/
char DWABTesting::init(DWABTesting *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWAchievementEngine::init
==============
*/
char DWAchievementEngine::init(DWAchievementEngine *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWAchievementEngineClient::init
==============
*/
char DWAchievementEngineClient::init(DWAchievementEngineClient *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWAntiCheat::init
==============
*/
char DWAntiCheat::init(DWAntiCheat *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWAsyncMatchMaking::init
==============
*/
char DWAsyncMatchMaking::init(DWAsyncMatchMaking *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWClans::init
==============
*/
char DWClans::init(DWClans *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWContentStreaming::init
==============
*/
char DWContentStreaming::init(DWContentStreaming *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  DWWrappers::registerWrapperForPump(wrapper, this);
  return 1;
}

/*
==============
DWCounter::init
==============
*/
char DWCounter::init(DWCounter *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWCrossPlatformIdentity::init
==============
*/
char DWCrossPlatformIdentity::init(DWCrossPlatformIdentity *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWDML::init
==============
*/
char DWDML::init(DWDML *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWDataChannelDispatch::init
==============
*/
char DWDataChannelDispatch::init(DWDataChannelDispatch *this)
{
  return 1;
}

/*
==============
DWDataChannelManagerStandard::init
==============
*/
char DWDataChannelManagerStandard::init(DWDataChannelManagerStandard *this)
{
  DWDataChannelManagerStandard::initDataChannelManager(this);
  return 1;
}

/*
==============
DWEventLog::init
==============
*/
char DWEventLog::init(DWEventLog *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  DWWrappers::registerWrapperForPump(wrapper, this);
  return 1;
}

/*
==============
DWFriends::init
==============
*/
char DWFriends::init(DWFriends *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWGameMetrics::init
==============
*/
char DWGameMetrics::init(DWGameMetrics *this)
{
  return 1;
}

/*
==============
DWGroup::init
==============
*/
char DWGroup::init(DWGroup *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWLobbyService::init
==============
*/
bool DWLobbyService::init(DWLobbyService *this, bdLobbyEventHandler *eventHandler, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  if ( !Live_UserIsGuest(wrapper->m_controllerIndex) )
    DWWrappers::registerWrapperForPump(wrapper, this);
  return 0;
}

/*
==============
DWLootGen::init
==============
*/
char DWLootGen::init(DWLootGen *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMLG::init
==============
*/
char DWMLG::init(DWMLG *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMail::init
==============
*/
char DWMail::init(DWMail *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMarketingComms::init
==============
*/
char DWMarketingComms::init(DWMarketingComms *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMarketplace::init
==============
*/
char DWMarketplace::init(DWMarketplace *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMatchMaking::init
==============
*/
char DWMatchMaking::init(DWMatchMaking *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMatchScheduler::init
==============
*/
char DWMatchScheduler::init(DWMatchScheduler *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWMessaging::init
==============
*/
char DWMessaging::init(DWMessaging *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWObjectStore::init
==============
*/
char DWObjectStore::init(DWObjectStore *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  DWWrappers::registerWrapperForPump(wrapper, this);
  return 1;
}

/*
==============
DWPlatformInfo::init
==============
*/
bool DWPlatformInfo::init(DWPlatformInfo *this)
{
  return 0;
}

/*
==============
DWPooledStorage::init
==============
*/
char DWPooledStorage::init(DWPooledStorage *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  DWWrappers::registerWrapperForPump(wrapper, this);
  return 1;
}

/*
==============
DWProfiles::init
==============
*/
char DWProfiles::init(DWProfiles *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWPublisherVariables::init
==============
*/
char DWPublisherVariables::init(DWPublisherVariables *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWRedeemableCodes::init
==============
*/
char DWRedeemableCodes::init(DWRedeemableCodes *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWRegulations::init
==============
*/
char DWRegulations::init(DWRegulations *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWReward::init
==============
*/
char DWReward::init(DWReward *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWRichPresenceService::init
==============
*/
char DWRichPresenceService::init(DWRichPresenceService *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWServerInventory::init
==============
*/
char DWServerInventory::init(DWServerInventory *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWStandaloneUmbrella::init
==============
*/
char DWStandaloneUmbrella::init(DWStandaloneUmbrella *this)
{
  return 1;
}

/*
==============
DWStats::init
==============
*/
char DWStats::init(DWStats *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWStorage::init
==============
*/
char DWStorage::init(DWStorage *this, DWWrappers *wrapper)
{
  __int64 v4; 
  unsigned __int64 v5; 

  v4 = 5i64;
  do
  {
    if ( this->m_contexts.m_size >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    v5 = 5 * this->m_contexts.m_size;
    this->m_contexts.m_data.m_buffer[8 * v5] = 0;
    this->m_contexts.m_data.m_buffer[8 * v5 + 32] = 0;
    ++this->m_contexts.m_size;
    *(_QWORD *)&this->m_contexts.m_data.m_buffer[8 * v5 + 24] = wrapper;
    --v4;
  }
  while ( v4 );
  return 1;
}

/*
==============
DWStorageContext::init
==============
*/
char DWStorageContext::init(DWStorageContext *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWTags::init
==============
*/
char DWTags::init(DWTags *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWTeams::init
==============
*/
char DWTeams::init(DWTeams *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWTitleUtilities::init
==============
*/
char DWTitleUtilities::init(DWTitleUtilities *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWUCD::init
==============
*/
char DWUCD::init(DWUCD *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWUmbrella::init
==============
*/
char DWUmbrella::init(DWUmbrella *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  DWWrappers::registerWrapperForPump(wrapper, this);
  memset_0(this->m_umbrellaHTTPRequestBuffer, 0, 0x2000ui64);
  return 1;
}

/*
==============
DWUno::init
==============
*/
char DWUno::init(DWUno *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  DWWrappers::registerWrapperForPump(wrapper, this);
  memset_0(this->m_unoHTTPRequestBuffer, 0, 0x2000ui64);
  return 1;
}

/*
==============
DWUserLists::init
==============
*/
char DWUserLists::init(DWUserLists *this, DWWrappers *wrapper)
{
  this->m_owningWrapper = wrapper;
  return 1;
}

/*
==============
DWLobbyService::initBandwidthTestClient
==============
*/
_BOOL8 DWLobbyService::initBandwidthTestClient(DWLobbyService *this, bdBandwidthTestClient *testClientToInit)
{
  bool v3; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v6; 
  DWLogin *v7; 
  bdLoginResult *v8; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  v3 = 0;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v6 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v6) )
    {
      if ( testClientToInit )
      {
        v7 = m_lobbyService->m_loginService;
        if ( v7 )
        {
          v8 = (bdLoginResult *)DWLogin::getResult(v7);
          LobbyService = bdLoginResult::getLobbyService(v8);
        }
        else
        {
          LobbyService = NULL;
        }
        v3 = bdBandwidthTestClient::init(testClientToInit, LobbyService);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return v3;
}

/*
==============
DWDataChannelDispatch::initCategory
==============
*/
char DWDataChannelDispatch::initCategory(DWDataChannelDispatch *this, const char *category)
{
  int v4; 
  bool *p_m_inUse; 
  unsigned int i; 
  __int64 v7; 
  DWDataChannelDispatch::DataChannelDispatchInstances *v8; 
  const char *v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  __int64 v14; 

  if ( !category && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5566, ASSERT_TYPE_ASSERT, "(category)", (const char *)&queryFormat, "category") )
    __debugbreak();
  v4 = -1;
  p_m_inUse = &this->m_dispatchInstances[0].m_inUse;
  for ( i = 0; i < 2; ++i )
  {
    v7 = 0x7FFFFFFFi64;
    v8 = &this->m_dispatchInstances[i];
    if ( !category && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( (DWDataChannelDispatch *)((char *)this + 48 * (int)i) == (DWDataChannelDispatch *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = (const char *)(category - (const char *)v8);
    while ( 1 )
    {
      v10 = v8->m_category[(_QWORD)v9];
      v11 = v7;
      v12 = v8->m_category[0];
      v8 = (DWDataChannelDispatch::DataChannelDispatchInstances *)((char *)v8 + 1);
      --v7;
      if ( !v11 )
        return 1;
      if ( v10 != v12 )
        break;
      if ( !v10 )
        return 1;
    }
    if ( v4 == -1 && !*p_m_inUse )
      v4 = i;
    p_m_inUse += 48;
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5588, ASSERT_TYPE_ASSERT, "(unsigned)( firstAvailable ) < (unsigned)( MAX_CATEGORIES )", "firstAvailable doesn't index MAX_CATEGORIES\n\t%i not in [0, %i)", v14, 2) )
      __debugbreak();
  }
  if ( v4 > -1 )
  {
    Core_strcpy(this->m_dispatchInstances[v4].m_category, 0x20ui64, category);
    this->m_dispatchInstances[v4].m_inUse = 1;
    return 1;
  }
  return 0;
}

/*
==============
DWDataChannelManagerStandard::initDataChannelManager
==============
*/
bool DWDataChannelManagerStandard::initDataChannelManager(DWDataChannelManagerStandard *this)
{
  DWServicesAccess *Instance; 
  DWStandaloneUmbrella *StandaloneUmbrella; 
  const DLogGluttonInfo *GluttonInfo; 
  const DLogGluttonInfo *v5; 
  int v6; 
  const char *LocalClientXuidString; 
  int m_controllerIndexOfUmbrellaUser; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWLogin *Login; 
  bdLoginResult *v12; 
  unsigned __int64 FirstPartyUserID; 
  const char *userAcctType; 
  const char *v15; 
  const char *ClientId; 
  const char *m_authToken; 
  DWServicesAccess *v18; 
  unsigned __int64 titleId; 
  bool result; 
  bdEnvironment environment; 
  bdDataChannelManagerStandardImpl *UnoID; 
  unsigned __int64 tokenExpiry; 
  DLogGluttonInfo info; 
  char dest[64]; 

  Instance = DWServicesAccess::GetInstance();
  StandaloneUmbrella = DWServicesAccess::GetStandaloneUmbrella(Instance);
  GluttonInfo = DLog_GetGluttonInfo();
  v5 = GluttonInfo;
  if ( GluttonInfo && !GluttonInfo->firstPartyUserId )
  {
    v6 = 0;
    while ( 1 )
    {
      LocalClientXuidString = Live_GetLocalClientXuidString(v6);
      if ( *LocalClientXuidString )
        break;
      if ( ++v6 >= 8 )
        goto LABEL_8;
    }
    memcpy_0(&info, v5, sizeof(info));
    info.firstPartyUserId = I_atoui64(LocalClientXuidString);
    info.userId = info.firstPartyUserId;
    DLog_SetGluttonInfo(&info);
  }
LABEL_8:
  if ( this->m_activeControllerIndex >= 0 )
    return 0;
  if ( !StandaloneUmbrella->m_hasUmbrellaToken )
    return 0;
  m_controllerIndexOfUmbrellaUser = StandaloneUmbrella->m_controllerIndexOfUmbrellaUser;
  v9 = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::GetEnvironment(v9, &environment) )
    return 0;
  v10 = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(v10, m_controllerIndexOfUmbrellaUser);
  v12 = (bdLoginResult *)DWLogin::getResult(Login);
  FirstPartyUserID = bdLoginResult::getFirstPartyUserID(v12);
  UnoID = (bdDataChannelManagerStandardImpl *)bdLoginResult::getUnoID(v12);
  userAcctType = bdLoginResult::getFirstPartyAccountType(v12);
  if ( !FirstPartyUserID )
    return 0;
  if ( environment == BD_ENVIRONMENT_DEV )
    goto LABEL_17;
  if ( environment == BD_ENVIRONMENT_CERT )
  {
    v15 = glutton_ingestion_point_v2_cert;
    goto LABEL_18;
  }
  if ( environment != BD_ENVIRONMENT_PROD )
  {
LABEL_17:
    v15 = glutton_ingestion_point_v2_dev;
    goto LABEL_18;
  }
  v15 = glutton_ingestion_point_v2_live;
LABEL_18:
  ClientId = DWStandaloneUmbrella::getClientId(StandaloneUmbrella, m_controllerIndexOfUmbrellaUser);
  Core_strcpy(dest, 0x40ui64, ClientId);
  m_authToken = StandaloneUmbrella->m_authToken;
  if ( !StandaloneUmbrella->m_hasUmbrellaToken )
    m_authToken = NULL;
  tokenExpiry = StandaloneUmbrella->m_tokenExpiry;
  v18 = DWServicesAccess::GetInstance();
  titleId = DWServicesAccess::GetTitleID(v18);
  memset_0(&info, 0, sizeof(info));
  info.titleId = titleId;
  info.userId = FirstPartyUserID;
  DLog_strcpy(info.client, 0x40ui64, dest);
  DLog_strcpy(info.accountType, 0x20ui64, userAcctType);
  DLog_strcpy(info.accessToken, 0x1060ui64, m_authToken);
  DLog_strcpy(info.endpoint, 0x100ui64, v15);
  info.platform = DLOG_GLUTTON_PLATFORM_XBOX_ONE;
  info.firstPartyAccountType = DLog_GetFirstPartyAccountTypeFromString(userAcctType);
  info.unoId = (unsigned __int64)UnoID;
  info.firstPartyUserId = FirstPartyUserID;
  DLog_SetGluttonInfo(&info);
  UnoID = bdSingleton<bdDataChannelManagerStandardImpl>::getInstance();
  if ( !UnoID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6201, ASSERT_TYPE_SANITY, "( dataChannelManager )", (const char *)&queryFormat, "dataChannelManager") )
    __debugbreak();
  result = bdDataChannelManagerStandardImpl::init(UnoID, v15, dest, FirstPartyUserID, m_authToken, tokenExpiry, titleId, userAcctType, NULL);
  if ( result )
  {
    this->m_activeControllerIndex = m_controllerIndexOfUmbrellaUser;
    this->m_currentUmbrellaChecksum = StandaloneUmbrella->m_umbrellaTokenCRC32;
  }
  return result;
}

/*
==============
DWUCD::initDefaultPublicKey
==============
*/
bdReference<bdRemoteTask> *DWUCD::initDefaultPublicKey(DWUCD *this, bdReference<bdRemoteTask> *result)
{
  result->m_ptr = NULL;
  return result;
}

/*
==============
DWLogin::initLogin
==============
*/
char DWLogin::initLogin(DWLogin *this, const int controllerIndex, bdPlatformUser platformUser)
{
  HSTRING v6; 
  bdLogin *v7; 
  bdLogin *v8; 
  unsigned int *TitleIds; 
  const char *GameId; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  char v13; 
  Online_Commerce *Instance; 
  Online_Commerce *v15; 
  bool v16; 
  Online_Commerce *v17; 
  bool HavePaidEntitlement; 
  const char *v19; 
  DWServicesAccess *v20; 
  const char *LoginRegion; 
  const dvar_t *v22; 
  bool enabled; 
  bdWinRTPtr *v24; 
  bdEnvironmentString *AuthURLs; 
  const char *v26; 
  bool v27; 
  const char *LocalClientName; 
  unsigned __int64 v29; 
  size_t v30; 
  IUnknown *v31; 
  __int64 v32; 
  int v33; 
  HSTRING v34; 
  int v35; 
  const char *v36; 
  unsigned int m_titleVersion; 
  char *m_authAddress; 
  char *v39; 
  __int64 v40; 
  __int64 v41; 
  char *m_lsgAddress; 
  char *v43; 
  __int64 v44; 
  char *m_loginQueueAddress; 
  char *v46; 
  bdPushMessageHandler **v47; 
  bdPushMessageHandler **v48; 
  char *fmt; 
  bdReference<bdWinRTPtr> result; 
  HSTRING string; 
  unsigned __int64 macAddr; 
  HSTRING newString; 
  unsigned __int64 platformId; 
  DWLogin *v56; 
  bdLoginConfig *v57; 
  __int64 v58; 
  bdWinRTPtr *m_ptr; 
  __int64 v60; 
  bdMACAddr v61; 
  bdLoginConfig Src; 
  bdLoginConfig v63; 
  bdLogin login; 
  char dest[8]; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  int v69; 

  v58 = -2i64;
  v56 = this;
  m_ptr = platformUser.m_user.m_ptr;
  v6 = NULL;
  if ( !this->m_login )
  {
    v7 = (bdLogin *)bdMemory::allocate(0x24068ui64);
    newString = (HSTRING)v7;
    if ( v7 )
      bdLogin::bdLogin(v7);
    else
      v8 = NULL;
    this->m_login = v8;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6337, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
      __debugbreak();
  }
  bdLoginConfig::bdLoginConfig(&Src);
  TitleIds = (unsigned int *)dwGetTitleIds();
  bdLoginConfig::setTitleIDs(&Src, TitleIds);
  Src.m_maxInitialLoginDelayMS = Live_GetLoginDelayMs(controllerIndex);
  Src.m_gameMode = 2;
  GameId = dwGetGameId();
  bdStrlcpy(Src.m_gameID, GameId, 4ui64);
  v11 = DVARBOOL_com_force_free_to_play;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    goto LABEL_28;
  v12 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v13 = 1;
    goto LABEL_29;
  }
  if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
  {
    v13 = 1;
    goto LABEL_29;
  }
  Instance = Online_Commerce::GetInstance();
  v16 = 1;
  if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, controllerIndex) != ENTITLEMENT_STATE_COMPLETE )
  {
    v15 = Online_Commerce::GetInstance();
    if ( Online_Commerce::GetPaidEntitlementTaskState(v15, controllerIndex) != ENTITLEMENT_STATE_ERROR )
      v16 = 0;
  }
  v17 = Online_Commerce::GetInstance();
  HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v17, controllerIndex);
  if ( Live_IsUserSignedInToLive(controllerIndex) && v16 && HavePaidEntitlement )
    v13 = 1;
  else
LABEL_28:
    v13 = 0;
LABEL_29:
  v19 = "free";
  if ( v13 )
    v19 = "paid";
  bdLoginConfig::setServiceLevel(&Src, v19);
  v20 = DWServicesAccess::GetInstance();
  LoginRegion = DWServicesAccess::getLoginRegion(v20);
  bdStrlcpy(Src.m_region, LoginRegion, 7ui64);
  v22 = DVARBOOL_dwlogin_create_anonymous_account;
  if ( !DVARBOOL_dwlogin_create_anonymous_account && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dwlogin_create_anonymous_account") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  enabled = v22->current.enabled;
  if ( (bdPlatformUser *)platformUser.m_user.m_ptr != &Src.m_user )
  {
    if ( Src.m_user.m_user.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&Src.m_user.m_user.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && Src.m_user.m_user.m_ptr )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))Src.m_user.m_user.m_ptr->~bdReferencable)(Src.m_user.m_user.m_ptr, 1i64);
    v24 = (bdWinRTPtr *)platformUser.m_user.m_ptr->__vftable;
    Src.m_user.m_user.m_ptr = v24;
    if ( v24 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
  }
  Src.m_environment = BD_ENVIRONMENT_DEV;
  AuthURLs = (bdEnvironmentString *)dwGetAuthURLs();
  v26 = bdEnvironmentString::get(AuthURLs, BD_ENVIRONMENT_DEV);
  bdStrlcpy(Src.m_authAddress, v26, 0x400ui64);
  v27 = enabled || com_unattendedMode->current.enabled;
  Src.m_shouldCreateAnonymousAccount = v27;
  *(_QWORD *)dest = 0i64;
  v66 = 0i64;
  v67 = 0i64;
  v68 = 0i64;
  v69 = 0;
  if ( v27 )
  {
    LocalClientName = Live_GetLocalClientName(controllerIndex);
    Core_strcpy(dest, 0x24ui64, LocalClientName);
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v29 = -1i64;
    do
      ++v29;
    while ( dest[v29] );
    v30 = 64i64;
    if ( v29 < 0x40 )
      v30 = v29;
    memcpy_0(Src.m_desiredUserName, dest, v30);
    Src.m_desiredUserName[v30] = 0;
  }
  bdPlatformUser::operator bdReference<bdWinRTPtr> const((bdPlatformUser *)platformUser.m_user.m_ptr, &result);
  v31 = bdWinRTPtr::get(result.m_ptr);
  v32 = (__int64)v31;
  if ( v31 )
    v31->AddRef(v31);
  v60 = v32;
  string = NULL;
  v33 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 120i64))(v32, &string);
  if ( v33 < 0 )
    __abi_WinRTraiseException(v33);
  v34 = string;
  if ( string )
  {
    v35 = WindowsDuplicateString_0(string, &newString);
    if ( v35 < 0 )
      __abi_WinRTraiseException(v35);
    v6 = newString;
    v34 = string;
  }
  WindowsDeleteString_0(v34);
  v57 = (bdLoginConfig *)v6;
  ConvertPlatformStringToPlatformId((Platform::String *)v6, &platformId);
  WindowsDeleteString_0(v6);
  v36 = "no";
  if ( v27 )
    v36 = "yes";
  LODWORD(fmt) = TitleIds[2];
  Com_Printf(25, "[DW] Initializing DW Login with titleIds(%u,%u,%u), platformId(%zu), createAnonymous(%s), username(%s).\n", *TitleIds, TitleIds[1], fmt, platformId, v36, dest);
  m_titleVersion = 1065;
  Src.m_titleVersion = 1065;
  v57 = &v63;
  v63.__vftable = (bdLoginConfig_vtbl *)&bdLoginConfig::`vftable';
  v63.m_environment = Src.m_environment;
  v63.m_user.m_user.m_ptr = Src.m_user.m_user.m_ptr;
  if ( Src.m_user.m_user.m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&Src.m_user.m_user.m_ptr->m_refCount, 1u);
    m_titleVersion = Src.m_titleVersion;
  }
  *(double *)v63.m_titleIDs = *(double *)Src.m_titleIDs;
  v63.m_titleIDs[2] = Src.m_titleIDs[2];
  m_authAddress = v63.m_authAddress;
  v39 = Src.m_authAddress;
  v40 = 8i64;
  v41 = 8i64;
  do
  {
    *(__m256i *)m_authAddress = *(__m256i *)v39;
    *((__m256i *)m_authAddress + 1) = *((__m256i *)v39 + 1);
    *((__m256i *)m_authAddress + 2) = *((__m256i *)v39 + 2);
    *((_OWORD *)m_authAddress + 6) = *((_OWORD *)v39 + 6);
    m_authAddress += 128;
    *((_OWORD *)m_authAddress - 1) = *((_OWORD *)v39 + 7);
    v39 += 128;
    --v41;
  }
  while ( v41 );
  v63.m_authPort = Src.m_authPort;
  m_lsgAddress = v63.m_lsgAddress;
  v43 = Src.m_lsgAddress;
  v44 = 8i64;
  do
  {
    *(__m256i *)m_lsgAddress = *(__m256i *)v43;
    *((__m256i *)m_lsgAddress + 1) = *((__m256i *)v43 + 1);
    *((__m256i *)m_lsgAddress + 2) = *((__m256i *)v43 + 2);
    *((_OWORD *)m_lsgAddress + 6) = *((_OWORD *)v43 + 6);
    m_lsgAddress += 128;
    *((_OWORD *)m_lsgAddress - 1) = *((_OWORD *)v43 + 7);
    v43 += 128;
    --v44;
  }
  while ( v44 );
  v63.m_lsgPort = Src.m_lsgPort;
  m_loginQueueAddress = v63.m_loginQueueAddress;
  v46 = Src.m_loginQueueAddress;
  do
  {
    *(__m256i *)m_loginQueueAddress = *(__m256i *)v46;
    *((__m256i *)m_loginQueueAddress + 1) = *((__m256i *)v46 + 1);
    *((__m256i *)m_loginQueueAddress + 2) = *((__m256i *)v46 + 2);
    *((_OWORD *)m_loginQueueAddress + 6) = *((_OWORD *)v46 + 6);
    m_loginQueueAddress += 128;
    *((_OWORD *)m_loginQueueAddress - 1) = *((_OWORD *)v46 + 7);
    v46 += 128;
    --v40;
  }
  while ( v40 );
  v63.m_loginQueuePort = Src.m_loginQueuePort;
  v63.m_titleVersion = m_titleVersion;
  v63.m_loginType = Src.m_loginType;
  v63.m_macAddr = Src.m_macAddr;
  v63.m_gameMode = Src.m_gameMode;
  v63.m_internalAddr = Src.m_internalAddr;
  v63.m_shouldCreateAnonymousAccount = Src.m_shouldCreateAnonymousAccount;
  memcpy_0(v63.m_thunderpantsToken, Src.m_thunderpantsToken, sizeof(v63.m_thunderpantsToken));
  v63.m_dediLogin = Src.m_dediLogin;
  v63.m_shouldPauseFlow = Src.m_shouldPauseFlow;
  *(__m256i *)v63.m_desiredUserName = *(__m256i *)Src.m_desiredUserName;
  *(__m256i *)&v63.m_desiredUserName[32] = *(__m256i *)&Src.m_desiredUserName[32];
  v63.m_desiredUserName[64] = Src.m_desiredUserName[64];
  v63.m_lobbyEventHandler = Src.m_lobbyEventHandler;
  *(_QWORD *)&v63.m_pushHandlers.m_capacity = *(_QWORD *)&Src.m_pushHandlers.m_capacity;
  v47 = NULL;
  if ( Src.m_pushHandlers.m_capacity )
  {
    v48 = (bdPushMessageHandler **)bdMemory::allocate(8i64 * Src.m_pushHandlers.m_capacity);
    v47 = v48;
    if ( Src.m_pushHandlers.m_size )
      memcpy_0(v48, Src.m_pushHandlers.m_data, 8i64 * Src.m_pushHandlers.m_size);
  }
  v63.m_pushHandlers.m_data = v47;
  *(_DWORD *)v63.m_serviceLevel = *(_DWORD *)Src.m_serviceLevel;
  v63.m_serviceLevel[4] = Src.m_serviceLevel[4];
  v63.m_maxInitialLoginDelayMS = Src.m_maxInitialLoginDelayMS;
  v63.m_clientSetQueueID = Src.m_clientSetQueueID;
  v63.m_queueID = Src.m_queueID;
  *(_DWORD *)v63.m_gameID = *(_DWORD *)Src.m_gameID;
  *(_DWORD *)v63.m_region = *(_DWORD *)Src.m_region;
  *(_WORD *)&v63.m_region[4] = *(_WORD *)&Src.m_region[4];
  v63.m_region[6] = Src.m_region[6];
  bdLoginConfig::~bdLoginConfig(&v63);
  if ( Live_GetMACAddressAsUint64(&macAddr) )
  {
    bdMACAddr::bdMACAddr(&v61);
    v61 = (bdMACAddr)macAddr;
    Src.m_macAddr = (bdMACAddr)macAddr;
  }
  Src.m_lobbyEventHandler = dwGetLobbyEventHandlerForControllerIndex(controllerIndex);
  bdLogin::bdLogin(&login, &Src);
  bdLogin::operator=(v56->m_login, &login);
  bdLogin::~bdLogin(&login);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16i64))(v32);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  bdLoginConfig::~bdLoginConfig(&Src);
  if ( platformUser.m_user.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&platformUser.m_user.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( platformUser.m_user.m_ptr->__vftable )
      (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))platformUser.m_user.m_ptr->~bdReferencable)(platformUser.m_user.m_ptr->__vftable, 1i64);
    platformUser.m_user.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
DWAsyncMatchMaking::initMatchMaking
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::initMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *userIDs, const unsigned __int64 *tokens, unsigned __int64 count, bdStringResult *initMatchMakingResponse)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *inited; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        inited = bdAsyncMatchMaking::initMatchMaking(AsyncMatchmaking, &resulta, userIDs, tokens, count, initMatchMakingResponse);
        bdReference<bdRemoteTask>::operator=(result, inited);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWUmbrella::initUmbrella
==============
*/
void DWUmbrella::initUmbrella(DWUmbrella *this)
{
  bdUmbrella *Umbrella; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v4; 
  const char *client; 
  bdEnvironment environment; 

  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService);
      if ( Umbrella )
      {
        Instance = DWServicesAccess::GetInstance();
        if ( DWServicesAccess::GetEnvironment(Instance, &environment) )
        {
          v4 = DWServicesAccess::GetInstance();
          client = DWServicesAccess::GetClientID(v4);
          bdSingleIdentityBase::init(Umbrella, this->m_umbrellaHTTPRequestBuffer, 0x1000u, this->m_umbrellaHTTPResponseBuffer, 0x1000u, environment, client, "global");
        }
      }
    }
  }
}

/*
==============
DWUno::initUno
==============
*/
void DWUno::initUno(DWUno *this)
{
  bdUno *Uno; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v4; 
  const char *client; 
  bdEnvironment environment; 

  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        Instance = DWServicesAccess::GetInstance();
        if ( DWServicesAccess::GetEnvironment(Instance, &environment) )
        {
          v4 = DWServicesAccess::GetInstance();
          client = DWServicesAccess::GetClientID(v4);
          bdSingleIdentityBase::init(Uno, this->m_unoHTTPRequestBuffer, 0x1000u, this->m_unoHTTPResponseBuffer, 0x1000u, environment, client, "global");
        }
      }
    }
  }
}

/*
==============
DWDataChannelManagerStandard::initialized
==============
*/
bool DWDataChannelManagerStandard::initialized(DWDataChannelManagerStandard *this)
{
  return this->m_activeControllerIndex >= 0;
}

/*
==============
DWAsyncMatchMaking::initiateDCQoS
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::initiateDCQoS(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, bdStringResult *dcQoSInfo)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAsyncMatchMaking::initiateDCQoS(AsyncMatchmaking, &resulta, dcQoSInfo);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::initiateDCQoS
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::initiateDCQoS(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *initiateParams, bdStringResult *dcQoSInfo)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  __int64 v10; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v10 = -1i64;
        do
          ++v10;
        while ( initiateParams[v10] );
        v11 = bdAsyncMatchMaking::initiateDCQoS(AsyncMatchmaking, &resulta, initiateParams, (int)v10 + 1, dcQoSInfo);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWClans::inviteUsers
==============
*/
bdReference<bdRemoteTask> *DWClans::inviteUsers(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *users, const unsigned int numUsers, bdClansProposeMembershipsResponse *response)
{
  __int64 v10; 
  DWWrappers *m_owningWrapper; 
  __int64 v12; 
  const bdUserAccountID *v13; 
  const bdClansGroupIdentifier *v14; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *v16; 
  bdClansUserMembershipProposal *m_data; 
  __int64 v18; 
  bdClansUserMembershipProposal_vtbl **v19; 
  __int64 m_size; 
  bdReference<bdRemoteTask> resulta; 
  bdArray<bdClansUserMembershipProposal> v23; 
  int v24; 
  bdClansProposeMembershipsResponse *v25; 
  __int64 v26; 
  bdReference<bdRemoteTask> *v27; 
  bdClansProposeMembershipsRequest request; 
  bdClansGroupIdentifier v29; 
  bdUserAccountID v30; 
  bdClansUserMembershipProposal value; 

  v26 = -2i64;
  v27 = result;
  v25 = response;
  v10 = 0i64;
  result->m_ptr = NULL;
  v24 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    v23.m_data = NULL;
    v23.m_capacity = numUsers;
    v23.m_size = 0;
    v12 = numUsers;
    if ( numUsers )
      v23.m_data = (bdClansUserMembershipProposal *)bdMemory::allocate(1224i64 * numUsers);
    if ( numUsers )
    {
      do
      {
        bdClansUserMembershipProposal::bdClansUserMembershipProposal(&value);
        bdUserAccountID::bdUserAccountID(&v30, users);
        bdClansUserMembershipProposal::setUser(&value, v13);
        bdArray<bdClansUserMembershipProposal>::pushBack(&v23, &value);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&value.m_user[128]);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&value.m_user[112]);
        bdReferencable::~bdReferencable((bdReferencable *)&value.m_user[128]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)value.gap4B8);
        ++users;
        --v12;
      }
      while ( v12 );
    }
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v29, 1u, id, 0, 0i64);
    bdClansProposeMembershipsRequest::bdClansProposeMembershipsRequest(&request, v14, &v23);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    v16 = bdMW4Service::proposeMemberships(Clans, &resulta, &request, v25);
    bdReference<bdRemoteTask>::operator=(result, v16);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdArray<bdClansUserMembershipProposal>::destruct(&request.m_proposals, request.m_proposals.m_data, request.m_proposals.m_size);
    bdMemory::deallocate(request.m_proposals.m_data);
    request.m_proposals.m_data = NULL;
    *(_QWORD *)&request.m_proposals.m_capacity = 0i64;
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)request.gap60);
    m_data = v23.m_data;
    if ( v23.m_size )
    {
      v18 = 0i64;
      v19 = &v23.m_data->__vftable + 1;
      m_size = v23.m_size;
      do
      {
        (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v19)->serialize) + v10 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v19)->serialize) + v18 + 8, 0i64);
        v18 += 1224i64;
        v10 += 1224i64;
        v19 += 153;
        --m_size;
      }
      while ( m_size );
      m_data = v23.m_data;
    }
    bdMemory::deallocate(m_data);
  }
  return result;
}

/*
==============
DWLobbyService::isDisconnected
==============
*/
bool DWLobbyService::isDisconnected(DWLobbyService *this)
{
  return DWLobbyService::getStatus(this) == DISCONNECTED;
}

/*
==============
DWLogin::isPending
==============
*/
bool DWLogin::isPending(DWLogin *this)
{
  if ( !this->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6486, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  return bdLogin::isPending(this->m_login);
}

/*
==============
BaseDWWrapper::isReady
==============
*/
bool BaseDWWrapper::isReady(BaseDWWrapper *this)
{
  DWWrappers *m_owningWrapper; 

  m_owningWrapper = this->m_owningWrapper;
  return m_owningWrapper && DWWrappers::isReady(m_owningWrapper);
}

/*
==============
DWDataChannelDispatch::isReady
==============
*/
bool DWDataChannelDispatch::isReady(DWDataChannelDispatch *this)
{
  return 0;
}

/*
==============
DWLobbyService::isReady
==============
*/
bool DWLobbyService::isReady(DWLobbyService *this)
{
  return this->m_owningWrapper && DWLobbyService::getStatus(this) == CONNECTED;
}

/*
==============
DWStandaloneUmbrella::isReady
==============
*/
char DWStandaloneUmbrella::isReady(DWStandaloneUmbrella *this)
{
  return 1;
}

/*
==============
DWEventLog::isReadyToSend
==============
*/
bool DWEventLog::isReadyToSend(DWEventLog *this)
{
  DWWrappers *m_owningWrapper; 
  bdEventLog *EventLog; 
  bool result; 

  m_owningWrapper = this->m_owningWrapper;
  result = 0;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getEventLog(&this->m_owningWrapper->m_lobbyService) )
      {
        EventLog = DWLobbyService::getEventLog(&this->m_owningWrapper->m_lobbyService);
        if ( EventLog )
        {
          if ( bdEventLog::readyToSend(EventLog) )
            return 1;
        }
      }
    }
  }
  return result;
}

/*
==============
DWUmbrella::isUmbrellaInited
==============
*/
bool DWUmbrella::isUmbrellaInited(DWUmbrella *this)
{
  bdUmbrella *Umbrella; 
  bool result; 

  result = 0;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService);
      if ( Umbrella )
      {
        if ( Umbrella->m_httpRequestBuffer && Umbrella->m_httpResponseBuffer && Umbrella->m_requestBufferSize && Umbrella->m_responseBufferSize )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
DWUno::isUnoInited
==============
*/
bool DWUno::isUnoInited(DWUno *this)
{
  bdUno *Uno; 
  bool result; 

  result = 0;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
      if ( Uno )
      {
        if ( Uno->m_httpRequestBuffer && Uno->m_httpResponseBuffer && Uno->m_requestBufferSize && Uno->m_responseBufferSize )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
DWMLG::isUserRegistered
==============
*/
bdReference<bdRemoteTask> *DWMLG::isUserRegistered(DWMLG *this, bdReference<bdRemoteTask> *result, bdBoolResult *const isRegistered)
{
  bdMLG *MLG; 
  const bdReference<bdRemoteTask> *v7; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v10; 

  v10 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMLG(&this->m_owningWrapper->m_lobbyService) )
    {
      MLG = DWLobbyService::getMLG(&this->m_owningWrapper->m_lobbyService);
      v7 = bdMLG::isUserRegistered(MLG, &resulta, isRegistered);
      bdReference<bdRemoteTask>::operator=(result, v7);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::kickFromChannel
==============
*/
bdReference<bdRemoteTask> *DWMessaging::kickFromChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const unsigned __int64 userId, const unsigned int kickReason, const bool alsoBan)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v12 = bdMessaging::kickFromChannel(Messaging, &resulta, category, channelID, userId, kickReason, alsoBan);
      bdReference<bdRemoteTask>::operator=(result, v12);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWTeams::kickMember
==============
*/
bdReference<bdRemoteTask> *DWTeams::kickMember(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  const bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = userID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, userID);
        v11 = bdTeams::kickMember(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
DWAsyncMatchMaking::leaveAllTournaments
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::leaveAllTournaments(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v6; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v9; 

  v9 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v6 = bdAsyncMatchMaking::leaveAllTournaments(AsyncMatchmaking, &resulta);
        bdReference<bdRemoteTask>::operator=(result, v6);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::leaveTeam
==============
*/
bdReference<bdRemoteTask> *DWTeams::leaveTeam(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newOwnerID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  const bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = newOwnerID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, newOwnerID);
        v11 = bdTeams::leaveTeam(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)newOwnerID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)newOwnerID->gap38);
  return result;
}

/*
==============
DWUmbrella::linkUnoWithUmbrella
==============
*/
bdReference<bdRemoteTask> *DWUmbrella::linkUnoWithUmbrella(DWUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *providerAccount, const bdUmbrellaProviderToken *providerToken, bdUmbrellaUserAccount *umbrellaUser, const char *accessToken)
{
  bdUmbrella *Umbrella; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService);
      if ( Umbrella )
      {
        v12 = bdUmbrella::authenticateProviderTokenForUser(Umbrella, &resulta, umbrellaID, providerAccount, providerToken, umbrellaUser, accessToken);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::listAllPublisherFiles
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::listAllPublisherFiles(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileMetaData, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v14 = bdContentStreaming::listAllPublisherFiles(ContentStreaming, &resulta, startDate, category, fileMetaData, maxNumResults, offset, fileName);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::listAllPublisherFiles
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::listAllPublisherFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const unsigned int startDate, bdFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v13 = bdStorage::listAllPublisherFiles(Storage, &resulta, startDate, fileList, maxNumResults, offset, fileName);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::listFilesByOwner
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::listFilesByOwner(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int64 ownerID, const unsigned int startDate, const unsigned __int16 category, bdFileMetaData *fileMetaData, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *fileName)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v18; 

  v18 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v15 = bdContentStreaming::listFilesByOwner(ContentStreaming, &resulta, ownerID, startDate, category, fileMetaData, maxNumResults, offset, fileName);
        bdReference<bdRemoteTask>::operator=(result, v15);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::listFilesByOwner
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::listFilesByOwner(DWStorageContext *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *ownerID, const unsigned int startDate, bdContextUserStorageFileInfo *fileList, const unsigned __int16 maxNumResults, const unsigned __int16 offset, const char *const fileName)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v14 = bdStorage::listFilesByOwner(Storage, &resulta, ownerID, startDate, fileList, maxNumResults, offset, fileName);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMatchScheduler::listMatchEvents
==============
*/
bdReference<bdRemoteTask> *DWMatchScheduler::listMatchEvents(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned __int64 matchID, bdMatchEventInfo *matchEventInfos, unsigned int matchEventInfosNumber)
{
  bdMatchScheduler *MatchScheduler; 
  const bdReference<bdRemoteTask> *matched; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService) )
    {
      MatchScheduler = DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService);
      matched = bdMatchScheduler::listMatchEvents(MatchScheduler, &resulta, matchID, matchEventInfos, matchEventInfosNumber);
      bdReference<bdRemoteTask>::operator=(result, matched);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWObjectStore::listPublisherObjectsByCategory
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::listPublisherObjectsByCategory(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListPublisherObjectsByCategoryRequest *request, bdObjectStoreListPublisherObjectsByCategoryResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        v10 = bdObjectStore::listPublisherObjectsByCategory(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMatchScheduler::listScheduledMatches
==============
*/
bdReference<bdRemoteTask> *DWMatchScheduler::listScheduledMatches(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, bdScheduledMatchInfo *scheduledMatches, unsigned int numMatches)
{
  bdMatchScheduler *MatchScheduler; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService) )
    {
      MatchScheduler = DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService);
      v9 = bdMatchScheduler::listScheduledMatches(MatchScheduler, &resulta, scheduledMatches, numMatches);
      bdReference<bdRemoteTask>::operator=(result, v9);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWObjectStore::listUserObjectsByCategory
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::listUserObjectsByCategory(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreListUserObjectsByCategoryRequest *request, bdObjectStoreListUserObjectsByCategoryResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        v10 = bdObjectStore::listUserObjectsByCategory(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::lobbyDisbanded
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::lobbyDisbanded(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAsyncMatchMaking::lobbyDisbanded(AsyncMatchmaking, &resulta, lobbyID);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketingComms::markMessagesRead
==============
*/
bdReference<bdRemoteTask> *DWMarketingComms::markMessagesRead(DWMarketingComms *this, bdReference<bdRemoteTask> *result, bdCommsReportMessagesViewedRequest *request, bdCommsReportMessagesViewedResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdMarketingComms *MarketingComms; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMarketingComms(&m_owningWrapper->m_lobbyService) )
      {
        MarketingComms = DWLobbyService::getMarketingComms(&this->m_owningWrapper->m_lobbyService);
        v10 = bdMarketingComms::reportMessagesViewed(MarketingComms, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketingComms::markMessagesRead
==============
*/
bdReference<bdRemoteTask> *DWMarketingComms::markMessagesRead(DWMarketingComms *this, bdReference<bdRemoteTask> *result, bdMarketingMessage *messages, unsigned int locationMessagesCount)
{
  DWWrappers *m_owningWrapper; 
  bdMarketingComms *MarketingComms; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMarketingComms(&m_owningWrapper->m_lobbyService) )
      {
        MarketingComms = DWLobbyService::getMarketingComms(&this->m_owningWrapper->m_lobbyService);
        v10 = bdMarketingComms::reportFullMessagesViewed(MarketingComms, &resulta, messages, locationMessagesCount);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLootGen::openLootDrop
==============
*/
bdReference<bdRemoteTask> *DWLootGen::openLootDrop(DWLootGen *this, bdReference<bdRemoteTask> *result, const bdLootGenerationOpenLootDropRequest *request, bdLootGenerationOpenLootDropResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdLootGeneration *LootGen; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getLootGen(&this->m_owningWrapper->m_lobbyService) )
      {
        LootGen = DWLobbyService::getLootGen(&this->m_owningWrapper->m_lobbyService);
        v10 = bdLootGeneration::openLootDrop(LootGen, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::pawnItem
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::pawnItem(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned int itemID, const bdMarketplacePawnChoice *pawnChoices, unsigned __int8 numPawnChoices)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v12 = bdMarketplace::pawnItem(Marketplace, &resulta, clientTransactionId, itemID, pawnChoices, numPawnChoices);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::pawnItems
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::pawnItems(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdMarketplaceItemToPawn *itemsToPawn, const unsigned int numItemsToPawn, bdMarketplaceAuditLogResult *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> v14; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v12 = bdMarketplace::pawnItems(Marketplace, &v14, clientTransactionId, itemsToPawn, numItemsToPawn, resulta);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( v14.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::promoteMember
==============
*/
bdReference<bdRemoteTask> *DWTeams::promoteMember(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  const bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = userID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, userID);
        v11 = bdTeams::promoteMember(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
DWTeams::promoteMemberToOwner
==============
*/
bdReference<bdRemoteTask> *DWTeams::promoteMemberToOwner(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  const bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = userID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, userID);
        v11 = bdTeams::promoteMemberToOwner(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
DWTeams::proposeMembership
==============
*/
bdReference<bdRemoteTask> *DWTeams::proposeMembership(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newUserID, const void *const attachment, const unsigned int attachmentSize)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v12; 
  const bdReference<bdRemoteTask> *v13; 
  unsigned __int32 v14; 
  bdReference<bdRemoteTask> v16[4]; 
  bdUserAccountID v17; 
  const bdUserAccountID *v18; 

  v16[1].m_ptr = (bdRemoteTask *)-2i64;
  v16[2].m_ptr = (bdRemoteTask *)result;
  v18 = newUserID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v17, newUserID);
        v13 = bdTeams::proposeMembership(Teams, v16, teamID, v12, attachment, attachmentSize);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( v16[0].m_ptr )
        {
          v14 = _InterlockedExchangeAdd((volatile signed __int32 *)&v16[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v14 == 1 )
          {
            if ( v16[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v16[0].m_ptr->~bdReferencable)(v16[0].m_ptr, v14);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)newUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)newUserID->gap38);
  return result;
}

/*
==============
DWMarketplace::psnProcessProduct
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::psnProcessProduct(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *npTitleID, const char *npAuthCode, const char *npEntitlementId, bdExchangeTransactionResultV2 *transactionResult)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v13 = bdMarketplace::psnProcessProduct(Marketplace, &resulta, transactionId, npTitleID, npAuthCode, npEntitlementId, transactionResult);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngineClient::pump
==============
*/
void DWAchievementEngineClient::pump(DWAchievementEngineClient *this)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementClient *AchievementsEngineClientService; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getAchievementsEngineClientService(&this->m_owningWrapper->m_lobbyService) )
    {
      AchievementsEngineClientService = DWLobbyService::getAchievementsEngineClientService(&this->m_owningWrapper->m_lobbyService);
      bdAchievementClient::pump(AchievementsEngineClientService);
    }
  }
}

/*
==============
DWContentStreaming::pump
==============
*/
void DWContentStreaming::pump(DWContentStreaming *this)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
    {
      ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
      bdContentStreaming::pump(ContentStreaming);
    }
  }
}

/*
==============
DWDataChannelDispatch::pump
==============
*/
void DWDataChannelDispatch::pump(DWDataChannelDispatch *this)
{
  ;
}

/*
==============
DWDataChannelManagerStandard::pump
==============
*/
void DWDataChannelManagerStandard::pump(DWDataChannelManagerStandard *this)
{
  DWServicesAccess *Instance; 
  DWStandaloneUmbrella *StandaloneUmbrella; 
  bdDataChannelManagerStandardImpl *v4; 
  unsigned int Error; 
  bdDataChannelManagerBase::bdDataChannelFailureCode FailureCode; 
  const dvar_t *v7; 
  const DLogGluttonInfo *GluttonInfo; 
  DWServicesAccess *v9; 
  DWLogin *Login; 
  DWLogin *v11; 
  bdLogin *m_login; 
  DWServicesAccess *v13; 
  bdLoginResult *LoginResult; 
  const char *DWToken; 
  char *accessToken; 
  signed __int64 v17; 
  int v18; 
  int v19; 
  const char *v20; 
  unsigned __int64 DWTokenExpiry; 
  const char *v22; 
  DLogGluttonInfo info; 

  Instance = DWServicesAccess::GetInstance();
  StandaloneUmbrella = DWServicesAccess::GetStandaloneUmbrella(Instance);
  if ( __PAIR64__(StandaloneUmbrella->m_controllerIndexOfUmbrellaUser, StandaloneUmbrella->m_umbrellaTokenCRC32) != *(_QWORD *)&this->m_currentUmbrellaChecksum )
  {
    this->m_activeControllerIndex = -1;
    goto LABEL_25;
  }
  if ( this->m_activeControllerIndex < 0 )
  {
LABEL_25:
    DWDataChannelManagerStandard::initDataChannelManager(this);
    return;
  }
  v4 = bdSingleton<bdDataChannelManagerStandardImpl>::getInstance();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6080, ASSERT_TYPE_SANITY, "( dataChannelManager )", (const char *)&queryFormat, "dataChannelManager") )
    __debugbreak();
  if ( bdDataChannelManagerBase::pump(v4) == BD_DATACHANNEL_STATUS_FAILED )
  {
    Error = bdDataChannelManagerBase::getError(v4);
    FailureCode = bdDataChannelManagerBase::getFailureCode(v4);
    Com_PrintWarning(25, "[DW] DataChannelManager failed with code %u, and errorcode %u.  Reinitting and reseting.\n", (unsigned int)FailureCode, Error);
    this->m_activeControllerIndex = -1;
    bdDataChannelManagerStandardImpl::reset(v4);
    DWDataChannelManagerStandard::initDataChannelManager(this);
  }
  else
  {
    v7 = DVARBOOL_dlog_use_bdlogin_token;
    if ( !DVARBOOL_dlog_use_bdlogin_token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_use_bdlogin_token") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      GluttonInfo = DLog_GetGluttonInfo();
      if ( GluttonInfo )
      {
        if ( this->m_activeControllerIndex >= 0 )
        {
          v9 = DWServicesAccess::GetInstance();
          Login = DWServicesAccess::GetLogin(v9, this->m_activeControllerIndex);
          v11 = Login;
          if ( Login->m_login )
          {
            if ( !DWLogin::isPending(Login) )
            {
              m_login = v11->m_login;
              if ( m_login )
              {
                if ( bdLogin::succeeded(m_login) )
                {
                  v13 = DWServicesAccess::GetInstance();
                  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v13, this->m_activeControllerIndex);
                  DWToken = bdLoginResult::getDWToken(LoginResult);
                  accessToken = GluttonInfo->accessToken;
                  v17 = DWToken - GluttonInfo->accessToken;
                  do
                  {
                    v18 = (unsigned __int8)accessToken[v17];
                    v19 = (unsigned __int8)*accessToken - v18;
                    if ( v19 )
                      break;
                    ++accessToken;
                  }
                  while ( v18 );
                  if ( v19 )
                  {
                    memcpy_0(&info, GluttonInfo, sizeof(info));
                    v20 = bdLoginResult::getDWToken(LoginResult);
                    DWTokenExpiry = bdLoginResult::getDWTokenExpiry(LoginResult);
                    Com_Printf(25, "[DW] ** DWDataChannelManagerStandard::pump() - token refresh %zu [%s]\n", DWTokenExpiry, v20);
                    v22 = bdLoginResult::getDWToken(LoginResult);
                    memcpy_0(info.accessToken, v22, 0x1000ui64);
                    DLog_SetGluttonInfo(&info);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
DWEventLog::pump
==============
*/
void DWEventLog::pump(DWEventLog *this)
{
  DWWrappers *m_owningWrapper; 
  bdEventLog *EventLog; 
  bdEventLog *v4; 
  const bdReference<bdRemoteTask> *v5; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v7; 
  bdReference<bdRemoteTask> result; 

  if ( this->isReady(this) )
  {
    if ( !this->m_filteringInitialized )
    {
      m_owningWrapper = this->m_owningWrapper;
      if ( m_owningWrapper )
      {
        if ( DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getEventLog(&this->m_owningWrapper->m_lobbyService) )
        {
          EventLog = DWLobbyService::getEventLog(&this->m_owningWrapper->m_lobbyService);
          v4 = EventLog;
          if ( !EventLog || bdEventLog::readyToSend(EventLog) )
          {
            m_ptr = this->m_filteringTask.m_ptr;
            if ( m_ptr )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
              {
                v7 = this->m_filteringTask.m_ptr;
                if ( v7 )
                  ((void (__fastcall *)(bdRemoteTask *, __int64))v7->~bdReferencable)(v7, 1i64);
              }
            }
            this->m_filteringTask.m_ptr = NULL;
            this->m_filteringInitialized = 1;
            Com_Printf(25, "[DW] Filtering initialized\n");
          }
          else if ( !this->m_filteringTask.m_ptr )
          {
            v5 = bdEventLog::initializeFiltering(v4, &result);
            bdReference<bdRemoteTask>::operator=(&this->m_filteringTask, v5);
            if ( result.m_ptr )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
              {
                if ( result.m_ptr )
                  ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
DWGameMetrics::pump
==============
*/
void DWGameMetrics::pump(DWGameMetrics *this)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  int m_controllerIndexOfUmbrellaUser; 
  int m_currentControllerIndex; 
  const dvar_t *v6; 
  bdGameMetrics *m_gameMetrics; 
  DWServicesAccess *v8; 
  DWServicesAccess *v9; 
  DWStandaloneUmbrella *StandaloneUmbrella; 
  const char *m_authToken; 
  DWServicesAccess *v12; 
  unsigned __int64 EpochTimeFromAuth_s; 
  const dvar_t *v14; 
  bdGameMetrics *v15; 
  bdDataChannelDispatch::bdDispatchStatus v16; 
  bdDataChannelDispatch::bdDispatchStatus v17; 
  bool v18; 
  const char *ErrorString; 
  bdGameMetrics *v20; 
  unsigned int m_maxSizeGameMetricsChannel; 
  bdGameMetrics *v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::GetStandaloneUmbrella(Instance)->m_hasUmbrellaToken )
  {
    v3 = DWServicesAccess::GetInstance();
    m_controllerIndexOfUmbrellaUser = DWServicesAccess::GetStandaloneUmbrella(v3)->m_controllerIndexOfUmbrellaUser;
    m_currentControllerIndex = this->m_currentControllerIndex;
    if ( m_controllerIndexOfUmbrellaUser != m_currentControllerIndex )
    {
      if ( m_currentControllerIndex != -1 && this->m_messagesEnqueued )
        bdGameMetrics::prepare(this->m_gameMetrics);
      this->m_currentControllerIndex = m_controllerIndexOfUmbrellaUser;
      m_currentControllerIndex = m_controllerIndexOfUmbrellaUser;
    }
  }
  else
  {
    m_currentControllerIndex = -1;
    this->m_currentControllerIndex = -1;
  }
  v6 = DVARINT_online_game_metrics_min_time_between_sends_s;
  if ( DVARINT_online_game_metrics_min_time_between_sends_s )
  {
    Dvar_CheckFrontendServerThread(DVARINT_online_game_metrics_min_time_between_sends_s);
    this->m_minTimeBetweenPrepareCalls_s = v6->current.unsignedInt;
    m_currentControllerIndex = this->m_currentControllerIndex;
  }
  m_gameMetrics = this->m_gameMetrics;
  if ( m_currentControllerIndex == -1 )
  {
    if ( m_gameMetrics )
    {
      ((void (__fastcall *)(bdGameMetrics *, __int64))m_gameMetrics->~bdReferencable)(m_gameMetrics, 1i64);
      this->m_gameMetrics = NULL;
    }
  }
  else
  {
    if ( m_gameMetrics )
    {
      v8 = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::GetStandaloneUmbrella(v8)->m_umbrellaTokenCRC32 != this->m_tokenCRC )
      {
        v9 = DWServicesAccess::GetInstance();
        StandaloneUmbrella = DWServicesAccess::GetStandaloneUmbrella(v9);
        m_authToken = StandaloneUmbrella->m_authToken;
        if ( !StandaloneUmbrella->m_hasUmbrellaToken )
          m_authToken = NULL;
        bdDataChannelDispatch::setAuthToken(this->m_gameMetrics, m_authToken);
        v12 = DWServicesAccess::GetInstance();
        this->m_tokenCRC = DWServicesAccess::GetStandaloneUmbrella(v12)->m_umbrellaTokenCRC32;
      }
    }
    if ( this->m_gameMetrics || (DWGameMetrics::setupGameMetrics(this), this->m_gameMetrics) )
    {
      EpochTimeFromAuth_s = Online_GetEpochTimeFromAuth_s();
      bdGameMetrics::setUpdateInterval(this->m_gameMetrics, this->m_minTimeBetweenPrepareCalls_s - 1);
      v14 = DVARBOOL_online_game_metrics_keep_alive;
      v15 = this->m_gameMetrics;
      if ( !DVARBOOL_online_game_metrics_keep_alive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_game_metrics_keep_alive") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      bdDataChannelDispatch::setKeepAlive(v15, v14->current.enabled);
      if ( this->m_messagesEnqueued && this->m_nextPrepareTime_s < EpochTimeFromAuth_s && bdDataChannelDispatch::getStatus(this->m_gameMetrics) == BD_DISPATCH_STATUS_OK )
      {
        if ( Com_FrontEnd_IsInFrontEnd() && bdGameMetrics::prepare(this->m_gameMetrics) )
          this->m_prepareInFlight = 1;
        this->m_nextPrepareTime_s = EpochTimeFromAuth_s + this->m_minTimeBetweenPrepareCalls_s;
      }
      v16 = bdDataChannelDispatch::pump(this->m_gameMetrics);
      v17 = v16;
      if ( v16 )
      {
        switch ( v16 )
        {
          case BD_DISPATCH_STATUS_OK:
            goto LABEL_51;
          case BD_DISPATCH_STATUS_PENDING:
            if ( this->m_prepareInFlight )
              return;
            v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5023, ASSERT_TYPE_ASSERT, "(m_prepareInFlight)", (const char *)&queryFormat, "m_prepareInFlight");
            goto LABEL_34;
          case BD_DISPATCH_STATUS_THROTTLED:
LABEL_51:
            if ( this->m_prepareInFlight )
            {
              m_maxSizeGameMetricsChannel = this->m_maxSizeGameMetricsChannel;
              v22 = this->m_gameMetrics;
              this->m_messagesEnqueued = 0;
              this->m_prepareInFlight = 0;
              bdGameMetrics::init(v22, m_maxSizeGameMetricsChannel);
              v23 = EpochTimeFromAuth_s + this->m_minTimeBetweenPrepareCalls_s;
              this->m_nextPrepareTime_s = v23;
              if ( v17 == BD_DISPATCH_STATUS_THROTTLED )
                this->m_nextPrepareTime_s = v23 + 30;
            }
            break;
          case BD_DISPATCH_STATUS_FAILED:
            if ( this->m_prepareInFlight )
            {
              ErrorString = bdDataChannelDispatch::getErrorString(this->m_gameMetrics);
              Com_PrintError(25, "[DW] DWGameMetrics::pump - error %s.\n", ErrorString);
              this->m_messagesEnqueued = 0;
              this->m_prepareInFlight = 0;
            }
            v20 = this->m_gameMetrics;
            if ( v20 )
              ((void (__fastcall *)(bdGameMetrics *, __int64))v20->~bdReferencable)(v20, 1i64);
            this->m_gameMetrics = NULL;
            break;
          default:
            LODWORD(v25) = v16;
            LODWORD(v24) = v16;
            v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 5048, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DWGameMetrics::pump - we expected a known value : %d (%x)\n", v24, v25);
LABEL_34:
            if ( v18 )
              __debugbreak();
            return;
        }
      }
    }
  }
}

/*
==============
DWLobbyService::pump
==============
*/
void DWLobbyService::pump(DWLobbyService *this)
{
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v4; 
  DWLogin *v5; 
  bdLoginResult *v6; 
  bdLobbyService *LobbyService; 
  DWLogin *v8; 
  bdLoginResult *v9; 
  DWLobbyServiceHandle result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 235, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v4 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v4) )
    {
      v5 = m_lobbyService->m_loginService;
      if ( v5 )
      {
        v6 = (bdLoginResult *)DWLogin::getResult(v5);
        LobbyService = bdLoginResult::getLobbyService(v6);
      }
      else
      {
        LobbyService = NULL;
      }
      bdLobbyService::pump(LobbyService);
      DWLobbyService::getStatus(this);
      v8 = m_lobbyService->m_loginService;
      if ( v8 )
      {
        v9 = (bdLoginResult *)DWLogin::getResult(v8);
        bdLoginResult::getLobbyService(v9);
      }
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
}

/*
==============
DWLogin::pump
==============
*/
void DWLogin::pump(DWLogin *this)
{
  bdLogin *m_login; 
  bool isPending; 
  bdLogin *v4; 
  bdLoginStatus *Status; 
  bdLoginStatus::bdLoginStatusCode LoginStatusCode; 
  bdLoginStatus *v7; 
  const char *LoginStatusMessage; 
  bool v9; 
  bdLogin *v10; 
  const bdLoginResult *Result; 
  const char *Username; 
  unsigned __int64 UserID; 
  const char *AccountType; 
  const char *FirstPartyUsername; 
  unsigned __int64 FirstPartyUserID; 
  const char *FirstPartyAccountType; 
  const bdLoginFailure *Failure; 
  char *m_loginFailureMessage; 
  char *v20; 
  __int64 v21; 
  bdLoginFailure::bdLoginFailureCode LoginFailureCode; 
  const char *LoginFailureMessage; 
  bdLoginResult v24; 

  m_login = this->m_login;
  if ( m_login )
  {
    if ( bdLogin::isPending(m_login) || bdLogin::succeeded(this->m_login) )
      bdLogin::pump(this->m_login);
    if ( this->m_pending )
    {
      isPending = bdLogin::isPending(this->m_login);
      v4 = this->m_login;
      if ( isPending )
      {
        Status = (bdLoginStatus *)bdLogin::getStatus(v4);
        LoginStatusCode = bdLoginStatus::getLoginStatusCode(Status);
        if ( LoginStatusCode != this->m_previousStatus )
        {
          v7 = (bdLoginStatus *)bdLogin::getStatus(this->m_login);
          LoginStatusMessage = bdLoginStatus::getLoginStatusMessage(v7);
          Com_Printf(25, "[DW] Login Status: (%u) %s.\n", (unsigned int)LoginStatusCode, LoginStatusMessage);
          this->m_previousStatus = LoginStatusCode;
        }
      }
      else
      {
        v9 = bdLogin::succeeded(v4);
        v10 = this->m_login;
        if ( v9 )
        {
          Result = bdLogin::getResult(v10);
          bdLoginResult::bdLoginResult(&v24, Result);
          Com_Printf(25, "[DW] Login Succeeded\n");
          Username = bdLoginResult::getUsername(&v24);
          UserID = bdLoginResult::getUserID(&v24);
          AccountType = bdLoginResult::getAccountType(&v24);
          Com_Printf(25, "[DW] DW Account: %s-%zu [%s]\n", AccountType, UserID, Username);
          FirstPartyUsername = bdLoginResult::getFirstPartyUsername(&v24);
          FirstPartyUserID = bdLoginResult::getFirstPartyUserID(&v24);
          FirstPartyAccountType = bdLoginResult::getFirstPartyAccountType(&v24);
          Com_Printf(25, "[DW] FP Account: %s-%zu [%s]\n", FirstPartyAccountType, FirstPartyUserID, FirstPartyUsername);
          this->m_pending = 0;
          bdLoginResult::~bdLoginResult(&v24);
        }
        else
        {
          Failure = bdLogin::getFailure(v10);
          *(_QWORD *)&v24.m_titleID = &bdLoginFailure::`vftable';
          *(_DWORD *)&v24.m_platformToken[4] = Failure->m_loginFailureCode;
          m_loginFailureMessage = Failure->m_loginFailureMessage;
          v20 = &v24.m_platformToken[8];
          v21 = 4i64;
          do
          {
            *(_OWORD *)v20 = *(_OWORD *)m_loginFailureMessage;
            *((_OWORD *)v20 + 1) = *((_OWORD *)m_loginFailureMessage + 1);
            *((_OWORD *)v20 + 2) = *((_OWORD *)m_loginFailureMessage + 2);
            *((_OWORD *)v20 + 3) = *((_OWORD *)m_loginFailureMessage + 3);
            *((_OWORD *)v20 + 4) = *((_OWORD *)m_loginFailureMessage + 4);
            *((_OWORD *)v20 + 5) = *((_OWORD *)m_loginFailureMessage + 5);
            *((_OWORD *)v20 + 6) = *((_OWORD *)m_loginFailureMessage + 6);
            v20 += 128;
            *((_OWORD *)v20 - 1) = *((_OWORD *)m_loginFailureMessage + 7);
            m_loginFailureMessage += 128;
            --v21;
          }
          while ( v21 );
          Com_Printf(25, "[DW] Login Failed\n");
          LoginFailureCode = bdLoginFailure::getLoginFailureCode((bdLoginFailure *)&v24);
          Com_Printf(25, "[DW] Failure Code: %u\n", (unsigned int)LoginFailureCode);
          LoginFailureMessage = bdLoginFailure::getLoginFailureMessage((bdLoginFailure *)&v24);
          Com_Printf(25, "[DW] Failure Message: %s\n", LoginFailureMessage);
          this->m_pending = 0;
          bdLoginFailure::~bdLoginFailure((bdLoginFailure *)&v24);
        }
      }
    }
  }
}

/*
==============
DWObjectStore::pump
==============
*/
void DWObjectStore::pump(DWObjectStore *this)
{
  bdObjectStore *ObjectStore; 

  if ( this->m_owningWrapper && this->isReady(this) )
  {
    ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
    if ( ObjectStore )
      bdObjectStore::pump(ObjectStore);
  }
}

/*
==============
DWPooledStorage::pump
==============
*/
void DWPooledStorage::pump(DWPooledStorage *this)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
    {
      PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
      bdContentStreamingBase::pump(PooledStorage);
    }
  }
}

/*
==============
DWStandaloneUmbrella::pump
==============
*/
void DWStandaloneUmbrella::pump(DWStandaloneUmbrella *this)
{
  const dvar_t *v2; 
  unsigned __int64 m_tokenExpiry; 
  __int64 integer; 
  unsigned __int64 EpochTimeFromAuth_s; 
  bdUmbrella *m_umbrella; 

  if ( this->m_hasUmbrellaToken )
  {
    v2 = DVARINT_online_standalone_umbrella_token_refresh_s;
    m_tokenExpiry = this->m_tokenExpiry;
    if ( !DVARINT_online_standalone_umbrella_token_refresh_s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_standalone_umbrella_token_refresh_s") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    integer = v2->current.integer;
    EpochTimeFromAuth_s = Online_GetEpochTimeFromAuth_s();
    if ( m_tokenExpiry - integer < EpochTimeFromAuth_s )
    {
      DWStandaloneUmbrella::startTokenRequest(this);
      if ( m_tokenExpiry < EpochTimeFromAuth_s )
        this->m_hasUmbrellaToken = 0;
    }
  }
  else
  {
    DWStandaloneUmbrella::startTokenRequest(this);
  }
  m_umbrella = this->m_umbrella;
  if ( m_umbrella )
  {
    if ( this->m_remoteTaskRef.m_ptr )
      bdSingleIdentityBase::pump(m_umbrella);
  }
}

/*
==============
DWUmbrella::pump
==============
*/
void DWUmbrella::pump(DWUmbrella *this)
{
  char v2; 
  bdUmbrella *Umbrella; 
  __int64 v4; 
  bdSingleIdentityBase *v5; 
  volatile signed __int32 *m_ptr; 
  volatile signed __int32 *v7; 
  char v8; 
  volatile signed __int32 *v9; 

  v2 = 0;
  if ( !this->m_owningWrapper || !this->isReady(this) )
    return;
  Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService);
  v5 = Umbrella;
  if ( Umbrella )
  {
    m_ptr = (volatile signed __int32 *)Umbrella->m_remoteTask.m_ptr;
    v7 = m_ptr;
    v9 = m_ptr;
    if ( m_ptr )
    {
      v4 = (unsigned int)_InterlockedExchangeAdd(m_ptr + 2, 1u);
      v7 = m_ptr;
    }
    v2 = 1;
    if ( (*(unsigned int (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)m_ptr + 8i64))(m_ptr, v4) == 1 )
    {
      v8 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    v7 = v9;
  }
  v8 = 0;
LABEL_10:
  if ( (v2 & 1) != 0 && v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v9)(v9, 1i64);
  if ( v8 )
    bdSingleIdentityBase::pump(v5);
}

/*
==============
DWUno::pump
==============
*/
void DWUno::pump(DWUno *this)
{
  char v2; 
  bdUno *Uno; 
  __int64 v4; 
  bdUno *v5; 
  volatile signed __int32 *m_ptr; 
  volatile signed __int32 *v7; 
  char v8; 
  volatile signed __int32 *v9; 

  v2 = 0;
  if ( !this->m_owningWrapper || !this->isReady(this) )
    return;
  Uno = DWLobbyService::getUno(&this->m_owningWrapper->m_lobbyService);
  v5 = Uno;
  if ( Uno )
  {
    m_ptr = (volatile signed __int32 *)Uno->m_remoteTask.m_ptr;
    v7 = m_ptr;
    v9 = m_ptr;
    if ( m_ptr )
    {
      v4 = (unsigned int)_InterlockedExchangeAdd(m_ptr + 2, 1u);
      v7 = m_ptr;
    }
    v2 = 1;
    if ( (*(unsigned int (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)m_ptr + 8i64))(m_ptr, v4) == 1 )
    {
      v8 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    v7 = v9;
  }
  v8 = 0;
LABEL_10:
  if ( (v2 & 1) != 0 && v7 && _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v9)(v9, 1i64);
  if ( v8 )
    bdUno::pump(v5);
}

/*
==============
DWMarketplace::purchaseOnSteamFinalize
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::purchaseOnSteamFinalize(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned __int64 orderId, const unsigned int appId, const bool isAuthorized, bdExchangeTransactionResultV2 *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> v15; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v13 = bdMarketplace::purchaseOnSteamFinalize(Marketplace, &v15, transactionId, orderId, appId, isAuthorized, resulta);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( v15.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::purchaseOnSteamInitialize
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::purchaseOnSteamInitialize(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int fpSkuId, bdSteamOrderIdResult *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> v13; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v11 = bdMarketplace::purchaseOnSteamInitialize(Marketplace, &v13, transactionId, fpSkuId, resulta);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v13.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v13.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v13.m_ptr->~bdReferencable)(v13.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::purchaseSkus
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::purchaseSkus(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const unsigned __int8 numSkuIds, const unsigned int *skuIds, const unsigned int *purchasedQuantities, const unsigned int maxNumResults, bdMarketplacePurchaseSkusResult *resulta, const unsigned int *discountIds, const bdUserAccountID *couponRecipients, const unsigned __int8 **couponMetadata, const unsigned int *metadataSize, const unsigned __int8 customSourceType, const bool ignoreEntitlements)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v20; 
  bdReference<bdRemoteTask> v22; 
  bdReference<bdRemoteTask> *v23; 

  v23 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v20 = bdMarketplace::purchaseSkus(Marketplace, &v22, clientTransactionId, numSkuIds, skuIds, purchasedQuantities, maxNumResults, resulta, discountIds, couponRecipients, couponMetadata, metadataSize, customSourceType, ignoreEntitlements);
        bdReference<bdRemoteTask>::operator=(result, v20);
        if ( v22.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v22.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v22.m_ptr->~bdReferencable)(v22.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::purchaseSkusInfluencer
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::purchaseSkusInfluencer(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *clientTransactionId, const bdUserAccountID *buyer, const unsigned __int8 numSkuOrders, const bdMarketplacePurchaseSkusSkuOrderV2 *skuOrders, bdMarketplacePurchaseSkusResultV4 *a7, const unsigned __int8 numCouponOrders, const bdMarketplacePurchaseSkusCouponOrderV2 *couponOrders, const unsigned __int8 numMetadataEntries, const bdMarketplaceMetadata *metadata, const unsigned int customSourceType, const bool ignoreEntitlements)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdUserAccountID *v19; 
  const bdReference<bdRemoteTask> *v20; 
  unsigned __int32 v21; 
  bdReference<bdRemoteTask> v23; 
  const bdMarketplaceMetadata *v24; 
  const bdMarketplacePurchaseSkusCouponOrderV2 *v25; 
  __int64 v26; 
  bdReference<bdRemoteTask> *v27; 
  bdUserAccountID v28; 
  const bdUserAccountID *v29; 

  v26 = -2i64;
  v27 = result;
  v29 = buyer;
  v25 = couponOrders;
  v24 = metadata;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        bdUserAccountID::bdUserAccountID(&v28, buyer);
        v20 = bdMarketplace::purchaseSkus(Marketplace, &v23, clientTransactionId, v19, numSkuOrders, skuOrders, a7, numCouponOrders, v25, numMetadataEntries, v24, customSourceType, ignoreEntitlements);
        bdReference<bdRemoteTask>::operator=(result, v20);
        if ( v23.m_ptr )
        {
          v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&v23.m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v21 == 1 )
          {
            if ( v23.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v23.m_ptr->~bdReferencable)(v23.m_ptr, v21);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)buyer->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)buyer->gap38);
  return result;
}

/*
==============
DWAsyncMatchMaking::qosHostsReply
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::qosHostsReply(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 transactionID, bdArray<bdQoSProbeInfo> *qosResponse)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v10 = bdAsyncMatchMaking::qosHostsReply(AsyncMatchmaking, &resulta, transactionID, qosResponse);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStats::readStatsByEntityID
==============
*/
bdReference<bdRemoteTask> *DWStats::readStatsByEntityID(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **includedColumns, const unsigned int numIncludedColumns)
{
  DWWrappers *m_owningWrapper; 
  unsigned int v13; 
  const char **v14; 
  bdStats *v15; 
  const bdReference<bdRemoteTask> *v16; 
  bdRemoteTask *m_ptr; 
  bdStats *v18; 
  const bdReference<bdRemoteTask> *v19; 
  bdReference<bdRemoteTask> v21; 
  __int64 v22; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v24; 

  v24 = result;
  v22 = -2i64;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
  {
    v13 = numIncludedColumns;
    if ( numIncludedColumns && (v14 = includedColumns) != NULL )
    {
      v15 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
      v16 = bdStats::readStatsByEntityIDIncludedColumns(v15, &resulta, leaderboardID, entityIDs, numEntityIDs, stats, v14, v13);
      bdReference<bdRemoteTask>::operator=(result, v16);
      if ( !resulta.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
        return result;
      m_ptr = resulta.m_ptr;
    }
    else
    {
      v18 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
      v19 = bdStats::readStatsByEntityID(v18, &v21, leaderboardID, entityIDs, numEntityIDs, stats, NULL, 0);
      bdReference<bdRemoteTask>::operator=(result, v19);
      if ( !v21.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&v21.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
        return result;
      m_ptr = v21.m_ptr;
    }
    if ( m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
  return result;
}

/*
==============
DWStats::readStatsByEntityIDExcluded
==============
*/
bdReference<bdRemoteTask> *DWStats::readStatsByEntityIDExcluded(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 *entityIDs, const unsigned int numEntityIDs, bdStatsInfo *stats, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  DWWrappers *m_owningWrapper; 
  bdStats *v13; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        v13 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v14 = bdStats::readStatsByEntityID(v13, &resulta, leaderboardID, entityIDs, numEntityIDs, stats, excludedColumns, numExcludedColumns);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStats::readStatsByLeaderboardIDs
==============
*/
bdReference<bdRemoteTask> *DWStats::readStatsByLeaderboardIDs(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned __int64 entityID, const unsigned int *leaderboardIDs, bdStatsInfoEx **statsResults, const unsigned int numLeaderboards)
{
  DWWrappers *m_owningWrapper; 
  bdStats *Stats; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        Stats = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v12 = bdStats::readStatsByLeaderboardIDs(Stats, &resulta, entityID, leaderboardIDs, statsResults, numLeaderboards);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStats::readStatsByPivot
==============
*/
bdReference<bdRemoteTask> *DWStats::readStatsByPivot(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 entityID, bdStatsInfo *stats, const unsigned int maxResults)
{
  DWWrappers *m_owningWrapper; 
  bdStats *v11; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        v11 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v12 = bdStats::readStatsByPivot(v11, &resulta, leaderboardID, entityID, stats, maxResults, NULL, 0);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStats::readStatsByRank
==============
*/
bdReference<bdRemoteTask> *DWStats::readStatsByRank(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **includedColumns, const unsigned int numIncludedColumns)
{
  DWWrappers *m_owningWrapper; 
  unsigned int v13; 
  const char **v14; 
  bdStats *v15; 
  const bdReference<bdRemoteTask> *v16; 
  bdRemoteTask *m_ptr; 
  bdStats *v18; 
  const bdReference<bdRemoteTask> *v19; 
  bdReference<bdRemoteTask> v21; 
  __int64 v22; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v24; 

  v24 = result;
  v22 = -2i64;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
  {
    v13 = numIncludedColumns;
    if ( numIncludedColumns && (v14 = includedColumns) != NULL )
    {
      v15 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
      v16 = bdStats::readStatsByRankIncludedColumns(v15, &resulta, leaderboardID, firstRank, stats, maxResults, v14, v13);
      bdReference<bdRemoteTask>::operator=(result, v16);
      if ( !resulta.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
        return result;
      m_ptr = resulta.m_ptr;
    }
    else
    {
      v18 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
      v19 = bdStats::readStatsByRank(v18, &v21, leaderboardID, firstRank, stats, maxResults, NULL, 0);
      bdReference<bdRemoteTask>::operator=(result, v19);
      if ( !v21.m_ptr || _InterlockedExchangeAdd((volatile signed __int32 *)&v21.m_ptr->m_refCount, 0xFFFFFFFF) != 1 )
        return result;
      m_ptr = v21.m_ptr;
    }
    if ( m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
  return result;
}

/*
==============
DWStats::readStatsByRankExcluded
==============
*/
bdReference<bdRemoteTask> *DWStats::readStatsByRankExcluded(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned int leaderboardID, const unsigned __int64 firstRank, bdStatsInfo *stats, const unsigned int maxResults, const char **excludedColumns, const unsigned int numExcludedColumns)
{
  DWWrappers *m_owningWrapper; 
  bdStats *v13; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        v13 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v14 = bdStats::readStatsByRank(v13, &resulta, leaderboardID, firstRank, stats, maxResults, excludedColumns, numExcludedColumns);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::readyUpTournament
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::readyUpTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAsyncMatchMaking::readyUpTournament(AsyncMatchmaking, &resulta, tournamentID);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWEventLog::recordEventsMixed
==============
*/
bdReference<bdRemoteTask> *DWEventLog::recordEventsMixed(DWEventLog *this, bdReference<bdRemoteTask> *result, const bdEventInfo *eventInfos, unsigned int count, bdEventLogID *eventLogIDs)
{
  DWWrappers *m_owningWrapper; 
  bdEventLog *EventLog; 
  bdEventLog *v11; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getEventLog(&this->m_owningWrapper->m_lobbyService) )
  {
    EventLog = DWLobbyService::getEventLog(&this->m_owningWrapper->m_lobbyService);
    v11 = EventLog;
    if ( EventLog && bdEventLog::readyToSend(EventLog) )
    {
      v12 = bdEventLog::recordEventsMixed(v11, &resulta, eventInfos, count, eventLogIDs);
      bdReference<bdRemoteTask>::operator=(result, v12);
      if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    }
    else
    {
      Com_Printf(25, "[DW] Trying to record event without having completed InitializeFiltering\n");
      this->m_filteringInitialized = 0;
    }
  }
  return result;
}

/*
==============
DWMatchScheduler::recordScheduledMatchEvent
==============
*/
bdReference<bdRemoteTask> *DWMatchScheduler::recordScheduledMatchEvent(DWMatchScheduler *this, bdReference<bdRemoteTask> *result, unsigned int matchID, unsigned __int8 *eventData, unsigned int eventDataSize)
{
  bdMatchScheduler *MatchScheduler; 
  const bdReference<bdRemoteTask> *matched; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService) )
    {
      MatchScheduler = DWLobbyService::getMatchScheduler(&this->m_owningWrapper->m_lobbyService);
      matched = bdMatchScheduler::recordScheduledMatchEvent(MatchScheduler, &resulta, matchID, eventData, eventDataSize);
      bdReference<bdRemoteTask>::operator=(result, matched);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWRedeemableCodes::redeemCode
==============
*/
bdReference<bdRemoteTask> *DWRedeemableCodes::redeemCode(DWRedeemableCodes *this, bdReference<bdRemoteTask> *result, const char *const clientTransactionId, const char *const code, bdRedeemCodeResult *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdRedeemableCodeService *RedeemableCodeService; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> v13; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getRedeemableCodeService(&m_owningWrapper->m_lobbyService) )
      {
        RedeemableCodeService = DWLobbyService::getRedeemableCodeService(&this->m_owningWrapper->m_lobbyService);
        v11 = bdRedeemableCodeService::redeemCode(RedeemableCodeService, &v13, clientTransactionId, code, resulta);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v13.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v13.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v13.m_ptr->~bdReferencable)(v13.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWRedeemableCodes::redeemPayload
==============
*/
bdReference<bdRemoteTask> *DWRedeemableCodes::redeemPayload(DWRedeemableCodes *this, bdReference<bdRemoteTask> *result, const char *const clientTransactionId, const char *const payload, const char *const payloadSignature, bdRedeemCodeResult *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdRedeemableCodeService *RedeemableCodeService; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> v14; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getRedeemableCodeService(&m_owningWrapper->m_lobbyService) )
      {
        RedeemableCodeService = DWLobbyService::getRedeemableCodeService(&this->m_owningWrapper->m_lobbyService);
        v12 = bdRedeemableCodeService::redeemPayload(RedeemableCodeService, &v14, clientTransactionId, payload, payloadSignature, resulta);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( v14.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_ptr->~bdReferencable)(v14.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWClans::registerEventHandler
==============
*/
bool DWClans::registerEventHandler(DWClans *this, bdClansEventHandler *handler)
{
  DWWrappers *m_owningWrapper; 
  DWLobbyService *p_m_lobbyService; 
  bool v6; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v9; 
  DWLogin *v10; 
  bdLoginResult *v11; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  p_m_lobbyService = &this->m_owningWrapper->m_lobbyService;
  v6 = 0;
  DWLobbyService::getLobbyService(p_m_lobbyService, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v9 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v9) )
    {
      v10 = m_lobbyService->m_loginService;
      if ( v10 )
      {
        v11 = (bdLoginResult *)DWLogin::getResult(v10);
        LobbyService = bdLoginResult::getLobbyService(v11);
      }
      else
      {
        LobbyService = NULL;
      }
      v6 = bdLobbyService::registerPushMessageHandler(LobbyService, handler);
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return v6;
}

/*
==============
DWAsyncMatchMaking::registerForTournament
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::registerForTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentRegistration, const unsigned int bufferSize, bdStringResult *registrationResult)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v11 = bdAsyncMatchMaking::registerForTournament(AsyncMatchmaking, &resulta, tournamentRegistration, bufferSize, registrationResult);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWCrossPlatformIdentity::registerPushMessageHandler
==============
*/
bool DWCrossPlatformIdentity::registerPushMessageHandler(DWCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *handler)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
  return bdCrossPlatformIdentity::registerPushMessageHandler(CrossPlatformIdentity, handler);
}

/*
==============
DWFriends::registerPushMessageHandler
==============
*/
bool DWFriends::registerPushMessageHandler(DWFriends *this, bdCrossPlatformFriendsPushMessageHandler *handler)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformFriends *Friends; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  Friends = DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService);
  return bdCrossPlatformFriends::registerPushMessageHandler(Friends, handler);
}

/*
==============
DWLobbyService::registerPushMessageHandler
==============
*/
_BOOL8 DWLobbyService::registerPushMessageHandler(DWLobbyService *this, bdPushMessageHandler *handler)
{
  bool v3; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v6; 
  DWLogin *v7; 
  bdLoginResult *v8; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  v3 = 0;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v6 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v6) )
    {
      v7 = m_lobbyService->m_loginService;
      if ( v7 )
      {
        v8 = (bdLoginResult *)DWLogin::getResult(v7);
        LobbyService = bdLoginResult::getLobbyService(v8);
      }
      else
      {
        LobbyService = NULL;
      }
      v3 = bdLobbyService::registerPushMessageHandler(LobbyService, handler);
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return v3;
}

/*
==============
DWRichPresenceService::registerPushMessageHandler
==============
*/
bool DWRichPresenceService::registerPushMessageHandler(DWRichPresenceService *this, bdCrossPlatformPresencePushMessageHandler *pushMessageHandler)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformPresence *RichPresence; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  RichPresence = DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService);
  return bdCrossPlatformPresence::registerPushMessageHandler(RichPresence, pushMessageHandler);
}

/*
==============
DWTeams::rejectApplication
==============
*/
bdReference<bdRemoteTask> *DWTeams::rejectApplication(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> v14[4]; 
  bdUserAccountID v15; 
  bdUserAccountID *v16; 

  v14[1].m_ptr = (bdRemoteTask *)-2i64;
  v14[2].m_ptr = (bdRemoteTask *)result;
  v16 = applicantID;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v15, applicantID);
        v11 = bdTeams::rejectApplication(Teams, v14, teamID, v10);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v14[0].m_ptr )
        {
          v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&v14[0].m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v12 == 1 )
          {
            if ( v14[0].m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v14[0].m_ptr->~bdReferencable)(v14[0].m_ptr, v12);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return result;
}

/*
==============
DWFriends::rejectFriend
==============
*/
bdReference<bdRemoteTask> *DWFriends::rejectFriend(DWFriends *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userId, bdRejectFriendResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformFriends *Friends; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v13; 
  bdReference<bdRemoteTask> *v14; 
  const bdUserAccountID *v15; 
  bdRejectFriendRequest request; 

  v13 = -2i64;
  v14 = result;
  v15 = userId;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService) )
  {
    bdRejectFriendRequest::bdRejectFriendRequest(&request);
    bdRejectFriendRequest::setUser(&request, userId);
    bdRejectFriendRequest::setContext(&request, "cod-shared");
    Friends = DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService);
    v10 = bdCrossPlatformFriends::reject(Friends, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v10);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdRejectFriendRequest::~bdRejectFriendRequest(&request);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userId->gap38);
  return result;
}

/*
==============
DWTeams::rejectMembership
==============
*/
bdReference<bdRemoteTask> *DWTeams::rejectMembership(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v8; 
  const bdReference<bdRemoteTask> *v9; 
  bdUserAccountID v11; 
  bdReference<bdRemoteTask> v12; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v11);
        v9 = bdTeams::rejectMembership(Teams, &v12, teamID, v8);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( v12.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v12.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::rejoinTournament
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::rejoinTournament(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 tournamentID)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAsyncMatchMaking::rejoinTournament(AsyncMatchmaking, &resulta, tournamentID);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLobbyService::releaseAccess
==============
*/
void DWLobbyService::releaseAccess(DWLobbyService *this)
{
  volatile int *p_m_ownerThread; 
  signed __int32 CurrentThreadContext; 

  p_m_ownerThread = &this->m_ownerThread;
  CurrentThreadContext = Sys_GetCurrentThreadContext();
  if ( ((unsigned __int8)p_m_ownerThread & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_ownerThread) )
    __debugbreak();
  if ( CurrentThreadContext != _InterlockedCompareExchange(p_m_ownerThread, 0, CurrentThreadContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 183, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_ownerThread, 0, threadContext ) == threadContext)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_ownerThread, 0, threadContext ) == threadContext") )
    __debugbreak();
}

/*
==============
DWClans::removeClanMember
==============
*/
bdReference<bdRemoteTask> *DWClans::removeClanMember(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, bdUserAccountID *member, bdClansRemoveGroupMemberResponse *response)
{
  DWWrappers *m_owningWrapper; 
  const bdClansGroupIdentifier *v10; 
  const bdUserAccountID *v11; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  int v16; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  bdClansGroupIdentifier v19; 
  bdUserAccountID v20; 
  bdUserAccountID *v21; 
  bdClansRemoveGroupMemberRequest request; 

  v17 = -2i64;
  v18 = result;
  v21 = member;
  result->m_ptr = NULL;
  v16 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v19, 1u, id, 0, 0i64);
    bdClansRemoveGroupMemberRequest::bdClansRemoveGroupMemberRequest(&request, v10);
    bdUserAccountID::bdUserAccountID(&v20, member);
    bdClansRemoveGroupMemberRequest::setUser(&request, v11);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    v13 = bdMW4Service::removeGroupMember(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v13);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_owner.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_owner.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_owner.m_value._bytes_48);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_user.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_user.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_user.m_value._bytes_48);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_owner + 6);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)member->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)member->gap38);
  return result;
}

/*
==============
DWContentStreaming::removeFile
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::removeFile(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v8 = bdContentStreaming::removeFile(ContentStreaming, &resulta, fileSlot);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::removeFile
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::removeFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, const bdUserAccountID *ownerID)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v10 = bdStorage::removeFile(Storage, &resulta, fileName, ownerID);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWCrossPlatformIdentity::renameUser
==============
*/
bdReference<bdRemoteTask> *DWCrossPlatformIdentity::renameUser(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdRenameCrossPlatformUserRequest *request, bdRenameCrossPlatformUserResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
      {
        CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
        v10 = bdCrossPlatformIdentity::renameUser(CrossPlatformIdentity, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAntiCheat::reportConsoleDetails
==============
*/
bdReference<bdRemoteTask> *DWAntiCheat::reportConsoleDetails(DWAntiCheat *this, bdReference<bdRemoteTask> *result, unsigned int gameMode, unsigned int gameVersion, unsigned __int64 checksum, const bdMACAddr *macAddress, unsigned __int64 internalAddr, unsigned __int64 externalAddr)
{
  bdAuth *m_authService; 
  DWWrappers *m_owningWrapper; 
  DWWrappers *v14; 
  bdAntiCheat *AntiCheat; 
  DWWrappers *v16; 
  const bdExtendedAuthInfo *extendedAuthInfo; 
  const bdReference<bdRemoteTask> *v18; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v21; 

  v21 = result;
  m_authService = NULL;
  result->m_ptr = NULL;
  if ( DWWrappers::isReadyForReportConsoleDetails(this->m_owningWrapper) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAntiCheat(&m_owningWrapper->m_lobbyService) )
      {
        v14 = this->m_owningWrapper;
        if ( v14->m_authService.m_bInited )
        {
          if ( v14->m_authService.m_authService )
          {
            AntiCheat = DWLobbyService::getAntiCheat(&v14->m_lobbyService);
            v16 = this->m_owningWrapper;
            if ( v16->m_authService.m_bInited )
              m_authService = v16->m_authService.m_authService;
            extendedAuthInfo = bdAuth::getExtendedAuthInfo(m_authService);
            v18 = bdAntiCheat::reportExtendedAuthInfo(AntiCheat, &resulta, gameMode, gameVersion, checksum, macAddress, internalAddr, externalAddr, extendedAuthInfo);
            bdReference<bdRemoteTask>::operator=(result, v18);
            if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
          }
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::reportEvents
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::reportEvents(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdReportEventsRequest *request)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAchievementsEngineService::reportEvents(AchievementsEngineService, &resulta, request);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngineClient::reportUserEvent
==============
*/
bool DWAchievementEngineClient::reportUserEvent(DWAchievementEngineClient *this, const bdUserAccountID *user, const bdUserAccountID *firstPartyUser, bdPlatformID platform, const bdAchievementEvent *event)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementClient *AchievementsEngineClientService; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getAchievementsEngineClientService(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  AchievementsEngineClientService = DWLobbyService::getAchievementsEngineClientService(&this->m_owningWrapper->m_lobbyService);
  return bdAchievementClient::reportUserEvent(AchievementsEngineClientService, user, firstPartyUser, platform, event, 0);
}

/*
==============
DWAchievementEngine::reportUserEvents
==============
*/
bdReference<bdRemoteTask> *DWAchievementEngine::reportUserEvents(DWAchievementEngine *this, bdReference<bdRemoteTask> *result, const bdReportUserEventsRequest *request)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
      {
        AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
        v8 = bdAchievementsEngineService::reportUserEvents(AchievementsEngineService, &resulta, request, NULL);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelManagerStandard::reset
==============
*/
void DWDataChannelManagerStandard::reset(DWDataChannelManagerStandard *this)
{
  this->m_activeControllerIndex = -1;
}

/*
==============
DWLogin::reset
==============
*/
void DWLogin::reset(DWLogin *this)
{
  bdLogin *m_login; 

  m_login = this->m_login;
  if ( m_login )
    bdLogin::reset(m_login);
}

/*
==============
DWLogin::resume
==============
*/
void DWLogin::resume(DWLogin *this, bdLoginResumeFlow resumeFlow, bdLoginResumeConfig *resumeConfig)
{
  bdLogin *m_login; 

  m_login = this->m_login;
  if ( m_login )
  {
    bdLogin::resume(m_login, resumeFlow, resumeConfig);
    this->m_pending = 1;
  }
  bdLoginResumeConfig::~bdLoginResumeConfig(resumeConfig);
}

/*
==============
DWPublisherVariables::retrievePublisherVariables
==============
*/
bdReference<bdRemoteTask> *DWPublisherVariables::retrievePublisherVariables(DWPublisherVariables *this, bdReference<bdRemoteTask> *result, const char *const nameSpace)
{
  DWWrappers *m_owningWrapper; 
  bdPublisherVariables *PublisherVariables; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService) )
      {
        PublisherVariables = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
        v8 = bdPublisherVariables::retrievePublisherVariables(PublisherVariables, &resulta, nameSpace);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWPublisherVariables::retrievePublisherVariables
==============
*/
bdReference<bdRemoteTask> *DWPublisherVariables::retrievePublisherVariables(DWPublisherVariables *this, bdReference<bdRemoteTask> *result, const char *const *nameSpaces, const unsigned __int16 numNameSpaces)
{
  DWWrappers *m_owningWrapper; 
  bdPublisherVariables *PublisherVariables; 
  bdPublisherVariables *v10; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService) )
      {
        PublisherVariables = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
        bdPublisherVariablesInfo::init(&this->m_info, PublisherVariables);
        bdRetrievePublisherVariablesResponse::init(&this->m_response, numNameSpaces, &this->m_info);
        v10 = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
        v11 = bdPublisherVariables::retrievePublisherVariables(v10, &resulta, numNameSpaces, nameSpaces, &this->m_response);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTitleUtilities::sanitizeString
==============
*/
bdReference<bdRemoteTask> *DWTitleUtilities::sanitizeString(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *str, bdSanitizeStringResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdTitleUtilities *TitleUtilities; 
  const bdReference<bdRemoteTask> *v10; 
  unsigned __int32 v11; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdSanitizeStringRequest request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService) )
  {
    bdSanitizeStringRequest::bdSanitizeStringRequest(&request);
    bdSanitizeStringBase::setString(&request, str);
    TitleUtilities = DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService);
    v10 = bdTitleUtilities::sanitizeString(TitleUtilities, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v10);
    if ( resulta.m_ptr )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v11 == 1 )
      {
        if ( resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v11);
      }
    }
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_string[1008]);
  }
  return result;
}

/*
==============
DWTags::searchByTags
==============
*/
bdReference<bdRemoteTask> *DWTags::searchByTags(DWTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned int startIndex, const unsigned int maxNumResults, const bool orderNewestFirst, const unsigned int numTags, const bdTag *tags, bdFileID *results)
{
  DWWrappers *m_owningWrapper; 
  bdTags *v14; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v18; 

  v18 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTags(&this->m_owningWrapper->m_lobbyService) )
      {
        v14 = DWLobbyService::getTags(&this->m_owningWrapper->m_lobbyService);
        v15 = bdTags::searchByTags(v14, &resulta, collectionID, startIndex, maxNumResults, orderNewestFirst, numTags, tags, results);
        bdReference<bdRemoteTask>::operator=(result, v15);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::searchTeams
==============
*/
bdReference<bdRemoteTask> *DWTeams::searchTeams(DWTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *teamInfos, const bdUserAccountID *searchingUserID, const unsigned int numOtherUsers, const unsigned int numTeamsFilter, const unsigned int numProfileFilters, const unsigned __int64 *otherUsers, const bdTeamSearchFilter *publicProfileFilter, const bdTeamSearchFilter *teamsFilter, const unsigned int offset, const unsigned int maxResults, const char *const orderByColumn, const char *const sortOrder, const bool getCurrentTeams)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdUserAccountID *v21; 
  const bdReference<bdRemoteTask> *v22; 
  unsigned __int32 v23; 
  bdReference<bdRemoteTask> v25; 
  const char *v26; 
  const char *v27; 
  const bdTeamSearchFilter *v28; 
  const bdTeamSearchFilter *v29; 
  __int64 v30; 
  bdReference<bdRemoteTask> *v31; 
  bdUserAccountID v32; 
  const bdUserAccountID *v33; 

  v30 = -2i64;
  v31 = result;
  v33 = searchingUserID;
  v29 = publicProfileFilter;
  v28 = teamsFilter;
  v27 = orderByColumn;
  v26 = sortOrder;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        bdUserAccountID::bdUserAccountID(&v32, searchingUserID);
        v22 = bdTeams::searchTeamsV2(Teams, &v25, teamInfos, v21, numOtherUsers, numTeamsFilter, numProfileFilters, otherUsers, v29, v28, offset, maxResults, v27, v26, getCurrentTeams);
        bdReference<bdRemoteTask>::operator=(result, v22);
        if ( v25.m_ptr )
        {
          v23 = _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v23 == 1 )
          {
            if ( v25.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))v25.m_ptr->~bdReferencable)(v25.m_ptr, v23);
          }
        }
      }
    }
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)searchingUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)searchingUserID->gap38);
  return result;
}

/*
==============
DWMessaging::sendGlobalInstantMessage
==============
*/
bdReference<bdRemoteTask> *DWMessaging::sendGlobalInstantMessage(DWMessaging *this, bdReference<bdRemoteTask> *result, const unsigned __int64 recipientUID, const void *const message, const unsigned int msgSize)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v10 = bdMessaging::sendGlobalInstantMessage(Messaging, &resulta, recipientUID, message, msgSize);
      bdReference<bdRemoteTask>::operator=(result, v10);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWMail::sendMail
==============
*/
bdReference<bdRemoteTask> *DWMail::sendMail(DWMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  DWWrappers *m_owningWrapper; 
  bdMail *Mail; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Mail = DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v14 = bdMail::sendMail(Mail, &resulta, message, messageSize, mailCategory, userIDs, numUserIDs, senderID);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMail::sendMailWithDuration
==============
*/
bdReference<bdRemoteTask> *DWMail::sendMailWithDuration(DWMail *this, bdReference<bdRemoteTask> *result, const void *const message, const unsigned int messageSize, const unsigned __int16 mailCategory, const unsigned int messageDuration, const bool returnOnExpiration, const bdUserAccountID *userIDs, const unsigned int numUserIDs, const bdUserAccountID *senderID)
{
  DWWrappers *m_owningWrapper; 
  bdMail *Mail; 
  const bdReference<bdRemoteTask> *v16; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v19; 

  v19 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Mail = DWLobbyService::getMail(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v16 = bdMail::sendMailWithDuration(Mail, &resulta, message, messageSize, mailCategory, messageDuration, returnOnExpiration, userIDs, numUserIDs, senderID);
        bdReference<bdRemoteTask>::operator=(result, v16);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::sendToChannel
==============
*/
bdReference<bdRemoteTask> *DWMessaging::sendToChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v12 = bdMessaging::sendToChannel(Messaging, &resulta, category, channelID, message, messageSize, messageType);
      bdReference<bdRemoteTask>::operator=(result, v12);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWGameMetrics::set
==============
*/
char DWGameMetrics::set(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  const dvar_t *v7; 

  if ( !this->m_gameMetrics )
    return 0;
  v7 = DVARBOOL_online_matchmaking_using_metrics;
  if ( !DVARBOOL_online_matchmaking_using_metrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_using_metrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || !bdGameMetrics::set(this->m_gameMetrics, timestamp, name, value) )
    return 0;
  ++this->m_messagesEnqueued;
  return 1;
}

/*
==============
DWClans::setActiveClan
==============
*/
bdReference<bdRemoteTask> *DWClans::setActiveClan(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id)
{
  DWWrappers *m_owningWrapper; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *v8; 
  bdClansGroupIdentifier group; 
  bdClansSetActiveGroupRequest request; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&group);
    bdClansGroupIdentifier::setID(&group, id);
    bdClansGroupIdentifier::setKind(&group, 1u);
    bdClansSetActiveGroupRequest::bdClansSetActiveGroupRequest(&request, &group);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    v8 = bdMW4Service::setActiveGroup(Clans, &resulta, &request);
    bdReference<bdRemoteTask>::operator=(result, v8);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdClansSetActiveGroupRequest::~bdClansSetActiveGroupRequest((bdClansSetActiveGroupRequest *)&request.m_group[48]);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[48]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&group.m_rootID + 1));
  }
  return result;
}

/*
==============
DWDataChannelDispatch::setAuthToken
==============
*/
bool DWDataChannelDispatch::setAuthToken(DWDataChannelDispatch *this, const char *const authToken)
{
  bdDataChannelDispatch **p_m_dispatch; 
  unsigned int v3; 

  p_m_dispatch = &this->m_dispatchInstances[0].m_dispatch;
  v3 = 0;
  while ( !*p_m_dispatch )
  {
    ++v3;
    p_m_dispatch += 6;
    if ( v3 >= 2 )
      return 0;
  }
  return bdDataChannelDispatch::setAuthToken(this->m_dispatchInstances[v3].m_dispatch, authToken);
}

/*
==============
DWMarketplace::setBalance
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::setBalance(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdMarketplacePlayerCurrency *playerCurrencies, const unsigned __int8 numPlayerCurrencies)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v10 = bdMarketplace::setPlayersBalances(Marketplace, &resulta, playerCurrencies, numPlayerCurrencies);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStandaloneUmbrella::setControllerIndexAndEnv
==============
*/
bool DWStandaloneUmbrella::setControllerIndexAndEnv(DWStandaloneUmbrella *this, const int controllerIndex, const bdEnvironment env)
{
  return 0;
}

/*
==============
DWAchievementEngineClient::setFlushIntervalSeconds
==============
*/
void DWAchievementEngineClient::setFlushIntervalSeconds(DWAchievementEngineClient *this, float flushIntervalSeconds)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementClient *AchievementsEngineClientService; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getAchievementsEngineClientService(&this->m_owningWrapper->m_lobbyService) )
    {
      AchievementsEngineClientService = DWLobbyService::getAchievementsEngineClientService(&this->m_owningWrapper->m_lobbyService);
      bdAchievementClient::setFlushIntervalSeconds(AchievementsEngineClientService, flushIntervalSeconds);
    }
  }
}

/*
==============
DWGroup::setGroups
==============
*/
bdReference<bdRemoteTask> *DWGroup::setGroups(DWGroup *this, bdReference<bdRemoteTask> *result, const unsigned int *const groupIDs, const unsigned int numEntries)
{
  DWWrappers *m_owningWrapper; 
  bdGroup *Group; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getGroup(&this->m_owningWrapper->m_lobbyService) )
      {
        Group = DWLobbyService::getGroup(&this->m_owningWrapper->m_lobbyService);
        v10 = bdGroup::setGroups(Group, &resulta, groupIDs, numEntries);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWRichPresenceService::setInfo
==============
*/
bdReference<bdRemoteTask> *DWRichPresenceService::setInfo(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, const bdUserPresenceInfoV3 *userPresenceInfo, const bdUserAccountID *userAccountId, bdSetUserPresenceResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformPresence *RichPresence; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 
  bdUserPresenceV3 userPresence; 
  bdSetUserPresenceRequestV3 request; 

  v14 = -2i64;
  v15 = result;
  v16 = userAccountId;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService) )
  {
    bdUserPresenceV3::bdUserPresenceV3(&userPresence);
    bdUserPresenceV3::setPresence(&userPresence, userPresenceInfo);
    bdUserPresenceV3::setContext(&userPresence, "cod-shared");
    bdUserPresenceV3::setUser(&userPresence, userAccountId);
    bdSetUserPresenceRequestV3::bdSetUserPresenceRequestV3(&request);
    bdSetUserPresenceRequestV3::setUserPresence(&request, &userPresence);
    RichPresence = DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService);
    v11 = bdCrossPlatformPresence::setUserPresenceV3(RichPresence, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v11);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdUserPresenceV3::~bdUserPresenceV3(&request.m_userPresence);
    bdRESTRequest::~bdRESTRequest(&request);
    bdUserPresenceV3::~bdUserPresenceV3(&userPresence);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userAccountId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userAccountId->gap38);
  return result;
}

/*
==============
DWAsyncMatchMaking::setPlayerInfo
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::setPlayerInfo(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *playerInfo, unsigned int bufferSize)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v10 = bdAsyncMatchMaking::setPlayerInfo(AsyncMatchmaking, &resulta, playerInfo, bufferSize);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::setPrivateMemberProfile
==============
*/
bdReference<bdRemoteTask> *DWTeams::setPrivateMemberProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *teamMemberProfile)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v10 = bdTeams::setPrivateMemberProfile(Teams, &resulta, teamID, teamMemberProfile);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::setPrivateProfile
==============
*/
bdReference<bdRemoteTask> *DWTeams::setPrivateProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *privateProfile)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v10 = bdTeams::setPrivateProfile(Teams, &resulta, teamID, privateProfile);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWProfiles::setPublicInfo
==============
*/
bdReference<bdRemoteTask> *DWProfiles::setPublicInfo(DWProfiles *this, bdReference<bdRemoteTask> *result, bdProfileInfo *profileInfo)
{
  DWWrappers *m_owningWrapper; 
  bdProfiles *Profiles; 
  const bdReference<bdRemoteTask> *v8; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getProfiles(&this->m_owningWrapper->m_lobbyService) )
      {
        Profiles = DWLobbyService::getProfiles(&this->m_owningWrapper->m_lobbyService);
        v8 = bdProfiles::setPublicInfo(Profiles, &resulta, profileInfo);
        bdReference<bdRemoteTask>::operator=(result, v8);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::setPublicProfile
==============
*/
bdReference<bdRemoteTask> *DWTeams::setPublicProfile(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *publicProfile)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v10 = bdTeams::setPublicProfile(Teams, &resulta, teamID, publicProfile);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAchievementEngine::setRestRequestsEnabled
==============
*/
void DWAchievementEngine::setRestRequestsEnabled(DWAchievementEngine *this, bool restRequestEnabled)
{
  DWWrappers *m_owningWrapper; 
  bdAchievementsEngineService *AchievementsEngineService; 

  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) )
  {
    if ( DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService) )
    {
      AchievementsEngineService = DWLobbyService::getAchievementsEngineService(&this->m_owningWrapper->m_lobbyService);
      bdAchievementsEngineService::setRestRequestsEnabled(AchievementsEngineService, restRequestEnabled);
    }
  }
}

/*
==============
DWTags::setTagsForEntityID
==============
*/
bdReference<bdRemoteTask> *DWTags::setTagsForEntityID(DWTags *this, bdReference<bdRemoteTask> *result, const unsigned int collectionID, const unsigned __int64 entityID, const unsigned int numTags, const bdTag *tags)
{
  DWWrappers *m_owningWrapper; 
  bdTags *v11; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTags(&this->m_owningWrapper->m_lobbyService) )
      {
        v11 = DWLobbyService::getTags(&this->m_owningWrapper->m_lobbyService);
        v12 = bdTags::setTagsForEntityID(v11, &resulta, collectionID, entityID, numTags, tags);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTeams::setTeamAutoJoin
==============
*/
bdReference<bdRemoteTask> *DWTeams::setTeamAutoJoin(DWTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bool autoJoin)
{
  DWWrappers *m_owningWrapper; 
  bdTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        Teams = DWLobbyService::getTeams(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        v10 = bdTeams::setTeamAutoJoin(Teams, &resulta, teamID, autoJoin);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWRegulations::setUserRegulationPreference
==============
*/
bdReference<bdRemoteTask> *DWRegulations::setUserRegulationPreference(DWRegulations *this, bdReference<bdRemoteTask> *result, const bdSetUserRegulationPreferenceRequest *request, bdSetUserRegulationPreferenceResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdRegulations *Regulations; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getRegulations(&this->m_owningWrapper->m_lobbyService) )
      {
        Regulations = DWLobbyService::getRegulations(&this->m_owningWrapper->m_lobbyService);
        v10 = bdRegulations::setUserRegulationPreference(Regulations, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelDispatch::setupDataChannelDispatch
==============
*/
void DWDataChannelDispatch::setupDataChannelDispatch(DWDataChannelDispatch *this)
{
  ;
}

/*
==============
DWGameMetrics::setupGameMetrics
==============
*/
bool DWGameMetrics::setupGameMetrics(DWGameMetrics *this)
{
  DWServicesAccess *Instance; 
  DWStandaloneUmbrella *StandaloneUmbrella; 
  const char *m_authToken; 
  bdGameMetrics *v5; 
  DWServicesAccess *v6; 
  unsigned int TitleID; 
  DWServicesAccess *v8; 
  DWServicesAccess *v9; 
  DWStandaloneUmbrella *v10; 
  const char *client; 
  const char *v12; 
  bdGameMetrics *v13; 
  unsigned __int64 userid; 
  bdGameMetrics *v15; 
  unsigned int Int_Internal_DebugName; 
  bdGameMetrics *v17; 
  bool Bool_Internal_DebugName; 
  DWServicesAccess *v19; 
  bdGameMetrics *m_gameMetrics; 
  bdEnvironment environment; 
  XUID result; 
  __int64 v24; 
  bdGameMetrics *v25; 
  char dest[16]; 

  v24 = -2i64;
  if ( this->m_currentControllerIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 4837, ASSERT_TYPE_ASSERT, "(-1 != m_currentControllerIndex)", (const char *)&queryFormat, "-1 != m_currentControllerIndex") )
    __debugbreak();
  if ( this->m_gameMetrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 4838, ASSERT_TYPE_ASSERT, "(!m_gameMetrics)", (const char *)&queryFormat, "!m_gameMetrics") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  StandaloneUmbrella = DWServicesAccess::GetStandaloneUmbrella(Instance);
  m_authToken = StandaloneUmbrella->m_authToken;
  v5 = NULL;
  if ( !StandaloneUmbrella->m_hasUmbrellaToken )
    m_authToken = NULL;
  if ( !m_authToken || !Live_IsUserSignedInToDemonware(this->m_currentControllerIndex) )
  {
    this->m_currentControllerIndex = -1;
    m_gameMetrics = this->m_gameMetrics;
    if ( m_gameMetrics )
    {
      ((void (__fastcall *)(bdGameMetrics *, __int64))m_gameMetrics->~bdReferencable)(m_gameMetrics, 1i64);
      this->m_gameMetrics = NULL;
    }
    return 0;
  }
  v6 = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(v6);
  Com_sprintf(dest, 0xAui64, "%d", TitleID);
  Live_GetXuid(&result, this->m_currentControllerIndex);
  v8 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::GetEnvironment(v8, &environment) )
  {
    v9 = DWServicesAccess::GetInstance();
    v10 = DWServicesAccess::GetStandaloneUmbrella(v9);
    client = DWStandaloneUmbrella::getClientId(v10, this->m_currentControllerIndex);
    if ( environment )
    {
      if ( environment == BD_ENVIRONMENT_CERT )
      {
        v12 = glutton_ingestion_point_v1_cert;
        goto LABEL_18;
      }
      if ( environment == BD_ENVIRONMENT_PROD )
      {
        v12 = glutton_ingestion_point_v1_live;
        goto LABEL_18;
      }
    }
    v12 = glutton_ingestion_point_v1_dev;
LABEL_18:
    v13 = (bdGameMetrics *)bdMemory::allocate(0x1C78ui64);
    v25 = v13;
    if ( v13 )
    {
      userid = XUID::GetUniversalId(&result);
      bdGameMetrics::bdGameMetrics(v13, v12, m_authToken, dest, "metrics", client, userid);
      v5 = v15;
    }
    this->m_gameMetrics = v5;
    if ( v5 )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_game_metrics_min_time_between_sends_s, "online_game_metrics_min_time_between_sends_s");
      bdGameMetrics::setUpdateInterval(v5, Int_Internal_DebugName);
      v17 = this->m_gameMetrics;
      Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_online_game_metrics_keep_alive, "online_game_metrics_keep_alive");
      bdDataChannelDispatch::setKeepAlive(v17, Bool_Internal_DebugName);
      LOBYTE(v17) = bdGameMetrics::init(this->m_gameMetrics, this->m_maxSizeGameMetricsChannel);
      v19 = DWServicesAccess::GetInstance();
      this->m_tokenCRC = DWServicesAccess::GetStandaloneUmbrella(v19)->m_umbrellaTokenCRC32;
      return (char)v17;
    }
  }
  return 0;
}

/*
==============
DWAsyncMatchMaking::shutdownMatchMaking
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::shutdownMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, bdBoolResult *success)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *matched; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        matched = bdAsyncMatchMaking::shutdownMatchMaking(AsyncMatchmaking, &resulta, mmID, success);
        bdReference<bdRemoteTask>::operator=(result, matched);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWLogin::start
==============
*/
bool DWLogin::start(DWLogin *this)
{
  bool result; 

  if ( !this->m_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 6428, ASSERT_TYPE_SANITY, "( m_login )", (const char *)&queryFormat, "m_login") )
    __debugbreak();
  result = bdLogin::start(this->m_login);
  if ( result )
    this->m_pending = 1;
  return result;
}

/*
==============
DWMarketplace::startExchangeTransaction
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::startExchangeTransaction(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdStringResult *transactionId)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *started; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v11; 

  v11 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        started = bdMarketplace::startExchangeTransaction(Marketplace, &resulta, transactionId);
        bdReference<bdRemoteTask>::operator=(result, started);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::startMatchMaking
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::startMatchMaking(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 mmID, const char *startMatchMakingParams, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *started; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        started = bdAsyncMatchMaking::startMatchMaking(AsyncMatchmaking, &resulta, mmID, startMatchMakingParams, paramsLength, matchMakingSearchStatus);
        bdReference<bdRemoteTask>::operator=(result, started);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::startSearch
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::startSearch(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *params, unsigned int paramsLength, bdStringResult *matchMakingSearchStatus)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *started; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        started = bdAsyncMatchMaking::startSearch(AsyncMatchmaking, &resulta, params, paramsLength, matchMakingSearchStatus);
        bdReference<bdRemoteTask>::operator=(result, started);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStandaloneUmbrella::startTokenRequest
==============
*/
void DWStandaloneUmbrella::startTokenRequest(DWStandaloneUmbrella *this)
{
  int i; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLogin *m_login; 
  bdLogin *v6; 
  DWServicesAccess *v7; 
  bdLoginResult *LoginResult; 
  const char *DWToken; 
  unsigned __int64 DWTokenExpiry; 
  char *m_authToken; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 

  for ( i = 0; i < 8; ++i )
  {
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, i);
    m_login = Login->m_login;
    if ( m_login )
    {
      if ( !bdLogin::isPending(m_login) )
      {
        v6 = Login->m_login;
        if ( v6 )
        {
          if ( bdLogin::succeeded(v6) )
          {
            v7 = DWServicesAccess::GetInstance();
            LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v7, i);
            DWToken = bdLoginResult::getDWToken(LoginResult);
            memcpy_0(this->m_authToken, DWToken, sizeof(this->m_authToken));
            DWTokenExpiry = bdLoginResult::getDWTokenExpiry(LoginResult);
            this->m_tokenExpiry = DWTokenExpiry;
            m_authToken = this->m_authToken;
            v12 = -1;
            v13 = 1024i64;
            do
            {
              v14 = (unsigned __int8)*m_authToken;
              v15 = (unsigned __int8)m_authToken[1];
              m_authToken += 4;
              LODWORD(v14) = (v12 >> 8) ^ g_crc32Table[v14 ^ (unsigned __int8)v12];
              v16 = ((unsigned int)v14 >> 8) ^ g_crc32Table[v15 ^ (unsigned __int8)v14];
              LODWORD(v14) = (v16 >> 8) ^ g_crc32Table[(unsigned __int8)*(m_authToken - 2) ^ (unsigned __int64)(unsigned __int8)v16];
              v12 = ((unsigned int)v14 >> 8) ^ g_crc32Table[(unsigned __int8)*(m_authToken - 1) ^ (unsigned __int64)(unsigned __int8)v14];
              --v13;
            }
            while ( v13 );
            this->m_umbrellaTokenCRC32 = ~v12;
            Com_Printf(25, "[DW] ** OnUmbrellaTokenAcquired - %zu [%s]\n", DWTokenExpiry, this->m_authToken);
            this->m_controllerIndexOfUmbrellaUser = i;
            this->m_hasUmbrellaToken = 1;
          }
        }
      }
    }
  }
}

/*
==============
DWMarketplace::steamProcessDurable
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::steamProcessDurable(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const unsigned int durableAppId, bdExchangeTransactionResultV2 *resulta)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> v13; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v11 = bdMarketplace::steamProcessDurable(Marketplace, &v13, transactionId, durableAppId, resulta);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( v13.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v13.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))v13.m_ptr->~bdReferencable)(v13.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMatchMaking::submitPerformance
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::submitPerformance(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const unsigned int gameType, const bdPerformanceValue *performanceValues, const unsigned int numValues)
{
  DWWrappers *m_owningWrapper; 
  bdPerformance *Performance; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getPerformance(&m_owningWrapper->m_lobbyService) )
      {
        Performance = DWLobbyService::getPerformance(&this->m_owningWrapper->m_lobbyService);
        v11 = bdPerformance::submitPerformance(Performance, &resulta, gameType, performanceValues, numValues);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWAsyncMatchMaking::submitTournamentMatchResults
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::submitTournamentMatchResults(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, const char *tournamentMatchResults, unsigned int matchResultsLength)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *matched; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        matched = bdAsyncMatchMaking::submitTournamentMatchResults(AsyncMatchmaking, &resulta, tournamentMatchResults, matchResultsLength);
        bdReference<bdRemoteTask>::operator=(result, matched);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::subscribeToChannel
==============
*/
bdReference<bdRemoteTask> *DWMessaging::subscribeToChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v9 = bdMessaging::subscribeToChannel(Messaging, &resulta, category, channelID, 0i64);
      bdReference<bdRemoteTask>::operator=(result, v9);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWPublisherVariables::subscribeToGroup
==============
*/
bdReference<bdRemoteTask> *DWPublisherVariables::subscribeToGroup(DWPublisherVariables *this, bdReference<bdRemoteTask> *result, unsigned int group)
{
  DWWrappers *m_owningWrapper; 
  bdPublisherVariables *PublisherVariables; 
  unsigned __int16 v8; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService) )
      {
        PublisherVariables = DWLobbyService::getPublisherVariables(&this->m_owningWrapper->m_lobbyService);
        v8 = truncate_cast<unsigned short,unsigned int>(group);
        v9 = bdPublisherVariables::subscribeToGroup(PublisherVariables, &resulta, v8);
        bdReference<bdRemoteTask>::operator=(result, v9);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWRichPresenceService::subscribeToPlayers
==============
*/
bdReference<bdRemoteTask> *DWRichPresenceService::subscribeToPlayers(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userIDs, const int numUsers, bdSubscribeToUsersPresenceResponseV3 *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformPresence *RichPresence; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  bdSubscribeToUsersPresenceRequestV3 request; 

  v14 = -2i64;
  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService) )
  {
    bdSubscribeToUsersPresenceRequestV3::bdSubscribeToUsersPresenceRequestV3(&request);
    bdSubscribeToUsersPresenceRequestV3::setContext(&request, "cod-shared");
    bdSubscribeToUsersPresenceRequestV3::setUsers(&request, numUsers, userIDs);
    RichPresence = DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService);
    v11 = bdCrossPlatformPresence::subscribeToUsersPresenceV3(RichPresence, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v11);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    `eh vector destructor iterator'(&request.m_users, 0x48ui64, 0x19ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
    bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&request.m_context);
    bdRESTRequest::~bdRESTRequest(&request);
  }
  return result;
}

/*
==============
DWLogin::succeeded
==============
*/
bool DWLogin::succeeded(DWLogin *this)
{
  bdLogin *m_login; 

  m_login = this->m_login;
  return m_login && bdLogin::succeeded(m_login);
}

/*
==============
DWAsyncMatchMaking::syncLobbyDocuments
==============
*/
bdReference<bdRemoteTask> *DWAsyncMatchMaking::syncLobbyDocuments(DWAsyncMatchMaking *this, bdReference<bdRemoteTask> *result, unsigned __int64 lobbyID, bdBoolResult *boolResult, const char *lobbyHostDoc, unsigned int lobbyHostDocLength, unsigned __int64 updateID)
{
  DWWrappers *m_owningWrapper; 
  bdAsyncMatchMaking *AsyncMatchmaking; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getAsyncMatchmaking(&m_owningWrapper->m_lobbyService) )
      {
        AsyncMatchmaking = DWLobbyService::getAsyncMatchmaking(&this->m_owningWrapper->m_lobbyService);
        v13 = bdAsyncMatchMaking::syncLobbyDocuments(AsyncMatchmaking, &resulta, lobbyID, boolResult, updateID, lobbyHostDoc, lobbyHostDocLength);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWGameMetrics::timing
==============
*/
char DWGameMetrics::timing(DWGameMetrics *this, unsigned __int64 timestamp, const char *const name, long double value)
{
  const dvar_t *v7; 

  if ( !this->m_gameMetrics )
    return 0;
  v7 = DVARBOOL_online_matchmaking_using_metrics;
  if ( !DVARBOOL_online_matchmaking_using_metrics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_using_metrics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled || !bdGameMetrics::timing(this->m_gameMetrics, timestamp, name, value) )
    return 0;
  ++this->m_messagesEnqueued;
  return 1;
}

/*
==============
DWUmbrella::unlinkUnoFromUmbrella
==============
*/
bdReference<bdRemoteTask> *DWUmbrella::unlinkUnoFromUmbrella(DWUmbrella *this, bdReference<bdRemoteTask> *result, unsigned __int64 umbrellaID, const bdUmbrellaProviderAccount *providerAccount, const char *accessToken, bool psnIDMode)
{
  bdUmbrella *Umbrella; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  if ( this->m_owningWrapper )
  {
    if ( this->isReady(this) )
    {
      Umbrella = DWLobbyService::getUmbrella(&this->m_owningWrapper->m_lobbyService);
      if ( Umbrella )
      {
        v11 = bdUmbrella::deauthorizeUserProviderAccount(Umbrella, &resulta, umbrellaID, providerAccount, accessToken, psnIDMode);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWClans::unregisterEventHandler
==============
*/
bool DWClans::unregisterEventHandler(DWClans *this, bdClansEventHandler *handler)
{
  DWWrappers *m_owningWrapper; 
  DWLobbyService *p_m_lobbyService; 
  bool v6; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v9; 
  DWLogin *v10; 
  bdLoginResult *v11; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  p_m_lobbyService = &this->m_owningWrapper->m_lobbyService;
  v6 = 0;
  DWLobbyService::getLobbyService(p_m_lobbyService, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v9 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v9) )
    {
      v10 = m_lobbyService->m_loginService;
      if ( v10 )
      {
        v11 = (bdLoginResult *)DWLogin::getResult(v10);
        LobbyService = bdLoginResult::getLobbyService(v11);
      }
      else
      {
        LobbyService = NULL;
      }
      v6 = bdLobbyService::unregisterPushMessageHandler(LobbyService, handler);
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return v6;
}

/*
==============
DWCrossPlatformIdentity::unregisterPushMessageHandler
==============
*/
bool DWCrossPlatformIdentity::unregisterPushMessageHandler(DWCrossPlatformIdentity *this, bdCrossPlatformIdentityPushMessageHandler *handler)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
  return bdCrossPlatformIdentity::unregisterPushMessageHandler(CrossPlatformIdentity, handler);
}

/*
==============
DWFriends::unregisterPushMessageHandler
==============
*/
bool DWFriends::unregisterPushMessageHandler(DWFriends *this, bdCrossPlatformFriendsPushMessageHandler *handler)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformFriends *Friends; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  Friends = DWLobbyService::getFriends(&this->m_owningWrapper->m_lobbyService);
  return bdCrossPlatformFriends::unregisterPushMessageHandler(Friends, handler);
}

/*
==============
DWLobbyService::unregisterPushMessageHandler
==============
*/
_BOOL8 DWLobbyService::unregisterPushMessageHandler(DWLobbyService *this, bdPushMessageHandler *handler)
{
  bool v3; 
  DWLobbyService *m_lobbyService; 
  DWLogin *m_loginService; 
  bdLoginResult *v6; 
  DWLogin *v7; 
  bdLoginResult *v8; 
  bdLobbyService *LobbyService; 
  DWLobbyServiceHandle result; 

  v3 = 0;
  DWLobbyService::getLobbyService(this, &result);
  m_lobbyService = result.m_lobbyService;
  m_loginService = result.m_lobbyService->m_loginService;
  if ( m_loginService )
  {
    v6 = (bdLoginResult *)DWLogin::getResult(m_loginService);
    if ( bdLoginResult::getLobbyService(v6) )
    {
      v7 = m_lobbyService->m_loginService;
      if ( v7 )
      {
        v8 = (bdLoginResult *)DWLogin::getResult(v7);
        LobbyService = bdLoginResult::getLobbyService(v8);
      }
      else
      {
        LobbyService = NULL;
      }
      v3 = bdLobbyService::unregisterPushMessageHandler(LobbyService, handler);
    }
  }
  DWLobbyServiceHandle::~DWLobbyServiceHandle(&result);
  return v3;
}

/*
==============
DWRichPresenceService::unregisterPushMessageHandler
==============
*/
bool DWRichPresenceService::unregisterPushMessageHandler(DWRichPresenceService *this, bdCrossPlatformPresencePushMessageHandler *pushMessageHandler)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformPresence *RichPresence; 

  m_owningWrapper = this->m_owningWrapper;
  if ( !m_owningWrapper || !DWWrappers::isReady(m_owningWrapper) || !DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService) )
    return 0;
  RichPresence = DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService);
  return bdCrossPlatformPresence::unregisterPushMessageHandler(RichPresence, pushMessageHandler);
}

/*
==============
DWMessaging::unsubscribeFromCategory
==============
*/
bdReference<bdRemoteTask> *DWMessaging::unsubscribeFromCategory(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v7; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v10; 

  v10 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v7 = bdMessaging::unsubscribeFromCategory(Messaging, &resulta, category);
      bdReference<bdRemoteTask>::operator=(result, v7);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::unsubscribeFromChannel
==============
*/
bdReference<bdRemoteTask> *DWMessaging::unsubscribeFromChannel(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v9; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v12; 

  v12 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v9 = bdMessaging::unsubscribeFromChannel(Messaging, &resulta, category, channelID);
      bdReference<bdRemoteTask>::operator=(result, v9);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWRichPresenceService::unsubscribeToPlayers
==============
*/
bdReference<bdRemoteTask> *DWRichPresenceService::unsubscribeToPlayers(DWRichPresenceService *this, bdReference<bdRemoteTask> *result, bdUserAccountID *userIDs, const int numUsers, bdUnsubscribeFromUsersPresenceResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformPresence *RichPresence; 
  const bdReference<bdRemoteTask> *v11; 
  unsigned __int32 v12; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  bdUnsubscribeFromUsersPresenceRequest request; 

  v15 = -2i64;
  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService) )
  {
    bdUnsubscribeFromUsersPresenceRequest::bdUnsubscribeFromUsersPresenceRequest(&request);
    bdUnsubscribeFromUsersPresenceRequest::setContext(&request, "cod-shared");
    bdUnsubscribeFromUsersPresenceRequest::setUsers(&request, numUsers, userIDs);
    RichPresence = DWLobbyService::getRichPresence(&this->m_owningWrapper->m_lobbyService);
    v11 = bdCrossPlatformPresence::unsubscribeFromUsers(RichPresence, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v11);
    if ( resulta.m_ptr )
    {
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v12 == 1 )
      {
        if ( resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v12);
      }
    }
    bdUnsubscribeFromUsersPresenceRequest::~bdUnsubscribeFromUsersPresenceRequest(&request);
  }
  return result;
}

/*
==============
DWClans::updateClan
==============
*/
bdReference<bdRemoteTask> *DWClans::updateClan(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const char *name, const char *clanTag, const bdUserAccountID *owner, bdClansGroupInfo *response)
{
  DWWrappers *m_owningWrapper; 
  const bdUserAccountID *v12; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *updated; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  bdUserAccountID v19; 
  const bdUserAccountID *v20; 
  bdClansUpdateGroupRequest request; 

  v17 = -2i64;
  v18 = result;
  v20 = owner;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansUpdateGroupRequest::bdClansUpdateGroupRequest(&request, 1u, id, 0, 0i64);
    bdClansGroupInfo::setName(&request, name);
    bdClansGroupInfo::setUniqueTag(&request, clanTag);
    bdUserAccountID::bdUserAccountID(&v19, owner);
    bdClansGroupInfo::setOwner(&request, v12);
    bdClansGroupInfo::setPrivacyLevel(&request, 3u);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    updated = bdMW4Service::updateGroup(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, updated);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_owner.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_owner.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_owner.m_value._bytes_48);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>(&request.m_uniqueTag);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)(&request.m_rootID + 1));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)request.gap2A8);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)owner->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)owner->gap38);
  return result;
}

/*
==============
DWClans::updateMemberRole
==============
*/
bdReference<bdRemoteTask> *DWClans::updateMemberRole(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const bdUserAccountID *member, const unsigned __int16 role, bdClansAddOrUpdateGroupMemberResponse *response)
{
  DWWrappers *m_owningWrapper; 
  const bdClansGroupIdentifier *v11; 
  const bdUserAccountID *v12; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *updated; 
  bdReference<bdRemoteTask> resulta; 
  int v17; 
  __int64 v18; 
  bdReference<bdRemoteTask> *v19; 
  bdClansGroupIdentifier v20; 
  bdUserAccountID v21; 
  const bdUserAccountID *v22; 
  bdClansAddOrUpdateGroupMemberRequest request; 

  v18 = -2i64;
  v19 = result;
  v22 = member;
  result->m_ptr = NULL;
  v17 = 1;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&v20, 1u, id, 0, 0i64);
    bdClansAddOrUpdateGroupMemberRequest::bdClansAddOrUpdateGroupMemberRequest(&request, v11);
    bdUserAccountID::bdUserAccountID(&v21, member);
    bdClansAddOrUpdateGroupMemberRequest::setUser(&request, v12);
    bdClansAddOrUpdateGroupMemberRequest::setRole(&request, role);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    updated = bdMW4Service::addOrUpdateGroupMember(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, updated);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_user.m_value._bytes_48);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_user.m_value.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)request.m_user.m_value._bytes_48);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.gap4C4[4]);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)member->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)member->gap38);
  return result;
}

/*
==============
DWMatchMaking::updateSession
==============
*/
bdReference<bdRemoteTask> *DWMatchMaking::updateSession(DWMatchMaking *this, bdReference<bdRemoteTask> *result, const bdSessionID *sessionID, bdMatchMakingInfo *const sessionInfo)
{
  DWWrappers *m_owningWrapper; 
  bdMatchMaking *MatchMaking; 
  const bdReference<bdRemoteTask> *updated; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    m_owningWrapper = this->m_owningWrapper;
    if ( m_owningWrapper )
    {
      if ( DWLobbyService::getMatchMaking(&m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3) )
      {
        MatchMaking = DWLobbyService::getMatchMaking(&this->m_owningWrapper->m_lobbyService, (const char *)&queryFormat.fmt + 3);
        updated = bdMatchMaking::updateSession(MatchMaking, &resulta, sessionID, sessionInfo);
        bdReference<bdRemoteTask>::operator=(result, updated);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWCrossPlatformIdentity::upgradeAnonAccToFull
==============
*/
bdReference<bdRemoteTask> *DWCrossPlatformIdentity::upgradeAnonAccToFull(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdUpgradeAnonUnoAccRequest *request, bdUpgradeAnonUnoAccResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
      {
        CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
        v10 = bdCrossPlatformIdentity::upgradeAnonAccToFull(CrossPlatformIdentity, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::upload
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::upload(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, bdUploadInterceptor *uploadHandler, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v19; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v22; 

  v22 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v19 = bdContentStreaming::upload(ContentStreaming, &resulta, fileSlot, uploadHandler, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, DEPRECATED_clientLocale);
        bdReference<bdRemoteTask>::operator=(result, v19);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::upload
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::upload(DWContentStreaming *this, bdReference<bdRemoteTask> *result, const unsigned __int16 fileSlot, const void *fileData, const unsigned int fileSize, const char *const fileName, const unsigned __int16 category, const void *thumbData, const unsigned int thumbDataSize, const unsigned int numTags, const bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v19; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v22; 

  v22 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v19 = bdContentStreaming::upload(ContentStreaming, &resulta, fileSlot, fileData, fileSize, fileName, category, thumbData, thumbDataSize, numTags, tags, fileID, DEPRECATED_clientLocale);
        bdReference<bdRemoteTask>::operator=(result, v19);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWPooledStorage::upload
==============
*/
bdReference<bdRemoteTask> *DWPooledStorage::upload(DWPooledStorage *this, bdReference<bdRemoteTask> *result, bdUploadInterceptor *uploadHandler, unsigned __int16 category, const char *const fileName, unsigned int numTags, bdTag *tags, bdFileID *fileID, const char *DEPRECATED_clientLocale)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v18; 

  v18 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
      {
        PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
        v15 = bdPooledStorage::upload(PooledStorage, &resulta, uploadHandler, category, fileName, numTags, tags, fileID, DEPRECATED_clientLocale);
        bdReference<bdRemoteTask>::operator=(result, v15);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWPooledStorage::upload
==============
*/
bdReference<bdRemoteTask> *DWPooledStorage::upload(DWPooledStorage *this, bdReference<bdRemoteTask> *result, const void *fileData, const unsigned int fileSize, unsigned __int16 category, const char *const fileName, const unsigned int numTags, bdTag *tags, bdFileID *fileID)
{
  DWWrappers *m_owningWrapper; 
  bdPooledStorage *PooledStorage; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v18; 

  v18 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService) )
      {
        PooledStorage = DWLobbyService::getPooledStorage(&this->m_owningWrapper->m_lobbyService);
        v15 = bdPooledStorage::upload(PooledStorage, &resulta, fileData, fileSize, category, fileName, numTags, tags, fileID);
        bdReference<bdRemoteTask>::operator=(result, v15);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::uploadAndValidateFiles
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::uploadAndValidateFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const dwMultiFileTask *multiFileTask, bdValidatedContextUserStorageFileInfo *const validatedFileInfo)
{
  bdValidatedContextUserStorageFileInfo *fileInfo; 
  bdReference<bdRemoteTask> *m_ptr; 
  unsigned int v8; 
  const bdUploadFilesInfo *v9; 
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v12; 
  unsigned __int32 v13; 
  bdReference<bdRemoteTask> resulta; 
  int v16; 
  bdValidatedContextUserStorageFileInfo *v17; 
  __int64 v18; 
  bdReference<bdRemoteTask> *v19; 
  bdUploadFilesInfo v20; 
  bdUploadFilesInfo ptr[24]; 

  v18 = -2i64;
  fileInfo = validatedFileInfo;
  v17 = validatedFileInfo;
  m_ptr = result;
  resulta.m_ptr = (bdRemoteTask *)result;
  v19 = result;
  `eh vector constructor iterator'(ptr, 0xC0ui64, 0x18ui64, (void (__fastcall *)(void *))bdUploadFilesInfo::bdUploadFilesInfo, (void (__fastcall *)(void *))bdUploadFilesInfo::~bdUploadFilesInfo);
  m_ptr->m_ptr = NULL;
  v16 = 1;
  v8 = 0;
  if ( multiFileTask->m_fileCount )
  {
    do
    {
      if ( !bdUserAccountID::operator==(&multiFileTask->m_userAccountID[v8], multiFileTask->m_userAccountID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 1963, ASSERT_TYPE_ASSERT, "(multiFileTask->m_userAccountID[index] == multiFileTask->m_userAccountID[0])", "%s\n\tUploading files to multiple accounts is not currently supported by uploadFiles.", "multiFileTask->m_userAccountID[index] == multiFileTask->m_userAccountID[0]") )
        __debugbreak();
      bdUploadFilesInfo::bdUploadFilesInfo(&v20);
      bdUploadFilesInfo::operator=(&ptr[v8], v9);
      bdUploadFilesInfo::~bdUploadFilesInfo(&v20);
      strncpy(ptr[v8].m_fileName, multiFileTask->m_fileName[v8], 0x80ui64);
      *((_QWORD *)&ptr[v8].m_fileData.__vftable + 2) = multiFileTask->m_buffer[v8];
      *((_DWORD *)&ptr[v8].m_fileData.__vftable + 6) = multiFileTask->m_bufferSize[v8];
      *(_QWORD *)&ptr[v8++].m_version = 0i64;
    }
    while ( v8 < multiFileTask->m_fileCount );
    m_ptr = (bdReference<bdRemoteTask> *)resulta.m_ptr;
    fileInfo = v17;
  }
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v12 = bdStorage::uploadAndValidateFiles(Storage, &resulta, ptr, multiFileTask->m_fileCount, 1u, multiFileTask->m_userAccountID, fileInfo);
        bdReference<bdRemoteTask>::operator=(m_ptr, v12);
        if ( resulta.m_ptr )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v13 == 1 )
          {
            if ( resulta.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v13);
          }
        }
      }
    }
  }
  `eh vector destructor iterator'(ptr, 0xC0ui64, 0x18ui64, (void (__fastcall *)(void *))bdUploadFilesInfo::~bdUploadFilesInfo);
  return m_ptr;
}

/*
==============
DWStorageContext::uploadFile
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::uploadFile(DWStorageContext *this, bdReference<bdRemoteTask> *result, const char *const fileName, const void *const fileData, const unsigned int fileSize, const bdFileInfo::bdVisibility fileVisibility, const bdUserAccountID *ownerID, bdContextUserStorageFileInfo *const fileInfo)
{
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v14; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v17; 

  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v14 = bdStorage::uploadFile(Storage, &resulta, fileName, fileData, fileSize, fileVisibility, ownerID, fileInfo);
        bdReference<bdRemoteTask>::operator=(result, v14);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStorageContext::uploadFiles
==============
*/
bdReference<bdRemoteTask> *DWStorageContext::uploadFiles(DWStorageContext *this, bdReference<bdRemoteTask> *result, const dwMultiFileTask *multiFileTask, bdContextUserStorageFileInfo *const fileInfo)
{
  bdContextUserStorageFileInfo *v4; 
  bdReference<bdRemoteTask> *m_ptr; 
  unsigned int v8; 
  const bdUploadFilesInfo *v9; 
  DWWrappers *m_owningWrapper; 
  bdStorage *Storage; 
  const bdReference<bdRemoteTask> *v12; 
  unsigned __int32 v13; 
  bdReference<bdRemoteTask> resulta; 
  int v16; 
  bdContextUserStorageFileInfo *v17; 
  __int64 v18; 
  bdReference<bdRemoteTask> *v19; 
  bdUploadFilesInfo v20; 
  bdUploadFilesInfo ptr[24]; 

  v18 = -2i64;
  v4 = fileInfo;
  v17 = fileInfo;
  m_ptr = result;
  resulta.m_ptr = (bdRemoteTask *)result;
  v19 = result;
  `eh vector constructor iterator'(ptr, 0xC0ui64, 0x18ui64, (void (__fastcall *)(void *))bdUploadFilesInfo::bdUploadFilesInfo, (void (__fastcall *)(void *))bdUploadFilesInfo::~bdUploadFilesInfo);
  m_ptr->m_ptr = NULL;
  v16 = 1;
  v8 = 0;
  if ( multiFileTask->m_fileCount )
  {
    do
    {
      if ( !bdUserAccountID::operator==(&multiFileTask->m_userAccountID[v8], multiFileTask->m_userAccountID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwserviceswrappers.cpp", 1935, ASSERT_TYPE_ASSERT, "(multiFileTask->m_userAccountID[index] == multiFileTask->m_userAccountID[0])", "%s\n\tUploading files to multiple accounts is not currently supported by uploadFiles.", "multiFileTask->m_userAccountID[index] == multiFileTask->m_userAccountID[0]") )
        __debugbreak();
      bdUploadFilesInfo::bdUploadFilesInfo(&v20);
      bdUploadFilesInfo::operator=(&ptr[v8], v9);
      bdUploadFilesInfo::~bdUploadFilesInfo(&v20);
      strncpy(ptr[v8].m_fileName, multiFileTask->m_fileName[v8], 0x80ui64);
      *((_QWORD *)&ptr[v8].m_fileData.__vftable + 2) = multiFileTask->m_buffer[v8];
      *((_DWORD *)&ptr[v8].m_fileData.__vftable + 6) = multiFileTask->m_bufferSize[v8];
      *(_QWORD *)&ptr[v8++].m_version = 0i64;
    }
    while ( v8 < multiFileTask->m_fileCount );
    m_ptr = (bdReference<bdRemoteTask> *)resulta.m_ptr;
    v4 = v17;
  }
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string) )
      {
        Storage = DWLobbyService::getStorage(&this->m_owningWrapper->m_lobbyService, this->m_context.m_string);
        v12 = bdStorage::uploadFiles(Storage, &resulta, ptr, multiFileTask->m_fileCount, 1u, multiFileTask->m_userAccountID, v4);
        bdReference<bdRemoteTask>::operator=(m_ptr, v12);
        if ( resulta.m_ptr )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v13 == 1 )
          {
            if ( resulta.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, v13);
          }
        }
      }
    }
  }
  `eh vector destructor iterator'(ptr, 0xC0ui64, 0x18ui64, (void (__fastcall *)(void *))bdUploadFilesInfo::~bdUploadFilesInfo);
  return m_ptr;
}

/*
==============
DWClans::uploadGroupFile
==============
*/
bdReference<bdRemoteTask> *DWClans::uploadGroupFile(DWClans *this, bdReference<bdRemoteTask> *result, const unsigned __int64 id, const char *filename, unsigned __int8 *fileBuffer, const unsigned int bufferSize, bdClansUploadGroupFileResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdMW4Service *Clans; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  bdClansGroupIdentifier group; 
  bdClansGroupFile file; 
  bdClansUploadGroupFileRequest request; 

  v16 = -2i64;
  v17 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper && DWWrappers::isReady(m_owningWrapper) && DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService) )
  {
    bdClansGroupIdentifier::bdClansGroupIdentifier(&group, 1u, id, 0, 0i64);
    bdClansGroupFile::bdClansGroupFile(&file);
    bdClansGroupFile::setFileData(&file, fileBuffer, bufferSize);
    bdClansGroupFile::setFileName(&file, filename);
    bdClansGroupFile::setGroup(&file, &group);
    bdClansUploadGroupFileRequest::bdClansUploadGroupFileRequest(&request, &file);
    Clans = DWLobbyService::getClans(&this->m_owningWrapper->m_lobbyService);
    v13 = bdMW4Service::uploadGroupFile(Clans, &resulta, &request, response);
    bdReference<bdRemoteTask>::operator=(result, v13);
    if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)&request.m_file[64]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&request.m_file[16]);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_file[48]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_file);
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_file[352]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&request.m_file[368]);
    bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>(&file.m_fileName);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)file.m_group);
    bdReferencable::~bdReferencable((bdReferencable *)&file.m_group[32]);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&file.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&file.m_updatedTimestamp + 1));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&group.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&group.m_rootID + 1));
  }
  return result;
}

/*
==============
DWObjectStore::uploadUserObjectsVectorized
==============
*/
bdReference<bdRemoteTask> *DWObjectStore::uploadUserObjectsVectorized(DWObjectStore *this, bdReference<bdRemoteTask> *result, const bdObjectStoreUploadUserObjectsVectorizedRequest *request, bdObjectStoreUploadUserObjectsVectorizedResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdObjectStore *ObjectStore; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService) )
      {
        ObjectStore = DWLobbyService::getObjectStore(&this->m_owningWrapper->m_lobbyService);
        v10 = bdObjectStore::uploadUserObjectsVectorized(ObjectStore, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWContentStreaming::uploadUserSummaryMetaData
==============
*/
bdReference<bdRemoteTask> *DWContentStreaming::uploadUserSummaryMetaData(DWContentStreaming *this, bdReference<bdRemoteTask> *result, unsigned __int64 fileID, const void *summaryData, unsigned int summaryDataSize, const void *metaData, unsigned int metaDataSize, unsigned int numTags, bdTag *tags)
{
  DWWrappers *m_owningWrapper; 
  bdContentStreaming *ContentStreaming; 
  const bdReference<bdRemoteTask> *v15; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v18; 

  v18 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService) )
      {
        ContentStreaming = DWLobbyService::getContentStreaming(&this->m_owningWrapper->m_lobbyService);
        v15 = bdContentStreaming::uploadUserSummaryMetaData(ContentStreaming, &resulta, fileID, summaryData, summaryDataSize, metaData, metaDataSize, numTags, tags);
        bdReference<bdRemoteTask>::operator=(result, v15);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWCrossPlatformIdentity::usernameSearch
==============
*/
bdReference<bdRemoteTask> *DWCrossPlatformIdentity::usernameSearch(DWCrossPlatformIdentity *this, bdReference<bdRemoteTask> *result, const bdGetCrossPlatformUserSearchRequest *request, bdGetCrossPlatformUserSearchResponse *response)
{
  DWWrappers *m_owningWrapper; 
  bdCrossPlatformIdentity *CrossPlatformIdentity; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService) )
      {
        CrossPlatformIdentity = DWLobbyService::getCrossPlatformIdentity(&this->m_owningWrapper->m_lobbyService);
        v10 = bdCrossPlatformIdentity::usernameSearch(CrossPlatformIdentity, &resulta, request, response);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::validateInventoriesItems
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::validateInventoriesItems(DWMarketplace *this, bdReference<bdRemoteTask> *result, bdValidateInventoriesItemsRequest *request, bdValidateInventoriesItemsResponse *a4)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v10 = bdMarketplace::validateInventoriesItems(Marketplace, &resulta, request, a4);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::validateInventoryItemsToken
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::validateInventoryItemsToken(DWMarketplace *this, bdReference<bdRemoteTask> *result, char *const fileName, const bdValidationTokenResult *token, bdValidationTokenResult *validationTokenResult)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v11 = bdMarketplace::validateInventoryItemsToken(Marketplace, &resulta, fileName, token, validationTokenResult);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWTitleUtilities::verifyString
==============
*/
bdReference<bdRemoteTask> *DWTitleUtilities::verifyString(DWTitleUtilities *this, bdReference<bdRemoteTask> *result, const char *const str, const unsigned int length, bdVerifyString *verified)
{
  DWWrappers *m_owningWrapper; 
  bdTitleUtilities *TitleUtilities; 
  const bdReference<bdRemoteTask> *v11; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v14; 

  v14 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService) )
      {
        TitleUtilities = DWLobbyService::getTitleUtilities(&this->m_owningWrapper->m_lobbyService);
        v11 = bdTitleUtilities::verifyString(TitleUtilities, &resulta, str, length, verified);
        bdReference<bdRemoteTask>::operator=(result, v11);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMessaging::whisperToChannelMember
==============
*/
bdReference<bdRemoteTask> *DWMessaging::whisperToChannelMember(DWMessaging *this, bdReference<bdRemoteTask> *result, const char *category, const unsigned __int64 channelID, const unsigned __int64 userID, const void *const message, const unsigned int messageSize, const unsigned int messageType)
{
  bdMessaging *Messaging; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  if ( this->isReady(this) )
  {
    if ( DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService) )
    {
      Messaging = DWLobbyService::getMessaging(&this->m_owningWrapper->m_lobbyService);
      v13 = bdMessaging::whisperToChannelMember(Messaging, &resulta, category, channelID, userID, message, messageSize, messageType);
      bdReference<bdRemoteTask>::operator=(result, v13);
      if ( resulta.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
      }
    }
  }
  return result;
}

/*
==============
DWDataChannelDispatch::write
==============
*/
bool DWDataChannelDispatch::write(DWDataChannelDispatch *this, const char *const category, const char *const data, unsigned int size)
{
  bdDataChannelDispatch *DispatchInstance; 

  DispatchInstance = DWDataChannelDispatch::getDispatchInstance(this, category);
  return Com_FrontEnd_IsInFrontEnd() && DispatchInstance && bdDataChannelDispatch::write(DispatchInstance, (const unsigned __int8 *const)data, size, SERIALIZATION_FORMAT_DDL4, COMPRESSION_TYPE_NONE);
}

/*
==============
DWStats::writeServerValidatedStats
==============
*/
bdReference<bdRemoteTask> *DWStats::writeServerValidatedStats(DWStats *this, bdReference<bdRemoteTask> *result, const unsigned __int8 *tokenData, unsigned int tokenSize)
{
  DWWrappers *m_owningWrapper; 
  bdStats *Stats; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        Stats = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v10 = bdStats::writeServerValidatedStats(Stats, &resulta, tokenData, tokenSize);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWStats::writeStats
==============
*/
bdReference<bdRemoteTask> *DWStats::writeStats(DWStats *this, bdReference<bdRemoteTask> *result, bdStatsInfo **stats, const unsigned int numStats)
{
  DWWrappers *m_owningWrapper; 
  bdStats *v9; 
  const bdReference<bdRemoteTask> *v10; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v13; 

  v13 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService) )
      {
        v9 = DWLobbyService::getStats(&this->m_owningWrapper->m_lobbyService);
        v10 = bdStats::writeStats(v9, &resulta, stats, numStats);
        bdReference<bdRemoteTask>::operator=(result, v10);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::xboxOneProcessProduct
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::xboxOneProcessProduct(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v12; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v15; 

  v15 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v12 = bdMarketplace::xboxOneProcessProduct(Marketplace, &resulta, transactionId, delegationToken, productID, transactionResult);
        bdReference<bdRemoteTask>::operator=(result, v12);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

/*
==============
DWMarketplace::xboxOneTransferConsumable
==============
*/
bdReference<bdRemoteTask> *DWMarketplace::xboxOneTransferConsumable(DWMarketplace *this, bdReference<bdRemoteTask> *result, const char *transactionId, const char *delegationToken, const char *consumablePath, const char *productID, bdExchangeTransactionResultV2 *transactionResult)
{
  DWWrappers *m_owningWrapper; 
  bdMarketplace *Marketplace; 
  const bdReference<bdRemoteTask> *v13; 
  bdReference<bdRemoteTask> resulta; 
  bdReference<bdRemoteTask> *v16; 

  v16 = result;
  result->m_ptr = NULL;
  m_owningWrapper = this->m_owningWrapper;
  if ( m_owningWrapper )
  {
    if ( DWWrappers::isReady(m_owningWrapper) )
    {
      if ( DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService) )
      {
        Marketplace = DWLobbyService::getMarketplace(&this->m_owningWrapper->m_lobbyService);
        v13 = bdMarketplace::xboxOneTransferConsumable(Marketplace, &resulta, transactionId, delegationToken, consumablePath, productID, transactionResult);
        bdReference<bdRemoteTask>::operator=(result, v13);
        if ( resulta.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
        }
      }
    }
  }
  return result;
}

