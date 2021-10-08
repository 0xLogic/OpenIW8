/*
==============
CM_RegisterAnchorEntity
==============
*/

void __fastcall CM_RegisterAnchorEntity(unsigned int anchorIndex, int entNum)
{
  ?CM_RegisterAnchorEntity@@YAXIH@Z(anchorIndex, entNum);
}

/*
==============
CM_GetServerTriggerIndex
==============
*/

unsigned int __fastcall CM_GetServerTriggerIndex(const char *triggerModelString)
{
  return ?CM_GetServerTriggerIndex@@YAIPEBD@Z(triggerModelString);
}

/*
==============
CM_ClientAnchorCount
==============
*/

unsigned int __fastcall CM_ClientAnchorCount()
{
  return ?CM_ClientAnchorCount@@YAIXZ();
}

/*
==============
CM_FindAnchorIndexFromName
==============
*/

int __fastcall CM_FindAnchorIndexFromName(const char *anchorName)
{
  return ?CM_FindAnchorIndexFromName@@YAHPEBD@Z(anchorName);
}

/*
==============
CM_GetClientTriggerIndex
==============
*/

unsigned int __fastcall CM_GetClientTriggerIndex(const char *triggerModelString)
{
  return ?CM_GetClientTriggerIndex@@YAIPEBD@Z(triggerModelString);
}

/*
==============
CM_GetAnchorEntNum
==============
*/

int __fastcall CM_GetAnchorEntNum(unsigned int anchorIndex)
{
  return ?CM_GetAnchorEntNum@@YAHI@Z(anchorIndex);
}

/*
==============
CM_ClientAnchorName
==============
*/

const char *__fastcall CM_ClientAnchorName(unsigned int anchorIndex)
{
  return ?CM_ClientAnchorName@@YAPEBDI@Z(anchorIndex);
}

/*
==============
CM_EntityString
==============
*/

const char *__fastcall CM_EntityString()
{
  return ?CM_EntityString@@YAPEBDXZ();
}

/*
==============
CM_ClientAnchorCount
==============
*/
__int64 CM_ClientAnchorCount()
{
  return cm.mapEnts->clientEntAnchorCount;
}

/*
==============
CM_ClientAnchorName
==============
*/
const char *CM_ClientAnchorName(unsigned int anchorIndex)
{
  __int64 v1; 

  v1 = anchorIndex;
  if ( anchorIndex >= cm.mapEnts->clientEntAnchorCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6172, ASSERT_TYPE_ASSERT, "(unsigned)( anchorIndex ) < (unsigned)( cm.mapEnts->clientEntAnchorCount )", "anchorIndex doesn't index cm.mapEnts->clientEntAnchorCount\n\t%i not in [0, %i)", anchorIndex, cm.mapEnts->clientEntAnchorCount) )
    __debugbreak();
  return SL_ConvertToStringSafe(cm.mapEnts->clientEntAnchors[v1].name);
}

/*
==============
CM_EntityString
==============
*/
char *CM_EntityString()
{
  MapEnts *mapEnts; 

  mapEnts = cm.mapEnts;
  if ( !cm.mapEnts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6158, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  return mapEnts->entityString;
}

/*
==============
CM_FindAnchorIndexFromName
==============
*/
__int64 CM_FindAnchorIndexFromName(const char *anchorName)
{
  scr_string_t LowercaseString; 
  __int64 result; 
  unsigned int clientEntAnchorCount; 
  ClientEntAnchor *i; 

  if ( !anchorName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6182, ASSERT_TYPE_ASSERT, "(anchorName)", (const char *)&queryFormat, "anchorName") )
    __debugbreak();
  if ( !*anchorName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6183, ASSERT_TYPE_ASSERT, "(anchorName[0])", (const char *)&queryFormat, "anchorName[0]") )
    __debugbreak();
  LowercaseString = SL_FindLowercaseString(anchorName);
  if ( !LowercaseString )
    return 0xFFFFFFFFi64;
  result = 0i64;
  clientEntAnchorCount = cm.mapEnts->clientEntAnchorCount;
  if ( !clientEntAnchorCount )
    return 0xFFFFFFFFi64;
  for ( i = cm.mapEnts->clientEntAnchors; LowercaseString != i->name; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= clientEntAnchorCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
CM_GetAnchorEntNum
==============
*/
__int64 CM_GetAnchorEntNum(unsigned int anchorIndex)
{
  __int64 v1; 

  v1 = anchorIndex;
  if ( anchorIndex >= cm.mapEnts->clientEntAnchorCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6213, ASSERT_TYPE_ASSERT, "(unsigned)( anchorIndex ) < (unsigned)( cm.mapEnts->clientEntAnchorCount )", "anchorIndex doesn't index cm.mapEnts->clientEntAnchorCount\n\t%i not in [0, %i)", anchorIndex, cm.mapEnts->clientEntAnchorCount) )
    __debugbreak();
  return (unsigned int)cm.mapEnts->clientEntAnchors[v1].entNum;
}

