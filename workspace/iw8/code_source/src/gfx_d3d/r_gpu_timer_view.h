/*
==============
PageViewConfig::PageViewConfig
==============
*/

void __fastcall PageViewConfig::PageViewConfig(PageViewConfig *this)
{
  ??0PageViewConfig@@QEAA@XZ(this);
}

/*
==============
PageViewConfig::PageViewConfig
==============
*/
void PageViewConfig::PageViewConfig(PageViewConfig *this)
{
  *(_QWORD *)&this->m_displayType = 2i64;
  this->m_pView = NULL;
  *(_WORD *)&this->m_showInActive = 0;
  this->m_column = COLUMN_NONE;
}

