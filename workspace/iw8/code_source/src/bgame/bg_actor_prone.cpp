/*
==============
BG_ActorIsProne
==============
*/

int __fastcall BG_ActorIsProne(actor_prone_info_t *pInfo, int iCurrentTime)
{
  return ?BG_ActorIsProne@@YAHPEAUactor_prone_info_t@@H@Z(pInfo, iCurrentTime);
}

/*
==============
BG_ActorGoalIsProne
==============
*/

int __fastcall BG_ActorGoalIsProne(actor_prone_info_t *pInfo)
{
  return ?BG_ActorGoalIsProne@@YAHPEAUactor_prone_info_t@@@Z(pInfo);
}

/*
==============
BG_GetActorProneFraction
==============
*/

double __fastcall BG_GetActorProneFraction(actor_prone_info_t *pInfo, int iCurrentTime)
{
  double result; 

  *(float *)&result = ?BG_GetActorProneFraction@@YAMPEAUactor_prone_info_t@@H@Z(pInfo, iCurrentTime);
  return result;
}

/*
==============
BG_ActorGoalIsProne
==============
*/
_BOOL8 BG_ActorGoalIsProne(actor_prone_info_t *pInfo)
{
  return pInfo->prone && !pInfo->bCorpseOrientation && !pInfo->orientPitch && pInfo->iProneTrans >= 0;
}

/*
==============
BG_ActorIsProne
==============
*/
__int64 BG_ActorIsProne(actor_prone_info_t *pInfo, int iCurrentTime)
{
  int iProneTrans; 
  int iProneTime; 

  if ( !pInfo->prone || pInfo->bCorpseOrientation || pInfo->orientPitch )
    return 0i64;
  iProneTrans = pInfo->iProneTrans;
  if ( iProneTrans )
  {
    iProneTime = pInfo->iProneTime;
    if ( iProneTrans >= 0 )
    {
      if ( iProneTime + iProneTrans < iCurrentTime )
        pInfo->iProneTrans = 0;
    }
    else if ( iProneTime - iProneTrans < iCurrentTime )
    {
      pInfo->prone = 0;
      return 0i64;
    }
  }
  return 1i64;
}

/*
==============
BG_GetActorProneFraction
==============
*/
float BG_GetActorProneFraction(actor_prone_info_t *pInfo, int iCurrentTime)
{
  int iProneTrans; 
  int iProneTime; 
  float result; 

  if ( !pInfo->prone )
    return 0.0;
  iProneTrans = pInfo->iProneTrans;
  if ( !iProneTrans )
    return FLOAT_1_0;
  iProneTime = pInfo->iProneTime;
  if ( iProneTrans >= 0 )
  {
    if ( iProneTime + iProneTrans >= iCurrentTime )
      return (float)(iCurrentTime - iProneTime) / (float)iProneTrans;
    pInfo->iProneTrans = 0;
    return FLOAT_1_0;
  }
  result = 0.0;
  if ( iProneTime - iProneTrans >= iCurrentTime )
    return 1.0 - (float)((float)(iCurrentTime - iProneTime) / (float)-iProneTrans);
  pInfo->prone = 0;
  return result;
}

