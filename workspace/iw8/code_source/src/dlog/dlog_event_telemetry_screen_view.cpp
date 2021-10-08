/*
==============
DLogEvent_ScreenView::AddScreenView
==============
*/

void __fastcall DLogEvent_ScreenView::AddScreenView(DLogEvent_ScreenView *this, const char *name, const unsigned int duration, const bool isIntermission)
{
  ?AddScreenView@DLogEvent_ScreenView@@QEAAXPEBDI_N@Z(this, name, duration, isIntermission);
}

/*
==============
DLogEvent_ScreenView::WriteEvent
==============
*/

bool __fastcall DLogEvent_ScreenView::WriteEvent(DLogEvent_ScreenView *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_ScreenView@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_ScreenView::AddSurveyData
==============
*/

void __fastcall DLogEvent_ScreenView::AddSurveyData(DLogEvent_ScreenView *this, const unsigned int buttonOrder, const unsigned int buttonSelection, const bool isQuitter, const unsigned __int64 matchId)
{
  ?AddSurveyData@DLogEvent_ScreenView@@QEAAXII_N_K@Z(this, buttonOrder, buttonSelection, isQuitter, matchId);
}

/*
==============
DLogEvent_ScreenView::ResetData
==============
*/

void __fastcall DLogEvent_ScreenView::ResetData(DLogEvent_ScreenView *this)
{
  ?ResetData@DLogEvent_ScreenView@@MEAAXXZ(this);
}

/*
==============
DLogEvent_ScreenView::ReadyToSend
==============
*/

bool __fastcall DLogEvent_ScreenView::ReadyToSend(DLogEvent_ScreenView *this)
{
  return ?ReadyToSend@DLogEvent_ScreenView@@QEBA_NXZ(this);
}

/*
==============
DLogEvent_ScreenView::AddScreenView
==============
*/
void DLogEvent_ScreenView::AddScreenView(DLogEvent_ScreenView *this, const char *name, const unsigned int duration, const bool isIntermission)
{
  unsigned __int8 m_screenViewCount; 

  m_screenViewCount = this->m_screenViewCount;
  if ( m_screenViewCount < 0x18u )
  {
    Core_strcpy(this->screens[m_screenViewCount].name, 0x40ui64, name);
    this->screens[this->m_screenViewCount].duration_ms = duration;
    this->screens[this->m_screenViewCount++].is_intermission = isIntermission;
  }
}

/*
==============
DLogEvent_ScreenView::AddSurveyData
==============
*/
void DLogEvent_ScreenView::AddSurveyData(DLogEvent_ScreenView *this, const unsigned int buttonOrder, const unsigned int buttonSelection, const bool isQuitter, const unsigned __int64 matchId)
{
  this->survey.match_id = matchId;
  this->survey.button_order = buttonOrder;
  this->survey.button_selection = buttonSelection;
  this->survey.is_quitter = isQuitter;
}

/*
==============
DLogEvent_ScreenView::ReadyToSend
==============
*/
bool DLogEvent_ScreenView::ReadyToSend(DLogEvent_ScreenView *this)
{
  return this->m_screenViewCount != 0;
}

/*
==============
DLogEvent_ScreenView::ResetData
==============
*/
void DLogEvent_ScreenView::ResetData(DLogEvent_ScreenView *this)
{
  this->m_screenViewCount = 0;
  *(_QWORD *)&this->survey.button_order = 0i64;
  *(_QWORD *)&this->survey.is_quitter = 0i64;
  this->survey.match_id = 0i64;
}

/*
==============
DLogEvent_ScreenView::WriteEvent
==============
*/
bool DLogEvent_ScreenView::WriteEvent(DLogEvent_ScreenView *this, DLogContext *context)
{
  bool v4; 
  unsigned __int64 match_id; 
  bool is_quitter; 
  unsigned int button_selection; 
  unsigned int button_order; 
  bool result; 
  int v10; 
  unsigned int *p_duration_ms; 
  char v12; 
  unsigned int v13; 

  if ( !DLog_IsActive() )
    goto LABEL_11;
  v4 = DLog_BeginEvent(context, "dlog_event_screen_view");
  context->autoEndEvent = 1;
  if ( !v4 )
    goto LABEL_12;
  match_id = this->survey.match_id;
  is_quitter = this->survey.is_quitter;
  button_selection = this->survey.button_selection;
  button_order = this->survey.button_order;
  if ( !DLog_IsActive() )
  {
LABEL_11:
    context->error = DLOG_ERROR_NOT_ACTIVE;
    goto LABEL_12;
  }
  if ( DLog_BeginRow(context, "survey") && DLog_UInt32(context, "button_order", button_order) && DLog_UInt32(context, "button_selection", button_selection) && DLog_Bool(context, "is_quitter", is_quitter) && DLog_UInt64(context, "match_id", match_id) && DLog_EndRow(context) )
  {
    result = 1;
    goto LABEL_13;
  }
LABEL_12:
  result = 0;
LABEL_13:
  v10 = 0;
  if ( this->m_screenViewCount )
  {
    p_duration_ms = &this->screens[0].duration_ms;
    do
    {
      if ( result )
      {
        v12 = *((_BYTE *)p_duration_ms + 4);
        v13 = *p_duration_ms;
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(context, "screens") && DLog_String(context, (const char *)&stru_143C9A1A4, this->screens[v10].name, 0) && DLog_UInt32(context, "duration_ms", v13) && DLog_Bool(context, "is_intermission", v12) && DLog_EndRow(context) )
          {
            result = 1;
            goto LABEL_19;
          }
        }
        else
        {
          context->error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      result = 0;
LABEL_19:
      ++v10;
      p_duration_ms += 18;
    }
    while ( v10 < this->m_screenViewCount );
  }
  return result;
}

