/*
==============
FilteringComputeCmdSequence::AddBoxFilterFromImageCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddBoxFilterFromImageCmd(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const bool flipFaces, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddBoxFilterFromImageCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxImage@@W4TargetImage@1@I_NPEAUGfxWrappedRWBuffer@@@Z(this, sourceImage, destination, destinationMipLevel, flipFaces, shCoeffs);
}

/*
==============
FilteringComputeCmdSequence::AddSampleOctahedronCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddSampleOctahedronCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceTextureView, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, unsigned int sampleCount, ReflectionProbeFilteringShaderType shaderType, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddSampleOctahedronCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxShaderTextureView@@IW4TargetImage@1@IMIW4ReflectionProbeFilteringShaderType@@PEAUGfxWrappedRWBuffer@@@Z(this, sourceTextureView, sourceTextureSize, destination, destinationMipLevel, specularGloss, sampleCount, shaderType, shCoeffs);
}

/*
==============
FilteringComputeCmdSequence::GetTargetTextureSize_Octahedron
==============
*/

unsigned int __fastcall FilteringComputeCmdSequence::GetTargetTextureSize_Octahedron(FilteringComputeCmdSequence *this, const unsigned int mipLevel)
{
  return ?GetTargetTextureSize_Octahedron@FilteringComputeCmdSequence@@AEAAII@Z(this, mipLevel);
}

/*
==============
R_ReflectionProbeFiltering_ClearProbeInfo
==============
*/

void R_ReflectionProbeFiltering_ClearProbeInfo(void)
{
  ?R_ReflectionProbeFiltering_ClearProbeInfo@@YAXXZ();
}

/*
==============
FilteringComputeCmdSequence::AddSHProjectionFromImageCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddSHProjectionFromImageCmd(FilteringComputeCmdSequence *this, const GfxImage *sourceCubemapImage, GfxWrappedRWBuffer *shCoeffs, const unsigned int dstProbeIndex)
{
  return ?AddSHProjectionFromImageCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxImage@@PEAUGfxWrappedRWBuffer@@I@Z(this, sourceCubemapImage, shCoeffs, dstProbeIndex);
}

/*
==============
R_ReflectionProbeFiltering_Startup
==============
*/

void R_ReflectionProbeFiltering_Startup(void)
{
  ?R_ReflectionProbeFiltering_Startup@@YAXXZ();
}

/*
==============
FilteringComputeCmdSequence::AddBruteForceFilterFromTargetCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddBruteForceFilterFromTargetCmd(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage source, const unsigned int sourceMipLevel, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddBruteForceFilterFromTargetCmd@FilteringComputeCmdSequence@@AEAA_NW4TargetImage@1@I0IMPEAUGfxWrappedRWBuffer@@@Z(this, source, sourceMipLevel, destination, destinationMipLevel, specularGloss, shCoeffs);
}

/*
==============
R_ReflectionProbeFiltering_GetFilteredImage
==============
*/

const GfxImage *__fastcall R_ReflectionProbeFiltering_GetFilteredImage()
{
  return ?R_ReflectionProbeFiltering_GetFilteredImage@@YAPEBUGfxImage@@XZ();
}

/*
==============
FilteringComputeCmdSequence::AddSHProjectionCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddSHProjectionCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceCubemapTexture, const unsigned int sourceTextureSize, GfxWrappedRWBuffer *shCoeffs, const unsigned int dstProbeIndex)
{
  return ?AddSHProjectionCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxShaderTextureView@@IPEAUGfxWrappedRWBuffer@@I@Z(this, sourceCubemapTexture, sourceTextureSize, shCoeffs, dstProbeIndex);
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterFromTargetCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddBoxFilterFromTargetCmd(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage source, const unsigned int sourceMipLevel, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const bool flipFaces, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddBoxFilterFromTargetCmd@FilteringComputeCmdSequence@@AEAA_NW4TargetImage@1@I0I_NPEAUGfxWrappedRWBuffer@@@Z(this, source, sourceMipLevel, destination, destinationMipLevel, flipFaces, shCoeffs);
}

/*
==============
R_ReflectionProbeSH_CopySHToSHArrayBuffer
==============
*/

void __fastcall R_ReflectionProbeSH_CopySHToSHArrayBuffer(ComputeCmdBufState *computeState, unsigned int dstProbeIndex)
{
  ?R_ReflectionProbeSH_CopySHToSHArrayBuffer@@YAXPEAUComputeCmdBufState@@I@Z(computeState, dstProbeIndex);
}

/*
==============
FilteringComputeCmdSequence::GetCmdCount
==============
*/

unsigned int __fastcall FilteringComputeCmdSequence::GetCmdCount(FilteringComputeCmdSequence *this)
{
  return ?GetCmdCount@FilteringComputeCmdSequence@@QEBAIXZ(this);
}

/*
==============
R_ReflectionProbeFiltering_CompressFilteredImage
==============
*/

bool __fastcall R_ReflectionProbeFiltering_CompressFilteredImage(ComputeCmdBufState *state, const bool highQuality, const bool asyncCompress)
{
  return ?R_ReflectionProbeFiltering_CompressFilteredImage@@YA_NPEAUComputeCmdBufState@@_N1@Z(state, highQuality, asyncCompress);
}

/*
==============
FilteringComputeCmdSequence::GetSourceTextureView
==============
*/

const GfxShaderTextureView *__fastcall FilteringComputeCmdSequence::GetSourceTextureView(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage source, const unsigned int mipLevel)
{
  return ?GetSourceTextureView@FilteringComputeCmdSequence@@AEBAPEBUGfxShaderTextureView@@W4TargetImage@1@I@Z(this, source, mipLevel);
}

/*
==============
R_ReflectionProbeFiltering_SetProbeInfo
==============
*/

void __fastcall R_ReflectionProbeFiltering_SetProbeInfo(const vec3_t *origin, unsigned int probeIndex)
{
  ?R_ReflectionProbeFiltering_SetProbeInfo@@YAXAEBTvec3_t@@I@Z(origin, probeIndex);
}

/*
==============
FilteringComputeCmdSequence::AddCommand
==============
*/

ReflectionProbeFilteringComputeCmd *__fastcall FilteringComputeCmdSequence::AddCommand(FilteringComputeCmdSequence *this)
{
  return ?AddCommand@FilteringComputeCmdSequence@@AEAAPEAUReflectionProbeFilteringComputeCmd@@XZ(this);
}

/*
==============
FilteringComputeCmdSequence::AddBruteForceFilterSequence
==============
*/

void __fastcall FilteringComputeCmdSequence::AddBruteForceFilterSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const bool flipFaces, const bool boxFilterTopMip, const unsigned int dstProbeIndex)
{
  ?AddBruteForceFilterSequence@FilteringComputeCmdSequence@@AEAAXPEBUGfxImage@@_N1I@Z(this, sourceImage, flipFaces, boxFilterTopMip, dstProbeIndex);
}

/*
==============
FilteringComputeCmdSequence::ClearCommands
==============
*/

void __fastcall FilteringComputeCmdSequence::ClearCommands(FilteringComputeCmdSequence *this)
{
  ?ClearCommands@FilteringComputeCmdSequence@@AEAAXXZ(this);
}

/*
==============
R_ReflectionProbeFiltering_Shutdown
==============
*/

void R_ReflectionProbeFiltering_Shutdown(void)
{
  ?R_ReflectionProbeFiltering_Shutdown@@YAXXZ();
}

/*
==============
FilteringComputeCmdSequence::AddBruteForceFilterCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddBruteForceFilterCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceTexture, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddBruteForceFilterCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxShaderTextureView@@IW4TargetImage@1@IMPEAUGfxWrappedRWBuffer@@@Z(this, sourceTexture, sourceTextureSize, destination, destinationMipLevel, specularGloss, shCoeffs);
}

/*
==============
FilteringComputeCmdSequence::FilteringComputeCmdSequence
==============
*/

void __fastcall FilteringComputeCmdSequence::FilteringComputeCmdSequence(FilteringComputeCmdSequence *this)
{
  ??0FilteringComputeCmdSequence@@QEAA@XZ(this);
}

/*
==============
FilteringComputeCmdSequence::GetTextureMipSize
==============
*/

unsigned int __fastcall FilteringComputeCmdSequence::GetTextureMipSize(FilteringComputeCmdSequence *this, const unsigned int mipLevel)
{
  return ?GetTextureMipSize@FilteringComputeCmdSequence@@AEBAII@Z(this, mipLevel);
}

/*
==============
FilteringComputeCmdSequence::AddImportanceSampleFilterSequence
==============
*/

void __fastcall FilteringComputeCmdSequence::AddImportanceSampleFilterSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex)
{
  ?AddImportanceSampleFilterSequence@FilteringComputeCmdSequence@@AEAAXPEBUGfxImage@@_N1II@Z(this, sourceImage, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex);
}

/*
==============
FilteringComputeCmdSequence::AddImportanceSampleFilterFromImageCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddImportanceSampleFilterFromImageCmd(FilteringComputeCmdSequence *this, const GfxImage *sourceCubemapImage, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, const unsigned int sampleCount, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddImportanceSampleFilterFromImageCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxImage@@W4TargetImage@1@IMIPEAUGfxWrappedRWBuffer@@@Z(this, sourceCubemapImage, destination, destinationMipLevel, specularGloss, sampleCount, shCoeffs);
}

/*
==============
R_ExecuteReflectionProbeFilteringComputeCmds
==============
*/

void __fastcall R_ExecuteReflectionProbeFilteringComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  ?R_ExecuteReflectionProbeFilteringComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(cmdBufState, list, type, header);
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterSequence
==============
*/

void __fastcall FilteringComputeCmdSequence::AddBoxFilterSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const bool flipFaces, const FilteringComputeCmdSequence::TargetImage destination, GfxWrappedRWBuffer *shCoeffs, const unsigned int dstProbeIndex)
{
  ?AddBoxFilterSequence@FilteringComputeCmdSequence@@AEAAXPEBUGfxImage@@_NW4TargetImage@1@PEAUGfxWrappedRWBuffer@@I@Z(this, sourceImage, flipFaces, destination, shCoeffs, dstProbeIndex);
}

/*
==============
FilteringComputeCmdSequence::AddSampleOctahedronSequence
==============
*/

void __fastcall FilteringComputeCmdSequence::AddSampleOctahedronSequence(FilteringComputeCmdSequence *this, GfxImage *sourceImage, const FilteringComputeCmdSequence::TargetImage destination, unsigned int sampleCount, ReflectionProbeFilteringShaderType shaderType, unsigned int maxLevels)
{
  ?AddSampleOctahedronSequence@FilteringComputeCmdSequence@@AEAAXPEAUGfxImage@@W4TargetImage@1@IW4ReflectionProbeFilteringShaderType@@I@Z(this, sourceImage, destination, sampleCount, shaderType, maxLevels);
}

/*
==============
R_ReflectionProbeFiltering_GetSHData
==============
*/

const GfxWrappedRWBuffer *__fastcall R_ReflectionProbeFiltering_GetSHData()
{
  return ?R_ReflectionProbeFiltering_GetSHData@@YAPEBUGfxWrappedRWBuffer@@XZ();
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddBoxFilterCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceTexture, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const bool flipFaces, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddBoxFilterCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxShaderTextureView@@IW4TargetImage@1@I_NPEAUGfxWrappedRWBuffer@@@Z(this, sourceTexture, sourceTextureSize, destination, destinationMipLevel, flipFaces, shCoeffs);
}

/*
==============
R_ReflectionProbeFiltering_FilterImage
==============
*/

bool __fastcall R_ReflectionProbeFiltering_FilterImage(const GfxImage *sourceImage, const GfxReflectionProbeFilteringMethod filteringMethod, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex, const GfxLabelSyncInfo *waitLabelInfo)
{
  return ?R_ReflectionProbeFiltering_FilterImage@@YA_NPEBUGfxImage@@W4GfxReflectionProbeFilteringMethod@@_N2IIPEBUGfxLabelSyncInfo@@@Z(sourceImage, filteringMethod, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex, waitLabelInfo);
}

/*
==============
FilteringComputeCmdSequence::GetTargetTextureRWView
==============
*/

const GfxShaderTextureRWView *__fastcall FilteringComputeCmdSequence::GetTargetTextureRWView(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int mipLevel)
{
  return ?GetTargetTextureRWView@FilteringComputeCmdSequence@@AEBAPEBUGfxShaderTextureRWView@@W4TargetImage@1@I@Z(this, destination, mipLevel);
}

/*
==============
FilteringComputeCmdSequence::GetCmd
==============
*/

const ReflectionProbeFilteringComputeCmd *__fastcall FilteringComputeCmdSequence::GetCmd(FilteringComputeCmdSequence *this, const unsigned int index)
{
  return ?GetCmd@FilteringComputeCmdSequence@@QEAAPEBUReflectionProbeFilteringComputeCmd@@I@Z(this, index);
}

/*
==============
FilteringComputeCmdSequence::AddImportanceSampleFilterCmd
==============
*/

bool __fastcall FilteringComputeCmdSequence::AddImportanceSampleFilterCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceCubemapTexture, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, const unsigned int sampleCount, GfxWrappedRWBuffer *shCoeffs)
{
  return ?AddImportanceSampleFilterCmd@FilteringComputeCmdSequence@@AEAA_NPEBUGfxShaderTextureView@@IW4TargetImage@1@IMIPEAUGfxWrappedRWBuffer@@@Z(this, sourceCubemapTexture, sourceTextureSize, destination, destinationMipLevel, specularGloss, sampleCount, shCoeffs);
}

/*
==============
FilteringComputeCmdSequence::SetupCmdSequence
==============
*/

void __fastcall FilteringComputeCmdSequence::SetupCmdSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const GfxReflectionProbeFilteringMethod filteringMethod, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex)
{
  ?SetupCmdSequence@FilteringComputeCmdSequence@@QEAAXPEBUGfxImage@@W4GfxReflectionProbeFilteringMethod@@_N2II@Z(this, sourceImage, filteringMethod, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex);
}

/*
==============
R_ReflectionProbeFiltering_GfxFilterImage
==============
*/

void __fastcall R_ReflectionProbeFiltering_GfxFilterImage(ComputeCmdBufState *state, const GfxImage *sourceImage, const GfxReflectionProbeFilteringMethod filteringMethod, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex)
{
  ?R_ReflectionProbeFiltering_GfxFilterImage@@YAXPEAUComputeCmdBufState@@PEBUGfxImage@@W4GfxReflectionProbeFilteringMethod@@_N3II@Z(state, sourceImage, filteringMethod, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex);
}

/*
==============
FilteringComputeCmdSequence::FilteringComputeCmdSequence
==============
*/
void FilteringComputeCmdSequence::FilteringComputeCmdSequence(FilteringComputeCmdSequence *this)
{
  this->m_cmdCount = 0;
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterCmd
==============
*/
bool FilteringComputeCmdSequence::AddBoxFilterCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceTexture, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const bool flipFaces, GfxWrappedRWBuffer *shCoeffs)
{
  ReflectionProbeFilteringComputeCmd *v11; 
  ReflectionProbeFilteringComputeCmd *v12; 

  v11 = FilteringComputeCmdSequence::AddCommand(this);
  v12 = v11;
  if ( v11 )
  {
    v11->src2DArrayView = sourceTexture;
    v11->srcImageSize = sourceTextureSize;
    v11->srcCubeMapView = NULL;
    v11->shaderType = flipFaces;
    v11->dst2DArrayRWView = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, destinationMipLevel);
    LODWORD(v11) = ReflectionProbeCompressionMaxResolution();
    v12->dstMipLevel = destinationMipLevel;
    v12->dstImageSize = (int)v11 >> destinationMipLevel;
    v12->shCoeffs = shCoeffs;
    LOBYTE(v11) = 1;
    *(_QWORD *)&v12->sampleCount = 0i64;
    v12->firstFaceIndex = 0;
    v12->faceCount = 6;
    v12->waitLabel.labelAddress = NULL;
    v12->waitLabel.value = 0;
  }
  return (char)v11;
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterFromImageCmd
==============
*/
bool FilteringComputeCmdSequence::AddBoxFilterFromImageCmd(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const bool flipFaces, GfxWrappedRWBuffer *shCoeffs)
{
  unsigned int width; 
  const GfxTexture *Resident; 

  width = sourceImage->width;
  Resident = R_Texture_GetResident(sourceImage->textureId);
  return FilteringComputeCmdSequence::AddBoxFilterCmd(this, &Resident->shaderView, width, destination, destinationMipLevel, flipFaces, shCoeffs);
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterFromTargetCmd
==============
*/
bool FilteringComputeCmdSequence::AddBoxFilterFromTargetCmd(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage source, const unsigned int sourceMipLevel, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const bool flipFaces, GfxWrappedRWBuffer *shCoeffs)
{
  int v11; 
  const GfxShaderTextureView *SourceTextureView; 

  v11 = ReflectionProbeCompressionMaxResolution() >> sourceMipLevel;
  SourceTextureView = FilteringComputeCmdSequence::GetSourceTextureView(this, source, sourceMipLevel);
  return FilteringComputeCmdSequence::AddBoxFilterCmd(this, SourceTextureView, v11, destination, destinationMipLevel, flipFaces, shCoeffs);
}

/*
==============
FilteringComputeCmdSequence::AddBoxFilterSequence
==============
*/
void FilteringComputeCmdSequence::AddBoxFilterSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const bool flipFaces, const FilteringComputeCmdSequence::TargetImage destination, GfxWrappedRWBuffer *shCoeffs, const unsigned int dstProbeIndex)
{
  GfxWrappedRWBuffer *v9; 
  unsigned int width; 
  GfxTextureId textureId; 
  ID3D12Resource *resource; 
  FilteringComputeCmdSequence::TargetImage v13; 
  const GfxTexture *Resident; 
  bool v15; 
  GfxShaderTextureView *SourceTextureView; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  const GfxShaderTextureView *v21; 
  unsigned int *p_view; 
  __int64 m_cmdCount; 
  ReflectionProbeFilteringComputeCmd *v24; 
  int v25; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1222, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  v9 = shCoeffs;
  width = sourceImage->width;
  textureId = sourceImage->textureId;
  if ( shCoeffs )
  {
    resource = s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource;
    v13 = INITIAL;
    if ( destination != FINAL )
      resource = s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].resource;
    LOBYTE(v13) = destination != FINAL;
    Resident = R_Texture_GetResident(textureId);
    v15 = flipFaces;
    FilteringComputeCmdSequence::AddBoxFilterCmd(this, &Resident->shaderView, width, v13, 0, flipFaces, NULL);
    FilteringComputeCmdSequence::AddSHProjectionFromImageCmd(this, (const GfxImage *)resource, shCoeffs, dstProbeIndex);
    width = ReflectionProbeCompressionMaxResolution();
    SourceTextureView = (GfxShaderTextureView *)FilteringComputeCmdSequence::GetSourceTextureView(this, v13, 0);
  }
  else
  {
    v15 = flipFaces;
    SourceTextureView = &R_Texture_GetResident(textureId)->shaderView;
    v9 = NULL;
  }
  FilteringComputeCmdSequence::AddBoxFilterCmd(this, SourceTextureView, width, destination, 0, v15, v9);
  v17 = ReflectionProbeCompressionMaxResolution();
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  v18 = 1;
  v19 = 32 - __lzcnt(v17);
  if ( v19 > 1 )
  {
    do
    {
      v20 = ReflectionProbeCompressionMaxResolution() >> (v18 - 1);
      if ( destination )
      {
        if ( destination != FINAL )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 878, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            __debugbreak();
          v21 = NULL;
          goto LABEL_21;
        }
        p_view = &s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].view;
      }
      else
      {
        p_view = &s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].view;
      }
      v21 = (const GfxShaderTextureView *)&p_view[4 * v18 - 4];
