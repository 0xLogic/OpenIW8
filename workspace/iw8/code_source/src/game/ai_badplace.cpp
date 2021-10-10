/*
==============
AICommonInterface::MarkNotInBadPlace
==============
*/

void __fastcall AICommonInterface::MarkNotInBadPlace(AICommonInterface *this)
{
  ?MarkNotInBadPlace@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::IsInGlobalBadplace
==============
*/

int __fastcall AICommonInterface::IsInGlobalBadplace(AICommonInterface *this, unsigned __int8 badPlaceFlags)
{
  return ?IsInGlobalBadplace@AICommonInterface@@QEBAHE@Z(this, badPlaceFlags);
}

/*
==============
AICommonInterface::MarkInBadPlace
==============
*/

void __fastcall AICommonInterface::MarkInBadPlace(AICommonInterface *this)
{
  ?MarkInBadPlace@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::FindSafePosOutsideBadplace
==============
*/

bool __fastcall AICommonInterface::FindSafePosOutsideBadplace(AICommonInterface *this, float safeDist, vec3_t *outPos)
{
  return ?FindSafePosOutsideBadplace@AICommonInterface@@QEBA_NMAEATvec3_t@@@Z(this, safeDist, outPos);
}

/*
==============
AICommonInterface::IsInAnyBadPlace
==============
*/

bool __fastcall AICommonInterface::IsInAnyBadPlace(AICommonInterface *this)
{
  return ?IsInAnyBadPlace@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
Path_ShutdownBadPlaces
==============
*/

void Path_ShutdownBadPlaces(void)
{
  ?Path_ShutdownBadPlaces@@YAXXZ();
}

/*
==============
AICommonInterface::BadPlace_IsNodeInAnyBadPlace
==============
*/

bool __fastcall AICommonInterface::BadPlace_IsNodeInAnyBadPlace(AICommonInterface *this, const pathnode_t *node, int traceMask, bitarray<224> *teamFlags)
{
  return ?BadPlace_IsNodeInAnyBadPlace@AICommonInterface@@QEBA_NPEBUpathnode_t@@HV?$bitarray@$0OA@@@@Z(this, node, traceMask, teamFlags);
}

/*
==============
AICommonInterface::BadPlace_StartEscape
==============
*/

void __fastcall AICommonInterface::BadPlace_StartEscape(AICommonInterface *this, pathnode_t *safeNode)
{
  ?BadPlace_StartEscape@AICommonInterface@@QEBAXPEAUpathnode_t@@@Z(this, safeNode);
}

/*
==============
AICommonInterface::Badplace_Ping
==============
*/

void __fastcall AICommonInterface::Badplace_Ping(AICommonInterface *this)
{
  ?Badplace_Ping@AICommonInterface@@QEBAXXZ(this);
}

/*
==============
AICommonInterface::BadPlaceAppliesViaFlags
==============
*/

int __fastcall AICommonInterface::BadPlaceAppliesViaFlags(AICommonInterface *this, int badPlaceFlags)
{
  return ?BadPlaceAppliesViaFlags@AICommonInterface@@QEBAHH@Z(this, badPlaceFlags);
}

/*
==============
AI_BadPlace_GetMaximumFleeRadius
==============
*/

double __fastcall AI_BadPlace_GetMaximumFleeRadius()
{
  double result; 

  *(float *)&result = ?AI_BadPlace_GetMaximumFleeRadius@@YAMXZ();
  return result;
}

/*
==============
AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace
==============
*/

int __fastcall AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace(AICommonInterface *this, pathsort_s *potentialNodes, float maxFleeDist)
{
  return ?BadPlace_FindSafeNodeOutsideBadPlace@AICommonInterface@@QEBAHPEAUpathsort_s@@M@Z(this, potentialNodes, maxFleeDist);
}

/*
==============
Path_BadPlaceAppliesViaFlags
==============
*/

int __fastcall Path_BadPlaceAppliesViaFlags(int badPlaceFlags, const pathnode_t *node)
{
  return ?Path_BadPlaceAppliesViaFlags@@YAHHPEBUpathnode_t@@@Z(badPlaceFlags, node);
}

/*
==============
Path_RemoveBadPlaceAtIndex
==============
*/

void __fastcall Path_RemoveBadPlaceAtIndex(int index)
{
  ?Path_RemoveBadPlaceAtIndex@@YAXH@Z(index);
}

/*
==============
Path_InitBadPlaces
==============
*/

void Path_InitBadPlaces(void)
{
  ?Path_InitBadPlaces@@YAXXZ();
}

/*
==============
AICommonInterface::BadPlaceApplies
==============
*/

int __fastcall AICommonInterface::BadPlaceApplies(AICommonInterface *this, const badplace_t *badPlace)
{
  return ?BadPlaceApplies@AICommonInterface@@QEBAHPEBUbadplace_t@@@Z(this, badPlace);
}

/*
==============
Path_RemoveBadPlace
==============
*/

void __fastcall Path_RemoveBadPlace(scr_string_t name)
{
  ?Path_RemoveBadPlace@@YAXW4scr_string_t@@@Z(name);
}

/*
==============
Path_UpdateBadPlaceCount
==============
*/

void __fastcall Path_UpdateBadPlaceCount(badplace_t *place, int delta)
{
  ?Path_UpdateBadPlaceCount@@YAXPEAUbadplace_t@@H@Z(place, delta);
}

/*
==============
Path_MakeGlobalBadPlace
==============
*/

int __fastcall Path_MakeGlobalBadPlace(scr_string_t name, int duration, bitarray<224> *teamflags, int flags)
{
  return ?Path_MakeGlobalBadPlace@@YAHW4scr_string_t@@HV?$bitarray@$0OA@@@H@Z(name, duration, teamflags, flags);
}

/*
==============
AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace
==============
*/

bool __fastcall AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(AICommonInterface *this, const vec3_t *nodeOrigin, const pathnode_t *node, int traceMask, bitarray<224> *teamFlags, int requireFlags, int excludeFlags)
{
  return ?BadPlace_IsNodeOriginInAnyBadPlace@AICommonInterface@@QEBA_NAEBTvec3_t@@PEBUpathnode_t@@HV?$bitarray@$0OA@@@HH@Z(this, nodeOrigin, node, traceMask, teamFlags, requireFlags, excludeFlags);
}

/*
==============
AICommonInterface::IsInBadplace
==============
*/

bool __fastcall AICommonInterface::IsInBadplace(AICommonInterface *this)
{
  return ?IsInBadplace@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
Path_RunBadPlaces
==============
*/

void Path_RunBadPlaces(void)
{
  ?Path_RunBadPlaces@@YAXXZ();
}

/*
==============
AIScriptedInterface::FindSafeNodeAlongPath
==============
*/

pathnode_t *__fastcall AIScriptedInterface::FindSafeNodeAlongPath(AIScriptedInterface *this)
{
  return ?FindSafeNodeAlongPath@AIScriptedInterface@@QEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
Path_RefChangeBadPlacesByFlags
==============
*/

void __fastcall Path_RefChangeBadPlacesByFlags(int badPlaceFlags, int delta)
{
  ?Path_RefChangeBadPlacesByFlags@@YAXHH@Z(badPlaceFlags, delta);
}

/*
==============
AICommonInterface::BadPlaceExists
==============
*/

int __fastcall AICommonInterface::BadPlaceExists(AICommonInterface *this, int badPlaceType, unsigned __int8 badPlaceFlags)
{
  return ?BadPlaceExists@AICommonInterface@@QEBAHHE@Z(this, badPlaceType, badPlaceFlags);
}

/*
==============
AI_BadPlace_GetMaximumFleeRadius
==============
*/
float AI_BadPlace_GetMaximumFleeRadius()
{
  unsigned __int8 *p_type; 
  float v1; 
  __int64 v2; 
  unsigned __int8 v3; 
  __int64 v5; 

  p_type = &g_badplaces[0].type;
  v1 = FLOAT_N1_0;
  v2 = 16i64;
  do
  {
    v3 = *p_type;
    if ( *p_type )
    {
      if ( v3 == 1 )
      {
        v1 = FLOAT_2000_0;
      }
      else
      {
        LODWORD(v5) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 554, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v5) )
          __debugbreak();
      }
    }
    p_type += 48;
    --v2;
  }
  while ( v2 );
  return v1;
}

/*
==============
AI_BadPlace_UpdateFleeingSentients
==============
*/
sentient_s *AI_BadPlace_UpdateFleeingSentients()
{
  bitarray<224> *AllTeamFlags; 
  sentient_s *result; 
  sentient_s *i; 
  ai_common_t *ai; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v5; 
  bitarray<224> iTeamFlags; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
  iTeamFlags = *AllTeamFlags;
  result = Sentient_FirstSentient(&iTeamFlags);
  for ( i = result; result; i = result )
  {
    if ( !i->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 517, ASSERT_TYPE_ASSERT, "(sentient->ent)", (const char *)&queryFormat, "sentient->ent") )
      __debugbreak();
    ai = i->ai;
    if ( ai && ai->navigation.isInBadPlace && i->ent->health > 0 )
    {
      AIActorInterface::AIActorInterface(&v5.m_actorInterface);
      AIAgentInterface::AIAgentInterface(&v5.m_newAgentInterface);
      v5.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      AICommonInterface::AICommonInterface(&v5.m_botInterface);
      v5.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
      AICommonInterface::AICommonInterface(&v5.m_botAgentInterface);
      v5.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
      v5.m_pAI = NULL;
      AICommonWrapper::Setup(&v5, ai->ent);
      m_pAI = v5.m_pAI;
      if ( !v5.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 521, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      if ( !AICommonInterface::IsInBadplace(m_pAI) )
      {
        if ( !m_pAI->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 499, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
          __debugbreak();
        m_pAI->m_pAI->navigation.isInBadPlace = 0;
      }
    }
    result = Sentient_NextSentient(i, &iTeamFlags);
  }
  return result;
}

/*
==============
AICommonInterface::BadPlaceApplies
==============
*/
_BOOL8 AICommonInterface::BadPlaceApplies(AICommonInterface *this, const badplace_t *badPlace)
{
  int flags; 
  const pathnode_t *v5; 

  if ( !badPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 412, ASSERT_TYPE_ASSERT, "( badPlace )", (const char *)&queryFormat, "badPlace") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 413, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 414, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 1i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 419, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  if ( SV_BotIsBotEnt(this->m_pAI->sentient->ent) && !SV_BadPlaceExistsToBot(this->m_pAI, badPlace->type) )
    return 0i64;
  flags = badPlace->flags;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 433, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 434, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  return !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || (v5 = Sentient_NearestNode(this->m_pAI->sentient)) == NULL || Path_BadPlaceAppliesViaFlags(flags, v5);
}

/*
==============
AICommonInterface::BadPlaceAppliesViaFlags
==============
*/
int AICommonInterface::BadPlaceAppliesViaFlags(AICommonInterface *this, int badPlaceFlags)
{
  const pathnode_t *v4; 
  int result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 433, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 434, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 1;
  v4 = Sentient_NearestNode(this->m_pAI->sentient);
  if ( !v4 )
    return 1;
  result = Path_BadPlaceAppliesViaFlags(badPlaceFlags, v4);
  if ( result )
    return 1;
  return result;
}

/*
==============
AICommonInterface::BadPlaceExists
==============
*/
__int64 AICommonInterface::BadPlaceExists(AICommonInterface *this, int badPlaceType, unsigned __int8 badPlaceFlags)
{
  unsigned __int8 *p_type; 
  int i; 
  unsigned __int64 eTeam; 
  __int64 v10; 
  __int64 v11; 

  p_type = &g_badplaces[0].type;
  for ( i = 0; ; ++i )
  {
    if ( *p_type == badPlaceType )
    {
      eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v11) = 224;
        LODWORD(v10) = this->m_pAI->sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & *(_DWORD *)&p_type[4 * (eTeam >> 5) + 4]) != 0 && (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || !SV_BotIsBotEnt(this->m_pAI->sentient->ent) || SV_BadPlaceExistsToBot(this->m_pAI, *p_type)) )
        break;
    }
    p_type += 48;
    if ( (__int64)p_type >= (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_613.v.m128_i64[1] + 4 )
      return 0i64;
  }
  if ( badPlaceFlags )
    return (unsigned __int8)(badPlaceFlags & g_badplaces[i].flags);
  else
    return 1i64;
}

/*
==============
AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace
==============
*/
__int64 AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace(AICommonInterface *this, pathsort_s *potentialNodes, float maxFleeDist)
{
  signed __int64 v3; 
  void *v4; 
  char *Value; 
  unsigned int *v8; 
  unsigned int v9; 
  _QWORD *v10; 
  char *v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  ThreadContext CurrentThreadContext; 
  int v15; 
  ai_common_t *m_pAI; 
  sentient_s *sentient; 
  unsigned __int64 eTeam; 
  int v19; 
  gentity_s *ent; 
  int v21; 
  pathsort_s *p_nodes; 
  __int64 v23; 
  pathsort_s *v24; 
  double v25; 
  __int128 v26; 
  pathnode_t *node; 
  __int64 v28; 
  pathsort_s *v29; 
  gentity_s *v30; 
  float v31; 
  __int64 maxNodes; 
  __int64 typeFlags; 
  int typeFlagsa; 
  int clipmask; 
  __int64 v37; 
  bitarray<224> v38; 
  __int128 v39; 
  double v40; 
  unsigned int v41; 
  vec3_t v42; 
  vec3_t pos; 
  pathsort_s nodes; 

  v4 = alloca(v3);
  Value = (char *)Sys_GetValue(0);
  v8 = (unsigned int *)(Value + 21536);
  if ( (unsigned int)(*((_DWORD *)Value + 5384) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 5384) + 1, 3) )
    __debugbreak();
  v9 = *v8 + 1;
  *v8 = v9;
  if ( v9 >= 3 )
  {
    LODWORD(typeFlags) = 3;
    LODWORD(maxNodes) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", maxNodes, typeFlags) )
      __debugbreak();
  }
  v10 = Value + 2088;
  v11 = Value + 40;
  if ( *v10 < (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v10 += 8i64;
  if ( *v10 >= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v10 = v8;
  if ( *v10 <= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v12 = (int)*v8;
  v13 = __rdtsc();
  v8[v12 + 2] = v13;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v15 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 486, NULL, 0);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 706, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 707, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 708, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !potentialNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 709, ASSERT_TYPE_ASSERT, "( potentialNodes )", (const char *)&queryFormat, "potentialNodes") )
    __debugbreak();
  if ( maxFleeDist <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 710, ASSERT_TYPE_ASSERT, "( maxFleeDist > 0.0f )", (const char *)&queryFormat, "maxFleeDist > 0.0f") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v39 = 0ui64;
  v40 = 0.0;
  sentient = m_pAI->sentient;
  v41 = 0;
  eTeam = (unsigned int)sentient->eTeam;
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  v19 = 0;
  *((_DWORD *)&v39 + (eTeam >> 5)) |= 0x80000000 >> (eTeam & 0x1F);
  ent = this->m_pAI->ent;
  clipmask = ent->clipmask;
  v21 = Path_NodesInCylinder(&ent->r.currentOrigin, NULL, maxFleeDist, 80.0, &nodes, 256, -2);
  v37 = v21;
  if ( v21 > 0 )
  {
    p_nodes = &nodes;
    v23 = 0i64;
    v24 = potentialNodes;
    v25 = v40;
    v26 = v39;
    do
    {
      node = p_nodes->node;
      if ( !p_nodes->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 591, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        if ( !Path_UsePathExtraData() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 597, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
          __debugbreak();
        if ( !Path_IsExposedSky(node) )
          v15 = 1;
      }
      pathnode_t::GetPos(node, &pos);
      typeFlagsa = v15;
      v38.array[6] = v41;
      v15 = 0;
      *(_OWORD *)v38.array = v26;
      *(double *)&v38.array[4] = v25;
      if ( !AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(this, &pos, node, clipmask, &v38, 0, typeFlagsa) && Path_CanClaimNode(node, this->m_pAI->sentient) && (((1 << LOBYTE(node->constant.type)) & 0x82641EFC) == 0 || this->Cover_IsValidCover(this, node, 0)) )
      {
        if ( !potentialNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 571, ASSERT_TYPE_ASSERT, "(potentialNodes)", (const char *)&queryFormat, "potentialNodes") )
          __debugbreak();
        v28 = 0i64;
        if ( v23 <= 0 )
        {
LABEL_59:
          pathnode_t::GetPos(node, &v42);
          v30 = this->m_pAI->ent;
          v31 = (float)((float)((float)(v42.v[1] - v30->r.currentOrigin.v[1]) * (float)(v42.v[1] - v30->r.currentOrigin.v[1])) + (float)((float)(v42.v[0] - v30->r.currentOrigin.v[0]) * (float)(v42.v[0] - v30->r.currentOrigin.v[0]))) + (float)((float)(v42.v[2] - v30->r.currentOrigin.v[2]) * (float)(v42.v[2] - v30->r.currentOrigin.v[2]));
          if ( ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) != 0 )
            v31 = (float)((float)((float)((float)(v42.v[1] - v30->r.currentOrigin.v[1]) * (float)(v42.v[1] - v30->r.currentOrigin.v[1])) + (float)((float)(v42.v[0] - v30->r.currentOrigin.v[0]) * (float)(v42.v[0] - v30->r.currentOrigin.v[0]))) + (float)((float)(v42.v[2] - v30->r.currentOrigin.v[2]) * (float)(v42.v[2] - v30->r.currentOrigin.v[2]))) * 0.89999998;
          ++v19;
          v24->node = node;
          ++v23;
          v24->metric = v31;
          ++v24;
        }
        else
        {
          v29 = potentialNodes;
          while ( v29->node != node )
          {
            ++v28;
            ++v29;
            if ( v28 >= v23 )
              goto LABEL_59;
          }
        }
      }
      ++p_nodes;
      --v37;
    }
    while ( v37 );
    if ( v19 > 1 )
      std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(potentialNodes, &potentialNodes[v19], v19, Path_CompareNodesIncreasing);
  }
  Profile_EndInternal(NULL);
  return (unsigned int)v19;
}

/*
==============
AICommonInterface::BadPlace_IsNodeInAnyBadPlace
==============
*/
bool AICommonInterface::BadPlace_IsNodeInAnyBadPlace(AICommonInterface *this, const pathnode_t *node, int traceMask, bitarray<224> *teamFlags)
{
  int v8; 
  __int128 v9; 
  double v10; 
  bitarray<224> v12; 
  vec3_t pos; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 591, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v8 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    if ( !Path_UsePathExtraData() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 597, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
      __debugbreak();
    if ( !Path_IsExposedSky(node) )
      v8 = 1;
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  v9 = *(_OWORD *)teamFlags->array;
  v10 = *(double *)&teamFlags->array[4];
  v12.array[6] = teamFlags->array[6];
  *(_OWORD *)v12.array = v9;
  *(double *)&v12.array[4] = v10;
  return AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(this, &pos, node, traceMask, &v12, 0, v8);
}

/*
==============
AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace
==============
*/
char AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(AICommonInterface *this, const vec3_t *nodeOrigin, const pathnode_t *node, int traceMask, bitarray<224> *teamFlags, int requireFlags, int excludeFlags)
{
  pathnode_t *v7; 
  int v10; 
  unsigned int v11; 
  __int128 v12; 
  const bitarray<224> *AllCombatTeamFlags; 
  int v14; 
  __int64 v15; 
  unsigned __int8 *p_type; 
  unsigned int v17; 
  unsigned int *v18; 
  unsigned int v19; 
  __int128 *v20; 
  __int64 v22; 
  unsigned int v23; 
  __int128 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  __int128 v30; 
  __int64 v31; 
  unsigned int v32; 

  v7 = (pathnode_t *)node;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 609, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 610, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 611, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, v7) )
    return 1;
  v10 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(nodeOrigin, v10, 2047, 2047) )
    return 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 626, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
      __debugbreak();
    v11 = teamFlags->array[6];
    v30 = *(_OWORD *)teamFlags->array;
    v26 = *(_QWORD *)&teamFlags->array[4];
    v31 = v26;
    v23 = v11;
    v12 = v30;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && (v30 & 0x8000000) != 0 )
    {
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
      *(_QWORD *)((char *)&v30 + 4) &= *(_QWORD *)&AllCombatTeamFlags->array[1];
      HIDWORD(v30) &= AllCombatTeamFlags->array[3];
      v31 &= *(_QWORD *)&AllCombatTeamFlags->array[4];
      v14 = AllCombatTeamFlags->array[6] & v11;
      v15 = v31;
      LODWORD(v30) = AllCombatTeamFlags->array[0] & (v30 | 0x10000000);
      v12 = v30;
      v23 = v14;
    }
    else
    {
      v15 = v26;
    }
    v30 = v12;
    v31 = v15;
    v27 = HIDWORD(v31);
    v25 = v31;
    v24 = v12;
  }
  else
  {
    v24 = 0ui64;
    v7 = NULL;
    v25 = 0;
    v27 = 0;
    v23 = 0;
  }
  p_type = &g_badplaces[0].type;
  v17 = 0;
  v18 = &g_badplaces[0].teamflags.array[2];
  do
  {
    if ( *p_type )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
        goto LABEL_33;
      v30 = v24 & *(_OWORD *)(v18 - 2);
      LODWORD(v31) = v25 & v18[2];
      HIDWORD(v31) = v27 & v18[3];
      v32 = v23 & v18[4];
      v19 = 0;
      v20 = &v30;
      while ( !*(_DWORD *)v20 )
      {
        ++v19;
        v20 = (__int128 *)((char *)v20 + 4);
        if ( v19 >= 7 )
          goto LABEL_53;
      }
      if ( (!requireFlags || (unsigned __int8)(requireFlags & p_type[32]) == requireFlags) && (!excludeFlags || ((unsigned __int8)excludeFlags & p_type[32]) == 0) )
      {
LABEL_33:
        if ( *p_type == 1 )
        {
          if ( !v7 )
            v7 = Path_NearestNode(nodeOrigin, traceMask, NULL);
          if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
            goto LABEL_58;
          if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 665, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
            __debugbreak();
          if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 666, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
            __debugbreak();
          if ( !SV_BotIsBotEnt(this->m_pAI->ent) || SV_BadPlaceExistsToBot(this->m_pAI, *p_type) )
          {
LABEL_58:
            if ( v7 )
            {
              if ( p_type == (unsigned __int8 *)12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 384, ASSERT_TYPE_ASSERT, "( badPlace )", (const char *)&queryFormat, "badPlace") )
                __debugbreak();
              if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || Path_BadPlaceAppliesViaFlags(p_type[32], v7) )
                return 1;
            }
          }
        }
        else
        {
          LODWORD(v22) = *p_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 680, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v22) )
            __debugbreak();
        }
      }
    }
