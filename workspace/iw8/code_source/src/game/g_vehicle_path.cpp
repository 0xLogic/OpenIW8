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
  unsigned int v12; 
  int v13; 
  unsigned int nodeIdx; 
  __int16 nextIdx; 
  __int16 flags; 
  __int16 v41; 
  __int16 v42; 
  __int16 v43; 
  __int16 v45; 
  __int16 v51; 
  __int64 v58; 
  __int64 v59; 

  _RDI = vpp;
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1875, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v12 = s_numNodes;
  v13 = 0;
  nodeIdx = _RDI->nodeIdx;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+118h+var_D8], xmm0
  }
  if ( s_numNodes > 0 )
  {
    _R12 = s_nodes;
    __asm
    {
      vmovaps [rsp+118h+var_38], xmm6
      vmovaps [rsp+118h+var_48], xmm7
      vmovaps [rsp+118h+var_58], xmm8
      vmovaps [rsp+118h+var_68], xmm9
      vmovaps [rsp+118h+var_78], xmm10
      vmovaps [rsp+118h+var_88], xmm11
      vmovaps [rsp+118h+var_98], xmm12
      vmovaps [rsp+118h+var_A8], xmm13
      vmovaps [rsp+118h+var_B8], xmm14
      vmovaps [rsp+118h+var_C8], xmm15
    }
    while ( 1 )
    {
      ++v13;
      if ( nodeIdx >= v12 )
      {
        LODWORD(v59) = v12;
        LODWORD(v58) = nodeIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1894, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      _RBX = &s_nodes[nodeIdx];
      nextIdx = _RBX->nextIdx;
      if ( nextIdx < 0 )
        break;
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+40h]
        vxorps  xmm7, xmm7, xmm7
        vucomiss xmm5, xmm7
      }
      if ( !nextIdx )
        break;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+18h]
        vsubss  xmm1, xmm0, dword ptr [rbx+20h]
        vmulss  xmm3, xmm1, dword ptr [rbx+2Ch]
        vmovss  xmm2, dword ptr [rdi+14h]
        vsubss  xmm0, xmm2, dword ptr [rbx+1Ch]
        vmulss  xmm1, xmm0, dword ptr [rbx+28h]
        vmovss  xmm2, dword ptr [rdi+1Ch]
        vsubss  xmm0, xmm2, dword ptr [rbx+24h]
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm1, xmm0, dword ptr [rbx+30h]
        vaddss  xmm6, xmm4, xmm1
        vcomiss xmm6, xmm7
        vmovss  [rsp+118h+var_D4], xmm6
        vcomiss xmm6, xmm5
      }
      v12 = s_numNodes;
      nodeIdx = nextIdx;
      if ( v13 >= s_numNodes )
      {
        __asm { vmovss  xmm6, [rsp+118h+var_D8] }
        goto LABEL_14;
      }
    }
    __asm { vxorps  xmm6, xmm6, xmm6 }
LABEL_14:
    __asm
    {
      vmovaps xmm15, [rsp+118h+var_C8]
      vmovaps xmm14, [rsp+118h+var_B8]
      vmovaps xmm13, [rsp+118h+var_A8]
      vmovaps xmm12, [rsp+118h+var_98]
      vmovaps xmm11, [rsp+118h+var_88]
      vmovaps xmm10, [rsp+118h+var_78]
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm7, [rsp+118h+var_48]
    }
    if ( _RBX )
    {
      flags = _RDI->flags;
      v41 = flags | 1;
      v42 = flags & 0xFFFE;
      if ( _RBX->nextIdx >= 0 )
        v41 = v42;
      _RDI->flags = v41;
      v43 = truncate_cast<short,int>(nodeIdx);
      _RDI->nodeIdx = v43;
      _RDX = v43;
      __asm { vmovss  dword ptr [rdi+4], xmm6 }
      v45 = s_nodes[_RDX].nextIdx;
      __asm { vmovss  xmm3, dword ptr [rdx+r12+14h] }
      if ( v45 >= 0 )
      {
        _RCX = 76i64 * v45;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r12+14h]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm3
        }
      }
      __asm { vmovss  dword ptr [rdi+8], xmm3 }
      v51 = s_nodes[_RDX].nextIdx;
      __asm { vmovss  xmm3, dword ptr [rdx+r12+18h] }
      if ( v51 >= 0 )
      {
        _RCX = 76i64 * v51;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r12+18h]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm3
        }
      }
      __asm { vmovss  dword ptr [rdi+10h], xmm3 }
    }
    __asm { vmovaps xmm6, [rsp+118h+var_38] }
  }
}

/*
==============
G_VehiclePath_AdvanceAnimPathPosReverse
==============
*/
void G_VehiclePath_AdvanceAnimPathPosReverse(VehiclePathPos *vpp)
{
  unsigned int v6; 
  int v7; 
  int nodeIdx; 
  __int64 v13; 
  __int16 prevIdx; 
  __int16 v30; 
  __int16 nextIdx; 
  __int16 v38; 
  __int64 v46; 
  __int64 v47; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _RSI = vpp;
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1988, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v6 = s_numNodes;
  v7 = 0;
  nodeIdx = _RSI->nodeIdx;
  __asm { vmovss  xmm6, dword ptr [rsi+4] }
  if ( s_numNodes <= 0 )
    goto LABEL_35;
  _R15 = s_nodes;
  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_68], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovaps [rsp+0A8h+var_58], xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  while ( 1 )
  {
    ++v7;
    if ( nodeIdx >= v6 )
    {
      LODWORD(v47) = v6;
      LODWORD(v46) = nodeIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2006, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    v13 = nodeIdx;
    _RBX = &s_nodes[v13];
    if ( s_nodes[v13].nextIdx >= 0 )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+40h]
        vucomiss xmm5, xmm7
      }
      if ( s_nodes[v13].nextIdx )
        break;
    }
    prevIdx = s_nodes[v13].prevIdx;
    if ( prevIdx < 0 )
    {
LABEL_14:
      __asm { vmovaps xmm6, xmm7 }
      goto LABEL_15;
    }
    __asm { vmovaps xmm6, xmm9 }
LABEL_21:
    nodeIdx = prevIdx;
    v6 = s_numNodes;
    if ( v7 >= s_numNodes )
      goto LABEL_15;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vsubss  xmm1, xmm0, dword ptr [rbx+20h]
    vmulss  xmm3, xmm1, dword ptr [rbx+2Ch]
    vmovss  xmm2, dword ptr [rsi+14h]
    vsubss  xmm0, xmm2, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    vmovss  xmm2, dword ptr [rsi+1Ch]
    vsubss  xmm0, xmm2, dword ptr [rbx+24h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+30h]
    vaddss  xmm8, xmm4, xmm1
    vcomiss xmm8, xmm5
  }
  if ( s_nodes[v13].nextIdx )
  {
    __asm { vmovaps xmm6, xmm9 }
    goto LABEL_15;
  }
  __asm { vcomiss xmm8, xmm7 }
  if ( !s_nodes[v13].nextIdx )
  {
    prevIdx = _RBX->prevIdx;
    if ( prevIdx < 0 )
      goto LABEL_14;
    goto LABEL_21;
  }
  __asm { vucomiss xmm5, xmm7 }
  if ( !s_nodes[v13].nextIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2057, ASSERT_TYPE_SANITY, "( cnode->length != 0.0f )", (const char *)&queryFormat, "cnode->length != 0.0f") )
    __debugbreak();
  __asm { vdivss  xmm6, xmm8, dword ptr [r14+r15+40h] }
LABEL_15:
  __asm
  {
    vmovaps xmm9, [rsp+0A8h+var_68]
    vmovaps xmm8, [rsp+0A8h+var_58]
  }
  if ( _RBX )
  {
    if ( s_nodes[v13].prevIdx >= 0 )
      goto LABEL_28;
    __asm { vucomiss xmm6, xmm7 }
    if ( s_nodes[v13].prevIdx )
LABEL_28:
      _RSI->flags &= ~1u;
    else
      _RSI->flags |= 1u;
    v30 = truncate_cast<short,int>(nodeIdx);
    _RSI->nodeIdx = v30;
    _RDX = v30;
    __asm { vmovss  dword ptr [rsi+4], xmm6 }
    nextIdx = s_nodes[_RDX].nextIdx;
    __asm { vmovss  xmm3, dword ptr [rdx+r15+14h] }
    if ( nextIdx >= 0 )
    {
      _RCX = 76i64 * nextIdx;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+r15+14h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
      }
    }
    __asm { vmovss  dword ptr [rsi+8], xmm3 }
    v38 = s_nodes[_RDX].nextIdx;
    __asm { vmovss  xmm3, dword ptr [rdx+r15+18h] }
    if ( v38 >= 0 )
    {
      _RCX = 76i64 * v38;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+r15+18h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
      }
    }
    __asm { vmovss  dword ptr [rsi+10h], xmm3 }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
LABEL_35:
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
G_VehiclePath_AdvancePathPosForward
==============
*/
void G_VehiclePath_AdvancePathPosForward(VehiclePathPos *vpp, const vec3_t *dir)
{
  unsigned int nodeIdx; 
  __int16 nextIdx; 
  const VehiclePathNode *v16; 
  __int16 flags; 
  __int16 v49; 
  __int16 v50; 
  __int16 v51; 
  __int64 v52; 
  __int16 v54; 
  __int16 v61; 
  __int64 v68; 
  __int64 v69; 
  SmoothedPathNodeInfo v70; 
  SmoothedPathNodeInfo params; 

  __asm { vmovaps [rsp+118h+var_48], xmm7 }
  _RSI = vpp;
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1680, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  nodeIdx = _RSI->nodeIdx;
  __asm { vmovss  xmm7, dword ptr [rsi+4] }
  if ( s_numNodes > 0 )
  {
    _R12 = s_nodes;
    __asm
    {
      vmovaps [rsp+118h+var_38], xmm6
      vmovaps [rsp+118h+var_58], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps [rsp+118h+var_68], xmm9
      vmovss  xmm9, cs:__real@bf800000
      vxorps  xmm6, xmm6, xmm6
    }
    if ( nodeIdx >= s_numNodes )
    {
      LODWORD(v68) = nodeIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1697, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v68, s_numNodes) )
        __debugbreak();
    }
    _RDI = &s_nodes[nodeIdx];
    nextIdx = _RDI->nextIdx;
    if ( nextIdx < 0 )
      goto LABEL_17;
    __asm { vucomiss xmm6, dword ptr [rdi+40h] }
    if ( nextIdx )
    {
      if ( nextIdx >= (unsigned int)s_numNodes )
      {
        LODWORD(v69) = s_numNodes;
        LODWORD(v68) = nextIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1708, ASSERT_TYPE_ASSERT, "(unsigned)( currentNode->nextIdx ) < (unsigned)( s_numNodes )", "currentNode->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v68, v69) )
          __debugbreak();
      }
      v16 = &s_nodes[_RDI->nextIdx];
      G_VehiclePath_GetSmoothedPathNodeInfo(_RSI, dir, &s_nodes[nodeIdx], &params);
      G_VehiclePath_GetSmoothedPathNodeInfo(_RSI, dir, v16, &v70);
      if ( v70.straightLine )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+14h]
          vsubss  xmm3, xmm0, dword ptr [rdi+1Ch]
          vmovss  xmm1, dword ptr [rsi+18h]
          vsubss  xmm2, xmm1, dword ptr [rdi+20h]
          vmovss  xmm0, dword ptr [rsi+1Ch]
          vsubss  xmm4, xmm0, dword ptr [rdi+24h]
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmovss  xmm1, dword ptr [rdi+40h]
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm4, xmm2, xmm2
          vcmpltss xmm0, xmm1, xmm4
          vblendvps xmm1, xmm8, xmm9, xmm0
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+118h+var_D0.perpToBisector+4]
          vmovss  xmm1, dword ptr [rsp+118h+var_D0.perpToBisector]
          vmulss  xmm2, xmm1, dword ptr [rsp+118h+var_D0.frontPlane]
          vmulss  xmm3, xmm0, dword ptr [rsp+118h+var_D0.frontPlane+4]
          vmovss  xmm0, dword ptr [rsp+118h+var_D0.perpToBisector+8]
          vmulss  xmm1, xmm0, dword ptr [rsp+118h+var_D0.frontPlane+8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm1, xmm4, xmm1
        }
      }
      __asm
      {
        vcomiss xmm1, xmm6
        vmovss  xmm4, [rsp+118h+params.distanceToBisector]
        vaddss  xmm3, xmm4, [rsp+118h+var_D0.distanceToBisector]
        vdivss  xmm0, xmm4, xmm3; val
        vmovaps xmm2, xmm8; max
        vmovaps xmm1, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
    }
    else
    {
LABEL_17:
      __asm { vmovaps xmm7, xmm6 }
    }
    __asm
    {
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm6, [rsp+118h+var_38]
    }
    if ( _RDI )
    {
      flags = _RSI->flags;
      v49 = flags | 1;
      v50 = flags & 0xFFFE;
      if ( _RDI->nextIdx >= 0 )
        v49 = v50;
      _RSI->flags = v49;
      v51 = truncate_cast<short,int>(nodeIdx);
      _RSI->nodeIdx = v51;
      __asm { vmovss  dword ptr [rsi+4], xmm7 }
      v52 = v51;
      _RAX = v51;
      v54 = s_nodes[_RAX].nextIdx;
      __asm { vmovss  xmm3, dword ptr [rax+r12+14h] }
      if ( v54 >= 0 )
      {
        _RCX = 76i64 * v54;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r12+14h]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, xmm3
        }
      }
      _RAX = 76 * v52;
      __asm { vmovss  dword ptr [rsi+8], xmm3 }
      v61 = s_nodes[v52].nextIdx;
      __asm { vmovss  xmm3, dword ptr [rax+r12+18h] }
      if ( v61 >= 0 )
      {
        _RCX = 76i64 * v61;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r12+18h]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, xmm3
        }
      }
      __asm { vmovss  dword ptr [rsi+10h], xmm3 }
    }
  }
  __asm { vmovaps xmm7, [rsp+118h+var_48] }
}

