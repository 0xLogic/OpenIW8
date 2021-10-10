/*
==============
G_ShutdownTagInfoHeap
==============
*/

void G_ShutdownTagInfoHeap(void)
{
  ?G_ShutdownTagInfoHeap@@YAXXZ();
}

/*
==============
G_GetBaseLinkViewAngles
==============
*/

void __fastcall G_GetBaseLinkViewAngles(const gentity_s *ent, tmat33_t<vec3_t> *inOutBaseViewAngles)
{
  ?G_GetBaseLinkViewAngles@@YAXPEBUgentity_s@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(ent, inOutBaseViewAngles);
}

/*
==============
G_UpdateTagInfo
==============
*/

void __fastcall G_UpdateTagInfo(gentity_s *ent, int bParentHasDObj)
{
  ?G_UpdateTagInfo@@YAXPEAUgentity_s@@H@Z(ent, bParentHasDObj);
}

/*
==============
G_EntIsLinked
==============
*/

int __fastcall G_EntIsLinked(const gentity_s *ent)
{
  return ?G_EntIsLinked@@YAHPEBUgentity_s@@@Z(ent);
}

/*
==============
G_CalcFixedLinkTargetAxis
==============
*/

void __fastcall G_CalcFixedLinkTargetAxis(gentity_s *ent, tmat43_t<vec3_t> *axis)
{
  ?G_CalcFixedLinkTargetAxis@@YAXPEAUgentity_s@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(ent, axis);
}

/*
==============
G_ApplyGroundReferenceFrame
==============
*/

void __fastcall G_ApplyGroundReferenceFrame(const vec3_t *groundAngles, const tmat33_t<vec3_t> *worldAxis, tmat33_t<vec3_t> *relativeAxis)
{
  ?G_ApplyGroundReferenceFrame@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(groundAngles, worldAxis, relativeAxis);
}

/*
==============
G_DefaultViewAngleClampGoal
==============
*/

void __fastcall G_DefaultViewAngleClampGoal(viewClampState *clamp)
{
  ?G_DefaultViewAngleClampGoal@@YAXPEAUviewClampState@@@Z(clamp);
}

/*
==============
G_CalcTagParentRelAxis
==============
*/

void __fastcall G_CalcTagParentRelAxis(gentity_s *ent, tmat43_t<vec3_t> *parentRelAxis)
{
  ?G_CalcTagParentRelAxis@@YAXPEAUgentity_s@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(ent, parentRelAxis);
}

/*
==============
G_SetFixedLinkNonPlayer
==============
*/

int __fastcall G_SetFixedLinkNonPlayer(gentity_s *ent, const int eAngles, const int contentMask, vec3_t *outTargetOrigin, bool warp)
{
  return ?G_SetFixedLinkNonPlayer@@YAHPEAUgentity_s@@HHAEATvec3_t@@_N@Z(ent, eAngles, contentMask, outTargetOrigin, warp);
}

/*
==============
G_UpdateGroundTilt
==============
*/

void __fastcall G_UpdateGroundTilt(gclient_s *client)
{
  ?G_UpdateGroundTilt@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_CalcTagAxis
==============
*/

void __fastcall G_CalcTagAxis(gentity_s *ent, int bAnglesOnly)
{
  ?G_CalcTagAxis@@YAXPEAUgentity_s@@H@Z(ent, bAnglesOnly);
}

/*
==============
G_AllocTagInfoMem
==============
*/

EntityTagInfo *__fastcall G_AllocTagInfoMem()
{
  return ?G_AllocTagInfoMem@@YAPEAUEntityTagInfo@@XZ();
}

/*
==============
G_InitPlayerLinkAngles
==============
*/

void __fastcall G_InitPlayerLinkAngles(gentity_s *ent)
{
  ?G_InitPlayerLinkAngles@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_TransferLinkedEntities
==============
*/

void __fastcall G_TransferLinkedEntities(gentity_s *from, gentity_s *to)
{
  ?G_TransferLinkedEntities@@YAXPEAUgentity_s@@0@Z(from, to);
}

/*
==============
G_EntLinkToWithOffset
==============
*/

int __fastcall G_EntLinkToWithOffset(gentity_s *ent, gentity_s *parent, scr_string_t tagName, const vec3_t *originOffset, const vec3_t *anglesOffset, int errorMessageSize, char *outErrorMessage)
{
  return ?G_EntLinkToWithOffset@@YAHPEAUgentity_s@@0W4scr_string_t@@AEBTvec3_t@@2HPEAD@Z(ent, parent, tagName, originOffset, anglesOffset, errorMessageSize, outErrorMessage);
}

/*
==============
G_CalcTagConvertLocalToWorldAngles
==============
*/

void __fastcall G_CalcTagConvertLocalToWorldAngles(gentity_s *ent, const vec3_t *inLocalAngles, vec3_t *outWorldAngles)
{
  ?G_CalcTagConvertLocalToWorldAngles@@YAXPEAUgentity_s@@AEBTvec3_t@@AEAT2@@Z(ent, inLocalAngles, outWorldAngles);
}

/*
==============
G_SnapToViewAngleClampGoal
==============
*/

void __fastcall G_SnapToViewAngleClampGoal(viewClampState *clamp)
{
  ?G_SnapToViewAngleClampGoal@@YAXPEAUviewClampState@@@Z(clamp);
}

/*
==============
G_EntLinkTo
==============
*/

int __fastcall G_EntLinkTo(gentity_s *ent, gentity_s *parent, scr_string_t tagName, int errorMessageSize, char *outErrorMessage)
{
  return ?G_EntLinkTo@@YAHPEAUgentity_s@@0W4scr_string_t@@HPEAD@Z(ent, parent, tagName, errorMessageSize, outErrorMessage);
}

/*
==============
G_CalcTagConvertWorldToLocalAngles
==============
*/

void __fastcall G_CalcTagConvertWorldToLocalAngles(gentity_s *ent, const vec3_t *inWorldAngles, vec3_t *outLocalAngles)
{
  ?G_CalcTagConvertWorldToLocalAngles@@YAXPEAUgentity_s@@AEBTvec3_t@@AEAT2@@Z(ent, inWorldAngles, outLocalAngles);
}

/*
==============
G_InitTagInfoHeap
==============
*/

void G_InitTagInfoHeap(void)
{
  ?G_InitTagInfoHeap@@YAXXZ();
}

/*
==============
G_DebugDrawTagInfoCount
==============
*/

void G_DebugDrawTagInfoCount(void)
{
  ?G_DebugDrawTagInfoCount@@YAXXZ();
}

/*
==============
G_CalcTagParentAxis
==============
*/

void __fastcall G_CalcTagParentAxis(gentity_s *ent, tmat43_t<vec3_t> *parentAxis)
{
  ?G_CalcTagParentAxis@@YAXPEAUgentity_s@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(ent, parentAxis);
}

/*
==============
G_UpdateLinkInfoForClients
==============
*/

void __fastcall G_UpdateLinkInfoForClients(gentity_s *ent)
{
  ?G_UpdateLinkInfoForClients@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_UpdateTagInfoOfChildren
==============
*/

void __fastcall G_UpdateTagInfoOfChildren(gentity_s *parent, int bHasDObj)
{
  ?G_UpdateTagInfoOfChildren@@YAXPEAUgentity_s@@H@Z(parent, bHasDObj);
}

/*
==============
G_UpdateViewAngleClamp
==============
*/

void __fastcall G_UpdateViewAngleClamp(gclient_s *client, const vec3_t *worldAnglesCenter)
{
  ?G_UpdateViewAngleClamp@@YAXPEAUgclient_s@@AEBTvec3_t@@@Z(client, worldAnglesCenter);
}

/*
==============
G_EntIsLinkedTo
==============
*/

int __fastcall G_EntIsLinkedTo(gentity_s *ent, gentity_s *parent)
{
  return ?G_EntIsLinkedTo@@YAHPEAUgentity_s@@0@Z(ent, parent);
}

/*
==============
G_SetFixedLinkPlayer
==============
*/

void __fastcall G_SetFixedLinkPlayer(gentity_s *ent)
{
  ?G_SetFixedLinkPlayer@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_EntIsLinkedToAncestor
==============
*/

bool __fastcall G_EntIsLinkedToAncestor(const gentity_s *childEnt, const gentity_s *ancestorEnt)
{
  return ?G_EntIsLinkedToAncestor@@YA_NPEBUgentity_s@@0@Z(childEnt, ancestorEnt);
}

/*
==============
G_GeneralLink
==============
*/

void __fastcall G_GeneralLink(gentity_s *ent)
{
  ?G_GeneralLink@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_AllowEntUnlinkInCollision
==============
*/

void __fastcall G_AllowEntUnlinkInCollision(bool allow)
{
  ?G_AllowEntUnlinkInCollision@@YAX_N@Z(allow);
}

/*
==============
G_GeneralLinkNoWarp
==============
*/

void __fastcall G_GeneralLinkNoWarp(gentity_s *ent)
{
  ?G_GeneralLinkNoWarp@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_SwapLinkedEntities
==============
*/

void __fastcall G_SwapLinkedEntities(gentity_s *entA, gentity_s *entB)
{
  ?G_SwapLinkedEntities@@YAXPEAUgentity_s@@0@Z(entA, entB);
}

/*
==============
G_VerifyLinkedMoveTarget
==============
*/

int __fastcall G_VerifyLinkedMoveTarget(const gentity_s *ent, const vec3_t *targetOrigin, const int contentMask)
{
  return ?G_VerifyLinkedMoveTarget@@YAHPEBUgentity_s@@AEBTvec3_t@@H@Z(ent, targetOrigin, contentMask);
}

/*
==============
G_EntUnlink
==============
*/

void __fastcall G_EntUnlink(gentity_s *ent)
{
  ?G_EntUnlink@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
EntLinkTo_Internal
==============
*/
__int64 EntLinkTo_Internal(gentity_s *ent, gentity_s *parent, scr_string_t tagName, int errorMessageBufferSize, char *outErrorMessage)
{
  unsigned __int64 v6; 
  int BoneIndex; 
  int number; 
  const char *v11; 
  gentity_s *i; 
  gentity_s **p_parent; 
  const playerState_s *EntityPlayerStateConst; 
  ntl::nxheap *v15; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v17; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 
  EntityTagInfo *v20; 
  unsigned __int64 m_used_mem; 
  const char *v22; 
  TagInfoAnimScripted *TagInfoAnimScripted; 
  playerState_s *EntityPlayerState; 
  playerState_s *v25; 
  int pm_type; 
  GHandler *Handler; 
  int time; 
  const BgHandler *v29; 
  GWeaponMap *Instance; 
  const dvar_t *v31; 
  GWeaponMap *v32; 
  const Weapon *Weapon; 
  char *fmt; 
  tmat43_t<vec3_t> parentAxis; 

  v6 = errorMessageBufferSize;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 343, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 344, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags.m_flags[0] & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 345, ASSERT_TYPE_ASSERT, "(ent->flags.TestFlag( BgEntityFlagsCommon::SUPPORTS_LINKTO ))", "%s\n\tmust have implemented link for this entity", "ent->flags.TestFlag( BgEntityFlagsCommon::SUPPORTS_LINKTO )") )
    __debugbreak();
  if ( outErrorMessage )
  {
    if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 346, ASSERT_TYPE_ASSERT, "( (outErrorMessage == 0) || (errorMessageBufferSize > 0) )", (const char *)&queryFormat, "(outErrorMessage == NULL) || (errorMessageBufferSize > 0)") )
      __debugbreak();
    *outErrorMessage = 0;
  }
  if ( (unsigned int)(ent->s.lerp.pos.trType - 23) <= 5 )
  {
    if ( outErrorMessage )
      Com_sprintf(outErrorMessage, v6, "cannot link a ragdoll entity to another ent");
    return 0i64;
  }
  if ( ent->tagInfo )
  {
    EntUnlink_Internal(ent, 1);
    if ( ent->tagInfo )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 368, ASSERT_TYPE_ASSERT, "(!ent->tagInfo)", (const char *)&queryFormat, "!ent->tagInfo") )
        __debugbreak();
    }
  }
  if ( tagName )
  {
    if ( !SV_Game_DObjExists(parent) )
    {
      if ( outErrorMessage )
        Com_sprintf(outErrorMessage, v6, "target entity does not have a valid DObj");
      return 0i64;
    }
    BoneIndex = SV_Game_DObjGetBoneIndex(parent, tagName);
    if ( BoneIndex < 0 )
    {
      if ( outErrorMessage )
      {
        number = parent->s.number;
        v11 = SL_ConvertToString(tagName);
        LODWORD(fmt) = number;
        Com_sprintf(outErrorMessage, v6, "bone \"%s\" not found in target entity %i", v11, fmt);
      }
      return 0i64;
    }
  }
  else
  {
    BoneIndex = -1;
  }
  for ( i = parent; ; i = *p_parent )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 403, ASSERT_TYPE_ASSERT, "( checkEnt )", (const char *)&queryFormat, "checkEnt") )
      __debugbreak();
    if ( i == ent )
    {
      if ( outErrorMessage )
      {
        LODWORD(fmt) = parent->s.number;
        Com_sprintf(outErrorMessage, v6, "linking entity %i to %i would create a link cycle", (unsigned int)ent->s.number, fmt);
      }
      return 0i64;
    }
    p_parent = &i->tagInfo->parent;
    if ( !p_parent )
      break;
  }
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(parent);
  if ( parent->agent && (EntityPlayerStateConst && EntityPlayerStateConst->pm_type >= 7 || parent->s.eType == ET_INVISIBLE) )
  {
    if ( outErrorMessage )
      Com_sprintf(outErrorMessage, v6, "target entity %i is a dead player or agent", (unsigned int)parent->s.number);
    return 0i64;
  }
  v15 = s_tagInfoHeap.m_heap.mp_parent_region->mp_heap[0];
  if ( v15 )
    p_mp_top_ptr = (ntl::nxheap_region *)&v15->mp_top_ptr;
  else
    p_mp_top_ptr = s_tagInfoHeap.m_heap.mp_parent_region;
  v17 = s_tagInfoHeap.m_heap.mp_parent_region->mp_heap[1];
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v17 )
    mp_top_ptr = v17->mp_top_ptr;
  else
    mp_top_ptr = s_tagInfoHeap.m_heap.mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  if ( (unsigned __int64)mp_top_ptr + s_tagInfoHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr < 0x80 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEBC80, 1023i64);
  v20 = (EntityTagInfo *)ntl::nxheap::allocate(&s_tagInfoHeap.m_heap, 0x80ui64, 0x10ui64, 1);
  if ( !v20 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEBCC0, 1024i64);
  m_used_mem = s_tagInfoHeapHighWater;
  if ( s_tagInfoHeap.m_heap.m_used_mem > s_tagInfoHeapHighWater )
    m_used_mem = s_tagInfoHeap.m_heap.m_used_mem;
  s_tagInfoHeapHighWater = m_used_mem;
  v20->parent = parent;
  v20->name = 0;
  *(_WORD *)&v20->blendToParent = 0;
  if ( tagName )
  {
    if ( !SL_IsLowercaseString(tagName) )
    {
      v22 = SL_ConvertToString(tagName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 442, ASSERT_TYPE_ASSERT, "( ( tagName == ( static_cast< scr_string_t >( 0 ) ) || SL_IsLowercaseString( tagName ) ) )", "%s\n\t( SL_ConvertToString( tagName ) ) = %s", "( tagName == ( static_cast< scr_string_t >( 0 ) ) || SL_IsLowercaseString( tagName ) )", v22) )
        __debugbreak();
    }
  }
  Scr_SetString(&v20->name, tagName);
  v20->next = parent->tagChildren;
  v20->index = BoneIndex;
  *(_QWORD *)v20->axis.m[0].v = 0i64;
  *(_QWORD *)&v20->axis.row0.z = 0i64;
  *(_QWORD *)&v20->axis.row1.y = 0i64;
  *(_QWORD *)v20->axis.row2.v = 0i64;
  *(_QWORD *)&v20->axis.row2.z = 0i64;
  *(_QWORD *)&v20->axis.row3.y = 0i64;
  parent->tagChildren = ent;
  ent->tagInfo = v20;
  v20->collisionPhysics = 0;
  if ( ent->scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 461, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    ent->tagInfo->animScriptedDataInUse = 1;
    TagInfoAnimScripted = G_GetTagInfoAnimScripted(ent);
    G_CalcTagParentAxis(ent, &parentAxis);
    MatrixInverseOrthogonal43(&parentAxis, &TagInfoAnimScripted->parentInvAxis);
  }
  else
  {
    ent->tagInfo->animScriptedDataInUse = 0;
    *(_QWORD *)&v20->extraDataUnion.linkedRotation.aposLocal.trType = 0i64;
    *(_QWORD *)&v20->extraDataUnion.animScripted.parentInvAxis.row0.z = 0i64;
    *(_QWORD *)&v20->extraDataUnion.animScripted.parentInvAxis.row1.y = 0i64;
    *(_QWORD *)v20->extraDataUnion.animScripted.parentInvAxis.row2.v = 0i64;
    *(_QWORD *)&v20->extraDataUnion.animScripted.parentInvAxis.row2.z = 0i64;
    *(_QWORD *)&v20->extraDataUnion.animScripted.parentInvAxis.row3.y = 0i64;
  }
  EntityPlayerState = G_GetEntityPlayerState(ent);
  v25 = EntityPlayerState;
  if ( EntityPlayerState )
  {
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&EntityPlayerState->linkFlags, ACTIVE, 1u);
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&v25->linkFlags, GameModeFlagValues::ms_spValue, 7u);
    v25->linkEnt = parent->s.number;
    if ( (v25->linkFlags.m_flags[0] & 4) == 0 )
    {
      pm_type = v25->pm_type;
      if ( pm_type )
      {
        if ( pm_type == 7 )
          v25->pm_type = 8;
      }
      else
      {
        v25->pm_type = 1;
      }
    }
    Handler = GHandler::getHandler();
    time = level.time;
    v29 = Handler;
    Instance = GWeaponMap::GetInstance();
    BG_ContextMount_Cancel(Instance, v25, time, 0, v29, "player linked on server", 1);
  }
  if ( ent->s.eType == ET_MISSILE )
  {
    v31 = DVARBOOL_killswitch_missile_stuck_timeout_fix_enabled;
    if ( !DVARBOOL_killswitch_missile_stuck_timeout_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_missile_stuck_timeout_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.enabled )
    {
      v32 = GWeaponMap::GetInstance();
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(v32, ent->s.weaponHandle);
      if ( !BG_TimedDetonation(Weapon, ent->s.inAltWeaponMode) )
        ent->nextthink = 0;
    }
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->EntTagInfoChanged(GUtils::ms_gUtils, ent);
  return 1i64;
}

