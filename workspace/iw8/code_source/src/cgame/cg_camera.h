/*
==============
ClientCameraTransition::ClientCameraTransition
==============
*/

void __fastcall ClientCameraTransition::ClientCameraTransition(ClientCameraTransition *this)
{
  ??0ClientCameraTransition@@QEAA@XZ(this);
}

/*
==============
ClientCameraTransition::ClientCameraTransition
==============
*/
void ClientCameraTransition::ClientCameraTransition(ClientCameraTransition *this)
{
  this->active = 0;
  *(_QWORD *)&this->time = 0i64;
  *(_QWORD *)&this->timeToStartEyePos = 0i64;
  this->lastActiveCamera = 0;
  *(_QWORD *)&this->prevCamNdx = 0i64;
  this->transitionType = TT_NONE;
  *(_QWORD *)&this->lastSeat = 0i64;
  this->transitionInLocalSpace = 0;
  *(_WORD *)&this->transitionOutLocalSpace = 0;
  *(_WORD *)&this->lastWas3PWithFocus = 0;
  this->lastWasUsingTuret = 0;
  this->doPlayerFade = 0;
  *(_QWORD *)&this->lastFocusOrigin.y = 0i64;
}