LABEL_53:
    ++v17;
    v18 += 12;
    p_type += 48;
  }
  while ( v17 < 0x10 );
  return 0;
}

/*
==============
AICommonInterface::BadPlace_StartEscape
==============
*/
void AICommonInterface::BadPlace_StartEscape(AICommonInterface *this, pathnode_t *safeNode)
{
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 799, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  this->ClearKeepClaimedNode(this);
  if ( Path_CanClaimNode(safeNode, this->m_pAI->sentient) )
    Sentient_ClaimNode(this->m_pAI->sentient, safeNode);
  GScr_Notify(this->m_pAI->ent, scr_const.goal_changed, 0);
  this->SetCommitToFixedNode(this, 0);
}

/*
==============
AICommonInterface::Badplace_Ping
==============
*/
void AICommonInterface::Badplace_Ping(AICommonInterface *this)
{
  ai_common_t *m_pAI; 
  double v3; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 372, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = G_random();
  if ( *(float *)&v3 <= m_pAI->navigation.badPlaceAwareness )
  {
    if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 488, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->navigation.isInBadPlace = 1;
  }
}

/*
==============
AIScriptedInterface::FindSafeNodeAlongPath
==============
*/
pathnode_t *AIScriptedInterface::FindSafeNodeAlongPath(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 764, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 765, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 766, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !AICommonInterface::HasPath(this) )
    AIScriptedInterface::FindPathToGoal(this);
  if ( !AICommonInterface::HasPath(this) && !AIScriptedInterface::PathPending(this) )
    return 0i64;
  m_pAI = this->m_pAI;
  if ( !m_pAI->sentient->pClaimedNode )
    return 0i64;
  if ( !m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 783, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( this->m_pAI->pNavigator->IsNodeUsable(this->m_pAI->pNavigator, this->m_pAI->sentient->pClaimedNode) )
    return this->m_pAI->sentient->pClaimedNode;
  else
    return 0i64;
}

