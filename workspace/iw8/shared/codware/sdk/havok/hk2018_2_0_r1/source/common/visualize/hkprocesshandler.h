/*
==============
hkProcessHandler::~hkProcessHandler
==============
*/

void __fastcall hkProcessHandler::~hkProcessHandler(hkProcessHandler *this)
{
  ??1hkProcessHandler@@UEAA@XZ(this);
}

/*
==============
hkProcessHandler::getProcessByName
==============
*/

hkProcess *__fastcall hkProcessHandler::getProcessByName(hkProcessHandler *this, const char *name)
{
  return ?getProcessByName@hkProcessHandler@@UEAAPEAVhkProcess@@PEBD@Z(this, name);
}

/*
==============
hkProcessHandler::~hkProcessHandler
==============
*/
void hkProcessHandler::~hkProcessHandler(hkProcessHandler *this)
{
  this->__vftable = (hkProcessHandler_vtbl *)hkProcessHandler::`vftable';
}

/*
==============
hkProcessHandler::getProcessByName
==============
*/
hkProcess *hkProcessHandler::getProcessByName(hkProcessHandler *this, const char *name)
{
  hkProcessHandler_vtbl *v2; 
  unsigned int v4; 

  v2 = this->__vftable;
  v4 = this->getProcessTag(this, name);
  return v2->getProcessByTag(this, v4);
}

