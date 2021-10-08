/*
==============
CG_UsedDObjCalcPose
==============
*/

void __fastcall CG_UsedDObjCalcPose(const cpose_t *pose)
{
  ?CG_UsedDObjCalcPose@@YAXPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_CullIn
==============
*/

void __fastcall CG_CullIn(const cpose_t *pose)
{
  ?CG_CullIn@@YAXPEBUcpose_t@@@Z(pose);
}

/*
==============
CG_CullIn
==============
*/
void CG_CullIn(const cpose_t *pose)
{
  if ( pose )
  {
    pose->cullIn = 2;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose_utils.cpp", 17, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    MEMORY[1] = 2;
  }
}

/*
==============
CG_UsedDObjCalcPose
==============
*/
void CG_UsedDObjCalcPose(const cpose_t *pose)
{
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose_utils.cpp", 7, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !pose->cullIn )
    pose->cullIn = 1;
}

