/*
==============
R_SetSunFlarePosition
==============
*/

void __fastcall R_SetSunFlarePosition(const vec3_t *angles)
{
  ?R_SetSunFlarePosition@@YAXAEBTvec3_t@@@Z(angles);
}

/*
==============
R_GetSunDvarCount
==============
*/

unsigned int __fastcall R_GetSunDvarCount()
{
  return ?R_GetSunDvarCount@@YAIXZ();
}

/*
==============
R_Cmd_LoadSun
==============
*/

void R_Cmd_LoadSun(void)
{
  ?R_Cmd_LoadSun@@YAXXZ();
}

/*
==============
R_RegisterSunDvars
==============
*/

void R_RegisterSunDvars(void)
{
  ?R_RegisterSunDvars@@YAXXZ();
}

/*
==============
R_SetSunFromDvars
==============
*/

void __fastcall R_SetSunFromDvars(sunflare_t *sun)
{
  ?R_SetSunFromDvars@@YAXPEAUsunflare_t@@@Z(sun);
}

/*
==============
R_Cmd_SaveSun
==============
*/

void R_Cmd_SaveSun(void)
{
  ?R_Cmd_SaveSun@@YAXXZ();
}

/*
==============
R_LoadSunThroughDvars
==============
*/

void __fastcall R_LoadSunThroughDvars(const char *sunName, sunflare_t *sun)
{
  ?R_LoadSunThroughDvars@@YAXPEBDPEAUsunflare_t@@@Z(sunName, sun);
}

/*
==============
R_FlushSun
==============
*/

void R_FlushSun(void)
{
  ?R_FlushSun@@YAXXZ();
}

/*
==============
R_Cmd_LoadSun
==============
*/
void R_Cmd_LoadSun(void)
{
  sunflare_t *p_sun; 
  const char *v1; 
  const char *v2; 
  void *buffer; 

  if ( Cmd_Argc() == 2 )
  {
    if ( Dvar_GetBoolSafe("NTPNRQTKNP") )
    {
      if ( rgp.world )
      {
        p_sun = &rgp.world->sun;
        v1 = Cmd_Argv(1);
        if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 181, ASSERT_TYPE_ASSERT, "(sunName)", (const char *)&queryFormat, "sunName") )
          __debugbreak();
        if ( !p_sun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 182, ASSERT_TYPE_ASSERT, "(sun)", (const char *)&queryFormat, "sun") )
          __debugbreak();
        v2 = j_va("sun/%s.sun", v1);
        if ( FS_ReadFile(v2, &buffer) >= 0 )
        {
          if ( Com_LoadDvarsFromBuffer(sunDvarNames, 0x15u, (const char *)buffer, v2) )
            R_SetSunFromDvars(p_sun);
          FS_FreeFile(buffer);
        }
        else
        {
          Com_Printf(8, "WARNING: couldn't load sun file '%s'\n", v2);
        }
      }
      else
      {
        Com_Printf(LODWORD(rgp.world) + 8, "You can't r_loadsun while a map isn't loaded\n");
      }
    }
    else
    {
      Com_Printf(8, "You must have cheats enabled to use r_loadsun\n");
    }
  }
  else
  {
    Com_Printf(8, "USAGE: r_loadsun <sunname>\n  sunname must not have an extension\n");
  }
}

/*
==============
R_Cmd_SaveSun
==============
*/
void R_Cmd_SaveSun(void)
{
  const char *v0; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    R_SaveSunFromDvars(v0);
  }
  else
  {
    Com_Printf(8, "USAGE: r_savesun <sunname>\n  sunname must not have an extension\n");
  }
}

/*
==============
R_FlushSun
==============
*/
void R_FlushSun(void)
{
  *(float *)&dword_1544B52AC = 0.0;
  *(float *)&dword_1544B52B0 = 0.0;
  sunFlareArray[0].flareIntensity = 0.0;
  *(float *)&dword_1544B52BC = 0.0;
  *(float *)&dword_1544B52B8 = 0.0;
  *(float *)&dword_1544B52C8 = 0.0;
  *(float *)&dword_1544B52CC = 0.0;
  *(float *)&dword_1544B52C4 = 0.0;
  *(float *)&dword_1544B52D8 = 0.0;
  *(float *)&dword_1544B52D4 = 0.0;
  dword_1544B52B4 = 0;
  dword_1544B52D0 = 0;
}

/*
==============
R_GetSunDvarCount
==============
*/
__int64 R_GetSunDvarCount()
{
  return 21i64;
}

