/*
==============
Ragdoll_IsAllocated
==============
*/

bool __fastcall Ragdoll_IsAllocated(const int ragdollHandle)
{
  return ?Ragdoll_IsAllocated@@YA_NH@Z(ragdollHandle);
}

/*
==============
Ragdoll_GetBones
==============
*/

Bone *__fastcall Ragdoll_GetBones(Ragdoll *ragdoll)
{
  return ?Ragdoll_GetBones@@YAPEAUBone@@PEAURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetRagdollHandle
==============
*/

int __fastcall Ragdoll_GetRagdollHandle(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetRagdollHandle@@YAHPEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_BodyDObj
==============
*/

DObj *__fastcall Ragdoll_BodyDObj(const Ragdoll *ragdoll)
{
  return ?Ragdoll_BodyDObj@@YAPEAUDObj@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetRagdoll
==============
*/

Ragdoll *__fastcall Ragdoll_GetRagdoll(const int ragdollHandle)
{
  return ?Ragdoll_GetRagdoll@@YAPEAURagdoll@@H@Z(ragdollHandle);
}

/*
==============
Ragdoll_GetNumBones
==============
*/

int __fastcall Ragdoll_GetNumBones(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetNumBones@@YAHPEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetRagdoll
==============
*/
Ragdoll *Ragdoll_GetRagdoll(const int ragdollHandle)
{
  __int64 v3; 

  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v3) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v3, 64) )
      __debugbreak();
  }
  return &g_ragdollBodies[ragdollHandle - 1];
}

/*
==============
Ragdoll_BodyDObj
==============
*/
DObj *Ragdoll_BodyDObj(const Ragdoll *ragdoll)
{
  unsigned int dobj; 
  LocalClientNum_t localClientNum; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v7; 
  __int64 v8; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 110, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ragdoll->dobj == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 111, ASSERT_TYPE_ASSERT, "(ragdoll->dobj != (-1))", (const char *)&queryFormat, "ragdoll->dobj != DOBJ_HANDLE_NONE") )
    __debugbreak();
  dobj = ragdoll->dobj;
  localClientNum = ragdoll->localClientNum;
  if ( dobj > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", dobj) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = 2533 * localClientNum + dobj;
  if ( v4 >= 0x13CA )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v8) )
      __debugbreak();
  }
  v5 = clientObjMap[v4];
  if ( !v5 )
    return 0i64;
  if ( v5 >= (unsigned int)s_objCount )
  {
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v8) )
      __debugbreak();
  }
  return (DObj *)s_objBuf[v5];
}

/*
==============
Ragdoll_GetBones
==============
*/
Bone *Ragdoll_GetBones(Ragdoll *ragdoll)
{
  if ( ragdoll )
    return ragdoll->state.bones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return (Bone *)4016;
}

/*
==============
Ragdoll_GetNumBones
==============
*/
__int64 Ragdoll_GetNumBones(const Ragdoll *ragdoll)
{
  if ( ragdoll )
    return (unsigned int)ragdoll->state.numBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return MEMORY[0x160];
}

/*
==============
Ragdoll_GetRagdollHandle
==============
*/
__int64 Ragdoll_GetRagdollHandle(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 53, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return (unsigned int)(ragdoll - g_ragdollBodies + 1);
}

/*
==============
Ragdoll_IsAllocated
==============
*/
__int64 Ragdoll_IsAllocated(const int ragdollHandle)
{
  Ragdoll *Ragdoll; 
  __int64 v4; 

  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v4) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v4, 64) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( Ragdoll )
    return Ragdoll->allocated;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return MEMORY[0];
}

