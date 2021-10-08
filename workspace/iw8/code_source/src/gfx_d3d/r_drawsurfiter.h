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
  int v5; 
  int v8; 
  int v9; 
  int v11; 
  int v14; 
  int v15; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  if ( this->current == this->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurfiter.h", 55, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
    __debugbreak();
  _R9 = this->current;
  v5 = 0x10000;
  __asm
  {
    vmovups xmm0, xmmword ptr [r9]
    vpextrq r8, xmm0, 1
  }
  if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
    v5 = 0;
  this->current = _R9 + 1;
  v8 = v5 | ((unsigned __int16)(v15 ^ _R8) ^ v15) & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
  if ( !GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(this) )
  {
    v9 = v15;
    do
    {
      _R9 = this->current;
      v11 = 0x10000;
      __asm
      {
        vmovups xmm0, xmmword ptr [r9]
        vpextrq r8, xmm0, 1
      }
      v14 = (unsigned __int16)(v9 ^ _R8) ^ v9;
      if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
        v11 = 0;
      v9 = v11 | v14 & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
      if ( v9 != v8 )
        break;
      this->current = _R9 + 1;
    }
    while ( !GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(this) );
  }
}

