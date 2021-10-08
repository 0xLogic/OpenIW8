/*
==============
SentientCmd_IsAlliedSentient
==============
*/

void __fastcall SentientCmd_IsAlliedSentient(scrContext_t *scrContext)
{
  ?SentientCmd_IsAlliedSentient@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SentientCmd_GetClosestEnemySqDist
==============
*/

void __fastcall SentientCmd_GetClosestEnemySqDist(scrContext_t *scrContext, scr_entref_t entref)
{
  ?SentientCmd_GetClosestEnemySqDist@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
SentientCmd_GetEnemyInfo
==============
*/

void __fastcall SentientCmd_GetEnemyInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  ?SentientCmd_GetEnemyInfo@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
SentientCmd_GetEnemySqDist
==============
*/

void __fastcall SentientCmd_GetEnemySqDist(scrContext_t *scrContext, scr_entref_t entref)
{
  ?SentientCmd_GetEnemySqDist@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
SentientCmd_CopyEnemyInfo
==============
*/

void __fastcall SentientCmd_CopyEnemyInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  ?SentientCmd_CopyEnemyInfo@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
SentientCmd_SetThreatBias
==============
*/
void SentientCmd_SetThreatBias(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  int ThreatBiasGroupIndex; 
  scr_string_t v4; 
  int v5; 
  int Int; 
  const char *v7; 
  const char *v8; 
  const char *String; 
  const char *v10; 

  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_ParamError(COM_ERR_2401, scrContext, 0, "setthreatbias [group for] [group against] [threat]");
  ConstString = Scr_GetConstString(scrContext, 0);
  ThreatBiasGroupIndex = AICommonInterface::FindThreatBiasGroupIndex(ConstString);
  v4 = Scr_GetConstString(scrContext, 1u);
  v5 = AICommonInterface::FindThreatBiasGroupIndex(v4);
  Int = Scr_GetInt(scrContext, 2u);
  if ( ThreatBiasGroupIndex >= 0 )
  {
    if ( v5 >= 0 )
    {
      AICommonInterface::SetThreatBias(ThreatBiasGroupIndex, v5, Int);
    }
    else
    {
      String = Scr_GetString(scrContext, 1u);
      v10 = j_va("Invalid threat bias group '%s'.\n", String);
      Scr_Error(COM_ERR_2403, scrContext, v10);
    }
  }
  else
  {
    v7 = Scr_GetString(scrContext, 0);
    v8 = j_va("Invalid threat bias group '%s'.\n", v7);
    Scr_Error(COM_ERR_2402, scrContext, v8);
  }
}

/*
==============
SentientCmd_SetThreatBiasAgainstAll
==============
*/
void SentientCmd_SetThreatBiasAgainstAll(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  int ThreatBiasGroupIndex; 
  int Int; 
  const char *String; 
  const char *v6; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_ParamError(COM_ERR_2404, scrContext, 0, "setthreatbiasagainstall [group for] [threat]");
  ConstString = Scr_GetConstString(scrContext, 0);
  ThreatBiasGroupIndex = AICommonInterface::FindThreatBiasGroupIndex(ConstString);
  Int = Scr_GetInt(scrContext, 1u);
  if ( ThreatBiasGroupIndex >= 0 )
  {
    AICommonInterface::SetThreatBiasEntireGroup(ThreatBiasGroupIndex, Int);
  }
  else
  {
    String = Scr_GetString(scrContext, 0);
    v6 = j_va("Invalid threat bias group '%s'.\n", String);
    Scr_Error(COM_ERR_2405, scrContext, v6);
  }
}

/*
==============
SentientCmd_SetIgnoreMeGroup
==============
*/
void SentientCmd_SetIgnoreMeGroup(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  int ThreatBiasGroupIndex; 
  scr_string_t v4; 
  int v5; 
  const char *v6; 
  const char *v7; 
  const char *String; 
  const char *v9; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_ParamError(COM_ERR_2406, scrContext, 0, "setignoremegroup [group for] [group ignoring]");
  ConstString = Scr_GetConstString(scrContext, 0);
  ThreatBiasGroupIndex = AICommonInterface::FindThreatBiasGroupIndex(ConstString);
  v4 = Scr_GetConstString(scrContext, 1u);
  v5 = AICommonInterface::FindThreatBiasGroupIndex(v4);
  if ( ThreatBiasGroupIndex >= 0 )
  {
    if ( v5 >= 0 )
    {
      AICommonInterface::SetIgnoreMeGroup(ThreatBiasGroupIndex, v5);
    }
    else
    {
      String = Scr_GetString(scrContext, 1u);
      v9 = j_va("Invalid threat bias group '%s'.\n", String);
      Scr_Error(COM_ERR_2408, scrContext, v9);
    }
  }
  else
  {
    v6 = Scr_GetString(scrContext, 0);
    v7 = j_va("Invalid threat bias group '%s'.\n", v6);
    Scr_Error(COM_ERR_2407, scrContext, v7);
  }
}

/*
==============
SentientCmd_SetThreatBiasGroup
==============
*/
void SentientCmd_SetThreatBiasGroup(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v3; 
  scr_string_t ConstString; 
  int ThreatBiasGroupIndex; 
  const char *String; 
  const char *v7; 

  v3 = Sentient_Get(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    ConstString = Scr_GetConstString(scrContext, 0);
    ThreatBiasGroupIndex = AICommonInterface::FindThreatBiasGroupIndex(ConstString);
    if ( ThreatBiasGroupIndex >= 0 )
    {
      v3->iThreatBiasGroupIndex = ThreatBiasGroupIndex;
    }
    else
    {
      String = Scr_GetString(scrContext, 0);
      v7 = j_va("Invalid threat bias group '%s'.\n", String);
      Scr_Error(COM_ERR_2409, scrContext, v7);
    }
  }
  else
  {
    v3->iThreatBiasGroupIndex = 0;
  }
}

/*
==============
SentientCmd_GetThreatBiasGroup
==============
*/
void SentientCmd_GetThreatBiasGroup(scrContext_t *scrContext, scr_entref_t entref)
{
  __int64 iThreatBiasGroupIndex; 
  const char *v4; 

  iThreatBiasGroupIndex = Sentient_Get(scrContext, entref)->iThreatBiasGroupIndex;
  if ( (int)iThreatBiasGroupIndex <= 0 )
  {
    Scr_AddString(scrContext, (const char *)&queryFormat.fmt + 3);
  }
  else
  {
    v4 = SL_ConvertToString(g_threatBias.groupName[iThreatBiasGroupIndex]);
    Scr_AddString(scrContext, v4);
  }
}

/*
==============
SentientCmd_GetThreatSight
==============
*/
void SentientCmd_GetThreatSight(scrContext_t *scrContext, scr_entref_t entref)
{
  const sentient_s *v3; 
  gentity_s *Entity; 
  const sentient_s *sentient; 

  v3 = Sentient_Get(scrContext, entref);
  Entity = GScr_GetEntity(0);
  if ( Entity )
  {
    sentient = Entity->sentient;
    if ( sentient )
    {
      _RBX = Sentient_GetSentientInfo(v3, sentient);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 443, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      __asm { vmovss  xmm1, dword ptr [rbx+1Ch]; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
    }
    else
    {
      Scr_Error(COM_ERR_2411, scrContext, "<otherSentient> must be sentient\n");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2410, scrContext, "<otherSentient> must be a sentient entity\n");
  }
}

/*
==============
SentientCmd_SetThreatSight
==============
*/
void SentientCmd_SetThreatSight(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v5; 
  gentity_s *Entity; 
  const sentient_s *sentient; 

  v5 = Sentient_Get(scrContext, entref);
  Entity = GScr_GetEntity(0);
  if ( Entity )
  {
    sentient = Entity->sentient;
    if ( sentient )
    {
      _RBX = Sentient_GetSentientInfo(v5, sentient);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 482, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
      Sentient_SetThreatSightState(v5, _RBX);
    }
    else
    {
      Scr_Error(COM_ERR_2413, scrContext, "<otherSentient> must be sentient\n");
    }
  }
  else
  {
    Scr_Error(COM_ERR_2412, scrContext, "<otherSentient> must be a sentient entity\n");
  }
}

/*
==============
SentientCmd_IsAlliedSentient
==============
*/
void SentientCmd_IsAlliedSentient(scrContext_t *scrContext)
{
  gentity_s *Entity; 
  gentity_s *v3; 
  const sentient_s *sentient; 
  const sentient_s *v5; 
  int IsAlliedSentient; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Entity = GScr_GetEntity(0);
    v3 = GScr_GetEntity(1u);
    if ( Entity && (sentient = Entity->sentient) != NULL && v3 && (v5 = v3->sentient) != NULL )
    {
      IsAlliedSentient = AI_IsAlliedSentient(sentient, v5);
      Scr_AddInt(scrContext, IsAlliedSentient);
    }
    else
    {
      Scr_Error(COM_ERR_5710, scrContext, "IsAlliedSentient() requires two valid entities that are both sentient");
    }
  }
  else
  {
    Scr_Error(COM_ERR_5709, scrContext, "IsAlliedSentient() requires two sentient entity parameters");
  }
}

/*
==============
SentientCmd_IsEnemyTeam
==============
*/
void SentientCmd_IsEnemyTeam(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  scr_string_t v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  bitarray_base<bitarray<224> > *v8; 
  int v9; 
  team_t outTeam; 
  team_t v11; 
  bitarray<224> result; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_ParamError(COM_ERR_2414, scrContext, 0, "isEnemyTeam [team1] [team2]");
  ConstString = Scr_GetConstString(scrContext, 0);
  v3 = Scr_GetConstString(scrContext, 1u);
  if ( ConstString == scr_const.dead || v3 == scr_const.dead )
  {
    v9 = 0;
  }
  else
  {
    if ( !Com_Teams_TeamFromString(ConstString, &outTeam) )
    {
      v4 = SL_ConvertToString(ConstString);
      v5 = j_va("unknown team '%s'", v4);
      Scr_Error(COM_ERR_2415, scrContext, v5);
      return;
    }
    if ( !Com_Teams_TeamFromString(v3, &v11) )
    {
      v6 = SL_ConvertToString(v3);
      v7 = j_va("unknown team '%s'", v6);
      Scr_Error(COM_ERR_2416, scrContext, v7);
      return;
    }
    v8 = Sentient_EnemyTeamFlags(&result, outTeam);
    v9 = bitarray_base<bitarray<224>>::testBit(v8, v11);
  }
  Scr_AddInt(scrContext, v9);
}

/*
==============
SentientCmd_GetSentientCounts
==============
*/
void SentientCmd_GetSentientCounts(scrContext_t *scrContext)
{
  __int64 maxSentients; 
  int v2; 
  int v4; 
  int v5; 
  int v6; 
  ai_common_t **p_ai; 
  __int64 v8; 

  maxSentients = level.maxSentients;
  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( level.maxSentients )
  {
    p_ai = &level.sentients->ai;
    do
    {
      if ( *((_BYTE *)p_ai + 146) )
      {
        v8 = (__int64)*(p_ai - 1);
        if ( v8 && *(_QWORD *)(v8 + 336) )
        {
          ++v2;
        }
        else if ( *p_ai )
        {
          ++v4;
        }
        else if ( *((_BYTE *)p_ai + 147) )
        {
          ++v5;
        }
        else
        {
          ++v6;
        }
      }
      p_ai += 23;
      --maxSentients;
    }
    while ( maxSentients );
  }
  Scr_MakeArray(scrContext);
  Scr_AddInt(scrContext, v2);
  Scr_AddArrayStringIndexed(scrContext, scr_const.player);
  Scr_AddInt(scrContext, v4);
  Scr_AddArrayStringIndexed(scrContext, scr_const.ai);
  Scr_AddInt(scrContext, v5);
  Scr_AddArrayStringIndexed(scrContext, scr_const.expendable);
  Scr_AddInt(scrContext, v6);
  Scr_AddArrayStringIndexed(scrContext, scr_const.other);
}

/*
==============
SentientCmd_GetSentientLimits
==============
*/
void SentientCmd_GetSentientLimits(scrContext_t *scrContext)
{
  Scr_MakeArray(scrContext);
  Scr_AddInt(scrContext, level.maxSentients);
  Scr_AddArrayStringIndexed(scrContext, scr_const.all);
  Scr_AddInt(scrContext, level.maxNonAiSentients);
  Scr_AddArrayStringIndexed(scrContext, scr_const.other);
}

/*
==============
SentientCmd_MakeEntitySentient
==============
*/
void SentientCmd_MakeEntitySentient(scrContext_t *scrContext, scr_entref_t entref)
{
  scrContext_t *v3; 
  gentity_s *Entity; 
  int v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  sentient_s *sentient; 
  scr_string_t ConstString; 
  scr_string_t v12; 
  const char *v13; 
  const char *v14; 
  sentient_s *v15; 
  unsigned int maxSentients; 
  unsigned int v17; 
  __int64 v18; 
  gentity_s *ent; 
  __int64 v20; 
  unsigned __int16 model; 
  XModel *v22; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  BOOL expendable; 
  EntHandle *p_ownerNum; 
  int number; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  const char *name; 
  const char *v32; 
  const char *v34; 
  char *fmt; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  int v39; 
  team_t outTeam; 
  char *v41; 
  const char *v42; 
  scrContext_t *v43; 
  gentity_s *v44; 
  char output[512]; 

  v3 = scrContext;
  v43 = scrContext;
  Entity = GetEntity(entref);
  _R15 = Entity;
  v44 = Entity;
  if ( Entity->client )
  {
    Scr_Error(COM_ERR_2417, v3, "Do not use makeEntitySentient on players");
    v6 = 0;
    goto LABEL_100;
  }
  if ( Entity->actor )
  {
    Scr_Error(COM_ERR_2418, v3, "Do not use makeEntitySentient on actors");
    v6 = 0;
    goto LABEL_100;
  }
  if ( Entity->agent )
  {
    Scr_Error(COM_ERR_2419, v3, "Do not use makeEntitySentient on agents");
    v6 = 0;
    goto LABEL_100;
  }
  v7 = Scr_GetNumParam(v3) > 1 && Scr_GetType(v3, 1u) && Scr_GetInt(v3, 1u);
  v8 = Scr_GetNumParam(v3) > 2 && Scr_GetType(v3, 2u) && Scr_GetInt(v3, 2u);
  v9 = Scr_GetNumParam(v3) > 3 && Scr_GetType(v3, 3u) && Scr_GetInt(v3, 3u);
  sentient = _R15->sentient;
  if ( sentient )
  {
    sentient->expendable = v7;
LABEL_87:
    if ( v8 )
    {
      if ( _R15->s.eType != ET_SCRIPTMOVER )
        Scr_Error(COM_ERR_5300, v3, "dangerousAerialVehicleScriptMover can only be set on a scriptmover entity\n");
      if ( v9 )
        Scr_Error(COM_ERR_5390, v3, "A scriptmover entity can only have one sentient type (dangerous aerial vehicle or harmless aerial vehicle)\n");
      _R15->sentient->sentientFlags |= 1u;
    }
    if ( v9 )
    {
      if ( _R15->s.eType != ET_SCRIPTMOVER )
        Scr_Error(COM_ERR_5391, v3, "harmlessAerialVehicleScriptMover can only be set on a scriptmover entity\n");
      if ( v8 )
        Scr_Error(COM_ERR_5392, v3, "A scriptmover entity can only have one sentient type (dangerous aerial vehicle or harmless aerial vehicle)\n");
      _R15->sentient->sentientFlags |= 2u;
    }
    v6 = 1;
    goto LABEL_100;
  }
  ConstString = Scr_GetConstString(v3, 0);
  v12 = ConstString;
  if ( !ConstString )
  {
    v6 = 0;
    goto LABEL_100;
  }
  if ( !Com_Teams_TeamFromString(ConstString, &outTeam) )
  {
    v13 = SL_ConvertToString(v12);
    v14 = j_va("unknown team '%s'", v13);
    Scr_Error(COM_ERR_2420, v3, v14);
  }
  v15 = Sentient_Alloc((SentientType)(v7 + 2));
  _R15->sentient = v15;
  if ( v15 )
  {
    Sentient_Init(v15, _R15, outTeam);
    if ( _R15->s.eType == ET_SCRIPTMOVER )
    {
      if ( _R15->model )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm0, dword ptr [r15+10Ch]
        }
        if ( !_R15->model )
        {
          __asm { vucomiss xmm0, dword ptr [r15+110h] }
          if ( !_R15->model )
          {
            __asm { vucomiss xmm0, dword ptr [r15+114h] }
            if ( !_R15->model && !G_Utils_GetModelBounds(_R15, &_R15->r.box) )
            {
              v34 = j_va("Entity %d being made a sentient, but physics are not properly initialized.", (unsigned int)_R15->s.number);
              Scr_Error(COM_ERR_2422, v3, v34);
            }
          }
        }
      }
    }
    goto LABEL_87;
  }
  Com_Printf(24, "Sentients:\n");
  maxSentients = level.maxSentients;
  v6 = 0;
  if ( !level.maxSentients )
    goto LABEL_78;
  v17 = 0;
  do
  {
    v18 = v17;
    if ( !level.sentients[v18].inuse )
      goto LABEL_76;
    ent = level.sentients[v18].ent;
    if ( !ent )
      goto LABEL_48;
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v20 = ent - g_entities;
    if ( (unsigned int)v20 >= 0x800 )
    {
      LODWORD(v37) = 2048;
      LODWORD(v36) = ent - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v36, v37) )
        __debugbreak();
    }
    if ( G_IsEntityInUse((__int16)v20) )
    {
      if ( !ent->agent || ent->classname )
        v42 = SL_ConvertToStringSafe(ent->classname);
      else
        v42 = "agent_slot";
      model = ent->model;
      if ( model )
        v22 = G_Utils_GetModel(model);
      else
        v22 = NULL;
      if ( ent->s.weaponHandle.m_mapEntryId )
      {
        Instance = GWeaponMap::GetInstance();
        Weapon = BgWeaponMap::GetWeapon(Instance, ent->s.weaponHandle);
        BG_GetWeaponName(Weapon, output, 0x200u);
        v41 = output;
        goto LABEL_50;
      }
    }
    else
    {
LABEL_48:
      v22 = NULL;
      v42 = "unused_ent";
      ent = NULL;
    }
    v41 = "none";
LABEL_50:
    outTeam = level.sentients[v18].ai != NULL;
    if ( !ent || (v39 = 1, !ent->client) )
      v39 = 0;
    expendable = level.sentients[v18].expendable;
    if ( ent && (p_ownerNum = &ent->r.ownerNum, EntHandle::isDefined(&ent->r.ownerNum)) )
    {
      number = p_ownerNum->number;
      if ( (unsigned int)(number - 1) >= 0x7FF )
      {
        LODWORD(v37) = 2047;
        LODWORD(v36) = number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      v28 = p_ownerNum->number;
      if ( (unsigned int)(v28 - 1) >= 0x800 )
      {
        LODWORD(v37) = 2048;
        LODWORD(v36) = v28 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v29 = v28 - 1;
      if ( g_entities[v29].r.isInUse != g_entityIsInUse[v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v29] )
      {
        LODWORD(v37) = p_ownerNum->number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v37) )
          __debugbreak();
      }
      v30 = (__int16)(p_ownerNum->number - 1);
    }
    else
    {
      v30 = -1;
    }
    if ( v22 )
      name = v22->name;
    else
      name = "none";
    LODWORD(v38) = v30;
    LODWORD(v36) = expendable;
    LODWORD(fmt) = v39;
    Com_Printf(24, "  Sentient[%2i]: <ai:%i> <client:%i> <expendable:%i> <class:%s> <model:%s> <weapon:%s> <owner:%i>\n", v17, (unsigned int)outTeam, fmt, v36, v42, name, v41, v38);
    maxSentients = level.maxSentients;
LABEL_76:
    ++v17;
  }
  while ( v17 < maxSentients );
  v3 = v43;
  _R15 = v44;