/*
==============
AICommonInterface::FindSafePosOutsideBadplace
==============
*/
__int64 AICommonInterface::FindSafePosOutsideBadplace(AICommonInterface *this, float safeDist, vec3_t *outPos)
{
  unsigned int Layer; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v8; 
  const bfx::AreaHandle *CurArea; 
  unsigned __int8 v10; 
  ai_common_t *m_pAI; 
  gentity_s *ent; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v18; 
  float v21; 
  float v22; 
  nav_repulsor_s *FirstRepulsor; 
  ai_common_t *v24; 
  gentity_s *v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  __int128 v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  bfx::AreaHandle areaA; 
  bfx::AreaHandle areaB; 
  __int64 v42; 
  vec3_t startPos; 
  vec3_t endPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  bfx::PathSpec pathSpec; 
  nav_probe_results_s pOutResults; 

  v42 = -2i64;
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  pPathSpec.m_pathSharingPenalty = 0.0;
  pPathSpec.m_maxPathSharingPenalty = 0.0;
  pPathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  Layer = Nav_GetLayer(this->m_pAI->pNavigator);
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 875, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pSpace = this->m_pAI->pNavigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 877, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v8 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 881, ASSERT_TYPE_ASSERT, "(pNav2D)", "%s\n\tAI_FindSafePosOutsideBadplace called on a 3d AI.  This only supports 2d AI.", "pNav2D") )
    __debugbreak();
  pPathSpec = *AINavigator2D::GetPathSpec(v8);
  bfx::AreaHandle::AreaHandle(&areaB);
  Nav_GetSpaceUp(m_pSpace, &outUp);
  if ( this->m_pAI->pNavigator->IsInBadPlace(this->m_pAI->pNavigator) )
  {
    if ( !Nav_GetClosestVerticalPos(&this->m_pAI->ent->r.currentOrigin, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, &startPos, &areaB) )
    {
LABEL_15:
      v10 = 0;
      goto LABEL_16;
    }
    pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
    pathSpec.m_usePathSharingPenalty = 0;
    pathSpec.m_pathSharingPenalty = 0.0;
    pathSpec.m_maxPathSharingPenalty = 0.0;
    pathSpec.m_maxSearchDist = 0.0;
    bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
    pathSpec.m_snapMode = SNAP_CLOSEST;
    pathSpec.m_obstacleBlockageFlags = 1;
    CurArea = AINavigator2D::GetCurArea(v8);
    bfx::AreaHandle::AreaHandle(&areaA, CurArea);
    if ( (bfx::AreaHandle::GetObstacleBlockageFlags(&areaA) & 1) == 0 && !bfx::IsAreaReachableFromArea(&areaA, &areaB, &pathSpec) )
    {
      bfx::AreaHandle::~AreaHandle(&areaA);
      goto LABEL_15;
    }
    bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    v14 = m_pAI->ent->r.currentOrigin.v[0];
    v18 = LODWORD(startPos.v[1]);
    v15 = startPos.v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v16 = startPos.v[2] - m_pAI->ent->r.currentOrigin.v[2];
    *(float *)&v18 = fsqrt((float)((float)(v15 * v15) + (float)((float)(startPos.v[0] - v14) * (float)(startPos.v[0] - v14))) + (float)(v16 * v16));
    _XMM3 = v18;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm0
    }
    v21 = 1.0 / *(float *)&_XMM1;
    v22 = (float)(startPos.v[0] - v14) * (float)(1.0 / *(float *)&_XMM1);
    if ( *(float *)&v18 >= 0.001 )
    {
      endPos.v[0] = (float)((float)(*(float *)&v18 + safeDist) * v22) + v14;
      endPos.v[1] = (float)((float)(v15 * v21) * (float)(*(float *)&v18 + safeDist)) + ent->r.currentOrigin.v[1];
      endPos.v[2] = (float)((float)(*(float *)&v18 + safeDist) * (float)(v16 * v21)) + ent->r.currentOrigin.v[2];
      Nav_Trace(&startPos, &areaB, &endPos, &pPathSpec, &pOutResults);
      outPos->v[0] = pOutResults.m_EndPos.v[0];
      outPos->v[1] = pOutResults.m_EndPos.v[1];
      outPos->v[2] = pOutResults.m_EndPos.v[2];
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
    bfx::AreaHandle::~AreaHandle(&areaA);
  }
  else
  {
    FirstRepulsor = Nav_GetFirstRepulsor();
    if ( !FirstRepulsor )
      goto LABEL_15;
    while ( 1 )
    {
      if ( FirstRepulsor->bBadplace )
      {
        v24 = this->m_pAI;
        v25 = v24->ent;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(FirstRepulsor->origin.v[2] - v24->ent->r.currentOrigin.v[2]) & _xmm) <= 80.0 )
        {
          v26 = v25->r.currentOrigin.v[0] - FirstRepulsor->origin.v[0];
          v27 = v25->r.currentOrigin.v[1] - FirstRepulsor->origin.v[1];
          if ( (float)((float)(v27 * v27) + (float)(v26 * v26)) < (float)(FirstRepulsor->radius * FirstRepulsor->radius) )
            break;
        }
      }
      FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
      if ( !FirstRepulsor )
        goto LABEL_15;
    }
    v8->GetCurPos(v8, &startPos);
    v28 = startPos.v[0];
    v30 = LODWORD(startPos.v[0]);
    *(float *)&v30 = startPos.v[0] - FirstRepulsor->origin.v[0];
    v29 = v30;
    v31 = startPos.v[1];
    v32 = startPos.v[1] - FirstRepulsor->origin.v[1];
    v33 = startPos.v[2];
    v34 = startPos.v[2] - FirstRepulsor->origin.v[2];
    if ( *(float *)&v30 == 0.0 && v32 == 0.0 )
    {
      v35 = LODWORD(FLOAT_N1_0);
      *(double *)&v35 = G_flrand(-1.0, 1.0);
      v29 = v35;
      v32 = 1.0 - COERCE_FLOAT(v35 & _xmm);
      if ( !G_irand(0, 1) )
        LODWORD(v32) = COERCE_UNSIGNED_INT(1.0 - COERCE_FLOAT(v35 & _xmm)) ^ _xmm;
      v34 = 0.0;
      v33 = startPos.v[2];
      v31 = startPos.v[1];
      v28 = startPos.v[0];
    }
    v36 = v29;
    *(float *)&v36 = fsqrt((float)((float)(*(float *)&v29 * *(float *)&v29) + (float)(v32 * v32)) + (float)(v34 * v34));
    _XMM3 = v36;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm12, xmm0
    }
    *(float *)&_XMM3 = (float)(FirstRepulsor->radius - *(float *)&v36) + safeDist;
    endPos.v[0] = (float)((float)(*(float *)&v29 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM3) + v28;
    endPos.v[1] = (float)((float)(v32 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM3) + v31;
    endPos.v[2] = (float)((float)(v34 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM3) + v33;
    Nav_GetClosestVerticalPos(&endPos, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, outPos, NULL);
    v10 = 1;
  }
LABEL_16:
  bfx::AreaHandle::~AreaHandle(&areaB);
  return v10;
}

/*
==============
AICommonInterface::IsInAnyBadPlace
==============
*/

bool __fastcall AICommonInterface::IsInAnyBadPlace(AICommonInterface *this)
{
  return AICommonInterface::IsInBadplace(this);
}

/*
==============
AICommonInterface::IsInBadplace
==============
*/
char AICommonInterface::IsInBadplace(AICommonInterface *this)
{
  bool v2; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  double v9; 
  double v10; 
  int v12; 
  float v13; 
  vec3_t outUp; 
  vec3_t pos; 
  vec3_t pt1; 
  vec3_t pt2; 
  bitarray<224> result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 817, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 818, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 819, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v2 = this->m_pAI->pNavigator->IsInBadPlace(this->m_pAI->pNavigator);
  sentient = this->m_pAI->sentient;
  if ( v2 )
  {
    pClaimedNode = sentient->pClaimedNode;
    if ( !pClaimedNode )
      return 1;
    pathnode_t::GetPos(pClaimedNode, &pos);
    this->m_pAI->pNavigator->GetUsableCurPos(this->m_pAI->pNavigator, &pt2);
    this->m_pAI->pNavigator->GetCurPos(this->m_pAI->pNavigator, &pt1);
    AINavigator::GetUpVector(this->m_pAI->pNavigator, &outUp);
    _XMM0 = this->GetFixedNode(this);
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_256_0);
    __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
    v13 = *(float *)&_XMM0;
    if ( !this->m_pAI->pNavigator->IsNodeUsable(this->m_pAI->pNavigator, this->m_pAI->sentient->pClaimedNode) || (v9 = Nav_Get2DDistanceSqWithUp(&pt1, &pos, &outUp), *(float *)&v9 >= 1024.0) )
    {
      v10 = Nav_Get2DDistanceSqWithUp(&pos, &pt2, &outUp);
      if ( *(float *)&v10 >= v13 )
        return 1;
    }
  }
  else
  {
    Com_Teams_GetTeamFlag(&result, sentient->eTeam);
    v12 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&result);
    if ( !AICommonInterface::Use3DPathing(this) && Nav_IsPointInRepulsorBadplace(&this->m_pAI->ent->r.currentOrigin, v12, this->m_pAI->ent->s.number, 2047) )
      return 1;
  }
  return 0;
}

