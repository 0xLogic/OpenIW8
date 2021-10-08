/*
==============
BG_CoverWall_GetColumnSize
==============
*/

void __fastcall BG_CoverWall_GetColumnSize(unsigned int *grid, int gridXCoord, int gridYCoord, int *outSize)
{
  ?BG_CoverWall_GetColumnSize@@YAXPEAIHHPEAH@Z(grid, gridXCoord, gridYCoord, outSize);
}

/*
==============
BG_CoverWall_CalcNoiseForPosition
==============
*/

void __fastcall BG_CoverWall_CalcNoiseForPosition(int x, int y, int z, vec3_t *outNoise)
{
  ?BG_CoverWall_CalcNoiseForPosition@@YAXHHHAEATvec3_t@@@Z(x, y, z, outNoise);
}

/*
==============
BG_CoverWall_GetZMax
==============
*/

int __fastcall BG_CoverWall_GetZMax()
{
  return ?BG_CoverWall_GetZMax@@YAHXZ();
}

/*
==============
BG_CoverWall_CalcSagAnimWeight
==============
*/

double __fastcall BG_CoverWall_CalcSagAnimWeight(const int birthTime, const int gameTime)
{
  double result; 

  *(float *)&result = ?BG_CoverWall_CalcSagAnimWeight@@YAMHH@Z(birthTime, gameTime);
  return result;
}

/*
==============
BG_CoverWall_GetXMin
==============
*/

int __fastcall BG_CoverWall_GetXMin()
{
  return ?BG_CoverWall_GetXMin@@YAHXZ();
}

/*
==============
BG_CoverWall_GetXMax
==============
*/

int __fastcall BG_CoverWall_GetXMax()
{
  return ?BG_CoverWall_GetXMax@@YAHXZ();
}

/*
==============
BG_CoverWall_GetColumnFloor
==============
*/

bool __fastcall BG_CoverWall_GetColumnFloor(unsigned int *grid, int gridXCoord, int gridYCoord, int *outHeight)
{
  return ?BG_CoverWall_GetColumnFloor@@YA_NPEAIHHPEAH@Z(grid, gridXCoord, gridYCoord, outHeight);
}

/*
==============
BG_Coverwall_WeaponDamageScalar
==============
*/

double __fastcall BG_Coverwall_WeaponDamageScalar(const Weapon *r_weapon, bool isAlternate)
{
  double result; 

  *(float *)&result = ?BG_Coverwall_WeaponDamageScalar@@YAMAEBUWeapon@@_N@Z(r_weapon, isAlternate);
  return result;
}

/*
==============
BG_CoverWall_IsCoverWall
==============
*/

