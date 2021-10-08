/*
==============
Scr_GetActorField
==============
*/

void __fastcall Scr_GetActorField(scrContext_t *scrContext, actor_s *actor, int offset)
{
  ?Scr_GetActorField@@YAXAEAUscrContext_t@@PEAUactor_s@@H@Z(scrContext, actor, offset);
}

/*
==============
GScr_AddFieldsForActor
==============
*/

void __fastcall GScr_AddFieldsForActor(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForActor@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Cmd_AI_f
==============
*/

void Cmd_AI_f(void)
{
  ?Cmd_AI_f@@YAXXZ();
}

/*
==============
Scr_SetActorField
==============
*/

void __fastcall Scr_SetActorField(scrContext_t *scrContext, actor_s *actor, int offset)
{
  ?Scr_SetActorField@@YAXAEAUscrContext_t@@PEAUactor_s@@H@Z(scrContext, actor, offset);
}

/*
==============
BaseForFields
==============
*/
ai_scripted_t *BaseForFields(ai_scripted_t *actor, const ai_scripted_fields_s *fields)
{
  if ( fields == ai_scripted_fields )
    return actor;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3965, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BaseForFields: invalid fields[]") )
    __debugbreak();
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E14E48, 779i64);
  return 0i64;
}

/*
==============
Cmd_AI_Dispatch
==============
*/
void Cmd_AI_Dispatch(int argc, ai_scripted_t *pSelf, const ai_scripted_fields_s *fields, const ai_scripted_fields_s *pField)
{
  const char *v8; 
  const char *v9; 
  scr_string_t targetname; 
  const char *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 

  if ( argc < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4162, ASSERT_TYPE_ASSERT, "(argc >= 3)", (const char *)&queryFormat, "argc >= 3") )
    __debugbreak();
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4163, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4164, ASSERT_TYPE_ASSERT, "(pSelf->ent)", (const char *)&queryFormat, "pSelf->ent") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4166, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField == &aifield_list )
  {
    if ( fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4170, ASSERT_TYPE_ASSERT, "(fields == 0)", (const char *)&queryFormat, "fields == NULL") )
      __debugbreak();
    if ( !pSelf->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3811, ASSERT_TYPE_ASSERT, "(actor->ent)", (const char *)&queryFormat, "actor->ent") )
      __debugbreak();
    if ( !pSelf->ent->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3812, ASSERT_TYPE_ASSERT, "(actor->ent->classname != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "actor->ent->classname != NULL_SCR_STRING") )
      __debugbreak();
    if ( !pSelf->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3813, ASSERT_TYPE_ASSERT, "(actor->sentient)", (const char *)&queryFormat, "actor->sentient") )
      __debugbreak();
    v8 = SL_ConvertToString(pSelf->ent->classname);
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    v9 = GUtils::ms_gUtils->GetDebugTeamName(GUtils::ms_gUtils, pSelf->ent);
    Com_Printf(0, "ent %i (%-7s) %-24s", (unsigned int)pSelf->ent->s.number, v9, v8);
    targetname = pSelf->ent->targetname;
    if ( targetname )
    {
      v11 = SL_ConvertToString(targetname);
      Com_Printf(0, " targetname %s", v11);
    }
    Com_Printf(0, "\n");
  }
  else if ( pField == &aifield_delete )
  {
    if ( fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4175, ASSERT_TYPE_ASSERT, "(fields == 0)", (const char *)&queryFormat, "fields == NULL") )
      __debugbreak();
    if ( !pSelf->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3830, ASSERT_TYPE_ASSERT, "(actor->ent)", (const char *)&queryFormat, "actor->ent") )
      __debugbreak();
    G_Utils_FreeEntityDelay(pSelf->ent);
  }
  else if ( argc == 3 )
  {
    if ( !fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4180, ASSERT_TYPE_ASSERT, "(fields != 0)", (const char *)&queryFormat, "fields != NULL") )
      __debugbreak();
    v12 = (unsigned __int8 *)BaseForFields(pSelf, fields);
    Cmd_AI_DisplayValue(pSelf, v12, pField);
  }
  else
  {
    if ( !fields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4185, ASSERT_TYPE_ASSERT, "(fields != 0)", (const char *)&queryFormat, "fields != NULL") )
      __debugbreak();
    v13 = (unsigned __int8 *)BaseForFields(pSelf, fields);
    Cmd_AI_SetValue(pSelf, argc, v13, pField);
  }
}