/*
==============
EntUnlink_Internal
==============
*/
void EntUnlink_Internal(gentity_s *ent, bool relinking)
{
  __int128 v2; 
  __int128 v3; 
  EntityTagInfo *tagInfo; 
  playerState_s *EntityPlayerState; 
  EntityAnimScript *scripted; 
  playerState_s *ps; 
  TagInfoAnimScripted *TagInfoAnimScripted; 
  int v10; 
  int v11; 
  int v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  trajectory_t_secure *p_pos; 
  unsigned int v20; 
  unsigned int eType; 
  int v22; 
  GUtils *Utils; 
  gentity_s *parent; 
  GHandler *Handler; 
  GHandler *v26; 
  GWeaponMap *Instance; 
  gentity_s *tagChildren; 
  gentity_s *v29; 
  gentity_s *next; 
  GUtils *v31; 
  gclient_s *client; 
  const Bounds *Bounds; 
  int skipEntities[2]; 
  EntityTagInfo *v36; 
  _DWORD v37[4]; 
  tmat33_t<vec3_t> axis; 
  int v39; 
  int v40; 
  int v41; 
  tmat43_t<vec3_t> out; 
  WorldUpReferenceFrame in1; 
  tmat43_t<vec3_t> src; 
  trace_t parentAxis; 
  _OWORD v46[4]; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "EntUnlink_Internal");
  tagInfo = ent->tagInfo;
  v36 = tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 145, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  scripted = ent->scripted;
  ps = EntityPlayerState;
  *(_QWORD *)skipEntities = EntityPlayerState;
  if ( scripted )
  {
    v46[1] = v2;
    v46[0] = v3;
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 158, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 753, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    G_CalcTagParentAxis(ent, (tmat43_t<vec3_t> *)&parentAxis);
    TagInfoAnimScripted = G_GetTagInfoAnimScripted(ent);
    MatrixMultiply43(&TagInfoAnimScripted->parentInvAxis, (const tmat43_t<vec3_t> *)&parentAxis, &out);
    MatrixTranspose((const tmat33_t<vec3_t> *)&out, (tmat33_t<vec3_t> *)&in1);
    MatrixMultiply43(&scripted->axis, &out, &src);
    MatrixCopy43(&src, &scripted->axis);
    v10 = SLODWORD(scripted->originError.v[0]);
    v11 = SLODWORD(scripted->originError.v[1]);
    v12 = SLODWORD(scripted->originError.v[2]);
    v39 = v10;
    v40 = v11;
    v41 = v12;
    if ( &v39 == (int *)&scripted->originError )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v10 = v39;
      v11 = v40;
      v12 = v41;
    }
    v13 = *(float *)&v11 * out.m[1].v[1];
    v14 = *(float *)&v12 * out.m[2].v[1];
    scripted->originError.v[0] = (float)((float)(*(float *)&v11 * out.m[1].v[0]) + (float)(*(float *)&v10 * out.m[0].v[0])) + (float)(*(float *)&v12 * out.m[2].v[0]);
    v15 = v13 + (float)(*(float *)&v10 * out.m[0].v[1]);
    v16 = *(float *)&v11 * out.m[1].v[2];
    v17 = v15 + v14;
    v18 = *(float *)&v12 * out.m[2].v[2];
    scripted->originError.v[1] = v17;
    scripted->originError.v[2] = (float)(v16 + (float)(*(float *)&v10 * out.m[0].v[2])) + v18;
    AnglesToAxis(&scripted->anglesError, &axis);
    MatrixMultiply((const tmat33_t<vec3_t> *)&in1, &axis, (tmat33_t<vec3_t> *)&src);
    MatrixMultiply((const tmat33_t<vec3_t> *)&src, (const tmat33_t<vec3_t> *)&out, &axis);
    AxisToSignedAngles(&axis, &scripted->anglesError);
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|0x80) )
    ent->s.lerp.eFlags.m_flags[0] ^= 4u;
  p_pos = &ent->s.lerp.pos;
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  v20 = p_pos->trType - 23;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
    G_ScrMover_ClearAnimatedTrajectory(ent);
  G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, 1);
  eType = (unsigned __int16)ent->s.eType;
  if ( (_WORD)eType == 4 )
    ent->s.groundEntityNum = 2047;
  if ( v20 > 5 )
  {
    if ( (unsigned __int16)eType <= 0x15u )
    {
      v22 = 2359300;
      if ( _bittest(&v22, eType) )
      {
        Utils = GUtils::GetUtils();
        Utils->UnlinkUpdateCorpse(Utils, ent);
      }
    }
  }
  else
  {
    p_pos->trType = TR_FIRST_RAGDOLL;
  }
  parent = tagInfo->parent;
  if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 204, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( ps )
  {
    G_DrawDebug_PlayerVignettePrint(ent, "unlinking player", 4u);
    if ( BG_IsPlayerZeroG(ps) )
    {
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&in1, ps, Handler);
      v26 = GHandler::getHandler();
      Instance = GWeaponMap::GetInstance();
      WorldUpReferenceFrame::Unlink(&in1, ps, Instance, v26, 0, NULL);
      G_SetOrigin(ent, &ps->origin, 1, 1);
    }
    v37[0] = LODWORD(ps->viewangles.v[0]);
    v37[1] = LODWORD(ps->viewangles.v[1]);
    *(float *)&v37[2] = 0.0;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    GUtils::ms_gUtils->SetPlayerViewAngles(GUtils::ms_gUtils, ent, (const vec3_t *)v37);
    ent->r.currentAngles.v[0] = 0.0;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2459, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SPRING_CAM )") )
        __debugbreak();
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x26u);
      ps->springCamBlendTime = 0.0;
    }
  }
  tagChildren = parent->tagChildren;
  v29 = NULL;
  if ( tagChildren != ent )
  {
    do
    {
      if ( !tagChildren->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 248, ASSERT_TYPE_ASSERT, "(next->tagInfo)", (const char *)&queryFormat, "next->tagInfo") )
        __debugbreak();
      v29 = tagChildren;
      tagChildren = tagChildren->tagInfo->next;
      if ( !tagChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 251, ASSERT_TYPE_ASSERT, "(next)", (const char *)&queryFormat, "next") )
        __debugbreak();
    }
    while ( tagChildren != ent );
    ps = *(playerState_s **)skipEntities;
    p_pos = &ent->s.lerp.pos;
    tagInfo = v36;
  }
  next = tagInfo->next;
  if ( v29 )
    v29->tagInfo->next = next;
  else
    parent->tagChildren = next;
  ent->tagInfo = NULL;
  if ( (ent->flags.m_flags[0] & 0x400) != 0 )
  {
    if ( p_pos->trType == TR_LINKED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 263, ASSERT_TYPE_ASSERT, "(ent->s.lerp.pos.trType != TR_LINKED)", (const char *)&queryFormat, "ent->s.lerp.pos.trType != TR_LINKED") )
      __debugbreak();
    if ( ent->s.lerp.apos.trType == TR_LINKED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 264, ASSERT_TYPE_ASSERT, "(ent->s.lerp.apos.trType != TR_LINKED)", (const char *)&queryFormat, "ent->s.lerp.apos.trType != TR_LINKED") )
      __debugbreak();
  }
  if ( ps )
  {
    if ( (ps->linkFlags.m_flags[0] & 4) != 0 )
    {
      v31 = GUtils::GetUtils();
      v31->SetPlayerViewAngles(v31, ent, &ps->linkWeaponAngles);
      GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, ACTIVE, 2u);
      GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, ACTIVE, 3u);
    }
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, ACTIVE, 1u);
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, ACTIVE, 2u);
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 7u);
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_spValue, 8u);
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, ACTIVE, 6u);
    GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::ClearFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_mpValue, 7u);
    ps->linkEnt = 2047;
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x1Bu);
    if ( ps->pm_type == 1 )
    {
      ps->pm_type = 0;
    }
    else if ( ps->pm_type == 8 )
    {
      ps->pm_type = 7;
    }
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->EntTagInfoChanged(GUtils::ms_gUtils, ent);
  Scr_SetString(&tagInfo->name, (scr_string_t)0);
  ntl::nxheap::free(&s_tagInfoHeap.m_heap, tagInfo);
  client = ent->client;
  if ( client )
  {
    if ( !relinking && !s_allowEntUnlinkInCollision )
    {
      skipEntities[0] = ent->s.number;
      Bounds = BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
      PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &parentAxis, &ent->r.currentOrigin, &ent->r.currentOrigin, Bounds, skipEntities, 1, 81937, ps, 0, NULL, NULL);
      if ( (parentAxis.startsolid || parentAxis.allsolid) && parentAxis.closestPointsPenetration > 0.0099999998 )
        Com_PrintWarning(24, "Unlinking the player in solid at (%f, %f, %f) with penetration depth of %.2f\n", ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2], parentAxis.closestPointsPenetration);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_AllocTagInfoMem
