/*
==============
G_VehiclePath_GetNumTotalNodes
==============
*/

__int16 __fastcall G_VehiclePath_GetNumTotalNodes()
{
  return ?G_VehiclePath_GetNumTotalNodes@@YAFXZ();
}

/*
==============
G_VehiclePathCmd_GetNodeArray
==============
*/

void __fastcall G_VehiclePathCmd_GetNodeArray(scrContext_t *scrContext)
{
  ?G_VehiclePathCmd_GetNodeArray@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_VehiclePathCmd_GetNode
==============
*/

void __fastcall G_VehiclePathCmd_GetNode(scrContext_t *scrContext)
{
  ?G_VehiclePathCmd_GetNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_VehiclePath_AttachPathPos
==============
*/

bool __fastcall G_VehiclePath_AttachPathPos(VehiclePathPos *vpp, __int16 nodeIdx)
{
  return ?G_VehiclePath_AttachPathPos@@YA_NPEAUVehiclePathPos@@F@Z(vpp, nodeIdx);
}

/*
==============
G_VehiclePath_CountNumNodesForPath
==============
*/

__int16 __fastcall G_VehiclePath_CountNumNodesForPath(__int16 startNodeIdx)
{
  return ?G_VehiclePath_CountNumNodesForPath@@YAFF@Z(startNodeIdx);
}

/*
==============
G_VehiclePath_SetSpeedOverride
==============
*/

void __fastcall G_VehiclePath_SetSpeedOverride(VehiclePathPos *vpp, const float newSpeedOverride)
{
  ?G_VehiclePath_SetSpeedOverride@@YAXPEAUVehiclePathPos@@M@Z(vpp, newSpeedOverride);
}

/*
==============
G_VehiclePath_Setup
==============
*/

void G_VehiclePath_Setup(void)
{
  ?G_VehiclePath_Setup@@YAXXZ();
}

/*
==============
G_VehiclePath_InitPathPos
==============
*/

void __fastcall G_VehiclePath_InitPathPos(VehiclePathPos *vpp)
{
  ?G_VehiclePath_InitPathPos@@YAXPEAUVehiclePathPos@@@Z(vpp);
}

/*
==============
G_VehiclePath_UpdatePathPosAnimated
==============
*/

void __fastcall G_VehiclePath_UpdatePathPosAnimated(VehiclePathPos *vpp, const vec3_t *origin, const vec3_t *angles)
{
  ?G_VehiclePath_UpdatePathPosAnimated@@YAXPEAUVehiclePathPos@@AEBTvec3_t@@1@Z(vpp, origin, angles);
}

/*
==============
G_VehiclePath_GetNode
==============
*/

const VehiclePathNode *__fastcall G_VehiclePath_GetNode(__int16 nodeIdx)
{
  return ?G_VehiclePath_GetNode@@YAPEBUVehiclePathNode@@F@Z(nodeIdx);
}

/*
==============
G_VehiclePathScr_GetNodeField
==============
*/

void __fastcall G_VehiclePathScr_GetNodeField(int nodeIndex, int offset)
{
  ?G_VehiclePathScr_GetNodeField@@YAXHH@Z(nodeIndex, offset);
}

/*
==============
G_VehiclePath_StartPathPos
==============
*/

void __fastcall G_VehiclePath_StartPathPos(VehiclePathPos *vpp)
{
  ?G_VehiclePath_StartPathPos@@YAXPEAUVehiclePathPos@@@Z(vpp);
}

/*
==============
G_VehiclePath_UpdatePathPos
==============
*/

void __fastcall G_VehiclePath_UpdatePathPos(VehiclePathPos *vpp, VehiclePathDir pathDir)
{
  ?G_VehiclePath_UpdatePathPos@@YAXPEAUVehiclePathPos@@W4VehiclePathDir@@@Z(vpp, pathDir);
}

/*
==============
G_VehiclePath_ComputeLookAhead
==============
*/

void __fastcall G_VehiclePath_ComputeLookAhead(__int16 nodeIdx, const vec3_t *curPos, float lookAheadDist, vec3_t *outLookAhead)
{
  ?G_VehiclePath_ComputeLookAhead@@YAXFAEBTvec3_t@@MAEAT1@@Z(nodeIdx, curPos, lookAheadDist, outLookAhead);
}

/*
==============
G_VehiclePath_UpdatePathPos
==============
*/

void __fastcall G_VehiclePath_UpdatePathPos(VehiclePathPos *vpp, VehiclePathDir pathDir, float deltaTime)
{
  ?G_VehiclePath_UpdatePathPos@@YAXPEAUVehiclePathPos@@W4VehiclePathDir@@M@Z(vpp, pathDir, deltaTime);
}

/*
==============
G_VehiclePathScr_AddFieldsForNode
==============
*/

void __fastcall G_VehiclePathScr_AddFieldsForNode(scrContext_t *scrContext)
{
  ?G_VehiclePathScr_AddFieldsForNode@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_VehiclePath_FreePathPos
==============
*/

void __fastcall G_VehiclePath_FreePathPos(VehiclePathPos *vpp)
{
  ?G_VehiclePath_FreePathPos@@YAXPEAUVehiclePathPos@@@Z(vpp);
}

/*
==============
G_VehiclePath_DebugArrow
==============
*/

void __fastcall G_VehiclePath_DebugArrow(const vec3_t *pos, const vec3_t *angles)
{
  ?G_VehiclePath_DebugArrow@@YAXAEBTvec3_t@@0@Z(pos, angles);
}

/*
==============
G_VehiclePath_IsEndOfPath
==============
*/

bool __fastcall G_VehiclePath_IsEndOfPath(const VehiclePathPos *vpp)
{
  return ?G_VehiclePath_IsEndOfPath@@YA_NPEBUVehiclePathPos@@@Z(vpp);
}

/*
==============
G_VehiclePath_IsValidNode
==============
*/

bool __fastcall G_VehiclePath_IsValidNode(__int16 nodeIdx)
{
  return ?G_VehiclePath_IsValidNode@@YA_NF@Z(nodeIdx);
}

/*
==============
G_VehiclePathScr_GetNodeIndex
==============
*/

__int16 __fastcall G_VehiclePathScr_GetNodeIndex(scrContext_t *scrContext, unsigned int scriptParamIndex)
{
  return ?G_VehiclePathScr_GetNodeIndex@@YAFAEAUscrContext_t@@I@Z(scrContext, scriptParamIndex);
}

/*
==============
G_VehiclePath_DrawDebug
==============
*/

void G_VehiclePath_DrawDebug(void)
{
  ?G_VehiclePath_DrawDebug@@YAXXZ();
}

/*
==============
G_VehiclePath_Free
==============
*/

void G_VehiclePath_Free(void)
{
  ?G_VehiclePath_Free@@YAXXZ();
}

/*
==============
G_VehiclePath_Init
==============
*/

void G_VehiclePath_Init(void)
{
  ?G_VehiclePath_Init@@YAXXZ();
}

/*
==============
G_VehiclePath_FindNodeForPathName
==============
*/

__int16 __fastcall G_VehiclePath_FindNodeForPathName(scr_string_t *pathname)
{
  return ?G_VehiclePath_FindNodeForPathName@@YAFPEAW4scr_string_t@@@Z(pathname);
}

/*
==============
G_VehiclePath_PathDebugLine
==============
*/

void __fastcall G_VehiclePath_PathDebugLine(const vec3_t *start, const vec3_t *end, int forceDraw)
{
  ?G_VehiclePath_PathDebugLine@@YAXAEBTvec3_t@@0H@Z(start, end, forceDraw);
}

/*
==============
G_VehiclePath_DrawCurrentPath
==============
*/

void G_VehiclePath_DrawCurrentPath(void)
{
  ?G_VehiclePath_DrawCurrentPath@@YAXXZ();
}

/*
==============
G_VehiclePath_UpdatePathPosLookAhead
==============
*/

void __fastcall G_VehiclePath_UpdatePathPosLookAhead(VehiclePathPos *vpp, float lookAheadOffset, VehiclePathDir pathDir)
{
  ?G_VehiclePath_UpdatePathPosLookAhead@@YAXPEAUVehiclePathPos@@MW4VehiclePathDir@@@Z(vpp, lookAheadOffset, pathDir);
}

/*
==============
G_VehiclePath_UpdatePathPosNotifies
==============
*/

bool __fastcall G_VehiclePath_UpdatePathPosNotifies(const VehiclePathPos *prevVpp, const VehiclePathPos *nextVpp, int entIndex, __int16 waitNode, VehiclePathNotifyMode notifyMode, VehiclePathDir pathDir)
{
  return ?G_VehiclePath_UpdatePathPosNotifies@@YA_NPEBUVehiclePathPos@@0HFW4VehiclePathNotifyMode@@W4VehiclePathDir@@@Z(prevVpp, nextVpp, entIndex, waitNode, notifyMode, pathDir);
}

/*
==============
G_VehiclePathCmd_GetAllNodes
==============
*/

void __fastcall G_VehiclePathCmd_GetAllNodes(scrContext_t *scrContext)
{
  ?G_VehiclePathCmd_GetAllNodes@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_VehiclePath_SetPathPosSwitchNode
==============
*/

void __fastcall G_VehiclePath_SetPathPosSwitchNode(VehiclePathPos *vpp, __int16 srcNodeIdx, __int16 dstNodeIdx)
{
  ?G_VehiclePath_SetPathPosSwitchNode@@YAXPEAUVehiclePathPos@@FF@Z(vpp, srcNodeIdx, dstNodeIdx);
}

/*
==============
G_VehiclePathScr_FreeScriptInfo
==============
*/

void G_VehiclePathScr_FreeScriptInfo(void)
{
  ?G_VehiclePathScr_FreeScriptInfo@@YAXXZ();
}

/*
==============
G_VehiclePath_SpawnNode
==============
*/

void __fastcall G_VehiclePath_SpawnNode(const char *className)
{
  ?G_VehiclePath_SpawnNode@@YAXPEBD@Z(className);
}

/*
==============
G_VehiclePath_UpdatePathPosPhysics
==============
*/

void __fastcall G_VehiclePath_UpdatePathPosPhysics(VehiclePathPos *vpp, const vec3_t *origin, const vec3_t *angles, VehiclePathDir pathDir)
{
  ?G_VehiclePath_UpdatePathPosPhysics@@YAXPEAUVehiclePathPos@@AEBTvec3_t@@1W4VehiclePathDir@@@Z(vpp, origin, angles, pathDir);
}

/*
==============
G_VehiclePath_DebugLine
==============
*/

void __fastcall G_VehiclePath_DebugLine(const vec3_t *start, const vec3_t *end, bool mainPath)
{
  ?G_VehiclePath_DebugLine@@YAXAEBTvec3_t@@0_N@Z(start, end, mainPath);
}

/*
==============
G_VehiclePathCmd_GetAllNodes
==============
*/
void G_VehiclePathCmd_GetAllNodes(scrContext_t *scrContext)
{
  int v2; 
  __int16 *p_index; 

  Scr_MakeArray(scrContext);
  v2 = 0;
  if ( s_numNodes > 0 )
  {
    p_index = &s_nodes[0].index;
    do
    {
      Scr_AddEntityNum(scrContext, *p_index, ENTITY_CLASS_VEHICLENODE);
      Scr_AddArray(scrContext);
      p_index += 38;
      ++v2;
    }
    while ( v2 < s_numNodes );
  }
}

/*
==============
G_VehiclePathCmd_GetNode
==============
*/
void G_VehiclePathCmd_GetNode(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  const char *String; 
  int Offset; 
  __int64 v5; 
  __int64 v6; 
  __int16 v7; 
  VehiclePathNode *v8; 
  int v9; 
  __int64 *p_ofs; 
  VehiclePathNode *v11; 
  int v12; 

  ConstString = Scr_GetConstString(scrContext, 0);
  String = Scr_GetString(scrContext, 1u);
  Offset = Scr_GetOffset(scrContext, ENTITY_CLASS_VEHICLENODE, String);
  v5 = Offset;
  if ( Offset >= 0 )
  {
    if ( (unsigned int)Offset >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2815, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( vehicleNodeFields ) ) + 0 ) - 1 )", "offset doesn't index ARRAY_COUNT( vehicleNodeFields ) - 1\n\t%i not in [0, %i)", Offset, 9) )
      __debugbreak();
    v6 = v5;
    if ( vehicleNodeFields[v6].type != F_STRING )
      Scr_ParamError(COM_ERR_2950, scrContext, 1u, "key is not internally a string");
    v7 = s_numNodes;
    v8 = NULL;
    v9 = 0;
    if ( s_numNodes > 0 )
    {
      p_ofs = &vehicleNodeFields[v6].ofs;
      v11 = s_nodes;
      do
      {
        v12 = *(scr_string_t *)((char *)&v11->name + *p_ofs);
        if ( v12 && v12 == ConstString )
        {
          if ( v8 )
          {
            Scr_Error(COM_ERR_2951, scrContext, "GetVehicleNode used with more than one node");
            v7 = s_numNodes;
          }
          v8 = v11;
        }
        ++v9;
        ++v11;
      }
      while ( v9 < v7 );
      if ( v8 )
        Scr_AddEntityNum(scrContext, v8->index, ENTITY_CLASS_VEHICLENODE);
    }
  }
}

/*
==============
G_VehiclePathCmd_GetNodeArray
==============
*/
void G_VehiclePathCmd_GetNodeArray(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  const char *String; 
  int Offset; 
  __int64 v5; 
  __int64 v6; 
  __int16 v7; 
  int v8; 
  __int64 *p_ofs; 
  VehiclePathNode *v10; 
  int v11; 

  ConstString = Scr_GetConstString(scrContext, 0);
  String = Scr_GetString(scrContext, 1u);
  Offset = Scr_GetOffset(scrContext, ENTITY_CLASS_VEHICLENODE, String);
  v5 = Offset;
  if ( Offset >= 0 )
  {
    if ( (unsigned int)Offset >= 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2882, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( vehicleNodeFields ) ) + 0 ) - 1 )", "offset doesn't index ARRAY_COUNT( vehicleNodeFields ) - 1\n\t%i not in [0, %i)", Offset, 9) )
      __debugbreak();
    v6 = v5;
    if ( vehicleNodeFields[v6].type != F_STRING )
      Scr_ParamError(COM_ERR_2952, scrContext, 1u, "key is not internally a string");
    Scr_MakeArray(scrContext);
    v7 = s_numNodes;
    v8 = 0;
    if ( s_numNodes > 0 )
    {
      p_ofs = &vehicleNodeFields[v6].ofs;
      v10 = s_nodes;
      do
      {
        v11 = *(scr_string_t *)((char *)&v10->name + *p_ofs);
        if ( v11 )
        {
          if ( v11 == ConstString )
          {
            Scr_AddEntityNum(scrContext, v10->index, ENTITY_CLASS_VEHICLENODE);
            Scr_AddArray(scrContext);
            v7 = s_numNodes;
          }
        }
        ++v8;
        ++v10;
      }
      while ( v8 < v7 );
    }
  }
}

/*
==============
G_VehiclePathScr_AddFieldsForNode
==============
*/
void G_VehiclePathScr_AddFieldsForNode(scrContext_t *scrContext)
{
  VehicleNodeField *i; 
  __int64 v3; 
  unsigned int v4; 

  for ( i = vehicleNodeFields; i->name; ++i )
  {
    v3 = ((char *)&i->canonicalString - (char *)&vehicleNodeFields[0].canonicalString) >> 5;
    v4 = (unsigned __int16)v3;
    if ( v3 != (unsigned __int16)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2765, ASSERT_TYPE_SANITY, "( (f - vehicleNodeFields) == (unsigned short)( f - vehicleNodeFields ) )", (const char *)&queryFormat, "(f - vehicleNodeFields) == (unsigned short)( f - vehicleNodeFields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_VEHICLENODE, *i->name, i->canonicalString, v4);
  }
}

/*
==============
G_VehiclePathScr_FreeScriptInfo
==============
*/
void G_VehiclePathScr_FreeScriptInfo(void)
{
  int v0; 
  scrContext_t *v1; 
  __int16 *p_index; 

  v0 = 0;
  v1 = ScriptContext_Server();
  if ( s_numNodes > 0 )
  {
    p_index = &s_nodes[0].index;
    do
    {
      Scr_FreeEntityNum(v1, *p_index, ENTITY_CLASS_VEHICLENODE);
      p_index += 38;
      ++v0;
    }
    while ( v0 < s_numNodes );
  }
}

/*
==============
G_VehiclePathScr_GetNodeField
==============
*/
void G_VehiclePathScr_GetNodeField(int nodeIndex, int offset)
{
  __int64 v2; 
  __int64 v3; 
  scrContext_t *v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = offset;
  v3 = nodeIndex;
  if ( (unsigned int)offset >= 9 )
  {
    v8 = 9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2777, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( vehicleNodeFields ) ) + 0 ) - 1 )", "offset doesn't index ARRAY_COUNT( vehicleNodeFields ) - 1\n\t%i not in [0, %i)", offset, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= s_numNodes )
  {
    LODWORD(v7) = s_numNodes;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2778, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( s_numNodes )", "nodeIndex doesn't index s_numNodes\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  v4 = ScriptContext_Server();
  Scr_GetGenericField(v4, (unsigned __int8 *)&s_nodes[v3], vehicleNodeFields[v2].type, vehicleNodeFields[v2].ofs);
}

