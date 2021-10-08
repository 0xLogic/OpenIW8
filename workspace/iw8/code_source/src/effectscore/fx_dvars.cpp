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

void __fastcall FX_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v16; 
  const dvar_t *v39; 
  const dvar_t *v50; 
  const dvar_t *v71; 
  const dvar_t *v76; 
  const dvar_t *v80; 
  const dvar_t *v84; 
  const dvar_t *v88; 
  const dvar_t *v95; 
  const dvar_t *v99; 
  const dvar_t *v106; 
  const dvar_t *v110; 
  const dvar_t *v120; 
  const dvar_t *v124; 
  const dvar_t *v128; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  float description; 
  float descriptiona; 
  float v149; 
  float v150; 
  char v151; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm9
    vmovaps xmmword ptr [rax-38h], xmm10
    vmovaps xmmword ptr [rax-48h], xmm11
    vmovaps xmmword ptr [rax-58h], xmm13
    vmovaps xmmword ptr [rax-68h], xmm14
    vmovaps xmmword ptr [rax-78h], xmm15
  }
  fx_enable = Dvar_RegisterBool("MSMKRKOKQP", 1, 0x44u, "Toggles all effects processing");
  fx_draw = Dvar_RegisterBool("LKMRQOTSQS", 1, 0x44u, "Toggles drawing of effects after processing");
  fx_draw_spotLight = Dvar_RegisterBool("OLNMMOQSRR", 1, 4u, "Toggles drawing of effects after processing");
  fx_draw_omniLight = Dvar_RegisterBool("NTRSQNLOO", 1, 4u, "Toggles drawing of effects after processing");
  fx_draw_flare = Dvar_RegisterBool("LPQPSLOLPP", 1, 0x44u, "Toggles drawing of flares");
  fx_cull_elem_spawn = Dvar_RegisterBool("ROOPTTNMS", 1, 0, "Culls effect elems for spawning");
  __asm
  {
    vmovss  xmm14, cs:__real@43340000
    vmovss  xmm1, cs:__real@41a00000; value
  }
  fx_cull_elem_draw = Dvar_RegisterBool("NQNLLPTLSN", 1, 0, "Culls effect elems for drawing");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm15, xmm15, xmm15
  }
  v16 = Dvar_RegisterFloat("OMPTONMQSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Culls particles when they are outside specified view cone");
  __asm
  {
    vmovss  xmm11, cs:__real@41f00000
    vmovaps xmm1, xmm11; value
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  fx_cull_fovInner = v16;
  fx_cull_fovOuter = Dvar_RegisterFloat("NSMRQSNQPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Culls particles when they are outside specified view cone");
  fx_marks = Dvar_RegisterBool("MOLLKMTMRS", 1, 0, "Toggles whether marks that don't affect gameplay are showed (bullets and spray)");
  fx_marks_all = Dvar_RegisterBool("OMOPKRQROK", 1, 0, "Toggles whether any marks are showed (bullets, spray and tracker perk)");
  fx_marks_smodels = Dvar_RegisterBool("NLNKQNROQM", 1, 0, "Toggles whether bullet hits leave marks on static models");
  fx_marks_ents = Dvar_RegisterBool("MQOPRPQLQL", 1, 0, "Toggles whether bullet hits leave marks on entities");
  fx_marks_dynents = Dvar_RegisterBool("SQPTQTLRK", 1, 0, "Toggles whether bullet hits leave marks on dynamic entities");
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3e4ccccd; value
  }
  fx_marks_dynents_ext_killswitch = Dvar_RegisterBool("MQONROQQSR", 1, 0, "Toggles whether bullet hits leave marks on dynamic entities");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  fx_marks_limit_stacking_distance = Dvar_RegisterFloat("LNTRSRPTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance between decals to use anti-stacking");
  fx_marks_limit_stacking_freeold = Dvar_RegisterBool("MTORMOTLSP", 0, 4u, "0 = prevent new mark, 1 = free old mark");
  __asm
  {
    vmovss  xmm10, cs:__real@447a0000
    vmovss  xmm1, cs:__real@42007be7; value
  }
  fx_mark_max_life = Dvar_RegisterInt("MNMOQQSLNT", -1, -1, 10000, 4u, "Max lifetime for a decal in seconds");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  fx_mark_max_thickness = Dvar_RegisterFloat("LPNKRNSQRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Max thickness for a mark");
  fx_freeze = Dvar_RegisterBool("LTMLSTTQMN", 0, 4u, "Freeze effects");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  fx_debugBolt = Dvar_RegisterFloat("MOTRNQLNLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Debug effects bolt");
  fx_count = Dvar_RegisterBool("MNLRNTNLQR", 0, 4u, "Debug effects count");
  __asm
  {
    vmovss  xmm1, cs:__real@42a00000; value
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  fx_visMinTraceDist = Dvar_RegisterFloat("MLSTNTNORR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Minimum visibility trace size");
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
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000; value
    vmovss  xmm9, cs:__real@461c4000
  }
  fx_debug3D = Dvar_RegisterInt("STTNQMNMM", 0, 0, 0x7FFFFFFF, 4u, "Turn on effect system debug information, <int> parameter is culling distance");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm1; min
  }
  v39 = Dvar_RegisterFloat("LMKKSPNMMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Overrides every lighting-frac value, 0 is all unlit, to 1 that is 100% lit - the default of -1 restores segment lighting-frac values");
  __asm { vmovss  xmm2, cs:__real@c61c4000; min }
  fx_overrideLightFrac = v39;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  fx_biasLightFrac = Dvar_RegisterFloat("LSSOMSNSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Bias every lighting-frac value");
  fx_gpu_lighting = Dvar_RegisterBool("MOOKNRNMMN", 1, 4u, "Toggles gpu lighting of appropriate effects");
  fx_gpu_scatter = Dvar_RegisterBool("OMKPKKQTNP", 1, 0x44u, "Toggles gpu lighting scattering of appropriate effects");
  fx_gpu_deferred_fog = Dvar_RegisterBool("MTLNNOSPTP", 1, 0x44u, "Toggles precomputed fog/volumetric lightmap for certain effects");
  __asm
  {
    vmovss  xmm6, cs:__real@41800000
    vmovss  xmm3, cs:__real@43800000; max
  }
  fx_lighting_lowres_ambient = Dvar_RegisterBool("NRTPRQKSRK", 1, 0x44u, "Enables low res ambient lighing of effects");
  __asm
  {
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm6; value
  }
  fx_lightmap_pixels_per_texel = Dvar_RegisterFloat("PSTSNKNPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Approximate pixels per lightmap texel");
  fx_lightmap_max_level = Dvar_RegisterInt("MKNNNONLSK", 5, 0, 5, 0x44u, "Maximum lightmap level");
  __asm { vmovss  xmm2, cs:__real@3f000000; y }
  ui_fx_lightmap_max_level = Dvar_RegisterInt("MTNMRSTQN", 5, 0, 5, 0, "Maximum lightmap level set by the UI");
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+var_98], xmm13
    vmovss  dword ptr [rsp+0C8h+description], xmm15
    vmovaps xmm3, xmm13; z
    vmovaps xmm1, xmm13; x
    vmovss  [rsp+0C8h+flags], xmm13
  }
  v50 = Dvar_RegisterVec4("LKPMPNMTSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, v149, 0x44u, "Scale applied to directional contribution from SH lighting for sprites [primary0, primary1, secondary0, secondary1]");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; y
    vmovss  xmm1, cs:__real@40200000; x
  }
  fx_lighting_shScale = v50;
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+var_98], xmm6
    vmovss  dword ptr [rsp+0C8h+description], xmm15
    vmovaps xmm3, xmm13; z
    vmovss  [rsp+0C8h+flags], xmm13
  }
  fx_lighting_params = Dvar_RegisterVec4("MNSOQLKMT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, v150, 0x44u, "X - Scale scattering coefficient of volume effects Y - VFX light attenuation clamp");
  fx_models_shadows_thermal = Dvar_RegisterBool("OMNMRRKSRK", 0, 0, "Enables particle models shadow casting and thermal rendering");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  fx_lights_radius_scale = Dvar_RegisterFloat("TLOLRMSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale factor for fx light radius");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  fx_lights_intensity_scale = Dvar_RegisterFloat("NQNQPRLRQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale factor for fx light intensity");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  fx_barrelHeatScaleMin = Dvar_RegisterFloat("LSSQKQOMQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Minimum alpha value for particles when heat scale is enabled");
  fx_debugAssertQuat = Dvar_RegisterBool("OKOOKTMNMM", 1, 4u, "Turn on/off debug asserts for quaternions in the fx system");
  glass_spam = Dvar_RegisterBool("MRQPLQNNPP", 0, 0, "Toggle extra spam to help repro glass asserts");
  __asm { vmovss  xmm6, cs:__real@7f7fffff }
  glass_debug = Dvar_RegisterBool("TQMMTLRRN", 0, 0, "Shows debug info for glass");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovss  xmm1, cs:__real@43000000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  glass_debugDistance = Dvar_RegisterFloat("MQPLTPRTOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max distance at which to draw glass debug info");
  __asm
  {
    vmovss  xmm0, cs:__real@42b40000
    vmovss  xmm2, cs:__real@41200000; y
    vmovss  xmm1, cs:__real@40a00000; x
  }
  glass_break = Dvar_RegisterBool("MORSNMRQOR", 1, 4u, "Toggle whether or not glass breaks when shot");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+0C8h+flags], xmm0
  }
  v71 = Dvar_RegisterVec2("MQQQSOPLST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, 4u, "Sets the range of angle deflections used by new glass pieces on a supported edge");
  __asm
  {
    vmovss  xmm0, cs:__real@42c80000
    vmovss  xmm2, cs:__real@40400000; y
    vmovss  xmm1, cs:__real@3fc00000; x
  }
  glass_edge_angle = v71;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+0C8h+flags], xmm0
  }
  v76 = Dvar_RegisterVec2("MMRTTKOQMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, 4u, "Ratio of piece area to supporting edge length squared.  Below the min, the piece never falls.");
  __asm
  {
    vmovss  xmm2, cs:__real@3f666666; y
    vmovss  xmm1, cs:__real@3e4ccccd; x
  }
  glass_fall_ratio = v76;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+0C8h+flags], xmm11
  }
  v80 = Dvar_RegisterVec2("NLNOROSKML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, 4u, "Sets how long a heavy piece supported by a single edge waits before falling, based on glass_fall_ratio");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  glass_fall_delay = v80;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v84 = Dvar_RegisterFloat("NNTPPOLMTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Chance to play an effect on a small piece of glass when it hits the ground");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  glass_fx_chance = v84;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v88 = Dvar_RegisterFloat("NLLKLQRQOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Friction used by moving glass pieces when joined like a hinge to a frame");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  glass_hinge_friction = v88;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  glass_piece_mass = Dvar_RegisterFloat("LQOPNROT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Mass of a piece of broken glass");
  glass_max_pieces_per_frame = Dvar_RegisterInt("LPOOKSNLKO", 100, 1, 0x7FFFFFFF, 4u, "Maximum number of pieces to create in one frame. This is a guideline and not a hard limit.");
  __asm { vmovss  xmm1, cs:__real@43960000; value }
  glass_max_shatter_fx_per_frame = Dvar_RegisterInt("LPSLPRLSPN", 6, 1, 0x7FFFFFFF, 4u, "Maximum number of shatter effects to play in one frame This is a guideline and not a hard limit.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm13; min
  }
  v95 = Dvar_RegisterFloat("NOSMQTSMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum area for a flying piece of glass when shattering. Pieces larger than this will be broken into smaller ones");
  __asm { vmovss  xmm1, cs:__real@43160000; value }
  glass_shard_maxsize = v95;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v99 = Dvar_RegisterFloat("LRNRNONQLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum area for an edge piece of glass when shattering. Pieces larger than this will be broken into smaller ones");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  glass_fringe_maxsize = v99;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  glass_fringe_maxcoverage = Dvar_RegisterFloat("NLTNNPRMKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum portion of the original piece of glass that is allowed to remain after the glass shatters");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  glass_trace_interval = Dvar_RegisterInt("OLSLMTSRKT", 100, 1, 0x7FFFFFFF, 4u, "The length of time, in milliseconds, between glass piece traces");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v106 = Dvar_RegisterFloat("LLTLMSKMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The chance for a given shard of glass to use physics");
  __asm { vmovss  xmm1, cs:__real@44000000; value }
  glass_physics_chance = v106;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v110 = Dvar_RegisterFloat("LKPORKQQQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum distance of a glass piece from the player to do physics");
  __asm
  {
    vmovss  xmm2, cs:__real@00800000; min
    vmovss  xmm1, cs:__real@41c00000; value
  }
  glass_physics_maxdist = v110;
  __asm { vmovaps xmm3, xmm6; max }
  glass_shattered_scale = Dvar_RegisterFloat("MLMKMTSKKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The scale of the shattered glass material");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  glass_crack_pattern_scale = Dvar_RegisterFloat("NRMMNOLNMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The scale applied to the radius used for the crack pattern");
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@44480000; value
    vmovaps xmm3, xmm6; max
  }
  v120 = Dvar_RegisterFloat("MNQPOQSPNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Gravity for falling pieces of glass");
  __asm
  {
    vmovss  xmm2, cs:__real@43c80000; y
    vmovss  xmm1, cs:__real@43480000; x
  }
  glass_fall_gravity = v120;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+0C8h+flags], xmm9
  }
  v124 = Dvar_RegisterVec2("LMSQNOSOSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagse, 0x44u, "Sets the range of linear velocities used by new glass pieces");
  __asm
  {
    vmovss  xmm2, cs:__real@420c0000; y
    vmovss  xmm1, cs:__real@40a00000; x
  }
  glass_linear_vel = v124;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  [rsp+0C8h+flags], xmm14
  }
  v128 = Dvar_RegisterVec2("MPLMRQMQRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsf, 0x44u, "Sets the range of angular velocities used by new glass pieces");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  glass_angular_vel = v128;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  glass_physics_memory_threshold = Dvar_RegisterFloat("MPRTOLTNQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Physics memory threshold above which we don't create physical glass shards");
  fx_dismemberment_enabled = Dvar_RegisterBool("NLKQTSPTKQ", 1, 0x40u, "Enable dismemberment (disabling clears entries)");
  fx_dismemberment_render = Dvar_RegisterBool("MMLOQLOTPN", 1, 0, "Enable dismemberment rendering");
  fx_marks_killOnKillcamTransition_enabled = Dvar_RegisterBool("NLROROTKRS", 1, 0, "Enable clearing of marks/decals via Particle System KillOnKillcamTransition flag.");
  fx_umbra_culling = Dvar_RegisterBool("NOKKKRMNOK", 1, 4u, "Enables umbra culling of effects");
  _R11 = &v151;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-40h]
    vmovaps xmm13, xmmword ptr [r11-50h]
    vmovaps xmm14, xmmword ptr [r11-60h]
    vmovaps xmm15, xmmword ptr [r11-70h]
  }
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

