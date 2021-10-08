/*
==============
RG_SetRegionFromPlatform
==============
*/

void RG_SetRegionFromPlatform(void)
{
  ?RG_SetRegionFromPlatform@@YAXXZ();
}

/*
==============
RG_GetRegionCode
==============
*/

const char *__fastcall RG_GetRegionCode(const AssetRegion regionID)
{
  return ?RG_GetRegionCode@@YAPEBDW4AssetRegion@@@Z(regionID);
}

/*
==============
RG_SetCurrentRegion
==============
*/

void __fastcall RG_SetCurrentRegion(const AssetRegion regionID)
{
  ?RG_SetCurrentRegion@@YAXW4AssetRegion@@@Z(regionID);
}

/*
==============
RG_GetRegionName
==============
*/

const char *__fastcall RG_GetRegionName(const AssetRegion regionID)
{
  return ?RG_GetRegionName@@YAPEBDW4AssetRegion@@@Z(regionID);
}

/*
==============
RG_IsGoreAllowedInRegion
==============
*/

bool __fastcall RG_IsGoreAllowedInRegion()
{
  return ?RG_IsGoreAllowedInRegion@@YA_NXZ();
}

/*
==============
RG_FindRegionByName
==============
*/

AssetRegion __fastcall RG_FindRegionByName(const char *regionName)
{
  return ?RG_FindRegionByName@@YA?AW4AssetRegion@@PEBD@Z(regionName);
}

/*
==============
RG_GetCurrentRegionName
==============
*/

const char *__fastcall RG_GetCurrentRegionName()
{
  return ?RG_GetCurrentRegionName@@YAPEBDXZ();
}

/*
==============
RG_GetCurrentRegionCode
==============
*/

const char *__fastcall RG_GetCurrentRegionCode()
{
  return ?RG_GetCurrentRegionCode@@YAPEBDXZ();
}

/*
==============
RG_FindRegionByName
==============
*/
__int64 RG_FindRegionByName(const char *regionName)
{
  int v2; 
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  bool v12; 

  v2 = 0;
  do
  {
    v3 = 0x7FFFFFFFi64;
    v4 = RG_GetRegionName((const AssetRegion)v2);
    if ( !regionName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v5 = (const char *)(regionName - v4);
    while ( 1 )
    {
      v6 = (unsigned __int8)v4[(_QWORD)v5];
      v7 = v3;
      v8 = *(unsigned __int8 *)v4++;
      --v3;
      if ( !v7 )
        return (unsigned int)v2;
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
          break;
      }
      if ( !v6 )
        return (unsigned int)v2;
    }
    v12 = ++v2 < 5;
    if ( v2 > 5 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 25, ASSERT_TYPE_ASSERT, "(s <= AssetRegion::End)", (const char *)&queryFormat, "s <= AssetRegion::End") )
        __debugbreak();
      v12 = v2 < 5;
    }
  }
  while ( v12 );
  return 0xFFFFFFFFi64;
}

/*
==============
RG_GetCurrentRegionCode
==============
*/
const char *RG_GetCurrentRegionCode()
{
  const char *result; 

  switch ( g_currentRegion )
  {
    case Unknown:
    case End:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 99, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      goto LABEL_9;
    case Worldwide:
      result = "ww";
      break;
    case Japan:
      result = "jp";
      break;
    case SaudiArabia:
      result = "sa";
      break;
    case Korea15Plus:
      result = "kr15";
      break;
    case China:
      result = "cn";
      break;
    default:
LABEL_9:
      result = (char *)&queryFormat.fmt + 3;
      break;
  }
  return result;
}

/*
==============
RG_GetCurrentRegionName
==============
*/
const char *RG_GetCurrentRegionName()
{
  return RG_GetRegionName(g_currentRegion);
}

/*
==============
RG_GetRegionCode
==============
*/
const char *RG_GetRegionCode(const AssetRegion regionID)
{
  const char *result; 

  switch ( regionID )
  {
    case Unknown:
    case End:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 99, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      goto LABEL_9;
    case Worldwide:
      result = "ww";
      break;
    case Japan:
      result = "jp";
      break;
    case SaudiArabia:
      result = "sa";
      break;
    case Korea15Plus:
      result = "kr15";
      break;
    case China:
      result = "cn";
      break;
    default:
LABEL_9:
      result = (char *)&queryFormat.fmt + 3;
      break;
  }
  return result;
}

/*
==============
RG_GetRegionName
==============
*/
const char *RG_GetRegionName(const AssetRegion regionID)
{
  const char *result; 

  switch ( regionID )
  {
    case Unknown:
    case End:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 121, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      goto LABEL_9;
    case Worldwide:
      result = "worldwide";
      break;
    case Japan:
      result = "japan";
      break;
    case SaudiArabia:
      result = "saudiarabia";
      break;
    case Korea15Plus:
      result = "korea15";
      break;
    case China:
      result = "china";
      break;
    default:
LABEL_9:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 123, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
        __debugbreak();
      result = (char *)&queryFormat.fmt + 3;
      break;
  }
  return result;
}

/*
==============
RG_IsGoreAllowedInRegion
==============
*/
bool RG_IsGoreAllowedInRegion()
{
  return ((g_currentRegion - 1) & 0xFFFFFFFC) != 0 || g_currentRegion == SaudiArabia;
}

/*
==============
RG_SetCurrentRegion
==============
*/
void RG_SetCurrentRegion(const AssetRegion regionID)
{
  if ( g_currentRegion != Unknown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 42, ASSERT_TYPE_ASSERT, "(g_currentRegion == AssetRegion::Unknown)", (const char *)&queryFormat, "g_currentRegion == AssetRegion::Unknown") )
    __debugbreak();
  g_currentRegion = regionID;
}

/*
==============
RG_SetRegionFromPlatform
==============
*/
void RG_SetRegionFromPlatform(void)
{
  AssetRegion StartupRegion; 
  const dvar_t *v1; 
  AssetRegion v2; 
  unsigned int flags; 
  __int64 integer64; 
  int v5; 
  __int64 v6; 
  const char *RegionName; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  bool v14; 

  StartupRegion = Sys_GetStartupRegion();
  v1 = DVARSTR_com_force_region;
  v2 = StartupRegion;
  if ( !DVARSTR_com_force_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_region") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v1->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v1->name) )
      __debugbreak();
  }
  integer64 = v1->current.integer64;
  v5 = 0;
  do
  {
    v6 = 0x7FFFFFFFi64;
    RegionName = RG_GetRegionName((const AssetRegion)v5);
    if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !RegionName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = integer64 - (_QWORD)RegionName;
    while ( 1 )
    {
      v9 = (unsigned __int8)RegionName[v8];
      v10 = v6;
      v11 = *(unsigned __int8 *)RegionName++;
      --v6;
      if ( !v10 )
      {
LABEL_26:
        if ( v5 != -1 )
          v2 = v5;
        goto LABEL_28;
      }
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
          break;
      }
      if ( !v9 )
        goto LABEL_26;
    }
    v14 = ++v5 < 5;
    if ( v5 > 5 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 25, ASSERT_TYPE_ASSERT, "(s <= AssetRegion::End)", (const char *)&queryFormat, "s <= AssetRegion::End") )
        __debugbreak();
      v14 = v5 < 5;
    }
  }
  while ( v14 );
LABEL_28:
  if ( g_currentRegion != Unknown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 42, ASSERT_TYPE_ASSERT, "(g_currentRegion == AssetRegion::Unknown)", (const char *)&queryFormat, "g_currentRegion == AssetRegion::Unknown") )
    __debugbreak();
  g_currentRegion = v2;
}

