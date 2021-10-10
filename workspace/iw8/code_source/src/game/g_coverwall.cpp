/*
==============
G_CoverWall_Controller
==============
*/

void __fastcall G_CoverWall_Controller(const gentity_s *pSelf, DObjPartBits *partBits)
{
  ?G_CoverWall_Controller@@YAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(pSelf, partBits);
}

/*
==============
G_CoverWall_SetHealthForGridPos
==============
*/

void __fastcall G_CoverWall_SetHealthForGridPos(const gentity_s *ent, const int newHealth, const unsigned int xPos, const unsigned int yPos, const unsigned int zPos)
{
  ?G_CoverWall_SetHealthForGridPos@@YAXPEBUgentity_s@@HIII@Z(ent, newHealth, xPos, yPos, zPos);
}

/*
==============
G_CoverWall_ShutdownSystem
==============
*/

void G_CoverWall_ShutdownSystem(void)
{
  ?G_CoverWall_ShutdownSystem@@YAXXZ();
}

/*
==============
G_CoverWall_NotifyActor
==============
*/

void __fastcall G_CoverWall_NotifyActor(gentity_s *wall, gentity_s *actor)
{
  ?G_CoverWall_NotifyActor@@YAXPEAUgentity_s@@0@Z(wall, actor);
}

/*
==============
G_CoverWall_Spawn
==============
*/

gentity_s *__fastcall G_CoverWall_Spawn(const vec3_t *origin, const vec3_t *angles, int maxHealthPerCoverBlock)
{
  return ?G_CoverWall_Spawn@@YAPEAUgentity_s@@AEBTvec3_t@@0H@Z(origin, angles, maxHealthPerCoverBlock);
}

/*
==============
G_CoverWall_DoPropogatedDamage
==============
*/

void __fastcall G_CoverWall_DoPropogatedDamage(const gentity_s *hitEnt, int damage, unsigned int xPos, unsigned int yPos, unsigned int zPos)
{
  ?G_CoverWall_DoPropogatedDamage@@YAXPEBUgentity_s@@HIII@Z(hitEnt, damage, xPos, yPos, zPos);
}

/*
==============
G_CoverWall_GetHealthForGridPos
==============
*/

int __fastcall G_CoverWall_GetHealthForGridPos(const gentity_s *ent, const unsigned int xPos, const unsigned int yPos, const unsigned int zPos)
{
  return ?G_CoverWall_GetHealthForGridPos@@YAHPEBUgentity_s@@III@Z(ent, xPos, yPos, zPos);
}

/*
==============
G_CoverWall_WriteSaveGame
==============
*/

