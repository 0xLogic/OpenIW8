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
void StreamDistance::StreamDistance(StreamDistance *this, float distance)
{
  this->mValue = -1;
  if ( (LODWORD(distance) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  this->mValue = LODWORD(distance) >> 7;
}

