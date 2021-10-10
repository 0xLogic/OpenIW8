/*
==============
AIActorInterface::SetAnimMode
==============
*/

bool __fastcall AIActorInterface::SetAnimMode(AIActorInterface *this, scr_string_t mode)
{
  return ?SetAnimMode@AIActorInterface@@UEBA_NW4scr_string_t@@@Z(this, mode);
}

/*
==============
AIActorIterator::GetFirst
==============
*/

gentity_s *__fastcall AIActorIterator::GetFirst(AIActorIterator *this)
{
  return ?GetFirst@AIActorIterator@@UEAAPEAUgentity_s@@XZ(this);
}

/*
==============
AIActorInterface::UpdateClientOnlyAnimGameParams
==============
*/

void __fastcall AIActorInterface::UpdateClientOnlyAnimGameParams(AIActorInterface *this)
{
  ?UpdateClientOnlyAnimGameParams@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::SetAnim
==============
*/

void __fastcall AIActorInterface::SetAnim(AIActorInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex, float rate)
{
  ?SetAnim@AIActorInterface@@UEBAXPEBUAnimset@@HHM@Z(this, pAnimset, stateIndex, entryIndex, rate);
}

/*
==============
AIActorInterface::SetDebugInfo
==============
*/

void __fastcall AIActorInterface::SetDebugInfo(AIActorInterface *this, const char *pszDebugInfo)
{
  ?SetDebugInfo@AIActorInterface@@UEBAXPEBD@Z(this, pszDebugInfo);
}

/*
==============
AIActorInterface::GetClothType
==============
*/

unsigned __int8 __fastcall AIActorInterface::GetClothType(AIActorInterface *this)
{
  return ?GetClothType@AIActorInterface@@UEBAEXZ(this);
}

/*
==============
AIActorInterface::GetMovingPlatformUpVector
==============
*/

void __fastcall AIActorInterface::GetMovingPlatformUpVector(AIActorInterface *this, vec3_t *upVector)
{
  ?GetMovingPlatformUpVector@AIActorInterface@@UEBAXAEATvec3_t@@@Z(this, upVector);
}

/*
==============
AIActorInterface::OrientCorpseToTheGround
==============
*/

void __fastcall AIActorInterface::OrientCorpseToTheGround(AIActorInterface *this, int bLerp)
{
  ?OrientCorpseToTheGround@AIActorInterface@@UEBAXH@Z(this, bLerp);
}

/*
==============
AIActorInterface::ClearCloseEnt
==============
*/

void __fastcall AIActorInterface::ClearCloseEnt(AIActorInterface *this)
{
  ?ClearCloseEnt@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::GetPileUpEnt
==============
*/

gentity_s *__fastcall AIActorInterface::GetPileUpEnt(AIActorInterface *this)
{
  return ?GetPileUpEnt@AIActorInterface@@UEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AIActorInterface::GetDebugInfo
==============
*/

const char *__fastcall AIActorInterface::GetDebugInfo(AIActorInterface *this)
{
  return ?GetDebugInfo@AIActorInterface@@UEBAPEBDXZ(this);
}

/*
==============
AIActorIterator::GetNext
==============
*/

gentity_s *__fastcall AIActorIterator::GetNext(AIActorIterator *this)
{
  return ?GetNext@AIActorIterator@@UEAAPEAUgentity_s@@XZ(this);
}

/*
==============
AIActorInterface::GetMotionAngles
==============
*/

void __fastcall AIActorInterface::GetMotionAngles(AIActorInterface *this, vec3_t *angles)
{
  ?GetMotionAngles@AIActorInterface@@UEBAXAEATvec3_t@@@Z(this, angles);
}

/*
==============
AIActorInterface::GetPileUpActor
==============
*/

actor_s *__fastcall AIActorInterface::GetPileUpActor(AIActorInterface *this)
{
  return ?GetPileUpActor@AIActorInterface@@UEBAPEAUactor_s@@XZ(this);
}

/*
==============
AIActorInterface::ShouldArriveToCoverExposedStepOut
==============
*/

bool __fastcall AIActorInterface::ShouldArriveToCoverExposedStepOut(AIActorInterface *this)
{
  return ?ShouldArriveToCoverExposedStepOut@AIActorInterface@@UEBA_NXZ(this);
}

/*
==============
AIActorInterface::GetAIIterator
==============
*/

AIIterator *__fastcall AIActorInterface::GetAIIterator(AIActorInterface *this)
{
  return ?GetAIIterator@AIActorInterface@@UEBAPEAVAIIterator@@XZ(this);
}

/*
==============
AIActorInterface::ValidateSpawn
==============
*/

bool __fastcall AIActorInterface::ValidateSpawn(AIActorInterface *this)
{
  return ?ValidateSpawn@AIActorInterface@@UEBA_NXZ(this);
}

/*
==============
AIActorInterface::Is3D
==============
*/

bool __fastcall AIActorInterface::Is3D(AIActorInterface *this)
{
  return ?Is3D@AIActorInterface@@UEBA_NXZ(this);
}

/*
==============
AIActorInterface::SetUnitType
==============
*/

void __fastcall AIActorInterface::SetUnitType(AIActorInterface *this, AIUnitType unitType)
{
  ?SetUnitType@AIActorInterface@@EEBAXW4AIUnitType@@@Z(this, unitType);
}

/*
==============
AIActorInterface::SetCloseEnt
==============
*/

void __fastcall AIActorInterface::SetCloseEnt(AIActorInterface *this, gentity_s *pCloseEnt)
{
  ?SetCloseEnt@AIActorInterface@@UEBAXPEAUgentity_s@@@Z(this, pCloseEnt);
}

/*
==============
AIActorInterface::OnSpawned
==============
*/

void __fastcall AIActorInterface::OnSpawned(AIActorInterface *this)
{
  ?OnSpawned@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::SetNextThinkTime
==============
*/

void __fastcall AIActorInterface::SetNextThinkTime(AIActorInterface *this, gentity_s *pEnt)
{
  ?SetNextThinkTime@AIActorInterface@@UEBAXPEAUgentity_s@@@Z(this, pEnt);
}

/*
==============
AIActorInterface::GetCloseEnt
==============
*/

gentity_s *__fastcall AIActorInterface::GetCloseEnt(AIActorInterface *this)
{
  return ?GetCloseEnt@AIActorInterface@@UEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AIActorInterface::GetFireWeaponEvent
==============
*/

int __fastcall AIActorInterface::GetFireWeaponEvent(AIActorInterface *this, bool bFireSoundOnce, bool bCleanMiss)
{
  return ?GetFireWeaponEvent@AIActorInterface@@UEBAH_N0@Z(this, bFireSoundOnce, bCleanMiss);
}

/*
==============
AIActorInterface::SetAnimset
==============
*/

bool __fastcall AIActorInterface::SetAnimset(AIActorInterface *this, const char *animsetName)
{
  return ?SetAnimset@AIActorInterface@@UEBA_NPEBD@Z(this, animsetName);
}

/*
==============
AIActorInterface::IsAlive
==============
*/

bool __fastcall AIActorInterface::IsAlive(AIActorInterface *this)
{
  return ?IsAlive@AIActorInterface@@UEBA_NXZ(this);
}

/*
==============
AIActorInterface::GetAIActorIterator
==============
*/

AIIterator *__fastcall AIActorInterface::GetAIActorIterator()
{
  return ?GetAIActorIterator@AIActorInterface@@SAPEAVAIIterator@@XZ();
}

/*
==============
AIActorInterface::ShouldDoPlayerADSCheck
==============
*/

bool __fastcall AIActorInterface::ShouldDoPlayerADSCheck(AIActorInterface *this)
{
  return ?ShouldDoPlayerADSCheck@AIActorInterface@@UEBA_NXZ(this);
}

/*
==============
AIActorInterface::AIActorInterface
==============
*/

void __fastcall AIActorInterface::AIActorInterface(AIActorInterface *this)
{
  ??0AIActorInterface@@QEAA@XZ(this);
}

/*
==============
AIActorIterator::AIActorIterator
==============
*/

void __fastcall AIActorIterator::AIActorIterator(AIActorIterator *this)
{
  ??0AIActorIterator@@QEAA@XZ(this);
}

/*
==============
AIActorInterface::SetClothType
==============
*/

void __fastcall AIActorInterface::SetClothType(AIActorInterface *this, unsigned __int8 clothType)
{
  ?SetClothType@AIActorInterface@@UEBAXE@Z(this, clothType);
}

/*
==============
AIActorInterface::GetTraceMask
==============
*/

int __fastcall AIActorInterface::GetTraceMask(AIActorInterface *this)
{
  return ?GetTraceMask@AIActorInterface@@UEBAHXZ(this);
}

/*
==============
AIActorInterface::SetActor
==============
*/

void __fastcall AIActorInterface::SetActor(AIActorInterface *this, actor_s *pActor)
{
  ?SetActor@AIActorInterface@@QEAAXPEAUactor_s@@@Z(this, pActor);
}

/*
==============
AIActorInterface::AIActorInterface
==============
*/
void AIActorInterface::AIActorInterface(AIActorInterface *this)
{
  AIScriptedInterface::AIScriptedInterface(this);
  this->m_pAI = NULL;
  this->__vftable = (AIActorInterface_vtbl *)&AIActorInterface::`vftable';
}

/*
==============
AIActorIterator::AIActorIterator
==============
*/
void AIActorIterator::AIActorIterator(AIActorIterator *this)
{
  this->m_currentIndex = -1;
  this->__vftable = (AIActorIterator_vtbl *)&AIActorIterator::`vftable';
}

/*
==============
AIActorInterface::ClearCloseEnt
==============
*/
void AIActorInterface::ClearCloseEnt(AIActorInterface *this)
{
  EntHandle::setEnt(&this->m_pAI->pCloseEnt, NULL);
}

/*
==============
AIActorInterface::GetAIActorIterator
==============
*/
AIActorIterator *AIActorInterface::GetAIActorIterator()
{
  return &AIActorInterface::ms_actorIterator;
}

/*
==============
AIActorInterface::GetAIIterator
==============
*/
AIActorIterator *AIActorInterface::GetAIIterator(AIActorInterface *this)
{
  return &AIActorInterface::ms_actorIterator;
}

/*
==============
AIActorInterface::GetCloseEnt
==============
*/
gentity_s *AIActorInterface::GetCloseEnt(AIActorInterface *this)
{
  actor_s *m_pAI; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  actor_s *v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 

  m_pAI = this->m_pAI;
  number = m_pAI->pCloseEnt.number;
  if ( !number )
    return 0i64;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    v15 = 2048;
    v13 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v14) = m_pAI->pCloseEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v14) )
      __debugbreak();
  }
  if ( !m_pAI->pCloseEnt.number )
    return 0i64;
  v7 = this->m_pAI;
  v8 = v7->pCloseEnt.number;
  if ( (unsigned int)(v8 - 1) >= 0x7FF )
  {
    LODWORD(v14) = 2047;
    LODWORD(v12) = v8 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  v9 = v7->pCloseEnt.number;
  if ( (unsigned int)(v9 - 1) >= 0x800 )
  {
    LODWORD(v14) = 2048;
    LODWORD(v12) = v9 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v10 = v9 - 1;
  if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10] )
  {
    LODWORD(v14) = v7->pCloseEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v14) )
      __debugbreak();
  }
  return &g_entities[v7->pCloseEnt.number - 1];
}

