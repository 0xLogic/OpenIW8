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
    Nav_CreateRepulsor(DefaultSpace, &vec3_origin, &vec3_origin, 0, 15.0, v1, 30, (const scr_string_t)0, 0);
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
    Nav_CreateRepulsor(DefaultSpace, &vec3_origin, &vec3_origin, 0, 15.0, v1, 30, (const scr_string_t)0, 0);
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
  nav_repulsor_s *RepulsorByEntNum; 
  nav_repulsor_s *result; 
  nav_repulsor_s *v15; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 93, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  if ( !bfx::SpaceHandle::IsValid(&pSpace->hSpace) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 94, ASSERT_TYPE_ASSERT, "( pSpace->hSpace.IsValid() )", (const char *)&queryFormat, "pSpace->hSpace.IsValid()") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 96, ASSERT_TYPE_ASSERT, "( radius > 0.f )", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  if ( entNum != 2047 )
  {
    RepulsorByEntNum = Nav_FindRepulsorByEntNum(entNum);
    if ( RepulsorByEntNum )
      Nav_DestroyRepulsor(RepulsorByEntNum);
  }
  result = Nav_AllocRepulsor();
  v15 = result;
  if ( result )
  {
    result->bBadplace = bBadplace;
    result->duration = duration;
    Scr_SetString(&result->name, name);
    v15->usageFlags = usageFlags;
    v15->radius = radius;
    v15->entNum = entNum;
    v15->origin.v[0] = pos->v[0];
    v15->origin.v[1] = pos->v[1];
    v15->origin.v[2] = pos->v[2];
    v15->velocity.v[0] = vel->v[0];
    v15->velocity.v[1] = vel->v[1];
    v15->velocity.v[2] = vel->v[2];
    Nav_AddRepulsorToSpace(pSpace, v15);
    return v15;
  }
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
  double Float; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  bool bBadplace[4]; 
  int usageFlags; 
  int entNum; 
  int p; 
  vec3_t vel; 
  vec3_t pos; 

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
  Float = MemFile_ReadFloat(memFile);
  pos.v[0] = *(float *)&Float;
  v7 = MemFile_ReadFloat(memFile);
  pos.v[1] = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  pos.v[2] = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  vel.v[0] = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  vel.v[1] = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  vel.v[2] = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  MemFile_ReadData(memFile, 1ui64, bBadplace);
  if ( !Nav_CreateRepulsor(pSpace, &pos, &vel, p, *(float *)&v12, entNum, usageFlags, name, bBadplace[0]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 442, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  if ( name )
    SL_RemoveRefToString(name);
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
  __int64 v3; 
  float v4; 
  gentity_s *v5; 
  float v6; 
  nav_space_s *MostLikelySpace; 
  vec3_t *client; 
  const sentient_s *sentient; 
  float v10; 
  __int64 v11; 
  vec3_t vVelOut; 
  float v1[4]; 
  GTrajectory quat; 

  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 206, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  entNum = pRepulsor->entNum;
  if ( (_DWORD)entNum != 2047 )
  {
    if ( (unsigned int)entNum >= 0x800 )
    {
      LODWORD(v11) = pRepulsor->entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 211, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pRepulsor->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pRepulsor->entNum )") )
      __debugbreak();
    v3 = pRepulsor->entNum;
    v4 = pRepulsor->origin.v[1];
    v1[0] = pRepulsor->origin.v[0];
    v5 = &g_entities[v3];
    v6 = pRepulsor->origin.v[2];
    v1[1] = v4;
    v1[2] = v6;
    if ( !VecNCompareCustomEpsilon(v5->r.currentOrigin.v, v1, 0.001, 3) )
    {
      MostLikelySpace = Nav_FindMostLikelySpace(&v5->r.currentOrigin, NAV_LAYER_HUMAN, NULL);
      if ( MostLikelySpace )
      {
        if ( pRepulsor->pSpace != MostLikelySpace )
          Nav_MoveRepulsorToSpace(pRepulsor, MostLikelySpace);
      }
    }
    vVelOut.v[0] = 0.0;
    vVelOut.v[1] = 0.0;
    vVelOut.v[2] = 0.0;
    client = (vec3_t *)v5->client;
    if ( client )
    {
      vVelOut = client[5];
    }
    else
    {
      sentient = v5->sentient;
      if ( sentient )
      {
        Sentient_GetVelocity(sentient, &vVelOut);
      }
      else if ( v5->vehicle )
      {
        AnglesToQuat(&v5->r.currentAngles, (vec4_t *)&quat);
        QuatTransform((const vec4_t *)&quat, &v5->vehicle->phys.bodyVel, &vVelOut);
      }
      else
      {
        GTrajectory::GTrajectory(&quat, v5);
        BgTrajectory::EvaluatePosTrajectoryDelta(&quat, level.time, &vVelOut);
      }
    }
    v10 = vVelOut.v[1];
    pRepulsor->velocity.v[0] = vVelOut.v[0];
    pRepulsor->velocity.v[2] = vVelOut.v[2];
    pRepulsor->velocity.v[1] = v10;
    pRepulsor->origin.v[0] = v5->r.currentOrigin.v[0];
    pRepulsor->origin.v[1] = v5->r.currentOrigin.v[1];
    pRepulsor->origin.v[2] = v5->r.currentOrigin.v[2];
  }
}

/*
==============
Nav_UpdateRepulsors
==============
*/
void Nav_UpdateRepulsors(int milliseconds)
{
  nav_repulsor_s *FirstRepulsor; 
  nav_repulsor_s *NextRepulsor; 
  __int64 entNum; 
  nav_repulsor_s *v5; 
  int v6; 
  int v7; 
  const dvar_t *v8; 
  __int64 duration; 
  __int64 v10; 

  FirstRepulsor = Nav_GetFirstRepulsor();
  if ( FirstRepulsor )
  {
    do
    {
      NextRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
      entNum = FirstRepulsor->entNum;
      v5 = NextRepulsor;
      if ( (_DWORD)entNum == 2047 )
        goto LABEL_15;
      if ( (unsigned int)entNum >= 0x800 )
      {
        LODWORD(v10) = 2048;
        LODWORD(duration) = FirstRepulsor->entNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v10) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[entNum] && g_entities[FirstRepulsor->entNum].health > 0 )
      {
LABEL_15:
        Nav_UpdateRepulsorPosVel(FirstRepulsor);
        v6 = FirstRepulsor->duration;
        if ( v6 > 0 )
        {
          v7 = v6 - milliseconds;
          FirstRepulsor->duration = v7;
          if ( v7 <= 0 )
          {
            Scr_SetString(&FirstRepulsor->name, (scr_string_t)0);
            Nav_RemoveRepulsorFromSpace(FirstRepulsor->pSpace, FirstRepulsor);
            Nav_FreeRepulsor(FirstRepulsor);
          }
        }
        v8 = DCONST_DVARINT_ai_showRepulsors;
        if ( !DCONST_DVARINT_ai_showRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.integer == 1 )
          G_DebugCircle(&FirstRepulsor->origin, FirstRepulsor->radius, &colorRed, 1, 1, 1);
      }
      else
      {
        Scr_SetString(&FirstRepulsor->name, (scr_string_t)0);
        Nav_RemoveRepulsorFromSpace(FirstRepulsor->pSpace, FirstRepulsor);
        Nav_FreeRepulsor(FirstRepulsor);
      }
      FirstRepulsor = v5;
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

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 394, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pRepulsor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_repulsor.cpp", 395, ASSERT_TYPE_ASSERT, "( pRepulsor )", (const char *)&queryFormat, "pRepulsor") )
    __debugbreak();
  v4 = SL_ConvertToString(pRepulsor->name);
  MemFile_WriteCString(memFile, v4);
  p = pRepulsor->duration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = pRepulsor->entNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = pRepulsor->usageFlags;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &pRepulsor->origin);
  MemFile_WriteData(memFile, 0xCui64, &pRepulsor->velocity);
  MemFile_WriteFloat(memFile, pRepulsor->radius);
  LOBYTE(p) = pRepulsor->bBadplace;
  MemFile_WriteData(memFile, 1ui64, &p);
}

