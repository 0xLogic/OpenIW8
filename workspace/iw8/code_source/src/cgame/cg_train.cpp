/*
==============
CG_Train_Init
==============
*/

void __fastcall CG_Train_Init(const LocalClientNum_t localClientNum)
{
  ?CG_Train_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Train_SnapshotFinishSetNextSnap
==============
*/

void __fastcall CG_Train_SnapshotFinishSetNextSnap(const LocalClientNum_t localClientNum, const int snapshotTime)
{
  ?CG_Train_SnapshotFinishSetNextSnap@@YAXW4LocalClientNum_t@@H@Z(localClientNum, snapshotTime);
}

/*
==============
CG_Train_PreRender
==============
*/

void __fastcall CG_Train_PreRender(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Train_PreRender@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Train_EvalSnapshotEnt
==============
*/

void __fastcall CG_Train_EvalSnapshotEnt(const LocalClientNum_t localClientNum, const centity_t *cent, const int snapshotTime)
{
  ?CG_Train_EvalSnapshotEnt@@YAXW4LocalClientNum_t@@PEBUcentity_t@@H@Z(localClientNum, cent, snapshotTime);
}

/*
==============
CG_Train_TryDoTrainPoseController
==============
*/

bool __fastcall CG_Train_TryDoTrainPoseController(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  return ?CG_Train_TryDoTrainPoseController@@YA_NPEBUcpose_t@@PEBUDObj@@PEAUDObjPartBits@@@Z(pose, obj, partBits);
}

/*
==============
CG_Train_GetParent
==============
*/

__int16 __fastcall CG_Train_GetParent(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_Train_GetParent@@YAFW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Train_EvalSnapshotEnt
==============
*/
void CG_Train_EvalSnapshotEnt(const LocalClientNum_t localClientNum, const centity_t *cent, const int snapshotTime)
{
  __int64 v3; 
  const dvar_t *v6; 
  __int16 number; 
  const char *FirstModelName; 
  const char *v9; 
  unsigned __int64 v10; 
  _QWORD *v11; 
  _QWORD *v12; 
  int v13; 
  unsigned __int64 i; 
  __int64 v15; 
  __int64 v16; 
  __int64 *v17; 
  __int64 *v18; 
  __int64 **v19; 
  __int64 *v20; 
  __int128 v21; 
  double v22; 
  int v23; 
  __int64 v24; 
  bool outIsComposite; 
  __int128 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  _BYTE v30[28]; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 103, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v6 = DVARBOOL_cg_train_killswitch_enabled;
  if ( !DVARBOOL_cg_train_killswitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && cent->nextState.eType == ET_SCRIPTMOVER && (cent->nextState.staticState.vehiclePlayer.playerIndex & 0x20) != 0 )
  {
    number = cent->nextState.number;
    outIsComposite = 0;
    FirstModelName = CG_EntityMP_GetFirstModelName((const LocalClientNum_t)v3, cent, &outIsComposite);
    v9 = FirstModelName;
    if ( FirstModelName )
    {
      if ( *FirstModelName )
      {
        v28 = 616 * v3;
        v29 = v3;
        v10 = (unsigned int)number % 0x1Dui64;
        if ( v10 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v11 = (_QWORD *)((char *)&s_TrainCarInfoMap[0].m_buckets + 616 * v3 + 8 * v10);
        v12 = (_QWORD *)*v11;
        if ( (_QWORD *)*v11 == v11 )
        {
LABEL_24:
          v12 = NULL;
        }
        else
        {
          while ( 1 )
          {
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( *((_WORD *)v12 + 4) == number )
              break;
            v12 = (_QWORD *)*v12;
            if ( v12 == v11 )
              goto LABEL_24;
          }
        }
        if ( v12 )
        {
          *((_DWORD *)v12 + 7) = snapshotTime;
        }
        else
        {
          v13 = -1;
          for ( i = 0i64; i < 8; ++i )
          {
            if ( !I_strcmp(TRAIN_MODEL_NAMES[i], v9) )
              v13 = i;
          }
          if ( v13 == -1 )
          {
            v15 = 0i64;
            while ( I_strcmp(IGNORED_TRAIN_MODEL_NAMES[v15], v9) )
            {
              if ( (unsigned __int64)++v15 >= 1 )
              {
                LODWORD(v24) = number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 162, ASSERT_TYPE_ASSERT, "( foundInIgnoredList || (trainCarIndex >= 0) )", "Unknown train model '%s' used in entity %u.", v9, v24) )
                  __debugbreak();
                break;
              }
            }
          }
          v16 = v28;
          if ( *(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v28) < 9 )
            goto LABEL_43;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 164, ASSERT_TYPE_ASSERT, "( s_TrainCarInfoMap[localClientNum].size() < MAX_TRACKED_TRAIN_ENTS )", "Received more entities with train cars than expected.") )
            __debugbreak();
          if ( *(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v16) < 9 )
          {
LABEL_43:
            *(_WORD *)v30 = number;
            DWORD2(v26) = 0;
            HIDWORD(v26) = v13;
            v27 = (unsigned int)snapshotTime;
            *(_QWORD *)&v26 = 0i64;
            *(_OWORD *)&v30[4] = v26;
            *(_QWORD *)&v30[20] = (unsigned int)snapshotTime;
            if ( v10 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            v17 = *(__int64 **)((char *)&s_TrainCarInfoMap[0].m_buckets.ntl::internal::hash_table<short,TrainCarInfo,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<short,TrainCarInfo>,9,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::hash<short>,ntl::equal_to<short>,ntl::integral_constant<bool,1> >::m_data[v10].m_listHead.m_sentinel.mp_next + v16);
            v18 = (__int64 *)((char *)&s_TrainCarInfoMap[0].m_buckets.ntl::internal::hash_table<short,TrainCarInfo,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<short,TrainCarInfo>,9,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::hash<short>,ntl::equal_to<short>,ntl::integral_constant<bool,1> >::m_data[v10] + v16);
            if ( v17 == v18 )
            {
LABEL_52:
              v19 = (__int64 **)((char *)&s_TrainCarInfoMap[0].m_freelist + v16);
              if ( !*(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v16) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                  __debugbreak();
                if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                  __debugbreak();
              }
              if ( *v19 == (__int64 *)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 9ui64) )
                __debugbreak();
              v20 = *v19;
              v21 = *(_OWORD *)v30;
              v22 = *(double *)&v30[16];
              *v19 = (__int64 *)**v19;
              v23 = *(_DWORD *)&v30[24];
              *(_OWORD *)(v20 + 1) = v21;
              *((double *)v20 + 3) = v22;
              *v20 = 0i64;
              *((_DWORD *)v20 + 8) = v23;
              *v20 = *v18;
              *v18 = (__int64)v20;
              ++*(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v16);
            }
            else
            {
              while ( 1 )
              {
                if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                  __debugbreak();
                if ( *((_WORD *)v17 + 4) == number )
                  break;
                v17 = (__int64 *)*v17;
                if ( v17 == v18 )
                  goto LABEL_52;
              }
            }
            if ( v13 >= 0 )
              s_TrainCarEntNums[v29][v13] = number;
          }
        }
      }
    }
  }
}

