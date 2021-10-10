/*
==============
Nav_ClearLinkWeightsForEnt
==============
*/

void __fastcall Nav_ClearLinkWeightsForEnt(int entNum)
{
  ?Nav_ClearLinkWeightsForEnt@@YAXH@Z(entNum);
}

/*
==============
Nav_WriteLink
==============
*/

void __fastcall Nav_WriteLink(MemoryFile *memFile, nav_link_s *pLink)
{
  ?Nav_WriteLink@@YAXPEAUMemoryFile@@PEAUnav_link_s@@@Z(memFile, pLink);
}

/*
==============
Nav_DestroyLinkByName
==============
*/

void __fastcall Nav_DestroyLinkByName(const scr_string_t linkName)
{
  ?Nav_DestroyLinkByName@@YAXW4scr_string_t@@@Z(linkName);
}

/*
==============
Nav_GetLinkID
==============
*/

int __fastcall Nav_GetLinkID(const bfx::LinkHandle *phLink)
{
  return ?Nav_GetLinkID@@YAHPEBVLinkHandle@bfx@@@Z(phLink);
}

/*
==============
Nav_GetEndNodeFromLink
==============
*/

pathnode_t *__fastcall Nav_GetEndNodeFromLink(const bfx::LinkHandle *phLink)
{
  return ?Nav_GetEndNodeFromLink@@YAPEAUpathnode_t@@PEBVLinkHandle@bfx@@@Z(phLink);
}

/*
==============
Nav_DestroyLinkByNode
==============
*/

void __fastcall Nav_DestroyLinkByNode(const pathnode_t *node)
{
  ?Nav_DestroyLinkByNode@@YAXPEBUpathnode_t@@@Z(node);
}

/*
==============
Nav_ReadModifiedLinkWeights
==============
*/

void __fastcall Nav_ReadModifiedLinkWeights(MemoryFile *memFile)
{
  ?Nav_ReadModifiedLinkWeights@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_GetStartNodeFromLink
==============
*/

pathnode_t *__fastcall Nav_GetStartNodeFromLink(const bfx::LinkHandle *phLink)
{
  return ?Nav_GetStartNodeFromLink@@YAPEAUpathnode_t@@PEBVLinkHandle@bfx@@@Z(phLink);
}

/*
==============
Nav_WriteModifiedLinkWeights
==============
*/

void __fastcall Nav_WriteModifiedLinkWeights(MemoryFile *memFile)
{
  ?Nav_WriteModifiedLinkWeights@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Nav_ConstructLinkUserData
==============
*/

unsigned __int64 __fastcall Nav_ConstructLinkUserData(unsigned __int16 startPathNodeIndex, unsigned __int16 endPathNodeIndex)
{
  return ?Nav_ConstructLinkUserData@@YA_KGG@Z(startPathNodeIndex, endPathNodeIndex);
}

/*
==============
Nav_CreateLink
==============
*/

nav_link_s *__fastcall Nav_CreateLink(nav_space_s *pSpace, const vec3_t *start, const vec3_t *end, const scr_string_t name, int id, const bfx::LinkDat *linkDat)
{
  return ?Nav_CreateLink@@YAPEAUnav_link_s@@PEAUnav_space_s@@AEBTvec3_t@@1W4scr_string_t@@HAEBVLinkDat@bfx@@@Z(pSpace, start, end, name, id, linkDat);
}

/*
==============
Nav_DestroyAllLinks
==============
*/

void Nav_DestroyAllLinks(void)
{
  ?Nav_DestroyAllLinks@@YAXXZ();
}

/*
==============
Nav_DebugLinkWeights
==============
*/

void Nav_DebugLinkWeights(void)
{
  ?Nav_DebugLinkWeights@@YAXXZ();
}

/*
==============
Nav_UpdateLinkWeights
==============
*/

void Nav_UpdateLinkWeights(void)
{
  ?Nav_UpdateLinkWeights@@YAXXZ();
}

/*
==============
Nav_ModifyLinkWeightForTime
==============
*/

void __fastcall Nav_ModifyLinkWeightForTime(int entNum, bfx::LinkHandle *phLink, float weight, int timeMs)
{
  ?Nav_ModifyLinkWeightForTime@@YAXHPEAVLinkHandle@bfx@@MH@Z(entNum, phLink, weight, timeMs);
}

/*
==============
Nav_GetLinkByID
==============
*/

bool __fastcall Nav_GetLinkByID(int ID, bfx::LinkHandle *phLink)
{
  return ?Nav_GetLinkByID@@YA_NHPEAVLinkHandle@bfx@@@Z(ID, phLink);
}

/*
==============
Nav_ReadLink
==============
*/

void __fastcall Nav_ReadLink(MemoryFile *memFile, nav_space_s *pSpace)
{
  ?Nav_ReadLink@@YAXPEAUMemoryFile@@PEAUnav_space_s@@@Z(memFile, pSpace);
}

/*
==============
Nav_GetEndPosFromLink
==============
*/

void __fastcall Nav_GetEndPosFromLink(const bfx::LinkHandle *phLink, vec3_t *outEndPos)
{
  ?Nav_GetEndPosFromLink@@YAXPEBVLinkHandle@bfx@@AEATvec3_t@@@Z(phLink, outEndPos);
}

/*
==============
Nav_TransferLinksToSpace
==============
*/

void __fastcall Nav_TransferLinksToSpace(nav_space_s *pNewSpace)
{
  ?Nav_TransferLinksToSpace@@YAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
Nav_CreateLinkStrip
==============
*/

nav_link_s *__fastcall Nav_CreateLinkStrip(nav_space_s *pSpace, const vec3_t *startPt1, const vec3_t *startPt2, const vec3_t *endPt1, const vec3_t *endPt2, const scr_string_t name, int id, const bfx::LinkDat *linkData)
{
  return ?Nav_CreateLinkStrip@@YAPEAUnav_link_s@@PEAUnav_space_s@@AEBTvec3_t@@111W4scr_string_t@@HAEBVLinkDat@bfx@@@Z(pSpace, startPt1, startPt2, endPt1, endPt2, name, id, linkData);
}

/*
==============
Nav_ClearLinksFromSpace
==============
*/

void __fastcall Nav_ClearLinksFromSpace(nav_space_s *pSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  ?Nav_ClearLinksFromSpace@@YAXPEAUnav_space_s@@_N0@Z(pSpace, bDeleteAll, pNewSpace);
}

/*
==============
Nav_GetStartPosFromLink
==============
*/

void __fastcall Nav_GetStartPosFromLink(const bfx::LinkHandle *phLink, vec3_t *outStartPos)
{
  ?Nav_GetStartPosFromLink@@YAXPEBVLinkHandle@bfx@@AEATvec3_t@@@Z(phLink, outStartPos);
}

/*
==============
Nav_GetLinkByName
==============
*/

bool __fastcall Nav_GetLinkByName(const scr_string_t linkName, bfx::LinkHandle *phLink)
{
  return ?Nav_GetLinkByName@@YA_NW4scr_string_t@@PEAVLinkHandle@bfx@@@Z(linkName, phLink);
}

/*
==============
Nav_SetupNavLinks
==============
*/

void Nav_SetupNavLinks(void)
{
  ?Nav_SetupNavLinks@@YAXXZ();
}

/*
==============
Nav_GetNameOfLink
==============
*/

scr_string_t __fastcall Nav_GetNameOfLink(const bfx::LinkHandle *phLink)
{
  return ?Nav_GetNameOfLink@@YA?AW4scr_string_t@@PEBVLinkHandle@bfx@@@Z(phLink);
}

/*
==============
Nav_SetLinkDatToDefault
==============
*/

void __fastcall Nav_SetLinkDatToDefault(bfx::LinkDat *pLinkDat)
{
  ?Nav_SetLinkDatToDefault@@YAXPEAVLinkDat@bfx@@@Z(pLinkDat);
}

/*
==============
GetEndNodeFromUserData
==============
*/
__int64 GetEndNodeFromUserData(unsigned __int64 userData)
{
  unsigned __int64 v1; 

  v1 = HIDWORD(userData);
  if ( WORD2(userData) == 0xFFFF )
    return WORD2(userData);
  if ( WORD2(userData) >= Path_NodeCount() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 265, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", (unsigned __int16)v1) )
    __debugbreak();
  return (unsigned __int16)v1;
}

/*
==============
GetStartNodeFromUserData
==============
*/
__int64 GetStartNodeFromUserData(unsigned __int64 userData)
{
  unsigned __int16 v1; 

  v1 = userData;
  if ( (_WORD)userData == 0xFFFF )
    return 0xFFFFi64;
  if ( (unsigned __int16)userData >= Path_NodeCount() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 258, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", v1) )
    __debugbreak();
  return v1;
}

/*
==============
Nav_ClearLinkWeightsForEnt
==============
*/
void Nav_ClearLinkWeightsForEnt(int entNum)
{
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *v2; 
  double v3; 
  signed __int64 v4; 
  __int64 v5; 
  bfx::LinkHandle *v6; 
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *v7; 
  bool v8; 
  char *v9; 
  bfx::LinkDat result; 

  v2 = &s_modifiedLinkWeights;
  while ( v2 != (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) )
  {
    if ( *(_DWORD *)&v2->m_data.m_buffer[24] == entNum )
    {
      if ( bfx::LinkHandle::IsValid((bfx::LinkHandle *)v2) )
      {
        bfx::LinkHandle::GetLinkDat((bfx::LinkHandle *)v2, &result);
        result.m_penaltyMult = result.m_penaltyMult - *(float *)&v2->m_data.m_buffer[16];
        v3 = I_fclamp(result.m_penaltyMult, 0.1, 15.0);
        result.m_penaltyMult = *(float *)&v3;
        bfx::LinkHandle::SetLinkDat((bfx::LinkHandle *)v2, &result);
      }
      if ( !s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v2 < &s_modifiedLinkWeights || v2 > (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v4 = (char *)v2 - (char *)&s_modifiedLinkWeights;
      v5 = ((unsigned __int64)((char *)v2 - (char *)&s_modifiedLinkWeights) * (unsigned __int128)0x2492492492492493ui64) >> 64;
      if ( (char *)v2 - (char *)&s_modifiedLinkWeights != 28 * ((v5 + ((unsigned __int64)((char *)v2 - (char *)&s_modifiedLinkWeights - v5) >> 1)) >> 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v2 == (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      v2 = &s_modifiedLinkWeights;
      if ( s_modifiedLinkWeights.m_size )
        v2 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * (v4 / 28));
      bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)v2);
      v6 = (bfx::LinkHandle *)&v2->m_data.m_buffer[28];
      v7 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size);
      if ( &v2->m_data.m_buffer[28] == (char *)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v7 == v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v8 = v6 < (bfx::LinkHandle *)v7;
      if ( v6 > (bfx::LinkHandle *)v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v8 = v6 < (bfx::LinkHandle *)v7;
      }
      if ( v8 )
      {
        v9 = &v2->m_data.m_buffer[20];
        do
        {
          bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(v9 - 20), v6);
          *((_DWORD *)v9 - 1) = *((_DWORD *)v9 + 6);
          *(_DWORD *)v9 = *((_DWORD *)v9 + 7);
          *((_DWORD *)v9 + 1) = *((_DWORD *)v9 + 8);
          bfx::LinkHandle::~LinkHandle(v6);
          v6 = (bfx::LinkHandle *)((char *)v6 + 28);
          v9 += 28;
        }
        while ( v6 < (bfx::LinkHandle *)v7 );
      }
      --s_modifiedLinkWeights.m_size;
    }
    else
    {
      v2 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)v2 + 28);
    }
  }
}

/*
==============
Nav_ClearLinksFromSpace
==============
*/
void Nav_ClearLinksFromSpace(nav_space_s *pSpace, bool bDeleteAll, nav_space_s *pNewSpace)
{
  nav_link_s *i; 
  nav_space_s *MostLikelySpace; 
  bfx::LineSegment startOut; 
  bfx::LineSegment endOut; 
  vec3_t pos; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 611, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  for ( i = pSpace->linkList.pNext; i != &pSpace->linkList; i = pSpace->linkList.pNext )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 618, ASSERT_TYPE_ASSERT, "(pLink)", (const char *)&queryFormat, "pLink") )
      __debugbreak();
    if ( i->pSpace != pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 619, ASSERT_TYPE_ASSERT, "(pLink->pSpace == pSpace)", (const char *)&queryFormat, "pLink->pSpace == pSpace") )
      __debugbreak();
    if ( bDeleteAll )
    {
      Nav_DestroyLink(i);
    }
    else
    {
      if ( pNewSpace )
      {
        MostLikelySpace = pNewSpace;
      }
      else
      {
        if ( !bfx::LinkHandle::IsValid(&i->hLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 639, ASSERT_TYPE_ASSERT, "( pLink->hLink.IsValid() )", (const char *)&queryFormat, "pLink->hLink.IsValid()") )
          __debugbreak();
        bfx::LinkHandle::GetLinkEnds(&i->hLink, &startOut, &endOut);
        pos = (vec3_t)startOut.m_v0;
        MostLikelySpace = Nav_FindMostLikelySpace(&pos, NAV_LAYER_HUMAN, NULL);
      }
      if ( !MostLikelySpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 648, ASSERT_TYPE_ASSERT, "( pSpaceToAddTo )", (const char *)&queryFormat, "pSpaceToAddTo") )
        __debugbreak();
      Nav_MoveLinkToSpace(i, MostLikelySpace);
    }
  }
}

