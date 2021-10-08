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

int __fastcall G_CoverWall_CalcRandomDamageAmount(int originalDamageAmt, double _XMM1_8)
{
  bool v7; 
  char v9; 
  bool v10; 
  int result; 

  _RBX = DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMinPercent;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( !DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMinPercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverwall_propogateDamageMinPercent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMaxPercent;
  if ( !DCONST_DVARMPSPFLT_g_coverwall_propogateDamageMaxPercent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverwall_propogateDamageMaxPercent") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vcomiss xmm6, xmm7
  }
  if ( !(v9 | v7) )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 297, ASSERT_TYPE_ASSERT, "(minDamagePercent <= maxDamagePercent)", (const char *)&queryFormat, "minDamagePercent <= maxDamagePercent");
    v7 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v7 )
  {
    __asm
    {
      vmovaps xmm1, xmm7; max
      vmovaps xmm0, xmm6; min
    }
    *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1_8);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vmulss  xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vcvttss2si eax, xmm0
  }
  return result;
}

/*
==============
G_CoverWall_CheckModelSwap
==============
*/

void __fastcall G_CoverWall_CheckModelSwap(gentity_s *ent, double _XMM1_8)
{
  CoverWall_t *CoverData; 
  int numCoverBlocksInitialized; 
  int v7; 
  int v8; 
  char v15; 
  char v16; 
  const dvar_t *v17; 
  const dvar_t *v19; 
  const dvar_t *v21; 
  const dvar_t *v23; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1502, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  numCoverBlocksInitialized = CoverData->numCoverBlocksInitialized;
  v7 = BG_CoverWall_NumFilledGridPositions(CoverData->coverGrid);
  v8 = level.time - ent->s.time2;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, esi
    vdivss  xmm6, xmm1, xmm0
  }
  if ( numCoverBlocksInitialized <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1509, ASSERT_TYPE_ASSERT, "(numBlocksInitialzed > 0)", (const char *)&queryFormat, "numBlocksInitialzed > 0") )
    __debugbreak();
  if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1510, ASSERT_TYPE_ASSERT, "(lifeTime >= 0)", (const char *)&queryFormat, "lifeTime >= 0") )
    __debugbreak();
  if ( v7 > numCoverBlocksInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1511, ASSERT_TYPE_ASSERT, "(currNumBlocks <= numBlocksInitialzed)", (const char *)&queryFormat, "currNumBlocks <= numBlocksInitialzed") )
    __debugbreak();
  _RSI = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_5;
  if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_5") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vcomiss xmm6, dword ptr [rsi+28h] }
  if ( !(v15 | v16) )
  {
    v17 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_5;
    if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_5") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v8 < v17->current.integer )
      goto LABEL_23;
  }
  if ( CoverData->damageState < 5 )
  {
    G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d5");
    CoverData->damageState = 5;
  }
  else
  {
LABEL_23:
    _RSI = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_4;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_4") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vcomiss xmm6, dword ptr [rsi+28h] }
    if ( !(v15 | v16) )
    {
      v19 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_4;
      if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_4") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v8 < v19->current.integer )
        goto LABEL_33;
    }
    if ( CoverData->damageState < 4 )
    {
      G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d4");
      CoverData->damageState = 4;
    }
    else
    {
LABEL_33:
      _RSI = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_3;
      if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_3") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vcomiss xmm6, dword ptr [rsi+28h] }
      if ( !(v15 | v16) )
      {
        v21 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_3;
        if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_3") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v8 < v21->current.integer )
          goto LABEL_43;
      }
      if ( CoverData->damageState < 3 )
      {
        G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d3");
        CoverData->damageState = 3;
      }
      else
      {
LABEL_43:
        _RSI = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_2;
        if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_2") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vcomiss xmm6, dword ptr [rsi+28h] }
        if ( !(v15 | v16) )
        {
          v23 = DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_2;
          if ( !DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_timeThresholdMS_2") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v23);
          if ( v8 < v23->current.integer )
            goto LABEL_53;
        }
        if ( CoverData->damageState < 2 )
        {
          G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d2");
          CoverData->damageState = 2;
        }
        else
        {
LABEL_53:
          _RSI = DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_1;
          if ( !DCONST_DVARMPSPFLT_g_coverWall_damageThreshold_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_damageThreshold_1") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vcomiss xmm6, dword ptr [rsi+28h] }
          if ( (v15 | v16 || v8 >= Dvar_GetInt_Internal_DebugName(DCONST_DVARMPSPINT_g_coverWall_timeThresholdMS_1, "g_coverWall_timeThresholdMS_1")) && CoverData->damageState < 1 )
          {
            G_CoverWall_SetModel(ent, "barrier_cover_foam_128_d1");
            CoverData->damageState = 1;
          }
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
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
  int v9; 
  int v11; 
  int v12; 
  __int128 outAngles; 
  __int128 outLocalPos; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1769, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1770, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( pSelf->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1771, ASSERT_TYPE_ASSERT, "(pSelf->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "pSelf->s.eType == ET_COVERWALL") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(pSelf);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1774, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0A8h+outLocalPos], xmm0
    vmovss  dword ptr [rsp+0A8h+outLocalPos+4], xmm0
    vmovss  dword ptr [rsp+0A8h+outLocalPos+8], xmm0
    vmovss  dword ptr [rsp+0A8h+outAngles], xmm0
    vmovss  dword ptr [rsp+0A8h+outAngles+4], xmm0
    vmovss  dword ptr [rsp+0A8h+outAngles+8], xmm0
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(pSelf);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1784, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj", outAngles, outLocalPos) )
    __debugbreak();
  v9 = 0;
  *(double *)&_XMM0 = BG_CoverWall_CalcSagAnimWeight(pSelf->s.time2, level.time);
  __asm { vmovaps xmm6, xmm0 }
  v11 = -4;
  do
  {
    v12 = -6;
    while ( !BG_CoverWall_GetGridPos(CoverData->coverGrid, v12, 0, v11) )
    {
LABEL_24:
      if ( ++v12 > 6 )
        goto LABEL_25;
    }
    if ( v9 + 1 > 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1797, ASSERT_TYPE_ASSERT, "(1 + coverBlockCount <= 255)", (const char *)&queryFormat, "COVERWALL_MODEL_FIRST_CONTROLLER + coverBlockCount <= 255") )
      __debugbreak();
    if ( (unsigned __int8)(v9 + 1) <= 0x7Fu )
    {
      __asm { vmovaps xmm3, xmm6; sagAnimWeight }
      BG_CoverWall_GridPosToLocalPos(v12, 0, v11, *(float *)&_XMM3, (vec3_t *)&outLocalPos);
      BG_CoverWall_CalcAnglesForPosition(v12, 0, v11, (vec3_t *)&outAngles);
      DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, (unsigned __int8)++v9, (const vec3_t *)&outLocalPos, (const vec3_t *)&outAngles);
      goto LABEL_24;
    }
LABEL_25:
    ++v11;
  }
  while ( v11 <= 9 );
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
G_CoverWall_Damage
==============
*/
void G_CoverWall_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *weapon, bool isAlternate)
{
  bool v14; 
  gentity_s *v15; 
  CoverWall_t *CoverData; 
  unsigned int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v24; 
  __int64 v26; 
  char *v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  int HealthForGridPos; 
  const dvar_t *v47; 
  int v48; 
  int v49; 
  int v51; 
  __int64 sagAmount; 
  float sagAmounta; 
  vec3_t *outWorldPos; 
  int outZ; 
  gentity_s *ent; 
  int outX[2]; 
  __int64 v62; 
  unsigned int *grid; 
  vec3_t v64; 
  char Base[6]; 
  char v66; 

  if ( targ )
  {
    v14 = targ->s.eType == ET_COVERWALL;
    v15 = targ;
    ent = targ;
    if ( v14 )
    {
      if ( (dFlags & 1) != 0 )
      {
        _RBX = DCONST_DVARMPSPFLT_g_coverWall_splashDamageScalar;
        __asm { vmovaps [rsp+6E8h+var_48], xmm7 }
        if ( !DCONST_DVARMPSPFLT_g_coverWall_splashDamageScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_splashDamageScalar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm7, dword ptr [rbx+28h] }
        CoverData = G_CoverWall_GetCoverData(v15);
        if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 665, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
          __debugbreak();
        grid = CoverData->coverGrid;
        v19 = BG_CoverWall_NumFilledGridPositions(CoverData->coverGrid);
        if ( v19 <= 0x7F )
        {
          v20 = -4;
          __asm { vmovaps [rsp+6E8h+var_38], xmm6 }
          v21 = 0;
          v62 = 0i64;
          v22 = 0i64;
          *(_QWORD *)outX = -4i64;
          __asm { vxorps  xmm6, xmm6, xmm6 }
          do
          {
            v24 = -6;
            _RDI = &Base[12 * v22 + 4];
            v26 = -6i64;
            do
            {
              if ( BG_CoverWall_GetGridPos(grid, v24, 0, v20) )
              {
                __asm { vmovss  [rsp+6E8h+sagAmount], xmm6 }
                BG_CoverWall_GridPosToWorldPos(&v15->r.currentOrigin, &v15->r.currentAngles, v24, 0, v20, sagAmounta, &v64);
                if ( !point && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 686, ASSERT_TYPE_ASSERT, "(point)", (const char *)&queryFormat, "point") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+6E8h+var_670]
                  vsubss  xmm3, xmm0, dword ptr [rax]
                  vmovss  xmm1, dword ptr [rsp+6E8h+var_670+4]
                  vsubss  xmm2, xmm1, dword ptr [rax+4]
                  vmovss  xmm0, dword ptr [rsp+6E8h+var_670+8]
                  vsubss  xmm4, xmm0, dword ptr [rax+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm2, xmm3, xmm0
                  vmovss  dword ptr [rdi-4], xmm2
                }
                if ( (unsigned int)(v24 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v24, "signed", v26) )
                  __debugbreak();
                *(_WORD *)_RDI = v24;
                *((_WORD *)_RDI + 1) = 0;
                if ( (unsigned int)(v20 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v20, "signed", *(intmax_t *)outX) )
                  __debugbreak();
                ++v21;
                *((_WORD *)_RDI + 2) = v20;
                ++v22;
                _RDI += 12;
              }
              ++v24;
              ++v26;
            }
            while ( v24 <= 6 );
            ++*(_QWORD *)outX;
            ++v20;
            outZ = v21;
          }
          while ( v20 <= 9 );
          qsort(Base, v21, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)compareCoverBlocks);
          __asm
          {
            vmovaps xmm6, [rsp+6E8h+var_38]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, [rsp+6E8h+damage]
            vmulss  xmm1, xmm0, xmm7
            vcvttss2si edi, xmm1
          }
          if ( v21 > 0 )
          {
            v42 = &v66;
            do
            {
              v43 = *((__int16 *)v42 - 1);
              v44 = *(__int16 *)v42;
              v45 = *((__int16 *)v42 + 1);
              HealthForGridPos = G_CoverWall_GetHealthForGridPos(v15, v43, v44, v45);
              v47 = DVARBOOL_g_coverWall_drawDamage;
              v48 = _EDI;
              v49 = HealthForGridPos;
              if ( _EDI >= HealthForGridPos )
                v48 = HealthForGridPos;
              if ( !DVARBOOL_g_coverWall_drawDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawDamage") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v47);
              if ( v47->current.enabled )
                G_CoverWall_DebugDrawGridPos(ent, &colorOrange, 40, v43, v44, v45);
              G_CoverWall_DamageCoverAtGridPos(ent, v49, 0, v43, v44, v45);
              _EDI -= v48;
              if ( _EDI <= 0 )
                break;
              v42 += 12;
              v15 = ent;
              ++v62;
            }
            while ( v62 < outZ );
          }
        }
        else
        {
          LODWORD(outWorldPos) = v19;
          LODWORD(sagAmount) = 127;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 671, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Coverwall sort buffer of size %d is not big enough to hold %d elements, increase buffer size\n", sagAmount, outWorldPos) )
            __debugbreak();
        }
        __asm { vmovaps xmm7, [rsp+6E8h+var_48] }
      }
      else
      {
        v51 = targ->c.item[0].clipAmmoCount[0];
        if ( v51 != -1 )
        {
          v15->c.item[0].clipAmmoCount[0] = -1;
          BG_CoverWall_DataArrayIndexToGridPos(v51, outX, (int *)&ent, &outZ);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_g_coverWall_drawDamage, "g_coverWall_drawDamage") )
            G_CoverWall_DebugDrawGridPos(v15, &colorRed, 10, outX[0], (const int)ent, outZ);
          *(double *)&_XMM0 = BG_Coverwall_WeaponDamageScalar(weapon, isAlternate);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, [rsp+6E8h+damage]
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si edx, xmm0; damage
          }
          G_CoverWall_DamageCoverAtGridPos(v15, _EDX, 1, outX[0], (unsigned int)ent, outZ);
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

void __fastcall G_CoverWall_DebugDrawCoverWall(const gentity_s *ent, __int64 a2, __int64 a3, double _XMM3_8)
{
  const dvar_t *v7; 
  bool enabled; 
  const dvar_t *v9; 
  bool v10; 
  const dvar_t *v11; 
  bool v12; 
  const dvar_t *v13; 
  bool v14; 
  const dvar_t *v15; 
  int time2; 
  CoverWall_t *CoverData; 
  const unsigned int *coverGrid; 
  const unsigned int *testGrid; 
  const unsigned int *anchorsGrid; 
  const unsigned int *shapeGrid; 
  int v35; 
  int v36; 
  bool GridPos; 
  bool v38; 
  bool v39; 
  bool v40; 
  const vec4_t *v41; 
  float sagAmount; 
  bool v48; 
  bool v49; 
  bool v50; 
  bool v51; 
  unsigned int *v52; 
  unsigned int *v53; 
  unsigned int *v54; 
  unsigned int *v55; 
  vec3_t angles; 
  vec3_t outWorldPos; 
  Bounds box; 
  vec3_t origin; 
  Bounds v60; 

  _RDI = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 429, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v7 = DVARBOOL_g_coverWall_drawCover;
  if ( !DVARBOOL_g_coverWall_drawCover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawCover") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  enabled = v7->current.enabled;
  v9 = DVARBOOL_g_coverWall_drawGrid;
  v48 = enabled;
  if ( !DVARBOOL_g_coverWall_drawGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawGrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.enabled;
  v11 = DVARBOOL_g_coverWall_drawTestGrid;
  if ( !DVARBOOL_g_coverWall_drawTestGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawTestGrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.enabled;
  v13 = DVARBOOL_g_coverWall_drawAnchors;
  v49 = v12;
  if ( !DVARBOOL_g_coverWall_drawAnchors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawAnchors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.enabled;
  v15 = DVARBOOL_g_coverWall_drawShapeGrid;
  v50 = v14;
  if ( !DVARBOOL_g_coverWall_drawShapeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawShapeGrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v51 = v15->current.enabled;
  if ( enabled || v10 || v12 || v14 || v15->current.enabled )
  {
    time2 = _RDI->s.time2;
    __asm { vmovaps [rsp+100h+var_30], xmm6 }
    *(double *)&_XMM0 = BG_CoverWall_CalcSagAnimWeight(time2, level.time);
    __asm { vmovaps xmm6, xmm0 }
    CoverData = G_CoverWall_GetCoverData(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+130h]
      vmovss  xmm0, dword ptr [rdi+13Ch]
      vmovss  xmm2, dword ptr [rdi+134h]
      vmovss  dword ptr [rbp+57h+origin], xmm1
      vmovss  xmm1, dword ptr [rdi+138h]
      vmovss  dword ptr [rbp+57h+origin+8], xmm1
      vmovss  xmm1, dword ptr [rdi+140h]
      vmovss  dword ptr [rbp+57h+angles], xmm0
      vmovss  xmm0, dword ptr [rdi+144h]
    }
    coverGrid = CoverData->coverGrid;
    testGrid = CoverData->testGrid;
    v52 = CoverData->coverGrid;
    anchorsGrid = CoverData->anchorsGrid;
    v53 = CoverData->testGrid;
    shapeGrid = CoverData->shapeGrid;
    v54 = CoverData->anchorsGrid;
    __asm
    {
      vmovss  dword ptr [rbp+57h+angles+4], xmm1
      vmovss  dword ptr [rbp+57h+origin+4], xmm2
      vmovss  dword ptr [rbp+57h+angles+8], xmm0
    }
    v55 = CoverData->shapeGrid;
    BG_CoverWall_GetGridSize();
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, cs:__real@3f000000
      vsubss  xmm1, xmm2, cs:__real@3f800000
      vsubss  xmm0, xmm2, cs:__real@40000000
      vmovss  dword ptr [rbp+57h+box.halfSize], xmm1
      vmovss  dword ptr [rbp+57h+box.halfSize+4], xmm1
      vmovss  dword ptr [rbp+57h+box.halfSize+8], xmm1
      vmovss  dword ptr [rbp+57h+var_50.halfSize], xmm0
      vmovss  dword ptr [rbp+57h+var_50.halfSize+4], xmm0
      vmovss  dword ptr [rbp+57h+var_50.halfSize+8], xmm0
      vmovss  dword ptr [rbp+57h+box.midPoint], xmm3
      vmovss  dword ptr [rbp+57h+box.midPoint+4], xmm3
      vmovss  dword ptr [rbp+57h+box.midPoint+8], xmm3
      vmovss  dword ptr [rbp+57h+var_50.midPoint], xmm3
      vmovss  dword ptr [rbp+57h+var_50.midPoint+4], xmm3
      vmovss  dword ptr [rbp+57h+var_50.midPoint+8], xmm3
    }
    v35 = -4;
    while ( 1 )
    {
      v36 = -6;
      do
      {
        __asm { vmovss  [rsp+100h+sagAmount], xmm6 }
        BG_CoverWall_GridPosToWorldPos(&origin, &angles, v36, 0, v35, sagAmount, &outWorldPos);
        GridPos = BG_CoverWall_GetGridPos(coverGrid, v36, 0, v35);
        v38 = BG_CoverWall_GetGridPos(testGrid, v36, 0, v35);
        v39 = BG_CoverWall_GetGridPos(anchorsGrid, v36, 0, v35);
        v40 = BG_CoverWall_GetGridPos(shapeGrid, v36, 0, v35);
        if ( !GridPos )
        {
          if ( !v10 )
            goto LABEL_33;
          v41 = &colorRedTrans;
          goto LABEL_30;
        }
        if ( v48 || v10 )
        {
          v41 = &colorGreen;
LABEL_30:
          __asm { vmovss  xmm2, dword ptr [rbp+57h+angles+4]; yaw }
          G_DebugBox(&outWorldPos, &box, *(float *)&_XMM2, v41, 0, 0);
        }
LABEL_33:
        if ( v49 && v38 )
        {
          __asm { vmovss  xmm2, dword ptr [rbp+57h+angles+4]; yaw }
          G_DebugBox(&outWorldPos, &box, *(float *)&_XMM2, &colorOrange, 0, 0);
        }
        if ( v50 && v39 )
        {
          __asm { vmovss  xmm2, dword ptr [rbp+57h+angles+4]; yaw }
          G_DebugBox(&outWorldPos, &v60, *(float *)&_XMM2, &colorOrange, 0, 0);
        }
        if ( v51 && v40 )
        {
          __asm { vmovss  xmm2, dword ptr [rbp+57h+angles+4]; yaw }
          G_DebugBox(&outWorldPos, &box, *(float *)&_XMM2, &colorBlue, 0, 0);
        }
        coverGrid = v52;
        ++v36;
        testGrid = v53;
        anchorsGrid = v54;
        shapeGrid = v55;
      }
      while ( v36 <= 6 );
      if ( ++v35 > 9 )
      {
        __asm { vmovaps xmm6, [rsp+100h+var_30] }
        return;
      }
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
  int time2; 
  float sagAmount; 
  vec3_t angles; 
  vec3_t origin; 
  Bounds box; 
  vec3_t outWorldPos; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 503, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
  }
  time2 = _RBX->s.time2;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+origin], xmm0
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  dword ptr [rsp+0B8h+origin+4], xmm1
    vmovss  xmm1, dword ptr [rbx+13Ch]
    vmovss  dword ptr [rsp+0B8h+origin+8], xmm0
    vmovss  xmm0, dword ptr [rbx+140h]
    vmovss  dword ptr [rsp+0B8h+angles], xmm1
    vmovss  xmm1, dword ptr [rbx+144h]
    vmovss  dword ptr [rsp+0B8h+angles+4], xmm0
    vmovss  dword ptr [rsp+0B8h+angles+8], xmm1
  }
  *(double *)&_XMM0 = BG_CoverWall_CalcSagAnimWeight(time2, level.time);
  BG_CoverWall_GetGridSize();
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  [rsp+0B8h+sagAmount], xmm2
    vmovss  dword ptr [rsp+0B8h+box.midPoint], xmm2
    vmovss  dword ptr [rsp+0B8h+box.midPoint+4], xmm2
    vmovss  dword ptr [rsp+0B8h+box.midPoint+8], xmm2
    vmovss  dword ptr [rsp+0B8h+box.halfSize], xmm1
    vmovss  dword ptr [rsp+0B8h+box.halfSize+4], xmm1
    vmovss  dword ptr [rsp+0B8h+box.halfSize+8], xmm1
  }
  BG_CoverWall_GridPosToWorldPos(&origin, &angles, xPos, yPos, zPos, sagAmount, &outWorldPos);
  __asm { vmovss  xmm2, dword ptr [rsp+0B8h+angles+4]; yaw }
  G_DebugBox(&outWorldPos, &box, *(float *)&_XMM2, color, 1, drawDuration_fms);
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
  const dvar_t *v15; 
  char v26; 
  char v27; 
  int v30; 
  int v32; 
  int v34; 
  int v37; 

  if ( !hitEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 318, ASSERT_TYPE_ASSERT, "(hitEnt)", (const char *)&queryFormat, "hitEnt") )
    __debugbreak();
  if ( hitEnt->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 319, ASSERT_TYPE_ASSERT, "(hitEnt->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "hitEnt->s.eType == ET_COVERWALL") )
    __debugbreak();
  v15 = DCONST_DVARMPSPBOOL_g_coverWall_progogateBulletDamage;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_progogateBulletDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_progogateBulletDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    _RBX = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageUpChance;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
      vmovaps [rsp+0A8h+var_58], xmm9
      vmovaps [rsp+0A8h+var_68], xmm10
    }
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageUpChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageUpChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm10, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageRightChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageRightChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageRightChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageDownChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageDownChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageDownChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARMPSPFLT_g_coverWall_propogateDamageLeftChance;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_propogateDamageLeftChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_propogateDamageLeftChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000; max
      vmovss  xmm7, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0; min
    }
    *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vcomiss xmm0, xmm10
      vmovaps xmm10, [rsp+0A8h+var_68]
      vmovaps xmm6, xmm0
    }
    if ( v26 | v27 )
    {
      v30 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v30, 0, xPos, yPos, zPos + 1);
    }
    __asm
    {
      vcomiss xmm6, xmm9
      vmovaps xmm9, [rsp+0A8h+var_58]
    }
    if ( v26 | v27 )
    {
      v32 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v32, 0, xPos + 1, yPos, zPos);
    }
    __asm
    {
      vcomiss xmm6, xmm8
      vmovaps xmm8, [rsp+0A8h+var_48]
    }
    if ( v26 | v27 )
    {
      v34 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v34, 0, xPos, yPos, zPos - 1);
    }
    __asm
    {
      vcomiss xmm6, xmm7
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
    }
    if ( v26 | v27 )
    {
      v37 = G_CoverWall_CalcRandomDamageAmount(damage);
      G_CoverWall_DamageCoverAtGridPos(hitEnt, v37, 0, xPos - 1, yPos, zPos);
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
  int v4; 
  int v7; 
  unsigned int *testGrid; 
  char v9; 
  int toZ; 
  int v11; 
  char v12; 
  int v13; 
  int v14; 
  bool v15; 
  int v16; 
  bool v17; 
  int outSize; 
  int outMinBound; 
  int fromZ; 
  int outHeight; 
  unsigned int grid[4]; 
  int v24; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1013, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(ent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1016, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  _R13 = CoverData->coverGrid;
  v4 = -6;
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups xmmword ptr [rbp+grid], xmm0
    vmovsd  xmm1, qword ptr [r13+10h]
    vmovsd  [rbp+var_20], xmm1
  }
  v7 = CoverData->coverGrid[6];
  testGrid = CoverData->testGrid;
  v24 = v7;
  v9 = 0;
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
      v11 = fromZ - 1;
      if ( fromZ - 1 >= -4 && !BG_CoverWall_GetGridPos(testGrid, v4, 0, v11) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v4, 0, v11);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, v4, 0, fromZ, v4, 0, v11) )
          G_CoverWall_InitCoverAtGridPos(ent, v4, 0, v11);
      }
    }