/*
==============
G_VehiclePath_AdvancePathPosReverse
==============
*/
void G_VehiclePath_AdvancePathPosReverse(VehiclePathPos *vpp, const vec3_t *dir)
{
  unsigned int v13; 
  int v14; 
  int nodeIdx; 
  __int16 nextIdx; 
  char v28; 
  __int16 prevIdx; 
  __int16 v65; 
  __int16 v67; 
  __int16 v73; 
  __int64 v81; 
  __int64 v82; 

  _R14 = vpp;
  __asm { vmovaps [rsp+108h+var_68], xmm9 }
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1765, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v13 = s_numNodes;
  v14 = 0;
  nodeIdx = _R14->nodeIdx;
  __asm { vmovss  xmm9, dword ptr [r14+4] }
  if ( s_numNodes <= 0 )
    goto LABEL_41;
  _R12 = s_nodes;
  __asm
  {
    vmovaps [rsp+108h+var_58], xmm8
    vmovaps [rsp+108h+var_38], xmm6
    vmovaps [rsp+108h+var_48], xmm7
    vmovaps [rsp+108h+var_78], xmm10
    vmovaps [rsp+108h+var_88], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps [rsp+108h+var_B8], xmm14
    vmovaps [rsp+108h+var_C8], xmm15
    vxorps  xmm8, xmm8, xmm8
  }
  while ( 1 )
  {
    ++v14;
    if ( nodeIdx >= v13 )
    {
      LODWORD(v82) = v13;
      LODWORD(v81) = nodeIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1782, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v81, v82) )
        __debugbreak();
    }
    _RSI = nodeIdx;
    nextIdx = s_nodes[_RSI].nextIdx;
    _RDI = &s_nodes[_RSI];
    if ( nextIdx >= 0 )
    {
      __asm { vucomiss xmm8, dword ptr [rdi+40h] }
      if ( nextIdx )
        break;
    }
    prevIdx = s_nodes[_RSI].prevIdx;
    if ( prevIdx < 0 )
      goto LABEL_18;
    __asm { vmovss  xmm9, cs:__real@3f800000 }
LABEL_28:
    nodeIdx = prevIdx;
    v13 = s_numNodes;
    if ( v14 >= s_numNodes )
      goto LABEL_19;
  }
  if ( nextIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v82) = s_numNodes;
    LODWORD(v81) = nextIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1802, ASSERT_TYPE_ASSERT, "(unsigned)( currentNode->nextIdx ) < (unsigned)( s_numNodes )", "currentNode->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v81, v82) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, dword ptr [r14+18h]
    vmovss  xmm11, dword ptr [r14+14h]
    vmovss  xmm13, dword ptr [r14+1Ch]
    vmovss  xmm15, dword ptr [rdi+20h]
    vmovss  xmm14, dword ptr [rdi+1Ch]
    vmovss  xmm5, dword ptr [rdi+24h]
    vsubss  xmm0, xmm12, dword ptr [rcx+rax+4]
    vmulss  xmm3, xmm0, dword ptr [r15+4]
    vsubss  xmm1, xmm11, dword ptr [rcx+rax]
    vmulss  xmm2, xmm1, dword ptr [r15]
    vsubss  xmm0, xmm13, dword ptr [rcx+rax+8]
    vmulss  xmm1, xmm0, dword ptr [r15+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm10, xmm4, xmm1
    vucomiss xmm10, xmm8
    vsubss  xmm0, xmm15, xmm12
    vmulss  xmm3, xmm0, dword ptr [r15+4]
    vsubss  xmm1, xmm14, xmm11
    vmulss  xmm2, xmm1, dword ptr [r15]
    vsubss  xmm0, xmm5, xmm13
    vmulss  xmm1, xmm0, dword ptr [r15+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
  }
  if ( v28 )
  {
    __asm { vucomiss xmm2, xmm8 }
    if ( v28 )
    {
LABEL_18:
      __asm { vmovaps xmm9, xmm8 }
      goto LABEL_19;
    }
  }
  __asm { vcomiss xmm10, xmm8 }
  if ( !is_mul_ok(0x4Cui64, _RDI->nextIdx) )
  {
    __asm { vcomiss xmm2, xmm8 }
    if ( !(((unsigned __int128)(76 * (__int128)_RDI->nextIdx) >> 64 != 0) | v28) )
      goto LABEL_18;
LABEL_24:
    prevIdx = _RDI->prevIdx;
    if ( prevIdx < 0 )
      goto LABEL_18;
    goto LABEL_28;
  }
  __asm { vcomiss xmm2, xmm8 }
  if ( !is_mul_ok(0x4Cui64, _RDI->nextIdx) )
    goto LABEL_24;
  __asm
  {
    vucomiss xmm8, dword ptr [rsi+r12+40h]
    vsubss  xmm0, xmm12, xmm15
    vmulss  xmm3, xmm0, dword ptr [rsi+r12+2Ch]
    vsubss  xmm1, xmm11, xmm14
    vmulss  xmm2, xmm1, dword ptr [rsi+r12+28h]
    vsubss  xmm0, xmm13, xmm5
    vmulss  xmm1, xmm0, dword ptr [rsi+r12+30h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
  }
  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1849, ASSERT_TYPE_SANITY, "( currentNode->length != 0.0f )", (const char *)&queryFormat, "currentNode->length != 0.0f") )
    __debugbreak();
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rsi+r12+40h]; val
    vmovss  xmm2, cs:__real@3f800000; max
    vmovaps xmm1, xmm8; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm9, xmm0 }
LABEL_19:
  __asm
  {
    vmovaps xmm15, [rsp+108h+var_C8]
    vmovaps xmm14, [rsp+108h+var_B8]
    vmovaps xmm13, [rsp+108h+var_A8]
    vmovaps xmm12, [rsp+108h+var_98]
    vmovaps xmm11, [rsp+108h+var_88]
    vmovaps xmm10, [rsp+108h+var_78]
    vmovaps xmm7, [rsp+108h+var_48]
    vmovaps xmm6, [rsp+108h+var_38]
  }
  if ( _RDI )
  {
    if ( s_nodes[_RSI].prevIdx >= 0 )
      goto LABEL_34;
    __asm { vucomiss xmm9, xmm8 }
    if ( s_nodes[_RSI].prevIdx )
LABEL_34:
      _R14->flags &= ~1u;
    else
      _R14->flags |= 1u;
    v65 = truncate_cast<short,int>(nodeIdx);
    _R14->nodeIdx = v65;
    _RDX = v65;
    __asm { vmovss  dword ptr [r14+4], xmm9 }
    v67 = s_nodes[_RDX].nextIdx;
    __asm { vmovss  xmm3, dword ptr [rdx+r12+14h] }
    if ( v67 >= 0 )
    {
      _RCX = 76i64 * v67;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+r12+14h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm9
        vaddss  xmm3, xmm2, xmm3
      }
    }
    __asm { vmovss  dword ptr [r14+8], xmm3 }
    v73 = s_nodes[_RDX].nextIdx;
    __asm { vmovss  xmm3, dword ptr [rdx+r12+18h] }
    if ( v73 >= 0 )
    {
      _RCX = 76i64 * v73;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+r12+18h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm9
        vaddss  xmm3, xmm2, xmm3
      }
    }
    __asm { vmovss  dword ptr [r14+10h], xmm3 }
  }
  __asm { vmovaps xmm8, [rsp+108h+var_58] }