/*
==============
Cmd_AI_DisplayValue
==============
*/
void Cmd_AI_DisplayValue(ai_scripted_t *pSelf, unsigned __int8 *pBase, const ai_scripted_fields_s *pField)
{
  unsigned int number; 
  int v10; 
  const char *v11; 
  int v12; 
  const char *v13; 
  int v14; 
  const char *v15; 
  const char *v19; 
  scr_string_t v20; 
  const char *v21; 
  scr_string_t v22; 
  const char *v30; 
  __int64 v33; 
  signed __int64 v34; 
  scr_string_t targetname; 
  const char *v36; 
  const char *v37; 
  __int64 ofs; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  scr_string_t v43; 
  const char *v44; 
  const char *v45; 
  __int16 **v46; 
  unsigned __int64 v47; 
  const char *v48; 
  const pathnode_t *v49; 
  int v50; 
  const char *v51; 
  const char *v52; 
  unsigned int v53; 
  const char *v54; 
  const char *v55; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 v60; 
  double v61; 
  __int64 v62; 
  double v63; 

  _RBX = pBase;
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3847, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  number = pSelf->ent->s.number;
  switch ( pField->type )
  {
    case F_INT:
      v10 = *(_DWORD *)&_RBX[pField->ofs];
      v11 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v10;
      Com_Printf(0, "ent %i: %s = %i\n", number, v11, fmt);
      break;
    case F_SHORT:
      v12 = *(__int16 *)&_RBX[pField->ofs];
      v13 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v12;
      Com_Printf(0, "ent %i: %s = %i\n", number, v13, fmt);
      break;
    case F_BYTE:
      v14 = _RBX[pField->ofs];
      v15 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v14;
      Com_Printf(0, "ent %i: %s = %i\n", number, v15, fmt);
      break;
    case F_FLOAT:
      _RAX = pField->ofs;
      __asm
      {
        vmovss  xmm6, dword ptr [rax+rbx]
        vcvtss2sd xmm6, xmm6, xmm6
      }
      v19 = SL_ConvertToString(*pField->name);
      __asm { vmovsd  [rsp+98h+fmt], xmm6 }
      Com_Printf(0, "ent %i: %s = %g\n", number, v19, *(double *)&fmta);
      break;
    case F_STRING:
      v20 = *(_DWORD *)&_RBX[pField->ofs];
      if ( v20 )
        v21 = SL_ConvertToString(v20);
      else
        v21 = "<undefined>";
      v22 = *pField->name;
      goto LABEL_62;
    case F_VECTOR:
      _RAX = pField->ofs;
      __asm
      {
        vmovaps [rsp+98h+var_38], xmm7
        vmovaps [rsp+98h+var_48], xmm8
        vmovss  xmm6, dword ptr [rax+rbx+8]
        vmovss  xmm7, dword ptr [rax+rbx+4]
        vmovss  xmm8, dword ptr [rax+rbx]
        vcvtss2sd xmm6, xmm6, xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vcvtss2sd xmm8, xmm8, xmm8
      }
      v30 = SL_ConvertToString(*pField->name);
      __asm
      {
        vmovsd  [rsp+98h+var_68], xmm6
        vmovsd  [rsp+98h+var_70], xmm7
        vmovsd  [rsp+98h+fmt], xmm8
      }
      Com_Printf(0, "ent %i: %s = %g %g %g\n", number, v30, *(double *)&fmtb, v61, v63);
      __asm
      {
        vmovaps xmm8, [rsp+98h+var_48]
        vmovaps xmm7, [rsp+98h+var_38]
      }
      break;
    case F_ENTITY:
      v33 = *(_QWORD *)&_RBX[pField->ofs];
      if ( !v33 )
        goto LABEL_57;
      v34 = (signed __int64)(v33 - (unsigned __int64)level.gentities) / 1456;
      if ( (unsigned __int64)(v34 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v34, "signed", (signed __int64)(v33 - (unsigned __int64)level.gentities) / 1456) )
        __debugbreak();
      if ( (unsigned int)v34 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3886, ASSERT_TYPE_ASSERT, "(i >= 0 && i < ( 2048 ))", (const char *)&queryFormat, "i >= 0 && i < MAX_GENTITIES") )
        __debugbreak();
      targetname = level.gentities[(int)v34].targetname;
      if ( targetname )
        v36 = SL_ConvertToString(targetname);
      else
        v36 = "<undefined>";
      v37 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v34;
      Com_Printf(0, "ent %i: %s = %i (targetname %s)\n", number, v37, fmt, v36);
      break;
    case F_ENTHANDLE:
      if ( !EntHandle::isDefined((EntHandle *)&_RBX[pField->ofs]) )
        goto LABEL_57;
      ofs = pField->ofs;
      v39 = *(unsigned __int16 *)&_RBX[ofs];
      if ( (unsigned int)(v39 - 1) >= 0x7FF )
      {
        LODWORD(v60) = v39 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v60, 2047) )
          __debugbreak();
      }
      v40 = *(unsigned __int16 *)&_RBX[ofs];
      if ( (unsigned int)(v40 - 1) >= 0x800 )
      {
        LODWORD(v62) = 2048;
        LODWORD(v60) = v40 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v60, v62) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v41 = v40 - 1;
      if ( g_entities[v41].r.isInUse != g_entityIsInUse[v41] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v41] )
      {
        LODWORD(v62) = *(unsigned __int16 *)&_RBX[ofs] - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v62) )
          __debugbreak();
      }
      v42 = *(__int16 *)&_RBX[ofs];
      LODWORD(ofs) = v42 - 1;
      if ( (unsigned int)(v42 - 1) > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3900, ASSERT_TYPE_ASSERT, "(i >= 0 && i < ( 2048 ))", (const char *)&queryFormat, "i >= 0 && i < MAX_GENTITIES") )
        __debugbreak();
      v43 = level.gentities[v42 - 1].targetname;
      goto LABEL_45;
    case F_SENTIENT:
      v46 = *(__int16 ***)&_RBX[pField->ofs];
      if ( !v46 )
        goto LABEL_57;
      ofs = **v46;
      goto LABEL_51;
    case F_SENTIENTHANDLE:
      if ( !SentientHandle::isDefined((SentientHandle *)&_RBX[pField->ofs]) )
        goto LABEL_57;
      ofs = SentientHandle::sentient((SentientHandle *)&_RBX[pField->ofs])->ent->s.number;
