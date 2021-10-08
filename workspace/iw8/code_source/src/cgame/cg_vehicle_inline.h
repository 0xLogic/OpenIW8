/*
==============
CG_Vehicle_GetEntityDObj
==============
*/

DObj *__fastcall CG_Vehicle_GetEntityDObj(const CgVehicleSystem *vehicleSystem, const centity_t *cent)
{
  return ?CG_Vehicle_GetEntityDObj@@YAPEAUDObj@@PEBVCgVehicleSystem@@PEBUcentity_t@@@Z(vehicleSystem, cent);
}

/*
==============
CG_Vehicle_GetEntityDObj
==============
*/
DObj *CG_Vehicle_GetEntityDObj(const CgVehicleSystem *vehicleSystem, const centity_t *cent)
{
  signed int XCompositeModelIndex; 
  LocalClientNum_t m_localClientNum; 
  const XCompositeModelDef *XCompositeModelFromIndex; 
  const XModel *XModelFromIndex; 
  unsigned int number; 
  LocalClientNum_t v10; 
  unsigned int v11; 
  unsigned int v12; 
  DObjModel *outDObjModel; 
  __int64 v15; 
  DObjModel dobjModel; 

  if ( vehicleSystem->IsMP((CgVehicleSystem *)vehicleSystem) )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.h", 125, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.h", 126, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    XCompositeModelIndex = CG_XCompositeModel_GetXCompositeModelIndex((const LocalClientNum_t)vehicleSystem->m_localClientNum, cent);
    m_localClientNum = vehicleSystem->m_localClientNum;
    if ( XCompositeModelIndex <= 0 )
    {
      XModelFromIndex = CG_EntityMP_GetXModelFromIndex(m_localClientNum, cent->nextState.un.actorFlags);
      DObjInitModel(XModelFromIndex, (scr_string_t)0, 1, 0, NULL, &dobjModel);
      return CG_EntityMP_GetDObj(vehicleSystem->m_localClientNum, cent->nextState.number, cent->nextState.eType, &dobjModel, 1u, NULL);
    }
    else
    {
      XCompositeModelFromIndex = CG_XCompositeModel_GetXCompositeModelFromIndex(m_localClientNum, XCompositeModelIndex);
      if ( !XCompositeModelFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_mp.h", 132, ASSERT_TYPE_ASSERT, "(compositeModel)", (const char *)&queryFormat, "compositeModel") )
        __debugbreak();
      return CG_XCompositeModel_GetDObj(XCompositeModelFromIndex, (const LocalClientNum_t)vehicleSystem->m_localClientNum, cent, NULL);
    }
  }
  else
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.h", 109, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.h", 110, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    number = cent->nextState.number;
    v10 = vehicleSystem->m_localClientNum;
    if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", number) )
      __debugbreak();
    if ( (unsigned int)v10 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v15) = 2;
      LODWORD(outDObjModel) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outDObjModel, v15) )
        __debugbreak();
    }
    v11 = 2533 * v10 + number;
    if ( v11 >= 0x13CA )
    {
      LODWORD(v15) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v15) )
        __debugbreak();
    }
    v12 = clientObjMap[v11];
    if ( !v12 )
      return 0i64;
    if ( v12 >= (unsigned int)s_objCount )
    {
      LODWORD(v15) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v15) )
        __debugbreak();
    }
    return (DObj *)s_objBuf[v12];
  }
}

