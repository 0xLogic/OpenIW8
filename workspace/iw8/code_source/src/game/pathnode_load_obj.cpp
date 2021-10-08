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
  unsigned __int16 type; 
  int v8; 
  unsigned __int16 v31; 
  float c; 
  float s; 
  vec3_t pos; 
  vec3_t up; 
  vec3_t vector; 

  _RBX = outAttackPos;
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode_load_obj.cpp", 210, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (node->constant.spawnflags & 0x8000) == 0 )
    goto LABEL_12;
  type = node->constant.type;
  v8 = 1 << type;
  if ( ((1 << type) & 0x82641EFC) == 0 )
    goto LABEL_12;
  _RAX = type;
  _R14 = nodeAttackOffset;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [r14+rax*4]
    vucomiss xmm1, xmm0
  }
  if ( (v8 & 0x82641EFC) != 0 )
  {
    if ( (v8 & 0x62700000) != 0 )
    {
      pathnode_t::GetAngles((pathnode_t *)node, &vector);
      AngleVectors(&vector, NULL, NULL, &up);
      _RAX = node->constant.type;
      __asm
      {
        vmovss  xmm3, dword ptr [r14+rax*4]
        vmulss  xmm1, xmm3, dword ptr [rbp+up]
        vaddss  xmm2, xmm1, dword ptr [rbp+pos]
        vmulss  xmm1, xmm3, dword ptr [rbp+up+4]
        vmovss  dword ptr [rbx], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+pos+4]
        vmulss  xmm1, xmm3, dword ptr [rbp+up+8]
        vmovss  dword ptr [rbx+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+pos+8]
        vmovss  dword ptr [rbx+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm0, xmm1, dword ptr [rdi+2Ch]
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vmovss  xmm3, cs:__real@42300000
        vmulss  xmm1, xmm3, [rbp+c]
        vaddss  xmm2, xmm1, dword ptr [rbp+pos]
        vmulss  xmm1, xmm3, [rbp+s]
        vmovss  xmm0, dword ptr [rbp+pos+8]
        vmovss  dword ptr [rbx], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+pos+4]
        vmovss  dword ptr [rbx+4], xmm2
      }
      if ( usePlayerViewHeight )
      {
        __asm
        {
          vaddss  xmm2, xmm0, cs:__real@42700000
          vmovss  dword ptr [rbx+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm2, xmm0, cs:__real@42680000
          vmovss  dword ptr [rbx+8], xmm2
        }
      }
    }
  }
  else
  {
LABEL_12:
    v31 = node->constant.type;
    if ( v31 == 25 || v31 == 20 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+pos]
        vmovss  xmm1, dword ptr [rbp+pos+4]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rbp+pos+8]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+pos]
        vmovss  xmm1, dword ptr [rbp+pos+4]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rbp+pos+8]
        vmovss  dword ptr [rbx+4], xmm1
      }
      if ( usePlayerViewHeight )
      {
        __asm
        {
          vaddss  xmm1, xmm0, cs:__real@42700000
          vmovss  dword ptr [rbx+8], xmm1
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm1, xmm0, cs:__real@42680000
          vmovss  dword ptr [rbx+8], xmm1
        }
      }
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