LABEL_41:
  __asm { vmovaps xmm9, [rsp+108h+var_68] }
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
  __int64 v12; 

  _RBX = vpp;
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1185, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  if ( nodeIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v12) = nodeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1186, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIdx ) < (unsigned)( s_numNodes )", "nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v12, s_numNodes) )
      __debugbreak();
  }
  v4 = nodeIdx;
  if ( (s_nodes[v4].flags & 4) != 0 )
    return 0;
  _RBX->nodeIdx = nodeIdx;
  _RBX->flags = 0;
  _RBX->frac = 0.0;
  _RBX->speed = s_nodes[v4].speed;
  _RBX->speedOverride = -1.0;
  _RBX->lookAhead = s_nodes[v4].lookAhead;
  _RBX->origin.v[0] = s_nodes[v4].origin.v[0];
  _RBX->origin.v[1] = s_nodes[v4].origin.v[1];
  _RBX->origin.v[2] = s_nodes[v4].origin.v[2];
  _RBX->angles.v[0] = s_nodes[v4].angles.v[0];
  _RBX->angles.v[1] = s_nodes[v4].angles.v[1];
  _RBX->angles.v[2] = s_nodes[v4].angles.v[2];
  _RBX->lookPos.v[0] = s_nodes[v4].origin.v[0];
  _RBX->lookPos.v[1] = s_nodes[v4].origin.v[1];
  _RBX->lookPos.v[2] = s_nodes[v4].origin.v[2];
  result = 1;
  *(_QWORD *)&_RBX->switchNode[0].name = 0i64;
  *(_QWORD *)&_RBX->switchNode[0].script_linkname = 0i64;
  *(_DWORD *)&_RBX->switchNode[0].index = 0xFFFF;
  _RBX->switchNode[0].speed = -1.0;
  _RBX->switchNode[0].lookAhead = -1.0;
  *(_QWORD *)_RBX->switchNode[0].origin.v = 0i64;
  *(_QWORD *)&_RBX->switchNode[0].origin.z = 0i64;
  *(_QWORD *)&_RBX->switchNode[0].dir.y = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  dword ptr [rbx+78h], xmm0
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
    vmovss  dword ptr [rbx+7Ch], xmm1
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rbx+80h], xmm0
  }
  _RBX->switchNode[0].notifyIdx = -1;
  _RBX->switchNode[0].length = 0.0;
  *(_DWORD *)&_RBX->switchNode[0].nextIdx = -1;
  *(_QWORD *)&_RBX->switchNode[1].name = 0i64;
  *(_QWORD *)&_RBX->switchNode[1].script_linkname = 0i64;
  *(_DWORD *)&_RBX->switchNode[1].index = 0xFFFF;
  _RBX->switchNode[1].speed = -1.0;
  _RBX->switchNode[1].lookAhead = -1.0;
  *(_QWORD *)_RBX->switchNode[1].origin.v = 0i64;
  *(_QWORD *)&_RBX->switchNode[1].origin.z = 0i64;
  *(_QWORD *)&_RBX->switchNode[1].dir.y = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  dword ptr [rbx+0C4h], xmm0
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
    vmovss  dword ptr [rbx+0C8h], xmm1
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rbx+0CCh], xmm0
  }
  _RBX->switchNode[1].notifyIdx = -1;
  _RBX->switchNode[1].length = 0.0;
  *(_DWORD *)&_RBX->switchNode[1].nextIdx = -1;
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
  bool v14; 
  bool v16; 
  __int16 prevIdx; 
  bool v30; 
  bool v31; 

  _R14 = s_nodes;
  _RSI = nodeIdx;
  _RDI = outAngles;
  v14 = (s_nodes[_RSI].flags & 4) == 0;
  _RBX = &s_nodes[_RSI];
  if ( (s_nodes[_RSI].flags & 4) != 0 )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 602, ASSERT_TYPE_SANITY, "( !(node->flags & VN_FLAG_NOTIFY) )", (const char *)&queryFormat, "!(node->flags & VN_FLAG_NOTIFY)");
    v14 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+r14+34h]
    vmovss  xmm3, dword ptr cs:s_invalidAngles
    vucomiss xmm0, xmm3
  }
  if ( v14 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr cs:s_invalidAngles+4
      vucomiss xmm1, dword ptr [rsi+r14+38h]
    }
    if ( v14 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr cs:s_invalidAngles+8
        vucomiss xmm2, dword ptr [rsi+r14+3Ch]
      }
      if ( v14 )
      {
        prevIdx = s_nodes[_RSI].prevIdx;
        __asm
        {
          vmovaps [rsp+0D8h+var_28], xmm6
          vmovaps [rsp+0D8h+var_38], xmm7
          vmovaps [rsp+0D8h+var_48], xmm8
          vmovaps [rsp+0D8h+var_58], xmm9
          vmovaps [rsp+0D8h+var_78], xmm11
          vmovaps [rsp+0D8h+var_88], xmm12
          vmovaps [rsp+0D8h+var_98], xmm13
          vmovaps [rsp+0D8h+var_A8], xmm14
          vmovaps xmm14, xmm2
          vxorps  xmm11, xmm11, xmm11
          vxorps  xmm8, xmm8, xmm8
          vxorps  xmm9, xmm9, xmm9
          vmovaps xmm12, xmm3
          vmovaps xmm13, xmm1
        }
        if ( prevIdx >= 0 )
        {
          _RCX = &s_nodes[prevIdx];
          if ( s_numNodes > 0 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+34h]
              vaddss  xmm8, xmm8, dword ptr [rcx+40h]
              vucomiss xmm0, xmm3
              vmovss  xmm13, dword ptr [rcx+38h]
              vmovss  xmm14, dword ptr [rcx+3Ch]
              vmovaps xmm12, xmm0
            }
          }
        }
        __asm { vmovaps [rsp+0D8h+var_68], xmm10 }
        v30 = s_numNodes == 0;
        v31 = v30;
        if ( s_numNodes <= 0 )
        {
          __asm
          {
            vmovaps xmm0, xmm3
            vmovaps xmm4, xmm1
            vmovaps xmm10, xmm2
          }
        }
        else
        {
          __asm { vmovss  xmm0, dword ptr [rbx+34h] }
          v30 = 0;
          v31 = 0;
          __asm
          {
            vucomiss xmm0, xmm3
            vmovss  xmm4, dword ptr [rbx+38h]
            vmovss  xmm10, dword ptr [rbx+3Ch]
          }
        }
        __asm { vucomiss xmm12, xmm3 }
        if ( v30 )
        {
          __asm { vucomiss xmm13, xmm1 }
          if ( v30 )
          {
            __asm { vucomiss xmm14, xmm2 }
            if ( v30 )
            {
              __asm { vucomiss xmm0, xmm3 }
              if ( v30 )
              {
                __asm { vucomiss xmm4, xmm1 }
                if ( v30 )
                {
                  __asm { vucomiss xmm10, xmm2 }
                  if ( v30 )
                    goto LABEL_29;
                }
              }
            }
          }
          __asm { vucomiss xmm12, xmm3 }
          if ( v30 )
          {
            __asm { vucomiss xmm13, xmm1 }
            if ( v30 )
            {
              __asm { vucomiss xmm14, xmm2 }
              if ( v30 )
              {
                __asm
                {
                  vmovss  dword ptr [rdi], xmm0
                  vmovss  dword ptr [rdi+4], xmm4
                  vmovss  dword ptr [rdi+8], xmm10
                }
LABEL_23:
                __asm
                {
                  vmovaps xmm10, [rsp+0D8h+var_68]
                  vmovaps xmm12, [rsp+0D8h+var_88]
                  vmovaps xmm11, [rsp+0D8h+var_78]
                  vmovaps xmm13, [rsp+0D8h+var_98]
                  vmovaps xmm9, [rsp+0D8h+var_58]
                  vmovaps xmm8, [rsp+0D8h+var_48]
                  vmovaps xmm7, [rsp+0D8h+var_38]
                  vmovaps xmm6, [rsp+0D8h+var_28]
                  vmovaps xmm14, [rsp+0D8h+var_A8]
                }
                return;
              }
            }
          }
        }
        __asm { vucomiss xmm0, xmm3 }
        if ( v30 )
        {
          __asm { vucomiss xmm4, xmm1 }
          if ( v30 )
          {
            __asm { vucomiss xmm10, xmm2 }
            if ( v30 )
            {
              __asm
              {
                vmovss  dword ptr [rdi], xmm12
                vmovss  dword ptr [rdi+4], xmm13
                vmovss  dword ptr [rdi+8], xmm14
              }
              goto LABEL_23;
            }
          }
        }
        __asm
        {
          vaddss  xmm1, xmm9, xmm8
          vcomiss xmm1, xmm11
        }
        if ( !v31 )
        {
          __asm
          {
            vmovss  xmm7, cs:__real@3b360b61
            vmovss  xmm6, cs:__real@3f000000
            vmovss  xmm5, cs:__real@43b40000
            vsubss  xmm0, xmm0, xmm12
            vmulss  xmm3, xmm0, xmm7
            vdivss  xmm9, xmm8, xmm1
            vxorps  xmm0, xmm0, xmm0
            vaddss  xmm1, xmm3, xmm6
            vmovss  xmm1, xmm0, xmm1
            vxorps  xmm8, xmm8, xmm8
            vroundss xmm2, xmm8, xmm1, 1
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm0, xmm0, xmm5
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm2, xmm1, xmm12
            vmovss  dword ptr [rdi], xmm2
            vxorps  xmm1, xmm1, xmm1
            vsubss  xmm0, xmm4, xmm13
            vmulss  xmm4, xmm0, xmm7
            vaddss  xmm2, xmm4, xmm6
            vmovss  xmm0, xmm1, xmm2
            vroundss xmm3, xmm8, xmm0, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm5
            vmulss  xmm2, xmm0, xmm9
            vaddss  xmm3, xmm2, xmm13
            vmovss  dword ptr [rdi+4], xmm3
            vsubss  xmm0, xmm10, xmm14
            vmulss  xmm4, xmm0, xmm7
            vaddss  xmm2, xmm4, xmm6
            vxorps  xmm1, xmm1, xmm1
            vmovss  xmm0, xmm1, xmm2
            vroundss xmm3, xmm8, xmm0, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm5
            vmulss  xmm2, xmm0, xmm9
            vaddss  xmm3, xmm2, xmm14
            vmovss  dword ptr [rdi+8], xmm3
          }
          goto LABEL_23;
        }
