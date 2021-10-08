/*
==============
BgTrajectory::IsAnimatedTrajectory
==============
*/

bool __fastcall BgTrajectory::IsAnimatedTrajectory(const trajectory_t_secure *tr)
{
  return ?IsAnimatedTrajectory@BgTrajectory@@SA_NPEBUtrajectory_t_secure@@@Z(tr);
}

/*
==============
BgTrajectory::IsAnimatedTrajectory
==============
*/
char BgTrajectory::IsAnimatedTrajectory(const trajectory_t_secure *tr)
{
  if ( tr->trType != TR_ANIMATED_MOVER )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  return 1;
}