LABEL_21:
      m_cmdCount = this->m_cmdCount;
      if ( (unsigned int)(m_cmdCount + 1) <= 0x31 )
      {
        this->m_cmdCount = m_cmdCount + 1;
        v24 = &this->m_computeCmds[m_cmdCount];
        if ( (FilteringComputeCmdSequence *)((char *)this + 96 * m_cmdCount) != (FilteringComputeCmdSequence *)-8i64 )
        {
          this->m_computeCmds[m_cmdCount].src2DArrayView = v21;
          v24->shaderType = BOX;
          this->m_computeCmds[m_cmdCount].srcImageSize = v20;
          this->m_computeCmds[m_cmdCount].srcCubeMapView = NULL;
          this->m_computeCmds[m_cmdCount].dst2DArrayRWView = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, v18);
          v25 = ReflectionProbeCompressionMaxResolution();
          v24->dstMipLevel = v18;
          v24->dstImageSize = v25 >> v18;
          v24->shCoeffs = NULL;
          *(_QWORD *)&v24->sampleCount = 0i64;
          v24->firstFaceIndex = 0;
          v24->faceCount = 6;
          v24->waitLabel.labelAddress = NULL;
          v24->waitLabel.value = 0;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 848, ASSERT_TYPE_ASSERT, "(nextCmdIndex <= MAX_COMPUTE_COMMANDS)", (const char *)&queryFormat, "nextCmdIndex <= MAX_COMPUTE_COMMANDS") )
      {
        __debugbreak();
      }
      ++v18;
    }
    while ( v18 < v19 );
  }
}

/*
==============
FilteringComputeCmdSequence::AddBruteForceFilterCmd
==============
*/
bool FilteringComputeCmdSequence::AddBruteForceFilterCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceTexture, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, GfxWrappedRWBuffer *shCoeffs)
{
  ReflectionProbeFilteringComputeCmd *v11; 
  ReflectionProbeFilteringComputeCmd *v12; 

  v11 = FilteringComputeCmdSequence::AddCommand(this);
  v12 = v11;
  if ( v11 )
  {
    v11->src2DArrayView = sourceTexture;
    v11->srcImageSize = sourceTextureSize;
    v11->srcCubeMapView = NULL;
    v11->shaderType = BRUTE_FORCE;
    v11->dst2DArrayRWView = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, destinationMipLevel);
    LODWORD(v11) = ReflectionProbeCompressionMaxResolution();
    v12->dstMipLevel = destinationMipLevel;
    v12->dstImageSize = (int)v11 >> destinationMipLevel;
    v12->shCoeffs = shCoeffs;
    LOBYTE(v11) = 1;
    v12->specularGloss = specularGloss;
    v12->sampleCount = 0;
    v12->firstFaceIndex = 0;
    v12->faceCount = 6;
    v12->waitLabel.labelAddress = NULL;
    v12->waitLabel.value = 0;
  }
  return (char)v11;
}

/*
==============
FilteringComputeCmdSequence::AddBruteForceFilterFromTargetCmd
==============
*/
bool FilteringComputeCmdSequence::AddBruteForceFilterFromTargetCmd(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage source, const unsigned int sourceMipLevel, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, GfxWrappedRWBuffer *shCoeffs)
{
  int v11; 
  const GfxShaderTextureView *SourceTextureView; 
  ReflectionProbeFilteringComputeCmd *v13; 
  ReflectionProbeFilteringComputeCmd *v14; 

  v11 = ReflectionProbeCompressionMaxResolution() >> sourceMipLevel;
  SourceTextureView = FilteringComputeCmdSequence::GetSourceTextureView(this, source, sourceMipLevel);
  v13 = FilteringComputeCmdSequence::AddCommand(this);
  v14 = v13;
  if ( v13 )
  {
    v13->src2DArrayView = SourceTextureView;
    v13->srcImageSize = v11;
    v13->shaderType = BRUTE_FORCE;
    v13->srcCubeMapView = NULL;
    v13->dst2DArrayRWView = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, destinationMipLevel);
    LODWORD(v13) = ReflectionProbeCompressionMaxResolution();
    v14->dstMipLevel = destinationMipLevel;
    v14->dstImageSize = (int)v13 >> destinationMipLevel;
    v14->shCoeffs = shCoeffs;
    LOBYTE(v13) = 1;
    v14->specularGloss = specularGloss;
    v14->sampleCount = 0;
    v14->firstFaceIndex = 0;
    v14->faceCount = 6;
    v14->waitLabel.labelAddress = NULL;
    v14->waitLabel.value = 0;
  }
  return (char)v13;
}

/*
==============
FilteringComputeCmdSequence::AddBruteForceFilterSequence
==============
*/
void FilteringComputeCmdSequence::AddBruteForceFilterSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const bool flipFaces, const bool boxFilterTopMip, const unsigned int dstProbeIndex)
{
  unsigned int width; 
  const GfxTexture *Resident; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int i; 
  float v15; 
  unsigned int v16; 
  __int64 m_cmdCount; 
  __int64 v18; 
  ReflectionProbeFilteringComputeCmd *v19; 
  int v20; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1259, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  width = sourceImage->width;
  Resident = R_Texture_GetResident(sourceImage->textureId);
  FilteringComputeCmdSequence::AddBoxFilterCmd(this, &Resident->shaderView, width, INITIAL, 0, flipFaces, NULL);
  FilteringComputeCmdSequence::AddSHProjectionFromImageCmd(this, (const GfxImage *)s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource, (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering, dstProbeIndex);
  if ( boxFilterTopMip )
  {
    v11 = ReflectionProbeCompressionMaxResolution();
    v12 = 1;
    FilteringComputeCmdSequence::AddBoxFilterCmd(this, (const GfxShaderTextureView *)&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].view, v11, FINAL, 0, flipFaces, (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering);
  }
  else
  {
    v12 = 0;
  }
  v13 = ReflectionProbeCompressionMaxResolution();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  for ( i = 32 - __lzcnt(v13); v12 < i; ++v12 )
  {
    v16 = ReflectionProbeCompressionMaxResolution();
    m_cmdCount = this->m_cmdCount;
    if ( (unsigned int)(m_cmdCount + 1) <= 0x31 )
    {
      this->m_cmdCount = m_cmdCount + 1;
      v18 = m_cmdCount;
      v19 = &this->m_computeCmds[v18];
      if ( (FilteringComputeCmdSequence *)((char *)this + v18 * 96) != (FilteringComputeCmdSequence *)-8i64 )
      {
        v19->shaderType = BRUTE_FORCE;
        this->m_computeCmds[v18].src2DArrayView = (const GfxShaderTextureView *)&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].view;
        this->m_computeCmds[v18].srcImageSize = v16;
        this->m_computeCmds[v18].srcCubeMapView = NULL;
        this->m_computeCmds[v18].dst2DArrayRWView = (const GfxShaderTextureRWView *)&s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipRWView[v12 + 2].rwCounterResource;
        v20 = ReflectionProbeCompressionMaxResolution();
        v19->dstMipLevel = v12;
        v19->dstImageSize = v20 >> v12;
        v15 = (float)v12;
        v19->specularGloss = (float)(5.0 - v15) * 0.2;
        v19->shCoeffs = (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering;
        v19->sampleCount = 0;
        v19->firstFaceIndex = 0;
        v19->faceCount = 6;
        v19->waitLabel.labelAddress = NULL;
        v19->waitLabel.value = 0;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 848, ASSERT_TYPE_ASSERT, "(nextCmdIndex <= MAX_COMPUTE_COMMANDS)", (const char *)&queryFormat, "nextCmdIndex <= MAX_COMPUTE_COMMANDS") )
    {
      __debugbreak();
    }
  }
}

/*
==============
FilteringComputeCmdSequence::AddCommand
==============
*/
ReflectionProbeFilteringComputeCmd *FilteringComputeCmdSequence::AddCommand(FilteringComputeCmdSequence *this)
{
  __int64 m_cmdCount; 

  m_cmdCount = this->m_cmdCount;
  if ( (unsigned int)(m_cmdCount + 1) <= 0x31 )
  {
    this->m_cmdCount = m_cmdCount + 1;
    return &this->m_computeCmds[m_cmdCount];
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 848, ASSERT_TYPE_ASSERT, "(nextCmdIndex <= MAX_COMPUTE_COMMANDS)", (const char *)&queryFormat, "nextCmdIndex <= MAX_COMPUTE_COMMANDS") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
FilteringComputeCmdSequence::AddImportanceSampleFilterCmd
==============
*/
bool FilteringComputeCmdSequence::AddImportanceSampleFilterCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceCubemapTexture, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, const unsigned int sampleCount, GfxWrappedRWBuffer *shCoeffs)
{
  ReflectionProbeFilteringComputeCmd *v12; 
  ReflectionProbeFilteringComputeCmd *v13; 

  v12 = FilteringComputeCmdSequence::AddCommand(this);
  v13 = v12;
  if ( v12 )
  {
    v12->srcImageSize = sourceTextureSize;
    v12->shaderType = IMPORTANCE_SAMPLE;
    v12->src2DArrayView = NULL;
    v12->srcCubeMapView = sourceCubemapTexture;
    v12->dst2DArrayRWView = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, destinationMipLevel);
    LODWORD(v12) = ReflectionProbeCompressionMaxResolution();
    v13->firstFaceIndex = 0;
    v13->dstImageSize = (int)v12 >> destinationMipLevel;
    v13->shCoeffs = shCoeffs;
    v13->sampleCount = sampleCount;
    LOBYTE(v12) = 1;
    v13->waitLabel.labelAddress = NULL;
    v13->waitLabel.value = 0;
    v13->specularGloss = specularGloss;
    v13->dstMipLevel = destinationMipLevel;
    v13->faceCount = 6;
  }
  return (char)v12;
}

