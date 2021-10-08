/*
==============
Nav_FindRepulsorByName
==============
*/

nav_repulsor_s *__fastcall Nav_FindRepulsorByName(const scr_string_t name)
{
  return ?Nav_FindRepulsorByName@@YAPEAUnav_repulsor_s@@W4scr_string_t@@@Z(name);
}

/*
==============
Nav_ClearRepulsorsFromSpace
==============
*/

void __fastcall Nav_ClearRepulsorsFromSpace(nav_space_s *pSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  ?Nav_ClearRepulsorsFromSpace@@YAXPEAUnav_space_s@@_N0@Z(pSpace, bDeleteAll, pNewSpace);
}

/*
==============
Nav_TransferRepulsorsToSpace
==============
*/

void __fastcall Nav_TransferRepulsorsToSpace(nav_space_s *pNewSpace)
{
  ?Nav_TransferRepulsorsToSpace@@YAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
Nav_TranslateTeamFlagsToRepulsorUsageFlags
==============
*/

int __fastcall Nav_TranslateTeamFlagsToRepulsorUsageFlags(const bitarray<224> *teamFlags)
{
  return ?Nav_TranslateTeamFlagsToRepulsorUsageFlags@@YAHAEBV?$bitarray@$0OA@@@@Z(teamFlags);
}

/*
==============
Nav_GetNextRepulsor
==============
*/

nav_repulsor_s *__fastcall Nav_GetNextRepulsor(nav_repulsor_s *pRepulsor)
{
  return ?Nav_GetNextRepulsor@@YAPEAUnav_repulsor_s@@PEAU1@@Z(pRepulsor);
}

/*
==============
Nav_CreateRepulsor
==============
*/

nav_repulsor_s *__fastcall Nav_CreateRepulsor(nav_space_s *pSpace, const vec3_t *pos, const vec3_t *vel, int duration, float radius, int entNum, int usageFlags, const scr_string_t name, bool bBadplace)
{
  return ?Nav_CreateRepulsor@@YAPEAUnav_repulsor_s@@PEAUnav_space_s@@AEBTvec3_t@@1HMHHW4scr_string_t@@_N@Z(pSpace, pos, vel, duration, radius, entNum, usageFlags, name, bBadplace);
}

/*
==============
Nav_DestroyAllRepulsors
==============
*/

void Nav_DestroyAllRepulsors(void)
{
  ?Nav_DestroyAllRepulsors@@YAXXZ();
}

/*
==============
Nav_WriteRepulsor
==============
*/

void __fastcall Nav_WriteRepulsor(MemoryFile *memFile, nav_repulsor_s *pRepulsor)
{
  ?Nav_WriteRepulsor@@YAXPEAUMemoryFile@@PEAUnav_repulsor_s@@@Z(memFile, pRepulsor);
}

/*
==============
Nav_DestroyRepulsor
==============
*/

void __fastcall Nav_DestroyRepulsor(nav_repulsor_s *pRepulsor)
{
  ?Nav_DestroyRepulsor@@YAXPEAUnav_repulsor_s@@@Z(pRepulsor);
}

/*
==============
Nav_AddPlayerRepulsor
==============
*/

void __fastcall Nav_AddPlayerRepulsor(int entNum)
{
  ?Nav_AddPlayerRepulsor@@YAXH@Z(entNum);
}

/*
==============
Nav_UpdateRepulsors
==============
*/

void __fastcall Nav_UpdateRepulsors(int milliseconds)
{
  ?Nav_UpdateRepulsors@@YAXH@Z(milliseconds);
}

/*
==============
G_Nav_DestroyPlayerRepulsor
==============
*/

void __fastcall G_Nav_DestroyPlayerRepulsor(int entNum)
{
  ?G_Nav_DestroyPlayerRepulsor@@YAXH@Z(entNum);
}

/*
==============
G_Nav_AddPlayerRepulsor
==============
*/

void __fastcall G_Nav_AddPlayerRepulsor(int entNum)
{
  ?G_Nav_AddPlayerRepulsor@@YAXH@Z(entNum);
}

/*
==============
Nav_FindRepulsorByEntNum
==============
*/

nav_repulsor_s *__fastcall Nav_FindRepulsorByEntNum(int entNum)
{
  return ?Nav_FindRepulsorByEntNum@@YAPEAUnav_repulsor_s@@H@Z(entNum);
}

/*
==============
Nav_ReadRepulsor
==============
*/

void __fastcall Nav_ReadRepulsor(MemoryFile *memFile, nav_space_s *pSpace)
{
  ?Nav_ReadRepulsor@@YAXPEAUMemoryFile@@PEAUnav_space_s@@@Z(memFile, pSpace);
}

/*
==============
Nav_GetFirstRepulsor
==============
*/

nav_repulsor_s *__fastcall Nav_GetFirstRepulsor()
{
  return ?Nav_GetFirstRepulsor@@YAPEAUnav_repulsor_s@@XZ();
}

/*
==============
Nav_DestroyRepulsorByName
==============
*/

void __fastcall Nav_DestroyRepulsorByName(const scr_string_t name)
{
  ?Nav_DestroyRepulsorByName@@YAXW4scr_string_t@@@Z(name);
}

/*
==============
G_Nav_AddPlayerRepulsor
==============
*/
void G_Nav_AddPlayerRepulsor(int entNum)
{
  __int64 v1; 
  nav_space_s *DefaultSpace; 
  float fmt; 
  int entNuma; 
  int usageFlags; 

  v1 = entNum;
  if ( Nav_MeshLoaded() && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || !SV_BotIsBotEntClient(&g_entities[v1])) )
  {
    if ( (unsigned int)v1 >= level.maxclients )
    {
      usageFlags = level.maxclients;
      entNuma = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( level.maxclients )", "entNum doesn't index level.maxclients\n\t%i not in [0, %i)", entNuma, usageFlags) )
        __debugbreak();
    }
    DefaultSpace = Nav_GetDefaultSpace();
    __asm
    {
      vmovss  xmm0, cs:__real@41700000
      vmovss  dword ptr [rsp+58h+fmt], xmm0
    }
    Nav_CreateRepulsor(DefaultSpace, &vec3_origin, &vec3_origin, 0, fmt, v1, 30, (const scr_string_t)0, 0);
  }
}