LABEL_78:
  v32 = j_va("Too many non-expendable sentients. Unable to make entity %d a sentient (see log for full sentients info)\n", (unsigned int)_R15->s.number);
  Scr_Error(COM_ERR_2421, v3, v32);
LABEL_100:
  Scr_AddBool(v3, v6);
}

/*
==============
SentientCmd_FreeEntitySentient
==============
*/
void SentientCmd_FreeEntitySentient(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gentity_s *v4; 
  sentient_s *sentient; 

  Entity = GetEntity(entref);
  v4 = Entity;
  if ( Entity->client )
  {
    Scr_Error(COM_ERR_2423, scrContext, "Do not use FreeEntitySentient on players");
  }
  else if ( Entity->actor )
  {
    Scr_Error(COM_ERR_2424, scrContext, "Do not use FreeEntitySentient on actors");
  }
  else if ( Entity->agent )
  {
    Scr_Error(COM_ERR_2425, scrContext, "Do not use FreeEntitySentient on agents");
  }
  else
  {
    sentient = Entity->sentient;
    if ( sentient )
    {
      Sentient_Free(sentient);
      v4->sentient = NULL;
    }
  }
}

/*
==============
SentientCmd_LastKnownTime
==============
*/
void SentientCmd_LastKnownTime(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  gentity_s *v4; 
  const sentient_s *sentient; 
  const char *v6; 
  ComErrorCode v7; 
  const sentient_s *v8; 
  int lastKnownPosTime; 

  Entity = GetEntity(entref);
  v4 = GScr_GetEntity(0);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 883, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  sentient = Entity->sentient;
  if ( !sentient )
  {
    v6 = "'LastKnownTime' must be called on sentients\n";
    v7 = COM_ERR_2426;
LABEL_9:
    Scr_Error(v7, scrContext, v6);
    lastKnownPosTime = 0;
    goto LABEL_10;
  }
  v8 = v4->sentient;
  if ( !v8 )
  {
    v6 = "'LastKnownTime' must be passed a sentient\n";
    v7 = COM_ERR_2427;
    goto LABEL_9;
  }
  lastKnownPosTime = Sentient_GetSentientInfo(sentient, v8)->lastKnownPosTime;
LABEL_10:
  Scr_AddInt(scrContext, lastKnownPosTime);
}