bool __fastcall BG_CoverWall_IsCoverWall(const entityState_t *es)
{
  return ?BG_CoverWall_IsCoverWall@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_CoverWall_GetSurfaceType
==============
*/

int __fastcall BG_CoverWall_GetSurfaceType()
{
  return ?BG_CoverWall_GetSurfaceType@@YAHXZ();
}

/*
==============
BG_CoverWall_GridPosToWorldPos
==============
*/

void __fastcall BG_CoverWall_GridPosToWorldPos(const vec3_t *origin, const vec3_t *angles, const int gridXCoord, const int gridYCoord, const int gridZCoord, float sagAmount, vec3_t *outWorldPos)
{
  ?BG_CoverWall_GridPosToWorldPos@@YAXAEBTvec3_t@@0HHHMAEAT1@@Z(origin, angles, gridXCoord, gridYCoord, gridZCoord, sagAmount, outWorldPos);
}

/*
==============
BG_CoverWall_GetCollapseRateMS
==============
*/

int __fastcall BG_CoverWall_GetCollapseRateMS()
{
  return ?BG_CoverWall_GetCollapseRateMS@@YAHXZ();
}

/*
==============
BG_CoverWall_GetGridSize
==============
*/

int __fastcall BG_CoverWall_GetGridSize()
{
  return ?BG_CoverWall_GetGridSize@@YAHXZ();
}

/*
==============
BG_CoverWall_GetExpansionRateMS
==============
*/

int __fastcall BG_CoverWall_GetExpansionRateMS()
{
  return ?BG_CoverWall_GetExpansionRateMS@@YAHXZ();
}

/*
==============
BG_CoverWall_GetWallHeight
==============
*/

int __fastcall BG_CoverWall_GetWallHeight()
{
  return ?BG_CoverWall_GetWallHeight@@YAHXZ();
}

/*
==============
BG_CoverWall_IsPosOnGrid
==============
*/

bool __fastcall BG_CoverWall_IsPosOnGrid(const int gridXCoord, const int gridYCoord, const int gridZCoord)
{
  return ?BG_CoverWall_IsPosOnGrid@@YA_NHHH@Z(gridXCoord, gridYCoord, gridZCoord);
}

/*
==============
BG_CoverWall_GetYMax
==============
*/

int __fastcall BG_CoverWall_GetYMax()
{
  return ?BG_CoverWall_GetYMax@@YAHXZ();
}

/*
==============
BG_CoverWall_DataArrayIndexToGridPos
==============
*/

void __fastcall BG_CoverWall_DataArrayIndexToGridPos(const int arrayIndex, int *outX, int *outY, int *outZ)
{
  ?BG_CoverWall_DataArrayIndexToGridPos@@YAXHPEAH00@Z(arrayIndex, outX, outY, outZ);
}

/*
==============
BG_CoverWall_GetWallDepth
==============
*/

int __fastcall BG_CoverWall_GetWallDepth()
{
  return ?BG_CoverWall_GetWallDepth@@YAHXZ();
}

/*
==============
BG_CoverWall_GetExpansionTimeMS
==============
*/

int __fastcall BG_CoverWall_GetExpansionTimeMS()
{
  return ?BG_CoverWall_GetExpansionTimeMS@@YAHXZ();
}

/*
==============
BG_CoverWall_NumFilledGridPositions
==============
*/

int __fastcall BG_CoverWall_NumFilledGridPositions(const unsigned int *grid)
{
  return ?BG_CoverWall_NumFilledGridPositions@@YAHPEBI@Z(grid);
}

/*
==============
BG_CoverWall_SmoothFunc
==============
*/

double __fastcall BG_CoverWall_SmoothFunc(const float x)
{
  double result; 

  *(float *)&result = ?BG_CoverWall_SmoothFunc@@YAMM@Z(x);
  return result;
}

/*
==============
BG_CoverWall_GridPosToLocalPos
==============
*/

void __fastcall BG_CoverWall_GridPosToLocalPos(const int gridXCoord, const int gridYCoord, const int gridZCoord, float sagAnimWeight, vec3_t *outLocalPos)
{
  ?BG_CoverWall_GridPosToLocalPos@@YAXHHHMAEATvec3_t@@@Z(gridXCoord, gridYCoord, gridZCoord, sagAnimWeight, outLocalPos);
}

/*
==============
BG_CoverWall_GetColumnHeight
==============
*/

bool __fastcall BG_CoverWall_GetColumnHeight(unsigned int *grid, int gridXCoord, int gridYCoord, int *outHeight)
{
  return ?BG_CoverWall_GetColumnHeight@@YA_NPEAIHHPEAH@Z(grid, gridXCoord, gridYCoord, outHeight);
}

/*
==============
BG_CoverWall_GetZMin
==============
*/

int __fastcall BG_CoverWall_GetZMin()
{
  return ?BG_CoverWall_GetZMin@@YAHXZ();
}

/*
==============
BG_CoverWall_GetGridPos
==============
*/

bool __fastcall BG_CoverWall_GetGridPos(const unsigned int *grid, int gridXCoord, int gridYCoord, int gridZCoord)
{
  return ?BG_CoverWall_GetGridPos@@YA_NPEBIHHH@Z(grid, gridXCoord, gridYCoord, gridZCoord);
}

/*
==============
BG_CoverWall_GridPosToDataArrayIndex
==============
*/

int __fastcall BG_CoverWall_GridPosToDataArrayIndex(const int gridXCoord, const int gridYCoord, const int gridZCoord)
{
  return ?BG_CoverWall_GridPosToDataArrayIndex@@YAHHHH@Z(gridXCoord, gridYCoord, gridZCoord);
}

/*
==============
BG_CoverWall_GetWallWidth
==============
*/

int __fastcall BG_CoverWall_GetWallWidth()
{
  return ?BG_CoverWall_GetWallWidth@@YAHXZ();
}

/*
==============
BG_CoverWall_GetRowMinMax
==============
*/

bool __fastcall BG_CoverWall_GetRowMinMax(unsigned int *grid, int gridYCoord, int gridZCoord, int *outMinBound, int *outMaxBound)
{
  return ?BG_CoverWall_GetRowMinMax@@YA_NPEAIHHPEAH1@Z(grid, gridYCoord, gridZCoord, outMinBound, outMaxBound);
}

/*
==============
BG_CoverWall_GetCollisionRadius
==============
*/

double __fastcall BG_CoverWall_GetCollisionRadius()
{
  double result; 

  *(float *)&result = ?BG_CoverWall_GetCollisionRadius@@YAMXZ();
  return result;
}

/*
==============
BG_CoverWall_CalcAnglesForPosition
==============
*/

void __fastcall BG_CoverWall_CalcAnglesForPosition(int x, int y, int z, vec3_t *outAngles)
{
  ?BG_CoverWall_CalcAnglesForPosition@@YAXHHHAEATvec3_t@@@Z(x, y, z, outAngles);
}

/*
==============
BG_CoverWall_GetYMin
==============
*/

int __fastcall BG_CoverWall_GetYMin()
{
  return ?BG_CoverWall_GetYMin@@YAHXZ();
}

/*
==============
BG_CoverWall_SetGridPos
==============
*/

void __fastcall BG_CoverWall_SetGridPos(unsigned int *grid, bool value, int gridXCoord, int gridYCoord, int gridZCoord)
{
  ?BG_CoverWall_SetGridPos@@YAXPEAI_NHHH@Z(grid, value, gridXCoord, gridYCoord, gridZCoord);
}

/*
==============
BG_CoverWall_IsAnyNeighborSet
==============
*/

bool __fastcall BG_CoverWall_IsAnyNeighborSet(const unsigned int *grid, const int gridXCoord, const int gridYCoord, const int gridZCoord)
{
  return ?BG_CoverWall_IsAnyNeighborSet@@YA_NPEBIHHH@Z(grid, gridXCoord, gridYCoord, gridZCoord);
}

/*
==============
BG_CoverWall_GetGridExtents
==============
*/

void __fastcall BG_CoverWall_GetGridExtents(const unsigned int *grid, int *xMin, int *xMax, int *yMin, int *yMax, int *zMin, int *zMax)
{
  ?BG_CoverWall_GetGridExtents@@YAXPEBIPEAH11111@Z(grid, xMin, xMax, yMin, yMax, zMin, zMax);
}

/*
==============
BG_CoverWall_CalcAnglesForPosition
==============
*/
void BG_CoverWall_CalcAnglesForPosition(int x, int y, int z, vec3_t *outAngles)
{
  const dvar_t *v5; 

  v5 = DCONST_DVARMPSPBOOL_g_coverWall_useRotations;
  _RDI = outAngles;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useRotations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useRotations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@424c0000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rdi], xmm1
      vmulss  xmm1, xmm0, cs:__real@428e0000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm1, xmm0, cs:__real@43490000
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
}

