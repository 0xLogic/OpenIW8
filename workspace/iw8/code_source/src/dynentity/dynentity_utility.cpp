/*
==============
DynEnt_GetAnchorEntity
==============
*/

centity_t *__fastcall DynEnt_GetAnchorEntity(LocalClientNum_t localClientNum, unsigned int anchorIndex)
{
  return ?DynEnt_GetAnchorEntity@@YAPEAUcentity_t@@W4LocalClientNum_t@@I@Z(localClientNum, anchorIndex);
}

/*
==============
DynEnt_GetBoneIdx
==============
*/

unsigned __int8 __fastcall DynEnt_GetBoneIdx(LocalClientNum_t localClientNum, unsigned int dynEntId, scr_string_t boneName, const char *debugName)
{
  return ?DynEnt_GetBoneIdx@@YAEW4LocalClientNum_t@@IW4scr_string_t@@PEBD@Z(localClientNum, dynEntId, boneName, debugName);
}

/*
==============
DynEnt_GetBoneTransform
==============
*/

void __fastcall DynEnt_GetBoneTransform(LocalClientNum_t localClientNum, unsigned int dynEntId, unsigned __int8 boneIdx, vec3_t *outPosition, vec4_t *outOrientationAsQuat)
{
  ?DynEnt_GetBoneTransform@@YAXW4LocalClientNum_t@@IEAEATvec3_t@@AEATvec4_t@@@Z(localClientNum, dynEntId, boneIdx, outPosition, outOrientationAsQuat);
}

/*
==============
DynEnt_GetAnchorEntity
==============
*/
centity_t *DynEnt_GetAnchorEntity(LocalClientNum_t localClientNum, unsigned int anchorIndex)
{
  __int64 v3; 
  int AnchorEntNum; 
  __int64 v5; 
  CgEntitySystem *v6; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 

  v3 = localClientNum;
  if ( anchorIndex >= CM_ClientAnchorCount() )
  {
    v10 = CM_ClientAnchorCount();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( anchorIndex ) < (unsigned)( CM_ClientAnchorCount() )", "anchorIndex doesn't index CM_ClientAnchorCount()\n\t%i not in [0, %i)", anchorIndex, v10) )
      __debugbreak();
  }
  AnchorEntNum = CM_GetAnchorEntNum(anchorIndex);
  v5 = AnchorEntNum;
  if ( (unsigned int)AnchorEntNum > 0x7FF )
  {
    LODWORD(v8) = AnchorEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 91, ASSERT_TYPE_ASSERT, "( 0 ) <= ( entIndex ) && ( entIndex ) <= ( ( 2048 ) - 1 )", "entIndex not in [0, MAX_GENTITIES - 1]\n\t%i not in [%i, %i]", v8, 0i64, 2047) )
      __debugbreak();
  }
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v9) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v3] )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v9) )
      __debugbreak();
  }
  v6 = CgEntitySystem::ms_entitySystemArray[v3];
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  return &v6->m_entities[v5];
}

/*
==============
DynEnt_GetBoneIdx
==============
*/
unsigned __int8 DynEnt_GetBoneIdx(LocalClientNum_t localClientNum, unsigned int dynEntId, scr_string_t boneName, const char *debugName)
{
  __int64 v4; 
  const DynEntityDef *Def; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  DynEntityClient **v10; 
  const XModel **p_activeModel; 
  const char *name; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int8 index; 

  v4 = localClientNum;
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( Def->clientId[v4] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  v8 = Def->clientId[v4];
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  v9 = g_dynEntClientEntsAllocCount[v4][0];
  if ( v8 >= v9 )
  {
    LODWORD(v16) = v9;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v10 = g_dynEntClientLists[v4];
  if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  p_activeModel = &(*v10)[v8].activeModel;
  if ( !p_activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 40, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  index = -2;
  if ( !*p_activeModel )
    return -2;
  if ( XModelGetBoneIndex(*p_activeModel, boneName, 0, &index) )
    return index;
  name = (*p_activeModel)->name;
  v14 = SL_ConvertToString(boneName);
  Com_PrintWarning(29, "Dynent system can't find bone %s in model %s associated with asset %s", v14, name, debugName);
  return 0;
}

/*
==============
DynEnt_GetBoneTransform
==============
*/
void DynEnt_GetBoneTransform(LocalClientNum_t localClientNum, unsigned int dynEntId, unsigned __int8 boneIdx, vec3_t *outPosition, vec4_t *outOrientationAsQuat)
{
  __int64 v5; 
  const DynEntityDef *Def; 
  __int64 v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  DynEntityPose *v14; 
  unsigned __int8 numParts; 
  unsigned int posePart1FirstIndex; 
  __int64 v17; 
  __int64 v18; 

  v5 = localClientNum;
  if ( boneIdx == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 64, ASSERT_TYPE_ASSERT, "(boneIdx != 255)", (const char *)&queryFormat, "boneIdx != NO_BONEINDEX") )
    __debugbreak();
  Def = DynEnt_GetDef(dynEntId, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  v10 = v5;
  if ( Def->clientId[v5] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  v11 = Def->clientId[v5];
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, 2) )
      __debugbreak();
  }
  v12 = v5;
  if ( !g_dynEntPoseLists[v12][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
    __debugbreak();
  v13 = g_dynEntClientEntsAllocCount[v10][0];
  if ( v11 >= v13 )
  {
    LODWORD(v18) = v13;
    LODWORD(v17) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v14 = &g_dynEntPoseLists[v12][0][v11];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 68, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( boneIdx >= v14->numParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 69, ASSERT_TYPE_ASSERT, "(boneIdx < dynEntPose->numParts)", (const char *)&queryFormat, "boneIdx < dynEntPose->numParts") )
    __debugbreak();
  numParts = v14->numParts;
  if ( boneIdx >= numParts )
  {
    LODWORD(v18) = numParts;
    LODWORD(v17) = boneIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( boneIdx )
  {
    posePart1FirstIndex = v14->posePart1FirstIndex;
    if ( posePart1FirstIndex + boneIdx - 1 >= g_dynEntExtraPosePartsAllocCount[v10] )
    {
      LODWORD(v18) = g_dynEntExtraPosePartsAllocCount[v10];
      LODWORD(v17) = posePart1FirstIndex + boneIdx - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v14 = (DynEntityPose *)&g_dynEntPoseExtraParts[v10][v14->posePart1FirstIndex - 1 + boneIdx];
  }
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.cpp", 73, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
    __debugbreak();
  outPosition->v[0] = v14->posePart0.origin.v[0];
  outPosition->v[1] = v14->posePart0.origin.v[1];
  outPosition->v[2] = v14->posePart0.origin.v[2];
  *outOrientationAsQuat = v14->posePart0.quat;
}

