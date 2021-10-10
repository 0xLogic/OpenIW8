/*
==============
DevGui_DoesMenuExist
==============
*/

bool __fastcall DevGui_DoesMenuExist(const char *path)
{
  return ?DevGui_DoesMenuExist@@YA_NPEBD@Z(path);
}

/*
==============
DevGui_AddGraph
==============
*/

void __fastcall DevGui_AddGraph(const char *path, DevGraph *graph)
{
  ?DevGui_AddGraph@@YAXPEBDPEAUDevGraph@@@Z(path, graph);
}

/*
==============
DevGui_KeyPressed
==============
*/

void __fastcall DevGui_KeyPressed(int key, int repeats, int down)
{
  ?DevGui_KeyPressed@@YAXHHH@Z(key, repeats, down);
}

/*
==============
DevGui_AddCommand
==============
*/

void __fastcall DevGui_AddCommand(const char *path, const char *command)
{
  ?DevGui_AddCommand@@YAXPEBD0@Z(path, command);
}

/*
==============
DevGui_AddDvar
==============
*/

void __fastcall DevGui_AddDvar(const char *path, const dvar_t *dvar)
{
  ?DevGui_AddDvar@@YAXPEBDPEBUdvar_t@@@Z(path, dvar);
}

/*
==============
DevGui_Toggle
==============
*/

void __fastcall DevGui_Toggle()
{
  ?DevGui_Toggle@@YAXXZ();
}

/*
==============
DevGui_Reset
==============
*/

void DevGui_Reset(void)
{
  ?DevGui_Reset@@YAXXZ();
}

/*
==============
DevGui_Draw
==============
*/

void __fastcall DevGui_Draw(LocalClientNum_t localClientNum)
{
  ?DevGui_Draw@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DevGui_OpenMenu
==============
*/

void __fastcall DevGui_OpenMenu(const char *path)
{
  ?DevGui_OpenMenu@@YAXPEBD@Z(path);
}

/*
==============
DevGui_Resize
==============
*/

void DevGui_Resize(void)
{
  ?DevGui_Resize@@YAXXZ();
}

/*
==============
DevGui_IsActive
==============
*/

bool __fastcall DevGui_IsActive()
{
  return ?DevGui_IsActive@@YA_NXZ();
}

/*
==============
DevGui_RemoveMenu
==============
*/

void __fastcall DevGui_RemoveMenu(const char *path)
{
  ?DevGui_RemoveMenu@@YAXPEBD@Z(path);
}

/*
==============
DevGui_Init
==============
*/

void DevGui_Init(void)
{
  ?DevGui_Init@@YAXXZ();
}

/*
==============
DevGui_RegisterDvars
==============
*/

void DevGui_RegisterDvars(void)
{
  ?DevGui_RegisterDvars@@YAXXZ();
}

/*
==============
DevGui_Shutdown
==============
*/

void DevGui_Shutdown(void)
{
  ?DevGui_Shutdown@@YAXXZ();
}

/*
==============
DevGui_ShouldClipMouseCursor
==============
*/

bool __fastcall DevGui_ShouldClipMouseCursor()
{
  return ?DevGui_ShouldClipMouseCursor@@YA_NXZ();
}

/*
==============
DevGui_Update
==============
*/

void __fastcall DevGui_Update(LocalClientNum_t localClientNum, float deltaTime)
{
  ?DevGui_Update@@YAXW4LocalClientNum_t@@M@Z(localClientNum, deltaTime);
}

/*
==============
DevGui_ShouldShowMouseCursor
==============
*/

bool __fastcall DevGui_ShouldShowMouseCursor()
{
  return ?DevGui_ShouldShowMouseCursor@@YA_NXZ();
}

/*
==============
DevGui_InitGraphData
==============
*/

void __fastcall DevGui_InitGraphData(DevGraph *graph)
{
  ?DevGui_InitGraphData@@YAXPEAUDevGraph@@@Z(graph);
}

/*
==============
DevGui_Accept
==============
*/
void DevGui_Accept(LocalClientNum_t localClientNum)
{
  DevMenuItem *Menu; 
  unsigned __int8 childType; 
  DevMenuChild v4; 
  void (__fastcall *v5)(DevMenuChild, _QWORD, _QWORD); 
  const dvar_t *dvar; 
  const dvar_t *v7; 
  unsigned __int8 type; 
  bool v9; 

  devguiGlob.heldButtonHandle = 0;
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1952, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  childType = Menu->childType;
  if ( !childType )
  {
    devguiGlob.selectedMenu = Menu->child.menu;
    DevGui_AdvanceChildNum(Menu->childMenuMemory);
    return;
  }
  switch ( Menu->childType )
  {
    case 1u:
      if ( childType == 3 )
      {
        dvar = Menu->child.dvar;
      }
      else
      {
        if ( childType != 1 )
          return;
        v7 = Menu->child.dvar;
        dvar = v7;
        type = v7->type;
        if ( type == 9 || type == 8 && !v7->domain.enumeration.stringCount )
          return;
      }
      if ( !dvar || dvar->type )
      {
        v9 = !devguiGlob.editingMenuItem;
        if ( devguiGlob.editingMenuItem )
        {
          Dvar_MakeLatchedValueCurrent(dvar);
          Dvar_SetModified(Menu->child.dvar);
          v9 = !devguiGlob.editingMenuItem;
        }
        devguiGlob.editingMenuItem = v9;
        *(_QWORD *)&devguiGlob.selRow = 0i64;
      }
      else
      {
        Dvar_SetBoolFromSource(dvar, !dvar->latched.enabled, DVAR_SOURCE_DEVGUI);
      }
      break;
    case 2u:
      Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, Menu->child.command);
      break;
    case 3u:
      *(_QWORD *)&devguiGlob.selRow = 0i64;
      devguiGlob.editingMenuItem = !devguiGlob.editingMenuItem;
      v4.command = (const char *)Menu->child;
      if ( v4.command )
      {
        v5 = (void (__fastcall *)(DevMenuChild, _QWORD, _QWORD))*((_QWORD *)v4.command + 3);
        if ( v5 )
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v5)((DevMenuChild)v4.command, 0i64, (unsigned int)localClientNum);
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1996, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled case") )
        __debugbreak();
      break;
  }
}

/*
==============
DevGui_AddCommand
==============
*/
void DevGui_AddCommand(const char *path, const char *command)
{
  unsigned __int16 v4; 
  DevMenuItem *Menu; 
  unsigned __int8 childType; 

  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 526, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 527, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( DevGui_IsValidPath(path) )
  {
    v4 = DevGui_ConstructPath_r(0, path);
    Menu = DevGui_GetMenu(v4);
    if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 534, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
      __debugbreak();
    childType = Menu->childType;
    if ( !childType )
    {
      if ( Menu->child.menu )
        return;
LABEL_16:
      Menu->childType = 2;
      Menu->child.command = SL_AllocString_Copy(command);
      return;
    }
    if ( childType == 2 && Menu->child.command == command )
      goto LABEL_16;
  }
}

/*
==============
DevGui_AddDvar
==============
*/
void DevGui_AddDvar(const char *path, const dvar_t *dvar)
{
  unsigned __int16 v4; 
  DevMenuItem *Menu; 
  unsigned __int8 childType; 

  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 501, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 502, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( DevGui_IsValidPath(path) )
  {
    v4 = DevGui_ConstructPath_r(0, path);
    Menu = DevGui_GetMenu(v4);
    if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 509, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
      __debugbreak();
    childType = Menu->childType;
    if ( !childType )
    {
      if ( Menu->child.menu )
        return;
LABEL_16:
      Menu->childType = 1;
      Menu->child.command = (const char *)dvar;
      return;
    }
    if ( childType == 1 && Menu->child.dvar == dvar )
      goto LABEL_16;
  }
}

/*
==============
DevGui_AddGraph
==============
*/
void DevGui_AddGraph(const char *path, DevGraph *graph)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  DevMenuItem *Menu; 
  unsigned __int8 childType; 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 551, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 551, ASSERT_TYPE_ASSERT, "(graph->knots)", (const char *)&queryFormat, "graph->knots") )
    __debugbreak();
  if ( !graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 551, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
    __debugbreak();
  if ( !graph->knotCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 551, ASSERT_TYPE_ASSERT, "(graph->knotCountMax > 0)", (const char *)&queryFormat, "graph->knotCountMax > 0") )
    __debugbreak();
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 552, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  v4 = *graph->knotCount;
  if ( (v4 < 2u || v4 > graph->knotCountMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 554, ASSERT_TYPE_ASSERT, "(*graph->knotCount >= 2 && *graph->knotCount <= graph->knotCountMax)", (const char *)&queryFormat, "*graph->knotCount >= 2 && *graph->knotCount <= graph->knotCountMax") )
    __debugbreak();
  if ( DevGui_IsValidPath(path) )
  {
    v5 = DevGui_ConstructPath_r(0, path);
    Menu = DevGui_GetMenu(v5);
    if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 561, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
      __debugbreak();
    childType = Menu->childType;
    if ( !childType )
    {
      if ( Menu->child.menu )
        return;
LABEL_29:
      Menu->childType = 3;
      Menu->child.command = (const char *)graph;
      return;
    }
    if ( childType == 3 && Menu->child.graph == graph )
      goto LABEL_29;
  }
}

/*
==============
DevGui_AddGraphKnot
==============
*/
void DevGui_AddGraphKnot(DevGraph *graph, LocalClientNum_t localClientNum)
{
  unsigned __int16 v4; 
  vec2_t *knots; 
  __int64 v6; 
  vec2_t *selectedKnot; 
  float v8; 
  float v9; 
  int v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  void (__fastcall *eventCallback)(const DevGraph *, DevEventType, LocalClientNum_t); 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2356, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2356, ASSERT_TYPE_ASSERT, "(graph->knots)", (const char *)&queryFormat, "graph->knots") )
    __debugbreak();
  if ( !graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2356, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
    __debugbreak();
  if ( !graph->knotCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2356, ASSERT_TYPE_ASSERT, "(graph->knotCountMax > 0)", (const char *)&queryFormat, "graph->knotCountMax > 0") )
    __debugbreak();
  if ( graph->selectedKnot < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2357, ASSERT_TYPE_ASSERT, "(graph->selectedKnot >= 0)", (const char *)&queryFormat, "graph->selectedKnot >= 0") )
    __debugbreak();
  if ( graph->selectedKnot >= *graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2358, ASSERT_TYPE_ASSERT, "(graph->selectedKnot < *graph->knotCount)", (const char *)&queryFormat, "graph->selectedKnot < *graph->knotCount") )
    __debugbreak();
  v4 = *graph->knotCount;
  if ( v4 == graph->knotCountMax )
  {
    Com_Printf(11, "^3Maximum number of knots have reached for this graph\n");
  }
  else
  {
    knots = graph->knots;
    v6 = v4;
    selectedKnot = (vec2_t *)graph->selectedKnot;
    if ( (int)selectedKnot + 1 >= (int)v6 )
    {
      v12 = (float)(knots[(_QWORD)selectedKnot - 1].v[0] + knots[(_QWORD)selectedKnot].v[0]) * 0.5;
      v13 = (float)(knots[(_QWORD)selectedKnot - 1].v[1] + knots[(_QWORD)selectedKnot].v[1]) * 0.5;
      knots[v6].v[0] = knots[v6 - 1].v[0];
      knots[v6].v[1] = knots[v6 - 1].v[1];
      graph->knots[v6 - 1].v[0] = v12;
      graph->knots[v6 - 1].v[1] = v13;
    }
    else
    {
      v8 = (float)(knots[(_QWORD)selectedKnot + 1].v[0] + knots[(_QWORD)selectedKnot].v[0]) * 0.5;
      v9 = (float)(knots[(_QWORD)selectedKnot + 1].v[1] + knots[(_QWORD)selectedKnot].v[1]) * 0.5;
      v10 = v6 - 1;
      if ( (int)v6 - 1 >= (int)selectedKnot )
      {
        v11 = 8i64 * (int)v6 - 8;
        do
        {
          selectedKnot = graph->knots;
          v11 -= 8i64;
          --v10;
          *(float *)((char *)selectedKnot[2].v + v11) = *(float *)((char *)graph->knots[1].v + v11);
          *(float *)((char *)&selectedKnot[2].v[1] + v11) = *(float *)((char *)&selectedKnot[1].v[1] + v11);
          LODWORD(selectedKnot) = graph->selectedKnot;
        }
        while ( v10 >= (int)selectedKnot );
        knots = graph->knots;
      }
      knots[(int)selectedKnot + 1].v[0] = v8;
      graph->knots[++graph->selectedKnot].v[1] = v9;
    }
    ++*graph->knotCount;
    eventCallback = graph->eventCallback;
    if ( eventCallback )
      eventCallback(graph, EVENT_UPDATE, localClientNum);
  }
}

/*
==============
DevGui_AdvanceChildNum
==============
*/
void DevGui_AdvanceChildNum(int numberToAdvance)
{
  int i; 
  unsigned __int16 selectedMenu; 
  unsigned __int16 nextSibling; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( numberToAdvance )
  {
    for ( i = 0; i != numberToAdvance; ++i )
    {
      selectedMenu = devguiGlob.selectedMenu;
      if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
      {
        LODWORD(v7) = 8000;
        LODWORD(v6) = 1;
        LODWORD(v5) = devguiGlob.selectedMenu;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v5, v6, v7) )
          __debugbreak();
      }
      nextSibling = devguiGlob.menus[selectedMenu - 1].nextSibling;
      if ( !nextSibling )
        break;
      devguiGlob.selectedMenu = devguiGlob.menus[selectedMenu - 1].nextSibling;
      if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
      {
        LODWORD(v7) = 8000;
        LODWORD(v6) = 1;
        LODWORD(v5) = nextSibling;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v5, v6, v7) )
          __debugbreak();
      }
    }
  }
}

/*
==============
DevGui_ChooseOrigin
==============
*/
void DevGui_ChooseOrigin(int *origin)
{
  int *v1; 
  int v2; 
  unsigned __int16 selectedMenu; 
  unsigned __int16 parent; 
  int v5; 
  unsigned __int16 i; 
  DevMenuItem *v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v1 = origin;
  v2 = 0;
  selectedMenu = devguiGlob.selectedMenu;
  parent = DevGui_GetMenu(devguiGlob.selectedMenu)->parent;
  if ( parent )
  {
    do
    {
      if ( (unsigned __int16)(parent - 1) > 0x1F3Fu )
      {
        LODWORD(v11) = 8000;
        LODWORD(v10) = 1;
        LODWORD(v9) = parent;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v9, v10, v11) )
          __debugbreak();
      }
      if ( &devguiGlob.menus[parent] == (DevMenuItem *)72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1034, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
        __debugbreak();
      v5 = DevGui_MaxChildMenuWidth(&devguiGlob.menus[parent - 1]);
      selectedMenu = parent;
      parent = devguiGlob.menus[parent - 1].parent;
      v2 += v5;
    }
    while ( parent );
    v1 = origin;
  }
  for ( i = devguiGlob.topmostMenu.child.menu; i != selectedMenu; v2 += v8 )
  {
    if ( (unsigned __int16)(i - 1) > 0x1F3Fu )
    {
      LODWORD(v11) = 8000;
      LODWORD(v10) = 1;
      LODWORD(v9) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v9, v10, v11) )
        __debugbreak();
    }
    v7 = &devguiGlob.menus[i - 1];
    v8 = DevGui_MenuItemWidth(v7);
    i = v7->nextSibling;
  }
  *v1 = devguiGlob.left;
  v1[1] = devguiGlob.top;
  if ( v2 > devguiGlob.right - devguiGlob.left )
    *v1 += devguiGlob.right - devguiGlob.left - v2;
}

/*
==============
DevGui_CompareMenus
==============
*/
int DevGui_CompareMenus(const DevMenuItem *menu0, const DevMenuItem *menu1)
{
  int result; 

  if ( !menu0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 233, ASSERT_TYPE_ASSERT, "(menu0)", (const char *)&queryFormat, "menu0") )
    __debugbreak();
  if ( !menu1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 234, ASSERT_TYPE_ASSERT, "(menu1)", (const char *)&queryFormat, "menu1") )
    __debugbreak();
  result = menu0->sortKey - menu1->sortKey;
  if ( !result )
    return I_stricmp(menu0->label, menu1->label);
  return result;
}

/*
==============
DevGui_ConstructPath_r
==============
*/
unsigned __int16 DevGui_ConstructPath_r(unsigned __int16 parent, const char *path)
{
  DevGuiTokenResult v3; 
  unsigned __int16 result; 
  __int16 sortKeyOut; 
  char *pathInOut; 
  char label[56]; 

  pathInOut = (char *)path;
  do
  {
    v3 = DevGui_PathToken((const char **)&pathInOut, label, &sortKeyOut);
    if ( v3 == DEVGUI_TOKEN_ERROR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 451, ASSERT_TYPE_ASSERT, "(tokResult != DEVGUI_TOKEN_ERROR)", (const char *)&queryFormat, "tokResult != DEVGUI_TOKEN_ERROR") )
      __debugbreak();
    result = DevGui_FindMenu(parent, label);
    if ( !result )
      result = DevGui_CreateMenu(parent, label, sortKeyOut);
    parent = result;
  }
  while ( v3 != DEVGUI_TOKEN_LAST );
  return result;
}

/*
==============
DevGui_CreateMenu
==============
*/
__int64 DevGui_CreateMenu(unsigned __int16 parentHandle, const char *label, __int16 sortKey)
{
  DevMenuItem *nextFreeMenu; 
  unsigned __int16 v7; 
  signed __int64 v8; 
  char v9; 
  unsigned __int16 v10; 
  DevMenuItem *Menu; 
  unsigned __int16 nextSibling; 
  DevMenuChild *i; 
  DevMenuItem *v14; 
  unsigned __int16 v15; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  nextFreeMenu = devguiGlob.nextFreeMenu;
  if ( !devguiGlob.nextFreeMenu )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144323C50, 41i64, 8000i64);
  devguiGlob.nextFreeMenu = *(DevMenuItem **)nextFreeMenu->label;
  v7 = ((char *)nextFreeMenu - (char *)&devguiGlob) / 72 + 1;
  if ( (unsigned __int16)(((char *)nextFreeMenu - (char *)&devguiGlob) / 72) > 0x1F3Fu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 195, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v7, 1, 8000) )
    __debugbreak();
  v8 = (char *)nextFreeMenu - label;
  do
  {
    v9 = *label;
    label[v8] = *label;
    ++label;
  }
  while ( v9 );
  nextFreeMenu->sortKey = sortKey;
  v10 = 0;
  *(_WORD *)&nextFreeMenu->childType = 0;
  nextFreeMenu->parent = parentHandle;
  nextFreeMenu->child.menu = 0;
  if ( parentHandle )
    Menu = DevGui_GetMenu(parentHandle);
  else
    Menu = &devguiGlob.topmostMenu;
  nextSibling = Menu->child.menu;
  for ( i = &Menu->child; nextSibling; nextSibling = v14->nextSibling )
  {
    if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
    {
      LODWORD(v19) = 8000;
      LODWORD(v18) = 1;
      LODWORD(v17) = nextSibling;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v17, v18, v19) )
        __debugbreak();
    }
    v14 = &devguiGlob.menus[nextSibling - 1];
    if ( !DevGui_CompareMenus(v14, nextFreeMenu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 309, ASSERT_TYPE_ASSERT, "(DevGui_CompareMenus( nextMenu, menu ) != 0)", (const char *)&queryFormat, "DevGui_CompareMenus( nextMenu, menu ) != 0") )
      __debugbreak();
    if ( DevGui_CompareMenus(v14, nextFreeMenu) > 0 )
      break;
    v10 = i->menu;
    i = (DevMenuChild *)&v14->nextSibling;
  }
  nextFreeMenu->nextSibling = i->menu;
  nextFreeMenu->prevSibling = v10;
  i->menu = v7;
  v15 = nextFreeMenu->nextSibling;
  if ( v15 )
    DevGui_GetMenu(v15)->prevSibling = v7;
  return v7;
}

/*
==============
DevGui_DVarEnumValueWidth
==============
*/
__int64 DevGui_DVarEnumValueWidth(const dvar_t *dvar)
{
  GfxFont *consoleFont; 
  const char *v3; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 771, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  consoleFont = cls.consoleFont;
  v3 = Dvar_DisplayableLatchedValue(dvar);
  LODWORD(consoleFont) = R_TextWidth(v3, 0, consoleFont);
  return (unsigned int)((_DWORD)consoleFont + R_TextWidth("  ", 0, cls.consoleFont));
}

/*
==============
DevGui_DoesMenuExist
==============
*/
char DevGui_DoesMenuExist(const char *path)
{
  unsigned __int16 Menu; 
  DevGuiTokenResult v3; 
  __int16 sortKeyOut; 
  char *pathInOut; 
  char label[56]; 

  pathInOut = (char *)path;
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 580, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  if ( DevGui_IsValidPath(path) )
  {
    Menu = 0;
    while ( 1 )
    {
      v3 = DevGui_PathToken((const char **)&pathInOut, label, &sortKeyOut);
      if ( v3 == DEVGUI_TOKEN_ERROR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 590, ASSERT_TYPE_ASSERT, "(tokResult != DEVGUI_TOKEN_ERROR)", (const char *)&queryFormat, "tokResult != DEVGUI_TOKEN_ERROR") )
        __debugbreak();
      Menu = DevGui_FindMenu(Menu, label);
      if ( !Menu )
        break;
      if ( v3 == DEVGUI_TOKEN_LAST )
        return 1;
    }
  }
  return 0;
}

