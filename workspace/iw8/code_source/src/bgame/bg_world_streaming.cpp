/*
==============
BG_WorldStreaming_DecodeVelocity
==============
*/

void __fastcall BG_WorldStreaming_DecodeVelocity(msg_t *msg, vec3_t *outVelocity)
{
  ?BG_WorldStreaming_DecodeVelocity@@YAXPEAUmsg_t@@AEATvec3_t@@@Z(msg, outVelocity);
}

/*
==============
BG_WorldStreaming_EncodeViewMode
==============
*/

bool __fastcall BG_WorldStreaming_EncodeViewMode(const BgWorldStreamingViewMode viewMode, __int64 *outEncodedViewMode)
{
  return ?BG_WorldStreaming_EncodeViewMode@@YA_NW4BgWorldStreamingViewMode@@AEA_J@Z(viewMode, outEncodedViewMode);
}

/*
==============
BG_WorldStreaming_DecodeViewMode
==============
*/

bool __fastcall BG_WorldStreaming_DecodeViewMode(const __int64 encodedViewMode, BgWorldStreamingViewMode *outViewMode)
{
  return ?BG_WorldStreaming_DecodeViewMode@@YA_N_JAEAW4BgWorldStreamingViewMode@@@Z(encodedViewMode, outViewMode);
}

/*
==============
BG_WorldStreaming_GetNameForViewType
==============
*/

const char *__fastcall BG_WorldStreaming_GetNameForViewType(const BgWorldStreamingViewType type)
{
  return ?BG_WorldStreaming_GetNameForViewType@@YAPEBDW4BgWorldStreamingViewType@@@Z(type);
}

/*
==============
BG_WorldStreaming_IsEnabled
==============
*/

bool __fastcall BG_WorldStreaming_IsEnabled()
{
  return ?BG_WorldStreaming_IsEnabled@@YA_NXZ();
}

/*
==============
BG_WorldStreaming_Shutdown
==============
*/

void BG_WorldStreaming_Shutdown(void)
{
  ?BG_WorldStreaming_Shutdown@@YAXXZ();
}

/*
==============
BG_WorldStreaming_EncodeVelocity
==============
*/

void __fastcall BG_WorldStreaming_EncodeVelocity(msg_t *msg, const vec3_t *velocity)
{
  ?BG_WorldStreaming_EncodeVelocity@@YAXPEAUmsg_t@@AEBTvec3_t@@@Z(msg, velocity);
}

/*
==============
BG_WorldStreaming_Init
==============
*/

void __fastcall BG_WorldStreaming_Init(bool isGameServer)
{
  ?BG_WorldStreaming_Init@@YAX_N@Z(isGameServer);
}

/*
==============
BG_WorldStreaming_EncodeViewType
==============
*/

bool __fastcall BG_WorldStreaming_EncodeViewType(const BgWorldStreamingViewType *viewType, __int64 *outEncodedViewType)
{
  return ?BG_WorldStreaming_EncodeViewType@@YA_NAEBW4BgWorldStreamingViewType@@AEA_J@Z(viewType, outEncodedViewType);
}

/*
==============
BG_WorldStreaming_GetStreamManualViewTypeForWorldViewType
==============
*/

StreamManualViewType __fastcall BG_WorldStreaming_GetStreamManualViewTypeForWorldViewType(const BgWorldStreamingViewType viewType)
{
  return ?BG_WorldStreaming_GetStreamManualViewTypeForWorldViewType@@YA?AW4StreamManualViewType@@W4BgWorldStreamingViewType@@@Z(viewType);
}

/*
==============
BG_WorldStreaming_DecodeViewType
==============
*/

bool __fastcall BG_WorldStreaming_DecodeViewType(const __int64 encodedViewType, BgWorldStreamingViewType *outViewType)
{
  return ?BG_WorldStreaming_DecodeViewType@@YA_N_JAEAW4BgWorldStreamingViewType@@@Z(encodedViewType, outViewType);
}

/*
==============
BG_WorldStreaming_GetNameForViewMode
==============
*/

const char *__fastcall BG_WorldStreaming_GetNameForViewMode(const BgWorldStreamingViewMode mode)
{
  return ?BG_WorldStreaming_GetNameForViewMode@@YAPEBDW4BgWorldStreamingViewMode@@@Z(mode);
}