/*
==============
AIActorInterface::GetClothType
==============
*/
__int64 AIActorInterface::GetClothType(AIActorInterface *this)
{
  return this->m_pAI->clothType;
}

/*
==============
AIActorInterface::GetDebugInfo
==============
*/
const char *AIActorInterface::GetDebugInfo(AIActorInterface *this)
{
  return this->m_pAI->pszDebugInfo;
}

/*
==============
AIActorInterface::GetFireWeaponEvent
==============
*/
__int64 AIActorInterface::GetFireWeaponEvent(AIActorInterface *this, bool bFireSoundOnce, bool bCleanMiss)
{
  __int64 result; 

  if ( bCleanMiss )
    return !bFireSoundOnce + 205;
  result = 204i64;
  if ( bFireSoundOnce )
    return 40i64;
  return result;
}

/*
==============
AIActorIterator::GetFirst
==============
*/
gentity_s *AIActorIterator::GetFirst(AIActorIterator *this)
{
  int v1; 
  actor_s *v2; 

  v1 = 0;
  this->m_currentIndex = 0;
  while ( 1 )
  {
    v2 = &level.actors[v1];
    if ( v2->inuse )
      break;
    this->m_currentIndex = ++v1;
    if ( v1 >= 38 )
    {
      this->m_currentIndex = -1;
      return 0i64;
    }
  }
  return v2->ent;
}

