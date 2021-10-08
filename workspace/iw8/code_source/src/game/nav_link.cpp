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
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *v5; 
  signed __int64 v12; 
  __int64 v13; 
  bfx::LinkHandle *v14; 
  ntl::fixed_vector<ModifiedLinkWeight,64,0> *v15; 
  bool v16; 
  char *v17; 
  bfx::LinkDat result; 
  void *retaddr; 

  _R11 = &retaddr;
  v5 = &s_modifiedLinkWeights;
  if ( &s_modifiedLinkWeights != (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovss  xmm6, cs:__real@41700000
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovss  xmm7, cs:__real@3dcccccd
    }
    do
    {
      if ( *(_DWORD *)&v5->m_data.m_buffer[24] == entNum )
      {
        if ( bfx::LinkHandle::IsValid((bfx::LinkHandle *)v5) )
        {
          bfx::LinkHandle::GetLinkDat((bfx::LinkHandle *)v5, &result);
          __asm
          {
            vmovss  xmm0, [rsp+0B8h+result.m_penaltyMult]
            vsubss  xmm0, xmm0, dword ptr [rsi+10h]; val
            vmovaps xmm2, xmm6; max
            vmovaps xmm1, xmm7; min
            vmovss  [rsp+0B8h+result.m_penaltyMult], xmm0
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  [rsp+0B8h+result.m_penaltyMult], xmm0 }
          bfx::LinkHandle::SetLinkDat((bfx::LinkHandle *)v5, &result);
        }
        if ( !s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
        if ( (v5 < &s_modifiedLinkWeights || v5 > (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        v12 = (char *)v5 - (char *)&s_modifiedLinkWeights;
        v13 = ((unsigned __int64)((char *)v5 - (char *)&s_modifiedLinkWeights) * (unsigned __int128)0x2492492492492493ui64) >> 64;
        if ( (char *)v5 - (char *)&s_modifiedLinkWeights != 28 * ((v13 + ((unsigned __int64)((char *)v5 - (char *)&s_modifiedLinkWeights - v13) >> 1)) >> 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
          __debugbreak();
        if ( v5 == (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
          __debugbreak();
        v5 = &s_modifiedLinkWeights;
        if ( s_modifiedLinkWeights.m_size )
          v5 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * (v12 / 28));
        bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)v5);
        v14 = (bfx::LinkHandle *)&v5->m_data.m_buffer[28];
        v15 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size);
        if ( &v5->m_data.m_buffer[28] == (char *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
          __debugbreak();
        if ( v15 == v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
          __debugbreak();
        v16 = v14 < (bfx::LinkHandle *)v15;
        if ( v14 > (bfx::LinkHandle *)v15 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
            __debugbreak();
          v16 = v14 < (bfx::LinkHandle *)v15;
        }
        if ( v16 )
        {
          v17 = &v5->m_data.m_buffer[20];
          do
          {
            bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(v17 - 20), v14);
            *((_DWORD *)v17 - 1) = *((_DWORD *)v17 + 6);
            *(_DWORD *)v17 = *((_DWORD *)v17 + 7);
            *((_DWORD *)v17 + 1) = *((_DWORD *)v17 + 8);
            bfx::LinkHandle::~LinkHandle(v14);
            v14 = (bfx::LinkHandle *)((char *)v14 + 28);
            v17 += 28;
          }
          while ( v14 < (bfx::LinkHandle *)v15 );
        }
        --s_modifiedLinkWeights.m_size;
      }
      else
      {
        v5 = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)v5 + 28);
      }
    }
    while ( v5 != (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) );
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
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
        __asm
        {
          vmovss  xmm0, [rsp+0B8h+startOut.m_v0.m_x]
          vmovss  xmm1, [rsp+0B8h+startOut.m_v0.m_y]
          vmovss  dword ptr [rsp+0B8h+pos], xmm0
          vmovss  xmm0, [rsp+0B8h+startOut.m_v0.m_z]
          vmovss  dword ptr [rsp+0B8h+pos+8], xmm0
          vmovss  dword ptr [rsp+0B8h+pos+4], xmm1
        }
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
  nav_link_s *v17; 
  const bfx::LinkHandle *v18; 
  int v19; 
  __int64 v20; 
  bfx::Vector3 enda; 
  bfx::Vector3 starta; 
  bfx::LinkHandle result; 

  _RBX = end;
  _RSI = start;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 82, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  if ( g_NavData.linkPoolInfo.count < 2303 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+78h+start.m_x], xmm0
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  [rsp+78h+start.m_y], xmm1
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  [rsp+78h+start.m_z], xmm0
      vmovss  xmm1, dword ptr [rbx]
      vmovss  [rsp+78h+end.m_x], xmm1
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  [rsp+78h+end.m_y], xmm0
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  [rsp+78h+end.m_z], xmm1
    }
    v17 = Nav_AllocLink();
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 94, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
      __debugbreak();
    v18 = bfx::CreateLink(&result, &pSpace->hSpace, &starta, &enda, linkDat);
    bfx::LinkHandle::operator=(&v17->hLink, v18);
    bfx::LinkHandle::~LinkHandle(&result);
    Scr_SetString(&v17->name, name);
    v19 = id;
    if ( id < 0 )
      v19 = s_NavLinkUniquifier++;
    v17->id = v19;
    v17->pNext = NULL;
    v17->pPrev = NULL;
    Nav_AddLinkToSpace(pSpace, v17);
    Nav_ClearCachedData(pSpace);
    return v17;
  }
  else
  {
    LODWORD(v20) = 2304;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of links (%d). (arbitrary limit. see code to raise.)", v20) )
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
  nav_link_s *v26; 
  const bfx::LinkHandle *v27; 
  int v28; 
  __int64 v29; 
  bfx::LinkHandle result; 
  bfx::LineSegment end; 
  bfx::LineSegment start; 

  _RBX = endPt1;
  _RSI = startPt2;
  _RBP = startPt1;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 117, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace", -2i64) )
    __debugbreak();
  if ( g_NavData.linkPoolInfo.count < 2303 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vmovss  [rsp+88h+start.m_v0.m_x], xmm0
      vmovss  xmm1, dword ptr [rbp+4]
      vmovss  [rsp+88h+start.m_v0.m_y], xmm1
      vmovss  xmm0, dword ptr [rbp+8]
      vmovss  [rsp+88h+start.m_v0.m_z], xmm0
      vmovss  xmm1, dword ptr [rsi]
      vmovss  [rsp+88h+start.m_v1.m_x], xmm1
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+88h+start.m_v1.m_y], xmm0
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  [rsp+88h+start.m_v1.m_z], xmm1
      vmovss  xmm0, dword ptr [rbx]
      vmovss  [rsp+88h+end.m_v0.m_x], xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  [rsp+88h+end.m_v0.m_y], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rsp+88h+end.m_v0.m_z], xmm0
    }
    _RAX = endPt2;
    __asm
    {
      vmovss  xmm1, dword ptr [rax]
      vmovss  [rsp+88h+end.m_v1.m_x], xmm1
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  [rsp+88h+end.m_v1.m_y], xmm0
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  [rsp+88h+end.m_v1.m_z], xmm1
    }
    v26 = Nav_AllocLink();
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 131, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
      __debugbreak();
    v27 = bfx::CreateLinkStrip(&result, &pSpace->hSpace, &start, &end, linkData);
    bfx::LinkHandle::operator=(&v26->hLink, v27);
    bfx::LinkHandle::~LinkHandle(&result);
    Scr_SetString(&v26->name, name);
    v28 = id;
    if ( id < 0 )
      v28 = s_NavLinkUniquifier++;
    v26->id = v28;
    v26->pNext = NULL;
    v26->pPrev = NULL;
    Nav_AddLinkToSpace(pSpace, v26);
    Nav_ClearCachedData(pSpace);
    return v26;
  }
  else
  {
    LODWORD(v29) = 2304;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of links (%d). (arbitrary limit. see code to raise.)", v29) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
Nav_DebugLinkWeights
==============
*/
void Nav_DebugLinkWeights()
{
  int v2; 
  unsigned __int64 v3; 
  const char *v14; 
  bfx::LinkHandle v18; 
  int v20; 
  int v21; 
  bfx::LineSegment startOut; 
  __int64 v23; 
  bfx::LineSegment endOut; 
  bfx::LinkDat result; 
  vec3_t xyz; 
  char v27; 
  void *retaddr; 

  _RAX = &retaddr;
  v23 = -2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v2 = 0;
  if ( s_modifiedLinkWeights.m_size )
  {
    v3 = 0i64;
    _RDI = (int *)&s_modifiedLinkWeights.m_data.m_buffer[20];
    __asm { vmovss  xmm6, cs:__real@3fc00000 }
    do
    {
      bfx::LinkHandle::LinkHandle(&v18);
      if ( v3 >= s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      bfx::LinkHandle::operator=(&v18, (const bfx::LinkHandle *)(_RDI - 5));
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-4]
        vmovss  [rsp+108h+var_C8], xmm0
      }
      v20 = *_RDI;
      v21 = _RDI[1];
      bfx::LinkHandle::GetLinkEnds(&v18, &startOut, &endOut);
      _RAX = bfx::LinkHandle::GetLinkDat(&v18, &result);
      __asm
      {
        vmovss  xmm2, dword ptr [rax+1Ch]
        vmovss  xmm0, [rsp+108h+startOut.m_v0.m_x]
        vmovss  dword ptr [rsp+108h+xyz], xmm0
        vmovss  xmm1, [rsp+108h+startOut.m_v0.m_y]
        vmovss  dword ptr [rsp+108h+xyz+4], xmm1
        vmovss  xmm0, [rsp+108h+startOut.m_v0.m_z]
        vmovss  dword ptr [rsp+108h+xyz+8], xmm0
        vcvtss2sd xmm1, xmm2, xmm2
        vmovq   rdx, xmm1
      }
      v14 = j_va("%f", _RDX);
      __asm { vmovaps xmm2, xmm6; scale }
      G_Main_AddDebugString(&xyz, &colorYellow, *(float *)&_XMM2, v14);
      bfx::LinkHandle::~LinkHandle(&v18);
      ++v2;
      ++v3;
      _RDI += 7;
    }
    while ( v2 < s_modifiedLinkWeights.m_size );
  }
  _R11 = &v27;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  bfx::LineSegment endOut; 
  bfx::LineSegment startOut; 

  _RDI = outEndPos;
  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 767, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)phLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 768, ASSERT_TYPE_ASSERT, "( phLink->IsValid() )", (const char *)&queryFormat, "phLink->IsValid()") )
    __debugbreak();
  bfx::LinkHandle::GetLinkEnds((bfx::LinkHandle *)phLink, &startOut, &endOut);
  __asm
  {
    vmovss  xmm0, [rsp+68h+endOut.m_v0.m_x]
    vmovss  xmm1, [rsp+68h+endOut.m_v0.m_y]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, [rsp+68h+endOut.m_v0.m_z]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
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
  bfx::LineSegment endOut; 
  bfx::LineSegment startOut; 

  _RDI = outStartPos;
  if ( !phLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 756, ASSERT_TYPE_ASSERT, "( phLink )", (const char *)&queryFormat, "phLink") )
    __debugbreak();
  if ( !bfx::LinkHandle::IsValid((bfx::LinkHandle *)phLink) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 757, ASSERT_TYPE_ASSERT, "( phLink->IsValid() )", (const char *)&queryFormat, "phLink->IsValid()") )
    __debugbreak();
  bfx::LinkHandle::GetLinkEnds((bfx::LinkHandle *)phLink, &startOut, &endOut);
  __asm
  {
    vmovss  xmm0, [rsp+68h+endOut.m_v0.m_x]
    vmovss  xmm1, [rsp+68h+endOut.m_v0.m_y]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, [rsp+68h+endOut.m_v0.m_z]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
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

void __fastcall Nav_ModifyLinkWeightForTime(int entNum, bfx::LinkHandle *phLink, double weight, int timeMs)
{
  __int64 v14; 
  char *v15; 
  char *v16; 
  bool v17; 
  _DWORD *v18; 
  _DWORD *v19; 
  signed __int64 v20; 
  const dvar_t *v22; 
  int firstUsed; 
  __int64 v24; 
  __int64 v25; 
  __int64 id; 
  char *fmt; 
  bfx::LinkHandle rhs; 
  int v37; 
  int v38; 
  bfx::LinkDat result; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm2
  }
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
    __asm
    {
      vaddss  xmm0, xmm6, [rsp+0B8h+result.m_penaltyMult]; val
      vmovss  [rsp+0B8h+result.m_penaltyMult], xmm0
      vmovss  xmm2, cs:__real@41700000; max
      vmovss  xmm1, cs:__real@3dcccccd; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  [rsp+0B8h+result.m_penaltyMult], xmm0 }
    bfx::LinkHandle::SetLinkDat(phLink, &result);
    bfx::LinkHandle::LinkHandle(&rhs);
    v37 = timeMs + level.time;
    bfx::LinkHandle::operator=(&rhs, phLink);
    __asm { vmovss  [rsp+0B8h+var_60], xmm6 }
    v38 = entNum;
    for ( _RDI = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size); _RDI != &s_modifiedLinkWeights; _RDI = (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)_RDI - 28) )
    {
      if ( SLODWORD(_RDI[-1].m_size) >= v37 )
        break;
    }
    if ( s_modifiedLinkWeights.m_size == 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (_RDI < &s_modifiedLinkWeights || _RDI > (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v14 = ((unsigned __int64)((char *)_RDI - (char *)&s_modifiedLinkWeights) * (unsigned __int128)0x2492492492492493ui64) >> 64;
    if ( (char *)_RDI - (char *)&s_modifiedLinkWeights != 28 * ((v14 + ((unsigned __int64)((char *)_RDI - (char *)&s_modifiedLinkWeights - v14) >> 1)) >> 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &rhs >= (bfx::LinkHandle *)_RDI && &rhs < (bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    v15 = &s_modifiedLinkWeights.m_data.m_buffer[28 * s_modifiedLinkWeights.m_size];
    if ( _RDI != (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)v15 )
    {
      v16 = &s_modifiedLinkWeights.m_data.m_buffer[28 * s_modifiedLinkWeights.m_size + 28];
      if ( _RDI == (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v15 == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v17 = v15 <= (char *)_RDI;
      if ( v15 < (char *)_RDI )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v17 = v15 <= (char *)_RDI;
      }
      if ( !v17 )
      {
        v18 = v15 + 20;
        v19 = v16 + 20;
        v20 = v15 - v16;
        do
        {
          v18 -= 7;
          v19 -= 7;
          bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)(v19 - 5), (const bfx::LinkHandle *)((char *)v19 + v20 - 20));
          *(v19 - 1) = *(v18 - 1);
          *v19 = *v18;
          v19[1] = v18[1];
          bfx::LinkHandle::~LinkHandle((bfx::LinkHandle *)((char *)v19 + v20 - 20));
        }
        while ( (ntl::fixed_vector<ModifiedLinkWeight,64,0> *)((char *)v19 + v20 - 20) > _RDI );
      }
    }
    ++s_modifiedLinkWeights.m_size;
    bfx::LinkHandle::LinkHandle((bfx::LinkHandle *)_RDI, &rhs);
    __asm
    {
      vmovss  xmm0, [rsp+0B8h+var_60]
      vmovss  dword ptr [rdi+10h], xmm0
    }
    *(_DWORD *)&_RDI->m_data.m_buffer[20] = v37;
    *(_DWORD *)&_RDI->m_data.m_buffer[24] = v38;
    v22 = DCONST_DVARBOOL_ai_debugLinkWeights;
    if ( !DCONST_DVARBOOL_ai_debugLinkWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLinkWeights") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
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
          v24 = firstUsed;
          v25 = (__int64)firstUsed << 6;
          if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v25), &rhs) )
            break;
          firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v25);
          if ( firstUsed < 0 )
            goto LABEL_44;
        }
        id = (unsigned int)g_NavData.links[v24].id;
      }
      __asm
      {
        vmovss  xmm0, [rsp+0B8h+result.m_penaltyMult]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovss  xmm2, [rsp+0B8h+var_60]
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0B8h+fmt], xmm0
        vmovq   r8, xmm2
      }
      Com_Printf(18, "Added link weight of %f for %i. Total: %f\n", *(double *)&_XMM2, id, *(double *)&fmt);
    }
    bfx::LinkHandle::~LinkHandle(&rhs);
  }
  _R11 = &v40;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Nav_MoveLinkToSpace
