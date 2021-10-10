/*
==============
CG_SetPIPBlur
==============
*/

void __fastcall CG_SetPIPBlur(LocalClientNum_t pipClient, float blur)
{
  ?CG_SetPIPBlur@@YAXW4LocalClientNum_t@@M@Z(pipClient, blur);
}

/*
==============
CG_SetPIPLinkTagname
==============
*/

void __fastcall CG_SetPIPLinkTagname(LocalClientNum_t pipClient, int tag)
{
  ?CG_SetPIPLinkTagname@@YAXW4LocalClientNum_t@@H@Z(pipClient, tag);
}

/*
==============
CG_SetPipPosOffset
==============
*/

void __fastcall CG_SetPipPosOffset(LocalClientNum_t pipClient, const vec3_t *pos)
{
  ?CG_SetPipPosOffset@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(pipClient, pos);
}

/*
==============
CG_PIP_SetAspectRatio
==============
*/

void __fastcall CG_PIP_SetAspectRatio(LocalClientNum_t pipClient, float aspectRatio)
{
  ?CG_PIP_SetAspectRatio@@YAXW4LocalClientNum_t@@M@Z(pipClient, aspectRatio);
}

/*
==============
CG_PIP_SetViewY
==============
*/

void __fastcall CG_PIP_SetViewY(LocalClientNum_t pipClient, float y)
{
  ?CG_PIP_SetViewY@@YAXW4LocalClientNum_t@@M@Z(pipClient, y);
}

/*
==============
CG_GetPIPEntityPos
==============
*/

bool __fastcall CG_GetPIPEntityPos(LocalClientNum_t localClientNum, tmat33_t<vec3_t> *axis, vec3_t *pos)
{
  return ?CG_GetPIPEntityPos@@YA_NW4LocalClientNum_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(localClientNum, axis, pos);
}

/*
==============
CG_SetPIPFarZ
==============
*/

void __fastcall CG_SetPIPFarZ(LocalClientNum_t pipClient, float farZ)
{
  ?CG_SetPIPFarZ@@YAXW4LocalClientNum_t@@M@Z(pipClient, farZ);
}

/*
==============
CG_GetPipPos
==============
*/

vec3_t *__fastcall CG_GetPipPos(LocalClientNum_t pipClient)
{
  return ?CG_GetPipPos@@YAAEATvec3_t@@W4LocalClientNum_t@@@Z(pipClient);
}

/*
==============
CG_PIP_IsActive
==============
*/

