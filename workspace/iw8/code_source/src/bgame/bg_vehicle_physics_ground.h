/*
==============
BgVehiclePhysicsGround::Jump
==============
*/

void __fastcall BgVehiclePhysicsGround::Jump(BgVehiclePhysicsGround *this, float afterThisTime)
{
  ?Jump@BgVehiclePhysicsGround@@MEAAXM@Z(this, afterThisTime);
}

/*
==============
BgVehiclePhysicsGround::GetFixedTorqueFactor
==============
*/

double __fastcall BgVehiclePhysicsGround::GetFixedTorqueFactor(BgVehiclePhysicsGround *this)
{
  double result; 

  *(float *)&result = ?GetFixedTorqueFactor@BgVehiclePhysicsGround@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraRangeAddition
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetCameraRangeAddition(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetCameraRangeAddition@BgVehiclePhysicsCarBase@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::ComputeEngineSound
==============
*/

void __fastcall BgVehiclePhysicsCarBase::ComputeEngineSound(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ?ComputeEngineSound@BgVehiclePhysicsCarBase@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::WheelLosesContact
==============
*/

void __fastcall BgVehiclePhysicsGround::WheelLosesContact(BgVehiclePhysicsGround *this, unsigned int tireIndex, float deltaTime)
{
  ?WheelLosesContact@BgVehiclePhysicsGround@@MEAAXIM@Z(this, tireIndex, deltaTime);
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraPitchAddition
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetCameraPitchAddition(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetCameraPitchAddition@BgVehiclePhysicsCarBase@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::UpdateSteeringAngle
==============
*/

void __fastcall BgVehiclePhysicsGround::UpdateSteeringAngle(BgVehiclePhysicsGround *this, float deltaTime)
{
  ?UpdateSteeringAngle@BgVehiclePhysicsGround@@MEAAXM@Z(this, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::WheelMakesContact
==============
*/

void __fastcall BgVehiclePhysicsGround::WheelMakesContact(BgVehiclePhysicsGround *this, unsigned int tireIndex, float deltaTime)
{
  ?WheelMakesContact@BgVehiclePhysicsGround@@MEAAXIM@Z(this, tireIndex, deltaTime);
}

/*
==============
BgVehiclePhysicsGround::GetSteeringAngle
==============
*/

double __fastcall BgVehiclePhysicsGround::GetSteeringAngle(BgVehiclePhysicsGround *this)
{
  double result; 

  *(float *)&result = ?GetSteeringAngle@BgVehiclePhysicsGround@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraReturnFactor
==============
*/

double __fastcall BgVehiclePhysicsCarBase::GetCameraReturnFactor(BgVehiclePhysicsCarBase *this)
{
  double result; 

  *(float *)&result = ?GetCameraReturnFactor@BgVehiclePhysicsCarBase@@UEBAMXZ(this);
  return result;
}

/*
==============
BgVehiclePhysicsGround::Land
==============
*/

void __fastcall BgVehiclePhysicsGround::Land(BgVehiclePhysicsGround *this, float afterThisTime)
{
  ?Land@BgVehiclePhysicsGround@@MEAAXM@Z(this, afterThisTime);
}

/*
==============
BgVehiclePhysicsCarBase::ComputeEngineSound
==============
*/
void BgVehiclePhysicsCarBase::ComputeEngineSound(BgVehiclePhysicsCarBase *this, float deltaTime)
{
  ;
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraPitchAddition
==============
*/
float BgVehiclePhysicsCarBase::GetCameraPitchAddition(BgVehiclePhysicsCarBase *this)
{
  return this->m_cameraConfig.m_camPitchAdd;
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraRangeAddition
==============
*/
float BgVehiclePhysicsCarBase::GetCameraRangeAddition(BgVehiclePhysicsCarBase *this)
{
  return this->m_cameraConfig.m_camRangeAdd;
}

/*
==============
BgVehiclePhysicsCarBase::GetCameraReturnFactor
==============
*/
float BgVehiclePhysicsCarBase::GetCameraReturnFactor(BgVehiclePhysicsCarBase *this)
{
  return this->m_cameraConfig.m_camReturnFactor;
}

/*
==============
BgVehiclePhysicsGround::GetFixedTorqueFactor
==============
*/
float BgVehiclePhysicsGround::GetFixedTorqueFactor(BgVehiclePhysicsGround *this)
{
  return FLOAT_1_0;
}

/*
==============
BgVehiclePhysicsGround::GetSteeringAngle
==============
*/
float BgVehiclePhysicsGround::GetSteeringAngle(BgVehiclePhysicsGround *this)
{
  return this->m_steering.m_yawVisual;
}

/*
==============
BgVehiclePhysicsGround::Jump
==============
*/
void BgVehiclePhysicsGround::Jump(BgVehiclePhysicsGround *this, float afterThisTime)
{
  ;
}

/*
==============
BgVehiclePhysicsGround::Land
==============
*/
void BgVehiclePhysicsGround::Land(BgVehiclePhysicsGround *this, float afterThisTime)
{
  ;
}

/*
==============
BgVehiclePhysicsGround::UpdateSteeringAngle
==============
*/
void BgVehiclePhysicsGround::UpdateSteeringAngle(BgVehiclePhysicsGround *this, float deltaTime)
{
  ;
}

/*
==============
BgVehiclePhysicsGround::WheelLosesContact
==============
*/
void BgVehiclePhysicsGround::WheelLosesContact(BgVehiclePhysicsGround *this, unsigned int tireIndex, float deltaTime)
{
  ;
}

/*
==============
BgVehiclePhysicsGround::WheelMakesContact
==============
*/
void BgVehiclePhysicsGround::WheelMakesContact(BgVehiclePhysicsGround *this, unsigned int tireIndex, float deltaTime)
{
  ;
}