/*
==============
DevGui_Draw
==============
*/
void DevGui_Draw(LocalClientNum_t localClientNum)
{
  DevMenuItem *Menu; 
  const DevMenuItem *v3; 
  unsigned __int8 childType; 
  unsigned __int8 v5; 
  unsigned __int16 parent; 
  int FontWidth; 
  int FontHeight; 
  int v9; 
  int color; 
  int v11; 
  int origin; 
  int top; 

  if ( devguiGlob.isActive )
  {
    if ( !Dvar_GetBoolSafe("MSTMNTRNOS") )
    {
      Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
      v3 = Menu;
      if ( devguiGlob.editingMenuItem )
      {
        childType = Menu->childType;
        if ( ((childType - 1) & 0xFD) != 0 )
        {
          v9 = childType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1688, ASSERT_TYPE_ASSERT, "( ( menuItem->childType == DEV_CHILD_GRAPH || menuItem->childType == DEV_CHILD_DVAR ) )", "( menuItem->childType ) = %i", v9) )
            __debugbreak();
        }
        if ( v3->childType == 1 )
        {
          DevGui_DrawMenuDescription(v3, 1);
          DevGui_DrawSliders(v3);
        }
        else
        {
          DevGui_DrawGraph(v3, localClientNum);
        }
        v5 = 85;
      }
      else
      {
        origin = devguiGlob.left;
        top = devguiGlob.top;
        if ( Menu->childType == 1 )
          DevGui_DrawMenuDescription(Menu, 0);
        parent = DevGui_GetMenu(devguiGlob.selectedMenu)->parent;
        DevGui_ChooseOrigin(&origin);
        DevGui_DrawMenu(parent, devguiGlob.selectedMenu, &origin);
        v5 = 21;
      }
      GpuTimerPage::SetOpacity(v5);
      if ( devguiGlob.bindNextKey )
      {
        color = -1442840576;
        DevGui_DrawBox(devguiGlob.left, devguiGlob.top, devguiGlob.right - devguiGlob.left, devguiGlob.bottom - devguiGlob.top, (const unsigned __int8 *)&color);
        FontWidth = DevGui_GetFontWidth("Press key to bind (ESC to cancel)...");
        FontHeight = DevGui_GetFontHeight();
        v11 = -1;
        DevGui_DrawFont((devguiGlob.left + devguiGlob.right - FontWidth) / 2, (devguiGlob.top + devguiGlob.bottom - FontHeight) / 2, (const unsigned __int8 *)&v11, "Press key to bind (ESC to cancel)...");
      }
    }
  }
  else
  {
    GpuTimerPage::SetOpacity(0x55u);
  }
}

/*
==============
DevGui_DrawFloat3ColorSliders
==============
*/
void DevGui_DrawFloat3ColorSliders(int *x, int *y, const dvar_t *dvar, int rowWidth, int rowHeight)
{
  float min; 
  float max; 
  float v11; 
  DvarValue *p_latched; 
  float v13; 
  float v14; 
  float v15; 
  int v18; 
  unsigned __int8 v19; 
  int v21; 
  unsigned __int8 v22; 
  int v24; 
  unsigned __int8 v25; 
  int v26; 
  int v27; 
  float v28; 
  float v29; 
  const dvar_t *v30; 
  int v31; 
  const char **v32; 
  vec3_t *p_hsv; 
  const dvar_t *v34; 
  __int64 row; 
  __int64 v36; 
  unsigned __int8 color[4]; 
  int v38; 
  int rowWidtha; 
  int v40; 
  vec3_t hsv; 
  float v42; 

  min = dvar->domain.value.min;
  if ( min != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1276, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", min) )
    __debugbreak();
  max = dvar->domain.value.max;
  if ( max <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1277, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", max) )
    __debugbreak();
  v11 = 1.0 / dvar->domain.value.max;
  p_latched = &dvar->latched;
  v13 = v11 * dvar->latched.value;
  v14 = v11 * dvar->latched.vector.v[1];
  v15 = v11 * dvar->latched.vector.v[2];
  v42 = v11 * dvar->latched.vector.v[3];
  hsv.v[0] = v13;
  _XMM6 = 0i64;
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  v18 = (int)*(float *)&_XMM2;
  color[3] = -1;
  if ( (int)*(float *)&_XMM2 > 255 )
    v18 = 255;
  v19 = v18;
  v40 = 0;
  if ( v18 < 0 )
    v19 = 0;
  color[0] = v19;
  __asm { vroundss xmm0, xmm6, xmm2, 1 }
  v21 = (int)*(float *)&_XMM0;
  if ( (int)*(float *)&_XMM0 > 255 )
    v21 = 255;
  v22 = v21;
  if ( v21 < 0 )
    v22 = 0;
  color[1] = v22;
  __asm { vroundss xmm0, xmm6, xmm2, 1 }
  v24 = (int)*(float *)&_XMM0;
  hsv.v[1] = v14;
  if ( (int)*(float *)&_XMM0 > 255 )
    v24 = 255;
  v25 = v24;
  hsv.v[2] = v15;
  if ( v24 < 0 )
    v25 = 0;
  color[2] = v25;
  *y += rowHeight + 2;
  DevGui_DrawBox(*x, *y, rowWidth, rowHeight, color);
  v26 = 0;
  v38 = 2 * DevGui_GetFontWidth(labels[0]);
  rowWidtha = rowWidth - v38;
  v27 = rowWidth - v38;
  *(_QWORD *)hsv.v = labels;
  do
  {
    *y += rowHeight + 2;
    v28 = dvar->domain.value.min;
    if ( v28 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1292, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", v28) )
      __debugbreak();
    v29 = dvar->domain.value.max;
    if ( v29 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1293, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", v29) )
      __debugbreak();
    if ( (unsigned int)v26 >= 4 )
    {
      LODWORD(v36) = 4;
      LODWORD(row) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", row, v36) )
        __debugbreak();
    }
    v30 = devgui_colorTextSel;
    if ( v26 != devguiGlob.selRow )
      v30 = devgui_colorTextGray;
    DevGui_DrawSingleSlider(*x + v38, *y, v27, rowHeight, p_latched->value / dvar->domain.value.max, v26);
    DevGui_DrawFont(*x, *y, (const unsigned __int8 *)&v30->current, **(const char ***)hsv.v);
    *(_QWORD *)hsv.v += 8i64;
    p_latched = (DvarValue *)((char *)p_latched + 4);
    ++v26;
  }
  while ( v26 < 3 );
  v31 = v40;
  v32 = &labels[3];
  p_hsv = &hsv;
  do
  {
    DevGui_Vec3ToHSV((const vec3_t *)&dvar->latched, &hsv, dvar->domain.value.max);
    *y += rowHeight + 2;
    if ( (unsigned int)v31 >= 3 )
    {
      LODWORD(v36) = 3;
      LODWORD(row) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", row, v36) )
        __debugbreak();
    }
    v34 = devgui_colorTextSel;
    if ( v31 + 3 != devguiGlob.selRow )
      v34 = devgui_colorTextGray;
    DevGui_DrawSingleSlider(*x + v38, *y, rowWidtha, rowHeight, p_hsv->v[0], v31 + 3);
    DevGui_DrawFont(*x, *y, (const unsigned __int8 *)&v34->current, *v32);
    p_hsv = (vec3_t *)((char *)p_hsv + 4);
    ++v32;
    ++v31;
  }
  while ( v31 < 3 );
}

/*
==============
DevGui_DrawGraph
==============
*/
void DevGui_DrawGraph(const DevMenuItem *menu, LocalClientNum_t localClientNum)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  unsigned __int8 childType; 
  DevMenuChild v8; 
  int width; 
  int FontHeight; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  const dvar_t *v23; 
  int v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  int v34; 
  void (__fastcall *v35)(DevMenuChild, __int64, __int64, char *, int); 
  void (__fastcall *v36)(DevMenuChild, __int64, _QWORD); 
  int v37; 
  vec2_t end; 
  vec2_t start; 
  char _Buffer[256]; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 

  childType = menu->childType;
  if ( childType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1582, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_GRAPH)", "%s\n\tmenu %s type %i", "menu->childType == DEV_CHILD_GRAPH", menu->label, childType) )
    __debugbreak();
  v8.command = (const char *)menu->child;
  if ( !v8.command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1585, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !*(_QWORD *)v8.command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1585, ASSERT_TYPE_ASSERT, "(graph->knots)", (const char *)&queryFormat, "graph->knots") )
    __debugbreak();
  if ( !*((_QWORD *)v8.command + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1585, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
    __debugbreak();
  if ( !*((_WORD *)v8.command + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1585, ASSERT_TYPE_ASSERT, "(graph->knotCountMax > 0)", (const char *)&queryFormat, "graph->knotCountMax > 0") )
    __debugbreak();
  width = devguiGlob.slider.width;
  v45 = v2;
  v44 = v3;
  FontHeight = DevGui_GetFontHeight();
  v11 = width + 8;
  v12 = 3 * FontHeight + 16;
  v13 = devguiGlob.bottom - v12;
  v14 = devguiGlob.left + (devguiGlob.right - devguiGlob.left - v11) / 2;
  DevGui_DrawBevelBox(v14, devguiGlob.bottom - v12, v11, v12, devgui_bevelShade->current.value, (const unsigned __int8 *)&devgui_colorBgnd->current);
  v15 = (int)(float)((float)v13 * 0.94999999);
  DevGui_DrawBox(v14, v15, v11, 2, (const unsigned __int8 *)&devgui_colorBgndSel->current);
  v16 = v14 + 4;
  v37 = v13 + 6;
  DevGui_DrawSliderPath(v16, v13 + 6);
  v19 = 0;
  v20 = 0;
  LOWORD(v21) = **((_WORD **)v8.command + 1);
  if ( (_WORD)v21 )
  {
    v22 = 0i64;
    do
    {
      if ( v20 == *((_DWORD *)v8.command + 5) )
      {
        if ( devguiGlob.editingKnot )
        {
          v23 = devgui_colorGraphKnotEditing;
          v24 = 19;
        }
        else
        {
          v23 = devgui_colorGraphKnotSelected;
          v24 = 16;
        }
      }
      else
      {
        v23 = devgui_colorGraphKnotNormal;
        v24 = 12;
      }
      DevGui_DrawBoxCentered(v16 + (int)(float)((float)v11 * *(float *)(v22 + *(_QWORD *)v8.command)), v15 - (int)(float)((float)(v15 - 48) * *(float *)(v22 + *(_QWORD *)v8.command + 4)), v24, v24, (const unsigned __int8 *)&v23->current);
      ++v20;
      v22 += 8i64;
      v21 = **((unsigned __int16 **)v8.command + 1);
    }
    while ( v20 < v21 );
  }
  if ( (unsigned __int16)v21 - 1 > 0 )
  {
    v43 = v4;
    v42 = v5;
    v25 = 0i64;
    v26 = (float)v11;
    v27 = (float)v16;
    v28 = (float)v15;
    v29 = (float)(v15 - 48);
    do
    {
      v30 = (float)(v26 * *(float *)(v25 + *(_QWORD *)v8.command)) + v27;
      v31 = v28 - (float)(v29 * *(float *)(v25 + *(_QWORD *)v8.command + 4));
      v25 += 8i64;
      v32 = *(float *)(v25 + *(_QWORD *)v8.command);
      v33 = *(float *)(v25 + *(_QWORD *)v8.command + 4);
      start.v[0] = v30;
      start.v[1] = v31;
      end.v[1] = v28 - (float)(v29 * v33);
      end.v[0] = (float)(v26 * v32) + v27;
      DevGui_DrawLine(&start, &end, 2, (const unsigned __int8 *)&devgui_colorGraphKnotNormal->current);
      ++v19;
    }
    while ( v19 < **((unsigned __int16 **)v8.command + 1) - 1 );
  }
  v34 = v37 + FontHeight + 2;
  v35 = (void (__fastcall *)(DevMenuChild, __int64, __int64, char *, int))*((_QWORD *)v8.command + 4);
  if ( v35 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v35)((DevMenuChild)v8.command, v17, v18, _Buffer, 256);
  else
    j_sprintf(_Buffer, "X: %.4f, Y: %.4f", *(float *)(*(_QWORD *)v8.command + 8i64 * *((int *)v8.command + 5)), *(float *)(*(_QWORD *)v8.command + 8i64 * *((int *)v8.command + 5) + 4));
  DevGui_DrawFont(v16, v34, (const unsigned __int8 *)&devgui_colorText->current, _Buffer);
  DevGui_DrawFont(v16, v34 + FontHeight + 2, (const unsigned __int8 *)&devgui_colorText->current, MYINSTRUCTIONS);
  v36 = (void (__fastcall *)(DevMenuChild, __int64, _QWORD))*((_QWORD *)v8.command + 3);
  if ( v36 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v36)((DevMenuChild)v8.command, 4i64, (unsigned int)localClientNum);
}

/*
==============
DevGui_DrawMenu
==============
*/
void DevGui_DrawMenu(unsigned __int16 menuHandle, unsigned __int16 activeChild, int *origin)
{
  const DevMenuItem *v5; 
  unsigned __int16 parent; 
  int v7; 
  int v8; 
  int v9; 
  unsigned __int16 nextSibling; 
  int v11; 
  DevMenuItem *v12; 
  int v13; 
  unsigned __int8 *color; 
  __int64 v15; 
  __int64 v16; 
  DevMenuItem *Menu; 
  unsigned __int8 outBoxColor[4]; 
  unsigned __int8 outTextColor[4]; 

  if ( !origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1007, ASSERT_TYPE_ASSERT, "(origin)", (const char *)&queryFormat, "origin") )
    __debugbreak();
  Menu = DevGui_GetMenu(menuHandle);
  v5 = Menu;
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1010, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  parent = Menu->parent;
  if ( parent )
  {
    DevGui_DrawMenu(parent, menuHandle, origin);
  }
  else
  {
    v7 = origin[1];
    v8 = *origin;
    v9 = R_TextHeight(cls.consoleFont);
    nextSibling = devguiGlob.topmostMenu.child.menu;
    v11 = v9;
    if ( devguiGlob.topmostMenu.child.menu )
    {
      do
      {
        if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
        {
          LODWORD(v16) = 8000;
          LODWORD(v15) = 1;
          LODWORD(color) = nextSibling;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v15, v16) )
            __debugbreak();
        }
        v12 = &devguiGlob.menus[nextSibling - 1];
        v13 = DevGui_MenuItemWidth(v12);
        if ( nextSibling == menuHandle )
        {
          *origin = v8;
          origin[1] = v11 + v7 + 8;
        }
        DevGui_GetButtonColor((unsigned __int8 (*)[4])outBoxColor, (unsigned __int8 (*)[4])outTextColor, nextSibling, nextSibling == menuHandle);
        DevGui_DrawBevelBox(v8, v7, v13, v11 + 8, devgui_bevelShade->current.value, outBoxColor);
        DevGui_DrawFont(v8 + 4, v7 + 4, outTextColor, v12->label);
        nextSibling = v12->nextSibling;
        v8 += v13;
      }
      while ( nextSibling );
      v5 = Menu;
    }
  }
  DevGui_DrawMenuVertically(v5, activeChild, origin);
}

/*
==============
DevGui_DrawMenuDescription
==============
*/
void DevGui_DrawMenuDescription(const DevMenuItem *menu, bool slider)
{
  __int128 v2; 
  unsigned __int8 childType; 
  const dvar_t *dvar; 
  int FontHeight; 
  int left; 
  int v9; 
  const char *description; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  const char *UnobfuscatedName; 
  BOOL v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  const char *v23; 
  int v24; 
  int outLineCount[4]; 
  DvarValue current; 
  char text[64]; 
  char dest[128]; 
  char outBuffer[1024]; 
  __int128 v30; 

  childType = menu->childType;
  if ( childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1511, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", "%s\n\tmenu %s type %i", "menu->childType == DEV_CHILD_DVAR", menu->label, childType) )
    __debugbreak();
  dvar = menu->child.dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1513, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( menu->label ) = %s", menu->label) )
    __debugbreak();
  FontHeight = DevGui_GetFontHeight();
  left = devguiGlob.left;
  v9 = 0;
  description = dvar->description;
  v11 = FontHeight + 2;
  v12 = (devguiGlob.right - devguiGlob.left) / 2;
  if ( *description )
  {
    v30 = v2;
    do
    {
      description = R_TextLineWrapPosition(description, 256, v12 - 16, cls.consoleFont, 1.0);
      if ( isspace(*description) )
      {
        do
        {
          if ( *description == 10 )
            break;
          v13 = *++description;
        }
        while ( isspace(v13) );
      }
      ++v9;
    }
    while ( *description );
    left = devguiGlob.left;
  }
  v14 = v11 * (v9 + 1) + 18;
  v15 = devguiGlob.bottom - 75 * slider - v14 - 25;
  DevGui_DrawBevelBox(left, v15, v12, v14, devgui_bevelShade->current.value, (const unsigned __int8 *)&devgui_colorBgnd->current);
  UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
  DevGui_DrawFont(left + 8, v15 + 8, (const unsigned __int8 *)&devgui_colorTextSel->current, UnobfuscatedName);
  DevGui_WrapDescription(dvar->description, v12 - 16, left + 8, v15 + v11 + 10, v11, 1);
  Dvar_DomainToString_GetLines(dvar, outBuffer, 0x400ui64, outLineCount);
  ++outLineCount[0];
  v17 = Dvar_FlagsToString(dvar, text, 0x40ui64);
  v18 = DevGui_GetFontHeight() + 2;
  v19 = devguiGlob.right - (devguiGlob.right - devguiGlob.left) / 3;
  v20 = v18 * (v17 + outLineCount[0] + 1) + 16;
  v21 = devguiGlob.bottom - v20;
  DevGui_DrawBevelBox(v19 - 30, devguiGlob.bottom - v20 - 25, (devguiGlob.right - devguiGlob.left) / 3, v20, devgui_bevelShade->current.value, (const unsigned __int8 *)&devgui_colorBgnd->current);
  v22 = v19 - 22;
  v21 -= 17;
  current = dvar->current;
  v23 = Dvar_ValueToString(dvar, &current);
  Com_sprintf(dest, 0x80ui64, "value = %s", v23);
  DevGui_DrawFont(v22, v21, (const unsigned __int8 *)&devgui_colorTextSel->current, dest);
  v24 = v18 + v21;
  if ( v17 )
  {
    DevGui_DrawFont(v22, v24, (const unsigned __int8 *)&devgui_colorText->current, text);
    v24 += v18;
  }
  DevGui_DrawFont(v22, v24, (const unsigned __int8 *)&devgui_colorText->current, outBuffer);
}

/*
==============
DevGui_DrawMenuVertically
==============
*/
void DevGui_DrawMenuVertically(const DevMenuItem *menu, unsigned __int16 activeChild, int *origin)
{
  unsigned __int16 v4; 
  const DevMenuItem *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned __int16 nextSibling; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned __int16 v19; 
  DevMenuItem *v20; 
  bool v21; 
  DevMenuChild v22; 
  char v23; 
  const dvar_t *v24; 
  int *p_integer; 
  const dvar_t *v26; 
  bool v27; 
  float value; 
  unsigned __int8 childType; 
  char *v30; 
  int v31; 
  const dvar_t *dvar; 
  unsigned __int8 type; 
  int v34; 
  const char *v35; 
  int v36; 
  const char *v37; 
  int v38; 
  const char *v39; 
  unsigned __int8 *color; 
  __int64 v41; 
  __int64 v42; 
  int w; 
  int x; 
  unsigned __int8 v45[4]; 
  int h; 
  int v47; 
  int v48; 
  int v50; 
  int integer; 

  v4 = activeChild;
  v5 = menu;
  if ( !menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 872, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  v6 = *origin;
  v7 = origin[1];
  x = *origin;
  v47 = v7;
  w = DevGui_MaxChildMenuWidth(v5);
  h = R_TextHeight(cls.consoleFont) + 8;
  v8 = R_TextWidth(">", 0, cls.consoleFont);
  v9 = R_TextWidth("  ", 0, cls.consoleFont);
  v10 = 0;
  v11 = w - v8;
  v12 = 0;
  nextSibling = v5->child.menu;
  v14 = 0;
  v48 = v6 + v11 - v9 - 4;
  if ( nextSibling )
  {
    do
    {
      if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
      {
        LODWORD(v42) = 8000;
        LODWORD(v41) = 1;
        LODWORD(color) = nextSibling;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v41, v42) )
          __debugbreak();
      }
      v15 = v12;
      if ( nextSibling != v4 )
        v15 = v14;
      ++v12;
      v14 = v15;
      nextSibling = devguiGlob.menus[nextSibling - 1].nextSibling;
    }
    while ( nextSibling );
    v5 = menu;
    v10 = 0;
    v7 = v47;
    v6 = x;
  }
  v16 = h;
  v17 = (devguiGlob.bottom - h - v7) / h;
  v18 = 0;
  v50 = 0;
  if ( v17 < 1 )
    v17 = 1;
  v47 = v17;
  if ( v12 > 2 && v17 < v12 && v14 >= v17 )
  {
    *(_DWORD *)v45 = devgui_colorBgnd->current.integer;
    integer = devgui_colorText->current.integer;
    DevGui_DrawBevelBox(v6, v7, w, h, devgui_bevelShade->current.value, v45);
    DevGui_DrawFont(v6 + 4, v7 + 4, (const unsigned __int8 *)&integer, "...");
    v7 += v16;
    v18 = 1;
    v50 = 1;
  }
  v19 = v5->child.menu;
  if ( v19 )
  {
    while ( 1 )
    {
      if ( (unsigned __int16)(v19 - 1) > 0x1F3Fu )
      {
        LODWORD(v42) = 8000;
        LODWORD(v41) = 1;
        LODWORD(color) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v41, v42) )
          __debugbreak();
        v18 = v50;
      }
      v20 = &devguiGlob.menus[v19 - 1];
      if ( v18 && v10 < v14 && v14 + v18 - v47 >= v10 )
        goto LABEL_73;
      if ( (unsigned __int16)(v19 - 1) > 0x1F3Fu )
      {
        LODWORD(v42) = 8000;
        LODWORD(v41) = 1;
        LODWORD(color) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v41, v42) )
          __debugbreak();
      }
      if ( devguiGlob.menus[v19 - 1].childType == 1 )
      {
        v22.command = (const char *)devguiGlob.menus[v19 - 1].child;
        v23 = *((_BYTE *)v22.command + 29);
        v21 = v23 == 9 || v23 == 8 && !*((_DWORD *)v22.command + 22);
      }
      else
      {
        v21 = 0;
      }
      if ( v19 == devguiGlob.heldButtonHandle )
        break;
      if ( v19 == devguiGlob.focusButtonHandle && !devguiGlob.heldButtonHandle )
        goto LABEL_41;
      if ( v19 == v4 )
      {
        if ( v21 )
          v24 = devgui_colorBgndGraySel;
        else
          v24 = devgui_colorBgndSel;
      }
      else
      {
        v24 = devgui_colorBgndGray;
        if ( !v21 )
          v24 = devgui_colorBgnd;
      }