/*
==============
SentientCmd_LastKnownPos
==============
*/
void SentientCmd_LastKnownPos(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  const gentity_s *v4; 
  const sentient_s *sentient; 
  vec3_t outLastKnownPos; 

  Entity = GetEntity(entref);
  v4 = GScr_GetEntity(0);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 924, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  sentient = Entity->sentient;
  if ( sentient )
  {
    Sentient_GetLastKnownEnemyPos(sentient, v4, &outLastKnownPos);
    Scr_AddVector(scrContext, outLastKnownPos.v);
  }
  else
  {
    Scr_Error(COM_ERR_2428, scrContext, "'LastKnownPos' must be called on sentients\n");
    Scr_AddInt(scrContext, 0);
  }
}

/*
==============
SentientCmd_IsInDoor
==============
*/
void SentientCmd_IsInDoor(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v3; 
  pathnode_t *v4; 

  v3 = Sentient_Get(scrContext, entref);
  v4 = Sentient_NearestNode(v3);
  if ( v4 && (v4->constant.spawnflags & 0x2000) != 0 )
    Scr_AddBool(scrContext, 1);
  else
    Scr_AddBool(scrContext, 0);
}

/*
==============
SentientCmd_GetDropToFloorPosition
==============
*/
void SentientCmd_GetDropToFloorPosition(scrContext_t *scrContext, scr_entref_t entref)
{
  const sentient_s *v3; 
  gentity_s *ent; 
  vec3_t vectorValue; 

  v3 = Sentient_Get(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) )
    Scr_GetVector(scrContext, 0, &vectorValue);
  else
    Sentient_GetOrigin(v3, &vectorValue);
  ent = v3->ent;
  if ( v3->ent->client || ent->actor )
  {
    if ( AI_GetDropToFloorPosition(ent, &vectorValue) )
      Scr_AddVector(scrContext, vectorValue.v);
    else
      Scr_AddUndefined(scrContext);
  }
  else
  {
    Scr_Error(COM_ERR_2429, scrContext, "GetDropToFloorPosition supported for players and AI only.\n");
  }
}

