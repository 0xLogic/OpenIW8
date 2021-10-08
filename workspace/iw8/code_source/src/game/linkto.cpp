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
  EntityTagInfo *tagInfo; 
  playerState_s *EntityPlayerState; 
  EntityAnimScript *scripted; 
  playerState_s *ps; 
  TagInfoAnimScripted *TagInfoAnimScripted; 
  trajectory_t_secure *p_pos; 
  unsigned int v32; 
  unsigned int eType; 
  int v34; 
  GUtils *Utils; 
  gentity_s *parent; 
  GHandler *Handler; 
  GHandler *v38; 
  GWeaponMap *Instance; 
  gentity_s *tagChildren; 
  gentity_s *v44; 
  gentity_s *next; 
  GUtils *v46; 
  gclient_s *client; 
  const Bounds *Bounds; 
  bool v49; 
  char *fmt; 
  vec3_t *parentAngles; 
  int skipEntities[2]; 
  EntityTagInfo *v64; 
  _DWORD v65[4]; 
  tmat33_t<vec3_t> axis; 
  int v67; 
  tmat43_t<vec3_t> out; 
  WorldUpReferenceFrame in1; 
  tmat43_t<vec3_t> src; 
  trace_t parentAxis; 

  _RDI = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "EntUnlink_Internal");
  tagInfo = _RDI->tagInfo;
  v64 = tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 145, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(_RDI);
  scripted = _RDI->scripted;
  ps = EntityPlayerState;
  *(_QWORD *)skipEntities = EntityPlayerState;
  if ( scripted )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+1F0h+var_38+8], xmm6
      vmovaps [rsp+1F0h+var_48+8], xmm7
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 158, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 753, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    G_CalcTagParentAxis(_RDI, (tmat43_t<vec3_t> *)&parentAxis);
    TagInfoAnimScripted = G_GetTagInfoAnimScripted(_RDI);
    MatrixMultiply43(&TagInfoAnimScripted->parentInvAxis, (const tmat43_t<vec3_t> *)&parentAxis, &out);
    MatrixTranspose((const tmat33_t<vec3_t> *)&out, (tmat33_t<vec3_t> *)&in1);
    MatrixMultiply43(&scripted->axis, &out, &src);
    MatrixCopy43(&src, &scripted->axis);
    _R14 = &scripted->originError;
    __asm
    {
      vmovss  xmm5, dword ptr [r14]
      vmovss  xmm6, dword ptr [r14+4]
      vmovss  xmm7, dword ptr [r14+8]
      vmovss  [rbp+0F0h+var_144], xmm5
      vmovss  [rbp+0F0h+var_140], xmm6
      vmovss  [rbp+0F0h+var_13C], xmm7
    }
    if ( &v67 == (int *)&scripted->originError )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, [rbp+0F0h+var_144]
        vmovss  xmm6, [rbp+0F0h+var_140]
        vmovss  xmm7, [rbp+0F0h+var_13C]
      }
    }
    __asm
    {
      vmulss  xmm3, xmm6, dword ptr [rbp+0F0h+out+0Ch]
      vmulss  xmm2, xmm5, dword ptr [rbp+0F0h+out]
      vmulss  xmm1, xmm7, dword ptr [rbp+0F0h+out+18h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+0F0h+out+10h]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm7, dword ptr [rbp+0F0h+out+1Ch]
      vmovss  dword ptr [r14], xmm2
      vmulss  xmm2, xmm5, dword ptr [rbp+0F0h+out+4]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+0F0h+out+14h]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm7, dword ptr [rbp+0F0h+out+20h]
      vmovss  dword ptr [r14+4], xmm2
      vmulss  xmm2, xmm5, dword ptr [rbp+0F0h+out+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [r14+8], xmm2
    }
    AnglesToAxis(&scripted->anglesError, &axis);
    MatrixMultiply((const tmat33_t<vec3_t> *)&in1, &axis, (tmat33_t<vec3_t> *)&src);
    MatrixMultiply((const tmat33_t<vec3_t> *)&src, (const tmat33_t<vec3_t> *)&out, &axis);
    AxisToSignedAngles(&axis, &scripted->anglesError);
    __asm
    {
      vmovaps xmm7, [rsp+1F0h+var_48+8]
      vmovaps xmm6, xmmword ptr [rsp+1F0h+var_38+8]
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|0x80) )
    _RDI->s.lerp.eFlags.m_flags[0] ^= 4u;
  p_pos = &_RDI->s.lerp.pos;
  if ( _RDI == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  v32 = p_pos->trType - 23;
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
    G_ScrMover_ClearAnimatedTrajectory(_RDI);
  G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
  eType = (unsigned __int16)_RDI->s.eType;
  if ( (_WORD)eType == 4 )
    _RDI->s.groundEntityNum = 2047;
  if ( v32 > 5 )
  {
    if ( (unsigned __int16)eType <= 0x15u )
    {
      v34 = 2359300;
      if ( _bittest(&v34, eType) )
      {
        Utils = GUtils::GetUtils();
        Utils->UnlinkUpdateCorpse(Utils, _RDI);
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
    G_DrawDebug_PlayerVignettePrint(_RDI, "unlinking player", 4u);
    if ( BG_IsPlayerZeroG(ps) )
    {
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&in1, ps, Handler);
      v38 = GHandler::getHandler();
      Instance = GWeaponMap::GetInstance();
      WorldUpReferenceFrame::Unlink(&in1, ps, Instance, v38, 0, NULL);
      G_SetOrigin(_RDI, &ps->origin, 1, 1);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1D8h]
      vmovss  dword ptr [rsp+78h], xmm0
      vmovss  xmm1, dword ptr [rsi+1DCh]
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+7Ch], xmm1
      vmovss  [rbp+0F0h+var_170], xmm0
    }
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    GUtils::ms_gUtils->SetPlayerViewAngles(GUtils::ms_gUtils, _RDI, (const vec3_t *)v65);
    _RDI->r.currentAngles.v[0] = 0.0;
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
  v44 = NULL;
  if ( tagChildren != _RDI )
  {
    do
    {
      if ( !tagChildren->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 248, ASSERT_TYPE_ASSERT, "(next->tagInfo)", (const char *)&queryFormat, "next->tagInfo") )
        __debugbreak();
      v44 = tagChildren;
      tagChildren = tagChildren->tagInfo->next;
      if ( !tagChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 251, ASSERT_TYPE_ASSERT, "(next)", (const char *)&queryFormat, "next") )
        __debugbreak();
    }
    while ( tagChildren != _RDI );
    ps = *(playerState_s **)skipEntities;
    p_pos = &_RDI->s.lerp.pos;
    tagInfo = v64;
  }
  next = tagInfo->next;
  if ( v44 )
    v44->tagInfo->next = next;
  else
    parent->tagChildren = next;
  _RDI->tagInfo = NULL;
  if ( (_RDI->flags.m_flags[0] & 0x400) != 0 )
  {
    if ( p_pos->trType == TR_LINKED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 263, ASSERT_TYPE_ASSERT, "(ent->s.lerp.pos.trType != TR_LINKED)", (const char *)&queryFormat, "ent->s.lerp.pos.trType != TR_LINKED") )
      __debugbreak();
    if ( _RDI->s.lerp.apos.trType == TR_LINKED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 264, ASSERT_TYPE_ASSERT, "(ent->s.lerp.apos.trType != TR_LINKED)", (const char *)&queryFormat, "ent->s.lerp.apos.trType != TR_LINKED") )
      __debugbreak();
  }
  if ( ps )
  {
    if ( (ps->linkFlags.m_flags[0] & 4) != 0 )
    {
      v46 = GUtils::GetUtils();
      v46->SetPlayerViewAngles(v46, _RDI, &ps->linkWeaponAngles);
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
  GUtils::ms_gUtils->EntTagInfoChanged(GUtils::ms_gUtils, _RDI);
  Scr_SetString(&tagInfo->name, (scr_string_t)0);
  ntl::nxheap::free(&s_tagInfoHeap.m_heap, tagInfo);
  client = _RDI->client;
  if ( client )
  {
    if ( !relinking && !s_allowEntUnlinkInCollision )
    {
      skipEntities[0] = _RDI->s.number;
      Bounds = BG_Suit_GetBounds(client->ps.suitIndex, PM_EFF_STANCE_DEFAULT);
      PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &parentAxis, &_RDI->r.currentOrigin, &_RDI->r.currentOrigin, Bounds, skipEntities, 1, 81937, ps, 0, NULL, NULL);
      v49 = !parentAxis.startsolid;
      if ( parentAxis.startsolid || (v49 = !parentAxis.allsolid, parentAxis.allsolid) )
      {
        __asm
        {
          vmovss  xmm0, [rbp+0F0h+var_68]
          vcomiss xmm0, cs:__real@3c23d70a
        }
        if ( !v49 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rdi+134h]
            vmovss  xmm2, dword ptr [rdi+130h]
            vmovss  xmm1, dword ptr [rdi+138h]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm0, xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+1F0h+parentAngles], xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+1F0h+fmt], xmm1
          }
          Com_PrintWarning(24, "Unlinking the player in solid at (%f, %f, %f) with penetration depth of %.2f\n", _R8, _R9, fmt, parentAngles);
        }
      }
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
  char v3; 
  float *v9; 
  int v10; 
  signed __int64 v11; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rcx]
  }
  if ( !v3 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rcx+4]
  }
  if ( !v3 )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rcx+8]
  }
  if ( v3 )
  {
    v9 = &relativeAxis->m[0].v[1];
    v10 = 0;
    v11 = (char *)worldAxis - (char *)relativeAxis;
    v12 = 1;
    do
    {
      if ( !v12 )
      {
        LODWORD(v15) = 3;
        LODWORD(v13) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v13, v15) )
          __debugbreak();
        LODWORD(v16) = 3;
        LODWORD(v14) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v14, v16) )
          __debugbreak();
      }
      ++v10;
      *(v9 - 1) = *(float *)((char *)v9 + v11 - 4);
      *v9 = *(float *)((char *)v9 + v11);
      v9[1] = *(float *)((char *)v9 + v11 + 4);
      v9 += 3;
      v12 = (unsigned int)v10 < 3;
    }
    while ( v10 < 3 );
  }
  else
  {
LABEL_12:
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
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> parentAxis; 

  _RBX = ent;
  G_CalcTagParentAxis(ent, &parentAxis);
  AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  tagInfo = _RBX->tagInfo;
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
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  [rsp+0D8h+var_84], xmm0
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  [rsp+0D8h+var_7C], xmm0
      vmovss  [rsp+0D8h+var_80], xmm1
    }
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
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v25; 
  tmat43_t<vec3_t> parentAxis; 
  char v28; 

  __asm { vmovaps [rsp+108h+var_28], xmm9 }
  _RDI = outWorldAngles;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 769, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 770, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  AnglesToAxis(inLocalAngles, &axis);
  MatrixMultiply((const tmat33_t<vec3_t> *)&ent->tagInfo->axis, (const tmat33_t<vec3_t> *)&parentAxis, &out);
  MatrixMultiply(&axis, &out, &v25);
  AxisToAngles(&v25, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rdi+4]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+8]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm9, xmm2, 1
    vmovss  dword ptr [rdi+4], xmm0
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rdi+8], xmm1
  }
  _R11 = &v28;
  __asm { vmovaps xmm9, xmmword ptr [r11-10h] }
}

