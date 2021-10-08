/*
==============
R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>
==============
*/

unsigned int __fastcall R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>(const GfxStDrawSurf *src, unsigned int count, GfxStDrawSurf *dst)
{
  return ??$R_StableSortSurfs_All@VGfxSortStDrawSurfsInterface@@UGfxStDrawSurf@@@@YAIPEIBUGfxStDrawSurf@@IPEIAU0@@Z(src, count, dst);
}

/*
==============
R_StableSortSurfs_All<GfxSortFlareSurfsInterface,GfxFlareSurf>
==============
*/

unsigned int __fastcall R_StableSortSurfs_All<GfxSortFlareSurfsInterface,GfxFlareSurf>(const GfxFlareSurf *src, unsigned int count, GfxFlareSurf *dst)
{
  return ??$R_StableSortSurfs_All@VGfxSortFlareSurfsInterface@@UGfxFlareSurf@@@@YAIPEIBUGfxFlareSurf@@IPEIAU0@@Z(src, count, dst);
}

/*
==============
R_StableSortSurfsWithSortOrder_NonAuto<GfxSortCodeSurfsInterface,GfxCodeSurf>
==============
*/

unsigned int __fastcall R_StableSortSurfsWithSortOrder_NonAuto<GfxSortCodeSurfsInterface,GfxCodeSurf>(const GfxCodeSurf *src, unsigned int count, GfxCodeSurf *dst)
{
  return ??$R_StableSortSurfsWithSortOrder_NonAuto@VGfxSortCodeSurfsInterface@@UGfxCodeSurf@@@@YAIPEIBUGfxCodeSurf@@IPEIAU0@@Z(src, count, dst);
}

/*
==============
R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>
==============
*/
__int64 R_StableSortSurfs_All<GfxSortStDrawSurfsInterface,GfxStDrawSurf>(const GfxStDrawSurf *src, unsigned int count, GfxStDrawSurf *dst)
{
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  const GfxStDrawSurf *v12; 
  unsigned int packed_low; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int16 *v17; 
  unsigned int v18; 
  __int64 v19; 
  int v20; 
  int v26; 
  unsigned int v27; 
  unsigned __int16 v31[512]; 

  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 32, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 33, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  if ( !count )
    return 0i64;
  v7 = 0i64;
  v8 = 46080;
  LODWORD(v9) = 0;
  v10 = 0;
  v26 = 0;
  v11 = 0;
  v12 = src;
  do
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurf.cpp", 19, ASSERT_TYPE_ASSERT, "(drawSurf)", (const char *)&queryFormat, "drawSurf") )
      __debugbreak();
    packed_low = LOWORD(v12->drawGroup.packed);
    if ( packed_low != v8 )
    {
      v8 = LOWORD(v12->drawGroup.packed);
      v14 = 0;
      v15 = v10;
      if ( v10 )
      {
        do
        {
          v9 = (v15 + v14) >> 1;
          v16 = v31[4 * v9];
          if ( v16 >= packed_low )
          {
            if ( v16 <= packed_low )
              goto LABEL_28;
            v15 = (v15 + v14) >> 1;
          }
          else
          {
            v14 = v9 + 1;
          }
        }
        while ( v14 != v15 );
      }
      if ( v10 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 55, ASSERT_TYPE_ASSERT, "(binCount < (( sizeof( *array_counter( bins ) ) + 0 ) * 3) / 4)", (const char *)&queryFormat, "binCount < (ARRAY_COUNT( bins ) * 3) / 4") )
        __debugbreak();
      LODWORD(v9) = v10;
      if ( v10 > v15 )
      {
        v17 = &v31[4 * v10];
        do
        {
          v9 = (unsigned int)(v9 - 1);
          v17 -= 4;
          *((_QWORD *)v17 + 1) = *(_QWORD *)&v31[4 * v9];
        }
        while ( (unsigned int)v9 > v15 );
      }
      ++v10;
      v31[4 * (unsigned int)v9] = packed_low;
      v31[4 * (unsigned int)v9 + 1] = v11;
    }
LABEL_28:
    ++v12;
    *(_DWORD *)&v31[4 * (unsigned int)v9 + 2] = v11++;
  }
  while ( v11 < count );
  v27 = v10;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 76, ASSERT_TYPE_ASSERT, "(binCount)", (const char *)&queryFormat, "binCount") )
    __debugbreak();
  v18 = 0;
  do
  {
    v19 = v31[4 * v7 + 1];
    v20 = v31[4 * v7];
    _R15 = dst;
    do
    {
      _RDI = &src[v19];
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurf.cpp", 19, ASSERT_TYPE_ASSERT, "(drawSurf)", (const char *)&queryFormat, "drawSurf") )
        __debugbreak();
      if ( v20 == LOWORD(_RDI->drawGroup.packed) )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups xmm1, xmmword ptr [rdi+20h]
        }
        _RCX = 6i64 * v18++;
        __asm
        {
          vmovups ymmword ptr [r15+rcx*8], ymm0
          vmovups xmmword ptr [r15+rcx*8+20h], xmm1
        }
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 <= *(_DWORD *)&v31[4 * v7 + 2] );
    v7 = (unsigned int)(v26 + 1);
    v26 = v7;
  }
  while ( (_DWORD)v7 != v27 );
  if ( v18 != count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 96, ASSERT_TYPE_ASSERT, "(outCount == count)", (const char *)&queryFormat, "outCount == count") )
    __debugbreak();
  return v18;
}

