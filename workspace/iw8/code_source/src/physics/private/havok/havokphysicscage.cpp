/*
==============
HavokPhysicsCage_ResetAll
==============
*/

void HavokPhysicsCage_ResetAll(void)
{
  ?HavokPhysicsCage_ResetAll@@YAXXZ();
}

/*
==============
HavokPhysicsCage_DrawDebug
==============
*/

void __fastcall HavokPhysicsCage_DrawDebug(unsigned int cageId, unsigned int planesCount)
{
  ?HavokPhysicsCage_DrawDebug@@YAXII@Z(cageId, planesCount);
}

/*
==============
HavokPhysicsCage_Invalidate
==============
*/

void __fastcall HavokPhysicsCage_Invalidate(unsigned int cageId)
{
  ?HavokPhysicsCage_Invalidate@@YAXI@Z(cageId);
}

/*
==============
HavokPhysicsCage_ClipPlanes
==============
*/

void __fastcall HavokPhysicsCage_ClipPlanes(unsigned int cageId, const hkVector4f *planesWs, unsigned int planeCount)
{
  ?HavokPhysicsCage_ClipPlanes@@YAXIPEBVhkVector4f@@I@Z(cageId, planesWs, planeCount);
}

/*
==============
HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane
==============
*/

void __fastcall HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane(unsigned int cageId, unsigned int planeIndex, const vec3_t *pointWs, vec2_t *outPoint)
{
  ?HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane@@YAXIIAEBTvec3_t@@AEATvec2_t@@@Z(cageId, planeIndex, pointWs, outPoint);
}

/*
==============
HavokPhysicsCage_Update
==============
*/

void __fastcall HavokPhysicsCage_Update(unsigned int cageId, HavokPhysics_IgnoreBodies *ignoreBodies, const hkAabb *newAabb)
{
  ?HavokPhysicsCage_Update@@YAXIPEAVHavokPhysics_IgnoreBodies@@AEBVhkAabb@@@Z(cageId, ignoreBodies, newAabb);
}

/*
==============
HavokPhysicsCage_Destroy
==============
*/

void __fastcall HavokPhysicsCage_Destroy(unsigned int cageId)
{
  ?HavokPhysicsCage_Destroy@@YAXI@Z(cageId);
}

/*
==============
HavokPhysicsCage_Create
==============
*/

unsigned int __fastcall HavokPhysicsCage_Create(Physics_WorldId worldId, PhysicsCage_Type cageType)
{
  return ?HavokPhysicsCage_Create@@YAIW4Physics_WorldId@@W4PhysicsCage_Type@@@Z(worldId, cageType);
}

/*
==============
HavokPhysicsCage_SegmentCastInPlane
==============
*/

bool __fastcall HavokPhysicsCage_SegmentCastInPlane(unsigned int cageId, const vec3_t *startWs, const vec3_t *endWs, unsigned int planeIndex, float *outFrac)
{
  return ?HavokPhysicsCage_SegmentCastInPlane@@YA_NIAEBTvec3_t@@0IAEAM@Z(cageId, startWs, endWs, planeIndex, outFrac);
}