/*
==============
BG_WorldStreaming_DecodeVelocity
==============
*/
void BG_WorldStreaming_DecodeVelocity(msg_t *msg, vec3_t *outVelocity)
{
  msg_t *v4; 
  int Bits; 
  int v6; 

  _RBP = outVelocity;
  v4 = msg;
  Bits = MSG_ReadBits(msg, 9u);
  v6 = MSG_ReadBits(v4, 9u);
  __asm { vmovss  xmm1, cs:__real@45000000; maxAbsValueSize }
  LODWORD(v4) = MSG_ReadBits(v4, 9u);
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(Bits, *(float *)&_XMM1, 9u);
  __asm
  {
    vmovss  xmm1, cs:__real@45000000; maxAbsValueSize
    vmovss  dword ptr [rbp+0], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(v6, *(float *)&_XMM1, 9u);
  __asm
  {
    vmovss  xmm1, cs:__real@45400000; maxAbsValueSize
    vmovss  dword ptr [rbp+4], xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat((int)v4, *(float *)&_XMM1, 9u);
  __asm { vmovss  dword ptr [rbp+8], xmm0 }
}

/*
==============
BG_WorldStreaming_DecodeViewMode
==============
*/
char BG_WorldStreaming_DecodeViewMode(const __int64 encodedViewMode, BgWorldStreamingViewMode *outViewMode)
{
  if ( (unsigned __int64)encodedViewMode > 2 )
  {
    Com_PrintWarning(25, "BG_WorldStreaming decoding unexpected value (%d) for StreamingViewMode, ignoring.\n", (unsigned int)encodedViewMode);
    return 0;
  }
  else
  {
    *outViewMode = encodedViewMode;
    return 1;
  }
}

/*
==============
BG_WorldStreaming_DecodeViewType
==============
*/
char BG_WorldStreaming_DecodeViewType(const __int64 encodedViewType, BgWorldStreamingViewType *outViewType)
{
  if ( encodedViewType )
  {
    if ( encodedViewType == 1 )
    {
      *(_BYTE *)outViewType = 1;
      return 1;
    }
    else if ( encodedViewType == 2 )
    {
      *(_BYTE *)outViewType = 2;
      return 1;
    }
    else
    {
      Com_PrintWarning(25, "BG_WorldStreaming decoding unexpected value (%d) for ClientManualViewType, ignoring.\n", (unsigned int)encodedViewType);
      return 0;
    }
  }
  else
  {
    *(_BYTE *)outViewType = 0;
    return 1;
  }
}

/*
==============
BG_WorldStreaming_EncodeVelocity
==============
*/
void BG_WorldStreaming_EncodeVelocity(msg_t *msg, const vec3_t *velocity)
{
  __int64 v24; 
  int v27; 
  __int64 v29; 
  __int64 v31; 
  char v39; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm1, cs:__real@c5000000; min
    vmovss  xmm0, dword ptr [rdx]; val
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = velocity;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovss  xmm10, cs:__real@45000000
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@c5000000; min
    vmovaps xmm7, xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@45400000; max
    vmovss  xmm1, cs:__real@c5400000; min
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [rbx+8]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm7; value
    vmovaps xmm1, xmm10; maxAbsValueSize
  }
  v24 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  __asm
  {
    vmovaps xmm1, xmm10; maxAbsValueSize
    vmovaps xmm0, xmm8; value
  }
  v27 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  __asm { vmovss  xmm1, cs:__real@45400000; maxAbsValueSize }
  v29 = v27;
  __asm { vmovaps xmm0, xmm6; value }
  v31 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 9u);
  MSG_WriteBits(msg, v24, 9u);
  MSG_WriteBits(msg, v29, 9u);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  MSG_WriteBits(msg, v31, 9u);
}

/*
==============
BG_WorldStreaming_EncodeViewMode
==============
*/
char BG_WorldStreaming_EncodeViewMode(const BgWorldStreamingViewMode viewMode, __int64 *outEncodedViewMode)
{
  if ( (unsigned __int8)viewMode >= EASE_IN_OUT_QUAD )
  {
    Com_PrintWarning(25, "BG_WorldStreaming encoding unexpected value (%d) for StreamingViewMode, ignoring.\n", (unsigned __int8)viewMode);
    return 0;
  }
  else
  {
    *outEncodedViewMode = (unsigned __int8)viewMode;
    return 1;
  }
}

