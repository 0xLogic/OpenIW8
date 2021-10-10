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
  const char *v16; 
  char m_bool; 
  __int64 transformSetIdx; 
  const char *v19; 
  bool v20; 
  const ScreenPlacement *v21; 
  const vec4_t *v22; 
  float v23; 
  const char *v24; 
  hclTransformSet *v25; 
  ClothAssetBoneMappingSet *v26; 
  __int64 v27; 
  __int64 transformIdx; 
  unsigned __int16 v29; 
  __int16 v30; 
  unsigned __int16 v31; 
  scr_string_t v32; 
  const char *v33; 
  char *v34; 
  const char *v35; 
  const vec4_t *fmt; 
  hclShape *shape; 
  __int64 v38; 
  const char *v39; 
  hclShape *v41; 
  const HavokCloth_ActiveCollidableData *activeCollidableDataa; 
  const HavokCloth_ActiveCollidableData *activeCollidableDatab; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 417, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 418, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 419, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
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
  v16 = "Disabled";
  m_bool = collidable->m_enabled.m_bool;
  transformSetIdx = activeCollidableData->transformSetIdx;
  v41 = m_shape;
  if ( m_bool )
    v16 = "Enabled";
  v19 = j_va("%i: %s %s", (unsigned int)activeCollidableDataIdx, *(_QWORD *)&activeCollidableDataa[6].clothInstanceIdx & 0xFFFFFFFFFFFFFFFEui64, v16);
  v20 = m_bool == 0;
  v21 = scrPlace;
  v22 = &colorDkGrey;
  if ( !v20 )
    v22 = &colorWhite;
  Cloth_Debug_DrawString(scrPlace, *x, *y, v19, v22);
  *y = *y + 8.0;
  v23 = *x + 12.0;
  *x = v23;
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
      LODWORD(v38) = ClothInstance->m_transformSets.m_size;
      LODWORD(shape) = transformSetIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 466, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIdx ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "transformSetIdx doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", shape, v38) )
        __debugbreak();
    }
    v25 = ClothInstance->m_transformSets.m_data[transformSetIdx];
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 468, ASSERT_TYPE_ASSERT, "(transformSet)", (const char *)&queryFormat, "transformSet") )
      __debugbreak();
    if ( (unsigned int)clothInstanceIdx >= clothAsset->boneMappingSetCount )
    {
      LODWORD(v38) = clothAsset->boneMappingSetCount;
      LODWORD(shape) = clothInstanceIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( clothAsset->boneMappingSetCount )", "clothInstanceIdx doesn't index clothAsset->boneMappingSetCount\n\t%i not in [0, %i)", shape, v38) )
        __debugbreak();
    }
    v26 = &clothAsset->boneMappingSets[clothInstanceIdx];
    if ( (unsigned int)transformSetIdx >= v26->boneMappingCount )
    {
      LODWORD(v38) = v26->boneMappingCount;
      LODWORD(shape) = transformSetIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 475, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIdx ) < (unsigned)( boneMappingSet->boneMappingCount )", "transformSetIdx doesn't index boneMappingSet->boneMappingCount\n\t%i not in [0, %i)", shape, v38) )
        __debugbreak();
    }
    v27 = (__int64)&v26->boneMappings[transformSetIdx];
    transformIdx = activeCollidableData->transformIdx;
    if ( (unsigned int)transformIdx >= LODWORD(v25[1].m_propertyBag.m_bag) )
    {
      LODWORD(v38) = v25[1].m_propertyBag.m_bag;
      LODWORD(shape) = activeCollidableData->transformIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 482, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", shape, v38) )
        __debugbreak();
    }
    v29 = *((_WORD *)&v25[1].getExactType + (int)transformIdx);
    v30 = v29 >> 15;
    v31 = v29 & 0x7FFF;
    if ( (unsigned int)transformIdx >= *(_DWORD *)(v27 + 8) )
    {
      LODWORD(v38) = *(_DWORD *)(v27 + 8);
      LODWORD(shape) = transformIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( boneMapping->scrTagCount )", "transformIdx doesn't index boneMapping->scrTagCount\n\t%i not in [0, %i)", shape, v38) )
        __debugbreak();
    }
    v32 = *(_DWORD *)(*(_QWORD *)v27 + 4 * transformIdx);
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 490, ASSERT_TYPE_ASSERT, "(scrTagName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "scrTagName != NULL_SCR_STRING") )
      __debugbreak();
    v39 = SL_ConvertToString(v32);
    v33 = (char *)&queryFormat.fmt + 3;
    LODWORD(shape) = v31;
    if ( (_BYTE)v30 )
      v33 = "client";
    v34 = j_va("Binding: TransformSet(%i:%s) Transform:%i (IW %sbone %i:%s)", (unsigned int)transformSetIdx, (const char *)(*(_QWORD *)&activeCollidableDatab[1].clothInstanceIdx & 0xFFFFFFFFFFFFFFFEui64), (unsigned int)transformIdx, v33, shape, v39);
    v23 = *x;
    v21 = scrPlace;
    fmt = &colorWhite;
    v24 = v34;
  }
  else
  {
    fmt = &colorYellow;
    v24 = "Warning: Unbound Collidable";
  }
  Cloth_Debug_DrawString(v21, v23, *y, v24, fmt);
  *y = *y + 8.0;
  if ( v41 )
  {
    HavokCloth_Debug_DrawShapeDetails(v21, x, y, NULL, NULL, v41);
  }
  else
  {
    v35 = j_va("Missing Shape");
    Cloth_Debug_DrawString(v21, *x, *y, v35, &colorRed);
    *y = *y + 8.0;
  }
  *x = *x - 12.0;
}

/*
==============
HavokCloth_Debug_DrawAssetDetails
==============
*/
void HavokCloth_Debug_DrawAssetDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset)
{
  const ClothAsset *v4; 
  const hclClothContainer *v8; 
  __int64 m_size; 
  const char *v10; 
  float v11; 
  hkRefPtr<hclCollidable> *m_data; 
  unsigned int clothDataIdx; 
  hclCollidable *m_ptr; 
  const char *v15; 
  char m_bool; 
  const char *v17; 
  const vec4_t *v18; 
  const char *v19; 
  const char *v20; 
  float v21; 
  __int64 v22; 
  const char *v23; 
  const hclClothData **p_m_ptr; 
  const char *v25; 
  float v26; 
  hclShape *shape; 

  v4 = asset;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1235, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1236, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1237, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1238, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  v8 = HavokCloth_GetAsset(v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1242, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  m_size = (unsigned int)v8->m_collidables.m_size;
  if ( (int)m_size > 0 )
  {
    v10 = j_va("%i Collidables", m_size);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v10, &colorWhite);
    *y = *y + 8.0;
  }
  v11 = *x + 12.0;
  *x = v11;
  m_data = v8->m_collidables.m_data;
  clothDataIdx = 0;
  if ( m_data != &m_data[v8->m_collidables.m_size] )
  {
    do
    {
      m_ptr = m_data->m_ptr;
      if ( m_data->m_ptr )
      {
        if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 384, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
          __debugbreak();
        if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 386, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
          __debugbreak();
        v15 = "Disabled";
        m_bool = m_ptr->m_enabled.m_bool;
        shape = (hclShape *)m_ptr->m_shape;
        if ( m_bool )
          v15 = "Enabled";
        v17 = j_va("%i: %s %s", clothDataIdx, (unsigned __int64)m_ptr->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64, v15);
        v18 = &colorDkGrey;
        if ( m_bool )
          v18 = &colorWhite;
        Cloth_Debug_DrawString(scrPlace, *x, *y, v17, v18);
        *y = *y + 8.0;
        *x = *x + 12.0;
        if ( shape )
        {
          HavokCloth_Debug_DrawShapeDetails(scrPlace, x, y, asset, v8, shape);
        }
        else
        {
          v19 = j_va("Missing Shape");
          Cloth_Debug_DrawString(scrPlace, *x, *y, v19, &colorRed);
          *y = *y + 8.0;
        }
        v11 = *x - 12.0;
        *x = v11;
      }
      else
      {
        v20 = j_va("%i Missing Collidable", clothDataIdx);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v20, &colorRed);
        *y = *y + 8.0;
        v11 = *x;
      }
      ++m_data;
      ++clothDataIdx;
    }
    while ( m_data != &v8->m_collidables.m_data[v8->m_collidables.m_size] );
    v4 = asset;
    clothDataIdx = 0;
  }
  v21 = v11 - 12.0;
  *x = v11 - 12.0;
  v22 = (unsigned int)v8->m_clothDatas.m_size;
  if ( (int)v22 > 0 )
  {
    v23 = j_va("%i Cloth Datas", v22);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v23, &colorWhite);
    *y = *y + 8.0;
    v21 = *x;
  }
  *x = v21 + 12.0;
  p_m_ptr = (const hclClothData **)&v8->m_clothDatas.m_data->m_ptr;
  if ( p_m_ptr == &p_m_ptr[v8->m_clothDatas.m_size] )
  {
    v26 = (float)(v21 + 12.0) - 12.0;
  }
  else
  {
    do
    {
      if ( *p_m_ptr )
      {
        HavokCloth_Debug_DrawClothDataDetails(scrPlace, x, y, v4, v8, *p_m_ptr, clothDataIdx);
      }
      else
      {
        v25 = j_va("%i Missing Cloth Data", clothDataIdx);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v25, &colorRed);
        *y = *y + 8.0;
      }
      ++p_m_ptr;
      ++clothDataIdx;
    }
    while ( p_m_ptr != (const hclClothData **)&v8->m_clothDatas.m_data[v8->m_clothDatas.m_size].m_ptr );
    v26 = *x - 12.0;
  }
  *x = v26;
}

