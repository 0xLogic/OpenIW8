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
  int v14; 
  __int64 v15; 
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
    _RDX = graph->knots;
    _R9 = v4;
    _RCX = (vec2_t *)graph->selectedKnot;
    if ( (int)_RCX + 1 >= (int)_R9 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rcx*8-8]
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx*8]
        vmovss  xmm0, dword ptr [rdx+rcx*8-4]
        vmulss  xmm4, xmm1, cs:__real@3f000000
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx*8+4]
        vmulss  xmm3, xmm1, cs:__real@3f000000
      }
      _RDX[_R9].v[0] = _RDX[_R9 - 1].v[0];
      _RDX[_R9].v[1] = _RDX[_R9 - 1].v[1];
      _RAX = graph->knots;
      __asm { vmovss  dword ptr [rax+r9*8-8], xmm4 }
      _RAX = graph->knots;
      __asm { vmovss  dword ptr [rax+r9*8-4], xmm3 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rcx*8+8]
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx*8]
        vmovss  xmm0, dword ptr [rdx+rcx*8+0Ch]
        vmulss  xmm3, xmm1, cs:__real@3f000000
        vaddss  xmm1, xmm0, dword ptr [rdx+rcx*8+4]
        vmulss  xmm4, xmm1, cs:__real@3f000000
      }
      v14 = _R9 - 1;
      if ( (int)_R9 - 1 >= (int)_RCX )
      {
        v15 = 8i64 * (int)_R9 - 8;
        do
        {
          _RCX = graph->knots;
          v15 -= 8i64;
          --v14;
          *(float *)((char *)_RCX[2].v + v15) = *(float *)((char *)graph->knots[1].v + v15);
          *(float *)((char *)&_RCX[2].v[1] + v15) = *(float *)((char *)&_RCX[1].v[1] + v15);
          LODWORD(_RCX) = graph->selectedKnot;
        }
        while ( v14 >= (int)_RCX );
        _RDX = graph->knots;
      }
      _RAX = (int)_RCX;
      __asm { vmovss  dword ptr [rdx+rax*8+8], xmm3 }
      _RCX = graph->selectedKnot;
      _RAX = graph->knots;
      __asm { vmovss  dword ptr [rax+rcx*8+0Ch], xmm4 }
      ++graph->selectedKnot;
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
  bool v9; 
  bool v17; 
  unsigned __int8 v35; 
  unsigned __int8 v40; 
  unsigned __int8 v44; 
  int v45; 
  int v46; 
  bool v47; 
  bool v50; 
  const dvar_t *v55; 
  int v56; 
  int v57; 
  int v58; 
  const char **v59; 
  const dvar_t *v63; 
  int v64; 
  int v65; 
  _BYTE v69[32]; 
  char *fmt; 
  int row[2]; 
  __int64 v72; 
  unsigned __int8 color[4]; 
  int v74; 
  int rowWidtha; 
  int v76; 
  vec3_t hsv; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v9 = (unsigned __int64)v69 == _security_cookie;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+58h]
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm0, xmm8
  }
  _RBP = dvar;
  if ( (unsigned __int64)v69 != _security_cookie )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+0E8h+row], xmm0
    }
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1276, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", *(double *)row);
    v9 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+5Ch]
    vcomiss xmm0, xmm8
  }
  if ( v9 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+0E8h+row], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1277, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", *(double *)row) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm5, cs:__real@437f0000
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, dword ptr [rbp+5Ch]
  }
  _R13 = &_RBP->latched;
  __asm
  {
    vmulss  xmm2, xmm1, dword ptr [r13+0]
    vmulss  xmm0, xmm1, dword ptr [r13+0Ch]
    vmulss  xmm3, xmm1, dword ptr [r13+4]
    vmulss  xmm7, xmm1, dword ptr [r13+8]
    vmovss  [rsp+0E8h+var_8C], xmm0
    vmulss  xmm0, xmm2, xmm5
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsp+0E8h+hsv], xmm2
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si ecx, xmm2
  }
  color[3] = -1;
  __asm { vmulss  xmm0, xmm3, xmm5 }
  if ( _ECX > 255 )
    _ECX = 255;
  v35 = _ECX;
  v76 = 0;
  __asm { vaddss  xmm2, xmm0, xmm4 }
  if ( _ECX < 0 )
    v35 = 0;
  color[0] = v35;
  __asm
  {
    vroundss xmm0, xmm6, xmm2, 1
    vcvttss2si ecx, xmm0
    vmulss  xmm0, xmm7, xmm5
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v40 = _ECX;
  __asm { vaddss  xmm2, xmm0, xmm4 }
  if ( _ECX < 0 )
    v40 = 0;
  color[1] = v40;
  __asm
  {
    vroundss xmm0, xmm6, xmm2, 1
    vcvttss2si ecx, xmm0
    vmovss  dword ptr [rsp+0E8h+hsv+4], xmm3
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v44 = _ECX;
  __asm { vmovss  dword ptr [rsp+0E8h+hsv+8], xmm7 }
  if ( _ECX < 0 )
    v44 = 0;
  color[2] = v44;
  *y += rowHeight + 2;
  DevGui_DrawBox(*x, *y, rowWidth, rowHeight, color);
  v45 = 0;
  v74 = 2 * DevGui_GetFontWidth(labels[0]);
  rowWidtha = rowWidth - v74;
  v46 = rowWidth - v74;
  *(_QWORD *)hsv.v = labels;
  do
  {
    v9 = rowHeight + 2 + *y == 0;
    v47 = __CFADD__(rowHeight + 2, *y) || v9;
    *y += rowHeight + 2;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+58h]
      vucomiss xmm0, xmm8
    }
    if ( !v9 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+0E8h+row], xmm0
      }
      v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1292, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", *(double *)row);
      v47 = !v50;
      if ( v50 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+5Ch]
      vcomiss xmm0, xmm8
    }
    if ( v47 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+0E8h+row], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1293, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", *(double *)row) )
        __debugbreak();
    }
    if ( (unsigned int)v45 >= 4 )
    {
      LODWORD(v72) = 4;
      row[0] = v45;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", *(_QWORD *)row, v72) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r13+0]
      vdivss  xmm1, xmm0, dword ptr [rbp+5Ch]
    }
    v55 = devgui_colorTextSel;
    if ( v45 != devguiGlob.selRow )
      v55 = devgui_colorTextGray;
    v56 = *x + v74;
    v57 = *y;
    __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm1 }
    DevGui_DrawSingleSlider(v56, v57, v46, rowHeight, *(float *)&fmt, v45);
    DevGui_DrawFont(*x, *y, (const unsigned __int8 *)&v55->current, **(const char ***)hsv.v);
    *(_QWORD *)hsv.v += 8i64;
    _R13 = (DvarValue *)((char *)_R13 + 4);
    ++v45;
  }
  while ( v45 < 3 );
  v58 = v76;
  v59 = &labels[3];
  _RDI = &hsv;
  do
  {
    __asm { vmovss  xmm2, dword ptr [rbp+5Ch]; scale }
    DevGui_Vec3ToHSV((const vec3_t *)&_RBP->latched, &hsv, *(float *)&_XMM2);
    *y += rowHeight + 2;
    if ( (unsigned int)v58 >= 3 )
    {
      LODWORD(v72) = 3;
      row[0] = v58;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", *(_QWORD *)row, v72) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rdi] }
    v63 = devgui_colorTextSel;
    if ( v58 + 3 != devguiGlob.selRow )
      v63 = devgui_colorTextGray;
    v64 = *x + v74;
    row[0] = v58 + 3;
    v65 = *y;
    __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm0 }
    DevGui_DrawSingleSlider(v64, v65, rowWidtha, rowHeight, *(float *)&fmt, v58 + 3);
    DevGui_DrawFont(*x, *y, (const unsigned __int8 *)&v63->current, *v59);
    _RDI = (vec3_t *)((char *)_RDI + 4);
    ++v59;
    ++v58;
  }
  while ( v58 < 3 );
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovaps xmm7, [rsp+0E8h+var_68]
    vmovaps xmm8, [rsp+0E8h+var_78]
  }
}