LABEL_29:
        *(_QWORD *)_RDI->v = 0i64;
        __asm { vmovss  dword ptr [rdi+8], xmm11 }
        goto LABEL_23;
      }
    }
  }
  __asm { vmovss  dword ptr [rdi], xmm0 }
  _RDI->v[1] = s_nodes[_RSI].angles.v[1];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+r14+3Ch]
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
G_VehiclePath_CalcNodeLookAhead
==============
*/
float G_VehiclePath_CalcNodeLookAhead(int nodeIdx)
{
  _RBP = s_nodes;
  _RDI = nodeIdx;
  if ( (s_nodes[_RDI].flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 499, ASSERT_TYPE_SANITY, "( !(node->flags & VN_FLAG_NOTIFY) )", (const char *)&queryFormat, "!(node->flags & VN_FLAG_NOTIFY)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+rbp+18h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps xmm0, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
G_VehiclePath_CalcNodeSpeed
==============
*/
float G_VehiclePath_CalcNodeSpeed(int nodeIdx)
{
  _RBP = s_nodes;
  _RDI = nodeIdx;
  if ( (s_nodes[_RDI].flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 393, ASSERT_TYPE_SANITY, "( !(node->flags & VN_FLAG_NOTIFY) )", (const char *)&queryFormat, "!(node->flags & VN_FLAG_NOTIFY)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+rbp+14h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps xmm0, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
G_VehiclePath_ComputeLookAhead
==============
*/

void __fastcall G_VehiclePath_ComputeLookAhead(__int16 nodeIdx, const vec3_t *curPos, double lookAheadDist, vec3_t *outLookAhead)
{
  VehiclePathPos vpp; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
  }
  if ( nodeIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1393, ASSERT_TYPE_SANITY, "( nodeIdx != -1 )", (const char *)&queryFormat, "nodeIdx != -1") )
    __debugbreak();
  _R8 = s_nodes;
  _RDX = nodeIdx;
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  vpp.nodeIdx = nodeIdx;
  __asm { vmovss  [rsp+138h+vpp.lookAhead], xmm1 }
  if ( s_nodes[_RDX].nextIdx != -1 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rdx+r8+40h]
      vcomiss xmm5, xmm1
    }
  }
  __asm
  {
    vmovss  [rsp+138h+vpp.frac], xmm1
    vmovaps xmm2, xmm7; lookAheadOffset
  }
  G_VehiclePath_GetForwardLookAheadOrigin(&vpp, outLookAhead, *(float *)&_XMM2);
  __asm { vmovaps xmm7, [rsp+138h+var_28] }
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
  bool v5; 
  vec4_t *p_color; 
  __int128 v7; 
  vec4_t color; 

  __asm
  {
    vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
    vmovups xmm1, cs:__xmm@3f8000003f800000000000003f800000
  }
  v5 = !mainPath;
  p_color = (vec4_t *)&v7;
  __asm { vmovups [rsp+58h+var_38], xmm0 }
  if ( v5 )
    p_color = &color;
  __asm { vmovups xmmword ptr [rsp+58h+color], xmm1 }
  G_DebugLine(start, end, p_color, 1);
}

/*
==============
G_VehiclePath_DrawCurrentPath
==============
*/
void G_VehiclePath_DrawCurrentPath()
{
  const dvar_t *v1; 
  __int16 v2; 
  __int16 v3; 

  v1 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    v2 = s_numNodes;
    v3 = 0;
    if ( s_numNodes > 0 )
    {
      __asm
      {
        vmovaps [rsp+68h+var_28], xmm6
        vmovss  xmm6, cs:__real@40600000
      }
      do
      {
        if ( v3 < v2 - 1 )
          G_DebugLine(&s_nodes[v3].origin, &s_nodes[v3 + 1].origin, &colorYellow, 1);
        __asm { vmovaps xmm1, xmm6; radius }
        G_DebugSphere(&s_nodes[v3].origin, *(float *)&_XMM1, &colorCyan, 0, 0);
        Com_sprintf(tmp, 0x10ui64, "%d", (unsigned int)v3);
        __asm { vmovss  xmm2, cs:textScale; scale }
        CL_AddDebugString(&s_nodes[v3].origin, &colorWhite, *(float *)&_XMM2, tmp, 1, 0);
        v2 = s_numNodes;
        ++v3;
      }
      while ( v3 < s_numNodes );
      __asm { vmovaps xmm6, [rsp+68h+var_28] }
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
  const dvar_t *v2; 
  const dvar_t *v3; 
  __int64 v4; 
  int v5; 
  __int16 *p_flags; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  signed __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v20; 
  VehiclePathNode *i; 
  const char *v22; 
  const dvar_t *v23; 
  const char *v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  __int16 v29; 
  VehiclePathPos vpp; 

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
        __asm { vmovaps [rsp+7D88h+var_38], xmm6 }
        p_flags = &s_nodes[0].flags;
        __asm { vmovss  xmm6, cs:__real@3f800000 }
        v8 = 0i64;
        do
        {
          if ( (*(_BYTE *)p_flags & 1) != 0 )
          {
            v9 = SL_ConvertToString((scr_string_t)*(_DWORD *)(p_flags - 9));
            if ( v8 <= 0 )
            {
LABEL_30:
              __asm { vmovaps xmm2, xmm6; scale }
              CL_AddDebugString((const vec3_t *)(p_flags + 5), &colorRed, *(float *)&_XMM2, v9, 1, 1);
              *((_QWORD *)&vpp.nodeIdx + v8++) = v9;
            }
            else
            {
LABEL_13:
              v10 = (const char *)*((_QWORD *)&vpp.nodeIdx + v4);
              v11 = 0x7FFFFFFFi64;
              if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                __debugbreak();
              v12 = v9 - v10;
              do
              {
                v13 = (unsigned __int8)v10[v12];
                v14 = v11;
                v15 = *(unsigned __int8 *)v10++;
                --v11;
                if ( !v14 )
                  break;
                if ( v13 != v15 )
                {
                  v16 = v13 + 32;
                  if ( (unsigned int)(v13 - 65) > 0x19 )
                    v16 = v13;
                  v13 = v16;
                  v17 = v15 + 32;
                  if ( (unsigned int)(v15 - 65) > 0x19 )
                    v17 = v15;
                  if ( v13 != v17 )
                  {
                    if ( ++v4 < v8 )
                      goto LABEL_13;
                    goto LABEL_30;
                  }
                }
              }
              while ( v13 );
            }
            v4 = 0i64;
          }
          ++v5;
          p_flags += 38;
        }
        while ( v5 < s_numNodes );
        __asm { vmovaps xmm6, [rsp+7D88h+var_38] }
      }
      v20 = 0;
      if ( s_numNodes > 0 )
      {
        for ( i = s_nodes; ; ++i )
        {
          if ( (i->flags & 4) == 0 )
          {
            v22 = SL_ConvertToString(i->name);
            v23 = DVARSTR_g_vehicleDrawPath;
            v24 = v22;
            if ( !DVARSTR_g_vehicleDrawPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_vehicleDrawPath") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v23);
            v25 = v23->current.integer64 - (_QWORD)v24;
            do
            {
              v26 = (unsigned __int8)v24[v25];
              v27 = *(unsigned __int8 *)v24 - v26;
              if ( v27 )
                break;
              ++v24;
            }
            while ( v26 );
            if ( !v27 )
              break;
          }
          if ( ++v20 >= s_numNodes )
            return;
        }
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_QWORD *)&vpp.switchNode[0].name = 0i64;
        *(_QWORD *)&vpp.switchNode[0].script_linkname = 0i64;
        __asm { vmovdqu xmmword ptr [rsp+7D88h+vpp.switchNode.name+4Ch], xmm0 }
        v29 = truncate_cast<short,int>(v20);
        if ( G_VehiclePath_AttachPathPos(&vpp, v29) )
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
  __int64 v12; 
  int v20; 
  __int16 v23; 
  const VehiclePathPos *v24; 
  int v26; 
  int v27; 
  int v28; 
  __int16 v29; 
  __int64 v31; 
  __int16 nodeIdx; 
  bool v39; 
  __int64 v48; 
  bool v52; 
  __int16 v53; 
  VehiclePathNode *v54; 
  char v55; 
  __int64 v93; 
  const vec4_t *v110; 
  __int16 notifyIdx; 
  __int16 nextIdx; 
  __int64 entIndex; 
  __int64 entIndexa; 
  __int64 v118; 
  const VehiclePathPos *color; 
  Bounds color_8; 
  __int128 v121; 
  __int128 v122; 
  vec4_t v123; 
  VehiclePathPos prevVpp; 
  VehiclePathPos vppa; 
  void *retaddr; 

  _R11 = &retaddr;
  v12 = *(_QWORD *)&vpp->switchNode[1].length;
  _RDX = &prevVpp;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+80h]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rcx+60h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovups ymm0, ymmword ptr [rcx]
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  v20 = 0;
  __asm
  {
    vmovss  xmm15, cs:__real@3a83126f
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovups ymmword ptr [rdx+80h], ymm1
    vmovups ymm1, ymmword ptr [rcx+0A0h]
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  v23 = -1;
  __asm { vmovaps xmmword ptr [r11-58h], xmm8 }
  v24 = vpp;
  __asm
  {
    vmovups ymmword ptr [rdx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rcx+0C0h]
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  v26 = 0;
  __asm { vmovaps xmmword ptr [r11-78h], xmm10 }
  v27 = 0;
  __asm { vmovups xmmword ptr [rdx+0C0h], xmm1 }
  *(_QWORD *)&prevVpp.switchNode[1].length = v12;
  v28 = 0;
  v29 = -1;
  *(_DWORD *)&prevVpp.switchNode[1].notifyIdx = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  _RDX = &vppa;
  v31 = *(_QWORD *)&vpp->switchNode[1].length;
  __asm
  {
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rcx+60h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups ymmword ptr [rdx+80h], ymm0
    vmovups ymm0, ymmword ptr [rcx+0A0h]
    vmovups ymmword ptr [rdx+0A0h], ymm0
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovups xmmword ptr [rdx+0C0h], xmm1
  }
  *(_QWORD *)&vppa.switchNode[1].length = v31;
  LODWORD(v31) = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  __asm
  {
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
  }
  *(_DWORD *)&vppa.switchNode[1].notifyIdx = v31;
  color = vpp;
  s_newDebugLine = 1;
  __asm { vmovaps xmmword ptr [r11-0B8h], xmm14 }
  while ( ++v27 <= 50000 )
  {
    nodeIdx = v24->nodeIdx;
    _RCX = &vppa;
    v39 = prevVpp.nodeIdx == v24->nodeIdx;
    _RDX = &prevVpp;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rdx+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rdx+40h], ymm0
      vmovups ymm0, ymmword ptr [rcx+60h]
      vmovups ymmword ptr [rdx+60h], ymm0
      vmovups ymm0, ymmword ptr [rcx+80h]
      vmovups ymmword ptr [rdx+80h], ymm0
      vmovups ymm0, ymmword ptr [rcx+0A0h]
      vmovups ymmword ptr [rdx+0A0h], ymm0
      vmovups xmm0, xmmword ptr [rcx+0C0h]
    }
    if ( !v39 )
      v23 = nodeIdx;
    v48 = *(_QWORD *)&vppa.switchNode[1].length;
    v39 = level.frameDuration == 0;
    __asm { vmovups xmmword ptr [rdx+0C0h], xmm0 }
    *(_QWORD *)&prevVpp.switchNode[1].length = v48;
    *(_DWORD *)&prevVpp.switchNode[1].notifyIdx = *(_DWORD *)&vppa.switchNode[1].notifyIdx;
    if ( v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vmulss  xmm2, xmm0, xmm15; deltaTime
    }
    G_VehiclePath_UpdatePathPos(&vppa, VEH_PATH_FORWARD, *(float *)&_XMM2);
    v52 = 0;
    G_VehiclePath_BeginSwitchNode(&prevVpp);
    v53 = prevVpp.nodeIdx;
    if ( prevVpp.nodeIdx == vppa.nodeIdx )
    {
      if ( prevVpp.nodeIdx >= (unsigned int)s_numNodes )
      {
        LODWORD(v118) = s_numNodes;
        LODWORD(entIndex) = prevVpp.nodeIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2444, ASSERT_TYPE_ASSERT, "(unsigned)( prevVpp->nodeIdx ) < (unsigned)( s_numNodes )", "prevVpp->nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", entIndex, v118) )
          __debugbreak();
        v53 = prevVpp.nodeIdx;
      }
      v54 = &s_nodes[v53];
      if ( v54->notifyIdx >= 0 )
      {
        *(float *)&_XMM0 = G_VehiclePath_GetNotifyFraction(&s_nodes[v53]);
        __asm
        {
          vmovss  xmm1, [rbp+220h+prevVpp.frac]
          vcomiss xmm1, xmm0
        }
        if ( v55 )
        {
          __asm
          {
            vmovss  xmm1, [rbp+220h+vpp.frac]
            vcomiss xmm1, xmm0
          }
          if ( !v55 )
            G_VehiclePath_ProcessNotify(v54->notifyIdx, 2047, &vppa.origin, VEH_PATH_NOTIFY_DRAW);
        }
      }
      v20 = 0;
    }
    else
    {
      v52 = G_VehiclePath_ProcessNotify_Forward(&prevVpp, &vppa, VEH_PATH_NOTIFY_DRAW, prevVpp.nodeIdx, v23, 2047);
    }
    G_VehiclePath_EndSwitchNode(&prevVpp);
    if ( (vppa.flags & 1) != 0 )
      v26 = 1;
    if ( v28 > 0 && vppa.nodeIdx != v29 )
    {
      --v28;
      v29 = vppa.nodeIdx;
      if ( !v28 )
        v26 = 1;
    }
    if ( v52 && !v28 )
    {
      v28 = 2;
      v29 = vppa.nodeIdx;
    }
    __asm
    {
      vmovss  xmm9, dword ptr [rbp+220h+vpp.origin]
      vmovss  xmm12, dword ptr [rbp+220h+prevVpp.origin]
      vmovss  xmm10, dword ptr [rbp+220h+vpp.origin+4]
      vmovss  xmm13, dword ptr [rbp+220h+prevVpp.origin+4]
      vmovss  xmm11, dword ptr [rbp+220h+vpp.origin+8]
      vmovss  xmm14, dword ptr [rbp+220h+prevVpp.origin+8]
      vsubss  xmm6, xmm9, xmm12
      vmulss  xmm0, xmm6, xmm6
      vsubss  xmm5, xmm10, xmm13
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vsubss  xmm4, xmm11, xmm14
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm6, xmm6, xmm1
      vmulss  xmm7, xmm5, xmm1
      vmulss  xmm8, xmm4, xmm1
    }
    if ( s_newDebugLine )
    {
      __asm
      {
        vmovss  dword ptr cs:s_start, xmm12
        vmovss  dword ptr cs:s_start+4, xmm13
        vmovss  dword ptr cs:s_start+8, xmm14
        vmovss  dword ptr cs:s_end, xmm9
        vmovss  dword ptr cs:s_end+4, xmm10
        vmovss  dword ptr cs:s_end+8, xmm11
      }
      s_newDebugLine = 0;
LABEL_33:
      v24 = color;
      __asm
      {
        vmovss  dword ptr cs:s_dir+8, xmm8
        vmovss  dword ptr cs:s_dir+4, xmm7
        vmovss  dword ptr cs:s_dir, xmm6
      }
      if ( v26 )
        goto LABEL_36;
    }
    else
    {
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr cs:s_dir
        vmulss  xmm3, xmm7, dword ptr cs:s_dir+4
        vmulss  xmm1, xmm8, dword ptr cs:s_dir+8
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, cs:__real@3f7ff972
      }
      if ( v26 )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
          vmovups xmmword ptr [rsp+320h+color+8], xmm0
        }
        G_DebugLine(&s_start, &s_end, (const vec4_t *)&color_8, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+220h+prevVpp.origin]
          vmovss  xmm1, dword ptr [rbp+220h+prevVpp.origin+4]
          vmovss  dword ptr cs:s_start, xmm0
          vmovss  xmm0, dword ptr [rbp+220h+prevVpp.origin+8]
          vmovss  dword ptr cs:s_start+4, xmm1
          vmovss  xmm1, dword ptr [rbp+220h+vpp.origin]
          vmovss  dword ptr cs:s_start+8, xmm0
          vmovss  xmm0, dword ptr [rbp+220h+vpp.origin+4]
          vmovss  dword ptr cs:s_end, xmm1
          vmovss  xmm1, dword ptr [rbp+220h+vpp.origin+8]
          vmovss  dword ptr cs:s_end+4, xmm0
          vmovss  dword ptr cs:s_end+8, xmm1
        }
        goto LABEL_33;
      }
      v24 = color;
      __asm
      {
        vmovss  dword ptr cs:s_end, xmm9
        vmovss  dword ptr cs:s_end+4, xmm10
        vmovss  dword ptr cs:s_end+8, xmm11
      }
    }
  }
  Com_PrintWarning(16, "WARNING: Invalid vehicle path.  Possible infinite loop\n", "level.frameDuration", "%s\n\tAccessing frame duration before it's been set");