/*
==============
G_Nav_DestroyPlayerRepulsor
==============
*/
void G_Nav_DestroyPlayerRepulsor(int entNum)
{
  nav_repulsor_s *RepulsorByEntNum; 

  RepulsorByEntNum = Nav_FindRepulsorByEntNum(entNum);
  if ( RepulsorByEntNum )
    Nav_DestroyRepulsor(RepulsorByEntNum);
}

/*
==============
Nav_AddPlayerRepulsor
==============
*/
void Nav_AddPlayerRepulsor(int entNum)
{
  __int64 v1; 
  nav_space_s *DefaultSpace; 
  float fmt; 
  int entNuma; 
  int usageFlags; 

  v1 = entNum;
  if ( Nav_MeshLoaded() && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || !SV_BotIsBotEntClient(&g_entities[v1])) )
  {
    if ( (unsigned int)v1 >= level.maxclients )
    {
      usageFlags = level.maxclients;
      entNuma = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( level.maxclients )", "entNum doesn't index level.maxclients\n\t%i not in [0, %i)", entNuma, usageFlags) )
        __debugbreak();
    }
    DefaultSpace = Nav_GetDefaultSpace();
    __asm
    {
      vmovss  xmm0, cs:__real@41700000
      vmovss  dword ptr [rsp+58h+fmt], xmm0
    }
    Nav_CreateRepulsor(DefaultSpace, &vec3_origin, &vec3_origin, 0, fmt, v1, 30, (const scr_string_t)0, 0);
  }
}

/*
==============
Nav_ClearRepulsorsFromSpace
==============
*/
void Nav_ClearRepulsorsFromSpace(nav_space_s *pSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  nav_repulsor_s *pNext; 
  nav_space_s *MostLikelySpace; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 317, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  pNext = pSpace->repulsorList.pNext;
  while ( pNext != &pSpace->repulsorList )
  {
    if ( !bDeleteAll || pNext->entNum == 2047 )
    {
      if ( pNewSpace )
        MostLikelySpace = pNewSpace;
      else
        MostLikelySpace = Nav_FindMostLikelySpace(&pNext->origin, NAV_LAYER_HUMAN, pSpace);
      if ( !MostLikelySpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 338, ASSERT_TYPE_ASSERT, "( pSpaceToAddTo )", (const char *)&queryFormat, "pSpaceToAddTo") )
        __debugbreak();
      Nav_MoveRepulsorToSpace(pNext, MostLikelySpace);
      pNext = pSpace->repulsorList.pNext;
    }
    else
    {
      Scr_SetString(&pNext->name, (scr_string_t)0);
      Nav_RemoveRepulsorFromSpace(pNext->pSpace, pNext);
      Nav_FreeRepulsor(pNext);
    }
  }
}