/*
==============
DevGui_DrawGraph
==============
*/
void DevGui_DrawGraph(const DevMenuItem *menu, LocalClientNum_t localClientNum)
{
  unsigned __int8 childType; 
  DevMenuChild v8; 
  int width; 
  int FontHeight; 
  int v11; 
  int v12; 
  int v13; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v27; 
  int v33; 
  int v34; 
  const dvar_t *v35; 
  int v36; 
  int v63; 
  void (__fastcall *v67)(DevMenuChild, __int64, __int64, char *, int); 
  void (__fastcall *v74)(DevMenuChild, __int64, _QWORD); 
  float fmt; 
  int v76; 
  vec2_t end; 
  vec2_t start; 
  char _Buffer[256]; 

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
  __asm
  {
    vmovaps [rsp+1E8h+var_48], xmm6
    vmovaps [rsp+1E8h+var_58], xmm7
  }
  FontHeight = DevGui_GetFontHeight();
  width += 8;
  v11 = 3 * FontHeight + 16;
  v12 = devguiGlob.bottom - v11;
  v13 = devguiGlob.left + (devguiGlob.right - devguiGlob.left - width) / 2;
  _RAX = devgui_bevelShade;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rsp+1E8h+fmt], xmm0
  }
  DevGui_DrawBevelBox(v13, devguiGlob.bottom - v11, width, v11, fmt, (const unsigned __int8 *)&devgui_colorBgnd->current);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm1, xmm0, cs:__real@3f733333
    vcvttss2si r15d, xmm1
  }
  DevGui_DrawBox(v13, _ER15, width, 2, (const unsigned __int8 *)&devgui_colorBgndSel->current);
  v20 = v13 + 4;
  v76 = v12 + 6;
  DevGui_DrawSliderPath(v20, v12 + 6);
  v23 = 0;
  v24 = 0;
  LOWORD(v25) = **((_WORD **)v8.command + 1);
  if ( (_WORD)v25 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    v27 = 0i64;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm6, xmm6, r12d
      vcvtsi2ss xmm7, xmm7, eax
    }
    do
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rbx+rcx]
        vcvttss2si r10d, xmm0
        vmulss  xmm0, xmm7, dword ptr [rbx+rcx+4]
        vcvttss2si eax, xmm0
      }
      v33 = _ER15 - _EAX;
      v34 = v20 + _ER10;
      if ( v24 == *((_DWORD *)v8.command + 5) )
      {
        if ( devguiGlob.editingKnot )
        {
          v35 = devgui_colorGraphKnotEditing;
          v36 = 19;
        }
        else
        {
          v35 = devgui_colorGraphKnotSelected;
          v36 = 16;
        }
      }
      else
      {
        v35 = devgui_colorGraphKnotNormal;
        v36 = 12;
      }
      DevGui_DrawBoxCentered(v34, v33, v36, v36, (const unsigned __int8 *)&v35->current);
      ++v24;
      v27 += 8i64;
      v25 = **((unsigned __int16 **)v8.command + 1);
    }
    while ( v24 < v25 );
  }
  if ( (unsigned __int16)v25 - 1 > 0 )
  {
    __asm
    {
      vmovaps [rsp+1E8h+var_68], xmm8
      vmovaps [rsp+1E8h+var_78], xmm9
    }
    _RBX = 0i64;
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm9, xmm9, r12d
      vcvtsi2ss xmm6, xmm6, r14d
      vcvtsi2ss xmm7, xmm7, r15d
      vcvtsi2ss xmm8, xmm8, eax
    }
    do
    {
      _RAX = *(_QWORD *)v8.command;
      __asm
      {
        vmulss  xmm0, xmm9, dword ptr [rbx+rax]
        vmovss  xmm2, dword ptr [rbx+rax+4]
        vaddss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm8, xmm2
        vsubss  xmm0, xmm7, xmm2
      }
      _RBX += 8i64;
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+rax]
        vmovss  xmm4, dword ptr [rbx+rax+4]
        vmovss  dword ptr [rsp+1E8h+start], xmm1
        vmulss  xmm1, xmm9, xmm3
        vaddss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rsp+1E8h+start+4], xmm0
        vmulss  xmm0, xmm8, xmm4
        vsubss  xmm1, xmm7, xmm0
        vmovss  dword ptr [rsp+1E8h+end+4], xmm1
        vmovss  dword ptr [rsp+1E8h+end], xmm2
      }
      DevGui_DrawLine(&start, &end, 2, (const unsigned __int8 *)&devgui_colorGraphKnotNormal->current);
      ++v23;
    }
    while ( v23 < **((unsigned __int16 **)v8.command + 1) - 1 );
    __asm
    {
      vmovaps xmm9, [rsp+1E8h+var_78]
      vmovaps xmm8, [rsp+1E8h+var_68]
    }
  }
  _RCX = *((int *)v8.command + 5);
  __asm
  {
    vmovaps xmm7, [rsp+1E8h+var_58]
    vmovaps xmm6, [rsp+1E8h+var_48]
  }
  v63 = v76 + FontHeight + 2;
  _RAX = *(_QWORD *)v8.command;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rcx*8]
    vmovss  xmm1, dword ptr [rax+rcx*8+4]
  }
  v67 = (void (__fastcall *)(DevMenuChild, __int64, __int64, char *, int))*((_QWORD *)v8.command + 4);
  if ( v67 )
  {
    __asm
    {
      vmovaps xmm2, xmm1
      vmovaps xmm1, xmm0
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v67)((DevMenuChild)v8.command, v21, v22, _Buffer, 256);
  }
  else
  {
    __asm
    {
      vcvtss2sd xmm3, xmm1, xmm1
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    j_sprintf(_Buffer, "X: %.4f, Y: %.4f", *(double *)&_XMM2, *(double *)&_XMM3);
  }
  DevGui_DrawFont(v20, v63, (const unsigned __int8 *)&devgui_colorText->current, _Buffer);
  DevGui_DrawFont(v20, v63 + FontHeight + 2, (const unsigned __int8 *)&devgui_colorText->current, MYINSTRUCTIONS);
  v74 = (void (__fastcall *)(DevMenuChild, __int64, _QWORD))*((_QWORD *)v8.command + 3);
  if ( v74 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v74)((DevMenuChild)v8.command, 4i64, (unsigned int)localClientNum);
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
  float fmt; 
  unsigned __int8 *color; 
  __int64 v18; 
  __int64 v19; 
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
          LODWORD(v19) = 8000;
          LODWORD(v18) = 1;
          LODWORD(color) = nextSibling;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v18, v19) )
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
        _RAX = devgui_bevelShade;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+28h]
          vmovss  dword ptr [rsp+88h+fmt], xmm0
        }
        DevGui_DrawBevelBox(v8, v7, v13, v11 + 8, fmt, outBoxColor);
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
  unsigned __int8 childType; 
  int FontHeight; 
  int left; 
  int v9; 
  const char *description; 
  int v11; 
  int v12; 
  int v14; 
  int v17; 
  int v19; 
  const char *UnobfuscatedName; 
  BOOL v21; 
  int v22; 
  int v23; 
  int v25; 
  int v27; 
  int v29; 
  const char *v30; 
  int v31; 
  float fmt; 
  float fmta; 
  float fmtb; 
  int outLineCount[4]; 
  DvarValue v36; 
  char text[64]; 
  char dest[128]; 
  char outBuffer[1024]; 

  childType = menu->childType;
  if ( childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1511, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", "%s\n\tmenu %s type %i", "menu->childType == DEV_CHILD_DVAR", menu->label, childType) )
    __debugbreak();
  _R14 = menu->child.dvar;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1513, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( menu->label ) = %s", menu->label) )
    __debugbreak();
  FontHeight = DevGui_GetFontHeight();
  left = devguiGlob.left;
  v9 = 0;
  description = _R14->description;
  v11 = FontHeight + 2;
  v12 = (devguiGlob.right - devguiGlob.left) / 2;
  if ( *description )
  {
    __asm
    {
      vmovaps [rsp+578h+var_48], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    do
    {
      __asm { vmovss  dword ptr [rsp+578h+fmt], xmm6 }
      description = R_TextLineWrapPosition(description, 256, v12 - 16, cls.consoleFont, fmt);
      if ( isspace(*description) )
      {
        do
        {
          if ( *description == 10 )
            break;
          v14 = *++description;
        }
        while ( isspace(v14) );
      }
      ++v9;
    }
    while ( *description );
    left = devguiGlob.left;
    __asm { vmovaps xmm6, [rsp+578h+var_48] }
  }
  _RAX = devgui_bevelShade;
  v17 = v11 * (v9 + 1) + 18;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  v19 = devguiGlob.bottom - 75 * slider - v17 - 25;
  __asm { vmovss  dword ptr [rsp+578h+fmt], xmm0 }
  DevGui_DrawBevelBox(left, v19, v12, v17, fmta, (const unsigned __int8 *)&devgui_colorBgnd->current);
  UnobfuscatedName = Dvar_DevGetUnobfuscatedName(_R14->name);
  DevGui_DrawFont(left + 8, v19 + 8, (const unsigned __int8 *)&devgui_colorTextSel->current, UnobfuscatedName);
  DevGui_WrapDescription(_R14->description, v12 - 16, left + 8, v19 + v11 + 10, v11, 1);
  Dvar_DomainToString_GetLines(_R14, outBuffer, 0x400ui64, outLineCount);
  ++outLineCount[0];
  v21 = Dvar_FlagsToString(_R14, text, 0x40ui64);
  v22 = DevGui_GetFontHeight() + 2;
  v23 = devguiGlob.right - (devguiGlob.right - devguiGlob.left) / 3;
  _RAX = devgui_bevelShade;
  v25 = v22 * (v21 + outLineCount[0] + 1) + 16;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  v27 = devguiGlob.bottom - v25;
  __asm { vmovss  dword ptr [rsp+578h+fmt], xmm0 }
  DevGui_DrawBevelBox(v23 - 30, devguiGlob.bottom - v25 - 25, (devguiGlob.right - devguiGlob.left) / 3, v25, fmtb, (const unsigned __int8 *)&devgui_colorBgnd->current);
  __asm { vmovups xmm0, xmmword ptr [r14+28h] }
  v29 = v23 - 22;
  v27 -= 17;
  __asm { vmovups [rsp+578h+var_528], xmm0 }
  v30 = Dvar_ValueToString(_R14, &v36);
  Com_sprintf(dest, 0x80ui64, "value = %s", v30);
  DevGui_DrawFont(v29, v27, (const unsigned __int8 *)&devgui_colorTextSel->current, dest);
  v31 = v22 + v27;
  if ( v21 )
  {
    DevGui_DrawFont(v29, v31, (const unsigned __int8 *)&devgui_colorText->current, text);
    v31 += v22;
  }
  DevGui_DrawFont(v29, v31, (const unsigned __int8 *)&devgui_colorText->current, outBuffer);
}

/*
==============
DevGui_DrawMenuVertically
==============
*/
void DevGui_DrawMenuVertically(const DevMenuItem *menu, unsigned __int16 activeChild, int *origin)
{
  unsigned __int16 v6; 
  const DevMenuItem *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned __int16 nextSibling; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned __int16 v23; 
  DevMenuItem *v25; 
  bool v26; 
  DevMenuChild v27; 
  char v28; 
  const dvar_t *v29; 
  int *p_integer; 
  const dvar_t *v31; 
  bool v32; 
  unsigned __int8 childType; 
  char *v36; 
  int v37; 
  const dvar_t *dvar; 
  unsigned __int8 type; 
  int v40; 
  const char *v41; 
  int v42; 
  const char *v43; 
  int v44; 
  const char *v45; 
  float fmt; 
  float fmta; 
  unsigned __int8 *color; 
  __int64 v51; 
  __int64 v52; 
  int w; 
  int x; 
  unsigned __int8 v55[4]; 
  int h; 
  int v57; 
  int v58; 
  int v62; 
  int integer; 

  v6 = activeChild;
  v7 = menu;
  if ( !menu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 872, ASSERT_TYPE_ASSERT, "(menu)", (const char *)&queryFormat, "menu") )
    __debugbreak();
  v8 = *origin;
  v9 = origin[1];
  x = *origin;
  v57 = v9;
  w = DevGui_MaxChildMenuWidth(v7);
  h = R_TextHeight(cls.consoleFont) + 8;
  v10 = R_TextWidth(">", 0, cls.consoleFont);
  v11 = R_TextWidth("  ", 0, cls.consoleFont);
  v12 = 0;
  v13 = w - v10;
  v14 = 0;
  nextSibling = v7->child.menu;
  v16 = 0;
  v58 = v8 + v13 - v11 - 4;
  if ( nextSibling )
  {
    do
    {
      if ( (unsigned __int16)(nextSibling - 1) > 0x1F3Fu )
      {
        LODWORD(v52) = 8000;
        LODWORD(v51) = 1;
        LODWORD(color) = nextSibling;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v51, v52) )
          __debugbreak();
      }
      v17 = v14;
      if ( nextSibling != v6 )
        v17 = v16;
      ++v14;
      v16 = v17;
      nextSibling = devguiGlob.menus[nextSibling - 1].nextSibling;
    }
    while ( nextSibling );
    v7 = menu;
    v12 = 0;
    v9 = v57;
    v8 = x;
  }
  v18 = h;
  v19 = (devguiGlob.bottom - h - v9) / h;
  v20 = 0;
  v62 = 0;
  if ( v19 < 1 )
    v19 = 1;
  v57 = v19;
  if ( v14 > 2 && v19 < v14 && v16 >= v19 )
  {
    *(_DWORD *)v55 = devgui_colorBgnd->current.integer;
    _RAX = devgui_bevelShade;
    integer = devgui_colorText->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rsp+0C8h+fmt], xmm0
    }
    DevGui_DrawBevelBox(v8, v9, w, h, fmt, v55);
    DevGui_DrawFont(v8 + 4, v9 + 4, (const unsigned __int8 *)&integer, "...");
    v9 += v18;
    v20 = 1;
    v62 = 1;
  }
  v23 = v7->child.menu;
  if ( v23 )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_68], xmm7
      vmovss  xmm7, cs:__real@40000000
      vmovaps [rsp+0C8h+var_58], xmm6
    }
    while ( 1 )
    {
      if ( (unsigned __int16)(v23 - 1) > 0x1F3Fu )
      {
        LODWORD(v52) = 8000;
        LODWORD(v51) = 1;
        LODWORD(color) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v51, v52) )
          __debugbreak();
        v20 = v62;
      }
      v25 = &devguiGlob.menus[v23 - 1];
      if ( v20 && v12 < v16 && v16 + v20 - v57 >= v12 )
        goto LABEL_74;
      if ( (unsigned __int16)(v23 - 1) > 0x1F3Fu )
      {
        LODWORD(v52) = 8000;
        LODWORD(v51) = 1;
        LODWORD(color) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", color, v51, v52) )
          __debugbreak();
      }
      if ( devguiGlob.menus[v23 - 1].childType == 1 )
      {
        v27.command = (const char *)devguiGlob.menus[v23 - 1].child;
        v28 = *((_BYTE *)v27.command + 29);
        v26 = v28 == 9 || v28 == 8 && !*((_DWORD *)v27.command + 22);
      }
      else
      {
        v26 = 0;
      }
      if ( v23 == devguiGlob.heldButtonHandle )
        break;
      if ( v23 == devguiGlob.focusButtonHandle && !devguiGlob.heldButtonHandle )
        goto LABEL_42;
      if ( v23 == v6 )
      {
        if ( v26 )
          v29 = devgui_colorBgndGraySel;
        else
          v29 = devgui_colorBgndSel;
      }
      else
      {
        v29 = devgui_colorBgndGray;
        if ( !v26 )
          v29 = devgui_colorBgnd;
      }
LABEL_49:
      p_integer = &v29->current.integer;
      if ( v23 == v6 )
      {
        if ( v26 )
          v31 = devgui_colorTextGraySel;
        else
          v31 = devgui_colorTextSel;
      }
      else
      {
        v32 = !v26;
        v31 = devgui_colorTextGray;
        if ( v32 )
          v31 = devgui_colorText;
      }
      *(_DWORD *)v55 = *p_integer;
      integer = v31->current.integer;
      _RAX = devgui_bevelShade;
      __asm { vmovss  xmm6, dword ptr [rax+28h] }
      if ( v23 == v6 )
      {
        *origin = x + w;
        origin[1] = v9;
        if ( v23 == devguiGlob.selectedMenu && DevGui_IsButtonDown(INPUT_ACCEPT) )
          __asm { vsubss  xmm6, xmm7, dword ptr [rax+28h] }
      }
      __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm6 }
      DevGui_DrawBevelBox(x, v9, w, h, fmta, v55);
      DevGui_DrawFont(x + 4, v9 + 4, (const unsigned __int8 *)&integer, v25->label);
      childType = v25->childType;
      if ( childType )
      {
        if ( childType != 1 )
          goto LABEL_73;
        dvar = v25->child.dvar;
        if ( !dvar )
          goto LABEL_73;
        type = dvar->type;
        if ( !type )
        {
          if ( dvar->latched.enabled )
          {
            v40 = R_TextWidth("on", 0, cls.consoleFont);
            v41 = "on";
          }
          else
          {
            v40 = R_TextWidth("off", 0, cls.consoleFont);
            v41 = "off";
          }
          v42 = x - v40 - R_TextWidth("  ", 0, cls.consoleFont);
          v43 = j_va("%s%s", "  ", v41);
          v37 = v42 + w - 4;
          goto LABEL_72;
        }
        if ( type == 8 )
        {
          v44 = x + w - DevGui_DVarEnumValueWidth(dvar) - 4;
          v45 = Dvar_DisplayableLatchedValue(v25->child.dvar);
          v36 = j_va("%s%s", "  ", v45);
          v37 = v44;
          goto LABEL_71;
        }
      }
      else if ( v25->child.menu )
      {
        v36 = j_va("%s%s", "  ", ">");
        v37 = v58;
LABEL_71:
        v43 = v36;
LABEL_72:
        DevGui_DrawFont(v37, v9 + 4, (const unsigned __int8 *)&integer, v43);
      }
LABEL_73:
      v9 += h;
      v6 = activeChild;
      v20 = v62;
LABEL_74:
      v23 = v25->nextSibling;
      ++v12;
      if ( !v23 )
      {
        __asm
        {
          vmovaps xmm7, [rsp+0C8h+var_68]
          vmovaps xmm6, [rsp+0C8h+var_58]
        }
        return;
      }
    }
    if ( devguiGlob.heldButtonHandle == devguiGlob.focusButtonHandle )
    {
      v29 = devgui_colorBgndHeld;
      goto LABEL_49;
    }
LABEL_42:
    v29 = devgui_colorBgndFocus;
    goto LABEL_49;
  }
}

/*
==============
DevGui_DrawSingleSlider
==============
*/
void DevGui_DrawSingleSlider(int x, int y, int rowWidth, int rowHeight, float fraction, int row)
{
  const dvar_t *v9; 
  const dvar_t *v22; 
  float v25; 
  unsigned __int8 *color; 
  float fractiona; 
  const unsigned __int8 *rowa; 

  if ( row != devguiGlob.focusRow )
    goto LABEL_5;
  if ( devguiGlob.slider.held )
  {
    v9 = devgui_colorSliderBgndHeld;
    goto LABEL_6;
  }
  v9 = devgui_colorSliderBgndFocus;
  if ( !devguiGlob.slider.focus )
LABEL_5:
    v9 = devgui_colorSliderBgnd;
LABEL_6:
  color = (unsigned __int8 *)&v9->current;
  _RAX = devgui_bevelShade;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  [rsp+38h+var_18], xmm0
  }
  DevGui_DrawBevelBox(x, y, rowWidth, rowHeight, v25, color);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r14d
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, [rsp+38h+fraction]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm3, xmm2, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si ecx, xmm2; x
  }
  if ( row == devguiGlob.focusRow )
  {
    if ( devguiGlob.slider.knobHeld )
    {
      v22 = devgui_colorSliderKnobHeld;
      goto LABEL_13;
    }
    if ( devguiGlob.slider.knobFocus )
    {
      v22 = devgui_colorSliderKnobFocus;
      goto LABEL_13;
    }
  }
  v22 = devgui_colorSliderKnobSel;
  if ( row != devguiGlob.selRow )
    v22 = devgui_colorSliderKnob;
LABEL_13:
  rowa = (const unsigned __int8 *)&v22->current;
  _RAX = devgui_bevelShade;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  [rsp+38h+fraction], xmm0
  }
  DevGui_DrawBevelBox(_ECX, y, 8, rowHeight, fractiona, rowa);
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

