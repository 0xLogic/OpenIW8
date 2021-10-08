/*
==============
StreamDistance::StreamDistance
==============
*/

void __fastcall StreamDistance::StreamDistance(StreamDistance *this)
{
  ??0StreamDistance@@QEAA@XZ(this);
}

/*
==============
StreamDistance::StreamDistance
==============
*/

void __fastcall StreamDistance::StreamDistance(StreamDistance *this, float distance)
{
  ??0StreamDistance@@QEAA@M@Z(this, distance);
}

/*
==============
StreamDistance::StreamDistance
==============
*/
void StreamDistance::StreamDistance(StreamDistance *this)
{
  this->mValue = -1;
}

/*
==============
StreamDistance::StreamDistance
==============
*/

void __fastcall StreamDistance::StreamDistance(StreamDistance *this, double distance)
{
  unsigned int v3; 
  int v4; 

  __asm { vmovss  [rsp+38h+arg_8], xmm1 }
  this->mValue = -1;
  __asm { vmovss  [rsp+38h+arg_0], xmm1 }
  if ( (v4 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  this->mValue = v3 >> 7;
}

