/*
==============
SND_CommandSize
==============
*/

unsigned int __fastcall SND_CommandSize(SndCommandType type)
{
  return ?SND_CommandSize@@YAIW4SndCommandType@@@Z(type);
}

/*
==============
SND_CommandName
==============
*/

const char *__fastcall SND_CommandName(SndCommandType type)
{
  return ?SND_CommandName@@YAPEBDW4SndCommandType@@@Z(type);
}

/*
==============
SND_CommandName
==============
*/
const char *SND_CommandName(SndCommandType type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= SND_COMMAND_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_command.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( SND_COMMAND_COUNT )", "type doesn't index SND_COMMAND_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return SND_COMMAND_NAMES[v1];
}

/*
==============
SND_CommandSize
==============
*/
__int64 SND_CommandSize(SndCommandType type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= SND_COMMAND_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_command.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( SND_COMMAND_COUNT )", "type doesn't index SND_COMMAND_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return SND_COMMAND_SIZES[v1];
}

