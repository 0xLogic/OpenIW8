/*
==============
HavokCloth_Debug_Sound_DrawSummary
==============
*/

void __fastcall HavokCloth_Debug_Sound_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  ?HavokCloth_Debug_Sound_DrawSummary@@YAXPEBUScreenPlacement@@PEAM1@Z(scrPlace, x, y);
}

/*
==============
HavokCloth_Debug_DrawInstanceVectorField
==============
*/

void __fastcall HavokCloth_Debug_DrawInstanceVectorField(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  ?HavokCloth_Debug_DrawInstanceVectorField@@YAXPEBUScreenPlacement@@PEAM1I@Z(scrPlace, x, y, instanceId);
}

/*
==============
HavokCloth_Debug_Speed_DrawInstance
==============
*/

void __fastcall HavokCloth_Debug_Speed_DrawInstance(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  ?HavokCloth_Debug_Speed_DrawInstance@@YAXPEBUScreenPlacement@@PEAM1I@Z(scrPlace, x, y, instanceId);
}

/*
==============
HavokCloth_Debug_DrawInstanceDetails
==============
*/

void __fastcall HavokCloth_Debug_DrawInstanceDetails(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  ?HavokCloth_Debug_DrawInstanceDetails@@YAXPEBUScreenPlacement@@PEAM1I@Z(scrPlace, x, y, instanceId);
}

/*
==============
HavokCloth_Debug_Sound_DrawInstance
==============
*/

void __fastcall HavokCloth_Debug_Sound_DrawInstance(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  ?HavokCloth_Debug_Sound_DrawInstance@@YAXPEBUScreenPlacement@@PEAM1I@Z(scrPlace, x, y, instanceId);
}

/*
==============
HavokCloth_Debug_Sound_SetCache
==============
*/

void __fastcall HavokCloth_Debug_Sound_SetCache(const unsigned int globalWorldId, HavokCloth_Update_QueuedSound *sounds, unsigned int numSounds)
{
  ?HavokCloth_Debug_Sound_SetCache@@YAXIPEAUHavokCloth_Update_QueuedSound@@I@Z(globalWorldId, sounds, numSounds);
}

/*
==============
HavokCloth_Debug_Speed_DrawSummary
==============
*/

void __fastcall HavokCloth_Debug_Speed_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  ?HavokCloth_Debug_Speed_DrawSummary@@YAXPEBUScreenPlacement@@PEAM1@Z(scrPlace, x, y);
}

/*
==============
HavokCloth_Debug_DrawAssetDetails
==============
*/

void __fastcall HavokCloth_Debug_DrawAssetDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset)
{
  ?HavokCloth_Debug_DrawAssetDetails@@YAXPEBUScreenPlacement@@PEAM1QEBUClothAsset@@@Z(scrPlace, x, y, asset);
}

/*
==============
HavokCloth_Debug_SetVectorFieldBasis
==============
*/

void __fastcall HavokCloth_Debug_SetVectorFieldBasis(const unsigned int globalWorldId, const unsigned int instanceId, const vec3_t *position, const vec3_t *velocityVec, const vec3_t *forceVec)
{
  ?HavokCloth_Debug_SetVectorFieldBasis@@YAXIIAEBTvec3_t@@00@Z(globalWorldId, instanceId, position, velocityVec, forceVec);
}

/*
==============
HavokCloth_Debug_DrawActiveCollidableDetails
==============
*/
void HavokCloth_Debug_DrawActiveCollidableDetails(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId, const ClothAsset *const clothAsset, const HavokCloth_ActiveCollidableData *const activeCollidableData, const int activeCollidableDataIdx)
{
  __int64 clothInstanceIdx; 
  hclClothInstance *ClothInstance; 
  const hclClothData *m_clothData; 
  const hclCollidable *collidable; 
  hclShape *m_shape; 
  const char *v17; 
  char m_bool; 
  __int64 transformSetIdx; 
  const char *v20; 
  bool v23; 
  const ScreenPlacement *v24; 
  const vec4_t *v25; 
  const char *v30; 
  hclTransformSet *v31; 
  ClothAssetBoneMappingSet *v32; 
  __int64 v33; 
  __int64 transformIdx; 
  unsigned __int16 v35; 
  __int16 v36; 
  unsigned __int16 v37; 
  scr_string_t v38; 
  const char *v39; 
  char *v40; 
  const char *v43; 
  const vec4_t *fmt; 
  hclShape *shape; 
  __int64 v52; 
  const char *v53; 
  hclShape *v56; 
  const HavokCloth_ActiveCollidableData *activeCollidableDataa; 
  const HavokCloth_ActiveCollidableData *activeCollidableDatab; 

  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  _RDI = y;
  _RBP = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 417, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 418, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 419, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 420, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 421, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  if ( !activeCollidableData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 422, ASSERT_TYPE_ASSERT, "(activeCollidableData)", (const char *)&queryFormat, "activeCollidableData") )
    __debugbreak();
  clothInstanceIdx = activeCollidableData->clothInstanceIdx;
  ClothInstance = HavokCloth_GetClothInstance(0, instanceId, activeCollidableData->clothInstanceIdx);
  if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 429, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = ClothInstance->m_clothData;
  if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 433, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  collidable = activeCollidableData->collidable;
  activeCollidableDataa = (const HavokCloth_ActiveCollidableData *)collidable;
  if ( !collidable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 437, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
    __debugbreak();
  m_shape = (hclShape *)collidable->m_shape;
  v17 = "Disabled";
  m_bool = collidable->m_enabled.m_bool;
  transformSetIdx = activeCollidableData->transformSetIdx;
  v56 = m_shape;
  if ( m_bool )
    v17 = "Enabled";
  v20 = j_va("%i: %s %s", (unsigned int)activeCollidableDataIdx, *(_QWORD *)&activeCollidableDataa[6].clothInstanceIdx & 0xFFFFFFFFFFFFFFFEui64, v17);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  v23 = m_bool == 0;
  v24 = scrPlace;
  v25 = &colorDkGrey;
  if ( !v23 )
    v25 = &colorWhite;
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v20, v25);
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vaddss  xmm0, xmm6, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbp+0]
    vaddss  xmm1, xmm1, cs:__real@41400000
    vmovss  dword ptr [rbp+0], xmm1
  }
  if ( (int)transformSetIdx >= 0 )
  {
    if ( (unsigned int)transformSetIdx >= m_clothData->m_transformSetDefinitions.m_size )
    {
      LODWORD(shape) = transformSetIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 461, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIdx ) < (unsigned)( clothData->m_transformSetDefinitions.getSize() )", "transformSetIdx doesn't index clothData->m_transformSetDefinitions.getSize()\n\t%i not in [0, %i)", shape, m_clothData->m_transformSetDefinitions.m_size) )
        __debugbreak();
    }
    activeCollidableDatab = (const HavokCloth_ActiveCollidableData *)m_clothData->m_transformSetDefinitions.m_data[transformSetIdx];
    if ( !activeCollidableDatab && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 463, ASSERT_TYPE_ASSERT, "(transformSetDef)", (const char *)&queryFormat, "transformSetDef") )
      __debugbreak();
    if ( (unsigned int)transformSetIdx >= ClothInstance->m_transformSets.m_size )
    {
      LODWORD(v52) = ClothInstance->m_transformSets.m_size;
      LODWORD(shape) = transformSetIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 466, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIdx ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "transformSetIdx doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", shape, v52) )
        __debugbreak();
    }
    v31 = ClothInstance->m_transformSets.m_data[transformSetIdx];
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 468, ASSERT_TYPE_ASSERT, "(transformSet)", (const char *)&queryFormat, "transformSet") )
      __debugbreak();
    if ( (unsigned int)clothInstanceIdx >= clothAsset->boneMappingSetCount )
    {
      LODWORD(v52) = clothAsset->boneMappingSetCount;
      LODWORD(shape) = clothInstanceIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( clothAsset->boneMappingSetCount )", "clothInstanceIdx doesn't index clothAsset->boneMappingSetCount\n\t%i not in [0, %i)", shape, v52) )
        __debugbreak();
    }
    v32 = &clothAsset->boneMappingSets[clothInstanceIdx];
    if ( (unsigned int)transformSetIdx >= v32->boneMappingCount )
    {
      LODWORD(v52) = v32->boneMappingCount;
      LODWORD(shape) = transformSetIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 475, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIdx ) < (unsigned)( boneMappingSet->boneMappingCount )", "transformSetIdx doesn't index boneMappingSet->boneMappingCount\n\t%i not in [0, %i)", shape, v52) )
        __debugbreak();
    }
    v33 = (__int64)&v32->boneMappings[transformSetIdx];
    transformIdx = activeCollidableData->transformIdx;
    if ( (unsigned int)transformIdx >= LODWORD(v31[1].m_propertyBag.m_bag) )
    {
      LODWORD(v52) = v31[1].m_propertyBag.m_bag;
      LODWORD(shape) = activeCollidableData->transformIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 482, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", shape, v52) )
        __debugbreak();
    }
    v35 = *((_WORD *)&v31[1].getExactType + (int)transformIdx);
    v36 = v35 >> 15;
    v37 = v35 & 0x7FFF;
    if ( (unsigned int)transformIdx >= *(_DWORD *)(v33 + 8) )
    {
      LODWORD(v52) = *(_DWORD *)(v33 + 8);
      LODWORD(shape) = transformIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( boneMapping->scrTagCount )", "transformIdx doesn't index boneMapping->scrTagCount\n\t%i not in [0, %i)", shape, v52) )
        __debugbreak();
    }
    v38 = *(_DWORD *)(*(_QWORD *)v33 + 4 * transformIdx);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 490, ASSERT_TYPE_ASSERT, "(scrTagName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "scrTagName != NULL_SCR_STRING") )
      __debugbreak();
    v53 = SL_ConvertToString(v38);
    v39 = (char *)&queryFormat.fmt + 3;
    LODWORD(shape) = v37;
    if ( (_BYTE)v36 )
      v39 = "client";
    v40 = j_va("Binding: TransformSet(%i:%s) Transform:%i (IW %sbone %i:%s)", (unsigned int)transformSetIdx, (const char *)(*(_QWORD *)&activeCollidableDatab[1].clothInstanceIdx & 0xFFFFFFFFFFFFFFFEui64), (unsigned int)transformIdx, v39, shape, v53);
    __asm { vmovss  xmm1, dword ptr [rbp+0]; x }
    v24 = scrPlace;
    fmt = &colorWhite;
    v30 = v40;
  }
  else
  {
    fmt = &colorYellow;
    v30 = "Warning: Unbound Collidable";
  }
  __asm { vmovss  xmm2, dword ptr [rdi]; y }
  Cloth_Debug_DrawString(v24, *(float *)&_XMM1, *(float *)&_XMM2, v30, fmt);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
  }
  if ( v56 )
  {
    HavokCloth_Debug_DrawShapeDetails(v24, _RBP, _RDI, NULL, NULL, v56);
  }
  else
  {
    v43 = j_va("Missing Shape");
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
    }
    Cloth_Debug_DrawString(v24, *(float *)&_XMM1, *(float *)&_XMM2, v43, &colorRed);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm1, xmm0, cs:__real@41400000
    vmovaps xmm6, [rsp+88h+var_48]
    vmovss  dword ptr [rbp+0], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawAssetDetails
==============
*/
void HavokCloth_Debug_DrawAssetDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset)
{
  const ClothAsset *v6; 
  const hclClothContainer *v10; 
  __int64 m_size; 
  const char *v13; 
  hkRefPtr<hclCollidable> *m_data; 
  unsigned int clothDataIdx; 
  hclCollidable *m_ptr; 
  const char *v23; 
  char m_bool; 
  const char *v25; 
  const vec4_t *v28; 
  const char *v31; 
  const char *v36; 
  __int64 v41; 
  const char *v42; 
  const hclClothData **p_m_ptr; 
  const char *v48; 
  hclShape *shape; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  v6 = asset;
  __asm { vmovaps [rsp+98h+var_58], xmm7 }
  _RDI = y;
  _RSI = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1235, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1236, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1237, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1238, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  v10 = HavokCloth_GetAsset(v6);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1242, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  m_size = (unsigned int)v10->m_collidables.m_size;
  __asm { vmovss  xmm6, cs:__real@41000000 }
  if ( (int)m_size > 0 )
  {
    v13 = j_va("%i Collidables", m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm7, cs:__real@41400000
    vaddss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi], xmm1
  }
  m_data = v10->m_collidables.m_data;
  clothDataIdx = 0;
  if ( m_data != &m_data[v10->m_collidables.m_size] )
  {
    do
    {
      m_ptr = m_data->m_ptr;
      if ( m_data->m_ptr )
      {
        if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 384, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
          __debugbreak();
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 386, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
          __debugbreak();
        v23 = "Disabled";
        m_bool = m_ptr->m_enabled.m_bool;
        shape = (hclShape *)m_ptr->m_shape;
        if ( m_bool )
          v23 = "Enabled";
        v25 = j_va("%i: %s %s", clothDataIdx, (unsigned __int64)m_ptr->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64, v23);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [rsi]; x
        }
        v28 = &colorDkGrey;
        if ( m_bool )
          v28 = &colorWhite;
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v25, v28);
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vaddss  xmm0, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm0
        }
        if ( shape )
        {
          HavokCloth_Debug_DrawShapeDetails(scrPlace, _RSI, _RDI, asset, v10, shape);
        }
        else
        {
          v31 = j_va("Missing Shape");
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vmovss  xmm1, dword ptr [rsi]; x
          }
          Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v31, &colorRed);
          __asm
          {
            vaddss  xmm1, xmm6, dword ptr [rdi]
            vmovss  dword ptr [rdi], xmm1
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rsi], xmm1
        }
      }
      else
      {
        v36 = j_va("%i Missing Collidable", clothDataIdx);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [rsi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v36, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vmovss  xmm1, dword ptr [rsi]
        }
      }
      ++m_data;
      ++clothDataIdx;
    }
    while ( m_data != &v10->m_collidables.m_data[v10->m_collidables.m_size] );
    v6 = asset;
    clothDataIdx = 0;
  }
  __asm
  {
    vsubss  xmm0, xmm1, xmm7
    vmovss  dword ptr [rsi], xmm0
  }
  v41 = (unsigned int)v10->m_clothDatas.m_size;
  if ( (int)v41 > 0 )
  {
    v42 = j_va("%i Cloth Datas", v41);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v42, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm0, dword ptr [rsi]
    }
  }
  __asm
  {
    vaddss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rsi], xmm1
  }
  p_m_ptr = (const hclClothData **)&v10->m_clothDatas.m_data->m_ptr;
  if ( p_m_ptr == &p_m_ptr[v10->m_clothDatas.m_size] )
  {
    __asm { vsubss  xmm1, xmm1, xmm7 }
  }
  else
  {
    do
    {
      if ( *p_m_ptr )
      {
        HavokCloth_Debug_DrawClothDataDetails(scrPlace, _RSI, _RDI, v6, v10, *p_m_ptr, clothDataIdx);
      }
      else
      {
        v48 = j_va("%i Missing Cloth Data", clothDataIdx);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [rsi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v48, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
        }
      }
      ++p_m_ptr;
      ++clothDataIdx;
    }
    while ( p_m_ptr != (const hclClothData **)&v10->m_clothDatas.m_data[v10->m_clothDatas.m_size].m_ptr );
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, xmm7
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_48]
    vmovaps xmm7, [rsp+98h+var_58]
    vmovss  dword ptr [rsi], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawBufferDefinitionDetails
==============
*/
void HavokCloth_Debug_DrawBufferDefinitionDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclBufferDefinition *bufferDefinition, int bufferDefinitionIdx)
{
  const char *v13; 
  const char *v20; 
  const char *v25; 

  _RDI = y;
  _RSI = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 645, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 646, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 647, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 648, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 649, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 650, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !bufferDefinition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 651, ASSERT_TYPE_ASSERT, "(bufferDefinition)", (const char *)&queryFormat, "bufferDefinition") )
    __debugbreak();
  v13 = j_va("%i: %s", (unsigned int)bufferDefinitionIdx, (const char *)((unsigned __int64)bufferDefinition->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm0, xmm0, cs:__real@41000000
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rsi]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rsi], xmm0
  }
  v20 = j_va("Type: %s", s_HavokCloth_BufferTypeNames[bufferDefinition->m_type]);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v20, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  dword ptr [rdi], xmm1
  }
  v25 = j_va("Verts: %i - Tris: %i", bufferDefinition->m_numVertices, bufferDefinition->m_numTriangles);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v25, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm2, dword ptr [rsi]
    vsubss  xmm0, xmm2, cs:__real@41400000
    vmovss  dword ptr [rsi], xmm0
  }
}