bool __fastcall CG_PIP_IsActive(LocalClientNum_t localClientNum)
{
  return ?CG_PIP_IsActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PIP_EnableNightVision
==============
*/

void __fastcall CG_PIP_EnableNightVision(LocalClientNum_t pipClient, float fadeInTime)
{
  ?CG_PIP_EnableNightVision@@YAXW4LocalClientNum_t@@M@Z(pipClient, fadeInTime);
}

/*
==============
CG_SetPIPLinkEntity
==============
*/

void __fastcall CG_SetPIPLinkEntity(LocalClientNum_t pipClient, int entity)
{
  ?CG_SetPIPLinkEntity@@YAXW4LocalClientNum_t@@H@Z(pipClient, entity);
}

/*
==============
CG_PIP_SetViewX
==============
*/

void __fastcall CG_PIP_SetViewX(LocalClientNum_t pipClient, float x)
{
  ?CG_PIP_SetViewX@@YAXW4LocalClientNum_t@@M@Z(pipClient, x);
}

/*
==============
CG_SetPipRight
==============
*/

void __fastcall CG_SetPipRight(LocalClientNum_t pipClient, const vec3_t *v)
{
  ?CG_SetPipRight@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(pipClient, v);
}

/*
==============
CG_SetPipPos
==============
*/

void __fastcall CG_SetPipPos(LocalClientNum_t pipClient, const vec3_t *pos)
{
  ?CG_SetPipPos@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(pipClient, pos);
}

/*
==============
CG_PIP_ArchiveState
==============
*/

void __fastcall CG_PIP_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CG_PIP_ArchiveState@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CG_SetPipUp
==============
*/

void __fastcall CG_SetPipUp(LocalClientNum_t pipClient, const vec3_t *v)
{
  ?CG_SetPipUp@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(pipClient, v);
}

/*
==============
CG_SetPIPLod
==============
*/

void __fastcall CG_SetPIPLod(LocalClientNum_t pipClient, float lod)
{
  ?CG_SetPIPLod@@YAXW4LocalClientNum_t@@M@Z(pipClient, lod);
}

/*
==============
CG_SetPipShadowMaps
==============
*/

void __fastcall CG_SetPipShadowMaps(LocalClientNum_t pipClient, bool status)
{
  ?CG_SetPipShadowMaps@@YAXW4LocalClientNum_t@@_N@Z(pipClient, status);
}

/*
==============
CG_GetPipForward
==============
*/

vec3_t *__fastcall CG_GetPipForward(LocalClientNum_t pipClient)
{
  return ?CG_GetPipForward@@YAAEATvec3_t@@W4LocalClientNum_t@@@Z(pipClient);
}

/*
==============
CG_SetPipFOV
==============
*/

void __fastcall CG_SetPipFOV(LocalClientNum_t pipClient, float fov)
{
  ?CG_SetPipFOV@@YAXW4LocalClientNum_t@@M@Z(pipClient, fov);
}

/*
==============
CG_PIP_GetViewWidth
==============
*/

double __fastcall CG_PIP_GetViewWidth(LocalClientNum_t pipClient)
{
  double result; 

  *(float *)&result = ?CG_PIP_GetViewWidth@@YAMW4LocalClientNum_t@@@Z(pipClient);
  return result;
}

/*
==============
CG_SetPipRenderToTexture
==============
*/

void __fastcall CG_SetPipRenderToTexture(LocalClientNum_t pipClient, bool renderToTexture)
{
  ?CG_SetPipRenderToTexture@@YAXW4LocalClientNum_t@@_N@Z(pipClient, renderToTexture);
}

/*
==============
CG_PIP_SetViewWidth
==============
*/

void __fastcall CG_PIP_SetViewWidth(LocalClientNum_t pipClient, float width)
{
  ?CG_PIP_SetViewWidth@@YAXW4LocalClientNum_t@@M@Z(pipClient, width);
}

/*
==============
CG_GetPipUp
==============
*/

vec3_t *__fastcall CG_GetPipUp(LocalClientNum_t pipClient)
{
  return ?CG_GetPipUp@@YAAEATvec3_t@@W4LocalClientNum_t@@@Z(pipClient);
}

/*
==============
CG_SetPipDofPhysicalFstop
==============
*/

void __fastcall CG_SetPipDofPhysicalFstop(LocalClientNum_t pipClient, float fstop)
{
  ?CG_SetPipDofPhysicalFstop@@YAXW4LocalClientNum_t@@M@Z(pipClient, fstop);
}

/*
==============
CG_GetPIPOffsetPos
==============
*/

void __fastcall CG_GetPIPOffsetPos(LocalClientNum_t localClientNum, tmat33_t<vec3_t> *outAxis, vec3_t *outPos)
{
  ?CG_GetPIPOffsetPos@@YAXW4LocalClientNum_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(localClientNum, outAxis, outPos);
}

/*
==============
CG_PIP_GetViewX
==============
*/

double __fastcall CG_PIP_GetViewX(LocalClientNum_t pipClient)
{
  double result; 

  *(float *)&result = ?CG_PIP_GetViewX@@YAMW4LocalClientNum_t@@@Z(pipClient);
  return result;
}

/*
==============
CG_SetPIPActive
==============
*/

void __fastcall CG_SetPIPActive(LocalClientNum_t pipClient, bool status)
{
  ?CG_SetPIPActive@@YAXW4LocalClientNum_t@@_N@Z(pipClient, status);
}

/*
==============
CG_PIP_GetViewY
==============
*/

double __fastcall CG_PIP_GetViewY(LocalClientNum_t pipClient)
{
  double result; 

  *(float *)&result = ?CG_PIP_GetViewY@@YAMW4LocalClientNum_t@@@Z(pipClient);
  return result;
}

/*
==============
CG_SetPipForward
==============
*/

void __fastcall CG_SetPipForward(LocalClientNum_t pipClient, const vec3_t *v)
{
  ?CG_SetPipForward@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(pipClient, v);
}

/*
==============
CG_GetPipRight
==============
*/

vec3_t *__fastcall CG_GetPipRight(LocalClientNum_t pipClient)
{
  return ?CG_GetPipRight@@YAAEATvec3_t@@W4LocalClientNum_t@@@Z(pipClient);
}

/*
==============
CG_PIP_SetViewHeight
==============
*/

void __fastcall CG_PIP_SetViewHeight(LocalClientNum_t pipClient, float height)
{
  ?CG_PIP_SetViewHeight@@YAXW4LocalClientNum_t@@M@Z(pipClient, height);
}

/*
==============
CG_SetPIPNearZ
==============
*/

void __fastcall CG_SetPIPNearZ(LocalClientNum_t pipClient, float nearZ)
{
  ?CG_SetPIPNearZ@@YAXW4LocalClientNum_t@@M@Z(pipClient, nearZ);
}

/*
==============
CG_PIPInit
==============
*/

void CG_PIPInit(void)
{
  ?CG_PIPInit@@YAXXZ();
}

/*
==============
CG_SetPipThermalBodyMaterial
==============
*/

void __fastcall CG_SetPipThermalBodyMaterial(LocalClientNum_t pipClient, Material *handle)
{
  ?CG_SetPipThermalBodyMaterial@@YAXW4LocalClientNum_t@@PEAUMaterial@@@Z(pipClient, handle);
}

/*
==============
CG_PIP_IsRenderToTexture
==============
*/

bool __fastcall CG_PIP_IsRenderToTexture(LocalClientNum_t localClientNum)
{
  return ?CG_PIP_IsRenderToTexture@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SetPipAnglesOffset
==============
*/

void __fastcall CG_SetPipAnglesOffset(LocalClientNum_t pipClient, const vec3_t *angles)
{
  ?CG_SetPipAnglesOffset@@YAXW4LocalClientNum_t@@AEBTvec3_t@@@Z(pipClient, angles);
}

/*
==============
CG_PIP_DrawActiveFrame
==============
*/

void __fastcall CG_PIP_DrawActiveFrame(LocalClientNum_t localClientNum, Scr_UpdateFrame_State updateState, unsigned int drawType)
{
  ?CG_PIP_DrawActiveFrame@@YAXW4LocalClientNum_t@@W4Scr_UpdateFrame_State@@I@Z(localClientNum, updateState, drawType);
}

/*
==============
CG_SetPipNonPlayer
==============
*/

void __fastcall CG_SetPipNonPlayer(LocalClientNum_t pipClient, bool status)
{
  ?CG_SetPipNonPlayer@@YAXW4LocalClientNum_t@@_N@Z(pipClient, status);
}

/*
==============
CG_PIP_GetViewHeight
==============
*/

double __fastcall CG_PIP_GetViewHeight(LocalClientNum_t pipClient)
{
  double result; 

  *(float *)&result = ?CG_PIP_GetViewHeight@@YAMW4LocalClientNum_t@@@Z(pipClient);
  return result;
}

/*
==============
CG_PIP_SetScreenView
==============
*/

void __fastcall CG_PIP_SetScreenView(LocalClientNum_t pipClient)
{
  ?CG_PIP_SetScreenView@@YAXW4LocalClientNum_t@@@Z(pipClient);
}

/*
==============
CG_SetPipDofPhysicalFocusDistance
==============
*/

void __fastcall CG_SetPipDofPhysicalFocusDistance(LocalClientNum_t pipClient, float focusDistance)
{
  ?CG_SetPipDofPhysicalFocusDistance@@YAXW4LocalClientNum_t@@M@Z(pipClient, focusDistance);
}

/*
==============
CG_PIP_SetPainVision
==============
*/

void __fastcall CG_PIP_SetPainVision(LocalClientNum_t pipClient, float fadeInTime)
{
  ?CG_PIP_SetPainVision@@YAXW4LocalClientNum_t@@M@Z(pipClient, fadeInTime);
}

/*
==============
CG_GetPIPEntityPos
==============
*/
char CG_GetPIPEntityPos(LocalClientNum_t localClientNum, tmat33_t<vec3_t> *axis, vec3_t *pos)
{
  __int128 v3; 
  __int128 v4; 
  __int64 v5; 
  __int64 pipAttachedEnt; 
  CgEntitySystem *v9; 
  centity_t *v10; 
  unsigned int number; 
  unsigned int v12; 
  unsigned int v13; 
  const DObj *v14; 
  scr_string_t tag_origin; 
  ClConfigStrings *ClConfigStrings; 
  const char *v17; 
  const char *v18; 
  float *v20; 
  const vec3_t *v21; 
  float *v22; 
  bool v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  __int64 fromServer; 
  __int64 v31; 
  CgGlobalsSP *LocalClientGlobals; 
  tmat33_t<vec3_t> axisa; 
  __int128 v34; 
  __int128 v35; 

  v5 = localClientNum;
  if ( localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", localClientNum, 1) )
    __debugbreak();
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  pipAttachedEnt = LocalClientGlobals->pipViews[0].pipAttachedEnt;
  if ( (_DWORD)pipAttachedEnt == 2047 )
    return 0;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v31) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v31) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v31) = CgEntitySystem::ms_allocatedCount;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, v31) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v5] )
  {
    LODWORD(v31) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v31) )
      __debugbreak();
  }
  v9 = CgEntitySystem::ms_entitySystemArray[v5];
  if ( (unsigned int)pipAttachedEnt >= 0x800 )
  {
    LODWORD(v31) = 2048;
    LODWORD(fromServer) = pipAttachedEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", fromServer, v31) )
      __debugbreak();
  }
  v10 = &v9->m_entities[pipAttachedEnt];
  number = v9->m_entities[pipAttachedEnt].nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v31) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v31) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v31) = 2;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", fromServer, v31) )
      __debugbreak();
  }
  v12 = 2533 * v5 + number;
  if ( v12 >= 0x13CA )
  {
    LODWORD(v31) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v31) )
      __debugbreak();
  }
  v13 = clientObjMap[v12];
  if ( !v13 )
    return 0;
  if ( v13 >= (unsigned int)s_objCount )
  {
    LODWORD(v31) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v31) )
      __debugbreak();
  }
  v14 = (const DObj *)s_objBuf[v13];
  if ( !v14 )
    return 0;
  tag_origin = scr_const.tag_origin;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v17 = ClConfigStrings->GetClientTagString(ClConfigStrings, LocalClientGlobals->pipViews[0].pipAttachedTagname);
  v18 = v17;
  if ( *v17 )
  {
    tag_origin = SL_FindString(v17);
    if ( !tag_origin )
    {
      Com_PrintWarning(14, "CG_GetPIPEntityPos(): Couldn't find const string for tagname '%s'.\n", v18);
      return 0;
    }
  }
  if ( CG_Entity_IsNoDraw((const LocalClientNum_t)v5, &v10->nextState, NULL) )
    CG_EntitySP_ProcessEntity(v10, 0, 1);
  if ( !CG_DObjGetWorldTagMatrix(&v10->pose, v14, tag_origin, axis, pos) )
  {
    if ( !*v18 )
      return 0;
    Com_PrintWarning(14, "CG_GetPIPEntityPos(): Couldn't find tag '%s' in dobj for ent #%i.\n", v18, (unsigned int)v10->nextState.number);
    if ( !CG_DObjGetWorldTagMatrix(&v10->pose, v14, scr_const.tag_origin, axis, pos) )
      return 0;
  }
  if ( (_DWORD)v5 )
  {
    LODWORD(v31) = 1;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", fromServer, v31) )
      __debugbreak();
  }
  v20 = (float *)CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  v21 = (const vec3_t *)(v20 + 219293);
  v22 = v20 + 219290;
  v23 = (float)((float)((float)(v20[219293] * v20[219293]) + (float)(v20[219294] * v20[219294])) + (float)(v20[219295] * v20[219295])) > 0.0;
  if ( (float)((float)((float)(v20[219290] * v20[219290]) + (float)(v20[219291] * v20[219291])) + (float)(v20[219292] * v20[219292])) > 0.0 )
  {
    v35 = v3;
    v34 = v4;
    if ( v22 == (float *)&LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v24 = v22[1];
    v25 = v22[2];
    v26 = (float)((float)(*v22 * axis->m[0].v[1]) + (float)(v24 * axis->m[1].v[1])) + (float)(v25 * axis->m[2].v[1]);
    v27 = (float)((float)((float)(*v22 * axis->m[0].v[2]) + (float)(v24 * axis->m[1].v[2])) + (float)(v25 * axis->m[2].v[2])) + pos->v[2];
    pos->v[0] = (float)((float)((float)(v24 * axis->m[1].v[0]) + (float)(*v22 * axis->m[0].v[0])) + (float)(v25 * axis->m[2].v[0])) + pos->v[0];
    v28 = v26 + pos->v[1];
    pos->v[2] = v27;
    pos->v[1] = v28;
  }
  if ( v23 )
  {
    AnglesToAxis(v21, &axisa);
    MatrixMultiplyEquals(&axisa, axis);
  }
  v14->skel.timeStamp = 0;
  v29 = DCONST_DVARBOOL_pip_camera_debug;
  if ( !DCONST_DVARBOOL_pip_camera_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pip_camera_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.enabled )
    CL_AddOrientedDebugStar(pos, axis, &colorGreen, 4.0, 0, 0);
  return 1;
}