/*
==============
G_CalcTagConvertWorldToLocalAngles
==============
*/
void G_CalcTagConvertWorldToLocalAngles(gentity_s *ent, const vec3_t *inWorldAngles, vec3_t *outLocalAngles)
{
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v25; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> v27; 
  tmat43_t<vec3_t> out; 
  char v30; 

  __asm { vmovaps [rsp+168h+var_28], xmm9 }
  _RDI = outLocalAngles;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 793, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 794, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(ent, &parentAxis);
  MatrixInverseOrthogonal43(&parentAxis, &out);
  MatrixInverseOrthogonal43(&ent->tagInfo->axis, &v27);
  AnglesToAxis(inWorldAngles, &axis);
  MatrixMultiply((const tmat33_t<vec3_t> *)&out, (const tmat33_t<vec3_t> *)&v27, &in2);
  MatrixMultiply(&axis, &in2, &v25);
  AxisToAngles(&v25, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rdi+4]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+8]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm9, xmm2, 1
    vmovss  dword ptr [rdi+4], xmm0
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rdi+8], xmm1
  }
  _R11 = &v30;
  __asm { vmovaps xmm9, xmmword ptr [r11-10h] }
}

/*
==============
G_CalcTagParentAxis
==============
*/
void G_CalcTagParentAxis(gentity_s *ent, tmat43_t<vec3_t> *parentAxis)
{
  EntityTagInfo *tagInfo; 
  int v15; 
  bool v16; 
  gclient_s *client; 
  gclient_s *v18; 
  DObjAnimMat *v22; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  vec3_t outAngles; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 

  _RDI = parentAxis;
  Profile_Begin(419);
  tagInfo = ent->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 689, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  _RBX = tagInfo->parent;
  if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 692, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 694, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parent->r.currentOrigin )[0] ) && !IS_NAN( ( parent->r.currentOrigin )[1] ) && !IS_NAN( ( parent->r.currentOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parent->r.currentOrigin )[0] ) && !IS_NAN( ( parent->r.currentOrigin )[1] ) && !IS_NAN( ( parent->r.currentOrigin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+140h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+144h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
  {
LABEL_55:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 695, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parent->r.currentAngles )[0] ) && !IS_NAN( ( parent->r.currentAngles )[1] ) && !IS_NAN( ( parent->r.currentAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parent->r.currentAngles )[0] ) && !IS_NAN( ( parent->r.currentAngles )[1] ) && !IS_NAN( ( parent->r.currentAngles )[2] )") )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    G_Utils_GetAnglesWithWorldUp(_RBX, &outAngles);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+13Ch]
      vmovss  dword ptr [rsp+0D8h+outAngles], xmm0
      vmovss  xmm1, dword ptr [rbx+140h]
      vmovss  dword ptr [rsp+0D8h+outAngles+4], xmm1
      vmovss  xmm0, dword ptr [rbx+144h]
      vmovss  dword ptr [rsp+0D8h+outAngles+8], xmm0
    }
  }
  v15 = SV_Game_DObjExists(_RBX);
  v16 = v15 != 0;
  if ( !v15 && tagInfo->index >= 0 )
  {
    client = ent->client;
    if ( !client || !client->link_useBaseAnglesForViewClamp )
      Com_PrintError(15, "G_CalcTagParentAxis: Missing DObj for entity %d while trying to calculate parent axis, using entity basis. eType %d.\n", (unsigned int)ent->s.number, (unsigned int)ent->s.eType);
  }
  if ( !v16 || tagInfo->index < 0 || (v18 = ent->client) != NULL && v18->link_useBaseAnglesForViewClamp )
  {
    AnglesToAxis(&outAngles, (tmat33_t<vec3_t> *)_RDI);
    _RSI = &_RDI->m[3];
    _RDI->m[3].v[0] = _RBX->r.currentOrigin.v[0];
    _RDI->m[3].v[1] = _RBX->r.currentOrigin.v[1];
    _RDI->m[3].v[2] = _RBX->r.currentOrigin.v[2];
  }
  else
  {
    AnglesToAxis(&outAngles, (tmat33_t<vec3_t> *)&axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  [rsp+0D8h+var_6C], xmm0
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  [rsp+0D8h+var_68], xmm1
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  [rsp+0D8h+var_64], xmm0
    }
    G_Utils_DObjCalcBone(_RBX, tagInfo->index);
    v22 = &SV_Game_DObjGetMatrixArray(_RBX)[tagInfo->index];
    LocalConvertQuatToMat(v22, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, (tmat33_t<vec3_t> *)_RDI);
    _RSI = &_RDI->m[3];
    MatrixTransformVector43(&v22->trans, &axis, &_RDI->m[3]);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
  {
LABEL_56:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 740, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[0] )[0] ) && !IS_NAN( ( parentAxis[0] )[1] ) && !IS_NAN( ( parentAxis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[0] )[0] ) && !IS_NAN( ( parentAxis[0] )[1] ) && !IS_NAN( ( parentAxis[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
  {
LABEL_57:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 741, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[1] )[0] ) && !IS_NAN( ( parentAxis[1] )[1] ) && !IS_NAN( ( parentAxis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[1] )[0] ) && !IS_NAN( ( parentAxis[1] )[1] ) && !IS_NAN( ( parentAxis[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
  {
LABEL_58:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 742, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[2] )[0] ) && !IS_NAN( ( parentAxis[2] )[1] ) && !IS_NAN( ( parentAxis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[2] )[0] ) && !IS_NAN( ( parentAxis[2] )[1] ) && !IS_NAN( ( parentAxis[2] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v51 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v52 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  [rsp+0D8h+var_A8], xmm0
  }
  if ( (v53 & 0x7F800000) == 2139095040 )
  {
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 743, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentAxis[3] )[0] ) && !IS_NAN( ( parentAxis[3] )[1] ) && !IS_NAN( ( parentAxis[3] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentAxis[3] )[0] ) && !IS_NAN( ( parentAxis[3] )[1] ) && !IS_NAN( ( parentAxis[3] )[2] )") )
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
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000; scale
      vmovss  xmm1, cs:__real@42960000; y
      vmovss  xmm0, cs:__real@42480000; x
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorWhite, *(float *)&_XMM3, v1);
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
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> out; 

  _R14 = ent;
  Profile_Begin(310);
  if ( (unsigned int)EntLinkTo_Internal(_R14, parent, tagName, errorMessageSize, outErrorMessage) )
  {
    G_CalcTagParentAxis(_R14, &parentAxis);
    AnglesToAxis(&_R14->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
    tagInfo = _R14->tagInfo;
    if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 822, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
      __debugbreak();
    MatrixInverseOrthogonal43(&parentAxis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+130h]
      vmovss  xmm1, dword ptr [r14+134h]
      vmovss  [rsp+0F8h+var_A4], xmm0
      vmovss  xmm0, dword ptr [r14+138h]
      vmovss  [rsp+0F8h+var_9C], xmm0
      vmovss  [rsp+0F8h+var_A0], xmm1
    }
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
    _RBX = tagInfo->parent;
    if ( ent->client->link_useTagScriptedCamera || (LOBYTE(_RBX->s.lerp.u.vehicle.bodyPitch) & 0x40) != 0 )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_22(ServerDObjForEnt, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
        {
          G_Utils_GetAnglesWithWorldUp(_RBX, &outAngles);
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+13Ch]
            vmovss  dword ptr [rsp+0A8h+outAngles], xmm0
            vmovss  xmm1, dword ptr [rbx+140h]
            vmovss  dword ptr [rsp+0A8h+outAngles+4], xmm1
            vmovss  xmm0, dword ptr [rbx+144h]
            vmovss  dword ptr [rsp+0A8h+outAngles+8], xmm0
          }
        }
        AnglesToAxis(&outAngles, &axis);
        G_Utils_DObjCalcBone(_RBX, inOutIndex[0]);
        MatrixArray = SV_Game_DObjGetMatrixArray(_RBX);
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
  GHandler *v4; 
  vec3_t *p_groundTiltAngles; 
  GHandler *v6; 
  int time; 
  const BgHandler *v8; 
  gclient_s *client; 
  GWeaponMap *Instance; 
  gclient_s *v11; 
  gclient_s *v12; 
  int v16[4]; 
  vec3_t angles; 
  tmat43_t<vec3_t> parentAxis; 
  tmat33_t<vec3_t> relativeAxis; 
  WorldUpReferenceFrame v20; 

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
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v20, &ent->client->ps, Handler, 1);
  WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v20, (tmat33_t<vec3_t> *)&parentAxis);
  if ( Com_GameMode_SupportsFeature(WEAPON_MELEE) )
  {
    if ( ent->client->ps.groundRefEnt == 2047 || (v4 = GHandler::getHandler(), !v4->GetEntityAngles(v4, ent->client->ps.groundRefEnt, (vec3_t *)v16)) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+108h+var_C8], xmm0
        vmovss  [rsp+108h+var_C4], xmm0
        vmovss  [rsp+108h+var_C0], xmm0
      }
    }
    p_groundTiltAngles = (vec3_t *)v16;
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
    v6 = GHandler::getHandler();
    time = level.time;
    v8 = v6;
    client = ent->client;
    Instance = GWeaponMap::GetInstance();
    BG_ContextMount_Cancel(Instance, &client->ps, time, 1, v8, "player link angles set on server", 0);
  }
  v11 = ent->client;
  if ( v11->link_useTagAnglesForViewAngles )
  {
    AxisToAngles(&relativeAxis, &v11->ps.linkAngles);
    G_UpdateViewAngleClamp(ent->client, &ent->client->ps.linkAngles);
  }
  else
  {
    *(_QWORD *)v11->ps.linkAngles.v = 0i64;
    v11->ps.linkAngles.v[2] = 0.0;
    AxisToAngles(&relativeAxis, &angles);
    v12 = ent->client;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 950, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
      vmulss  xmm0, xmm0, cs:__real@3a83126f; currentTime
    }
    BG_UpdateViewAngleClamp(*(const float *)&_XMM0, &angles, &v12->link_viewClamp, &v12->ps);
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
  __int128 v2; 
  __int128 v3; 

  *((_QWORD *)&v2 + 1) = 204800i64;
  *(_QWORD *)&v2 = s_tagInfoHeapMem;
  ntl::nxheap::shutdown(&s_tagInfoHeap.m_heap);
  ntl::nxheap_region::shutdown(&s_tagInfoHeap.m_region);
  if ( s_tagInfoHeap.m_data.m_buffer )
  {
    if ( s_tagInfoHeap.m_data.m_buffer != s_tagInfoHeap.m_allocator.m_data.m_buffer && s_tagInfoHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    s_tagInfoHeap.m_data.m_buffer = NULL;
    s_tagInfoHeap.m_data.m_size = 0i64;
  }
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_tagInfoHeap.m_allocator.m_data.m_buffer, xmm0
  }
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
  *(_QWORD *)&v3 = s_tagInfoHeap.m_allocator.m_data.m_buffer;
  *((_QWORD *)&v3 + 1) = 204800i64;
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vmovups xmmword ptr cs:s_tagInfoHeap.baseclass_0.m_data.m_buffer, xmm0
  }
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
  int number; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> parentAxis; 
  trace_t results; 

  _RSI = outTargetOrigin;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 876, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( _RBX->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 877, ASSERT_TYPE_ASSERT, "( !ent->client )", (const char *)&queryFormat, "!ent->client") )
    __debugbreak();
  tagInfo = _RBX->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 864, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  G_CalcTagParentAxis(_RBX, &parentAxis);
  MatrixMultiply43(&tagInfo->axis, &parentAxis, &out);
  if ( !_RBX->tagInfo->collisionPhysics )
  {
    v10 = 1;
LABEL_16:
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+128h+out+24h]
      vmovss  xmm1, dword ptr [rsp+128h+out+28h]
      vmovss  dword ptr [rbx+130h], xmm0
      vmovss  xmm0, dword ptr [rsp+128h+out+2Ch]
      vmovss  dword ptr [rbx+138h], xmm0
      vmovss  dword ptr [rbx+134h], xmm1
    }
    goto LABEL_17;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 849, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+110h]
    vmovss  xmm0, dword ptr [rbx+10Ch]
  }
  number = _RBX->s.number;
  __asm
  {
    vmovss  dword ptr [rsp+128h+parentAxis+10h], xmm1
    vmovss  xmm1, dword ptr [rbx+104h]
    vmovss  dword ptr [rsp+128h+parentAxis+0Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+100h]
    vmovss  dword ptr [rsp+128h+parentAxis+4], xmm1
    vmovss  xmm1, dword ptr [rbx+114h]
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rsp+128h+parentAxis], xmm0
    vmovss  xmm0, dword ptr [rbx+108h]
    vmovss  dword ptr [rsp+128h+parentAxis+14h], xmm2
    vmovss  dword ptr [rsp+128h+parentAxis+8], xmm0
  }
  G_Main_TraceCapsule(&results, &_RBX->r.currentOrigin, &out.m[3], (const Bounds *)&parentAxis, number, contentMask);
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
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&out);
    __asm { vmovss  dword ptr [rbx+140h], xmm0 }
  }
  else
  {
    AxisToAngles((const tmat33_t<vec3_t> *)&out, &_RBX->r.currentAngles);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+out+24h]
    vmovss  xmm1, dword ptr [rsp+128h+out+28h]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsp+128h+out+2Ch]
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  dword ptr [rsi+4], xmm1
  }
  if ( warp )
    G_PhysicsObject_WarpToCurrentTransform(_RBX, 0);
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
  EntityTagInfo *v7; 
  const DObj *ServerDObjForEnt; 
  DObjAnimMat *MatrixArray; 
  bool v13; 
  gclient_s *client; 
  GMovingPlatforms *v22; 
  unsigned int v23; 
  GHandler *v24; 
  const vec3_t *p_groundTiltAngles; 
  float fmt; 
  __int64 v31; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outAngles; 
  int v35[4]; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> relativeAxis; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> out; 
  WorldUpReferenceFrame v40; 
  tmat33_t<vec3_t> axis; 

  _RBX = ent;
  if ( !ent->client && !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1361, ASSERT_TYPE_ASSERT, "( ent->client || ent->agent )", (const char *)&queryFormat, "ent->client || ent->agent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(_RBX);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1364, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 4) != 0 && EntityPlayerState->pm_type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1365, ASSERT_TYPE_ASSERT, "( !(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_NORMAL_LINKED)) )", (const char *)&queryFormat, "!(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_NORMAL_LINKED))") )
    __debugbreak();
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 4) != 0 && EntityPlayerState->pm_type == 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1366, ASSERT_TYPE_ASSERT, "( !(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_DEAD_LINKED)) )", (const char *)&queryFormat, "!(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ) && (ps->pm_type == PM_DEAD_LINKED))") )
    __debugbreak();
  tagInfo = _RBX->tagInfo;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1369, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
    __debugbreak();
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v40, EntityPlayerState, Handler, 1);
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 2) != 0 )
  {
    G_CalcTagParentAxis(_RBX, &parentAxis);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v40, (tmat33_t<vec3_t> *)&parentAxis);
    MatrixMultiply43(&tagInfo->axis, &parentAxis, &out);
  }
  else
  {
    G_CalcTagParentAxis(_RBX, &out);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v40, (tmat33_t<vec3_t> *)&out);
  }
  MatrixCopy33((const tmat33_t<vec3_t> *)&out, &dst);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_LADDER_AIM|0x80) && _RBX->client )
  {
    v7 = _RBX->tagInfo;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1312, ASSERT_TYPE_ASSERT, "( tagInfo )", (const char *)&queryFormat, "tagInfo") )
      __debugbreak();
    _RSI = v7->parent;
    if ( _RBX->client->link_useTagScriptedCamera || (LOBYTE(_RSI->s.lerp.u.vehicle.bodyPitch) & 0x40) != 0 )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_22(ServerDObjForEnt, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
        {
          G_Utils_GetAnglesWithWorldUp(_RSI, &outAngles);
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+13Ch]
            vmovss  dword ptr [rsp+1A0h+outAngles], xmm0
            vmovss  xmm1, dword ptr [rsi+140h]
            vmovss  dword ptr [rsp+1A0h+outAngles+4], xmm1
            vmovss  xmm0, dword ptr [rsi+144h]
            vmovss  dword ptr [rsp+1A0h+outAngles+8], xmm0
          }
        }
        AnglesToAxis(&outAngles, &axis);
        G_Utils_DObjCalcBone(_RSI, inOutIndex[0]);
        MatrixArray = SV_Game_DObjGetMatrixArray(_RSI);
        LocalConvertQuatToMat(&MatrixArray[inOutIndex[0]], (tmat33_t<vec3_t> *)&parentAxis);
        MatrixMultiply((const tmat33_t<vec3_t> *)&parentAxis, &axis, &dst);
      }
    }
  }
  v13 = !tagInfo->blendToParent;
  __asm { vmovaps [rsp+1A0h+var_38+8], xmm6 }
  if ( v13 )
  {
    __asm { vmovss  xmm6, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1F4h]
      vmovss  xmm3, dword ptr [rbx+1ECh]; totalDecelTime
      vmovss  xmm2, dword ptr [rbx+1E8h]; totalAccelTime
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
      vmulss  xmm0, xmm0, cs:__real@3a83126f; currentTime
      vmovss  dword ptr [rsp+1A0h+fmt], xmm1
      vmovss  xmm1, dword ptr [rbx+1F0h]; startTime
    }
    *(double *)&_XMM0 = BG_CalcViewClampLerpFraction(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt);
    __asm { vmovaps xmm6, xmm0 }
  }
  client = _RBX->client;
  if ( client )
  {
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    v22 = GMovingPlatforms::ms_instance;
    if ( !client->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
      __debugbreak();
    v23 = client->movingPlatformHandle.m_objIndex - 1;
    if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( v23 >= 0xF8 )
    {
      LODWORD(v31) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v31, 248) )
        __debugbreak();
    }
    GMovingPlatformClient::UpdateLinkToBlendPos(&v22->m_moverClientArray[v23], _RBX);
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
      if ( EntityPlayerState->groundRefEnt == 2047 || (v24 = GHandler::getHandler(), !v24->GetEntityAngles(v24, EntityPlayerState->groundRefEnt, (vec3_t *)v35)) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+1A0h+var_148], xmm0
          vmovss  dword ptr [rsp+5Ch], xmm0
          vmovss  dword ptr [rsp+1A0h+var_140], xmm0
        }
      }
      p_groundTiltAngles = (const vec3_t *)v35;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
        goto LABEL_63;
      p_groundTiltAngles = &EntityPlayerState->groundTiltAngles;
    }
    G_ApplyGroundReferenceFrame(p_groundTiltAngles, &dst, &relativeAxis);
    __asm { vmovaps xmm2, xmm6; lerpFraction }
    SetPlayerFixedLinkViewAngles(_RBX, &relativeAxis, *(float *)&_XMM2);
  }
