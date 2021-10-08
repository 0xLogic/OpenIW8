/*
==============
UI_AutoNavigation_RegisterCmds
==============
*/

void UI_AutoNavigation_RegisterCmds(void)
{
  ?UI_AutoNavigation_RegisterCmds@@YAXXZ();
}

/*
==============
UI_AutoNavigation_UnregisterCmds
==============
*/

void UI_AutoNavigation_UnregisterCmds(void)
{
  ?UI_AutoNavigation_UnregisterCmds@@YAXXZ();
}

/*
==============
UI_AutoNavigation_UseBypasses
==============
*/

bool __fastcall UI_AutoNavigation_UseBypasses()
{
  return ?UI_AutoNavigation_UseBypasses@@YA_NXZ();
}

/*
==============
UI_AutoNavigation_Frame
==============
*/

void UI_AutoNavigation_Frame(void)
{
  ?UI_AutoNavigation_Frame@@YAXXZ();
}

/*
==============
UI_AutoNavigation_NavigateScreen_f
==============
*/
int UI_AutoNavigation_NavigateScreen_f()
{
  UINavCommand *v0; 
  unsigned __int16 size; 
  UINavCommand *v2; 
  int v3; 
  char v4; 
  char *v5; 
  int v6; 
  char v7; 
  char buffer[1024]; 

  LODWORD(v0) = Cmd_Argc();
  if ( (int)v0 >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v0 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v2 = v0;
    v3 = 5381;
    v0->type = Screen;
    v4 = buffer[0];
    if ( buffer[0] )
    {
      v5 = buffer;
      do
      {
        v6 = v4;
        ++v5;
        v7 = v4 | 0x20;
        if ( (unsigned int)(v6 - 65) >= 0x1A )
          v7 = v6;
        LODWORD(v0) = 33 * v3;
        v3 = 33 * v3 + v7;
        v4 = *v5;
      }
      while ( *v5 );
    }
    v2->screenNameHash = v3;
  }
  return (int)v0;
}

/*
==============
UI_AutoNavigation_NavigateTab_f
==============
*/
void UI_AutoNavigation_NavigateTab_f()
{
  unsigned __int16 size; 
  UINavCommand *v1; 
  char buffer[1024]; 

  if ( Cmd_Argc() >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v1 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v1->type = Tab;
    if ( !Core_strncpy_truncate((char *)v1, 0x20ui64, buffer, 0x20ui64) )
      Com_PrintWarning(13, "ui_nav: Target navigation command tab element '%s' has a name that's longer than %lu characters.\n", buffer, 32i64);
  }
}

/*
==============
UI_AutoNavigation_NavigateButton_f
==============
*/
void UI_AutoNavigation_NavigateButton_f()
{
  unsigned __int16 size; 
  UINavCommand *v1; 
  char buffer[1024]; 

  if ( Cmd_Argc() >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v1 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v1->type = Button;
    if ( !Core_strncpy_truncate((char *)v1, 0x20ui64, buffer, 0x20ui64) )
      Com_PrintWarning(13, "ui_nav: Target navigation command button element '%s' has a name that's longer than %lu characters.\n", buffer, 32i64);
  }
}

/*
==============
UI_AutoNavigation_NavigateButtonTry_f
==============
*/
void UI_AutoNavigation_NavigateButtonTry_f()
{
  unsigned __int16 size; 
  UINavCommand *v1; 
  char buffer[1024]; 

  if ( Cmd_Argc() >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v1 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v1->type = ButtonTry;
    if ( !Core_strncpy_truncate((char *)v1, 0x20ui64, buffer, 0x20ui64) )
      Com_PrintWarning(13, "ui_nav: Target navigation command button element '%s' has a name that's longer than %lu characters.\n", buffer, 32i64);
  }
}

/*
==============
UI_AutoNavigation_NavigateInput_f
==============
*/
void UI_AutoNavigation_NavigateInput_f()
{
  unsigned __int16 size; 
  UINavCommand *v1; 
  char buffer[1024]; 

  if ( Cmd_Argc() >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v1 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v1->type = Input;
    if ( !Core_strncpy_truncate((char *)v1, 0x20ui64, buffer, 0x20ui64) )
      Com_PrintWarning(13, "ui_nav: Target navigation command input key '%s' has a name that's longer than %lu characters.\n", buffer, 32i64);
  }
}

/*
==============
UI_AutoNavigation_NavigateWait_f
==============
*/
int UI_AutoNavigation_NavigateWait_f()
{
  const char *v0; 
  const char *v1; 
  unsigned __int16 size; 
  UINavCommand *v3; 

  LODWORD(v0) = Cmd_Argc();
  if ( (int)v0 >= 2 )
  {
    v0 = Cmd_Argv(1);
    v1 = v0;
    if ( v0 )
    {
      if ( *v0 )
      {
        if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        size = s_uiNavGlob.navCommands.size;
        if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
          __debugbreak();
        s_uiNavGlob.navCommands.size = size + 1;
        v3 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
        v3->type = Wait;
        LODWORD(v0) = atoi(v1);
        if ( (int)v0 > 0 )
          v3->screenNameHash = 1000 * (_DWORD)v0;
      }
    }
  }
  return (int)v0;
}

/*
==============
UI_AutoNavigation_Test_f
==============
*/
void UI_AutoNavigation_Test_f()
{
  unsigned __int16 size; 
  UINavCommand *v1; 
  char buffer[1024]; 

  if ( Cmd_Argc() >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v1 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v1->type = Test;
    if ( !Core_strncpy_truncate((char *)v1, 0x20ui64, buffer, 0x20ui64) )
      Com_PrintWarning(13, "ui_nav: Target test config file '%s' has a name that's longer than %lu characters.\n", buffer, 32i64);
  }
}

/*
==============
UI_AutoNavigation_Clear_f
==============
*/

__int64 __fastcall UI_AutoNavigation_Clear_f(double _XMM0_8)
{
  __int64 result; 

  result = 0i64;
  s_uiNavGlob.navCommands.cleared = 1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:s_uiNavGlob.desiredDestinationNode, xmm0
  }
  s_uiNavGlob.currentPath.nodeCount = 0;
  *(_DWORD *)&s_uiNavGlob.navCommands.start = 0;
  s_uiNavGlob.currentWaitNavCommandEndTime = 0;
  return result;
}

/*
==============
UI_AutoNavigation_Graph_f
==============
*/
void UI_AutoNavigation_Graph_f()
{
  unsigned __int16 size; 
  UINavCommand *v1; 
  char buffer[1024]; 

  if ( Cmd_Argc() >= 2 )
  {
    Cmd_ArgsBuffer(1, buffer, 0x400ui64);
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_uiNavGlob.navCommands.size;
    if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_uiNavGlob.navCommands.size = size + 1;
    v1 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
    v1->type = Graph;
    if ( !Core_strncpy_truncate((char *)v1, 0x20ui64, buffer, 0x20ui64) )
      Com_PrintWarning(13, "ui_nav: Target navigation graph '%s' has a name that's longer than %lu characters.\n", buffer, 32i64);
  }
}

