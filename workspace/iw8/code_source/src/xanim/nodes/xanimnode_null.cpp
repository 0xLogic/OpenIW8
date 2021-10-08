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
  signed int v11; 
  unsigned int v12; 
  unsigned int ChildAt; 
  float v16; 

  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
  NumChildren = XAnimGetNumChildren(SubTreeAnims, animInfo->animIndex);
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  v11 = 0;
  v12 = GraftAnimIndex;
  if ( NumChildren > 0 )
  {
    __asm
    {
      vmovaps [rsp+58h+var_28], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      ChildAt = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v11);
      __asm { vmovss  [rsp+58h+var_38], xmm6 }
      XAnimClearGoalWeight(obj->tree, v12, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, v16, LINEAR);
      ++v11;
    }
    while ( v11 < NumChildren );
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
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