/*
==============
HavokCloth_Debug_DrawClothDataDetails
==============
*/
void HavokCloth_Debug_DrawClothDataDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx)
{
  const char *v13; 
  __int64 m_size; 
  const char *v22; 
  const hclBufferDefinition **m_data; 
  unsigned int bufferDefinitionIdx; 
  const char *v29; 
  __int64 v34; 
  const char *v35; 
  const hclTransformSetDefinition **v40; 
  unsigned int v41; 
  const char *v42; 
  __int64 v47; 
  const char *v48; 
  const hclOperator **v53; 
  unsigned int v54; 
  const char *v55; 
  __int64 v60; 
  const char *v61; 
  const hclSimClothData **v66; 
  unsigned int v67; 
  const char *v68; 
  __int64 v73; 
  const char *v74; 
  const hclClothState **v79; 
  unsigned int v80; 
  const char *v81; 
  __int64 v86; 
  const char *v87; 
  const hclStateTransition **v92; 
  unsigned int v93; 
  const char *v94; 
  __int64 v99; 
  const char *v100; 
  const hclAction **v105; 
  unsigned int v106; 
  const char *v107; 
  const vec4_t *v108; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  _RSI = y;
  _RDI = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1040, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1041, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1042, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1043, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1044, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1045, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  v13 = j_va("%i: %s", (unsigned int)clothDataIdx, (const char *)((unsigned __int64)clothData->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rdi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vaddss  xmm0, xmm7, dword ptr [rsi]
    vmovss  xmm6, cs:__real@41400000
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm1, dword ptr [rdi]
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  m_size = (unsigned int)clothData->m_bufferDefinitions.m_size;
  if ( (int)m_size > 0 )
  {
    v22 = j_va("%i BufferDefinitions", m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v22, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm0, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  m_data = clothData->m_bufferDefinitions.m_data;
  bufferDefinitionIdx = 0;
  if ( m_data != &m_data[clothData->m_bufferDefinitions.m_size] )
  {
    do
    {
      if ( *m_data )
      {
        HavokCloth_Debug_DrawBufferDefinitionDetails(scrPlace, _RDI, _RSI, asset, container, clothData, clothDataIdx, *m_data, bufferDefinitionIdx);
      }
      else
      {
        v29 = j_va("%i Missing BufferDefinition", bufferDefinitionIdx);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v29, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      ++m_data;
      ++bufferDefinitionIdx;
    }
    while ( m_data != &clothData->m_bufferDefinitions.m_data[clothData->m_bufferDefinitions.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
  }
  v34 = (unsigned int)clothData->m_transformSetDefinitions.m_size;
  if ( (int)v34 > 0 )
  {
    v35 = j_va("%i TransformSetDefinitions", v34);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v35, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  v40 = clothData->m_transformSetDefinitions.m_data;
  v41 = 0;
  if ( v40 != &v40[clothData->m_transformSetDefinitions.m_size] )
  {
    do
    {
      if ( *v40 )
      {
        HavokCloth_Debug_DrawTransformSetDefinitionDetails(scrPlace, _RDI, _RSI, asset, container, clothData, clothDataIdx, *v40, v41);
      }
      else
      {
        v42 = j_va("%i Missing TransformSetDefinition", v41);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v42, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      ++v40;
      ++v41;
    }
    while ( v40 != &clothData->m_transformSetDefinitions.m_data[clothData->m_transformSetDefinitions.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
  }
  v47 = (unsigned int)clothData->m_operators.m_size;
  if ( (int)v47 > 0 )
  {
    v48 = j_va("%i Operators", v47);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v48, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  v53 = clothData->m_operators.m_data;
  v54 = 0;
  if ( v53 != &v53[clothData->m_operators.m_size] )
  {
    do
    {
      if ( *v53 )
      {
        HavokCloth_Debug_DrawOperatorDetails(scrPlace, _RDI, _RSI, asset, container, clothData, clothDataIdx, *v53, v54);
      }
      else
      {
        v55 = j_va("%i Missing Operator", v54);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v55, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      ++v53;
      ++v54;
    }
    while ( v53 != &clothData->m_operators.m_data[clothData->m_operators.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
  }
  v60 = (unsigned int)clothData->m_simClothDatas.m_size;
  if ( (int)v60 > 0 )
  {
    v61 = j_va("%i SimClothDatas", v60);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v61, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  v66 = clothData->m_simClothDatas.m_data;
  v67 = 0;
  if ( v66 != &v66[clothData->m_simClothDatas.m_size] )
  {
    do
    {
      if ( *v66 )
      {
        HavokCloth_Debug_DrawSimClothDataDetails(scrPlace, _RDI, _RSI, asset, container, clothData, clothDataIdx, *v66, v67);
      }
      else
      {
        v68 = j_va("%i Missing SimClothData", v67);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v68, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      ++v66;
      ++v67;
    }
    while ( v66 != &clothData->m_simClothDatas.m_data[clothData->m_simClothDatas.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
  }
  v73 = (unsigned int)clothData->m_clothStateDatas.m_size;
  if ( (int)v73 > 0 )
  {
    v74 = j_va("%i ClothStates", v73);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v74, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  v79 = clothData->m_clothStateDatas.m_data;
  v80 = 0;
  if ( v79 != &v79[clothData->m_clothStateDatas.m_size] )
  {
    do
    {
      if ( *v79 )
      {
        HavokCloth_Debug_DrawClothStateDetails(scrPlace, _RDI, _RSI, asset, container, clothData, clothDataIdx, *v79, v80);
      }
      else
      {
        v81 = j_va("%i Missing ClothState", v80);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v81, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      ++v79;
      ++v80;
    }
    while ( v79 != &clothData->m_clothStateDatas.m_data[clothData->m_clothStateDatas.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
  }
  v86 = (unsigned int)clothData->m_stateTransitions.m_size;
  if ( (int)v86 > 0 )
  {
    v87 = j_va("%i StateTransitions", v86);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v87, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  v92 = clothData->m_stateTransitions.m_data;
  v93 = 0;
  if ( v92 != &v92[clothData->m_stateTransitions.m_size] )
  {
    do
    {
      if ( *v92 )
      {
        HavokCloth_Debug_DrawStateTransitionDetails(scrPlace, _RDI, _RSI, asset, container, clothData, clothDataIdx, *v92, v93);
      }
      else
      {
        v94 = j_va("%i Missing StateTransition", v93);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v94, &colorRed);
        __asm
        {
          vaddss  xmm1, xmm7, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm1
        }
      }
      ++v92;
      ++v93;
    }
    while ( v92 != &clothData->m_stateTransitions.m_data[clothData->m_stateTransitions.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi], xmm1
  }
  v99 = (unsigned int)clothData->m_actions.m_size;
  if ( (int)v99 > 0 )
  {
    v100 = j_va("%i Actions", v99);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v100, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rdi]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  v105 = clothData->m_actions.m_data;
  if ( v105 != &v105[clothData->m_actions.m_size] )
  {
    v106 = 0;
    do
    {
      if ( *v105 )
      {
        if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1023, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
          __debugbreak();
        if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1026, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
          __debugbreak();
        if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1027, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
          __debugbreak();
        v107 = j_va("%i: %s", v106, "Unexpected data - we haven't implemented any actions");
        v108 = &colorWhite;
      }
      else
      {
        v107 = j_va("%i Missing Action", v106);
        v108 = &colorRed;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rsi]; y
        vmovss  xmm1, dword ptr [rdi]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v107, v108);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm1
      }
      ++v105;
      ++v106;
    }
    while ( v105 != &clothData->m_actions.m_data[clothData->m_actions.m_size] );
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@41c00000
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawClothStateDetails
==============
*/
void HavokCloth_Debug_DrawClothStateDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclClothState *clothState, int clothStateIdx)
{
  signed __int64 v9; 
  void *v13; 
  const ScreenPlacement *v17; 
  const char *v18; 
  __int64 m_size; 
  const hclClothState *v27; 
  const char *v28; 
  int simClothIdIdx; 
  const unsigned int *m_data; 
  __int64 v36; 
  const char *v37; 
  const unsigned int *v42; 
  int v43; 
  __int64 v45; 
  const char *v46; 
  hclClothState::TransformSetAccess *v51; 
  unsigned int v52; 
  __int64 v54; 
  const char *v55; 
  unsigned int v60; 
  __int64 v61; 
  unsigned int *v62; 
  unsigned int v63; 
  unsigned int v64; 
  __int64 v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int *v68; 
  unsigned int v69; 
  unsigned int v70; 
  const char *v71; 
  unsigned int v76; 
  const char *v79; 
  unsigned int v84; 
  hclClothData *clothDataa; 
  __int64 clothDataIdxa; 
  unsigned int v94; 
  unsigned int numTags; 
  int v96; 
  ClothAssetBoneMapping *v98; 
  hclClothState::TransformSetAccess *v100; 
  hclTransformSetUsage::TransformTracker *v101; 
  scr_string_t tagNames[4096]; 
  scr_string_t v105[4096]; 
  char v109; 

  v13 = alloca(v9);
  __asm
  {
    vmovaps [rsp+8128h+var_48], xmm6
    vmovaps [rsp+8128h+var_58], xmm7
  }
  _R15 = y;
  _R13 = x;
  v17 = scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 845, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 846, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 847, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 848, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 849, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 850, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !clothState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 851, ASSERT_TYPE_ASSERT, "(clothState)", (const char *)&queryFormat, "clothState") )
    __debugbreak();
  v18 = j_va("%i: %s", (unsigned int)clothStateIdx, (const char *)((unsigned __int64)clothState->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [r15]; y
    vmovss  xmm1, dword ptr [r13+0]; x
  }
  Cloth_Debug_DrawString(v17, *(float *)&_XMM1, *(float *)&_XMM2, v18, &colorWhite);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vaddss  xmm0, xmm7, dword ptr [r15]
    vmovss  xmm6, cs:__real@41400000
    vmovss  dword ptr [r15], xmm0
    vmovss  xmm1, dword ptr [r13+0]
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [r13+0], xmm0
  }
  m_size = (unsigned int)clothState->m_usedSimCloths.m_size;
  v27 = clothState;
  if ( (int)m_size > 0 )
  {
    v28 = j_va("%i UsedSimCloths", m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [r15]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    Cloth_Debug_DrawString(v17, *(float *)&_XMM1, *(float *)&_XMM2, v28, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm0, dword ptr [r13+0]
    }
    v27 = clothState;
  }
  simClothIdIdx = 0;
  __asm
  {
    vaddss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r13+0], xmm0
  }
  m_data = v27->m_usedSimCloths.m_data;
  if ( m_data != &m_data[v27->m_usedSimCloths.m_size] )
  {
    do
    {
      HavokCloth_Debug_DrawSimClothIdDetails(v17, _R13, _R15, asset, container, clothData, clothDataIdx, *m_data, simClothIdIdx);
      v27 = clothState;
      ++m_data;
      ++simClothIdIdx;
    }
    while ( m_data != &clothState->m_usedSimCloths.m_data[clothState->m_usedSimCloths.m_size] );
    __asm { vmovss  xmm0, dword ptr [r13+0] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r13+0], xmm1
  }
  v36 = (unsigned int)v27->m_operators.m_size;
  if ( (int)v36 > 0 )
  {
    v37 = j_va("%i Operators", v36);
    __asm
    {
      vmovss  xmm2, dword ptr [r15]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    Cloth_Debug_DrawString(v17, *(float *)&_XMM1, *(float *)&_XMM2, v37, &colorWhite);
    __asm { vaddss  xmm1, xmm7, dword ptr [r15] }
    v27 = clothState;
    __asm
    {
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm1, dword ptr [r13+0]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [r13+0], xmm0
  }
  v42 = v27->m_operators.m_data;
  v43 = 0;
  if ( v42 != &v42[v27->m_operators.m_size] )
  {
    do
    {
      HavokCloth_Debug_DrawOperatorIdDetails(v17, _R13, _R15, asset, container, clothData, clothDataIdx, *v42, v43);
      v27 = clothState;
      ++v42;
      ++v43;
    }
    while ( v42 != &clothState->m_operators.m_data[clothState->m_operators.m_size] );
    __asm { vmovss  xmm0, dword ptr [r13+0] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [r13+0], xmm1
  }
  v45 = (unsigned int)v27->m_usedTransformSets.m_size;
  if ( (int)v45 > 0 )
  {
    v46 = j_va("%i Used Transform Sets", v45);
    __asm
    {
      vmovss  xmm2, dword ptr [r15]; y
      vmovss  xmm1, dword ptr [r13+0]; x
    }
    Cloth_Debug_DrawString(v17, *(float *)&_XMM1, *(float *)&_XMM2, v46, &colorWhite);
    __asm { vaddss  xmm1, xmm7, dword ptr [r15] }
    v27 = clothState;
    __asm
    {
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm1, dword ptr [r13+0]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm1, xmm6
    vmovss  dword ptr [r13+0], xmm0
  }
  v51 = v27->m_usedTransformSets.m_data;
  v52 = 0;
  v96 = 0;
  v100 = v51;
  if ( v51 == &v51[v27->m_usedTransformSets.m_size] )
  {
    __asm { vsubss  xmm0, xmm0, cs:__real@41c00000 }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+8128h+var_68], xmm8
      vmovss  xmm8, cs:__real@41c00000
    }
    v54 = clothDataIdx;
    do
    {
      v101 = v51->m_transformSetUsage.m_perComponentTransformTrackers.m_data;
      v98 = &asset->boneMappingSets[v54].boneMappings[v51->m_transformSetIndex];
      v55 = j_va("Used Transform Set %i", v52);
      __asm
      {
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      Cloth_Debug_DrawString(v17, *(float *)&_XMM1, *(float *)&_XMM2, v55, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [r15]
        vmovss  dword ptr [r15], xmm1
        vaddss  xmm0, xmm6, dword ptr [r13+0]
        vmovss  dword ptr [r13+0], xmm0
      }
      v60 = v101->m_read.m_storage.m_words.m_size;
      LODWORD(v61) = 0;
      v62 = v101->m_read.m_storage.m_words.m_data;
      v63 = 0;
      numTags = 0;
      v94 = 0;
      if ( v60 )
        v63 = *v62;
      while ( v63 )
      {
LABEL_41:
        v64 = __lzcnt(v63);
        if ( v64 >= 0x20 )
        {
          LODWORD(clothDataIdxa) = 32;
          LODWORD(clothDataa) = v64;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", clothDataa, clothDataIdxa) )
            __debugbreak();
        }
        if ( (v63 & (0x80000000 >> v64)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v63 &= ~(0x80000000 >> v64);
        tagNames[numTags++] = v98->scrTagNames[((_DWORD)v61 << 6) - (v64 + 32 * (_DWORD)v61) + 31];
      }
      while ( 1 )
      {
        v61 = (unsigned int)(v61 + 1);
        if ( (unsigned int)v61 >= v60 )
          break;
        v63 = v62[v61];
        if ( v63 )
          goto LABEL_41;
      }
      LODWORD(v65) = 0;
      v66 = 0;
      v67 = v101->m_written.m_storage.m_words.m_size;
      v68 = v101->m_written.m_storage.m_words.m_data;
      if ( v67 )
        v66 = *v68;
      v69 = 0;
      while ( v66 )
      {
LABEL_54:
        v70 = __lzcnt(v66);
        if ( v70 >= 0x20 )
        {
          LODWORD(clothDataIdxa) = 32;
          LODWORD(clothDataa) = v70;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", clothDataa, clothDataIdxa) )
            __debugbreak();
        }
        if ( (v66 & (0x80000000 >> v70)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v66 &= ~(0x80000000 >> v70);
        v105[v94] = v98->scrTagNames[((_DWORD)v65 << 6) - (v70 + 32 * (_DWORD)v65) + 31];
        v69 = ++v94;
      }
      while ( 1 )
      {
        v65 = (unsigned int)(v65 + 1);
        if ( (unsigned int)v65 >= v67 )
          break;
        v66 = v68[v65];
        if ( v66 )
          goto LABEL_54;
      }
      v71 = j_va("%i Read Bones", numTags);
      _R15 = y;
      _R13 = x;
      v17 = scrPlace;
      __asm
      {
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v71, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [r15]
        vmovss  dword ptr [r15], xmm1
        vmovss  xmm2, dword ptr [r13+0]
      }
      v76 = 0;
      __asm
      {
        vaddss  xmm0, xmm2, xmm6
        vmovss  dword ptr [r13+0], xmm0
      }
      if ( numTags )
      {
        do
        {
          HavokCloth_Debug_DrawTags(scrPlace, x, y, tagNames, numTags, v76);
          v76 += 5;
        }
        while ( v76 < numTags );
        __asm { vmovss  xmm0, dword ptr [r13+0] }
      }
      __asm
      {
        vsubss  xmm0, xmm0, xmm6
        vmovss  dword ptr [r13+0], xmm0
      }
      v79 = j_va("%i Written Bones", v69);
      __asm
      {
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [r13+0]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v79, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [r15]
        vmovss  dword ptr [r15], xmm1
        vmovss  xmm2, dword ptr [r13+0]
      }
      v84 = 0;
      __asm
      {
        vaddss  xmm0, xmm2, xmm6
        vmovss  dword ptr [r13+0], xmm0
      }
      if ( v69 )
      {
        do
        {
          HavokCloth_Debug_DrawTags(scrPlace, x, y, v105, v69, v84);
          v84 += 5;
        }
        while ( v84 < v69 );
        __asm { vmovss  xmm0, dword ptr [r13+0] }
      }
      v51 = v100 + 1;
      v54 = clothDataIdx;
      v52 = v96 + 1;
      __asm
      {
        vsubss  xmm1, xmm0, xmm8
        vmovss  dword ptr [r13+0], xmm1
      }
      v100 = v51;
      ++v96;
    }
    while ( v51 != &clothState->m_usedTransformSets.m_data[clothState->m_usedTransformSets.m_size] );
    __asm
    {
      vsubss  xmm0, xmm1, xmm8
      vmovaps xmm8, [rsp+8128h+var_68]
    }
  }
  __asm { vmovss  dword ptr [r13+0], xmm0 }
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
HavokCloth_Debug_DrawHavokClothInstanceDetails
==============
*/
void HavokCloth_Debug_DrawHavokClothInstanceDetails(const ScreenPlacement *scrPlace, float *x, float *y, const hclClothInstance *const clothInstance, const unsigned int clothInstanceIdx)
{
  const hclClothInstance *v11; 
  const ScreenPlacement *v14; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclClothState *v17; 
  const char *v18; 
  __int64 m_stateTransitionIndex; 
  hclStateTransition *v26; 
  __int64 v27; 
  __int64 v28; 
  const hclClothState *v29; 
  const hclClothState *v30; 
  const char *v31; 
  const hclClothState *v35; 
  __int64 m_size; 
  const char *v37; 
  __int64 v45; 
  __int64 v46; 
  const hclSimClothData *v47; 
  const hclSimClothData::OverridableSimulationInfo *SimulationInfo; 
  const char *v50; 
  const char *v75; 
  char *fmt; 
  __int64 v90; 
  __int64 v91; 
  unsigned int v92; 
  unsigned int v93; 
  const hclClothState *v96; 
  __int64 v97; 
  char v104; 

  v11 = clothInstance;
  __asm { vmovaps [rsp+118h+var_78], xmm8 }
  _R15 = y;
  __asm { vmovaps [rsp+118h+var_88], xmm9 }
  _RDI = x;
  v14 = scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1299, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1300, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1301, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1302, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = v11->m_clothData;
  if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1306, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  m_currentState = (int)v11->m_currentState;
  if ( (unsigned int)m_currentState >= m_clothData->m_clothStateDatas.m_size )
  {
    LODWORD(v90) = v11->m_currentState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1310, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "stateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v90, m_clothData->m_clothStateDatas.m_size) )
      __debugbreak();
  }
  v17 = m_clothData->m_clothStateDatas.m_data[m_currentState];
  v96 = v17;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1312, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  v18 = j_va("%i: State %i %s", clothInstanceIdx, (unsigned int)m_currentState, (const char *)((unsigned __int64)v17->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [r15]; y
    vmovss  xmm1, dword ptr [rdi]; x
  }
  Cloth_Debug_DrawString(v14, *(float *)&_XMM1, *(float *)&_XMM2, v18, &colorWhite);
  __asm
  {
    vmovss  xmm9, cs:__real@41000000
    vaddss  xmm0, xmm9, dword ptr [r15]
    vmovss  xmm8, cs:__real@41400000
    vmovss  dword ptr [r15], xmm0
    vaddss  xmm0, xmm8, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
  }
  m_stateTransitionIndex = (int)v11->m_stateTransitionIndex;
  v92 = m_stateTransitionIndex;
  if ( (_DWORD)m_stateTransitionIndex != 0x7FFFFFFF )
  {
    v26 = (hclStateTransition *)m_clothData->m_stateTransitions.m_data[m_stateTransitionIndex];
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1327, ASSERT_TYPE_ASSERT, "(stateTransition)", (const char *)&queryFormat, "stateTransition") )
      __debugbreak();
    v27 = (int)hclStateTransition::getFromState(v26);
    v28 = (int)hclStateTransition::getToState(v26);
    if ( (unsigned int)v27 >= m_clothData->m_clothStateDatas.m_size )
    {
      LODWORD(v91) = m_clothData->m_clothStateDatas.m_size;
      LODWORD(v90) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1332, ASSERT_TYPE_ASSERT, "(unsigned)( startStateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "startStateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v90, v91) )
        __debugbreak();
    }
    if ( (unsigned int)v28 >= m_clothData->m_clothStateDatas.m_size )
    {
      LODWORD(v91) = m_clothData->m_clothStateDatas.m_size;
      LODWORD(v90) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1333, ASSERT_TYPE_ASSERT, "(unsigned)( endStateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "endStateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v90, v91) )
        __debugbreak();
    }
    v29 = m_clothData->m_clothStateDatas.m_data[v27];
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1337, ASSERT_TYPE_ASSERT, "(startState)", (const char *)&queryFormat, "startState") )
      __debugbreak();
    v30 = m_clothData->m_clothStateDatas.m_data[v28];
    if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1339, ASSERT_TYPE_ASSERT, "(endState)", (const char *)&queryFormat, "endState") )
      __debugbreak();
    LODWORD(v90) = v28;
    v31 = j_va("Transitioning with transition %i %s from state %i %s to %i %s", v92, (const char *)((unsigned __int64)v26->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64), (unsigned int)v27, (const char *)((unsigned __int64)v29->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64), v90, (const char *)((unsigned __int64)v30->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
    v14 = scrPlace;
    __asm
    {
      vmovss  xmm2, dword ptr [r15]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v31, &colorWhite);
    __asm { vaddss  xmm1, xmm9, dword ptr [r15] }
    v11 = clothInstance;
    __asm { vmovss  dword ptr [r15], xmm1 }
  }
  v35 = v96;
  m_size = v96->m_usedSimCloths.m_size;
  if ( (int)m_size <= 0 )
  {
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  else
  {
    v37 = j_va("%i Used Sim Cloths", (unsigned int)m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [r15]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(v14, *(float *)&_XMM1, *(float *)&_XMM2, v37, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm9, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm2, dword ptr [rdi]
    }
    v97 = m_size;
    v93 = 0;
    __asm
    {
      vaddss  xmm0, xmm2, xmm8
      vmovss  dword ptr [rdi], xmm0
    }
    if ( (int)m_size > 0 )
    {
      __asm
      {
        vmovaps [rsp+118h+var_98], xmm10
        vmovss  xmm10, cs:__real@42000000
        vmovaps [rsp+118h+var_A8], xmm11
        vmovss  xmm11, cs:__real@44800000
        vmovaps [rsp+118h+var_58], xmm6
      }
      v45 = 0i64;
      __asm { vmovaps [rsp+118h+var_68], xmm7 }
      do
      {
        v46 = (int)v35->m_usedSimCloths.m_data[v45];
        if ( (unsigned int)v46 >= m_clothData->m_simClothDatas.m_size )
        {
          LODWORD(v91) = m_clothData->m_simClothDatas.m_size;
          LODWORD(v90) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1359, ASSERT_TYPE_ASSERT, "(unsigned)( simClothIdx ) < (unsigned)( clothData->m_simClothDatas.getSize() )", "simClothIdx doesn't index clothData->m_simClothDatas.getSize()\n\t%i not in [0, %i)", v90, v91) )
            __debugbreak();
        }
        v47 = m_clothData->m_simClothDatas.m_data[v46];
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1363, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
          __debugbreak();
        _R12 = v11->m_simClothInstances.m_data[v46];
        if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1367, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance") )
          __debugbreak();
        SimulationInfo = hclSimClothInstance::getSimulationInfo(_R12);
        v50 = j_va("%i: Simcloth %i %s", v93, (unsigned int)v46, (const char *)((unsigned __int64)v47->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
        __asm
        {
          vmovss  xmm2, dword ptr [r15]; y
          vmovss  xmm1, dword ptr [rdi]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v50, &colorWhite);
        __asm
        {
          vaddss  xmm1, xmm9, dword ptr [r15]
          vmovss  dword ptr [r15], xmm1
          vaddss  xmm0, xmm8, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
        }
        if ( SimulationInfo->m_computeVelocity.m_bool )
        {
          __asm
          {
            vmovss  xmm7, dword ptr [r12+240h]
            vmovss  xmm6, dword ptr [r12+244h]
            vmovss  xmm5, dword ptr [r12+248h]
            vmulss  xmm1, xmm6, xmm6
            vmulss  xmm0, xmm7, xmm7
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm2, xmm2, xmm1
            vmulss  xmm0, xmm2, xmm11
            vsqrtss xmm3, xmm0, xmm0
            vmulss  xmm1, xmm5, xmm10
            vcvtss2sd xmm4, xmm3, xmm3
            vcvtss2sd xmm3, xmm1, xmm1
            vmulss  xmm1, xmm7, xmm10
            vmulss  xmm0, xmm6, xmm10
            vcvtss2sd xmm1, xmm1, xmm1
            vcvtss2sd xmm2, xmm0, xmm0
            vmovq   rdx, xmm1
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+118h+fmt], xmm4
          }
          v75 = j_va("Computed average velocity of (%.2f, %.2f, %.2f) and speed of %.2f", _RDX, _R8, _R9, fmt);
          __asm
          {
            vmovss  xmm2, dword ptr [r15]; y
            vmovss  xmm1, dword ptr [rdi]; x
          }
          Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v75, &colorWhite);
          __asm
          {
            vaddss  xmm1, xmm9, dword ptr [r15]
            vmovss  dword ptr [r15], xmm1
          }
        }
        __asm { vmovss  xmm0, dword ptr [rdi] }
        v11 = clothInstance;
        v35 = v96;
        ++v45;
        __asm
        {
          vsubss  xmm0, xmm0, xmm8
          vmovss  dword ptr [rdi], xmm0
        }
        ++v93;
      }
      while ( v45 < v97 );
      __asm
      {
        vmovaps xmm11, [rsp+118h+var_A8]
        vmovaps xmm10, [rsp+118h+var_98]
        vmovaps xmm7, [rsp+118h+var_68]
        vmovaps xmm6, [rsp+118h+var_58]
      }
    }
    __asm { vsubss  xmm0, xmm0, xmm8 }
  }
  __asm { vsubss  xmm1, xmm0, xmm8 }
  _R11 = &v104;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawInstanceDetails
==============
*/
void HavokCloth_Debug_DrawInstanceDetails(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  signed __int64 v4; 
  void *v8; 
  const ClothAsset *v13; 
  unsigned int InstanceRuntimeMemoryRequirements; 
  const char *v16; 
  HavokCloth_Update_StateId TargetStateId; 
  const char *v21; 
  unsigned int NumClothInstances; 
  unsigned int v26; 
  const char *v28; 
  unsigned int activeCollidableDataIdx; 
  unsigned int v33; 
  const hclClothInstance *ClothInstance; 
  unsigned int v36; 
  const char *v37; 
  const char *v46; 
  const char *v52; 
  unsigned int numCollidables; 
  float speed[2]; 
  HavokCloth_ActiveCollidableData outputBuffer[256]; 

  v8 = alloca(v4);
  __asm
  {
    vmovaps [rsp+18C8h+var_58], xmm6
    vmovaps [rsp+18C8h+var_68], xmm7
  }
  _RBX = y;
  _RSI = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1404, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1405, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1406, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1407, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  *(_QWORD *)speed = HavokCloth_GetClothAsset(0, instanceId);
  v13 = *(const ClothAsset **)speed;
  if ( !*(_QWORD *)speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1411, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  InstanceRuntimeMemoryRequirements = HavokCloth_GetInstanceRuntimeMemoryRequirements(0, instanceId);
  __asm { vmovss  xmm6, cs:__real@41000000 }
  if ( InstanceRuntimeMemoryRequirements )
  {
    v16 = j_va("Runtime Memory Requirements: %i bytes", InstanceRuntimeMemoryRequirements);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v16, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  TargetStateId = HavokCloth_Update_GetTargetStateId(0, instanceId);
  if ( TargetStateId )
  {
    if ( TargetStateId == HAVOK_CLOTH_UPDATE_STATEID_ANIMATED )
      v21 = j_va("Too far away for simulation - targeting Animated state");
    else
      v21 = j_va("Targeting Simulation LOD %i", (unsigned int)(TargetStateId - 2));
  }
  else
  {
    v21 = j_va("Not updated last frame - Forcing Animated state until next update");
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v21, &colorWhite);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
  }
  NumClothInstances = HavokCloth_GetNumClothInstances(0, instanceId);
  v26 = NumClothInstances;
  __asm { vmovss  xmm7, cs:__real@41400000 }
  if ( NumClothInstances )
  {
    v28 = j_va("%i Havok Cloth Instances", NumClothInstances);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v28, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
  }
  activeCollidableDataIdx = 0;
  v33 = 0;
  if ( v26 )
  {
    do
    {
      ClothInstance = HavokCloth_GetClothInstance(0, instanceId, v33);
      if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1460, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      HavokCloth_Debug_DrawHavokClothInstanceDetails(scrPlace, _RSI, _RBX, ClothInstance, v33++);
    }
    while ( v33 < v26 );
    v13 = *(const ClothAsset **)speed;
    activeCollidableDataIdx = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi], xmm1
    }
  }
  numCollidables = 0;
  HavokCloth_GetActiveCollidables(0, instanceId, outputBuffer, 0x100u, &numCollidables, 1);
  v36 = numCollidables;
  if ( numCollidables )
  {
    v37 = j_va("%i Active Collidables", numCollidables);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v37, &colorWhite);
    __asm { vaddss  xmm1, xmm6, dword ptr [rbx] }
    v36 = numCollidables;
    __asm
    {
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm7, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
  }
  if ( v36 )
  {
    do
    {
      HavokCloth_Debug_DrawActiveCollidableDetails(scrPlace, _RSI, _RBX, instanceId, v13, &outputBuffer[activeCollidableDataIdx], activeCollidableDataIdx);
      ++activeCollidableDataIdx;
    }
    while ( activeCollidableDataIdx < numCollidables );
    if ( numCollidables )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsi], xmm1
      }
    }
  }
  if ( HavokCloth_Update_GetNeedsSoundUpdate(0, instanceId) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+18C8h+speed], xmm0
    }
    if ( HavokCloth_GetSimulatedSpeed(0, instanceId, speed) )
    {
      __asm
      {
        vmovss  xmm1, [rsp+18C8h+speed]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v46 = j_va("Simulated Speed: %.2f", _RDX);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [rsi]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v46, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    *(double *)&_XMM0 = HavokCloth_GetBlendedSpeed(0, instanceId);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovq   rdx, xmm1
    }
    v52 = j_va("Blended Speed:   %.2f", _RDX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rsi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v52, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+18C8h+var_58]
    vmovaps xmm7, [rsp+18C8h+var_68]
  }
}

/*
==============
HavokCloth_Debug_DrawInstanceVectorField
==============
*/
void HavokCloth_Debug_DrawInstanceVectorField(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  __int64 v9; 
  const ClothAsset *ClothAsset; 
  const char *v50; 
  const char *v60; 
  vec3_t center; 
  vec3_t end; 
  vec3_t v69; 
  vec3_t xyz; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  v9 = instanceId;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1515, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1516, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1517, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( (_DWORD)v9 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1518, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  ClothAsset = HavokCloth_GetClothAsset(0, v9);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1522, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  if ( !ClothAsset->vectorFieldSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1523, ASSERT_TYPE_ASSERT, "(clothAsset->vectorFieldSupport)", (const char *)&queryFormat, "clothAsset->vectorFieldSupport") )
    __debugbreak();
  __asm { vmovss  xmm3, cs:__real@3c23d70a }
  _RBX = 9 * v9;
  _RDI = s_HavokCloth_Debug_VectorFieldData;
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+rbx*4]
    vmovss  xmm5, dword ptr [rdi+rbx*4+4]
    vmovss  xmm6, dword ptr [rdi+rbx*4+8]
    vmulss  xmm0, xmm3, dword ptr [rdi+rbx*4+0Ch]
    vaddss  xmm1, xmm0, xmm4
    vmulss  xmm0, xmm3, dword ptr [rdi+rbx*4+10h]
    vmovss  dword ptr [rsp+0C8h+end], xmm1
    vaddss  xmm1, xmm0, xmm5
    vmulss  xmm0, xmm3, dword ptr [rdi+rbx*4+14h]
    vmovss  dword ptr [rsp+0C8h+end+4], xmm1
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rsp+0C8h+end+8], xmm1
    vmulss  xmm1, xmm3, dword ptr [rdi+rbx*4+18h]
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm3, dword ptr [rdi+rbx*4+1Ch]
    vmovss  dword ptr [rsp+0C8h+var_78], xmm2
    vaddss  xmm2, xmm1, xmm5
    vmulss  xmm1, xmm3, dword ptr [rdi+rbx*4+20h]
    vmovss  dword ptr [rsp+0C8h+var_78+4], xmm2
    vaddss  xmm2, xmm1, xmm6
    vmovss  xmm1, cs:__real@3f800000; radius
    vmovss  dword ptr [rsp+0C8h+var_78+8], xmm2
    vmovss  dword ptr [rsp+0C8h+center], xmm4
    vmovss  dword ptr [rsp+0C8h+center+4], xmm5
    vmovss  dword ptr [rsp+0C8h+center+8], xmm6
  }
  CG_DebugSphere(&center, *(float *)&_XMM1, &colorYellow, 0, 0);
  CL_AddDebugLine(&center, &end, &colorYellow, 0, 0, 0);
  CL_AddDebugLine(&center, &v69, &colorBlue, 0, 0, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+center]
    vmovss  xmm1, dword ptr [rsp+0C8h+center+4]
    vmovss  xmm4, dword ptr [rdi+rbx*4+10h]
    vmovss  xmm3, dword ptr [rdi+rbx*4+0Ch]
    vmovss  xmm5, dword ptr [rdi+rbx*4+14h]
    vmovss  xmm7, dword ptr [rdi+rbx*4+1Ch]
    vmovss  xmm8, dword ptr [rdi+rbx*4+18h]
    vmovss  xmm9, dword ptr [rdi+rbx*4+20h]
    vmovss  dword ptr [rsp+0C8h+xyz], xmm0
    vmovss  xmm0, dword ptr [rsp+0C8h+center+8]
    vsubss  xmm2, xmm0, cs:__real@40c00000
    vmovss  dword ptr [rsp+0C8h+xyz+4], xmm1
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vmovss  dword ptr [rsp+0C8h+xyz+8], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovq   rdx, xmm1
  }
  v50 = j_va("Velocity: %.2f", _RDX);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  CL_AddDebugString(&center, &colorYellow, *(float *)&_XMM2, v50, 0, 0);
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm3, xmm3, xmm1
    vsqrtss xmm0, xmm3, xmm3
    vcvtss2sd xmm1, xmm0, xmm0
    vmovq   rdx, xmm1
  }
  v60 = j_va("Force: %.2f", _RDX);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  CL_AddDebugString(&xyz, &colorBlue, *(float *)&_XMM2, v60, 0, 0);
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
HavokCloth_Debug_DrawOperatorDetails
==============
*/
void HavokCloth_Debug_DrawOperatorDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclOperator *op, int opIdx)
{
  const char *v15; 
  const char *v22; 
  __int64 m_size; 
  const char *v27; 
  hclClothState::BufferAccess *m_data; 
  unsigned int v34; 
  __int64 m_bufferIndex; 
  const char *v36; 
  __int64 v41; 
  const char *v42; 
  hclClothState::TransformSetAccess *v47; 
  unsigned int v48; 
  const char *v49; 
  char *fmt; 
  const char *v58; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps [rsp+78h+var_48], xmm7
  }
  _RBP = y;
  _RBX = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 728, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 729, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 730, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 731, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 732, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 733, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !op && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 734, ASSERT_TYPE_ASSERT, "(op)", (const char *)&queryFormat, "op") )
    __debugbreak();
  v15 = j_va("%i: %s", (unsigned int)opIdx, (const char *)((unsigned __int64)op->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rbx]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v15, &colorWhite);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vaddss  xmm0, xmm7, dword ptr [rbp+0]
    vmovss  xmm6, cs:__real@41400000
    vmovss  dword ptr [rbp+0], xmm0
    vaddss  xmm0, xmm6, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  v22 = j_va("ID: %i - Type: %s", op->m_operatorID, s_HavokCloth_OperatorTypeNames[op->m_type.m_storage]);
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rbx]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v22, &colorWhite);
  __asm
  {
    vaddss  xmm1, xmm7, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm1
  }
  m_size = (unsigned int)op->m_usedBuffers.m_size;
  if ( (int)m_size > 0 )
  {
    v27 = j_va("%i UsedBuffers", m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [rbx]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v27, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm1
  }
  m_data = op->m_usedBuffers.m_data;
  v34 = 0;
  if ( m_data != &m_data[op->m_usedBuffers.m_size] )
  {
    do
    {
      if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 516, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 519, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 520, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
        __debugbreak();
      if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 521, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      m_bufferIndex = (int)m_data->m_bufferIndex;
      v58 = (const char *)((unsigned __int64)clothData->m_bufferDefinitions.m_data[m_bufferIndex]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
      LODWORD(fmt) = m_data->m_shadowBufferIndex;
      v36 = j_va("%i: Buffer %i %s - ShadowBuffer %i %s", v34, m_bufferIndex, v58, fmt, v58);
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [rbx]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v36, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
      }
      ++m_data;
      ++v34;
    }
    while ( m_data != &op->m_usedBuffers.m_data[op->m_usedBuffers.m_size] );
    __asm { vmovss  xmm1, dword ptr [rbx] }
  }
  __asm
  {
    vsubss  xmm0, xmm1, xmm6
    vmovss  dword ptr [rbx], xmm0
  }
  v41 = (unsigned int)op->m_usedTransformSets.m_size;
  if ( (int)v41 > 0 )
  {
    v42 = j_va("%i UsedTransformSets", v41);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [rbx]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v42, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
      vmovss  xmm0, dword ptr [rbx]
    }
  }
  __asm
  {
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx], xmm1
  }
  v47 = op->m_usedTransformSets.m_data;
  if ( v47 == &v47[op->m_usedTransformSets.m_size] )
  {
    __asm { vsubss  xmm1, xmm1, cs:__real@41c00000 }
  }
  else
  {
    v48 = 0;
    do
    {
      if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 538, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 541, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 542, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
        __debugbreak();
      if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 543, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      v49 = j_va("%i: Transform Set %i %s", v48, (int)v47->m_transformSetIndex, (const char *)((unsigned __int64)clothData->m_transformSetDefinitions.m_data[v47->m_transformSetIndex]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [rbx]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v49, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
      }
      ++v47;
      ++v48;
    }
    while ( v47 != &op->m_usedTransformSets.m_data[op->m_usedTransformSets.m_size] );
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, cs:__real@41c00000
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawOperatorIdDetails
==============
*/
void HavokCloth_Debug_DrawOperatorIdDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const unsigned int operatorId, int operatorIdIdx)
{
  const char *v13; 

  _RDI = y;
  _RSI = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 558, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 559, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 560, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 561, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 562, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 563, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  v13 = j_va("%i: Operator %i %s", (unsigned int)operatorIdIdx, (int)operatorId, (const char *)((unsigned __int64)clothData->m_operators.m_data[operatorId]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawShapeDetails
==============
*/
void HavokCloth_Debug_DrawShapeDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclShape *shape)
{
  __int64 m_storage; 
  const char *v14; 
  const char *v36; 
  const char *v98; 
  hkMemoryAllocator *v102; 
  hkMemoryAllocator *v103; 
  char *fmt; 
  char *fmta; 
  hkGeometry geometry; 
  __int64 v114; 
  void *retaddr; 

  _RAX = &retaddr;
  v114 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = y;
  _RDI = x;
  _RSI = shape;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 226, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 227, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 228, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 229, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  m_storage = shape->m_type.m_storage;
  v14 = j_va("Shape: %s", s_HavokCloth_ShapeNames[m_storage]);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [rdi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v14, &colorWhite);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vaddss  xmm0, xmm7, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr [rdi]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rdi], xmm0
  }
  switch ( (int)m_storage )
  {
    case 0:
      __asm
      {
        vmovss  xmm5, cs:__real@42000000; jumptable 0000000141F8802E case 0
        vmulss  xmm0, xmm5, dword ptr [rsi+2Ch]
        vcvtss2sd xmm6, xmm0, xmm0
        vmovss  xmm1, dword ptr [rsi+28h]
        vmulss  xmm2, xmm1, xmm5
        vcvtss2sd xmm3, xmm2, xmm2
        vmovss  xmm0, dword ptr [rsi+24h]
        vmulss  xmm1, xmm0, xmm5
        vcvtss2sd xmm2, xmm1, xmm1
        vmovss  xmm4, dword ptr [rsi+20h]
        vmulss  xmm0, xmm4, xmm5
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+0C0h+fmt], xmm6
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v36 = j_va("Pos:(%.2f, %.2f, %.2f) - Radius:%.2f", _RDX, _R8, _R9, fmt);
      goto LABEL_24;
    case 1:
      __asm
      {
        vmovss  xmm5, dword ptr [rsi+2Ch]; jumptable 0000000141F8802E case 1
        vcvtss2sd xmm5, xmm5, xmm5
        vmovss  xmm4, cs:__real@42000000
        vmulss  xmm0, xmm4, dword ptr [rsi+28h]
        vcvtss2sd xmm3, xmm0, xmm0
        vmovss  xmm1, dword ptr [rsi+24h]
        vmulss  xmm2, xmm1, xmm4
        vcvtss2sd xmm2, xmm2, xmm2
        vmovss  xmm0, dword ptr [rsi+20h]
        vmulss  xmm1, xmm0, xmm4
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0C0h+fmt], xmm5
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v36 = j_va("Plane Equation:(%.2f, %.2f, %.2f, %.2f)", _RDX, _R8, _R9, fmta);
      goto LABEL_24;
    case 2:
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+20h]; jumptable 0000000141F8802E case 2
        vsubps  xmm1, xmm0, xmmword ptr [rsi+30h]
        vdpps   xmm6, xmm1, xmm1, 7Fh
        vrsqrtps xmm4, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcmpleps xmm5, xmm6, xmm0
        vmulps  xmm1, xmm4, xmm6
        vmulps  xmm2, xmm1, xmm4
        vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vsubps  xmm3, xmm0, xmm2
        vmulps  xmm1, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vmulps  xmm2, xmm3, xmm1
        vmulps  xmm0, xmm2, xmm6
        vandnps xmm4, xmm5, xmm0
        vmovss  xmm1, dword ptr [rsi+50h]
        vmulss  xmm0, xmm1, cs:__real@42000000
        vcvtss2sd xmm2, xmm0, xmm0
        vmulss  xmm1, xmm4, cs:__real@42000000
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v36 = j_va("Length:%.2f - Radius:%.2f", _RDX, _R8);
      goto LABEL_24;
    case 3:
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+20h]; jumptable 0000000141F8802E case 3
        vsubps  xmm1, xmm0, xmmword ptr [rsi+30h]
        vdpps   xmm6, xmm1, xmm1, 7Fh
        vrsqrtps xmm4, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcmpleps xmm5, xmm6, xmm0
        vmulps  xmm1, xmm4, xmm6
        vmulps  xmm2, xmm1, xmm4
        vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vsubps  xmm3, xmm0, xmm2
        vmulps  xmm1, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vmulps  xmm2, xmm3, xmm1
        vmulps  xmm0, xmm2, xmm6
        vandnps xmm5, xmm5, xmm0
        vmovss  xmm1, dword ptr [rsi+90h]
        vmovss  xmm4, cs:__real@42000000
        vmulss  xmm2, xmm1, xmm4
        vmovss  xmm0, dword ptr [rsi+94h]
        vmulss  xmm1, xmm0, xmm4
        vcvtss2sd xmm3, xmm1, xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmulss  xmm0, xmm5, xmm4
        vcvtss2sd xmm1, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v36 = j_va("Length:%.2f - Radii:(%.2f, %.2f)", _RDX, _R8, _R9);
      goto LABEL_24;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
      goto $LN14_151;
    case 9:
      geometry.m_propertyBag.m_bag = NULL;
      *(_DWORD *)&geometry.m_memSizeAndFlags = 0x1FFFF;
      geometry.__vftable = (hkGeometry_vtbl *)hkGeometry::`vftable';
      geometry.m_vertices.m_data = NULL;
      geometry.m_vertices.m_size = 0;
      geometry.m_vertices.m_capacityAndFlags = 0x80000000;
      geometry.m_triangles.m_data = NULL;
      geometry.m_triangles.m_size = 0;
      geometry.m_triangles.m_capacityAndFlags = 0x80000000;
      hclConvexGeometryShape::getGeometry((hclConvexGeometryShape *)shape, &geometry);
      v98 = j_va("Verts:%i - Tris:%i", (unsigned int)geometry.m_vertices.m_size, (unsigned int)geometry.m_triangles.m_size);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [rdi]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v98, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
      geometry.__vftable = (hkGeometry_vtbl *)hkGeometry::`vftable';
      v102 = hkMemHeapAllocator();
      geometry.m_triangles.m_size = 0;
      if ( geometry.m_triangles.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v102, geometry.m_triangles.m_data, 16, geometry.m_triangles.m_capacityAndFlags & 0x3FFFFFFF);
      geometry.m_triangles.m_data = NULL;
      geometry.m_triangles.m_capacityAndFlags = 0x80000000;
      v103 = hkMemHeapAllocator();
      geometry.m_vertices.m_size = 0;
      if ( geometry.m_vertices.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v103, geometry.m_vertices.m_data, 16, geometry.m_vertices.m_capacityAndFlags & 0x3FFFFFFF);
      geometry.m_vertices.m_data = NULL;
      geometry.m_vertices.m_capacityAndFlags = 0x80000000;
      hkReferencedObject::~hkReferencedObject(&geometry);
      goto $LN14_151;
    default:
      v36 = j_va("Unknown Shape Type: %i", (unsigned int)m_storage);
LABEL_24:
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [rdi]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v36, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
$LN14_151:
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]; jumptable 0000000141F8802E cases 4-8,10,11
        vsubss  xmm1, xmm0, cs:__real@41400000
        vmovss  dword ptr [rdi], xmm1
        vmovaps xmm6, xmmword ptr [rsp+0C0h+var_48+8]
        vmovaps xmm7, [rsp+0C0h+var_58+8]
      }
      return;
  }
}

/*
==============
HavokCloth_Debug_DrawSimClothDataDetails
==============
*/
void HavokCloth_Debug_DrawSimClothDataDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclSimClothData *simClothData, int simClothDataIdx)
{
  const char *v15; 
  const char *v35; 
  const char *v39; 
  __int64 m_size; 
  const char *v44; 
  unsigned int *m_data; 
  int operatorIdIdx; 

  _RBP = simClothData;
  _R14 = y;
  _RDI = x;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 790, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 791, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 792, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 793, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 794, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 795, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !simClothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 796, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
    __debugbreak();
  v15 = j_va("%i: %s", (unsigned int)simClothDataIdx, (const char *)((unsigned __int64)simClothData->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [r14]; y
    vmovss  xmm1, dword ptr [rdi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v15, &colorWhite);
  __asm
  {
    vmovss  xmm4, cs:__real@42000000
    vmovss  xmm6, cs:__real@41000000
    vaddss  xmm0, xmm6, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm1, dword ptr [rdi]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbp+28h]
    vmulss  xmm0, xmm1, xmm4
    vmovss  xmm1, dword ptr [rbp+24h]
    vmulss  xmm2, xmm1, xmm4
    vcvtss2sd xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rbp+20h]
    vmulss  xmm1, xmm0, xmm4
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovq   rdx, xmm1
    vmovq   r9, xmm3
    vmovq   r8, xmm2
  }
  v35 = j_va("Gravity: (%.2f %.2f %.2f)", _RDX, _R8, _R9);
  __asm
  {
    vmovss  xmm2, dword ptr [r14]; y
    vmovss  xmm1, dword ptr [rdi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v35, &colorWhite);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [r14]
    vmovss  dword ptr [r14], xmm1
  }
  if ( simClothData->m_simulationInfo.m_computeVelocity.m_bool )
  {
    v39 = j_va("Requests Velocity be computed");
    __asm
    {
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v39, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
    }
  }
  m_size = (unsigned int)simClothData->m_simOpIds.m_size;
  if ( (int)m_size > 0 )
  {
    v44 = j_va("%i Operators", m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [rdi]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v44, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, cs:__real@41400000
    vmovss  dword ptr [rdi], xmm1
  }
  m_data = simClothData->m_simOpIds.m_data;
  operatorIdIdx = 0;
  if ( m_data == &m_data[simClothData->m_simOpIds.m_size] )
  {
    __asm { vsubss  xmm1, xmm1, cs:__real@41c00000 }
  }
  else
  {
    do
      HavokCloth_Debug_DrawOperatorIdDetails(scrPlace, _RDI, _R14, asset, container, clothData, clothDataIdx, *m_data++, operatorIdIdx++);
    while ( m_data != &simClothData->m_simOpIds.m_data[simClothData->m_simOpIds.m_size] );
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, cs:__real@41c00000
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawSimClothIdDetails
==============
*/
void HavokCloth_Debug_DrawSimClothIdDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const unsigned int simClothId, int simClothIdIdx)
{
  const hclSimClothData *v14; 
  const char *v15; 
  __int64 m_size; 
  const char *v23; 
  const hclCollidable **m_data; 
  unsigned int v30; 
  const hclCollidable *v31; 
  const char *v32; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _RBP = y;
  _RBX = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 576, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 577, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 578, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 579, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 580, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 581, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  v14 = clothData->m_simClothDatas.m_data[simClothId];
  v15 = j_va("%i: Sim Cloth %i %s", (unsigned int)simClothIdIdx, (int)simClothId, (const char *)((unsigned __int64)v14->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rbx]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v15, &colorWhite);
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vaddss  xmm0, xmm6, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm1, dword ptr [rbx]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rbx], xmm0
  }
  m_size = (unsigned int)v14->m_perInstanceCollidables.m_size;
  if ( (int)m_size <= 0 )
  {
    if ( !container->m_collidables.m_size )
      goto LABEL_24;
    v23 = j_va("No Active Collidables");
  }
  else
  {
    v23 = j_va("%i Active Collidables", m_size);
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rbx]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v23, &colorWhite);
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm1
  }
LABEL_24:
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm1, xmm0, cs:__real@41400000
    vmovss  dword ptr [rbx], xmm1
  }
  m_data = v14->m_perInstanceCollidables.m_data;
  v30 = 0;
  if ( m_data == &m_data[v14->m_perInstanceCollidables.m_size] )
  {
    __asm { vsubss  xmm1, xmm1, cs:__real@41c00000 }
  }
  else
  {
    do
    {
      v31 = *m_data;
      if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 612, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
        __debugbreak();
      v32 = j_va("%i - %s", v30, (const char *)((unsigned __int64)v31->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [rbx]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v32, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
      }
      ++m_data;
      ++v30;
    }
    while ( m_data != &v14->m_perInstanceCollidables.m_data[v14->m_perInstanceCollidables.m_size] );
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, cs:__real@41c00000
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_38]
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawStateTransitionDetails
==============
*/
void HavokCloth_Debug_DrawStateTransitionDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclStateTransition *stateTransition, int stateTransitionIdx)
{
  const char *v15; 
  __int64 m_size; 
  const char *v23; 
  unsigned int *m_data; 
  __int64 v29; 
  const char *v30; 
  unsigned int containera; 

  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  _RBP = y;
  _RBX = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 984, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 985, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 986, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 987, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 988, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 989, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !stateTransition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 990, ASSERT_TYPE_ASSERT, "(stateTransition)", (const char *)&queryFormat, "stateTransition") )
    __debugbreak();
  v15 = j_va("%i: %s", (unsigned int)stateTransitionIdx, (const char *)((unsigned __int64)stateTransition->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rbx]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v15, &colorWhite);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vaddss  xmm0, xmm7, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm1, dword ptr [rbx]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rbx], xmm0
  }
  m_size = (unsigned int)stateTransition->m_stateIds.m_size;
  if ( (int)m_size > 0 )
  {
    v23 = j_va("%i StateIds", m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0]; y
      vmovss  xmm1, dword ptr [rbx]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v23, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm7, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
      vmovss  xmm0, dword ptr [rbx]
    }
  }
  __asm
  {
    vaddss  xmm0, xmm0, cs:__real@41400000
    vmovss  dword ptr [rbx], xmm0
  }
  m_data = stateTransition->m_stateIds.m_data;
  containera = 0;
  if ( m_data != &m_data[stateTransition->m_stateIds.m_size] )
  {
    do
    {
      v29 = (int)*m_data;
      if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 627, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 630, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 631, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
        __debugbreak();
      if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 632, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      v30 = j_va("%i: State %i %s", containera, (unsigned int)v29, (const char *)((unsigned __int64)clothData->m_clothStateDatas.m_data[v29]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [rbx]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v30, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm7, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm1
      }
      ++m_data;
      ++containera;
    }
    while ( m_data != &stateTransition->m_stateIds.m_data[stateTransition->m_stateIds.m_size] );
    __asm { vmovss  xmm0, dword ptr [rbx] }
  }
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@41c00000
    vmovaps xmm7, [rsp+68h+var_38]
    vmovss  dword ptr [rbx], xmm1
  }
}

