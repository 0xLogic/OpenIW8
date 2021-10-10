/*
==============
XAnimNullNode_Register
==============
*/

void XAnimNullNode_Register(void)
{
  ?XAnimNullNode_Register@@YAXXZ();
}

/*
==============
XAnimNullNode_Update
==============
*/
void XAnimNullNode_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  const XAnim_s *SubTreeAnims; 
  int NumChildren; 
  unsigned int GraftAnimIndex; 
  signed int v10; 
  unsigned int i; 
  unsigned int ChildAt; 

  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
  NumChildren = XAnimGetNumChildren(SubTreeAnims, animInfo->animIndex);
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  v10 = 0;
  for ( i = GraftAnimIndex; v10 < NumChildren; ++v10 )
  {
    ChildAt = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v10);
    XAnimClearGoalWeight(obj->tree, i, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, 0.0, LINEAR);
  }
}

/*
==============
XAnimNullNode_Calc
==============
*/
void XAnimNullNode_Calc(void *__formal, XAnimCalcAnimInfo *a2, const DObj *a3, const XAnimInfo *a4)
{
  ;
}

/*
==============
XAnimNullNode_Register
==============
*/
void XAnimNullNode_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimNullNode>::ms_typeInfo);
}

