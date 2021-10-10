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
  int v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  double v13; 
  const char *v14; 
  scr_string_t v15; 
  const char *v16; 
  scr_string_t v17; 
  __int64 ofs; 
  double v19; 
  double v20; 
  double v21; 
  const char *v22; 
  __int64 v23; 
  signed __int64 v24; 
  scr_string_t targetname; 
  const char *v26; 
  const char *v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  scr_string_t v33; 
  const char *v34; 
  const char *v35; 
  __int16 **v36; 
  unsigned __int64 v37; 
  const char *v38; 
  const pathnode_t *v39; 
  int v40; 
  const char *v41; 
  const char *v42; 
  unsigned int v43; 
  const char *v44; 
  const char *v45; 
  char *fmt; 
  __int64 v47; 
  __int64 v48; 

  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3847, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  number = pSelf->ent->s.number;
  switch ( pField->type )
  {
    case F_INT:
      v7 = *(_DWORD *)&pBase[pField->ofs];
      v8 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v7;
      Com_Printf(0, "ent %i: %s = %i\n", number, v8, fmt);
      return;
    case F_SHORT:
      v9 = *(__int16 *)&pBase[pField->ofs];
      v10 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v9;
      Com_Printf(0, "ent %i: %s = %i\n", number, v10, fmt);
      return;
    case F_BYTE:
      v11 = pBase[pField->ofs];
      v12 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v11;
      Com_Printf(0, "ent %i: %s = %i\n", number, v12, fmt);
      return;
    case F_FLOAT:
      v13 = *(float *)&pBase[pField->ofs];
      v14 = SL_ConvertToString(*pField->name);
      Com_Printf(0, "ent %i: %s = %g\n", number, v14, v13);
      return;
    case F_STRING:
      v15 = *(_DWORD *)&pBase[pField->ofs];
      if ( v15 )
        v16 = SL_ConvertToString(v15);
      else
        v16 = "<undefined>";
      v17 = *pField->name;
      goto LABEL_62;
    case F_VECTOR:
      ofs = pField->ofs;
      v19 = *(float *)&pBase[ofs + 8];
      v20 = *(float *)&pBase[ofs + 4];
      v21 = *(float *)&pBase[ofs];
      v22 = SL_ConvertToString(*pField->name);
      Com_Printf(0, "ent %i: %s = %g %g %g\n", number, v22, v21, v20, v19);
      return;
    case F_ENTITY:
      v23 = *(_QWORD *)&pBase[pField->ofs];
      if ( !v23 )
        goto LABEL_57;
      v24 = (signed __int64)(v23 - (unsigned __int64)level.gentities) / 1456;
      if ( (unsigned __int64)(v24 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v24, "signed", (signed __int64)(v23 - (unsigned __int64)level.gentities) / 1456) )
        __debugbreak();
      if ( (unsigned int)v24 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3886, ASSERT_TYPE_ASSERT, "(i >= 0 && i < ( 2048 ))", (const char *)&queryFormat, "i >= 0 && i < MAX_GENTITIES") )
        __debugbreak();
      targetname = level.gentities[(int)v24].targetname;
      if ( targetname )
        v26 = SL_ConvertToString(targetname);
      else
        v26 = "<undefined>";
      v27 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v24;
      Com_Printf(0, "ent %i: %s = %i (targetname %s)\n", number, v27, fmt, v26);
      return;
    case F_ENTHANDLE:
      if ( !EntHandle::isDefined((EntHandle *)&pBase[pField->ofs]) )
        goto LABEL_57;
      v28 = pField->ofs;
      v29 = *(unsigned __int16 *)&pBase[v28];
      if ( (unsigned int)(v29 - 1) >= 0x7FF )
      {
        LODWORD(v47) = v29 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v47, 2047) )
          __debugbreak();
      }
      v30 = *(unsigned __int16 *)&pBase[v28];
      if ( (unsigned int)(v30 - 1) >= 0x800 )
      {
        LODWORD(v48) = 2048;
        LODWORD(v47) = v30 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v31 = v30 - 1;
      if ( g_entities[v31].r.isInUse != g_entityIsInUse[v31] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v31] )
      {
        LODWORD(v48) = *(unsigned __int16 *)&pBase[v28] - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v48) )
          __debugbreak();
      }
      v32 = *(__int16 *)&pBase[v28];
      LODWORD(v28) = v32 - 1;
      if ( (unsigned int)(v32 - 1) > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3900, ASSERT_TYPE_ASSERT, "(i >= 0 && i < ( 2048 ))", (const char *)&queryFormat, "i >= 0 && i < MAX_GENTITIES") )
        __debugbreak();
      v33 = level.gentities[v32 - 1].targetname;
      goto LABEL_45;
    case F_SENTIENT:
      v36 = *(__int16 ***)&pBase[pField->ofs];
      if ( !v36 )
        goto LABEL_57;
      v28 = **v36;
      goto LABEL_51;
    case F_SENTIENTHANDLE:
      if ( !SentientHandle::isDefined((SentientHandle *)&pBase[pField->ofs]) )
        goto LABEL_57;
      v28 = SentientHandle::sentient((SentientHandle *)&pBase[pField->ofs])->ent->s.number;