==============
*/
EntityTagInfo *G_AllocTagInfoMem()
{
  ntl::nxheap *v0; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v2; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 
  EntityTagInfo *v5; 
  unsigned __int64 m_used_mem; 
  EntityTagInfo *result; 

  v0 = s_tagInfoHeap.m_heap.mp_parent_region->mp_heap[0];
  if ( v0 )
    p_mp_top_ptr = (ntl::nxheap_region *)&v0->mp_top_ptr;
  else
    p_mp_top_ptr = s_tagInfoHeap.m_heap.mp_parent_region;
  v2 = s_tagInfoHeap.m_heap.mp_parent_region->mp_heap[1];
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v2 )
    mp_top_ptr = v2->mp_top_ptr;
  else
    mp_top_ptr = s_tagInfoHeap.m_heap.mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  if ( (unsigned __int64)mp_top_ptr + s_tagInfoHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr < 0x80 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEBC80, 1023i64);
  v5 = (EntityTagInfo *)ntl::nxheap::allocate(&s_tagInfoHeap.m_heap, 0x80ui64, 0x10ui64, 1);
  if ( !v5 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FEBCC0, 1024i64);
  m_used_mem = s_tagInfoHeapHighWater;
  result = v5;
  if ( s_tagInfoHeap.m_heap.m_used_mem > s_tagInfoHeapHighWater )
    m_used_mem = s_tagInfoHeap.m_heap.m_used_mem;
  s_tagInfoHeapHighWater = m_used_mem;
  return result;
}

/*
==============
G_AllowEntUnlinkInCollision
==============
*/
void G_AllowEntUnlinkInCollision(bool allow)
{
  s_allowEntUnlinkInCollision = allow;
}

/*
==============
G_ApplyGroundReferenceFrame
==============
*/
void G_ApplyGroundReferenceFrame(const vec3_t *groundAngles, const tmat33_t<vec3_t> *worldAxis, tmat33_t<vec3_t> *relativeAxis)
{
  float *v5; 
  int v6; 
  signed __int64 v7; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( 0.0 == groundAngles->v[0] && 0.0 == groundAngles->v[1] && 0.0 == groundAngles->v[2] )
  {
    v5 = &relativeAxis->m[0].v[1];
    v6 = 0;
    v7 = (char *)worldAxis - (char *)relativeAxis;
    v8 = 1;
    do
    {
      if ( !v8 )
      {
        LODWORD(v11) = 3;
        LODWORD(v9) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v9, v11) )
          __debugbreak();
        LODWORD(v12) = 3;
        LODWORD(v10) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v10, v12) )
          __debugbreak();
      }
      ++v6;
      *(v5 - 1) = *(float *)((char *)v5 + v7 - 4);
      *v5 = *(float *)((char *)v5 + v7);
      v5[1] = *(float *)((char *)v5 + v7 + 4);
      v5 += 3;
      v8 = (unsigned int)v6 < 3;
    }
    while ( v6 < 3 );
  }
  else
  {
    AnglesToAxis(groundAngles, &axis);
    MatrixTranspose(&axis, &out);
    MatrixMultiply(worldAxis, &out, relativeAxis);
  }
}

/*
==============
G_CalcFixedLinkTargetAxis
==============
*/
void G_CalcFixedLinkTargetAxis(gentity_s *ent, tmat43_t<vec3_t> *axis)
{
  EntityTagInfo *tagInfo; 
  tmat43_t<vec3_t> parentAxis; 

  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 864, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  MatrixMultiply43(&tagInfo->axis, &parentAxis, axis);
}

/*
==============
G_CalcTagAxis
==============
*/
void G_CalcTagAxis(gentity_s *ent, int bAnglesOnly)
{
  EntityTagInfo *tagInfo; 
  float v5; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> parentAxis; 

  G_CalcTagParentAxis(ent, &parentAxis);
  AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 822, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  if ( bAnglesOnly )
  {
    MatrixTranspose((const tmat33_t<vec3_t> *)&parentAxis, (tmat33_t<vec3_t> *)&out);
    MatrixMultiply((const tmat33_t<vec3_t> *)&axis, (const tmat33_t<vec3_t> *)&out, (tmat33_t<vec3_t> *)&tagInfo->axis);
  }
  else
  {
    MatrixInverseOrthogonal43(&parentAxis, &out);
    v5 = ent->r.currentOrigin.v[1];
    axis.m[3].v[0] = ent->r.currentOrigin.v[0];
    axis.m[3].v[2] = ent->r.currentOrigin.v[2];
    axis.m[3].v[1] = v5;
    MatrixMultiply43(&axis, &out, &tagInfo->axis);
  }
}