/*
==============
HavokCloth_Debug_DrawTags
==============
*/
void HavokCloth_Debug_DrawTags(const ScreenPlacement *scrPlace, float *x, float *y, scr_string_t *tagNames, unsigned int numTags, unsigned int startIdx)
{
  __int64 v10; 
  const char *v11; 
  const char *v12; 
  __int64 v17; 
  __int64 v18; 
  const char *v19; 
  scr_string_t v20; 
  const char *v21; 
  char *v22; 
  const char *v24; 
  const ScreenPlacement *v25; 
  __int64 v26; 
  const char *v27; 
  scr_string_t v28; 
  __int64 v29; 
  const char *v30; 
  scr_string_t v31; 
  const char *v32; 
  __int64 v37; 
  const char *v38; 
  scr_string_t v39; 
  const char *v40; 
  scr_string_t v41; 
  const char *v42; 
  scr_string_t v43; 
  const char *v44; 
  const char *v45; 
  char *v46; 
  __int64 v47; 
  const char *v48; 
  const char *v49; 
  scr_string_t v50; 
  const char *v51; 
  scr_string_t v52; 
  const char *v53; 
  scr_string_t v54; 
  const char *v55; 
  const char *v56; 
  const char *v58; 
  __int64 v64; 
  unsigned int numTagsa; 

  _R12 = y;
  _RBP = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 184, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 185, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 186, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !tagNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 187, ASSERT_TYPE_ASSERT, "(tagNames)", (const char *)&queryFormat, "tagNames") )
    __debugbreak();
  if ( startIdx < numTags )
  {
    v10 = startIdx + 1;
    if ( (_DWORD)v10 == numTags )
    {
      v11 = SL_ConvertToString(tagNames[startIdx]);
      v12 = j_va("%i %s", (unsigned int)tagNames[startIdx], v11);
      __asm
      {
        vmovss  xmm2, dword ptr [r12]; y
        vmovss  xmm1, dword ptr [rbp+0]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v12, &colorWhite);
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vaddss  xmm1, xmm0, cs:__real@41000000
        vmovss  dword ptr [r12], xmm1
      }
      return;
    }
    v17 = startIdx + 2;
    if ( (_DWORD)v17 == numTags )
    {
      v18 = (unsigned int)v10;
      v19 = SL_ConvertToString(tagNames[v10]);
      v20 = tagNames[v18];
      v21 = SL_ConvertToString(tagNames[startIdx]);
      v22 = j_va("%i %s:%i %s", (unsigned int)tagNames[startIdx], v21, (unsigned int)v20, v19);
      __asm { vmovss  xmm1, dword ptr [rbp+0] }
      v24 = v22;
      v25 = scrPlace;
LABEL_20:
      __asm { vmovss  xmm2, dword ptr [r12]; y }
      Cloth_Debug_DrawString(v25, *(float *)&_XMM1, *(float *)&_XMM2, v24, &colorWhite);
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vaddss  xmm1, xmm0, cs:__real@41000000
        vmovss  dword ptr [r12], xmm1
      }
      return;
    }
    v26 = startIdx + 3;
    if ( (_DWORD)v26 == numTags )
    {
      v27 = SL_ConvertToString(tagNames[v17]);
      v28 = tagNames[v17];
      v29 = (unsigned int)v10;
      v30 = SL_ConvertToString(tagNames[v10]);
      v31 = tagNames[v29];
      v32 = SL_ConvertToString(tagNames[startIdx]);
      LODWORD(v64) = v28;
      v24 = j_va("%i %s:%i %s:%i %s", (unsigned int)tagNames[startIdx], v32, (unsigned int)v31, v30, v64, v27);
      _RAX = x;
      v25 = scrPlace;
      __asm { vmovss  xmm1, dword ptr [rax]; x }
      goto LABEL_20;
    }
    v37 = startIdx + 4;
    if ( (_DWORD)v37 == numTags )
    {
      v38 = SL_ConvertToString(tagNames[v26]);
      v39 = tagNames[v26];
      v40 = SL_ConvertToString(tagNames[v17]);
      v41 = tagNames[v17];
      v42 = SL_ConvertToString(tagNames[v10]);
      v43 = tagNames[(unsigned int)v10];
      v44 = v42;
      v45 = SL_ConvertToString(tagNames[startIdx]);
      LODWORD(v64) = v41;
      v46 = j_va("%i %s:%i %s:%i %s:%i %s", (unsigned int)tagNames[startIdx], v45, (unsigned int)v43, v44, v64, v40, v39, v38);
    }
    else
    {
      if ( startIdx + 5 > numTags )
        return;
      v47 = (unsigned int)v37;
      v48 = SL_ConvertToString(tagNames[v37]);
      numTagsa = tagNames[v47];
      v49 = SL_ConvertToString(tagNames[v26]);
      v50 = tagNames[v26];
      v51 = SL_ConvertToString(tagNames[v17]);
      v52 = tagNames[v17];
      v53 = SL_ConvertToString(tagNames[v10]);
      v54 = tagNames[(unsigned int)v10];
      v55 = v53;
      v56 = SL_ConvertToString(tagNames[startIdx]);
      LODWORD(v64) = v52;
      v46 = j_va("%i %s:%i %s:%i %s:%i %s:%i %s", (unsigned int)tagNames[startIdx], v56, (unsigned int)v54, v55, v64, v51, v50, v49, numTagsa, v48);
    }
    _RBX = y;
    v58 = v46;
    _RAX = x;
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rax]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v58, &colorWhite);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, cs:__real@41000000
      vmovss  dword ptr [rbx], xmm1
    }
  }
}