/*
==============
Nav_ConstructLinkUserData
==============
*/
unsigned __int64 Nav_ConstructLinkUserData(unsigned __int16 startPathNodeIndex, unsigned __int16 endPathNodeIndex)
{
  int v4; 
  __int64 v6; 
  int v7; 

  if ( startPathNodeIndex != 0xFFFF )
  {
    v4 = startPathNodeIndex;
    if ( startPathNodeIndex >= Path_NodeCount() )
    {
      v7 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 245, ASSERT_TYPE_ASSERT, "( ( startPathNodeIndex == 0xffff || startPathNodeIndex < Path_NodeCount() ) )", "( startPathNodeIndex ) = %i", v7) )
        __debugbreak();
    }
  }
  if ( endPathNodeIndex != 0xFFFF && endPathNodeIndex >= Path_NodeCount() )
  {
    LODWORD(v6) = endPathNodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 246, ASSERT_TYPE_ASSERT, "( ( endPathNodeIndex == 0xffff || endPathNodeIndex < Path_NodeCount() ) )", "( endPathNodeIndex ) = %i", v6) )
      __debugbreak();
  }
  return startPathNodeIndex | ((unsigned __int64)endPathNodeIndex << 32);
}

/*
==============
Nav_CreateLink
==============
*/
nav_link_s *Nav_CreateLink(nav_space_s *pSpace, const vec3_t *start, const vec3_t *end, const scr_string_t name, int id, const bfx::LinkDat *linkDat)
{
  nav_link_s *v11; 
  const bfx::LinkHandle *v12; 
  int v13; 
  __int64 v14; 
  bfx::Vector3 enda; 
  bfx::Vector3 starta; 
  bfx::LinkHandle result; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 82, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  if ( g_NavData.linkPoolInfo.count < 2303 )
  {
    starta = (bfx::Vector3)*start;
    enda = (bfx::Vector3)*end;
    v11 = Nav_AllocLink();
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 94, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
      __debugbreak();
    v12 = bfx::CreateLink(&result, &pSpace->hSpace, &starta, &enda, linkDat);
    bfx::LinkHandle::operator=(&v11->hLink, v12);
    bfx::LinkHandle::~LinkHandle(&result);
    Scr_SetString(&v11->name, name);
    v13 = id;
    if ( id < 0 )
      v13 = s_NavLinkUniquifier++;
    v11->id = v13;
    v11->pNext = NULL;
    v11->pPrev = NULL;
    Nav_AddLinkToSpace(pSpace, v11);
    Nav_ClearCachedData(pSpace);
    return v11;
  }
  else
  {
    LODWORD(v14) = 2304;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of links (%d). (arbitrary limit. see code to raise.)", v14) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
Nav_CreateLinkStrip
==============
*/
nav_link_s *Nav_CreateLinkStrip(nav_space_s *pSpace, const vec3_t *startPt1, const vec3_t *startPt2, const vec3_t *endPt1, const vec3_t *endPt2, const scr_string_t name, int id, const bfx::LinkDat *linkData)
{
  nav_link_s *v13; 
  const bfx::LinkHandle *v14; 
  int v15; 
  __int64 v16; 
  bfx::LinkHandle result; 
  bfx::LineSegment end; 
  bfx::LineSegment start; 

  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 117, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  if ( g_NavData.linkPoolInfo.count < 2303 )
  {
    start.m_v0.m_x = startPt1->v[0];
    start.m_v0.m_y = startPt1->v[1];
    start.m_v0.m_z = startPt1->v[2];
    start.m_v1 = (bfx::Vector3)*startPt2;
    end.m_v0.m_x = endPt1->v[0];
    end.m_v0.m_y = endPt1->v[1];
    end.m_v0.m_z = endPt1->v[2];
    end.m_v1 = (bfx::Vector3)*endPt2;
    v13 = Nav_AllocLink();
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 131, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
      __debugbreak();
    v14 = bfx::CreateLinkStrip(&result, &pSpace->hSpace, &start, &end, linkData);
    bfx::LinkHandle::operator=(&v13->hLink, v14);
    bfx::LinkHandle::~LinkHandle(&result);
    Scr_SetString(&v13->name, name);
    v15 = id;
    if ( id < 0 )
      v15 = s_NavLinkUniquifier++;
    v13->id = v15;
    v13->pNext = NULL;
    v13->pPrev = NULL;
    Nav_AddLinkToSpace(pSpace, v13);
    Nav_ClearCachedData(pSpace);
    return v13;
  }
  else
  {
    LODWORD(v16) = 2304;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of links (%d). (arbitrary limit. see code to raise.)", v16) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
Nav_DebugLinkWeights
==============
*/
void Nav_DebugLinkWeights(void)
{
  int v0; 
  unsigned __int64 v1; 
  int *v2; 
  float m_penaltyMult; 
  const char *v4; 
  bfx::LinkHandle v5; 
  int v6; 
  int v7; 
  int v8; 
  bfx::LineSegment startOut; 
  __int64 v10; 
  bfx::LineSegment endOut; 
  bfx::LinkDat result; 
  vec3_t xyz; 

  v10 = -2i64;
  v0 = 0;
  if ( s_modifiedLinkWeights.m_size )
  {
    v1 = 0i64;
    v2 = (int *)&s_modifiedLinkWeights.m_data.m_buffer[20];
    do
    {
      bfx::LinkHandle::LinkHandle(&v5);
      if ( v1 >= s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      bfx::LinkHandle::operator=(&v5, (const bfx::LinkHandle *)(v2 - 5));
      v6 = *(v2 - 1);
      v7 = *v2;
      v8 = v2[1];
      bfx::LinkHandle::GetLinkEnds(&v5, &startOut, &endOut);
      m_penaltyMult = bfx::LinkHandle::GetLinkDat(&v5, &result)->m_penaltyMult;
      xyz = (vec3_t)startOut.m_v0;
      v4 = j_va("%f", m_penaltyMult);
      G_Main_AddDebugString(&xyz, &colorYellow, 1.5, v4);
      bfx::LinkHandle::~LinkHandle(&v5);
      ++v0;
      ++v1;
      v2 += 7;
    }
    while ( v0 < s_modifiedLinkWeights.m_size );
  }
}

/*
==============
Nav_DestroyAllLinks
==============
*/
void Nav_DestroyAllLinks(void)
{
  int i; 

  for ( i = g_NavData.linkPoolInfo.firstUsed; g_NavData.linkPoolInfo.firstUsed >= 0; i = g_NavData.linkPoolInfo.firstUsed )
    Nav_DestroyLink(&g_NavData.links[(__int64)i]);
  if ( g_NavData.linkPoolInfo.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 577, ASSERT_TYPE_ASSERT, "( g_NavData.linkPoolInfo.count == 0 )", (const char *)&queryFormat, "g_NavData.linkPoolInfo.count == 0") )
    __debugbreak();
  Nav_InitModifiedLinkWeights();
}

/*
==============
Nav_DestroyLink
==============
*/
void Nav_DestroyLink(nav_link_s *pLink)
{
  nav_space_s *pSpace; 

  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 167, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
    __debugbreak();
  bfx::DestroyLink(&pLink->hLink);
  bfx::LinkHandle::Release(&pLink->hLink);
  if ( !pLink->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 172, ASSERT_TYPE_ASSERT, "( pLink->pSpace )", (const char *)&queryFormat, "pLink->pSpace") )
    __debugbreak();
  pSpace = pLink->pSpace;
  Nav_RemoveLinkFromSpace(pSpace, pLink);
  pLink->pSpace = NULL;
  Scr_SetString(&pLink->name, (scr_string_t)0);
  Nav_FreeLink(pLink);
  Nav_ClearCachedData(pSpace);
  Nav_RemoveInvalidLinkWeights();
}

/*
==============
Nav_DestroyLinkByName
==============
*/
void Nav_DestroyLinkByName(const scr_string_t linkName)
{
  int firstUsed; 
  __int64 v3; 
  __int16 v4; 
  nav_link_s *v5; 
  nav_space_s *pSpace; 

  firstUsed = g_NavData.linkPoolInfo.firstUsed;
  if ( g_NavData.linkPoolInfo.firstUsed >= 0 )
  {
    do
    {
      v3 = (__int64)firstUsed << 6;
      v4 = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v3);
      if ( *(scr_string_t *)((char *)&g_NavData.links[0].name + v3) == linkName )
      {
        v5 = (nav_link_s *)((char *)g_NavData.links + v3);
        if ( (navdata_s *)((char *)&g_NavData + v3) == (navdata_s *)-83000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 167, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
          __debugbreak();
        bfx::DestroyLink(&v5->hLink);
        bfx::LinkHandle::Release(&v5->hLink);
        if ( !v5->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 172, ASSERT_TYPE_ASSERT, "( pLink->pSpace )", (const char *)&queryFormat, "pLink->pSpace") )
          __debugbreak();
        pSpace = v5->pSpace;
        Nav_RemoveLinkFromSpace(pSpace, v5);
        v5->pSpace = NULL;
        Scr_SetString(&v5->name, (scr_string_t)0);
        Nav_FreeLink(v5);
        Nav_ClearCachedData(pSpace);
        Nav_RemoveInvalidLinkWeights();
      }
      firstUsed = v4;
    }
    while ( v4 >= 0 );
  }
}

/*
==============
Nav_DestroyLinkByNode
==============
*/
void Nav_DestroyLinkByNode(const pathnode_t *node)
{
  int firstUsed; 
  __int64 v3; 
  unsigned __int16 m_userData; 
  const pathnode_t *v5; 
  __int16 v6; 
  __int64 v7; 
  bfx::LinkDat result; 

  firstUsed = g_NavData.linkPoolInfo.firstUsed;
  if ( g_NavData.linkPoolInfo.firstUsed >= 0 )
  {
    do
    {
      v3 = (__int64)firstUsed << 6;
      if ( (navdata_s *)((char *)&g_NavData + v3) == (navdata_s *)-83000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 701, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
        __debugbreak();
      if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v3)) || (m_userData = bfx::LinkHandle::GetLinkDat((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v3), &result)->m_userData, m_userData == 0xFFFF) )
      {
        v5 = NULL;
      }
      else
      {
        if ( m_userData >= Path_NodeCount() )
        {
          LODWORD(v7) = m_userData;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 258, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", v7) )
            __debugbreak();
        }
        v5 = Path_ConvertIndexToNode(m_userData);
      }
      v6 = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v3);
      if ( v5 == node )
        Nav_DestroyLink((nav_link_s *)((char *)g_NavData.links + v3));
      firstUsed = v6;
    }
    while ( v6 >= 0 );
  }
}

