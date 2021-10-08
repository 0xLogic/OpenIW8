/*
==============
UserList::User::User
==============
*/

void __fastcall UserList::User::User(UserList::User *this)
{
  ??0User@UserList@@QEAA@XZ(this);
}

/*
==============
UserList::User::User
==============
*/
void UserList::User::User(UserList::User *this)
{
  const XUID *v2; 
  XUID result; 

  XUID::XUID(&this->xuid);
  v2 = XUID::NullXUID(&result);
  XUID::operator=(&this->xuid, v2);
  this->timeAdded = 0i64;
  this->name[0] = 0;
  this->nameWithHash[0] = 0;
  this->xb3PlatformId = 0i64;
  this->xb3DataSet = 0;
}

