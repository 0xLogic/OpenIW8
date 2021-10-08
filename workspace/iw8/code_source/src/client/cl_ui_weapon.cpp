/*
==============
CL_UIWeapon_SetAllowDefault
==============
*/

void __fastcall CL_UIWeapon_SetAllowDefault(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool allowDefault)
{
  ?CL_UIWeapon_SetAllowDefault@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, allowDefault);
}

/*
==============
CL_UIWeapon_GetCollisionPlaneHeightOffset
==============
*/

double __fastcall CL_UIWeapon_GetCollisionPlaneHeightOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  double result; 

  *(float *)&result = ?CL_UIWeapon_GetCollisionPlaneHeightOffset@@YAMW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
  return result;
}

/*
==============
CL_UIWeapon_GetCollisionPlaneEnabled
==============
*/

bool __fastcall CL_UIWeapon_GetCollisionPlaneEnabled(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetCollisionPlaneEnabled@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_GetPlayVFX
==============
*/

void __fastcall CL_UIWeapon_GetPlayVFX(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, scr_string_t *outVfxName, scr_string_t *outTagName)
{
  ?CL_UIWeapon_GetPlayVFX@@YAXW4LocalClientNum_t@@IAEAW4scr_string_t@@1@Z(localClientNum, weaponIndex, outVfxName, outTagName);
}

/*
==============
CL_UIWeapon_Init
==============
*/

void CL_UIWeapon_Init(void)
{
  ?CL_UIWeapon_Init@@YAXXZ();
}

/*
==============
CL_UIWeapon_GetIsWristwatch
==============
*/

bool __fastcall CL_UIWeapon_GetIsWristwatch(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetIsWristwatch@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetIsWristwatch
==============
*/

void __fastcall CL_UIWeapon_SetIsWristwatch(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool isWristwatch)
{
  ?CL_UIWeapon_SetIsWristwatch@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, isWristwatch);
}

/*
==============
CL_UIWeapon_GetResetDynBones
==============
*/

bool __fastcall CL_UIWeapon_GetResetDynBones(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetResetDynBones@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetCollisionPlaneEnabled
==============
*/

void __fastcall CL_UIWeapon_SetCollisionPlaneEnabled(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool collisionPlaneEnabled)
{
  ?CL_UIWeapon_SetCollisionPlaneEnabled@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, collisionPlaneEnabled);
}

/*
==============
CL_UIWeapon_PlayVFX
==============
*/

bool __fastcall CL_UIWeapon_PlayVFX(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const char *vfxName, const char *tagName)
{
  return ?CL_UIWeapon_PlayVFX@@YA_NW4LocalClientNum_t@@IPEBD1@Z(localClientNum, weaponIndex, vfxName, tagName);
}

/*
==============
CL_UIWeapon_SetEntityNum
==============
*/

void __fastcall CL_UIWeapon_SetEntityNum(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const __int16 entityNum)
{
  ?CL_UIWeapon_SetEntityNum@@YAXW4LocalClientNum_t@@IF@Z(localClientNum, weaponIndex, entityNum);
}

/*
==============
CL_UIWeapon_GetWeaponLoaded
==============
*/

bool __fastcall CL_UIWeapon_GetWeaponLoaded(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const Weapon *weapon)
{
  return ?CL_UIWeapon_GetWeaponLoaded@@YA_NW4LocalClientNum_t@@IAEBUWeapon@@@Z(localClientNum, weaponIndex, weapon);
}

/*
==============
CL_UIWeapon_SetAngleOffset
==============
*/

void __fastcall CL_UIWeapon_SetAngleOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *offset)
{
  ?CL_UIWeapon_SetAngleOffset@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, weaponIndex, offset);
}

/*
==============
CL_UIWeapon_GetEntityNum
==============
*/

__int16 __fastcall CL_UIWeapon_GetEntityNum(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetEntityNum@@YAFW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_GetOriginOffset
==============
*/

void __fastcall CL_UIWeapon_GetOriginOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outOffset)
{
  ?CL_UIWeapon_GetOriginOffset@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, weaponIndex, outOffset);
}

