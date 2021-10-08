/*
==============
XModelSurfs_IsStreamed
==============
*/

bool __fastcall XModelSurfs_IsStreamed(const XModelSurfs *modelSurfs)
{
  return ?XModelSurfs_IsStreamed@@YA_NPEBUXModelSurfs@@@Z(modelSurfs);
}

/*
==============
XModelSurfs_IsStreamed
==============
*/
bool XModelSurfs_IsStreamed(const XModelSurfs *modelSurfs)
{
  if ( !modelSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
    __debugbreak();
  if ( !modelSurfs->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
    __debugbreak();
  return modelSurfs->shared->flags & 1;
}

