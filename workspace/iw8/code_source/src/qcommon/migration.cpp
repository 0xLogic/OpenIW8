/*
==============
Migration_Shutdown
==============
*/

void Migration_Shutdown(void)
{
  ?Migration_Shutdown@@YAXXZ();
}

/*
==============
Migration_Init
==============
*/

void __fastcall Migration_Init(unsigned __int8 *migrationBuffer, unsigned int migrationBufferSize)
{
  ?Migration_Init@@YAXPEAEI@Z(migrationBuffer, migrationBufferSize);
}

/*
==============
Migration_GetBufferSize
==============
*/

int __fastcall Migration_GetBufferSize()
{
  return ?Migration_GetBufferSize@@YAHXZ();
}

/*
==============
Migration_InitDvars
==============
*/

void Migration_InitDvars(void)
{
  ?Migration_InitDvars@@YAXXZ();
}

/*
==============
Migration_GetBuffer
==============
*/

unsigned __int8 *__fastcall Migration_GetBuffer()
{
  return ?Migration_GetBuffer@@YAPEAEXZ();
}

/*
==============
Migration_GetBuffer
==============
*/
unsigned __int8 *Migration_GetBuffer()
{
  return migrationGlob.buffer;
}

/*
==============
Migration_GetBufferSize
==============
*/
__int64 Migration_GetBufferSize()
{
  return migrationGlob.size;
}

/*
==============
Migration_Init
==============
*/
void Migration_Init(unsigned __int8 *migrationBuffer, unsigned int migrationBufferSize)
{
  if ( migrationGlob.buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\migration.cpp", 29, ASSERT_TYPE_ASSERT, "(!migrationGlob.buffer)", (const char *)&queryFormat, "!migrationGlob.buffer") )
    __debugbreak();
  if ( !migrationBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\migration.cpp", 30, ASSERT_TYPE_ASSERT, "(migrationBuffer)", (const char *)&queryFormat, "migrationBuffer") )
    __debugbreak();
  if ( !migrationBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\migration.cpp", 31, ASSERT_TYPE_ASSERT, "(migrationBufferSize)", (const char *)&queryFormat, "migrationBufferSize") )
    __debugbreak();
  migrationGlob.buffer = migrationBuffer;
  if ( migrationBufferSize < 0x1A7000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\migration.cpp", 35, ASSERT_TYPE_ASSERT, "( migrationBufferSize ) >= ( (1692 * 1024) )", "%s >= %s\n\t%i, %i", "migrationBufferSize", "MIGRATION_BUFFER_SIZE", migrationBufferSize, 1732608) )
    __debugbreak();
  migrationGlob.size = 1732608;
  memset_0(migrationGlob.buffer, 170, 0x1A7000ui64);
}

/*
==============
Migration_InitDvars
==============
*/
void Migration_InitDvars(void)
{
  ;
}

/*
==============
Migration_Shutdown
==============
*/
void Migration_Shutdown(void)
{
  migrationGlob.buffer = NULL;
  migrationGlob.size = 0;
}