LABEL_63:
  if ( (EntityPlayerState->linkFlags.m_flags[0] & 4) == 0 )
  {
    __asm { vmovaps xmm2, xmm6; lerpFraction }
    SetPlayerFixedLinkOrigin(_RBX, &out, *(float *)&_XMM2);
    SV_LinkEntity(_RBX);
    G_DrawDebug_PlayerVignettePrint(_RBX, "update player link", 1u);
  }
  __asm { vmovaps xmm6, [rsp+1A0h+var_38+8] }
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
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:s_tagInfoHeap.baseclass_0.m_data.m_buffer, xmm0
    }
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovups xmmword ptr cs:s_tagInfoHeap.m_allocator.m_data.m_buffer, xmm0
  }
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
  unsigned int v4; 
  playerState_s *EntityPlayerState; 
  const dvar_t *v6; 
  const playerState_s *v7; 
  const playerState_s *v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  gentity_s *parent; 
  EntityTagInfo *tagInfo; 
  unsigned int v14; 
  bool v15; 
  EntityTagInfo *v16; 
  __int64 p_extraDataUnion; 
  int number; 
  unsigned int v19; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  EntityTagInfo *v29; 
  float v30; 
  tmat43_t<vec3_t> *p_axis; 
  int *v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  unsigned int v44; 
  int v45; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  int v49[2]; 
  int v50[8]; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v52; 
  tmat43_t<vec3_t> parentAxis; 
  tmat43_t<vec3_t> out; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1548, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  eType = _RBX->s.eType;
  if ( eType == ET_SCRIPTMOVER || eType == ET_PLANE )
  {
    clientLinkInfo = _RBX->s.clientLinkInfo;
    if ( _RBX->tagChildren )
      v4 = *(_DWORD *)&clientLinkInfo | 0x80000;
    else
      v4 = *(_DWORD *)&clientLinkInfo & 0xFFF7FFFF;
    _RBX->s.clientLinkInfo = (clientLinkInfo_t)v4;
  }
  EntityPlayerState = G_GetEntityPlayerState(_RBX);
  if ( EntityPlayerState && (EntityPlayerState->linkFlags.m_flags[0] & 4) != 0 )
    *(_DWORD *)&_RBX->s.clientLinkInfo |= 0x200000u;
  else
    *(_DWORD *)&_RBX->s.clientLinkInfo &= ~0x200000u;
  if ( _RBX->tagInfo && !_RBX->client )
  {
    v6 = DCONST_DVARMPBOOL_useparentlink;
    if ( !DCONST_DVARMPBOOL_useparentlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useparentlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      goto LABEL_91;
  }
  v7 = G_GetEntityPlayerState(_RBX);
  v8 = v7;
  v9 = v7 && BG_IsScriptedSceneAnimFlagEnabled(v7);
  v10 = v8 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v8->otherFlags, ACTIVE, 0x1Bu);
  v11 = v8 && (v8->linkFlags.m_flags[0] & 4) != 0;
  if ( (v9 || v10 || v11) && _RBX->tagInfo )
  {
LABEL_91:
    if ( !_RBX->tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1570, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent)", (const char *)&queryFormat, "ent->tagInfo->parent") )
      __debugbreak();
    parent = _RBX->tagInfo->parent;
    parent->r.svFlags &= ~1u;
    tagInfo = _RBX->tagInfo;
    if ( tagInfo->name )
    {
      if ( tagInfo->index >= 0x100u )
      {
        LODWORD(v48) = 256;
        LODWORD(v47) = tagInfo->index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1585, ASSERT_TYPE_ASSERT, "(unsigned)( ent->tagInfo->index ) < (unsigned)( (1<<8) )", "ent->tagInfo->index doesn't index BONEINDEX_COUNT\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      *(_DWORD *)&_RBX->s.clientLinkInfo ^= (*(_DWORD *)&_RBX->s.clientLinkInfo ^ (_RBX->tagInfo->index << 11)) & 0x7F800;
      v14 = *(_DWORD *)&_RBX->s.clientLinkInfo & 0xFFEFFFFF;
    }
    else
    {
      if ( tagInfo->index != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1578, ASSERT_TYPE_ASSERT, "( ent->tagInfo->index == -1 )", (const char *)&queryFormat, "ent->tagInfo->index == -1") )
        __debugbreak();
      *(_DWORD *)&_RBX->s.clientLinkInfo &= 0xFFF807FF;
      v14 = *(_DWORD *)&_RBX->s.clientLinkInfo | 0x100000;
    }
    _RBX->s.clientLinkInfo = (clientLinkInfo_t)v14;
    v15 = 0;
    if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) )
    {
      v16 = _RBX->tagInfo;
      if ( !v16->animScriptedDataInUse )
      {
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 59, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
          __debugbreak();
        if ( _RBX->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 60, ASSERT_TYPE_ASSERT, "(!ent->tagInfo->animScriptedDataInUse)", "%s\n\tLinked rotation data is not valid on linked entities that are animscripted.  They share the same memory space.\n", "!ent->tagInfo->animScriptedDataInUse") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 61, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ))", "%s\n\tLinked rotation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
          __debugbreak();
        p_extraDataUnion = (__int64)&_RBX->tagInfo->extraDataUnion;
        if ( _RBX->tagInfo == (EntityTagInfo *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1594, ASSERT_TYPE_ASSERT, "( linkedRotationData )", (const char *)&queryFormat, "linkedRotationData") )
          __debugbreak();
        v15 = *(_BYTE *)(p_extraDataUnion + 36) != 0;
      }
    }
    number = (unsigned __int16)parent->s.number;
    v19 = 0;
    LOWORD(number) = number + 1;
    *(_DWORD *)&_RBX->s.clientLinkInfo ^= (*(_DWORD *)&_RBX->s.clientLinkInfo ^ number) & 0x7FF;
    if ( (_RBX->flags.m_flags[0] & 0x400) != 0 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1605, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES )") )
        __debugbreak();
      _RDI = &_RBX->s.lerp.pos;
      _RBX->s.lerp.apos.trType = TR_LINKED;
      _RBX->s.lerp.pos.trType = TR_LINKED;
      if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin }
      if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
      {
        __asm { vmovss  [rsp+150h+var_110], xmm0 }
        if ( (v49[0] & 0x7F800000) == 2139095040 )
          goto LABEL_92;
        __asm
        {
          vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
          vmovss  [rsp+150h+var_110], xmm0
        }
        if ( (v49[0] & 0x7F800000) == 2139095040 )
          goto LABEL_92;
        __asm
        {
          vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
          vmovss  [rsp+150h+var_110], xmm0
        }
        if ( (v49[0] & 0x7F800000) == 2139095040 )
        {
LABEL_92:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v24 = LODWORD(vec3_origin.v[0]) ^ ~s_trbase_aab_X;
        v25 = v24 ^ s_trbase_aab_Y ^ LODWORD(vec3_origin.v[1]);
        v26 = v25 ^ s_trbase_aab_Z ^ LODWORD(vec3_origin.v[2]);
        LODWORD(_RBX->s.lerp.pos.trBase.v[1]) = v25;
        LODWORD(_RBX->s.lerp.pos.trBase.v[2]) = v26;
        LODWORD(_RBX->s.lerp.pos.trBase.v[0]) = v24;
        memset(v49, 0, sizeof(v49));
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rdi+0Ch], xmm0
          vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
          vmovss  dword ptr [rdi+10h], xmm1
          vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
          vmovss  dword ptr [rdi+14h], xmm0
        }
      }
      *(_QWORD *)_RBX->s.lerp.apos.trBase.v = 0i64;
      _RBX->s.lerp.apos.trBase.v[2] = 0.0;
    }
    if ( v15 || (v29 = _RBX->tagInfo, v29->collisionPhysics) )
    {
      G_CalcTagParentAxis(_RBX, &parentAxis);
      AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      MatrixInverseOrthogonal43(&parentAxis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  [rbp+50h+var_C4], xmm0
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  [rbp+50h+var_BC], xmm0
        vmovss  [rbp+50h+var_C0], xmm1
      }
      MatrixMultiply43(&axis, &out, &v52);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+50h+var_B8+24h]
        vmovss  xmm1, dword ptr [rbp+50h+var_B8+28h]
        vmovss  dword ptr [rbx+28h], xmm0
        vmovss  xmm0, dword ptr [rbp+50h+var_B8+2Ch]
        vmovss  dword ptr [rbx+30h], xmm0
        vmovss  dword ptr [rbx+2Ch], xmm1
      }
      p_axis = &v52;
    }
    else
    {
      _RBX->s.lerp.pos.trDelta.v[0] = v29->axis.m[3].v[0];
      _RBX->s.lerp.pos.trDelta.v[1] = v29->axis.m[3].v[1];
      v30 = v29->axis.m[3].v[2];
      p_axis = &v29->axis;
      _RBX->s.lerp.pos.trDelta.v[2] = v30;
    }
    AxisToAngles((const tmat33_t<vec3_t> *)p_axis, &_RBX->s.lerp.apos.trDelta);
    v38 = v50;
    v39 = parent->clientMask.array[1] & ~_RBX->clientMask.array[1];
    v40 = parent->clientMask.array[3] & ~_RBX->clientMask.array[3];
    v41 = parent->clientMask.array[4] & ~_RBX->clientMask.array[4];
    v42 = parent->clientMask.array[5] & ~_RBX->clientMask.array[5];
    v43 = parent->clientMask.array[2] & ~_RBX->clientMask.array[2];
    v44 = parent->clientMask.array[0];
    v45 = v44 & ~_RBX->clientMask.array[0];
    v46 = parent->clientMask.array[6] & ~_RBX->clientMask.array[6];
    v50[6] = v46;
    v50[0] = v45;
    v50[1] = v39;
    v50[2] = v43;
    v50[3] = v40;
    v50[4] = v41;
    v50[5] = v42;
    while ( !*v38 )
    {
      ++v19;
      ++v38;
      if ( v19 >= 7 )
        return;
    }
    parent->clientMask.array[1] &= ~v39;
    parent->clientMask.array[0] = v44 & ~v45;
    parent->clientMask.array[2] &= ~v43;
    parent->clientMask.array[3] &= ~v40;
    parent->clientMask.array[4] &= ~v41;
    parent->clientMask.array[5] &= ~v42;
    parent->clientMask.array[6] &= ~v46;
  }
  else
  {
    *(_DWORD *)&_RBX->s.clientLinkInfo &= 0xFFFFF800;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
    vmulss  xmm0, xmm0, cs:__real@3a83126f; currentTime
  }
  BG_UpdateViewAngleClamp(*(const float *)&_XMM0, worldAnglesCenter, &client->link_viewClamp, &client->ps);
}