void __fastcall G_CoverWall_WriteSaveGame(MemoryFile *memFile)
{
  ?G_CoverWall_WriteSaveGame@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_CoverWall_Notify
==============
*/

void __fastcall G_CoverWall_Notify(gentity_s *ent, coverWallNotification notifyType)
{
  ?G_CoverWall_Notify@@YAXPEAUgentity_s@@W4coverWallNotification@@@Z(ent, notifyType);
}

/*
==============
G_CoverWall_Free
==============
*/

void __fastcall G_CoverWall_Free(gentity_s *ent)
{
  ?G_CoverWall_Free@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CoverWall_InitSystem
==============
*/

void G_CoverWall_InitSystem(void)
{
  ?G_CoverWall_InitSystem@@YAXXZ();
}

/*
==============
G_CoverWall_DeSpawn
==============
*/

void __fastcall G_CoverWall_DeSpawn(gentity_s *ent, bool immediate)
{
  ?G_CoverWall_DeSpawn@@YAXPEAUgentity_s@@_N@Z(ent, immediate);
}

/*
==============
G_CoverWall_CalcRandomDamageAmount
==============
*/

int __fastcall G_CoverWall_CalcRandomDamageAmount(int originalDamageAmt)
{
  return ?G_CoverWall_CalcRandomDamageAmount@@YAHH@Z(originalDamageAmt);
}

/*
==============
G_CoverWall_ReadSaveGame
==============
*/

void __fastcall G_CoverWall_ReadSaveGame(SaveGame *save)
{
  ?G_CoverWall_ReadSaveGame@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_CoverWall_Damage
==============
*/

void __fastcall G_CoverWall_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *weapon, bool isAlternate, int timeOffset)
{
  ?G_CoverWall_Damage@@YAXPEAUgentity_s@@PEBU1@0PEBTvec3_t@@2HHHAEBUWeapon@@_NH@Z(targ, inflictor, attacker, dir, point, damage, dFlags, mod, weapon, isAlternate, timeOffset);
}

/*
==============
compareCoverBlocks
==============
*/

int __fastcall compareCoverBlocks(const void *c1, const void *c2)
{
  return ?compareCoverBlocks@@YAHPEBX0@Z(c1, c2);
}

/*
==============
G_CoverWall_DamageCheckHit
==============
*/

bool __fastcall G_CoverWall_DamageCheckHit(const BulletTraceResults *br, int damage)
{
  return ?G_CoverWall_DamageCheckHit@@YA_NPEBUBulletTraceResults@@H@Z(br, damage);
}

/*
==============
G_CoverWall_FreeStaticData
==============
*/

void __fastcall G_CoverWall_FreeStaticData(gentity_s *ent)
{
  ?G_CoverWall_FreeStaticData@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CoverWall_Update
==============
*/

void __fastcall G_CoverWall_Update(gentity_s *ent)
{
  ?G_CoverWall_Update@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CoverWall_Destroy
==============
*/

void __fastcall G_CoverWall_Destroy(gentity_s *ent)
{
  ?G_CoverWall_Destroy@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_CoverWall_GetCoverGrid
==============
*/

const unsigned int *__fastcall G_CoverWall_GetCoverGrid(const gentity_s *ent)
{
  return ?G_CoverWall_GetCoverGrid@@YAPEBIPEBUgentity_s@@@Z(ent);
}

/*
==============
G_CoverWall_InitStaticData
==============
*/

void __fastcall G_CoverWall_InitStaticData(gentity_s *ent, int maxHealthPerCoverBlock)
{
  ?G_CoverWall_InitStaticData@@YAXPEAUgentity_s@@H@Z(ent, maxHealthPerCoverBlock);
}

/*
==============
G_CoverWall_CalcRandomDamageAmount
==============
*/
__int64 G_CoverWall_CalcRandomDamageAmount(int originalDamageAmt)
{
  const dvar_t *v1; 
  float value; 
  const dvar_t *v4; 
  float v5; 
  double v6; 

  v1 = DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMinPercent;
  if ( !DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMinPercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverwall_propogateDamageMinPercent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMaxPercent;
  if ( !DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMaxPercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverwall_propogateDamageMaxPercent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.value;
  if ( value > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 297, ASSERT_TYPE_ASSERT, "(minDamagePercent <= maxDamagePercent)", (const char *)&queryFormat, "minDamagePercent <= maxDamagePercent") )
    __debugbreak();
  if ( value != v5 )
  {
    v6 = G_flrand(value, v5);
    value = *(float *)&v6;
  }
  return (unsigned int)(int)(float)((float)originalDamageAmt * value);
}

/*
==============
G_CoverWall_CheckModelSwap
==============
*/
void G_CoverWall_CheckModelSwap(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  int numCoverBlocksInitialized; 
  int v4; 
  int v5; 
  float v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 

  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1502, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  numCoverBlocksInitialized = CoverData->numCoverBlocksInitialized;
  v4 = BG_CoverWall_NumFilledGridPositions(CoverData->coverGrid);
  v5 = level.time - ent->s.time2;
  v6 = (float)v4 / (float)numCoverBlocksInitialized;
  if ( numCoverBlocksInitialized <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1509, ASSERT_TYPE_ASSERT, "(numBlocksInitialzed > 0)", (const char *)&queryFormat, "numBlocksInitialzed > 0") )
    __debugbreak();
  if ( v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1510, ASSERT_TYPE_ASSERT, "(lifeTime >= 0)", (const char *)&queryFormat, "lifeTime >= 0") )
    __debugbreak();
  if ( v4 > numCoverBlocksInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1511, ASSERT_TYPE_ASSERT, "(currNumBlocks <= numBlocksInitialzed)", (const char *)&queryFormat, "currNumBlocks <= numBlocksInitialzed") )
    __debugbreak();
  v7 = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_5;
  if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_5") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v6 > v7->current.value )
  {
    v8 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_5;
    if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_5") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v5 < v8->current.integer )
      goto LABEL_23;
  }
  if ( CoverData->damageState >= 5 )
  {
LABEL_23:
    v9 = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_4;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_4") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v6 > v9->current.value )
    {
      v10 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_4;
      if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_4") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v5 < v10->current.integer )
        goto LABEL_33;
    }
    if ( CoverData->damageState >= 4 )
    {
LABEL_33:
      v11 = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_3;
      if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_3") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v6 > v11->current.value )
      {
        v12 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_3;
        if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_3") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v5 < v12->current.integer )
          goto LABEL_43;
      }
      if ( CoverData->damageState >= 3 )
      {
LABEL_43:
        v13 = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_2;
        if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_2") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( v6 > v13->current.value )
        {
          v14 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_2;
          if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_2") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v14);
          if ( v5 < v14->current.integer )
            goto LABEL_53;
        }
        if ( CoverData->damageState >= 2 )
        {
LABEL_53:
          v15 = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_1;
          if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_1") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( (v6 <= v15->current.value || v5 >= Dvar_GetInt_Internal_DebugName(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_1, "g_coverWall_timeThresholdMS_1")) && CoverData->damageState < 1 )
          {
            G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d1");
            CoverData->damageState = 1;
          }
        }
        else
        {
          G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d2");
          CoverData->damageState = 2;
        }
      }
      else
      {
        G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d3");
        CoverData->damageState = 3;
      }
    }
    else
    {
      G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d4");
      CoverData->damageState = 4;
    }
  }
  else
  {
    G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d5");
    CoverData->damageState = 5;
  }
}

/*
==============
G_CoverWall_ClearCoverAtGridPos
==============
*/
void G_CoverWall_ClearCoverAtGridPos(const gentity_s *ent, const int xPos, const int yPos, const int zPos)
{
  CoverWall_t *CoverData; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 884, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 887, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  BG_CoverWall_SetGridPos(CoverData->coverGrid, 0, xPos, yPos, zPos);
  BG_CoverWall_SetGridPos(CoverData->anchorsGrid, 0, xPos, yPos, zPos);
  G_CoverWall_SetHealthForGridPos(ent, 0, xPos, yPos, zPos);
}

/*
==============
G_CoverWall_Controller
==============
*/
void G_CoverWall_Controller(const gentity_s *pSelf, DObjPartBits *partBits)
{
  CoverWall_t *CoverData; 
  DObj *ServerDObjForEnt; 
  int v6; 
  double v7; 
  int v8; 
  int v9; 
  __int128 outAngles; 
  __int128 outLocalPos; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1769, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1770, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( pSelf->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1771, ASSERT_TYPE_ASSERT, "(pSelf->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "pSelf->s.eType == ET_COVERWALL") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(pSelf);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1774, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  *(float *)&outLocalPos = 0.0;
  *((float *)&outLocalPos + 1) = 0.0;
  *((float *)&outLocalPos + 2) = 0.0;
  *(float *)&outAngles = 0.0;
  *((float *)&outAngles + 1) = 0.0;
  *((float *)&outAngles + 2) = 0.0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(pSelf);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1784, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj", outAngles, outLocalPos) )
    __debugbreak();
  v6 = 0;
  v7 = BG_CoverWall_CalcSagAnimWeight(pSelf->s.time2, level.time);
  v8 = -4;
  do
  {
    v9 = -6;
    while ( !BG_CoverWall_GetGridPos(CoverData->coverGrid, v9, 0, v8) )
    {
LABEL_24:
      if ( ++v9 > 6 )
        goto LABEL_25;
    }
    if ( v6 + 1 > 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1797, ASSERT_TYPE_ASSERT, "(1 + coverBlockCount <= 255)", (const char *)&queryFormat, "COVERWALL_MODEL_FIRST_CONTROLLER + coverBlockCount <= 255") )
      __debugbreak();
    if ( (unsigned __int8)(v6 + 1) <= 0x7Fu )
    {
      BG_CoverWall_GridPosToLocalPos(v9, 0, v8, *(float *)&v7, (vec3_t *)&outLocalPos);
      BG_CoverWall_CalcAnglesForPosition(v9, 0, v8, (vec3_t *)&outAngles);
      DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, (unsigned __int8)++v6, (const vec3_t *)&outLocalPos, (const vec3_t *)&outAngles);
      goto LABEL_24;
    }
LABEL_25:
    ++v8;
  }
  while ( v8 <= 9 );
}

/*
==============
G_CoverWall_Damage
==============
*/
void G_CoverWall_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *weapon, bool isAlternate)
{
  __int128 v10; 
  bool v11; 
  gentity_s *v12; 
  const dvar_t *v13; 
  float value; 
  CoverWall_t *CoverData; 
  unsigned int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  char *v21; 
  __int64 v22; 
  const vec3_t *v23; 
  int v24; 
  char *v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int HealthForGridPos; 
  const dvar_t *v30; 
  int v31; 
  int v32; 
  int v33; 
  double v34; 
  __int64 sagAmount; 
  vec3_t *outWorldPos; 
  int outZ; 
  gentity_s *ent; 
  int outX[2]; 
  __int64 v40; 
  unsigned int *grid; 
  vec3_t v42; 
  char Base[6]; 
  char v44; 
  __int128 v45; 

  if ( targ )
  {
    v11 = targ->s.eType == ET_COVERWALL;
    v12 = targ;
    ent = targ;
    if ( v11 )
    {
      if ( (dFlags & 1) != 0 )
      {
        v13 = DCONST_DVARMPSPFLT_g_coverWall_splashDamageScalar;
        if ( !DCONST_DVARMPSPFLT_g_coverWall_splashDamageScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_splashDamageScalar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        value = v13->current.value;
        CoverData = G_CoverWall_GetCoverData(v12);
        if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 665, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
          __debugbreak();
        grid = CoverData->coverGrid;
        v16 = BG_CoverWall_NumFilledGridPositions(CoverData->coverGrid);
        if ( v16 <= 0x7F )
        {
          v17 = -4;
          v45 = v10;
          v18 = 0;
          v40 = 0i64;
          v19 = 0i64;
          *(_QWORD *)outX = -4i64;
          do
          {
            v20 = -6;
            v21 = &Base[12 * v19 + 4];
            v22 = -6i64;
            do
            {
              if ( BG_CoverWall_GetGridPos(grid, v20, 0, v17) )
              {
                BG_CoverWall_GridPosToWorldPos(&v12->r.currentOrigin, &v12->r.currentAngles, v20, 0, v17, 0.0, &v42);
                v23 = point;
                if ( !point )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 686, ASSERT_TYPE_ASSERT, "(point)", (const char *)&queryFormat, "point") )
                    __debugbreak();
                  v23 = NULL;
                }
                *((float *)v21 - 1) = (float)((float)((float)(v42.v[1] - v23->v[1]) * (float)(v42.v[1] - v23->v[1])) + (float)((float)(v42.v[0] - v23->v[0]) * (float)(v42.v[0] - v23->v[0]))) + (float)((float)(v42.v[2] - v23->v[2]) * (float)(v42.v[2] - v23->v[2]));
                if ( (unsigned int)(v20 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v20, "signed", v22) )
                  __debugbreak();
                *(_WORD *)v21 = v20;
                *((_WORD *)v21 + 1) = 0;
                if ( (unsigned int)(v17 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v17, "signed", *(intmax_t *)outX) )
                  __debugbreak();
                ++v18;
                *((_WORD *)v21 + 2) = v17;
                ++v19;
                v21 += 12;
              }
              ++v20;
              ++v22;
            }
            while ( v20 <= 6 );
            ++*(_QWORD *)outX;
            ++v17;
            outZ = v18;
          }
          while ( v17 <= 9 );
          qsort(Base, v18, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)compareCoverBlocks);
          v24 = (int)(float)((float)damage * value);
          if ( v18 > 0 )
          {
            v25 = &v44;
            do
            {
              v26 = *((__int16 *)v25 - 1);
              v27 = *(__int16 *)v25;
              v28 = *((__int16 *)v25 + 1);
              HealthForGridPos = G_CoverWall_GetHealthForGridPos(v12, v26, v27, v28);
              v30 = DVARBOOL_g_coverWall_drawDamage;
              v31 = v24;
              v32 = HealthForGridPos;
              if ( v24 >= HealthForGridPos )
                v31 = HealthForGridPos;
              if ( !DVARBOOL_g_coverWall_drawDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawDamage") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v30);
              if ( v30->current.enabled )
                G_CoverWall_DebugDrawGridPos(ent, &colorOrange, 40, v26, v27, v28);
              G_CoverWall_DamageCoverAtGridPos(ent, v32, 0, v26, v27, v28);
              v24 -= v31;
              if ( v24 <= 0 )
                break;
              v25 += 12;
              v12 = ent;
              ++v40;
            }
            while ( v40 < outZ );
          }
        }
        else
        {
          LODWORD(outWorldPos) = v16;
          LODWORD(sagAmount) = 127;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 671, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Coverwall sort buffer of size %d is not big enough to hold %d elements, increase buffer size\n", sagAmount, outWorldPos) )
            __debugbreak();
        }
      }
      else
      {
        v33 = targ->c.item[0].clipAmmoCount[0];
        if ( v33 != -1 )
        {
          v12->c.item[0].clipAmmoCount[0] = -1;
          BG_CoverWall_DataArrayIndexToGridPos(v33, outX, (int *)&ent, &outZ);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_coverWall_drawDamage, "g_coverWall_drawDamage") )
            G_CoverWall_DebugDrawGridPos(v12, &colorRed, 10, outX[0], (const int)ent, outZ);
          v34 = BG_Coverwall_WeaponDamageScalar(weapon, isAlternate);
          G_CoverWall_DamageCoverAtGridPos(v12, (int)(float)(*(float *)&v34 * (float)damage), 1, outX[0], (unsigned int)ent, outZ);
        }
      }
    }
  }
}

/*
==============
G_CoverWall_DamageCheckHit
==============
*/
char G_CoverWall_DamageCheckHit(const BulletTraceResults *br, int damage)
{
  gentity_s *hitEnt; 

  if ( !br && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 770, ASSERT_TYPE_ASSERT, "(br)", (const char *)&queryFormat, "br") )
    __debugbreak();
  hitEnt = br->hitEnt;
  if ( !hitEnt || hitEnt->s.eType != ET_COVERWALL )
    return 0;
  if ( br->trace.hitSubType != TRACE_HITSUBTYPE_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 776, ASSERT_TYPE_ASSERT, "(br->trace.hitSubType == TRACE_HITSUBTYPE_COVERWALL)", (const char *)&queryFormat, "br->trace.hitSubType == TRACE_HITSUBTYPE_COVERWALL") )
    __debugbreak();
  hitEnt->c.item[0].clipAmmoCount[0] = br->trace.subTypeData.coverWall.id;
  return 1;
}

