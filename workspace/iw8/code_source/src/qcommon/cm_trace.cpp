/*
==============
CM_GetBrushModel
==============
*/

const cmodel_t *__fastcall CM_GetBrushModel(unsigned int bmodelIndex)
{
  return ?CM_GetBrushModel@@YAPEBUcmodel_t@@I@Z(bmodelIndex);
}

/*
==============
Trace_GetScriptableHitId
==============
*/

unsigned int __fastcall Trace_GetScriptableHitId(const trace_t *trace)
{
  return ?Trace_GetScriptableHitId@@YAIPEBUtrace_t@@@Z(trace);
}

/*
==============
CM_ContentsOfBrushModel
==============
*/

int __fastcall CM_ContentsOfBrushModel(unsigned int bmodelIndex)
{
  return ?CM_ContentsOfBrushModel@@YAHI@Z(bmodelIndex);
}

/*
==============
CM_GetClipMapPtr
==============
*/

void *__fastcall CM_GetClipMapPtr()
{
  return ?CM_GetClipMapPtr@@YAPEAXXZ();
}

/*
==============
Trace_GetEntityHitId
==============
*/

unsigned __int16 __fastcall Trace_GetEntityHitId(const trace_t *trace)
{
  return ?Trace_GetEntityHitId@@YAGPEBUtrace_t@@@Z(trace);
}

/*
==============
CM_GetBrushModelCount
==============
*/

unsigned int __fastcall CM_GetBrushModelCount()
{
  return ?CM_GetBrushModelCount@@YAIXZ();
}

/*
==============
Trace_GetGlassHitId
==============
*/

unsigned __int16 __fastcall Trace_GetGlassHitId(const trace_t *trace)
{
  return ?Trace_GetGlassHitId@@YAGPEBUtrace_t@@@Z(trace);
}

/*
==============
CM_BrushModelIsValid
==============
*/

bool __fastcall CM_BrushModelIsValid(unsigned int bmodelIndex)
{
  return ?CM_BrushModelIsValid@@YA_NI@Z(bmodelIndex);
}

/*
==============
CM_BrushModelIsValid
==============
*/
bool CM_BrushModelIsValid(unsigned int bmodelIndex)
{
  return bmodelIndex < cm.mapEnts->numSubModels;
}

/*
==============
CM_ContentsOfBrushModel
==============
*/
int CM_ContentsOfBrushModel(unsigned int bmodelIndex)
{
  __int64 v1; 

  v1 = bmodelIndex;
  if ( bmodelIndex >= cm.mapEnts->numSubModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( bmodelIndex ) < (unsigned)( cm.mapEnts->numSubModels )", "bmodelIndex doesn't index cm.mapEnts->numSubModels\n\t%i not in [0, %i)", bmodelIndex, cm.mapEnts->numSubModels) )
    __debugbreak();
  return Physics_GetShapeOverrideContents(cm.mapEnts->cmodels[v1].physicsShapeOverrideIdx);
}

/*
==============
CM_GetBrushModel
==============
*/
cmodel_t *CM_GetBrushModel(unsigned int bmodelIndex)
{
  __int64 v1; 

  v1 = bmodelIndex;
  if ( bmodelIndex >= cm.mapEnts->numSubModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( bmodelIndex ) < (unsigned)( cm.mapEnts->numSubModels )", "bmodelIndex doesn't index cm.mapEnts->numSubModels\n\t%i not in [0, %i)", bmodelIndex, cm.mapEnts->numSubModels) )
    __debugbreak();
  return &cm.mapEnts->cmodels[v1];
}

/*
==============
CM_GetBrushModelCount
==============
*/
MapEnts *CM_GetBrushModelCount()
{
  MapEnts *result; 

  result = cm.mapEnts;
  if ( cm.mapEnts )
    return (MapEnts *)cm.mapEnts->numSubModels;
  return result;
}

/*
==============
CM_GetClipMapPtr
==============
*/
clipMap_t *CM_GetClipMapPtr()
{
  return &cm;
}

/*
==============
Trace_GetEntityHitId
==============
*/
unsigned __int16 Trace_GetEntityHitId(const trace_t *trace)
{
  TraceHitType hitType; 
  __int64 v4; 

  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 28, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( trace->hitType > (unsigned int)TRACE_HITTYPE_CLIENT_MODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 29, ASSERT_TYPE_ASSERT, "((trace->hitType >= TRACE_HITTYPE_BEGIN) && (trace->hitType <= TRACE_HITTYPE_END))", (const char *)&queryFormat, "(trace->hitType >= TRACE_HITTYPE_BEGIN) && (trace->hitType <= TRACE_HITTYPE_END)") )
    __debugbreak();
  hitType = trace->hitType;
  if ( (unsigned int)(hitType - 2) <= 4 )
    return 2046;
  if ( hitType == TRACE_HITTYPE_ENTITY )
  {
    if ( trace->hitId >= 0x800 )
    {
      LODWORD(v4) = trace->hitId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( trace->hitId ) < (unsigned)( ( 2048 ) )", "trace->hitId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
        __debugbreak();
    }
    return truncate_cast<unsigned short,unsigned int>(trace->hitId);
  }
  else
  {
    if ( hitType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 49, ASSERT_TYPE_ASSERT, "(trace->hitType == TRACE_HITTYPE_NONE)", (const char *)&queryFormat, "trace->hitType == TRACE_HITTYPE_NONE") )
      __debugbreak();
    return 2047;
  }
}

/*
==============
Trace_GetGlassHitId
==============
*/
unsigned __int16 Trace_GetGlassHitId(const trace_t *trace)
{
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 57, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( trace->hitType != TRACE_HITTYPE_GLASS )
    return 0;
  if ( !trace->hitId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 61, ASSERT_TYPE_ASSERT, "(trace->hitId != 0)", (const char *)&queryFormat, "trace->hitId != 0") )
    __debugbreak();
  return truncate_cast<unsigned short,unsigned int>(trace->hitId);
}

/*
==============
Trace_GetScriptableHitId
==============
*/
__int64 Trace_GetScriptableHitId(const trace_t *trace)
{
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 71, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( trace->hitType > (unsigned int)TRACE_HITTYPE_CLIENT_MODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_trace.cpp", 72, ASSERT_TYPE_ASSERT, "((trace->hitType >= TRACE_HITTYPE_BEGIN) && (trace->hitType <= TRACE_HITTYPE_END))", (const char *)&queryFormat, "(trace->hitType >= TRACE_HITTYPE_BEGIN) && (trace->hitType <= TRACE_HITTYPE_END)") )
    __debugbreak();
  if ( trace->hitType == TRACE_HITTYPE_SCRIPTABLE )
    return trace->hitId;
  else
    return 0xFFFFFFFFi64;
}

