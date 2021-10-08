/*
==============
BgPredictedEntitySystem::SetPredictionKey
==============
*/

void __fastcall BgPredictedEntitySystem::SetPredictionKey(BgPredictedEntitySystem *this, const playerState_s *ps, const int serverTime, unsigned int *outPredictionKey)
{
  ?SetPredictionKey@BgPredictedEntitySystem@@QEAAXPEBUplayerState_s@@HQEAI@Z(this, ps, serverTime, outPredictionKey);
}

/*
==============
BgPredictedEntitySystem::BgPredictedEntitySystem
==============
*/

void __fastcall BgPredictedEntitySystem::BgPredictedEntitySystem(BgPredictedEntitySystem *this)
{
  ??0BgPredictedEntitySystem@@IEAA@XZ(this);
}

/*
==============
BgPredictedEntitySystem::IsSamePredictionKey
==============
*/

bool __fastcall BgPredictedEntitySystem::IsSamePredictionKey(const unsigned int *predictionKey1, const unsigned int *predictionKey2)
{
  return ?IsSamePredictionKey@BgPredictedEntitySystem@@SA_NQEBI0@Z(predictionKey1, predictionKey2);
}

/*
==============
BgPredictedEntitySystem::GetClientNumFromPredictionKey
==============
*/

int __fastcall BgPredictedEntitySystem::GetClientNumFromPredictionKey(const unsigned int *predictionKey)
{
  return ?GetClientNumFromPredictionKey@BgPredictedEntitySystem@@SAHQEBI@Z(predictionKey);
}

/*
==============
BgPredictedEntitySystem::ResetPredictionKeys
==============
*/

void __fastcall BgPredictedEntitySystem::ResetPredictionKeys(BgPredictedEntitySystem *this)
{
  ?ResetPredictionKeys@BgPredictedEntitySystem@@QEAAXXZ(this);
}

/*
==============
BgPredictedEntitySystem::GetServerTimeFromPredictionKey
==============
*/

int __fastcall BgPredictedEntitySystem::GetServerTimeFromPredictionKey(const unsigned int *predictionKey)
{
  return ?GetServerTimeFromPredictionKey@BgPredictedEntitySystem@@SAHQEBI@Z(predictionKey);
}

/*
==============
BgPredictedEntitySystem::IsEmptyPredictionKey
==============
*/

bool __fastcall BgPredictedEntitySystem::IsEmptyPredictionKey(const unsigned int *predictionKey)
{
  return ?IsEmptyPredictionKey@BgPredictedEntitySystem@@SA_NQEBI@Z(predictionKey);
}

/*
==============
BgPredictedEntitySystem::BgPredictedEntitySystem
==============
*/
void BgPredictedEntitySystem::BgPredictedEntitySystem(BgPredictedEntitySystem *this)
{
  this->m_currentPredictionIndex = 1;
  this->__vftable = (BgPredictedEntitySystem_vtbl *)&BgPredictedEntitySystem::`vftable';
}

/*
==============
BgPredictedEntitySystem::GetClientNumFromPredictionKey
==============
*/
__int64 BgPredictedEntitySystem::GetClientNumFromPredictionKey(const unsigned int *predictionKey)
{
  if ( predictionKey )
    return *((unsigned __int8 *)predictionKey + 5);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 52, ASSERT_TYPE_ASSERT, "(predictionKey)", (const char *)&queryFormat, "predictionKey") )
    __debugbreak();
  return MEMORY[5];
}

/*
==============
BgPredictedEntitySystem::GetServerTimeFromPredictionKey
==============
*/
__int64 BgPredictedEntitySystem::GetServerTimeFromPredictionKey(const unsigned int *predictionKey)
{
  if ( predictionKey )
    return *predictionKey;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 45, ASSERT_TYPE_ASSERT, "(predictionKey)", (const char *)&queryFormat, "predictionKey") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
BgPredictedEntitySystem::IsEmptyPredictionKey
==============
*/
bool BgPredictedEntitySystem::IsEmptyPredictionKey(const unsigned int *predictionKey)
{
  if ( !predictionKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 62, ASSERT_TYPE_ASSERT, "(predictionKey)", (const char *)&queryFormat, "predictionKey") )
    __debugbreak();
  return !*predictionKey && !predictionKey[1];
}

/*
==============
BgPredictedEntitySystem::IsSamePredictionKey
==============
*/
bool BgPredictedEntitySystem::IsSamePredictionKey(const unsigned int *predictionKey1, const unsigned int *predictionKey2)
{
  if ( !predictionKey1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 69, ASSERT_TYPE_ASSERT, "(predictionKey1)", (const char *)&queryFormat, "predictionKey1") )
    __debugbreak();
  if ( !predictionKey2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 70, ASSERT_TYPE_ASSERT, "(predictionKey2)", (const char *)&queryFormat, "predictionKey2") )
    __debugbreak();
  return *predictionKey1 == *predictionKey2 && predictionKey1[1] == predictionKey2[1];
}

/*
==============
BgPredictedEntitySystem::ResetPredictionKeys
==============
*/
void BgPredictedEntitySystem::ResetPredictionKeys(BgPredictedEntitySystem *this)
{
  this->m_currentPredictionIndex = 1;
}

/*
==============
BgPredictedEntitySystem::SetPredictionKey
==============
*/
void BgPredictedEntitySystem::SetPredictionKey(BgPredictedEntitySystem *this, const playerState_s *ps, const int serverTime, unsigned int *outPredictionKey)
{
  unsigned int clientNum; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 21, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outPredictionKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 22, ASSERT_TYPE_ASSERT, "(outPredictionKey)", (const char *)&queryFormat, "outPredictionKey") )
    __debugbreak();
  clientNum = ps->clientNum;
  *outPredictionKey = serverTime;
  if ( this->m_currentPredictionIndex >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 33, ASSERT_TYPE_ASSERT, "(static_cast<uint>( m_currentPredictionIndex ) < (1u << NUM_BITS_PREDICTION_IDX))", (const char *)&queryFormat, "static_cast<uint>( m_currentPredictionIndex ) < (1u << NUM_BITS_PREDICTION_IDX)") )
    __debugbreak();
  if ( clientNum >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_predictedentity.cpp", 34, ASSERT_TYPE_ASSERT, "(static_cast<uint>( clientNum ) < (1u << NUM_BITS_CLIENT_NUM))", (const char *)&queryFormat, "static_cast<uint>( clientNum ) < (1u << NUM_BITS_CLIENT_NUM)") )
    __debugbreak();
  outPredictionKey[1] = this->m_currentPredictionIndex++ | (clientNum << 8);
}

