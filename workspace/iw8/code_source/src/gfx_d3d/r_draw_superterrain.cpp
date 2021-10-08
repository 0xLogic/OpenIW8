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
  const char *v87; 
  const char *ConstantLayoutName; 
  GfxDrawGroupSetup v89; 
  __int64 v90; 
  __int64 v91; 
  GfxCmdBufContext v92[2]; 

  _RBX = context;
  Value = (char *)Sys_GetValue(0);
  v5 = (unsigned int *)(Value + 5416);
  if ( (unsigned int)(*((_DWORD *)Value + 1354) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1354) + 1, 3) )
    __debugbreak();
  v6 = *v5 + 1;
  *v5 = v6;
  if ( v6 >= 3 )
  {
    LODWORD(v91) = 3;
    LODWORD(v90) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v90, v91) )
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
  if ( !_RBX->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_superterrain.cpp", 245, ASSERT_TYPE_ASSERT, "(context.state)", (const char *)&queryFormat, "context.state") )
    __debugbreak();
  source = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_superterrain.cpp", 246, ASSERT_TYPE_ASSERT, "(context.source)", (const char *)&queryFormat, "context.source") )
    __debugbreak();
  state = _RBX->state;
  R_ST_SetBindlessDescriptorTable(state, source->input.data);
  technique = state->technique;
  precompiledIndex = technique->precompiledIndex;
  switch ( precompiledIndex )
  {
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 48
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_48_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 49
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_49_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 50
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_50_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 51
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_51_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 52
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_52_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 53
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_53_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 54
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_54_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 55
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_55_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 56
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_56_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 57
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_57_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 58
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_58_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 59
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_59_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 60
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_60_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 61
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_61_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 62
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_62_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 63
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_63_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 64
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_64_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 65
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_65_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 66
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_66_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 67
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_67_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 68
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_68_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 69
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_69_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 70
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_70_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 71
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_71_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 72
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_72_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 73
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_73_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 74
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_74_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 75
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_75_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 76
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_76_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 77
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_77_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 78
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_78_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP_TESS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 79
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_79_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_3D_VERT_POS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 80
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_80_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_3D_VERT_POS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 81
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_81_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_3D_VERT_POS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 82
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_82_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_3D_VERT_POS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 83
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_83_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_3D_VERT_POS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 84
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_84_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_3D_VERT_POS:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 85
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_85_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 86
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_86_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 87
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_87_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 88
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_88_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 89
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_89_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 90
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_90_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 91
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_91_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 92
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_92_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 93
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_93_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 94
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_94_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 95
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_95_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 96
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_96_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 97
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_97_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 98
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_98_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 99
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_99_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 100
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_100_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 101
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_101_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 102
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_102_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 103
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_103_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 104
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_104_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 105
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_105_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 106
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_106_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 107
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_107_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 108
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_108_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 109
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_109_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 110
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_110_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 111
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_111_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 112
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_112_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_COMBINED_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 113
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_113_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 114
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_114_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 115
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_115_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 116
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_116_(superTerrainSurfIter, v92);
      break;
    case MTL_CONSTANT_LAYOUT_SUPERTERRAIN_GPUGEN_COMBINED_CUTOUT_LMAP_TESS_VERT_LAYER_MASK:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]; jumptable 000000014227D39E case 117
        vmovups [rbp+var_20], xmm0
      }
      R_DrawSuperTerrainSurf_Internal_117_(superTerrainSurfIter, v92);
      break;
    default:
      name = technique->name;
      v87 = state->material->name;
      ConstantLayoutName = R_GetConstantLayoutName(precompiledIndex);
      R_WarnOncePerFrame(R_WARN_INVALID_MTL_CONSTANT_LAYOUT, ConstantLayoutName, "SUPERTERRAIN", v87, name);
      if ( superTerrainSurfIter->current > superTerrainSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", superTerrainSurfIter->current, superTerrainSurfIter->end) )
        __debugbreak();
      if ( superTerrainSurfIter->current == superTerrainSurfIter->end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurfiter.h", 51, ASSERT_TYPE_ASSERT, "(!IsDone())", (const char *)&queryFormat, "!IsDone()") )
        __debugbreak();
      v89.fields = superTerrainSurfIter->current->drawGroup.fields;
      for ( ++superTerrainSurfIter->current; !GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone(superTerrainSurfIter); ++superTerrainSurfIter->current )
      {
        if ( superTerrainSurfIter->current->drawGroup.packed != v89.packed )
          break;
      }
      break;
  }
  Profile_EndInternal(NULL);
}