==============
*/
void Nav_MoveLinkToSpace(nav_link_s *pLink, nav_space_s *pNewSpace)
{
  const bfx::LinkHandle *v10; 
  char linkDat[56]; 
  __int64 v12; 
  bfx::LinkHandle v13; 
  bfx::LineSegment endOut; 
  bfx::LineSegment startOut; 
  bfx::LinkDat result; 

  v12 = -2i64;
  *(_OWORD *)linkDat = 0xFFFFFFFFui64;
  *(_WORD *)&linkDat[16] = 1;
  *(_QWORD *)&linkDat[20] = -1i64;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rbp+57h+linkDat+1Ch], xmm0
  }
  *(float *)&_XMM0 = bfx::GetScale();
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40800000
    vmovss  dword ptr [rbp+57h+linkDat+20h], xmm1
  }
  *(float *)&_XMM0 = bfx::GetScale();
  __asm
  {
    vmovss  dword ptr [rbp+57h+linkDat+24h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+57h+linkDat+28h], xmm0
  }
  *(_DWORD *)&linkDat[44] = 0;
  __asm { vmovss  dword ptr [rbp+57h+linkDat+30h], xmm0 }
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 589, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink", *(_QWORD *)linkDat, *(_QWORD *)&linkDat[8], *(_QWORD *)&linkDat[16], *(_QWORD *)&linkDat[24], *(_QWORD *)&linkDat[32], *(_QWORD *)&linkDat[40], *(_QWORD *)&linkDat[48], v12) )
    __debugbreak();
  if ( !pLink->pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 590, ASSERT_TYPE_ASSERT, "( pLink->pSpace )", (const char *)&queryFormat, "pLink->pSpace") )
    __debugbreak();
  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 591, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  if ( pLink->pSpace != pNewSpace )
  {
    _RAX = bfx::LinkHandle::GetLinkDat(&pLink->hLink, &result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+57h+linkDat], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+57h+linkDat+20h], xmm1
    }
    *(float *)&linkDat[48] = _RAX->m_flowTune.m_delayBeforeNextUser;
    bfx::LinkHandle::GetLinkEnds(&pLink->hLink, &startOut, &endOut);
    Nav_RemoveLinkFromSpace(pLink->pSpace, pLink);
    bfx::DestroyLink(&pLink->hLink);
    v10 = bfx::CreateLinkStrip(&v13, &pNewSpace->hSpace, &startOut, &endOut, (const bfx::LinkDat *)linkDat);
    bfx::LinkHandle::operator=(&pLink->hLink, v10);
    bfx::LinkHandle::~LinkHandle(&v13);
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
  const char *CString; 
  nav_link_s *v9; 
  bool p[4]; 
  int id; 
  bfx::LinkDat linkData; 
  vec3_t endPt2; 
  vec3_t endPt1; 
  vec3_t startPt2; 
  vec3_t startPt1; 

  __asm { vmovss  xmm0, cs:__real@3f800000 }
  name = 0;
  linkData.m_layerMask = -1;
  __asm { vmovss  [rbp+57h+var_98.m_penaltyMult], xmm0 }
  linkData.m_type = JUMP_LINK;
  linkData.m_userData = 0i64;
  *(_WORD *)&linkData.m_bidirectional = 1;
  *(_QWORD *)&linkData.m_forwardLinkUsageFlags = -1i64;
  *(float *)&_XMM0 = bfx::GetScale();
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40800000
    vmovss  [rbp+57h+var_98.m_maxSnapDist], xmm1
  }
  *(float *)&_XMM0 = bfx::GetScale();
  linkData.m_flowTune.m_maxSimultaneous = 0;
  __asm
  {
    vmovss  [rbp+57h+var_98.m_mayUseDist], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+57h+var_98.m_mustUseDist], xmm0
    vmovss  [rbp+57h+var_98.m_flowTune.m_delayBeforeNextUser], xmm0
  }
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1038, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1039, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, p);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+startPt1], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+startPt1+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+startPt1+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+startPt2], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+startPt2+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+startPt2+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+endPt1], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+endPt1+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+endPt1+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+endPt2], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+endPt2+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+57h+endPt2+8], xmm0 }
  CString = MemFile_ReadCString(memFile);
  if ( CString && *CString )
    name = SL_GetString(CString, 0);
  MemFile_ReadData(memFile, 4ui64, &id);
  MemFile_ReadData(memFile, 0x34ui64, &linkData);
  v9 = Nav_CreateLinkStrip(pSpace, &startPt1, &startPt2, &endPt1, &endPt2, name, id, &linkData);
  bfx::LinkHandle::Enable(&v9->hLink, p[0]);
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
  __int64 v3; 
  unsigned int v4; 
  int firstUsed; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  bfx::LinkHandle rhs; 
  int v12; 
  int v13; 
  unsigned int p; 
  int v15; 
  int v16; 

  v9 = -2i64;
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( (int)p > 0 )
  {
    v3 = p;
    do
    {
      bfx::LinkHandle::LinkHandle(&rhs);
      MemFile_ReadData(memFile, 4ui64, &p);
      v4 = p;
      if ( p == -1 || (firstUsed = g_NavData.linkPoolInfo.firstUsed, g_NavData.linkPoolInfo.firstUsed < 0) )
      {
LABEL_7:
        bfx::LinkHandle::Release(&rhs);
        LODWORD(v8) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 980, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LoadModifiedLinkWeights failed to find link id %i", v8) )
          __debugbreak();
      }
      else
      {
        while ( 1 )
        {
          v6 = (__int64)firstUsed << 6;
          if ( *(int *)((char *)&g_NavData.links[0].id + v6) == p )
            break;
          firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v6);
          if ( firstUsed < 0 )
            goto LABEL_7;
        }
        bfx::LinkHandle::operator=(&rhs, (const bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v6));
      }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  [rsp+98h+var_50], xmm0 }
      MemFile_ReadData(memFile, 4ui64, &v15);
      v12 = v15;
      MemFile_ReadData(memFile, 4ui64, &v16);
      v13 = v16;
      if ( s_modifiedLinkWeights.m_size >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()", v9) )
        __debugbreak();
      _RBX = (bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * s_modifiedLinkWeights.m_size);
      bfx::LinkHandle::LinkHandle(_RBX, &rhs);
      __asm
      {
        vmovss  xmm0, [rsp+98h+var_50]
        vmovss  dword ptr [rbx+10h], xmm0
      }
      HIDWORD(_RBX[1].m_pProxy) = v12;
      LODWORD(_RBX[1].m_pSpace) = v13;
      ++s_modifiedLinkWeights.m_size;
      bfx::LinkHandle::~LinkHandle(&rhs);
      --v3;
    }
    while ( v3 );
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
void Nav_SetupNavLinks()
{
  bool v7; 
  __int64 v9; 
  char *MapName; 
  bool v11; 
  nav_link_creation_data_s **linkCreationData; 
  unsigned int m_UsageFlags; 
  char *v19; 
  char *v20; 
  const char *v21; 
  scr_string_t m_Target; 
  unsigned __int16 v25; 
  char *v26; 
  const char *v27; 
  unsigned __int16 v28; 
  pathnode_t *v29; 
  bool v30; 
  bool v31; 
  int v32; 
  pathlink_s *v33; 
  pathnode_t *v34; 
  unsigned int v35; 
  pathnode_t *v36; 
  pathnode_t *v37; 
  const char *v38; 
  const char *v39; 
  __int64 v40; 
  unsigned __int16 totalLinkCount; 
  pathlink_s *Links; 
  __int64 v43; 
  unsigned __int8 *p_negotiationLink; 
  const char *v45; 
  const char *v46; 
  pathnode_t *v47; 
  pathnode_t *v48; 
  const char *v49; 
  const char *v50; 
  unsigned __int16 v51; 
  unsigned __int16 v52; 
  int EntNumForTargetName; 
  nav_space_s *SpaceByEntNum; 
  const char *v55; 
  const char *v56; 
  char v57; 
  char v58; 
  bfx::SpaceHandle v69; 
  bfx::SpaceHandle v80; 
  bfx::SpaceHandle v91; 
  bfx::SpaceHandle v102; 
  char *v110; 
  unsigned __int16 v111; 
  unsigned __int16 v112; 
  unsigned __int64 v113; 
  __int16 v114; 
  int v115; 
  unsigned __int64 m_userData_high; 
  int v117; 
  const gentity_s *Parent; 
  nav_space_s *DefaultSpace; 
  nav_link_s *v122; 
  const bfx::LinkHandle *v123; 
  unsigned int v124; 
  char *fmt; 
  vec3_t *outClosestPos; 
  bfx::AreaHandle *pOutArea; 
  bool v134; 
  bool v135; 
  unsigned __int16 i; 
  int v137; 
  int v138; 
  bfx::LinkDat linkDat; 
  nav_link_creation_data_s **v140; 
  bfx::SpaceHandle v141; 
  bfx::SpaceHandle v142; 
  bfx::SpaceHandle v143; 
  bfx::SpaceHandle v144; 
  vec3_t *p_m_Pt2; 
  __int64 v146; 
  vec3_t testPoint; 
  vec3_t outPoint; 
  vec3_t outUp; 
  vec3_t endPt2; 
  vec3_t endPt1; 
  bfx::LinkHandle startPt2; 
  vec3_t pos; 
  vec3_t v154; 
  bfx::PathSpec pPathSpec; 
  char v156; 
  void *retaddr; 

  _RAX = &retaddr;
  v146 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  *(_QWORD *)&linkDat.m_forwardLinkUsageFlags = -1i64;
  bfx::GetScale();
  bfx::GetScale();
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vmovss  [rbp+110h+linkDat.m_flowTune.m_delayBeforeNextUser], xmm10
  }
  v7 = g_NavData.numLinkData > 0;
  v134 = g_NavData.numLinkData > 0;
  if ( Nav_MeshLoaded() )
  {
    linkDat.m_layerMask = -1;
    linkDat.m_type = CUSTOM_LINK;
    *(_WORD *)&linkDat.m_bidirectional = 0;
    __asm
    {
      vmovups xmm0, cs:__xmm@0000000040c000003f8000003f800000
      vmovups xmmword ptr [rsp+210h+linkDat.m_penaltyMult], xmm0
    }
    v9 = 0i64;
    linkDat.m_userData = 0i64;
    linkDat.m_flowTune.m_maxSimultaneous = 1;
    if ( v7 )
    {
      v11 = 0;
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        MapName = Nav_GetMapName();
        if ( !Com_IsCpMap(MapName) )
          v11 = 1;
      }
      v135 = v11;
      v137 = 0;
      if ( g_NavData.numLinkData > 0 )
      {
        linkCreationData = g_NavData.linkCreationData;
        v140 = g_NavData.linkCreationData;
        __asm
        {
          vmovss  xmm9, cs:__real@40400000
          vmovss  xmm6, cs:__real@43800000
          vmovss  xmm8, cs:__real@3f800000
          vmovss  xmm7, cs:__real@44800000
        }
        do
        {
          _RDI = *linkCreationData;
          m_UsageFlags = (*linkCreationData)->m_UsageFlags;
          if ( m_UsageFlags )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && (m_UsageFlags & 1) != 0 )
            {
              v21 = SL_ConvertToString(_RDI->m_Animscript);
              m_UsageFlags |= Bot_AnimscriptToLinkMask(v21);
            }
            if ( !LOSPrecomputeSystem::IsSystemEnabled(&g_losPrecomputeData) && (_RDI->m_UsageFlags & 0x800) != 0 )
              goto LABEL_24;
            linkDat.m_bidirectional = _RDI->m_bBidirectional;
            linkDat.m_forwardLinkUsageFlags = m_UsageFlags;
            linkDat.m_backwardLinkUsageFlags = m_UsageFlags;
            if ( v11 )
            {
              __asm
              {
                vmulss  xmm1, xmm9, dword ptr [rdi+40h]
                vmovss  [rsp+210h+linkDat.m_penaltyMult], xmm1
              }
              linkDat.m_flowTune.m_maxSimultaneous = 1;
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+40h]
                vmovss  [rsp+210h+linkDat.m_penaltyMult], xmm0
              }
            }
            m_Target = _RDI->m_Target;
            v25 = 0;
            if ( Path_NodeCount() <= 0 )
              goto LABEL_23;
            while ( !Path_NodeValid(v25) || pathData.nodes[v25].constant.target != m_Target )
            {
              if ( ++v25 >= Path_NodeCount() )
                goto LABEL_23;
            }
            if ( v25 == 0xFFFF )
            {
LABEL_23:
              v26 = vtos(&_RDI->m_Start.m_Pt1);
              v27 = SL_ConvertToString(_RDI->m_Target);
              Com_PrintError(18, "Unable to find negotiation begin node with target '%s'. Expected at position %s. Skipping creation of link.\n", v27, v26);
            }
            else
            {
              v35 = v25;
              if ( v25 >= (unsigned int)Path_NodeCount() )
              {
                LODWORD(pOutArea) = Path_NodeCount();
                LODWORD(outClosestPos) = v25;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 364, ASSERT_TYPE_ASSERT, "(unsigned)( beginNodeIndex ) < (unsigned)( Path_NodeCount() )", "beginNodeIndex doesn't index Path_NodeCount()\n\t%i not in [0, %i)", outClosestPos, pOutArea) )
                  __debugbreak();
              }
              v36 = Path_ConvertIndexToNode(v25);
              v37 = v36;
              if ( (unsigned __int16)(v36->constant.type - 29) <= 1u )
              {
                v110 = Nav_GetMapName();
                if ( !Com_IsCpMap(v110) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 370, ASSERT_TYPE_ASSERT, "( Com_IsCpMap( Nav_GetMapName() ) )", (const char *)&queryFormat, "Com_IsCpMap( Nav_GetMapName() )") )
                {
                  __debugbreak();
                  v9 = 0i64;
                  goto LABEL_24;
                }
