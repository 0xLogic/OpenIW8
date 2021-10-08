/*
==============
Physics_GetRagdollBoneName
==============
*/

const char *__fastcall Physics_GetRagdollBoneName(const char *bodyName)
{
  return ?Physics_GetRagdollBoneName@@YAPEBDPEBD@Z(bodyName);
}

/*
==============
Physics_GetRagdollBoneName
==============
*/
const char *Physics_GetRagdollBoneName(const char *bodyName)
{
  unsigned __int64 v2; 

  v2 = -1i64;
  do
    ++v2;
  while ( bodyName[v2] );
  if ( (v2 <= 6 || strncmp(bodyName, "havok_", 6ui64)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physics.h", 1025, ASSERT_TYPE_ASSERT, "( ( strlen( bodyName ) > 6 && strncmp( bodyName, \"havok_\", 6 ) == 0 ) )", "( bodyName ) = %s", bodyName) )
    __debugbreak();
  return bodyName + 6;
}

