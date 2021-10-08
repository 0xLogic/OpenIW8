/*
==============
GTargetAssist::GetWorldBonePos
==============
*/

void __fastcall GTargetAssist::GetWorldBonePos(GTargetAssist *this, const __int16 entNum, int boneIndex, vec3_t *outPos)
{
  ?GetWorldBonePos@GTargetAssist@@UEBAXFHAEATvec3_t@@@Z(this, entNum, boneIndex, outPos);
}

/*
==============
GTargetAssist::ProcessAllEntities
==============
*/

void __fastcall GTargetAssist::ProcessAllEntities(GTargetAssist *this)
{
  ?ProcessAllEntities@GTargetAssist@@QEAAXXZ(this);
}

/*
==============
GTargetAssist::GetWorldBoneMatrix
==============
*/

void __fastcall GTargetAssist::GetWorldBoneMatrix(GTargetAssist *this, const __int16 entNum, int boneIndex, tmat33_t<vec3_t> *outRot, vec3_t *outPos)
{
  ?GetWorldBoneMatrix@GTargetAssist@@UEBAXFHAEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(this, entNum, boneIndex, outRot, outPos);
}

/*
==============
GTargetAssist::GetCollBoundsType
==============
*/

XModelCharCollBoundsType __fastcall GTargetAssist::GetCollBoundsType(GTargetAssist *this, const __int16 entNum)
{
  return ?GetCollBoundsType@GTargetAssist@@UEBA?AW4XModelCharCollBoundsType@@F@Z(this, entNum);
}

/*
==============
GTargetAssist::CalculateSkeleton
==============
*/

void __fastcall GTargetAssist::CalculateSkeleton(GTargetAssist *this, const __int16 entNum, const int boneCount, const int *boneIndices)
{
  ?CalculateSkeleton@GTargetAssist@@UEBAXFHPEBH@Z(this, entNum, boneCount, boneIndices);
}

/*
==============
GTargetAssist::FindNextTarget
==============
*/

int __fastcall GTargetAssist::FindNextTarget(GTargetAssist *this, const LocalClientNum_t localClientNum, const __int16 attackerEntNum, const int currentPos, const int gameTime, __int16 *outTargetEntNum)
{
  return ?FindNextTarget@GTargetAssist@@UEBAHW4LocalClientNum_t@@FHHPEAF@Z(this, localClientNum, attackerEntNum, currentPos, gameTime, outTargetEntNum);
}

/*
==============
GTargetAssist::GTargetAssist
==============
*/

void __fastcall GTargetAssist::GTargetAssist(GTargetAssist *this)
{
  ??0GTargetAssist@@IEAA@XZ(this);
}

/*
==============
GTargetAssist::GTargetAssist
==============
*/
void GTargetAssist::GTargetAssist(GTargetAssist *this)
{
  this->__vftable = (GTargetAssist_vtbl *)&BgTargetAssist::`vftable';
  this->__vftable = (GTargetAssist_vtbl *)&GTargetAssist::`vftable';
  this->m_targetCount = 0;
}

/*
==============
GTargetAssist::CalculateSkeleton
==============
*/
void GTargetAssist::CalculateSkeleton(GTargetAssist *this, const __int16 entNum, const int boneCount, const int *boneIndices)
{
  __int64 v7; 
  __int64 v8; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( boneCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 130, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 131, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 133, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entNum ))", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  G_Utils_DObjCalcBones(&g_entities[entNum], boneCount, boneIndices);
}