LABEL_78:
                v9 = 0i64;
                goto LABEL_24;
              }
              if ( v36->constant.animscript )
              {
                if ( v36->constant.error )
                {
                  v39 = vtos(&_RDI->m_Start.m_Pt1);
                  Com_PrintError(18, "Pathnode %d (%s) at pos %s has an error. Skipping creation of link.\n", v25, nodeStringTable[v37->constant.type], v39);
                  v9 = 0i64;
                }
                else
                {
                  v40 = 0i64;
                  totalLinkCount = v37->constant.totalLinkCount;
                  if ( !totalLinkCount )
                    goto LABEL_59;
                  Links = v37->constant.Links;
                  v43 = totalLinkCount;
                  p_negotiationLink = &Links->negotiationLink;
                  while ( !*p_negotiationLink )
                  {
                    ++v40;
                    p_negotiationLink += 12;
                    if ( v40 >= v43 )
                      goto LABEL_59;
                  }
                  v47 = Path_ConvertIndexToNode(Links[v40].nodeNum);
                  v48 = v47;
                  if ( v47 )
                  {
                    if ( v37->constant.target != v47->constant.targetname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 403, ASSERT_TYPE_ASSERT, "( pBeginNode->constant.target == pEndNode->constant.targetname )", (const char *)&queryFormat, "pBeginNode->constant.target == pEndNode->constant.targetname") )
                      __debugbreak();
                    if ( v48->constant.error )
                    {
                      v49 = vtos(&_RDI->m_End.m_Pt1);
                      v50 = nodeStringTable[v48->constant.type];
                      v51 = Path_ConvertNodeToIndex(v48);
                      Com_PrintError(18, "Pathnode %d (%s) at pos %s has an error. Skipping creation of link.\n", v51, v50, v49);
                      v9 = 0i64;
                    }
                    else
                    {
                      v52 = Path_ConvertNodeToIndex(v48);
                      linkDat.m_userData = Nav_ConstructLinkUserData(v25, v52);
                      EntNumForTargetName = Nav_GetEntNumForTargetName(_RDI->m_Parent);
                      SpaceByEntNum = Nav_GetSpaceByEntNum(EntNumForTargetName);
                      if ( SpaceByEntNum )
                      {
                        pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
                        *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
                        *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
                        pPathSpec.m_usePathSharingPenalty = 0;
                        __asm
                        {
                          vmovss  [rbp+110h+pPathSpec.m_pathSharingPenalty], xmm10
                          vmovss  [rbp+110h+pPathSpec.m_maxPathSharingPenalty], xmm10
                          vmovss  [rbp+110h+pPathSpec.m_maxSearchDist], xmm10
                        }
                        bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
                        pPathSpec.m_snapMode = SNAP_CLOSEST;
                        pPathSpec.m_obstacleBlockageFlags = 0;
                        Nav_GetSpaceUp(SpaceByEntNum, &outUp);
                        Nav_GetClosestVerticalPos(&_RDI->m_Start.m_Pt1, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, &outPoint, NULL);
                        Nav_GetClosestVerticalPos(&_RDI->m_Start.m_Pt2, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, (vec3_t *)&startPt2, NULL);
                        Nav_GetClosestVerticalPos(&_RDI->m_End.m_Pt1, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, &endPt1, NULL);
                        p_m_Pt2 = &_RDI->m_End.m_Pt2;
                        Nav_GetClosestVerticalPos(&_RDI->m_End.m_Pt2, &outUp, 0, &SpaceByEntNum->hSpace, &pPathSpec, &endPt2, NULL);
                        __asm
                        {
                          vmovss  xmm4, dword ptr [rdi]
                          vsubss  xmm2, xmm4, dword ptr [rbp+110h+outPoint]
                          vmovss  xmm0, dword ptr [rdi+4]
                          vsubss  xmm1, xmm0, dword ptr [rbp+110h+outPoint+4]
                          vmulss  xmm3, xmm1, xmm1
                          vmulss  xmm2, xmm2, xmm2
                          vaddss  xmm0, xmm3, xmm2
                          vcomiss xmm0, xmm6
                        }
                        if ( !(v57 | v58) )
                        {
                          __asm
                          {
                            vmovss  dword ptr [rbp+110h+testPoint], xmm4
                            vmovss  xmm0, dword ptr [rdi+4]
                            vmovss  dword ptr [rbp+110h+testPoint+4], xmm0
                            vaddss  xmm2, xmm8, dword ptr [rdi+8]
                            vmovss  dword ptr [rbp+110h+testPoint+8], xmm2
                          }
                          bfx::SpaceHandle::SpaceHandle(&v141, &SpaceByEntNum->hSpace);
                          __asm { vmovaps xmm3, xmm6; probeDistance }
                          Nav_TryFindPointOnMeshBelowPoint(v69, 0, &testPoint, *(const float *)&_XMM3, &outPoint);
                        }
                        __asm
                        {
                          vmovss  xmm4, dword ptr [rdi+0Ch]
                          vsubss  xmm2, xmm4, dword ptr [rbp+110h+startPt2]
                          vmovss  xmm0, dword ptr [rdi+10h]
                          vsubss  xmm1, xmm0, dword ptr [rbp+110h+startPt2+4]
                          vmulss  xmm3, xmm1, xmm1
                          vmulss  xmm2, xmm2, xmm2
                          vaddss  xmm0, xmm3, xmm2
                          vcomiss xmm0, xmm6
                        }
                        if ( !(v57 | v58) )
                        {
                          __asm
                          {
                            vmovss  dword ptr [rbp+110h+testPoint], xmm4
                            vmovss  xmm0, dword ptr [rdi+10h]
                            vmovss  dword ptr [rbp+110h+testPoint+4], xmm0
                            vaddss  xmm2, xmm8, dword ptr [rdi+14h]
                            vmovss  dword ptr [rbp+110h+testPoint+8], xmm2
                          }
                          bfx::SpaceHandle::SpaceHandle(&v142, &SpaceByEntNum->hSpace);
                          __asm { vmovaps xmm3, xmm6; probeDistance }
                          Nav_TryFindPointOnMeshBelowPoint(v80, 0, &testPoint, *(const float *)&_XMM3, (vec3_t *)&startPt2);
                        }
                        __asm
                        {
                          vmovss  xmm4, dword ptr [rdi+18h]
                          vsubss  xmm2, xmm4, dword ptr [rbp+110h+endPt1]
                          vmovss  xmm0, dword ptr [rdi+1Ch]
                          vsubss  xmm1, xmm0, dword ptr [rbp+110h+endPt1+4]
                          vmulss  xmm3, xmm1, xmm1
                          vmulss  xmm2, xmm2, xmm2
                          vaddss  xmm0, xmm3, xmm2
                          vcomiss xmm0, xmm6
                        }
                        if ( !(v57 | v58) )
                        {
                          __asm
                          {
                            vmovss  dword ptr [rbp+110h+testPoint], xmm4
                            vmovss  xmm0, dword ptr [rdi+1Ch]
                            vmovss  dword ptr [rbp+110h+testPoint+4], xmm0
                            vaddss  xmm2, xmm8, dword ptr [rdi+20h]
                            vmovss  dword ptr [rbp+110h+testPoint+8], xmm2
                          }
                          bfx::SpaceHandle::SpaceHandle(&v143, &SpaceByEntNum->hSpace);
                          __asm { vmovaps xmm3, xmm6; probeDistance }
                          Nav_TryFindPointOnMeshBelowPoint(v91, 0, &testPoint, *(const float *)&_XMM3, &endPt1);
                        }
                        __asm
                        {
                          vmovss  xmm4, dword ptr [rdi+24h]
                          vsubss  xmm2, xmm4, dword ptr [rbp+110h+endPt2]
                          vmovss  xmm0, dword ptr [rdi+28h]
                          vsubss  xmm1, xmm0, dword ptr [rbp+110h+endPt2+4]
                          vmulss  xmm3, xmm1, xmm1
                          vmulss  xmm2, xmm2, xmm2
                          vaddss  xmm0, xmm3, xmm2
                          vcomiss xmm0, xmm6
                        }
                        if ( !(v57 | v58) )
                        {
                          __asm
                          {
                            vmovss  dword ptr [rbp+110h+testPoint], xmm4
                            vmovss  xmm0, dword ptr [rdi+28h]
                            vmovss  dword ptr [rbp+110h+testPoint+4], xmm0
                            vaddss  xmm2, xmm8, dword ptr [rdi+2Ch]
                            vmovss  dword ptr [rbp+110h+testPoint+8], xmm2
                          }
                          bfx::SpaceHandle::SpaceHandle(&v144, &SpaceByEntNum->hSpace);
                          __asm { vmovaps xmm3, xmm6; probeDistance }
                          Nav_TryFindPointOnMeshBelowPoint(v102, 0, &testPoint, *(const float *)&_XMM3, &endPt2);
                        }
                        if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)272) )
                        {
                          v9 = 0i64;
                          Nav_CreateLinkStrip(SpaceByEntNum, &outPoint, (const vec3_t *)&startPt2, &endPt1, &endPt2, (const scr_string_t)0, -1, &linkDat);
                          goto LABEL_24;
                        }
                        __asm
                        {
                          vmovss  xmm0, dword ptr [rdi]
                          vsubss  xmm4, xmm0, dword ptr [rbp+110h+outPoint]
                          vmovss  xmm1, dword ptr [rdi+4]
                          vsubss  xmm2, xmm1, dword ptr [rbp+110h+outPoint+4]
                          vmulss  xmm3, xmm2, xmm2
                          vmulss  xmm0, xmm4, xmm4
                          vaddss  xmm1, xmm3, xmm0
                          vcomiss xmm1, xmm7
                        }
                        fmt = vtos(&_RDI->m_Start.m_Pt1);
                        Com_PrintError(18, "Pathnode %d (%s) at pos %s is too far off the navmesh. Skipping creation of link.\n", v35, nodeStringTable[v37->constant.type], fmt);
                        goto LABEL_78;
                      }
                      v55 = vtos(&_RDI->m_Start.m_Pt1);
                      v56 = SL_ConvertToString(_RDI->m_Parent);
                      Com_PrintError(18, "Unable to find parent space %s for traversal start node %d at position %s. Skipping creation of link.\n", v56, v35, v55);
                      v9 = 0i64;
                    }
                  }
                  else
                  {
LABEL_59:
                    v45 = vtos(&_RDI->m_Start.m_Pt1);
                    v46 = vtos(&_RDI->m_End.m_Pt1);
                    Com_PrintError(18, "Unable to find negotiation end node. Expected at position %s, with start node %d at position %s. Skipping creation of link.\n", v46, v35, v45);
                    v9 = 0i64;
                  }
                }
              }
              else
              {
                v38 = vtos(&_RDI->m_Start.m_Pt1);
                Com_PrintError(18, "Pathnode %d (%s) at pos %s has no animscript specified. Skipping creation of link.\n", v25, nodeStringTable[v37->constant.type], v38);
                v9 = 0i64;
              }
            }
          }
          else
          {
            v19 = vtos(&_RDI->m_End.m_Pt1);
            v20 = vtos(&_RDI->m_Start.m_Pt1);
            Com_PrintError(18, "Attempting to create nav link that nobody can use! Start node pos: %s, end node pos: %s. Skipping creation of link.\n", v20, v19);
          }
