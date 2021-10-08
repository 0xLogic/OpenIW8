/*
==============
Stream_TouchMeshForXModelLod
==============
*/

void __fastcall Stream_TouchMeshForXModelLod(const XModel *model, StreamModelLod streamLod)
{
  ?Stream_TouchMeshForXModelLod@@YAXPEBUXModel@@W4StreamModelLod@@@Z(model, streamLod);
}

/*
==============
Stream_TouchImageAndCheck
==============
*/

bool __fastcall Stream_TouchImageAndCheck(const GfxImage *image, StreamImageMip streamMip)
{
  return ?Stream_TouchImageAndCheck@@YA_NPEBUGfxImage@@W4StreamImageMip@@@Z(image, streamMip);
}

/*
==============
Stream_RequestMesh
==============
*/

void __fastcall Stream_RequestMesh(unsigned int meshIndex)
{
  ?Stream_RequestMesh@@YAXI@Z(meshIndex);
}

/*
==============
Stream_RequestGeneric
==============
*/

void __fastcall Stream_RequestGeneric(const StreamKey *streamKey)
{
  ?Stream_RequestGeneric@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_TouchMaterialAndCheck_Internal<0>
==============
*/

bool __fastcall Stream_TouchMaterialAndCheck_Internal<0>(const Material *material, StreamImageMip streamMip, volatile int (*touchArray)[10240])
{
  return ??$Stream_TouchMaterialAndCheck_Internal@$0A@@@YA_NPEBUMaterial@@W4StreamImageMip@@AEAY0CIAA@$$CCJ@Z(material, streamMip, touchArray);
}

/*
==============
Stream_BoostGeneric
==============
*/

void __fastcall Stream_BoostGeneric(const StreamKey *streamKey, int amount)
{
  ?Stream_BoostGeneric@@YAXPEBUStreamKey@@H@Z(streamKey, amount);
}

/*
==============
Stream_TouchMaterialAndCheck
==============
*/

bool __fastcall Stream_TouchMaterialAndCheck(const Material *material)
{
  return ?Stream_TouchMaterialAndCheck@@YA_NPEBUMaterial@@@Z(material);
}

/*
==============
Stream_TouchCamo
==============
*/

void __fastcall Stream_TouchCamo(const Camo *const camo, const StreamImageMip streamMip)
{
  ?Stream_TouchCamo@@YAXQEBUCamo@@W4StreamImageMip@@@Z(camo, streamMip);
}

/*
==============
Stream_TouchXModelAndCheck
==============
*/

bool __fastcall Stream_TouchXModelAndCheck(const XModel *model, StreamModelLod streamLod, StreamImageMip streamMip)
{
  return ?Stream_TouchXModelAndCheck@@YA_NPEBUXModel@@W4StreamModelLod@@W4StreamImageMip@@@Z(model, streamLod, streamMip);
}

/*
==============
Stream_TouchMaterialAndCheck
==============
*/

bool __fastcall Stream_TouchMaterialAndCheck(const Material *material, StreamImageMip streamMip)
{
  return ?Stream_TouchMaterialAndCheck@@YA_NPEBUMaterial@@W4StreamImageMip@@@Z(material, streamMip);
}

/*
==============
Stream_TouchImageAndCheckAnyAvailable
==============
*/

bool __fastcall Stream_TouchImageAndCheckAnyAvailable(const GfxImage *image, StreamImageMip streamMip)
{
  return ?Stream_TouchImageAndCheckAnyAvailable@@YA_NPEBUGfxImage@@W4StreamImageMip@@@Z(image, streamMip);
}

/*
==============
Stream_TouchXModelAndCheck
==============
*/

bool __fastcall Stream_TouchXModelAndCheck(const XModel *model, StreamImageMip streamMip)
{
  return ?Stream_TouchXModelAndCheck@@YA_NPEBUXModel@@W4StreamImageMip@@@Z(model, streamMip);
}

/*
==============
Stream_CheckDObjModels
==============
*/

bool __fastcall Stream_CheckDObjModels(const DObj *obj, StreamModelLod streamLod)
{
  return ?Stream_CheckDObjModels@@YA_NPEBUDObj@@W4StreamModelLod@@@Z(obj, streamLod);
}

/*
==============
Stream_TouchCamo
==============
*/

void __fastcall Stream_TouchCamo(const Camo *const camo)
{
  ?Stream_TouchCamo@@YAXQEBUCamo@@@Z(camo);
}

/*
==============
Stream_TouchXModel
==============
*/

void __fastcall Stream_TouchXModel(const XModel *model, StreamModelLod streamLod, StreamImageMip streamMip)
{
  ?Stream_TouchXModel@@YAXPEBUXModel@@W4StreamModelLod@@W4StreamImageMip@@@Z(model, streamLod, streamMip);
}

/*
==============
Stream_ClearMaterialTouchedUntilLoaded
==============
*/

void __fastcall Stream_ClearMaterialTouchedUntilLoaded(const Material *material)
{
  ?Stream_ClearMaterialTouchedUntilLoaded@@YAXPEBUMaterial@@@Z(material);
}

/*
==============
Stream_CheckAndBoostDObjModels
==============
*/

bool __fastcall Stream_CheckAndBoostDObjModels(const DObj *obj, StreamModelLod streamLod)
{
  return ?Stream_CheckAndBoostDObjModels@@YA_NPEBUDObj@@W4StreamModelLod@@@Z(obj, streamLod);
}

/*
==============
Stream_TouchImage
==============
*/

void __fastcall Stream_TouchImage(const GfxImage *image, StreamImageMip streamMip)
{
  ?Stream_TouchImage@@YAXPEBUGfxImage@@W4StreamImageMip@@@Z(image, streamMip);
}

/*
==============
Stream_TouchMaterialOverridesCmd
==============
*/

void __fastcall Stream_TouchMaterialOverridesCmd(const void *const data)
{
  ?Stream_TouchMaterialOverridesCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_TouchCamoAndCheck
==============
*/

bool __fastcall Stream_TouchCamoAndCheck(const Camo *const camo)
{
  return ?Stream_TouchCamoAndCheck@@YA_NQEBUCamo@@@Z(camo);
}

/*
==============
Stream_TouchXModel
==============
*/

void __fastcall Stream_TouchXModel(const XModel *model, StreamImageMip streamMip)
{
  ?Stream_TouchXModel@@YAXPEBUXModel@@W4StreamImageMip@@@Z(model, streamMip);
}

/*
==============
Stream_TouchMaterial
==============
*/

void __fastcall Stream_TouchMaterial(const Material *material)
{
  ?Stream_TouchMaterial@@YAXPEBUMaterial@@@Z(material);
}

/*
==============
Stream_TouchMaterial
==============
*/

void __fastcall Stream_TouchMaterial(const Material *material, StreamImageMip streamMip)
{
  ?Stream_TouchMaterial@@YAXPEBUMaterial@@W4StreamImageMip@@@Z(material, streamMip);
}

/*
==============
Stream_GetImageHighestResidentPart
==============
*/

int __fastcall Stream_GetImageHighestResidentPart(const GfxImage *image)
{
  return ?Stream_GetImageHighestResidentPart@@YAHPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_TouchCamoAndCheck
==============
*/

bool __fastcall Stream_TouchCamoAndCheck(const Camo *const camo, const StreamImageMip streamMip)
{
  return ?Stream_TouchCamoAndCheck@@YA_NQEBUCamo@@W4StreamImageMip@@@Z(camo, streamMip);
}

/*
==============
Stream_TouchImage
==============
*/

void __fastcall Stream_TouchImage(const GfxImage *image)
{
  ?Stream_TouchImage@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_UsedGeneric
==============
*/

void __fastcall Stream_UsedGeneric(const StreamKey *streamKey)
{
  ?Stream_UsedGeneric@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_TouchDObj
==============
*/

void __fastcall Stream_TouchDObj(const DObj *obj, StreamImageMip streamMip)
{
  ?Stream_TouchDObj@@YAXPEBUDObj@@W4StreamImageMip@@@Z(obj, streamMip);
}

/*
==============
Stream_TouchImageAndCheck
==============
*/

bool __fastcall Stream_TouchImageAndCheck(const GfxImage *image)
{
  return ?Stream_TouchImageAndCheck@@YA_NPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_TouchMaterialAndCheckAnyAvailable
==============
*/

bool __fastcall Stream_TouchMaterialAndCheckAnyAvailable(const Material *material, StreamImageMip streamMip)
{
  return ?Stream_TouchMaterialAndCheckAnyAvailable@@YA_NPEBUMaterial@@W4StreamImageMip@@@Z(material, streamMip);
}

/*
==============
Stream_TouchXModel_Internal
==============
*/

void __fastcall Stream_TouchXModel_Internal(const XModel *model, StreamModelLod streamLod, StreamImageMip streamMip)
{
  ?Stream_TouchXModel_Internal@@YAXPEBUXModel@@W4StreamModelLod@@W4StreamImageMip@@@Z(model, streamLod, streamMip);
}

/*
==============
Stream_UsedMesh
==============
*/

void __fastcall Stream_UsedMesh(const XModelSurfs *mesh)
{
  ?Stream_UsedMesh@@YAXPEBUXModelSurfs@@@Z(mesh);
}

/*
==============
Stream_CheckImage
==============
*/

bool __fastcall Stream_CheckImage(const GfxImage *image, StreamImageMip streamMip)
{
  return ?Stream_CheckImage@@YA_NPEBUGfxImage@@W4StreamImageMip@@@Z(image, streamMip);
}

/*
==============
Stream_BoostMesh
==============
*/

void __fastcall Stream_BoostMesh(unsigned int meshIndex, int amount)
{
  ?Stream_BoostMesh@@YAXIH@Z(meshIndex, amount);
}

/*
==============
Stream_UsedImage
==============
*/

void __fastcall Stream_UsedImage(const GfxImage *image)
{
  ?Stream_UsedImage@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_RequestedXModelLod
==============
*/

unsigned int __fastcall Stream_RequestedXModelLod(const XModel *const model, StreamModelLod streamLod)
{
  return ?Stream_RequestedXModelLod@@YAIQEBUXModel@@W4StreamModelLod@@@Z(model, streamLod);
}

/*
==============
Stream_TouchDObjAndCheck
==============
*/

bool __fastcall Stream_TouchDObjAndCheck(const DObj *obj, StreamImageMip streamMip)
{
  return ?Stream_TouchDObjAndCheck@@YA_NPEBUDObj@@W4StreamImageMip@@@Z(obj, streamMip);
}

/*
==============
Stream_TouchXModelAndCheck
==============
*/

bool __fastcall Stream_TouchXModelAndCheck(const XModel *model)
{
  return ?Stream_TouchXModelAndCheck@@YA_NPEBUXModel@@@Z(model);
}

/*
==============
Stream_BoostMesh
==============
*/

void __fastcall Stream_BoostMesh(const XModelSurfs *mesh, int amount)
{
  ?Stream_BoostMesh@@YAXPEBUXModelSurfs@@H@Z(mesh, amount);
}

/*
==============
Stream_SetMaterialTouchedUntilLoaded
==============
*/

void __fastcall Stream_SetMaterialTouchedUntilLoaded(const Material *material)
{
  ?Stream_SetMaterialTouchedUntilLoaded@@YAXPEBUMaterial@@@Z(material);
}

/*
==============
Stream_TouchXModel
==============
*/

void __fastcall Stream_TouchXModel(const XModel *model)
{
  ?Stream_TouchXModel@@YAXPEBUXModel@@@Z(model);
}

/*
==============
Stream_RequestMesh
==============
*/

void __fastcall Stream_RequestMesh(const XModelSurfs *mesh)
{
  ?Stream_RequestMesh@@YAXPEBUXModelSurfs@@@Z(mesh);
}

/*
==============
Stream_CheckImageLowMipUsable
==============
*/

bool __fastcall Stream_CheckImageLowMipUsable(const GfxImage *image)
{
  return ?Stream_CheckImageLowMipUsable@@YA_NPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_UsedMesh
==============
*/

void __fastcall Stream_UsedMesh(unsigned int meshIndex)
{
  ?Stream_UsedMesh@@YAXI@Z(meshIndex);
}

/*
==============
Stream_TouchDObjCmd
==============
*/

void __fastcall Stream_TouchDObjCmd(const void *const data)
{
  ?Stream_TouchDObjCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_TouchMaterialAndCheck_Internal<1>
==============
*/

bool __fastcall Stream_TouchMaterialAndCheck_Internal<1>(const Material *material, StreamImageMip streamMip, volatile int (*touchArray)[10240])
{
  return ??$Stream_TouchMaterialAndCheck_Internal@$00@@YA_NPEBUMaterial@@W4StreamImageMip@@AEAY0CIAA@$$CCJ@Z(material, streamMip, touchArray);
}

/*
==============
Stream_GetImageStreamedPartsRange
==============
*/

void __fastcall Stream_GetImageStreamedPartsRange(const GfxImage *image, StreamImageMip streamMip, unsigned int *low, unsigned int *high)
{
  ?Stream_GetImageStreamedPartsRange@@YAXPEBUGfxImage@@W4StreamImageMip@@PEAI2@Z(image, streamMip, low, high);
}

/*
==============
Stream_TouchMaterialAndCheck_Internal<1>
==============
*/
__int64 Stream_TouchMaterialAndCheck_Internal<1>(const Material *material, StreamImageMip streamMip, volatile int (*touchArray)[10240])
{
  StreamImageMip v3; 
  const Material *v4; 
  unsigned __int8 v5; 
  unsigned int v6; 
  GfxImage *image; 
  int streamedPartCount; 
  int v9; 
  signed int v10; 
  unsigned int v11; 
  char v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  volatile signed __int32 *v16; 
  StreamFrontendGlob *v17; 
  unsigned int *mUse; 
  unsigned int *mLoaded; 
  char v20; 
  __int64 v22; 
  __int64 v23; 
  unsigned int i; 
  char v28; 

  v3 = streamMip;
  v4 = material;
  Sys_ProfBeginNamedEvent(0xFF000000, "Stream TouchMaterialAndCheck");
  v5 = 1;
  v28 = 1;
  v6 = 0;
  for ( i = 0; v6 < v4->textureCount; i = ++v6 )
  {
    image = v4->textureTable[v6].image;
    if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 52, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( (image->flags & 0x40) != 0 )
    {
      streamedPartCount = image->streamedPartCount;
      v9 = streamedPartCount - 1;
      if ( v3 != EXCLUDE_HIGHEST )
        v9 = v3;
      v10 = 4 * DB_GetGfxImageIndex(image);
      if ( !streamedPartCount )
      {
        LODWORD(v23) = 0;
        LODWORD(v22) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v22, v23) )
          __debugbreak();
      }
      if ( streamedPartCount < v9 )
        v9 = streamedPartCount;
      if ( v9 < 1 )
        v9 = 1;
      v11 = v10 + v9;
      v12 = 0;
      if ( v10 < v11 )
      {
        v13 = __ROL4__(1, v10);
        do
        {
          if ( (unsigned int)(v10 >> 5) >= 0x2800 )
          {
            LODWORD(v23) = 10240;
            LODWORD(v22) = v10 >> 5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v14 = (__int64)v10 >> 5;
          v15 = v14;
          v16 = &(*touchArray)[v14];
          if ( ((unsigned __int8)v16 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&(*touchArray)[v14]) )
            __debugbreak();
          _InterlockedOr(v16, v13);
          v17 = streamFrontendGlob;
          if ( v10 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(v23) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(v22) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          mUse = v17->imageBits.mUse;
          if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          if ( (v13 & mUse[v15]) == 0 )
            goto LABEL_35;
          mLoaded = v17->imageBits.mLoaded;
          if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          if ( (v13 & mLoaded[v15]) != 0 )
            v20 = 1;
          else
LABEL_35:
            v20 = 0;
          v12 |= v20;
          ++v10;
          v13 = __ROL4__(v13, 1);
        }
        while ( v10 < v11 );
        v6 = i;
        v4 = material;
        v5 = v28;
      }
      v3 = streamMip;
    }
    else
    {
      v12 = 1;
    }
    v5 &= v12;
    v28 = v5;
  }
  Sys_ProfEndNamedEvent();
  return v5;
}

/*
==============
Stream_TouchMaterialAndCheck_Internal<0>
==============
*/
__int64 Stream_TouchMaterialAndCheck_Internal<0>(const Material *material, StreamImageMip streamMip, volatile int (*touchArray)[10240])
{
  StreamImageMip v3; 
  const Material *v4; 
  unsigned __int8 v5; 
  unsigned int v6; 
  GfxImage *image; 
  int streamedPartCount; 
  int v9; 
  signed int v10; 
  unsigned int v11; 
  char v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  volatile signed __int32 *v16; 
  StreamFrontendGlob *v17; 
  unsigned int *mUse; 
  unsigned int *mLoaded; 
  char v20; 
  __int64 v22; 
  __int64 v23; 
  unsigned int i; 
  char v28; 

  v3 = streamMip;
  v4 = material;
  Sys_ProfBeginNamedEvent(0xFF000000, "Stream TouchMaterialAndCheck");
  v5 = 1;
  v28 = 1;
  v6 = 0;
  for ( i = 0; v6 < v4->textureCount; i = ++v6 )
  {
    image = v4->textureTable[v6].image;
    if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 52, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( (image->flags & 0x40) != 0 )
    {
      streamedPartCount = image->streamedPartCount;
      v9 = streamedPartCount - 1;
      if ( v3 != EXCLUDE_HIGHEST )
        v9 = v3;
      v10 = 4 * DB_GetGfxImageIndex(image);
      if ( !streamedPartCount )
      {
        LODWORD(v23) = 0;
        LODWORD(v22) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v22, v23) )
          __debugbreak();
      }
      if ( streamedPartCount < v9 )
        v9 = streamedPartCount;
      if ( v9 < 1 )
        v9 = 1;
      v11 = v10 + v9;
      v12 = 1;
      if ( v10 < v11 )
      {
        v13 = __ROL4__(1, v10);
        do
        {
          if ( (unsigned int)(v10 >> 5) >= 0x2800 )
          {
            LODWORD(v23) = 10240;
            LODWORD(v22) = v10 >> 5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          v14 = (__int64)v10 >> 5;
          v15 = v14;
          v16 = &(*touchArray)[v14];
          if ( ((unsigned __int8)v16 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&(*touchArray)[v14]) )
            __debugbreak();
          _InterlockedOr(v16, v13);
          v17 = streamFrontendGlob;
          if ( v10 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(v23) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(v22) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          mUse = v17->imageBits.mUse;
          if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          if ( (v13 & mUse[v15]) == 0 )
            goto LABEL_35;
          mLoaded = v17->imageBits.mLoaded;
          if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          if ( (v13 & mLoaded[v15]) != 0 )
            v20 = 1;
          else
LABEL_35:
            v20 = 0;
          v12 &= v20;
          ++v10;
          v13 = __ROL4__(v13, 1);
        }
        while ( v10 < v11 );
        v6 = i;
        v4 = material;
        v5 = v28;
      }
      v3 = streamMip;
    }
    else
    {
      v12 = 1;
    }
    v5 &= v12;
    v28 = v5;
  }
  Sys_ProfEndNamedEvent();
  return v5;
}

/*
==============
CanTouchXModelLod
==============
*/
bool CanTouchXModelLod(const XModel *model, unsigned int lod)
{
  const XModelLodInfo *LodInfo; 
  __int64 v6; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 42, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( lod >= model->numLods )
  {
    LODWORD(v6) = lod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v6, model->numLods) )
      __debugbreak();
  }
  LodInfo = XModelGetLodInfo(model, lod);
  return LodInfo->numsurfs && LodInfo->surfs;
}

/*
==============
RequestedXModelLod
==============
*/
__int64 RequestedXModelLod(const XModel *model, StreamModelLod streamLod)
{
  unsigned __int8 numLods; 
  __int64 result; 

  numLods = model->numLods;
  if ( !numLods )
    return 6i64;
  switch ( streamLod )
  {
    case EXCLUDE_HIGHEST:
      result = 1i64;
      break;
    case NO_MIPS:
      return 6i64;
    case MIP2:
      result = (unsigned int)numLods - 1;
      if ( (int)result > 1 )
        result = 1i64;
      break;
    case MIP1:
      result = (unsigned int)numLods - 1;
      if ( (int)result > 2 )
        result = 2i64;
      break;
    case MIP0:
      result = (unsigned int)numLods - 1;
      if ( (int)result > 3 )
        result = 3i64;
      break;
    case HIGHEST|LOWEST:
      result = (unsigned int)numLods - 1;
      if ( (int)result > 4 )
        result = 4i64;
      break;
    case HIGHEST|MIP2:
      result = (unsigned int)numLods - 1;
      if ( (int)result > 5 )
        result = 5i64;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
Stream_BoostGeneric
==============
*/
void Stream_BoostGeneric(const StreamKey *streamKey, int amount)
{
  unsigned int StreamKeyIndex; 

  if ( (streamKey->flags & 2) == 0 )
  {
    if ( streamKey->dataSize )
    {
      StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
      Sys_InterlockedExchangeAdd((volatile int *)&streamFrontendGlob->genericRequest.count[streamFrontendGlob->touchBufferIndex][StreamKeyIndex], amount);
    }
  }
}

/*
==============
Stream_BoostMesh
==============
*/
void Stream_BoostMesh(unsigned int meshIndex, int amount)
{
  const XModelSurfs *XModelSurfsAtIndex; 

  XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(meshIndex);
  Stream_BoostMeshInternal(XModelSurfsAtIndex, meshIndex, amount);
}

/*
==============
Stream_BoostMesh
==============
*/
void Stream_BoostMesh(const XModelSurfs *mesh, int amount)
{
  unsigned int XModelSurfsIndex; 

  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  Stream_BoostMeshInternal(mesh, XModelSurfsIndex, amount);
}

/*
==============
Stream_BoostMeshInternal
==============
*/
void Stream_BoostMeshInternal(const XModelSurfs *mesh, unsigned int meshIndex, int amount)
{
  __int64 v3; 
  unsigned int *v6; 
  volatile signed __int32 *v7; 

  v3 = meshIndex;
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1197, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1198, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) != 0 )
  {
    v6 = streamFrontendGlob->meshRequest.count[streamFrontendGlob->touchBufferIndex];
    v7 = (volatile signed __int32 *)&v6[v3];
    if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v6[v3]) )
      __debugbreak();
    _InterlockedExchangeAdd(v7, amount);
  }
}

/*
==============
Stream_CheckAndBoostDObjModels
==============
*/
bool Stream_CheckAndBoostDObjModels(const DObj *obj, StreamModelLod streamLod)
{
  bool result; 
  unsigned int NumModels; 
  int v6; 
  unsigned int i; 
  const XModel *Model; 
  unsigned __int8 numLods; 
  int v10; 
  unsigned int v11; 
  unsigned int XModelSurfsIndex; 
  const XModelSurfs *XModelSurfsAtIndex; 
  const XModelSurfs *v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 600, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_hintDobjs, "stream_hintDobjs");
  if ( result )
  {
    NumModels = DObjGetNumModels(obj);
    if ( NumModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 606, ASSERT_TYPE_SANITY, "( modelCount <= ( DOBJ_MAX_PARTS ) )", (const char *)&queryFormat, "modelCount <= DOBJ_MAX_SUBMODELS") )
      __debugbreak();
    v6 = 0;
    for ( i = 0; i < NumModels; ++i )
    {
      Model = DObjGetModel(obj, i);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 613, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numLods = Model->numLods;
      if ( numLods )
      {
        switch ( streamLod )
        {
          case EXCLUDE_HIGHEST:
            v10 = 1;
            break;
          case NO_MIPS:
            goto LABEL_13;
          case MIP2:
            v10 = numLods - 1;
            if ( v10 > 1 )
              v10 = 1;
            break;
          case MIP1:
            v10 = numLods - 1;
            if ( v10 > 2 )
              v10 = 2;
            break;
          case MIP0:
            v10 = numLods - 1;
            if ( v10 > 3 )
              v10 = 3;
            break;
          case HIGHEST|LOWEST:
            v10 = numLods - 1;
            if ( v10 > 4 )
              v10 = 4;
            break;
          case HIGHEST|MIP2:
            v10 = numLods - 1;
            if ( v10 > 5 )
              v10 = 5;
            break;
          default:
            v10 = 0;
            break;
        }
      }
      else
      {
LABEL_13:
        v10 = 6;
      }
      if ( v10 >= (unsigned int)numLods )
      {
        LODWORD(v16) = numLods;
        LODWORD(v15) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( minimumLod ) < (unsigned)( model->numLods )", "minimumLod doesn't index model->numLods\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      v11 = XModelHighLod(Model);
      if ( v11 < Model->numLods )
      {
        while ( !Stream_MeshIsSafeToUse(Model->lodInfo[(unsigned __int64)v11].modelSurfsStaging) )
        {
          if ( v11 == v10 )
          {
            XModelSurfsIndex = DB_GetXModelSurfsIndex(Model->lodInfo[(unsigned __int64)(unsigned int)v10].modelSurfsStaging);
            XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(XModelSurfsIndex);
            Stream_RequestMeshInternal(XModelSurfsAtIndex, XModelSurfsIndex);
            v14 = DB_GetXModelSurfsAtIndex(XModelSurfsIndex);
            Stream_BoostMeshInternal(v14, XModelSurfsIndex, 1000);
            goto LABEL_42;
          }
          if ( ++v11 >= Model->numLods )
            goto LABEL_42;
        }
        ++v6;
      }
LABEL_42:
      ;
    }
    return v6 == NumModels;
  }
  return result;
}

/*
==============
Stream_CheckDObjModels
==============
*/
bool Stream_CheckDObjModels(const DObj *obj, StreamModelLod streamLod)
{
  bool result; 
  unsigned int NumModels; 
  int v6; 
  unsigned int i; 
  const XModel *Model; 
  unsigned __int8 numLods; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 644, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_hintDobjs, "stream_hintDobjs");
  if ( result )
  {
    NumModels = DObjGetNumModels(obj);
    if ( NumModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 650, ASSERT_TYPE_SANITY, "( modelCount <= ( DOBJ_MAX_PARTS ) )", (const char *)&queryFormat, "modelCount <= DOBJ_MAX_SUBMODELS") )
      __debugbreak();
    v6 = 0;
    for ( i = 0; i < NumModels; ++i )
    {
      Model = DObjGetModel(obj, i);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 656, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numLods = Model->numLods;
      if ( numLods )
      {
        switch ( streamLod )
        {
          case EXCLUDE_HIGHEST:
            v10 = 1;
            break;
          case NO_MIPS:
            goto LABEL_13;
          case MIP2:
            v10 = numLods - 1;
            if ( v10 > 1 )
              v10 = 1;
            break;
          case MIP1:
            v10 = numLods - 1;
            if ( v10 > 2 )
              v10 = 2;
            break;
          case MIP0:
            v10 = numLods - 1;
            if ( v10 > 3 )
              v10 = 3;
            break;
          case HIGHEST|LOWEST:
            v10 = numLods - 1;
            if ( v10 > 4 )
              v10 = 4;
            break;
          case HIGHEST|MIP2:
            v10 = numLods - 1;
            if ( v10 > 5 )
              v10 = 5;
            break;
          default:
            v10 = 0;
            break;
        }
      }
      else
      {
LABEL_13:
        v10 = 6;
      }
      if ( v10 >= (unsigned int)numLods )
      {
        LODWORD(v13) = numLods;
        LODWORD(v12) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 659, ASSERT_TYPE_ASSERT, "(unsigned)( minimumLod ) < (unsigned)( model->numLods )", "minimumLod doesn't index model->numLods\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v11 = XModelHighLod(Model);
      if ( v11 < Model->numLods )
      {
        while ( !Stream_MeshIsSafeToUse(Model->lodInfo[(unsigned __int64)v11].modelSurfsStaging) )
        {
          if ( v11 != v10 && ++v11 < Model->numLods )
            continue;
          goto LABEL_41;
        }
        ++v6;
      }
LABEL_41:
      ;
    }
    return v6 == NumModels;
  }
  return result;
}

/*
==============
Stream_CheckImage
==============
*/
bool Stream_CheckImage(const GfxImage *image, StreamImageMip streamMip)
{
  int v2; 
  int streamedPartCount; 
  unsigned int v4; 
  unsigned int v5; 

  v2 = streamMip;
  if ( (image->flags & 0x40) == 0 )
    return 1;
  streamedPartCount = image->streamedPartCount;
  if ( streamMip == EXCLUDE_HIGHEST )
    v2 = streamedPartCount - 1;
  v4 = 4 * DB_GetGfxImageIndex(image);
  v5 = v4 + I_clamp(v2, 1, streamedPartCount);
  if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_concurrentImagePartLoading, "stream_concurrentImagePartLoading") )
    return StreamableBits::CheckInUseAndLoaded(&streamFrontendGlob->imageBits, v5 - 1);
  if ( v4 >= v5 )
    return 1;
  while ( StreamableBits::CheckInUseAndLoaded(&streamFrontendGlob->imageBits, v4) )
  {
    if ( ++v4 >= v5 )
      return 1;
  }
  return 0;
}

/*
==============
Stream_CheckImageLowMipUsable
==============
*/
bool Stream_CheckImageLowMipUsable(const GfxImage *image)
{
  unsigned int GfxImageIndex; 

  if ( (image->flags & 0x40) == 0 )
    return 1;
  GfxImageIndex = DB_GetGfxImageIndex(image);
  return StreamableBits::CheckInUseAndLoaded(&streamFrontendGlob->imageBits, 4 * GfxImageIndex);
}

/*
==============
Stream_ClearMaterialTouchedUntilLoaded
==============
*/
void Stream_ClearMaterialTouchedUntilLoaded(const Material *material)
{
  int v2; 
  __int64 touchMaterialUntilLoadCount; 
  __int64 v4; 
  const Material **touchMaterialsUntilLoad; 
  ScopedStreamFrontendUpdateLock v6; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v6);
  v2 = 0;
  touchMaterialUntilLoadCount = (int)streamFrontendGlob->touchMaterialUntilLoadCount;
  if ( touchMaterialUntilLoadCount > 0 )
  {
    v4 = 0i64;
    touchMaterialsUntilLoad = streamFrontendGlob->touchMaterialsUntilLoad;
    while ( *touchMaterialsUntilLoad != material )
    {
      ++v2;
      ++v4;
      ++touchMaterialsUntilLoad;
      if ( v4 >= touchMaterialUntilLoadCount )
        goto LABEL_7;
    }
    streamFrontendGlob->touchMaterialsUntilLoad[v2] = *(const Material **)&streamFrontendGlob->genericXPakPosition[2 * touchMaterialUntilLoadCount + 37886];
    --streamFrontendGlob->touchMaterialUntilLoadCount;
  }
LABEL_7:
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v6);
}