/*
==============
UIAutoNavigation_PopulateNodeDistances
==============
*/
void UIAutoNavigation_PopulateNodeDistances(UINavNode *node, unsigned __int16 depth)
{
  unsigned __int16 distance; 
  UINavConnection *parents; 
  unsigned __int16 v4; 

  distance = node->distance;
  if ( !distance || depth < distance )
  {
    parents = node->parents;
    node->distance = depth;
    if ( parents )
    {
      v4 = depth + 1;
      do
      {
        UIAutoNavigation_PopulateNodeDistances(parents->dest, v4);
        parents = parents->next;
      }
      while ( parents );
    }
  }
}

/*
==============
UI_AutoNavigation_AddTargetButton
==============
*/
void UI_AutoNavigation_AddTargetButton(const bdJSONDeserializer *targetList, UINavConnection *navConnection)
{
  bdJSONDeserializer value; 
  __int64 v5; 
  const bdJSONDeserializer *v6; 
  char src[1024]; 

  v5 = -2i64;
  v6 = targetList;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( !navConnection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 206, ASSERT_TYPE_ASSERT, "(navConnection)", (const char *)&queryFormat, "navConnection") )
    __debugbreak();
  navConnection->abInputsCount = 0;
  navConnection->abInputs = (AutomatedInput_Record *)-1i64;
  bdJSONDeserializer::getChild((bdJSONDeserializer *)targetList, &value, NULL, 0);
  while ( value.m_parsed )
  {
    if ( bdJSONDeserializer::hasKey(&value, "button") && bdJSONDeserializer::getString(&value, "button", src, 0x400u) )
    {
      if ( s_uiNavGlob.targetElementNameCount >= 256 )
      {
        Com_PrintWarning(13, "ui_nav: Too many target button elements specified at element '%s' (max %d).\n", src, 256i64);
      }
      else
      {
        navConnection->targetButtonNameIndex = s_uiNavGlob.targetElementNameCount++;
        if ( !Core_strncpy_truncate(s_uiNavGlob.targetElementNames[(unsigned __int64)navConnection->targetButtonNameIndex], 0x100ui64, src, 0x20ui64) )
          Com_PrintWarning(13, "ui_nav: Target button '%s' has a name that's longer than %d characters.\n", src, 32i64);
      }
    }
    if ( bdJSONDeserializer::hasKey(&value, "tab") && bdJSONDeserializer::getString(&value, "tab", src, 0x400u) )
    {
      if ( s_uiNavGlob.targetElementNameCount >= 256 )
      {
        Com_PrintWarning(13, "ui_nav: Too many target tab elements specified at element '%s' (max %d).\n", src, 256i64);
      }
      else
      {
        navConnection->targetTabNameIndex = s_uiNavGlob.targetElementNameCount++;
        if ( !Core_strncpy_truncate(s_uiNavGlob.targetElementNames[(unsigned __int64)navConnection->targetTabNameIndex], 0x100ui64, src, 0x20ui64) )
          Com_PrintWarning(13, "ui_nav: Target tab '%s' has a name that's longer than %d characters.\n", src, 32i64);
      }
    }
    bdJSONDeserializer::getNext(&value, &value, NULL, 0);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer((bdJSONDeserializer *)targetList);
}

/*
==============
UI_AutoNavigation_BuildPath
==============
*/
void UI_AutoNavigation_BuildPath(unsigned int sourceId, unsigned int destId)
{
  UINavNode *v2; 
  UINavNode *v3; 
  int v4; 
  UINavNode *nodes; 
  UINavConnection *parents; 
  unsigned int nodeCount; 
  UINavConnection **v8; 
  unsigned __int16 distance; 
  UINavConnection *children; 
  UINavNode *dest; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  s_uiNavGlob.currentPath.nodeCount = 0;
  v2 = NULL;
  v3 = NULL;
  if ( sourceId != destId )
  {
    v4 = 0;
    if ( s_uiNavGlob.nodeCount > 0 )
    {
      nodes = s_uiNavGlob.nodes;
      do
      {
        nodes->distance = 0;
        if ( !v2 && nodes->id == sourceId )
          v2 = &s_uiNavGlob.nodes[v4];
        if ( !v3 && nodes->id == destId )
          v3 = &s_uiNavGlob.nodes[v4];
        ++v4;
        ++nodes;
      }
      while ( v4 < s_uiNavGlob.nodeCount );
      if ( v2 && v3 )
      {
        parents = v3->parents;
        nodeCount = 1;
        for ( v3->distance = 0; parents; parents = *v8 )
          UIAutoNavigation_PopulateNodeDistances(parents->dest, nodeCount);
        s_uiNavGlob.currentPath.nodes[0] = v2;
        s_uiNavGlob.currentPath.nodeCount = nodeCount;
        if ( v2 != v3 )
        {
          while ( 1 )
          {
            distance = v2->distance;
            if ( !distance )
              break;
            children = v2->children;
            if ( children )
            {
              while ( 1 )
              {
                dest = children->dest;
                v12 = dest->distance;
                if ( v12 && v12 < distance )
                {
                  if ( nodeCount >= 0x100 )
                  {
                    LODWORD(v15) = 256;
                    LODWORD(v14) = nodeCount;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 477, ASSERT_TYPE_ASSERT, "(unsigned)( pathOut->nodeCount ) < (unsigned)( ( sizeof( *array_counter( pathOut->nodes ) ) + 0 ) )", "pathOut->nodeCount doesn't index pathOut->nodes\n\t%i not in [0, %i)", v14, v15) )
                      __debugbreak();
                    nodeCount = s_uiNavGlob.currentPath.nodeCount;
                  }
                  s_uiNavGlob.currentPath.nodes[nodeCount] = children->dest;
                  dest = children->dest;
                  nodeCount = s_uiNavGlob.currentPath.nodeCount;
                  distance = dest->distance;
                }
                if ( dest == v3 )
                  break;
                children = children->next;
                if ( !children )
                  goto LABEL_27;
              }
              if ( nodeCount >= 0x100 )
              {
                LODWORD(v15) = 256;
                LODWORD(v14) = nodeCount;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 483, ASSERT_TYPE_ASSERT, "(unsigned)( pathOut->nodeCount ) < (unsigned)( ( sizeof( *array_counter( pathOut->nodes ) ) + 0 ) )", "pathOut->nodeCount doesn't index pathOut->nodes\n\t%i not in [0, %i)", v14, v15) )
                  __debugbreak();
                nodeCount = s_uiNavGlob.currentPath.nodeCount;
              }
              s_uiNavGlob.currentPath.nodes[nodeCount] = v3;
              ++s_uiNavGlob.currentPath.nodeCount;
              return;
            }
LABEL_27:
            if ( distance != v2->distance )
            {
              if ( nodeCount >= 0x100 )
              {
                LODWORD(v15) = 256;
                LODWORD(v14) = nodeCount;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( pathOut->nodeCount ) < (unsigned)( ( sizeof( *array_counter( pathOut->nodes ) ) + 0 ) )", "pathOut->nodeCount doesn't index pathOut->nodes\n\t%i not in [0, %i)", v14, v15) )
                  __debugbreak();
                nodeCount = s_uiNavGlob.currentPath.nodeCount;
              }
              v13 = nodeCount++;
              v2 = s_uiNavGlob.currentPath.nodes[v13];
              s_uiNavGlob.currentPath.nodeCount = nodeCount;
              if ( v2 != v3 )
                continue;
            }
            break;
          }
        }
        s_uiNavGlob.currentPath.nodeCount = 0;
      }
    }
  }
}