/*
==============
FilteringComputeCmdSequence::AddImportanceSampleFilterFromImageCmd
==============
*/
bool FilteringComputeCmdSequence::AddImportanceSampleFilterFromImageCmd(FilteringComputeCmdSequence *this, const GfxImage *sourceCubemapImage, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, const unsigned int sampleCount, GfxWrappedRWBuffer *shCoeffs)
{
  unsigned int width; 
  GfxShaderTextureView *p_shaderView; 
  ReflectionProbeFilteringComputeCmd *v12; 
  ReflectionProbeFilteringComputeCmd *v13; 

  width = sourceCubemapImage->width;
  p_shaderView = &R_Texture_GetResident(sourceCubemapImage->textureId)->shaderView;
  v12 = FilteringComputeCmdSequence::AddCommand(this);
  v13 = v12;
  if ( v12 )
  {
    v12->shaderType = IMPORTANCE_SAMPLE;
    v12->src2DArrayView = NULL;
    v12->srcImageSize = width;
    v12->srcCubeMapView = p_shaderView;
    v12->dst2DArrayRWView = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, destinationMipLevel);
    LODWORD(v12) = ReflectionProbeCompressionMaxResolution();
    v13->firstFaceIndex = 0;
    v13->dstImageSize = (int)v12 >> destinationMipLevel;
    v13->shCoeffs = shCoeffs;
    v13->sampleCount = sampleCount;
    LOBYTE(v12) = 1;
    v13->waitLabel.labelAddress = NULL;
    v13->waitLabel.value = 0;
    v13->specularGloss = specularGloss;
    v13->dstMipLevel = destinationMipLevel;
    v13->faceCount = 6;
  }
  return (char)v12;
}

/*
==============
FilteringComputeCmdSequence::AddImportanceSampleFilterSequence
==============
*/
void FilteringComputeCmdSequence::AddImportanceSampleFilterSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex)
{
  unsigned int v10; 
  ID3D12Resource *resource; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  float v16; 
  GfxShaderTextureView *p_shaderView; 
  __int64 m_cmdCount; 
  ReflectionProbeFilteringComputeCmd *v19; 
  int v20; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1313, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  v10 = ReflectionProbeCompressionMaxResolution();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  resource = s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource;
  v12 = 32 - __lzcnt(v10);
  FilteringComputeCmdSequence::AddBoxFilterSequence(this, sourceImage, flipFaces, INITIAL, NULL, dstProbeIndex);
  FilteringComputeCmdSequence::AddSHProjectionFromImageCmd(this, (const GfxImage *)resource, (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering, dstProbeIndex);
  if ( boxFilterTopMip )
  {
    v13 = ReflectionProbeCompressionMaxResolution();
    FilteringComputeCmdSequence::AddBoxFilterCmd(this, (const GfxShaderTextureView *)&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].view, v13, FINAL, 0, 0, (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering);
  }
  v14 = boxFilterTopMip;
  if ( boxFilterTopMip < v12 )
  {
    do
    {
      v15 = WORD2(resource[2].m_pFunction);
      p_shaderView = &R_Texture_GetResident((GfxTextureId)LODWORD(resource[1].m_pFunction))->shaderView;
      m_cmdCount = this->m_cmdCount;
      if ( (unsigned int)(m_cmdCount + 1) <= 0x31 )
      {
        this->m_cmdCount = m_cmdCount + 1;
        v19 = &this->m_computeCmds[m_cmdCount];
        if ( (FilteringComputeCmdSequence *)((char *)this + 96 * m_cmdCount) != (FilteringComputeCmdSequence *)-8i64 )
        {
          this->m_computeCmds[m_cmdCount].srcImageSize = v15;
          v19->shaderType = IMPORTANCE_SAMPLE;
          this->m_computeCmds[m_cmdCount].src2DArrayView = NULL;
          this->m_computeCmds[m_cmdCount].dst2DArrayRWView = (const GfxShaderTextureRWView *)&s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipRWView[v14 + 2].rwCounterResource;
          this->m_computeCmds[m_cmdCount].srcCubeMapView = p_shaderView;
          v20 = ReflectionProbeCompressionMaxResolution();
          v19->dstMipLevel = v14;
          v19->dstImageSize = v20 >> v14;
          v16 = (float)(unsigned int)v14;
          v19->specularGloss = (float)(5.0 - v16) * 0.2;
          v19->shCoeffs = (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering;
          v19->sampleCount = sampleCount;
          v19->firstFaceIndex = 0;
          v19->faceCount = 6;
          v19->waitLabel.labelAddress = NULL;
          v19->waitLabel.value = 0;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 848, ASSERT_TYPE_ASSERT, "(nextCmdIndex <= MAX_COMPUTE_COMMANDS)", (const char *)&queryFormat, "nextCmdIndex <= MAX_COMPUTE_COMMANDS") )
      {
        __debugbreak();
      }
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < v12 );
  }
}

/*
==============
FilteringComputeCmdSequence::AddSHProjectionCmd
==============
*/
bool FilteringComputeCmdSequence::AddSHProjectionCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceCubemapTexture, const unsigned int sourceTextureSize, GfxWrappedRWBuffer *shCoeffs, const unsigned int dstProbeIndex)
{
  ReflectionProbeFilteringComputeCmd *v8; 
  ReflectionProbeFilteringComputeCmd *v9; 

  v8 = FilteringComputeCmdSequence::AddCommand(this);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, sizeof(ReflectionProbeFilteringComputeCmd));
    v9->dstProbeIndex = dstProbeIndex;
    LOBYTE(v8) = 1;
    v9->shaderType = SH_PROJECTION;
    v9->shCoeffs = shCoeffs;
    v9->srcImageSize = sourceTextureSize;
    v9->srcCubeMapView = sourceCubemapTexture;
    v9->faceCount = 6;
  }
  return (char)v8;
}

/*
==============
FilteringComputeCmdSequence::AddSHProjectionFromImageCmd
==============
*/
bool FilteringComputeCmdSequence::AddSHProjectionFromImageCmd(FilteringComputeCmdSequence *this, const GfxImage *sourceCubemapImage, GfxWrappedRWBuffer *shCoeffs, const unsigned int dstProbeIndex)
{
  unsigned int width; 
  GfxShaderTextureView *p_shaderView; 
  ReflectionProbeFilteringComputeCmd *v9; 
  ReflectionProbeFilteringComputeCmd *v10; 

  width = sourceCubemapImage->width;
  p_shaderView = &R_Texture_GetResident(sourceCubemapImage->textureId)->shaderView;
  v9 = FilteringComputeCmdSequence::AddCommand(this);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, sizeof(ReflectionProbeFilteringComputeCmd));
    LOBYTE(v9) = 1;
    v10->shaderType = SH_PROJECTION;
    v10->shCoeffs = shCoeffs;
    v10->dstProbeIndex = dstProbeIndex;
    v10->srcImageSize = width;
    v10->srcCubeMapView = p_shaderView;
    v10->faceCount = 6;
  }
  return (char)v9;
}