/*
==============
Nav_CreateRepulsor
==============
*/
nav_repulsor_s *Nav_CreateRepulsor(nav_space_s *pSpace, const vec3_t *pos, const vec3_t *vel, int duration, float radius, int entNum, int usageFlags, const scr_string_t name, bool bBadplace)
{
  bool IsValid; 
  bool v16; 
  bool v17; 
  nav_repulsor_s *RepulsorByEntNum; 
  nav_repulsor_s *result; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 93, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  IsValid = bfx::SpaceHandle::IsValid(&pSpace->hSpace);
  v16 = !IsValid;
  if ( !IsValid )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+58h+radius]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 96, ASSERT_TYPE_ASSERT, "( radius > 0.f )", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  if ( entNum != 2047 )
  {
    RepulsorByEntNum = Nav_FindRepulsorByEntNum(entNum);
    if ( RepulsorByEntNum )
      Nav_DestroyRepulsor(RepulsorByEntNum);
  }
  result = Nav_AllocRepulsor();
  _RBX = result;
  if ( result )
  {
    result->bBadplace = bBadplace;
    result->duration = duration;
    Scr_SetString(&result->name, name);
    _RBX->usageFlags = usageFlags;
    __asm { vmovss  dword ptr [rbx+30h], xmm6 }
    _RBX->entNum = entNum;
    _RBX->origin.v[0] = pos->v[0];
    _RBX->origin.v[1] = pos->v[1];
    _RBX->origin.v[2] = pos->v[2];
    _RBX->velocity.v[0] = vel->v[0];
    _RBX->velocity.v[1] = vel->v[1];
    _RBX->velocity.v[2] = vel->v[2];
    Nav_AddRepulsorToSpace(pSpace, _RBX);
    result = _RBX;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
}

/*
==============
Nav_DestroyAllRepulsors
==============
*/
void Nav_DestroyAllRepulsors(void)
{
  nav_repulsor_s *i; 
  __int16 firstUsed; 
  __int64 v2; 
  __int64 v3; 

  for ( i = Nav_GetFirstRepulsor(); i; i = &g_NavData.repulsors[firstUsed] )
  {
    Scr_SetString(&i->name, (scr_string_t)0);
    Nav_RemoveRepulsorFromSpace(i->pSpace, i);
    Nav_FreeRepulsor(i);
    if ( !g_NavData.bNavPowerInitialized )
      break;
    firstUsed = g_NavData.repulsorPoolInfo.firstUsed;
    if ( g_NavData.repulsorPoolInfo.firstUsed < 0 )
      break;
    if ( (unsigned int)g_NavData.repulsorPoolInfo.firstUsed >= 0x100 )
    {
      LODWORD(v3) = 256;
      LODWORD(v2) = g_NavData.repulsorPoolInfo.firstUsed;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.repulsorPoolInfo.firstUsed ) < (unsigned)( NAV_MAX_REPULSORS )", "g_NavData.repulsorPoolInfo.firstUsed doesn't index NAV_MAX_REPULSORS\n\t%i not in [0, %i)", v2, v3) )
        __debugbreak();
      firstUsed = g_NavData.repulsorPoolInfo.firstUsed;
    }
  }
  if ( g_NavData.repulsorPoolInfo.count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 308, ASSERT_TYPE_ASSERT, "( g_NavData.repulsorPoolInfo.count == 0 )", (const char *)&queryFormat, "g_NavData.repulsorPoolInfo.count == 0") )
      __debugbreak();
  }
}

/*
==============
Nav_DestroyRepulsor
==============
*/
void Nav_DestroyRepulsor(nav_repulsor_s *pRepulsor)
{
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 134, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  Scr_SetString(&pRepulsor->name, (scr_string_t)0);
  Nav_RemoveRepulsorFromSpace(pRepulsor->pSpace, pRepulsor);
  Nav_FreeRepulsor(pRepulsor);
}

/*
==============
Nav_DestroyRepulsorByName
==============
*/
void Nav_DestroyRepulsorByName(const scr_string_t name)
{
  nav_repulsor_s *FirstRepulsor; 

  if ( name )
  {
    FirstRepulsor = Nav_GetFirstRepulsor();
    if ( FirstRepulsor )
    {
      while ( FirstRepulsor->name != name )
      {
        FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
        if ( !FirstRepulsor )
          return;
      }
      Nav_DestroyRepulsor(FirstRepulsor);
    }
  }
}

