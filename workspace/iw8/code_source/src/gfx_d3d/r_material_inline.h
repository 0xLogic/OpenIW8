/*
==============
Material_IsOpaque
==============
*/

bool __fastcall Material_IsOpaque(const Material *material)
{
  return ?Material_IsOpaque@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_GetSortedIndex
==============
*/

unsigned int __fastcall Material_GetSortedIndex(const Material *mtl)
{
  return ?Material_GetSortedIndex@@YAIPEBUMaterial@@@Z(mtl);
}

/*
==============
Material_IsCard
==============
*/

bool __fastcall Material_IsCard(const Material *material)
{
  return ?Material_IsCard@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_HasDisplacement
==============
*/

bool __fastcall Material_HasDisplacement(const Material *material)
{
  return ?Material_HasDisplacement@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_GetTechniqueSet
==============
*/

MaterialTechniqueSet *__fastcall Material_GetTechniqueSet(const Material *material)
{
  return ?Material_GetTechniqueSet@@YAPEAUMaterialTechniqueSet@@PEBUMaterial@@@Z(material);
}

/*
==============
Material_GetTechSetTechnique
==============
*/

const MaterialTechnique *__fastcall Material_GetTechSetTechnique(const MaterialTechniqueSet *techSet, MaterialTechniqueType techType)
{
  return ?Material_GetTechSetTechnique@@YAPEBUMaterialTechnique@@PEBUMaterialTechniqueSet@@W4MaterialTechniqueType@@@Z(techSet, techType);
}

/*
==============
Material_GetPrepassType
==============
*/

unsigned int __fastcall Material_GetPrepassType(const Material *material)
{
  return ?Material_GetPrepassType@@YAIPEBUMaterial@@@Z(material);
}

/*
==============
MaterialTechnique_TypeIsVelocity
==============
*/

bool __fastcall MaterialTechnique_TypeIsVelocity(MaterialTechniqueType techniqueType)
{
  return ?MaterialTechnique_TypeIsVelocity@@YA_NW4MaterialTechniqueType@@@Z(techniqueType);
}

/*
==============
Material_IsVolumetric
==============
*/

bool __fastcall Material_IsVolumetric(const Material *material)
{
  return ?Material_IsVolumetric@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_IsAlphaTest
==============
*/

bool __fastcall Material_IsAlphaTest(const Material *material)
{
  return ?Material_IsAlphaTest@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_GetTechnique
==============
*/

const MaterialTechnique *__fastcall Material_GetTechnique(const Material *material, MaterialTechniqueType techType)
{
  return ?Material_GetTechnique@@YAPEBUMaterialTechnique@@PEBUMaterial@@W4MaterialTechniqueType@@@Z(material, techType);
}

/*
==============
Material_TechSetHasTechnique
==============
*/

bool __fastcall Material_TechSetHasTechnique(const MaterialTechniqueSet *techSet, MaterialTechniqueType techType)
{
  return ?Material_TechSetHasTechnique@@YA_NPEBUMaterialTechniqueSet@@W4MaterialTechniqueType@@@Z(techSet, techType);
}

/*
==============
Material_IsStandardShadowcaster
==============
*/

bool __fastcall Material_IsStandardShadowcaster(const Material *material)
{
  return ?Material_IsStandardShadowcaster@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_HasDistortion
==============
*/

bool __fastcall Material_HasDistortion(const Material *material)
{
  return ?Material_HasDistortion@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_IsDoubleSided
==============
*/

bool __fastcall Material_IsDoubleSided(const Material *material)
{
  return ?Material_IsDoubleSided@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Material_HasTechnique
==============
*/

bool __fastcall Material_HasTechnique(const Material *material, MaterialTechniqueType techType)
{
  return ?Material_HasTechnique@@YA_NPEBUMaterial@@W4MaterialTechniqueType@@@Z(material, techType);
}

/*
==============
Material_HasAnimatedOpacity
==============
*/

bool __fastcall Material_HasAnimatedOpacity(const Material *material)
{
  return ?Material_HasAnimatedOpacity@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
MaterialTechnique_supportsPrecompiledFeature
==============
*/

bool __fastcall MaterialTechnique_supportsPrecompiledFeature(unsigned __int8 precompiledIndex, MaterialConstantFeature feature)
{
  return ?MaterialTechnique_supportsPrecompiledFeature@@YA_NEW4MaterialConstantFeature@@@Z(precompiledIndex, feature);
}

/*
==============
Material_GetCullType
==============
*/

unsigned __int8 __fastcall Material_GetCullType(const Material *material)
{
  return ?Material_GetCullType@@YAEPEBUMaterial@@@Z(material);
}

/*
==============
Material_FromHandle
==============
*/

const Material *__fastcall Material_FromHandle(Material *handle)
{
  return ?Material_FromHandle@@YAPEBUMaterial@@PEAU1@@Z(handle);
}

/*
==============
Material_FromHandle
==============
*/
Material *Material_FromHandle(Material *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !handle->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*handle->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  return handle;
}

/*
==============
Material_GetSortedIndex
==============
*/
__int64 Material_GetSortedIndex(const Material *mtl)
{
  __int64 p1_low; 
  unsigned __int16 *v3; 
  const char *name; 
  Material *MaterialAtIndex; 
  __int64 v7; 
  __int64 v8; 

  if ( !mtl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 534, ASSERT_TYPE_ASSERT, "(mtl)", (const char *)&queryFormat, "mtl") )
    __debugbreak();
  p1_low = LOWORD(mtl->drawSurf.packed.p1);
  if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", mtl->name) )
    __debugbreak();
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(v7) = p1_low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v7, rgp.materialCount) )
      __debugbreak();
  }
  v3 = &rgp.sortedMaterials[p1_low];
  if ( DB_GetMaterialAtIndex(*v3) != mtl )
  {
    name = mtl->name;
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v8) = rgp.materialCount;
      LODWORD(v7) = p1_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    MaterialAtIndex = DB_GetMaterialAtIndex(*v3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
      __debugbreak();
  }
  return (unsigned int)p1_low;
}

/*
==============
Material_GetCullType
==============
*/
__int64 Material_GetCullType(const Material *material)
{
  MaterialTechniqueSet *techniqueSet; 
  char v3; 
  MaterialTechniqueSet *v4; 
  unsigned __int8 v5; 
  MaterialTechniqueSet *v6; 
  unsigned __int8 v7; 
  MaterialTechniqueSet *v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  __int64 result; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 662, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 663, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  techniqueSet = material->techniqueSet;
  v3 = 95;
  if ( (techniqueSet->flags & 0xE006) == 0 )
    v3 = 127;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  v4 = material->techniqueSet;
  v5 = v3 & 0xFE;
  if ( (v4->flags & 1) == 0 )
    v5 = v3;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 706, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  v6 = material->techniqueSet;
  v7 = v5 & 0xB0;
  if ( (v6->flags & 0x8000) == 0 )
    v7 = v5;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 757, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  v8 = material->techniqueSet;
  v9 = v7 & 0xF7;
  if ( (v8->flags & 0x1000000000i64) != 0 )
    v9 = v7;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 727, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  v10 = v9 & 0xEF;
  if ( (material->techniqueSet->flags & 0x10000) != 0 )
    v10 = v9;
  result = v10 & 0xBF;
  if ( (material->materialType & 0xA0000) != 655360 )
    return v10;
  return result;
}

/*
==============
Material_TechSetHasTechnique
==============
*/
bool Material_TechSetHasTechnique(const MaterialTechniqueSet *techSet, MaterialTechniqueType techType)
{
  int v6; 

  if ( (unsigned int)techType >= TECHNIQUE_COUNT )
  {
    v6 = 195;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 473, ASSERT_TYPE_ASSERT, "(unsigned)( techType ) < (unsigned)( TECHNIQUE_COUNT )", "techType doesn't index TECHNIQUE_COUNT\n\t%i not in [0, %i)", techType, v6) )
      __debugbreak();
  }
  if ( techType >> 6 >= TECHNIQUE_DEPTH_PREPASS_VELRGD_VRS_1X1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 409, ASSERT_TYPE_ASSERT, "(elemIndex < TechniqueMask::NUM_TECHNIQUE_MASK_ELEMS)", (const char *)&queryFormat, "elemIndex < TechniqueMask::NUM_TECHNIQUE_MASK_ELEMS") )
    __debugbreak();
  return ((1i64 << (techType & 0x3F)) & techSet->techniqueMask.mask[techType >> 6]) != 0;
}

/*
==============
Material_HasDistortion
==============
*/
bool Material_HasDistortion(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 654, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x800000000i64) != 0;
}

/*
==============
Material_IsVolumetric
==============
*/
bool Material_IsVolumetric(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 622, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 623, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x200) != 0;
}