/*
==============
FilteringComputeCmdSequence::AddSampleOctahedronCmd
==============
*/
__int64 FilteringComputeCmdSequence::AddSampleOctahedronCmd(FilteringComputeCmdSequence *this, const GfxShaderTextureView *sourceTextureView, const unsigned int sourceTextureSize, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int destinationMipLevel, const float specularGloss, unsigned int sampleCount, ReflectionProbeFilteringShaderType shaderType, GfxWrappedRWBuffer *shCoeffs)
{
  __int64 result; 
  __int64 v14; 
  int v15; 

  result = (__int64)FilteringComputeCmdSequence::AddCommand(this);
  v14 = result;
  if ( result )
  {
    *(_QWORD *)(result + 16) = sourceTextureView;
    *(_QWORD *)(result + 32) = sourceTextureView;
    *(_DWORD *)result = shaderType;
    *(_DWORD *)(result + 24) = sourceTextureSize;
    *(_QWORD *)(result + 40) = FilteringComputeCmdSequence::GetTargetTextureRWView(this, destination, destinationMipLevel);
    v15 = ReflectionProbeCompressionMaxResolution_Octahedron();
    *(_DWORD *)(v14 + 52) = destinationMipLevel;
    *(_DWORD *)(v14 + 48) = v15 >> destinationMipLevel;
    *(_QWORD *)(v14 + 56) = shCoeffs;
    *(_DWORD *)(v14 + 68) = sampleCount;
    result = 1i64;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 80) = 0i64;
    *(_DWORD *)(v14 + 88) = 0;
    *(const float *)(v14 + 72) = specularGloss;
    *(_DWORD *)(v14 + 8) = 1;
  }
  return result;
}

/*
==============
FilteringComputeCmdSequence::AddSampleOctahedronSequence
==============
*/
void FilteringComputeCmdSequence::AddSampleOctahedronSequence(FilteringComputeCmdSequence *this, GfxImage *sourceImage, const FilteringComputeCmdSequence::TargetImage destination, unsigned int sampleCount, ReflectionProbeFilteringShaderType shaderType, unsigned int maxLevels)
{
  unsigned int v10; 
  unsigned int i; 
  unsigned __int16 width; 
  float v13; 
  float v14; 
  const GfxShaderTextureView *p_view; 
  float v16; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1156, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  v10 = R_ReflectionProbeCompression_MainMipLevelCount_Octahedron();
  if ( maxLevels && v10 > maxLevels )
    v10 = maxLevels;
  for ( i = 0; i < v10; ++i )
  {
    if ( shaderType == OCTAHEDRON_BRUTE_FORCE )
    {
      if ( (GfxImage *)s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource != sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1174, ASSERT_TYPE_ASSERT, "(s_reflectionProbeFiltering.m_initialFilteredImage.m_image == sourceImage)", (const char *)&queryFormat, "s_reflectionProbeFiltering.m_initialFilteredImage.m_image == sourceImage") )
        __debugbreak();
      width = sourceImage->width;
      v13 = (float)i;
      v14 = 5.0 - v13;
      p_view = (const GfxShaderTextureView *)&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].view;
    }
    else
    {
      width = sourceImage->width;
      v16 = (float)i;
      v14 = 5.0 - v16;
      p_view = &R_Texture_GetResident(sourceImage->textureId)->shaderView;
    }
    FilteringComputeCmdSequence::AddSampleOctahedronCmd(this, p_view, width, destination, i, v14 * 0.2, sampleCount, shaderType, (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering);
  }
}

/*
==============
FilteringComputeCmdSequence::ClearCommands
==============
*/
void FilteringComputeCmdSequence::ClearCommands(FilteringComputeCmdSequence *this)
{
  this->m_cmdCount = 0;
}

/*
==============
FilteringComputeCmdSequence::GetCmd
==============
*/
ReflectionProbeFilteringComputeCmd *FilteringComputeCmdSequence::GetCmd(FilteringComputeCmdSequence *this, const unsigned int index)
{
  return &this->m_computeCmds[index];
}

/*
==============
FilteringComputeCmdSequence::GetCmdCount
==============
*/
__int64 FilteringComputeCmdSequence::GetCmdCount(FilteringComputeCmdSequence *this)
{
  return this->m_cmdCount;
}

/*
==============
FilteringComputeCmdSequence::GetSourceTextureView
==============
*/
const GfxShaderTextureView *FilteringComputeCmdSequence::GetSourceTextureView(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage source, const unsigned int mipLevel)
{
  if ( source == INITIAL )
    return (const GfxShaderTextureView *)(&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].view + 4 * mipLevel);
  if ( source == FINAL )
    return (const GfxShaderTextureView *)(&s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].view + 4 * mipLevel);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 878, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
  return 0i64;
}

/*
==============
FilteringComputeCmdSequence::GetTargetTextureRWView
==============
*/
ID3D12Resource **FilteringComputeCmdSequence::GetTargetTextureRWView(FilteringComputeCmdSequence *this, const FilteringComputeCmdSequence::TargetImage destination, const unsigned int mipLevel)
{
  __int32 v3; 

  if ( destination == INITIAL )
    return &s_reflectionProbeFiltering.m_compressedImage.m_imageMipRWView[mipLevel + 2].rwCounterResource;
  v3 = destination - 1;
  if ( !v3 )
    return &s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipRWView[mipLevel + 2].rwCounterResource;
  if ( v3 == 1 )
    return (ID3D12Resource **)((char *)&s_reflectionProbeFiltering + 24 * mipLevel + 1616);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 894, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    __debugbreak();
  return 0i64;
}

/*
==============
FilteringComputeCmdSequence::GetTargetTextureSize_Octahedron
==============
*/
__int64 FilteringComputeCmdSequence::GetTargetTextureSize_Octahedron(FilteringComputeCmdSequence *this, const unsigned int mipLevel)
{
  return (unsigned int)(ReflectionProbeCompressionMaxResolution_Octahedron() >> mipLevel);
}

/*
==============
FilteringComputeCmdSequence::GetTextureMipSize
==============
*/
__int64 FilteringComputeCmdSequence::GetTextureMipSize(FilteringComputeCmdSequence *this, const unsigned int mipLevel)
{
  return (unsigned int)(ReflectionProbeCompressionMaxResolution() >> mipLevel);
}