/*
==============
HavokCloth_Debug_DrawBufferDefinitionDetails
==============
*/
void HavokCloth_Debug_DrawBufferDefinitionDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclBufferDefinition *bufferDefinition, int bufferDefinitionIdx)
{
  const char *v13; 
  const char *v14; 
  const char *v15; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 645, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 646, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 647, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
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
  Cloth_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  v14 = j_va("Type: %s", s_HavokCloth_BufferTypeNames[bufferDefinition->m_type]);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  v15 = j_va("Verts: %i - Tris: %i", bufferDefinition->m_numVertices, bufferDefinition->m_numTriangles);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v15, &colorWhite);
  *y = *y + 8.0;
  *x = *x - 12.0;
}

/*
==============
HavokCloth_Debug_DrawClothDataDetails
==============
*/
void HavokCloth_Debug_DrawClothDataDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx)
{
  const char *v11; 
  float v12; 
  __int64 m_size; 
  const char *v14; 
  float v15; 
  const hclBufferDefinition **m_data; 
  unsigned int bufferDefinitionIdx; 
  const char *v18; 
  float v19; 
  __int64 v20; 
  const char *v21; 
  float v22; 
  const hclTransformSetDefinition **v23; 
  unsigned int v24; 
  const char *v25; 
  float v26; 
  __int64 v27; 
  const char *v28; 
  float v29; 
  const hclOperator **v30; 
  unsigned int v31; 
  const char *v32; 
  float v33; 
  __int64 v34; 
  const char *v35; 
  float v36; 
  const hclSimClothData **v37; 
  unsigned int v38; 
  const char *v39; 
  float v40; 
  __int64 v41; 
  const char *v42; 
  float v43; 
  const hclClothState **v44; 
  unsigned int v45; 
  const char *v46; 
  float v47; 
  __int64 v48; 
  const char *v49; 
  float v50; 
  const hclStateTransition **v51; 
  unsigned int v52; 
  const char *v53; 
  float v54; 
  __int64 v55; 
  const char *v56; 
  float v57; 
  const hclAction **v58; 
  unsigned int v59; 
  const char *v60; 
  const vec4_t *v61; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1040, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1041, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1042, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1043, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1044, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1045, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  v11 = j_va("%i: %s", (unsigned int)clothDataIdx, (const char *)((unsigned __int64)clothData->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v11, &colorWhite);
  *y = *y + 8.0;
  v12 = *x + 12.0;
  *x = v12;
  m_size = (unsigned int)clothData->m_bufferDefinitions.m_size;
  if ( (int)m_size > 0 )
  {
    v14 = j_va("%i BufferDefinitions", m_size);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
    *y = *y + 8.0;
    v12 = *x;
  }
  v15 = v12 + 12.0;
  *x = v15;
  m_data = clothData->m_bufferDefinitions.m_data;
  bufferDefinitionIdx = 0;
  if ( m_data != &m_data[clothData->m_bufferDefinitions.m_size] )
  {
    do
    {
      if ( *m_data )
      {
        HavokCloth_Debug_DrawBufferDefinitionDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *m_data, bufferDefinitionIdx);
      }
      else
      {
        v18 = j_va("%i Missing BufferDefinition", bufferDefinitionIdx);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v18, &colorRed);
        *y = *y + 8.0;
      }
      ++m_data;
      ++bufferDefinitionIdx;
    }
    while ( m_data != &clothData->m_bufferDefinitions.m_data[clothData->m_bufferDefinitions.m_size] );
    v15 = *x;
  }
  v19 = v15 - 12.0;
  *x = v15 - 12.0;
  v20 = (unsigned int)clothData->m_transformSetDefinitions.m_size;
  if ( (int)v20 > 0 )
  {
    v21 = j_va("%i TransformSetDefinitions", v20);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v21, &colorWhite);
    *y = *y + 8.0;
    v19 = *x;
  }
  v22 = v19 + 12.0;
  *x = v19 + 12.0;
  v23 = clothData->m_transformSetDefinitions.m_data;
  v24 = 0;
  if ( v23 != &v23[clothData->m_transformSetDefinitions.m_size] )
  {
    do
    {
      if ( *v23 )
      {
        HavokCloth_Debug_DrawTransformSetDefinitionDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *v23, v24);
      }
      else
      {
        v25 = j_va("%i Missing TransformSetDefinition", v24);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v25, &colorRed);
        *y = *y + 8.0;
      }
      ++v23;
      ++v24;
    }
    while ( v23 != &clothData->m_transformSetDefinitions.m_data[clothData->m_transformSetDefinitions.m_size] );
    v22 = *x;
  }
  v26 = v22 - 12.0;
  *x = v22 - 12.0;
  v27 = (unsigned int)clothData->m_operators.m_size;
  if ( (int)v27 > 0 )
  {
    v28 = j_va("%i Operators", v27);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v28, &colorWhite);
    *y = *y + 8.0;
    v26 = *x;
  }
  v29 = v26 + 12.0;
  *x = v26 + 12.0;
  v30 = clothData->m_operators.m_data;
  v31 = 0;
  if ( v30 != &v30[clothData->m_operators.m_size] )
  {
    do
    {
      if ( *v30 )
      {
        HavokCloth_Debug_DrawOperatorDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *v30, v31);
      }
      else
      {
        v32 = j_va("%i Missing Operator", v31);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v32, &colorRed);
        *y = *y + 8.0;
      }
      ++v30;
      ++v31;
    }
    while ( v30 != &clothData->m_operators.m_data[clothData->m_operators.m_size] );
    v29 = *x;
  }
  v33 = v29 - 12.0;
  *x = v29 - 12.0;
  v34 = (unsigned int)clothData->m_simClothDatas.m_size;
  if ( (int)v34 > 0 )
  {
    v35 = j_va("%i SimClothDatas", v34);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v35, &colorWhite);
    *y = *y + 8.0;
    v33 = *x;
  }
  v36 = v33 + 12.0;
  *x = v33 + 12.0;
  v37 = clothData->m_simClothDatas.m_data;
  v38 = 0;
  if ( v37 != &v37[clothData->m_simClothDatas.m_size] )
  {
    do
    {
      if ( *v37 )
      {
        HavokCloth_Debug_DrawSimClothDataDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *v37, v38);
      }
      else
      {
        v39 = j_va("%i Missing SimClothData", v38);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v39, &colorRed);
        *y = *y + 8.0;
      }
      ++v37;
      ++v38;
    }
    while ( v37 != &clothData->m_simClothDatas.m_data[clothData->m_simClothDatas.m_size] );
    v36 = *x;
  }
  v40 = v36 - 12.0;
  *x = v36 - 12.0;
  v41 = (unsigned int)clothData->m_clothStateDatas.m_size;
  if ( (int)v41 > 0 )
  {
    v42 = j_va("%i ClothStates", v41);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v42, &colorWhite);
    *y = *y + 8.0;
    v40 = *x;
  }
  v43 = v40 + 12.0;
  *x = v40 + 12.0;
  v44 = clothData->m_clothStateDatas.m_data;
  v45 = 0;
  if ( v44 != &v44[clothData->m_clothStateDatas.m_size] )
  {
    do
    {
      if ( *v44 )
      {
        HavokCloth_Debug_DrawClothStateDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *v44, v45);
      }
      else
      {
        v46 = j_va("%i Missing ClothState", v45);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v46, &colorRed);
        *y = *y + 8.0;
      }
      ++v44;
      ++v45;
    }
    while ( v44 != &clothData->m_clothStateDatas.m_data[clothData->m_clothStateDatas.m_size] );
    v43 = *x;
  }
  v47 = v43 - 12.0;
  *x = v43 - 12.0;
  v48 = (unsigned int)clothData->m_stateTransitions.m_size;
  if ( (int)v48 > 0 )
  {
    v49 = j_va("%i StateTransitions", v48);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v49, &colorWhite);
    *y = *y + 8.0;
    v47 = *x;
  }
  v50 = v47 + 12.0;
  *x = v47 + 12.0;
  v51 = clothData->m_stateTransitions.m_data;
  v52 = 0;
  if ( v51 != &v51[clothData->m_stateTransitions.m_size] )
  {
    do
    {
      if ( *v51 )
      {
        HavokCloth_Debug_DrawStateTransitionDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *v51, v52);
      }
      else
      {
        v53 = j_va("%i Missing StateTransition", v52);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v53, &colorRed);
        *y = *y + 8.0;
      }
      ++v51;
      ++v52;
    }
    while ( v51 != &clothData->m_stateTransitions.m_data[clothData->m_stateTransitions.m_size] );
    v50 = *x;
  }
  v54 = v50 - 12.0;
  *x = v50 - 12.0;
  v55 = (unsigned int)clothData->m_actions.m_size;
  if ( (int)v55 > 0 )
  {
    v56 = j_va("%i Actions", v55);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v56, &colorWhite);
    *y = *y + 8.0;
    v54 = *x;
  }
  v57 = v54 + 12.0;
  *x = v54 + 12.0;
  v58 = clothData->m_actions.m_data;
  if ( v58 != &v58[clothData->m_actions.m_size] )
  {
    v59 = 0;
    do
    {
      if ( *v58 )
      {
        if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1023, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
          __debugbreak();
        if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1026, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
          __debugbreak();
        if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1027, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
          __debugbreak();
        v60 = j_va("%i: %s", v59, "Unexpected data - we haven't implemented any actions");
        v61 = &colorWhite;
      }
      else
      {
        v60 = j_va("%i Missing Action", v59);
        v61 = &colorRed;
      }
      Cloth_Debug_DrawString(scrPlace, *x, *y, v60, v61);
      *y = *y + 8.0;
      ++v58;
      ++v59;
    }
    while ( v58 != &clothData->m_actions.m_data[clothData->m_actions.m_size] );
    v57 = *x;
  }
  *x = v57 - 24.0;
}

