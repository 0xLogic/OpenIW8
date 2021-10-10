/*
==============
CgCompassSystemSP::GetBestActorIndexForArbitraryEntity
==============
*/

int __fastcall CgCompassSystemSP::GetBestActorIndexForArbitraryEntity(CgCompassSystemSP *this, const centity_t *cent)
{
  return ?GetBestActorIndexForArbitraryEntity@CgCompassSystemSP@@AEAAHPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgCompassSystemSP::AddTurretPingInfo
==============
*/

void __fastcall CgCompassSystemSP::AddTurretPingInfo(CgCompassSystemSP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  ?AddTurretPingInfo@CgCompassSystemSP@@QEAAXPEBUcentity_t@@AEBTvec3_t@@H@Z(this, cent, origin, msec);
}

/*
==============
CgCompassSystemSP::GetRange
==============
*/

double __fastcall CgCompassSystemSP::GetRange(CgCompassSystemSP *this)
{
  double result; 

  *(float *)&result = ?GetRange@CgCompassSystemSP@@UEBAMXZ(this);
  return result;
}

/*
==============
CgCompassSystemSP::InitCompass
==============
*/

void __fastcall CgCompassSystemSP::InitCompass(CgCompassSystemSP *this)
{
  ?InitCompass@CgCompassSystemSP@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemSP::GetCentActorIndexAndTeam
==============
*/

bool __fastcall CgCompassSystemSP::GetCentActorIndexAndTeam(CgCompassSystemSP *this, int entityIndex, int *actorIndex, int *team)
{
  return ?GetCentActorIndexAndTeam@CgCompassSystemSP@@AEAA_NHPEAH0@Z(this, entityIndex, actorIndex, team);
}

/*
==============
CgCompassSystemSP::GetFriendlyTimeout
==============
*/

int __fastcall CgCompassSystemSP::GetFriendlyTimeout(CgCompassSystemSP *this)
{
  return ?GetFriendlyTimeout@CgCompassSystemSP@@UEBAHXZ(this);
}

/*
==============
CgCompassSystemSP::ShutdownCompass
==============
*/

void __fastcall CgCompassSystemSP::ShutdownCompass(CgCompassSystemSP *this)
{
  ?ShutdownCompass@CgCompassSystemSP@@QEAAXXZ(this);
}

/*
==============
CgCompassSystemSP::AddWeaponPingInfo
==============
*/

void __fastcall CgCompassSystemSP::AddWeaponPingInfo(CgCompassSystemSP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  ?AddWeaponPingInfo@CgCompassSystemSP@@UEAAXPEBUcentity_t@@AEBTvec3_t@@H@Z(this, cent, origin, msec);
}

/*
==============
CgCompassSystemSP::UpdateActorInfo
==============
*/

void __fastcall CgCompassSystemSP::UpdateActorInfo(CgCompassSystemSP *this, int entityIndex)
{
  ?UpdateActorInfo@CgCompassSystemSP@@QEAAXH@Z(this, entityIndex);
}

/*
==============
CgCompassSystemSP::GetCompassScaler
==============
*/

double __fastcall CgCompassSystemSP::GetCompassScaler(CgCompassSystemSP *this, CompassType compassType)
{
  double result; 

  *(float *)&result = ?GetCompassScaler@CgCompassSystemSP@@UEBAMW4CompassType@@@Z(this, compassType);
  return result;
}

/*
==============
CgCompassSystemSP::GetCompassActor
==============
*/

CompassActor *__fastcall CgCompassSystemSP::GetCompassActor(CgCompassSystemSP *this, const int actorIndex)
{
  return ?GetCompassActor@CgCompassSystemSP@@UEAAPEAUCompassActor@@H@Z(this, actorIndex);
}

/*
==============
CgCompassSystemSP::GetTurretInfo
==============
*/

CompassTurret *__fastcall CgCompassSystemSP::GetTurretInfo(CgCompassSystemSP *this, const centity_t *cent)
{
  return ?GetTurretInfo@CgCompassSystemSP@@AEAAPEAUCompassTurret@@PEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgCompassSystemSP::CgCompassSystemSP
==============
*/

void __fastcall CgCompassSystemSP::CgCompassSystemSP(CgCompassSystemSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgCompassSystemSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgCompassSystemSP::GetActorPingFadeAmount
==============
*/

double __fastcall CgCompassSystemSP::GetActorPingFadeAmount(CgCompassSystemSP *this, const cg_t *const cgameGlob, const int *beginRadarFadeTime)
{
  double result; 

  *(float *)&result = ?GetActorPingFadeAmount@CgCompassSystemSP@@QEAAMQEBVcg_t@@AEBH@Z(this, cgameGlob, beginRadarFadeTime);
  return result;
}

/*
==============
CgCompassSystemSP::ShouldLoadMinimapTurretAssets
==============
*/

int __fastcall CgCompassSystemSP::ShouldLoadMinimapTurretAssets()
{
  return ?ShouldLoadMinimapTurretAssets@CgCompassSystemSP@@SAHXZ();
}

/*
==============
CgCompassSystemSP::IsActorWithinPingTime
==============
*/

bool __fastcall CgCompassSystemSP::IsActorWithinPingTime(CgCompassSystemSP *this, const cg_t *const cgameGlob, const int *beginRadarFadeTime)
{
  return ?IsActorWithinPingTime@CgCompassSystemSP@@QEAA_NQEBVcg_t@@AEBH@Z(this, cgameGlob, beginRadarFadeTime);
}

/*
==============
CgCompassSystemSP::GetDrawnItemScaler
==============
*/

double __fastcall CgCompassSystemSP::GetDrawnItemScaler(CgCompassSystemSP *this, CompassType compassType, LocationSelectorType locationSelectorType, bool useDirection)
{
  double result; 

  *(float *)&result = ?GetDrawnItemScaler@CgCompassSystemSP@@UEBAMW4CompassType@@W4LocationSelectorType@@_N@Z(this, compassType, locationSelectorType, useDirection);
  return result;
}

/*
==============
CgCompassSystemSP::UpdateTurretInfo
==============
*/

void __fastcall CgCompassSystemSP::UpdateTurretInfo(CgCompassSystemSP *this, const centity_t *cent)
{
  ?UpdateTurretInfo@CgCompassSystemSP@@QEAAXPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgCompassSystemSP::GetCompassActorCount
==============
*/

int __fastcall CgCompassSystemSP::GetCompassActorCount(CgCompassSystemSP *this)
{
  return ?GetCompassActorCount@CgCompassSystemSP@@UEBAHXZ(this);
}

/*
==============
CgCompassSystemSP::DrawEnemies
==============
*/

void __fastcall CgCompassSystemSP::DrawEnemies(CgCompassSystemSP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  ?DrawEnemies@CgCompassSystemSP@@QEAAXW4CompassType@@_NPEBUrectDef_s@@2MAEBTvec4_t@@PEAULUIElement@@PEAUlua_State@@@Z(this, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, element, luaVM);
}

/*
==============
CgCompassSystemSP::CgCompassSystemSP
==============
*/
void CgCompassSystemSP::CgCompassSystemSP(CgCompassSystemSP *this, const LocalClientNum_t localClientNum)
{
  CompassActorSP *m_compassActors; 
  __int64 v4; 

  this->m_localClientNum = localClientNum;
  *(_QWORD *)&this->m_compassPlayerYaw = 0i64;
  *(_WORD *)&this->m_compassMirrorLeftRight = 0;
  this->m_currentCompassType = COMPASS_TYPE_FULL;
  this->m_currentZoomLevel = 1.0;
  this->m_PreventZoom = 1;
  this->m_minimapCenterTile = -1;
  this->m_minimapTileFlags = 0;
  this->m_tacmapCenterTile = -1;
  *(_WORD *)&this->m_exceededMinDragDistance = 256;
  *(_QWORD *)&this->m_tacmapRectangle.x = 0i64;
  *(_QWORD *)&this->m_tacmapRectangle.w = 0i64;
  this->m_compassPlayerForward.v[1] = 1.0;
  this->m_tacmapLastCursorPosition = 0i64;
  this->m_initialDragPosition = 0i64;
  this->m_tacmapMapCenter.v[0] = 0.5;
  this->m_tacmapMapCenter.v[1] = 0.5;
  memset_0(this->m_minimapTileImages, 0, sizeof(this->m_minimapTileImages));
  memset_0(this->m_tacpmapTileImages, 0, sizeof(this->m_tacpmapTileImages));
  this->__vftable = (CgCompassSystemSP_vtbl *)&CgCompassSystemSP::`vftable';
  m_compassActors = this->m_compassActors;
  v4 = 47i64;
  do
  {
    CompassActorSP::CompassActorSP(m_compassActors++);
    --v4;
  }
  while ( v4 );
}

/*
==============
CgCompassSystemSP::AddTurretPingInfo
==============
*/
void CgCompassSystemSP::AddTurretPingInfo(CgCompassSystemSP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  CompassTurret *TurretInfo; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 331, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (*((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 4) != 0 )
  {
    TurretInfo = CgCompassSystemSP::GetTurretInfo(this, cent);
    if ( TurretInfo )
    {
      TurretInfo->firePingTime = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
      TurretInfo->yawLastKnown = TurretInfo->yawCurrent;
      TurretInfo->positionLastKnown.v[0] = TurretInfo->positionCurrent.v[0];
      TurretInfo->positionLastKnown.v[1] = TurretInfo->positionCurrent.v[1];
      TurretInfo->positionLastKnown.v[2] = TurretInfo->positionCurrent.v[2];
    }
  }
}

/*
==============
CgCompassSystemSP::AddWeaponPingInfo
==============
*/
void CgCompassSystemSP::AddWeaponPingInfo(CgCompassSystemSP *this, const centity_t *cent, const vec3_t *origin, int msec)
{
  int v8; 
  CompassActorSP *v9; 
  int v10; 
  const cg_t *LocalClientGlobals; 
  __int64 v12; 
  int team[4]; 
  int actorIndex; 

  if ( !cent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 179, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 184, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
  }
  if ( cent->nextState.eType != ET_ACTOR_CORPSE )
  {
    if ( !CgCompassSystemSP::GetCentActorIndexAndTeam(this, cent->nextState.number, &actorIndex, team) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 188, ASSERT_TYPE_ASSERT, "((GetCentActorIndexAndTeam( cent->nextState.number, &actorIndex, &actorTeam )) == (true))", (const char *)&queryFormat, "GetCentActorIndexAndTeam( cent->nextState.number, &actorIndex, &actorTeam ) == true") )
      __debugbreak();
    if ( (unsigned int)(team[0] - 4) > 1 )
    {
      if ( (unsigned int)(team[0] - 1) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 192, ASSERT_TYPE_ASSERT, "(actorTeam == TEAM_ALLIES || actorTeam == TEAM_AXIS || actorTeam == TEAM_THREE)", (const char *)&queryFormat, "actorTeam == TEAM_ALLIES || actorTeam == TEAM_AXIS || actorTeam == TEAM_THREE") )
        __debugbreak();
      v8 = actorIndex;
      if ( (unsigned int)actorIndex >= 0x2F )
      {
        LODWORD(v12) = actorIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v12, 47) )
          __debugbreak();
        v8 = actorIndex;
      }
      v9 = &this->m_compassActors[v8];
      v10 = msec + CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
      if ( v10 > v9->beginFadeTime )
        v9->beginFadeTime = v10;
      if ( ((team[0] - 1) & 0xFFFFFFFD) != 0 )
      {
        v9->flags &= ~1u;
      }
      else
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        CompassActor_SetLastEnemyPos(v9, origin, LocalClientGlobals);
      }
    }
  }
}

/*
==============
CgCompassSystemSP::DrawEnemies
==============
*/
void CgCompassSystemSP::DrawEnemies(CgCompassSystemSP *this, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, float boundsRadius, const vec4_t *color, LUIElement *element, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  __int64 m_localClientNum; 
  __int64 clientNum; 
  cg_t *v16; 
  characterInfo_t *CharacterInfo; 
  double IconFadeAlpha; 
  float v19; 
  float v20; 
  float v21; 
  void (__fastcall **p_Get_lastPos)(const vec4_t *, vec3_t *); 
  bool v23; 
  const dvar_t *v24; 
  bool enabled; 
  int v26; 
  int time; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  int v30; 
  const dvar_t *v31; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  double v38; 
  float v39; 
  float v40; 
  vec2_t *outVector; 
  float *w; 
  float width; 
  vec2_t in; 
  float v46; 
  float v47; 
  char v48[8]; 
  float outAngle; 
  rectDef_s *v50; 
  __int64 v51; 
  lua_State *v52; 
  LUIElement *v53; 
  __int64 v54[2]; 
  SecureVec3 out; 
  __int64 v56; 
  vec2_t outClipped; 
  rectDef_s x; 
  vec2_t north; 

  v56 = -2i64;
  v50 = (rectDef_s *)rect;
  v53 = element;
  v52 = luaVM;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 395, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&w = CgStatic::ms_allocatedCount;
    LODWORD(outVector) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outVector, w) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[m_localClientNum] )
  {
    LODWORD(w) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", w) )
      __debugbreak();
  }
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v16 = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[m_localClientNum]->m_localClientNum);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v16->IsMP(v16) )
  {
    if ( (unsigned int)clientNum >= v16[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(w) = v16[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(outVector) = clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outVector, w) )
        __debugbreak();
    }
    CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v16[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v16, clientNum);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 399, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  CgCompassSystem::GetCompassYaw(this, compassType, cropPartialMap, LocalClientGlobals, &outAngle, &north);
  IconFadeAlpha = CgCompassSystem::GetIconFadeAlpha(this, (const LocalClientNum_t)this->m_localClientNum, compassType);
  v19 = *(float *)&IconFadeAlpha * color->v[3];
  if ( v19 != 0.0 && CharacterInfo->infoValid )
  {
    CG_CalcPlayerPos(&out, this->m_localClientNum);
    CG_CompassCalcDimensions(compassType, LocalClientGlobals, parentRect, v50, &x.x, &x.y, &x.w, &x.h);
    v20 = (float)(0.5 * x.w) + x.x;
    v21 = (float)(0.5 * x.h) + x.y;
    ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    p_Get_lastPos = &this->m_compassActors[0].lastPos.Get_lastPos;
    v51 = 39i64;
    v23 = cropPartialMap;
    do
    {
      if ( (*(_BYTE *)(p_Get_lastPos - 3) & 1) != 0 )
      {
        v24 = DVARBOOL_compassShowAllEnemies;
        if ( !DVARBOOL_compassShowAllEnemies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShowAllEnemies") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        enabled = v24->current.enabled;
        if ( enabled )
        {
          v26 = *((_DWORD *)p_Get_lastPos - 5);
          time = LocalClientGlobals->time;
          if ( v26 > time )
          {
            *((_DWORD *)p_Get_lastPos - 5) = 0;
            time = LocalClientGlobals->time;
            v26 = 0;
          }
          if ( v26 < time - 800 )
            goto LABEL_36;
        }
        else
        {
          v28 = DVARFLT_compassRadarPingFadeTime;
          if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v28);
          if ( v28->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 308, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
            __debugbreak();
          v29 = DVARFLT_compassRadarPingFadeTime;
          if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v29);
          v30 = *((_DWORD *)p_Get_lastPos + 18);
          if ( (float)LocalClientGlobals->time >= (float)((float)(1000.0 * v29->current.value) + (float)v30) || !v30 )
            goto LABEL_36;
        }
        if ( !*p_Get_lastPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 177, ASSERT_TYPE_ASSERT, "(actor->lastPos.Get_lastPos)", (const char *)&queryFormat, "actor->lastPos.Get_lastPos") )
          __debugbreak();
        ((void (__fastcall *)(_QWORD, __int64 *))((unsigned __int64)*p_Get_lastPos ^ s_aab_get_pointer_lastpos ^ (unsigned __int64)(p_Get_lastPos - 1)))(p_Get_lastPos + 1, v54);
        in = (vec2_t)v54[0];
        memset(v54, 0, 0xCui64);
        if ( !CgCompassSystem::WorldPosToCompass(this, compassType, v23, &x, boundsRadius, &north, (const vec2_t *)&out, &in, NULL, &outClipped) )
          goto LABEL_58;
        v31 = DVARBOOL_compassClampIcons;
        if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        if ( v31->current.enabled )
        {
LABEL_58:
          CalcCompassFriendlySize(compassType, &v47, &v46);
          outClipped.v[0] = v20 + outClipped.v[0];
          outClipped.v[1] = v21 + outClipped.v[1];
          vertAlign = v50->vertAlign;
          horzAlign = v50->horzAlign;
          ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          ScrPlace_ApplyRect(ActivePlacement, (float *)&outClipped, (float *)&outClipped + 1, &v47, &v46, horzAlign, vertAlign);
          if ( enabled )
          {
            v35 = FLOAT_1_0;
          }
          else
          {
            v36 = DVARFLT_compassRadarPingFadeTime;
            if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v36);
            if ( v36->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 315, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
              __debugbreak();
            if ( *((_DWORD *)p_Get_lastPos + 18) < LocalClientGlobals->time )
            {
              v37 = DVARFLT_compassRadarPingFadeTime;
              if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v37);
              v35 = 1.0 - (float)((float)(LocalClientGlobals->time - *((_DWORD *)p_Get_lastPos + 18)) * (float)(0.001 / v37->current.value));
            }
            else
            {
              v35 = FLOAT_1_0;
            }
          }
          v38 = AngleNormalize360(outAngle - *((float *)p_Get_lastPos - 4));
          width = *(float *)&v38;
          if ( (cropPartialMap || compassType || !Dvar_GetBool_Internal_DebugName(DVARBOOL_compassRotation, "compassRotation")) && this->MapShouldRotate(this) )
          {
            v39 = this->MapRotationFactor(this);
            v40 = width - v39;
            width = width - v39;
          }
          else
          {
            v40 = width;
          }
          CgCompassSystem::WorldYawToCompass(this, compassType, LocalClientGlobals, v40, &width);
          if ( cgMedia.compass.self_arrow && v35 >= 0.0 )
            LUI_Render_DrawQuadRotated((const LocalClientNum_t)this->m_localClientNum, v53, outClipped.v[0], outClipped.v[1], v47, v46, 0.0, 0.0, 1.0, 1.0, width, 0.0, 0.0, 0.0, v35 * v19, cgMedia.compass.self_arrow, v52);
          memset(v48, 0, sizeof(v48));
          v23 = cropPartialMap;
          goto LABEL_37;
        }
      }
LABEL_36:
      memset(v48, 0, sizeof(v48));
LABEL_37:
      memset(&in, 0, sizeof(in));
      p_Get_lastPos += 13;
      --v51;
    }
    while ( v51 );
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
CgCompassSystemSP::GetActorPingFadeAmount
==============
*/
float CgCompassSystemSP::GetActorPingFadeAmount(CgCompassSystemSP *this, const cg_t *const cgameGlob, const int *beginRadarFadeTime)
{
  const dvar_t *v3; 
  const dvar_t *v7; 

  v3 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 315, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  if ( *beginRadarFadeTime >= cgameGlob->time )
    return FLOAT_1_0;
  v7 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return 1.0 - (float)((float)(0.001 / v7->current.value) * (float)(cgameGlob->time - *beginRadarFadeTime));
}

/*
==============
CgCompassSystemSP::GetBestActorIndexForArbitraryEntity
==============
*/
__int64 CgCompassSystemSP::GetBestActorIndexForArbitraryEntity(CgCompassSystemSP *this, const centity_t *cent)
{
  int *m_mtActorEntIndices; 
  int v3; 
  int v5; 
  __int64 i; 
  cg_t *LocalClientGlobals; 
  int v9; 
  int time; 
  int *p_lastUpdate; 
  int v12; 
  __int64 v13; 

  m_mtActorEntIndices = this->m_mtActorEntIndices;
  v3 = 0;
  v5 = 0;
  for ( i = 0i64; i < 8; ++i )
  {
    if ( *m_mtActorEntIndices == cent->nextState.number )
      return (unsigned int)(v5 + 39);
    ++v5;
    ++m_mtActorEntIndices;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v9 = 1;
  time = LocalClientGlobals->time;
  p_lastUpdate = &this->m_compassActors[39].lastUpdate;
  v12 = time - 800;
  if ( v12 > 1 )
    v9 = v12;
  v13 = 0i64;
  while ( *p_lastUpdate >= v9 )
  {
    ++v3;
    ++v13;
    p_lastUpdate += 26;
    if ( v13 >= 8 )
    {
      Com_PrintWarning(16, "Out of room for non-actor and non-client motion tracker entities (max MOTIONTRACKER_EXTRA_ACTORS = %i)\n", 8i64);
      return 0xFFFFFFFFi64;
    }
  }
  this->m_mtActorEntIndices[v3] = cent->nextState.number;
  return (unsigned int)(v3 + 39);
}

/*
==============
CgCompassSystemSP::GetCentActorIndexAndTeam
==============
*/
bool CgCompassSystemSP::GetCentActorIndexAndTeam(CgCompassSystemSP *this, int entityIndex, int *actorIndex, int *team)
{
  centity_t *Entity; 
  entityType_s eType; 
  bool result; 
  __int16 number; 
  unsigned int v12; 
  int *m_mtActorEntIndices; 
  int v14; 
  int v15; 
  __int64 i; 
  cg_t *LocalClientGlobals; 
  int v18; 
  int time; 
  int *p_lastUpdate; 
  int v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 

  if ( !actorIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 129, ASSERT_TYPE_ASSERT, "(actorIndex)", (const char *)&queryFormat, "actorIndex") )
    __debugbreak();
  if ( !team && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 130, ASSERT_TYPE_ASSERT, "(team)", (const char *)&queryFormat, "team") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityIndex);
  eType = Entity->nextState.eType;
  if ( eType == ET_ACTOR )
  {
    CG_GetClientActorIndexAndTeam(entityIndex, actorIndex, team);
    return 1;
  }
  else if ( eType == ET_PLAYER )
  {
    number = Entity->nextState.number;
    if ( number )
    {
      LODWORD(v24) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 144, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( 1 )", "cent->nextState.number doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v24, 1) )
        __debugbreak();
    }
    v12 = Entity->nextState.number + 38;
    if ( v12 >= 0x2F )
    {
      LODWORD(v25) = 47;
      LODWORD(v24) = Entity->nextState.number + 38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 55, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (((32 + 6) + 1) + 8) )", "index doesn't index MAX_COMPASS_AND_MT_ACTORS_SP\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    *actorIndex = v12;
    result = 1;
    *team = 2;
  }
  else
  {
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0x1Au) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 150, ASSERT_TYPE_ASSERT, "(cent->nextState.lerp.eFlags.TestFlagStrict( EntityStateFlagsSP::MOTIONTRACKER ))", (const char *)&queryFormat, "cent->nextState.lerp.eFlags.TestFlagStrict( EntityStateFlagsSP::MOTIONTRACKER )") )
      __debugbreak();
    m_mtActorEntIndices = this->m_mtActorEntIndices;
    v14 = 0;
    v15 = 0;
    for ( i = 0i64; i < 8; ++i )
    {
      if ( *m_mtActorEntIndices == Entity->nextState.number )
      {
        v23 = v15 + 39;
        goto LABEL_34;
      }
      ++v15;
      ++m_mtActorEntIndices;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    v18 = 1;
    time = LocalClientGlobals->time;
    p_lastUpdate = &this->m_compassActors[39].lastUpdate;
    v21 = time - 800;
    if ( v21 > 1 )
      v18 = v21;
    v22 = 0i64;
    while ( *p_lastUpdate >= v18 )
    {
      ++v14;
      ++v22;
      p_lastUpdate += 26;
      if ( v22 >= 8 )
      {
        Com_PrintWarning(16, "Out of room for non-actor and non-client motion tracker entities (max MOTIONTRACKER_EXTRA_ACTORS = %i)\n", 8i64);
        v23 = -1;
        goto LABEL_34;
      }
    }
    v23 = v14 + 39;
    this->m_mtActorEntIndices[v14] = Entity->nextState.number;
LABEL_34:
    *actorIndex = v23;
    *team = 1;
    return *actorIndex >= 0;
  }
  return result;
}

/*
==============
CgCompassSystemSP::GetCompassActor
==============
*/
CompassActorSP *CgCompassSystemSP::GetCompassActor(CgCompassSystemSP *this, const int actorIndex)
{
  __int64 v2; 
  int v6; 

  v2 = actorIndex;
  if ( (unsigned int)actorIndex >= 0x2F )
  {
    v6 = 47;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", actorIndex, v6) )
      __debugbreak();
  }
  return &this->m_compassActors[v2];
}

/*
==============
CgCompassSystemSP::GetCompassActorCount
==============
*/
__int64 CgCompassSystemSP::GetCompassActorCount(CgCompassSystemSP *this)
{
  return 47i64;
}

/*
==============
CgCompassSystemSP::GetCompassScaler
==============
*/
float CgCompassSystemSP::GetCompassScaler(CgCompassSystemSP *this, CompassType compassType)
{
  return FLOAT_1_0;
}

/*
==============
CgCompassSystemSP::GetDrawnItemScaler
==============
*/
float CgCompassSystemSP::GetDrawnItemScaler(CgCompassSystemSP *this, CompassType compassType, LocationSelectorType locationSelectorType, bool useDirection)
{
  return FLOAT_1_0;
}

/*
==============
CgCompassSystemSP::GetFriendlyTimeout
==============
*/
__int64 CgCompassSystemSP::GetFriendlyTimeout(CgCompassSystemSP *this)
{
  return 800i64;
}

/*
==============
CgCompassSystemSP::GetRange
==============
*/
float CgCompassSystemSP::GetRange(CgCompassSystemSP *this)
{
  const dvar_t *v1; 

  v1 = DVARFLT_compassMaxRange;
  if ( !DVARFLT_compassMaxRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMaxRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.value;
}

/*
==============
CgCompassSystemSP::GetTurretInfo
==============
*/
CompassTurret *CgCompassSystemSP::GetTurretInfo(CgCompassSystemSP *this, const centity_t *cent)
{
  int number; 
  CompassTurret *result; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 283, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  number = cent->nextState.number;
  result = CgCompassSystem::GetItemInfo<CompassTurret>(this, number, this->m_compassTurrets, 4u, &this->m_compassTurretLock);
  if ( result )
  {
    *(_QWORD *)&result->lastUpdateTime = 0i64;
    *(_QWORD *)&result->firePingTime = 0i64;
    *(_QWORD *)&result->positionCurrent.y = 0i64;
    *(_QWORD *)result->positionLastKnown.v = 0i64;
    *(_QWORD *)&result->positionLastKnown.z = 0i64;
    *(_QWORD *)&result->yawLastKnown = 0i64;
    result->entityNum = number;
  }
  return result;
}

/*
==============
CgCompassSystemSP::InitCompass
==============
*/
void CgCompassSystemSP::InitCompass(CgCompassSystemSP *this)
{
  RWLock *p_m_compassTurretLock; 

  p_m_compassTurretLock = &this->m_compassTurretLock;
  if ( this == (CgCompassSystemSP *)-6688i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 117, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  InitializeSRWLock((PSRWLOCK)p_m_compassTurretLock);
  p_m_compassTurretLock->initialized = -1412623820;
  p_m_compassTurretLock->acquireLock = 0;
  p_m_compassTurretLock->writeThreadId = 0;
}

/*
==============
CgCompassSystemSP::IsActorWithinPingTime
==============
*/
bool CgCompassSystemSP::IsActorWithinPingTime(CgCompassSystemSP *this, const cg_t *const cgameGlob, const int *beginRadarFadeTime)
{
  const dvar_t *v3; 
  const dvar_t *v6; 

  v3 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 308, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_compassRadarPingFadeTime, \"compassRadarPingFadeTime\" ) > 0.0f)", (const char *)&queryFormat, "Dvar_GetFloat( compassRadarPingFadeTime ) > 0.0f") )
    __debugbreak();
  v6 = DVARFLT_compassRadarPingFadeTime;
  if ( !DVARFLT_compassRadarPingFadeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassRadarPingFadeTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return (float)cgameGlob->time < (float)((float)(v6->current.value * 1000.0) + (float)*beginRadarFadeTime) && *beginRadarFadeTime;
}

/*
==============
CgCompassSystemSP::ShouldLoadMinimapTurretAssets
==============
*/
_BOOL8 CgCompassSystemSP::ShouldLoadMinimapTurretAssets()
{
  return *CL_GetConfigString(14) == 49;
}

/*
==============
CgCompassSystemSP::ShutdownCompass
==============
*/
void CgCompassSystemSP::ShutdownCompass(CgCompassSystemSP *this)
{
  RWLock *p_m_compassTurretLock; 
  volatile int acquireLock; 
  __int64 v3; 
  volatile int v4; 

  p_m_compassTurretLock = &this->m_compassTurretLock;
  if ( this == (CgCompassSystemSP *)-6688i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 132, ASSERT_TYPE_ASSERT, "(lock)", (const char *)&queryFormat, "lock") )
    __debugbreak();
  acquireLock = p_m_compassTurretLock->acquireLock;
  p_m_compassTurretLock->initialized = 0;
  if ( acquireLock )
  {
    v4 = p_m_compassTurretLock->acquireLock;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 138, ASSERT_TYPE_ASSERT, "( lock->acquireLock ) == ( 0 )", "%s == %s\n\t%i, %i", "lock->acquireLock", "0", v4, 0i64) )
      __debugbreak();
  }
  if ( p_m_compassTurretLock->writeThreadId )
  {
    LODWORD(v3) = p_m_compassTurretLock->writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 139, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v3, 0i64) )
      __debugbreak();
  }
}

/*
==============
CgCompassSystemSP::UpdateActorInfo
==============
*/
void CgCompassSystemSP::UpdateActorInfo(CgCompassSystemSP *this, int entityIndex)
{
  centity_t *Entity; 
  int v5; 
  CompassActorSP *v6; 
  const cg_t *LocalClientGlobals; 
  int time; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v13; 
  unsigned int v23; 
  const dvar_t *v24; 
  __int64 v25; 
  vec3_t pos; 
  int actorIndex; 
  int team; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityIndex);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 222, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( CgCompassSystemSP::GetCentActorIndexAndTeam(this, entityIndex, &actorIndex, &team) && (Entity->nextState.eType != ET_ACTOR || CG_ShouldDrawActorOnCompass(entityIndex)) )
  {
    v5 = actorIndex;
    if ( (unsigned int)actorIndex >= 0x2F )
    {
      LODWORD(v25) = actorIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_compass_sp.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( actorIndex ) < (unsigned)( ( sizeof( *array_counter( m_compassActors ) ) + 0 ) )", "actorIndex doesn't index ARRAY_COUNT( m_compassActors )\n\t%i not in [0, %i)", v25, 47) )
        __debugbreak();
      v5 = actorIndex;
    }
    v6 = &this->m_compassActors[v5];
    v6->entIndex = entityIndex;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
    v6->lastUpdate = time;
    if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
    FunctionPointer_origin(&Entity->pose.origin.origin.origin, &pos);
    if ( Entity->pose.isPosePrecise )
    {
      _XMM0 = LODWORD(pos.v[0]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v13 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v13;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      pos.v[0] = *(float *)&_XMM1;
      _XMM2 = LODWORD(pos.v[1]);
      __asm { vcvtdq2pd xmm2, xmm2 }
      *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v13 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v13;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      pos.v[1] = *(float *)&_XMM1;
      _XMM2 = LODWORD(pos.v[2]);
      __asm { vcvtdq2pd xmm2, xmm2 }
      *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v13 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v13;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      pos.v[2] = *(float *)&_XMM1;
    }
    v6->lastYaw = Entity->pose.angles.v[1];
    if ( team == 5 )
    {
      v6->flags |= 2u;
    }
    else
    {
      v23 = v6->flags & 0xFFFFFFFD;
      v6->flags = v23;
      if ( ((team - 1) & 0xFFFFFFFD) != 0 )
      {
        if ( team == 4 )
          v6->flags = v23 | 4;
        else
          v6->flags = v23 & 0xFFFFFFFA;
      }
      else
      {
        v6->flags = v23 | 1;
        v24 = DVARBOOL_bg_compassShowEnemies;
        if ( !DVARBOOL_bg_compassShowEnemies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_compassShowEnemies") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( v24->current.enabled && v6->lastEnemyPosUpdate + 2000 < time )
        {
          v6->lastEnemyPosUpdate = time;
          v6->beginFadeTime = time + 1000;
          CompassActor_SetLastEnemyPos(v6, &pos, LocalClientGlobals);
        }
      }
    }
    v6->lastPosZ.elevation = CG_Compass_CalcElevation(LocalClientGlobals, &pos);
    v6->lastPosZ.zIsValid = 1;
    if ( !v6->lastPos.Set_lastPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 205, ASSERT_TYPE_ASSERT, "(actor->lastPos.Set_lastPos)", (const char *)&queryFormat, "actor->lastPos.Set_lastPos") )
      __debugbreak();
    ((void (__fastcall *)(vec3_t *, vec4_t *))((unsigned __int64)&v6->lastPos.Get_lastPos ^ (__int64)v6->lastPos.Set_lastPos ^ s_aab_set_pointer_lastpos))(&pos, &v6->lastPos.lastPos);
    memset(&pos, 0, sizeof(pos));
  }
}

/*
==============
CgCompassSystemSP::UpdateTurretInfo
==============
*/
void CgCompassSystemSP::UpdateTurretInfo(CgCompassSystemSP *this, const centity_t *cent)
{
  CompassTurret *TurretInfo; 
  CompassTurret *v5; 
  int team; 
  int actorIndex; 

  if ( (*((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 4) != 0 )
  {
    TurretInfo = CgCompassSystemSP::GetTurretInfo(this, cent);
    v5 = TurretInfo;
    if ( TurretInfo )
    {
      CgCompassSystem::UpdateTurretInfoCommon(this, TurretInfo, this->m_localClientNum, cent);
      CgCompassSystemSP::GetCentActorIndexAndTeam(this, cent->nextState.otherEntityNum, &actorIndex, &team);
      v5->isFriendly = team == 2;
    }
  }
}

