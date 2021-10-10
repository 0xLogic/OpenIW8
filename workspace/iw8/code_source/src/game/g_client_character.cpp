/*
==============
G_ClientCharacter_Spawn
==============
*/

void __fastcall G_ClientCharacter_Spawn(gentity_s *mSelf)
{
  ?G_ClientCharacter_Spawn@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ClientCharacter_Free
==============
*/

void __fastcall G_ClientCharacter_Free(gentity_s *mSelf)
{
  ?G_ClientCharacter_Free@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ClientCharacter_Free
==============
*/
void G_ClientCharacter_Free(gentity_s *mSelf)
{
  unsigned int runtimeInstanceCount; 
  __int64 v3; 
  gentity_s **i; 

  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_character.cpp", 157, ASSERT_TYPE_ASSERT, "( mSelf )", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(mSelf) < runtimeInstanceCount )
    ScriptableSv_UnlinkReservedScriptableEntity(mSelf);
  v3 = 0i64;
  for ( i = s_characterEntities; *i != mSelf; ++i )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x14 )
      return;
  }
  s_characterEntities[v3] = NULL;
}

/*
==============
G_ClientCharacter_Spawn
==============
*/
void G_ClientCharacter_Spawn(gentity_s *mSelf)
{
  trajectory_t_secure *p_pos; 
  unsigned int v3; 
  float v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  char *String; 
  scrContext_t *v11; 
  gentity_s **v12; 
  XAssetHeader v13; 
  const ScriptableDef *v14; 
  char *out; 
  unsigned int outIndex; 
  char *src[2]; 
  char dest[256]; 

  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_character.cpp", 53, ASSERT_TYPE_ASSERT, "( mSelf )", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  mSelf->r.svFlags |= 4u;
  p_pos = &mSelf->s.lerp.pos;
  v3 = 0;
  mSelf->handler = 0;
  *(_QWORD *)&mSelf->hint.hintString = 0i64;
  mSelf->s.eType = ET_CLIENT_CHARACTER;
  if ( mSelf == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  v4 = mSelf->r.currentOrigin.v[0];
  if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
  {
    *(float *)&out = mSelf->r.currentOrigin.v[0];
    if ( (LODWORD(v4) & 0x7F800000) == 2139095040 || (*(float *)&out = mSelf->r.currentOrigin.v[1], ((unsigned int)out & 0x7F800000) == 2139095040) || (*(float *)&out = mSelf->r.currentOrigin.v[2], ((unsigned int)out & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )", out) )
        __debugbreak();
    }
    v5 = LODWORD(mSelf->r.currentOrigin.v[0]) ^ ~s_trbase_aab_X;
    v6 = v5 ^ s_trbase_aab_Y ^ LODWORD(mSelf->r.currentOrigin.v[1]);
    v7 = v6 ^ s_trbase_aab_Z ^ LODWORD(mSelf->r.currentOrigin.v[2]);
    LODWORD(mSelf->s.lerp.pos.trBase.v[1]) = v6;
    LODWORD(mSelf->s.lerp.pos.trBase.v[2]) = v7;
    LODWORD(mSelf->s.lerp.pos.trBase.v[0]) = v5;
    memset(&src[1], 0, sizeof(char *));
  }
  else
  {
    mSelf->s.lerp.pos.trBase.v[0] = v4;
    mSelf->s.lerp.pos.trBase.v[1] = mSelf->r.currentOrigin.v[1];
    mSelf->s.lerp.pos.trBase.v[2] = mSelf->r.currentOrigin.v[2];
  }
  p_pos->trType = TR_STATIONARY;
  mSelf->s.lerp.apos.trBase.v[0] = mSelf->r.currentAngles.v[0];
  mSelf->s.lerp.apos.trBase.v[1] = mSelf->r.currentAngles.v[1];
  mSelf->s.lerp.apos.trBase.v[2] = mSelf->r.currentAngles.v[2];
  mSelf->s.lerp.apos.trType = TR_STATIONARY;
  mSelf->flags.m_flags[0] |= 0x200u;
  src[0] = NULL;
  if ( level.spawnVar.spawnVarsValid )
  {
    if ( G_LevelSpawnString(0xCFu, (const char *)&queryFormat.fmt + 3, (const char **)&out) )
    {
      v8 = atoi(out);
      v9 = 0;
      if ( v8 <= 0x14 )
        v9 = v8;
    }
    else
    {
      v9 = 0;
    }
    mSelf->s.clientNum = v9;
    G_LevelSpawnString(0x42Eu, (const char *)&queryFormat.fmt + 3, (const char **)src);
    String = src[0];
  }
  else
  {
    v11 = ScriptContext_Server();
    if ( Scr_GetNumParam(v11) < 6 )
      Scr_Error(COM_ERR_2971, v11, "USAGE: spawn( \"script_character\", <origin>, <spawnflags>, <forceNoCollision>, <characterId>, <assetname> )");
    mSelf->s.clientNum = Scr_GetInt(v11, 4u);
    String = (char *)Scr_GetString(v11, 5u);
    src[0] = String;
  }
  Core_strcpy(dest, 0x100ui64, String);
  I_strlwr(dest);
  if ( !NetConstStrings_GetClientCharacterIndex(dest, &outIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B920, 804i64, dest);
  mSelf->s.lerp.u.anonymous.data[1] = outIndex;
  v12 = s_characterEntities;
  while ( *v12 )
  {
    ++v3;
    ++v12;
    if ( v3 >= 0x14 )
    {
      v3 = 20;
      goto LABEL_32;
    }
  }
  s_characterEntities[v3] = mSelf;
LABEL_32:
  mSelf->s.lerp.u.anonymous.data[0] = v3;
  if ( v3 == 20 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B980, 805i64, 20i64);
  v13.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_CLIENTCHARACTER, dest, 0).physicsLibrary;
  if ( !v13.physicsLibrary )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B9D8, 806i64, dest);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_OFFHAND_END|0x80) )
  {
    v14 = *(const ScriptableDef **)&v13.physicsLibrary->isMaterialList;
    if ( v14 )
      ScriptableSv_LinkReservedScriptableEntity(mSelf, v14, 0xFFFFFFFF);
  }
  SV_LinkEntity(mSelf);
}

