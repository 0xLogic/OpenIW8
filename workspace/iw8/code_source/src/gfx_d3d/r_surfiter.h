/*
==============
GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone
==============
*/

bool __fastcall GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone(GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList> *this)
{
  return ?IsDone@?$GfxSurfIter@UGfxStDrawSurf@@UGfxStDrawSurfList@@@@QEBA_NXZ(this);
}

/*
==============
GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone
==============
*/

bool __fastcall GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone(GfxSurfIter<GfxCodeSurf,GfxCodeSurfList> *this)
{
  return ?IsDone@?$GfxSurfIter@UGfxCodeSurf@@UGfxCodeSurfList@@@@QEBA_NXZ(this);
}

/*
==============
GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::GoToMark
==============
*/

void __fastcall GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::GoToMark(GfxSurfIter<GfxSModelSurf,GfxSModelSurfList> *this)
{
  ?GoToMark@?$GfxSurfIter@UGfxSModelSurf@@UGfxSModelSurfList@@@@QEAAXXZ(this);
}

/*
==============
GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone
==============
*/

bool __fastcall GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(GfxSurfIter<GfxSModelSurf,GfxSModelSurfList> *this)
{
  return ?IsDone@?$GfxSurfIter@UGfxSModelSurf@@UGfxSModelSurfList@@@@QEBA_NXZ(this);
}

/*
==============
GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone
==============
*/

bool __fastcall GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone(GfxSurfIter<GfxGlassSurf,GfxGlassSurfList> *this)
{
  return ?IsDone@?$GfxSurfIter@UGfxGlassSurf@@UGfxGlassSurfList@@@@QEBA_NXZ(this);
}

/*
==============
GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone
==============
*/

bool __fastcall GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(GfxSurfIter<GfxDrawSurf,GfxDrawSurfList> *this)
{
  return ?IsDone@?$GfxSurfIter@TGfxDrawSurf@@UGfxDrawSurfList@@@@QEBA_NXZ(this);
}

/*
==============
GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone
==============
*/
bool GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(GfxSurfIter<GfxDrawSurf,GfxDrawSurfList> *this)
{
  const GfxDrawSurf *current; 
  const GfxDrawSurf *end; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  return this->current == this->end;
}

/*
==============
GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone
==============
*/
bool GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone(GfxSurfIter<GfxCodeSurf,GfxCodeSurfList> *this)
{
  const GfxCodeSurf *current; 
  const GfxCodeSurf *end; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  return this->current == this->end;
}

/*
==============
GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone
==============
*/
bool GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone(GfxSurfIter<GfxGlassSurf,GfxGlassSurfList> *this)
{
  const GfxGlassSurf *current; 
  const GfxGlassSurf *end; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  return this->current == this->end;
}

/*
==============
GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone
==============
*/
bool GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(GfxSurfIter<GfxSModelSurf,GfxSModelSurfList> *this)
{
  const GfxSModelSurf *current; 
  const GfxSModelSurf *end; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  return this->current == this->end;
}

/*
==============
GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone
==============
*/
bool GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone(GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList> *this)
{
  const GfxStDrawSurf *current; 
  const GfxStDrawSurf *end; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  return this->current == this->end;
}

/*
==============
GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::GoToMark
==============
*/
void GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::GoToMark(GfxSurfIter<GfxSModelSurf,GfxSModelSurfList> *this)
{
  const GfxSModelSurf *mark; 

  if ( !this->mark && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 100, ASSERT_TYPE_ASSERT, "( mark ) != ( nullptr )", "%s != %s\n\t%p, %p", "mark", "nullptr", NULL, NULL) )
    __debugbreak();
  mark = this->mark;
  if ( mark > this->end )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 101, ASSERT_TYPE_ASSERT, "( mark ) <= ( end )", "%s <= %s\n\t%p, %p", "mark", "end", mark, this->end) )
      __debugbreak();
    mark = this->mark;
  }
  this->current = mark;
}

