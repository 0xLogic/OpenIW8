/*
==============
IsInfoInstantFullRestart
==============
*/

int __fastcall IsInfoInstantFullRestart(const XAnimInfo *info)
{
  return ?IsInfoInstantFullRestart@@YAHPEBUXAnimInfo@@@Z(info);
}

/*
==============
IsInfoOverlay
==============
*/

int __fastcall IsInfoOverlay(const XAnimInfo *info)
{
  return ?IsInfoOverlay@@YAHPEBUXAnimInfo@@@Z(info);
}

/*
==============
IsInfoAdditive
==============
*/

int __fastcall IsInfoAdditive(const XAnimInfo *info)
{
  return ?IsInfoAdditive@@YAHPEBUXAnimInfo@@@Z(info);
}

/*
==============
XAnimAssertGraftSyncNode
==============
*/

void __fastcall XAnimAssertGraftSyncNode(const XAnimTree *graftTree, unsigned int graftAnimIndex, const XAnimEntry *anim)
{
  ?XAnimAssertGraftSyncNode@@YAXPEBUXAnimTree@@IPEBUXAnimEntry@@@Z(graftTree, graftAnimIndex, anim);
}

/*
==============
XAnimInfoIsInstantWeightChange
==============
*/

bool __fastcall XAnimInfoIsInstantWeightChange(const XAnimInfo *info)
{
  return ?XAnimInfoIsInstantWeightChange@@YA_NPEBUXAnimInfo@@@Z(info);
}

/*
==============
XAnimAssertGraftAnimIndex
==============
*/

void __fastcall XAnimAssertGraftAnimIndex(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  ?XAnimAssertGraftAnimIndex@@YAXPEBUXAnimTree@@IW4XAnimSubTreeID@@I@Z(tree, graftAnimIndex, subTreeID, animIndex);
}

/*
==============
XAnimAssertAnimIndex
==============
*/

void __fastcall XAnimAssertAnimIndex(const XAnimTree *tree, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  ?XAnimAssertAnimIndex@@YAXPEBUXAnimTree@@W4XAnimSubTreeID@@I@Z(tree, subTreeID, animIndex);
}

/*
==============
XAnimInfoHasScrubbedNotetracks
==============
*/

bool __fastcall XAnimInfoHasScrubbedNotetracks(const XAnimInfo *info)
{
  return ?XAnimInfoHasScrubbedNotetracks@@YA_NPEBUXAnimInfo@@@Z(info);
}

/*
==============
InfoSetStateFlag
==============
*/

void __fastcall InfoSetStateFlag(XAnimInfo *info, XAnimStateFlag flag, bool value)
{
  ?InfoSetStateFlag@@YAXPEAUXAnimInfo@@W4XAnimStateFlag@@_N@Z(info, flag, value);
}

/*
==============
XAnimInfoHasSyncGroups
==============
*/

bool __fastcall XAnimInfoHasSyncGroups(const XAnimInfo *info)
{
  return ?XAnimInfoHasSyncGroups@@YA_NPEBUXAnimInfo@@@Z(info);
}

/*
==============
IsInfoAdditive
==============
*/
_BOOL8 IsInfoAdditive(const XAnimInfo *info)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  return !info->animToModel && (info->animParent.flags & 0x210) != 0;
}

/*
==============
XAnimAssertGraftAnimIndex
==============
*/
void XAnimAssertGraftAnimIndex(const XAnimTree *tree, unsigned int graftAnimIndex, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 804, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 805, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( graftAnimIndex && subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 806, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", "%s\n\tInvalid subTreeID.", "!graftAnimIndex || subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
    __debugbreak();
  if ( graftAnimIndex >= tree->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 807, ASSERT_TYPE_ASSERT, "( graftAnimIndex ) < ( tree->anims->size )", "%s < %s\n\t%i, %i", "graftAnimIndex", "tree->anims->size", graftAnimIndex, tree->anims->size) )
    __debugbreak();
  if ( graftAnimIndex )
  {
    if ( !XAnimIsGraftNode(tree->anims, graftAnimIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 808, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || XAnimIsGraftNode( tree->anims, graftAnimIndex ))", "%s\n\tInvalid graft node", "!graftAnimIndex || XAnimIsGraftNode( tree->anims, graftAnimIndex )") )
      __debugbreak();
    if ( !animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 809, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || animIndex != 0)", "%s\n\tCannot use anim index 0 (root) from grafted subtree.", "!graftAnimIndex || animIndex != 0") )
      __debugbreak();
  }
}

/*
==============
InfoSetStateFlag
==============
*/
void InfoSetStateFlag(XAnimInfo *info, XAnimStateFlag flag, bool value)
{
  unsigned __int8 flags; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 666, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  flags = info->state.flags;
  if ( value )
    info->state.flags = flag | flags;
  else
    info->state.flags = flags & ~flag;
}

/*
==============
IsInfoInstantFullRestart
==============
*/
_BOOL8 IsInfoInstantFullRestart(const XAnimInfo *info)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 611, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  return !info->animToModel && (info->animParent.flags & 0x1000) != 0;
}

