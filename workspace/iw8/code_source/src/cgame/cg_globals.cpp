/*
==============
cg_t::ResetCgCharacterInfo
==============
*/

void __fastcall cg_t::ResetCgCharacterInfo(cg_t *this, const int entNum)
{
  ?ResetCgCharacterInfo@cg_t@@QEAAXH@Z(this, entNum);
}

/*
==============
CG_Globals_ResetPlayerWeaponInfo
==============
*/

void __fastcall CG_Globals_ResetPlayerWeaponInfo(const LocalClientNum_t localClientNum)
{
  ?CG_Globals_ResetPlayerWeaponInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ViewJostleState::ViewJostleState
==============
*/

void __fastcall ViewJostleState::ViewJostleState(ViewJostleState *this)
{
  ??0ViewJostleState@@QEAA@XZ(this);
}

/*
==============
cg_t::SetViewModelTransform
==============
*/

void __fastcall cg_t::SetViewModelTransform(cg_t *this, const tmat33_t<vec3_t> *axis, const vec3_t *origin)
{
  ?SetViewModelTransform@cg_t@@QEAAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@@Z(this, axis, origin);
}

/*
==============
cg_t::FreePlayerHelmet
==============
*/

void __fastcall cg_t::FreePlayerHelmet(cg_t *this)
{
  ?FreePlayerHelmet@cg_t@@QEAAXXZ(this);
}

/*
==============
cg_t::FreePlayerLegs
==============
*/

void __fastcall cg_t::FreePlayerLegs(cg_t *this)
{
  ?FreePlayerLegs@cg_t@@QEAAXXZ(this);
}

/*
==============
cg_t::cg_t
==============
*/

void __fastcall cg_t::cg_t(cg_t *this, const LocalClientNum_t _localClientNum)
{
  ??0cg_t@@IEAA@W4LocalClientNum_t@@@Z(this, _localClientNum);
}

/*
==============
cg_t::FreeViewModelHands
==============
*/

void __fastcall cg_t::FreeViewModelHands(cg_t *this)
{
  ?FreeViewModelHands@cg_t@@QEAAXXZ(this);
}

/*
==============
CG_Globals_InitOperatorSkinEvMap
==============
*/

void __fastcall CG_Globals_InitOperatorSkinEvMap(ntl::fixed_hash_map<unsigned int,float,1000,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *operatorSkinEvOffsetMap)
{
  ?CG_Globals_InitOperatorSkinEvMap@@YAXAEAV?$fixed_hash_map@IM$0DOI@$0GAH@U?$hash@I@ntl@@U?$equal_to@I@2@@ntl@@@Z(operatorSkinEvOffsetMap);
}

/*
==============
cg_t::ResetLocalClientGlobalsObufscation
==============
*/

void __fastcall cg_t::ResetLocalClientGlobalsObufscation(const LocalClientNum_t localClientNum)
{
  ?ResetLocalClientGlobalsObufscation@cg_t@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
cg_t::~cg_t
==============
*/

void __fastcall cg_t::~cg_t(cg_t *this)
{
  ??1cg_t@@MEAA@XZ(this);
}

/*
==============
cg_t::TryGetCgCharacterInfo
==============
*/

const CgCharacterInfo *__fastcall cg_t::TryGetCgCharacterInfo(cg_t *this, const int entNum)
{
  return ?TryGetCgCharacterInfo@cg_t@@QEBAPEBUCgCharacterInfo@@H@Z(this, entNum);
}

/*
==============
cg_t::GetViewModelTransform
==============
*/

const tmat43_t<vec3_t> *__fastcall cg_t::GetViewModelTransform(cg_t *this)
{
  return ?GetViewModelTransform@cg_t@@QEBAAEBT?$tmat43_t@Tvec3_t@@@@XZ(this);
}

/*
==============
CG_Globals_CopyInUseHudElems
==============
*/

void __fastcall CG_Globals_CopyInUseHudElems(const hudelem_t **elems, unsigned int *elemCount, const hudelem_t *elemSrcArray, int elemSrcArrayCount)
{
  ?CG_Globals_CopyInUseHudElems@@YAXQEAPEBUhudelem_t@@PEAIQEBU1@H@Z(elems, elemCount, elemSrcArray, elemSrcArrayCount);
}

/*
==============
ViewJostleState::Reset
==============
*/

void __fastcall ViewJostleState::Reset(ViewJostleState *this)
{
  ?Reset@ViewJostleState@@QEAAXXZ(this);
}

/*
==============
cg_t::TryGetCgCharacterInfo
==============
*/

CgCharacterInfo *__fastcall cg_t::TryGetCgCharacterInfo(cg_t *this, const int entNum)
{
  return ?TryGetCgCharacterInfo@cg_t@@QEAAPEAUCgCharacterInfo@@H@Z(this, entNum);
}

/*
==============
ViewJostleState::ViewJostleState
==============
*/
void ViewJostleState::ViewJostleState(ViewJostleState *this)
{
  __asm { vmovss  xmm3, cs:__real@3f800000; scale }
  MatrixSet43(&this->viewToLinkedTagTransform, &vec3_origin, &identityMatrix33, *(float *)&_XMM3);
  *(_QWORD *)this->oldViewanglesLocal.v = 0i64;
  *(_QWORD *)&this->oldViewanglesLocal.z = 0i64;
  *(_QWORD *)&this->oldLinkedTagAnglesLocal.y = 0i64;
  *(_QWORD *)this->oldPos.v = 0i64;
  *(_QWORD *)&this->oldPos.z = 0i64;
  *(_QWORD *)&this->oldLinearVelocity.y = 0i64;
  *(_QWORD *)this->accumulatedLinearVelocity.v = 0i64;
  *(_QWORD *)&this->accumulatedLinearVelocity.z = 0i64;
  *(_QWORD *)&this->oldOffsetangles.y = 0i64;
  *(_DWORD *)&this->linkedEnt = 2047;
}

/*
==============
cg_t::cg_t
==============
*/
void cg_t::cg_t(cg_t *this, const LocalClientNum_t _localClientNum)
{
  ViewJostleState *linkedToPlayerView; 
  __int64 v5; 
  __int64 v6; 
  playerState_s *activePs; 
  __int64 v8; 
  ClientChargeWeaponInfo *chargeWeaponInfo; 
  __int64 v10; 
  ClientOffHandWeaponInfo *p_offHandWeaponInfo; 
  WeaponOffsetPatternCache *patternCacheList; 
  __int64 v13; 
  ntl::internal::pool_allocator_freelist<16> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<16> *v15; 

  this->__vftable = (cg_t_vtbl *)&cg_t::`vftable';
  this->predictedPlayerState.meleeReaction.m_packed = 0;
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&this->predictedViewState.viewMoveState.idleMotionCache.idleMotion1Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&this->predictedViewState.viewMoveState.idleMotionCache.idleMotion2Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&this->predictedViewState.weapMoveState.idleMotionCache.idleMotion1Spline);
  BSplineRelaxedCBezier::BSplineRelaxedCBezier(&this->predictedViewState.weapMoveState.idleMotionCache.idleMotion2Spline);
  this->localClientNum = _localClientNum;
  CgHandler::CgHandler(&this->m_bgHandler, _localClientNum);
  XCamData::XCamData(&this->executionXCamDebug, _localClientNum);
  ViewMotionSpring::ViewMotionSpring(&this->viewSpring);
  ViewMotionSpring::ViewMotionSpring(&this->viewmodelSpring);
  XCamData::XCamData(&this->xCam, _localClientNum);
  AngularSmoothing::AngularSmoothing(&this->viewSmoothing);
  AdvancedSwayState::AdvancedSwayState(&this->vmMotionState);
  Shake::Shake(&this->viewShake);
  *(_QWORD *)&this->velocityBasedFovIncreaseRatio = 0i64;
  *(_QWORD *)&this->timeBasedFovAddition = 0i64;
  this->aimAssistEyeOrigin.initialized = 0;
  this->aimAssistViewOrigin.initialized = 0;
  this->adsSettlePending = 0;
  this->adsSettleMaxADSFraction = 0.0;
  this->kickAVel.initialized = 0;
  this->rawKickAngles.initialized = 0;
  this->kickAngles.initialized = 0;
  linkedToPlayerView = this->linkedToPlayerView;
  v5 = 4i64;
  v6 = 4i64;
  do
  {
    ViewJostleState::ViewJostleState(linkedToPlayerView++);
    --v6;
  }
  while ( v6 );
  CGMovingPlatformClient::CGMovingPlatformClient(&this->movingPlatforms, _localClientNum);
  activePs = this->activePs;
  v8 = 2i64;
  do
  {
    playerState_s::playerState_s(activePs++);
    --v8;
  }
  while ( v8 );
  chargeWeaponInfo = this->chargeWeaponInfo;
  v10 = 248i64;
  do
  {
    ClientChargeWeaponInfo::ClientChargeWeaponInfo(chargeWeaponInfo++);
    --v10;
  }
  while ( v10 );
  this->offhandWeaponVmFxInfo.fxRegDef.m_particleSystemDef = NULL;
  p_offHandWeaponInfo = &this->offHandWeaponInfo;
  do
  {
    ClientOffHandCameraFireFxInfo::ClientOffHandCameraFireFxInfo(p_offHandWeaponInfo->fireFxInfos);
    p_offHandWeaponInfo = (ClientOffHandWeaponInfo *)((char *)p_offHandWeaponInfo + 80);
    --v5;
  }
  while ( v5 );
  `eh vector constructor iterator'(&this->coneTargetingState.targets, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))CAssistTarget::CAssistTarget, (void (__fastcall *)(void *))CAssistTarget::~CAssistTarget);
  memset_0(&this->viewModelQueuedRenderInfo, 0, 0xD0ui64);
  this->m_isMLGSpectator = 0;
  patternCacheList = this->patternCacheList;
  v13 = 12i64;
  do
  {
    WeaponOffsetPatternCache::WeaponOffsetPatternCache(patternCacheList++);
    --v13;
  }
  while ( v13 );
  p_m_freelist = &this->operatorSkinEvOffsetMap.m_freelist;
  v15 = &this->operatorSkinEvOffsetMap.m_freelist;
  do
  {
    v15 -= 2;
    v15->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v15;
  }
  while ( v15 > (ntl::internal::pool_allocator_freelist<16> *)&this->operatorSkinEvOffsetMap );
  this->operatorSkinEvOffsetMap.m_freelist.m_head.mp_next = &v15->m_head;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  `eh vector constructor iterator'(&this->operatorSkinEvOffsetMap.m_buckets, 8ui64, 0x607ui64, (void (__fastcall *)(void *))ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float>>::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float>>, (void (__fastcall *)(void *))ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float>>::~intrusive_slist<ntl::internal::hash_table_node<unsigned int,float>>);
  this->operatorSkinEvOffsetMap.m_currentNumItems = 0i64;
  this->m_mlgSpectatorPtr = NULL;
  BGMovingPlatformClient::SetHandler(&this->movingPlatforms, &this->m_bgHandler);
  MatrixIdentity33(&this->refdef.view.axis);
}

/*
==============
cg_t::~cg_t
==============
*/
void cg_t::~cg_t(cg_t *this)
{
  int v2; 
  XAnimTree **p_tree; 
  __int64 v4; 
  const DObj *ClientDObj; 
  DObj *v6; 
  XAnimTree *Tree; 
  const DObj *v8; 
  DObj *v9; 
  XAnimTree *v10; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ShakeImpulse> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v13; 

  this->__vftable = (cg_t_vtbl *)&cg_t::`vftable';
  v2 = 2048;
  p_tree = &this->m_weaponHand[0].tree;
  v4 = 2i64;
  do
  {
    Com_SafeClientDObjFree(v2, this->localClientNum);
    if ( *p_tree )
      Com_XAnimFreeSmallTree(*p_tree);
    ++v2;
    p_tree += 5;
    --v4;
  }
  while ( v4 );
  memset_0(this->m_weaponHand, 0, sizeof(this->m_weaponHand));
  ClientDObj = Com_GetClientDObj(2114, this->localClientNum);
  v6 = (DObj *)ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      Com_XAnimFreeSmallTree(Tree);
      DObjSetTree(v6, NULL);
    }
    Com_SafeClientDObjFree(2114, this->localClientNum);
  }
  v8 = Com_GetClientDObj(2115, this->localClientNum);
  v9 = (DObj *)v8;
  if ( v8 )
  {
    v10 = DObjGetTree(v8);
    if ( v10 )
    {
      Com_XAnimFreeSmallTree(v10);
      DObjSetTree(v9, NULL);
    }
    Com_SafeClientDObjFree(2115, this->localClientNum);
  }
  ntl::fixed_hash_map<unsigned int,float,1000,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>>::~fixed_hash_map<unsigned int,float,1000,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>>(&this->operatorSkinEvOffsetMap);
  `eh vector destructor iterator'(&this->coneTargetingState.targets, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))CAssistTarget::~CAssistTarget);
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->viewShake.m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->viewShake.m_impulseManager.m_impulseList.m_listHead;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->viewShake.m_impulseManager.m_impulseList.m_listHead )
  {
    do
    {
      v13 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->viewShake.m_impulseManager.m_impulseList.m_freelist.m_head;
      this->viewShake.m_impulseManager.m_impulseList.m_freelist.m_head.mp_next = mp_next;
      mp_next = v13;
    }
    while ( v13 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->viewShake.m_impulseManager.m_impulseList.m_listHead.m_sentinel.mp_next = &this->viewShake.m_impulseManager.m_impulseList.m_listHead.m_sentinel;
  this->__vftable = (cg_t_vtbl *)&cg_tDummy::`vftable';
}

