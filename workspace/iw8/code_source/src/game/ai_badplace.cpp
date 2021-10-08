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
  __int64 v5; 
  unsigned __int8 v6; 
  __int64 v11; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  p_type = &g_badplaces[0].type;
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, cs:__real@44fa0000
  }
  v5 = 16i64;
  do
  {
    v6 = *p_type;
    if ( *p_type )
    {
      if ( v6 == 1 )
      {
        __asm { vmovaps xmm6, xmm7 }
      }
      else
      {
        LODWORD(v11) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 554, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v11) )
          __debugbreak();
      }
    }
    p_type += 48;
    --v5;
  }
  while ( v5 );
  __asm
  {
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
AI_BadPlace_UpdateFleeingSentients
==============
*/
sentient_s *AI_BadPlace_UpdateFleeingSentients()
{
  sentient_s *result; 
  sentient_s *i; 
  ai_common_t *ai; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v7; 
  bitarray<224> iTeamFlags; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+108h+iTeamFlags.array], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rsp+108h+iTeamFlags.array+10h], xmm1
  }
  iTeamFlags.array[6] = _RAX->array[6];
  result = Sentient_FirstSentient(&iTeamFlags);
  for ( i = result; result; i = result )
  {
    if ( !i->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 517, ASSERT_TYPE_ASSERT, "(sentient->ent)", (const char *)&queryFormat, "sentient->ent") )
      __debugbreak();
    ai = i->ai;
    if ( ai && ai->navigation.isInBadPlace && i->ent->health > 0 )
    {
      AIActorInterface::AIActorInterface(&v7.m_actorInterface);
      AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
      v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      AICommonInterface::AICommonInterface(&v7.m_botInterface);
      v7.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
      AICommonInterface::AICommonInterface(&v7.m_botAgentInterface);
      v7.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
      v7.m_pAI = NULL;
      AICommonWrapper::Setup(&v7, ai->ent);
      m_pAI = v7.m_pAI;
      if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 521, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
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

__int64 __fastcall AICommonInterface::BadPlace_FindSafeNodeOutsideBadPlace(AICommonInterface *this, pathsort_s *potentialNodes, double maxFleeDist)
{
  signed __int64 v3; 
  void *v9; 
  char *Value; 
  unsigned int *v14; 
  unsigned int v15; 
  _QWORD *v16; 
  char *v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  ThreadContext CurrentThreadContext; 
  int v21; 
  bool v22; 
  bool v23; 
  ai_common_t *m_pAI; 
  sentient_s *sentient; 
  unsigned __int64 eTeam; 
  int v29; 
  gentity_s *ent; 
  int v32; 
  pathsort_s *p_nodes; 
  __int64 v34; 
  pathnode_t *node; 
  __int64 v41; 
  pathsort_s *v42; 
  __int64 result; 
  __int64 maxNodes; 
  __int64 typeFlags; 
  int typeFlagsa; 
  int clipmask; 
  __int64 v63; 
  bitarray<224> v64; 
  __int128 v65; 
  __int64 v66; 
  unsigned int v67; 
  vec3_t v68; 
  vec3_t pos; 
  pathsort_s nodes; 

  v9 = alloca(v3);
  __asm
  {
    vmovaps [rsp+1148h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  Value = (char *)Sys_GetValue(0);
  v14 = (unsigned int *)(Value + 21536);
  if ( (unsigned int)(*((_DWORD *)Value + 5384) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 5384) + 1, 3) )
    __debugbreak();
  v15 = *v14 + 1;
  *v14 = v15;
  if ( v15 >= 3 )
  {
    LODWORD(typeFlags) = 3;
    LODWORD(maxNodes) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", maxNodes, typeFlags) )
      __debugbreak();
  }
  v16 = Value + 2088;
  v17 = Value + 40;
  if ( *v16 < (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v16 += 8i64;
  if ( *v16 >= (unsigned __int64)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v16 = v14;
  if ( *v16 <= (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v18 = (int)*v14;
  v19 = __rdtsc();
  v14[v18 + 2] = v19;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v21 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 486, NULL, 0);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 706, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 707, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 708, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  v22 = potentialNodes == NULL;
  if ( !potentialNodes )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 709, ASSERT_TYPE_ASSERT, "( potentialNodes )", (const char *)&queryFormat, "potentialNodes");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 710, ASSERT_TYPE_ASSERT, "( maxFleeDist > 0.0f )", (const char *)&queryFormat, "maxFleeDist > 0.0f") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v65 = 0ui64;
  v66 = 0i64;
  sentient = m_pAI->sentient;
  v67 = 0;
  eTeam = (unsigned int)sentient->eTeam;
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  __asm { vmovss  xmm3, cs:__real@42a00000; maxHeight }
  v29 = 0;
  *((_DWORD *)&v65 + (eTeam >> 5)) |= 0x80000000 >> (eTeam & 0x1F);
  __asm { vmovaps xmm2, xmm6; maxDist }
  ent = this->m_pAI->ent;
  clipmask = ent->clipmask;
  v32 = Path_NodesInCylinder(&ent->r.currentOrigin, NULL, *(float *)&_XMM2, *(float *)&_XMM3, &nodes, 256, -2);
  v63 = v32;
  if ( v32 > 0 )
  {
    p_nodes = &nodes;
    __asm { vmovaps [rsp+1148h+var_58], xmm7 }
    v34 = 0i64;
    __asm
    {
      vmovss  xmm7, cs:__real@3f666666
      vmovaps [rsp+1148h+var_68], xmm8
    }
    _R15 = potentialNodes;
    __asm
    {
      vmovsd  xmm8, [rsp+1148h+var_10B8]
      vmovaps [rsp+1148h+var_78], xmm9
      vmovups xmm9, [rsp+1148h+var_10C8]
    }
    do
    {
      node = p_nodes->node;
      __asm { vmovaps xmm6, xmm8 }
      if ( !p_nodes->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 591, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        if ( !Path_UsePathExtraData() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 597, ASSERT_TYPE_ASSERT, "( Path_UsePathExtraData() )", (const char *)&queryFormat, "Path_UsePathExtraData()") )
          __debugbreak();
        if ( !Path_IsExposedSky(node) )
          v21 = 1;
      }
      pathnode_t::GetPos(node, &pos);
      typeFlagsa = v21;
      v64.array[6] = v67;
      v21 = 0;
      __asm
      {
        vmovups [rsp+1148h+var_10E8], xmm9
        vmovsd  [rsp+1148h+var_10D8], xmm6
      }
      if ( !AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(this, &pos, node, clipmask, &v64, 0, typeFlagsa) && Path_CanClaimNode(node, this->m_pAI->sentient) && (((1 << LOBYTE(node->constant.type)) & 0x82641EFC) == 0 || this->Cover_IsValidCover(this, node, 0)) )
      {
        if ( !potentialNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 571, ASSERT_TYPE_ASSERT, "(potentialNodes)", (const char *)&queryFormat, "potentialNodes") )
          __debugbreak();
        v41 = 0i64;
        if ( v34 <= 0 )
        {
LABEL_59:
          pathnode_t::GetPos(node, &v68);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1148h+var_10A8]
            vmovss  xmm1, dword ptr [rsp+1148h+var_10A8+4]
            vsubss  xmm3, xmm0, dword ptr [rcx+130h]
            vsubss  xmm2, xmm1, dword ptr [rcx+134h]
            vmovss  xmm0, dword ptr [rsp+1148h+var_10A8+8]
            vsubss  xmm4, xmm0, dword ptr [rcx+138h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm5, xmm3, xmm0
          }
          if ( ((1 << LOBYTE(node->constant.type)) & 0x82641EFC) != 0 )
            __asm { vmulss  xmm5, xmm5, xmm7 }
          ++v29;
          _R15->node = node;
          ++v34;
          __asm { vmovss  dword ptr [r15+8], xmm5 }
          ++_R15;
        }
        else
        {
          v42 = potentialNodes;
          while ( v42->node != node )
          {
            ++v41;
            ++v42;
            if ( v41 >= v34 )
              goto LABEL_59;
          }
        }
      }
      ++p_nodes;
      --v63;
    }
    while ( v63 );
    __asm
    {
      vmovaps xmm9, [rsp+1148h+var_78]
      vmovaps xmm8, [rsp+1148h+var_68]
      vmovaps xmm7, [rsp+1148h+var_58]
    }
    if ( v29 > 1 )
      std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(potentialNodes, &potentialNodes[v29], v29, Path_CompareNodesIncreasing);
  }
  Profile_EndInternal(NULL);
  result = (unsigned int)v29;
  __asm { vmovaps xmm6, [rsp+1148h+var_48] }
  return result;
}

/*
==============
AICommonInterface::BadPlace_IsNodeInAnyBadPlace
==============
*/
bool AICommonInterface::BadPlace_IsNodeInAnyBadPlace(AICommonInterface *this, const pathnode_t *node, int traceMask, bitarray<224> *teamFlags)
{
  int v8; 
  bitarray<224> v12; 
  vec3_t pos; 

  _RSI = teamFlags;
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
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovsd  xmm1, qword ptr [rsi+10h]
  }
  v12.array[6] = _RSI->array[6];
  __asm
  {
    vmovups [rsp+0B8h+var_78], xmm0
    vmovsd  [rsp+0B8h+var_68], xmm1
  }
  return AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(this, &pos, node, traceMask, &v12, 0, v8);
}

