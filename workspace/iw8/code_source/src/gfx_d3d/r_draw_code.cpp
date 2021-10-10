/*
==============
R_DrawCodeSurf
==============
*/

void __fastcall R_DrawCodeSurf(GfxCodeSurfIter *codeSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawCodeSurf@@YAXPEIAVGfxCodeSurfIter@@UGfxCmdBufContext@@@Z(codeSurfIter, context);
}

/*
==============
R_DrawCodeSurf
==============
*/
void R_DrawCodeSurf(GfxCodeSurfIter *codeSurfIter, GfxCmdBufContext *context)
{
  char *Value; 
  unsigned int *v5; 
  unsigned int v6; 
  _QWORD *v7; 
  char *v8; 
  int *v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v16; 
  const char *ConstantLayoutName; 
  GfxDrawGroupSetup v18; 
  __int64 v19; 
  __int64 v20; 
  GfxCmdBufContext v21; 

  Value = (char *)Sys_GetValue(0);
  v5 = (unsigned int *)(Value + 5376);
  if ( (unsigned int)(*((_DWORD *)Value + 1344) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1344) + 1, 3) )
    __debugbreak();
  v6 = *v5 + 1;
  *v5 = v6;
  if ( v6 >= 3 )
  {
    LODWORD(v20) = 3;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v7 = Value + 2088;
  v8 = Value + 40;
  if ( *v7 < (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v7 += 8i64;
  if ( *v7 >= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v7 = v5;
  if ( *v7 <= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v9 = (int *)&v5[*v5 + 2];
  v10 = __rdtsc();
  *v9 = v10;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 82, NULL, 0);
  if ( !codeSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_code.cpp", 226, ASSERT_TYPE_ASSERT, "(codeSurfIter)", (const char *)&queryFormat, "codeSurfIter") )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_code.cpp", 227, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_code.cpp", 228, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex )
  {
    name = technique->name;
    v16 = state->material->name;
    ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
    R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "CODE", v16, name);
    if ( codeSurfIter->current > codeSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", codeSurfIter->current, codeSurfIter->end) )
      __debugbreak();
    if ( codeSurfIter->current == codeSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurfiter.h", 55, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
      __debugbreak();
    v18.fields = codeSurfIter->current->drawGroup.fields;
    for ( ++codeSurfIter->current; !GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone(codeSurfIter); ++codeSurfIter->current )
    {
      if ( codeSurfIter->current->drawGroup.packed != v18.packed )
        break;
    }
  }
  else
  {
    v21 = *context;
    R_DrawCodeSurf_Internal_0_(codeSurfIter, &v21);
  }
  Profile_EndInternal(NULL);
}