LABEL_36:
  __asm { vmovups xmm0, cs:__xmm@3f800000000000003f80000000000000 }
  v93 = v24->nodeIdx;
  _R15 = s_nodes;
  __asm
  {
    vmovups xmm1, cs:__xmm@3f8000003f8000000000000000000000
    vmovaps xmm15, [rsp+320h+var_C8+8]
    vmovaps xmm14, [rsp+320h+var_B8+8]
    vmovaps xmm13, [rsp+320h+var_A8+8]
    vmovaps xmm12, [rsp+320h+var_98+8]
    vmovaps xmm11, [rsp+320h+var_88+8]
    vmovaps xmm10, [rsp+320h+var_78+8]
    vmovaps xmm9, [rsp+320h+var_68+8]
    vmovaps xmm8, [rsp+320h+var_58+8]
    vmovaps xmm7, [rsp+320h+var_48+8]
    vmovups xmmword ptr [rsp+320h+var_2B8+8], xmm0
    vmovups xmm0, cs:__xmm@3f8000003f8000003f80000000000000
  }
  _RBX = &s_nodes[v93];
  __asm
  {
    vmovups [rsp+320h+var_2C8+8], xmm1
    vmovups xmmword ptr [rbp+220h+var_2A0], xmm0
  }
  if ( s_numNodes > 0 )
  {
    __asm { vmovss  xmm6, cs:__real@40800000 }
    do
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@40800000000000000000000000000000
        vmovss  xmm2, dword ptr [rbx+38h]; yaw
      }
      v110 = (const vec4_t *)&v121;
      ++v20;
      __asm { vmovss  dword ptr [rsp+320h+var_2C8], xmm6 }
      if ( _RBX == &s_nodes[(__int16)v93] )
        v110 = (const vec4_t *)&v122;
      __asm
      {
        vmovss  dword ptr [rsp+320h+var_2C8+4], xmm6
        vmovups xmmword ptr [rsp+320h+color+8], xmm0
      }
      G_DebugBox(&_RBX->origin, &color_8, *(float *)&_XMM2, v110, 1, 0);
      notifyIdx = _RBX->notifyIdx;
      if ( notifyIdx >= 0 )
      {
        if ( notifyIdx >= (unsigned int)s_numNodes )
        {
          LODWORD(v118) = s_numNodes;
          LODWORD(entIndexa) = notifyIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1132, ASSERT_TYPE_ASSERT, "(unsigned)( node->notifyIdx ) < (unsigned)( s_numNodes )", "node->notifyIdx doesn't index s_numNodes\n\t%i not in [0, %i)", entIndexa, v118) )
            __debugbreak();
        }
        _RDX = _RBX->notifyIdx;
        __asm { vmovss  xmm2, dword ptr [rdx+r15+38h]; yaw }
        G_DebugBox(&s_nodes[_RDX].origin, &color_8, *(float *)&_XMM2, &v123, 1, 0);
      }
      nextIdx = _RBX->nextIdx;
      if ( nextIdx < 0 )
        break;
      LOWORD(v93) = v24->nodeIdx;
      if ( nextIdx == v24->nodeIdx )
        break;
      _RBX = &s_nodes[nextIdx];
    }
    while ( v20 < s_numNodes );
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+320h+var_38+8] }
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
  __int16 nextIdx; 
  __int16 v13; 
  bool v15; 
  unsigned int v32; 
  __int64 v57; 
  __int64 v58; 

  _R9 = s_nodes;
  _RSI = outAngles;
  _RBP = vpp;
  _RDX = vpp->nodeIdx;
  nextIdx = s_nodes[_RDX].nextIdx;
  v13 = s_nodes[_RDX].flags & 2;
  if ( nextIdx >= 0 )
  {
    _RCX = nextIdx;
    if ( v13 || (s_nodes[_RCX].flags & 2) != 0 )
    {
      v15 = (s_nodes[_RCX].flags & 2) == 0;
      __asm
      {
        vmovaps [rsp+0E8h+var_28], xmm6
        vmovaps [rsp+0E8h+var_38], xmm7
        vmovaps [rsp+0E8h+var_48], xmm8
        vmovaps [rsp+0E8h+var_58], xmm9
        vmovaps [rsp+0E8h+var_68], xmm10
        vmovaps [rsp+0E8h+var_78], xmm11
      }
      if ( v15 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+r9+34h]
          vmovss  xmm1, dword ptr [rdx+r9+38h]
          vmovss  [rsp+0E8h+var_98], xmm0
          vmovss  xmm0, dword ptr [rdx+r9+3Ch]
          vmovss  [rsp+0E8h+var_94], xmm1
          vmovss  xmm1, dword ptr [rsi]
          vmovss  [rsp+0E8h+var_90], xmm0
          vmovss  xmm0, dword ptr [rsi+4]
          vmovss  [rsp+0E8h+var_A8], xmm1
          vmovss  xmm1, dword ptr [rsi+8]
          vmovss  [rsp+0E8h+var_A4], xmm0
          vmovss  [rsp+0E8h+var_A0], xmm1
        }
      }
      else
      {
        if ( v13 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdx+r9+34h]
            vmovss  xmm1, dword ptr [rdx+r9+38h]
            vmovss  [rsp+0E8h+var_98], xmm0
            vmovss  xmm0, dword ptr [rdx+r9+3Ch]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vmovss  xmm1, dword ptr [rsi+4]
            vmovss  [rsp+0E8h+var_98], xmm0
            vmovss  xmm0, dword ptr [rsi+8]
          }
        }
        __asm
        {
          vmovss  [rsp+0E8h+var_90], xmm0
          vmovss  xmm0, dword ptr [rcx+r9+34h]
          vmovss  [rsp+0E8h+var_A8], xmm0
          vmovss  xmm0, dword ptr [rcx+r9+3Ch]
          vmovss  [rsp+0E8h+var_94], xmm1
          vmovss  xmm1, dword ptr [rcx+r9+38h]
          vmovss  [rsp+0E8h+var_A0], xmm0
          vmovss  [rsp+0E8h+var_A4], xmm1
        }
      }
      __asm
      {
        vmovss  xmm9, cs:__real@3b360b61
        vmovss  xmm10, cs:__real@3f000000
        vmovss  xmm11, cs:__real@43b40000
      }
      v32 = 0;
      _RDI = 0i64;
      __asm { vxorps  xmm8, xmm8, xmm8 }
      do
      {
        __asm { vmovss  xmm7, dword ptr [rbp+4] }
        if ( v32 >= 3 )
        {
          LODWORD(v58) = 3;
          LODWORD(v57) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v57, v58) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, [rsp+rdi+0E8h+var_A8] }
        if ( v32 >= 3 )
        {
          LODWORD(v58) = 3;
          LODWORD(v57) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v57, v58) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm5, [rsp+rdi+0E8h+var_98]
          vsubss  xmm0, xmm6, xmm5
          vmulss  xmm4, xmm0, xmm9
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmulss  xmm2, xmm0, xmm7
          vaddss  xmm6, xmm2, xmm5
        }
        if ( v32 >= 3 )
        {
          LODWORD(v58) = 3;
          LODWORD(v57) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v57, v58) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi+rsi], xmm6 }
        if ( v32 >= 3 )
        {
          LODWORD(v58) = 3;
          LODWORD(v57) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v57, v58) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm4, xmm9, dword ptr [rdi+rsi]
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm6, xmm1, xmm11
        }
        if ( v32 >= 3 )
        {
          LODWORD(v58) = 3;
          LODWORD(v57) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v57, v58) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi+rsi], xmm6 }
        _RDI += 4i64;
        ++v32;
      }
      while ( (int)v32 < 3 );
      __asm
      {
        vmovaps xmm11, [rsp+0E8h+var_78]
        vmovaps xmm10, [rsp+0E8h+var_68]
        vmovaps xmm9, [rsp+0E8h+var_58]
        vmovaps xmm8, [rsp+0E8h+var_48]
        vmovaps xmm7, [rsp+0E8h+var_38]
        vmovaps xmm6, [rsp+0E8h+var_28]
      }
    }
  }
  else if ( v13 )
  {
    _RSI->v[0] = s_nodes[_RDX].angles.v[0];
    _RSI->v[1] = s_nodes[_RDX].angles.v[1];
    _RSI->v[2] = s_nodes[_RDX].angles.v[2];
  }
}

/*
==============
G_VehiclePath_GetForwardLookAheadOrigin
==============
*/