/*
==============
Nav_GetEndNodeFromLink
==============
*/
pathnode_t *Nav_GetEndNodeFromLink(const bfx::LinkHandle *phLink)
{
  bfx::LinkDat *LinkDat; 
  unsigned __int16 EndNodeFromUserData; 
  pathnode_t *StartNodeFromLink; 
  unsigned __int16 totalLinkCount; 
  int v6; 
  pathlink_s *Links; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 *i; 
  bfx::LinkDat result; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 719, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)phLink) )
    return 0i64;
  LinkDat = bfx::LinkHandle::GetLinkDat((bfx::LinkHandle *)phLink, &result);
  EndNodeFromUserData = GetEndNodeFromUserData(LinkDat->m_userData);
  if ( EndNodeFromUserData != 0xFFFF )
    return Path_ConvertIndexToNode(EndNodeFromUserData);
  StartNodeFromLink = Nav_GetStartNodeFromLink(phLink);
  if ( !StartNodeFromLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 734, ASSERT_TYPE_ASSERT, "( pStartNode )", (const char *)&queryFormat, "pStartNode") )
    __debugbreak();
  totalLinkCount = StartNodeFromLink->constant.totalLinkCount;
  v6 = 0;
  if ( !totalLinkCount )
    return 0i64;
  Links = StartNodeFromLink->constant.Links;
  v8 = 0i64;
  v9 = totalLinkCount;
  for ( i = &Links->negotiationLink; !*i; i += 12 )
  {
    ++v6;
    if ( ++v8 >= v9 )
      return 0i64;
  }
  EndNodeFromUserData = Links[v6].nodeNum;
  if ( EndNodeFromUserData == 0xFFFF )
    return 0i64;
  else
    return Path_ConvertIndexToNode(EndNodeFromUserData);
}

/*
==============
Nav_GetEndPosFromLink
==============
*/
void Nav_GetEndPosFromLink(const bfx::LinkHandle *phLink, vec3_t *outEndPos)
{
  float m_y; 
  bfx::LineSegment endOut; 
  bfx::LineSegment startOut; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 767, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)phLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 768, ASSERT_TYPE_ASSERT, "( phLink->IsValid() )", (const char *)&queryFormat, "phLink->IsValid()") )
    __debugbreak();
  bfx::LinkHandle::GetLinkEnds((bfx::LinkHandle *)phLink, &startOut, &endOut);
  m_y = endOut.m_v0.m_y;
  outEndPos->v[0] = endOut.m_v0.m_x;
  outEndPos->v[2] = endOut.m_v0.m_z;
  outEndPos->v[1] = m_y;
}

/*
==============
Nav_GetLinkByID
==============
*/
char Nav_GetLinkByID(int ID, bfx::LinkHandle *phLink)
{
  int firstUsed; 
  __int64 v5; 

  if ( ID == -1 )
    goto LABEL_8;
  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 836, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  firstUsed = g_NavData.linkPoolInfo.firstUsed;
  if ( g_NavData.linkPoolInfo.firstUsed < 0 )
  {
LABEL_8:
    bfx::LinkHandle::Release(phLink);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = (__int64)firstUsed << 6;
      if ( *(int *)((char *)&g_NavData.links[0].id + v5) == ID )
        break;
      firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v5);
      if ( firstUsed < 0 )
        goto LABEL_8;
    }
    bfx::LinkHandle::operator=(phLink, (const bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v5));
    return 1;
  }
}

/*
==============
Nav_GetLinkByName
==============
*/
char Nav_GetLinkByName(const scr_string_t linkName, bfx::LinkHandle *phLink)
{
  int firstUsed; 
  __int64 v5; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 797, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  firstUsed = g_NavData.linkPoolInfo.firstUsed;
  if ( g_NavData.linkPoolInfo.firstUsed < 0 )
  {
LABEL_7:
    bfx::LinkHandle::Release(phLink);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = (__int64)firstUsed << 6;
      if ( *(scr_string_t *)((char *)&g_NavData.links[0].name + v5) == linkName )
        break;
      firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v5);
      if ( firstUsed < 0 )
        goto LABEL_7;
    }
    bfx::LinkHandle::operator=(phLink, (const bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v5));
    return 1;
  }
}

/*
==============
Nav_GetLinkID
==============
*/
__int64 Nav_GetLinkID(const bfx::LinkHandle *phLink)
{
  int firstUsed; 
  __int64 v3; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 819, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  firstUsed = g_NavData.linkPoolInfo.firstUsed;
  if ( g_NavData.linkPoolInfo.firstUsed < 0 )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    v3 = (__int64)firstUsed << 6;
    if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v3), phLink) )
      break;
    firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v3);
    if ( firstUsed < 0 )
      return 0xFFFFFFFFi64;
  }
  return *(unsigned int *)((char *)&g_NavData.links[0].id + v3);
}

/*
==============
Nav_GetMapName
==============
*/
char *Nav_GetMapName()
{
  const dvar_t *v0; 

  if ( Sys_IsServerThread() )
    return (char *)SV_Game_GetMapName();
  v0 = DVARBOOL_ATClient_Enabled;
  if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return (char *)SV_Game_GetMapName();
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  return cls.m_activeGameMapName;
}

/*
==============
Nav_GetNameOfLink
==============
*/
__int64 Nav_GetNameOfLink(const bfx::LinkHandle *phLink)
{
  int firstUsed; 
  __int64 v3; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 778, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  firstUsed = g_NavData.linkPoolInfo.firstUsed;
  if ( g_NavData.linkPoolInfo.firstUsed < 0 )
    return 0i64;
  while ( 1 )
  {
    v3 = (__int64)firstUsed << 6;
    if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v3), phLink) )
      break;
    firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v3);
    if ( firstUsed < 0 )
      return 0i64;
  }
  return *(unsigned int *)((char *)&g_NavData.links[0].name + v3);
}