/*
==============
HavokCloth_Debug_DrawTransformSetDefinitionDetails
==============
*/
void HavokCloth_Debug_DrawTransformSetDefinitionDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclTransformSetDefinition *transformSetDefinition, int transformSetDefinitionIdx)
{
  const char *v13; 
  const char *v20; 
  unsigned int m_numTransforms; 
  const char *v26; 
  ClothAssetBoneMappingSet *v33; 
  __int64 v34; 
  unsigned int v35; 
  unsigned int startIdx; 

  _RBP = y;
  _RSI = x;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 677, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 678, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 679, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 680, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 681, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 682, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !transformSetDefinition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 683, ASSERT_TYPE_ASSERT, "(transformSetDefinition)", (const char *)&queryFormat, "transformSetDefinition") )
    __debugbreak();
  v13 = j_va("%i: %s", (unsigned int)transformSetDefinitionIdx, (const char *)((unsigned __int64)transformSetDefinition->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v13, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vaddss  xmm0, xmm0, cs:__real@41000000
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm1, dword ptr [rsi]
    vaddss  xmm0, xmm1, cs:__real@41400000
    vmovss  dword ptr [rsi], xmm0
  }
  v20 = j_va("Type: %s", s_HavokCloth_TransformSetDefinitionTypeNames[transformSetDefinition->m_type]);
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v20, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  dword ptr [rbp+0], xmm1
  }
  m_numTransforms = transformSetDefinition->m_numTransforms;
  v26 = j_va("Num Transforms: %i", m_numTransforms);
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+0]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v26, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vaddss  xmm1, xmm0, cs:__real@41000000
    vmovss  dword ptr [rbp+0], xmm1
    vmovss  xmm2, dword ptr [rsi]
    vaddss  xmm0, xmm2, cs:__real@41400000
    vmovss  dword ptr [rsi], xmm0
  }
  if ( (clothDataIdx < 0 || clothDataIdx >= (signed int)asset->boneMappingSetCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 705, ASSERT_TYPE_ASSERT, "(clothDataIdx >= 0 && clothDataIdx < static_cast<int>( asset->boneMappingSetCount ))", (const char *)&queryFormat, "clothDataIdx >= 0 && clothDataIdx < static_cast<int>( asset->boneMappingSetCount )") )
    __debugbreak();
  v33 = &asset->boneMappingSets[clothDataIdx];
  if ( (transformSetDefinitionIdx < 0 || transformSetDefinitionIdx >= (signed int)v33->boneMappingCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 709, ASSERT_TYPE_ASSERT, "(transformSetDefinitionIdx >= 0 && transformSetDefinitionIdx < static_cast<int>( boneMappingSet->boneMappingCount ))", (const char *)&queryFormat, "transformSetDefinitionIdx >= 0 && transformSetDefinitionIdx < static_cast<int>( boneMappingSet->boneMappingCount )") )
    __debugbreak();
  v34 = (__int64)&v33->boneMappings[transformSetDefinitionIdx];
  if ( *(_DWORD *)(v34 + 8) != m_numTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 713, ASSERT_TYPE_ASSERT, "(boneMapping->scrTagCount == numTransforms)", (const char *)&queryFormat, "boneMapping->scrTagCount == numTransforms") )
    __debugbreak();
  v35 = *(_DWORD *)(v34 + 8);
  for ( startIdx = 0; startIdx < v35; startIdx += 5 )
  {
    HavokCloth_Debug_DrawTags(scrPlace, _RSI, _RBP, *(scr_string_t **)v34, v35, startIdx);
    v35 = *(_DWORD *)(v34 + 8);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm1, xmm0, cs:__real@41c00000
    vmovss  dword ptr [rsi], xmm1
  }
}