/*
==============
HavokPhysicsCage_ClipPlanes
==============
*/
void HavokPhysicsCage_ClipPlanes(unsigned int cageId, const hkVector4f *planesWs, unsigned int planeCount)
{
  unsigned int v9; 
  const hkVector4f *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  HavokPhysicsCage *v14; 
  unsigned int v15; 
  HavokPhysicsMidphaseClippedPlane *v17; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v22; 
  hknpShape *v23; 
  __int64 v27; 
  int m_value; 
  hknpShape *Shape; 
  unsigned int v64; 
  __int64 v65; 
  __int64 pointCount; 
  __int64 v89; 
  __int64 v90; 
  unsigned __int64 *v91; 
  hkVector4f *edgesOut; 
  __int64 v107; 
  unsigned __int16 v108; 
  unsigned int v109; 
  unsigned int v110; 
  int v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  const hkVector4f *v115; 
  HavokPhysicsCage *v116; 
  __int64 v117; 
  vec3_t vec; 
  vec3_t forward; 
  vec3_t out; 
  hkVector4f b; 
  hkSimdFloat32 tolerance; 
  hkVector4f a[2]; 
  hkVector4f c; 
  tmat33_t<vec3_t> outAxis; 
  _BYTE v126[64]; 
  __int64 v127; 
  int v128; 
  __int64 v129; 
  __int64 v131; 
  void (__fastcall *const *v132)(); 
  __int64 v133; 
  char *v134; 
  int v135; 
  char v136; 
  __int16 v139; 
  hkVector4f plane[2]; 
  hkVector4f v141; 
  char v143; 
  void *retaddr; 

  _RAX = &retaddr;
  v117 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v9 = planeCount;
  LODWORD(v112) = planeCount;
  v10 = planesWs;
  v115 = planesWs;
  v11 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 245, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( v9 - 1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 246, ASSERT_TYPE_ASSERT, "(planeCount > 0 && planeCount <= MAX_MIDCAGE_CLIPPLANES)", "%s\n\tHavokPhysicsCage_ClipPlanes: Max number of allowed planes to clip is %d", "planeCount > 0 && planeCount <= MAX_MIDCAGE_CLIPPLANES", 2) )
    __debugbreak();
  v12 = v11 - 1;
  v113 = v11 - 1;
  v13 = v11 - 1;
  if ( !s_cages[v13].inUse )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 249, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
      __debugbreak();
    v12 = v113;
  }
  v14 = &s_cages[v13];
  v116 = &s_cages[v13];
  if ( s_cages[v13].updateCount )
  {
    v15 = 0;
    if ( v9 )
    {
      _RSI = v10;
      v17 = s_midphaseCageClippedPlanes[v12];
      do
      {
        v17->index = v15;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovlps qword ptr [rbp+0DB0h+forward], xmm0
          vextractps dword ptr [rbp+0DB0h+forward+8], xmm0, 2
        }
        BG_AxisFromForward(&forward, &identityMatrix33.m[2], &outAxis);
        MatrixTranspose(&outAxis, &v17->worldToPlane);
        v17->pointCount = 0;
        ++v15;
        ++v17;
        ++_RSI;
      }
      while ( v15 < v9 );
    }
    v19 = 0;
    v109 = 0;
    v20 = 0;
    v110 = 0;
    if ( v14->shapeCount )
    {
      __asm { vmovss  xmm6, cs:__real@42000000 }
      do
      {
        if ( v20 >= 4 )
        {
          LODWORD(v107) = 4;
          LODWORD(edgesOut) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_CAGE_SHAPES )", "index doesn't index MAX_CAGE_SHAPES\n\t%i not in [0, %i)", edgesOut, v107) )
            __debugbreak();
        }
        v22 = v20;
        v114 = v20;
        if ( (v14->bodyIds[v20].m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF && HavokPhysics_IsRigidBodyValid(v14->worldId, v14->bodyIds[v20]) && (v23 = HavokPhysics_GetShape(v14->worldId, v14->bodyIds[v20])) != NULL && v23->m_type.m_storage == 9 )
        {
          if ( v9 )
          {
            _RDI = &v14->worldToShape[v20].m_rotation;
            _RBX = plane;
            _R14 = (char *)v10 - (char *)plane;
            v27 = v9;
            do
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [r14+rbx]
                vmovups xmmword ptr [rbp+0DB0h+b.m_quad], xmm0
              }
              hkVector4f::setRotatedDir(_RBX, _RDI, &b);
              __asm
              {
                vbroadcastss xmm2, dword ptr [rbp+0DB0h+b.m_quad+0Ch]
                vmovups xmm3, xmmword ptr [rbx]
                vmovups xmm0, xmmword ptr [rdi+30h]
                vdpps   xmm1, xmm0, xmm3, 7Fh
                vsubps  xmm2, xmm2, xmm1
                vblendps xmm0, xmm3, xmm2, 8
                vmovups xmmword ptr [rbx], xmm0
              }
              ++_RBX;
              --v27;
            }
            while ( v27 );
            v19 = v109;
            v22 = v114;
            v20 = v110;
          }
          _RAX = &v14->worldToShape[v22];
          __asm
          {
            vmovups xmm1, xmmword ptr [rax]
            vmovups xmm0, xmmword ptr [rax+10h]
            vmovups xmm3, xmmword ptr [rax+20h]
            vunpcklps xmm2, xmm1, xmm0
            vunpckhps xmm0, xmm1, xmm0
            vblendps xmm8, xmm0, xmm3, 0Ch
            vmovlhps xmm7, xmm2, xmm3
            vmovhlps xmm0, xmm7, xmm2
            vshufps xmm9, xmm0, xmm3, 0D4h ; 'Ô'
            vpxor   xmm0, xmm0, xmm0
            vpinsrw xmm0, xmm0, ecx, 1
            vpshufd xmm1, xmm0, 0
            vxorps  xmm2, xmm1, xmmword ptr [rax+30h]
            vshufps xmm0, xmm2, xmm2, 0
            vshufps xmm1, xmm2, xmm2, 55h ; 'U'
            vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
            vmulps  xmm3, xmm0, xmm7
            vmulps  xmm0, xmm1, xmm9
            vmulps  xmm1, xmm2, xmm8
            vaddps  xmm0, xmm0, xmm3
            vaddps  xmm10, xmm0, xmm1
          }
          v108 = 0;
          if ( v14->subshapeCount[v22] )
          {
            do
            {
              if ( v19 >= v14->subshapeTotalCount )
                break;
              m_value = v14->shapeKeys[v19].m_value;
              if ( v20 >= 4 )
              {
                LODWORD(v107) = 4;
                LODWORD(edgesOut) = v20;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_CAGE_SHAPES )", "index doesn't index MAX_CAGE_SHAPES\n\t%i not in [0, %i)", edgesOut, v107) )
                  __debugbreak();
              }
              if ( (v14->bodyIds[v22].m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF || !HavokPhysics_IsRigidBodyValid(v14->worldId, v14->bodyIds[v22]) )
                Shape = NULL;
              else
                Shape = HavokPhysics_GetShape(v14->worldId, v14->bodyIds[v22]);
              v111 = m_value;
              if ( Shape )
              {
                v133 = 0i64;
                v134 = &v136;
                v135 = 2048;
                v132 = hknpInplaceShapeBuffer<2048>::`vftable';
                v131 = 0i64;
                v127 = 0i64;
                v128 = 0;
                v129 = 13i64;
                __asm
                {
                  vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                  vmovups [rbp+0DB0h+var_D60], ymm0
                  vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                  vmovups [rbp+0DB0h+var_D40], ymm0
                  vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
                  vmovups [rbp+0DB0h+var_C00], xmm0
                }
                v139 = -1;
                Shape->getLeafShapes(Shape, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)&v111, 1, (hknpShapeCollector *)v126);
                if ( (v129 & 0x10) != 0 )
                {
                  __asm
                  {
                    vmovups ymm0, [rbp+0DB0h+var_3C0]
                    vmovups ymmword ptr [rbp+0DB0h+a.m_quad], ymm0
                    vmovups xmm0, [rbp+0DB0h+var_3A0]
                    vmovups xmmword ptr [rbp+0DB0h+c.m_quad], xmm0
                  }
                  v132 = hknpShapeBuffer::`vftable';
                  if ( v133 )
                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v133 + 8i64))(v133, 0i64);
                  v64 = 0;
                  v65 = v113;
                  while ( v64 < v9 )
                  {
                    _RDI = &s_midphaseCageClippedPlanes[v65][v64];
                    __asm
                    {
                      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+260h; __m128 const near * const g_vectorfConstants
                      vmovups xmmword ptr [rbp+0DB0h+tolerance.m_real], xmm0
                    }
                    if ( hkcdTriangleUtil::clipWithPlane(a, &a[1], &c, &plane[v64], &tolerance, &v141) )
                    {
                      pointCount = _RDI->pointCount;
                      if ( (unsigned int)pointCount < 0x13F )
                      {
                        __asm
                        {
                          vmovups xmm5, xmmword ptr [rbp+0DB0h+var_F0.m_quad]
                          vshufps xmm0, xmm5, xmm5, 55h ; 'U'
                          vmulps  xmm3, xmm0, xmm9
                          vshufps xmm1, xmm5, xmm5, 0
                          vmulps  xmm2, xmm1, xmm7
                          vaddps  xmm4, xmm3, xmm2
                          vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
                          vmulps  xmm1, xmm0, xmm8
                          vaddps  xmm2, xmm4, xmm1
                          vaddps  xmm3, xmm2, xmm10
                          vmovups xmmword ptr [rbp+0DB0h+var_F0.m_quad], xmm3
                          vmovups xmm5, [rbp+0DB0h+var_E0]
                          vshufps xmm0, xmm5, xmm5, 55h ; 'U'
                          vmulps  xmm3, xmm0, xmm9
                          vshufps xmm1, xmm5, xmm5, 0
                          vmulps  xmm2, xmm1, xmm7
                          vaddps  xmm4, xmm3, xmm2
                          vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
                          vmulps  xmm1, xmm0, xmm8
                          vaddps  xmm2, xmm4, xmm1
                          vaddps  xmm3, xmm2, xmm10
                          vmovups [rbp+0DB0h+var_E0], xmm3
                        }
                        v89 = pointCount;
                        v90 = 0i64;
                        v91 = &v141.m_quad.m128_u64[1];
                        do
                        {
                          __asm
                          {
                            vmulss  xmm1, xmm6, dword ptr [r14-8]
                            vmovss  dword ptr [rbp+0DB0h+vec], xmm1
                            vmulss  xmm0, xmm6, dword ptr [r14-4]
                            vmovss  dword ptr [rbp+0DB0h+vec+4], xmm0
                            vmulss  xmm2, xmm6, dword ptr [r14]
                            vmovss  dword ptr [rbp+0DB0h+vec+8], xmm2
                          }
                          _RBX = v90 + v89;
                          AxisTransformVec3(&s_midphaseCageClippedPlanes[v65][v64].worldToPlane, &vec, &out);
                          __asm
                          {
                            vmovss  xmm0, dword ptr [rbp+0DB0h+out+4]
                            vmovss  dword ptr [rdi+rbx*8+24h], xmm0
                            vmovss  xmm1, dword ptr [rbp+0DB0h+out+8]
                            vmovss  dword ptr [rdi+rbx*8+28h], xmm1
                          }
                          _RDX = _RDI->pointCount + v90 + 217;
                          __asm
                          {
                            vmovsd  xmm0, qword ptr [rbp+0DB0h+vec]
                            vmovsd  qword ptr [rdi+rdx*4], xmm0
                          }
                          _RDI->worldToPlane.m[_RDX].v[2] = vec.v[2];
                          ++v90;
                          v91 += 2;
                        }
                        while ( v90 < 2 );
                        _RDI->pointCount += 2;
                        v9 = v112;
                      }
                    }
                    ++v64;
                  }
                  v14 = v116;
                  v19 = v109;
                  v22 = v114;
                  v20 = v110;
                }
                else
                {
                  v132 = hknpShapeBuffer::`vftable';
                  if ( v133 )
                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v133 + 8i64))(v133, 0i64);
                }
              }
              ++v108;
              v109 = ++v19;
            }
            while ( v108 < v14->subshapeCount[v22] );
            v10 = v115;
          }
        }
        else
        {
          v19 += v14->subshapeCount[v20];
          v109 = v19;
        }
        v110 = ++v20;
      }
      while ( v20 < v14->shapeCount );
    }
  }
  _R11 = &v143;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
HavokPhysicsCage_Create
==============
*/
__int64 HavokPhysicsCage_Create(Physics_WorldId worldId, PhysicsCage_Type cageType)
{
  bool *p_inUse; 
  unsigned int v6; 
  __int64 v8; 
  unsigned int v9; 
  __int64 result; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 86, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysicsCage_Create: Invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( cageType != PhysicsCage_Midphase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 87, ASSERT_TYPE_ASSERT, "(cageType == PhysicsCage_Type::PhysicsCage_Midphase)", "%s\n\tPhysicsCage_Create: Only PhysicsCage_Midphase is supported so far", "cageType == PhysicsCage_Type::PhysicsCage_Midphase") )
    __debugbreak();
  p_inUse = &s_cages[0].inUse;
  v6 = 0;
  while ( *p_inUse )
  {
    ++v6;
    p_inUse += 1616;
    if ( v6 >= 4 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 96, ASSERT_TYPE_ASSERT, "(index < MAX_CAGE_COUNT)", "%s\n\tPhysicsCage_Create: Not enough memory for physics cage. Increase MAX_CAGE_COUNT?", "index < MAX_CAGE_COUNT") )
        __debugbreak();
      break;
    }
  }
  _RBP = s_cages;
  v8 = (int)v6;
  s_cages[v8].worldId = worldId;
  v9 = v6 + 1;
  s_cages[v8].cageType = cageType;
  s_cages[v8].inUse = 1;
  if ( v6 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 128, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  _RBX = (int)v6;
  if ( !s_cages[_RBX].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 131, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  __asm { vmovups xmm2, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants }
  s_cages[_RBX].updateCount = 0;
  __asm
  {
    vmovups xmmword ptr [rbx+rbp+620h], xmm2
    vpxor   xmm0, xmm0, xmm0
    vpinsrw xmm0, xmm0, eax, 1
    vpshufd xmm1, xmm0, 0
    vxorps  xmm0, xmm2, xmm1
    vmovups xmmword ptr [rbx+rbp+630h], xmm0
  }
  *(_QWORD *)&s_cages[_RBX].shapeCount = 0i64;
  result = v9;
  *(_QWORD *)s_cages[_RBX].subshapeCount = 0i64;
  return result;
}

/*
==============
HavokPhysicsCage_Destroy
==============
*/
void HavokPhysicsCage_Destroy(unsigned int cageId)
{
  __int64 v1; 

  v1 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 115, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  s_cages[v1 - 1].inUse = 0;
}

/*
==============
HavokPhysicsCage_DrawDebug
==============
*/
void HavokPhysicsCage_DrawDebug(unsigned int cageId, unsigned int planesCount)
{
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  HavokPhysicsCage *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  hknpShape *Shape; 
  hknpShape *v19; 
  unsigned __int16 v20; 
  char v24; 
  __int64 v68; 
  vec3_t *debugPoints; 
  int v70; 
  __int64 v71; 
  __int64 v79; 
  __int64 v80; 
  int v81; 
  __int64 v83; 
  __int64 v84; 
  HavokPhysicsCage *v85; 
  __int64 v86; 
  __m256i v90; 
  __int64 v92; 
  int v93; 
  __int64 v94; 
  __int64 v96; 
  void (__fastcall *const *v97)(); 
  __int64 v98; 
  char *v99; 
  int v100; 
  char v101; 
  __int16 v105; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v108; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  v86 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  v9 = planesCount;
  v10 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 444, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  v11 = v10 - 1;
  v84 = v10 - 1;
  v12 = v10 - 1;
  if ( !s_cages[v12].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 447, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v13 = &s_cages[v12];
  v85 = &s_cages[v12];
  if ( s_cages[v12].updateCount )
  {
    v14 = 0i64;
    v81 = 0;
    if ( v13->shapeCount )
    {
      v15 = 0i64;
      v83 = 0i64;
      __asm { vmovss  xmm11, cs:__real@42000000 }
      do
      {
        if ( (unsigned int)v14 >= 4 )
        {
          LODWORD(v80) = 4;
          LODWORD(v79) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_CAGE_SHAPES )", "index doesn't index MAX_CAGE_SHAPES\n\t%i not in [0, %i)", v79, v80) )
            __debugbreak();
        }
        v17 = (unsigned int)v14;
        if ( (v13->bodyIds[v14].m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF && HavokPhysics_IsRigidBodyValid(v13->worldId, v13->bodyIds[v14]) )
        {
          Shape = HavokPhysics_GetShape(v13->worldId, v13->bodyIds[v14]);
          v19 = Shape;
          if ( Shape )
          {
            if ( Shape->m_type.m_storage == 9 )
            {
              if ( drawTris )
              {
                v20 = 0;
                if ( v13->subshapeCount[v17] )
                {
                  do
                  {
                    LODWORD(v83) = v13->shapeKeys[v15].m_value;
                    v98 = 0i64;
                    v99 = &v101;
                    v100 = 2048;
                    v97 = hknpInplaceShapeBuffer<2048>::`vftable';
                    v96 = 0i64;
                    v92 = 0i64;
                    v93 = 0;
                    v94 = 13i64;
                    __asm
                    {
                      vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                      vmovups [rbp+0CC0h+var_D00], ymm0
                      vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                      vmovups [rbp+0CC0h+var_CE0], ymm0
                      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
                      vmovups [rbp+0CC0h+var_BA0], xmm0
                    }
                    v105 = -1;
                    v19->getLeafShapes(v19, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)&v83, 1, (hknpShapeCollector *)&v90);
                    if ( (v94 & 0x10) != 0 )
                    {
                      __asm
                      {
                        vmovups xmm4, [rbp+0CC0h+var_360]
                        vshufps xmm0, xmm4, xmm4, 55h ; 'U'
                        vmovups xmm9, xmmword ptr [rbp+0CC0h+var_D00+10h]
                        vmulps  xmm2, xmm0, xmm9
                        vshufps xmm1, xmm4, xmm4, 0
                        vmovups xmm6, xmmword ptr [rbp+0CC0h+var_D00]
                        vmulps  xmm0, xmm1, xmm6
                        vaddps  xmm3, xmm2, xmm0
                        vshufps xmm2, xmm4, xmm4, 0AAh ; 'ª'
                        vmovups xmm7, xmmword ptr [rbp+0CC0h+var_CE0]
                        vmulps  xmm0, xmm2, xmm7
                        vaddps  xmm1, xmm3, xmm0
                        vmovups xmm8, xmmword ptr [rbp+0CC0h+var_CE0+10h]
                        vaddps  xmm10, xmm1, xmm8
                        vmovups [rbp+0CC0h+var_D40], xmm10
                        vmovups xmm5, [rbp+0CC0h+var_350]
                        vshufps xmm0, xmm5, xmm5, 55h ; 'U'
                        vmulps  xmm3, xmm0, xmm9
                        vshufps xmm1, xmm5, xmm5, 0
                        vmulps  xmm2, xmm1, xmm6
                        vaddps  xmm4, xmm3, xmm2
                        vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
                        vmulps  xmm1, xmm0, xmm7
                        vaddps  xmm2, xmm4, xmm1
                        vaddps  xmm5, xmm2, xmm8
                        vmovups [rbp+0CC0h+var_D30], xmm5
                        vmovups xmm0, [rbp+0CC0h+var_340]
                        vshufps xmm1, xmm0, xmm0, 0
                        vshufps xmm2, xmm0, xmm0, 55h ; 'U'
                        vshufps xmm3, xmm0, xmm0, 0AAh ; 'ª'
                        vmulps  xmm4, xmm6, xmm1
                        vmulps  xmm0, xmm9, xmm2
                        vmulps  xmm1, xmm7, xmm3
                        vaddps  xmm0, xmm0, xmm4
                        vaddps  xmm1, xmm1, xmm0
                        vaddps  xmm2, xmm8, xmm1
                        vmovups [rbp+0CC0h+var_D20], xmm2
                      }
                      v97 = hknpShapeBuffer::`vftable';
                      if ( v98 )
                        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v98 + 8i64))(v98, 0i64);
                      v24 = 1;
                    }
                    else
                    {
                      v97 = hknpShapeBuffer::`vftable';
                      if ( v98 )
                        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v98 + 8i64))(v98, 0i64);
                      v24 = 0;
                    }
                    if ( v24 )
                    {
                      __asm
                      {
                        vmulss  xmm1, xmm11, dword ptr [rbp+0CC0h+var_D40]
                        vmovss  dword ptr [rbp+0CC0h+start], xmm1
                        vmulss  xmm0, xmm11, dword ptr [rbp+0CC0h+var_D40+4]
                        vmovss  dword ptr [rbp+0CC0h+start+4], xmm0
                        vmulss  xmm2, xmm11, dword ptr [rbp+0CC0h+var_D40+8]
                        vmovss  dword ptr [rbp+0CC0h+start+8], xmm2
                        vmulss  xmm1, xmm11, dword ptr [rbp+0CC0h+var_D30]
                        vmovss  dword ptr [rbp+0CC0h+end], xmm1
                        vmulss  xmm0, xmm11, dword ptr [rbp+0CC0h+var_D30+4]
                        vmovss  dword ptr [rbp+0CC0h+end+4], xmm0
                        vmulss  xmm2, xmm11, dword ptr [rbp+0CC0h+var_D30+8]
                        vmovss  dword ptr [rbp+0CC0h+end+8], xmm2
                        vmulss  xmm1, xmm11, dword ptr [rbp+0CC0h+var_D20]
                        vmovss  dword ptr [rbp+0CC0h+var_98], xmm1
                        vmulss  xmm0, xmm11, dword ptr [rbp+0CC0h+var_D20+4]
                        vmovss  dword ptr [rbp+0CC0h+var_98+4], xmm0
                        vmulss  xmm2, xmm11, dword ptr [rbp+0CC0h+var_D20+8]
                        vmovss  dword ptr [rbp+0CC0h+var_98+8], xmm2
                      }
                      CG_DebugLine(&start, &end, &colorCyan, 0, 0);
                      CG_DebugLine(&start, &v108, &colorCyan, 0, 0);
                      CG_DebugLine(&end, &v108, &colorCyan, 0, 0);
                    }
                    ++v20;
                    ++v15;
                  }
                  while ( v20 < v13->subshapeCount[v17] );
                  v83 = v15;
                  v9 = planesCount;
                  v11 = v84;
                }
                LODWORD(v14) = v81;
              }
              if ( drawEdges && (_DWORD)v9 )
              {
                v68 = 2 * v11;
                do
                {
                  debugPoints = s_midphaseCageClippedPlanes[0][v68].debugPoints;
                  v70 = s_midphaseCageClippedPlanes[0][v68].pointCount / 2;
                  if ( v70 > 0 )
                  {
                    v71 = (unsigned int)v70;
                    do
                    {
                      CG_DebugLine(debugPoints, debugPoints + 1, &colorRed, 0, 0);
                      debugPoints += 2;
                      --v71;
                    }
                    while ( v71 );
                  }
                  ++v68;
                  --v9;
                }
                while ( v9 );
                v13 = v85;
                v15 = v83;
                LODWORD(v14) = v81;
                v9 = planesCount;
                v11 = v84;
              }
            }
          }
        }
        v14 = (unsigned int)(v14 + 1);
        v81 = v14;
      }
      while ( (unsigned int)v14 < v13->shapeCount );
    }
  }
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
HavokPhysicsCage_Invalidate
==============
*/
void HavokPhysicsCage_Invalidate(unsigned int cageId)
{
  __int64 v2; 

  v2 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 128, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  _RBX = v2;
  _RDI = s_cages;
  if ( !s_cages[_RBX - 1].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 131, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  __asm { vmovups xmm2, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants }
  s_cages[_RBX - 1].updateCount = 0;
  __asm
  {
    vmovups xmmword ptr [rbx+rdi-30h], xmm2
    vpxor   xmm0, xmm0, xmm0
    vpinsrw xmm0, xmm0, eax, 1
    vpshufd xmm1, xmm0, 0
    vxorps  xmm0, xmm1, xmm2
    vmovups xmmword ptr [rbx+rdi-20h], xmm0
  }
  *(_QWORD *)&s_cages[_RBX - 1].shapeCount = 0i64;
  *(_QWORD *)s_cages[_RBX - 1].subshapeCount = 0i64;
}

/*
==============
HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane
==============
*/
void HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane(unsigned int cageId, unsigned int planeIndex, const vec3_t *pointWs, vec2_t *outPoint)
{
  __int64 v4; 
  vec3_t out; 

  v4 = planeIndex;
  _RSI = outPoint;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 352, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 353, ASSERT_TYPE_ASSERT, "(planeIndex < MAX_MIDCAGE_CLIPPLANES)", (const char *)&queryFormat, "planeIndex < MAX_MIDCAGE_CLIPPLANES") )
    __debugbreak();
  AxisTransformVec3(&s_midphaseCageClippedPlanes[cageId - 1][v4].worldToPlane, pointWs, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+out+4]
    vmovss  xmm1, dword ptr [rsp+78h+out+8]
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsi+4], xmm1
  }
}