/*
==============
G_CalcTagConvertLocalToWorldAngles
==============
*/
void G_CalcTagConvertLocalToWorldAngles(gentity_s *ent, const vec3_t *inLocalAngles, vec3_t *outWorldAngles)
{
  double v8; 
  float v9; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v13; 
  tmat43_t<vec3_t> parentAxis; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 769, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 770, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  AnglesToAxis(inLocalAngles, &axis);
  MatrixMultiply((const tmat33_t<vec3_t> *)&ent->tagInfo->axis, (const tmat33_t<vec3_t> *)&parentAxis, &out);
  MatrixMultiply(&axis, &out, &v13);
  AxisToAngles(&v13, outWorldAngles);
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  outWorldAngles->v[0] = (float)((float)(outWorldAngles->v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v8 = AngleNormalize360(outWorldAngles->v[1]);
  v9 = outWorldAngles->v[2] * 0.0027777778;
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outWorldAngles->v[1] = *(float *)&v8;
  outWorldAngles->v[2] = (float)(v9 - *(float *)&_XMM3) * 360.0;
}

/*
==============
G_CalcTagConvertWorldToLocalAngles
==============
*/
void G_CalcTagConvertWorldToLocalAngles(gentity_s *ent, const vec3_t *inWorldAngles, vec3_t *outLocalAngles)
{
  double v8; 
  float v9; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v13; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> v15; 
  tmat43_t<vec3_t> out; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 793, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 794, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  MatrixInverseOrthogonal43(&parentAxis, &out);
  MatrixInverseOrthogonal43(&ent->tagInfo->axis, &v15);
  AnglesToAxis(inWorldAngles, &axis);
  MatrixMultiply((const tmat33_t<vec3_t> *)&out, (const tmat33_t<vec3_t> *)&v15, &in2);
  MatrixMultiply(&axis, &in2, &v13);
  AxisToAngles(&v13, outLocalAngles);
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  outLocalAngles->v[0] = (float)((float)(outLocalAngles->v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v8 = AngleNormalize360(outLocalAngles->v[1]);
  v9 = outLocalAngles->v[2] * 0.0027777778;
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outLocalAngles->v[1] = *(float *)&v8;
  outLocalAngles->v[2] = (float)(v9 - *(float *)&_XMM3) * 360.0;
}

/*
==============
G_CalcTagParentAxis
==============
*/
void G_CalcTagParentAxis(gentity_s *ent, tmat43_t<vec3_t> *parentAxis)
{
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  int v6; 
  bool v7; 
  gclient_s *client; 
  gclient_s *v9; 
  DObjAnimMat *v10; 
  vec3_t *v11; 
  __int64 v12; 
  float v13; 
  __int128 outAngles; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 

  Profile_Begin(419);
  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 689, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  parent = tagInfo->parent;
  if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 692, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( ((LODWORD(parent->r.currentOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(parent->r.currentOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(parent->r.currentOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 694, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parent->r.currentOrigin )[0] ) && !IS_NAN( ( parent->r.currentOrigin )[1] ) && !IS_NAN( ( parent->r.currentOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parent->r.currentOrigin )[0] ) && !IS_NAN( ( parent->r.currentOrigin )[1] ) && !IS_NAN( ( parent->r.currentOrigin )[2] )") )
    __debugbreak();
  if ( ((LODWORD(parent->r.currentAngles.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(parent->r.currentAngles.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(parent->r.currentAngles.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 695, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parent->r.currentAngles )[0] ) && !IS_NAN( ( parent->r.currentAngles )[1] ) && !IS_NAN( ( parent->r.currentAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parent->r.currentAngles )[0] ) && !IS_NAN( ( parent->r.currentAngles )[1] ) && !IS_NAN( ( parent->r.currentAngles )[2] )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    G_Utils_GetAnglesWithWorldUp(parent, (vec3_t *)&outAngles);
  }
  else
  {
    *(_QWORD *)&outAngles = *(_QWORD *)parent->r.currentAngles.v;
    DWORD2(outAngles) = LODWORD(parent->r.currentAngles.v[2]);
  }
  v6 = SV_Game_DObjExists(parent);
  v7 = v6 != 0;
  if ( !v6 && tagInfo->index >= 0 )
  {
    client = ent->client;
    if ( !client || !client->link_useBaseAnglesForViewClamp )
      Com_PrintError(15, "G_CalcTagParentAxis: Missing DObj for entity %d while trying to calculate parent axis, using entity basis. eType %d.\n", (unsigned int)ent->s.number, (unsigned int)ent->s.eType);
  }
  if ( !v7 || tagInfo->index < 0 || (v9 = ent->client) != NULL && v9->link_useBaseAnglesForViewClamp )
  {
    AnglesToAxis((const vec3_t *)&outAngles, (tmat33_t<vec3_t> *)parentAxis);
    v11 = &parentAxis->m[3];
    parentAxis->m[3].v[0] = parent->r.currentOrigin.v[0];
    parentAxis->m[3].v[1] = parent->r.currentOrigin.v[1];
    parentAxis->m[3].v[2] = parent->r.currentOrigin.v[2];
  }
  else
  {
    AnglesToAxis((const vec3_t *)&outAngles, (tmat33_t<vec3_t> *)&axis);
    axis.m[3] = parent->r.currentOrigin;
    G_Utils_DObjCalcBone(parent, tagInfo->index);
    v10 = &SV_Game_DObjGetMatrixArray(parent)[tagInfo->index];
    LocalConvertQuatToMat(v10, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, (tmat33_t<vec3_t> *)parentAxis);
    v11 = &parentAxis->m[3];
    MatrixTransformVector43(&v10->trans, &axis, &parentAxis->m[3]);
  }
  v13 = parentAxis->m[0].v[0];
  if ( (LODWORD(parentAxis->m[0].v[0]) & 0x7F800000) == 2139095040 || (v13 = parentAxis->m[0].v[1], (LODWORD(v13) & 0x7F800000) == 2139095040) || (v13 = parentAxis->m[0].v[2], (LODWORD(v13) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 740, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[0] )[0] ) && !IS_NAN( ( parentAxis[0] )[1] ) && !IS_NAN( ( parentAxis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[0] )[0] ) && !IS_NAN( ( parentAxis[0] )[1] ) && !IS_NAN( ( parentAxis[0] )[2] )", v13, outAngles) )
      __debugbreak();
  }
  if ( ((LODWORD(parentAxis->m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(parentAxis->m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(parentAxis->m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 741, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[1] )[0] ) && !IS_NAN( ( parentAxis[1] )[1] ) && !IS_NAN( ( parentAxis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[1] )[0] ) && !IS_NAN( ( parentAxis[1] )[1] ) && !IS_NAN( ( parentAxis[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(parentAxis->m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(parentAxis->m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(parentAxis->m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 742, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[2] )[0] ) && !IS_NAN( ( parentAxis[2] )[1] ) && !IS_NAN( ( parentAxis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[2] )[0] ) && !IS_NAN( ( parentAxis[2] )[1] ) && !IS_NAN( ( parentAxis[2] )[2] )") )
    __debugbreak();
  *(float *)&v12 = v11->v[0];
  if ( (LODWORD(v11->v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v12 = parentAxis->m[3].v[1], (v12 & 0x7F800000) == 2139095040) || (*(float *)&v12 = parentAxis->m[3].v[2], (v12 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 743, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[3] )[0] ) && !IS_NAN( ( parentAxis[3] )[1] ) && !IS_NAN( ( parentAxis[3] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[3] )[0] ) && !IS_NAN( ( parentAxis[3] )[1] ) && !IS_NAN( ( parentAxis[3] )[2] )", v12) )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_CalcTagParentRelAxis
==============
*/
void G_CalcTagParentRelAxis(gentity_s *ent, tmat43_t<vec3_t> *parentRelAxis)
{
  TagInfoAnimScripted *TagInfoAnimScripted; 
  tmat43_t<vec3_t> parentAxis; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 753, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  TagInfoAnimScripted = G_GetTagInfoAnimScripted(ent);
  MatrixMultiply43(&TagInfoAnimScripted->parentInvAxis, &parentAxis, parentRelAxis);
}

/*
==============
G_DebugDrawTagInfoCount
==============
*/
void G_DebugDrawTagInfoCount(void)
{
  const dvar_t *v0; 
  const char *v1; 

  v0 = DVARBOOL_g_debugdrawTagInfoPool;
  if ( !DVARBOOL_g_debugdrawTagInfoPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugdrawTagInfoPool") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = j_va("TAGINFO_HEAP_MEMORY_SIZE high water mark %zu", s_tagInfoHeapHighWater >> 7);
    G_Main_AddDebugString2D(50.0, 75.0, &colorWhite, 1.0, v1);
  }
}

/*
==============
G_DefaultViewAngleClampGoal
==============
*/
void G_DefaultViewAngleClampGoal(viewClampState *clamp)
{
  if ( !clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 911, ASSERT_TYPE_ASSERT, "( clamp )", (const char *)&queryFormat, "clamp") )
    __debugbreak();
  clamp->min.goal.v[0] = -180.0;
  clamp->min.goal.v[1] = -180.0;
  clamp->max.goal.v[0] = 180.0;
  clamp->max.goal.v[1] = 180.0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    clamp->resistMin.goal = 0i64;
    clamp->resistMax.goal = 0i64;
  }
}

/*
==============
G_EntIsLinked
==============
*/
_BOOL8 G_EntIsLinked(const gentity_s *ent)
{
  EntityTagInfo *tagInfo; 

  tagInfo = ent->tagInfo;
  return tagInfo && tagInfo->parent;
}

/*
==============
G_EntIsLinkedTo
==============
*/
_BOOL8 G_EntIsLinkedTo(gentity_s *ent, gentity_s *parent)
{
  EntityTagInfo *tagInfo; 

  tagInfo = ent->tagInfo;
  return tagInfo && tagInfo->parent == parent;
}

/*
==============
G_EntIsLinkedToAncestor
==============
*/
char G_EntIsLinkedToAncestor(const gentity_s *childEnt, const gentity_s *ancestorEnt)
{
  EntityTagInfo *tagInfo; 
  const gentity_s *parent; 

  tagInfo = childEnt->tagInfo;
  if ( !tagInfo )
    return 0;
  while ( 1 )
  {
    parent = tagInfo->parent;
    if ( parent == ancestorEnt )
      break;
    tagInfo = parent->tagInfo;
    if ( !tagInfo )
      return 0;
  }
  return 1;
}

/*
==============
G_EntLinkTo
==============
*/
__int64 G_EntLinkTo(gentity_s *ent, gentity_s *parent, scr_string_t tagName, int errorMessageSize, char *outErrorMessage)
{
  EntityTagInfo *tagInfo; 
  float v11; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> out; 

  Profile_Begin(310);
  if ( (unsigned int)EntLinkTo_Internal(ent, parent, tagName, errorMessageSize, outErrorMessage) )
  {
    G_CalcTagParentAxis(ent, &parentAxis);
    AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
    tagInfo = ent->tagInfo;
    if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 822, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
      __debugbreak();
    MatrixInverseOrthogonal43(&parentAxis, &out);
    v11 = ent->r.currentOrigin.v[1];
    axis.m[3].v[0] = ent->r.currentOrigin.v[0];
    axis.m[3].v[2] = ent->r.currentOrigin.v[2];
    axis.m[3].v[1] = v11;
    MatrixMultiply43(&axis, &out, &tagInfo->axis);
    Profile_EndInternal(NULL);
    return 1i64;
  }
  else
  {
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

/*
==============
G_EntLinkToWithOffset
==============
*/
__int64 G_EntLinkToWithOffset(gentity_s *ent, gentity_s *parent, scr_string_t tagName, const vec3_t *originOffset, const vec3_t *anglesOffset, int errorMessageSize, char *outErrorMessage)
{
  EntityTagInfo *tagInfo; 

  Profile_Begin(310);
  if ( (unsigned int)EntLinkTo_Internal(ent, parent, tagName, errorMessageSize, outErrorMessage) )
  {
    tagInfo = ent->tagInfo;
    AnglesToAxis(anglesOffset, (tmat33_t<vec3_t> *)&tagInfo->axis);
    tagInfo->axis.m[3].v[0] = originOffset->v[0];
    tagInfo->axis.m[3].v[1] = originOffset->v[1];
    tagInfo->axis.m[3].v[2] = originOffset->v[2];
    Profile_EndInternal(NULL);
    return 1i64;
  }
  else
  {
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

/*
==============
G_EntUnlink
==============
*/
void G_EntUnlink(gentity_s *ent)
{
  Profile_Begin(311);
  if ( ent->tagInfo )
    EntUnlink_Internal(ent, 0);
  Profile_EndInternal(NULL);
}

/*
==============
G_FixLinkedChildren
==============
*/
void G_FixLinkedChildren(gentity_s *ent)
{
  GUtils *v2; 
  int v3; 
  gentity_s *tagChildren; 
  int i; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1461, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v2 = GUtils::ms_gUtils;
  v3 = SV_Game_DObjExists(ent);
  tagChildren = ent->tagChildren;
  for ( i = v3; tagChildren; tagChildren = tagChildren->tagInfo->next )
  {
    if ( !tagChildren->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1470, ASSERT_TYPE_ASSERT, "(child->tagInfo)", (const char *)&queryFormat, "child->tagInfo") )
      __debugbreak();
    tagChildren->tagInfo->parent = ent;
    G_UpdateTagInfo(tagChildren, i);
    v2->EntTagInfoChanged(v2, tagChildren);
  }
}

/*
==============
G_GeneralLink
==============
*/
void G_GeneralLink(gentity_s *ent)
{
  vec3_t outTargetOrigin; 

  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1084, ASSERT_TYPE_ASSERT, "(ent->tagInfo)", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1085, ASSERT_TYPE_ASSERT, "(!ent->client)", (const char *)&queryFormat, "!ent->client") )
    __debugbreak();
  G_SetFixedLinkNonPlayer(ent, 0, 2065, &outTargetOrigin, 1);
  G_GeneralLinkInternal(ent);
}

/*
==============
G_GeneralLinkInternal
==============
*/
void G_GeneralLinkInternal(gentity_s *ent)
{
  G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 0, 0);
  ent->s.lerp.pos.trType = TR_INTERPOLATE;
  ent->s.lerp.apos.trType = TR_INTERPOLATE;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|0x80) )
  {
    *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
    ent->s.lerp.pos.trDelta.v[2] = 0.0;
    *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
    *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
    ent->s.lerp.apos.trDelta.v[2] = 0.0;
    *(_QWORD *)&ent->s.lerp.apos.trTime = 0i64;
  }
  SV_LinkEntity(ent);
}

/*
==============
G_GeneralLinkNoWarp
==============
*/
void G_GeneralLinkNoWarp(gentity_s *ent)
{
  vec3_t outTargetOrigin; 

  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1100, ASSERT_TYPE_ASSERT, "(ent->tagInfo)", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1101, ASSERT_TYPE_ASSERT, "(!ent->client)", (const char *)&queryFormat, "!ent->client") )
    __debugbreak();
  G_SetFixedLinkNonPlayer(ent, 0, 2065, &outTargetOrigin, 0);
  G_GeneralLinkInternal(ent);
}

/*
==============
G_GetBaseLinkViewAngles
==============
*/
void G_GetBaseLinkViewAngles(const gentity_s *ent, tmat33_t<vec3_t> *inOutBaseViewAngles)
{
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  const DObj *ServerDObjForEnt; 
  DObjAnimMat *MatrixArray; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_LADDER_AIM|0x80) && ent->client )
  {
    tagInfo = ent->tagInfo;
    if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1312, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
      __debugbreak();
    parent = tagInfo->parent;
    if ( ent->client->link_useTagScriptedCamera || (LOBYTE(parent->s.lerp.u.vehicle.bodyPitch) & 0x40) != 0 )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(parent);
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_22(ServerDObjForEnt, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
          G_Utils_GetAnglesWithWorldUp(parent, &outAngles);
        else
          outAngles = parent->r.currentAngles;
        AnglesToAxis(&outAngles, &axis);
        G_Utils_DObjCalcBone(parent, inOutIndex[0]);
        MatrixArray = SV_Game_DObjGetMatrixArray(parent);
        LocalConvertQuatToMat(&MatrixArray[inOutIndex[0]], &in1);
        MatrixMultiply(&in1, &axis, inOutBaseViewAngles);
      }
    }
  }
}

/*
==============
G_InitPlayerLinkAngles
==============
*/
void G_InitPlayerLinkAngles(gentity_s *ent)
{
  GHandler *Handler; 
  GHandler *v3; 
  vec3_t *p_groundTiltAngles; 
  GHandler *v5; 
  int time; 
  const BgHandler *v7; 
  gclient_s *client; 
  GWeaponMap *Instance; 
  gclient_s *v10; 
  gclient_s *v11; 
  int v12[4]; 
  vec3_t angles; 
  tmat43_t<vec3_t> parentAxis; 
  tmat33_t<vec3_t> relativeAxis; 
  WorldUpReferenceFrame v16; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1004, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1005, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1006, ASSERT_TYPE_ASSERT, "(ent->tagInfo)", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( !ent->tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1007, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent)", (const char *)&queryFormat, "ent->tagInfo->parent") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  G_DrawDebug_PlayerVignettePrint_Linkto(ent, &parentAxis);
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v16, &ent->client->ps, Handler, 1);
  WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v16, (tmat33_t<vec3_t> *)&parentAxis);
  if ( Com_GameMode_SupportsFeature(WEAPON_MELEE) )
  {
    if ( ent->client->ps.groundRefEnt == 2047 || (v3 = GHandler::getHandler(), !v3->GetEntityAngles(v3, ent->client->ps.groundRefEnt, (vec3_t *)v12)) )
    {
      *(float *)v12 = 0.0;
      *(float *)&v12[1] = 0.0;
      *(float *)&v12[2] = 0.0;
    }
    p_groundTiltAngles = (vec3_t *)v12;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
      goto LABEL_21;
    p_groundTiltAngles = &ent->client->ps.groundTiltAngles;
  }
  G_ApplyGroundReferenceFrame(p_groundTiltAngles, (const tmat33_t<vec3_t> *)&parentAxis, &relativeAxis);
LABEL_21:
  if ( BG_ContextMount_IsActive(&ent->client->ps) )
  {
    v5 = GHandler::getHandler();
    time = level.time;
    v7 = v5;
    client = ent->client;
    Instance = GWeaponMap::GetInstance();
    BG_ContextMount_Cancel(Instance, &client->ps, time, 1, v7, "player link angles set on server", 0);
  }
  v10 = ent->client;
  if ( v10->link_useTagAnglesForViewAngles )
  {
    AxisToAngles(&relativeAxis, &v10->ps.linkAngles);
    G_UpdateViewAngleClamp(ent->client, &ent->client->ps.linkAngles);
  }
  else
  {
    *(_QWORD *)v10->ps.linkAngles.v = 0i64;
    v10->ps.linkAngles.v[2] = 0.0;
    AxisToAngles(&relativeAxis, &angles);
    v11 = ent->client;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 950, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    BG_UpdateViewAngleClamp((float)level.time * 0.001, &angles, &v11->link_viewClamp, &v11->ps);
  }
  G_DrawDebug_PlayerVignettePrint(ent, "linking player", 0);
}

/*
==============
G_InitTagInfoHeap
==============
*/
void G_InitTagInfoHeap(void)
{
  ntl::solitary_buffer_allocator v0; 
  ntl::internal::buffer_memory_block<char> v1; 

  v0.m_data.m_size = 204800i64;
  v0.m_data.m_buffer = (char *)s_tagInfoHeapMem;
  ntl::nxheap::shutdown(&s_tagInfoHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_tagInfoHeap.m_region);
  if ( s_tagInfoHeap.m_data.m_buffer )
  {
    if ( s_tagInfoHeap.m_data.m_buffer != s_tagInfoHeap.m_allocator.m_data.m_buffer && s_tagInfoHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_tagInfoHeap.m_data.m_buffer = NULL;
    s_tagInfoHeap.m_data.m_size = 0i64;
  }
  s_tagInfoHeap.m_allocator = v0;
  ntl::nxheap::shutdown(&s_tagInfoHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_tagInfoHeap.m_region);
  if ( s_tagInfoHeap.m_data.m_buffer )
  {
    if ( s_tagInfoHeap.m_data.m_buffer != s_tagInfoHeap.m_allocator.m_data.m_buffer && s_tagInfoHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_tagInfoHeap.m_data.m_buffer = NULL;
    s_tagInfoHeap.m_data.m_size = 0i64;
  }
  if ( s_tagInfoHeap.m_allocator.m_data.m_size < 0x32000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  v1.m_buffer = s_tagInfoHeap.m_allocator.m_data.m_buffer;
  v1.m_size = 204800i64;
  s_tagInfoHeap.m_data = v1;
  if ( s_tagInfoHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
    __debugbreak();
  ntl::nxheap_region::init(&s_tagInfoHeap.m_region, s_tagInfoHeap.m_data.m_buffer, s_tagInfoHeap.m_data.m_size);
  if ( s_tagInfoHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init(&s_tagInfoHeap.m_heap, &s_tagInfoHeap.m_region, DIR_BOTTOM_UP);
}

/*
==============
G_SetFixedLinkNonPlayer
==============
*/
_BOOL8 G_SetFixedLinkNonPlayer(gentity_s *ent, const int eAngles, const int contentMask, vec3_t *outTargetOrigin, bool warp)
{
  EntityTagInfo *tagInfo; 
  BOOL v10; 
  float v11; 
  int number; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> parentAxis; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 876, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 877, ASSERT_TYPE_ASSERT, "( !ent->client )", (const char *)&queryFormat, "!ent->client") )
    __debugbreak();
  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 864, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  MatrixMultiply43(&tagInfo->axis, &parentAxis, &out);
  if ( !ent->tagInfo->collisionPhysics )
  {
    v10 = 1;
LABEL_16:
    v17 = out.m[3].v[1];
    ent->r.currentOrigin.v[0] = out.m[3].v[0];
    ent->r.currentOrigin.v[2] = out.m[3].v[2];
    ent->r.currentOrigin.v[1] = v17;
    goto LABEL_17;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 849, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
    __debugbreak();
  v11 = ent->r.box.halfSize.v[0];
  number = ent->s.number;
  parentAxis.m[1].v[1] = ent->r.box.halfSize.v[1];
  v13 = ent->r.box.midPoint.v[1];
  parentAxis.m[1].v[0] = v11;
  v14 = ent->r.box.midPoint.v[0];
  parentAxis.m[0].v[1] = v13;
  v15 = ent->r.box.halfSize.v[2];
  parentAxis.m[0].v[0] = v14;
  v16 = ent->r.box.midPoint.v[2];
  parentAxis.m[1].v[2] = v15 * 0.5;
  parentAxis.m[0].v[2] = v16;
  G_Main_TraceCapsule(&results, &ent->r.currentOrigin, &out.m[3], (const Bounds *)&parentAxis, number, contentMask);
  v10 = results.hitType == TRACE_HITTYPE_BEGIN;
  if ( results.hitType == TRACE_HITTYPE_BEGIN )
    goto LABEL_16;
LABEL_17:
  if ( eAngles )
  {
    if ( eAngles != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 892, ASSERT_TYPE_ASSERT, "( eAngles == FIXED_LINK_ANGLES_YAW_ONLY )", (const char *)&queryFormat, "eAngles == FIXED_LINK_ANGLES_YAW_ONLY") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 893, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ONLY_YAW ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ONLY_YAW )") )
      __debugbreak();
    v18 = vectoyaw((const vec2_t *)&out);
    ent->r.currentAngles.v[1] = *(float *)&v18;
  }
  else
  {
    AxisToAngles((const tmat33_t<vec3_t> *)&out, &ent->r.currentAngles);
  }
  v19 = out.m[3].v[1];
  outTargetOrigin->v[0] = out.m[3].v[0];
  outTargetOrigin->v[2] = out.m[3].v[2];
  outTargetOrigin->v[1] = v19;
  if ( warp )
    G_PhysicsObject_WarpToCurrentTransform(ent, 0);
  return v10;
}

/*
==============
G_SetFixedLinkPlayer
==============
*/
void G_SetFixedLinkPlayer(gentity_s *ent)
{
  playerState_s *EntityPlayerState; 
  EntityTagInfo *tagInfo; 
  GHandler *Handler; 
  EntityTagInfo *v5; 
  gentity_s *parent; 
  const DObj *ServerDObjForEnt; 
  DObjAnimMat *MatrixArray; 
  double v9; 
  float v10; 
  gclient_s *client; 
  GMovingPlatforms *v12; 
  unsigned int v13; 
  GHandler *v14; 
  const vec3_t *p_groundTiltAngles; 
  __int64 v16; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outAngles; 
  int v20[4]; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> relativeAxis; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> out; 
  WorldUpReferenceFrame v25; 
  tmat33_t<vec3_t> axis; 

  if ( !ent->client && !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1361, ASSERT_TYPE_ASSERT, "( ent->client || ent->agent )", (const char *)&queryFormat, "ent->client || ent->agent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1364, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 4) != 0 && EntityPlayerState->pm_type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1365, ASSERT_TYPE_ASSERT, "( !(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_NORMAL_LINKED)) )", (const char *)&queryFormat, "!(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_NORMAL_LINKED))") )
    __debugbreak();
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 4) != 0 && EntityPlayerState->pm_type == 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1366, ASSERT_TYPE_ASSERT, "( !(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_DEAD_LINKED)) )", (const char *)&queryFormat, "!(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_DEAD_LINKED))") )
    __debugbreak();
  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1369, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v25, EntityPlayerState, Handler, 1);
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 2) != 0 )
  {
    G_CalcTagParentAxis(ent, &parentAxis);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v25, (tmat33_t<vec3_t> *)&parentAxis);
    MatrixMultiply43(&tagInfo->axis, &parentAxis, &out);
  }
  else
  {
    G_CalcTagParentAxis(ent, &out);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v25, (tmat33_t<vec3_t> *)&out);
  }
  MatrixCopy33((const tmat33_t<vec3_t> *)&out, &dst);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_LADDER_AIM|0x80) && ent->client )
  {
    v5 = ent->tagInfo;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1312, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
      __debugbreak();
    parent = v5->parent;
    if ( ent->client->link_useTagScriptedCamera || (LOBYTE(parent->s.lerp.u.vehicle.bodyPitch) & 0x40) != 0 )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(parent);
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_22(ServerDObjForEnt, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
          G_Utils_GetAnglesWithWorldUp(parent, &outAngles);
        else
          outAngles = parent->r.currentAngles;
        AnglesToAxis(&outAngles, &axis);
        G_Utils_DObjCalcBone(parent, inOutIndex[0]);
        MatrixArray = SV_Game_DObjGetMatrixArray(parent);
        LocalConvertQuatToMat(&MatrixArray[inOutIndex[0]], (tmat33_t<vec3_t> *)&parentAxis);
        MatrixMultiply((const tmat33_t<vec3_t> *)&parentAxis, &axis, &dst);
      }
    }
  }
  if ( tagInfo->blendToParent )
  {
    v9 = BG_CalcViewClampLerpFraction((float)level.time * 0.001, ent->c.mover.angle.decelTime, ent->c.mover.pos.pos3.v[1], ent->c.mover.pos.pos3.v[2], ent->c.mover.angle.speed);
    v10 = *(float *)&v9;
  }
  else
  {
    v10 = FLOAT_1_0;
  }
  client = ent->client;
  if ( client )
  {
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    v12 = GMovingPlatforms::ms_instance;
    if ( !client->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v13 = client->movingPlatformHandle.m_objIndex - 1;
    if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( v13 >= 0xF8 )
    {
      LODWORD(v16) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v16, 248) )
        __debugbreak();
    }
    GMovingPlatformClient::UpdateLinkToBlendPos(&v12->m_moverClientArray[v13], ent);
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0x18u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
  }
  else
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_MELEE) )
    {
      if ( EntityPlayerState->groundRefEnt == 2047 || (v14 = GHandler::getHandler(), !v14->GetEntityAngles(v14, EntityPlayerState->groundRefEnt, (vec3_t *)v20)) )
      {
        *(float *)v20 = 0.0;
        *(float *)&v20[1] = 0.0;
        *(float *)&v20[2] = 0.0;
      }
      p_groundTiltAngles = (const vec3_t *)v20;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
        goto LABEL_63;
      p_groundTiltAngles = &EntityPlayerState->groundTiltAngles;
    }
    G_ApplyGroundReferenceFrame(p_groundTiltAngles, &dst, &relativeAxis);
    SetPlayerFixedLinkViewAngles(ent, &relativeAxis, v10);
  }
