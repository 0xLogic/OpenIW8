/*
==============
SNDL_GetActiveListeners
==============
*/

void __fastcall SNDL_GetActiveListeners(unsigned int *count, vec3_t *listeners)
{
  ?SNDL_GetActiveListeners@@YAXPEAIPEATvec3_t@@@Z(count, listeners);
}

/*
==============
SNDL_AliasName
==============
*/

void __fastcall SNDL_AliasName(const char *name, unsigned int id)
{
  ?SNDL_AliasName@@YAXPEBDI@Z(name, id);
}

/*
==============
SNDL_AliasName
==============
*/

void __fastcall SNDL_AliasName(const char *name, unsigned int id)
{
  SND_LogRegisterString(name, id);
}

/*
==============
SNDL_GetActiveListeners
==============
*/
void SNDL_GetActiveListeners(unsigned int *count, vec3_t *listeners)
{
  unsigned __int64 v3; 
  float *v5; 
  unsigned int i; 
  __int64 v7; 
  __int64 v8; 

  v3 = (unsigned __int64)&g_snd.listenerFence & 3;
  do
  {
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
      __debugbreak();
  }
  while ( _InterlockedCompareExchange(&g_snd.listenerFence, 1, 0) == 1 );
  v5 = &g_snd.listeners[0].orient.origin.v[2];
  for ( i = 0; i < 2; i += 2 )
  {
    if ( *((_BYTE *)v5 + 112) )
    {
      v7 = *count;
      listeners[v7].v[0] = *(v5 - 2);
      listeners[v7].v[1] = *(v5 - 1);
      listeners[v7].v[2] = *v5;
      ++*count;
    }
    if ( *((_BYTE *)v5 + 240) )
    {
      v8 = *count;
      listeners[v8].v[0] = v5[30];
      listeners[v8].v[1] = v5[31];
      listeners[v8].v[2] = v5[32];
      ++*count;
    }
    v5 += 64;
  }
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_snd.listenerFence) )
    __debugbreak();
  _InterlockedExchange(&g_snd.listenerFence, 0);
}