/*
==============
BG_CoverWall_CalcNoiseForPosition
==============
*/
void BG_CoverWall_CalcNoiseForPosition(int x, int y, int z, vec3_t *outNoise)
{
  char v13; 

  _RBX = DCONST_DVARMPSPFLT_g_coverWall_maxYOffset;
  __asm { vmovaps [rsp+88h+var_48], xmm8 }
  if ( !DCONST_DVARMPSPFLT_g_coverWall_maxYOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_maxYOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm8, xmm0
  }
  *(_QWORD *)outNoise->v = 0i64;
  outNoise->v[2] = 0.0;
  _R11 = &v13;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
}

/*
==============
BG_CoverWall_CalcSag
==============
*/

float __fastcall BG_CoverWall_CalcSag(double sagWeight, double xPos, double zPos)
{
  const dvar_t *v13; 
  char v24; 
  const dvar_t *v29; 
  const dvar_t *v37; 
  const dvar_t *v39; 
  const dvar_t *v48; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  v13 = DCONST_DVARMPSPBOOL_g_coverWall_useCurves;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps xmm7, xmm2
    vmovaps xmm10, xmm1
    vmovaps xmm12, xmm0
    vmovaps xmm6, xmm2
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useCurves") )
    __debugbreak();
  __asm { vmovaps [rsp+0D8h+var_48], xmm9 }
  Dvar_CheckFrontendServerThread(v13);
  __asm
  {
    vmovss  xmm13, cs:__real@3dcccccd
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm14, cs:__real@40000000
    vxorps  xmm8, xmm8, xmm8
  }
  if ( v13->current.enabled )
  {
    BG_CoverWall_GetGridSize();
    __asm
    {
      vcomiss xmm7, xmm8
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    if ( v24 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@bdcccccd
        vcvtsi2ss xmm1, xmm1, eax
        vdivss  xmm1, xmm0, xmm1
        vmulss  xmm0, xmm1, xmm7; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v37 = DCONST_DVARMPSPFLT_g_coverWall_curveCoefMin;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARMPSPFLT_g_coverWall_curveCoefMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_curveCoefMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm0, xmm13, xmm0
        vmulss  xmm0, xmm0, xmm7; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v29 = DCONST_DVARMPSPFLT_g_coverWall_curveCoefMin;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARMPSPFLT_g_coverWall_curveCoefMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_curveCoefMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      __asm { vmulss  xmm6, xmm6, cs:__real@bf800000 }
    }
    __asm { vmulss  xmm9, xmm6, dword ptr [rbx+28h] }
    v39 = DCONST_DVARMPSPFLT_g_coverWall_curveCoefMax;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_curveCoefMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_curveCoefMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    __asm
    {
      vmulss  xmm4, xmm6, dword ptr [rbx+28h]
      vsubss  xmm0, xmm14, xmm12
      vmulss  xmm3, xmm0, xmm12
      vsubss  xmm1, xmm11, xmm3
      vmulss  xmm2, xmm1, xmm9
      vmulss  xmm0, xmm3, xmm4
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm10, xmm10
      vmulss  xmm2, xmm3, xmm1
      vaddss  xmm6, xmm2, xmm7
    }
  }
  v48 = DCONST_DVARMPSPBOOL_g_coverWall_useCompression;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useCompression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useCompression") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  if ( !v48->current.enabled )
    goto LABEL_30;
  _RBX = DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMin;
  if ( !DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_compressionAmountMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm10, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMax;
  if ( !DCONST_DVARMPSPFLT_g_coverWall_compressionAmountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_compressionAmountMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm7, xmm8
    vmovss  xmm9, dword ptr [rbx+28h]
  }
  if ( v24 )
  {
LABEL_30:
    __asm { vmovaps xmm0, xmm6 }
  }
  else
  {
    _EAX = BG_CoverWall_GetGridSize();
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm0, xmm13, xmm0
      vmulss  xmm0, xmm0, xmm7; val
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm14, xmm12
      vmulss  xmm4, xmm1, xmm12
      vmulss  xmm2, xmm4, xmm9
      vmulss  xmm3, xmm2, xmm0
      vxorps  xmm5, xmm3, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm4, xmm10
      vmulss  xmm2, xmm1, xmm11
      vsubss  xmm3, xmm10, xmm2
      vmulss  xmm0, xmm3, xmm0
      vsubss  xmm1, xmm5, xmm0
      vaddss  xmm0, xmm6, xmm1
    }
  }
  __asm { vmovaps xmm9, [rsp+0D8h+var_48] }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+0D8h+var_98]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CoverWall_CalcSagAnimWeight
==============
*/
float BG_CoverWall_CalcSagAnimWeight(const int birthTime, const int gameTime)
{
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v8; 

  v4 = DCONST_DVARMPSPINT_g_coverWall_settleDuration;
  if ( !DCONST_DVARMPSPINT_g_coverWall_settleDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_settleDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v8 = DCONST_DVARMPSPINT_g_coverWall_expansionTimeMS;
  if ( !DCONST_DVARMPSPINT_g_coverWall_expansionTimeMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_expansionTimeMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( gameTime < integer + v8->current.integer + birthTime )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( gameTime >= birthTime )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0
      }
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_CoverWall_DataArrayIndexToGridPos
==============
*/
void BG_CoverWall_DataArrayIndexToGridPos(const int arrayIndex, int *outX, int *outY, int *outZ)
{
  int i; 
  int v9; 
  int v10; 

  if ( !outX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 170, ASSERT_TYPE_ASSERT, "(outX)", (const char *)&queryFormat, "outX") )
    __debugbreak();
  if ( !outY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 171, ASSERT_TYPE_ASSERT, "(outY)", (const char *)&queryFormat, "outY") )
    __debugbreak();
  if ( !outZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 172, ASSERT_TYPE_ASSERT, "(outZ)", (const char *)&queryFormat, "outZ") )
    __debugbreak();
  if ( arrayIndex >= 182 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 174, ASSERT_TYPE_ASSERT, "(arrayIndex < 13 * 1 * ( 10 - -4 ))", (const char *)&queryFormat, "arrayIndex < COVERWALL_GRID_WIDTH * COVERWALL_GRID_DEPTH * ( COVERWALL_GRID_HEIGHT - COVERWALL_GRID_Z_MIN )") )
    __debugbreak();
  for ( i = 0; i <= 0; ++i )
  {
    v9 = -4;
    while ( 2 )
    {
      v10 = -6;
      do
      {
        if ( BG_CoverWall_GridPosToDataArrayIndex(v10, i, v9) == arrayIndex )
        {
          *outX = v10;
          *outY = i;
          *outZ = v9;
          return;
        }
        ++v10;
      }
      while ( v10 <= 6 );
      if ( ++v9 <= 9 )
        continue;
      break;
    }
  }
  *outX = 0;
  *outY = 0;
  *outZ = 0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 199, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
}