/*
==============
Stream_GetImageHighestResidentPart
==============
*/
__int64 Stream_GetImageHighestResidentPart(const GfxImage *image)
{
  unsigned int v2; 
  int v3; 
  StreamFrontendGlob *v4; 
  unsigned int *mUse; 
  int v6; 
  __int64 v7; 
  unsigned int *mLoaded; 
  __int64 v9; 
  __int64 v10; 

  if ( (image->flags & 0x40) == 0 )
    return 0xFFFFFFFFi64;
  v2 = 4 * DB_GetGfxImageIndex(image);
  v3 = -1;
  do
  {
    v4 = streamFrontendGlob;
    if ( v2 >= streamFrontendGlob->imageBits.mBitCount )
    {
      LODWORD(v10) = streamFrontendGlob->imageBits.mBitCount;
      LODWORD(v9) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    mUse = v4->imageBits.mUse;
    if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v6 = 1 << (v2 & 0x1F);
    v7 = (__int64)(int)v2 >> 5;
    if ( (v6 & mUse[v7]) == 0 )
      break;
    mLoaded = v4->imageBits.mLoaded;
    if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    if ( (v6 & mLoaded[v7]) == 0 )
      break;
    ++v3;
    ++v2;
  }
  while ( v3 < 3 );
  return (unsigned int)v3;
}

/*
==============
Stream_GetImageStreamedPartsRange
==============
*/
void Stream_GetImageStreamedPartsRange(const GfxImage *image, StreamImageMip streamMip, unsigned int *low, unsigned int *high)
{
  StreamImageMip streamedPartCount; 
  unsigned int v9; 
  __int64 v10; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 80, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 81, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 )
  {
    streamedPartCount = image->streamedPartCount;
    if ( streamMip == EXCLUDE_HIGHEST )
      streamMip = streamedPartCount - 1;
    v9 = 4 * DB_GetGfxImageIndex(image);
    if ( streamedPartCount == NO_MIPS )
    {
      LODWORD(v10) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v10, 0) )
        __debugbreak();
    }
    *low = v9;
    if ( streamedPartCount < streamMip )
      streamMip = streamedPartCount;
    if ( streamMip < MIP3 )
      streamMip = MIP3;
    *high = v9 + streamMip;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 83, ASSERT_TYPE_ASSERT, "(ImagePartsRange( image, streamMip, low, high ))", (const char *)&queryFormat, "ImagePartsRange( image, streamMip, low, high )") )
  {
    __debugbreak();
  }
}

