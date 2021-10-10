/*
==============
Suit_Register
==============
*/

SuitDef *__fastcall Suit_Register(const char *name)
{
  return ?Suit_Register@@YAPEAUSuitDef@@PEBD@Z(name);
}

/*
==============
Suit_Validate_ViewHeights
==============
*/

int __fastcall Suit_Validate_ViewHeights(const char *name, const SuitDef *suitDef)
{
  return ?Suit_Validate_ViewHeights@@YAHPEBDPEBUSuitDef@@@Z(name, suitDef);
}

/*
==============
Suit_Register
==============
*/
SuitDef *Suit_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit_load_obj.cpp", 426, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit_load_obj.cpp", 413, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_SUIT, name, 1).suitDef;
}

/*
==============
Suit_Validate_ViewHeights
==============
*/
__int64 Suit_Validate_ViewHeights(const char *name, const SuitDef *suitDef)
{
  int ProneViewHeight; 
  int viewheight_stand; 
  int viewheight_crouch; 
  int viewheight_dead; 
  int viewheight_slide; 
  int viewheight_sprint; 
  const char *v10; 
  int v11; 
  int v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  int *v15; 
  float *v16; 
  int bounds_height_stand; 
  int bounds_height_crouch; 
  int bounds_height_prone; 
  float v20; 
  float bounds_radius; 
  float v22; 
  float v23; 
  int v25; 
  const char *v26; 
  int v27; 
  int v28[3]; 
  const char *v29; 
  int v30; 
  float v31; 
  int v32; 
  const char *v33; 
  int v34; 
  float v35; 
  int v36; 
  const char *v37; 
  int v38; 
  float v39; 
  int viewheight_laststand; 
  const char *v41; 
  int v42; 
  float v43; 
  int v44; 
  const char *v45; 
  int v46; 
  float v47; 
  int v48; 
  const char *v49; 
  int v50; 
  float v51; 

  ProneViewHeight = BG_Suit_GetProneViewHeight(suitDef);
  viewheight_stand = suitDef->viewheight_stand;
  viewheight_crouch = suitDef->viewheight_crouch;
  viewheight_dead = suitDef->viewheight_dead;
  viewheight_slide = suitDef->viewheight_slide;
  viewheight_sprint = suitDef->viewheight_sprint;
  v26 = "stand";
  v29 = "crouch";
  v33 = "prone";
  v37 = "dead";
  viewheight_laststand = suitDef->viewheight_laststand;
  v41 = "laststand";
  v45 = "slide";
  v49 = "sprint";
  v10 = name;
  *(float *)v28 = FLOAT_90_0;
  v31 = FLOAT_90_0;
  v35 = FLOAT_90_0;
  v39 = FLOAT_90_0;
  v43 = FLOAT_90_0;
  v47 = FLOAT_90_0;
  v51 = FLOAT_90_0;
  v25 = viewheight_stand;
  v27 = 60;
  v28[1] = viewheight_crouch;
  v30 = 40;
  v32 = ProneViewHeight;
  v34 = 11;
  v36 = viewheight_dead;
  v38 = 8;
  v42 = 22;
  v44 = viewheight_slide;
  v46 = 32;
  v48 = viewheight_sprint;
  v50 = 50;
  do
  {
    v11 = (unsigned __int8)v10[(unsigned __int64)(g_defaultAssetName[66] - (const char *const)name)];
    v12 = *(unsigned __int8 *)v10 - v11;
    if ( v12 )
      break;
    ++v10;
  }
  while ( v11 );
  v13 = 0i64;
  if ( v12 )
  {
LABEL_8:
    v16 = (float *)v28;
    do
    {
      if ( (float)*((int *)v16 - 5) > *v16 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFDD0, 1051i64, name, (&v26)[3 * v13], *((_DWORD *)v16 - 5), *v16);
        return 0i64;
      }
      ++v13;
      v16 += 6;
    }
    while ( v13 < 7 );
    if ( viewheight_crouch >= viewheight_stand )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFE40, 1052i64, name, viewheight_crouch, viewheight_stand);
      return 0i64;
    }
    if ( ProneViewHeight >= viewheight_crouch )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFEB0, 1053i64, name, ProneViewHeight, viewheight_crouch);
      return 0i64;
    }
    if ( viewheight_dead >= viewheight_crouch )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFF20, 1054i64, name, viewheight_dead, viewheight_crouch);
      return 0i64;
    }
    if ( viewheight_slide >= viewheight_crouch )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFF90, 1055i64, name, viewheight_slide, viewheight_crouch);
      return 0i64;
    }
    if ( viewheight_sprint >= viewheight_stand )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0000, 1056i64, name, viewheight_sprint, viewheight_stand);
      return 0i64;
    }
    bounds_height_stand = suitDef->bounds_height_stand;
    if ( bounds_height_stand <= viewheight_stand )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0070, 1057i64, name, viewheight_stand, suitDef->bounds_height_stand);
      return 0i64;
    }
    bounds_height_crouch = suitDef->bounds_height_crouch;
    if ( bounds_height_crouch <= viewheight_crouch )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD00E0, 1058i64, name, viewheight_crouch, suitDef->bounds_height_crouch);
      return 0i64;
    }
    bounds_height_prone = suitDef->bounds_height_prone;
    if ( bounds_height_prone <= ProneViewHeight )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0150, 1059i64, name, ProneViewHeight, suitDef->bounds_height_prone);
      return 0i64;
    }
    v20 = (float)bounds_height_stand * 0.5;
    bounds_radius = (float)suitDef->bounds_radius;
    if ( v20 < bounds_radius )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD01C0, 1060i64, name, suitDef->bounds_radius, v20);
      return 0i64;
    }
    v22 = (float)bounds_height_crouch * 0.5;
    if ( v22 < bounds_radius )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0230, 1061i64, name, suitDef->bounds_radius, v22);
      return 0i64;
    }
    v23 = (float)bounds_height_prone * 0.5;
    if ( v23 < bounds_radius )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD02A0, 1062i64, name, suitDef->bounds_radius, v23);
      return 0i64;
    }
    return 1i64;
  }
  else
  {
    v14 = 0i64;
    v15 = &v25;
    while ( *v15 == v15[4] )
    {
      ++v14;
      v15 += 6;
      if ( v14 >= 7 )
        goto LABEL_8;
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFD00, 1050i64, name, (&v26)[3 * v14], v15[4]);
    return 0i64;
  }
}

