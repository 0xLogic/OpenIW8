/*
==============
MocapStreaming_XAnimNode_Link_Init
==============
*/

void MocapStreaming_XAnimNode_Link_Init(void)
{
  ?MocapStreaming_XAnimNode_Link_Init@@YAXXZ();
}

/*
==============
MocapStreaming_XAnimNode_Link_Read
==============
*/
void MocapStreaming_XAnimNode_Link_Read(void *nodeData, MemoryFile *memFile)
{
  ;
}

/*
==============
MocapStreaming_XAnimNode_Link_Write
==============
*/
void MocapStreaming_XAnimNode_Link_Write(void *nodeData, MemoryFile *memFile)
{
  ;
}

/*
==============
MocapStreaming_XAnimNode_Link_Init
==============
*/
void MocapStreaming_XAnimNode_Link_Init(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<MocapStreaming_XAnimNode_Link>::ms_typeInfo);
}