/*
==============
CL_UIWeapon_SetVisible
==============
*/

void __fastcall CL_UIWeapon_SetVisible(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool isVisible)
{
  ?CL_UIWeapon_SetVisible@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, isVisible);
}

/*
==============
CL_UIWeapon_GetShowDanglyBits
==============
*/

bool __fastcall CL_UIWeapon_GetShowDanglyBits(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetShowDanglyBits@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_GetAngleOffsetGoal
==============
*/

void __fastcall CL_UIWeapon_GetAngleOffsetGoal(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outGoal)
{
  ?CL_UIWeapon_GetAngleOffsetGoal@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, weaponIndex, outGoal);
}

/*
==============
CL_UIWeapon_Shutdown
==============
*/

void CL_UIWeapon_Shutdown(void)
{
  ?CL_UIWeapon_Shutdown@@YAXXZ();
}

/*
==============
CL_UIWeapon_GetWeapon
==============
*/

const char *__fastcall CL_UIWeapon_GetWeapon(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetWeapon@@YAPEBDW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetIsViewModel
==============
*/

void __fastcall CL_UIWeapon_SetIsViewModel(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool isViewModel)
{
  ?CL_UIWeapon_SetIsViewModel@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, isViewModel);
}

/*
==============
CL_UIWeapon_SetShowDanglyBits
==============
*/

void __fastcall CL_UIWeapon_SetShowDanglyBits(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool showDanglyBits)
{
  ?CL_UIWeapon_SetShowDanglyBits@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, showDanglyBits);
}

/*
==============
CL_UIWeapon_GetRotationCenter
==============
*/

void __fastcall CL_UIWeapon_GetRotationCenter(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outOffset)
{
  ?CL_UIWeapon_GetRotationCenter@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, weaponIndex, outOffset);
}

/*
==============
CL_UIWeapon_GetIsViewModel
==============
*/

bool __fastcall CL_UIWeapon_GetIsViewModel(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetIsViewModel@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetWeapon
==============
*/

void __fastcall CL_UIWeapon_SetWeapon(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const char *weaponName)
{
  ?CL_UIWeapon_SetWeapon@@YAXW4LocalClientNum_t@@IPEBD@Z(localClientNum, weaponIndex, weaponName);
}

/*
==============
CL_UIWeapon_GetAllowDefault
==============
*/

bool __fastcall CL_UIWeapon_GetAllowDefault(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetAllowDefault@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetAngleOffsetGoal
==============
*/

void __fastcall CL_UIWeapon_SetAngleOffsetGoal(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *goal)
{
  ?CL_UIWeapon_SetAngleOffsetGoal@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, weaponIndex, goal);
}

/*
==============
CL_UIWeapon_GetVisible
==============
*/

bool __fastcall CL_UIWeapon_GetVisible(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetVisible@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetOriginOffset
==============
*/

void __fastcall CL_UIWeapon_SetOriginOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *offset)
{
  ?CL_UIWeapon_SetOriginOffset@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, weaponIndex, offset);
}

/*
==============
CL_UIWeapon_GetLoaded
==============
*/

bool __fastcall CL_UIWeapon_GetLoaded(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  return ?CL_UIWeapon_GetLoaded@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_GetAngleOffset
==============
*/

void __fastcall CL_UIWeapon_GetAngleOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outOffset)
{
  ?CL_UIWeapon_GetAngleOffset@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, weaponIndex, outOffset);
}

/*
==============
CL_UIWeapon_ClearPlayVFX
==============
*/

void __fastcall CL_UIWeapon_ClearPlayVFX(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  ?CL_UIWeapon_ClearPlayVFX@@YAXW4LocalClientNum_t@@I@Z(localClientNum, weaponIndex);
}

/*
==============
CL_UIWeapon_SetResetDynBones
==============
*/

void __fastcall CL_UIWeapon_SetResetDynBones(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool resetDynBones)
{
  ?CL_UIWeapon_SetResetDynBones@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, weaponIndex, resetDynBones);
}

