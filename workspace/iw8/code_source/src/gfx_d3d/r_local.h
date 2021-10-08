/*
==============
R_AssignDrawPrimArgsInternal
==============
*/

void __fastcall R_AssignDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, int vertexCount, int primCount, int baseIndex, unsigned int vertIndexBase, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget, GfxPrimStatsTriSource triSource)
{
  ?R_AssignDrawPrimArgsInternal@@YAXPEAUGfxDrawPrimArgs@@HHHIIW4GfxViewStatsTarget@@W4GfxPrimStatsTarget@@W4GfxPrimStatsTriSource@@@Z(outArgs, vertexCount, primCount, baseIndex, vertIndexBase, trackFrameIndex, viewStatsTarget, primStatsTarget, triSource);
}

/*
==============
R_AssignDrawPrimArgsInternal
==============
*/
void R_AssignDrawPrimArgsInternal(GfxDrawPrimArgs *outArgs, int vertexCount, int primCount, int baseIndex, unsigned int vertIndexBase, unsigned int trackFrameIndex, GfxViewStatsTarget viewStatsTarget, GfxPrimStatsTarget primStatsTarget, GfxPrimStatsTriSource triSource)
{
  outArgs->vertIndexBase = vertIndexBase;
  outArgs->trackFrameIndex = trackFrameIndex;
  outArgs->vertexCount = vertexCount;
  outArgs->primCount = primCount;
  outArgs->baseIndex = baseIndex;
  if ( (unsigned int)(viewStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
    __debugbreak();
  outArgs->viewStatsTarget = viewStatsTarget;
  if ( (unsigned int)(primStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxPrimStatsTarget>(enum GfxPrimStatsTarget)", "signed", (char)primStatsTarget, "signed", primStatsTarget) )
    __debugbreak();
  outArgs->primStatsTarget = primStatsTarget;
  if ( (unsigned int)(triSource + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxPrimStatsTriSource>(enum GfxPrimStatsTriSource)", "signed", (char)triSource, "signed", triSource) )
    __debugbreak();
  outArgs->triSource = triSource;
}