/*
==============
Nav_GetStartNodeFromLink
==============
*/
pathnode_t *Nav_GetStartNodeFromLink(const bfx::LinkHandle *phLink)
{
  bfx::LinkDat *LinkDat; 
  unsigned __int16 StartNodeFromUserData; 
  bfx::LinkDat result; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 701, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)phLink) )
    return 0i64;
  LinkDat = bfx::LinkHandle::GetLinkDat((bfx::LinkHandle *)phLink, &result);
  StartNodeFromUserData = GetStartNodeFromUserData(LinkDat->m_userData);
  if ( StartNodeFromUserData == 0xFFFF )
    return 0i64;
  else
    return Path_ConvertIndexToNode(StartNodeFromUserData);
}

/*
==============
Nav_GetStartPosFromLink
==============
*/
void Nav_GetStartPosFromLink(const bfx::LinkHandle *phLink, vec3_t *outStartPos)
{
  float m_y; 
  bfx::LineSegment endOut; 
  bfx::LineSegment startOut; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 756, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)phLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 757, ASSERT_TYPE_ASSERT, "( phLink->IsValid() )", (const char *)&queryFormat, "phLink->IsValid()") )
    __debugbreak();
  bfx::LinkHandle::GetLinkEnds((bfx::LinkHandle *)phLink, &startOut, &endOut);
  m_y = endOut.m_v0.m_y;
  outStartPos->v[0] = endOut.m_v0.m_x;
  outStartPos->v[2] = endOut.m_v0.m_z;
  outStartPos->v[1] = m_y;
}

/*
==============
Nav_InitModifiedLinkWeights
==============
*/
void Nav_InitModifiedLinkWeights()
{
  unsigned __int64 m_size; 
  int v1; 
  bfx::LinkHandle *v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 

  m_size = s_modifiedLinkWeights.m_size;
  v1 = 0;
  v2 = (bfx::LinkHandle *)&s_modifiedLinkWeights;
  if ( s_modifiedLinkWeights.m_size )
  {
    v3 = 0i64;
    if ( !s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    do
    {
      if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      if ( bfx::LinkHandle::IsValid((bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * v3)) )
      {
        if ( v3 >= s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        bfx::LinkHandle::Release((bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * v3));
      }
      m_size = s_modifiedLinkWeights.m_size;
      v3 = ++v1;
    }
    while ( v1 < s_modifiedLinkWeights.m_size );
  }
  v4 = 0i64;
  if ( m_size )
  {
    do
    {
      if ( v4 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      bfx::LinkHandle::~LinkHandle(v2);
      ++v4;
      v2 = (bfx::LinkHandle *)((char *)v2 + 28);
    }
    while ( v4 < s_modifiedLinkWeights.m_size );
  }
  s_modifiedLinkWeightsLastUpdatedTime = 0i64;
  s_modifiedLinkWeights.m_size = 0i64;
}

/*
==============
Nav_ModifyLinkWeightForTime
==============
*/
void Nav_ModifyLinkWeightForTime(int entNum, bfx::LinkHandle *phLink, float weight, int timeMs)
{
  double v7; 
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *i; 
  __int64 v9; 
  char *v10; 
  char *v11; 
  bool v12; 
  _DWORD *v13; 
  _DWORD *v14; 
  signed __int64 v15; 
  const dvar_t *v16; 
  int firstUsed; 
  __int64 v18; 
  __int64 v19; 
  __int64 id; 
  bfx::LinkHandle rhs; 
  float v22; 
  int v23; 
  int v24; 
  bfx::LinkDat result; 

  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 885, ASSERT_TYPE_ASSERT, "(phLink)", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  Nav_UpdateLinkWeights();
  if ( s_modifiedLinkWeights.m_size == 64 )
  {
    Com_Printf(18, "Out of ModifiedLinkWeights -- traversals will not increase their weight when used\n");
  }
  else
  {
    bfx::LinkHandle::GetLinkDat(phLink, &result);
    result.m_penaltyMult = weight + result.m_penaltyMult;
    v7 = I_fclamp(result.m_penaltyMult, 0.1, 15.0);
    result.m_penaltyMult = *(float *)&v7;
    bfx::LinkHandle::SetLinkDat(phLink, &result);
    bfx::LinkHandle::LinkHandle(&rhs);
    v23 = timeMs + level.time;
    bfx::LinkHandle::operator=(&rhs, phLink);
    v22 = weight;
    v24 = entNum;
    for ( i = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size); i != &s_modifiedLinkWeights; i = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)i - 28) )
    {
      if ( SLODWORD(i[-1].m_size) >= v23 )
        break;
    }
    if ( s_modifiedLinkWeights.m_size == 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (i < &s_modifiedLinkWeights || i > (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v9 = ((unsigned __int64)((char *)i - (char *)&s_modifiedLinkWeights) * (unsigned __int128)0x2492492492492493ui64) >> 64;
    if ( (char *)i - (char *)&s_modifiedLinkWeights != 28 * ((v9 + ((unsigned __int64)((char *)i - (char *)&s_modifiedLinkWeights - v9) >> 1)) >> 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &rhs >= (bfx::LinkHandle *)i && &rhs < (bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v10 = &s_modifiedLinkWeights.m_data.m_buffer[28 * s_modifiedLinkWeights.m_size];
    if ( i != (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)v10 )
    {
      v11 = &s_modifiedLinkWeights.m_data.m_buffer[28 * s_modifiedLinkWeights.m_size + 28];
      if ( i == (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v10 == v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v12 = v10 <= (char *)i;
      if ( v10 < (char *)i )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v12 = v10 <= (char *)i;
      }
      if ( !v12 )
      {
        v13 = v10 + 20;
        v14 = v11 + 20;
        v15 = v10 - v11;
        do
        {
          v13 -= 7;
          v14 -= 7;
          bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(v14 - 5), (const bfx::LinkHandle *)((char *)v14 + v15 - 20));
          *(v14 - 1) = *(v13 - 1);
          *v14 = *v13;
          v14[1] = v13[1];
          bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)((char *)v14 + v15 - 20));
        }
        while ( (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)v14 + v15 - 20) > i );
      }
    }
    ++s_modifiedLinkWeights.m_size;
    bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)i, &rhs);
    *(float *)&i->m_data.m_buffer[16] = v22;
    *(_DWORD *)&i->m_data.m_buffer[20] = v23;
    *(_DWORD *)&i->m_data.m_buffer[24] = v24;
    v16 = DCONST_DVARBOOL_ai_debugLinkWeights;
    if ( !DCONST_DVARBOOL_ai_debugLinkWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLinkWeights") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      firstUsed = g_NavData.linkPoolInfo.firstUsed;
      if ( g_NavData.linkPoolInfo.firstUsed < 0 )
      {
LABEL_44:
        id = 0xFFFFFFFFi64;
      }
      else
      {
        while ( 1 )
        {
          v18 = firstUsed;
          v19 = (__int64)firstUsed << 6;
          if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v19), &rhs) )
            break;
          firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v19);
          if ( firstUsed < 0 )
            goto LABEL_44;
        }
        id = (unsigned int)g_NavData.links[v18].id;
      }
      Com_Printf(18, "Added link weight of %f for %i. Total: %f\n", v22, id, result.m_penaltyMult);
    }
    bfx::LinkHandle::~LinkHandle(&rhs);
  }
}

/*
==============
Nav_MoveLinkToSpace
==============
*/
void Nav_MoveLinkToSpace(nav_link_s *pLink, nav_space_s *pNewSpace)
{
  const bfx::LinkHandle *v4; 
  char linkDat[56]; 
  __int64 v6; 
  bfx::LinkHandle v7; 
  bfx::LineSegment endOut; 
  bfx::LineSegment startOut; 
  bfx::LinkDat result; 

  v6 = -2i64;
  *(_OWORD *)linkDat = 0xFFFFFFFFui64;
  *(_WORD *)&linkDat[16] = 1;
  *(_QWORD *)&linkDat[20] = -1i64;
  *(float *)&linkDat[28] = FLOAT_1_0;
  *(float *)&linkDat[32] = bfx::GetScale() * 4.0;
  *(float *)&linkDat[36] = bfx::GetScale();
  *(float *)&linkDat[40] = 0.0;
  *(_DWORD *)&linkDat[44] = 0;
  *(float *)&linkDat[48] = 0.0;
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 589, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink", *(_QWORD *)linkDat, *(_QWORD *)&linkDat[8], *(_QWORD *)&linkDat[16], *(_QWORD *)&linkDat[24], *(_QWORD *)&linkDat[32], *(_QWORD *)&linkDat[40], *(_QWORD *)&linkDat[48], v6) )
    __debugbreak();
  if ( !pLink->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 590, ASSERT_TYPE_ASSERT, "( pLink->pSpace )", (const char *)&queryFormat, "pLink->pSpace") )
    __debugbreak();
  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 591, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  if ( pLink->pSpace != pNewSpace )
  {
    *(bfx::LinkDat *)linkDat = *bfx::LinkHandle::GetLinkDat(&pLink->hLink, &result);
    bfx::LinkHandle::GetLinkEnds(&pLink->hLink, &startOut, &endOut);
    Nav_RemoveLinkFromSpace(pLink->pSpace, pLink);
    bfx::DestroyLink(&pLink->hLink);
    v4 = bfx::CreateLinkStrip(&v7, &pNewSpace->hSpace, &startOut, &endOut, (const bfx::LinkDat *)linkDat);
    bfx::LinkHandle::operator=(&pLink->hLink, v4);
    bfx::LinkHandle::~LinkHandle(&v7);
    Nav_AddLinkToSpace(pNewSpace, pLink);
  }
}