/*
==============
SentientCmd_IsBadGuy
==============
*/
void SentientCmd_IsBadGuy(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v3; 
  unsigned int eTeam; 
  bitarray<224> *BadGuyTeamFlags; 

  v3 = Sentient_Get(scrContext, entref);
  if ( v3 && ((eTeam = v3->eTeam, !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80)) ? (BadGuyTeamFlags = (bitarray<224> *)Com_TeamsMP_GetBadGuyTeamFlags()) : (BadGuyTeamFlags = (bitarray<224> *)Com_TeamsSP_GetBadGuyTeamFlags()), bitarray_base<bitarray<224>>::testBit(BadGuyTeamFlags, eTeam)) )
    Scr_AddBool(scrContext, 1);
  else
    Scr_AddBool(scrContext, 0);
}

/*
==============
SentientCmd_SetHitLocDamageTable
==============
*/
void SentientCmd_SetHitLocDamageTable(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v3; 
  GCombat *v4; 
  scr_string_t ConstString; 
  sentient_s *sentient; 
  const char *String; 
  const char *v8; 

  v3 = Sentient_Get(scrContext, entref);
  if ( Scr_GetNumParam(scrContext) )
  {
    if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v4 = GCombat::ms_gCombatSystem;
    ConstString = Scr_GetConstString(scrContext, 0);
    v3->ent->sentient->locDamageTableIndex = GCombat::GetHitLocDamageTableIndex(v4, ConstString);
    sentient = v3->ent->sentient;
    if ( sentient->locDamageTableIndex == -1 )
    {
      sentient->locDamageTableIndex = 0;
      String = Scr_GetString(scrContext, 0);
      v8 = j_va("Cannot find %s Hit Location Damage Table in hardcoded table array.  Using default dmg table.\n", String);
      Scr_Error(COM_ERR_2431, scrContext, v8);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2430, scrContext, "Must provide a string value for <hitLocDamageTable>\n");
  }
}