void __fastcall DevGui_DrawSliders(const DevMenuItem *menu, double _XMM1_8, double _XMM2_8)
{
  unsigned __int8 childType; 
  int width; 
  int FontHeight; 
  int v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int left; 
  int v17; 
  int v18; 
  unsigned __int8 type; 
  int v21; 
  int v22; 
  __int64 i; 
  unsigned int v47; 
  int v48; 
  int v55; 
  unsigned __int8 v56; 
  const char *v57; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  unsigned __int8 *color; 
  __int64 v63; 
  int x; 
  int y; 

  childType = menu->childType;
  if ( childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1329, ASSERT_TYPE_ASSERT, "(menu->childType == DEV_CHILD_DVAR)", "%s\n\tmenu %s type %i", "menu->childType == DEV_CHILD_DVAR", menu->label, childType) )
    __debugbreak();
  _RSI = menu->child.dvar;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1331, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( menu->label ) = %s", menu->label) )
    __debugbreak();
  width = devguiGlob.slider.width;
  FontHeight = DevGui_GetFontHeight();
  switch ( _RSI->type )
  {
    case 2u:
      v9 = 4;
      v10 = 18;
      v11 = 2i64;
      break;
    case 3u:
      v9 = 5;
      v10 = 20;
      v11 = 3i64;
      break;
    case 4u:
    case 0xAu:
      v9 = 6;
      v10 = 22;
      v11 = 4i64;
      break;
    case 0xBu:
      v9 = 8;
      v10 = 26;
      v11 = 6i64;
      break;
    default:
      v9 = 3;
      v10 = 16;
      v11 = 1i64;
      break;
  }
  v12 = v10 + FontHeight * v9;
  if ( (unsigned __int8)(_RSI->type - 10) <= 1u )
    v12 += FontHeight + 2;
  v13 = devguiGlob.bottom - v12;
  left = devguiGlob.left;
  _RAX = devgui_bevelShade;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rsp+88h+fmt], xmm0
  }
  DevGui_DrawBevelBox(devguiGlob.left, devguiGlob.bottom - v12 - 25, width + 8, v12, fmt, (const unsigned __int8 *)&devgui_colorBgnd->current);
  v17 = left + 4;
  v18 = v13 - 19;
  x = v17;
  y = v18;
  DevGui_DrawSliderPath(v17, v18);
  type = _RSI->type;
  if ( type == 10 )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    v18 += FontHeight + 2;
    DevGui_DrawBox(v17, v18, width, FontHeight, (const unsigned __int8 *)&_RSI->latched);
    __asm { vmovss  xmm6, cs:__real@3b808081 }
    v21 = 0;
    v22 = FontHeight + 2;
    for ( i = 0i64; i < v11; ++i )
    {
      v18 += v22;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+88h+fmt], xmm1
      }
      DevGui_DrawSingleSlider(v17, v18, width, FontHeight, fmta, v21++);
      v22 = FontHeight + 2;
    }
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
    goto LABEL_45;
  }
  if ( (unsigned __int8)(type - 2) > 2u )
  {
    if ( type == 11 )
    {
      DevGui_DrawFloat3ColorSliders(&x, &y, _RSI, width, FontHeight);
      v17 = x;
      v18 = y;
      goto LABEL_45;
    }
    _EDI = 0;
    v18 += FontHeight + 2;
    switch ( type )
    {
      case 0u:
        _EAX = _RSI->latched.color[0];
        __asm
        {
          vmovd   xmm0, eax
          vmovd   xmm1, edi
          vpcmpeqd xmm3, xmm0, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vxorps  xmm2, xmm2, xmm2
          vblendvps xmm0, xmm1, xmm2, xmm3
        }
LABEL_39:
        __asm { vmovss  dword ptr [rsp+88h+fmt], xmm0 }
        DevGui_DrawSingleSlider(v17, v18, width, FontHeight, fmtb, 0);
        goto LABEL_45;
      case 5u:
        if ( _RSI->domain.integer.max != _RSI->domain.enumeration.stringCount )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm0, xmm0, ecx
            vcvtsi2ss xmm1, xmm1, eax
            vdivss  xmm0, xmm1, xmm0
          }
          goto LABEL_39;
        }
        break;
      case 8u:
        if ( _RSI->domain.enumeration.stringCount > 1 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rsi+38h]
            vcvtsi2ss xmm0, xmm0, eax
            vdivss  xmm0, xmm1, xmm0
          }
          goto LABEL_39;
        }
        break;
      case 1u:
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+38h]
          vmovss  xmm1, dword ptr [rsi+5Ch]
          vsubss  xmm3, xmm0, dword ptr [rsi+58h]
          vsubss  xmm2, xmm1, dword ptr [rsi+58h]
          vdivss  xmm0, xmm3, xmm2
        }
        goto LABEL_39;
      default:
        LODWORD(color) = type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1406, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled dvar type %i", color) )
          __debugbreak();
        break;
    }
    __asm { vmovss  xmm0, cs:__real@3f000000 }
    goto LABEL_39;
  }
  v47 = 0;
  v48 = FontHeight + 2;
  for ( _RBP = 0i64; _RBP < v11; ++_RBP )
  {
    v18 += v48;
    if ( v47 >= 4 )
    {
      LODWORD(v63) = 4;
      LODWORD(color) = v47;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 93, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", color, v63) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+rbp*4+38h]
      vmovss  xmm1, dword ptr [rsi+5Ch]
      vsubss  xmm3, xmm0, dword ptr [rsi+58h]
      vsubss  xmm2, xmm1, dword ptr [rsi+58h]
      vdivss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    DevGui_DrawSingleSlider(v17, v18, width, FontHeight, fmtc, v47++);
    v48 = FontHeight + 2;
  }
LABEL_45:
  v55 = v18 + FontHeight + 2;
  v56 = _RSI->type;
  if ( v56 )
  {
    v57 = Dvar_DisplayableLatchedValue(_RSI);
    if ( v56 == 8 )
      v57 = j_va("%i: %s", _RSI->latched.unsignedInt, v57);
  }
  else
  {
    v57 = "Off";
    if ( _RSI->latched.enabled )
      v57 = "On";
  }
  DevGui_DrawFont(v17, v55, (const unsigned __int8 *)&devgui_colorText->current, v57);
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

float __fastcall DevGui_GetFloatFractionStep(double min, double max)
{
  char v18; 
  char v19; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vsubss  xmm8, xmm1, xmm0
    vmovaps xmm6, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmm7, xmm0
    vandps  xmm0, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
    vcomiss xmm0, xmm1
  }
  *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax; Y
    vcomiss xmm6, xmm7
  }
  if ( v18 | v19 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@41200000; X }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3c23d70a
      vdivss  xmm0, xmm1, xmm8
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return *(float *)&_XMM0;
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

void __fastcall DevGui_MouseEditSlider(LocalClientNum_t localClientNum, int mouseX, int mouseY, double deltaTime)
{
  unsigned __int16 selectedMenu; 
  int focusRow; 
  DevMenuItem *Menu; 
  int v19; 
  bool held; 
  bool v44; 
  DevGui_SliderPoint outSliderPoint; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmm10, xmm3
  }
  if ( !devguiGlob.isActive || !devguiGlob.editingMenuItem )
    goto LABEL_49;
  selectedMenu = devguiGlob.selectedMenu;
  if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", devguiGlob.selectedMenu, 1, 8000) )
    __debugbreak();
  if ( byte_15153517C[72 * selectedMenu] != 1 )
  {
LABEL_49:
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
  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm8
    vmovaps [rsp+0C8h+var_58], xmm9
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !DevGui_PickSliderPoint(&outSliderPoint, mouseX, mouseY, focusRow) )
    goto LABEL_38;
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  if ( Menu->childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3161, ASSERT_TYPE_ASSERT, "(control->childType == DEV_CHILD_DVAR)", (const char *)&queryFormat, "control->childType == DEV_CHILD_DVAR") )
    __debugbreak();
  v19 = DevGui_DvarRowCount(Menu->child.dvar);
  if ( outSliderPoint.componentIndex >= v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3163, ASSERT_TYPE_ASSERT, "(sliderPoint.componentIndex < DevGui_DvarRowCount( dvar ))", (const char *)&queryFormat, "sliderPoint.componentIndex < DevGui_DvarRowCount( dvar )") )
    __debugbreak();
  devguiGlob.focusRow = outSliderPoint.componentIndex;
  devguiGlob.slider.knobFocus = outSliderPoint.hitKnob;
  devguiGlob.slider.focus = 1;
  if ( devguiGlob.mouseButtonPressed[0] )
  {
    __asm
    {
      vmovss  xmm1, [rsp+0C8h+outSliderPoint.pos]
      vmovss  xmm0, [rsp+0C8h+outSliderPoint.knobPos]
      vsubss  xmm8, xmm0, xmm1
    }
    if ( outSliderPoint.hitKnob )
    {
      __asm { vmovss  cs:devguiGlob.slider.knobHeldOffset, xmm8 }
      devguiGlob.slider.knobHeld = 1;
LABEL_41:
      __asm
      {
        vaddss  xmm0, xmm8, xmm1; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm0; fraction }
      DevGui_SetDvarBySliderFraction(devguiGlob.focusRow, *(float *)&_XMM1);
      goto LABEL_46;
    }
    _RAX = DevGui_SelectedDvar();
    switch ( _RAX->type )
    {
      case 0u:
        __asm { vmovaps xmm2, xmm6; jumptable 0000000141FA3054 case 0 }
        break;
      case 1u:
      case 2u:
      case 3u:
      case 4u:
        __asm
        {
          vmovss  xmm1, dword ptr [rax+5Ch]; jumptable 0000000141FA3054 cases 1-4
          vmovss  xmm0, dword ptr [rax+58h]
        }
        goto LABEL_35;
      case 5u:
        if ( _RAX->domain.integer.max >= _RAX->domain.enumeration.stringCount )
          goto LABEL_30;
        __asm { vxorps  xmm2, xmm2, xmm2 }
        break;
      case 8u:
        if ( _RAX->domain.enumeration.stringCount )
        {
LABEL_30:
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vdivss  xmm2, xmm6, xmm0
          }
        }
        else
        {
          __asm { vxorps  xmm2, xmm2, xmm2 }
        }
        break;
      case 0xAu:
        __asm { vmovss  xmm2, cs:__real@3b808081; jumptable 0000000141FA3054 case 10 }
        break;
      case 0xBu:
        __asm
        {
          vmovaps xmm1, xmm6; jumptable 0000000141FA3054 case 11
          vxorps  xmm0, xmm0, xmm0; min
        }
LABEL_35:
        *(float *)&_XMM0 = DevGui_GetFloatFractionStep(*(double *)&_XMM0, *(double *)&_XMM1);
        __asm { vmovaps xmm2, xmm0 }
        break;
      default:
        CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3000, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm0, xmm7, xmm8
      vblendvps xmm9, xmm2, xmm1, xmm0
      vaddss  xmm0, xmm9, [rsp+0C8h+outSliderPoint.fraction]; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; fraction }
    DevGui_SetDvarBySliderFraction(devguiGlob.focusRow, *(float *)&_XMM1);
    held = 1;
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vmovss  cs:devguiGlob.slider.heldScrollTimer, xmm4
    }
    devguiGlob.slider.held = 1;
    __asm { vmovss  cs:devguiGlob.slider.heldStep, xmm9 }
  }
  else
  {
LABEL_38:
    __asm
    {
      vmovss  xmm4, cs:devguiGlob.slider.heldScrollTimer
      vmovss  xmm9, cs:devguiGlob.slider.heldStep
    }
    held = devguiGlob.slider.held;
  }
  if ( devguiGlob.slider.knobHeld )
  {
    __asm
    {
      vmovss  xmm1, [rsp+0C8h+outSliderPoint.pos]
      vmovss  xmm8, cs:devguiGlob.slider.knobHeldOffset
    }
    goto LABEL_41;
  }
  v44 = !held;
  if ( held )
  {
    _RAX = devgui_mouseScrollDelay;
    __asm
    {
      vmovss  xmm8, dword ptr [rax+28h]
      vcomiss xmm4, xmm8
      vmovss  xmm0, [rsp+0C8h+outSliderPoint.pos]
      vsubss  xmm1, xmm0, [rsp+0C8h+outSliderPoint.knobPos]
      vmovss  xmm3, cs:__real@bf800000
      vcmpless xmm2, xmm7, xmm1
      vcmpless xmm0, xmm7, xmm9
      vblendvps xmm1, xmm3, xmm6, xmm2
      vblendvps xmm0, xmm3, xmm6, xmm0
      vucomiss xmm1, xmm0
    }
    if ( v44 )
    {
      __asm
      {
        vsubss  xmm0, xmm4, xmm8
        vmulss  xmm1, xmm0, xmm9
        vmovaps xmm2, xmm6; max
        vmulss  xmm1, xmm1, dword ptr [rax+28h]
        vaddss  xmm0, xmm1, [rsp+0C8h+outSliderPoint.fraction]; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm0; fraction }
      DevGui_SetDvarBySliderFraction(devguiGlob.focusRow, *(float *)&_XMM1);
    }
    __asm
    {
      vmovaps xmm4, xmm8
      vaddss  xmm0, xmm4, xmm10
      vmovss  cs:devguiGlob.slider.heldScrollTimer, xmm0
    }
  }
LABEL_46:
  __asm
  {
    vmovaps xmm9, [rsp+0C8h+var_58]
    vmovaps xmm8, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_28]
    vmovaps xmm7, [rsp+0C8h+var_38]
    vmovaps xmm10, [rsp+0C8h+var_68]
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

float __fastcall DevGui_PickFloatScrollStep(double min, double max, double stepOverride)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm2, xmm7
    vmovaps xmm6, xmm1
    vmovaps xmm3, xmm0
    vmovaps xmm0, xmm2
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
  }
  return *(float *)&_XMM0;
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
  int v28; 
  char v29; 
  bool result; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  _RDI = outSliderPoint;
  if ( !outSliderPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2703, ASSERT_TYPE_ASSERT, "(outSliderPoint)", (const char *)&queryFormat, "outSliderPoint") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, [rsp+88h+knobFraction]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
  }
  _RDI->handle = sliderHandle;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vmulss  xmm1, xmm6, xmm7
    vaddss  xmm1, xmm1, xmm0
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si r15d, xmm1
  }
  if ( componentIndex > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)componentIndex, "unsigned", componentIndex) )
    __debugbreak();
  _RDI->componentIndex = componentIndex;
  if ( keyX < _ER15 - 4 || keyY < sliderY || keyX >= _ER15 - 4 + 16 || (v28 = sliderY + sliderHeight, keyY >= sliderY + sliderHeight) )
  {
    v28 = sliderY + sliderHeight;
    v29 = 0;
  }
  else
  {
    v29 = 1;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, xmm6
  }
  _RDI->hitKnob = v29;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r15d
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rdi+8], xmm1
    vmovss  dword ptr [rdi+0Ch], xmm7
  }
  result = keyX >= sliderX && keyY >= sliderY && keyX < sliderX + sliderWidth && keyY < v28;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return result;
}