/*
==============
AICommonInterface::IsInGlobalBadplace
==============
*/
__int64 AICommonInterface::IsInGlobalBadplace(AICommonInterface *this, unsigned __int8 badPlaceFlags)
{
  __int64 v4; 
  unsigned __int8 *i; 
  unsigned __int64 eTeam; 
  __int64 v8; 
  __int64 v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 455, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 456, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v4 = 0i64;
  for ( i = &g_badplaces[0].type; ; i += 48 )
  {
    if ( *i && (!badPlaceFlags || (badPlaceFlags & i[32]) != 0) )
    {
      eTeam = (unsigned int)this->m_pAI->sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v9) = 224;
        LODWORD(v8) = this->m_pAI->sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & *(_DWORD *)&i[4 * (eTeam >> 5) + 4]) != 0 && *i == 1 && AICommonInterface::BadPlaceApplies(this, &g_badplaces[v4]) )
        break;
    }
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x10 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
AICommonInterface::MarkInBadPlace
==============
*/
void AICommonInterface::MarkInBadPlace(AICommonInterface *this)
{
  if ( this->m_pAI )
  {
    this->m_pAI->navigation.isInBadPlace = 1;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 488, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->navigation.isInBadPlace = 1;
  }
}

/*
==============
AICommonInterface::MarkNotInBadPlace
==============
*/
void AICommonInterface::MarkNotInBadPlace(AICommonInterface *this)
{
  if ( this->m_pAI )
  {
    this->m_pAI->navigation.isInBadPlace = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 499, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    this->m_pAI->navigation.isInBadPlace = 0;
  }
}