LABEL_63:
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 4) == 0 )
  {
    SetPlayerFixedLinkOrigin(ent, &out, v10);
    SV_LinkEntity(ent);
    G_DrawDebug_PlayerVignettePrint(ent, "update player link", 1u);
  }
}

/*
==============
G_ShutdownTagInfoHeap
==============
*/

void __fastcall G_ShutdownTagInfoHeap(double _XMM0_8)
{
  ntl::nxheap::clear(&s_tagInfoHeap.m_heap);
  ntl::nxheap::shutdown(&s_tagInfoHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_tagInfoHeap.m_region);
  if ( s_tagInfoHeap.m_data.m_buffer )
  {
    if ( s_tagInfoHeap.m_data.m_buffer != s_tagInfoHeap.m_allocator.m_data.m_buffer && s_tagInfoHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_tagInfoHeap.m_data = *(ntl::internal::buffer_memory_block<char> *)&_XMM0_8;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_tagInfoHeap.m_allocator = _XMM0;
}

/*
==============
G_SnapToViewAngleClampGoal
==============
*/
void G_SnapToViewAngleClampGoal(viewClampState *clamp)
{
  if ( !clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 926, ASSERT_TYPE_ASSERT, "( clamp )", (const char *)&queryFormat, "clamp") )
    __debugbreak();
  clamp->min.current.v[0] = clamp->min.goal.v[0];
  clamp->min.current.v[1] = clamp->min.goal.v[1];
  clamp->max.current.v[0] = clamp->max.goal.v[0];
  clamp->max.current.v[1] = clamp->max.goal.v[1];
  clamp->min.start.v[0] = clamp->min.goal.v[0];
  clamp->min.start.v[1] = clamp->min.goal.v[1];
  clamp->max.start.v[0] = clamp->max.goal.v[0];
  clamp->max.start.v[1] = clamp->max.goal.v[1];
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    clamp->resistMin.current.v[0] = clamp->resistMin.goal.v[0];
    clamp->resistMin.current.v[1] = clamp->resistMin.goal.v[1];
    clamp->resistMax.current.v[0] = clamp->resistMax.goal.v[0];
    clamp->resistMax.current.v[1] = clamp->resistMax.goal.v[1];
    clamp->resistMin.start.v[0] = clamp->resistMin.goal.v[0];
    clamp->resistMin.start.v[1] = clamp->resistMin.goal.v[1];
    clamp->resistMax.start.v[0] = clamp->resistMax.goal.v[0];
    clamp->resistMax.start.v[1] = clamp->resistMax.goal.v[1];
  }
  *(_QWORD *)&clamp->accelTime = 0i64;
  clamp->totalTime = 0.0;
}