/*
==============
CG_GetPIPOffsetPos
==============
*/
void CG_GetPIPOffsetPos(LocalClientNum_t localClientNum, tmat33_t<vec3_t> *outAxis, vec3_t *outPos)
{
  float *LocalClientGlobals; 
  const vec3_t *v7; 
  float *v8; 
  bool v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int v20; 
  char v21; 
  tmat33_t<vec3_t> axis; 

  if ( localClientNum )
  {
    v20 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", localClientNum, v20) )
      __debugbreak();
  }
  LocalClientGlobals = (float *)CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v7 = (const vec3_t *)(LocalClientGlobals + 219293);
  v8 = LocalClientGlobals + 219290;
  v9 = (float)((float)((float)(LocalClientGlobals[219293] * LocalClientGlobals[219293]) + (float)(LocalClientGlobals[219294] * LocalClientGlobals[219294])) + (float)(LocalClientGlobals[219295] * LocalClientGlobals[219295])) > 0.0;
  if ( (float)((float)((float)(LocalClientGlobals[219290] * LocalClientGlobals[219290]) + (float)(LocalClientGlobals[219291] * LocalClientGlobals[219291])) + (float)(LocalClientGlobals[219292] * LocalClientGlobals[219292])) > 0.0 )
  {
    if ( v8 == (float *)&v21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v10 = v8[1];
    v11 = *v8;
    v12 = v8[2];
    v13 = outAxis->m[1].v[2];
    v14 = outAxis->m[0].v[2];
    v15 = outAxis->m[2].v[2];
    v16 = outAxis->m[1].v[1];
    v17 = outAxis->m[0].v[1];
    v18 = outAxis->m[2].v[1];
    outPos->v[0] = (float)((float)((float)(v10 * outAxis->m[1].v[0]) + (float)(*v8 * outAxis->m[0].v[0])) + (float)(v12 * outAxis->m[2].v[0])) + outPos->v[0];
    outPos->v[1] = (float)((float)((float)(v11 * v17) + (float)(v10 * v16)) + (float)(v12 * v18)) + outPos->v[1];
    outPos->v[2] = (float)((float)((float)(v11 * v14) + (float)(v10 * v13)) + (float)(v12 * v15)) + outPos->v[2];
  }
  if ( v9 )
  {
    AnglesToAxis(v7, &axis);
    MatrixMultiplyEquals(&axis, outAxis);
  }
}

/*
==============
CG_GetPipForward
==============
*/
vec3_t *CG_GetPipForward(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return &CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraForward;
}

/*
==============
CG_GetPipPos
==============
*/
vec3_t *CG_GetPipPos(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return &CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraPos;
}

/*
==============
CG_GetPipRight
==============
*/
vec3_t *CG_GetPipRight(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return &CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraRight;
}

/*
==============
CG_GetPipUp
==============
*/
vec3_t *CG_GetPipUp(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return &CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraUp;
}

/*
==============
CG_PIPInit
==============
*/
void CG_PIPInit(void)
{
  cg_t *v0; 
  double FarPlaneDist; 

  if ( CL_IsLocalClientActive(LOCAL_CLIENT_0) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    if ( cg_t::ms_allocatedType != GLOB_TYPE_SP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", cg_t::ms_allocatedType) )
      __debugbreak();
    v0 = cg_t::ms_cgArray[0];
    *(_WORD *)((char *)&cg_t::ms_cgArray[0][1].refdef.radiantLiveLightsRaw[91].shadowSoftness + 1) = 0;
    LOBYTE(v0[1].refdef.radiantLiveLightsRaw[91].shadowSoftness) = 0;
    v0[1].playerWeaponInfo.animsTwoHanded.debugNames[415][6] = 0;
    *(_QWORD *)&v0[1].refdef.radiantLiveLightsRaw[91].shadowBias = 0i64;
    v0[1].refdef.radiantLiveLightsRaw[91].shadowNearPlaneBias = orIdentity.origin.v[0];
    *(float *)v0[1].refdef.radiantLiveLightsRaw[91].lightDef = orIdentity.origin.v[1];
    *(float *)&v0[1].refdef.radiantLiveLightsRaw[91].lightDef[4] = orIdentity.origin.v[2];
    *(float *)&v0[1].refdef.radiantLiveLightsRaw[91].lightDef[8] = orIdentity.origin.v[0];
    *(float *)&v0[1].refdef.radiantLiveLightsRaw[91].lightDef[12] = orIdentity.origin.v[1];
    *(float *)&v0[1].refdef.radiantLiveLightsRaw[91].lightDef[16] = orIdentity.origin.v[2];
    *(orientation_t *)&v0[1].refdef.radiantLiveLightsRaw[91].lightDef[20] = orIdentity;
    v0[1].refdef.radiantLiveLightsRaw[91].effect.intensity[1] = 65.0;
    v0[1].refdef.radiantLiveLightsRaw[91].effect.color[0].v[0] = 22.0;
    *(_QWORD *)&v0[1].refdef.radiantLiveLightsRaw[91].effect.color[0].y = 1105881203i64;
    v0[1].refdef.radiantLiveLightsRaw[91].effect.color[1].v[0] = 0.0;
    v0[1].refdef.radiantLiveLightsRaw[91].effect.color[1].v[1] = 1.0;
    v0[1].refdef.radiantLiveLightsRaw[91].effect.color[1].v[2] = 1.0;
    FarPlaneDist = R_GetFarPlaneDist();
    v0[1].playerWeaponInfo.animsTwoHanded.debugNames[415][5] = 0;
    *(_QWORD *)&v0[1].refdef.radiantLiveLightsRaw[92].uniqueLightID = 0i64;
    *((float *)&v0[1].refdef.radiantLiveLightsRaw[91] + 59) = *(float *)&FarPlaneDist;
    LOBYTE(v0[1].refdef.radiantLiveLightsRaw[91].action) = 1;
    *(_QWORD *)&v0[1].refdef.radiantLiveLightsRaw[92].origin.xyz.y = 2047i64;
  }
}

/*
==============
CG_PIP_ArchiveState
==============
*/
void CG_PIP_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  CgGlobalsSP *LocalClientGlobals; 
  Material *pipthermalBodyMaterial; 
  const char *Name; 
  const char *CString; 
  Material *v8; 
  LocalClientNum_t v9; 
  int v10; 
  char string; 

  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->pipViews[0].pipEnabled);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->pipViews[0].pipNonPlayer);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->pipViews[0].renderToTexture);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipFadeStartTime);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipFadeEndTime);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->pipViews[0].pipCameraPos);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->pipViews[0].pipCameraPosOffset);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->pipViews[0].pipCameraAnglesOffset);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->pipViews[0].pipCameraRight);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->pipViews[0].pipCameraForward);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->pipViews[0].pipCameraUp);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipFOV);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipDofPhysicalFstop);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipDofPhysicalFocusDistance);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipNearZ);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].pipBlurRadius);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].lodOverride);
  MemFile_ArchiveFloat(memFile, &LocalClientGlobals->pipViews[0].farPlaneZ);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->pipViews[0].shadowMapsEnabled);
  MemFile_ArchiveData(memFile, 4, &LocalClientGlobals->pipViews[0].pipAttachedEnt);
  MemFile_ArchiveData(memFile, 4, &LocalClientGlobals->pipViews[0].pipAttachedTagname);
  if ( MemFile_IsWriting(memFile) )
  {
    pipthermalBodyMaterial = LocalClientGlobals->pipViews[0].pipthermalBodyMaterial;
    string = 0;
    if ( pipthermalBodyMaterial )
    {
      Name = Material_GetName(pipthermalBodyMaterial);
      MemFile_WriteCString(memFile, Name);
    }
    else
    {
      MemFile_WriteCString(memFile, &string);
    }
  }
  else
  {
    CString = MemFile_ReadCString(memFile);
    if ( *CString )
      v8 = Material_RegisterHandle(CString, IMAGE_TRACK_MODEL);
    else
      v8 = NULL;
    if ( localClientNum )
    {
      v10 = 1;
      v9 = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 199, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    CgGlobalsSP::GetLocalClientGlobals(localClientNum)->pipViews[0].pipthermalBodyMaterial = v8;
  }
  CG_VisionSet_ArchiveSP(memFile, &LocalClientGlobals->pipViews[0].cvsData);
  MemFile_ArchiveData(memFile, 24, LocalClientGlobals->pipViewParams);
}