/*
==============
G_CoverWall_DamageCoverAtGridPos
==============
*/
void G_CoverWall_DamageCoverAtGridPos(const gentity_s *hitEnt, int damage, bool propogateDamage, unsigned int xPos, unsigned int yPos, unsigned int zPos)
{
  int HealthForGridPos; 
  int v11; 
  CoverWall_t *CoverData; 

  if ( !hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 363, ASSERT_TYPE_ASSERT, "(hitEnt)", (const char *)&queryFormat, "hitEnt") )
    __debugbreak();
  if ( hitEnt->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 364, ASSERT_TYPE_ASSERT, "(hitEnt->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "hitEnt->s.eType == ET_COVERWALL") )
    __debugbreak();
  if ( BG_CoverWall_IsPosOnGrid(xPos, yPos, zPos) )
  {
    HealthForGridPos = G_CoverWall_GetHealthForGridPos(hitEnt, xPos, yPos, zPos);
    if ( HealthForGridPos > 0 )
    {
      v11 = HealthForGridPos - damage;
      if ( v11 < 0 )
        v11 = 0;
      G_CoverWall_SetHealthForGridPos(hitEnt, v11, xPos, yPos, zPos);
      if ( !v11 )
      {
        CoverData = G_CoverWall_GetCoverData(hitEnt);
        if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 381, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
          __debugbreak();
        BG_CoverWall_SetGridPos(CoverData->coverGrid, 0, xPos, yPos, zPos);
        BG_CoverWall_SetGridPos(CoverData->anchorsGrid, 0, xPos, yPos, zPos);
        CoverData->removeDisconnectedCoverBlocks = 1;
      }
      if ( propogateDamage )
        G_CoverWall_DoPropogatedDamage(hitEnt, damage, xPos, yPos, zPos);
    }
  }
}

/*
==============
G_CoverWall_DeSpawn
==============
*/
void G_CoverWall_DeSpawn(gentity_s *ent, bool immediate)
{
  CoverWall_t *CoverData; 
  unsigned int *p_flags; 

  if ( immediate )
  {
    G_CoverWall_Destroy(ent);
  }
  else
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1360, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    CoverData = G_CoverWall_GetCoverData(ent);
    if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1363, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    p_flags = &CoverData->flags;
    if ( (CoverData->flags & 1) != 0 )
    {
      CoverData->expansionTime = 0x7FFFFFFF;
      if ( CoverData == (CoverWall_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.h", 68, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
        __debugbreak();
      *p_flags &= ~1u;
    }
    if ( CoverData == (CoverWall_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.h", 61, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
      __debugbreak();
    *p_flags |= 2u;
    CoverData->contractionTime = level.time + BG_CoverWall_GetCollapseRateMS();
    if ( scr_const.coverwall_contract_start )
      GScr_Notify(ent, scr_const.coverwall_contract_start, 0);
  }
}

/*
==============
G_CoverWall_DebugDrawCoverWall
==============
*/
void G_CoverWall_DebugDrawCoverWall(const gentity_s *ent)
{
  const dvar_t *v2; 
  bool enabled; 
  const dvar_t *v4; 
  bool v5; 
  const dvar_t *v6; 
  bool v7; 
  const dvar_t *v8; 
  bool v9; 
  const dvar_t *v10; 
  double v11; 
  float sagAmount; 
  CoverWall_t *CoverData; 
  float v14; 
  float v15; 
  const unsigned int *coverGrid; 
  const unsigned int *testGrid; 
  const unsigned int *anchorsGrid; 
  const unsigned int *shapeGrid; 
  float v20; 
  int i; 
  int v22; 
  bool GridPos; 
  bool v24; 
  bool v25; 
  bool v26; 
  const vec4_t *v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  unsigned int *v32; 
  unsigned int *v33; 
  unsigned int *v34; 
  unsigned int *v35; 
  vec3_t angles; 
  vec3_t outWorldPos; 
  Bounds box; 
  vec3_t origin; 
  Bounds v40; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 429, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v2 = DVARBOOL_g_coverWall_drawCover;
  if ( !DVARBOOL_g_coverWall_drawCover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawCover") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  v4 = DVARBOOL_g_coverWall_drawGrid;
  v28 = enabled;
  if ( !DVARBOOL_g_coverWall_drawGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawGrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.enabled;
  v6 = DVARBOOL_g_coverWall_drawTestGrid;
  if ( !DVARBOOL_g_coverWall_drawTestGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawTestGrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.enabled;
  v8 = DVARBOOL_g_coverWall_drawAnchors;
  v29 = v7;
  if ( !DVARBOOL_g_coverWall_drawAnchors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawAnchors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.enabled;
  v10 = DVARBOOL_g_coverWall_drawShapeGrid;
  v30 = v9;
  if ( !DVARBOOL_g_coverWall_drawShapeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawShapeGrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v31 = v10->current.enabled;
  if ( enabled || v5 || v7 || v9 || v10->current.enabled )
  {
    v11 = BG_CoverWall_CalcSagAnimWeight(ent->s.time2, level.time);
    sagAmount = *(float *)&v11;
    CoverData = G_CoverWall_GetCoverData(ent);
    *(float *)&v11 = ent->r.currentAngles.v[0];
    v14 = ent->r.currentOrigin.v[1];
    origin.v[0] = ent->r.currentOrigin.v[0];
    origin.v[2] = ent->r.currentOrigin.v[2];
    v15 = ent->r.currentAngles.v[1];
    angles.v[0] = *(float *)&v11;
    *(float *)&v11 = ent->r.currentAngles.v[2];
    coverGrid = CoverData->coverGrid;
    testGrid = CoverData->testGrid;
    v32 = CoverData->coverGrid;
    anchorsGrid = CoverData->anchorsGrid;
    v33 = CoverData->testGrid;
    shapeGrid = CoverData->shapeGrid;
    v34 = CoverData->anchorsGrid;
    angles.v[1] = v15;
    origin.v[1] = v14;
    angles.v[2] = *(float *)&v11;
    v35 = CoverData->shapeGrid;
    v20 = (float)BG_CoverWall_GetGridSize() * 0.5;
    box.halfSize.v[0] = v20 - 1.0;
    box.halfSize.v[1] = v20 - 1.0;
    box.halfSize.v[2] = v20 - 1.0;
    v40.halfSize.v[0] = v20 - 2.0;
    v40.halfSize.v[1] = v20 - 2.0;
    v40.halfSize.v[2] = v20 - 2.0;
    box.midPoint.v[0] = 0.0;
    box.midPoint.v[1] = 0.0;
    box.midPoint.v[2] = 0.0;
    v40.midPoint.v[0] = 0.0;
    v40.midPoint.v[1] = 0.0;
    v40.midPoint.v[2] = 0.0;
    for ( i = -4; i <= 9; ++i )
    {
      v22 = -6;
      do
      {
        BG_CoverWall_GridPosToWorldPos(&origin, &angles, v22, 0, i, sagAmount, &outWorldPos);
        GridPos = BG_CoverWall_GetGridPos(coverGrid, v22, 0, i);
        v24 = BG_CoverWall_GetGridPos(testGrid, v22, 0, i);
        v25 = BG_CoverWall_GetGridPos(anchorsGrid, v22, 0, i);
        v26 = BG_CoverWall_GetGridPos(shapeGrid, v22, 0, i);
        if ( !GridPos )
        {
          if ( !v5 )
            goto LABEL_33;
          v27 = &colorRedTrans;
          goto LABEL_30;
        }
        if ( v28 || v5 )
        {
          v27 = &colorGreen;
LABEL_30:
          G_DebugBox(&outWorldPos, &box, angles.v[1], v27, 0, 0);
        }
LABEL_33:
        if ( v29 && v24 )
          G_DebugBox(&outWorldPos, &box, angles.v[1], &colorOrange, 0, 0);
        if ( v30 && v25 )
          G_DebugBox(&outWorldPos, &v40, angles.v[1], &colorOrange, 0, 0);
        if ( v31 && v26 )
          G_DebugBox(&outWorldPos, &box, angles.v[1], &colorBlue, 0, 0);
        coverGrid = v32;
        ++v22;
        testGrid = v33;
        anchorsGrid = v34;
        shapeGrid = v35;
      }
      while ( v22 <= 6 );
    }
  }
}

/*
==============
G_CoverWall_DebugDrawGridPos
==============
*/
void G_CoverWall_DebugDrawGridPos(const gentity_s *ent, const vec4_t *color, const int drawDuration_fms, const int xPos, const int yPos, const int zPos)
{
  float v10; 
  int time2; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t angles; 
  vec3_t origin; 
  Bounds box; 
  vec3_t outWorldPos; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 503, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v10 = ent->r.currentOrigin.v[1];
  time2 = ent->s.time2;
  origin.v[0] = ent->r.currentOrigin.v[0];
  v12 = ent->r.currentOrigin.v[2];
  origin.v[1] = v10;
  v13 = ent->r.currentAngles.v[0];
  origin.v[2] = v12;
  v14 = ent->r.currentAngles.v[1];
  angles.v[0] = v13;
  v15 = ent->r.currentAngles.v[2];
  angles.v[1] = v14;
  angles.v[2] = v15;
  BG_CoverWall_CalcSagAnimWeight(time2, level.time);
  box.midPoint.v[0] = 0.0;
  box.midPoint.v[1] = 0.0;
  box.midPoint.v[2] = 0.0;
  box.halfSize.v[0] = (float)BG_CoverWall_GetGridSize() * 0.5;
  box.halfSize.v[1] = box.halfSize.v[0];
  box.halfSize.v[2] = box.halfSize.v[0];
  BG_CoverWall_GridPosToWorldPos(&origin, &angles, xPos, yPos, zPos, 0.0, &outWorldPos);
  G_DebugBox(&outWorldPos, &box, angles.v[1], color, 1, drawDuration_fms);
}

/*
==============
G_CoverWall_Destroy
==============
*/
void G_CoverWall_Destroy(gentity_s *ent)
{
  GScr_Notify(ent, scr_const.death, 0);
  GScr_Notify(ent, scr_const.death_or_disconnect, 0);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, ent);
}

/*
==============
G_CoverWall_DoPropogatedDamage
==============
*/
void G_CoverWall_DoPropogatedDamage(const gentity_s *hitEnt, int damage, unsigned int xPos, unsigned int yPos, unsigned int zPos)
{
  const dvar_t *v9; 
  const dvar_t *v10; 
  float value; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  double v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 

  if ( !hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 318, ASSERT_TYPE_ASSERT, "(hitEnt)", (const char *)&queryFormat, "hitEnt") )
    __debugbreak();
  if ( hitEnt->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 319, ASSERT_TYPE_ASSERT, "(hitEnt->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "hitEnt->s.eType == ET_COVERWALL") )
    __debugbreak();
  v9 = DCONST_DVARMPSPBOOL_g_coverWall_progogateBulletDamage;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_progogateBulletDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_progogateBulletDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageUpChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageUpChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageUpChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
    v12 = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageRightChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageRightChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageRightChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.value;
    v14 = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageDownChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageDownChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageDownChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.value;
    v16 = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageLeftChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageLeftChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageLeftChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = v16->current.value;
    v18 = G_flrand(0.0, 1.0);
    if ( *(float *)&v18 <= value )
    {
      v19 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v19, 0, xPos, yPos, zPos + 1);
    }
    if ( *(float *)&v18 <= v13 )
    {
      v20 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v20, 0, xPos + 1, yPos, zPos);
    }
    if ( *(float *)&v18 <= v15 )
    {
      v21 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v21, 0, xPos, yPos, zPos - 1);
    }
    if ( *(float *)&v18 <= v17 )
    {
      v22 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v22, 0, xPos - 1, yPos, zPos);
    }
  }
}

/*
==============
G_CoverWall_Expand
==============
*/
void G_CoverWall_Expand(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  unsigned int *coverGrid; 
  int v4; 
  int v5; 
  unsigned int *testGrid; 
  char v7; 
  int toZ; 
  int v9; 
  char v10; 
  int v11; 
  int v12; 
  bool v13; 
  int v14; 
  bool v15; 
  int outSize; 
  int outMinBound; 
  int fromZ; 
  int outHeight; 
  unsigned int grid[4]; 
  __int64 v21; 
  int v22; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1013, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1016, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  coverGrid = CoverData->coverGrid;
  v4 = -6;
  *(_OWORD *)grid = *(_OWORD *)CoverData->coverGrid;
  v21 = *(_QWORD *)&CoverData->coverGrid[4];
  v5 = CoverData->coverGrid[6];
  testGrid = CoverData->testGrid;
  v22 = v5;
  v7 = 0;
  do
  {
    if ( BG_CoverWall_GetColumnHeight(grid, v4, 0, &outHeight) )
    {
      toZ = outHeight + 1;
      BG_CoverWall_GetColumnSize(grid, v4, 0, &outSize);
      if ( toZ > 9 || toZ > BG_CoverWall_GetZMax() && outSize >= 4 )
        goto LABEL_20;
      if ( !BG_CoverWall_GetGridPos(testGrid, v4, 0, toZ) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v4, 0, toZ);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, v4, 0, outHeight, v4, 0, toZ) )
          G_CoverWall_InitCoverAtGridPos(ent, v4, 0, toZ);
      }
    }
    if ( BG_CoverWall_GetColumnFloor(grid, v4, 0, &fromZ) )
    {
      v9 = fromZ - 1;
      if ( fromZ - 1 >= -4 && !BG_CoverWall_GetGridPos(testGrid, v4, 0, v9) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v4, 0, v9);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, v4, 0, fromZ, v4, 0, v9) )
          G_CoverWall_InitCoverAtGridPos(ent, v4, 0, v9);
      }
    }