/*
==============
R_ExecuteReflectionProbeFilteringComputeCmd
==============
*/
void R_ExecuteReflectionProbeFilteringComputeCmd(ComputeCmdBufState *cmdBufState, const ReflectionProbeFilteringComputeCmd *cmd)
{
  ComputeShader *reflectionProbeFilteringBoxShader; 
  GfxShaderTextureView *srcCubeMapView; 
  int v6; 
  GfxWrappedRWBuffer *shCoeffs; 
  BOOL v8; 
  unsigned int dstMipLevel; 
  float specularGloss; 
  float value; 
  float v12; 
  GfxShaderTextureView *views[2]; 
  int data[8]; 

  R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
  switch ( cmd->shaderType )
  {
    case BOX:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringBoxShader;
      break;
    case BOX_FLIP_FACES:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringBoxFlipFacesShader;
      break;
    case BRUTE_FORCE:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringBruteForceShader;
      break;
    case IMPORTANCE_SAMPLE:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringImportanceSampleShader;
      break;
    case OCTAHEDRON_FROM_CUBE:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringOctahedronFromCubemap;
      break;
    case OCTAHEDRON_BRUTE_FORCE:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringOctahedronBruteForce;
      break;
    case OCTAHEDRON_IMPORTANCE_SAMPLE:
      reflectionProbeFilteringBoxShader = rgp.reflectionProbeFilteringOctahedronImportanceSample;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 655, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid shader type %u", cmd->shaderType) )
        __debugbreak();
      reflectionProbeFilteringBoxShader = NULL;
      break;
  }
  R_SetComputeShader(cmdBufState, reflectionProbeFilteringBoxShader);
  switch ( cmd->shaderType )
  {
    case IMPORTANCE_SAMPLE:
    case OCTAHEDRON_FROM_CUBE:
    case OCTAHEDRON_IMPORTANCE_SAMPLE:
      srcCubeMapView = (GfxShaderTextureView *)cmd->srcCubeMapView;
      v6 = 1;
      break;
    default:
      srcCubeMapView = (GfxShaderTextureView *)cmd->src2DArrayView;
      v6 = 0;
      break;
  }
  views[0] = srcCubeMapView;
  R_SetComputeTextureViews(cmdBufState, v6, 1, (const GfxShaderTextureView *const *)views);
  shCoeffs = cmd->shCoeffs;
  v8 = shCoeffs != NULL;
  if ( shCoeffs && shCoeffs != (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 734, ASSERT_TYPE_ASSERT, "(!cmd->shCoeffs || cmd->shCoeffs == &s_reflectionProbeFiltering.m_shCoeffs)", (const char *)&queryFormat, "!cmd->shCoeffs || cmd->shCoeffs == &s_reflectionProbeFiltering.m_shCoeffs") )
    __debugbreak();
  views[0] = s_reflectionProbeFiltering.m_compressedImage.m_imageMipView;
  R_SetComputeViews(cmdBufState, 2, 1, (const GfxShaderBufferView *const *)views);
  Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels");
  dstMipLevel = cmd->dstMipLevel;
  R_HW_AddResourceTransition(cmdBufState, cmd->dst2DArrayRWView, dstMipLevel, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(cmdBufState);
  views[0] = (GfxShaderTextureView *)cmd->dst2DArrayRWView;
  R_SetComputeTextureRWViews(cmdBufState, 2, 1, (const GfxShaderTextureRWView *const *)views);
  specularGloss = cmd->specularGloss;
  data[0] = cmd->firstFaceIndex;
  data[1] = cmd->faceCount;
  data[2] = cmd->srcImageSize;
  data[3] = cmd->sampleCount;
  *(float *)&data[5] = specularGloss;
  data[4] = v8;
  value = r_reflectionProbeIrradianceMin->current.value;
  v12 = (float)cmd->dstMipLevel;
  *(float *)&data[7] = v12;
  *(float *)&data[6] = value;
  R_UploadAndSetComputeConstants(cmdBufState, 0, data, 0x20u, NULL);
  R_Dispatch(cmdBufState, (cmd->dstImageSize + 7) >> 3, (cmd->dstImageSize + 7) >> 3, cmd->faceCount);
  R_HW_AddResourceTransition(cmdBufState, cmd->dst2DArrayRWView, dstMipLevel, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(cmdBufState);
}

/*
==============
R_ExecuteReflectionProbeFilteringComputeCmds
==============
*/
void R_ExecuteReflectionProbeFilteringComputeCmds(ComputeCmdBufState *cmdBufState, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *header)
{
  const ReflectionProbeFilteringComputeCmd *ComputeCmdData; 
  const ReflectionProbeFilteringComputeCmd *v8; 
  unsigned __int64 *labelAddress; 

  do
  {
    ComputeCmdData = (const ReflectionProbeFilteringComputeCmd *)R_GetComputeCmdData(list, header);
    v8 = ComputeCmdData;
    labelAddress = ComputeCmdData->waitLabel.labelAddress;
    if ( labelAddress )
      R_GPULabel_Wait(cmdBufState, labelAddress, ComputeCmdData->waitLabel.value, GFX_LABEL_COMPARE_FUNC_GREATEREQUAL);
    if ( v8->shaderType == SH_PROJECTION )
      R_ExecuteReflectionProbeSHComputeCmd(cmdBufState, v8);
    else
      R_ExecuteReflectionProbeFilteringComputeCmd(cmdBufState, v8);
    header = R_NextComputeCmdOfSameType(list, header);
  }
  while ( header );
}

/*
==============
R_ExecuteReflectionProbeSHComputeCmd
==============
*/
void R_ExecuteReflectionProbeSHComputeCmd(ComputeCmdBufState *cmdBufState, const ReflectionProbeFilteringComputeCmd *cmd)
{
  GfxWrappedRWBuffer *shCoeffs; 
  bool v5; 
  unsigned int srcImageSize; 
  int faceCount; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  GfxWrappedRWBuffer *v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderTextureView *views; 
  unsigned int data; 
  unsigned int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 

  R_ProfBeginNamedEvent(cmdBufState, "SH Projection");
  shCoeffs = cmd->shCoeffs;
  R_HW_AddResourceTransition(cmdBufState, shCoeffs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(cmdBufState);
  v5 = R_ReflectionProbeSH_UseOfflineShader();
  if ( dword_152E3D89C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_152E3D89C);
    if ( dword_152E3D89C == -1 )
    {
      computeShader = rgp.cubeMapToSH;
      j__Init_thread_footer(&dword_152E3D89C);
    }
  }
  R_SetComputeShader(cmdBufState, computeShader);
  views = (GfxShaderTextureView *)cmd->srcCubeMapView;
  R_SetComputeTextureViews(cmdBufState, 0, 1, (const GfxShaderTextureView *const *)&views);
  p_rwView = &shCoeffs->rwView;
  R_SetComputeRWViewsWithCounters(cmdBufState, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  srcImageSize = cmd->srcImageSize;
  faceCount = cmd->faceCount;
  v8 = 16;
  if ( v5 )
    v8 = 8;
  v21 = cmd->srcImageSize;
  v20 = faceCount;
  v9 = (srcImageSize + v8 - 1) / v8;
  v18 = v9;
  v19 = v9;
  v10 = v9 * v9 * faceCount;
  data = v10;
  R_UploadAndSetComputeConstants(cmdBufState, 0, &data, 0x20u, NULL);
  R_Dispatch(cmdBufState, v9, v9, faceCount);
  v11 = cmd->shCoeffs;
  if ( v10 > 1 )
  {
    do
    {
      R_ComputeWaitForCompute(cmdBufState, PIPE_FLUSH_PARTIAL);
      v12 = R_ReflectionProbeSH_UseOfflineShader();
      R_SetComputeShader(cmdBufState, rgp.shReduce);
      v22 = v10;
      v13 = 256;
      v19 = 1;
      if ( v12 )
        v13 = 64;
      v20 = 1;
      v21 = cmd->srcImageSize;
      v14 = (v13 + v10 - 1) / v13;
      data = v14;
      v18 = v14;
      R_UploadAndSetComputeConstants(cmdBufState, 0, &data, 0x20u, NULL);
      p_rwView = &v11->rwView;
      R_SetComputeRWViewsWithCounters(cmdBufState, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
      R_Dispatch(cmdBufState, v14, 1u, 1u);
      v10 = v14;
    }
    while ( v14 > 1 );
  }
  R_HW_AddResourceTransition(cmdBufState, v11, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(cmdBufState);
  R_ProfEndNamedEvent(cmdBufState);
}

/*
==============
R_ReflectionProbeFiltering_ClearProbeInfo
==============
*/
void R_ReflectionProbeFiltering_ClearProbeInfo(void)
{
  ;
}

/*
==============
R_ReflectionProbeFiltering_CompressFilteredImage
==============
*/
bool R_ReflectionProbeFiltering_CompressFilteredImage(ComputeCmdBufState *state, const bool highQuality, const bool asyncCompress)
{
  unsigned int Int_Internal_DebugName; 
  GfxShaderTextureView **v7; 
  __int64 v8; 
  unsigned int *p_view; 
  unsigned int v10; 
  GfxShaderTextureView **v11; 
  __int64 v12; 
  GfxShaderTextureView *m_imageMipView; 
  GfxShaderTextureView *mipMapViews[16]; 
  GfxShaderTextureView *v16[16]; 

  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels");
  if ( Int_Internal_DebugName )
  {
    v7 = mipMapViews;
    v8 = Int_Internal_DebugName;
    p_view = &s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].view;
    do
    {
      *v7++ = (GfxShaderTextureView *)p_view;
      p_view += 4;
      --v8;
    }
    while ( v8 );
  }
  if ( !R_ReflectionProbeCompression_CompressImage(state, (const GfxShaderTextureView *const *)mipMapViews, Int_Internal_DebugName, highQuality, asyncCompress) )
    return 0;
  v10 = R_ReflectionProbeCompression_MainMipLevelCount_Octahedron();
  if ( v10 )
  {
    v11 = v16;
    v12 = v10;
    m_imageMipView = imageData.m_imageMipView;
    do
    {
      *v11++ = m_imageMipView++;
      --v12;
    }
    while ( v12 );
  }
  return R_ReflectionProbeCompression_CompressImage_Octahedron(state, (const GfxShaderTextureView *const *)v16, v10, highQuality, asyncCompress);
}

/*
==============
R_ReflectionProbeFiltering_FilterImage
==============
*/
char R_ReflectionProbeFiltering_FilterImage(const GfxImage *sourceImage, const GfxReflectionProbeFilteringMethod filteringMethod, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex, const GfxLabelSyncInfo *waitLabelInfo)
{
  unsigned int v11; 
  unsigned int m_cmdCount; 
  ComputeCmdList *cmdList; 
  __m256i *v14; 
  unsigned int v15; 
  __int64 v16; 
  FilteringComputeCmdSequence v18; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1350, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  v11 = 0;
  v18.m_cmdCount = 0;
  FilteringComputeCmdSequence::SetupCmdSequence(&v18, sourceImage, filteringMethod, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex);
  m_cmdCount = v18.m_cmdCount;
  cmdList = frontEndDataOut->compute.cmdList;
  v14 = (__m256i *)R_AllocComputeCmdDataAligned(cmdList, 96 * v18.m_cmdCount, 8u);
  if ( v14 )
  {
    v15 = m_cmdCount - 1;
    if ( !m_cmdCount )
      return 1;
    while ( 1 )
    {
      v16 = v15 - v11;
      *v14 = *(__m256i *)&v18.m_computeCmds[v16].shaderType;
      v14[1] = *(__m256i *)&v18.m_computeCmds[v16].srcCubeMapView;
      v14[2] = *(__m256i *)&v18.m_computeCmds[v16].dstProbeIndex;
      if ( v11 == v15 )
      {
        if ( waitLabelInfo )
          *(GfxLabelSyncInfo *)&v14[2].m256i_u64[2] = *waitLabelInfo;
      }
      if ( !R_AddComputeCmd(cmdList, COMPUTECMD_REFLECTION_PROBE_FILTERING, v14) )
        break;
      ++v11;
      v14 += 3;
      if ( v11 >= m_cmdCount )
        return 1;
    }
  }
  return 0;
}

/*
==============
R_ReflectionProbeFiltering_GetFilteredImage
==============
*/
ID3D12Resource *R_ReflectionProbeFiltering_GetFilteredImage()
{
  return s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].resource;
}

/*
==============
R_ReflectionProbeFiltering_GetSHData
==============
*/
GfxReflectionProbeFilteringStaticData *R_ReflectionProbeFiltering_GetSHData()
{
  return &s_reflectionProbeFiltering;
}

/*
==============
R_ReflectionProbeFiltering_GfxFilterImage
==============
*/
void R_ReflectionProbeFiltering_GfxFilterImage(ComputeCmdBufState *state, const GfxImage *sourceImage, const GfxReflectionProbeFilteringMethod filteringMethod, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex)
{
  ReflectionProbeFilteringComputeCmd *m_computeCmds; 
  __int64 m_cmdCount; 
  FilteringComputeCmdSequence v13; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1393, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  v13.m_cmdCount = 0;
  FilteringComputeCmdSequence::SetupCmdSequence(&v13, sourceImage, filteringMethod, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex);
  R_ProfBeginNamedEvent(state, "ReflectionProbeFiltering");
  if ( v13.m_cmdCount )
  {
    m_computeCmds = v13.m_computeCmds;
    m_cmdCount = v13.m_cmdCount;
    do
    {
      if ( m_computeCmds->shaderType == SH_PROJECTION )
        R_ExecuteReflectionProbeSHComputeCmd(state, m_computeCmds);
      else
        R_ExecuteReflectionProbeFilteringComputeCmd(state, m_computeCmds);
      ++m_computeCmds;
      --m_cmdCount;
    }
    while ( m_cmdCount );
  }
  R_ProfEndNamedEvent(state);
}

/*
==============
R_ReflectionProbeFiltering_SetProbeInfo
==============
*/
void R_ReflectionProbeFiltering_SetProbeInfo(const vec3_t *origin, unsigned int probeIndex)
{
  ;
}

/*
==============
R_ReflectionProbeFiltering_SetupImageViews
==============
*/
void R_ReflectionProbeFiltering_SetupImageViews(GfxReflectionProbeFilteringImageData *imageData)
{
  GfxReflectionProbeFilteringImageData *v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  GfxShaderTextureView *m_imageMipView; 
  GfxShaderTextureRWView *m_imageMipRWView; 
  unsigned int freeSlot; 
  unsigned int *v8; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  GraphicsUnknown_Function_Table *v13; 
  unsigned int Int_Internal_DebugName; 
  ID3D12Resource *resource; 
  int v17[2]; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23[5]; 
  __int128 v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  char v28[32]; 
  int v29; 

  v2 = imageData;
  v3 = 0;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_r_reflectionProbeCompressionMaxMipLevels, "r_reflectionProbeCompressionMaxMipLevels");
  if ( Int_Internal_DebugName )
  {
    v4 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    m_imageMipView = v2->m_imageMipView;
    m_imageMipRWView = v2->m_imageMipRWView;
    do
    {
      resource = R_Texture_GetResident(v2->m_image->textureId)->basemap;
      *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Resource *, char *))resource->m_pFunction[3].AddRef)(resource, v28);
      v23[0] = v29;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v24 = _XMM0;
      v25 = 0;
      v23[1] = 5;
      v23[4] = 6;
      v23[3] = 0;
      v23[2] = v3;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v8 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v8;
      *v8 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v26 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, resource, 0i64, v23, v26);
      v10 = v29;
      m_imageMipRWView->rwView = freeSlot;
      m_imageMipRWView->rwResource = resource;
      m_imageMipRWView->rwCounterResource = NULL;
      v22 = 0i64;
      v20 = 1i64;
      m_imageMipRWView->rwSubresourceToTransition = v3;
      v18 = 5768i64;
      v17[0] = v10;
      v17[1] = 5;
      v19 = v3;
      v21 = 6;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      v11 = g_descriptorPools.shaderViewPool.freeSlot;
      v2 = imageData;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        v11 = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v12 = &g_descriptorPools.shaderViewPool.nextSlot[v11];
      g_descriptorPools.shaderViewPool.freeSlot = *v12;
      *v12 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
      }
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v13 = g_dx.d3d12device->m_pFunction;
      v27 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v11 + g_descriptorPools.shaderViewPool.handle.startSlot);
      v13[6].QueryInterface(g_dx.d3d12device, (const _GUID *)resource, (void **)v17);
      *(&m_imageMipView->view + 1) = 0;
      m_imageMipView->view = v11;
      m_imageMipView->resource = resource;
      PIXSetDebugName(resource, imageData->m_image->name);
      ++v3;
      ++m_imageMipRWView;
      ++m_imageMipView;
    }
    while ( v3 < Int_Internal_DebugName );
  }
}

