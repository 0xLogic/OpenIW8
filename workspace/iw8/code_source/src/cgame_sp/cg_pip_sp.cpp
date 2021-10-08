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
  CgGlobalsSP *v20; 
  char v41; 
  char v42; 
  bool v43; 
  const dvar_t *v67; 
  __int64 fromServer; 
  __int64 v70; 
  CgGlobalsSP *LocalClientGlobals; 
  tmat33_t<vec3_t> axisa; 

  v5 = localClientNum;
  _R13 = pos;
  if ( localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 452, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", localClientNum, 1) )
    __debugbreak();
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  pipAttachedEnt = LocalClientGlobals->pipViews[0].pipAttachedEnt;
  if ( (_DWORD)pipAttachedEnt == 2047 )
    return 0;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v70) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v70) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v70) = CgEntitySystem::ms_allocatedCount;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", fromServer, v70) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v5] )
  {
    LODWORD(v70) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v70) )
      __debugbreak();
  }
  v9 = CgEntitySystem::ms_entitySystemArray[v5];
  if ( (unsigned int)pipAttachedEnt >= 0x800 )
  {
    LODWORD(v70) = 2048;
    LODWORD(fromServer) = pipAttachedEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", fromServer, v70) )
      __debugbreak();
  }
  v10 = &v9->m_entities[pipAttachedEnt];
  number = v9->m_entities[pipAttachedEnt].nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v70) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v70) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v70) = 2;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", fromServer, v70) )
      __debugbreak();
  }
  v12 = 2533 * v5 + number;
  if ( v12 >= 0x13CA )
  {
    LODWORD(v70) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v70) )
      __debugbreak();
  }
  v13 = clientObjMap[v12];
  if ( !v13 )
    return 0;
  if ( v13 >= (unsigned int)s_objCount )
  {
    LODWORD(v70) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v70) )
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
  if ( !CG_DObjGetWorldTagMatrix(&v10->pose, v14, tag_origin, axis, _R13) )
  {
    if ( !*v18 )
      return 0;
    Com_PrintWarning(14, "CG_GetPIPEntityPos(): Couldn't find tag '%s' in dobj for ent #%i.\n", v18, (unsigned int)v10->nextState.number);
    if ( !CG_DObjGetWorldTagMatrix(&v10->pose, v14, scr_const.tag_origin, axis, _R13) )
      return 0;
  }
  if ( (_DWORD)v5 )
  {
    LODWORD(v70) = 1;
    LODWORD(fromServer) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", fromServer, v70) )
      __debugbreak();
  }
  v20 = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  __asm { vxorps  xmm4, xmm4, xmm4 }
  _RDI = &v20->pipViews[0].pipCameraAnglesOffset;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm4
  }
  _RBX = (__int64 *)&v20->pipViews[0].pipCameraPosOffset;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
  }
  v43 = !(v41 | v42);
  __asm { vcomiss xmm3, xmm4 }
  if ( !(v41 | v42) )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_58], xmm7
    }
    if ( _RBX == (__int64 *)&LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm3, dword ptr [rbx]
      vmovss  xmm7, dword ptr [rbx+8]
      vmulss  xmm1, xmm6, dword ptr [rbp+0Ch]
      vmulss  xmm0, xmm3, dword ptr [rbp+0]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rbp+18h]
      vmulss  xmm0, xmm6, dword ptr [rbp+10h]
      vaddss  xmm5, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rbp+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rbp+1Ch]
      vmulss  xmm0, xmm6, dword ptr [rbp+14h]
      vmovaps xmm6, [rsp+0D8h+var_48]
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm1, xmm3, dword ptr [rbp+8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rbp+20h]
      vaddss  xmm0, xmm5, dword ptr [r13+0]
      vmovaps xmm7, [rsp+0D8h+var_58]
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm1, xmm3, dword ptr [r13+8]
      vmovss  dword ptr [r13+0], xmm0
      vaddss  xmm0, xmm4, dword ptr [r13+4]
      vmovss  dword ptr [r13+8], xmm1
      vmovss  dword ptr [r13+4], xmm0
    }
  }
  if ( v43 )
  {
    AnglesToAxis(_RDI, &axisa);
    MatrixMultiplyEquals(&axisa, axis);
  }
  v14->skel.timeStamp = 0;
  v67 = DCONST_DVARBOOL_pip_camera_debug;
  if ( !DCONST_DVARBOOL_pip_camera_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pip_camera_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  if ( v67->current.enabled )
  {
    __asm { vmovss  xmm3, cs:__real@40800000; size }
    CL_AddOrientedDebugStar(_R13, axis, &colorGreen, *(float *)&_XMM3, 0, 0);
  }
  return 1;
}