/*
==============
R_StableSortSurfs_All<GfxSortFlareSurfsInterface,GfxFlareSurf>
==============
*/
__int64 R_StableSortSurfs_All<GfxSortFlareSurfsInterface,GfxFlareSurf>(const GfxFlareSurf *src, unsigned int count, GfxFlareSurf *dst)
{
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  const GfxFlareSurf *v11; 
  Material *material; 
  __int64 p1_low; 
  unsigned __int16 *v14; 
  const char *name; 
  Material *MaterialAtIndex; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned __int16 *v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned __int16 *v24; 
  int v25; 
  Material *v27; 
  __int64 v28; 
  unsigned __int16 *v29; 
  const char *v30; 
  Material *v31; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  unsigned int v38; 
  unsigned __int16 v42[512]; 

  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 32, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !dst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 33, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
    __debugbreak();
  if ( !count )
    return 0i64;
  v7 = 46080;
  v8 = 0;
  v9 = 0;
  v37 = 0;
  LODWORD(v10) = 0;
  v11 = src;
  do
  {
    material = v11->material;
    if ( !v11->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 534, ASSERT_TYPE_ASSERT, "(mtl)", (const char *)&queryFormat, "mtl") )
      __debugbreak();
    p1_low = LOWORD(material->drawSurf.packed.p1);
    if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", material->name) )
      __debugbreak();
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v36) = rgp.materialCount;
      LODWORD(v35) = p1_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    v14 = &rgp.sortedMaterials[p1_low];
    if ( DB_GetMaterialAtIndex(*v14) != material )
    {
      name = material->name;
      if ( (unsigned int)p1_low >= rgp.materialCount )
      {
        LODWORD(v36) = rgp.materialCount;
        LODWORD(v35) = p1_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      MaterialAtIndex = DB_GetMaterialAtIndex(*v14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
        __debugbreak();
    }
    v17 = 0i64;
    if ( (_DWORD)p1_low != v7 )
    {
      v7 = p1_low;
      v18 = 0;
      v19 = v9;
      if ( v9 )
      {
        do
        {
          v10 = (v19 + v18) >> 1;
          v20 = v42[4 * v10];
          if ( v20 >= (unsigned int)p1_low )
          {
            if ( v20 <= (unsigned int)p1_low )
              goto LABEL_39;
            v19 = (v19 + v18) >> 1;
          }
          else
          {
            v18 = v10 + 1;
          }
        }
        while ( v18 != v19 );
      }
      if ( v9 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 55, ASSERT_TYPE_ASSERT, "(binCount < (( sizeof( *array_counter( bins ) ) + 0 ) * 3) / 4)", (const char *)&queryFormat, "binCount < (ARRAY_COUNT( bins ) * 3) / 4") )
        __debugbreak();
      LODWORD(v10) = v9;
      if ( v9 > v19 )
      {
        v21 = &v42[4 * v9];
        do
        {
          v10 = (unsigned int)(v10 - 1);
          v21 -= 4;
          *((_QWORD *)v21 + 1) = *(_QWORD *)&v42[4 * v10];
        }
        while ( (unsigned int)v10 > v19 );
      }
      ++v9;
      v42[4 * (unsigned int)v10] = p1_low;
      v42[4 * (unsigned int)v10 + 1] = v8;
    }
LABEL_39:
    ++v11;
    *(_DWORD *)&v42[4 * (unsigned int)v10 + 2] = v8++;
  }
  while ( v8 < count );
  v38 = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 76, ASSERT_TYPE_ASSERT, "(binCount)", (const char *)&queryFormat, "binCount") )
    __debugbreak();
  v22 = 0;
  do
  {
    v23 = v42[4 * v17 + 1];
    v24 = &v42[4 * v17 + 2];
    v25 = v42[4 * v17];
    do
    {
      _R14 = &src[v23];
      v27 = _R14->material;
      if ( !_R14->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 534, ASSERT_TYPE_ASSERT, "(mtl)", (const char *)&queryFormat, "mtl") )
        __debugbreak();
      v28 = LOWORD(v27->drawSurf.packed.p1);
      if ( (_DWORD)v28 == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", v27->name) )
        __debugbreak();
      if ( (unsigned int)v28 >= rgp.materialCount )
      {
        LODWORD(v36) = rgp.materialCount;
        LODWORD(v35) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v29 = &rgp.sortedMaterials[v28];
      if ( DB_GetMaterialAtIndex(*v29) != v27 )
      {
        v30 = v27->name;
        if ( (unsigned int)v28 >= rgp.materialCount )
        {
          LODWORD(v36) = rgp.materialCount;
          LODWORD(v35) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v31 = DB_GetMaterialAtIndex(*v29);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", v31->name, v30) )
          __debugbreak();
      }
      if ( v25 == (_DWORD)v28 )
      {
        _RCX = dst;
        __asm { vmovups ymm0, ymmword ptr [r14] }
        _RAX = 32i64 * v22++;
        __asm { vmovups ymmword ptr [rax+rcx], ymm0 }
      }
      ++v23;
    }
    while ( v23 <= *(_DWORD *)v24 );
    v17 = (unsigned int)(v37 + 1);
    v37 = v17;
  }
  while ( (_DWORD)v17 != v38 );
  if ( v22 != count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sortsurfs.h", 96, ASSERT_TYPE_ASSERT, "(outCount == count)", (const char *)&queryFormat, "outCount == count") )
    __debugbreak();
  return v22;
}

/*
==============
R_StableSortSurfsWithSortOrder_NonAuto<GfxSortCodeSurfsInterface,GfxCodeSurf>
==============
*/
unsigned int R_StableSortSurfsWithSortOrder_NonAuto<GfxSortCodeSurfsInterface,GfxCodeSurf>(const GfxCodeSurf *src, unsigned int count, GfxCodeSurf *dst)
{
  __int64 v5; 
  __int64 sortKeyEffectAuto; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int outCount; 
  __int64 v12; 
  unsigned int packed_low; 
  unsigned int result; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 

  _RDI = src;
  _RBX = dst;
  v5 = count;
  sortKeyEffectAuto = rgp.world->sortKeyEffectAuto;
  v7 = rgp.mtlSortIndexBeginKey[sortKeyEffectAuto];
  v8 = rgp.mtlSortIndexBeginKey[(unsigned int)(sortKeyEffectAuto + 1)];
  v9 = rgp.mtlSortIndexBeginKey[rgp.world->sortKey2D];
  outCount = R_InsertSortSurfsInRange_GfxSortCodeSurfsInterface_GfxCodeSurf_(src, count, 0, v7, dst, 0);
  if ( (_DWORD)v5 )
  {
    _RCX = _RDI;
    v12 = (unsigned int)v5;
    do
    {
      packed_low = LOWORD(_RCX->drawGroup.packed);
      if ( packed_low >= v7 && packed_low < v8 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymm1, ymmword ptr [rcx+20h]
        }
        _RAX = (unsigned __int64)outCount++ << 6;
        __asm
        {
          vmovups ymmword ptr [rax+rbx], ymm0
          vmovups ymmword ptr [rax+rbx+20h], ymm1
        }
      }
      ++_RCX;
      --v12;
    }
    while ( v12 );
  }
  result = R_InsertSortSurfsInRange_GfxSortCodeSurfsInterface_GfxCodeSurf_(_RDI, v5, v8, v9, _RBX, outCount);
  v18 = result;
  if ( (_DWORD)v5 )
  {
    v19 = v5;
    do
    {
      v20 = LOWORD(_RDI->drawGroup.packed);
      if ( v20 >= v9 && v20 < 0xB400 )
      {
        v21 = v18;
        v22 = _RDI->sortOrder << 16;
        if ( v18 )
        {
          do
          {
            v23 = v21 - 1;
            _RDX = (unsigned __int64)(v21 - 1) << 6;
            if ( v22 >= *(unsigned int *)((char *)&_RBX->sortOrder + _RDX) << 16 )
              break;
            __asm
            {
              vmovups ymm0, ymmword ptr [rdx+rbx]
              vmovups ymm1, ymmword ptr [rdx+rbx+20h]
            }
            _RCX = v21--;
            _RCX <<= 6;
            __asm
            {
              vmovups ymmword ptr [rcx+rbx], ymm0
              vmovups ymmword ptr [rcx+rbx+20h], ymm1
            }
          }
          while ( v23 );
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymm1, ymmword ptr [rdi+20h]
        }
        _RCX = (unsigned __int64)v21 << 6;
        ++v18;
        __asm
        {
          vmovups ymmword ptr [rcx+rbx], ymm0
          vmovups ymmword ptr [rcx+rbx+20h], ymm1
        }
      }
      ++_RDI;
      --v19;
    }
    while ( v19 );
    return v18;
  }
  return result;
}