LABEL_20:
    ++v4;
  }
  while ( v4 <= 6 );
  v10 = 0;
  v11 = -4;
  do
  {
    if ( BG_CoverWall_GetRowMinMax(grid, 0, v11, &outMinBound, &outSize) )
    {
      v12 = outMinBound - 1;
      if ( v12 >= BG_CoverWall_GetXMin() && !BG_CoverWall_GetGridPos(testGrid, v12, 0, v11) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v12, 0, v11);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, outMinBound, 0, v11, v12, 0, v11) )
        {
          G_CoverWall_InitCoverAtGridPos(ent, v12, 0, v11);
        }
        else if ( BG_CoverWall_GetColumnHeight(coverGrid, outMinBound, 0, &fromZ) && !v7 && v11 >= BG_CoverWall_GetZMin() && fromZ + 1 <= 9 && !BG_CoverWall_GetGridPos(testGrid, outMinBound, 0, fromZ + 1) )
        {
          v13 = G_CoverWall_TraceBetweenGridPositions(ent, outMinBound, 0, fromZ, outMinBound, 0, fromZ + 1);
          BG_CoverWall_SetGridPos(testGrid, 1, outMinBound, 0, fromZ + 1);
          if ( v13 )
          {
            G_CoverWall_InitCoverAtGridPos(ent, outMinBound, 0, fromZ + 1);
            v7 = 1;
          }
        }
      }
      v14 = outSize + 1;
      if ( v14 <= BG_CoverWall_GetXMax() && !BG_CoverWall_GetGridPos(testGrid, v14, 0, v11) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v14, 0, v11);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, outSize, 0, v11, v14, 0, v11) )
        {
          G_CoverWall_InitCoverAtGridPos(ent, v14, 0, v11);
        }
        else if ( BG_CoverWall_GetColumnHeight(coverGrid, outSize, 0, &outHeight) && !v10 && v11 >= BG_CoverWall_GetZMin() && outHeight + 1 <= 9 && !BG_CoverWall_GetGridPos(testGrid, outSize, 0, outHeight + 1) )
        {
          v15 = G_CoverWall_TraceBetweenGridPositions(ent, outSize, 0, outHeight, outSize, 0, outHeight + 1);
          BG_CoverWall_SetGridPos(testGrid, 1, outSize, 0, outHeight + 1);
          if ( v15 )
          {
            G_CoverWall_InitCoverAtGridPos(ent, outSize, 0, outHeight + 1);
            v10 = 1;
          }
        }
      }
    }
    ++v11;
  }
  while ( v11 <= 9 );
  G_CoverWall_SetAnchors(ent);
}

/*
==============
G_CoverWall_Free
==============
*/
void G_CoverWall_Free(gentity_s *ent)
{
  __int64 coverIdx; 

  G_PhysicsCoverWall_RemoveCoverWall(ent);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 188, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->c.item[0].ammoCount == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 189, ASSERT_TYPE_ASSERT, "(ent->c.coverWall.coverIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "ent->c.coverWall.coverIdx != COVERWALL_INVALID_INDEX") )
    __debugbreak();
  if ( ent->c.item[0].ammoCount >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 190, ASSERT_TYPE_ASSERT, "(ent->c.coverWall.coverIdx < 16)", (const char *)&queryFormat, "ent->c.coverWall.coverIdx < COVERWALL_MAX_NUM") )
    __debugbreak();
  coverIdx = ent->c.coverWall.coverIdx;
  ent->c.item[0].ammoCount = -1;
  memset_0(&s_coverWalls[coverIdx], 0, sizeof(CoverWall_t));
}

/*
==============
G_CoverWall_FreeStaticData
==============
*/
void G_CoverWall_FreeStaticData(gentity_s *ent)
{
  __int64 coverIdx; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 188, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->c.item[0].ammoCount == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 189, ASSERT_TYPE_ASSERT, "(ent->c.coverWall.coverIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "ent->c.coverWall.coverIdx != COVERWALL_INVALID_INDEX") )
    __debugbreak();
  if ( ent->c.item[0].ammoCount >= 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 190, ASSERT_TYPE_ASSERT, "(ent->c.coverWall.coverIdx < 16)", (const char *)&queryFormat, "ent->c.coverWall.coverIdx < COVERWALL_MAX_NUM") )
    __debugbreak();
  coverIdx = ent->c.coverWall.coverIdx;
  ent->c.item[0].ammoCount = -1;
  memset_0(&s_coverWalls[coverIdx], 0, sizeof(CoverWall_t));
}

/*
==============
G_CoverWall_GetCoverData
==============
*/
CoverWall_t *G_CoverWall_GetCoverData(const gentity_s *ent)
{
  __int64 coverIdx; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 127, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  coverIdx = ent->c.coverWall.coverIdx;
  if ( (unsigned int)coverIdx >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 120, ASSERT_TYPE_ASSERT, "(idx < 16)", (const char *)&queryFormat, "idx < COVERWALL_MAX_NUM") )
    __debugbreak();
  return &s_coverWalls[coverIdx];
}