/*
==============
CG_Globals_CopyInUseHudElems
==============
*/
void CG_Globals_CopyInUseHudElems(const hudelem_t **elems, unsigned int *elemCount, const hudelem_t *elemSrcArray, int elemSrcArrayCount)
{
  int v4; 
  const hudelem_t *v6; 
  __int64 v7; 

  v4 = 0;
  if ( elemSrcArrayCount > 0 )
  {
    v6 = elemSrcArray;
    do
    {
      if ( v6->type == HE_TYPE_FREE )
        break;
      ++v6;
      v7 = v4++;
      elems[(*elemCount)++] = &elemSrcArray[v7];
    }
    while ( v4 < elemSrcArrayCount );
  }
}

/*
==============
CG_Globals_InitOperatorSkinEvMap
==============
*/
void CG_Globals_InitOperatorSkinEvMap(ntl::fixed_hash_map<unsigned int,float,1000,1543,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *operatorSkinEvOffsetMap)
{
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *p_m_buckets; 
  unsigned __int64 *p_m_currentNumItems; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *v6; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *mp_next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v8; 
  int v9; 
  const char *ColumnValueForRow; 
  const char *v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v16; 
  ntl::internal::slist_node_base *v17; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *v18; 
  ntl::internal::slist_node_base *v19; 
  ntl::internal::slist_node_base *v21; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *v22; 
  ntl::internal::pool_allocator_freelist<16> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v24; 
  __int64 v25; 
  int RowCount; 
  StringTable *tablePtr; 
  __int64 v30; 

  p_m_buckets = &operatorSkinEvOffsetMap->m_buckets;
  p_m_currentNumItems = &operatorSkinEvOffsetMap->m_currentNumItems;
  v6 = &operatorSkinEvOffsetMap->m_buckets;
  if ( &operatorSkinEvOffsetMap->m_buckets != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *)&operatorSkinEvOffsetMap->m_currentNumItems )
  {
    do
    {
      mp_next = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *)v6->m_data[0].m_listHead.m_sentinel.mp_next;
      if ( (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *)v6->m_data[0].m_listHead.m_sentinel.mp_next != v6 )
      {
        do
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v8 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          mp_next = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *)mp_next->m_data[0].m_listHead.m_sentinel.mp_next;
          v8->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)operatorSkinEvOffsetMap->m_freelist.m_head;
          operatorSkinEvOffsetMap->m_freelist.m_head.mp_next = v8;
        }
        while ( mp_next != v6 );
        p_m_currentNumItems = &operatorSkinEvOffsetMap->m_currentNumItems;
      }
      v6->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v6;
      v6 = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *)((char *)v6 + 8);
    }
    while ( v6 != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> >,1543> *)p_m_currentNumItems );
    p_m_buckets = &operatorSkinEvOffsetMap->m_buckets;
  }
  *p_m_currentNumItems = 0i64;
  tablePtr = NULL;
  StringTable_GetAsset("operatorSkins.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr )
  {
    Com_PrintWarning(14, "Could not initialize operatorSkinEvOffsetMap.  Failed to get operatorSkins.csv asset in StringTable_GetAsset\n");
    return;
  }
  RowCount = StringTable_GetRowCount(tablePtr);
  v9 = 0;
  if ( RowCount > 0 )
  {
    __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v9, 4);
      v11 = StringTable_GetColumnValueForRow(tablePtr, v9, 19);
      v12 = -1i64;
      do
        ++v12;
      while ( ColumnValueForRow[v12] );
      v13 = j_CoD_XXH64(ColumnValueForRow, (unsigned int)v12, 0i64);
      v14 = HIDWORD(v13) + 37 * (v13 + 629);
      *(double *)&_XMM0 = strtod(v11, NULL);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      v16 = v14 % 0x607ui64;
      if ( v16 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v17 = p_m_buckets->m_data[v16].m_listHead.m_sentinel.mp_next;
      v18 = &p_m_buckets->m_data[v16];
      if ( v17 == (ntl::internal::slist_node_base *)v18 )
      {
LABEL_27:
        v17 = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v17[1].mp_next) == v14 )
            break;
          v17 = v17->mp_next;
          if ( v17 == (ntl::internal::slist_node_base *)v18 )
            goto LABEL_27;
        }
        if ( v17 )
        {
          v19 = v17;
          goto LABEL_29;
        }
      }
      v19 = NULL;