/*
==============
G_VehiclePathScr_GetNodeIndex
==============
*/
__int64 G_VehiclePathScr_GetNodeIndex(scrContext_t *scrContext, unsigned int scriptParamIndex)
{
  scr_entref_t EntityRef; 
  __int16 v5; 

  EntityRef = Scr_GetEntityRef(scrContext, scriptParamIndex);
  if ( EntityRef.entclass == ENTITY_CLASS_VEHICLENODE )
  {
    v5 = truncate_cast<short,unsigned int>(EntityRef.entnum);
    if ( v5 >= s_numNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2748, ASSERT_TYPE_SANITY, "( nodeIndex < s_numNodes )", (const char *)&queryFormat, "nodeIndex < s_numNodes") )
      __debugbreak();
    return (unsigned __int16)v5;
  }
  else
  {
    Scr_ParamError(COM_ERR_2949, scrContext, scriptParamIndex, "Not a vehicle node");
    return 0xFFFFFFFFi64;
  }
}

/*
==============
G_VehiclePath_AdvanceAnimPathPosForward
==============
*/
void G_VehiclePath_AdvanceAnimPathPosForward(VehiclePathPos *vpp)
{
  unsigned int v2; 
  int v3; 
  unsigned int nodeIdx; 
  char v5; 
  VehiclePathNode *v6; 
  __int64 index; 
  float length; 
  float v9; 
  float v10; 
  const dvar_t *v11; 
  int integer; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  VehiclePathNode *v17; 
  VehiclePathNode *v18; 
  unsigned int v20; 
  __int64 v21; 
  __int64 nextIdx; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v28; 
  float v29; 
  __int128 v30; 
  VehiclePathNode *v31; 
  __int64 v32; 
  __int128 v35; 
  float v36; 
  float v37; 
  VehiclePathNode *v38; 
  __int64 v39; 
  __int128 v41; 
  __int64 v45; 
  VehiclePathNode *v46; 
  __int128 v47; 
  bool v49; 
  float v50; 
  __int16 flags; 
  __int16 v52; 
  __int16 v53; 
  __int16 v54; 
  __int64 v55; 
  __int16 v56; 
  float speed; 
  __int16 v58; 
  float lookAhead; 
  __int64 v60; 
  __int64 v61; 
  float frac; 
  float v63; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1875, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v2 = s_numNodes;
  v3 = 0;
  nodeIdx = vpp->nodeIdx;
  v5 = 1;
  frac = vpp->frac;
  if ( s_numNodes <= 0 )
    return;
  while ( 1 )
  {
    ++v3;
    if ( nodeIdx >= v2 )
    {
      LODWORD(v61) = v2;
      LODWORD(v60) = nodeIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1894, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v60, v61) )
        __debugbreak();
    }
    v6 = &s_nodes[nodeIdx];
    LOWORD(index) = v6->nextIdx;
    if ( (index & 0x8000u) != 0i64 || (length = v6->length, length == 0.0) || (v10 = (float)((float)((float)(vpp->origin.v[1] - v6->origin.v[1]) * v6->dir.v[1]) + (float)((float)(vpp->origin.v[0] - v6->origin.v[0]) * v6->dir.v[0])) + (float)((float)(vpp->origin.v[2] - v6->origin.v[2]) * v6->dir.v[2]), v9 = v10, v63 = v10, v10 <= 0.0) )
    {
      v50 = 0.0;
      goto LABEL_42;
    }
    if ( v10 <= length )
      break;
LABEL_34:
    v2 = s_numNodes;
    nodeIdx = (__int16)index;
    if ( v3 >= s_numNodes )
    {
      v50 = frac;
      goto LABEL_42;
    }
  }
  if ( !v5 )
    goto LABEL_37;
  v11 = DCONST_DVARINT_bg_vehiclePathLookAheadNodeCount;
  if ( !DCONST_DVARINT_bg_vehiclePathLookAheadNodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehiclePathLookAheadNodeCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  v13 = 0;
  v14 = vpp->origin.v[0];
  v15 = vpp->origin.v[1];
  v16 = vpp->origin.v[2];
  v17 = &s_nodes[v6->nextIdx];
  v18 = v17;
  *(float *)&_XMM12 = (float)((float)((float)(v6->origin.v[1] - v15) * (float)(v6->origin.v[1] - v15)) + (float)((float)(v6->origin.v[0] - v14) * (float)(v6->origin.v[0] - v14))) + (float)((float)(v6->origin.v[2] - v16) * (float)(v6->origin.v[2] - v16));
  if ( integer >= 4 )
  {
    v20 = ((unsigned int)(integer - 4) >> 2) + 1;
    v21 = v20;
    v13 = 4 * v20;
    do
    {
      nextIdx = v17->nextIdx;
      v23 = LODWORD(v17->origin.v[1]);
      *(float *)&v23 = (float)((float)(v17->origin.v[1] - v15) * (float)(v17->origin.v[1] - v15)) + (float)((float)(v17->origin.v[0] - v14) * (float)(v17->origin.v[0] - v14));
      v24 = v23;
      v26 = LODWORD(s_nodes[nextIdx].origin.v[1]);
      *(float *)&v26 = s_nodes[nextIdx].origin.v[1] - v15;
      v25 = v26;
      v28 = v24;
      *(float *)&v28 = *(float *)&v24 + (float)((float)(v17->origin.v[2] - v16) * (float)(v17->origin.v[2] - v16));
      _XMM10 = v28;
      v29 = s_nodes[nextIdx].origin.v[2] - v16;
      v30 = v25;
      *(float *)&v30 = (float)(*(float *)&v25 * *(float *)&v25) + (float)((float)(s_nodes[nextIdx].origin.v[0] - v14) * (float)(s_nodes[nextIdx].origin.v[0] - v14));
      v31 = &s_nodes[nextIdx];
      v32 = s_nodes[nextIdx].nextIdx;
      *(float *)&v30 = *(float *)&v30 + (float)(v29 * v29);
      _XMM8 = v30;
      __asm { vminss  xmm11, xmm10, xmm12 }
      v35 = LODWORD(s_nodes[v32].origin.v[1]);
      *(float *)&v35 = s_nodes[v32].origin.v[1] - v15;
      v36 = s_nodes[v32].origin.v[2] - v16;
      v37 = (float)(s_nodes[v32].origin.v[0] - v14) * (float)(s_nodes[v32].origin.v[0] - v14);
      v38 = &s_nodes[v32];
      v39 = s_nodes[v32].nextIdx;
      if ( *(float *)&_XMM12 <= *(float *)&_XMM10 )
        v17 = v18;
      *(float *)&v35 = (float)((float)(*(float *)&v35 * *(float *)&v35) + v37) + (float)(v36 * v36);
      _XMM6 = v35;
      if ( *(float *)&_XMM11 <= *(float *)&_XMM8 )
        v31 = v17;
      v41 = LODWORD(s_nodes[v39].origin.v[1]);
      *(float *)&v41 = s_nodes[v39].origin.v[1] - v15;
      __asm
      {
        vminss  xmm9, xmm8, xmm11
        vminss  xmm7, xmm6, xmm9
      }
      if ( *(float *)&_XMM9 <= *(float *)&_XMM6 )
        v38 = v31;
      v18 = &s_nodes[v39];
      *(float *)&v41 = (float)((float)(*(float *)&v41 * *(float *)&v41) + (float)((float)(s_nodes[v39].origin.v[0] - v14) * (float)(s_nodes[v39].origin.v[0] - v14))) + (float)((float)(s_nodes[v39].origin.v[2] - v16) * (float)(s_nodes[v39].origin.v[2] - v16));
      _XMM5 = v41;
      __asm { vminss  xmm12, xmm5, xmm7 }
      if ( *(float *)&_XMM7 <= *(float *)&v41 )
        v18 = v38;
      v17 = &s_nodes[s_nodes[v39].nextIdx];
      --v21;
    }
    while ( v21 );
  }
  if ( v13 < integer )
  {
    v45 = (unsigned int)(integer - v13);
    do
    {
      v46 = v17;
      v47 = LODWORD(v17->origin.v[1]);
      *(float *)&v47 = (float)((float)((float)(v17->origin.v[1] - v15) * (float)(v17->origin.v[1] - v15)) + (float)((float)(v17->origin.v[0] - v14) * (float)(v17->origin.v[0] - v14))) + (float)((float)(v17->origin.v[2] - v16) * (float)(v17->origin.v[2] - v16));
      _XMM5 = v47;
      v49 = *(float *)&_XMM12 <= *(float *)&v47;
      __asm { vminss  xmm12, xmm5, xmm12 }
      if ( v49 )
        v46 = v18;
      v18 = v46;
      v17 = &s_nodes[v17->nextIdx];
      --v45;
    }
    while ( v45 );
  }
  index = v18->index;
  if ( s_nodes[index].prevIdx != v6->index )
  {
    v5 = 0;
    goto LABEL_34;
  }
  v9 = v63;
LABEL_37:
  if ( v6->length == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1962, ASSERT_TYPE_SANITY, "( cnode->length != 0.0f )", (const char *)&queryFormat, "cnode->length != 0.0f") )
    __debugbreak();
  v50 = v9 / v6->length;
LABEL_42:
  if ( v6 )
  {
    flags = vpp->flags;
    v52 = flags | 1;
    v53 = flags & 0xFFFE;
    if ( v6->nextIdx >= 0 )
      v52 = v53;
    vpp->flags = v52;
    v54 = truncate_cast<short,int>(nodeIdx);
    vpp->nodeIdx = v54;
    v55 = v54;
    vpp->frac = v50;
    v56 = s_nodes[v55].nextIdx;
    speed = s_nodes[v55].speed;
    if ( v56 >= 0 )
      speed = (float)((float)(s_nodes[v56].speed - speed) * v50) + speed;
    vpp->speed = speed;
    v58 = s_nodes[v55].nextIdx;
    lookAhead = s_nodes[v55].lookAhead;
    if ( v58 >= 0 )
      lookAhead = (float)((float)(s_nodes[v58].lookAhead - lookAhead) * v50) + lookAhead;
    vpp->lookAhead = lookAhead;
  }
}

/*
==============
G_VehiclePath_AdvanceAnimPathPosReverse
==============
*/
void G_VehiclePath_AdvanceAnimPathPosReverse(VehiclePathPos *vpp)
{
  unsigned int v2; 
  int v3; 
  int nodeIdx; 
  float frac; 
  __int64 v6; 
  VehiclePathNode *v7; 
  float length; 
  float v9; 
  __int16 prevIdx; 
  __int16 v11; 
  __int64 v12; 
  __int16 nextIdx; 
  float speed; 
  __int16 v15; 
  float lookAhead; 
  __int64 v17; 
  __int64 v18; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1988, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v2 = s_numNodes;
  v3 = 0;
  nodeIdx = vpp->nodeIdx;
  frac = vpp->frac;
  if ( s_numNodes <= 0 )
    return;
  while ( 1 )
  {
    ++v3;
    if ( nodeIdx >= v2 )
    {
      LODWORD(v18) = v2;
      LODWORD(v17) = nodeIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2006, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v6 = nodeIdx;
    v7 = &s_nodes[v6];
    if ( s_nodes[v6].nextIdx >= 0 )
    {
      length = v7->length;
      if ( length != 0.0 )
        break;
    }
    prevIdx = s_nodes[v6].prevIdx;
    if ( prevIdx < 0 )
    {
LABEL_13:
      frac = 0.0;
      goto LABEL_14;
    }
    frac = FLOAT_1_0;
LABEL_20:
    nodeIdx = prevIdx;
    v2 = s_numNodes;
    if ( v3 >= s_numNodes )
      goto LABEL_14;
  }
  v9 = (float)((float)((float)(vpp->origin.v[1] - v7->origin.v[1]) * v7->dir.v[1]) + (float)((float)(vpp->origin.v[0] - v7->origin.v[0]) * v7->dir.v[0])) + (float)((float)(vpp->origin.v[2] - v7->origin.v[2]) * v7->dir.v[2]);
  if ( v9 > length )
  {
    frac = FLOAT_1_0;
    goto LABEL_14;
  }
  if ( v9 <= 0.0 )
  {
    prevIdx = v7->prevIdx;
    if ( prevIdx < 0 )
      goto LABEL_13;
    goto LABEL_20;
  }
  if ( length == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2057, ASSERT_TYPE_SANITY, "( cnode->length != 0.0f )", (const char *)&queryFormat, "cnode->length != 0.0f") )
    __debugbreak();
  frac = v9 / s_nodes[v6].length;
LABEL_14:
  if ( v7 )
  {
    if ( s_nodes[v6].prevIdx < 0 && frac == 0.0 )
      vpp->flags |= 1u;
    else
      vpp->flags &= ~1u;
    v11 = truncate_cast<short,int>(nodeIdx);
    vpp->nodeIdx = v11;
    v12 = v11;
    vpp->frac = frac;
    nextIdx = s_nodes[v12].nextIdx;
    speed = s_nodes[v12].speed;
    if ( nextIdx >= 0 )
      speed = (float)((float)(s_nodes[nextIdx].speed - speed) * frac) + speed;
    vpp->speed = speed;
    v15 = s_nodes[v12].nextIdx;
    lookAhead = s_nodes[v12].lookAhead;
    if ( v15 >= 0 )
      lookAhead = (float)((float)(s_nodes[v15].lookAhead - lookAhead) * frac) + lookAhead;
    vpp->lookAhead = lookAhead;
  }
}