/*
==============
AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace
==============
*/
char AICommonInterface::BadPlace_IsNodeOriginInAnyBadPlace(AICommonInterface *this, const vec3_t *nodeOrigin, const pathnode_t *node, int traceMask, bitarray<224> *teamFlags, int requireFlags, int excludeFlags)
{
  pathnode_t *v8; 
  int v11; 
  unsigned int v13; 
  const bitarray<224> *AllCombatTeamFlags; 
  int v18; 
  unsigned __int8 *p_type; 
  unsigned int v21; 
  unsigned int *v22; 
  unsigned int v23; 
  __int128 *v24; 
  __int64 v26; 
  unsigned int v27; 
  __int128 v28; 
  int v29; 
  int v31; 
  __int128 v35; 
  __int64 v36; 
  unsigned int v37; 

  _RBX = teamFlags;
  v8 = (pathnode_t *)node;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 609, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 610, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 611, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  if ( !this->m_pAI->pNavigator->IsNodeReachable(this->m_pAI->pNavigator, v8) )
    return 1;
  v11 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(teamFlags);
  if ( Nav_IsPointInRepulsorBadplace(nodeOrigin, v11, 2047, 2047) )
    return 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 626, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
      __debugbreak();
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    v13 = teamFlags->array[6];
    __asm
    {
      vmovups [rbp+3Fh+var_80], xmm0
      vmovups [rbp+3Fh+var_70], xmm0
      vmovsd  xmm0, qword ptr [rbx+10h]
      vmovsd  qword ptr [rbp+3Fh+var_A0], xmm0
      vmovsd  [rbp+3Fh+var_60], xmm0
    }
    v27 = v13;
    __asm { vmovups xmm0, [rbp+3Fh+var_80] }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      goto LABEL_19;
    __asm { vmovd   ebx, xmm0 }
    if ( (_EBX & 0x8000000) != 0 )
    {
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
      *(_QWORD *)((char *)&v35 + 4) &= *(_QWORD *)&AllCombatTeamFlags->array[1];
      HIDWORD(v35) &= AllCombatTeamFlags->array[3];
      v36 &= *(_QWORD *)&AllCombatTeamFlags->array[4];
      v18 = AllCombatTeamFlags->array[6] & v13;
      __asm { vmovsd  xmm1, [rbp+3Fh+var_60] }
      LODWORD(v35) = AllCombatTeamFlags->array[0] & (_EBX | 0x10000000);
      __asm { vmovups xmm0, [rbp+3Fh+var_70] }
      v27 = v18;
    }
    else
    {
LABEL_19:
      __asm { vmovsd  xmm1, qword ptr [rbp+3Fh+var_A0] }
    }
    __asm
    {
      vmovups [rbp+3Fh+var_70], xmm0
      vmovsd  [rbp+3Fh+var_60], xmm1
    }
    v31 = HIDWORD(v36);
    v29 = v36;
    v28 = v35;
  }
  else
  {
    v28 = 0ui64;
    v8 = NULL;
    v29 = 0;
    v31 = 0;
    v27 = 0;
  }
  p_type = &g_badplaces[0].type;
  v21 = 0;
  v22 = &g_badplaces[0].teamflags.array[2];
  do
  {
    if ( *p_type )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
        goto LABEL_33;
      v35 = v28 & *(_OWORD *)(v22 - 2);
      LODWORD(v36) = v29 & v22[2];
      HIDWORD(v36) = v31 & v22[3];
      v37 = v27 & v22[4];
      v23 = 0;
      v24 = &v35;
      while ( !*(_DWORD *)v24 )
      {
        ++v23;
        v24 = (__int128 *)((char *)v24 + 4);
        if ( v23 >= 7 )
          goto LABEL_53;
      }
      if ( (!requireFlags || (unsigned __int8)(requireFlags & p_type[32]) == requireFlags) && (!excludeFlags || ((unsigned __int8)excludeFlags & p_type[32]) == 0) )
      {
LABEL_33:
        if ( *p_type == 1 )
        {
          if ( !v8 )
            v8 = Path_NearestNode(nodeOrigin, traceMask, NULL);
          if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
            goto LABEL_58;
          if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 665, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
            __debugbreak();
          if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 666, ASSERT_TYPE_ASSERT, "( m_pAI->ent )", (const char *)&queryFormat, "m_pAI->ent") )
            __debugbreak();
          if ( !SV_BotIsBotEnt(this->m_pAI->ent) || SV_BadPlaceExistsToBot(this->m_pAI, *p_type) )
          {
LABEL_58:
            if ( v8 )
            {
              if ( p_type == (unsigned __int8 *)12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 384, ASSERT_TYPE_ASSERT, "( badPlace )", (const char *)&queryFormat, "badPlace") )
                __debugbreak();
              if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || Path_BadPlaceAppliesViaFlags(p_type[32], v8) )
                return 1;
            }
          }
        }
        else
        {
          LODWORD(v26) = *p_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 680, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v26) )
            __debugbreak();
        }
      }
    }
