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
  unsigned int v3; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  char *String; 
  scrContext_t *v13; 
  gentity_s **v14; 
  XAssetHeader v15; 
  const ScriptableDef *v16; 
  char *out; 
  unsigned int outIndex; 
  char *src[2]; 
  char dest[256]; 

  _RBX = mSelf;
  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client_character.cpp", 53, ASSERT_TYPE_ASSERT, "( mSelf )", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  _RBX->r.svFlags |= 4u;
  _R14 = &_RBX->s.lerp.pos;
  v3 = 0;
  _RBX->handler = 0;
  *(_QWORD *)&_RBX->hint.hintString = 0i64;
  _RBX->s.eType = ET_CLIENT_CHARACTER;
  if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+130h] }
  if ( _R14->trType == TR_LINEAR_STOP_SECURE )
  {
    __asm { vmovss  dword ptr [rsp+178h+out], xmm0 }
    if ( ((unsigned int)out & 0x7F800000) == 2139095040 )
      goto LABEL_42;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+178h+out], xmm0
    }
    if ( ((unsigned int)out & 0x7F800000) == 2139095040 )
      goto LABEL_42;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  dword ptr [rsp+178h+out], xmm0
    }
    if ( ((unsigned int)out & 0x7F800000) == 2139095040 )
    {
LABEL_42:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v7 = LODWORD(_RBX->r.currentOrigin.v[0]) ^ ~s_trbase_aab_X;
    v8 = v7 ^ s_trbase_aab_Y ^ LODWORD(_RBX->r.currentOrigin.v[1]);
    v9 = v8 ^ s_trbase_aab_Z ^ LODWORD(_RBX->r.currentOrigin.v[2]);
    LODWORD(_RBX->s.lerp.pos.trBase.v[1]) = v8;
    LODWORD(_RBX->s.lerp.pos.trBase.v[2]) = v9;
    LODWORD(_RBX->s.lerp.pos.trBase.v[0]) = v7;
    memset(&src[1], 0, sizeof(char *));
  }
  else
  {
    __asm { vmovss  dword ptr [r14+0Ch], xmm0 }
    _RBX->s.lerp.pos.trBase.v[1] = _RBX->r.currentOrigin.v[1];
    _RBX->s.lerp.pos.trBase.v[2] = _RBX->r.currentOrigin.v[2];
  }
  _R14->trType = TR_STATIONARY;
  _RBX->s.lerp.apos.trBase.v[0] = _RBX->r.currentAngles.v[0];
  _RBX->s.lerp.apos.trBase.v[1] = _RBX->r.currentAngles.v[1];
  _RBX->s.lerp.apos.trBase.v[2] = _RBX->r.currentAngles.v[2];
  _RBX->s.lerp.apos.trType = TR_STATIONARY;
  _RBX->flags.m_flags[0] |= 0x200u;
  src[0] = NULL;
  if ( level.spawnVar.spawnVarsValid )
  {
    if ( G_LevelSpawnString(0xCFu, (const char *)&queryFormat.fmt + 3, (const char **)&out) )
    {
      v10 = atoi(out);
      v11 = 0;
      if ( v10 <= 0x14 )
        v11 = v10;
    }
    else
    {
      v11 = 0;
    }
    _RBX->s.clientNum = v11;
    G_LevelSpawnString(0x42Eu, (const char *)&queryFormat.fmt + 3, (const char **)src);
    String = src[0];
  }
  else
  {
    v13 = ScriptContext_Server();
    if ( Scr_GetNumParam(v13) < 6 )
      Scr_Error(COM_ERR_2971, v13, "USAGE: spawn( \"script_character\", <origin>, <spawnflags>, <forceNoCollision>, <characterId>, <assetname> )");
    _RBX->s.clientNum = Scr_GetInt(v13, 4u);
    String = (char *)Scr_GetString(v13, 5u);
    src[0] = String;
  }
  Core_strcpy(dest, 0x100ui64, String);
  I_strlwr(dest);
  if ( !NetConstStrings_GetClientCharacterIndex(dest, &outIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B920, 804i64, dest);
  _RBX->s.lerp.u.anonymous.data[1] = outIndex;
  v14 = s_characterEntities;
  while ( *v14 )
  {
    ++v3;
    ++v14;
    if ( v3 >= 0x14 )
    {
      v3 = 20;
      goto LABEL_32;
    }
  }
  s_characterEntities[v3] = _RBX;
LABEL_32:
  _RBX->s.lerp.u.anonymous.data[0] = v3;
  if ( v3 == 20 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B980, 805i64, 20i64);
  v15.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_CLIENTCHARACTER, dest, 0).physicsLibrary;
  if ( !v15.physicsLibrary )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B9D8, 806i64, dest);
  if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_OFFHAND_END|0x80) )
  {
    v16 = *(const ScriptableDef **)&v15.physicsLibrary->isMaterialList;
    if ( v16 )
      ScriptableSv_LinkReservedScriptableEntity(_RBX, v16, 0xFFFFFFFF);
  }
  SV_LinkEntity(_RBX);
}