/*
==============
Stream_RequestGeneric
==============
*/
void Stream_RequestGeneric(const StreamKey *streamKey)
{
  unsigned int StreamKeyIndex; 
  char v2; 
  unsigned __int64 v3; 

  if ( (streamKey->flags & 2) == 0 )
  {
    if ( streamKey->dataSize )
    {
      StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
      v2 = StreamKeyIndex;
      v3 = StreamKeyIndex;
      Sys_InterlockedIncrement((volatile int *)&streamFrontendGlob->genericRequest.count[streamFrontendGlob->touchBufferIndex][StreamKeyIndex]);
      Sys_InterlockedOr((volatile int *)&streamFrontendGlob->genericRequest.bits[streamFrontendGlob->touchBufferIndex][v3 >> 5], 1 << (v2 & 0x1F));
    }
  }
}

/*
==============
Stream_RequestMesh
==============
*/
void Stream_RequestMesh(unsigned int meshIndex)
{
  const XModelSurfs *XModelSurfsAtIndex; 

  XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(meshIndex);
  Stream_RequestMeshInternal(XModelSurfsAtIndex, meshIndex);
}

/*
==============
Stream_RequestMesh
==============
*/
void Stream_RequestMesh(const XModelSurfs *mesh)
{
  unsigned int XModelSurfsIndex; 

  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  Stream_RequestMeshInternal(mesh, XModelSurfsIndex);
}