/*
==============
Path_BadPlaceAppliesViaFlags
==============
*/
_BOOL8 Path_BadPlaceAppliesViaFlags(int badPlaceFlags, const pathnode_t *node)
{
  char v3; 

  v3 = badPlaceFlags;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 397, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 1i64;
  if ( !Path_UsePathExtraData() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 402, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
    __debugbreak();
  return (v3 & 1) == 0 || Path_IsExposedSky(node);
}

/*
==============
Path_InitBadPlaces
==============
*/
void Path_InitBadPlaces(void)
{
  memset_0(g_badplaces, 0, sizeof(g_badplaces));
}

/*
==============
Path_MakeBadPlace
==============
*/
__int64 Path_MakeBadPlace(scr_string_t name, int duration, bitarray<224> *teamflags, int flags, int type)
{
  __int128 v5; 
  double v6; 
  unsigned int v7; 
  char v9; 
  const bitarray<224> *AllCombatTeamFlags; 
  int v13; 
  const bitarray<224> *AllTeamFlags; 
  __int128 v15; 
  double v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int128 *v21; 
  int v22; 
  scr_string_t *p_name; 
  __int64 v24; 
  int v26; 
  unsigned __int8 *p_type; 
  unsigned int v28; 
  badplace_t *v29; 
  __int64 v30; 
  unsigned __int8 v31; 
  __int128 v32; 
  double v33; 
  int v34; 

  v5 = *(_OWORD *)teamflags->array;
  v6 = *(double *)&teamflags->array[4];
  v7 = teamflags->array[6];
  v31 = flags;
  v32 = *(_OWORD *)teamflags->array;
  v33 = v6;
  v9 = flags;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && (v5 & 0x8000000) != 0 )
  {
    AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    *(_QWORD *)((char *)&v32 + 4) &= *(_QWORD *)&AllCombatTeamFlags->array[1];
    HIDWORD(v32) &= AllCombatTeamFlags->array[3];
    v13 = AllCombatTeamFlags->array[0] & (v5 | 0x10000000);
    *(_QWORD *)&v33 &= *(_QWORD *)&AllCombatTeamFlags->array[4];
    v7 &= AllCombatTeamFlags->array[6];
    v6 = v33;
    LODWORD(v32) = v13;
    v5 = v32;
  }
  *(_OWORD *)teamflags->array = v5;
  *(double *)&teamflags->array[4] = v6;
  teamflags->array[6] = v7;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v15 = *(_OWORD *)AllTeamFlags->array;
  v16 = *(double *)&AllTeamFlags->array[4];
  v17 = AllTeamFlags->array[6];
  v32 = v15;
  v33 = v16;
  LODWORD(v32) = teamflags->array[0] & ~(_DWORD)v15;
  DWORD1(v32) = ~DWORD1(v15) & teamflags->array[1];
  DWORD2(v32) = ~DWORD2(v15) & teamflags->array[2];
  HIDWORD(v32) = ~HIDWORD(v15) & teamflags->array[3];
  *(_QWORD *)&v33 = ~*(_QWORD *)&v16 & *(_QWORD *)&teamflags->array[4];
  v18 = ~v17 & v7;
  v19 = 0;
  v34 = v18;
  v20 = 0;
  v21 = &v32;
  while ( !*(_DWORD *)v21 )
  {
    ++v20;
    v21 = (__int128 *)((char *)v21 + 4);
    if ( v20 >= 7 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 249, ASSERT_TYPE_ASSERT, "(Com_Teams_IsValidTeamFlag( teamflags ))", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( teamflags )") )
    __debugbreak();
LABEL_13:
  if ( type != (unsigned __int8)type )
  {
    LODWORD(v30) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 250, ASSERT_TYPE_ASSERT, "( ( type == (byte) type ) )", "( type ) = %i", v30) )
      __debugbreak();
  }
  if ( type == 1 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 255, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 256, ASSERT_TYPE_ASSERT, "( G_Bot_UseBadPlaceRestrictions() )", (const char *)&queryFormat, "G_Bot_UseBadPlaceRestrictions()") )
      __debugbreak();
    if ( !Path_UsePathExtraData() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 257, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
      __debugbreak();
    if ( (v9 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 258, ASSERT_TYPE_ASSERT, "((flags & ( 1 << 0 ) ) != 0)", "%s\n\tGlobal Badplace needs limiting type (like only_sky, etc)", "(flags & BPF_ONLY_SKY ) != 0") )
      __debugbreak();
  }
  if ( name )
  {
    v22 = 0;
    p_name = &g_badplaces[0].name;
    while ( *p_name != name )
    {
      ++v22;
      p_name += 12;
      if ( (__int64)p_name >= (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_613.v.m128_i64[1] )
        goto LABEL_36;
    }
    if ( v22 >= 0 )
    {
      v24 = v22;
      Path_UpdateBadPlaceCount(&g_badplaces[v22], -1);
      g_badplaces[v24].type = 0;
      Scr_SetString(&g_badplaces[v24].name, (scr_string_t)0);
    }
  }
LABEL_36:
  if ( duration > 0 )
  {
    if ( duration < 250 )
      Com_PrintWarning(18, "WARNING: A badplace was created with duration [%.2f second], which is less than the ping time [%.2f second]\n", (float)((float)duration * 0.001), DOUBLE_0_25);
    v26 = duration + level.time;
  }
  else
  {
    if ( !name )
    {
      Com_PrintError(18, "Anonymous bad places must have a duration.\n");
      return 0i64;
    }
    v26 = 0x7FFFFFFF;
  }
  p_type = &g_badplaces[0].type;
  while ( *p_type )
  {
    ++v19;
    p_type += 48;
    if ( (__int64)p_type >= (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_613.v.m128_i64[1] + 4 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
        Com_PrintError(18, "Too many bad places (more than %i)\n", 16i64);
      return 0i64;
    }
  }
  Scr_SetString(&g_badplaces[v19].name, name);
  g_badplaces[v19].endtime = v26;
  if ( v19 >= 0x10 )
  {
    LODWORD(v30) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( badPlaceIndex ) < (unsigned)( 16 )", "badPlaceIndex doesn't index MAX_BADPLACES\n\t%i not in [0, %i)", v30, 16) )
      __debugbreak();
  }
  v28 = teamflags->array[6];
  v29 = &g_badplaces[v19];
  *(_OWORD *)v29->teamflags.array = v5;
  *(double *)&v29->teamflags.array[4] = v6;
  v29->teamflags.array[6] = v28;
  v29->flags = v31;
  v29->pingTime = level.time;
  v29->type = type;
  Path_UpdateBadPlaceCount(v29, 1);
  return 1i64;
}

/*
==============
Path_MakeGlobalBadPlace
==============
*/
__int64 Path_MakeGlobalBadPlace(scr_string_t name, int duration, bitarray<224> *teamflags, int flags)
{
  __int128 v8; 
  double v9; 
  bitarray<224> v11; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 283, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  v8 = *(_OWORD *)teamflags->array;
  v9 = *(double *)&teamflags->array[4];
  v11.array[6] = teamflags->array[6];
  *(_OWORD *)v11.array = v8;
  *(double *)&v11.array[4] = v9;
  return Path_MakeBadPlace(name, duration, &v11, flags, 1);
}

/*
==============
Path_RefChangeBadPlacesByFlags
==============
*/
void Path_RefChangeBadPlacesByFlags(int badPlaceFlags, int delta)
{
  unsigned __int8 *p_flags; 
  unsigned __int8 v4; 
  __int64 v5; 

  p_flags = &g_badplaces[0].flags;
  v4 = badPlaceFlags;
  do
  {
    if ( *(p_flags - 32) && (v4 & *p_flags) != 0 )
    {
      if ( ((delta + 1) & 0xFFFFFFFD) != 0 )
      {
        LODWORD(v5) = delta;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 62, ASSERT_TYPE_ASSERT, "( ( delta == -1 || delta == +1 ) )", "( delta ) = %i", v5) )
          __debugbreak();
      }
      if ( *(p_flags - 32) == 1 )
      {
        Path_UpdateGlobalBadPlaceCount((const bitarray<224> *)p_flags - 1, *p_flags, delta);
      }
      else
      {
        LODWORD(v5) = *(p_flags - 32);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 71, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v5) )
          __debugbreak();
      }
    }
    p_flags += 48;
  }
  while ( (__int64)p_flags < (__int64)&unk_14C8A4A4C );
}