/*
==============
G_CoverWall_GetCoverDataFromIdx
==============
*/
CoverWall_t *G_CoverWall_GetCoverDataFromIdx(const unsigned int idx)
{
  __int64 v1; 

  v1 = idx;
  if ( idx >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 120, ASSERT_TYPE_ASSERT, "(idx < 16)", (const char *)&queryFormat, "idx < COVERWALL_MAX_NUM") )
    __debugbreak();
  return &s_coverWalls[v1];
}

/*
==============
G_CoverWall_GetCoverGrid
==============
*/
__int64 G_CoverWall_GetCoverGrid(const gentity_s *ent)
{
  CoverWall_t *CoverData; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1760, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( CoverData )
    return (__int64)CoverData->coverGrid;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1762, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  return 64i64;
}

/*
==============
G_CoverWall_GetHealthForGridPos
==============
*/
__int64 G_CoverWall_GetHealthForGridPos(const gentity_s *ent, const unsigned int xPos, const unsigned int yPos, const unsigned int zPos)
{
  CoverWall_t *CoverData; 
  unsigned int v9; 
  __int64 v10; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 280, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 283, ASSERT_TYPE_ASSERT, "(coverData)", (const char *)&queryFormat, "coverData") )
    __debugbreak();
  v9 = BG_CoverWall_GridPosToDataArrayIndex(xPos, yPos, zPos);
  v10 = v9;
  if ( v9 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 286, ASSERT_TYPE_ASSERT, "(gridArrayIdx < 32 * 7)", (const char *)&queryFormat, "gridArrayIdx < 32 * COVERWALL_GRID_ARRAY_SIZE") )
    __debugbreak();
  return CoverData->healthGrid[v10];
}

/*
==============
G_CoverWall_InitCoverAtGridPos
==============
*/
void G_CoverWall_InitCoverAtGridPos(const gentity_s *ent, const int xPos, const int yPos, const int zPos)
{
  CoverWall_t *CoverData; 
  CoverWall_t *v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 866, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 869, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  v9 = G_CoverWall_GetCoverData(ent);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 855, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  if ( v9->numCoverBlocksInitialized < 127 )
  {
    ++CoverData->numCoverBlocksInitialized;
    BG_CoverWall_SetGridPos(CoverData->coverGrid, 1, xPos, yPos, zPos);
    G_CoverWall_SetHealthForGridPos(ent, CoverData->maxHealthPerCoverBlock, xPos, yPos, zPos);
    BG_CoverWall_SetGridPos(CoverData->shapeGrid, 1, xPos, yPos, zPos);
  }
}

/*
==============
G_CoverWall_InitStaticData
==============
*/
void G_CoverWall_InitStaticData(gentity_s *ent, int maxHealthPerCoverBlock)
{
  unsigned int v4; 
  CoverWall_t *i; 
  CoverWall_t *CoverDataFromIdx; 
  bool v7; 
  const dvar_t *v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 154, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v4 = 0;
  for ( i = s_coverWalls; i->ent; ++i )
  {
    if ( ++v4 >= 0x10 )
      return;
  }
  ent->c.item[0].ammoCount = v4;
  ent->c.item[0].clipAmmoCount[0] = -1;
  CoverDataFromIdx = G_CoverWall_GetCoverDataFromIdx(v4);
  v7 = CoverDataFromIdx->flags == 0;
  CoverDataFromIdx->ent = ent;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 166, ASSERT_TYPE_ASSERT, "(coverWall->flags == 0)", (const char *)&queryFormat, "coverWall->flags == 0") )
    __debugbreak();
  if ( !CoverDataFromIdx->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 167, ASSERT_TYPE_ASSERT, "(coverWall->ent != 0)", (const char *)&queryFormat, "coverWall->ent != NULL") )
    __debugbreak();
  if ( CoverDataFromIdx->healthGrid[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 168, ASSERT_TYPE_ASSERT, "(coverWall->healthGrid[0] == 0)", (const char *)&queryFormat, "coverWall->healthGrid[0] == 0") )
    __debugbreak();
  if ( CoverDataFromIdx->testGrid[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 169, ASSERT_TYPE_ASSERT, "(coverWall->testGrid[0] == 0)", (const char *)&queryFormat, "coverWall->testGrid[0] == 0") )
    __debugbreak();
  if ( CoverDataFromIdx->coverGrid[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 170, ASSERT_TYPE_ASSERT, "(coverWall->coverGrid[0] == 0)", (const char *)&queryFormat, "coverWall->coverGrid[0] == 0") )
    __debugbreak();
  if ( CoverDataFromIdx->shapeGrid[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 171, ASSERT_TYPE_ASSERT, "(coverWall->shapeGrid[0] == 0)", (const char *)&queryFormat, "coverWall->shapeGrid[0] == 0") )
    __debugbreak();
  if ( CoverDataFromIdx->maxHealthPerCoverBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 172, ASSERT_TYPE_ASSERT, "(coverWall->maxHealthPerCoverBlock == 0)", (const char *)&queryFormat, "coverWall->maxHealthPerCoverBlock == 0") )
    __debugbreak();
  if ( CoverDataFromIdx->numCoverBlocksInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 173, ASSERT_TYPE_ASSERT, "(coverWall->numCoverBlocksInitialized == 0)", (const char *)&queryFormat, "coverWall->numCoverBlocksInitialized == 0") )
    __debugbreak();
  if ( CoverDataFromIdx->damageState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 174, ASSERT_TYPE_ASSERT, "(coverWall->damageState == 0)", (const char *)&queryFormat, "coverWall->damageState == 0") )
    __debugbreak();
  if ( (unsigned int)(maxHealthPerCoverBlock - 1) > 0xFE )
  {
    if ( !maxHealthPerCoverBlock )
    {
LABEL_40:
      v8 = DVARINT_g_coverWall_coverHealth;
      if ( !DVARINT_g_coverWall_coverHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_coverHealth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      maxHealthPerCoverBlock = v8->current.integer;
      goto LABEL_44;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 176, ASSERT_TYPE_ASSERT, "(( maxHealthPerCoverBlock >= 1 && maxHealthPerCoverBlock <= 255 ) || maxHealthPerCoverBlock == 0)", (const char *)&queryFormat, "( maxHealthPerCoverBlock >= COVERBLOCK_MIN_HEALTH && maxHealthPerCoverBlock <= COVERBLOCK_MAX_HEALTH ) || maxHealthPerCoverBlock == USE_DEFAULT_HEALTH_PER_BLOCK") )
      __debugbreak();
  }
  if ( !maxHealthPerCoverBlock )
    goto LABEL_40;
LABEL_44:
  CoverDataFromIdx->maxHealthPerCoverBlock = maxHealthPerCoverBlock;
}

/*
==============
G_CoverWall_InitSystem
==============
*/
void G_CoverWall_InitSystem(void)
{
  memset_0(s_coverWalls, 0, sizeof(s_coverWalls));
}

/*
==============
G_CoverWall_Notify
==============
*/
void G_CoverWall_Notify(gentity_s *ent, coverWallNotification notifyType)
{
  __int32 v2; 
  __int32 v3; 
  scr_string_t coverwall_contract_finish; 

  if ( notifyType )
  {
    v2 = notifyType - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 != 1 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 78, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Coverwall Unknown notification type") )
            __debugbreak();
          return;
        }
        coverwall_contract_finish = scr_const.coverwall_contract_finish;
      }
      else
      {
        coverwall_contract_finish = scr_const.coverwall_contract_start;
      }
    }
    else
    {
      coverwall_contract_finish = scr_const.coverwall_expand_finish;
    }
  }
  else
  {
    coverwall_contract_finish = scr_const.coverwall_expand_start;
  }
  if ( coverwall_contract_finish )
    GScr_Notify(ent, coverwall_contract_finish, 0);
}

/*
==============
G_CoverWall_NotifyActor
==============
*/
void G_CoverWall_NotifyActor(gentity_s *wall, gentity_s *actor)
{
  scr_string_t coverwall_expand_hit_actor; 

  if ( !wall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 91, ASSERT_TYPE_ASSERT, "(wall)", (const char *)&queryFormat, "wall") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 92, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  coverwall_expand_hit_actor = scr_const.coverwall_expand_hit_actor;
  GScr_AddEntity(actor);
  GScr_Notify(wall, coverwall_expand_hit_actor, 1u);
}

/*
==============
G_CoverWall_ReadSaveGame
==============
*/
void G_CoverWall_ReadSaveGame(SaveGame *save)
{
  int v2; 
  bool v3; 
  int buffer; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 233, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  v2 = 0;
  v3 = 1;
  do
  {
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 120, ASSERT_TYPE_ASSERT, "(idx < 16)", (const char *)&queryFormat, "idx < COVERWALL_MAX_NUM") )
      __debugbreak();
    buffer = 0;
    SaveMemory_LoadRead(&buffer, 4, save);
    if ( buffer )
      G_SaveField_ReadStruct(COVERWALL_SAVE_FIELDS, (unsigned __int8 *)&s_coverWalls[v2], 376, save);
    v3 = (unsigned int)++v2 < 0x10;
  }
  while ( v2 < 16 );
}