/*
==============
CL_UIWeapon_SetRotationCenter
==============
*/

void __fastcall CL_UIWeapon_SetRotationCenter(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *center)
{
  ?CL_UIWeapon_SetRotationCenter@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@@Z(localClientNum, weaponIndex, center);
}

/*
==============
CL_UIWeapon_SetCollisionPlaneHeightOffset
==============
*/

void __fastcall CL_UIWeapon_SetCollisionPlaneHeightOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, float offset)
{
  ?CL_UIWeapon_SetCollisionPlaneHeightOffset@@YAXW4LocalClientNum_t@@IM@Z(localClientNum, weaponIndex, offset);
}

/*
==============
CL_UIWeapon_ClearPlayVFX
==============
*/
void CL_UIWeapon_ClearPlayVFX(UIWeaponInfo *info)
{
  scr_string_t weaponVfxName; 
  scr_string_t weaponVfxTag; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 394, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  weaponVfxName = info->weaponVfxName;
  if ( weaponVfxName )
  {
    SL_RemoveRefToString(weaponVfxName);
    info->weaponVfxName = 0;
  }
  weaponVfxTag = info->weaponVfxTag;
  if ( weaponVfxTag )
  {
    SL_RemoveRefToString(weaponVfxTag);
    info->weaponVfxTag = 0;
  }
}

/*
==============
CL_UIWeapon_ClearPlayVFX
==============
*/
void CL_UIWeapon_ClearPlayVFX(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 412, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v6) = 50;
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 413, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  CL_UIWeapon_ClearPlayVFX(&s_weaponData[v2][v3]);
}

/*
==============
CL_UIWeapon_GetAllowDefault
==============
*/
_BOOL8 CL_UIWeapon_GetAllowDefault(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_weaponData[v2][v3].weaponAllowDefault;
}

/*
==============
CL_UIWeapon_GetAngleOffset
==============
*/
void CL_UIWeapon_GetAngleOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outOffset)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponAngleOffset; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponAngleOffset = &s_weaponData[v3][v5].weaponAngleOffset;
  outOffset->v[0] = p_weaponAngleOffset->v[0];
  outOffset->v[1] = p_weaponAngleOffset->v[1];
  outOffset->v[2] = p_weaponAngleOffset->v[2];
}

/*
==============
CL_UIWeapon_GetAngleOffsetGoal
==============
*/
void CL_UIWeapon_GetAngleOffsetGoal(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outGoal)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponAngleOffsetGoal; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponAngleOffsetGoal = &s_weaponData[v3][v5].weaponAngleOffsetGoal;
  outGoal->v[0] = p_weaponAngleOffsetGoal->v[0];
  outGoal->v[1] = p_weaponAngleOffsetGoal->v[1];
  outGoal->v[2] = p_weaponAngleOffsetGoal->v[2];
}

/*
==============
CL_UIWeapon_GetCollisionPlaneEnabled
==============
*/
_BOOL8 CL_UIWeapon_GetCollisionPlaneEnabled(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_weaponData[v2][v3].weaponCollisionPlaneEnabled;
}

/*
==============
CL_UIWeapon_GetCollisionPlaneHeightOffset
==============
*/
float CL_UIWeapon_GetCollisionPlaneHeightOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v10) = 50;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  _RAX = 584 * (v3 + 50 * v2);
  _RCX = &s_weaponData[0][0].weaponCollisionPlaneHeightOffset;
  __asm { vmovss  xmm0, dword ptr [rax+rcx] }
  return *(float *)&_XMM0;
}

/*
==============
CL_UIWeapon_GetEntityNum
==============
*/
__int64 CL_UIWeapon_GetEntityNum(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 257, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 258, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (unsigned __int16)s_weaponData[v2][v3].entityNum;
}

/*
==============
CL_UIWeapon_GetIsViewModel
==============
*/
bool CL_UIWeapon_GetIsViewModel(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return !s_weaponData[v2][v3].weaponIsWorldModel;
}