/*
==============
CG_GetPIPOffsetPos
==============
*/
void CG_GetPIPOffsetPos(LocalClientNum_t localClientNum, tmat33_t<vec3_t> *outAxis, vec3_t *outPos)
{
  CgGlobalsSP *LocalClientGlobals; 
  char v33; 
  char v34; 
  bool v35; 
  int v70; 
  char v71; 
  tmat33_t<vec3_t> axis; 

  _RDI = outAxis;
  _RBP = outPos;
  if ( localClientNum )
  {
    v70 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", localClientNum, v70) )
      __debugbreak();
  }
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals(localClientNum);
  __asm { vxorps  xmm4, xmm4, xmm4 }
  _RSI = &LocalClientGlobals->pipViews[0].pipCameraAnglesOffset;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm4
  }
  _RBX = (char *)&LocalClientGlobals->pipViews[0].pipCameraPosOffset;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
  }
  v35 = !(v33 | v34);
  __asm { vcomiss xmm3, xmm4 }
  if ( !(v33 | v34) )
  {
    __asm
    {
      vmovaps [rsp+108h+var_38], xmm6
      vmovaps [rsp+108h+var_48], xmm7
      vmovaps [rsp+108h+var_58], xmm8
      vmovaps [rsp+108h+var_68], xmm9
      vmovaps [rsp+108h+var_78], xmm10
      vmovaps [rsp+108h+var_88], xmm11
    }
    if ( _RBX == &v71 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm10, dword ptr [rbx+4]
      vmovss  xmm9, dword ptr [rbx]
      vmovss  xmm11, dword ptr [rbx+8]
      vmulss  xmm1, xmm10, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm9, dword ptr [rdi]
      vmovss  xmm7, dword ptr [rdi+14h]
      vmovss  xmm6, dword ptr [rdi+8]
      vmovss  xmm8, dword ptr [rdi+20h]
      vmovss  xmm4, dword ptr [rdi+10h]
      vmovss  xmm3, dword ptr [rdi+4]
      vmovss  xmm5, dword ptr [rdi+1Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [rdi+18h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm2
      vmulss  xmm0, xmm10, xmm4
      vmulss  xmm1, xmm9, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm5
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, dword ptr [rbp+4]
      vmulss  xmm1, xmm9, xmm6
      vmovaps xmm9, [rsp+108h+var_68]
      vmovaps xmm6, [rsp+108h+var_38]
      vmovss  dword ptr [rbp+4], xmm0
      vmulss  xmm0, xmm10, xmm7
      vmovaps xmm10, [rsp+108h+var_78]
      vmovaps xmm7, [rsp+108h+var_48]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm8
      vmovaps xmm11, [rsp+108h+var_88]
      vmovaps xmm8, [rsp+108h+var_58]
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, dword ptr [rbp+8]
      vmovss  dword ptr [rbp+8], xmm0
    }
  }
  if ( v35 )
  {
    AnglesToAxis(_RSI, &axis);
    MatrixMultiplyEquals(&axis, _RDI);
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
  CgGlobalsType v19; 

  if ( CL_IsLocalClientActive(LOCAL_CLIENT_0) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
    {
      v19 = cg_t::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", v19) )
        __debugbreak();
    }
    _RBX = cg_t::ms_cgArray[0];
    *(_WORD *)((char *)&cg_t::ms_cgArray[0][1].refdef.radiantLiveLightsRaw[91].shadowSoftness + 1) = 0;
    LOBYTE(_RBX[1].refdef.radiantLiveLightsRaw[91].shadowSoftness) = 0;
    _RBX[1].playerWeaponInfo.animsTwoHanded.debugNames[415][6] = 0;
    *(_QWORD *)&_RBX[1].refdef.radiantLiveLightsRaw[91].shadowBias = 0i64;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D625Ch], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6260h], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6264h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6268h], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D626Ch], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6270h], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6280h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+4; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6284h], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+8; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6288h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+0Ch; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D628Ch], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+10h; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6290h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+14h; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6294h], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+18h; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6298h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+1Ch; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D629Ch], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.axis+20h; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D62A0h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6274h], xmm1
      vmovss  xmm0, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+4; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D6278h], xmm0
      vmovss  xmm1, dword ptr cs:?orIdentity@@3Uorientation_t@@B.origin+8; orientation_t const orIdentity
      vmovss  dword ptr [rbx+0D627Ch], xmm1
    }
    _RBX[1].refdef.radiantLiveLightsRaw[91].effect.intensity[1] = 65.0;
    _RBX[1].refdef.radiantLiveLightsRaw[91].effect.color[0].v[0] = 22.0;
    *(_QWORD *)&_RBX[1].refdef.radiantLiveLightsRaw[91].effect.color[0].y = 1105881203i64;
    _RBX[1].refdef.radiantLiveLightsRaw[91].effect.color[1].v[0] = 0.0;
    _RBX[1].refdef.radiantLiveLightsRaw[91].effect.color[1].v[1] = 1.0;
    _RBX[1].refdef.radiantLiveLightsRaw[91].effect.color[1].v[2] = 1.0;
    *(double *)&_XMM0 = R_GetFarPlaneDist();
    _RBX[1].playerWeaponInfo.animsTwoHanded.debugNames[415][5] = 0;
    *(_QWORD *)&_RBX[1].refdef.radiantLiveLightsRaw[92].uniqueLightID = 0i64;
    __asm { vmovss  dword ptr [rbx+0D62C0h], xmm0 }
    LOBYTE(_RBX[1].refdef.radiantLiveLightsRaw[91].action) = 1;
    *(_QWORD *)&_RBX[1].refdef.radiantLiveLightsRaw[92].origin.xyz.y = 2047i64;
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
  __int64 v9; 
  CgViewSystem *v11; 
  __int64 v27; 
  const void *v28; 
  bool PIPEntityPos; 
  __int64 v30; 
  RefdefView *v44; 
  int v61; 
  bool v65; 
  int IsPlayerZeroG; 
  bool thermalVisionActive; 
  __int64 v83; 
  __int64 v84; 
  __int64 clientFrameTime; 
  __int64 clientFrameTimea; 
  __int64 lodOverride; 
  float lodOverrideb; 
  float lodOverridec; 
  __int64 lodOverridea; 
  int v99[3]; 
  unsigned int drawTypea; 
  int viewX; 
  int viewY; 
  int viewWidth; 
  int viewHeight; 
  __int64 v105; 
  GfxViewportFeatures outViewportFeatures; 
  vec3_t pos; 
  tmat33_t<vec3_t> axis; 
  char v109; 
  void *retaddr; 

  _RAX = &retaddr;
  v105 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  drawTypea = drawType;
  v9 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 630, ASSERT_TYPE_ASSERT, "(localClientNum < 1)", (const char *)&queryFormat, "localClientNum < MAX_PIP_VIEWS") )
    __debugbreak();
  _RBX = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v9);
  if ( !(_BYTE)CgViewSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 267, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type is not known\n", "ms_allocatedType != GameModeType::NONE", v9) )
    __debugbreak();
  if ( (unsigned int)v9 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(lodOverride) = CgViewSystem::ms_allocatedCount;
    LODWORD(clientFrameTime) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 268, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientFrameTime, lodOverride) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v9] )
  {
    LODWORD(lodOverride) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 269, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", lodOverride) )
      __debugbreak();
  }
  v11 = CgViewSystem::ms_viewSystemArray[v9];
  *(double *)&_XMM0 = R_GetFarPlaneDist();
  __asm { vmovaps xmm9, xmm0 }
  RefdefView_SetOrg(&_RBX->pipViews[0].pipRefDef.view, &_RBX->pipViews[0].pipCameraPos);
  _RBX->pipViews[0].pipRefDef.view.axis.m[1].v[0] = _RBX->pipViews[0].pipCameraRight.v[0];
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0D6284h]
    vmovss  dword ptr [rbx+0C52E4h], xmm1
    vmovss  xmm2, dword ptr [rbx+0D6288h]
    vmovss  dword ptr [rbx+0C52E8h], xmm2
  }
  _RBX->pipViews[0].pipRefDef.view.axis.m[0].v[0] = _RBX->pipViews[0].pipCameraForward.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D6290h]
    vmovss  dword ptr [rbx+0C52D8h], xmm0
    vmovss  xmm1, dword ptr [rbx+0D6294h]
    vmovss  dword ptr [rbx+0C52DCh], xmm1
  }
  _RBX->pipViews[0].pipRefDef.view.axis.m[2].v[0] = _RBX->pipViews[0].pipCameraUp.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0D629Ch]
    vmovss  dword ptr [rbx+0C52F0h], xmm0
    vmovss  xmm1, dword ptr [rbx+0D62A0h]
    vmovss  dword ptr [rbx+0C52F4h], xmm1
    vmovss  xmm0, dword ptr [rbx+0C52E0h]
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx+0C52E0h], xmm0
    vmovss  xmm1, dword ptr [rbx+0C52E4h]
    vxorps  xmm0, xmm1, xmm6
    vmovss  dword ptr [rbx+0C52E4h], xmm0
    vmovss  xmm1, dword ptr [rbx+0C52E8h]
    vxorps  xmm0, xmm1, xmm6
    vmovss  dword ptr [rbx+0C52E8h], xmm0
  }
  g_activeRefDef = &_RBX->pipViews[0].pipRefDef;
  __asm { vmovss  xmm1, dword ptr [rbx+0D62B8h]; lodOverride }
  R_SetLodOrigin(&_RBX->pipViews[0].pipRefDef, *(float *)&_XMM1);
  v27 = tls_index;
  v28 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", v28) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v9 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&lodOverride = CgStatic::ms_allocatedCount;
    LODWORD(clientFrameTime) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientFrameTime, lodOverride) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v27) + 272i64) = CgStatic::ms_cgameStaticsArray[v9];
  Sys_ProfBeginNamedEvent(0xFFFF6347, "clear scene view");
  R_ClearSceneView((LocalClientNum_t)v9);
  Sys_ProfEndNamedEvent();
  if ( _RBX->pipViews[0].pipNonPlayer )
  {
    g_activeRefDef = &_RBX->refdef;
    PIPEntityPos = CG_GetPIPEntityPos((LocalClientNum_t)v9, &axis, &pos);
    v30 = 807600i64;
  }
  else
  {
    PIPEntityPos = 0;
    v30 = 26912i64;
  }
  _R14 = (char *)_RBX + v30;
  g_activeRefDef = (refdef_t *)_R14;
  *((_DWORD *)_R14 + 16859) = v9;
  _RBP = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v9);
  viewX = _RBP->viewX;
  viewY = _RBP->viewY;
  viewWidth = _RBP->viewWidth;
  viewHeight = _RBP->viewHeight;
  __asm { vmovss  xmm8, dword ptr [rbp+18h] }
  ScrPlace_BeginDisplayView();
  CG_PIP_SetScreenView((LocalClientNum_t)v9);
  if ( _RBX->pipViews[0].pipNonPlayer || (_RBX->cvsData.transitory.thermalVisionActive = CG_View_IsThermalVisionOn((const LocalClientNum_t)v9), Sys_ProfBeginNamedEvent(0xFFFFFFFF, "view anim"), CG_UpdateViewWeaponAnim((LocalClientNum_t)v9), Sys_ProfEndNamedEvent(), _RBX->pipViews[0].pipNonPlayer) )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+0D62C0h]; dist }
    R_SetCullDist(*(float *)&_XMM0);
    _R14[67432] = 0;
    _R14[648] = R_DOF_GetPhysicalEnable();
    *(_WORD *)(_R14 + 649) = 0;
    _R14[651] = 0;
    *((_DWORD *)_R14 + 163) = r_dof_physical_filmDiagonal->current.integer;
    *((_DWORD *)_R14 + 164) = r_dof_physical_minFocusDistance->current.integer;
    *((_DWORD *)_R14 + 165) = r_dof_physical_maxCocDiameter->current.integer;
    *((_DWORD *)_R14 + 166) = LODWORD(_RBX->pipViews[0].pipDofPhysicalFstop);
    *((_DWORD *)_R14 + 167) = LODWORD(_RBX->pipViews[0].pipDofPhysicalFocusDistance);
    *((_DWORD *)_R14 + 168) = 1065353216;
    *(_QWORD *)(_R14 + 748) = 0i64;
    *((_DWORD *)_R14 + 189) = 0;
    *((_DWORD *)_R14 + 190) = 1065353216;
    *((_DWORD *)_R14 + 191) = 1065353216;
    *((_DWORD *)_R14 + 18) = LODWORD(_RBX->pipViews[0].pipNearZ);
    *((_DWORD *)_R14 + 37) = _RBX->time;
    *((_DWORD *)_R14 + 38) = _RBX->frametime;
    __asm { vmovss  xmm1, dword ptr [rbx+0D62B4h] }
    _RAX = 5 * v9;
    _RCX = 0x140000000ui64;
    __asm
    {
      vmovss  xmm0, rva ?cgDC@@3PAUUiContext@@A.blurRadiusOut[rcx+rax*8]; UiContext near * cgDC
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [r14+0B0h], xmm0
    }
    _R14[180] = 0;
    *((_WORD *)_R14 + 78) = 0;
    _R14[67432] = 0;
    *(_DWORD *)_R14 = _RBP->viewX;
    *((_DWORD *)_R14 + 1) = _RBP->viewY;
    *((_DWORD *)_R14 + 2) = _RBP->viewWidth;
    *((_DWORD *)_R14 + 3) = _RBP->viewHeight;
    _R14[67420] = 0;
    v65 = !PIPEntityPos;
    _RDI = _R14 + 16;
    v44 = (RefdefView *)(_R14 + 16);
    if ( v65 )
    {
      RefdefView_SetOrg(v44, &_RBX->pipViews[0].pipCameraPos);
      *((_DWORD *)_R14 + 12) = LODWORD(_RBX->pipViews[0].pipCameraRight.v[0]);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0D6284h]
        vmovss  dword ptr [r14+34h], xmm0
        vmovss  xmm1, dword ptr [rbx+0D6288h]
        vmovss  dword ptr [r14+38h], xmm1
      }
      *((_DWORD *)_R14 + 9) = LODWORD(_RBX->pipViews[0].pipCameraForward.v[0]);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0D6290h]
        vmovss  dword ptr [r14+28h], xmm0
        vmovss  xmm1, dword ptr [rbx+0D6294h]
        vmovss  dword ptr [r14+2Ch], xmm1
      }
      *((_DWORD *)_R14 + 15) = LODWORD(_RBX->pipViews[0].pipCameraUp.v[0]);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0D629Ch]
        vmovss  dword ptr [r14+40h], xmm0
        vmovss  xmm1, dword ptr [rbx+0D62A0h]
        vmovss  dword ptr [r14+44h], xmm1
        vmovss  xmm0, dword ptr [r14+30h]
        vxorps  xmm2, xmm0, xmm6
        vmovss  dword ptr [r14+30h], xmm2
        vmovss  xmm0, dword ptr [r14+34h]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [r14+34h], xmm1
        vmovss  xmm0, dword ptr [r14+38h]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr [r14+38h], xmm1
      }
    }
    else
    {
      RefdefView_SetOrg(v44, &pos);
      AxisCopy(&axis, (tmat33_t<vec3_t> *)_R14 + 1);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D62BCh]
      vmulss  xmm1, xmm0, dword ptr [rbp+18h]; viewAspect
      vmovss  xmm0, dword ptr [rbx+0D62A4h]; fovdeg_x
    }
    TanHalfAngles(*(float *)&_XMM0, *(float *)&_XMM1, (float *)_R14 + 4, (float *)_R14 + 5);
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi]
      vmovsd  qword ptr [r14+4Ch], xmm0
    }
    if ( _R14 == (char *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    v61 = *((_DWORD *)_R14 + 29);
    if ( _R14 == (char *)-24i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v99[0] = *((_DWORD *)_R14 + 6) ^ ((v61 ^ ((_DWORD)_R14 + 24)) * ((v61 ^ ((_DWORD)_R14 + 24)) + 2));
    v99[1] = *((_DWORD *)_R14 + 7) ^ ((v61 ^ ((_DWORD)_R14 + 28)) * ((v61 ^ ((_DWORD)_R14 + 28)) + 2));
    v99[2] = ((v61 ^ ((_DWORD)_R14 + 32)) * ((v61 ^ ((_DWORD)_R14 + 32)) + 2)) ^ *((_DWORD *)_R14 + 8);
    __asm
    {
      vmovss  xmm0, [rsp+168h+var_120]
      vmovss  dword ptr [r14+7Ch], xmm0
      vmovss  xmm1, [rsp+168h+var_11C]
      vmovss  dword ptr [r14+80h], xmm1
      vmovss  xmm0, [rsp+168h+var_118]
      vmovss  dword ptr [r14+84h], xmm0
    }
    v65 = !_RBX->pipViews[0].cvsData.transitory.nightVisionActive;
    if ( _RBX->pipViews[0].cvsData.transitory.nightVisionActive || (v65 = !_RBX->pipViews[0].cvsData.archived.painVisionActive, _RBX->pipViews[0].cvsData.archived.painVisionActive) )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+0D6258h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65ECh]
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vsubss  xmm7, xmm2, xmm1
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm7, xmm6
      }
      if ( v65 )
      {
        __asm { vmovss  xmm0, cs:__real@3f800000 }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm2, dword ptr [rbx+0D6254h]
          vcomiss xmm0, xmm6
        }
        if ( v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 779, ASSERT_TYPE_ASSERT, "(( pip->pipFadeEndTime - pip->pipFadeStartTime ) > 0.0f)", (const char *)&queryFormat, "( pip->pipFadeEndTime - pip->pipFadeStartTime ) > 0.0f") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0D6258h]
          vsubss  xmm2, xmm0, dword ptr [rbx+0D6254h]
          vdivss  xmm3, xmm7, xmm2
          vmovss  xmm2, cs:__real@3f800000; max
          vsubss  xmm0, xmm2, xmm3; val
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    if ( _RBX->pipViews[0].cvsData.archived.painVisionActive )
      __asm { vmovss  dword ptr [rbx+0E4A20h], xmm0 }
    CG_VisionSetSetBlendOff(&_RBX->pipViews[0].cvsData, VISIONSET_BLENDTYPE_CT_DELAY);
    CG_VisionSetSetBlendOff(&_RBX->pipViews[0].cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE);
    CG_VisionSetUpdate(&_RBX->pipViews[0].cvsData, *((_DWORD *)_R14 + 37));
    CG_VisionSetApplyToRefdef((refdef_t *)_R14, &_RBX->pipViews[0].cvsData);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D62B8h]
      vmovss  [rsp+168h+lodOverride], xmm0
    }
    CG_ViewSP_DrawActiveFrameInit((const LocalClientNum_t)v9, updateState, &_RBX->pipViews[0].cvsData, (refdef_t *)_R14, _RBX->time, _RBX->frametime, lodOverrideb);
    memset(v99, 0, sizeof(v99));
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D62B8h]
      vmovss  [rsp+168h+lodOverride], xmm0
    }
    CG_ViewSP_DrawActiveFrameInit((const LocalClientNum_t)v9, updateState, &_RBX->cvsData, (refdef_t *)_R14, _RBX->time, _RBX->frametime, lodOverridec);
  }
  R_PIP_ToggleSmpFrame((LocalClientNum_t)v9);
  R_EndDelayedSceneModels(1);
  R_ClearDObjInScene(0x800u);
  R_ClearDObjInScene(0x801u);
  R_ResetSceneEnts();
  CG_PlayersSP_ClearPlayersFromScene((LocalClientNum_t)v9);
  CG_PlayersSP_AddLocalPlayerToScene((LocalClientNum_t)v9, !_RBX->pipViews[0].pipNonPlayer);
  R_Clear_IsPipClientView();
  if ( !_RBX->pipViews[0].pipNonPlayer )
    v11->SetViewValues(v11);
  IsPlayerZeroG = BG_IsPlayerZeroG(&_RBX->predictedPlayerState);
  if ( _RBX->pipViews[0].pipNonPlayer )
    thermalVisionActive = _RBX->pipViews[0].cvsData.transitory.thermalVisionActive;
  else
    thermalVisionActive = _RBX->cvsData.transitory.thermalVisionActive;
  *(double *)&_XMM0 = R_GetFarPlaneDist();
  __asm { vmovaps xmm3, xmm0; zfar }
  FX_Update2((LocalClientNum_t)v9, (const refdef_t *)_R14, (const RefdefView *)(_R14 + 16), *(float *)&_XMM3, thermalVisionActive, IsPlayerZeroG, 1);
  R_EndDObjScene();
  FX_Update3((LocalClientNum_t)v9);
  v11->UpdateFullFrameFX(v11);
  R_PIP_SetViewInfoIndex((const GfxViewport *)_R14);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v9 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&lodOverridea = CgStatic::ms_allocatedCount;
    LODWORD(clientFrameTimea) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", clientFrameTimea, lodOverridea) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  v83 = tls_index;
  v84 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(CgStatic **)(v84 + 272) != CgStatic::ms_cgameStaticsArray[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v84 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v83) + 272i64) = 0i64;
  R_SetupDefaultViewportFeatures(&outViewportFeatures);
  outViewportFeatures.m_viewportType = R_VIEWPORT_TYPE_PIP;
  outViewportFeatures.m_ssaoModeOverride = GFX_SSAO_OFF;
  *((_DWORD *)&outViewportFeatures + 10) = *((_DWORD *)&outViewportFeatures + 10) & 0x7F002000 | 0xBE0031;
  *((_DWORD *)&outViewportFeatures + 11) ^= (*((_BYTE *)&outViewportFeatures + 44) ^ (unsigned __int8)(4 * _RBX->pipViews[0].shadowMapsEnabled)) & 4;
  *((_DWORD *)&outViewportFeatures + 11) ^= (*((_BYTE *)&outViewportFeatures + 44) ^ (unsigned __int8)(2 * _RBX->pipViews[0].shadowMapsEnabled)) & 2;
  if ( r_gpShowStats->current.integer > 0 || r_showStats->current.integer > 0 )
    R_TrackStatistics();
  else
    R_TrackStatisticsStop();
  __asm { vmovss  xmm1, dword ptr [rbx+0D62B8h]; lodOverride }
  R_RenderScene((const refdef_t *)_R14, *(float *)&_XMM1, drawTypea, &outViewportFeatures);
  __asm { vmovaps xmm0, xmm9; dist }
  R_SetCullDist(*(float *)&_XMM0);
  _RBP->viewX = viewX;
  _RBP->viewY = viewY;
  _RBP->viewWidth = viewWidth;
  _RBP->viewHeight = viewHeight;
  __asm { vmovss  dword ptr [rbp+18h], xmm8 }
  R_AddCmdEndOfList();
  _R11 = &v109;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_PIP_EnableNightVision
