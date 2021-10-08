/*
==============
GUtilsSP::MayThrowbackGrenade
==============
*/

bool __fastcall GUtilsSP::MayThrowbackGrenade(GUtilsSP *this, const gentity_s *ent, const gentity_s *grenade)
{
  return ?MayThrowbackGrenade@GUtilsSP@@UEBA_NPEBUgentity_s@@0@Z(this, ent, grenade);
}

/*
==============
GUtilsSP::DObjUpdate
==============
*/

void __fastcall GUtilsSP::DObjUpdate(GUtilsSP *this, gentity_s *ent, int link)
{
  ?DObjUpdate@GUtilsSP@@UEBAXPEAUgentity_s@@H@Z(this, ent, link);
}

/*
==============
GUtilsSP::SetEntitySuit
==============
*/

void __fastcall GUtilsSP::SetEntitySuit(GUtilsSP *this, const gentity_s *ent, unsigned int suitIndex)
{
  ?SetEntitySuit@GUtilsSP@@UEBAXPEBUgentity_s@@I@Z(this, ent, suitIndex);
}

/*
==============
GUtilsSP::PlayerButtonsPressed
==============
*/

bool __fastcall GUtilsSP::PlayerButtonsPressed(GUtilsSP *this, const gentity_s *ent, unsigned __int64 buttons)
{
  return ?PlayerButtonsPressed@GUtilsSP@@UEBA_NPEBUgentity_s@@_K@Z(this, ent, buttons);
}

/*
==============
GUtilsSP::ShouldCreateEntityPhysicsOnInit
==============
*/

