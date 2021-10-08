/*
==============
EntHandle::entnum
==============
*/

__int16 __fastcall EntHandle::entnum(EntHandle *this)
{
  return ?entnum@EntHandle@@QEBAFXZ(this);
}

/*
==============
EntHandle::isDefinedAndMatchesEnt
==============
*/

int __fastcall EntHandle::isDefinedAndMatchesEnt(EntHandle *this, const gentity_s *ent)
{
  return ?isDefinedAndMatchesEnt@EntHandle@@QEBAHPEBUgentity_s@@@Z(this, ent);
}

/*
==============
G_IsEntityInUse
==============
*/

int __fastcall G_IsEntityInUse(const int entityIndex)
{
  return ?G_IsEntityInUse@@YAHH@Z(entityIndex);
}

/*
==============
G_GetEntityIndex
==============
*/

__int16 __fastcall G_GetEntityIndex(const gentity_s *entity)
{
  return ?G_GetEntityIndex@@YAFPEBUgentity_s@@@Z(entity);
}

/*
==============
EntHandle::ent
==============
*/

gentity_s *__fastcall EntHandle::ent(EntHandle *this)
{
  return ?ent@EntHandle@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
UsableHandle::isDefined
==============
*/

int __fastcall UsableHandle::isDefined(UsableHandle *this)
{
  return ?isDefined@UsableHandle@@QEBAHXZ(this);
}

/*
==============
G_GetGEntity
==============
*/

gentity_s *__fastcall G_GetGEntity(const int entityIndex)
{
  return ?G_GetGEntity@@YAPEAUgentity_s@@H@Z(entityIndex);
}

/*
==============
UsableHandle::entnum
==============
*/

__int16 __fastcall UsableHandle::entnum(UsableHandle *this)
{
  return ?entnum@UsableHandle@@QEBAFXZ(this);
}

/*
==============
UsableHandle::ent
==============
*/

gentity_s *__fastcall UsableHandle::ent(UsableHandle *this)
{
  return ?ent@UsableHandle@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
EntHandle::isDefined
==============
*/

int __fastcall EntHandle::isDefined(EntHandle *this)
{
  return ?isDefined@EntHandle@@QEBAHXZ(this);
}

/*
==============
UsableHandle::getUseIndex
==============
*/

unsigned int __fastcall UsableHandle::getUseIndex(UsableHandle *this)
{
  return ?getUseIndex@UsableHandle@@QEBAIXZ(this);
}

/*
==============
G_GetEntityIndex
==============
*/
__int64 G_GetEntityIndex(const gentity_s *entity)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v5; 
  int v6; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)entity - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
  v3 = (v2 >> 63) + v2;
  if ( (unsigned int)v3 >= 0x800 )
  {
    v6 = 2048;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (unsigned __int16)v3;
}

/*
==============
G_IsEntityInUse
==============
*/
__int64 G_IsEntityInUse(const int entityIndex)
{
  __int64 v1; 
  int v4; 

  v1 = entityIndex;
  if ( (unsigned int)entityIndex >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, v4) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v1].r.isInUse == g_entityIsInUse[v1] )
    return g_entityIsInUse[v1];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  return g_entityIsInUse[v1];
}

/*
==============
EntHandle::ent
==============
*/
gentity_s *EntHandle::ent(EntHandle *this)
{
  int number; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  number = this->number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    v9 = 2047;
    v7 = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v3 = this->number;
  if ( (unsigned int)(v3 - 1) >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v6) = v3 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = v3 - 1;
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] )
  {
    LODWORD(v8) = this->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v8) )
      __debugbreak();
  }
  return &g_entities[this->number - 1];
}

/*
==============
EntHandle::isDefined
==============
*/
_BOOL8 EntHandle::isDefined(EntHandle *this)
{
  unsigned __int16 number; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 

  number = this->number;
  if ( this->number )
  {
    v3 = number;
    v4 = number - 1;
    if ( v4 >= 0x800 )
    {
      v9 = 2048;
      v7 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v5 = v3 - 1;
    if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v5] )
    {
      LODWORD(v8) = this->number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v8) )
        __debugbreak();
    }
  }
  return this->number != 0;
}

/*
==============
G_GetGEntity
==============
*/
gentity_s *G_GetGEntity(const int entityIndex)
{
  __int64 v1; 
  int v4; 

  v1 = entityIndex;
  if ( (unsigned int)entityIndex >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, v4) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  return &g_entities[v1];
}

/*
==============
EntHandle::entnum
==============
*/
__int16 EntHandle::entnum(EntHandle *this)
{
  int number; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  number = this->number;
  if ( (unsigned int)(number - 1) >= 0x7FF )
  {
    v9 = 2047;
    v7 = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v3 = this->number;
  if ( (unsigned int)(v3 - 1) >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v6) = v3 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = v3 - 1;
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] )
  {
    LODWORD(v8) = this->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v8) )
      __debugbreak();
  }
  return this->number - 1;
}