LABEL_29:
      if ( v17 )
      {
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        _RAX = (__int64)&v19[1].mp_next + 4;
        if ( !v19 )
          _RAX = 4i64;
        __asm { vucomiss xmm6, dword ptr [rax] }
        if ( v19 )
          Com_PrintWarning(14, "CG_Globals_InitOperatorSkinEvMap.  Multiple bodies with the same name (%s) have different evOffset values.\n", ColumnValueForRow);
      }
      else
      {
        LODWORD(v30) = v14;
        __asm { vmovss  dword ptr [rsp+0A8h+arg_10+4], xmm6 }
        if ( v16 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v21 = p_m_buckets->m_data[v16].m_listHead.m_sentinel.mp_next;
        v22 = &p_m_buckets->m_data[v16];
        if ( v21 == (ntl::internal::slist_node_base *)v22 )
        {
LABEL_48:
          p_m_freelist = &operatorSkinEvOffsetMap->m_freelist;
          if ( !operatorSkinEvOffsetMap->m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<16> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x3E8ui64) )
            __debugbreak();
          v24 = p_m_freelist->m_head.mp_next;
          p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
          v25 = v30;
          v24->mp_next = NULL;
          v24[1].mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v25;
          v24->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v22->m_listHead.m_sentinel.mp_next;
          v22->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)v24;
          ++operatorSkinEvOffsetMap->m_currentNumItems;
        }
        else
        {
          while ( 1 )
          {
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v21[1].mp_next) == v14 )
              break;
            v21 = v21->mp_next;
            if ( v21 == (ntl::internal::slist_node_base *)v22 )
              goto LABEL_48;
          }
        }
      }
      if ( ++v9 >= RowCount )
      {
        __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
        return;
      }
    }
  }
}

