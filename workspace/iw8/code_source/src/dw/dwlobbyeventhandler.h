/*
==============
dwLobbyEventHandler<2>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<2>::onRewardAchievementJSONMessage(dwLobbyEventHandler<2> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$01@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<6>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<6>::onChatChannelMessage(dwLobbyEventHandler<6> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$05@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<2>::onFeatureBan(dwLobbyEventHandler<2> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$01@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<1>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<1>::onPlayerBanned(dwLobbyEventHandler<1> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$00@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<0>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<0>::onChallengesReceived(dwLobbyEventHandler<0> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$0A@@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<3>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<3>::onChatChannelUpdate(dwLobbyEventHandler<3> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$02@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<0>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<0>::onChatChannelUserPromoted(dwLobbyEventHandler<0> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$0A@@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<0>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<0>::onBroadcastMessage(dwLobbyEventHandler<0> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$0A@@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<1>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<1>::onClaimAchievement(dwLobbyEventHandler<1> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$00@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<2>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<2>::onChatChannelUpdate(dwLobbyEventHandler<2> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$01@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<2>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<2>::onChatChannelMessage(dwLobbyEventHandler<2> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$01@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<6>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<6>::onConsoleBanned(dwLobbyEventHandler<6> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$05@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<7>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<7>::onChallengesReceived(dwLobbyEventHandler<7> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$06@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<7>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<7>::onClaimAchievement(dwLobbyEventHandler<7> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$06@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<3>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<3>::onFeatureBan(dwLobbyEventHandler<3> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$02@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<7>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<7>::onMultipleLogon(dwLobbyEventHandler<7> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$06@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<2>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<2>::onGlobalInstantMessage(dwLobbyEventHandler<2> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$01@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<2>::onBroadcastMessage(dwLobbyEventHandler<2> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$01@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<0>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<0>::onMultipleLogon(dwLobbyEventHandler<0> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$0A@@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<4>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<4>::onRewardAchievementJSONMessage(dwLobbyEventHandler<4> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$03@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<5>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<5>::onChatChannelUserPromoted(dwLobbyEventHandler<5> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$04@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<4>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<4>::onGlobalInstantMessage(dwLobbyEventHandler<4> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$03@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<4>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<4>::onChallengesReceived(dwLobbyEventHandler<4> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$03@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<1>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<1>::onGlobalInstantMessage(dwLobbyEventHandler<1> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$00@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<3>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<3>::onPlayerStabilised(dwLobbyEventHandler<3> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$02@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<4>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<4>::onClaimAchievement(dwLobbyEventHandler<4> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$03@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<6>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<6>::onChallengesReceived(dwLobbyEventHandler<6> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$05@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<3>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<3>::onClaimAchievement(dwLobbyEventHandler<3> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$02@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<2>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<2>::onPlayerBanned(dwLobbyEventHandler<2> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$01@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<3>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<3>::onChatChannelMessage(dwLobbyEventHandler<3> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$02@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<7>::onPublisherVariablesUpdate(dwLobbyEventHandler<7> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$06@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<7>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<7>::onChatChannelUpdate(dwLobbyEventHandler<7> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$06@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<2>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<2>::onChatChannelUserPromoted(dwLobbyEventHandler<2> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$01@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<4>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<4>::onNewMail(dwLobbyEventHandler<4> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$03@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<3>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<3>::onPublisherVariablesUpdate(dwLobbyEventHandler<3> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$02@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<6>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<6>::onGlobalInstantMessage(dwLobbyEventHandler<6> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$05@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<2>::onConsoleBanned(dwLobbyEventHandler<2> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$01@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<4>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<4>::onPlayerStabilised(dwLobbyEventHandler<4> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$03@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<4>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<4>::onBroadcastMessage(dwLobbyEventHandler<4> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$03@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<5>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<5>::onTeamProposal(dwLobbyEventHandler<5> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$04@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<1>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<1>::onBroadcastMessage(dwLobbyEventHandler<1> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$00@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<0>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<0>::onNewMail(dwLobbyEventHandler<0> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$0A@@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<1>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<1>::onChatChannelUserPromoted(dwLobbyEventHandler<1> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$00@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<6>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<6>::onRewardAchievementJSONMessage(dwLobbyEventHandler<6> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$05@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<2>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<2>::onNewMail(dwLobbyEventHandler<2> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$01@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<7>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<7>::onChatChannelMessage(dwLobbyEventHandler<7> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$06@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<7>::onPlayerBanned(dwLobbyEventHandler<7> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$06@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<3>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<3>::onBroadcastMessage(dwLobbyEventHandler<3> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$02@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<7>::onConsoleBanned(dwLobbyEventHandler<7> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$06@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<1>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<1>::onNewMail(dwLobbyEventHandler<1> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$00@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<0>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<0>::onChatChannelUpdate(dwLobbyEventHandler<0> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$0A@@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<0>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<0>::onClaimAchievement(dwLobbyEventHandler<0> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$0A@@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<5>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<5>::onClaimAchievement(dwLobbyEventHandler<5> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$04@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<2>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<2>::onTeamProposal(dwLobbyEventHandler<2> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$01@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<3>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<3>::onGroupMessagingMessage(dwLobbyEventHandler<3> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$02@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<3>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<3>::onTeamProposal(dwLobbyEventHandler<3> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$02@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<7>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<7>::onNewMail(dwLobbyEventHandler<7> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$06@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<2>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<2>::onPlayerStabilised(dwLobbyEventHandler<2> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$01@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<6>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<6>::onBroadcastMessage(dwLobbyEventHandler<6> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$05@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<4>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<4>::onTeamProposal(dwLobbyEventHandler<4> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$03@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<6>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<6>::onGroupMessagingMessage(dwLobbyEventHandler<6> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$05@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<4>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<4>::onPlayerBanned(dwLobbyEventHandler<4> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$03@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<7>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<7>::onFeatureBan(dwLobbyEventHandler<7> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$06@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<7>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<7>::onBroadcastMessage(dwLobbyEventHandler<7> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$06@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<5>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<5>::onGlobalInstantMessage(dwLobbyEventHandler<5> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$04@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<2>::onMultipleLogon(dwLobbyEventHandler<2> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$01@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<3>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<3>::onConsoleBanned(dwLobbyEventHandler<3> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$02@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<4>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<4>::onChatChannelUserPromoted(dwLobbyEventHandler<4> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$03@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<0>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<0>::onGlobalInstantMessage(dwLobbyEventHandler<0> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$0A@@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<1>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<1>::onMultipleLogon(dwLobbyEventHandler<1> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$00@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<3>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<3>::onChatChannelUserPromoted(dwLobbyEventHandler<3> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$02@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<6>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<6>::onPlayerStabilised(dwLobbyEventHandler<6> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$05@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<3>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<3>::onChallengesReceived(dwLobbyEventHandler<3> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$02@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<5>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<5>::onNewMail(dwLobbyEventHandler<5> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$04@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<4>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<4>::onChatChannelUpdate(dwLobbyEventHandler<4> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$03@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<6>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<6>::onChatChannelUserPromoted(dwLobbyEventHandler<6> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$05@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<1>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<1>::onChallengesReceived(dwLobbyEventHandler<1> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$00@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<4>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<4>::onChatChannelMessage(dwLobbyEventHandler<4> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$03@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<1>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<1>::onPublisherVariablesUpdate(dwLobbyEventHandler<1> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$00@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<1>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<1>::onGroupMessagingMessage(dwLobbyEventHandler<1> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$00@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<5>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<5>::onChallengesReceived(dwLobbyEventHandler<5> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$04@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<6>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<6>::onMultipleLogon(dwLobbyEventHandler<6> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$05@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<0>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<0>::onRewardAchievementJSONMessage(dwLobbyEventHandler<0> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$0A@@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<3>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<3>::onGlobalInstantMessage(dwLobbyEventHandler<3> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$02@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<7>::onGroupMessagingMessage(dwLobbyEventHandler<7> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$06@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<5>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<5>::onFeatureBan(dwLobbyEventHandler<5> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$04@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<6>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<6>::onPublisherVariablesUpdate(dwLobbyEventHandler<6> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$05@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<7>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<7>::onPlayerStabilised(dwLobbyEventHandler<7> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$06@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<4>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<4>::onConsoleBanned(dwLobbyEventHandler<4> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$03@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<2>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<2>::onClaimAchievement(dwLobbyEventHandler<2> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$01@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<5>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<5>::onRewardAchievementJSONMessage(dwLobbyEventHandler<5> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$04@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<4>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<4>::onFeatureBan(dwLobbyEventHandler<4> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$03@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<0>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<0>::onPlayerBanned(dwLobbyEventHandler<0> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$0A@@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<6>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<6>::onTeamProposal(dwLobbyEventHandler<6> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$05@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<1>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<1>::onRewardAchievementJSONMessage(dwLobbyEventHandler<1> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$00@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<5>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<5>::onGroupMessagingMessage(dwLobbyEventHandler<5> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$04@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<7>::onRewardAchievementJSONMessage(dwLobbyEventHandler<7> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$06@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<3>::onRewardAchievementJSONMessage
==============
*/