LABEL_53:
    ++v21;
    v22 += 12;
    p_type += 48;
  }
  while ( v21 < 0x10 );
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
  char v4; 
  char v5; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 372, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RDI = this->m_pAI;
  *(double *)&_XMM0 = G_random();
  __asm { vcomiss xmm0, dword ptr [rdi+19Ch] }
  if ( v4 | v5 )
  {
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 488, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
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

__int64 __fastcall AICommonInterface::FindSafePosOutsideBadplace(AICommonInterface *this, double safeDist, vec3_t *outPos)
{
  unsigned int Layer; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v19; 
  const bfx::AreaHandle *CurArea; 
  unsigned __int8 v25; 
  __int64 result; 
  char v58; 
  bfx::AreaHandle areaA; 
  bfx::AreaHandle areaB; 
  __int64 v87; 
  vec3_t startPos; 
  vec3_t endPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  bfx::PathSpec pathSpec; 
  nav_probe_results_s pOutResults; 
  char v94; 
  void *retaddr; 

  _RAX = &retaddr;
  v87 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _R15 = outPos;
  __asm { vmovaps xmm14, xmm1 }
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+160h+pPathSpec.m_pathSharingPenalty], xmm6
    vmovss  [rbp+160h+pPathSpec.m_maxPathSharingPenalty], xmm6
    vmovss  [rbp+160h+pPathSpec.m_maxSearchDist], xmm6
  }
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  Layer = Nav_GetLayer(this->m_pAI->pNavigator);
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 875, ASSERT_TYPE_ASSERT, "( m_pAI->pNavigator )", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  m_pSpace = this->m_pAI->pNavigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 877, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v19 = this->m_pAI->pNavigator->Get2DNavigator(this->m_pAI->pNavigator);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 881, ASSERT_TYPE_ASSERT, "(pNav2D)", "%s\n\tAI_FindSafePosOutsideBadplace called on a 3d AI.  This only supports 2d AI.", "pNav2D") )
    __debugbreak();
  _RAX = AINavigator2D::GetPathSpec(v19);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+160h+pPathSpec.m_obstacleMode], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+160h+pPathSpec.m_maxSearchDist], ymm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbp-20h], xmm0
  }
  bfx::AreaHandle::AreaHandle(&areaB);
  Nav_GetSpaceUp(m_pSpace, &outUp);
  if ( !this->m_pAI->pNavigator->IsInBadPlace(this->m_pAI->pNavigator) )
  {
    _RBX = Nav_GetFirstRepulsor();
    if ( _RBX )
    {
      __asm
      {
        vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm7, cs:__real@42a00000
      }
      do
      {
        if ( _RBX->bBadplace )
        {
          _RAX = this->m_pAI->ent;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+2Ch]
            vsubss  xmm1, xmm0, dword ptr [rax+138h]
            vandps  xmm1, xmm1, xmm8
            vcomiss xmm1, xmm7
          }
          if ( !_RBX->bBadplace )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax+130h]
              vsubss  xmm4, xmm0, dword ptr [rbx+24h]
              vmovss  xmm1, dword ptr [rax+134h]
              vsubss  xmm2, xmm1, dword ptr [rbx+28h]
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm0
              vmovss  xmm1, dword ptr [rbx+30h]
              vmulss  xmm2, xmm1, xmm1
              vcomiss xmm4, xmm2
            }
          }
        }
        _RBX = Nav_GetNextRepulsor(_RBX);
      }
      while ( _RBX );
    }
    goto LABEL_15;
  }
  if ( !Nav_GetClosestVerticalPos(&this->m_pAI->ent->r.currentOrigin, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, &startPos, &areaB) )
  {
LABEL_15:
    v25 = 0;
    goto LABEL_16;
  }
  pathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pathSpec.m_areaPenaltyFlags = -1i64;
  pathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vmovss  [rbp+160h+pathSpec.m_pathSharingPenalty], xmm6
    vmovss  [rbp+160h+pathSpec.m_maxPathSharingPenalty], xmm6
    vmovss  [rbp+160h+pathSpec.m_maxSearchDist], xmm6
  }
  bfx::PenaltyTable::PenaltyTable(&pathSpec.m_penaltyTable);
  pathSpec.m_snapMode = SNAP_CLOSEST;
  pathSpec.m_obstacleBlockageFlags = 1;
  CurArea = AINavigator2D::GetCurArea(v19);
  bfx::AreaHandle::AreaHandle(&areaA, CurArea);
  if ( (bfx::AreaHandle::GetObstacleBlockageFlags(&areaA) & 1) == 0 && !bfx::IsAreaReachableFromArea(&areaA, &areaB, &pathSpec) )
  {
    bfx::AreaHandle::~AreaHandle(&areaA);
    goto LABEL_15;
  }
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+130h]
    vmovss  xmm0, dword ptr [rsp+260h+startPos]
    vsubss  xmm6, xmm0, xmm7
    vmovss  xmm1, dword ptr [rsp+260h+startPos+4]
    vsubss  xmm5, xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rsp+260h+startPos+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vdivss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm6, xmm0
    vmulss  xmm2, xmm5, xmm0
    vmulss  xmm5, xmm4, xmm0
    vcomiss xmm3, cs:__real@3a83126f
  }
  if ( v58 )
  {
    v25 = 0;
  }
  else
  {
    __asm
    {
      vaddss  xmm3, xmm3, xmm14
      vmulss  xmm0, xmm3, xmm1
      vaddss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbp+160h+endPos], xmm1
      vmulss  xmm2, xmm2, xmm3
      vaddss  xmm0, xmm2, dword ptr [rcx+134h]
      vmovss  dword ptr [rbp+160h+endPos+4], xmm0
      vmulss  xmm1, xmm3, xmm5
      vaddss  xmm2, xmm1, dword ptr [rcx+138h]
      vmovss  dword ptr [rbp+160h+endPos+8], xmm2
    }
    Nav_Trace(&startPos, &areaB, &endPos, &pPathSpec, &pOutResults);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+160h+pOutResults.m_EndPos]
      vmovss  dword ptr [r15], xmm0
      vmovss  xmm1, dword ptr [rbp+160h+pOutResults.m_EndPos+4]
      vmovss  dword ptr [r15+4], xmm1
      vmovss  xmm0, dword ptr [rbp+160h+pOutResults.m_EndPos+8]
      vmovss  dword ptr [r15+8], xmm0
    }
    v25 = 1;
  }
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  bfx::AreaHandle::~AreaHandle(&areaA);
LABEL_16:
  bfx::AreaHandle::~AreaHandle(&areaB);
  result = v25;
  _R11 = &v94;
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
  }
  return result;
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
  bool v3; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  bool v14; 
  char v16; 
  int v18; 
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
  v3 = this->m_pAI->pNavigator->IsInBadPlace(this->m_pAI->pNavigator);
  sentient = this->m_pAI->sentient;
  if ( v3 )
  {
    pClaimedNode = sentient->pClaimedNode;
    if ( !pClaimedNode )
      return 1;
    __asm { vmovaps [rsp+0B8h+var_18], xmm6 }
    pathnode_t::GetPos(pClaimedNode, &pos);
    this->m_pAI->pNavigator->GetUsableCurPos(this->m_pAI->pNavigator, &pt2);
    this->m_pAI->pNavigator->GetCurPos(this->m_pAI->pNavigator, &pt1);
    AINavigator::GetUpVector(this->m_pAI->pNavigator, &outUp);
    __asm { vmovss  xmm6, cs:__real@42100000 }
    LOBYTE(_EAX) = this->GetFixedNode(this);
    _ECX = 0;
    __asm { vmovd   xmm1, ecx }
    _EAX = (unsigned __int8)_EAX;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@43800000
      vblendvps xmm0, xmm1, xmm6, xmm2
      vmovss  [rsp+0B8h+var_88], xmm0
    }
    v14 = this->m_pAI->pNavigator->IsNodeUsable(this->m_pAI->pNavigator, this->m_pAI->sentient->pClaimedNode);
    __asm { vmovaps xmm6, [rsp+0B8h+var_18] }
    if ( !v14 )
      goto LABEL_21;
    *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(&pt1, &pos, &outUp);
    __asm { vcomiss xmm0, cs:__real@44800000 }
    if ( !v16 )
    {
LABEL_21:
      *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(&pos, &pt2, &outUp);
      __asm { vcomiss xmm0, [rsp+0B8h+var_88] }
      if ( !v16 )
        return 1;
    }
  }
  else
  {
    Com_Teams_GetTeamFlag(&result, sentient->eTeam);
    v18 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&result);
    if ( !AICommonInterface::Use3DPathing(this) && Nav_IsPointInRepulsorBadplace(&this->m_pAI->ent->r.currentOrigin, v18, this->m_pAI->ent->s.number, 2047) )
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
  unsigned int v10; 
  char v12; 
  const bitarray<224> *AllCombatTeamFlags; 
  int v17; 
  unsigned int v21; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int128 *v26; 
  int v27; 
  scr_string_t *p_name; 
  __int64 v29; 
  __int64 result; 
  int v31; 
  unsigned __int8 *p_type; 
  unsigned int v40; 
  __int64 v45; 
  unsigned __int8 v46; 
  __int128 v47; 
  __int64 v48; 
  int v49; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovups xmm6, xmmword ptr [r8]
    vmovsd  xmm7, qword ptr [r8+10h]
  }
  v10 = teamflags->array[6];
  v46 = flags;
  __asm
  {
    vmovups [rbp+4Fh+var_80], xmm6
    vmovsd  [rbp+4Fh+var_70], xmm7
  }
  v12 = flags;
  _RSI = teamflags;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    __asm { vmovd   ebx, xmm6 }
    if ( (_EBX & 0x8000000) != 0 )
    {
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
      *(_QWORD *)((char *)&v47 + 4) &= *(_QWORD *)&AllCombatTeamFlags->array[1];
      HIDWORD(v47) &= AllCombatTeamFlags->array[3];
      v17 = AllCombatTeamFlags->array[0] & (_EBX | 0x10000000);
      v48 &= *(_QWORD *)&AllCombatTeamFlags->array[4];
      v10 &= AllCombatTeamFlags->array[6];
      __asm { vmovsd  xmm7, [rbp+4Fh+var_70] }
      LODWORD(v47) = v17;
      __asm { vmovups xmm6, [rbp+4Fh+var_80] }
    }
  }
  __asm
  {
    vmovups xmmword ptr [rsi], xmm6
    vmovsd  qword ptr [rsi+10h], xmm7
  }
  _RSI->array[6] = v10;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vmovsd  xmm0, qword ptr [rax+10h]
  }
  v21 = _RAX->array[6];
  __asm
  {
    vmovups [rbp+4Fh+var_80], xmm1
    vmovsd  [rbp+4Fh+var_70], xmm0
    vmovd   eax, xmm1
  }
  LODWORD(v47) = _RSI->array[0] & ~_EAX;
  *(_QWORD *)((char *)&v47 + 4) = ~*(_QWORD *)((char *)&v47 + 4) & *(_QWORD *)&_RSI->array[1];
  HIDWORD(v47) = ~HIDWORD(v47) & _RSI->array[3];
  v48 = ~v48 & *(_QWORD *)&_RSI->array[4];
  v23 = ~v21 & v10;
  v24 = 0;
  v49 = v23;
  v25 = 0;
  v26 = &v47;
  while ( !*(_DWORD *)v26 )
  {
    ++v25;
    v26 = (__int128 *)((char *)v26 + 4);
    if ( v25 >= 7 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 249, ASSERT_TYPE_ASSERT, "(Com_Teams_IsValidTeamFlag( teamflags ))", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( teamflags )") )
    __debugbreak();
LABEL_13:
  if ( type != (unsigned __int8)type )
  {
    LODWORD(v45) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 250, ASSERT_TYPE_ASSERT, "( ( type == (byte) type ) )", "( type ) = %i", v45) )
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
    if ( (v12 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 258, ASSERT_TYPE_ASSERT, "((flags & ( 1 << 0 ) ) != 0)", "%s\n\tGlobal Badplace needs limiting type (like only_sky, etc)", "(flags & BPF_ONLY_SKY ) != 0") )
      __debugbreak();
  }
  if ( name )
  {
    v27 = 0;
    p_name = &g_badplaces[0].name;
    while ( *p_name != name )
    {
      ++v27;
      p_name += 12;
      if ( (__int64)p_name >= (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_613.v.m128_i64[1] )
        goto LABEL_36;
    }
    if ( v27 >= 0 )
    {
      v29 = v27;
      Path_UpdateBadPlaceCount(&g_badplaces[v27], -1);
      g_badplaces[v29].type = 0;
      Scr_SetString(&g_badplaces[v29].name, (scr_string_t)0);
    }
  }
LABEL_36:
  if ( duration > 0 )
  {
    if ( duration < 250 )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3fd0000000000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vcvtss2sd xmm2, xmm1, xmm1
        vmovq   r8, xmm2
        vmovq   r9, xmm3
      }
      Com_PrintWarning(18, "WARNING: A badplace was created with duration [%.2f second], which is less than the ping time [%.2f second]\n", _R8, _R9);
    }
    v31 = duration + level.time;
  }
  else
  {
    if ( !name )
    {
      Com_PrintError(18, "Anonymous bad places must have a duration.\n");
      result = 0i64;
      goto LABEL_53;
    }
    v31 = 0x7FFFFFFF;
  }
  p_type = &g_badplaces[0].type;
  while ( *p_type )
  {
    ++v24;
    p_type += 48;
    if ( (__int64)p_type >= (__int64)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_613.v.m128_i64[1] + 4 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
        Com_PrintError(18, "Too many bad places (more than %i)\n", 16i64);
      result = 0i64;
      goto LABEL_53;
    }
  }
  Scr_SetString(&g_badplaces[v24].name, name);
  g_badplaces[v24].endtime = v31;
  if ( v24 >= 0x10 )
  {
    LODWORD(v45) = v24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( badPlaceIndex ) < (unsigned)( 16 )", "badPlaceIndex doesn't index MAX_BADPLACES\n\t%i not in [0, %i)", v45, 16) )
      __debugbreak();
  }
  v40 = _RSI->array[6];
  _RCX = &g_badplaces[v24];
  __asm
  {
    vmovups xmmword ptr [rcx+10h], xmm6
    vmovsd  qword ptr [rcx+20h], xmm7
  }
  _RCX->teamflags.array[6] = v40;
  _RCX->flags = v46;
  _RCX->pingTime = level.time;
  _RCX->type = type;
  Path_UpdateBadPlaceCount(_RCX, 1);
  result = 1i64;
