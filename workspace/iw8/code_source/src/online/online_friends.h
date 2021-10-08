/*
==============
Online_Friends::~Online_Friends
==============
*/

void __fastcall Online_Friends::~Online_Friends(Online_Friends *this)
{
  ??1Online_Friends@@UEAA@XZ(this);
}

/*
==============
Online_Friends::~Online_Friends
==============
*/
void Online_Friends::~Online_Friends(Online_Friends *this)
{
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails _> *m_friendActivityDetailsList; 

  this->__vftable = (Online_Friends_vtbl *)&Online_Friends::`vftable';
  ntl::fixed_vector<tFriendSession,16,0>::~fixed_vector<tFriendSession,16,0>(&this->m_friendSessionList);
  m_friendActivityDetailsList = this->m_friendActivityDetailsList;
  if ( m_friendActivityDetailsList )
    m_friendActivityDetailsList->__abi_Release(m_friendActivityDetailsList);
}