/*
==============
Path_RemoveBadPlace
==============
*/
void Path_RemoveBadPlace(scr_string_t name)
{
  int v1; 
  scr_string_t *p_name; 
  __int64 v3; 

  v1 = 0;
  p_name = &g_badplaces[0].name;
  while ( *p_name != name )
  {
    ++v1;
    p_name += 12;
    if ( (__int64)p_name >= (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_613.v.m128_i64[1] )
      goto LABEL_4;
  }
  if ( v1 >= 0 )
  {
    v3 = v1;
    Path_UpdateBadPlaceCount(&g_badplaces[v1], -1);
    g_badplaces[v3].type = 0;
    Scr_SetString(&g_badplaces[v3].name, (scr_string_t)0);
  }
LABEL_4:
  AI_BadPlace_UpdateFleeingSentients();
}

/*
==============
Path_RemoveBadPlaceAtIndex
==============
*/
void Path_RemoveBadPlaceAtIndex(int index)
{
  __int64 v1; 

  if ( index >= 0 )
  {
    v1 = index;
    Path_UpdateBadPlaceCount(&g_badplaces[index], -1);
    g_badplaces[v1].type = 0;
    Scr_SetString(&g_badplaces[v1].name, (scr_string_t)0);
  }
  AI_BadPlace_UpdateFleeingSentients();
}

/*
==============
Path_RunBadPlaces
==============
*/
void Path_RunBadPlaces(void)
{
  int time; 
  unsigned __int8 *p_type; 
  char v2; 
  unsigned int i; 
  unsigned int v4; 
  __int128 v5; 
  int v6; 
  __int64 v7; 
  double v8; 
  __int128 v9; 
  __int128 v10; 
  bitarray<224> teamFlags; 

  if ( BG_AISystemEnabled() )
  {
    time = level.time;
    p_type = &g_badplaces[0].type;
    v2 = 0;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *p_type )
      {
        if ( time < *((_DWORD *)p_type - 3) )
        {
          if ( time - *((_DWORD *)p_type - 2) >= 250 )
          {
            v4 = *((_DWORD *)p_type + 7);
            v9 = *(_OWORD *)(p_type + 4);
            v10 = v9;
            v8 = *(double *)(p_type + 20);
            v5 = v9;
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && (v9 & 0x10000000) != 0 )
            {
              LODWORD(v10) = v9 | 0x8000000;
              v5 = v10;
            }
            v6 = *p_type;
            teamFlags.array[6] = v4;
            *(_OWORD *)teamFlags.array = v5;
            *(double *)&teamFlags.array[4] = v8;
            if ( v6 == 1 )
            {
              Actor_BroadcastGlobalEvent(NULL, AI_EV_BADPLACE_GLOBAL, &teamFlags, p_type[32]);
            }
            else
            {
              LODWORD(v7) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 351, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v7) )
                __debugbreak();
            }
            time = level.time;
            *((_DWORD *)p_type - 2) = level.time;
          }
        }
        else
        {
          Path_UpdateBadPlaceCount(&g_badplaces[i], -1);
          g_badplaces[i].type = 0;
          Scr_SetString(&g_badplaces[i].name, (scr_string_t)0);
          time = level.time;
          v2 = 1;
        }
      }
      p_type += 48;
    }
    if ( v2 )
      AI_BadPlace_UpdateFleeingSentients();
  }
}