/*
==============
Stream_RequestMeshInternal
==============
*/
void Stream_RequestMeshInternal(const XModelSurfs *mesh, unsigned int meshIndex)
{
  unsigned __int64 v2; 
  unsigned int *v4; 
  volatile signed __int32 *v5; 
  unsigned int *v6; 

  v2 = meshIndex;
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1211, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1212, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) != 0 )
  {
    v4 = streamFrontendGlob->meshRequest.count[streamFrontendGlob->touchBufferIndex];
    v5 = (volatile signed __int32 *)&v4[v2];
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v4[v2]) )
      __debugbreak();
    _InterlockedIncrement(v5);
    v6 = &streamFrontendGlob->meshRequest.bits[streamFrontendGlob->touchBufferIndex][v2 >> 5];
    if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v6) )
      __debugbreak();
    _InterlockedOr((volatile signed __int32 *)v6, 1 << (v2 & 0x1F));
  }
}

/*
==============
Stream_RequestedXModelLod
==============
*/

__int64 __fastcall Stream_RequestedXModelLod(const XModel *const model, StreamModelLod streamLod)
{
  return RequestedXModelLod(model, streamLod);
}

/*
==============
Stream_SetMaterialTouchedUntilLoaded
==============
*/
void Stream_SetMaterialTouchedUntilLoaded(const Material *material)
{
  signed int touchMaterialUntilLoadCount; 
  __int64 v3; 
  __int64 v4; 
  const Material **touchMaterialsUntilLoad; 
  ScopedStreamFrontendUpdateLock v6; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 938, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material", -2i64) )
    __debugbreak();
  if ( (material->runtimeFlags & 0x10) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFF000000, "Stream SetMaterialTouchedUntilLoaded");
    ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v6);
    touchMaterialUntilLoadCount = streamFrontendGlob->touchMaterialUntilLoadCount;
    if ( (unsigned int)touchMaterialUntilLoadCount < 0x20 )
    {
      v3 = (int)streamFrontendGlob->touchMaterialUntilLoadCount;
      if ( touchMaterialUntilLoadCount <= 0 )
      {
LABEL_12:
        streamFrontendGlob->touchMaterialsUntilLoad[v3] = material;
        ++streamFrontendGlob->touchMaterialUntilLoadCount;
      }
      else
      {
        v4 = 0i64;
        touchMaterialsUntilLoad = streamFrontendGlob->touchMaterialsUntilLoad;
        while ( *touchMaterialsUntilLoad != material )
        {
          ++v4;
          ++touchMaterialsUntilLoad;
          if ( v4 >= v3 )
            goto LABEL_12;
        }
        Com_PrintWarning(35, "Stream_TouchMaterialUntilLoad: the given material is already in the list: %s\n", material->name);
      }
    }
    else
    {
      Com_PrintWarning(35, "Stream_TouchMaterialUntilLoad: exceeded max material count: %d\n", 32i64);
    }
    ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v6);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    Com_PrintWarning(35, "Stream_TouchMaterialUntilLoad: the given material doesn't use any streamed images: %s\n", material->name);
  }
}

/*
==============
Stream_TouchCamo
==============
*/
void Stream_TouchCamo(const Camo *const camo)
{
  Stream_TouchCamo(camo, MIP0);
}