/*
==============
SentientCmd_HasTacVis
==============
*/
void SentientCmd_HasTacVis(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v7; 
  const tacpoint_t *v8; 
  const tacpoint_t *ClosestPointWithStaticNavLos; 
  sentient_s *sentient; 
  int NumParam; 
  bool v18; 
  bool HasAnyVis; 
  bfx::AreaHandle hArea; 
  __int64 v25; 
  vec3_t vectorValue; 
  vec3_t losPos; 
  bfx::PathSpec pPathSpec; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  v25 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v7 = Sentient_Get(scrContext, entref);
  v8 = Sentient_NearestTacPoint(v7);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( Scr_GetType(scrContext, 0) == VAR_VECTOR )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
    pPathSpec.m_usePathSharingPenalty = 0;
    __asm
    {
      vmovss  [rbp+0A0h+pPathSpec.m_pathSharingPenalty], xmm7
      vmovss  [rbp+0A0h+pPathSpec.m_maxPathSharingPenalty], xmm7
      vmovss  [rbp+0A0h+pPathSpec.m_maxSearchDist], xmm7
    }
    bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
    pPathSpec.m_snapMode = SNAP_CLOSEST;
    bfx::AreaHandle::AreaHandle(&hArea);
    pPathSpec.m_obstacleBlockageFlags = 0;
    __asm { vmovss  xmm2, cs:__real@bf800000; radius }
    Nav_GetClosestVerticalPosInMostLikelySpace(&vectorValue, NAV_LAYER_HUMAN, *(float *)&_XMM2, &pPathSpec, &losPos, &hArea);
    ClosestPointWithStaticNavLos = TacGraph_FindClosestPointWithStaticNavLos(&vectorValue, &losPos, &hArea);
    bfx::AreaHandle::~AreaHandle(&hArea);
  }
  else
  {
    _RBX = GScr_GetEntity(0);
    sentient = _RBX->sentient;
    if ( !sentient )
    {
      Scr_Error(COM_ERR_2432, scrContext, "other ent must be a sentient");
      sentient = _RBX->sentient;
    }
    ClosestPointWithStaticNavLos = Sentient_NearestTacPoint(sentient);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  dword ptr [rbp+0A0h+vectorValue], xmm0
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  dword ptr [rbp+0A0h+vectorValue+4], xmm1
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  dword ptr [rbp+0A0h+vectorValue+8], xmm0
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam > 1 && Scr_GetType(scrContext, 1u) == VAR_INTEGER )
    Scr_GetInt(scrContext, 1u);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( NumParam > 2 && Scr_GetType(scrContext, 2u) )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm { vmovaps xmm6, xmm0 }
  }
  v18 = 1;
  if ( NumParam > 3 && Scr_GetType(scrContext, 3u) )
    v18 = Scr_GetInt(scrContext, 3u) != 0;
  if ( v8 && ClosestPointWithStaticNavLos )
  {
    __asm
    {
      vcomiss xmm6, xmm7
      vmovaps xmm2, xmm6; radius
    }
    if ( v18 )
      HasAnyVis = TacGraph_HasAnyVis(v8, &vectorValue, *(float *)&_XMM2);
    else
      HasAnyVis = TacGraph_HasAllVis(v8, &vectorValue, *(float *)&_XMM2);
  }
  else
  {
    HasAnyVis = 0;
  }
  Scr_AddBool(scrContext, HasAnyVis);
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
SentientCmd_GetEnemyInfo
==============
*/
void SentientCmd_GetEnemyInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v3; 
  gentity_s *Entity; 
  const gentity_s **p_ent; 
  gentity_s *v6; 
  __int64 v7; 
  AICommonInterface *m_pAI; 
  sentient_s *sentient; 
  AICommonWrapper v10; 

  v3 = Sentient_Get(scrContext, entref);
  Entity = GScr_GetEntity(0);
  p_ent = (const gentity_s **)&v3->ai->ent;
  v6 = Entity;
  if ( p_ent )
  {
    AIActorInterface::AIActorInterface(&v10.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v10.m_newAgentInterface);
    v10.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v10.m_botInterface);
    v10.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v10.m_botAgentInterface);
    v10.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    v10.m_pAI = NULL;
    AICommonWrapper::Setup(&v10, *p_ent);
    m_pAI = v10.m_pAI;
    if ( !v10.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 1153, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( v6 )
    {
      sentient = v6->sentient;
      if ( sentient )
      {
        LOBYTE(v7) = 20;
        m_pAI->GetPerfectInfo(m_pAI, sentient, v7);
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_2433, scrContext, "GetEnemyInfo must be called on sentient AI entity (Actor or Bot)");
  }
}

