/*
==============
CG_WeaponFade_Shutdown
==============
*/

void __fastcall CG_WeaponFade_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponFade_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponFade_InitFadedWeaponForEntity
==============
*/

void __fastcall CG_WeaponFade_InitFadedWeaponForEntity(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  ?CG_WeaponFade_InitFadedWeaponForEntity@@YAXW4LocalClientNum_t@@I@Z(localClientNum, entNum);
}

/*
==============
CG_WeaponFade_IsWeaponFadedForEntity
==============
*/

bool __fastcall CG_WeaponFade_IsWeaponFadedForEntity(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  return ?CG_WeaponFade_IsWeaponFadedForEntity@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, entNum);
}

/*
==============
CG_WeaponFade_Init
==============
*/

void __fastcall CG_WeaponFade_Init(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponFade_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponFade_Update
==============
*/

void __fastcall CG_WeaponFade_Update(const LocalClientNum_t localClientNum)
{
  ?CG_WeaponFade_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_WeaponFade_StartWeaponTransition
==============
*/

void __fastcall CG_WeaponFade_StartWeaponTransition(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  ?CG_WeaponFade_StartWeaponTransition@@YAXW4LocalClientNum_t@@I@Z(localClientNum, entNum);
}

/*
==============
CG_WeaponFade_GetClientData
==============
*/
CGWeaponFadeClientData *CG_WeaponFade_GetClientData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_cgWeaponFade.clientData ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_cgWeaponFade.clientData )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return (CGWeaponFadeClientData *)&s_cgWeaponFade + v1;
}

/*
==============
CG_WeaponFade_Init
==============
*/
void CG_WeaponFade_Init(const LocalClientNum_t localClientNum)
{
  CGWeaponFadeClientData *ClientData; 

  ClientData = CG_WeaponFade_GetClientData(localClientNum);
  ClientData->gfxData = 0i64;
  *(_QWORD *)&ClientData->animating = 0i64;
  ClientData->gfxData.entNum = 2047;
}

/*
==============
CG_WeaponFade_InitFadedWeaponForEntity
==============
*/
void CG_WeaponFade_InitFadedWeaponForEntity(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  CGWeaponFadeClientData *ClientData; 
  bool v4; 
  const dvar_t *v5; 

  ClientData = CG_WeaponFade_GetClientData(localClientNum);
  if ( entNum == 2047 )
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 113, ASSERT_TYPE_ASSERT, "( entNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%u, %u", "entNum", "ENTITYNUM_NONE", 2047, 2047);
  }
  else
  {
    if ( entNum <= 0x9C5 )
      goto LABEL_7;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 114, ASSERT_TYPE_ASSERT, "( entNum ) <= ( ENTITYNUM_CLIENTMODEL_END )", "entNum not in [0, ENTITYNUM_CLIENTMODEL_END]\n\t%u not in [0, %u]", entNum, 2501);
  }
  if ( v4 )
    __debugbreak();
LABEL_7:
  ClientData->gfxData.entNum = entNum;
  v5 = DCONST_DVARFLT_cg_weaponFade_startTransitionFactor;
  if ( !DCONST_DVARFLT_cg_weaponFade_startTransitionFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponFade_startTransitionFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  ClientData->gfxData.transitionFactor = (int)(float)(v5->current.value * 255.0);
  ClientData->gfxData.applyTransitionFactor = 1;
  ClientData->animating = 0;
}

/*
==============
CG_WeaponFade_IsWeaponFadedForEntity
==============
*/
bool CG_WeaponFade_IsWeaponFadedForEntity(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  CGWeaponFadeClientData *ClientData; 

  ClientData = CG_WeaponFade_GetClientData(localClientNum);
  return ClientData->gfxData.entNum == entNum && ClientData->gfxData.applyTransitionFactor;
}

/*
==============
CG_WeaponFade_Shutdown
==============
*/
void CG_WeaponFade_Shutdown(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_WeaponFade_StartWeaponTransition
==============
*/
void CG_WeaponFade_StartWeaponTransition(const LocalClientNum_t localClientNum, const unsigned int entNum)
{
  CGWeaponFadeClientData *ClientData; 
  CGWeaponFadeClientData *v5; 
  cg_t *LocalClientGlobals; 
  int time; 

  ClientData = CG_WeaponFade_GetClientData(localClientNum);
  v5 = ClientData;
  if ( ClientData->gfxData.entNum == entNum && ClientData->gfxData.applyTransitionFactor )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 139, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
      __debugbreak();
    time = LocalClientGlobals->time;
    v5->animating = 1;
    v5->transitionStartTimeMs = time;
  }
}

/*
==============
CG_WeaponFade_Update
==============
*/
void CG_WeaponFade_Update(const LocalClientNum_t localClientNum)
{
  CGWeaponFadeClientData *ClientData; 

  ClientData = CG_WeaponFade_GetClientData(localClientNum);
  CG_WeaponFade_UpdateFadeAnimations(localClientNum, ClientData);
  R_UpdateWeaponFadeEntityData(&ClientData->gfxData);
}

/*
==============
CG_WeaponFade_UpdateFadeAnimations
==============
*/
void CG_WeaponFade_UpdateFadeAnimations(const LocalClientNum_t localClientNum, CGWeaponFadeClientData *clientData)
{
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v7; 
  float value; 
  cg_t *LocalClientGlobals; 
  int time; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v3 = DCONST_DVARINT_cg_weaponFade_transitionTime;
  if ( !DCONST_DVARINT_cg_weaponFade_transitionTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponFade_transitionTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( integer < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 46, ASSERT_TYPE_ASSERT, "(transitionTimeMs >= 0)", (const char *)&queryFormat, "transitionTimeMs >= 0") )
    __debugbreak();
  v7 = DCONST_DVARFLT_cg_weaponFade_startTransitionFactor;
  if ( !DCONST_DVARFLT_cg_weaponFade_startTransitionFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponFade_startTransitionFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  if ( value < 0.0 || value > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 49, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( startTransitionFactorNormalized ) && ( startTransitionFactorNormalized ) <= ( 1.f )", "startTransitionFactorNormalized not in [0.f, 1.f]\n\t%g not in [%g, %g]", value, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 52, ASSERT_TYPE_ASSERT, "( ( cgameGlob != nullptr ) )", "( cgameGlob ) = %p", NULL) )
    __debugbreak();
  time = LocalClientGlobals->time;
  if ( clientData->animating )
  {
    if ( clientData->gfxData.entNum == 2047 )
    {
      LODWORD(v15) = 2047;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 58, ASSERT_TYPE_ASSERT, "( clientData.gfxData.entNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%u, %u", "clientData.gfxData.entNum", "ENTITYNUM_NONE", v15, 2047) )
        __debugbreak();
    }
    if ( clientData->gfxData.entNum > 0x9C5 )
    {
      LODWORD(v14) = 2501;
      LODWORD(v13) = clientData->gfxData.entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 59, ASSERT_TYPE_ASSERT, "( clientData.gfxData.entNum ) <= ( ENTITYNUM_CLIENTMODEL_END )", "clientData.gfxData.entNum not in [0, ENTITYNUM_CLIENTMODEL_END]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    v12 = time - clientData->transitionStartTimeMs;
    if ( v12 < integer )
    {
      clientData->gfxData.transitionFactor = (int)(float)((float)((float)(1.0 - (float)((float)v12 / (float)integer)) * value) * 255.0);
    }
    else
    {
      clientData->gfxData.applyTransitionFactor = 0;
      clientData->animating = 0;
    }
  }
}

