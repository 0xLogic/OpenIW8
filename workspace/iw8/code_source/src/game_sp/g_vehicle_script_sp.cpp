/*
==============
G_VehicleScriptSPCmd_SetWaitNode
==============
*/

void __fastcall G_VehicleScriptSPCmd_SetWaitNode(scrContext_t *scrContext, scr_entref_t entref)
{
  ?G_VehicleScriptSPCmd_SetWaitNode@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
G_VehicleScriptSPCmd_OrientTo
==============
*/

void __fastcall G_VehicleScriptSPCmd_OrientTo(scrContext_t *scrContext, scr_entref_t entref)
{
  ?G_VehicleScriptSPCmd_OrientTo@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
G_VehicleScriptSPCmd_ReturnPlayerControl
==============
*/

void __fastcall G_VehicleScriptSPCmd_ReturnPlayerControl(scrContext_t *scrContext, scr_entref_t entref)
{
  ?G_VehicleScriptSPCmd_ReturnPlayerControl@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
G_VehicleScriptSPCmd_OrientTo
==============
*/
void G_VehicleScriptSPCmd_OrientTo(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *VehicleEntity; 
  const char *v6; 
  float fmt; 
  vec3_t tgtAngles; 
  vec3_t vectorValue; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  VehicleEntity = G_VehicleScript_GetVehicleEntity(scrContext, entref);
  if ( !VehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_script_sp.cpp", 34, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !VehicleEntity->vehicle )
  {
    v6 = j_va("Orient to is only for vehicles.");
    Scr_Error(COM_ERR_5130, scrContext, v6);
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &tgtAngles);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovaps xmm3, xmm0; tgtSpeed
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  G_VehicleSP_OrientTo_Init(VehicleEntity->vehicle, &vectorValue, &tgtAngles, *(float *)&_XMM3, fmt);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
G_VehicleScriptSPCmd_SetWaitNode
==============
*/
void G_VehicleScriptSPCmd_SetWaitNode(scrContext_t *scrContext, scr_entref_t entref)
{
  Vehicle *vehicle; 

  vehicle = G_VehicleScript_GetVehicleEntity(scrContext, entref)->vehicle;
  vehicle->waitNode = G_VehiclePathScr_GetNodeIndex(scrContext, 0);
  Com_PrintWarning(0, "SetWaitNode() is obsolete, use 'node waittillmatch( \"trigger\", <vehicle> )' instead.\n");
}

/*
==============
G_VehicleScriptSPCmd_ReturnPlayerControl
==============
*/
void G_VehicleScriptSPCmd_ReturnPlayerControl(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *VehicleEntity; 
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 

  VehicleEntity = G_VehicleScript_GetVehicleEntity(scrContext, entref);
  number = VehicleEntity->r.ownerNum.number;
  if ( !number )
    goto LABEL_15;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 )
  {
    v10 = 2048;
    v8 = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v9) = VehicleEntity->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v9) )
      __debugbreak();
  }
  if ( !VehicleEntity->r.ownerNum.number )
LABEL_15:
    Scr_Error(COM_ERR_5131, scrContext, "This vehicle is not being used by a player");
  G_VehicleSP_CancelAIMove(VehicleEntity);
  if ( !VehicleEntity->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_vehicle_script_sp.cpp", 78, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  VehicleEntity->vehicle->drivingState = VEH_DRIVE_PLAYER;
}