/*
==============
SentientCmd_CopyEnemyInfo
==============
*/
void SentientCmd_CopyEnemyInfo(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v3; 
  gentity_s *Entity; 
  EntHandle *sentient; 
  sentient_s *v6; 
  int number; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  gentity_s *v11; 
  const gentity_s **p_ent; 
  __int64 v13; 
  AICommonInterface *m_pAI; 
  void (__fastcall *SentientInfo_Copy)(AICommonInterface *, ai_common_t *, int, unsigned __int8); 
  signed __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  AICommonWrapper v19; 

  v3 = Sentient_Get(scrContext, entref);
  if ( !v3->ai )
    Scr_Error(COM_ERR_2434, scrContext, "CopyEnemyInfo can only be called on a sentient AI");
  Entity = GScr_GetEntity(0);
  sentient = (EntHandle *)Entity->sentient;
  if ( !sentient )
  {
    Scr_Error(COM_ERR_2435, scrContext, "CopyEnemyInfo can only copy from a sentient");
    sentient = (EntHandle *)Entity->sentient;
  }
  if ( EntHandle::isDefined(sentient + 18) )
  {
    v6 = Entity->sentient;
    number = v6->targetEnt.number;
    if ( (unsigned int)(number - 1) >= 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", number - 1, 2047) )
      __debugbreak();
    v8 = v6->targetEnt.number;
    if ( (unsigned int)(v8 - 1) >= 0x800 )
    {
      LODWORD(v18) = 2048;
      LODWORD(v17) = v8 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v9 = v8 - 1;
    if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v9] )
    {
      LODWORD(v18) = v6->targetEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v18) )
        __debugbreak();
    }
    v10 = v6->targetEnt.number;
    v11 = &g_entities[v10 - 1];
    if ( !g_entities[v10 - 1].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 1185, ASSERT_TYPE_ASSERT, "(pEnemy->sentient)", (const char *)&queryFormat, "pEnemy->sentient") )
      __debugbreak();
    p_ent = (const gentity_s **)&v3->ai->ent;
    AIActorInterface::AIActorInterface(&v19.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v19.m_newAgentInterface);
    v19.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v19.m_botInterface);
    v19.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v19.m_botAgentInterface);
    m_pAI = NULL;
    v19.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    v19.m_pAI = NULL;
    if ( p_ent )
    {
      AICommonWrapper::Setup(&v19, *p_ent);
      m_pAI = v19.m_pAI;
    }
    if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 1187, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    SentientInfo_Copy = m_pAI->SentientInfo_Copy;
    v16 = v11->sentient - level.sentients;
    if ( (unsigned __int64)(v16 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v16, "signed", v16) )
      __debugbreak();
    LOBYTE(v13) = 20;
    SentientInfo_Copy(m_pAI, Entity->sentient->ai, v16, v13);
  }
}