/*
==============
G_VerifyLinkedMoveTarget
==============
*/
_BOOL8 G_VerifyLinkedMoveTarget(const gentity_s *ent, const vec3_t *targetOrigin, const int contentMask)
{
  int number; 
  Bounds bounds; 
  trace_t results; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 843, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RBX->tagInfo->collisionPhysics )
    return 1i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_EXECUTION) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 849, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_COLLISION )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+110h]
    vmovss  xmm0, dword ptr [rbx+10Ch]
  }
  number = _RBX->s.number;
  __asm
  {
    vmovss  dword ptr [rsp+0D8h+bounds.halfSize+4], xmm1
    vmovss  xmm1, dword ptr [rbx+104h]
    vmovss  dword ptr [rsp+0D8h+bounds.halfSize], xmm0
    vmovss  xmm0, dword ptr [rbx+100h]
    vmovss  dword ptr [rsp+0D8h+bounds.midPoint+4], xmm1
    vmovss  xmm1, dword ptr [rbx+114h]
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rsp+0D8h+bounds.midPoint], xmm0
    vmovss  xmm0, dword ptr [rbx+108h]
    vmovss  dword ptr [rsp+0D8h+bounds.halfSize+8], xmm2
    vmovss  dword ptr [rsp+0D8h+bounds.midPoint+8], xmm0
  }
  G_Main_TraceCapsule(&results, &_RBX->r.currentOrigin, targetOrigin, &bounds, number, contentMask);
  return results.hitType == TRACE_HITTYPE_BEGIN;
}