/*
==============
G_VehiclePath_AdvancePathPosForward
==============
*/
void G_VehiclePath_AdvancePathPosForward(VehiclePathPos *vpp, const vec3_t *dir)
{
  unsigned int v4; 
  int v5; 
  unsigned int nodeIdx; 
  float frac; 
  VehiclePathNode *v9; 
  __int16 nextIdx; 
  const VehiclePathNode *v11; 
  float v12; 
  float v13; 
  float v14; 
  double v18; 
  __int16 flags; 
  __int16 v20; 
  __int16 v21; 
  __int16 v22; 
  __int64 v23; 
  __int64 v24; 
  __int16 v25; 
  float speed; 
  __int16 v27; 
  float lookAhead; 
  __int64 v29; 
  __int64 v30; 
  SmoothedPathNodeInfo v31; 
  SmoothedPathNodeInfo params; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1680, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v4 = s_numNodes;
  v5 = 0;
  nodeIdx = vpp->nodeIdx;
  frac = vpp->frac;
  if ( s_numNodes > 0 )
  {
    _XMM8 = LODWORD(FLOAT_1_0);
    while ( 1 )
    {
      ++v5;
      if ( nodeIdx >= v4 )
      {
        LODWORD(v30) = v4;
        LODWORD(v29) = nodeIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1697, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v9 = &s_nodes[nodeIdx];
      nextIdx = v9->nextIdx;
      if ( nextIdx < 0 || v9->length == 0.0 )
        break;
      if ( nextIdx >= (unsigned int)s_numNodes )
      {
        LODWORD(v30) = s_numNodes;
        LODWORD(v29) = nextIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1708, ASSERT_TYPE_ASSERT, "(unsigned)( currentNode->nextIdx ) < (unsigned)( s_numNodes )", "currentNode->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v11 = &s_nodes[v9->nextIdx];
      G_VehiclePath_GetSmoothedPathNodeInfo(vpp, dir, &s_nodes[nodeIdx], &params);
      G_VehiclePath_GetSmoothedPathNodeInfo(vpp, dir, v11, &v31);
      if ( v31.straightLine )
      {
        v12 = vpp->origin.v[0] - v9->origin.v[0];
        v13 = vpp->origin.v[1] - v9->origin.v[1];
        v14 = vpp->origin.v[2] - v9->origin.v[2];
        _XMM1 = LODWORD(v9->length);
        fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
        __asm
        {
          vcmpltss xmm0, xmm1, xmm4
          vblendvps xmm1, xmm8, xmm9, xmm0
        }
      }
      else
      {
        *(float *)&_XMM1 = (float)((float)(v31.perpToBisector.v[1] * v31.frontPlane.v[1]) + (float)(v31.perpToBisector.v[0] * v31.frontPlane.v[0])) + (float)(v31.perpToBisector.v[2] * v31.frontPlane.v[2]);
      }
      if ( *(float *)&_XMM1 >= 0.0 )
      {
        v18 = I_fclamp(params.distanceToBisector / (float)(params.distanceToBisector + v31.distanceToBisector), 0.0, 1.0);
        frac = *(float *)&v18;
        goto LABEL_22;
      }
      v4 = s_numNodes;
      nodeIdx = v9->nextIdx;
      if ( v5 >= s_numNodes )
        goto LABEL_22;
    }
    frac = 0.0;
LABEL_22:
    if ( v9 )
    {
      flags = vpp->flags;
      v20 = flags | 1;
      v21 = flags & 0xFFFE;
      if ( v9->nextIdx >= 0 )
        v20 = v21;
      vpp->flags = v20;
      v22 = truncate_cast<short,int>(nodeIdx);
      vpp->nodeIdx = v22;
      vpp->frac = frac;
      v23 = v22;
      v24 = v22;
      v25 = s_nodes[v24].nextIdx;
      speed = s_nodes[v24].speed;
      if ( v25 >= 0 )
        speed = (float)((float)(s_nodes[v25].speed - speed) * frac) + speed;
      vpp->speed = speed;
      v27 = s_nodes[v23].nextIdx;
      lookAhead = s_nodes[v23].lookAhead;
      if ( v27 >= 0 )
        lookAhead = (float)((float)(s_nodes[v27].lookAhead - lookAhead) * frac) + lookAhead;
      vpp->lookAhead = lookAhead;
    }
  }
}

/*
==============
G_VehiclePath_AdvancePathPosReverse
==============
*/
void G_VehiclePath_AdvancePathPosReverse(VehiclePathPos *vpp, const vec3_t *dir)
{
  unsigned int v4; 
  int v5; 
  int nodeIdx; 
  float frac; 
  __int64 v8; 
  __int16 nextIdx; 
  VehiclePathNode *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int16 prevIdx; 
  float v20; 
  double v21; 
  __int16 v22; 
  __int64 v23; 
  __int16 v24; 
  float speed; 
  __int16 v26; 
  float lookAhead; 
  __int64 v28; 
  __int64 v29; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1765, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v4 = s_numNodes;
  v5 = 0;
  nodeIdx = vpp->nodeIdx;
  frac = vpp->frac;
  if ( s_numNodes <= 0 )
    return;
  while ( 1 )
  {
    ++v5;
    if ( nodeIdx >= v4 )
    {
      LODWORD(v29) = v4;
      LODWORD(v28) = nodeIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1782, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    v8 = nodeIdx;
    nextIdx = s_nodes[v8].nextIdx;
    v10 = &s_nodes[v8];
    if ( nextIdx >= 0 && v10->length != 0.0 )
      break;
    prevIdx = s_nodes[v8].prevIdx;
    if ( prevIdx < 0 )
      goto LABEL_17;
    frac = FLOAT_1_0;
LABEL_27:
    nodeIdx = prevIdx;
    v4 = s_numNodes;
    if ( v5 >= s_numNodes )
      goto LABEL_18;
  }
  if ( nextIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v29) = s_numNodes;
    LODWORD(v28) = nextIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1802, ASSERT_TYPE_ASSERT, "(unsigned)( currentNode->nextIdx ) < (unsigned)( s_numNodes )", "currentNode->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  v11 = vpp->origin.v[1];
  v12 = vpp->origin.v[0];
  v13 = vpp->origin.v[2];
  v14 = v10->origin.v[1];
  v15 = v10->origin.v[0];
  v16 = v10->origin.v[2];
  v17 = (float)((float)((float)(v11 - s_nodes[v10->nextIdx].origin.v[1]) * dir->v[1]) + (float)((float)(v12 - s_nodes[v10->nextIdx].origin.v[0]) * dir->v[0])) + (float)((float)(v13 - s_nodes[v10->nextIdx].origin.v[2]) * dir->v[2]);
  v18 = (float)((float)((float)(v14 - v11) * dir->v[1]) + (float)((float)(v15 - v12) * dir->v[0])) + (float)((float)(v16 - v13) * dir->v[2]);
  if ( v17 == 0.0 && v18 == 0.0 )
  {
LABEL_17:
    frac = 0.0;
    goto LABEL_18;
  }
  if ( v17 < 0.0 )
  {
    if ( v18 > 0.0 )
      goto LABEL_17;
LABEL_23:
    prevIdx = v10->prevIdx;
    if ( prevIdx < 0 )
      goto LABEL_17;
    goto LABEL_27;
  }
  if ( v18 < 0.0 )
    goto LABEL_23;
  v20 = (float)((float)((float)(v11 - v14) * s_nodes[v8].dir.v[1]) + (float)((float)(v12 - v15) * s_nodes[v8].dir.v[0])) + (float)((float)(v13 - v16) * s_nodes[v8].dir.v[2]);
  if ( s_nodes[v8].length == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1849, ASSERT_TYPE_SANITY, "( currentNode->length != 0.0f )", (const char *)&queryFormat, "currentNode->length != 0.0f") )
    __debugbreak();
  v21 = I_fclamp(v20 / s_nodes[v8].length, 0.0, 1.0);
  frac = *(float *)&v21;
LABEL_18:
  if ( v10 )
  {
    if ( s_nodes[v8].prevIdx < 0 && frac == 0.0 )
      vpp->flags |= 1u;
    else
      vpp->flags &= ~1u;
    v22 = truncate_cast<short,int>(nodeIdx);
    vpp->nodeIdx = v22;
    v23 = v22;
    vpp->frac = frac;
    v24 = s_nodes[v23].nextIdx;
    speed = s_nodes[v23].speed;
    if ( v24 >= 0 )
      speed = (float)((float)(s_nodes[v24].speed - speed) * frac) + speed;
    vpp->speed = speed;
    v26 = s_nodes[v23].nextIdx;
    lookAhead = s_nodes[v23].lookAhead;
    if ( v26 >= 0 )
      lookAhead = (float)((float)(s_nodes[v26].lookAhead - lookAhead) * frac) + lookAhead;
    vpp->lookAhead = lookAhead;
  }
}

/*
==============
G_VehiclePath_AttachPathPos
==============
*/
bool G_VehiclePath_AttachPathPos(VehiclePathPos *vpp, __int16 nodeIdx)
{
  __int64 v4; 
  bool result; 
  __int64 v6; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1185, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  if ( nodeIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v6) = nodeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1186, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v6, s_numNodes) )
      __debugbreak();
  }
  v4 = nodeIdx;
  if ( (s_nodes[v4].flags & 4) != 0 )
    return 0;
  vpp->nodeIdx = nodeIdx;
  vpp->flags = 0;
  vpp->frac = 0.0;
  vpp->speed = s_nodes[v4].speed;
  vpp->speedOverride = -1.0;
  vpp->lookAhead = s_nodes[v4].lookAhead;
  vpp->origin.v[0] = s_nodes[v4].origin.v[0];
  vpp->origin.v[1] = s_nodes[v4].origin.v[1];
  vpp->origin.v[2] = s_nodes[v4].origin.v[2];
  vpp->angles.v[0] = s_nodes[v4].angles.v[0];
  vpp->angles.v[1] = s_nodes[v4].angles.v[1];
  vpp->angles.v[2] = s_nodes[v4].angles.v[2];
  vpp->lookPos.v[0] = s_nodes[v4].origin.v[0];
  vpp->lookPos.v[1] = s_nodes[v4].origin.v[1];
  vpp->lookPos.v[2] = s_nodes[v4].origin.v[2];
  result = 1;
  *(_QWORD *)&vpp->switchNode[0].name = 0i64;
  *(_QWORD *)&vpp->switchNode[0].script_linkname = 0i64;
  *(_DWORD *)&vpp->switchNode[0].index = 0xFFFF;
  vpp->switchNode[0].speed = -1.0;
  vpp->switchNode[0].lookAhead = -1.0;
  *(_QWORD *)vpp->switchNode[0].origin.v = 0i64;
  *(_QWORD *)&vpp->switchNode[0].origin.z = 0i64;
  *(_QWORD *)&vpp->switchNode[0].dir.y = 0i64;
  vpp->switchNode[0].angles = s_invalidAngles;
  vpp->switchNode[0].notifyIdx = -1;
  vpp->switchNode[0].length = 0.0;
  *(_DWORD *)&vpp->switchNode[0].nextIdx = -1;
  *(_QWORD *)&vpp->switchNode[1].name = 0i64;
  *(_QWORD *)&vpp->switchNode[1].script_linkname = 0i64;
  *(_DWORD *)&vpp->switchNode[1].index = 0xFFFF;
  vpp->switchNode[1].speed = -1.0;
  vpp->switchNode[1].lookAhead = -1.0;
  *(_QWORD *)vpp->switchNode[1].origin.v = 0i64;
  *(_QWORD *)&vpp->switchNode[1].origin.z = 0i64;
  *(_QWORD *)&vpp->switchNode[1].dir.y = 0i64;
  vpp->switchNode[1].angles = s_invalidAngles;
  vpp->switchNode[1].notifyIdx = -1;
  vpp->switchNode[1].length = 0.0;
  *(_DWORD *)&vpp->switchNode[1].nextIdx = -1;
  return result;
}

/*
==============
G_VehiclePath_BeginSwitchNode
==============
*/
void G_VehiclePath_BeginSwitchNode(const VehiclePathPos *vpp)
{
  scr_string_t name; 
  VehiclePathNode *switchNode; 
  int v3; 
  __int64 v4; 
  VehiclePathNode *i; 
  __int16 v6; 

  name = vpp->switchNode[0].name;
  switchNode = vpp->switchNode;
  if ( name )
  {
    v3 = 0;
    if ( s_numNodes > 0 )
    {
      v4 = 0i64;
      for ( i = s_nodes; i->name != name; ++i )
      {
        ++v3;
        if ( ++v4 >= s_numNodes )
          return;
      }
      v6 = truncate_cast<short,int>(v3);
      if ( v6 >= 0 )
        G_VehiclePath_CopyNode(switchNode, &s_nodes[v6]);
    }
  }
}

