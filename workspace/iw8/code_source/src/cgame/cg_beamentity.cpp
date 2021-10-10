/*
==============
CG_BeamEntity_BuildTargetArray
==============
*/

int __fastcall CG_BeamEntity_BuildTargetArray(const LocalClientNum_t localClientNum, const centity_t *inflictorEnt, const centity_t *beamEnt, const int gameTime, ntl::fixed_array<CAssistTarget,20> *targetArray)
{
  return ?CG_BeamEntity_BuildTargetArray@@YAHW4LocalClientNum_t@@PEBUcentity_t@@1HAEAV?$fixed_array@VCAssistTarget@@$0BE@@ntl@@@Z(localClientNum, inflictorEnt, beamEnt, gameTime, targetArray);
}

/*
==============
CG_BeamEntity_Reset
==============
*/

void __fastcall CG_BeamEntity_Reset(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_BeamEntity_Reset@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_BeamEntity_Destroy
==============
*/

void __fastcall CG_BeamEntity_Destroy(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_BeamEntity_Destroy@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_BeamEntity_GetByOwner
==============
*/

const centity_t *__fastcall CG_BeamEntity_GetByOwner(const LocalClientNum_t localClientNum, centity_t *ownerEnt)
{
  return ?CG_BeamEntity_GetByOwner@@YAPEBUcentity_t@@W4LocalClientNum_t@@PEAU1@@Z(localClientNum, ownerEnt);
}

/*
==============
CG_BeamEntity_Update
==============
*/

void __fastcall CG_BeamEntity_Update(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_BeamEntity_Update@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_BeamEntity_BuildTargetArray
==============
*/
__int64 CG_BeamEntity_BuildTargetArray(const LocalClientNum_t localClientNum, const centity_t *inflictorEnt, const centity_t *beamEnt, const int gameTime, ntl::fixed_array<CAssistTarget,20> *targetArray)
{
  __int64 v6; 
  signed int v7; 
  ThreatSight *threatSight; 
  __int64 v9; 
  unsigned int v10; 
  CgEntitySystem *v11; 
  __int64 v12; 
  const centity_t *v13; 
  char v14; 
  scr_string_t String; 
  char ClientAttachTagBits; 
  unsigned int v17; 
  unsigned int v18; 
  const DObj *v19; 
  const cpose_t *Pose; 
  ConeTargetHitResults *HitResults; 
  ConeTargetHitResults *v22; 
  scr_string_t v23; 
  ConeTargetHitResults *v24; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int8 inOutIndex[8]; 
  char *outClientTagName; 
  __int64 v30; 
  ThreatSight *v31; 
  int modelIndex; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 

  v6 = localClientNum;
  if ( !beamEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 126, ASSERT_TYPE_ASSERT, "(beamEnt)", (const char *)&queryFormat, "beamEnt") )
    __debugbreak();
  v7 = 0;
  threatSight = beamEnt->nextState.lerp.u.actor.threatSight;
  v30 = 0i64;
  v31 = threatSight;
  v9 = v6;
  do
  {
    if ( (unsigned int)v7 >= 0x14 )
      break;
    v10 = *(_DWORD *)threatSight & 0x7FF;
    if ( v10 == 2047 )
      break;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v27) )
        __debugbreak();
    }
    if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v27) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v26) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v9] )
    {
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v27) )
        __debugbreak();
    }
    v11 = CgEntitySystem::ms_entitySystemArray[v9];
    v12 = v10;
    v13 = &v11->m_entities[v12];
    if ( (v11->m_entities[v12].flags & 1) != 0 )
    {
      v14 = 0;
      String = 0;
      ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
      outClientTagName = NULL;
      if ( NetConstStrings_GetClientTagName(((1 << ClientAttachTagBits) - 1) & (*(_DWORD *)threatSight >> 11), (const char **)&outClientTagName) )
      {
        String = SL_FindString(outClientTagName);
        if ( (unsigned int)v6 >= 2 )
        {
          LODWORD(v27) = 2;
          LODWORD(v26) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        v17 = v10 + 2533 * v6;
        if ( v17 >= 0x13CA )
        {
          LODWORD(v27) = v10 + 2533 * v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v27) )
            __debugbreak();
        }
        v18 = clientObjMap[v17];
        if ( v18 )
        {
          if ( v18 >= (unsigned int)s_objCount )
          {
            LODWORD(v27) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v27) )
              __debugbreak();
          }
          v19 = (const DObj *)s_objBuf[v18];
          if ( v19 )
          {
            inOutIndex[0] = -2;
            if ( DObjGetBoneIndexInternal_43(v19, String, inOutIndex, &modelIndex) )
            {
              Pose = CG_GetPose((LocalClientNum_t)v6, v10);
              if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 182, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
                __debugbreak();
              if ( CG_DObjGetWorldBoneMatrix(Pose, v19, inOutIndex[0], &outTagMat, &outOrigin) )
              {
                v14 = 1;
                if ( (unsigned __int64)v7 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                HitResults = ConeTargetInfo::GetHitResults(&targetArray->m_data[v7]);
                HitResults->hits[0].tagWorldPos = outOrigin;
                if ( (unsigned __int64)v7 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                v22 = ConeTargetInfo::GetHitResults(&targetArray->m_data[v7]);
                MatrixCopy33(&outTagMat, &v22->hits[0].tagWorldRot);
              }
            }
          }
        }
      }
      v23 = 0;
      if ( v14 )
        v23 = String;
      if ( (unsigned __int64)v7 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      CAssistTarget::SetTarget(&targetArray->m_data[v7], v13);
      if ( (unsigned __int64)v7 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      ConeTargetInfo::GetHitResults(&targetArray->m_data[v7])->hitCount = 1;
      if ( (unsigned __int64)v7 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      ConeTargetInfo::GetHitResults(&targetArray->m_data[v7])->hits[0].tagName = v23;
      if ( (unsigned __int64)v7 >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v24 = ConeTargetInfo::GetHitResults(&targetArray->m_data[v7]);
      threatSight = v31;
      ++v7;
      v9 = v6;
      v24->firstVisibleHitIndex = 0;
    }
    threatSight += 2;
    ++v30;
    v31 = threatSight;
  }
  while ( v30 < 7 );
  return (unsigned int)v7;
}

/*
==============
CG_BeamEntity_Destroy
==============
*/
void CG_BeamEntity_Destroy(const LocalClientNum_t localClientNum, centity_t *cent)
{
  int prevOtherEntityNum; 
  centity_t *Entity; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 45, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->pose.eType != 23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 46, ASSERT_TYPE_ASSERT, "(cent->pose.eType == ET_BEAM)", (const char *)&queryFormat, "cent->pose.eType == ET_BEAM") )
    __debugbreak();
  prevOtherEntityNum = cent->prevOtherEntityNum;
  if ( prevOtherEntityNum != 2047 )
  {
    Entity = CG_GetEntity(localClientNum, prevOtherEntityNum);
    if ( (Entity->flags & 1) != 0 )
      Entity->beamEntNum = 2047;
  }
}

