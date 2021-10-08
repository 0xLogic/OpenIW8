/*
==============
bdAchievementStatus::deserialize
==============
*/

bool __fastcall bdAchievementStatus::deserialize(bdStructBufferDeserializer *deserializer, unsigned int tag, bdAchievementStatus::Enum *value)
{
  return ?deserialize@bdAchievementStatus@@SA_NAEAVbdStructBufferDeserializer@@IAEAW4Enum@1@@Z(deserializer, tag, value);
}

/*
==============
bdAchievementStatus::deserialize
==============
*/
bool bdAchievementStatus::deserialize(bdStructBufferDeserializer *deserializer, unsigned int tag, bdAchievementStatus::Enum *value)
{
  bool result; 
  int v5; 
  int v6; 
  unsigned __int16 valuea; 

  valuea = 0;
  result = bdStructBufferDeserializer::readUInt16(deserializer, tag, &valuea);
  if ( result )
  {
    v5 = valuea;
    *value = valuea;
    if ( v5 != 1 && (unsigned int)(v5 - 2) > 3 )
    {
      v6 = v5;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdAchievementStatus", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementstatus.cpp", "bdAchievementStatus::deserialize", 0x19u, "bdAchievementStatus::deserialize failed. %d is not valid", v6);
      return 0;
    }
  }
  return result;
}