/*
==============
SetPlayerFixedLinkOrigin
==============
*/

void __fastcall SetPlayerFixedLinkOrigin(gentity_s *ent, const tmat43_t<vec3_t> *worldAxis, double lerpFraction)
{
  GHandler *Handler; 
  int v71; 
  int number; 
  BgStepSlideMove v105; 
  int v106; 
  vec3_t origin; 
  __int128 v108; 
  vec3_t out; 
  vec3_t in1; 
  int v112[4]; 
  WorldUpReferenceFrame v113; 
  tmat43_t<vec3_t> dst; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm6, xmm2
  }
  _RSI = worldAxis;
  _RBX = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "SetPlayerFixedLinkOrigin");
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1241, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( !_RBX->client && !_RBX->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1242, ASSERT_TYPE_ASSERT, "(ent->client || ent->agent)", (const char *)&queryFormat, "ent->client || ent->agent") )
    __debugbreak();
  _RDI = _RBX->client;
  _R14 = G_GetEntityPlayerState(_RBX);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1246, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  _ECX = level.time + level.frameDuration;
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vsubss  xmm2, xmm1, dword ptr [rbx+1F0h]
    vmulss  xmm0, xmm2, dword ptr [rbx+1CCh]
    vaddss  xmm7, xmm0, dword ptr [rbx+1C0h]
    vmulss  xmm0, xmm2, dword ptr [rbx+1D0h]
    vaddss  xmm8, xmm0, dword ptr [rbx+1C4h]
    vmulss  xmm0, xmm2, dword ptr [rbx+1D4h]
    vaddss  xmm9, xmm0, dword ptr [rbx+1C8h]
  }
  if ( !_RDI )
    goto LABEL_21;
  if ( !_RDI->link_rotationMovesEyePos )
  {
    if ( _RDI->link_doCollision )
    {
      _R14 = &_RBX->r.currentOrigin;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+24h]
        vsubss  xmm1, xmm0, dword ptr [r14]
        vmovss  [rbp+0F0h+var_E8], xmm1
        vmovss  xmm2, dword ptr [rsi+28h]
        vsubss  xmm0, xmm2, dword ptr [r14+4]
        vmovss  [rbp+0F0h+var_E4], xmm0
        vmovss  xmm1, dword ptr [rsi+2Ch]
        vsubss  xmm2, xmm1, dword ptr [r14+8]
        vmovss  [rbp+0F0h+var_E0], xmm2
        vmovups xmm1, xmmword ptr [rbx+100h]
        vmovups [rbp+0F0h+var_120], xmm1
        vmovsd  xmm0, qword ptr [rbx+110h]
        vmovsd  [rbp+0F0h+var_110], xmm0
        vxorps  xmm10, xmm10, xmm10
        vshufps xmm1, xmm1, xmm1, 0FFh
        vmovss  dword ptr [rbp+0F0h+var_120+0Ch], xmm1
        vcomiss xmm1, xmm10
        vmovss  xmm0, dword ptr [rbp+0F0h+var_110]
        vcomiss xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+0F0h+var_110+4]
        vcomiss xmm0, xmm10
        vmovss  xmm0, dword ptr [rbp+0F0h+var_110]
        vmaxss  xmm1, xmm0, dword ptr [rbp+0F0h+var_120+0Ch]
        vmovss  dword ptr [rbp+0F0h+var_120+0Ch], xmm1
        vmovss  dword ptr [rbp+0F0h+var_110], xmm1
        vmovss  xmm0, dword ptr [rbp+0F0h+var_110+4]
        vmaxss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rbp+0F0h+var_110+4], xmm1
      }
      v71 = _RBX->clipmask & 0xFFFFBFFF;
      number = _RBX->s.number;
      v105.__vftable = (BgStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+1F0h+var_1B0.deltaTime], xmm0
      }
      v105.origin = &_RBX->r.currentOrigin;
      v105.velocity = (vec3_t *)v112;
      v105.bounds = (const Bounds *)&v108;
      *(_WORD *)&v105.gravity = 0;
      v105.zerog = 0;
      v105.inSolid = NULL;
      v105.passEntityCount = 0;
      v105.clipMask = v71;
      v106 = 0;
      if ( number != 2047 )
      {
        v105.passEntities[0] = number;
        v105.passEntityCount = 1;
      }
      BgStepSlideMove::StepSlideMove(&v105);
      BgStepSlideMove::~BgStepSlideMove(&v105);
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm4, xmm2, xmm7
        vmovss  dword ptr [rbp+0F0h+origin], xmm4
        vmovss  xmm0, dword ptr [r14+4]
        vsubss  xmm1, xmm0, xmm8
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm8
        vmovss  dword ptr [rbp+0F0h+origin+4], xmm3
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm9
        vmovss  dword ptr [rbp+0F0h+origin+8], xmm3
      }
      goto LABEL_22;
    }