/*
==============
UI_AutoNavigation_CreateInputSequence
==============
*/
void UI_AutoNavigation_CreateInputSequence(const bdJSONDeserializer *connection, const bdJSONDeserializer *inputList, UINavConnection *navConnection)
{
  int inputRecordCount; 
  AutomatedInput_Record *v7; 
  signed int v11; 
  unsigned int i; 
  const char *v13; 
  int v14; 
  int v15; 
  float v16; 
  float v17; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v19; 
  __int64 v20; 
  const bdJSONDeserializer *v21; 
  bdJSONDeserializer v22; 
  char str[1024]; 
  char v24[1024]; 

  v20 = -2i64;
  v21 = inputList;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  inputRecordCount = s_uiNavGlob.inputRecordCount;
  if ( s_uiNavGlob.inputRecordCount >= 0x800u )
  {
    v15 = 2048;
    v14 = s_uiNavGlob.inputRecordCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( s_uiNavGlob.inputRecordCount ) < (unsigned)( ( sizeof( *array_counter( s_uiNavGlob.inputRecords ) ) + 0 ) )", "s_uiNavGlob.inputRecordCount doesn't index s_uiNavGlob.inputRecords\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
    inputRecordCount = s_uiNavGlob.inputRecordCount;
  }
  v7 = &s_uiNavGlob.inputRecords[inputRecordCount];
  if ( inputRecordCount + inputList->m_count >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 149, ASSERT_TYPE_ASSERT, "(s_uiNavGlob.inputRecordCount + inputList.getCount() < ( sizeof( *array_counter( s_uiNavGlob.inputRecords ) ) + 0 ))", (const char *)&queryFormat, "s_uiNavGlob.inputRecordCount + inputList.getCount() < ARRAY_COUNT( s_uiNavGlob.inputRecords )") )
      __debugbreak();
    inputRecordCount = s_uiNavGlob.inputRecordCount;
  }
  s_uiNavGlob.inputRecordCount = inputList->m_count + inputRecordCount;
  navConnection->abInputs = v7;
  navConnection->abInputsCount = inputList->m_count;
  bdJSONDeserializer::getChild((bdJSONDeserializer *)inputList, &value, NULL, 0);
  if ( value.m_parsed )
  {
    _RDI = (bitarray_base<bitarray<224> > *)&v7->keys;
    do
    {
      bdJSONDeserializer::bdJSONDeserializer(&v22);
      if ( bdJSONDeserializer::hasKey(&value, "delay") && bdJSONDeserializer::getFloat32(&value, "delay", &v16) )
      {
        __asm
        {
          vmovss  xmm0, [rsp+8F0h+var_8B0]
          vmovss  dword ptr [rdi-8], xmm0
        }
      }
      if ( bdJSONDeserializer::hasKey(&value, "hold") && bdJSONDeserializer::getFloat32(&value, "hold", &v17) )
      {
        __asm
        {
          vmovss  xmm0, [rsp+8F0h+var_8AC]
          vmovss  dword ptr [rdi-4], xmm0
        }
      }
      if ( bdJSONDeserializer::hasKey(&value, "keys") && bdJSONDeserializer::getArray(&value, "keys", &v22) )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v19);
        bdJSONDeserializer::getChild(&v22, &v19, NULL, 0);
        while ( v19.m_parsed )
        {
          if ( bdJSONDeserializer::getString(&v19, str, 0x400u) )
          {
            v11 = Com_Keys_StringToKeynum(str);
            if ( v11 <= 0 )
            {
              if ( v11 )
              {
                bdJSONDeserializer::getString((bdJSONDeserializer *)connection, (const char *const)&stru_143C9A1A4, v24, 0x400u);
                Com_PrintWarning(13, "ui_nav: Connection '%s' has an unrecognized input key '%s'. Valid keys:\n", v24, str);
                for ( i = 1; i < 0xDE; ++i )
                {
                  v13 = Com_Keys_KeynumToString(i);
                  Com_Printf(13, "%s\n", v13);
                }
              }
            }
            else
            {
              bitarray_base<bitarray<224>>::setBit(_RDI, v11);
            }
          }
          bdJSONDeserializer::getNext(&v19, &v19, NULL, 0);
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v19);
      }
      _RDI += 52;
      bdJSONDeserializer::~bdJSONDeserializer(&v22);
      bdJSONDeserializer::getNext(&value, &value, NULL, 0);
    }
    while ( value.m_parsed );
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer((bdJSONDeserializer *)inputList);
}