/*
==============
CG_PIP_DrawActiveFrame
==============
*/
void CG_PIP_DrawActiveFrame(LocalClientNum_t localClientNum, Scr_UpdateFrame_State updateState, unsigned int drawType)
{
  __int64 v3; 
  CgGlobalsSP *LocalClientGlobals; 
  CgViewSystem *v5; 
  double FarPlaneDist; 
  float v7; 
  __int64 v8; 
  const void *v9; 
  bool PIPEntityPos; 
  __int64 v11; 
  char *v12; 
  cgs_t *LocalClientStaticGlobals; 
  float viewAspect; 
  RefdefView *v15; 
  int v16; 
  double v17; 
  float pipFadeEndTime; 
  float v19; 
  int IsPlayerZeroG; 
  bool thermalVisionActive; 
  double v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 clientFrameTime; 
  __int64 clientFrameTimea; 
  __int64 lodOverride; 
  __int64 lodOverridea; 
  int v30[3]; 
  unsigned int drawTypea; 
  int viewX; 
  int viewY; 
  int viewWidth; 
  int viewHeight; 
  __int64 v36; 
  GfxViewportFeatures outViewportFeatures; 
  vec3_t pos; 
  tmat33_t<vec3_t> axis; 

  v36 = -2i64;
  drawTypea = drawType;
  v3 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 630, ASSERT_TYPE_ASSERT, "(localClientNum < 1)", (const char *)&queryFormat, "localClientNum < MAX_PIP_VIEWS") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !(_BYTE)CgViewSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 267, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type is not known\n", "ms_allocatedType != GameModeType::NONE", v3) )
    __debugbreak();
  if ( (unsigned int)v3 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(lodOverride) = CgViewSystem::ms_allocatedCount;
    LODWORD(clientFrameTime) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 268, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientFrameTime, lodOverride) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v3] )
  {
    LODWORD(lodOverride) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 269, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", lodOverride) )
      __debugbreak();
  }
  v5 = CgViewSystem::ms_viewSystemArray[v3];
  FarPlaneDist = R_GetFarPlaneDist();
  v7 = *(float *)&FarPlaneDist;
  RefdefView_SetOrg(&LocalClientGlobals->pipViews[0].pipRefDef.view, &LocalClientGlobals->pipViews[0].pipCameraPos);
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[0] = LocalClientGlobals->pipViews[0].pipCameraRight.v[0];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[1] = LocalClientGlobals->pipViews[0].pipCameraRight.v[1];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[2] = LocalClientGlobals->pipViews[0].pipCameraRight.v[2];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[0].v[0] = LocalClientGlobals->pipViews[0].pipCameraForward.v[0];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[0].v[1] = LocalClientGlobals->pipViews[0].pipCameraForward.v[1];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[0].v[2] = LocalClientGlobals->pipViews[0].pipCameraForward.v[2];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[2].v[0] = LocalClientGlobals->pipViews[0].pipCameraUp.v[0];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[2].v[1] = LocalClientGlobals->pipViews[0].pipCameraUp.v[1];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[2].v[2] = LocalClientGlobals->pipViews[0].pipCameraUp.v[2];
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[0] = COERCE_FLOAT(LODWORD(LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[0]) ^ _xmm);
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[1] = COERCE_FLOAT(LODWORD(LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[1]) ^ _xmm);
  LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[2] = COERCE_FLOAT(LODWORD(LocalClientGlobals->pipViews[0].pipRefDef.view.axis.m[1].v[2]) ^ _xmm);
  g_activeRefDef = &LocalClientGlobals->pipViews[0].pipRefDef;
  R_SetLodOrigin(&LocalClientGlobals->pipViews[0].pipRefDef, LocalClientGlobals->pipViews[0].lodOverride);
  v8 = tls_index;
  v9 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", v9) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&lodOverride = CgStatic::ms_allocatedCount;
    LODWORD(clientFrameTime) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientFrameTime, lodOverride) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 272i64) = CgStatic::ms_cgameStaticsArray[v3];
  Sys_ProfBeginNamedEvent(0xFFFF6347, "clear scene view");
  R_ClearSceneView((LocalClientNum_t)v3);
  Sys_ProfEndNamedEvent();
  if ( LocalClientGlobals->pipViews[0].pipNonPlayer )
  {
    g_activeRefDef = &LocalClientGlobals->refdef;
    PIPEntityPos = CG_GetPIPEntityPos((LocalClientNum_t)v3, &axis, &pos);
    v11 = 807600i64;
  }
  else
  {
    PIPEntityPos = 0;
    v11 = 26912i64;
  }
  v12 = (char *)LocalClientGlobals + v11;
  g_activeRefDef = (refdef_t *)v12;
  *((_DWORD *)v12 + 16859) = v3;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v3);
  viewX = LocalClientStaticGlobals->viewX;
  viewY = LocalClientStaticGlobals->viewY;
  viewWidth = LocalClientStaticGlobals->viewWidth;
  viewHeight = LocalClientStaticGlobals->viewHeight;
  viewAspect = LocalClientStaticGlobals->viewAspect;
  ScrPlace_BeginDisplayView();
  CG_PIP_SetScreenView((LocalClientNum_t)v3);
  if ( LocalClientGlobals->pipViews[0].pipNonPlayer || (LocalClientGlobals->cvsData.transitory.thermalVisionActive = CG_View_IsThermalVisionOn((const LocalClientNum_t)v3), Sys_ProfBeginNamedEvent(0xFFFFFFFF, "view anim"), CG_UpdateViewWeaponAnim((LocalClientNum_t)v3), Sys_ProfEndNamedEvent(), LocalClientGlobals->pipViews[0].pipNonPlayer) )
  {
    R_SetCullDist(LocalClientGlobals->pipViews[0].farPlaneZ);
    v12[67432] = 0;
    v12[648] = R_DOF_GetPhysicalEnable();
    *(_WORD *)(v12 + 649) = 0;
    v12[651] = 0;
    *((_DWORD *)v12 + 163) = r_dof_physical_filmDiagonal->current.integer;
    *((_DWORD *)v12 + 164) = r_dof_physical_minFocusDistance->current.integer;
    *((_DWORD *)v12 + 165) = r_dof_physical_maxCocDiameter->current.integer;
    *((_DWORD *)v12 + 166) = LODWORD(LocalClientGlobals->pipViews[0].pipDofPhysicalFstop);
    *((_DWORD *)v12 + 167) = LODWORD(LocalClientGlobals->pipViews[0].pipDofPhysicalFocusDistance);
    *((_DWORD *)v12 + 168) = 1065353216;
    *(_QWORD *)(v12 + 748) = 0i64;
    *((_DWORD *)v12 + 189) = 0;
    *((_DWORD *)v12 + 190) = 1065353216;
    *((_DWORD *)v12 + 191) = 1065353216;
    *((_DWORD *)v12 + 18) = LODWORD(LocalClientGlobals->pipViews[0].pipNearZ);
    *((_DWORD *)v12 + 37) = LocalClientGlobals->time;
    *((_DWORD *)v12 + 38) = LocalClientGlobals->frametime;
    *((float *)v12 + 44) = fsqrt((float)(cgDC[v3].blurRadiusOut * cgDC[v3].blurRadiusOut) + (float)(LocalClientGlobals->pipViews[0].pipBlurRadius * LocalClientGlobals->pipViews[0].pipBlurRadius));
    v12[180] = 0;
    *((_WORD *)v12 + 78) = 0;
    v12[67432] = 0;
    *(_DWORD *)v12 = LocalClientStaticGlobals->viewX;
    *((_DWORD *)v12 + 1) = LocalClientStaticGlobals->viewY;
    *((_DWORD *)v12 + 2) = LocalClientStaticGlobals->viewWidth;
    *((_DWORD *)v12 + 3) = LocalClientStaticGlobals->viewHeight;
    v12[67420] = 0;
    v15 = (RefdefView *)(v12 + 16);
    if ( PIPEntityPos )
    {
      RefdefView_SetOrg(v15, &pos);
      AxisCopy(&axis, (tmat33_t<vec3_t> *)v12 + 1);
    }
    else
    {
      RefdefView_SetOrg(v15, &LocalClientGlobals->pipViews[0].pipCameraPos);
      *((_DWORD *)v12 + 12) = LODWORD(LocalClientGlobals->pipViews[0].pipCameraRight.v[0]);
      *((float *)v12 + 13) = LocalClientGlobals->pipViews[0].pipCameraRight.v[1];
      *((float *)v12 + 14) = LocalClientGlobals->pipViews[0].pipCameraRight.v[2];
      *((_DWORD *)v12 + 9) = LODWORD(LocalClientGlobals->pipViews[0].pipCameraForward.v[0]);
      *((float *)v12 + 10) = LocalClientGlobals->pipViews[0].pipCameraForward.v[1];
      *((float *)v12 + 11) = LocalClientGlobals->pipViews[0].pipCameraForward.v[2];
      *((_DWORD *)v12 + 15) = LODWORD(LocalClientGlobals->pipViews[0].pipCameraUp.v[0]);
      *((float *)v12 + 16) = LocalClientGlobals->pipViews[0].pipCameraUp.v[1];
      *((float *)v12 + 17) = LocalClientGlobals->pipViews[0].pipCameraUp.v[2];
      *((float *)v12 + 12) = COERCE_FLOAT(*((_DWORD *)v12 + 12) ^ _xmm);
      *((float *)v12 + 13) = COERCE_FLOAT(*((_DWORD *)v12 + 13) ^ _xmm);
      *((float *)v12 + 14) = COERCE_FLOAT(*((_DWORD *)v12 + 14) ^ _xmm);
    }
    TanHalfAngles(LocalClientGlobals->pipViews[0].pipFOV, LocalClientGlobals->pipViews[0].aspectRatio * LocalClientStaticGlobals->viewAspect, (float *)v12 + 4, (float *)v12 + 5);
    *(double *)(v12 + 76) = *((double *)v12 + 2);
    if ( v12 == (char *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    v16 = *((_DWORD *)v12 + 29);
    if ( v12 == (char *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v30[0] = *((_DWORD *)v12 + 6) ^ ((v16 ^ ((_DWORD)v12 + 24)) * ((v16 ^ ((_DWORD)v12 + 24)) + 2));
    v30[1] = *((_DWORD *)v12 + 7) ^ ((v16 ^ ((_DWORD)v12 + 28)) * ((v16 ^ ((_DWORD)v12 + 28)) + 2));
    v30[2] = ((v16 ^ ((_DWORD)v12 + 32)) * ((v16 ^ ((_DWORD)v12 + 32)) + 2)) ^ *((_DWORD *)v12 + 8);
    *((float *)v12 + 31) = *(float *)v30;
    *((float *)v12 + 32) = *(float *)&v30[1];
    *((float *)v12 + 33) = *(float *)&v30[2];
    if ( LocalClientGlobals->pipViews[0].cvsData.transitory.nightVisionActive || LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive )
    {
      pipFadeEndTime = LocalClientGlobals->pipViews[0].pipFadeEndTime;
      v19 = pipFadeEndTime - (float)((float)LocalClientGlobals->time * 0.001);
      if ( v19 > 0.0 )
      {
        if ( (float)(pipFadeEndTime - LocalClientGlobals->pipViews[0].pipFadeStartTime) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 779, ASSERT_TYPE_ASSERT, "(( pip->pipFadeEndTime - pip->pipFadeStartTime ) > 0.0f)", (const char *)&queryFormat, "( pip->pipFadeEndTime - pip->pipFadeStartTime ) > 0.0f") )
          __debugbreak();
        v17 = I_fclamp(1.0 - (float)(v19 / (float)(LocalClientGlobals->pipViews[0].pipFadeEndTime - LocalClientGlobals->pipViews[0].pipFadeStartTime)), 0.0, 1.0);
      }
      else
      {
        *(float *)&v17 = FLOAT_1_0;
      }
    }
    else
    {
      *(float *)&v17 = FLOAT_1_0;
    }
    if ( LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive )
      LocalClientGlobals->pipViews[0].cvsData.archived.painVisionLerp = *(float *)&v17;
    CG_VisionSetSetBlendOff(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_BLENDTYPE_CT_DELAY);
    CG_VisionSetSetBlendOff(&LocalClientGlobals->pipViews[0].cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE);
    CG_VisionSetUpdate(&LocalClientGlobals->pipViews[0].cvsData, *((_DWORD *)v12 + 37));
    CG_VisionSetApplyToRefdef((refdef_t *)v12, &LocalClientGlobals->pipViews[0].cvsData);
    CG_ViewSP_DrawActiveFrameInit((const LocalClientNum_t)v3, updateState, &LocalClientGlobals->pipViews[0].cvsData, (refdef_t *)v12, LocalClientGlobals->time, LocalClientGlobals->frametime, LocalClientGlobals->pipViews[0].lodOverride);
    memset(v30, 0, sizeof(v30));
  }
  else
  {
    CG_ViewSP_DrawActiveFrameInit((const LocalClientNum_t)v3, updateState, &LocalClientGlobals->cvsData, (refdef_t *)v12, LocalClientGlobals->time, LocalClientGlobals->frametime, LocalClientGlobals->pipViews[0].lodOverride);
  }
  R_PIP_ToggleSmpFrame((LocalClientNum_t)v3);
  R_EndDelayedSceneModels(1);
  R_ClearDObjInScene(0x800u);
  R_ClearDObjInScene(0x801u);
  R_ResetSceneEnts();
  CG_PlayersSP_ClearPlayersFromScene((LocalClientNum_t)v3);
  CG_PlayersSP_AddLocalPlayerToScene((LocalClientNum_t)v3, !LocalClientGlobals->pipViews[0].pipNonPlayer);
  R_Clear_IsPipClientView();
  if ( !LocalClientGlobals->pipViews[0].pipNonPlayer )
    v5->SetViewValues(v5);
  IsPlayerZeroG = BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState);
  if ( LocalClientGlobals->pipViews[0].pipNonPlayer )
    thermalVisionActive = LocalClientGlobals->pipViews[0].cvsData.transitory.thermalVisionActive;
  else
    thermalVisionActive = LocalClientGlobals->cvsData.transitory.thermalVisionActive;
  v22 = R_GetFarPlaneDist();
  FX_Update2((LocalClientNum_t)v3, (const refdef_t *)v12, (const RefdefView *)(v12 + 16), *(float *)&v22, thermalVisionActive, IsPlayerZeroG, 1);
  R_EndDObjScene();
  FX_Update3((LocalClientNum_t)v3);
  v5->UpdateFullFrameFX(v5);
  R_PIP_SetViewInfoIndex((const GfxViewport *)v12);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&lodOverridea = CgStatic::ms_allocatedCount;
    LODWORD(clientFrameTimea) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientFrameTimea, lodOverridea) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  v23 = tls_index;
  v24 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(CgStatic **)(v24 + 272) != CgStatic::ms_cgameStaticsArray[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v24 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v23) + 272i64) = 0i64;
  R_SetupDefaultViewportFeatures(&outViewportFeatures);
  outViewportFeatures.m_viewportType = R_VIEWPORT_TYPE_PIP;
  outViewportFeatures.m_ssaoModeOverride = GFX_SSAO_OFF;
  *((_DWORD *)&outViewportFeatures + 10) = *((_DWORD *)&outViewportFeatures + 10) & 0x7F002000 | 0xBE0031;
  *((_DWORD *)&outViewportFeatures + 11) ^= (*((_BYTE *)&outViewportFeatures + 44) ^ (unsigned __int8)(4 * LocalClientGlobals->pipViews[0].shadowMapsEnabled)) & 4;
  *((_DWORD *)&outViewportFeatures + 11) ^= (*((_BYTE *)&outViewportFeatures + 44) ^ (unsigned __int8)(2 * LocalClientGlobals->pipViews[0].shadowMapsEnabled)) & 2;
  if ( r_gpShowStats->current.integer > 0 || r_showStats->current.integer > 0 )
    R_TrackStatistics();
  else
    R_TrackStatisticsStop();
  R_RenderScene((const refdef_t *)v12, LocalClientGlobals->pipViews[0].lodOverride, drawTypea, &outViewportFeatures);
  R_SetCullDist(v7);
  LocalClientStaticGlobals->viewX = viewX;
  LocalClientStaticGlobals->viewY = viewY;
  LocalClientStaticGlobals->viewWidth = viewWidth;
  LocalClientStaticGlobals->viewHeight = viewHeight;
  LocalClientStaticGlobals->viewAspect = viewAspect;
  R_AddCmdEndOfList();
}