/*
==============
R_ReflectionProbeFiltering_SetupImageViews_Octahedron
==============
*/
void R_ReflectionProbeFiltering_SetupImageViews_Octahedron(GfxReflectionProbeFilteringImageData *imageData)
{
  unsigned int v2; 
  GfxReflectionProbeFilteringImageData *v3; 
  unsigned __int64 v4; 
  GfxShaderTextureRWView *m_imageMipRWView; 
  GfxShaderTextureView *m_imageMipView; 
  unsigned int freeSlot; 
  unsigned int *v8; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  GraphicsUnknown_Function_Table *v13; 
  unsigned int levelCount; 
  ID3D12Resource *basemap; 
  int v17[2]; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23[5]; 
  __int128 v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  char v28[32]; 
  int v29; 

  v2 = 0;
  v3 = imageData;
  levelCount = imageData->m_image->levelCount;
  if ( imageData->m_image->levelCount )
  {
    v4 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
    m_imageMipRWView = imageData->m_imageMipRWView;
    m_imageMipView = imageData->m_imageMipView;
    do
    {
      basemap = R_Texture_GetResident(v3->m_image->textureId)->basemap;
      *(double *)&_XMM0 = ((double (__fastcall *)(ID3D12Resource *, char *))basemap->m_pFunction[3].AddRef)(basemap, v28);
      v23[0] = v29;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v24 = _XMM0;
      v25 = 0;
      v23[1] = 5;
      v23[4] = 1;
      v23[3] = 0;
      v23[2] = v2;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v8 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
      g_descriptorPools.shaderViewPool.freeSlot = *v8;
      *v8 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
        __debugbreak();
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      m_pFunction = g_dx.d3d12device->m_pFunction;
      v26 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
      ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, int *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, v23, v26);
      v10 = v29;
      m_imageMipRWView->rwView = freeSlot;
      m_imageMipRWView->rwResource = basemap;
      m_imageMipRWView->rwCounterResource = NULL;
      v22 = 0i64;
      v20 = 1i64;
      v21 = 1;
      m_imageMipRWView->rwSubresourceToTransition = v2;
      v18 = 5768i64;
      v17[0] = v10;
      v17[1] = 5;
      v19 = v2;
      while ( 1 )
      {
        if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
        if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
          break;
        Sys_Sleep(0);
      }
      v11 = g_descriptorPools.shaderViewPool.freeSlot;
      v3 = imageData;
      if ( !g_descriptorPools.shaderViewPool.freeSlot )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
          __debugbreak();
        v11 = g_descriptorPools.shaderViewPool.freeSlot;
      }
      v12 = &g_descriptorPools.shaderViewPool.nextSlot[v11];
      g_descriptorPools.shaderViewPool.freeSlot = *v12;
      *v12 = 0;
      ++g_descriptorPools.shaderViewPool.handle.used;
      if ( v4 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
          __debugbreak();
      }
      _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
      v13 = g_dx.d3d12device->m_pFunction;
      v27 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (v11 + g_descriptorPools.shaderViewPool.handle.startSlot);
      v13[6].QueryInterface(g_dx.d3d12device, (const _GUID *)basemap, (void **)v17);
      *(&m_imageMipView->view + 1) = 0;
      m_imageMipView->view = v11;
      m_imageMipView->resource = basemap;
      PIXSetDebugName(basemap, imageData->m_image->name);
      ++v2;
      ++m_imageMipRWView;
      ++m_imageMipView;
    }
    while ( v2 < levelCount );
  }
}

/*
==============
R_ReflectionProbeFiltering_Shutdown
==============
*/
void R_ReflectionProbeFiltering_Shutdown(void)
{
  R_ReflectionProbeFiltering_ShutdownImage((GfxReflectionProbeFilteringImageData *)&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3]);
  R_ReflectionProbeFiltering_ShutdownImage((GfxReflectionProbeFilteringImageData *)&s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3]);
  R_ShutdownGfxWrappedBuffer((GfxWrappedRWBuffer *)&s_reflectionProbeFiltering);
  R_ReflectionProbeFiltering_ShutdownImage(&imageData);
}