LABEL_48:
      p_integer = &v24->current.integer;
      if ( v19 == v4 )
      {
        if ( v21 )
          v26 = devgui_colorTextGraySel;
        else
          v26 = devgui_colorTextSel;
      }
      else
      {
        v27 = !v21;
        v26 = devgui_colorTextGray;
        if ( v27 )
          v26 = devgui_colorText;
      }
      *(_DWORD *)v45 = *p_integer;
      integer = v26->current.integer;
      value = devgui_bevelShade->current.value;
      if ( v19 == v4 )
      {
        *origin = x + w;
        origin[1] = v7;
        if ( v19 == devguiGlob.selectedMenu && DevGui_IsButtonDown(INPUT_ACCEPT) )
          value = 2.0 - devgui_bevelShade->current.value;
      }
      DevGui_DrawBevelBox(x, v7, w, h, value, v45);
      DevGui_DrawFont(x + 4, v7 + 4, (const unsigned __int8 *)&integer, v20->label);
      childType = v20->childType;
      if ( childType )
      {
        if ( childType != 1 )
          goto LABEL_72;
        dvar = v20->child.dvar;
        if ( !dvar )
          goto LABEL_72;
        type = dvar->type;
        if ( !type )
        {
          if ( dvar->latched.enabled )
          {
            v34 = R_TextWidth("on", 0, cls.consoleFont);
            v35 = "on";
          }
          else
          {
            v34 = R_TextWidth("off", 0, cls.consoleFont);
            v35 = "off";
          }
          v36 = x - v34 - R_TextWidth("  ", 0, cls.consoleFont);
          v37 = j_va("%s%s", "  ", v35);
          v31 = v36 + w - 4;
          goto LABEL_71;
        }
        if ( type == 8 )
        {
          v38 = x + w - DevGui_DVarEnumValueWidth(dvar) - 4;
          v39 = Dvar_DisplayableLatchedValue(v20->child.dvar);
          v30 = j_va("%s%s", "  ", v39);
          v31 = v38;
          goto LABEL_70;
        }
      }
      else if ( v20->child.menu )
      {
        v30 = j_va("%s%s", "  ", ">");
        v31 = v48;
LABEL_70:
        v37 = v30;
LABEL_71:
        DevGui_DrawFont(v31, v7 + 4, (const unsigned __int8 *)&integer, v37);
      }
LABEL_72:
      v7 += h;
      v4 = activeChild;
      v18 = v50;
LABEL_73:
      v19 = v20->nextSibling;
      ++v10;
      if ( !v19 )
        return;
    }
    if ( devguiGlob.heldButtonHandle == devguiGlob.focusButtonHandle )
    {
      v24 = devgui_colorBgndHeld;
      goto LABEL_48;
    }
LABEL_41:
    v24 = devgui_colorBgndFocus;
    goto LABEL_48;
  }
}

/*
==============
DevGui_DrawSingleSlider
==============
*/
void DevGui_DrawSingleSlider(int x, int y, int rowWidth, int rowHeight, float fraction, int row)
{
  const dvar_t *v8; 
  const dvar_t *v11; 

  if ( row != devguiGlob.focusRow )
    goto LABEL_5;
  if ( devguiGlob.slider.held )
  {
    v8 = devgui_colorSliderBgndHeld;
    goto LABEL_6;
  }
  v8 = devgui_colorSliderBgndFocus;
  if ( !devguiGlob.slider.focus )
LABEL_5:
    v8 = devgui_colorSliderBgnd;
LABEL_6:
  DevGui_DrawBevelBox(x, y, rowWidth, rowHeight, devgui_bevelShade->current.value, (const unsigned __int8 *)&v8->current);
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  if ( row == devguiGlob.focusRow )
  {
    if ( devguiGlob.slider.knobHeld )
    {
      v11 = devgui_colorSliderKnobHeld;
      goto LABEL_13;
    }
    if ( devguiGlob.slider.knobFocus )
    {
      v11 = devgui_colorSliderKnobFocus;
      goto LABEL_13;
    }
  }
  v11 = devgui_colorSliderKnobSel;
  if ( row != devguiGlob.selRow )
    v11 = devgui_colorSliderKnob;
LABEL_13:
  DevGui_DrawBevelBox((int)*(float *)&_XMM2, y, 8, rowHeight, devgui_bevelShade->current.value, (const unsigned __int8 *)&v11->current);
}

/*
==============
DevGui_DrawSliderPath
==============
*/
void DevGui_DrawSliderPath(int x, int y)
{
  char path[128]; 

  DevGui_GetSliderPath(devguiGlob.selectedMenu, path, 0);
  DevGui_DrawFont(x, y, (const unsigned __int8 *)&devgui_colorText->current, path);
}

/*
==============
DevGui_DrawSliders
==============
*/
void DevGui_DrawSliders(const DevMenuItem *menu)
{
  unsigned __int8 childType; 
  const dvar_t *dvar; 
  int width; 
  int FontHeight; 
  int v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int left; 
  int v12; 
  int v13; 
  unsigned __int8 type; 
  int v15; 
  int v16; 
  __int64 i; 
  int max; 
  int stringCount; 
  int v24; 
  unsigned int v25; 
  int v26; 
  __int64 j; 
  int v28; 
  unsigned __int8 v29; 
  const char *v30; 
  unsigned __int8 *color; 
  __int64 v32; 
  int x; 
  int y; 

  childType = menu->childType;
  if ( childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1329, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", "%s\n\tmenu %s type %i", "menu->childType == DEV_CHILD_DVAR", menu->label, childType) )
    __debugbreak();
  dvar = menu->child.dvar;
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1331, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( menu->label ) = %s", menu->label) )
    __debugbreak();
  width = devguiGlob.slider.width;
  FontHeight = DevGui_GetFontHeight();
  switch ( dvar->type )
  {
    case 2u:
      v6 = 4;
      v7 = 18;
      v8 = 2i64;
      break;
    case 3u:
      v6 = 5;
      v7 = 20;
      v8 = 3i64;
      break;
    case 4u:
    case 0xAu:
      v6 = 6;
      v7 = 22;
      v8 = 4i64;
      break;
    case 0xBu:
      v6 = 8;
      v7 = 26;
      v8 = 6i64;
      break;
    default:
      v6 = 3;
      v7 = 16;
      v8 = 1i64;
      break;
  }
  v9 = v7 + FontHeight * v6;
  if ( (unsigned __int8)(dvar->type - 10) <= 1u )
    v9 += FontHeight + 2;
  v10 = devguiGlob.bottom - v9;
  left = devguiGlob.left;
  DevGui_DrawBevelBox(devguiGlob.left, devguiGlob.bottom - v9 - 25, width + 8, v9, devgui_bevelShade->current.value, (const unsigned __int8 *)&devgui_colorBgnd->current);
  v12 = left + 4;
  v13 = v10 - 19;
  x = v12;
  y = v13;
  DevGui_DrawSliderPath(v12, v13);
  type = dvar->type;
  if ( type == 10 )
  {
    v13 += FontHeight + 2;
    DevGui_DrawBox(v12, v13, width, FontHeight, (const unsigned __int8 *)&dvar->latched);
    v15 = 0;
    v16 = FontHeight + 2;
    for ( i = 0i64; i < v8; ++i )
    {
      v13 += v16;
      DevGui_DrawSingleSlider(v12, v13, width, FontHeight, (float)dvar->latched.color[i] * 0.0039215689, v15++);
      v16 = FontHeight + 2;
    }
    goto LABEL_45;
  }
  if ( (unsigned __int8)(type - 2) > 2u )
  {
    if ( type == 11 )
    {
      DevGui_DrawFloat3ColorSliders(&x, &y, dvar, width, FontHeight);
      v12 = x;
      v13 = y;
      goto LABEL_45;
    }
    v13 += FontHeight + 2;
    switch ( type )
    {
      case 0u:
        _XMM0 = dvar->latched.color[0];
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_1_0);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
LABEL_39:
        DevGui_DrawSingleSlider(v12, v13, width, FontHeight, *(float *)&_XMM0, 0);
        goto LABEL_45;
      case 5u:
        max = dvar->domain.integer.max;
        stringCount = dvar->domain.enumeration.stringCount;
        if ( max != stringCount )
        {
          *(float *)&_XMM0 = (float)(dvar->latched.integer - stringCount) / (float)(max - stringCount);
          goto LABEL_39;
        }
        break;
      case 8u:
        v24 = dvar->domain.enumeration.stringCount;
        if ( v24 > 1 )
        {
          *(float *)&_XMM0 = (float)dvar->latched.integer / (float)(v24 - 1);
          goto LABEL_39;
        }
        break;
      case 1u:
        *(float *)&_XMM0 = (float)(dvar->latched.value - dvar->domain.value.min) / (float)(dvar->domain.value.max - dvar->domain.value.min);
        goto LABEL_39;
      default:
        LODWORD(color) = type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1406, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type %i", color) )
          __debugbreak();
        break;
    }
    *(float *)&_XMM0 = FLOAT_0_5;
    goto LABEL_39;
  }
  v25 = 0;
  v26 = FontHeight + 2;
  for ( j = 0i64; j < v8; ++j )
  {
    v13 += v26;
    if ( v25 >= 4 )
    {
      LODWORD(v32) = 4;
      LODWORD(color) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", color, v32) )
        __debugbreak();
    }
    DevGui_DrawSingleSlider(v12, v13, width, FontHeight, (float)(*(&dvar->latched.value + j) - dvar->domain.value.min) / (float)(dvar->domain.value.max - dvar->domain.value.min), v25++);
    v26 = FontHeight + 2;
  }
LABEL_45:
  v28 = v13 + FontHeight + 2;
  v29 = dvar->type;
  if ( v29 )
  {
    v30 = Dvar_DisplayableLatchedValue(dvar);
    if ( v29 == 8 )
      v30 = j_va("%i: %s", dvar->latched.unsignedInt, v30);
  }
  else
  {
    v30 = "Off";
    if ( dvar->latched.enabled )
      v30 = "On";
  }
  DevGui_DrawFont(v12, v28, (const unsigned __int8 *)&devgui_colorText->current, v30);
}

/*
==============
DevGui_DvarRowCount
==============
*/
__int64 DevGui_DvarRowCount(const dvar_t *dvar)
{
  switch ( dvar->type )
  {
    case 2u:
      return 2i64;
    case 3u:
      return 3i64;
    case 4u:
    case 0xAu:
      return 4i64;
    case 0xBu:
      return 6i64;
  }
  return 1i64;
}

/*
==============
DevGui_FindMenu
==============
*/
__int64 DevGui_FindMenu(unsigned __int16 parentHandle, const char *label)
{
  DevMenuItem *Menu; 
  unsigned __int8 childType; 
  unsigned __int16 i; 
  __int64 v6; 
  unsigned __int8 *v7; 
  __int64 v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  if ( parentHandle )
    Menu = DevGui_GetMenu(parentHandle);
  else
    Menu = &devguiGlob.topmostMenu;
  childType = Menu->childType;
  if ( childType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 336, ASSERT_TYPE_ASSERT, "( ( parentMenu->childType == DEV_CHILD_MENU ) )", "( parentMenu->childType ) = %i", childType) )
    __debugbreak();
  for ( i = Menu->child.menu; i; i = *(unsigned __int16 *)((char *)&devguiGlob.menus[0].nextSibling + v6) )
  {
    if ( (unsigned __int16)(i - 1) > 0x1F3Fu )
    {
      LODWORD(v18) = 8000;
      LODWORD(v17) = 1;
      LODWORD(v16) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v16, v17, v18) )
        __debugbreak();
    }
    v6 = 72i64 * i - 72;
    v7 = (unsigned __int8 *)&devguiGlob + v6;
    if ( !(devguiGlob_t *)((char *)&devguiGlob + v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 341, ASSERT_TYPE_ASSERT, "(childMenu)", (const char *)&queryFormat, "childMenu") )
      __debugbreak();
    v8 = 0x7FFFFFFFi64;
    if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = (const char *)(label - (const char *)v7);
    while ( 1 )
    {
      v10 = v7[(_QWORD)v9];
      v11 = v8;
      v12 = *v7++;
      --v8;
      if ( !v11 )
        return i;
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
          break;
      }
      if ( !v10 )
        return i;
    }
  }
  return 0i64;
}

/*
==============
DevGui_FreeMenu_r
==============
*/
void DevGui_FreeMenu_r(unsigned __int16 handle)
{
  DevMenuItem *Menu; 
  unsigned __int8 childType; 

  if ( handle )
  {
    if ( devguiGlob.selectedMenu == handle )
    {
      devguiGlob.selectedMenu = 0;
      *(_WORD *)&devguiGlob.isActive = 0;
    }
    Menu = DevGui_GetMenu(handle);
    if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 257, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
      __debugbreak();
    childType = Menu->childType;
    if ( childType == 2 )
    {
      SL_AllocString_Free(Menu->child.command);
      Menu->child.command = NULL;
    }
    else if ( !childType )
    {
      DevGui_FreeMenu_r(Menu->child.menu);
    }
    DevGui_FreeMenu_r(Menu->nextSibling);
    *(_QWORD *)Menu->label = devguiGlob.nextFreeMenu;
    devguiGlob.nextFreeMenu = Menu;
  }
}

/*
==============
DevGui_GetButtonColor
==============
*/
void DevGui_GetButtonColor(unsigned __int8 (*outBoxColor)[4], unsigned __int8 (*outTextColor)[4], unsigned __int16 buttonHandle, bool selected)
{
  DevMenuItem *Menu; 
  bool v9; 
  DevMenuChild v10; 
  char v11; 
  const dvar_t *v12; 
  DvarValue *p_current; 
  const dvar_t *v14; 

  Menu = DevGui_GetMenu(buttonHandle);
  if ( Menu->childType == 1 )
  {
    v10.command = (const char *)Menu->child;
    v11 = *((_BYTE *)v10.command + 29);
    v9 = v11 == 9 || v11 == 8 && !*((_DWORD *)v10.command + 22);
  }
  else
  {
    v9 = 0;
  }
  if ( buttonHandle == devguiGlob.heldButtonHandle )
  {
    if ( devguiGlob.heldButtonHandle == devguiGlob.focusButtonHandle )
    {
      v12 = devgui_colorBgndHeld;
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  if ( buttonHandle == devguiGlob.focusButtonHandle && !devguiGlob.heldButtonHandle )
  {
LABEL_13:
    v12 = devgui_colorBgndFocus;
    goto LABEL_17;
  }
  if ( !selected )
  {
    if ( !v9 )
    {
      p_current = &devgui_colorBgnd->current;
      goto LABEL_26;
    }
    p_current = &devgui_colorBgndGray->current;
LABEL_23:
    if ( v9 )
    {
      v14 = devgui_colorTextGray;
      goto LABEL_27;
    }
LABEL_26:
    v14 = devgui_colorText;
    goto LABEL_27;
  }
  v12 = devgui_colorBgndGraySel;
  if ( !v9 )
    v12 = devgui_colorBgndSel;
LABEL_17:
  p_current = &v12->current;
  if ( !selected )
    goto LABEL_23;
  if ( v9 )
    v14 = devgui_colorTextGraySel;
  else
    v14 = devgui_colorTextSel;
LABEL_27:
  *(_DWORD *)outBoxColor = p_current->integer;
  *(_DWORD *)outTextColor = v14->current.integer;
}

/*
==============
DevGui_GetFloatFractionStep
==============
*/
float DevGui_GetFloatFractionStep(float min, float max)
{
  float v2; 
  float v3; 
  float v5; 

  v3 = max - min;
  v2 = max - min;
  v5 = FLOAT_1_0;
  if ( COERCE_FLOAT(LODWORD(v3) & _xmm) >= 1.0 )
  {
    log10f_0(COERCE_FLOAT(LODWORD(v3) & _xmm));
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    v5 = (float)(int)*(float *)&_XMM4;
  }
  if ( max <= min )
    return 0.0;
  else
    return (float)(powf_0(10.0, v5) * 0.0099999998) / v2;
}

/*
==============
DevGui_GetMenu
==============
*/
DevMenuItem *DevGui_GetMenu(unsigned __int16 handle)
{
  int v3; 
  int v4; 
  int v5; 

  if ( (unsigned __int16)(handle - 1) > 0x1F3Fu )
  {
    v5 = 8000;
    v4 = 1;
    v3 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v3, v4, v5) )
      __debugbreak();
  }
  return (DevMenuItem *)((char *)&devguiGlob + 72 * handle - 72);
}

/*
==============
DevGui_GetSliderPath
==============
*/
__int64 DevGui_GetSliderPath(unsigned __int16 menuHandle, char *path, int pathLen)
{
  DevMenuItem *Menu; 
  unsigned __int16 parent; 
  int SliderPath; 
  unsigned __int64 v8; 
  int v9; 

  Menu = DevGui_GetMenu(menuHandle);
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1058, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  parent = Menu->parent;
  if ( parent )
  {
    SliderPath = DevGui_GetSliderPath(parent, path, pathLen);
    path[SliderPath] = 47;
    pathLen = SliderPath + 1;
  }
  v8 = -1i64;
  do
    ++v8;
  while ( Menu->label[v8] );
  v9 = truncate_cast<int,unsigned __int64>(v8);
  if ( v9 + pathLen > 120 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1067, ASSERT_TYPE_ASSERT, "( ( pathLen + labelLen <= 120 ) )", "( path + pathLen ) = %s", &path[pathLen]) )
    __debugbreak();
  memcpy_0(&path[pathLen], Menu, v9 + 1);
  return (unsigned int)(v9 + pathLen);
}

/*
==============
DevGui_Init
==============
*/
void DevGui_Init(void)
{
  __int64 v0; 
  devguiGlob_t *v1; 
  DevMenuItem *v2; 

  v0 = 7999i64;
  v1 = &devguiGlob;
  v2 = &devguiGlob.menus[1];
  do
  {
    *(_QWORD *)v1->menus[0].label = v2;
    v1 = (devguiGlob_t *)((char *)v1 + 72);
    ++v2;
    --v0;
  }
  while ( v0 );
  devguiGlob.nextFreeMenu = (DevMenuItem *)&devguiGlob;
  *(_QWORD *)devguiGlob.menus[7999].label = 0i64;
  *(_WORD *)&devguiGlob.topmostMenu.childType = 0;
  devguiGlob.topmostMenu.child.menu = 0;
  *(_DWORD *)&devguiGlob.topmostMenu.nextSibling = 0;
  devguiGlob.topmostMenu.parent = 0;
  *(_WORD *)&devguiGlob.isActive = 0;
  devguiGlob.editingKnot = 0;
  *(_QWORD *)&devguiGlob.selRow = -1i64;
  devguiGlob.left = DevGui_GetScreenLeft(&scrPlaceFull);
  devguiGlob.right = DevGui_GetScreenRight(&scrPlaceFull);
  devguiGlob.top = DevGui_GetScreenTop(&scrPlaceFull);
  devguiGlob.bottom = DevGui_GetScreenBottom(&scrPlaceFull);
  devguiGlob.slider.width = (devguiGlob.right - devguiGlob.left) / 2 + 100;
  DevGui_InputInit();
}

