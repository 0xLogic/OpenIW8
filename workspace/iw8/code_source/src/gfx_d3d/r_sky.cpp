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

void __fastcall R_FlushSun(double _XMM0_8)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:dword_1544B52AC, xmm0
    vmovss  cs:dword_1544B52B0, xmm0
    vmovss  cs:?sunFlareArray@@3PAUSunFlareDynamic@@A, xmm0; SunFlareDynamic near * sunFlareArray
    vmovss  cs:dword_1544B52BC, xmm0
    vmovss  cs:dword_1544B52B8, xmm0
    vmovss  cs:dword_1544B52C8, xmm0
    vmovss  cs:dword_1544B52CC, xmm0
    vmovss  cs:dword_1544B52C4, xmm0
    vmovss  cs:dword_1544B52D8, xmm0
    vmovss  cs:dword_1544B52D4, xmm0
  }
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

void __fastcall R_RegisterSunDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v12; 
  const dvar_t *v17; 
  const dvar_t *v21; 
  const dvar_t *v36; 
  const dvar_t *v40; 
  const dvar_t *v44; 
  const dvar_t *v48; 
  const dvar_t *v52; 
  const dvar_t *v56; 
  const dvar_t *v60; 
  const dvar_t *v64; 
  const dvar_t *v68; 
  const dvar_t *v72; 
  const dvar_t *v76; 
  float flags; 
  float description; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm11
    vmovaps [rsp+78h+var_28], xmm12
    vmovaps [rsp+78h+var_38], xmm13
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm1, cs:__real@41800000; value
  }
  r_sunsprite_shader = Dvar_RegisterString("TNTMMQQLP", "sun", 0, "name for static sprite; can be any material");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_sunsprite_size = Dvar_RegisterFloat("NTMPMPNTOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "diameter in pixels at 640x480 and 80 fov");
  __asm { vmovss  xmm3, cs:__real@461c4000; max }
  r_sunflare_shader = Dvar_RegisterString("SKQOKNNRK", "sun_flare", 0, "name for flare effect; can be any material");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v12 = Dvar_RegisterFloat("PKNOSRPLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "smallest size of flare effect in pixels at 640x480");
  __asm
  {
    vmovss  xmm13, cs:__real@42b40000
    vmovss  xmm1, cs:__real@42340000; value
  }
  r_sunflare_min_size = v12;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v17 = Dvar_RegisterFloat("LLQPNKQQKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "angle from sun in degrees outside which effect is 0");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@451c4000; value
  }
  r_sunflare_min_angle = v17;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v21 = Dvar_RegisterFloat("SNQORQKMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "largest size of flare effect in pixels at 640x480");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  r_sunflare_max_size = v21;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm11, cs:__real@3f800000
  }
  r_sunflare_max_angle = Dvar_RegisterFloat("MQRMPRPQPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "angle from sun in degrees inside which effect is max");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
    vmovss  xmm12, cs:__real@42700000
  }
  r_sunflare_max_alpha = Dvar_RegisterFloat("NMLMMPLPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "0-1 vertex color and alpha of sun at max effect");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  r_sunflare_fadein = Dvar_RegisterFloat("OMKTMROMTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "time in seconds to fade alpha from 0% to 100%");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v36 = Dvar_RegisterFloat("MRRLOSOKTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "time in seconds to fade alpha from 100% to 0%");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  r_sunflare_fadeout = v36;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v40 = Dvar_RegisterFloat("SKQPQQNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "angle from sun in degrees outside which blinding is 0");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  r_sunblind_min_angle = v40;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v44 = Dvar_RegisterFloat("LTLOOSMMTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "angle from sun in degrees inside which blinding is max");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  r_sunblind_max_angle = v44;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v48 = Dvar_RegisterFloat("MTKKKTNKRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "0-1 fraction for how black the world is at max blind");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  r_sunblind_max_darken = v48;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v52 = Dvar_RegisterFloat("QTQNPTNTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "time in seconds to fade blind from 0% to 100%");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  r_sunblind_fadein = v52;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v56 = Dvar_RegisterFloat("NSRNPQOMLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "time in seconds to fade blind from 100% to 0%");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  r_sunblind_fadeout = v56;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v60 = Dvar_RegisterFloat("NQMMNTSQNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "angle from sun in degrees inside which glare is maximum");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  r_sunglare_min_angle = v60;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v64 = Dvar_RegisterFloat("MSNKLLSORM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "angle from sun in degrees inside which glare is minimum");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  r_sunglare_max_angle = v64;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v68 = Dvar_RegisterFloat("OMKTKNNRNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "0-1 fraction for how white the world is at max glare");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  r_sunglare_max_lighten = v68;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v72 = Dvar_RegisterFloat("LMQRKPOLTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "time in seconds to fade glare from 0% to 100%");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  r_sunglare_fadein = v72;
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v76 = Dvar_RegisterFloat("LRTNOSMQNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "time in seconds to fade glare from 100% to 0%");
  __asm
  {
    vmovss  xmm2, cs:__real@c3b40000
    vmovss  xmm0, cs:__real@43b40000
  }
  r_sunglare_fadeout = v76;
  __asm
  {
    vmovss  dword ptr [rsp+78h+description], xmm0
    vmovss  [rsp+78h+flags], xmm2
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm1, xmm1, xmm1; x
    vmovaps xmm11, [rsp+78h+var_18]
    vmovaps xmm12, [rsp+78h+var_28]
    vmovaps xmm13, [rsp+78h+var_38]
  }
  r_sun_fx_position = Dvar_RegisterVec3("MQPTPTQSMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, 0, "Position in degrees of the sun effect");
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
  Material *v6; 
  const char *string; 
  Material *v8; 
  const char *v9; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = sun;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
  }
  if ( !sun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sky.cpp", 127, ASSERT_TYPE_ASSERT, "(sun)", (const char *)&queryFormat, "sun") )
    __debugbreak();
  v6 = NULL;
  string = r_sunsprite_shader->current.string;
  if ( string && *string )
    v8 = Material_RegisterHandle(string, IMAGE_TRACK_FX);
  else
    v8 = NULL;
  _RBX->spriteMaterial = v8;
  LODWORD(_RBX->spriteSize) = r_sunsprite_size->current.integer;
  v9 = r_sunflare_shader->current.string;
  if ( v9 && *v9 )
    v6 = Material_RegisterHandle(v9, IMAGE_TRACK_FX);
  _RBX->flareMaterial = v6;
  __asm
  {
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm7, cs:__real@3c8efa35
    vmulss  xmm0, xmm9, dword ptr [rax+28h]
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+28h]; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+20h], xmm0
    vmulss  xmm0, xmm9, dword ptr [rax+28h]
    vmovss  dword ptr [rbx+24h], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+28h]; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm6, cs:__real@447a0000
    vmovss  dword ptr [rbx+28h], xmm0
    vxorps  xmm8, xmm8, xmm8
  }
  LODWORD(_RBX->flareMaxAlpha) = r_sunflare_max_alpha->current.integer;
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rax+28h]
    vaddss  xmm2, xmm0, xmm9
    vroundss xmm0, xmm8, xmm2, 1
    vcvttss2si eax, xmm0
  }
  _RBX->flareFadeInTime = _EAX;
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rax+28h]
    vaddss  xmm3, xmm1, xmm9
    vroundss xmm1, xmm8, xmm3, 1
    vcvttss2si eax, xmm1
  }
  _RBX->flareFadeOutTime = _EAX;
  __asm { vmulss  xmm0, xmm7, dword ptr [rax+28h]; X }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+38h], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+28h]; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovss  dword ptr [rbx+3Ch], xmm0 }
  LODWORD(_RBX->blindMaxDarken) = r_sunblind_max_darken->current.integer;
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rax+28h]
    vaddss  xmm3, xmm1, xmm9
    vroundss xmm1, xmm8, xmm3, 1
    vcvttss2si eax, xmm1
  }
  _RBX->blindFadeInTime = _EAX;
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rax+28h]
    vaddss  xmm3, xmm1, xmm9
    vroundss xmm1, xmm8, xmm3, 1
    vcvttss2si eax, xmm1
  }
  _RBX->blindFadeOutTime = _EAX;
  __asm { vmulss  xmm0, xmm7, dword ptr [rax+28h]; X }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+4Ch], xmm0
    vmulss  xmm0, xmm7, dword ptr [rax+28h]; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovss  dword ptr [rbx+50h], xmm0 }
  LODWORD(_RBX->glareMaxLighten) = r_sunglare_max_lighten->current.integer;
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rax+28h]
    vaddss  xmm3, xmm1, xmm9
    vroundss xmm1, xmm8, xmm3, 1
    vcvttss2si eax, xmm1
  }
  _RBX->glareFadeInTime = _EAX;
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rax+28h]
    vaddss  xmm3, xmm1, xmm9
    vroundss xmm1, xmm8, xmm3, 1
    vcvttss2si eax, xmm1
  }
  _RBX->glareFadeOutTime = _EAX;
  AngleVectors((const vec3_t *)&r_sun_fx_position->current, &_RBX->sunFxPosition, NULL, NULL);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
  _RBX->hasValidData = 1;
}