/*
==============
CG_Globals_ResetPlayerWeaponInfo
==============
*/
void CG_Globals_ResetPlayerWeaponInfo(const LocalClientNum_t localClientNum)
{
  _RDX = CG_GetLocalClientGlobals(localClientNum);
  _RDX->playerWeaponInfo.handModel = NULL;
  _RDX->playerWeaponInfo.gogglesModel = NULL;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rax+182B0h], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rax+182D0h], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rax+182E0h], xmm0
  }
  *(_DWORD *)&_RDX->playerWeaponInfo.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rax+182ECh], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rax+1830Ch], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rax+1831Ch], xmm0
  }
  *(_DWORD *)&_RDX->playerWeaponInfo.turretWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rdx+18328h], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rdx+18348h], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rdx+18358h], xmm0
  }
  *(_DWORD *)&_RDX->playerWeaponInfo.accessoryWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  *(_WORD *)&_RDX->playerWeaponInfo.isWeaponDefault = 0;
  *(_WORD *)&_RDX->playerWeaponInfo.hideReticle = 0;
  _RDX->playerWeaponInfo.isWeaponHidden = 0;
  *(_WORD *)&_RDX->playerWeaponInfo.isAccessoryHidden = 257;
  _RDX->playerWeaponInfo.skydiveViewmodelState = All;
  _RDX->playerWeaponInfo.carryObjectIndex = 0;
  *(_QWORD *)&_RDX->playerWeaponInfo.meleeComboSeqIdx = 0i64;
  _RDX->playerWeaponInfo.meleeStartTime[1] = 0;
}