LABEL_21:
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+24h]
      vsubss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm4, xmm2, xmm7
      vmovss  dword ptr [rbp+0F0h+origin], xmm4
      vmovss  xmm0, dword ptr [rsi+28h]
      vsubss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rbp+0F0h+origin+4], xmm3
      vmovss  xmm0, dword ptr [rsi+2Ch]
      vsubss  xmm1, xmm0, xmm9
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm9
      vmovss  dword ptr [rbp+0F0h+origin+8], xmm3
    }
    if ( !_RDI )
      goto LABEL_23;
LABEL_22:
    __asm
    {
      vmovss  dword ptr [rdi+0FA24h], xmm4
      vmovss  xmm0, dword ptr [rbp+0F0h+origin+4]
      vmovss  dword ptr [rdi+0FA28h], xmm0
      vmovss  xmm1, dword ptr [rbp+0F0h+origin+8]
      vmovss  dword ptr [rdi+0FA2Ch], xmm1
    }
    goto LABEL_23;
  }
  MatrixCopy43(_RSI, &dst);
  Handler = GHandler::getHandler();
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v113, _R14, Handler);
  WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v113, (tmat33_t<vec3_t> *)&dst);
  __asm
  {
    vmovss  xmm1, dword ptr [r14+1E8h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+0F0h+in1], xmm0
    vmovss  dword ptr [rbp+0F0h+in1+4], xmm0
    vmovss  dword ptr [rbp+0F0h+in1+8], xmm1
  }
  MatrixTransformVector43(&in1, &dst, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+1E8h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000; height
  }
  WorldUpReferenceFrame::AddUpContribution(&v113, *(float *)&_XMM1, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0F0h+out]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm7
    vmovss  dword ptr [rbp+0F0h+origin], xmm3
    vmovss  xmm0, dword ptr [rbp+0F0h+out+4]
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm8
    vmovss  dword ptr [rbp+0F0h+origin+4], xmm3
    vmovss  xmm0, dword ptr [rbp+0F0h+out+8]
    vsubss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm9
    vmovss  dword ptr [rbp+0F0h+origin+8], xmm3
    vmovss  xmm0, dword ptr [rsi+24h]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm7
    vmovss  dword ptr [rdi+0FA24h], xmm3
    vmovss  xmm0, dword ptr [rsi+28h]
    vsubss  xmm1, xmm0, xmm8
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm8
    vmovss  dword ptr [rdi+0FA28h], xmm3
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vsubss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, xmm9
    vmovss  dword ptr [rdi+0FA2Ch], xmm3
  }