/*
==============
SentientCmd_GetEnemySqDist
==============
*/
void SentientCmd_GetEnemySqDist(scrContext_t *scrContext, scr_entref_t entref)
{
  Sentient_Get(scrContext, entref);
  Scr_Error(COM_ERR_2395, scrContext, "GetEnemySqDist is depricated, use GetClosestEnemySqDist.\n");
}

/*
==============
SentientCmd_GetClosestEnemySqDist
==============
*/
void SentientCmd_GetClosestEnemySqDist(scrContext_t *scrContext, scr_entref_t entref)
{
  sentient_s *v5; 
  const sentient_s *v6; 
  bool v8; 
  unsigned int v11; 
  AICommonInterface *m_pAI; 
  bitarray<224> *p_result; 
  unsigned int v14; 
  int v17; 
  const gentity_s **p_ent; 
  sentient_s *i; 
  AICommonWrapper v33; 
  vec3_t vectorValue; 
  vec3_t vOriginOut; 
  bitarray<224> result; 

  __asm { vmovaps [rsp+130h+var_30], xmm6 }
  v5 = Sentient_Get(scrContext, entref);
  v6 = v5;
  __asm { vmovss  xmm6, cs:__real@4cbebc20 }
  if ( level.teammode == TEAMMODE_FFA )
  {
    v8 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+30h+result.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+30h+result.array+10h], xmm1
    }
    v11 = _RAX->array[6] & 0xFFEFFFFF;
    if ( v8 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v11 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, v5->eTeam);
  }
  m_pAI = NULL;
  p_result = &result;
  v14 = 0;
  while ( !p_result->array[0] )
  {
    ++v14;
    p_result = (bitarray<224> *)((char *)p_result + 4);
    if ( v14 >= 7 )
      goto LABEL_38;
  }
  if ( !v6->ai && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 132, ASSERT_TYPE_ASSERT, "( self->ai )", (const char *)&queryFormat, "self->ai") )
    __debugbreak();
  if ( !v6->ai->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 133, ASSERT_TYPE_ASSERT, "( self->ai->sentientInfo )", (const char *)&queryFormat, "self->ai->sentientInfo") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) )
    Scr_GetVector(scrContext, 0, &vectorValue);
  else
    Sentient_GetOrigin(v6, &vectorValue);
  if ( Scr_GetNumParam(scrContext) <= 1 )
  {
    v17 = 0;
  }
  else
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    v17 = level.time - _EAX;
    if ( level.time - _EAX < 0 )
      v17 = 0;
  }
  p_ent = (const gentity_s **)&v6->ai->ent;
  AIActorInterface::AIActorInterface(&v33.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v33.m_newAgentInterface);
  v33.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v33.m_botInterface);
  v33.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v33.m_botAgentInterface);
  v33.m_pAI = NULL;
  v33.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  if ( p_ent )
  {
    AICommonWrapper::Setup(&v33, *p_ent);
    m_pAI = v33.m_pAI;
  }
  if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 147, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  for ( i = Sentient_FirstSentient(&result); i; i = Sentient_NextSentient(i, &result) )
  {
    if ( v6->ai->sentientInfo[i - level.sentients].lastKnownPosTime > v17 && !m_pAI->CheckIgnore(m_pAI, i) )
    {
      Sentient_GetOrigin(i, &vOriginOut);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+30h+vOriginOut]
        vsubss  xmm3, xmm0, dword ptr [rbp+30h+vectorValue]
        vmovss  xmm1, dword ptr [rbp+30h+vOriginOut+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+30h+vectorValue+4]
        vmovss  xmm0, dword ptr [rbp+30h+vOriginOut+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+30h+vectorValue+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vminss  xmm6, xmm2, xmm6
      }
    }
  }
  __asm { vmovaps xmm1, xmm6; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
LABEL_38:
  __asm { vmovaps xmm6, [rsp+130h+var_30] }
}

