/*
==============
GAntiLagSP::ShouldApplyMuzzleRewindAngles
==============
*/

bool __fastcall GAntiLagSP::ShouldApplyMuzzleRewindAngles(GAntiLagSP *this)
{
  return ?ShouldApplyMuzzleRewindAngles@GAntiLagSP@@UEBA_NXZ(this);
}

/*
==============
GAntiLagSP::GetAntiLagSP
==============
*/

GAntiLagSP *__fastcall GAntiLagSP::GetAntiLagSP()
{
  return ?GetAntiLagSP@GAntiLagSP@@SAPEAV1@XZ();
}

/*
==============
GAntiLagSP::ShouldApplyMuzzleRewindAngles
==============
*/
bool GAntiLagSP::ShouldApplyMuzzleRewindAngles(GAntiLagSP *this)
{
  return 0;
}

/*
==============
GAntiLagSP::GetAntiLagSP
==============
*/
GAntiLagSP *GAntiLagSP::GetAntiLagSP()
{
  GAntiLagSP *result; 

  if ( BYTE1(GameScriptData::ms_allocatedType) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.h", 72, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  result = (GAntiLagSP *)GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    return (GAntiLagSP *)GAntiLag::ms_gAntiLagData;
  }
  return result;
}