/*
==============
DevGui_PickSliderPoint
==============
*/
bool DevGui_PickSliderPoint(DevGui_SliderPoint *outSliderPoint, int keyX, int keyY, int restrictComponentIndex)
{
  DevGui_SliderPoint *v10; 
  unsigned __int16 selectedMenu; 
  DevMenuItem *Menu; 
  int sliderHeight; 
  int v15; 
  int v16; 
  int v17; 
  int v19; 
  int v20; 
  unsigned int v21; 
  bool v22; 
  int v23; 
  bool result; 
  bool v39; 
  bool v66; 
  unsigned int v69; 
  int v70; 
  int v71; 
  DevGui_SliderPoint *v75; 
  __int64 sliderX; 
  double sliderXb; 
  double sliderXc; 
  int sliderXd; 
  __int64 sliderXa; 
  __int64 sliderY; 
  __int64 sliderYa; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  unsigned __int16 v91; 
  int sliderWidth; 
  int v93; 
  int v96; 
  vec3_t outSliderPointa; 

  v10 = outSliderPoint;
  *(_QWORD *)outSliderPointa.v = outSliderPoint;
  if ( !outSliderPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2724, ASSERT_TYPE_ASSERT, "(outSliderPoint)", (const char *)&queryFormat, "outSliderPoint") )
    __debugbreak();
  if ( !devguiGlob.isActive || !devguiGlob.editingMenuItem )
    goto LABEL_92;
  selectedMenu = devguiGlob.selectedMenu;
  if ( (unsigned __int16)(devguiGlob.selectedMenu - 1) > 0x1F3Fu )
  {
    LODWORD(sliderX) = devguiGlob.selectedMenu;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 176, ASSERT_TYPE_ASSERT, "( 1 ) <= ( handle ) && ( handle ) <= ( ( sizeof( *array_counter( devguiGlob.menus ) ) + 0 ) )", "handle not in [1, ARRAY_COUNT( devguiGlob.menus )]\n\t%i not in [%i, %i]", sliderX, 1, 8000) )
      __debugbreak();
  }
  if ( byte_15153517C[72 * selectedMenu] != 1 )
  {
LABEL_92:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2725, ASSERT_TYPE_ASSERT, "(DevGui_IsEditingSlider())", (const char *)&queryFormat, "DevGui_IsEditingSlider()") )
      __debugbreak();
  }
  DebugWipe(v10, 0x10ui64);
  v91 = devguiGlob.selectedMenu;
  Menu = DevGui_GetMenu(devguiGlob.selectedMenu);
  _RBP.command = (const char *)Menu->child;
  if ( !_RBP.command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2732, ASSERT_TYPE_ASSERT, "( ( dvar ) )", "( control->label ) = %s", Menu->label) )
    __debugbreak();
  sliderWidth = devguiGlob.slider.width;
  sliderHeight = DevGui_GetFontHeight();
  v93 = sliderHeight;
  switch ( *((_BYTE *)_RBP.command + 29) )
  {
    case 2:
      v15 = 2;
      break;
    case 3:
      v15 = 3;
      break;
    case 4:
    case 0xA:
      v15 = 4;
      break;
    case 0xB:
      v15 = 6;
      break;
    default:
      v15 = 1;
      break;
  }
  if ( restrictComponentIndex != -1 && restrictComponentIndex >= v15 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2737, ASSERT_TYPE_ASSERT, "(restrictComponentIndex == -1 || restrictComponentIndex < static_cast<int>( componentCount ))", (const char *)&queryFormat, "restrictComponentIndex == -1 || restrictComponentIndex < static_cast<int>( componentCount )") )
      __debugbreak();
    sliderHeight = v93;
  }
  v16 = *((unsigned __int8 *)_RBP.command + 29);
  v17 = sliderHeight + 2;
  _EBX = 0;
  v19 = sliderHeight + 2;
  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps [rsp+0D8h+var_58], xmm7
  }
  if ( (unsigned __int8)(v16 - 10) > 1u )
    v19 = 0;
  v20 = devguiGlob.left + 4;
  v21 = v19 + sliderHeight * (v15 + 2) + 2 * v15 + 14;
  v22 = devguiGlob.bottom <= v21;
  v23 = devguiGlob.bottom - v21 + v17 - 19;
  switch ( v16 )
  {
    case 0:
      _EAX = *((unsigned __int8 *)_RBP.command + 56);
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, ebx
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vxorps  xmm2, xmm2, xmm2
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  [rsp+0D8h+var_90], xmm0
      }
      goto LABEL_34;
    case 1:
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+5Ch]; jumptable 0000000141FA49A7 case 1
        vsubss  xmm6, xmm0, dword ptr [rbp+58h]
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm6, xmm1
      }
      if ( devguiGlob.bottom <= v21 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2754, ASSERT_TYPE_ASSERT, "(dvarRange > 0.0f)", (const char *)&queryFormat, "dvarRange > 0.0f") )
          __debugbreak();
        sliderHeight = v93;
        v10 = *(DevGui_SliderPoint **)outSliderPointa.v;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+38h]
        vsubss  xmm1, xmm0, dword ptr [rbp+58h]
        vdivss  xmm2, xmm1, xmm6
        vmovss  [rsp+0D8h+var_90], xmm2
      }
      goto LABEL_34;
    case 2:
    case 3:
    case 4:
      __asm { vxorps  xmm7, xmm7, xmm7 }
      while ( 1 )
      {
        v39 = restrictComponentIndex == 0;
        if ( restrictComponentIndex < 0 || (v39 = _EBX <= restrictComponentIndex, _EBX == restrictComponentIndex) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+5Ch]
            vsubss  xmm6, xmm0, dword ptr [rbp+58h]
            vcomiss xmm6, xmm7
          }
          if ( v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2768, ASSERT_TYPE_ASSERT, "(dvarRange > 0.0f)", (const char *)&queryFormat, "dvarRange > 0.0f") )
            __debugbreak();
          _RAX = vec4_t::operator[]((vec4_t *)(_RBP.command + 56), _EBX);
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vsubss  xmm1, xmm0, dword ptr [rbp+58h]
            vdivss  xmm2, xmm1, xmm6
            vmovss  [rsp+0D8h+var_90], xmm2
          }
          if ( DevGui_PickSingleSliderPoint(*(DevGui_SliderPoint **)outSliderPointa.v, keyX, keyY, v91, _EBX, v20, v23, sliderWidth, v93, v87) )
            goto LABEL_76;
        }
        v23 += v17;
        if ( ++_EBX == v15 )
          goto LABEL_48;
      }
    case 5:
      if ( *((_DWORD *)_RBP.command + 23) == *((_DWORD *)_RBP.command + 22) )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f000000
          vmovss  [rsp+0D8h+var_90], xmm0
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm0, xmm1, xmm0
          vmovss  [rsp+0D8h+var_90], xmm0
        }
      }
      goto LABEL_34;
    case 8:
      if ( *((_DWORD *)_RBP.command + 22) == 1 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f000000
          vmovss  [rsp+0D8h+var_90], xmm0
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rbp+38h]
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm0, xmm1, xmm0
          vmovss  [rsp+0D8h+var_90], xmm0
        }
      }
LABEL_34:
      result = DevGui_PickSingleSliderPoint(v10, keyX, keyY, v91, 0, v20, v23, sliderWidth, sliderHeight, v86);
      goto LABEL_49;
    case 9:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2792, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DVAR_TYPE_STRING: unhandled dvar type") )
        __debugbreak();
      goto LABEL_48;
    case 10:
      __asm { vmovss  xmm6, cs:__real@3b808081; jumptable 0000000141FA49A7 case 10 }
      do
      {
        v23 += v17;
        if ( restrictComponentIndex < 0 || _EBX == restrictComponentIndex )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vmulss  xmm1, xmm0, xmm6
            vmovss  [rsp+0D8h+var_90], xmm1
          }
          if ( DevGui_PickSingleSliderPoint(v10, keyX, keyY, v91, _EBX, v20, v23, sliderWidth, sliderHeight, v88) )
            goto LABEL_76;
          sliderHeight = v93;
        }
        ++_EBX;
      }
      while ( _EBX != v15 );
      goto LABEL_48;
    case 11:
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+58h]; jumptable 0000000141FA49A7 case 11
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm0, xmm6
      }
      if ( devguiGlob.bottom != v21 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+0D8h+sliderX], xmm0
        }
        v66 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2815, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", sliderXb);
        v22 = !v66;
        if ( v66 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+5Ch]
        vcomiss xmm0, xmm6
      }
      if ( v22 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  qword ptr [rsp+0D8h+sliderX], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2816, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", sliderXc) )
          __debugbreak();
      }
      v69 = 0;
      v70 = 2 * DevGui_GetFontWidth("R");
      v71 = v70 + v20;
      v96 = v71;
      while ( 2 )
      {
        v23 += v17;
        if ( restrictComponentIndex < 0 || v69 == restrictComponentIndex )
        {
          _RAX = vec4_t::operator[]((vec4_t *)(_RBP.command + 56), v69);
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vdivss  xmm1, xmm0, dword ptr [rbp+5Ch]
            vmovss  [rsp+0D8h+var_90], xmm1
          }
          sliderXd = v71;
          v75 = *(DevGui_SliderPoint **)outSliderPointa.v;
          if ( DevGui_PickSingleSliderPoint(*(DevGui_SliderPoint **)outSliderPointa.v, keyX, keyY, v91, v69, sliderXd, v23, sliderWidth - v70, v93, v89) )
            goto LABEL_76;
        }
        else
        {
          v75 = *(DevGui_SliderPoint **)outSliderPointa.v;
        }
        if ( ++v69 != 3 )
        {
          v71 = v96;
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
    v23 += v17;
    if ( restrictComponentIndex < 0 || _EBX + 3 == restrictComponentIndex )
    {
      __asm { vmovss  xmm2, dword ptr [rbp+5Ch]; scale }
      DevGui_Vec3ToHSV((const vec3_t *)(_RBP.command + 56), &outSliderPointa, *(float *)&_XMM2);
      if ( _EBX >= 3 )
      {
        LODWORD(sliderY) = 3;
        LODWORD(sliderX) = _EBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2841, ASSERT_TYPE_ASSERT, "(unsigned)( componentIndex - 3 ) < (unsigned)( 3 )", "componentIndex - 3 doesn't index 3\n\t%i not in [0, %i)", sliderX, sliderY) )
          __debugbreak();
        LODWORD(sliderYa) = 3;
        LODWORD(sliderXa) = _EBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", sliderXa, sliderYa) )
          __debugbreak();
      }
      _RAX = (int)_EBX;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rax*4+0D8h+outSliderPoint]
        vmovss  [rsp+0D8h+var_90], xmm0
      }
      if ( DevGui_PickSingleSliderPoint(v75, keyX, keyY, v91, _EBX + 3, v96, v23, sliderWidth - v70, v93, v90) )
        break;
    }
    if ( ++_EBX == 3 )
    {
LABEL_48:
      result = 0;
      goto LABEL_49;
    }
  }
LABEL_76:
  result = 1;
LABEL_49:
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_58]
    vmovaps xmm6, [rsp+0D8h+var_48]
  }
  return result;
}