/*
==============
AIActorInterface::GetMotionAngles
==============
*/
void AIActorInterface::GetMotionAngles(AIActorInterface *this, vec3_t *angles)
{
  actor_s *m_pAI; 
  double v5; 
  float v6; 
  double v7; 
  actor_s *v8; 
  float v9; 

  m_pAI = this->m_pAI;
  if ( m_pAI->Physics.bHasGroundPlane )
  {
    v5 = vectoyaw((const vec2_t *)&m_pAI->Physics.vWishDelta);
    v6 = *(float *)&v5;
    v7 = vectopitch(&this->m_pAI->Physics.vWishDelta);
    v8 = this->m_pAI;
    v9 = v6 - v8->orientation.vDesiredAngles.v[1];
    _XMM6 = 0i64;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    angles->v[0] = (float)((float)((float)(*(float *)&v7 - v8->orientation.vDesiredAngles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    __asm { vroundss xmm3, xmm6, xmm0, 1 }
    angles->v[1] = (float)((float)(v9 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    angles->v[2] = 0.0;
  }
  else
  {
    AIScriptedInterface::GetMotionAngles(this, angles);
  }
}

/*
==============
AIActorInterface::GetMovingPlatformUpVector
==============
*/
void AIActorInterface::GetMovingPlatformUpVector(AIActorInterface *this, vec3_t *upVector)
{
  *upVector = this->m_pAI->Physics.movingPlatformUp;
}

/*
==============
AIActorIterator::GetNext
==============
*/
gentity_s *AIActorIterator::GetNext(AIActorIterator *this)
{
  int m_currentIndex; 
  int v2; 
  actor_s *v3; 

  m_currentIndex = this->m_currentIndex;
  if ( m_currentIndex < 0 )
    return 0i64;
  v2 = m_currentIndex + 1;
  this->m_currentIndex = v2;
  if ( v2 >= 38 )
  {
LABEL_5:
    this->m_currentIndex = -1;
    return 0i64;
  }
  while ( 1 )
  {
    v3 = &level.actors[v2];
    if ( v3->inuse )
      return v3->ent;
    this->m_currentIndex = ++v2;
    if ( v2 >= 38 )
      goto LABEL_5;
  }
}

/*
==============
AIActorInterface::GetPileUpActor
==============
*/
actor_s *AIActorInterface::GetPileUpActor(AIActorInterface *this)
{
  return this->m_pAI->pPileUpActor;
}

/*
==============
AIActorInterface::GetPileUpEnt
==============
*/
gentity_s *AIActorInterface::GetPileUpEnt(AIActorInterface *this)
{
  return this->m_pAI->pPileUpEnt;
}

/*
==============
AIActorInterface::GetTraceMask
==============
*/
__int64 AIActorInterface::GetTraceMask(AIActorInterface *this)
{
  return (unsigned int)this->m_pAI->Physics.iTraceMask;
}

/*
==============
AIActorInterface::Is3D
==============
*/
_BOOL8 AIActorInterface::Is3D(AIActorInterface *this)
{
  return this->m_pAI->Physics.bSpace;
}

/*
==============
AIActorInterface::IsAlive
==============
*/
bool AIActorInterface::IsAlive(AIActorInterface *this)
{
  return this->m_pAI->Physics.bIsAlive && AICommonInterface::IsAlive(this);
}

/*
==============
AIActorInterface::OnSpawned
==============
*/
void AIActorInterface::OnSpawned(AIActorInterface *this)
{
  AIScriptedInterface::OnSpawned(this);
  AIScriptedInterface::InitNavigator(this);
}

/*
==============
AIActorInterface::OrientCorpseToTheGround
==============
*/
void AIActorInterface::OrientCorpseToTheGround(AIActorInterface *this, int bLerp)
{
  gentity_s *v3; 

  v3 = this->GetEntity(this);
  AIActorInterface::OrientCorpseToGround(v3, bLerp);
}

/*
==============
AIActorInterface::SetActor
==============
*/
void AIActorInterface::SetActor(AIActorInterface *this, actor_s *pActor)
{
  AIScriptedInterface::SetAI(this, pActor);
  this->m_pAI = pActor;
}

/*
==============
AIActorInterface::SetAnim
==============
*/
void AIActorInterface::SetAnim(AIActorInterface *this, const Animset *pAnimset, int stateIndex, int entryIndex, float rate)
{
  __int64 v6; 
  const char *v9; 
  DObj *ServerDObjForEnt; 
  XAnimTree *EntAnimTree; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  XAnimCurveID pOutAnimCurveID; 
  XAnimSubTreeID v16; 

  v6 = stateIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "AISetAnim");
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 318, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( (int)v6 < 0 || (int)v6 >= (signed int)pAnimset->numStates )
  {
    LODWORD(pOutAnimSubtreeID) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 319, ASSERT_TYPE_ASSERT, "( stateIndex >= 0 && stateIndex < (int)pAnimset->numStates )", "invalid state index %d for animset %s", pOutAnimSubtreeID, pAnimset->name) )
      __debugbreak();
  }
  if ( entryIndex < 0 )
  {
    v9 = SL_ConvertToString(pAnimset->states[v6].name);
    LODWORD(pOutAnimSubtreeID) = entryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 320, ASSERT_TYPE_ASSERT, "( entryIndex >= 0 )", "invalid entry index %d for animset %s state %s", pOutAnimSubtreeID, pAnimset->name, v9) )
      __debugbreak();
  }
  BG_AnimationState_SetState(v6, entryIndex, (entityState_t *)this->m_pAI->ent);
  this->m_pAI->ent->s.animInfo.animTime = level.time;
  AIScriptedInterface::AnimStateChanged_ClearAnimParams(this);
  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  EntAnimTree = G_Utils_GetEntAnimTree(this->m_pAI->ent);
  BG_AnimationState_Update((const entityState_t *)this->m_pAI->ent, &this->m_pAI->charAnimState, ServerDObjForEnt->tree, NULL, 0);
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, v6, entryIndex, &pOutAnimIndex, &pOutGraftNode, &v16, &pOutAnimCurveID);
  XAnimSetAnimRate(EntAnimTree, pOutGraftNode, v16, pOutAnimIndex, rate);
  G_FlagAnimForUpdate(this->m_pAI->ent);
  AIScriptedInterface::UpdateLookAtForNewAnim(this, pAnimset, v6, entryIndex);
  Sys_ProfEndNamedEvent();
}

