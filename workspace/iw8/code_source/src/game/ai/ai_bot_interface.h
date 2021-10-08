/*
==============
AIBotInterface::GetStairsState
==============
*/

AI_STAIRS_STATE __fastcall AIBotInterface::GetStairsState(AIBotInterface *this)
{
  return ?GetStairsState@AIBotInterface@@UEBA?AW4AI_STAIRS_STATE@@XZ(this);
}

/*
==============
AIBotInterface::GetAI
==============
*/

bot_info_t *__fastcall AIBotInterface::GetAI(AIBotInterface *this)
{
  return ?GetAI@AIBotInterface@@UEBAPEAUbot_info_t@@XZ(this);
}

/*
==============
AIBotInterface::SetClothType
==============
*/

void __fastcall AIBotInterface::SetClothType(AIBotInterface *this, unsigned __int8 clothType)
{
  ?SetClothType@AIBotInterface@@UEBAXE@Z(this, clothType);
}

/*
==============
AIBotInterface::GetClothType
==============
*/

unsigned __int8 __fastcall AIBotInterface::GetClothType(AIBotInterface *this)
{
  return ?GetClothType@AIBotInterface@@UEBAEXZ(this);
}

/*
==============
AIBotInterface::Is3D
==============
*/

bool __fastcall AIBotInterface::Is3D(AIBotInterface *this)
{
  return ?Is3D@AIBotInterface@@UEBA_NXZ(this);
}

/*
==============
AIBotInterface::GetAI
==============
*/
bot_info_t *AIBotInterface::GetAI(AIBotInterface *this)
{
  return this->m_pAI;
}

/*
==============
AIBotInterface::Is3D
==============
*/
bool AIBotInterface::Is3D(AIBotInterface *this)
{
  return 0;
}

/*
==============
AIBotInterface::SetClothType
==============
*/
void AIBotInterface::SetClothType(AIBotInterface *this, unsigned __int8 clothType)
{
  ;
}

/*
==============
AIBotInterface::GetClothType
==============
*/
unsigned __int8 AIBotInterface::GetClothType(AIBotInterface *this)
{
  return 0;
}

/*
==============
AIBotInterface::GetStairsState
==============
*/
__int64 AIBotInterface::GetStairsState(AIBotInterface *this)
{
  return 0i64;
}