/*
==============
DevGui_InitGraphData
==============
*/
void DevGui_InitGraphData(DevGraph *graph)
{
  int v2; 
  __int64 v3; 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 605, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 605, ASSERT_TYPE_ASSERT, "(graph->knots)", (const char *)&queryFormat, "graph->knots") )
    __debugbreak();
  if ( !graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 605, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
    __debugbreak();
  if ( !graph->knotCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 605, ASSERT_TYPE_ASSERT, "(graph->knotCountMax > 0)", (const char *)&queryFormat, "graph->knotCountMax > 0") )
    __debugbreak();
  v2 = 2;
  graph->knots->v[0] = 0.0;
  graph->knots->v[1] = 0.0;
  graph->knots[1].v[0] = 1.0;
  graph->knots[1].v[1] = 1.0;
  *graph->knotCount = 2;
  if ( graph->knotCountMax > 2u )
  {
    v3 = 2i64;
    do
    {
      ++v3;
      ++v2;
      graph->knots[v3 - 1].v[0] = -1.0;
      graph->knots[v3 - 1].v[1] = -1.0;
    }
    while ( v2 < graph->knotCountMax );
  }
  graph->selectedKnot = 0;
  graph->textCallback = NULL;
  graph->eventCallback = NULL;
  graph->data = NULL;
}

/*
==============
DevGui_IsActive
==============
*/
_BOOL8 DevGui_IsActive()
{
  return devguiGlob.isActive;
}

/*
==============
DevGui_IsValidPath
==============
*/
char DevGui_IsValidPath(const char *path)
{
  __int64 v2; 
  unsigned __int64 v3; 
  DevGuiTokenResult v5; 
  char *v6; 
  char v7; 
  char *v8; 
  __int64 v9; 
  char v10; 
  __int16 v11; 
  char v12; 
  __int16 v13; 
  bool v14; 
  __int16 sortKeyOut; 
  char *pathInOut; 
  char label[56]; 

  pathInOut = (char *)path;
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 466, ASSERT_TYPE_ASSERT, "(path)", (const char *)&queryFormat, "path") )
    __debugbreak();
  v2 = -1i64;
  v3 = -1i64;
  do
    ++v3;
  while ( path[v3] );
  if ( v3 > 0x78 )
  {
    do
      ++v2;
    while ( path[v2] );
    Com_Printf(11, "Path '%s' must be no longer than %i characters (currently %zu).\n", path, 120i64, v2);
    return 0;
  }
  v5 = DevGui_PathToken((const char **)&pathInOut, label, &sortKeyOut);
  if ( v5 == DEVGUI_TOKEN_LAST )
  {
    Com_Printf(11, "Path '%s' must have at least one menu separator ('/' character).\n", path);
    return 0;
  }
  v6 = pathInOut;
  while ( 1 )
  {
LABEL_12:
    if ( v5 == DEVGUI_TOKEN_ERROR )
    {
      Com_Printf(11, "path '%s' is invalid.  Format is 'menu name:sortkey/submenu/...', where 'sortkey' is any (possibly signed) integer.\n", path);
      return 0;
    }
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 369, ASSERT_TYPE_ASSERT, "(*pathInOut)", (const char *)&queryFormat, "*pathInOut") )
      __debugbreak();
    v7 = *v6;
    v8 = v6;
    v9 = 0i64;
    if ( *v6 )
      break;
LABEL_34:
    v5 = DEVGUI_TOKEN_ERROR;
  }
  do
  {
    if ( v7 != 58 )
    {
      if ( v7 == 47 && *++v8 != 47 )
      {
        v6 = v8;
        v5 = DEVGUI_TOKEN_MORE;
        goto LABEL_12;
      }
      ++v8;
      v14 = ++v9 == 52;
      goto LABEL_31;
    }
    v10 = *++v8;
    v11 = 0;
    if ( v10 == 45 || v10 == 43 )
      v10 = *++v8;
    if ( (unsigned __int8)(v10 - 48) > 9u )
      goto LABEL_34;
    v12 = *v8;
    do
    {
      ++v8;
      v13 = v12;
      v12 = *v8;
      v11 = v13 + 10 * v11 - 48;
    }
    while ( *v8 >= 48 && v12 <= 57 );
    if ( v12 )
    {
      if ( v12 != 47 )
        goto LABEL_34;
      v14 = v8[1] == 47;
LABEL_31:
      if ( v14 )
        goto LABEL_34;
    }
    v7 = *v8;
  }
  while ( *v8 );
  if ( !v9 )
    goto LABEL_34;
  return 1;
}

/*
==============
DevGui_KeyPressed
==============
*/
void DevGui_KeyPressed(int key, int repeats, int down)
{
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  DevMouse::MouseButton v10; 
  unsigned __int16 selectedMenu; 
  DevMenuItem *Menu; 
  unsigned __int8 childType; 
  const char *v14; 
  char path[128]; 

  if ( (unsigned int)(key - 187) > 8 )
    goto LABEL_15;
  v6 = key - 187;
  if ( !v6 )
  {
    v10 = MOUSEBUTTON_LEFT;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = MOUSEBUTTON_RIGHT;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = MOUSEBUTTON_MIDDLE;
LABEL_14:
    DevMouse::MouseButtonEvent(&g_devMouse, v10, down);
    goto LABEL_15;
  }
  v9 = v8 - 3;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      if ( !down )
        return;
      DevMouse::MouseScroll(&g_devMouse, 1);
    }
  }
  else
  {
    if ( !down )
      return;
    DevMouse::MouseScroll(&g_devMouse, -1);
  }
LABEL_15:
  if ( down )
  {
    if ( repeats == 1 && devguiGlob.bindNextKey )
    {
      devguiGlob.bindNextKey = 0;
      if ( key != 27 )
      {
        if ( key == 9 || key == 154 )
        {
          Com_Printf(11, "Can't rebind 'tab' or 'F1'\n");
        }
        else
        {
          selectedMenu = devguiGlob.selectedMenu;
          if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2653, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
            __debugbreak();
          Menu = DevGui_GetMenu(selectedMenu);
          if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2655, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
            __debugbreak();
          if ( Menu->parent )
          {
            childType = Menu->childType;
            if ( !childType || childType == 1 && !devguiGlob.editingMenuItem )
              selectedMenu = Menu->parent;
          }
          DevGui_GetSliderPath(selectedMenu, path, 0);
          v14 = j_va("devgui_open \"%s\"", path);
          CL_Keys_SetBindingCheat(LOCAL_CLIENT_0, key, v14);
        }
      }
    }
  }
}

/*
==============
DevGui_MaxChildMenuWidth
==============
*/
int DevGui_MaxChildMenuWidth(const DevMenuItem *menu)
{
  int result; 
  unsigned __int16 nextSibling; 
  int v4; 
  DevMenuItem *v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 812, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  if ( menu->childType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 813, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_MENU)", (const char *)&queryFormat, "menu->childType == DEV_CHILD_MENU") )
    __debugbreak();
  result = DevGui_MenuItemWidth(menu);
  nextSibling = menu->child.menu;
  v4 = result;
  if ( nextSibling )
  {
    do
    {
      if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
      {
        LODWORD(v9) = 8000;
        LODWORD(v8) = 1;
        LODWORD(v7) = nextSibling;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v7, v8, v9) )
          __debugbreak();
      }
      v5 = &devguiGlob.menus[nextSibling - 1];
      v6 = DevGui_MenuItemWidth(v5);
      nextSibling = v5->nextSibling;
      if ( v4 < v6 )
        v4 = v6;
    }
    while ( nextSibling );
    return v4;
  }
  return result;
}

/*
==============
DevGui_MenuItemWidth
==============
*/
__int64 DevGui_MenuItemWidth(const DevMenuItem *menu)
{
  unsigned int v2; 
  unsigned __int8 childType; 
  int v4; 
  const dvar_t *dvar; 
  unsigned __int8 type; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 

  v2 = R_TextWidth(menu->label, 0, cls.consoleFont) + 8;
  childType = menu->childType;
  if ( !childType )
  {
    if ( !menu->child.menu )
      return v2;
    v4 = R_TextWidth(">", 0, cls.consoleFont);
    v2 += v4 + R_TextWidth("  ", 0, cls.consoleFont);
    childType = menu->childType;
  }
  if ( childType != 1 )
    return v2;
  dvar = menu->child.dvar;
  if ( !dvar )
    return v2;
  type = dvar->type;
  if ( type )
  {
    if ( type == 8 )
      return v2 + (unsigned int)DevGui_DVarEnumValueWidth(dvar);
    return v2;
  }
  v7 = R_TextWidth("on", 0, cls.consoleFont);
  v8 = R_TextWidth("  ", 0, cls.consoleFont) + v7;
  v9 = R_TextWidth("off", 0, cls.consoleFont);
  v10 = v9 + R_TextWidth("  ", 0, cls.consoleFont);
  if ( v8 > v10 )
    v10 = v8;
  return v2 + v10;
}

/*
==============
DevGui_MouseEditSlider
==============
*/
void DevGui_MouseEditSlider(LocalClientNum_t localClientNum, int mouseX, int mouseY, float deltaTime)
{
  unsigned __int16 selectedMenu; 
  int focusRow; 
  DevMenuItem *Menu; 
  int v11; 
  float pos; 
  float knobHeldOffset; 
  const dvar_t *v14; 
  float max; 
  __int128 stringCount; 
  int v18; 
  int v19; 
  int v20; 
  __int128 v21; 
  bool held; 
  float heldScrollTimer; 
  double v26; 
  float value; 
  double v33; 
  DevGui_SliderPoint outSliderPoint; 

  if ( !devguiGlob.isActive || !devguiGlob.editingMenuItem )
    goto LABEL_51;
  selectedMenu = devguiGlob.selectedMenu;
  if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", devguiGlob.selectedMenu, 1, 8000) )
    __debugbreak();
  if ( byte_15153517C[72 * selectedMenu] != 1 )
  {
LABEL_51:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3148, ASSERT_TYPE_ASSERT, "(DevGui_IsEditingSlider())", (const char *)&queryFormat, "DevGui_IsEditingSlider()") )
      __debugbreak();
  }
  if ( devguiGlob.mouseButtonDown[0] )
  {
    if ( devguiGlob.slider.held || devguiGlob.slider.knobHeld )
      focusRow = devguiGlob.focusRow;
    else
      focusRow = -1;
  }
  else
  {
    devguiGlob.slider.held = 0;
    focusRow = -1;
    devguiGlob.slider.knobHeld = 0;
  }
  _XMM7 = 0i64;
  if ( !DevGui_PickSliderPoint(&outSliderPoint, mouseX, mouseY, focusRow) )
    goto LABEL_39;
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  if ( Menu->childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3161, ASSERT_TYPE_ASSERT, "(control->childType == DEV_CHILD_DVAR)", (const char *)&queryFormat, "control->childType == DEV_CHILD_DVAR") )
    __debugbreak();
  v11 = DevGui_DvarRowCount(Menu->child.dvar);
  if ( outSliderPoint.componentIndex >= v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3163, ASSERT_TYPE_ASSERT, "(sliderPoint.componentIndex < DevGui_DvarRowCount( dvar ))", (const char *)&queryFormat, "sliderPoint.componentIndex < DevGui_DvarRowCount( dvar )") )
    __debugbreak();
  devguiGlob.focusRow = outSliderPoint.componentIndex;
  devguiGlob.slider.knobFocus = outSliderPoint.hitKnob;
  devguiGlob.slider.focus = 1;
  if ( devguiGlob.mouseButtonPressed[0] )
  {
    pos = outSliderPoint.pos;
    knobHeldOffset = outSliderPoint.knobPos - outSliderPoint.pos;
    if ( outSliderPoint.hitKnob )
    {
      devguiGlob.slider.knobHeldOffset = outSliderPoint.knobPos - outSliderPoint.pos;
      devguiGlob.slider.knobHeld = 1;
LABEL_42:
      v26 = I_fclamp(knobHeldOffset + pos, 0.0, 1.0);
      DevGui_SetDvarBySliderFraction(devguiGlob.focusRow, *(float *)&v26);
      return;
    }
    v14 = DevGui_SelectedDvar();
    switch ( v14->type )
    {
      case 0u:
        _XMM2 = LODWORD(FLOAT_1_0);
        break;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
        max = v14->domain.value.max;
        stringCount = (unsigned int)v14->domain.enumeration.stringCount;
        goto LABEL_36;
      case 5u:
        v18 = v14->domain.integer.max;
        v19 = v14->domain.enumeration.stringCount;
        if ( v18 >= v19 )
        {
          v20 = v18 - v19 + 1;
LABEL_31:
          v21 = LODWORD(FLOAT_1_0);
          *(float *)&v21 = 1.0 / (float)v20;
          _XMM2 = v21;
        }
        else
        {
          _XMM2 = 0i64;
        }
        break;
      case 8u:
        v20 = v14->domain.enumeration.stringCount;
        if ( v20 )
          goto LABEL_31;
        _XMM2 = 0i64;
        break;
      case 0xAu:
        _XMM2 = LODWORD(FLOAT_0_0039215689);
        break;
      case 0xBu:
        max = FLOAT_1_0;
        stringCount = 0i64;
LABEL_36:
        *(float *)&stringCount = DevGui_GetFloatFractionStep(*(float *)&stringCount, max);
        _XMM2 = stringCount;
        break;
      default:
        CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3000, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
        __debugbreak();
    }
    __asm
    {
      vcmpless xmm0, xmm7, xmm8
      vblendvps xmm9, xmm2, xmm1, xmm0
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM9 + outSliderPoint.fraction, 0.0, 1.0);
    DevGui_SetDvarBySliderFraction(devguiGlob.focusRow, *(float *)&_XMM0);
    held = 1;
    heldScrollTimer = 0.0;
    devguiGlob.slider.heldScrollTimer = 0.0;
    devguiGlob.slider.held = 1;
    devguiGlob.slider.heldStep = *(float *)&_XMM9;
  }
  else
  {
LABEL_39:
    heldScrollTimer = devguiGlob.slider.heldScrollTimer;
    *(float *)&_XMM9 = devguiGlob.slider.heldStep;
    held = devguiGlob.slider.held;
  }
  if ( devguiGlob.slider.knobHeld )
  {
    pos = outSliderPoint.pos;
    knobHeldOffset = devguiGlob.slider.knobHeldOffset;
    goto LABEL_42;
  }
  if ( held )
  {
    value = devgui_mouseScrollDelay->current.value;
    if ( heldScrollTimer >= value )
    {
      _XMM3 = LODWORD(FLOAT_N1_0);
      __asm
      {
        vcmpless xmm2, xmm7, xmm1
        vcmpless xmm0, xmm7, xmm9
        vblendvps xmm1, xmm3, xmm6, xmm2
        vblendvps xmm0, xmm3, xmm6, xmm0
      }
      if ( *(float *)&_XMM1 == *(float *)&_XMM0 )
      {
        v33 = I_fclamp((float)((float)((float)(heldScrollTimer - value) * *(float *)&_XMM9) * devgui_mouseScrollSpeed->current.value) + outSliderPoint.fraction, 0.0, 1.0);
        DevGui_SetDvarBySliderFraction(devguiGlob.focusRow, *(float *)&v33);
      }
      heldScrollTimer = value;
    }
    devguiGlob.slider.heldScrollTimer = heldScrollTimer + deltaTime;
  }
}

/*
==============
DevGui_MoveDown
==============
*/
__int64 DevGui_MoveDown()
{
  DevMenuItem *Menu; 
  DevMenuItem *v1; 
  unsigned __int8 childType; 
  __int64 v4; 

  if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1888, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
    __debugbreak();
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  v1 = Menu;
  if ( !Menu->parent )
  {
    childType = Menu->childType;
    if ( childType )
    {
      LODWORD(v4) = childType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1892, ASSERT_TYPE_ASSERT, "( ( menu->childType == DEV_CHILD_MENU ) )", "( menu->childType ) = %i", v4) )
        __debugbreak();
    }
    devguiGlob.selectedMenu = v1->child.menu;
    DevGui_GetMenu(devguiGlob.selectedMenu);
  }
  return DevGui_SelectNextMenuItem();
}

/*
==============
DevGui_MoveSelectionHorizontally
==============
*/
_BOOL8 DevGui_MoveSelectionHorizontally()
{
  int MenuScroll; 
  BOOL v1; 
  bool v2; 
  __int64 v3; 
  unsigned __int16 selectedMenu; 
  unsigned __int16 i; 
  unsigned __int16 v6; 
  unsigned __int16 j; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  MenuScroll = DevGui_GetMenuScroll(SCROLL_XAXIS);
  v1 = MenuScroll != 0;
  v2 = MenuScroll <= 0;
  if ( MenuScroll < 0 )
  {
    v3 = (unsigned int)-MenuScroll;
    MenuScroll = 0;
    do
    {
      if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1837, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
        __debugbreak();
      selectedMenu = devguiGlob.selectedMenu;
      if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
      {
        LODWORD(v11) = 8000;
        LODWORD(v10) = 1;
        LODWORD(v9) = devguiGlob.selectedMenu;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v9, v10, v11) )
          __debugbreak();
      }
      for ( i = devguiGlob.menus[selectedMenu - 1].parent; i; i = devguiGlob.menus[i - 1].parent )
      {
        devguiGlob.selectedMenu = i;
        if ( (unsigned __int16)(i - 1) > 0x1F3Fu )
        {
          LODWORD(v11) = 8000;
          LODWORD(v10) = 1;
          LODWORD(v9) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v9, v10, v11) )
            __debugbreak();
        }
      }
      DevGui_SelectPrevMenuItem();
      --v3;
    }
    while ( v3 );
    v2 = 1;
  }
  if ( !v2 )
  {
    do
    {
      if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1852, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
        __debugbreak();
      v6 = devguiGlob.selectedMenu;
      if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
      {
        LODWORD(v11) = 8000;
        LODWORD(v10) = 1;
        LODWORD(v9) = devguiGlob.selectedMenu;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v9, v10, v11) )
          __debugbreak();
      }
      for ( j = devguiGlob.menus[v6 - 1].parent; j; j = devguiGlob.menus[j - 1].parent )
      {
        devguiGlob.selectedMenu = j;
        if ( (unsigned __int16)(j - 1) > 0x1F3Fu )
        {
          LODWORD(v11) = 8000;
          LODWORD(v10) = 1;
          LODWORD(v9) = j;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v9, v10, v11) )
            __debugbreak();
        }
      }
      DevGui_SelectNextMenuItem();
      --MenuScroll;
    }
    while ( MenuScroll > 0 );
  }
  return v1;
}

/*
==============
DevGui_MoveUp
==============
*/
__int64 DevGui_MoveUp()
{
  DevMenuItem *Menu; 
  DevMenuItem *v1; 
  unsigned __int8 childType; 
  __int64 v4; 

  if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1871, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
    __debugbreak();
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  v1 = Menu;
  if ( !Menu->parent )
  {
    childType = Menu->childType;
    if ( childType )
    {
      LODWORD(v4) = childType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1875, ASSERT_TYPE_ASSERT, "( ( menu->childType == DEV_CHILD_MENU ) )", "( menu->childType ) = %i", v4) )
        __debugbreak();
    }
    devguiGlob.selectedMenu = v1->child.menu;
    DevGui_GetMenu(devguiGlob.selectedMenu);
  }
  return DevGui_SelectPrevMenuItem();
}

/*
==============
DevGui_OpenMenu
==============
*/
void DevGui_OpenMenu(const char *path)
{
  unsigned __int16 v1; 
  DevGuiTokenResult v2; 
  unsigned __int16 Menu; 
  DevMenuItem *v4; 
  unsigned __int8 childType; 
  DevMenuChild v6; 
  char v7; 
  __int16 sortKeyOut; 
  char *pathInOut; 
  char label[56]; 

  pathInOut = (char *)path;
  if ( DevGui_IsValidPath(path) )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = DevGui_PathToken((const char **)&pathInOut, label, &sortKeyOut);
      if ( v2 == DEVGUI_TOKEN_ERROR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 694, ASSERT_TYPE_ASSERT, "(tokResult != DEVGUI_TOKEN_ERROR)", (const char *)&queryFormat, "tokResult != DEVGUI_TOKEN_ERROR") )
        __debugbreak();
      Menu = DevGui_FindMenu(v1, label);
      v1 = Menu;
      if ( !Menu )
        break;
      if ( v2 == DEVGUI_TOKEN_LAST )
      {
        v4 = DevGui_GetMenu(Menu);
        if ( v4->childType == 2 )
        {
          Cbuf_InsertSuperUserText(LOCAL_CLIENT_0, v4->child.command);
        }
        else
        {
          devguiGlob.isActive = 1;
          devguiGlob.selectedMenu = v1;
          childType = v4->childType;
          if ( childType == 3 || childType == 1 && (v6.command = (const char *)v4->child, v7 = *((_BYTE *)v6.command + 29), v7 != 9) && (v7 != 8 || *((_DWORD *)v6.command + 22)) )
          {
            devguiGlob.editingMenuItem = 1;
          }
          else
          {
            devguiGlob.editingMenuItem = 0;
            if ( !v4->childType )
              devguiGlob.selectedMenu = v4->child.menu;
          }
          *(_QWORD *)&devguiGlob.selRow = 0i64;
        }
        return;
      }
    }
  }
}