/*
==============
CG_PIP_EnableNightVision
==============
*/
void CG_PIP_EnableNightVision(LocalClientNum_t pipClient, float fadeInTime)
{
  CgGlobalsSP *LocalClientGlobals; 
  float v4; 
  int v6; 

  if ( pipClient )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v6) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  LocalClientGlobals->pipViews[0].cvsData.transitory.nightVisionActive = fadeInTime >= 0.0;
  if ( fadeInTime >= 0.0 )
  {
    v4 = (float)LocalClientGlobals->time * 0.001;
    LocalClientGlobals->pipViews[0].pipFadeStartTime = v4;
    LocalClientGlobals->pipViews[0].pipFadeEndTime = v4 + fadeInTime;
  }
}

/*
==============
CG_PIP_GetViewHeight
==============
*/
float CG_PIP_GetViewHeight(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 1000, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].height;
}

/*
==============
CG_PIP_GetViewWidth
==============
*/
float CG_PIP_GetViewWidth(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 993, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].width;
}

/*
==============
CG_PIP_GetViewX
==============
*/
float CG_PIP_GetViewX(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].x;
}

/*
==============
CG_PIP_GetViewY
==============
*/
float CG_PIP_GetViewY(LocalClientNum_t pipClient)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 986, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  return CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].y;
}