LABEL_24:
          ++v137;
          linkCreationData = ++v140;
          v11 = v135;
        }
        while ( v137 < g_NavData.numLinkData );
      }
      v7 = v134;
    }
    v138 = Path_FixedNodeCount();
    v28 = 0;
    for ( i = 0; v28 < v138; v7 = v134 )
    {
      v29 = &pathData.nodes[v28];
      v30 = (unsigned __int16)(v29->constant.type - 29) <= 1u;
      v31 = Path_IsNodeTraversalBegin(v29) == 1;
      if ( v30 || !v7 && v31 )
      {
        if ( !v29->constant.target && (unsigned __int16)(v29->constant.type - 29) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 508, ASSERT_TYPE_ASSERT, "(pNode->constant.target != ( static_cast< scr_string_t >( 0 ) ) || Path_IsJumpNode( pNode ))", (const char *)&queryFormat, "pNode->constant.target != NULL_SCR_STRING || Path_IsJumpNode( pNode )") )
          __debugbreak();
        v32 = 0;
        if ( v29->constant.totalLinkCount )
        {
          do
          {
            v33 = v29->constant.Links;
            if ( v33[v9].negotiationLink )
            {
              v34 = Path_ConvertIndexToNode(v33[v9].nodeNum);
              if ( v29->constant.target != v34->constant.targetname && (unsigned __int16)(v29->constant.type - 29) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 519, ASSERT_TYPE_ASSERT, "(pNode->constant.target == pLinkedNode->constant.targetname || Path_IsJumpNode( pNode ))", (const char *)&queryFormat, "pNode->constant.target == pLinkedNode->constant.targetname || Path_IsJumpNode( pNode )") )
                __debugbreak();
              if ( !v29->constant.animscript && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 520, ASSERT_TYPE_ASSERT, "(pNode->constant.animscript != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "pNode->constant.animscript != NULL_SCR_STRING") )
                __debugbreak();
              if ( (unsigned __int16)(v29->constant.type - 29) <= 1u || Path_IsWallRunNode(v29) )
              {
                linkDat.m_forwardLinkUsageFlags = 4;
                linkDat.m_backwardLinkUsageFlags = 4;
              }
              else
              {
                linkDat.m_forwardLinkUsageFlags = 2047;
                linkDat.m_backwardLinkUsageFlags = 2047;
              }
              pathnode_t::GetPos(v29, &pos);
              pathnode_t::GetPos(v34, &v154);
              v111 = Path_ConvertNodeToIndex(v29);
              v112 = Path_ConvertNodeToIndex(v34);
              v113 = Nav_ConstructLinkUserData(v111, v112);
              linkDat.m_userData = v113;
              v114 = v113;
              if ( (_WORD)v113 != 0xFFFF )
              {
                v115 = (unsigned __int16)v113;
                if ( (unsigned __int16)v113 >= Path_NodeCount() )
                {
                  LODWORD(outClosestPos) = v115;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 258, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", outClosestPos) )
                    __debugbreak();
                }
              }
              if ( v111 != v114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 541, ASSERT_TYPE_ASSERT, "( startNode == GetStartNodeFromUserData( linkDat.m_userData ) )", (const char *)&queryFormat, "startNode == GetStartNodeFromUserData( linkDat.m_userData )") )
                __debugbreak();
              m_userData_high = HIDWORD(linkDat.m_userData);
              if ( WORD2(linkDat.m_userData) != 0xFFFF )
              {
                v117 = WORD2(linkDat.m_userData);
                if ( v117 >= Path_NodeCount() )
                {
                  LODWORD(outClosestPos) = (unsigned __int16)m_userData_high;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 265, ASSERT_TYPE_ASSERT, "( ( pathNodeIndex == 0xffff || pathNodeIndex < Path_NodeCount() ) )", "( pathNodeIndex ) = %i", outClosestPos) )
                    __debugbreak();
                }
              }
              if ( v112 != (_WORD)m_userData_high && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 542, ASSERT_TYPE_ASSERT, "( endNode == GetEndNodeFromUserData( linkDat.m_userData ) )", (const char *)&queryFormat, "endNode == GetEndNodeFromUserData( linkDat.m_userData )") )
                __debugbreak();
              Parent = pathnode_t::GetParent(v29);
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
                __asm
                {
                  vmovsd  xmm0, qword ptr [rbp+110h+pos]
                  vmovsd  qword ptr [rbp+110h+outPoint], xmm0
                }
                outPoint.v[2] = pos.v[2];
                __asm
                {
                  vmovsd  xmm0, qword ptr [rbp+110h+var_E0]
                  vmovsd  qword ptr [rbp+110h+outUp], xmm0
                }
                outUp.v[2] = v154.v[2];
                v122 = Nav_AllocLink();
                if ( !v122 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 94, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
                  __debugbreak();
                v123 = bfx::CreateLink(&startPt2, &DefaultSpace->hSpace, (const bfx::Vector3 *)&outPoint, (const bfx::Vector3 *)&outUp, &linkDat);
                bfx::LinkHandle::operator=(&v122->hLink, v123);
                bfx::LinkHandle::~LinkHandle(&startPt2);
                Scr_SetString(&v122->name, (scr_string_t)0);
                v124 = s_NavLinkUniquifier++;
                v122->id = v124;
                v122->pNext = NULL;
                v122->pPrev = NULL;
                Nav_AddLinkToSpace(DefaultSpace, v122);
                Nav_ClearCachedData(DefaultSpace);
              }
              else
              {
                LODWORD(outClosestPos) = 2304;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 86, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of links (%d). (arbitrary limit. see code to raise.)", outClosestPos) )
                  __debugbreak();
              }
            }
            ++v32;
            ++v9;
          }
          while ( v32 < v29->constant.totalLinkCount );
          v9 = 0i64;
        }
      }
      v28 = i + 1;
      i = v28;
    }
    Nav_InitModifiedLinkWeights();
  }
  _R11 = &v156;
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
Nav_TransferLinksToSpace
==============
*/
void Nav_TransferLinksToSpace(nav_space_s *pNewSpace)
{
  int i; 
  nav_link_s *v3; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
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
      __asm
      {
        vmovss  xmm0, [rsp+0D8h+startOut.m_v0.m_x]
        vmovss  xmm1, [rsp+0D8h+startOut.m_v0.m_y]
        vmovss  dword ptr [rsp+0D8h+pos], xmm0
        vmovss  xmm0, [rsp+0D8h+startOut.m_v0.m_z]
        vmovss  dword ptr [rsp+0D8h+pos+8], xmm0
        vmovss  dword ptr [rsp+0D8h+pos+4], xmm1
      }
      bfx::LinkHandle::GetLinkDat(&v3->hLink, &result);
      v7 = 0;
      v8 = 1;
      do
      {
        if ( (v8 & result.m_layerMask) != 0 )
          break;
        ++v7;
        v8 = __ROL4__(v8, 1);
      }
      while ( v7 < 3 );
      if ( (unsigned int)v7 >= 3 )
      {
        LODWORD(v10) = 3;
        LODWORD(v9) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 686, ASSERT_TYPE_ASSERT, "(unsigned)( layer ) < (unsigned)( NAV_NUM_LAYERS )", "layer doesn't index NAV_NUM_LAYERS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( Nav_FindMostLikelySpace(&pos, (const AINavLayer)v7, NULL) == pNewSpace )
        Nav_MoveLinkToSpace(v3, pNewSpace);
    }
  }
}