/*
==============
DevGui_PathToken
==============
*/
__int64 DevGui_PathToken(const char **pathInOut, char *label, __int16 *sortKeyOut)
{
  const char *v6; 
  int v7; 
  char v8; 
  char *v9; 
  __int16 v10; 
  __int16 v11; 
  char v12; 
  char v13; 
  __int16 v14; 
  bool v15; 

  if ( !pathInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 368, ASSERT_TYPE_ASSERT, "(pathInOut)", (const char *)&queryFormat, "pathInOut") )
    __debugbreak();
  if ( !*pathInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 369, ASSERT_TYPE_ASSERT, "(*pathInOut)", (const char *)&queryFormat, "*pathInOut") )
    __debugbreak();
  if ( !label && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 370, ASSERT_TYPE_ASSERT, "(label)", (const char *)&queryFormat, "label") )
    __debugbreak();
  if ( !sortKeyOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 371, ASSERT_TYPE_ASSERT, "(sortKeyOut)", (const char *)&queryFormat, "sortKeyOut") )
    __debugbreak();
  v6 = *pathInOut;
  *sortKeyOut = 0x7FFF;
  v7 = 0;
  v8 = *v6;
  if ( !*v6 )
    return 0i64;
  v9 = label;
  do
  {
    if ( v8 != 58 )
    {
      if ( v8 == 47 && *++v6 != 47 )
      {
        label[v7] = 0;
        *pathInOut = v6;
        return 1i64;
      }
      *v9 = v8;
      ++v6;
      ++v9;
      ++v7;
      v15 = v9 - label == 52;
      goto LABEL_30;
    }
    ++v6;
    *v9 = 0;
    v10 = 0;
    v11 = 1;
    v12 = *v6;
    if ( *v6 == 45 )
    {
      v11 = -1;
LABEL_19:
      v12 = *++v6;
      goto LABEL_20;
    }
    if ( v12 == 43 )
      goto LABEL_19;
LABEL_20:
    if ( (unsigned __int8)(v12 - 48) > 9u )
      return 0i64;
    v13 = *v6;
    do
    {
      ++v6;
      v14 = v13;
      v13 = *v6;
      v10 = v14 + 10 * v10 - 48;
    }
    while ( *v6 >= 48 && v13 <= 57 );
    *sortKeyOut = v10 * v11;
    if ( !*v6 )
      goto LABEL_31;
    if ( *v6 != 47 )
      return 0i64;
    v15 = v6[1] == 47;
LABEL_30:
    if ( v15 )
      return 0i64;
LABEL_31:
    v8 = *v6;
  }
  while ( *v6 );
  if ( !v7 )
    return 0i64;
  *pathInOut = v6;
  label[v7] = 0;
  return 2i64;
}

/*
==============
DevGui_PickFloatScrollStep
==============
*/

float __fastcall DevGui_PickFloatScrollStep(float min, double max, float stepOverride)
{
  float v6; 
  __int128 v7; 
  __int128 v10; 
  __int128 v11; 
  __int128 v13; 

  if ( stepOverride != 0.0 )
    return stepOverride;
  _XMM8 = 0i64;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  v7 = *(_OWORD *)&max;
  *(float *)&v7 = *(float *)&max - min;
  v6 = *(float *)&max - min;
  if ( *(float *)&max != _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM2).m128_f32[0] )
    goto LABEL_10;
  __asm { vroundss xmm2, xmm8, xmm1, 1 }
  if ( min == (float)(int)*(float *)&_XMM2 )
  {
    _XMM3 = LODWORD(FLOAT_1_0);
    if ( *(float *)&v7 > 100.0 )
    {
      do
      {
        v10 = _XMM3;
        *(float *)&v10 = *(float *)&_XMM3 * 2.0;
        _XMM3 = v10;
      }
      while ( (float)(*(float *)&v10 * 100.0) < v6 );
    }
    if ( (float)(*(float *)&_XMM3 * 100.0) > v6 )
    {
      do
      {
        v11 = _XMM3;
        *(float *)&v11 = *(float *)&_XMM3 * 0.5;
        _XMM3 = v11;
      }
      while ( (float)(*(float *)&v11 * 100.0) > v6 );
    }
  }
  else
  {
LABEL_10:
    *(float *)&v7 = *(float *)&v7 * 0.0099999998;
    _XMM3 = v7;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v13 = 0i64;
    *(float *)&v13 = (float)(int)*(float *)&_XMM2;
    if ( *(float *)&v13 != 0.0 )
    {
      *(float *)&v13 = *(float *)&v13 - *(float *)&_XMM3;
      _XMM1 = v13 & _xmm;
      __asm
      {
        vcmpltss xmm2, xmm1, cs:__real@3dcccccd
        vblendvps xmm3, xmm3, xmm0, xmm2
      }
    }
  }
  return *(float *)&_XMM3;
}

/*
==============
DevGui_PickMenu
==============
*/
unsigned __int16 DevGui_PickMenu(unsigned __int16 menuHandle, unsigned __int16 activeChild, int keyX, int keyY, int *origin)
{
  const DevMenuItem *v9; 
  unsigned __int16 parent; 
  unsigned __int16 result; 
  int v12; 
  int v13; 
  int v14; 
  unsigned __int16 nextSibling; 
  int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  DevMenuItem *Menu; 
  int origina; 

  if ( !origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2949, ASSERT_TYPE_ASSERT, "(origin)", (const char *)&queryFormat, "origin") )
    __debugbreak();
  Menu = DevGui_GetMenu(menuHandle);
  v9 = Menu;
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2951, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  parent = Menu->parent;
  if ( parent )
  {
    result = DevGui_PickMenu(parent, menuHandle, keyX, keyY, origin);
    if ( result )
      return result;
    return DevGui_PickMenuVertically(v9, activeChild, keyX, keyY, origin);
  }
  v12 = *origin;
  v13 = origin[1];
  v14 = R_TextHeight(cls.consoleFont);
  nextSibling = devguiGlob.topmostMenu.child.menu;
  origina = v14 + 8;
  if ( !devguiGlob.topmostMenu.child.menu )
    return DevGui_PickMenuVertically(v9, activeChild, keyX, keyY, origin);
  while ( 1 )
  {
    if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
    {
      LODWORD(v20) = 8000;
      LODWORD(v19) = 1;
      LODWORD(v18) = nextSibling;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v18, v19, v20) )
        __debugbreak();
    }
    v16 = DevGui_MenuItemWidth(&devguiGlob.menus[nextSibling - 1]);
    v17 = v13 + origina;
    if ( nextSibling == menuHandle )
    {
      *origin = v12;
      origin[1] = v17;
    }
    if ( keyX >= v12 && keyY >= v13 && keyX < v12 + v16 && keyY < v17 )
      break;
    nextSibling = devguiGlob.menus[nextSibling - 1].nextSibling;
    v12 += v16;
    if ( !nextSibling )
      goto LABEL_21;
  }
  if ( !nextSibling )
  {
LABEL_21:
    v9 = Menu;
    return DevGui_PickMenuVertically(v9, activeChild, keyX, keyY, origin);
  }
  return nextSibling;
}

/*
==============
DevGui_PickMenuVertically
==============
*/
__int64 DevGui_PickMenuVertically(const DevMenuItem *menu, unsigned __int16 activeChild, int keyX, int keyY, int *origin)
{
  int v5; 
  int v6; 
  const DevMenuItem *v7; 
  int v8; 
  int v9; 
  unsigned __int16 nextSibling; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned __int16 v17; 
  int v18; 
  int v19; 
  int v20; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  int v26; 

  v5 = keyY;
  v6 = keyX;
  v7 = menu;
  if ( !menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2867, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  v25 = *origin;
  v26 = DevGui_MaxChildMenuWidth(v7);
  v8 = R_TextHeight(cls.consoleFont);
  v9 = origin[1];
  nextSibling = v7->child.menu;
  v11 = 0;
  v12 = 0;
  v13 = v8 + 8;
  if ( nextSibling )
  {
    do
    {
      if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
      {
        LODWORD(v24) = 8000;
        LODWORD(v23) = 1;
        LODWORD(v22) = nextSibling;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v22, v23, v24) )
          __debugbreak();
      }
      v14 = v11;
      if ( nextSibling != activeChild )
        v14 = v12;
      ++v11;
      v12 = v14;
      nextSibling = devguiGlob.menus[nextSibling - 1].nextSibling;
    }
    while ( nextSibling );
    v7 = menu;
    v5 = keyY;
    v6 = keyX;
  }
  v15 = 0;
  v16 = (devguiGlob.bottom - v9 - v13) / v13;
  if ( v16 < v11 && v12 >= v16 )
  {
    v9 += v13;
    v15 = 1;
  }
  v17 = v7->child.menu;
  v18 = 0;
  if ( v17 )
  {
    v19 = v15 - v16 + v12;
    do
    {
      if ( (unsigned __int16)(v17 - 1) > 0x1F3Fu )
      {
        LODWORD(v24) = 8000;
        LODWORD(v23) = 1;
        LODWORD(v22) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v22, v23, v24) )
          __debugbreak();
      }
      if ( v19 < v18 )
      {
        v20 = v25 + v26;
        if ( v17 == activeChild )
        {
          *origin = v20;
          origin[1] = v9;
        }
        if ( v6 >= v25 && v5 >= v9 && v6 < v20 && v5 < v9 + v13 )
          return v17;
        v9 += v13;
      }
      ++v18;
      v17 = devguiGlob.menus[v17 - 1].nextSibling;
    }
    while ( v17 );
  }
  return 0i64;
}

/*
==============
DevGui_PickSingleSliderPoint
==============
*/
bool DevGui_PickSingleSliderPoint(DevGui_SliderPoint *outSliderPoint, int keyX, int keyY, unsigned __int16 sliderHandle, unsigned int componentIndex, int sliderX, int sliderY, int sliderWidth, int sliderHeight, float knobFraction)
{
  float v14; 
  int v17; 
  int v18; 
  bool v19; 

  if ( !outSliderPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2703, ASSERT_TYPE_ASSERT, "(outSliderPoint)", (const char *)&queryFormat, "outSliderPoint") )
    __debugbreak();
  outSliderPoint->handle = sliderHandle;
  v14 = (float)(sliderWidth - 8);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  v17 = (int)*(float *)&_XMM1;
  if ( componentIndex > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)componentIndex, "unsigned", componentIndex) )
    __debugbreak();
  outSliderPoint->componentIndex = componentIndex;
  if ( keyX < v17 - 4 || keyY < sliderY || keyX >= v17 - 4 + 16 || (v18 = sliderY + sliderHeight, keyY >= sliderY + sliderHeight) )
  {
    v18 = sliderY + sliderHeight;
    v19 = 0;
  }
  else
  {
    v19 = 1;
  }
  outSliderPoint->hitKnob = v19;
  outSliderPoint->pos = (float)(keyX - sliderX - 4) * (float)(1.0 / v14);
  outSliderPoint->knobPos = (float)(v17 - sliderX) * (float)(1.0 / v14);
  outSliderPoint->fraction = knobFraction;
  return keyX >= sliderX && keyY >= sliderY && keyX < sliderX + sliderWidth && keyY < v18;
}

/*
==============
DevGui_PickSliderPoint
==============
*/
bool DevGui_PickSliderPoint(DevGui_SliderPoint *outSliderPoint, int keyX, int keyY, int restrictComponentIndex)
{
  DevGui_SliderPoint *v5; 
  unsigned __int16 selectedMenu; 
  DevMenuItem *Menu; 
  DevMenuChild v8; 
  int sliderHeight; 
  int v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  float v21; 
  float v22; 
  float v23; 
  int v24; 
  int v25; 
  float v26; 
  float v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  float v31; 
  DevGui_SliderPoint *v32; 
  __int64 sliderX; 
  int sliderXb; 
  __int64 sliderXa; 
  __int64 sliderY; 
  __int64 sliderYa; 
  unsigned __int16 v38; 
  int sliderWidth; 
  int v40; 
  int v43; 
  vec3_t outSliderPointa; 

  v5 = outSliderPoint;
  *(_QWORD *)outSliderPointa.v = outSliderPoint;
  if ( !outSliderPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2724, ASSERT_TYPE_ASSERT, "(outSliderPoint)", (const char *)&queryFormat, "outSliderPoint") )
    __debugbreak();
  if ( !devguiGlob.isActive || !devguiGlob.editingMenuItem )
    goto LABEL_87;
  selectedMenu = devguiGlob.selectedMenu;
  if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
  {
    LODWORD(sliderX) = devguiGlob.selectedMenu;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", sliderX, 1, 8000) )
      __debugbreak();
  }
  if ( byte_15153517C[72 * selectedMenu] != 1 )
  {
LABEL_87:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2725, ASSERT_TYPE_ASSERT, "(DevGui_IsEditingSlider())", (const char *)&queryFormat, "DevGui_IsEditingSlider()") )
      __debugbreak();
  }
  DebugWipe(v5, 0x10ui64);
  v38 = devguiGlob.selectedMenu;
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  v8.command = (const char *)Menu->child;
  if ( !v8.command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2732, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( control->label ) = %s", Menu->label) )
    __debugbreak();
  sliderWidth = devguiGlob.slider.width;
  sliderHeight = DevGui_GetFontHeight();
  v40 = sliderHeight;
  switch ( *((_BYTE *)v8.command + 29) )
  {
    case 2:
      v10 = 2;
      break;
    case 3:
      v10 = 3;
      break;
    case 4:
    case 0xA:
      v10 = 4;
      break;
    case 0xB:
      v10 = 6;
      break;
    default:
      v10 = 1;
      break;
  }
  if ( restrictComponentIndex != -1 && restrictComponentIndex >= v10 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2737, ASSERT_TYPE_ASSERT, "(restrictComponentIndex == -1 || restrictComponentIndex < static_cast<int>( componentCount ))", (const char *)&queryFormat, "restrictComponentIndex == -1 || restrictComponentIndex < static_cast<int>( componentCount )") )
      __debugbreak();
    sliderHeight = v40;
  }
  v11 = sliderHeight + 2;
  v12 = 0i64;
  v13 = sliderHeight + 2;
  if ( (unsigned __int8)(*((_BYTE *)v8.command + 29) - 10) > 1u )
    v13 = 0;
  v14 = devguiGlob.left + 4;
  v15 = devguiGlob.bottom - (v13 + sliderHeight * (v10 + 2) + 2 * v10 + 14) + v11 - 19;
  switch ( *((_BYTE *)v8.command + 29) )
  {
    case 0:
      _XMM0 = *((unsigned __int8 *)v8.command + 56);
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_1_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      return DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, 0, v14, v15, sliderWidth, sliderHeight, *(float *)&_XMM0);
    case 1:
      v21 = *((float *)v8.command + 23) - *((float *)v8.command + 22);
      if ( v21 <= 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2754, ASSERT_TYPE_ASSERT, "(dvarRange > 0.0f)", (const char *)&queryFormat, "dvarRange > 0.0f") )
          __debugbreak();
        sliderHeight = v40;
        v5 = *(DevGui_SliderPoint **)outSliderPointa.v;
      }
      return DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, 0, v14, v15, sliderWidth, sliderHeight, (float)(*((float *)v8.command + 14) - *((float *)v8.command + 22)) / v21);
    case 2:
    case 3:
    case 4:
      while ( 1 )
      {
        if ( restrictComponentIndex < 0 || (_DWORD)v12 == restrictComponentIndex )
        {
          v22 = *((float *)v8.command + 23) - *((float *)v8.command + 22);
          if ( v22 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2768, ASSERT_TYPE_ASSERT, "(dvarRange > 0.0f)", (const char *)&queryFormat, "dvarRange > 0.0f") )
            __debugbreak();
          v23 = (float)(*vec4_t::operator[]((vec4_t *)(v8.command + 56), v12) - *((float *)v8.command + 22)) / v22;
          if ( DevGui_PickSingleSliderPoint(*(DevGui_SliderPoint **)outSliderPointa.v, keyX, keyY, v38, v12, v14, v15, sliderWidth, v40, v23) )
            break;
        }
        v15 += v11;
        LODWORD(v12) = v12 + 1;
        if ( (_DWORD)v12 == v10 )
          return 0;
      }
      return 1;
    case 5:
      v24 = *((_DWORD *)v8.command + 22);
      v25 = *((_DWORD *)v8.command + 23) - v24;
      if ( !v25 )
        return DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, 0, v14, v15, sliderWidth, sliderHeight, 0.5);
      return DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, 0, v14, v15, sliderWidth, sliderHeight, (float)(*((_DWORD *)v8.command + 14) - v24) / (float)v25);
    case 8:
      if ( *((_DWORD *)v8.command + 22) == 1 )
        return DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, 0, v14, v15, sliderWidth, sliderHeight, 0.5);
      else
        return DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, 0, v14, v15, sliderWidth, sliderHeight, (float)*((int *)v8.command + 14) / (float)(*((_DWORD *)v8.command + 22) - 1));
    case 9:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2792, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DVAR_TYPE_STRING: unhandled dvar type") )
        __debugbreak();
      return 0;
    case 0xA:
      do
      {
        v15 += v11;
        if ( restrictComponentIndex < 0 || (_DWORD)v12 == restrictComponentIndex )
        {
          if ( DevGui_PickSingleSliderPoint(v5, keyX, keyY, v38, v12, v14, v15, sliderWidth, sliderHeight, (float)(unsigned __int8)v8.command[v12 + 56] * 0.0039215689) )
            return 1;
          sliderHeight = v40;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (_DWORD)v12 != v10 );
      return 0;
    case 0xB:
      v26 = *((float *)v8.command + 22);
      if ( v26 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2815, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", v26) )
        __debugbreak();
      v27 = *((float *)v8.command + 23);
      if ( v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2816, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", v27) )
        __debugbreak();
      v28 = 0;
      v29 = 2 * DevGui_GetFontWidth("R");
      v30 = v29 + v14;
      v43 = v30;
      while ( 2 )
      {
        v15 += v11;
        if ( restrictComponentIndex < 0 || v28 == restrictComponentIndex )
        {
          v31 = *vec4_t::operator[]((vec4_t *)(v8.command + 56), v28);
          sliderXb = v30;
          v32 = *(DevGui_SliderPoint **)outSliderPointa.v;
          if ( DevGui_PickSingleSliderPoint(*(DevGui_SliderPoint **)outSliderPointa.v, keyX, keyY, v38, v28, sliderXb, v15, sliderWidth - v29, v40, v31 / *((float *)v8.command + 23)) )
            return 1;
        }
        else
        {
          v32 = *(DevGui_SliderPoint **)outSliderPointa.v;
        }
        if ( ++v28 != 3 )
        {
          v30 = v43;
          continue;
        }
        break;
      }
      break;
    default:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2851, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
  }
  while ( 1 )
  {
    v15 += v11;
    if ( restrictComponentIndex < 0 || (_DWORD)v12 + 3 == restrictComponentIndex )
    {
      DevGui_Vec3ToHSV((const vec3_t *)(v8.command + 56), &outSliderPointa, *((float *)v8.command + 23));
      if ( (unsigned int)v12 >= 3 )
      {
        LODWORD(sliderY) = 3;
        LODWORD(sliderX) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2841, ASSERT_TYPE_ASSERT, "(unsigned)( componentIndex - 3 ) < (unsigned)( 3 )", "componentIndex - 3 doesn't index 3\n\t%i not in [0, %i)", sliderX, sliderY) )
          __debugbreak();
        LODWORD(sliderYa) = 3;
        LODWORD(sliderXa) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", sliderXa, sliderYa) )
          __debugbreak();
      }
      if ( DevGui_PickSingleSliderPoint(v32, keyX, keyY, v38, v12 + 3, v43, v15, sliderWidth - v29, v40, outSliderPointa.v[(int)v12]) )
        break;
    }
    LODWORD(v12) = v12 + 1;
    if ( (_DWORD)v12 == 3 )
      return 0;
  }
  return 1;
}