void __fastcall G_VehiclePath_GetForwardLookAheadOrigin(const VehiclePathPos *vpp, vec3_t *outLookXYZ, double lookAheadOffset)
{
  __int64 nodeIdx; 
  int v15; 
  __int16 nextIdx; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outLookXYZ;
  _RBX = vpp;
  __asm { vmovaps xmm6, xmm2 }
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1353, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  nodeIdx = _RBX->nodeIdx;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm2, dword ptr [rbx+10h]
    vxorps  xmm5, xmm5, xmm5
  }
  _RCX = &s_nodes[nodeIdx];
  __asm { vcomiss xmm1, xmm5 }
  if ( __CFADD__(s_nodes, 76 * nodeIdx) )
    __asm { vmovss  xmm1, dword ptr [rbx+8] }
  __asm { vmovss  xmm0, dword ptr [rcx+40h] }
  v15 = 0;
  __asm
  {
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm2, xmm1
    vaddss  xmm2, xmm1, xmm6
    vaddss  xmm4, xmm3, xmm2
  }
  if ( s_numNodes > 0 )
  {
    do
    {
      nextIdx = _RCX->nextIdx;
      ++v15;
      if ( nextIdx < 0 )
        break;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+40h]
        vcomiss xmm0, xmm5
      }
      if ( !nextIdx )
        break;
      __asm
      {
        vcomiss xmm4, xmm0
        vsubss  xmm4, xmm4, xmm0
      }
      _RCX = &s_nodes[nextIdx];
    }
    while ( v15 < s_numNodes );
  }
  __asm
  {
    vmulss  xmm0, xmm4, dword ptr [rcx+28h]
    vaddss  xmm1, xmm0, dword ptr [rcx+1Ch]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm4, dword ptr [rcx+2Ch]
    vaddss  xmm1, xmm0, dword ptr [rcx+20h]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm4, dword ptr [rcx+30h]
    vaddss  xmm1, xmm0, dword ptr [rcx+24h]
    vmovss  dword ptr [rdi+8], xmm1
  }
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
  char v4; 
  __int64 v25; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = node;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2232, ASSERT_TYPE_SANITY, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( _RBX->notifyIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v25) = _RBX->notifyIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2235, ASSERT_TYPE_ASSERT, "(unsigned)( node->notifyIdx ) < (unsigned)( s_numNodes )", "node->notifyIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v25, s_numNodes) )
      __debugbreak();
  }
  _RCX = 76i64 * _RBX->notifyIdx;
  _RAX = &s_nodes[0].origin;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx+40h]
    vmovss  xmm0, dword ptr [rcx+rax+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+20h]
    vmulss  xmm3, xmm1, dword ptr [rbx+2Ch]
    vmovss  xmm2, dword ptr [rcx+rax]
    vsubss  xmm0, xmm2, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    vmovss  xmm2, dword ptr [rcx+rax+8]
    vsubss  xmm0, xmm2, dword ptr [rbx+24h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, dword ptr [rbx+30h]
    vaddss  xmm7, xmm4, xmm1
  }
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2246, ASSERT_TYPE_SANITY, "( node->length != 0.0f )", (const char *)&queryFormat, "node->length != 0.0f") )
    __debugbreak();
  __asm
  {
    vdivss  xmm0, xmm7, dword ptr [rbx+40h]; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
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

void __fastcall G_VehiclePath_GetReverseLookAheadOrigin(const VehiclePathPos *vpp, vec3_t *outLookXYZ, double lookAheadOffset)
{
  __int64 nodeIdx; 
  unsigned int v16; 
  bool v21; 
  char v22; 
  __int16 prevIdx; 
  char v24; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outLookXYZ;
  _RBX = vpp;
  __asm { vmovaps xmm6, xmm2 }
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1450, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  nodeIdx = _RBX->nodeIdx;
  _R10 = s_nodes;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm2, dword ptr [rbx+10h]
    vxorps  xmm5, xmm5, xmm5
  }
  _RCX = &s_nodes[nodeIdx];
  __asm { vcomiss xmm1, xmm5 }
  if ( __CFADD__(s_nodes, 76 * nodeIdx) )
    __asm { vmovss  xmm1, dword ptr [rbx+8] }
  __asm { vmovss  xmm0, dword ptr [rcx+40h] }
  v16 = 0;
  __asm
  {
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm2, xmm1
    vaddss  xmm2, xmm1, xmm6
    vsubss  xmm4, xmm3, xmm2
  }
  v21 = 0;
  if ( s_numNodes > 0 )
  {
    do
    {
      v22 = v21 | (v16++ == -1);
      __asm { vcomiss xmm4, xmm5 }
      if ( !v22 )
        break;
      prevIdx = _RCX->prevIdx;
      if ( prevIdx < 0 )
        break;
      _R8 = prevIdx;
      __asm { vucomiss xmm5, dword ptr [r8+r10+40h] }
      if ( v24 )
        break;
      _RCX = &s_nodes[_R8];
      __asm { vaddss  xmm4, xmm4, dword ptr [rcx+40h] }
      v21 = v16 < s_numNodes;
    }
    while ( (int)v16 < s_numNodes );
  }
  __asm
  {
    vmulss  xmm0, xmm4, dword ptr [rcx+28h]
    vaddss  xmm1, xmm0, dword ptr [rcx+1Ch]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm4, dword ptr [rcx+2Ch]
    vaddss  xmm1, xmm0, dword ptr [rcx+20h]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm4, dword ptr [rcx+30h]
    vaddss  xmm1, xmm0, dword ptr [rcx+24h]
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
G_VehiclePath_GetSmoothedPathNodeInfo
==============
*/
void G_VehiclePath_GetSmoothedPathNodeInfo(const VehiclePathPos *vpp, const vec3_t *dir, const VehiclePathNode *cnode, SmoothedPathNodeInfo *params)
{
  __int16 prevIdx; 
  __int16 nextIdx; 
  const dvar_t *v114; 
  vec3_t v0; 
  vec4_t cross; 
  vec4_t color; 
  vec4_t v149; 
  char v150; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  _RDI = params;
  _RBX = cnode;
  _R15 = vpp;
  if ( *(_DWORD *)&cnode->nextIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1496, ASSERT_TYPE_SANITY, "( cnode->nextIdx != -1 || cnode->prevIdx != -1 )", (const char *)&queryFormat, "cnode->nextIdx != -1 || cnode->prevIdx != -1") )
    __debugbreak();
  prevIdx = _RBX->prevIdx;
  _RCX = NULL;
  if ( prevIdx == -1 )
    _RDX = NULL;
  else
    _RDX = &s_nodes[prevIdx];
  nextIdx = _RBX->nextIdx;
  if ( nextIdx != -1 )
    _RCX = &s_nodes[nextIdx];
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+1Ch]
    vmovss  xmm3, dword ptr [rbx+20h]
    vmovss  xmm4, dword ptr [rbx+24h]
  }
  if ( _RDX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+1Ch]
      vmovss  xmm1, dword ptr [rdx+20h]
      vsubss  xmm8, xmm0, xmm2
      vmovss  xmm0, dword ptr [rdx+24h]
      vsubss  xmm10, xmm0, xmm4
      vsubss  xmm9, xmm1, xmm3
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm8, xmm2, dword ptr [rcx+1Ch]
      vsubss  xmm9, xmm3, dword ptr [rcx+20h]
      vsubss  xmm10, xmm4, dword ptr [rcx+24h]
    }
  }
  if ( _RCX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+1Ch]
      vmovss  xmm1, dword ptr [rcx+20h]
      vsubss  xmm6, xmm0, xmm2
      vmovss  xmm0, dword ptr [rcx+24h]
      vsubss  xmm4, xmm0, xmm4
      vsubss  xmm7, xmm1, xmm3
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm6, xmm2, dword ptr [rdx+1Ch]
      vsubss  xmm7, xmm3, dword ptr [rdx+20h]
      vsubss  xmm4, xmm4, dword ptr [rdx+24h]
    }
  }
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm12, cs:__real@80000000
    vmulss  xmm0, xmm9, xmm9
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm5, xmm11, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm1, xmm11, xmm0
    vmulss  xmm3, xmm7, xmm1
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm4, xmm4, xmm1
    vmovss  dword ptr [rsp+130h+v0], xmm2
    vmulss  xmm0, xmm8, xmm5
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rdi+10h], xmm1
    vmulss  xmm2, xmm9, xmm5
    vaddss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rdi+14h], xmm0
    vmulss  xmm1, xmm10, xmm5
    vaddss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rdi+18h], xmm2
  }
  _RDI->straightLine = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  xmm5, dword ptr [rdi+18h]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rsp+130h+v0+4], xmm3
    vmovss  xmm3, dword ptr [rdi+14h]
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, cs:__real@3727c5ac
    vmovss  dword ptr [rsp+130h+v0+8], xmm4
    vmovss  xmm4, dword ptr [rdi+10h]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdi+10h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+14h]
    vmovss  dword ptr [rdi+14h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+18h]
    vmovss  dword ptr [rdi+18h], xmm0
  }
  Vec3Cross(&_RDI->normalizedBisector, &v0, (vec3_t *)&cross);
  Vec3Cross((const vec3_t *)&cross, &_RDI->normalizedBisector, &_RDI->frontPlane);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+14h]
    vsubss  xmm7, xmm0, dword ptr [rbx+1Ch]
    vmovss  xmm1, dword ptr [r15+18h]
    vsubss  xmm8, xmm1, dword ptr [rbx+20h]
    vmovss  xmm0, dword ptr [r15+1Ch]
    vsubss  xmm9, xmm0, dword ptr [rbx+24h]
    vmulss  xmm0, xmm7, dword ptr [rdi+10h]
    vmulss  xmm1, xmm8, dword ptr [rdi+14h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+18h]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm0, xmm4, dword ptr [rdi+10h]
    vmulss  xmm1, xmm4, dword ptr [rdi+14h]
    vsubss  xmm10, xmm0, xmm7
    vmulss  xmm0, xmm4, dword ptr [rdi+18h]
    vsubss  xmm5, xmm0, xmm9
    vsubss  xmm7, xmm1, xmm8
    vmulss  xmm0, xmm10, xmm10
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm2, xmm10
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rdi+8], xmm0
    vmulss  xmm1, xmm2, xmm7
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+0Ch], xmm3
  }
  v114 = DVARBOOL_vehicle_pathsmoothdebug;
  if ( !DVARBOOL_vehicle_pathsmoothdebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehicle_pathsmoothdebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v114);
  if ( v114->current.enabled )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovss  xmm6, cs:__real@43960000
      vmovups xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
      vmovups [rsp+130h+cross], xmm0
      vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
      vmovups xmmword ptr [rbp+57h+var_C0], xmm0
      vmulss  xmm0, xmm6, dword ptr [rdi+10h]
      vmovups xmmword ptr [rbp+57h+color], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm0, xmm6, dword ptr [rdi+14h]
      vmovss  dword ptr [rsp+130h+v0], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+20h]
      vmulss  xmm0, xmm6, dword ptr [rdi+18h]
      vmovss  dword ptr [rsp+130h+v0+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+24h]
      vmovss  dword ptr [rsp+130h+v0+8], xmm1
    }
    G_DebugLine(&_RBX->origin, &v0, &cross, 1);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm3, dword ptr [rdi]
      vaddss  xmm1, xmm0, dword ptr [r15+14h]
      vmulss  xmm2, xmm3, dword ptr [rdi+4]
      vaddss  xmm0, xmm2, dword ptr [r15+18h]
      vmovss  dword ptr [rsp+130h+v0], xmm1
      vmulss  xmm1, xmm3, dword ptr [rdi+8]
      vaddss  xmm2, xmm1, dword ptr [r15+1Ch]
      vmovss  dword ptr [rsp+130h+v0+8], xmm2
      vmovss  dword ptr [rsp+130h+v0+4], xmm0
    }
    G_DebugLine(&_R15->origin, &v0, &color, 1);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rdi+20h]
      vaddss  xmm2, xmm1, dword ptr [rbx+1Ch]
      vmulss  xmm1, xmm6, dword ptr [rdi+24h]
      vmovss  dword ptr [rsp+130h+v0], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+20h]
      vmulss  xmm1, xmm6, dword ptr [rdi+28h]
      vmovss  dword ptr [rsp+130h+v0+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+24h]
      vmovss  dword ptr [rsp+130h+v0+8], xmm2
    }
    G_DebugLine(&_RBX->origin, &v0, &v149, 1);
  }
  _R11 = &v150;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
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
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  dword ptr [rcx+78h], xmm0
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
    vmovss  dword ptr [rcx+7Ch], xmm1
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rcx+80h], xmm0
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  dword ptr [rcx+0C4h], xmm0
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
    vmovss  dword ptr [rcx+0C8h], xmm1
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rcx+0CCh], xmm0
  }
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
  int v4; 
  char *(*spawnVars)[2]; 
  const char *v7; 
  const char *v8; 
  scr_string_t String; 
  scr_string_t *name; 
  VehicleNodeField *v11; 
  unsigned int CanonicalString; 
  scrContext_t *v13; 
  unsigned int Field; 
  const char *NameForType; 
  const char *v16; 
  int v25; 
  VariableType type[8]; 
  int v29; 
  int v30; 
  int v31; 
  float value; 
  int v33; 
  int v34; 

  _R12 = node;
  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2664, ASSERT_TYPE_SANITY, "( level.spawnVar.spawnVarsValid )", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  v4 = 0;
  if ( level.spawnVar.numSpawnVars > 0 )
  {
    spawnVars = level.spawnVar.spawnVars;
    __asm
    {
      vmovaps [rsp+80h+var_20], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    while ( 1 )
    {
      v7 = (*spawnVars)[0];
      v8 = (*spawnVars)[1];
      String = SL_FindString((*spawnVars)[0]);
      name = vehicleNodeFields[0].name;
      v11 = vehicleNodeFields;
      if ( vehicleNodeFields[0].name )
      {
        while ( *name != String )
        {
          name = v11[1].name;
          ++v11;
          if ( !name )
            goto LABEL_9;
        }
        switch ( v11->type )
        {
          case F_INT:
            *(scr_string_t *)((char *)&_R12->name + v11->ofs) = atoi(v8);
            break;
          case F_SHORT:
            *(_WORD *)((char *)&_R12->name + v11->ofs) = atoi(v8);
            break;
          case F_BYTE:
            *((_BYTE *)&_R12->name + v11->ofs) = atoi(v8);
            break;
          case F_FLOAT:
            *(double *)&_XMM0 = atof(v8);
            _RAX = v11->ofs;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [r12+rax], xmm1
            }
            break;
          case F_STRING:
            Scr_SetString((scr_string_t *)((char *)&_R12->name + v11->ofs), (scr_string_t)0);
            *(scr_string_t *)((char *)&_R12->name + v11->ofs) = Scr_NewString(v8);
            break;
          case F_VECTOR:
            __asm
            {
              vmovss  [rbp+var_48], xmm6
              vmovss  [rbp+var_44], xmm6
              vmovss  [rbp+var_40], xmm6
            }
            j_sscanf(v8, "%f %f %f", &v29, &v30, &v31);
            _RAX = v11->ofs;
            __asm
            {
              vmovss  xmm0, [rbp+var_48]
              vmovss  dword ptr [r12+rax], xmm0
            }
            _RAX = v11->ofs;
            __asm
            {
              vmovss  xmm1, [rbp+var_44]
              vmovss  dword ptr [rax+r12+4], xmm1
            }
            _RAX = v11->ofs;
            __asm
            {
              vmovss  xmm0, [rbp+var_40]
              vmovss  dword ptr [rax+r12+8], xmm0
            }
            break;
          case F_ANGLES_YAW:
            __asm
            {
              vmovss  [rbp+var_48], xmm6
              vmovss  [rbp+var_44], xmm6
              vmovss  [rbp+var_40], xmm6
            }
            j_sscanf(v8, "%f %f %f", &v29, &v30, &v31);
            __asm { vmovss  xmm0, [rbp+var_44]; angle }
            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
            _RAX = v11->ofs;
            __asm { vmovss  dword ptr [r12+rax], xmm0 }
            break;
          default:
            goto LABEL_28;
        }
        goto LABEL_28;
      }
LABEL_9:
      CanonicalString = SL_GetCanonicalString(v7);
      v13 = ScriptContext_Server();
      Field = Scr_FindField(v13, CanonicalString, type);
      if ( Field )
      {
        switch ( type[0] )
        {
          case VAR_STRING:
            Scr_AddString(v13, v8);
            goto LABEL_27;
          case VAR_VECTOR:
            __asm
            {
              vmovss  [rbp+value], xmm6
              vmovss  [rbp+var_34], xmm6
              vmovss  [rbp+var_30], xmm6
            }
            j_sscanf(v8, "%f %f %f", &value, &v33, &v34);
            Scr_AddVector(v13, &value);
            goto LABEL_27;
          case VAR_FLOAT:
            *(double *)&_XMM0 = atof(v8);
            __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
            Scr_AddFloat(v13, *(float *)&_XMM1);
            goto LABEL_27;
          case VAR_INTEGER:
            v25 = atoi(v8);
            Scr_AddInt(v13, v25);
LABEL_27:
            Scr_SetDynamicEntityField(v13, LOCAL_CLIENT_0, _R12->index, ENTITY_CLASS_VEHICLENODE, Field);
            goto LABEL_28;
        }
        NameForType = Scr_GetNameForType(type[0]);
        v16 = j_va("G_VehiclePath_SetScriptVariable: unsupported type %s", NameForType);
        Scr_Error(COM_ERR_2948, v13, v16);
      }
LABEL_28:
      ++v4;
      ++spawnVars;
      if ( v4 >= level.spawnVar.numSpawnVars )
      {
        __asm { vmovaps xmm6, [rsp+80h+var_20] }
        return;
      }
    }
  }
}

/*
==============
G_VehiclePath_PathDebugLine
==============
*/
void G_VehiclePath_PathDebugLine(const vec3_t *start, const vec3_t *end, int forceDraw)
{
  vec4_t color; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = end;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm6, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm5, xmm0, dword ptr [rcx+8]
    vmovss  xmm9, dword ptr [rdx]
    vmovss  xmm10, dword ptr [rcx]
    vmulss  xmm2, xmm6, xmm6
    vsubss  xmm7, xmm9, xmm10
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm7, xmm7, xmm2
    vmulss  xmm6, xmm6, xmm2
    vmulss  xmm8, xmm5, xmm2
  }
  _RDI = start;
  if ( s_newDebugLine )
  {
    __asm
    {
      vmovss  dword ptr cs:s_start, xmm10
      vmovss  xmm0, dword ptr [rcx+4]
      vmovss  dword ptr cs:s_start+4, xmm0
      vmovss  xmm1, dword ptr [rcx+8]
      vmovss  dword ptr cs:s_start+8, xmm1
      vmovss  xmm0, dword ptr [rdx]
      vmovss  dword ptr cs:s_end, xmm0
      vmovss  xmm1, dword ptr [rdx+4]
      vmovss  dword ptr cs:s_end+4, xmm1
      vmovss  xmm0, dword ptr [rdx+8]
      vmovss  dword ptr cs:s_end+8, xmm0
    }
    s_newDebugLine = 0;
LABEL_6:
    __asm
    {
      vmovss  dword ptr cs:s_dir+8, xmm8
      vmovss  dword ptr cs:s_dir+4, xmm6
      vmovss  dword ptr cs:s_dir, xmm7
    }
    goto LABEL_7;
  }
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr cs:s_dir+4
    vmulss  xmm0, xmm7, dword ptr cs:s_dir
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr cs:s_dir+8
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3f7ff972
  }
  if ( forceDraw )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
      vmovups xmmword ptr [rsp+98h+color], xmm0
    }
    G_DebugLine(&s_start, &s_end, &color, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr cs:s_start, xmm0
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr cs:s_start+4, xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr cs:s_start+8, xmm0
      vmovss  xmm1, dword ptr [rbx]
      vmovss  dword ptr cs:s_end, xmm1
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  dword ptr cs:s_end+4, xmm0
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr cs:s_end+8, xmm1
    }
    goto LABEL_6;
  }
  __asm
  {
    vmovss  dword ptr cs:s_end, xmm9
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  dword ptr cs:s_end+4, xmm0
    vmovss  xmm1, dword ptr [rdx+8]
    vmovss  dword ptr cs:s_end+8, xmm1
  }
LABEL_7:
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
  bool v11; 
  char result; 
  VehiclePathNode *v13; 
  __int16 nextIdx; 
  __int16 notifyIdx; 
  char v16; 
  char v17; 
  __int64 v18; 

  _RBP = prevVpp;
  _RSI = nextVpp;
  if ( !prevVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2308, ASSERT_TYPE_SANITY, "( prevVpp )", (const char *)&queryFormat, "prevVpp") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2309, ASSERT_TYPE_SANITY, "( nextVpp )", (const char *)&queryFormat, "nextVpp") )
    __debugbreak();
  v11 = 0;
  if ( nodeIndex < 0 )
    return 0;
  if ( nodeIndex >= (unsigned int)s_numNodes )
  {
    LODWORD(v18) = nodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2321, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( s_numNodes )", "nodeIndex doesn't index s_numNodes\n\t%i not in [0, %i)", v18, s_numNodes) )
      __debugbreak();
  }
  v13 = &s_nodes[nodeIndex];
  if ( nodeIndex != _RSI->nodeIdx )
  {
    nextIdx = v13->nextIdx;
    if ( nextIdx != _RBP->nodeIdx )
      v11 = G_VehiclePath_ProcessNotify_Forward(_RBP, _RSI, notifyMode, nextIdx, waitNode, entIndex);
  }
  notifyIdx = v13->notifyIdx;
  if ( notifyIdx >= 0 )
  {
    if ( _RSI->nodeIdx == nodeIndex )
    {
      *(double *)&_XMM0 = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      __asm { vcomiss xmm0, dword ptr [rsi+4] }
      if ( v16 | v17 )
        goto LABEL_21;
    }
    else
    {
      if ( _RBP->nodeIdx != nodeIndex )
      {
LABEL_22:
        G_VehiclePath_ProcessNotify(notifyIdx, entIndex, &_RSI->origin, notifyMode);
        goto LABEL_23;
      }
      *(double *)&_XMM0 = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      __asm { vcomiss xmm0, dword ptr [rbp+4] }
      if ( !(v16 | v17) )
      {
LABEL_21:
        notifyIdx = v13->notifyIdx;
        goto LABEL_22;
      }
    }
  }
