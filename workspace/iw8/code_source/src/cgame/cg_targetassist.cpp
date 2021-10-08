/*
==============
CgTargetAssist::GetInstance
==============
*/

CgTargetAssist *__fastcall CgTargetAssist::GetInstance(const LocalClientNum_t localClientNum)
{
  return ?GetInstance@CgTargetAssist@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssist::GetWorldBonePos
==============
*/

void __fastcall CgTargetAssist::GetWorldBonePos(CgTargetAssist *this, const __int16 entNum, int boneIndex, vec3_t *outPos)
{
  ?GetWorldBonePos@CgTargetAssist@@UEBAXFHAEATvec3_t@@@Z(this, entNum, boneIndex, outPos);
}

/*
==============
CgTargetAssist::CalculateSkeleton
==============
*/

void __fastcall CgTargetAssist::CalculateSkeleton(CgTargetAssist *this, const __int16 entNum, const int boneCount, const int *boneIndices)
{
  ?CalculateSkeleton@CgTargetAssist@@UEBAXFHPEBH@Z(this, entNum, boneCount, boneIndices);
}

/*
==============
CgTargetAssist::GetWorldBoneMatrix
==============
*/

void __fastcall CgTargetAssist::GetWorldBoneMatrix(CgTargetAssist *this, const __int16 entNum, int boneIndex, tmat33_t<vec3_t> *outRot, vec3_t *outPos)
{
  ?GetWorldBoneMatrix@CgTargetAssist@@UEBAXFHAEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(this, entNum, boneIndex, outRot, outPos);
}

/*
==============
CgTargetAssist::GetCollBoundsType
==============
*/

XModelCharCollBoundsType __fastcall CgTargetAssist::GetCollBoundsType(CgTargetAssist *this, const __int16 entNum)
{
  return ?GetCollBoundsType@CgTargetAssist@@UEBA?AW4XModelCharCollBoundsType@@F@Z(this, entNum);
}

/*
==============
CgTargetAssist::FindNextTarget
==============
*/

int __fastcall CgTargetAssist::FindNextTarget(CgTargetAssist *this, const LocalClientNum_t localClientNum, const __int16 attackerEntNum, const int currentPos, const int gameTime, __int16 *outTargetEntNum)
{
  return ?FindNextTarget@CgTargetAssist@@UEBAHW4LocalClientNum_t@@FHHPEAF@Z(this, localClientNum, attackerEntNum, currentPos, gameTime, outTargetEntNum);
}

/*
==============
CgTargetAssist::CalculateSkeleton
==============
*/
void CgTargetAssist::CalculateSkeleton(CgTargetAssist *this, const __int16 entNum, const int boneCount, const int *boneIndices)
{
  const cpose_t *Pose; 
  const DObj *ClientDObj; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( boneCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 114, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 115, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  Pose = CG_GetPose(this->m_localClientNum, entNum);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 118, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, this->m_localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 122, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  CG_DObjCalcBones(Pose, ClientDObj, boneCount, boneIndices);
}

/*
==============
CgTargetAssist::FindNextTarget
==============
*/
__int64 CgTargetAssist::FindNextTarget(CgTargetAssist *this, const LocalClientNum_t localClientNum, const __int16 attackerEntNum, const int currentPos, const int gameTime, __int16 *outTargetEntNum)
{
  __int64 v7; 
  unsigned int v9; 
  int TargetCount; 
  __int64 v11; 
  int v12; 
  const BgTargetAssist::TargetInfo *v13; 
  CgHandler *Handler; 
  __int64 v15; 
  bool v16; 
  __int16 *p_entNum; 
  __int64 v18; 
  bool v19; 
  __int64 v20; 
  CgEntitySystem *v21; 
  __int64 result; 
  __int64 v23; 
  __int64 v24; 
  team_t val; 
  unsigned int v26[17]; 
  bool v28; 

  v7 = localClientNum;
  v9 = attackerEntNum;
  if ( (unsigned int)attackerEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 34, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
    __debugbreak();
  if ( !outTargetEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 35, ASSERT_TYPE_ASSERT, "(outTargetEntNum)", (const char *)&queryFormat, "outTargetEntNum") )
    __debugbreak();
  TargetCount = BgTargetAssist::GetTargetCount(this);
  v11 = TargetCount;
  v12 = currentPos + 1;
  if ( currentPos + 1 >= TargetCount )
    goto LABEL_36;
  v13 = this->GetTargetStorage(this);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 47, ASSERT_TYPE_ASSERT, "(targets)", (const char *)&queryFormat, "targets") )
    __debugbreak();
  Handler = CgHandler::getHandler((LocalClientNum_t)v7);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 56, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  val = TEAM_ZERO;
  v26[0] = v9;
  Handler->GetEntityTeam(Handler, &val, v9, v26);
  v15 = v12;
  v16 = Com_GameMode_SupportsFeature((Com_GameMode_Feature)130);
  v28 = v16;
  if ( v12 >= v11 )
  {
LABEL_36:
    *outTargetEntNum = 2047;
    return 0x7FFFFFFFi64;
  }
  p_entNum = &v13[v12].entNum;
  v18 = v11;
  while ( 1 )
  {
    if ( val )
    {
      if ( *p_entNum == attackerEntNum )
        goto LABEL_35;
      if ( p_entNum[1] == truncate_cast<short,enum team_t>(val) )
        goto LABEL_35;
      if ( !v16 )
      {
        v19 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
        if ( p_entNum[1] == truncate_cast<short,enum team_t>(v19 ? TEAM_FOUR : TEAM_ZERO) )
          goto LABEL_35;
      }
    }
    v20 = *p_entNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v24) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v24) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v24) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v23) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v7] )
    {
      LODWORD(v24) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v24) )
        __debugbreak();
    }
    v21 = CgEntitySystem::ms_entitySystemArray[v7];
    if ( (unsigned int)v20 >= 0x800 )
    {
      LODWORD(v24) = 2048;
      LODWORD(v23) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( (v21->m_entities[v20].flags & 1) != 0 )
      break;
    v16 = v28;
LABEL_35:
    ++v12;
    ++v15;
    p_entNum += 2;
    if ( v15 >= v18 )
      goto LABEL_36;
  }
  result = (unsigned int)v12;
  *outTargetEntNum = *p_entNum;
  return result;
}