/*
==============
DevGui_RegisterDvars
==============
*/
void DevGui_RegisterDvars()
{
  const dvar_t *v13; 
  const dvar_t *v34; 
  const dvar_t *v85; 
  const dvar_t *v89; 
  float a; 
  float aa; 
  float ab; 
  float ac; 
  float ad; 
  float ae; 
  float af; 
  float ag; 
  float ah; 
  float ai; 
  float aj; 
  float ak; 
  float al; 
  float am; 
  float an; 
  float ao; 
  float ap; 
  float aq; 
  float ar; 
  float as; 
  char v121; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm10, cs:__real@3dcccccd
    vmovss  xmm9, cs:__real@3f4ccccd
    vmovaps xmm3, xmm10; b
    vmovaps xmm2, xmm10; g
    vmovaps xmm1, xmm10; r
    vmovss  [rsp+0B8h+a], xmm9
  }
  v13 = Dvar_RegisterColor("devgui_colorBgnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, a, 0, "Color background for the devgui");
  __asm
  {
    vmovss  xmm1, cs:__real@3f19999a; r
    vmovss  xmm12, cs:__real@3f800000
  }
  devgui_colorBgnd = v13;
  __asm
  {
    vmovaps xmm3, xmm1; b
    vmovaps xmm2, xmm1; g
    vmovss  [rsp+0B8h+a], xmm12
    vmovss  xmm7, cs:__real@3e99999a
  }
  devgui_colorText = Dvar_RegisterColor("devgui_colorText", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, aa, 0, "Text color for the devgui");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vxorps  xmm2, xmm2, xmm2; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm7
  }
  devgui_colorBgndSel = Dvar_RegisterColor("devgui_colorBgndSel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ab, 0, "Selection background color for the devgui");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vmovaps xmm2, xmm12; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm12
    vmovss  xmm11, cs:__real@3e4ccccd
    vmovss  xmm6, cs:__real@3f666666
  }
  devgui_colorTextSel = Dvar_RegisterColor("devgui_colorTextSel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ac, 0, "Selection text color for the devgui");
  __asm
  {
    vmovaps xmm3, xmm11; b
    vmovaps xmm2, xmm11; g
    vmovaps xmm1, xmm11; r
    vmovss  [rsp+0B8h+a], xmm6
    vmovss  xmm8, cs:__real@3f333333
  }
  devgui_colorBgndGray = Dvar_RegisterColor("devgui_colorBgndGray", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ad, 0, "Grayed out background color for the devgui");
  __asm
  {
    vmovaps xmm3, xmm8; b
    vmovaps xmm2, xmm8; g
    vmovaps xmm1, xmm8; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  v34 = Dvar_RegisterColor("devgui_colorTextGray", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ae, 0, "Greyed out text color for the devgui");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; r }
  devgui_colorTextGray = v34;
  __asm
  {
    vmovss  [rsp+0B8h+a], xmm6
    vmovaps xmm3, xmm1; b
    vmovaps xmm2, xmm1; g
  }
  devgui_colorBgndGraySel = Dvar_RegisterColor("devgui_colorBgndGraySel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, af, 0, "Greyed out, selected background color for the devgui");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vmovaps xmm2, xmm12; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  devgui_colorTextGraySel = Dvar_RegisterColor("devgui_colorTextGraySel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ag, 0, "Greyed out, selected text color for the devgui");
  __asm
  {
    vmovaps xmm3, xmm10; b
    vmovaps xmm2, xmm10; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm7
    vmovss  xmm6, cs:__real@3f000000
  }
  devgui_colorBgndFocus = Dvar_RegisterColor("devgui_colorBgndFocus", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ah, 0, "Button color while the mouse hovers over it.");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vmovaps xmm2, xmm6; g
    vmovaps xmm1, xmm6; r
    vmovss  [rsp+0B8h+a], xmm12
    vmovss  xmm0, cs:__real@3f400000
  }
  devgui_colorBgndHeld = Dvar_RegisterColor("devgui_colorBgndHeld", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ai, 0, "Button color when pressed by the mouse.");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vmovaps xmm2, xmm12; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm0
  }
  devgui_colorSliderBgnd = Dvar_RegisterColor("devgui_colorSliderBgnd", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, aj, 0, "Color slider background for the devgui");
  __asm
  {
    vmovaps xmm3, xmm10; b
    vmovaps xmm2, xmm10; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm7
  }
  devgui_colorSliderBgndFocus = Dvar_RegisterColor("devgui_colorSliderBgndFocus", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ak, 0, "Focused color slider background for the devgui");
  __asm
  {
    vmovaps xmm3, xmm6; b
    vmovaps xmm2, xmm6; g
    vmovaps xmm1, xmm6; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  devgui_colorSliderBgndHeld = Dvar_RegisterColor("devgui_colorSliderBgndHeld", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, al, 0, "Held color slider background for the devgui");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vmovaps xmm2, xmm12; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  devgui_colorSliderKnob = Dvar_RegisterColor("devgui_colorSliderKnob", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, am, 0, "Knob color for the devgui");
  __asm
  {
    vmovss  [rsp+0B8h+a], xmm12
    vmovaps xmm3, xmm7; b
    vmovaps xmm2, xmm7; g
    vmovaps xmm1, xmm9; r
  }
  devgui_colorSliderKnobFocus = Dvar_RegisterColor("devgui_colorSliderKnobFocus", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, an, 0, "Focused knob color for the devgui");
  __asm
  {
    vmovaps xmm3, xmm10; b
    vmovaps xmm2, xmm10; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  devgui_colorSliderKnobHeld = Dvar_RegisterColor("devgui_colorSliderKnobHeld", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ao, 0, "Held knob color for the devgui");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vxorps  xmm2, xmm2, xmm2; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  devgui_colorSliderKnobSel = Dvar_RegisterColor("devgui_colorSliderKnobSel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ap, 0, "Selected knob color for the devgui");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  devgui_bevelShade = Dvar_RegisterFloat("devgui_bevelShade", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Bevel shade for the devgui");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vmovaps xmm2, xmm12; g
    vxorps  xmm1, xmm1, xmm1; r
    vmovss  [rsp+0B8h+a], xmm8
  }
  devgui_colorGraphKnotNormal = Dvar_RegisterColor("devgui_colorGraphKnotNormal", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, aq, 0, "Devgiu Color graph knot normal color");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vxorps  xmm2, xmm2, xmm2; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm8
  }
  devgui_colorGraphKnotSelected = Dvar_RegisterColor("devgui_colorGraphKnotSelected", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ar, 0, "Devgui color graph knot selected color");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vxorps  xmm2, xmm2, xmm2; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0B8h+a], xmm12
  }
  devgui_colorGraphKnotEditing = Dvar_RegisterColor("devgui_colorGraphKnotEditing", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, as, 0, "Devgui color graph knot editing color");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v85 = Dvar_RegisterFloat("devgui_mouseScrollDelay", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Delay before scrolling when holding the slider bar with the left mouse button.");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  devgui_mouseScrollDelay = v85;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v89 = Dvar_RegisterFloat("devgui_mouseScrollSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scroll speed when holding the slider bar with the left mouse button.");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3ca3d70a; value
  }
  devgui_mouseScrollSpeed = v89;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  devgui_moveSelectionDelay = Dvar_RegisterFloat("devgui_moveSelectionDelay", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum time between selection changes when moving through the devgui");
  devgui_allowMouse = Dvar_RegisterBool("devgui_allowMouse", 0, 0, "Devgui allow mouse input");
  _R11 = &v121;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
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

void __fastcall DevGui_SetDvarBySliderFraction(int componentIndex, double fraction, double _XMM2_8)
{
  bool v8; 
  bool v9; 
  bool v23; 
  bool v24; 
  char v27; 
  bool v36; 
  bool v37; 
  char v41; 
  bool v48; 
  bool v49; 
  char v54; 
  bool v55; 
  bool v56; 
  bool v120; 
  bool v126; 
  float fmt; 
  float fmta; 
  __int64 source; 
  vec3_t rgb; 
  __int128 v133; 

  __asm
  {
    vmovaps [rsp+0A0h+var_20], xmm6
    vmovaps xmm6, xmm1
  }
  _RDI = componentIndex;
  _RBX = DevGui_SelectedDvar();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3013, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( (int)_RDI < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3014, ASSERT_TYPE_ASSERT, "(componentIndex >= 0)", (const char *)&queryFormat, "componentIndex >= 0") )
    __debugbreak();
  switch ( _RBX->type )
  {
    case 0u:
      v55 = (_DWORD)_RDI == 0;
      if ( (int)_RDI >= 1 )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3061, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1");
        v55 = 0;
        if ( v56 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, cs:__real@3f000000 }
      if ( !v55 != _RBX->latched.enabled )
        Dvar_SetBoolFromSource(_RBX, !v55, DVAR_SOURCE_DEVGUI);
      goto LABEL_13;
    case 1u:
      v8 = (_DWORD)_RDI == 1;
      if ( (int)_RDI >= 1 )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3020, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1");
        v8 = !v9;
        if ( v9 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, dword ptr [rbx+58h]
        vmulss  xmm0, xmm6, dword ptr [rbx+5Ch]
        vaddss  xmm1, xmm2, xmm0; value
        vucomiss xmm1, dword ptr [rbx+38h]
      }
      if ( !v8 )
        Dvar_SetFloatFromSource(_RBX, *(float *)&_XMM1, DVAR_SOURCE_DEVGUI);
      goto LABEL_13;
    case 2u:
      if ( (int)_RDI >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3029, ASSERT_TYPE_ASSERT, "(componentIndex < 2)", (const char *)&queryFormat, "componentIndex < 2") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, dword ptr [rbx+58h]
        vmulss  xmm0, xmm6, dword ptr [rbx+5Ch]
        vmovss  xmm1, dword ptr [rbx+3Ch]
        vaddss  xmm6, xmm2, xmm0
        vmovss  xmm0, dword ptr [rbx+38h]
        vmovss  dword ptr [rbp+57h+rgb], xmm0
        vmovss  dword ptr [rbp+57h+rgb+4], xmm1
      }
      v23 = (_DWORD)_RDI == 2;
      if ( (unsigned int)_RDI >= 2 )
      {
        LODWORD(source) = _RDI;
        v24 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 2);
        v23 = !v24;
        if ( v24 )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rbp+rdi*4+57h+rgb], xmm6
        vmovss  xmm1, dword ptr [rbp+57h+rgb]; x
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm2, dword ptr [rbp+57h+rgb+4]; y
      }
      if ( !v23 )
        goto LABEL_23;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( v23 )
        v27 = 1;
      else
LABEL_23:
        v27 = 0;
      if ( !v27 )
        Dvar_SetVec2FromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, DVAR_SOURCE_DEVGUI);
      goto LABEL_13;
    case 3u:
      if ( (int)_RDI >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3040, ASSERT_TYPE_ASSERT, "(componentIndex < 3)", (const char *)&queryFormat, "componentIndex < 3") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, dword ptr [rbx+58h]
        vmulss  xmm0, xmm6, dword ptr [rbx+5Ch]
        vmovss  xmm1, dword ptr [rbx+3Ch]
        vaddss  xmm6, xmm2, xmm0
        vmovss  xmm0, dword ptr [rbx+38h]
        vmovss  dword ptr [rbp+57h+rgb], xmm0
        vmovss  xmm0, dword ptr [rbx+40h]
        vmovss  dword ptr [rbp+57h+rgb+8], xmm0
        vmovss  dword ptr [rbp+57h+rgb+4], xmm1
      }
      v36 = (_DWORD)_RDI == 3;
      if ( (unsigned int)_RDI >= 3 )
      {
        LODWORD(source) = _RDI;
        v37 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 3);
        v36 = !v37;
        if ( v37 )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rbp+rdi*4+57h+rgb], xmm6
        vmovss  xmm1, dword ptr [rbp+57h+rgb]; x
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm3, dword ptr [rbp+57h+rgb+8]; z
        vmovss  xmm2, dword ptr [rbp+57h+rgb+4]; y
      }
      if ( !v36 )
        goto LABEL_36;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( !v36 )
        goto LABEL_36;
      __asm { vucomiss xmm3, dword ptr [rbx+40h] }
      if ( !v36 )
        goto LABEL_36;
      v41 = 1;
      goto LABEL_37;
    case 4u:
      if ( (int)_RDI >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3051, ASSERT_TYPE_ASSERT, "(componentIndex < 4)", (const char *)&queryFormat, "componentIndex < 4") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm0, xmm6, dword ptr [rbx+5Ch]
        vmulss  xmm2, xmm1, dword ptr [rbx+58h]
        vaddss  xmm6, xmm2, xmm0
        vmovups xmm0, xmmword ptr [rbx+38h]
        vmovups [rbp+57h+var_40], xmm0
      }
      v48 = (_DWORD)_RDI == 4;
      if ( (unsigned int)_RDI >= 4 )
      {
        LODWORD(source) = _RDI;
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 4);
        v48 = !v49;
        if ( v49 )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rbp+rdi*4+57h+var_40], xmm6
        vmovss  xmm1, dword ptr [rbp+57h+var_40]; x
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm0, dword ptr [rbp+57h+var_40+0Ch]
        vmovss  xmm3, dword ptr [rbp+57h+var_40+8]; z
        vmovss  xmm2, dword ptr [rbp+57h+var_40+4]; y
      }
      if ( !v48 )
        goto LABEL_50;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( !v48 )
        goto LABEL_50;
      __asm { vucomiss xmm3, dword ptr [rbx+40h] }
      if ( !v48 )
        goto LABEL_50;
      __asm { vucomiss xmm0, dword ptr [rbx+44h] }
      if ( v48 )
        v54 = 1;
      else
LABEL_50:
        v54 = 0;
      if ( !v54 )
      {
        __asm { vmovss  dword ptr [rsp+0A0h+fmt], xmm0 }
        Dvar_SetVec4FromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, DVAR_SOURCE_DEVGUI);
      }
      goto LABEL_13;
    case 5u:
      if ( (int)_RDI >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3069, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovd   xmm2, dword ptr [rbx+58h]
        vcvtdq2ps xmm2, xmm2
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm3, xmm2, xmm1
        vmovd   xmm2, dword ptr [rbx+5Ch]
        vcvtdq2ps xmm2, xmm2
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm1, xmm3, xmm0
      }
      goto LABEL_62;
    case 6u:
      if ( (int)_RDI >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3078, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2sd xmm2, xmm2, qword ptr [rbx+58h]
        vcvtss2sd xmm4, xmm6, xmm6
        vsubsd  xmm1, xmm0, xmm4
        vmulsd  xmm3, xmm2, xmm1
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2sd xmm2, xmm2, qword ptr [rbx+60h]
        vmulsd  xmm0, xmm2, xmm4
        vaddsd  xmm1, xmm3, xmm0
        vaddsd  xmm3, xmm1, cs:__real@3fe0000000000000
        vxorpd  xmm2, xmm2, xmm2
        vroundsd xmm2, xmm2, xmm3, 1
        vcvttsd2si rdx, xmm2; value
      }
      if ( _RDX != _RBX->latched.integer64 )
        Dvar_SetInt64FromSource(_RBX, _RDX, DVAR_SOURCE_DEVGUI);
      goto LABEL_13;
    case 7u:
      if ( (int)_RDI >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3087, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      __asm
      {
        vmovsd  xmm3, cs:__real@43f0000000000000
        vxorps  xmm2, xmm2, xmm2
        vcvtss2sd xmm4, xmm6, xmm6
        vcvtsi2sd xmm2, xmm2, rax
      }
      if ( _RBX->domain.integer64.min < 0 )
        __asm { vaddsd  xmm2, xmm2, xmm3 }
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vsubsd  xmm1, xmm0, xmm4
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
        vmulsd  xmm5, xmm2, xmm1
      }
      if ( _RBX->domain.integer64.max < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm3 }
      __asm
      {
        vmulsd  xmm0, xmm0, xmm4
        vaddsd  xmm1, xmm5, xmm0
        vaddsd  xmm2, xmm1, cs:__real@3fe0000000000000
        vmovsd  xmm0, cs:__real@43e0000000000000
        vxorpd  xmm3, xmm3, xmm3
        vroundsd xmm3, xmm3, xmm2, 1
        vcomisd xmm3, xmm0
        vsubsd  xmm3, xmm3, xmm0
        vcomisd xmm3, xmm0
        vcvttsd2si rdx, xmm3
      }
      if ( _RDX != _RBX->latched.integer64 )
        Dvar_SetUInt64FromSource(_RBX, _RDX, DVAR_SOURCE_DEVGUI);
      goto LABEL_13;
    case 8u:
      if ( (int)_RDI >= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3096, ASSERT_TYPE_ASSERT, "(componentIndex < 1)", (const char *)&queryFormat, "componentIndex < 1") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
      }