/*
==============
HavokCloth_Debug_SetVectorFieldBasis
==============
*/
void HavokCloth_Debug_SetVectorFieldBasis(const unsigned int globalWorldId, const unsigned int instanceId, const vec3_t *position, const vec3_t *velocityVec, const vec3_t *forceVec)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v5 = instanceId;
  v7 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1555, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_Debug_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_Debug_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( (_DWORD)v5 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1556, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)v5 < 0x400 )
  {
    goto LABEL_10;
  }
  LODWORD(v11) = 1024;
  LODWORD(v10) = v5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1557, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v10, v11) )
    __debugbreak();
LABEL_10:
  v9 = v5 + (v7 << 10);
  s_HavokCloth_Debug_VectorFieldData[0][v9].position.v[0] = position->v[0];
  s_HavokCloth_Debug_VectorFieldData[0][v9].position.v[1] = position->v[1];
  s_HavokCloth_Debug_VectorFieldData[0][v9].position.v[2] = position->v[2];
  s_HavokCloth_Debug_VectorFieldData[0][v9].velocity.v[0] = velocityVec->v[0];
  s_HavokCloth_Debug_VectorFieldData[0][v9].velocity.v[1] = velocityVec->v[1];
  s_HavokCloth_Debug_VectorFieldData[0][v9].velocity.v[2] = velocityVec->v[2];
  s_HavokCloth_Debug_VectorFieldData[0][v9].force = *forceVec;
}

