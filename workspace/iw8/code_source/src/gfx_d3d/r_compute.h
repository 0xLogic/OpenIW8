/*
==============
ComputeFence::IsPending
==============
*/

bool __fastcall ComputeFence::IsPending(ComputeFence *this)
{
  return ?IsPending@ComputeFence@@QEBA_NXZ(this);
}

/*
==============
ComputeFence::IsPending
==============
*/
char ComputeFence::IsPending(ComputeFence *this)
{
  unsigned int count; 

  count = this->count;
  if ( !this->address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 162, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( count > this->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 163, ASSERT_TYPE_ASSERT, "(step <= count)", "%s\n\tcpu waiting for a gpu fence that was never queued on the gpu", "step <= count") )
    __debugbreak();
  if ( *this->address < count )
    return 1;
  if ( *this->address > this->count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 171, ASSERT_TYPE_ASSERT, "(*address <= count)", "%s\n\tcompute fence was incremented more times on gpu than expected by cpu", "*address <= count") )
    __debugbreak();
  return 0;
}