/*
==============
Nav_UpdateLinkWeights
==============
*/
void Nav_UpdateLinkWeights()
{
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 m_size; 
  const dvar_t *v14; 
  int firstUsed; 
  __int64 v16; 
  __int64 v17; 
  __int64 id; 
  char *fmt; 
  bfx::LinkHandle rhs; 
  int m_pProxy_high; 
  int m_pSpace; 
  bfx::LinkDat result; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( level.time != s_modifiedLinkWeightsLastUpdatedTime )
  {
    s_modifiedLinkWeightsLastUpdatedTime = level.time;
    if ( s_modifiedLinkWeights.m_size )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@41700000
        vmovss  xmm7, cs:__real@3dcccccd
      }
      do
      {
        v5 = s_modifiedLinkWeights.m_size - 1;
        if ( s_modifiedLinkWeights.m_size - 1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        if ( *(_DWORD *)&s_modifiedLinkWeights.m_data.m_buffer[28 * v5 + 20] > level.time )
          break;
        if ( !s_modifiedLinkWeights.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        v6 = s_modifiedLinkWeights.m_size - 1;
        if ( s_modifiedLinkWeights.m_size - 1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        _RBX = (const bfx::LinkHandle *)((char *)&s_modifiedLinkWeights + 28 * v6);
        bfx::LinkHandle::LinkHandle(&rhs, _RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vmovss  [rsp+0E8h+var_90], xmm0
        }
        m_pProxy_high = HIDWORD(_RBX[1].m_pProxy);
        m_pSpace = (int)_RBX[1].m_pSpace;
        bfx::LinkHandle::GetLinkDat(&rhs, &result);
        __asm
        {
          vmovss  xmm0, [rsp+0E8h+result.m_penaltyMult]
          vsubss  xmm0, xmm0, [rsp+0E8h+var_90]; val
          vmovss  [rsp+0E8h+result.m_penaltyMult], xmm0
          vmovaps xmm2, xmm6; max
          vmovaps xmm1, xmm7; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  [rsp+0E8h+result.m_penaltyMult], xmm0 }
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
        v14 = DCONST_DVARBOOL_ai_debugLinkWeights;
        if ( !DCONST_DVARBOOL_ai_debugLinkWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugLinkWeights") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        if ( v14->current.enabled )
        {
          firstUsed = g_NavData.linkPoolInfo.firstUsed;
          if ( g_NavData.linkPoolInfo.firstUsed < 0 )
          {
LABEL_25:
            id = 0xFFFFFFFFi64;
          }
          else
          {
            while ( 1 )
            {
              v16 = firstUsed;
              v17 = (__int64)firstUsed << 6;
              if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v17), &rhs) )
                break;
              firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v17);
              if ( firstUsed < 0 )
                goto LABEL_25;
            }
            id = (unsigned int)g_NavData.links[v16].id;
          }
          __asm
          {
            vmovss  xmm0, [rsp+0E8h+result.m_penaltyMult]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovss  xmm2, [rsp+0E8h+var_90]
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+0E8h+fmt], xmm0
            vmovq   r8, xmm2
          }
          Com_Printf(18, "Removed link weight of %f for %i. Total: %f\n", *(double *)&_XMM2, id, *(double *)&fmt);
        }
        bfx::LinkHandle::~LinkHandle(&rhs);
      }
      while ( s_modifiedLinkWeights.m_size );
    }
  }
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Nav_WriteLink
==============
*/
void Nav_WriteLink(MemoryFile *memFile, nav_link_s *pLink)
{
  const char *v19; 
  char p[8]; 
  int LinkID; 
  __m256i v25; 
  __int128 v26; 
  float m_delayBeforeNextUser; 
  bfx::LineSegment startOut; 
  bfx::LineSegment endOut; 
  bfx::LinkDat result; 
  int v31; 
  int v34; 

  __asm { vmovss  xmm0, cs:__real@3f800000 }
  *(_OWORD *)v25.m256i_i8 = 0xFFFFFFFFui64;
  __asm { vmovss  dword ptr [rsp+120h+var_E0+1Ch], xmm0 }
  v25.m256i_i16[8] = 1;
  *(__int64 *)((char *)&v25.m256i_i64[2] + 4) = -1i64;
  *(float *)&_XMM0 = bfx::GetScale();
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40800000
    vmovss  dword ptr [rsp+120h+var_C0], xmm1
  }
  *(float *)&_XMM0 = bfx::GetScale();
  HIDWORD(v26) = 0;
  __asm
  {
    vmovss  dword ptr [rsp+120h+var_C0+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+120h+var_C0+8], xmm0
    vmovss  [rsp+120h+var_B0], xmm0
  }
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1001, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !pLink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 1002, ASSERT_TYPE_ASSERT, "( pLink )", (const char *)&queryFormat, "pLink") )
    __debugbreak();
  p[0] = bfx::LinkHandle::IsEnabled(&pLink->hLink);
  MemFile_WriteData(memFile, 1ui64, p);
  bfx::LinkHandle::GetLinkEnds(&pLink->hLink, &startOut, &endOut);
  __asm
  {
    vmovss  xmm0, [rsp+120h+startOut.m_v0.m_x]
    vmovss  xmm1, [rsp+120h+startOut.m_v0.m_y]
    vmovss  [rbp+20h+var_40], xmm0
    vmovss  xmm0, [rbp+20h+startOut.m_v0.m_z]
    vmovss  [rbp+20h+var_3C], xmm1
    vmovss  xmm1, [rbp+20h+startOut.m_v1.m_x]
    vmovss  [rbp+20h+var_38], xmm0
    vmovss  xmm0, [rbp+20h+startOut.m_v1.m_y]
    vmovss  [rbp+20h+var_30], xmm1
    vmovss  xmm1, [rbp+20h+startOut.m_v1.m_z]
    vmovss  [rbp+20h+var_2C], xmm0
    vmovss  [rbp+20h+var_28], xmm1
  }
  MemFile_WriteData(memFile, 0xCui64, &v31);
  MemFile_WriteData(memFile, 0xCui64, &v34);
  __asm
  {
    vmovss  xmm0, [rbp+20h+endOut.m_v0.m_x]
    vmovss  xmm1, [rbp+20h+endOut.m_v0.m_y]
    vmovss  [rbp+20h+var_40], xmm0
    vmovss  xmm0, [rbp+20h+endOut.m_v0.m_z]
    vmovss  [rbp+20h+var_3C], xmm1
    vmovss  xmm1, [rbp+20h+endOut.m_v1.m_x]
    vmovss  [rbp+20h+var_38], xmm0
    vmovss  xmm0, [rbp+20h+endOut.m_v1.m_y]
    vmovss  [rbp+20h+var_30], xmm1
    vmovss  xmm1, [rbp+20h+endOut.m_v1.m_z]
    vmovss  [rbp+20h+var_2C], xmm0
    vmovss  [rbp+20h+var_28], xmm1
  }
  MemFile_WriteData(memFile, 0xCui64, &v31);
  MemFile_WriteData(memFile, 0xCui64, &v34);
  v19 = SL_ConvertToString(pLink->name);
  MemFile_WriteCString(memFile, v19);
  LinkID = Nav_GetLinkID(&pLink->hLink);
  MemFile_WriteData(memFile, 4ui64, &LinkID);
  _RAX = bfx::LinkHandle::GetLinkDat(&pLink->hLink, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+120h+var_E0], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups [rsp+120h+var_C0], xmm1
  }
  m_delayBeforeNextUser = _RAX->m_flowTune.m_delayBeforeNextUser;
  MemFile_WriteData(memFile, 0x34ui64, &v25);
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
  int firstUsed; 
  __int64 v8; 
  __int64 v9; 
  int id; 
  __int64 v12; 
  bfx::LinkHandle rhs; 
  int v15; 
  int v16; 
  int p; 

  v12 = -2i64;
  p = s_modifiedLinkWeights.m_size;
  MemFile_WriteData(memFile, 4ui64, &p);
  v2 = 0;
  m_size = s_modifiedLinkWeights.m_size;
  if ( s_modifiedLinkWeights.m_size )
  {
    v4 = 0i64;
    _RSI = (int *)&s_modifiedLinkWeights.m_data.m_buffer[20];
    do
    {
      if ( v4 >= m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()", v12) )
        __debugbreak();
      if ( v4 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      bfx::LinkHandle::LinkHandle(&rhs, (const bfx::LinkHandle *)(_RSI - 5));
      __asm
      {
        vmovss  xmm0, dword ptr [rsi-4]
        vmovss  [rsp+88h+var_40], xmm0
      }
      v15 = *_RSI;
      v16 = _RSI[1];
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
          v8 = firstUsed;
          v9 = (__int64)firstUsed << 6;
          if ( bfx::LinkHandle::operator==((bfx::LinkHandle *)((char *)&g_NavData.links[0].hLink + v9), &rhs) )
            break;
          firstUsed = *(__int16 *)((char *)&g_NavData.links[0].nextIdx + v9);
          if ( firstUsed < 0 )
            goto LABEL_12;
        }
        id = g_NavData.links[v8].id;
        if ( id != -1 )
          goto LABEL_15;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\nav_link.cpp", 959, ASSERT_TYPE_ASSERT, "(linkId != -1)", (const char *)&queryFormat, "linkId != -1") )
        __debugbreak();
LABEL_15:
      p = id;
      MemFile_WriteData(memFile, 4ui64, &p);
      __asm { vmovss  xmm1, [rsp+88h+var_40]; value }
      MemFile_WriteFloat(memFile, *(float *)&_XMM1);
      p = v15;
      MemFile_WriteData(memFile, 4ui64, &p);
      p = v16;
      MemFile_WriteData(memFile, 4ui64, &p);
      bfx::LinkHandle::~LinkHandle(&rhs);
      ++v2;
      ++v4;
      _RSI += 7;
      m_size = s_modifiedLinkWeights.m_size;
    }
    while ( v2 < s_modifiedLinkWeights.m_size );
  }
}