LABEL_53:
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
Path_MakeGlobalBadPlace
==============
*/
__int64 Path_MakeGlobalBadPlace(scr_string_t name, int duration, bitarray<224> *teamflags, int flags)
{
  bitarray<224> v11; 

  _RBX = teamflags;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 283, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovsd  xmm1, qword ptr [rbx+10h]
  }
  v11.array[6] = _RBX->array[6];
  __asm
  {
    vmovups [rsp+58h+var_28], xmm0
    vmovsd  [rsp+58h+var_18], xmm1
  }
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
  char v2; 
  unsigned int i; 
  unsigned int v5; 
  int v9; 
  __int64 v11; 
  __int128 v14; 
  bitarray<224> teamFlags; 

  if ( BG_AISystemEnabled() )
  {
    time = level.time;
    _RBX = &g_badplaces[0].type;
    v2 = 0;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *_RBX )
      {
        if ( time < *((_DWORD *)_RBX - 3) )
        {
          if ( time - *((_DWORD *)_RBX - 2) >= 250 )
          {
            __asm { vmovups xmm0, xmmword ptr [rbx+4] }
            v5 = *((_DWORD *)_RBX + 7);
            __asm
            {
              vmovups [rsp+0B8h+var_78], xmm0
              vmovups [rsp+0B8h+var_68], xmm0
              vmovsd  xmm0, qword ptr [rbx+14h]
              vmovsd  [rsp+0B8h+var_88], xmm0
              vmovups xmm0, [rsp+0B8h+var_78]
            }
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            {
              __asm { vmovd   ecx, xmm0 }
              if ( (_ECX & 0x10000000) != 0 )
              {
                LODWORD(v14) = _ECX | 0x8000000;
                __asm { vmovups xmm0, [rsp+0B8h+var_68] }
              }
            }
            v9 = *_RBX;
            teamFlags.array[6] = v5;
            __asm
            {
              vmovsd  xmm1, [rsp+0B8h+var_88]
              vmovups xmmword ptr [rsp+0B8h+teamFlags.array], xmm0
              vmovsd  qword ptr [rsp+0B8h+teamFlags.array+10h], xmm1
            }
            if ( v9 == 1 )
            {
              Actor_BroadcastGlobalEvent(NULL, AI_EV_BADPLACE_GLOBAL, &teamFlags, _RBX[32]);
            }
            else
            {
              LODWORD(v11) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_badplace.cpp", 351, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled bad place type %i", v11) )
                __debugbreak();
            }
            time = level.time;
            *((_DWORD *)_RBX - 2) = level.time;
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
      _RBX += 48;
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

