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
  __int64 v5; 
  int v6; 
  unsigned __int8 *i; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int8 *v22; 

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
  _RDI = g_hudelems;
  v5 = 1080i64;
  do
  {
    if ( _RDI->elem.type )
    {
      v6 = _RDI->clientNum;
      if ( v6 == 2047 || v6 == clientNum )
      {
        if ( v3 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 36, ASSERT_TYPE_ASSERT, "(currentCount < 256)", "%s\n\tAccessing more hudelems than client can store", "currentCount < MAX_HUDELEMS_PER_CLIENT_SP") )
          __debugbreak();
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        _RDX = (__int64)&CommonClient[31].lastUsercmd.weapon.weaponAttachments[184 * v3++ + 10];
        __asm
        {
          vmovups xmmword ptr [rdx], xmm0
          vmovups xmm1, xmmword ptr [rdi+10h]
          vmovups xmmword ptr [rdx+10h], xmm1
          vmovups xmm0, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rdx+20h], xmm0
          vmovups xmm1, xmmword ptr [rdi+30h]
          vmovups xmmword ptr [rdx+30h], xmm1
          vmovups xmm0, xmmword ptr [rdi+40h]
          vmovups xmmword ptr [rdx+40h], xmm0
          vmovups xmm1, xmmword ptr [rdi+50h]
          vmovups xmmword ptr [rdx+50h], xmm1
          vmovups xmm0, xmmword ptr [rdi+60h]
          vmovups xmmword ptr [rdx+60h], xmm0
          vmovups xmm1, xmmword ptr [rdi+70h]
          vmovups xmmword ptr [rdx+70h], xmm1
          vmovups xmm0, xmmword ptr [rdi+80h]
          vmovups xmmword ptr [rdx+80h], xmm0
          vmovups xmm1, xmmword ptr [rdi+90h]
          vmovups xmmword ptr [rdx+90h], xmm1
          vmovups xmm0, xmmword ptr [rdi+0A0h]
          vmovups xmmword ptr [rdx+0A0h], xmm0
        }
        *(_QWORD *)(_RDX + 176) = *(_QWORD *)&_RDI->elem.soundID;
      }
    }
    ++_RDI;
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
    v20 = 184i64 * v3;
    v21 = 256 - v3;
    v22 = &CommonClient[31].lastUsercmd.weapon.weaponAttachments[v20 + 10];
    do
    {
      if ( memcmp_0(v22, &g_dummyHudZero_0, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_hudelem_sp.cpp", 55, ASSERT_TYPE_ASSERT, "(!I_memcmp( &client->m_hudElem[currentCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) ))", (const char *)&queryFormat, "!I_memcmp( &client->m_hudElem[currentCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) )") )
        __debugbreak();
      v22 += 184;
      --v21;
    }
    while ( v21 );
  }
}