==============
*/

void __fastcall CG_PIP_EnableNightVision(LocalClientNum_t pipClient, double fadeInTime)
{
  char v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 294, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, 1) )
    __debugbreak();
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  _RAX->pipViews[0].cvsData.transitory.nightVisionActive = !v8;
  if ( !v8 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+65ECh]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmovss  dword ptr [rax+0D6254h], xmm1
      vaddss  xmm1, xmm1, xmm6
      vmovss  dword ptr [rax+0D6258h], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CG_PIP_GetViewHeight
==============
*/
float CG_PIP_GetViewHeight(LocalClientNum_t pipClient)
{
  int v6; 

  if ( pipClient )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 1000, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v6) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm { vmovss  xmm0, dword ptr [rax+0E4C5Ch] }
  return *(float *)&_XMM0;
}

/*
==============
CG_PIP_GetViewWidth
==============
*/
float CG_PIP_GetViewWidth(LocalClientNum_t pipClient)
{
  int v6; 

  if ( pipClient )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 993, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v6) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm { vmovss  xmm0, dword ptr [rax+0E4C58h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_PIP_GetViewX
==============
*/
float CG_PIP_GetViewX(LocalClientNum_t pipClient)
{
  int v6; 

  if ( pipClient )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v6) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm { vmovss  xmm0, dword ptr [rax+0E4C50h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_PIP_GetViewY
==============
*/
float CG_PIP_GetViewY(LocalClientNum_t pipClient)
{
  int v6; 

  if ( pipClient )
  {
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 986, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v6) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm { vmovss  xmm0, dword ptr [rax+0E4C54h] }
  return *(float *)&_XMM0;
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

void __fastcall CG_PIP_SetAspectRatio(LocalClientNum_t pipClient, double aspectRatio)
{
  bool v5; 
  bool v6; 
  bool v7; 
  double v13; 
  int v14; 
  __int128 v15; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = pipClient == LOCAL_CLIENT_0;
  v6 = (unsigned int)pipClient <= LOCAL_CLIENT_1;
  if ( pipClient )
  {
    v14 = 1;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v14);
    v5 = 0;
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, cs:__real@3dcccccd }
  if ( v5 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@41a00000 }
  if ( !v6 )
  {
LABEL_6:
    __asm
    {
      vmovaps xmm0, cs:__xmm@40340000000000003fb99999a0000000
      vmovups [rsp+58h+var_28], xmm0
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 263, ASSERT_TYPE_ASSERT, "( 0.1f ) <= ( aspectRatio ) && ( aspectRatio ) <= ( 20.0f )", "aspectRatio not in [MIN_ASPECT_RATIO, MAX_ASPECT_RATIO]\n\t%g not in [%g, %g]", v13, *(double *)&v15, *((double *)&v15 + 1)) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62BCh], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_PIP_SetPainVision
==============
*/

void __fastcall CG_PIP_SetPainVision(LocalClientNum_t pipClient, double fadeInTime)
{
  bool v6; 
  bool v7; 
  double v16; 
  int v17; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = pipClient == LOCAL_CLIENT_0;
  if ( pipClient )
  {
    v17 = 1;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v17);
    v6 = 0;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 310, ASSERT_TYPE_ASSERT, "( ( fadeInTime >= 0.0f ) )", "( fadeInTime ) = %g", v16) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65ECh]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rax+0D6254h], xmm1
    vaddss  xmm1, xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rax+0D6258h], xmm1
  }
  _RAX->pipViews[0].cvsData.archived.painVisionActive = 1;
  _RAX->pipViews[0].cvsData.archived.painVisionLerp = 0.0;
}