/*
==============
cg_t::FreePlayerHelmet
==============
*/
void cg_t::FreePlayerHelmet(cg_t *this)
{
  const DObj *ClientDObj; 
  DObj *v3; 
  XAnimTree *Tree; 

  ClientDObj = Com_GetClientDObj(2115, this->localClientNum);
  v3 = (DObj *)ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      Com_XAnimFreeSmallTree(Tree);
      DObjSetTree(v3, NULL);
    }
    Com_SafeClientDObjFree(2115, this->localClientNum);
  }
}

/*
==============
cg_t::FreePlayerLegs
==============
*/
void cg_t::FreePlayerLegs(cg_t *this)
{
  const DObj *ClientDObj; 
  DObj *v3; 
  XAnimTree *Tree; 

  ClientDObj = Com_GetClientDObj(2114, this->localClientNum);
  v3 = (DObj *)ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      Com_XAnimFreeSmallTree(Tree);
      DObjSetTree(v3, NULL);
    }
    Com_SafeClientDObjFree(2114, this->localClientNum);
  }
}

/*
==============
cg_t::FreeViewModelHands
==============
*/
void cg_t::FreeViewModelHands(cg_t *this)
{
  XAnimTree **p_tree; 
  int v3; 
  __int64 v4; 

  p_tree = &this->m_weaponHand[0].tree;
  v3 = 2048;
  v4 = 2i64;
  do
  {
    Com_SafeClientDObjFree(v3, this->localClientNum);
    if ( *p_tree )
      Com_XAnimFreeSmallTree(*p_tree);
    ++v3;
    p_tree += 5;
    --v4;
  }
  while ( v4 );
  memset_0(this->m_weaponHand, 0, sizeof(this->m_weaponHand));
}

