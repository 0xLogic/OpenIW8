/*
==============
Trajectory_GetTrBase
==============
*/

void __fastcall Trajectory_GetTrBase(const trajectory_t_secure *traj, vec3_t *trBase)
{
  ?Trajectory_GetTrBase@@YAXPEBUtrajectory_t_secure@@AEATvec3_t@@@Z(traj, trBase);
}

/*
==============
Trajectory_SetTrBase
==============
*/

void __fastcall Trajectory_SetTrBase(trajectory_t_secure *traj, const vec3_t *trBase)
{
  ?Trajectory_SetTrBase@@YAXPEAUtrajectory_t_secure@@AEBTvec3_t@@@Z(traj, trBase);
}

/*
==============
Trajectory_GetTrBase
==============
*/
void Trajectory_GetTrBase(const trajectory_t_secure *traj, vec3_t *trBase)
{
  float v4; 
  float v5; 
  float v6; 
  vec3_t *v10; 

  _RBX = trBase;
  if ( !traj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( traj->trType == TR_LINEAR_STOP_SECURE )
  {
    v4 = traj->trBase.v[1];
    v5 = traj->trBase.v[0];
    v6 = traj->trBase.v[2];
    v10 = _RBX;
    LODWORD(_RBX->v[2]) = LODWORD(v4) ^ s_trbase_aab_Z ^ LODWORD(v6);
    LODWORD(_RBX->v[1]) = LODWORD(v5) ^ LODWORD(v4) ^ s_trbase_aab_Y;
    LODWORD(_RBX->v[0]) = LODWORD(v5) ^ ~s_trbase_aab_X;
    __asm { vmovss  xmm0, dword ptr [rbx] }
    memset(&v10, 0, sizeof(v10));
    __asm { vmovss  dword ptr [rsp+38h+arg_0], xmm0 }
    if ( ((unsigned int)v10 & 0x7F800000) == 2139095040 )
      goto LABEL_13;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+38h+arg_0], xmm0
    }
    if ( ((unsigned int)v10 & 0x7F800000) == 2139095040 )
      goto LABEL_13;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+38h+arg_0], xmm0
    }
    if ( ((unsigned int)v10 & 0x7F800000) == 2139095040 )
    {
LABEL_13:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    _RBX->v[0] = traj->trBase.v[0];
    _RBX->v[1] = traj->trBase.v[1];
    _RBX->v[2] = traj->trBase.v[2];
  }
}

/*
==============
Trajectory_SetTrBase
==============
*/
void Trajectory_SetTrBase(trajectory_t_secure *traj, const vec3_t *trBase)
{
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 

  _RBX = trBase;
  _RDI = traj;
  if ( !traj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx] }
  if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
  {
    __asm { vmovss  dword ptr [rsp+38h+arg_0], xmm0 }
    if ( (v10 & 0x7F800000) == 2139095040 )
      goto LABEL_14;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+38h+arg_0], xmm0
    }
    if ( (v10 & 0x7F800000) == 2139095040 )
      goto LABEL_14;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+38h+arg_0], xmm0
    }
    if ( (v10 & 0x7F800000) == 2139095040 )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v7 = LODWORD(_RBX->v[0]) ^ ~s_trbase_aab_X;
    v8 = v7 ^ s_trbase_aab_Y ^ LODWORD(_RBX->v[1]);
    v9 = v8 ^ s_trbase_aab_Z ^ LODWORD(_RBX->v[2]);
    LODWORD(_RDI->trBase.v[1]) = v8;
    LODWORD(_RDI->trBase.v[2]) = v9;
    LODWORD(_RDI->trBase.v[0]) = v7;
    memset(&v10, 0, sizeof(v10));
  }
  else
  {
    __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
    _RDI->trBase.v[1] = _RBX->v[1];
    _RDI->trBase.v[2] = _RBX->v[2];
  }
}