/*
==============
EntHandle::isDefinedAndMatchesEnt
==============
*/
_BOOL8 EntHandle::isDefinedAndMatchesEnt(EntHandle *this, const gentity_s *ent)
{
  return EntHandle::isDefined(this) && EntHandle::ent(this) == ent;
}

/*
==============
UsableHandle::ent
==============
*/
gentity_s *UsableHandle::ent(UsableHandle *this)
{
  __int64 number; 
  __int64 v3; 
  gentity_s *v4; 
  __int64 v5; 
  __int16 v6; 
  gentity_s *v7; 
  int v8; 
  gentity_s *v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 294, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  if ( this->m_useClass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 295, ASSERT_TYPE_ASSERT, "( m_useClass == USE_CLASS_GENTITY )", (const char *)&queryFormat, "m_useClass == USE_CLASS_GENTITY") )
    __debugbreak();
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  if ( this->m_info.number - 1 >= 0x7FF )
  {
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    v13 = 2047;
    LODWORD(v11) = this->m_info.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 296, ASSERT_TYPE_ASSERT, "(unsigned)( getUseIndex() ) < (unsigned)( ENTITYNUM_NONE )", "getUseIndex() doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  number = (int)this->m_info.number;
  if ( (unsigned int)(number - 1) >= 0x800 )
  {
    LODWORD(v12) = 2048;
    LODWORD(v11) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v3 = number - 1;
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] )
  {
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    LODWORD(v12) = this->m_info.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 297, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( getUseIndex() ) ) )", "%s\n\t( getUseIndex() ) = %i", "( G_IsEntityInUse( getUseIndex() ) )", v12) )
      __debugbreak();
  }
  v4 = g_entities;
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  v5 = this->m_info.number - 1;
  if ( v4[v5].s.number != UsableHandle::entnum(this) )
  {
    v6 = UsableHandle::entnum(this);
    v7 = g_entities;
    v8 = v6;
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    LODWORD(v12) = v8;
    LODWORD(v11) = v7[this->m_info.number - 1].s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 298, ASSERT_TYPE_ASSERT, "( g_entities[ getUseIndex() ].s.number ) == ( static_cast< int > ( entnum() ) )", "g_entities[ getUseIndex() ].s.number == static_cast< int > ( entnum() )\n\t%i, %i", v11, v12) )
      __debugbreak();
  }
  v9 = g_entities;
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  return &v9[this->m_info.number - 1];
}

/*
==============
UsableHandle::entnum
==============
*/
__int64 UsableHandle::entnum(UsableHandle *this)
{
  __int64 number; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 
  int v8; 

  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 305, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  if ( this->m_useClass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 306, ASSERT_TYPE_ASSERT, "( m_useClass == USE_CLASS_GENTITY )", (const char *)&queryFormat, "m_useClass == USE_CLASS_GENTITY") )
    __debugbreak();
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  if ( this->m_info.number - 1 >= 0x7FF )
  {
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    v8 = 2047;
    LODWORD(v6) = this->m_info.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 307, ASSERT_TYPE_ASSERT, "(unsigned)( getUseIndex() ) < (unsigned)( ENTITYNUM_NONE )", "getUseIndex() doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  number = (int)this->m_info.number;
  if ( (unsigned int)(number - 1) >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v3 = number - 1;
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] )
  {
    if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
      __debugbreak();
    LODWORD(v7) = this->m_info.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 308, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( getUseIndex() ) ) )", "%s\n\t( getUseIndex() ) = %i", "( G_IsEntityInUse( getUseIndex() ) )", v7) )
      __debugbreak();
  }
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  v4 = this->m_info.number - 1;
  if ( (v4 > 0x7FFFFFFF || v4 + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v4, "unsigned", v4) )
    __debugbreak();
  return (unsigned __int16)v4;
}

/*
==============
UsableHandle::getUseIndex
==============
*/
__int64 UsableHandle::getUseIndex(UsableHandle *this)
{
  if ( !this->m_info.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 275, ASSERT_TYPE_ASSERT, "( !isEmpty() )", (const char *)&queryFormat, "!isEmpty()") )
    __debugbreak();
  return this->m_info.number - 1;
}

/*
==============
UsableHandle::isDefined
==============
*/
_BOOL8 UsableHandle::isDefined(UsableHandle *this)
{
  unsigned int number; 
  UsableClass m_useClass; 

  number = this->m_info.number;
  if ( number )
  {
    m_useClass = this->m_useClass;
    if ( m_useClass != USE_CLASS_SCRIPTABLE && (m_useClass || !G_IsEntityInUse(number - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 268, ASSERT_TYPE_ASSERT, "( isEmpty() || isValidScriptable() || isValidEntity() )", (const char *)&queryFormat, "isEmpty() || isValidScriptable() || isValidEntity()") )
      __debugbreak();
  }
  return this->m_info.number != 0;
}