LABEL_51:
      v43 = level.gentities[ofs].targetname;
LABEL_45:
      if ( v43 )
        v44 = SL_ConvertToString(v43);
      else
        v44 = "<undefined>";
      v45 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = ofs;
      Com_Printf(0, "ent %i: %s = %i (targetname %s)\n", number, v45, fmt, v44);
      break;
    case F_CLIENT:
      v47 = (__int64)((unsigned __int128)((__int64)(*(_QWORD *)&_RBX[pField->ofs] - (unsigned __int64)level.clients) * (__int128)0x103BDCBDFC935F7i64) >> 64) >> 8;
      v48 = SL_ConvertToString(*pField->name);
      Com_Printf(0, "ent %i: %s = client %zi\n", number, v48, (v47 >> 63) + v47);
      break;
    case F_PATHNODE:
      v49 = *(const pathnode_t **)&_RBX[pField->ofs];
      if ( v49 )
      {
        v50 = Path_ConvertNodeToIndex(v49);
        v51 = SL_ConvertToString(*pField->name);
        LODWORD(fmt) = v50;
        Com_Printf(0, "ent %i: %s = node %i\n", number, v51, fmt);
      }
      else
      {
LABEL_57:
        v52 = SL_ConvertToString(*pField->name);
        Com_Printf(0, "ent %i: %s = (null)\n", number, v52);
      }
      break;
    case F_MODEL:
      v53 = _RBX[pField->ofs];
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v21 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v53);
      v22 = *pField->name;
LABEL_62:
      v54 = SL_ConvertToString(v22);
      Com_Printf(0, "ent %i: %s = %s\n", number, v54, v21);
      break;
    default:
      v55 = SL_ConvertToString(*pField->name);
      LODWORD(v60) = pField->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3949, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cmd_AI_f: unhandled field type %i for %s\n", v60, v55) )
        __debugbreak();
      break;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
Cmd_AI_PrintUsage
==============
*/
void Cmd_AI_PrintUsage()
{
  const ai_scripted_fields_s *v0; 
  __int64 v1; 
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  __int64 v5; 

  Com_Printf(0, "^5USAGE: ai (!)target field (value), or ai (!) target [list/delete]\n");
  Com_Printf(0, "^5target can be an entity number, a targetname, an entity classname,\n    'all', 'axis', 'allies', or 'neutral'\n");
  Com_Printf(0, "^5if ! immediately precedes target, it uses AI that don't match target\n");
  Com_Printf(0, "^5field can be one of:\n");
  if ( ai_scripted_fields[0].name )
  {
    v0 = ai_scripted_fields;
    v1 = 0i64;
    v2 = 0i64;
    do
    {
      switch ( ai_scripted_fields[v2].type )
      {
        case F_INT:
          v3 = "int";
          goto LABEL_14;
        case F_SHORT:
          v3 = "short";
          goto LABEL_14;
        case F_BYTE:
          v3 = "byte";
          goto LABEL_14;
        case F_FLOAT:
          v3 = "float";
          goto LABEL_14;
        case F_STRING:
        case F_MODEL:
          v3 = "string";
          goto LABEL_14;
        case F_VECTOR:
          v3 = "vector";
          goto LABEL_14;
        case F_ENTITY:
        case F_ENTHANDLE:
          v3 = "entnum";
          goto LABEL_14;
        case F_SENTIENT:
        case F_SENTIENTHANDLE:
          v3 = "sentient";
          goto LABEL_14;
        case F_CLIENT:
          v3 = "clientnum";
          goto LABEL_14;
        case F_PATHNODE:
          v3 = "pathnode";
LABEL_14:
          v4 = SL_ConvertToString(*v0->name);
          Com_Printf(0, "^5  %-20s: %s\n", v4, v3);
          break;
        default:
          LODWORD(v5) = ai_scripted_fields[v2].type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4021, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cmd_AI_f: unhandled field type %i\n", v5) )
            __debugbreak();
          break;
      }
      v2 = ++v1;
      v0 = &ai_scripted_fields[v1];
    }
    while ( v0->name );
  }
}

