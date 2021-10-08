/*
==============
GfxBspSurfIter::IsDone
==============
*/

bool __fastcall GfxBspSurfIter::IsDone(GfxBspSurfIter *this)
{
  return ?IsDone@GfxBspSurfIter@@QEBA_NXZ(this);
}

/*
==============
GfxBspSurfIter::GetPrimarySortKey
==============
*/

unsigned int __fastcall GfxBspSurfIter::GetPrimarySortKey(GfxBspSurfIter *this)
{
  return ?GetPrimarySortKey@GfxBspSurfIter@@QEBAIXZ(this);
}

/*
==============
GfxBspSurfIter::SkipToNextDrawGroup
==============
*/

void __fastcall GfxBspSurfIter::SkipToNextDrawGroup(GfxBspSurfIter *this)
{
  ?SkipToNextDrawGroup@GfxBspSurfIter@@QEAAXXZ(this);
}

/*
==============
GfxBspSurfIter::GetDrawGroupSetup
==============
*/

GfxDrawGroupSetup __fastcall GfxBspSurfIter::GetDrawGroupSetup(GfxBspSurfIter *this)
{
  return ?GetDrawGroupSetup@GfxBspSurfIter@@QEBA?ATGfxDrawGroupSetup@@XZ(this);
}

/*
==============
GfxBspSurfIter::GetDrawGroupSetup
==============
*/
_WORD *GfxBspSurfIter::GetDrawGroupSetup(GfxBspSurfIter *this, _WORD *a2)
{
  unsigned __int64 v3; 
  int v6; 
  int v9; 
  _WORD *result; 

  v3 = *this->current;
  if ( ((v3 >> 18) & 0x3FFFF) >= rgp.world->models->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 47, ASSERT_TYPE_ASSERT, "(unsigned)( firstSurfIndex ) < (unsigned)( rgp.world->models[0].surfaceCount )", "firstSurfIndex doesn't index rgp.world->models[0].surfaceCount\n\t%i not in [0, %i)", (v3 >> 18) & 0x3FFFF, rgp.world->models->surfaceCount) )
    __debugbreak();
  _RDX = 2 * ((v3 >> 18) & 0x3FFFF);
  _RCX = rgp.world->surfaces.surfaceMaterials;
  v6 = 0x10000;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+rdx*8]
    vpextrq rdx, xmm0, 1
  }
  *a2 = _RDX;
  if ( ((((v3 >> 54) & 0xF) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
    v6 = 0;
  v9 = (((_RDX >> 22) & 1) << 17) | v6 & 0xFC01FFFF | *(_DWORD *)a2 & 0xFC00FFFF;
  result = a2;
  *(_DWORD *)a2 = v9;
  return result;
}

/*
==============
GfxBspSurfIter::IsDone
==============
*/
bool GfxBspSurfIter::IsDone(GfxBspSurfIter *this)
{
  const unsigned __int64 *current; 
  const unsigned __int64 *end; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 73, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  return this->current >= this->end || *this->current == -1i64;
}

/*
==============
GfxBspSurfIter::SkipToNextDrawGroup
==============
*/
void GfxBspSurfIter::SkipToNextDrawGroup(GfxBspSurfIter *this)
{
  const unsigned __int64 *current; 
  const unsigned __int64 *end; 
  int v4; 
  unsigned __int64 v5; 
  const unsigned __int64 *v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  current = this->current;
  end = this->end;
  if ( current > end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 73, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", current, end) )
    __debugbreak();
  if ( (this->current >= this->end || *this->current == -1i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 85, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
    __debugbreak();
  GfxBspSurfIter::GetDrawGroupSetup(this);
  ++this->current;
  if ( !GfxBspSurfIter::IsDone(this) )
  {
    v4 = v17;
    do
    {
      while ( 1 )
      {
        v5 = *this->current;
        if ( (v5 & 0x400000000000000i64) != 0 && (v5 & 0x800000000000000i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 103, ASSERT_TYPE_ASSERT, "(!header.fields.restartPrepass || header.fields.restartForward)", (const char *)&queryFormat, "!header.fields.restartPrepass || header.fields.restartForward") )
          __debugbreak();
        v6 = this->current;
        if ( (v5 & 0x800000000000000i64) != 0 )
          break;
        this->current = v6 + 1;
        if ( GfxBspSurfIter::IsDone(this) )
          return;
      }
      v7 = *v6;
      v8 = (*v6 >> 18) & 0x3FFFF;
      if ( (unsigned int)v8 >= rgp.world->models->surfaceCount )
      {
        LODWORD(v16) = rgp.world->models->surfaceCount;
        LODWORD(v15) = (*v6 >> 18) & 0x3FFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 47, ASSERT_TYPE_ASSERT, "(unsigned)( firstSurfIndex ) < (unsigned)( rgp.world->models[0].surfaceCount )", "firstSurfIndex doesn't index rgp.world->models[0].surfaceCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      _RDX = 2i64 * (unsigned int)v8;
      _RCX = rgp.world->surfaces.surfaceMaterials;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+rdx*8]
        vpextrq rdx, xmm0, 1
      }
      v13 = 0x10000;
      v14 = (unsigned __int16)(v4 ^ _RDX) ^ v4;
      if ( ((((v7 >> 54) & 0xF) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
        v13 = 0;
      v4 = v13 | v14 & 0xFC00FFFF | (((_RDX >> 22) & 1) << 17);
      if ( v4 != v17 )
        break;
      ++this->current;
    }
    while ( !GfxBspSurfIter::IsDone(this) );
  }
}

/*
==============
GfxBspSurfIter::GetPrimarySortKey
==============
*/
__int64 GfxBspSurfIter::GetPrimarySortKey(GfxBspSurfIter *this)
{
  unsigned __int64 v1; 

  v1 = (*this->current >> 18) & 0x3FFFF;
  if ( (unsigned int)v1 >= rgp.world->models->surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( firstSurfIndex ) < (unsigned)( rgp.world->models[0].surfaceCount )", "firstSurfIndex doesn't index rgp.world->models[0].surfaceCount\n\t%i not in [0, %i)", (*this->current >> 18) & 0x3FFFF, rgp.world->models->surfaceCount) )
    __debugbreak();
  _RDX = 2i64 * (unsigned int)v1;
  _RCX = rgp.world->surfaces.surfaceMaterials;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+rdx*8]
    vpextrq rax, xmm0, 1
  }
  return (_RAX >> 27) & 0x3F;
}

