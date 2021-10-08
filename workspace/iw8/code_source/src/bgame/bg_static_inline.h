/*
==============
BG_GetDObj
==============
*/

DObj *__fastcall BG_GetDObj(const BgStatic *bgStatic, int handle)
{
  return ?BG_GetDObj@@YAPEAUDObj@@PEBVBgStatic@@H@Z(bgStatic, handle);
}

/*
==============
BG_GetCharacterInfo
==============
*/

characterInfo_t *__fastcall BG_GetCharacterInfo(BgStatic *bgStatic, const int characterIndex)
{
  return ?BG_GetCharacterInfo@@YAPEAUcharacterInfo_t@@PEAVBgStatic@@H@Z(bgStatic, characterIndex);
}

/*
==============
BG_GetDObj
==============
*/
DObj *BG_GetDObj(const BgStatic *bgStatic, int handle)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !bgStatic->IsClient((BgStatic *)bgStatic) )
    return (DObj *)((__int64 (__fastcall *)(const BgStatic *, _QWORD))bgStatic->__vftable[1].HasCharacterInfo)(bgStatic, (unsigned int)handle);
  v4 = (unsigned int)bgStatic[1].__vftable;
  if ( (unsigned int)handle > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", handle) )
    __debugbreak();
  if ( v4 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = handle + 2533 * v4;
  if ( v5 >= 0x13CA )
  {
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v9) )
      __debugbreak();
  }
  v6 = clientObjMap[v5];
  if ( !v6 )
    return 0i64;
  if ( v6 >= (unsigned int)s_objCount )
  {
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v9) )
      __debugbreak();
  }
  return (DObj *)s_objBuf[v6];
}

/*
==============
BG_GetCharacterInfo
==============
*/
characterInfo_t *BG_GetCharacterInfo(BgStatic *bgStatic, const int characterIndex)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  __int64 v6; 

  v3 = characterIndex;
  if ( !bgStatic->IsClient(bgStatic) )
    return (characterInfo_t *)((__int64 (__fastcall *)(BgStatic *, _QWORD))bgStatic->__vftable[1].GetAnimStatics)(bgStatic, (unsigned int)v3);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LODWORD(bgStatic[1].__vftable));
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->IsMP(LocalClientGlobals) )
    return CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v3);
  if ( (unsigned int)v3 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v6, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
      __debugbreak();
  }
  return (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v3);
}

