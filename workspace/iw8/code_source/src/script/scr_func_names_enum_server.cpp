/*
==============
ScriptContext_Setup_Server
==============
*/

void __fastcall ScriptContext_Setup_Server(scrContext_t *scrContext)
{
  ?ScriptContext_Setup_Server@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_Setup_Server
==============
*/
void ScriptContext_Setup_Server(scrContext_t *scrContext)
{
  scrContext->m_funcBegin = 1;
  scrContext->m_pFuncNames = s_gServerFuncNames;
  scrContext->m_pMethNames = s_gServerMethNames;
  scrContext->m_funcTypes = s_gServerFuncTypes;
  scrContext->m_methTypes = s_gServerMethTypes;
  scrContext->m_pFuncTable = s_gServerFuncTable;
  scrContext->m_pMethTable = s_gServerMethTable;
  scrContext->m_vmDebugPub.m_pFuncTable = s_gServerFuncDebugTable;
  scrContext->m_funcEnd = 1054;
  scrContext->m_funcCount = 1053;
  scrContext->m_methBegin = 0x8000;
  scrContext->m_methEnd = 34724;
  scrContext->m_methCount = 1956;
  scrContext->m_vmDebugPub.m_FuncTableSize = 3009;
}

