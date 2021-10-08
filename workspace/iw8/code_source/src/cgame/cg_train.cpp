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
  __int64 *v19; 
  __int64 *v20; 
  __int64 **v21; 
  int v25; 
  __int64 v26; 
  bool outIsComposite; 
  __int128 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  _BYTE v32[28]; 

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
        v30 = 616 * v3;
        v31 = v3;
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
                LODWORD(v26) = number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 162, ASSERT_TYPE_ASSERT, "( foundInIgnoredList || (trainCarIndex >= 0) )", "Unknown train model '%s' used in entity %u.", v9, v26) )
                  __debugbreak();
                break;
              }
            }
          }
          v16 = v30;
          if ( *(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v30) < 9 )
            goto LABEL_43;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 164, ASSERT_TYPE_ASSERT, "( s_TrainCarInfoMap[localClientNum].size() < MAX_TRACKED_TRAIN_ENTS )", "Received more entities with train cars than expected.") )
            __debugbreak();
          if ( *(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v16) < 9 )
          {
LABEL_43:
            *(_WORD *)v32 = number;
            DWORD2(v28) = 0;
            HIDWORD(v28) = v13;
            v29 = (unsigned int)snapshotTime;
            *(_QWORD *)&v28 = 0i64;
            __asm
            {
              vmovups xmm0, [rsp+0D8h+var_90]
              vmovsd  xmm1, [rsp+0D8h+var_80]
              vmovups [rsp+0D8h+var_68+4], xmm0
              vmovsd  [rsp+0D8h+var_54], xmm1
            }
            if ( v10 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            v19 = *(__int64 **)((char *)&s_TrainCarInfoMap[0].m_buckets.ntl::internal::hash_table<short,TrainCarInfo,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<short,TrainCarInfo>,9,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::hash<short>,ntl::equal_to<short>,ntl::integral_constant<bool,1> >::m_data[v10].m_listHead.m_sentinel.mp_next + v16);
            v20 = (__int64 *)((char *)&s_TrainCarInfoMap[0].m_buckets.ntl::internal::hash_table<short,TrainCarInfo,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<short,TrainCarInfo>,9,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::hash<short>,ntl::equal_to<short>,ntl::integral_constant<bool,1> >::m_data[v10] + v16);
            if ( v19 == v20 )
            {
LABEL_52:
              v21 = (__int64 **)((char *)&s_TrainCarInfoMap[0].m_freelist + v16);
              if ( !*(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v16) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                  __debugbreak();
                if ( !*v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                  __debugbreak();
              }
              if ( *v21 == (__int64 *)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 9ui64) )
                __debugbreak();
              _RCX = *v21;
              __asm
              {
                vmovups xmm0, [rsp+0D8h+var_68]
                vmovsd  xmm1, qword ptr [rsp+80h]
              }
              *v21 = (__int64 *)**v21;
              v25 = *(_DWORD *)&v32[24];
              __asm
              {
                vmovups xmmword ptr [rcx+8], xmm0
                vmovsd  qword ptr [rcx+18h], xmm1
              }
              *_RCX = 0i64;
              *((_DWORD *)_RCX + 8) = v25;
              *_RCX = *v20;
              *v20 = (__int64)_RCX;
              ++*(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v16);
            }
            else
            {
              while ( 1 )
              {
                if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                  __debugbreak();
                if ( *((_WORD *)v19 + 4) == number )
                  break;
                v19 = (__int64 *)*v19;
                if ( v19 == v20 )
                  goto LABEL_52;
              }
            }
            if ( v13 >= 0 )
              s_TrainCarEntNums[v31][v13] = number;
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
                __asm
                {
                  vmovsd  xmm3, cs:__real@3f30000000000000
                  vmovd   xmm0, dword ptr [rsp+0F8h+origin]
                  vmovd   xmm2, dword ptr [rsp+0F8h+origin+4]
                  vcvtdq2pd xmm0, xmm0
                  vmulsd  xmm0, xmm0, xmm3
                  vcvtsd2ss xmm1, xmm0, xmm0
                  vcvtdq2pd xmm2, xmm2
                  vmulsd  xmm0, xmm2, xmm3
                  vmovd   xmm2, dword ptr [rsp+0F8h+origin+8]
                  vmovss  dword ptr [rsp+0F8h+origin], xmm1
                  vcvtsd2ss xmm1, xmm0, xmm0
                  vcvtdq2pd xmm2, xmm2
                  vmulsd  xmm0, xmm2, xmm3
                  vmovss  dword ptr [rsp+0F8h+origin+4], xmm1
                  vcvtsd2ss xmm1, xmm0, xmm0
                  vmovss  dword ptr [rsp+0F8h+origin+8], xmm1
                }
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
  __int64 v12; 
  ntl::internal::hash_table_node<short,TrainCarInfo> *mp_node; 
  ntl::internal::hash_table_node<short,TrainCarInfo> *v17; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *mp_bucket; 
  ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &> v21; 
  ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> >,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &> v22; 
  ntl::internal::slist_head_base<ntl::internal::hash_table_node<short,TrainCarInfo> > *v23; 

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
      v21.mp_node = mp_next;
      v21.mp_array = v7;
      v21.mp_bucket = v9;
      while ( mp_next )
      {
        if ( mp_next->second.lastSnapshotTime == snapshotTime )
        {
          mp_next = (ntl::internal::hash_table_node<short,TrainCarInfo> *)mp_next->mp_next;
          v21.mp_node = mp_next;
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 130, ASSERT_TYPE_ASSERT, "( mp_bucket )", (const char *)&queryFormat, "mp_bucket") )
            __debugbreak();
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *)v9->m_listHead.m_sentinel.mp_next == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 131, ASSERT_TYPE_ASSERT, "( mp_bucket->empty() == false )", (const char *)&queryFormat, "mp_bucket->empty() == false") )
            __debugbreak();
          if ( mp_next != (ntl::internal::hash_table_node<short,TrainCarInfo> *)v9 )
            continue;
          ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &>::set_next_used_bucket(&v21);
        }
        else
        {
          if ( mp_next->second.carIndex >= 0 )
            s_TrainCarEntNums[v6][mp_next->second.carIndex] = 2047;
          __asm { vmovsd  xmm1, [rbp+57h+var_80.mp_bucket] }
          v12 = 616 * v6;
          __asm
          {
            vmovsd  [rbp+57h+var_28], xmm1
            vmovups xmm1, xmmword ptr [rbp+57h+var_80.mp_node]
            vmovsd  xmm0, [rbp+57h+var_80.mp_bucket]
            vmovq   rbx, xmm1
            vmovups xmmword ptr [rbp+57h+var_68.mp_node], xmm1
          }
          mp_node = v22.mp_node;
          __asm { vmovsd  [rbp+57h+var_68.mp_bucket], xmm0 }
          if ( !_RBX )
          {
            if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 145, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") || (__debugbreak(), !mp_node) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 127, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
            }
          }
          v17 = (ntl::internal::hash_table_node<short,TrainCarInfo> *)mp_node->mp_next;
          mp_bucket = v22.mp_bucket;
          v22.mp_node = v17;
          if ( !v22.mp_bucket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 130, ASSERT_TYPE_ASSERT, "( mp_bucket )", (const char *)&queryFormat, "mp_bucket") )
            __debugbreak();
          if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo> > *)mp_bucket->m_listHead.m_sentinel.mp_next == mp_bucket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 131, ASSERT_TYPE_ASSERT, "( mp_bucket->empty() == false )", (const char *)&queryFormat, "mp_bucket->empty() == false") )
            __debugbreak();
          if ( v17 == (ntl::internal::hash_table_node<short,TrainCarInfo> *)mp_bucket )
            ntl::internal::hash_table_iterator<ntl::pair<short,TrainCarInfo>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,29>,ntl::intrusive_slist<ntl::internal::hash_table_node<short,TrainCarInfo>>,ntl::internal::hash_table_node<short,TrainCarInfo>,ntl::pair<short,TrainCarInfo> *,ntl::pair<short,TrainCarInfo> &>::set_next_used_bucket(&v22);
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 348, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
            __debugbreak();
          ntl::internal::slist_head_base<ntl::internal::hash_table_node<short,TrainCarInfo>>::remove(v23, _RBX);
          _RBX->mp_next = NULL;
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
            __debugbreak();
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+57h+var_68.mp_node]
            vmovsd  xmm1, [rbp+57h+var_68.mp_bucket]
          }
          _RBX->mp_next = *(ntl::internal::slist_node_base **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v12);
          *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)((char *)&s_TrainCarInfoMap[0].m_freelist.m_head.mp_next + v12) = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBX;
          --*(unsigned __int64 *)((char *)&s_TrainCarInfoMap[0].m_currentNumItems + v12);
          __asm
          {
            vmovups xmmword ptr [rbp+57h+var_80.mp_node], xmm0
            vmovsd  [rbp+57h+var_80.mp_bucket], xmm1
          }
        }
        mp_next = v21.mp_node;
        v9 = v21.mp_bucket;
      }
    }
  }
}