/*
==============
Nav_FindRepulsorByEntNum
==============
*/
nav_repulsor_s *Nav_FindRepulsorByEntNum(int entNum)
{
  nav_repulsor_s *FirstRepulsor; 

  FirstRepulsor = Nav_GetFirstRepulsor();
  if ( !FirstRepulsor )
    return 0i64;
  while ( FirstRepulsor->entNum != entNum )
  {
    FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
    if ( !FirstRepulsor )
      return 0i64;
  }
  if ( !g_NavData.bNavPowerInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 55, ASSERT_TYPE_ASSERT, "( g_NavData.bNavPowerInitialized )", (const char *)&queryFormat, "g_NavData.bNavPowerInitialized") )
    __debugbreak();
  return FirstRepulsor;
}

/*
==============
Nav_FindRepulsorByName
==============
*/
nav_repulsor_s *Nav_FindRepulsorByName(const scr_string_t name)
{
  nav_repulsor_s *FirstRepulsor; 

  FirstRepulsor = Nav_GetFirstRepulsor();
  if ( !FirstRepulsor )
    return 0i64;
  while ( FirstRepulsor->name != name )
  {
    FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
    if ( !FirstRepulsor )
      return 0i64;
  }
  if ( !g_NavData.bNavPowerInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 74, ASSERT_TYPE_ASSERT, "( g_NavData.bNavPowerInitialized )", (const char *)&queryFormat, "g_NavData.bNavPowerInitialized") )
    __debugbreak();
  return FirstRepulsor;
}

/*
==============
Nav_GetFirstRepulsor
==============
*/
nav_repulsor_s *Nav_GetFirstRepulsor()
{
  __int16 firstUsed; 
  int v2; 
  int v3; 

  if ( !g_NavData.bNavPowerInitialized )
    return 0i64;
  firstUsed = g_NavData.repulsorPoolInfo.firstUsed;
  if ( g_NavData.repulsorPoolInfo.firstUsed < 0 )
    return 0i64;
  if ( (unsigned int)g_NavData.repulsorPoolInfo.firstUsed >= 0x100 )
  {
    v3 = 256;
    v2 = g_NavData.repulsorPoolInfo.firstUsed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( g_NavData.repulsorPoolInfo.firstUsed ) < (unsigned)( NAV_MAX_REPULSORS )", "g_NavData.repulsorPoolInfo.firstUsed doesn't index NAV_MAX_REPULSORS\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    firstUsed = g_NavData.repulsorPoolInfo.firstUsed;
  }
  return &g_NavData.repulsors[firstUsed];
}

/*
==============
Nav_GetNextRepulsor
==============
*/
nav_repulsor_s *Nav_GetNextRepulsor(nav_repulsor_s *pRepulsor)
{
  __int16 nextIdx; 
  __int64 v4; 

  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 38, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  nextIdx = pRepulsor->nextIdx;
  if ( nextIdx < 0 )
    return 0i64;
  if ( (unsigned __int16)nextIdx >= 0x100u )
  {
    LODWORD(v4) = nextIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 41, ASSERT_TYPE_ASSERT, "(unsigned)( pRepulsor->nextIdx ) < (unsigned)( NAV_MAX_REPULSORS )", "pRepulsor->nextIdx doesn't index NAV_MAX_REPULSORS\n\t%i not in [0, %i)", v4, 256) )
      __debugbreak();
  }
  return &g_NavData.repulsors[pRepulsor->nextIdx];
}

/*
==============
Nav_MoveRepulsorToSpace
==============
*/
void Nav_MoveRepulsorToSpace(nav_repulsor_s *pRepulsor, nav_space_s *pSpace)
{
  nav_space_s *v4; 

  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 187, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 188, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v4 = pRepulsor->pSpace;
  if ( pSpace != v4 )
  {
    Nav_RemoveRepulsorFromSpace(v4, pRepulsor);
    Nav_AddRepulsorToSpace(pSpace, pRepulsor);
  }
}