/*
==============
HavokCloth_Debug_Sound_DrawInstance
==============
*/
void HavokCloth_Debug_Sound_DrawInstance(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  unsigned int v14; 
  unsigned int soundCount; 
  const char *v18; 
  unsigned int v25; 
  const char *v43; 
  char v70; 
  char v71; 
  const char *v76; 
  unsigned int CurrentSoundIdx; 
  __int64 v81; 
  unsigned int v82; 
  __int64 v85; 
  __int64 v88; 
  const char *v93; 
  const char *v101; 
  const char *v104; 
  const char *v113; 
  char *fmt; 
  __int64 duration; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  vec3_t xyz; 
  hkVector4f position; 
  char v135; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  _RBP = x;
  v14 = instanceId;
  _RDI = y;
  if ( !HavokCloth_IsInstanceInUse(0, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1739, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId )") )
    __debugbreak();
  _R14 = HavokCloth_GetClothAsset(0, v14);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1743, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  soundCount = _R14->soundCount;
  v18 = j_va("Asset has %i sound entries", soundCount);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v18, &colorWhite);
  __asm
  {
    vmovss  xmm8, cs:__real@41000000
    vaddss  xmm0, xmm8, dword ptr [rdi]
    vmovss  xmm10, cs:__real@41400000
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbp+0]
  }
  v25 = 0;
  __asm
  {
    vaddss  xmm0, xmm1, xmm10
    vmovss  dword ptr [rbp+0], xmm0
  }
  if ( soundCount )
  {
    _RBX = 0i64;
    do
    {
      _RAX = _R14->sounds;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rax+0Ch]
        vmovss  xmm1, dword ptr [rbx+rax+8]
        vmovss  xmm4, dword ptr [rbx+rax+14h]
        vmovss  xmm5, dword ptr [rbx+rax+10h]
        vmovss  xmm3, dword ptr [rbx+rax+4]
        vmovss  xmm2, dword ptr [rbx+rax]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+148h+var_108], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+148h+var_110], xmm1
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+148h+var_118], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  qword ptr [rsp+148h+duration], xmm5
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v43 = j_va("%i SpeedRange(%.2f %.2f) SoundAlias %s VolumeRange(%.2f %.2f) PitchRange(%.2f %.2f)", v25, _R8, _R9, _RAX[_RBX].soundAlias, duration, v128, v129, v130);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [rbp+0]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v43, &colorWhite);
      __asm { vaddss  xmm1, xmm8, dword ptr [rdi] }
      ++v25;
      ++_RBX;
      __asm { vmovss  dword ptr [rdi], xmm1 }
    }
    while ( v25 < soundCount );
    __asm { vmovss  xmm0, dword ptr [rbp+0] }
    v14 = instanceId;
  }
  __asm
  {
    vsubss  xmm0, xmm0, xmm10
    vmovss  dword ptr [rbp+0], xmm0
  }
  HavokCloth_GetInstancePosition(0, v14, &position);
  __asm
  {
    vmovss  xmm7, cs:__real@42000000
    vmulss  xmm1, xmm7, dword ptr [rsp+148h+position.m_quad]
    vmulss  xmm0, xmm7, dword ptr [rsp+148h+position.m_quad+4]
    vmulss  xmm2, xmm7, dword ptr [rsp+148h+position.m_quad+8]
    vmovss  dword ptr [rsp+148h+xyz], xmm1
    vmovss  dword ptr [rsp+148h+xyz+4], xmm0
    vmovss  dword ptr [rsp+148h+xyz+8], xmm2
  }
  _RAX = HavokCloth_GetFocusPosition(0);
  __asm
  {
    vmovss  xmm12, dword ptr [r14+64h]
    vsqrtss xmm12, xmm12, xmm12
    vmovups xmm0, xmmword ptr [rax]
    vsubps  xmm1, xmm0, xmmword ptr [rsp+148h+position.m_quad]
    vdpps   xmm6, xmm1, xmm1, 7Fh
    vrsqrtps xmm4, xmm6
    vxorps  xmm0, xmm0, xmm0
    vmulps  xmm1, xmm6, xmm4
    vmulps  xmm2, xmm1, xmm4
    vmulps  xmm1, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vcmpleps xmm5, xmm6, xmm0
    vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vsubps  xmm3, xmm0, xmm2
    vmulps  xmm2, xmm3, xmm1
    vmulps  xmm0, xmm2, xmm6
    vandnps xmm4, xmm5, xmm0
    vmulss  xmm11, xmm4, xmm7
    vcomiss xmm11, xmm12
  }
  if ( v70 | v71 )
  {
    CurrentSoundIdx = HavokCloth_GetCurrentSoundIdx(0, v14);
    LOBYTE(v81) = 0;
    v82 = CurrentSoundIdx;
    if ( !s_HavokCloth_Debug_SoundCache_NumEntries[0] )
      goto LABEL_19;
    __asm { vmovaps [rsp+148h+var_88], xmm9 }
    _RSI = &s_HavokCloth_Debug_SoundCache[0][0].pitch;
    __asm { vmovss  xmm9, cs:__real@3f000000 }
    v85 = s_HavokCloth_Debug_SoundCache_NumEntries[0];
    do
    {
      if ( v14 == *((_DWORD *)_RSI - 5) )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rsi-4]
          vmovss  xmm6, dword ptr [rsi]
        }
        v88 = *(_QWORD *)(_RSI - 3);
        __asm
        {
          vcvtss2sd xmm7, xmm7, xmm7
          vmovaps xmm3, xmm7
          vcvtss2sd xmm6, xmm6, xmm6
          vmovq   r9, xmm3
          vmovsd  [rsp+148h+fmt], xmm6
        }
        v93 = j_va("AssetEntry:%i Sound:%s Volume:%.2f Pitch:%.2f", v82, v88, _R9, fmt);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi]; y
          vmovss  xmm1, dword ptr [rbp+0]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v93, &colorWhite);
        __asm
        {
          vaddss  xmm1, xmm8, dword ptr [rdi]
          vmovaps xmm3, xmm6
          vmovaps xmm2, xmm7
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovss  dword ptr [rdi], xmm1
        }
        v101 = j_va("%s v:%.2f p:%.2f", v88, _R8, _R9);
        __asm { vmovaps xmm2, xmm9; scale }
        CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v101, 0, 0);
        LOBYTE(v81) = 1;
      }
      _RSI += 6;
      --v85;
    }
    while ( v85 );
    __asm { vmovaps xmm9, [rsp+148h+var_88] }
    if ( !(_BYTE)v81 )
    {
LABEL_19:
      v104 = j_va("Did not play any sounds this frame", v81);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vmovss  xmm1, dword ptr [rbp+0]; x
      }
      Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v104, &colorWhite);
      __asm
      {
        vaddss  xmm1, xmm8, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
    }
    __asm
    {
      vaddss  xmm1, xmm10, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
      vcvtss2sd xmm1, xmm11, xmm11
      vcvtss2sd xmm2, xmm12, xmm12
      vmovq   rdx, xmm1
      vmovq   r8, xmm2
    }
    v113 = j_va("Distance %.2f (max %.2f)", _RDX, _R8);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v113, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm8, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rbp+0]
      vsubss  xmm0, xmm2, xmm10
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm2, xmm12, xmm12
      vcvtss2sd xmm1, xmm11, xmm11
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    v76 = j_va("Too far away (%.2f - max %.2f) to play sounds", _RDX, _R8);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v76, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm8, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
    }
  }
  _R11 = &v135;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
HavokCloth_Debug_Sound_DrawSummary
==============
*/
void HavokCloth_Debug_Sound_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v8; 
  const char *v12; 
  __int64 v18; 
  unsigned int v21; 
  const char *v22; 
  const ClothAsset *ClothAsset; 
  const char *name; 
  unsigned int CurrentSoundIdx; 
  const char *v34; 
  const char *v37; 
  const char *v45; 
  double duration; 
  double v53; 
  vec3_t xyz; 
  hkVector4f position; 

  __asm { vmovaps [rsp+0F8h+var_68], xmm8 }
  v8 = s_HavokCloth_Debug_SoundCache_NumEntries[0];
  _R13 = x;
  _R14 = y;
  v12 = j_va("%i Sounds Playing", s_HavokCloth_Debug_SoundCache_NumEntries[0]);
  __asm
  {
    vmovss  xmm2, dword ptr [r14]; y
    vmovss  xmm1, dword ptr [r13+0]; x
  }
  Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v12, &colorWhite);
  __asm
  {
    vmovss  xmm8, cs:__real@41000000
    vaddss  xmm0, xmm8, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
  }
  if ( v8 )
  {
    _RBP = &s_HavokCloth_Debug_SoundCache[0][0].pitch;
    v18 = v8;
    __asm
    {
      vmovaps [rsp+0F8h+var_78], xmm9
      vmovss  xmm9, cs:__real@42000000
      vmovaps [rsp+0F8h+var_88], xmm10
      vmovss  xmm10, cs:__real@3f000000
      vmovaps [rsp+0F8h+var_48], xmm6
      vmovaps [rsp+0F8h+var_58], xmm7
    }
    do
    {
      v21 = *((_DWORD *)_RBP - 5);
      if ( HavokCloth_IsInstanceInUse(0, v21) )
      {
        ClothAsset = HavokCloth_GetClothAsset(0, v21);
        if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1707, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
          __debugbreak();
        name = ClothAsset->name;
        HavokCloth_GetInstancePosition(0, v21, &position);
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rsp+0F8h+position.m_quad]
          vmulss  xmm0, xmm9, dword ptr [rsp+0F8h+position.m_quad+4]
          vmulss  xmm2, xmm9, dword ptr [rsp+0F8h+position.m_quad+8]
          vmovss  dword ptr [rsp+0F8h+xyz], xmm1
          vmovss  dword ptr [rsp+0F8h+xyz+4], xmm0
          vmovss  dword ptr [rsp+0F8h+xyz+8], xmm2
        }
        CurrentSoundIdx = HavokCloth_GetCurrentSoundIdx(0, v21);
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+0]
          vmovss  xmm7, dword ptr [rbp-4]
        }
        v34 = *(const char **)(_RBP - 3);
        __asm
        {
          vcvtss2sd xmm6, xmm6, xmm6
          vmovsd  [rsp+0F8h+var_C8], xmm6
          vcvtss2sd xmm7, xmm7, xmm7
          vmovsd  qword ptr [rsp+0F8h+duration], xmm7
        }
        v37 = j_va("Instance %i %s: AssetEntry:%i Sound:%s Volume:%.2f Pitch:%.2f", v21, name, CurrentSoundIdx, v34, duration, v53);
        __asm
        {
          vmovss  xmm2, dword ptr [r14]; y
          vmovss  xmm1, dword ptr [r13+0]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v37, &colorWhite);
        __asm
        {
          vaddss  xmm1, xmm8, dword ptr [r14]
          vmovaps xmm3, xmm6
          vmovaps xmm2, xmm7
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovss  dword ptr [r14], xmm1
        }
        v45 = j_va("%s v:%.2f p:%.2f", v34, _R8, _R9);
        __asm { vmovaps xmm2, xmm10; scale }
        CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v45, 0, 0);
      }
      else
      {
        v22 = j_va("Instance %i was destroyed this frame", v21);
        __asm
        {
          vmovss  xmm2, dword ptr [r14]; y
          vmovss  xmm1, dword ptr [r13+0]; x
        }
        Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v22, &colorWhite);
        __asm
        {
          vaddss  xmm1, xmm8, dword ptr [r14]
          vmovss  dword ptr [r14], xmm1
        }
      }
      _RBP += 6;
      --v18;
    }
    while ( v18 );
    __asm
    {
      vmovaps xmm10, [rsp+0F8h+var_88]
      vmovaps xmm9, [rsp+0F8h+var_78]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_48]
    }
  }
  __asm { vmovaps xmm8, [rsp+0F8h+var_68] }
}