/*
==============
CG_Train_GetParent
==============
*/
__int64 CG_Train_GetParent(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  const dvar_t *v4; 
  __int64 v5; 
  char *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  char *v9; 
  char *v10; 
  __int64 v11; 
  __int64 v13; 
  __int64 v14; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 189, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 190, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  v4 = DVARBOOL_cg_train_killswitch_enabled;
  if ( !DVARBOOL_cg_train_killswitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled || (cent->nextState.staticState.vehiclePlayer.playerIndex & 0x20) == 0 )
    return 2047i64;
  v5 = v2;
  v6 = (char *)&s_TrainCarInfoMap[0].m_buckets + 616 * v2;
  v7 = ((unsigned int)cent->nextState.number * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
  v8 = (unsigned int)cent->nextState.number - 29 * ((v7 + (((unsigned __int64)(unsigned int)cent->nextState.number - v7) >> 1)) >> 4);
  if ( v8 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v9 = &v6[8 * v8];
  v10 = *(char **)v9;
  if ( *(char **)v9 == v9 )
  {
LABEL_24:
    v10 = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( *((_WORD *)v10 + 4) == cent->nextState.number )
        break;
      v10 = *(char **)v10;
      if ( v10 == v9 )
        goto LABEL_24;
    }
  }
  if ( !v10 )
    return 2047i64;
  v11 = *((int *)v10 + 6);
  if ( (int)v11 < 1 )
    return 2047i64;
  if ( (unsigned int)(v11 - 1) >= 8 )
  {
    LODWORD(v14) = 8;
    LODWORD(v13) = v11 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 220, ASSERT_TYPE_ASSERT, "(unsigned)( leadingCarIndex ) < (unsigned)( TRAIN_CAR_COUNT )", "leadingCarIndex doesn't index TRAIN_CAR_COUNT\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  return *(_WORD *)(&s_TrainCarInfoMap[1].m_hashFunc + 16 * v5 + 2 * v11 + 5);
}

/*
==============
CG_Train_Init
==============
*/
void CG_Train_Init(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned __int64 *v4; 
  unsigned __int64 *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *j; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v7; 
  __int64 v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = 616 * v1;
  v3 = v1;
  v4 = (unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_buckets + 616 * v1);
  for ( i = &s_TrainCarInfoMap[0].m_currentNumItems + 77 * v1; v4 != i; ++v4 )
  {
    for ( j = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)*v4; j != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v4; *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v2) = v7 )
    {
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v7 = j;
      if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      j = j->mp_next;
      v7->mp_next = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head + v2);
    }
    *v4 = (unsigned __int64)v4;
  }
  v8 = v3;
  *i = 0i64;
  *(_DWORD *)&s_TrainCarEntNums[v8][0] = 134154239;
  *(_DWORD *)&s_TrainCarEntNums[v8][2] = 134154239;
  *(_DWORD *)&s_TrainCarEntNums[v8][4] = 134154239;
  *(_DWORD *)&s_TrainCarEntNums[v8][6] = 134154239;
}

