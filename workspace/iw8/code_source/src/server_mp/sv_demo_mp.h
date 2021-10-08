/*
==============
SvDemoMP::GetDemoMP
==============
*/

SvDemoMP *__fastcall SvDemoMP::GetDemoMP()
{
  return ?GetDemoMP@SvDemoMP@@SAPEAV1@XZ();
}

/*
==============
SvDemoMP::GetDemoMP
==============
*/
SvDemo *SvDemoMP::GetDemoMP()
{
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)SvDemo::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_demo_mp.h", 173, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsMP( ms_allocatedType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_allocatedType )") )
    __debugbreak();
  return SvDemo::ms_gServerDemoSystem;
}