/*
==============
CG_PIP_SetScreenView
==============
*/

void __fastcall CG_PIP_SetScreenView(LocalClientNum_t pipClient, double _XMM1_8, double _XMM2_8)
{
  __int64 v5; 
  cgs_t *LocalClientStaticGlobals; 
  CgGlobalsSP *LocalClientGlobals; 
  bool v9; 
  bool v11; 
  const ScreenPlacement *v12; 
  cgs_t *v31; 
  int vertAlign; 
  int v56; 
  int v57; 
  int width; 
  int height; 
  float v60; 
  float aspect[3]; 
  float x; 
  float y; 
  float w; 
  float h; 

  v5 = pipClient;
  if ( pipClient )
  {
    vertAlign = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, vertAlign) )
      __debugbreak();
  }
  _RBX = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v5);
  LocalClientGlobals = CgGlobalsSP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  v9 = !LocalClientGlobals->pipViews[0].renderToTexture;
  if ( LocalClientGlobals->pipViews[0].renderToTexture )
  {
    *(_QWORD *)&LocalClientStaticGlobals->viewX = 0i64;
    LocalClientStaticGlobals->viewAspect = _RBX->pipViews[0].aspectRatio;
    LocalClientStaticGlobals->viewWidth = 512;
    LocalClientStaticGlobals->viewHeight = 512;
    return;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rbx+0E4C58h]
    vmovaps [rsp+0A0h+var_30], xmm6
    vmovaps [rsp+0A0h+var_40], xmm7
  }
  if ( !v9 )
    _RBX->pipViewParams[0].width = 1.0;
  __asm { vcomiss xmm0, dword ptr [rbx+0E4C5Ch] }
  if ( !v9 )
    _RBX->pipViewParams[0].height = 1.0;
  CL_GetScreenDimensions(&width, &height, aspect);
  CL_GetSceneDimensions(&v57, &v56, &v60);
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v12 = &scrPlaceViewDisplay[v5];
      goto LABEL_17;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v11 )
      __debugbreak();
  }
  v12 = &scrPlaceFull;