/*
==============
BG_CoverWall_GetCollapseRateMS
==============
*/
__int64 BG_CoverWall_GetCollapseRateMS()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_collapseRateMS;
  if ( !DCONST_DVARMPSPINT_g_coverWall_collapseRateMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_collapseRateMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
BG_CoverWall_GetCollisionRadius
==============
*/
float BG_CoverWall_GetCollisionRadius()
{
  _RBX = DCONST_DVARMPSPFLT_g_coverWall_perBlockCollisionRadius;
  if ( !DCONST_DVARMPSPFLT_g_coverWall_perBlockCollisionRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_perBlockCollisionRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
BG_CoverWall_GetColumnFloor
==============
*/
char BG_CoverWall_GetColumnFloor(unsigned int *grid, int gridXCoord, int gridYCoord, int *outHeight)
{
  int v8; 
  int v9; 
  unsigned __int64 v10; 
  unsigned int v11; 

  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 394, ASSERT_TYPE_ASSERT, "(grid)", (const char *)&queryFormat, "grid") )
    __debugbreak();
  v8 = -4;
  while ( 1 )
  {
    v9 = BG_CoverWall_GridPosToDataArrayIndex(gridXCoord, gridYCoord, v8);
    v10 = v9;
    if ( v9 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
      __debugbreak();
    v11 = grid[(int)(v10 >> 5)];
    if ( _bittest((const int *)&v11, v10 & 0x1F) )
      break;
    if ( ++v8 > 9 )
      return 0;
  }
  *outHeight = v8;
  return 1;
}

/*
==============
BG_CoverWall_GetColumnHeight
==============
*/
char BG_CoverWall_GetColumnHeight(unsigned int *grid, int gridXCoord, int gridYCoord, int *outHeight)
{
  int v8; 
  int v9; 
  unsigned __int64 v10; 
  unsigned int v11; 

  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 359, ASSERT_TYPE_ASSERT, "(grid)", (const char *)&queryFormat, "grid") )
    __debugbreak();
  v8 = 9;
  while ( 1 )
  {
    v9 = BG_CoverWall_GridPosToDataArrayIndex(gridXCoord, gridYCoord, v8);
    v10 = v9;
    if ( v9 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
      __debugbreak();
    v11 = grid[(int)(v10 >> 5)];
    if ( _bittest((const int *)&v11, v10 & 0x1F) )
      break;
    if ( --v8 < -4 )
      return 0;
  }
  *outHeight = v8;
  return 1;
}

/*
==============
BG_CoverWall_GetColumnSize
==============
*/
void BG_CoverWall_GetColumnSize(unsigned int *grid, int gridXCoord, int gridYCoord, int *outSize)
{
  int v7; 
  int v8; 
  int v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  int v12; 

  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 376, ASSERT_TYPE_ASSERT, "(grid)", (const char *)&queryFormat, "grid") )
    __debugbreak();
  v7 = 0;
  v8 = -4;
  do
  {
    v9 = BG_CoverWall_GridPosToDataArrayIndex(gridXCoord, gridYCoord, v8);
    v10 = v9;
    if ( v9 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
      __debugbreak();
    v11 = grid[(int)(v10 >> 5)];
    v12 = v7 + 1;
    if ( !_bittest((const int *)&v11, v10 & 0x1F) )
      v12 = v7;
    ++v8;
    v7 = v12;
  }
  while ( v8 <= 9 );
  *outSize = v12;
}

