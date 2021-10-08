/*
==============
CG_RagdollConstraintEntity_Reset
==============
*/

void __fastcall CG_RagdollConstraintEntity_Reset(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_RagdollConstraintEntity_Reset@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_RagdollConstraintEntity_Update
==============
*/

void __fastcall CG_RagdollConstraintEntity_Update(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_RagdollConstraintEntity_Update@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_RagdollConstraintEntity_Destroy
==============
*/

void __fastcall CG_RagdollConstraintEntity_Destroy(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_RagdollConstraintEntity_Destroy@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_RagdollConstraintEntity_Destroy
==============
*/
void CG_RagdollConstraintEntity_Destroy(const LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned int prevOtherEntityNum; 
  centity_t *Entity; 
  centity_t *v6; 
  centity_t::PerTypeData v7; 
  __int64 v8; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 26, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->pose.eType != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 27, ASSERT_TYPE_ASSERT, "(cent->pose.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "cent->pose.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  prevOtherEntityNum = cent->prevOtherEntityNum;
  if ( prevOtherEntityNum >= 0x800 )
  {
    LODWORD(v8) = cent->prevOtherEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 30, ASSERT_TYPE_ASSERT, "(unsigned)( corpseEntId ) < (unsigned)( ( 2048 ) )", "corpseEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
  }
  Entity = CG_GetEntity(localClientNum, prevOtherEntityNum);
  v6 = Entity;
  if ( Entity && (Entity->flags & 1) != 0 && BG_IsCorpseEntity(&Entity->nextState) )
  {
    v7.flightDurationMs = (int)v6->typeData;
    if ( v7.flightDurationMs != cent->nextState.number && v7.flightDurationMs != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 35, ASSERT_TYPE_ASSERT, "(corpseEnt->typeData.ragdollConstraintEnt == cent->nextState.number || corpseEnt->typeData.ragdollConstraintEnt == ENTITYNUM_NONE)", (const char *)&queryFormat, "corpseEnt->typeData.ragdollConstraintEnt == cent->nextState.number || corpseEnt->typeData.ragdollConstraintEnt == ENTITYNUM_NONE") )
      __debugbreak();
    v6->typeData.flightDurationMs = 2047;
  }
}

/*
==============
CG_RagdollConstraintEntity_Reset
==============
*/
void CG_RagdollConstraintEntity_Reset(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ;
}

/*
==============
CG_RagdollConstraintEntity_Update
==============
*/
void CG_RagdollConstraintEntity_Update(const LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned int otherEntityNum; 
  centity_t *Entity; 
  centity_t *v6; 
  centity_t::PerTypeData v7; 
  __int64 v8; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 9, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->pose.eType != 25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 10, ASSERT_TYPE_ASSERT, "(cent->pose.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "cent->pose.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  otherEntityNum = cent->nextState.otherEntityNum;
  if ( otherEntityNum >= 0x800 )
  {
    LODWORD(v8) = cent->nextState.otherEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 13, ASSERT_TYPE_ASSERT, "(unsigned)( corpseEntId ) < (unsigned)( ( 2048 ) )", "corpseEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
  }
  Entity = CG_GetEntity(localClientNum, otherEntityNum);
  v6 = Entity;
  if ( Entity && (Entity->flags & 1) != 0 && BG_IsCorpseEntity(&Entity->nextState) )
  {
    v7.flightDurationMs = (int)v6->typeData;
    if ( v7.flightDurationMs != cent->nextState.number && v7.flightDurationMs != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdollconstraintentity.cpp", 18, ASSERT_TYPE_ASSERT, "(corpseEnt->typeData.ragdollConstraintEnt == cent->nextState.number || corpseEnt->typeData.ragdollConstraintEnt == ENTITYNUM_NONE)", (const char *)&queryFormat, "corpseEnt->typeData.ragdollConstraintEnt == cent->nextState.number || corpseEnt->typeData.ragdollConstraintEnt == ENTITYNUM_NONE") )
      __debugbreak();
    v6->typeData.flightDurationMs = cent->nextState.number;
  }
}