/*
==============
R_LoadSunThroughDvars
==============
*/
void R_LoadSunThroughDvars(const char *sunName, sunflare_t *sun)
{
  const char *v4; 
  void *buffer; 

  if ( !sunName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 181, ASSERT_TYPE_ASSERT, "(sunName)", (const char *)&queryFormat, "sunName") )
    __debugbreak();
  if ( !sun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 182, ASSERT_TYPE_ASSERT, "(sun)", (const char *)&queryFormat, "sun") )
    __debugbreak();
  v4 = j_va("sun/%s.sun", sunName);
  if ( FS_ReadFile(v4, &buffer) >= 0 )
  {
    if ( Com_LoadDvarsFromBuffer(sunDvarNames, 0x15u, (const char *)buffer, v4) )
      R_SetSunFromDvars(sun);
    FS_FreeFile(buffer);
  }
  else
  {
    Com_Printf(8, "WARNING: couldn't load sun file '%s'\n", v4);
  }
}

/*
==============
R_RegisterSunDvars
==============
*/
void R_RegisterSunDvars(void)
{
  r_sunsprite_shader = Dvar_RegisterString("TNTMMQQLP", "sun", 0, "name for static sprite; can be any material");
  r_sunsprite_size = Dvar_RegisterFloat("NTMPMPNTOR", 16.0, 0.0, 1000.0, 0, "diameter in pixels at 640x480 and 80 fov");
  r_sunflare_shader = Dvar_RegisterString("SKQOKNNRK", "sun_flare", 0, "name for flare effect; can be any material");
  r_sunflare_min_size = Dvar_RegisterFloat("PKNOSRPLT", 0.0, 0.0, 10000.0, 0, "smallest size of flare effect in pixels at 640x480");
  r_sunflare_min_angle = Dvar_RegisterFloat("LLQPNKQQKR", 45.0, 0.0, 90.0, 0, "angle from sun in degrees outside which effect is 0");
  r_sunflare_max_size = Dvar_RegisterFloat("SNQORQKMP", 2500.0, 0.0, 10000.0, 0, "largest size of flare effect in pixels at 640x480");
  r_sunflare_max_angle = Dvar_RegisterFloat("MQRMPRPQPR", 2.0, 0.0, 90.0, 0, "angle from sun in degrees inside which effect is max");
  r_sunflare_max_alpha = Dvar_RegisterFloat("NMLMMPLPQ", 1.0, 0.0, 1.0, 0, "0-1 vertex color and alpha of sun at max effect");
  r_sunflare_fadein = Dvar_RegisterFloat("OMKTMROMTS", 1.0, 0.0, 60.0, 0, "time in seconds to fade alpha from 0% to 100%");
  r_sunflare_fadeout = Dvar_RegisterFloat("MRRLOSOKTP", 1.0, 0.0, 60.0, 0, "time in seconds to fade alpha from 100% to 0%");
  r_sunblind_min_angle = Dvar_RegisterFloat("SKQPQQNS", 30.0, 0.0, 90.0, 0, "angle from sun in degrees outside which blinding is 0");
  r_sunblind_max_angle = Dvar_RegisterFloat("LTLOOSMMTQ", 5.0, 0.0, 90.0, 0, "angle from sun in degrees inside which blinding is max");
  r_sunblind_max_darken = Dvar_RegisterFloat("MTKKKTNKRS", 0.75, 0.0, 1.0, 0, "0-1 fraction for how black the world is at max blind");
  r_sunblind_fadein = Dvar_RegisterFloat("QTQNPTNTL", 0.5, 0.0, 60.0, 0, "time in seconds to fade blind from 0% to 100%");
  r_sunblind_fadeout = Dvar_RegisterFloat("NSRNPQOMLO", 3.0, 0.0, 60.0, 0, "time in seconds to fade blind from 100% to 0%");
  r_sunglare_min_angle = Dvar_RegisterFloat("NQMMNTSQNS", 30.0, 0.0, 90.0, 0, "angle from sun in degrees inside which glare is maximum");
  r_sunglare_max_angle = Dvar_RegisterFloat("MSNKLLSORM", 5.0, 0.0, 90.0, 0, "angle from sun in degrees inside which glare is minimum");
  r_sunglare_max_lighten = Dvar_RegisterFloat("OMKTKNNRNM", 0.75, 0.0, 1.0, 0, "0-1 fraction for how white the world is at max glare");
  r_sunglare_fadein = Dvar_RegisterFloat("LMQRKPOLTL", 0.5, 0.0, 60.0, 0, "time in seconds to fade glare from 0% to 100%");
  r_sunglare_fadeout = Dvar_RegisterFloat("LRTNOSMQNK", 3.0, 0.0, 60.0, 0, "time in seconds to fade glare from 100% to 0%");
  r_sun_fx_position = Dvar_RegisterVec3("MQPTPTQSMN", 0.0, 0.0, 0.0, -360.0, 360.0, 0, "Position in degrees of the sun effect");
}