LABEL_17:
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rbp+57h+var_5C]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rbp+57h+width]
    vdivss  xmm6, xmm1, xmm0
    vmovss  xmm0, dword ptr [rbx+0E4C50h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rbp+57h+height]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, [rbp+57h+var_60]
    vdivss  xmm7, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbx+0E4C54h]
    vmovss  [rbp+57h+y], xmm1
    vmovss  xmm1, dword ptr [rbx+0E4C5Ch]
    vmovss  [rbp+57h+x], xmm0
    vmovss  xmm0, dword ptr [rbx+0E4C58h]
    vmovss  [rbp+57h+h], xmm1
    vmovss  [rbp+57h+w], xmm0
  }
  ScrPlace_ApplyRect(v12, &x, &y, &w, &h, 0, 0);
  __asm
  {
    vmulss  xmm1, xmm6, [rbp+57h+x]
    vmulss  xmm0, xmm7, [rbp+57h+y]
    vmulss  xmm2, xmm6, [rbp+57h+w]
    vmovss  [rbp+57h+x], xmm1
    vmulss  xmm1, xmm7, [rbp+57h+h]
    vmovss  [rbp+57h+h], xmm1
    vmovss  [rbp+57h+y], xmm0
    vmovss  [rbp+57h+w], xmm2
  }
  v31 = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v5);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vaddss  xmm1, xmm2, [rbp+57h+x]
    vmovaps xmm7, [rsp+0A0h+var_40]
  }
  _RCX = v31;
  __asm
  {
    vmovaps xmm6, [rsp+0A0h+var_30]
    vcvttss2si r9d, xmm1
  }
  v31->viewX = _ER9;
  __asm
  {
    vaddss  xmm1, xmm2, [rbp+57h+y]
    vcvttss2si r10d, xmm1
  }
  v31->viewY = _ER10;
  __asm
  {
    vaddss  xmm1, xmm2, [rbp+57h+w]
    vcvttss2si r8d, xmm1
  }
  v31->viewWidth = _ER8;
  __asm
  {
    vaddss  xmm1, xmm2, [rbp+57h+h]
    vcvttss2si edx, xmm1
  }
  v31->viewHeight = _EDX;
  if ( _ER9 < 0 )
  {
    v31->viewX = 0;
    _ER9 = 0;
  }
  if ( _ER10 < 0 )
  {
    v31->viewY = 0;
    _ER10 = 0;
  }
  if ( _ER8 + _ER9 > v57 )
  {
    _ER8 = v57 - _ER9;
    v31->viewWidth = v57 - _ER9;
  }
  if ( _EDX + _ER10 > v56 )
  {
    _EDX = v56 - _ER10;
    v31->viewHeight = v56 - _ER10;
  }
  if ( _ER8 < 1 )
    v31->viewWidth = 1;
  if ( _EDX < 1 )
    v31->viewHeight = 1;
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_50]
    vmulss  xmm1, xmm0, dword ptr [rbx+0D62BCh]
    vmulss  xmm3, xmm1, dword ptr [rbx+0E4C58h]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, [rbp+57h+var_60]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rbp+57h+var_5C]
    vmulss  xmm1, xmm0, dword ptr [rbx+0E4C5Ch]
    vmulss  xmm4, xmm3, xmm2
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rcx+18h], xmm2
  }
}

