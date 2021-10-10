/*
==============
GfxDrawSurfIter::SkipToNextDrawGroup
==============
*/

void __fastcall GfxDrawSurfIter::SkipToNextDrawGroup(GfxDrawSurfIter *this)
{
  ?SkipToNextDrawGroup@GfxDrawSurfIter@@QEAAXXZ(this);
}

/*
==============
GfxDrawSurfIter::SkipToNextDrawGroup
==============
*/
void GfxDrawSurfIter::SkipToNextDrawGroup(GfxDrawSurfIter *this)
{
  const GfxDrawSurf *current; 
  const GfxDrawSurf *end; 
  int v4; 
  int v7; 
  int v8; 
  int v9; 
  int v12; 
  int v13; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  if ( this->current == this->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurfiter.h", 55, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
    __debugbreak();
  v4 = 0x10000;
  _XMM0 = this->current->fields;
  __asm { vpextrq r8, xmm0, 1 }
  if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
    v4 = 0;
  ++this->current;
  v7 = v4 | ((unsigned __int16)(v13 ^ _R8) ^ v13) & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
  if ( !GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(this) )
  {
    v8 = v13;
    do
    {
      v9 = 0x10000;
      _XMM0 = this->current->fields;
      __asm { vpextrq r8, xmm0, 1 }
      v12 = (unsigned __int16)(v8 ^ _R8) ^ v8;
      if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
        v9 = 0;
      v8 = v9 | v12 & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
      if ( v8 != v7 )
        break;
      ++this->current;
    }
    while ( !GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(this) );
  }
}

