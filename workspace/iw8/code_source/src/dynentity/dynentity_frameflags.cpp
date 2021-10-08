/*
==============
DynEnt_VisiblyChangedThisFrame
==============
*/

bool __fastcall DynEnt_VisiblyChangedThisFrame(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned int dynEntId)
{
  return ?DynEnt_VisiblyChangedThisFrame@@YA_NW4LocalClientNum_t@@W4DynEntityBasis@@I@Z(localClientNum, basis, dynEntId);
}

/*
==============
DynEnt_VisiblyChangedLastFrame
==============
*/

bool __fastcall DynEnt_VisiblyChangedLastFrame(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned int dynEntId)
{
  return ?DynEnt_VisiblyChangedLastFrame@@YA_NW4LocalClientNum_t@@W4DynEntityBasis@@I@Z(localClientNum, basis, dynEntId);
}

/*
==============
DynEnt_VisiblyChangedRecently
==============
*/

bool __fastcall DynEnt_VisiblyChangedRecently(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned int dynEntId)
{
  return ?DynEnt_VisiblyChangedRecently@@YA_NW4LocalClientNum_t@@W4DynEntityBasis@@I@Z(localClientNum, basis, dynEntId);
}

/*
==============
DynEnt_UpdateFrameFlags
==============
*/

void __fastcall DynEnt_UpdateFrameFlags(LocalClientNum_t localClientNum)
{
  ?DynEnt_UpdateFrameFlags@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEnt_UpdateFrameFlags
==============
*/
void DynEnt_UpdateFrameFlags(LocalClientNum_t localClientNum)
{
  DynEntityClient *m_curNode; 
  __int16 v2; 
  DynEntCL_Active_Iterator v3; 

  *(_DWORD *)&v3.m_nextIndex = -1;
  *(_QWORD *)&v3.m_curBasis = 0i64;
  v3.m_curNode = NULL;
  DynEntCL_Active_Iterator::Init(&v3, localClientNum, DYNENT_BASIS_COUNT);
  for ( ; DynEntCL_Active_Iterator::Advance(&v3); m_curNode->flags = v2 & 0xFFBF )
  {
    m_curNode = v3.m_curNode;
    if ( !v3.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_frameflags.cpp", 45, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    v2 = m_curNode->flags & 0xFF7F;
    if ( (m_curNode->flags & 0x40) != 0 )
      v2 |= 0x80u;
  }
}

/*
==============
DynEnt_VisiblyChangedLastFrame
==============
*/
__int64 DynEnt_VisiblyChangedLastFrame(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned int dynEntId)
{
  DynEntityClient *Client; 

  Client = DynEnt_GetClient(localClientNum, dynEntId, basis);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_frameflags.cpp", 80, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  return LOBYTE(Client->flags) >> 7;
}

/*
==============
DynEnt_VisiblyChangedRecently
==============
*/
bool DynEnt_VisiblyChangedRecently(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned int dynEntId)
{
  DynEntityClient *Client; 

  Client = DynEnt_GetClient(localClientNum, dynEntId, basis);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_frameflags.cpp", 93, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  return (Client->flags & 0xC0) != 0;
}

/*
==============
DynEnt_VisiblyChangedThisFrame
==============
*/
bool DynEnt_VisiblyChangedThisFrame(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned int dynEntId)
{
  DynEntityClient *Client; 

  Client = DynEnt_GetClient(localClientNum, dynEntId, basis);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_frameflags.cpp", 67, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  return (Client->flags & 0x40) != 0;
}