/*
==============
cg_t::GetViewModelTransform
==============
*/
tmat43_t<vec3_t> *cg_t::GetViewModelTransform(cg_t *this)
{
  return &this->viewModelAxis;
}

/*
==============
ViewJostleState::Reset
==============
*/
void ViewJostleState::Reset(ViewJostleState *this)
{
  __asm { vmovss  xmm3, cs:__real@3f800000; scale }
  MatrixSet43(&this->viewToLinkedTagTransform, &vec3_origin, &identityMatrix33, *(float *)&_XMM3);
  *(_QWORD *)this->oldViewanglesLocal.v = 0i64;
  *(_QWORD *)&this->oldViewanglesLocal.z = 0i64;
  *(_QWORD *)&this->oldLinkedTagAnglesLocal.y = 0i64;
  *(_QWORD *)this->oldPos.v = 0i64;
  *(_QWORD *)&this->oldPos.z = 0i64;
  *(_QWORD *)&this->oldLinearVelocity.y = 0i64;
  *(_QWORD *)this->accumulatedLinearVelocity.v = 0i64;
  *(_QWORD *)&this->accumulatedLinearVelocity.z = 0i64;
  *(_QWORD *)&this->oldOffsetangles.y = 0i64;
  *(_DWORD *)&this->linkedEnt = 2047;
}

/*
==============
cg_t::ResetCgCharacterInfo
==============
*/
void cg_t::ResetCgCharacterInfo(cg_t *this, const int entNum)
{
  if ( ((unsigned __int8 (__fastcall *)(cg_t *))this->HasCgCharacterInfo)(this) )
    this->GetCgCharacterInfo(this, (unsigned int)entNum)->foliageInfo.foliageSoundTime = 0;
}