/*
==============
Material_GetTechSetTechnique
==============
*/
const MaterialTechnique *Material_GetTechSetTechnique(const MaterialTechniqueSet *techSet, MaterialTechniqueType techType)
{
  MaterialTechniqueType v2; 
  MaterialTechnique **maskedTechniques; 
  int v5; 
  int v6; 
  __int64 v7; 
  MaterialTechniqueType v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  MaterialTechniqueType v13; 

  v2 = techType;
  if ( !Material_TechSetHasTechnique(techSet, techType) )
    return 0i64;
  maskedTechniques = techSet->maskedTechniques;
  if ( (unsigned int)v2 >= TECHNIQUE_COUNT )
  {
    v11 = 195;
    v9 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 482, ASSERT_TYPE_ASSERT, "(unsigned)( techType ) < (unsigned)( TECHNIQUE_COUNT )", "techType doesn't index TECHNIQUE_COUNT\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
    LODWORD(v12) = 195;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 473, ASSERT_TYPE_ASSERT, "(unsigned)( techType ) < (unsigned)( TECHNIQUE_COUNT )", "techType doesn't index TECHNIQUE_COUNT\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v5 = v2 >> 6;
  if ( v2 >> 6 >= TECHNIQUE_DEPTH_PREPASS_VELRGD_VRS_1X1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 409, ASSERT_TYPE_ASSERT, "(elemIndex < TechniqueMask::NUM_TECHNIQUE_MASK_ELEMS)", (const char *)&queryFormat, "elemIndex < TechniqueMask::NUM_TECHNIQUE_MASK_ELEMS") )
    __debugbreak();
  if ( ((1i64 << (v2 & 0x3F)) & techSet->techniqueMask.mask[v5]) == 0 )
  {
    v13 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 484, ASSERT_TYPE_ASSERT, "(Material_TechSetHasTechnique( techSet, techType ))", "%s\n\tTechnique set %s is missing technique type %d", "Material_TechSetHasTechnique( techSet, techType )", techSet->name, v13) )
      __debugbreak();
  }
  v6 = 0;
  if ( v5 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 420, ASSERT_TYPE_ASSERT, "(elemIndex < TechniqueMask::NUM_TECHNIQUE_MASK_ELEMS)", (const char *)&queryFormat, "elemIndex < TechniqueMask::NUM_TECHNIQUE_MASK_ELEMS") )
    __debugbreak();
  if ( v5 > 0i64 )
  {
    v7 = 0i64;
    LOBYTE(v2) = v2 - ((_BYTE)v5 << 6);
    do
      v6 += __popcnt(techSet->techniqueMask.mask[v7++]);
    while ( v7 < v5 );
  }
  return *(&maskedTechniques[v6] + (unsigned int)__popcnt(~(-1i64 << v2) & techSet->techniqueMask.mask[v5]));
}