/*
==============
UI_AutoNavigation_CreateNode
==============
*/
void UI_AutoNavigation_CreateNode(const bdJSONDeserializer *node, ntl::fixed_map<unsigned int,UINavNode *,256,ntl::less<unsigned int,unsigned int> > *nodeMap)
{
  int nodeCount; 
  UINavNode *v5; 
  char v6; 
  int v7; 
  int v8; 
  char *v9; 
  char v10; 
  char v11; 
  char *v12; 
  char v13; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  unsigned int id; 
  bool v17; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v20; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,UINavNode *> >,ntl::pair<unsigned int,UINavNode *> *,ntl::pair<unsigned int,UINavNode *> &> result; 
  ntl::pair<unsigned int,UINavNode *> r_element; 
  char value[1024]; 

  if ( bdJSONDeserializer::getString((bdJSONDeserializer *)node, (const char *const)&stru_143C9A1A4, value, 0x400u) )
  {
    nodeCount = s_uiNavGlob.nodeCount;
    if ( s_uiNavGlob.nodeCount >= 0x100u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( s_uiNavGlob.nodeCount ) < (unsigned)( ( sizeof( *array_counter( s_uiNavGlob.nodes ) ) + 0 ) )", "s_uiNavGlob.nodeCount doesn't index s_uiNavGlob.nodes\n\t%i not in [0, %i)", s_uiNavGlob.nodeCount, 256) )
        __debugbreak();
      nodeCount = s_uiNavGlob.nodeCount;
    }
    s_uiNavGlob.nodeCount = nodeCount + 1;
    v5 = &s_uiNavGlob.nodes[nodeCount];
    v6 = value[0];
    v7 = 5381;
    v8 = 5381;
    if ( value[0] )
    {
      v9 = value;
      do
      {
        ++v9;
        v10 = v6 | 0x20;
        if ( (unsigned int)(v6 - 65) >= 0x1A )
          v10 = v6;
        v8 = 33 * v8 + v10;
        v6 = *v9;
      }
      while ( *v9 );
    }
    v5->id = v8;
    v5->displayId = v8;
    if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)node, "splitscreenjoin") )
      v5->splitScreenJoin = 1;
    Com_Printf(13, "ui_nav: Parsed screen %s, id %u\n", value, v5->id);
    if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)node, "screen") && bdJSONDeserializer::getString((bdJSONDeserializer *)node, "screen", value, 0x400u) )
    {
      v11 = value[0];
      if ( value[0] )
      {
        v12 = value;
        do
        {
          ++v12;
          v13 = v11 | 0x20;
          if ( (unsigned int)(v11 - 65) >= 0x1A )
            v13 = v11;
          v7 = 33 * v7 + v13;
          v11 = *v12;
        }
        while ( *v12 );
      }
      v5->displayId = v7;
    }
    mp_parent = nodeMap->m_endNodeBase.mp_parent;
    p_m_endNodeBase = &nodeMap->m_endNodeBase;
    id = v5->id;
    v17 = 1;
    r_element.first = v5->id;
    r_element.second = v5;
    while ( mp_parent )
    {
      p_m_endNodeBase = mp_parent;
      v17 = id < mp_parent[1].m_color;
      if ( id >= mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    mp_left = p_m_endNodeBase;
    if ( v17 )
    {
      if ( p_m_endNodeBase == nodeMap->m_endNodeBase.mp_left )
      {
        ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,UINavNode *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,UINavNode *>>,256,8>,ntl::return_pair_first<unsigned int,UINavNode *>,ntl::less<unsigned int,unsigned int>>::insert_node(nodeMap, &result, p_m_endNodeBase, &r_element, 1, 0);
        return;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
      {
        mp_left = p_m_endNodeBase->mp_left;
        if ( mp_left )
        {
          for ( i = mp_left->mp_right; i; i = i->mp_right )
            mp_left = i;
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == mp_left->mp_left )
          {
            do
            {
              v20 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v20 == mp_left->mp_left );
          }
        }
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_right;
      }
    }
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < id )
      ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,UINavNode *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,UINavNode *>>,256,8>,ntl::return_pair_first<unsigned int,UINavNode *>,ntl::less<unsigned int,unsigned int>>::insert_node(nodeMap, &result, p_m_endNodeBase, &r_element, 0, 0);
  }
  else
  {
    Com_PrintWarning(13, "ui_nav: Screen missing 'name' field.  Text: '%s'\n", node->m_ptr);
  }
}

/*
==============
UI_AutoNavigation_CreateNodeConnections
==============
*/
void UI_AutoNavigation_CreateNodeConnections(const bdJSONDeserializer *node, const ntl::fixed_map<unsigned int,UINavNode *,256,ntl::less<unsigned int,unsigned int> > *nodeMap, unsigned int nodeIndex)
{
  __int64 v3; 
  UINavNode *v6; 
  unsigned int v7; 
  char v8; 
  char *v9; 
  char v10; 
  unsigned int v11; 
  char v12; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v16; 
  UINavNode *v17; 
  int connectionCount; 
  UINavConnection *v19; 
  int v22; 
  UINavConnection *v23; 
  __int64 v24; 
  __int64 v25; 
  bdJSONDeserializer v26; 
  bdJSONDeserializer v27; 
  bdJSONDeserializer v28; 
  __int64 v29; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v31; 
  char v32[1024]; 

  v29 = -2i64;
  v3 = nodeIndex;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::hasKey((bdJSONDeserializer *)node, "connections") && bdJSONDeserializer::getArray((bdJSONDeserializer *)node, "connections", &value) )
  {
    if ( (unsigned int)v3 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( ( sizeof( *array_counter( s_uiNavGlob.nodes ) ) + 0 ) )", "nodeIndex doesn't index s_uiNavGlob.nodes\n\t%i not in [0, %i)", v3, 256) )
      __debugbreak();
    v6 = &s_uiNavGlob.nodes[v3];
    bdJSONDeserializer::bdJSONDeserializer(&v26);
    bdJSONDeserializer::getChild(&value, &v26, NULL, 0);
    while ( v26.m_parsed )
    {
      if ( bdJSONDeserializer::getString(&v26, (const char *const)&stru_143C9A1A4, v32, 0x400u) )
      {
        v7 = 5381;
        v8 = v32[0];
        if ( v32[0] )
        {
          v9 = v32;
          do
          {
            v10 = v8;
            v11 = v8 - 65;
            v12 = v8 | 0x20;
            if ( v11 >= 0x1A )
              v12 = v10;
            v7 = v12 + 33 * v7;
            v8 = *++v9;
          }
          while ( *v9 );
        }
        p_m_endNodeBase = &nodeMap->m_endNodeBase;
        v14 = &nodeMap->m_endNodeBase;
        mp_parent = nodeMap->m_endNodeBase.mp_parent;
        while ( mp_parent )
        {
          if ( mp_parent[1].m_color < v7 )
          {
            mp_parent = mp_parent->mp_right;
          }
          else
          {
            v14 = mp_parent;
            mp_parent = mp_parent->mp_left;
          }
        }
        if ( v14 == p_m_endNodeBase )
          goto LABEL_43;
        v16 = &nodeMap->m_endNodeBase;
        if ( v7 >= v14[1].m_color )
          v16 = v14;
        if ( v16 == p_m_endNodeBase )
        {
LABEL_43:
          Com_PrintWarning(13, "ui_nav: Could not find ui navigation screen: '%s'\n", v32);
        }
        else
        {
          bdJSONDeserializer::bdJSONDeserializer(&v28);
          bdJSONDeserializer::bdJSONDeserializer(&v27);
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v17 = (UINavNode *)v16[1].mp_parent;
          connectionCount = s_uiNavGlob.connectionCount;
          if ( s_uiNavGlob.connectionCount >= 0x400u )
          {
            LODWORD(v25) = 1024;
            LODWORD(v24) = s_uiNavGlob.connectionCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( s_uiNavGlob.connectionCount ) < (unsigned)( ( sizeof( *array_counter( s_uiNavGlob.connections ) ) + 0 ) )", "s_uiNavGlob.connectionCount doesn't index s_uiNavGlob.connections\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
            connectionCount = s_uiNavGlob.connectionCount;
          }
          v19 = &s_uiNavGlob.connections[connectionCount];
          s_uiNavGlob.connectionCount = connectionCount + 1;
          v19->next = v6->children;
          v6->children = v19;
          v19->dest = v17;
          if ( bdJSONDeserializer::hasKey(&v26, "target") && bdJSONDeserializer::getArray(&v26, "target", &v27) && v27.m_count )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rsp+530h+var_4D0.m_type]
              vmovups [rbp+430h+var_460], ymm0
            }
            UI_AutoNavigation_AddTargetButton(&v31, v19);
          }
          else if ( bdJSONDeserializer::hasKey(&v26, "inputs") && bdJSONDeserializer::getArray(&v26, "inputs", &v28) && v28.m_count )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+430h+var_4B0.m_type]
              vmovups [rbp+430h+var_460], ymm0
            }
            UI_AutoNavigation_CreateInputSequence(&v26, &v31, v19);
          }
          else
          {
            bdJSONDeserializer::getString(&v26, (const char *const)&stru_143C9A1A4, v32, 0x400u);
            Com_PrintWarning(13, "ui_nav: Connection '%s' doesn't have the 'inputs' or 'target' field.\n", v32);
          }
          v22 = s_uiNavGlob.connectionCount;
          if ( s_uiNavGlob.connectionCount >= 0x400u )
          {
            LODWORD(v25) = 1024;
            LODWORD(v24) = s_uiNavGlob.connectionCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( s_uiNavGlob.connectionCount ) < (unsigned)( ( sizeof( *array_counter( s_uiNavGlob.connections ) ) + 0 ) )", "s_uiNavGlob.connectionCount doesn't index s_uiNavGlob.connections\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
            v22 = s_uiNavGlob.connectionCount;
          }
          v23 = &s_uiNavGlob.connections[v22];
          s_uiNavGlob.connectionCount = v22 + 1;
          v23->next = v17->parents;
          v17->parents = v23;
          v23->dest = v6;
          bdJSONDeserializer::~bdJSONDeserializer(&v27);
          bdJSONDeserializer::~bdJSONDeserializer(&v28);
        }
      }
      else
      {
        v32[0] = 0;
        bdJSONDeserializer::getString((bdJSONDeserializer *)node, (const char *const)&stru_143C9A1A4, v32, 0x400u);
        Com_PrintWarning(13, "ui_nav: A connection on screen '%s' is missing the 'name' field.\n", v32);
      }
      bdJSONDeserializer::getNext(&v26, &v26, NULL, 0);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v26);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
