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
  char v7; 
  char v9; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  int ammoCount; 
  unsigned int v29; 
  const char *WeaponName; 
  __int64 number; 
  const char *v33; 
  char *fmt; 
  __int64 duration; 
  float dist; 
  float textScale; 
  vec3_t pos; 
  vec4_t color; 
  char output[1024]; 

  _RBX = self;
  if ( dword_151A97B3C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_151A97B3C);
    if ( dword_151A97B3C == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:MY_MAX_DIST
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vmovss  cs:MY_MAX_DIST_HALF, xmm1
      }
      j__Init_thread_footer(&dword_151A97B3C);
    }
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 75, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  EntinfoPosAndScale(_RBX, source, &pos, &textScale, &dist);
  __asm
  {
    vmovss  xmm2, [rsp+4C8h+dist]
    vcomiss xmm2, cs:MY_MAX_DIST
  }
  if ( v7 | v9 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr cs:MY_RGB+4
      vmovss  xmm0, dword ptr cs:MY_RGB
      vmovss  dword ptr [rsp+4C8h+color+4], xmm1
      vmovss  xmm1, cs:MY_MAX_DIST_HALF
      vcomiss xmm2, xmm1
      vmovss  dword ptr [rsp+4C8h+color], xmm0
      vmovss  xmm0, dword ptr cs:MY_RGB+8
      vmovaps [rsp+4C8h+var_48], xmm7
      vmovss  dword ptr [rsp+4C8h+color+8], xmm0
      vmovaps [rsp+4C8h+var_58], xmm8
    }
    if ( v7 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+4C8h+color+0Ch], xmm0
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm2, xmm1
        vdivss  xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm2, xmm1, xmm2
        vmovss  dword ptr [rsp+4C8h+color+0Ch], xmm2
      }
    }
    __asm
    {
      vmovss  xmm0, cs:MY_NEXTLINE
      vmulss  xmm2, xmm0, cs:__real@bf000000
      vaddss  xmm2, xmm2, dword ptr [rsp+4C8h+pos+8]
      vmovss  xmm7, [rsp+4C8h+textScale]
      vmovss  xmm8, cs:__real@3f4ccccd
    }
    v24 = 0i64;
    v25 = 0i64;
    __asm { vmovss  dword ptr [rsp+4C8h+pos+8], xmm2 }
    v26 = 2i64;
    __asm { vmovaps [rsp+4C8h+var_38], xmm6 }
    do
    {
      if ( _RBX->c.item[v24].weapon.weaponIdx )
      {
        v27 = *(unsigned int *)((char *)&_RBX->c.spawner.index + v24 * 80);
        ammoCount = _RBX->c.item[v24].ammoCount;
        v29 = _RBX->c.item[v24].clipAmmoCount[0];
        WeaponName = BG_GetWeaponName(&_RBX->c.item[v25].weapon, output, 0x400u);
        number = (unsigned int)_RBX->s.number;
        __asm { vmulss  xmm6, xmm7, xmm8 }
        if ( v27 )
        {
          LODWORD(duration) = ammoCount;
          LODWORD(fmt) = v29;
          v33 = j_va("%i: %s (%i,%i + %i)", number, WeaponName, v27, fmt, duration);
        }
        else
        {
          LODWORD(fmt) = ammoCount;
          v33 = j_va("%i: %s (%i + %i)", number, WeaponName, v29, fmt);
        }
        __asm { vmovaps xmm2, xmm6; scale }
        G_Main_AddDebugString(&pos, &color, *(float *)&_XMM2, v33);
        __asm { vmovss  xmm2, dword ptr [rbx+140h]; yaw }
        G_DebugBox(&_RBX->r.currentOrigin, &_RBX->r.box, *(float *)&_XMM2, &colorRedFaded, 1, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+4C8h+pos+8]
          vaddss  xmm1, xmm0, cs:MY_NEXTLINE
          vmovss  dword ptr [rsp+4C8h+pos+8], xmm1
        }
      }
      ++v25;
      ++v24;
      --v26;
    }
    while ( v26 );
    __asm
    {
      vmovaps xmm8, [rsp+4C8h+var_58]
      vmovaps xmm7, [rsp+4C8h+var_48]
      vmovaps xmm6, [rsp+4C8h+var_38]
    }
  }
}