/*
==============
AIActorInterface::SetAnimMode
==============
*/
bool AIActorInterface::SetAnimMode(AIActorInterface *this, scr_string_t mode)
{
  return AIScriptedInterface::SetAnimMode(this, mode);
}

/*
==============
AIActorInterface::SetAnimset
==============
*/
char AIActorInterface::SetAnimset(AIActorInterface *this, const char *animsetName)
{
  scr_string_t String; 
  XAnim_s *Anims; 
  actor_s *m_pAI; 
  XAnimTree *pAnimTree; 
  __int64 v9; 
  unsigned int outIndex; 
  int pOutStartEntry; 
  int pOutStartState; 

  if ( !animsetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 274, ASSERT_TYPE_ASSERT, "(animsetName)", (const char *)&queryFormat, "animsetName") )
    __debugbreak();
  if ( !NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_ANIMSET, animsetName, &outIndex) )
    return 0;
  if ( outIndex >= 0x40 )
  {
    LODWORD(v9) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 6) )", "animsetIndex doesn't index MAX_ANIM_CLASS_COUNT\n\t%i not in [0, %i)", v9, 64) )
      __debugbreak();
  }
  this->m_pAI->ent->s.animInfo.animData |= 1u;
  this->m_pAI->ent->s.animInfo.animData ^= (this->m_pAI->ent->s.animInfo.animData ^ (outIndex << 18)) & 0xFC0000;
  String = SL_FindString(animsetName);
  BG_Animset_GetStartStateAndEntry(String, &pOutStartState, &pOutStartEntry);
  BG_AnimationState_SetState(pOutStartState, pOutStartEntry, (entityState_t *)this->m_pAI->ent);
  Anims = BG_AnimationState_GetAnims((const entityState_t *)this->m_pAI->ent);
  if ( Anims )
  {
    if ( this->m_pAI->ent->scripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 293, ASSERT_TYPE_ASSERT, "( !m_pAI->ent->scripted )", (const char *)&queryFormat, "!m_pAI->ent->scripted") )
      __debugbreak();
    m_pAI = this->m_pAI;
    pAnimTree = m_pAI->ent->pAnimTree;
    if ( !pAnimTree || XAnimGetAnims(m_pAI->ent->pAnimTree) != Anims )
    {
      this->m_pAI->ent->pAnimTree = Com_XAnimCreateSmallTree(Anims, MOVEMENT);
      G_UtilsSP_DObjUpdateAndKeepHiddenPartBits(this->m_pAI->ent, this->m_pAI->ent->r.isLinked);
      if ( pAnimTree )
        Com_XAnimFreeSmallTree(pAnimTree);
    }
  }
  return 1;
}

