/*
==============
TopDownMapData_CanUseKillstreakAtPosition
==============
*/

bool __fastcall TopDownMapData_CanUseKillstreakAtPosition(const vec2_t *position)
{
  return ?TopDownMapData_CanUseKillstreakAtPosition@@YA_NAEBTvec2_t@@@Z(position);
}

/*
==============
TopDownMapData_GetCorners
==============
*/

bool __fastcall TopDownMapData_GetCorners(vec2_t *outBottomLeft, vec2_t *outTopRight)
{
  return ?TopDownMapData_GetCorners@@YA_NAEATvec2_t@@0@Z(outBottomLeft, outTopRight);
}

/*
==============
TopDownMapData_HasData
==============
*/

bool __fastcall TopDownMapData_HasData()
{
  return ?TopDownMapData_HasData@@YA_NXZ();
}

/*
==============
TopDownMapData_Shutdown
==============
*/

void TopDownMapData_Shutdown(void)
{
  ?TopDownMapData_Shutdown@@YAXXZ();
}

/*
==============
TopDownMapData_Init
==============
*/

void TopDownMapData_Init(void)
{
  ?TopDownMapData_Init@@YAXXZ();
}

/*
==============
TopDownMapData_CanUseKillstreakAtPosition
==============
*/
bool TopDownMapData_CanUseKillstreakAtPosition(const vec2_t *position)
{
  bool v7; 
  bool v20; 
  int v31; 
  signed int v44; 
  unsigned int v45; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 

  v7 = !s_hasTopDownMapData;
  _RBX = position;
  if ( !s_hasTopDownMapData )
    return 1;
  _RAX = cm.topDownMapData;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rax+8]
    vcomiss xmm0, xmm1
    vmovss  xmm2, dword ptr [rax+10h]
    vcomiss xmm0, xmm2
  }
  if ( s_hasTopDownMapData )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rax+0Ch]
    vcomiss xmm0, xmm3
    vmovss  xmm4, dword ptr [rax+14h]
    vcomiss xmm0, xmm4
  }
  if ( s_hasTopDownMapData )
    return 0;
  __asm
  {
    vmovaps [rsp+0A8h+var_18], xmm6
    vmovaps [rsp+0A8h+var_28], xmm8
    vmovaps [rsp+0A8h+var_38], xmm9
    vmovaps [rsp+0A8h+var_48], xmm10
    vmovaps [rsp+0A8h+var_58], xmm11
    vmovaps [rsp+0A8h+var_68], xmm12
    vsubss  xmm12, xmm2, xmm1
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm12, xmm6
    vsubss  xmm11, xmm4, xmm3
  }
  if ( !s_hasTopDownMapData )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 86, ASSERT_TYPE_ASSERT, "(width > 0.f)", (const char *)&queryFormat, "width > 0.f");
    v7 = !v20;
    if ( v20 )
      __debugbreak();
    _RAX = cm.topDownMapData;
  }
  __asm { vcomiss xmm11, xmm6 }
  if ( v7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 87, ASSERT_TYPE_ASSERT, "(height > 0.f)", (const char *)&queryFormat, "height > 0.f") )
      __debugbreak();
    _RAX = cm.topDownMapData;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rax+8]
    vmulss  xmm1, xmm1, cs:__real@43800000
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm8, dword ptr [rax+0Ch]
    vdivss  xmm0, xmm1, xmm12
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm3, xmm10, xmm2, 1
    vcvttss2si ecx, xmm3; val
  }
  v31 = I_clamp(_ECX, 0, 255);
  __asm
  {
    vsubss  xmm0, xmm9, xmm8
    vmulss  xmm1, xmm0, cs:__real@43800000
    vdivss  xmm2, xmm1, xmm11
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vroundss xmm2, xmm10, xmm3, 1
    vcvttss2si ecx, xmm2; val
    vmovaps xmm12, [rsp+0A8h+var_68]
    vmovaps xmm11, [rsp+0A8h+var_58]
    vmovaps xmm10, [rsp+0A8h+var_48]
    vmovaps xmm9, [rsp+0A8h+var_38]
    vmovaps xmm8, [rsp+0A8h+var_28]
    vmovaps xmm6, [rsp+0A8h+var_18]
  }
  v44 = v31 + (I_clamp(_ECX, 0, 255) << 8);
  if ( (unsigned int)v44 >= 0x10000 )
  {
    v49 = 0x10000;
    LODWORD(v47) = v44;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( ( 256 * 256 ) )", "sampleIndex doesn't index TOP_DOWN_MAP_DATA_TOTAL_SAMPLES\n\t%i not in [0, %i)", v47, v49) )
      __debugbreak();
  }
  v45 = v44 / 8;
  v46 = v44 % 8;
  if ( v45 >= 0x2001 )
  {
    LODWORD(v48) = 8193;
    LODWORD(v47) = v45;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( sampleByteIndex ) < (unsigned)( ( 1 + ( 256 * 256 ) / 8 ) )", "sampleByteIndex doesn't index TOP_DOWN_MAP_DATA_NUM_BYTES\n\t%i not in [0, %i)", v47, v48) )
      __debugbreak();
  }
  return ((unsigned __int8)(1 << v46) & cm.topDownMapData->content.navMeshVisible[v45]) != 0;
}

/*
==============
TopDownMapData_GetCorners
==============
*/
char TopDownMapData_GetCorners(vec2_t *outBottomLeft, vec2_t *outTopRight)
{
  if ( !s_hasTopDownMapData )
    return 0;
  *outBottomLeft = cm.topDownMapData->header.bottomLeft;
  *outTopRight = cm.topDownMapData->header.topRight;
  return 1;
}

/*
==============
TopDownMapData_HasData
==============
*/
_BOOL8 TopDownMapData_HasData()
{
  return s_hasTopDownMapData;
}

/*
==============
TopDownMapData_Init
==============
*/
void TopDownMapData_Init(void)
{
  const dvar_t *v0; 
  unsigned int flags; 
  char v2; 

  v0 = DVARBOOL_cg_useTopDownMapData;
  if ( !DVARBOOL_cg_useTopDownMapData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_useTopDownMapData") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v0->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v0->name) )
      __debugbreak();
  }
  if ( v0->current.enabled && cm.topDownMapData )
  {
    v2 = s_hasTopDownMapData;
    if ( cm.topDownMapData->header.version == 1 )
      v2 = 1;
    s_hasTopDownMapData = v2;
  }
}

/*
==============
TopDownMapData_Shutdown
==============
*/
void TopDownMapData_Shutdown(void)
{
  s_hasTopDownMapData = 0;
}