/*
==============
G_VehiclePath_CalcNodeAngles
==============
*/
void G_VehiclePath_CalcNodeAngles(int nodeIdx, vec3_t *outAngles)
{
  __int64 v3; 
  VehiclePathNode *v5; 
  float v6; 
  __int16 prevIdx; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  int v13; 
  VehiclePathNode *v14; 
  __int128 v15; 
  __int16 v16; 
  int v17; 
  float v18; 
  __int16 nextIdx; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 

  v3 = nodeIdx;
  v5 = &s_nodes[v3];
  if ( (s_nodes[v3].flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 602, ASSERT_TYPE_SANITY, "( !(node->flags & VN_FLAG_NOTIFY) )", (const char *)&queryFormat, "!(node->flags & VN_FLAG_NOTIFY)") )
    __debugbreak();
  v6 = s_nodes[v3].angles.v[0];
  if ( v6 != s_invalidAngles.v[0] || s_invalidAngles.v[1] != s_nodes[v3].angles.v[1] || s_invalidAngles.v[2] != s_nodes[v3].angles.v[2] )
  {
    outAngles->v[0] = v6;
    outAngles->v[1] = s_nodes[v3].angles.v[1];
    outAngles->v[2] = s_nodes[v3].angles.v[2];
    return;
  }
  prevIdx = s_nodes[v3].prevIdx;
  v8 = s_invalidAngles.v[2];
  v9 = 0i64;
  v10 = 0i64;
  v11 = s_invalidAngles.v[0];
  v12 = s_invalidAngles.v[1];
  if ( prevIdx >= 0 )
  {
    v13 = 0;
    v14 = &s_nodes[prevIdx];
    if ( s_numNodes > 0 )
    {
      while ( 1 )
      {
        v15 = v9;
        *(float *)&v15 = *(float *)&v9 + v14->length;
        v9 = v15;
        ++v13;
        if ( v14->angles.v[0] != s_invalidAngles.v[0] || s_invalidAngles.v[1] != v14->angles.v[1] || s_invalidAngles.v[2] != v14->angles.v[2] )
          break;
        v16 = v14->prevIdx;
        if ( v16 >= 0 && v16 != nodeIdx )
        {
          v14 = &s_nodes[v16];
          if ( v13 < s_numNodes )
            continue;
        }
        goto LABEL_17;
      }
      v12 = v14->angles.v[1];
      v8 = v14->angles.v[2];
      v11 = v14->angles.v[0];
    }
  }
LABEL_17:
  v17 = 0;
  if ( s_numNodes <= 0 )
  {
LABEL_24:
    v18 = s_invalidAngles.v[0];
    v20 = s_invalidAngles.v[1];
    v21 = s_invalidAngles.v[2];
  }
  else
  {
    while ( 1 )
    {
      v18 = v5->angles.v[0];
      ++v17;
      if ( v18 != s_invalidAngles.v[0] || s_invalidAngles.v[1] != v5->angles.v[1] || s_invalidAngles.v[2] != v5->angles.v[2] )
        break;
      nextIdx = v5->nextIdx;
      v18 = s_invalidAngles.v[0];
      v20 = s_invalidAngles.v[1];
      v21 = s_invalidAngles.v[2];
      if ( nextIdx < 0 || nextIdx == nodeIdx )
        goto LABEL_25;
      v22 = v10;
      *(float *)&v22 = *(float *)&v10 + v5->length;
      v10 = v22;
      v5 = &s_nodes[nextIdx];
      if ( v17 >= s_numNodes )
        goto LABEL_24;
    }
    v20 = v5->angles.v[1];
    v21 = v5->angles.v[2];
  }
LABEL_25:
  if ( v11 != s_invalidAngles.v[0] )
    goto LABEL_39;
  if ( v12 == s_invalidAngles.v[1] && v8 == s_invalidAngles.v[2] && v18 == s_invalidAngles.v[0] && v20 == s_invalidAngles.v[1] && v21 == s_invalidAngles.v[2] )
    goto LABEL_42;
  if ( v11 != s_invalidAngles.v[0] || v12 != s_invalidAngles.v[1] || v8 != s_invalidAngles.v[2] )
  {
LABEL_39:
    if ( v18 == s_invalidAngles.v[0] && v20 == s_invalidAngles.v[1] && v21 == s_invalidAngles.v[2] )
    {
      outAngles->v[0] = v11;
      outAngles->v[1] = v12;
      outAngles->v[2] = v8;
      return;
    }
    if ( (float)(*(float *)&v10 + *(float *)&v9) > 0.0 )
    {
      v23 = *(float *)&v9 / (float)(*(float *)&v10 + *(float *)&v9);
      _XMM8 = 0i64;
      __asm { vroundss xmm2, xmm8, xmm1, 1 }
      outAngles->v[0] = (float)((float)((float)((float)((float)(v18 - v11) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v23) + v11;
      __asm { vroundss xmm3, xmm8, xmm0, 1 }
      outAngles->v[1] = (float)((float)((float)((float)((float)(v20 - v12) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v23) + v12;
      __asm { vroundss xmm3, xmm8, xmm0, 1 }
      outAngles->v[2] = (float)((float)((float)((float)((float)(v21 - v8) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v23) + v8;
      return;
    }
LABEL_42:
    *(_QWORD *)outAngles->v = 0i64;
    outAngles->v[2] = 0;
    return;
  }
  outAngles->v[0] = v18;
  outAngles->v[1] = v20;
  outAngles->v[2] = v21;
}

/*
==============
G_VehiclePath_CalcNodeLookAhead
==============
*/
float G_VehiclePath_CalcNodeLookAhead(int nodeIdx)
{
  __int64 v2; 
  VehiclePathNode *v3; 
  float result; 
  __int16 prevIdx; 
  int v6; 
  float lookAhead; 
  __int128 v8; 
  __int128 v9; 
  float v10; 
  int v11; 
  VehiclePathNode *v12; 
  __int128 v13; 
  __int16 v14; 
  __int16 nextIdx; 
  __int128 v16; 

  v2 = nodeIdx;
  v3 = &s_nodes[v2];
  if ( (s_nodes[v2].flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 499, ASSERT_TYPE_SANITY, "( !(node->flags & VN_FLAG_NOTIFY) )", (const char *)&queryFormat, "!(node->flags & VN_FLAG_NOTIFY)") )
    __debugbreak();
  result = 0.0;
  if ( s_nodes[v2].lookAhead >= 0.0 )
    return s_nodes[v2].lookAhead;
  prevIdx = s_nodes[v2].prevIdx;
  v6 = 0;
  lookAhead = FLOAT_N1_0;
  v8 = 0i64;
  v9 = 0i64;
  v10 = FLOAT_N1_0;
  if ( prevIdx >= 0 )
  {
    v11 = 0;
    v12 = &s_nodes[prevIdx];
    if ( s_numNodes > 0 )
    {
      while ( 1 )
      {
        v13 = v8;
        *(float *)&v13 = *(float *)&v8 + v12->length;
        v8 = v13;
        ++v11;
        if ( v12->lookAhead > 0.0 )
          break;
        v14 = v12->prevIdx;
        if ( v14 >= 0 && v14 != nodeIdx )
        {
          v12 = &s_nodes[v14];
          if ( v11 < s_numNodes )
            continue;
        }
        goto LABEL_14;
      }
      lookAhead = v12->lookAhead;
    }
  }
LABEL_14:
  if ( s_numNodes > 0 )
  {
    while ( 1 )
    {
      ++v6;
      if ( v3->lookAhead > 0.0 )
        break;
      nextIdx = v3->nextIdx;
      if ( nextIdx >= 0 && nextIdx != nodeIdx )
      {
        v16 = v9;
        *(float *)&v16 = *(float *)&v9 + v3->length;
        v9 = v16;
        v3 = &s_nodes[nextIdx];
        if ( v6 < s_numNodes )
          continue;
      }
      goto LABEL_21;
    }
    v10 = v3->lookAhead;
  }
LABEL_21:
  if ( lookAhead >= 0.0 )
  {
    if ( v10 >= 0.0 )
    {
      if ( (float)(*(float *)&v9 + *(float *)&v8) > 0.0 )
        return (float)((float)(*(float *)&v8 / (float)(*(float *)&v9 + *(float *)&v8)) * (float)(v10 - lookAhead)) + lookAhead;
    }
    else
    {
      return lookAhead;
    }
  }
  else if ( v10 >= 0.0 )
  {
    return v10;
  }
  return result;
}

/*
==============
G_VehiclePath_CalcNodeSpeed
==============
*/
float G_VehiclePath_CalcNodeSpeed(int nodeIdx)
{
  __int64 v2; 
  VehiclePathNode *v3; 
  float result; 
  __int16 prevIdx; 
  int v6; 
  float speed; 
  __int128 v8; 
  __int128 v9; 
  float v10; 
  int v11; 
  VehiclePathNode *v12; 
  __int128 v13; 
  __int16 v14; 
  __int16 nextIdx; 
  __int128 v16; 

  v2 = nodeIdx;
  v3 = &s_nodes[v2];
  if ( (s_nodes[v2].flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 393, ASSERT_TYPE_SANITY, "( !(node->flags & VN_FLAG_NOTIFY) )", (const char *)&queryFormat, "!(node->flags & VN_FLAG_NOTIFY)") )
    __debugbreak();
  result = 0.0;
  if ( s_nodes[v2].speed >= 0.0 )
    return s_nodes[v2].speed;
  prevIdx = s_nodes[v2].prevIdx;
  v6 = 0;
  speed = FLOAT_N1_0;
  v8 = 0i64;
  v9 = 0i64;
  v10 = FLOAT_N1_0;
  if ( prevIdx >= 0 )
  {
    v11 = 0;
    v12 = &s_nodes[prevIdx];
    if ( s_numNodes > 0 )
    {
      while ( 1 )
      {
        v13 = v8;
        *(float *)&v13 = *(float *)&v8 + v12->length;
        v8 = v13;
        ++v11;
        if ( v12->speed >= 0.0 )
          break;
        v14 = v12->prevIdx;
        if ( v14 >= 0 && v14 != nodeIdx )
        {
          v12 = &s_nodes[v14];
          if ( v11 < s_numNodes )
            continue;
        }
        goto LABEL_14;
      }
      speed = v12->speed;
    }
  }
LABEL_14:
  if ( s_numNodes > 0 )
  {
    while ( 1 )
    {
      ++v6;
      if ( v3->speed >= 0.0 )
        break;
      nextIdx = v3->nextIdx;
      if ( nextIdx >= 0 && nextIdx != nodeIdx )
      {
        v16 = v9;
        *(float *)&v16 = *(float *)&v9 + v3->length;
        v9 = v16;
        v3 = &s_nodes[nextIdx];
        if ( v6 < s_numNodes )
          continue;
      }
      goto LABEL_21;
    }
    v10 = v3->speed;
  }
LABEL_21:
  if ( speed >= 0.0 )
  {
    if ( v10 >= 0.0 )
    {
      if ( (float)(*(float *)&v9 + *(float *)&v8) > 0.0 )
        return (float)((float)(*(float *)&v8 / (float)(*(float *)&v9 + *(float *)&v8)) * (float)(v10 - speed)) + speed;
    }
    else
    {
      return speed;
    }
  }
  else if ( v10 >= 0.0 )
  {
    return v10;
  }
  return result;
}

/*
==============
G_VehiclePath_ComputeLookAhead
==============
*/
void G_VehiclePath_ComputeLookAhead(__int16 nodeIdx, const vec3_t *curPos, float lookAheadDist, vec3_t *outLookAhead)
{
  __int64 v7; 
  __int16 nextIdx; 
  float length; 
  double v10; 
  VehiclePathPos vpp; 

  if ( nodeIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1393, ASSERT_TYPE_SANITY, "( nodeIdx != -1 )", (const char *)&queryFormat, "nodeIdx != -1") )
    __debugbreak();
  v7 = nodeIdx;
  vpp.nodeIdx = nodeIdx;
  vpp.lookAhead = 0.0;
  nextIdx = s_nodes[v7].nextIdx;
  if ( nextIdx == -1 || (length = s_nodes[v7].length, length <= 0.0) )
  {
    vpp.frac = 0.0;
  }
  else
  {
    v10 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(s_nodes[nextIdx].origin.v[1] - curPos->v[1]) * s_nodes[v7].dir.v[1]) + (float)((float)(s_nodes[nextIdx].origin.v[0] - curPos->v[0]) * s_nodes[v7].dir.v[0])) & _xmm) / length, 0.0, 1.0);
    vpp.frac = 1.0 - *(float *)&v10;
  }
  G_VehiclePath_GetForwardLookAheadOrigin(&vpp, outLookAhead, lookAheadDist);
}

/*
==============
G_VehiclePath_CopyNode
==============
*/
void G_VehiclePath_CopyNode(const VehiclePathNode *src, VehiclePathNode *dst)
{
  Scr_SetString(&dst->name, src->name);
  Scr_SetString(&dst->target, src->target);
  Scr_SetString(&dst->script_linkname, src->script_linkname);
  Scr_SetString(&dst->script_noteworthy, src->script_noteworthy);
  dst->index = src->index;
  dst->flags = src->flags;
  dst->speed = src->speed;
  dst->lookAhead = src->lookAhead;
  dst->origin = src->origin;
  dst->dir = src->dir;
  dst->angles = src->angles;
  dst->length = src->length;
  dst->nextIdx = src->nextIdx;
  dst->prevIdx = src->prevIdx;
  dst->notifyIdx = src->notifyIdx;
}

/*
==============
G_VehiclePath_CountNumNodesForPath
==============
*/
__int64 G_VehiclePath_CountNumNodesForPath(__int16 startNodeIdx)
{
  __int16 nextIdx; 
  __int16 v2; 
  unsigned __int16 v3; 
  __int16 v4; 

  nextIdx = startNodeIdx;
  if ( startNodeIdx < 0 || (v2 = s_numNodes, startNodeIdx >= s_numNodes) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1297, ASSERT_TYPE_SANITY, "( startNodeIdx >= 0 && startNodeIdx < s_numNodes )", (const char *)&queryFormat, "startNodeIdx >= 0 && startNodeIdx < s_numNodes") )
      __debugbreak();
    v2 = s_numNodes;
  }
  v3 = 0;
  v4 = nextIdx;
  if ( nextIdx >= 0 )
  {
    do
    {
      if ( nextIdx >= v2 )
        break;
      ++v3;
      nextIdx = s_nodes[nextIdx].nextIdx;
      if ( v4 < 0 || v4 >= v2 )
      {
        v4 = -1;
      }
      else
      {
        v4 = s_nodes[v4].nextIdx;
        if ( v4 >= 0 && v4 < v2 )
          v4 = s_nodes[v4].nextIdx;
      }
    }
    while ( nextIdx != v4 && nextIdx >= 0 );
  }
  return v3;
}

/*
==============
G_VehiclePath_DebugArrow
==============
*/
void G_VehiclePath_DebugArrow(const vec3_t *pos, const vec3_t *angles)
{
  ;
}

/*
==============
G_VehiclePath_DebugLine
==============
*/
void G_VehiclePath_DebugLine(const vec3_t *start, const vec3_t *end, bool mainPath)
{
  bool v3; 
  vec4_t *p_color; 
  __int128 v5; 
  vec4_t color; 

  v3 = !mainPath;
  p_color = (vec4_t *)&v5;
  v5 = _xmm;
  if ( v3 )
    p_color = &color;
  color = (vec4_t)_xmm;
  G_DebugLine(start, end, p_color, 1);
}

/*
==============
G_VehiclePath_DrawCurrentPath
==============
*/
void G_VehiclePath_DrawCurrentPath(void)
{
  const dvar_t *v0; 
  __int16 v1; 
  __int16 i; 

  v0 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer )
  {
    v1 = s_numNodes;
    for ( i = 0; i < s_numNodes; ++i )
    {
      if ( i < v1 - 1 )
        G_DebugLine(&s_nodes[i].origin, &s_nodes[i + 1].origin, &colorYellow, 1);
      G_DebugSphere(&s_nodes[i].origin, 3.5, &colorCyan, 0, 0);
      Com_sprintf(tmp, 0x10ui64, "%d", (unsigned int)i);
      CL_AddDebugString(&s_nodes[i].origin, &colorWhite, textScale, tmp, 1, 0);
      v1 = s_numNodes;
    }
  }
}

/*
==============
G_VehiclePath_DrawDebug
==============
*/

void __fastcall G_VehiclePath_DrawDebug(double _XMM0_8)
{
  __int128 v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  __int64 v4; 
  int v5; 
  __int16 *p_flags; 
  __int64 v7; 
  const char *v8; 
  const char *v9; 
  __int64 v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  VehiclePathNode *i; 
  const char *v19; 
  const dvar_t *v20; 
  const char *v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  __int16 v26; 
  VehiclePathPos vpp; 
  __int128 v28; 

  v2 = DVARSTR_g_vehicleDrawPath;
  if ( !DVARSTR_g_vehicleDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleDrawPath") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( *(_BYTE *)v2->current.integer64 )
  {
    v3 = DVARSTR_g_vehicleDrawPath;
    if ( !DVARSTR_g_vehicleDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleDrawPath") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( *(_BYTE *)v3->current.integer64 != 48 )
    {
      v4 = 0i64;
      v5 = 0;
      if ( s_numNodes > 0 )
      {
        v28 = v1;
        p_flags = &s_nodes[0].flags;
        v7 = 0i64;
        do
        {
          if ( (*(_BYTE *)p_flags & 1) != 0 )
          {
            v8 = SL_ConvertToString((scr_string_t)*(_DWORD *)(p_flags - 9));
            if ( v7 <= 0 )
            {
LABEL_30:
              CL_AddDebugString((const vec3_t *)(p_flags + 5), &colorRed, 1.0, v8, 1, 1);
              *((_QWORD *)&vpp.nodeIdx + v7++) = v8;
            }
            else
            {
LABEL_13:
              v9 = (const char *)*((_QWORD *)&vpp.nodeIdx + v4);
              v10 = 0x7FFFFFFFi64;
              if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                __debugbreak();
              v11 = v8 - v9;
              do
              {
                v12 = (unsigned __int8)v9[v11];
                v13 = v10;
                v14 = *(unsigned __int8 *)v9++;
                --v10;
                if ( !v13 )
                  break;
                if ( v12 != v14 )
                {
                  v15 = v12 + 32;
                  if ( (unsigned int)(v12 - 65) > 0x19 )
                    v15 = v12;
                  v12 = v15;
                  v16 = v14 + 32;
                  if ( (unsigned int)(v14 - 65) > 0x19 )
                    v16 = v14;
                  if ( v12 != v16 )
                  {
                    if ( ++v4 < v7 )
                      goto LABEL_13;
                    goto LABEL_30;
                  }
                }
              }
              while ( v12 );
            }
            v4 = 0i64;
          }
          ++v5;
          p_flags += 38;
        }
        while ( v5 < s_numNodes );
      }
      v17 = 0;
      if ( s_numNodes > 0 )
      {
        for ( i = s_nodes; ; ++i )
        {
          if ( (i->flags & 4) == 0 )
          {
            v19 = SL_ConvertToString(i->name);
            v20 = DVARSTR_g_vehicleDrawPath;
            v21 = v19;
            if ( !DVARSTR_g_vehicleDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleDrawPath") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v20);
            v22 = v20->current.integer64 - (_QWORD)v21;
            do
            {
              v23 = (unsigned __int8)v21[v22];
              v24 = *(unsigned __int8 *)v21 - v23;
              if ( v24 )
                break;
              ++v21;
            }
            while ( v23 );
            if ( !v24 )
              break;
          }
          if ( ++v17 >= s_numNodes )
            return;
        }
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_QWORD *)&vpp.switchNode[0].name = 0i64;
        *(_QWORD *)&vpp.switchNode[0].script_linkname = 0i64;
        *(_OWORD *)&vpp.switchNode[1].name = _XMM0;
        v26 = truncate_cast<short,int>(v17);
        if ( G_VehiclePath_AttachPathPos(&vpp, v26) )
          G_VehiclePath_DrawPath(&vpp);
      }
    }
  }
}

/*
==============
G_VehiclePath_DrawPath
==============
*/
void G_VehiclePath_DrawPath(const VehiclePathPos *vpp)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int64 v10; 
  __m256i v11; 
  __m256i v12; 
  int v13; 
  __m256i v14; 
  __int16 v15; 
  const VehiclePathPos *v16; 
  __int128 v17; 
  int v18; 
  int v19; 
  int v20; 
  __int16 v21; 
  __int64 v22; 
  __int16 nodeIdx; 
  bool v24; 
  bool v25; 
  __int16 v26; 
  VehiclePathNode *v27; 
  float NotifyFraction; 
  __int128 v29; 
  float v33; 
  float v34; 
  float v35; 
  __int64 v36; 
  VehiclePathNode *v37; 
  float v38; 
  __int128 *v39; 
  __int16 notifyIdx; 
  __int16 nextIdx; 
  __int64 entIndex; 
  __int64 entIndexa; 
  __int64 v44; 
  const VehiclePathPos *color; 
  Bounds color_8; 
  __int128 v47; 
  __int128 v48; 
  vec4_t v49; 
  VehiclePathPos prevVpp; 
  VehiclePathPos vppa; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 

  v10 = *(_QWORD *)&vpp->switchNode[1].length;
  v11 = *(__m256i *)&vpp->switchNode[0].angles.z;
  *(__m256i *)&prevVpp.nodeIdx = *(__m256i *)&vpp->nodeIdx;
  *(__m256i *)prevVpp.angles.v = *(__m256i *)vpp->angles.v;
  *(__m256i *)&prevVpp.driftOffset.z = *(__m256i *)&vpp->driftOffset.z;
  *(__m256i *)prevVpp.switchNode[0].origin.v = *(__m256i *)vpp->switchNode[0].origin.v;
  v12 = *(__m256i *)&vpp->nodeIdx;
  v52 = v9;
  v13 = 0;
  *(__m256i *)&prevVpp.switchNode[0].angles.z = v11;
  v14 = *(__m256i *)&vpp->switchNode[1].index;
  v60 = v1;
  v15 = -1;
  v59 = v2;
  v16 = vpp;
  *(__m256i *)&prevVpp.switchNode[1].index = v14;
  v17 = *(_OWORD *)&vpp->switchNode[1].dir.z;
  v58 = v3;
  v18 = 0;
  v57 = v4;
  v19 = 0;
  *(_OWORD *)&prevVpp.switchNode[1].dir.z = v17;
  *(_QWORD *)&prevVpp.switchNode[1].length = v10;
  v20 = 0;
  v21 = -1;
  *(_DWORD *)&prevVpp.switchNode[1].notifyIdx = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  v22 = *(_QWORD *)&vpp->switchNode[1].length;
  *(__m256i *)&vppa.nodeIdx = v12;
  *(__m256i *)vppa.angles.v = *(__m256i *)vpp->angles.v;
  *(__m256i *)&vppa.driftOffset.z = *(__m256i *)&vpp->driftOffset.z;
  *(__m256i *)vppa.switchNode[0].origin.v = *(__m256i *)vpp->switchNode[0].origin.v;
  *(__m256i *)&vppa.switchNode[0].angles.z = *(__m256i *)&vpp->switchNode[0].angles.z;
  *(__m256i *)&vppa.switchNode[1].index = *(__m256i *)&vpp->switchNode[1].index;
  v56 = v5;
  *(_OWORD *)&vppa.switchNode[1].dir.z = v17;
  *(_QWORD *)&vppa.switchNode[1].length = v22;
  LODWORD(v22) = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  v55 = v6;
  v54 = v7;
  *(_DWORD *)&vppa.switchNode[1].notifyIdx = v22;
  color = vpp;
  s_newDebugLine = 1;
  v53 = v8;
  while ( ++v19 <= 50000 )
  {
    nodeIdx = v16->nodeIdx;
    v24 = prevVpp.nodeIdx == v16->nodeIdx;
    *(__m256i *)&prevVpp.nodeIdx = *(__m256i *)&vppa.nodeIdx;
    *(__m256i *)prevVpp.angles.v = *(__m256i *)vppa.angles.v;
    *(__m256i *)&prevVpp.driftOffset.z = *(__m256i *)&vppa.driftOffset.z;
    *(__m256i *)prevVpp.switchNode[0].origin.v = *(__m256i *)vppa.switchNode[0].origin.v;
    *(__m256i *)&prevVpp.switchNode[0].angles.z = *(__m256i *)&vppa.switchNode[0].angles.z;
    *(__m256i *)&prevVpp.switchNode[1].index = *(__m256i *)&vppa.switchNode[1].index;
    if ( !v24 )
      v15 = nodeIdx;
    *(_OWORD *)&prevVpp.switchNode[1].dir.z = *(_OWORD *)&vppa.switchNode[1].dir.z;
    *(_QWORD *)&prevVpp.switchNode[1].length = *(_QWORD *)&vppa.switchNode[1].length;
    *(_DWORD *)&prevVpp.switchNode[1].notifyIdx = *(_DWORD *)&vppa.switchNode[1].notifyIdx;
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    G_VehiclePath_UpdatePathPos(&vppa, VEH_PATH_FORWARD, (float)level.frameDuration * 0.001);
    v25 = 0;
    G_VehiclePath_BeginSwitchNode(&prevVpp);
    v26 = prevVpp.nodeIdx;
    if ( prevVpp.nodeIdx == vppa.nodeIdx )
    {
      if ( prevVpp.nodeIdx >= (unsigned int)s_numNodes )
      {
        LODWORD(v44) = s_numNodes;
        LODWORD(entIndex) = prevVpp.nodeIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2444, ASSERT_TYPE_ASSERT, "(unsigned)( prevVpp->nodeIdx ) < (unsigned)( s_numNodes )", "prevVpp->nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", entIndex, v44) )
          __debugbreak();
        v26 = prevVpp.nodeIdx;
      }
      v27 = &s_nodes[v26];
      if ( v27->notifyIdx >= 0 )
      {
        NotifyFraction = G_VehiclePath_GetNotifyFraction(&s_nodes[v26]);
        if ( prevVpp.frac < NotifyFraction && vppa.frac >= NotifyFraction )
          G_VehiclePath_ProcessNotify(v27->notifyIdx, 2047, &vppa.origin, VEH_PATH_NOTIFY_DRAW);
      }
      v13 = 0;
    }
    else
    {
      v25 = G_VehiclePath_ProcessNotify_Forward(&prevVpp, &vppa, VEH_PATH_NOTIFY_DRAW, prevVpp.nodeIdx, v15, 2047);
    }
    G_VehiclePath_EndSwitchNode(&prevVpp);
    if ( (vppa.flags & 1) != 0 )
      v18 = 1;
    if ( v20 > 0 && vppa.nodeIdx != v21 )
    {
      --v20;
      v21 = vppa.nodeIdx;
      if ( !v20 )
        v18 = 1;
    }
    if ( v25 && !v20 )
    {
      v20 = 2;
      v21 = vppa.nodeIdx;
    }
    v29 = LODWORD(vppa.origin.v[1]);
    *(float *)&v29 = fsqrt((float)((float)((float)(vppa.origin.v[1] - prevVpp.origin.v[1]) * (float)(vppa.origin.v[1] - prevVpp.origin.v[1])) + (float)((float)(vppa.origin.v[0] - prevVpp.origin.v[0]) * (float)(vppa.origin.v[0] - prevVpp.origin.v[0]))) + (float)((float)(vppa.origin.v[2] - prevVpp.origin.v[2]) * (float)(vppa.origin.v[2] - prevVpp.origin.v[2])));
    _XMM3 = v29;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v33 = (float)(vppa.origin.v[0] - prevVpp.origin.v[0]) * (float)(1.0 / *(float *)&_XMM0);
    v34 = (float)(vppa.origin.v[1] - prevVpp.origin.v[1]) * (float)(1.0 / *(float *)&_XMM0);
    v35 = (float)(vppa.origin.v[2] - prevVpp.origin.v[2]) * (float)(1.0 / *(float *)&_XMM0);
    if ( s_newDebugLine )
    {
      s_start = prevVpp.origin;
      s_end = vppa.origin;
      s_newDebugLine = 0;
LABEL_34:
      v16 = color;
      s_dir.v[2] = v35;
      s_dir.v[1] = v34;
      s_dir.v[0] = v33;
      if ( v18 )
        goto LABEL_37;
    }
    else
    {
      if ( (float)((float)((float)(v34 * s_dir.v[1]) + (float)(v33 * s_dir.v[0])) + (float)(v35 * s_dir.v[2])) < 0.99989998 || v18 )
      {
        *(_OWORD *)color_8.midPoint.v = _xmm;
        G_DebugLine(&s_start, &s_end, (const vec4_t *)&color_8, 1);
        s_start = prevVpp.origin;
        s_end = vppa.origin;
        goto LABEL_34;
      }
      v16 = color;
      s_end = vppa.origin;
    }
  }
  Com_PrintWarning(16, "WARNING: Invalid vehicle path.  Possible infinite loop\n", "level.frameDuration", "%s\n\tAccessing frame duration before it's been set");
LABEL_37:
  v36 = v16->nodeIdx;
  v48 = _xmm;
  v37 = &s_nodes[v36];
  v47 = _xmm;
  v49 = (vec4_t)_xmm;
  if ( s_numNodes > 0 )
  {
    do
    {
      v38 = v37->angles.v[1];
      v39 = &v47;
      ++v13;
      color_8.halfSize.v[1] = FLOAT_4_0;
      if ( v37 == &s_nodes[(__int16)v36] )
        v39 = &v48;
      color_8.halfSize.v[2] = FLOAT_4_0;
      *(_OWORD *)color_8.midPoint.v = _xmm;
      G_DebugBox(&v37->origin, &color_8, v38, (const vec4_t *)v39, 1, 0);
      notifyIdx = v37->notifyIdx;
      if ( notifyIdx >= 0 )
      {
        if ( notifyIdx >= (unsigned int)s_numNodes )
        {
          LODWORD(v44) = s_numNodes;
          LODWORD(entIndexa) = notifyIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1132, ASSERT_TYPE_ASSERT, "(unsigned)( node->notifyIdx ) < (unsigned)( s_numNodes )", "node->notifyIdx doesn't index s_numNodes\n\t%i not in [0, %i)", entIndexa, v44) )
            __debugbreak();
        }
        G_DebugBox(&s_nodes[v37->notifyIdx].origin, &color_8, s_nodes[v37->notifyIdx].angles.v[1], &v49, 1, 0);
      }
      nextIdx = v37->nextIdx;
      if ( nextIdx < 0 )
        break;
      LOWORD(v36) = v16->nodeIdx;
      if ( nextIdx == v16->nodeIdx )
        break;
      v37 = &s_nodes[nextIdx];
    }
    while ( v13 < s_numNodes );
  }
}

