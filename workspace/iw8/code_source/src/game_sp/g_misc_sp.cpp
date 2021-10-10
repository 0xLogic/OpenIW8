/*
==============
G_GetEntInfoScale
==============
*/

double __fastcall G_GetEntInfoScale()
{
  double result; 

  *(float *)&result = ?G_GetEntInfoScale@@YAMXZ();
  return result;
}

/*
==============
misc_EntInfo
==============
*/

void __fastcall misc_EntInfo(gentity_s *self, const vec3_t *source)
{
  ?misc_EntInfo@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(self, source);
}

/*
==============
EntInfo_Item
==============
*/

void __fastcall EntInfo_Item(gentity_s *self, const vec3_t *source)
{
  ?EntInfo_Item@@YAXPEAUgentity_s@@AEBTvec3_t@@@Z(self, source);
}

/*
==============
G_Spawn_info_player_start
==============
*/

void __fastcall G_Spawn_info_player_start(gentity_s *ent)
{
  ?G_Spawn_info_player_start@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
EntInfo_Item
==============
*/
void EntInfo_Item(gentity_s *self, const vec3_t *source)
{
  float v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  int ammoCount; 
  unsigned int v10; 
  const char *WeaponName; 
  __int64 number; 
  const char *v13; 
  char *fmt; 
  __int64 duration; 
  float dist; 
  float textScale; 
  vec3_t pos; 
  vec4_t color; 
  char output[1024]; 

  if ( dword_151A97B3C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_151A97B3C);
    if ( dword_151A97B3C == -1 )
    {
      MY_MAX_DIST_HALF = MY_MAX_DIST * 0.5;
      j__Init_thread_footer(&dword_151A97B3C);
    }
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  EntinfoPosAndScale(self, source, &pos, &textScale, &dist);
  if ( dist <= MY_MAX_DIST )
  {
    color.xyz = MY_RGB;
    if ( dist >= MY_MAX_DIST_HALF )
      color.v[3] = 1.0 - (float)((float)(dist - MY_MAX_DIST_HALF) / MY_MAX_DIST_HALF);
    else
      color.v[3] = FLOAT_1_0;
    v4 = textScale;
    v5 = 0i64;
    v6 = 0i64;
    pos.v[2] = (float)(MY_NEXTLINE * -0.5) + pos.v[2];
    v7 = 2i64;
    do
    {
      if ( self->c.item[v5].weapon.weaponIdx )
      {
        v8 = *(unsigned int *)((char *)&self->c.spawner.index + v5 * 80);
        ammoCount = self->c.item[v5].ammoCount;
        v10 = self->c.item[v5].clipAmmoCount[0];
        WeaponName = BG_GetWeaponName(&self->c.item[v6].weapon, output, 0x400u);
        number = (unsigned int)self->s.number;
        if ( v8 )
        {
          LODWORD(duration) = ammoCount;
          LODWORD(fmt) = v10;
          v13 = j_va("%i: %s (%i,%i + %i)", number, WeaponName, v8, fmt, duration);
        }
        else
        {
          LODWORD(fmt) = ammoCount;
          v13 = j_va("%i: %s (%i + %i)", number, WeaponName, v10, fmt);
        }
        G_Main_AddDebugString(&pos, &color, v4 * 0.80000001, v13);
        G_DebugBox(&self->r.currentOrigin, &self->r.box, self->r.currentAngles.v[1], &colorRedFaded, 1, 0);
        pos.v[2] = pos.v[2] + MY_NEXTLINE;
      }
      ++v6;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
EntinfoPosAndScale
==============
*/
void EntinfoPosAndScale(gentity_s *self, const vec3_t *source, vec3_t *pos, float *textScale, float *dist)
{
  const dvar_t *v9; 
  float value; 
  double ViewZoomScale; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 15, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  pos->v[0] = self->r.absBox.midPoint.v[0];
  pos->v[1] = self->r.absBox.midPoint.v[1];
  pos->v[2] = self->r.absBox.midPoint.v[2];
  v9 = DVARFLT_g_entinfo_scale;
  if ( !DVARFLT_g_entinfo_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_scale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  ViewZoomScale = CG_GetViewZoomScale(LOCAL_CLIENT_0);
  *textScale = *(float *)&ViewZoomScale * value;
  v12 = source->v[1] - self->r.currentOrigin.v[1];
  v13 = source->v[2] - self->r.currentOrigin.v[2];
  *dist = fsqrt((float)((float)(v12 * v12) + (float)((float)(source->v[0] - self->r.currentOrigin.v[0]) * (float)(source->v[0] - self->r.currentOrigin.v[0]))) + (float)(v13 * v13));
  v14 = DVARINT_g_entinfo_type;
  if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.integer >= 2 )
    goto LABEL_25;
  v15 = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.value <= 0.0 )
    goto LABEL_25;
  v16 = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.value >= *dist )
LABEL_25:
    *textScale = (float)(*dist * 0.0026041667) * *textScale;
}

/*
==============
G_GetEntInfoScale
==============
*/
float G_GetEntInfoScale()
{
  const dvar_t *v0; 
  float value; 
  double ViewZoomScale; 

  v0 = DVARFLT_g_entinfo_scale;
  if ( !DVARFLT_g_entinfo_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_scale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  value = v0->current.value;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  ViewZoomScale = CG_GetViewZoomScale(LOCAL_CLIENT_0);
  return *(float *)&ViewZoomScale * value;
}

/*
==============
G_Spawn_info_player_start
==============
*/
void G_Spawn_info_player_start(gentity_s *ent)
{
  int frameDuration; 
  int time; 

  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = level.frameDuration;
  time = level.time;
  ent->handler = 13;
  ent->nextthink = time + 2 * frameDuration;
}

/*
==============
misc_EntInfo
==============
*/
void misc_EntInfo(gentity_s *self, const vec3_t *source)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  EntityTagInfo *tagInfo; 
  const char *v7; 
  unsigned int health; 
  const char *v9; 
  scr_string_t targetname; 
  const char *v11; 
  const vec4_t *v12; 
  float v13; 
  const char *v14; 
  float textScale; 
  float dist; 
  vec3_t pos; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 40, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  EntinfoPosAndScale(self, source, &pos, &textScale, &dist);
  G_DebugBox(&self->r.currentOrigin, &self->r.box, self->r.currentAngles.v[1], &colorMagenta, 1, 0);
  if ( !self->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 45, ASSERT_TYPE_ASSERT, "(self->classname != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "self->classname != NULL_SCR_STRING") )
    __debugbreak();
  v4 = DVARINT_g_entinfo_type;
  if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == 4 )
    goto LABEL_25;
  v5 = DVARINT_g_entinfo_type;
  if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer == 5 )
  {
LABEL_25:
    v13 = textScale * 0.75;
    v12 = &color_0;
    v14 = j_va("%i", (unsigned int)self->s.number);
  }
  else
  {
    tagInfo = self->tagInfo;
    v7 = SL_ConvertToString(self->classname);
    health = self->health;
    v9 = v7;
    targetname = self->targetname;
    if ( tagInfo )
    {
      if ( targetname )
        v11 = SL_ConvertToString(targetname);
      else
        v11 = "<noname>";
      v12 = &linked_color;
    }
    else
    {
      if ( targetname )
        v11 = SL_ConvertToString(targetname);
      else
        v11 = "<noname>";
      v12 = &color_0;
    }
    v13 = textScale * 0.75;
    v14 = j_va("%i : %s : %i : %s", (unsigned int)self->s.number, v11, health, v9);
  }
  G_Main_AddDebugString(&pos, v12, v13, v14);
}

