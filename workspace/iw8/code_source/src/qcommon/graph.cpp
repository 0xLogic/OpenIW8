/*
==============
GraphFloat_GetValue
==============
*/

double __fastcall GraphFloat_GetValue(const GraphFloat *graph, float fraction)
{
  double result; 

  *(float *)&result = ?GraphFloat_GetValue@@YAMPEBUGraphFloat@@M@Z(graph, fraction);
  return result;
}

/*
==============
GraphFloat_Load
==============
*/

void __fastcall GraphFloat_Load(GraphFloat *graph, const char *fileName, float scale)
{
  ?GraphFloat_Load@@YAXPEAUGraphFloat@@PEBDM@Z(graph, fileName, scale);
}

/*
==============
GraphFloat_CreateDevGui
==============
*/

void __fastcall GraphFloat_CreateDevGui(GraphFloat *graph, DevGraph *devguiGraph, const char *devguiPath)
{
  ?GraphFloat_CreateDevGui@@YAXPEAUGraphFloat@@PEAUDevGraph@@PEBD@Z(graph, devguiGraph, devguiPath);
}

/*
==============
GraphFloat_CreateDevGui
==============
*/
void GraphFloat_CreateDevGui(GraphFloat *graph, DevGraph *devguiGraph, const char *devguiPath)
{
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 204, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !devguiGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 205, ASSERT_TYPE_ASSERT, "(devguiGraph)", (const char *)&queryFormat, "devguiGraph") )
    __debugbreak();
  if ( !devguiPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 206, ASSERT_TYPE_ASSERT, "(devguiPath)", (const char *)&queryFormat, "devguiPath") )
    __debugbreak();
  devguiGraph->data = graph;
  devguiGraph->knotCountMax = 32;
  devguiGraph->knots = graph->knots;
  devguiGraph->knotCount = &graph->knotCount;
  devguiGraph->eventCallback = GraphFloat_DevGuiCB_Event;
  devguiGraph->textCallback = (void (__fastcall *)(const DevGraph *, const float, const float, char *, const int))GraphFloat_DevGuiCB_Text;
  DevGui_AddGraph(devguiPath, devguiGraph);
}

/*
==============
GraphFloat_DevGuiCB_Event
==============
*/
void GraphFloat_DevGuiCB_Event(const DevGraph *graph, const char *event, LocalClientNum_t localClientNum)
{
  int v3; 
  fileHandle_t *data; 
  fileHandle_t *v6; 
  __int64 handle_low; 
  __int64 v8; 
  __int64 v9; 
  __int64 v16; 
  const char *v17; 
  char *fmt; 
  char *fmta; 
  char dest[1024]; 

  v3 = (int)event;
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 168, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 169, ASSERT_TYPE_ASSERT, "(graph->data)", (const char *)&queryFormat, "graph->data") )
    __debugbreak();
  data = (fileHandle_t *)graph->data;
  if ( v3 == 5 )
  {
    if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 128, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
      __debugbreak();
    v6 = FS_FOpenTextFileWrite(data, event);
    if ( v6 == (fileHandle_t *)-1i64 )
    {
      Com_PrintError(0, "GraphFloat_SaveToFile: Could not save file [%s].\n", (const char *)data);
    }
    else
    {
      if ( !LOWORD(data[40].handle.handle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 142, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
        __debugbreak();
      handle_low = LOWORD(data[40].handle.handle);
      LODWORD(fmt) = LOWORD(data[40].handle.handle);
      Com_sprintf(dest, 0x400ui64, "%s\n\n%d\n", "GRAPH_FLOAT_FILE", fmt);
      v8 = -1i64;
      do
        ++v8;
      while ( dest[v8] );
      FS_Write(dest, (unsigned int)v8, (fileHandle_t)v6);
      v9 = handle_low;
      if ( (_DWORD)handle_low )
      {
        _RDI = data + 8;
        do
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rdi]
            vmovss  xmm0, dword ptr [rdi+4]
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm0, xmm0, xmm0
            vmovq   r9, xmm3
            vmovsd  [rsp+448h+fmt], xmm0
          }
          Com_sprintf(dest, 0x400ui64, "%.4f %.4f\n", *(double *)&_XMM3, *(double *)&fmta);
          v16 = -1i64;
          do
            ++v16;
          while ( dest[v16] );
          FS_Write(dest, (unsigned int)v16, (fileHandle_t)v6);
          ++_RDI;
          --v9;
        }
        while ( v9 );
      }
      FS_FCloseFile((fileHandle_t)v6);
      v17 = Sys_DefaultInstallPath();
      Com_Printf(18, "^7GraphFloat_SaveToFile: Successfully saved file [%s\\%s].\n", v17, (const char *)data);
    }
  }
}