/*
==============
G_VehiclePath_EndSwitchNode
==============
*/
void G_VehiclePath_EndSwitchNode(const VehiclePathPos *vpp)
{
  scr_string_t name; 
  int v3; 
  __int64 v4; 
  VehiclePathNode *i; 
  __int16 v6; 

  name = vpp->switchNode[0].name;
  if ( name )
  {
    v3 = 0;
    if ( s_numNodes > 0 )
    {
      v4 = 0i64;
      for ( i = s_nodes; i->name != name; ++i )
      {
        ++v3;
        if ( ++v4 >= s_numNodes )
          return;
      }
      v6 = truncate_cast<short,int>(v3);
      if ( v6 >= 0 )
        G_VehiclePath_CopyNode(&vpp->switchNode[1], &s_nodes[v6]);
    }
  }
}

/*
==============
G_VehiclePath_FindNodeForPathName
==============
*/
__int16 G_VehiclePath_FindNodeForPathName(scr_string_t *pathname)
{
  __int16 result; 

  if ( !pathname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1263, ASSERT_TYPE_SANITY, "( pathname )", (const char *)&queryFormat, "pathname") )
    __debugbreak();
  result = 0;
  if ( s_numNodes <= 0 )
    return -1;
  while ( s_nodes[result].name != *pathname )
  {
    if ( ++result >= s_numNodes )
      return -1;
  }
  return result;
}

/*
==============
G_VehiclePath_Free
==============
*/
void G_VehiclePath_Free(void)
{
  scrContext_t *v0; 
  int v1; 
  scr_string_t *p_target; 

  v0 = ScriptContext_Server();
  v1 = 0;
  if ( s_numNodes > 0 )
  {
    p_target = &s_nodes[0].target;
    do
    {
      Scr_FreeEntityNum(v0, *((__int16 *)p_target + 6), ENTITY_CLASS_VEHICLENODE);
      Scr_SetString(p_target - 1, (scr_string_t)0);
      Scr_SetString(p_target, (scr_string_t)0);
      Scr_SetString(p_target + 1, (scr_string_t)0);
      Scr_SetString(p_target + 2, (scr_string_t)0);
      ++v1;
      p_target += 19;
    }
    while ( v1 < s_numNodes );
  }
  s_numNodes = 0;
}

/*
==============
G_VehiclePath_FreePathPos
==============
*/
void G_VehiclePath_FreePathPos(VehiclePathPos *vpp)
{
  Scr_SetString(&vpp->switchNode[0].name, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[0].target, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[0].script_linkname, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[0].script_noteworthy, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].name, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].target, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].script_linkname, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].script_noteworthy, (scr_string_t)0);
}

