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

  _RDI = playParams;
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
    __asm { vmovups ymm0, ymmword ptr [rdi] }
    v2 = 1;
    _RAX = &s_deferredPlaybacks[(unsigned __int64)(unsigned __int8)(s_numdeferredPlaybacks++ + s_deferredPlaybackReadHead)];
    __asm
    {
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rax+20h], ymm1
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rax+60h], ymm1
    }
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
          _RAX = &s_deferredPlaybacks[(__int64)s_deferredPlaybackReadHead];
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymm1, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rsp+0C8h+inParams.aliasList], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [rsp+0C8h+inParams.sndEnt], ymm1
            vmovups ymm1, ymmword ptr [rax+60h]
          }
          s_deferredPlaybackReadHead = (unsigned __int8)(s_deferredPlaybackReadHead + 1);
          __asm
          {
            vmovups ymmword ptr [rsp+0C8h+inParams.system], ymm0
            vmovups ymmword ptr [rsp+0C8h+inParams.startOffsetFraction], ymm1
          }
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

