/*
==============
R_DecalVolumesGrid_SetModelInfoIndex
==============
*/

void __fastcall R_DecalVolumesGrid_SetModelInfoIndex(GfxModelDecalVolumeGridInfo *outDecalVolumeGridInfo, int volumeIndex)
{
  ?R_DecalVolumesGrid_SetModelInfoIndex@@YAXAEAUGfxModelDecalVolumeGridInfo@@H@Z(outDecalVolumeGridInfo, volumeIndex);
}

/*
==============
R_DecalVolumesGrid_SetModelInfoIndex
==============
*/
void R_DecalVolumesGrid_SetModelInfoIndex(GfxModelDecalVolumeGridInfo *outDecalVolumeGridInfo, int volumeIndex)
{
  if ( (unsigned int)volumeIndex <= 0xFFFF )
  {
    outDecalVolumeGridInfo->allocatedVolumeInfoSlot = volumeIndex;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.h", 184, ASSERT_TYPE_ASSERT, "( ( volumeIndex >= 0 && volumeIndex <= 0xffff ) )", "( volumeIndex ) = %i", volumeIndex) )
      __debugbreak();
    outDecalVolumeGridInfo->allocatedVolumeInfoSlot = volumeIndex;
  }
}

