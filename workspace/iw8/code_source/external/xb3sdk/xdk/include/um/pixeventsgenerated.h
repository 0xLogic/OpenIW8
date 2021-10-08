/*
==============
PIXEndEventAllocate
==============
*/

void PIXEndEventAllocate(void)
{
  ?PIXEndEventAllocate@@YAXXZ();
}

/*
==============
PIXBeginEventAllocate
==============
*/

void __fastcall PIXBeginEventAllocate(unsigned __int64 color, const char *formatString)
{
  ?PIXBeginEventAllocate@@YAX_KPEBD@Z(color, formatString);
}

/*
==============
PIXSetMarkerAllocate
==============
*/

void __fastcall PIXSetMarkerAllocate(unsigned __int64 color, const char *formatString)
{
  ?PIXSetMarkerAllocate@@YAX_KPEBD@Z(color, formatString);
}

/*
==============
PIXBeginEventAllocate
==============
*/
void PIXBeginEventAllocate(unsigned __int64 color, const char *formatString)
{
  __int64 v4; 
  struct _TEB *v5; 
  __int64 *v6; 
  const unsigned __int64 *v7; 
  unsigned __int64 *v8; 
  unsigned __int64 *destination; 

  v4 = PIXEventsReplaceBlock_0(0i64);
  if ( v4 )
  {
    v5 = NtCurrentTeb();
    v6 = (__int64 *)v5->Reserved2[72];
    v7 = (const unsigned __int64 *)v5->Reserved2[71];
    if ( v6 < (__int64 *)v7 )
    {
      *v6 = (v4 << 20) | 0x800;
      v6[1] = color;
      destination = (unsigned __int64 *)(v6 + 2);
      PIXCopyEventArgument<char const *>(&destination, v7 + 62, formatString);
      v8 = destination;
      *destination = 1048448i64;
      v5->Reserved2[72] = v8;
    }
  }
}

/*
==============
PIXEndEventAllocate
==============
*/
void PIXEndEventAllocate(__int64 a1)
{
  __int64 v1; 
  struct _TEB *v2; 
  _QWORD *v3; 
  _QWORD *v4; 

  LOBYTE(a1) = 1;
  v1 = PIXEventsReplaceBlock_0(a1);
  if ( v1 )
  {
    v2 = NtCurrentTeb();
    v3 = v2->Reserved2[72];
    if ( v3 < v2->Reserved2[71] )
    {
      *v3 = v1 << 20;
      v4 = v3 + 1;
      *v4 = 1048448i64;
      v2->Reserved2[72] = v4;
    }
  }
}

/*
==============
PIXSetMarkerAllocate
==============
*/
void PIXSetMarkerAllocate(unsigned __int64 color, const char *formatString)
{
  __int64 v4; 
  struct _TEB *v5; 
  __int64 *v6; 
  const unsigned __int64 *v7; 
  unsigned __int64 *v8; 
  unsigned __int64 *destination; 

  v4 = PIXEventsReplaceBlock_0(0i64);
  if ( v4 )
  {
    v5 = NtCurrentTeb();
    v6 = (__int64 *)v5->Reserved2[72];
    v7 = (const unsigned __int64 *)v5->Reserved2[71];
    if ( v6 < (__int64 *)v7 )
    {
      *v6 = (v4 << 20) | 0x2000;
      v6[1] = color;
      destination = (unsigned __int64 *)(v6 + 2);
      PIXCopyEventArgument<char const *>(&destination, v7 + 62, formatString);
      v8 = destination;
      *destination = 1048448i64;
      v5->Reserved2[72] = v8;
    }
  }
}

