/*
==============
ClActiveClient::ClActiveClient
==============
*/

void __fastcall ClActiveClient::ClActiveClient(ClActiveClient *this, const LocalClientNum_t localClientNum)
{
  ??0ClActiveClient@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClActiveClient::ClActiveClient
==============
*/
void ClActiveClient::ClActiveClient(ClActiveClient *this, const LocalClientNum_t localClientNum)
{
  *(_QWORD *)&this->cmd_number_aab = -1i64;
  this->__vftable = (ClActiveClient_vtbl *)&ClActiveClient::`vftable';
  *(_QWORD *)&this->mouseWheelDelta = 0i64;
  this->ignoreStanceInput = 0;
  this->cmdInputAccumTimeMs = 0;
  this->cmdAccumTimeUsec = 0i64;
  this->cmdTimeUsec = 0i64;
  this->cmdTimeMsec = 0;
  *(_QWORD *)&this->clviewangles_aab = -1i64;
  this->m_localClientNum = localClientNum;
}