LABEL_20:
    ++v4;
  }
  while ( v4 <= 6 );
  v12 = 0;
  v13 = -4;
  do
  {
    if ( BG_CoverWall_GetRowMinMax(grid, 0, v13, &outMinBound, &outSize) )
    {
      v14 = outMinBound - 1;
      if ( v14 >= BG_CoverWall_GetXMin() && !BG_CoverWall_GetGridPos(testGrid, v14, 0, v13) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v14, 0, v13);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, outMinBound, 0, v13, v14, 0, v13) )
        {
          G_CoverWall_InitCoverAtGridPos(ent, v14, 0, v13);
        }
        else if ( BG_CoverWall_GetColumnHeight(_R13, outMinBound, 0, &fromZ) && !v9 && v13 >= BG_CoverWall_GetZMin() && fromZ + 1 <= 9 && !BG_CoverWall_GetGridPos(testGrid, outMinBound, 0, fromZ + 1) )
        {
          v15 = G_CoverWall_TraceBetweenGridPositions(ent, outMinBound, 0, fromZ, outMinBound, 0, fromZ + 1);
          BG_CoverWall_SetGridPos(testGrid, 1, outMinBound, 0, fromZ + 1);
          if ( v15 )
          {
            G_CoverWall_InitCoverAtGridPos(ent, outMinBound, 0, fromZ + 1);
            v9 = 1;
          }
        }
      }
      v16 = outSize + 1;
      if ( v16 <= BG_CoverWall_GetXMax() && !BG_CoverWall_GetGridPos(testGrid, v16, 0, v13) )
      {
        BG_CoverWall_SetGridPos(testGrid, 1, v16, 0, v13);
        if ( G_CoverWall_TraceBetweenGridPositions(ent, outSize, 0, v13, v16, 0, v13) )
        {
          G_CoverWall_InitCoverAtGridPos(ent, v16, 0, v13);
        }
        else if ( BG_CoverWall_GetColumnHeight(_R13, outSize, 0, &outHeight) && !v12 && v13 >= BG_CoverWall_GetZMin() && outHeight + 1 <= 9 && !BG_CoverWall_GetGridPos(testGrid, outSize, 0, outHeight + 1) )
        {
          v17 = G_CoverWall_TraceBetweenGridPositions(ent, outSize, 0, outHeight, outSize, 0, outHeight + 1);
          BG_CoverWall_SetGridPos(testGrid, 1, outSize, 0, outHeight + 1);
          if ( v17 )
          {
            G_CoverWall_InitCoverAtGridPos(ent, outSize, 0, outHeight + 1);
            v12 = 1;
          }
        }
      }
    }
    ++v13;
  }
  while ( v13 <= 9 );
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
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int grid[4]; 
  unsigned int v15; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 902, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RBX = G_CoverWall_GetCoverData(ent);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 905, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+5Ch]
    vmovups xmmword ptr [rsp+78h+grid], xmm0
    vmovsd  xmm1, qword ptr [rbx+6Ch]
    vmovsd  [rsp+78h+var_38], xmm1
  }
  _RBP = _RBX->coverGrid;
  v15 = _RBX->anchorsGrid[6];
  v6 = -4;
  do
  {
    v7 = 0;
    v8 = -4;
    do
    {
      v9 = -6;
      do
      {
        if ( BG_CoverWall_GetGridPos(_RBP, v9, 0, v8) && !BG_CoverWall_GetGridPos(grid, v9, 0, v8) && BG_CoverWall_IsAnyNeighborSet(grid, v9, 0, v8) )
        {
          BG_CoverWall_SetGridPos(grid, 1, v9, 0, v8);
          ++v7;
        }
        ++v9;
      }
      while ( v9 <= 6 );
      ++v8;
    }
    while ( v8 <= 9 );
  }
  while ( v7 );
  do
  {
    v10 = -6;
    do
    {
      if ( BG_CoverWall_GetGridPos(grid, v10, 0, v6) && !BG_CoverWall_GetGridPos(_RBP, v10, 0, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 939, ASSERT_TYPE_ASSERT, "(BG_CoverWall_GetGridPos( coverGrid, x, y, z ))", (const char *)&queryFormat, "BG_CoverWall_GetGridPos( coverGrid, x, y, z )") )
        __debugbreak();
      ++v10;
    }
    while ( v10 <= 6 );
    ++v6;
  }
  while ( v6 <= 9 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+78h+grid]
    vmovups xmmword ptr [rbp+0], xmm0
    vmovsd  xmm1, [rsp+78h+var_38]
    vmovsd  qword ptr [rbp+10h], xmm1
  }
  _RBP[6] = v15;
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
  int v8; 
  CoverWall_t *i; 
  gentity_s *v11; 
  CoverWall_t *CoverData; 
  _DWORD *p_flags; 
  int v23; 
  vec3_t origina; 

  _RDI = origin;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_CoverWall_Spawn");
  v8 = 0;
  for ( i = s_coverWalls; i->ent; ++i )
  {
    if ( (unsigned int)++v8 >= 0x10 )
    {
      Com_PrintWarning(16, "Warning: Attempt to exceed max of %d coverwalls, spawn failed to generate a coverwall ent.\n", 16i64);
      return 0i64;
    }
  }
  v11 = G_Utils_SpawnEntity();
  Scr_SetString(&v11->classname, scr_const.script_coverwall);
  Scr_SetString(&v11->script_classname, scr_const.script_coverwall);
  __asm
  {
    vcvttss2si ecx, dword ptr [rdi]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vcvttss2si ecx, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+68h+origin], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vcvttss2si ecx, dword ptr [rdi+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmovss  dword ptr [rsp+68h+origin+8], xmm0
    vmovss  dword ptr [rsp+68h+origin+4], xmm1
  }
  G_SetOriginAndAngle(v11, &origina, angles, 1, 1);
  v11->handler = 30;
  v11->s.eType = ET_COVERWALL;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v11->s.lerp.eFlags, ACTIVE, 0x10u);
  v11->maxHealth = 0x7FFFFFFF;
  v11->health = 0x7FFFFFFF;
  G_CoverWall_InitStaticData(v11, maxHealthPerCoverBlock);
  G_CoverWall_UpdateBounds(v11);
  G_CoverWall_SetModel(v11, "barrier_cover_foam_128");
  CoverData = G_CoverWall_GetCoverData(v11);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1309, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  G_CoverWall_InitCoverAtGridPos(v11, 0, 0, 0);
  BG_CoverWall_SetGridPos(CoverData->testGrid, 1, 0, 0, 0);
  BG_CoverWall_SetGridPos(CoverData->anchorsGrid, 1, 0, 0, 0);
  p_flags = &CoverData->flags;
  if ( CoverData == (CoverWall_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.h", 61, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
    __debugbreak();
  v23 = *p_flags | 1;
  *p_flags = v23;
  if ( (v23 & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1317, ASSERT_TYPE_ASSERT, "(G_CoverWall_TestFlag( coverWall->flags, FCF_MELTING ) == false)", (const char *)&queryFormat, "G_CoverWall_TestFlag( coverWall->flags, FCF_MELTING ) == false") )
    __debugbreak();
  v11->s.time2 = level.time;
  CoverData->expansionTime = level.time + BG_CoverWall_GetExpansionRateMS();
  if ( scr_const.coverwall_expand_start )
    GScr_Notify(v11, scr_const.coverwall_expand_start, 0);
  G_PhysicsCoverWall_AddCoverWall(v11);
  G_CoverWall_UpdateEnt(v11);
  G_CoverWall_ValidateData(v11);
  SV_LinkEntity(v11);
  Sys_ProfEndNamedEvent();
  return v11;
}

/*
==============
G_CoverWall_TraceBetweenGridPositions
==============
*/
_BOOL8 G_CoverWall_TraceBetweenGridPositions(gentity_s *ent, const int fromX, const int fromY, const int fromZ, const int toX, const int toY, const int toZ)
{
  int number; 
  char v34; 
  bool v35; 
  gentity_s *v36; 
  scr_string_t coverwall_expand_hit_actor; 
  bool v38; 
  char v39; 
  const dvar_t *v40; 
  const vec4_t *v41; 
  _BOOL8 result; 
  float sagAmount; 
  float sagAmounta; 
  trace_t results; 
  vec3_t end; 
  vec3_t start; 
  vec3_t angles; 
  vec3_t origin; 

  __asm { vmovaps [rsp+160h+var_50], xmm6 }
  _R14 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 796, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( _R14->s.eType != ET_COVERWALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 797, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_COVERWALL)", (const char *)&queryFormat, "ent->s.eType == ET_COVERWALL") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14+130h]
    vmovss  xmm1, dword ptr [r14+134h]
    vmovss  xmm6, cs:__real@3f800000
  }
  number = _R14->s.number;
  __asm
  {
    vmovss  dword ptr [rbp+60h+origin], xmm0
    vmovss  xmm0, dword ptr [r14+138h]
    vmovss  dword ptr [rbp+60h+origin+4], xmm1
    vmovss  xmm1, dword ptr [r14+13Ch]
    vmovss  dword ptr [rbp+60h+origin+8], xmm0
    vmovss  xmm0, dword ptr [r14+140h]
    vmovss  dword ptr [rbp+60h+angles], xmm1
    vmovss  xmm1, dword ptr [r14+144h]
    vmovss  [rsp+160h+sagAmount], xmm6
    vmovss  dword ptr [rbp+60h+angles+4], xmm0
    vmovss  dword ptr [rbp+60h+angles+8], xmm1
  }
  BG_CoverWall_GridPosToWorldPos(&origin, &angles, fromX, fromY, fromZ, sagAmount, &start);
  __asm { vmovss  [rsp+160h+sagAmount], xmm6 }
  BG_CoverWall_GridPosToWorldPos(&origin, &angles, toX, toY, toZ, sagAmounta, &end);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+60h+end]
    vsubss  xmm0, xmm1, dword ptr [rbp+60h+start]
    vmovss  xmm2, dword ptr [rbp+60h+end+4]
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm3, dword ptr [rbp+60h+end+8]
    vmulss  xmm0, xmm0, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsubss  xmm0, xmm2, dword ptr [rbp+60h+start+4]
    vmovss  dword ptr [rbp+60h+end], xmm1
    vmulss  xmm1, xmm0, xmm4
    vsubss  xmm0, xmm3, dword ptr [rbp+60h+start+8]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbp+60h+end+4], xmm2
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rbp+60h+end+8], xmm2
  }
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds_origin, number, 0, 42025217, 0, NULL, All);
  __asm
  {
    vmovss  xmm0, [rsp+160h+results.fraction]
    vcomiss xmm0, cs:__real@3f2aaae3
  }
  v35 = !v34;
  if ( results.hitType == TRACE_HITTYPE_ENTITY )
  {
    v36 = &g_entities[results.hitId];
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1928, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((v36->s.eType - 19) & 0xFFFD) == 0 )
    {
      coverwall_expand_hit_actor = scr_const.coverwall_expand_hit_actor;
      v35 = 0;
      GScr_AddEntity(v36);
      GScr_Notify(_R14, coverwall_expand_hit_actor, 1u);
    }
    v38 = !BG_CoverWall_IsCoverWall(&v36->s);
    v39 = v35;
    if ( !v38 )
      v39 = 1;
    v35 = v39;
    if ( ((v36->s.eType - 1) & 0xFFEF) == 0 )
      v35 = 0;
  }
  ++s_tracesThisFrame;
  v40 = DVARBOOL_g_coverWall_drawTraces;
  if ( !DVARBOOL_g_coverWall_drawTraces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_drawTraces") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
  {
    v41 = &colorRed;
    if ( v35 )
      v41 = &colorGreen;
    G_DebugLineWithDuration(&start, &end, v41, 0, 60);
  }
  result = v35;
  __asm { vmovaps xmm6, [rsp+160h+var_50] }
  return result;
}

