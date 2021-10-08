/*
==============
CL_StreamViewsSP_GetAutoViewHandModel
==============
*/

const XModel *__fastcall CL_StreamViewsSP_GetAutoViewHandModel(StreamAutoViewType type, unsigned int clientIndex)
{
  return ?CL_StreamViewsSP_GetAutoViewHandModel@@YAPEBUXModel@@W4StreamAutoViewType@@I@Z(type, clientIndex);
}

/*
==============
CL_StreamViews_GetClientVelocity
==============
*/

const vec3_t *__fastcall CL_StreamViews_GetClientVelocity(const LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetClientVelocity@@YAAEBTvec3_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamViews_IsManualViewSet
==============
*/

bool __fastcall CL_StreamViews_IsManualViewSet(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_IsManualViewSet@@YA_NW4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViewsSP_GetAutoViewOrigin
==============
*/

const vec3_t *__fastcall CL_StreamViewsSP_GetAutoViewOrigin(StreamAutoViewType type, unsigned int clientIndex)
{
  return ?CL_StreamViewsSP_GetAutoViewOrigin@@YAAEBTvec3_t@@W4StreamAutoViewType@@I@Z(type, clientIndex);
}

/*
==============
CL_StreamViews_UpdateVelocity
==============
*/

void __fastcall CL_StreamViews_UpdateVelocity(const LocalClientNum_t localClientNum, const vec3_t *cameraOrigin, const int time, const int frameTime)
{
  ?CL_StreamViews_UpdateVelocity@@YAXW4LocalClientNum_t@@AEBTvec3_t@@HH@Z(localClientNum, cameraOrigin, time, frameTime);
}

/*
==============
CL_StreamViewsSP_CopyAutoView
==============
*/

void __fastcall CL_StreamViewsSP_CopyAutoView(StreamAutoViewType fromType, StreamAutoViewType toType, unsigned int clientIndex)
{
  ?CL_StreamViewsSP_CopyAutoView@@YAXW4StreamAutoViewType@@0I@Z(fromType, toType, clientIndex);
}

/*
==============
CL_StreamViews_Reset
==============
*/

void __fastcall CL_StreamViews_Reset(const LocalClientNum_t localClientNum)
{
  ?CL_StreamViews_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamViews_GetNumberOfManualViewsSet
==============
*/

unsigned int __fastcall CL_StreamViews_GetNumberOfManualViewsSet(const LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetNumberOfManualViewsSet@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamViews_GetManualViewVelocity
==============
*/

const vec3_t *__fastcall CL_StreamViews_GetManualViewVelocity(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetManualViewVelocity@@YAAEBTvec3_t@@W4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViews_HasAdditionalViewsSet
==============
*/

bool __fastcall CL_StreamViews_HasAdditionalViewsSet()
{
  return ?CL_StreamViews_HasAdditionalViewsSet@@YA_NXZ();
}

/*
==============
CL_StreamViewsSP_SetAutoView
==============
*/

void __fastcall CL_StreamViewsSP_SetAutoView(StreamAutoViewType type, unsigned int clientIndex, const vec3_t *origin, const vec3_t *angles, float zoomFactor, float cosFovLimit, const Weapon *weapon, const XModel *handModel)
{
  ?CL_StreamViewsSP_SetAutoView@@YAXW4StreamAutoViewType@@IAEBTvec3_t@@1MMAEBUWeapon@@PEBUXModel@@@Z(type, clientIndex, origin, angles, zoomFactor, cosFovLimit, weapon, handModel);
}

/*
==============
CL_StreamViewsSP_IsAutoViewSet
==============
*/

bool __fastcall CL_StreamViewsSP_IsAutoViewSet(StreamAutoViewType type, unsigned int clientIndex)
{
  return ?CL_StreamViewsSP_IsAutoViewSet@@YA_NW4StreamAutoViewType@@I@Z(type, clientIndex);
}

/*
==============
CL_StreamViews_ClearAllManualViews
==============
*/

void __fastcall CL_StreamViews_ClearAllManualViews(LocalClientNum_t localClientNum)
{
  ?CL_StreamViews_ClearAllManualViews@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_StreamViews_GetManualViewAngles
==============
*/

const vec3_t *__fastcall CL_StreamViews_GetManualViewAngles(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetManualViewAngles@@YAAEBTvec3_t@@W4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViews_GetManualViewMode
==============
*/

BgWorldStreamingViewMode __fastcall CL_StreamViews_GetManualViewMode(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetManualViewMode@@YA?AW4BgWorldStreamingViewMode@@W4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViews_GetManualViewOrigin
==============
*/

const vec3_t *__fastcall CL_StreamViews_GetManualViewOrigin(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetManualViewOrigin@@YAAEBTvec3_t@@W4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViews_GetManualViewCosFovLimit
==============
*/

double __fastcall CL_StreamViews_GetManualViewCosFovLimit(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_StreamViews_GetManualViewCosFovLimit@@YAMW4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
  return result;
}

/*
==============
CL_StreamViews_GetManualViewZoomFactor
==============
*/

double __fastcall CL_StreamViews_GetManualViewZoomFactor(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_StreamViews_GetManualViewZoomFactor@@YAMW4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
  return result;
}

/*
==============
CL_StreamViews_MaxParametricVelocity
==============
*/

double __fastcall CL_StreamViews_MaxParametricVelocity()
{
  double result; 

  *(float *)&result = ?CL_StreamViews_MaxParametricVelocity@@YAMXZ();
  return result;
}

/*
==============
CL_StreamViewsSP_GetAutoViewZoomFactor
==============
*/

double __fastcall CL_StreamViewsSP_GetAutoViewZoomFactor(StreamAutoViewType type, unsigned int clientIndex)
{
  double result; 

  *(float *)&result = ?CL_StreamViewsSP_GetAutoViewZoomFactor@@YAMW4StreamAutoViewType@@I@Z(type, clientIndex);
  return result;
}

/*
==============
CL_StreamViews_ParametricVelocity
==============
*/

double __fastcall CL_StreamViews_ParametricVelocity(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_StreamViews_ParametricVelocity@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CL_StreamViews_ParametricVelocity
==============
*/

double __fastcall CL_StreamViews_ParametricVelocity(const vec3_t *velocity)
{
  double result; 

  *(float *)&result = ?CL_StreamViews_ParametricVelocity@@YAMAEBTvec3_t@@@Z(velocity);
  return result;
}

/*
==============
CL_StreamViewsSP_GetAutoViewAngles
==============
*/

const vec3_t *__fastcall CL_StreamViewsSP_GetAutoViewAngles(StreamAutoViewType type, unsigned int clientIndex)
{
  return ?CL_StreamViewsSP_GetAutoViewAngles@@YAAEBTvec3_t@@W4StreamAutoViewType@@I@Z(type, clientIndex);
}

/*
==============
CL_StreamViews_SetManualViewAndMode
==============
*/

void __fastcall CL_StreamViews_SetManualViewAndMode(StreamManualViewType type, LocalClientNum_t localClientNum, const BgWorldStreamingViewMode viewMode, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  ?CL_StreamViews_SetManualViewAndMode@@YAXW4StreamManualViewType@@W4LocalClientNum_t@@W4BgWorldStreamingViewMode@@AEBTvec3_t@@33MM_N@Z(type, localClientNum, viewMode, origin, angles, velocity, zoomFactor, cosFovLimit, streamRender);
}

/*
==============
CL_StreamViews_CalculateZoomFactorAndCosFovLimit
==============
*/

void __fastcall CL_StreamViews_CalculateZoomFactorAndCosFovLimit(float currentTanHalfFovY, float defaultTanHalfFovY, float *outZoomFactor, float *outCosFovLimit)
{
  ?CL_StreamViews_CalculateZoomFactorAndCosFovLimit@@YAXMMPEAM0@Z(currentTanHalfFovY, defaultTanHalfFovY, outZoomFactor, outCosFovLimit);
}

/*
==============
CL_StreamViews_GetMaxLocalClientVelocity
==============
*/

double __fastcall CL_StreamViews_GetMaxLocalClientVelocity()
{
  double result; 

  *(float *)&result = ?CL_StreamViews_GetMaxLocalClientVelocity@@YAMXZ();
  return result;
}

/*
==============
CL_StreamViews_Init
==============
*/

void CL_StreamViews_Init(void)
{
  ?CL_StreamViews_Init@@YAXXZ();
}

/*
==============
CL_StreamViewsSP_GetAutoViewWeapon
==============
*/

const Weapon *__fastcall CL_StreamViewsSP_GetAutoViewWeapon(StreamAutoViewType type, unsigned int clientIndex)
{
  return ?CL_StreamViewsSP_GetAutoViewWeapon@@YAAEBUWeapon@@W4StreamAutoViewType@@I@Z(type, clientIndex);
}

/*
==============
CL_StreamViews_SetManualView
==============
*/

void __fastcall CL_StreamViews_SetManualView(StreamManualViewType type, LocalClientNum_t localClientNum, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  ?CL_StreamViews_SetManualView@@YAXW4StreamManualViewType@@W4LocalClientNum_t@@AEBTvec3_t@@22MM_N@Z(type, localClientNum, origin, angles, velocity, zoomFactor, cosFovLimit, streamRender);
}

/*
==============
CL_StreamViews_GetManualViewStreamRender
==============
*/

bool __fastcall CL_StreamViews_GetManualViewStreamRender(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  return ?CL_StreamViews_GetManualViewStreamRender@@YA_NW4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViews_SetManualView
==============
*/

void __fastcall CL_StreamViews_SetManualView(StreamManualViewType type, LocalClientNum_t localClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  ?CL_StreamViews_SetManualView@@YAXW4StreamManualViewType@@W4LocalClientNum_t@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@2MM_N@Z(type, localClientNum, origin, axis, velocity, zoomFactor, cosFovLimit, streamRender);
}

/*
==============
CL_StreamViewsSP_GetAutoViewCosFovLimit
==============
*/

double __fastcall CL_StreamViewsSP_GetAutoViewCosFovLimit(StreamAutoViewType type, unsigned int clientIndex)
{
  double result; 

  *(float *)&result = ?CL_StreamViewsSP_GetAutoViewCosFovLimit@@YAMW4StreamAutoViewType@@I@Z(type, clientIndex);
  return result;
}

/*
==============
CL_StreamViewsSP_ClearAutoView
==============
*/

void __fastcall CL_StreamViewsSP_ClearAutoView(StreamAutoViewType type, unsigned int clientIndex)
{
  ?CL_StreamViewsSP_ClearAutoView@@YAXW4StreamAutoViewType@@I@Z(type, clientIndex);
}

/*
==============
CL_StreamViews_ClearManualView
==============
*/

void __fastcall CL_StreamViews_ClearManualView(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  ?CL_StreamViews_ClearManualView@@YAXW4StreamManualViewType@@W4LocalClientNum_t@@@Z(type, localClientNum);
}

/*
==============
CL_StreamViewsSP_ClearAutoView
==============
*/
void CL_StreamViewsSP_ClearAutoView(StreamAutoViewType type, unsigned int clientIndex)
{
  CL_StreamViews_GetAutoView(type, clientIndex)->isSet = 0;
}

/*
==============
CL_StreamViewsSP_CopyAutoView
==============
*/
void CL_StreamViewsSP_CopyAutoView(StreamAutoViewType fromType, StreamAutoViewType toType, unsigned int clientIndex)
{
  _RSI = CL_StreamViews_GetAutoView(fromType, clientIndex);
  _RAX = CL_StreamViews_GetAutoView(toType, clientIndex);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm1, ymmword ptr [rsi+20h]
    vmovups ymmword ptr [rax+20h], ymm1
    vmovups ymm0, ymmword ptr [rsi+40h]
    vmovups ymmword ptr [rax+40h], ymm0
    vmovsd  xmm1, qword ptr [rsi+60h]
    vmovsd  qword ptr [rax+60h], xmm1
  }
}

/*
==============
CL_StreamViewsSP_GetAutoViewAngles
==============
*/
vec3_t *CL_StreamViewsSP_GetAutoViewAngles(StreamAutoViewType type, unsigned int clientIndex)
{
  ClientStreamAutoView *AutoView; 
  ClientStreamAutoView *v3; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  v3 = AutoView;
  if ( AutoView->isSet )
    return &AutoView->angles;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 290, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return &v3->angles;
}

/*
==============
CL_StreamViewsSP_GetAutoViewCosFovLimit
==============
*/
float CL_StreamViewsSP_GetAutoViewCosFovLimit(StreamAutoViewType type, unsigned int clientIndex)
{
  _RAX = CL_StreamViews_GetAutoView(type, clientIndex);
  _RBX = _RAX;
  if ( _RAX->isSet )
  {
    __asm { vmovss  xmm0, dword ptr [rax+24h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 306, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+24h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_StreamViewsSP_GetAutoViewHandModel
==============
*/
const XModel *CL_StreamViewsSP_GetAutoViewHandModel(StreamAutoViewType type, unsigned int clientIndex)
{
  ClientStreamAutoView *AutoView; 
  ClientStreamAutoView *v3; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  v3 = AutoView;
  if ( AutoView->isSet )
    return AutoView->handModel;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 322, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return v3->handModel;
}

/*
==============
CL_StreamViewsSP_GetAutoViewOrigin
==============
*/
vec3_t *CL_StreamViewsSP_GetAutoViewOrigin(StreamAutoViewType type, unsigned int clientIndex)
{
  ClientStreamAutoView *AutoView; 
  ClientStreamAutoView *v3; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  v3 = AutoView;
  if ( AutoView->isSet )
    return &AutoView->origin;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 282, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return &v3->origin;
}

/*
==============
CL_StreamViewsSP_GetAutoViewWeapon
==============
*/
Weapon *CL_StreamViewsSP_GetAutoViewWeapon(StreamAutoViewType type, unsigned int clientIndex)
{
  ClientStreamAutoView *AutoView; 
  ClientStreamAutoView *v3; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  v3 = AutoView;
  if ( AutoView->isSet )
    return &AutoView->weapon;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 314, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return &v3->weapon;
}

/*
==============
CL_StreamViewsSP_GetAutoViewZoomFactor
==============
*/
float CL_StreamViewsSP_GetAutoViewZoomFactor(StreamAutoViewType type, unsigned int clientIndex)
{
  _RAX = CL_StreamViews_GetAutoView(type, clientIndex);
  _RBX = _RAX;
  if ( _RAX->isSet )
  {
    __asm { vmovss  xmm0, dword ptr [rax+20h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 298, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+20h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_StreamViewsSP_IsAutoViewSet
==============
*/
_BOOL8 CL_StreamViewsSP_IsAutoViewSet(StreamAutoViewType type, unsigned int clientIndex)
{
  return CL_StreamViews_GetAutoView(type, clientIndex)->isSet;
}

/*
==============
CL_StreamViewsSP_SetAutoView
==============
*/
void CL_StreamViewsSP_SetAutoView(StreamAutoViewType type, unsigned int clientIndex, const vec3_t *origin, const vec3_t *angles, float zoomFactor, float cosFovLimit, const Weapon *weapon, const XModel *handModel)
{
  float v15; 

  _RDI = angles;
  _RBX = origin;
  _RAX = CL_StreamViews_GetAutoView(type, clientIndex);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovss  xmm1, [rsp+28h+cosFovLimit]
  }
  _RDX = _RAX;
  __asm { vmovsd  qword ptr [rax+8], xmm0 }
  _RAX->origin.v[2] = _RBX->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi]
    vmovsd  qword ptr [rax+14h], xmm0
  }
  v15 = _RDI->v[2];
  __asm
  {
    vmovss  xmm0, [rsp+28h+zoomFactor]
    vmovss  dword ptr [rax+20h], xmm0
    vmovss  dword ptr [rax+24h], xmm1
  }
  _RAX->angles.v[2] = v15;
  _RAX = weapon;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rdx+28h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rdx+48h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rdx+58h], xmm0
  }
  *(_DWORD *)&_RDX->weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
  _RDX->handModel = handModel;
  _RDX->isSet = 1;
}

/*
==============
CL_StreamViews_CalculateZoomFactorAndCosFovLimit
==============
*/

void __fastcall CL_StreamViews_CalculateZoomFactorAndCosFovLimit(double currentTanHalfFovY, float defaultTanHalfFovY, float *outZoomFactor, float *outCosFovLimit)
{
  const dvar_t *v9; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = outCosFovLimit;
  _RBX = outZoomFactor;
  currentTanHalfFovY = AngleFromTanHalfFovY(*(float *)&currentTanHalfFovY);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm2, xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmovss  dword ptr [rbx], xmm2
  }
  v9 = DCONST_DVARFLT_stream_zoomFovScaler;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DCONST_DVARFLT_stream_zoomFovScaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_zoomFovScaler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdi], xmm0
  }
}

/*
==============
CL_StreamViews_ClearAllManualViews
==============
*/
void CL_StreamViews_ClearAllManualViews(LocalClientNum_t localClientNum)
{
  unsigned __int64 i; 
  ClientStreamManualView *ManualView; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 111, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  for ( i = 0i64; i < 5; ++i )
  {
    ManualView = CL_StreamViews_GetManualView((StreamManualViewType)i, localClientNum);
    ManualView->isSet = 0;
  }
}

/*
==============
CL_StreamViews_ClearManualView
==============
*/
void CL_StreamViews_ClearManualView(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  CL_StreamViews_GetManualView(type, localClientNum)->isSet = 0;
}

/*
==============
CL_StreamViews_GetAutoView
==============
*/
ClientStreamAutoView *CL_StreamViews_GetAutoView(unsigned int type, unsigned int clientIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = clientIndex;
  v3 = type;
  if ( type >= 3 )
  {
    v8 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( StreamAutoViewType::COUNT )", "type doesn't index StreamAutoViewType::COUNT\n\t%i not in [0, %i)", type, v8) )
      __debugbreak();
  }
  if ( (_DWORD)v2 )
  {
    LODWORD(v7) = 1;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 90, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 1 )", "clientIndex doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_clientStreamAutoViews[v2][v3];
}

/*
==============
CL_StreamViews_GetClientVelocity
==============
*/
vec3_t *CL_StreamViews_GetClientVelocity(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &s_streamerInfo[v1].viewVelocity;
}

/*
==============
CL_StreamViews_GetManualView
==============
*/
ClientStreamManualView *CL_StreamViews_GetManualView(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = (unsigned int)type;
  if ( (unsigned int)type >= 5 )
  {
    v8 = 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( StreamManualViewType::COUNT )", "type doesn't index StreamManualViewType::COUNT\n\t%i not in [0, %i)", type, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_clientStreamManualViews[v3][v2];
}

/*
==============
CL_StreamViews_GetManualViewAngles
==============
*/
vec3_t *CL_StreamViews_GetManualViewAngles(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  ClientStreamManualView *ManualView; 
  ClientStreamManualView *v3; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  v3 = ManualView;
  if ( ManualView->isSet )
    return &ManualView->angles;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 180, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return &v3->angles;
}

/*
==============
CL_StreamViews_GetManualViewCosFovLimit
==============
*/
float CL_StreamViews_GetManualViewCosFovLimit(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  _RAX = CL_StreamViews_GetManualView(type, localClientNum);
  _RBX = _RAX;
  if ( _RAX->isSet )
  {
    __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 204, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+2Ch] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_StreamViews_GetManualViewMode
==============
*/
__int64 CL_StreamViews_GetManualViewMode(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  ClientStreamManualView *ManualView; 
  ClientStreamManualView *v3; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  v3 = ManualView;
  if ( ManualView->isSet )
    return (unsigned __int8)ManualView->viewMode;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 220, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return (unsigned __int8)v3->viewMode;
}

/*
==============
CL_StreamViews_GetManualViewOrigin
==============
*/
ClientStreamManualView *CL_StreamViews_GetManualViewOrigin(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  ClientStreamManualView *result; 
  const vec3_t *p_origin; 

  result = CL_StreamViews_GetManualView(type, localClientNum);
  p_origin = &result->origin;
  if ( !result->isSet )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 172, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
      __debugbreak();
    return (ClientStreamManualView *)p_origin;
  }
  return result;
}

/*
==============
CL_StreamViews_GetManualViewStreamRender
==============
*/
_BOOL8 CL_StreamViews_GetManualViewStreamRender(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  ClientStreamManualView *ManualView; 
  ClientStreamManualView *v3; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  v3 = ManualView;
  if ( ManualView->isSet )
    return ManualView->streamRender;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 212, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return v3->streamRender;
}

/*
==============
CL_StreamViews_GetManualViewVelocity
==============
*/
vec3_t *CL_StreamViews_GetManualViewVelocity(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  ClientStreamManualView *ManualView; 
  ClientStreamManualView *v3; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  v3 = ManualView;
  if ( ManualView->isSet )
    return &ManualView->velocity;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 188, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return &v3->velocity;
}

/*
==============
CL_StreamViews_GetManualViewZoomFactor
==============
*/
float CL_StreamViews_GetManualViewZoomFactor(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  _RAX = CL_StreamViews_GetManualView(type, localClientNum);
  _RBX = _RAX;
  if ( _RAX->isSet )
  {
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 196, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_StreamViews_GetMaxLocalClientVelocity
==============
*/

float __fastcall CL_StreamViews_GetMaxLocalClientVelocity(double _XMM0_8)
{
  int v1; 
  __int64 v14; 
  __int64 v15; 

  v1 = 0;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
  {
    __asm { vsqrtss xmm0, xmm0, xmm0 }
  }
  else
  {
    _RDI = &s_streamerInfo[0].viewVelocity.v[2];
    do
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v15) = 2;
        LODWORD(v14) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-8]
        vmovss  xmm2, dword ptr [rdi-4]
        vmovss  xmm3, dword ptr [rdi]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
      }
      ++v1;
      _RDI += 490;
      __asm
      {
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm4, xmm2, xmm1
      }
    }
    while ( v1 < SLODWORD(cl_maxLocalClients) );
    __asm { vsqrtss xmm0, xmm4, xmm4 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_StreamViews_GetNumberOfManualViewsSet
==============
*/
__int64 CL_StreamViews_GetNumberOfManualViewsSet(const LocalClientNum_t localClientNum)
{
  unsigned int v1; 
  unsigned __int64 i; 
  const dvar_t *v4; 
  bool v5; 
  bool v6; 
  unsigned int v7; 

  v1 = 0;
  for ( i = 0i64; i < 5; ++i )
  {
    if ( (_DWORD)i )
    {
      switch ( (_DWORD)i )
      {
        case 1:
          v4 = DCONST_DVARBOOL_stream_devDisableManualView1;
          if ( DCONST_DVARBOOL_stream_devDisableManualView1 )
            goto LABEL_18;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView1");
          break;
        case 2:
          v4 = DCONST_DVARBOOL_stream_devDisableManualView2;
          if ( DCONST_DVARBOOL_stream_devDisableManualView2 )
            goto LABEL_18;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView2");
          break;
        case 3:
          v4 = DCONST_DVARBOOL_stream_devDisableManualView3;
          if ( DCONST_DVARBOOL_stream_devDisableManualView3 )
            goto LABEL_18;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView3");
          break;
        default:
          v4 = DCONST_DVARBOOL_stream_devDisableManualView4;
          if ( DCONST_DVARBOOL_stream_devDisableManualView4 )
            goto LABEL_18;
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView4");
          break;
      }
    }
    else
    {
      v4 = DCONST_DVARBOOL_stream_devDisableManualView0;
      if ( DCONST_DVARBOOL_stream_devDisableManualView0 )
        goto LABEL_18;
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView0");
    }
    if ( v5 )
      __debugbreak();
LABEL_18:
    Dvar_CheckFrontendServerThread(v4);
    v6 = !v4->current.enabled && CL_StreamViews_GetManualView((StreamManualViewType)i, localClientNum)->isSet;
    v7 = v1 + 1;
    if ( !v6 )
      v7 = v1;
    v1 = v7;
  }
  return v7;
}

/*
==============
CL_StreamViews_HasAdditionalViewsSet
==============
*/
char CL_StreamViews_HasAdditionalViewsSet()
{
  int v0; 
  int v1; 
  const dvar_t *v2; 
  __int64 v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  bool *i; 

  v0 = 0;
  v1 = 0;
  while ( 1 )
  {
    v2 = DCONST_DVARBOOL_stream_devDisableManualView2;
    if ( !DCONST_DVARBOOL_stream_devDisableManualView2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView2") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = v1;
    }
    else
    {
      v3 = v1;
      if ( s_clientStreamManualViews[2][v1].isSet )
        return 1;
    }
    v4 = DCONST_DVARBOOL_stream_devDisableManualView3;
    if ( !DCONST_DVARBOOL_stream_devDisableManualView3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView3") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( !v4->current.enabled && s_clientStreamManualViews[3][v1].isSet )
      break;
    v5 = DCONST_DVARBOOL_stream_devDisableManualView4;
    if ( !DCONST_DVARBOOL_stream_devDisableManualView4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_devDisableManualView4") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled && s_clientStreamManualViews[4][v3].isSet )
      break;
    if ( (unsigned int)++v1 >= 2 )
    {
      for ( i = &s_clientStreamAutoViews[0][0].isSet; !*i; i += 104 )
      {
        if ( ++v0 )
          return 0;
      }
      return 1;
    }
  }
  return 1;
}

/*
==============
CL_StreamViews_Init
==============
*/
void CL_StreamViews_Init(void)
{
  memset_0(s_clientStreamManualViews, 0, sizeof(s_clientStreamManualViews));
  memset_0(s_clientStreamAutoViews, 0, sizeof(s_clientStreamAutoViews));
}

/*
==============
CL_StreamViews_IsManualViewSet
==============
*/
bool CL_StreamViews_IsManualViewSet(StreamManualViewType type, LocalClientNum_t localClientNum)
{
  const dvar_t *v4; 
  const char *v5; 

  switch ( type )
  {
    case MOVEMENT:
      v4 = DCONST_DVARBOOL_stream_devDisableManualView0;
      if ( DCONST_DVARBOOL_stream_devDisableManualView0 )
        goto LABEL_18;
      v5 = "stream_devDisableManualView0";
      goto LABEL_16;
    case DODGE:
      v4 = DCONST_DVARBOOL_stream_devDisableManualView1;
      if ( DCONST_DVARBOOL_stream_devDisableManualView1 )
        goto LABEL_18;
      v5 = "stream_devDisableManualView1";
      goto LABEL_16;
    case COUNT:
      v4 = DCONST_DVARBOOL_stream_devDisableManualView2;
      if ( DCONST_DVARBOOL_stream_devDisableManualView2 )
        goto LABEL_18;
      v5 = "stream_devDisableManualView2";
      goto LABEL_16;
    case COUNT|DODGE:
      v4 = DCONST_DVARBOOL_stream_devDisableManualView3;
      if ( DCONST_DVARBOOL_stream_devDisableManualView3 )
        goto LABEL_18;
      v5 = "stream_devDisableManualView3";
      goto LABEL_16;
  }
  if ( type != 4 )
    return CL_StreamViews_GetManualView(type, localClientNum)->isSet;
  v4 = DCONST_DVARBOOL_stream_devDisableManualView4;
  if ( !DCONST_DVARBOOL_stream_devDisableManualView4 )
  {
    v5 = "stream_devDisableManualView4";
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
      __debugbreak();
  }
LABEL_18:
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    return 0;
  return CL_StreamViews_GetManualView(type, localClientNum)->isSet;
}

/*
==============
CL_StreamViews_MaxParametricVelocity
==============
*/

float __fastcall CL_StreamViews_MaxParametricVelocity(double _XMM0_8)
{
  int v5; 
  const dvar_t *v12; 
  __int64 v29; 
  __int64 v30; 
  void *retaddr; 

  _RAX = &retaddr;
  v5 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
  {
    __asm
    {
      vmovaps xmm6, [rsp+88h+var_28]
      vxorps  xmm0, xmm0, xmm0
    }
  }
  else
  {
    _RDI = &s_streamerInfo[0].viewVelocity.v[2];
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm7
      vmovaps xmmword ptr [rax-48h], xmm8
      vmovss  xmm8, cs:__real@3f800000
    }
    do
    {
      if ( (unsigned int)v5 >= 2 )
      {
        LODWORD(v30) = 2;
        LODWORD(v29) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-8]
        vmovss  xmm2, dword ptr [rdi-4]
        vmovss  xmm3, dword ptr [rdi]
      }
      v12 = DVARFLT_stream_maxAnticipatedVelocity;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm7, xmm2, xmm2
      }
      if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      __asm
      {
        vdivss  xmm0, xmm7, dword ptr [rsi+28h]; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      ++v5;
      _RDI += 490;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
    }
    while ( v5 < SLODWORD(cl_maxLocalClients) );
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_48]
      vmovaps xmm7, [rsp+88h+var_38]
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+88h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_StreamViews_ParametricVelocity
==============
*/
double CL_StreamViews_ParametricVelocity(const vec3_t *velocity)
{
  const dvar_t *v5; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
  }
  v5 = DVARFLT_stream_maxAnticipatedVelocity;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
CL_StreamViews_ParametricVelocity
==============
*/
double CL_StreamViews_ParametricVelocity(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  const dvar_t *v4; 
  int v21; 

  v2 = localClientNum;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v21 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", localClientNum, v21) )
      __debugbreak();
  }
  _RCX = 1960 * v2;
  v4 = DVARFLT_stream_maxAnticipatedVelocity;
  _RAX = &s_streamerInfo[0].viewVelocity;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rax]
    vmovss  xmm2, dword ptr [rcx+rax+4]
    vmovss  xmm3, dword ptr [rcx+rax+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
CL_StreamViews_Reset
==============
*/
void CL_StreamViews_Reset(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  s_streamerInfo[v2].viewPosHistory.mWriteOffset = 0i64;
  s_streamerInfo[v2].viewPosHistory.mCurSize = 0i64;
  *(_QWORD *)s_streamerInfo[v2].viewVelocity.v = 0i64;
  s_streamerInfo[v2].viewVelocity.v[2] = 0.0;
}

/*
==============
CL_StreamViews_SetManualView
==============
*/
void CL_StreamViews_SetManualView(StreamManualViewType type, LocalClientNum_t localClientNum, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  _RDI = angles;
  _RBX = origin;
  _RAX = CL_StreamViews_GetManualView(type, localClientNum);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovss  xmm1, [rsp+28h+cosFovLimit]
  }
  _RDX = _RAX;
  __asm { vmovsd  qword ptr [rax], xmm0 }
  _RAX->origin.v[2] = _RBX->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi]
    vmovsd  qword ptr [rax+10h], xmm0
  }
  _RAX->angles.v[2] = _RDI->v[2];
  _RCX = velocity;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rax+1Ch], xmm0
    vmovss  xmm0, [rsp+28h+zoomFactor]
  }
  _RAX->velocity.v[2] = velocity->v[2];
  _RAX->streamRender = streamRender;
  __asm
  {
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  dword ptr [rdx+2Ch], xmm1
  }
  _RAX->isSet = 1;
  _RAX->viewMode = LINEAR;
}

/*
==============
CL_StreamViews_SetManualView
==============
*/
void CL_StreamViews_SetManualView(StreamManualViewType type, LocalClientNum_t localClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  vec3_t angles; 

  _RSI = origin;
  AxisToAngles(axis, &angles);
  _RAX = CL_StreamViews_GetManualView(type, localClientNum);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi]
    vmovss  xmm1, [rsp+58h+cosFovLimit]
  }
  _RDX = _RAX;
  __asm { vmovsd  qword ptr [rax], xmm0 }
  _RAX->origin.v[2] = _RSI->v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+58h+angles]
    vmovsd  qword ptr [rax+10h], xmm0
  }
  _RAX->angles.v[2] = angles.v[2];
  _RCX = velocity;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rax+1Ch], xmm0
    vmovss  xmm0, [rsp+58h+zoomFactor]
  }
  _RAX->velocity.v[2] = velocity->v[2];
  _RAX->streamRender = streamRender;
  __asm
  {
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  dword ptr [rdx+2Ch], xmm1
  }
  _RAX->isSet = 1;
  _RAX->viewMode = LINEAR;
}

/*
==============
CL_StreamViews_SetManualViewAndMode
==============
*/
void CL_StreamViews_SetManualViewAndMode(StreamManualViewType type, LocalClientNum_t localClientNum, const BgWorldStreamingViewMode viewMode, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  _RBX = origin;
  _RAX = CL_StreamViews_GetManualView(type, localClientNum);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx]
    vmovss  xmm1, [rsp+28h+cosFovLimit]
  }
  _RDX = _RAX;
  __asm { vmovsd  qword ptr [rax], xmm0 }
  _RAX->origin.v[2] = _RBX->v[2];
  _RCX = angles;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rax+10h], xmm0
  }
  _RAX->angles.v[2] = angles->v[2];
  _RCX = velocity;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rax+1Ch], xmm0
    vmovss  xmm0, [rsp+28h+zoomFactor]
  }
  _RAX->velocity.v[2] = velocity->v[2];
  _RAX->streamRender = streamRender;
  __asm
  {
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  dword ptr [rdx+2Ch], xmm1
  }
  _RAX->isSet = 1;
  _RAX->viewMode = viewMode;
}

