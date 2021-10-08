/*
==============
DynEnt_GetPosePartFromPose
==============
*/

GfxPlacement *__fastcall DynEnt_GetPosePartFromPose(LocalClientNum_t localClientNum, DynEntityPose *pose, unsigned __int8 localPoseIdx)
{
  return ?DynEnt_GetPosePartFromPose@@YAPEAUGfxPlacement@@W4LocalClientNum_t@@PEAUDynEntityPose@@E@Z(localClientNum, pose, localPoseIdx);
}

/*
==============
DynEnt_GetPoseFromClientId
==============
*/

DynEntityPose *__fastcall DynEnt_GetPoseFromClientId(LocalClientNum_t localClientNum, unsigned __int16 clientId, DynEntityBasis basis)
{
  return ?DynEnt_GetPoseFromClientId@@YAPEAUDynEntityPose@@W4LocalClientNum_t@@GW4DynEntityBasis@@@Z(localClientNum, clientId, basis);
}

/*
==============
DynEnt_GetClient
==============
*/

DynEntityClient *__fastcall DynEnt_GetClient(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  return ?DynEnt_GetClient@@YAPEAUDynEntityClient@@W4LocalClientNum_t@@IW4DynEntityBasis@@@Z(localClientNum, dynEntId, basis);
}

/*
==============
DynEnt_GetPose
==============
*/

DynEntityPose *__fastcall DynEnt_GetPose(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  return ?DynEnt_GetPose@@YAPEAUDynEntityPose@@W4LocalClientNum_t@@IW4DynEntityBasis@@@Z(localClientNum, dynEntId, basis);
}

/*
==============
DynEnt_GetClientFromClientId
==============
*/

DynEntityClient *__fastcall DynEnt_GetClientFromClientId(LocalClientNum_t localClientNum, unsigned __int16 clientId, DynEntityBasis basis)
{
  return ?DynEnt_GetClientFromClientId@@YAPEAUDynEntityClient@@W4LocalClientNum_t@@GW4DynEntityBasis@@@Z(localClientNum, clientId, basis);
}

/*
==============
DynEnt_GetClientFromClientId
==============
*/
DynEntityClient *DynEnt_GetClientFromClientId(LocalClientNum_t localClientNum, unsigned __int16 clientId, DynEntityBasis basis)
{
  __int64 v3; 
  __int64 v6; 
  unsigned __int16 v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v6 = (unsigned __int8)basis + 2 * v3;
  v7 = g_dynEntClientEntsAllocCount[0][v6];
  if ( clientId >= v7 )
  {
    LODWORD(v10) = v7;
    LODWORD(v9) = clientId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  return &g_dynEntClientLists[0][v6][clientId];
}

/*
==============
DynEnt_GetClient
==============
*/
DynEntityClient *DynEnt_GetClient(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  __int64 v3; 
  const DynEntityDef *Def; 
  unsigned __int16 v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  __int64 v10; 
  __int64 v11; 

  v3 = localClientNum;
  Def = DynEnt_GetDef(dynEntId, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( Def->clientId[v3] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  v6 = Def->clientId[v3];
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v11) = 2;
    LODWORD(v10) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v7 = (unsigned __int8)basis + 2 * v3;
  v8 = g_dynEntClientEntsAllocCount[0][v7];
  if ( v6 >= v8 )
  {
    LODWORD(v11) = v8;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[0][v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  return &g_dynEntClientLists[0][v7][v6];
}

/*
==============
DynEnt_GetPoseFromClientId
==============
*/
DynEntityPose *DynEnt_GetPoseFromClientId(LocalClientNum_t localClientNum, unsigned __int16 clientId, DynEntityBasis basis)
{
  __int64 v3; 
  __int64 v6; 
  unsigned __int16 v7; 
  __int64 v9; 
  __int64 v11; 
  int v12; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v12) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v6 = (unsigned __int8)basis + 2 * v3;
  if ( !g_dynEntPoseLists[0][v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
    __debugbreak();
  v7 = g_dynEntClientEntsAllocCount[0][v6];
  if ( clientId >= v7 )
  {
    LODWORD(v11) = v7;
    LODWORD(v9) = clientId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  return &g_dynEntPoseLists[0][v6][clientId];
}

/*
==============
DynEnt_GetPose
==============
*/
DynEntityPose *DynEnt_GetPose(LocalClientNum_t localClientNum, unsigned int dynEntId, DynEntityBasis basis)
{
  __int64 v3; 
  const DynEntityDef *Def; 

  v3 = localClientNum;
  Def = DynEnt_GetDef(dynEntId, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 195, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( Def->clientId[v3] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 196, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  return DynEnt_GetPoseFromClientId((LocalClientNum_t)v3, Def->clientId[v3], basis);
}

/*
==============
DynEnt_GetPosePartFromPose
==============
*/
DynEntityPose *DynEnt_GetPosePartFromPose(LocalClientNum_t localClientNum, DynEntityPose *pose, unsigned __int8 localPoseIdx)
{
  __int64 v3; 
  unsigned __int8 numParts; 
  unsigned int posePart1FirstIndex; 
  __int64 v9; 
  __int64 v10; 

  v3 = localClientNum;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 235, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  numParts = pose->numParts;
  if ( localPoseIdx >= numParts )
  {
    LODWORD(v9) = localPoseIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", v9, numParts) )
      __debugbreak();
  }
  if ( !localPoseIdx )
    return pose;
  posePart1FirstIndex = pose->posePart1FirstIndex;
  if ( posePart1FirstIndex + localPoseIdx - 1 >= g_dynEntExtraPosePartsAllocCount[v3] )
  {
    LODWORD(v10) = g_dynEntExtraPosePartsAllocCount[v3];
    LODWORD(v9) = posePart1FirstIndex + localPoseIdx - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return (DynEntityPose *)&g_dynEntPoseExtraParts[v3][pose->posePart1FirstIndex - 1 + localPoseIdx];
}

