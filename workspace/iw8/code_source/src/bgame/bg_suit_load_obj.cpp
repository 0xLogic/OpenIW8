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

__int64 __fastcall Suit_Validate_ViewHeights(const char *name, const SuitDef *suitDef, double _XMM2_8)
{
  unsigned int ProneViewHeight; 
  int viewheight_stand; 
  int viewheight_crouch; 
  int viewheight_dead; 
  int viewheight_slide; 
  int viewheight_sprint; 
  const char *v12; 
  int v13; 
  int v14; 
  unsigned __int64 v15; 
  bool v16; 
  unsigned __int64 v17; 
  int *v18; 
  unsigned int bounds_height_prone; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  const char *v45; 
  int v46; 
  int v47[3]; 
  const char *v48; 
  int v49; 
  unsigned int v51; 
  const char *v52; 
  int v53; 
  int v55; 
  const char *v56; 
  int v57; 
  int viewheight_laststand; 
  const char *v60; 
  int v61; 
  int v63; 
  const char *v64; 
  int v65; 
  int v67; 
  const char *v68; 
  int v69; 

  __asm { vmovss  xmm0, cs:__real@42b40000 }
  ProneViewHeight = BG_Suit_GetProneViewHeight(suitDef);
  viewheight_stand = suitDef->viewheight_stand;
  viewheight_crouch = suitDef->viewheight_crouch;
  viewheight_dead = suitDef->viewheight_dead;
  viewheight_slide = suitDef->viewheight_slide;
  viewheight_sprint = suitDef->viewheight_sprint;
  v45 = "stand";
  v48 = "crouch";
  v52 = "prone";
  v56 = "dead";
  viewheight_laststand = suitDef->viewheight_laststand;
  v60 = "laststand";
  v64 = "slide";
  v68 = "sprint";
  v12 = name;
  __asm
  {
    vmovss  [rbp+57h+var_CC], xmm0
    vmovss  [rbp+57h+var_B4], xmm0
    vmovss  [rbp+57h+var_9C], xmm0
    vmovss  [rbp+57h+var_84], xmm0
    vmovss  [rbp+57h+var_6C], xmm0
    vmovss  [rbp+57h+var_54], xmm0
    vmovss  [rbp+57h+var_3C], xmm0
  }
  v44 = viewheight_stand;
  v46 = 60;
  v47[1] = viewheight_crouch;
  v49 = 40;
  v51 = ProneViewHeight;
  v53 = 11;
  v55 = viewheight_dead;
  v57 = 8;
  v61 = 22;
  v63 = viewheight_slide;
  v65 = 32;
  v67 = viewheight_sprint;
  v69 = 50;
  do
  {
    v13 = (unsigned __int8)v12[(unsigned __int64)(g_defaultAssetName[66] - (const char *const)name)];
    v14 = *(unsigned __int8 *)v12 - v13;
    if ( v14 )
      break;
    ++v12;
  }
  while ( v13 );
  v15 = 0i64;
  v16 = v14 == 0;
  if ( v14 )
  {
LABEL_8:
    _RAX = v47;
    do
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vcomiss xmm0, xmm1
      }
      if ( !v16 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+120h+var_F0], xmm0
        }
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFDD0, 1051i64, name, (&v45)[3 * v15], *(_RAX - 5), v43);
        return 0i64;
      }
      ++v15;
      _RAX += 6;
      v16 = v15 <= 7;
    }
    while ( v15 < 7 );
    if ( viewheight_crouch >= viewheight_stand )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFE40, 1052i64, name, viewheight_crouch, viewheight_stand);
      return 0i64;
    }
    if ( (int)ProneViewHeight >= viewheight_crouch )
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
    if ( suitDef->bounds_height_stand <= viewheight_stand )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0070, 1057i64, name, viewheight_stand, suitDef->bounds_height_stand);
      return 0i64;
    }
    if ( suitDef->bounds_height_crouch <= viewheight_crouch )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD00E0, 1058i64, name, viewheight_crouch, suitDef->bounds_height_crouch);
      return 0i64;
    }
    bounds_height_prone = suitDef->bounds_height_prone;
    if ( (int)bounds_height_prone <= (int)ProneViewHeight )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0150, 1059i64, name, ProneViewHeight, suitDef->bounds_height_prone);
      return 0i64;
    }
    __asm
    {
      vmovss  xmm1, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm2, xmm2, xmm2
      vmulss  xmm3, xmm0, xmm1
      vcvtsi2ss xmm2, xmm2, eax
      vcomiss xmm3, xmm2
    }
    if ( bounds_height_prone < ProneViewHeight )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+120h+var_F8], xmm0
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD01C0, 1060i64, name, suitDef->bounds_radius, v40);
      return 0i64;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vmulss  xmm3, xmm0, xmm1
      vcomiss xmm3, xmm2
    }
    if ( bounds_height_prone < ProneViewHeight )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+120h+var_F8], xmm0
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD0230, 1061i64, name, suitDef->bounds_radius, v41);
      return 0i64;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm3, xmm0, xmm1
      vcomiss xmm3, xmm2
    }
    if ( bounds_height_prone < ProneViewHeight )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+120h+var_F8], xmm0
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD02A0, 1062i64, name, suitDef->bounds_radius, v42);
      return 0i64;
    }
    return 1i64;
  }
  else
  {
    v17 = 0i64;
    v18 = &v44;
    while ( *v18 == v18[4] )
    {
      ++v17;
      v18 += 6;
      v16 = v17 <= 7;
      if ( v17 >= 7 )
        goto LABEL_8;
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CCFD00, 1050i64, name, (&v45)[3 * v17], v18[4]);
    return 0i64;
  }
}