/*
==============
CG_PIP_SetViewHeight
==============
*/

void __fastcall CG_PIP_SetViewHeight(LocalClientNum_t pipClient, double height)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 970, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0E4C5Ch], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_PIP_SetViewWidth
==============
*/

void __fastcall CG_PIP_SetViewWidth(LocalClientNum_t pipClient, double width)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 958, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0E4C58h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_PIP_SetViewX
==============
*/

void __fastcall CG_PIP_SetViewX(LocalClientNum_t pipClient, double x)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 934, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0E4C50h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_PIP_SetViewY
==============
*/

void __fastcall CG_PIP_SetViewY(LocalClientNum_t pipClient, double y)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 946, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0E4C54h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
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

void __fastcall CG_SetPIPBlur(LocalClientNum_t pipClient, double blur)
{
  bool v6; 
  bool v7; 
  double v13; 
  int v14; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = pipClient == LOCAL_CLIENT_0;
  if ( pipClient )
  {
    v14 = 1;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v14);
    v6 = 0;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 241, ASSERT_TYPE_ASSERT, "( ( blur >= 0.0f ) )", "( blur ) = %g", v13) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62B4h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_SetPIPFarZ
==============
*/

void __fastcall CG_SetPIPFarZ(LocalClientNum_t pipClient, double farZ)
{
  bool v6; 
  bool v7; 
  double v13; 
  int v14; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = pipClient == LOCAL_CLIENT_0;
  if ( pipClient )
  {
    v14 = 1;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v14);
    v6 = 0;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 274, ASSERT_TYPE_ASSERT, "( ( farZ >= 0.0f ) )", "( farZ ) = %g", v13) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62C0h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
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

