/*
==============
HelicopterRotorBlade::HelicopterRotorBlade
==============
*/

void __fastcall HelicopterRotorBlade::HelicopterRotorBlade(HelicopterRotorBlade *this)
{
  ??0HelicopterRotorBlade@@QEAA@XZ(this);
}

/*
==============
HelicopterRotorBlade::HelicopterRotorBlade
==============
*/
void HelicopterRotorBlade::HelicopterRotorBlade(HelicopterRotorBlade *this)
{
  *(_OWORD *)this->m_BladeDirection.v = 0ui64;
  *(_QWORD *)&this->m_BladeRotationDirection.y = 0i64;
  *(_QWORD *)&this->m_BladeDeflection = 0i64;
  this->m_BladeGroundEffect = 0.0;
  this->m_BladePitch = 0.0;
}