/*
==============
Nav_ReadLink
==============
*/
void Nav_ReadLink(MemoryFile *memFile, nav_space_s *pSpace)
{
  scr_string_t name; 
  double Float; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  const char *CString; 
  nav_link_s *v18; 
  bool p[4]; 
  int id; 
  bfx::LinkDat linkData; 
  vec3_t endPt2; 
  vec3_t endPt1; 
  vec3_t startPt2; 
  vec3_t startPt1; 

  name = 0;
  linkData.m_layerMask = -1;
  linkData.m_penaltyMult = FLOAT_1_0;
  linkData.m_type = JUMP_LINK;
  linkData.m_userData = 0i64;
  *(_WORD *)&linkData.m_bidirectional = 1;
  *(_QWORD *)&linkData.m_forwardLinkUsageFlags = -1i64;
  linkData.m_maxSnapDist = bfx::GetScale() * 4.0;
  linkData.m_flowTune.m_maxSimultaneous = 0;
  linkData.m_mayUseDist = bfx::GetScale();
  linkData.m_mustUseDist = 0.0;
  linkData.m_flowTune.m_delayBeforeNextUser = 0.0;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1038, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1039, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, p);
  Float = MemFile_ReadFloat(memFile);
  startPt1.v[0] = *(float *)&Float;
  v6 = MemFile_ReadFloat(memFile);
  startPt1.v[1] = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  startPt1.v[2] = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  startPt2.v[0] = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  startPt2.v[1] = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  startPt2.v[2] = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  endPt1.v[0] = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  endPt1.v[1] = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  endPt1.v[2] = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  endPt2.v[0] = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  endPt2.v[1] = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  endPt2.v[2] = *(float *)&v16;
  CString = MemFile_ReadCString(memFile);
  if ( CString && *CString )
    name = SL_GetString(CString, 0);
  MemFile_ReadData(memFile, 4ui64, &id);
  MemFile_ReadData(memFile, 0x34ui64, &linkData);
  v18 = Nav_CreateLinkStrip(pSpace, &startPt1, &startPt2, &endPt1, &endPt2, name, id, &linkData);
  bfx::LinkHandle::Enable(&v18->hLink, p[0]);
  if ( name )
    SL_RemoveRefToString(name);
}

/*
==============
Nav_ReadModifiedLinkWeights
==============
*/
void Nav_ReadModifiedLinkWeights(MemoryFile *memFile)
{
  __int64 v2; 
  unsigned int v3; 
  int firstUsed; 
  __int64 v5; 
  double Float; 
  bfx::LinkHandle *v7; 
  __int64 v8; 
  __int64 v9; 
  bfx::LinkHandle rhs; 
  float v11; 
  int v12; 
  int v13; 
  unsigned int p; 
  int v15; 
  int v16; 

  v9 = -2i64;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (int)p > 0 )
  {
    v2 = p;
    do
    {
      bfx::LinkHandle::LinkHandle(&rhs);
      MemFile_ReadData(memFile, 4ui64, &p);
      v3 = p;
      if ( p == -1 || (firstUsed = g_NavData.linkPoolInfo.firstUsed, g_NavData.linkPoolInfo.firstUsed < 0) )
      {
LABEL_7:
        bfx::LinkHandle::Release(&rhs);
        LODWORD(v8) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 980, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LoadModifiedLinkWeights failed to find link id %i", v8) )
          __debugbreak();
      }
      else
      {
        while ( 1 )
        {
          v5 = (__int64)firstUsed << 6;
          if ( *(int *)((char *)&g_NavData.links[0].id + v5) == p )
            break;
          firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v5);
          if ( firstUsed < 0 )
            goto LABEL_7;
        }
        bfx::LinkHandle::operator=(&rhs, (const bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v5));
      }
      Float = MemFile_ReadFloat(memFile);
      v11 = *(float *)&Float;
      MemFile_ReadData(memFile, 4ui64, &v15);
      v12 = v15;
      MemFile_ReadData(memFile, 4ui64, &v16);
      v13 = v16;
      if ( s_modifiedLinkWeights.m_size >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()", v9) )
        __debugbreak();
      v7 = (bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size);
      bfx::LinkHandle::LinkHandle(v7, &rhs);
      *(float *)&v7[1].m_pProxy = v11;
      HIDWORD(v7[1].m_pProxy) = v12;
      LODWORD(v7[1].m_pSpace) = v13;
      ++s_modifiedLinkWeights.m_size;
      bfx::LinkHandle::~LinkHandle(&rhs);
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
Nav_RemoveInvalidLinkWeights
==============
*/
ntl::fixed_vector<ModifiedLinkWeight,64,0> *Nav_RemoveInvalidLinkWeights()
{
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *result; 
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *i; 
  signed __int64 v2; 
  __int64 v3; 
  bfx::LinkHandle *v4; 
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *v5; 
  bool v6; 
  char *v7; 

  result = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size);
  for ( i = &s_modifiedLinkWeights; i != result; result = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) )
  {
    if ( bfx::LinkHandle::IsValid((bfx::LinkHandle *)i) )
    {
      i = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)i + 28);
    }
    else
    {
      if ( !s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (i < &s_modifiedLinkWeights || i > (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v2 = (char *)i - (char *)&s_modifiedLinkWeights;
      v3 = ((unsigned __int64)((char *)i - (char *)&s_modifiedLinkWeights) * (unsigned __int128)0x2492492492492493ui64) >> 64;
      if ( (char *)i - (char *)&s_modifiedLinkWeights != 28 * ((v3 + ((unsigned __int64)((char *)i - (char *)&s_modifiedLinkWeights - v3) >> 1)) >> 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( i == (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      i = &s_modifiedLinkWeights;
      if ( s_modifiedLinkWeights.m_size )
        i = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * (v2 / 28));
      bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)i);
      v4 = (bfx::LinkHandle *)&i->m_data.m_buffer[28];
      v5 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size);
      if ( &i->m_data.m_buffer[28] == (char *)i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v5 == i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v6 = v4 < (bfx::LinkHandle *)v5;
      if ( v4 > (bfx::LinkHandle *)v5 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v6 = v4 < (bfx::LinkHandle *)v5;
      }
      if ( v6 )
      {
        v7 = &i->m_data.m_buffer[20];
        do
        {
          bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(v7 - 20), v4);
          *((_DWORD *)v7 - 1) = *((_DWORD *)v7 + 6);
          *(_DWORD *)v7 = *((_DWORD *)v7 + 7);
          *((_DWORD *)v7 + 1) = *((_DWORD *)v7 + 8);
          bfx::LinkHandle::~LinkHandle(v4);
          v4 = (bfx::LinkHandle *)((char *)v4 + 28);
          v7 += 28;
        }
        while ( v4 < (bfx::LinkHandle *)v5 );
      }
      --s_modifiedLinkWeights.m_size;
    }
  }
  return result;
}

/*
==============
Nav_SetLinkDatToDefault
==============
*/
void Nav_SetLinkDatToDefault(bfx::LinkDat *pLinkDat)
{
  if ( !pLinkDat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 62, ASSERT_TYPE_ASSERT, "( pLinkDat )", (const char *)&queryFormat, "pLinkDat") )
    __debugbreak();
  pLinkDat->m_layerMask = -1;
  pLinkDat->m_userData = 0i64;
  pLinkDat->m_type = CUSTOM_LINK;
  *(_WORD *)&pLinkDat->m_bidirectional = 0;
  pLinkDat->m_penaltyMult = 1.0;
  pLinkDat->m_maxSnapDist = 1.0;
  *(_QWORD *)&pLinkDat->m_mayUseDist = 1086324736i64;
  pLinkDat->m_flowTune.m_maxSimultaneous = 1;
}