/*
==============
CL_UIWeapon_GetIsWristwatch
==============
*/
_BOOL8 CL_UIWeapon_GetIsWristwatch(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 185, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_weaponData[v2][v3].weaponIsWristwatch;
}

/*
==============
CL_UIWeapon_GetLoaded
==============
*/
bool CL_UIWeapon_GetLoaded(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v10; 
  __int64 v11; 
  Weapon result; 
  Weapon weapon; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v11) = 50;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v4 = v3 + 50 * v2;
  if ( !s_weaponData[0][v4].weaponName[0] )
    return 1;
  _RAX = CG_Weapons_GetWeaponForName(&result, s_weaponData[0][v4].weaponName);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0F8h+weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0F8h+weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0F8h+weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v11) = 50;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !weapon.weaponIdx )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v11) = 2;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v11) = 50;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( s_weaponData[0][v4].weaponIsWorldModel )
    return CL_Streaming_IsWeaponWorldRequestLoaded(&weapon);
  else
    return CL_Streaming_IsWeaponViewRequestLoaded((const LocalClientNum_t)v2, &weapon);
}

/*
==============
CL_UIWeapon_GetOriginOffset
==============
*/
void CL_UIWeapon_GetOriginOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outOffset)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponOriginOffset; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponOriginOffset = &s_weaponData[v3][v5].weaponOriginOffset;
  outOffset->v[0] = p_weaponOriginOffset->v[0];
  outOffset->v[1] = p_weaponOriginOffset->v[1];
  outOffset->v[2] = p_weaponOriginOffset->v[2];
}

/*
==============
CL_UIWeapon_GetPlayVFX
==============
*/
void CL_UIWeapon_GetPlayVFX(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, scr_string_t *outVfxName, scr_string_t *outTagName)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v4 = localClientNum;
  v6 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x32 )
  {
    LODWORD(v10) = 50;
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v8 = v6 + 50 * v4;
  *outVfxName = s_weaponData[0][v8].weaponVfxName;
  *outTagName = s_weaponData[0][v8].weaponVfxTag;
}

/*
==============
CL_UIWeapon_GetResetDynBones
==============
*/
_BOOL8 CL_UIWeapon_GetResetDynBones(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 317, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_weaponData[v2][v3].weaponResetDynBones;
}

/*
==============
CL_UIWeapon_GetRotationCenter
==============
*/
void CL_UIWeapon_GetRotationCenter(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, vec3_t *outOffset)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponRotationCenter; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 150, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponRotationCenter = &s_weaponData[v3][v5].weaponRotationCenter;
  outOffset->v[0] = p_weaponRotationCenter->v[0];
  outOffset->v[1] = p_weaponRotationCenter->v[1];
  outOffset->v[2] = p_weaponRotationCenter->v[2];
}

/*
==============
CL_UIWeapon_GetShowDanglyBits
==============
*/
_BOOL8 CL_UIWeapon_GetShowDanglyBits(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return s_weaponData[v2][v3].weaponShowDanglyBits;
}

/*
==============
CL_UIWeapon_GetVisible
==============
*/
bool CL_UIWeapon_GetVisible(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 168, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return !s_weaponData[v2][v3].weaponIsHidden;
}

/*
==============
CL_UIWeapon_GetWeapon
==============
*/
UIWeaponInfo *CL_UIWeapon_GetWeapon(const LocalClientNum_t localClientNum, const unsigned int weaponIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_weaponData[v2][v3];
}

/*
==============
CL_UIWeapon_GetWeaponLoaded
==============
*/
bool CL_UIWeapon_GetWeaponLoaded(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const Weapon *weapon)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = localClientNum;
  v4 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0x32 )
  {
    LODWORD(v9) = 50;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( !weapon->weaponIdx )
    return 0;
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 0x32 )
  {
    LODWORD(v9) = 50;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( s_weaponData[v3][v4].weaponIsWorldModel )
    return CL_Streaming_IsWeaponWorldRequestLoaded(weapon);
  else
    return CL_Streaming_IsWeaponViewRequestLoaded((const LocalClientNum_t)v3, weapon);
}