/*
==============
G_CoverWall_Update
==============
*/
void G_CoverWall_Update(gentity_s *ent, double a2, __int64 a3, double a4)
{
  CoverWall_t *CoverData; 
  CoverWall_t *v6; 
  int time; 
  int v8; 
  unsigned int *p_flags; 
  CoverWall_t *v10; 
  CoverWall_t *v11; 
  const dvar_t *v12; 
  __int64 v13; 
  __int64 v14; 
  const dvar_t *v15; 
  int v16; 
  CoverWall_t *v17; 

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
    v6 = G_CoverWall_GetCoverData(ent);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1334, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    time = level.time;
    if ( level.time >= v6->expansionTime && (v6->flags & 1) != 0 )
    {
      G_CoverWall_Expand(ent);
      v6->expansionTime += BG_CoverWall_GetExpansionRateMS();
      time = level.time;
    }
    v8 = time - ent->s.time2;
    if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1344, ASSERT_TYPE_ASSERT, "(elapsedTime >= 0)", (const char *)&queryFormat, "elapsedTime >= 0") )
      __debugbreak();
    if ( v8 >= BG_CoverWall_GetExpansionTimeMS() )
    {
      v6->expansionTime = 0x7FFFFFFF;
      p_flags = &v6->flags;
      if ( (*(_BYTE *)p_flags & 1) != 0 )
      {
        if ( !p_flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.h", 68, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
          __debugbreak();
        *p_flags &= ~1u;
        if ( scr_const.coverwall_expand_finish )
          GScr_Notify(ent, scr_const.coverwall_expand_finish, 0);
      }
    }
    v10 = G_CoverWall_GetCoverData(ent);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1563, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    if ( v10->removeDisconnectedCoverBlocks )
    {
      G_CoverWall_RunTwoBlockRule(ent);
      G_CoverWall_RunThreeBlockRule(ent);
      G_CoverWall_RemoveDisconnectedCoverBlocks(ent);
      v10->removeDisconnectedCoverBlocks = 0;
    }
    G_CoverWall_UpdateBounds(ent);
    v11 = G_CoverWall_GetCoverData(ent);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1544, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    v12 = DCONST_DVARMPSPBOOL_g_coverWall_useDamageStates;
    if ( !DCONST_DVARMPSPBOOL_g_coverWall_useDamageStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useDamageStates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && (v11->flags & 3) == 0 )
      G_CoverWall_CheckModelSwap(ent, a2);
    G_PhysicsCoverWall_UpdateCoverWall(ent);
    G_CoverWall_DebugDrawCoverWall(ent, v13, v14, a4);
    if ( s_tracesThisFrame )
    {
      v15 = DVARBOOL_g_coverWall_debugPrint;
      if ( !DVARBOOL_g_coverWall_debugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_debugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
        Com_Printf(16, "Cover Wall Performed %d Traces This frame\n", (unsigned int)s_tracesThisFrame);
    }
    G_CoverWall_UpdateEnt(ent);
    v16 = level.time - ent->s.time2;
    if ( v16 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1745, ASSERT_TYPE_ASSERT, "(lifeTime >= 0)", (const char *)&queryFormat, "lifeTime >= 0") )
      __debugbreak();
    if ( !BG_CoverWall_NumFilledGridPositions((const unsigned int *)&ent->s.lerp.u) && v16 > BG_CoverWall_GetExpansionRateMS() )
    {
      v17 = G_CoverWall_GetCoverData(ent);
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1671, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
        __debugbreak();
      v17->markForDelete = 1;
    }
  }
}