/*
==============
AIActorInterface::SetCloseEnt
==============
*/
void AIActorInterface::SetCloseEnt(AIActorInterface *this, gentity_s *pCloseEnt)
{
  EntHandle::setEnt(&this->m_pAI->pCloseEnt, pCloseEnt);
}

/*
==============
AIActorInterface::SetClothType
==============
*/
void AIActorInterface::SetClothType(AIActorInterface *this, unsigned __int8 clothType)
{
  actor_s *m_pAI; 
  int v5; 
  int v6; 

  if ( clothType >= 0x10u )
  {
    v6 = 16;
    v5 = clothType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( ( 1 << 4 ) )", "clothType doesn't index MAX_CLOTH_TYPE\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  this->m_pAI->clothType = clothType;
  m_pAI = this->m_pAI;
  if ( m_pAI->ent->s.eType == ET_ACTOR )
    m_pAI->ent->s.lerp.u.actor.clothType = clothType;
}

/*
==============
AIActorInterface::SetDebugInfo
==============
*/
void AIActorInterface::SetDebugInfo(AIActorInterface *this, const char *pszDebugInfo)
{
  this->m_pAI->pszDebugInfo = pszDebugInfo;
}

/*
==============
AIActorInterface::SetNextThinkTime
==============
*/
void AIActorInterface::SetNextThinkTime(AIActorInterface *this, gentity_s *pEnt)
{
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 74, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( level.frameDuration )
  {
    pEnt->nextthink = level.frameDuration + level.time;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    pEnt->nextthink = level.time + level.frameDuration;
  }
}

/*
==============
AIActorInterface::SetUnitType
==============
*/
void AIActorInterface::SetUnitType(AIActorInterface *this, AIUnitType unitType)
{
  int LayerForUnitType; 

  if ( (unitType < AI_UNITTYPE_SOLDIER || (unsigned int)unitType > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum AIUnitType>(enum AIUnitType)", "unsigned", (unsigned __int8)unitType, "signed", unitType) )
    __debugbreak();
  this->m_pAI->ent->s.lerp.u.actor.unittype = unitType;
  AIScriptedInterface::SetUnitType(this, unitType);
  LayerForUnitType = Nav_GetLayerForUnitType(unitType);
  if ( Nav_MeshLoadedForLayer(LayerForUnitType) )
    Nav_SetLayer(this->m_pAI->pNavigator, (AINavLayer)LayerForUnitType);
}

/*
==============
AIActorInterface::ShouldArriveToCoverExposedStepOut
==============
*/
bool AIActorInterface::ShouldArriveToCoverExposedStepOut(AIActorInterface *this)
{
  return 0;
}

/*
==============
AIActorInterface::ShouldDoPlayerADSCheck
==============
*/
bool AIActorInterface::ShouldDoPlayerADSCheck(AIActorInterface *this)
{
  return !this->m_pAI->bDisablePlayerADSLOSCheck;
}

/*
==============
AIActorInterface::UpdateClientOnlyAnimGameParams
==============
*/
void AIActorInterface::UpdateClientOnlyAnimGameParams(AIActorInterface *this)
{
  DObj *ServerDObjForEnt; 
  DObj *v3; 
  actor_s *m_pAI; 
  GWeaponMap *Instance; 

  ServerDObjForEnt = Com_GetServerDObjForEnt(this->m_pAI->ent);
  v3 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    m_pAI = this->m_pAI;
    XAnimSetFloatGameParameterByIndex(ServerDObjForEnt, 0x1Eu, fsqrt((float)((float)(m_pAI->Physics.vVelocity.v[0] * m_pAI->Physics.vVelocity.v[0]) + (float)(m_pAI->Physics.vVelocity.v[1] * m_pAI->Physics.vVelocity.v[1])) + (float)(m_pAI->Physics.vVelocity.v[2] * m_pAI->Physics.vVelocity.v[2])));
    XAnimSetByteGameParameterByName(v3, scr_const.facialindex, this->m_pAI->animData.facialIndex);
    Instance = GWeaponMap::GetInstance();
    BG_AIAnim_UpdateFingerPoses(Instance, v3, (const entityState_t *const)this->m_pAI->ent);
  }
}

/*
==============
AIActorInterface::ValidateSpawn
==============
*/
char AIActorInterface::ValidateSpawn(AIActorInterface *this)
{
  gentity_s *ent; 
  char *v3; 
  scr_string_t v4; 
  const char *v5; 
  const char *v6; 
  char *v8; 
  scr_string_t targetname; 
  const char *v10; 
  const char *v11; 

  ent = this->m_pAI->ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_actor_interface.cpp", 88, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  if ( AIActorInterface::IsLightweight(this) || level.actorCount - level.actorLightCount <= 32 )
  {
    if ( AIActorInterface::IsLightweight(this) && level.actorLightCount > 6 )
    {
      v8 = vtos(&ent->r.currentOrigin);
      targetname = ent->targetname;
      v10 = v8;
      if ( targetname )
        v11 = SL_ConvertToString(targetname);
      else
        v11 = "<unnamed>";
      Com_DPrintf(18, "^3SpawnActor( %s ) capacity %d exceeded, failed to allocate actor at %s\n", v11, 6i64, v10);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v3 = vtos(&ent->r.currentOrigin);
    v4 = ent->targetname;
    v5 = v3;
    if ( v4 )
      v6 = SL_ConvertToString(v4);
    else
      v6 = "<unnamed>";
    Com_DPrintf(18, "^3SpawnActor( %s ) capacity %d exceeded, failed to allocate actor at %s\n", v6, 32i64, v5);
    return 0;
  }
}

