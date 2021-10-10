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
  ClientStreamAutoView *AutoView; 

  AutoView = CL_StreamViews_GetAutoView(fromType, clientIndex);
  *CL_StreamViews_GetAutoView(toType, clientIndex) = *AutoView;
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
  ClientStreamAutoView *AutoView; 
  ClientStreamAutoView *v3; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  v3 = AutoView;
  if ( AutoView->isSet )
    return AutoView->cosFovLimit;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 306, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return v3->cosFovLimit;
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
  ClientStreamAutoView *AutoView; 
  ClientStreamAutoView *v3; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  v3 = AutoView;
  if ( AutoView->isSet )
    return AutoView->zoomFactor;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 298, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return v3->zoomFactor;
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
  ClientStreamAutoView *AutoView; 
  float v11; 

  AutoView = CL_StreamViews_GetAutoView(type, clientIndex);
  AutoView->origin = *origin;
  *(double *)AutoView->angles.v = *(double *)angles->v;
  v11 = angles->v[2];
  AutoView->zoomFactor = zoomFactor;
  AutoView->cosFovLimit = cosFovLimit;
  AutoView->angles.v[2] = v11;
  AutoView->weapon = *weapon;
  AutoView->handModel = handModel;
  AutoView->isSet = 1;
}

/*
==============
CL_StreamViews_CalculateZoomFactorAndCosFovLimit
==============
*/
void CL_StreamViews_CalculateZoomFactorAndCosFovLimit(float currentTanHalfFovY, float defaultTanHalfFovY, float *outZoomFactor, float *outCosFovLimit)
{
  double v6; 
  const dvar_t *v7; 

  v6 = AngleFromTanHalfFovY(currentTanHalfFovY);
  *outZoomFactor = 1.0 / rg.correctedLodParms.invFovScale;
  v7 = DCONST_DVARFLT_stream_zoomFovScaler;
  if ( !DCONST_DVARFLT_stream_zoomFovScaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_zoomFovScaler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  *outCosFovLimit = cosf_0((float)(*(float *)&v6 * v7->current.value) * 0.0087266462);
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
  ClientStreamManualView *ManualView; 
  ClientStreamManualView *v3; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  v3 = ManualView;
  if ( ManualView->isSet )
    return ManualView->cosFovLimit;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 204, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return v3->cosFovLimit;
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
  ClientStreamManualView *ManualView; 
  ClientStreamManualView *v3; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  v3 = ManualView;
  if ( ManualView->isSet )
    return ManualView->zoomFactor;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 196, ASSERT_TYPE_ASSERT, "(view.isSet)", (const char *)&queryFormat, "view.isSet") )
    __debugbreak();
  return v3->zoomFactor;
}