/*
==============
Stream_TouchCamo
==============
*/
void Stream_TouchCamo(const Camo *const camo, const StreamImageMip streamMip)
{
  unsigned int textureDefCount; 
  __int64 v5; 
  __int64 v6; 
  MaterialTextureDef *v7; 
  const GfxImage *image; 

  if ( !camo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1086, ASSERT_TYPE_ASSERT, "( ( camo != nullptr ) )", "( camo ) = %p", NULL) )
    __debugbreak();
  textureDefCount = camo->textureDefCount;
  if ( textureDefCount )
  {
    v5 = textureDefCount;
    v6 = 0i64;
    do
    {
      v7 = &camo->textureDefs[v6];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1092, ASSERT_TYPE_ASSERT, "( ( textureDef != nullptr ) )", "( textureDef ) = %p", NULL) )
        __debugbreak();
      image = v7->image;
      if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1095, ASSERT_TYPE_ASSERT, "( ( image != nullptr ) )", "( image ) = %p", NULL) )
        __debugbreak();
      Stream_TouchImage_Array(image, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
      ++v6;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
Stream_TouchCamoAndCheck
==============
*/
bool Stream_TouchCamoAndCheck(const Camo *const camo)
{
  return Stream_TouchCamoAndCheck(camo, MIP0);
}

/*
==============
Stream_TouchCamoAndCheck
==============
*/
__int64 Stream_TouchCamoAndCheck(const Camo *const camo, const StreamImageMip streamMip)
{
  __int64 v2; 
  unsigned int textureDefCount; 
  unsigned __int8 v6; 
  __int64 v7; 

  v2 = 0i64;
  if ( !camo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1112, ASSERT_TYPE_ASSERT, "( ( camo != nullptr ) )", "( camo ) = %p", NULL) )
    __debugbreak();
  textureDefCount = camo->textureDefCount;
  v6 = 1;
  if ( textureDefCount )
  {
    v7 = textureDefCount;
    do
    {
      v6 &= Stream_TouchImageAndCheck_Internal_0_(camo->textureDefs[v2++].image, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
      --v7;
    }
    while ( v7 );
  }
  return v6;
}

/*
==============
Stream_TouchDObj
==============
*/
void Stream_TouchDObj(const DObj *obj, StreamImageMip streamMip)
{
  unsigned int NumModels; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  const XModel *Model; 
  __int64 v9; 
  XModelMaterialOverride *modelMaterialOverrides; 
  XModelMaterialOverride *v11; 
  __int64 v12; 
  __int64 data[16]; 
  __int64 v17; 
  StreamImageMip v18; 
  DObjPartBits partBits; 
  _BYTE v20[512]; 
  __int64 v21; 
  StreamImageMip v22; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 413, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj", -2i64) )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_hintDobjs, "stream_hintDobjs") )
  {
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_workerTouchDObj, "stream_workerTouchDObj") )
    {
      NumModels = DObjGetNumModels(obj);
      if ( NumModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 428, ASSERT_TYPE_SANITY, "( modelCount <= ( DOBJ_MAX_PARTS ) )", (const char *)&queryFormat, "modelCount <= DOBJ_MAX_SUBMODELS") )
        __debugbreak();
      v17 = 0i64;
      v18 = streamMip;
      DObjGetHidePartBits(obj, &partBits);
      memset_0(v20, 0, sizeof(v20));
      v5 = 0i64;
      v21 = 0i64;
      v22 = streamMip;
      v6 = 0;
      if ( NumModels )
      {
        v7 = 0i64;
        do
        {
          Model = DObjGetModel(obj, v6);
          if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 445, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v9 = v17;
          if ( v17 == 16 )
          {
            Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj::AddExtraWorker");
            Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_DOBJ, data);
            v17 = 0i64;
            Sys_ProfEndNamedEvent();
            v9 = v17;
          }
          data[v9] = (__int64)Model;
          ++v17;
          modelMaterialOverrides = obj->modelMaterialOverrides;
          if ( modelMaterialOverrides && (v11 = &modelMaterialOverrides[v7]) != NULL && (v12 = 0i64, v11->materialOverrideCount) )
          {
            v5 = v21;
            do
            {
              if ( v11->materialOverride[v12] )
              {
                if ( v5 == 16 )
                {
                  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj::AddExtraWorker");
                  Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_MATERIAL_OVERRIDES, v20);
                  v21 = 0i64;
                  Sys_ProfEndNamedEvent();
                  v5 = v21;
                }
                _RDX = 32 * v5;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rsi]
                  vmovups [rbp+rdx+240h+var_250], ymm0
                }
                v5 = ++v21;
              }
              v12 = (unsigned int)(v12 + 1);
            }
            while ( (unsigned int)v12 < v11->materialOverrideCount );
          }
          else
          {
            v5 = v21;
          }
          ++v6;
          ++v7;
        }
        while ( v6 < NumModels );
      }
      if ( v17 )
      {
        Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj::AddExtraWorker");
        Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_DOBJ, data);
        Sys_ProfEndNamedEvent();
        v5 = v21;
      }
      if ( v5 )
      {
        Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj::AddExtraWorker");
        Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_MATERIAL_OVERRIDES, v20);
        Sys_ProfEndNamedEvent();
      }
    }
    else
    {
      Stream_TouchDObjAndCheck(obj, streamMip);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TouchDObjAndCheck
==============
*/
__int64 Stream_TouchDObjAndCheck(const DObj *obj, StreamImageMip streamMip)
{
  StreamImageMip v4; 
  const DObj *v5; 
  unsigned __int8 v6; 
  unsigned int NumModels; 
  unsigned int v8; 
  __int64 v9; 
  const XModel *Model; 
  const dvar_t *v11; 
  unsigned int flags; 
  __int64 v13; 
  XModelMaterialOverride *modelMaterialOverrides; 
  XModelMaterialOverride *v15; 
  __int64 i; 
  unsigned int v20; 
  unsigned int v21; 
  const XModelLodInfo *LodInfo; 
  const XModelLodInfo *v23; 
  unsigned int numsurfs; 
  unsigned int v25; 
  unsigned int v26; 
  char v27; 
  const XModelLodInfo *v28; 
  XSurface *surfs; 
  unsigned int v30; 
  char v34; 
  unsigned int v35; 
  int v36; 
  unsigned int v37; 
  int v38; 
  unsigned int v39; 
  int v40; 
  unsigned int v41; 
  int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  int v48; 
  unsigned int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  unsigned int v58; 
  __int64 v65; 
  XModelMaterialOverride *v66; 
  XModelMaterialOverride *v67; 
  int v68; 
  MaterialOverride *v69; 
  const Material *overrideMaterial; 
  bool v71; 
  const Camo *overrideCamo; 
  const dvar_t *v73; 
  unsigned int v74; 
  const dvar_t *v75; 
  unsigned int v76; 
  __int64 result; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  char v83; 
  unsigned int v84; 
  unsigned int v85; 
  int numBones; 
  __int64 v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v92; 
  __int64 v93; 
  volatile int (*touchArray)[10240]; 
  Material *const *Skins; 
  const XModel *v96; 
  __int64 data[16]; 
  __int64 v98; 
  StreamImageMip v99; 
  DObjPartBits partBits; 
  _BYTE v101[512]; 
  __int64 v102; 
  StreamImageMip v103; 
  int v104[7]; 
  int v105; 
  unsigned int v106; 
  int v107; 
  int v108; 
  int v109; 
  unsigned int v110; 
  unsigned int v111; 
  unsigned int v112; 
  int v113; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v4 = streamMip;
  v5 = obj;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObjAndCheck");
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 239, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_hintDobjs, "stream_hintDobjs") )
  {
    v6 = 0;
    goto LABEL_198;
  }
  touchArray = (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex];
  numBones = 0;
  v85 = 0;
  NumModels = DObjGetNumModels(v5);
  v92 = NumModels;
  if ( NumModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 253, ASSERT_TYPE_SANITY, "( modelCount <= ( DOBJ_MAX_PARTS ) )", (const char *)&queryFormat, "modelCount <= DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  v6 = 1;
  v83 = 1;
  v98 = 0i64;
  v99 = v4;
  DObjGetHidePartBits(v5, &partBits);
  memset_0(v101, 0, sizeof(v101));
  v102 = 0i64;
  v103 = v4;
  v8 = 0;
  v84 = 0;
  if ( NumModels )
  {
    v9 = 0i64;
    v89 = 0i64;
    while ( 1 )
    {
      Model = DObjGetModel(v5, v8);
      v96 = Model;
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 270, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( v6 )
        break;
      v11 = DCONST_DVARBOOL_stream_workerTouchDObj;
      if ( !DCONST_DVARBOOL_stream_workerTouchDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_workerTouchDObj") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v11->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v11->name) )
          __debugbreak();
      }
      if ( !v11->current.enabled )
        break;
      v13 = v98;
      if ( v98 == 16 )
      {
        Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObjAndCheck::AddExtraWorker");
        Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_DOBJ, data);
        v98 = 0i64;
        Sys_ProfEndNamedEvent();
        v13 = v98;
      }
      data[v13] = (__int64)Model;
      ++v98;
      modelMaterialOverrides = v5->modelMaterialOverrides;
      if ( modelMaterialOverrides )
      {
        v15 = &modelMaterialOverrides[v9];
        if ( v15 )
        {
          for ( i = 0i64; (unsigned int)i < v15->materialOverrideCount; i = (unsigned int)(i + 1) )
          {
            if ( v15->materialOverride[i] )
            {
              if ( v102 == 16 )
              {
                Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObjAndCheck::AddExtraWorker");
                Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_MATERIAL_OVERRIDES, v101);
                v102 = 0i64;
                Sys_ProfEndNamedEvent();
              }
              _RAX = 32 * v102;
              __asm
              {
                vmovups ymm0, ymmword ptr [rsi]
                vmovups [rsp+rax+3E8h+var_298], ymm0
              }
              ++v102;
            }
          }
        }
LABEL_168:
        v5 = obj;
      }
LABEL_169:
      v84 = ++v8;
      v89 = ++v9;
      v85 += numBones;
      if ( v8 >= v92 )
        goto LABEL_170;
    }
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numBones = Model->numBones;
    v20 = XModelHighLod(Model);
    v21 = v20;
    v91 = v20;
    if ( v20 >= Model->numLods )
    {
      LODWORD(v81) = Model->numLods;
      LODWORD(v80) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v80, v81) )
        __debugbreak();
    }
    LodInfo = XModelGetLodInfo(Model, v21);
    if ( LodInfo->numsurfs && LodInfo->surfs )
    {
      if ( v21 + 1 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 214, ASSERT_TYPE_ASSERT, "(newLod <= static_cast<uint>( StreamModelLod::LOWEST ))", (const char *)&queryFormat, "newLod <= static_cast<uint>( StreamModelLod::LOWEST )") )
        __debugbreak();
      Stream_TouchMeshForXModelLod(Model, (StreamModelLod)(v21 + 1));
      Skins = XModelGetSkins(Model, v21);
      v23 = XModelGetLodInfo(Model, v21);
      numsurfs = v23->numsurfs;
      v90 = numsurfs;
      if ( !v23->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 331, ASSERT_TYPE_ASSERT, "(surfaceCount > 0)", (const char *)&queryFormat, "surfaceCount > 0") )
        __debugbreak();
      v25 = 0;
      if ( numsurfs )
      {
        v93 = 0i64;
        v26 = v85 >> 5;
        v27 = v85 & 0x1F;
        do
        {
          v28 = XModelGetLodInfo(Model, v21);
          if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 331, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
            __debugbreak();
          if ( v25 >= v28->numsurfs )
          {
            LODWORD(v81) = v28->numsurfs;
            LODWORD(v80) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 332, ASSERT_TYPE_ASSERT, "(unsigned)( surfIndex ) < (unsigned)( lodInfo->numsurfs )", "surfIndex doesn't index lodInfo->numsurfs\n\t%i not in [0, %i)", v80, v81) )
              __debugbreak();
          }
          if ( v25 + v28->surfIndex >= Model->numsurfs )
          {
            LODWORD(v81) = Model->numsurfs;
            LODWORD(v80) = v25 + v28->surfIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 333, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex + surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex + surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v80, v81) )
              __debugbreak();
          }
          if ( !v28->surfs )
          {
            LODWORD(v82) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 340, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", Model->name, v82) )
              __debugbreak();
          }
          if ( !v28->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 341, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
            __debugbreak();
          surfs = v28->surfs;
          v30 = 0;
          _RDI = v104;
          _RSI = (__int64)&surfs->partBits + 192i64 * (int)v25 - (_QWORD)v104;
          do
          {
            __asm
            {
              vlddqu  xmm6, xmmword ptr [rsi+rdi]
              vmovdqu xmmword ptr [rdi], xmm6
            }
            ++v30;
            _RDI += 4;
          }
          while ( v30 < 2 );
          v34 = 32 - v27;
          if ( (v85 & 0x1F) != 0 )
          {
            if ( v26 )
              v35 = 0;
            else
              v35 = (unsigned int)v104[0] >> v27;
            v106 = v35;
            if ( v26 )
              v36 = 0;
            else
              v36 = v104[0] << v34;
            if ( v26 <= 1 )
              v37 = (unsigned int)v104[1 - v26] >> v27;
            else
              v37 = 0;
            v107 = v36 | v37;
            if ( v26 <= 1 )
              v38 = v104[1 - v26] << v34;
            else
              v38 = 0;
            if ( v26 <= 2 )
              v39 = (unsigned int)v104[2 - v26] >> v27;
            else
              v39 = 0;
            v108 = v38 | v39;
            if ( v26 <= 2 )
              v40 = v104[2 - v26] << v34;
            else
              v40 = 0;
            if ( v26 <= 3 )
              v41 = (unsigned int)v104[3 - v26] >> v27;
            else
              v41 = 0;
            v109 = v40 | v41;
            if ( v26 <= 3 )
              v42 = v104[3 - v26] << v34;
            else
              v42 = 0;
            if ( v26 <= 4 )
              v43 = (unsigned int)v104[4 - v26] >> v27;
            else
              v43 = 0;
            v110 = v42 | v43;
            if ( v26 <= 4 )
              v44 = v104[4 - v26] << v34;
            else
              v44 = 0;
            if ( v26 <= 5 )
              v45 = (unsigned int)v104[5 - v26] >> v27;
            else
              v45 = 0;
            v111 = v44 | v45;
            if ( v26 <= 5 )
              v46 = v104[5 - v26] << v34;
            else
              v46 = 0;
            if ( v26 <= 6 )
              v47 = (unsigned int)v104[6 - v26] >> v27;
            else
              v47 = 0;
            v112 = v46 | v47;
            if ( v26 <= 6 )
              v48 = v104[6 - v26] << v34;
            else
              v48 = 0;
            if ( v26 <= 7 )
              v49 = v48 | ((unsigned int)v104[7 - v26] >> v27);
            else
              v49 = v48;
          }
          else
          {
            if ( v26 )
              v50 = 0;
            else
              v50 = v104[0];
            v106 = v50;
            if ( v26 <= 1 )
              v51 = v104[1 - v26];
            else
              v51 = 0;
            v107 = v51;
            if ( v26 <= 2 )
              v52 = v104[2 - v26];
            else
              v52 = 0;
            v108 = v52;
            if ( v26 <= 3 )
              v53 = v104[3 - v26];
            else
              v53 = 0;
            v109 = v53;
            if ( v26 <= 4 )
              v54 = v104[4 - v26];
            else
              v54 = 0;
            v110 = v54;
            if ( v26 <= 5 )
              v55 = v104[5 - v26];
            else
              v55 = 0;
            v111 = v55;
            if ( v26 <= 6 )
              v56 = v104[6 - v26];
            else
              v56 = 0;
            v112 = v56;
            if ( v26 <= 7 )
              v49 = v104[7 - v26];
            else
              v49 = 0;
          }
          if ( (v105 & 2) != 0 )
            v57 = v49 | 2;
          else
            v57 = v49 & 0xFFFFFFFD;
          v113 = v57;
          v58 = 0;
          while ( 1 )
          {
            _RDI = 2i64 * v58;
            __asm
            {
              vlddqu  xmm6, [rsp+rdi*8+3E8h+var_68]
              vlddqu  xmm0, xmmword ptr [rsp+rdi*8+3E8h+partBits.baseclass_0.baseclass_0.baseclass_0.array]
              vpand   xmm1, xmm6, xmm0
              vptest  xmm1, xmm1
            }
            if ( !_ZF )
              break;
            if ( ++v58 >= 2 )
            {
              v65 = v93;
              v83 &= Stream_TouchMaterialAndCheck_Internal<0>(Skins[v93], streamMip, touchArray);
              goto LABEL_147;
            }
          }
          v65 = v93;
LABEL_147:
          ++v25;
          v93 = v65 + 1;
          v21 = v91;
          Model = v96;
        }
        while ( v25 < v90 );
        v6 = v83;
        v4 = streamMip;
        v8 = v84;
        v9 = v89;
      }
      else
      {
        v9 = v89;
      }
    }
    v5 = obj;
    v66 = obj->modelMaterialOverrides;
    if ( !v66 )
      goto LABEL_169;
    v67 = &v66[v9];
    v68 = 0;
    if ( !v67->materialOverrideCount )
      goto LABEL_168;
    while ( 1 )
    {
      v69 = v67->materialOverride[v68];
      if ( v69 )
      {
        if ( v69->overrideType == MATERIAL_OVERRIDETYPE_CAMO )
        {
          overrideCamo = v69->overrideCamo;
          if ( !overrideCamo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 370, ASSERT_TYPE_ASSERT, "( ( camo != nullptr ) )", "( camo ) = %p", NULL) )
            __debugbreak();
          v71 = Stream_TouchCamoAndCheck(overrideCamo, v4);
        }
        else
        {
          if ( v69->overrideType != MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
          {
            LODWORD(v80) = v69->overrideType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 382, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp(382): unhandled case %d in switch statement", v80) )
              __debugbreak();
            goto LABEL_166;
          }
          overrideMaterial = v69->overrideMaterial;
          if ( !overrideMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 377, ASSERT_TYPE_ASSERT, "( ( material != nullptr ) )", "( material ) = %p", NULL) )
            __debugbreak();
          v71 = Stream_TouchMaterialAndCheck_Internal<0>(overrideMaterial, v4, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
        }
        v6 &= v71;
      }
LABEL_166:
      if ( ++v68 >= v67->materialOverrideCount )
      {
        v83 = v6;
        v8 = v84;
        v9 = v89;
        goto LABEL_168;
      }
    }
  }