/*
==============
CL_UIWeapon_Init
==============
*/
void CL_UIWeapon_Init(void)
{
  memset_0(s_weaponData, 0, sizeof(s_weaponData));
}

/*
==============
CL_UIWeapon_PlayVFX
==============
*/
char CL_UIWeapon_PlayVFX(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const char *vfxName, const char *tagName)
{
  __int64 v4; 
  __int64 v6; 
  UIWeaponInfo *v8; 
  scr_string_t String; 
  scr_string_t v11; 
  __int64 v12; 
  __int64 v13; 
  FXRegisteredDef outDef; 

  v4 = localClientNum;
  v6 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 353, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x32 )
  {
    LODWORD(v13) = 50;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( !vfxName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 355, ASSERT_TYPE_ASSERT, "(vfxName)", (const char *)&queryFormat, "vfxName") )
    __debugbreak();
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 356, ASSERT_TYPE_ASSERT, "(tagName)", (const char *)&queryFormat, "tagName") )
    __debugbreak();
  v8 = &s_weaponData[v4][v6];
  CL_UIWeapon_ClearPlayVFX(v8);
  outDef.m_particleSystemDef = NULL;
  FX_LoadEffect(vfxName, &outDef);
  if ( outDef.m_particleSystemDef )
  {
    String = SL_GetString(vfxName, 0);
    v8->weaponVfxName = String;
    if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 373, ASSERT_TYPE_ASSERT, "(weaponInfo->weaponVfxName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "weaponInfo->weaponVfxName != NULL_SCR_STRING") )
      __debugbreak();
    v11 = SL_GetString(tagName, 0);
    v8->weaponVfxTag = v11;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 375, ASSERT_TYPE_ASSERT, "(weaponInfo->weaponVfxTag != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "weaponInfo->weaponVfxTag != NULL_SCR_STRING") )
      __debugbreak();
    return 1;
  }
  else
  {
    return 0;
  }
}

/*
==============
CL_UIWeapon_SetAllowDefault
==============
*/
void CL_UIWeapon_SetAllowDefault(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool allowDefault)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 212, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 213, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponAllowDefault = allowDefault;
}

/*
==============
CL_UIWeapon_SetAngleOffset
==============
*/
void CL_UIWeapon_SetAngleOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *offset)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponAngleOffset; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponAngleOffset = &s_weaponData[v3][v5].weaponAngleOffset;
  p_weaponAngleOffset->v[0] = offset->v[0];
  p_weaponAngleOffset->v[1] = offset->v[1];
  p_weaponAngleOffset->v[2] = offset->v[2];
}

/*
==============
CL_UIWeapon_SetAngleOffsetGoal
==============
*/
void CL_UIWeapon_SetAngleOffsetGoal(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *goal)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponAngleOffsetGoal; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponAngleOffsetGoal = &s_weaponData[v3][v5].weaponAngleOffsetGoal;
  p_weaponAngleOffsetGoal->v[0] = goal->v[0];
  p_weaponAngleOffsetGoal->v[1] = goal->v[1];
  p_weaponAngleOffsetGoal->v[2] = goal->v[2];
}

/*
==============
CL_UIWeapon_SetCollisionPlaneEnabled
==============
*/
void CL_UIWeapon_SetCollisionPlaneEnabled(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool collisionPlaneEnabled)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponCollisionPlaneEnabled = collisionPlaneEnabled;
}

/*
==============
CL_UIWeapon_SetCollisionPlaneHeightOffset
==============
*/

void __fastcall CL_UIWeapon_SetCollisionPlaneHeightOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, double offset)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v10; 
  __int64 v12; 
  int v13; 

  v4 = localClientNum;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v5 = weaponIndex;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v12) = 50;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 336, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  _RAX = 584 * (v5 + 50 * v4);
  _RCX = &s_weaponData[0][0].weaponCollisionPlaneHeightOffset;
  __asm
  {
    vmovss  dword ptr [rax+rcx], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CL_UIWeapon_SetEntityNum
==============
*/
void CL_UIWeapon_SetEntityNum(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const __int16 entityNum)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 249, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].entityNum = entityNum;
}