/*
==============
Cmd_AI_SetValue
==============
*/
void Cmd_AI_SetValue(ai_scripted_t *pSelf, int argc, unsigned __int8 *pBase, const ai_scripted_fields_s *pField)
{
  void (__fastcall *setter)(scrContext_t *, ai_scripted_t *, const ai_scripted_fields_s *); 
  const char *v11; 
  int v15; 
  __int64 v16; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  char buffer[256]; 

  _R14 = pBase;
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4056, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  setter = pField->setter;
  if ( setter == AIScriptedScr_ReadOnly )
  {
    v11 = SL_ConvertToString(*pField->name);
    Com_PrintError(0, "%s is read-only\n", v11);
  }
  else if ( setter == AIScriptedScr_SetGoalRadius )
  {
    if ( argc == 4 )
    {
      SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
      *(double *)&_XMM0 = atof(buffer);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; radius }
      AICommonInterface::SetGoalRadius(&pSelf->scriptGoal, *(float *)&_XMM1);
    }
    else
    {
LABEL_19:
      Cmd_AI_PrintUsage();
    }
  }
  else
  {
    switch ( pField->type )
    {
      case F_INT:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        *(_DWORD *)&_R14[pField->ofs] = atoi(buffer);
        break;
      case F_SHORT:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        *(_WORD *)&_R14[pField->ofs] = atoi(buffer);
        break;
      case F_BYTE:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        _R14[pField->ofs] = atoi(buffer);
        break;
      case F_FLOAT:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        *(double *)&_XMM0 = atof(buffer);
        _RAX = pField->ofs;
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [r14+rax], xmm1
        }
        break;
      case F_STRING:
      case F_ENTITY:
      case F_ENTHANDLE:
      case F_SENTIENT:
      case F_SENTIENTHANDLE:
      case F_CLIENT:
      case F_PATHNODE:
      case F_MODEL:
        Com_Printf(0, "cannot set from console\n");
        break;
      case F_VECTOR:
        if ( argc != 6 )
          goto LABEL_19;
        v15 = 0;
        v16 = 0i64;
        __asm { vmovaps [rsp+198h+var_38], xmm6 }
        do
        {
          SV_Cmd_ArgvBuffer(v15 + 3, buffer, 0x100ui64);
          *(double *)&_XMM0 = atof(buffer);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          if ( (unsigned int)v15 >= 3 )
          {
            LODWORD(v22) = 3;
            LODWORD(v20) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v22) )
              __debugbreak();
            LODWORD(v23) = 3;
            LODWORD(v21) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v23) )
              __debugbreak();
          }
          ++v15;
          _RCX = v16 + pField->ofs;
          v16 += 4i64;
          __asm { vmovss  dword ptr [rcx+r14], xmm6 }
        }
        while ( v15 < 3 );
        __asm { vmovaps xmm6, [rsp+198h+var_38] }
        break;
      default:
        LODWORD(v20) = pField->type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4149, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cmd_AI_f: unhandled field type %i\n", v20) )
          __debugbreak();
        break;
    }
  }
}

/*
==============
Cmd_AI_Team
==============
*/
void Cmd_AI_Team(int argc, const ai_scripted_fields_s *fields, const ai_scripted_fields_s *pField, bitarray<224> *iTeamFlags, int bInvertSelection)
{
  actor_s *i; 

  if ( bInvertSelection )
  {
    iTeamFlags->array[0] = ~iTeamFlags->array[0];
    iTeamFlags->array[1] = ~iTeamFlags->array[1];
    iTeamFlags->array[2] = ~iTeamFlags->array[2];
    iTeamFlags->array[3] = ~iTeamFlags->array[3];
    iTeamFlags->array[4] = ~iTeamFlags->array[4];
    iTeamFlags->array[5] = ~iTeamFlags->array[5];
    iTeamFlags->array[6] = ~iTeamFlags->array[6];
  }
  for ( i = AIActorInterface::FirstActor(iTeamFlags); i; i = AIActorInterface::NextActor(i, iTeamFlags) )
    Cmd_AI_Dispatch(argc, i, fields, pField);
}

