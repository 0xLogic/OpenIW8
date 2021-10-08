/*
==============
Stream_CombineTables_EncodeMaterialImageScale
==============
*/

unsigned int __fastcall Stream_CombineTables_EncodeMaterialImageScale(const unsigned int imageArea, const unsigned int minArea)
{
  return ?Stream_CombineTables_EncodeMaterialImageScale@@YAIII@Z(imageArea, minArea);
}

/*
==============
Stream_CombineTables_EncodeMaterialImageScale
==============
*/
__int64 Stream_CombineTables_EncodeMaterialImageScale(const unsigned int imageArea, const unsigned int minArea)
{
  unsigned __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  v2 = minArea;
  v3 = imageArea;
  if ( imageArea < minArea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 142, ASSERT_TYPE_ASSERT, "( imageArea ) >= ( minArea )", "%s >= %s\n\t%i, %i", "imageArea", "minArea", imageArea, minArea) )
    __debugbreak();
  if ( !(_DWORD)v2 )
  {
    LODWORD(v14) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 143, ASSERT_TYPE_ASSERT, "( minArea ) > ( 0 )", "%s > %s\n\t%i, %i", "minArea", "0", v14, 0i64) )
      __debugbreak();
  }
  v4 = (unsigned int)v3 / (unsigned int)v2;
  if ( !((unsigned int)v3 / (unsigned int)v2) )
  {
    LODWORD(v14) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 147, ASSERT_TYPE_ASSERT, "( imageScaleSqMajor ) > ( 0 )", "%s > %s\n\t%i, %i", "imageScaleSqMajor", "0", v14, 0i64) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
      __debugbreak();
  }
  v5 = __lzcnt(v4);
  v6 = 31 - v5;
  v7 = (unsigned int)(1 << (31 - v5));
  if ( 31 - v5 >= 0x20 )
  {
    LODWORD(v15) = 32;
    LODWORD(v14) = 31 - v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 152, ASSERT_TYPE_ASSERT, "( imageScaleSqExp ) < ( ( 1u << StreamCombineTable::IMAGE_SCALE_EXPONENT_BITS ) )", "%s < %s\n\t%i, %i", "imageScaleSqExp", "( 1u << StreamCombineTable::IMAGE_SCALE_EXPONENT_BITS )", v14, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v7 > v4 )
  {
    LODWORD(v15) = (unsigned int)v3 / (unsigned int)v2;
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 153, ASSERT_TYPE_ASSERT, "( imageScaleSqMajorFloor ) <= ( imageScaleSqMajor )", "%s <= %s\n\t%i, %i", "imageScaleSqMajorFloor", "imageScaleSqMajor", v14, v15) )
      __debugbreak();
  }
  v8 = (unsigned int)v7;
  v9 = v7 << 9;
  v10 = (v3 << 9) / v2;
  v11 = v10;
  if ( v10 >= 2 * v9 )
  {
    LODWORD(v15) = 2 * v9;
    LODWORD(v14) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 160, ASSERT_TYPE_ASSERT, "( imageScaleSqMajorMaxScale ) < ( 2 * imageScaleSqMajorFloorMaxScale )", "%s < %s\n\t%i, %i", "imageScaleSqMajorMaxScale", "2 * imageScaleSqMajorFloorMaxScale", v14, v15) )
      __debugbreak();
  }
  v12 = (v11 - v9) / v8;
  if ( v12 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v12, "unsigned", v12) )
    __debugbreak();
  if ( (unsigned int)v12 >= 0x200 )
  {
    LODWORD(v15) = 512;
    LODWORD(v14) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_combine_tables.h", 163, ASSERT_TYPE_ASSERT, "( imageScaleSqMinorTrunc ) < ( StreamCombineTable::IMAGE_SCALE_INTERVAL_MAX )", "%s < %s\n\t%i, %i", "imageScaleSqMinorTrunc", "StreamCombineTable::IMAGE_SCALE_INTERVAL_MAX", v14, v15) )
      __debugbreak();
  }
  return v6 + 32 * (_DWORD)v12;
}