LABEL_62:
      __asm
      {
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si edx, xmm1; value
      }
      if ( _EDX != _RBX->latched.integer )
        Dvar_SetIntFromSource(_RBX, _EDX, DVAR_SOURCE_DEVGUI);
      goto LABEL_13;
    case 0xAu:
      if ( (int)_RDI >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3105, ASSERT_TYPE_ASSERT, "(componentIndex < 3)", (const char *)&queryFormat, "componentIndex < 3") )
        __debugbreak();
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@437f0000
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm3, xmm1, xmm2
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vcvttss2si esi, xmm4
      }
      if ( (_ESI < 0 || (unsigned int)_ESI > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)_ESI, "signed", _ESI) )
        __debugbreak();
      if ( (_BYTE)_ESI != *(&_RBX->latched.enabled + _RDI) )
      {
        LODWORD(rgb.v[0]) = _RBX->latched.integer;
        *((_BYTE *)rgb.v + _RDI) = _ESI;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, eax; b
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, eax; g
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax; r
          vmovss  dword ptr [rsp+0A0h+fmt], xmm0
        }
        Dvar_SetColorFromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, DVAR_SOURCE_DEVGUI);
      }
      goto LABEL_13;
    case 0xBu:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+38h]; jumptable 0000000141FA67EA case 11
        vmovss  xmm1, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbp+57h+rgb], xmm0
        vmovss  xmm0, dword ptr [rbx+40h]
        vmovss  dword ptr [rbp+57h+rgb+8], xmm0
        vmovss  dword ptr [rbp+57h+rgb+4], xmm1
      }
      v120 = (_DWORD)_RDI == 3;
      if ( (int)_RDI >= 3 )
      {
        if ( (int)_RDI >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3127, ASSERT_TYPE_ASSERT, "(componentIndex < 6)", (const char *)&queryFormat, "componentIndex < 6") )
          __debugbreak();
        __asm { vmovss  xmm2, dword ptr [rbx+5Ch]; scale }
        DevGui_Vec3ToHSV(&rgb, (vec3_t *)&v133, *(float *)&_XMM2);
        if ( (unsigned int)(_RDI - 3) >= 3 )
        {
          LODWORD(source) = _RDI - 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 3) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+5Ch]; scale
          vmovss  dword ptr [rbp+rdi*4+57h+rgb+4], xmm6
        }
        DevGui_Vec3FromHSV(&rgb, (const vec3_t *)&v133, *(float *)&_XMM2);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vsubss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, dword ptr [rbx+58h]
          vmulss  xmm0, xmm6, dword ptr [rbx+5Ch]
          vaddss  xmm6, xmm2, xmm0
        }
        if ( (unsigned int)_RDI >= 3 )
        {
          LODWORD(source) = _RDI;
          v126 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", source, 3);
          v120 = !v126;
          if ( v126 )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rbp+rdi*4+57h+rgb], xmm6 }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+57h+rgb]
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm3, dword ptr [rbp+57h+rgb+8]
        vmovss  xmm2, dword ptr [rbp+57h+rgb+4]
      }
      if ( !v120 )
        goto LABEL_36;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( !v120 )
        goto LABEL_36;
      __asm { vucomiss xmm3, dword ptr [rbx+40h] }
      if ( v120 )
        v41 = 1;
      else
LABEL_36:
        v41 = 0;
LABEL_37:
      if ( !v41 )
        Dvar_SetVec3FromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, DVAR_SOURCE_DEVGUI);
LABEL_13:
      __asm { vmovaps xmm6, [rsp+0A0h+var_20] }
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

void __fastcall DevGui_Update(LocalClientNum_t localClientNum, double deltaTime)
{
  unsigned int v3; 
  __int64 v6; 
  bool v7; 
  int IsKeyDown; 
  char v9; 
  DevMenuItem *Menu; 
  int updated; 
  char v17; 
  char v18; 
  BOOL v21; 
  int MenuScroll; 
  BOOL v23; 
  bool v24; 
  __int64 v25; 
  int ControllerFromClient; 
  int MouseY; 
  int MouseX; 
  int v30; 
  int v31; 
  unsigned __int16 selectedMenu; 
  int v33; 
  DevMenuItem *v34; 
  unsigned __int16 v35; 
  unsigned __int16 v36; 
  unsigned __int16 heldButtonHandle; 
  bool v42; 
  DevMenuItem *v43; 
  DevMenuItem *v44; 
  unsigned __int16 parent; 
  unsigned __int16 v46; 
  int v47; 
  int origin; 
  int top; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  v3 = 0;
  __asm { vmovaps xmm6, xmm1 }
  do
  {
    v6 = v3;
    v7 = devguiGlob.mouseButtonDown[v3];
    IsKeyDown = CL_Keys_IsKeyDown(localClientNum, v3 + 187);
    devguiGlob.mouseButtonDownPrev[v3++] = v7;
    devguiGlob.mouseButtonDown[v6] = IsKeyDown != 0;
    v9 = v7 ^ (IsKeyDown != 0);
    devguiGlob.mouseButtonPressed[v6] = (IsKeyDown != 0) & v9;
    devguiGlob.mouseButtonReleased[v6] = v7 & v9;
  }
  while ( v3 != 2 );
  devguiGlob.focusButtonHandle = 0;
  devguiGlob.slider.focus = 0;
  devguiGlob.slider.knobFocus = 0;
  if ( !devguiGlob.isActive || !devguiGlob.editingMenuItem || DevGui_GetMenu(devguiGlob.selectedMenu)->childType != 1 )
  {
    devguiGlob.slider.held = 0;
    devguiGlob.slider.knobHeld = 0;
  }
  if ( devguiGlob.isActive && !devguiGlob.bindNextKey )
  {
    __asm { vmovaps xmm1, xmm6; deltaTime }
    if ( DevGui_InputUpdate(localClientNum, *(float *)&_XMM1, 1) )
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
          __asm { vmovaps xmm1, xmm6; deltaTime }
          DevGui_UpdateGraph(localClientNum, *(float *)&_XMM1);
        }
        else
        {
          updated = 0;
          if ( devguiGlob.editingMenuItem )
          {
            if ( Menu->childType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3336, ASSERT_TYPE_ASSERT, "(selMenuItem->childType == DEV_CHILD_DVAR)", (const char *)&queryFormat, "selMenuItem->childType == DEV_CHILD_DVAR") )
              __debugbreak();
            __asm { vmovaps xmm0, xmm6; deltaTime }
            DevGui_UpdateDvar(*(float *)&_XMM0);
            __asm
            {
              vmovss  xmm0, cs:devguiGlob.moveSelectionDelay
              vxorps  xmm1, xmm1, xmm1
              vcomiss xmm0, xmm1
            }
            if ( v17 | v18 && !devguiGlob.heldButtonHandle && !devguiGlob.slider.held && !devguiGlob.slider.knobHeld )
              updated = DevGui_UpdateSelection();
          }
          else
          {
            __asm
            {
              vmovss  xmm0, cs:devguiGlob.moveSelectionDelay
              vxorps  xmm1, xmm1, xmm1
              vcomiss xmm0, xmm1
            }
            if ( !devguiGlob.editingMenuItem && !devguiGlob.heldButtonHandle && !devguiGlob.slider.held && !devguiGlob.slider.knobHeld )
            {
              v21 = DevGui_MoveSelectionHorizontally();
              MenuScroll = DevGui_GetMenuScroll(SCROLL_YAXIS);
              v23 = MenuScroll != 0;
              v24 = MenuScroll <= 0;
              if ( MenuScroll < 0 )
              {
                v25 = (unsigned int)-MenuScroll;
                MenuScroll = 0;
                do
                {
                  DevGui_MoveDown();
                  --v25;
                }
                while ( v25 );
                v24 = 1;
              }
              if ( !v24 )
              {
                do
                {
                  DevGui_MoveUp();
                  --MenuScroll;
                }
                while ( MenuScroll > 0 );
              }
              updated = v23 || v21;
            }
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
                __asm { vmovaps xmm3, xmm6; deltaTime }
                DevGui_MouseEditSlider(localClientNum, MouseX, MouseY, *(double *)&_XMM3);
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
              v30 = DevGui_GetMouseY();
              v31 = DevGui_GetMouseX();
              selectedMenu = devguiGlob.selectedMenu;
              v33 = v31;
              v34 = DevGui_GetMenu(devguiGlob.selectedMenu);
              v35 = DevGui_PickMenu(v34->parent, selectedMenu, v33, v30, &origin);
              v36 = v35;
              devguiGlob.focusButtonHandle = v35;
              if ( devguiGlob.heldButtonHandle )
              {
                if ( !devguiGlob.mouseButtonDown[0] )
                {
                  if ( v35 == devguiGlob.heldButtonHandle )
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
                  heldButtonHandle = v36;
                devguiGlob.heldButtonHandle = heldButtonHandle;
              }
            }
          }
          __asm
          {
            vmovss  xmm0, cs:devguiGlob.moveSelectionDelay
            vsubss  xmm1, xmm0, xmm6
            vmovss  cs:devguiGlob.moveSelectionDelay, xmm1
          }
          if ( updated )
          {
            _RAX = devgui_moveSelectionDelay;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+28h]
              vmovss  cs:devguiGlob.moveSelectionDelay, xmm0
            }
          }
          if ( !devguiGlob.heldButtonHandle && !devguiGlob.slider.held && !devguiGlob.slider.knobHeld )
          {
            v42 = devguiGlob.mouseButtonReleased[1];
            if ( DevGui_IsButtonReleased(INPUT_ACCEPT) || v42 )
              DevGui_Accept(localClientNum);
            if ( DevGui_IsButtonReleased(INPUT_REJECT) )
            {
              devguiGlob.heldButtonHandle = 0;
              if ( !devguiGlob.selectedMenu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2008, ASSERT_TYPE_ASSERT, "(devguiGlob.selectedMenu)", (const char *)&queryFormat, "devguiGlob.selectedMenu") )
                __debugbreak();
              v43 = DevGui_GetMenu(devguiGlob.selectedMenu);
              v44 = v43;
              if ( devguiGlob.editingMenuItem )
              {
                Dvar_ClearLatchedValue(v43->child.dvar);
                devguiGlob.editingMenuItem = 0;
              }
              else
              {
                parent = v43->parent;
                if ( parent && DevGui_GetMenu(parent)->parent )
                {
                  devguiGlob.selectedMenu = v44->parent;
                }
                else
                {
                  v46 = devguiGlob.topmostMenu.child.menu;
                  if ( devguiGlob.topmostMenu.child.menu )
                  {
                    if ( devguiGlob.selectedMenu )
                      goto LABEL_84;
                    if ( devguiGlob.isActive )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 3394, ASSERT_TYPE_ASSERT, "(!devguiGlob.isActive)", (const char *)&queryFormat, "!devguiGlob.isActive") )
                        __debugbreak();
                      v46 = devguiGlob.topmostMenu.child.menu;
                    }
                    devguiGlob.selectedMenu = v46;
                    if ( v46 )
                    {
                      DevGui_SelectTopLevelChild();
                      if ( devguiGlob.selectedMenu )
                      {
LABEL_84:
                        devguiGlob.isActive = !devguiGlob.isActive;
                        if ( devguiGlob.isActive )
                        {
                          v47 = Cmd_LocalControllerIndex();
                          DevGui_SelectGamepad(v47);
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
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
}

/*
==============
DevGui_UpdateDvar
==============
*/

void __fastcall DevGui_UpdateDvar(double deltaTime, double _XMM1_8, double _XMM2_8)
{
  int type; 
  bool v35; 
  bool v36; 
  bool v56; 
  bool v57; 
  bool v76; 
  bool v77; 
  bool v83; 
  int max; 
  int stringCount; 
  int v87; 
  __int64 updated; 
  int selRow; 
  int v112; 
  bool v115; 
  bool v116; 
  bool v127; 
  bool v133; 
  int v138; 
  int v144; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  __int64 axis; 
  __int64 axisa; 
  __int64 axisb; 
  __int64 axisc; 
  __int64 axisd; 
  double axisf; 
  double axisg; 
  __int64 axise; 
  __int64 minChange; 
  float minChangeg; 
  float minChangeh; 
  __int64 minChangea; 
  float minChangeb; 
  __int64 minChangec; 
  float minChangei; 
  __int64 minChanged; 
  float minChangej; 
  __int64 minChangee; 
  float minChangek; 
  __int64 minChangef; 
  __int128 v180; 
  vec3_t hsv; 

  __asm
  {
    vmovaps [rsp+0C0h+var_40], xmm8
    vmovaps xmm8, xmm0
  }
  _RBX = DevGui_SelectedDvar();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2243, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  type = _RBX->type;
  __asm
  {
    vmovaps [rsp+0C0h+var_20], xmm6
    vmovaps [rsp+0C0h+var_30], xmm7
    vmovaps [rsp+0C0h+var_50], xmm9
  }
  switch ( type )
  {
    case 0:
      __asm { vmovaps xmm0, xmm8; deltaTime }
      v83 = DevGui_UpdateIntScroll(*(float *)&_XMM0, _RBX->latched.enabled, 0, 1, SCROLL_XAXIS) != 0;
      if ( v83 != _RBX->latched.enabled )
        Dvar_SetBoolFromSource(_RBX, v83, DVAR_SOURCE_DEVGUI);
      break;
    case 1:
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+60h]; jumptable 0000000141FA7DBF case 1
        vmovss  xmm1, dword ptr [rbx+5Ch]; max
        vmovss  xmm0, dword ptr [rbx+58h]; min
      }
      *(float *)&_XMM0 = DevGui_PickFloatScrollStep(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+5Ch]; max
        vmovss  xmm2, dword ptr [rbx+58h]; min
        vxorps  xmm1, xmm1, xmm1
        vmovss  [rsp+0C0h+minChange], xmm1
        vmovss  xmm1, dword ptr [rbx+38h]; value
        vmovss  dword ptr [rsp+0C0h+fmt], xmm0
        vmovaps xmm0, xmm8; deltaTime
      }
      *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, SCROLL_XAXIS, minChangeg);
      __asm { vucomiss xmm0, dword ptr [rbx+38h] }
      if ( !v35 )
      {
        __asm { vmovaps xmm1, xmm0; value }
        Dvar_SetFloatFromSource(_RBX, *(float *)&_XMM1, DVAR_SOURCE_DEVGUI);
      }
      break;
    case 2:
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+5Ch]; jumptable 0000000141FA7DBF case 2
        vmovss  xmm7, dword ptr [rbx+58h]
        vmovss  xmm2, dword ptr [rbx+60h]; stepOverride
        vmovaps xmm1, xmm6; max
        vmovaps xmm0, xmm7; min
      }
      *(float *)&_XMM0 = DevGui_PickFloatScrollStep(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
      _RSI = devguiGlob.selRow;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+38h]
        vmovss  xmm2, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbp+57h+var_80], xmm1
        vmovss  dword ptr [rbp+57h+var_80+4], xmm2
        vmovaps xmm9, xmm0
      }
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+rsi*4+57h+var_80]; value
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+0C0h+minChange], xmm0
        vmovaps xmm0, xmm8; deltaTime
        vmovaps xmm3, xmm6; max
        vmovaps xmm2, xmm7; min
        vmovss  dword ptr [rsp+0C0h+fmt], xmm9
      }
      *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, SCROLL_XAXIS, minChangeh);
      _RSI = devguiGlob.selRow;
      __asm { vmovaps xmm6, xmm0 }
      v35 = devguiGlob.selRow == 4;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(minChangea) = 4;
        LODWORD(axisa) = devguiGlob.selRow;
        v36 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisa, minChangea);
        v35 = !v36;
        if ( v36 )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rbp+rsi*4+57h+var_80], xmm6
        vmovss  xmm1, dword ptr [rbp+57h+var_80]; x
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm2, dword ptr [rbp+57h+var_80+4]; y
      }
      if ( !v35 )
        goto LABEL_15;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( !v35 )