/*
==============
ActorScr_SetSpecies
==============
*/
void ActorScr_SetSpecies(scrContext_t *scrContext, actor_s *pSelf, const actor_fields_s *pField)
{
  scr_string_t ConstString; 
  int v6; 
  const char *v7; 
  const char *v8; 
  AISpecies species; 
  gentity_s *ent; 
  AINavLayer LayerForSpecies; 
  unsigned int LinkUsageForSpecies; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 473, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  ConstString = Scr_GetConstString(scrContext, 0);
  v6 = 0;
  while ( ConstString != *g_AISpeciesNames[v6] )
  {
    if ( ++v6 >= 2 )
    {
      v7 = SL_ConvertToString(ConstString);
      v8 = j_va("unknown type '%s', should be human, dog, alien\n", v7);
      Scr_Error(COM_ERR_3434, scrContext, v8);
      return;
    }
  }
  species = pSelf->species;
  pSelf->species = v6;
  if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v6, "signed", v6) )
    __debugbreak();
  pSelf->ent->s.lerp.u.actor.species = v6;
  ent = pSelf->ent;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, ent, 1);
  AIActorInterface::Species_Free(species, pSelf->pSpeciesData);
  pSelf->pSpeciesData = AIActorInterface::Species_Alloc(pSelf->species);
  LayerForSpecies = Nav_GetLayerForSpecies(v6);
  Nav_SetLayer(pSelf->pNavigator, LayerForSpecies);
  LinkUsageForSpecies = Nav_GetLinkUsageForSpecies(v6);
  Nav_SetLinkUsageFlags(pSelf->pNavigator, LinkUsageForSpecies);
}

/*
==============
ActorScr_GetSpecies
==============
*/
void ActorScr_GetSpecies(scrContext_t *scrContext, actor_s *pSelf, const actor_fields_s *pField)
{
  __int64 v5; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 509, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->species >= (unsigned int)MAX_AI_SPECIES )
  {
    LODWORD(v5) = pSelf->species;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 510, ASSERT_TYPE_ASSERT, "(unsigned)( pSelf->species ) < (unsigned)( MAX_AI_SPECIES )", "pSelf->species doesn't index MAX_AI_SPECIES\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  Scr_AddConstString(scrContext, *g_AISpeciesNames[pSelf->species]);
}

/*
==============
ActorScr_GetScript
==============
*/
void ActorScr_GetScript(scrContext_t *scrContext, actor_s *pSelf, const actor_fields_s *pField)
{
  __int64 v6; 
  int scriptable_used; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 529, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  v6 = *(__int64 *)((char *)&pSelf->ent + pField->ofs);
  if ( v6 )
  {
    scriptable_used = *(_DWORD *)(v6 + 8);
  }
  else
  {
    if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    scriptable_used = GameScriptData::ms_gScriptData[1].scriptable_used;
  }
  Scr_AddConstString(scrContext, (scr_string_t)scriptable_used);
}

/*
==============
ActorScr_ReadOnly
==============
*/
void ActorScr_ReadOnly(scrContext_t *scrContext, actor_s *pSelf, const actor_fields_s *pField)
{
  const char *v5; 
  const char *v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 555, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 558, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  v5 = SL_ConvertToString(*pField->name);
  v6 = j_va("actor field %s is read-only", v5);
  Scr_Error(COM_ERR_3435, scrContext, v6);
}

/*
==============
ActorScr_SetSpace
==============
*/
void ActorScr_SetSpace(scrContext_t *scrContext, actor_s *self, const actor_fields_s *field)
{
  bool v6; 
  gentity_s *ent; 
  AINavigator *v12; 
  AINavigator *pNavigator; 
  AINavLayer m_Layer; 

  _RDI = self;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 613, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  _RBX = _RDI->ent;
  v6 = Scr_GetInt(scrContext, 0) != 0;
  if ( v6 != _RDI->Physics.bSpace )
  {
    ent = _RDI->ent;
    if ( v6 )
    {
      _RDI->Physics.bSpace = 1;
      ent->s.un.vehicleXModel |= 8u;
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+8C8h]
        vsubss  xmm0, xmm1, cs:__real@42240000
        vmovss  dword ptr [rdi+8BCh], xmm0
        vmovss  dword ptr [rdi+8C8h], xmm1
        vmovss  xmm1, dword ptr [rbx+114h]
        vsubss  xmm0, xmm1, cs:__real@42240000
        vmovss  dword ptr [rbx+108h], xmm0
        vmovss  dword ptr [rbx+114h], xmm1
      }
      _RBX->s.lerp.u.actor.flags |= 1u;
      if ( Nav_AnyVolumesLoaded() )
      {
        v12 = Nav_Create3DNavigator(_RDI->ent, _RDI->pNavigator->m_Layer, 1);
        Nav_FreeNavigator(_RDI->pNavigator);
        _RDI->pNavigator = v12;
        _RDI->avoidance.avoidanceEnabled = 0;
      }
    }
    else
    {
      _RDI->Physics.bSpace = 0;
      ent->s.un.vehicleXModel &= ~8u;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
        vmovups xmmword ptr [rdi+8B4h], xmm0
        vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
        vmovsd  qword ptr [rdi+8C4h], xmm1
        vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
        vmovups xmmword ptr [rbx+100h], xmm0
        vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
      }
      _RBX->s.lerp.u.actor.flags &= ~1u;
      __asm { vmovsd  qword ptr [rbx+110h], xmm1 }
      if ( Nav_AnyVolumesLoaded() )
      {
        pNavigator = _RDI->pNavigator;
        m_Layer = pNavigator->m_Layer;
        Nav_FreeNavigator(pNavigator);
        _RDI->pNavigator = Nav_Create2DNavigator(_RDI->ent, m_Layer);
      }
      _RDI->avoidance.avoidanceEnabled = 1;
    }
  }
}