bool __fastcall GUtilsSP::ShouldCreateEntityPhysicsOnInit(GUtilsSP *this, const gentity_s *ent)
{
  return ?ShouldCreateEntityPhysicsOnInit@GUtilsSP@@UEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
G_UtilsSP_DObjUpdateServerTime
==============
*/

int __fastcall G_UtilsSP_DObjUpdateServerTime(gentity_s *ent, int bNotify)
{
  return ?G_UtilsSP_DObjUpdateServerTime@@YAHPEAUgentity_s@@H@Z(ent, bNotify);
}

/*
==============
G_UtilsSP_DObjUpdateAndKeepHiddenPartBits
==============
*/

void __fastcall G_UtilsSP_DObjUpdateAndKeepHiddenPartBits(gentity_s *ent, int link)
{
  ?G_UtilsSP_DObjUpdateAndKeepHiddenPartBits@@YAXPEAUgentity_s@@H@Z(ent, link);
}

/*
==============
GUtilsSP::FreeEntity
==============
*/

void __fastcall GUtilsSP::FreeEntity(GUtilsSP *this, gentity_s *ed)
{
  ?FreeEntity@GUtilsSP@@UEBAXPEAUgentity_s@@@Z(this, ed);
}

/*
==============
G_UtilsSP_DObjDevCheckUpdate
==============
*/

void __fastcall G_UtilsSP_DObjDevCheckUpdate(gentity_s *ent)
{
  ?G_UtilsSP_DObjDevCheckUpdate@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GUtilsSP::EntityStateSetPartBits
==============
*/

void __fastcall GUtilsSP::EntityStateSetPartBits(GUtilsSP *this, gentity_s *ent, const DObjPartBits *partBits)
{
  ?EntityStateSetPartBits@GUtilsSP@@UEBAXPEAUgentity_s@@PEIBUDObjPartBits@@@Z(this, ent, partBits);
}

/*
==============
GUtilsSP::FreeEntityRefs
==============
*/

void __fastcall GUtilsSP::FreeEntityRefs(GUtilsSP *this, gentity_s *ed)
{
  ?FreeEntityRefs@GUtilsSP@@UEBAXPEAUgentity_s@@@Z(this, ed);
}

/*
==============
GUtilsSP::SetEntityPerk
==============
*/

void __fastcall GUtilsSP::SetEntityPerk(GUtilsSP *this, const gentity_s *ent, unsigned int perkIndex)
{
  ?SetEntityPerk@GUtilsSP@@UEBAXPEBUgentity_s@@I@Z(this, ent, perkIndex);
}

/*
==============
G_UtilsSP_RegisterSoundWait
==============
*/

void __fastcall G_UtilsSP_RegisterSoundWait(scrContext_t *scrContext, gentity_s *ent, unsigned __int16 index, scr_string_t notifyString, int stoppable)
{
  ?G_UtilsSP_RegisterSoundWait@@YAXAEAUscrContext_t@@PEAUgentity_s@@GW4scr_string_t@@H@Z(scrContext, ent, index, notifyString, stoppable);
}

/*
==============
G_DemoSP_SaveFreeEntities
==============
*/

int __fastcall G_DemoSP_SaveFreeEntities(unsigned __int8 *buf)
{
  return ?G_DemoSP_SaveFreeEntities@@YAHPEAE@Z(buf);
}

/*
==============
GUtilsSP::ClearEntityPerks
==============
*/

void __fastcall GUtilsSP::ClearEntityPerks(GUtilsSP *this, const gentity_s *ent)
{
  ?ClearEntityPerks@GUtilsSP@@UEBAXPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsSP::EntAttach
==============
*/

bool __fastcall GUtilsSP::EntAttach(GUtilsSP *this, gentity_s *ent, const char *modelName, scr_string_t tagName, bool ignoreCollision, bool isOnCharacterBack)
{
  return ?EntAttach@GUtilsSP@@UEBA_NPEAUgentity_s@@PEBDW4scr_string_t@@_N3@Z(this, ent, modelName, tagName, ignoreCollision, isOnCharacterBack);
}

/*
==============
GUtilsSP::SetPlayerViewAngles
==============
*/

void __fastcall GUtilsSP::SetPlayerViewAngles(GUtilsSP *this, gentity_s *ent, const vec3_t *angle)
{
  ?SetPlayerViewAngles@GUtilsSP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@@Z(this, ent, angle);
}

/*
==============
GUtilsSP::SetPIPElemField
==============
*/

bool __fastcall GUtilsSP::SetPIPElemField(GUtilsSP *this, scrContext_t *scrContext, int entnum, int offset)
{
  return ?SetPIPElemField@GUtilsSP@@UEBA_NAEAUscrContext_t@@HH@Z(this, scrContext, entnum, offset);
}

/*
==============
GUtilsSP::GUtilsSP
==============
*/

void __fastcall GUtilsSP::GUtilsSP(GUtilsSP *this)
{
  ??0GUtilsSP@@QEAA@XZ(this);
}

/*
==============
GUtilsSP::IsTransientCustomizationModel
==============
*/

bool __fastcall GUtilsSP::IsTransientCustomizationModel(GUtilsSP *this, const char *modelName)
{
  return ?IsTransientCustomizationModel@GUtilsSP@@UEBA_NPEBD@Z(this, modelName);
}

/*
==============
GUtilsSP::SetPlayerOrigin
==============
*/

void __fastcall GUtilsSP::SetPlayerOrigin(GUtilsSP *this, gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  ?SetPlayerOrigin@GUtilsSP@@UEBAXPEAUgentity_s@@AEBTvec3_t@@HH@Z(this, ent, origin, zOffset, teleport);
}

/*
==============
G_DemoSP_LoadFreeEntities
==============
*/

void __fastcall G_DemoSP_LoadFreeEntities(unsigned __int8 *buf)
{
  ?G_DemoSP_LoadFreeEntities@@YAXPEAE@Z(buf);
}

/*
==============
GUtilsSP::MayUseEntity
==============
*/

bool __fastcall GUtilsSP::MayUseEntity(GUtilsSP *this, const gentity_s *ent, const gentity_s *useEnt)
{
  return ?MayUseEntity@GUtilsSP@@UEBA_NPEBUgentity_s@@0@Z(this, ent, useEnt);
}

/*
==============
GUtilsSP::GetTeamFromDebugString
==============
*/

team_t __fastcall GUtilsSP::GetTeamFromDebugString(GUtilsSP *this, const char *teamName)
{
  return ?GetTeamFromDebugString@GUtilsSP@@UEBA?AW4team_t@@PEBD@Z(this, teamName);
}

/*
==============
GUtilsSP::UnlinkUpdateCorpse
==============
*/

void __fastcall GUtilsSP::UnlinkUpdateCorpse(GUtilsSP *this, gentity_s *corpseEnt)
{
  ?UnlinkUpdateCorpse@GUtilsSP@@UEBAXPEAUgentity_s@@@Z(this, corpseEnt);
}

/*
==============
GUtilsSP::InitGentity
==============
*/

void __fastcall GUtilsSP::InitGentity(GUtilsSP *this, gentity_s *e)
{
  ?InitGentity@GUtilsSP@@UEBAXPEAUgentity_s@@@Z(this, e);
}

/*
==============
GUtilsSP::BotSetAlmostGroundPlane
==============
*/

void __fastcall GUtilsSP::BotSetAlmostGroundPlane(GUtilsSP *this, const playerState_s *ps, bool newValue)
{
  ?BotSetAlmostGroundPlane@GUtilsSP@@UEBAXPEBUplayerState_s@@_N@Z(this, ps, newValue);
}

/*
==============
GUtilsSP::EntDetach
==============
*/

bool __fastcall GUtilsSP::EntDetach(GUtilsSP *this, gentity_s *ent, const char *modelName, scr_string_t tagName)
{
  return ?EntDetach@GUtilsSP@@UEBA_NPEAUgentity_s@@PEBDW4scr_string_t@@@Z(this, ent, modelName, tagName);
}

/*
==============
GUtilsSP::GetPIPElemField
==============
*/

bool __fastcall GUtilsSP::GetPIPElemField(GUtilsSP *this, scrContext_t *scrContext, int entnum, int offset)
{
  return ?GetPIPElemField@GUtilsSP@@UEBA_NAEAUscrContext_t@@HH@Z(this, scrContext, entnum, offset);
}

/*
==============
GUtilsSP::GetDebugTeamName
==============
*/

const char *__fastcall GUtilsSP::GetDebugTeamName(GUtilsSP *this, const gentity_s *entity)
{
  return ?GetDebugTeamName@GUtilsSP@@UEBAPEBDPEBUgentity_s@@@Z(this, entity);
}

/*
==============
GUtilsSP::GetEntityTeam
==============
*/

team_t __fastcall GUtilsSP::GetEntityTeam(GUtilsSP *this, const gentity_s *entity)
{
  return ?GetEntityTeam@GUtilsSP@@UEBA?AW4team_t@@PEBUgentity_s@@@Z(this, entity);
}

/*
==============
GUtilsSP::BotStuckCheck
==============
*/

void __fastcall GUtilsSP::BotStuckCheck(GUtilsSP *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps, const float frametime, bool body)
{
  ?BotStuckCheck@GUtilsSP@@UEBAXAEBTvec3_t@@0PEBUplayerState_s@@M_N@Z(this, startVel, startOrigin, ps, frametime, body);
}

/*
==============
GUtilsSP::GetWeaponWorldModels
==============
*/

XModel *__fastcall GUtilsSP::GetWeaponWorldModels(GUtilsSP *this, const Weapon *r_weapon)
{
  return ?GetWeaponWorldModels@GUtilsSP@@UEBAPEAUXModel@@AEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
GUtilsSP::MayActivateHoldEntity
==============
*/

bool __fastcall GUtilsSP::MayActivateHoldEntity(GUtilsSP *this, const gentity_s *ent)
{
  return ?MayActivateHoldEntity@GUtilsSP@@UEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsSP::EntDetachAll
==============
*/

void __fastcall GUtilsSP::EntDetachAll(GUtilsSP *this, gentity_s *ent)
{
  ?EntDetachAll@GUtilsSP@@UEBAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GUtilsSP::UnsetEntityPerk
==============
*/

void __fastcall GUtilsSP::UnsetEntityPerk(GUtilsSP *this, const gentity_s *ent, unsigned int perkIndex)
{
  ?UnsetEntityPerk@GUtilsSP@@UEBAXPEBUgentity_s@@I@Z(this, ent, perkIndex);
}

/*
==============
GUtilsSP::GUtilsSP
==============
*/
void GUtilsSP::GUtilsSP(GUtilsSP *this)
{
  this->m_entitySpawnMinFreeTime = 0;
  this->__vftable = (GUtilsSP_vtbl *)&GUtilsSP::`vftable';
  *(_WORD *)&this->m_disableCreateEntityPhysicsOnInit = 0;
}

/*
==============
GUtilsSP::BotSetAlmostGroundPlane
==============
*/
void GUtilsSP::BotSetAlmostGroundPlane(GUtilsSP *this, const playerState_s *ps, bool newValue)
{
  ;
}

/*
==============
GUtilsSP::BotStuckCheck
==============
*/
void GUtilsSP::BotStuckCheck(GUtilsSP *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps)
{
  ;
}

/*
==============
GUtilsSP::ClearEntityPerks
==============
*/
void GUtilsSP::ClearEntityPerks(GUtilsSP *this, const gentity_s *ent)
{
  ;
}

/*
==============
GUtilsSP::DObjUpdate
==============
*/
void GUtilsSP::DObjUpdate(GUtilsSP *this, gentity_s *ent, int link)
{
  int finalBoneCount; 
  int firstModelBoneCount; 
  int weaponModelStartIndexes[4]; 

  G_UtilsSP_DObjUpdateInternal(ent, link, weaponModelStartIndexes, &firstModelBoneCount, &finalBoneCount);
}

/*
==============
GUtilsSP::EntAttach
==============
*/
char GUtilsSP::EntAttach(GUtilsSP *this, gentity_s *ent, const char *modelName, scr_string_t tagName, bool ignoreCollision)
{
  gentity_s *v8; 
  XModel *Model; 
  unsigned int numBones; 
  int v11; 
  __int64 v12; 
  unsigned __int16 *i; 
  XModel *v14; 
  int ModelIndex; 
  const DObj *ServerDObjForEnt; 
  const DObj *v18; 
  unsigned int v19; 
  XModel *v20; 
  int v21; 
  const char *v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  char v26; 
  unsigned __int64 v27; 
  DObj *v28; 
  __int64 lastBone; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  char *name; 
  int finalBoneCount[2]; 
  DObjPartBits partBits; 
  DObjPartBits v36; 
  int weaponModelStartIndexes[4]; 

  name = (char *)modelName;
  *(_QWORD *)finalBoneCount = ent;
  v8 = ent;
  Profile_Begin(305);
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 813, ASSERT_TYPE_ASSERT, "(tagName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "tagName != NULL_SCR_STRING") )
    __debugbreak();
  if ( this->EntDetach(this, v8, modelName, tagName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 816, ASSERT_TYPE_ASSERT, "(!EntDetach( ent, modelName, tagName ))", (const char *)&queryFormat, "!EntDetach( ent, modelName, tagName )") )
    __debugbreak();
  Model = G_Utils_GetModel(v8->model);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numBones = Model->numBones;
  v11 = 0;
  v12 = 0i64;
  for ( i = v8->attachModelNames; *i; ++i )
  {
    v14 = G_Utils_GetModel(*i);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    ++v11;
    numBones += v14->numBones;
    if ( ++v12 >= 28 )
    {
      Profile_EndInternal(NULL);
      return 0;
    }
  }
  Profile_EndInternal(NULL);
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  ModelIndex = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, name);
  if ( !ModelIndex )
    return 0;
  Profile_Begin(305);
  if ( ModelIndex != (unsigned __int16)ModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 843, ASSERT_TYPE_ASSERT, "(modelIndex == (modelNameIndex_t) modelIndex)", (const char *)&queryFormat, "modelIndex == (modelNameIndex_t) modelIndex") )
    __debugbreak();
  v8->attachModelNames[v11] = ModelIndex;
  if ( v8->attachTagNames[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 845, ASSERT_TYPE_ASSERT, "(ent->attachTagNames[i] == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->attachTagNames[i] == NULL_SCR_STRING") )
    __debugbreak();
  Scr_SetString(&v8->attachTagNames[v11], tagName);
  if ( ((1 << v11) & v8->attachIgnoreCollision) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 847, ASSERT_TYPE_ASSERT, "(!(ent->attachIgnoreCollision & (1 << i)))", (const char *)&queryFormat, "!(ent->attachIgnoreCollision & (1 << i))") )
    __debugbreak();
  if ( ignoreCollision )
    v8->attachIgnoreCollision |= 1 << v11;
  if ( v8 == (gentity_s *)-1448i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", (_DWORD)v8 + 1476, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v8->attachWeaponTagNames[((__int64)v11 >> 5) + 4] &= ~(1 << (v11 & 0x1F));
  ServerDObjForEnt = Com_GetServerDObjForEnt(v8);
  v18 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    DObjGetHidePartBits(ServerDObjForEnt, &partBits);
    v19 = DObjNumBones(v18);
    v20 = G_Utils_GetModel(ModelIndex);
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    v21 = v20->numBones;
    if ( v21 + v19 > 0xFE )
    {
      DObjDumpInfo(v18);
      v22 = DObjGetName(v18);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 865, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "GUtilsSP::EntAttach: Attaching model %s to model %s exceeds the bone count of %i", name, v22, 254) )
        __debugbreak();
    }
    if ( numBones != v19 )
    {
      DObjGetHidePartBits(v18, &v36);
      v23 = v21 + numBones;
      v24 = numBones;
      if ( numBones < v21 + numBones )
      {
        v25 = numBones;
        do
        {
          if ( v24 >= 0x100 )
          {
            LODWORD(v32) = 256;
            LODWORD(v31) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v31, v32) )
              __debugbreak();
          }
          v26 = v24 & 0x1F;
          v27 = v25 >> 5;
          ++v24;
          ++v25;
          partBits.array[v27] &= ~(0x80000000 >> v26);
        }
        while ( v24 < v23 );
        v8 = *(gentity_s **)finalBoneCount;
      }
      for ( ; numBones < v19; ++numBones )
      {
        if ( numBones >= 0x100 )
        {
          LODWORD(v30) = 256;
          LODWORD(lastBone) = numBones;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", lastBone, v30) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (numBones & 0x1F)) & v36.array[(unsigned __int64)numBones >> 5]) != 0 )
        {
          if ( v24 >= 0x100 )
          {
            LODWORD(v32) = 256;
            LODWORD(v31) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v31, v32) )
              __debugbreak();
          }
          partBits.array[(unsigned __int64)v24 >> 5] |= 0x80000000 >> (v24 & 0x1F);
        }
        else
        {
          if ( v24 >= 0x100 )
          {
            LODWORD(v32) = 256;
            LODWORD(v31) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v31, v32) )
              __debugbreak();
          }
          partBits.array[(unsigned __int64)v24 >> 5] &= ~(0x80000000 >> (v24 & 0x1F));
        }
        ++v24;
      }
    }
  }
  G_UtilsSP_DObjUpdateInternal(v8, v8->r.isLinked, weaponModelStartIndexes, (int *)&name, finalBoneCount);
  v28 = Com_GetServerDObjForEnt(v8);
  if ( v28 )
    G_UtilsSP_DObjRestoreHiddenPartBits(v8, v28, &partBits, weaponModelStartIndexes, (int)name, finalBoneCount[0]);
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
GUtilsSP::EntDetach
==============
*/
char GUtilsSP::EntDetach(GUtilsSP *this, gentity_s *ent, const char *modelName, scr_string_t tagName)
{
  const char *v4; 
  __int32 v5; 
  unsigned __int16 *attachModelNames; 
  int v8; 
  __int64 v9; 
  scr_string_t *attachTagNames; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  gentity_s *v21; 
  unsigned __int16 v22; 
  int v23; 
  unsigned __int16 *v24; 
  int v25; 
  __int64 v26; 
  scr_string_t *v27; 
  scr_string_t *v28; 
  unsigned int attachIgnoreCollision; 
  int v30; 
  int v31; 
  const DObj *ServerDObjForEnt; 
  XModel *Model; 
  int numBones; 
  const char *v36; 
  const XModel *v37; 
  const char *name; 
  signed __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  int v44; 
  unsigned int ModelRootBoneIndex; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned __int64 v48; 
  char v49; 
  unsigned __int64 v50; 
  DObj *v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  int finalBoneCount; 
  int firstModelBoneCount[2]; 
  DObjPartBits partBits; 
  gentity_s *enta; 

  v4 = modelName;
  finalBoneCount = tagName;
  *(_QWORD *)firstModelBoneCount = modelName;
  v5 = tagName;
  enta = ent;
  Profile_Begin(306);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 917, ASSERT_TYPE_ASSERT, "( modelName )", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 918, ASSERT_TYPE_ASSERT, "( tagName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "tagName != NULL_SCR_STRING") )
    __debugbreak();
  if ( *v4 )
  {
    attachModelNames = ent->attachModelNames;
    v8 = 0;
    v9 = 0i64;
    attachTagNames = ent->attachTagNames;
    v11 = 0x7FFFFFFFi64;
    while ( *attachTagNames != v5 )
    {
LABEL_33:
      ++v8;
      ++v9;
      ++attachTagNames;
      ++attachModelNames;
      if ( v9 >= 28 )
        goto LABEL_34;
    }
    v12 = *attachModelNames;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v13 = 0x7FFFFFFFi64;
    v14 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v12);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v15 = &v14[-*(_QWORD *)firstModelBoneCount];
    do
    {
      v16 = (unsigned __int8)v4[(_QWORD)v15];
      v17 = v13;
      v18 = *(unsigned __int8 *)v4++;
      --v13;
      if ( !v17 )
        break;
      if ( v16 != v18 )
      {
        v19 = v16 + 32;
        if ( (unsigned int)(v16 - 65) > 0x19 )
          v19 = v16;
        v16 = v19;
        v20 = v18 + 32;
        if ( (unsigned int)(v18 - 65) > 0x19 )
          v20 = v18;
        if ( v16 != v20 )
        {
          v4 = *(const char **)firstModelBoneCount;
          v5 = finalBoneCount;
          goto LABEL_33;
        }
      }
    }
    while ( v16 );
    v21 = enta;
    if ( !enta->attachModelNames[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 934, ASSERT_TYPE_ASSERT, "(ent->attachModelNames[i])", (const char *)&queryFormat, "ent->attachModelNames[i]") )
      __debugbreak();
    v22 = enta->attachModelNames[v8];
    v23 = v8 + 1;
    enta->attachModelNames[v8] = 0;
    Scr_SetString(&v21->attachTagNames[v8], (scr_string_t)0);
    if ( v8 < 27 )
    {
      v24 = &v21->attachModelNames[v9];
      v25 = __ROL4__(1, v8);
      v26 = (unsigned int)(27 - v8);
      v27 = &v21->attachTagNames[v9];
      v8 = 27;
      do
      {
        v28 = v27 + 1;
        *v24 = v24[1];
        *v27 = v27[1];
        attachIgnoreCollision = v21->attachIgnoreCollision;
        v30 = __ROL4__(v25, 1);
        if ( (v30 & attachIgnoreCollision) != 0 )
          v31 = v25 | attachIgnoreCollision;
        else
          v31 = ~v25 & attachIgnoreCollision;
        ++v24;
        v21->attachIgnoreCollision = v31;
        v25 = v30;
        v27 = v28;
        --v26;
      }
      while ( v26 );
    }
    v21->attachModelNames[v8] = 0;
    v21->attachTagNames[v8] = 0;
    v21->attachIgnoreCollision &= ~(1 << v8);
    ServerDObjForEnt = Com_GetServerDObjForEnt(v21);
    if ( ServerDObjForEnt )
    {
      Model = G_Utils_GetModel(v22);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = Model->numBones;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v36 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v22);
      v37 = DObjGetModel(ServerDObjForEnt, v23);
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      name = v37->name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v39 = name - v36;
      do
      {
        v40 = (unsigned __int8)v36[v39];
        v41 = v11;
        v42 = *(unsigned __int8 *)v36++;
        --v11;
        if ( !v41 )
          break;
        if ( v40 != v42 )
        {
          v43 = v40 + 32;
          if ( (unsigned int)(v40 - 65) > 0x19 )
            v43 = v40;
          v40 = v43;
          v44 = v42 + 32;
          if ( (unsigned int)(v42 - 65) > 0x19 )
            v44 = v42;
          if ( v40 != v44 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 961, ASSERT_TYPE_ASSERT, "(!I_stricmp( XModelGetName( DObjGetModel( obj, indexOfRemovedModelInObj ) ), G_CString_GetModelName( removedModelIndex ) ))", (const char *)&queryFormat, "!I_stricmp( XModelGetName( DObjGetModel( obj, indexOfRemovedModelInObj ) ), G_CString_GetModelName( removedModelIndex ) )") )
              __debugbreak();
            break;
          }
        }
      }
      while ( v40 );
      ModelRootBoneIndex = DObjGetModelRootBoneIndex(ServerDObjForEnt, v23);
      DObjGetHidePartBits(ServerDObjForEnt, &partBits);
      v46 = ModelRootBoneIndex + numBones;
      v47 = DObjNumBones(ServerDObjForEnt);
      if ( ModelRootBoneIndex + numBones < v47 )
      {
        do
        {
          if ( v46 >= 0x100 )
          {
            LODWORD(v53) = 256;
            LODWORD(v52) = v46;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v52, v53) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v46 & 0x1F)) & partBits.array[(unsigned __int64)v46 >> 5]) != 0 )
          {
            if ( ModelRootBoneIndex >= 0x100 )
            {
              LODWORD(v55) = 256;
              LODWORD(v54) = ModelRootBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v54, v55) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)ModelRootBoneIndex >> 5] |= 0x80000000 >> (ModelRootBoneIndex & 0x1F);
          }
          else
          {
            if ( ModelRootBoneIndex >= 0x100 )
            {
              LODWORD(v55) = 256;
              LODWORD(v54) = ModelRootBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v54, v55) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)ModelRootBoneIndex >> 5] &= ~(0x80000000 >> (ModelRootBoneIndex & 0x1F));
          }
          ++ModelRootBoneIndex;
          ++v46;
        }
        while ( v46 < v47 );
      }
      if ( ModelRootBoneIndex < v47 )
      {
        v48 = ModelRootBoneIndex;
        do
        {
          if ( ModelRootBoneIndex >= 0x100 )
          {
            LODWORD(v55) = 256;
            LODWORD(v54) = ModelRootBoneIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v54, v55) )
              __debugbreak();
          }
          v49 = ModelRootBoneIndex & 0x1F;
          v50 = v48 >> 5;
          ++ModelRootBoneIndex;
          ++v48;
          partBits.array[v50] &= ~(0x80000000 >> v49);
        }
        while ( ModelRootBoneIndex < v47 );
      }
    }
    G_UtilsSP_DObjUpdateInternal(v21, v21->r.isLinked, (int *)&enta, firstModelBoneCount, &finalBoneCount);
    v51 = Com_GetServerDObjForEnt(v21);
    if ( v51 )
      DObjSetHidePartBits(v51, &partBits);
    Profile_EndInternal(NULL);
    return 1;
  }
  else
  {
LABEL_34:
    Profile_EndInternal(NULL);
    return 0;
  }
}

/*
==============
GUtilsSP::EntDetachAll
==============
*/
void GUtilsSP::EntDetachAll(GUtilsSP *this, gentity_s *ent)
{
  unsigned __int16 *attachModelNames; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  const DObj *ServerDObjForEnt; 
  const DObj *v13; 
  unsigned int v14; 
  const XModel *Model; 
  unsigned int numBones; 
  unsigned __int64 v17; 
  char v18; 
  unsigned __int64 v19; 
  DObj *v20; 
  __int64 v21; 
  __int64 v22; 
  int finalBoneCount; 
  int firstModelBoneCount; 
  DObjPartBits partBits; 
  int weaponModelStartIndexes[4]; 

  Profile_Begin(309);
  attachModelNames = ent->attachModelNames;
  v4 = 0i64;
  v5 = 28i64;
  do
  {
    *attachModelNames = 0;
    Scr_SetString(&ent->attachTagNames[v4++], (scr_string_t)0);
    ++attachModelNames;
    --v5;
  }
  while ( v5 );
  v6 = 0i64;
  _RBX = ent->attachWeapons;
  v8 = 4i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&_RBX->weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    Scr_SetString(&ent->attachWeaponTagNames[v6++], (scr_string_t)0);
    ++_RBX;
    --v8;
  }
  while ( v8 );
  ent->attachIgnoreCollision = 0;
  ent->attachModelIsOnBack = 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v13 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    DObjGetHidePartBits(ServerDObjForEnt, &partBits);
    v14 = DObjNumBones(v13);
    Model = DObjGetModel(v13, 0);
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numBones = Model->numBones;
    if ( numBones < v14 )
    {
      v17 = numBones;
      do
      {
        if ( numBones >= 0x100 )
        {
          LODWORD(v22) = 256;
          LODWORD(v21) = numBones;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v21, v22) )
            __debugbreak();
        }
        v18 = numBones & 0x1F;
        v19 = v17 >> 5;
        ++numBones;
        ++v17;
        partBits.array[v19] &= ~(0x80000000 >> v18);
      }
      while ( numBones < v14 );
    }
  }
  G_UtilsSP_DObjUpdateInternal(ent, ent->r.isLinked, weaponModelStartIndexes, &firstModelBoneCount, &finalBoneCount);
  if ( v13 )
  {
    v20 = Com_GetServerDObjForEnt(ent);
    if ( v20 )
      DObjSetHidePartBits(v20, &partBits);
  }
  Profile_EndInternal(NULL);
}

/*
==============
GUtilsSP::EntityStateSetPartBits
==============
*/
void GUtilsSP::EntityStateSetPartBits(GUtilsSP *this, gentity_s *ent, const DObjPartBits *partBits)
{
  unsigned int v5; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 763, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v5 = 0;
  _RDI = &ent->s.partBits;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v5;
  }
  while ( v5 < 2 );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
GUtilsSP::FreeEntity
==============
*/
void GUtilsSP::FreeEntity(GUtilsSP *this, gentity_s *ed)
{
  const scrContext_t *v4; 
  nav_space_s *SpaceByEntity; 
  gentity_s *i; 
  __int64 number; 
  int entnum; 
  int v9; 
  const DObj *ServerDObjForEnt; 
  __int16 v11; 
  unsigned int runtimeInstanceCount; 
  XAnimTree *pAnimTree; 
  unsigned int v14; 
  Ai_Asm *v15; 
  actor_s *actor; 
  sentient_s *sentient; 
  actor_s *j; 
  entityType_s eType; 
  int useCount; 
  const char *v24; 
  AIActorInterface v25; 
  AIActorInterface *v26; 
  AIActorInterface v27; 
  AIActorInterface *v28; 

  if ( !ed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1146, ASSERT_TYPE_ASSERT, "( ed )", (const char *)&queryFormat, "ed") )
    __debugbreak();
  Profile_Begin(303);
  v4 = ScriptContext_Server();
  if ( ScriptContext_HasTimeArrayId(v4) )
    GScr_Notify(ed, scr_const.entitydeleted, 0);
  if ( Path_IsDynamicBlockingEntity(ed) )
    Path_ConnectPathsForEntity(ed);
  if ( ed->s.eType == ET_SCRIPTMOVER )
  {
    SpaceByEntity = Nav_GetSpaceByEntity(ed);
    if ( SpaceByEntity )
      Nav_CleanupAndDestroySpace(SpaceByEntity);
  }
  G_UtilsSP_EntUnlinkFree(ed);
  for ( i = ed->tagChildren; i; i = ed->tagChildren )
  {
    if ( !i->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1172, ASSERT_TYPE_ASSERT, "(ed->tagChildren->tagInfo)", (const char *)&queryFormat, "ed->tagChildren->tagInfo") )
      __debugbreak();
    G_UtilsSP_EntUnlinkFree(ed->tagChildren);
  }
  SV_UnlinkEntity(ed);
  number = ed->s.number;
  entnum = level.cachedTagMat.entnum;
  if ( (_DWORD)number == level.cachedTagMat.entnum )
    entnum = 2047;
  level.cachedTagMat.entnum = entnum;
  v9 = level.cachedEntTargetTagMat.entnum;
  if ( (_DWORD)number == level.cachedEntTargetTagMat.entnum )
    v9 = 2047;
  level.cachedEntTargetTagMat.entnum = v9;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ed);
  if ( ServerDObjForEnt && ServerDObjForEnt->tree )
    XAnimClearTree(ServerDObjForEnt);
  G_PlayerUse_SetEntityUsable(ed, 0);
  v11 = ed->s.number;
  if ( ed->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)v11, "signed", v11) )
    __debugbreak();
  G_Trigger_UnRegisterMathTrigger(v11);
  GMissile::UnRegisterMissileEntity(ed->s.number);
  GMissile::UnRegisterMissileEventEntity(ed->s.number);
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(ed) < runtimeInstanceCount )
    ScriptableSv_UnlinkReservedScriptableEntity(ed);
  G_Utils_DestroyEntityPhysics(ed);
  Com_SafeServerDObjFree(number);
  pAnimTree = ed->pAnimTree;
  if ( pAnimTree )
  {
    Com_XAnimFreeSmallTree(pAnimTree);
    ed->pAnimTree = NULL;
  }
  G_PhysicsCharacterProxy_RemoveCharacter(ed);
  if ( ((ed->s.eType - 19) & 0xFFFD) == 0 )
  {
    ScriptableCommon_AssertCountsInitialized();
    v14 = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(ed) < v14 )
      ScriptableSv_UnlinkReservedScriptableEntity(ed);
  }
  AI_BT_FreeTreeInstance(number);
  v15 = Ai_Asm::Singleton();
  Ai_Asm::FreeInstance(v15, NULL, number);
  actor = ed->actor;
  if ( actor )
  {
    AIActorInterface::AIActorInterface(&v27);
    v28 = NULL;
    AIActorInterface::SetActor(&v27, actor);
    v28 = &v27;
    v27.Free(&v27);
    if ( ed->actor )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1230, ASSERT_TYPE_ASSERT, "(ed->actor == 0)", (const char *)&queryFormat, "ed->actor == NULL") )
        __debugbreak();
    }
  }
  sentient = ed->sentient;
  if ( sentient )
  {
    Sentient_Free(sentient);
    if ( ed->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1236, ASSERT_TYPE_ASSERT, "(ed->sentient == 0)", (const char *)&queryFormat, "ed->sentient == NULL") )
      __debugbreak();
  }
  else
  {
    this->FreeEntityRefs(this, ed);
  }
  Actor_EventListener_RemoveEntity(number);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( (ed->flags.m_flags[1] & 0x10) != 0 )
  {
    _RAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllTeamFlags() : Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+0D8h+var_60.baseclass_0.baseclass_0.__vftable], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  [rsp+0D8h+var_60.baseclass_0.m_pAI], xmm1
    }
    LODWORD(v27.m_pAI) = _RAX->array[6];
    for ( j = AIActorInterface::FirstActor((const bitarray<224> *)&v27); j; j = AIActorInterface::NextActor(j, (const bitarray<224> *)&v27) )
    {
      if ( j->turret.pTurret == ed )
      {
        AIActorInterface::AIActorInterface(&v25);
        v26 = NULL;
        AIActorInterface::SetActor(&v25, j);
        v26 = &v25;
        v25.StopUseTurret(&v25);
        if ( j->turret.pTurret )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1255, ASSERT_TYPE_ASSERT, "(pActor->turret.pTurret == 0)", (const char *)&queryFormat, "pActor->turret.pTurret == NULL") )
            __debugbreak();
        }
      }
    }
  }
  if ( ed->s.eType == ET_ACTOR_CORPSE )
    ActorCorpse_Free(ed);
  if ( ed->turretHandle.m_objIndex )
  {
    G_TurretSP_Free(ed);
    if ( ed->turretHandle.m_objIndex )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1266, ASSERT_TYPE_ASSERT, "( !ed->turretHandle.IsDefined() )", (const char *)&queryFormat, "!ed->turretHandle.IsDefined()") )
        __debugbreak();
    }
  }
  if ( ed->vehicle )
  {
    G_Vehicle_FreeEntity(ed);
    if ( ed->vehicle )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1272, ASSERT_TYPE_ASSERT, "(ed->vehicle == 0)", (const char *)&queryFormat, "ed->vehicle == NULL") )
        __debugbreak();
    }
  }
  eType = ed->s.eType;
  if ( eType == ET_CLIENT_CHARACTER )
  {
    G_ClientCharacter_Free(ed);
    eType = ed->s.eType;
  }
  if ( eType == ET_RAGDOLL_CONSTRAINT )
    G_RagdollConstraintEntity_NotifyConstraintFree(ed);
  if ( BG_IsCorpseEntity(&ed->s) )
    G_RagdollConstraintEntity_NotifyCorpseFree(ed);
  if ( ed->s.eType == ET_COVERWALL )
    G_CoverWall_Free(ed);
  if ( G_HudOutline_IsEntHudOutlineEnabled(ed) )
    G_HudOutline_FreeForEnt(ed);
  EntHandleDissociate(ed);
  if ( !ed->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1302, ASSERT_TYPE_ASSERT, "(ed->r.isInUse)", (const char *)&queryFormat, "ed->r.isInUse") )
    __debugbreak();
  GScr_FreeEntity(ed);
  if ( ed->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1305, ASSERT_TYPE_ASSERT, "(ed->classname == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ed->classname == NULL_SCR_STRING") )
    __debugbreak();
  useCount = ed->useCount;
  if ( ed->tagChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1308, ASSERT_TYPE_ASSERT, "( ed->tagChildren == 0 )", (const char *)&queryFormat, "ed->tagChildren == NULL") )
    __debugbreak();
  G_Utils_ClearEntity(ed);
  if ( (char *)ed - (char *)level.gentities >= 1456 )
  {
    if ( level.lastFreeEnt )
      level.lastFreeEnt->nextFree = ed;
    else
      level.firstFreeEnt = ed;
    level.lastFreeEnt = ed;
    ed->nextFree = NULL;
  }
  ed->useCount = useCount + 1;
  if ( ed->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1323, ASSERT_TYPE_ASSERT, "(!ed->r.isInUse)", (const char *)&queryFormat, "!ed->r.isInUse") )
    __debugbreak();
  g_entityIsInUse[number] = 0;
  if ( !Com_ErrorEntered() && SND_SV_CheckAndClearEntityHasParams(number) )
  {
    v24 = j_va("sfreeent %d", (unsigned int)number);
    SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v24);
  }
  Profile_EndInternal(NULL);
}

/*
==============
GUtilsSP::FreeEntityRefs
==============
*/
void GUtilsSP::FreeEntityRefs(GUtilsSP *this, gentity_s *ed)
{
  G_Utils_FreeEntityRefsCommon(ed);
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( (ed->flags.m_flags[1] & 0x20) != 0 )
    G_Targets_Remove(ed);
}

/*
==============
G_DemoSP_LoadFreeEntities
==============
*/
void G_DemoSP_LoadFreeEntities(unsigned __int8 *buf)
{
  gentity_s *v2; 
  unsigned __int8 *v3; 
  gentity_s *v4; 

  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1372, ASSERT_TYPE_ASSERT, "(buf)", (const char *)&queryFormat, "buf") )
    __debugbreak();
  v2 = *(gentity_s **)buf;
  level.firstFreeEnt = v2;
  level.lastFreeEnt = (gentity_s *)*((_QWORD *)buf + 1);
  if ( v2 )
  {
    v3 = buf + 16;
    do
    {
      v4 = *(gentity_s **)v3;
      v3 += 8;
      v2->nextFree = v4;
      v2 = v4;
    }
    while ( v4 );
  }
}

/*
==============
G_DemoSP_SaveFreeEntities
==============
*/
__int64 G_DemoSP_SaveFreeEntities(unsigned __int8 *buf)
{
  gentity_s *firstFreeEnt; 
  __int64 result; 
  unsigned __int8 *v3; 

  if ( buf )
  {
    *(_QWORD *)buf = level.firstFreeEnt;
    *((_QWORD *)buf + 1) = level.lastFreeEnt;
  }
  firstFreeEnt = level.firstFreeEnt;
  result = 16i64;
  if ( level.firstFreeEnt )
  {
    v3 = buf + 16;
    do
    {
      if ( buf )
        *(_QWORD *)v3 = firstFreeEnt->nextFree;
      firstFreeEnt = firstFreeEnt->nextFree;
      result = (unsigned int)(result + 8);
      v3 += 8;
    }
    while ( firstFreeEnt );
  }
  return result;
}

/*
==============
G_UtilsSP_DObjDevCheckUpdate
==============
*/
void G_UtilsSP_DObjDevCheckUpdate(gentity_s *ent)
{
  gentity_s *v1; 
  const DObj *ServerDObjForEnt; 
  int Index; 
  int v4; 
  XCompositeModelDef *CompositeModel; 
  int model; 
  bool v7; 
  XAnimTree *EntAnimTree; 
  XModel *v9; 
  const XModel *v10; 
  const char *v11; 
  bool v12; 
  signed int v13; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int64 v16; 
  AttachmentSlot v17; 
  __int64 v18; 
  const WeaponAttachment *WeaponPrimaryAttachment; 
  XModel *AttachmentModel; 
  scr_string_t *v21; 
  __int64 v22; 
  __int16 v23; 
  __int64 v24; 
  const WeaponAttachment *v25; 
  XModel *v26; 
  scr_string_t *attachTagNames; 
  int v28; 
  int v29; 
  unsigned __int16 *attachModelNames; 
  DObjModel *v31; 
  XModel *v32; 
  unsigned __int16 v33; 
  char *v34; 
  const char *v35; 
  const char **v36; 
  const char *v37; 
  scr_string_t boneName; 
  scr_string_t *v39; 
  Weapon *attachWeapons; 
  unsigned __int16 weaponIdx; 
  __int64 v42; 
  WeaponCompleteDef *v43; 
  __int64 v44; 
  __int64 v45; 
  AttachmentSlot v46; 
  __int64 v47; 
  const WeaponAttachment *v48; 
  XModel *v49; 
  const char **v50; 
  __int64 v51; 
  __int16 v52; 
  __int64 v53; 
  const WeaponAttachment *v54; 
  XModel *v55; 
  gentity_s *v56; 
  __int64 v57; 
  __int64 v58; 
  int v59; 
  DObjModel *v60; 
  XModel *v61; 
  const char *name; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  unsigned __int16 numModels; 
  scr_string_t *attachWeaponTagNames; 
  gentity_s *enta; 
  const char **p_name; 
  unsigned __int16 entnum; 
  __int64 v71; 
  XAnimTree *tree; 
  XModel *models[254]; 
  DObjModel dobjModels[254]; 

  v1 = ent;
  enta = ent;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  Index = G_XCompositeModel_GetIndex(v1);
  v4 = Index;
  if ( Index )
    CompositeModel = G_Utils_GetCompositeModel(Index);
  else
    CompositeModel = NULL;
  model = v1->model;
  p_name = &CompositeModel->name;
  if ( model )
  {
    DObjGetCreateParms(ServerDObjForEnt, dobjModels, &numModels, &tree, &entnum);
    EntAnimTree = G_Utils_GetEntAnimTree(v1);
    if ( tree != EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 570, ASSERT_TYPE_ASSERT, "( tree == G_Utils_GetEntAnimTree( ent ) )", "DObj for ent #%i data mismatch: animTree does not match animTree stored on the entity", v1->s.number) )
      __debugbreak();
    v9 = G_Utils_GetModel(model);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 575, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    v10 = dobjModels[0].model;
    if ( dobjModels[0].model != v9 )
    {
      if ( CompositeModel )
      {
        v11 = j_va(" This entity uses a composite model (%s).", CompositeModel->name);
        v10 = dobjModels[0].model;
      }
      else
      {
        v11 = (char *)&queryFormat.fmt + 3;
      }
      LODWORD(v63) = v1->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 579, ASSERT_TYPE_ASSERT, "( dobjModels[numModels].model == model )", "DObj for ent #%i data mismatch: dobj model[%i] (%s) does not match model stored on entity (%s).%s", v63, 0, v10->name, v9->name, v11) )
        __debugbreak();
    }
    if ( dobjModels[0].boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 580, ASSERT_TYPE_ASSERT, "(dobjModels[numModels].boneName == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "dobjModels[numModels].boneName == NULL_SCR_STRING") )
      __debugbreak();
    if ( dobjModels[0].ignoreCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 581, ASSERT_TYPE_ASSERT, "(!dobjModels[numModels].ignoreCollision)", (const char *)&queryFormat, "!dobjModels[numModels].ignoreCollision") )
      __debugbreak();
    v12 = v1->s.eType == ET_ITEM;
    models[0] = v9;
    v13 = 1;
    if ( v12 )
    {
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &v1->s);
      if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
      {
        LODWORD(v65) = 549;
        LODWORD(v64) = 1;
        LODWORD(v63) = WeaponForEntity->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 592, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( ( 550 - 1 ) )", "weapon.weaponIdx not in [1, ( MAX_WEAPONS - 1 )]\n\t%i not in [%i, %i]", v63, v64, v65) )
          __debugbreak();
      }
      attachWeaponTagNames = (scr_string_t *)BG_WeaponCompleteDef(WeaponForEntity, 0);
      v16 = 1i64;
      v17 = ATT_SLOT_RECEIVER;
      v18 = 0i64;
      do
      {
        WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(WeaponForEntity, v17);
        if ( WeaponPrimaryAttachment )
        {
          AttachmentModel = (XModel *)BG_GetAttachmentModel(WeaponPrimaryAttachment, WeaponForEntity->attachmentVariationIndices[v18], 0);
          if ( AttachmentModel )
          {
            if ( v16 >= 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 604, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
              __debugbreak();
            ++v13;
            models[v16++] = AttachmentModel;
          }
        }
        ++v17;
        ++v18;
      }
      while ( (unsigned int)v17 < ATT_SLOT_OTHER );
      if ( WeaponForEntity->weaponOthers )
      {
        v21 = attachWeaponTagNames;
        v22 = 0i64;
        v23 = 1;
        if ( *((_DWORD *)attachWeaponTagNames + 62) )
        {
          v24 = v13;
          do
          {
            if ( (WeaponForEntity->weaponOthers & (unsigned __int16)v23) != 0 )
            {
              if ( v24 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 617, ASSERT_TYPE_ASSERT, "(numModels < ( 32 ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_CHARACTER_SUBMODELS") )
                __debugbreak();
              v25 = *(const WeaponAttachment **)(*((_QWORD *)v21 + 32) + 8 * v22);
              if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 619, ASSERT_TYPE_SANITY, "( weaponAttachment )", (const char *)&queryFormat, "weaponAttachment") )
                __debugbreak();
              if ( (unsigned int)v22 >= 0x10 )
              {
                LODWORD(v64) = 16;
                LODWORD(v63) = v22;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v63, v64) )
                  __debugbreak();
              }
              if ( (unsigned int)(v22 + 13) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(v22 + 13), "unsigned", (unsigned int)(v22 + 13)) )
                __debugbreak();
              v26 = (XModel *)BG_GetAttachmentModel(v25, WeaponForEntity->attachmentVariationIndices[(unsigned __int8)(v22 + 13)], 0);
              if ( v26 )
              {
                if ( v24 >= 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 625, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
                  __debugbreak();
                ++v13;
                models[v24++] = v26;
              }
            }
            v22 = (unsigned int)(v22 + 1);
            v23 *= 2;
            v21 = attachWeaponTagNames;
          }
          while ( (unsigned int)v22 < *((_DWORD *)attachWeaponTagNames + 62) );
        }
      }
      v1 = enta;
    }
    attachTagNames = v1->attachTagNames;
    v28 = 0;
    attachWeaponTagNames = (scr_string_t *)&models[v13];
    v29 = 1;
    attachModelNames = v1->attachModelNames;
    v31 = &dobjModels[v13];
    do
    {
      if ( !*attachModelNames )
        break;
      v32 = G_Utils_GetModel(*attachModelNames);
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 640, ASSERT_TYPE_ASSERT, "(localModel)", (const char *)&queryFormat, "localModel") )
        __debugbreak();
      if ( v13 >= 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 641, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
        __debugbreak();
      v33 = numModels;
      if ( v13 >= numModels )
      {
        if ( p_name )
        {
          v34 = j_va(" This entity uses a composite model (%s).", *p_name);
          v33 = numModels;
          v35 = v34;
        }
        else
        {
          v35 = (char *)&queryFormat.fmt + 3;
        }
        LODWORD(v64) = v33;
        LODWORD(v63) = enta->s.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 643, ASSERT_TYPE_ASSERT, "( numModels < modelCount )", "DObj for ent #%i data mismatch: DObj has %i models, but found more while parsing ent->attachModelNames.%s", v63, v64, v35) )
          __debugbreak();
      }
      if ( !v31->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 644, ASSERT_TYPE_ASSERT, "(dobjModels[numModels].model)", (const char *)&queryFormat, "dobjModels[numModels].model") )
        __debugbreak();
      v36 = &v31->model->name;
      if ( v31->model != v32 )
      {
        if ( p_name )
        {
          v37 = j_va(" This entity uses a composite model (%s).", *p_name);
          v36 = &v31->model->name;
        }
        else
        {
          v37 = (char *)&queryFormat.fmt + 3;
        }
        LODWORD(v64) = v13;
        LODWORD(v63) = enta->s.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 646, ASSERT_TYPE_ASSERT, "( dobjModels[numModels].model == localModel )", "DObj for ent #%i data mismatch: dobj model[%i] (%s) does not match attach model stored on entity (%s).%s", v63, v64, *v36, v32->name, v37) )
          __debugbreak();
      }
      if ( !*attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 647, ASSERT_TYPE_ASSERT, "(ent->attachTagNames[i] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->attachTagNames[i] != NULL_SCR_STRING") )
        __debugbreak();
      boneName = v31->boneName;
      if ( boneName && boneName != *attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 648, ASSERT_TYPE_ASSERT, "((dobjModels[numModels].boneName == ( static_cast< scr_string_t >( 0 ) ) )|| (dobjModels[numModels].boneName == ent->attachTagNames[i] ))", (const char *)&queryFormat, "(dobjModels[numModels].boneName == NULL_SCR_STRING )|| (dobjModels[numModels].boneName == ent->attachTagNames[i] )") )
        __debugbreak();
      if ( v31->ignoreCollision != ((v29 & enta->attachIgnoreCollision) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 649, ASSERT_TYPE_ASSERT, "(dobjModels[numModels].ignoreCollision == ((ent->attachIgnoreCollision & (1 << i)) != 0))", (const char *)&queryFormat, "dobjModels[numModels].ignoreCollision == ((ent->attachIgnoreCollision & (1 << i)) != 0)") )
        __debugbreak();
      v39 = attachWeaponTagNames;
      ++v13;
      ++v31;
      v29 = __ROL4__(v29, 1);
      ++v28;
      ++attachModelNames;
      ++attachTagNames;
      *(_QWORD *)attachWeaponTagNames = v32;
      attachWeaponTagNames = v39 + 2;
    }
    while ( v28 < 28 );
    v71 = 4i64;
    attachWeapons = enta->attachWeapons;
    attachWeaponTagNames = enta->attachWeaponTagNames;
    do
    {
      weaponIdx = attachWeapons->weaponIdx;
      if ( attachWeapons->weaponIdx )
      {
        if ( (unsigned __int16)(weaponIdx - 1) > 0x224u )
        {
          LODWORD(v65) = 549;
          LODWORD(v64) = 1;
          LODWORD(v63) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 667, ASSERT_TYPE_ASSERT, "( 1 ) <= ( weapon.weaponIdx ) && ( weapon.weaponIdx ) <= ( ( 550 - 1 ) )", "weapon.weaponIdx not in [1, ( MAX_WEAPONS - 1 )]\n\t%i not in [%i, %i]", v63, v64, v65) )
            __debugbreak();
        }
        v42 = attachWeapons->weaponIdx;
        if ( (unsigned int)v42 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v64) = bg_lastParsedWeaponIndex;
          LODWORD(v63) = attachWeapons->weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v63, v64) )
            __debugbreak();
        }
        if ( !bg_weaponCompleteDefs[v42] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        v43 = bg_weaponCompleteDefs[v42];
        p_name = &v43->szInternalName;
        if ( v43->weapDef->worldModel )
        {
          if ( v13 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 672, ASSERT_TYPE_ASSERT, "(numModels < ( 32 ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_CHARACTER_SUBMODELS") )
            __debugbreak();
          v44 = v13++;
          models[v44] = v43->weapDef->worldModel;
        }
        v45 = v13;
        v46 = ATT_SLOT_RECEIVER;
        v47 = 0i64;
        do
        {
          v48 = BG_GetWeaponPrimaryAttachment(attachWeapons, v46);
          if ( v48 )
          {
            v49 = (XModel *)BG_GetAttachmentModel(v48, attachWeapons->attachmentVariationIndices[v47], 0);
            if ( v49 )
            {
              if ( v45 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 686, ASSERT_TYPE_ASSERT, "(numModels < ( 32 ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_CHARACTER_SUBMODELS") )
                __debugbreak();
              ++v13;
              models[v45++] = v49;
            }
          }
          ++v46;
          ++v47;
        }
        while ( (unsigned int)v46 < ATT_SLOT_OTHER );
        if ( attachWeapons->weaponOthers )
        {
          v50 = p_name;
          v51 = 0i64;
          v52 = 1;
          if ( *((_DWORD *)p_name + 62) )
          {
            v53 = v13;
            do
            {
              if ( (attachWeapons->weaponOthers & (unsigned __int16)v52) != 0 )
              {
                v54 = *(const WeaponAttachment **)&v50[32][8 * v51];
                if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 700, ASSERT_TYPE_SANITY, "( weaponAttachment )", (const char *)&queryFormat, "weaponAttachment") )
                  __debugbreak();
                if ( (unsigned int)v51 >= 0x10 )
                {
                  LODWORD(v64) = 16;
                  LODWORD(v63) = v51;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 1809, ASSERT_TYPE_ASSERT, "(unsigned)( otherIndex ) < (unsigned)( 16 )", "otherIndex doesn't index MAX_ATTACHMENT_OTHERS\n\t%i not in [0, %i)", v63, v64) )
                    __debugbreak();
                }
                if ( (unsigned int)(v51 + 13) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(v51 + 13), "unsigned", (unsigned int)(v51 + 13)) )
                  __debugbreak();
                v55 = (XModel *)BG_GetAttachmentModel(v54, attachWeapons->attachmentVariationIndices[(unsigned __int8)(v51 + 13)], 0);
                if ( v55 )
                {
                  if ( v53 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 706, ASSERT_TYPE_ASSERT, "(numModels < ( 32 ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_CHARACTER_SUBMODELS") )
                    __debugbreak();
                  ++v13;
                  models[v53++] = v55;
                }
              }
              v51 = (unsigned int)(v51 + 1);
              v52 *= 2;
              v50 = p_name;
            }
            while ( (unsigned int)v51 < *((_DWORD *)p_name + 62) );
          }
        }
        v56 = enta;
        v57 = v13;
        v13 += G_UtilsSP_GetNumHandIKMarkers(enta, attachWeapons, *attachWeaponTagNames, (const XModel **)models, v13);
        if ( v13 - (int)v57 > 0 )
          memset(&models[v57], 0, 8i64 * (v13 - (int)v57));
      }
      else
      {
        v56 = enta;
      }
      ++attachWeaponTagNames;
      ++attachWeapons;
      --v71;
    }
    while ( v71 );
    if ( !v56->client && v13 != numModels )
    {
      Com_PrintError(1, "DObj Models:\n");
      v58 = 0i64;
      v59 = 0;
      if ( numModels )
      {
        v60 = dobjModels;
        do
        {
          Com_PrintError(1, "%s\n", v60->model->name);
          ++v60;
          ++v59;
        }
        while ( v59 < numModels );
      }
      Com_PrintError(1, "\n");
      Com_PrintError(1, "Local Check Models:\n");
      if ( v13 > 0 )
      {
        do
        {
          v61 = models[v58];
          if ( v61 )
            name = v61->name;
          else
            name = "<ik tag>";
          Com_PrintError(1, "%s\n", name);
          ++v58;
        }
        while ( v58 < v13 );
      }
      if ( v13 != numModels )
      {
        v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 736, ASSERT_TYPE_ASSERT, "(numModels == modelCount)", "%s\n\tG_UtilsSP_DObjDevCheckUpdate failed to get the same modelset as the dobj currently has. See output above.", "numModels == modelCount");
LABEL_156:
        if ( v7 )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 563, ASSERT_TYPE_ASSERT, "(!obj)", (const char *)&queryFormat, "!obj") )
      __debugbreak();
    if ( v4 )
    {
      LODWORD(v63) = v1->s.number;
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 564, ASSERT_TYPE_ASSERT, "( compositeModelIndex == 0 )", "data mismatch for ent #%i: ent->model is zero, but its compositeModelIndex is non-zero.", v63);
      goto LABEL_156;
    }
  }
}

/*
==============
G_UtilsSP_DObjRestoreHiddenPartBits
==============
*/
void G_UtilsSP_DObjRestoreHiddenPartBits(gentity_s *ent, DObj *obj, DObjPartBits *partBits, int *weaponIdx, int firstBone, int lastBone)
{
  int *v6; 
  DObj *ServerDObjForEnt; 
  unsigned int v10; 
  char v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( obj )
  {
    v6 = weaponIdx;
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    if ( ServerDObjForEnt )
    {
      v10 = firstBone;
      if ( firstBone < lastBone )
      {
        do
        {
          if ( v10 >= 0x100 )
          {
            LODWORD(v14) = 256;
            LODWORD(v13) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
              __debugbreak();
          }
          v11 = v10 & 0x1F;
          v12 = (unsigned __int64)v10++ >> 5;
          partBits->array[v12] &= ~(0x80000000 >> v11);
        }
        while ( (int)v10 < lastBone );
        v6 = weaponIdx;
      }
      DObjSetHidePartBits(ServerDObjForEnt, partBits);
      G_UtilsSP_UpdateWeaponBones(ent, ServerDObjForEnt, v6);
    }
  }
}

/*
==============
G_UtilsSP_DObjUpdateAndKeepHiddenPartBits
==============
*/
void G_UtilsSP_DObjUpdateAndKeepHiddenPartBits(gentity_s *ent, int link)
{
  const DObj *ServerDObjForEnt; 
  DObj *v5; 
  int finalBoneCount; 
  int firstModelBoneCount; 
  DObjPartBits partBits; 
  int weaponModelStartIndexes[4]; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 525, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ServerDObjForEnt )
    DObjGetHidePartBits(ServerDObjForEnt, &partBits);
  G_UtilsSP_DObjUpdateInternal(ent, link, weaponModelStartIndexes, &firstModelBoneCount, &finalBoneCount);
  v5 = Com_GetServerDObjForEnt(ent);
  G_UtilsSP_DObjRestoreHiddenPartBits(ent, v5, &partBits, weaponModelStartIndexes, firstModelBoneCount, finalBoneCount);
}

/*
==============
G_UtilsSP_DObjUpdateInternal
==============
*/
void G_UtilsSP_DObjUpdateInternal(gentity_s *ent, int link, int *weaponModelStartIndexes, int *firstModelBoneCount, int *finalBoneCount)
{
  int *v6; 
  int *v7; 
  int model; 
  Vehicle *v10; 
  const XModel *v11; 
  unsigned __int16 *attachModelNames; 
  unsigned __int16 v13; 
  int v14; 
  scr_string_t *attachTagNames; 
  int v16; 
  int v17; 
  XModel *v18; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const XModel *v21; 
  int v22; 
  char *v23; 
  __int64 v24; 
  Weapon *attachWeapons; 
  int *v26; 
  char *v27; 
  __int64 v28; 
  unsigned __int16 weaponIdx; 
  bool v30; 
  bool v31; 
  WeaponDef **v32; 
  WeaponDef *v33; 
  scr_string_t v34; 
  const WeaponDef *v35; 
  int *v36; 
  gentity_s *v37; 
  bool IsCharacterEntity; 
  DObj *v39; 
  Vehicle *vehicle; 
  int v41; 
  DObjModel *outDObjModel; 
  DObjModel *dobjModels; 
  unsigned __int16 outNumModels[2]; 
  int v45; 
  int *weaponModelStartIndexesa; 
  int *v47; 
  gentity_s *enta; 
  XAnimTree *tree; 
  int *v50; 
  int weaponModelCount[2]; 
  __int64 v52; 
  DObjModel outDObjModels; 
  char v54; 

  enta = ent;
  v6 = firstModelBoneCount;
  v50 = finalBoneCount;
  v47 = firstModelBoneCount;
  v7 = weaponModelStartIndexes;
  weaponModelStartIndexesa = weaponModelStartIndexes;
  v45 = link;
  Profile_Begin(307);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 357, ASSERT_TYPE_ASSERT, "(weaponModelStartIndexes)", (const char *)&queryFormat, "weaponModelStartIndexes") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 358, ASSERT_TYPE_ASSERT, "(firstModelBoneCount)", (const char *)&queryFormat, "firstModelBoneCount") )
    __debugbreak();
  if ( !finalBoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 359, ASSERT_TYPE_ASSERT, "(finalBoneCount)", (const char *)&queryFormat, "finalBoneCount") )
    __debugbreak();
  *(_QWORD *)v7 = -1i64;
  *(_QWORD *)weaponModelCount = 0i64;
  v52 = 0i64;
  *((_QWORD *)v7 + 1) = -1i64;
  G_Utils_DObjSafeFree(ent);
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 315, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  switch ( ent->s.eType )
  {
    case ET_PLAYER:
    case ET_PLAYER_CORPSE:
    case ET_INVISIBLE:
    case ET_AGENT:
    case ET_AGENT_CORPSE:
    case ET_ACTOR:
    case ET_ACTOR_CORPSE:
      break;
    default:
      G_Utils_DObjScriptableSafeFree(ent);
      break;
  }
  model = ent->model;
  if ( ent->model )
  {
    memset_0(&outDObjModels, 0, 0x4F60ui64);
    tree = G_Utils_GetEntAnimTree(ent);
    outNumModels[0] = 0;
    if ( G_XCompositeModel_GetIndex(ent) <= 0 )
    {
      v11 = G_Utils_GetModel(model);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 401, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      DObjInitModel(v11, (scr_string_t)0, 0, 0, NULL, &outDObjModels + outNumModels[0]);
      attachModelNames = ent->attachModelNames;
      v13 = outNumModels[0] + 1;
      v14 = 1;
      ++outNumModels[0];
      attachTagNames = ent->attachTagNames;
      v16 = 0;
      do
      {
        v17 = *attachModelNames;
        if ( !*attachModelNames )
          break;
        if ( v13 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 415, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
          __debugbreak();
        v18 = G_Utils_GetModel(v17);
        *((_QWORD *)&outDObjModels.model + 10 * outNumModels[0]) = v18;
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 417, ASSERT_TYPE_ASSERT, "(dobjModels[numModels].model)", (const char *)&queryFormat, "dobjModels[numModels].model") )
          __debugbreak();
        if ( !*attachTagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 418, ASSERT_TYPE_ASSERT, "(ent->attachTagNames[i] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->attachTagNames[i] != NULL_SCR_STRING") )
          __debugbreak();
        DObjInitModel(*((const XModel *const *)&outDObjModels.model + 10 * outNumModels[0]), *attachTagNames, (v14 & ent->attachIgnoreCollision) != 0, 0, NULL, &outDObjModels + outNumModels[0]);
        ++v16;
        v13 = outNumModels[0] + 1;
        v14 = __ROL4__(v14, 1);
        ++attachModelNames;
        ++outNumModels[0];
        ++attachTagNames;
      }
      while ( v16 < 28 );
      v6 = v47;
      v7 = weaponModelStartIndexesa;
    }
    else
    {
      G_XCompositeModel_DObjInit(ent, 254, outNumModels, &outDObjModels);
    }
    if ( ent->s.eType == ET_ITEM )
    {
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &ent->s);
      if ( (unsigned __int16)(WeaponForEntity->weaponIdx - 1) > 0x224u )
      {
        LODWORD(outDObjModel) = WeaponForEntity->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 427, ASSERT_TYPE_ASSERT, "( 1 ) <= ( r_weapon.weaponIdx ) && ( r_weapon.weaponIdx ) <= ( ( 550 - 1 ) )", "r_weapon.weaponIdx not in [1, ( MAX_WEAPONS - 1 )]\n\t%i not in [%i, %i]", outDObjModel, 1, 549) )
          __debugbreak();
      }
      BG_AddWeaponAttachmentModels(WeaponForEntity, WEAPON_HAND_DEFAULT, 0, 0, 0, 0, &outDObjModels, 0xFEu, outNumModels, NULL, NULL);
    }
    v21 = outDObjModels.model;
    if ( !outDObjModels.model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    *v6 = v21->numBones;
    v22 = 1;
    if ( outNumModels[0] > 1u )
    {
      v23 = &v54;
      do
      {
        v24 = *(_QWORD *)v23;
        if ( !*(_QWORD *)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        ++v22;
        *v6 += *(unsigned __int8 *)(v24 + 20);
        v23 += 80;
      }
      while ( v22 < outNumModels[0] );
      v7 = weaponModelStartIndexesa;
    }
    attachWeapons = ent->attachWeapons;
    v26 = v7;
    v27 = (char *)((char *)ent - (char *)v7);
    v47 = (int *)((char *)weaponModelCount - (char *)v7);
    v28 = 4i64;
    do
    {
      weaponIdx = attachWeapons->weaponIdx;
      if ( attachWeapons->weaponIdx )
      {
        v30 = 1;
        if ( weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(dobjModels) = bg_lastParsedWeaponIndex;
          LODWORD(outDObjModel) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", outDObjModel, dobjModels) )
            __debugbreak();
        }
        v31 = bg_weaponDefs[weaponIdx] == NULL;
        v32 = &bg_weaponDefs[weaponIdx];
        if ( v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        v33 = *v32;
        if ( BG_IsRiotShield(attachWeapons, 0) || v33->inventoryType == WEAPINVENTORY_OFFHAND && *(int *)((char *)v26 + (_QWORD)v27 + 1432) == scr_const.tag_accessory_right )
          v30 = 0;
        *v26 = outNumModels[0];
        v34 = *(int *)((char *)v26 + (_QWORD)v27 + 1432);
        v35 = BG_WeaponDef(attachWeapons, 0);
        if ( v35->worldModel )
        {
          if ( outNumModels[0] >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 73, ASSERT_TYPE_ASSERT, "(*numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "*numModels < DOBJ_MAX_SUBMODELS") )
            __debugbreak();
          DObjInitModel(v35->worldModel, v34, v30, 0, NULL, &outDObjModels + outNumModels[0]++);
          BG_AddWeaponAttachmentModels(attachWeapons, WEAPON_HAND_DEFAULT, 0, 0, v30, 0, &outDObjModels, 0xFEu, outNumModels, NULL, NULL);
        }
        *(int *)((char *)v26 + (_QWORD)v47) = outNumModels[0] - *v26;
      }
      ++attachWeapons;
      ++v26;
      --v28;
    }
    while ( v28 );
    v36 = weaponModelStartIndexesa;
    v37 = enta;
    G_UtilsSP_PlaceHandIKMarker(XANIM_IK_ACTOR_LEFT_HAND, level.tagIKTargetModelLeft, enta, weaponModelStartIndexesa, weaponModelCount, &outDObjModels, outNumModels);
    G_UtilsSP_PlaceHandIKMarker(XANIM_IK_ACTOR_RIGHT_HAND, level.tagIKTargetModelRight, v37, v36, weaponModelCount, &outDObjModels, outNumModels);
    IsCharacterEntity = BG_IsCharacterEntity(&v37->s);
    v39 = Com_ServerDObjCreate(&outDObjModels, outNumModels[0], tree, v37->s.number, IsCharacterEntity);
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, v37) )
      G_Utils_CreateEntityPhysics(v37);
    if ( G_Utils_ShouldCreateEntityScriptableFromDObj(v37) )
      G_Utils_CreateEntityDObjScriptable(v37);
    vehicle = v37->vehicle;
    if ( vehicle )
      G_Vehicle_InitBoneTags(vehicle);
    G_UpdateTagInfoOfChildren(v37, 1);
    if ( v45 )
      SV_LinkEntity(v37);
    v41 = DObjNumBones(v39);
    *v50 = v41;
    G_UtilsSP_UpdateWeaponBones(v37, v39, v36);
  }
  else
  {
    if ( G_XCompositeModel_GetIndex(ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 375, ASSERT_TYPE_ASSERT, "(G_XCompositeModel_GetIndex( ent ) == 0)", "%s\n\tWe shouldn't have a composite model if our modelIndex is 0.", "G_XCompositeModel_GetIndex( ent ) == 0") )
      __debugbreak();
    v10 = ent->vehicle;
    if ( v10 )
      G_Vehicle_InitBoneTags(v10);
    G_UpdateTagInfoOfChildren(ent, 0);
    if ( link )
      SV_LinkEntity(ent);
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_UtilsSP_DObjUpdateServerTime
==============
*/
__int64 G_UtilsSP_DObjUpdateServerTime(gentity_s *ent, int bNotify)
{
  unsigned int updated; 
  int ServerNotifyList; 
  __int64 v10; 
  Ai_Asm *v11; 
  bool ShouldProcessNotetracks; 
  unsigned int ScriptableIndexForEntity; 
  bool v14; 
  __int64 v16; 
  __int64 v17; 
  XAnimNotifySV *notifyList; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1069, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  ent->flags.m_flags[1] &= ~2u;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3a83126f; dtime
  }
  updated = SV_Game_DObjUpdateServerTime(ent, *(float *)&_XMM1, bNotify);
  ServerNotifyList = DObjGetServerNotifyList(&notifyList);
  v10 = ServerNotifyList;
  if ( !ServerNotifyList )
    return updated;
  v11 = Ai_Asm::Singleton();
  ShouldProcessNotetracks = Ai_Asm::ShouldProcessNotetracks(v11, ent->s.number);
  ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
  v14 = ScriptableIndexForEntity != -1;
  if ( ScriptableIndexForEntity == -1 && !ShouldProcessNotetracks )
    return updated;
  v16 = v10;
  if ( (int)v10 > 0 )
  {
    v17 = 0i64;
    do
    {
      if ( v14 )
        ScriptableSv_AnimNotetrackEvent(ent, notifyList[v17].noteName, notifyList[v17].notifyName);
      if ( ShouldProcessNotetracks )
        Ai_Asm::ProcessNotetrack(v11, ent->s.number, notifyList[v17].notifyName, notifyList[v17].noteName);
      ++v17;
    }
    while ( v17 < v16 );
  }
  return updated;
}

/*
==============
G_UtilsSP_EntUnlinkFree
==============
*/
void G_UtilsSP_EntUnlinkFree(gentity_s *ent)
{
  bool v2; 

  if ( ent->scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1124, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    MT_Free(ent->scripted, 0x60ui64);
    v2 = ent->s.eType == ET_SCRIPTMOVER;
    ent->scripted = NULL;
    if ( v2 )
      ent->s.lerp.u.anonymous.data[2] &= ~0x40u;
  }
  G_AllowEntUnlinkInCollision(1);
  G_EntUnlink(ent);
  G_AllowEntUnlinkInCollision(0);
}

/*
==============
G_UtilsSP_GetNumHandIKMarkers
==============
*/
__int64 G_UtilsSP_GetNumHandIKMarkers(const gentity_s *ent, const Weapon *weapon, const scr_string_t ikTag, const XModel **models, unsigned int numModels)
{
  const gentity_s *v5; 
  const XModel **v6; 
  const Weapon *v8; 
  __int64 v9; 
  unsigned int v10; 
  bool (__fastcall **p_checkOverrideCallback)(const XAnimIKTagRequest *); 
  bool IsRoboticIKEnabled; 
  unsigned int v14; 
  const XModel **v17; 
  const XModel *v18; 
  __int64 v19; 
  unsigned int v20; 
  bool (__fastcall **v21)(const XAnimIKTagRequest *); 
  char v22; 
  bool v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  XAnimIKTagRequest result; 
  _BYTE v32[64]; 

  v5 = ent;
  v6 = models;
  v26 = 0;
  v8 = weapon;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 121, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v9 = 0i64;
  if ( ikTag == scr_const.tag_weapon_right )
  {
    v10 = numModels;
    p_checkOverrideCallback = &g_IKTagTable[0][0].checkOverrideCallback;
    v27 = 0;
    do
    {
      IsRoboticIKEnabled = G_Utils_IsRoboticIKEnabled(v5);
      _RAX = XAnimIKSetupTagRequest(&result, v8, 0, IsRoboticIKEnabled, 0, 0);
      v14 = 0;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+118h+var_88], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups [rsp+118h+var_68], ymm1
      }
      if ( v10 )
      {
        v17 = v6;
        do
        {
          v18 = *v17;
          v19 = 0i64;
          if ( (*v17)->numBones )
          {
            while ( 2 )
            {
              v20 = 0;
              v21 = p_checkOverrideCallback;
              do
              {
                if ( v18->boneNames[v19] == *(_DWORD *)*(v21 - 1) && (!*v21 || (*v21)((const XAnimIKTagRequest *)v32) || !*v21) )
                {
                  v10 = numModels;
                  v22 = 1;
                  goto LABEL_19;
                }
                ++v20;
                v21 += 3;
              }
              while ( v20 < 6 );
              v19 = (unsigned int)(v19 + 1);
              if ( (unsigned int)v19 < v18->numBones )
                continue;
              break;
            }
            v10 = numModels;
          }
          ++v14;
          ++v17;
        }
        while ( v14 < v10 );
      }
      v22 = 0;
LABEL_19:
      v23 = v22 == 0;
      v24 = v27;
      v6 = models;
      v5 = ent;
      v8 = weapon;
      v25 = v26 + 1;
      if ( v23 )
        v25 = v26;
      p_checkOverrideCallback += 18;
      v26 = v25;
      ++v27;
    }
    while ( (unsigned int)(v24 + 1) < 2 );
    return v25;
  }
  return v9;
}

/*
==============
G_UtilsSP_PlaceHandIKMarker
==============
*/
void G_UtilsSP_PlaceHandIKMarker(const XAnimIKType hand, XModel *tagIKTargetModel, gentity_s *ent, int *weaponModelStartIndexes, int *weaponModelCount, DObjModel *dobjModels, unsigned __int16 *numModels)
{
  __int64 v9; 
  scr_string_t *attachWeaponTagNames; 
  __int64 v11; 
  IK_TAG_PRIORITIES priority; 
  bool IsRoboticIKEnabled; 
  int v15; 
  __int64 v18; 
  int *v19; 
  __int64 v20; 
  const IKTagTableType (*v21)[6]; 
  __int64 v22; 
  const XModel *v23; 
  __int64 v24; 
  const IKTagTableType *v25; 
  bool (__fastcall *checkOverrideCallback)(const XAnimIKTagRequest *); 
  __int64 v27; 
  __int64 v29; 
  __int64 v33; 
  int *v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  scr_string_t boneName; 
  int v39; 
  int v40; 
  int *v42; 
  __int64 v43; 
  XAnimIKTagRequest result; 
  _BYTE v46[64]; 

  v9 = hand;
  if ( hand >= XANIM_IK_ACTOR_LEFT_FOOT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 151, ASSERT_TYPE_ASSERT, "(hand < XANIM_IK_NUM_HAND_TYPES)", (const char *)&queryFormat, "hand < XANIM_IK_NUM_HAND_TYPES") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 152, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !weaponModelStartIndexes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 153, ASSERT_TYPE_ASSERT, "(weaponModelStartIndexes)", (const char *)&queryFormat, "weaponModelStartIndexes") )
    __debugbreak();
  if ( !weaponModelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 154, ASSERT_TYPE_ASSERT, "(weaponModelCount)", (const char *)&queryFormat, "weaponModelCount") )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 155, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 156, ASSERT_TYPE_ASSERT, "(numModels)", (const char *)&queryFormat, "numModels") )
    __debugbreak();
  attachWeaponTagNames = ent->attachWeaponTagNames;
  v11 = 0i64;
  v39 = 0;
  priority = NUM_IK_PRIORITIES;
  boneName = scr_const.tag_ik_loc_le;
  v37 = -1;
  while ( *attachWeaponTagNames != scr_const.tag_weapon_right )
  {
    v11 = (unsigned int)(v11 + 1);
    ++attachWeaponTagNames;
    v39 = v11;
    if ( (unsigned int)v11 >= 4 )
      return;
  }
  IsRoboticIKEnabled = G_Utils_IsRoboticIKEnabled(ent);
  _RAX = XAnimIKSetupTagRequest(&result, &ent->attachWeapons[v11], 0, IsRoboticIKEnabled, 0, 0);
  v15 = 0;
  v36 = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+158h+var_98], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
  }
  v18 = 4 * v11;
  v19 = &weaponModelCount[v11];
  v43 = v18;
  __asm { vmovups [rsp+158h+var_78], ymm1 }
  v42 = v19;
  if ( *v19 > 0 )
  {
    v20 = v9;
    v21 = g_IKTagTable;
    do
    {
      if ( priority == AKIMBO_IK_PRIORITY )
        break;
      v22 = 0i64;
      v40 = v15 + *(int *)((char *)weaponModelStartIndexes + v18);
      v23 = dobjModels[v40].model;
      if ( v23->numBones )
      {
        do
        {
          if ( priority == AKIMBO_IK_PRIORITY )
            break;
          v24 = 0i64;
          v25 = g_IKTagTable[v20];
          while ( 1 )
          {
            if ( v23->boneNames[v22] == *v25->tagName && priority > v25->priority )
            {
              checkOverrideCallback = v25->checkOverrideCallback;
              if ( !checkOverrideCallback || ((unsigned __int8 (__fastcall *)(_BYTE *, const IKTagTableType (*)[6]))checkOverrideCallback)(v46, v21) )
                break;
            }
            v24 = (unsigned int)(v24 + 1);
            ++v25;
            if ( (unsigned int)v24 >= 6 )
            {
              v21 = g_IKTagTable;
              goto LABEL_35;
            }
          }
          v21 = g_IKTagTable;
          v37 = v40;
          v35 = v24 + 6 * v20;
          priority = g_IKTagTable[0][v35].priority;
          boneName = *g_IKTagTable[0][v35].tagName;
LABEL_35:
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < v23->numBones );
        v15 = v36;
        v19 = v42;
      }
      v18 = v43;
      v36 = ++v15;
    }
    while ( v15 < *v19 );
    if ( priority < NUM_IK_PRIORITIES )
    {
      if ( (unsigned int)*numModels + 1 >= 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 200, ASSERT_TYPE_ASSERT, "(*numModels + 1 < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "*numModels + 1 < DOBJ_MAX_SUBMODELS") )
        __debugbreak();
      if ( v37 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 201, ASSERT_TYPE_ASSERT, "(bestModelIndex >= 0)", (const char *)&queryFormat, "bestModelIndex >= 0") )
        __debugbreak();
      v27 = *numModels;
      if ( v27 > v37 )
      {
        _RAX = &dobjModels[v27];
        v29 = v27 - v37;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymm1, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rax+50h], ymm0
            vmovups xmm0, xmmword ptr [rax+40h]
            vmovups ymmword ptr [rax+70h], ymm1
            vmovups xmmword ptr [rax+90h], xmm0
          }
          --_RAX;
          --v29;
        }
        while ( v29 );
      }
      DObjInitModel(tagIKTargetModel, boneName, 1, 0, NULL, &dobjModels[v37 + 1]);
      ++*numModels;
      ++*v19;
      v33 = (unsigned int)(v39 + 1);
      if ( (unsigned int)v33 < 4 )
      {
        v34 = &weaponModelStartIndexes[v33];
        do
        {
          if ( *v34 < 0 )
            break;
          if ( *v34 <= v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 222, ASSERT_TYPE_ASSERT, "(weaponModelStartIndexes[curWeapon] > bestModelIndex)", (const char *)&queryFormat, "weaponModelStartIndexes[curWeapon] > bestModelIndex") )
            __debugbreak();
          ++*v34;
          LODWORD(v33) = v33 + 1;
          ++v34;
        }
        while ( (unsigned int)v33 < 4 );
      }
    }
  }
}

/*
==============
G_UtilsSP_RegisterSoundWait
==============
*/
void G_UtilsSP_RegisterSoundWait(scrContext_t *scrContext, gentity_s *ent, unsigned __int16 index, scr_string_t notifyString, int stoppable)
{
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int time; 
  const char *v16; 
  const char *v17; 
  scr_string_t targetname; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  char *fmt; 
  double v32; 
  double v33; 
  scr_string_t to; 
  const char *v35; 
  char v36[1024]; 
  char buffer[1024]; 

  _RBX = ent;
  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1395, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  to = 0;
  Scr_SetString(&to, notifyString);
  if ( _RBX->snd_wait.notifyString )
  {
    if ( !_RBX->snd_wait.index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1402, ASSERT_TYPE_ASSERT, "(ent->snd_wait.index)", (const char *)&queryFormat, "ent->snd_wait.index") )
      __debugbreak();
    GScr_Notify(_RBX, _RBX->snd_wait.notifyString, 0);
    if ( !_RBX->snd_wait.stoppable || !stoppable )
    {
      v12 = _RBX->snd_wait.index;
      __asm
      {
        vmovaps [rsp+8F8h+var_58], xmm6
        vmovaps [rsp+8F8h+var_68], xmm7
        vmovaps [rsp+8F8h+var_78], xmm8
      }
      v13 = BG_ConfigStrings_ConfigStringOffset(0x96Eu, v12);
      SV_GetConfigstring(v13, buffer, 1024);
      v14 = BG_ConfigStrings_ConfigStringOffset(0x96Eu, index);
      SV_GetConfigstring(v14, v36, 1024);
      Scr_SetString(&to, (scr_string_t)0);
      time = level.time;
      v16 = SL_ConvertToString(to);
      v17 = SL_ConvertToString(_RBX->snd_wait.notifyString);
      targetname = _RBX->targetname;
      v35 = v17;
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+138h]
        vmovss  xmm7, dword ptr [rbx+134h]
        vmovss  xmm8, dword ptr [rbx+130h]
        vcvtss2sd xmm6, xmm6, xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vcvtss2sd xmm8, xmm8, xmm8
      }
      if ( targetname )
        v25 = SL_ConvertToString(targetname);
      else
        v25 = "<undefined>";
      v26 = SL_ConvertToString(_RBX->classname);
      __asm
      {
        vmovsd  [rsp+8F8h+var_8C8], xmm6
        vmovsd  [rsp+8F8h+var_8D0], xmm7
        vmovsd  [rsp+8F8h+fmt], xmm8
      }
      v27 = j_va("issued a second playsound with notification string before the first finished on entity %i classname %s targetname %s location %g %g %g old string %s alias %s new string %s alias %s at time %i\n", (unsigned int)_RBX->s.number, v26, v25, *(double *)&fmt, v32, v33, v35, buffer, v16, v36, time);
      Scr_Error(COM_ERR_3684, scrContext, v27);
      __asm
      {
        vmovaps xmm8, [rsp+8F8h+var_78]
        vmovaps xmm7, [rsp+8F8h+var_68]
        vmovaps xmm6, [rsp+8F8h+var_58]
      }
    }
  }
  Scr_SetString((scr_string_t *)&_RBX->snd_wait, to);
  Scr_SetString(&to, (scr_string_t)0);
  _RBX->snd_wait.index = index;
  _RBX->snd_wait.stoppable = stoppable;
}

/*
==============
G_UtilsSP_UpdateWeaponBones
==============
*/
void G_UtilsSP_UpdateWeaponBones(gentity_s *ent, DObj *obj, int *weaponModelStartIndexes)
{
  int *v3; 
  unsigned int v6; 
  int *v7; 
  unsigned int i; 
  scr_string_t *attachWeaponTagNames; 
  int stowedWeaponIndex; 
  int heldWeaponIndex; 
  int v15; 
  scr_string_t *v16; 
  __int64 j; 
  int k; 
  Weapon *attachWeapons; 
  Weapon r_stowedWeapon; 
  Weapon r_heldWeapon; 

  v3 = weaponModelStartIndexes;
  _RBP = ent;
  if ( !weaponModelStartIndexes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 287, ASSERT_TYPE_ASSERT, "(weaponModelStartIndexes)", (const char *)&queryFormat, "weaponModelStartIndexes") )
    __debugbreak();
  v6 = 0;
  v7 = v3;
  for ( i = 0; i < 4; ++i )
  {
    if ( *v7 >= 0 )
      BG_UpdatedWeaponBones(&_RBP->attachWeapons[i], obj, *v7);
    ++v7;
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 233, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 234, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 235, ASSERT_TYPE_ASSERT, "(weaponModelStartIndexes)", (const char *)&queryFormat, "weaponModelStartIndexes") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&_RBP->s) || BG_IsCorpseEntity(&_RBP->s) )
  {
    attachWeaponTagNames = _RBP->attachWeaponTagNames;
    __asm
    {
      vmovups ymm2, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    stowedWeaponIndex = -1;
    *(_DWORD *)&r_stowedWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    heldWeaponIndex = -1;
    *(_DWORD *)&r_heldWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    v15 = 0;
    __asm
    {
      vmovups ymmword ptr [rsp+118h+r_stowedWeapon.weaponIdx], ymm2
      vmovups xmmword ptr [rsp+118h+r_stowedWeapon.attachmentVariationIndices+5], xmm1
      vmovsd  qword ptr [rsp+118h+r_stowedWeapon.attachmentVariationIndices+15h], xmm0
      vmovups ymmword ptr [rsp+118h+r_heldWeapon.weaponIdx], ymm2
      vmovups xmmword ptr [rsp+118h+r_heldWeapon.attachmentVariationIndices+5], xmm1
      vmovsd  qword ptr [rsp+118h+r_heldWeapon.attachmentVariationIndices+15h], xmm0
    }
    v16 = _RBP->attachWeaponTagNames;
    for ( j = 0i64; j < 4; ++j )
    {
      if ( *v16 == scr_const.tag_weapon_right )
        break;
      ++v15;
      ++v16;
    }
    for ( k = 0; k < 4; ++k )
    {
      if ( *attachWeaponTagNames == scr_const.tag_stowed_chest )
        break;
      if ( *attachWeaponTagNames == scr_const.tag_stowed_chest2 )
        break;
      ++attachWeaponTagNames;
    }
    if ( v15 < 4 )
    {
      _RAX = 60i64 * v15;
      heldWeaponIndex = v3[v15];
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rbp+4A8h]
        vmovups xmm1, xmmword ptr [rax+rbp+4C8h]
        vmovups ymmword ptr [rsp+118h+r_heldWeapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr [rax+rbp+4D8h]
      }
      LODWORD(_RAX) = *(_DWORD *)&_RBP->attachWeapons[0].attachmentVariationIndices[_RAX + 29];
      __asm { vmovsd  qword ptr [rsp+118h+r_heldWeapon.attachmentVariationIndices+15h], xmm0 }
      *(_DWORD *)&r_heldWeapon.weaponCamo = _RAX;
      __asm { vmovups xmmword ptr [rsp+118h+r_heldWeapon.attachmentVariationIndices+5], xmm1 }
    }
    if ( k < 4 )
    {
      _RAX = 60i64 * k;
      stowedWeaponIndex = v3[k];
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+rbp+4A8h]
        vmovups xmm1, xmmword ptr [rax+rbp+4C8h]
        vmovups ymmword ptr [rsp+118h+r_stowedWeapon.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr [rax+rbp+4D8h]
      }
      LODWORD(_RAX) = *(_DWORD *)&_RBP->attachWeapons[0].attachmentVariationIndices[_RAX + 29];
      __asm { vmovsd  qword ptr [rsp+118h+r_stowedWeapon.attachmentVariationIndices+15h], xmm0 }
      *(_DWORD *)&r_stowedWeapon.weaponCamo = _RAX;
      __asm { vmovups xmmword ptr [rsp+118h+r_stowedWeapon.attachmentVariationIndices+5], xmm1 }
    }
    BG_UpdateVisibilitySlingBones(&_RBP->s, obj, _RBP->s.eType == ET_ACTOR_CORPSE, &r_heldWeapon, &r_stowedWeapon, heldWeaponIndex, stowedWeaponIndex, 0, 1);
  }
  attachWeapons = _RBP->attachWeapons;
  do
  {
    if ( attachWeapons->weaponIdx )
      BG_UpdateWeaponHidePartBitsForDObj(obj, &_RBP->attachWeapons[v6], 0, *v3);
    ++v6;
    ++attachWeapons;
    ++v3;
  }
  while ( v6 < 4 );
}

/*
==============
GUtilsSP::GetDebugTeamName
==============
*/
const char *GUtilsSP::GetDebugTeamName(GUtilsSP *this, const gentity_s *entity)
{
  sentient_s *sentient; 
  __int64 eTeam; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1488, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  sentient = entity->sentient;
  if ( !sentient )
    return (char *)&queryFormat.fmt + 3;
  eTeam = sentient->eTeam;
  if ( (unsigned int)eTeam >= 6 || (int)eTeam < 0 )
    return "unknown";
  else
    return S_TEAMS_SP_DEBUG_STRINGS[eTeam];
}

/*
==============
GUtilsSP::GetEntityTeam
==============
*/
__int64 GUtilsSP::GetEntityTeam(GUtilsSP *this, const gentity_s *entity)
{
  sentient_s *sentient; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1466, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->client )
    return 2i64;
  if ( entity->actor )
  {
    sentient = entity->sentient;
    if ( sentient )
      return (unsigned int)sentient->eTeam;
  }
  return 0i64;
}

/*
==============
GUtilsSP::GetPIPElemField
==============
*/
char GUtilsSP::GetPIPElemField(GUtilsSP *this, scrContext_t *scrContext, int entnum, int offset)
{
  Scr_GetPIPElemField(scrContext, entnum, offset);
  return 1;
}

/*
==============
GUtilsSP::GetTeamFromDebugString
==============
*/
__int64 GUtilsSP::GetTeamFromDebugString(GUtilsSP *this, const char *teamName)
{
  const char **v3; 
  unsigned int i; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  v3 = S_TEAMS_SP_DEBUG_STRINGS;
  for ( i = 0; i < 6; ++i )
  {
    v5 = *v3;
    v6 = 0x7FFFFFFFi64;
    if ( !teamName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(teamName - v5);
    while ( 1 )
    {
      v8 = (unsigned __int8)v5[(_QWORD)v7];
      v9 = v6;
      v10 = *(unsigned __int8 *)v5++;
      --v6;
      if ( !v9 )
        return i;
      if ( v8 != v10 )
      {
        v11 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v11 = v8;
        v8 = v11;
        v12 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v12 = v10;
        if ( v8 != v12 )
          break;
      }
      if ( !v8 )
        return i;
    }
    ++v3;
  }
  return 0i64;
}

/*
==============
GUtilsSP::GetWeaponWorldModels
==============
*/
XModel *GUtilsSP::GetWeaponWorldModels(GUtilsSP *this, const Weapon *r_weapon)
{
  return BG_WeaponDef(r_weapon, 0)->worldModel;
}

/*
==============
GUtilsSP::InitGentity
==============
*/
void GUtilsSP::InitGentity(GUtilsSP *this, gentity_s *e)
{
  bool v2; 
  signed __int64 v4; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  const dvar_t *v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 

  v2 = e->r.isInUse == 0;
  e->nextFree = NULL;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1086, ASSERT_TYPE_ASSERT, "(!e->r.isInUse)", (const char *)&queryFormat, "!e->r.isInUse") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = e - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    v12 = 2048;
    LODWORD(v10) = e - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1088, ASSERT_TYPE_ASSERT, "(!G_IsEntityInUse( entnum ))", (const char *)&queryFormat, "!G_IsEntityInUse( entnum )") )
    __debugbreak();
  e->r.isInUse = 1;
  g_entityIsInUse[v4] = 1;
  e->s.number = truncate_cast<unsigned short,int>(v4);
  e->s.lerp.eFlags.m_flags[0] = 0;
  if ( e->s.number != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1095, ASSERT_TYPE_ASSERT, "(e->s.number == entnum)", (const char *)&queryFormat, "e->s.number == entnum") )
    __debugbreak();
  number = e->r.ownerNum.number;
  if ( number )
  {
    v6 = number;
    v7 = number - 1;
    if ( v7 >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v8 = v6 - 1;
    if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v8] )
    {
      LODWORD(v11) = e->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v11) )
        __debugbreak();
    }
    if ( e->r.ownerNum.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1096, ASSERT_TYPE_ASSERT, "(!e->r.ownerNum.isDefined())", (const char *)&queryFormat, "!e->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  e->r.eventTypeFlags = 0;
  e->r.eventTime = 0;
  e->angleLerpRate = 540.0;
  v9 = DCONST_DVARMPINT_g_defaultUsePriority;
  if ( !DCONST_DVARMPINT_g_defaultUsePriority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_defaultUsePriority") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  e->hint.priority = v9->current.integer;
  memset_0(e->attachTagNames, 0, sizeof(e->attachTagNames));
}

/*
==============
GUtilsSP::IsTransientCustomizationModel
==============
*/
bool GUtilsSP::IsTransientCustomizationModel(GUtilsSP *this, const char *modelName)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 774, ASSERT_TYPE_ASSERT, "( !Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION ) )", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_CUSTOMIZATION )") )
    __debugbreak();
  return 0;
}

/*
==============
GUtilsSP::MayActivateHoldEntity
==============
*/
char GUtilsSP::MayActivateHoldEntity(GUtilsSP *this, const gentity_s *ent)
{
  return 1;
}

/*
==============
GUtilsSP::MayThrowbackGrenade
==============
*/
bool GUtilsSP::MayThrowbackGrenade(GUtilsSP *this, const gentity_s *ent, const gentity_s *grenade)
{
  return AIScriptedInterface::IsGrenadeInAIHands(grenade) == 0;
}

/*
==============
GUtilsSP::MayUseEntity
==============
*/
char GUtilsSP::MayUseEntity(GUtilsSP *this, const gentity_s *ent, const gentity_s *useEnt)
{
  return 1;
}

/*
==============
GUtilsSP::PlayerButtonsPressed
==============
*/
bool GUtilsSP::PlayerButtonsPressed(GUtilsSP *this, const gentity_s *ent, unsigned __int64 buttons)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1428, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_utils_sp.cpp", 1429, ASSERT_TYPE_ASSERT, "( ent->client )", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  return ((ent->client->buttons | ent->client->buttonsSinceLastFrame) & buttons) != 0;
}

/*
==============
GUtilsSP::SetEntityPerk
==============
*/
void GUtilsSP::SetEntityPerk(GUtilsSP *this, const gentity_s *ent, unsigned int perkIndex)
{
  ;
}

/*
==============
GUtilsSP::SetEntitySuit
==============
*/
void GUtilsSP::SetEntitySuit(GUtilsSP *this, const gentity_s *ent, unsigned int suitIndex)
{
  ;
}

/*
==============
GUtilsSP::SetPIPElemField
==============
*/
char GUtilsSP::SetPIPElemField(GUtilsSP *this, scrContext_t *scrContext, int entnum, int offset)
{
  Scr_SetPIPElemField(scrContext, entnum, offset);
  return 1;
}

/*
==============
GUtilsSP::SetPlayerOrigin
==============
*/
void GUtilsSP::SetPlayerOrigin(GUtilsSP *this, gentity_s *ent, const vec3_t *origin, int zOffset, int teleport)
{
  G_ClientSP_SetClientOrigin(ent, origin, zOffset, teleport);
}

/*
==============
GUtilsSP::SetPlayerViewAngles
==============
*/
void GUtilsSP::SetPlayerViewAngles(GUtilsSP *this, gentity_s *ent, const vec3_t *angle)
{
  G_ClientSP_SetClientViewAngle(ent, angle);
}

/*
==============
GUtilsSP::ShouldCreateEntityPhysicsOnInit
==============
*/

bool __fastcall GUtilsSP::ShouldCreateEntityPhysicsOnInit(GUtilsSP *this, const gentity_s *ent)
{
  return GUtils::ShouldCreateEntityPhysicsOnInit_Internal(this, ent);
}

/*
==============
GUtilsSP::UnlinkUpdateCorpse
==============
*/
void GUtilsSP::UnlinkUpdateCorpse(GUtilsSP *this, gentity_s *corpseEnt)
{
  ;
}

/*
==============
GUtilsSP::UnsetEntityPerk
==============
*/
void GUtilsSP::UnsetEntityPerk(GUtilsSP *this, const gentity_s *ent, unsigned int perkIndex)
{
  ;
}