/*
==============
Nav_ReadRepulsor
==============
*/
void Nav_ReadRepulsor(MemoryFile *memFile, nav_space_s *pSpace)
{
  const char *CString; 
  scr_string_t name; 
  float fmt; 
  bool bBadplace[4]; 
  int usageFlags; 
  int entNum; 
  int p; 
  vec3_t vel; 
  vec3_t pos; 

  __asm { vmovaps [rsp+0B8h+var_28], xmm6 }
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 421, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 422, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  CString = MemFile_ReadCString(memFile);
  if ( CString && *CString )
    name = SL_GetString(CString, 0);
  else
    name = 0;
  MemFile_ReadData(memFile, 4ui64, &p);
  MemFile_ReadData(memFile, 4ui64, &entNum);
  MemFile_ReadData(memFile, 4ui64, &usageFlags);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+0B8h+pos], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+0B8h+pos+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+0B8h+pos+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+0B8h+vel], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+0B8h+vel+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+0B8h+vel+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm6, xmm0 }
  MemFile_ReadData(memFile, 1ui64, bBadplace);
  __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
  if ( !Nav_CreateRepulsor(pSpace, &pos, &vel, p, fmt, entNum, usageFlags, name, bBadplace[0]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 442, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  if ( name )
    SL_RemoveRefToString(name);
  __asm { vmovaps xmm6, [rsp+0B8h+var_28] }
}

/*
==============
Nav_TransferRepulsorsToSpace
==============
*/
void Nav_TransferRepulsorsToSpace(nav_space_s *pNewSpace)
{
  int i; 
  nav_repulsor_s *v3; 
  nav_space_s *pSpace; 
  nav_space_s *v5; 

  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 350, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  for ( i = g_NavData.repulsorPoolInfo.firstUsed; i >= 0; i = v3->nextIdx )
  {
    v3 = &g_NavData.repulsors[i];
    pSpace = v3->pSpace;
    if ( pSpace != pNewSpace && Nav_FindMostLikelySpace(&v3->origin, NAV_LAYER_HUMAN, pSpace) == pNewSpace )
    {
      if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 188, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
        __debugbreak();
      v5 = v3->pSpace;
      if ( pNewSpace != v5 )
      {
        Nav_RemoveRepulsorFromSpace(v5, v3);
        Nav_AddRepulsorToSpace(pNewSpace, v3);
      }
    }
  }
}

/*
==============
Nav_TranslateTeamFlagsToRepulsorUsageFlags
==============
*/
__int64 Nav_TranslateTeamFlagsToRepulsorUsageFlags(const bitarray<224> *teamFlags)
{
  unsigned int v1; 
  unsigned int v2; 
  int v3; 
  unsigned int v4; 
  __int64 result; 

  v1 = teamFlags->array[0];
  v2 = 2 * ((teamFlags->array[0] >> 29) & 1);
  v3 = v2 | 4;
  if ( (v1 & 0x40000000) == 0 )
    v3 = v2;
  v4 = v3 | 8;
  if ( (v1 & 0x10000000) == 0 )
    v4 = v3;
  result = v4 | 0x10;
  if ( (v1 & 0x8000000) == 0 )
    return v4;
  return result;
}

/*
==============
Nav_UpdateRepulsorPosVel
==============
*/
void Nav_UpdateRepulsorPosVel(nav_repulsor_s *pRepulsor)
{
  __int64 entNum; 
  __int64 v4; 
  gentity_s *v7; 
  nav_space_s *MostLikelySpace; 
  const sentient_s *sentient; 
  __int64 v19; 
  vec3_t vVelOut; 
  float v1[4]; 
  GTrajectory quat; 

  _RBX = pRepulsor;
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 206, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  entNum = _RBX->entNum;
  if ( (_DWORD)entNum != 2047 )
  {
    if ( (unsigned int)entNum >= 0x800 )
    {
      LODWORD(v19) = _RBX->entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 211, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pRepulsor->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pRepulsor->entNum )") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+24h] }
    v4 = _RBX->entNum;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+28h]
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vmovss  [rsp+98h+v1], xmm0
    }
    v7 = &g_entities[v4];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  [rsp+98h+var_44], xmm1
      vmovss  [rsp+98h+var_40], xmm0
    }
    if ( !VecNCompareCustomEpsilon(v7->r.currentOrigin.v, v1, *(float *)&_XMM2, 3) )
    {
      MostLikelySpace = Nav_FindMostLikelySpace(&v7->r.currentOrigin, NAV_LAYER_HUMAN, NULL);
      if ( MostLikelySpace )
      {
        if ( _RBX->pSpace != MostLikelySpace )
          Nav_MoveRepulsorToSpace(_RBX, MostLikelySpace);
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+98h+vVelOut], xmm0
      vmovss  dword ptr [rsp+98h+vVelOut+4], xmm0
      vmovss  dword ptr [rsp+98h+vVelOut+8], xmm0
    }
    if ( v7->client )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+3Ch]
        vmovss  dword ptr [rsp+98h+vVelOut], xmm0
        vmovss  xmm1, dword ptr [rax+40h]
        vmovss  dword ptr [rsp+98h+vVelOut+4], xmm1
        vmovss  xmm0, dword ptr [rax+44h]
        vmovss  dword ptr [rsp+98h+vVelOut+8], xmm0
      }
    }
    else
    {
      sentient = v7->sentient;
      if ( sentient )
      {
        Sentient_GetVelocity(sentient, &vVelOut);
      }
      else if ( v7->vehicle )
      {
        AnglesToQuat(&v7->r.currentAngles, (vec4_t *)&quat);
        QuatTransform((const vec4_t *)&quat, &v7->vehicle->phys.bodyVel, &vVelOut);
      }
      else
      {
        GTrajectory::GTrajectory(&quat, v7);
        BgTrajectory::EvaluatePosTrajectoryDelta(&quat, level.time, &vVelOut);
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+vVelOut]
      vmovss  xmm1, dword ptr [rsp+98h+vVelOut+4]
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  xmm0, dword ptr [rsp+98h+vVelOut+8]
      vmovss  dword ptr [rbx+20h], xmm0
      vmovss  dword ptr [rbx+1Ch], xmm1
    }
    _RBX->origin.v[0] = v7->r.currentOrigin.v[0];
    _RBX->origin.v[1] = v7->r.currentOrigin.v[1];
    _RBX->origin.v[2] = v7->r.currentOrigin.v[2];
  }
}