/*
==============
DevGui_RegisterDvars
==============
*/
void DevGui_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  devgui_colorBgnd = Dvar_RegisterColor("devgui_colorBgnd", 0.1, 0.1, 0.1, 0.80000001, 0, "Color background for the devgui");
  devgui_colorText = Dvar_RegisterColor("devgui_colorText", 0.60000002, 0.60000002, 0.60000002, 1.0, 0, "Text color for the devgui");
  devgui_colorBgndSel = Dvar_RegisterColor("devgui_colorBgndSel", 1.0, 0.0, 0.0, 0.30000001, 0, "Selection background color for the devgui");
  devgui_colorTextSel = Dvar_RegisterColor("devgui_colorTextSel", 1.0, 1.0, 1.0, 1.0, 0, "Selection text color for the devgui");
  devgui_colorBgndGray = Dvar_RegisterColor("devgui_colorBgndGray", 0.2, 0.2, 0.2, 0.89999998, 0, "Grayed out background color for the devgui");
  devgui_colorTextGray = Dvar_RegisterColor("devgui_colorTextGray", 0.69999999, 0.69999999, 0.69999999, 1.0, 0, "Greyed out text color for the devgui");
  devgui_colorBgndGraySel = Dvar_RegisterColor("devgui_colorBgndGraySel", 0.40000001, 0.40000001, 0.40000001, 0.89999998, 0, "Greyed out, selected background color for the devgui");
  devgui_colorTextGraySel = Dvar_RegisterColor("devgui_colorTextGraySel", 1.0, 1.0, 0.0, 1.0, 0, "Greyed out, selected text color for the devgui");
  devgui_colorBgndFocus = Dvar_RegisterColor("devgui_colorBgndFocus", 1.0, 0.1, 0.1, 0.30000001, 0, "Button color while the mouse hovers over it.");
  devgui_colorBgndHeld = Dvar_RegisterColor("devgui_colorBgndHeld", 0.5, 0.5, 1.0, 1.0, 0, "Button color when pressed by the mouse.");
  devgui_colorSliderBgnd = Dvar_RegisterColor("devgui_colorSliderBgnd", 1.0, 1.0, 1.0, 0.75, 0, "Color slider background for the devgui");
  devgui_colorSliderBgndFocus = Dvar_RegisterColor("devgui_colorSliderBgndFocus", 1.0, 0.1, 0.1, 0.30000001, 0, "Focused color slider background for the devgui");
  devgui_colorSliderBgndHeld = Dvar_RegisterColor("devgui_colorSliderBgndHeld", 0.5, 0.5, 0.5, 1.0, 0, "Held color slider background for the devgui");
  devgui_colorSliderKnob = Dvar_RegisterColor("devgui_colorSliderKnob", 1.0, 1.0, 1.0, 1.0, 0, "Knob color for the devgui");
  devgui_colorSliderKnobFocus = Dvar_RegisterColor("devgui_colorSliderKnobFocus", 0.80000001, 0.30000001, 0.30000001, 1.0, 0, "Focused knob color for the devgui");
  devgui_colorSliderKnobHeld = Dvar_RegisterColor("devgui_colorSliderKnobHeld", 1.0, 0.1, 0.1, 1.0, 0, "Held knob color for the devgui");
  devgui_colorSliderKnobSel = Dvar_RegisterColor("devgui_colorSliderKnobSel", 1.0, 0.0, 0.0, 1.0, 0, "Selected knob color for the devgui");
  devgui_bevelShade = Dvar_RegisterFloat("devgui_bevelShade", 0.69999999, 0.0, 1.0, 0, "Bevel shade for the devgui");
  devgui_colorGraphKnotNormal = Dvar_RegisterColor("devgui_colorGraphKnotNormal", 0.0, 1.0, 1.0, 0.69999999, 0, "Devgiu Color graph knot normal color");
  devgui_colorGraphKnotSelected = Dvar_RegisterColor("devgui_colorGraphKnotSelected", 1.0, 0.0, 0.0, 0.69999999, 0, "Devgui color graph knot selected color");
  devgui_colorGraphKnotEditing = Dvar_RegisterColor("devgui_colorGraphKnotEditing", 1.0, 0.0, 1.0, 1.0, 0, "Devgui color graph knot editing color");
  devgui_mouseScrollDelay = Dvar_RegisterFloat("devgui_mouseScrollDelay", 0.2, 0.0, 1.0, 0, "Delay before scrolling when holding the slider bar with the left mouse button.");
  devgui_mouseScrollSpeed = Dvar_RegisterFloat("devgui_mouseScrollSpeed", 10.0, 0.0, 100.0, 0, "Scroll speed when holding the slider bar with the left mouse button.");
  devgui_moveSelectionDelay = Dvar_RegisterFloat("devgui_moveSelectionDelay", 0.02, 0.0, 10.0, 0, "Minimum time between selection changes when moving through the devgui");
  devgui_allowMouse = Dvar_RegisterBool("devgui_allowMouse", 0, 0, "Devgui allow mouse input");
  Dvar_EndPermanentRegistration();
}

/*
==============
DevGui_RemoveGraphKnot
==============
*/
void DevGui_RemoveGraphKnot(DevGraph *graph, LocalClientNum_t localClientNum)
{
  __int64 selectedKnot; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  vec2_t *knots; 
  vec2_t *v12; 
  vec2_t *v13; 
  vec2_t *v14; 
  vec2_t *v15; 
  void (__fastcall *eventCallback)(const DevGraph *, DevEventType, LocalClientNum_t); 

  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2406, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2406, ASSERT_TYPE_ASSERT, "(graph->knots)", (const char *)&queryFormat, "graph->knots") )
    __debugbreak();
  if ( !graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2406, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
    __debugbreak();
  if ( !graph->knotCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2406, ASSERT_TYPE_ASSERT, "(graph->knotCountMax > 0)", (const char *)&queryFormat, "graph->knotCountMax > 0") )
    __debugbreak();
  if ( graph->selectedKnot < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2408, ASSERT_TYPE_ASSERT, "(graph->selectedKnot >= 0)", (const char *)&queryFormat, "graph->selectedKnot >= 0") )
    __debugbreak();
  if ( graph->selectedKnot >= *graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2409, ASSERT_TYPE_ASSERT, "(graph->selectedKnot < *graph->knotCount)", (const char *)&queryFormat, "graph->selectedKnot < *graph->knotCount") )
    __debugbreak();
  selectedKnot = graph->selectedKnot;
  v5 = *graph->knotCount;
  if ( (_DWORD)selectedKnot && (_DWORD)selectedKnot + 1 != (_DWORD)v5 )
  {
    v6 = v5 - 1;
    v7 = graph->selectedKnot;
    v8 = *graph->knotCount;
    if ( selectedKnot < v5 - 1 )
    {
      if ( v6 - selectedKnot >= 4 )
      {
        v9 = 8 * selectedKnot + 24;
        v10 = ((unsigned __int64)(v6 - selectedKnot - 4) >> 2) + 1;
        v7 = selectedKnot + 4 * v10;
        do
        {
          knots = graph->knots;
          v9 += 32i64;
          *(float *)((char *)knots[-7].v + v9) = *(float *)((char *)graph->knots[-6].v + v9);
          *(_DWORD *)((char *)&knots[-6] + v9 - 4) = *(_DWORD *)((char *)&knots[-5] + v9 - 4);
          v12 = graph->knots;
          *(float *)((char *)v12[-6].v + v9) = *(float *)((char *)graph->knots[-5].v + v9);
          *(_DWORD *)((char *)&v12[-5] + v9 - 4) = *(_DWORD *)((char *)&v12[-4] + v9 - 4);
          v13 = graph->knots;
          *(float *)((char *)v13[-5].v + v9) = *(float *)((char *)graph->knots[-4].v + v9);
          *(_DWORD *)((char *)&v13[-4] + v9 - 4) = *(_DWORD *)((char *)&v13[-3] + v9 - 4);
          v14 = graph->knots;
          *(float *)((char *)v14[-4].v + v9) = *(float *)((char *)graph->knots[-3].v + v9);
          *(_DWORD *)((char *)&v14[-3] + v9 - 4) = *(_DWORD *)((char *)&v14[-2] + v9 - 4);
          --v10;
        }
        while ( v10 );
      }
      for ( ; v7 < v6; ++v7 )
      {
        v15 = graph->knots;
        v15[v7].v[0] = graph->knots[v7 + 1].v[0];
        v15[v7].v[1] = v15[v7 + 1].v[1];
      }
    }
    graph->knots[v8 - 1].v[0] = -1.0;
    graph->knots[v8 - 1].v[1] = -1.0;
    --*graph->knotCount;
    eventCallback = graph->eventCallback;
    if ( eventCallback )
      eventCallback(graph, EVENT_UPDATE, localClientNum);
  }
}

/*
==============
DevGui_RemoveMenu
==============
*/
void DevGui_RemoveMenu(const char *path)
{
  unsigned __int16 v1; 
  int v2; 
  unsigned __int16 Menu; 
  DevMenuItem *v4; 
  unsigned __int16 nextSibling; 
  unsigned __int16 prevSibling; 
  DevMenuItem *v7; 
  unsigned __int8 childType; 
  __int16 sortKeyOut; 
  char *pathInOut; 
  char label[56]; 

  pathInOut = (char *)path;
  if ( DevGui_IsValidPath(path) )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = DevGui_PathToken((const char **)&pathInOut, label, &sortKeyOut);
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 643, ASSERT_TYPE_ASSERT, "(tokResult != DEVGUI_TOKEN_ERROR)", (const char *)&queryFormat, "tokResult != DEVGUI_TOKEN_ERROR") )
        __debugbreak();
      Menu = DevGui_FindMenu(v1, label);
      v1 = Menu;
      if ( !Menu )
        break;
      if ( v2 == 2 )
      {
        v4 = DevGui_GetMenu(Menu);
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 653, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
          __debugbreak();
        nextSibling = v4->nextSibling;
        if ( nextSibling )
          DevGui_GetMenu(nextSibling)->prevSibling = v4->prevSibling;
        prevSibling = v4->prevSibling;
        if ( prevSibling )
        {
          DevGui_GetMenu(prevSibling)->nextSibling = v4->nextSibling;
        }
        else
        {
          if ( !v4->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 666, ASSERT_TYPE_ASSERT, "(menu->parent)", (const char *)&queryFormat, "menu->parent") )
            __debugbreak();
          v7 = DevGui_GetMenu(v4->parent);
          if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 668, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
            __debugbreak();
          childType = v7->childType;
          if ( childType )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 669, ASSERT_TYPE_ASSERT, "(parent->childType == DEV_CHILD_MENU)", "%s\n\tmenu %s type %i", "parent->childType == DEV_CHILD_MENU", v7->label, childType) )
              __debugbreak();
          }
          v7->child.menu = v4->nextSibling;
        }
        *(_DWORD *)&v4->nextSibling = 0;
        DevGui_FreeMenu_r(v1);
        return;
      }
    }
  }
}

/*
==============
DevGui_Reset
==============
*/
void DevGui_Reset(void)
{
  *(_WORD *)&devguiGlob.bindNextKey = 0;
  devguiGlob.selectedMenu = 0;
  devguiGlob.editingMenuItem = 0;
}

/*
==============
DevGui_Resize
==============
*/
void DevGui_Resize(void)
{
  devguiGlob.left = DevGui_GetScreenLeft(&scrPlaceFull);
  devguiGlob.right = DevGui_GetScreenRight(&scrPlaceFull);
  devguiGlob.top = DevGui_GetScreenTop(&scrPlaceFull);
  devguiGlob.bottom = DevGui_GetScreenBottom(&scrPlaceFull);
  devguiGlob.slider.width = (devguiGlob.right - devguiGlob.left) / 2 + 100;
}

/*
==============
DevGui_ScrollDownInternal
==============
*/
__int64 DevGui_ScrollDownInternal()
{
  unsigned __int16 selectedMenu; 
  __int64 result; 
  DevMenuChild v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  while ( 1 )
  {
    DevGui_MoveDown();
    selectedMenu = devguiGlob.selectedMenu;
    if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
    {
      LODWORD(v5) = 8000;
      LODWORD(v4) = 1;
      LODWORD(v3) = devguiGlob.selectedMenu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v3, v4, v5) )
        __debugbreak();
    }
    result = devguiGlob.menus[selectedMenu - 1].childType;
    if ( (_BYTE)result == 3 )
      break;
    if ( (_BYTE)result == 1 )
    {
      v2.command = (const char *)devguiGlob.menus[selectedMenu - 1].child;
      result = *((unsigned __int8 *)v2.command + 29);
      if ( (_BYTE)result != 9 && ((_BYTE)result != 8 || *((_DWORD *)v2.command + 22)) )
        break;
    }
  }
  return result;
}

/*
==============
DevGui_ScrollUpInternal
==============
*/
__int64 DevGui_ScrollUpInternal()
{
  unsigned __int16 selectedMenu; 
  __int64 result; 
  DevMenuChild v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  while ( 1 )
  {
    DevGui_MoveUp();
    selectedMenu = devguiGlob.selectedMenu;
    if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
    {
      LODWORD(v5) = 8000;
      LODWORD(v4) = 1;
      LODWORD(v3) = devguiGlob.selectedMenu;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v3, v4, v5) )
        __debugbreak();
    }
    result = devguiGlob.menus[selectedMenu - 1].childType;
    if ( (_BYTE)result == 3 )
      break;
    if ( (_BYTE)result == 1 )
    {
      v2.command = (const char *)devguiGlob.menus[selectedMenu - 1].child;
      result = *((unsigned __int8 *)v2.command + 29);
      if ( (_BYTE)result != 9 && ((_BYTE)result != 8 || *((_DWORD *)v2.command + 22)) )
        break;
    }
  }
  return result;
}

/*
==============
DevGui_SelectNextMenuItem
==============
*/
__int64 DevGui_SelectNextMenuItem()
{
  DevMenuItem *Menu; 
  unsigned __int16 parent; 
  DevMenuItem *v2; 
  unsigned __int16 i; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1801, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
    __debugbreak();
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  parent = Menu->parent;
  if ( parent )
  {
    v2 = DevGui_GetMenu(parent);
    if ( Menu->nextSibling )
      ++v2->childMenuMemory;
    else
      v2->childMenuMemory = 0;
  }
  if ( Menu->nextSibling )
  {
    devguiGlob.selectedMenu = Menu->nextSibling;
    return DevGui_SelectTopLevelChild();
  }
  else
  {
    for ( i = Menu->prevSibling; i; i = devguiGlob.menus[i - 1].prevSibling )
    {
      devguiGlob.selectedMenu = i;
      if ( (unsigned __int16)(i - 1) > 0x1F3Fu )
      {
        LODWORD(v7) = 8000;
        LODWORD(v6) = 1;
        LODWORD(v5) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v5, v6, v7) )
          __debugbreak();
      }
    }
    return DevGui_SelectTopLevelChild();
  }
}

/*
==============
DevGui_SelectPrevMenuItem
==============
*/
__int64 DevGui_SelectPrevMenuItem()
{
  DevMenuItem *Menu; 
  unsigned __int16 parent; 
  DevMenuItem *v2; 
  unsigned __int16 prevSibling; 
  unsigned __int16 *i; 
  unsigned __int16 selectedMenu; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1766, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
    __debugbreak();
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  parent = Menu->parent;
  if ( parent )
    v2 = DevGui_GetMenu(parent);
  else
    v2 = NULL;
  prevSibling = Menu->prevSibling;
  if ( prevSibling )
  {
    if ( v2 )
    {
      --v2->childMenuMemory;
      prevSibling = Menu->prevSibling;
    }
    devguiGlob.selectedMenu = prevSibling;
    return DevGui_SelectTopLevelChild();
  }
  else
  {
    if ( v2 )
      v2->childMenuMemory = 0;
    for ( i = &Menu->nextSibling; *i; i = &devguiGlob.menus[selectedMenu - 1].nextSibling )
    {
      if ( v2 )
        ++v2->childMenuMemory;
      devguiGlob.selectedMenu = *i;
      selectedMenu = devguiGlob.selectedMenu;
      if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
      {
        LODWORD(v9) = 8000;
        LODWORD(v8) = 1;
        LODWORD(v7) = devguiGlob.selectedMenu;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v7, v8, v9) )
          __debugbreak();
      }
    }
    return DevGui_SelectTopLevelChild();
  }
}

/*
==============
DevGui_SelectTopLevelChild
==============
*/
void DevGui_SelectTopLevelChild()
{
  DevMenuItem *Menu; 
  unsigned __int8 childType; 
  __int64 v2; 

  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1749, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  if ( !Menu->parent )
  {
    childType = Menu->childType;
    if ( childType )
    {
      LODWORD(v2) = childType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1753, ASSERT_TYPE_ASSERT, "( ( menu->childType == DEV_CHILD_MENU ) )", "( menu->childType ) = %i", v2) )
        __debugbreak();
    }
    if ( !Menu->child.menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1754, ASSERT_TYPE_ASSERT, "(menu->child.menu)", (const char *)&queryFormat, "menu->child.menu") )
      __debugbreak();
    devguiGlob.selectedMenu = Menu->child.menu;
    DevGui_AdvanceChildNum(Menu->childMenuMemory);
  }
}

/*
==============
DevGui_SelectedDvar
==============
*/
const dvar_t *DevGui_SelectedDvar()
{
  DevMenuItem *Menu; 
  unsigned __int8 childType; 
  DevMenuChild v2; 

  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2080, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  childType = Menu->childType;
  if ( childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2081, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", "%s\n\tmenu %s type %i", "menu->childType == DEV_CHILD_DVAR", Menu->label, childType) )
    __debugbreak();
  v2.command = (const char *)Menu->child;
  if ( !v2.command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2083, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( menu->label ) = %s", Menu->label) )
    __debugbreak();
  return (const dvar_t *)v2.command;
}

/*
==============
DevGui_SetDvarBySliderFraction
==============
*/
void DevGui_SetDvarBySliderFraction(int componentIndex, float fraction)
{
  __int64 v3; 
  const dvar_t *v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  char v16; 
  float v17; 
  unsigned __int64 v35; 
  __int128 v36; 
  unsigned __int64 v38; 
  int v41; 
  float v42; 
  float v43; 
  float max; 
  __int64 source; 
  vec3_t rgb; 
  DvarValue latched; 

  v3 = componentIndex;
  v4 = DevGui_SelectedDvar();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3013, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( (int)v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3014, ASSERT_TYPE_ASSERT, "(componentIndex >= 0)", (const char *)&queryFormat, "componentIndex >= 0") )
    __debugbreak();
  switch ( v4->type )
  {
    case 0u:
      if ( (int)v3 >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3061, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      if ( fraction >= 0.5 != v4->latched.enabled )
        Dvar_SetBoolFromSource(v4, fraction >= 0.5, DVAR_SOURCE_DEVGUI);
      return;
    case 1u:
      if ( (int)v3 >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3020, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      v5 = (float)((float)(1.0 - fraction) * v4->domain.value.min) + (float)(fraction * v4->domain.value.max);
      if ( v5 != v4->latched.value )
        Dvar_SetFloatFromSource(v4, v5, DVAR_SOURCE_DEVGUI);
      return;
    case 2u:
      if ( (int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3029, ASSERT_TYPE_ASSERT, "(componentIndex < 2)", (const char *)&queryFormat, "componentIndex < 2") )
        __debugbreak();
      v6 = (float)(1.0 - fraction) * v4->domain.value.min;
      v7 = v4->latched.vector.v[1];
      v8 = v6 + (float)(fraction * v4->domain.value.max);
      LODWORD(rgb.v[0]) = v4->latched.integer;
      rgb.v[1] = v7;
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(source) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 2) )
          __debugbreak();
      }
      rgb.v[v3] = v8;
      if ( rgb.v[0] != v4->latched.value || rgb.v[1] != v4->latched.vector.v[1] )
        Dvar_SetVec2FromSource(v4, rgb.v[0], rgb.v[1], DVAR_SOURCE_DEVGUI);
      return;
    case 3u:
      if ( (int)v3 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3040, ASSERT_TYPE_ASSERT, "(componentIndex < 3)", (const char *)&queryFormat, "componentIndex < 3") )
        __debugbreak();
      v10 = (float)(1.0 - fraction) * v4->domain.value.min;
      v11 = v4->latched.vector.v[1];
      v12 = v10 + (float)(fraction * v4->domain.value.max);
      LODWORD(rgb.v[0]) = v4->latched.integer;
      rgb.v[2] = v4->latched.vector.v[2];
      rgb.v[1] = v11;
      if ( (unsigned int)v3 >= 3 )
      {
        LODWORD(source) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 3) )
          __debugbreak();
      }
      rgb.v[v3] = v12;
      v13 = rgb.v[0];
      v14 = rgb.v[2];
      v15 = rgb.v[1];
      if ( rgb.v[0] != v4->latched.value || rgb.v[1] != v4->latched.vector.v[1] || rgb.v[2] != v4->latched.vector.v[2] )
        goto LABEL_36;
      v16 = 1;
      goto LABEL_37;
    case 4u:
      if ( (int)v3 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3051, ASSERT_TYPE_ASSERT, "(componentIndex < 4)", (const char *)&queryFormat, "componentIndex < 4") )
        __debugbreak();
      v17 = (float)((float)(1.0 - fraction) * v4->domain.value.min) + (float)(fraction * v4->domain.value.max);
      latched = v4->latched;
      if ( (unsigned int)v3 >= 4 )
      {
        LODWORD(source) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 4) )
          __debugbreak();
      }
      *(&latched.value + v3) = v17;
      if ( latched.value != v4->latched.value || latched.vector.v[1] != v4->latched.vector.v[1] || latched.vector.v[2] != v4->latched.vector.v[2] || latched.vector.v[3] != v4->latched.vector.v[3] )
        Dvar_SetVec4FromSource(v4, latched.value, latched.vector.v[1], latched.vector.v[2], latched.vector.v[3], DVAR_SOURCE_DEVGUI);
      return;
    case 5u:
      if ( (int)v3 >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3069, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      _mm_cvtepi32_ps((__m128i)(unsigned int)v4->domain.enumeration.stringCount);
      _mm_cvtepi32_ps((__m128i)(unsigned int)v4->domain.integer.max);
      goto LABEL_62;
    case 6u:
      if ( (int)v3 >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3078, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      _XMM2 = 0i64;
      __asm { vcvtsi2sd xmm2, xmm2, qword ptr [rbx+58h] }
      _XMM2 = 0i64;
      __asm
      {
        vcvtsi2sd xmm2, xmm2, qword ptr [rbx+60h]
        vxorpd  xmm2, xmm2, xmm2
        vroundsd xmm2, xmm2, xmm3, 1
        vcvttsd2si rdx, xmm2; value
      }
      if ( _RDX != v4->latched.integer64 )
        Dvar_SetInt64FromSource(v4, _RDX, DVAR_SOURCE_DEVGUI);
      return;
    case 7u:
      if ( (int)v3 >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3087, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      _XMM3 = *(unsigned __int64 *)&DOUBLE_1_844674407370955e19;
      _XMM2 = 0i64;
      __asm { vcvtsi2sd xmm2, xmm2, rax }
      _XMM0 = 0i64;
      __asm
      {
        vcvtsi2sd xmm0, xmm0, rax
        vxorpd  xmm3, xmm3, xmm3
        vroundsd xmm3, xmm3, xmm2, 1
      }
      v35 = 0i64;
      if ( *(double *)&_XMM3 >= 9.223372036854776e18 )
      {
        *((_QWORD *)&v36 + 1) = *((_QWORD *)&_XMM3 + 1);
        *(double *)&v36 = *(double *)&_XMM3 - 9.223372036854776e18;
        _XMM3 = v36;
        if ( *(double *)&v36 < 9.223372036854776e18 )
          v35 = 0x8000000000000000ui64;
      }
      __asm { vcvttsd2si rdx, xmm3 }
      v38 = v35 + _RDX;
      if ( v38 != v4->latched.integer64 )
        Dvar_SetUInt64FromSource(v4, v38, DVAR_SOURCE_DEVGUI);
      return;
    case 8u:
      if ( (int)v3 >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3096, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
LABEL_62:
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      if ( (int)*(float *)&_XMM1 != v4->latched.integer )
        Dvar_SetIntFromSource(v4, (int)*(float *)&_XMM1, DVAR_SOURCE_DEVGUI);
      return;
    case 0xAu:
      if ( (int)v3 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3105, ASSERT_TYPE_ASSERT, "(componentIndex < 3)", (const char *)&queryFormat, "componentIndex < 3") )
        __debugbreak();
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      v41 = (int)*(float *)&_XMM4;
      if ( ((int)*(float *)&_XMM4 < 0 || (unsigned int)v41 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v41, "signed", v41) )
        __debugbreak();
      if ( (_BYTE)v41 != *(&v4->latched.enabled + v3) )
      {
        LODWORD(rgb.v[0]) = v4->latched.integer;
        *((_BYTE *)rgb.v + v3) = v41;
        Dvar_SetColorFromSource(v4, (float)LOBYTE(rgb.v[0]), (float)BYTE1(rgb.v[0]), (float)BYTE2(rgb.x), (float)HIBYTE(rgb.x), DVAR_SOURCE_DEVGUI);
      }
      return;
    case 0xBu:
      v42 = v4->latched.vector.v[1];
      LODWORD(rgb.v[0]) = v4->latched.integer;
      rgb.v[2] = v4->latched.vector.v[2];
      rgb.v[1] = v42;
      if ( (int)v3 >= 3 )
      {
        if ( (int)v3 >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3127, ASSERT_TYPE_ASSERT, "(componentIndex < 6)", (const char *)&queryFormat, "componentIndex < 6") )
          __debugbreak();
        DevGui_Vec3ToHSV(&rgb, (vec3_t *)&latched, v4->domain.value.max);
        if ( (unsigned int)(v3 - 3) >= 3 )
        {
          LODWORD(source) = v3 - 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 3) )
            __debugbreak();
        }
        max = v4->domain.value.max;
        rgb.v[v3 + 1] = fraction;
        DevGui_Vec3FromHSV(&rgb, (const vec3_t *)&latched, max);
      }
      else
      {
        v43 = (float)((float)(1.0 - fraction) * v4->domain.value.min) + (float)(fraction * v4->domain.value.max);
        if ( (unsigned int)v3 >= 3 )
        {
          LODWORD(source) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 3) )
            __debugbreak();
        }
        rgb.v[v3] = v43;
      }
      v13 = rgb.v[0];
      v14 = rgb.v[2];
      v15 = rgb.v[1];
      if ( rgb.v[0] == v4->latched.value && rgb.v[1] == v4->latched.vector.v[1] && rgb.v[2] == v4->latched.vector.v[2] )
        v16 = 1;
      else
