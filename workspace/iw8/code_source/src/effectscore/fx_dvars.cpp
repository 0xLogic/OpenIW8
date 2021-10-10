/*
==============
FX_UnregisterGameDvars
==============
*/

void FX_UnregisterGameDvars(void)
{
  ?FX_UnregisterGameDvars@@YAXXZ();
}

/*
==============
FX_RegisterDvars
==============
*/

void FX_RegisterDvars(void)
{
  ?FX_RegisterDvars@@YAXXZ();
}

/*
==============
FX_RegisterGameDvars
==============
*/

void FX_RegisterGameDvars(void)
{
  ?FX_RegisterGameDvars@@YAXXZ();
}

/*
==============
FX_RegisterDvars
==============
*/
void FX_RegisterDvars(void)
{
  fx_enable = Dvar_RegisterBool("MSMKRKOKQP", 1, 0x44u, "Toggles all effects processing");
  fx_draw = Dvar_RegisterBool("LKMRQOTSQS", 1, 0x44u, "Toggles drawing of effects after processing");
  fx_draw_spotLight = Dvar_RegisterBool("OLNMMOQSRR", 1, 4u, "Toggles drawing of effects after processing");
  fx_draw_omniLight = Dvar_RegisterBool("NTRSQNLOO", 1, 4u, "Toggles drawing of effects after processing");
  fx_draw_flare = Dvar_RegisterBool("LPQPSLOLPP", 1, 0x44u, "Toggles drawing of flares");
  fx_cull_elem_spawn = Dvar_RegisterBool("ROOPTTNMS", 1, 0, "Culls effect elems for spawning");
  fx_cull_elem_draw = Dvar_RegisterBool("NQNLLPTLSN", 1, 0, "Culls effect elems for drawing");
  fx_cull_fovInner = Dvar_RegisterFloat("OMPTONMQSK", 20.0, 0.0, 180.0, 0, "Culls particles when they are outside specified view cone");
  fx_cull_fovOuter = Dvar_RegisterFloat("NSMRQSNQPL", 30.0, 0.0, 180.0, 0, "Culls particles when they are outside specified view cone");
  fx_marks = Dvar_RegisterBool("MOLLKMTMRS", 1, 0, "Toggles whether marks that don't affect gameplay are showed (bullets and spray)");
  fx_marks_all = Dvar_RegisterBool("OMOPKRQROK", 1, 0, "Toggles whether any marks are showed (bullets, spray and tracker perk)");
  fx_marks_smodels = Dvar_RegisterBool("NLNKQNROQM", 1, 0, "Toggles whether bullet hits leave marks on static models");
  fx_marks_ents = Dvar_RegisterBool("MQOPRPQLQL", 1, 0, "Toggles whether bullet hits leave marks on entities");
  fx_marks_dynents = Dvar_RegisterBool("SQPTQTLRK", 1, 0, "Toggles whether bullet hits leave marks on dynamic entities");
  fx_marks_dynents_ext_killswitch = Dvar_RegisterBool("MQONROQQSR", 1, 0, "Toggles whether bullet hits leave marks on dynamic entities");
  fx_marks_limit_stacking_distance = Dvar_RegisterFloat("LNTRSRPTN", 0.2, 0.0, 1.0, 0, "Distance between decals to use anti-stacking");
  fx_marks_limit_stacking_freeold = Dvar_RegisterBool("MTORMOTLSP", 0, 4u, "0 = prevent new mark, 1 = free old mark");
  fx_mark_max_life = Dvar_RegisterInt("MNMOQQSLNT", -1, -1, 10000, 4u, "Max lifetime for a decal in seconds");
  fx_mark_max_thickness = Dvar_RegisterFloat("LPNKRNSQRL", 32.120998, 0.0, 1000.0, 4u, "Max thickness for a mark");
  fx_freeze = Dvar_RegisterBool("LTMLSTTQMN", 0, 4u, "Freeze effects");
  fx_debugBolt = Dvar_RegisterFloat("MOTRNQLNLQ", 0.0, 0.0, 1000.0, 4u, "Debug effects bolt");
  fx_count = Dvar_RegisterBool("MNLRNTNLQR", 0, 4u, "Debug effects count");
  fx_visMinTraceDist = Dvar_RegisterFloat("MLSTNTNORR", 80.0, 0.0, 1000.0, 4u, "Minimum visibility trace size");
  fx_profileSort = Dvar_RegisterEnum("NOTKROKPTR", fx_profileSortStrings, 0, 4u, "Choose sort criteria for FX profiling");
  fx_profileSkip = Dvar_RegisterInt("NKQRKTNNOQ", 0, 0, 1000, 4u, "Skip the first n lines in FX profile (to see ones off bottom of screen)");
  fx_profileFilter = Dvar_RegisterString("LONMMPNTL", (const char *)&queryFormat.fmt + 3, 4u, "Only show effects with this as a substring in FX profile");
  fx_profileFilterElemCountZero = Dvar_RegisterBool("MLTRMQTPTP", 0, 4u, "Do not include FX that have a zero element count");
  fx_profile = Dvar_RegisterInt("LOTSMQPMON", 0, 0, 2, 4u, "Turn on FX profiling (specify which local client, with '1' being the first.)");
  fx_mark_profile = Dvar_RegisterInt("NKPPQRSNRR", 0, 0, 2, 4u, "Turn on FX profiling for marks (specify which local client, with '1' being the first.)");
  fx_deferelem = Dvar_RegisterBool("OKRPQPRLN", 1, 4u, "Toggles deferred processing of elements instead of effects");
  fx_draw_simd = Dvar_RegisterBool("MNMSROTNTM", 1, 4u, "Draw effects using SIMD / Vector code.");
  fx_killEffectOnRewind = Dvar_RegisterBool("MQKPPMLMLT", 1, 4u, "Causes effects that have been marked for a soft kill (fade out) to be killed immediately on a rewind.");
  fx_alphaThreshold = Dvar_RegisterInt("MMLNNQSTTL", 0, 0, 256, 0x44u, "Don't draw billboard sprites, oriented sprites or tails with alpha below this threshold (0-256).");
  fx_debug3D = Dvar_RegisterInt("STTNQMNMM", 0, 0, 0x7FFFFFFF, 4u, "Turn on effect system debug information, <int> parameter is culling distance");
  fx_overrideLightFrac = Dvar_RegisterFloat("LMKKSPNMMS", -1.0, -1.0, 10000.0, 4u, "Overrides every lighting-frac value, 0 is all unlit, to 1 that is 100% lit - the default of -1 restores segment lighting-frac values");
  fx_biasLightFrac = Dvar_RegisterFloat("LSSOMSNSP", 0.0, -10000.0, 10000.0, 4u, "Bias every lighting-frac value");
  fx_gpu_lighting = Dvar_RegisterBool("MOOKNRNMMN", 1, 4u, "Toggles gpu lighting of appropriate effects");
  fx_gpu_scatter = Dvar_RegisterBool("OMKPKKQTNP", 1, 0x44u, "Toggles gpu lighting scattering of appropriate effects");
  fx_gpu_deferred_fog = Dvar_RegisterBool("MTLNNOSPTP", 1, 0x44u, "Toggles precomputed fog/volumetric lightmap for certain effects");
  fx_lighting_lowres_ambient = Dvar_RegisterBool("NRTPRQKSRK", 1, 0x44u, "Enables low res ambient lighing of effects");
  fx_lightmap_pixels_per_texel = Dvar_RegisterFloat("PSTSNKNPR", 16.0, 1.0, 256.0, 0, "Approximate pixels per lightmap texel");
  fx_lightmap_max_level = Dvar_RegisterInt("MKNNNONLSK", 5, 0, 5, 0x44u, "Maximum lightmap level");
  ui_fx_lightmap_max_level = Dvar_RegisterInt("MTNMRSTQN", 5, 0, 5, 0, "Maximum lightmap level set by the UI");
  fx_lighting_shScale = Dvar_RegisterVec4("LKPMPNMTSM", 1.0, 0.5, 1.0, 1.0, 0.0, 1.0, 0x44u, "Scale applied to directional contribution from SH lighting for sprites [primary0, primary1, secondary0, secondary1]");
  fx_lighting_params = Dvar_RegisterVec4("MNSOQLKMT", 2.5, 0.001, 1.0, 1.0, 0.0, 16.0, 0x44u, "X - Scale scattering coefficient of volume effects Y - VFX light attenuation clamp");
  fx_models_shadows_thermal = Dvar_RegisterBool("OMNMRRKSRK", 0, 0, "Enables particle models shadow casting and thermal rendering");
  fx_lights_radius_scale = Dvar_RegisterFloat("TLOLRMSL", 1.0, 0.0, 10000.0, 0x40u, "Scale factor for fx light radius");
  fx_lights_intensity_scale = Dvar_RegisterFloat("NQNQPRLRQM", 1.0, 0.0, 10000.0, 0x40u, "Scale factor for fx light intensity");
  fx_barrelHeatScaleMin = Dvar_RegisterFloat("LSSQKQOMQO", 0.0, 0.0, 1.0, 0x44u, "Minimum alpha value for particles when heat scale is enabled");
  fx_debugAssertQuat = Dvar_RegisterBool("OKOOKTMNMM", 1, 4u, "Turn on/off debug asserts for quaternions in the fx system");
  glass_spam = Dvar_RegisterBool("MRQPLQNNPP", 0, 0, "Toggle extra spam to help repro glass asserts");
  glass_debug = Dvar_RegisterBool("TQMMTLRRN", 0, 0, "Shows debug info for glass");
  glass_debugDistance = Dvar_RegisterFloat("MQPLTPRTOQ", 128.0, 0.0, 3.4028235e38, 0, "Max distance at which to draw glass debug info");
  glass_break = Dvar_RegisterBool("MORSNMRQOR", 1, 4u, "Toggle whether or not glass breaks when shot");
  glass_edge_angle = Dvar_RegisterVec2("MQQQSOPLST", 5.0, 10.0, 0.0, 90.0, 4u, "Sets the range of angle deflections used by new glass pieces on a supported edge");
  glass_fall_ratio = Dvar_RegisterVec2("MMRTTKOQMP", 1.5, 3.0, 0.0, 100.0, 4u, "Ratio of piece area to supporting edge length squared.  Below the min, the piece never falls.");
  glass_fall_delay = Dvar_RegisterVec2("NLNOROSKML", 0.2, 0.89999998, 0.0, 30.0, 4u, "Sets how long a heavy piece supported by a single edge waits before falling, based on glass_fall_ratio");
  glass_fx_chance = Dvar_RegisterFloat("NNTPPOLMTT", 0.25, 0.0, 1.0, 4u, "Chance to play an effect on a small piece of glass when it hits the ground");
  glass_hinge_friction = Dvar_RegisterFloat("NLLKLQRQOK", 5.0, 0.0, 10000.0, 4u, "Friction used by moving glass pieces when joined like a hinge to a frame");
  glass_piece_mass = Dvar_RegisterFloat("LQOPNROT", 0.5, 0.0, 1000.0, 4u, "Mass of a piece of broken glass");
  glass_max_pieces_per_frame = Dvar_RegisterInt("LPOOKSNLKO", 100, 1, 0x7FFFFFFF, 4u, "Maximum number of pieces to create in one frame. This is a guideline and not a hard limit.");
  glass_max_shatter_fx_per_frame = Dvar_RegisterInt("LPSLPRLSPN", 6, 1, 0x7FFFFFFF, 4u, "Maximum number of shatter effects to play in one frame This is a guideline and not a hard limit.");
  glass_shard_maxsize = Dvar_RegisterFloat("NOSMQTSMQ", 300.0, 1.0, 3.4028235e38, 4u, "The maximum area for a flying piece of glass when shattering. Pieces larger than this will be broken into smaller ones");
  glass_fringe_maxsize = Dvar_RegisterFloat("LRNRNONQLP", 150.0, 0.0, 10000.0, 4u, "The maximum area for an edge piece of glass when shattering. Pieces larger than this will be broken into smaller ones");
  glass_fringe_maxcoverage = Dvar_RegisterFloat("NLTNNPRMKS", 0.2, 0.0, 1.0, 4u, "The maximum portion of the original piece of glass that is allowed to remain after the glass shatters");
  glass_trace_interval = Dvar_RegisterInt("OLSLMTSRKT", 100, 1, 0x7FFFFFFF, 4u, "The length of time, in milliseconds, between glass piece traces");
  glass_physics_chance = Dvar_RegisterFloat("LLTLMSKMQ", 0.15000001, 0.0, 1.0, 4u, "The chance for a given shard of glass to use physics");
  glass_physics_maxdist = Dvar_RegisterFloat("LKPORKQQQQ", 512.0, 0.0, 3.4028235e38, 4u, "The maximum distance of a glass piece from the player to do physics");
  glass_shattered_scale = Dvar_RegisterFloat("MLMKMTSKKR", 24.0, 1.1754944e-38, 3.4028235e38, 4u, "The scale of the shattered glass material");
  glass_crack_pattern_scale = Dvar_RegisterFloat("NRMMNOLNMK", 1.0, 0.0, 3.4028235e38, 4u, "The scale applied to the radius used for the crack pattern");
  glass_fall_gravity = Dvar_RegisterFloat("MNQPOQSPNO", 800.0, -3.4028235e38, 3.4028235e38, 0x44u, "Gravity for falling pieces of glass");
  glass_linear_vel = Dvar_RegisterVec2("LMSQNOSOSP", 200.0, 400.0, 0.0, 10000.0, 0x44u, "Sets the range of linear velocities used by new glass pieces");
  glass_angular_vel = Dvar_RegisterVec2("MPLMRQMQRK", 5.0, 35.0, 0.0, 180.0, 0x44u, "Sets the range of angular velocities used by new glass pieces");
  glass_physics_memory_threshold = Dvar_RegisterFloat("MPRTOLTNQP", 0.60000002, 0.0, 1.0, 4u, "Physics memory threshold above which we don't create physical glass shards");
  fx_dismemberment_enabled = Dvar_RegisterBool("NLKQTSPTKQ", 1, 0x40u, "Enable dismemberment (disabling clears entries)");
  fx_dismemberment_render = Dvar_RegisterBool("MMLOQLOTPN", 1, 0, "Enable dismemberment rendering");
  fx_marks_killOnKillcamTransition_enabled = Dvar_RegisterBool("NLROROTKRS", 1, 0, "Enable clearing of marks/decals via Particle System KillOnKillcamTransition flag.");
  fx_umbra_culling = Dvar_RegisterBool("NOKKKRMNOK", 1, 4u, "Enables umbra culling of effects");
  Particle_RegisterDvars();
}

/*
==============
FX_RegisterGameDvars
==============
*/
void FX_RegisterGameDvars(void)
{
  unsigned int flags; 

  flags = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    flags = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_glass_simple_duration = Dvar_RegisterInt("OLSTRLLTLT", 5000, 0, 60000, flags, "The time (in ms) that simple (non-physics) glass pieces live for");
}

/*
==============
FX_UnregisterGameDvars
==============
*/
void FX_UnregisterGameDvars(void)
{
  DCONST_DVARMPINT_glass_simple_duration = Dvar_Deregister(DCONST_DVARMPINT_glass_simple_duration);
}