LABEL_170:
  if ( v98 )
  {
    v73 = DCONST_DVARBOOL_stream_workerTouchDObj;
    if ( !DCONST_DVARBOOL_stream_workerTouchDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_workerTouchDObj") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v74 = v73->flags;
      if ( (v74 & 0x81488) != 0 && (v74 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v73->name) )
        __debugbreak();
    }
    if ( !v73->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 392, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_stream_workerTouchDObj, \"stream_workerTouchDObj\" ))", (const char *)&queryFormat, "Dconst_GetBool( stream_workerTouchDObj )") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj::AddExtraWorker");
    Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_DOBJ, data);
    Sys_ProfEndNamedEvent();
  }
  if ( v102 )
  {
    v75 = DCONST_DVARBOOL_stream_workerTouchDObj;
    if ( !DCONST_DVARBOOL_stream_workerTouchDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_workerTouchDObj") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v76 = v75->flags;
      if ( (v76 & 0x81488) != 0 && (v76 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v75->name) )
        __debugbreak();
    }
    if ( !v75->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 400, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_stream_workerTouchDObj, \"stream_workerTouchDObj\" ))", (const char *)&queryFormat, "Dconst_GetBool( stream_workerTouchDObj )") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TouchDObj::AddExtraWorker");
    Sys_AddWorkerCmd(WRKCMD_STREAM_TOUCH_MATERIAL_OVERRIDES, v101);
    Sys_ProfEndNamedEvent();
  }
LABEL_198:
  Sys_ProfEndNamedEvent();
  result = v6;
  _R11 = &v114;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
Stream_TouchDObjCmd
==============
*/
void Stream_TouchDObjCmd(const void *const data)
{
  _QWORD *v2; 
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned __int64 v5; 
  const XModel *v6; 
  unsigned int v7; 
  unsigned int v8; 
  const XModelLodInfo *LodInfo; 
  const XModelLodInfo *v10; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *v12; 
  unsigned __int16 surfIndex; 
  const XModelLodInfo *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  const XModelLodInfo *v19; 
  unsigned int i; 
  char v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  unsigned int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  __int64 v56; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  int numBones; 
  __int64 v65; 
  unsigned __int64 v67; 
  __int64 v68; 
  const XModel *v69; 
  unsigned __int64 v70; 
  __int128 v71; 
  int v72; 
  unsigned int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 

  v2 = data;
  if ( !*((_QWORD *)data + 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 509, ASSERT_TYPE_ASSERT, "(cmd->modelCount)", (const char *)&queryFormat, "cmd->modelCount") )
    __debugbreak();
  if ( v2[16] > 0x10ui64 )
  {
    LODWORD(v58) = v2[16];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 510, ASSERT_TYPE_ASSERT, "( cmd->modelCount ) <= ( StreamTouchDObjCmd::MAX_MODEL_COUNT )", "cmd->modelCount not in [0, StreamTouchDObjCmd::MAX_MODEL_COUNT]\n\t%u not in [0, %u]", v58, 16) )
      __debugbreak();
  }
  v3 = v2[16];
  v4 = 0;
  v61 = 0;
  v70 = v3;
  if ( v3 > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 518, ASSERT_TYPE_SANITY, "( modelCount <= ( DOBJ_MAX_PARTS ) )", (const char *)&queryFormat, "modelCount <= DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  v5 = 0i64;
  v67 = 0i64;
  if ( v3 )
  {
    __asm { vmovaps [rsp+100h+var_30], xmm6 }
    do
    {
      v6 = (const XModel *)v2[v5];
      v69 = v6;
      if ( !v6 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 523, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
      }
      numBones = v6->numBones;
      v7 = XModelHighLod(v6);
      v8 = v7;
      v63 = v7;
      if ( v7 >= v6->numLods )
      {
        LODWORD(v59) = v6->numLods;
        LODWORD(v58) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      LodInfo = XModelGetLodInfo(v6, v8);
      if ( LodInfo->numsurfs && LodInfo->surfs )
      {
        if ( v8 + 1 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 214, ASSERT_TYPE_ASSERT, "(newLod <= static_cast<uint>( StreamModelLod::LOWEST ))", (const char *)&queryFormat, "newLod <= static_cast<uint>( StreamModelLod::LOWEST )") )
          __debugbreak();
        Stream_TouchMeshForXModelLod(v6, (StreamModelLod)(v8 + 1));
        v10 = XModelGetLodInfo(v6, v8);
        numsurfs = v6->numsurfs;
        v12 = v10;
        surfIndex = v10->surfIndex;
        if ( surfIndex >= numsurfs )
        {
          LODWORD(v59) = numsurfs;
          LODWORD(v58) = surfIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v58, v59) )
            __debugbreak();
        }
        v68 = (__int64)&v6->materialHandles[v12->surfIndex];
        v14 = XModelGetLodInfo(v6, v8);
        v15 = v14->numsurfs;
        v62 = v15;
        if ( !v14->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 536, ASSERT_TYPE_ASSERT, "(surfaceCount > 0)", (const char *)&queryFormat, "surfaceCount > 0") )
          __debugbreak();
        v16 = 0;
        if ( v15 )
        {
          v65 = 0i64;
          v17 = v4 >> 5;
          v18 = v4 & 0x1F;
          do
          {
            v19 = XModelGetLodInfo(v6, v8);
            if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 331, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
              __debugbreak();
            if ( v16 >= v19->numsurfs )
            {
              LODWORD(v59) = v19->numsurfs;
              LODWORD(v58) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 332, ASSERT_TYPE_ASSERT, "(unsigned)( surfIndex ) < (unsigned)( lodInfo->numsurfs )", "surfIndex doesn't index lodInfo->numsurfs\n\t%i not in [0, %i)", v58, v59) )
                __debugbreak();
            }
            if ( v16 + v19->surfIndex >= v6->numsurfs )
            {
              LODWORD(v59) = v6->numsurfs;
              LODWORD(v58) = v16 + v19->surfIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 333, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex + surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex + surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v58, v59) )
                __debugbreak();
            }
            if ( !v19->surfs )
            {
              LODWORD(v60) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 340, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", v6->name, v60) )
                __debugbreak();
            }
            if ( !v19->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 341, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
              __debugbreak();
            _RDI = 0i64;
            _RSI = (__int64)&v19->surfs[v16];
            for ( i = 0; i < 2; ++i )
            {
              __asm
              {
                vlddqu  xmm6, xmmword ptr [rdi+rsi+70h]
                vmovdqu [rbp+rdi+57h+var_78], xmm6
              }
              _RDI += 16i64;
            }
            v24 = 32 - v18;
            if ( v18 )
            {
              if ( v17 )
                v25 = 0;
              else
                v25 = (unsigned int)v71 >> v18;
              v73 = v25;
              if ( v17 )
                v26 = 0;
              else
                v26 = (_DWORD)v71 << v24;
              if ( v17 <= 1 )
                v27 = *((_DWORD *)&v71 + 1 - v17) >> v18;
              else
                v27 = 0;
              v74 = v26 | v27;
              if ( v17 <= 1 )
                v28 = *((_DWORD *)&v71 + 1 - v17) << v24;
              else
                v28 = 0;
              if ( v17 <= 2 )
                v29 = *((_DWORD *)&v71 + 2 - v17) >> v18;
              else
                v29 = 0;
              v75 = v28 | v29;
              if ( v17 <= 2 )
                v30 = *((_DWORD *)&v71 + 2 - v17) << v24;
              else
                v30 = 0;
              if ( v17 <= 3 )
                v31 = *((_DWORD *)&v71 + 3 - v17) >> v18;
              else
                v31 = 0;
              v76 = v30 | v31;
              if ( v17 <= 3 )
                v32 = *((_DWORD *)&v71 + 3 - v17) << v24;
              else
                v32 = 0;
              if ( v17 <= 4 )
                v33 = *((_DWORD *)&v71 + 4 - v17) >> v18;
              else
                v33 = 0;
              v77 = v32 | v33;
              if ( v17 <= 4 )
                v34 = *((_DWORD *)&v71 + 4 - v17) << v24;
              else
                v34 = 0;
              if ( v17 <= 5 )
                v35 = *((_DWORD *)&v71 + 5 - v17) >> v18;
              else
                v35 = 0;
              v78 = v34 | v35;
              if ( v17 <= 5 )
                v36 = *((_DWORD *)&v71 + 5 - v17) << v24;
              else
                v36 = 0;
              if ( v17 <= 6 )
                v37 = *((_DWORD *)&v71 + 6 - v17) >> v18;
              else
                v37 = 0;
              v79 = v36 | v37;
              if ( v17 <= 6 )
                v38 = *((_DWORD *)&v71 + 6 - v17) << v24;
              else
                v38 = 0;
              if ( v17 <= 7 )
                v39 = v38 | (*((_DWORD *)&v71 + 7 - v17) >> v18);
              else
                v39 = v38;
            }
            else
            {
              if ( v17 )
                v40 = 0;
              else
                v40 = v71;
              v73 = v40;
              if ( v17 <= 1 )
                v41 = *((_DWORD *)&v71 + 1 - v17);
              else
                v41 = 0;
              v74 = v41;
              if ( v17 <= 2 )
                v42 = *((_DWORD *)&v71 + 2 - v17);
              else
                v42 = 0;
              v75 = v42;
              if ( v17 <= 3 )
                v43 = *((_DWORD *)&v71 + 3 - v17);
              else
                v43 = 0;
              v76 = v43;
              if ( v17 <= 4 )
                v44 = *((_DWORD *)&v71 + 4 - v17);
              else
                v44 = 0;
              v77 = v44;
              if ( v17 <= 5 )
                v45 = *((_DWORD *)&v71 + 5 - v17);
              else
                v45 = 0;
              v78 = v45;
              if ( v17 <= 6 )
                v46 = *((_DWORD *)&v71 + 6 - v17);
              else
                v46 = 0;
              v79 = v46;
              if ( v17 <= 7 )
                v39 = *((_DWORD *)&v71 + 7 - v17);
              else
                v39 = 0;
            }
            if ( (v72 & 2) != 0 )
              v47 = v39 | 2;
            else
              v47 = v39 & 0xFFFFFFFD;
            v80 = v47;
            v48 = 0;
            while ( 1 )
            {
              _RDI = 2i64 * v48;
              __asm { vlddqu  xmm6, [rbp+rdi*8+57h+var_58] }
              _RAX = data;
              __asm
              {
                vlddqu  xmm0, xmmword ptr [rax+rdi*8+8Ch]
                vpand   xmm1, xmm0, xmm6
                vptest  xmm1, xmm1
              }
              if ( !_ZF )
                break;
              if ( ++v48 >= 2 )
              {
                v56 = v65;
                Stream_TouchMaterial_Internal(*(const Material **)(v68 + 8 * v65), *((StreamImageMip *)data + 34), (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
                goto LABEL_128;
              }
            }
            v56 = v65;
LABEL_128:
            v6 = v69;
            ++v16;
            v65 = v56 + 1;
            v8 = v63;
          }
          while ( v16 < v62 );
          v2 = data;
          v4 = v61;
        }
      }
      v4 += numBones;
      v5 = v67 + 1;
      v67 = v5;
      v61 = v4;
    }
    while ( v5 < v70 );
    __asm { vmovaps xmm6, [rsp+100h+var_30] }
  }
}

