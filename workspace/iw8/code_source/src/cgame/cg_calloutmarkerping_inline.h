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
  unsigned int index; 
  unsigned __int8 v25; 
  const ObjectiveSettings *v26; 
  unsigned int v30; 
  int v31; 
  ScriptableInstanceContextSecure *v32; 
  bool v33; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int16 x; 
  unsigned __int8 owner; 
  centity_t *Entity; 
  centity_t *v50; 
  bool result; 
  unsigned int outFirstUsablePartIndex; 
  tmat33_t<vec3_t> axis; 

  _RBX = outWorldOrigin;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping_inline.h", 40, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  __asm { vmovaps [rsp+0D8h+var_58], xmm8 }
  if ( pool == CONST_CALLOUT_POOL_ID_REQUEST )
  {
    owner = view->origin.owner;
    if ( owner )
      x = owner - 1;
    else
      x = -1;
    goto LABEL_37;
  }
  if ( pool == CONST_CALLOUT_POOL_ID_VEHICLE || (unsigned __int8)(pool - 4) <= 2u )
  {
    x = view->origin.x;
    if ( pool != CONST_CALLOUT_POOL_ID_VEHICLE && (unsigned __int8)(pool - 4) > 2u )
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
LABEL_38:
      Entity = CG_GetEntity(localClientNum, x);
      v50 = Entity;
      if ( (Entity->flags & 1) != 0 || BG_IsVehicleEntity(&Entity->nextState) || BG_IsCharacterEntity(&v50->nextState) )
      {
        __asm
        {
          vmovaps [rsp+0D8h+var_38], xmm6
          vmovaps [rsp+0D8h+var_48], xmm7
        }
        CG_GetPoseOrigin(&v50->pose, _RBX);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
          vxorps  xmm7, xmm7, xmm7
          vcvtsi2ss xmm7, xmm7, eax
        }
        AnglesToAxis(&v50->pose.angles, &axis);
        __asm
        {
          vmulss  xmm3, xmm6, dword ptr [rsp+0D8h+axis]
          vmulss  xmm2, xmm7, dword ptr [rsp+0D8h+axis+0Ch]
          vaddss  xmm0, xmm3, xmm2
          vmulss  xmm0, xmm0, cs:__real@40800000
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmulss  xmm3, xmm6, dword ptr [rsp+0D8h+axis+4]
          vmulss  xmm2, xmm7, dword ptr [rsp+0D8h+axis+10h]
          vmovaps xmm7, [rsp+0D8h+var_48]
          vmovaps xmm6, [rsp+0D8h+var_38]
          vaddss  xmm0, xmm3, xmm2
          vmulss  xmm3, xmm0, cs:__real@40800000
          vaddss  xmm0, xmm8, dword ptr [rbx+8]
          vmovss  dword ptr [rbx], xmm1
          vaddss  xmm1, xmm3, dword ptr [rbx+4]
          vmovss  dword ptr [rbx+4], xmm1
        }
        goto LABEL_43;
      }
      goto LABEL_41;
    }
LABEL_37:
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, eax
    }
    goto LABEL_38;
  }
  if ( pool == CONST_CALLOUT_POOL_ID_WORLD )
  {
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    if ( view->origin.x <= 0x1Fu )
    {
      _RDX = view->origin.x;
      _RBX->v[0] = _RAX->predictedPlayerState.objectives[_RDX].origin[0].v[0];
      _RBX->v[1] = _RAX->predictedPlayerState.objectives[_RDX].origin[0].v[1];
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+rax+12A0h]
        vmovss  dword ptr [rbx+8], xmm0
      }
      if ( ((_RAX->predictedPlayerState.objectives[_RDX].state - 2) & 0xFD) != 0 )
      {
        __asm { vaddss  xmm0, xmm0, cs:__real@42900000 }
LABEL_43:
        __asm { vmovss  dword ptr [rbx+8], xmm0 }
      }
LABEL_44:
      result = 1;
      goto LABEL_45;
    }
  }
  else
  {
    if ( (unsigned __int8)(pool - 9) > 2u )
    {
      if ( (unsigned __int8)pool >= CONST_CALLOUT_POOL_ID_ENTITY_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_calloutmarkerping_inline.h", 96, ASSERT_TYPE_ASSERT, "(BG_CalloutMarkerPingPoolUsesOrigin( pool ))", (const char *)&queryFormat, "BG_CalloutMarkerPingPoolUsesOrigin( pool )") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@40000000
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, cs:__real@40000000
        vmovss  dword ptr [rbx+4], xmm0
      }
      if ( view->origin.z == -12345 )
      {
        __asm { vmovss  xmm0, cs:__real@42700000 }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
        }
      }
      goto LABEL_43;
    }
    index = view->scriptable.index;
    if ( ScriptableCl_GetInstanceInUse(localClientNum, view->scriptable.index) )
    {
      if ( !ScriptableCl_ObjectiveActiveForInstance(localClientNum, index) || (v25 = ScriptableCl_ObjectiveGetForInstance(localClientNum, index), (v26 = ScriptableCl_ObjectiveGet(localClientNum, v25, _RBX)) == NULL) || ((v26->state - 2) & 0xFD) != 0 )
      {
        LOBYTE(v30) = CG_CalloutMarkerPing_ClassifyPing(localClientNum, pool, view);
        if ( v30 > 0x16 || (v31 = 5193728, !_bittest(&v31, v30)) )
        {
          v33 = v30 - 20 <= 1;
          _EDI = 0;
          outFirstUsablePartIndex = 0;
          if ( ScriptableCl_IsScriptableUsable(localClientNum, index, &outFirstUsablePartIndex) )
          {
            ScriptableCl_GetPartUsePosition(localClientNum, index, outFirstUsablePartIndex, _RBX);
            __asm { vmovss  xmm2, cs:__real@42000000 }
          }
          else
          {
            InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, index);
            ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, index, _RBX);
            __asm { vmovss  xmm2, cs:__real@42900000 }
          }
          __asm { vmovd   xmm1, edi }
          _EAX = v33;
          __asm
          {
            vmovd   xmm0, eax
            vpcmpeqd xmm3, xmm0, xmm1
            vmovss  xmm1, cs:__real@42400000
            vblendvps xmm0, xmm1, xmm2, xmm3
            vaddss  xmm2, xmm0, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm2
          }
          goto LABEL_44;
        }
        v32 = ScriptableCl_GetInstanceCommonContext(localClientNum, index);
        ScriptableInstanceContextSecure::GetOrigin(v32, index, _RBX);
        *(double *)&_XMM0 = CG_CalloutMarkerPing_GetZOffset(pool, view, localClientNum);
        __asm { vaddss  xmm0, xmm0, dword ptr [rbx+8] }
        goto LABEL_43;
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+4]
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
      goto LABEL_44;
    }
  }
LABEL_41:
  *(_QWORD *)_RBX->v = 0i64;
  result = 0;
  _RBX->v[2] = 0.0;
LABEL_45:
  __asm { vmovaps xmm8, [rsp+0D8h+var_58] }
  return result;
}