/*
==============
G_SwapLinkedEntities
==============
*/
void G_SwapLinkedEntities(gentity_s *entA, gentity_s *entB)
{
  gentity_s *tagChildren; 

  if ( !entA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1481, ASSERT_TYPE_ASSERT, "( entA )", (const char *)&queryFormat, "entA") )
    __debugbreak();
  if ( !entB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1482, ASSERT_TYPE_ASSERT, "( entB )", (const char *)&queryFormat, "entB") )
    __debugbreak();
  tagChildren = entB->tagChildren;
  entB->tagChildren = entA->tagChildren;
  entA->tagChildren = tagChildren;
  G_FixLinkedChildren(entA);
  G_FixLinkedChildren(entB);
}

/*
==============
G_TransferLinkedEntities
==============
*/
void G_TransferLinkedEntities(gentity_s *from, gentity_s *to)
{
  GUtils *v4; 
  int v5; 
  gentity_s *tagChildren; 
  int i; 

  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v4 = GUtils::ms_gUtils;
  v5 = SV_Game_DObjExists(to);
  tagChildren = from->tagChildren;
  for ( i = v5; tagChildren; tagChildren = from->tagChildren )
  {
    if ( !tagChildren->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1446, ASSERT_TYPE_ASSERT, "(child->tagInfo)", (const char *)&queryFormat, "child->tagInfo") )
      __debugbreak();
    from->tagChildren = tagChildren->tagInfo->next;
    tagChildren->tagInfo->parent = to;
    tagChildren->tagInfo->next = to->tagChildren;
    to->tagChildren = tagChildren;
    G_UpdateTagInfo(tagChildren, i);
    v4->EntTagInfoChanged(v4, tagChildren);
  }
}

/*
==============
G_UpdateGroundTilt
==============
*/
void G_UpdateGroundTilt(gclient_s *client)
{
  __int64 groundTiltEntNum; 
  gentity_s *v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 960, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
    __debugbreak();
  groundTiltEntNum = client->groundTiltEntNum;
  if ( (_DWORD)groundTiltEntNum == 2047 )
  {
    *(_QWORD *)client->ps.groundTiltAngles.v = 0i64;
    client->ps.groundTiltAngles.v[2] = 0.0;
  }
  else
  {
    v3 = &g_entities[groundTiltEntNum];
    if ( G_IsEntityInUse(groundTiltEntNum) )
    {
      client->ps.groundTiltAngles.v[0] = v3->r.currentAngles.v[0];
      client->ps.groundTiltAngles.v[1] = v3->r.currentAngles.v[1];
      client->ps.groundTiltAngles.v[2] = v3->r.currentAngles.v[2];
    }
  }
}