/*
==============
Path_ShutdownBadPlaces
==============
*/
void Path_ShutdownBadPlaces(void)
{
  scr_string_t *p_name; 
  __int64 v1; 

  p_name = &g_badplaces[0].name;
  v1 = 16i64;
  do
  {
    Scr_SetString(p_name, (scr_string_t)0);
    p_name += 12;
    --v1;
  }
  while ( v1 );
  memset_0(g_badplaces, 0, sizeof(g_badplaces));
}

/*
==============
Path_UpdateBadPlaceCount
==============
*/
void Path_UpdateBadPlaceCount(badplace_t *place, int delta)
{
  __int64 v4; 

  if ( !place && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 61, ASSERT_TYPE_ASSERT, "(place)", (const char *)&queryFormat, "place") )
    __debugbreak();
  if ( ((delta + 1) & 0xFFFFFFFD) != 0 )
  {
    LODWORD(v4) = delta;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 62, ASSERT_TYPE_ASSERT, "( ( delta == -1 || delta == +1 ) )", "( delta ) = %i", v4) )
      __debugbreak();
  }
  if ( place->type == 1 )
  {
    Path_UpdateGlobalBadPlaceCount(&place->teamflags, place->flags, delta);
  }
  else
  {
    LODWORD(v4) = place->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 71, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v4) )
      __debugbreak();
  }
}

