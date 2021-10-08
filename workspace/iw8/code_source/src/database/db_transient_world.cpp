/*
==============
DB_GfxWorldTransientZone_IsValidTransientZone
==============
*/

bool __fastcall DB_GfxWorldTransientZone_IsValidTransientZone(const GfxWorldTransientZone *zone)
{
  return ?DB_GfxWorldTransientZone_IsValidTransientZone@@YA_NAEBUGfxWorldTransientZone@@@Z(zone);
}

/*
==============
DB_FxWorldTransientZone_ResetValid
==============
*/

void __fastcall DB_FxWorldTransientZone_ResetValid(unsigned int index)
{
  ?DB_FxWorldTransientZone_ResetValid@@YAXI@Z(index);
}

/*
==============
DB_FxWorldTransientZone_SetValid
==============
*/

void __fastcall DB_FxWorldTransientZone_SetValid(unsigned int index)
{
  ?DB_FxWorldTransientZone_SetValid@@YAXI@Z(index);
}

/*
==============
DB_GfxWorldTransientZone_SetValid
==============
*/

void __fastcall DB_GfxWorldTransientZone_SetValid(unsigned int index)
{
  ?DB_GfxWorldTransientZone_SetValid@@YAXI@Z(index);
}

/*
==============
DB_GfxWorldTransientZone_Fixup
==============
*/

void DB_GfxWorldTransientZone_Fixup(void)
{
  ?DB_GfxWorldTransientZone_Fixup@@YAXXZ();
}

/*
==============
DB_GfxWorldTransientZone_ResetValid
==============
*/

void __fastcall DB_GfxWorldTransientZone_ResetValid(unsigned int index)
{
  ?DB_GfxWorldTransientZone_ResetValid@@YAXI@Z(index);
}

/*
==============
DB_FxWorldTransientZone_Fixup
==============
*/

void DB_FxWorldTransientZone_Fixup(void)
{
  ?DB_FxWorldTransientZone_Fixup@@YAXXZ();
}

/*
==============
DB_FxWorldTransientZone_IsValidTransientZone
==============
*/

bool __fastcall DB_FxWorldTransientZone_IsValidTransientZone(const FxWorldTransientZone *zone)
{
  return ?DB_FxWorldTransientZone_IsValidTransientZone@@YA_NAEBUFxWorldTransientZone@@@Z(zone);
}

/*
==============
DB_TransientWorld_Init
==============
*/

void DB_TransientWorld_Init(void)
{
  ?DB_TransientWorld_Init@@YAXXZ();
}