/*
==============
CG_PIP_IsActive
==============
*/
_BOOL8 CG_PIP_IsActive(LocalClientNum_t localClientNum)
{
  CgGlobalsSP *LocalClientGlobals; 
  CgGlobalsSP *v3; 

  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  if ( !LocalClientGlobals->pipViews[0].pipEnabled || localClientNum < LOCAL_CLIENT_1 )
    return LocalClientGlobals->pipViews[0].pipEnabled;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 915, ASSERT_TYPE_ASSERT, "(cgameGlob->pipViews[0].pipEnabled == false || localClientNum < 1)", (const char *)&queryFormat, "cgameGlob->pipViews[0].pipEnabled == false || localClientNum < MAX_PIP_VIEWS") )
    __debugbreak();
  return v3->pipViews[0].pipEnabled;
}

/*
==============
CG_PIP_IsRenderToTexture
==============
*/
_BOOL8 CG_PIP_IsRenderToTexture(LocalClientNum_t localClientNum)
{
  return CgGlobalsSP::GetLocalClientGlobals(localClientNum)->pipViews[0].renderToTexture;
}

/*
==============
CG_PIP_SetAspectRatio
==============
*/
void CG_PIP_SetAspectRatio(LocalClientNum_t pipClient, float aspectRatio)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  if ( (aspectRatio < 0.1 || aspectRatio > 20.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 263, ASSERT_TYPE_ASSERT, "( 0.1f ) <= ( aspectRatio ) && ( aspectRatio ) <= ( 20.0f )", "aspectRatio not in [MIN_ASPECT_RATIO, MAX_ASPECT_RATIO]\n\t%g not in [%g, %g]", aspectRatio, *(double *)&_xmm, *((double *)&_xmm + 1)) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].aspectRatio = aspectRatio;
}

