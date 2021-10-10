/*
==============
CG_CalloutMarkerPing_GetWorldOrigin
==============
*/

bool __fastcall CG_CalloutMarkerPing_GetWorldOrigin(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum, vec3_t *outWorldOrigin)
{
  return ?CG_CalloutMarkerPing_GetWorldOrigin@@YA_NW4CalloutMarkerPingPool@@AEBTCalloutMarkerPingView@@W4LocalClientNum_t@@AEATvec3_t@@@Z(pool, view, localClientNum, outWorldOrigin);
}

/*
==============
CG_CalloutMarkerPing_GetWorldOrigin
==============
*/
bool CG_CalloutMarkerPing_GetWorldOrigin(const CalloutMarkerPingPool pool, const CalloutMarkerPingView *view, LocalClientNum_t localClientNum, vec3_t *outWorldOrigin)
{
  cg_t *LocalClientGlobals; 
  __int64 v9; 
  float v10; 
  float v11; 
  __int16 z; 
  unsigned int index; 
  unsigned __int8 v14; 
  const ObjectiveSettings *v15; 
  unsigned int v16; 
  int v17; 
  ScriptableInstanceContextSecure *v18; 
  double ZOffset; 
  bool v20; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int16 v26; 
  float v27; 
  int x; 
  unsigned __int8 owner; 
  centity_t *Entity; 
  centity_t *v31; 
  bool result; 
  float xOffset; 
  float yOffset; 
  float v35; 
  float v36; 
  unsigned int outFirstUsablePartIndex; 
  tmat33_t<vec3_t> axis; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping_inline.h", 40, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( pool == CONST_CALLOUT_POOL_ID_REQUEST )
  {
    owner = view->origin.owner;
    if ( owner )
      v26 = owner - 1;
    else
      v26 = -1;
    x = view->origin.x;
    goto LABEL_38;
  }
  if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
  {
    v26 = view->origin.x;
    if ( pool != CONST_CALLOUT_POOL_ID_VEHICLE && (unsigned __int8)(pool - 4) > 2u )
    {
      v27 = 0.0;
LABEL_39:
      Entity = CG_GetEntity(localClientNum, v26);
      v31 = Entity;
      if ( (Entity->flags & 1) != 0 || BG_IsVehicleEntity(&Entity->nextState) || BG_IsCharacterEntity(&v31->nextState) )
      {
        CG_GetPoseOrigin(&v31->pose, outWorldOrigin);
        xOffset = (float)view->entity.xOffset;
        yOffset = (float)view->entity.yOffset;
        AnglesToAxis(&v31->pose.angles, &axis);
        v35 = xOffset * axis.m[0].v[1];
        v36 = yOffset * axis.m[1].v[1];
        v11 = v27 + outWorldOrigin->v[2];
        outWorldOrigin->v[0] = (float)((float)((float)(xOffset * axis.m[0].v[0]) + (float)(yOffset * axis.m[1].v[0])) * 4.0) + outWorldOrigin->v[0];
        outWorldOrigin->v[1] = (float)((float)(v35 + v36) * 4.0) + outWorldOrigin->v[1];
        goto LABEL_44;
      }
      goto LABEL_42;
    }
    x = view->origin.y;
LABEL_38:
    v27 = (float)x;
    goto LABEL_39;
  }
  if ( pool != CONST_CALLOUT_POOL_ID_WORLD )
  {
    if ( (unsigned __int8)(pool - 9) > 2u )
    {
      if ( (unsigned __int8)pool >= CONST_CALLOUT_POOL_ID_ENTITY_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping_inline.h", 96, ASSERT_TYPE_ASSERT, "(BG_CalloutMarkerPingPoolUsesOrigin( pool ))", (const char *)&queryFormat, "BG_CalloutMarkerPingPoolUsesOrigin( pool )") )
        __debugbreak();
      outWorldOrigin->v[0] = (float)view->origin.x * 2.0;
      outWorldOrigin->v[1] = (float)view->origin.y * 2.0;
      z = view->origin.z;
      if ( z == -12345 )
        v11 = FLOAT_60_0;
      else
        v11 = (float)z;
      goto LABEL_44;
    }
    index = view->scriptable.index;
    if ( ScriptableCl_GetInstanceInUse(localClientNum, view->scriptable.index) )
    {
      if ( !ScriptableCl_ObjectiveActiveForInstance(localClientNum, index) || (v14 = ScriptableCl_ObjectiveGetForInstance(localClientNum, index), (v15 = ScriptableCl_ObjectiveGet(localClientNum, v14, outWorldOrigin)) == NULL) || ((v15->state - 2) & 0xFD) != 0 )
      {
        LOBYTE(v16) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
        if ( v16 > 0x16 || (v17 = 5193728, !_bittest(&v17, v16)) )
        {
          v20 = v16 - 20 <= 1;
          outFirstUsablePartIndex = 0;
          if ( ScriptableCl_IsScriptableUsable(localClientNum, index, &outFirstUsablePartIndex) )
          {
            ScriptableCl_GetPartUsePosition(localClientNum, index, outFirstUsablePartIndex, outWorldOrigin);
          }
          else
          {
            InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, index);
            ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, index, outWorldOrigin);
          }
          _XMM0 = v20;
          __asm { vpcmpeqd xmm3, xmm0, xmm1 }
          _XMM1 = LODWORD(FLOAT_48_0);
          __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
          outWorldOrigin->v[2] = *(float *)&_XMM0 + outWorldOrigin->v[2];
          return 1;
        }
        v18 = ScriptableCl_GetInstanceCommonContext(localClientNum, index);
        ScriptableInstanceContextSecure::GetOrigin(v18, index, outWorldOrigin);
        ZOffset = CG_CalloutMarkerPing_GetZOffset(pool, view, localClientNum);
        v11 = *(float *)&ZOffset + outWorldOrigin->v[2];
        goto LABEL_44;
      }
      outWorldOrigin->v[2] = (float)v15->zOffset + outWorldOrigin->v[2];
      return 1;
    }
LABEL_42:
    *(_QWORD *)outWorldOrigin->v = 0i64;
    result = 0;
    outWorldOrigin->v[2] = 0.0;
    return result;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( view->origin.x > 0x1Fu )
    goto LABEL_42;
  v9 = view->origin.x;
  outWorldOrigin->v[0] = LocalClientGlobals->predictedPlayerState.objectives[v9].origin[0].v[0];
  outWorldOrigin->v[1] = LocalClientGlobals->predictedPlayerState.objectives[v9].origin[0].v[1];
  v10 = LocalClientGlobals->predictedPlayerState.objectives[v9].origin[0].v[2];
  outWorldOrigin->v[2] = v10;
  if ( ((LocalClientGlobals->predictedPlayerState.objectives[v9].state - 2) & 0xFD) != 0 )
  {
    v11 = v10 + 72.0;
LABEL_44:
    outWorldOrigin->v[2] = v11;
  }
  return 1;
}

