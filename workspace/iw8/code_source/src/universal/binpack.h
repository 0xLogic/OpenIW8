/*
==============
OnlineBinPacker<256,256>::Pack
==============
*/

bool __fastcall OnlineBinPacker<256,256>::Pack(OnlineBinPacker<256,256> *this, const int width, const int height, bool allowRotation, bool commit, PackedBin *out)
{
  return ?Pack@?$OnlineBinPacker@$0BAA@$0BAA@@@AEAA_NHH_N0AEAUPackedBin@@@Z(this, width, height, allowRotation, commit, out);
}

/*
==============
OnlineBinPacker<256,256>::UpdateSkyline
==============
*/

void __fastcall OnlineBinPacker<256,256>::UpdateSkyline(OnlineBinPacker<256,256> *this, const BestPackingInfo *bestPackInfo, int width, int height)
{
  ?UpdateSkyline@?$OnlineBinPacker@$0BAA@$0BAA@@@AEAAXAEBUBestPackingInfo@@HH@Z(this, bestPackInfo, width, height);
}

/*
==============
OnlineBinPacker<256,256>::OnlineBinPacker<256,256>
==============
*/

void __fastcall OnlineBinPacker<256,256>::OnlineBinPacker<256,256>(OnlineBinPacker<256,256> *this)
{
  ??0?$OnlineBinPacker@$0BAA@$0BAA@@@QEAA@XZ(this);
}

/*
==============
OnlineBinPacker<256,256>::OnlineBinPacker<256,256>
==============
*/
void OnlineBinPacker<256,256>::OnlineBinPacker<256,256>(OnlineBinPacker<256,256> *this)
{
  this->Skyline[0].Width = 256;
  *(_QWORD *)&this->Skyline[0].X = 0i64;
  this->SkylineSegmentCount = 1;
}