/*
==============
CG_PIP_SetPainVision
==============
*/
void CG_PIP_SetPainVision(LocalClientNum_t pipClient, float fadeInTime)
{
  CgGlobalsSP *LocalClientGlobals; 
  float v4; 
  int v6; 

  if ( pipClient )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v6) )
      __debugbreak();
  }
  if ( fadeInTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 310, ASSERT_TYPE_ASSERT, "( ( fadeInTime >= 0.0f ) )", "( fadeInTime ) = %g", fadeInTime) )
    __debugbreak();
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  v4 = (float)LocalClientGlobals->time * 0.001;
  LocalClientGlobals->pipViews[0].pipFadeStartTime = v4;
  LocalClientGlobals->pipViews[0].pipFadeEndTime = v4 + fadeInTime;
  LocalClientGlobals->pipViews[0].cvsData.archived.painVisionActive = 1;
  LocalClientGlobals->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
}

/*
==============
CG_PIP_SetScreenView
==============
*/
void CG_PIP_SetScreenView(LocalClientNum_t pipClient)
{
  __int64 v1; 
  CgGlobalsSP *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  bool v4; 
  const ScreenPlacement *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  cgs_t *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int vertAlign; 
  int v18; 
  int v19; 
  int width; 
  int height; 
  float v22; 
  float aspect[3]; 
  float x; 
  float y; 
  float w; 
  float h; 

  v1 = pipClient;
  if ( pipClient )
  {
    vertAlign = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, vertAlign) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v1);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1);
  if ( CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v1)->pipViews[0].renderToTexture )
  {
    *(_QWORD *)&LocalClientStaticGlobals->viewX = 0i64;
    LocalClientStaticGlobals->viewAspect = LocalClientGlobals->pipViews[0].aspectRatio;
    LocalClientStaticGlobals->viewWidth = 512;
    LocalClientStaticGlobals->viewHeight = 512;
    return;
  }
  if ( LocalClientGlobals->pipViewParams[0].width < 1.0 )
    LocalClientGlobals->pipViewParams[0].width = 1.0;
  if ( LocalClientGlobals->pipViewParams[0].height < 1.0 )
    LocalClientGlobals->pipViewParams[0].height = 1.0;
  CL_GetScreenDimensions(&width, &height, aspect);
  CL_GetSceneDimensions(&v19, &v18, &v22);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v5 = &scrPlaceViewDisplay[v1];
      goto LABEL_17;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v4 )
      __debugbreak();
  }
  v5 = &scrPlaceFull;
