/*
==============
CL_InputContext_FromName
==============
*/

InputContext __fastcall CL_InputContext_FromName(const char *name)
{
  return ?CL_InputContext_FromName@@YA?AW4InputContext@@PEBD@Z(name);
}

/*
==============
CL_InputContext_GetConflicting
==============
*/

int __fastcall CL_InputContext_GetConflicting(InputContext startContext, InputContext (*conflictingContexts)[15])
{
  return ?CL_InputContext_GetConflicting@@YAHW4InputContext@@AEAY0P@W41@@Z(startContext, conflictingContexts);
}

/*
==============
CL_InputContext_ToName
==============
*/

const char *__fastcall CL_InputContext_ToName(InputContext inputContext)
{
  return ?CL_InputContext_ToName@@YAPEBDW4InputContext@@@Z(inputContext);
}

/*
==============
CL_InputContext_GetInherited
==============
*/

int __fastcall CL_InputContext_GetInherited(InputContext leafContext, InputContext (*inheritedContexts)[15])
{
  return ?CL_InputContext_GetInherited@@YAHW4InputContext@@AEAY0P@W41@@Z(leafContext, inheritedContexts);
}

/*
==============
CL_InputContext_FromName
==============
*/
char CL_InputContext_FromName(const char *name)
{
  int i; 
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  for ( i = 0; i < 15; ++i )
  {
    v3 = 0x7FFFFFFFi64;
    v4 = s_names[i];
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v5 = (const char *)(name - v4);
    while ( 1 )
    {
      v6 = (unsigned __int8)v4[(_QWORD)v5];
      v7 = v3;
      v8 = *(unsigned __int8 *)v4++;
      --v3;
      if ( !v7 )
        return i;
      if ( v6 != v8 )
      {
        v9 = v6 + 32;
        if ( (unsigned int)(v6 - 65) > 0x19 )
          v9 = v6;
        v6 = v9;
        v10 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v10 = v8;
        if ( v6 != v10 )
          break;
      }
      if ( !v6 )
        return i;
    }
  }
  return 15;
}

/*
==============
CL_InputContext_GetConflicting
==============
*/
__int64 CL_InputContext_GetConflicting(InputContext startContext, InputContext (*conflictingContexts)[15])
{
  __int64 v2; 
  InputContextFlagsArray *v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 

  v2 = (unsigned __int8)startContext;
  v3 = &INPUT_CONTEXT_FLAGS;
  v4 = 0;
  v5 = 0;
  v6 = INPUT_CONTEXT_FLAGS.data[v2];
  do
  {
    if ( (v6 & v3->data[0]) != 0 )
    {
      ++v4;
      (*conflictingContexts)[0] = v5;
      conflictingContexts = (InputContext (*)[15])((char *)conflictingContexts + 1);
    }
    ++v5;
    v3 = (InputContextFlagsArray *)((char *)v3 + 4);
  }
  while ( v5 < 15 );
  return v4;
}

/*
==============
CL_InputContext_GetInherited
==============
*/
__int64 CL_InputContext_GetInherited(InputContext leafContext, InputContext (*inheritedContexts)[15])
{
  unsigned int v2; 
  InputContext v4; 
  __int64 v5; 
  char ActiveGameMode; 
  int v7; 
  int v8; 

  v2 = 0;
  v4 = leafContext;
  if ( leafContext != (STRUCT_POINTER|FLOAT_POINTER) )
  {
    v5 = 0i64;
    while ( 2 )
    {
      (*inheritedContexts)[v5] = v4;
      ++v2;
      if ( ++v5 >= 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_context.cpp", 182, ASSERT_TYPE_ASSERT, "(inheritedContextCount < INPUT_CONTEXT_COUNT)", (const char *)&queryFormat, "inheritedContextCount < INPUT_CONTEXT_COUNT") )
        __debugbreak();
      switch ( v4 )
      {
        case INVALID:
        case BOOL_VALUE:
          v4 = BYTE_VALUE;
          continue;
        case BYTE_VALUE:
          ActiveGameMode = Com_GameMode_GetActiveGameMode();
          if ( ActiveGameMode )
          {
            switch ( ActiveGameMode )
            {
              case 1:
                v4 = FLOAT_VALUE;
                break;
              case 2:
                if ( CG_GameInterface_PlayingBR() )
                {
                  v4 = VEC3_POINTER|FLOAT_POINTER;
                  break;
                }
LABEL_19:
                v4 = FLOAT_POINTER;
                break;
              case 3:
                goto LABEL_19;
              default:
                v7 = 141;
                if ( ActiveGameMode == 4 )
                  v7 = 137;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_context.cpp", v7, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
                  __debugbreak();
                v4 = STRUCT_POINTER|FLOAT_POINTER;
                break;
            }
          }
          else
          {
            v4 = VEC3_VALUE;
          }
          if ( v4 == (STRUCT_POINTER|FLOAT_POINTER) )
            return v2;
          continue;
        case BYTE_POINTER:
        case INT_VALUE:
        case STRUCT_POINTER|INT_VALUE:
          v4 = BOOL_VALUE;
          continue;
        case FLOAT_VALUE:
        case FLOAT_POINTER:
          v4 = VEC3_VALUE;
          continue;
        case VEC3_VALUE:
        case VEC3_POINTER:
          v4 = VEC3_POINTER|BYTE_VALUE;
          continue;
        case STRUCT_POINTER:
        case VEC3_POINTER|BYTE_VALUE:
          return v2;
        case STRUCT_POINTER|BYTE_VALUE:
          v4 = STRUCT_POINTER;
          continue;
        case VEC3_POINTER|INT_VALUE:
          v4 = STRUCT_POINTER|BYTE_VALUE;
          continue;
        case VEC3_POINTER|FLOAT_POINTER:
          v4 = FLOAT_POINTER;
          continue;
        case STRUCT_POINTER|FLOAT_POINTER:
          v8 = 167;
          goto LABEL_32;
        default:
          v8 = 171;
LABEL_32:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_context.cpp", v8, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            __debugbreak();
          return v2;
      }
    }
  }
  return v2;
}

/*
==============
CL_InputContext_ToName
==============
*/
const char *CL_InputContext_ToName(InputContext inputContext)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)inputContext >= (STRUCT_POINTER|FLOAT_POINTER) )
  {
    v4 = 15;
    v3 = (unsigned __int8)inputContext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_context.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( inputContext ) < (unsigned)( INPUT_CONTEXT_COUNT )", "inputContext doesn't index INPUT_CONTEXT_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_names[(unsigned __int8)inputContext];
}

