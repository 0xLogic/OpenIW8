/*
==============
Sentient_IsBadGuyTeam
==============
*/

bool __fastcall Sentient_IsBadGuyTeam(team_t team)
{
  return ?Sentient_IsBadGuyTeam@@YA_NW4team_t@@@Z(team);
}

/*
==============
SentientHandle::sentient
==============
*/

sentient_s *__fastcall SentientHandle::sentient(SentientHandle *this)
{
  return ?sentient@SentientHandle@@QEBAPEAUsentient_s@@XZ(this);
}

/*
==============
SentientHandle::isDefined
==============
*/

int __fastcall SentientHandle::isDefined(SentientHandle *this)
{
  return ?isDefined@SentientHandle@@QEBAHXZ(this);
}

/*
==============
Sentient_IsEnemyTeam
==============
*/

bool __fastcall Sentient_IsEnemyTeam(sentient_s *self, sentient_s *other)
{
  return ?Sentient_IsEnemyTeam@@YA_NPEAUsentient_s@@0@Z(self, other);
}

/*
==============
Sentient_EnemyTeamFlags
==============
*/

bitarray<224> *__fastcall Sentient_EnemyTeamFlags(bitarray<224> *result, team_t eTeam)
{
  return ?Sentient_EnemyTeamFlags@@YA?AV?$bitarray@$0OA@@@W4team_t@@@Z(result, eTeam);
}

/*
==============
Sentient_EnemyTeamFlags
==============
*/
bitarray<224> *Sentient_EnemyTeamFlags(bitarray<224> *result, team_t eTeam)
{
  bool v3; 
  unsigned int v7; 
  bitarray<224> *v8; 

  _RBX = result;
  if ( level.teammode == TEAMMODE_FFA )
  {
    *(_QWORD *)result->array = 0i64;
    *(_QWORD *)&result->array[2] = 0i64;
    *(_QWORD *)&result->array[4] = 0i64;
    result->array[6] = 0;
    v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbx+10h], xmm1
    }
    _RBX->array[6] = _RAX->array[6];
    _RBX->array[6] &= ~0x100000u;
    v7 = _RBX->array[6];
    if ( v3 )
      _RBX->array[0] &= ~0x8000000u;
    v8 = _RBX;
    _RBX->array[6] = v7 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(result, eTeam);
    return _RBX;
  }
  return v8;
}

/*
==============
SentientHandle::isDefined
==============
*/
_BOOL8 SentientHandle::isDefined(SentientHandle *this)
{
  unsigned __int16 number; 
  gentity_s *ent; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 

  number = this->number;
  if ( this->number )
  {
    if ( !level.sentients[number - 1].ent )
    {
      v9 = number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 136, ASSERT_TYPE_ASSERT, "( ( !number || level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( !number || level.sentients[number - 1].ent )", v9) )
        __debugbreak();
    }
    if ( this->number )
    {
      ent = level.sentients[this->number - 1].ent;
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v4 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
      v5 = (v4 >> 63) + v4;
      if ( (unsigned int)v5 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(v7) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      v5 = (__int16)v5;
      if ( (unsigned int)(__int16)v5 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(v7) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v5] )
      {
        LODWORD(v8) = this->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 137, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v8) )
          __debugbreak();
      }
    }
  }
  return this->number != 0;
}

/*
==============
SentientHandle::sentient
==============
*/
sentient_s *SentientHandle::sentient(SentientHandle *this)
{
  int number; 
  __int64 v3; 
  gentity_s *ent; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  unsigned int maxSentients; 

  number = this->number;
  if ( number - 1 >= level.maxSentients )
  {
    maxSentients = level.maxSentients;
    v9 = number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( level.maxSentients )", "number - 1 doesn't index level.maxSentients\n\t%i not in [0, %i)", v9, maxSentients) )
      __debugbreak();
  }
  v3 = this->number;
  if ( !level.sentients[v3 - 1].ent )
  {
    LODWORD(v10) = v3 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 146, ASSERT_TYPE_ASSERT, "( ( level.sentients[number - 1].ent ) )", "%s\n\t( number - 1 ) = %i", "( level.sentients[number - 1].ent )", v10) )
      __debugbreak();
  }
  ent = level.sentients[this->number - 1].ent;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = (__int64)((unsigned __int128)(((char *)ent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
  v6 = (v5 >> 63) + v5;
  if ( (unsigned int)v6 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v6 = (__int16)v6;
  if ( (unsigned int)(__int16)v6 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v10) = this->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 147, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( level.sentients[number - 1].ent ) ) )", v10) )
      __debugbreak();
  }
  return &level.sentients[this->number - 1];
}

/*
==============
Sentient_IsEnemyTeam
==============
*/
bool Sentient_IsEnemyTeam(sentient_s *self, sentient_s *other)
{
  bool v4; 
  unsigned int v8; 
  unsigned __int64 eTeam; 
  __int64 v11; 
  bitarray<224> result; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( level.teammode == TEAMMODE_FFA )
  {
    v4 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
    }
    v8 = _RAX->array[6] & 0xFFEFFFFF;
    __asm
    {
      vmovups xmmword ptr [rsp+78h+result.array], xmm0
      vmovsd  qword ptr [rsp+78h+result.array+10h], xmm1
    }
    if ( v4 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v8 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, other->eTeam);
  }
  eTeam = (unsigned int)self->eTeam;
  if ( (unsigned int)eTeam >= 0xE0 )
  {
    LODWORD(v11) = self->eTeam;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, 224) )
      __debugbreak();
  }
  return ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0;
}

/*
==============
Sentient_IsBadGuyTeam
==============
*/
bool Sentient_IsBadGuyTeam(team_t team)
{
  unsigned __int64 v1; 
  const bitarray<224> *BadGuyTeamFlags; 
  const bitarray<224> *v3; 
  int v5; 
  int v6; 

  v1 = (unsigned int)team;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    BadGuyTeamFlags = Com_TeamsSP_GetBadGuyTeamFlags();
  else
    BadGuyTeamFlags = Com_TeamsMP_GetBadGuyTeamFlags();
  v3 = BadGuyTeamFlags;
  if ( (unsigned int)v1 >= 0xE0 )
  {
    v6 = 224;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
      __debugbreak();
  }
  return ((0x80000000 >> (v1 & 0x1F)) & v3->array[v1 >> 5]) != 0;
}