/*
==============
G_UpdateLinkInfoForClients
==============
*/
void G_UpdateLinkInfoForClients(gentity_s *ent)
{
  entityType_s eType; 
  clientLinkInfo_t clientLinkInfo; 
  clientLinkInfo_t v4; 
  playerState_s *EntityPlayerState; 
  const dvar_t *v6; 
  const playerState_s *v7; 
  const playerState_s *v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  gentity_s *parent; 
  EntityTagInfo *tagInfo; 
  clientLinkInfo_t v14; 
  bool hasLinkedRotation; 
  EntityTagInfo *v16; 
  TagInfoUnion *p_extraDataUnion; 
  int number; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  EntityTagInfo *v23; 
  float v24; 
  tmat43_t<vec3_t> *p_axis; 
  float v26; 
  float v27; 
  int *v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  __int64 v38; 
  int v39[2]; 
  int v40[8]; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v42; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> out; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1548, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  eType = ent->s.eType;
  if ( eType == ET_SCRIPTMOVER || eType == ET_PLANE )
  {
    clientLinkInfo = ent->s.clientLinkInfo;
    if ( ent->tagChildren )
      v4 = (clientLinkInfo_t)(*(_DWORD *)&clientLinkInfo | 0x80000);
    else
      v4 = (clientLinkInfo_t)(*(_DWORD *)&clientLinkInfo & 0xFFF7FFFF);
    ent->s.clientLinkInfo = v4;
  }
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( EntityPlayerState && (EntityPlayerState->linkFlags.m_flags[0] & 4) != 0 )
    *(_DWORD *)&ent->s.clientLinkInfo |= 0x200000u;
  else
    *(_DWORD *)&ent->s.clientLinkInfo &= ~0x200000u;
  if ( ent->tagInfo && !ent->client )
  {
    v6 = DCONST_DVARMPBOOL_useparentlink;
    if ( !DCONST_DVARMPBOOL_useparentlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useparentlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      goto LABEL_91;
  }
  v7 = G_GetEntityPlayerState(ent);
  v8 = v7;
  v9 = v7 && BG_IsScriptedSceneAnimFlagEnabled(v7);
  v10 = v8 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v8->otherFlags, ACTIVE, 0x1Bu);
  v11 = v8 && (v8->linkFlags.m_flags[0] & 4) != 0;
  if ( (v9 || v10 || v11) && ent->tagInfo )
  {
LABEL_91:
    if ( !ent->tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1570, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent)", (const char *)&queryFormat, "ent->tagInfo->parent") )
      __debugbreak();
    parent = ent->tagInfo->parent;
    parent->r.svFlags &= ~1u;
    tagInfo = ent->tagInfo;
    if ( tagInfo->name )
    {
      if ( tagInfo->index >= 0x100u )
      {
        LODWORD(v38) = 256;
        LODWORD(v37) = tagInfo->index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1585, ASSERT_TYPE_ASSERT, "(unsigned)( ent->tagInfo->index ) < (unsigned)( (1<<8) )", "ent->tagInfo->index doesn't index BONEINDEX_COUNT\n\t%i not in [0, %i)", v37, v38) )
          __debugbreak();
      }
      *(_DWORD *)&ent->s.clientLinkInfo ^= (*(_DWORD *)&ent->s.clientLinkInfo ^ (ent->tagInfo->index << 11)) & 0x7F800;
      v14 = (clientLinkInfo_t)(*(_DWORD *)&ent->s.clientLinkInfo & 0xFFEFFFFF);
    }
    else
    {
      if ( tagInfo->index != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1578, ASSERT_TYPE_ASSERT, "( ent->tagInfo->index == -1 )", (const char *)&queryFormat, "ent->tagInfo->index == -1") )
        __debugbreak();
      *(_DWORD *)&ent->s.clientLinkInfo &= 0xFFF807FF;
      v14 = (clientLinkInfo_t)(*(_DWORD *)&ent->s.clientLinkInfo | 0x100000);
    }
    ent->s.clientLinkInfo = v14;
    hasLinkedRotation = 0;
    if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) )
    {
      v16 = ent->tagInfo;
      if ( !v16->animScriptedDataInUse )
      {
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 59, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
          __debugbreak();
        if ( ent->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 60, ASSERT_TYPE_ASSERT, "(!ent->tagInfo->animScriptedDataInUse)", "%s\n\tLinked rotation data is not valid on linked entities that are animscripted.  They share the same memory space.\n", "!ent->tagInfo->animScriptedDataInUse") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 61, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ))", "%s\n\tLinked rotation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
          __debugbreak();
        p_extraDataUnion = &ent->tagInfo->extraDataUnion;
        if ( ent->tagInfo == (EntityTagInfo *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1594, ASSERT_TYPE_ASSERT, "( linkedRotationData )", (const char *)&queryFormat, "linkedRotationData") )
          __debugbreak();
        hasLinkedRotation = p_extraDataUnion->linkedRotation.hasLinkedRotation;
      }
    }
    number = (unsigned __int16)parent->s.number;
    v19 = 0;
    LOWORD(number) = number + 1;
    *(_DWORD *)&ent->s.clientLinkInfo ^= (*(_DWORD *)&ent->s.clientLinkInfo ^ number) & 0x7FF;
    if ( (ent->flags.m_flags[0] & 0x400) != 0 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1605, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES )") )
        __debugbreak();
      ent->s.lerp.apos.trType = TR_LINKED;
      ent->s.lerp.pos.trType = TR_LINKED;
      if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( ent->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
      {
        v39[0] = SLODWORD(vec3_origin.v[0]);
        if ( (LODWORD(vec3_origin.v[0]) & 0x7F800000) == 2139095040 || (v39[0] = SLODWORD(vec3_origin.v[1]), (LODWORD(vec3_origin.v[1]) & 0x7F800000) == 2139095040) || (v39[0] = SLODWORD(vec3_origin.v[2]), (LODWORD(vec3_origin.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v20 = LODWORD(vec3_origin.v[0]) ^ ~s_trbase_aab_X;
        v21 = v20 ^ s_trbase_aab_Y ^ LODWORD(vec3_origin.v[1]);
        v22 = v21 ^ s_trbase_aab_Z ^ LODWORD(vec3_origin.v[2]);
        LODWORD(ent->s.lerp.pos.trBase.v[1]) = v21;
        LODWORD(ent->s.lerp.pos.trBase.v[2]) = v22;
        LODWORD(ent->s.lerp.pos.trBase.v[0]) = v20;
        memset(v39, 0, sizeof(v39));
      }
      else
      {
        ent->s.lerp.pos.trBase = vec3_origin;
      }
      *(_QWORD *)ent->s.lerp.apos.trBase.v = 0i64;
      ent->s.lerp.apos.trBase.v[2] = 0.0;
    }
    if ( hasLinkedRotation || (v23 = ent->tagInfo, v23->collisionPhysics) )
    {
      G_CalcTagParentAxis(ent, &parentAxis);
      AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      MatrixInverseOrthogonal43(&parentAxis, &out);
      v26 = ent->r.currentOrigin.v[1];
      axis.m[3].v[0] = ent->r.currentOrigin.v[0];
      axis.m[3].v[2] = ent->r.currentOrigin.v[2];
      axis.m[3].v[1] = v26;
      MatrixMultiply43(&axis, &out, &v42);
      v27 = v42.m[3].v[1];
      ent->s.lerp.pos.trDelta.v[0] = v42.m[3].v[0];
      ent->s.lerp.pos.trDelta.v[2] = v42.m[3].v[2];
      ent->s.lerp.pos.trDelta.v[1] = v27;
      p_axis = &v42;
    }
    else
    {
      ent->s.lerp.pos.trDelta.v[0] = v23->axis.m[3].v[0];
      ent->s.lerp.pos.trDelta.v[1] = v23->axis.m[3].v[1];
      v24 = v23->axis.m[3].v[2];
      p_axis = &v23->axis;
      ent->s.lerp.pos.trDelta.v[2] = v24;
    }
    AxisToAngles((const tmat33_t<vec3_t> *)p_axis, &ent->s.lerp.apos.trDelta);
    v28 = v40;
    v29 = parent->clientMask.array[1] & ~ent->clientMask.array[1];
    v30 = parent->clientMask.array[3] & ~ent->clientMask.array[3];
    v31 = parent->clientMask.array[4] & ~ent->clientMask.array[4];
    v32 = parent->clientMask.array[5] & ~ent->clientMask.array[5];
    v33 = parent->clientMask.array[2] & ~ent->clientMask.array[2];
    v34 = parent->clientMask.array[0];
    v35 = v34 & ~ent->clientMask.array[0];
    v36 = parent->clientMask.array[6] & ~ent->clientMask.array[6];
    v40[6] = v36;
    v40[0] = v35;
    v40[1] = v29;
    v40[2] = v33;
    v40[3] = v30;
    v40[4] = v31;
    v40[5] = v32;
    while ( !*v28 )
    {
      ++v19;
      ++v28;
      if ( v19 >= 7 )
        return;
    }
    parent->clientMask.array[1] &= ~v29;
    parent->clientMask.array[0] = v34 & ~v35;
    parent->clientMask.array[2] &= ~v33;
    parent->clientMask.array[3] &= ~v30;
    parent->clientMask.array[4] &= ~v31;
    parent->clientMask.array[5] &= ~v32;
    parent->clientMask.array[6] &= ~v36;
  }
  else
  {
    *(_DWORD *)&ent->s.clientLinkInfo &= 0xFFFFF800;
  }
}

/*
==============
G_UpdateTagInfo
==============
*/
void G_UpdateTagInfo(gentity_s *ent, int bParentHasDObj)
{
  EntityTagInfo *tagInfo; 
  scr_string_t name; 
  GUtils *v6; 
  int BoneIndex; 

  Profile_Begin(312);
  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 616, ASSERT_TYPE_ASSERT, "(tagInfo)", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  name = tagInfo->name;
  v6 = GUtils::ms_gUtils;
  if ( name )
  {
    if ( bParentHasDObj && (BoneIndex = SV_Game_DObjGetBoneIndex(tagInfo->parent, name), BoneIndex >= 0) )
    {
      if ( tagInfo->index != BoneIndex )
      {
        tagInfo->index = BoneIndex;
LABEL_19:
        v6->EntTagInfoChanged(v6, ent);
      }
    }
    else
    {
      if ( tagInfo->index != -1 )
      {
        Scr_SetString(&tagInfo->name, (scr_string_t)0);
        tagInfo->index = -1;
        v6->EntTagInfoChanged(v6, ent);
      }
      Profile_Begin(311);
      if ( ent->tagInfo )
        EntUnlink_Internal(ent, 0);
      Profile_EndInternal(NULL);
    }
  }
  else if ( tagInfo->index != -1 )
  {
    tagInfo->index = -1;
    goto LABEL_19;
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_UpdateTagInfoOfChildren
==============
*/
void G_UpdateTagInfoOfChildren(gentity_s *parent, int bHasDObj)
{
  gentity_s *tagChildren; 
  gentity_s *next; 

  Profile_Begin(308);
  tagChildren = parent->tagChildren;
  if ( tagChildren )
  {
    do
    {
      next = tagChildren->tagInfo->next;
      G_UpdateTagInfo(tagChildren, bHasDObj);
      tagChildren = next;
    }
    while ( next );
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_UpdateViewAngleClamp
==============
*/
void G_UpdateViewAngleClamp(gclient_s *client, const vec3_t *worldAnglesCenter)
{
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 950, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  BG_UpdateViewAngleClamp((float)level.time * 0.001, worldAnglesCenter, &client->link_viewClamp, &client->ps);
}

/*
==============
G_VerifyLinkedMoveTarget
==============
*/
_BOOL8 G_VerifyLinkedMoveTarget(const gentity_s *ent, const vec3_t *targetOrigin, const int contentMask)
{
  float v7; 
  int number; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  Bounds bounds; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 843, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo->collisionPhysics )
    return 1i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 849, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
    __debugbreak();
  v7 = ent->r.box.halfSize.v[0];
  number = ent->s.number;
  bounds.halfSize.v[1] = ent->r.box.halfSize.v[1];
  v9 = ent->r.box.midPoint.v[1];
  bounds.halfSize.v[0] = v7;
  v10 = ent->r.box.midPoint.v[0];
  bounds.midPoint.v[1] = v9;
  v11 = ent->r.box.halfSize.v[2];
  bounds.midPoint.v[0] = v10;
  v12 = ent->r.box.midPoint.v[2];
  bounds.halfSize.v[2] = v11 * 0.5;
  bounds.midPoint.v[2] = v12;
  G_Main_TraceCapsule(&results, &ent->r.currentOrigin, targetOrigin, &bounds, number, contentMask);
  return results.hitType == TRACE_HITTYPE_BEGIN;
}

/*
==============
SetPlayerFixedLinkOrigin
==============
*/
void SetPlayerFixedLinkOrigin(gentity_s *ent, const tmat43_t<vec3_t> *worldAxis, float lerpFraction)
{
  gclient_s *client; 
  playerState_s *EntityPlayerState; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  GHandler *Handler; 
  float viewHeightCurrent; 
  int v18; 
  int number; 
  float v20; 
  BgStepSlideMove v21; 
  int v22; 
  vec3_t origin; 
  __m128 v24; 
  __int64 v25; 
  vec3_t out; 
  vec3_t in1; 
  int v28[4]; 
  WorldUpReferenceFrame v29; 
  tmat43_t<vec3_t> dst; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "SetPlayerFixedLinkOrigin");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1241, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( !ent->client && !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1242, ASSERT_TYPE_ASSERT, "(ent->client || ent->agent)", (const char *)&queryFormat, "ent->client || ent->agent") )
    __debugbreak();
  client = ent->client;
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1246, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v8 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(level.time + level.frameDuration)).m128_f32[0] * 0.001) - ent->c.mover.angle.decelTime;
  v9 = (float)(v8 * ent->c.mover.pos.pos1.v[0]) + ent->c.mover.pos.decelTime;
  v10 = (float)(v8 * ent->c.mover.pos.pos1.v[1]) + ent->c.mover.pos.speed;
  v11 = (float)(v8 * ent->c.mover.pos.pos1.v[2]) + ent->c.mover.pos.midTime;
  if ( !client )
    goto LABEL_30;
  if ( !client->link_rotationMovesEyePos )
  {
    if ( client->link_doCollision )
    {
      *(float *)v28 = worldAxis->m[3].v[0] - ent->r.currentOrigin.v[0];
      *(float *)&v28[1] = worldAxis->m[3].v[1] - ent->r.currentOrigin.v[1];
      *(float *)&v28[2] = worldAxis->m[3].v[2] - ent->r.currentOrigin.v[2];
      v24 = *(__m128 *)ent->r.box.midPoint.v;
      v25 = *(_QWORD *)&ent->r.box.halfSize.y;
      if ( _mm_shuffle_ps(v24, v24, 255).m128_f32[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
        __debugbreak();
      if ( *(float *)&v25 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
        __debugbreak();
      if ( *((float *)&v25 + 1) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
        __debugbreak();
      _XMM0 = (unsigned int)v25;
      __asm { vmaxss  xmm1, xmm0, dword ptr [rbp+0F0h+var_120+0Ch] }
      v24.m128_f32[3] = *(float *)&_XMM1;
      *(float *)&v25 = *(float *)&_XMM1;
      _XMM0 = HIDWORD(v25);
      __asm { vmaxss  xmm1, xmm0, xmm1 }
      *((float *)&v25 + 1) = *(float *)&_XMM1;
      v18 = ent->clipmask & 0xFFFFBFFF;
      number = ent->s.number;
      v21.__vftable = (BgStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
      v21.deltaTime = FLOAT_1_0;
      v21.origin = &ent->r.currentOrigin;
      v21.velocity = (vec3_t *)v28;
      v21.bounds = (const Bounds *)&v24;
      *(_WORD *)&v21.gravity = 0;
      v21.zerog = 0;
      v21.inSolid = NULL;
      v21.passEntityCount = 0;
      v21.clipMask = v18;
      v22 = 0;
      if ( number != 2047 )
      {
        v21.passEntities[0] = number;
        v21.passEntityCount = 1;
      }
      BgStepSlideMove::StepSlideMove(&v21);
      BgStepSlideMove::~BgStepSlideMove(&v21);
      v20 = (float)((float)(ent->r.currentOrigin.v[0] - v9) * lerpFraction) + v9;
      origin.v[0] = v20;
      origin.v[1] = (float)((float)(ent->r.currentOrigin.v[1] - v10) * lerpFraction) + v10;
      origin.v[2] = (float)((float)(ent->r.currentOrigin.v[2] - v11) * lerpFraction) + v11;
      goto LABEL_31;
    }
LABEL_30:
    v20 = (float)((float)(worldAxis->m[3].v[0] - v9) * lerpFraction) + v9;
    origin.v[0] = v20;
    origin.v[1] = (float)((float)(worldAxis->m[3].v[1] - v10) * lerpFraction) + v10;
    origin.v[2] = (float)((float)(worldAxis->m[3].v[2] - v11) * lerpFraction) + v11;
    if ( !client )
      goto LABEL_32;
LABEL_31:
    client->linkModelOrigin.v[0] = v20;
    client->linkModelOrigin.v[1] = origin.v[1];
    client->linkModelOrigin.v[2] = origin.v[2];
    goto LABEL_32;
  }
  MatrixCopy43(worldAxis, &dst);
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v29, EntityPlayerState, Handler);
  WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v29, (tmat33_t<vec3_t> *)&dst);
  viewHeightCurrent = EntityPlayerState->viewHeightCurrent;
  in1.v[0] = 0.0;
  in1.v[1] = 0.0;
  in1.v[2] = viewHeightCurrent;
  MatrixTransformVector43(&in1, &dst, &out);
  WorldUpReferenceFrame::AddUpContribution(&v29, COERCE_FLOAT(LODWORD(EntityPlayerState->viewHeightCurrent) ^ _xmm), &out);
  origin.v[0] = (float)((float)(out.v[0] - v9) * lerpFraction) + v9;
  origin.v[1] = (float)((float)(out.v[1] - v10) * lerpFraction) + v10;
  origin.v[2] = (float)((float)(out.v[2] - v11) * lerpFraction) + v11;
  client->linkModelOrigin.v[0] = (float)((float)(worldAxis->m[3].v[0] - v9) * lerpFraction) + v9;
  client->linkModelOrigin.v[1] = (float)((float)(worldAxis->m[3].v[1] - v10) * lerpFraction) + v10;
  client->linkModelOrigin.v[2] = (float)((float)(worldAxis->m[3].v[2] - v11) * lerpFraction) + v11;
LABEL_32:
  G_SetOrigin(ent, &origin, 1, 1);
  ent->s.lerp.pos.trType = TR_INTERPOLATE;
  Sys_ProfEndNamedEvent();
}

/*
==============
SetPlayerFixedLinkViewAngles
==============
*/
void SetPlayerFixedLinkViewAngles(gentity_s *ent, const tmat33_t<vec3_t> *worldAxis, float lerpFraction)
{
  gclient_s *client; 
  playerState_s *EntityPlayerState; 
  int v7; 
  float *v8; 
  const dvar_t *v9; 
  unsigned int v10; 
  float v12; 
  float v14; 
  unsigned int v15; 
  float *v; 
  float v18; 
  float v20; 
  __int64 v21; 
  __int64 v22; 
  vec3_t v23; 
  vec4_t out; 
  vec3_t angles; 
  vec4_t qb; 
  vec4_t in1; 
  vec4_t qa; 
  vec4_t quat; 
  vec4_t v30; 
  vec4_t v31; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v34; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1133, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1134, ASSERT_TYPE_ASSERT, "(ent->client || ent->agent)", (const char *)&queryFormat, "ent->client || ent->agent") )
    __debugbreak();
  client = ent->client;
  EntityPlayerState = G_GetEntityPlayerState(ent);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1138, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  AxisToAngles(worldAxis, &angles);
  if ( client )
    BG_UpdateViewAngleClamp((float)level.time * 0.001, &angles, &client->link_viewClamp, &client->ps);
  AxisToQuat(worldAxis, &out);
  if ( !client || (client->linkModelAngles = angles, (EntityPlayerState->linkFlags.m_flags[0] & 1) != 0) )
  {
    QuatLerp(&ent->c.blend.viewQuat, &out, lerpFraction, &in1);
    QuatToAxis(&in1, &axis);
    AxisToAngles(&axis, &v23);
    EntityPlayerState->linkAngles = v23;
    v15 = 0;
    _XMM7 = 0i64;
    v = EntityPlayerState->viewangles.v;
    do
    {
      if ( v15 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v18 = *v;
      if ( v15 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      v20 = (float)((float)((float)(*(float *)((char *)v + (char *)&v23 - (char *)&EntityPlayerState->delta_angles - 292) - v18) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( v15 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      *(v - 73) = v20 + *(v - 73);
      if ( v15 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      *v = v20 + *v;
      ++v;
      ++v15;
    }
    while ( (int)v15 < 2 );
  }
  else
  {
    if ( client->prevLinkAnglesSet )
    {
      QuatMultiply(&client->prevLinkedInvQuat, &out, &qb);
      v7 = _xmm;
      client->prevLinkedInvQuat.v[0] = COERCE_FLOAT(LODWORD(out.v[0]) ^ _xmm);
      client->prevLinkedInvQuat.v[1] = COERCE_FLOAT(LODWORD(out.v[1]) ^ _xmm);
      client->prevLinkedInvQuat.v[2] = COERCE_FLOAT(LODWORD(out.v[2]) ^ _xmm);
      client->prevLinkedInvQuat.v[3] = out.v[3];
      qa = (vec4_t)_xmm;
      QuatLerp(&qa, &qb, client->linkAnglesFrac, &qb);
    }
    else
    {
      v7 = _xmm;
      client->prevLinkAnglesSet = 1;
      client->prevLinkedInvQuat.v[0] = COERCE_FLOAT(LODWORD(out.v[0]) ^ _xmm);
      client->prevLinkedInvQuat.v[1] = COERCE_FLOAT(LODWORD(out.v[1]) ^ _xmm);
      client->prevLinkedInvQuat.v[2] = COERCE_FLOAT(LODWORD(out.v[2]) ^ _xmm);
      client->prevLinkedInvQuat.v[3] = out.v[3];
      qb = (vec4_t)_xmm;
    }
    v8 = EntityPlayerState->viewangles.v;
    AnglesToAxis(&EntityPlayerState->viewangles, &axis);
    AxisToQuat(&axis, &in1);
    QuatMultiply(&in1, &qb, &quat);
    QuatToAxis(&quat, &v34);
    AxisToAngles(&v34, &v23);
    v9 = DCONST_DVARMPFLT_player_view_pitch_up;
    if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( *v8 < -90.0 && v9->current.value > 85.0 )
    {
      v23.v[1] = v23.v[1] + 180.0;
      LODWORD(v23.v[0]) = COERCE_UNSIGNED_INT(v23.v[0] - 180.0) ^ v7;
    }
    v10 = 0;
    _XMM7 = 0i64;
    do
    {
      if ( v10 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v12 = *v8;
      if ( v10 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      v14 = (float)((float)((float)(*(float *)((char *)v8 + (char *)&v23 - (char *)&EntityPlayerState->delta_angles - 292) - v12) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      if ( v10 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      *(v8 - 73) = v14 + *(v8 - 73);
      if ( v10 >= 3 )
      {
        LODWORD(v22) = 3;
        LODWORD(v21) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      *v8 = v14 + *v8;
      ++v8;
      ++v10;
    }
    while ( (int)v10 < 2 );
    if ( client->link_useTagAnglesForViewAngles )
    {
      EntityPlayerState->linkAngles = angles;
    }
    else
    {
      AnglesToAxis(&EntityPlayerState->linkAngles, &mat);
      AxisToQuat(&mat, &v30);
      QuatMultiply(&v30, &qb, &v31);
      QuatToAxis(&v31, &mat);
      AxisToAngles(&mat, &EntityPlayerState->linkAngles);
    }
  }
}