LABEL_23:
  G_SetOrigin(_RBX, &origin, 1, 1);
  _RBX->s.lerp.pos.trType = TR_INTERPOLATE;
  Sys_ProfEndNamedEvent();
  _R11 = &v115;
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
SetPlayerFixedLinkViewAngles
==============
*/

void __fastcall SetPlayerFixedLinkViewAngles(gentity_s *ent, const tmat33_t<vec3_t> *worldAxis, double lerpFraction)
{
  char v41; 
  char v43; 
  unsigned int v53; 
  unsigned int v76; 
  __int64 v95; 
  __int64 v96; 
  vec3_t v97; 
  vec4_t out; 
  vec3_t angles; 
  vec4_t qb; 
  vec4_t in1; 
  vec4_t qa; 
  vec4_t quat; 
  vec4_t v104; 
  vec4_t v105; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v108; 

  __asm
  {
    vmovaps [rsp+1D0h+var_40], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1133, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && !ent->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1134, ASSERT_TYPE_ASSERT, "(ent->client || ent->agent)", (const char *)&queryFormat, "ent->client || ent->agent") )
    __debugbreak();
  _R14 = ent->client;
  _R15 = G_GetEntityPlayerState(ent);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\linkto.cpp", 1138, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  AxisToAngles(worldAxis, &angles);
  if ( _R14 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
      vmulss  xmm0, xmm0, cs:__real@3a83126f; currentTime
    }
    BG_UpdateViewAngleClamp(*(const float *)&_XMM0, &angles, &_R14->link_viewClamp, &_R14->ps);
  }
  __asm
  {
    vmovaps [rsp+1D0h+var_50], xmm7
    vmovaps [rsp+1D0h+var_60], xmm8
    vmovaps [rsp+1D0h+var_70], xmm9
    vmovaps [rsp+1D0h+var_80], xmm10
  }
  AxisToQuat(worldAxis, &out);
  if ( !_R14 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1D0h+angles]
    vmovss  dword ptr [r14+0FA30h], xmm0
    vmovss  xmm1, dword ptr [rsp+1D0h+angles+4]
    vmovss  dword ptr [r14+0FA34h], xmm1
    vmovss  xmm0, dword ptr [rsp+1D0h+angles+8]
    vmovss  dword ptr [r14+0FA38h], xmm0
  }
  if ( (_R15->linkFlags.m_flags[0] & 1) != 0 )
  {
LABEL_41:
    __asm { vmovaps xmm2, xmm6; frac }
    QuatLerp(&ent->c.blend.viewQuat, &out, *(float *)&_XMM2, &in1);
    QuatToAxis(&in1, &axis);
    AxisToAngles(&axis, &v97);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1D0h+var_190]
      vmovss  xmm8, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm10, cs:__real@43b40000
      vmovss  dword ptr [r15+280h], xmm0
      vmovss  xmm1, dword ptr [rsp+1D0h+var_190+4]
      vmovss  dword ptr [r15+284h], xmm1
      vmovss  xmm0, dword ptr [rsp+1D0h+var_190+8]
    }
    v76 = 0;
    __asm
    {
      vmovss  dword ptr [r15+288h], xmm0
      vxorps  xmm7, xmm7, xmm7
    }
    _RDI = &_R15->viewangles;
    _R14 = (char *)((char *)&v97 - (char *)&_R15->delta_angles);
    do
    {
      if ( v76 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v76;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi] }
      if ( v76 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v76;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+r14-124h]
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm4, xmm1, xmm8
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm6, xmm0, xmm10
      }
      if ( v76 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v76;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rdi-124h]
        vmovss  dword ptr [rdi-124h], xmm0
      }
      if ( v76 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v76;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
      _RDI = (vec3_t *)((char *)_RDI + 4);
      ++v76;
    }
    while ( (int)v76 < 2 );
  }
  else
  {
    if ( _R14->prevLinkAnglesSet )
    {
      QuatMultiply(&_R14->prevLinkedInvQuat, &out, &qb);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1D0h+out]
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [r14+5EA0h], xmm1
        vmovss  xmm2, dword ptr [rsp+1D0h+out+4]
        vxorps  xmm0, xmm2, xmm6
        vmovss  dword ptr [r14+5EA4h], xmm0
        vmovss  xmm1, dword ptr [rsp+1D0h+out+8]
        vxorps  xmm2, xmm1, xmm6
        vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
        vmovss  dword ptr [r14+5EA8h], xmm2
        vmovss  xmm0, dword ptr [rsp+1D0h+out+0Ch]
        vmovss  dword ptr [r14+5EACh], xmm0
        vmovups xmmword ptr [rbp+0D0h+qa], xmm1
        vmovss  xmm2, dword ptr [r14+5EB8h]; frac
      }
      QuatLerp(&qa, &qb, *(float *)&_XMM2, &qb);
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      _R14->prevLinkAnglesSet = 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1D0h+out]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [r14+5EA0h], xmm1
        vmovss  xmm2, dword ptr [rsp+1D0h+out+4]
        vxorps  xmm0, xmm2, xmm6
        vmovss  dword ptr [r14+5EA4h], xmm0
        vmovss  xmm1, dword ptr [rsp+1D0h+out+8]
        vxorps  xmm2, xmm1, xmm6
        vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
        vmovss  dword ptr [r14+5EA8h], xmm2
        vmovss  xmm0, dword ptr [rsp+1D0h+out+0Ch]
        vmovss  dword ptr [r14+5EACh], xmm0
        vmovups xmmword ptr [rsp+1D0h+qb], xmm1
      }
    }
    _RDI = &_R15->viewangles;
    AnglesToAxis(&_R15->viewangles, &axis);
    AxisToQuat(&axis, &in1);
    QuatMultiply(&in1, &qb, &quat);
    QuatToAxis(&quat, &v108);
    AxisToAngles(&v108, &v97);
    _RBX = DCONST_DVARMPFLT_player_view_pitch_up;
    if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, cs:__real@c2b40000
      vcomiss xmm0, dword ptr [rdi]
    }
    if ( !(v41 | v43) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@42aa0000
        vcomiss xmm0, dword ptr [rbx+28h]
      }
      if ( v41 )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@43340000
          vmovss  xmm2, dword ptr [rsp+1D0h+var_190]
          vaddss  xmm1, xmm3, dword ptr [rsp+1D0h+var_190+4]
          vsubss  xmm0, xmm2, xmm3
          vmovss  dword ptr [rsp+1D0h+var_190+4], xmm1
          vxorps  xmm1, xmm0, xmm6
          vmovss  dword ptr [rsp+1D0h+var_190], xmm1
        }
      }
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm10, cs:__real@43b40000
    }
    v53 = 0;
    _R12 = (char *)((char *)&v97 - (char *)&_R15->delta_angles);
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      if ( v53 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi] }
      if ( v53 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+r12-124h]
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm4, xmm1, xmm8
        vaddss  xmm2, xmm4, xmm9
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm6, xmm0, xmm10
      }
      if ( v53 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rdi-124h]
        vmovss  dword ptr [rdi-124h], xmm0
      }
      if ( v53 >= 3 )
      {
        LODWORD(v96) = 3;
        LODWORD(v95) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v95, v96) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
      _RDI = (vec3_t *)((char *)_RDI + 4);
      ++v53;
    }
    while ( (int)v53 < 2 );
    if ( _R14->link_useTagAnglesForViewAngles )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1D0h+angles]
        vmovss  dword ptr [r15+280h], xmm0
        vmovss  xmm1, dword ptr [rsp+1D0h+angles+4]
        vmovss  dword ptr [r15+284h], xmm1
        vmovss  xmm0, dword ptr [rsp+1D0h+angles+8]
        vmovss  dword ptr [r15+288h], xmm0
      }
    }
    else
    {
      AnglesToAxis(&_R15->linkAngles, &mat);
      AxisToQuat(&mat, &v104);
      QuatMultiply(&v104, &qb, &v105);
      QuatToAxis(&v105, &mat);
      AxisToAngles(&mat, &_R15->linkAngles);
    }
  }
  __asm
  {
    vmovaps xmm10, [rsp+1D0h+var_80]
    vmovaps xmm9, [rsp+1D0h+var_70]
    vmovaps xmm8, [rsp+1D0h+var_60]
    vmovaps xmm7, [rsp+1D0h+var_50]
    vmovaps xmm6, [rsp+1D0h+var_40]
  }
}