/*
==============
G_CoverWall_UpdateBounds
==============
*/

bool __fastcall G_CoverWall_UpdateBounds(gentity_s *ent, double _XMM1_8, double _XMM2_8)
{
  CoverWall_t *CoverData; 
  char v11; 
  char v32; 
  char v33; 
  bool result; 
  int xMax; 
  int xMin; 
  int yMax; 
  int yMin; 
  int zMax; 
  int zMin[19]; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R12 = ent;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1254, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CoverData = G_CoverWall_GetCoverData(_R12);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1257, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  BG_CoverWall_GetGridExtents(CoverData->coverGrid, &xMin, &xMax, &yMin, &yMax, zMin, &zMax);
  BG_CoverWall_GetGridSize();
  *(double *)&_XMM0 = BG_CoverWall_GetCollisionRadius();
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r15d
    vmulss  xmm1, xmm1, xmm3
    vaddss  xmm8, xmm1, xmm0
    vmovaps xmm4, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ebp
    vmulss  xmm1, xmm2, xmm3
    vaddss  xmm5, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm0, xmm0, esi
    vcvtsi2ss xmm9, xmm9, edi
    vucomiss xmm9, dword ptr [r12+100h]
    vmulss  xmm1, xmm0, xmm3
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm4
    vcvtsi2ss xmm7, xmm7, ebx
    vcvtsi2ss xmm6, xmm6, r14d
  }
  if ( !v11 )
    goto LABEL_11;
  __asm { vucomiss xmm7, dword ptr [r12+104h] }
  if ( !v11 )
    goto LABEL_11;
  __asm { vucomiss xmm6, dword ptr [r12+108h] }
  if ( v11 )
  {
    v32 = 0;
    v11 = 1;
  }
  else
  {
LABEL_11:
    v32 = 1;
  }
  __asm { vucomiss xmm8, dword ptr [r12+10Ch] }
  if ( !v11 )
    goto LABEL_16;
  __asm { vucomiss xmm5, dword ptr [r12+110h] }
  if ( !v11 )
    goto LABEL_16;
  __asm { vucomiss xmm2, dword ptr [r12+114h] }
  if ( v11 )
    v33 = 1;
  else