LABEL_51:
      v33 = level.gentities[v28].targetname;
LABEL_45:
      if ( v33 )
        v34 = SL_ConvertToString(v33);
      else
        v34 = "<undefined>";
      v35 = SL_ConvertToString(*pField->name);
      LODWORD(fmt) = v28;
      Com_Printf(0, "ent %i: %s = %i (targetname %s)\n", number, v35, fmt, v34);
      break;
    case F_CLIENT:
      v37 = (__int64)((unsigned __int128)((__int64)(*(_QWORD *)&pBase[pField->ofs] - (unsigned __int64)level.clients) * (__int128)0x103BDCBDFC935F7i64) >> 64) >> 8;
      v38 = SL_ConvertToString(*pField->name);
      Com_Printf(0, "ent %i: %s = client %zi\n", number, v38, (v37 >> 63) + v37);
      return;
    case F_PATHNODE:
      v39 = *(const pathnode_t **)&pBase[pField->ofs];
      if ( v39 )
      {
        v40 = Path_ConvertNodeToIndex(v39);
        v41 = SL_ConvertToString(*pField->name);
        LODWORD(fmt) = v40;
        Com_Printf(0, "ent %i: %s = node %i\n", number, v41, fmt);
      }
      else
      {
LABEL_57:
        v42 = SL_ConvertToString(*pField->name);
        Com_Printf(0, "ent %i: %s = (null)\n", number, v42);
      }
      break;
    case F_MODEL:
      v43 = pBase[pField->ofs];
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      v16 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v43);
      v17 = *pField->name;