/*
==============
HavokCloth_Debug_DrawClothStateDetails
==============
*/
void HavokCloth_Debug_DrawClothStateDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclClothState *clothState, int clothStateIdx)
{
  signed __int64 v9; 
  void *v10; 
  float *v12; 
  float *v13; 
  const ScreenPlacement *v14; 
  const char *v15; 
  float v16; 
  __int64 m_size; 
  const hclClothState *v18; 
  const char *v19; 
  int simClothIdIdx; 
  float v21; 
  const unsigned int *m_data; 
  float v23; 
  __int64 v24; 
  const char *v25; 
  float v26; 
  const unsigned int *v27; 
  int v28; 
  float v29; 
  __int64 v30; 
  const char *v31; 
  hclClothState::TransformSetAccess *v32; 
  unsigned int v33; 
  __int64 v34; 
  const char *v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int *v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int *v44; 
  unsigned int v45; 
  unsigned int v46; 
  const char *v47; 
  unsigned int v48; 
  float v49; 
  const char *v50; 
  unsigned int v51; 
  float v52; 
  float v53; 
  hclClothData *clothDataa; 
  __int64 clothDataIdxa; 
  unsigned int v56; 
  unsigned int numTags; 
  int v58; 
  ClothAssetBoneMapping *v60; 
  hclClothState::TransformSetAccess *v62; 
  hclTransformSetUsage::TransformTracker *v63; 
  scr_string_t tagNames[4096]; 
  scr_string_t v67[4096]; 

  v10 = alloca(v9);
  v12 = y;
  v13 = x;
  v14 = scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 845, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 846, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 847, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 848, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 849, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 850, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !clothState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 851, ASSERT_TYPE_ASSERT, "(clothState)", (const char *)&queryFormat, "clothState") )
    __debugbreak();
  v15 = j_va("%i: %s", (unsigned int)clothStateIdx, (const char *)((unsigned __int64)clothState->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(v14, *v13, *v12, v15, &colorWhite);
  *v12 = *v12 + 8.0;
  v16 = *v13 + 12.0;
  *v13 = v16;
  m_size = (unsigned int)clothState->m_usedSimCloths.m_size;
  v18 = clothState;
  if ( (int)m_size > 0 )
  {
    v19 = j_va("%i UsedSimCloths", m_size);
    Cloth_Debug_DrawString(v14, *v13, *v12, v19, &colorWhite);
    *v12 = *v12 + 8.0;
    v16 = *v13;
    v18 = clothState;
  }
  simClothIdIdx = 0;
  v21 = v16 + 12.0;
  *v13 = v21;
  m_data = v18->m_usedSimCloths.m_data;
  if ( m_data != &m_data[v18->m_usedSimCloths.m_size] )
  {
    do
    {
      HavokCloth_Debug_DrawSimClothIdDetails(v14, v13, v12, asset, container, clothData, clothDataIdx, *m_data, simClothIdIdx);
      v18 = clothState;
      ++m_data;
      ++simClothIdIdx;
    }
    while ( m_data != &clothState->m_usedSimCloths.m_data[clothState->m_usedSimCloths.m_size] );
    v21 = *v13;
  }
  v23 = v21 - 12.0;
  *v13 = v21 - 12.0;
  v24 = (unsigned int)v18->m_operators.m_size;
  if ( (int)v24 > 0 )
  {
    v25 = j_va("%i Operators", v24);
    Cloth_Debug_DrawString(v14, *v13, *v12, v25, &colorWhite);
    v18 = clothState;
    *v12 = *v12 + 8.0;
    v23 = *v13;
  }
  v26 = v23 + 12.0;
  *v13 = v23 + 12.0;
  v27 = v18->m_operators.m_data;
  v28 = 0;
  if ( v27 != &v27[v18->m_operators.m_size] )
  {
    do
    {
      HavokCloth_Debug_DrawOperatorIdDetails(v14, v13, v12, asset, container, clothData, clothDataIdx, *v27, v28);
      v18 = clothState;
      ++v27;
      ++v28;
    }
    while ( v27 != &clothState->m_operators.m_data[clothState->m_operators.m_size] );
    v26 = *v13;
  }
  v29 = v26 - 12.0;
  *v13 = v26 - 12.0;
  v30 = (unsigned int)v18->m_usedTransformSets.m_size;
  if ( (int)v30 > 0 )
  {
    v31 = j_va("%i Used Transform Sets", v30);
    Cloth_Debug_DrawString(v14, *v13, *v12, v31, &colorWhite);
    v18 = clothState;
    *v12 = *v12 + 8.0;
    v29 = *v13;
  }
  *v13 = v29 + 12.0;
  v32 = v18->m_usedTransformSets.m_data;
  v33 = 0;
  v58 = 0;
  v62 = v32;
  if ( v32 == &v32[v18->m_usedTransformSets.m_size] )
  {
    v53 = (float)(v29 + 12.0) - 24.0;
  }
  else
  {
    v34 = clothDataIdx;
    do
    {
      v63 = v32->m_transformSetUsage.m_perComponentTransformTrackers.m_data;
      v60 = &asset->boneMappingSets[v34].boneMappings[v32->m_transformSetIndex];
      v35 = j_va("Used Transform Set %i", v33);
      Cloth_Debug_DrawString(v14, *v13, *v12, v35, &colorWhite);
      *v12 = *v12 + 8.0;
      *v13 = *v13 + 12.0;
      v36 = v63->m_read.m_storage.m_words.m_size;
      LODWORD(v37) = 0;
      v38 = v63->m_read.m_storage.m_words.m_data;
      v39 = 0;
      numTags = 0;
      v56 = 0;
      if ( v36 )
        v39 = *v38;
      while ( v39 )
      {
LABEL_41:
        v40 = __lzcnt(v39);
        if ( v40 >= 0x20 )
        {
          LODWORD(clothDataIdxa) = 32;
          LODWORD(clothDataa) = v40;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", clothDataa, clothDataIdxa) )
            __debugbreak();
        }
        if ( (v39 & (0x80000000 >> v40)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v39 &= ~(0x80000000 >> v40);
        tagNames[numTags++] = v60->scrTagNames[((_DWORD)v37 << 6) - (v40 + 32 * (_DWORD)v37) + 31];
      }
      while ( 1 )
      {
        v37 = (unsigned int)(v37 + 1);
        if ( (unsigned int)v37 >= v36 )
          break;
        v39 = v38[v37];
        if ( v39 )
          goto LABEL_41;
      }
      LODWORD(v41) = 0;
      v42 = 0;
      v43 = v63->m_written.m_storage.m_words.m_size;
      v44 = v63->m_written.m_storage.m_words.m_data;
      if ( v43 )
        v42 = *v44;
      v45 = 0;
      while ( v42 )
      {
LABEL_54:
        v46 = __lzcnt(v42);
        if ( v46 >= 0x20 )
        {
          LODWORD(clothDataIdxa) = 32;
          LODWORD(clothDataa) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", clothDataa, clothDataIdxa) )
            __debugbreak();
        }
        if ( (v42 & (0x80000000 >> v46)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v42 &= ~(0x80000000 >> v46);
        v67[v56] = v60->scrTagNames[((_DWORD)v41 << 6) - (v46 + 32 * (_DWORD)v41) + 31];
        v45 = ++v56;
      }
      while ( 1 )
      {
        v41 = (unsigned int)(v41 + 1);
        if ( (unsigned int)v41 >= v43 )
          break;
        v42 = v44[v41];
        if ( v42 )
          goto LABEL_54;
      }
      v47 = j_va("%i Read Bones", numTags);
      v12 = y;
      v13 = x;
      v14 = scrPlace;
      Cloth_Debug_DrawString(scrPlace, *x, *y, v47, &colorWhite);
      *y = *y + 8.0;
      v48 = 0;
      v49 = *x + 12.0;
      *x = v49;
      if ( numTags )
      {
        do
        {
          HavokCloth_Debug_DrawTags(scrPlace, x, y, tagNames, numTags, v48);
          v48 += 5;
        }
        while ( v48 < numTags );
        v49 = *x;
      }
      *x = v49 - 12.0;
      v50 = j_va("%i Written Bones", v45);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v50, &colorWhite);
      *y = *y + 8.0;
      v51 = 0;
      v52 = *x + 12.0;
      *x = v52;
      if ( v45 )
      {
        do
        {
          HavokCloth_Debug_DrawTags(scrPlace, x, y, v67, v45, v51);
          v51 += 5;
        }
        while ( v51 < v45 );
        v52 = *x;
      }
      v32 = v62 + 1;
      v34 = clothDataIdx;
      v33 = v58 + 1;
      *x = v52 - 24.0;
      v62 = v32;
      ++v58;
    }
    while ( v32 != &clothState->m_usedTransformSets.m_data[clothState->m_usedTransformSets.m_size] );
    v53 = (float)(v52 - 24.0) - 24.0;
  }
  *v13 = v53;
}

/*
==============
HavokCloth_Debug_DrawHavokClothInstanceDetails
==============
*/
void HavokCloth_Debug_DrawHavokClothInstanceDetails(const ScreenPlacement *scrPlace, float *x, float *y, const hclClothInstance *const clothInstance, const unsigned int clothInstanceIdx)
{
  const hclClothInstance *v5; 
  const ScreenPlacement *v8; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclClothState *v11; 
  const char *v12; 
  __int64 m_stateTransitionIndex; 
  hclStateTransition *v14; 
  __int64 v15; 
  __int64 v16; 
  const hclClothState *v17; 
  const hclClothState *v18; 
  const char *v19; 
  const hclClothState *v20; 
  __int64 m_size; 
  const char *v22; 
  float v23; 
  __int64 v24; 
  __int64 v25; 
  const hclSimClothData *v26; 
  hclSimClothInstance *v27; 
  const hclSimClothData::OverridableSimulationInfo *SimulationInfo; 
  const char *v29; 
  const char *v30; 
  float v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  const hclClothState *v38; 
  __int64 v39; 

  v5 = clothInstance;
  v8 = scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1299, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1300, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1301, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1302, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = v5->m_clothData;
  if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1306, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  m_currentState = (int)v5->m_currentState;
  if ( (unsigned int)m_currentState >= m_clothData->m_clothStateDatas.m_size )
  {
    LODWORD(v32) = v5->m_currentState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1310, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "stateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v32, m_clothData->m_clothStateDatas.m_size) )
      __debugbreak();
  }
  v11 = m_clothData->m_clothStateDatas.m_data[m_currentState];
  v38 = v11;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1312, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  v12 = j_va("%i: State %i %s", clothInstanceIdx, (unsigned int)m_currentState, (const char *)((unsigned __int64)v11->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(v8, *x, *y, v12, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  m_stateTransitionIndex = (int)v5->m_stateTransitionIndex;
  v34 = m_stateTransitionIndex;
  if ( (_DWORD)m_stateTransitionIndex != 0x7FFFFFFF )
  {
    v14 = (hclStateTransition *)m_clothData->m_stateTransitions.m_data[m_stateTransitionIndex];
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1327, ASSERT_TYPE_ASSERT, "(stateTransition)", (const char *)&queryFormat, "stateTransition") )
      __debugbreak();
    v15 = (int)hclStateTransition::getFromState(v14);
    v16 = (int)hclStateTransition::getToState(v14);
    if ( (unsigned int)v15 >= m_clothData->m_clothStateDatas.m_size )
    {
      LODWORD(v33) = m_clothData->m_clothStateDatas.m_size;
      LODWORD(v32) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1332, ASSERT_TYPE_ASSERT, "(unsigned)( startStateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "startStateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( (unsigned int)v16 >= m_clothData->m_clothStateDatas.m_size )
    {
      LODWORD(v33) = m_clothData->m_clothStateDatas.m_size;
      LODWORD(v32) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1333, ASSERT_TYPE_ASSERT, "(unsigned)( endStateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "endStateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    v17 = m_clothData->m_clothStateDatas.m_data[v15];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1337, ASSERT_TYPE_ASSERT, "(startState)", (const char *)&queryFormat, "startState") )
      __debugbreak();
    v18 = m_clothData->m_clothStateDatas.m_data[v16];
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1339, ASSERT_TYPE_ASSERT, "(endState)", (const char *)&queryFormat, "endState") )
      __debugbreak();
    LODWORD(v32) = v16;
    v19 = j_va("Transitioning with transition %i %s from state %i %s to %i %s", v34, (const char *)((unsigned __int64)v14->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64), (unsigned int)v15, (const char *)((unsigned __int64)v17->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64), v32, (const char *)((unsigned __int64)v18->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
    v8 = scrPlace;
    Cloth_Debug_DrawString(scrPlace, *x, *y, v19, &colorWhite);
    v5 = clothInstance;
    *y = *y + 8.0;
  }
  v20 = v38;
  m_size = v38->m_usedSimCloths.m_size;
  if ( (int)m_size <= 0 )
  {
    v31 = *x;
  }
  else
  {
    v22 = j_va("%i Used Sim Cloths", (unsigned int)m_size);
    Cloth_Debug_DrawString(v8, *x, *y, v22, &colorWhite);
    *y = *y + 8.0;
    v39 = m_size;
    v35 = 0;
    v23 = *x + 12.0;
    *x = v23;
    if ( (int)m_size > 0 )
    {
      v24 = 0i64;
      do
      {
        v25 = (int)v20->m_usedSimCloths.m_data[v24];
        if ( (unsigned int)v25 >= m_clothData->m_simClothDatas.m_size )
        {
          LODWORD(v33) = m_clothData->m_simClothDatas.m_size;
          LODWORD(v32) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1359, ASSERT_TYPE_ASSERT, "(unsigned)( simClothIdx ) < (unsigned)( clothData->m_simClothDatas.getSize() )", "simClothIdx doesn't index clothData->m_simClothDatas.getSize()\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v26 = m_clothData->m_simClothDatas.m_data[v25];
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1363, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
          __debugbreak();
        v27 = v5->m_simClothInstances.m_data[v25];
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1367, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance") )
          __debugbreak();
        SimulationInfo = hclSimClothInstance::getSimulationInfo(v27);
        v29 = j_va("%i: Simcloth %i %s", v35, (unsigned int)v25, (const char *)((unsigned __int64)v26->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
        Cloth_Debug_DrawString(scrPlace, *x, *y, v29, &colorWhite);
        *y = *y + 8.0;
        *x = *x + 12.0;
        if ( SimulationInfo->m_computeVelocity.m_bool )
        {
          v30 = j_va("Computed average velocity of (%.2f, %.2f, %.2f) and speed of %.2f", (float)(v27->m_averageParticleVelocity.m_quad.m128_f32[0] * 32.0), (float)(v27->m_averageParticleVelocity.m_quad.m128_f32[1] * 32.0), (float)(v27->m_averageParticleVelocity.m_quad.m128_f32[2] * 32.0), fsqrt((float)((float)((float)(v27->m_averageParticleVelocity.m_quad.m128_f32[1] * v27->m_averageParticleVelocity.m_quad.m128_f32[1]) + (float)(v27->m_averageParticleVelocity.m_quad.m128_f32[0] * v27->m_averageParticleVelocity.m_quad.m128_f32[0])) + (float)(v27->m_averageParticleVelocity.m_quad.m128_f32[2] * v27->m_averageParticleVelocity.m_quad.m128_f32[2])) * 1024.0));
          Cloth_Debug_DrawString(scrPlace, *x, *y, v30, &colorWhite);
          *y = *y + 8.0;
        }
        v5 = clothInstance;
        v20 = v38;
        ++v24;
        v23 = *x - 12.0;
        *x = v23;
        ++v35;
      }
      while ( v24 < v39 );
    }
    v31 = v23 - 12.0;
  }
  *x = v31 - 12.0;
}

/*
==============
HavokCloth_Debug_DrawInstanceDetails
==============
*/
void HavokCloth_Debug_DrawInstanceDetails(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  signed __int64 v4; 
  void *v5; 
  const ClothAsset *v10; 
  unsigned int InstanceRuntimeMemoryRequirements; 
  const char *v12; 
  HavokCloth_Update_StateId TargetStateId; 
  const char *v14; 
  unsigned int NumClothInstances; 
  unsigned int v16; 
  const char *v17; 
  unsigned int activeCollidableDataIdx; 
  unsigned int v19; 
  const hclClothInstance *ClothInstance; 
  unsigned int v21; 
  const char *v22; 
  const char *v23; 
  double BlendedSpeed; 
  const char *v25; 
  unsigned int numCollidables; 
  float speed[2]; 
  HavokCloth_ActiveCollidableData outputBuffer[256]; 

  v5 = alloca(v4);
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1404, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1405, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1406, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1407, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  *(_QWORD *)speed = HavokCloth_GetClothAsset(0, instanceId);
  v10 = *(const ClothAsset **)speed;
  if ( !*(_QWORD *)speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1411, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  InstanceRuntimeMemoryRequirements = HavokCloth_GetInstanceRuntimeMemoryRequirements(0, instanceId);
  if ( InstanceRuntimeMemoryRequirements )
  {
    v12 = j_va("Runtime Memory Requirements: %i bytes", InstanceRuntimeMemoryRequirements);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v12, &colorWhite);
    *y = *y + 8.0;
  }
  TargetStateId = HavokCloth_Update_GetTargetStateId(0, instanceId);
  if ( TargetStateId )
  {
    if ( TargetStateId == HAVOK_CLOTH_UPDATE_STATEID_ANIMATED )
      v14 = j_va("Too far away for simulation - targeting Animated state");
    else
      v14 = j_va("Targeting Simulation LOD %i", (unsigned int)(TargetStateId - 2));
  }
  else
  {
    v14 = j_va("Not updated last frame - Forcing Animated state until next update");
  }
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  NumClothInstances = HavokCloth_GetNumClothInstances(0, instanceId);
  v16 = NumClothInstances;
  if ( NumClothInstances )
  {
    v17 = j_va("%i Havok Cloth Instances", NumClothInstances);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v17, &colorWhite);
    *y = *y + 8.0;
    *x = *x + 12.0;
  }
  activeCollidableDataIdx = 0;
  v19 = 0;
  if ( v16 )
  {
    do
    {
      ClothInstance = HavokCloth_GetClothInstance(0, instanceId, v19);
      if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1460, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      HavokCloth_Debug_DrawHavokClothInstanceDetails(scrPlace, x, y, ClothInstance, v19++);
    }
    while ( v19 < v16 );
    v10 = *(const ClothAsset **)speed;
    activeCollidableDataIdx = 0;
    *x = *x - 12.0;
  }
  numCollidables = 0;
  HavokCloth_GetActiveCollidables(0, instanceId, outputBuffer, 0x100u, &numCollidables, 1);
  v21 = numCollidables;
  if ( numCollidables )
  {
    v22 = j_va("%i Active Collidables", numCollidables);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v22, &colorWhite);
    v21 = numCollidables;
    *y = *y + 8.0;
    *x = *x + 12.0;
  }
  if ( v21 )
  {
    do
    {
      HavokCloth_Debug_DrawActiveCollidableDetails(scrPlace, x, y, instanceId, v10, &outputBuffer[activeCollidableDataIdx], activeCollidableDataIdx);
      ++activeCollidableDataIdx;
    }
    while ( activeCollidableDataIdx < numCollidables );
    if ( numCollidables )
      *x = *x - 12.0;
  }
  if ( HavokCloth_Update_GetNeedsSoundUpdate(0, instanceId) )
  {
    speed[0] = 0.0;
    if ( HavokCloth_GetSimulatedSpeed(0, instanceId, speed) )
    {
      v23 = j_va("Simulated Speed: %.2f", speed[0]);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v23, &colorWhite);
      *y = *y + 8.0;
    }
    BlendedSpeed = HavokCloth_GetBlendedSpeed(0, instanceId);
    v25 = j_va("Blended Speed:   %.2f", *(float *)&BlendedSpeed);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v25, &colorWhite);
    *y = *y + 8.0;
  }
}

/*
==============
HavokCloth_Debug_DrawInstanceVectorField
==============
*/
void HavokCloth_Debug_DrawInstanceVectorField(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  __int64 v4; 
  const ClothAsset *ClothAsset; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  const char *v21; 
  const char *v22; 
  vec3_t center; 
  vec3_t end; 
  vec3_t v25; 
  vec3_t xyz; 

  v4 = instanceId;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1515, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1516, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1517, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( (_DWORD)v4 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1518, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  ClothAsset = HavokCloth_GetClothAsset(0, v4);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1522, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  if ( !ClothAsset->vectorFieldSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1523, ASSERT_TYPE_ASSERT, "(clothAsset->vectorFieldSupport)", (const char *)&queryFormat, "clothAsset->vectorFieldSupport") )
    __debugbreak();
  v8 = s_HavokCloth_Debug_VectorFieldData[0][v4].position.v[0];
  v9 = s_HavokCloth_Debug_VectorFieldData[0][v4].position.v[1];
  v10 = s_HavokCloth_Debug_VectorFieldData[0][v4].position.v[2];
  v11 = 0.0099999998 * s_HavokCloth_Debug_VectorFieldData[0][v4].velocity.v[1];
  end.v[0] = (float)(0.0099999998 * s_HavokCloth_Debug_VectorFieldData[0][v4].velocity.v[0]) + v8;
  v12 = 0.0099999998 * s_HavokCloth_Debug_VectorFieldData[0][v4].velocity.v[2];
  end.v[1] = v11 + v9;
  end.v[2] = v12 + v10;
  v13 = 0.0099999998 * s_HavokCloth_Debug_VectorFieldData[0][v4].force.v[1];
  v25.v[0] = (float)(0.0099999998 * s_HavokCloth_Debug_VectorFieldData[0][v4].force.v[0]) + v8;
  v14 = 0.0099999998 * s_HavokCloth_Debug_VectorFieldData[0][v4].force.v[2];
  v25.v[1] = v13 + v9;
  v25.v[2] = v14 + v10;
  center.v[0] = v8;
  center.v[1] = v9;
  center.v[2] = v10;
  CG_DebugSphere(&center, 1.0, &colorYellow, 0, 0);
  CL_AddDebugLine(&center, &end, &colorYellow, 0, 0, 0);
  CL_AddDebugLine(&center, &v25, &colorBlue, 0, 0, 0);
  v15 = s_HavokCloth_Debug_VectorFieldData[0][v4].velocity.v[1];
  v16 = s_HavokCloth_Debug_VectorFieldData[0][v4].velocity.v[0];
  v17 = s_HavokCloth_Debug_VectorFieldData[0][v4].velocity.v[2];
  v18 = s_HavokCloth_Debug_VectorFieldData[0][v4].force.v[1];
  v19 = s_HavokCloth_Debug_VectorFieldData[0][v4].force.v[0];
  v20 = s_HavokCloth_Debug_VectorFieldData[0][v4].force.v[2];
  xyz.v[0] = center.v[0];
  xyz.v[1] = center.v[1];
  xyz.v[2] = center.v[2] - 6.0;
  v21 = j_va("Velocity: %.2f", fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17)));
  CL_AddDebugString(&center, &colorYellow, 0.5, v21, 0, 0);
  v22 = j_va("Force: %.2f", fsqrt((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20)));
  CL_AddDebugString(&xyz, &colorBlue, 0.5, v22, 0, 0);
}

/*
==============
HavokCloth_Debug_DrawOperatorDetails
==============
*/
void HavokCloth_Debug_DrawOperatorDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclOperator *op, int opIdx)
{
  const char *v13; 
  const char *v14; 
  __int64 m_size; 
  const char *v16; 
  float v17; 
  hclClothState::BufferAccess *m_data; 
  unsigned int v19; 
  __int64 m_bufferIndex; 
  const char *v21; 
  float v22; 
  __int64 v23; 
  const char *v24; 
  hclClothState::TransformSetAccess *v25; 
  unsigned int v26; 
  const char *v27; 
  float v28; 
  char *fmt; 
  const char *v30; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 728, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 729, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 730, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 731, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 732, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 733, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !op && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 734, ASSERT_TYPE_ASSERT, "(op)", (const char *)&queryFormat, "op") )
    __debugbreak();
  v13 = j_va("%i: %s", (unsigned int)opIdx, (const char *)((unsigned __int64)op->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  v14 = j_va("ID: %i - Type: %s", op->m_operatorID, s_HavokCloth_OperatorTypeNames[op->m_type.m_storage]);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  m_size = (unsigned int)op->m_usedBuffers.m_size;
  if ( (int)m_size > 0 )
  {
    v16 = j_va("%i UsedBuffers", m_size);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v16, &colorWhite);
    *y = *y + 8.0;
  }
  v17 = *x + 12.0;
  *x = v17;
  m_data = op->m_usedBuffers.m_data;
  v19 = 0;
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
      v30 = (const char *)((unsigned __int64)clothData->m_bufferDefinitions.m_data[m_bufferIndex]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
      LODWORD(fmt) = m_data->m_shadowBufferIndex;
      v21 = j_va("%i: Buffer %i %s - ShadowBuffer %i %s", v19, m_bufferIndex, v30, fmt, v30);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v21, &colorWhite);
      *y = *y + 8.0;
      ++m_data;
      ++v19;
    }
    while ( m_data != &op->m_usedBuffers.m_data[op->m_usedBuffers.m_size] );
    v17 = *x;
  }
  v22 = v17 - 12.0;
  *x = v17 - 12.0;
  v23 = (unsigned int)op->m_usedTransformSets.m_size;
  if ( (int)v23 > 0 )
  {
    v24 = j_va("%i UsedTransformSets", v23);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v24, &colorWhite);
    *y = *y + 8.0;
    v22 = *x;
  }
  *x = v22 + 12.0;
  v25 = op->m_usedTransformSets.m_data;
  if ( v25 == &v25[op->m_usedTransformSets.m_size] )
  {
    v28 = (float)(v22 + 12.0) - 24.0;
  }
  else
  {
    v26 = 0;
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
      v27 = j_va("%i: Transform Set %i %s", v26, (int)v25->m_transformSetIndex, (const char *)((unsigned __int64)clothData->m_transformSetDefinitions.m_data[v25->m_transformSetIndex]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
      Cloth_Debug_DrawString(scrPlace, *x, *y, v27, &colorWhite);
      *y = *y + 8.0;
      ++v25;
      ++v26;
    }
    while ( v25 != &op->m_usedTransformSets.m_data[op->m_usedTransformSets.m_size] );
    v28 = *x - 24.0;
  }
  *x = v28;
}