/*
==============
Material_HasAnimatedOpacity
==============
*/
bool Material_HasAnimatedOpacity(const Material *material)
{
  unsigned __int64 flags; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 676, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 677, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  flags = material->techniqueSet->flags;
  return (flags & 0x106) != 0 || (flags & 0xC0) == 0xC0;
}

/*
==============
Material_IsStandardShadowcaster
==============
*/
bool Material_IsStandardShadowcaster(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 742, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 743, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x1000) != 0;
}

/*
==============
Material_GetTechniqueSet
==============
*/
MaterialTechniqueSet *Material_GetTechniqueSet(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", material->name) )
    __debugbreak();
  return material->techniqueSet;
}

/*
==============
Material_HasTechnique
==============
*/
bool Material_HasTechnique(const Material *material, MaterialTechniqueType techType)
{
  const MaterialTechniqueSet *TechniqueSet; 

  TechniqueSet = Material_GetTechniqueSet(material);
  if ( !TechniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  return Material_TechSetHasTechnique(TechniqueSet, techType);
}

/*
==============
MaterialTechnique_TypeIsVelocity
==============
*/
bool MaterialTechnique_TypeIsVelocity(MaterialTechniqueType techniqueType)
{
  bool result; 

  switch ( techniqueType % 39 )
  {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
Material_GetTechnique
==============
*/
const MaterialTechnique *Material_GetTechnique(const Material *material, MaterialTechniqueType techType)
{
  const MaterialTechniqueSet *TechniqueSet; 

  TechniqueSet = Material_GetTechniqueSet(material);
  if ( !TechniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  return Material_GetTechSetTechnique(TechniqueSet, techType);
}

/*
==============
MaterialTechnique_supportsPrecompiledFeature
==============
*/
bool MaterialTechnique_supportsPrecompiledFeature(unsigned __int8 precompiledIndex, MaterialConstantFeature feature)
{
  int v5; 
  int v6; 

  if ( precompiledIndex >= 0x76u )
  {
    v6 = 118;
    v5 = precompiledIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 192, ASSERT_TYPE_ASSERT, "(unsigned)( precompiledIndex ) < (unsigned)( MTL_CONSTANT_LAYOUT_COUNT )", "precompiledIndex doesn't index MTL_CONSTANT_LAYOUT_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (feature & s_precompiledIndexToFeatures[precompiledIndex]) != 0;
}

/*
==============
Material_IsOpaque
==============
*/
bool Material_IsOpaque(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 646, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 647, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x20) != 0;
}

/*
==============
Material_GetPrepassType
==============
*/
__int64 Material_GetPrepassType(const Material *material)
{
  MaterialTechniqueSet *techniqueSet; 

  techniqueSet = material->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 546, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  if ( (techniqueSet->techniqueMask.mask[0] & 1) != 0 )
    return (techniqueSet->flags & 0x1000) == 0;
  else
    return 2i64;
}

/*
==============
Material_HasDisplacement
==============
*/
bool Material_HasDisplacement(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 734, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 735, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x3C0000) != 0i64;
}

/*
==============
Material_IsAlphaTest
==============
*/
bool Material_IsAlphaTest(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 692, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 693, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x8080) != 0;
}

/*
==============
Material_IsCard
==============
*/
bool Material_IsCard(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 705, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 706, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (material->techniqueSet->flags & 0x8000) != 0;
}

/*
==============
Material_IsDoubleSided
==============
*/
bool Material_IsDoubleSided(const Material *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 718, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 719, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return material->techniqueSet->flags & 1;
}

