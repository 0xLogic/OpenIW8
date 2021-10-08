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
  _RDI = DCONST_DVARFLT_cg_weaponFade_startTransitionFactor;
  if ( !DCONST_DVARFLT_cg_weaponFade_startTransitionFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponFade_startTransitionFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, cs:__real@437f0000
    vcvttss2si eax, xmm1
  }
  ClientData->gfxData.transitionFactor = _EAX;
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
  const dvar_t *v6; 
  int integer; 
  char v11; 
  char v12; 
  cg_t *LocalClientGlobals; 
  int time; 
  __int64 v30; 
  double v31; 
  __int64 v32; 
  double v33; 
  __int64 v34; 
  double v35; 

  v6 = DCONST_DVARINT_cg_weaponFade_transitionTime;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  if ( !DCONST_DVARINT_cg_weaponFade_transitionTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponFade_transitionTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( integer < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 46, ASSERT_TYPE_ASSERT, "(transitionTimeMs >= 0)", (const char *)&queryFormat, "transitionTimeMs >= 0") )
    __debugbreak();
  _RDI = DCONST_DVARFLT_cg_weaponFade_startTransitionFactor;
  if ( !DCONST_DVARFLT_cg_weaponFade_startTransitionFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponFade_startTransitionFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v11 )
    goto LABEL_30;
  __asm { vcomiss xmm6, xmm7 }
  if ( !(v11 | v12) )
  {
LABEL_30:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+88h+var_50], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+88h+var_58], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+88h+var_60], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 49, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( startTransitionFactorNormalized ) && ( startTransitionFactorNormalized ) <= ( 1.f )", "startTransitionFactorNormalized not in [0.f, 1.f]\n\t%g not in [%g, %g]", v31, v33, v35) )
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
      LODWORD(v34) = 2047;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 58, ASSERT_TYPE_ASSERT, "( clientData.gfxData.entNum ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%u, %u", "clientData.gfxData.entNum", "ENTITYNUM_NONE", v34, 2047) )
        __debugbreak();
    }
    if ( clientData->gfxData.entNum > 0x9C5 )
    {
      LODWORD(v32) = 2501;
      LODWORD(v30) = clientData->gfxData.entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_fade.cpp", 59, ASSERT_TYPE_ASSERT, "( clientData.gfxData.entNum ) <= ( ENTITYNUM_CLIENTMODEL_END )", "clientData.gfxData.entNum not in [0, ENTITYNUM_CLIENTMODEL_END]\n\t%u not in [0, %u]", v30, v32) )
        __debugbreak();
    }
    if ( time - clientData->transitionStartTimeMs < integer )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, edi
        vcvtsi2ss xmm0, xmm0, esi
        vdivss  xmm2, xmm1, xmm0
        vsubss  xmm1, xmm7, xmm2
        vmulss  xmm0, xmm1, xmm6
        vmulss  xmm2, xmm0, cs:__real@437f0000
        vcvttss2si eax, xmm2
      }
      clientData->gfxData.transitionFactor = _EAX;
    }
    else
    {
      clientData->gfxData.applyTransitionFactor = 0;
      clientData->animating = 0;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
}