LABEL_36:
        v16 = 0;
LABEL_37:
      if ( !v16 )
        Dvar_SetVec3FromSource(v4, v13, v15, v14, DVAR_SOURCE_DEVGUI);
      return;
    default:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3138, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
  }
}

/*
==============
DevGui_ShouldClipMouseCursor
==============
*/
bool DevGui_ShouldClipMouseCursor()
{
  return devguiGlob.isActive && devguiGlob.editingMenuItem && DevGui_GetMenu(devguiGlob.selectedMenu)->childType == 1 && (devguiGlob.slider.held || devguiGlob.slider.knobHeld);
}

/*
==============
DevGui_ShouldShowMouseCursor
==============
*/
char DevGui_ShouldShowMouseCursor()
{
  bool isActive; 

  isActive = devguiGlob.isActive;
  if ( devguiGlob.isActive )
  {
    if ( devguiGlob.editingMenuItem )
    {
      if ( DevGui_GetMenu(devguiGlob.selectedMenu)->childType == 1 )
        return 1;
      isActive = devguiGlob.isActive;
    }
    if ( isActive && !devgui_allowMouse->current.enabled )
      return 1;
  }
  return 0;
}

/*
==============
DevGui_Shutdown
==============
*/
void DevGui_Shutdown(void)
{
  DevGui_InputShutdown();
  DevGui_FreeMenu_r(devguiGlob.topmostMenu.child.menu);
}

/*
==============
DevGui_Toggle
==============
*/
void DevGui_Toggle(void)
{
  unsigned __int16 menu; 
  int v1; 

  menu = devguiGlob.topmostMenu.child.menu;
  if ( devguiGlob.topmostMenu.child.menu )
  {
    if ( devguiGlob.selectedMenu )
      goto LABEL_12;
    if ( devguiGlob.isActive )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3394, ASSERT_TYPE_ASSERT, "(!devguiGlob.isActive)", (const char *)&queryFormat, "!devguiGlob.isActive") )
        __debugbreak();
      menu = devguiGlob.topmostMenu.child.menu;
    }
    devguiGlob.selectedMenu = menu;
    if ( menu )
    {
      DevGui_SelectTopLevelChild();
      if ( devguiGlob.selectedMenu )
      {
LABEL_12:
        devguiGlob.isActive = !devguiGlob.isActive;
        if ( devguiGlob.isActive )
        {
          v1 = Cmd_LocalControllerIndex();
          DevGui_SelectGamepad(v1);
        }
      }
    }
  }
  else if ( devguiGlob.isActive != LOBYTE(devguiGlob.topmostMenu.child.command) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3388, ASSERT_TYPE_ASSERT, "(!devguiGlob.isActive)", (const char *)&queryFormat, "!devguiGlob.isActive") )
  {
    __debugbreak();
  }
}

/*
==============
DevGui_Update
==============
*/
void DevGui_Update(LocalClientNum_t localClientNum, float deltaTime)
{
  unsigned int v2; 
  __int64 v4; 
  bool v5; 
  int IsKeyDown; 
  char v7; 
  DevMenuItem *Menu; 
  int updated; 
  BOOL v10; 
  int MenuScroll; 
  BOOL v12; 
  bool v13; 
  __int64 v14; 
  int ControllerFromClient; 
  int MouseY; 
  int MouseX; 
  int v18; 
  int v19; 
  unsigned __int16 selectedMenu; 
  int v21; 
  DevMenuItem *v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 heldButtonHandle; 
  bool v26; 
  DevMenuItem *v27; 
  DevMenuItem *v28; 
  unsigned __int16 parent; 
  unsigned __int16 v30; 
  int v31; 
  int origin; 
  int top; 

  v2 = 0;
  do
  {
    v4 = v2;
    v5 = devguiGlob.mouseButtonDown[v2];
    IsKeyDown = CL_Keys_IsKeyDown(localClientNum, v2 + 187);
    devguiGlob.mouseButtonDownPrev[v2++] = v5;
    devguiGlob.mouseButtonDown[v4] = IsKeyDown != 0;
    v7 = v5 ^ (IsKeyDown != 0);
    devguiGlob.mouseButtonPressed[v4] = (IsKeyDown != 0) & v7;
    devguiGlob.mouseButtonReleased[v4] = v5 & v7;
  }
  while ( v2 != 2 );
  devguiGlob.focusButtonHandle = 0;
  devguiGlob.slider.focus = 0;
  devguiGlob.slider.knobFocus = 0;
  if ( !devguiGlob.isActive || !devguiGlob.editingMenuItem || DevGui_GetMenu(devguiGlob.selectedMenu)->childType != 1 )
  {
    devguiGlob.slider.held = 0;
    devguiGlob.slider.knobHeld = 0;
  }
  if ( devguiGlob.isActive && !devguiGlob.bindNextKey && DevGui_InputUpdate(localClientNum, deltaTime, 1) )
  {
    if ( DevGui_IsButtonReleased(INPUT_BIND) && devguiGlob.selectedMenu )
    {
      devguiGlob.bindNextKey = 1;
    }
    else
    {
      Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
      if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3324, ASSERT_TYPE_ASSERT, "(selMenuItem)", (const char *)&queryFormat, "selMenuItem") )
        __debugbreak();
      if ( devguiGlob.editingMenuItem && Menu->childType == 3 )
      {
        DevGui_UpdateGraph(localClientNum, deltaTime);
      }
      else
      {
        updated = 0;
        if ( devguiGlob.editingMenuItem )
        {
          if ( Menu->childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3336, ASSERT_TYPE_ASSERT, "(selMenuItem->childType == DEV_CHILD_DVAR)", (const char *)&queryFormat, "selMenuItem->childType == DEV_CHILD_DVAR") )
            __debugbreak();
          DevGui_UpdateDvar(deltaTime);
          if ( devguiGlob.moveSelectionDelay <= 0.0 && !devguiGlob.heldButtonHandle && !devguiGlob.slider.held && !devguiGlob.slider.knobHeld )
            updated = DevGui_UpdateSelection();
        }
        else if ( devguiGlob.moveSelectionDelay <= 0.0 && !devguiGlob.heldButtonHandle && !devguiGlob.slider.held && !devguiGlob.slider.knobHeld )
        {
          v10 = DevGui_MoveSelectionHorizontally();
          MenuScroll = DevGui_GetMenuScroll(SCROLL_YAXIS);
          v12 = MenuScroll != 0;
          v13 = MenuScroll <= 0;
          if ( MenuScroll < 0 )
          {
            v14 = (unsigned int)-MenuScroll;
            MenuScroll = 0;
            do
            {
              DevGui_MoveDown();
              --v14;
            }
            while ( v14 );
            v13 = 1;
          }
          if ( !v13 )
          {
            do
            {
              DevGui_MoveUp();
              --MenuScroll;
            }
            while ( MenuScroll > 0 );
          }
          updated = v12 || v10;
        }
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        if ( IN_IsMouseActive(ControllerFromClient) )
        {
          if ( devguiGlob.editingMenuItem )
          {
            if ( devguiGlob.isActive && DevGui_GetMenu(devguiGlob.selectedMenu)->childType == 1 )
            {
              MouseY = DevGui_GetMouseY();
              MouseX = DevGui_GetMouseX();
              DevGui_MouseEditSlider(localClientNum, MouseX, MouseY, deltaTime);
            }
            else if ( (devguiGlob.slider.held || devguiGlob.slider.knobHeld) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3242, ASSERT_TYPE_ASSERT, "(isEditingSlider || !( devguiGlob.slider.held || devguiGlob.slider.knobHeld ))", (const char *)&queryFormat, "isEditingSlider || !( devguiGlob.slider.held || devguiGlob.slider.knobHeld )") )
            {
              __debugbreak();
            }
          }
          else
          {
            origin = devguiGlob.left;
            top = devguiGlob.top;
            DevGui_ChooseOrigin(&origin);
            v18 = DevGui_GetMouseY();
            v19 = DevGui_GetMouseX();
            selectedMenu = devguiGlob.selectedMenu;
            v21 = v19;
            v22 = DevGui_GetMenu(devguiGlob.selectedMenu);
            v23 = DevGui_PickMenu(v22->parent, selectedMenu, v21, v18, &origin);
            v24 = v23;
            devguiGlob.focusButtonHandle = v23;
            if ( devguiGlob.heldButtonHandle )
            {
              if ( !devguiGlob.mouseButtonDown[0] )
              {
                if ( v23 == devguiGlob.heldButtonHandle )
                {
                  devguiGlob.selectedMenu = devguiGlob.heldButtonHandle;
                  DevGui_Accept(localClientNum);
                }
                devguiGlob.heldButtonHandle = 0;
              }
            }
            else
            {
              heldButtonHandle = devguiGlob.heldButtonHandle;
              if ( devguiGlob.mouseButtonPressed[0] )
                heldButtonHandle = v24;
              devguiGlob.heldButtonHandle = heldButtonHandle;
            }
          }
        }
        devguiGlob.moveSelectionDelay = devguiGlob.moveSelectionDelay - deltaTime;
        if ( updated )
          LODWORD(devguiGlob.moveSelectionDelay) = devgui_moveSelectionDelay->current.integer;
        if ( !devguiGlob.heldButtonHandle && !devguiGlob.slider.held && !devguiGlob.slider.knobHeld )
        {
          v26 = devguiGlob.mouseButtonReleased[1];
          if ( DevGui_IsButtonReleased(INPUT_ACCEPT) || v26 )
            DevGui_Accept(localClientNum);
          if ( DevGui_IsButtonReleased(INPUT_REJECT) )
          {
            devguiGlob.heldButtonHandle = 0;
            if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2008, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
              __debugbreak();
            v27 = DevGui_GetMenu(devguiGlob.selectedMenu);
            v28 = v27;
            if ( devguiGlob.editingMenuItem )
            {
              Dvar_ClearLatchedValue(v27->child.dvar);
              devguiGlob.editingMenuItem = 0;
            }
            else
            {
              parent = v27->parent;
              if ( parent && DevGui_GetMenu(parent)->parent )
              {
                devguiGlob.selectedMenu = v28->parent;
              }
              else
              {
                v30 = devguiGlob.topmostMenu.child.menu;
                if ( devguiGlob.topmostMenu.child.menu )
                {
                  if ( devguiGlob.selectedMenu )
                    goto LABEL_84;
                  if ( devguiGlob.isActive )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3394, ASSERT_TYPE_ASSERT, "(!devguiGlob.isActive)", (const char *)&queryFormat, "!devguiGlob.isActive") )
                      __debugbreak();
                    v30 = devguiGlob.topmostMenu.child.menu;
                  }
                  devguiGlob.selectedMenu = v30;
                  if ( v30 )
                  {
                    DevGui_SelectTopLevelChild();
                    if ( devguiGlob.selectedMenu )
                    {
LABEL_84:
                      devguiGlob.isActive = !devguiGlob.isActive;
                      if ( devguiGlob.isActive )
                      {
                        v31 = Cmd_LocalControllerIndex();
                        DevGui_SelectGamepad(v31);
                      }
                    }
                  }
                }
                else if ( devguiGlob.isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3388, ASSERT_TYPE_ASSERT, "(!devguiGlob.isActive)", (const char *)&queryFormat, "!devguiGlob.isActive") )
                {
                  __debugbreak();
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
DevGui_UpdateDvar
==============
*/
void DevGui_UpdateDvar(float deltaTime)
{
  const dvar_t *v2; 
  float v3; 
  double updated; 
  float max; 
  float min; 
  float v7; 
  __int64 selRow; 
  float v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  bool v25; 
  int v26; 
  int stringCount; 
  int v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  float v32; 
  int v33; 
  float v34; 
  float v35; 
  int v36; 
  float v37; 
  int v38; 
  __int64 v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  int v45; 
  int v46; 
  float v47; 
  __int64 axis; 
  __int64 axisa; 
  __int64 axisb; 
  __int64 axisc; 
  __int64 axisd; 
  __int64 axise; 
  __int64 minChange; 
  __int64 minChangea; 
  __int64 minChangeb; 
  __int64 minChangec; 
  __int64 minChanged; 
  __int64 minChangee; 
  DvarValue latched; 
  vec3_t hsv; 

  v2 = DevGui_SelectedDvar();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2243, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  switch ( v2->type )
  {
    case 0u:
      v25 = DevGui_UpdateIntScroll(deltaTime, v2->latched.enabled, 0, 1, SCROLL_XAXIS) != 0;
      if ( v25 != v2->latched.enabled )
        Dvar_SetBoolFromSource(v2, v25, DVAR_SOURCE_DEVGUI);
      return;
    case 1u:
      v3 = DevGui_PickFloatScrollStep(v2->domain.value.min, COERCE_DOUBLE((unsigned __int64)v2->domain.integer.max), v2->domain.value.devguiStep);
      updated = DevGui_UpdateFloatScroll(deltaTime, v2->latched.value, v2->domain.value.min, v2->domain.value.max, v3, SCROLL_XAXIS, 0.0);
      if ( *(float *)&updated != v2->latched.value )
        Dvar_SetFloatFromSource(v2, deltaTime, DVAR_SOURCE_DEVGUI);
      return;
    case 2u:
      max = v2->domain.value.max;
      min = v2->domain.value.min;
      v7 = DevGui_PickFloatScrollStep(min, COERCE_DOUBLE((unsigned __int64)LODWORD(max)), v2->domain.value.devguiStep);
      selRow = devguiGlob.selRow;
      v9 = v2->latched.vector.v[1];
      latched.integer = v2->latched.integer;
      latched.vector.v[1] = v9;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
      }
      DevGui_UpdateFloatScroll(deltaTime, *(&latched.value + selRow), min, max, v7, SCROLL_XAXIS, 0.0);
      v10 = devguiGlob.selRow;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(minChangea) = 4;
        LODWORD(axisa) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisa, minChangea) )
          __debugbreak();
      }
      *(&latched.value + v10) = deltaTime;
      if ( latched.value != v2->latched.value || latched.vector.v[1] != v2->latched.vector.v[1] )
        Dvar_SetVec2FromSource(v2, latched.value, latched.vector.v[1], DVAR_SOURCE_DEVGUI);
      return;
    case 3u:
      v11 = v2->domain.value.max;
      v12 = v2->domain.value.min;
      v13 = DevGui_PickFloatScrollStep(v12, COERCE_DOUBLE((unsigned __int64)LODWORD(v11)), v2->domain.value.devguiStep);
      v14 = devguiGlob.selRow;
      v15 = v2->latched.vector.v[1];
      latched.integer = v2->latched.integer;
      latched.vector.v[2] = v2->latched.vector.v[2];
      latched.vector.v[1] = v15;
      v16 = v13;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
      }
      v17 = v11;
      v18 = v12;
      goto LABEL_20;
    case 4u:
      v20 = v2->domain.value.max;
      v21 = v2->domain.value.min;
      v22 = DevGui_PickFloatScrollStep(v21, COERCE_DOUBLE((unsigned __int64)LODWORD(v20)), v2->domain.value.devguiStep);
      v23 = devguiGlob.selRow;
      latched = v2->latched;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
      }
      DevGui_UpdateFloatScroll(deltaTime, *(&latched.value + v23), v21, v20, v22, SCROLL_XAXIS, 0.0);
      v24 = devguiGlob.selRow;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(minChangec) = 4;
        LODWORD(axisc) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisc, minChangec) )
          __debugbreak();
      }
      *(&latched.value + v24) = deltaTime;
      if ( latched.value != v2->latched.value || latched.vector.v[1] != v2->latched.vector.v[1] || latched.vector.v[2] != v2->latched.vector.v[2] || latched.vector.v[3] != v2->latched.vector.v[3] )
        Dvar_SetVec4FromSource(v2, latched.value, latched.vector.v[1], latched.vector.v[2], latched.vector.v[3], DVAR_SOURCE_DEVGUI);
      return;
    case 5u:
      v26 = v2->domain.integer.max;
      stringCount = v2->domain.enumeration.stringCount;
      goto LABEL_42;
    case 6u:
      v29 = DevGui_UpdateInt64Scroll(deltaTime, v2->latched.integer64, v2->domain.integer64.min, v2->domain.integer64.max, SCROLL_XAXIS);
      goto LABEL_45;
    case 7u:
      v29 = DevGui_UpdateUInt64Scroll(deltaTime, v2->latched.unsignedInt64, v2->domain.unsignedInt64.min, v2->domain.unsignedInt64.max, SCROLL_XAXIS);
LABEL_45:
      if ( v29 != v2->latched.integer64 )
        Dvar_SetInt64FromSource(v2, v29, DVAR_SOURCE_DEVGUI);
      break;
    case 8u:
      v26 = v2->domain.enumeration.stringCount - 1;
      stringCount = 0;