/*
==============
IsInfoOverlay
==============
*/
_BOOL8 IsInfoOverlay(const XAnimInfo *info)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 597, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  return !info->animToModel && (info->animParent.flags & 0x100) != 0;
}

/*
==============
XAnimAssertAnimIndex
==============
*/
void XAnimAssertAnimIndex(const XAnimTree *tree, const XAnimSubTreeID subTreeID, unsigned int animIndex)
{
  const XAnim_s *SubTreeAnims; 

  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 816, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= SubTreeAnims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 817, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", animIndex, SubTreeAnims->size) )
    __debugbreak();
}

/*
==============
XAnimAssertGraftSyncNode
==============
*/
void XAnimAssertGraftSyncNode(const XAnimTree *graftTree, unsigned int graftAnimIndex, const XAnimEntry *anim)
{
  __int64 v3; 
  XAnim_s *anims; 
  unsigned int v7; 
  const char *AnimDebugName; 

  v3 = graftAnimIndex;
  if ( !graftTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 823, ASSERT_TYPE_ASSERT, "(graftTree)", (const char *)&queryFormat, "graftTree") )
    __debugbreak();
  if ( !graftTree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 824, ASSERT_TYPE_ASSERT, "(graftTree->anims)", (const char *)&queryFormat, "graftTree->anims") )
    __debugbreak();
  if ( !anim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 825, ASSERT_TYPE_ASSERT, "(anim)", (const char *)&queryFormat, "anim") )
    __debugbreak();
  if ( (unsigned int)v3 >= graftTree->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 826, ASSERT_TYPE_ASSERT, "( graftAnimIndex ) < ( graftTree->anims->size )", "%s < %s\n\t%i, %i", "graftAnimIndex", "graftTree->anims->size", v3, graftTree->anims->size) )
    __debugbreak();
  anims = graftTree->anims;
  v7 = graftTree->anims->entries[v3].animParent.flags & 3;
  if ( anim->numAnims && v7 && ((anim->animParent.flags & 3) != v7 || anim->animParent.syncGroup[0] != anims->entries[v3].animParent.syncGroup[0]) )
  {
    AnimDebugName = XAnimGetAnimDebugName(anims, v3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 831, ASSERT_TYPE_ASSERT, "((anim->numAnims == 0) || !graftSyncFlags || ( (syncFlags == graftSyncFlags) && (anim->animParent.syncGroup == graftAnim->animParent.syncGroup) ))", "%s\n\tloopsync/nonloopsync keyword or sync group number does not match between the graft node('%s') and the anim node being grafted.", "(anim->numAnims == 0) || !graftSyncFlags || ( (syncFlags == graftSyncFlags) && (anim->animParent.syncGroup == graftAnim->animParent.syncGroup) )", AnimDebugName) )
      __debugbreak();
  }
}

/*
==============
XAnimInfoHasScrubbedNotetracks
==============
*/
bool XAnimInfoHasScrubbedNotetracks(const XAnimInfo *info)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 653, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  return (info->state.flags & 0x10) != 0;
}

/*
==============
XAnimInfoHasSyncGroups
==============
*/
bool XAnimInfoHasSyncGroups(const XAnimInfo *info)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 646, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  return (info->state.flags & 2) != 0;
}

/*
==============
XAnimInfoIsInstantWeightChange
==============
*/
bool XAnimInfoIsInstantWeightChange(const XAnimInfo *info)
{
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 625, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  return info->state.flags & 1;
}