LABEL_23:
  if ( nodeIndex != _RBP->nodeIdx )
    G_VehiclePath_ProcessNotify(nodeIndex, entIndex, &_RSI->origin, notifyMode);
  result = v11;
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
  bool v11; 
  char result; 
  VehiclePathNode *v13; 
  __int16 prevIdx; 
  __int16 notifyIdx; 
  char v16; 
  char v17; 
  __int64 v18; 

  _RBP = prevVpp;
  _RBX = nextVpp;
  if ( !prevVpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2371, ASSERT_TYPE_SANITY, "( prevVpp )", (const char *)&queryFormat, "prevVpp") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2372, ASSERT_TYPE_SANITY, "( nextVpp )", (const char *)&queryFormat, "nextVpp") )
    __debugbreak();
  v11 = 0;
  if ( nodeIndex < 0 )
    return 0;
  if ( nodeIndex >= (unsigned int)s_numNodes )
  {
    LODWORD(v18) = nodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2384, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( s_numNodes )", "nodeIndex doesn't index s_numNodes\n\t%i not in [0, %i)", v18, s_numNodes) )
      __debugbreak();
  }
  v13 = &s_nodes[nodeIndex];
  prevIdx = v13->prevIdx;
  if ( prevIdx != _RBX->nodeIdx && prevIdx != _RBP->nodeIdx )
    v11 = G_VehiclePath_ProcessNotify_Reverse(_RBP, _RBX, notifyMode, prevIdx, waitNode, entIndex);
  notifyIdx = v13->notifyIdx;
  if ( notifyIdx >= 0 )
  {
    if ( _RBX->nodeIdx == nodeIndex )
    {
      *(double *)&_XMM0 = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      __asm { vcomiss xmm0, dword ptr [rbx+4] }
      if ( v16 | v17 )
        goto LABEL_23;
    }
    else
    {
      if ( _RBP->nodeIdx != nodeIndex )
      {
LABEL_22:
        G_VehiclePath_ProcessNotify(notifyIdx, entIndex, &_RBX->origin, notifyMode);
        goto LABEL_23;
      }
      *(double *)&_XMM0 = G_VehiclePath_GetNotifyFraction(&s_nodes[nodeIndex]);
      __asm { vcomiss xmm0, dword ptr [rbp+4] }
      if ( !(v16 | v17) )
        goto LABEL_23;
    }
    notifyIdx = v13->notifyIdx;
    goto LABEL_22;
  }
LABEL_23:
  G_VehiclePath_ProcessNotify(nodeIndex, entIndex, &_RBX->origin, notifyMode);
  result = v11;
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
  const VehiclePathNode *v12; 

  _RBP = vpp;
  Scr_SetString(&vpp->switchNode[0].name, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[0].target, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[0].script_linkname, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[0].script_noteworthy, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[1].name, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[1].target, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[1].script_linkname, (scr_string_t)0);
  Scr_SetString(&_RBP->switchNode[1].script_noteworthy, (scr_string_t)0);
  *(_DWORD *)&_RBP->switchNode[0].index = 0xFFFF;
  *(_QWORD *)&_RBP->switchNode[0].name = 0i64;
  *(_QWORD *)&_RBP->switchNode[0].script_linkname = 0i64;
  _RBP->switchNode[0].speed = -1.0;
  _RBP->switchNode[0].lookAhead = -1.0;
  *(_QWORD *)_RBP->switchNode[0].origin.v = 0i64;
  *(_QWORD *)&_RBP->switchNode[0].origin.z = 0i64;
  *(_QWORD *)&_RBP->switchNode[0].dir.y = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  dword ptr [rbp+78h], xmm0
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
    vmovss  dword ptr [rbp+7Ch], xmm1
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rbp+80h], xmm0
  }
  _RBP->switchNode[0].length = 0.0;
  *(_DWORD *)&_RBP->switchNode[0].nextIdx = -1;
  _RBP->switchNode[0].notifyIdx = -1;
  *(_QWORD *)&_RBP->switchNode[1].name = 0i64;
  *(_QWORD *)&_RBP->switchNode[1].script_linkname = 0i64;
  *(_DWORD *)&_RBP->switchNode[1].index = 0xFFFF;
  _RBP->switchNode[1].speed = -1.0;
  _RBP->switchNode[1].lookAhead = -1.0;
  *(_QWORD *)_RBP->switchNode[1].origin.v = 0i64;
  *(_QWORD *)&_RBP->switchNode[1].origin.z = 0i64;
  *(_QWORD *)&_RBP->switchNode[1].dir.y = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  dword ptr [rbp+0C4h], xmm0
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
    vmovss  dword ptr [rbp+0C8h], xmm1
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rbp+0CCh], xmm0
  }
  _RBP->switchNode[1].length = 0.0;
  *(_DWORD *)&_RBP->switchNode[1].nextIdx = -1;
  _RBP->switchNode[1].notifyIdx = -1;
  if ( srcNodeIdx >= 0 && dstNodeIdx >= 0 )
  {
    v12 = &s_nodes[srcNodeIdx];
    G_VehiclePath_CopyNode(v12, _RBP->switchNode);
    G_VehiclePath_CopyNode(v12, &_RBP->switchNode[1]);
    _RBP->switchNode[0].nextIdx = dstNodeIdx;
    _RCX = 76i64 * dstNodeIdx;
    _RAX = &s_nodes[0].origin;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rax]
      vsubss  xmm5, xmm0, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rbp+6Ch], xmm5
      vmovss  xmm0, dword ptr [rcx+rax+4]
      vsubss  xmm2, xmm0, dword ptr [rbx+20h]
      vmovss  dword ptr [rbp+70h], xmm2
      vmovss  xmm1, dword ptr [rcx+rax+8]
      vsubss  xmm3, xmm1, dword ptr [rbx+24h]
      vmovss  dword ptr [rbp+74h], xmm3
      vmulss  xmm1, xmm2, xmm2
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+6Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+70h]
      vmovss  dword ptr [rbp+70h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbp+74h]
      vmovss  dword ptr [rbp+74h], xmm0
      vmovss  dword ptr [rbp+84h], xmm4
    }
  }
}

/*
==============
G_VehiclePath_SetSpeedOverride
==============
*/

void __fastcall G_VehiclePath_SetSpeedOverride(VehiclePathPos *vpp, double newSpeedOverride)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = vpp;
  __asm { vmovaps xmm6, xmm1 }
  if ( vpp )
  {
    __asm
    {
      vmovss  dword ptr [rcx+0Ch], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 1241, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rbx+0Ch], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
}

/*
==============
G_VehiclePath_Setup
==============
*/

void __fastcall G_VehiclePath_Setup(double _XMM0_8)
{
  int v5; 
  __int16 *p_nextIdx; 
  int v7; 
  int v8; 
  __int64 v9; 
  VehiclePathNode *v10; 
  __int16 v11; 
  __int64 v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  __int16 *p_prevIdx; 
  __int16 v17; 
  __int16 v18; 
  int v19; 
  __int16 v24; 
  int v42; 
  char v56; 
  bool v57; 
  char *fmt; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 

  v5 = 0;
  if ( s_numNodes > 0 )
  {
    p_nextIdx = &s_nodes[0].nextIdx;
    do
    {
      v7 = *((_DWORD *)p_nextIdx - 16);
      if ( v7 )
      {
        v8 = 0;
        v9 = 0i64;
        if ( s_numNodes <= 0 )
        {
LABEL_8:
          v11 = -1;
        }
        else
        {
          v10 = s_nodes;
          while ( v10->name != v7 )
          {
            ++v8;
            ++v9;
            ++v10;
            if ( v9 >= s_numNodes )
              goto LABEL_8;
          }
          v11 = truncate_cast<short,int>(v8);
        }
        *p_nextIdx = v11;
        if ( v11 >= 0 )
        {
          if ( v11 >= (unsigned int)s_numNodes )
          {
            LODWORD(v81) = s_numNodes;
            LODWORD(v79) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 797, ASSERT_TYPE_ASSERT, "(unsigned)( node->nextIdx ) < (unsigned)( s_numNodes )", "node->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v79, v81) )
              __debugbreak();
          }
          v12 = *p_nextIdx;
          if ( (s_nodes[v12].flags & 4) != 0 )
            p_nextIdx[2] = v12;
        }
      }
      v13 = 0;
      if ( s_numNodes > 0 )
      {
        while ( v5 == v13 || *((_DWORD *)p_nextIdx - 17) != s_nodes[v13].target )
        {
          if ( ++v13 >= s_numNodes )
            goto LABEL_25;
        }
        if ( (unsigned int)(v13 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v13, "signed", v13) )
          __debugbreak();
        p_nextIdx[1] = v13;
      }
LABEL_25:
      if ( *p_nextIdx == v5 )
        *p_nextIdx = -1;
      if ( p_nextIdx[1] == v5 )
        p_nextIdx[1] = -1;
      ++v5;
      p_nextIdx += 38;
    }
    while ( v5 < s_numNodes );
  }
  v14 = s_numNodes;
  v15 = 0;
  if ( s_numNodes > 0 )
  {
    p_prevIdx = &s_nodes[0].prevIdx;
    do
    {
      if ( (*(_BYTE *)(p_prevIdx - 26) & 4) != 0 )
      {
        v17 = *p_prevIdx;
        if ( *p_prevIdx >= 0 )
        {
          if ( v17 >= v14 )
          {
            LODWORD(v81) = v14;
            LODWORD(v79) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 846, ASSERT_TYPE_ASSERT, "(unsigned)( node->prevIdx ) < (unsigned)( s_numNodes )", "node->prevIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v79, v81) )
              __debugbreak();
          }
          s_nodes[*p_prevIdx].nextIdx = *(p_prevIdx - 1);
        }
        v18 = *(p_prevIdx - 1);
        if ( v18 >= 0 )
        {
          if ( v18 >= (unsigned int)s_numNodes )
          {
            LODWORD(v81) = s_numNodes;
            LODWORD(v79) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 852, ASSERT_TYPE_ASSERT, "(unsigned)( node->nextIdx ) < (unsigned)( s_numNodes )", "node->nextIdx doesn't index s_numNodes\n\t%i not in [0, %i)", v79, v81) )
              __debugbreak();
          }
          s_nodes[*(p_prevIdx - 1)].prevIdx = *p_prevIdx;
        }
      }
      v14 = s_numNodes;
      ++v15;
      p_prevIdx += 38;
    }
    while ( v15 < s_numNodes );
  }
  v19 = 0;
  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovaps [rsp+0B8h+var_58], xmm8
  }
  if ( s_numNodes > 0 )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@80000000
      vmovss  xmm7, cs:__real@3f800000
    }
    _RBX = &s_nodes[0].dir.v[1];
    _RSI = &s_nodes[0].origin;
    do
    {
      if ( (*((_BYTE *)_RBX - 26) & 4) == 0 )
      {
        v24 = *((_WORD *)_RBX + 12);
        if ( v24 >= 0 )
        {
          _RCX = 76i64 * v24;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rsi]
            vsubss  xmm6, xmm0, dword ptr [rbx-10h]
            vmovss  dword ptr [rbx-4], xmm6
            vmovss  xmm0, dword ptr [rcx+rsi+4]
            vsubss  xmm5, xmm0, dword ptr [rbx-0Ch]
            vmovss  dword ptr [rbx], xmm5
            vmovss  xmm0, dword ptr [rcx+rsi+8]
            vsubss  xmm4, xmm0, dword ptr [rbx-8]
            vmulss  xmm0, xmm6, xmm6
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm8
            vblendvps xmm0, xmm3, xmm7, xmm0
            vdivss  xmm2, xmm7, xmm0
            vmulss  xmm0, xmm6, xmm2
            vmovss  dword ptr [rbx-4], xmm0
            vmulss  xmm0, xmm4, xmm2
            vmovss  dword ptr [rbx+4], xmm0
            vmulss  xmm1, xmm5, xmm2
            vmovss  dword ptr [rbx], xmm1
          }
          v57 = (*((_BYTE *)_RBX - 26) & 2) == 0;
          __asm { vmovss  dword ptr [rbx+14h], xmm3 }
          if ( v57 )
            vectoangles((const vec3_t *)(_RBX - 1), (vec3_t *)(_RBX + 2));
        }
      }
      ++v19;
      _RBX += 19;
    }
    while ( v19 < s_numNodes );
  }
  v42 = 0;
  if ( s_numNodes > 0 )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@3b360b61
      vmovss  xmm8, cs:__real@3f000000
      vmovaps [rsp+0B8h+var_68], xmm9
    }
    _RBX = &s_nodes[0].angles.v[2];
    __asm
    {
      vmovss  xmm9, cs:__real@43b40000
      vxorps  xmm6, xmm6, xmm6
    }
    while ( 1 )
    {
      if ( (*((_BYTE *)_RBX - 42) & 4) != 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:s_invalidAngles
          vucomiss xmm0, dword ptr [rbx-8]
        }
        if ( (*((_BYTE *)_RBX - 42) & 4) == 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:s_invalidAngles+4
            vucomiss xmm0, dword ptr [rbx-4]
          }
          if ( (*((_BYTE *)_RBX - 42) & 4) == 0 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr cs:s_invalidAngles+8
              vucomiss xmm0, dword ptr [rbx]
            }
            if ( (*((_BYTE *)_RBX - 42) & 4) == 0 )
            {
              *((_QWORD *)_RBX - 1) = 0i64;
              *_RBX = 0.0;
            }
          }
        }
      }
      else
      {
        *(float *)&_XMM0_8 = G_VehiclePath_CalcNodeSpeed(v42);
        __asm { vmovss  dword ptr [rbx-28h], xmm0 }
        *(float *)&_XMM0_8 = G_VehiclePath_CalcNodeLookAhead(v42);
        __asm
        {
          vcomiss xmm6, dword ptr [rbx-28h]
          vmovss  dword ptr [rbx-24h], xmm0
        }
        if ( !(v56 | v57) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-18h]
            vmovss  xmm3, dword ptr [rbx-20h]
            vmovss  xmm1, dword ptr [rbx-1Ch]
            vcvtss2sd xmm0, xmm0, xmm0
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+0B8h+var_90], xmm0
            vmovq   r9, xmm3
            vmovsd  [rsp+0B8h+fmt], xmm1
          }
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E39E60, 800i64, _R9, fmt, v80);
        }
        v56 = 0;
        v57 = (*((_BYTE *)_RBX - 42) & 2) == 0;
        if ( (*((_BYTE *)_RBX - 42) & 2) != 0 )
          G_VehiclePath_CalcNodeAngles(v42, (vec3_t *)(_RBX - 2));
        __asm
        {
          vmulss  xmm3, xmm7, dword ptr [rbx-8]
          vaddss  xmm1, xmm3, xmm8
          vxorps  xmm5, xmm5, xmm5
          vroundss xmm2, xmm5, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rbx-8], xmm1
          vmulss  xmm4, xmm7, dword ptr [rbx-4]
          vaddss  xmm2, xmm4, xmm8
          vroundss xmm3, xmm5, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm9
          vmovss  dword ptr [rbx-4], xmm0
          vmulss  xmm3, xmm7, dword ptr [rbx]
          vaddss  xmm1, xmm3, xmm8
          vroundss xmm2, xmm5, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rbx], xmm1
          vmovss  xmm2, dword ptr [rbx-28h]
          vcomiss xmm2, xmm6
        }
        if ( v56 | v57 )
          goto LABEL_66;
        __asm { vcomiss xmm6, dword ptr [rbx-24h] }
        if ( !v56 )
        {
LABEL_66:
          *((_WORD *)_RBX + 4) = -1;
LABEL_67:
          __asm { vcomiss xmm2, xmm6 }
          if ( v56 | v57 )
            *(_RBX - 10) = 1.0;
          __asm { vcomiss xmm6, dword ptr [rbx-24h] }
          if ( !v56 )
            *(_RBX - 9) = 1.0;
          goto LABEL_71;
        }
        v56 = 0;
        v57 = *((_WORD *)_RBX + 4) == 0;
        if ( *((__int16 *)_RBX + 4) < 0 )
          goto LABEL_67;
      }