/*
==============
HavokPhysicsCage_ResetAll
==============
*/
void HavokPhysicsCage_ResetAll(void)
{
  memset_0(s_cages, 0, sizeof(s_cages));
  memset_0(s_midphaseCageClippedPlanes, 0, sizeof(s_midphaseCageClippedPlanes));
}

/*
==============
HavokPhysicsCage_SegmentCastInPlane
==============
*/
bool HavokPhysicsCage_SegmentCastInPlane(unsigned int cageId, const vec3_t *startWs, const vec3_t *endWs, unsigned int planeIndex, float *outFrac)
{
  __int64 v7; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  char *v13; 
  int v20; 
  const vec2_t *v21; 
  int v22; 
  __int64 v23; 
  const dvar_t *v28; 
  float v30; 
  vec3_t out; 
  vec2_t p2; 
  vec2_t p1; 

  _R14 = outFrac;
  v7 = (int)cageId;
  v9 = planeIndex;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 367, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( (unsigned int)v9 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 368, ASSERT_TYPE_ASSERT, "(planeIndex < MAX_MIDCAGE_CLIPPLANES)", (const char *)&queryFormat, "planeIndex < MAX_MIDCAGE_CLIPPLANES") )
    __debugbreak();
  v11 = v7 - 1;
  if ( !s_cages[v11].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 371, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  v12 = v9 + 2 * v11;
  *outFrac = 1.0;
  v13 = (char *)s_midphaseCageClippedPlanes + 6444 * v12;
  if ( *((int *)v13 + 649) <= 0 )
    return 0;
  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  AxisTransformVec3(&s_midphaseCageClippedPlanes[0][v12].worldToPlane, startWs, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+out+4]
    vmovss  xmm1, dword ptr [rsp+0B8h+out+8]
    vmovss  dword ptr [rsp+0B8h+p1], xmm0
    vmovss  dword ptr [rsp+0B8h+p1+4], xmm1
  }
  AxisTransformVec3((const tmat33_t<vec3_t> *)v13, endWs, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+out+4]
    vmovss  xmm1, dword ptr [rsp+0B8h+out+8]
    vmovss  xmm6, cs:__real@7f7fffff
  }
  v20 = *((_DWORD *)v13 + 649);
  v21 = (const vec2_t *)(v13 + 36);
  v22 = v20 / 2;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+p2], xmm0
    vmovss  dword ptr [rsp+0B8h+p2+4], xmm1
  }
  if ( v22 > 0 )
  {
    v23 = (unsigned int)v22;
    do
    {
      if ( SegmentsIntersection(&p1, &p2, v21, v21 + 1, &v30) )
      {
        __asm
        {
          vmovss  xmm0, [rsp+0B8h+var_78]
          vcomiss xmm0, xmm6
        }
      }
      v21 += 2;
      --v23;
    }
    while ( v23 );
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vminss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovss  dword ptr [r14], xmm1
  }
  v28 = DCONST_DVARBOOL_bg_vehicleDebugTreads;
  if ( !DCONST_DVARBOOL_bg_vehicleDebugTreads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebugTreads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled )
  {
    __asm { vmovss  xmm1, cs:__real@3e4ccccd; radius }
    CG_DebugSphere(startWs, *(float *)&_XMM1, &colorBlue, 0, 0);
    CG_DebugLine(startWs, endWs, &colorGreen, 0, 0);
  }
  return 0;
}