LABEL_17:
  v6 = (float)v19 / (float)width;
  v7 = LocalClientGlobals->pipViewParams[0].x;
  v8 = (float)v18 / (float)height;
  y = LocalClientGlobals->pipViewParams[0].y;
  v9 = LocalClientGlobals->pipViewParams[0].height;
  x = v7;
  v10 = LocalClientGlobals->pipViewParams[0].width;
  h = v9;
  w = v10;
  ScrPlace_ApplyRect(v5, &x, &y, &w, &h, 0, 0);
  x = v6 * x;
  h = v8 * h;
  y = v8 * y;
  w = v6 * w;
  v11 = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1);
  v12 = (int)(float)(x + 0.5);
  v11->viewX = v12;
  v13 = (int)(float)(y + 0.5);
  v11->viewY = v13;
  v14 = (int)(float)(w + 0.5);
  v11->viewWidth = v14;
  v15 = (int)(float)(h + 0.5);
  v11->viewHeight = v15;
  if ( v12 < 0 )
  {
    v11->viewX = 0;
    v12 = 0;
  }
  if ( v13 < 0 )
  {
    v11->viewY = 0;
    v13 = 0;
  }
  if ( v14 + v12 > v19 )
  {
    v14 = v19 - v12;
    v11->viewWidth = v19 - v12;
  }
  if ( v15 + v13 > v18 )
  {
    v15 = v18 - v13;
    v11->viewHeight = v18 - v13;
  }
  if ( v14 < 1 )
    v11->viewWidth = 1;
  if ( v15 < 1 )
    v11->viewHeight = 1;
  v11->viewAspect = (float)((float)((float)(v22 * LocalClientGlobals->pipViews[0].aspectRatio) * LocalClientGlobals->pipViewParams[0].width) * (float)v18) / (float)((float)v19 * LocalClientGlobals->pipViewParams[0].height);
}

/*
==============
CG_PIP_SetViewHeight
==============
*/
void CG_PIP_SetViewHeight(LocalClientNum_t pipClient, float height)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 970, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].height = height;
}

/*
==============
CG_PIP_SetViewWidth
==============
*/
void CG_PIP_SetViewWidth(LocalClientNum_t pipClient, float width)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 958, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].width = width;
}

/*
==============
CG_PIP_SetViewX
==============
*/
void CG_PIP_SetViewX(LocalClientNum_t pipClient, float x)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 934, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].x = x;
}

/*
==============
CG_PIP_SetViewY
==============
*/
void CG_PIP_SetViewY(LocalClientNum_t pipClient, float y)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 946, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViewParams[0].y = y;
}

/*
==============
CG_SetPIPActive
==============
*/
void CG_SetPIPActive(LocalClientNum_t pipClient, bool status)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipEnabled = status;
}

/*
==============
CG_SetPIPBlur
==============
*/
void CG_SetPIPBlur(LocalClientNum_t pipClient, float blur)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  if ( blur < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 241, ASSERT_TYPE_ASSERT, "( ( blur >= 0.0f ) )", "( blur ) = %g", blur) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipBlurRadius = blur;
}

/*
==============
CG_SetPIPFarZ
==============
*/
void CG_SetPIPFarZ(LocalClientNum_t pipClient, float farZ)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  if ( farZ < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 274, ASSERT_TYPE_ASSERT, "( ( farZ >= 0.0f ) )", "( farZ ) = %g", farZ) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].farPlaneZ = farZ;
}

/*
==============
CG_SetPIPLinkEntity
==============
*/
void CG_SetPIPLinkEntity(LocalClientNum_t pipClient, int entity)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 209, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipAttachedEnt = entity;
}

/*
==============
CG_SetPIPLinkTagname
==============
*/
void CG_SetPIPLinkTagname(LocalClientNum_t pipClient, int tag)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipAttachedTagname = tag;
}

/*
==============
CG_SetPIPLod
==============
*/
void CG_SetPIPLod(LocalClientNum_t pipClient, float lod)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  if ( (lod < 1.0 || lod > 2048.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 252, ASSERT_TYPE_ASSERT, "( 1.0f ) <= ( lod ) && ( lod ) <= ( 2048.0f )", "lod not in [NO_LOD_SCALE, MAX_LOD_SCALE]\n\t%g not in [%g, %g]", lod, *(double *)&_xmm, *((double *)&_xmm + 1)) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].lodOverride = lod;
}

/*
==============
CG_SetPIPNearZ
==============
*/
void CG_SetPIPNearZ(LocalClientNum_t pipClient, float nearZ)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  if ( nearZ < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 230, ASSERT_TYPE_ASSERT, "( ( nearZ >= 0.0f ) )", "( nearZ ) = %g", nearZ) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipNearZ = nearZ;
}

/*
==============
CG_SetPipAnglesOffset
==============
*/
void CG_SetPipAnglesOffset(LocalClientNum_t pipClient, const vec3_t *angles)
{
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 127, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraAnglesOffset = *angles;
}

/*
==============
CG_SetPipDofPhysicalFocusDistance
==============
*/
void CG_SetPipDofPhysicalFocusDistance(LocalClientNum_t pipClient, float focusDistance)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipDofPhysicalFocusDistance = focusDistance;
}

/*
==============
CG_SetPipDofPhysicalFstop
==============
*/
void CG_SetPipDofPhysicalFstop(LocalClientNum_t pipClient, float fstop)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipDofPhysicalFstop = fstop;
}

/*
==============
CG_SetPipFOV
==============
*/
void CG_SetPipFOV(LocalClientNum_t pipClient, float fov)
{
  int v4; 

  if ( pipClient )
  {
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v4) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipFOV = fov;
}

/*
==============
CG_SetPipForward
==============
*/
void CG_SetPipForward(LocalClientNum_t pipClient, const vec3_t *v)
{
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraForward = *v;
}

/*
==============
CG_SetPipNonPlayer
==============
*/
void CG_SetPipNonPlayer(LocalClientNum_t pipClient, bool status)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipNonPlayer = status;
}

/*
==============
CG_SetPipPos
==============
*/
void CG_SetPipPos(LocalClientNum_t pipClient, const vec3_t *pos)
{
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraPos = *pos;
}

/*
==============
CG_SetPipPosOffset
==============
*/
void CG_SetPipPosOffset(LocalClientNum_t pipClient, const vec3_t *pos)
{
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraPosOffset = *pos;
}

/*
==============
CG_SetPipRenderToTexture
==============
*/
void CG_SetPipRenderToTexture(LocalClientNum_t pipClient, bool renderToTexture)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].renderToTexture = renderToTexture;
}

/*
==============
CG_SetPipRight
==============
*/
void CG_SetPipRight(LocalClientNum_t pipClient, const vec3_t *v)
{
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 137, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraRight = *v;
}

/*
==============
CG_SetPipShadowMaps
==============
*/
void CG_SetPipShadowMaps(LocalClientNum_t pipClient, bool status)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].shadowMapsEnabled = status;
}

/*
==============
CG_SetPipThermalBodyMaterial
==============
*/
void CG_SetPipThermalBodyMaterial(LocalClientNum_t pipClient, Material *handle)
{
  int v5; 

  if ( pipClient )
  {
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 199, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v5) )
      __debugbreak();
  }
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipthermalBodyMaterial = handle;
}

/*
==============
CG_SetPipUp
==============
*/
void CG_SetPipUp(LocalClientNum_t pipClient, const vec3_t *v)
{
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  CgGlobalsSP::GetLocalClientGlobals(pipClient)->pipViews[0].pipCameraUp = *v;
}