void __fastcall dwLobbyEventHandler<3>::onRewardAchievementJSONMessage(dwLobbyEventHandler<3> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?onRewardAchievementJSONMessage@?$dwLobbyEventHandler@$02@@UEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
dwLobbyEventHandler<5>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<5>::onConsoleBanned(dwLobbyEventHandler<5> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$04@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<0>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<0>::onPublisherVariablesUpdate(dwLobbyEventHandler<0> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$0A@@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<0>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<0>::onConsoleBanned(dwLobbyEventHandler<0> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$0A@@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<1>::onConsoleBanned
==============
*/

void __fastcall dwLobbyEventHandler<1>::onConsoleBanned(dwLobbyEventHandler<1> *this, unsigned __int64 userID)
{
  ?onConsoleBanned@?$dwLobbyEventHandler@$00@@UEAAX_K@Z(this, userID);
}

/*
==============
dwLobbyEventHandler<5>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<5>::onChatChannelMessage(dwLobbyEventHandler<5> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$04@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<1>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<1>::onPlayerStabilised(dwLobbyEventHandler<1> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$00@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<0>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<0>::onGroupMessagingMessage(dwLobbyEventHandler<0> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$0A@@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<7>::onTeamProposal(dwLobbyEventHandler<7> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$06@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<4>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<4>::onPublisherVariablesUpdate(dwLobbyEventHandler<4> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$03@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<0>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<0>::onPlayerStabilised(dwLobbyEventHandler<0> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$0A@@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<3>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<3>::onNewMail(dwLobbyEventHandler<3> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$02@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<7>::onGlobalInstantMessage
==============
*/

void __fastcall dwLobbyEventHandler<7>::onGlobalInstantMessage(dwLobbyEventHandler<7> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  ?onGlobalInstantMessage@?$dwLobbyEventHandler@$06@@UEAAX_KPEADPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<2>::onPublisherVariablesUpdate(dwLobbyEventHandler<2> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$01@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<4>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<4>::onMultipleLogon(dwLobbyEventHandler<4> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$03@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<0>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<0>::onFeatureBan(dwLobbyEventHandler<0> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$0A@@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<6>::onNewMail
==============
*/

void __fastcall dwLobbyEventHandler<6>::onNewMail(dwLobbyEventHandler<6> *this)
{
  ?onNewMail@?$dwLobbyEventHandler@$05@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<0>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<0>::onChatChannelMessage(dwLobbyEventHandler<0> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$0A@@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<5>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<5>::onPlayerBanned(dwLobbyEventHandler<5> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$04@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<7>::onChatChannelUserPromoted
==============
*/

void __fastcall dwLobbyEventHandler<7>::onChatChannelUserPromoted(dwLobbyEventHandler<7> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  ?onChatChannelUserPromoted@?$dwLobbyEventHandler@$06@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@1@Z(this, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<5>::onPlayerStabilised
==============
*/

void __fastcall dwLobbyEventHandler<5>::onPlayerStabilised(dwLobbyEventHandler<5> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  ?onPlayerStabilised@?$dwLobbyEventHandler@$04@@UEAAX_K0@Z(this, userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<0>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<0>::onTeamProposal(dwLobbyEventHandler<0> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$0A@@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<5>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<5>::onMultipleLogon(dwLobbyEventHandler<5> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$04@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<6>::onClaimAchievement
==============
*/

void __fastcall dwLobbyEventHandler<6>::onClaimAchievement(dwLobbyEventHandler<6> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  ?onClaimAchievement@?$dwLobbyEventHandler@$05@@UEAAXVbdUserAccountID@@QEADIIQEBVbdMarketplaceInventory@@@Z(this, userID, context, reason, numItems, updates);
}

/*
==============
dwLobbyEventHandler<5>::onPublisherVariablesUpdate
==============
*/

void __fastcall dwLobbyEventHandler<5>::onPublisherVariablesUpdate(dwLobbyEventHandler<5> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool a6)
{
  ?onPublisherVariablesUpdate@?$dwLobbyEventHandler@$04@@UEAAXQEBD0GG_N@Z(this, __formal, nameSpace, majorVersion, minorVersion, a6);
}

/*
==============
dwLobbyEventHandler<6>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<6>::onChatChannelUpdate(dwLobbyEventHandler<6> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$05@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<1>::onChatChannelMessage
==============
*/

void __fastcall dwLobbyEventHandler<1>::onChatChannelMessage(dwLobbyEventHandler<1> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?onChatChannelMessage@?$dwLobbyEventHandler@$00@@UEAAXQEBD_K1PEADIPEAXI@Z(this, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
dwLobbyEventHandler<1>::onTeamProposal
==============
*/

void __fastcall dwLobbyEventHandler<1>::onTeamProposal(dwLobbyEventHandler<1> *this)
{
  ?onTeamProposal@?$dwLobbyEventHandler@$00@@UEAAXXZ(this);
}

/*
==============
dwLobbyEventHandler<3>::onMultipleLogon
==============
*/

void __fastcall dwLobbyEventHandler<3>::onMultipleLogon(dwLobbyEventHandler<3> *this, unsigned __int64 userAccountID)
{
  ?onMultipleLogon@?$dwLobbyEventHandler@$02@@UEAAX_K@Z(this, userAccountID);
}

/*
==============
dwLobbyEventHandler<3>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<3>::onPlayerBanned(dwLobbyEventHandler<3> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$02@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<5>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<5>::onChatChannelUpdate(dwLobbyEventHandler<5> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$04@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<1>::onChatChannelUpdate
==============
*/

void __fastcall dwLobbyEventHandler<1>::onChatChannelUpdate(dwLobbyEventHandler<1> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?onChatChannelUpdate@?$dwLobbyEventHandler@$00@@UEAAXAEBVbdChannelInfo@@AEBVbdChannelMember@@E@Z(this, channel, member, status);
}

/*
==============
dwLobbyEventHandler<5>::onBroadcastMessage
==============
*/

void __fastcall dwLobbyEventHandler<5>::onBroadcastMessage(dwLobbyEventHandler<5> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onBroadcastMessage@?$dwLobbyEventHandler@$04@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onChallengesReceived
==============
*/

void __fastcall dwLobbyEventHandler<2>::onChallengesReceived(dwLobbyEventHandler<2> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  ?onChallengesReceived@?$dwLobbyEventHandler@$01@@UEAAX_KV?$bdReference@VbdAntiCheatChallenges@@@@@Z(this, __formal, challenges);
}

/*
==============
dwLobbyEventHandler<2>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<2>::onGroupMessagingMessage(dwLobbyEventHandler<2> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$01@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<6>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<6>::onFeatureBan(dwLobbyEventHandler<6> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$05@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<1>::onFeatureBan
==============
*/

void __fastcall dwLobbyEventHandler<1>::onFeatureBan(dwLobbyEventHandler<1> *this, const bdFeatureBanInfo *ban)
{
  ?onFeatureBan@?$dwLobbyEventHandler@$00@@UEAAXAEBVbdFeatureBanInfo@@@Z(this, ban);
}

/*
==============
dwLobbyEventHandler<4>::onGroupMessagingMessage
==============
*/

void __fastcall dwLobbyEventHandler<4>::onGroupMessagingMessage(dwLobbyEventHandler<4> *this, unsigned __int64 senderID, const char *senderName, void *message, unsigned int messageSize)
{
  ?onGroupMessagingMessage@?$dwLobbyEventHandler@$03@@UEAAX_KPEBDPEAXI@Z(this, senderID, senderName, message, messageSize);
}

/*
==============
dwLobbyEventHandler<6>::onPlayerBanned
==============
*/

void __fastcall dwLobbyEventHandler<6>::onPlayerBanned(dwLobbyEventHandler<6> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  ?onPlayerBanned@?$dwLobbyEventHandler@$05@@UEAAX_KI_JI@Z(this, userID, reputationLevel, expiry, reason);
}

/*
==============
dwLobbyEventHandler<0>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<0>::onChallengesReceived(dwLobbyEventHandler<0> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(0, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<0>::onNewMail
==============
*/
void dwLobbyEventHandler<0>::onNewMail(dwLobbyEventHandler<0> *this)
{
  dwMail_HandleOnNewMailEvent(0);
}

/*
==============
dwLobbyEventHandler<0>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<0>::onPlayerBanned(dwLobbyEventHandler<0> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(0, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<0>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<0>::onConsoleBanned(dwLobbyEventHandler<0> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<0>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<0>::onGlobalInstantMessage(dwLobbyEventHandler<0> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 0, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 0, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<0>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<0>::onPlayerStabilised(dwLobbyEventHandler<0> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<0>::onFeatureBan
==============
*/
void dwLobbyEventHandler<0>::onFeatureBan(dwLobbyEventHandler<0> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(0, ban);
}

/*
==============
dwLobbyEventHandler<0>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<0>::onGroupMessagingMessage(dwLobbyEventHandler<0> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<0>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<0>::onBroadcastMessage(dwLobbyEventHandler<0> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<0>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<0>::onMultipleLogon(dwLobbyEventHandler<0> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<0>::onTeamProposal
==============
*/
void dwLobbyEventHandler<0>::onTeamProposal(dwLobbyEventHandler<0> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<0>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<0>::onClaimAchievement(dwLobbyEventHandler<0> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 0, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<0>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<0>::onRewardAchievementJSONMessage(dwLobbyEventHandler<0> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<0>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<0>::onPublisherVariablesUpdate(dwLobbyEventHandler<0> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 0, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<0>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<0>::onChatChannelUpdate(dwLobbyEventHandler<0> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(0, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<0>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<0>::onChatChannelMessage(dwLobbyEventHandler<0> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(0, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<0>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<0>::onChatChannelUserPromoted(dwLobbyEventHandler<0> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<1>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<1>::onChallengesReceived(dwLobbyEventHandler<1> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(1, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<1>::onNewMail
==============
*/
void dwLobbyEventHandler<1>::onNewMail(dwLobbyEventHandler<1> *this)
{
  dwMail_HandleOnNewMailEvent(1);
}

/*
==============
dwLobbyEventHandler<1>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<1>::onPlayerBanned(dwLobbyEventHandler<1> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(1, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<1>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<1>::onConsoleBanned(dwLobbyEventHandler<1> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<1>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<1>::onGlobalInstantMessage(dwLobbyEventHandler<1> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 1, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 1, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<1>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<1>::onPlayerStabilised(dwLobbyEventHandler<1> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<1>::onFeatureBan
==============
*/
void dwLobbyEventHandler<1>::onFeatureBan(dwLobbyEventHandler<1> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(1, ban);
}

/*
==============
dwLobbyEventHandler<1>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<1>::onGroupMessagingMessage(dwLobbyEventHandler<1> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<1>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<1>::onBroadcastMessage(dwLobbyEventHandler<1> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<1>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<1>::onMultipleLogon(dwLobbyEventHandler<1> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<1>::onTeamProposal
==============
*/
void dwLobbyEventHandler<1>::onTeamProposal(dwLobbyEventHandler<1> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<1>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<1>::onClaimAchievement(dwLobbyEventHandler<1> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 1, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<1>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<1>::onRewardAchievementJSONMessage(dwLobbyEventHandler<1> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<1>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<1>::onPublisherVariablesUpdate(dwLobbyEventHandler<1> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 1, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<1>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<1>::onChatChannelUpdate(dwLobbyEventHandler<1> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(1, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<1>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<1>::onChatChannelMessage(dwLobbyEventHandler<1> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(1, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<1>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<1>::onChatChannelUserPromoted(dwLobbyEventHandler<1> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<2>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<2>::onChallengesReceived(dwLobbyEventHandler<2> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(2, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<2>::onNewMail
==============
*/
void dwLobbyEventHandler<2>::onNewMail(dwLobbyEventHandler<2> *this)
{
  dwMail_HandleOnNewMailEvent(2);
}

/*
==============
dwLobbyEventHandler<2>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<2>::onPlayerBanned(dwLobbyEventHandler<2> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(2, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<2>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<2>::onConsoleBanned(dwLobbyEventHandler<2> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<2>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<2>::onGlobalInstantMessage(dwLobbyEventHandler<2> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 2, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 2, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<2>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<2>::onPlayerStabilised(dwLobbyEventHandler<2> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<2>::onFeatureBan
==============
*/
void dwLobbyEventHandler<2>::onFeatureBan(dwLobbyEventHandler<2> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(2, ban);
}

/*
==============
dwLobbyEventHandler<2>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<2>::onGroupMessagingMessage(dwLobbyEventHandler<2> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<2>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<2>::onBroadcastMessage(dwLobbyEventHandler<2> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<2>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<2>::onMultipleLogon(dwLobbyEventHandler<2> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<2>::onTeamProposal
==============
*/
void dwLobbyEventHandler<2>::onTeamProposal(dwLobbyEventHandler<2> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<2>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<2>::onClaimAchievement(dwLobbyEventHandler<2> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 2, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<2>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<2>::onRewardAchievementJSONMessage(dwLobbyEventHandler<2> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<2>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<2>::onPublisherVariablesUpdate(dwLobbyEventHandler<2> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 2, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<2>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<2>::onChatChannelUpdate(dwLobbyEventHandler<2> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(2, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<2>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<2>::onChatChannelMessage(dwLobbyEventHandler<2> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(2, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<2>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<2>::onChatChannelUserPromoted(dwLobbyEventHandler<2> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<3>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<3>::onChallengesReceived(dwLobbyEventHandler<3> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(3, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<3>::onNewMail
==============
*/
void dwLobbyEventHandler<3>::onNewMail(dwLobbyEventHandler<3> *this)
{
  dwMail_HandleOnNewMailEvent(3);
}

/*
==============
dwLobbyEventHandler<3>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<3>::onPlayerBanned(dwLobbyEventHandler<3> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(3, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<3>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<3>::onConsoleBanned(dwLobbyEventHandler<3> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<3>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<3>::onGlobalInstantMessage(dwLobbyEventHandler<3> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 3, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 3, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<3>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<3>::onPlayerStabilised(dwLobbyEventHandler<3> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<3>::onFeatureBan
==============
*/
void dwLobbyEventHandler<3>::onFeatureBan(dwLobbyEventHandler<3> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(3, ban);
}

/*
==============
dwLobbyEventHandler<3>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<3>::onGroupMessagingMessage(dwLobbyEventHandler<3> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<3>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<3>::onBroadcastMessage(dwLobbyEventHandler<3> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<3>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<3>::onMultipleLogon(dwLobbyEventHandler<3> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<3>::onTeamProposal
==============
*/
void dwLobbyEventHandler<3>::onTeamProposal(dwLobbyEventHandler<3> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<3>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<3>::onClaimAchievement(dwLobbyEventHandler<3> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 3, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<3>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<3>::onRewardAchievementJSONMessage(dwLobbyEventHandler<3> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<3>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<3>::onPublisherVariablesUpdate(dwLobbyEventHandler<3> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 3, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<3>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<3>::onChatChannelUpdate(dwLobbyEventHandler<3> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(3, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<3>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<3>::onChatChannelMessage(dwLobbyEventHandler<3> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(3, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<3>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<3>::onChatChannelUserPromoted(dwLobbyEventHandler<3> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<4>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<4>::onChallengesReceived(dwLobbyEventHandler<4> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(4, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<4>::onNewMail
==============
*/
void dwLobbyEventHandler<4>::onNewMail(dwLobbyEventHandler<4> *this)
{
  dwMail_HandleOnNewMailEvent(4);
}

/*
==============
dwLobbyEventHandler<4>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<4>::onPlayerBanned(dwLobbyEventHandler<4> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(4, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<4>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<4>::onConsoleBanned(dwLobbyEventHandler<4> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<4>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<4>::onGlobalInstantMessage(dwLobbyEventHandler<4> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 4, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 4, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<4>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<4>::onPlayerStabilised(dwLobbyEventHandler<4> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<4>::onFeatureBan
==============
*/
void dwLobbyEventHandler<4>::onFeatureBan(dwLobbyEventHandler<4> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(4, ban);
}

/*
==============
dwLobbyEventHandler<4>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<4>::onGroupMessagingMessage(dwLobbyEventHandler<4> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<4>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<4>::onBroadcastMessage(dwLobbyEventHandler<4> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<4>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<4>::onMultipleLogon(dwLobbyEventHandler<4> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<4>::onTeamProposal
==============
*/
void dwLobbyEventHandler<4>::onTeamProposal(dwLobbyEventHandler<4> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<4>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<4>::onClaimAchievement(dwLobbyEventHandler<4> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 4, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<4>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<4>::onRewardAchievementJSONMessage(dwLobbyEventHandler<4> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<4>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<4>::onPublisherVariablesUpdate(dwLobbyEventHandler<4> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 4, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<4>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<4>::onChatChannelUpdate(dwLobbyEventHandler<4> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(4, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<4>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<4>::onChatChannelMessage(dwLobbyEventHandler<4> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(4, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<4>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<4>::onChatChannelUserPromoted(dwLobbyEventHandler<4> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<5>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<5>::onChallengesReceived(dwLobbyEventHandler<5> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(5, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<5>::onNewMail
==============
*/
void dwLobbyEventHandler<5>::onNewMail(dwLobbyEventHandler<5> *this)
{
  dwMail_HandleOnNewMailEvent(5);
}

/*
==============
dwLobbyEventHandler<5>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<5>::onPlayerBanned(dwLobbyEventHandler<5> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(5, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<5>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<5>::onConsoleBanned(dwLobbyEventHandler<5> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<5>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<5>::onGlobalInstantMessage(dwLobbyEventHandler<5> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 5, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 5, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<5>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<5>::onPlayerStabilised(dwLobbyEventHandler<5> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<5>::onFeatureBan
==============
*/
void dwLobbyEventHandler<5>::onFeatureBan(dwLobbyEventHandler<5> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(5, ban);
}

/*
==============
dwLobbyEventHandler<5>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<5>::onGroupMessagingMessage(dwLobbyEventHandler<5> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<5>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<5>::onBroadcastMessage(dwLobbyEventHandler<5> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<5>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<5>::onMultipleLogon(dwLobbyEventHandler<5> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<5>::onTeamProposal
==============
*/
void dwLobbyEventHandler<5>::onTeamProposal(dwLobbyEventHandler<5> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<5>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<5>::onClaimAchievement(dwLobbyEventHandler<5> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 5, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<5>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<5>::onRewardAchievementJSONMessage(dwLobbyEventHandler<5> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<5>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<5>::onPublisherVariablesUpdate(dwLobbyEventHandler<5> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 5, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<5>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<5>::onChatChannelUpdate(dwLobbyEventHandler<5> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(5, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<5>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<5>::onChatChannelMessage(dwLobbyEventHandler<5> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(5, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<5>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<5>::onChatChannelUserPromoted(dwLobbyEventHandler<5> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<6>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<6>::onChallengesReceived(dwLobbyEventHandler<6> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(6, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<6>::onNewMail
==============
*/
void dwLobbyEventHandler<6>::onNewMail(dwLobbyEventHandler<6> *this)
{
  dwMail_HandleOnNewMailEvent(6);
}

/*
==============
dwLobbyEventHandler<6>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<6>::onPlayerBanned(dwLobbyEventHandler<6> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(6, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<6>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<6>::onConsoleBanned(dwLobbyEventHandler<6> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<6>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<6>::onGlobalInstantMessage(dwLobbyEventHandler<6> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 6, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 6, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<6>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<6>::onPlayerStabilised(dwLobbyEventHandler<6> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<6>::onFeatureBan
==============
*/
void dwLobbyEventHandler<6>::onFeatureBan(dwLobbyEventHandler<6> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(6, ban);
}

/*
==============
dwLobbyEventHandler<6>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<6>::onGroupMessagingMessage(dwLobbyEventHandler<6> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<6>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<6>::onBroadcastMessage(dwLobbyEventHandler<6> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<6>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<6>::onMultipleLogon(dwLobbyEventHandler<6> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<6>::onTeamProposal
==============
*/
void dwLobbyEventHandler<6>::onTeamProposal(dwLobbyEventHandler<6> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<6>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<6>::onClaimAchievement(dwLobbyEventHandler<6> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 6, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<6>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<6>::onRewardAchievementJSONMessage(dwLobbyEventHandler<6> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<6>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<6>::onPublisherVariablesUpdate(dwLobbyEventHandler<6> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 6, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<6>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<6>::onChatChannelUpdate(dwLobbyEventHandler<6> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(6, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<6>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<6>::onChatChannelMessage(dwLobbyEventHandler<6> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(6, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<6>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<6>::onChatChannelUserPromoted(dwLobbyEventHandler<6> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

/*
==============
dwLobbyEventHandler<7>::onChallengesReceived
==============
*/
void dwLobbyEventHandler<7>::onChallengesReceived(dwLobbyEventHandler<7> *this, unsigned __int64 __formal, bdReference<bdAntiCheatChallenges> challenges)
{
  bdAntiCheatChallenges *v4; 
  bdReference<bdAntiCheatChallenges> bdanticheatchallengesref_in; 

  v4 = (bdAntiCheatChallenges *)challenges.m_ptr->__vftable;
  bdanticheatchallengesref_in.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  LiveAntiCheat_OnChallengesReceived(7, (bdReference<bdAntiCheatChallenges>)&bdanticheatchallengesref_in);
  if ( challenges.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&challenges.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( challenges.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAntiCheatChallenges_vtbl *, __int64))challenges.m_ptr->~bdReferencable)(challenges.m_ptr->__vftable, 1i64);
    challenges.m_ptr->__vftable = NULL;
  }
}

/*
==============
dwLobbyEventHandler<7>::onNewMail
==============
*/
void dwLobbyEventHandler<7>::onNewMail(dwLobbyEventHandler<7> *this)
{
  dwMail_HandleOnNewMailEvent(7);
}

/*
==============
dwLobbyEventHandler<7>::onPlayerBanned
==============
*/
void dwLobbyEventHandler<7>::onPlayerBanned(dwLobbyEventHandler<7> *this, unsigned __int64 userID, unsigned int reputationLevel, __int64 expiry, unsigned int reason)
{
  LiveAntiCheat_DWPlayerBanned(7, userID, reputationLevel);
}

/*
==============
dwLobbyEventHandler<7>::onConsoleBanned
==============
*/
void dwLobbyEventHandler<7>::onConsoleBanned(dwLobbyEventHandler<7> *this, unsigned __int64 userID)
{
  LiveAntiCheat_DWPlayerBanned(0, 0i64, 0);
}

/*
==============
dwLobbyEventHandler<7>::onGlobalInstantMessage
==============
*/
void dwLobbyEventHandler<7>::onGlobalInstantMessage(dwLobbyEventHandler<7> *this, unsigned __int64 senderID, char *senderName, void *message, unsigned int messageSize)
{
  XUID result; 

  OnlineMgr::HandleDWInstantMessage(&g_onlineMgr, 7, senderID, senderName, (const char *)message, messageSize);
  XUID::FromUniversalId(&result, senderID);
  InviteJoinHSM::OnDWInstantMessageFromUser(&g_invitationHSM, 7, result, (const char *)message, messageSize);
}

/*
==============
dwLobbyEventHandler<7>::onPlayerStabilised
==============
*/
void dwLobbyEventHandler<7>::onPlayerStabilised(dwLobbyEventHandler<7> *this, unsigned __int64 userID, unsigned __int64 stabilisationTime)
{
  Com_PrintError(25, "onPlayerStabilised userID %llu, stabilisationTime %llu\n", userID, stabilisationTime);
}

/*
==============
dwLobbyEventHandler<7>::onFeatureBan
==============
*/
void dwLobbyEventHandler<7>::onFeatureBan(dwLobbyEventHandler<7> *this, const bdFeatureBanInfo *ban)
{
  LiveAntiCheat_FeatureBanEvent(7, ban);
}

/*
==============
dwLobbyEventHandler<7>::onGroupMessagingMessage
==============
*/
void dwLobbyEventHandler<7>::onGroupMessagingMessage(dwLobbyEventHandler<7> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<7>::onBroadcastMessage
==============
*/
void dwLobbyEventHandler<7>::onBroadcastMessage(dwLobbyEventHandler<7> *this, unsigned __int64 senderID, const char *senderName, void *message)
{
  ;
}

/*
==============
dwLobbyEventHandler<7>::onMultipleLogon
==============
*/
void dwLobbyEventHandler<7>::onMultipleLogon(dwLobbyEventHandler<7> *this, unsigned __int64 userAccountID)
{
  dwStopAllReconnectsMultipleLogons(MULTIPLE_LOGIN_NORMAL);
}

/*
==============
dwLobbyEventHandler<7>::onTeamProposal
==============
*/
void dwLobbyEventHandler<7>::onTeamProposal(dwLobbyEventHandler<7> *this)
{
  ;
}

/*
==============
dwLobbyEventHandler<7>::onClaimAchievement
==============
*/
void dwLobbyEventHandler<7>::onClaimAchievement(dwLobbyEventHandler<7> *this, bdUserAccountID *userID, char *context, unsigned int reason, unsigned int numItems, const bdMarketplaceInventory *updates)
{
  Online_Loot *Instance; 

  Instance = Online_Loot::GetInstance();
  Online_Loot::AchievementClaimed(Instance, 7, numItems, updates);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<7>::onRewardAchievementJSONMessage
==============
*/
void dwLobbyEventHandler<7>::onRewardAchievementJSONMessage(dwLobbyEventHandler<7> *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  OnlineChallengesManager *Instance; 
  const bdUserAccountID *v8; 
  bdUserAccountID v9; 
  const bdUserAccountID *v10; 

  v10 = userID;
  Instance = OnlineChallengesManager::GetInstance();
  bdUserAccountID::bdUserAccountID(&v9, userID);
  OnlineChallengesManager::AchievementEvent(Instance, v8, context, rewardEvent);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
dwLobbyEventHandler<7>::onPublisherVariablesUpdate
==============
*/
void dwLobbyEventHandler<7>::onPublisherVariablesUpdate(dwLobbyEventHandler<7> *this, const char *__formal, const char *nameSpace, const unsigned __int16 majorVersion, const unsigned __int16 minorVersion, const bool __formala)
{
  PublisherVariableManager *Instance; 

  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::EnqueueRetrieveVariables(Instance, 7, nameSpace, majorVersion, minorVersion);
}

/*
==============
dwLobbyEventHandler<7>::onChatChannelUpdate
==============
*/
void dwLobbyEventHandler<7>::onChatChannelUpdate(dwLobbyEventHandler<7> *this, const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  OnlineChatManager *Instance; 

  OnlineTournament_OnChatChannelUpdate(channel, member, status);
  GameBattles_ChatChannelUpdate(7, channel, member, status == 1);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::OnChatChannelUpdate(Instance, channel, member, status);
}

/*
==============
dwLobbyEventHandler<7>::onChatChannelMessage
==============
*/
void dwLobbyEventHandler<7>::onChatChannelMessage(dwLobbyEventHandler<7> *this, const char *const category, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  OnlineClansManager *v11; 
  OnlineChatManager *Instance; 

  if ( I_streq_0(category, "tournament") )
  {
    OnlineTournament_OnChatChannelMessage(channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "gamebattles") )
  {
    GameBattles_HandleChatChannelMessage(7, channelID, senderID, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "chat") || I_streq_0(category, "clanChat") )
  {
    Instance = OnlineChatManager::GetInstance();
    OnlineChatManager::OnChatChannelMessage(Instance, category, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
  else if ( I_streq_0(category, "clanData") )
  {
    v11 = OnlineClansManager::GetInstance();
    OnlineClansManager::OnClanDataChannelMessage(v11, channelID, senderID, senderName, chatMessageType, message, messageSize);
  }
}

/*
==============
dwLobbyEventHandler<7>::onChatChannelUserPromoted
==============
*/
void dwLobbyEventHandler<7>::onChatChannelUserPromoted(dwLobbyEventHandler<7> *this, const bdChannelInfo *channel, const bdChannelMember *previousAdmin, const bdChannelMember *newAdmin)
{
  OnlineChatManager *Instance; 

  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::onChatChannelUserPromoted(Instance, channel, previousAdmin, newAdmin);
}

