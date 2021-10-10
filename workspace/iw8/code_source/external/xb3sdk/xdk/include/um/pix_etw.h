/*
==============
McGenControlCallbackV2
==============
*/
void McGenControlCallbackV2(const _GUID *SourceId, unsigned int ControlCode, unsigned __int8 Level, unsigned __int64 MatchAnyKeyword, unsigned __int64 MatchAllKeyword, _EVENT_FILTER_DESCRIPTOR *FilterData, void *CallbackContext)
{
  unsigned int v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  bool v10; 
  int v11; 
  int *v12; 
  int v13; 
  int v14; 
  unsigned __int16 v15; 

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        v7 = 0;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v7 < *((unsigned __int16 *)CallbackContext + 21); ++v7 )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          v10 = 0;
          if ( *(_BYTE *)(v7 + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8 )
          {
            v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8i64 * v7);
            if ( !v9 || (v9 & *((_QWORD *)CallbackContext + 2)) != 0 && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
              v10 = 1;
          }
          v11 = 1 << (v7 & 0x1F);
          v12 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v7 >> 5));
          v13 = *v12;
          if ( v10 )
            v14 = v13 | v11;
          else
            v14 = v13 & ~v11;
          *v12 = v14;
        }
      }
    }
    else
    {
      v15 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0i64;
      *((_QWORD *)CallbackContext + 3) = 0i64;
      if ( v15 )
        memset_0(*((void **)CallbackContext + 6), 0, 4i64 * ((v15 - 1) / 32 + 1));
    }
  }
}

/*
==============
McGenEventRegister
==============
*/
ULONG McGenEventRegister(const _GUID *ProviderId, void (*EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *), void *CallbackContext, unsigned __int64 *RegHandle)
{
  if ( *RegHandle )
    return 0;
  else
    return EventRegister(ProviderId, EnableCallback, CallbackContext, RegHandle);
}

/*
==============
McGenEventUnregister
==============
*/
ULONG McGenEventUnregister(unsigned __int64 *RegHandle)
{
  unsigned __int64 v2; 
  ULONG result; 

  v2 = *RegHandle;
  if ( !v2 )
    return 0;
  result = EventUnregister(v2);
  *RegHandle = 0i64;
  return result;
}

/*
==============
McGenEventWriteUM
==============
*/
ULONG McGenEventWriteUM(_MCGEN_TRACE_CONTEXT *Context, const _EVENT_DESCRIPTOR *Descriptor, unsigned int EventDataCount, _EVENT_DATA_DESCRIPTOR *EventData)
{
  unsigned __int16 *Logger; 
  _EVENT_DATA_DESCRIPTOR *v5; 
  bool v6; 
  char v7; 
  _EVENT_DESCRIPTOR v8; 
  _EVENT_DESCRIPTOR EventDescriptor; 

  Logger = (unsigned __int16 *)Context->Logger;
  if ( Logger )
  {
    EventData->Ptr = (unsigned __int64)Logger;
    v7 = 0;
    EventData->Size = *Logger;
    EventData->Reserved = 2;
  }
  else
  {
    v5 = EventData + 1;
    v6 = EventDataCount-- == 1;
    EventData = NULL;
    v7 = 12;
    if ( !v6 )
      EventData = v5;
  }
  if ( Descriptor->Channel == v7 )
  {
    v8 = *Descriptor;
    Descriptor = &EventDescriptor;
    EventDescriptor = v8;
    EventDescriptor.Channel = Logger != NULL ? 0xC : 0;
  }
  return EventWrite(Context->RegistrationHandle, Descriptor, EventDataCount, EventData);
}

/*
==============
McTemplateU0hpxx
==============
*/
unsigned int McTemplateU0hpxx(_MCGEN_TRACE_CONTEXT *Context, const _EVENT_DESCRIPTOR *Descriptor, const unsigned __int16 _Arg0, const void *_Arg1, unsigned __int64 _Arg2, unsigned __int64 _Arg3)
{
  _EVENT_DATA_DESCRIPTOR v7; 
  unsigned __int16 *v8; 
  __int64 v9; 
  const void **v10; 
  __int64 v11; 
  unsigned __int64 *p_Arg2; 
  __int64 v13; 
  unsigned __int64 *p_Arg3; 
  __int64 v15; 
  unsigned __int16 v16; 
  const void *v17; 

  v17 = _Arg1;
  v16 = _Arg0;
  v9 = 2i64;
  v8 = &v16;
  v11 = 8i64;
  v10 = &v17;
  v13 = 8i64;
  p_Arg2 = &_Arg2;
  p_Arg3 = &_Arg3;
  v15 = 8i64;
  return j_McGenEventWriteUM(Context, Descriptor, 5u, &v7);
}