LABEL_42:
      v28 = DevGui_UpdateIntScroll(deltaTime, v2->latched.integer, stringCount, v26, SCROLL_XAXIS);
      if ( v28 != v2->latched.integer )
        Dvar_SetIntFromSource(v2, v28, DVAR_SOURCE_DEVGUI);
      break;
    case 0xAu:
      v30 = devguiGlob.selRow;
      v31 = devguiGlob.selRow;
      v32 = (float)v2->latched.color[1];
      v33 = v2->latched.color[2];
      latched.value = (float)v2->latched.color[0] * 0.0039215689;
      v34 = v32 * 0.0039215689;
      v35 = (float)v33;
      v36 = v2->latched.color[3];
      latched.vector.v[1] = v34;
      latched.vector.v[2] = v35 * 0.0039215689;
      latched.vector.v[3] = (float)v36 * 0.0039215689;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
        v30 = devguiGlob.selRow;
      }
      v37 = *(&latched.value + v31);
      if ( (unsigned int)v30 >= 4 )
      {
        LODWORD(minChange) = 4;
        LODWORD(axis) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, minChange) )
          __debugbreak();
      }
      DevGui_UpdateFloatScroll(deltaTime, *(&latched.value + v30), 0.0, 1.0, 0.0039215689, SCROLL_XAXIS, 0.0039215689);
      v38 = devguiGlob.selRow;
      v39 = devguiGlob.selRow;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(minChanged) = 4;
        LODWORD(axisd) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisd, minChanged) )
          __debugbreak();
        v38 = devguiGlob.selRow;
      }
      *(&latched.value + v39) = deltaTime;
      if ( (unsigned int)v38 >= 4 )
      {
        LODWORD(minChanged) = 4;
        LODWORD(axisd) = v38;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisd, minChanged) )
          __debugbreak();
      }
      if ( v37 != *(&latched.value + v38) )
        Dvar_SetColorFromSource(v2, latched.value, latched.vector.v[1], latched.vector.v[2], latched.vector.v[3], DVAR_SOURCE_DEVGUI);
      break;
    case 0xBu:
      v40 = DevGui_PickFloatScrollStep(0.0, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_1_0)), 0.0);
      v41 = v2->latched.vector.v[1];
      latched.integer = v2->latched.integer;
      latched.vector.v[2] = v2->latched.vector.v[2];
      latched.vector.v[1] = v41;
      v16 = v40;
      if ( devguiGlob.selRow >= 3 )
      {
        if ( devguiGlob.selRow >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2331, ASSERT_TYPE_ASSERT, "(devguiGlob.selRow < 6)", (const char *)&queryFormat, "devguiGlob.selRow < 6") )
          __debugbreak();
        DevGui_Vec3ToHSV((const vec3_t *)&latched, &hsv, v2->domain.value.max);
        v45 = devguiGlob.selRow - 3;
        if ( (unsigned int)(devguiGlob.selRow - 3) >= 3 )
        {
          LODWORD(axis) = devguiGlob.selRow - 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
            __debugbreak();
        }
        DevGui_UpdateFloatScroll(deltaTime, hsv.v[v45], 0.0, 1.0, v40, SCROLL_XAXIS, 0.0);
        v46 = devguiGlob.selRow - 3;
        if ( (unsigned int)(devguiGlob.selRow - 3) >= 3 )
        {
          LODWORD(minChangee) = 3;
          LODWORD(axise) = devguiGlob.selRow - 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axise, minChangee) )
            __debugbreak();
        }
        v47 = v2->domain.value.max;
        hsv.v[v46] = deltaTime;
        DevGui_Vec3FromHSV((vec3_t *)&latched, &hsv, v47);
      }
      else
      {
        v42 = v2->domain.value.min;
        if ( v42 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2324, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", v42) )
          __debugbreak();
        v43 = v2->domain.value.max;
        if ( v43 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2325, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", v43) )
          __debugbreak();
        v14 = devguiGlob.selRow;
        v44 = v2->domain.value.max;
        if ( devguiGlob.selRow >= 4u )
        {
          LODWORD(axis) = devguiGlob.selRow;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
            __debugbreak();
        }
        v17 = v44;
        v18 = 0.0;
LABEL_20:
        DevGui_UpdateFloatScroll(deltaTime, *(&latched.value + v14), v18, v17, v16, SCROLL_XAXIS, 0.0);
        v19 = devguiGlob.selRow;
        if ( devguiGlob.selRow >= 4u )
        {
          LODWORD(minChangeb) = 4;
          LODWORD(axisb) = devguiGlob.selRow;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisb, minChangeb) )
            __debugbreak();
        }
        *(&latched.value + v19) = deltaTime;
      }
      if ( latched.value != v2->latched.value || latched.vector.v[1] != v2->latched.vector.v[1] || latched.vector.v[2] != v2->latched.vector.v[2] )
        Dvar_SetVec3FromSource(v2, latched.value, latched.vector.v[1], latched.vector.v[2], DVAR_SOURCE_DEVGUI);
      break;
    default:
      LODWORD(axis) = v2->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2343, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "invalid dvar type %i", axis) )
        __debugbreak();
      break;
  }
}

/*
==============
DevGui_UpdateGraph
==============
*/
void DevGui_UpdateGraph(LocalClientNum_t localClientNum, float deltaTime)
{
  DevMenuItem *Menu; 
  DevGraph *graph; 
  int v5; 
  int selectedKnot; 
  void (__fastcall *eventCallback)(const DevGraph *, DevEventType, LocalClientNum_t); 
  void (__fastcall *v8)(const DevGraph *, DevEventType, LocalClientNum_t); 
  void (__fastcall *v9)(const DevGraph *, DevEventType, LocalClientNum_t); 
  __int64 v10; 
  float v11; 
  float v12; 
  double updated; 
  float v14; 
  double v15; 
  __int64 v16; 
  float v17; 
  bool v18; 
  double v19; 
  double v20; 
  void (__fastcall *v21)(const DevGraph *, DevEventType, LocalClientNum_t); 
  __int16 MenuScroll; 
  int v23; 
  int v24; 

  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  if ( !Menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2445, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  if ( Menu->childType != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2446, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_GRAPH)", (const char *)&queryFormat, "menu->childType == DEV_CHILD_GRAPH") )
    __debugbreak();
  if ( !Menu->child.command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2447, ASSERT_TYPE_ASSERT, "(menu->child.graph)", (const char *)&queryFormat, "menu->child.graph") )
    __debugbreak();
  graph = Menu->child.graph;
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2451, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->knots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2451, ASSERT_TYPE_ASSERT, "(graph->knots)", (const char *)&queryFormat, "graph->knots") )
    __debugbreak();
  if ( !graph->knotCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2451, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
    __debugbreak();
  if ( !graph->knotCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2451, ASSERT_TYPE_ASSERT, "(graph->knotCountMax > 0)", (const char *)&queryFormat, "graph->knotCountMax > 0") )
    __debugbreak();
  v5 = *graph->knotCount;
  if ( ((unsigned int)v5 < 2 || v5 > (unsigned int)graph->knotCountMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2454, ASSERT_TYPE_ASSERT, "(currentKnotCount >= 2 && currentKnotCount <= graph->knotCountMax)", (const char *)&queryFormat, "currentKnotCount >= 2 && currentKnotCount <= graph->knotCountMax") )
    __debugbreak();
  selectedKnot = graph->selectedKnot;
  if ( selectedKnot < 0 || selectedKnot >= v5 )
    graph->selectedKnot = 0;
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_EDIT) )
    devguiGlob.editingKnot = !devguiGlob.editingKnot;
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_ADD) )
  {
    DevGui_AddGraphKnot(graph, localClientNum);
    devguiGlob.editingKnot = 0;
    return;
  }
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_REMOVE) )
  {
    DevGui_RemoveGraphKnot(graph, localClientNum);
    devguiGlob.editingKnot = 0;
    return;
  }
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_SAVE) )
  {
    eventCallback = graph->eventCallback;
    if ( eventCallback )
      eventCallback(graph, EVENT_SAVE, localClientNum);
  }
  else if ( DevGui_IsButtonPressed(INPUT_ACCEPT) )
  {
    v8 = graph->eventCallback;
    if ( v8 )
      v8(graph, EVENT_ACCEPT, localClientNum);
  }
  else if ( DevGui_IsButtonPressed(INPUT_REJECT) )
  {
    v9 = graph->eventCallback;
    if ( v9 )
      v9(graph, EVENT_DEACTIVATE, localClientNum);
    devguiGlob.editingMenuItem = 0;
  }
  else if ( devguiGlob.editingKnot )
  {
    v10 = graph->selectedKnot;
    v11 = graph->knots[v10].v[1];
    v12 = graph->knots[v10].v[0];
    updated = DevGui_UpdateFloatScroll(deltaTime, v12, 0.0, 1.0, 0.029999999, SCROLL_XAXIS, 0.0);
    v14 = *(float *)&updated;
    v15 = DevGui_UpdateFloatScroll(deltaTime, v11, 0.0, 1.0, 0.029999999, SCROLL_YAXIS, 0.0);
    v16 = graph->selectedKnot;
    if ( (int)v16 <= 0 || (int)v16 + 1 >= v5 )
    {
      if ( graph->disableEditingEndPoints )
        return;
      graph->knots[v16].v[1] = (float)((float)(*(float *)&v15 - v11) * 4.0) + graph->knots[v16].v[1];
      v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v15 - v11) & _xmm) > 0.000001;
    }
    else
    {
      v17 = *(float *)&v15 - v11;
      v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v12) & _xmm) > 0.000001 || COERCE_FLOAT(LODWORD(v17) & _xmm) > 0.000001;
      graph->knots[v16].v[0] = (float)((float)(v14 - v12) * 3.0) + graph->knots[v16].v[0];
      graph->knots[graph->selectedKnot].v[1] = (float)(v17 * 4.0) + graph->knots[graph->selectedKnot].v[1];
      v19 = I_fclamp(graph->knots[graph->selectedKnot].v[0], graph->knots[graph->selectedKnot - 1].v[0] + 0.0049999999, graph->knots[graph->selectedKnot + 1].v[0] - 0.0049999999);
      graph->knots[graph->selectedKnot].v[0] = *(float *)&v19;
    }
    v20 = I_fclamp(graph->knots[graph->selectedKnot].v[1], 0.0, 1.0);
    graph->knots[graph->selectedKnot].v[1] = *(float *)&v20;
    if ( v18 )
    {
      v21 = graph->eventCallback;
      if ( v21 )
        v21(graph, EVENT_UPDATE, localClientNum);
    }
  }
  else
  {
    MenuScroll = DevGui_GetMenuScroll(SCROLL_XAXIS);
    if ( MenuScroll >= 0 || (v23 = graph->selectedKnot, v23 <= 0) )
    {
      if ( MenuScroll > 0 )
      {
        v24 = graph->selectedKnot + 1;
        if ( v5 > v24 )
          graph->selectedKnot = v24;
      }
      DevGui_UpdateSelection();
    }
    else
    {
      graph->selectedKnot = v23 - 1;
      DevGui_UpdateSelection();
    }
  }
}

/*
==============
DevGui_UpdateSelection
==============
*/
__int64 DevGui_UpdateSelection()
{
  __int16 MenuScroll; 
  int v1; 
  unsigned int v2; 
  int v3; 
  bool v4; 
  __int64 v5; 
  unsigned __int16 selectedMenu; 
  unsigned __int8 childType; 
  const dvar_t *v8; 
  int v9; 
  int v10; 
  unsigned __int16 v11; 
  unsigned __int8 v12; 
  const dvar_t *v13; 
  int v14; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 

  MenuScroll = DevGui_GetMenuScroll(SCROLL_YAXIS);
  v1 = MenuScroll;
  v2 = 0;
  v19 = MenuScroll;
  v3 = MenuScroll;
  v4 = MenuScroll <= 0;
  if ( MenuScroll < 0 )
  {
    v5 = (unsigned int)-MenuScroll;
    while ( 1 )
    {
      selectedMenu = devguiGlob.selectedMenu;
      if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
      {
        LODWORD(v18) = 8000;
        LODWORD(v17) = 1;
        LODWORD(v16) = devguiGlob.selectedMenu;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v16, v17, v18) )
          __debugbreak();
      }
      childType = devguiGlob.menus[selectedMenu - 1].childType;
      if ( childType != 3 )
      {
        if ( childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2157, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", (const char *)&queryFormat, "menu->childType == DEV_CHILD_DVAR") )
          __debugbreak();
        v8 = DevGui_SelectedDvar();
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2160, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
          __debugbreak();
        switch ( v8->type )
        {
          case 2u:
            v9 = 2;
            goto LABEL_22;
          case 3u:
            v9 = 3;
            goto LABEL_22;
          case 4u:
          case 0xAu:
            v9 = 4;
            goto LABEL_22;
          case 0xBu:
            v9 = 6;
LABEL_22:
            v10 = devguiGlob.selRow + 1;
            if ( devguiGlob.selRow + 1 == v9 )
              v10 = 0;
            devguiGlob.selRow = v10;
            goto LABEL_26;
        }
      }
      DevGui_ScrollDownInternal();
LABEL_26:
      if ( !--v5 )
      {
        v1 = 0;
        v3 = v19;
        v4 = 1;
        break;
      }
    }
  }
  if ( !v4 )
  {
    while ( 1 )
    {
      v11 = devguiGlob.selectedMenu;
      if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
      {
        LODWORD(v18) = 8000;
        LODWORD(v17) = 1;
        LODWORD(v16) = devguiGlob.selectedMenu;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", v16, v17, v18) )
          __debugbreak();
      }
      v12 = devguiGlob.menus[v11 - 1].childType;
      if ( v12 != 3 )
      {
        if ( v12 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2114, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", (const char *)&queryFormat, "menu->childType == DEV_CHILD_DVAR") )
          __debugbreak();
        v13 = DevGui_SelectedDvar();
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2117, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
          __debugbreak();
        switch ( v13->type )
        {
          case 2u:
            v14 = 1;
LABEL_48:
            if ( devguiGlob.selRow )
              --devguiGlob.selRow;
            else
              devguiGlob.selRow = v14;
            goto LABEL_52;
          case 3u:
            v14 = 2;
            goto LABEL_48;
          case 4u:
          case 0xAu:
            v14 = 3;
            goto LABEL_48;
          case 0xBu:
            v14 = 5;
            goto LABEL_48;
        }
      }
      DevGui_ScrollUpInternal();
LABEL_52:
      if ( --v1 <= 0 )
      {
        v3 = v19;
        break;
      }
    }
  }
  LOBYTE(v2) = v3 != 0;
  return v2;
}

/*
==============
DevGui_Vec3FromHSV
==============
*/
void DevGui_Vec3FromHSV(vec3_t *rgb, const vec3_t *hsv, float scale)
{
  float v7; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  if ( scale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1210, ASSERT_TYPE_ASSERT, "( ( scale > 0.0f ) )", "( scale ) = %g", scale) )
    __debugbreak();
  v7 = hsv->v[0];
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( (hsv->v[0] < 0.0 || v7 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1211, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[0] ) && ( hsv[0] ) <= ( 1.0f )", "hsv[0] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v7, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  v9 = hsv->v[1];
  if ( (v9 < 0.0 || v9 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1212, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[1] ) && ( hsv[1] ) <= ( 1.0f )", "hsv[1] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v9, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  v10 = hsv->v[2];
  if ( (v10 < 0.0 || v10 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1213, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[2] ) && ( hsv[2] ) <= ( 1.0f )", "hsv[2] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v10, *(double *)&_XMM10, DOUBLE_1_0) )
    __debugbreak();
  v11 = hsv->v[1];
  v12 = hsv->v[2];
  v13 = (float)(1.0 - v11) * v12;
  v14 = hsv->v[0] * 6.0;
  if ( v14 >= 1.0 )
  {
    if ( v14 >= 2.0 )
    {
      if ( v14 >= 3.0 )
      {
        if ( v14 < 4.0 )
        {
          rgb->v[0] = v13;
          rgb->v[1] = (float)(1.0 - (float)((float)(v14 - 3.0) * hsv->v[1])) * hsv->v[2];
          v13 = hsv->v[2];
          goto LABEL_28;
        }
        rgb->v[1] = v13;
        if ( v14 < 5.0 )
        {
          rgb->v[0] = (float)(1.0 - (float)((float)(1.0 - (float)(v14 - 4.0)) * v11)) * v12;
          v13 = hsv->v[2];
          goto LABEL_28;
        }
        rgb->v[0] = v12;
        v15 = v14 - 5.0;
      }
      else
      {
        rgb->v[0] = v13;
        rgb->v[1] = hsv->v[2];
        v15 = 1.0 - (float)(v14 - 2.0);
      }
      v13 = (float)(1.0 - (float)(v15 * hsv->v[1])) * hsv->v[2];
      goto LABEL_28;
    }
    rgb->v[0] = (float)(1.0 - (float)((float)(v14 - 1.0) * v11)) * v12;
    rgb->v[1] = hsv->v[2];
  }
  else
  {
    rgb->v[0] = v12;
    rgb->v[1] = (float)(1.0 - (float)((float)(1.0 - v14) * hsv->v[1])) * hsv->v[2];
  }
LABEL_28:
  rgb->v[2] = v13;
  v16 = scale * rgb->v[1];
  rgb->v[0] = scale * rgb->v[0];
  rgb->v[2] = scale * rgb->v[2];
  rgb->v[1] = v16;
}

/*
==============
DevGui_Vec3ToHSV
==============
*/
void DevGui_Vec3ToHSV(const vec3_t *rgb, vec3_t *hsv, float scale)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v9; 
  bool v10; 
  __int128 v11; 
  float v14; 
  float v15; 
  float v16; 
  float v18; 
  float v19; 

  if ( scale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1164, ASSERT_TYPE_ASSERT, "( ( scale > 0.0f ) )", "( scale ) = %g", scale) )
    __debugbreak();
  v6 = LODWORD(FLOAT_1_0);
  *(float *)&v6 = 1.0 / scale;
  v5 = v6;
  *(float *)&v6 = (float)(1.0 / scale) * rgb->v[0];
  _XMM7 = v6;
  v9 = v5;
  *(float *)&v9 = *(float *)&v5 * rgb->v[1];
  _XMM6 = v9;
  v10 = *(float *)&_XMM7 == *(float *)&v9;
  v11 = v5;
  *(float *)&v11 = *(float *)&v5 * rgb->v[2];
  __asm
  {
    vminss  xmm0, xmm6, xmm7
    vminss  xmm11, xmm0, xmm8
  }
  if ( v10 && *(float *)&_XMM6 == *(float *)&v11 )
  {
    hsv->v[0] = 0.0;
    LODWORD(_XMM6) = _XMM7;
  }
  else
  {
    if ( *(float *)&_XMM7 < *(float *)&_XMM6 || *(float *)&_XMM7 < *(float *)&v11 )
    {
      if ( *(float *)&_XMM6 < *(float *)&_XMM7 || *(float *)&_XMM6 < *(float *)&v11 )
      {
        if ( (*(float *)&v11 < *(float *)&_XMM7 || *(float *)&v11 < *(float *)&_XMM6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1188, ASSERT_TYPE_ASSERT, "(scaledRgb[2] >= scaledRgb[0] && scaledRgb[2] >= scaledRgb[1])", (const char *)&queryFormat, "scaledRgb[2] >= scaledRgb[0] && scaledRgb[2] >= scaledRgb[1]") )
          __debugbreak();
        v14 = fmodf_0((float)((float)((float)(*(float *)&_XMM7 - *(float *)&_XMM6) / (float)(*(float *)&v11 - *(float *)&_XMM11)) * 0.16666667) + 1.6666666, 1.0);
        LODWORD(_XMM6) = v11;
        _XMM7 = v11;
      }
      else
      {
        v14 = fmodf_0((float)((float)((float)(*(float *)&v11 - *(float *)&_XMM7) / (float)(*(float *)&_XMM6 - *(float *)&_XMM11)) * 0.16666667) + 1.3333334, 1.0);
        _XMM7 = _XMM6;
      }
    }
    else
    {
      v14 = fmodf_0((float)((float)((float)(*(float *)&_XMM6 - *(float *)&v11) / (float)(*(float *)&_XMM7 - *(float *)&_XMM11)) * 0.16666667) + 1.0, 1.0);
      LODWORD(_XMM6) = _XMM7;
    }
    hsv->v[0] = v14;
  }
  hsv->v[2] = *(float *)&_XMM7;
  if ( *(float *)&_XMM6 == 0.0 )
    v15 = 0.0;
  else
    v15 = 1.0 - (float)(*(float *)&_XMM11 / *(float *)&_XMM6);
  hsv->v[1] = v15;
  v16 = hsv->v[0];
  __asm { vxorpd  xmm7, xmm7, xmm7 }
  if ( (hsv->v[0] < 0.0 || v16 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1198, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[0] ) && ( hsv[0] ) <= ( 1.0f )", "hsv[0] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v16, *(double *)&_XMM7, DOUBLE_1_0) )
    __debugbreak();
  v18 = hsv->v[1];
  if ( (v18 < 0.0 || v18 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1199, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[1] ) && ( hsv[1] ) <= ( 1.0f )", "hsv[1] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v18, *(double *)&_XMM7, DOUBLE_1_0) )
    __debugbreak();
  v19 = hsv->v[2];
  if ( (v19 < 0.0 || v19 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1200, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[2] ) && ( hsv[2] ) <= ( 1.0f )", "hsv[2] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v19, *(double *)&_XMM7, DOUBLE_1_0) )
    __debugbreak();
}

/*
==============
DevGui_WrapDescription
==============
*/
__int64 DevGui_WrapDescription(const char *text, int wrapWidth, int x, int y, int rowHeight, bool draw)
{
  unsigned int v6; 
  const char *i; 
  const char *v11; 
  const char *v12; 
  int v13; 
  char dest[256]; 

  v6 = 0;
  for ( i = text; *i; ++v6 )
  {
    v11 = R_TextLineWrapPosition(i, 256, wrapWidth, cls.consoleFont, 1.0);
    v12 = v11;
    if ( draw )
    {
      Core_strncpy(dest, 0x100ui64, i, v11 - i);
      DevGui_DrawFont(x, y, (const unsigned __int8 *)&devgui_colorText->current, dest);
      y += rowHeight;
    }
    i = v12;
    if ( isspace(*v12) )
    {
      do
      {
        if ( *i == 10 )
          break;
        v13 = *++i;
      }
      while ( isspace(v13) );
    }
  }
  return v6;
}