/*
==============
CG_Train_TryDoTrainPoseController
==============
*/
bool CG_Train_TryDoTrainPoseController(const cpose_t *pose, const DObj *obj, DObjPartBits *partBits)
{
  const dvar_t *v11; 
  const dvar_t *v12; 
  int entnum; 
  unsigned __int64 v14; 
  __int16 v15; 
  LocalClientNum_t LocalClientNumForDobj; 
  char *v17; 
  unsigned __int64 v18; 
  char *v19; 
  _QWORD *v20; 
  bool v82; 
  bool result; 
  float *outT2; 
  __int64 v108; 
  unsigned __int8 v109[4]; 
  int modelIndex; 
  unsigned __int8 inOutIndex; 
  unsigned __int8 v112; 
  unsigned __int8 v113[2]; 
  float v114; 
  float outT1; 
  vec3_t p1; 
  vec3_t p2; 
  vec3_t sphereCenter; 
  DObjAnimMat v119; 
  vec3_t vec; 
  tmat43_t<vec3_t> in; 
  vec3_t angles; 
  vec3_t v123; 
  DObjAnimMat outMat; 
  DObjAnimMat v125; 
  DObjAnimMat v126; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v128; 
  tmat43_t<vec3_t> out; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 289, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v11 = DVARBOOL_cg_train_killswitch_enabled;
  if ( !DVARBOOL_cg_train_killswitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enabled") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+2A0h+var_40], xmm6
    vmovaps [rsp+2A0h+var_50], xmm7
  }
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
    goto LABEL_45;
  v12 = DVARBOOL_cg_train_killswitch_enable_pose_controller;
  if ( !DVARBOOL_cg_train_killswitch_enable_pose_controller && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_train_killswitch_enable_pose_controller") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.enabled )
    goto LABEL_45;
  entnum = (__int16)obj->entnum;
  v14 = (unsigned int)(entnum - 1);
  v15 = entnum - 1;
  if ( (unsigned int)v14 >= 0x800 )
  {
    LODWORD(v108) = 2048;
    LODWORD(outT2) = (__int16)(entnum - 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_train.cpp", 304, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outT2, v108) )
      __debugbreak();
  }
  LocalClientNumForDobj = CG_Entity_GetLocalClientNumForDobj(v15, obj);
  if ( LocalClientNumForDobj == LOCAL_CLIENT_INVALID )
    goto LABEL_45;
  v17 = (char *)&s_TrainCarInfoMap[0].m_buckets + 616 * LocalClientNumForDobj;
  v18 = v14 % 0x1D;
  if ( v18 >= 0x1D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v19 = &v17[8 * v18];
  v20 = *(_QWORD **)v19;
  if ( *(char **)v19 == v19 )
  {
LABEL_25:
    v20 = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( *((_WORD *)v20 + 4) == v15 )
        break;
      v20 = (_QWORD *)*v20;
      if ( v20 == (_QWORD *)v19 )
        goto LABEL_25;
    }
  }
  if ( !v20 )
    goto LABEL_45;
  if ( !*((_BYTE *)v20 + 32) )
    goto LABEL_45;
  inOutIndex = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_link_start, &inOutIndex, &modelIndex) )
    goto LABEL_45;
  v112 = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_link_end, &v112, &modelIndex) )
    goto LABEL_45;
  v109[0] = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_base, v109, &modelIndex) )
    goto LABEL_45;
  v113[0] = -2;
  if ( !DObjGetBoneIndexInternal_3(obj, scr_const.tag_front_connect, v113, &modelIndex) )
    goto LABEL_45;
  __asm
  {
    vmovaps [rsp+2A0h+var_60], xmm8
    vmovaps [rsp+2A0h+var_70], xmm9
    vmovaps [rsp+2A0h+var_80], xmm10
    vmovaps [rsp+2A0h+var_90], xmm11
  }
  DObjGetBasePoseMatrix(obj, inOutIndex, &outMat);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1A0h+outMat.trans]
    vmovss  xmm1, dword ptr [rbp+1A0h+outMat.trans+4]
    vmovss  dword ptr [rsp+2A0h+p1], xmm0
    vmovss  xmm0, dword ptr [rbp+1A0h+outMat.trans+8]
    vmovss  dword ptr [rsp+2A0h+p1+8], xmm0
    vmovss  dword ptr [rsp+2A0h+p1+4], xmm1
  }
  DObjGetBasePoseMatrix(obj, v112, &v125);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1A0h+var_170.trans]
    vmovss  xmm1, dword ptr [rbp+1A0h+var_170.trans+4]
    vmovss  dword ptr [rsp+2A0h+p2], xmm0
    vmovss  xmm0, dword ptr [rbp+1A0h+var_170.trans+8]
    vmovss  dword ptr [rsp+2A0h+p2+8], xmm0
    vmovss  dword ptr [rsp+2A0h+p2+4], xmm1
  }
  DObjGetBasePoseMatrix(obj, v109[0], &v119);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1A0h+var_210.quat]
    vmovss  [rsp+2A0h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1A0h+var_210.quat+4]
    vmovss  [rsp+2A0h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+1A0h+var_210.quat+8]
    vmovss  [rsp+2A0h+modelIndex], xmm5
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1A0h+var_210.quat+0Ch]
    vmovss  [rsp+2A0h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
  {
LABEL_49:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
      __debugbreak();
    __asm { vmovss  xmm5, dword ptr [rbp+1A0h+var_210.quat+8] }
  }
  __asm
  {
    vmovss  xmm4, [rbp+1A0h+var_210.transWeight]
    vmovss  [rsp+2A0h+modelIndex], xmm4
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+1A0h+var_210.quat+8]
      vmovss  xmm4, [rbp+1A0h+var_210.transWeight]
    }
  }
  __asm
  {
    vmulss  xmm1, xmm4, dword ptr [rbp+1A0h+var_210.quat]
    vmulss  xmm11, xmm1, dword ptr [rbp+1A0h+var_210.quat]
    vmovss  xmm2, dword ptr [rbp+1A0h+var_210.quat+4]
    vmovss  xmm0, dword ptr [rbp+1A0h+var_210.quat+0Ch]
    vmulss  xmm9, xmm0, xmm1
    vmulss  xmm8, xmm5, xmm1
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm3, xmm2, xmm4
    vmulss  xmm7, xmm5, xmm3
    vmulss  xmm10, xmm2, xmm3
    vmulss  xmm3, xmm0, xmm3
    vmulss  xmm4, xmm5, xmm4
    vmulss  xmm2, xmm0, xmm4
    vmulss  xmm5, xmm5, xmm4
    vmovss  xmm4, cs:__real@3f800000
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rbp+1A0h+in+4], xmm1
    vsubss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+1A0h+in+0Ch], xmm1
    vaddss  xmm1, xmm7, xmm9
    vmovss  dword ptr [rbp+1A0h+in+14h], xmm1
    vsubss  xmm1, xmm7, xmm9
    vmovss  dword ptr [rbp+1A0h+in+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+1A0h+var_210.trans]
    vaddss  xmm0, xmm5, xmm10
    vsubss  xmm0, xmm4, xmm0
    vmovss  dword ptr [rbp+1A0h+in], xmm0
    vsubss  xmm0, xmm8, xmm3
    vmovss  dword ptr [rbp+1A0h+in+8], xmm0
    vaddss  xmm0, xmm5, xmm11
    vsubss  xmm0, xmm4, xmm0
    vmovss  dword ptr [rbp+1A0h+in+10h], xmm0
    vaddss  xmm0, xmm3, xmm8
    vmovss  dword ptr [rbp+1A0h+in+18h], xmm0
    vaddss  xmm0, xmm10, xmm11
    vsubss  xmm0, xmm4, xmm0
    vmovss  dword ptr [rbp+1A0h+in+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+1A0h+var_210.trans+4]
    vmovss  dword ptr [rbp+1A0h+in+24h], xmm1
    vmovss  xmm1, dword ptr [rbp+1A0h+var_210.trans+8]
    vmovss  dword ptr [rbp+1A0h+in+28h], xmm0
    vmovss  dword ptr [rbp+1A0h+in+2Ch], xmm1
  }
  DObjGetBasePoseMatrix(obj, v113[0], &v126);
  __asm
  {
    vmovaps xmm11, [rsp+2A0h+var_90]
    vmovaps xmm10, [rsp+2A0h+var_80]
    vmovaps xmm9, [rsp+2A0h+var_70]
    vmovss  xmm6, dword ptr [rbp+1A0h+var_150.trans]
    vmovss  xmm7, dword ptr [rbp+1A0h+var_150.trans+4]
    vmovss  xmm8, dword ptr [rbp+1A0h+var_150.trans+8]
    vsubss  xmm2, xmm6, dword ptr [rbp+1A0h+in+24h]
    vsubss  xmm3, xmm8, dword ptr [rbp+1A0h+in+2Ch]
  }
  _RAX = (char *)v20 + 12;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rsp+2A0h+sphereCenter], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rsp+2A0h+sphereCenter+4], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm1, xmm7, dword ptr [rbp+1A0h+in+28h]
    vmovss  dword ptr [rbp+1A0h+sphereCenter+8], xmm0
    vmovss  xmm0, cs:__real@ff7fffff
    vmulss  xmm1, xmm1, xmm1
    vmovss  [rsp+2A0h+outT1], xmm0
    vmovss  [rsp+2A0h+var_254], xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2; radius
  }
  v82 = IntersectLineSegmentSphere(&p1, &p2, &sphereCenter, *(float *)&_XMM3, &outT1, &v114);
  __asm { vmovaps xmm8, [rsp+2A0h+var_60] }
  if ( v82 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+2A0h+var_254]
      vminss  xmm7, xmm0, [rsp+2A0h+outT1]
      vmovss  xmm1, dword ptr [rsp+2A0h+p2]
      vsubss  xmm0, xmm1, dword ptr [rsp+2A0h+p1]
      vmulss  xmm2, xmm0, xmm7
      vaddss  xmm6, xmm2, dword ptr [rsp+2A0h+p1]
      vmovss  xmm0, dword ptr [rsp+2A0h+p2+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+2A0h+p1+4]
      vmovss  xmm0, dword ptr [rsp+2A0h+p2+8]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm5, xmm2, dword ptr [rsp+2A0h+p1+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+2A0h+p1+8]
      vmovss  xmm0, dword ptr [rsp+2A0h+sphereCenter]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm4, xmm2, dword ptr [rsp+2A0h+p1+8]
      vmovss  xmm2, dword ptr [rsp+2A0h+sphereCenter+4]
      vsubss  xmm1, xmm0, xmm6
      vsubss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rbp+1A0h+vec], xmm1
      vmovss  xmm1, dword ptr [rbp+1A0h+sphereCenter+8]
      vsubss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+1A0h+vec+8], xmm2
      vmovss  [rbp+1A0h+var_10C], xmm6
      vmovss  [rbp+1A0h+var_108], xmm5
      vmovss  [rbp+1A0h+var_104], xmm4
      vmovss  dword ptr [rbp+1A0h+vec+4], xmm0
    }
    vectoangles(&vec, &angles);
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    MatrixInverseOrthogonal43(&in, &out);
    MatrixMultiply43(&axis, &out, &v128);
    AxisToAngles((const tmat33_t<vec3_t> *)&v128, &v123);
    DObjSetLocalTag(obj, partBits, v109[0], &v128.m[3], &v123);
    result = 1;
  }
  else
  {
LABEL_45:
    result = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+2A0h+var_50]
    vmovaps xmm6, [rsp+2A0h+var_40]
  }
  return result;
}

