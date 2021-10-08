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
  const dvar_t *v4; 
  bool v8; 
  unsigned __int8 *priorityMap; 
  int number; 
  unsigned __int16 v19; 
  unsigned int EntityHitId; 
  unsigned int ScriptableHitId; 
  unsigned int v23; 
  unsigned int RowCount; 
  const char *v46; 
  const char *v47; 
  const Material *v48; 
  cg_t *LocalClientGlobals; 
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

  v4 = DCONST_DVARBOOL_bg_sprayEnabled;
  if ( !DCONST_DVARBOOL_bg_sprayEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_sprayEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && cgMedia.fxSprayDecal.m_particleSystemDef )
  {
    v8 = cent->nextState.eType == ET_PLAYER;
    __asm { vmovaps [rsp+5D0h+var_40], xmm6 }
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_spray.cpp", 34, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
      __debugbreak();
    CG_CalcEyePoint(localClientNum, cent->nextState.number, &outEyePos);
    CG_GetViewDirection(localClientNum, cent->nextState.number, &outForward, &outRight, &outUp);
    _RBX = DCONST_DVARFLT_bg_sprayDistance;
    if ( !DCONST_DVARFLT_bg_sprayDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_sprayDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vmulss  xmm1, xmm6, dword ptr [rsp+5D0h+outForward]
      vaddss  xmm2, xmm1, dword ptr [rsp+5D0h+outEyePos]
      vmulss  xmm1, xmm6, dword ptr [rsp+5D0h+outForward+4]
      vmovss  dword ptr [rbp+4D0h+end], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+5D0h+outEyePos+4]
      vmulss  xmm1, xmm6, dword ptr [rbp+4D0h+outForward+8]
      vmovss  dword ptr [rbp+4D0h+end+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+5D0h+outEyePos+8]
      vmovss  dword ptr [rbp+4D0h+end+8], xmm2
    }
    priorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    number = cent->nextState.number;
    v19 = 0;
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 4), &results, &outEyePos, &end, &bounds_origin, number, 0, 41969969, 1, priorityMap, All);
    __asm
    {
      vmovss  xmm0, [rbp+4D0h+results.fraction]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( !v8 )
    {
      EntityHitId = Trace_GetEntityHitId(&results);
      ScriptableHitId = Trace_GetScriptableHitId(&results);
      v23 = ScriptableHitId;
      if ( ScriptableHitId != -1 && ScriptableCl_GetLinkTypeEquals(localClientNum, ScriptableHitId, SCRIPTABLE_LINK_DYNENT) )
      {
        EntityHitId = ScriptableCl_GetLinkObject(localClientNum, v23);
        v19 = 2;
      }
      __asm
      {
        vmulss  xmm5, xmm6, [rbp+4D0h+results.fraction]
        vmulss  xmm1, xmm5, dword ptr [rsp+5D0h+outForward+4]
        vaddss  xmm3, xmm1, dword ptr [rsp+5D0h+outEyePos+4]
        vmulss  xmm2, xmm5, dword ptr [rsp+5D0h+outForward]
        vmulss  xmm0, xmm5, dword ptr [rbp+4D0h+outForward+8]
        vaddss  xmm1, xmm0, dword ptr [rsp+5D0h+outEyePos+8]
        vaddss  xmm4, xmm2, dword ptr [rsp+5D0h+outEyePos]
        vmovss  dword ptr [rbp+4D0h+origin+8], xmm1
        vmovss  dword ptr [rbp+4D0h+origin], xmm4
        vmovss  dword ptr [rbp+4D0h+origin+4], xmm3
      }
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [rax+695Ch]
        vxorps  xmm0, xmm0, xmm3
        vmovss  dword ptr [rbp+4D0h+refAxis], xmm0
        vmovss  xmm1, dword ptr [rax+6960h]
        vxorps  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbp+4D0h+refAxis+4], xmm2
        vmovss  xmm0, dword ptr [rax+6964h]
        vxorps  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+4D0h+refAxis+8], xmm1
        vmovss  xmm0, dword ptr [rax+6950h]
        vxorps  xmm1, xmm0, xmm3
        vmovss  dword ptr [rbp+4D0h+refAxis+0Ch], xmm1
        vmovss  xmm2, dword ptr [rax+6954h]
        vxorps  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbp+4D0h+refAxis+10h], xmm0
        vmovss  xmm1, dword ptr [rax+6958h]
        vxorps  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbp+4D0h+refAxis+14h], xmm2
      }
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
      v46 = j_va("%d", eventParm);
      v47 = StringTable_Lookup(tablePtr, 0, v46, 1);
      if ( !*v47 )
      {
        LODWORD(locational) = 1;
        LODWORD(contentMask) = eventParm;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_spray.cpp", 97, ASSERT_TYPE_ASSERT, "(rawSprayMaterialName[0])", "%s\n\tInvalid spray material name in '%s' row '%d' column '%d'.", "rawSprayMaterialName[0]", "mp/spraytable.csv", contentMask, locational) )
          __debugbreak();
      }
      Com_sprintf<1024>((char (*)[1024])dest, "i/%s", v47);
      v48 = Material_Register(dest, IMAGE_TRACK_FX);
      if ( Material_IsDefault(v48) )
        v48 = MARK_MATERIAL_OVERRIDE_NONE;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      FX_PlayOrientedEffectWithMarkEntity(localClientNum, &cgMedia.fxSprayDecal, LocalClientGlobals->time, &origin, &outAxis, v19, EntityHitId, 0, 0xFEu, v48);
    }
    __asm { vmovaps xmm6, [rsp+5D0h+var_40] }
  }
}

