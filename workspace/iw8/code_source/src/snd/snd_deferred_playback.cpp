/*
==============
SND_AddDeferredPlayback
==============
*/

bool __fastcall SND_AddDeferredPlayback(const SndPlayParams *playParams)
{
  return ?SND_AddDeferredPlayback@@YA_NAEBUSndPlayParams@@@Z(playParams);
}

/*
==============
SND_DeferredPlaybackWorker
==============
*/

void __fastcall SND_DeferredPlaybackWorker(const void *const cmdInfo)
{
  ?SND_DeferredPlaybackWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_DeferredPlaybackInit
==============
*/

void SND_DeferredPlaybackInit(void)
{
  ?SND_DeferredPlaybackInit@@YAXXZ();
}

/*
==============
SND_AddDeferredPlayback
==============
*/
__int64 SND_AddDeferredPlayback(const SndPlayParams *playParams)
{
  unsigned __int8 v2; 
  unsigned __int64 v3; 
  __m256i v4; 
  __m256i *v5; 

  if ( !playParams->aliasList && !playParams->aliasId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_deferred_playback.cpp", 35, ASSERT_TYPE_ASSERT, "(playParams.aliasList || playParams.aliasId != static_cast< SndStringHash >( 0 ))", (const char *)&queryFormat, "playParams.aliasList || playParams.aliasId != SND_INVALID_HASH") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_AddDeferredPlayback");
  v2 = 0;
  v3 = (unsigned __int64)s_deferredPlaybackFence & 3;
  do
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_deferredPlaybackFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(s_deferredPlaybackFence, 1, 0) == 1 );
  if ( (unsigned __int64)s_numdeferredPlaybacks < 0x100 )
  {
    v4 = *(__m256i *)&playParams->aliasList;
    v2 = 1;
    v5 = (__m256i *)&s_deferredPlaybacks[(unsigned __int64)(unsigned __int8)(s_numdeferredPlaybacks++ + s_deferredPlaybackReadHead)];
    *v5 = v4;
    v5[1] = *(__m256i *)&playParams->sndEnt;
    v5[2] = *(__m256i *)&playParams->system;
    v5[3] = *(__m256i *)&playParams->startOffsetFraction;
  }
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_deferredPlaybackFence) )
    __debugbreak();
  _InterlockedExchange(s_deferredPlaybackFence, 0);
  Sys_ProfEndNamedEvent();
  return v2;
}

/*
==============
SND_DeferredPlaybackInit
==============
*/
void SND_DeferredPlaybackInit(void)
{
  s_numdeferredPlaybacks = 0;
  s_deferredPlaybackReadHead = 0;
}

/*
==============
SND_DeferredPlaybackWorker
==============
*/
void SND_DeferredPlaybackWorker(const void *const cmdInfo)
{
  unsigned __int64 v1; 
  __m256i *v2; 
  __m256i v3; 
  __m256i v4; 
  __m256i v5; 
  SndPlayParams inParams; 

  if ( SND_Active() )
  {
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_UpdateDeferredPlayback");
    if ( s_numdeferredPlaybacks > 0 )
    {
      v1 = (unsigned __int64)s_deferredPlaybackFence & 3;
      while ( 1 )
      {
        if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_deferredPlaybackFence) )
          __debugbreak();
        if ( _InterlockedCompareExchange(s_deferredPlaybackFence, 1, 0) != 1 )
        {
          --s_numdeferredPlaybacks;
          v2 = (__m256i *)&s_deferredPlaybacks[(__int64)s_deferredPlaybackReadHead];
          v3 = v2[1];
          *(__m256i *)&inParams.aliasList = *v2;
          v4 = v2[2];
          *(__m256i *)&inParams.sndEnt = v3;
          v5 = v2[3];
          s_deferredPlaybackReadHead = (unsigned __int8)(s_deferredPlaybackReadHead + 1);
          *(__m256i *)&inParams.system = v4;
          *(__m256i *)&inParams.startOffsetFraction = v5;
          if ( v1 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_deferredPlaybackFence) )
              __debugbreak();
          }
          _InterlockedExchange(s_deferredPlaybackFence, 0);
          SND_PlaySoundAliasFromParams(&inParams, 0);
          if ( s_numdeferredPlaybacks <= 0 )
            break;
        }
      }
    }
    SND_UpdateLoopingSounds(0);
    Sys_ProfEndNamedEvent();
  }
}