/*
==============
BG_WorldStreaming_EncodeViewType
==============
*/
char BG_WorldStreaming_EncodeViewType(const BgWorldStreamingViewType *viewType, __int64 *outEncodedViewType)
{
  __int64 v2; 
  int v3; 
  int v4; 

  v2 = *(unsigned __int8 *)viewType;
  v3 = *(unsigned __int8 *)viewType;
  if ( (_DWORD)v2 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        *outEncodedViewType = 2i64;
        return 1;
      }
      else
      {
        Com_PrintWarning(25, "BG_WorldStreaming encoding unexpected value (%d) for ClientManualViewType, ignoring.\n", v2);
        return 0;
      }
    }
    else
    {
      *outEncodedViewType = 1i64;
      return 1;
    }
  }
  else
  {
    *outEncodedViewType = 0i64;
    return 1;
  }
}

/*
==============
BG_WorldStreaming_GetNameForViewMode
==============
*/
const char *BG_WorldStreaming_GetNameForViewMode(const BgWorldStreamingViewMode mode)
{
  __int64 v1; 
  int v3; 
  int v4; 

  v1 = (unsigned __int8)mode;
  if ( (unsigned __int8)mode >= EASE_IN_OUT_QUAD )
  {
    v4 = 3;
    v3 = (unsigned __int8)mode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_streaming.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( viewModeIndex ) < (unsigned)( ( sizeof( *array_counter( STREAMING_VIEW_MODE_NAMES ) ) + 0 ) )", "viewModeIndex doesn't index ARRAY_COUNT( STREAMING_VIEW_MODE_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return STREAMING_VIEW_MODE_NAMES[v1];
}

/*
==============
BG_WorldStreaming_GetNameForViewType
==============
*/
const char *BG_WorldStreaming_GetNameForViewType(const BgWorldStreamingViewType type)
{
  __int64 v1; 
  int v3; 
  int v4; 

  v1 = (unsigned __int8)type;
  if ( (unsigned __int8)type >= (unsigned int)(COUNT|DODGE) )
  {
    v4 = 3;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_streaming.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( viewTypeIndex ) < (unsigned)( ( sizeof( *array_counter( STREAMING_VIEW_TYPE_NAMES ) ) + 0 ) )", "viewTypeIndex doesn't index ARRAY_COUNT( STREAMING_VIEW_TYPE_NAMES )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return STREAMING_VIEW_TYPE_NAMES[v1];
}

/*
==============
BG_WorldStreaming_GetStreamManualViewTypeForWorldViewType
==============
*/
__int64 BG_WorldStreaming_GetStreamManualViewTypeForWorldViewType(const BgWorldStreamingViewType viewType)
{
  char v1; 

  v1 = viewType;
  if ( (unsigned __int8)viewType >= (unsigned int)(COUNT|DODGE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_world_streaming.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( viewType ) < (unsigned)( BgWorldStreamingViewType::COUNT )", "viewType doesn't index BgWorldStreamingViewType::COUNT\n\t%i not in [0, %i)", (unsigned __int8)viewType, 3) )
    __debugbreak();
  switch ( v1 )
  {
    case 0:
      return 2i64;
    case 1:
      return 3i64;
    case 2:
      return 4i64;
  }
  return 5i64;
}

/*
==============
BG_WorldStreaming_Init
==============
*/
void BG_WorldStreaming_Init(bool isGameServer)
{
  const dvar_t *v1; 
  unsigned int flags; 

  if ( isGameServer )
  {
    v1 = DCONST_DVARBOOL_com_worldStreamingForceEnable;
    if ( !DCONST_DVARBOOL_com_worldStreamingForceEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_worldStreamingForceEnable") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v1->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v1->name) )
        __debugbreak();
    }
    s_worldStreamingEnabled = v1->current.enabled || DB_XAssetExists(ASSET_TYPE_RAWFILE, "transient_world_validated") != 0;
  }
  else
  {
    s_worldStreamingEnabled = 0;
  }
}

/*
==============
BG_WorldStreaming_IsEnabled
==============
*/
bool BG_WorldStreaming_IsEnabled()
{
  return Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) && Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x80) && s_worldStreamingEnabled;
}

/*
==============
BG_WorldStreaming_Shutdown
==============
*/
void BG_WorldStreaming_Shutdown(void)
{
  s_worldStreamingEnabled = 0;
}