/*
==============
CL_UIWeapon_SetIsViewModel
==============
*/
void CL_UIWeapon_SetIsViewModel(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool isViewModel)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 195, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponIsWorldModel = !isViewModel;
}

/*
==============
CL_UIWeapon_SetIsWristwatch
==============
*/
void CL_UIWeapon_SetIsWristwatch(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool isWristwatch)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 176, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponIsWristwatch = isWristwatch;
}

/*
==============
CL_UIWeapon_SetOriginOffset
==============
*/
void CL_UIWeapon_SetOriginOffset(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *offset)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponOriginOffset; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponOriginOffset = &s_weaponData[v3][v5].weaponOriginOffset;
  p_weaponOriginOffset->v[0] = offset->v[0];
  p_weaponOriginOffset->v[1] = offset->v[1];
  p_weaponOriginOffset->v[2] = offset->v[2];
}

/*
==============
CL_UIWeapon_SetResetDynBones
==============
*/
void CL_UIWeapon_SetResetDynBones(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool resetDynBones)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 326, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponResetDynBones = resetDynBones;
}

/*
==============
CL_UIWeapon_SetRotationCenter
==============
*/
void CL_UIWeapon_SetRotationCenter(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const vec3_t *center)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *p_weaponRotationCenter; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 140, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 141, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_weaponRotationCenter = &s_weaponData[v3][v5].weaponRotationCenter;
  p_weaponRotationCenter->v[0] = center->v[0];
  p_weaponRotationCenter->v[1] = center->v[1];
  p_weaponRotationCenter->v[2] = center->v[2];
}

/*
==============
CL_UIWeapon_SetShowDanglyBits
==============
*/
void CL_UIWeapon_SetShowDanglyBits(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool showDanglyBits)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 230, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponShowDanglyBits = showDanglyBits;
}

/*
==============
CL_UIWeapon_SetVisible
==============
*/
void CL_UIWeapon_SetVisible(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const bool isVisible)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v7) = 50;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  s_weaponData[v3][v5].weaponIsHidden = !isVisible;
}

/*
==============
CL_UIWeapon_SetWeapon
==============
*/
void CL_UIWeapon_SetWeapon(const LocalClientNum_t localClientNum, const unsigned int weaponIndex, const char *weaponName)
{
  __int64 v3; 
  __int64 v5; 
  UIWeaponInfo *v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  v5 = weaponIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 61, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x32 )
  {
    LODWORD(v8) = 50;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 62, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( 50 )", "weaponIndex doesn't index MAX_CLIENT_UI_WEAPONS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !weaponName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 63, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
    __debugbreak();
  v6 = &s_weaponData[v3][v5];
  Core_strcpy(v6->weaponName, 0x200ui64, weaponName);
  v6->weaponIsWristwatch = 0;
  CL_UIWeapon_ClearPlayVFX(v6);
}

/*
==============
CL_UIWeapon_Shutdown
==============
*/
void CL_UIWeapon_Shutdown(void)
{
  scr_string_t *p_weaponVfxTag; 
  unsigned int v1; 
  scr_string_t *v2; 
  scr_string_t v3; 

  p_weaponVfxTag = &s_weaponData[0][0].weaponVfxTag;
  do
  {
    v1 = 0;
    v2 = p_weaponVfxTag;
    do
    {
      if ( v2 == (scr_string_t *)572 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_weapon.cpp", 394, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      v3 = *((_DWORD *)v2 - 1);
      if ( v3 )
      {
        SL_RemoveRefToString(v3);
        *((_DWORD *)v2 - 1) = 0;
      }
      if ( *v2 )
      {
        SL_RemoveRefToString(*v2);
        *v2 = 0;
      }
      ++v1;
      v2 += 146;
    }
    while ( v1 < 0x32 );
    p_weaponVfxTag += 7300;
  }
  while ( (__int64)p_weaponVfxTag < (__int64)&unk_150B6562C );
  memset_0(s_weaponData, 0, sizeof(s_weaponData));
}