UI_AutoNavigation_Frame
==============
*/

void __fastcall UI_AutoNavigation_Frame(double _XMM0_8)
{
  const dvar_t *v1; 
  UINavCommand *v2; 
  bool v3; 
  int v4; 
  char v5; 
  unsigned int v6; 
  char *v7; 
  char v8; 
  UINavNode *currentLocationNode; 
  int v12; 
  UINavNode *nodes; 
  int v14; 
  bool v15; 
  const dvar_t *v16; 
  const char *string; 
  unsigned __int16 size; 
  UINavCommand *v19; 
  UINavCommand *v20; 
  UINavCommand::CommandType type; 
  unsigned int screenNameHash; 
  UINavNode *v24; 
  int v25; 
  int v26; 
  unsigned int v28; 
  unsigned __int16 v29; 
  UINavCommand::CommandType v31; 
  int v34; 
  unsigned int i; 
  const char *v38; 
  UINavCommand::CommandType v39; 
  const char *v40; 
  const char *v41; 
  char v42; 
  int v43; 
  char v44; 
  AutomatedInput_Record records; 
  char outBuffer[1024]; 

  if ( Com_FrontEnd_IsInFrontEnd() && !CL_Input_AutomatedSequenceRunning(LOCAL_CLIENT_0) )
  {
    v1 = DVARBOOL_uinav_bypasses;
    if ( !DVARBOOL_uinav_bypasses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "uinav_bypasses") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      Dvar_SetBoolByName("intro", 0);
      Dvar_SetBool_Internal(DVARBOOL_cg_autoSkipSplashScreen, 1);
      Dvar_SetBool_Internal(DVARBOOL_lui_skip_season_video, 1);
      Dvar_SetBool_Internal(DVARBOOL_lui_wz_tutorial_optional, 1);
    }
    v2 = NULL;
    v3 = 1;
    if ( s_uiNavGlob.navGraph && s_uiNavGlob.desiredDestinationNode )
    {
      v4 = 5381;
      if ( LUI_GetVisibleMenu(LOCAL_CLIENT_0, (char (*)[1024])outBuffer) )
      {
        v5 = outBuffer[0];
        v6 = 5381;
        if ( outBuffer[0] )
        {
          v7 = outBuffer;
          do
          {
            ++v7;
            v8 = v5 | 0x20;
            if ( (unsigned int)(v5 - 65) >= 0x1A )
              v8 = v5;
            v6 = v8 + 33 * v6;
            v5 = *v7;
          }
          while ( *v7 );
        }
      }
      else
      {
        v6 = 0;
      }
      if ( dword_14F7F4414 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
      {
        j__Init_thread_header(&dword_14F7F4414);
        if ( dword_14F7F4414 == -1 )
        {
          v44 = 101;
          v41 = "error_popmenu";
          do
          {
            ++v41;
            v42 = v44 | 0x20;
            if ( (unsigned int)(v44 - 65) >= 0x1A )
              v42 = v44;
            v43 = 33 * v4 + v42;
            v44 = *v41;
            v4 = v43;
          }
          while ( *v41 );
          dword_14F7F4410 = v43;
          j__Init_thread_footer(&dword_14F7F4414);
        }
      }
      if ( v6 == -232846158 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f000000
          vmovss  xmm1, cs:__real@3dcccccd
        }
        memset(&records.keys.keyBits.array[1], 0, 40);
        __asm { vmovss  [rsp+4D0h+records.deferTimeSeconds], xmm0 }
        records.keys.keyBits.array[0] = 0x40000000;
        __asm { vmovss  [rsp+4D0h+records.holdTimeSeconds], xmm1 }
        CL_Input_AddAutomatedSequence(LOCAL_CLIENT_0, &records, 1);
        return;
      }
      v3 = 0;
      if ( v6 )
      {
        currentLocationNode = s_uiNavGlob.currentLocationNode;
        if ( !s_uiNavGlob.currentLocationNode || s_uiNavGlob.currentLocationNode->displayId != v6 )
        {
          v12 = 0;
          if ( s_uiNavGlob.nodeCount <= 0 )
          {
LABEL_28:
            currentLocationNode = NULL;
          }
          else
          {
            nodes = s_uiNavGlob.nodes;
            while ( nodes->id != v6 )
            {
              ++v12;
              ++nodes;
              if ( v12 >= s_uiNavGlob.nodeCount )
                goto LABEL_28;
            }
            currentLocationNode = &s_uiNavGlob.nodes[v12];
          }
          s_uiNavGlob.currentLocationNode = currentLocationNode;
        }
        if ( !s_uiNavGlob.currentPath.nodeCount )
        {
          if ( currentLocationNode && currentLocationNode->displayId == v6 )
          {
            UI_AutoNavigation_BuildPath(currentLocationNode->id, s_uiNavGlob.desiredDestinationNode->id);
            s_uiNavGlob.nextDestinationNode = s_uiNavGlob.currentLocationNode;
          }
          else
          {
            UI_AutoNavigation_BuildPath(v6, s_uiNavGlob.desiredDestinationNode->id);
            v14 = 0;
            if ( s_uiNavGlob.currentPath.nodeCount )
            {
              while ( s_uiNavGlob.currentPath.nodes[v14]->displayId != v6 )
              {
                if ( ++v14 >= s_uiNavGlob.currentPath.nodeCount )
                  goto LABEL_40;
              }
              s_uiNavGlob.nextDestinationNode = s_uiNavGlob.currentPath.nodes[v14];
            }
          }
        }
LABEL_40:
        v15 = UI_AutoNavigation_TraversePath(v6);
        v3 = !v15;
        if ( !v15 && s_uiNavGlob.desiredDestinationNode )
        {
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu xmmword ptr cs:s_uiNavGlob.desiredDestinationNode, xmm0
          }
          s_uiNavGlob.currentPath.nodeCount = 0;
        }
      }
    }
    if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !s_uiNavGlob.navCommands.size )
    {
      v16 = DVARSTR_uinav_deferred;
      if ( DVARSTR_uinav_deferred )
      {
        Dvar_CheckFrontendServerThread(DVARSTR_uinav_deferred);
        string = v16->current.string;
        if ( string )
        {
          if ( *string )
          {
            memset_0(outBuffer, 0, sizeof(outBuffer));
            if ( LUI_GetVisibleMenu(LOCAL_CLIENT_0, (char (*)[1024])outBuffer) )
            {
              if ( !strcmp_0(outBuffer, "MainLockoutMenu") )
              {
                if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
                  __debugbreak();
                size = s_uiNavGlob.navCommands.size;
                if ( s_uiNavGlob.navCommands.size >= 0x100u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
                  __debugbreak();
                s_uiNavGlob.navCommands.size = size + 1;
                v19 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
                v19->type = Test;
                if ( !Core_strncpy_truncate((char *)v19, 0x20ui64, string, 0x20ui64) )
                  Com_PrintWarning(13, "ui_nav: Target test config file '%s' has a name that's longer than %lu characters.\n", string, 32i64);
                Dvar_SetString_Internal(DVARSTR_uinav_deferred, (const char *)&queryFormat.fmt + 3);
              }
            }
          }
        }
      }
    }
    if ( v3 )
    {
      if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( s_uiNavGlob.navCommands.size )
      {
        v20 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Front(&s_uiNavGlob.navCommands);
        type = v20->type;
        switch ( type )
        {
          case Screen:
            screenNameHash = v20->screenNameHash;
            s_uiNavGlob.currentPath.nodeCount = 0;
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vmovdqu xmmword ptr cs:s_uiNavGlob.desiredDestinationNode, xmm0
            }
            if ( s_uiNavGlob.nodeCount > 0 )
            {
              v24 = s_uiNavGlob.nodes;
              while ( v24->id != screenNameHash )
              {
                LODWORD(v2) = (_DWORD)v2 + 1;
                ++v24;
                if ( (int)v2 >= s_uiNavGlob.nodeCount )
                  goto LABEL_121;
              }
              s_uiNavGlob.desiredDestinationNode = &s_uiNavGlob.nodes[(int)v2];
            }
            goto LABEL_121;
          case Wait:
            if ( !s_uiNavGlob.currentWaitNavCommandEndTime )
            {
              s_uiNavGlob.currentWaitNavCommandEndTime = v20->screenNameHash + Sys_Milliseconds();
              return;
            }
            if ( Sys_Milliseconds() > s_uiNavGlob.currentWaitNavCommandEndTime )
              s_uiNavGlob.currentWaitNavCommandEndTime = 0;
            goto LABEL_121;
          case Test:
            Core_strcpy((char *)&records, 0x2Cui64, "exec ");
            I_strcat((char *)&records, 0x2Cui64, (const char *)v20);
            IWStaticCircularQueue<UINavCommand,256,unsigned short>::PopFront(&s_uiNavGlob.navCommands);
            if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
              __debugbreak();
            v25 = s_uiNavGlob.navCommands.size;
            if ( CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
              LODWORD(v2) = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
            Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, (const int)v2, (const char *)&records, 0, 0);
            if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
              __debugbreak();
            v26 = s_uiNavGlob.navCommands.size - v25;
            if ( s_uiNavGlob.navCommands.size != v25 )
            {
              do
              {
                _R14 = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Back(&s_uiNavGlob.navCommands);
                if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 104, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
                  __debugbreak();
                v28 = s_uiNavGlob.navCommands.size + 1;
                v29 = (unsigned __int8)(LOBYTE(s_uiNavGlob.navCommands.start) - 1);
                if ( v28 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 107, ASSERT_TYPE_ASSERT, "(curSize <= s_capacity)", (const char *)&queryFormat, "curSize <= s_capacity") )
                  __debugbreak();
                s_uiNavGlob.navCommands.start = v29;
                s_uiNavGlob.navCommands.size = v28;
                __asm { vmovups ymm0, ymmword ptr [r14] }
                v31 = _R14->type;
                __asm { vmovups [rsp+4D0h+var_490], ymm0 }
                _RAX = IWStaticCircularQueue<UINavCommand,256,unsigned short>::Front(&s_uiNavGlob.navCommands);
                __asm
                {
                  vmovups ymm0, [rsp+4D0h+var_490]
                  vmovups ymmword ptr [rax], ymm0
                }
                _RAX->type = v31;
                if ( !s_uiNavGlob.navCommands.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 130, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
                  __debugbreak();
                if ( !s_uiNavGlob.navCommands.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 131, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
                  __debugbreak();
                --s_uiNavGlob.navCommands.size;
                --v26;
              }
              while ( v26 );
            }
            return;
          case Graph:
            if ( !UI_AutoNavigation_LoadGraph((const char *)v20) )
              return;
            goto LABEL_121;
          case Input:
            v34 = Com_Keys_StringToKeynum((const char *)v20);
            if ( v34 <= 0 )
            {
              if ( v34 )
              {
                Com_PrintWarning(13, "ui_nav: command ui_nav_input has an unrecognized input key '%s'. Valid keys:\n", (const char *)v20);
                for ( i = 1; i < 0xDE; ++i )
                {
                  v38 = Com_Keys_KeynumToString(i);
                  Com_Printf(13, "%s\n", v38);
                }
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, cs:__real@3f000000
                vmovss  xmm1, cs:__real@3dcccccd
                vmovss  [rsp+4D0h+records.deferTimeSeconds], xmm0
                vmovss  [rsp+4D0h+records.holdTimeSeconds], xmm1
              }
              AutomatedInput_KeyBits::AutomatedInput_KeyBits(&records.keys, v34);
              records.moveStick = 0i64;
              records.lookStick = 0i64;
              CL_Input_AddAutomatedSequence(LOCAL_CLIENT_0, &records, 1);
            }
LABEL_121:
            IWStaticCircularQueue<UINavCommand,256,unsigned short>::PopFront(&s_uiNavGlob.navCommands);
            return;
        }
        if ( (unsigned int)(type - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 1151, ASSERT_TYPE_ASSERT, "(command->type == UINavCommand::CommandType::Tab || command->type == UINavCommand::Button || command->type == UINavCommand::ButtonTry)", (const char *)&queryFormat, "command->type == UINavCommand::CommandType::Tab || command->type == UINavCommand::Button || command->type == UINavCommand::ButtonTry") )
          __debugbreak();
        v39 = v20->type;
        v40 = NULL;
        if ( (unsigned int)(v39 - 2) <= 1 )
          v40 = (const char *)v20;
        if ( v39 == Tab )
          v2 = v20;
        if ( UI_AutoNavigation_TraversePathToTarget((const char *)v2, v40) || v20->type == ButtonTry )
          goto LABEL_121;
      }
    }
  }
}