/*
==============
HavokCloth_Debug_DrawOperatorIdDetails
==============
*/
void HavokCloth_Debug_DrawOperatorIdDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const unsigned int operatorId, int operatorIdIdx)
{
  const char *v13; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 558, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 559, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 560, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 561, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 562, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 563, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  v13 = j_va("%i: Operator %i %s", (unsigned int)operatorIdIdx, (int)operatorId, (const char *)((unsigned __int64)clothData->m_operators.m_data[operatorId]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
  *y = *y + 8.0;
}

/*
==============
HavokCloth_Debug_DrawShapeDetails
==============
*/
void HavokCloth_Debug_DrawShapeDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclShape *shape)
{
  __int64 m_storage; 
  const char *v10; 
  const char *v11; 
  const char *v22; 
  hkMemoryAllocator *v23; 
  hkMemoryAllocator *v24; 
  hkGeometry geometry; 
  __int128 v26; 

  *(_QWORD *)&v26 = -2i64;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 226, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 227, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 228, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 229, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  m_storage = shape->m_type.m_storage;
  v10 = j_va("Shape: %s", s_HavokCloth_ShapeNames[m_storage]);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v10, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  switch ( (int)m_storage )
  {
    case 0:
      v11 = j_va("Pos:(%.2f, %.2f, %.2f) - Radius:%.2f", (float)(*(float *)&shape[1].__vftable * 32.0), (float)(*((float *)&shape[1].__vftable + 1) * 32.0), (float)(*(float *)&shape[1].m_propertyBag.m_bag * 32.0), (float)(32.0 * *((float *)&shape[1].m_propertyBag.m_bag + 1)));
      goto LABEL_24;
    case 1:
      v11 = j_va("Plane Equation:(%.2f, %.2f, %.2f, %.2f)", (float)(*(float *)&shape[1].__vftable * 32.0), (float)(*((float *)&shape[1].__vftable + 1) * 32.0), (float)(32.0 * *(float *)&shape[1].m_propertyBag.m_bag), *((float *)&shape[1].m_propertyBag.m_bag + 1));
      goto LABEL_24;
    case 2:
      _XMM1 = _mm128_sub_ps(*(__m128 *)&shape[1].__vftable, *(__m128 *)&shape[1].m_memSizeAndFlags);
      __asm
      {
        vdpps   xmm6, xmm1, xmm1, 7Fh
        vrsqrtps xmm4, xmm6
        vcmpleps xmm5, xmm6, xmm0
      }
      _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM6), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
      __asm { vandnps xmm4, xmm5, xmm0 }
      v11 = j_va("Length:%.2f - Radius:%.2f", (float)(*(float *)&_XMM4 * 32.0), (float)(*(float *)&shape[2].m_memSizeAndFlags * 32.0));
      goto LABEL_24;
    case 3:
      _XMM1 = _mm128_sub_ps(*(__m128 *)&shape[1].__vftable, *(__m128 *)&shape[1].m_memSizeAndFlags);
      __asm
      {
        vdpps   xmm6, xmm1, xmm1, 7Fh
        vrsqrtps xmm4, xmm6
        vcmpleps xmm5, xmm6, xmm0
      }
      _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM6), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
      __asm { vandnps xmm5, xmm5, xmm0 }
      v11 = j_va("Length:%.2f - Radii:(%.2f, %.2f)", (float)(*(float *)&_XMM5 * 32.0), (float)(*(float *)&shape[4].m_memSizeAndFlags * 32.0), (float)(*(float *)(&shape[4].m_refCount + 1) * 32.0));
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
      v22 = j_va("Verts:%i - Tris:%i", (unsigned int)geometry.m_vertices.m_size, (unsigned int)geometry.m_triangles.m_size);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v22, &colorWhite);
      *y = *y + 8.0;
      geometry.__vftable = (hkGeometry_vtbl *)hkGeometry::`vftable';
      v23 = hkMemHeapAllocator();
      geometry.m_triangles.m_size = 0;
      if ( geometry.m_triangles.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v23, geometry.m_triangles.m_data, 16, geometry.m_triangles.m_capacityAndFlags & 0x3FFFFFFF);
      geometry.m_triangles.m_data = NULL;
      geometry.m_triangles.m_capacityAndFlags = 0x80000000;
      v24 = hkMemHeapAllocator();
      geometry.m_vertices.m_size = 0;
      if ( geometry.m_vertices.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v24, geometry.m_vertices.m_data, 16, geometry.m_vertices.m_capacityAndFlags & 0x3FFFFFFF);
      geometry.m_vertices.m_data = NULL;
      geometry.m_vertices.m_capacityAndFlags = 0x80000000;
      hkReferencedObject::~hkReferencedObject(&geometry);
      goto $LN14_151;
    default:
      v11 = j_va("Unknown Shape Type: %i", (unsigned int)m_storage);
LABEL_24:
      Cloth_Debug_DrawString(scrPlace, *x, *y, v11, &colorWhite);
      *y = *y + 8.0;
$LN14_151:
      *x = *x - 12.0;
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
  const char *v13; 
  const char *v14; 
  const char *v15; 
  __int64 m_size; 
  const char *v17; 
  float v18; 
  unsigned int *m_data; 
  int operatorIdIdx; 
  float v21; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 790, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 791, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 792, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 793, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 794, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 795, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !simClothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 796, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
    __debugbreak();
  v13 = j_va("%i: %s", (unsigned int)simClothDataIdx, (const char *)((unsigned __int64)simClothData->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  v14 = j_va("Gravity: (%.2f %.2f %.2f)", (float)(simClothData->m_simulationInfo.m_gravity.m_quad.m128_f32[0] * 32.0), (float)(simClothData->m_simulationInfo.m_gravity.m_quad.m128_f32[1] * 32.0), (float)(simClothData->m_simulationInfo.m_gravity.m_quad.m128_f32[2] * 32.0));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  if ( simClothData->m_simulationInfo.m_computeVelocity.m_bool )
  {
    v15 = j_va("Requests Velocity be computed");
    Cloth_Debug_DrawString(scrPlace, *x, *y, v15, &colorWhite);
    *y = *y + 8.0;
  }
  m_size = (unsigned int)simClothData->m_simOpIds.m_size;
  if ( (int)m_size > 0 )
  {
    v17 = j_va("%i Operators", m_size);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v17, &colorWhite);
    *y = *y + 8.0;
  }
  v18 = *x + 12.0;
  *x = v18;
  m_data = simClothData->m_simOpIds.m_data;
  operatorIdIdx = 0;
  if ( m_data == &m_data[simClothData->m_simOpIds.m_size] )
  {
    v21 = v18 - 24.0;
  }
  else
  {
    do
      HavokCloth_Debug_DrawOperatorIdDetails(scrPlace, x, y, asset, container, clothData, clothDataIdx, *m_data++, operatorIdIdx++);
    while ( m_data != &simClothData->m_simOpIds.m_data[simClothData->m_simOpIds.m_size] );
    v21 = *x - 24.0;
  }
  *x = v21;
}

/*
==============
HavokCloth_Debug_DrawSimClothIdDetails
==============
*/
void HavokCloth_Debug_DrawSimClothIdDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const unsigned int simClothId, int simClothIdIdx)
{
  const hclSimClothData *v13; 
  const char *v14; 
  __int64 m_size; 
  const char *v16; 
  float v17; 
  const hclCollidable **m_data; 
  unsigned int v19; 
  const hclCollidable *v20; 
  const char *v21; 
  float v22; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 576, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 577, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 578, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 579, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 580, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 581, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  v13 = clothData->m_simClothDatas.m_data[simClothId];
  v14 = j_va("%i: Sim Cloth %i %s", (unsigned int)simClothIdIdx, (int)simClothId, (const char *)((unsigned __int64)v13->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  m_size = (unsigned int)v13->m_perInstanceCollidables.m_size;
  if ( (int)m_size <= 0 )
  {
    if ( !container->m_collidables.m_size )
      goto LABEL_24;
    v16 = j_va("No Active Collidables");
  }
  else
  {
    v16 = j_va("%i Active Collidables", m_size);
  }
  Cloth_Debug_DrawString(scrPlace, *x, *y, v16, &colorWhite);
  *y = *y + 8.0;
LABEL_24:
  v17 = *x + 12.0;
  *x = v17;
  m_data = v13->m_perInstanceCollidables.m_data;
  v19 = 0;
  if ( m_data == &m_data[v13->m_perInstanceCollidables.m_size] )
  {
    v22 = v17 - 24.0;
  }
  else
  {
    do
    {
      v20 = *m_data;
      if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 612, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
        __debugbreak();
      v21 = j_va("%i - %s", v19, (const char *)((unsigned __int64)v20->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
      Cloth_Debug_DrawString(scrPlace, *x, *y, v21, &colorWhite);
      *y = *y + 8.0;
      ++m_data;
      ++v19;
    }
    while ( m_data != &v13->m_perInstanceCollidables.m_data[v13->m_perInstanceCollidables.m_size] );
    v22 = *x - 24.0;
  }
  *x = v22;
}

/*
==============
HavokCloth_Debug_DrawStateTransitionDetails
==============
*/
void HavokCloth_Debug_DrawStateTransitionDetails(const ScreenPlacement *scrPlace, float *x, float *y, const ClothAsset *const asset, const hclClothContainer *container, const hclClothData *clothData, int clothDataIdx, const hclStateTransition *stateTransition, int stateTransitionIdx)
{
  const char *v14; 
  float v15; 
  __int64 m_size; 
  const char *v17; 
  float v18; 
  unsigned int *m_data; 
  __int64 v20; 
  const char *v21; 
  unsigned int containera; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 984, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 985, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 986, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 987, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 988, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 989, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  if ( !stateTransition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 990, ASSERT_TYPE_ASSERT, "(stateTransition)", (const char *)&queryFormat, "stateTransition") )
    __debugbreak();
  v14 = j_va("%i: %s", (unsigned int)stateTransitionIdx, (const char *)((unsigned __int64)stateTransition->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  v15 = *x + 12.0;
  *x = v15;
  m_size = (unsigned int)stateTransition->m_stateIds.m_size;
  if ( (int)m_size > 0 )
  {
    v17 = j_va("%i StateIds", m_size);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v17, &colorWhite);
    *y = *y + 8.0;
    v15 = *x;
  }
  v18 = v15 + 12.0;
  *x = v18;
  m_data = stateTransition->m_stateIds.m_data;
  containera = 0;
  if ( m_data != &m_data[stateTransition->m_stateIds.m_size] )
  {
    do
    {
      v20 = (int)*m_data;
      if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 627, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
        __debugbreak();
      if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 630, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
        __debugbreak();
      if ( !container && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 631, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
        __debugbreak();
      if ( !clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 632, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      v21 = j_va("%i: State %i %s", containera, (unsigned int)v20, (const char *)((unsigned __int64)clothData->m_clothStateDatas.m_data[v20]->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
      Cloth_Debug_DrawString(scrPlace, *x, *y, v21, &colorWhite);
      *y = *y + 8.0;
      ++m_data;
      ++containera;
    }
    while ( m_data != &stateTransition->m_stateIds.m_data[stateTransition->m_stateIds.m_size] );
    v18 = *x;
  }
  *x = v18 - 24.0;
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
  __int64 v13; 
  __int64 v14; 
  const char *v15; 
  scr_string_t v16; 
  const char *v17; 
  const char *v18; 
  __int64 v19; 
  const char *v20; 
  scr_string_t v21; 
  __int64 v22; 
  const char *v23; 
  scr_string_t v24; 
  const char *v25; 
  const char *v26; 
  __int64 v27; 
  const char *v28; 
  scr_string_t v29; 
  const char *v30; 
  scr_string_t v31; 
  const char *v32; 
  scr_string_t v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  __int64 v37; 
  const char *v38; 
  const char *v39; 
  scr_string_t v40; 
  const char *v41; 
  scr_string_t v42; 
  const char *v43; 
  scr_string_t v44; 
  const char *v45; 
  const char *v46; 
  __int64 v47; 
  unsigned int numTagsa; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 184, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 185, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 186, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
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
      Cloth_Debug_DrawString(scrPlace, *x, *y, v12, &colorWhite);
      *y = *y + 8.0;
      return;
    }
    v13 = startIdx + 2;
    if ( (_DWORD)v13 == numTags )
    {
      v14 = (unsigned int)v10;
      v15 = SL_ConvertToString(tagNames[v10]);
      v16 = tagNames[v14];
      v17 = SL_ConvertToString(tagNames[startIdx]);
      v18 = j_va("%i %s:%i %s", (unsigned int)tagNames[startIdx], v17, (unsigned int)v16, v15);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v18, &colorWhite);
LABEL_20:
      *y = *y + 8.0;
      return;
    }
    v19 = startIdx + 3;
    if ( (_DWORD)v19 == numTags )
    {
      v20 = SL_ConvertToString(tagNames[v13]);
      v21 = tagNames[v13];
      v22 = (unsigned int)v10;
      v23 = SL_ConvertToString(tagNames[v10]);
      v24 = tagNames[v22];
      v25 = SL_ConvertToString(tagNames[startIdx]);
      LODWORD(v47) = v21;
      v26 = j_va("%i %s:%i %s:%i %s", (unsigned int)tagNames[startIdx], v25, (unsigned int)v24, v23, v47, v20);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v26, &colorWhite);
      goto LABEL_20;
    }
    v27 = startIdx + 4;
    if ( (_DWORD)v27 == numTags )
    {
      v28 = SL_ConvertToString(tagNames[v19]);
      v29 = tagNames[v19];
      v30 = SL_ConvertToString(tagNames[v13]);
      v31 = tagNames[v13];
      v32 = SL_ConvertToString(tagNames[v10]);
      v33 = tagNames[(unsigned int)v10];
      v34 = v32;
      v35 = SL_ConvertToString(tagNames[startIdx]);
      LODWORD(v47) = v31;
      v36 = j_va("%i %s:%i %s:%i %s:%i %s", (unsigned int)tagNames[startIdx], v35, (unsigned int)v33, v34, v47, v30, v29, v28);
    }
    else
    {
      if ( startIdx + 5 > numTags )
        return;
      v37 = (unsigned int)v27;
      v38 = SL_ConvertToString(tagNames[v27]);
      numTagsa = tagNames[v37];
      v39 = SL_ConvertToString(tagNames[v19]);
      v40 = tagNames[v19];
      v41 = SL_ConvertToString(tagNames[v13]);
      v42 = tagNames[v13];
      v43 = SL_ConvertToString(tagNames[v10]);
      v44 = tagNames[(unsigned int)v10];
      v45 = v43;
      v46 = SL_ConvertToString(tagNames[startIdx]);
      LODWORD(v47) = v42;
      v36 = j_va("%i %s:%i %s:%i %s:%i %s:%i %s", (unsigned int)tagNames[startIdx], v46, (unsigned int)v44, v45, v47, v41, v40, v39, numTagsa, v38);
    }
    Cloth_Debug_DrawString(scrPlace, *x, *y, v36, &colorWhite);
    *y = *y + 8.0;
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
  const char *v14; 
  unsigned int m_numTransforms; 
  const char *v16; 
  ClothAssetBoneMappingSet *v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int startIdx; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 677, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  if ( !x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 678, ASSERT_TYPE_ASSERT, "(x)", (const char *)&queryFormat, "x") )
    __debugbreak();
  if ( !y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 679, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
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
  Cloth_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  v14 = j_va("Type: %s", s_HavokCloth_TransformSetDefinitionTypeNames[transformSetDefinition->m_type]);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v14, &colorWhite);
  *y = *y + 8.0;
  m_numTransforms = transformSetDefinition->m_numTransforms;
  v16 = j_va("Num Transforms: %i", m_numTransforms);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v16, &colorWhite);
  *y = *y + 8.0;
  *x = *x + 12.0;
  if ( (clothDataIdx < 0 || clothDataIdx >= (signed int)asset->boneMappingSetCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 705, ASSERT_TYPE_ASSERT, "(clothDataIdx >= 0 && clothDataIdx < static_cast<int>( asset->boneMappingSetCount ))", (const char *)&queryFormat, "clothDataIdx >= 0 && clothDataIdx < static_cast<int>( asset->boneMappingSetCount )") )
    __debugbreak();
  v17 = &asset->boneMappingSets[clothDataIdx];
  if ( (transformSetDefinitionIdx < 0 || transformSetDefinitionIdx >= (signed int)v17->boneMappingCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 709, ASSERT_TYPE_ASSERT, "(transformSetDefinitionIdx >= 0 && transformSetDefinitionIdx < static_cast<int>( boneMappingSet->boneMappingCount ))", (const char *)&queryFormat, "transformSetDefinitionIdx >= 0 && transformSetDefinitionIdx < static_cast<int>( boneMappingSet->boneMappingCount )") )
    __debugbreak();
  v18 = (__int64)&v17->boneMappings[transformSetDefinitionIdx];
  if ( *(_DWORD *)(v18 + 8) != m_numTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 713, ASSERT_TYPE_ASSERT, "(boneMapping->scrTagCount == numTransforms)", (const char *)&queryFormat, "boneMapping->scrTagCount == numTransforms") )
    __debugbreak();
  v19 = *(_DWORD *)(v18 + 8);
  for ( startIdx = 0; startIdx < v19; startIdx += 5 )
  {
    HavokCloth_Debug_DrawTags(scrPlace, x, y, *(scr_string_t **)v18, v19, startIdx);
    v19 = *(_DWORD *)(v18 + 8);
  }
  *x = *x - 24.0;
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
  __int128 v4; 
  unsigned int v7; 
  const ClothAsset *ClothAsset; 
  unsigned int soundCount; 
  const char *v11; 
  unsigned int v12; 
  float v13; 
  __int64 v14; 
  ClothAssetSound *sounds; 
  const char *v16; 
  const hkVector4f *FocusPosition; 
  float v18; 
  float v24; 
  const char *v25; 
  unsigned int CurrentSoundIdx; 
  __int64 v27; 
  unsigned int v28; 
  float *p_pitch; 
  __int64 v30; 
  __int64 v31; 
  double v32; 
  double v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  vec3_t xyz; 
  hkVector4f position; 
  __int128 v41; 

  v7 = instanceId;
  if ( !HavokCloth_IsInstanceInUse(0, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1739, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId )") )
    __debugbreak();
  ClothAsset = HavokCloth_GetClothAsset(0, v7);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1743, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  soundCount = ClothAsset->soundCount;
  v11 = j_va("Asset has %i sound entries", soundCount);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v11, &colorWhite);
  *y = *y + 8.0;
  v12 = 0;
  v13 = *x + 12.0;
  *x = v13;
  if ( soundCount )
  {
    v14 = 0i64;
    do
    {
      sounds = ClothAsset->sounds;
      v16 = j_va("%i SpeedRange(%.2f %.2f) SoundAlias %s VolumeRange(%.2f %.2f) PitchRange(%.2f %.2f)", v12, sounds[v14].minSpeed, sounds[v14].maxSpeed, sounds[v14].soundAlias, sounds[v14].volumeMinSpeed, sounds[v14].volumeMaxSpeed, sounds[v14].pitchMinSpeed, sounds[v14].pitchMaxSpeed);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v16, &colorWhite);
      ++v12;
      ++v14;
      *y = *y + 8.0;
    }
    while ( v12 < soundCount );
    v13 = *x;
    v7 = instanceId;
  }
  *x = v13 - 12.0;
  HavokCloth_GetInstancePosition(0, v7, &position);
  xyz.v[0] = 32.0 * position.m_quad.m128_f32[0];
  xyz.v[1] = 32.0 * position.m_quad.m128_f32[1];
  xyz.v[2] = 32.0 * position.m_quad.m128_f32[2];
  FocusPosition = HavokCloth_GetFocusPosition(0);
  v18 = fsqrt(ClothAsset->soundIWMaxDistanceSq);
  _XMM1 = _mm128_sub_ps(FocusPosition->m_quad, position.m_quad);
  __asm
  {
    vdpps   xmm6, xmm1, xmm1, 7Fh
    vrsqrtps xmm4, xmm6
    vcmpleps xmm5, xmm6, xmm0
  }
  _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM6, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
  __asm { vandnps xmm4, xmm5, xmm0 }
  v24 = *(float *)&_XMM4 * 32.0;
  if ( (float)(*(float *)&_XMM4 * 32.0) <= v18 )
  {
    CurrentSoundIdx = HavokCloth_GetCurrentSoundIdx(0, v7);
    LOBYTE(v27) = 0;
    v28 = CurrentSoundIdx;
    if ( !s_HavokCloth_Debug_SoundCache_NumEntries[0] )
      goto LABEL_19;
    v41 = v4;
    p_pitch = &s_HavokCloth_Debug_SoundCache[0][0].pitch;
    v30 = s_HavokCloth_Debug_SoundCache_NumEntries[0];
    do
    {
      if ( v7 == *((_DWORD *)p_pitch - 5) )
      {
        v31 = *(_QWORD *)(p_pitch - 3);
        v32 = *(p_pitch - 1);
        v33 = *p_pitch;
        v34 = j_va("AssetEntry:%i Sound:%s Volume:%.2f Pitch:%.2f", v28, v31, v32, v33);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v34, &colorWhite);
        *y = *y + 8.0;
        v35 = j_va("%s v:%.2f p:%.2f", v31, v32, v33);
        CL_AddDebugString(&xyz, &colorWhite, 0.5, v35, 0, 0);
        LOBYTE(v27) = 1;
      }
      p_pitch += 6;
      --v30;
    }
    while ( v30 );
    if ( !(_BYTE)v27 )
    {
LABEL_19:
      v36 = j_va("Did not play any sounds this frame", v27);
      Cloth_Debug_DrawString(scrPlace, *x, *y, v36, &colorWhite);
      *y = *y + 8.0;
    }
    *x = *x + 12.0;
    v37 = j_va("Distance %.2f (max %.2f)", v24, v18);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v37, &colorWhite);
    *y = *y + 8.0;
    *x = *x - 12.0;
  }
  else
  {
    v25 = j_va("Too far away (%.2f - max %.2f) to play sounds", v24, v18);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v25, &colorWhite);
    *y = *y + 8.0;
  }
}

/*
==============
HavokCloth_Debug_Sound_DrawSummary
==============
*/
void HavokCloth_Debug_Sound_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int v3; 
  const char *v7; 
  float *p_pitch; 
  __int64 v9; 
  unsigned int v10; 
  const char *v11; 
  const ClothAsset *ClothAsset; 
  const char *name; 
  unsigned int CurrentSoundIdx; 
  const char *v15; 
  double v16; 
  double v17; 
  const char *v18; 
  const char *v19; 
  vec3_t xyz; 
  hkVector4f position; 

  v3 = s_HavokCloth_Debug_SoundCache_NumEntries[0];
  v7 = j_va("%i Sounds Playing", s_HavokCloth_Debug_SoundCache_NumEntries[0]);
  Cloth_Debug_DrawString(scrPlace, *x, *y, v7, &colorWhite);
  *y = *y + 8.0;
  if ( v3 )
  {
    p_pitch = &s_HavokCloth_Debug_SoundCache[0][0].pitch;
    v9 = v3;
    do
    {
      v10 = *((_DWORD *)p_pitch - 5);
      if ( HavokCloth_IsInstanceInUse(0, v10) )
      {
        ClothAsset = HavokCloth_GetClothAsset(0, v10);
        if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1707, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
          __debugbreak();
        name = ClothAsset->name;
        HavokCloth_GetInstancePosition(0, v10, &position);
        xyz.v[0] = 32.0 * position.m_quad.m128_f32[0];
        xyz.v[1] = 32.0 * position.m_quad.m128_f32[1];
        xyz.v[2] = 32.0 * position.m_quad.m128_f32[2];
        CurrentSoundIdx = HavokCloth_GetCurrentSoundIdx(0, v10);
        v15 = *(const char **)(p_pitch - 3);
        v16 = *p_pitch;
        v17 = *(p_pitch - 1);
        v18 = j_va("Instance %i %s: AssetEntry:%i Sound:%s Volume:%.2f Pitch:%.2f", v10, name, CurrentSoundIdx, v15, v17, v16);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v18, &colorWhite);
        *y = *y + 8.0;
        v19 = j_va("%s v:%.2f p:%.2f", v15, v17, v16);
        CL_AddDebugString(&xyz, &colorWhite, 0.5, v19, 0, 0);
      }
      else
      {
        v11 = j_va("Instance %i was destroyed this frame", v10);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v11, &colorWhite);
        *y = *y + 8.0;
      }
      p_pitch += 6;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
HavokCloth_Debug_Sound_SetCache
==============
*/
void HavokCloth_Debug_Sound_SetCache(const unsigned int globalWorldId, HavokCloth_Update_QueuedSound *sounds, unsigned int numSounds)
{
  __int64 v3; 
  HavokCloth_Update_QueuedSound *v6; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1831, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_Debug_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_Debug_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( !sounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1832, ASSERT_TYPE_ASSERT, "(sounds)", (const char *)&queryFormat, "sounds") )
    __debugbreak();
  if ( numSounds > 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1833, ASSERT_TYPE_ASSERT, "(numSounds <= MAX_SIMULTANEOUS_CLOTH_SOUNDS)", (const char *)&queryFormat, "numSounds <= MAX_SIMULTANEOUS_CLOTH_SOUNDS") )
    __debugbreak();
  s_HavokCloth_Debug_SoundCache_NumEntries[v3] = numSounds;
  v6 = s_HavokCloth_Debug_SoundCache[v3];
  *(_OWORD *)&v6->instanceId = *(_OWORD *)&sounds->instanceId;
  *(_OWORD *)&v6->volume = *(_OWORD *)&sounds->volume;
  *(_OWORD *)&v6[1].soundAlias = *(_OWORD *)&sounds[1].soundAlias;
  *(_OWORD *)&v6[2].instanceId = *(_OWORD *)&sounds[2].instanceId;
  *(_OWORD *)&v6[2].volume = *(_OWORD *)&sounds[2].volume;
  *(_OWORD *)&v6[3].soundAlias = *(_OWORD *)&sounds[3].soundAlias;
  *(_OWORD *)&v6[4].instanceId = *(_OWORD *)&sounds[4].instanceId;
  *(_OWORD *)&v6[4].volume = *(_OWORD *)&sounds[4].volume;
  *(_OWORD *)&v6[5].soundAlias = *(_OWORD *)&sounds[5].soundAlias;
  *(_OWORD *)&v6[6].instanceId = *(_OWORD *)&sounds[6].instanceId;
  *(_OWORD *)&v6[6].volume = *(_OWORD *)&sounds[6].volume;
  *(_OWORD *)&v6[7].soundAlias = *(_OWORD *)&sounds[7].soundAlias;
  *(_OWORD *)&v6[8].instanceId = *(_OWORD *)&sounds[8].instanceId;
  *(_OWORD *)&v6[8].volume = *(_OWORD *)&sounds[8].volume;
  *(_OWORD *)&v6[9].soundAlias = *(_OWORD *)&sounds[9].soundAlias;
}

/*
==============
HavokCloth_Debug_Speed_DrawInstance
==============
*/
void HavokCloth_Debug_Speed_DrawInstance(const ScreenPlacement *scrPlace, float *x, float *y, const unsigned int instanceId)
{
  const ClothAsset *ClothAsset; 
  float defaultSpeed; 
  bool SimulatedSpeed; 
  double BlendedSpeed; 
  float v12; 
  const char *v13; 
  double v14; 
  double v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  float v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  float speed; 
  vec3_t xyz; 
  hkVector4f position; 

  if ( !HavokCloth_IsInstanceInUse(0, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1627, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId )") )
    __debugbreak();
  ClothAsset = HavokCloth_GetClothAsset(0, instanceId);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1631, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  HavokCloth_GetInstancePosition(0, instanceId, &position);
  xyz.v[0] = 32.0 * position.m_quad.m128_f32[0];
  xyz.v[1] = 32.0 * position.m_quad.m128_f32[1];
  xyz.v[2] = 32.0 * position.m_quad.m128_f32[2];
  defaultSpeed = ClothAsset->defaultSpeed;
  SimulatedSpeed = HavokCloth_GetSimulatedSpeed(0, instanceId, &speed);
  BlendedSpeed = HavokCloth_GetBlendedSpeed(0, instanceId);
  v12 = *(float *)&BlendedSpeed;
  if ( !SimulatedSpeed && *(float *)&BlendedSpeed == 0.0 )
  {
    v13 = j_va("Speed is 0");
    Cloth_Debug_DrawString(scrPlace, *x, *y, v13, &colorWhite);
    *y = *y + 8.0;
  }
  v14 = defaultSpeed;
  v15 = *(float *)&BlendedSpeed;
  if ( SimulatedSpeed )
  {
    v16 = j_va("Default: %.2f Simulated:%.2f Blended:%.2f", v14, speed, v15);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v16, &colorWhite);
    *y = *y + 8.0;
    v17 = j_va("%.2f-%.2f", speed, v15);
  }
  else
  {
    v18 = j_va("Default: %.2f Blended:%.2f", v14, v15);
    Cloth_Debug_DrawString(scrPlace, *x, *y, v18, &colorWhite);
    *y = *y + 8.0;
    v17 = j_va("%.2f", v15);
  }
  CL_AddDebugString(&xyz, &colorWhite, 0.5, v17, 0, 0);
  if ( SimulatedSpeed )
    v19 = speed;
  else
    v19 = ClothAsset->defaultSpeed;
  v20 = s_HavokCloth_SpeedHistoryStart;
  s_HavokCloth_TargetSpeedHistory[s_HavokCloth_SpeedHistoryStart] = v19;
  s_HavokCloth_BlendedSpeedHistory[v20] = v12;
  v21 = *y;
  *y = *y + 10.0;
  v22 = *x;
  s_HavokCloth_SpeedHistoryStart = ((_BYTE)v20 + 1) & 0x7F;
  CG_DebugGraphs_DrawGraphData(scrPlace, v22, v21 + 10.0, 512.0, 100.0, 0.0, 250.0, s_HavokCloth_TargetSpeedHistory, 0x80u, s_HavokCloth_SpeedHistoryStart, &colorRed);
  CG_DebugGraphs_DrawGraphData(scrPlace, *x, *y, 512.0, 100.0, 0.0, 250.0, s_HavokCloth_BlendedSpeedHistory, 0x80u, s_HavokCloth_SpeedHistoryStart, &colorGreen);
  CG_DebugGraphs_DrawAxes(scrPlace, *x, *y, 512.0, 100.0, &colorWhite);
  *y = *y + 110.0;
}

/*
==============
HavokCloth_Debug_Speed_DrawSummary
==============
*/
void HavokCloth_Debug_Speed_DrawSummary(const ScreenPlacement *scrPlace, float *x, float *y)
{
  unsigned int i; 
  unsigned int v7; 
  const ClothAsset *ClothAsset; 
  const char *name; 
  float defaultSpeed; 
  bool SimulatedSpeed; 
  double BlendedSpeed; 
  double v13; 
  double v14; 
  const char *v15; 
  double v16; 
  const char *v17; 
  const char *v18; 
  unsigned int numInstances; 
  float speed; 
  vec3_t xyz; 
  hkVector4f position; 
  unsigned int instances[1024]; 

  numInstances = 0;
  HavokCloth_GetInstanceList(0, instances, &numInstances);
  for ( i = 0; i < numInstances; ++i )
  {
    v7 = instances[i];
    if ( !HavokCloth_IsInstanceInUse(0, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1580, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( LOCAL_CLIENT_0, instanceId )") )
      __debugbreak();
    ClothAsset = HavokCloth_GetClothAsset(0, v7);
    if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothdebug.cpp", 1584, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    name = ClothAsset->name;
    HavokCloth_GetInstancePosition(0, v7, &position);
    xyz.v[0] = 32.0 * position.m_quad.m128_f32[0];
    xyz.v[1] = 32.0 * position.m_quad.m128_f32[1];
    xyz.v[2] = 32.0 * position.m_quad.m128_f32[2];
    defaultSpeed = ClothAsset->defaultSpeed;
    SimulatedSpeed = HavokCloth_GetSimulatedSpeed(0, v7, &speed);
    BlendedSpeed = HavokCloth_GetBlendedSpeed(0, v7);
    if ( SimulatedSpeed || *(float *)&BlendedSpeed != 0.0 )
    {
      v13 = defaultSpeed;
      v14 = *(float *)&BlendedSpeed;
      if ( SimulatedSpeed )
      {
        v15 = j_va("Instance %i %s: Default: %.2f Simulated:%.2f Blended:%.2f", v7, name, v13, speed, v14);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v15, &colorWhite);
        v16 = speed;
        *y = *y + 8.0;
        v17 = j_va("%i-%.2f-%.2f", v7, v16, v14);
      }
      else
      {
        v18 = j_va("Instance %i %s: Default: %.2f Blended:%.2f", v7, name, v13, v14);
        Cloth_Debug_DrawString(scrPlace, *x, *y, v18, &colorWhite);
        *y = *y + 8.0;
        v17 = j_va("%i-%.2f", v7, v14);
      }
      CL_AddDebugString(&xyz, &colorWhite, 0.5, v17, 0, 0);
    }
  }
}