/*
==============
G_VehiclePath_GetAngles
==============
*/
void G_VehiclePath_GetAngles(const VehiclePathPos *vpp, vec3_t *outAngles)
{
  __int64 nodeIdx; 
  __int16 nextIdx; 
  __int16 v6; 
  __int64 v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned int v17; 
  __int64 v18; 
  float frac; 
  float v21; 
  float v23; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 

  nodeIdx = vpp->nodeIdx;
  nextIdx = s_nodes[nodeIdx].nextIdx;
  v6 = s_nodes[nodeIdx].flags & 2;
  if ( nextIdx >= 0 )
  {
    v7 = nextIdx;
    if ( v6 || (s_nodes[v7].flags & 2) != 0 )
    {
      if ( (s_nodes[v7].flags & 2) != 0 )
      {
        if ( v6 )
        {
          v8 = s_nodes[nodeIdx].angles.v[1];
          v31 = s_nodes[nodeIdx].angles.v[0];
          v9 = s_nodes[nodeIdx].angles.v[2];
        }
        else
        {
          v8 = outAngles->v[1];
          v31 = outAngles->v[0];
          v9 = outAngles->v[2];
        }
        v33 = v9;
        v28 = s_nodes[v7].angles.v[0];
        v10 = s_nodes[v7].angles.v[2];
        v32 = v8;
        v11 = s_nodes[v7].angles.v[1];
        v30 = v10;
        v29 = v11;
      }
      else
      {
        v12 = s_nodes[nodeIdx].angles.v[1];
        v31 = s_nodes[nodeIdx].angles.v[0];
        v13 = s_nodes[nodeIdx].angles.v[2];
        v32 = v12;
        v14 = outAngles->v[0];
        v33 = v13;
        v15 = outAngles->v[1];
        v28 = v14;
        v16 = outAngles->v[2];
        v29 = v15;
        v30 = v16;
      }
      v17 = 0;
      v18 = 0i64;
      _XMM8 = 0i64;
      do
      {
        frac = vpp->frac;
        if ( v17 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v26) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        v21 = *(float *)((char *)&v28 + v18 * 4);
        if ( v17 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v26) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        v23 = (float)((float)((float)((float)((float)(v21 - *(float *)((char *)&v31 + v18 * 4)) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * frac) + *(float *)((char *)&v31 + v18 * 4);
        if ( v17 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v26) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        outAngles->v[v18] = v23;
        if ( v17 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v26) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        v25 = (float)((float)(0.0027777778 * outAngles->v[v18]) - *(float *)&_XMM3) * 360.0;
        if ( v17 >= 3 )
        {
          LODWORD(v27) = 3;
          LODWORD(v26) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        outAngles->v[v18++] = v25;
        ++v17;
      }
      while ( (int)v17 < 3 );
    }
  }
  else if ( v6 )
  {
    outAngles->v[0] = s_nodes[nodeIdx].angles.v[0];
    outAngles->v[1] = s_nodes[nodeIdx].angles.v[1];
    outAngles->v[2] = s_nodes[nodeIdx].angles.v[2];
  }
}

/*
==============
G_VehiclePath_GetForwardLookAheadOrigin
==============
*/
void G_VehiclePath_GetForwardLookAheadOrigin(const VehiclePathPos *vpp, vec3_t *outLookXYZ, float lookAheadOffset)
{
  float speedOverride; 
  VehiclePathNode *v6; 
  int v7; 
  __int128 length_low; 
  __int128 i; 
  __int16 nextIdx; 
  float length; 
  __int128 v12; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1353, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  speedOverride = vpp->speedOverride;
  v6 = &s_nodes[vpp->nodeIdx];
  if ( speedOverride < 0.0 )
    speedOverride = vpp->speed;
  v7 = 0;
  length_low = LODWORD(v6->length);
  *(float *)&length_low = (float)(v6->length * vpp->frac) + (float)((float)(vpp->lookAhead * speedOverride) + lookAheadOffset);
  for ( i = length_low; v7 < s_numNodes; v6 = &s_nodes[nextIdx] )
  {
    nextIdx = v6->nextIdx;
    ++v7;
    if ( nextIdx < 0 )
      break;
    length = v6->length;
    if ( length <= 0.0 )
      break;
    if ( *(float *)&i < length )
      break;
    v12 = i;
    *(float *)&v12 = *(float *)&i - length;
    i = v12;
  }
  outLookXYZ->v[0] = (float)(*(float *)&i * v6->dir.v[0]) + v6->origin.v[0];
  outLookXYZ->v[1] = (float)(*(float *)&i * v6->dir.v[1]) + v6->origin.v[1];
  outLookXYZ->v[2] = (float)(*(float *)&i * v6->dir.v[2]) + v6->origin.v[2];
}

/*
==============
G_VehiclePath_GetNode
==============
*/
VehiclePathNode *G_VehiclePath_GetNode(__int16 nodeIdx)
{
  return &s_nodes[nodeIdx];
}

/*
==============
G_VehiclePath_GetNotifyFraction
==============
*/
double G_VehiclePath_GetNotifyFraction(const VehiclePathNode *node)
{
  float v2; 
  __int64 v4; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2232, ASSERT_TYPE_SANITY, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( node->notifyIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v4) = node->notifyIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2235, ASSERT_TYPE_ASSERT, "(unsigned)( node->notifyIdx ) < (unsigned)( s_numNodes )", "node->notifyIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v4, s_numNodes) )
      __debugbreak();
  }
  v2 = (float)((float)((float)(s_nodes[node->notifyIdx].origin.v[1] - node->origin.v[1]) * node->dir.v[1]) + (float)((float)(s_nodes[node->notifyIdx].origin.v[0] - node->origin.v[0]) * node->dir.v[0])) + (float)((float)(s_nodes[node->notifyIdx].origin.v[2] - node->origin.v[2]) * node->dir.v[2]);
  if ( node->length == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2246, ASSERT_TYPE_SANITY, "( node->length != 0.0f )", (const char *)&queryFormat, "node->length != 0.0f") )
    __debugbreak();
  return I_fclamp(v2 / node->length, 0.0, 1.0);
}

/*
==============
G_VehiclePath_GetNumTotalNodes
==============
*/
__int64 G_VehiclePath_GetNumTotalNodes()
{
  return (unsigned __int16)s_numNodes;
}

/*
==============
G_VehiclePath_GetReverseLookAheadOrigin
==============
*/
void G_VehiclePath_GetReverseLookAheadOrigin(const VehiclePathPos *vpp, vec3_t *outLookXYZ, float lookAheadOffset)
{
  float speedOverride; 
  VehiclePathNode *v6; 
  int v7; 
  __int128 length_low; 
  __int128 i; 
  __int16 prevIdx; 
  __int64 v11; 
  __int128 v12; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1450, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  speedOverride = vpp->speedOverride;
  v6 = &s_nodes[vpp->nodeIdx];
  if ( speedOverride < 0.0 )
    speedOverride = vpp->speed;
  v7 = 0;
  length_low = LODWORD(v6->length);
  *(float *)&length_low = (float)(v6->length * vpp->frac) - (float)((float)(vpp->lookAhead * speedOverride) + lookAheadOffset);
  for ( i = length_low; v7 < s_numNodes; i = v12 )
  {
    ++v7;
    if ( *(float *)&i > 0.0 )
      break;
    prevIdx = v6->prevIdx;
    if ( prevIdx < 0 )
      break;
    v11 = prevIdx;
    if ( s_nodes[v11].length == 0.0 )
      break;
    v6 = &s_nodes[v11];
    v12 = i;
    *(float *)&v12 = *(float *)&i + s_nodes[v11].length;
  }
  outLookXYZ->v[0] = (float)(*(float *)&i * v6->dir.v[0]) + v6->origin.v[0];
  outLookXYZ->v[1] = (float)(*(float *)&i * v6->dir.v[1]) + v6->origin.v[1];
  outLookXYZ->v[2] = (float)(*(float *)&i * v6->dir.v[2]) + v6->origin.v[2];
}

/*
==============
G_VehiclePath_GetSmoothedPathNodeInfo
==============
*/
void G_VehiclePath_GetSmoothedPathNodeInfo(const VehiclePathPos *vpp, const vec3_t *dir, const VehiclePathNode *cnode, SmoothedPathNodeInfo *params)
{
  __int16 prevIdx; 
  VehiclePathNode *v8; 
  VehiclePathNode *v9; 
  __int16 nextIdx; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float v28; 
  __int128 v29; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  __int128 v37; 
  float v41; 
  float v42; 
  __int128 v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  const dvar_t *v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float distanceToBisector; 
  float v58; 
  float v59; 
  float v60; 
  vec3_t v0; 
  __int128 cross; 
  vec4_t color; 
  vec4_t v64; 

  if ( *(_DWORD *)&cnode->nextIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1496, ASSERT_TYPE_SANITY, "( cnode->nextIdx != -1 || cnode->prevIdx != -1 )", (const char *)&queryFormat, "cnode->nextIdx != -1 || cnode->prevIdx != -1") )
    __debugbreak();
  prevIdx = cnode->prevIdx;
  v8 = NULL;
  if ( prevIdx == -1 )
    v9 = NULL;
  else
    v9 = &s_nodes[prevIdx];
  nextIdx = cnode->nextIdx;
  if ( nextIdx != -1 )
    v8 = &s_nodes[nextIdx];
  v11 = cnode->origin.v[0];
  v12 = cnode->origin.v[1];
  v13 = cnode->origin.v[2];
  if ( v9 )
  {
    v18 = LODWORD(v9->origin.v[0]);
    *(float *)&v18 = v9->origin.v[0] - v11;
    v14 = v18;
    v17 = v9->origin.v[2] - v13;
    v16 = v9->origin.v[1] - v12;
  }
  else
  {
    v15 = LODWORD(cnode->origin.v[0]);
    *(float *)&v15 = v11 - v8->origin.v[0];
    v14 = v15;
    v16 = v12 - v8->origin.v[1];
    v17 = v13 - v8->origin.v[2];
  }
  if ( v8 )
  {
    v19 = v8->origin.v[0] - v11;
    v22 = v8->origin.v[2] - v13;
    v23 = LODWORD(v8->origin.v[1]);
    *(float *)&v23 = v8->origin.v[1] - v12;
    v20 = v23;
  }
  else
  {
    v19 = v11 - v9->origin.v[0];
    v21 = LODWORD(cnode->origin.v[1]);
    *(float *)&v21 = v12 - v9->origin.v[1];
    v20 = v21;
    v22 = v13 - v9->origin.v[2];
  }
  v24 = v14;
  *(float *)&v24 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v16 * v16)) + (float)(v17 * v17));
  _XMM3 = v24;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v28 = 1.0 / *(float *)&_XMM0;
  v29 = v20;
  *(float *)&v29 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(v19 * v19)) + (float)(v22 * v22));
  _XMM3 = v29;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  v33 = v22 * (float)(1.0 / *(float *)&_XMM0);
  v0.v[0] = v19 * (float)(1.0 / *(float *)&_XMM0);
  params->normalizedBisector.v[0] = (float)(*(float *)&v14 * v28) + v0.v[0];
  params->normalizedBisector.v[1] = (float)(v16 * v28) + (float)(*(float *)&v20 * (float)(1.0 / *(float *)&_XMM0));
  params->normalizedBisector.v[2] = (float)(v17 * v28) + v33;
  params->straightLine = 0;
  v34 = params->normalizedBisector.v[2];
  *(float *)&v29 = params->normalizedBisector.v[0] * params->normalizedBisector.v[0];
  v0.v[1] = *(float *)&v20 * (float)(1.0 / *(float *)&_XMM0);
  v35 = LODWORD(params->normalizedBisector.v[1]);
  v0.v[2] = v33;
  if ( fsqrt((float)(*(float *)&v29 + (float)(*(float *)&v35 * *(float *)&v35)) + (float)(v34 * v34)) < 0.0000099999997 )
  {
    Vec3Cross(&v0, &s_vehiclePathUpAxis, &params->normalizedBisector);
    params->straightLine = 1;
    v35 = LODWORD(params->normalizedBisector.v[1]);
    v34 = params->normalizedBisector.v[2];
  }
  v36 = params->normalizedBisector.v[0];
  v37 = v35;
  *(float *)&v37 = fsqrt((float)((float)(*(float *)&v35 * *(float *)&v35) + (float)(v36 * v36)) + (float)(v34 * v34));
  _XMM3 = v37;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  params->normalizedBisector.v[0] = v36 * (float)(1.0 / *(float *)&_XMM0);
  params->normalizedBisector.v[1] = (float)(1.0 / *(float *)&_XMM0) * params->normalizedBisector.v[1];
  params->normalizedBisector.v[2] = (float)(1.0 / *(float *)&_XMM0) * params->normalizedBisector.v[2];
  Vec3Cross(&params->normalizedBisector, &v0, (vec3_t *)&cross);
  Vec3Cross((const vec3_t *)&cross, &params->normalizedBisector, &params->frontPlane);
  v41 = vpp->origin.v[0] - cnode->origin.v[0];
  v43 = LODWORD(vpp->origin.v[1]);
  v42 = vpp->origin.v[1] - cnode->origin.v[1];
  v44 = vpp->origin.v[2] - cnode->origin.v[2];
  v45 = (float)((float)(v42 * params->normalizedBisector.v[1]) + (float)(v41 * params->normalizedBisector.v[0])) + (float)(v44 * params->normalizedBisector.v[2]);
  v46 = (float)(v45 * params->normalizedBisector.v[0]) - v41;
  v47 = (float)(v45 * params->normalizedBisector.v[2]) - v44;
  v48 = (float)(v45 * params->normalizedBisector.v[1]) - v42;
  *(float *)&v43 = fsqrt((float)((float)(v48 * v48) + (float)(v46 * v46)) + (float)(v47 * v47));
  _XMM3 = v43;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  params->perpToBisector.v[0] = (float)(1.0 / *(float *)&_XMM0) * v46;
  params->perpToBisector.v[2] = (float)(1.0 / *(float *)&_XMM0) * v47;
  params->perpToBisector.v[1] = (float)(1.0 / *(float *)&_XMM0) * v48;
  params->distanceToBisector = *(float *)&v43;
  v52 = DVARBOOL_vehicle_pathsmoothdebug;
  if ( !DVARBOOL_vehicle_pathsmoothdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_pathsmoothdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  if ( v52->current.enabled )
  {
    cross = _xmm;
    v64 = (vec4_t)_xmm;
    v53 = 300.0 * params->normalizedBisector.v[0];
    color = (vec4_t)_xmm;
    v54 = v53 + cnode->origin.v[0];
    v55 = 300.0 * params->normalizedBisector.v[1];
    v0.v[0] = v54;
    v56 = 300.0 * params->normalizedBisector.v[2];
    v0.v[1] = v55 + cnode->origin.v[1];
    v0.v[2] = v56 + cnode->origin.v[2];
    G_DebugLine(&cnode->origin, &v0, (const vec4_t *)&cross, 1);
    distanceToBisector = params->distanceToBisector;
    v58 = (float)(distanceToBisector * params->perpToBisector.v[1]) + vpp->origin.v[1];
    v0.v[0] = (float)(distanceToBisector * params->perpToBisector.v[0]) + vpp->origin.v[0];
    v0.v[2] = (float)(distanceToBisector * params->perpToBisector.v[2]) + vpp->origin.v[2];
    v0.v[1] = v58;
    G_DebugLine(&vpp->origin, &v0, &color, 1);
    v59 = 300.0 * params->frontPlane.v[1];
    v0.v[0] = (float)(300.0 * params->frontPlane.v[0]) + cnode->origin.v[0];
    v60 = 300.0 * params->frontPlane.v[2];
    v0.v[1] = v59 + cnode->origin.v[1];
    v0.v[2] = v60 + cnode->origin.v[2];
    G_DebugLine(&cnode->origin, &v0, &v64, 1);
  }
}

/*
==============
G_VehiclePath_Init
==============
*/
void G_VehiclePath_Init(void)
{
  s_numNodes = 0;
}

/*
==============
G_VehiclePath_InitPathPos
==============
*/
void G_VehiclePath_InitPathPos(VehiclePathPos *vpp)
{
  *(_QWORD *)&vpp->nodeIdx = 0xFFFFi64;
  vpp->speed = 0.0;
  *(_QWORD *)&vpp->lookAhead = 0i64;
  vpp->speedOverride = -1.0;
  *(_QWORD *)&vpp->origin.y = 0i64;
  *(_OWORD *)vpp->angles.v = 0ui64;
  *(_QWORD *)&vpp->lookPos.y = 0i64;
  *(_QWORD *)&vpp->switchNode[0].name = 0i64;
  *(_QWORD *)&vpp->switchNode[0].script_linkname = 0i64;
  *(_DWORD *)&vpp->switchNode[0].index = 0xFFFF;
  vpp->switchNode[0].speed = -1.0;
  vpp->switchNode[0].lookAhead = -1.0;
  *(_OWORD *)vpp->switchNode[0].origin.v = 0ui64;
  *(_QWORD *)&vpp->switchNode[0].dir.y = 0i64;
  vpp->switchNode[0].angles = s_invalidAngles;
  vpp->switchNode[0].length = 0.0;
  *(_DWORD *)&vpp->switchNode[0].nextIdx = -1;
  vpp->switchNode[0].notifyIdx = -1;
  *(_QWORD *)&vpp->switchNode[1].name = 0i64;
  *(_QWORD *)&vpp->switchNode[1].script_linkname = 0i64;
  *(_DWORD *)&vpp->switchNode[1].index = 0xFFFF;
  vpp->switchNode[1].speed = -1.0;
  vpp->switchNode[1].lookAhead = -1.0;
  *(_OWORD *)vpp->switchNode[1].origin.v = 0ui64;
  *(_QWORD *)&vpp->switchNode[1].dir.y = 0i64;
  vpp->switchNode[1].angles = s_invalidAngles;
  vpp->switchNode[1].length = 0.0;
  *(_DWORD *)&vpp->switchNode[1].nextIdx = -1;
  vpp->switchNode[1].notifyIdx = -1;
}

/*
==============
G_VehiclePath_IsEndOfPath
==============
*/
bool G_VehiclePath_IsEndOfPath(const VehiclePathPos *vpp)
{
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1232, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  return vpp->flags & 1;
}

/*
==============
G_VehiclePath_IsValidNode
==============
*/
bool G_VehiclePath_IsValidNode(__int16 nodeIdx)
{
  return nodeIdx >= 0 && nodeIdx < s_numNodes;
}

/*
==============
G_VehiclePath_ParseAllFields
==============
*/
void G_VehiclePath_ParseAllFields(VehiclePathNode *node)
{
  int v3; 
  char *(*spawnVars)[2]; 
  const char *v5; 
  const char *v6; 
  scr_string_t String; 
  scr_string_t *name; 
  VehicleNodeField *v9; 
  unsigned int CanonicalString; 
  scrContext_t *v11; 
  unsigned int Field; 
  const char *NameForType; 
  const char *v14; 
  int v16; 
  VariableType type[8]; 
  float v19; 
  float v20; 
  float v21; 
  float value; 
  float v23; 
  float v24; 

  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2664, ASSERT_TYPE_SANITY, "( level.spawnVar.spawnVarsValid )", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  v3 = 0;
  if ( level.spawnVar.numSpawnVars > 0 )
  {
    spawnVars = level.spawnVar.spawnVars;
    do
    {
      v5 = (*spawnVars)[0];
      v6 = (*spawnVars)[1];
      String = SL_FindString((*spawnVars)[0]);
      name = vehicleNodeFields[0].name;
      v9 = vehicleNodeFields;
      if ( vehicleNodeFields[0].name )
      {
        while ( *name != String )
        {
          name = v9[1].name;
          ++v9;
          if ( !name )
            goto LABEL_9;
        }
        switch ( v9->type )
        {
          case F_INT:
            *(scr_string_t *)((char *)&node->name + v9->ofs) = atoi(v6);
            break;
          case F_SHORT:
            *(_WORD *)((char *)&node->name + v9->ofs) = atoi(v6);
            break;
          case F_BYTE:
            *((_BYTE *)&node->name + v9->ofs) = atoi(v6);
            break;
          case F_FLOAT:
            *(double *)&_XMM0 = atof(v6);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            *(scr_string_t *)((char *)&node->name + v9->ofs) = _XMM1;
            break;
          case F_STRING:
            Scr_SetString((scr_string_t *)((char *)&node->name + v9->ofs), (scr_string_t)0);
            *(scr_string_t *)((char *)&node->name + v9->ofs) = Scr_NewString(v6);
            break;
          case F_VECTOR:
            v19 = 0.0;
            v20 = 0.0;
            v21 = 0.0;
            j_sscanf(v6, "%f %f %f", &v19, &v20, &v21);
            *(float *)((char *)&node->name + v9->ofs) = v19;
            *(float *)((char *)&node->target + v9->ofs) = v20;
            _XMM0 = LODWORD(v21);
            *(float *)((char *)&node->script_linkname + v9->ofs) = v21;
            break;
          case F_ANGLES_YAW:
            v19 = 0.0;
            v20 = 0.0;
            v21 = 0.0;
            j_sscanf(v6, "%f %f %f", &v19, &v20, &v21);
            _XMM0 = LODWORD(v20);
            *(double *)&_XMM0 = AngleNormalize360(v20);
            *(scr_string_t *)((char *)&node->name + v9->ofs) = _XMM0;
            break;
          default:
            goto LABEL_28;
        }
        goto LABEL_28;
      }
LABEL_9:
      CanonicalString = SL_GetCanonicalString(v5);
      v11 = ScriptContext_Server();
      Field = Scr_FindField(v11, CanonicalString, type);
      if ( Field )
      {
        switch ( type[0] )
        {
          case VAR_STRING:
            Scr_AddString(v11, v6);
            goto LABEL_27;
          case VAR_VECTOR:
            value = 0.0;
            v23 = 0.0;
            v24 = 0.0;
            j_sscanf(v6, "%f %f %f", &value, &v23, &v24);
            Scr_AddVector(v11, &value);
            goto LABEL_27;
          case VAR_FLOAT:
            *(double *)&_XMM0 = atof(v6);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
            Scr_AddFloat(v11, *(float *)&_XMM1);
            goto LABEL_27;
          case VAR_INTEGER:
            v16 = atoi(v6);
            Scr_AddInt(v11, v16);
LABEL_27:
            Scr_SetDynamicEntityField(v11, LOCAL_CLIENT_0, node->index, ENTITY_CLASS_VEHICLENODE, Field);
            goto LABEL_28;
        }
        NameForType = Scr_GetNameForType(type[0]);
        v14 = j_va("G_VehiclePath_SetScriptVariable: unsupported type %s", NameForType);
        Scr_Error(COM_ERR_2948, v11, v14);
      }
LABEL_28:
      ++v3;
      ++spawnVars;
    }
    while ( v3 < level.spawnVar.numSpawnVars );
  }
}