/*
==============
CG_Train_PreRender
==============
*/
void CG_Train_PreRender(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  const dvar_t *v4; 
  unsigned __int64 v5; 
  _QWORD *v6; 
  _QWORD *v7; 
  __int16 Parent; 
  unsigned int v9; 
  centity_t *Entity; 
  unsigned int v11; 
  unsigned int v12; 
  const DObj *v13; 
  centity_t *v14; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v20; 
  __int64 v29; 
  __int64 v30; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t origin; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> outWorldTransform; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 229, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 230, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  v4 = DVARBOOL_cg_train_killswitch_enabled;
  if ( !DVARBOOL_cg_train_killswitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v5 = (unsigned int)cent->nextState.number % 0x1Dui64;
    if ( v5 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v6 = (_QWORD *)((char *)&s_TrainCarInfoMap[0].m_buckets + 616 * v2 + 8 * v5);
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
    {
LABEL_23:
      v7 = NULL;
    }
    else
    {
      while ( 1 )
      {
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( *((_WORD *)v7 + 4) == cent->nextState.number )
          break;
        v7 = (_QWORD *)*v7;
        if ( v7 == v6 )
          goto LABEL_23;
      }
    }
    if ( v7 )
    {
      *((_BYTE *)v7 + 32) = 0;
      Parent = CG_Train_GetParent((const LocalClientNum_t)v2, cent);
      if ( Parent != 2047 )
      {
        v9 = Parent;
        Entity = CG_GetEntity((const LocalClientNum_t)v2, Parent);
        if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 254, ASSERT_TYPE_ASSERT, "(CENextValid( parentEnt ))", (const char *)&queryFormat, "CENextValid( parentEnt )") )
          __debugbreak();
        if ( v9 > 0x9E4 )
        {
          LODWORD(v30) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v30) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= 2 )
        {
          LODWORD(v30) = 2;
          LODWORD(v29) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        v11 = 2533 * v2 + v9;
        if ( v11 >= 0x13CA )
        {
          LODWORD(v30) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v30) )
            __debugbreak();
        }
        v12 = clientObjMap[v11];
        if ( v12 )
        {
          if ( v12 >= (unsigned int)s_objCount )
          {
            LODWORD(v30) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v30) )
              __debugbreak();
          }
          v13 = (const DObj *)s_objBuf[v12];
          if ( v13 )
          {
            inOutIndex[0] = -2;
            if ( DObjGetBoneIndexInternal_3(v13, scr_const.tag_rear_connect, inOutIndex, &modelIndex) )
            {
              CG_DObjGetWorldBoneBindPose(&Entity->pose, v13, inOutIndex[0], &outWorldTransform);
              v14 = CG_GetEntity((const LocalClientNum_t)v2, cent->nextState.number);
              if ( (v14->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 273, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
                __debugbreak();
              if ( !v14->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
                __debugbreak();
              FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v14->pose.origin.Get_origin, &v14->pose);
              FunctionPointer_origin(&v14->pose.origin.origin.origin, &origin);
              if ( v14->pose.isPosePrecise )
              {
                _XMM0 = LODWORD(origin.v[0]);
                _XMM2 = LODWORD(origin.v[1]);
                __asm { vcvtdq2pd xmm0, xmm0 }
                *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
                _XMM0 = v20;
                __asm
                {
                  vcvtsd2ss xmm1, xmm0, xmm0
                  vcvtdq2pd xmm2, xmm2
                }
                *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM2 + 1);
                *(double *)&v20 = *(double *)&_XMM2 * 0.000244140625;
                _XMM0 = v20;
                _XMM2 = LODWORD(origin.v[2]);
                origin.v[0] = *(float *)&_XMM1;
                __asm
                {
                  vcvtsd2ss xmm1, xmm0, xmm0
                  vcvtdq2pd xmm2, xmm2
                }
                *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM2 + 1);
                *(double *)&v20 = *(double *)&_XMM2 * 0.000244140625;
                _XMM0 = v20;
                origin.v[1] = *(float *)&_XMM1;
                __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                origin.v[2] = *(float *)&_XMM1;
              }
              AnglesAndOriginToMatrix43(&v14->pose.angles, &origin, &result);
              MatrixTransposeTransformVector43(&outWorldTransform.m[3], &result, (vec3_t *)v7 + 1);
              *((_BYTE *)v7 + 32) = 1;
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_Train_SnapshotFinishSetNextSnap
==============
*/
void CG_Train_SnapshotFinishSetNextSnap(const LocalClientNum_t localClientNum, const int snapshotTime)
{
  __int64 v2; 
  const dvar_t *v4; 
  __int64 v5; 
  __int64 v6; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29> *v7; 
  unsigned __int64 *v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *v9; 
  ntl::internal::hash_table_node<short,TrainCarInfo> *mp_next; 
  __int64 v11; 
  ntl::internal::hash_table_node<short,TrainCarInfo> *mp_node; 
  ntl::internal::hash_table_node<short,TrainCarInfo> *v13; 
  ntl::internal::hash_table_node<short,TrainCarInfo> *v14; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *mp_bucket; 
  __int128 v16; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *v17; 
  ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &> v18; 
  ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &> v19; 
  ntl::internal::slist_head_base<ntl::internal::hash_table_node<short,TrainCarInfo> > *p_m_listHead; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 71, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = DVARBOOL_cg_train_killswitch_enabled;
  if ( !DVARBOOL_cg_train_killswitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v5 = 616 * v2;
    v6 = v2;
    v7 = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29> *)((char *)&s_TrainCarInfoMap[0].m_buckets + 616 * v2);
    v8 = &s_TrainCarInfoMap[0].m_currentNumItems + 77 * v2;
    if ( (char *)&s_TrainCarInfoMap[0].m_buckets + v5 != (char *)&s_TrainCarInfoMap[0].m_currentNumItems + v5 )
    {
      v9 = &s_TrainCarInfoMap[0].m_buckets.ntl::internal::hash_table<short,TrainCarInfo,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<short,TrainCarInfo>,9,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::hash<short>,ntl::equal_to<short>,ntl::integral_constant<bool,1> >::m_data[(unsigned __int64)v5 / 8];
      while ( 1 )
      {
        mp_next = (ntl::internal::hash_table_node<short,TrainCarInfo> *)v9->m_listHead.m_sentinel.mp_next;
        if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *)v9->m_listHead.m_sentinel.mp_next != v9 )
          break;
        if ( ++v9 == (ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *)v8 )
          return;
      }
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 305, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      v18.mp_node = mp_next;
      v18.mp_array = v7;
      v18.mp_bucket = v9;
      while ( mp_next )
      {
        if ( mp_next->second.lastSnapshotTime == snapshotTime )
        {
          mp_next = (ntl::internal::hash_table_node<short,TrainCarInfo> *)mp_next->mp_next;
          v18.mp_node = mp_next;
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 130, ASSERT_TYPE_ASSERT, "( mp_bucket )", (const char *)&queryFormat, "mp_bucket") )
            __debugbreak();
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *)v9->m_listHead.m_sentinel.mp_next == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 131, ASSERT_TYPE_ASSERT, "( mp_bucket->empty() == false )", (const char *)&queryFormat, "mp_bucket->empty() == false") )
            __debugbreak();
          if ( mp_next != (ntl::internal::hash_table_node<short,TrainCarInfo> *)v9 )
            continue;
          ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &>::set_next_used_bucket(&v18);
        }
        else
        {
          if ( mp_next->second.carIndex >= 0 )
            s_TrainCarEntNums[v6][mp_next->second.carIndex] = 2047;
          v11 = 616 * v6;
          p_m_listHead = &v18.mp_bucket->m_listHead;
          mp_node = v18.mp_node;
          v19 = v18;
          v13 = v18.mp_node;
          if ( !v18.mp_node )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 145, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 127, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
          }
          v14 = (ntl::internal::hash_table_node<short,TrainCarInfo> *)v13->mp_next;
          mp_bucket = v19.mp_bucket;
          v19.mp_node = v14;
          if ( !v19.mp_bucket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 130, ASSERT_TYPE_ASSERT, "( mp_bucket )", (const char *)&queryFormat, "mp_bucket") )
            __debugbreak();
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *)mp_bucket->m_listHead.m_sentinel.mp_next == mp_bucket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 131, ASSERT_TYPE_ASSERT, "( mp_bucket->empty() == false )", (const char *)&queryFormat, "mp_bucket->empty() == false") )
            __debugbreak();
          if ( v14 == (ntl::internal::hash_table_node<short,TrainCarInfo> *)mp_bucket )
            ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &>::set_next_used_bucket(&v19);
          if ( !mp_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 348, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
            __debugbreak();
          ntl::internal::slist_head_base<ntl::internal::hash_table_node<short,TrainCarInfo>>::remove(p_m_listHead, mp_node);
          mp_node->mp_next = NULL;
          if ( !mp_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
            __debugbreak();
          v16 = *(_OWORD *)&v19.mp_node;
          v17 = v19.mp_bucket;
          mp_node->mp_next = *(ntl::internal::slist_node_base **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v11);
          *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v11) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_node;
          --*(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v11);
          *(_OWORD *)&v18.mp_node = v16;
          v18.mp_bucket = v17;
        }
        mp_next = v18.mp_node;
        v9 = v18.mp_bucket;
      }
    }
  }
}