/*
==============
ActorScr_GetTime
==============
*/
void ActorScr_GetTime(scrContext_t *scrContext, actor_s *pSelf, const actor_fields_s *pField)
{
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 593, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 594, ASSERT_TYPE_ASSERT, "(pField->type == F_INT)", (const char *)&queryFormat, "pField->type == F_INT") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdi]
    vmulss  xmm1, xmm0, cs:__real@3a83126f; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
ActorScr_SetTime
==============
*/
void ActorScr_SetTime(scrContext_t *scrContext, actor_s *pSelf, const actor_fields_s *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 575, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 578, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  if ( pField->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 580, ASSERT_TYPE_ASSERT, "(pField->type == F_INT)", (const char *)&queryFormat, "pField->type == F_INT") )
    __debugbreak();
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm4, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm4, 1
    vcvttss2si ecx, xmm1
  }
  *(_DWORD *)((char *)&pSelf->ent + pField->ofs) = _ECX;
}

/*
==============
Cmd_AI_f
==============
*/
void Cmd_AI_f(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  const actor_fields_s *v9; 
  const actor_fields_s *v10; 
  char v11; 
  char *p_s0; 
  char v13; 
  __int64 v14; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  scr_string_t LowercaseString; 
  scr_string_t *name; 
  int v24; 
  __int64 v25; 
  scr_string_t v26; 
  scr_string_t *v27; 
  int v28; 
  __int64 v29; 
  scr_string_t v30; 
  scr_string_t *v31; 
  int v32; 
  __int64 v33; 
  actor_s *i; 
  actor_s *actor; 
  GUtils *Utils; 
  unsigned int v42; 
  unsigned __int64 v43; 
  __int64 v44; 
  actor_s *j; 
  scr_string_t to; 
  bitarray<224> iTeamFlags; 
  char buffer[256]; 
  char v52; 
  char s0; 

  v0 = SV_Cmd_Argc();
  if ( v0 < 3 )
  {
    Cmd_AI_PrintUsage_0();
    return;
  }
  SV_Cmd_ArgvBuffer(2, buffer, 0x100ui64);
  v1 = 0x7FFFFFFFi64;
  v2 = 0x7FFFFFFFi64;
  v3 = 0i64;
  while ( 1 )
  {
    v4 = (unsigned __int8)buffer[v3];
    v5 = v2;
    v6 = (unsigned __int8)aList[v3++];
    --v2;
    if ( !v5 )
    {
LABEL_12:
      v9 = &aifield_list_0;
LABEL_13:
      v10 = NULL;
      goto LABEL_14;
    }
    if ( v4 != v6 )
    {
      v7 = v4 + 32;
      if ( (unsigned int)(v4 - 65) > 0x19 )
        v7 = v4;
      v4 = v7;
      v8 = v6 + 32;
      if ( (unsigned int)(v6 - 65) > 0x19 )
        v8 = v6;
      if ( v4 != v8 )
        break;
    }
    if ( !v4 )
      goto LABEL_12;
  }
  v16 = 0i64;
  while ( 1 )
  {
    v17 = (unsigned __int8)buffer[v16];
    v18 = v1;
    v19 = (unsigned __int8)aDelete_2[v16++];
    --v1;
    if ( !v18 )
    {
LABEL_31:
      v9 = &aifield_delete_0;
      goto LABEL_13;
    }
    if ( v17 != v19 )
    {
      v20 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v20 = v17;
      v17 = v20;
      v21 = v19 + 32;
      if ( (unsigned int)(v19 - 65) > 0x19 )
        v21 = v19;
      if ( v17 != v21 )
        break;
    }
    if ( !v17 )
      goto LABEL_31;
  }
  v10 = aifields;
  LowercaseString = SL_FindLowercaseString(buffer);
  name = aifields[0].name;
  v24 = 0;
  if ( aifields[0].name )
  {
    v25 = 0i64;
    while ( LowercaseString != *name )
    {
      ++v25;
      ++v24;
      name = aifields[v25].name;
      if ( !name )
        goto LABEL_38;
    }
    v9 = &aifields[v24];
    if ( v9 )
    {
LABEL_14:
      SV_Cmd_ArgvBuffer(1, &v52, 0x100ui64);
      v11 = v52;
      p_s0 = &v52;
      v13 = v52;
      if ( v52 == 33 )
        v13 = s0;
      if ( v52 == 33 )
        p_s0 = &s0;
      if ( (unsigned __int8)(v13 - 48) <= 9u )
      {
        v14 = atoi(p_s0);
        if ( v11 == 33 )
        {
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            _RAX = Com_TeamsSP_GetAllTeamFlags();
          else
            _RAX = Com_TeamsMP_GetAllTeamFlags();
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+2B0h+iTeamFlags.array], xmm0
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovsd  qword ptr [rsp+2B0h+iTeamFlags.array+10h], xmm1
          }
          iTeamFlags.array[6] = _RAX->array[6];
          for ( i = AIActorInterface::FirstActor(&iTeamFlags); i; i = AIActorInterface::NextActor(i, &iTeamFlags) )
          {
            if ( i->ent->s.number != (_DWORD)v14 )
              Cmd_AI_Dispatch_0(v0, i, v10, v9);
          }
        }
        else if ( (unsigned int)v14 > 0x7FF )
        {
          Cmd_AI_PrintUsage_0();
          Com_PrintError(0, "%i is not a valid entity number\n", (unsigned int)v14);
        }
        else
        {
          actor = level.gentities[v14].actor;
          if ( actor )
          {
            Cmd_AI_Dispatch_0(v0, actor, v10, v9);
          }
          else
          {
            Cmd_AI_PrintUsage_0();
            Com_PrintError(0, "entity number %i is not an actor\n", (unsigned int)v14);
          }
        }
        return;
      }
      if ( I_stricmp(p_s0, "all") )
      {
        Utils = GUtils::GetUtils();
        v42 = Utils->GetTeamFromDebugString(Utils, p_s0);
        v43 = v42;
        if ( !v42 )
        {
          v44 = 404i64;
          if ( IsActorClassname(p_s0) )
            v44 = 380i64;
          to = SL_GetString(p_s0, 0);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            _RAX = Com_TeamsSP_GetAllTeamFlags();
          else
            _RAX = Com_TeamsMP_GetAllTeamFlags();
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+2B0h+iTeamFlags.array], xmm0
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovsd  qword ptr [rsp+2B0h+iTeamFlags.array+10h], xmm1
          }
          iTeamFlags.array[6] = _RAX->array[6];
          for ( j = AIActorInterface::FirstActor(&iTeamFlags); j; j = AIActorInterface::NextActor(j, &iTeamFlags) )
          {
            if ( (*(_DWORD *)((char *)&j->ent->s.number + v44) == to) == (v11 != 33) )
              Cmd_AI_Dispatch_0(v0, j, v10, v9);
          }
          Scr_SetString(&to, (scr_string_t)0);
          return;
        }
        memset(&iTeamFlags, 0, sizeof(iTeamFlags));
        if ( v42 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v42, 224) )
          __debugbreak();
        iTeamFlags.array[v43 >> 5] |= 0x80000000 >> (v43 & 0x1F);
      }
      else
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          _RAX = Com_TeamsSP_GetAllTeamFlags();
        else
          _RAX = Com_TeamsMP_GetAllTeamFlags();
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsp+2B0h+iTeamFlags.array], xmm0
          vmovsd  xmm1, qword ptr [rax+10h]
          vmovsd  qword ptr [rsp+2B0h+iTeamFlags.array+10h], xmm1
        }
        iTeamFlags.array[6] = _RAX->array[6];
      }
      Cmd_AI_Team_0(v0, v10, v9, &iTeamFlags, v11 == 33);
      return;
    }
  }