/*
==============
G_CoverWall_RemoveDisconnectedCoverBlocks
==============
*/
void G_CoverWall_RemoveDisconnectedCoverBlocks(const gentity_s *ent)
{
  CoverWall_t *CoverData; 
  unsigned int *coverGrid; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int grid[4]; 
  double v10; 
  unsigned int v11; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 902, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 905, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  *(_OWORD *)grid = *(_OWORD *)CoverData->anchorsGrid;
  v10 = *(double *)&CoverData->anchorsGrid[4];
  coverGrid = CoverData->coverGrid;
  v11 = CoverData->anchorsGrid[6];
  v4 = -4;
  do
  {
    v5 = 0;
    v6 = -4;
    do
    {
      v7 = -6;
      do
      {
        if ( BG_CoverWall_GetGridPos(coverGrid, v7, 0, v6) && !BG_CoverWall_GetGridPos(grid, v7, 0, v6) && BG_CoverWall_IsAnyNeighborSet(grid, v7, 0, v6) )
        {
          BG_CoverWall_SetGridPos(grid, 1, v7, 0, v6);
          ++v5;
        }
        ++v7;
      }
      while ( v7 <= 6 );
      ++v6;
    }
    while ( v6 <= 9 );
  }
  while ( v5 );
  do
  {
    v8 = -6;
    do
    {
      if ( BG_CoverWall_GetGridPos(grid, v8, 0, v4) && !BG_CoverWall_GetGridPos(coverGrid, v8, 0, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 939, ASSERT_TYPE_ASSERT, "(BG_CoverWall_GetGridPos( coverGrid, x, y, z ))", (const char *)&queryFormat, "BG_CoverWall_GetGridPos( coverGrid, x, y, z )") )
        __debugbreak();
      ++v8;
    }
    while ( v8 <= 6 );
    ++v4;
  }
  while ( v4 <= 9 );
  *(_OWORD *)coverGrid = *(_OWORD *)grid;
  *((double *)coverGrid + 2) = v10;
  coverGrid[6] = v11;
}

/*
==============
G_CoverWall_RunThreeBlockRule
==============
*/
void G_CoverWall_RunThreeBlockRule(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  const dvar_t *v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1426, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1429, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  v3 = DCONST_DVARMPSPBOOL_g_coverWall_useThreeBlockRule;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useThreeBlockRule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useThreeBlockRule") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v4 = -5;
    do
    {
      v5 = -6;
      do
      {
        if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1396, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
          __debugbreak();
        if ( (unsigned int)(v5 + 5) <= 0xA )
        {
          v6 = v4 + 1;
          if ( v4 + 1 > -4 && BG_CoverWall_GetGridPos(CoverData->coverGrid, v5, 0, v6) )
          {
            v7 = v5 - 1;
            if ( BG_CoverWall_GetGridPos(CoverData->shapeGrid, v5 - 1, 0, v4) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v7, 0, v4) && BG_CoverWall_GetGridPos(CoverData->shapeGrid, v5, 0, v4) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v5, 0, v4) && BG_CoverWall_GetGridPos(CoverData->shapeGrid, v7 + 2, 0, v4) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v7 + 2, 0, v4) )
              G_CoverWall_ClearCoverAtGridPos(ent, v5, 0, v6);
          }
        }
        ++v5;
      }
      while ( v5 <= 6 );
      ++v4;
    }
    while ( v4 + 1 <= 9 );
  }
}

/*
==============
G_CoverWall_RunTwoBlockRule
==============
*/
void G_CoverWall_RunTwoBlockRule(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  const dvar_t *v3; 
  int v4; 
  int v5; 
  int outHeight; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1473, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1476, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  v3 = DCONST_DVARMPSPBOOL_g_coverWall_useTwoBlockRule;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useTwoBlockRule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useTwoBlockRule") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v4 = -6;
    do
    {
      if ( BG_CoverWall_GetColumnHeight(CoverData->coverGrid, v4, 0, &outHeight) )
      {
        v5 = outHeight;
        if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1450, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
          __debugbreak();
        if ( v5 >= -2 && BG_CoverWall_GetGridPos(CoverData->coverGrid, v4, 0, v5) && BG_CoverWall_GetGridPos(CoverData->shapeGrid, v4, 0, v5 - 1) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v4, 0, v5 - 1) && BG_CoverWall_GetGridPos(CoverData->shapeGrid, v4, 0, v5 - 2) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v4, 0, v5 - 2) )
          G_CoverWall_ClearCoverAtGridPos(ent, v4, 0, outHeight);
      }
      ++v4;
    }
    while ( v4 <= 6 );
  }
}

/*
==============
G_CoverWall_SetAnchors
==============
*/
void G_CoverWall_SetAnchors(const gentity_s *ent)
{
  CoverWall_t *CoverData; 
  int v3; 
  int v4; 
  int v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 950, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 952, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  *(_QWORD *)CoverData->anchorsGrid = 0i64;
  v3 = 0;
  *(_QWORD *)&CoverData->anchorsGrid[2] = 0i64;
  *(_QWORD *)&CoverData->anchorsGrid[4] = 0i64;
  CoverData->anchorsGrid[6] = 0;
  do
  {
    v4 = -4;
    do
    {
      v5 = -6;
      do
      {
        if ( BG_CoverWall_GetGridPos(CoverData->coverGrid, v5, v3, v4) && (v5 > -6 && BG_CoverWall_GetGridPos(CoverData->testGrid, v5 - 1, v3, v4) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v5 - 1, v3, v4) || v5 < 6 && BG_CoverWall_GetGridPos(CoverData->testGrid, v5 + 1, v3, v4) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v5 + 1, v3, v4) || v3 < 0 && BG_CoverWall_GetGridPos(CoverData->testGrid, v5, v3 + 1, v4) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v5, v3 + 1, v4) || v4 > -4 && BG_CoverWall_GetGridPos(CoverData->testGrid, v5, v3, v4 - 1) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v5, v3, v4 - 1) || v4 < 9 && BG_CoverWall_GetGridPos(CoverData->testGrid, v5, v3, v4 + 1) && !BG_CoverWall_GetGridPos(CoverData->coverGrid, v5, v3, v4 + 1)) )
          BG_CoverWall_SetGridPos(CoverData->anchorsGrid, 1, v5, v3, v4);
        ++v5;
      }
      while ( v5 <= 6 );
      ++v4;
    }
    while ( v4 <= 9 );
    ++v3;
  }
  while ( v3 <= 0 );
}

/*
==============
G_CoverWall_SetHealthForGridPos
==============
*/
void G_CoverWall_SetHealthForGridPos(const gentity_s *ent, const int newHealth, const unsigned int xPos, const unsigned int yPos, const unsigned int zPos)
{
  CoverWall_t *CoverData; 
  unsigned int v10; 
  __int64 v11; 
  const dvar_t *v12; 
  char *fmt; 
  __int64 v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 256, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 259, ASSERT_TYPE_ASSERT, "(coverData)", (const char *)&queryFormat, "coverData") )
    __debugbreak();
  v10 = BG_CoverWall_GridPosToDataArrayIndex(xPos, yPos, zPos);
  v11 = v10;
  if ( v10 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 262, ASSERT_TYPE_ASSERT, "(gridArrayIdx < 32 * 7)", (const char *)&queryFormat, "gridArrayIdx < 32 * COVERWALL_GRID_ARRAY_SIZE") )
    __debugbreak();
  if ( (newHealth < 0 || (unsigned int)newHealth > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)newHealth, "signed", newHealth) )
    __debugbreak();
  if ( (unsigned __int8)newHealth != newHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 264, ASSERT_TYPE_ASSERT, "(truncate_cast<byte>( newHealth ) == newHealth)", (const char *)&queryFormat, "truncate_cast<byte>( newHealth ) == newHealth") )
    __debugbreak();
  CoverData->healthGrid[v11] = truncate_cast<unsigned char,int>(newHealth);
  v12 = DVARBOOL_g_coverWall_debugPrintHealth;
  if ( !DVARBOOL_g_coverWall_debugPrintHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_debugPrintHealth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    LODWORD(v14) = newHealth;
    LODWORD(fmt) = zPos;
    Com_Printf(16, "Setting Health for grid pos [ %d\t %d \t %d ] to %d\n", xPos, yPos, fmt, v14);
  }
}

/*
==============
G_CoverWall_SetModel
==============
*/
void G_CoverWall_SetModel(gentity_s *ent, const char *const name)
{
  unsigned __int16 model; 
  XModel *v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1231, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Utils_SetModel(ent, name);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, ent, 1);
  model = ent->model;
  if ( !model )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1E590, 445i64);
  v5 = G_Utils_GetModel(model);
  if ( v5->numBones < 0x7Fu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 619, ASSERT_TYPE_ASSERT, "(numBones >= ( 127 - 1 ) + 1)", (const char *)&queryFormat, "numBones >= COVERWALL_MODEL_NUM_CONTROLLERS") )
    __debugbreak();
  v6 = 1;
  v7 = 1i64;
  do
  {
    v8 = 7i64;
    v9 = "j_foam_";
    v10 = SL_ConvertToString(v5->boneNames[v7]);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v11 = v10 - "j_foam_";
    do
    {
      v12 = v9[v11];
      v13 = v8;
      v14 = *v9++;
      --v8;
      if ( !v13 )
        break;
      if ( v12 != v14 )
      {
        SL_ConvertToString(v5->boneNames[v7]);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1E670, 446i64);
        break;
      }
    }
    while ( v12 );
    ++v6;
    ++v7;
  }
  while ( v6 <= 127 );
}

/*
==============
G_CoverWall_ShutdownSystem
==============
*/
void G_CoverWall_ShutdownSystem(void)
{
  CoverWall_t *v0; 
  __int64 v1; 
  gentity_s *ent; 

  v0 = s_coverWalls;
  v1 = 16i64;
  do
  {
    ent = v0->ent;
    if ( v0->ent )
    {
      GScr_Notify(v0->ent, scr_const.death, 0);
      GScr_Notify(ent, scr_const.death_or_disconnect, 0);
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, ent);
    }
    ++v0;
    --v1;
  }
  while ( v1 );
}

