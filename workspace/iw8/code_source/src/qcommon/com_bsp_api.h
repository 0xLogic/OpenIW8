/*
==============
Com_GetPrimaryLight
==============
*/

const ComPrimaryLight *__fastcall Com_GetPrimaryLight(unsigned int primaryLightIndex)
{
  return ?Com_GetPrimaryLight@@YAPEBUComPrimaryLight@@I@Z(primaryLightIndex);
}

/*
==============
Com_GetPrimaryLight
==============
*/
ComPrimaryLight *Com_GetPrimaryLight(unsigned int primaryLightIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int primaryLightCount; 

  v1 = primaryLightIndex;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( (unsigned int)v1 >= comWorld.primaryLightCount )
  {
    primaryLightCount = comWorld.primaryLightCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v3, primaryLightCount) )
      __debugbreak();
  }
  return &comWorld.primaryLights[v1];
}