LABEL_62:
      v44 = SL_ConvertToString(v17);
      Com_Printf(0, "ent %i: %s = %s\n", number, v44, v16);
      break;
    default:
      v45 = SL_ConvertToString(*pField->name);
      LODWORD(v47) = pField->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 3949, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cmd_AI_f: unhandled field type %i for %s\n", v47, v45) )
        __debugbreak();
      break;
  }
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
  const char *v10; 
  int v13; 
  __int64 v14; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  char buffer[256]; 

  if ( !pField && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4056, ASSERT_TYPE_ASSERT, "(pField)", (const char *)&queryFormat, "pField") )
    __debugbreak();
  setter = pField->setter;
  if ( setter == AIScriptedScr_ReadOnly )
  {
    v10 = SL_ConvertToString(*pField->name);
    Com_PrintError(0, "%s is read-only\n", v10);
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
        *(_DWORD *)&pBase[pField->ofs] = atoi(buffer);
        break;
      case F_SHORT:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        *(_WORD *)&pBase[pField->ofs] = atoi(buffer);
        break;
      case F_BYTE:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        pBase[pField->ofs] = atoi(buffer);
        break;
      case F_FLOAT:
        if ( argc != 4 )
          goto LABEL_19;
        SV_Cmd_ArgvBuffer(3, buffer, 0x100ui64);
        *(double *)&_XMM0 = atof(buffer);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        *(float *)&pBase[pField->ofs] = *(float *)&_XMM1;
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
        v13 = 0;
        v14 = 0i64;
        do
        {
          SV_Cmd_ArgvBuffer(v13 + 3, buffer, 0x100ui64);
          *(double *)&_XMM0 = atof(buffer);
          __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
          if ( (unsigned int)v13 >= 3 )
          {
            LODWORD(v19) = 3;
            LODWORD(v17) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
            LODWORD(v20) = 3;
            LODWORD(v18) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v20) )
              __debugbreak();
          }
          ++v13;
          v16 = v14 + pField->ofs;
          v14 += 4i64;
          *(float *)&pBase[v16] = *(float *)&_XMM6;
        }
        while ( v13 < 3 );
        break;
      default:
        LODWORD(v17) = pField->type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_scripted_fields.cpp", 4149, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cmd_AI_f: unhandled field type %i\n", v17) )
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
  gentity_s *ent; 
  bool v6; 
  gentity_s *v7; 
  float v8; 
  float v9; 
  AINavigator *v10; 
  AINavigator *pNavigator; 
  AINavLayer m_Layer; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_fields.cpp", 613, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  ent = self->ent;
  v6 = Scr_GetInt(scrContext, 0) != 0;
  if ( v6 != self->Physics.bSpace )
  {
    v7 = self->ent;
    if ( v6 )
    {
      self->Physics.bSpace = 1;
      v7->s.un.vehicleXModel |= 8u;
      v8 = self->Physics.bounds.halfSize.v[2];
      self->Physics.bounds.midPoint.v[2] = v8 - 41.0;
      self->Physics.bounds.halfSize.v[2] = v8;
      v9 = ent->r.box.halfSize.v[2];
      ent->r.box.midPoint.v[2] = v9 - 41.0;
      ent->r.box.halfSize.v[2] = v9;
      ent->s.lerp.u.actor.flags |= 1u;
      if ( Nav_AnyVolumesLoaded() )
      {
        v10 = Nav_Create3DNavigator(self->ent, self->pNavigator->m_Layer, 1);
        Nav_FreeNavigator(self->pNavigator);
        self->pNavigator = v10;
        self->avoidance.avoidanceEnabled = 0;
      }
    }
    else
    {
      self->Physics.bSpace = 0;
      v7->s.un.vehicleXModel &= ~8u;
      self->Physics.bounds = actorBox;
      *(_OWORD *)ent->r.box.midPoint.v = *(_OWORD *)actorBox.midPoint.v;
      ent->s.lerp.u.actor.flags &= ~1u;
      *(double *)&ent->r.box.halfSize.y = *(double *)&actorBox.halfSize.y;
      if ( Nav_AnyVolumesLoaded() )
      {
        pNavigator = self->pNavigator;
        m_Layer = pNavigator->m_Layer;
        Nav_FreeNavigator(pNavigator);
        self->pNavigator = Nav_Create2DNavigator(self->ent, m_Layer);
      }
      self->avoidance.avoidanceEnabled = 1;
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
  Scr_AddFloat(scrContext, (float)*(int *)((char *)&pSelf->ent + pField->ofs) * 0.001);
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
  Scr_GetFloat(scrContext, 0);
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm4, 1 }
  *(_DWORD *)((char *)&pSelf->ent + pField->ofs) = (int)*(float *)&_XMM1;
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
  bitarray<224> *AllTeamFlags; 
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
  bitarray<224> *v36; 
  GUtils *Utils; 
  unsigned int v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  bitarray<224> *v41; 
  actor_s *j; 
  scr_string_t to; 
  bitarray<224> iTeamFlags; 
  char buffer[256]; 
  char v46; 
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
      SV_Cmd_ArgvBuffer(1, &v46, 0x100ui64);
      v11 = v46;
      p_s0 = &v46;
      v13 = v46;
      if ( v46 == 33 )
        v13 = s0;
      if ( v46 == 33 )
        p_s0 = &s0;
      if ( (unsigned __int8)(v13 - 48) <= 9u )
      {
        v14 = atoi(p_s0);
        if ( v11 == 33 )
        {
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
          else
            AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
          iTeamFlags = *AllTeamFlags;
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
        v38 = Utils->GetTeamFromDebugString(Utils, p_s0);
        v39 = v38;
        if ( !v38 )
        {
          v40 = 404i64;
          if ( IsActorClassname(p_s0) )
            v40 = 380i64;
          to = SL_GetString(p_s0, 0);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            v41 = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
          else
            v41 = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
          iTeamFlags = *v41;
          for ( j = AIActorInterface::FirstActor(&iTeamFlags); j; j = AIActorInterface::NextActor(j, &iTeamFlags) )
          {
            if ( (*(_DWORD *)((char *)&j->ent->s.number + v40) == to) == (v11 != 33) )
              Cmd_AI_Dispatch_0(v0, j, v10, v9);
          }
          Scr_SetString(&to, (scr_string_t)0);
          return;
        }
        memset(&iTeamFlags, 0, sizeof(iTeamFlags));
        if ( v38 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v38, 224) )
          __debugbreak();
        iTeamFlags.array[v39 >> 5] |= 0x80000000 >> (v39 & 0x1F);
      }
      else
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          v36 = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
        else
          v36 = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
        iTeamFlags = *v36;
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