/*
==============
EntinfoPosAndScale
==============
*/
void EntinfoPosAndScale(gentity_s *self, const vec3_t *source, vec3_t *pos, float *textScale, float *dist)
{
  const dvar_t *v27; 
  char v30; 

  _RSI = dist;
  _RBP = textScale;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  _R14 = source;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 15, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  pos->v[0] = self->r.absBox.midPoint.v[0];
  pos->v[1] = self->r.absBox.midPoint.v[1];
  pos->v[2] = self->r.absBox.midPoint.v[2];
  _RDI = DVARFLT_g_entinfo_scale;
  if ( !DVARFLT_g_entinfo_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_scale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  *(double *)&_XMM0 = CG_GetViewZoomScale(LOCAL_CLIENT_0);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm3, xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+134h]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmovss  dword ptr [rsi], xmm1
  }
  v27 = DVARINT_g_entinfo_type;
  if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.integer >= 2 )
    goto LABEL_25;
  _RBX = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v30 )
    goto LABEL_25;
  _RBX = DVARFLT_g_entinfo_maxdist;
  if ( !DVARFLT_g_entinfo_maxdist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_maxdist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, dword ptr [rsi]
  }
  if ( !v30 )
  {
LABEL_25:
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmulss  xmm1, xmm0, cs:__real@3b2aaaab
      vmulss  xmm2, xmm1, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm2
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
G_GetEntInfoScale
==============
*/

float __fastcall G_GetEntInfoScale(double _XMM0_8)
{
  _RBX = DVARFLT_g_entinfo_scale;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DVARFLT_g_entinfo_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_scale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  _XMM0_8 = CG_GetViewZoomScale(LOCAL_CLIENT_0);
  __asm
  {
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v6; 
  const dvar_t *v7; 
  EntityTagInfo *tagInfo; 
  const char *v9; 
  unsigned int health; 
  const char *v11; 
  scr_string_t targetname; 
  const char *v13; 
  const vec4_t *v14; 
  const char *v17; 
  float textScale; 
  float dist; 
  vec3_t pos; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RDI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 40, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  EntinfoPosAndScale(_RDI, source, &pos, &textScale, &dist);
  __asm { vmovss  xmm2, dword ptr [rdi+140h]; yaw }
  G_DebugBox(&_RDI->r.currentOrigin, &_RDI->r.box, *(float *)&_XMM2, &colorMagenta, 1, 0);
  if ( !_RDI->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_misc_sp.cpp", 45, ASSERT_TYPE_ASSERT, "(self->classname != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "self->classname != NULL_SCR_STRING") )
    __debugbreak();
  v6 = DVARINT_g_entinfo_type;
  if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 4 )
    goto LABEL_25;
  v7 = DVARINT_g_entinfo_type;
  if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer == 5 )
  {
LABEL_25:
    __asm
    {
      vmovss  xmm0, [rsp+88h+textScale]
      vmulss  xmm6, xmm0, cs:__real@3f400000
    }
    v14 = &color_0;
    v17 = j_va("%i", (unsigned int)_RDI->s.number);
  }
  else
  {
    tagInfo = _RDI->tagInfo;
    v9 = SL_ConvertToString(_RDI->classname);
    health = _RDI->health;
    v11 = v9;
    targetname = _RDI->targetname;
    if ( tagInfo )
    {
      if ( targetname )
        v13 = SL_ConvertToString(targetname);
      else
        v13 = "<noname>";
      v14 = &linked_color;
    }
    else
    {
      if ( targetname )
        v13 = SL_ConvertToString(targetname);
      else
        v13 = "<noname>";
      v14 = &color_0;
    }
    __asm
    {
      vmovss  xmm0, [rsp+88h+textScale]
      vmulss  xmm6, xmm0, cs:__real@3f400000
    }
    v17 = j_va("%i : %s : %i : %s", (unsigned int)_RDI->s.number, v13, health, v11);
  }
  __asm { vmovaps xmm2, xmm6; scale }
  G_Main_AddDebugString(&pos, v14, *(float *)&_XMM2, v17);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

