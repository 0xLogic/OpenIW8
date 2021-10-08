/*
==============
Stream_AddMaterialDistance
==============
*/

void __fastcall Stream_AddMaterialDistance(unsigned int materialIndex, StreamDistance distance)
{
  ?Stream_AddMaterialDistance@@YAXIUStreamDistance@@@Z(materialIndex, distance);
}

/*
==============
Stream_AddImagePartDistance
==============
*/

void __fastcall Stream_AddImagePartDistance(unsigned int imagePartIndex, StreamDistance distance)
{
  ?Stream_AddImagePartDistance@@YAXIUStreamDistance@@@Z(imagePartIndex, distance);
}

/*
==============
Stream_AddImageDistance
==============
*/

void __fastcall Stream_AddImageDistance(unsigned int imageIndex, StreamDistance distance)
{
  ?Stream_AddImageDistance@@YAXIUStreamDistance@@@Z(imageIndex, distance);
}

/*
==============
Stream_AddModelDistance
==============
*/

void __fastcall Stream_AddModelDistance(unsigned int modelIndex, StreamDistance distance)
{
  ?Stream_AddModelDistance@@YAXIUStreamDistance@@@Z(modelIndex, distance);
}

/*
==============
Stream_AddMaterialDistance
==============
*/
void Stream_AddMaterialDistance(unsigned int materialIndex, StreamDistance distance)
{
  __int64 v2; 
  StreamFrontendGlob *v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = materialIndex;
  if ( materialIndex >= 0xB400 )
  {
    v8 = 46080;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", materialIndex, v8) )
      __debugbreak();
  }
  v4 = streamFrontendGlob;
  if ( (unsigned int)v2 >= 0xB400 )
  {
    LODWORD(v7) = 46080;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( distance.mValue < v4->materialDistance.mDistances[v2].mValue )
    v4->materialDistance.mDistances[v2] = distance;
  Com_BitSetAssert(v4->materialDistance.mValueSet, v2, 5760);
}

/*
==============
Stream_AddImageDistance
==============
*/
void Stream_AddImageDistance(unsigned int imageIndex, StreamDistance distance)
{
  __int64 v2; 
  const dvar_t *v4; 
  StreamFrontendGlob *v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = imageIndex;
  if ( imageIndex >= 0x14000 )
  {
    v9 = 81920;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", imageIndex, v9) )
      __debugbreak();
  }
  v4 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
  if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && (DB_GetGfxImageAtIndex(v2)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  v5 = streamFrontendGlob;
  if ( (unsigned int)v2 >= 0x14000 )
  {
    LODWORD(v8) = 81920;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( distance.mValue < v5->imageDistance.mDistances[v2].mValue )
    v5->imageDistance.mDistances[v2] = distance;
  Com_BitSetAssert(v5->imageDistance.mValueSet, v2, 10240);
}

/*
==============
Stream_AddImagePartDistance
==============
*/
void Stream_AddImagePartDistance(unsigned int imagePartIndex, StreamDistance distance)
{
  __int64 v2; 
  const dvar_t *v4; 
  StreamSortListFrame *v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = imagePartIndex;
  if ( imagePartIndex >= 0x50000 )
  {
    v9 = 327680;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( TOTAL_IMAGE_PARTS )", "imagePartIndex doesn't index TOTAL_IMAGE_PARTS\n\t%i not in [0, %i)", imagePartIndex, v9) )
      __debugbreak();
  }
  v4 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
  if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && (DB_GetGfxImageAtIndex((unsigned int)v2 >> 2)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 412, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  v5 = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListWrite];
  if ( (unsigned int)v2 >= 0x50000 )
  {
    LODWORD(v8) = 327680;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( distance.mValue < v5->imagePartDistance.mDistances[v2].mValue )
    v5->imagePartDistance.mDistances[v2] = distance;
  Com_BitSetAssert(v5->imagePartDistance.mValueSet, v2, 40960);
}

/*
==============
Stream_AddModelDistance
==============
*/
void Stream_AddModelDistance(unsigned int modelIndex, StreamDistance distance)
{
  __int64 v2; 
  StreamFrontendGlob *v4; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = modelIndex;
  if ( modelIndex >= 0x6000 )
  {
    v8 = 24576;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 442, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( (24064 + 512) )", "modelIndex doesn't index XMODEL_POOL_SIZE\n\t%i not in [0, %i)", modelIndex, v8) )
      __debugbreak();
  }
  v4 = streamFrontendGlob;
  if ( (unsigned int)v2 >= 0x6000 )
  {
    LODWORD(v7) = 24576;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( distance.mValue < v4->modelDistance.mDistances[v2].mValue )
    v4->modelDistance.mDistances[v2] = distance;
  Com_BitSetAssert(v4->modelDistance.mValueSet, v2, 3072);
}