/*
==============
GTargetAssist::FindNextTarget
==============
*/
__int64 GTargetAssist::FindNextTarget(GTargetAssist *this, const LocalClientNum_t localClientNum, const __int16 attackerEntNum, const int currentPos, const int gameTime, __int16 *outTargetEntNum)
{
  int TargetCount; 
  __int64 v10; 
  int v11; 
  const BgTargetAssist::TargetInfo *v12; 
  GHandler *Handler; 
  __int64 v14; 
  bool v15; 
  __int16 *p_entNum; 
  bool v17; 
  __int64 v18; 
  __int64 v20; 
  __int64 v21; 
  team_t val; 
  int v23; 

  if ( (unsigned __int16)attackerEntNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
    __debugbreak();
  if ( (unsigned int)attackerEntNum >= 0x800 )
  {
    LODWORD(v21) = 2048;
    LODWORD(v20) = attackerEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[attackerEntNum].r.isInUse != g_entityIsInUse[attackerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[attackerEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 49, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( attackerEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( attackerEntNum )") )
    __debugbreak();
  if ( !outTargetEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 50, ASSERT_TYPE_ASSERT, "( outTargetEntNum )", (const char *)&queryFormat, "outTargetEntNum") )
    __debugbreak();
  TargetCount = BgTargetAssist::GetTargetCount(this);
  v10 = TargetCount;
  v11 = currentPos + 1;
  if ( currentPos + 1 >= TargetCount )
    goto LABEL_44;
  v12 = this->GetTargetStorage(this);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 61, ASSERT_TYPE_ASSERT, "( targets )", (const char *)&queryFormat, "targets") )
    __debugbreak();
  Handler = GHandler::getHandler();
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 72, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  val = TEAM_ZERO;
  v23 = attackerEntNum;
  Handler->GetEntityTeam(Handler, &val, attackerEntNum, (unsigned int *)&v23);
  v14 = v11;
  v15 = Com_GameMode_SupportsFeature((Com_GameMode_Feature)130);
  if ( v11 >= v10 )
  {
LABEL_44:
    *outTargetEntNum = 2047;
    return 0x7FFFFFFFi64;
  }
  else
  {
    p_entNum = &v12[v11].entNum;
    while ( 1 )
    {
      if ( val == TEAM_ZERO || *p_entNum != attackerEntNum && p_entNum[1] != truncate_cast<short,enum team_t>(val) && (v15 || (v17 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80), p_entNum[1] != truncate_cast<short,enum team_t>(v17 ? TEAM_FOUR : TEAM_ZERO))) )
      {
        v18 = *p_entNum;
        if ( (unsigned int)v18 >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = *p_entNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v18].r.isInUse != g_entityIsInUse[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v18] )
          break;
      }
      ++v11;
      ++v14;
      p_entNum += 2;
      if ( v14 >= v10 )
        goto LABEL_44;
    }
    *outTargetEntNum = *p_entNum;
    return (unsigned int)v11;
  }
}

/*
==============
GTargetAssist::GetCollBoundsType
==============
*/
__int64 GTargetAssist::GetCollBoundsType(GTargetAssist *this, const __int16 entNum)
{
  DObj *ServerDObjForEnt; 
  const XModel **models; 
  __int64 v6; 
  __int64 v7; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 168, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 170, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entNum ))", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(&g_entities[entNum]);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 175, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  models = ServerDObjForEnt->models;
  if ( models && *models )
    return (unsigned int)(*models)->characterCollBoundsType;
  else
    return 10i64;
}

/*
==============
GTargetAssist::GetWorldBoneMatrix
==============
*/
void GTargetAssist::GetWorldBoneMatrix(GTargetAssist *this, const __int16 entNum, int boneIndex, tmat33_t<vec3_t> *outRot, vec3_t *outPos)
{
  const gentity_s *v8; 
  __int64 v9; 
  __int64 v10; 
  tmat43_t<vec3_t> outTagMat; 

  if ( (unsigned __int16)entNum >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 151, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 153, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entNum ))", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  v8 = &g_entities[entNum];
  G_Utils_DObjGetWorldBoneIndexMatrix(v8, boneIndex, &outTagMat);
  G_Utils_ApplyWorldUpToAxis(v8, (const tmat33_t<vec3_t> *)&outTagMat, outRot);
  G_Utils_ApplyWorldUpToPos(v8, &outTagMat.m[3], outPos);
}

/*
==============
GTargetAssist::GetWorldBonePos
==============
*/
void GTargetAssist::GetWorldBonePos(GTargetAssist *this, const __int16 entNum, int boneIndex, vec3_t *outPos)
{
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 

  if ( (unsigned __int16)entNum >= 0x800u )
  {
    v10 = 2048;
    v8 = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 141, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v7) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.cpp", 143, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entNum ))", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  G_Utils_DObjGetWorldBoneIndexPos(&g_entities[entNum], boneIndex, outPos);
}

/*
==============
GTargetAssist::ProcessAllEntities
==============
*/
void GTargetAssist::ProcessAllEntities(GTargetAssist *this)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  BgTargetAssist::ClearTargets(this);
  v2 = 0;
  if ( level.num_entities > 0 )
  {
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      if ( (unsigned int)v2 >= 0x800 )
      {
        LODWORD(v6) = 2048;
        LODWORD(v5) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v3].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v4] )
        this->EvaluatePotentialTargetEntity(this, &g_entities[v2]);
      ++v2;
      ++v4;
      ++v3;
    }
    while ( v2 < level.num_entities );
  }
}

