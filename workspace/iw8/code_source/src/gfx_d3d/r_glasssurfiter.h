/*
==============
GfxGlassSurfIter::GetDrawGroupSetup
==============
*/

GfxDrawGroupSetup __fastcall GfxGlassSurfIter::GetDrawGroupSetup(GfxGlassSurfIter *this)
{
  return ?GetDrawGroupSetup@GfxGlassSurfIter@@QEBA?ATGfxDrawGroupSetup@@XZ(this);
}

/*
==============
GfxGlassSurfIter::SkipToNextDrawGroup
==============
*/

void __fastcall GfxGlassSurfIter::SkipToNextDrawGroup(GfxGlassSurfIter *this)
{
  ?SkipToNextDrawGroup@GfxGlassSurfIter@@QEAAXXZ(this);
}

/*
==============
GfxGlassSurfIter::GetDrawGroupSetup
==============
*/
_DWORD *GfxGlassSurfIter::GetDrawGroupSetup(GfxGlassSurfIter *this, _DWORD *a2)
{
  const GfxGlassSurf *current; 
  unsigned __int16 materialSortedIndex; 
  unsigned int materialCount; 
  __int64 v6; 
  Material *MaterialAtIndex; 
  unsigned __int64 p1_low; 
  _DWORD *result; 
  __int64 v10; 
  __int64 v11; 

  current = this->current;
  *a2 = 3670016;
  materialSortedIndex = current->materialSortedIndex;
  materialCount = rgp.materialCount;
  *(_WORD *)a2 = materialSortedIndex;
  if ( (unsigned __int16)*a2 >= materialCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", (unsigned __int16)*a2, materialCount) )
      __debugbreak();
    materialCount = rgp.materialCount;
  }
  v6 = *(unsigned __int16 *)a2;
  if ( (unsigned int)v6 >= materialCount )
  {
    LODWORD(v11) = materialCount;
    LODWORD(v10) = *(unsigned __int16 *)a2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[v6]);
  *a2 &= ~0x20000u;
  p1_low = LODWORD(MaterialAtIndex->drawSurf.packed.p1);
  result = a2;
  *a2 |= ((p1_low >> 22) & 1) << 17;
  return result;
}

/*
==============
GfxGlassSurfIter::SkipToNextDrawGroup
==============
*/
void GfxGlassSurfIter::SkipToNextDrawGroup(GfxGlassSurfIter *this)
{
  const GfxGlassSurf *current; 
  const GfxGlassSurf *end; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  if ( this->current == this->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 58, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
    __debugbreak();
  GfxGlassSurfIter::GetDrawGroupSetup(this);
  for ( ++this->current; !GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone(this); ++this->current )
  {
    v4 = *(_WORD *)this->current;
    if ( (unsigned int)v4 >= rgp.materialCount )
    {
      LODWORD(v6) = rgp.materialCount;
      LODWORD(v5) = this->current->materialSortedIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
      if ( (unsigned int)v4 >= rgp.materialCount )
      {
        LODWORD(v6) = rgp.materialCount;
        LODWORD(v5) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
    }
    if ( ((unsigned int)v4 | (((LODWORD(DB_GetMaterialAtIndex(rgp.sortedMaterials[v4])->drawSurf.packed.p1) >> 22) & 1 | 0x1C) << 17)) != v7 )
      break;
  }
}

