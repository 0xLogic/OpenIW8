/*
==============
bdLinkable::getNext
==============
*/

bdLinkable *__fastcall bdLinkable::getNext(bdLinkable *this)
{
  return ?getNext@bdLinkable@@QEBAPEAV1@XZ(this);
}

/*
==============
bdLinkable::link
==============
*/

void __fastcall bdLinkable::link(bdLinkable *this, bdLinkable **head)
{
  ?link@bdLinkable@@QEAAXPEAPEAV1@@Z(this, head);
}

/*
==============
bdLinkable::bdLinkable
==============
*/

void __fastcall bdLinkable::bdLinkable(bdLinkable *this)
{
  ??0bdLinkable@@QEAA@XZ(this);
}

/*
==============
bdLinkable::find
==============
*/

bool __fastcall bdLinkable::find(const bdLinkable *const list, const bdLinkable *const link)
{
  return ?find@bdLinkable@@SA_NQEBV1@0@Z(list, link);
}

/*
==============
bdLinkable::~bdLinkable
==============
*/

void __fastcall bdLinkable::~bdLinkable(bdLinkable *this)
{
  ??1bdLinkable@@UEAA@XZ(this);
}

/*
==============
bdLinkable::unlink
==============
*/

void __fastcall bdLinkable::unlink(bdLinkable *this)
{
  ?unlink@bdLinkable@@QEAAXXZ(this);
}

/*
==============
bdLinkable::bdLinkable
==============
*/
void bdLinkable::bdLinkable(bdLinkable *this)
{
  this->__vftable = (bdLinkable_vtbl *)&bdLinkable::`vftable';
  this->m_previous = NULL;
  this->m_next = NULL;
  this->m_headPtr = NULL;
}

/*
==============
bdLinkable::~bdLinkable
==============
*/
void bdLinkable::~bdLinkable(bdLinkable *this)
{
  bdLinkable *m_previous; 
  bdLinkable *m_next; 
  bdLinkable **m_headPtr; 

  m_previous = this->m_previous;
  this->__vftable = (bdLinkable_vtbl *)&bdLinkable::`vftable';
  if ( m_previous )
    m_previous->m_next = this->m_next;
  m_next = this->m_next;
  if ( m_next )
    m_next->m_previous = this->m_previous;
  m_headPtr = this->m_headPtr;
  if ( m_headPtr && *m_headPtr == this )
    *m_headPtr = this->m_next;
  this->m_previous = NULL;
  this->m_next = NULL;
  this->m_headPtr = NULL;
}

/*
==============
bdLinkable::find
==============
*/
bool bdLinkable::find(const bdLinkable *const list, const bdLinkable *const link)
{
  bool result; 
  const bdLinkable *v3; 
  bool v4; 

  result = 0;
  do
  {
    v3 = list;
    if ( !list )
      break;
    v4 = list == link;
    list = list->m_next;
    result = v4;
  }
  while ( v3 != link );
  return result;
}

/*
==============
bdLinkable::getNext
==============
*/
bdLinkable *bdLinkable::getNext(bdLinkable *this)
{
  return this->m_next;
}

/*
==============
bdLinkable::link
==============
*/
void bdLinkable::link(bdLinkable *this, bdLinkable **head)
{
  bdLinkable *m_previous; 
  bdLinkable *m_next; 
  bdLinkable **m_headPtr; 
  bdLinkable *v5; 

  m_previous = this->m_previous;
  if ( m_previous )
    m_previous->m_next = this->m_next;
  m_next = this->m_next;
  if ( m_next )
    m_next->m_previous = this->m_previous;
  m_headPtr = this->m_headPtr;
  if ( m_headPtr && *m_headPtr == this )
    *m_headPtr = this->m_next;
  this->m_previous = NULL;
  this->m_next = NULL;
  this->m_headPtr = NULL;
  if ( head )
  {
    v5 = *head;
    this->m_next = *head;
    if ( v5 )
      v5->m_previous = this;
    *head = this;
    this->m_headPtr = head;
  }
}

/*
==============
bdLinkable::unlink
==============
*/
void bdLinkable::unlink(bdLinkable *this)
{
  bdLinkable *m_previous; 
  bdLinkable *m_next; 
  bdLinkable **m_headPtr; 

  m_previous = this->m_previous;
  if ( m_previous )
    m_previous->m_next = this->m_next;
  m_next = this->m_next;
  if ( m_next )
    m_next->m_previous = this->m_previous;
  m_headPtr = this->m_headPtr;
  if ( m_headPtr && *m_headPtr == this )
    *m_headPtr = this->m_next;
  this->m_previous = NULL;
  this->m_next = NULL;
  this->m_headPtr = NULL;
}