/*
==============
CG_BeamEntity_GetByOwner
==============
*/
centity_t *CG_BeamEntity_GetByOwner(const LocalClientNum_t localClientNum, centity_t *ownerEnt)
{
  int beamEntNum; 
  centity_t *result; 

  if ( !ownerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 106, ASSERT_TYPE_ASSERT, "(ownerEnt)", (const char *)&queryFormat, "ownerEnt") )
    __debugbreak();
  beamEntNum = ownerEnt->beamEntNum;
  if ( !beamEntNum )
    return 0i64;
  if ( beamEntNum == 2047 )
    return 0i64;
  result = CG_GetEntity(localClientNum, beamEntNum);
  if ( (result->flags & 1) == 0 )
    return 0i64;
  return result;
}

/*
==============
CG_BeamEntity_Reset
==============
*/
void CG_BeamEntity_Reset(const LocalClientNum_t localClientNum, centity_t *cent)
{
  scr_string_t trackedEntTag; 
  unsigned int EntityClientTagIndex; 
  scr_string_t String; 
  char ClientAttachTagBits; 
  int v8; 
  int FXId; 
  char *outClientTagName; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 71, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 72, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_BEAM)", (const char *)&queryFormat, "cent->nextState.eType == ET_BEAM") )
    __debugbreak();
  if ( cent->nextState.lerp.u.anonymous.data[0] == 1 )
  {
    trackedEntTag = 0;
    outClientTagName = NULL;
    EntityClientTagIndex = LerpEntityStateBeamScript::GetEntityClientTagIndex(&cent->nextState.lerp.u.beam.script);
    if ( NetConstStrings_GetClientTagName(EntityClientTagIndex, (const char **)&outClientTagName) )
      String = SL_FindString(outClientTagName);
    else
      String = 0;
    outClientTagName = NULL;
    ClientAttachTagBits = BgDynamicLimits::GetClientAttachTagBits();
    if ( NetConstStrings_GetClientTagName(((1 << ClientAttachTagBits) - 1) & ((unsigned int)cent->nextState.lerp.u.anonymous.data[1] >> 11), (const char **)&outClientTagName) )
      trackedEntTag = SL_FindString(outClientTagName);
    v8 = cent->nextState.lerp.u.anonymous.data[1] & 0x7FF;
    FXId = LerpEntityStateBeamScript::GetFXId(&cent->nextState.lerp.u.beam.script);
    CG_ScriptedLaserBeamAdd(localClientNum, cent, String, FXId, v8, trackedEntTag);
  }
}

/*
==============
CG_BeamEntity_Update
==============
*/
void CG_BeamEntity_Update(const LocalClientNum_t localClientNum, centity_t *cent)
{
  int otherEntityNum; 
  centity_t *Entity; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 16, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_BEAM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_beamentity.cpp", 17, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_BEAM)", (const char *)&queryFormat, "cent->nextState.eType == ET_BEAM") )
    __debugbreak();
  otherEntityNum = cent->nextState.otherEntityNum;
  if ( otherEntityNum != 2047 )
  {
    Entity = CG_GetEntity(localClientNum, otherEntityNum);
    if ( (Entity->flags & 1) != 0 )
      Entity->beamEntNum = cent->nextState.number;
  }
}

