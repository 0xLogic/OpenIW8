/*
==============
bdNATTravClient::bdCachedTraversal::bdCachedTraversal
==============
*/

void __fastcall bdNATTravClient::bdCachedTraversal::bdCachedTraversal(bdNATTravClient::bdCachedTraversal *this)
{
  ??0bdCachedTraversal@bdNATTravClient@@QEAA@XZ(this);
}

/*
==============
bdNATTravClient::bdCachedTraversal::bdCachedTraversal
==============
*/
void bdNATTravClient::bdCachedTraversal::bdCachedTraversal(bdNATTravClient::bdCachedTraversal *this)
{
  this->m_remoteAddressHash = 0;
  bdAddr::bdAddr(&this->m_realAddress);
  this->m_timestamp = 0i64;
}