/*
==============
G_VehiclePath_PathDebugLine
==============
*/
void G_VehiclePath_PathDebugLine(const vec3_t *start, const vec3_t *end, int forceDraw)
{
  float v4; 
  __int128 v5; 
  float v6; 
  float v7; 
  float v11; 
  float v12; 
  float v13; 
  vec4_t color; 

  v5 = LODWORD(end->v[1]);
  v4 = end->v[1] - start->v[1];
  v6 = end->v[2] - start->v[2];
  v7 = end->v[0] - start->v[0];
  *(float *)&v5 = fsqrt((float)((float)(v4 * v4) + (float)(v7 * v7)) + (float)(v6 * v6));
  _XMM4 = v5;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v11 = v7 * (float)(1.0 / *(float *)&_XMM0);
  v12 = v4 * (float)(1.0 / *(float *)&_XMM0);
  v13 = v6 * (float)(1.0 / *(float *)&_XMM0);
  if ( s_newDebugLine )
  {
    s_start = *start;
    s_end = *end;
    s_newDebugLine = 0;
  }
  else
  {
    if ( (float)((float)((float)(v12 * s_dir.v[1]) + (float)(v11 * s_dir.v[0])) + (float)(v13 * s_dir.v[2])) >= 0.99989998 && !forceDraw )
    {
      s_end = *end;
      return;
    }
    color = (vec4_t)_xmm;
    G_DebugLine(&s_start, &s_end, &color, 1);
    s_start = *start;
    s_end = *end;
  }
  s_dir.v[2] = v13;
  s_dir.v[1] = v12;
  s_dir.v[0] = v11;
}

/*
==============
G_VehiclePath_ProcessNotify
==============
*/
void G_VehiclePath_ProcessNotify(__int16 nodeIndex, int entIndex, const vec3_t *origin, VehiclePathNotifyMode notifyMode)
{
  int v5; 
  __int64 v7; 
  scrContext_t *v8; 
  __int64 localClientNum; 
  __int64 v10; 

  v5 = nodeIndex;
  v7 = entIndex;
  if ( nodeIndex >= (unsigned int)s_numNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2258, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( s_numNodes )", "nodeIndex doesn't index s_numNodes\n\t%i not in [0, %i)", nodeIndex, s_numNodes) )
    __debugbreak();
  if ( (unsigned int)v7 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(localClientNum) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2259, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (_DWORD)v7 != 2047 )
  {
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v10) = 2048;
      LODWORD(localClientNum) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", localClientNum, v10) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v7] )
    {
      LODWORD(localClientNum) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2264, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( entIndex ) ) )", "( entIndex ) = %i", localClientNum) )
        __debugbreak();
    }
    if ( G_IsEntityInUse(v7) )
    {
      if ( notifyMode )
      {
        if ( notifyMode == VEH_PATH_NOTIFY_DRAW )
        {
          G_VehiclePath_DebugLine(&s_nodes[(__int16)v5].origin, origin, 0);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2299, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehPath_ProcessNotify: Unknown notify mode") )
        {
          __debugbreak();
        }
      }
      else
      {
        v8 = ScriptContext_Server();
        Scr_AddEntityNum(v8, v7, ENTITY_CLASS_GENTITY);
        Scr_NotifyNum(v8, v5, ENTITY_CLASS_VEHICLENODE, scr_const.trigger, 1u, LOCAL_CLIENT_0);
      }
    }
  }
}

/*
==============
G_VehiclePath_ProcessNotify_Forward
==============
*/
char G_VehiclePath_ProcessNotify_Forward(const VehiclePathPos *const prevVpp, const VehiclePathPos *const nextVpp, const VehiclePathNotifyMode notifyMode, const __int16 nodeIndex, const int waitNode, const int entIndex)
{
  bool v10; 
  char result; 
  VehiclePathNode *v12; 
  __int16 nextIdx; 
  __int16 notifyIdx; 
  double NotifyFraction; 
  double v16; 
  __int64 v17; 

  if ( !prevVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2308, ASSERT_TYPE_SANITY, "( prevVpp )", (const char *)&queryFormat, "prevVpp") )
    __debugbreak();
  if ( !nextVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2309, ASSERT_TYPE_SANITY, "( nextVpp )", (const char *)&queryFormat, "nextVpp") )
    __debugbreak();
  v10 = 0;
  if ( nodeIndex < 0 )
    return 0;
  if ( nodeIndex >= (unsigned int)s_numNodes )
  {
    LODWORD(v17) = nodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2321, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( s_numNodes )", "nodeIndex doesn't index s_numNodes\n\t%i not in [0, %i)", v17, s_numNodes) )
      __debugbreak();
  }
  v12 = &s_nodes[nodeIndex];
  if ( nodeIndex != nextVpp->nodeIdx )
  {
    nextIdx = v12->nextIdx;
    if ( nextIdx != prevVpp->nodeIdx )
      v10 = G_VehiclePath_ProcessNotify_Forward(prevVpp, nextVpp, notifyMode, nextIdx, waitNode, entIndex);
  }
  notifyIdx = v12->notifyIdx;
  if ( notifyIdx >= 0 )
  {
    if ( nextVpp->nodeIdx == nodeIndex )
    {
      NotifyFraction = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      if ( *(float *)&NotifyFraction <= nextVpp->frac )
        goto LABEL_21;
    }
    else
    {
      if ( prevVpp->nodeIdx != nodeIndex )
      {
LABEL_22:
        G_VehiclePath_ProcessNotify(notifyIdx, entIndex, &nextVpp->origin, notifyMode);
        goto LABEL_23;
      }
      v16 = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      if ( *(float *)&v16 > prevVpp->frac )
      {
LABEL_21:
        notifyIdx = v12->notifyIdx;
        goto LABEL_22;
      }
    }
  }
LABEL_23:
  if ( nodeIndex != prevVpp->nodeIdx )
    G_VehiclePath_ProcessNotify(nodeIndex, entIndex, &nextVpp->origin, notifyMode);
  result = v10;
  if ( nodeIndex == waitNode )
    return 1;
  return result;
}

/*
==============
G_VehiclePath_ProcessNotify_Reverse
==============
*/
char G_VehiclePath_ProcessNotify_Reverse(const VehiclePathPos *const prevVpp, const VehiclePathPos *const nextVpp, const VehiclePathNotifyMode notifyMode, const __int16 nodeIndex, const int waitNode, const int entIndex)
{
  bool v10; 
  char result; 
  VehiclePathNode *v12; 
  __int16 prevIdx; 
  __int16 notifyIdx; 
  double NotifyFraction; 
  double v16; 
  __int64 v17; 

  if ( !prevVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2371, ASSERT_TYPE_SANITY, "( prevVpp )", (const char *)&queryFormat, "prevVpp") )
    __debugbreak();
  if ( !nextVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2372, ASSERT_TYPE_SANITY, "( nextVpp )", (const char *)&queryFormat, "nextVpp") )
    __debugbreak();
  v10 = 0;
  if ( nodeIndex < 0 )
    return 0;
  if ( nodeIndex >= (unsigned int)s_numNodes )
  {
    LODWORD(v17) = nodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2384, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( s_numNodes )", "nodeIndex doesn't index s_numNodes\n\t%i not in [0, %i)", v17, s_numNodes) )
      __debugbreak();
  }
  v12 = &s_nodes[nodeIndex];
  prevIdx = v12->prevIdx;
  if ( prevIdx != nextVpp->nodeIdx && prevIdx != prevVpp->nodeIdx )
    v10 = G_VehiclePath_ProcessNotify_Reverse(prevVpp, nextVpp, notifyMode, prevIdx, waitNode, entIndex);
  notifyIdx = v12->notifyIdx;
  if ( notifyIdx >= 0 )
  {
    if ( nextVpp->nodeIdx == nodeIndex )
    {
      NotifyFraction = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      if ( *(float *)&NotifyFraction <= nextVpp->frac )
        goto LABEL_23;
    }
    else
    {
      if ( prevVpp->nodeIdx != nodeIndex )
      {
LABEL_22:
        G_VehiclePath_ProcessNotify(notifyIdx, entIndex, &nextVpp->origin, notifyMode);
        goto LABEL_23;
      }
      v16 = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      if ( *(float *)&v16 > prevVpp->frac )
        goto LABEL_23;
    }
    notifyIdx = v12->notifyIdx;
    goto LABEL_22;
  }
LABEL_23:
  G_VehiclePath_ProcessNotify(nodeIndex, entIndex, &nextVpp->origin, notifyMode);
  result = v10;
  if ( nodeIndex == waitNode )
    return 1;
  return result;
}

/*
==============
G_VehiclePath_SetPathPosSwitchNode
==============
*/
void G_VehiclePath_SetPathPosSwitchNode(VehiclePathPos *vpp, __int16 srcNodeIdx, __int16 dstNodeIdx)
{
  VehiclePathNode *v6; 
  __int64 v7; 
  float v8; 
  __int128 v9; 
  float v10; 

  Scr_SetString(&vpp->switchNode[0].name, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[0].target, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[0].script_linkname, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[0].script_noteworthy, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].name, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].target, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].script_linkname, (scr_string_t)0);
  Scr_SetString(&vpp->switchNode[1].script_noteworthy, (scr_string_t)0);
  *(_DWORD *)&vpp->switchNode[0].index = 0xFFFF;
  *(_QWORD *)&vpp->switchNode[0].name = 0i64;
  *(_QWORD *)&vpp->switchNode[0].script_linkname = 0i64;
  vpp->switchNode[0].speed = -1.0;
  vpp->switchNode[0].lookAhead = -1.0;
  *(_QWORD *)vpp->switchNode[0].origin.v = 0i64;
  *(_QWORD *)&vpp->switchNode[0].origin.z = 0i64;
  *(_QWORD *)&vpp->switchNode[0].dir.y = 0i64;
  vpp->switchNode[0].angles = s_invalidAngles;
  vpp->switchNode[0].length = 0.0;
  *(_DWORD *)&vpp->switchNode[0].nextIdx = -1;
  vpp->switchNode[0].notifyIdx = -1;
  *(_QWORD *)&vpp->switchNode[1].name = 0i64;
  *(_QWORD *)&vpp->switchNode[1].script_linkname = 0i64;
  *(_DWORD *)&vpp->switchNode[1].index = 0xFFFF;
  vpp->switchNode[1].speed = -1.0;
  vpp->switchNode[1].lookAhead = -1.0;
  *(_QWORD *)vpp->switchNode[1].origin.v = 0i64;
  *(_QWORD *)&vpp->switchNode[1].origin.z = 0i64;
  *(_QWORD *)&vpp->switchNode[1].dir.y = 0i64;
  vpp->switchNode[1].angles = s_invalidAngles;
  vpp->switchNode[1].length = 0.0;
  *(_DWORD *)&vpp->switchNode[1].nextIdx = -1;
  vpp->switchNode[1].notifyIdx = -1;
  if ( srcNodeIdx >= 0 && dstNodeIdx >= 0 )
  {
    v6 = &s_nodes[srcNodeIdx];
    G_VehiclePath_CopyNode(v6, vpp->switchNode);
    G_VehiclePath_CopyNode(v6, &vpp->switchNode[1]);
    vpp->switchNode[0].nextIdx = dstNodeIdx;
    v7 = dstNodeIdx;
    v8 = s_nodes[v7].origin.v[0] - v6->origin.v[0];
    vpp->switchNode[0].dir.v[0] = v8;
    v9 = LODWORD(s_nodes[v7].origin.v[1]);
    *(float *)&v9 = s_nodes[v7].origin.v[1] - v6->origin.v[1];
    vpp->switchNode[0].dir.v[1] = *(float *)&v9;
    v10 = s_nodes[v7].origin.v[2] - v6->origin.v[2];
    vpp->switchNode[0].dir.v[2] = v10;
    *(float *)&v9 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8)) + (float)(v10 * v10));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    vpp->switchNode[0].dir.v[0] = v8 * (float)(1.0 / *(float *)&_XMM0);
    vpp->switchNode[0].dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * vpp->switchNode[0].dir.v[1];
    vpp->switchNode[0].dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * vpp->switchNode[0].dir.v[2];
    vpp->switchNode[0].length = *(float *)&v9;
  }
}

/*
==============
G_VehiclePath_SetSpeedOverride
==============
*/
void G_VehiclePath_SetSpeedOverride(VehiclePathPos *vpp, const float newSpeedOverride)
{
  if ( vpp )
  {
    vpp->speedOverride = newSpeedOverride;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1241, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
      __debugbreak();
    MEMORY[0xC] = newSpeedOverride;
  }
}