LABEL_15:
        Dvar_SetVec2FromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, DVAR_SOURCE_DEVGUI);
      break;
    case 3:
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+5Ch]; jumptable 0000000141FA7DBF case 3
        vmovss  xmm7, dword ptr [rbx+58h]
        vmovss  xmm2, dword ptr [rbx+60h]; stepOverride
        vmovaps xmm1, xmm6; max
        vmovaps xmm0, xmm7; min
      }
      *(float *)&_XMM0 = DevGui_PickFloatScrollStep(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
      __asm { vmovss  xmm1, dword ptr [rbx+38h] }
      _RSI = devguiGlob.selRow;
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbp+57h+var_80], xmm1
        vmovss  xmm1, dword ptr [rbx+40h]
        vmovss  dword ptr [rbp+57h+var_80+8], xmm1
        vmovss  dword ptr [rbp+57h+var_80+4], xmm2
        vmovaps xmm9, xmm0
      }
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+0C0h+minChange], xmm0
        vmovaps xmm3, xmm6; max
        vmovaps xmm2, xmm7; min
      }
      goto LABEL_20;
    case 4:
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+5Ch]; jumptable 0000000141FA7DBF case 4
        vmovss  xmm7, dword ptr [rbx+58h]
        vmovss  xmm2, dword ptr [rbx+60h]; stepOverride
        vmovaps xmm1, xmm6; max
        vmovaps xmm0, xmm7; min
      }
      *(float *)&_XMM0 = DevGui_PickFloatScrollStep(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
      _RSI = devguiGlob.selRow;
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+38h]
        vmovups [rbp+57h+var_80], xmm1
        vmovaps xmm9, xmm0
      }
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+rsi*4+57h+var_80]; value
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+0C0h+minChange], xmm0
        vmovaps xmm0, xmm8; deltaTime
        vmovaps xmm3, xmm6; max
        vmovaps xmm2, xmm7; min
        vmovss  dword ptr [rsp+0C0h+fmt], xmm9
      }
      *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, SCROLL_XAXIS, minChangei);
      _RSI = devguiGlob.selRow;
      __asm { vmovaps xmm6, xmm0 }
      v76 = devguiGlob.selRow == 4;
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(minChanged) = 4;
        LODWORD(axisc) = devguiGlob.selRow;
        v77 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisc, minChanged);
        v76 = !v77;
        if ( v77 )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rbp+rsi*4+57h+var_80], xmm6
        vmovss  xmm1, dword ptr [rbp+57h+var_80]; x
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm0, dword ptr [rbp+57h+var_80+0Ch]
        vmovss  xmm3, dword ptr [rbp+57h+var_80+8]; z
        vmovss  xmm2, dword ptr [rbp+57h+var_80+4]; y
      }
      if ( !v76 )
        goto LABEL_38;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( !v76 )
        goto LABEL_38;
      __asm { vucomiss xmm3, dword ptr [rbx+40h] }
      if ( !v76 )
        goto LABEL_38;
      __asm { vucomiss xmm0, dword ptr [rbx+44h] }
      if ( !v76 )
      {
LABEL_38:
        __asm { vmovss  dword ptr [rsp+0C0h+fmt], xmm0 }
        Dvar_SetVec4FromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, DVAR_SOURCE_DEVGUI);
      }
      break;
    case 5:
      max = _RBX->domain.integer.max;
      stringCount = _RBX->domain.enumeration.stringCount;
      goto LABEL_42;
    case 6:
      __asm { vmovaps xmm0, xmm8; deltaTime }
      updated = DevGui_UpdateInt64Scroll(*(float *)&_XMM0, _RBX->latched.integer64, _RBX->domain.integer64.min, _RBX->domain.integer64.max, SCROLL_XAXIS);
      goto LABEL_45;
    case 7:
      __asm { vmovaps xmm0, xmm8; deltaTime }
      updated = DevGui_UpdateUInt64Scroll(*(float *)&_XMM0, _RBX->latched.unsignedInt64, _RBX->domain.unsignedInt64.min, _RBX->domain.unsignedInt64.max, SCROLL_XAXIS);
LABEL_45:
      if ( updated != _RBX->latched.integer64 )
        Dvar_SetInt64FromSource(_RBX, updated, DVAR_SOURCE_DEVGUI);
      break;
    case 8:
      max = _RBX->domain.enumeration.stringCount - 1;
      stringCount = 0;
LABEL_42:
      __asm { vmovaps xmm0, xmm8; deltaTime }
      v87 = DevGui_UpdateIntScroll(*(float *)&_XMM0, _RBX->latched.integer, stringCount, max, SCROLL_XAXIS);
      if ( v87 != _RBX->latched.integer )
        Dvar_SetIntFromSource(_RBX, v87, DVAR_SOURCE_DEVGUI);
      break;
    case 10:
      __asm { vmovss  xmm6, cs:__real@3b808081; jumptable 0000000141FA7DBF case 10 }
      selRow = devguiGlob.selRow;
      _R14 = devguiGlob.selRow;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbp+57h+var_80], xmm0
        vmulss  xmm0, xmm1, xmm6
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbp+57h+var_80+4], xmm0
        vmulss  xmm0, xmm1, xmm6
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbp+57h+var_80+8], xmm0
        vmulss  xmm0, xmm1, xmm6
        vmovss  dword ptr [rbp+57h+var_80+0Ch], xmm0
      }
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(axis) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
          __debugbreak();
        selRow = devguiGlob.selRow;
      }
      __asm { vmovss  xmm7, dword ptr [rbp+r14*4+57h+var_80] }
      if ( (unsigned int)selRow >= 4 )
      {
        LODWORD(minChange) = 4;
        LODWORD(axis) = selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, minChange) )
          __debugbreak();
      }
      __asm { vmovss  xmm3, cs:__real@3f800000; max }
      _RAX = selRow;
      __asm
      {
        vmovss  [rsp+0C0h+minChange], xmm6
        vxorps  xmm2, xmm2, xmm2; min
        vmovss  xmm1, dword ptr [rbp+rax*4+57h+var_80]; value
        vmovaps xmm0, xmm8; deltaTime
        vmovss  dword ptr [rsp+0C0h+fmt], xmm6
      }
      *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, SCROLL_XAXIS, minChangej);
      v112 = devguiGlob.selRow;
      _R14 = devguiGlob.selRow;
      __asm { vmovaps xmm6, xmm0 }
      if ( devguiGlob.selRow >= 4u )
      {
        LODWORD(minChangee) = 4;
        LODWORD(axisd) = devguiGlob.selRow;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisd, minChangee) )
          __debugbreak();
        v112 = devguiGlob.selRow;
      }
      __asm { vmovss  dword ptr [rbp+r14*4+57h+var_80], xmm6 }
      v115 = v112 == 4;
      if ( (unsigned int)v112 >= 4 )
      {
        LODWORD(minChangee) = 4;
        LODWORD(axisd) = v112;
        v116 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisd, minChangee);
        v115 = !v116;
        if ( v116 )
          __debugbreak();
      }
      _RAX = v112;
      __asm { vucomiss xmm7, dword ptr [rbp+rax*4+57h+var_80] }
      if ( !v115 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+var_80+0Ch]
          vmovss  xmm3, dword ptr [rbp+57h+var_80+8]; b
          vmovss  xmm2, dword ptr [rbp+57h+var_80+4]; g
          vmovss  xmm1, dword ptr [rbp+57h+var_80]; r
          vmovss  dword ptr [rsp+0C0h+fmt], xmm0
        }
        Dvar_SetColorFromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, DVAR_SOURCE_DEVGUI);
      }
      break;
    case 11:
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000; jumptable 0000000141FA7DBF case 11
        vmovaps xmm1, xmm7; max
        vxorps  xmm2, xmm2, xmm2; stepOverride
        vxorps  xmm0, xmm0, xmm0; min
        vxorps  xmm6, xmm6, xmm6
      }
      *(float *)&_XMM0 = DevGui_PickFloatScrollStep(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2);
      v127 = devguiGlob.selRow <= 3u;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+38h]
        vmovss  xmm2, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbp+57h+var_80], xmm1
        vmovss  xmm1, dword ptr [rbx+40h]
        vmovss  dword ptr [rbp+57h+var_80+8], xmm1
        vmovss  dword ptr [rbp+57h+var_80+4], xmm2
        vmovaps xmm9, xmm0
      }
      if ( devguiGlob.selRow >= 3 )
      {
        if ( devguiGlob.selRow >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2331, ASSERT_TYPE_ASSERT, "(devguiGlob.selRow < 6)", (const char *)&queryFormat, "devguiGlob.selRow < 6") )
          __debugbreak();
        __asm { vmovss  xmm2, dword ptr [rbx+5Ch]; scale }
        DevGui_Vec3ToHSV((const vec3_t *)&v180, &hsv, *(float *)&_XMM2);
        v138 = devguiGlob.selRow - 3;
        if ( (unsigned int)(devguiGlob.selRow - 3) >= 3 )
        {
          LODWORD(axis) = devguiGlob.selRow - 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 3) )
            __debugbreak();
        }
        _RAX = v138;
        __asm
        {
          vmovss  [rsp+0C0h+minChange], xmm6
          vmovaps xmm3, xmm7; max
          vmovss  xmm1, dword ptr [rbp+rax*4+57h+hsv]; value
          vxorps  xmm2, xmm2, xmm2; min
          vmovaps xmm0, xmm8; deltaTime
          vmovss  dword ptr [rsp+0C0h+fmt], xmm9
        }
        *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, SCROLL_XAXIS, minChangek);
        v144 = devguiGlob.selRow - 3;
        __asm { vmovaps xmm6, xmm0 }
        if ( (unsigned int)(devguiGlob.selRow - 3) >= 3 )
        {
          LODWORD(minChangef) = 3;
          LODWORD(axise) = devguiGlob.selRow - 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axise, minChangef) )
            __debugbreak();
        }
        __asm { vmovss  xmm2, dword ptr [rbx+5Ch]; scale }
        _RAX = v144;
        __asm { vmovss  dword ptr [rbp+rax*4+57h+hsv], xmm6 }
        DevGui_Vec3FromHSV((vec3_t *)&v180, &hsv, *(float *)&_XMM2);
      }
      else
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+58h]
          vucomiss xmm1, xmm6
        }
        if ( devguiGlob.selRow != 3 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm1, xmm1
            vmovsd  qword ptr [rsp+0C0h+axis], xmm0
          }
          v133 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2324, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.min == 0.0f ) )", "( dvar->domain.vector.min ) = %g", axisf);
          v127 = !v133;
          if ( v133 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+5Ch]
          vcomiss xmm0, xmm6
        }
        if ( v127 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  qword ptr [rsp+0C0h+axis], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2325, ASSERT_TYPE_ASSERT, "( ( dvar->domain.vector.max > 0.0f ) )", "( dvar->domain.vector.max ) = %g", axisg) )
            __debugbreak();
        }
        _RSI = devguiGlob.selRow;
        __asm { vmovss  xmm7, dword ptr [rbx+5Ch] }
        if ( devguiGlob.selRow >= 4u )
        {
          LODWORD(axis) = devguiGlob.selRow;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axis, 4) )
            __debugbreak();
        }
        __asm
        {
          vmovss  [rsp+0C0h+minChange], xmm6
          vmovaps xmm3, xmm7
          vxorps  xmm2, xmm2, xmm2
        }
LABEL_20:
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+rsi*4+57h+var_80]; value
          vmovaps xmm0, xmm8; deltaTime
          vmovss  dword ptr [rsp+0C0h+fmt], xmm9
        }
        *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, SCROLL_XAXIS, minChangeb);
        _RSI = devguiGlob.selRow;
        __asm { vmovaps xmm6, xmm0 }
        v56 = devguiGlob.selRow == 4;
        if ( devguiGlob.selRow >= 4u )
        {
          LODWORD(minChangec) = 4;
          LODWORD(axisb) = devguiGlob.selRow;
          v57 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", axisb, minChangec);
          v56 = !v57;
          if ( v57 )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rbp+rsi*4+57h+var_80], xmm6 }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+57h+var_80]; x
        vucomiss xmm1, dword ptr [rbx+38h]
        vmovss  xmm2, dword ptr [rbp+57h+var_80+4]; y
        vmovss  xmm3, dword ptr [rbp+57h+var_80+8]; z
      }
      if ( !v56 )
        goto LABEL_27;
      __asm { vucomiss xmm2, dword ptr [rbx+3Ch] }
      if ( !v56 )
        goto LABEL_27;
      __asm { vucomiss xmm3, dword ptr [rbx+40h] }
      if ( !v56 )
LABEL_27:
        Dvar_SetVec3FromSource(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, DVAR_SOURCE_DEVGUI);
      break;
    default:
      LODWORD(axis) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2343, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "invalid dvar type %i", axis) )
        __debugbreak();
      break;
  }
  __asm
  {
    vmovaps xmm9, [rsp+0C0h+var_50]
    vmovaps xmm7, [rsp+0C0h+var_30]
    vmovaps xmm6, [rsp+0C0h+var_20]
    vmovaps xmm8, [rsp+0C0h+var_40]
  }
}

/*
==============
DevGui_UpdateGraph
==============
*/

