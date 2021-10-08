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

  if ( !pInfo->prone )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    return *(float *)&_XMM0;
  }
  iProneTrans = pInfo->iProneTrans;
  if ( !iProneTrans )
  {
LABEL_9:
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    return *(float *)&_XMM0;
  }
  iProneTime = pInfo->iProneTime;
  if ( iProneTrans >= 0 )
  {
    if ( iProneTime + iProneTrans >= iCurrentTime )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edx
        vcvtsi2ss xmm0, xmm0, r8d
        vdivss  xmm0, xmm1, xmm0
      }
      return *(float *)&_XMM0;
    }
    pInfo->iProneTrans = 0;
    goto LABEL_9;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( iProneTime - iProneTrans >= iCurrentTime )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
      vcvtsi2ss xmm0, xmm0, r8d
      vdivss  xmm2, xmm1, xmm0
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm2
    }
  }
  else
  {
    pInfo->prone = 0;
  }
  return *(float *)&_XMM0;
}

