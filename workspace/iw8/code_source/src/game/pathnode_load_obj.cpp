/*
==============
Path_NoPeekVisSizeTable
==============
*/

int __fastcall Path_NoPeekVisSizeTable()
{
  return ?Path_NoPeekVisSizeTable@@YAHXZ();
}

/*
==============
Path_NoPeekVisSizeStride
==============
*/

int __fastcall Path_NoPeekVisSizeStride()
{
  return ?Path_NoPeekVisSizeStride@@YAHXZ();
}

/*
==============
GetNodeAttackPoint
==============
*/

void __fastcall GetNodeAttackPoint(const pathnode_t *node, vec3_t *outAttackPos, bool usePlayerViewHeight)
{
  ?GetNodeAttackPoint@@YAXPEBUpathnode_t@@AEATvec3_t@@_N@Z(node, outAttackPos, usePlayerViewHeight);
}

/*
==============
Path_ExposureSizeSky
==============
*/

unsigned int __fastcall Path_ExposureSizeSky()
{
  return ?Path_ExposureSizeSky@@YAIXZ();
}

/*
==============
Path_IsParentAssignedToNegotiationNode
==============
*/

bool __fastcall Path_IsParentAssignedToNegotiationNode(const pathnode_t *node)
{
  return ?Path_IsParentAssignedToNegotiationNode@@YA_NPEBUpathnode_t@@@Z(node);
}

/*
==============
Path_ExposureSizeBuffer
==============
*/

unsigned int __fastcall Path_ExposureSizeBuffer()
{
  return ?Path_ExposureSizeBuffer@@YAIXZ();
}

/*
==============
Path_ExposureSizeNodes
==============
*/

unsigned int __fastcall Path_ExposureSizeNodes()
{
  return ?Path_ExposureSizeNodes@@YAIXZ();
}

/*
==============
Path_IsNegotiationLink
==============
*/

int __fastcall Path_IsNegotiationLink(const pathnode_t *pNodeFrom, const pathnode_t *pNodeTo)
{
  return ?Path_IsNegotiationLink@@YAHPEBUpathnode_t@@0@Z(pNodeFrom, pNodeTo);
}

/*
==============
GetNodeAttackPoint
==============
*/
void GetNodeAttackPoint(const pathnode_t *node, vec3_t *outAttackPos, bool usePlayerViewHeight)
{
  unsigned __int16 v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned __int16 type; 
  float v14; 
  float v15; 
  float v16; 
  float c; 
  float s; 
  vec3_t pos; 
  vec3_t up; 
  vec3_t vector; 

  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode_load_obj.cpp", 210, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x8000) != 0 && (v6 = node->constant.type, ((1 << v6) & 0x82641EFC) != 0) && (v7 = nodeAttackOffset[v6], v7 != 0.0) )
  {
    if ( ((1 << v6) & 0x62700000) != 0 )
    {
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      AngleVectors(&vector, NULL, NULL, &up);
      v8 = nodeAttackOffset[node->constant.type];
      v9 = v8 * up.v[1];
      outAttackPos->v[0] = (float)(v8 * up.v[0]) + pos.v[0];
      v10 = v8 * up.v[2];
      outAttackPos->v[1] = v9 + pos.v[1];
      outAttackPos->v[2] = v10 + pos.v[2];
    }
    else
    {
      FastSinCos((float)(v7 + node->constant.yaw_orient.fLocalAngle) * 0.017453292, &s, &c);
      v11 = 44.0 * s;
      v12 = pos.v[2];
      outAttackPos->v[0] = (float)(44.0 * c) + pos.v[0];
      outAttackPos->v[1] = v11 + pos.v[1];
      if ( usePlayerViewHeight )
        outAttackPos->v[2] = v12 + 60.0;
      else
        outAttackPos->v[2] = v12 + 58.0;
    }
  }
  else
  {
    type = node->constant.type;
    if ( type == 25 || type == 20 )
    {
      v16 = pos.v[1];
      outAttackPos->v[0] = pos.v[0];
      outAttackPos->v[2] = pos.v[2];
      outAttackPos->v[1] = v16;
    }
    else
    {
      v14 = pos.v[1];
      outAttackPos->v[0] = pos.v[0];
      v15 = pos.v[2];
      outAttackPos->v[1] = v14;
      if ( usePlayerViewHeight )
        outAttackPos->v[2] = v15 + 60.0;
      else
        outAttackPos->v[2] = v15 + 58.0;
    }
  }
}

/*
==============
Path_ExposureSizeBuffer
==============
*/
__int64 Path_ExposureSizeBuffer()
{
  return 33 * pathData.nodeCount + 2 * ((pathData.nodeCount + 7) >> 3);
}

/*
==============
Path_ExposureSizeNodes
==============
*/
__int64 Path_ExposureSizeNodes()
{
  return 33 * pathData.nodeCount;
}

/*
==============
Path_ExposureSizeSky
==============
*/
__int64 Path_ExposureSizeSky()
{
  return 2 * ((pathData.nodeCount + 7) >> 3);
}

/*
==============
Path_IsNegotiationLink
==============
*/
_BOOL8 Path_IsNegotiationLink(const pathnode_t *pNodeFrom, const pathnode_t *pNodeTo)
{
  return ((1 << LOBYTE(pNodeFrom->constant.type)) & 0x68010000) != 0 && ((1 << LOBYTE(pNodeTo->constant.type)) & 0x70020000) != 0 && pNodeFrom->constant.target == pNodeTo->constant.targetname;
}

/*
==============
Path_IsParentAssignedToNegotiationNode
==============
*/
bool Path_IsParentAssignedToNegotiationNode(const pathnode_t *node)
{
  if ( pathData.parentIndexResolved )
  {
    if ( node->constant.parent.index >= 0x800u )
      return 0;
  }
  else if ( !node->constant.parent.name )
  {
    return 0;
  }
  return ((1 << LOBYTE(node->constant.type)) & 0x78030000) != 0;
}

/*
==============
Path_NoPeekVisSizeStride
==============
*/
__int64 Path_NoPeekVisSizeStride()
{
  return (pathData.nodeCount >> 3) + 1;
}

/*
==============
Path_NoPeekVisSizeTable
==============
*/
__int64 Path_NoPeekVisSizeTable()
{
  return 2 * pathData.nodeCount;
}

