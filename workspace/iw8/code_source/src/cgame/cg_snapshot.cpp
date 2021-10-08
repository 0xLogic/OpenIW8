/*
==============
CG_Snapshot_ShutdownEntityCommon
==============
*/

void __fastcall CG_Snapshot_ShutdownEntityCommon(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Snapshot_ShutdownEntityCommon@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Snapshot_SetSnapshotType
==============
*/

void __fastcall CG_Snapshot_SetSnapshotType(const CgSnapshotType snapType)
{
  ?CG_Snapshot_SetSnapshotType@@YAXW4CgSnapshotType@@@Z(snapType);
}

/*
==============
CG_Snapshot_ResetEntityCommon
==============
*/

void __fastcall CG_Snapshot_ResetEntityCommon(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Snapshot_ResetEntityCommon@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Snapshot_GetSnapshotType
==============
*/

CgSnapshotType __fastcall CG_Snapshot_GetSnapshotType()
{
  return ?CG_Snapshot_GetSnapshotType@@YA?AW4CgSnapshotType@@XZ();
}

/*
==============
CG_Snapshot_GetSnapshotType
==============
*/
__int64 CG_Snapshot_GetSnapshotType()
{
  return (unsigned int)s_allocatedSnapshotType;
}

/*
==============
CG_Snapshot_ResetEntityCommon
==============
*/
void CG_Snapshot_ResetEntityCommon(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_snapshot.cpp", 30, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)v2 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v4, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v2] )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v5) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v5) )
      __debugbreak();
  }
  cent->resetTime = cg_t::ms_cgArray[v2]->time;
}

/*
==============
CG_Snapshot_SetSnapshotType
==============
*/
void CG_Snapshot_SetSnapshotType(const CgSnapshotType snapType)
{
  s_allocatedSnapshotType = snapType;
}

/*
==============
CG_Snapshot_ShutdownEntityCommon
==============
*/
void CG_Snapshot_ShutdownEntityCommon(LocalClientNum_t localClientNum, centity_t *cent)
{
  switch ( cent->pose.eType )
  {
    case 0xBu:
      CG_Turret_ShutdownEntity(localClientNum, cent);
      break;
    case 0x16u:
      CG_PhysicsObject_DestroyPhysicsChild(localClientNum, cent);
      break;
    case 0x17u:
      CG_BeamEntity_Destroy(localClientNum, cent);
      break;
    case 0x19u:
      CG_RagdollConstraintEntity_Destroy(localClientNum, cent);
      break;
    case 0x1Au:
      CG_PhysicsVolume_Destroy(localClientNum, cent);
      break;
  }
}

