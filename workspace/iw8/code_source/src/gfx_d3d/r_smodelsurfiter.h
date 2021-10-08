/*
==============
GfxSModelSurfIter::SkipToNextDrawGroup
==============
*/

void __fastcall GfxSModelSurfIter::SkipToNextDrawGroup(GfxSModelSurfIter *this)
{
  ?SkipToNextDrawGroup@GfxSModelSurfIter@@QEAAXXZ(this);
}

/*
==============
GfxSModelSurfIter::SkipToNextDrawGroup
==============
*/
void GfxSModelSurfIter::SkipToNextDrawGroup(GfxSModelSurfIter *this)
{
  const GfxSModelSurf *current; 
  const GfxSModelSurf *end; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  if ( this->current == this->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 72, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
    __debugbreak();
  v4 = ((this->current->header.array[2] & 1) << 17) | v6 & 0xFC000000 | this->current->header.fields.materialSortedIndex;
  this->current = (const GfxSModelSurf *)((char *)this->current + 4 * this->current->header.fields.visDataRefCountLessOne + 12);
  if ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(this) )
  {
    v5 = v6;
    do
    {
      v5 = ((this->current->header.array[2] & 1) << 17) | this->current->header.fields.materialSortedIndex | v5 & 0xFC000000;
      if ( v5 != v4 )
        break;
      this->current = (const GfxSModelSurf *)((char *)this->current + 4 * this->current->header.fields.visDataRefCountLessOne + 12);
    }
    while ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(this) );
  }
}

