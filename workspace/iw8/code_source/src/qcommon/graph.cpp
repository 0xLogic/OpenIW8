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
  unsigned __int16 *data; 
  fileHandle_t *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  float *v10; 
  __int64 v11; 
  const char *v12; 
  char *fmt; 
  char dest[1024]; 

  v3 = (int)event;
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 168, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !graph->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 169, ASSERT_TYPE_ASSERT, "(graph->data)", (const char *)&queryFormat, "graph->data") )
    __debugbreak();
  data = (unsigned __int16 *)graph->data;
  if ( v3 == 5 )
  {
    if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 128, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
      __debugbreak();
    v6 = FS_FOpenTextFileWrite((fileHandle_t *)data, event);
    if ( v6 == (fileHandle_t *)-1i64 )
    {
      Com_PrintError(0, "GraphFloat_SaveToFile: Could not save file [%s].\n", (const char *)data);
    }
    else
    {
      if ( !data[160] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 142, ASSERT_TYPE_ASSERT, "(graph->knotCount)", (const char *)&queryFormat, "graph->knotCount") )
        __debugbreak();
      v7 = data[160];
      LODWORD(fmt) = data[160];
      Com_sprintf(dest, 0x400ui64, "%s\n\n%d\n", "GRAPH_FLOAT_FILE", fmt);
      v8 = -1i64;
      do
        ++v8;
      while ( dest[v8] );
      FS_Write(dest, (unsigned int)v8, (fileHandle_t)v6);
      v9 = v7;
      if ( (_DWORD)v7 )
      {
        v10 = (float *)(data + 32);
        do
        {
          Com_sprintf(dest, 0x400ui64, "%.4f %.4f\n", *v10, v10[1]);
          v11 = -1i64;
          do
            ++v11;
          while ( dest[v11] );
          FS_Write(dest, (unsigned int)v11, (fileHandle_t)v6);
          v10 += 2;
          --v9;
        }
        while ( v9 );
      }
      FS_FCloseFile((fileHandle_t)v6);
      v12 = Sys_DefaultInstallPath();
      Com_Printf(18, "^7GraphFloat_SaveToFile: Successfully saved file [%s\\%s].\n", v12, (const char *)data);
    }
  }
}

/*
==============
GraphFloat_DevGuiCB_Text
==============
*/
void GraphFloat_DevGuiCB_Text(const DevGraph *devGuiGraph, float inputX, float inputY, char *text, const int textLength)
{
  Com_sprintf(text, 0x30ui64, "Fraction: %.3f, Value: %.3f", inputX, (float)(inputY * *((float *)devGuiGraph->data + 81)));
}

/*
==============
GraphFloat_GetValue
==============
*/

float __fastcall GraphFloat_GetValue(const GraphFloat *graph, double fraction)
{
  float v3; 
  double ValueFromFraction; 

  v3 = *(float *)&fraction;
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 106, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( *(float *)&fraction < 0.0 || *(float *)&fraction > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 107, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( fraction ) && ( fraction ) <= ( 1.0f )", "fraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v3, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  ValueFromFraction = GraphGetValueFromFraction(graph->knotCount, graph->knots, v3);
  return *(float *)&ValueFromFraction * graph->scale;
}

/*
==============
GraphFloat_Load
==============
*/
void GraphFloat_Load(GraphFloat *graph, const char *fileName, float scale)
{
  signed __int64 v3; 
  void *v4; 
  const char *InfoString; 
  char loadBuffer[16384]; 

  v4 = alloca(v3);
  if ( !graph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 86, ASSERT_TYPE_ASSERT, "(graph)", (const char *)&queryFormat, "graph") )
    __debugbreak();
  if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 87, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
    __debugbreak();
  memset_0(graph, 0, sizeof(GraphFloat));
  InfoString = Com_LoadInfoString(fileName, "graph", "GRAPH_FLOAT_FILE", loadBuffer);
  GraphFloat_ParseBuffer(graph, InfoString, fileName);
  graph->scale = scale;
}

/*
==============
GraphFloat_ParseBuffer
==============
*/
void GraphFloat_ParseBuffer(GraphFloat *graph, const char *buffer, const char *fileName)
{
  const char *v6; 
  int v7; 
  int v8; 
  const char *v9; 
  char v10; 
  float *v11; 
  __int64 v12; 
  const char *v14; 
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
  v6 = Com_Parse((const char **)&data_p);
  v7 = 0;
  v8 = atoi(v6);
  v9 = Com_Parse((const char **)&data_p);
  v10 = *v9;
  if ( *v9 )
  {
    v11 = (float *)graph->knots + 1;
    v12 = 0i64;
    do
    {
      if ( v10 == 125 )
        break;
      *(double *)&_XMM0 = atof(v9);
      __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
      v14 = Com_Parse((const char **)&data_p);
      if ( !*v14 || *v14 == 125 )
        break;
      *(double *)&_XMM0 = atof(v14);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      if ( v12 >= 32 )
      {
        LODWORD(fmt) = 32;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144014D60, 249i64, fileName, fmt);
      }
      *(v11 - 1) = *(float *)&_XMM7;
      *v11 = *(float *)&_XMM6;
      v11 += 2;
      ++v7;
      ++v12;
      v9 = Com_Parse((const char **)&data_p);
      v10 = *v9;
    }
    while ( *v9 );
  }
  Com_EndParseSession();
  if ( v7 != v8 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144014DD0, 250i64, fileName);
  graph->knotCount = v8;
  if ( (unsigned __int16)v8 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\graph.cpp", 74, ASSERT_TYPE_ASSERT, "(graph->knotCount == knotCount)", (const char *)&queryFormat, "graph->knotCount == knotCount") )
    __debugbreak();
}