/*
==============
Nav_SetupNavLinks
==============
*/
void Nav_SetupNavLinks(void)
{
  bool v0; 
  __int64 v1; 
  char *MapName; 
  bool v3; 
  nav_link_creation_data_s **linkCreationData; 
  nav_link_creation_data_s *v5; 
  unsigned int m_UsageFlags; 
  char *v7; 
  char *v8; 
  const char *v9; 
  scr_string_t m_Target; 
  unsigned __int16 v11; 
  char *v12; 
  const char *v13; 
  unsigned __int16 v14; 
  pathnode_t *v15; 
  bool v16; 
  bool v17; 
  int v18; 
  pathlink_s *v19; 
  pathnode_t *v20; 
  unsigned int v21; 
  pathnode_t *v22; 
  pathnode_t *v23; 
  const char *v24; 
  const char *v25; 
  __int64 v26; 
  unsigned __int16 totalLinkCount; 
  pathlink_s *Links; 
  __int64 v29; 
  unsigned __int8 *p_negotiationLink; 
  const char *v31; 
  const char *v32; 
  pathnode_t *v33; 
  pathnode_t *v34; 
  const char *v35; 
  const char *v36; 
  unsigned __int16 v37; 
  unsigned __int16 v38; 
  int EntNumForTargetName; 
  nav_space_s *SpaceByEntNum; 
  const char *v41; 
  const char *v42; 
  bfx::SpaceHandle v43; 
  bfx::SpaceHandle v44; 
  bfx::SpaceHandle v45; 
  bfx::SpaceHandle v46; 
  const char *v47; 
  const char *v48; 
  __int64 v49; 
  char *v50; 
  unsigned __int16 v51; 
  unsigned __int16 v52; 
  unsigned __int64 v53; 
  __int16 v54; 
  int v55; 
  unsigned __int64 m_userData_high; 
  int v57; 
  const gentity_s *Parent; 
  nav_space_s *DefaultSpace; 
  nav_link_s *v60; 
  const bfx::LinkHandle *v61; 
  unsigned int v62; 
  char *fmt; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *pOutArea; 
  bool v66; 
  bool v67; 
  unsigned __int16 i; 
  int v69; 
  int v70; 
  bfx::LinkDat linkDat; 
  nav_link_creation_data_s **v72; 
  bfx::SpaceHandle v73; 
  bfx::SpaceHandle v74; 
  bfx::SpaceHandle v75; 
  bfx::SpaceHandle v76; 
  float *v; 
  __int64 v78; 
  vec3_t testPoint; 
  vec3_t outPoint; 
  vec3_t outUp; 
  vec3_t endPt2; 
  vec3_t endPt1; 
  bfx::LinkHandle startPt2; 
  vec3_t pos; 
  vec3_t v86; 
  bfx::PathSpec pPathSpec; 

  v78 = -2i64;
  *(_QWORD *)&linkDat.m_forwardLinkUsageFlags = -1i64;
  bfx::GetScale();
  bfx::GetScale();
  linkDat.m_flowTune.m_delayBeforeNextUser = 0.0;
  v0 = g_NavData.numLinkData > 0;
  v66 = g_NavData.numLinkData > 0;
  if ( Nav_MeshLoaded() )
  {
    linkDat.m_layerMask = -1;
    linkDat.m_type = CUSTOM_LINK;
    *(_WORD *)&linkDat.m_bidirectional = 0;
    *(_OWORD *)&linkDat.m_penaltyMult = _xmm;
    v1 = 0i64;
    linkDat.m_userData = 0i64;
    linkDat.m_flowTune.m_maxSimultaneous = 1;
    if ( v0 )
    {
      v3 = 0;
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        MapName = Nav_GetMapName();
        if ( !Com_IsCpMap(MapName) )
          v3 = 1;
      }
      v67 = v3;
      v69 = 0;
      if ( g_NavData.numLinkData > 0 )
      {
        linkCreationData = g_NavData.linkCreationData;
        v72 = g_NavData.linkCreationData;
        do
        {
          v5 = *linkCreationData;
          m_UsageFlags = (*linkCreationData)->m_UsageFlags;
          if ( m_UsageFlags )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && (m_UsageFlags & 1) != 0 )
            {
              v9 = SL_ConvertToString(v5->m_Animscript);
              m_UsageFlags |= Bot_AnimscriptToLinkMask(v9);
            }
            if ( !LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) && (v5->m_UsageFlags & 0x800) != 0 )
              goto LABEL_24;
            linkDat.m_bidirectional = v5->m_bBidirectional;
            linkDat.m_forwardLinkUsageFlags = m_UsageFlags;
            linkDat.m_backwardLinkUsageFlags = m_UsageFlags;
            if ( v3 )
            {
              linkDat.m_penaltyMult = 3.0 * v5->m_PenaltyMult;
              linkDat.m_flowTune.m_maxSimultaneous = 1;
            }
            else
            {
              linkDat.m_penaltyMult = v5->m_PenaltyMult;
            }
            m_Target = v5->m_Target;
            v11 = 0;
            if ( Path_NodeCount() <= 0 )
              goto LABEL_23;
            while ( !Path_NodeValid(v11) || pathData.nodes[v11].constant.target != m_Target )
            {
              if ( ++v11 >= Path_NodeCount() )
                goto LABEL_23;
            }
            if ( v11 == 0xFFFF )
            {
LABEL_23:
              v12 = vtos(&v5->m_Start.m_Pt1);
              v13 = SL_ConvertToString(v5->m_Target);
              Com_PrintError(18, "Unable to find negotiation begin node with target '%s'. Expected at position %s. Skipping creation of link.\n", v13, v12);
            }
            else
            {
              v21 = v11;
              if ( v11 >= (unsigned int)Path_NodeCount() )
              {
                LODWORD(pOutArea) = Path_NodeCount();
                LODWORD(outClosestPos) = v11;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( beginNodeIndex ) < (unsigned)( Path_NodeCount() )", "beginNodeIndex doesn't index Path_NodeCount()\n\t%i not in [0, %i)", outClosestPos, pOutArea) )
                  __debugbreak();
              }
              v22 = Path_ConvertIndexToNode(v11);
              v23 = v22;
              if ( (unsigned __int16)(v22->constant.type - 29) <= 1u )
              {
                v50 = Nav_GetMapName();
                if ( !Com_IsCpMap(v50) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 370, ASSERT_TYPE_ASSERT, "( Com_IsCpMap( Nav_GetMapName() ) )", (const char *)&queryFormat, "Com_IsCpMap( Nav_GetMapName() )") )
                {
                  __debugbreak();
                  v1 = 0i64;
                  goto LABEL_24;
                }
LABEL_83:
                v1 = 0i64;
                goto LABEL_24;
              }
              if ( v22->constant.animscript )
              {
                if ( v22->constant.error )
                {
                  v25 = vtos(&v5->m_Start.m_Pt1);
                  Com_PrintError(18, "Pathnode %d (%s) at pos %s has an error. Skipping creation of link.\n", v11, nodeStringTable[v23->constant.type], v25);
                  v1 = 0i64;
                }
                else
                {
                  v26 = 0i64;
                  totalLinkCount = v23->constant.totalLinkCount;
                  if ( !totalLinkCount )
                    goto LABEL_59;
                  Links = v23->constant.Links;
                  v29 = totalLinkCount;
                  p_negotiationLink = &Links->negotiationLink;
                  while ( !*p_negotiationLink )
                  {
                    ++v26;
                    p_negotiationLink += 12;
                    if ( v26 >= v29 )
                      goto LABEL_59;
                  }
                  v33 = Path_ConvertIndexToNode(Links[v26].nodeNum);
                  v34 = v33;
                  if ( v33 )
                  {
                    if ( v23->constant.target != v33->constant.targetname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 403, ASSERT_TYPE_ASSERT, "( pBeginNode->constant.target == pEndNode->constant.targetname )", (const char *)&queryFormat, "pBeginNode->constant.target == pEndNode->constant.targetname") )
                      __debugbreak();
                    if ( v34->constant.error )
                    {
                      v35 = vtos(&v5->m_End.m_Pt1);
                      v36 = nodeStringTable[v34->constant.type];
                      v37 = Path_ConvertNodeToIndex(v34);
                      Com_PrintError(18, "Pathnode %d (%s) at pos %s has an error. Skipping creation of link.\n", v37, v36, v35);
                      v1 = 0i64;
                    }
                    else
                    {
                      v38 = Path_ConvertNodeToIndex(v34);
                      linkDat.m_userData = Nav_ConstructLinkUserData(v11, v38);
                      EntNumForTargetName = Nav_GetEntNumForTargetName(v5->m_Parent);
                      SpaceByEntNum = Nav_GetSpaceByEntNum(EntNumForTargetName);
                      if ( SpaceByEntNum )
                      {
                        pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
                        *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
                        *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
                        pPathSpec.m_usePathSharingPenalty = 0;
                        pPathSpec.m_pathSharingPenalty = 0.0;
                        pPathSpec.m_maxPathSharingPenalty = 0.0;
                        pPathSpec.m_maxSearchDist = 0.0;
                        bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
                        pPathSpec.m_snapMode = SNAP_CLOSEST;
                        pPathSpec.m_obstacleBlockageFlags = 0;
                        Nav_GetSpaceUp(SpaceByEntNum, &outUp);
                        Nav_GetClosestVerticalPos(&v5->m_Start.m_Pt1, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, &outPoint, NULL);
                        Nav_GetClosestVerticalPos(&v5->m_Start.m_Pt2, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, (vec3_t *)&startPt2, NULL);
                        Nav_GetClosestVerticalPos(&v5->m_End.m_Pt1, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, &endPt1, NULL);
                        v = v5->m_End.m_Pt2.v;
                        Nav_GetClosestVerticalPos(&v5->m_End.m_Pt2, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, &endPt2, NULL);
                        if ( (float)((float)((float)(v5->m_Start.m_Pt1.v[1] - outPoint.v[1]) * (float)(v5->m_Start.m_Pt1.v[1] - outPoint.v[1])) + (float)((float)(v5->m_Start.m_Pt1.v[0] - outPoint.v[0]) * (float)(v5->m_Start.m_Pt1.v[0] - outPoint.v[0]))) > 256.0 )
                        {
                          *(_QWORD *)testPoint.v = *(_QWORD *)v5->m_Start.m_Pt1.v;
                          testPoint.v[2] = v5->m_Start.m_Pt1.v[2] + 1.0;
                          bfx::SpaceHandle::SpaceHandle(&v73, &SpaceByEntNum->hSpace);
                          Nav_TryFindPointOnMeshBelowPoint(v43, 0, &testPoint, 256.0, &outPoint);
                        }
                        if ( (float)((float)((float)(v5->m_Start.m_Pt2.v[1] - *((float *)&startPt2.m_pProxy + 1)) * (float)(v5->m_Start.m_Pt2.v[1] - *((float *)&startPt2.m_pProxy + 1))) + (float)((float)(v5->m_Start.m_Pt2.v[0] - *(float *)&startPt2.m_pProxy) * (float)(v5->m_Start.m_Pt2.v[0] - *(float *)&startPt2.m_pProxy))) > 256.0 )
                        {
                          *(_QWORD *)testPoint.v = *(_QWORD *)v5->m_Start.m_Pt2.v;
                          testPoint.v[2] = v5->m_Start.m_Pt2.v[2] + 1.0;
                          bfx::SpaceHandle::SpaceHandle(&v74, &SpaceByEntNum->hSpace);
                          Nav_TryFindPointOnMeshBelowPoint(v44, 0, &testPoint, 256.0, (vec3_t *)&startPt2);
                        }
                        if ( (float)((float)((float)(v5->m_End.m_Pt1.v[1] - endPt1.v[1]) * (float)(v5->m_End.m_Pt1.v[1] - endPt1.v[1])) + (float)((float)(v5->m_End.m_Pt1.v[0] - endPt1.v[0]) * (float)(v5->m_End.m_Pt1.v[0] - endPt1.v[0]))) > 256.0 )
                        {
                          *(_QWORD *)testPoint.v = *(_QWORD *)v5->m_End.m_Pt1.v;
                          testPoint.v[2] = v5->m_End.m_Pt1.v[2] + 1.0;
                          bfx::SpaceHandle::SpaceHandle(&v75, &SpaceByEntNum->hSpace);
                          Nav_TryFindPointOnMeshBelowPoint(v45, 0, &testPoint, 256.0, &endPt1);
                        }
                        if ( (float)((float)((float)(v5->m_End.m_Pt2.v[1] - endPt2.v[1]) * (float)(v5->m_End.m_Pt2.v[1] - endPt2.v[1])) + (float)((float)(v5->m_End.m_Pt2.v[0] - endPt2.v[0]) * (float)(v5->m_End.m_Pt2.v[0] - endPt2.v[0]))) > 256.0 )
                        {
                          *(_QWORD *)testPoint.v = *(_QWORD *)v5->m_End.m_Pt2.v;
                          testPoint.v[2] = v5->m_End.m_Pt2.v[2] + 1.0;
                          bfx::SpaceHandle::SpaceHandle(&v76, &SpaceByEntNum->hSpace);
                          Nav_TryFindPointOnMeshBelowPoint(v46, 0, &testPoint, 256.0, &endPt2);
                        }
                        if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)272) )
                        {
LABEL_84:
                          v1 = 0i64;
                          Nav_CreateLinkStrip(SpaceByEntNum, &outPoint, (const vec3_t *)&startPt2, &endPt1, &endPt2, (const scr_string_t)0, -1, &linkDat);
                          goto LABEL_24;
                        }
                        if ( (float)((float)((float)(v5->m_Start.m_Pt1.v[1] - outPoint.v[1]) * (float)(v5->m_Start.m_Pt1.v[1] - outPoint.v[1])) + (float)((float)(v5->m_Start.m_Pt1.v[0] - outPoint.v[0]) * (float)(v5->m_Start.m_Pt1.v[0] - outPoint.v[0]))) > 1024.0 || (float)((float)((float)(v5->m_Start.m_Pt2.v[1] - *((float *)&startPt2.m_pProxy + 1)) * (float)(v5->m_Start.m_Pt2.v[1] - *((float *)&startPt2.m_pProxy + 1))) + (float)((float)(v5->m_Start.m_Pt2.v[0] - *(float *)&startPt2.m_pProxy) * (float)(v5->m_Start.m_Pt2.v[0] - *(float *)&startPt2.m_pProxy))) > 1024.0 )
                        {
                          fmt = vtos(&v5->m_Start.m_Pt1);
                          Com_PrintError(18, "Pathnode %d (%s) at pos %s is too far off the navmesh. Skipping creation of link.\n", v21, nodeStringTable[v23->constant.type], fmt);
                        }
                        else
                        {
                          if ( (float)((float)((float)(v5->m_End.m_Pt1.v[1] - endPt1.v[1]) * (float)(v5->m_End.m_Pt1.v[1] - endPt1.v[1])) + (float)((float)(v5->m_End.m_Pt1.v[0] - endPt1.v[0]) * (float)(v5->m_End.m_Pt1.v[0] - endPt1.v[0]))) <= 1024.0 && (float)((float)((float)(v[1] - endPt2.v[1]) * (float)(v[1] - endPt2.v[1])) + (float)((float)(*v - endPt2.v[0]) * (float)(*v - endPt2.v[0]))) <= 1024.0 )
                            goto LABEL_84;
                          v47 = vtos(&v5->m_End.m_Pt1);
                          v48 = nodeStringTable[v34->constant.type];
                          v49 = Path_ConvertNodeToIndex(v34);
                          Com_PrintError(18, "Pathnode %d (%s) at pos %s is too far off the navmesh. Skipping creation of link.\n", v49, v48, v47);
                        }
                        goto LABEL_83;
                      }
                      v41 = vtos(&v5->m_Start.m_Pt1);
                      v42 = SL_ConvertToString(v5->m_Parent);
                      Com_PrintError(18, "Unable to find parent space %s for traversal start node %d at position %s. Skipping creation of link.\n", v42, v21, v41);
                      v1 = 0i64;
                    }
                  }
                  else
                  {
LABEL_59:
                    v31 = vtos(&v5->m_Start.m_Pt1);
                    v32 = vtos(&v5->m_End.m_Pt1);
                    Com_PrintError(18, "Unable to find negotiation end node. Expected at position %s, with start node %d at position %s. Skipping creation of link.\n", v32, v21, v31);
                    v1 = 0i64;
                  }
                }
              }
              else
              {
                v24 = vtos(&v5->m_Start.m_Pt1);
                Com_PrintError(18, "Pathnode %d (%s) at pos %s has no animscript specified. Skipping creation of link.\n", v11, nodeStringTable[v23->constant.type], v24);
                v1 = 0i64;
              }
            }
          }
          else
          {
            v7 = vtos(&v5->m_End.m_Pt1);
            v8 = vtos(&v5->m_Start.m_Pt1);
            Com_PrintError(18, "Attempting to create nav link that nobody can use! Start node pos: %s, end node pos: %s. Skipping creation of link.\n", v8, v7);
          }