/*
==============
cg_t::ResetLocalClientGlobalsObufscation
==============
*/
void cg_t::ResetLocalClientGlobalsObufscation(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int refdefViewOrg_set_aab; 
  bdRandom v13; 
  __int64 pbBuffer; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  bdRandom::bdRandom(&v13);
  v3 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  bdRandom::bdRandom(&v13);
  v4 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  CG_ResetPoseRandom(&LocalClientGlobals->viewModelPose, v4, v3);
  bdRandom::bdRandom(&v13);
  v5 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  bdRandom::bdRandom(&v13);
  v6 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  CG_ResetPoseRandom(&LocalClientGlobals->viewModelPoseLeftHand, v6, v5);
  bdRandom::bdRandom(&v13);
  v7 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  bdRandom::bdRandom(&v13);
  v8 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  CG_ResetPoseRandom(&LocalClientGlobals->firstPersonLegsPose, v8, v7);
  bdRandom::bdRandom(&v13);
  v9 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  bdRandom::bdRandom(&v13);
  v10 = bdRandom::nextUInt(&v13) % 0x22;
  bdRandom::~bdRandom(&v13);
  CG_ResetPoseRandom(&LocalClientGlobals->firstPersonHelmetPose, v10, v9);
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, (PUCHAR)&pbBuffer, 8u, 0) || (v11 = pbBuffer, !pbBuffer) )
  {
    bdRandom::bdRandom(&v13);
    bdRandom::nextUBytes(&v13, (unsigned __int8 *)&pbBuffer, 8);
    bdRandom::~bdRandom(&v13);
    v11 = pbBuffer;
  }
  LocalClientGlobals->refdef.view.refdefViewOrg_aab = v11;
  LocalClientGlobals->refdef.view.refdefViewOrg_set_aab = HIDWORD(pbBuffer);
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1304, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView", -2i64) )
    __debugbreak();
  refdefViewOrg_set_aab = LocalClientGlobals->refdef.view.refdefViewOrg_set_aab;
  if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1262, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LocalClientGlobals->refdef.view.refdefViewOrg_aab += refdefViewOrg_set_aab;
  LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) = LODWORD(vec3_origin.v[0]) ^ ((((_DWORD)LocalClientGlobals + 26936) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) * ((((_DWORD)LocalClientGlobals + 26936) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) + 2));
  LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) = LODWORD(vec3_origin.v[1]) ^ ((((_DWORD)LocalClientGlobals + 26940) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) * ((((_DWORD)LocalClientGlobals + 26940) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) + 2));
  LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) = LODWORD(vec3_origin.v[2]) ^ ((((_DWORD)LocalClientGlobals + 26944) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) * ((((_DWORD)LocalClientGlobals + 26944) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) + 2));
  memset(&pbBuffer, 0, sizeof(pbBuffer));
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->kickAVel);
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->kickAngles);
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->rawKickAngles);
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->aimAssistEyeOrigin);
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->aimAssistViewOrigin);
  CL_StreamViews_Reset(localClientNum);
}

/*
==============
cg_t::SetViewModelTransform
==============
*/
void cg_t::SetViewModelTransform(cg_t *this, const tmat33_t<vec3_t> *axis, const vec3_t *origin)
{
  MatrixCopy33(axis, (tmat33_t<vec3_t> *)&this->viewModelAxis);
  this->viewModelAxis.m[3] = *origin;
}

/*
==============
cg_t::TryGetCgCharacterInfo
==============
*/
CgCharacterInfo *cg_t::TryGetCgCharacterInfo(cg_t *this, const int entNum)
{
  if ( ((unsigned __int8 (__fastcall *)(cg_t *))this->HasCgCharacterInfo)(this) )
    return this->GetCgCharacterInfo(this, (unsigned int)entNum);
  else
    return 0i64;
}

/*
==============
cg_t::TryGetCgCharacterInfo
==============
*/
const CgCharacterInfo *cg_t::TryGetCgCharacterInfo(cg_t *this, const int entNum)
{
  if ( ((unsigned __int8 (__fastcall *)(cg_t *))this->HasCgCharacterInfo)(this) )
    return this->GetCgCharacterInfo(this, (unsigned int)entNum);
  else
    return 0i64;
}