LABEL_16:
    v33 = 0;
  if ( v32 || !v33 )
  {
    __asm
    {
      vmovss  dword ptr [r12+100h], xmm9
      vmovss  dword ptr [r12+104h], xmm7
      vmovss  dword ptr [r12+108h], xmm6
      vmovss  dword ptr [r12+10Ch], xmm8
      vmovss  dword ptr [r12+110h], xmm5
      vmovss  dword ptr [r12+114h], xmm2
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
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
  unsigned int flags; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1578, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RDI = G_CoverWall_GetCoverData(_RBX);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_coverwall.cpp", 1581, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  if ( memcmp_0(&_RBX->s.lerp.u, _RDI->coverGrid, 0x1Cui64) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmovups xmmword ptr [rbx+58h], xmm0
      vmovsd  xmm1, qword ptr [rdi+50h]
      vmovsd  qword ptr [rbx+68h], xmm1
    }
    _RBX->s.lerp.u.anonymous.data[6] = _RDI->coverGrid[6];
  }
  flags = _RDI->flags;
  if ( _RBX->s.lerp.u.anonymous.data[7] != flags )
    _RBX->s.lerp.u.anonymous.data[7] = flags;
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
  __int64 v6; 
  __int64 v16; 
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
    _RCX = v3;
    _RAX = dest;
    v6 = 2i64;
    do
    {
      _RAX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups xmm1, xmmword ptr [rcx+70h]
      }
      _RCX += 128;
      __asm
      {
        vmovups ymmword ptr [rax-80h], ymm0
        vmovups ymm0, ymmword ptr [rcx-60h]
        vmovups ymmword ptr [rax-60h], ymm0
        vmovups ymm0, ymmword ptr [rcx-40h]
        vmovups ymmword ptr [rax-40h], ymm0
        vmovups xmm0, xmmword ptr [rcx-20h]
        vmovups xmmword ptr [rax-20h], xmm0
        vmovups xmmword ptr [rax-10h], xmm1
      }
      --v6;
    }
    while ( v6 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm0, xmmword ptr [rcx+60h]
    }
    v16 = *((_QWORD *)_RCX + 14);
    __asm { vmovups xmmword ptr [rax+60h], xmm0 }
    *((_QWORD *)_RAX + 14) = v16;
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
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx]
    vcomiss xmm0, xmm1
  }
  if ( v2 )
    return 0xFFFFFFFFi64;
  __asm { vcomiss xmm0, xmm1 }
  return 0i64;
}