/*
==============
SentientCmd_CreateThreatBiasGroup
==============
*/
void SentientCmd_CreateThreatBiasGroup(scrContext_t *scrContext)
{
  scr_string_t ConstString; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_ParamError(COM_ERR_2396, scrContext, 0, "createthreatbiasgroup [name]");
  ConstString = Scr_GetConstString(scrContext, 0);
  AICommonInterface::CreateThreatBiasGroup(ConstString);
}

/*
==============
SentientCmd_ThreatBiasGroupExists
==============
*/
void SentientCmd_ThreatBiasGroupExists(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  int ThreatBiasGroupIndex; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_ParamError(COM_ERR_2397, scrContext, 0, "threatbiasgroupexists [name]");
  ConstString = Scr_GetConstString(scrContext, 0);
  ThreatBiasGroupIndex = AICommonInterface::FindThreatBiasGroupIndex(ConstString);
  Scr_AddBool(scrContext, ThreatBiasGroupIndex >= 0);
}

/*
==============
SentientCmd_GetThreatBias
==============
*/
void SentientCmd_GetThreatBias(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  int ThreatBiasGroupIndex; 
  scr_string_t v4; 
  int v5; 
  const char *v6; 
  const char *v7; 
  const char *String; 
  const char *v9; 
  int ThreatBias; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_ParamError(COM_ERR_2398, scrContext, 0, "getthreatbias [group for] [group against]");
  ConstString = Scr_GetConstString(scrContext, 0);
  ThreatBiasGroupIndex = AICommonInterface::FindThreatBiasGroupIndex(ConstString);
  v4 = Scr_GetConstString(scrContext, 1u);
  v5 = AICommonInterface::FindThreatBiasGroupIndex(v4);
  if ( ThreatBiasGroupIndex >= 0 )
  {
    if ( v5 >= 0 )
    {
      ThreatBias = AICommonInterface::GetThreatBias(ThreatBiasGroupIndex, v5);
      Scr_AddInt(scrContext, ThreatBias);
    }
    else
    {
      String = Scr_GetString(scrContext, 1u);
      v9 = j_va("Invalid threat bias group '%s'.\n", String);
      Scr_Error(COM_ERR_2400, scrContext, v9);
    }
  }
  else
  {
    v6 = Scr_GetString(scrContext, 0);
    v7 = j_va("Invalid threat bias group '%s'.\n", v6);
    Scr_Error(COM_ERR_2399, scrContext, v7);
  }
}

/*
==============
Sentient_Get
==============
*/
sentient_s *Sentient_Get(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  sentient_s *result; 

  entnum = entref.entnum;
  if ( entref.entclass )
    goto LABEL_6;
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient_script_cmd.cpp", 58, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  result = g_entities[entnum].sentient;
  if ( !result )
  {
LABEL_6:
    Scr_ObjectError(COM_ERR_2394, scrContext, "not a sentient");
    return 0i64;
  }
  return result;
}