/*
==============
GraphFloat_DevGuiCB_Text
==============
*/

void __fastcall GraphFloat_DevGuiCB_Text(const DevGraph *devGuiGraph, double inputX, double inputY, char *text, const int textLength)
{
  double v10; 

  __asm
  {
    vcvtss2sd xmm3, xmm1, xmm1
    vmovq   r9, xmm3
    vmulss  xmm0, xmm2, dword ptr [rax+144h]
    vcvtss2sd xmm2, xmm0, xmm0
    vmovsd  [rsp+arg_20], xmm2
  }
  Com_sprintf(text, 0x30ui64, "Fraction: %.3f, Value: %.3f", *(double *)&_XMM3, v10);
}

/*
==============
GraphFloat_GetValue
==============
*/

float __fastcall GraphFloat_GetValue(const GraphFloat *graph, double fraction)
{
  bool v6; 
  bool v7; 
  double v15; 
  double v16; 
  double v17; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = graph == NULL;
  if ( !graph )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 106, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v6 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+58h+var_20], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_28], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 107, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v15, v16, v17) )
      __debugbreak();
  }
  __asm { vmovaps xmm2, xmm6; fraction }
  *(double *)&_XMM0 = GraphGetValueFromFraction(graph->knotCount, graph->knots, *(const float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, dword ptr [rbx+144h]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
GraphFloat_Load
==============
*/

void __fastcall GraphFloat_Load(GraphFloat *graph, const char *fileName, double scale)
{
  signed __int64 v3; 
  void *v5; 
  const char *InfoString; 
  char loadBuffer[16384]; 

  v5 = alloca(v3);
  __asm { vmovaps [rsp+4068h+var_28], xmm6 }
  _RDI = graph;
  __asm { vmovaps xmm6, xmm2 }
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 86, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 87, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
    __debugbreak();
  memset_0(_RDI, 0, sizeof(GraphFloat));
  InfoString = Com_LoadInfoString(fileName, "graph", "GRAPH_FLOAT_FILE", loadBuffer);
  GraphFloat_ParseBuffer(_RDI, InfoString, fileName);
  __asm
  {
    vmovss  dword ptr [rdi+144h], xmm6
    vmovaps xmm6, [rsp+4068h+var_28]
  }
}

/*
==============
GraphFloat_ParseBuffer
==============
*/
void GraphFloat_ParseBuffer(GraphFloat *graph, const char *buffer, const char *fileName)
{
  const char *v8; 
  int v9; 
  int v10; 
  const char *v11; 
  char v12; 
  __int64 v14; 
  const char *v16; 
  char *fmt; 
  char *data_p; 

  data_p = (char *)buffer;
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 33, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !data_p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 34, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 35, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
    __debugbreak();
  Core_strcpy(graph->name, 0x40ui64, fileName);
  Com_BeginParseSession(fileName);
  v8 = Com_Parse((const char **)&data_p);
  v9 = 0;
  v10 = atoi(v8);
  v11 = Com_Parse((const char **)&data_p);
  v12 = *v11;
  if ( *v11 )
  {
    _RBX = (float *)graph->knots + 1;
    v14 = 0i64;
    __asm
    {
      vmovaps [rsp+78h+var_38], xmm6
      vmovaps [rsp+78h+var_48], xmm7
    }
    do
    {
      if ( v12 == 125 )
        break;
      *(double *)&_XMM0 = atof(v11);
      __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
      v16 = Com_Parse((const char **)&data_p);
      if ( !*v16 || *v16 == 125 )
        break;
      *(double *)&_XMM0 = atof(v16);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      if ( v14 >= 32 )
      {
        LODWORD(fmt) = 32;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144014D60, 249i64, fileName, fmt);
      }
      __asm
      {
        vmovss  dword ptr [rbx-4], xmm7
        vmovss  dword ptr [rbx], xmm6
      }
      _RBX += 2;
      ++v9;
      ++v14;
      v11 = Com_Parse((const char **)&data_p);
      v12 = *v11;
    }
    while ( *v11 );
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_38]
      vmovaps xmm7, [rsp+78h+var_48]
    }
  }
  Com_EndParseSession();
  if ( v9 != v10 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144014DD0, 250i64, fileName);
  graph->knotCount = v10;
  if ( (unsigned __int16)v10 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 74, ASSERT_TYPE_ASSERT, "(graph->knotCount == knotCount)", (const char *)&queryFormat, "graph->knotCount == knotCount") )
    __debugbreak();
}