/*
==============
UI_AutoNavigation_LoadGraph
==============
*/
char UI_AutoNavigation_LoadGraph(const char *filename)
{
  char *RawFile; 
  signed __int64 v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  fileHandle_t file; 
  bdJSONDeserializer value; 
  __int64 v18; 
  bdJSONDeserializer v19; 
  ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,UINavNode *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,UINavNode *> >,256,8>,ntl::return_pair_first<unsigned int,UINavNode *>,ntl::less<unsigned int,unsigned int> > ospath; 
  char buf[131072]; 

  v18 = -2i64;
  memset_0(s_uiNavGlob.nodes, 0, 0xA000ui64);
  memset_0(s_uiNavGlob.inputRecords, 0, sizeof(s_uiNavGlob.inputRecords));
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:s_uiNavGlob.nodeCount, xmm0
  }
  s_uiNavGlob.navGraph = NULL;
  RawFile = DB_ReadRawFile(filename, buf, 98304);
  if ( RawFile )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( RawFile[v5] );
  }
  else
  {
    Com_PrintWarning(13, "ui_nav: Could not find rawfile ui navigation graph: '%s'\n", filename);
    v5 = FS_FOpenFileRead(filename, &file);
    if ( v5 < 0 )
    {
      Com_PrintWarning(13, "ui_nav: Could not find loose ui navigation graph: '%s'\n", filename);
      v6 = Sys_DefaultHomePath();
      FS_BuildOSPath(v6, (const char *)&queryFormat.fmt + 3, filename, (char (*)[256])&ospath);
      v7 = FS_FOpenFileRead(ospath.m_data.m_buffer, &file);
      v5 = v7;
      if ( v7 < 0 )
      {
        Com_PrintWarning(13, "ui_nav: Could not find loose ui navigation graph: '%s'\n", ospath.m_data.m_buffer);
      }
      else
      {
        if ( (unsigned __int64)v7 >= 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 398, ASSERT_TYPE_ASSERT, "(fileLength < sizeof( fileBuffer ))", (const char *)&queryFormat, "fileLength < sizeof( fileBuffer )") )
          __debugbreak();
        FS_Read(buf, v5, file);
        if ( (unsigned __int64)v5 >= 0x20000 )
        {
          j___report_rangecheckfailure(v8);
          JUMPOUT(0x1417E77FFi64);
        }
        buf[v5] = 0;
        FS_FCloseFile(file);
      }
    }
  }
  if ( v5 <= 0 )
  {
    Com_PrintWarning(13, "ui_nav: Could not find ui navigation graph file: '%s'\n", filename);
    return 0;
  }
  else
  {
    bdJSONDeserializer::bdJSONDeserializer(&v19, buf);
    bdJSONDeserializer::bdJSONDeserializer(&value);
    p_m_freelist = &ospath.m_freelist;
    v10 = &ospath.m_data.m_buffer[12240];
    do
    {
      *(_QWORD *)v10 = p_m_freelist;
      p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v10;
      v10 -= 48;
    }
    while ( v10 + 48 > (char *)&ospath );
    ospath.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
    if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    ospath.m_size = 0i64;
    ospath.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
    ospath.m_endNodeBase.mp_parent = NULL;
    ospath.m_endNodeBase.mp_left = &ospath.m_endNodeBase;
    ospath.m_endNodeBase.mp_right = &ospath.m_endNodeBase;
    bdJSONDeserializer::getChild(&v19, &value, NULL, 0);
    while ( value.m_parsed )
    {
      UI_AutoNavigation_CreateNode(&value, (ntl::fixed_map<unsigned int,UINavNode *,256,ntl::less<unsigned int,unsigned int> > *)&ospath);
      bdJSONDeserializer::getNext(&value, &value, NULL, 0);
    }
    v11 = 0;
    bdJSONDeserializer::getChild(&v19, &value, NULL, 0);
    while ( value.m_parsed )
    {
      v12 = v11++;
      UI_AutoNavigation_CreateNodeConnections(&value, (const ntl::fixed_map<unsigned int,UINavNode *,256,ntl::less<unsigned int,unsigned int> > *)&ospath, v12);
      bdJSONDeserializer::getNext(&value, &value, NULL, 0);
    }
    s_uiNavGlob.navGraph = s_uiNavGlob.nodes;
    if ( ospath.m_size )
    {
      mp_parent = ospath.m_endNodeBase.mp_parent;
      if ( ospath.m_endNodeBase.mp_parent )
      {
        do
        {
          ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,UINavNode *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,UINavNode *>>,256,8>,ntl::return_pair_first<unsigned int,UINavNode *>,ntl::less<unsigned int,unsigned int>>::erase_tree(&ospath, (ntl::red_black_tree_node<ntl::pair<unsigned int,UINavNode *> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = ospath.m_freelist.m_head.mp_next;
          ospath.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      ospath.m_endNodeBase.mp_parent = NULL;
      ospath.m_endNodeBase.mp_left = &ospath.m_endNodeBase;
      ospath.m_endNodeBase.mp_right = &ospath.m_endNodeBase;
      ospath.m_size = 0i64;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&value);
    bdJSONDeserializer::~bdJSONDeserializer(&v19);
    return 1;
  }
}

/*
==============
UI_AutoNavigation_RegisterCmds
==============
*/
void UI_AutoNavigation_RegisterCmds(void)
{
  s_uiNavGlob.navCommands.cleared = 1;
  *(_DWORD *)&s_uiNavGlob.navCommands.start = 0;
  Cmd_AddClientCommandList(S_UI_AUTONAV_CMD, 9u);
}

/*
==============
UI_AutoNavigation_TraversePath
==============
*/
bool UI_AutoNavigation_TraversePath(unsigned int currentLocationId)
{
  bool result; 
  const char *v3; 
  int v4; 
  UINavNode *v5; 
  __int64 v6; 
  UINavNode *v7; 
  UINavConnection *children; 
  UINavNode *dest; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  int abInputsCount; 
  unsigned int targetButtonNameIndex; 
  unsigned int targetTabNameIndex; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 

  if ( s_uiNavGlob.nextDestinationNode == s_uiNavGlob.desiredDestinationNode && s_uiNavGlob.desiredDestinationNode->displayId == currentLocationId )
    return 0;
  if ( s_uiNavGlob.currentPath.nodeCount )
  {
    v3 = NULL;
    v4 = 0;
    if ( !s_uiNavGlob.currentPath.nodeCount )
      goto LABEL_9;
    while ( 1 )
    {
      v5 = s_uiNavGlob.currentPath.nodes[v4];
      if ( s_uiNavGlob.nextDestinationNode == v5 && v5->displayId == currentLocationId )
        break;
      if ( ++v4 >= s_uiNavGlob.currentPath.nodeCount )
        goto LABEL_9;
    }
    v6 = (unsigned int)(v4 + 1);
    s_uiNavGlob.currentLocationNode = v5;
    if ( (unsigned int)v6 >= s_uiNavGlob.currentPath.nodeCount || (v7 = s_uiNavGlob.currentPath.nodes[v6], s_uiNavGlob.nextDestinationNode = v7, (children = v5->children) == NULL) )
    {
LABEL_9:
      result = 1;
      s_uiNavGlob.currentPath.nodeCount = 0;
      s_uiNavGlob.nextDestinationNode = NULL;
      return result;
    }
    while ( 1 )
    {
      dest = children->dest;
      if ( dest == v7 )
        break;
      children = children->next;
      if ( !children )
        goto LABEL_9;
    }
    if ( dest->splitScreenJoin )
    {
      v10 = CL_Mgr_IsClientActive(LOCAL_CLIENT_0) ? CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0) : 0;
      v11 = CL_Mgr_IsClientActive(LOCAL_CLIENT_1) ? CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_1) : 1;
      if ( v10 == v11 || !CL_Mgr_IsControllerActive(v11) )
      {
        v12 = 0;
        while ( v12 == v10 || !Live_IsUserSignedIn(v12) )
        {
          if ( ++v12 >= 8 )
            goto LABEL_30;
        }
        v13 = Sys_Milliseconds();
        CL_GamepadButtonEventForPort(v12, 1, 1, v13, 0);
      }
    }
LABEL_30:
    abInputsCount = children->abInputsCount;
    if ( abInputsCount )
    {
      CL_Input_AddAutomatedSequence(LOCAL_CLIENT_0, children->abInputs, abInputsCount);
    }
    else if ( !CL_Input_AutomatedSequenceRunning(LOCAL_CLIENT_0) )
    {
      targetButtonNameIndex = children->targetButtonNameIndex;
      if ( targetButtonNameIndex != -1 || children->targetTabNameIndex != -1 )
      {
        targetTabNameIndex = children->targetTabNameIndex;
        v17 = NULL;
        if ( targetTabNameIndex != -1 )
        {
          if ( targetTabNameIndex >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 884, ASSERT_TYPE_ASSERT, "(unsigned)( connection->targetTabNameIndex ) < (unsigned)( MAX_AUTOMATED_TARGET_ELEMENT_NAMES )", "connection->targetTabNameIndex doesn't index MAX_AUTOMATED_TARGET_ELEMENT_NAMES\n\t%i not in [0, %i)", children->targetTabNameIndex, 256) )
            __debugbreak();
          targetButtonNameIndex = children->targetButtonNameIndex;
          v3 = s_uiNavGlob.targetElementNames[(unsigned __int64)children->targetTabNameIndex];
        }
        if ( targetButtonNameIndex != -1 )
        {
          if ( targetButtonNameIndex >= 0x100 )
          {
            LODWORD(v19) = 256;
            LODWORD(v18) = targetButtonNameIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_automation.cpp", 889, ASSERT_TYPE_ASSERT, "(unsigned)( connection->targetButtonNameIndex ) < (unsigned)( MAX_AUTOMATED_TARGET_ELEMENT_NAMES )", "connection->targetButtonNameIndex doesn't index MAX_AUTOMATED_TARGET_ELEMENT_NAMES\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v17 = s_uiNavGlob.targetElementNames[(unsigned __int64)children->targetButtonNameIndex];
        }
        UI_AutoNavigation_TraversePathToTarget(v3, v17);
      }
    }
  }
  return 1;
}

/*
==============
UI_AutoNavigation_TraversePathToTarget
==============
*/
bool UI_AutoNavigation_TraversePathToTarget(const char *targetTabName, const char *targetButtonName)
{
  int PathToElement; 
  __int64 v4; 
  __int64 v5; 
  AutomatedInput_Record *v7; 
  __int64 v8; 
  bitarray_base<bitarray<224> > *p_keys; 
  signed int v10; 
  int pathKeys[128]; 
  AutomatedInput_Record records; 
  AutomatedInput_Record v14; 

  PathToElement = LUI_GetPathToElement(LOCAL_CLIENT_0, targetTabName, targetButtonName, pathKeys, 128);
  v4 = PathToElement;
  if ( PathToElement > 0 )
  {
    v5 = 0i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+1C58h+records.deferTimeSeconds], xmm0
    }
    memset(&records.holdTimeSeconds, 0, 32);
    memset_0(&records.moveStick, 0, 0x19DCui64);
    v7 = &v14;
    v8 = 127i64;
    do
    {
      AutomatedInput_Record::AutomatedInput_Record(v7++);
      --v8;
    }
    while ( v8 );
    if ( (int)v4 > 0 )
    {
      p_keys = (bitarray_base<bitarray<224> > *)&records.keys;
      do
      {
        v10 = pathKeys[v5];
        *(_DWORD *)&p_keys[-4] = 1036831949;
        *(_DWORD *)&p_keys[-8] = 1065353216;
        if ( v10 > 0 )
          bitarray_base<bitarray<224>>::setBit(p_keys, v10);
        ++v5;
        p_keys += 52;
      }
      while ( v5 < v4 );
    }
    CL_Input_AddAutomatedSequence(LOCAL_CLIENT_0, &records, v4);
  }
  return (int)v4 >= 0;
}

/*
==============
UI_AutoNavigation_UnregisterCmds
==============
*/
void UI_AutoNavigation_UnregisterCmds(void)
{
  Cmd_RemoveClientCommandList(S_UI_AUTONAV_CMD, 9u);
}

/*
==============
UI_AutoNavigation_UseBypasses
==============
*/
bool UI_AutoNavigation_UseBypasses()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_uinav_bypasses;
  if ( !DVARBOOL_uinav_bypasses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "uinav_bypasses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

