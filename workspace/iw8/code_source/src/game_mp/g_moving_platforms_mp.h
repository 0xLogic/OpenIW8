/*
==============
GMovingPlatformsMP::ActorUpdateEntityMoverTracking
==============
*/

void __fastcall GMovingPlatformsMP::ActorUpdateEntityMoverTracking(GMovingPlatformsMP *this, gentity_s *ent, gentity_s *parent)
{
  ?ActorUpdateEntityMoverTracking@GMovingPlatformsMP@@UEAAXPEAUgentity_s@@0@Z(this, ent, parent);
}

/*
==============
GMovingPlatformsMP::ShouldJumpBetweenPlatforms
==============
*/

int __fastcall GMovingPlatformsMP::ShouldJumpBetweenPlatforms(GMovingPlatformsMP *this)
{
  return ?ShouldJumpBetweenPlatforms@GMovingPlatformsMP@@UEAAHXZ(this);
}

/*
==============
GMovingPlatformsMP::ShouldForceStationaryMover
==============
*/

int __fastcall GMovingPlatformsMP::ShouldForceStationaryMover(GMovingPlatformsMP *this)
{
  return ?ShouldForceStationaryMover@GMovingPlatformsMP@@UEAAHXZ(this);
}

/*
==============
GMovingPlatformsMP::ShouldGrenadeLinkPartname
==============
*/

int __fastcall GMovingPlatformsMP::ShouldGrenadeLinkPartname(GMovingPlatformsMP *this)
{
  return ?ShouldGrenadeLinkPartname@GMovingPlatformsMP@@UEAAHXZ(this);
}

/*
==============
GMovingPlatformsMP::HandleTrigger
==============
*/

int __fastcall GMovingPlatformsMP::HandleTrigger(GMovingPlatformsMP *this, gentity_s *ent, gentity_s *hit, Bounds *box, int *result)
{
  return ?HandleTrigger@GMovingPlatformsMP@@UEAAHPEAUgentity_s@@0PEAUBounds@@PEAH@Z(this, ent, hit, box, result);
}

/*
==============
GMovingPlatformsMP::ActorUpdateEntityMoverTracking
==============
*/
void GMovingPlatformsMP::ActorUpdateEntityMoverTracking(GMovingPlatformsMP *this, gentity_s *ent, gentity_s *parent)
{
  ;
}

/*
==============
GMovingPlatformsMP::HandleTrigger
==============
*/
__int64 GMovingPlatformsMP::HandleTrigger(GMovingPlatformsMP *this, gentity_s *ent, gentity_s *hit, Bounds *box)
{
  return 0i64;
}

/*
==============
GMovingPlatformsMP::ShouldForceStationaryMover
==============
*/
__int64 GMovingPlatformsMP::ShouldForceStationaryMover(GMovingPlatformsMP *this)
{
  return 0i64;
}

/*
==============
GMovingPlatformsMP::ShouldGrenadeLinkPartname
==============
*/
__int64 GMovingPlatformsMP::ShouldGrenadeLinkPartname(GMovingPlatformsMP *this)
{
  return 1i64;
}

/*
==============
GMovingPlatformsMP::ShouldJumpBetweenPlatforms
==============
*/
__int64 GMovingPlatformsMP::ShouldJumpBetweenPlatforms(GMovingPlatformsMP *this)
{
  return 0i64;
}

