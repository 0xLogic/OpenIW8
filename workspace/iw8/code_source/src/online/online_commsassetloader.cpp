/*
==============
Online_CommsAssetLoader::AreCommsAssetsMapped
==============
*/

bool __fastcall Online_CommsAssetLoader::AreCommsAssetsMapped(Online_CommsAssetLoader *this, const CommsAssetCategoryType categoryType)
{
  return ?AreCommsAssetsMapped@Online_CommsAssetLoader@@QEAA_NW4CommsAssetCategoryType@@@Z(this, categoryType);
}

/*
==============
Online_CommsAssetLoader::ControllerFrame
==============
*/

void __fastcall Online_CommsAssetLoader::ControllerFrame(Online_CommsAssetLoader *this, const int controllerIndex)
{
  ?ControllerFrame@Online_CommsAssetLoader@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_CommsAssetLoader::GetInstancePtr
==============
*/

Online_CommsAssetLoader *__fastcall Online_CommsAssetLoader::GetInstancePtr()
{
  return ?GetInstancePtr@Online_CommsAssetLoader@@SAPEAV1@XZ();
}

/*
==============
Online_CommsAssetLoader::Init
==============
*/

bool __fastcall Online_CommsAssetLoader::Init(Online_CommsAssetLoader *this)
{
  return ?Init@Online_CommsAssetLoader@@UEAA_NXZ(this);
}

/*
==============
Online_CommsAssetLoader::GetInstance
==============
*/

Online_CommsAssetLoader *__fastcall Online_CommsAssetLoader::GetInstance()
{
  return ?GetInstance@Online_CommsAssetLoader@@SAAEAV1@XZ();
}

/*
==============
Online_CommsAssetLoader::Init
==============
*/
char Online_CommsAssetLoader::Init(Online_CommsAssetLoader *this)
{
  CommsAssetCategoryType i; 

  for ( i = COMMSASSET_MOTD; (unsigned int)i < COMMSASSET_COUNT; ++i )
    CommsAssetCategory::Init(&this->m_commsAssetCategory[i], i);
  return 1;
}

/*
==============
Online_CommsAssetLoader::ControllerFrame
==============
*/
void Online_CommsAssetLoader::ControllerFrame(Online_CommsAssetLoader *this, const int controllerIndex)
{
  unsigned int i; 

  for ( i = 0; i < 2; ++i )
    CommsAssetCategory::ControllerFrame(&this->m_commsAssetCategory[i], controllerIndex);
}

/*
==============
Online_CommsAssetLoader::AreCommsAssetsMapped
==============
*/
bool Online_CommsAssetLoader::AreCommsAssetsMapped(Online_CommsAssetLoader *this, const CommsAssetCategoryType categoryType)
{
  return categoryType < COMMSASSET_COUNT && this->m_commsAssetCategory[categoryType].m_mappingState == AWAITING_COMMIT;
}

/*
==============
Online_CommsAssetLoader::GetInstance
==============
*/
Online_CommsAssetLoader *Online_CommsAssetLoader::GetInstance()
{
  return &Online_CommsAssetLoader::s_instance;
}

/*
==============
Online_CommsAssetLoader::GetInstancePtr
==============
*/
Online_CommsAssetLoader *Online_CommsAssetLoader::GetInstancePtr()
{
  return &Online_CommsAssetLoader::s_instance;
}

