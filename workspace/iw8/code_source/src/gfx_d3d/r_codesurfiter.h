/*
==============
GfxCodeSurfIter::SkipToNextDrawGroup
==============
*/

void __fastcall GfxCodeSurfIter::SkipToNextDrawGroup(GfxCodeSurfIter *this)
{
  ?SkipToNextDrawGroup@GfxCodeSurfIter@@QEAAXXZ(this);
}

/*
==============
GfxCodeSurfIter::SkipToNextDrawGroup
==============
*/
void GfxCodeSurfIter::SkipToNextDrawGroup(GfxCodeSurfIter *this)
{
  const GfxCodeSurf *current; 
  const GfxCodeSurf *end; 
  GfxDrawGroupSetup v4; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  if ( this->current == this->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurfiter.h", 55, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
    __debugbreak();
  v4.fields = this->current->drawGroup.fields;
  for ( ++this->current; !GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone(this); ++this->current )
  {
    if ( this->current->drawGroup.packed != v4.packed )
      break;
  }
}