/*
==============
CL_StreamViews_UpdateVelocity
==============
*/
void CL_StreamViews_UpdateVelocity(const LocalClientNum_t localClientNum, const vec3_t *cameraOrigin, const int time, const int frameTime)
{
  __int64 v6; 
  float v11; 
  unsigned __int64 v14; 
  unsigned __int64 mWriteOffset; 
  char v32; 
  unsigned __int64 mCurSize; 
  unsigned __int64 v34; 
  char v73; 
  unsigned __int64 v78; 
  unsigned __int64 v81; 
  unsigned __int64 mMaxSize; 
  unsigned __int64 v86; 
  int v87; 
  int v88; 
  int v89; 
  __int128 *v90; 
  int *v91; 
  int *v92; 
  __int128 *v93; 
  int *v94; 
  int *v95; 
  int v96; 
  __int128 v99; 
  __int128 v100; 

  v6 = localClientNum;
  _RSI = cameraOrigin;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  __asm { vmovsd  xmm0, qword ptr [rsi] }
  v11 = _RSI->v[2];
  _R12 = s_streamerInfo;
  _RDI = v6;
  __asm { vmovaps [rsp+0F0h+var_30], xmm6 }
  v14 = 0i64;
  *((_QWORD *)&v99 + 1) = __PAIR64__(time, LODWORD(v11));
  __asm { vmovsd  qword ptr [rbp+57h+var_58], xmm0 }
  _RSI = &s_streamerInfo[_RDI];
  if ( s_streamerInfo[_RDI].viewPosHistory.mCurSize )
  {
    mWriteOffset = s_streamerInfo[_RDI].viewPosHistory.mWriteOffset;
    __asm { vmovss  xmm0, dword ptr [rbp+57h+var_58] }
    if ( !mWriteOffset )
      mWriteOffset = s_streamerInfo[_RDI].viewPosHistory.mCurSize;
    _RAX = 2 * mWriteOffset;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsi+rax*8-10h]
      vsubss  xmm4, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbp+57h+var_58+4]
      vshufps xmm1, xmm3, xmm3, 55h ; 'U'
      vpextrq rax, xmm3, 1
      vsubss  xmm5, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbp+57h+var_58+8]
      vshufps xmm2, xmm3, xmm3, 0AAh ; 'ª'
      vsubss  xmm6, xmm0, xmm2
    }
    if ( time < SHIDWORD(_RAX) )
      goto LABEL_12;
    _R14 = DVARFLT_stream_cameraCutDetectionDeltaPosThreshold;
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm6, xmm2, xmm1
    }
    if ( !DVARFLT_stream_cameraCutDetectionDeltaPosThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_cameraCutDetectionDeltaPosThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm6, xmm1
    }
    if ( !(v73 | v32) )
    {
LABEL_12:
      s_streamerInfo[_RDI].viewPosHistory.mWriteOffset = 0i64;
      s_streamerInfo[_RDI].viewPosHistory.mCurSize = 0i64;
      *(_QWORD *)s_streamerInfo[_RDI].viewVelocity.v = 0i64;
      s_streamerInfo[_RDI].viewVelocity.v[2] = 0.0;
    }
  }
  if ( frameTime )
  {
    mCurSize = s_streamerInfo[_RDI].viewPosHistory.mCurSize;
    if ( mCurSize )
    {
      if ( s_streamerInfo[_RDI].viewPosHistory.mMaxSize == mCurSize )
        v34 = s_streamerInfo[_RDI].viewPosHistory.mWriteOffset;
      else
        v34 = 0i64;
      _RAX = 2 * v34;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+rax*8]
        vpextrq rax, xmm0, 1
      }
      if ( HIDWORD(v99) - HIDWORD(_RAX) <= 100 )
      {
        *(_QWORD *)s_streamerInfo[_RDI].viewVelocity.v = 0i64;
        s_streamerInfo[_RDI].viewVelocity.v[2] = 0.0;
      }
      else
      {
        _R15 = DVARFLT_stream_cameraVelocityGaussianSigma;
        if ( !DVARFLT_stream_cameraVelocityGaussianSigma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_cameraVelocityGaussianSigma") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R15);
        __asm
        {
          vmovss  xmm0, dword ptr [r15+28h]
          vxorps  xmm6, xmm6, xmm6
          vmovss  [rbp+57h+var_A8], xmm0
          vmovss  xmm0, cs:__real@40400000
          vmovss  [rbp+57h+var_A0], xmm0
          vmovss  [rbp+57h+var_68], xmm6
          vmovss  [rbp+57h+var_64], xmm6
          vmovss  [rbp+57h+var_60], xmm6
          vmovss  [rbp+57h+var_B0], xmm6
        }
        if ( !s_streamerInfo[_RDI].viewPosHistory.mCurSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\valuehistory.h", 147, ASSERT_TYPE_SANITY, "( !Empty() )", (const char *)&queryFormat, "!Empty()") )
          __debugbreak();
        if ( s_streamerInfo[_RDI].viewPosHistory.mMaxSize == s_streamerInfo[_RDI].viewPosHistory.mCurSize )
          v14 = s_streamerInfo[_RDI].viewPosHistory.mWriteOffset;
        _RBX = 2 * v14;
        v90 = &v100;
        v91 = &v88;
        __asm { vmovups xmm0, xmmword ptr [rsi+rbx*8] }
        v92 = &v89;
        v93 = &v99;
        v94 = &v96;
        v95 = &v87;
        __asm { vmovups [rbp+57h+var_48], xmm0 }
        ValueHistory_StreamerInfo::ViewPosSample_120_::IterateUntil__lambda_058032d0ff02bf129f6c27a143db9757___((const CL_StreamViews_GetFilteredCameraVelocity::__l2::<lambda_058032d0ff02bf129f6c27a143db9757> *)&s_streamerInfo[_RDI]);
        __asm
        {
          vmovss  xmm1, [rbp+57h+var_A8]; sigma
          vxorps  xmm0, xmm0, xmm0; x
        }
        *(double *)&_XMM0 = GaussianWeight1D(*(const float *)&_XMM0, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, cs:__real@447a0000
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, ebx
          vdivss  xmm5, xmm1, xmm2
          vmovss  xmm2, dword ptr [rbp+57h+var_58]
          vsubss  xmm3, xmm2, dword ptr [rbp+57h+var_48]
          vmulss  xmm1, xmm3, xmm5
          vmulss  xmm4, xmm1, xmm0
          vaddss  xmm3, xmm4, [rbp+57h+var_68]
          vmovss  xmm1, dword ptr [rbp+57h+var_58+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+57h+var_48+4]
          vmovaps xmm6, xmm0
          vmovss  [rbp+57h+var_68], xmm3
          vmulss  xmm3, xmm2, xmm5
          vmovss  xmm2, dword ptr [rbp+57h+var_58+8]
          vmulss  xmm4, xmm3, xmm0
          vsubss  xmm0, xmm2, dword ptr [rbp+57h+var_48+8]
          vaddss  xmm1, xmm4, [rbp+57h+var_64]
          vaddss  xmm2, xmm6, [rbp+57h+var_B0]
        }
        v90 = &v99;
        v91 = &v88;
        v92 = &v89;
        v93 = &v100;
        __asm
        {
          vmovss  [rbp+57h+var_64], xmm1
          vmulss  xmm1, xmm0, xmm5
          vmulss  xmm3, xmm1, xmm6
          vaddss  xmm0, xmm3, [rbp+57h+var_60]
        }
        v94 = &v96;
        __asm
        {
          vmovss  [rbp+57h+var_60], xmm0
          vmovss  [rbp+57h+var_B0], xmm2
        }
        v95 = &v87;
        ValueHistory_StreamerInfo::ViewPosSample_120_::ReverseIterateUntil__lambda_7c04ed67a48dfa49e5bac266a6e8e8a2___((const CL_StreamViews_GetFilteredCameraVelocity::__l2::<lambda_7c04ed67a48dfa49e5bac266a6e8e8a2> *)&s_streamerInfo[_RDI]);
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vdivss  xmm2, xmm0, [rbp+57h+var_B0]
          vmulss  xmm1, xmm2, [rbp+57h+var_68]
        }
        _RBX = DVARFLT_stream_cameraVelocityWindowDuration;
        __asm
        {
          vmulss  xmm0, xmm2, [rbp+57h+var_64]
          vmovss  dword ptr [rdi+r12+798h], xmm1
          vmulss  xmm1, xmm2, [rbp+57h+var_60]
          vmovss  dword ptr [rdi+r12+7A0h], xmm1
          vmovss  dword ptr [rdi+r12+79Ch], xmm0
        }
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_cameraVelocityWindowDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+28h]
          vmulss  xmm0, xmm1, cs:__real@3f99999a
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, r14d
          vcomiss xmm2, xmm0
        }
        if ( v73 | v32 )
        {
          __asm
          {
            vmulss  xmm0, xmm1, cs:__real@3e4ccccd
            vsubss  xmm1, xmm1, xmm0
            vcomiss xmm2, xmm1
          }
          if ( v73 )
          {
            v81 = s_streamerInfo[_RDI].viewPosHistory.mCurSize;
            if ( v81 == s_streamerInfo[_RDI].viewPosHistory.mMaxSize && v81 < 0x78 )
              ValueHistory<StreamerInfo::ViewPosSample,120>::Resize(&s_streamerInfo[_RDI].viewPosHistory, v81 + 1);
          }
        }
        else
        {
          v78 = s_streamerInfo[_RDI].viewPosHistory.mCurSize - 1;
          if ( v78 < 0x14 )
            v78 = 20i64;
          ValueHistory<StreamerInfo::ViewPosSample,120>::Resize(&s_streamerInfo[_RDI].viewPosHistory, v78);
        }
      }
    }
  }
  __asm
  {
    vmovups xmm0, [rbp+57h+var_58]
    vmovaps xmm6, [rsp+0F0h+var_30]
  }
  _RAX = 2 * s_streamerInfo[_RDI].viewPosHistory.mWriteOffset;
  __asm { vmovups xmmword ptr [rsi+rax*8], xmm0 }
  mMaxSize = s_streamerInfo[_RDI].viewPosHistory.mMaxSize;
  v86 = s_streamerInfo[_RDI].viewPosHistory.mCurSize + 1;
  s_streamerInfo[_RDI].viewPosHistory.mWriteOffset = (s_streamerInfo[_RDI].viewPosHistory.mWriteOffset + 1) % mMaxSize;
  if ( mMaxSize > v86 )
    mMaxSize = v86;
  s_streamerInfo[_RDI].viewPosHistory.mCurSize = mMaxSize;
}

