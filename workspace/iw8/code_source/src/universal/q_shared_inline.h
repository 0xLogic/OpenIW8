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
  float v7; 
  vec3_t *v8; 

  if ( !traj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( traj->trType == TR_LINEAR_STOP_SECURE )
  {
    v4 = traj->trBase.v[1];
    v5 = traj->trBase.v[0];
    v6 = traj->trBase.v[2];
    v8 = trBase;
    LODWORD(trBase->v[2]) = LODWORD(v4) ^ s_trbase_aab_Z ^ LODWORD(v6);
    LODWORD(trBase->v[1]) = LODWORD(v5) ^ LODWORD(v4) ^ s_trbase_aab_Y;
    LODWORD(trBase->v[0]) = LODWORD(v5) ^ ~s_trbase_aab_X;
    v7 = trBase->v[0];
    memset(&v8, 0, sizeof(v8));
    *(float *)&v8 = v7;
    if ( (LODWORD(v7) & 0x7F800000) == 2139095040 || (*(float *)&v8 = trBase->v[1], ((unsigned int)v8 & 0x7F800000) == 2139095040) || (*(float *)&v8 = trBase->v[2], ((unsigned int)v8 & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    trBase->v[0] = traj->trBase.v[0];
    trBase->v[1] = traj->trBase.v[1];
    trBase->v[2] = traj->trBase.v[2];
  }
}

/*
==============
Trajectory_SetTrBase
==============
*/
void Trajectory_SetTrBase(trajectory_t_secure *traj, const vec3_t *trBase)
{
  float v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 

  if ( !traj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  v4 = trBase->v[0];
  if ( traj->trType == TR_LINEAR_STOP_SECURE )
  {
    *(float *)&v8 = trBase->v[0];
    if ( (LODWORD(v4) & 0x7F800000) == 2139095040 || (*(float *)&v8 = trBase->v[1], (v8 & 0x7F800000) == 2139095040) || (*(float *)&v8 = trBase->v[2], (v8 & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v5 = LODWORD(trBase->v[0]) ^ ~s_trbase_aab_X;
    v6 = v5 ^ s_trbase_aab_Y ^ LODWORD(trBase->v[1]);
    v7 = v6 ^ s_trbase_aab_Z ^ LODWORD(trBase->v[2]);
    LODWORD(traj->trBase.v[1]) = v6;
    LODWORD(traj->trBase.v[2]) = v7;
    LODWORD(traj->trBase.v[0]) = v5;
    memset(&v8, 0, sizeof(v8));
  }
  else
  {
    traj->trBase.v[0] = v4;
    traj->trBase.v[1] = trBase->v[1];
    traj->trBase.v[2] = trBase->v[2];
  }
}