/*
==============
OnlineBinPacker<256,256>::Pack
==============
*/
char OnlineBinPacker<256,256>::Pack(OnlineBinPacker<256,256> *this, const int width, const int height, bool allowRotation, bool commit, PackedBin *out)
{
  int v7; 
  OnlineBinPacker<256,256> *v8; 
  int SkylineSegmentCount; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int *p_Width; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  int *v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  int *v27; 
  int v28; 
  int v29; 
  bool rotated; 
  int v31; 
  int v32; 
  BestPackingInfo bestPackInfo; 
  int v36; 

  v7 = width;
  if ( width <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\binpack.h", 122, ASSERT_TYPE_ASSERT, "(width > 0)", (const char *)&queryFormat, "width > 0") )
    __debugbreak();
  if ( height <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\binpack.h", 123, ASSERT_TYPE_ASSERT, "(height > 0)", (const char *)&queryFormat, "height > 0") )
    __debugbreak();
  v8 = this;
  if ( this->SkylineSegmentCount <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\binpack.h", 124, ASSERT_TYPE_ASSERT, "(SkylineSegmentCount > 0)", (const char *)&queryFormat, "SkylineSegmentCount > 0") )
      __debugbreak();
    v8 = this;
  }
  SkylineSegmentCount = v8->SkylineSegmentCount;
  v10 = 0x7FFFFFFF;
  v11 = 0;
  bestPackInfo.bestWidth = 0x7FFFFFFF;
  v36 = SkylineSegmentCount;
  v12 = 0x7FFFFFFF;
  bestPackInfo.bestHeight = 0x7FFFFFFF;
  v13 = -1;
  bestPackInfo.skylineSegmentIndex = -1;
  if ( SkylineSegmentCount <= 0 )
    return 0;
  p_Width = &v8->Skyline[0].Width;
  v15 = 0i64;
  do
  {
    v16 = *(p_Width - 2);
    v17 = v15;
    if ( v16 + v7 < 256 )
    {
      v18 = *(p_Width - 1);
      v19 = v7;
      if ( v7 <= 0 )
      {
LABEL_21:
        if ( v18 + height < v12 || v18 + height == v12 && *p_Width < v10 )
        {
          v10 = *p_Width;
          v12 = v18 + height;
          bestPackInfo.bestWidth = *p_Width;
          v13 = v11;
          bestPackInfo.bestHeight = v18 + height;
          bestPackInfo.bestPack.x = v16;
          bestPackInfo.bestPack.y = v18;
          bestPackInfo.skylineSegmentIndex = v11;
          bestPackInfo.bestPack.rotated = 0;
        }
      }
      else
      {
        v20 = v8->SkylineSegmentCount;
        v21 = p_Width;
        while ( 1 )
        {
          v22 = v18;
          if ( v17 > v20 )
            break;
          v18 = *(v21 - 1);
          if ( v18 <= v22 )
            v18 = v22;
          if ( v18 + height >= 256 )
            break;
          v19 -= *v21;
          ++v17;
          v21 += 3;
          if ( v19 <= 0 )
            goto LABEL_21;
        }
      }
      SkylineSegmentCount = v36;
    }
    if ( !allowRotation )
      goto LABEL_40;
    v23 = v15;
    if ( v16 + height >= 256 )
      goto LABEL_40;
    v24 = *(p_Width - 1);
    v25 = height;
    if ( height > 0 )
    {
      v26 = SkylineSegmentCount;
      v27 = p_Width;
      while ( 1 )
      {
        v28 = v24;
        if ( v23 > v26 )
          break;
        v24 = *(v27 - 1);
        if ( v24 <= v28 )
          v24 = v28;
        if ( v24 + v7 >= 256 )
          break;
        v25 -= *v27;
        ++v23;
        v27 += 3;
        if ( v25 <= 0 )
          goto LABEL_35;
      }
LABEL_39:
      SkylineSegmentCount = v36;
LABEL_40:
      rotated = bestPackInfo.bestPack.rotated;
      goto LABEL_41;
    }
LABEL_35:
    v29 = v24 + v7;
    if ( v24 + v7 < v12 )
      goto LABEL_38;
    if ( v29 == v12 )
    {
      if ( *p_Width < v10 )
      {
LABEL_38:
        v10 = *p_Width;
        v12 = v24 + v7;
        bestPackInfo.bestPack.y = v24;
        v13 = v11;
        rotated = 1;
        bestPackInfo.bestHeight = v29;
        SkylineSegmentCount = v36;
        bestPackInfo.bestPack.rotated = 1;
        bestPackInfo.bestWidth = v10;
        bestPackInfo.bestPack.x = v16;
        bestPackInfo.skylineSegmentIndex = v11;
        goto LABEL_41;
      }
      goto LABEL_39;
    }
    rotated = bestPackInfo.bestPack.rotated;
    SkylineSegmentCount = v36;
LABEL_41:
    v8 = this;
    ++v11;
    ++v15;
    p_Width += 3;
  }
  while ( v11 < SkylineSegmentCount );
  if ( v13 < 0 )
    return 0;
  if ( commit )
  {
    if ( rotated )
    {
      v31 = height;
    }
    else
    {
      v31 = v7;
      v7 = height;
    }
    OnlineBinPacker<256,256>::UpdateSkyline(this, &bestPackInfo, v31, v7);
    v32 = *(_DWORD *)&bestPackInfo.bestPack.rotated;
    *(double *)&out->x = *(double *)&bestPackInfo.bestPack.x;
    *(_DWORD *)&out->rotated = v32;
  }
  return 1;
}

/*
==============
OnlineBinPacker<256,256>::UpdateSkyline
==============
*/
void OnlineBinPacker<256,256>::UpdateSkyline(OnlineBinPacker<256,256> *this, const BestPackingInfo *bestPackInfo, int width, int height)
{
  int skylineSegmentIndex; 
  int v7; 
  int v8; 
  int *p_Width; 
  int SkylineSegmentCount; 
  int v11; 
  int v12; 
  __int64 v13; 
  int *p_Y; 
  int v15; 
  int v16; 
  int v17; 
  bool v18; 
  int v19; 
  SkylineSegment *v20; 
  __int64 v21; 
  __int64 v22; 
  SkylineSegment *v23; 
  int v24; 
  SkylineSegment *v25; 
  SkylineSegment *v26; 
  int v27; 
  int v28; 

  skylineSegmentIndex = bestPackInfo->skylineSegmentIndex;
  v7 = height + bestPackInfo->bestPack.y;
  v8 = skylineSegmentIndex - 1;
  if ( skylineSegmentIndex - 1 > 0 )
  {
    p_Width = &this->Skyline[v8].Width;
    do
    {
      if ( *(p_Width - 1) != v7 )
        break;
      width += *p_Width;
      skylineSegmentIndex = v8--;
      p_Width -= 3;
    }
    while ( v8 > 0 );
  }
  SkylineSegmentCount = this->SkylineSegmentCount;
  v11 = width;
  v12 = skylineSegmentIndex;
  if ( skylineSegmentIndex >= SkylineSegmentCount )
    goto LABEL_21;
  v13 = skylineSegmentIndex;
  p_Y = &this->Skyline[skylineSegmentIndex].Y;
  do
  {
    v15 = p_Y[1];
    if ( v15 > v11 )
    {
      if ( *p_Y != v7 )
        break;
      width += v15;
    }
    v11 -= v15;
    ++v12;
    p_Y += 3;
  }
  while ( v12 < SkylineSegmentCount );
  if ( skylineSegmentIndex == v12 )
  {
LABEL_21:
    v13 = skylineSegmentIndex;
    if ( SkylineSegmentCount - 1 >= (__int64)skylineSegmentIndex )
    {
      v22 = SkylineSegmentCount - 1 - (__int64)skylineSegmentIndex + 1;
      v23 = &this->Skyline[SkylineSegmentCount - 1];
      do
      {
        v24 = v23->Width;
        *(double *)&v23[1].X = *(double *)&v23->X;
        v23[1].Width = v24;
        --v23;
        --v22;
      }
      while ( v22 );
      SkylineSegmentCount = this->SkylineSegmentCount;
    }
    this->SkylineSegmentCount = SkylineSegmentCount + 1;
  }
  else
  {
    v16 = v12 - skylineSegmentIndex;
    v17 = v16 - 1;
    v18 = v16 - 1 <= 0;
    if ( v16 - 1 < 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\binpack.h", 218, ASSERT_TYPE_ASSERT, "(amountToShift >= 0)", (const char *)&queryFormat, "amountToShift >= 0") )
        __debugbreak();
      v18 = v17 <= 0;
    }
    if ( !v18 )
    {
      this->SkylineSegmentCount -= v17;
      v19 = skylineSegmentIndex + 1;
      if ( skylineSegmentIndex + 1 < this->SkylineSegmentCount )
      {
        v20 = &this->Skyline[v19];
        v21 = 12i64 * v16 - 12;
        do
        {
          *(double *)&v20->X = *(double *)((char *)&v20->X + v21);
          ++v19;
          v20->Width = *(int *)((char *)&v20->Width + v21);
          ++v20;
        }
        while ( v19 < this->SkylineSegmentCount );
      }
    }
  }
  v25 = &this->Skyline[v13];
  v25->Width = width;
  v26 = &this->Skyline[v13 + 1];
  v25->Y = v7;
  v27 = v25->X + width - v26->X;
  v28 = v27 + v26->X;
  v26->Width -= v27;
  v26->X = v28;
}