/*
==============
DB_FxWorldTransientZone_Fixup
==============
*/
void DB_FxWorldTransientZone_Fixup(void)
{
  unsigned int v0; 
  int v1; 
  unsigned int i; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  FxWorldTransientZone *FxWorldTransientZoneAtIndex; 
  __int64 transientZoneIndex; 
  __int64 v8; 
  __int64 v9; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FxWorldTransientZone_Fixup");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 112, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 1;
  v1 = 0;
  for ( i = fxWorld.transientZoneCount; v0 < fxWorld.transientZoneCount; i = fxWorld.transientZoneCount )
    *(_QWORD *)&fxWorld.activeTransientZones[4 * v0++ - 6144] = 0i64;
  if ( i > 0x720 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 119, ASSERT_TYPE_ASSERT, "( fxWorld.transientZoneCount ) <= ( DBTransientWorldGlob::BITARRAY_SIZE )", "%s <= %s\n\t%u, %u", "fxWorld.transientZoneCount", "DBTransientWorldGlob::BITARRAY_SIZE", i, 1824) )
    __debugbreak();
  v3 = s_dbTransientWorldGlob.fxWorldTransientZone.array[0];
  while ( v3 )
  {
LABEL_13:
    v5 = __lzcnt(v3);
    if ( v5 >= 0x20 )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v3 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v3 &= ~(0x80000000 >> v5);
    FxWorldTransientZoneAtIndex = DB_GetFxWorldTransientZoneAtIndex(v5 + 32 * v1);
    if ( !DB_FxWorldTransientZone_IsValidTransientZone(FxWorldTransientZoneAtIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 127, ASSERT_TYPE_ASSERT, "(DB_FxWorldTransientZone_IsValidTransientZone( zone ))", (const char *)&queryFormat, "DB_FxWorldTransientZone_IsValidTransientZone( zone )") )
      __debugbreak();
    transientZoneIndex = FxWorldTransientZoneAtIndex->transientZoneIndex;
    if ( (unsigned int)transientZoneIndex >= 0x600 )
    {
      LODWORD(v9) = 1536;
      LODWORD(v8) = FxWorldTransientZoneAtIndex->transientZoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( ( sizeof( *array_counter( fxWorld.transientZones ) ) + 0 ) )", "transientZoneIndex doesn't index ARRAY_COUNT( fxWorld.transientZones )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    *(_QWORD *)&fxWorld.activeTransientZones[4 * transientZoneIndex - 6144] = FxWorldTransientZoneAtIndex;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v1 + 1);
    v1 = v4;
    if ( (unsigned int)v4 >= 0x39 )
      break;
    v3 = s_dbTransientWorldGlob.fxWorldTransientZone.array[v4];
    if ( v3 )
      goto LABEL_13;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_FxWorldTransientZone_IsValidTransientZone
==============
*/
bool DB_FxWorldTransientZone_IsValidTransientZone(const FxWorldTransientZone *zone)
{
  unsigned int transientZoneIndex; 

  transientZoneIndex = zone->transientZoneIndex;
  return transientZoneIndex != 0xFFFF && transientZoneIndex;
}

/*
==============
DB_FxWorldTransientZone_ResetValid
==============
*/
void DB_FxWorldTransientZone_ResetValid(unsigned int index)
{
  unsigned __int64 v1; 
  int v3; 

  v1 = index;
  if ( index >= 0x720 )
  {
    v3 = 1824;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", index, v3) )
      __debugbreak();
  }
  s_dbTransientWorldGlob.fxWorldTransientZone.array[v1 >> 5] &= ~(0x80000000 >> (v1 & 0x1F));
}

/*
==============
DB_FxWorldTransientZone_SetValid
==============
*/
void DB_FxWorldTransientZone_SetValid(unsigned int index)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  int v4; 
  int v5; 
  int v6; 

  v1 = index;
  if ( index >= 0x720 )
  {
    v4 = 1824;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", index, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_dbTransientWorldGlob.fxWorldTransientZone.array[v1 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 96, ASSERT_TYPE_ASSERT, "(!s_dbTransientWorldGlob.fxWorldTransientZone.testBit( index ))", (const char *)&queryFormat, "!s_dbTransientWorldGlob.fxWorldTransientZone.testBit( index )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x720 )
  {
    v6 = 1824;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
      __debugbreak();
  }
  s_dbTransientWorldGlob.fxWorldTransientZone.array[v1 >> 5] |= v2;
}

/*
==============
DB_GfxWorldTransientZone_Fixup
==============
*/
void DB_GfxWorldTransientZone_Fixup(void)
{
  unsigned int v0; 
  int v1; 
  unsigned int i; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  GfxWorldTransientZone *GfxWorldTransientZoneAtIndex; 
  __int64 transientZoneIndex; 
  __int64 v8; 
  __int64 v9; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_GfxWorldTransientZone_Fixup");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 54, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v0 = 1;
  v1 = 0;
  for ( i = s_world.draw.transientZoneCount; v0 < s_world.draw.transientZoneCount; i = s_world.draw.transientZoneCount )
    s_world.draw.transientZones[v0++] = NULL;
  if ( i > 0x720 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 61, ASSERT_TYPE_ASSERT, "( s_world.draw.transientZoneCount ) <= ( DBTransientWorldGlob::BITARRAY_SIZE )", "%s <= %s\n\t%u, %u", "s_world.draw.transientZoneCount", "DBTransientWorldGlob::BITARRAY_SIZE", i, 1824) )
    __debugbreak();
  v3 = s_dbTransientWorldGlob.gfxWorldTransientZone.array[0];
  while ( v3 )
  {
LABEL_13:
    v5 = __lzcnt(v3);
    if ( v5 >= 0x20 )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v3 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v3 &= ~(0x80000000 >> v5);
    GfxWorldTransientZoneAtIndex = DB_GetGfxWorldTransientZoneAtIndex(v5 + 32 * v1);
    if ( !DB_GfxWorldTransientZone_IsValidTransientZone(GfxWorldTransientZoneAtIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 69, ASSERT_TYPE_ASSERT, "(DB_GfxWorldTransientZone_IsValidTransientZone( zone ))", (const char *)&queryFormat, "DB_GfxWorldTransientZone_IsValidTransientZone( zone )") )
      __debugbreak();
    transientZoneIndex = GfxWorldTransientZoneAtIndex->transientZoneIndex;
    if ( (unsigned int)transientZoneIndex >= 0x600 )
    {
      LODWORD(v9) = 1536;
      LODWORD(v8) = GfxWorldTransientZoneAtIndex->transientZoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( ( sizeof( *array_counter( s_world.draw.transientZones ) ) + 0 ) )", "transientZoneIndex doesn't index ARRAY_COUNT( s_world.draw.transientZones )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    s_world.draw.transientZones[transientZoneIndex] = GfxWorldTransientZoneAtIndex;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v1 + 1);
    v1 = v4;
    if ( (unsigned int)v4 >= 0x39 )
      break;
    v3 = s_dbTransientWorldGlob.gfxWorldTransientZone.array[v4];
    if ( v3 )
      goto LABEL_13;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_GfxWorldTransientZone_IsValidTransientZone
==============
*/
bool DB_GfxWorldTransientZone_IsValidTransientZone(const GfxWorldTransientZone *zone)
{
  unsigned int transientZoneIndex; 

  transientZoneIndex = zone->transientZoneIndex;
  return transientZoneIndex != 0xFFFF && transientZoneIndex;
}

/*
==============
DB_GfxWorldTransientZone_ResetValid
==============
*/
void DB_GfxWorldTransientZone_ResetValid(unsigned int index)
{
  unsigned __int64 v1; 
  int v3; 

  v1 = index;
  if ( index >= 0x720 )
  {
    v3 = 1824;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", index, v3) )
      __debugbreak();
  }
  s_dbTransientWorldGlob.gfxWorldTransientZone.array[v1 >> 5] &= ~(0x80000000 >> (v1 & 0x1F));
}

/*
==============
DB_GfxWorldTransientZone_SetValid
==============
*/
void DB_GfxWorldTransientZone_SetValid(unsigned int index)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  int v4; 
  int v5; 
  int v6; 

  v1 = index;
  if ( index >= 0x720 )
  {
    v4 = 1824;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", index, v4) )
      __debugbreak();
  }
  v2 = 0x80000000 >> (v1 & 0x1F);
  if ( (v2 & s_dbTransientWorldGlob.gfxWorldTransientZone.array[v1 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 38, ASSERT_TYPE_ASSERT, "(!s_dbTransientWorldGlob.gfxWorldTransientZone.testBit( index ))", (const char *)&queryFormat, "!s_dbTransientWorldGlob.gfxWorldTransientZone.testBit( index )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x720 )
  {
    v6 = 1824;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, v6) )
      __debugbreak();
  }
  s_dbTransientWorldGlob.gfxWorldTransientZone.array[v1 >> 5] |= v2;
}

/*
==============
DB_TransientWorld_Init
==============
*/
void DB_TransientWorld_Init(void)
{
  __int64 v0; 
  DBTransientWorldGlob *v1; 
  __int64 v2; 
  bitarray<1824> *p_fxWorldTransientZone; 
  __int64 v4; 
  unsigned int PoolSize; 
  __int64 v6; 

  v0 = 3i64;
  v1 = &s_dbTransientWorldGlob;
  v2 = 3i64;
  do
  {
    *(_QWORD *)v1->gfxWorldTransientZone.array = 0i64;
    *(_QWORD *)&v1->gfxWorldTransientZone.array[2] = 0i64;
    *(_QWORD *)&v1->gfxWorldTransientZone.array[4] = 0i64;
    v1 = (DBTransientWorldGlob *)((char *)v1 + 64);
    *(_QWORD *)&v1[-1].fxWorldTransientZone.array[47] = 0i64;
    *(_QWORD *)&v1[-1].fxWorldTransientZone.array[49] = 0i64;
    *(_QWORD *)&v1[-1].fxWorldTransientZone.array[51] = 0i64;
    *(_QWORD *)&v1[-1].fxWorldTransientZone.array[53] = 0i64;
    *(_QWORD *)&v1[-1].fxWorldTransientZone.array[55] = 0i64;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)v1->gfxWorldTransientZone.array = 0i64;
  *(_QWORD *)&v1->gfxWorldTransientZone.array[2] = 0i64;
  *(_QWORD *)&v1->gfxWorldTransientZone.array[4] = 0i64;
  *(_QWORD *)&v1->gfxWorldTransientZone.array[6] = 0i64;
  v1->gfxWorldTransientZone.array[8] = 0;
  p_fxWorldTransientZone = &s_dbTransientWorldGlob.fxWorldTransientZone;
  do
  {
    *(_QWORD *)p_fxWorldTransientZone->array = 0i64;
    *(_QWORD *)&p_fxWorldTransientZone->array[2] = 0i64;
    *(_QWORD *)&p_fxWorldTransientZone->array[4] = 0i64;
    p_fxWorldTransientZone = (bitarray<1824> *)((char *)p_fxWorldTransientZone + 64);
    *(_QWORD *)&p_fxWorldTransientZone[-1].array[47] = 0i64;
    *(_QWORD *)&p_fxWorldTransientZone[-1].array[49] = 0i64;
    *(_QWORD *)&p_fxWorldTransientZone[-1].array[51] = 0i64;
    *(_QWORD *)&p_fxWorldTransientZone[-1].array[53] = 0i64;
    *(_QWORD *)&p_fxWorldTransientZone[-1].array[55] = 0i64;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)p_fxWorldTransientZone->array = 0i64;
  *(_QWORD *)&p_fxWorldTransientZone->array[2] = 0i64;
  *(_QWORD *)&p_fxWorldTransientZone->array[4] = 0i64;
  *(_QWORD *)&p_fxWorldTransientZone->array[6] = 0i64;
  p_fxWorldTransientZone->array[8] = 0;
  if ( DB_GetPoolSize(ASSET_TYPE_GFXWORLD_TRANSIENT_ZONE) > 0x720 )
  {
    PoolSize = DB_GetPoolSize(ASSET_TYPE_GFXWORLD_TRANSIENT_ZONE);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 31, ASSERT_TYPE_ASSERT, "( DB_GetPoolSize( ASSET_TYPE_GFXWORLD_TRANSIENT_ZONE ) ) <= ( s_dbTransientWorldGlob.gfxWorldTransientZone.BIT_COUNT )", "%s <= %s\n\t%u, %u", "DB_GetPoolSize( ASSET_TYPE_GFXWORLD_TRANSIENT_ZONE )", "s_dbTransientWorldGlob.gfxWorldTransientZone.BIT_COUNT", PoolSize, 1824) )
      __debugbreak();
  }
  if ( DB_GetPoolSize(ASSET_TYPE_FXWORLD_TRANSIENT_ZONE) > 0x720 )
  {
    LODWORD(v6) = 1824;
    LODWORD(v4) = DB_GetPoolSize(ASSET_TYPE_FXWORLD_TRANSIENT_ZONE);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_world.cpp", 32, ASSERT_TYPE_ASSERT, "( DB_GetPoolSize( ASSET_TYPE_FXWORLD_TRANSIENT_ZONE ) ) <= ( s_dbTransientWorldGlob.fxWorldTransientZone.BIT_COUNT )", "%s <= %s\n\t%u, %u", "DB_GetPoolSize( ASSET_TYPE_FXWORLD_TRANSIENT_ZONE )", "s_dbTransientWorldGlob.fxWorldTransientZone.BIT_COUNT", v4, v6) )
      __debugbreak();
  }
}