/*
==============
BG_CoverWall_GetExpansionRateMS
==============
*/
__int64 BG_CoverWall_GetExpansionRateMS()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_expansionRateMS;
  if ( !DCONST_DVARMPSPINT_g_coverWall_expansionRateMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_expansionRateMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
BG_CoverWall_GetExpansionTimeMS
==============
*/
__int64 BG_CoverWall_GetExpansionTimeMS()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_expansionTimeMS;
  if ( !DCONST_DVARMPSPINT_g_coverWall_expansionTimeMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_expansionTimeMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
BG_CoverWall_GetGridExtents
==============
*/
void BG_CoverWall_GetGridExtents(const unsigned int *grid, int *xMin, int *xMax, int *yMin, int *yMax, int *zMin, int *zMax)
{
  int v7; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 

  v7 = 0;
  *xMin = 0;
  *xMax = 0;
  *yMin = 0;
  *yMax = 0;
  v11 = 0;
  *zMin = 0;
  *zMax = 0;
  do
  {
    v12 = -4;
    do
    {
      v13 = -6;
      do
      {
        v14 = BG_CoverWall_GridPosToDataArrayIndex(v13, v11, v12);
        v15 = v14;
        if ( v14 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
          __debugbreak();
        v16 = grid[(int)(v15 >> 5)];
        if ( _bittest((const int *)&v16, v15 & 0x1F) )
        {
          if ( !v7 )
          {
            *xMin = v13;
            *xMax = v13;
            *yMin = v11;
            *yMax = v11;
            *zMin = v12;
            *zMax = v12;
          }
          v17 = *xMin;
          if ( v13 < *xMin )
            v17 = v13;
          *xMin = v17;
          v18 = *xMax;
          if ( v13 > *xMax )
            v18 = v13;
          *xMax = v18;
          v19 = *yMin;
          if ( v11 < *yMin )
            v19 = v11;
          *yMin = v19;
          v20 = *yMax;
          if ( v11 > *yMax )
            v20 = v11;
          *yMax = v20;
          v21 = *zMin;
          if ( v12 < *zMin )
            v21 = v12;
          *zMin = v21;
          v22 = *zMax;
          if ( v12 > *zMax )
            v22 = v12;
          ++v7;
          *zMax = v22;
        }
        ++v13;
      }
      while ( v13 <= 6 );
      ++v12;
    }
    while ( v12 <= 9 );
    ++v11;
  }
  while ( v11 <= 0 );
}

/*
==============
BG_CoverWall_GetGridPos
==============
*/
unsigned __int8 BG_CoverWall_GetGridPos(const unsigned int *grid, int gridXCoord, int gridYCoord, int gridZCoord)
{
  int v5; 
  unsigned __int64 v6; 
  unsigned int v7; 

  v5 = BG_CoverWall_GridPosToDataArrayIndex(gridXCoord, gridYCoord, gridZCoord);
  v6 = v5;
  if ( v5 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
    __debugbreak();
  v7 = grid[(int)(v6 >> 5)];
  return _bittest((const int *)&v7, v6 & 0x1F);
}

/*
==============
BG_CoverWall_GetGridSize
==============
*/
__int64 BG_CoverWall_GetGridSize()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_gridSize;
  if ( !DCONST_DVARMPSPINT_g_coverWall_gridSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_gridSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
BG_CoverWall_GetRowMinMax
==============
*/
__int64 BG_CoverWall_GetRowMinMax(unsigned int *grid, int gridYCoord, int gridZCoord, int *outMinBound, int *outMaxBound)
{
  unsigned __int8 v9; 
  int v10; 
  int v11; 
  unsigned __int64 v12; 
  unsigned int v13; 

  v9 = 0;
  v10 = -6;
  do
  {
    v11 = BG_CoverWall_GridPosToDataArrayIndex(v10, gridYCoord, gridZCoord);
    v12 = v11;
    if ( v11 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
      __debugbreak();
    v13 = grid[(int)(v12 >> 5)];
    if ( _bittest((const int *)&v13, v12 & 0x1F) )
    {
      if ( !v9 )
        *outMinBound = v10;
      *outMaxBound = v10;
      v9 = 1;
    }
    ++v10;
  }
  while ( v10 <= 6 );
  return v9;
}

/*
==============
BG_CoverWall_GetSurfaceType
==============
*/
__int64 BG_CoverWall_GetSurfaceType()
{
  return 2621440i64;
}

/*
==============
BG_CoverWall_GetWallDepth
==============
*/
__int64 BG_CoverWall_GetWallDepth()
{
  return 1i64;
}

/*
==============
BG_CoverWall_GetWallHeight
==============
*/
__int64 BG_CoverWall_GetWallHeight()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_height;
  if ( !DCONST_DVARMPSPINT_g_coverWall_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
BG_CoverWall_GetWallWidth
==============
*/
__int64 BG_CoverWall_GetWallWidth()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_width;
  if ( !DCONST_DVARMPSPINT_g_coverWall_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.unsignedInt;
}

/*
==============
BG_CoverWall_GetXMax
==============
*/
__int64 BG_CoverWall_GetXMax()
{
  return (unsigned int)((BG_CoverWall_GetWallWidth() - 1) / 2);
}

/*
==============
BG_CoverWall_GetXMin
==============
*/
__int64 BG_CoverWall_GetXMin()
{
  return (unsigned int)(BG_CoverWall_GetWallWidth() / -2);
}

/*
==============
BG_CoverWall_GetYMax
==============
*/
__int64 BG_CoverWall_GetYMax()
{
  return 0i64;
}

/*
==============
BG_CoverWall_GetYMin
==============
*/
__int64 BG_CoverWall_GetYMin()
{
  return 0i64;
}

/*
==============
BG_CoverWall_GetZMax
==============
*/
__int64 BG_CoverWall_GetZMax()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPSPINT_g_coverWall_height;
  if ( !DCONST_DVARMPSPINT_g_coverWall_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return (unsigned int)(v0->current.integer - 1);
}

/*
==============
BG_CoverWall_GetZMin
==============
*/
__int64 BG_CoverWall_GetZMin()
{
  return 0xFFFFFFFFi64;
}

/*
==============
BG_CoverWall_GridPosToDataArrayIndex
==============
*/
__int64 BG_CoverWall_GridPosToDataArrayIndex(const int gridXCoord, const int gridYCoord, const int gridZCoord)
{
  if ( (unsigned int)(gridXCoord + 6) > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 154, ASSERT_TYPE_ASSERT, "(gridXCoord >= -13 / 2 && gridXCoord <= ( 13 - 1 ) / 2)", (const char *)&queryFormat, "gridXCoord >= COVERWALL_GRID_X_MIN && gridXCoord <= COVERWALL_GRID_X_MAX") )
    __debugbreak();
  if ( gridYCoord && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 155, ASSERT_TYPE_ASSERT, "(gridYCoord >= -1 / 2 && gridYCoord <= ( 1 - 1 ) / 2)", (const char *)&queryFormat, "gridYCoord >= COVERWALL_GRID_Y_MIN && gridYCoord <= COVERWALL_GRID_Y_MAX") )
    __debugbreak();
  if ( (unsigned int)(gridZCoord + 4) > 0xD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 156, ASSERT_TYPE_ASSERT, "(gridZCoord >= -4 && gridZCoord <= 10 - 1)", (const char *)&queryFormat, "gridZCoord >= COVERWALL_GRID_Z_MIN && gridZCoord <= COVERWALL_GRID_Z_MAX") )
    __debugbreak();
  return (unsigned int)(13 * (gridZCoord + 10 * gridYCoord) + gridXCoord + 58);
}

/*
==============
BG_CoverWall_GridPosToLocalPos
==============
*/

void __fastcall BG_CoverWall_GridPosToLocalPos(const int gridXCoord, const int gridYCoord, const int gridZCoord, double sagAnimWeight, vec3_t *outLocalPos)
{
  char v10; 
  const dvar_t *v12; 
  const dvar_t *v19; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v10 = gridZCoord;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm7, xmm3
  }
  BG_CoverWall_GetGridSize();
  v12 = DCONST_DVARMPSPBOOL_g_coverWall_useRowOffsets;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm8, xmm8, r9d
    vcvtsi2ss xmm9, xmm9, edx
    vcvtsi2ss xmm6, xmm6, eax
  }
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useRowOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useRowOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled && (v10 & 1) != 0 )
  {
    v19 = DCONST_DVARMPSPFLT_g_coverWall_rowOffsetAmount;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_rowOffsetAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_rowOffsetAmount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    __asm { vaddss  xmm6, xmm6, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovaps xmm2, xmm9; zPos
    vmovaps xmm1, xmm6; xPos
    vmovaps xmm0, xmm7; sagWeight
  }
  *(float *)&_XMM0 = BG_CoverWall_CalcSag(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
  _RAX = outLocalPos;
  _R11 = &v31;
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rax], xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vmovss  dword ptr [rax+4], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rax+8], xmm0
  }
}

