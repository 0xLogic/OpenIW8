/*
==============
R_ReleaseAndSetNULL<ID3D12PipelineState>
==============
*/

void __fastcall R_ReleaseAndSetNULL<ID3D12PipelineState>(ID3D12PipelineState *var, const char *fn, const char *filename, int line)
{
  ??$R_ReleaseAndSetNULL@UID3D12PipelineState@@@@YAXPEAUID3D12PipelineState@@PEBD1H@Z(var, fn, filename, line);
}

/*
==============
R_ReleaseAndSetNULL<ID3D12Debug>
==============
*/

void __fastcall R_ReleaseAndSetNULL<ID3D12Debug>(ID3D12Debug *var, const char *fn, const char *filename, int line)
{
  ??$R_ReleaseAndSetNULL@UID3D12Debug@@@@YAXPEAUID3D12Debug@@PEBD1H@Z(var, fn, filename, line);
}

/*
==============
R_ReleaseAndSetNULL<ID3D12Resource>
==============
*/

void __fastcall R_ReleaseAndSetNULL<ID3D12Resource>(ID3D12Resource *var, const char *fn, const char *filename, int line)
{
  ??$R_ReleaseAndSetNULL@UID3D12Resource@@@@YAXPEAUID3D12Resource@@PEBD1H@Z(var, fn, filename, line);
}

/*
==============
R_ReleaseAndSetNULL<ID3D12Resource>
==============
*/
void R_ReleaseAndSetNULL<ID3D12Resource>(ID3D12Resource *var, const char *fn, const char *filename, int line)
{
  unsigned int v8; 

  if ( !var && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v8 = var->m_pFunction->Release(var);
  if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", filename, line, fn, v8) )
    __debugbreak();
}

/*
==============
R_ReleaseAndSetNULL<ID3D12Debug>
==============
*/
void R_ReleaseAndSetNULL<ID3D12Debug>(ID3D12Debug *var, const char *fn, const char *filename, int line)
{
  unsigned int v8; 

  if ( !var && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v8 = var->m_pFunction->Release(&var->IGraphicsUnknown);
  if ( !g_dx.analysisToolPresent && !g_dx.incompatibleOverlayPresent && v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", filename, line, fn, v8) )
    __debugbreak();
}

/*
==============
R_ReleaseAndSetNULL<ID3D12PipelineState>
==============
*/
void R_ReleaseAndSetNULL<ID3D12PipelineState>(ID3D12PipelineState *var, const char *fn, const char *filename, int line)
{
  unsigned int v8; 

  if ( !var && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
    __debugbreak();
  v8 = var->m_pFunction->Release(var);
  if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", filename, line, fn, v8) )
    __debugbreak();
}