LABEL_24:
          ++v69;
          linkCreationData = ++v72;
          v3 = v67;
        }
        while ( v69 < g_NavData.numLinkData );
      }
      v0 = v66;
    }
    v70 = Path_FixedNodeCount();
    v14 = 0;
    for ( i = 0; v14 < v70; v0 = v66 )
    {
      v15 = &pathData.nodes[v14];
      v16 = (unsigned __int16)(v15->constant.type - 29) <= 1u;
      v17 = Path_IsNodeTraversalBegin(v15) == 1;
      if ( v16 || !v0 && v17 )
      {
        if ( !v15->constant.target && (unsigned __int16)(v15->constant.type - 29) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 508, ASSERT_TYPE_ASSERT, "(pNode->constant.target != ( static_cast< scr_string_t >( 0 ) ) || Path_IsJumpNode( pNode ))", (const char *)&queryFormat, "pNode->constant.target != NULL_SCR_STRING || Path_IsJumpNode( pNode )") )
          __debugbreak();
        v18 = 0;
        if ( v15->constant.totalLinkCount )
        {
          do
          {
            v19 = v15->constant.Links;
            if ( v19[v1].negotiationLink )
            {
              v20 = Path_ConvertIndexToNode(v19[v1].nodeNum);
              if ( v15->constant.target != v20->constant.targetname && (unsigned __int16)(v15->constant.type - 29) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 519, ASSERT_TYPE_ASSERT, "(pNode->constant.target == pLinkedNode->constant.targetname || Path_IsJumpNode( pNode ))", (const char *)&queryFormat, "pNode->constant.target == pLinkedNode->constant.targetname || Path_IsJumpNode( pNode )") )
                __debugbreak();
              if ( !v15->constant.animscript && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 520, ASSERT_TYPE_ASSERT, "(pNode->constant.animscript != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "pNode->constant.animscript != NULL_SCR_STRING") )
                __debugbreak();
              if ( (unsigned __int16)(v15->constant.type - 29) <= 1u || Path_IsWallRunNode(v15) )
              {
                linkDat.m_forwardLinkUsageFlags = 4;
                linkDat.m_backwardLinkUsageFlags = 4;
              }
              else
              {
                linkDat.m_forwardLinkUsageFlags = 2047;
                linkDat.m_backwardLinkUsageFlags = 2047;
              }
              pathnode_t::GetPos(v15, &pos);
              pathnode_t::GetPos(v20, &v86);
              v51 = Path_ConvertNodeToIndex(v15);
              v52 = Path_ConvertNodeToIndex(v20);
              v53 = Nav_ConstructLinkUserData(v51, v52);
              linkDat.m_userData = v53;
              v54 = v53;
              if ( (_WORD)v53 != 0xFFFF )
              {
                v55 = (unsigned __int16)v53;
                if ( (unsigned __int16)v53 >= Path_NodeCount() )
                {
                  LODWORD(outClosestPos) = v55;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 258, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", outClosestPos) )
                    __debugbreak();
                }
              }
              if ( v51 != v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 541, ASSERT_TYPE_ASSERT, "( startNode == GetStartNodeFromUserData( linkDat.m_userData ) )", (const char *)&queryFormat, "startNode == GetStartNodeFromUserData( linkDat.m_userData )") )
                __debugbreak();
              m_userData_high = HIDWORD(linkDat.m_userData);
              if ( WORD2(linkDat.m_userData) != 0xFFFF )
              {
                v57 = WORD2(linkDat.m_userData);
                if ( v57 >= Path_NodeCount() )
                {
                  LODWORD(outClosestPos) = (unsigned __int16)m_userData_high;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 265, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", outClosestPos) )
                    __debugbreak();
                }
              }
              if ( v52 != (_WORD)m_userData_high && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 542, ASSERT_TYPE_ASSERT, "( endNode == GetEndNodeFromUserData( linkDat.m_userData ) )", (const char *)&queryFormat, "endNode == GetEndNodeFromUserData( linkDat.m_userData )") )
                __debugbreak();
              Parent = pathnode_t::GetParent(v15);
              if ( !Parent || (DefaultSpace = Nav_GetSpaceByEntity(Parent)) == NULL )
              {
                DefaultSpace = Nav_GetDefaultSpace();
                if ( !DefaultSpace )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 555, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
                    __debugbreak();
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 82, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
                    __debugbreak();
                }
              }
              if ( g_NavData.linkPoolInfo.count < 2303 )
              {
                outPoint = pos;
                outUp = v86;
                v60 = Nav_AllocLink();
                if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 94, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
                  __debugbreak();
                v61 = bfx::CreateLink(&startPt2, &DefaultSpace->hSpace, (const bfx::Vector3 *)&outPoint, (const bfx::Vector3 *)&outUp, &linkDat);
                bfx::LinkHandle::operator=(&v60->hLink, v61);
                bfx::LinkHandle::~LinkHandle(&startPt2);
                Scr_SetString(&v60->name, (scr_string_t)0);
                v62 = s_NavLinkUniquifier++;
                v60->id = v62;
                v60->pNext = NULL;
                v60->pPrev = NULL;
                Nav_AddLinkToSpace(DefaultSpace, v60);
                Nav_ClearCachedData(DefaultSpace);
              }
              else
              {
                LODWORD(outClosestPos) = 2304;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of links (%d). (arbitrary limit. see code to raise.)", outClosestPos) )
                  __debugbreak();
              }
            }
            ++v18;
            ++v1;
          }
          while ( v18 < v15->constant.totalLinkCount );
          v1 = 0i64;
        }
      }
      v14 = i + 1;
      i = v14;
    }
    Nav_InitModifiedLinkWeights();
  }
}