/*
==============
BG_CoverWall_GridPosToWorldPos
==============
*/
void BG_CoverWall_GridPosToWorldPos(const vec3_t *origin, const vec3_t *angles, const int gridXCoord, const int gridYCoord, const int gridZCoord, float sagAmount, vec3_t *outWorldPos)
{
  const dvar_t *v16; 
  const dvar_t *v23; 
  tmat33_t<vec3_t> axis; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBP = outWorldPos;
  _R14 = origin;
  BG_CoverWall_GetGridSize();
  v16 = DCONST_DVARMPSPBOOL_g_coverWall_useRowOffsets;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm10, xmm10, edx
    vcvtsi2ss xmm9, xmm9, eax
    vcvtsi2ss xmm6, xmm6, edx
  }
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useRowOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useRowOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled && (gridZCoord & 1) != 0 )
  {
    v23 = DCONST_DVARMPSPFLT_g_coverWall_rowOffsetAmount;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_rowOffsetAmount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_rowOffsetAmount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    __asm { vaddss  xmm9, xmm9, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm0, [rsp+0D8h+sagAmount]; sagWeight
    vmovaps xmm2, xmm6; zPos
    vmovaps xmm1, xmm9; xPos
  }
  *(float *)&_XMM0 = BG_CoverWall_CalcSag(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
  __asm { vmovaps xmm8, xmm0 }
  AnglesToAxis(angles, &axis);
  __asm
  {
    vmovss  xmm3, dword ptr [r14]
    vmulss  xmm2, xmm9, dword ptr [rsp+0D8h+axis]
    vmulss  xmm1, xmm10, dword ptr [rsp+0D8h+axis+0Ch]
    vmulss  xmm0, xmm10, dword ptr [rsp+0D8h+axis+10h]
    vaddss  xmm4, xmm2, xmm3
    vmulss  xmm2, xmm8, dword ptr [rsp+0D8h+axis+18h]
    vaddss  xmm5, xmm4, xmm1
    vmovss  dword ptr [rbp+0], xmm3
    vmovss  xmm6, dword ptr [r14+4]
    vaddss  xmm1, xmm5, xmm2
    vmulss  xmm2, xmm9, dword ptr [rsp+0D8h+axis+4]
    vaddss  xmm3, xmm2, xmm6
    vmulss  xmm2, xmm10, dword ptr [rsp+0D8h+axis+14h]
    vaddss  xmm4, xmm3, xmm0
    vmovss  dword ptr [rbp+4], xmm6
    vmovss  xmm7, dword ptr [r14+8]
    vmovss  dword ptr [rbp+0], xmm1
    vmulss  xmm1, xmm8, dword ptr [rsp+0D8h+axis+1Ch]
    vaddss  xmm0, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+0D8h+axis+8]
    vaddss  xmm3, xmm1, xmm7
    vmovss  dword ptr [rbp+4], xmm0
    vmulss  xmm0, xmm8, dword ptr [rsp+0D8h+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmovss  dword ptr [rbp+8], xmm2
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
BG_CoverWall_IsAnyNeighborSet
==============
*/
bool BG_CoverWall_IsAnyNeighborSet(const unsigned int *grid, const int gridXCoord, const int gridYCoord, const int gridZCoord)
{
  bool v8; 

  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 426, ASSERT_TYPE_ASSERT, "(grid)", (const char *)&queryFormat, "grid") )
    __debugbreak();
  if ( (unsigned int)(gridXCoord + 6) > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 427, ASSERT_TYPE_ASSERT, "(gridXCoord >= -13 / 2 && gridXCoord <= ( 13 - 1 ) / 2)", (const char *)&queryFormat, "gridXCoord >= COVERWALL_GRID_X_MIN && gridXCoord <= COVERWALL_GRID_X_MAX") )
    __debugbreak();
  if ( gridYCoord && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 428, ASSERT_TYPE_ASSERT, "(gridYCoord >= -1 / 2 && gridYCoord <= ( 1 - 1 ) / 2)", (const char *)&queryFormat, "gridYCoord >= COVERWALL_GRID_Y_MIN && gridYCoord <= COVERWALL_GRID_Y_MAX") )
    __debugbreak();
  if ( (unsigned int)(gridZCoord + 4) > 0xD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 429, ASSERT_TYPE_ASSERT, "(gridZCoord >= -4 && gridZCoord <= 10 - 1)", (const char *)&queryFormat, "gridZCoord >= COVERWALL_GRID_Z_MIN && gridZCoord <= COVERWALL_GRID_Z_MAX") )
    __debugbreak();
  if ( gridXCoord > -6 && BG_CoverWall_GetGridPos(grid, gridXCoord - 1, gridYCoord, gridZCoord) || gridXCoord < 6 && BG_CoverWall_GetGridPos(grid, gridXCoord + 1, gridYCoord, gridZCoord) )
    return 1;
  v8 = gridYCoord < 0;
  if ( gridYCoord > 0 )
  {
    if ( BG_CoverWall_GetGridPos(grid, gridXCoord, gridYCoord - 1, gridZCoord) )
      return 1;
    v8 = gridYCoord < 0;
  }
  return v8 && BG_CoverWall_GetGridPos(grid, gridXCoord, gridYCoord + 1, gridZCoord) || gridZCoord > -4 && BG_CoverWall_GetGridPos(grid, gridXCoord, gridYCoord, gridZCoord - 1) || gridZCoord < 9 && BG_CoverWall_GetGridPos(grid, gridXCoord, gridYCoord, gridZCoord + 1);
}

