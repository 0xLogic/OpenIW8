/*
==============
R_GetVertexDeclTypeSubdiv
==============
*/

MaterialVertexDeclType __fastcall R_GetVertexDeclTypeSubdiv(MaterialGeometryType materialType, unsigned __int8 precompiledIndex, bool isSkinned)
{
  return ?R_GetVertexDeclTypeSubdiv@@YA?AW4MaterialVertexDeclType@@W4MaterialGeometryType@@E_N@Z(materialType, precompiledIndex, isSkinned);
}

/*
==============
R_PromoteVertexDeclToSelfVisibility
==============
*/

MaterialVertexDeclType __fastcall R_PromoteVertexDeclToSelfVisibility(MaterialGeometryType materialType, MaterialVertexDeclType vertDeclType)
{
  return ?R_PromoteVertexDeclToSelfVisibility@@YA?AW4MaterialVertexDeclType@@W4MaterialGeometryType@@W41@@Z(materialType, vertDeclType);
}

/*
==============
R_GetVertexDeclTypeSubdiv
==============
*/
__int64 R_GetVertexDeclTypeSubdiv(MaterialGeometryType materialType, unsigned __int8 precompiledIndex, bool isSkinned)
{
  unsigned __int16 v3; 
  __int64 result; 

  switch ( materialType & 0xFFF8FFFF )
  {
    case 0x88001u:
    case 0x88011u:
      v3 = 13;
      if ( !MaterialTechnique_supportsPrecompiledFeature(precompiledIndex, MTL_CONSTANT_FEATURE_LPROBE) )
        goto LABEL_13;
      result = 18i64;
      break;
    case 0x88002u:
      result = (unsigned __int16)(!isSkinned + 11);
      break;
    case 0x88004u:
      result = 10i64;
      break;
    case 0x88008u:
    case 0x88018u:
      result = 14i64;
      break;
    case 0x8800Cu:
      result = 15i64;
      break;
    case 0x88010u:
      v3 = 9;
      if ( !MaterialTechnique_supportsPrecompiledFeature(precompiledIndex, MTL_CONSTANT_FEATURE_LPROBE) )
        goto LABEL_13;
      result = 16i64;
      break;
    case 0x88014u:
      v3 = 10;
      if ( !MaterialTechnique_supportsPrecompiledFeature(precompiledIndex, MTL_CONSTANT_FEATURE_LPROBE) )
        goto LABEL_13;
      result = 17i64;
      break;
    default:
      v3 = 9;
LABEL_13:
      result = v3;
      break;
  }
  return result;
}

/*
==============
R_PromoteVertexDeclToSelfVisibility
==============
*/
__int64 R_PromoteVertexDeclToSelfVisibility(MaterialGeometryType materialType, MaterialVertexDeclType vertDeclType)
{
  unsigned __int32 v2; 
  unsigned __int32 v3; 
  unsigned __int32 v4; 
  unsigned __int32 v5; 
  unsigned __int32 v7; 
  unsigned __int32 v8; 

  if ( vertDeclType == VERTDECL_PACKED )
  {
    v2 = materialType & 0xFFF8FFFF;
    if ( v2 <= 0x80034 )
    {
      if ( v2 == 524340 )
        return 6i64;
      v3 = v2 - 524304;
      if ( v3 )
      {
        v4 = v3 - 4;
        if ( v4 )
        {
          v5 = v4 - 4;
          if ( v5 )
          {
            if ( v5 == 24 )
              return 6i64;
            return (unsigned __int16)vertDeclType;
          }
        }
      }
      return 5i64;
    }
    v7 = v2 - 557072;
    if ( !v7 )
      return 5i64;
    v8 = v7 - 4;
    if ( !v8 || v8 == 4 )
      return 5i64;
  }
  return (unsigned __int16)vertDeclType;
}