/*
==============
Stream_TouchImage
==============
*/
void Stream_TouchImage(const GfxImage *image)
{
  Stream_TouchImage_Array(image, MIP0, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchImage
==============
*/
void Stream_TouchImage(const GfxImage *image, StreamImageMip streamMip)
{
  Stream_TouchImage_Array(image, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchImageAndCheck
==============
*/
bool Stream_TouchImageAndCheck(const GfxImage *image)
{
  return Stream_TouchImageAndCheck_Internal_0_(image, MIP0, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchImageAndCheck
==============
*/
bool Stream_TouchImageAndCheck(const GfxImage *image, StreamImageMip streamMip)
{
  return Stream_TouchImageAndCheck_Internal_0_(image, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchImageAndCheckAnyAvailable
==============
*/
bool Stream_TouchImageAndCheckAnyAvailable(const GfxImage *image, StreamImageMip streamMip)
{
  return Stream_TouchImageAndCheck_Internal_1_(image, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchImage_Array
==============
*/
void Stream_TouchImage_Array(const GfxImage *image, StreamImageMip streamMip, volatile int (*touchArray)[10240])
{
  int streamedPartCount; 
  signed int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  volatile signed __int32 *v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 52, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) != 0 )
  {
    streamedPartCount = image->streamedPartCount;
    if ( streamMip == EXCLUDE_HIGHEST )
      streamMip = streamedPartCount - 1;
    v7 = 4 * DB_GetGfxImageIndex(image);
    v8 = v7 + I_clamp(streamMip, 1, streamedPartCount);
    if ( v7 < v8 )
    {
      v9 = __ROL4__(1, v7);
      do
      {
        if ( (unsigned int)(v7 >> 5) >= 0x2800 )
        {
          LODWORD(v13) = 10240;
          LODWORD(v12) = v7 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v10 = (__int64)v7 >> 5;
        v11 = &(*touchArray)[v10];
        if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&(*touchArray)[v10]) )
          __debugbreak();
        _InterlockedOr(v11, v9);
        ++v7;
        v9 = __ROL4__(v9, 1);
      }
      while ( v7 < v8 );
    }
  }
}

/*
==============
Stream_TouchMaterial
==============
*/
void Stream_TouchMaterial(const Material *material)
{
  Stream_TouchMaterial_Internal(material, MIP0, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchMaterial
==============
*/
void Stream_TouchMaterial(const Material *material, StreamImageMip streamMip)
{
  Stream_TouchMaterial_Internal(material, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchMaterialAndCheck
==============
*/
bool Stream_TouchMaterialAndCheck(const Material *material)
{
  return Stream_TouchMaterialAndCheck_Internal<0>(material, MIP0, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchMaterialAndCheck
==============
*/
bool Stream_TouchMaterialAndCheck(const Material *material, StreamImageMip streamMip)
{
  return Stream_TouchMaterialAndCheck_Internal<0>(material, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchMaterialAndCheckAnyAvailable
==============
*/
bool Stream_TouchMaterialAndCheckAnyAvailable(const Material *material, StreamImageMip streamMip)
{
  return Stream_TouchMaterialAndCheck_Internal<1>(material, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
}

/*
==============
Stream_TouchMaterialOverridesCmd
==============
*/
void Stream_TouchMaterialOverridesCmd(const void *const data)
{
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  const Material *v5; 
  const Camo *v6; 
  __int64 v7; 

  if ( !*((_QWORD *)data + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 566, ASSERT_TYPE_ASSERT, "(cmd->materialOverrideCount)", (const char *)&queryFormat, "cmd->materialOverrideCount") )
    __debugbreak();
  if ( *((_QWORD *)data + 64) > 0x10ui64 )
  {
    LODWORD(v7) = *((_QWORD *)data + 64);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 567, ASSERT_TYPE_ASSERT, "( cmd->materialOverrideCount ) <= ( StreamTouchMaterialOverridesCmd::MAX_MATERIAL_OVERRRIDE_COUNT )", "cmd->materialOverrideCount not in [0, StreamTouchMaterialOverridesCmd::MAX_MATERIAL_OVERRRIDE_COUNT]\n\t%u not in [0, %u]", v7, 16) )
      __debugbreak();
  }
  v2 = 0;
  if ( *((_QWORD *)data + 64) )
  {
    v3 = 0i64;
    do
    {
      v4 = 32 * v3;
      if ( *(_DWORD *)((char *)data + v4 + 24) == 1 )
      {
        v6 = *(const Camo **)((char *)data + v4 + 8);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 578, ASSERT_TYPE_ASSERT, "( ( camo != nullptr ) )", "( camo ) = %p", NULL) )
          __debugbreak();
        Stream_TouchCamo(v6, *((const StreamImageMip *)data + 130));
      }
      else if ( *(_DWORD *)((char *)data + v4 + 24) == 3 )
      {
        v5 = *(const Material **)((char *)data + v4 + 8);
        if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 585, ASSERT_TYPE_ASSERT, "( ( material != nullptr ) )", "( material ) = %p", NULL) )
          __debugbreak();
        Stream_TouchMaterial_Internal(v5, *((StreamImageMip *)data + 130), (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
      }
      else
      {
        LODWORD(v7) = *(_DWORD *)((char *)data + v4 + 24);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 590, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp(590): unhandled case %d in switch statement", v7) )
          __debugbreak();
      }
      v3 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)data + 64) );
  }
}

/*
==============
Stream_TouchMaterial_Internal
==============
*/
void Stream_TouchMaterial_Internal(const Material *material, StreamImageMip streamMip, volatile int (*touchArray)[10240])
{
  StreamImageMip v4; 
  const Material *v5; 
  unsigned int i; 
  GfxImage *image; 
  int streamedPartCount; 
  int v9; 
  signed int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  volatile signed __int32 *v14; 
  __int64 v15; 
  __int64 v16; 

  v4 = streamMip;
  v5 = material;
  Sys_ProfBeginNamedEvent(0xFF000000, "Stream TouchMaterial");
  for ( i = 0; i < v5->textureCount; ++i )
  {
    image = v5->textureTable[i].image;
    if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 52, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( (image->flags & 0x40) != 0 )
    {
      streamedPartCount = image->streamedPartCount;
      v9 = streamedPartCount - 1;
      if ( v4 != EXCLUDE_HIGHEST )
        v9 = v4;
      v10 = 4 * DB_GetGfxImageIndex(image);
      if ( !streamedPartCount )
      {
        LODWORD(v16) = 0;
        LODWORD(v15) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v15, v16) )
          __debugbreak();
      }
      if ( streamedPartCount < v9 )
        v9 = streamedPartCount;
      if ( v9 < 1 )
        v9 = 1;
      v11 = v10 + v9;
      if ( v10 < v11 )
      {
        v12 = __ROL4__(1, v10);
        do
        {
          if ( (unsigned int)(v10 >> 5) >= 0x2800 )
          {
            LODWORD(v16) = 10240;
            LODWORD(v15) = v10 >> 5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( ( index >> 5 ) ) < (unsigned)( ( sizeof( *array_counter( bitArray ) ) + 0 ) )", "( index >> 5 ) doesn't index ARRAY_COUNT( bitArray )\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          v13 = (__int64)v10 >> 5;
          v14 = &(*touchArray)[v13];
          if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&(*touchArray)[v13]) )
            __debugbreak();
          _InterlockedOr(v14, v12);
          ++v10;
          v12 = __ROL4__(v12, 1);
        }
        while ( v10 < v11 );
        v5 = material;
        v4 = streamMip;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TouchMeshForXModelLod
==============
*/
void Stream_TouchMeshForXModelLod(const XModel *model, StreamModelLod streamLod)
{
  __int64 v3; 
  XModelSurfs *modelSurfsStaging; 
  unsigned int XModelSurfsIndex; 
  const XModelSurfs *XModelSurfsAtIndex; 

  if ( streamLod )
  {
    v3 = (unsigned int)RequestedXModelLod(model, streamLod);
    if ( (unsigned int)v3 >= model->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v3, model->numLods) )
      __debugbreak();
    modelSurfsStaging = model->lodInfo[v3].modelSurfsStaging;
    if ( !modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 227, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
      __debugbreak();
    XModelSurfsIndex = DB_GetXModelSurfsIndex(modelSurfsStaging);
    XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(XModelSurfsIndex);
    Stream_RequestMeshInternal(XModelSurfsAtIndex, XModelSurfsIndex);
  }
}

/*
==============
Stream_TouchXModel
==============
*/
void Stream_TouchXModel(const XModel *model)
{
  unsigned int v2; 

  v2 = XModelHighLod(model) + 1;
  if ( v2 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 214, ASSERT_TYPE_ASSERT, "(newLod <= static_cast<uint>( StreamModelLod::LOWEST ))", (const char *)&queryFormat, "newLod <= static_cast<uint>( StreamModelLod::LOWEST )") )
    __debugbreak();
  Stream_TouchXModel(model, (StreamModelLod)v2, MIP0);
}

/*
==============
Stream_TouchXModel
==============
*/
void Stream_TouchXModel(const XModel *model, StreamImageMip streamMip)
{
  unsigned int v4; 

  v4 = XModelHighLod(model) + 1;
  if ( v4 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 214, ASSERT_TYPE_ASSERT, "(newLod <= static_cast<uint>( StreamModelLod::LOWEST ))", (const char *)&queryFormat, "newLod <= static_cast<uint>( StreamModelLod::LOWEST )") )
    __debugbreak();
  Stream_TouchXModel(model, (StreamModelLod)v4, streamMip);
}

/*
==============
Stream_TouchXModel
==============
*/
void Stream_TouchXModel(const XModel *model, StreamModelLod streamLod, StreamImageMip streamMip)
{
  StreamFrontendGlob *v6; 
  __int64 deferredTouchXModelCount; 
  unsigned __int64 v8; 
  StreamImageMip *p_streamMip; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  const Material **Skins; 
  ScopedStreamFrontendUpdateLock v14; 

  Sys_ProfBeginNamedEvent(0xFF000000, "Stream_TouchXModel");
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_deferTouchXModel, "stream_deferTouchXModel") )
  {
    ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v14);
    v6 = streamFrontendGlob;
    deferredTouchXModelCount = streamFrontendGlob->deferredTouchXModelCount;
    if ( (unsigned int)deferredTouchXModelCount < 0x3E )
    {
      v11 = deferredTouchXModelCount;
      streamFrontendGlob->deferredTouchXModels[v11].model = model;
      v6->deferredTouchXModels[v11].streamLod = streamLod;
      v6->deferredTouchXModels[v11].streamMip = streamMip;
      ++streamFrontendGlob->deferredTouchXModelCount;
      ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v14);
      goto LABEL_22;
    }
    v8 = 0i64;
    p_streamMip = &streamFrontendGlob->deferredTouchXModels[0].streamMip;
    while ( *(const XModel **)(p_streamMip - 3) != model || *((_DWORD *)p_streamMip - 1) != streamLod || *p_streamMip != streamMip )
    {
      ++v8;
      p_streamMip += 4;
      if ( v8 >= 0x3E )
      {
        Com_PrintError(35, "Max deferred xmodel touch count reached: STREAM_MAX_TOUCH_XMODEL = %u\n", 62i64);
        break;
      }
    }
    ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v14);
  }
  if ( streamLod )
    v10 = RequestedXModelLod(model, streamLod);
  else
    v10 = 0;
  if ( v10 >= model->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 683, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v10, model->numLods) )
    __debugbreak();
  if ( CanTouchXModelLod(model, v10) )
  {
    Sys_ProfBeginNamedEvent(0xFF000000, "Stream TouchXModel");
    LOWORD(v12) = XModelGetLodInfo(model, v10)->numsurfs;
    Skins = (const Material **)XModelGetSkins(model, v10);
    if ( (_WORD)v12 )
    {
      v12 = (unsigned __int16)v12;
      do
      {
        Stream_TouchMaterial_Internal(*Skins++, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
        --v12;
      }
      while ( v12 );
    }
    Stream_TouchMeshForXModelLod(model, streamLod);
    Sys_ProfEndNamedEvent();
  }
LABEL_22:
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TouchXModelAndCheck
==============
*/
bool Stream_TouchXModelAndCheck(const XModel *model)
{
  unsigned int v2; 

  v2 = XModelHighLod(model) + 1;
  if ( v2 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 214, ASSERT_TYPE_ASSERT, "(newLod <= static_cast<uint>( StreamModelLod::LOWEST ))", (const char *)&queryFormat, "newLod <= static_cast<uint>( StreamModelLod::LOWEST )") )
    __debugbreak();
  return Stream_TouchXModelAndCheck(model, (StreamModelLod)v2, MIP0);
}

/*
==============
Stream_TouchXModelAndCheck
==============
*/
bool Stream_TouchXModelAndCheck(const XModel *model, StreamImageMip streamMip)
{
  unsigned int v4; 

  v4 = XModelHighLod(model) + 1;
  if ( v4 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 214, ASSERT_TYPE_ASSERT, "(newLod <= static_cast<uint>( StreamModelLod::LOWEST ))", (const char *)&queryFormat, "newLod <= static_cast<uint>( StreamModelLod::LOWEST )") )
    __debugbreak();
  return Stream_TouchXModelAndCheck(model, (StreamModelLod)v4, streamMip);
}

/*
==============
Stream_TouchXModelAndCheck
==============
*/
char Stream_TouchXModelAndCheck(const XModel *model, StreamModelLod streamLod, StreamImageMip streamMip)
{
  unsigned int v6; 
  __int64 SurfCount; 
  const Material **Skins; 
  char v10; 

  if ( streamLod )
    v6 = RequestedXModelLod(model, streamLod);
  else
    v6 = 0;
  if ( v6 >= model->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v6, model->numLods) )
    __debugbreak();
  if ( !CanTouchXModelLod(model, v6) )
    return 1;
  Sys_ProfBeginNamedEvent(0xFF000000, "Stream TouchXModelAndCheck");
  SurfCount = XModelGetSurfCount(model, v6);
  Skins = (const Material **)XModelGetSkins(model, v6);
  v10 = 1;
  if ( (_DWORD)SurfCount )
  {
    do
    {
      v10 &= Stream_TouchMaterialAndCheck_Internal<0>(*Skins++, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
      --SurfCount;
    }
    while ( SurfCount );
  }
  Stream_TouchMeshForXModelLod(model, streamLod);
  Sys_ProfEndNamedEvent();
  return v10;
}

/*
==============
Stream_TouchXModel_Internal
==============
*/
void Stream_TouchXModel_Internal(const XModel *model, StreamModelLod streamLod, StreamImageMip streamMip)
{
  unsigned int v6; 
  __int64 SurfCount; 
  const Material **Skins; 

  if ( streamLod )
    v6 = RequestedXModelLod(model, streamLod);
  else
    v6 = 0;
  if ( v6 >= model->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 683, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v6, model->numLods) )
    __debugbreak();
  if ( CanTouchXModelLod(model, v6) )
  {
    Sys_ProfBeginNamedEvent(0xFF000000, "Stream TouchXModel");
    SurfCount = XModelGetSurfCount(model, v6);
    Skins = (const Material **)XModelGetSkins(model, v6);
    if ( (_DWORD)SurfCount )
    {
      do
      {
        Stream_TouchMaterial_Internal(*Skins++, streamMip, (volatile int (*)[10240])streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex]);
        --SurfCount;
      }
      while ( SurfCount );
    }
    Stream_TouchMeshForXModelLod(model, streamLod);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
Stream_UsedGeneric
==============
*/
void Stream_UsedGeneric(const StreamKey *streamKey)
{
  unsigned int StreamKeyIndex; 
  char v2; 
  unsigned __int64 v3; 

  if ( (streamKey->flags & 2) == 0 )
  {
    if ( streamKey->dataSize )
    {
      StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
      v2 = StreamKeyIndex;
      v3 = StreamKeyIndex;
      Sys_InterlockedOr((volatile int *)&streamFrontendGlob->genericRequest.count[streamFrontendGlob->touchBufferIndex][StreamKeyIndex], 0x100000);
      Sys_InterlockedOr((volatile int *)&streamFrontendGlob->genericRequest.bits[streamFrontendGlob->touchBufferIndex][v3 >> 5], 1 << (v2 & 0x1F));
    }
  }
}

/*
==============
Stream_UsedImage
==============
*/
void Stream_UsedImage(const GfxImage *image)
{
  __int64 GfxImageIndex; 
  __int32 v2; 
  unsigned int *v3; 

  if ( (image->flags & 0x40) != 0 )
  {
    GfxImageIndex = DB_GetGfxImageIndex(image);
    v2 = StreamUpdateScheduler::FrameIndex(&streamFrontendGlob->globalScheduler);
    v3 = &streamFrontendGlob->imageUsedFrame[GfxImageIndex];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", v3) )
      __debugbreak();
    _InterlockedExchange((volatile __int32 *)v3, v2);
  }
}

/*
==============
Stream_UsedMesh
==============
*/
void Stream_UsedMesh(unsigned int meshIndex)
{
  const XModelSurfs *XModelSurfsAtIndex; 

  XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(meshIndex);
  Stream_UsedMeshInternal(XModelSurfsAtIndex, meshIndex);
}

/*
==============
Stream_UsedMesh
==============
*/
void Stream_UsedMesh(const XModelSurfs *mesh)
{
  unsigned int XModelSurfsIndex; 

  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  Stream_UsedMeshInternal(mesh, XModelSurfsIndex);
}

/*
==============
Stream_UsedMeshInternal
==============
*/
void Stream_UsedMeshInternal(const XModelSurfs *mesh, unsigned int meshIndex)
{
  unsigned __int64 v2; 
  unsigned int *v4; 
  volatile signed __int32 *v5; 
  unsigned int *v6; 
  volatile signed __int32 *v7; 

  v2 = meshIndex;
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1226, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_touch.cpp", 1227, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) != 0 )
  {
    v4 = streamFrontendGlob->meshRequest.count[streamFrontendGlob->touchBufferIndex];
    v5 = (volatile signed __int32 *)&v4[v2];
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v4[v2]) )
      __debugbreak();
    _InterlockedOr(v5, 0x100000u);
    v6 = streamFrontendGlob->meshRequest.bits[streamFrontendGlob->touchBufferIndex];
    v7 = (volatile signed __int32 *)&v6[v2 >> 5];
    if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v6[v2 >> 5]) )
      __debugbreak();
    _InterlockedOr(v7, 1 << (v2 & 0x1F));
  }
}