/*
==============
BG_CoverWall_IsCoverWall
==============
*/
bool BG_CoverWall_IsCoverWall(const entityState_t *es)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 467, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return es->eType == ET_COVERWALL;
}

/*
==============
BG_CoverWall_IsPosOnGrid
==============
*/
bool BG_CoverWall_IsPosOnGrid(const int gridXCoord, const int gridYCoord, const int gridZCoord)
{
  return (unsigned int)(gridXCoord + 6) <= 0xC && !gridYCoord && (unsigned int)(gridZCoord + 4) <= 0xD;
}

/*
==============
BG_CoverWall_NumFilledGridPositions
==============
*/
__int64 BG_CoverWall_NumFilledGridPositions(const unsigned int *grid)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  int v5; 
  unsigned __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 

  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 410, ASSERT_TYPE_ASSERT, "(grid)", (const char *)&queryFormat, "grid") )
    __debugbreak();
  v2 = 0;
  v3 = -4;
  do
  {
    v4 = -6;
    do
    {
      v5 = BG_CoverWall_GridPosToDataArrayIndex(v4, 0, v3);
      v6 = v5;
      if ( v5 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 277, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
        __debugbreak();
      v7 = v2 + 1;
      v8 = grid[(int)(v6 >> 5)];
      if ( !_bittest((const int *)&v8, v6 & 0x1F) )
        v7 = v2;
      ++v4;
      v2 = v7;
    }
    while ( v4 <= 6 );
    ++v3;
  }
  while ( v3 <= 9 );
  return v7;
}