void __fastcall CG_SetPIPLod(LocalClientNum_t pipClient, double lod)
{
  bool v5; 
  bool v6; 
  bool v7; 
  double v13; 
  int v14; 
  __int128 v15; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v5 = pipClient == LOCAL_CLIENT_0;
  v6 = (unsigned int)pipClient <= LOCAL_CLIENT_1;
  if ( pipClient )
  {
    v14 = 1;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v14);
    v5 = 0;
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( v5 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@45000000 }
  if ( !v6 )
  {
LABEL_6:
    __asm
    {
      vmovaps xmm0, cs:__xmm@40a00000000000003ff0000000000000
      vmovups [rsp+58h+var_28], xmm0
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 252, ASSERT_TYPE_ASSERT, "( 1.0f ) <= ( lod ) && ( lod ) <= ( 2048.0f )", "lod not in [NO_LOD_SCALE, MAX_LOD_SCALE]\n\t%g not in [%g, %g]", v13, *(double *)&v15, *((double *)&v15 + 1)) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62B8h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_SetPIPNearZ
==============
*/

void __fastcall CG_SetPIPNearZ(LocalClientNum_t pipClient, double nearZ)
{
  bool v6; 
  bool v7; 
  double v13; 
  int v14; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = pipClient == LOCAL_CLIENT_0;
  if ( pipClient )
  {
    v14 = 1;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v14);
    v6 = 0;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 230, ASSERT_TYPE_ASSERT, "( ( nearZ >= 0.0f ) )", "( nearZ ) = %g", v13) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62B0h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
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

void __fastcall CG_SetPipDofPhysicalFocusDistance(LocalClientNum_t pipClient, double focusDistance)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62ACh], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_SetPipDofPhysicalFstop
==============
*/

void __fastcall CG_SetPipDofPhysicalFstop(LocalClientNum_t pipClient, double fstop)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62A8h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
CG_SetPipFOV
==============
*/

void __fastcall CG_SetPipFOV(LocalClientNum_t pipClient, double fov)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( pipClient )
  {
    v8 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_pip_sp.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( pipClient ) < (unsigned)( 1 )", "pipClient doesn't index MAX_PIP_VIEWS\n\t%i not in [0, %i)", pipClient, v8) )
      __debugbreak();
  }
  _RAX = CgGlobalsSP::GetLocalClientGlobals(pipClient);
  __asm
  {
    vmovss  dword ptr [rax+0D62A4h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
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

