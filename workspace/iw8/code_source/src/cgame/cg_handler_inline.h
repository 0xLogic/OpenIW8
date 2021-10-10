/*
==============
CgHandler::GetWorldTagMatrix
==============
*/

bool __fastcall CgHandler::GetWorldTagMatrix(CgHandler *this, const int entNum, const scr_string_t tagName, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  return ?GetWorldTagMatrix@CgHandler@@UEBA_NHW4scr_string_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(this, entNum, tagName, outTagMat, outOrigin);
}

/*
==============
CgHandler::GetEntityOrigin
==============
*/

int __fastcall CgHandler::GetEntityOrigin(CgHandler *this, int entIndex, vec3_t *outPosition)
{
  return ?GetEntityOrigin@CgHandler@@UEBAHHAEATvec3_t@@@Z(this, entIndex, outPosition);
}

/*
==============
CgHandler::GetEntityWorldTagPosition
==============
*/

int __fastcall CgHandler::GetEntityWorldTagPosition(CgHandler *this, int entIndex, scr_string_t tagName, vec3_t *outPosition)
{
  return ?GetEntityWorldTagPosition@CgHandler@@QEBAHHW4scr_string_t@@AEATvec3_t@@@Z(this, entIndex, tagName, outPosition);
}

/*
==============
CgHandler::GetEntityWorldTagPosition
==============
*/
__int64 CgHandler::GetEntityWorldTagPosition(CgHandler *this, int entIndex, scr_string_t tagName, vec3_t *outPosition)
{
  centity_t *Entity; 
  const cpose_t *p_pose; 
  unsigned int number; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v11; 
  unsigned int v12; 
  const DObj *v13; 
  DObjAnimMat *LocalTagMatrix; 
  refdef_t *v15; 
  __int64 v17; 
  __int64 v18; 
  int v19; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  p_pose = &Entity->pose;
  if ( Entity )
  {
    if ( (Entity->flags & 1) == 0 )
      goto LABEL_22;
    number = Entity->nextState.number;
    m_localClientNum = this->m_localClientNum;
    if ( number > 0x9E4 )
    {
      v19 = Entity->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v19) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v18) = 2;
      LODWORD(v17) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v11 = 2533 * m_localClientNum + number;
    if ( v11 >= 0x13CA )
    {
      LODWORD(v18) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v18) )
        __debugbreak();
    }
    v12 = clientObjMap[v11];
    if ( !v12 )
      goto LABEL_22;
    if ( v12 >= (unsigned int)s_objCount )
    {
      LODWORD(v18) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v18) )
        __debugbreak();
    }
    v13 = (const DObj *)s_objBuf[v12];
    if ( v13 )
    {
      if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
        __debugbreak();
      LocalTagMatrix = CG_DObjGetLocalTagMatrix(p_pose, v13, tagName);
      if ( LocalTagMatrix )
      {
        v15 = g_activeRefDef;
        outPosition->v[0] = LocalTagMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
        outPosition->v[1] = LocalTagMatrix->trans.v[1] + v15->viewOffset.v[1];
        outPosition->v[2] = LocalTagMatrix->trans.v[2] + v15->viewOffset.v[2];
        return 1i64;
      }
    }
    else
    {
LABEL_22:
      CG_GetPoseOrigin(p_pose, outPosition);
    }
  }
  return 0i64;
}

/*
==============
CgHandler::GetEntityOrigin
==============
*/
centity_t *CgHandler::GetEntityOrigin(CgHandler *this, int entIndex, vec3_t *outPosition)
{
  const dvar_t *v3; 
  CgAntiLag *Instance; 
  LocalClientNum_t m_localClientNum; 
  cg_t *LocalClientGlobals; 
  int SceneAntilagTime; 
  float v11; 
  float v12; 
  int v13; 
  float v14; 
  centity_t *result; 
  int v16; 
  char v17[8]; 
  BgAntiLagEntityInfo outInfo; 

  v3 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    goto LABEL_19;
  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler_inline.h", 20, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( Instance->m_sceneAntiLagRefCount <= 0 )
    goto LABEL_19;
  m_localClientNum = this->m_localClientNum;
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler_inline.h", 27, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  SceneAntilagTime = BgAntiLag::GetSceneAntilagTime(Instance);
  if ( BgAntiLag::GetEntityInfoAtTime(Instance, LocalClientGlobals->predictedPlayerState.clientNum, entIndex, 1u, SceneAntilagTime, &outInfo) )
  {
    v11 = outInfo.origin.origin.v[1];
    v12 = outInfo.origin.origin.v[2];
    LOWORD(v16) = (unsigned int)&outInfo >> 8;
    BYTE2(v16) = (unsigned int)(v13 + 96) >> 24;
    HIBYTE(v16) = (unsigned __int8)&outInfo;
    LODWORD(outPosition->v[1]) = LODWORD(outInfo.origin.origin.v[2]) ^ v16 ^ s_antilag_aab_Y ^ LODWORD(outInfo.origin.origin.v[0]);
    LODWORD(outPosition->v[2]) = LODWORD(v11) ^ LODWORD(v12) ^ v16 ^ s_antilag_aab_Z;
    LODWORD(outPosition->v[0]) = LODWORD(v11) ^ v16 ^ ~s_antilag_aab_X;
    v14 = outPosition->v[0];
    memset(v17, 0, sizeof(v17));
    if ( ((LODWORD(v14) & 0x7F800000) == 2139095040 || (LODWORD(outPosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outPosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
    return (centity_t *)1;
  }
  else
  {
LABEL_19:
    result = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
    if ( result )
    {
      CG_GetPoseOrigin(&result->pose, outPosition);
      return (centity_t *)1;
    }
  }
  return result;
}

/*
==============
CgHandler::GetWorldTagMatrix
==============
*/
bool CgHandler::GetWorldTagMatrix(CgHandler *this, const int entNum, const scr_string_t tagName, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  centity_t *Entity; 
  const cpose_t *p_pose; 
  entityState_t *p_nextState; 
  __int16 eType; 
  const DObj *ClientDObj; 
  __int64 v15; 
  int v17; 

  if ( (unsigned int)entNum >= 0x800 )
  {
    v17 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler_inline.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v17) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  p_pose = &Entity->pose;
  if ( (Entity->flags & 1) == 0 )
    return 0;
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != 3 )
  {
    LODWORD(v15) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler_inline.h", 100, ASSERT_TYPE_ASSERT, "( !BG_IsCharacterEntity( &cent->nextState ) )", "BgHandler::GetWorldTagMatrix cannot be used with character entities due to multi-threading concerns. Entity num: %d", v15) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(p_nextState->number, this->m_localClientNum);
  return ClientDObj && CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, tagName, outTagMat, outOrigin) == 1;
}

