/*
==============
CG_PlayerFade_SetFadeValue
==============
*/

void __fastcall CG_PlayerFade_SetFadeValue(const LocalClientNum_t localClientNum, const unsigned int entNum, const float normalizedValue)
{
  ?CG_PlayerFade_SetFadeValue@@YAXW4LocalClientNum_t@@IM@Z(localClientNum, entNum, normalizedValue);
}

/*
==============
CG_PlayerFade_Init
==============
*/

void __fastcall CG_PlayerFade_Init(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerFade_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerFade_IsPlayerFadedOut
==============
*/

bool __fastcall CG_PlayerFade_IsPlayerFadedOut(const LocalClientNum_t localClientNum)
{
  return ?CG_PlayerFade_IsPlayerFadedOut@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerFade_Update
==============
*/

void __fastcall CG_PlayerFade_Update(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerFade_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerFade_Shutdown
==============
*/

void __fastcall CG_PlayerFade_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerFade_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerFade_GetClientData
==============
*/
CGPlayerFadeClientData *CG_PlayerFade_GetClientData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_player_fade.cpp", 34, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_player_fade.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgPlayerFade.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgPlayerFade.clientData )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return (CGPlayerFadeClientData *)&s_cgPlayerFade + v1;
}

/*
==============
CG_PlayerFade_Init
==============
*/
void CG_PlayerFade_Init(const LocalClientNum_t localClientNum)
{
  CGPlayerFadeClientData *ClientData; 

  ClientData = CG_PlayerFade_GetClientData(localClientNum);
  *ClientData = 0i64;
  ClientData->gfxData.entNum = 2047;
}

/*
==============
CG_PlayerFade_IsPlayerFadedOut
==============
*/
bool CG_PlayerFade_IsPlayerFadedOut(const LocalClientNum_t localClientNum)
{
  return CG_PlayerFade_GetClientData(localClientNum)->gfxData.transitionFactor == 0xFF;
}

/*
==============
CG_PlayerFade_SetFadeValue
==============
*/

void __fastcall CG_PlayerFade_SetFadeValue(const LocalClientNum_t localClientNum, const unsigned int entNum, double normalizedValue)
{
  CGPlayerFadeClientData *ClientData; 
  bool v9; 
  bool v10; 
  bool v11; 
  double v19; 
  double v20; 
  double v21; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  ClientData = CG_PlayerFade_GetClientData(localClientNum);
  if ( entNum == 2047 )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_player_fade.cpp", 80, ASSERT_TYPE_ASSERT, "( entNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%u, %u", "entNum", "ENTITYNUM_NONE", 2047, 2047);
  }
  else
  {
    v10 = entNum < 0x9C5;
    v11 = entNum <= 0x9C5;
    if ( entNum <= 0x9C5 )
      goto LABEL_7;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_player_fade.cpp", 81, ASSERT_TYPE_ASSERT, "( entNum ) <= ( ENTITYNUM_CLIENTMODEL_END )", "entNum not in [0, ENTITYNUM_CLIENTMODEL_END]\n\t%u not in [0, %u]", entNum, 2501);
  }
  v10 = 0;
  v11 = !v9;
  if ( v9 )
    __debugbreak();
LABEL_7:
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
    goto LABEL_9;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v11 )
  {
LABEL_9:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+68h+var_30], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+68h+var_38], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_player_fade.cpp", 82, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( normalizedValue ) && ( normalizedValue ) <= ( 1.0f )", "normalizedValue not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, v20, v21) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@437f0000
    vmovaps xmm6, [rsp+68h+var_18]
    vcvttss2si eax, xmm0
  }
  ClientData->gfxData.transitionFactor = _EAX;
  ClientData->gfxData.entNum = entNum;
  ClientData->gfxData.applyTransitionFactor = (_BYTE)_EAX != 0;
}

/*
==============
CG_PlayerFade_Shutdown
==============
*/
void CG_PlayerFade_Shutdown(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_PlayerFade_Update
==============
*/
void CG_PlayerFade_Update(const LocalClientNum_t localClientNum)
{
  CGPlayerFadeClientData *ClientData; 

  ClientData = CG_PlayerFade_GetClientData(localClientNum);
  R_UpdatePlayerFadeEntityData(&ClientData->gfxData);
}