/*
==============
CL_StreamViews_GetMaxLocalClientVelocity
==============
*/
float CL_StreamViews_GetMaxLocalClientVelocity()
{
  int v0; 
  float *v1; 
  float v2; 
  float v3; 
  float v4; 
  __int64 v6; 
  __int64 v7; 

  v0 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
    return fsqrt(0.0);
  v1 = &s_streamerInfo[0].viewVelocity.v[2];
  do
  {
    if ( (unsigned int)v0 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v6) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v2 = *v1;
    v3 = (float)(*(v1 - 2) * *(v1 - 2)) + (float)(*(v1 - 1) * *(v1 - 1));
    ++v0;
    v1 += 490;
    v4 = v3 + (float)(v2 * v2);
  }
  while ( v0 < SLODWORD(cl_maxLocalClients) );
  return fsqrt(v4);
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
float CL_StreamViews_MaxParametricVelocity()
{
  int v0; 
  float *v1; 
  const dvar_t *v2; 
  __int128 v3; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
    return 0.0;
  v1 = &s_streamerInfo[0].viewVelocity.v[2];
  do
  {
    if ( (unsigned int)v0 >= 2 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v2 = DVARFLT_stream_maxAnticipatedVelocity;
    v3 = *((unsigned int *)v1 - 2);
    *(float *)&v3 = fsqrt((float)((float)(*(v1 - 2) * *(v1 - 2)) + (float)(*(v1 - 1) * *(v1 - 1))) + (float)(*v1 * *v1));
    if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v3 + 1);
    *(double *)&_XMM0 = I_fclamp(*(float *)&v3 / v2->current.value, 0.0, 1.0);
    ++v0;
    v1 += 490;
    __asm { vmaxss  xmm6, xmm0, xmm6 }
  }
  while ( v0 < SLODWORD(cl_maxLocalClients) );
  return *(float *)&_XMM6;
}

/*
==============
CL_StreamViews_ParametricVelocity
==============
*/
double CL_StreamViews_ParametricVelocity(const vec3_t *velocity)
{
  const dvar_t *v1; 
  float v2; 

  v1 = DVARFLT_stream_maxAnticipatedVelocity;
  v2 = fsqrt((float)((float)(velocity->v[0] * velocity->v[0]) + (float)(velocity->v[1] * velocity->v[1])) + (float)(velocity->v[2] * velocity->v[2]));
  if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return I_fclamp(v2 / v1->current.value, 0.0, 1.0);
}

/*
==============
CL_StreamViews_ParametricVelocity
==============
*/
double CL_StreamViews_ParametricVelocity(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  float v4; 
  int v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARFLT_stream_maxAnticipatedVelocity;
  v4 = fsqrt((float)((float)(s_streamerInfo[v2].viewVelocity.v[0] * s_streamerInfo[v2].viewVelocity.v[0]) + (float)(s_streamerInfo[v2].viewVelocity.v[1] * s_streamerInfo[v2].viewVelocity.v[1])) + (float)(s_streamerInfo[v2].viewVelocity.v[2] * s_streamerInfo[v2].viewVelocity.v[2]));
  if ( !DVARFLT_stream_maxAnticipatedVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_maxAnticipatedVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return I_fclamp(v4 / v3->current.value, 0.0, 1.0);
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
  ClientStreamManualView *ManualView; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  ManualView->origin = *origin;
  ManualView->angles = *angles;
  ManualView->velocity = *velocity;
  ManualView->streamRender = streamRender;
  ManualView->zoomFactor = zoomFactor;
  ManualView->cosFovLimit = cosFovLimit;
  ManualView->isSet = 1;
  ManualView->viewMode = LINEAR;
}

/*
==============
CL_StreamViews_SetManualView
==============
*/
void CL_StreamViews_SetManualView(StreamManualViewType type, LocalClientNum_t localClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  ClientStreamManualView *ManualView; 
  vec3_t angles; 

  AxisToAngles(axis, &angles);
  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  ManualView->origin = *origin;
  ManualView->angles = angles;
  ManualView->velocity = *velocity;
  ManualView->streamRender = streamRender;
  ManualView->zoomFactor = zoomFactor;
  ManualView->cosFovLimit = cosFovLimit;
  ManualView->isSet = 1;
  ManualView->viewMode = LINEAR;
}

/*
==============
CL_StreamViews_SetManualViewAndMode
==============
*/
void CL_StreamViews_SetManualViewAndMode(StreamManualViewType type, LocalClientNum_t localClientNum, const BgWorldStreamingViewMode viewMode, const vec3_t *origin, const vec3_t *angles, const vec3_t *velocity, float zoomFactor, float cosFovLimit, bool streamRender)
{
  ClientStreamManualView *ManualView; 

  ManualView = CL_StreamViews_GetManualView(type, localClientNum);
  ManualView->origin = *origin;
  ManualView->angles = *angles;
  ManualView->velocity = *velocity;
  ManualView->streamRender = streamRender;
  ManualView->zoomFactor = zoomFactor;
  ManualView->cosFovLimit = cosFovLimit;
  ManualView->isSet = 1;
  ManualView->viewMode = viewMode;
}

/*
==============
CL_StreamViews_UpdateVelocity
==============
*/
void CL_StreamViews_UpdateVelocity(const LocalClientNum_t localClientNum, const vec3_t *cameraOrigin, const int time, const int frameTime)
{
  __int64 v4; 
  double v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  StreamerInfo *v11; 
  unsigned __int64 mWriteOffset; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  unsigned __int64 mCurSize; 
  unsigned __int64 v20; 
  int v23; 
  const dvar_t *v24; 
  __int128 v25; 
  int v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 mMaxSize; 
  unsigned __int64 v34; 
  float v35; 
  float value; 
  float v37; 
  __int128 *v38; 
  float *p_value; 
  float *v40; 
  __int128 *v41; 
  float *v42; 
  float *v43; 
  float v44; 
  float v45; 
  float v46; 
  StreamerInfo::ViewPosSample v47; 
  __int128 v48; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_stream_views.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_streamerInfo ) ) + 0 ) )", "localClientNum doesn't index s_streamerInfo\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v8 = *(double *)cameraOrigin->v;
  v9 = v4;
  v10 = 0i64;
  v47.viewPos.v[2] = cameraOrigin->v[2];
  *(double *)v47.viewPos.v = v8;
  v47.time = time;
  v11 = &s_streamerInfo[v9];
  if ( s_streamerInfo[v9].viewPosHistory.mCurSize )
  {
    mWriteOffset = s_streamerInfo[v9].viewPosHistory.mWriteOffset;
    if ( !mWriteOffset )
      mWriteOffset = s_streamerInfo[v9].viewPosHistory.mCurSize;
    _XMM3 = (__m128)v11->viewPosHistory.mValues[mWriteOffset - 1];
    __asm { vpextrq rax, xmm3, 1 }
    v15 = v47.viewPos.v[1] - _mm_shuffle_ps(_XMM3, _XMM3, 85).m128_f32[0];
    v16 = v47.viewPos.v[2] - _mm_shuffle_ps(_XMM3, _XMM3, 170).m128_f32[0];
    if ( time < SHIDWORD(_RAX) )
      goto LABEL_12;
    v17 = DVARFLT_stream_cameraCutDetectionDeltaPosThreshold;
    v18 = (float)((float)(v15 * v15) + (float)((float)(v47.viewPos.v[0] - _XMM3.m128_f32[0]) * (float)(v47.viewPos.v[0] - _XMM3.m128_f32[0]))) + (float)(v16 * v16);
    if ( !DVARFLT_stream_cameraCutDetectionDeltaPosThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_cameraCutDetectionDeltaPosThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v18 > (float)(v17->current.value * v17->current.value) )
    {
LABEL_12:
      s_streamerInfo[v9].viewPosHistory.mWriteOffset = 0i64;
      s_streamerInfo[v9].viewPosHistory.mCurSize = 0i64;
      *(_QWORD *)s_streamerInfo[v9].viewVelocity.v = 0i64;
      s_streamerInfo[v9].viewVelocity.v[2] = 0.0;
    }
  }
  if ( frameTime )
  {
    mCurSize = s_streamerInfo[v9].viewPosHistory.mCurSize;
    if ( mCurSize )
    {
      if ( s_streamerInfo[v9].viewPosHistory.mMaxSize == mCurSize )
        v20 = s_streamerInfo[v9].viewPosHistory.mWriteOffset;
      else
        v20 = 0i64;
      _XMM0 = v11->viewPosHistory.mValues[v20];
      __asm { vpextrq rax, xmm0, 1 }
      v23 = v47.time - HIDWORD(_RAX);
      if ( v47.time - HIDWORD(_RAX) <= 100 )
      {
        *(_QWORD *)s_streamerInfo[v9].viewVelocity.v = 0i64;
        s_streamerInfo[v9].viewVelocity.v[2] = 0.0;
      }
      else
      {
        v24 = DVARFLT_stream_cameraVelocityGaussianSigma;
        if ( !DVARFLT_stream_cameraVelocityGaussianSigma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_cameraVelocityGaussianSigma") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        value = v24->current.value;
        v37 = FLOAT_3_0;
        v44 = 0.0;
        v45 = 0.0;
        v46 = 0.0;
        v35 = 0.0;
        if ( !s_streamerInfo[v9].viewPosHistory.mCurSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\valuehistory.h", 147, ASSERT_TYPE_SANITY, "( !Empty() )", (const char *)&queryFormat, "!Empty()") )
          __debugbreak();
        if ( s_streamerInfo[v9].viewPosHistory.mMaxSize == s_streamerInfo[v9].viewPosHistory.mCurSize )
          v10 = s_streamerInfo[v9].viewPosHistory.mWriteOffset;
        v38 = &v48;
        p_value = &value;
        v25 = (__int128)v11->viewPosHistory.mValues[v10];
        v40 = &v37;
        v41 = (__int128 *)&v47;
        v42 = &v44;
        v43 = &v35;
        v48 = v25;
        ValueHistory_StreamerInfo::ViewPosSample_120_::IterateUntil__lambda_058032d0ff02bf129f6c27a143db9757___((const CL_StreamViews_GetFilteredCameraVelocity::__l2::<lambda_058032d0ff02bf129f6c27a143db9757> *)&s_streamerInfo[v9]);
        v26 = v47.time - HIDWORD(v48);
        *(double *)&v25 = GaussianWeight1D(0.0, value);
        v27 = 1000.0 / (float)v26;
        v44 = (float)((float)((float)(v47.viewPos.v[0] - *(float *)&v48) * v27) * *(float *)&v25) + v44;
        v38 = (__int128 *)&v47;
        p_value = &value;
        v40 = &v37;
        v41 = &v48;
        v45 = (float)((float)((float)(v47.viewPos.v[1] - *((float *)&v48 + 1)) * v27) * *(float *)&v25) + v45;
        v42 = &v44;
        v46 = (float)((float)((float)(v47.viewPos.v[2] - *((float *)&v48 + 2)) * v27) * *(float *)&v25) + v46;
        v35 = *(float *)&v25 + v35;
        v43 = &v35;
        ValueHistory_StreamerInfo::ViewPosSample_120_::ReverseIterateUntil__lambda_7c04ed67a48dfa49e5bac266a6e8e8a2___((const CL_StreamViews_GetFilteredCameraVelocity::__l2::<lambda_7c04ed67a48dfa49e5bac266a6e8e8a2> *)&s_streamerInfo[v9]);
        v28 = 1.0 / v35;
        v29 = DVARFLT_stream_cameraVelocityWindowDuration;
        *(float *)&v25 = (float)(1.0 / v35) * v45;
        s_streamerInfo[v9].viewVelocity.v[0] = (float)(1.0 / v35) * v44;
        s_streamerInfo[v9].viewVelocity.v[2] = v28 * v46;
        s_streamerInfo[v9].viewVelocity.v[1] = *(float *)&v25;
        if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_cameraVelocityWindowDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v30 = v29->current.value;
        if ( (float)v23 <= (float)(v30 * 1.2) )
        {
          if ( (float)v23 < (float)(v30 - (float)(v30 * 0.2)) )
          {
            v32 = s_streamerInfo[v9].viewPosHistory.mCurSize;
            if ( v32 == s_streamerInfo[v9].viewPosHistory.mMaxSize && v32 < 0x78 )
              ValueHistory<StreamerInfo::ViewPosSample,120>::Resize(&s_streamerInfo[v9].viewPosHistory, v32 + 1);
          }
        }
        else
        {
          v31 = s_streamerInfo[v9].viewPosHistory.mCurSize - 1;
          if ( v31 < 0x14 )
            v31 = 20i64;
          ValueHistory<StreamerInfo::ViewPosSample,120>::Resize(&s_streamerInfo[v9].viewPosHistory, v31);
        }
      }
    }
  }
  v11->viewPosHistory.mValues[s_streamerInfo[v9].viewPosHistory.mWriteOffset] = v47;
  mMaxSize = s_streamerInfo[v9].viewPosHistory.mMaxSize;
  v34 = s_streamerInfo[v9].viewPosHistory.mCurSize + 1;
  s_streamerInfo[v9].viewPosHistory.mWriteOffset = (s_streamerInfo[v9].viewPosHistory.mWriteOffset + 1) % mMaxSize;
  if ( mMaxSize > v34 )
    mMaxSize = v34;
  s_streamerInfo[v9].viewPosHistory.mCurSize = mMaxSize;
}