/*
==============
HavokCloth_Debug_Sound_SetCache
==============
*/
void HavokCloth_Debug_Sound_SetCache(const unsigned int globalWorldId, HavokCloth_Update_QueuedSound *sounds, unsigned int numSounds)
{
  __int64 v3; 

  v3 = globalWorldId;
  _RBX = sounds;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1831, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_Debug_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_Debug_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1832, ASSERT_TYPE_ASSERT, "(sounds)", (const char *)&queryFormat, "sounds") )
    __debugbreak();
  if ( numSounds > 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1833, ASSERT_TYPE_ASSERT, "(numSounds <= MAX_SIMULTANEOUS_CLOTH_SOUNDS)", (const char *)&queryFormat, "numSounds <= MAX_SIMULTANEOUS_CLOTH_SOUNDS") )
    __debugbreak();
  s_HavokCloth_Debug_SoundCache_NumEntries[v3] = numSounds;
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  _RCX = s_HavokCloth_Debug_SoundCache[v3];
  __asm
  {
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rbx+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rbx+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm0, xmmword ptr [rbx+70h]
    vmovups xmmword ptr [rcx+70h], xmm0
    vmovups xmm1, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [rcx+80h], xmm1
    vmovups xmm0, xmmword ptr [rbx+90h]
    vmovups xmmword ptr [rcx+90h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0B0h]
    vmovups xmmword ptr [rcx+0B0h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0C0h]
    vmovups xmmword ptr [rcx+0C0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0D0h]
    vmovups xmmword ptr [rcx+0D0h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0E0h]
    vmovups xmmword ptr [rcx+0E0h], xmm1
  }
}

/*
==============
HavokCloth_Debug_Speed_DrawInstance
==============
*/
void HavokCloth_Debug_Speed_DrawInstance(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  bool SimulatedSpeed; 
  const char *v24; 
  const char *v36; 
  const char *v45; 
  const char *v48; 
  float fmt; 
  float fmta; 
  float fmtb; 
  int duration; 
  int durationa; 
  float v85; 
  float v86; 
  float speed; 
  vec3_t xyz; 
  hkVector4f position; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  _R15 = x;
  _RBX = y;
  if ( !HavokCloth_IsInstanceInUse(0, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1627, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId )") )
    __debugbreak();
  _RSI = HavokCloth_GetClothAsset(0, instanceId);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1631, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  HavokCloth_GetInstancePosition(0, instanceId, &position);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm1, xmm3, dword ptr [rsp+128h+position.m_quad]
    vmulss  xmm0, xmm3, dword ptr [rsp+128h+position.m_quad+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+128h+position.m_quad+8]
    vmovss  dword ptr [rsp+128h+xyz], xmm1
    vmovss  dword ptr [rsp+128h+xyz+4], xmm0
    vmovss  dword ptr [rsp+128h+xyz+8], xmm2
    vmovss  xmm9, dword ptr [rsi+5Ch]
  }
  SimulatedSpeed = HavokCloth_GetSimulatedSpeed(0, instanceId, &speed);
  *(double *)&_XMM0 = HavokCloth_GetBlendedSpeed(0, instanceId);
  __asm
  {
    vmovss  xmm8, cs:__real@41000000
    vmovaps xmm7, xmm0
    vxorps  xmm10, xmm10, xmm10
  }
  if ( !SimulatedSpeed )
  {
    __asm { vucomiss xmm0, xmm10 }
    v24 = j_va("Speed is 0");
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r15]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v24, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm8, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vcvtss2sd xmm1, xmm9, xmm9
    vmovq   rdx, xmm1
    vcvtss2sd xmm6, xmm7, xmm7
  }
  if ( SimulatedSpeed )
  {
    __asm
    {
      vmovss  xmm2, [rsp+128h+speed]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovaps xmm3, xmm6
      vmovq   r8, xmm2
      vmovq   r9, xmm3
    }
    v36 = j_va("Default: %.2f Simulated:%.2f Blended:%.2f", _RDX, _R8, _R9);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r15]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v36, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm8, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm1, [rsp+128h+speed]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovaps xmm2, xmm6
      vmovq   rdx, xmm1
      vmovq   r8, xmm2
    }
    v45 = j_va("%.2f-%.2f", _RDX, _R8);
  }
  else
  {
    __asm
    {
      vmovaps xmm2, xmm6
      vmovq   r8, xmm2
    }
    v48 = j_va("Default: %.2f Blended:%.2f", _RDX, _R8);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r15]; x
    }
    Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v48, &colorWhite);
    __asm
    {
      vaddss  xmm1, xmm8, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
      vmovaps xmm1, xmm6
      vmovq   rdx, xmm1
    }
    v45 = j_va("%.2f", _RDX);
  }
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v45, 0, 0);
  if ( SimulatedSpeed )
    __asm { vmovss  xmm0, [rsp+128h+speed] }
  else
    __asm { vmovss  xmm0, dword ptr [rsi+5Ch] }
  _RCX = s_HavokCloth_SpeedHistoryStart;
  _RDX = s_HavokCloth_TargetSpeedHistory;
  __asm
  {
    vmovss  xmm6, cs:__real@437a0000
    vmovss  xmm8, cs:__real@42c80000
    vmovss  dword ptr [rdx+rcx*4], xmm0
  }
  _RDI = s_HavokCloth_BlendedSpeedHistory;
  __asm
  {
    vmovss  dword ptr [rdi+rcx*4], xmm7
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm2, xmm0, cs:__real@41200000; y
    vmovss  xmm7, cs:__real@44000000
    vmovss  [rsp+128h+var_F8], xmm6
    vmovss  dword ptr [rbx], xmm2
    vmovss  xmm1, dword ptr [r15]; x
  }
  s_HavokCloth_SpeedHistoryStart = ((_BYTE)_RCX + 1) & 0x7F;
  __asm
  {
    vmovss  [rsp+128h+duration], xmm10
    vmovaps xmm3, xmm7; width
    vmovss  dword ptr [rsp+128h+fmt], xmm8
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&duration, v85, s_HavokCloth_TargetSpeedHistory, 0x80u, s_HavokCloth_SpeedHistoryStart, &colorRed);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r15]; x
    vmovss  [rsp+128h+var_F8], xmm6
    vmovss  [rsp+128h+duration], xmm10
    vmovaps xmm3, xmm7; width
    vmovss  dword ptr [rsp+128h+fmt], xmm8
  }
  CG_DebugGraphs_DrawGraphData(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, *(float *)&durationa, v86, s_HavokCloth_BlendedSpeedHistory, 0x80u, s_HavokCloth_SpeedHistoryStart, &colorGreen);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r15]; x
    vmovaps xmm3, xmm7; width
    vmovss  dword ptr [rsp+128h+fmt], xmm8
  }
  CG_DebugGraphs_DrawAxes(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, &colorWhite);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm1, xmm0, cs:__real@42dc0000
    vmovss  dword ptr [rbx], xmm1
  }
  _R11 = &v90;
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
HavokCloth_Debug_Speed_DrawSummary
==============
*/
void HavokCloth_Debug_Speed_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v12; 
  unsigned int v17; 
  const char *name; 
  bool SimulatedSpeed; 
  const char *v30; 
  const char *v39; 
  const char *v40; 
  char *fmt; 
  char *fmta; 
  double duration; 
  unsigned int numInstances; 
  float speed; 
  vec3_t xyz; 
  hkVector4f position; 
  unsigned int instances[1024]; 

  _R14 = y;
  _R12 = x;
  numInstances = 0;
  HavokCloth_GetInstanceList(0, instances, &numInstances);
  v12 = 0;
  if ( numInstances )
  {
    __asm
    {
      vmovaps [rsp+1108h+var_58], xmm7
      vmovaps [rsp+1108h+var_68], xmm8
      vmovss  xmm8, cs:__real@42000000
      vmovaps [rsp+1108h+var_78], xmm9
      vmovaps [rsp+1108h+var_88], xmm10
      vmovss  xmm10, cs:__real@41000000
      vmovaps [rsp+1108h+var_98], xmm11
      vmovss  xmm11, cs:__real@3f000000
      vmovaps [rsp+1108h+var_48], xmm6
      vxorps  xmm9, xmm9, xmm9
    }
    do
    {
      v17 = instances[v12];
      if ( !HavokCloth_IsInstanceInUse(0, v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1580, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId )") )
        __debugbreak();
      _RSI = HavokCloth_GetClothAsset(0, v17);
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1584, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
        __debugbreak();
      name = _RSI->name;
      HavokCloth_GetInstancePosition(0, v17, &position);
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [rsp+1108h+position.m_quad]
        vmulss  xmm0, xmm8, dword ptr [rsp+1108h+position.m_quad+4]
        vmulss  xmm2, xmm8, dword ptr [rsp+1108h+position.m_quad+8]
        vmovss  dword ptr [rsp+1108h+xyz], xmm1
        vmovss  dword ptr [rsp+1108h+xyz+4], xmm0
        vmovss  dword ptr [rsp+1108h+xyz+8], xmm2
        vmovss  xmm7, dword ptr [rsi+5Ch]
      }
      SimulatedSpeed = HavokCloth_GetSimulatedSpeed(0, v17, &speed);
      *(double *)&_XMM0 = HavokCloth_GetBlendedSpeed(0, v17);
      if ( SimulatedSpeed )
      {
        __asm
        {
          vcvtss2sd xmm3, xmm7, xmm7
          vmovq   r9, xmm3
          vcvtss2sd xmm6, xmm0, xmm0
        }
        if ( SimulatedSpeed )
        {
          __asm
          {
            vmovss  xmm0, [rsp+1108h+speed]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  qword ptr [rsp+1108h+duration], xmm6
            vmovsd  [rsp+1108h+fmt], xmm0
          }
          v30 = j_va("Instance %i %s: Default: %.2f Simulated:%.2f Blended:%.2f", v17, name, *(double *)&_XMM3, *(double *)&fmt, duration);
          __asm
          {
            vmovss  xmm2, dword ptr [r14]; y
            vmovss  xmm1, dword ptr [r12]; x
          }
          Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v30, &colorWhite);
          __asm
          {
            vmovss  xmm2, [rsp+1108h+speed]
            vaddss  xmm1, xmm10, dword ptr [r14]
            vcvtss2sd xmm2, xmm2, xmm2
            vmovaps xmm3, xmm6
            vmovq   r8, xmm2
            vmovq   r9, xmm3
            vmovss  dword ptr [r14], xmm1
          }
          v39 = j_va("%i-%.2f-%.2f", v17, _R8, _R9);
        }
        else
        {
          __asm { vmovsd  [rsp+1108h+fmt], xmm6 }
          v40 = j_va("Instance %i %s: Default: %.2f Blended:%.2f", v17, name, *(double *)&_XMM3, *(double *)&fmta);
          __asm
          {
            vmovss  xmm2, dword ptr [r14]; y
            vmovss  xmm1, dword ptr [r12]; x
          }
          Cloth_Debug_DrawString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, v40, &colorWhite);
          __asm
          {
            vaddss  xmm1, xmm10, dword ptr [r14]
            vmovaps xmm2, xmm6
            vmovq   r8, xmm2
            vmovss  dword ptr [r14], xmm1
          }
          v39 = j_va("%i-%.2f", v17, _R8);
        }
        __asm { vmovaps xmm2, xmm11; scale }
        CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2, v39, 0, 0);
      }
      else
      {
        __asm { vucomiss xmm0, xmm9 }
      }
      ++v12;
    }
    while ( v12 < numInstances );
    __asm
    {
      vmovaps xmm11, [rsp+1108h+var_98]
      vmovaps xmm10, [rsp+1108h+var_88]
      vmovaps xmm9, [rsp+1108h+var_78]
      vmovaps xmm8, [rsp+1108h+var_68]
      vmovaps xmm7, [rsp+1108h+var_58]
      vmovaps xmm6, [rsp+1108h+var_48]
    }
  }
}

