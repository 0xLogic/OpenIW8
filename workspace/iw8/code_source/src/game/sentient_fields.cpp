/*
==============
Scr_SetSentientField
==============
*/

void __fastcall Scr_SetSentientField(scrContext_t *scrContext, sentient_s *sentient, int offset)
{
  ?Scr_SetSentientField@@YAXAEAUscrContext_t@@PEAUsentient_s@@H@Z(scrContext, sentient, offset);
}

/*
==============
GScr_AddFieldsForSentient
==============
*/

void __fastcall GScr_AddFieldsForSentient(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForSentient@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetSentientField
==============
*/

void __fastcall Scr_GetSentientField(scrContext_t *scrContext, sentient_s *sentient, int offset)
{
  ?Scr_GetSentientField@@YAXAEAUscrContext_t@@PEAUsentient_s@@H@Z(scrContext, sentient, offset);
}

/*
==============
SentientScr_ReadOnly
==============
*/
void SentientScr_ReadOnly(scrContext_t *scrContext, sentient_s *pSelf, const sentient_fields_s *pField)
{
  const char *v5; 
  const char *v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 304, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  v5 = SL_ConvertToString(*pField->name);
  v6 = j_va("sentient property '%s' is read-only", v5);
  Scr_Error(COM_ERR_2444, scrContext, v6);
}

/*
==============
SentientScr_SetTeam
==============
*/
void SentientScr_SetTeam(scrContext_t *scrContext, sentient_s *pSelf, const sentient_fields_s *pField)
{
  scr_string_t ConstString; 
  team_t v6; 
  const scr_string_t **v7; 
  const scr_string_t **v8; 
  unsigned int i; 
  team_t eTeam; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 311, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v6 = TEAM_ONE;
    v7 = &S_TEAMS_SP_SCR_STRINGS_11[1];
    while ( ConstString != **v7 )
    {
      ++v6;
      ++v7;
      if ( (unsigned int)v6 >= TEAM_FIVE )
      {
        if ( ConstString != scr_const.only_sky )
          goto LABEL_21;
        Sentient_SetTeam(pSelf, TEAM_ZERO);
        return;
      }
    }
LABEL_23:
    Sentient_SetTeam(pSelf, v6);
    return;
  }
  if ( ConstString != scr_const.freelook )
  {
    v6 = TEAM_ZERO;
    v8 = S_TEAMS_MP_SCR_STRINGS_11;
    for ( i = 0; i < 0xCB; ++i )
    {
      if ( ConstString == **v8 )
      {
        v6 = i;
        goto LABEL_23;
      }
      ++v8;
    }
    if ( ConstString != scr_const.none && ConstString != scr_const.neutral && ConstString != scr_const.only_sky )
    {
LABEL_21:
      Sentient_SetTeam(pSelf, eTeam);
      return;
    }
    goto LABEL_23;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  Sentient_SetTeam(pSelf, TEAM_MP_NUM_TEAMS);
}

/*
==============
SentientScr_GetTeam
==============
*/
void SentientScr_GetTeam(scrContext_t *scrContext, sentient_s *pSelf, const sentient_fields_s *pField)
{
  __int64 eTeam; 
  const scr_string_t **v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 321, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  eTeam = pSelf->eTeam;
  if ( !(_DWORD)eTeam )
  {
    Scr_AddUndefined(scrContext);
    return;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    if ( (int)eTeam < 0 || (unsigned int)eTeam >= 6 )
    {
      LODWORD(v9) = eTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v9) )
        __debugbreak();
    }
    v6 = &S_TEAMS_SP_SCR_STRINGS_11[eTeam];
    if ( *v6 )
      goto LABEL_21;
    v7 = "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )";
    v8 = 275;
  }
  else
  {
    if ( (int)eTeam < 0 || (unsigned int)eTeam >= 0xCB )
    {
      LODWORD(v9) = eTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v9) )
        __debugbreak();
    }
    v6 = &S_TEAMS_MP_SCR_STRINGS_11[eTeam];
    if ( *v6 )
      goto LABEL_21;
    v7 = "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )";
    v8 = 284;
  }
  LODWORD(v9) = eTeam;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", v8, ASSERT_TYPE_ASSERT, v7, "( team ) = %i", v9) )
    __debugbreak();