/*
==============
Nav_TransferLinksToSpace
==============
*/
void Nav_TransferLinksToSpace(nav_space_s *pNewSpace)
{
  int i; 
  nav_link_s *v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  bfx::LineSegment startOut; 
  bfx::LineSegment endOut; 
  bfx::LinkDat result; 
  vec3_t pos; 

  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 658, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  for ( i = g_NavData.linkPoolInfo.firstUsed; i >= 0; i = v3->nextIdx )
  {
    v3 = &g_NavData.links[(__int64)i];
    if ( v3->pSpace != pNewSpace )
    {
      bfx::LinkHandle::GetLinkEnds(&g_NavData.links[(__int64)i].hLink, &startOut, &endOut);
      pos = (vec3_t)startOut.m_v0;
      bfx::LinkHandle::GetLinkDat(&v3->hLink, &result);
      v4 = 0;
      v5 = 1;
      do
      {
        if ( (v5 & result.m_layerMask) != 0 )
          break;
        ++v4;
        v5 = __ROL4__(v5, 1);
      }
      while ( v4 < 3 );
      if ( (unsigned int)v4 >= 3 )
      {
        LODWORD(v7) = 3;
        LODWORD(v6) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 686, ASSERT_TYPE_ASSERT, "(unsigned)( layer ) < (unsigned)( NAV_NUM_LAYERS )", "layer doesn't index NAV_NUM_LAYERS\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      if ( Nav_FindMostLikelySpace(&pos, (const AINavLayer)v4, NULL) == pNewSpace )
        Nav_MoveLinkToSpace(v3, pNewSpace);
    }
  }
}

/*
==============
Nav_UpdateLinkWeights
==============
*/
void Nav_UpdateLinkWeights(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  char *v2; 
  double v3; 
  unsigned __int64 m_size; 
  const dvar_t *v5; 
  int firstUsed; 
  __int64 v7; 
  __int64 v8; 
  __int64 id; 
  bfx::LinkHandle rhs; 
  float v11; 
  int v12; 
  int v13; 
  bfx::LinkDat result; 

  if ( level.time != s_modifiedLinkWeightsLastUpdatedTime )
  {
    s_modifiedLinkWeightsLastUpdatedTime = level.time;
    while ( s_modifiedLinkWeights.m_size )
    {
      v0 = s_modifiedLinkWeights.m_size - 1;
      if ( s_modifiedLinkWeights.m_size - 1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      if ( *(_DWORD *)&s_modifiedLinkWeights.m_data.m_buffer[28 * v0 + 20] > level.time )
        break;
      if ( !s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      v1 = s_modifiedLinkWeights.m_size - 1;
      if ( s_modifiedLinkWeights.m_size - 1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v2 = &s_modifiedLinkWeights.m_data.m_buffer[28 * v1];
      bfx::LinkHandle::LinkHandle(&rhs, (const bfx::LinkHandle *)v2);
      v11 = *((float *)v2 + 4);
      v12 = *((_DWORD *)v2 + 5);
      v13 = *((_DWORD *)v2 + 6);
      bfx::LinkHandle::GetLinkDat(&rhs, &result);
      result.m_penaltyMult = result.m_penaltyMult - v11;
      v3 = I_fclamp(result.m_penaltyMult, 0.1, 15.0);
      result.m_penaltyMult = *(float *)&v3;
      bfx::LinkHandle::SetLinkDat(&rhs, &result);
      m_size = s_modifiedLinkWeights.m_size;
      if ( !s_modifiedLinkWeights.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
          __debugbreak();
        m_size = s_modifiedLinkWeights.m_size;
      }
      s_modifiedLinkWeights.m_size = m_size - 1;
      bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * m_size - 28));
      v5 = DCONST_DVARBOOL_ai_debugLinkWeights;
      if ( !DCONST_DVARBOOL_ai_debugLinkWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLinkWeights") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
      {
        firstUsed = g_NavData.linkPoolInfo.firstUsed;
        if ( g_NavData.linkPoolInfo.firstUsed < 0 )
        {
LABEL_24:
          id = 0xFFFFFFFFi64;
        }
        else
        {
          while ( 1 )
          {
            v7 = firstUsed;
            v8 = (__int64)firstUsed << 6;
            if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v8), &rhs) )
              break;
            firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v8);
            if ( firstUsed < 0 )
              goto LABEL_24;
          }
          id = (unsigned int)g_NavData.links[v7].id;
        }
        Com_Printf(18, "Removed link weight of %f for %i. Total: %f\n", v11, id, result.m_penaltyMult);
      }
      bfx::LinkHandle::~LinkHandle(&rhs);
    }
  }
}

/*
==============
Nav_WriteLink
==============
*/
void Nav_WriteLink(MemoryFile *memFile, nav_link_s *pLink)
{
  const char *v4; 
  bfx::LinkDat *LinkDat; 
  char p[8]; 
  int LinkID; 
  __m256i v8; 
  __int128 v9; 
  float m_delayBeforeNextUser; 
  bfx::LineSegment startOut; 
  bfx::LineSegment endOut; 
  bfx::LinkDat result; 
  float m_x; 
  float m_y; 
  float m_z; 
  bfx::Vector3 m_v1; 

  *(_OWORD *)v8.m256i_i8 = 0xFFFFFFFFui64;
  *(float *)&v8.m256i_i32[7] = FLOAT_1_0;
  v8.m256i_i16[8] = 1;
  *(__int64 *)((char *)&v8.m256i_i64[2] + 4) = -1i64;
  *(float *)&v9 = bfx::GetScale() * 4.0;
  HIDWORD(v9) = 0;
  *((float *)&v9 + 1) = bfx::GetScale();
  *((float *)&v9 + 2) = 0.0;
  m_delayBeforeNextUser = 0.0;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1001, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1002, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
    __debugbreak();
  p[0] = bfx::LinkHandle::IsEnabled(&pLink->hLink);
  MemFile_WriteData(memFile, 1ui64, p);
  bfx::LinkHandle::GetLinkEnds(&pLink->hLink, &startOut, &endOut);
  m_x = startOut.m_v0.m_x;
  m_y = startOut.m_v0.m_y;
  m_z = startOut.m_v0.m_z;
  m_v1 = startOut.m_v1;
  MemFile_WriteData(memFile, 0xCui64, &m_x);
  MemFile_WriteData(memFile, 0xCui64, &m_v1);
  m_x = endOut.m_v0.m_x;
  m_y = endOut.m_v0.m_y;
  m_z = endOut.m_v0.m_z;
  m_v1 = endOut.m_v1;
  MemFile_WriteData(memFile, 0xCui64, &m_x);
  MemFile_WriteData(memFile, 0xCui64, &m_v1);
  v4 = SL_ConvertToString(pLink->name);
  MemFile_WriteCString(memFile, v4);
  LinkID = Nav_GetLinkID(&pLink->hLink);
  MemFile_WriteData(memFile, 4ui64, &LinkID);
  LinkDat = bfx::LinkHandle::GetLinkDat(&pLink->hLink, &result);
  v8 = *(__m256i *)&LinkDat->m_layerMask;
  v9 = *(_OWORD *)&LinkDat->m_maxSnapDist;
  m_delayBeforeNextUser = LinkDat->m_flowTune.m_delayBeforeNextUser;
  MemFile_WriteData(memFile, 0x34ui64, &v8);
}

/*
==============
Nav_WriteModifiedLinkWeights
==============
*/
void Nav_WriteModifiedLinkWeights(MemoryFile *memFile)
{
  int v2; 
  unsigned __int64 m_size; 
  unsigned __int64 v4; 
  int *v5; 
  int firstUsed; 
  __int64 v7; 
  __int64 v8; 
  int id; 
  __int64 v10; 
  bfx::LinkHandle rhs; 
  float v12; 
  int v13; 
  int v14; 
  int p; 

  v10 = -2i64;
  p = s_modifiedLinkWeights.m_size;
  MemFile_WriteData(memFile, 4ui64, &p);
  v2 = 0;
  m_size = s_modifiedLinkWeights.m_size;
  if ( s_modifiedLinkWeights.m_size )
  {
    v4 = 0i64;
    v5 = (int *)&s_modifiedLinkWeights.m_data.m_buffer[20];
    do
    {
      if ( v4 >= m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()", v10) )
        __debugbreak();
      if ( v4 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      bfx::LinkHandle::LinkHandle(&rhs, (const bfx::LinkHandle *)(v5 - 5));
      v12 = *((float *)v5 - 1);
      v13 = *v5;
      v14 = v5[1];
      firstUsed = g_NavData.linkPoolInfo.firstUsed;
      if ( g_NavData.linkPoolInfo.firstUsed < 0 )
      {
LABEL_12:
        id = -1;
      }
      else
      {
        while ( 1 )
        {
          v7 = firstUsed;
          v8 = (__int64)firstUsed << 6;
          if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v8), &rhs) )
            break;
          firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v8);
          if ( firstUsed < 0 )
            goto LABEL_12;
        }
        id = g_NavData.links[v7].id;
        if ( id != -1 )
          goto LABEL_15;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 959, ASSERT_TYPE_ASSERT, "(linkId != -1)", (const char *)&queryFormat, "linkId != -1") )
        __debugbreak();
LABEL_15:
      p = id;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteFloat(memFile, v12);
      p = v13;
      MemFile_WriteData(memFile, 4ui64, &p);
      p = v14;
      MemFile_WriteData(memFile, 4ui64, &p);
      bfx::LinkHandle::~LinkHandle(&rhs);
      ++v2;
      ++v4;
      v5 += 7;
      m_size = s_modifiedLinkWeights.m_size;
    }
    while ( v2 < s_modifiedLinkWeights.m_size );
  }
}