/*
==============
G_VehiclePath_Setup
==============
*/
void G_VehiclePath_Setup(void)
{
  int v0; 
  __int16 *p_nextIdx; 
  int v2; 
  int v3; 
  __int64 v4; 
  VehiclePathNode *v5; 
  __int16 v6; 
  __int64 v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  __int16 *p_prevIdx; 
  __int16 v12; 
  __int16 v13; 
  int v14; 
  float *v15; 
  __int16 v16; 
  __int64 v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  bool v25; 
  int v26; 
  float *v27; 
  float v28; 
  bool v29; 
  float v34; 
  __int64 v35; 
  __int64 v36; 

  v0 = 0;
  if ( s_numNodes > 0 )
  {
    p_nextIdx = &s_nodes[0].nextIdx;
    do
    {
      v2 = *((_DWORD *)p_nextIdx - 16);
      if ( v2 )
      {
        v3 = 0;
        v4 = 0i64;
        if ( s_numNodes <= 0 )
        {
LABEL_8:
          v6 = -1;
        }
        else
        {
          v5 = s_nodes;
          while ( v5->name != v2 )
          {
            ++v3;
            ++v4;
            ++v5;
            if ( v4 >= s_numNodes )
              goto LABEL_8;
          }
          v6 = truncate_cast<short,int>(v3);
        }
        *p_nextIdx = v6;
        if ( v6 >= 0 )
        {
          if ( v6 >= (unsigned int)s_numNodes )
          {
            LODWORD(v36) = s_numNodes;
            LODWORD(v35) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 797, ASSERT_TYPE_ASSERT, "(unsigned)( node->nextIdx ) < (unsigned)( s_numNodes )", "node->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v35, v36) )
              __debugbreak();
          }
          v7 = *p_nextIdx;
          if ( (s_nodes[v7].flags & 4) != 0 )
            p_nextIdx[2] = v7;
        }
      }
      v8 = 0;
      if ( s_numNodes > 0 )
      {
        while ( v0 == v8 || *((_DWORD *)p_nextIdx - 17) != s_nodes[v8].target )
        {
          if ( ++v8 >= s_numNodes )
            goto LABEL_25;
        }
        if ( (unsigned int)(v8 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v8, "signed", v8) )
          __debugbreak();
        p_nextIdx[1] = v8;
      }
LABEL_25:
      if ( *p_nextIdx == v0 )
        *p_nextIdx = -1;
      if ( p_nextIdx[1] == v0 )
        p_nextIdx[1] = -1;
      ++v0;
      p_nextIdx += 38;
    }
    while ( v0 < s_numNodes );
  }
  v9 = s_numNodes;
  v10 = 0;
  if ( s_numNodes > 0 )
  {
    p_prevIdx = &s_nodes[0].prevIdx;
    do
    {
      if ( (*(_BYTE *)(p_prevIdx - 26) & 4) != 0 )
      {
        v12 = *p_prevIdx;
        if ( *p_prevIdx >= 0 )
        {
          if ( v12 >= v9 )
          {
            LODWORD(v36) = v9;
            LODWORD(v35) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 846, ASSERT_TYPE_ASSERT, "(unsigned)( node->prevIdx ) < (unsigned)( s_numNodes )", "node->prevIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v35, v36) )
              __debugbreak();
          }
          s_nodes[*p_prevIdx].nextIdx = *(p_prevIdx - 1);
        }
        v13 = *(p_prevIdx - 1);
        if ( v13 >= 0 )
        {
          if ( v13 >= (unsigned int)s_numNodes )
          {
            LODWORD(v36) = s_numNodes;
            LODWORD(v35) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 852, ASSERT_TYPE_ASSERT, "(unsigned)( node->nextIdx ) < (unsigned)( s_numNodes )", "node->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v35, v36) )
              __debugbreak();
          }
          s_nodes[*(p_prevIdx - 1)].prevIdx = *p_prevIdx;
        }
      }
      v9 = s_numNodes;
      ++v10;
      p_prevIdx += 38;
    }
    while ( v10 < s_numNodes );
  }
  v14 = 0;
  if ( s_numNodes > 0 )
  {
    v15 = &s_nodes[0].dir.v[1];
    do
    {
      if ( (*((_BYTE *)v15 - 26) & 4) == 0 )
      {
        v16 = *((_WORD *)v15 + 12);
        if ( v16 >= 0 )
        {
          v17 = v16;
          v18 = s_nodes[v17].origin.v[0] - *(v15 - 4);
          *(v15 - 1) = v18;
          v20 = LODWORD(s_nodes[v17].origin.v[1]);
          v19 = s_nodes[v17].origin.v[1] - *(v15 - 3);
          *v15 = v19;
          v21 = s_nodes[v17].origin.v[2] - *(v15 - 2);
          *(float *)&v20 = fsqrt((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v21 * v21));
          _XMM3 = v20;
          __asm
          {
            vcmpless xmm0, xmm3, xmm8
            vblendvps xmm0, xmm3, xmm7, xmm0
          }
          *(v15 - 1) = v18 * (float)(1.0 / *(float *)&_XMM0);
          v15[1] = v21 * (float)(1.0 / *(float *)&_XMM0);
          *v15 = v19 * (float)(1.0 / *(float *)&_XMM0);
          v25 = (*((_BYTE *)v15 - 26) & 2) == 0;
          v15[5] = *(float *)&v20;
          if ( v25 )
            vectoangles((const vec3_t *)(v15 - 1), (vec3_t *)(v15 + 2));
        }
      }
      ++v14;
      v15 += 19;
    }
    while ( v14 < s_numNodes );
  }
  v26 = 0;
  if ( s_numNodes > 0 )
  {
    v27 = &s_nodes[0].angles.v[2];
    do
    {
      if ( (*((_BYTE *)v27 - 42) & 4) != 0 )
      {
        if ( s_invalidAngles.v[0] == *(v27 - 2) && s_invalidAngles.v[1] == *(v27 - 1) && s_invalidAngles.v[2] == *v27 )
        {
          *((_QWORD *)v27 - 1) = 0i64;
          *v27 = 0.0;
        }
      }
      else
      {
        *(v27 - 10) = G_VehiclePath_CalcNodeSpeed(v26);
        v28 = G_VehiclePath_CalcNodeLookAhead(v26);
        v29 = *(v27 - 10) >= 0.0;
        *(v27 - 9) = v28;
        if ( !v29 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E39E60, 800i64, *(v27 - 8), *(v27 - 7), *(v27 - 6));
        if ( (*((_BYTE *)v27 - 42) & 2) != 0 )
          G_VehiclePath_CalcNodeAngles(v26, (vec3_t *)(v27 - 2));
        _XMM5 = 0i64;
        __asm { vroundss xmm2, xmm5, xmm1, 1 }
        *(v27 - 2) = (float)((float)(0.0027777778 * *(v27 - 2)) - *(float *)&_XMM2) * 360.0;
        __asm { vroundss xmm3, xmm5, xmm2, 1 }
        *(v27 - 1) = (float)((float)(0.0027777778 * *(v27 - 1)) - *(float *)&_XMM3) * 360.0;
        __asm { vroundss xmm2, xmm5, xmm1, 1 }
        *v27 = (float)((float)(0.0027777778 * *v27) - *(float *)&_XMM2) * 360.0;
        v34 = *(v27 - 10);
        if ( v34 <= 0.0 || *(v27 - 9) <= 0.0 )
        {
          *((_WORD *)v27 + 4) = -1;
LABEL_67:
          if ( v34 <= 0.0 )
            *(v27 - 10) = 1.0;
          if ( *(v27 - 9) <= 0.0 )
            *(v27 - 9) = 1.0;
          goto LABEL_71;
        }
        if ( *((__int16 *)v27 + 4) < 0 )
          goto LABEL_67;
      }
LABEL_71:
      ++v26;
      v27 += 19;
    }
    while ( v26 < s_numNodes );
  }
}

/*
==============
G_VehiclePath_SpawnNode
==============
*/
void G_VehiclePath_SpawnNode(const char *className)
{
  __int16 v1; 
  float v3; 
  float v4; 
  VehiclePathNode *v5; 
  float speed; 

  v1 = s_numNodes;
  if ( s_numNodes >= 4000 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E3A500, 801i64);
    v1 = s_numNodes;
  }
  v3 = s_invalidAngles.v[0];
  v4 = s_invalidAngles.v[1];
  s_numNodes = v1 + 1;
  v5 = &s_nodes[v1];
  *(_QWORD *)&v5->name = 0i64;
  *(_QWORD *)&v5->script_linkname = 0i64;
  v5->flags = 0;
  v5->index = v1;
  v5->speed = -1.0;
  v5->lookAhead = -1.0;
  *(_QWORD *)v5->origin.v = 0i64;
  *(_QWORD *)&v5->origin.z = 0i64;
  *(_QWORD *)&v5->dir.y = 0i64;
  v5->angles.v[0] = v3;
  v5->angles.v[2] = s_invalidAngles.v[2];
  v5->angles.v[1] = v4;
  v5->length = 0.0;
  v5->notifyIdx = -1;
  *(_DWORD *)&v5->nextIdx = -1;
  G_VehiclePath_ParseAllFields(v5);
  if ( (v5->flags & 1) != 0 )
    v5->flags = 1;
  if ( IsParentClassname(className, "info_vehicle_node_rotate") )
    v5->flags |= 2u;
  if ( IsParentClassname(className, "info_vehicle_node_notify") )
    v5->flags |= 4u;
  if ( !v5->name )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E3A590, 802i64, v5->origin.v[0], v5->origin.v[1], v5->origin.v[2]);
  speed = v5->speed;
  if ( speed >= 0.0 )
    v5->speed = speed * 17.6;
}

/*
==============
G_VehiclePath_StartPathPos
==============
*/
void G_VehiclePath_StartPathPos(VehiclePathPos *vpp)
{
  if ( vpp )
  {
    vpp->flags &= ~1u;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1221, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
      __debugbreak();
    MEMORY[2] &= ~1u;
  }
}

/*
==============
G_VehiclePath_UpdatePathPos
==============
*/
void G_VehiclePath_UpdatePathPos(VehiclePathPos *vpp, VehiclePathDir pathDir)
{
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  G_VehiclePath_UpdatePathPos(vpp, pathDir, (float)level.frameDuration * 0.001);
}

/*
==============
G_VehiclePath_UpdatePathPos
==============
*/
void G_VehiclePath_UpdatePathPos(VehiclePathPos *vpp, VehiclePathDir pathDir, float deltaTime)
{
  vec3_t *p_lookPos; 
  float v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  float speedOverride; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t vec; 

  if ( (vpp->flags & 1) == 0 )
  {
    G_VehiclePath_BeginSwitchNode(vpp);
    p_lookPos = &vpp->lookPos;
    if ( pathDir )
      G_VehiclePath_GetReverseLookAheadOrigin(vpp, p_lookPos, 0.0);
    else
      G_VehiclePath_GetForwardLookAheadOrigin(vpp, p_lookPos, 0.0);
    v7 = vpp->lookPos.v[0] - vpp->origin.v[0];
    v9 = LODWORD(vpp->lookPos.v[1]);
    v8 = vpp->lookPos.v[1] - vpp->origin.v[1];
    v10 = vpp->lookPos.v[2] - vpp->origin.v[2];
    *(float *)&v9 = fsqrt((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v10 * v10));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    vec.v[0] = v7 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[2] = v10 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[1] = v8 * (float)(1.0 / *(float *)&_XMM0);
    if ( *(float *)&v9 <= 0.0 )
    {
      vpp->flags |= 1u;
    }
    else
    {
      vectoangles(&vec, &vpp->angles);
      _XMM8 = 0i64;
      __asm { vroundss xmm2, xmm8, xmm1, 1 }
      vpp->angles.v[0] = (float)((float)(0.0027777778 * vpp->angles.v[0]) - *(float *)&_XMM2) * 360.0;
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      vpp->angles.v[1] = (float)((float)(0.0027777778 * vpp->angles.v[1]) - *(float *)&_XMM3) * 360.0;
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      vpp->angles.v[2] = (float)((float)(0.0027777778 * vpp->angles.v[2]) - *(float *)&_XMM3) * 360.0;
      speedOverride = vpp->speedOverride;
      if ( speedOverride < 0.0 )
        v19 = deltaTime * vpp->speed;
      else
        v19 = speedOverride * deltaTime;
      v20 = v19 * vec.v[1];
      vpp->origin.v[0] = (float)(v19 * vec.v[0]) + vpp->origin.v[0];
      v21 = v19 * vec.v[2];
      vpp->origin.v[1] = v20 + vpp->origin.v[1];
      vpp->origin.v[2] = v21 + vpp->origin.v[2];
      if ( pathDir )
        G_VehiclePath_AdvancePathPosReverse(vpp, &vec);
      else
        G_VehiclePath_AdvancePathPosForward(vpp, &vec);
      G_VehiclePath_GetAngles(vpp, &vpp->angles);
    }
    G_VehiclePath_EndSwitchNode(vpp);
  }
}

/*
==============
G_VehiclePath_UpdatePathPosAnimated
==============
*/
void G_VehiclePath_UpdatePathPosAnimated(VehiclePathPos *vpp, const vec3_t *origin, const vec3_t *angles)
{
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2151, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  if ( (vpp->flags & 1) == 0 )
  {
    G_VehiclePath_BeginSwitchNode(vpp);
    G_VehiclePath_GetForwardLookAheadOrigin(vpp, &vpp->lookPos, 0.0);
    vpp->origin.v[0] = origin->v[0];
    vpp->origin.v[1] = origin->v[1];
    vpp->origin.v[2] = origin->v[2];
    vpp->angles.v[0] = angles->v[0];
    vpp->angles.v[1] = angles->v[1];
    vpp->angles.v[2] = angles->v[2];
    G_VehiclePath_AdvanceAnimPathPosForward(vpp);
    G_VehiclePath_EndSwitchNode(vpp);
  }
}

/*
==============
G_VehiclePath_UpdatePathPosLookAhead
==============
*/
void G_VehiclePath_UpdatePathPosLookAhead(VehiclePathPos *vpp, float lookAheadOffset, VehiclePathDir pathDir)
{
  vec3_t *p_lookPos; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2212, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  G_VehiclePath_BeginSwitchNode(vpp);
  p_lookPos = &vpp->lookPos;
  if ( pathDir )
    G_VehiclePath_GetReverseLookAheadOrigin(vpp, p_lookPos, lookAheadOffset);
  else
    G_VehiclePath_GetForwardLookAheadOrigin(vpp, p_lookPos, lookAheadOffset);
  G_VehiclePath_EndSwitchNode(vpp);
}

/*
==============
G_VehiclePath_UpdatePathPosNotifies
==============
*/
__int64 G_VehiclePath_UpdatePathPosNotifies(const VehiclePathPos *prevVpp, const VehiclePathPos *nextVpp, int entIndex, __int16 waitNode, VehiclePathNotifyMode notifyMode, VehiclePathDir pathDir)
{
  unsigned __int8 v10; 
  __int16 nodeIdx; 
  __int64 v12; 
  VehiclePathNode *v13; 
  double NotifyFraction; 
  char v15; 
  __int64 entIndexa; 
  __int64 v18; 

  if ( !prevVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2431, ASSERT_TYPE_SANITY, "( prevVpp )", (const char *)&queryFormat, "prevVpp") )
    __debugbreak();
  if ( !nextVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2432, ASSERT_TYPE_SANITY, "( nextVpp )", (const char *)&queryFormat, "nextVpp") )
    __debugbreak();
  if ( (unsigned int)entIndex >= 0x800 )
  {
    LODWORD(entIndexa) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2433, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndexa, 2048) )
      __debugbreak();
  }
  v10 = 0;
  G_VehiclePath_BeginSwitchNode(prevVpp);
  nodeIdx = prevVpp->nodeIdx;
  if ( prevVpp->nodeIdx != nextVpp->nodeIdx )
  {
    if ( pathDir )
    {
      if ( pathDir != VEH_PATH_REVERSE )
        goto LABEL_33;
      v15 = G_VehiclePath_ProcessNotify_Reverse(prevVpp, nextVpp, notifyMode, nodeIdx, waitNode, entIndex);
    }
    else
    {
      v15 = G_VehiclePath_ProcessNotify_Forward(prevVpp, nextVpp, notifyMode, nodeIdx, waitNode, entIndex);
    }
    v10 = v15;
    goto LABEL_33;
  }
  if ( nodeIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v18) = s_numNodes;
    LODWORD(entIndexa) = nodeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2444, ASSERT_TYPE_ASSERT, "(unsigned)( prevVpp->nodeIdx ) < (unsigned)( s_numNodes )", "prevVpp->nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", entIndexa, v18) )
      __debugbreak();
  }
  v12 = prevVpp->nodeIdx;
  v13 = &s_nodes[v12];
  if ( pathDir == VEH_PATH_REVERSE && v13->prevIdx < 0 && prevVpp->frac > 0.0 && nextVpp->frac == 0.0 )
    G_VehiclePath_ProcessNotify(v12, entIndex, &nextVpp->origin, notifyMode);
  if ( v13->notifyIdx >= 0 )
  {
    NotifyFraction = G_VehiclePath_GetNotifyFraction(v13);
    if ( pathDir )
    {
      if ( pathDir == VEH_PATH_REVERSE && *(float *)&NotifyFraction < prevVpp->frac && *(float *)&NotifyFraction >= nextVpp->frac )
        goto LABEL_27;
    }
    else if ( *(float *)&NotifyFraction > prevVpp->frac && *(float *)&NotifyFraction <= nextVpp->frac )
    {
LABEL_27:
      G_VehiclePath_ProcessNotify(v13->notifyIdx, entIndex, &nextVpp->origin, notifyMode);
    }
  }
LABEL_33:
  G_VehiclePath_EndSwitchNode(prevVpp);
  return v10;
}

/*
==============
G_VehiclePath_UpdatePathPosPhysics
==============
*/
void G_VehiclePath_UpdatePathPosPhysics(VehiclePathPos *vpp, const vec3_t *origin, const vec3_t *angles, VehiclePathDir pathDir)
{
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2181, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  if ( (vpp->flags & 1) == 0 )
  {
    G_VehiclePath_BeginSwitchNode(vpp);
    vpp->origin.v[0] = origin->v[0];
    vpp->origin.v[1] = origin->v[1];
    vpp->origin.v[2] = origin->v[2];
    vpp->angles.v[0] = angles->v[0];
    vpp->angles.v[1] = angles->v[1];
    vpp->angles.v[2] = angles->v[2];
    if ( pathDir )
      G_VehiclePath_AdvanceAnimPathPosReverse(vpp);
    else
      G_VehiclePath_AdvanceAnimPathPosForward(vpp);
    G_VehiclePath_EndSwitchNode(vpp);
  }
}

