/*
==============
hknpAction::removeBody
==============
*/

void __fastcall hknpAction::removeBody(hknpAction *this, hknpBodyId bodyId)
{
  ?removeBody@hknpAction@@UEAAXUhknpBodyId@@@Z(this, bodyId);
}

/*
==============
hknpAction::onActionRemoved
==============
*/

void __fastcall hknpAction::onActionRemoved(hknpAction *this, hknpActionManager *manager)
{
  ?onActionRemoved@hknpAction@@UEAAXPEAVhknpActionManager@@@Z(this, manager);
}

/*
==============
hknpAction::~hknpAction
==============
*/

void __fastcall hknpAction::~hknpAction(hknpAction *this)
{
  ??1hknpAction@@UEAA@XZ(this);
}

/*
==============
hknpUnaryAction::getBodies
==============
*/

void __fastcall hknpUnaryAction::getBodies(hknpUnaryAction *this, const hknpBodyId **bodiesOut, int *numBodiesOut)
{
  ?getBodies@hknpUnaryAction@@UEBAXAEAPEBUhknpBodyId@@AEAH@Z(this, bodiesOut, numBodiesOut);
}

/*
==============
hknpUnaryAction::removeBody
==============
*/

void __fastcall hknpUnaryAction::removeBody(hknpUnaryAction *this, hknpBodyId bodyId)
{
  ?removeBody@hknpUnaryAction@@UEAAXUhknpBodyId@@@Z(this, bodyId);
}

/*
==============
hknpAction::onWorldShifted
==============
*/

void __fastcall hknpAction::onWorldShifted(hknpAction *this, const hkVector4f *offset)
{
  ?onWorldShifted@hknpAction@@UEAAXAEBVhkVector4f@@@Z(this, offset);
}

/*
==============
hknpAction::onActionAdded
==============
*/

void __fastcall hknpAction::onActionAdded(hknpAction *this, hknpActionManager *manager)
{
  ?onActionAdded@hknpAction@@UEAAXPEAVhknpActionManager@@@Z(this, manager);
}

/*
==============
hknpAction::~hknpAction
==============
*/
void hknpAction::~hknpAction(hknpAction *this)
{
  this->__vftable = (hknpAction_vtbl *)hknpAction::`vftable';
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
hknpUnaryAction::getBodies
==============
*/
void hknpUnaryAction::getBodies(hknpUnaryAction *this, const hknpBodyId **bodiesOut, int *numBodiesOut)
{
  *bodiesOut = &this->m_bodyId;
  *numBodiesOut = 1;
}

/*
==============
hknpAction::onActionAdded
==============
*/
void hknpAction::onActionAdded(hknpAction *this, hknpActionManager *manager)
{
  ;
}

/*
==============
hknpAction::onActionRemoved
==============
*/
void hknpAction::onActionRemoved(hknpAction *this, hknpActionManager *manager)
{
  ;
}

/*
==============
hknpAction::onWorldShifted
==============
*/
void hknpAction::onWorldShifted(hknpAction *this, const hkVector4f *offset)
{
  ;
}

/*
==============
hknpAction::removeBody
==============
*/
void hknpAction::removeBody(hknpAction *this, hknpBodyId bodyId)
{
  ;
}

/*
==============
hknpUnaryAction::removeBody
==============
*/
void hknpUnaryAction::removeBody(hknpUnaryAction *this, hknpBodyId bodyId)
{
  if ( this->m_bodyId.m_serialAndIndex == bodyId.m_serialAndIndex )
    this->m_bodyId.m_serialAndIndex = 0xFFFFFF;
}