LABEL_21:
  Scr_AddConstString(scrContext, **v6);
}

/*
==============
SentientScr_SetMaxSightDistSqrd
==============
*/
void SentientScr_SetMaxSightDistSqrd(scrContext_t *scrContext, sentient_s *pSelf, const sentient_fields_s *pField)
{
  double Float; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 337, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->ai )
  {
    Float = Scr_GetFloat(scrContext, 0);
    Sentient_SetMaxSightDistSqrd(pSelf, *(float *)&Float);
  }
}

/*
==============
SentientScr_GetMaxSightDistSqrd
==============
*/
void SentientScr_GetMaxSightDistSqrd(scrContext_t *scrContext, sentient_s *pSelf, const sentient_fields_s *pField)
{
  double MaxSightDistSqrd; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 346, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->ai )
  {
    MaxSightDistSqrd = Sentient_GetMaxSightDistSqrd(pSelf);
    Scr_AddFloat(scrContext, *(float *)&MaxSightDistSqrd);
  }
}

/*
==============
GScr_AddFieldsForSentient
==============
*/
void GScr_AddFieldsForSentient(scrContext_t *scrContext)
{
  const sentient_fields_s *i; 
  __int64 v3; 

  for ( i = fields; i->name; ++i )
  {
    v3 = ((char *)&i->canonicalString - (char *)&fields[0].canonicalString) / 48;
    if ( (v3 & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 360, ASSERT_TYPE_ASSERT, "(!((f - fields) & ENTFIELD_MASK))", (const char *)&queryFormat, "!((f - fields) & ENTFIELD_MASK)") )
      __debugbreak();
    if ( v3 != (unsigned __int16)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 361, ASSERT_TYPE_ASSERT, "((f - fields) == (unsigned short)( f - fields ))", (const char *)&queryFormat, "(f - fields) == (unsigned short)( f - fields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_GENTITY, *i->name, i->canonicalString, (unsigned __int16)v3 | 0x2000);
  }
}

/*
==============
Scr_GetSentientField
==============
*/
void Scr_GetSentientField(scrContext_t *scrContext, sentient_s *sentient, int offset)
{
  __int64 v3; 
  const sentient_fields_s *v6; 
  void (__fastcall *getter)(scrContext_t *, sentient_s *, const sentient_fields_s *); 

  v3 = offset;
  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 390, ASSERT_TYPE_ASSERT, "(sentient)", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 391, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  v6 = &fields[v3];
  getter = v6->getter;
  if ( getter )
    getter(scrContext, sentient, &fields[v3]);
  else
    Scr_GetGenericField(scrContext, (unsigned __int8 *)sentient, v6->type, v6->ofs);
}

/*
==============
Scr_SetSentientField
==============
*/
void Scr_SetSentientField(scrContext_t *scrContext, sentient_s *sentient, int offset)
{
  __int64 v3; 
  const sentient_fields_s *v6; 
  void (__fastcall *setter)(scrContext_t *, sentient_s *, const sentient_fields_s *); 

  v3 = offset;
  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 371, ASSERT_TYPE_ASSERT, "(sentient)", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_fields.cpp", 372, ASSERT_TYPE_ASSERT, "((unsigned)offset < ( sizeof( *array_counter( fields ) ) + 0 ) - 1)", (const char *)&queryFormat, "(unsigned)offset < ARRAY_COUNT( fields ) - 1") )
    __debugbreak();
  v6 = &fields[v3];
  setter = v6->setter;
  if ( setter )
    setter(scrContext, sentient, &fields[v3]);
  else
    Scr_SetGenericField(scrContext, (unsigned __int8 *)sentient, v6->type, v6->ofs);
}