/*
==============
G_CoverWall_Spawn
==============
*/
gentity_s *G_CoverWall_Spawn(const vec3_t *origin, const vec3_t *angles, int maxHealthPerCoverBlock)
{
  int v6; 
  CoverWall_t *i; 
  gentity_s *v9; 
  int v10; 
  CoverWall_t *CoverData; 
  _DWORD *p_flags; 
  int v13; 
  vec3_t origina; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_CoverWall_Spawn");
  v6 = 0;
  for ( i = s_coverWalls; i->ent; ++i )
  {
    if ( (unsigned int)++v6 >= 0x10 )
    {
      Com_PrintWarning(16, "Warning: Attempt to exceed max of %d coverwalls, spawn failed to generate a coverwall ent.\n", 16i64);
      return 0i64;
    }
  }
  v9 = G_Utils_SpawnEntity();
  Scr_SetString(&v9->classname, scr_const.script_coverwall);
  Scr_SetString(&v9->script_classname, scr_const.script_coverwall);
  v10 = (int)origin->v[1];
  origina.v[0] = (float)(int)origin->v[0];
  origina.v[2] = (float)(int)origin->v[2];
  origina.v[1] = (float)v10;
  G_SetOriginAndAngle(v9, &origina, angles, 1, 1);
  v9->handler = 30;
  v9->s.eType = ET_COVERWALL;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v9->s.lerp.eFlags, ACTIVE, 0x10u);
  v9->maxHealth = 0x7FFFFFFF;
  v9->health = 0x7FFFFFFF;
  G_CoverWall_InitStaticData(v9, maxHealthPerCoverBlock);
  G_CoverWall_UpdateBounds(v9);
  G_CoverWall_SetModel(v9, "barrier_cover_foam_128");
  CoverData = G_CoverWall_GetCoverData(v9);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1309, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  G_CoverWall_InitCoverAtGridPos(v9, 0, 0, 0);
  BG_CoverWall_SetGridPos(CoverData->testGrid, 1, 0, 0, 0);
  BG_CoverWall_SetGridPos(CoverData->anchorsGrid, 1, 0, 0, 0);
  p_flags = &CoverData->flags;
  if ( CoverData == (CoverWall_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.h", 61, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
    __debugbreak();
  v13 = *p_flags | 1;
  *p_flags = v13;
  if ( (v13 & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1317, ASSERT_TYPE_ASSERT, "(G_CoverWall_TestFlag( coverWall->flags, FCF_MELTING ) == false)", (const char *)&queryFormat, "G_CoverWall_TestFlag( coverWall->flags, FCF_MELTING ) == false") )
    __debugbreak();
  v9->s.time2 = level.time;
  CoverData->expansionTime = level.time + BG_CoverWall_GetExpansionRateMS();
  if ( scr_const.coverwall_expand_start )
    GScr_Notify(v9, scr_const.coverwall_expand_start, 0);
  G_PhysicsCoverWall_AddCoverWall(v9);
  G_CoverWall_UpdateEnt(v9);
  G_CoverWall_ValidateData(v9);
  SV_LinkEntity(v9);
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
G_CoverWall_TraceBetweenGridPositions
==============
*/
_BOOL8 G_CoverWall_TraceBetweenGridPositions(gentity_s *ent, const int fromX, const int fromY, const int fromZ, const int toX, const int toY, const int toZ)
{
  float v11; 
  int number; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  bool v17; 
  gentity_s *v18; 
  scr_string_t coverwall_expand_hit_actor; 
  bool v20; 
  char v21; 
  const dvar_t *v22; 
  const vec4_t *v23; 
  trace_t results; 
  vec3_t end; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t origin; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 796, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 797, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "ent->s.eType == ET_COVERWALL") )
    __debugbreak();
  v11 = ent->r.currentOrigin.v[1];
  number = ent->s.number;
  origin.v[0] = ent->r.currentOrigin.v[0];
  v13 = ent->r.currentOrigin.v[2];
  origin.v[1] = v11;
  v14 = ent->r.currentAngles.v[0];
  origin.v[2] = v13;
  v15 = ent->r.currentAngles.v[1];
  angles.v[0] = v14;
  v16 = ent->r.currentAngles.v[2];
  angles.v[1] = v15;
  angles.v[2] = v16;
  BG_CoverWall_GridPosToWorldPos(&origin, &angles, fromX, fromY, fromZ, 1.0, &start);
  BG_CoverWall_GridPosToWorldPos(&origin, &angles, toX, toY, toZ, 1.0, &end);
  end.v[0] = end.v[0] + (float)((float)(end.v[0] - start.v[0]) * 0.5);
  end.v[1] = end.v[1] + (float)((float)(end.v[1] - start.v[1]) * 0.5);
  end.v[2] = end.v[2] + (float)((float)(end.v[2] - start.v[2]) * 0.5);
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds_origin, number, 0, 42025217, 0, NULL, All);
  v17 = results.fraction >= 0.66667002;
  if ( results.hitType == TRACE_HITTYPE_ENTITY )
  {
    v18 = &g_entities[results.hitId];
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1928, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((v18->s.eType - 19) & 0xFFFD) == 0 )
    {
      coverwall_expand_hit_actor = scr_const.coverwall_expand_hit_actor;
      v17 = 0;
      GScr_AddEntity(v18);
      GScr_Notify(ent, coverwall_expand_hit_actor, 1u);
    }
    v20 = !BG_CoverWall_IsCoverWall(&v18->s);
    v21 = v17;
    if ( !v20 )
      v21 = 1;
    v17 = v21;
    if ( ((v18->s.eType - 1) & 0xFFEF) == 0 )
      v17 = 0;
  }
  ++s_tracesThisFrame;
  v22 = DVARBOOL_g_coverWall_drawTraces;
  if ( !DVARBOOL_g_coverWall_drawTraces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawTraces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    v23 = &colorRed;
    if ( v17 )
      v23 = &colorGreen;
    G_DebugLineWithDuration(&start, &end, v23, 0, 60);
  }
  return v17;
}

/*
==============
G_CoverWall_Update
==============
*/
void G_CoverWall_Update(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  CoverWall_t *v3; 
  int time; 
  int v5; 
  unsigned int *p_flags; 
  CoverWall_t *v7; 
  CoverWall_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int v11; 
  CoverWall_t *v12; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1709, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  s_tracesThisFrame = 0;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1678, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1680, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  if ( CoverData->markForDelete )
  {
    G_CoverWall_Destroy(ent);
  }
  else
  {
    G_CoverWall_UpdateContraction(ent);
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1331, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v3 = G_CoverWall_GetCoverData(ent);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1334, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    time = level.time;
    if ( level.time >= v3->expansionTime && (v3->flags & 1) != 0 )
    {
      G_CoverWall_Expand(ent);
      v3->expansionTime += BG_CoverWall_GetExpansionRateMS();
      time = level.time;
    }
    v5 = time - ent->s.time2;
    if ( v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1344, ASSERT_TYPE_ASSERT, "(elapsedTime >= 0)", (const char *)&queryFormat, "elapsedTime >= 0") )
      __debugbreak();
    if ( v5 >= BG_CoverWall_GetExpansionTimeMS() )
    {
      v3->expansionTime = 0x7FFFFFFF;
      p_flags = &v3->flags;
      if ( (*(_BYTE *)p_flags & 1) != 0 )
      {
        if ( !p_flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.h", 68, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
          __debugbreak();
        *p_flags &= ~1u;
        if ( scr_const.coverwall_expand_finish )
          GScr_Notify(ent, scr_const.coverwall_expand_finish, 0);
      }
    }
    v7 = G_CoverWall_GetCoverData(ent);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1563, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    if ( v7->removeDisconnectedCoverBlocks )
    {
      G_CoverWall_RunTwoBlockRule(ent);
      G_CoverWall_RunThreeBlockRule(ent);
      G_CoverWall_RemoveDisconnectedCoverBlocks(ent);
      v7->removeDisconnectedCoverBlocks = 0;
    }
    G_CoverWall_UpdateBounds(ent);
    v8 = G_CoverWall_GetCoverData(ent);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1544, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    v9 = DCONST_DVARMPSPBOOL_g_coverWall_useDamageStates;
    if ( !DCONST_DVARMPSPBOOL_g_coverWall_useDamageStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useDamageStates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && (v8->flags & 3) == 0 )
      G_CoverWall_CheckModelSwap(ent);
    G_PhysicsCoverWall_UpdateCoverWall(ent);
    G_CoverWall_DebugDrawCoverWall(ent);
    if ( s_tracesThisFrame )
    {
      v10 = DVARBOOL_g_coverWall_debugPrint;
      if ( !DVARBOOL_g_coverWall_debugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_debugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
        Com_Printf(16, "Cover Wall Performed %d Traces This frame\n", (unsigned int)s_tracesThisFrame);
    }
    G_CoverWall_UpdateEnt(ent);
    v11 = level.time - ent->s.time2;
    if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1745, ASSERT_TYPE_ASSERT, "(lifeTime >= 0)", (const char *)&queryFormat, "lifeTime >= 0") )
      __debugbreak();
    if ( !BG_CoverWall_NumFilledGridPositions((const unsigned int *)&ent->s.lerp.u) && v11 > BG_CoverWall_GetExpansionRateMS() )
    {
      v12 = G_CoverWall_GetCoverData(ent);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1671, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
        __debugbreak();
      v12->markForDelete = 1;
    }
  }
}

