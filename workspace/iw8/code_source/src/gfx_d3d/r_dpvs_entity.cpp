/*
==============
R_AddEntitySurfacesInFrustumCmd
==============
*/

void __fastcall R_AddEntitySurfacesInFrustumCmd(const void *const data)
{
  ?R_AddEntitySurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
R_AddEntitySurfacesInFrustumCmd
==============
*/
void R_AddEntitySurfacesInFrustumCmd(const void *const data)
{
  GfxWorld *world; 
  GfxSceneEntity *v14; 
  const DObjAnimMat *updated; 
  int v16; 
  __int64 v17; 
  int v18; 
  bool v19; 
  unsigned int v47; 
  int v48; 
  GfxSceneEntity *pLocalSceneEnt; 
  DObj *pObj[2]; 
  Bounds outBounds; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  pObj[1] = (DObj *)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps [rsp+128h+var_B8], xmm15
  }
  world = rgp.world;
  v14 = (GfxSceneEntity *)*((_QWORD *)data + 1);
  updated = R_UpdateSceneEntBounds(v14, &pLocalSceneEnt, (const DObj **)pObj, 1);
  if ( updated )
  {
    if ( !pLocalSceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 125, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
      __debugbreak();
    GfxSceneEntity_GetBounds(&pLocalSceneEnt->cull, &outBounds);
    v16 = *((_DWORD *)data + 6);
    v17 = *((_QWORD *)data + 2);
    v18 = 0;
    if ( v16 <= 0 )
    {
LABEL_11:
      v47 = *((_DWORD *)data + 8);
      if ( !v47 && (*(_DWORD *)(*((_QWORD *)data + 1) + 1388i64) & 0x40000) != 0 || R_Umbra_IsBoxVisible(&outBounds, v47, *((_DWORD *)data + 9), 0) )
      {
        v48 = *((_DWORD *)data + 7);
        if ( v48 < 0 || R_BoundsInCell((const mnode_t *)world->dpvsPlanes.nodes, v48, &outBounds) )
        {
          CG_CullIn(pLocalSceneEnt->info.pose);
          R_SkinSceneDObj(v14, pLocalSceneEnt, pObj[0], updated, GfxViewDomain_World);
          if ( ((*((_DWORD *)pLocalSceneEnt + 346) >> 10) & 0xFFF) == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 153, ASSERT_TYPE_ASSERT, "(localSceneEnt->entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "localSceneEnt->entnum != gfxCfg.entnumNone") )
            __debugbreak();
          *(_BYTE *)(((*((_DWORD *)pLocalSceneEnt + 346) >> 10) & 0xFFF) + *(_QWORD *)data) = 1;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v19 = __CFADD__(v17, 4i64) || v17 == -4;
      _RCX = v17 + 4;
      __asm
      {
        vmovss  xmm9, dword ptr [rsp+128h+outBounds.halfSize+8]
        vmovss  xmm10, dword ptr [rsp+128h+outBounds.halfSize+4]
        vmovss  xmm11, dword ptr [rsp+128h+outBounds.halfSize]
        vmovss  xmm12, dword ptr [rsp+128h+outBounds.midPoint+8]
        vmovss  xmm13, dword ptr [rsp+128h+outBounds.midPoint+4]
        vmovss  xmm14, dword ptr [rsp+128h+outBounds.midPoint]
        vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vxorps  xmm15, xmm15, xmm15
      }
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rcx+4]
          vandps  xmm7, xmm6, xmm8
          vmovss  xmm4, dword ptr [rcx]
          vandps  xmm5, xmm4, xmm8
          vmovss  xmm0, dword ptr [rcx-4]
          vandps  xmm1, xmm0, xmm8
          vmulss  xmm0, xmm14, xmm0
          vaddss  xmm2, xmm0, dword ptr [rcx+8]
          vmulss  xmm1, xmm11, xmm1
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm13, xmm4
          vaddss  xmm4, xmm3, xmm0
          vmulss  xmm1, xmm10, xmm5
          vaddss  xmm2, xmm4, xmm1
          vmulss  xmm0, xmm12, xmm6
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm9, xmm7
          vaddss  xmm4, xmm3, xmm1
          vcomiss xmm4, xmm15
        }
        if ( v19 )
          break;
        ++v18;
        _RCX += 16i64;
        v19 = v18 <= (unsigned int)v16;
        if ( v18 >= v16 )
          goto LABEL_11;
      }
    }
    CG_UsedDObjCalcPose(pLocalSceneEnt->info.pose);
LABEL_21:
    memset(&outBounds, 0, sizeof(outBounds));
    goto LABEL_22;
  }
  if ( pLocalSceneEnt )
    CG_UsedDObjCalcPose(pLocalSceneEnt->info.pose);
LABEL_22:
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, [rsp+128h+var_B8]
  }
}