/*
==============
CG_Train_TryDoTrainPoseController
==============
*/
char CG_Train_TryDoTrainPoseController(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int entnum; 
  unsigned __int64 v11; 
  __int16 v12; 
  LocalClientNum_t LocalClientNumForDobj; 
  char *v14; 
  unsigned __int64 v15; 
  char *v16; 
  char *v17; 
  float v18; 
  float transWeight; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float *outT2; 
  __int64 v32; 
  unsigned __int8 v33[4]; 
  int modelIndex; 
  unsigned __int8 inOutIndex; 
  unsigned __int8 v36; 
  unsigned __int8 v37[2]; 
  float v38; 
  float outT1; 
  vec3_t p1; 
  vec3_t p2; 
  vec3_t sphereCenter; 
  DObjAnimMat v43; 
  vec3_t vec; 
  tmat43_t<vec3_t> in; 
  vec3_t angles; 
  vec3_t v47; 
  DObjAnimMat outMat; 
  DObjAnimMat v49; 
  DObjAnimMat v50; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v52; 
  tmat43_t<vec3_t> out; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 289, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v8 = DVARBOOL_cg_train_killswitch_enabled;
  if ( !DVARBOOL_cg_train_killswitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return 0;
  v9 = DVARBOOL_cg_train_killswitch_enable_pose_controller;
  if ( !DVARBOOL_cg_train_killswitch_enable_pose_controller && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enable_pose_controller") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
    return 0;
  entnum = (__int16)obj->entnum;
  v11 = (unsigned int)(entnum - 1);
  v12 = entnum - 1;
  if ( (unsigned int)v11 >= 0x800 )
  {
    LODWORD(v32) = 2048;
    LODWORD(outT2) = (__int16)(entnum - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outT2, v32) )
      __debugbreak();
  }
  LocalClientNumForDobj = CG_Entity_GetLocalClientNumForDobj(v12, obj);
  if ( LocalClientNumForDobj == LOCAL_CLIENT_INVALID )
    return 0;
  v14 = (char *)&s_TrainCarInfoMap[0].m_buckets + 616 * LocalClientNumForDobj;
  v15 = v11 % 0x1D;
  if ( v15 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v16 = &v14[8 * v15];
  v17 = *(char **)v16;
  if ( *(char **)v16 == v16 )
  {
LABEL_25:
    v17 = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( *((_WORD *)v17 + 4) == v12 )
        break;
      v17 = *(char **)v17;
      if ( v17 == v16 )
        goto LABEL_25;
    }
  }
  if ( !v17 )
    return 0;
  if ( !v17[32] )
    return 0;
  inOutIndex = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_link_start, &inOutIndex, &modelIndex) )
    return 0;
  v36 = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_link_end, &v36, &modelIndex) )
    return 0;
  v33[0] = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_base, v33, &modelIndex) )
    return 0;
  v37[0] = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_connect, v37, &modelIndex) )
    return 0;
  v56 = v3;
  v55 = v4;
  v54 = v5;
  DObjGetBasePoseMatrix(obj, inOutIndex, &outMat);
  p1 = outMat.trans;
  DObjGetBasePoseMatrix(obj, v36, &v49);
  p2 = v49.trans;
  DObjGetBasePoseMatrix(obj, v33[0], &v43);
  modelIndex = SLODWORD(v43.quat.v[0]);
  if ( (LODWORD(v43.quat.v[0]) & 0x7F800000) == 2139095040 || (modelIndex = SLODWORD(v43.quat.v[1]), (LODWORD(v43.quat.v[1]) & 0x7F800000) == 2139095040) || (v18 = v43.quat.v[2], modelIndex = SLODWORD(v43.quat.v[2]), (LODWORD(v43.quat.v[2]) & 0x7F800000) == 2139095040) || (modelIndex = SLODWORD(v43.quat.v[3]), (LODWORD(v43.quat.v[3]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
    v18 = v43.quat.v[2];
  }
  transWeight = v43.transWeight;
  modelIndex = SLODWORD(v43.transWeight);
  if ( (LODWORD(v43.transWeight) & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
      __debugbreak();
    v18 = v43.quat.v[2];
    transWeight = v43.transWeight;
  }
  v20 = (float)(transWeight * v43.quat.v[0]) * v43.quat.v[0];
  v21 = v43.quat.v[3] * (float)(transWeight * v43.quat.v[0]);
  v22 = v18 * (float)(transWeight * v43.quat.v[0]);
  v23 = v43.quat.v[1] * (float)(transWeight * v43.quat.v[0]);
  v24 = v18 * (float)(v43.quat.v[1] * transWeight);
  v25 = v43.quat.v[1] * (float)(v43.quat.v[1] * transWeight);
  v26 = v43.quat.v[3] * (float)(v43.quat.v[1] * transWeight);
  v27 = v18 * transWeight;
  in.m[0].v[1] = (float)(v43.quat.v[3] * v27) + v23;
  in.m[1].v[0] = v23 - (float)(v43.quat.v[3] * v27);
  in.m[1].v[2] = v24 + v21;
  in.m[2].v[1] = v24 - v21;
  in.m[0].v[0] = 1.0 - (float)((float)(v18 * v27) + v25);
  in.m[0].v[2] = v22 - v26;
  in.m[1].v[1] = 1.0 - (float)((float)(v18 * v27) + v20);
  in.m[2].v[0] = v26 + v22;
  in.m[2].v[2] = 1.0 - (float)(v25 + v20);
  in.m[3] = v43.trans;
  DObjGetBasePoseMatrix(obj, v37[0], &v50);
  sphereCenter = *(vec3_t *)(v17 + 1);
  outT1 = FLOAT_N3_4028235e38;
  v38 = FLOAT_N3_4028235e38;
  if ( !IntersectLineSegmentSphere(&p1, &p2, &sphereCenter, fsqrt((float)((float)((float)(v50.trans.v[1] - in.m[3].v[1]) * (float)(v50.trans.v[1] - in.m[3].v[1])) + (float)((float)(v50.trans.v[0] - in.m[3].v[0]) * (float)(v50.trans.v[0] - in.m[3].v[0]))) + (float)((float)(v50.trans.v[2] - in.m[3].v[2]) * (float)(v50.trans.v[2] - in.m[3].v[2]))), &outT1, &v38) )
    return 0;
  _XMM0 = LODWORD(v38);
  __asm { vminss  xmm7, xmm0, [rsp+2A0h+outT1] }
  vec.v[0] = sphereCenter.v[0] - (float)((float)((float)(p2.v[0] - p1.v[0]) * *(float *)&_XMM7) + p1.v[0]);
  vec.v[2] = sphereCenter.v[2] - (float)((float)((float)(p2.v[2] - p1.v[2]) * *(float *)&_XMM7) + p1.v[2]);
  axis.m[3].v[0] = (float)((float)(p2.v[0] - p1.v[0]) * *(float *)&_XMM7) + p1.v[0];
  axis.m[3].v[1] = (float)((float)(p2.v[1] - p1.v[1]) * *(float *)&_XMM7) + p1.v[1];
  axis.m[3].v[2] = (float)((float)(p2.v[2] - p1.v[2]) * *(float *)&_XMM7) + p1.v[2];
  vec.v[1] = sphereCenter.v[1] - axis.m[3].v[1];
  vectoangles(&vec, &angles);
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  MatrixInverseOrthogonal43(&in, &out);
  MatrixMultiply43(&axis, &out, &v52);
  AxisToAngles((const tmat33_t<vec3_t> *)&v52, &v47);
  DObjSetLocalTag(obj, partBits, v33[0], &v52.m[3], &v47);
  return 1;
}

