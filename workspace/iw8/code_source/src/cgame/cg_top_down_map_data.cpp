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
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  int v10; 
  signed int v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  if ( !s_hasTopDownMapData )
    return 1;
  v2 = cm.topDownMapData->header.bottomLeft.v[0];
  if ( position->v[0] < v2 )
    return 0;
  v3 = cm.topDownMapData->header.topRight.v[0];
  if ( position->v[0] > v3 )
    return 0;
  v4 = position->v[1];
  v5 = cm.topDownMapData->header.bottomLeft.v[1];
  if ( v4 < v5 )
    return 0;
  v6 = cm.topDownMapData->header.topRight.v[1];
  if ( v4 > v6 )
    return 0;
  v7 = v6 - v5;
  if ( (float)(v3 - v2) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 86, ASSERT_TYPE_ASSERT, "(width > 0.f)", (const char *)&queryFormat, "width > 0.f") )
    __debugbreak();
  if ( v7 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 87, ASSERT_TYPE_ASSERT, "(height > 0.f)", (const char *)&queryFormat, "height > 0.f") )
    __debugbreak();
  _XMM10 = 0i64;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  v10 = I_clamp((int)*(float *)&_XMM3, 0, 255);
  __asm { vroundss xmm2, xmm10, xmm3, 1 }
  v12 = v10 + (I_clamp((int)*(float *)&_XMM2, 0, 255) << 8);
  if ( (unsigned int)v12 >= 0x10000 )
  {
    v17 = 0x10000;
    LODWORD(v15) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( sampleIndex ) < (unsigned)( ( 256 * 256 ) )", "sampleIndex doesn't index TOP_DOWN_MAP_DATA_TOTAL_SAMPLES\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v13 = v12 / 8;
  v14 = v12 % 8;
  if ( v13 >= 0x2001 )
  {
    LODWORD(v16) = 8193;
    LODWORD(v15) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_top_down_map_data.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( sampleByteIndex ) < (unsigned)( ( 1 + ( 256 * 256 ) / 8 ) )", "sampleByteIndex doesn't index TOP_DOWN_MAP_DATA_NUM_BYTES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  return ((unsigned __int8)(1 << v14) & cm.topDownMapData->content.navMeshVisible[v13]) != 0;
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