void __fastcall DevGui_UpdateGraph(LocalClientNum_t localClientNum, double deltaTime, double _XMM2_8)
{
  DevMenuItem *Menu; 
  DevGraph *graph; 
  unsigned int v14; 
  int selectedKnot; 
  void (__fastcall *eventCallback)(const DevGraph *, DevEventType, LocalClientNum_t); 
  void (__fastcall *v17)(const DevGraph *, DevEventType, LocalClientNum_t); 
  void (__fastcall *v18)(const DevGraph *, DevEventType, LocalClientNum_t); 
  unsigned int v37; 
  bool v44; 
  bool v61; 
  void (__fastcall *v73)(const DevGraph *, DevEventType, LocalClientNum_t); 
  __int16 MenuScroll; 
  int v81; 
  int v82; 
  float fmt; 
  float fmta; 
  float v85; 
  float v86; 

  __asm
  {
    vmovaps [rsp+0C8h+var_88], xmm12
    vmovaps xmm12, xmm1
  }
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
  v14 = *graph->knotCount;
  if ( (v14 < 2 || v14 > graph->knotCountMax) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 2454, ASSERT_TYPE_ASSERT, "(currentKnotCount >= 2 && currentKnotCount <= graph->knotCountMax)", (const char *)&queryFormat, "currentKnotCount >= 2 && currentKnotCount <= graph->knotCountMax") )
    __debugbreak();
  selectedKnot = graph->selectedKnot;
  if ( selectedKnot < 0 || selectedKnot >= (int)v14 )
    graph->selectedKnot = 0;
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_EDIT) )
    devguiGlob.editingKnot = !devguiGlob.editingKnot;
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_ADD) )
  {
    DevGui_AddGraphKnot(graph, localClientNum);
    devguiGlob.editingKnot = 0;
    goto LABEL_59;
  }
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_REMOVE) )
  {
    DevGui_RemoveGraphKnot(graph, localClientNum);
    devguiGlob.editingKnot = 0;
    goto LABEL_59;
  }
  if ( DevGui_IsButtonPressed(INPUT_GRAPH_SAVE) )
  {
    eventCallback = graph->eventCallback;
    if ( eventCallback )
      eventCallback(graph, EVENT_SAVE, localClientNum);
    goto LABEL_59;
  }
  if ( DevGui_IsButtonPressed(INPUT_ACCEPT) )
  {
    v17 = graph->eventCallback;
    if ( v17 )
      v17(graph, EVENT_ACCEPT, localClientNum);
    goto LABEL_59;
  }
  if ( DevGui_IsButtonPressed(INPUT_REJECT) )
  {
    v18 = graph->eventCallback;
    if ( v18 )
      v18(graph, EVENT_DEACTIVATE, localClientNum);
    devguiGlob.editingMenuItem = 0;
    goto LABEL_59;
  }
  if ( devguiGlob.editingKnot )
  {
    _RCX = graph->selectedKnot;
    _RAX = graph->knots;
    __asm
    {
      vmovaps [rsp+0C8h+var_28], xmm6
      vmovss  xmm6, cs:__real@3cf5c28f
      vmovaps [rsp+0C8h+var_38], xmm7
      vmovss  xmm7, dword ptr [rax+rcx*8+4]
      vmovaps [rsp+0C8h+var_48], xmm8
      vmovaps [rsp+0C8h+var_58], xmm9
      vmovss  xmm9, dword ptr [rax+rcx*8]
      vmovaps [rsp+0C8h+var_68], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+0C8h+var_98], xmm8
      vmovaps xmm3, xmm10; max
      vmovaps xmm1, xmm9; value
      vxorps  xmm2, xmm2, xmm2; min
      vmovaps xmm0, xmm12; deltaTime
      vmovss  dword ptr [rsp+0C8h+fmt], xmm6
      vmovaps [rsp+0C8h+var_78], xmm11
    }
    *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, SCROLL_XAXIS, v85);
    __asm
    {
      vmovaps xmm11, xmm0
      vmovss  [rsp+0C8h+var_98], xmm8
      vmovaps xmm0, xmm12; deltaTime
      vmovaps xmm3, xmm10; max
      vxorps  xmm2, xmm2, xmm2; min
      vmovaps xmm1, xmm7; value
      vmovss  dword ptr [rsp+0C8h+fmt], xmm6
    }
    *(double *)&_XMM0 = DevGui_UpdateFloatScroll(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, SCROLL_YAXIS, v86);
    _RCX = graph->selectedKnot;
    __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
    if ( (int)_RCX <= 0 || (v37 = _RCX + 1, (int)_RCX + 1 >= (int)v14) )
    {
      v61 = !graph->disableEditingEndPoints;
      if ( graph->disableEditingEndPoints )
      {
LABEL_58:
        __asm
        {
          vmovaps xmm10, [rsp+0C8h+var_68]
          vmovaps xmm9, [rsp+0C8h+var_58]
          vmovaps xmm8, [rsp+0C8h+var_48]
          vmovaps xmm7, [rsp+0C8h+var_38]
          vmovaps xmm11, [rsp+0C8h+var_78]
        }
        goto LABEL_59;
      }
      _RAX = graph->knots;
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@358637bd
        vmulss  xmm0, xmm1, cs:__real@40800000
        vaddss  xmm1, xmm0, dword ptr [rax+rcx*8+4]
        vmovss  dword ptr [rax+rcx*8+4], xmm1
      }
      v44 = !v61;
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm2, cs:__real@358637bd
        vsubss  xmm4, xmm11, xmm9
        vsubss  xmm3, xmm0, xmm7
        vandps  xmm0, xmm4, xmm1
        vcomiss xmm0, xmm2
      }
      if ( v37 > v14 )
        goto LABEL_51;
      __asm
      {
        vandps  xmm0, xmm3, xmm1
        vcomiss xmm0, xmm2
      }
      if ( v37 > v14 )
LABEL_51:
        v44 = 1;
      else
        v44 = 0;
      _RAX = graph->knots;
      __asm
      {
        vmulss  xmm0, xmm4, cs:__real@40400000
        vmovss  xmm4, cs:__real@3ba3d70a
        vaddss  xmm1, xmm0, dword ptr [rax+rcx*8]
        vmulss  xmm0, xmm3, cs:__real@40800000
        vmovss  dword ptr [rax+rcx*8], xmm1
      }
      _RCX = graph->selectedKnot;
      _RAX = graph->knots;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rax+rcx*8+4]
        vmovss  dword ptr [rax+rcx*8+4], xmm1
      }
      _RCX = graph->selectedKnot;
      _RAX = graph->knots;
      __asm
      {
        vmovss  xmm3, dword ptr [rax+rcx*8+8]
        vaddss  xmm1, xmm4, dword ptr [rax+rcx*8-8]; min
        vmovss  xmm0, dword ptr [rax+rcx*8]; val
        vsubss  xmm2, xmm3, xmm4; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RCX = graph->selectedKnot;
      _RAX = graph->knots;
      __asm { vmovss  dword ptr [rax+rcx*8], xmm0 }
    }
    _RCX = graph->selectedKnot;
    _RAX = graph->knots;
    __asm
    {
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  xmm0, dword ptr [rax+rcx*8+4]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RCX = graph->selectedKnot;
    _RAX = graph->knots;
    __asm { vmovss  dword ptr [rax+rcx*8+4], xmm0 }
    if ( v44 )
    {
      v73 = graph->eventCallback;
      if ( v73 )
        v73(graph, EVENT_UPDATE, localClientNum);
    }
    goto LABEL_58;
  }
  MenuScroll = DevGui_GetMenuScroll(SCROLL_XAXIS);
  if ( MenuScroll >= 0 || (v81 = graph->selectedKnot, v81 <= 0) )
  {
    if ( MenuScroll > 0 )
    {
      v82 = graph->selectedKnot + 1;
      if ( (int)v14 > v82 )
        graph->selectedKnot = v82;
    }
    DevGui_UpdateSelection();
  }
  else
  {
    graph->selectedKnot = v81 - 1;
    DevGui_UpdateSelection();
  }
LABEL_59:
  __asm { vmovaps xmm12, [rsp+0C8h+var_88] }
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

void __fastcall DevGui_Vec3FromHSV(vec3_t *rgb, const vec3_t *hsv, double scale)
{
  bool v18; 
  bool v19; 
  bool v22; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = hsv;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = rgb;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm8, xmm2
    vmovss  xmm0, dword ptr [rdi]
    vcomiss xmm0, xmm7
    vmovsd  xmm9, cs:__real@3ff0000000000000
    vmovss  xmm6, cs:__real@3f800000
    vxorpd  xmm10, xmm10, xmm10
    vcomiss xmm0, xmm6
    vmovsd  [rsp+98h+var_60], xmm9
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+98h+var_68], xmm10
    vmovsd  [rsp+98h+var_70], xmm0
  }
  v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1211, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[0] ) && ( hsv[0] ) <= ( 1.0f )", "hsv[0] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v48, v51, v54);
  v19 = !v18;
  if ( v18 )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( v18 )
  {
    __asm
    {
      vmovsd  [rsp+98h+var_60], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+98h+var_68], xmm10
      vmovsd  [rsp+98h+var_70], xmm0
    }
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1212, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[1] ) && ( hsv[1] ) <= ( 1.0f )", "hsv[1] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v49, v52, v55);
    v19 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v19 )
  {
    __asm
    {
      vmovsd  [rsp+98h+var_60], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+98h+var_68], xmm10
      vmovsd  [rsp+98h+var_70], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1213, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[2] ) && ( hsv[2] ) <= ( 1.0f )", "hsv[2] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v50, v53, v56) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rdi]
    vsubss  xmm0, xmm6, xmm7
    vmulss  xmm2, xmm0, xmm3
    vmulss  xmm0, xmm1, cs:__real@40c00000
    vcomiss xmm0, xmm6
    vmovss  xmm1, cs:__real@40000000
    vcomiss xmm0, xmm1
    vmovss  xmm4, cs:__real@40400000
    vcomiss xmm0, xmm4
    vmovss  xmm5, cs:__real@40800000
    vcomiss xmm0, xmm5
    vmovss  dword ptr [rbx+4], xmm2
    vmovss  xmm1, cs:__real@40a00000
    vcomiss xmm0, xmm1
    vmovss  dword ptr [rbx], xmm3
    vsubss  xmm0, xmm0, xmm1
    vmulss  xmm1, xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm6, xmm1
    vmulss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+8], xmm2
    vmulss  xmm0, xmm8, dword ptr [rbx]
    vmulss  xmm1, xmm8, dword ptr [rbx+4]
    vmovaps xmm7, [rsp+98h+var_28]
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+8]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
}

/*
==============
DevGui_Vec3ToHSV
==============
*/

void __fastcall DevGui_Vec3ToHSV(const vec3_t *rgb, vec3_t *hsv, double scale)
{
  char v25; 
  bool v26; 
  bool v37; 
  bool v40; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = hsv;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm2, xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm6, xmm2
    vmovss  xmm10, cs:__real@3f800000
    vdivss  xmm0, xmm10, xmm6
    vmulss  xmm7, xmm0, dword ptr [rdi]
    vmulss  xmm6, xmm0, dword ptr [rdi+4]
    vucomiss xmm7, xmm6
    vmulss  xmm8, xmm0, dword ptr [rdi+8]
    vminss  xmm0, xmm6, xmm7
    vminss  xmm11, xmm0, xmm8
    vcomiss xmm7, xmm6
    vcomiss xmm7, xmm8
    vsubss  xmm1, xmm6, xmm8
    vsubss  xmm0, xmm7, xmm11
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@3e2aaaab
    vaddss  xmm0, xmm2, xmm10; X
    vmovaps xmm1, xmm10; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm7
    vmovss  dword ptr [rbx], xmm0
    vucomiss xmm6, xmm9
  }
  _RDI = &_RBX->v[2];
  _RAX = &_RBX->v[2];
  __asm { vmovss  dword ptr [rax], xmm7 }
  if ( v26 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm11, xmm6
      vsubss  xmm0, xmm10, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, dword ptr [rbx]
    vcomiss xmm0, xmm9
    vmovsd  xmm6, cs:__real@3ff0000000000000
    vxorpd  xmm7, xmm7, xmm7
  }
  if ( v25 )
    goto LABEL_17;
  __asm { vcomiss xmm0, xmm10 }
  if ( !(v25 | v26) )
  {
LABEL_17:
    __asm
    {
      vmovsd  [rsp+0A8h+var_70], xmm6
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_78], xmm7
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1198, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[0] ) && ( hsv[0] ) <= ( 1.0f )", "hsv[0] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v50, v53, v56);
    v25 = 0;
    v26 = !v37;
    if ( v37 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  if ( !(v25 | v26) )
  {
    __asm
    {
      vmovsd  [rsp+0A8h+var_70], xmm6
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_78], xmm7
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1199, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[1] ) && ( hsv[1] ) <= ( 1.0f )", "hsv[1] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v51, v54, v57);
    v25 = 0;
    v26 = !v40;
    if ( v40 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vcomiss xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  if ( !(v25 | v26) )
  {
    __asm
    {
      vmovsd  [rsp+0A8h+var_70], xmm6
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0A8h+var_78], xmm7
      vmovsd  [rsp+0A8h+var_80], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui.cpp", 1200, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( hsv[2] ) && ( hsv[2] ) <= ( 1.0f )", "hsv[2] not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v52, v55, v58) )
      __debugbreak();
  }
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
DevGui_WrapDescription
==============
*/
__int64 DevGui_WrapDescription(const char *text, int wrapWidth, int x, int y, int rowHeight, bool draw)
{
  unsigned int v8; 
  const char *v12; 
  const char *v14; 
  const char *v15; 
  int v16; 
  float v19; 
  char dest[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = 0;
  v12 = text;
  if ( *text )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    do
    {
      __asm { vmovss  [rsp+198h+var_178], xmm6 }
      v14 = R_TextLineWrapPosition(v12, 256, wrapWidth, cls.consoleFont, v19);
      v15 = v14;
      if ( draw )
      {
        Core_strncpy(dest, 0x100ui64, v12, v14 - v12);
        DevGui_DrawFont(x, y, (const unsigned __int8 *)&devgui_colorText->current, dest);
        y += rowHeight;
      }
      v12 = v15;
      if ( isspace(*v15) )
      {
        do
        {
          if ( *v12 == 10 )
            break;
          v16 = *++v12;
        }
        while ( isspace(v16) );
      }
      ++v8;
    }
    while ( *v12 );
    __asm { vmovaps xmm6, [rsp+198h+var_58] }
  }
  return v8;
}