LABEL_38:
  v10 = sentientfields;
  v26 = SL_FindLowercaseString(buffer);
  v27 = sentientfields[0].name;
  v28 = 0;
  if ( sentientfields[0].name )
  {
    v29 = 0i64;
    while ( v26 != *v27 )
    {
      ++v29;
      ++v28;
      v27 = sentientfields[v29].name;
      if ( !v27 )
        goto LABEL_44;
    }
    v9 = &sentientfields[v28];
    if ( v9 )
      goto LABEL_14;
  }
LABEL_44:
  v10 = entfields;
  v30 = SL_FindLowercaseString(buffer);
  v31 = entfields[0].name;
  v32 = 0;
  if ( entfields[0].name )
  {
    v33 = 0i64;
    while ( v30 != *v31 )
    {
      ++v33;
      ++v32;
      v31 = entfields[v33].name;
      if ( !v31 )
        goto LABEL_50;
    }
    v9 = &entfields[v32];
    if ( v9 )
      goto LABEL_14;
  }
LABEL_50:
  if ( !Cmd_AIScripted_f(buffer, v0) )
  {
    Cmd_AI_PrintUsage_0();
    Com_PrintError(0, "%s is not an actor or entity field\n", buffer);
  }
}

/*
==============
GScr_AddFieldsForActor
==============
*/
void GScr_AddFieldsForActor(scrContext_t *scrContext)
{
  const actor_fields_s *i; 
  __int64 v3; 

  for ( i = aifields; i->name; ++i )
  {
    v3 = ((char *)&i->canonicalString - (char *)&aifields[0].canonicalString) / 48;
    if ( (v3 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 1306, ASSERT_TYPE_ASSERT, "(!((f - aifields) & ENTFIELD_MASK))", (const char *)&queryFormat, "!((f - aifields) & ENTFIELD_MASK)") )
      __debugbreak();
    if ( v3 != (unsigned __int16)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 1307, ASSERT_TYPE_ASSERT, "((f - aifields) == (unsigned short)( f - aifields ))", (const char *)&queryFormat, "(f - aifields) == (unsigned short)( f - aifields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_GENTITY, *i->name, i->canonicalString, (unsigned __int16)v3 | 0x4000);
  }
}

/*
==============
PrintFieldUsage
==============
*/
void PrintFieldUsage(const actor_fields_s *fields)
{
  const actor_fields_s *v2; 
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 

  if ( fields->name )
  {
    v2 = fields;
    v3 = 0i64;
    do
    {
      switch ( v2->type )
      {
        case F_INT:
          v4 = "int";
          goto LABEL_15;
        case F_SHORT:
          v4 = "short";
          goto LABEL_15;
        case F_BYTE:
          v4 = "byte";
          goto LABEL_15;
        case F_FLOAT:
          v4 = "float";
          goto LABEL_15;
        case F_STRING:
        case F_MODEL:
          v4 = "string";
          goto LABEL_15;
        case F_VECTOR:
          v4 = "vector";
          goto LABEL_15;
        case F_ENTITY:
        case F_ENTHANDLE:
          v4 = "entnum";
          goto LABEL_15;
        case F_SENTIENT:
        case F_SENTIENTHANDLE:
          v4 = "sentient";
          goto LABEL_15;
        case F_CLIENT:
          v4 = "clientnum";
          goto LABEL_15;
        case F_PATHNODE:
          v4 = "pathnode";
          goto LABEL_15;
        case F_WEAPON:
          v4 = "weapon";
LABEL_15:
          v5 = SL_ConvertToString(*v2->name);
          Com_Printf(0, "^5  %-20s: %s\n", v5, v4);
          break;
        default:
          LODWORD(v6) = v2->type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 722, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cmd_AI_f: unhandled field type %i\n", v6) )
            __debugbreak();
          break;
      }
      v2 = &fields[++v3];
    }
    while ( v2->name );
  }
}

/*
==============
Scr_GetActorField
==============
*/
void Scr_GetActorField(scrContext_t *scrContext, actor_s *actor, int offset)
{
  __int64 v3; 
  const actor_fields_s *v6; 
  void (__fastcall *getter)(scrContext_t *, actor_s *, const actor_fields_s *); 

  v3 = offset;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 1345, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( (unsigned int)v3 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 1346, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( aifields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( aifields ) - 1") )
    __debugbreak();
  v6 = &aifields[v3];
  getter = v6->getter;
  if ( getter )
    getter(scrContext, actor, &aifields[v3]);
  else
    Scr_GetGenericField(scrContext, (unsigned __int8 *)actor, v6->type, v6->ofs);
}

/*
==============
Scr_SetActorField
==============
*/
void Scr_SetActorField(scrContext_t *scrContext, actor_s *actor, int offset)
{
  __int64 v3; 
  const actor_fields_s *v6; 
  void (__fastcall *setter)(scrContext_t *, actor_s *, const actor_fields_s *); 

  v3 = offset;
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 1322, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( (unsigned int)v3 >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 1323, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( aifields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( aifields ) - 1") )
    __debugbreak();
  v6 = &aifields[v3];
  setter = v6->setter;
  if ( setter )
    setter(scrContext, actor, &aifields[v3]);
  else
    Scr_SetGenericField(scrContext, (unsigned __int8 *)actor, v6->type, v6->ofs);
}