/*
==============
CM_GetClientTriggerIndex
==============
*/
int CM_GetClientTriggerIndex(const char *triggerModelString)
{
  const char *v2; 
  const char *v3; 

  if ( !triggerModelString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6242, ASSERT_TYPE_ASSERT, "(triggerModelString)", (const char *)&queryFormat, "triggerModelString") )
    __debugbreak();
  if ( *triggerModelString != 63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6243, ASSERT_TYPE_ASSERT, "(triggerModelString[0] == '?')", (const char *)&queryFormat, "triggerModelString[0] == '?'") )
    __debugbreak();
  v2 = triggerModelString + 1;
  if ( triggerModelString[1] == 63 )
  {
    v3 = I_strstr(triggerModelString, "_");
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6248, ASSERT_TYPE_ASSERT, "(delimPos != nullptr)", (const char *)&queryFormat, "delimPos != nullptr") )
      __debugbreak();
    v2 = v3 + 1;
  }
  return atoi(v2);
}

/*
==============
CM_GetServerTriggerIndex
==============
*/
int CM_GetServerTriggerIndex(const char *triggerModelString)
{
  char *v2; 
  const char *v3; 
  __int64 v5; 
  char dest[16]; 

  if ( !triggerModelString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6220, ASSERT_TYPE_ASSERT, "(triggerModelString)", (const char *)&queryFormat, "triggerModelString") )
    __debugbreak();
  if ( *triggerModelString != 63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6221, ASSERT_TYPE_ASSERT, "(triggerModelString[0] == '?')", (const char *)&queryFormat, "triggerModelString[0] == '?'") )
    __debugbreak();
  v2 = (char *)(triggerModelString + 1);
  if ( triggerModelString[1] == 63 )
  {
    Core_strncpy(dest, 0x10ui64, triggerModelString + 2, 0x10ui64);
    v3 = I_strstr(dest, "_");
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6228, ASSERT_TYPE_ASSERT, "(delimPos != nullptr)", (const char *)&queryFormat, "delimPos != nullptr") )
      __debugbreak();
    if ( (unsigned int)v3 - (unsigned int)dest >= 0x10 )
    {
      LODWORD(v5) = (_DWORD)v3 - (unsigned int)dest;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6229, ASSERT_TYPE_ASSERT, "(unsigned)( delimPos - triggerModel ) < (unsigned)( sizeof( triggerModel ) )", "delimPos - triggerModel doesn't index sizeof( triggerModel )\n\t%i not in [0, %i)", v5, 16) )
        __debugbreak();
    }
    if ( (unsigned __int64)(v3 - dest) >= 0x10 )
    {
      j___report_rangecheckfailure(dest);
      JUMPOUT(0x14138D65Fi64);
    }
    *v3 = 0;
    v2 = dest;
  }
  return atoi(v2);
}

/*
==============
CM_RegisterAnchorEntity
==============
*/
void CM_RegisterAnchorEntity(unsigned int anchorIndex, int entNum)
{
  __int64 v2; 
  MapEnts *mapEnts; 
  ClientEntAnchor *clientEntAnchors; 
  int v6; 
  int v7; 
  unsigned int clientEntAnchorCount; 

  v2 = anchorIndex;
  mapEnts = cm.mapEnts;
  if ( (unsigned int)v2 >= cm.mapEnts->clientEntAnchorCount )
  {
    clientEntAnchorCount = cm.mapEnts->clientEntAnchorCount;
    v7 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6205, ASSERT_TYPE_ASSERT, "(unsigned)( anchorIndex ) < (unsigned)( cm.mapEnts->clientEntAnchorCount )", "anchorIndex doesn't index cm.mapEnts->clientEntAnchorCount\n\t%i not in [0, %i)", v7, clientEntAnchorCount) )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  clientEntAnchors = mapEnts->clientEntAnchors;
  v6 = clientEntAnchors[v2].entNum;
  if ( !v6 || v6 == entNum )
  {
    clientEntAnchors[v2].entNum = entNum;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_load_obj.cpp", 6206, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientEntAnchors[anchorIndex].entNum == 0 || cm.mapEnts->clientEntAnchors[anchorIndex].entNum == entNum)", (const char *)&queryFormat, "cm.mapEnts->clientEntAnchors[anchorIndex].entNum == 0 || cm.mapEnts->clientEntAnchors[anchorIndex].entNum == entNum") )
      __debugbreak();
    cm.mapEnts->clientEntAnchors[v2].entNum = entNum;
  }
}

