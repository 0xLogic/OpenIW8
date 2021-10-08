/*
==============
R_AddCellDynModelSurfacesInFrustumCmd
==============
*/

void __fastcall R_AddCellDynModelSurfacesInFrustumCmd(const void *const data)
{
  ?R_AddCellDynModelSurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
R_AddCellDynModelSurfacesInFrustumCmd
==============
*/
void R_AddCellDynModelSurfacesInFrustumCmd(const void *const data)
{
  __int64 localClientNum; 
  GfxWorld *world; 
  GfxWorldDpvsDynamic *p_dpvsDyn; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  const unsigned int *v8; 
  __int64 v9; 
  const DpvsPlane *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *dynEntVisData; 
  __int64 v13; 

  if ( r_drawDynEnts->current.enabled )
  {
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 68, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    localClientNum = frontEndDataOut->localClientNum;
    if ( (_DWORD)localClientNum != *((_DWORD *)data + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 70, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( dpvsCell->localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "dpvsCell->localClientNum", frontEndDataOut->localClientNum, *((_DWORD *)data + 4)) )
      __debugbreak();
    world = rgp.world;
    p_dpvsDyn = &rgp.world->dpvsDyn;
    if ( *((_DWORD *)data + 2) >= rgp.world->dpvsPlanes.cellCount )
    {
      LODWORD(v13) = rgp.world->dpvsPlanes.cellCount;
      LODWORD(dynEntVisData) = *((_DWORD *)data + 2);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( dpvsCell->cellIndex ) < (unsigned)( rgp.world->dpvsPlanes.cellCount )", "dpvsCell->cellIndex doesn't index rgp.world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", dynEntVisData, v13) )
        __debugbreak();
      world = rgp.world;
    }
    v5 = world->dpvsDyn.dynEntClientCount[0];
    v6 = p_dpvsDyn->dynEntClientWordCount[0];
    v7 = *((unsigned __int8 *)data + 12);
    v8 = &p_dpvsDyn->dynEntCellBits[0][*((_DWORD *)data + 2) * p_dpvsDyn->dynEntClientWordCount[0] + (unsigned __int64)((unsigned int)localClientNum * ((v5 + 31) >> 5))];
    v9 = *((unsigned __int16 *)data + 7);
    v10 = *(const DpvsPlane **)data;
    v11 = &p_dpvsDyn->dynEntVisData[0][v9][(unsigned int)localClientNum * v5];
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(dynEntVisData) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntVisData, v13) )
        __debugbreak();
    }
    R_CullDynModelInCell(v8, v6, g_dynEntPoseLists[localClientNum][0], v10, v7, v11);
  }
}

/*
==============
R_CullDynModelInCell
==============
*/
void R_CullDynModelInCell(const unsigned int *dynEntCellBits, unsigned int dynEntClientWordCount, DynEntityPose *dynModelList, const DpvsPlane *planes, int planeCount, unsigned __int8 *dynEntVisData)
{
  unsigned int v16; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  int v25; 
  bool v32; 
  unsigned int v61; 
  void *retaddr; 
  const unsigned int *v72; 
  unsigned int v73; 

  if ( dynEntClientWordCount )
  {
    _R11 = &retaddr;
    v73 = dynEntClientWordCount;
    v72 = dynEntCellBits;
    v16 = 0;
    _R14 = dynModelList;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps [rsp+118h+var_A8], xmm12
      vmovaps [rsp+118h+var_B8], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+118h+var_C8], xmm14
      vxorps  xmm14, xmm14, xmm14
    }
    v61 = 0;
    do
    {
      v20 = *dynEntCellBits;
      v21 = __lzcnt(*dynEntCellBits);
      if ( v21 < 0x20 )
      {
        v22 = 32 * v16;
        do
        {
          v23 = v22 + v21;
          if ( ((0x80000000 >> v21) & v20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 32, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
            __debugbreak();
          v20 &= ~(0x80000000 >> v21);
          if ( !dynEntVisData[v23] )
          {
            _RCX = 112i64 * (unsigned int)v23;
            v25 = 0;
            if ( planeCount <= 0 )
            {
LABEL_13:
              dynEntVisData[v23] = 1;
            }
            else
            {
              __asm
              {
                vmovss  xmm7, dword ptr [rcx+r14+30h]
                vmovss  xmm8, dword ptr [rcx+r14+24h]
                vmovss  xmm9, dword ptr [rcx+r14+28h]
                vmovss  xmm10, dword ptr [rcx+r14+34h]
                vmovss  xmm11, dword ptr [rcx+r14+2Ch]
                vmovss  xmm12, dword ptr [rcx+r14+38h]
              }
              v32 = __CFADD__(planes, 12i64) || &planes->coeffs.xyz + 1 == NULL;
              _RCX = &planes->coeffs.xyz + 1;
              while ( 1 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rcx-0Ch]
                  vmovss  xmm5, dword ptr [rcx-8]
                  vmovss  xmm6, dword ptr [rcx-4]
                  vandps  xmm0, xmm1, xmm13
                  vmulss  xmm2, xmm0, xmm7
                  vmulss  xmm0, xmm8, xmm1
                  vaddss  xmm1, xmm0, dword ptr [rcx]
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm2, xmm9, xmm5
                  vmulss  xmm1, xmm11, xmm6
                  vaddss  xmm4, xmm3, xmm2
                  vandps  xmm5, xmm5, xmm13
                  vmulss  xmm0, xmm5, xmm10
                  vaddss  xmm2, xmm4, xmm0
                  vandps  xmm6, xmm6, xmm13
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm6, xmm12
                  vaddss  xmm1, xmm3, xmm0
                  vcomiss xmm1, xmm14
                }
                if ( v32 )
                  break;
                ++v25;
                _RCX = (vec3_t *)((char *)_RCX + 16);
                v32 = v25 <= (unsigned int)planeCount;
                if ( v25 >= planeCount )
                  goto LABEL_13;
              }
            }
          }
          v21 = __lzcnt(v20);
        }
        while ( v21 < 0x20 );
        v16 = v61;
        dynEntCellBits = v72;
        dynEntClientWordCount = v73;
      }
      ++v16;
      ++dynEntCellBits;
      v61 = v16;
      v72 = dynEntCellBits;
    }
    while ( v16 < dynEntClientWordCount );
    __asm
    {
      vmovaps xmm14, [rsp+118h+var_C8]
      vmovaps xmm13, [rsp+118h+var_B8]
      vmovaps xmm12, [rsp+118h+var_A8]
      vmovaps xmm11, [rsp+118h+var_98]
      vmovaps xmm10, [rsp+118h+var_88]
      vmovaps xmm9, [rsp+118h+var_78]
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_58]
      vmovaps xmm6, [rsp+118h+var_48]
    }
  }
}