/*
==============
R_ReflectionProbeFiltering_ShutdownImage
==============
*/
void R_ReflectionProbeFiltering_ShutdownImage(GfxReflectionProbeFilteringImageData *imageData)
{
  GfxImage *m_image; 
  unsigned __int8 levelCount; 
  GfxShaderTextureRWView *m_imageMipRWView; 
  GfxShaderTextureView *m_imageMipView; 
  __int64 v6; 

  m_image = imageData->m_image;
  levelCount = imageData->m_image->levelCount;
  if ( levelCount )
  {
    m_imageMipRWView = imageData->m_imageMipRWView;
    m_imageMipView = imageData->m_imageMipView;
    v6 = levelCount;
    do
    {
      R_ReleaseShaderTextureView(m_imageMipView);
      R_ReleaseShaderTextureRWView(m_imageMipRWView);
      ++m_imageMipView;
      ++m_imageMipRWView;
      --v6;
    }
    while ( v6 );
    m_image = imageData->m_image;
  }
  if ( !m_image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 1758, ASSERT_TYPE_ASSERT, "(imageData->m_image)", (const char *)&queryFormat, "imageData->m_image") )
    __debugbreak();
  Image_Release(imageData->m_image);
  imageData->m_image = NULL;
}

/*
==============
R_ReflectionProbeFiltering_Startup
==============
*/

void __fastcall R_ReflectionProbeFiltering_Startup(double _XMM0_8)
{
  bool v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  GfxPixelFormat ImagePixelFormat; 
  GfxPixelFormat v8; 
  GfxPixelFormat v10; 
  __m256i v12; 
  __m256i v13; 
  Image_SetupParams params; 

  v1 = R_ReflectionProbeSH_UseOfflineShader();
  v2 = 16;
  if ( v1 )
    v2 = 8;
  v3 = (v2 - 1 + ReflectionProbeCompressionMaxResolution()) / v2;
  v4 = ReflectionProbeCompressionMaxResolution();
  v5 = 36;
  if ( v1 )
    v5 = 276;
  R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)&s_reflectionProbeFiltering, GfxWrappedBuffer_Structured, v5, 24 * v3 * ((v2 - 1 + v4) / v2), GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, NULL, NULL, "Reflection Probe SH Coeffs");
  s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource = (ID3D12Resource *)Image_AllocProg(IMAGE_PROG_REFLECTION_PROBE_FILTERING_INITIAL, IMG_CATEGORY_RAW, TS_FUNCTION);
  ImagePixelFormat = R_ReflectionProbe_GetImagePixelFormat();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.m256i_u64[1] = _XMM0;
  v12.m256i_i32[0] = ReflectionProbeCompressionMaxResolution();
  v12.m256i_i32[1] = v12.m256i_i32[0];
  v12.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v12.m256i_i64[1] + 4) = 1i64;
  v13.m256i_i64[0] = 0i64;
  v13.m256i_i32[6] = -1;
  v12.m256i_i32[5] = 8421376;
  v12.m256i_i32[6] = ImagePixelFormat;
  *(__m256i *)&params.width = v12;
  *(__m256i *)&params.customAllocFunc = v13;
  Image_Setup((GfxImage *)s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource, &params);
  R_ReflectionProbeFiltering_SetupImageViews((GfxReflectionProbeFilteringImageData *)&s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3]);
  s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].resource = (ID3D12Resource *)Image_AllocProg(IMAGE_PROG_REFLECTION_PROBE_FILTERING_FINAL, IMG_CATEGORY_RAW, TS_FUNCTION);
  v8 = R_ReflectionProbe_GetImagePixelFormat();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.m256i_u64[1] = _XMM0;
  v12.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v12.m256i_i64[1] + 4) = 1i64;
  v12.m256i_i32[0] = ReflectionProbeCompressionMaxResolution();
  v12.m256i_i32[1] = v12.m256i_i32[0];
  v12.m256i_i32[5] = 8421376;
  v12.m256i_i32[6] = v8;
  v13.m256i_i64[0] = 0i64;
  v13.m256i_i32[6] = -1;
  *(__m256i *)&params.customAllocFunc = v13;
  *(__m256i *)&params.width = v12;
  Image_Setup((GfxImage *)s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].resource, &params);
  R_ReflectionProbeFiltering_SetupImageViews((GfxReflectionProbeFilteringImageData *)&s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3]);
  imageData.m_image = Image_AllocProg(IMAGE_PROG_REFLECTION_PROBE_FILTERING_OCTAHEDRON, IMG_CATEGORY_RAW, TS_FUNCTION);
  v10 = R_ReflectionProbe_GetImagePixelFormat();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v13.m256i_u64[1] = _XMM0;
  v12.m256i_i32[0] = ReflectionProbeCompressionMaxResolution_Octahedron();
  v12.m256i_i32[1] = v12.m256i_i32[0];
  v12.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v12.m256i_i64[1] + 4) = 1i64;
  v13.m256i_i64[0] = 0i64;
  v13.m256i_i32[6] = -1;
  v12.m256i_i32[5] = 0x800000;
  v12.m256i_i32[6] = v10;
  *(__m256i *)&params.width = v12;
  *(__m256i *)&params.customAllocFunc = v13;
  Image_Setup(imageData.m_image, &params);
  R_ReflectionProbeFiltering_SetupImageViews_Octahedron(&imageData);
}

/*
==============
R_ReflectionProbeSH_CopySHToSHArrayBuffer
==============
*/
void R_ReflectionProbeSH_CopySHToSHArrayBuffer(ComputeCmdBufState *computeState, unsigned int dstProbeIndex)
{
  GfxWorldDraw *v4; 
  GfxShaderBufferView *views[2]; 
  char data[20]; 
  unsigned int reflectionProbeCount; 
  unsigned int v8; 

  if ( R_ReflectionProbeSH_UseOfflineShader() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 543, ASSERT_TYPE_ASSERT, "(!R_ReflectionProbeSH_UseOfflineShader())", (const char *)&queryFormat, "!R_ReflectionProbeSH_UseOfflineShader()") )
    __debugbreak();
  R_ProfBeginNamedEvent(computeState, "RB_ReflectionProbeSH_CopySHToSHArrayBuffer");
  v4 = g_worldDraw;
  R_HW_AddResourceTransition(computeState, &g_worldDraw->reflectionProbeData.reflectionProbeSHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
  R_SetComputeShader(computeState, rgp.shCopy);
  views[0] = (GfxShaderBufferView *)s_reflectionProbeFiltering.m_compressedImage.m_imageMipView;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&v4->reflectionProbeData.reflectionProbeSHBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  reflectionProbeCount = g_worldDraw->reflectionProbeData.reflectionProbeCount;
  v8 = dstProbeIndex;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
  R_Dispatch(computeState, 1u, 1u, 1u);
  R_HW_AddResourceTransition(computeState, &v4->reflectionProbeData.reflectionProbeSHBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(computeState);
  R_ProfEndNamedEvent(computeState);
}

/*
==============
FilteringComputeCmdSequence::SetupCmdSequence
==============
*/
void FilteringComputeCmdSequence::SetupCmdSequence(FilteringComputeCmdSequence *this, const GfxImage *sourceImage, const GfxReflectionProbeFilteringMethod filteringMethod, const bool flipFaces, const bool boxFilterTopMip, const unsigned int sampleCount, const unsigned int dstProbeIndex)
{
  __int64 maxLevels; 

  if ( !sourceImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 916, ASSERT_TYPE_ASSERT, "(sourceImage)", (const char *)&queryFormat, "sourceImage") )
    __debugbreak();
  this->m_cmdCount = 0;
  if ( filteringMethod == BOX_FLIP_FACES )
  {
    FilteringComputeCmdSequence::AddBruteForceFilterSequence(this, sourceImage, flipFaces, boxFilterTopMip, dstProbeIndex);
  }
  else if ( filteringMethod == BRUTE_FORCE )
  {
    FilteringComputeCmdSequence::AddImportanceSampleFilterSequence(this, sourceImage, flipFaces, boxFilterTopMip, sampleCount, dstProbeIndex);
  }
  else
  {
    FilteringComputeCmdSequence::AddBoxFilterSequence(this, sourceImage, flipFaces, FINAL, (GfxWrappedRWBuffer *)&s_reflectionProbeFiltering, dstProbeIndex);
  }
  if ( R_ReflectionProbe_IsOctahedronFilteringEnabled() )
  {
    if ( filteringMethod )
    {
      if ( filteringMethod == BOX_FLIP_FACES )
      {
        FilteringComputeCmdSequence::AddSampleOctahedronSequence(this, (GfxImage *)s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource, OCTAHEDRON, sampleCount, OCTAHEDRON_BRUTE_FORCE, 0);
      }
      else if ( filteringMethod == BRUTE_FORCE )
      {
        FilteringComputeCmdSequence::AddSampleOctahedronSequence(this, (GfxImage *)s_reflectionProbeFiltering.m_compressedImage.m_imageMipView[3].resource, OCTAHEDRON, sampleCount, OCTAHEDRON_IMPORTANCE_SAMPLE, 0);
      }
      else
      {
        LODWORD(maxLevels) = filteringMethod;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_filtering.cpp", 973, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "filtering method %u not implemented\n", maxLevels) )
          __debugbreak();
      }
    }
    else
    {
      FilteringComputeCmdSequence::AddSampleOctahedronSequence(this, (GfxImage *)s_reflectionProbeFiltering.m_compressedImageOctahedron.m_imageMipView[3].resource, OCTAHEDRON, 0, OCTAHEDRON_FROM_CUBE, 0);
    }
  }
}

