/*
==============
bdRunnable::start
==============
*/

void __fastcall bdRunnable::start(bdRunnable *this)
{
  ?start@bdRunnable@@QEAAXXZ(this);
}

/*
==============
bdRunnable::~bdRunnable
==============
*/

void __fastcall bdRunnable::~bdRunnable(bdRunnable *this)
{
  ??1bdRunnable@@UEAA@XZ(this);
}

/*
==============
bdRunnable::stop
==============
*/

void __fastcall bdRunnable::stop(bdRunnable *this)
{
  ?stop@bdRunnable@@UEAAXXZ(this);
}

/*
==============
bdRunnable::bdRunnable
==============
*/

void __fastcall bdRunnable::bdRunnable(bdRunnable *this)
{
  ??0bdRunnable@@QEAA@XZ(this);
}

/*
==============
bdRunnable::bdRunnable
==============
*/
void bdRunnable::bdRunnable(bdRunnable *this)
{
  this->m_stop = 0;
  this->__vftable = (bdRunnable_vtbl *)&bdRunnable::`vftable';
}

/*
==============
bdRunnable::~bdRunnable
==============
*/
void bdRunnable::~bdRunnable(bdRunnable *this)
{
  this->__vftable = (bdRunnable_vtbl *)&bdRunnable::`vftable';
}

/*
==============
bdRunnable::start
==============
*/
void bdRunnable::start(bdRunnable *this)
{
  this->m_stop = 0;
}

/*
==============
bdRunnable::stop
==============
*/
void bdRunnable::stop(bdRunnable *this)
{
  this->m_stop = 1;
}