/*
==============
G_CoverWall_UpdateBounds
==============
*/
char G_CoverWall_UpdateBounds(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  int GridSize; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  double CollisionRadius; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  bool v16; 
  bool v17; 
  int xMax; 
  int xMin; 
  int yMax; 
  int yMin; 
  int zMax; 
  int zMin[19]; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1254, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1257, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  BG_CoverWall_GetGridExtents(CoverData->coverGrid, &xMin, &xMax, &yMin, &yMax, zMin, &zMax);
  GridSize = BG_CoverWall_GetGridSize();
  v4 = GridSize * (xMax - xMin + 1);
  v5 = GridSize * (yMax - yMin + 1);
  v6 = GridSize * (zMax - zMin[0] + 1);
  v7 = v4 / 2 + xMin * GridSize - GridSize / 2;
  v8 = v5 / 2 + yMin * GridSize - GridSize / 2;
  v9 = v6 / 2 + zMin[0] * GridSize - GridSize / 2;
  CollisionRadius = BG_CoverWall_GetCollisionRadius();
  v11 = (float)((float)v4 * 0.5) + *(float *)&CollisionRadius;
  v12 = (float)((float)v5 * 0.5) + *(float *)&CollisionRadius;
  v13 = (float)((float)v6 * 0.5) + *(float *)&CollisionRadius;
  v14 = (float)v8;
  v15 = (float)v9;
  v16 = (float)v7 != ent->r.box.midPoint.v[0] || v14 != ent->r.box.midPoint.v[1] || v15 != ent->r.box.midPoint.v[2];
  v17 = v11 == ent->r.box.halfSize.v[0] && v12 == ent->r.box.halfSize.v[1] && v13 == ent->r.box.halfSize.v[2];
  if ( !v16 && v17 )
    return 0;
  ent->r.box.midPoint.v[0] = (float)v7;
  ent->r.box.midPoint.v[1] = v14;
  ent->r.box.midPoint.v[2] = v15;
  ent->r.box.halfSize.v[0] = v11;
  ent->r.box.halfSize.v[1] = v12;
  ent->r.box.halfSize.v[2] = v13;
  return 1;
}

/*
==============
G_CoverWall_UpdateContraction
==============
*/
void G_CoverWall_UpdateContraction(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  CoverWall_t *v3; 
  unsigned int *coverGrid; 
  int v5; 
  int v6; 
  int outHeight; 
  int zPos; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1381, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1384, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  if ( level.time >= CoverData->contractionTime && (CoverData->flags & 2) != 0 )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1188, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v3 = G_CoverWall_GetCoverData(ent);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1191, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    coverGrid = v3->coverGrid;
    v5 = -6;
    do
    {
      if ( BG_CoverWall_GetColumnHeight(coverGrid, v5, 0, &outHeight) )
      {
        v6 = outHeight;
        if ( outHeight >= 0 && BG_CoverWall_GetGridPos(coverGrid, v5, 0, outHeight) )
          G_CoverWall_ClearCoverAtGridPos(ent, v5, 0, v6);
      }
      if ( BG_CoverWall_GetColumnFloor(coverGrid, v5, 0, &zPos) && zPos < 0 )
        G_CoverWall_ClearCoverAtGridPos(ent, v5, 0, zPos);
      ++v5;
    }
    while ( v5 <= 6 );
    CoverData->contractionTime += BG_CoverWall_GetCollapseRateMS();
  }
}

/*
==============
G_CoverWall_UpdateEnt
==============
*/
void G_CoverWall_UpdateEnt(gentity_s *ent)
{
  CoverWall_t *CoverData; 
  int flags; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1578, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1581, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  if ( memcmp_0(&ent->s.lerp.u, CoverData->coverGrid, 0x1Cui64) )
  {
    *(_OWORD *)ent->s.lerp.u.anonymous.data = *(_OWORD *)CoverData->coverGrid;
    *((double *)&ent->s.lerp.u.ragdollConstraint + 2) = *(double *)&CoverData->coverGrid[4];
    ent->s.lerp.u.anonymous.data[6] = CoverData->coverGrid[6];
  }
  flags = CoverData->flags;
  if ( ent->s.lerp.u.anonymous.data[7] != flags )
    ent->s.lerp.u.anonymous.data[7] = flags;
}

/*
==============
G_CoverWall_ValidateData
==============
*/
void G_CoverWall_ValidateData(const gentity_s *ent)
{
  const dvar_t *v2; 
  int v3; 
  int v4; 
  CoverWall_t *CoverData; 
  int v6; 
  CoverWall_t *v7; 
  int v8; 
  char *fmt; 
  char *fmta; 
  __int64 v11; 
  int outHeight; 
  int outMinBound; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 595, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v2 = DVARBOOL_g_coverWall_debugPrint;
  if ( !DVARBOOL_g_coverWall_debugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_debugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 524, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v3 = -4;
    do
    {
      v4 = -6;
      do
      {
        LODWORD(v11) = BG_CoverWall_GridPosToDataArrayIndex(v4, 0, v3);
        LODWORD(fmt) = v3;
        Com_Printf(16, "DataArrayIndex for block at location ( %d, %d, %d ) is %d\n", (unsigned int)v4++, 0i64, fmt, v11);
      }
      while ( v4 <= 6 );
      ++v3;
    }
    while ( v3 <= 9 );
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 542, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    CoverData = G_CoverWall_GetCoverData(ent);
    if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 545, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    v6 = -6;
    do
    {
      if ( BG_CoverWall_GetColumnHeight(CoverData->coverGrid, v6, 0, &outHeight) )
      {
        LODWORD(fmt) = outHeight;
        Com_Printf(16, "Column at x:%d, y:%d has height %d.\n", (unsigned int)v6, 0i64, fmt);
      }
      ++v6;
    }
    while ( v6 <= 6 );
    outMinBound = 0;
    outHeight = 0;
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 566, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v7 = G_CoverWall_GetCoverData(ent);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 569, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    v8 = -4;
    do
    {
      if ( BG_CoverWall_GetRowMinMax(v7->coverGrid, 0, v8, &outMinBound, &outHeight) )
      {
        LODWORD(v11) = outHeight;
        LODWORD(fmta) = outMinBound;
        Com_Printf(16, "Row at y:%d, z:%d has xMin %d and xMax %d.\n", 0i64, (unsigned int)v8, fmta, v11);
      }
      ++v8;
    }
    while ( v8 <= 9 );
    LODWORD(fmta) = 10;
    Com_Printf(16, "Cover Wall Dims are (width)x:%d, (depth)y:%d, (height)z:%d\n", 13i64, 1i64, fmta);
    Com_Printf(16, "X_Range (width ) is [%d, %d]\n", 4294967290i64, 6i64);
    Com_Printf(16, "Y_Range (depth ) is [%d, %d]\n", 0i64, 0i64);
    Com_Printf(16, "Z_Range (height) is [%d, %d]\n", 4294967292i64, 9i64);
  }
}

/*
==============
G_CoverWall_WriteSaveGame
==============
*/
void G_CoverWall_WriteSaveGame(MemoryFile *memFile)
{
  unsigned int v2; 
  const unsigned __int8 *v3; 
  const unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  __int64 v6; 
  __m256i v7; 
  __int128 v8; 
  __int128 v9; 
  __int64 v10; 
  BOOL p[4]; 
  unsigned __int8 dest[384]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 208, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = 0;
  v3 = (const unsigned __int8 *)s_coverWalls;
  do
  {
    if ( v2 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 120, ASSERT_TYPE_ASSERT, "(idx < 16)", (const char *)&queryFormat, "idx < COVERWALL_MAX_NUM") )
      __debugbreak();
    v4 = v3;
    v5 = dest;
    v6 = 2i64;
    do
    {
      v5 += 128;
      v7 = *(__m256i *)v4;
      v8 = *((_OWORD *)v4 + 7);
      v4 += 128;
      *((__m256i *)v5 - 4) = v7;
      *((__m256i *)v5 - 3) = *((__m256i *)v4 - 3);
      *((__m256i *)v5 - 2) = *((__m256i *)v4 - 2);
      *((_OWORD *)v5 - 2) = *((_OWORD *)v4 - 2);
      *((_OWORD *)v5 - 1) = v8;
      --v6;
    }
    while ( v6 );
    *(__m256i *)v5 = *(__m256i *)v4;
    *((__m256i *)v5 + 1) = *((__m256i *)v4 + 1);
    *((__m256i *)v5 + 2) = *((__m256i *)v4 + 2);
    v9 = *((_OWORD *)v4 + 6);
    v10 = *((_QWORD *)v4 + 14);
    *((_OWORD *)v5 + 6) = v9;
    *((_QWORD *)v5 + 14) = v10;
    p[0] = *(_QWORD *)v3 != 0i64;
    MemFile_WriteData(memFile, 4ui64, p);
    if ( p[0] )
      G_SaveField_WriteStruct(COVERWALL_SAVE_FIELDS, v3, dest, 376, memFile);
    ++v2;
    v3 += 376;
  }
  while ( (__int64)v3 < (__int64)&s_tracesThisFrame );
}

/*
==============
compareCoverBlocks
==============
*/
__int64 compareCoverBlocks(const void *c1, const void *c2)
{
  if ( *(float *)c1 >= *(float *)c2 )
    return *(float *)c1 > *(float *)c2;
  else
    return 0xFFFFFFFFi64;
}