/*
==============
Nav_UpdateRepulsors
==============
*/
void Nav_UpdateRepulsors(int milliseconds)
{
  nav_repulsor_s *NextRepulsor; 
  __int64 entNum; 
  nav_repulsor_s *v5; 
  int v6; 
  int v7; 
  const dvar_t *v8; 
  __int64 duration; 
  __int64 v11; 

  _RBX = Nav_GetFirstRepulsor();
  if ( _RBX )
  {
    do
    {
      NextRepulsor = Nav_GetNextRepulsor(_RBX);
      entNum = _RBX->entNum;
      v5 = NextRepulsor;
      if ( (_DWORD)entNum == 2047 )
        goto LABEL_15;
      if ( (unsigned int)entNum >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(duration) = _RBX->entNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[entNum] && g_entities[_RBX->entNum].health > 0 )
      {
LABEL_15:
        Nav_UpdateRepulsorPosVel(_RBX);
        v6 = _RBX->duration;
        if ( v6 > 0 )
        {
          v7 = v6 - milliseconds;
          _RBX->duration = v7;
          if ( v7 <= 0 )
          {
            Scr_SetString(&_RBX->name, (scr_string_t)0);
            Nav_RemoveRepulsorFromSpace(_RBX->pSpace, _RBX);
            Nav_FreeRepulsor(_RBX);
          }
        }
        v8 = DCONST_DVARINT_ai_showRepulsors;
        if ( !DCONST_DVARINT_ai_showRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.integer == 1 )
        {
          __asm { vmovss  xmm1, dword ptr [rbx+30h]; radius }
          G_DebugCircle(&_RBX->origin, *(float *)&_XMM1, &colorRed, 1, 1, 1);
        }
      }
      else
      {
        Scr_SetString(&_RBX->name, (scr_string_t)0);
        Nav_RemoveRepulsorFromSpace(_RBX->pSpace, _RBX);
        Nav_FreeRepulsor(_RBX);
      }
      _RBX = v5;
    }
    while ( v5 );
  }
}

/*
==============
Nav_WriteRepulsor
==============
*/
void Nav_WriteRepulsor(MemoryFile *memFile, nav_repulsor_s *pRepulsor)
{
  const char *v4; 
  int p; 

  _RBX = pRepulsor;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 394, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 395, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  v4 = SL_ConvertToString(_RBX->name);
  MemFile_WriteCString(memFile, v4);
  p = _RBX->duration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->entNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->usageFlags;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &_RBX->origin);
  MemFile_WriteData(memFile, 0xCui64, &_RBX->velocity);
  __asm { vmovss  xmm1, dword ptr [rbx+30h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = _RBX->bBadplace;
  MemFile_WriteData(memFile, 1ui64, &p);
}

