/*
==============
R_DrawGlassSurf
==============
*/

void __fastcall R_DrawGlassSurf(GfxGlassSurfIter *glassSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawGlassSurf@@YAXPEIAVGfxGlassSurfIter@@UGfxCmdBufContext@@@Z(glassSurfIter, context);
}

/*
==============
R_DrawGlassSurf
==============
*/
void R_DrawGlassSurf(GfxGlassSurfIter *glassSurfIter, GfxCmdBufContext *context)
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
  __int64 v18; 
  __int64 v20; 
  __int64 v21; 
  GfxCmdBufContext v22; 
  int v23; 

  _RBP = context;
  Value = (char *)Sys_GetValue(0);
  v5 = (unsigned int *)(Value + 5336);
  if ( (unsigned int)(*((_DWORD *)Value + 1334) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1334) + 1, 3) )
    __debugbreak();
  v6 = *v5 + 1;
  *v5 = v6;
  if ( v6 >= 3 )
  {
    LODWORD(v21) = 3;
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v20, v21) )
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
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 81, NULL, 0);
  if ( !glassSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_glass.cpp", 72, ASSERT_TYPE_ASSERT, "(glassSurfIter)", (const char *)&queryFormat, "glassSurfIter") )
    __debugbreak();
  if ( !_RBP->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_glass.cpp", 73, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  if ( !_RBP->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_glass.cpp", 74, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBP->state;
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  if ( precompiledIndex == MTL_CONSTANT_LAYOUT_GLASS )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups [rsp+98h+var_38], xmm0
    }
    R_DrawGlassSurf_Internal_31_(glassSurfIter, &v22);
  }
  else
  {
    name = technique->name;
    v16 = state->material->name;
    ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
    R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "GLASS", v16, name);
    if ( glassSurfIter->current > glassSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", glassSurfIter->current, glassSurfIter->end) )
      __debugbreak();
    if ( glassSurfIter->current == glassSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 58, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
      __debugbreak();
    GfxGlassSurfIter::GetDrawGroupSetup(glassSurfIter);
    for ( ++glassSurfIter->current; !GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone(glassSurfIter); ++glassSurfIter->current )
    {
      v18 = *(_WORD *)glassSurfIter->current;
      if ( (unsigned int)v18 >= rgp.materialCount )
      {
        LODWORD(v21) = rgp.materialCount;
        LODWORD(v20) = glassSurfIter->current->materialSortedIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
        if ( (unsigned int)v18 >= rgp.materialCount )
        {
          LODWORD(v21) = rgp.materialCount;
          LODWORD(v20) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
      }
      if ( ((unsigned int)v18 | (((LODWORD(DB_GetMaterialAtIndex(rgp.sortedMaterials[v18])->drawSurf.packed.p1) >> 22) & 1 | 0x1C) << 17)) != v23 )
        break;
    }
  }
  Profile_EndInternal(NULL);
}

