/*
==============
DLogEvent_StoreItemBrowse::EndItemView
==============
*/

void __fastcall DLogEvent_StoreItemBrowse::EndItemView(DLogEvent_StoreItemBrowse *this, const unsigned int itemId)
{
  ?EndItemView@DLogEvent_StoreItemBrowse@@QEAAXI@Z(this, itemId);
}

/*
==============
DLogEvent_StoreItemBrowse::ResetData
==============
*/

void __fastcall DLogEvent_StoreItemBrowse::ResetData(DLogEvent_StoreItemBrowse *this)
{
  ?ResetData@DLogEvent_StoreItemBrowse@@MEAAXXZ(this);
}

/*
==============
DLogEvent_StoreItemBrowse::WriteEvent
==============
*/

bool __fastcall DLogEvent_StoreItemBrowse::WriteEvent(DLogEvent_StoreItemBrowse *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_StoreItemBrowse@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_StoreItemBrowse::SetStoreSources
==============
*/

void __fastcall DLogEvent_StoreItemBrowse::SetStoreSources(DLogEvent_StoreItemBrowse *this, const char *storeSource, const char *storeActionSource)
{
  ?SetStoreSources@DLogEvent_StoreItemBrowse@@QEAAXPEBD0@Z(this, storeSource, storeActionSource);
}

/*
==============
DLogEvent_StoreItemBrowse::BeginItemView
==============
*/

void __fastcall DLogEvent_StoreItemBrowse::BeginItemView(DLogEvent_StoreItemBrowse *this, const unsigned int itemId)
{
  ?BeginItemView@DLogEvent_StoreItemBrowse@@QEAAXI@Z(this, itemId);
}

/*
==============
DLogEvent_StoreItemBrowse::BeginItemView
==============
*/
void DLogEvent_StoreItemBrowse::BeginItemView(DLogEvent_StoreItemBrowse *this, const unsigned int itemId)
{
  if ( this->m_viewCount >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_event_telemetry_store_item_browse.cpp", 27, ASSERT_TYPE_ASSERT, "(m_viewCount < STORE_VIEWS_MAX)", (const char *)&queryFormat, "m_viewCount < STORE_VIEWS_MAX") )
    __debugbreak();
  this->views[this->m_viewCount].item_id = itemId;
  this->views[this->m_viewCount].duration_ms = Sys_Milliseconds();
}

/*
==============
DLogEvent_StoreItemBrowse::EndItemView
==============
*/
void DLogEvent_StoreItemBrowse::EndItemView(DLogEvent_StoreItemBrowse *this, const unsigned int itemId)
{
  __int64 m_viewCount; 
  unsigned int v4; 
  char *fmt; 

  LODWORD(m_viewCount) = itemId;
  if ( this->m_viewCount >= 0xAu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_event_telemetry_store_item_browse.cpp", 36, ASSERT_TYPE_ASSERT, "(m_viewCount < STORE_VIEWS_MAX)", (const char *)&queryFormat, "m_viewCount < STORE_VIEWS_MAX") )
    __debugbreak();
  if ( (_DWORD)m_viewCount == this->views[this->m_viewCount].item_id )
  {
    m_viewCount = this->m_viewCount;
    v4 = Sys_Milliseconds() - this->views[m_viewCount].duration_ms;
  }
  else
  {
    LODWORD(fmt) = this->views[this->m_viewCount].item_id;
    Com_PrintWarning(25, "%s being called on itemId(%u), but thought it was currently looking at itemId(%u).\n", "DLogEvent_StoreItemBrowse::EndItemView", (unsigned int)m_viewCount, fmt);
    LOBYTE(m_viewCount) = this->m_viewCount;
    v4 = 0;
  }
  this->views[(unsigned __int8)m_viewCount].duration_ms = v4;
  if ( ++this->m_viewCount == 10 )
    DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_StoreItemBrowse::ResetData
==============
*/
void DLogEvent_StoreItemBrowse::ResetData(DLogEvent_StoreItemBrowse *this)
{
  this->m_viewCount = 0;
}

/*
==============
DLogEvent_StoreItemBrowse::SetStoreSources
==============
*/
void DLogEvent_StoreItemBrowse::SetStoreSources(DLogEvent_StoreItemBrowse *this, const char *storeSource, const char *storeActionSource)
{
  Core_strcpy(this->source, 0x80ui64, storeSource);
  Core_strcpy(this->action_source, 0x80ui64, storeActionSource);
}

/*
==============
DLogEvent_StoreItemBrowse::WriteEvent
==============
*/
bool DLogEvent_StoreItemBrowse::WriteEvent(DLogEvent_StoreItemBrowse *this, DLogContext *context)
{
  unsigned __int8 ActiveGameMode; 
  bool result; 
  int v6; 
  DLogEvent_StoreItemBrowse::View *views; 
  unsigned int duration_ms; 
  unsigned int item_id; 
  bool v10; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
LABEL_3:
    result = 0;
    goto LABEL_4;
  }
  v10 = DLog_BeginEvent(context, "dlog_event_store_item_browse");
  context->autoEndEvent = 1;
  if ( !v10 || !DLog_String(context, "source", this->source, 0) || !DLog_String(context, "action_source", this->action_source, 0) || !DLog_UInt8(context, "game_mode", ActiveGameMode) || !DLog_UInt8(context, "region", 0) )
    goto LABEL_3;
  result = 1;
LABEL_4:
  v6 = 0;
  if ( this->m_viewCount )
  {
    views = this->views;
    do
    {
      if ( result )
      {
        duration_ms = views->duration_ms;
        item_id = views->item_id;
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(context, "views") && DLog_UInt32(context, "item_id", item_id) && DLog_UInt32(context, "duration_ms", duration_ms) && DLog_EndRow(context) )
          {
            result = 1;
            goto LABEL_10;
          }
        }
        else
        {
          context->error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      result = 0;
LABEL_10:
      ++v6;
      ++views;
    }
    while ( v6 < this->m_viewCount );
  }
  return result;
}