/*
==============
R_SaveSunFromDvars
==============
*/
void R_SaveSunFromDvars(const char *sunName)
{
  __int64 v2; 
  unsigned int v3; 
  const char *v4; 
  char buffer[8192]; 

  if ( Com_SaveDvarsToBuffer(sunDvarNames, 0x15u, buffer, 0x2000ui64) )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( buffer[v2] );
    v3 = v2;
    v4 = j_va("sun/%s.sun", sunName);
    FS_WriteFile(v4, buffer, v3);
  }
}

/*
==============
R_SetSunFlarePosition
==============
*/
void R_SetSunFlarePosition(const vec3_t *angles)
{
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 119, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  AngleVectors(angles, &rgp.world->sun.sunFxPosition, NULL, NULL);
}

/*
==============
R_SetSunFromDvars
==============
*/
void R_SetSunFromDvars(sunflare_t *sun)
{
  Material *v2; 
  const char *string; 
  Material *v4; 
  const char *v5; 

  if ( !sun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 127, ASSERT_TYPE_ASSERT, "(sun)", (const char *)&queryFormat, "sun") )
    __debugbreak();
  v2 = NULL;
  string = r_sunsprite_shader->current.string;
  if ( string && *string )
    v4 = Material_RegisterHandle(string, IMAGE_TRACK_FX);
  else
    v4 = NULL;
  sun->spriteMaterial = v4;
  LODWORD(sun->spriteSize) = r_sunsprite_size->current.integer;
  v5 = r_sunflare_shader->current.string;
  if ( v5 && *v5 )
    v2 = Material_RegisterHandle(v5, IMAGE_TRACK_FX);
  sun->flareMaterial = v2;
  sun->flareMinSize = 0.5 * r_sunflare_min_size->current.value;
  sun->flareMinDot = cosf_0(0.017453292 * r_sunflare_min_angle->current.value);
  sun->flareMaxSize = 0.5 * r_sunflare_max_size->current.value;
  sun->flareMaxDot = cosf_0(0.017453292 * r_sunflare_max_angle->current.value);
  _XMM8 = 0i64;
  LODWORD(sun->flareMaxAlpha) = r_sunflare_max_alpha->current.integer;
  __asm { vroundss xmm0, xmm8, xmm2, 1 }
  sun->flareFadeInTime = (int)*(float *)&_XMM0;
  __asm { vroundss xmm1, xmm8, xmm3, 1 }
  sun->flareFadeOutTime = (int)*(float *)&_XMM1;
  sun->blindMinDot = cosf_0(0.017453292 * r_sunblind_min_angle->current.value);
  sun->blindMaxDot = cosf_0(0.017453292 * r_sunblind_max_angle->current.value);
  LODWORD(sun->blindMaxDarken) = r_sunblind_max_darken->current.integer;
  __asm { vroundss xmm1, xmm8, xmm3, 1 }
  sun->blindFadeInTime = (int)*(float *)&_XMM1;
  __asm { vroundss xmm1, xmm8, xmm3, 1 }
  sun->blindFadeOutTime = (int)*(float *)&_XMM1;
  sun->glareMinDot = cosf_0(0.017453292 * r_sunglare_min_angle->current.value);
  sun->glareMaxDot = cosf_0(0.017453292 * r_sunglare_max_angle->current.value);
  LODWORD(sun->glareMaxLighten) = r_sunglare_max_lighten->current.integer;
  __asm { vroundss xmm1, xmm8, xmm3, 1 }
  sun->glareFadeInTime = (int)*(float *)&_XMM1;
  __asm { vroundss xmm1, xmm8, xmm3, 1 }
  sun->glareFadeOutTime = (int)*(float *)&_XMM1;
  AngleVectors((const vec3_t *)&r_sun_fx_position->current, &sun->sunFxPosition, NULL, NULL);
  sun->hasValidData = 1;
}

