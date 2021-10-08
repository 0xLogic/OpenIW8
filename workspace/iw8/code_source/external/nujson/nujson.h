/*
==============
Json::GetString<32>
==============
*/

bool __fastcall Json::GetString<32>(Json *this, char (*value)[32])
{
  return ??$GetString@$0CA@@Json@@QEBA_NAEAY0CA@D@Z(this, value);
}

/*
==============
Json::GetString<32>
==============
*/
bool Json::GetString<32>(Json *this, char (*value)[32])
{
  return Json::GetString(this, (char *)value, 0x20ui64);
}