/*
==============
R_BoundsInCell
==============
*/

int __fastcall R_BoundsInCell(const mnode_t *node, int findCellIndex, const Bounds *bounds)
{
  return R_BoundsInCell_r(node, findCellIndex, bounds);
}

/*
==============
R_BoundsInCell_r
==============
*/
__int64 R_BoundsInCell_r(const mnode_t *node, int findCellIndex, const Bounds *bounds)
{
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  int planeOrCellIndex; 
  int v18; 
  bool v23; 
  bool v24; 
  bool v25; 
  int v47; 
  __int64 rightChildOffset; 
  __int64 result; 
  __int64 v68; 
  __int64 v69; 
  Bounds boundsa; 

  _RDI = bounds;
  if ( rgp.world != &s_world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 16, ASSERT_TYPE_ASSERT, "(rgp.world == &s_world)", (const char *)&queryFormat, "rgp.world == &s_world") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovsd  xmm1, qword ptr [rdi+10h]
  }
  v14 = 0;
  __asm
  {
    vmovaps [rsp+0F8h+var_48], xmm6
    vmovaps [rsp+0F8h+var_58], xmm7
  }
  v15 = s_world.dpvsPlanes.cellCount + 1;
  __asm
  {
    vmovaps [rsp+0F8h+var_68], xmm8
    vmovaps [rsp+0F8h+var_78], xmm9
    vmovups xmmword ptr [rsp+0F8h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+0F8h+bounds.halfSize+4], xmm1
  }
  LOWORD(v16) = node->planeOrCellIndex;
  planeOrCellIndex = node->planeOrCellIndex;
  __asm { vmovaps [rsp+0F8h+var_88], xmm10 }
  v18 = planeOrCellIndex - (s_world.dpvsPlanes.cellCount + 1);
  __asm { vmovaps [rsp+0F8h+var_98], xmm11 }
  if ( v18 >= 0 )
  {
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm11, cs:__real@3a83126f
      vmovss  xmm8, cs:__real@3f000000
    }
    while ( 1 )
    {
      v23 = v18 < (unsigned int)s_world.dpvsPlanes.planeCount;
      v24 = v18 <= (unsigned int)s_world.dpvsPlanes.planeCount;
      if ( v18 >= (unsigned int)s_world.dpvsPlanes.planeCount )
      {
        LODWORD(v69) = s_world.dpvsPlanes.planeCount;
        LODWORD(v68) = v18;
        v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( planeIndex ) < (unsigned)( s_world.dpvsPlanes.planeCount )", "planeIndex doesn't index s_world.dpvsPlanes.planeCount\n\t%i not in [0, %i)", v68, v69);
        v23 = 0;
        v24 = !v25;
        if ( v25 )
          __debugbreak();
      }
      _RCX = 5i64 * v18;
      _RAX = s_world.dpvsPlanes.planes;
      __asm
      {
        vmovss  xmm3, dword ptr [rax+rcx*4]
        vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+bounds.midPoint]
        vmovss  xmm4, dword ptr [rax+rcx*4+4]
        vmulss  xmm0, xmm4, dword ptr [rsp+0F8h+bounds.midPoint+4]
        vmovss  xmm5, dword ptr [rax+rcx*4+8]
        vmovss  xmm6, dword ptr [rax+rcx*4+0Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rsp+0F8h+bounds.midPoint+8]
        vaddss  xmm2, xmm2, xmm1
        vandps  xmm3, xmm3, xmm10
        vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+bounds.halfSize]
        vsubss  xmm7, xmm2, xmm6
        vandps  xmm4, xmm4, xmm10
        vmulss  xmm0, xmm4, dword ptr [rsp+0F8h+bounds.halfSize+4]
        vaddss  xmm2, xmm1, xmm0
        vandps  xmm5, xmm5, xmm10
        vmulss  xmm0, xmm5, dword ptr [rsp+0F8h+bounds.halfSize+8]
        vaddss  xmm1, xmm2, xmm0
        vsubss  xmm3, xmm1, xmm11
        vcomiss xmm7, xmm3
      }
      if ( !v24 )
        break;
      __asm
      {
        vxorps  xmm0, xmm3, xmm9
        vcomiss xmm7, xmm0
      }
      if ( v23 )
      {
        v47 = 1;
        goto LABEL_13;
      }
      _RSI = s_world.dpvsPlanes.planes[v18].type;
      rightChildOffset = node->rightChildOffset;
      if ( (unsigned int)_RSI >= 3 )
      {
        if ( R_BoundsInCell_r(node + 1, findCellIndex, &boundsa) )
          goto LABEL_22;
      }
      else
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+rsi*4+0F8h+bounds.midPoint]
          vmovss  xmm0, dword ptr [rsp+rsi*4+0F8h+bounds.halfSize]
          vaddss  xmm4, xmm1, xmm0
          vcomiss xmm6, xmm4
          vsubss  xmm7, xmm1, xmm0
          vaddss  xmm0, xmm4, xmm6
          vmulss  xmm1, xmm0, xmm8
          vsubss  xmm2, xmm4, xmm6
          vmulss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rsp+rsi*4+0F8h+bounds.midPoint], xmm1
          vmovss  dword ptr [rsp+rsi*4+0F8h+bounds.halfSize], xmm0
        }
        if ( R_BoundsInCell_r(node + 1, findCellIndex, &boundsa) )
        {
LABEL_22:
          result = 1i64;
          goto LABEL_24;
        }
        __asm
        {
          vmovaps xmm3, xmm6; max
          vmovaps xmm2, xmm7; min
        }
        Bounds_SetMinMax(&boundsa, _RSI, *(float *)&_XMM2, *(float *)&_XMM3);
      }
LABEL_19:
      v16 = *(&node->planeOrCellIndex + rightChildOffset);
      node = (const mnode_t *)((char *)node + 2 * rightChildOffset);
      v18 = v16 - v15;
      if ( (int)(v16 - v15) < 0 )
        goto LABEL_20;
    }
    v47 = 0;
LABEL_13:
    rightChildOffset = v47 * ((unsigned int)node->rightChildOffset - 2) + 2i64;
    goto LABEL_19;
  }
LABEL_20:
  if ( (_WORD)v16 )
  {
    LOBYTE(v14) = (unsigned __int16)v16 - 1 == findCellIndex;
    result = v14;
  }
  else
  {
    result = 0i64;
  }
LABEL_24:
  __asm
  {
    vmovaps xmm11, [rsp+0F8h+var_98]
    vmovaps xmm10, [rsp+0F8h+var_88]
    vmovaps xmm9, [rsp+0F8h+var_78]
    vmovaps xmm8, [rsp+0F8h+var_68]
    vmovaps xmm7, [rsp+0F8h+var_58]
    vmovaps xmm6, [rsp+0F8h+var_48]
  }
  return result;
}

