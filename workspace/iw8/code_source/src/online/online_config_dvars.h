/*
==============
OnlineConfig_CreateAllDVars
==============
*/

void OnlineConfig_CreateAllDVars(void)
{
  ?OnlineConfig_CreateAllDVars@@YAXXZ();
}

/*
==============
OnlineConfig_CreateAllDVars
==============
*/

void __fastcall OnlineConfig_CreateAllDVars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v8; 
  const dvar_t *v12; 
  const dvar_t *v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  Dvar_BeginPermanentRegistration();
  netinfo_logging = Dvar_RegisterInt("MPQLLMPSOK", 0, 0, 1, 0, "netinfo_logging enabler (default = off)");
  mapvote_logging = Dvar_RegisterInt("MTOOQQTNPN", 0, 0, 1, 0, "mapvote_logging enabler (default = off)");
  dw_presence_coop_join_active = Dvar_RegisterInt("MRNTQRTNMM", 1, 0, 1, 0, "Do we allow players to join on presence for private coop matches (post session to demonware");
  dw_presence_put_delay = Dvar_RegisterInt("QPMQROTOK", 5000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait in a presence state before sending to demonware");
  dw_presence_put_rate = Dvar_RegisterInt("MMNTLRNON", 60000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait between sending presence state to demonware");
  dw_presence_get_delay = Dvar_RegisterInt("MQPTKMLTQN", 5000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait after booting the game to fetch demonware presence");
  dw_presence_get_rate = Dvar_RegisterInt("LPMKLOLSLM", 60000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait between fetching presence state from demonware");
  num_available_map_packs = Dvar_RegisterInt("NNOQOSROR", 0, 0, 32, 0, "Number of map packs available for this platform");
  dw_leaderboard_write_active = Dvar_RegisterInt("NQKTTMLOKP", 1, 0, 1, 0, "Are leaderboard writes enabled");
  telemetry_exportSchema = Dvar_RegisterBool("LTSRTLTKNQ", 1, 0, "Do telemetry events export schemas.");
  telemetry_active = Dvar_RegisterInt("OLMOMNKNNN", 1, 0, 1, 0, "Are telemetry events enabled");
  telemetry_matchdata = Dvar_RegisterInt("QMMMTPKTS", 1, 0, 1, 0, "Are telemetry match data events enabled");
  telemetry_playerEndMatch = Dvar_RegisterInt("LONQQNPLLS", 1, 0, 1, 0, "Are telemetry player end match events enabled");
  telemetry_screenView = Dvar_RegisterInt("LSTMTKNQS", 1, 0, 1, 0, "Are telemetry menu change events enabled");
  telemetry_storeBrowse = Dvar_RegisterBool("LKNLRTKOS", 1, 0, "Are store item browse telemetry events enabled");
  telemetry_levelEnd = Dvar_RegisterBool("LSMTNSOPOK", 1, 0, "Is campaign level end telemetry events enabled");
  telemetry_prestige = Dvar_RegisterBool("MSNPRQTPSM", 1, 0, "Are telemetry prestige events enabled");
  telemetry_loot = Dvar_RegisterBool("NNQMPLKKSL", 1, 0, "Is loot purchase and pawn telemetry events enabled");
  telemetry_motdClick = Dvar_RegisterBool("MRLSLKSMRR", 1, 0, "Is motd click telemetry events enabled");
  telemetry_sessionStart = Dvar_RegisterInt("LMLQLMQOSR", 1, 0, 1, 0, "Are telemetry session start events enabled");
  telemetry_purchaseConfirm = Dvar_RegisterBool("TLOOQNROS", 1, 0, "Are telemetry purchase confirm events enabled");
  telemetry_matchStart = Dvar_RegisterBool("OPSQMRNPO", 1, 0, "Are telemetry start match events enabled");
  telemetry_directActive = Dvar_RegisterBool("NPNRORTPOS", 1, 0, "Are direct telemetry events enabled");
  matchdata_active = Dvar_RegisterInt("NMQKPQPLR", 1, 0, 1, 0, "Are match data uploads enabled");
  matchdata_ddlactive = Dvar_RegisterBool("PNSNNNQRR", 1, 0, "Are the match data ddl uploads enabled.");
  matchdata_maxcompressionbuffer = Dvar_RegisterInt("MQMMSKRQKR", 2048, 1024, 2048, 0, "Max match data compression buffer to use (in bytes)");
  playercard_cache_validity_life = Dvar_RegisterInt("NLLRRKRLKL", 1800000, 0, 3600000, 0, "The life of a cached gamercard (it can be re-downloaded after this)");
  playercard_cache_upload_max_retry_time = Dvar_RegisterInt("MPQMTSPQON", 30000, 0, 300000, 0, "Max time that the player cache upload can retry");
  playercard_cache_upload_retry_step = Dvar_RegisterInt("MQNQMTKTON", 1000, 0, 300000, 0, "Step in m/s for the player cache upload retry");
  playercard_cache_download_max_retry_time = Dvar_RegisterInt("NMMMPOOOQO", 30000, 0, 300000, 0, "Max time that the player cache download can retry");
  playercard_cache_download_retry_step = Dvar_RegisterInt("MNRRPKSRKS", 1000, 0, 300000, 0, "Step in m/s for the player cache download retry");
  playercard_cache_party_fetch_attempt_delay = Dvar_RegisterInt("LQQLPKRLLT", 2000, 0, 300000, 0, "How long we wait for the party to stop changing before fetching playercards");
  playercard_cache_party_update_mode = Dvar_RegisterInt("NSNNNMPTTK", 29, 0, 31, 0, "Bitmask indicating what playercard update sources we should be using.  see PLAYERCARD_PARTY_CHANGE_SOURCE in playercard_cache.h");
  extinction_cac_enabled = Dvar_RegisterInt("NLMPMTQLQS", 1, 0, 1, 0, "Enable Create-A-Character for Extinction");
  extinction_hardcore_enabled = Dvar_RegisterInt("MLNTLQNKTR", 1, 0, 1, 0, "Enable Hardcore Mode for Extinction");
  extinction_intel_enabled = Dvar_RegisterInt("MRQQRSOOTT", 0, 0, 1, 0, "Enable Intel Menus for Extinction");
  extinction_tokens_enabled = Dvar_RegisterInt("MTMLKQMPST", 1, 0, 1, 0, "Enable Token Menus and token collection for Extinction");
  pm_gamesetup_mode_altmodes = Dvar_RegisterInt("LSQSLNMS", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes (whole menu)");
  pm_gamesetup_mode_altmodes_dropzone = Dvar_RegisterInt("OMNQNSOQPM", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/Drop Zone");
  pm_gamesetup_mode_altmodes_teamjug = Dvar_RegisterInt("NMKONLPMMQ", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/Team Jug");
  pm_gamesetup_mode_altmodes_jug = Dvar_RegisterInt("MMNSQPTQOR", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/Jug");
  pm_gamesetup_mode_altmodes_gungame = Dvar_RegisterInt("NTLRNNRLQP", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/Gun Game");
  pm_gamesetup_mode_altmodes_infected = Dvar_RegisterInt("NQQTMMNLMT", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/Infected");
  pm_gamesetup_mode_altmodes_oneinthechamber = Dvar_RegisterInt("NNQMRLKKPL", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/One In the Chamber");
  pm_gamesetup_mode_altmodes_mugger = Dvar_RegisterInt("QNTONNQMK", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Mode/Alternate Modes/Mugger");
  pm_gamesetup_options_createdefaultclass = Dvar_RegisterInt("OMOSKKTKQN", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Options/Create Default Class (whole menu)");
  pm_gamesetup_options_customclassrestrictions = Dvar_RegisterInt("OMNTONRTSS", 1, 0, 1, 0, "Disable menu Option Private Match/Game Setup/Options/Custom Class Restrictions (whole menu)");
  prestige_shop_active = Dvar_RegisterInt("LTNTMONSQM", 0, 0, 1, 0, "Are we allowed to show the Prestige Shop or not");
  motd_store_link = Dvar_RegisterInt("MOSOSMRSOO", 0, 0, 1, 0, "Add a link to the in-game store in the MOTD popup");
  lsp_enumertion_max_retry_time = Dvar_RegisterInt("SKTTMMOKN", 300000, 0, 3600000, 0, "Max time that the LSP enumeration can retry");
  lsp_enumertion_retry_step = Dvar_RegisterInt("PNQROTTTL", 1000, 0, 3600000, 0, "Step in m/s for the LSP enumeration retry");
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3d4ccccd; value
  }
  reset_mm_data = Dvar_RegisterInt("QLKRSPMQS", 1, 0, 1, 0, "reset data with dlc popup");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v8 = Dvar_RegisterFloat("OSOLPOMLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The % chance of sending match making telemetry");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  match_making_telemetry_chance = v8;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v12 = Dvar_RegisterFloat("MKRRPQOOKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The % chance of sending map vote telemetry");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  log_mapvote_chance = v12;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v16 = Dvar_RegisterFloat("NTLRQSRMSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The % chance of team balance results telemetry");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  log_teambalance_chance = v16;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  log_host_migration_chance = Dvar_RegisterFloat("NOTMKQPPOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The % chance of host migration results telemetry");
  anti_cheat_infraction = Dvar_RegisterInt("TNLNQMRPK", 63, 0, 0xFFFF, 0, (const char *)&queryFormat.fmt + 3);
  speech_active = Dvar_RegisterInt("LRMLMOSKM", 1, 0, 1, 0, "Are we allowed to enable Speech or not");
  gamedvr_active = Dvar_RegisterInt("MOSNQTOMPM", 1, 0, 1, 0, "Are we allowed to enable GameDVR or not");
  livestreaming_active = Dvar_RegisterInt("MOMNSSQKMO", 1, 0, 1, 0, "Are we allowed to enable LiveStreaming or not");
  screenshots_active = Dvar_RegisterInt("NSMRNQSLOP", 1, 0, 1, 0, "Are we allowed to enable Screenshots or not");
  using_mlg = Dvar_RegisterInt("LTSMQMMQRK", 1, 0, 1, 0, "MLG feature on/off");
  extinction_map_selection_enabled = Dvar_RegisterInt("NLRPKMSKTS", 0, 0, 1, 0, "Turns on Map Selection for Extinction, should go live with DLC 1");
  matchdata_stat_deltas = Dvar_RegisterInt("LKTMTKOOSN", 1, 0, 1, 0, "enable match data stat delta logging?");
  dc_lobbymerge = Dvar_RegisterInt("OMTNOQMQLL", 0, 0, 1, 0, "Allows lobby merging across data centres");
  discard_playerstats_on_suspend = Dvar_RegisterInt("MLRLPLONRR", 1, 0, 1, 0, "Forces stats discard on suspend");
  active_mission_state = Dvar_RegisterInt("LLMQRSOKNO", 0, 0, 0x7FFFFFFF, 0, "The state of the currently active mission");
  ps4_playwithoutnp_enabled = Dvar_RegisterInt("QMNPSOSST", 0, 0, 1, 0, "The dvar that checks if the user should be allowed to play without being logged into NP");
  debug_locksuits = Dvar_RegisterInt("SNORSKQLM", 0, 0, 0x7FFFFFFF, 0, "Forces suits to lock in the UI, dev only");
  enable_analytics_log = Dvar_RegisterInt("OLMQKSKMRS", 0, 0, 1, 0, "Uploads the games to blackbox for the map viz tool");
  analytics_log_type = Dvar_RegisterInt("NNTLKRQPLT", 1, 0, 0x7FFFFFFF, 0, "Analytics type value, to make easier queries.");
  matchsim_tool_enabled = Dvar_RegisterInt("MKOTKLQOLM", 1, 0, 0x7FFFFFFF, 0, "The flag that checks if match should be simulated in this executable");
  mp_tutorials_enabled = Dvar_RegisterInt("MKSNLNTOMM", 0, 0, 1, 0, "The flag that checks if tutorials should be enabled");
  oer_bb_send_limit = Dvar_RegisterInt("MNMORLKPKN", 15, 0, 0x7FFFFFFF, 0, "The maximum number of times a particular error will be sent to black box");
  oer_bb_errorcode_send_counter_reset_time = Dvar_RegisterInt("NMLMSLRNPN", 900000, 0, 0x7FFFFFFF, 0, "The time in milliseconds after which all the error code send counters will be reset");
  crm_fetch_min_delay_ms = Dvar_RegisterInt("MPRSPNKMMP", 1800000, 0, 0x7FFFFFFF, 0, "The minimum time in ms between fetches, the next one will be queued.");
  crm_enabled = Dvar_RegisterInt("MNLNLSTSNT", 1, 0, 1, 0, "CRM feature on/off");
  dw_nat_trav_timeout = Dvar_RegisterInt("NRLMQSNOOO", 0, 0, 0x7FFFFFFF, 0, "Nat traversal timeout in msec.");
  dw_nat_trav_interleave = Dvar_RegisterInt("NPRQSSLOO", 1, 0, 1, 0, "Nat traversal interleave.");
  dw_nat_trav_usage_report_interval = Dvar_RegisterInt("NSKOOPNOKN", 10, 0, 0x7FFFFFFF, 0, "Nat usage report interval in seconds.");
  __asm { vmovaps xmm7, [rsp+48h+var_18] }
  Dvar_EndPermanentRegistration();
}