/*
==============
BG_CoverWall_SetGridPos
==============
*/
void BG_CoverWall_SetGridPos(unsigned int *grid, bool value, int gridXCoord, int gridYCoord, int gridZCoord)
{
  int v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned int *v10; 
  unsigned int v11; 

  v7 = BG_CoverWall_GridPosToDataArrayIndex(gridXCoord, gridYCoord, gridZCoord);
  v8 = v7;
  if ( v7 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_coverwall.cpp", 255, ASSERT_TYPE_ASSERT, "(dataIndex < 32 * 7)", (const char *)&queryFormat, "dataIndex < BITS_PER_UINT * COVERWALL_GRID_ARRAY_SIZE") )
    __debugbreak();
  v9 = 1 << (v8 & 0x1F);
  v10 = &grid[(int)(v8 >> 5)];
  v11 = *v10;
  if ( value )
    *v10 = v9 | v11;
  else
    *v10 = v11 & ~v9;
}

/*
==============
BG_CoverWall_SmoothFunc
==============
*/
float BG_CoverWall_SmoothFunc(const float x)
{
  __asm
  {
    vmovss  xmm1, cs:__real@40000000
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Coverwall_WeaponDamageScalar
==============
*/
float BG_Coverwall_WeaponDamageScalar(const Weapon *r_weapon, bool isAlternate)
{
  unsigned int weaponIdx; 
  int v7; 
  unsigned int v8; 
  WeaponAttachment *attachments; 

  weaponIdx = r_weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    v8 = bg_lastParsedWeaponIndex;
    v7 = r_weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v7, v8) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  BG_GetWeaponAttachments(r_weapon, isAlternate, (const WeaponAttachment **)&attachments);
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

