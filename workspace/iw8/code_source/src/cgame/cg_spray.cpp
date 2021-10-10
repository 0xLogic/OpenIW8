/*
==============
CG_SprayEvent
==============
*/

void __fastcall CG_SprayEvent(LocalClientNum_t localClientNum, const centity_t *cent, const unsigned int eventParm)
{
  ?CG_SprayEvent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@I@Z(localClientNum, cent, eventParm);
}

/*
==============
CG_SprayEvent
==============
*/
void CG_SprayEvent(LocalClientNum_t localClientNum, const centity_t *cent, const unsigned int eventParm)
{
  const dvar_t *v3; 
  const dvar_t *v7; 
  float value; 
  unsigned __int8 *priorityMap; 
  int number; 
  unsigned __int16 v11; 
  unsigned int EntityHitId; 
  unsigned int ScriptableHitId; 
  unsigned int v14; 
  cg_t *LocalClientGlobals; 
  unsigned int RowCount; 
  const char *v17; 
  const char *v18; 
  const Material *v19; 
  cg_t *v20; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  __int64 contentMask; 
  __int64 locational; 
  StringTable *tablePtr; 
  vec3_t outEyePos; 
  vec3_t outForward; 
  vec3_t end; 
  vec3_t origin; 
  tmat33_t<vec3_t> refAxis; 
  vec3_t outUp; 
  vec3_t outRight; 
  trace_t results; 
  tmat33_t<vec3_t> outAxis; 
  char dest[1024]; 

  v3 = DCONST_DVARBOOL_bg_sprayEnabled;
  if ( !DCONST_DVARBOOL_bg_sprayEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_sprayEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && cgMedia.fxSprayDecal.m_particleSystemDef )
  {
    if ( cent->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_spray.cpp", 34, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
      __debugbreak();
    CG_CalcEyePoint(localClientNum, cent->nextState.number, &outEyePos);
    CG_GetViewDirection(localClientNum, cent->nextState.number, &outForward, &outRight, &outUp);
    v7 = DCONST_DVARFLT_bg_sprayDistance;
    if ( !DCONST_DVARFLT_bg_sprayDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_sprayDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
    end.v[0] = (float)(value * outForward.v[0]) + outEyePos.v[0];
    end.v[1] = (float)(value * outForward.v[1]) + outEyePos.v[1];
    end.v[2] = (float)(value * outForward.v[2]) + outEyePos.v[2];
    priorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    number = cent->nextState.number;
    v11 = 0;
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 4), &results, &outEyePos, &end, &bounds_origin, number, 0, 41969969, 1, priorityMap, All);
    if ( results.fraction != 1.0 )
    {
      EntityHitId = Trace_GetEntityHitId(&results);
      ScriptableHitId = Trace_GetScriptableHitId(&results);
      v14 = ScriptableHitId;
      if ( ScriptableHitId != -1 && ScriptableCl_GetLinkTypeEquals(localClientNum, ScriptableHitId, SCRIPTABLE_LINK_DYNENT) )
      {
        EntityHitId = ScriptableCl_GetLinkObject(localClientNum, v14);
        v11 = 2;
      }
      origin.v[2] = (float)((float)(value * results.fraction) * outForward.v[2]) + outEyePos.v[2];
      origin.v[0] = (float)((float)(value * results.fraction) * outForward.v[0]) + outEyePos.v[0];
      origin.v[1] = (float)((float)(value * results.fraction) * outForward.v[1]) + outEyePos.v[1];
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      LODWORD(refAxis.m[0].v[0]) = LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[0]) ^ _xmm;
      LODWORD(refAxis.m[0].v[1]) = LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[1]) ^ _xmm;
      LODWORD(refAxis.m[0].v[2]) = LODWORD(LocalClientGlobals->refdef.view.axis.m[2].v[2]) ^ _xmm;
      LODWORD(refAxis.m[1].v[0]) = LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[0]) ^ _xmm;
      LODWORD(refAxis.m[1].v[1]) = LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[1]) ^ _xmm;
      LODWORD(refAxis.m[1].v[2]) = LODWORD(LocalClientGlobals->refdef.view.axis.m[1].v[2]) ^ _xmm;
      GenerateAxisFromUpVector(&results.normal, &refAxis, &outAxis);
      StringTable_GetAsset("mp/spraytable.csv", (const StringTable **)&tablePtr);
      if ( tablePtr )
      {
        RowCount = StringTable_GetRowCount(tablePtr);
        if ( RowCount >= 0x1000 )
        {
          LODWORD(skipChildren) = 4096;
          LODWORD(skipEntity) = RowCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_spray.cpp", 91, ASSERT_TYPE_ASSERT, "(unsigned)( tableSprayCount ) < (unsigned)( (0x1 << 12) )", "tableSprayCount doesn't index (0x1 << SPRAY_OR_BOAST_INDEX_BITS)\n\t%i not in [0, %i)", skipEntity, skipChildren) )
            __debugbreak();
        }
      }
      v17 = j_va("%d", eventParm);
      v18 = StringTable_Lookup(tablePtr, 0, v17, 1);
      if ( !*v18 )
      {
        LODWORD(locational) = 1;
        LODWORD(contentMask) = eventParm;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_spray.cpp", 97, ASSERT_TYPE_ASSERT, "(rawSprayMaterialName[0])", "%s\n\tInvalid spray material name in '%s' row '%d' column '%d'.", "rawSprayMaterialName[0]", "mp/spraytable.csv", contentMask, locational) )
          __debugbreak();
      }
      Com_sprintf<1024>((char (*)[1024])dest, "i/%s", v18);
      v19 = Material_Register(dest, IMAGE_TRACK_FX);
      if ( Material_IsDefault(v19) )
        v19 = MARK_MATERIAL_OVERRIDE_NONE;
      v20 = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffectWithMarkEntity(localClientNum, &cgMedia.fxSprayDecal, v20->time, &origin, &outAxis, v11, EntityHitId, 0, 0xFEu, v19);
    }
  }
}