/*
==============
HavokPhysicsCage_Update
==============
*/
void HavokPhysicsCage_Update(unsigned int cageId, HavokPhysics_IgnoreBodies *ignoreBodies, const hkAabb *newAabb)
{
  __int64 v9; 
  __int64 v10; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  unsigned int i; 
  hknpBodyId v36; 
  hknpShape *Shape; 
  __int64 v38; 
  hknpWorld *world; 
  unsigned int j; 
  unsigned int AABBQueryHitShapeKey; 
  hkMemoryAllocator *v65; 
  __int64 v70; 
  HavokPhysics_BroadphaseCollisionQueryResult v71; 
  Physics_AABBQueryExtendedData v72; 
  Physics_AABBBroadphaseQueryExtendedData v73; 
  __int64 v74; 
  hkAabb v75[2]; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  v74 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = newAabb;
  v9 = (int)cageId;
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 148, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  v10 = 1616 * v9;
  if ( !VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_961.v.m128_i8[v10 + 15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 151, ASSERT_TYPE_ASSERT, "(s_cages[midCageIndex].inUse)", (const char *)&queryFormat, "s_cages[midCageIndex].inUse") )
    __debugbreak();
  _RDI = (char *)&unk_150D5F430 + v10;
  __asm
  {
    vmovups xmm4, xmmword ptr [rdi+620h]
    vmovups xmm5, xmmword ptr [rbx]
    vcmpeqps xmm1, xmm5, xmm4
    vmovups xmm6, xmmword ptr [rdi+630h]
    vmovups xmm7, xmmword ptr [rbx+10h]
    vcmpeqps xmm0, xmm7, xmm6
    vandps  xmm2, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vpxor   xmm8, xmm8, xmm8
    vpcmpeqd xmm0, xmm8, xmm8
    vblendps xmm3, xmm1, xmm0, 7
    vpand   xmm0, xmm2, xmm3
    vptest  xmm0, xmm3
  }
  if ( !_CF )
  {
    __asm
    {
      vcmpleps xmm1, xmm4, xmm5
      vcmpleps xmm0, xmm7, xmm6
      vandps  xmm1, xmm1, xmm0
      vpand   xmm0, xmm1, xmm3
      vptest  xmm0, xmm3
    }
    if ( !_CF )
    {
      Sys_ProfBeginNamedEvent(0xFFFF6347, "HavokPhysicsCage_Update: BP");
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rdi+620h], xmm0
        vmovups xmm1, xmmword ptr [rbx+10h]
        vmovups xmmword ptr [rdi+630h], xmm1
      }
      *((_QWORD *)_RDI + 200) = 0i64;
      *((_QWORD *)_RDI + 194) = 0i64;
      ++*((_WORD *)_RDI + 806);
      v73.phaseSelection = All;
      v73.ignoreBodies = ignoreBodies;
      v71.m_propertyBag.m_bag = NULL;
      *(_DWORD *)&v71.m_memSizeAndFlags = 0x1FFFF;
      v71.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
      v71.m_hits.m_data = NULL;
      v71.m_hits.m_size = 0;
      v71.m_hits.m_capacityAndFlags = 0x80000000;
      v73.contents = 41943825;
      v71.m_worldId = *((_DWORD *)_RDI + 402);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+620h]
        vmovups [rsp+118h+var_68], ymm0
      }
      HavokPhysics_AABBBroadphaseQuery(v71.m_worldId, v75, &v73, &v71);
      v72.contents = -1;
      v72.simplify = 0;
      v72.ignoreBodies = NULL;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+118h+var_98], xmm0
      }
      v72.phaseSelection = All;
      AllResult = PhysicsQuery_GetAllResult((Physics_WorldId)*((_DWORD *)_RDI + 402));
      Sys_ProfEndNamedEvent();
      Sys_ProfBeginNamedEvent(0xFFFF6347, "HavokPhysicsCage_Update: MP");
      for ( i = 0; i < HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&v71); ++i )
      {
        v36.m_serialAndIndex = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&v71, i);
        if ( (v36.m_serialAndIndex & 0xFFFFFF) != 0xFFFFFF )
        {
          Shape = HavokPhysics_GetShape((Physics_WorldId)*((_DWORD *)_RDI + 402), v36);
          if ( !Shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicscage.cpp", 189, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
            __debugbreak();
          if ( Shape->m_type.m_storage == 9 )
          {
            v38 = *((int *)_RDI + 402);
            if ( (unsigned int)v38 > 7 )
            {
              LODWORD(v70) = *((_DWORD *)_RDI + 402);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v70) )
                __debugbreak();
              if ( (unsigned int)v38 > 7 )
              {
                LODWORD(v70) = v38;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 56, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v70) )
                  __debugbreak();
              }
            }
            world = g_havokPhysicsWorlds[v38].world;
            if ( !world )
            {
              LODWORD(v70) = v38;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v70) )
                __debugbreak();
            }
            _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, v36.m_serialAndIndex);
            _RCX = &_RDI[64 * *((unsigned int *)_RDI + 400) + 1280];
            __asm
            {
              vmovups xmm1, xmmword ptr [rax]
              vmovups xmm0, xmmword ptr [rax+10h]
              vmovups xmm3, xmmword ptr [rax+20h]
              vunpcklps xmm2, xmm1, xmm0
              vunpckhps xmm0, xmm1, xmm0
              vblendps xmm6, xmm0, xmm3, 0Ch
              vmovlhps xmm5, xmm2, xmm3
              vmovhlps xmm0, xmm5, xmm2
              vshufps xmm4, xmm0, xmm3, 0D4h ; 'Ô'
              vmovups xmmword ptr [rcx], xmm5
              vmovups xmmword ptr [rcx+10h], xmm4
              vmovups xmmword ptr [rcx+20h], xmm6
              vpinsrw xmm0, xmm8, edx, 1
              vpshufd xmm1, xmm0, 0
              vxorps  xmm2, xmm1, xmmword ptr [rax+30h]
              vshufps xmm0, xmm2, xmm2, 0
              vshufps xmm1, xmm2, xmm2, 55h ; 'U'
              vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
              vmulps  xmm3, xmm5, xmm0
              vmulps  xmm0, xmm4, xmm1
              vmulps  xmm1, xmm2, xmm6
              vaddps  xmm0, xmm0, xmm3
              vaddps  xmm0, xmm1, xmm0
              vmovups xmmword ptr [rcx+30h], xmm0
            }
            *(hknpBodyId *)&_RDI[4 * *((unsigned int *)_RDI + 400) + 1536] = v36;
            HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
            __asm
            {
              vmovups ymm0, ymmword ptr [rdi+620h]
              vmovups [rsp+118h+var_68], ymm0
            }
            HavokPhysics_AABBQuery(*((Physics_WorldId *)_RDI + 402), v36, v75, &v72, AllResult);
            *(_WORD *)&_RDI[2 * *((unsigned int *)_RDI + 400) + 1552] = 0;
            for ( j = 0; j < HavokPhysics_CollisionQueryResult::GetNumHits(AllResult); ++j )
            {
              AABBQueryHitShapeKey = HavokPhysics_CollisionQueryResult::GetAABBQueryHitShapeKey(AllResult, j);
              if ( AABBQueryHitShapeKey != -1 )
              {
                *(_DWORD *)&_RDI[4 * *((unsigned int *)_RDI + 401)] = AABBQueryHitShapeKey;
                ++*(_WORD *)&_RDI[2 * *((unsigned int *)_RDI + 400) + 1552];
                if ( ++*((_DWORD *)_RDI + 401) >= 0x140u )
                  break;
              }
            }
            if ( ++*((_DWORD *)_RDI + 400) >= 4u || *((_DWORD *)_RDI + 401) >= 0x140u )
              break;
          }
        }
      }
      Sys_ProfEndNamedEvent();
      v65 = hkMemHeapAllocator();
      v71.m_hits.m_size = 0;
      if ( v71.m_hits.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v65, v71.m_hits.m_data, 4, v71.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
      v71.m_hits.m_data = NULL;
      v71.m_hits.m_capacityAndFlags = 0x80000000;
      hkReferencedObject::~hkReferencedObject(&v71);
    }
  }
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

