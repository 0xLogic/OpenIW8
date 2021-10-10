/*
==============
R_DrawSuperTerrainSurf
==============
*/

void __fastcall R_DrawSuperTerrainSurf(GfxStDrawSurfIter *superTerrainSurfIter, GfxCmdBufContext *context)
{
  ?R_DrawSuperTerrainSurf@@YAXPEIAVGfxStDrawSurfIter@@UGfxCmdBufContext@@@Z(superTerrainSurfIter, context);
}

/*
==============
R_DrawSuperTerrainSurf
==============
*/
void R_DrawSuperTerrainSurf(GfxStDrawSurfIter *superTerrainSurfIter, GfxCmdBufContext *context)
{
  char *Value; 
  unsigned int *v5; 
  unsigned int v6; 
  _QWORD *v7; 
  char *v8; 
  int *v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  const MaterialTechnique *technique; 
  MaterialConstantLayout precompiledIndex; 
  const char *name; 
  const char *v17; 
  const char *ConstantLayoutName; 
  GfxDrawGroupSetup v19; 
  __int64 v20; 
  __int64 v21; 
  GfxCmdBufContext v22[2]; 

  Value = (char *)Sys_GetValue(0);
  v5 = (unsigned int *)(Value + 5416);
  if ( (unsigned int)(*((_DWORD *)Value + 1354) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1354) + 1, 3) )
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
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 83, NULL, 0);
  if ( !superTerrainSurfIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_superterrain.cpp", 244, ASSERT_TYPE_ASSERT, "(superTerrainSurfIter)", (const char *)&queryFormat, "superTerrainSurfIter") )
    __debugbreak();
  if ( !context->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_superterrain.cpp", 245, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  source = context->source;
  if ( !context->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_superterrain.cpp", 246, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = context->state;
  R_ST_SetBindlessDescriptorTable(state, source->input.data);
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_48_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_49_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_50_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_51_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_52_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_53_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_54_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_55_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_56_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_57_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_58_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_59_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_60_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_61_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_62_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_63_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_64_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_65_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_66_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_67_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_68_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_69_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_70_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_71_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_72_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_73_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_74_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_75_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_76_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_77_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_78_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP_TESS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_79_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_3D_VERT_POS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_80_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_3D_VERT_POS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_81_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_3D_VERT_POS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_82_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_3D_VERT_POS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_83_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_3D_VERT_POS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_84_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_3D_VERT_POS:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_85_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_86_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_87_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_88_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_89_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_90_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_91_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_92_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_93_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_94_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_95_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_96_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_97_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_98_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_99_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_100_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_101_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_102_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_103_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_104_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_105_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_106_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_107_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_108_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_109_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_110_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_111_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_112_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_113_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_114_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_115_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_116_(superTerrainSurfIter, v22);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      v22[0] = *context;
      R_DrawSuperTerrainSurf_Internal_117_(superTerrainSurfIter, v22);
      break;
    default:
      name = technique->name;
      v17 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "SUPERTERRAIN", v17, name);
      if ( superTerrainSurfIter->current > superTerrainSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", superTerrainSurfIter->current, superTerrainSurfIter->end) )
        __debugbreak();
      if ( superTerrainSurfIter->current == superTerrainSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurfiter.h", 51, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
        __debugbreak();
      v19.fields = superTerrainSurfIter->current->drawGroup.fields;
      for ( ++superTerrainSurfIter->current; !GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone(superTerrainSurfIter); ++superTerrainSurfIter->current )
      {
        if ( superTerrainSurfIter->current->drawGroup.packed != v19.packed )
          break;
      }
      break;
  }
  Profile_EndInternal(NULL);
}