/*
==============
CgTargetAssist::GetCollBoundsType
==============
*/
__int64 CgTargetAssist::GetCollBoundsType(CgTargetAssist *this, const __int16 entNum)
{
  DObj *ClientDObj; 
  const XModel **models; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, this->m_localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 163, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  models = ClientDObj->models;
  if ( models && *models )
    return (unsigned int)(*models)->characterCollBoundsType;
  else
    return 10i64;
}

/*
==============
CgTargetAssist::GetInstance
==============
*/
CgTargetAssist *CgTargetAssist::GetInstance(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgTargetAssist::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 18, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the target assist system for localClientNum %d but the target assist system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 19, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgTargetAssist::ms_instances[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 20, ASSERT_TYPE_ASSERT, "(ms_instances[localClientNum])", "%s\n\tTrying to access unallocated target assist system for localClientNum %d\n", "ms_instances[localClientNum]", v4) )
      __debugbreak();
  }
  return CgTargetAssist::ms_instances[v1];
}

/*
==============
CgTargetAssist::GetWorldBoneMatrix
==============
*/
void CgTargetAssist::GetWorldBoneMatrix(CgTargetAssist *this, const __int16 entNum, int boneIndex, tmat33_t<vec3_t> *outRot, vec3_t *outPos)
{
  const cpose_t *Pose; 
  const DObj *ClientDObj; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 145, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Pose = CG_GetPose(this->m_localClientNum, entNum);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 148, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, this->m_localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 152, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  CG_DObjGetWorldBoneMatrix(Pose, ClientDObj, boneIndex, outRot, outPos);
}

/*
==============
CgTargetAssist::GetWorldBonePos
==============
*/
void CgTargetAssist::GetWorldBonePos(CgTargetAssist *this, const __int16 entNum, int boneIndex, vec3_t *outPos)
{
  const cpose_t *Pose; 
  const DObj *ClientDObj; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Pose = CG_GetPose(this->m_localClientNum, entNum);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 133, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, this->m_localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.cpp", 137, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  CG_DObjGetWorldBonePos(Pose, ClientDObj, boneIndex, outPos);
}