LABEL_71:
      ++v42;
      _RBX += 19;
      if ( v42 >= s_numNodes )
      {
        __asm { vmovaps xmm9, [rsp+0B8h+var_68] }
        break;
      }
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm6, [rsp+0B8h+var_38]
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
  char v7; 
  __int64 v17; 
  __int64 v18; 

  v1 = s_numNodes;
  if ( s_numNodes >= 4000 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E3A500, 801i64);
    v1 = s_numNodes;
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_invalidAngles
    vmovss  xmm1, dword ptr cs:s_invalidAngles+4
  }
  s_numNodes = v1 + 1;
  _RBX = &s_nodes[v1];
  *(_QWORD *)&_RBX->name = 0i64;
  *(_QWORD *)&_RBX->script_linkname = 0i64;
  _RBX->flags = 0;
  _RBX->index = v1;
  _RBX->speed = -1.0;
  _RBX->lookAhead = -1.0;
  *(_QWORD *)_RBX->origin.v = 0i64;
  *(_QWORD *)&_RBX->origin.z = 0i64;
  *(_QWORD *)&_RBX->dir.y = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+34h], xmm0
    vmovss  xmm0, dword ptr cs:s_invalidAngles+8
    vmovss  dword ptr [rbx+3Ch], xmm0
    vmovss  dword ptr [rbx+38h], xmm1
  }
  _RBX->length = 0.0;
  _RBX->notifyIdx = -1;
  *(_DWORD *)&_RBX->nextIdx = -1;
  G_VehiclePath_ParseAllFields(_RBX);
  if ( (_RBX->flags & 1) != 0 )
    _RBX->flags = 1;
  if ( IsParentClassname(className, "info_vehicle_node_rotate") )
    _RBX->flags |= 2u;
  if ( IsParentClassname(className, "info_vehicle_node_notify") )
    _RBX->flags |= 4u;
  v7 = 0;
  if ( !_RBX->name )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+24h]
      vmovss  xmm3, dword ptr [rbx+1Ch]
      vmovss  xmm1, dword ptr [rbx+20h]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+38h+var_10], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+38h+var_18], xmm1
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E3A590, 802i64, _R9, v17, v18);
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+14h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !v7 )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@418ccccd
      vmovss  dword ptr [rbx+14h], xmm0
    }
  }
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm2, xmm0, cs:__real@3a83126f; deltaTime
  }
  G_VehiclePath_UpdatePathPos(vpp, pathDir, *(float *)&_XMM2);
}

/*
==============
G_VehiclePath_UpdatePathPos
==============
*/

void __fastcall G_VehiclePath_UpdatePathPos(VehiclePathPos *vpp, VehiclePathDir pathDir, double deltaTime)
{
  vec3_t *p_lookPos; 
  char v14; 
  char v15; 
  vec3_t vec; 

  __asm
  {
    vmovaps [rsp+98h+var_58], xmm10
    vmovaps xmm10, xmm2
  }
  _RBX = vpp;
  if ( (vpp->flags & 1) == 0 )
  {
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps [rsp+98h+var_48], xmm9
    }
    G_VehiclePath_BeginSwitchNode(vpp);
    p_lookPos = &_RBX->lookPos;
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm2, xmm2, xmm2; lookAheadOffset
    }
    if ( pathDir )
      G_VehiclePath_GetReverseLookAheadOrigin(_RBX, p_lookPos, *(double *)&_XMM2);
    else
      G_VehiclePath_GetForwardLookAheadOrigin(_RBX, p_lookPos, *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vsubss  xmm5, xmm0, dword ptr [rbx+14h]
      vmovss  xmm1, dword ptr [rbx+30h]
      vsubss  xmm6, xmm1, dword ptr [rbx+18h]
      vmovss  xmm0, dword ptr [rbx+34h]
      vsubss  xmm7, xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcomiss xmm4, xmm9
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rsp+98h+vec], xmm0
      vmulss  xmm0, xmm7, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+98h+vec+8], xmm0
      vmovss  dword ptr [rsp+98h+vec+4], xmm1
    }
    if ( v14 | v15 )
    {
      _RBX->flags |= 1u;
    }
    else
    {
      __asm { vmovaps [rsp+98h+var_38], xmm8 }
      vectoangles(&vec, &_RBX->angles);
      __asm
      {
        vmovss  xmm7, cs:__real@3b360b61
        vmulss  xmm3, xmm7, dword ptr [rbx+20h]
        vmovss  xmm6, cs:__real@3f000000
        vmovss  xmm5, cs:__real@43b40000
        vaddss  xmm1, xmm3, xmm6
        vxorps  xmm8, xmm8, xmm8
        vroundss xmm2, xmm8, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, xmm5
        vmovss  dword ptr [rbx+20h], xmm0
        vmulss  xmm4, xmm7, dword ptr [rbx+24h]
        vaddss  xmm2, xmm4, xmm6
        vroundss xmm3, xmm8, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rbx+24h], xmm1
        vmulss  xmm4, xmm7, dword ptr [rbx+28h]
        vaddss  xmm2, xmm4, xmm6
        vroundss xmm3, xmm8, xmm2, 1
        vmovaps xmm8, [rsp+98h+var_38]
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, xmm5
        vmovss  dword ptr [rbx+28h], xmm0
        vmovss  xmm2, dword ptr [rbx+0Ch]
        vcomiss xmm2, xmm9
      }
      if ( v14 )
        __asm { vmulss  xmm3, xmm10, dword ptr [rbx+8] }
      else
        __asm { vmulss  xmm3, xmm2, xmm10 }
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rsp+98h+vec]
        vaddss  xmm2, xmm1, dword ptr [rbx+14h]
        vmulss  xmm1, xmm3, dword ptr [rsp+98h+vec+4]
        vmovss  dword ptr [rbx+14h], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbx+18h]
        vmulss  xmm1, xmm3, dword ptr [rsp+98h+vec+8]
        vmovss  dword ptr [rbx+18h], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbx+1Ch]
        vmovss  dword ptr [rbx+1Ch], xmm2
      }
      if ( pathDir )
        G_VehiclePath_AdvancePathPosReverse(_RBX, &vec);
      else
        G_VehiclePath_AdvancePathPosForward(_RBX, &vec);
      G_VehiclePath_GetAngles(_RBX, &_RBX->angles);
    }
    G_VehiclePath_EndSwitchNode(_RBX);
    __asm
    {
      vmovaps xmm9, [rsp+98h+var_48]
      vmovaps xmm7, [rsp+98h+var_28]
      vmovaps xmm6, [rsp+98h+var_18]
    }
  }
  __asm { vmovaps xmm10, [rsp+98h+var_58] }
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
    __asm { vxorps  xmm2, xmm2, xmm2; lookAheadOffset }
    G_VehiclePath_GetForwardLookAheadOrigin(vpp, &vpp->lookPos, *(double *)&_XMM2);
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

void __fastcall G_VehiclePath_UpdatePathPosLookAhead(VehiclePathPos *vpp, double lookAheadOffset, VehiclePathDir pathDir)
{
  vec3_t *p_lookPos; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2212, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  G_VehiclePath_BeginSwitchNode(vpp);
  p_lookPos = &vpp->lookPos;
  __asm { vmovaps xmm2, xmm6; lookAheadOffset }
  if ( pathDir )
    G_VehiclePath_GetReverseLookAheadOrigin(vpp, p_lookPos, *(double *)&_XMM2);
  else
    G_VehiclePath_GetForwardLookAheadOrigin(vpp, p_lookPos, *(double *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  G_VehiclePath_EndSwitchNode(vpp);
}

/*
==============
G_VehiclePath_UpdatePathPosNotifies
==============
*/
__int64 G_VehiclePath_UpdatePathPosNotifies(const VehiclePathPos *prevVpp, const VehiclePathPos *nextVpp, int entIndex, __int16 waitNode, VehiclePathNotifyMode notifyMode, VehiclePathDir pathDir)
{
  unsigned __int8 v11; 
  __int16 nodeIdx; 
  VehiclePathNode *v13; 
  char v14; 
  __int64 entIndexa; 
  __int64 v17; 

  _RBX = prevVpp;
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
  v11 = 0;
  G_VehiclePath_BeginSwitchNode(_RBX);
  nodeIdx = _RBX->nodeIdx;
  if ( _RBX->nodeIdx != nextVpp->nodeIdx )
  {
    if ( pathDir )
    {
      if ( pathDir != VEH_PATH_REVERSE )
        goto LABEL_27;
      v14 = G_VehiclePath_ProcessNotify_Reverse(_RBX, nextVpp, notifyMode, nodeIdx, waitNode, entIndex);
    }
    else
    {
      v14 = G_VehiclePath_ProcessNotify_Forward(_RBX, nextVpp, notifyMode, nodeIdx, waitNode, entIndex);
    }
    v11 = v14;
    goto LABEL_27;
  }
  if ( nodeIdx >= (unsigned int)s_numNodes )
  {
    LODWORD(v17) = s_numNodes;
    LODWORD(entIndexa) = nodeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_path.cpp", 2444, ASSERT_TYPE_ASSERT, "(unsigned)( prevVpp->nodeIdx ) < (unsigned)( s_numNodes )", "prevVpp->nodeIdx doesn't index s_numNodes\n\t%i not in [0, %i)", entIndexa, v17) )
      __debugbreak();
  }
  v13 = &s_nodes[_RBX->nodeIdx];
  if ( pathDir == VEH_PATH_REVERSE && v13->prevIdx < 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+4]
    }
  }
  if ( v13->notifyIdx >= 0 )
  {
    *(double *)&_XMM0 = G_VehiclePath_GetNotifyFraction(v13);
    if ( pathDir )
    {
      if ( pathDir == VEH_PATH_REVERSE )
        __asm { vcomiss xmm0, dword ptr [rbx+4] }
    }
    else
    {
      __asm { vcomiss xmm0, dword ptr [rbx+4] }
    }
  }
LABEL_27:
  G_VehiclePath_EndSwitchNode(_RBX);
  return v11;
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

