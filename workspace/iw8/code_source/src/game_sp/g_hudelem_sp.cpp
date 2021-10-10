/*
==============
G_HudElemSP_UpdateClient
==============
*/

void __fastcall G_HudElemSP_UpdateClient(int clientNum)
{
  ?G_HudElemSP_UpdateClient@@YAXH@Z(clientNum);
}

/*
==============
G_HudElemSP_UpdateClient
==============
*/
void G_HudElemSP_UpdateClient(int clientNum)
{
  SvClient *CommonClient; 
  unsigned int v3; 
  game_hudelem_t *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  unsigned __int8 *i; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 *v11; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 22, ASSERT_TYPE_ASSERT, "(clientNum == CL_GetOnlyLocalClientNum())", "%s\n\tUpdating client that is not the sp local client", "clientNum == CL_GetOnlyLocalClientNum()") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 25, ASSERT_TYPE_ASSERT, "(client)", "%s\n\tFailed to retrieve server client SP", "client") )
    __debugbreak();
  v3 = 0;
  v4 = g_hudelems;
  v5 = 1080i64;
  do
  {
    if ( v4->elem.type )
    {
      v6 = v4->clientNum;
      if ( v6 == 2047 || v6 == clientNum )
      {
        if ( v3 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 36, ASSERT_TYPE_ASSERT, "(currentCount < 256)", "%s\n\tAccessing more hudelems than client can store", "currentCount < MAX_HUDELEMS_PER_CLIENT_SP") )
          __debugbreak();
        v7 = (__int64)&CommonClient[31].lastUsercmd.weapon.weaponAttachments[184 * v3++ + 10];
        *(_OWORD *)v7 = *(_OWORD *)&v4->elem.type;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)&v4->elem.targetEntNum;
        *(_OWORD *)(v7 + 32) = *(_OWORD *)&v4->elem.rotationTime;
        *(_OWORD *)(v7 + 48) = *(_OWORD *)&v4->elem.fontScaleTime;
        *(_OWORD *)(v7 + 64) = *(_OWORD *)&v4->elem.color.r;
        *(_OWORD *)(v7 + 80) = *(_OWORD *)&v4->elem.label;
        *(_OWORD *)(v7 + 96) = *(_OWORD *)&v4->elem.fromWidth;
        *(_OWORD *)(v7 + 112) = *(_OWORD *)&v4->elem.fromX;
        *(_OWORD *)(v7 + 128) = *(_OWORD *)&v4->elem.moveStartTime;
        *(_OWORD *)(v7 + 144) = *(_OWORD *)&v4->elem.value;
        *(_OWORD *)(v7 + 160) = *(_OWORD *)&v4->elem.fxBirthTime;
        *(_QWORD *)(v7 + 176) = *(_QWORD *)&v4->elem.soundID;
      }
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( v3 < 0x100 )
  {
    for ( i = &CommonClient[31].lastUsercmd.weapon.weaponAttachments[184 * v3 + 10]; *(_DWORD *)i; i += 184 )
    {
      memset_0(&CommonClient[31].lastUsercmd.weapon.weaponAttachments[184 * v3 + 10], 0, 0xB8ui64);
      if ( *(_DWORD *)i )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 48, ASSERT_TYPE_ASSERT, "(client->m_hudElem[currentCount].type == HE_TYPE_FREE)", (const char *)&queryFormat, "client->m_hudElem[currentCount].type == HE_TYPE_FREE") )
          __debugbreak();
      }
      if ( ++v3 >= 0x100 )
        return;
    }
    v9 = 184i64 * v3;
    v10 = 256 - v3;
    v11 = &CommonClient[31].lastUsercmd.weapon.weaponAttachments[v9 + 10];
    do
    {
      if ( memcmp_0(v11, &g_dummyHudZero_0, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 55, ASSERT_TYPE_ASSERT, "(!I_memcmp( &client->m_hudElem[currentCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) ))", (const char *)&queryFormat, "!I_memcmp( &client->m_hudElem[currentCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) )") )
        __debugbreak();
      v11 += 184;
      --v10;
    }
    while ( v10 );
  }
}

