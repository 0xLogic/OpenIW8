/*
==============
Particle_RegisterDvars
==============
*/

void Particle_RegisterDvars(void)
{
  ?Particle_RegisterDvars@@YAXXZ();
}

/*
==============
Particle_RegisterDvars
==============
*/
void Particle_RegisterDvars(void)
{
  particle_physics_memory_threshold = Dvar_RegisterFloat("NNMQOSNQLP", 0.60000002, 0.0, 1.0, 4u, "Physics memory threshold above which, we don't create fx heavyweight physics");
  particle_physics_allowedPenetrationDepth = Dvar_RegisterFloat("TMRMQSTK", 0.60000002, 0.0, 1.0, 4u, "Allowed penetration depth for a heavyweight body when we use particle_physics_doPenetrationTest");
  particle_parent_updates_child = Dvar_RegisterBool("LTOKSMSMQQ", 0, 4u, "Only the parent will update a child effect that is attached to its parent");
  particle_enable_physics_light = Dvar_RegisterBool("LOOKTNMOSQ", 1, 4u, "Enables/Disables the lightweight particles (Havok_FX)");
  particle_enable = Dvar_RegisterBool("LNQNOMSSTP", 1, 4u, "Enables/Disables the particle system");
  particle_draw = Dvar_RegisterBool("LMLOTSLKLS", 1, 4u, "Enables/Disables the particle system's rendering");
  particle_update = Dvar_RegisterBool("PQKMTNMPL", 1, 4u, "Enables/Disables the particle system's update");
  particle_system_culling_draw = Dvar_RegisterBool("NMQOSNPPRN", 1, 4u, "Enable system culling for drawing");
  particle_system_culling_update = Dvar_RegisterBool("MPNSRMPLOK", 1, 4u, "Enable system culling for updating");
  particle_debug_draw_cull_bounds = Dvar_RegisterBool("MMQLKMTPTP", 0, 4u, "Enables/Disables particle debug drawing for particle cull bounds");
  particle_debug_draw_wrap_bounds = Dvar_RegisterBool("LRTQKNSRKT", 0, 4u, "Enables/Disables particle debug drawing for particle wrap bounds");
  particle_sort_particles = Dvar_RegisterBool("PRNNQRMTQ", 1, 4u, "Sort particles in a particle state, by distance from camera");
  particle_sort_systems = Dvar_RegisterBool("NTKQLNSQQT", 1, 4u, "Sort particle systems by distance from camera");
  particle_physics_doPenetrationTest = Dvar_RegisterBool("NQLRLPTSTK", 1, 4u, "Do a penetration test before spawning a heavyweight body");
  particle_show_tris = Dvar_RegisterBool("NLLMLKQRRN", 0, 4u, "Enables/Disables particle wireframe drawing");
  particle_debug_draw = Dvar_RegisterBool("NRPLTRPMMO", 0, 4u, "Enables/Disables particle debug drawing");
  particle_debug_draw_modules = Dvar_RegisterBool("ORRSNMKSQ", 0, 4u, "Enables/Disables particle debug drawing specifically for modules");
  particle_debug_draw_particles = Dvar_RegisterBool("LMQMMMTNQK", 0, 4u, "Enables/Disables particle debug drawing specifically for individual particles");
  particle_debug_draw_systems = Dvar_RegisterBool("LSMKKQTNRN", 0, 4u, "Enables/Disables particle debug drawing specifically for particle system info, such as name and distance");
  particle_debug_draw_systems_distance = Dvar_RegisterFloat("LRLQLNNNML", 1000.0, 0.0, 1000000.0, 4u, "Max distance an effect can be from the camera to draw its info");
  particle_debug_draw_frustum_cull_radius = Dvar_RegisterBool("MPNPOMKMRT", 0, 4u, "Enables/Disables particle debug drawing for frustum culling");
  particle_debug_draw_lights = Dvar_RegisterBool("MMPTMOSRMQ", 0, 4u, "Enables/Disables particle debug drawing for particle lights. Cones: spotlights, Spheres: omnis.");
  particle_debug_draw_vectorfields = Dvar_RegisterBool("LKPSNOPQON", 0, 4u, "Enables/Disables particle debug drawing for particle vector fields");
  particle_debug_draw_velocity = Dvar_RegisterBool("NSRMTKMLOS", 0, 4u, "Enables/Disables drawing of particle velocity vectors");
  particle_debug_draw_spawn_shape = Dvar_RegisterBool("LNQSPPNQKS", 0, 4u, "Enables/Disables particle debug drawing for spawning shapes/locations");
  particle_debug_draw_geo_trails = Dvar_RegisterBool("QRLQQKTMS", 0, 4u, "Enables/Disables particle debug drawing for geo trails");
  particle_show_axes = Dvar_RegisterBool("PQLORROOT", 0, 4u, "Enables/Disables the drawing of an emitter's axes");
  particle_show_axes_effect_origin = Dvar_RegisterBool("TNMQSPPPK", 0, 4u, "Enables/Disables the drawing of a particle's axes when using relative to effect origin");
  particle_axes_length = Dvar_RegisterFloat("MKRTRSMKPO", 30.0, 1.0, 1000.0, 4u, "Used to specify the debug draw length of an emitter's axes");
  particle_edit_mode_loop_time = Dvar_RegisterFloat("SLQNSLTL", 0.0, 0.0, 100.0, 4u, "When editing, keep looping a finite emitter for a number of seconds");
  particle_figure8_playback = Dvar_RegisterBool("NLOTKOQOOS", 0, 4u, "Enables/Disables figure 8 playback");
  particle_figure8_radius = Dvar_RegisterFloat("NONRSRNOSN", 20.0, 0.0, 1000000.0, 4u, "Figure 8 radius");
  particle_figure8_time = Dvar_RegisterFloat("LPMMNQRQRK", 1.0, 0.0, 1000.0, 4u, "Figure 8 time");
  particle_use_filter = Dvar_RegisterBool("LRPMSMMMLO", 0, 4u, "Use the profile filter to determine which effects are rendered");
  particle_use_spawn_position_in_runner_bolt_offset = Dvar_RegisterBool("MRSNSMMQTQ", 1, 4u, "Included the runner particle's spawn offset in the bolt offset for bolted runners");
  particle_show_transient_warnings = Dvar_RegisterBool("MRMSQMTPMO", 0, 4u, "Enable this to debug issues with transients and referenced assets, such as models");
  particle_nightvision_override = Dvar_RegisterEnum("NOQSNNTRKP", particle_nightvision_override_names, 0, 4u, "Overrides nightvision state");
  particle_thermal_override = Dvar_RegisterEnum("MQTRTKPROM", particle_thermal_override_names, 0, 4u, "Overrides thermal state");
  particle_occlusion_query_disable_world_size = Dvar_RegisterBool("LQNKTTNLPS", 0, 4u, "Disables world size occlusion queries");
  particle_occlusion_query_override_world_size = Dvar_RegisterFloat("MMPTQTQLKQ", -1.0, -1.0, 1000.0, 4u, "Overrides emitter occlusion query world size. -1 restores emitter settings");
  particle_child_spawn_allow = Dvar_RegisterBool("LNTRTPKLKM", 1, 4u, "If disabled, children effects won't be spawned");
  particle_override_raycast_contents_mask_solid = Dvar_RegisterInt("MNLSKPRPLK", 0, -1, 1, 4u, "Override physics raycast trace mask - contents mask solid");
  particle_override_raycast_contents_vehicle = Dvar_RegisterInt("NLLOPKNLMO", 0, -1, 1, 4u, "Override physics raycast trace mask - contents vehicle");
  particle_override_raycast_contents_item = Dvar_RegisterInt("NROLOLMKPR", 0, -1, 1, 4u, "Override physics raycast trace mask - contents item");
  particle_override_raycast_contents_item_clip = Dvar_RegisterInt("LLMMLQKMS", 0, -1, 1, 4u, "Override physics raycast trace mask - contents item clip");
  particle_override_raycast_contents_water = Dvar_RegisterInt("LKSPNRSTOP", 0, -1, 1, 4u, "Override physics raycast trace mask - contents water");
  particle_profile = Dvar_RegisterInt("LPNSQLKQKP", 0, 0, 128, 4u, "Particle profiler page number");
  particle_profile_filter = Dvar_RegisterString("NOLTKRNKSM", (const char *)&queryFormat.fmt + 3, 4u, "Filter effect names in the particle profiler");
  particle_profile_update_time = Dvar_RegisterInt("NTLLTOPKKT", 0, 0, 1000, 4u, "Particle profiler update time (msecs)");
  particle_profile_sort = Dvar_RegisterEnum("NRLPOOKOS", g_particleProfileSortStrings, 0, 4u, "Choose sort criteria for FX profiling");
  particle_profile_memory_only = Dvar_RegisterBool("LPOTLPOTKS", 0, 4u, "Particle memory profiler");
  particle_dump = Dvar_RegisterBool("LLRNSKSLRO", 0, 4u, "Dump particle info");
  particle_magma_heightfield_bbox_min = Dvar_RegisterVec3("NKPSNPTQMM", -125000.0, -125000.0, -2944.1399, -3.4028235e38, 3.4028235e38, 0x44u, "Bounding box min of magma heightfield");
  particle_magma_heightfield_bbox_max = Dvar_RegisterVec3("MSOOKLOQTQ", 125000.1, 125000.0, 24218.4, -3.4028235e38, 3.4028235e38, 0x44u, "Bounding box max of magma heightfield");
  particle_log_name = Dvar_RegisterEnum("NLRMOQOMOM", particle_log_name_names, 0, 4u, "Enables logging of particle names at spawn time");
  particle_on_impact_entity_marks_killswitch = Dvar_RegisterBool("MLPMPKMMKO", 1, 4u, "If disabled, effects created on raycast impact won't spawn impact marks");
  particle_on_impact_entity_bolt_killswitch = Dvar_RegisterBool("LPMMSLRTPL", 1, 4u, "If disabled, effects created on raycast impact won't bolt to entities");
  particle_bolt_non_dobj_entities_killswitch = Dvar_RegisterBool("MQPKNLOSRS", 1, 4u, "If disabled, effects created on raycast impact won't bolt to entities without dobj");
  particle_raycast_ignore_wztrain_killswitch = Dvar_RegisterBool("LQQNNTTOTP", 1, 4u, "Raycast will not collide with WZ train by default");
}

